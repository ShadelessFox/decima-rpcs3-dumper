package com.shade.decima.rpcs3.memory;

final class LinuxProcessFactory implements ProcessFactory {
    @Override
    public Process open(long pid) {
        return LinuxProcess.open(pid);
    }
}
