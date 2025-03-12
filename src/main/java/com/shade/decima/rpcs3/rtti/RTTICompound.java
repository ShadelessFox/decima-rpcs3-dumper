package com.shade.decima.rpcs3.rtti;

import com.shade.decima.rpcs3.util.Pointer;

public final class RTTICompound extends RTTI {
    private final byte numBases;
    private final byte numAttrs;
    private final byte numFunctions;
    private final byte numMessageHandlers;
    private final byte numMessageOrderEntries;
    private final short version;
    private final byte size;
    private final Pointer constructor;
    private final Pointer destructor;
    private final Pointer unk18;
    private final Pointer unk1C;
    private final Pointer unk20;
    private final Pointer unk24;
    private final Pointer unk2C;
    private final String typeName;
    private final int typeNameCrc;
    private final Pointer unk3C;
    private final Pointer bases;
    private final Pointer attrs;
    private final Pointer functions;
    private final Pointer messageHandlers;
    private final Pointer messageOrderEntries;

    RTTICompound(Pointer pointer) {
        super(pointer);
        this.numBases = pointer.add(5).readByte();
        this.numAttrs = pointer.add(6).readByte();
        this.numFunctions = pointer.add(7).readByte();
        this.numMessageHandlers = pointer.add(8).readByte();
        this.numMessageOrderEntries = pointer.add(9).readByte();
        this.version = pointer.add(10).readShort();
        this.size = pointer.add(15).readByte();
        this.constructor = pointer.add(16).deref();
        this.destructor = pointer.add(20).deref();
        this.unk18 = pointer.add(24).deref();
        this.unk1C = pointer.add(28).deref();
        this.unk20 = pointer.add(32).deref();
        this.unk24 = pointer.add(36).deref();
        this.unk2C = pointer.add(44).deref();
        this.typeName = pointer.add(48).deref().readCString();
        this.typeNameCrc = pointer.add(52).readInt();
        this.unk3C = pointer.add(60).deref();
        this.bases = pointer.add(64).deref();
        this.attrs = pointer.add(68).deref();
        this.functions = pointer.add(72).deref();
        this.messageHandlers = pointer.add(76).deref();
        this.messageOrderEntries = pointer.add(80).deref();
    }

    public byte getNumBases() {
        return numBases;
    }

    public byte getNumAttrs() {
        return numAttrs;
    }

    public byte getNumFunctions() {
        return numFunctions;
    }

    public byte getNumMessageHandlers() {
        return numMessageHandlers;
    }

    public byte getNumMessageOrderEntries() {
        return numMessageOrderEntries;
    }

    public short getVersion() {
        return version;
    }

    public byte getSize() {
        return size;
    }

    public Pointer getConstructor() {
        return constructor;
    }

    public Pointer getDestructor() {
        return destructor;
    }

    public Pointer getUnk18() {
        return unk18;
    }

    public Pointer getUnk1C() {
        return unk1C;
    }

    public Pointer getUnk20() {
        return unk20;
    }

    public Pointer getUnk24() {
        return unk24;
    }

    public Pointer getUnk2C() {
        return unk2C;
    }

    public int getTypeNameCrc() {
        return typeNameCrc;
    }

    public Pointer getUnk3C() {
        return unk3C;
    }

    public Pointer getBases() {
        return bases;
    }

    public Pointer getAttrs() {
        return attrs;
    }

    public Pointer getFunctions() {
        return functions;
    }

    public Pointer getMessageHandlers() {
        return messageHandlers;
    }

    public Pointer getMessageOrderEntries() {
        return messageOrderEntries;
    }

    @Override
    public String getTypeName() {
        return typeName;
    }
}
