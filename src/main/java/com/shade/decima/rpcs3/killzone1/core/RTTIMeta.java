package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.FunctionPointer;
import com.shade.decima.rpcs3.killzone1.pcore.KzArray;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Type;
import com.shade.decima.rpcs3.util.Value;

/**
 * Kind of a C++ RTTI, mostly used for upcasting objects.
 */
public record RTTIMeta(
    String name,
    int size,
    Value<Flag> flags,
    FunctionPointer singleTimeInitializer,
    KzArray<RTTIBase> bases
) {
    public static final Type<RTTIMeta> TYPE = Type.of(RTTIMeta::read, 0x1C);

    public enum Flag implements Value.OfEnumSet<Flag> {
        VIRTUAL,
        INHERITED;

        @Override
        public int value() {
            return switch (this) {
                case VIRTUAL -> 1;
                case INHERITED -> 2;
            };
        }
    }

    public static RTTIMeta read(Pointer pointer) {
        var name = pointer.add(0).deref32().readCString();
        var size = pointer.add(4).readInt();
        var flags = Value.setOf(Flag.class, pointer.add(8).readInt());
        var singleTimeInitializer = FunctionPointer.read(pointer.add(12));
        var bases = KzArray.read(pointer.add(16), RTTIBase.TYPE);
        return new RTTIMeta(name, size, flags, singleTimeInitializer, bases);
    }
}
