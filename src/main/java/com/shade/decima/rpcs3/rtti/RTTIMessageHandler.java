package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.Typed;
import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public record RTTIMessageHandler(TypedPointer<RTTI> message, Pointer handler, Pointer displacement) {
    public static final Typed<RTTIMessageHandler> TYPE = Typed.of(RTTIMessageHandler::read, 12);

    public static RTTIMessageHandler read(Pointer pointer) {
        var message = RTTI.TYPE.pointer(pointer.deref32());
        var handler = pointer.add(4).deref32();
        var displacement = pointer.add(8).deref32();

        return new RTTIMessageHandler(message, handler, displacement);
    }
}
