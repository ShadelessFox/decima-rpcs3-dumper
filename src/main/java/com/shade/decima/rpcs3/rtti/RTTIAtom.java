package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.TypedPointer;
import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIAtom extends RTTI {
    private final byte size;
    private final boolean simple;
    private final String typeName;
    private final TypedPointer<RTTI> baseType;
    private final Pointer fromString;
    private final Pointer toString;
    private final Pointer copyFunc;
    private final Pointer constructor;
    private final Pointer destructor;
    private final Pointer serialize;
    private final Pointer deserialize;
    private final Pointer getSerializeSize;
    private final Pointer getMemorySize;

    RTTIAtom(Pointer pointer) {
        super(pointer);
        this.size = pointer.add(5).readByte();
        this.simple = pointer.add(6).readByte() == 1;
        this.typeName = pointer.add(8).deref32().readCString();
        this.baseType = RTTI.TYPE.pointer(pointer.add(12).deref32());
        this.fromString = pointer.add(16).deref32();
        this.toString = pointer.add(20).deref32();
        this.copyFunc = pointer.add(24).deref32();
        this.constructor = pointer.add(28).deref32();
        this.destructor = pointer.add(32).deref32();
        this.serialize = pointer.add(36).deref32();
        this.deserialize = pointer.add(40).deref32();
        this.getSerializeSize = pointer.add(44).deref32();
        this.getMemorySize = pointer.add(48).deref32();
    }

    @Override
    public TypeName getName() {
        return TypeName.of(typeName);
    }

    public byte getSize() {
        return size;
    }

    public boolean isSimple() {
        return simple;
    }

    public TypedPointer<RTTI> getBaseType() {
        return baseType;
    }

    public Pointer getFromString() {
        return fromString;
    }

    public Pointer getToString() {
        return toString;
    }

    public Pointer getCopyFunc() {
        return copyFunc;
    }

    public Pointer getConstructor() {
        return constructor;
    }

    public Pointer getDestructor() {
        return destructor;
    }

    public Pointer getSerialize() {
        return serialize;
    }

    public Pointer getDeserialize() {
        return deserialize;
    }

    public Pointer getGetSerializeSize() {
        return getSerializeSize;
    }

    public Pointer getGetMemorySize() {
        return getMemorySize;
    }
}
