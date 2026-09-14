package com.shade.decima.rpcs3.killzone1.lang;

import com.shade.decima.rpcs3.memory.Pointer;

import java.util.Optional;

/**
 * Represents a 32-bit PPU function pointer that points to a function descriptor
 * rather than directly to executable code.
 *
 * @param descriptor The function descriptor obtained by dereferencing the pointer.
 * @see FunctionDescriptor
 */
public record FunctionPointer(Optional<FunctionDescriptor> descriptor) {
    public static FunctionPointer read(Pointer pointer) {
        var descriptor = pointer.deref32();
        if (descriptor.address() == 0L) {
            return new FunctionPointer(Optional.empty());
        }
        return new FunctionPointer(Optional.of(FunctionDescriptor.read(descriptor)));
    }
}
