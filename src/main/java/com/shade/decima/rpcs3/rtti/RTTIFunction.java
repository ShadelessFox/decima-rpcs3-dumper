package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.Typed;
import com.shade.decima.rpcs3.util.Pointer;

public record RTTIFunction(
    Pointer function,
    Pointer unk04,
    char returnType,
    String name,
    String arguments,
    Pointer unk14
) {
    public static final Typed<RTTIFunction> TYPE = Typed.of(RTTIFunction::read, 24);

    public static RTTIFunction read(Pointer pointer) {
        var function = pointer.deref32();
        var unk04 = pointer.add(4).deref32();
        var returnType = (char) pointer.add(8).readByte();
        var name = pointer.add(12).deref32().readCString();
        var arguments = pointer.add(16).deref32().readCString();
        var unk14 = pointer.add(20).deref32();

        return new RTTIFunction(function, unk04, returnType, name, arguments, unk14);
    }
}
