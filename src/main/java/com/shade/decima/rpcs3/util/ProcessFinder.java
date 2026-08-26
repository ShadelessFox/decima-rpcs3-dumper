package com.shade.decima.rpcs3.util;

import java.util.OptionalInt;

sealed interface ProcessFinder permits Win32ProcessFinder {
    static ProcessFinder get() {
        return switch (Platform.current()) {
            case WINDOWS -> new Win32ProcessFinder();
            default -> throw new UnsupportedOperationException("Unsupported platform");
        };
    }

    /**
     * Finds the process ID of a process by its module name.
     *
     * @param name The name of the module (e.g., "rpcs3.exe").
     * @return An {@code OptionalInt} containing the process ID if found, or {@code OptionalInt.empty()} if not found.
     */
    OptionalInt find(String name);
}
