package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.Typed;
import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public record RTTIBase(TypedPointer<RTTI> type, int offset) {
    public static final Typed<RTTIBase> TYPE = Typed.of(RTTIBase::read, 8);

    public static RTTIBase read(Pointer pointer) {
        var type = RTTI.TYPE.pointer(pointer.deref());
        var offset = pointer.add(4).readInt();

        return new RTTIBase(type, offset);
    }
}
