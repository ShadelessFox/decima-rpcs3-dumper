package com.shade.decima.rpcs3.memory;

import com.shade.decima.rpcs3.util.Platform;

sealed interface ProcessFactory
    permits Win32ProcessFactory, LinuxProcessFactory {

    static ProcessFactory get() {
        return switch (Platform.current()) {
            case WINDOWS -> new Win32ProcessFactory();
            case LINUX -> new LinuxProcessFactory();
            default -> throw new UnsupportedOperationException("Unsupported platform");
        };
    }

    Process open(long pid);
}
