package com.shade.decima.rpcs3.gdb;

import java.io.Closeable;
import java.io.IOException;
import java.net.SocketAddress;
import java.nio.ByteBuffer;
import java.nio.channels.SocketChannel;
import java.nio.charset.StandardCharsets;

public final class Gdb implements Closeable {
    private final SocketChannel channel;

    private Gdb(SocketChannel channel) {
        this.channel = channel;
    }

    public static Gdb connect(SocketAddress address) throws Exception {
        var channel = SocketChannel.open(address);
        return new Gdb(channel);
    }

    public String setBreakpoint(long address) throws IOException {
        sendPacket("Z0,%x".formatted(address));
        if (!readAck()) {
            throw new IOException("Failed to set breakpoint at address: " + address);
        }
        var packet = readPacket();
        sendAck(true);
        return packet;
    }

    public String removeBreakpoint(long address) throws IOException {
        sendPacket("z0,%x".formatted(address));
        if (!readAck()) {
            throw new IOException("Failed to remove breakpoint at address: " + address);
        }
        var packet = readPacket();
        sendAck(true);
        return packet;
    }

    public Registers readRegisters() throws IOException {
        sendPacket("g");
        if (!readAck()) {
            throw new IOException("Failed to read registers");
        }
        var packet = readPacket();
        sendAck(true);
        return Registers.parse(packet);
    }

    public void cont() throws IOException {
        sendPacket("vCont;c");
        if (!readAck()) {
            throw new IOException("Failed to continue execution");
        }
    }

    public String contAndWait() throws IOException {
        sendPacket("vCont;c");
        if (!readAck()) {
            throw new IOException("Failed to continue execution");
        }
        var packet = readPacket();
        sendAck(true);
        return packet;
    }

    private void sendAck(boolean accepted) throws IOException {
        writeByte((byte) (accepted ? '+' : '-'));
    }

    private boolean readAck() throws IOException {
        var b = readByte();
        return switch (b) {
            case '+' -> true;
            case '-' -> false;
            default -> throw new IOException("Unexpected GDB response: " + (char) b);
        };
    }

    private void sendPacket(String data) throws IOException {
        int checksum = data.chars().sum() % 256;
        var packet = "$%s#%02x".formatted(data, checksum);
        var buffer = ByteBuffer.wrap(packet.getBytes(StandardCharsets.US_ASCII));

        while (buffer.hasRemaining()) {
            if (channel.write(buffer) == 0) {
                throw new IOException("Failed to write to GDB server");
            }
        }
    }

    private void writeByte(byte b) throws IOException {
        var buffer = ByteBuffer.allocate(1).put(b).flip();
        if (channel.write(buffer) == 0) {
            throw new IOException("Failed to write to GDB server");
        }
    }

    private String readPacket() throws IOException {
        var b = readByte();
        if (b != '$') {
            throw new IOException("Unexpected GDB response: " + (char) b);
        }

        var packet = new StringBuilder();
        while ((b = readByte()) != '#') {
            packet.append((char) b);
        }

        int checksum = 0;
        for (int i = 0; i < 2; i++) {
            checksum = (checksum << 4) | Character.digit(readByte(), 16);
        }

        int actualChecksum = packet.chars().sum() % 256;
        if (checksum != actualChecksum) {
            throw new IOException("Invalid checksum: expected " + checksum + ", computed " + actualChecksum);
        }

        return packet.toString();
    }

    private byte readByte() throws IOException {
        var buffer = ByteBuffer.allocate(1);
        if (channel.read(buffer) != 1) {
            throw new IOException("Failed to read from GDB server");
        }
        return buffer.get(0);
    }

    @Override
    public void close() throws IOException {
        channel.close();
    }
}
