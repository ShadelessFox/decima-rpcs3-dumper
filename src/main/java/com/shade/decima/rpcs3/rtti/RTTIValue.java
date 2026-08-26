package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.Typed;
import com.shade.decima.rpcs3.util.Pointer;

public record RTTIValue(int value, String name) {
    public static final Typed<RTTIValue> TYPE = Typed.of(RTTIValue::read, 8);

    public static RTTIValue read(Pointer pointer) {
        var value = pointer.readInt();
        var name = pointer.add(4).deref32().readCString();

        return new RTTIValue(value, name);
    }
}
