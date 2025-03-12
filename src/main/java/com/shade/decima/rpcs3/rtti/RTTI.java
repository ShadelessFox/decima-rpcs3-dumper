package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public sealed abstract class RTTI
    permits RTTIAtom, RTTICompound, RTTIContainer, RTTIEnum, RTTIPointer {

    private final int id;
    private final RTTIKind kind;

    RTTI(Pointer pointer) {
        this.id = pointer.readInt();
        this.kind = RTTIKind.valueOf(pointer.add(4).readByte());
    }

    public static RTTI read(Pointer pointer) {
        var kind = RTTIKind.valueOf(pointer.add(4).readByte());
        return switch (kind) {
            case ATOM -> new RTTIAtom(pointer);
            case POINTER -> new RTTIPointer(pointer);
            case CONTAINER -> new RTTIContainer(pointer);
            case ENUM -> new RTTIEnum(pointer);
            case COMPOUND -> new RTTICompound(pointer);
        };
    }

    public abstract String getTypeName();

    public String getFullName() {
        return getTypeName();
    }

    public int getId() {
        return id;
    }

    public RTTIKind getKind() {
        return kind;
    }

    @Override
    public String toString() {
        return getClass().getSimpleName() + " " + getTypeName();
    }
}
