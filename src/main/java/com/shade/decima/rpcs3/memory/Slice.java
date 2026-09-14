package com.shade.decima.rpcs3.memory;

import java.util.Iterator;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public record Slice<T>(Type<T> type, Pointer pointer, int length) implements Iterable<T> {
    public T read(int index) {
        if (index < 0 || index >= length) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Length: " + length);
        }
        return type.read(pointer.add(index * type.size().orElseThrow()));
    }

    public long size() {
        return length * type.size().orElseThrow();
    }

    public Stream<T> stream() {
        return IntStream.range(0, length).mapToObj(this::read);
    }

    @Override
    public Iterator<T> iterator() {
        return stream().iterator();
    }
}
