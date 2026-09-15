package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.MemberFunctionPointer;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Type;
import com.shade.decima.rpcs3.util.Value;

import java.nio.charset.StandardCharsets;
import java.util.Arrays;

public record RTTIAttr(
    Pointer vtbl,
    String group,
    String name,
    boolean property,
    int refCount,
    int offset,
    byte[] value,
    MemberFunctionPointer getter,
    MemberFunctionPointer setter
) {
    public static final Type<RTTIAttr> TYPE = Type.of(RTTIAttr::read, "RTTIAttr");

    public enum Flag implements Value.OfEnumSet<Flag> {
        NESTED,
        REF_1,
        REF_0,
        COLLECTION;

        @Override
        public int value() {
            return switch (this) {
                case NESTED -> 0x80000000;
                case REF_1 -> 0x00800000;
                case REF_0 -> 0x00008000;
                case COLLECTION -> 0x00000080;
            };
        }
    }

    public static RTTIAttr read(Pointer pointer) {
        var vtbl = pointer.add(0).deref32();
        var group = pointer.add(4).deref32().address() == 0 ? null : pointer.add(4).deref32().readCString();
        var name = pointer.add(8).deref32().readCString();
        var propertyAndRefCount = pointer.add(12).readInt();
        var property = (propertyAndRefCount & 1) == 1;
        var refCount = propertyAndRefCount >>> 1;
        var offset = pointer.add(16).readInt();

        int size = alignUp(computeValueSizeBytes(vtbl), 4); // align to FunctionPtr
        var value = pointer.add(20).read(size);
        var getter = MemberFunctionPointer.read(pointer.add(20 + size));
        var setter = MemberFunctionPointer.read(pointer.add(28 + size));
        return new RTTIAttr(vtbl, group, name, property, refCount, offset, value, getter, setter);
    }

    public int typeAndFlags() {
        var func = vtbl.add(13 * 4).deref32().deref32();
        var code = func.read(8);
        assert code[0] == 0x3C;
        assert code[1] == 0x60;
        assert code[4] == 0x60;
        assert code[5] == 0x63;
        return (code[2] & 0xff) << 24 | (code[3] & 0xff) << 16 | (code[6] & 0xff) << 8 | (code[7] & 0xff);
    }

    public String typeName() {
        int masked = typeAndFlags() & 0x7f7f7f7f;
        return new String(
            new byte[]{(byte) (masked >>> 24), (byte) (masked >>> 16), (byte) (masked >>> 8), (byte) masked},
            StandardCharsets.ISO_8859_1);
    }

    public Value<Flag> typeFlags() {
        return Value.setOf(Flag.class, typeAndFlags() & 0x80808080);
    }

    private static int computeValueSizeBytes(Pointer vtbl) {
        // vtbl -> li r3, 4
        var instruction = vtbl.add(13 * 8).deref32().deref32().readInt();
        if (instruction >>> 26 != 14) {
            throw new IllegalStateException("Unexpected instruction for getSize: " + Integer.toHexString(instruction));
        }
        return (short) instruction;
    }

    private static int alignUp(int value, int alignment) {
        return (value + alignment - 1) & -alignment;
    }

    @Override
    public String toString() {
        return "RTTIAttr[vtbl=" + vtbl
            + ", group=\"" + group + "\""
            + ", name=\"" + name + "\""
            + ", property=" + property
            + ", refCount=" + refCount
            + ", offset=" + offset
            + ", value=" + Arrays.toString(value)
            + ", getter=" + getter
            + ", setter=" + setter + "]";
    }
}
