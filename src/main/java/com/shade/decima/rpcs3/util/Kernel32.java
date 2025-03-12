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

    static final MemoryLayout PROCESSENTRY32W = MemoryLayout.structLayout(
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

    static final VarHandle PROCESSENTRY32W_dwSize;
    static final VarHandle PROCESSENTRY32W_th32ProcessID;
    static final MethodHandle PROCESSENTRY32W_szExeFile;

    static final MethodHandle createToolhelp32Snapshot;
    static final MethodHandle process32FirstW;
    static final MethodHandle process32NextW;
    static final MethodHandle openProcess;
    static final MethodHandle closeHandle;
    static final MethodHandle readProcessMemory;

    static {
        var arena = Arena.ofAuto();
        var linker = Linker.nativeLinker();
        var lookup = SymbolLookup.libraryLookup("kernel32", arena);

        createToolhelp32Snapshot = linker.downcallHandle(lookup.findOrThrow("CreateToolhelp32Snapshot"), FunctionDescriptor.of(HANDLE, DWORD, DWORD));
        process32FirstW = linker.downcallHandle(lookup.findOrThrow("Process32FirstW"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID));
        process32NextW = linker.downcallHandle(lookup.findOrThrow("Process32NextW"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID));
        openProcess = linker.downcallHandle(lookup.findOrThrow("OpenProcess"), FunctionDescriptor.of(HANDLE, DWORD, BOOL, DWORD));
        closeHandle = linker.downcallHandle(lookup.findOrThrow("CloseHandle"), FunctionDescriptor.of(BOOL, HANDLE));
        readProcessMemory = linker.downcallHandle(lookup.findOrThrow("ReadProcessMemory"), FunctionDescriptor.of(BOOL, HANDLE, LPVOID, LPVOID, DWORD, LPVOID));

        PROCESSENTRY32W_dwSize = PROCESSENTRY32W.varHandle(MemoryLayout.PathElement.groupElement("dwSize"));
        PROCESSENTRY32W_th32ProcessID = PROCESSENTRY32W.varHandle(MemoryLayout.PathElement.groupElement("th32ProcessID"));
        PROCESSENTRY32W_szExeFile = PROCESSENTRY32W.sliceHandle(MemoryLayout.PathElement.groupElement("szExeFile"));
    }
}
