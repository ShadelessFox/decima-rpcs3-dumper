package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.pcore.KzArray;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;

/// A static RTTI for classes that implement `SerializableObject`
public sealed class RTTI1 extends RTTI0 permits RTTI2 {
    public final int flags;
    public final KzArray<Ref<RTTIAttr>> attrs;
    public final int version;

    RTTI1(Pointer pointer) {
        super(pointer);

        this.flags = pointer.add(28).readInt();
        this.attrs = KzArray.read(pointer.add(32), RTTIAttr.TYPE.ref());
        this.version = pointer.add(44).readInt();
    }
}
