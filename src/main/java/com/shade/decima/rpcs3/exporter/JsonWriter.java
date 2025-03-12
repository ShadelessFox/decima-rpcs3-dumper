package com.shade.decima.rpcs3.exporter;

import java.io.Closeable;
import java.io.Flushable;
import java.io.IOException;
import java.io.Writer;
import java.util.Arrays;
import java.util.Objects;

/**
 * A copy of GSON's JsonWriter that allows emitting "compact" variants of arrays and objects.
 */
final class JsonWriter implements Closeable, Flushable {
    private static final String[] REPLACEMENT_CHARS;

    static final int EMPTY_ARRAY = 1;
    static final int NONEMPTY_ARRAY = 2;
    static final int EMPTY_OBJECT = 3;
    static final int DANGLING_NAME = 4;
    static final int NONEMPTY_OBJECT = 5;
    static final int EMPTY_DOCUMENT = 6;
    static final int NONEMPTY_DOCUMENT = 7;
    static final int CLOSED = 8;

    static {
        REPLACEMENT_CHARS = new String[128];
        for (int i = 0; i <= 0x1f; i++) {
            REPLACEMENT_CHARS[i] = String.format("\\u%04x", i);
        }
        REPLACEMENT_CHARS['"'] = "\\\"";
        REPLACEMENT_CHARS['\\'] = "\\\\";
        REPLACEMENT_CHARS['\t'] = "\\t";
        REPLACEMENT_CHARS['\b'] = "\\b";
        REPLACEMENT_CHARS['\n'] = "\\n";
        REPLACEMENT_CHARS['\r'] = "\\r";
        REPLACEMENT_CHARS['\f'] = "\\f";
    }

    private final Writer out;

    private int[] stack = new int[32];
    private int stackSize = 0;
    private boolean compact;
    private String deferredName;

    public JsonWriter(Writer out) {
        this.out = Objects.requireNonNull(out, "out == null");
        push(EMPTY_DOCUMENT);
    }

    public JsonWriter beginArray() throws IOException {
        writeDeferredName();
        return open(EMPTY_ARRAY, '[', compact);
    }

    public JsonWriter endArray() throws IOException {
        return close(EMPTY_ARRAY, NONEMPTY_ARRAY, ']', compact);
    }

    public JsonWriter beginCompactArray() throws IOException {
        writeDeferredName();
        return open(EMPTY_ARRAY, '[', true);
    }

    public JsonWriter endCompactArray() throws IOException {
        return close(EMPTY_ARRAY, NONEMPTY_ARRAY, ']', false);
    }

    public JsonWriter beginObject() throws IOException {
        writeDeferredName();
        return open(EMPTY_OBJECT, '{', compact);
    }

    public JsonWriter endObject() throws IOException {
        return close(EMPTY_OBJECT, NONEMPTY_OBJECT, '}', compact);
    }

    public JsonWriter beginCompactObject() throws IOException {
        writeDeferredName();
        return open(EMPTY_OBJECT, '{', true);
    }

    public JsonWriter endCompactObject() throws IOException {
        return close(EMPTY_OBJECT, NONEMPTY_OBJECT, '}', false);
    }

    private JsonWriter open(int empty, char openBracket, boolean compact) throws IOException {
        beforeValue();
        push(empty);
        out.write(openBracket);
        this.compact = compact;
        return this;
    }

    private JsonWriter close(int empty, int nonempty, char closeBracket, boolean compact) throws IOException {
        int context = peek();
        if (context != nonempty && context != empty) {
            throw new IllegalStateException("Nesting problem.");
        }
        if (deferredName != null) {
            throw new IllegalStateException("Dangling name: " + deferredName);
        }

        stackSize--;
        if (context == nonempty) {
            newline();
        }
        out.write(closeBracket);
        this.compact = compact;
        return this;
    }

    private void push(int newTop) {
        if (stackSize == stack.length) {
            stack = Arrays.copyOf(stack, stackSize * 2);
        }
        stack[stackSize++] = newTop;
    }

