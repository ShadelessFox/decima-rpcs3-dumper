package com.shade.decima.rpcs3;

import com.shade.decima.rpcs3.util.Pointer;
import com.shade.decima.rpcs3.util.Process;

import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.function.BiConsumer;
import java.util.function.Function;
import java.util.stream.Stream;

public class Killzone1 {
    static void main() throws Throwable {
        try (Process process = Process.open("rpcs3.exe").orElseThrow(() -> new IllegalStateException("No RPCS3 process found"))) {
            var base = process.memory(0x300000000L); // RPCS3's g_base_addr

            if (true) {
                var addr = base.add(0x130fa78);
                var rtti = new RTTI2(addr);
                printType(addr, rtti);
                return;
            }

            Set<Pointer> vtables = new TreeSet<>(Comparator.comparingLong(Pointer::address));

            var factory = base.add(0x7E3384).deref32();
            var types = HashMap.read(factory, STRING_TYPE, RTTI1.TYPE_PTR);

            System.out.println("Types:");

            types.forEach((name, type) -> {
                var addr = type.ptr().deref32();
                var rtti = type.deref();

                System.out.printf(" - %s %s%n", addr, name);

                if (rtti.name.equals("RuntimeTypeInfoObject")) {
                    return;
                }

                for (TypedPointer<RTTIAttr> pAttr : rtti.attrs) {
                    var attr = pAttr.deref();
                    vtables.add(attr.vtable);
                }

                // printType(addr, rtti);
                // System.out.println();
            });

            System.out.println("\nVtables:");
            for (var vtable : vtables) {
                var func = vtable.add(0x34).deref32().deref32();
                var code = func.read(8);
                assert code[0] == 0x3C;
                assert code[1] == 0x60;
                assert code[4] == 0x60;
                assert code[5] == 0x63;

                System.out.printf(
                    "- %s -> %s (%#10x, %s)%n",
                    vtable,
                    func,
                    (code[2] & 0xff) << 24 | (code[3] & 0xff) << 16 | (code[6] & 0xff) << 8 | (code[7] & 0xff),
                    new String(new byte[]{code[2], code[3], code[6], code[7]}, StandardCharsets.UTF_8)
                );
            }
        }
    }

    private static void printType(Pointer addr, RTTI0 rtti) {
        var hierarchy = Stream
            .iterate(addr, ptr -> ptr.address() != 0, ptr -> new RTTI1(ptr).parent)
            .toList();

        for (int i = 0; i < hierarchy.size(); i++) {
            var ptr = hierarchy.get(i);
            var cls = new RTTI0(ptr);
            System.out.printf("%s%s%s (size=%#x, ptr=%s)%n", "  ".repeat(i), i > 0 ? "╰ " : "", cls.name, cls.size, ptr);
        }

        if (rtti instanceof RTTI1 rtti1) {
            System.out.println("\nAttributes:");
            for (TypedPointer<RTTIAttr> attr : rtti1.attrs) {
                System.out.println(" - " + attr.deref());
            }
        }

        if (rtti instanceof RTTI2 rtti2) {
            System.out.println("\nFunctions:");
            for (TypedPointer<RTTIFunction> func : rtti2.functions) {
                System.out.println(" - " + func.deref());
            }
        }
    }

    private static final Typed<String> STRING_TYPE = Typed.of(Killzone1::readString, 4);

    private static String readString(Pointer pointer) {
        var buffer = pointer.deref32();
        var length = buffer.add(8).readInt();
        return buffer.add(16).readString(StandardCharsets.US_ASCII, length);
    }

