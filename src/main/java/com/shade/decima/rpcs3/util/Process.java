package com.shade.decima.rpcs3.util;

import java.lang.foreign.MemorySegment;
import java.util.Optional;

public abstract sealed class Process
    implements Memory, AutoCloseable
    permits Win32Process {

    public static Optional<Process> open(String name) {
        var pid = ProcessFinder.get().find(name);
        if (pid.isEmpty()) {
            return Optional.empty();
        }
        var process = ProcessFactory.get().open(pid.getAsInt());
        return Optional.of(process);
    }

    public Pointer memory() {
        return new Pointer(this, 0);
    }

    public Pointer memory(long base) {
        return new Pointer(rebase(base), 0);
    }

    @Override
    public abstract void read(long address, MemorySegment buffer, int size);

    @Override
    public abstract void close();
}
