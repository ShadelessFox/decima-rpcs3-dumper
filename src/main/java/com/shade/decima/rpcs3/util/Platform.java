package com.shade.decima.rpcs3.util;

public enum Platform {
    WINDOWS,
    LINUX,
    MACOS,
    UNSUPPORTED;

    public static Platform current() {
        var name = System.getProperty("os.name").toLowerCase();
        if (name.startsWith("win")) {
            return WINDOWS;
        } else if (name.startsWith("linux")) {
            return LINUX;
        } else if (name.startsWith("mac")) {
            return MACOS;
        } else {
            return UNSUPPORTED;
        }
    }
}
