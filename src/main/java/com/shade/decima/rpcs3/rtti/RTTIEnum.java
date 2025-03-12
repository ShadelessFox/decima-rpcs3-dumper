package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIEnum extends RTTI {
    private final byte size;
    private final short numValues;
    private final String typeName;
    private final Pointer values;

    public RTTIEnum(Pointer pointer) {
        super(pointer);
        this.size = pointer.add(5).readByte();
        this.numValues = pointer.add(6).readShort();
        this.typeName = pointer.add(8).deref().readCString();
        this.values = pointer.add(12).deref();
    }

    public byte getSize() {
        return size;
    }

    public short getNumValues() {
        return numValues;
    }

    public Pointer getValues() {
        return values;
    }

    @Override
    public String getTypeName() {
        return typeName;
    }
}
