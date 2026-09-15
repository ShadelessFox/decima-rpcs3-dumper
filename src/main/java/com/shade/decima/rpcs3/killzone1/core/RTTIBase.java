package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIBase(int offset, Ref<RTTIMeta> meta) {
    public static final Type.Sized<RTTIBase> TYPE = Type.of(RTTIBase::read, 8);

    public static RTTIBase read(Pointer pointer) {
        var offset = pointer.add(0).readInt();
        var meta = RTTIMeta.TYPE.at(pointer.add(4).deref32());
        return new RTTIBase(offset, meta);
    }
}
