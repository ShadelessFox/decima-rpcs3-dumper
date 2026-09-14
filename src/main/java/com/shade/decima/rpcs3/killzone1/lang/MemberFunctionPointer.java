package com.shade.decima.rpcs3.killzone1.lang;

import com.shade.decima.rpcs3.memory.Pointer;

/**
 * Represents a C++ member function pointer as defined in the Itanium C++ ABI.
 *
 * @param offset     Zero is null. Even value: 32-bit pointer to a PPU function descriptor. Odd value: vtable byte offset plus 1.
 * @param adjustment Signed byte adjustment added to the object address before virtual lookup/call.
 * @see <a href="https://itanium-cxx-abi.github.io/cxx-abi/abi.html#member-function-pointers">2.3.2 Member Function Pointers</a>
 */
public record MemberFunctionPointer(Pointer offset, Pointer adjustment) {
    public static MemberFunctionPointer read(Pointer pointer) {
        var offset = pointer.add(0).deref32();
        var adjustment = pointer.add(4).deref32();
        return new MemberFunctionPointer(offset, adjustment);
    }
}
