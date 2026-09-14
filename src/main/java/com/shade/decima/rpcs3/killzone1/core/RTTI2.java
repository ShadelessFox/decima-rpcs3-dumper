package com.shade.decima.rpcs3.killzone1.core;

import com.shade.decima.rpcs3.killzone1.lang.MemberFunctionPointer;
import com.shade.decima.rpcs3.killzone1.pcore.KzArray;
import com.shade.decima.rpcs3.memory.Pointer;
import com.shade.decima.rpcs3.memory.Ref;
import com.shade.decima.rpcs3.memory.Type;

/// A static RTTI for classes that implement `CoreObject`
public final class RTTI2 extends RTTI1 {
    public static final Type<RTTI2> TYPE = Type.of(RTTI2::new, 0x5C);

    public final MemberFunctionPointer defaultMessageHandler;
    public final KzArray<RTTIMessageHandler> mMessages;
    public final int cachedMessageNameCrc;
    public final MemberFunctionPointer cachedMessageHandler;
    public final KzArray<Ref<RTTIFunction>> functions;

    RTTI2(Pointer pointer) {
        super(pointer);

        this.defaultMessageHandler = MemberFunctionPointer.read(pointer.add(48));
        this.mMessages = KzArray.read(pointer.add(56), RTTIMessageHandler.TYPE);
        this.cachedMessageNameCrc = pointer.add(68).readInt();
        this.cachedMessageHandler = MemberFunctionPointer.read(pointer.add(72));
        this.functions = KzArray.read(pointer.add(80), RTTIFunction.TYPE.ref());
    }
}
