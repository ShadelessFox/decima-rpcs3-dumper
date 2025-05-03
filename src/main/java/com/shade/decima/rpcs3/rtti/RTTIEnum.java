package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.TypedSlice;
import com.shade.decima.rpcs3.util.Pointer;

public final class RTTIEnum extends RTTI {
    private final byte size;
    private final short numValues;
    private final String typeName;
    private final TypedSlice<RTTIValue> values;

    public RTTIEnum(Pointer pointer) {
        super(pointer);
        this.size = pointer.add(5).readByte();
        this.numValues = pointer.add(6).readShort();
        this.typeName = pointer.add(8).deref().readCString();
        this.values = RTTIValue.TYPE.slice(pointer.add(12).deref(), numValues);
    }

    public byte getSize() {
        return size;
    }

    public short getNumValues() {
        return numValues;
    }

    public TypedSlice<RTTIValue> getValues() {
        return values;
    }

    @Override
    public TypeName getName() {
        return TypeName.of(typeName);
    }
}
