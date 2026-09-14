package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.pcore.KzArray;
import com.shade.decima.rpcs3.killzone1.pcore.KzHashMap;
import com.shade.decima.rpcs3.killzone1.pcore.KzString;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;

public record RTTIFactory(
    KzHashMap<KzString, Ref<RTTI0>> allTypes,
    KzArray<Ref<RTTI2>> managerTypes
) {
    public static RTTIFactory read(Pointer pointer) {
        var allTypes = KzHashMap.read(pointer, KzString.TYPE, RTTI0.TYPE.ref());
        var managerTypes = KzArray.read(pointer.add(20), RTTI2.TYPE.ref());
        return new RTTIFactory(allTypes, managerTypes);
    }
}
