package com.shade.decima.rpcs3.memory;

import java.lang.foreign.*;
import java.lang.invoke.MethodHandle;

final class Kernel32 {
    static final ValueLayout HANDLE = ValueLayout.ADDRESS.withName("HANDLE");
    static final ValueLayout LPVOID = ValueLayout.ADDRESS.withName("LPVOID");
    static final ValueLayout DWORD = ValueLayout.JAVA_INT.withName("DWORD");
    static final ValueLayout BOOL = ValueLayout.JAVA_INT.withName("BOOL");

    static final int PROCESS_VM_READ = 0x10;

    static final MethodHandle openProcess;
    static final MethodHandle closeHandle;
    static final MethodHandle readProcessMemory;
    static final MethodHandle getLastError;

    static {
        System.loadLibrary("Kernel32");

        var lookup = java.lang.foreign.SymbolLookup.loaderLookup();
        var linker = Linker.nativeLinker();

        openProcess = linker.downcallHandle(lookup.findOrThrow("OpenProcess"), FunctionDescriptor.of(HANDLE, DWORD, BOOL, DWORD));
        closeHandle = linker.downcallHandle(lookup.findOrThrow("CloseHandle"), FunctionDescriptor.of(BOOL, HANDLE));
        readProcessMemory = linker.downcallHandle(lookup.findOrThrow("ReadProcessMemory"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID, LPVOID, DWORD, LPVOID));
        getLastError = linker.downcallHandle(lookup.findOrThrow("GetLastError"), FunctionDescriptor.of(DWORD));
    }

    static MemorySegment openProcess(int desiredAccess, boolean inheritHandle, int processId) {
        try {
            return (MemorySegment) openProcess.invokeExact(desiredAccess, inheritHandle ? 1 : 0, processId);
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }

    static boolean closeHandle(MemorySegment handle) {
        try {
            return (int) closeHandle.invokeExact(handle) != 0;
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }

    static boolean readProcessMemory(MemorySegment process, MemorySegment address, MemorySegment buffer, int size, MemorySegment numberOfBytesRead) {
        try {
            return (int) readProcessMemory.invokeExact(process, address, buffer, size, numberOfBytesRead) != 0;
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }

    static int getLastError() {
        try {
            return (int) getLastError.invokeExact();
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }
}
