package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public record RTTIValue(int value, String name) {
    public static RTTIValue read(Pointer pointer) {
        var value = pointer.readInt();
        var name = pointer.add(4).deref().readCString();

        return new RTTIValue(value, name);
    }
}