    private record HashMap<K, V>(
        int numKeys,
        Pointer dataPtr,
        short minLoadFactor,
        short maxLoadFactor,
        int hashMask,
        Typed<K> keyType,
        Typed<V> valueType
    ) {
        private record Entry<K, V>(int hash, K key, V value) {
            public static <K, V> Optional<Entry<K, V>> read(Pointer pointer, Typed<K> keyType, Typed<V> valueType) {
                var hash = pointer.readInt();
                if (hash == 0) {
                    return Optional.empty();
                }
                var key = keyType.read(pointer.add(4));
                var value = valueType.read(pointer.add(4 + keyType.size()));
                return Optional.of(new Entry<>(hash, key, value));
            }
        }

        public static <K, V> HashMap<K, V> read(Pointer pointer, Typed<K> keyType, Typed<V> valueType) {
            var numKeys = pointer.readInt();
            var dataPtr = pointer.add(4).deref32();
            var minLoadFactor = pointer.add(8).readShort();
            var maxLoadFactor = pointer.add(10).readShort();
            var hashMask = pointer.add(12).readInt();

            return new HashMap<>(numKeys, dataPtr, minLoadFactor, maxLoadFactor, hashMask, keyType, valueType);
        }

        public void forEach(BiConsumer<K, V> consumer) {
            var capacity = hashMask + 1;
            var size = keyType.size() + valueType.size() + 4;
            for (int i = 0; i < capacity; i++) {
                var base = dataPtr.add((long) i * size);
                var entry = Entry.read(base, keyType, valueType);
                entry.ifPresent(e -> consumer.accept(e.key, e.value));
            }
        }
    }

    private static class RTTI0 {
        public static final Typed<RTTI0> TYPE = Typed.of(RTTI0::new, 0x1C);
        public static final Typed<TypedPointer<RTTI0>> TYPE_PTR = TYPE.indirect();

        protected static class Meta {
            private final String name;
            private final int size;
            private final int unk08;
            private final int unk0C;
            private final RawArray unk10;

            public Meta(Pointer pointer) {
                this.name = pointer.add(0).deref32().readCString();
                this.size = pointer.add(4).readInt();
                this.unk08 = pointer.add(8).readInt();
                this.unk0C = pointer.add(12).readInt();
                this.unk10 = RawArray.read(pointer.add(16));
            }
        }

        protected final Meta meta;
        protected final Pointer unk04;
        protected final Pointer unk08;
        protected final String name;
        protected final Pointer parent;
        protected final int crc;
        protected final int size;

        public RTTI0(Pointer pointer) {
            this.meta = new Meta(pointer.add(0).deref32());
            this.unk04 = pointer.add(4).deref32();
            this.unk08 = pointer.add(8).deref32();
            this.name = readString(pointer.add(12));
            this.parent = pointer.add(16).deref32();
            this.crc = pointer.add(20).readInt();
            this.size = pointer.add(24).readInt();
        }
    }

    private static class RTTI1 extends RTTI0 {
        public static final Typed<RTTI1> TYPE = Typed.of(RTTI1::new, 0);
        public static final Typed<TypedPointer<RTTI1>> TYPE_PTR = TYPE.indirect();

        protected final Pointer unk1C;
        protected final TypedArray<TypedPointer<RTTIAttr>> attrs;
        protected final int version;

        public RTTI1(Pointer pointer) {
            super(pointer);
            this.unk1C = pointer.add(28).deref32();
            this.attrs = TypedArray.read(pointer.add(32), RTTIAttr.TYPE_PTR);
            this.version = pointer.add(44).readInt();
        }
    }

    private static class RTTI2 extends RTTI1 {
        public static final Typed<RTTI2> TYPE = Typed.of(RTTI2::new, 0);
        public static final Typed<TypedPointer<RTTI2>> TYPE_PTR = TYPE.indirect();

        protected final Pointer unk30;
        protected final Pointer unk34;
        protected final RawArray unk38;
        protected final Pointer unk40;
        protected final Pointer unk44;
        protected final Pointer unk48;
        protected final Pointer unk4C;
        protected final TypedArray<TypedPointer<RTTIFunction>> functions;

        public RTTI2(Pointer pointer) {
            super(pointer);
            this.unk30 = pointer.add(48).deref32();
            this.unk34 = pointer.add(52).deref32();
            this.unk38 = RawArray.read(pointer.add(56));
            this.unk40 = pointer.add(64).deref32();
            this.unk44 = pointer.add(68).deref32();
            this.unk48 = pointer.add(72).deref32();
            this.unk4C = pointer.add(76).deref32();
            this.functions = TypedArray.read(pointer.add(80), RTTIFunction.TYPE_PTR);
        }
    }

