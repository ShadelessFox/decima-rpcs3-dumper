package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIContainer extends RTTI {
    private record Data(
        String typeName,
        short size,
        boolean simple,
        Pointer constructor,
        Pointer destructor,
        Pointer resize,
        Pointer remove,
        Pointer getNumItems,
        Pointer getItem,
        Pointer predictAllocationForResize,
        Pointer clear
    ) {
        static Data read(Pointer pointer) {
            var typeName = pointer.deref32().readCString();
            var size = pointer.add(4).readShort();
            var isSimple = pointer.add(6).readByte() == 1;
            var constructor = pointer.add(8).deref32();
            var destructor = pointer.add(12).deref32();
            var resize = pointer.add(16).deref32();
            var remove = pointer.add(20).deref32();
            var getNumItems = pointer.add(24).deref32();
            var getItem = pointer.add(28).deref32();
            var predictAllocationForResize = pointer.add(32).deref32();
            var clear = pointer.add(36).deref32();

            return new Data(
                typeName,
                size,
                isSimple,
                constructor,
                destructor,
                resize,
                remove,
                getNumItems,
                getItem,
                predictAllocationForResize,
                clear
            );
        }
    }

    private final TypedPointer<RTTI> itemType;
    private final Data containerType;

    RTTIContainer(Pointer pointer) {
        super(pointer);
        this.itemType = RTTI.TYPE.pointer(pointer.add(8).deref32());
        this.containerType = Data.read(pointer.add(12).deref32());
    }

    @Override
    public TypeName.Parameterized getName() {
        return TypeName.of(containerType.typeName, itemType.read().getName());
    }
}
