package com.shade.decima.rpcs3.util;

import java.lang.foreign.MemorySegment;

final class Win32Process extends Process {
    private final MemorySegment handle;

    Win32Process(MemorySegment handle) {
        this.handle = handle;
    }

    @Override
    public void read(long address, MemorySegment buffer, int size) {
        boolean result = Kernel32.readProcessMemory(
            handle,
            MemorySegment.ofAddress(address),
            buffer,
            size,
            MemorySegment.NULL);
        if (!result) {
            throw new IllegalStateException("Failed to read memory: %08x".formatted(Kernel32.getLastError()));
        }
    }

    @Override
    public void close() {
        Kernel32.closeHandle(handle);
    }
}