    private record RTTIFunction(
        Pointer unk00,
        String name,
        String parameterTypes,
        String resultType,
        Pointer unk10,
        FunctionPtr handler
    ) {
        public static final Typed<RTTIFunction> TYPE = Typed.of(RTTIFunction::read, 0x1C);
        public static final Typed<TypedPointer<RTTIFunction>> TYPE_PTR = TYPE.indirect();

        public static RTTIFunction read(Pointer pointer) {
            var unk00 = pointer.add(0).deref32();
            var name = pointer.add(4).deref32().readCString();
            var parameterTypes = pointer.add(8).deref32().readCString();
            var resultType = pointer.add(12).deref32().readCString();
            var unk10 = pointer.add(16).deref32();
            var handler = FunctionPtr.read(pointer.add(20));
            return new RTTIFunction(unk00, name, parameterTypes, resultType, unk10, handler);
        }
    }

    private record RTTIAttr(
        Pointer vtable,
        String group,
        String name,
        Pointer unk0C,
        int offset,
        Pointer unk14,
        FunctionPtr getter,
        FunctionPtr setter
    ) {
        public static final Typed<RTTIAttr> TYPE = Typed.of(RTTIAttr::read, 0x28);
        public static final Typed<TypedPointer<RTTIAttr>> TYPE_PTR = TYPE.indirect();

        public static RTTIAttr read(Pointer pointer) {
            var vtable = pointer.add(0).deref32();
            var group = pointer.add(4).deref32().address() == 0 ? null : pointer.add(4).deref32().readCString();
            var name = pointer.add(8).deref32().readCString();
            var unk0C = pointer.add(12).deref32();
            var offset = pointer.add(16).readInt();
            var unk14 = pointer.add(20).deref32();
            var getter = FunctionPtr.read(pointer.add(24));
            var setter = FunctionPtr.read(pointer.add(32));
            return new RTTIAttr(vtable, group, name, unk0C, offset, unk14, getter, setter);
        }
    }

    private record FunctionPtr(Pointer ptr1, Pointer ptr2) {
        public static FunctionPtr read(Pointer pointer) {
            var ptr1 = pointer.add(0).deref32();
            var ptr2 = pointer.add(4).deref32();
            if (ptr1.address() != 0 && ptr2.address() != 0) {
                // throw new IllegalStateException("Invalid function pointer");
            }
            return new FunctionPtr(ptr1, ptr2);
        }
    }

    public record RawArray(int size, int capacity, Pointer entries) {
        public static RawArray read(Pointer pointer) {
            var size = pointer.add(0).readInt();
            var capacity = pointer.add(4).readInt();
            var entries = pointer.add(8).deref32();
            return new RawArray(size, capacity, entries);
        }
    }

    static record TypedArray<R>(int length, int capacity, Pointer entries, Typed<R> typed) implements Iterable<R> {
        static <R> TypedArray<R> read(Pointer ptr, Typed<R> typed) {
            var length = ptr.add(0).readInt();
            var capacity = ptr.add(4).readInt();
            var entries = ptr.add(8).deref32();
            return new TypedArray<>(length, capacity, entries, typed);
        }

        public R get(int index) {
            Objects.checkIndex(index, length);
            return typed.read(entries.add((long) typed.size() * index));
        }

        @Override
        public Iterator<R> iterator() {
            return new Iterator<>() {
                private int index = 0;

                @Override
                public boolean hasNext() {
                    return index < length;
                }

                @Override
                public R next() {
                    if (hasNext()) {
                        return get(index++);
                    } else {
                        throw new NoSuchElementException();
                    }
                }
            };
        }
    }

    public interface Typed<R> {
        static <R> Typed<R> of(Function<Pointer, R> read, int size) {
            return new Typed<>() {
                @Override
                public R read(Pointer ptr) {
                    return read.apply(ptr);
                }

                @Override
                public int size() {
                    return size;
                }
            };
        }

        default Typed<TypedPointer<R>> indirect() {
            return of(ptr -> new TypedPointer<>(ptr, this), 4);
        }

        default R read(Pointer ptr, int index) {
            return read(ptr.add((long) index * size()));
        }

        R read(Pointer ptr);

        int size();
    }

    public record TypedPointer<R>(Pointer ptr, Typed<R> typed) implements Typed<R> {
        public R deref() {
            return read(ptr);
        }

        @Override
        public R read(Pointer ptr) {
            return typed.read(ptr.deref32());
        }

        @Override
        public int size() {
            return 4;
        }
    }
}
