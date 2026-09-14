package com.shade.decima.rpcs3.killzone3.rtti;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIValue(int value, String name) {
    public static final Type<RTTIValue> TYPE = Type.of(RTTIValue::read, 8, "RTTIValue");

    public static RTTIValue read(Pointer pointer) {
        var value = pointer.readInt();
        var name = pointer.add(4).deref32().readCString();

        return new RTTIValue(value, name);
    }
}
