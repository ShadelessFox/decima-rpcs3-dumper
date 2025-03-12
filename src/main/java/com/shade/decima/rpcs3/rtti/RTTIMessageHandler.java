package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public record RTTIMessageHandler(Pointer message, Pointer handler, Pointer displacement) {
    public static RTTIMessageHandler read(Pointer pointer) {
        var message = pointer.deref();
        var handler = pointer.add(4).deref();
        var displacement = pointer.add(8).deref();

        return new RTTIMessageHandler(message, handler, displacement);
    }
}
