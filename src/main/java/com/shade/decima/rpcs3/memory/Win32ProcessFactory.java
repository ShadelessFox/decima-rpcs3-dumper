package com.shade.decima.rpcs3.memory;

final class Win32ProcessFactory implements ProcessFactory {
    @Override
    public Process open(long pid) {
        return Win32Process.open(pid);
    }
}
