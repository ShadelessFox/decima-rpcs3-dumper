package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.FunctionPointer;
import com.shade.decima.rpcs3.killzone1.pcore.KzString;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

/// A static RTTI for classes that implement `RuntimeTypeInfoObject`
public sealed class RTTI0 permits RTTI1 {
    public static final Type<RTTI0> TYPE = Type.of(RTTI0::downcast, "RTTI");

    public final RTTIMeta meta;
    public final FunctionPointer initializer; // unsure
    public final FunctionPointer factory;
    public final KzString name;
    public final Ref<RTTI0> parent;
    public final int nameCrc;
    public final int size;

    RTTI0(Pointer pointer) {
        this.meta = RTTIMeta.read(pointer.add(0).deref32());
        this.initializer = FunctionPointer.read(pointer.add(4));
        this.factory = FunctionPointer.read(pointer.add(8));
        this.name = KzString.read(pointer.add(12));
        this.parent = RTTI0.TYPE.at(pointer.add(16).deref32());
        this.nameCrc = pointer.add(20).readInt();
        this.size = pointer.add(24).readInt();
    }

    public boolean isKindOf(String type) {
        if (name.toString().equals(type)) {
            return true;
        }
        if (parent.pointer().address() != 0L) {
            return parent.read().isKindOf(type);
        }
        return false;
    }

    private static RTTI0 downcast(Pointer pointer) {
        var rtti0 = new RTTI0(pointer);
        if (rtti0.isKindOf("CoreObject")) {
            return new RTTI2(pointer);
        }
        if (rtti0.isKindOf("SerializableObject")) {
            return new RTTI1(pointer);
        }
        return rtti0;
    }
}
