package com.shade.decima.rpcs3.rtti;

public enum RTTIKind {
    COMPOUND,
    ENUM,
    ATOM,
    POINTER,
    CONTAINER;

    public static RTTIKind valueOf(int value) {
        return switch (value) {
            case 1 -> ATOM;
            case 2 -> POINTER;
            case 3 -> CONTAINER;
            case 4 -> ENUM;
            case 5 -> COMPOUND;
            default -> throw new IllegalArgumentException("Unexpected RTTI kind: " + value);
        };
    }
}
