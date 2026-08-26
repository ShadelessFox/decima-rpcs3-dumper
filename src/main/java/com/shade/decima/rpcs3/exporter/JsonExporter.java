package com.shade.decima.rpcs3.exporter;

import com.shade.decima.rpcs3.rtti.*;
import com.shade.decima.rpcs3.util.Pointer;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public final class JsonExporter implements Exporter {
    private final JsonWriter writer;

    private JsonExporter(Path path) throws IOException {
        writer = new JsonWriter(Files.newBufferedWriter(path));
        writer.beginObject();
    }

    public static Provider provider() {
        return new Provider() {
            @Override
            public Exporter create(Path path) throws IOException {
                return new JsonExporter(path);
            }

            @Override
            public String extension() {
                return "json";
            }
        };
    }

    @Override
    public void export(Pointer pointer, RTTI rtti) throws IOException {
        writer.name(rtti.getName().fullName()).beginObject();
        writer.name("kind").value(switch (rtti.getKind()) {
            case COMPOUND -> "compound";
            case ENUM -> "enum";
            case ATOM -> "atom";
            case POINTER -> "pointer";
            case CONTAINER -> "container";
        });

        switch (rtti) {
            case RTTICompound compound -> {
                writer.name("version").value(compound.getVersion());
                // writer.name("flags").value(0);

                if (compound.getNumMessageHandlers() > 0) {
                    writer.name("messages").beginArray();

                    for (var handler : compound.getMessageHandlers()) {
                        writer.value(handler.message().read().getName().fullName());
                    }

                    writer.endArray();
                }

                if (compound.getNumBases() > 0) {
                    writer.name("bases").beginArray();

                    for (var base : compound.getBases()) {
                        writer.beginCompactObject();
                        writer.name("type").value(base.type().read().getName().fullName());
                        writer.name("offset").value(base.offset());
                        writer.endCompactObject();
                    }

                    writer.endArray();
                }

                if (compound.getNumAttrs() > 0) {
                    writer.name("attrs").beginArray();

                    for (var attr : compound.getAttrs()) {
                        if (attr.type().pointer().address() == 0) {
                            writer.beginCompactObject();
                            writer.name("category").value(attr.name());
                            writer.endCompactObject();
                            continue;
                        }

                        writer.beginCompactObject();
                        writer.name("name").value(attr.name());
                        writer.name("type").value(attr.type().read().getName().fullName());
                        writer.name("offset").value(attr.offset());
                        writer.name("flags").value(attr.flags());
                        if (attr.getter().address() != 0) {
                            writer.name("property").value(true);
                        }
                        writer.endCompactObject();
                    }

                    writer.endArray();
                }
            }
            case RTTIEnum enumeration -> {
                writer.name("size").value(enumeration.getSize());
                writer.name("values").beginArray();

                for (var value : enumeration.getValues()) {
                    writer.beginCompactObject();
                    writer.name("value").value(value.value());
                    writer.name("name").value(value.name());
                    writer.endCompactObject();
                }

                writer.endArray();
            }
            case RTTIAtom atom -> {
                writer.name("size").value(atom.getSize());
                if (atom.isSimple()) {
                    writer.name("simple").value(true);
                }
                writer.name("base_type").value(atom.getBaseType().read().getName().fullName());
            }
            case RTTIPointer pointer1 -> {
                var name = pointer1.getName();
                writer.name("type").value(name.name());
                writer.name("item_type").value(name.argument().fullName());
            }
            case RTTIContainer pointer1 -> {
                var name = pointer1.getName();
                writer.name("type").value(name.name());
                writer.name("item_type").value(name.argument().fullName());
            }
            default -> {
                // nothing to do
            }
        }

        writer.endObject();
    }

    @Override
    public void close() throws IOException {
        writer.endObject();
        writer.close();
    }
}
