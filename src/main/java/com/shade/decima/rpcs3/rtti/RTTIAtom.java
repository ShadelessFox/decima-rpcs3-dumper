package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIAtom extends RTTI {
    private final byte size;
    private final boolean simple;
    private final String typeName;
    private final Pointer baseType;
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
        this.typeName = pointer.add(8).deref().readCString();
        this.baseType = pointer.add(12).deref();
        this.fromString = pointer.add(16).deref();
        this.toString = pointer.add(20).deref();
        this.copyFunc = pointer.add(24).deref();
        this.constructor = pointer.add(28).deref();
        this.destructor = pointer.add(32).deref();
        this.serialize = pointer.add(36).deref();
        this.deserialize = pointer.add(40).deref();
        this.getSerializeSize = pointer.add(44).deref();
        this.getMemorySize = pointer.add(48).deref();
    }

    @Override
    public String getTypeName() {
        return typeName;
    }

    public byte getSize() {
        return size;
    }

    public boolean isSimple() {
        return simple;
    }

    public Pointer getBaseType() {
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
