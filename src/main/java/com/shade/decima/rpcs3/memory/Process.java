package com.shade.decima.rpcs3.memory;

import com.shade.decima.rpcs3.util.Platform;

import java.lang.foreign.MemorySegment;
import java.nio.file.Path;
import java.util.Optional;
import java.util.OptionalLong;

public abstract sealed class Process
    implements Memory, AutoCloseable
    permits Win32Process, LinuxProcess {

    public static Optional<Process> open(String name) {
        var ignoreCase = Platform.current() == Platform.WINDOWS;
        var pid = find(name, ignoreCase);
        return pid.stream()
            .mapToObj(Process::open)
            .findFirst();
    }

    private static Process open(long pid) {
        var factory = ProcessFactory.get();
        return factory.open(pid);
    }

    private static OptionalLong find(String name, boolean ignoreCase) {
        try (var processes = ProcessHandle.allProcesses()) {
            return processes
                .filter(process -> process.info().command()
                    .map(command -> Path.of(command).getFileName().toString())
                    .filter(module -> ignoreCase ? module.equalsIgnoreCase(name) : module.equals(name))
                    .isPresent())
                .mapToLong(ProcessHandle::pid)
                .findFirst();
        }
    }

    @Override
    public abstract void read(long address, MemorySegment buffer, long off, int len);

    @Override
    public abstract void close();
}
