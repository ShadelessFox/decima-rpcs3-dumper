package com.shade.decima.rpcs3.gdb;

public record Registers(long[] gpr, double[] fpr, long cia, int cr, long lr, long ctr) {
    static Registers parse(String input) {
        if (input.length() != 1112) {
            throw new IllegalArgumentException("Invalid register packet length: " + input.length());
        }

        long[] gpr = new long[32];
        for (int i = 0; i < 32; i++) {
            gpr[i] = Long.parseUnsignedLong(input.substring(i * 16, (i + 1) * 16), 16);
        }

        double[] fpr = new double[32];
        for (int i = 0; i < 32; i++) {
            long bits = Long.parseUnsignedLong(input.substring(512 + i * 16, 512 + (i + 1) * 16), 16);
            fpr[i] = Double.longBitsToDouble(bits);
        }

        var cia = Long.parseUnsignedLong(input.substring(1024, 1040), 16);
        var cr = Integer.parseUnsignedInt(input.substring(1056, 1064), 16);
        var lr = Long.parseUnsignedLong(input.substring(1064, 1080), 16);
        var ctr = Long.parseUnsignedLong(input.substring(1080, 1096), 16);

        return new Registers(gpr, fpr, cia, cr, lr, ctr);
    }
}
