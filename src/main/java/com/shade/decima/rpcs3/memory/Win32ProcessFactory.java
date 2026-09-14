package com.shade.decima.rpcs3.memory;

final class Win32ProcessFactory implements ProcessFactory {
    @Override
    public Process open(long pid) {
        var handle = Kernel32.openProcess(Kernel32.PROCESS_VM_READ, false, Math.toIntExact(pid));
        if (handle.address() == 0L) {
            throw new IllegalStateException("Failed to open process");
        }
        return new Win32Process(pid, handle);
    }
}
