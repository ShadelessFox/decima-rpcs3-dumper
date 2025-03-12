package com.shade.decima.rpcs3;

import com.shade.decima.rpcs3.exporter.JsonExporter;
import com.shade.decima.rpcs3.rtti.RTTI;
import com.shade.decima.rpcs3.util.Pointer;
import com.shade.decima.rpcs3.util.Process;

import java.nio.file.Path;
import java.util.Collection;
import java.util.Comparator;
import java.util.TreeSet;

public class Rpcs3Dumper {
    private static final int KILLZONE_3_FACTORY_BASE = 0x14DDCC4;
    private static final int UNTIL_DAWN_FACTORY_BASE = 0x169C2C4;

    private static final Comparator<RTTI> RTTI_COMPARATOR = Comparator
        .comparing(RTTI::getKind)
        .thenComparing(RTTI::getTypeName);

    public static void main(String[] args) throws Throwable {
        try (Process process = Process.open("rpcs3.exe").orElseThrow(() -> new IllegalStateException("No RPCS3 process found"))) {
            var base = process.memory(0x300000000L); // RPCS3's g_base_addr
            var factory = base.add(UNTIL_DAWN_FACTORY_BASE).deref();
            var types = new TreeSet<>(RTTI_COMPARATOR);

            scan(factory, types);
            System.out.printf("Scanned %d registered types%n", types.size());

            try (var exporter = new JsonExporter(Path.of("output/until_dawn_beta.json"))) {
                for (RTTI type : types) {
                    exporter.export(type);
                }
            }
        }
    }

    private static void scan(Pointer factory, Collection<? super RTTI> types) {
        // mAllTypes; HashSet<pRTTI>
        var count = factory.add(4).readInt();
        var entries = factory.add(8).deref();
        var capacity = factory.add(16).readInt() + 1; // hashMask = capacity - 1

        for (int i = 0; i < capacity; i++) {
            var assoc = entries.add(i * 8L);
            var hash = assoc.add(0).readInt();
            if (hash != 0) {
                var addr = assoc.add(4).deref();
                var type = RTTI.read(addr);
                System.out.printf("%#08x - %s %s%n", hash, addr, type);
                types.add(type);
            }
        }
    }
}
