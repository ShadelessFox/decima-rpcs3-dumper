package com.shade.decima.rpcs3.memory;

import java.lang.foreign.MemorySegment;

final class Win32Process extends Process {
    private final long pid;
    private final MemorySegment handle;

    Win32Process(long pid, MemorySegment handle) {
        this.pid = pid;
        this.handle = handle;
    }

    @Override
    public void read(long address, MemorySegment buffer, long off, int len) {
        boolean result = Kernel32.readProcessMemory(
            handle,
            MemorySegment.ofAddress(address),
            buffer,
            len,
            MemorySegment.NULL);
        if (!result) {
            throw new IllegalStateException(
                "Failed to read %d bytes at %#x from process %d: %10x".formatted(len, address, pid, Kernel32.getLastError()));
        }
    }

    @Override
    public void close() {
        if (!Kernel32.closeHandle(handle)) {
            throw new IllegalStateException(
                "Failed to close process %d: %10x".formatted(pid, Kernel32.getLastError()));
        }
    }
}
