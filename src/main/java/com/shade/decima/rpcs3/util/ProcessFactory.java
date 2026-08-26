package com.shade.decima.rpcs3.util;

sealed interface ProcessFactory permits Win32ProcessFactory {
    static ProcessFactory get() {
        return switch (Platform.current()) {
            case WINDOWS -> new Win32ProcessFactory();
            default -> throw new UnsupportedOperationException("Unsupported platform");
        };
    }

    Process open(int pid);
}
