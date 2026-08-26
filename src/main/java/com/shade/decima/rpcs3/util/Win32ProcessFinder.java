package com.shade.decima.rpcs3.util;

import com.shade.decima.rpcs3.util.Kernel32.PROCESSENTRY32W;

import java.lang.foreign.Arena;
import java.nio.charset.StandardCharsets;
import java.util.OptionalInt;

final class Win32ProcessFinder implements ProcessFinder {
    @Override
    public OptionalInt find(String name) {
        var snapshot = Kernel32.createToolhelp32Snapshot(Kernel32.TH32CS_SNAPPROCESS, 0);

        try (Arena arena = Arena.ofConfined()) {
            var entry = arena.allocate(PROCESSENTRY32W.LAYOUT);
            PROCESSENTRY32W.dwSize(entry, Math.toIntExact(PROCESSENTRY32W.LAYOUT.byteSize()));

            if (Kernel32.process32FirstW(snapshot, entry)) {
                while (Kernel32.process32NextW(snapshot, entry)) {
                    var exeFileSegment = PROCESSENTRY32W.szExeFile(entry);
                    var exeFile = exeFileSegment.getString(0, StandardCharsets.UTF_16LE);
                    if (exeFile.equalsIgnoreCase(name)) {
                        return OptionalInt.of(PROCESSENTRY32W.th32ProcessID(entry));
                    }
                }
            }

            return OptionalInt.empty();
        } finally {
            Kernel32.closeHandle(snapshot);
        }
    }
}
