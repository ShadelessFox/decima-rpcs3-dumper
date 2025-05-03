package com.shade.decima.rpcs3;

import com.shade.decima.rpcs3.util.Pointer;

public record TypedPointer<T>(Typed<T> inner, Pointer pointer) {
    public static <T> TypedPointer<T> of(Typed<T> inner, Pointer pointer) {
        return new TypedPointer<>(inner, pointer);
    }

    public T read() {
        return inner.read(pointer);
    }

    public T read(int index) {
        return inner.read(pointer, index);
    }
}
