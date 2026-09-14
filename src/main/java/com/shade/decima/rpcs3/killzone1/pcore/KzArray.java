package com.shade.decima.rpcs3.killzone1.pcore;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Slice;
import com.shade.decima.rpcs3.memory.Type;

import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Objects;

public record KzArray<T>(int length, int capacity, Slice<T> items) implements Iterable<T> {
    public static <T> KzArray<T> read(Pointer pointer, Type<T> type) {
        var length = pointer.add(0).readInt();
        var capacity = pointer.add(4).readInt();
        var entries = type.slice(pointer.add(8).deref32(), capacity);
        return new KzArray<>(length, capacity, entries);
    }

    public T get(int index) {
        Objects.checkIndex(index, length);
        return items.read(index);
    }

    @Override
    public Iterator<T> iterator() {
        return new Iterator<>() {
            private int index = 0;

            @Override
            public boolean hasNext() {
                return index < length;
            }

            @Override
            public T next() {
                if (hasNext()) {
                    return get(index++);
                } else {
                    throw new NoSuchElementException();
                }
            }
        };
    }
}
