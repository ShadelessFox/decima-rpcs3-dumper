package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.MemberFunctionPointer;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIFunction(
    Pointer vtbl,
    String name,
    String parameterTypes,
    String resultType,
    Pointer unk10,
    MemberFunctionPointer handler
) {
    public static final Type<RTTIFunction> TYPE = Type.of(RTTIFunction::read, 28);

    public static RTTIFunction read(Pointer pointer) {
        var unk00 = pointer.add(0).deref32();
        var name = pointer.add(4).deref32().readCString();
        var parameterTypes = pointer.add(8).deref32().readCString();
        var resultType = pointer.add(12).deref32().readCString();
        var unk10 = pointer.add(16).deref32();
        var handler = MemberFunctionPointer.read(pointer.add(20));
        return new RTTIFunction(unk00, name, parameterTypes, resultType, unk10, handler);
    }
}
