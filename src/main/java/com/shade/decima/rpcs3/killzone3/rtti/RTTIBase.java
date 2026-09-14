package com.shade.decima.rpcs3.killzone3.rtti;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIBase(Ref<RTTI> type, int offset) {
    public static final Type<RTTIBase> TYPE = Type.of(RTTIBase::read, 8, "RTTIBase");

    public static RTTIBase read(Pointer pointer) {
        var type = RTTI.TYPE.at(pointer.deref32());
        var offset = pointer.add(4).readInt();

        return new RTTIBase(type, offset);
    }
}
