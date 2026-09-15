package com.shade.decima.rpcs3.memory;

import java.util.function.Function;

public interface Type<T> {
    static <T> Sized<T> of(Function<Pointer, T> reader, long size, String name) {
        if (size <= 0) {
            throw new IllegalArgumentException("size must be greater than 0");
        }
        return new Sized<>() {
            @Override
            public T read(Pointer pointer) {
                return reader.apply(pointer);
            }

            @Override
            public long size() {
                return size;
            }

            @Override
            public String toString() {
                return name;
            }
        };
    }

    static <T> Sized<T> of(Function<Pointer, T> reader, long size) {
        return of(reader, size, "[" + size + " bytes]");
    }

    static <T> Type<T> of(Function<Pointer, T> reader, String name) {
        return new Type<>() {
            @Override
            public T read(Pointer pointer) {
                return reader.apply(pointer);
            }

            @Override
            public String toString() {
                return name;
            }
        };
    }

    T read(Pointer pointer);

    default Ref<T> at(Pointer pointer) {
        return new Ref<>(this, pointer);
    }

    default Sized<Ref<T>> ref() {
        return of(pointer -> new Ref<>(this, pointer.deref32()), 4, this + "*");
    }

    interface Sized<T> extends Type<T> {
        long size();

        default Slice<T> slice(Pointer pointer, int length) {
            return new Slice<>(this, pointer, length);
        }
    }
}
