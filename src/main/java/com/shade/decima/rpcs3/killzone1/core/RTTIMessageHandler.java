package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.MemberFunctionPointer;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIMessageHandler(int nameCrc, MemberFunctionPointer handler) {
    public static final Type<RTTIMessageHandler> TYPE = Type.of(RTTIMessageHandler::read, 12);

    public static RTTIMessageHandler read(Pointer pointer) {
        var nameCrc = pointer.add(0).readInt();
        var handler = MemberFunctionPointer.read(pointer.add(4));
        return new RTTIMessageHandler(nameCrc, handler);
    }
}
