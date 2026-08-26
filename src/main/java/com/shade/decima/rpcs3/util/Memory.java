package com.shade.decima.rpcs3.util;

import java.lang.foreign.MemorySegment;

@FunctionalInterface
public interface Memory {
    void read(long address, MemorySegment buffer, int size);

    default Memory rebase(long offset) {
        return (address, buffer, size) -> read(address + offset, buffer, size);
    }
}
