package com.shade.decima.rpcs3.pine;

import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.net.SocketAddress;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.AsynchronousSocketChannel;
import java.nio.channels.CompletionHandler;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;
import java.util.function.Function;

public final class Pine implements Closeable {
    /** Read 8 bit value to memory. */
    private static final byte MsgRead8 = 0;
    /** Read 16 bit value to memory. */
    private static final byte MsgRead16 = 1;
    /** Read 32 bit value to memory. */
    private static final byte MsgRead32 = 2;
    /** Read 64 bit value to memory. */
    private static final byte MsgRead64 = 3;
    /** Write 8 bit value to memory. */
    private static final byte MsgWrite8 = 4;
    /** Write 16 bit value to memory. */
    private static final byte MsgWrite16 = 5;
    /** Write 32 bit value to memory. */
    private static final byte MsgWrite32 = 6;
    /** Write 64 bit value to memory. */
    private static final byte MsgWrite64 = 7;
    /** Returns the emulator version. */
    private static final byte MsgVersion = 8;
    /** Saves a savestate. */
    private static final byte MsgSaveState = 9;
    /** Loads a savestate. */
    private static final byte MsgLoadState = 0xA;
    /** Returns the game title. */
    private static final byte MsgTitle = 0xB;
    /** Returns the game ID. */
    private static final byte MsgID = 0xC;
    /** Returns the game UUID. */
    private static final byte MsgUUID = 0xD;
    /** Returns the game version. */
    private static final byte MsgGameVersion = 0xE;
    /** Returns the emulator status. */
    private static final byte MsgStatus = 0xF;


    private final AsynchronousSocketChannel channel;

    public static CompletableFuture<Pine> connect(SocketAddress address) throws IOException {
        var channel = AsynchronousSocketChannel.open();
        var future = new CompletableFuture<Pine>();
        channel.connect(address, channel, new CompletionHandler<>() {
            @Override
            public void completed(Void result, AsynchronousSocketChannel attachment) {
                future.complete(new Pine(attachment));
            }

            @Override
            public void failed(Throwable exc, AsynchronousSocketChannel attachment) {
                future.completeExceptionally(exc);
            }
        });
        return future;
    }

    private Pine(AsynchronousSocketChannel channel) {
        this.channel = channel;
    }

    public CompletableFuture<Byte> read8(int address) {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead8, payload), IpcResponse::get);
    }

    public CompletableFuture<Short> read16(int address) {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead16, payload), IpcResponse::getShort);
    }

    public CompletableFuture<Integer> read32(int address) {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead32, payload), IpcResponse::getInt);
    }

    public CompletableFuture<Long> read64(int address) {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead64, payload), IpcResponse::getLong);
    }

    public CompletableFuture<String> getTitle() {
        return sendMessage(new IpcRequest(MsgTitle), IpcResponse::getString);
    }

    public CompletableFuture<String> getID() {
        return sendMessage(new IpcRequest(MsgID), IpcResponse::getString);
    }

    public CompletableFuture<String> getUUID() {
        return sendMessage(new IpcRequest(MsgUUID), IpcResponse::getString);
    }

    public CompletableFuture<String> getGameVersion() {
        return sendMessage(new IpcRequest(MsgGameVersion), IpcResponse::getString);
    }

    @Override
    public void close() throws IOException {
        channel.close();
    }

    private <T> CompletableFuture<T> sendMessage(IpcRequest request, Function<IpcResponse, T> fn) {
        return sendRequest(request)
            .thenCompose(_ -> readResponse())
            .thenApply(response -> {
                if (response.result() != IpcResponse.RESULT_OK) {
                    throw new IllegalStateException("Failed to send message: %02X".formatted(response.result()));
                }
                return fn.apply(response);
            });
    }

    private CompletableFuture<Void> sendRequest(IpcRequest request) {
        var future = new CompletableFuture<Void>();
        var buffer = ByteBuffer.allocate(request.size())
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(request.size())
            .put(request.opcode())
            .put(request.payload())
            .flip();

        channel.write(buffer, null, new CompletionHandler<>() {
            @Override
            public void completed(Integer result, Object attachment) {
                if (result != buffer.capacity()) {
                    future.completeExceptionally(new EOFException());
                }
                future.complete(null);
            }

            @Override
            public void failed(Throwable exc, Object attachment) {
                future.completeExceptionally(exc);
            }
        });

        return future;
    }

    private CompletableFuture<IpcResponse> readResponse() {
        var future = new CompletableFuture<IpcResponse>();
        var buffer = ByteBuffer.allocate(5)
            .order(ByteOrder.LITTLE_ENDIAN);

        channel.read(buffer, null, new CompletionHandler<>() {
            @Override
            public void completed(Integer result, Object attachment) {
                if (result != buffer.capacity()) {
                    future.completeExceptionally(new EOFException());
                }

                buffer.flip();

                var length = buffer.getInt();
                var status = buffer.get();
                var payload = ByteBuffer.allocate(length - 5).order(ByteOrder.LITTLE_ENDIAN);

                int read;
                try {
                    read = channel.read(payload).get();
                } catch (InterruptedException e) {
                    future.completeExceptionally(e);
                    return;
                } catch (ExecutionException e) {
                    future.completeExceptionally(e.getCause());
                    return;
                }

                if (read != payload.capacity()) {
                    future.completeExceptionally(new EOFException());
                }

                future.complete(new IpcResponse(status, payload.flip()));
            }

            @Override
            public void failed(Throwable exc, Object attachment) {
                future.completeExceptionally(exc);
            }
        });

        return future;
    }

    private record IpcRequest(byte opcode, ByteBuffer payload) {
        private static final ByteBuffer EMPTY = ByteBuffer.wrap(new byte[0]);

        private IpcRequest(byte opcode) {
            this(opcode, EMPTY);
        }

        public int size() {
            return 4 + 1 + payload.capacity();
        }
    }

    private record IpcResponse(int result, ByteBuffer payload) {
        static final byte RESULT_OK = 0x00;
        static final byte RESULT_FAIL = (byte) 0xFF;

        public String getString() {
            return getString(StandardCharsets.UTF_8);
        }

        public String getString(Charset charset) {
            var length = payload.getInt();
            if (length == 0) {
                return "";
            }
            var encoded = payload.slice(payload.position(), length - 1);
            var decoded = charset.decode(encoded).toString();
            payload.position(payload.position() + length);
            return decoded;
        }

        public byte get() {
            return payload.get();
        }

        public short getShort() {
            return payload.getShort();
        }

        public int getInt() {
            return payload.getInt();
        }

        public long getLong() {
            return payload.getLong();
        }
    }
}
