package com.shade.decima.rpcs3.pine;

import java.net.InetSocketAddress;

public class PineTest {
    public static void main(String[] args) throws Exception {
        var address = new InetSocketAddress("localhost", 28012);
        var pine = Pine.connect(address).get();

        System.out.println("Title:   " + pine.getTitle().get());
        System.out.println("ID:      " + pine.getID().get());
        System.out.println("UUID:    " + pine.getUUID().get());
        System.out.println("Version: " + pine.getGameVersion().get());

        for (int i = 0; i < 1000000; i++) {
            pine.read32(0x169C2C4).get();
        }

        pine.close();
    }
}
