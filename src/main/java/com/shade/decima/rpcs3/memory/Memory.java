package com.shade.decima.rpcs3.memory;

import java.lang.foreign.MemorySegment;

public interface Memory extends AutoCloseable {
    void read(long address, MemorySegment buffer, long off, int len);

    @Override
    void close();

    default Memory rebase(long offset) {
        return new Memory() {
            @Override
            public void read(long address, MemorySegment buffer, long off, int len) {
                Memory.this.read(address + offset, buffer, off, len);
            }

            @Override
            public void close() {
                Memory.this.close();
            }
        };
    }

    default Pointer pointer(long base, long offset) {
        return new Pointer(rebase(base), offset);
    }

    default Pointer pointer(long address) {
        return new Pointer(this, address);
    }

    default Pointer pointer() {
        return new Pointer(this, 0);
    }
}
