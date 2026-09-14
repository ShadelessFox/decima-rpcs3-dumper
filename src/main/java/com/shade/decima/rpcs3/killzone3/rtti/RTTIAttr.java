package com.shade.decima.rpcs3.killzone3.rtti;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIAttr(
    Ref<RTTI> type,
    short offset,
    short flags,
    String name,
    Pointer getter,
    Pointer setter
) {
    public static final Type<RTTIAttr> TYPE = Type.of(RTTIAttr::read, 28, "RTTIAttr");

    public static RTTIAttr read(Pointer pointer) {
        var type = RTTI.TYPE.at(pointer.deref32());
        var offset = pointer.add(4).readShort();
        var flags = pointer.add(6).readShort();
        var name = pointer.add(8).deref32().readCString();
        var getter = pointer.add(12).deref32();
        var setter = pointer.add(16).deref32();

        return new RTTIAttr(type, offset, flags, name, getter, setter);
    }
}
