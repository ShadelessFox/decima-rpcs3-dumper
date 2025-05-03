package com.shade.decima.rpcs3;

import com.shade.decima.rpcs3.util.Pointer;

import java.util.function.Function;

public record Typed<T>(Function<Pointer, T> reader, int size) {
    public static <T> Typed<T> of(Function<Pointer, T> reader, int size) {
        return new Typed<>(reader, size);
    }

    public TypedPointer<T> pointer(Pointer pointer) {
        return TypedPointer.of(this, pointer);
    }

    public TypedSlice<T> slice(Pointer pointer, int count) {
        return TypedSlice.of(this, pointer, count);
    }

    public T read(Pointer pointer) {
        return reader.apply(pointer);
    }

    public T read(Pointer pointer, int index) {
        if (size == 0) {
            throw new IllegalStateException("size is unknown");
        }
        return reader.apply(pointer.add((long) index * size));
    }
}