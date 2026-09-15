package com.shade.decima.rpcs3.killzone1.pcore;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Slice;
import com.shade.decima.rpcs3.memory.Type;

import java.util.Optional;
import java.util.function.BiConsumer;

// region Containers
public record KzHashMap<K, V>(
    int numKeys,
    Slice<Optional<Entry<K, V>>> entries,
    short minLoadFactor,
    short maxLoadFactor,
    int hashMask
) {
    public record Entry<K, V>(int hash, K key, V value) {
        static <K, V> Optional<Entry<K, V>> read(Pointer pointer, Type.Sized<K> keyType, Type.Sized<V> valueType) {
            var hash = pointer.readInt();
            if (hash == 0) {
                return Optional.empty();
            }
            var key = keyType.read(pointer.add(4));
            var value = valueType.read(pointer.add(4 + keyType.size()));
            return Optional.of(new Entry<>(hash, key, value));
        }
    }

    public static <K, V> KzHashMap<K, V> read(Pointer pointer, Type.Sized<K> keyType, Type.Sized<V> valueType) {
        var numKeys = pointer.readInt();
        var dataPtr = pointer.add(4).deref32();
        var minLoadFactor = pointer.add(8).readShort();
        var maxLoadFactor = pointer.add(10).readShort();
        var hashMask = pointer.add(12).readInt();

        var entryType = entryType(keyType, valueType);
        var entries = entryType.slice(dataPtr, hashMask + 1);

        return new KzHashMap<>(numKeys, entries, minLoadFactor, maxLoadFactor, hashMask);
    }

    public void forEach(BiConsumer<K, V> consumer) {
        var capacity = hashMask + 1;
        for (int i = 0; i < capacity; i++) {
            entries.read(i).ifPresent(e -> consumer.accept(e.key, e.value));
        }
    }

    private static <K, V> Type.Sized<Optional<Entry<K, V>>> entryType(Type.Sized<K> k, Type.Sized<V> v) {
        return Type.of(
            pointer -> Entry.read(pointer, k, v),
            k.size() + v.size() + 4,
            "Entry<" + k + ", " + v + ">");
    }
}
