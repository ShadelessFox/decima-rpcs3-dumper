package com.shade.decima.rpcs3.exporter;

import com.shade.decima.rpcs3.rtti.*;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashSet;
import java.util.Set;

public final class JsonExporter implements Exporter {
    private final JsonWriter writer;

    private final Set<String> containersSeen = new HashSet<>();
    private final Set<String> pointersSeen = new HashSet<>();

    public JsonExporter(Path path) throws IOException {
        writer = new JsonWriter(Files.newBufferedWriter(path));
        writer.beginObject();
    }

    @Override
    public void export(RTTI rtti) throws IOException {
        if (rtti instanceof RTTIContainer container && !containersSeen.add(container.getTypeName())) {
            return;
        }

        if (rtti instanceof RTTIPointer pointer && !pointersSeen.add(pointer.getTypeName())) {
            return;
        }

        writer.name(rtti.getTypeName()).beginObject();
        writer.name("kind").value(switch (rtti.getKind()) {
            case COMPOUND -> "class";
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

                    var handlers = compound.getMessageHandlers();
                    for (int i = 0; i < compound.getNumMessageHandlers(); i++) {
                        var handler = RTTIMessageHandler.read(handlers.add(i * 12));
                        writer.value(RTTI.read(handler.message()).getTypeName());
                    }

                    writer.endArray();
                }

                if (compound.getNumBases() > 0) {
                    writer.name("bases").beginArray();

                    var bases = compound.getBases();
                    for (int i = 0; i < compound.getNumBases(); i++) {
                        var base = RTTIBase.read(bases.add(i * 8));
                        writer.beginCompactObject();
                        writer.name("name").value(RTTI.read(base.type()).getTypeName());
                        writer.name("offset").value(base.offset());
                        writer.endCompactObject();
                    }

                    writer.endArray();
                }

                if (compound.getNumAttrs() > 0) {
                    writer.name("attributes").beginArray();

                    var attrs = compound.getAttrs();
                    for (int i = 0; i < compound.getNumAttrs(); i++) {
                        var attr = RTTIAttr.read(attrs.add(i * 28));
                        if (attr.type().address() == 0) {
                            writer.beginCompactObject();
                            writer.name("category").value(attr.name());
                            writer.endCompactObject();
                            continue;
                        }

                        writer.beginCompactObject();
                        writer.name("name").value(attr.name());
                        writer.name("type").value(RTTI.read(attr.type()).getTypeName());
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

                for (int i = 0; i < enumeration.getNumValues(); i++) {
                    var value = RTTIValue.read(enumeration.getValues().add(i * 8));
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
                writer.name("base_type").value(RTTI.read(atom.getBaseType()).getTypeName());
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
