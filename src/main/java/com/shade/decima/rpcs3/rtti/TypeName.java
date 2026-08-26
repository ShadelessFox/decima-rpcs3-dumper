package com.shade.decima.rpcs3.rtti;

public sealed interface TypeName extends Comparable<TypeName> {
    static TypeName of(String name) {
        return new Simple(name);
    }

    static Parameterized of(String name, TypeName argument) {
        return new Parameterized(name, argument);
    }

    String fullName();

    @Override
    default int compareTo(TypeName o) {
        return fullName().compareTo(o.fullName());
    }

    record Simple(String name) implements TypeName {
        @Override
        public String fullName() {
            return name;
        }

        @Override
        public String toString() {
            return fullName();
        }
    }

    record Parameterized(String name, TypeName argument) implements TypeName {
        @Override
        public String fullName() {
            return name + '_' + argument.fullName();
        }

        @Override
        public String toString() {
            return fullName();
        }
    }
}