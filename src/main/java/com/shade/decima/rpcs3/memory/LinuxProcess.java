package com.shade.decima.rpcs3.memory;

import java.io.EOFException;
import java.io.IOException;
import java.lang.foreign.MemorySegment;
import java.nio.channels.FileChannel;

final class LinuxProcess extends Process {
    private final long pid;
    private final FileChannel memory;

    LinuxProcess(long pid, FileChannel memory) {
        this.pid = pid;
        this.memory = memory;
    }

    @Override
    public void read(long address, MemorySegment buffer, long off, int len) {
        var target = buffer.asSlice(0, len).asByteBuffer();
        try {
            while (target.hasRemaining()) {
                if (memory.read(target, address + target.position()) <= 0) {
                    throw new EOFException("Incomplete process memory read");
                }
            }
        } catch (IOException e) {
            throw new IllegalStateException(
                "Failed to read %d bytes at %#x from process %d".formatted(len, address, pid), e);
        }
    }

    @Override
    public void close() {
        try {
            memory.close();
        } catch (IOException e) {
            throw new IllegalStateException("Failed to close process " + pid, e);
        }
    }
}
