package com.shade.decima.rpcs3.killzone3.exporter;

import com.shade.decima.rpcs3.killzone3.rtti.RTTI;
import com.shade.decima.rpcs3.memory.Pointer;

import java.io.Closeable;
import java.io.IOException;
import java.nio.file.Path;
import java.util.ServiceLoader;

public interface Exporter extends Closeable {
    interface Provider {
        Exporter create(Path path) throws IOException;

        String extension();
    }

    static Iterable<Provider> providers() {
        return ServiceLoader.load(Provider.class);
    }

    void export(Pointer pointer, RTTI rtti) throws IOException;
}
