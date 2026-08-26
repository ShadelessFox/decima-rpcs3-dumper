package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.Typed;
import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public record RTTIAttr(
    TypedPointer<RTTI> type,
    short offset,
    short flags,
    String name,
    Pointer getter,
    Pointer setter
) {
    public static final Typed<RTTIAttr> TYPE = Typed.of(RTTIAttr::read, 28);

    public static RTTIAttr read(Pointer pointer) {
        var type = RTTI.TYPE.pointer(pointer.deref32());
        var offset = pointer.add(4).readShort();
        var flags = pointer.add(6).readShort();
        var name = pointer.add(8).deref32().readCString();
        var getter = pointer.add(12).deref32();
        var setter = pointer.add(16).deref32();

        return new RTTIAttr(type, offset, flags, name, getter, setter);
    }
}
