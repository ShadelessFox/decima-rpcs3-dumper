package com.shade.decima.rpcs3.rtti;

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
            var typeName = pointer.deref().readCString();
            var size = pointer.add(4).readShort();
            var isSimple = pointer.add(6).readByte() == 1;
            var constructor = pointer.add(8).deref();
            var destructor = pointer.add(12).deref();
            var resize = pointer.add(16).deref();
            var remove = pointer.add(20).deref();
            var getNumItems = pointer.add(24).deref();
            var getItem = pointer.add(28).deref();
            var predictAllocationForResize = pointer.add(32).deref();
            var clear = pointer.add(36).deref();

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

    private final Pointer itemType;
    private final Data containerType;

    RTTIContainer(Pointer pointer) {
        super(pointer);
        this.itemType = pointer.add(8).deref();
        this.containerType = Data.read(pointer.add(12).deref());
    }

    @Override
    public String getTypeName() {
        return containerType.typeName;
    }
}
