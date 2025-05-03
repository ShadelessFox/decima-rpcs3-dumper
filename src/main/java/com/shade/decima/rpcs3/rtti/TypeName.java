package com.shade.decima.rpcs3.rtti;

public sealed interface TypeName extends Comparable<TypeName> {
    static TypeName of(String name) {
        return new Simple(name);
    }

    static TypeName of(String name, TypeName argument) {
        return new Parameterized(name, argument);
    }

    String displayName();

    String internalName();

    @Override
    default int compareTo(TypeName o) {
        return displayName().compareTo(o.displayName());
    }

    record Simple(String name) implements TypeName {
        @Override
        public String displayName() {
            return name;
        }

        @Override
        public String internalName() {
            return name;
        }

        @Override
        public String toString() {
            return displayName();
        }
    }

    record Parameterized(String name, TypeName argument) implements TypeName {
        @Override
        public String displayName() {
            return name + '<' + argument.displayName() + '>';
        }

        @Override
        public String internalName() {
            return name + '_' + argument.internalName();
        }

        @Override
        public String toString() {
            return displayName();
        }
    }
}