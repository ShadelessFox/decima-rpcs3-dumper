package com.shade.decima.rpcs3.killzone3.rtti;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

public record RTTIMessageHandler(Ref<RTTI> message, Pointer handler, Pointer displacement) {
    public static final Type.Sized<RTTIMessageHandler> TYPE = Type.of(RTTIMessageHandler::read, 12, "RTTIMessageHandler");

    public static RTTIMessageHandler read(Pointer pointer) {
        var message = RTTI.TYPE.at(pointer.deref32());
        var handler = pointer.add(4).deref32();
        var displacement = pointer.add(8).deref32();

        return new RTTIMessageHandler(message, handler, displacement);
    }
}
