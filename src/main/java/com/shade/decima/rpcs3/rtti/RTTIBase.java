package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public record RTTIBase(Pointer type, int offset) {
    public static RTTIBase read(Pointer pointer) {
        var type = pointer.deref();
        var offset = pointer.add(4).readInt();

        return new RTTIBase(type, offset);
    }
}
