package com.shade.decima.rpcs3.killzone3;

import com.shade.decima.rpcs3.killzone3.exporter.Exporter;
import com.shade.decima.rpcs3.killzone3.rtti.RTTI;
import com.shade.decima.rpcs3.memory.Memory;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Process;
import com.shade.decima.rpcs3.util.Platform;

import java.nio.file.Path;
import java.util.Comparator;
import java.util.Map;
import java.util.TreeMap;

public class Killzone3Dumper {
    private static final int KILLZONE_3_FACTORY_BASE = 0x14DDCC4;
    private static final int UNTIL_DAWN_FACTORY_BASE = 0x169C2C4;

    private static final Comparator<RTTI> RTTI_COMPARATOR = Comparator
        .comparing(RTTI::getKind)
        .thenComparing(RTTI::getName);

    static void main() throws Throwable {
        try (var memory = connect()) {
            var factory = memory.pointer(UNTIL_DAWN_FACTORY_BASE).deref32();
            var types = new TreeMap<RTTI, Pointer>(RTTI_COMPARATOR);

            scan(factory, types);
            System.out.printf("Scanned %d registered types%n", types.size());

            for (Exporter.Provider provider : Exporter.providers()) {
                Path path = Path.of("output/until_dawn_beta.%s".formatted(provider.extension()));
                try (Exporter exporter = provider.create(path)) {
                    for (var entry : types.entrySet()) {
                        exporter.export(entry.getValue(), entry.getKey());
                    }
                }
            }
        }
    }

    private static Memory connect() {
        var process = switch (Platform.current()) {
            case WINDOWS -> Process.open("rpcs3.exe");
            case LINUX -> Process.open("rpcs3");
            default -> throw new UnsupportedOperationException("Unsupported platform: " + Platform.current());
        };
        if (process.isEmpty()) {
            throw new IllegalStateException("Failed to find rpcs3 process");
        }
        return process.orElseThrow().rebase(0x300000000L); // RPCS3's g_base_addr
    }

    private static void scan(Pointer factory, Map<RTTI, Pointer> types) {
        // mAllTypes; HashSet<pRTTI>
        var count = factory.add(4).readInt();
        var entries = factory.add(8).deref32();
        var capacity = factory.add(16).readInt() + 1; // hashMask = capacity - 1

        for (int i = 0; i < capacity; i++) {
            var assoc = entries.add(i * 8L);
            var hash = assoc.add(0).readInt();
            if (hash != 0) {
                var addr = assoc.add(4).deref32();
                var type = RTTI.read(addr);
                System.out.printf("%#08x - %s %s%n", hash, addr, type);
                types.put(type, addr);
            }
        }
    }
}
