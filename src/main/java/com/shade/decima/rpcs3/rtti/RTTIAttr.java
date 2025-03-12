package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public record RTTIAttr(
    Pointer type,
    short offset,
    short flags,
    String name,
    Pointer getter,
    Pointer setter
) {
    public static RTTIAttr read(Pointer pointer) {
        var type = pointer.deref();
        var offset = pointer.add(4).readShort();
        var flags = pointer.add(6).readShort();
        var name = pointer.add(8).deref().readCString();
        var getter = pointer.add(12).deref();
        var setter = pointer.add(16).deref();

        return new RTTIAttr(type, offset, flags, name, getter, setter);
    }
}
