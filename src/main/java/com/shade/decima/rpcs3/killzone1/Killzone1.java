package com.shade.decima.rpcs3.killzone1;

import com.shade.decima.rpcs3.killzone1.core.*;
import com.shade.decima.rpcs3.memory.Memory;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Process;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.util.Platform;

import java.util.Comparator;
import java.util.TreeSet;

public class Killzone1 {
    static void main() {
        try (var memory = connect()) {
            var factory = RTTIFactory.read(memory.pointer(0x7E3384).deref32());
            var types = new TreeSet<Ref<RTTI0>>(Comparator.comparing(Ref::pointer));
            var attrs = new TreeSet<>(Comparator.comparing(RTTIAttr::vtbl));

            factory.allTypes().forEach((_, type) -> {
                if (type.read() instanceof RTTI1 rtti1) {
                    for (var attr : rtti1.attrs) {
                        attrs.add(attr.read());
                    }
                }
                types.add(type);
            });

            System.out.println("Types:");
            for (var type : types) {
                printType(type.pointer(), type.read());
                System.out.println();
            }

            System.out.println("\nAttributes:");
            for (var attr : attrs) {
                System.out.printf(
                    "- vtbl=%#x, type_and_flags=%08x, type=%s, flags=%s)%n",
                    attr.vtbl().address(),
                    attr.typeAndFlags(),
                    attr.typeName(),
                    attr.typeFlags());
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

    private static void printType(Pointer addr, RTTI0 rtti) {
        System.out.println("RTTI: " + rtti.name + " (size=" + rtti.size + ", addr=" + addr.deref32() + ")");

        System.out.println("Bases:");
        for (RTTIBase base : rtti.meta.bases()) {
            System.out.println(" - " + base.meta().read().name() + " (offset=" + base.offset() + ")");
        }

        if (rtti instanceof RTTI1 rtti1) {
            System.out.println("Attributes:");
            for (Ref<RTTIAttr> attr : rtti1.attrs) {
                System.out.println(" - " + attr.read());
            }
        }

        if (rtti instanceof RTTI2 rtti2) {
            System.out.println("Functions:");
            for (Ref<RTTIFunction> func : rtti2.functions) {
                System.out.println(" - " + func.read());
            }

            System.out.println("Messages:");
            for (RTTIMessageHandler message : rtti2.mMessages) {
                System.out.printf(" - RTTIMessageHandler[nameCrc=%#10x, handler=%s]%n", message.nameCrc(), message.handler());
            }
        }
    }
}
