package com.shade.decima.rpcs3.memory;

import org.jetbrains.annotations.Debug;

@Debug.Renderer(childrenArray = "this.read()", hasChildren = "this.pointer().address() != 0L")
public record Ref<T>(Type<T> type, Pointer pointer) {
    public T read() {
        return type.read(pointer);
    }

    @Override
    public String toString() {
        return type + " @ " + pointer;
    }
}
