package com.shade.decima.rpcs3;

import com.shade.decima.rpcs3.util.Pointer;

import java.util.Iterator;
import java.util.Objects;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public record TypedSlice<T>(Typed<T> inner, Pointer pointer, int count) implements Iterable<T> {
    public static <T> TypedSlice<T> of(Typed<T> inner, Pointer pointer, int count) {
        return new TypedSlice<>(inner, pointer, count);
    }

    public T read() {
        return inner.read(pointer);
    }

    public T read(int index) {
        Objects.checkIndex(index, count);
        return inner.read(pointer, index);
    }

    public int size() {
        if (inner.size() == 0) {
            throw new IllegalStateException("size is unknown");
        }
        return inner.size() * count;
    }

    public Stream<T> stream() {
        return IntStream.range(0, count).mapToObj(this::read);
    }

    @Override
    public Iterator<T> iterator() {
        return stream().iterator();
    }
}
