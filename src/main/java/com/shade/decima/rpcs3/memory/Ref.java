package com.shade.decima.rpcs3.memory;

public record Ref<T>(Type<T> type, Pointer pointer) {
    public T read() {
        return type.read(pointer);
    }
}
