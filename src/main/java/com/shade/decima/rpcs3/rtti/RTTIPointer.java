package com.shade.decima.rpcs3.rtti;

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
            var typeName = pointer.deref().readCString();
            var size = pointer.add(4).readShort();
            var constructor = pointer.add(8).deref();
            var destructor = pointer.add(12).deref();
            var getter = pointer.add(16).deref();
            var setter = pointer.add(20).deref();
            var copyFunc = pointer.add(24).deref();

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

    private final Pointer itemType;
    private final Data pointerType;

    RTTIPointer(Pointer pointer) {
        super(pointer);
        this.itemType = pointer.add(8).deref();
        this.pointerType = Data.read(pointer.add(12).deref());
    }

    @Override
    public String getTypeName() {
        return pointerType.typeName;
    }

    @Override
    public String getFullName() {
        return "%s<%s>".formatted(getTypeName(), RTTI.read(itemType).getFullName());
    }
}