    private int peek() {
        if (stackSize == 0) {
            throw new IllegalStateException("JsonWriter is closed.");
        }
        return stack[stackSize - 1];
    }

    private void replaceTop(int topOfStack) {
        stack[stackSize - 1] = topOfStack;
    }

    public JsonWriter name(String name) throws IOException {
        Objects.requireNonNull(name, "name == null");
        if (deferredName != null) {
            throw new IllegalStateException();
        }
        if (stackSize == 0) {
            throw new IllegalStateException("JsonWriter is closed.");
        }
        deferredName = name;
        return this;
    }

    private void writeDeferredName() throws IOException {
        if (deferredName != null) {
            beforeName();
            string(deferredName);
            deferredName = null;
        }
    }

    public JsonWriter value(String value) throws IOException {
        writeDeferredName();
        beforeValue();
        string(value);
        return this;
    }

    public JsonWriter jsonValue(String value) throws IOException {
        writeDeferredName();
        beforeValue();
        out.append(value);
        return this;
    }

    public JsonWriter value(boolean value) throws IOException {
        writeDeferredName();
        beforeValue();
        out.write(value ? "true" : "false");
        return this;
    }

    public JsonWriter value(long value) throws IOException {
        writeDeferredName();
        beforeValue();
        out.write(Long.toString(value));
        return this;
    }

    @Override
    public void flush() throws IOException {
        if (stackSize == 0) {
            throw new IllegalStateException("JsonWriter is closed.");
        }
        out.flush();
    }

    @Override
    public void close() throws IOException {
        out.close();

        int size = stackSize;
        if (size > 1 || size == 1 && stack[size - 1] != NONEMPTY_DOCUMENT) {
            throw new IOException("Incomplete document");
        }
        stackSize = 0;
    }

    private void string(String value) throws IOException {
        out.write('\"');
        int last = 0;
        int length = value.length();
        for (int i = 0; i < length; i++) {
            char c = value.charAt(i);
            String replacement;
            if (c < 128) {
                replacement = REPLACEMENT_CHARS[c];
                if (replacement == null) {
                    continue;
                }
            } else if (c == '\u2028') {
                replacement = "\\u2028";
            } else if (c == '\u2029') {
                replacement = "\\u2029";
            } else {
                continue;
            }
            if (last < i) {
                out.write(value, last, i - last);
            }
            out.write(replacement);
            last = i + 1;
        }
        if (last < length) {
            out.write(value, last, length - last);
        }
        out.write('\"');
    }

    private void newline() throws IOException {
        if (compact) {
            return;
        }
        out.write('\n');
        for (int i = 1, size = stackSize; i < size; i++) {
            out.write('\t');
        }
    }

    private void beforeName() throws IOException {
        int context = peek();
        if (context == NONEMPTY_OBJECT) { // first in object
            out.write(',');
            if (compact) {
                out.write(' ');
            }
        } else if (context != EMPTY_OBJECT) { // not in an object!
            throw new IllegalStateException("Nesting problem.");
        }
        newline();
        replaceTop(DANGLING_NAME);
    }

    @SuppressWarnings("fallthrough")
    private void beforeValue() throws IOException {
        switch (peek()) {
            case NONEMPTY_DOCUMENT:
                throw new IllegalStateException("JSON must have only one top-level value.");
                // fall-through
            case EMPTY_DOCUMENT: // first in document
                replaceTop(NONEMPTY_DOCUMENT);
                break;
            case EMPTY_ARRAY: // first in array
                replaceTop(NONEMPTY_ARRAY);
                newline();
                break;
            case NONEMPTY_ARRAY: // another in array
                out.append(',');
                if (compact) {
                    out.append(' ');
                }
                newline();
                break;
            case DANGLING_NAME: // value for name
                out.append(": ");
                replaceTop(NONEMPTY_OBJECT);
                break;
            default:
                throw new IllegalStateException("Nesting problem.");
        }
    }
}