package com.shade.decima.rpcs3.util;

import java.lang.foreign.Arena;
import java.lang.foreign.MemorySegment;
import java.lang.foreign.ValueLayout;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Objects;

public final class Pointer {
    private final Reader reader;
    private final long address;

    Pointer(Reader reader, long address) {
        this.reader = reader;
        this.address = address;
    }

    @FunctionalInterface
    public interface Reader {
        void read(long address, MemorySegment buffer, int size);
    }

    public byte[] read(int size) {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(size);
            read(buffer, size);
            return buffer.toArray(ValueLayout.JAVA_BYTE);
        }
    }

    public byte readByte() {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(Byte.BYTES);
            read(buffer, Byte.BYTES);
            return buffer.get(ValueLayout.JAVA_BYTE, 0);
        }
    }

    public short readShort() {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(Short.BYTES);
            read(buffer, Short.BYTES);
            return Short.reverseBytes(buffer.get(ValueLayout.JAVA_SHORT, 0));
        }
    }

    public int readInt() {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(Integer.BYTES);
            read(buffer, Integer.BYTES);
            return Integer.reverseBytes(buffer.get(ValueLayout.JAVA_INT, 0));
        }
    }

    public long readLong() {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(Long.BYTES);
            read(buffer, Long.BYTES);
            return Long.reverseBytes(buffer.get(ValueLayout.JAVA_LONG, 0));
        }
    }

    public String readString(Charset charset, int length) {
        try (Arena arena = Arena.ofConfined()) {
            var buffer = arena.allocate(length);
            read(buffer, length);
            return charset.decode(buffer.asByteBuffer()).toString();
        }
    }

    public String readCString() {
        return readCString(256);
    }

    public String readCString(int limit) {
        try (Arena arena = Arena.ofConfined()) {
            int size = 16;
            var segment = arena.allocate(size);
            var buffer = segment.asByteBuffer();
            for (int shift = 0; shift < limit; shift += size) {
                read(address + shift, segment, size);
                for (int i = 0; i < size; i++) {
                    if (buffer.get(i) == 0) {
                        return readString(StandardCharsets.ISO_8859_1, shift + i);
                    }
                }
            }
            throw new IllegalStateException("String out of bounds");
        }
    }

    private void read(MemorySegment buffer, int size) {
        read(address, buffer, size);
    }

    private void read(long address, MemorySegment buffer, int size) {
        reader.read(address, buffer, size);
    }

    public Pointer deref() {
        return new Pointer(reader, Integer.toUnsignedLong(readInt()));
    }

    public Pointer add(long displacement) {
        if (displacement == 0) {
            return this;
        }
        Objects.checkIndex(displacement, Long.MAX_VALUE);
        return new Pointer(reader, address + displacement);
    }

    public long address() {
        return address;
    }

    @Override
    public String toString() {
        return "%#08x".formatted(address);
    }
}
