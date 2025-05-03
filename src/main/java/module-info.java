module decima.rpcs3.dumper {
    requires java.base;

    exports com.shade.decima.rpcs3.exporter;
    exports com.shade.decima.rpcs3.rtti;
    exports com.shade.decima.rpcs3.util;
    exports com.shade.decima.rpcs3;

    uses com.shade.decima.rpcs3.exporter.Exporter.Provider;

    provides com.shade.decima.rpcs3.exporter.Exporter.Provider with
        com.shade.decima.rpcs3.exporter.JsonExporter,
        com.shade.decima.rpcs3.exporter.IdaExporter;
}