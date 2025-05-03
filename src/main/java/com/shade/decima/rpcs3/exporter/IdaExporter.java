package com.shade.decima.rpcs3.exporter;

import com.shade.decima.rpcs3.TypedSlice;
import com.shade.decima.rpcs3.rtti.RTTI;
import com.shade.decima.rpcs3.rtti.RTTICompound;
import com.shade.decima.rpcs3.util.Pointer;

import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public final class IdaExporter implements Exporter {
    private final BufferedWriter writer;

    private IdaExporter(Path path) throws IOException {
        writer = Files.newBufferedWriter(path);

        writer.write("#include <idc.idc>");
        writer.newLine();
        writer.newLine();
        writer.write("static main() {");
    }

    public static Provider provider() {
        return new Provider() {
            @Override
            public Exporter create(Path path) throws IOException {
                return new IdaExporter(path);
            }

            @Override
            public String extension() {
                return "idc";
            }
        };
    }

    @Override
    public void export(Pointer pointer, RTTI rtti) throws IOException {
        writer.newLine();
        writer.write("\t// %s".formatted(rtti.getName().displayName()));

        writer.newLine();
        writer.write("\tset_name(%#08x, \"%s\");".formatted(pointer.address(), idaTypeName(rtti)));

        writer.newLine();
        writer.write("\tapply_type(%#08x, \"%s\");".formatted(pointer.address(), idaTypeKind(rtti)));

        if (rtti instanceof RTTICompound compound) {
            idaStaticArray(rtti, compound.getBases(), "RTTIBase", "sBases");
            idaStaticArray(rtti, compound.getAttrs(), "RTTIAttr", "sAttrs");
            idaStaticArray(rtti, compound.getFunctions(), "RTTIFunction", "sFunctions");
            idaStaticArray(rtti, compound.getMessageHandlers(), "RTTIMessageHandler", "sMessageHandlers");
        }

        writer.newLine();
    }

    @Override
    public void close() throws IOException {
        writer.write("}");
        writer.close();
    }

    private void idaStaticArray(RTTI rtti, TypedSlice<?> slice, String memberType, String memberName) throws IOException {
        if (slice.count() > 0) {
            long address = slice.pointer().address();

            writer.newLine();
            writer.write("\tdel_items(%#08x, DELIT_SIMPLE, %d);".formatted(address, slice.size()));

            writer.newLine();
            writer.write("\tapply_type(%#08x, \"%s[%d]\");".formatted(address, memberType, slice.count()));

            writer.newLine();
            writer.write("\tset_name(%#08x, \"%s::%s\");".formatted(address, idaTypeName(rtti), memberName));
        }
    }

    private static String idaTypeName(RTTI rtti) {
        return rtti.getName().internalName();
    }

    private static String idaTypeKind(RTTI rtti) {
        return switch (rtti.getKind()) {
            case COMPOUND -> "RTTICompound";
            case ENUM -> "RTTIEnum";
            case ATOM -> "RTTIAtom";
            case POINTER -> "RTTIPointer";
            case CONTAINER -> "RTTIContainer";
        };
    }
}
