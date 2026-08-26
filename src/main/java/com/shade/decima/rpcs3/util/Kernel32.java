package com.shade.decima.rpcs3.util;

import java.lang.foreign.*;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.VarHandle;

final class Kernel32 {
    static final ValueLayout HANDLE = ValueLayout.ADDRESS.withName("HANDLE");
    static final ValueLayout LPVOID = ValueLayout.ADDRESS.withName("LPVOID");
    static final ValueLayout ULONG_PTR = ValueLayout.JAVA_LONG.withName("ULONG_PTR");
    static final ValueLayout DWORD = ValueLayout.JAVA_INT.withName("DWORD");
    static final ValueLayout LONG = ValueLayout.JAVA_INT.withName("LONG");
    static final ValueLayout BOOL = ValueLayout.JAVA_INT.withName("BOOL");
    static final ValueLayout WCHAR = ValueLayout.JAVA_CHAR.withName("WCHAR");

    static final int TH32CS_SNAPPROCESS = 0x2;
    static final int PROCESS_VM_READ = 0x10;
    static final int PATH_MAX = 260;

    record PROCESSENTRY32W(MemorySegment segment) {
        static final MemoryLayout LAYOUT = MemoryLayout.structLayout(
            DWORD.withName("dwSize"),
            DWORD.withName("cntUsage"),
            DWORD.withName("th32ProcessID"),
            MemoryLayout.paddingLayout(4),
            ULONG_PTR.withName("th32DefaultHeapID"),
            DWORD.withName("th32ModuleID"),
            DWORD.withName("cntThreads"),
            DWORD.withName("th32ParentProcessID"),
            LONG.withName("pcPriClassBase"),
            DWORD.withName("dwFlags"),
            MemoryLayout.sequenceLayout(PATH_MAX, WCHAR).withName("szExeFile"),
            MemoryLayout.paddingLayout(4)
        ).withName("PROCESSENTRY32W");

        private static final VarHandle dwSize;
        private static final VarHandle th32ProcessID;
        private static final MethodHandle szExeFile;

        static {
            dwSize = LAYOUT.varHandle(MemoryLayout.PathElement.groupElement("dwSize"));
            th32ProcessID = LAYOUT.varHandle(MemoryLayout.PathElement.groupElement("th32ProcessID"));
            szExeFile = LAYOUT.sliceHandle(MemoryLayout.PathElement.groupElement("szExeFile"));
        }

        static void dwSize(MemorySegment segment, int value) {
            dwSize.set(segment, 0L, value);
        }

        static int th32ProcessID(MemorySegment segment) {
            return (int) th32ProcessID.get(segment, 0L);
        }

        static MemorySegment szExeFile(MemorySegment segment) {
            try {
                return (MemorySegment) szExeFile.invokeExact(segment, 0L);
            } catch (Throwable e) {
                throw new AssertionError(e);
            }
        }
    }

    static final MethodHandle createToolhelp32Snapshot;
    static final MethodHandle process32FirstW;
    static final MethodHandle process32NextW;
    static final MethodHandle openProcess;
    static final MethodHandle closeHandle;
    static final MethodHandle readProcessMemory;
    static final MethodHandle getLastError;

    static {
        System.loadLibrary("Kernel32");

        var lookup = java.lang.foreign.SymbolLookup.loaderLookup();
        var linker = Linker.nativeLinker();

        createToolhelp32Snapshot = linker.downcallHandle(lookup.findOrThrow("CreateToolhelp32Snapshot"), FunctionDescriptor.of(HANDLE, DWORD, DWORD));
        process32FirstW = linker.downcallHandle(lookup.findOrThrow("Process32FirstW"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID));
        process32NextW = linker.downcallHandle(lookup.findOrThrow("Process32NextW"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID));
        openProcess = linker.downcallHandle(lookup.findOrThrow("OpenProcess"), FunctionDescriptor.of(HANDLE, DWORD, BOOL, DWORD));
        closeHandle = linker.downcallHandle(lookup.findOrThrow("CloseHandle"), FunctionDescriptor.of(BOOL, HANDLE));
        readProcessMemory = linker.downcallHandle(lookup.findOrThrow("ReadProcessMemory"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID, LPVOID, DWORD, LPVOID));
        getLastError = linker.downcallHandle(lookup.findOrThrow("GetLastError"), FunctionDescriptor.of(DWORD));
    }

    static MemorySegment createToolhelp32Snapshot(int flags, int processId) {
        try {
            return (MemorySegment) createToolhelp32Snapshot.invokeExact(flags, processId);
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }

    static boolean process32FirstW(MemorySegment snapshot, MemorySegment entry) {
        try {
            return (int) process32FirstW.invokeExact(snapshot, entry) != 0;
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
    }

    static boolean process32NextW(MemorySegment snapshot, MemorySegment entry) {
        try {
            return (int) process32NextW.invokeExact(snapshot, entry) != 0;
        } catch (Throwable e) {
            throw new AssertionError(e);
        }
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
