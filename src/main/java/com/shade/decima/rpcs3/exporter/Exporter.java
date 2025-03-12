package com.shade.decima.rpcs3.exporter;

import com.shade.decima.rpcs3.rtti.RTTI;

import java.io.Closeable;
import java.io.IOException;

public interface Exporter extends Closeable {
    void export(RTTI rtti) throws IOException;
}
