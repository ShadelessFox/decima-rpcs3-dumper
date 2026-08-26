package com.shade.decima.rpcs3.util;

final class Win32ProcessFactory implements ProcessFactory {
    @Override
    public Process open(int pid) {
        var handle = Kernel32.openProcess(Kernel32.PROCESS_VM_READ, false, pid);
        if (handle.address() == 0L) {
            throw new IllegalStateException("Failed to open process");
        }
        return new Win32Process(handle);
    }
}
