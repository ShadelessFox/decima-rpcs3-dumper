package com.shade.decima.rpcs3.util;

import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.UncheckedIOException;
import java.lang.foreign.MemorySegment;
import java.net.InetSocketAddress;
import java.net.SocketAddress;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.SocketChannel;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.function.Function;

public final class Pine implements Memory, Closeable {
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

    private final SocketChannel channel;

    public static Pine connect(SocketAddress address) throws IOException {
        var channel = SocketChannel.open();
        channel.configureBlocking(true);
        channel.connect(address);
        return new Pine(channel);
    }

    public static Pine connect(String host, int port) throws IOException {
        return connect(new InetSocketAddress(host, port));
    }

    private Pine(SocketChannel channel) {
        this.channel = channel;
    }

    public Pointer memory() {
        return new Pointer(this, 0);
    }

    public Pointer memory(long base) {
        return new Pointer(rebase(base), 0);
    }

    public byte read8(int address) throws IOException {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead8, payload), IpcResponse::get);
    }

    public short read16(int address) throws IOException {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead16, payload), IpcResponse::getShort);
    }

    public int read32(int address) throws IOException {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead32, payload), IpcResponse::getInt);
    }

    public long read64(int address) throws IOException {
        var payload = ByteBuffer.allocate(4)
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(address)
            .flip();
        return sendMessage(new IpcRequest(MsgRead64, payload), IpcResponse::getLong);
    }

    public void read(int address, ByteBuffer dst) throws IOException {
        while (dst.hasRemaining()) {
            if (dst.remaining() >= 8) {
                dst.putLong(read64(address));
                address += 8;
            }
            if (dst.remaining() >= 4) {
                dst.putInt(read32(address));
                address += 4;
            }
            if (dst.remaining() >= 2) {
                dst.putShort(read16(address));
                address += 2;
            }
            if (dst.remaining() >= 1) {
                dst.put(read8(address));
                address += 1;
            }
        }
    }

    public String getTitle() throws IOException {
        return sendMessage(new IpcRequest(MsgTitle), IpcResponse::getString);
    }

    public String getID() throws IOException {
        return sendMessage(new IpcRequest(MsgID), IpcResponse::getString);
    }

    public String getUUID() throws IOException {
        return sendMessage(new IpcRequest(MsgUUID), IpcResponse::getString);
    }

    public String getGameVersion() throws IOException {
        return sendMessage(new IpcRequest(MsgGameVersion), IpcResponse::getString);
    }

    @Override
    public void read(long address, MemorySegment buffer, int size) {
        var dst = buffer.asByteBuffer().limit(size);
        try {
            read(Math.toIntExact(address), dst);
        } catch (IOException e) {
            throw new UncheckedIOException(e);
        }
    }

    @Override
    public void close() throws IOException {
        channel.close();
    }

    private <T> T sendMessage(IpcRequest request, Function<IpcResponse, T> fn) throws IOException {
        sendRequest(request);
        var response = readResponse();
        if (response.result() != IpcResponse.RESULT_OK) {
            throw new IllegalStateException("Failed to send message: %02X".formatted(response.result()));
        }
        return fn.apply(response);
    }

    private void sendRequest(IpcRequest request) throws IOException {
        var buffer = ByteBuffer.allocate(request.size())
            .order(ByteOrder.LITTLE_ENDIAN)
            .putInt(request.size())
            .put(request.opcode())
            .put(request.payload())
            .flip();

        while (buffer.hasRemaining()) {
            channel.write(buffer);
        }
    }

    private IpcResponse readResponse() throws IOException {
        var buffer = ByteBuffer
            .allocate(5)
            .order(ByteOrder.LITTLE_ENDIAN);

        if (channel.read(buffer) != buffer.capacity()) {
            throw new EOFException();
        }

        buffer.flip();

        var length = buffer.getInt();
        var status = buffer.get();
        var payload = ByteBuffer
            .allocate(length - 5)
            .order(ByteOrder.LITTLE_ENDIAN);

        if (channel.read(payload) != payload.capacity()) {
            throw new EOFException();
        }

        return new IpcResponse(status, payload.flip());
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
