package com.shade.decima.rpcs3.util;

import java.lang.foreign.Arena;
import java.lang.foreign.MemorySegment;
import java.nio.charset.StandardCharsets;
import java.util.Optional;
import java.util.OptionalInt;

public final class Process implements AutoCloseable {
    private final MemorySegment handle;

    private Process(MemorySegment handle) {
        this.handle = handle;
    }

    public static Optional<Process> open(String name) throws Throwable {
        var pid = find("rpcs3.exe");
        if (pid.isEmpty()) {
            return Optional.empty();
        }
        var handle = (MemorySegment) Kernel32.openProcess.invoke(Kernel32.PROCESS_VM_READ, 0, pid.getAsInt());
        if (handle.equals(MemorySegment.NULL)) {
            throw new IllegalStateException("Failed to open process");
        }
        return Optional.of(new Process(handle));
    }

    public Pointer memory() {
        var reader = (Pointer.Reader) (address, buffer, size) -> {
            try {
                int result = (int) Kernel32.readProcessMemory.invoke(
                    handle,
                    MemorySegment.ofAddress(0x300000000L + address),
                    buffer,
                    size,
                    MemorySegment.NULL
                );
                if (result == 0) {
                    throw new IllegalStateException("Failed to read memory");
                }
            } catch (Throwable e) {
                throw new IllegalStateException("Failed to read memory", e);
            }
        };

        return new Pointer(reader, 0);
    }

    @Override
    public void close() {
        try {
            Kernel32.closeHandle.invoke(handle);
        } catch (Throwable e) {
            throw new IllegalStateException("Failed to close process handle", e);
        }
    }

    private static OptionalInt find(String name) throws Throwable {
        var snapshot = (MemorySegment) Kernel32.createToolhelp32Snapshot.invoke(Kernel32.TH32CS_SNAPPROCESS, 0);

        try (Arena arena = Arena.ofConfined()) {
            var entry = arena.allocate(Kernel32.PROCESSENTRY32W);
            Kernel32.PROCESSENTRY32W_dwSize.set(entry, 0L, Math.toIntExact(Kernel32.PROCESSENTRY32W.byteSize()));

            if ((int) Kernel32.process32FirstW.invoke(snapshot, entry) == 1) {
                while ((int) Kernel32.process32NextW.invoke(snapshot, entry) == 1) {
                    var exeFileSegment = (MemorySegment) Kernel32.PROCESSENTRY32W_szExeFile.invoke(entry, 0L);
                    var exeFile = exeFileSegment.getString(0, StandardCharsets.UTF_16LE);
                    if (exeFile.equalsIgnoreCase(name)) {
                        return OptionalInt.of((int) Kernel32.PROCESSENTRY32W_th32ProcessID.get(entry, 0));
                    }
                }
            }

            return OptionalInt.empty();
        } finally {
            Kernel32.closeHandle.invoke(snapshot);
        }
    }
}
