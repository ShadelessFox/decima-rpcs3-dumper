package com.shade.decima.rpcs3.memory;

import java.util.OptionalLong;
import java.util.function.Function;

public interface Type<T> {
    static <T> Type<T> of(Function<Pointer, T> reader, OptionalLong size, String name) {
        size.ifPresent(s -> {
            if (s <= 0) {
                throw new IllegalArgumentException("size must be greater than 0");
            }
        });
        return new Type<>() {
            @Override
            public T read(Pointer pointer) {
                return reader.apply(pointer);
            }

            @Override
            public OptionalLong size() {
                return size;
            }

            @Override
            public String toString() {
                return name;
            }
        };
    }

    static <T> Type<T> of(Function<Pointer, T> reader, long size, String name) {
        return of(reader, OptionalLong.of(size), name);
    }

    static <T> Type<T> of(Function<Pointer, T> reader, long size) {
        return of(reader, OptionalLong.of(size), 'i' + Long.toString(size * 8L));
    }

    static <T> Type<T> of(Function<Pointer, T> reader, String name) {
        return of(reader, OptionalLong.empty(), name);
    }

    T read(Pointer pointer);

    OptionalLong size();

    default Ref<T> at(Pointer pointer) {
        return new Ref<>(this, pointer);
    }

    default Slice<T> slice(Pointer pointer, int length) {
        return new Slice<>(this, pointer, length);
    }

    default Type<Ref<T>> ref() {
        return of(pointer -> new Ref<>(this, pointer.deref32()), OptionalLong.of(4), this + "*");
    }
}
