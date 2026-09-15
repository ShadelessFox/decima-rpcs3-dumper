package com.shade.decima.rpcs3.killzone1.pcore;

import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

import java.nio.charset.StandardCharsets;

public record KzString(Ref<Buffer> buffer) {
    public static Type.Sized<KzString> TYPE = Type.of(KzString::read, 4);

    public record Buffer(int refCount, int cachedHash, int length, int capacity, String data) {
        public static Type<Buffer> TYPE = Type.of(Buffer::read, 16);

        public static Buffer read(Pointer pointer) {
            var refCount = pointer.add(0).readInt();
            var cachedHash = pointer.add(4).readInt();
            var length = pointer.add(8).readInt();
            var capacity = pointer.add(12).readInt();
            var data = pointer.add(16).readString(StandardCharsets.US_ASCII, length);
            return new Buffer(refCount, cachedHash, length, capacity, data);
        }
    }

    public static KzString read(Pointer pointer) {
        var buffer = Buffer.TYPE.at(pointer.deref32());
        return new KzString(buffer);
    }

    @Override
    public String toString() {
        return buffer.read().data();
    }
}
