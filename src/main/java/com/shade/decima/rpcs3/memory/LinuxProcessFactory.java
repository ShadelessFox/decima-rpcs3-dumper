package com.shade.decima.rpcs3.memory;

import java.io.IOException;
import java.nio.channels.FileChannel;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;

final class LinuxProcessFactory implements ProcessFactory {
    @Override
    public Process open(long pid) {
        try {
            var memory = FileChannel.open(Path.of("/proc", Long.toString(pid), "mem"), StandardOpenOption.READ);
            return new LinuxProcess(pid, memory);
        } catch (IOException e) {
            throw new IllegalStateException("Failed to open process " + pid, e);
        }
    }
}
