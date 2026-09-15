module decima.rpcs3.dumper {
    requires java.base;
    requires static org.jetbrains.annotations;

    exports com.shade.decima.rpcs3.killzone3.exporter;
    exports com.shade.decima.rpcs3.killzone1.core;
    exports com.shade.decima.rpcs3.killzone1.lang;
    exports com.shade.decima.rpcs3.killzone1.pcore;
    exports com.shade.decima.rpcs3.killzone1;
    exports com.shade.decima.rpcs3.killzone3.rtti;
    exports com.shade.decima.rpcs3.killzone3;
    exports com.shade.decima.rpcs3.memory;
    exports com.shade.decima.rpcs3.util;

    uses com.shade.decima.rpcs3.killzone3.exporter.Exporter.Provider;

    provides com.shade.decima.rpcs3.killzone3.exporter.Exporter.Provider with
        com.shade.decima.rpcs3.killzone3.exporter.JsonExporter,
        com.shade.decima.rpcs3.killzone3.exporter.IdaExporter;
}