package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIPointer extends RTTI {
    private record Data(
        String typeName,
        short size,
        Pointer constructor,
        Pointer destructor,
        Pointer getter,
        Pointer setter,
        Pointer copyFunc
    ) {
        static Data read(Pointer pointer) {
            var typeName = pointer.deref32().readCString();
            var size = pointer.add(4).readShort();
            var constructor = pointer.add(8).deref32();
            var destructor = pointer.add(12).deref32();
            var getter = pointer.add(16).deref32();
            var setter = pointer.add(20).deref32();
            var copyFunc = pointer.add(24).deref32();

            return new Data(
                typeName,
                size,
                constructor,
                destructor,
                getter,
                setter,
                copyFunc
            );
        }
    }

    private final TypedPointer<RTTI> itemType;
    private final Data pointerType;

    RTTIPointer(Pointer pointer) {
        super(pointer);
        this.itemType = RTTI.TYPE.pointer(pointer.add(8).deref32());
        this.pointerType = Data.read(pointer.add(12).deref32());
    }

    @Override
    public TypeName.Parameterized getName() {
        return TypeName.of(pointerType.typeName, itemType.read().getName());
    }
}
