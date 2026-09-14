package com.shade.decima.rpcs3.killzone1.lang;

import com.shade.decima.rpcs3.memory.Pointer;

/**
 * Represents an 8-byte PPU function descriptor containing the function's entry
 * address and table-of-contents address, each stored as a 32-bit pointer.
 *
 * @param entry Address of the function's executable code.
 * @param toc   Table-of-contents address used by the function through register r2.
 * @see FunctionPointer
 */
public record FunctionDescriptor(Pointer entry, Pointer toc) {
    public static FunctionDescriptor read(Pointer pointer) {
        var entry = pointer.add(0).deref32();
        var toc = pointer.add(4).deref32();
        return new FunctionDescriptor(entry, toc);
    }
}
