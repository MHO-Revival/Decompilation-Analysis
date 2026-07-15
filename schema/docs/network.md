# MHO Network / RPC — Round 3

1011 functions from CryGame.dll.

TLV serializers re-verified against decompiled code; see TLV_DISCREPANCIES.md for corrections to the generated structs.


## rmi  (77)

### RMI_RecvDispatch_Thunk_10a7bea0 `@10a7bea0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10a7bf70 `@10a7bf70` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x14; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x1c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x14., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x14`
    - `SRMIParams/handler ptr @ +0x1c`

### RMI_RecvDispatch_Thunk_10a7c040 `@10a7c040` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10a7c110 `@10a7c110` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x48; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x50)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x48., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x48`
    - `SRMIParams/handler ptr @ +0x50`

### RMI_RecvDispatch_Thunk_10a7c1e0 `@10a7c1e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x24; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x2c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x24., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x24`
    - `SRMIParams/handler ptr @ +0x2c`

### RMI_RecvDispatch_Thunk_10a7c2b0 `@10a7c2b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10a7c380 `@10a7c380` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10a7c450 `@10a7c450` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10a7c520 `@10a7c520` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x2c; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x34)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x2c., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x2c`
    - `SRMIParams/handler ptr @ +0x34`

### RMI_RecvDispatch_Thunk_10a7c5f0 `@10a7c5f0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10a7c6c0 `@10a7c6c0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10b39950 `@10b39950` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10b39a20 `@10b39a20` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10b3dbc0 `@10b3dbc0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x24; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x2c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x24., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x24`
    - `SRMIParams/handler ptr @ +0x2c`

### RMI_RecvDispatch_Thunk_10b3dc90 `@10b3dc90` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x28; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x30)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x28., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x28`
    - `SRMIParams/handler ptr @ +0x30`

### RMI_RecvDispatch_Thunk_10c30f40 `@10c30f40` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x14; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x1c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x14., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x14`
    - `SRMIParams/handler ptr @ +0x1c`

### RMI_RecvDispatch_Thunk_10c31010 `@10c31010` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c310e0 `@10c310e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x1c; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x24)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x1c., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x1c`
    - `SRMIParams/handler ptr @ +0x24`

### RMI_RecvDispatch_Thunk_10c311b0 `@10c311b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31280 `@10c31280` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10c31350 `@10c31350` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xac; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0xb4)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xac., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xac`
    - `SRMIParams/handler ptr @ +0xb4`

### RMI_RecvDispatch_Thunk_10c31430 `@10c31430` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31500 `@10c31500` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c315d0 `@10c315d0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x188; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x190)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x188., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x188`
    - `SRMIParams/handler ptr @ +0x190`

### RMI_RecvDispatch_Thunk_10c316b0 `@10c316b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10c31780 `@10c31780` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31850 `@10c31850` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31920 `@10c31920` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c319f0 `@10c319f0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31ac0 `@10c31ac0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x14; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x1c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x14., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x14`
    - `SRMIParams/handler ptr @ +0x1c`

### RMI_RecvDispatch_Thunk_10c31b90 `@10c31b90` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31c60 `@10c31c60` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c31d30 `@10c31d30` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x24; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x2c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x24., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x24`
    - `SRMIParams/handler ptr @ +0x2c`

### RMI_RecvDispatch_Thunk_10c31e00 `@10c31e00` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x20; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x28)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x20., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x20`
    - `SRMIParams/handler ptr @ +0x28`

### RMI_RecvDispatch_Thunk_10c31ed0 `@10c31ed0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10c31fa0 `@10c31fa0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10c32070 `@10c32070` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x14; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x1c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x14., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x14`
    - `SRMIParams/handler ptr @ +0x1c`

### RMI_RecvDispatch_Thunk_10c32140 `@10c32140` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_10c32210 `@10c32210` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x24; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x2c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x24., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x24`
    - `SRMIParams/handler ptr @ +0x2c`

### RMI_RecvDispatch_Thunk_10c322e0 `@10c322e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10c89a30 `@10c89a30` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x14; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x1c)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x14., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x14`
    - `SRMIParams/handler ptr @ +0x1c`

### RMI_RecvDispatch_Thunk_10cc5670 `@10cc5670` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10cc5740 `@10cc5740` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db31e0 `@10db31e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10db32b0 `@10db32b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db3380 `@10db3380` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db3450 `@10db3450` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db3520 `@10db3520` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db35f0 `@10db35f0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x30; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x38)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x30., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x30`
    - `SRMIParams/handler ptr @ +0x38`

### RMI_RecvDispatch_Thunk_10db36c0 `@10db36c0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10db3790 `@10db3790` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed05e0 `@10ed05e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10ed06b0 `@10ed06b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed0780 `@10ed0780` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed0850 `@10ed0850` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed0920 `@10ed0920` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed09f0 `@10ed09f0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x30; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x38)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x30., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x30`
    - `SRMIParams/handler ptr @ +0x38`

### RMI_RecvDispatch_Thunk_10ed0ac0 `@10ed0ac0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10ed0b90 `@10ed0b90` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f27de0 `@10f27de0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_10f27eb0 `@10f27eb0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f27f80 `@10f27f80` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f28050 `@10f28050` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f28120 `@10f28120` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f281f0 `@10f281f0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x30; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x38)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x30., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x30`
    - `SRMIParams/handler ptr @ +0x38`

### RMI_RecvDispatch_Thunk_10f282c0 `@10f282c0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_10f28390 `@10f28390` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_1110fe60 `@1110fe60` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_1110ff30 `@1110ff30` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_11110000 `@11110000` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x10; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x18)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x10., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x10`
    - `SRMIParams/handler ptr @ +0x18`

### RMI_RecvDispatch_Thunk_111100d0 `@111100d0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_111101a0 `@111101a0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_11110270 `@11110270` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x40; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x48)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x40., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x40`
    - `SRMIParams/handler ptr @ +0x48`

### RMI_RecvDispatch_Thunk_11110340 `@11110340` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0x18; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x20)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0x18., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0x18`
    - `SRMIParams/handler ptr @ +0x20`

### RMI_RecvDispatch_Thunk_11110410 `@11110410` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_111104e0 `@111104e0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`

### RMI_RecvDispatch_Thunk_111105b0 `@111105b0` — both
*CryEngine RMI receive-dispatch thunk. Resolves the target entity via EntitySystem (gEnv+4 ->vtable+0x3c ->vtable+0x144) using the net entity-id at param+0xc; if the entity's game-object extension (vtable+0x58) exists it invokes the per-RMI decode/handler function pointer stored in the SRMIParams (param+0x14)(param+8, netChannel); on failure it either logs 'Entity %d for RMI %s not found' and, if not in tolerant mode, disconnects the channel with error code 7.* (server: Server side must originate the matching RMI invocation (attached to this entity/netchannel) for the client to dispatch it. This is stock CryEngine RMI plumbing (auto-generated per RMI); the concrete message/action is defined by the SRMIParams descriptor pointer, not visible in the thunk. Entity-id lives at struct offset 0xc., conf medium)
- msgId: unknown (RMI, name in SRMIParams descriptor at runtime)
- fields:
    - `entity_netId: uint32 @ +0xc`
    - `SRMIParams/handler ptr @ +0x14`


## dispatch  (2)

### GameLogicEvent_Dispatch_A (virtualized) `@105474f0` — both
*Very large event dispatcher registering/routing named game & logic events (RegisterGameEvent, RegisterLogicEvent, EnterInstance, LeaveInstanceReq, RoleListResponse, SelectRoleResponse, GMCommand, GotoMap, level load, etc). Maps event-name strings to handlers.* (server: Indirect: consumes several S2C responses (RoleListResponse, SelectRoleResponse, EnterInstance). Actual wire handling is elsewhere; this is the client event bus., conf low)
- msgId: multiple (name-keyed)
- TLV: RoleListResponse, SelectRoleResponse, EnterInstance

### NetEventResponse_Dispatch_B (virtualized) `@105afde0` — S2C
*Very large network-response event dispatcher. String table lists S2C responses: ServerConnectStart/Succeeded/Failed, PingResult, Disconnected, EnterInstanceResponse, InstanceVerifyResponse, GlobalErrcode, CheckVersionResponse, RoleListResponse, SelectRoleResponse, Team*Response, PlayerTask*Response, PVPScore/EventResponse, TeamInviteAsk/Rsp. Routes decoded server messages to UI/logic listeners.* (server: HIGH (indirect): enumerates the server->client response set the client expects. Server must emit these responses; exact opcodes not visible here (virtualized)., conf low)
- msgId: multiple (name-keyed)
- TLV: CheckVersionResponse, RoleListResponse, SelectRoleResponse, EnterInstanceResponse, InstanceVerifyResponse, TeamInviteAsk, TeamInviteRsp, PVPScoreResponse, PVPEventResponse


## msg-handler  (5)

### MsgHandler_ChangeFaceOrSex_S2C `@10851330` — S2C
*Handles a face/sex change notification: depending on state at param_1+0x128 (1=face, 2=sex) it invokes the FlashUI ActionScript callback _root.onReceiveCurrentChangeFaceNumber or _root.onReceiveCurrentChangeSexNumber with the value from param_2. Character appearance update.* (server: Server sends face/sex change result; client pushes number to Flash UI. Server must deliver the new face/sex value., conf medium)
- fields:
    - `value: uint32 @ payload[0] (face) or payload[1] (sex)`

### MsgHandler_NpcTaskDlgComplete_A `@107fd390` — S2C
*Handler for NPC task dialogue completion: entity lookup by id, fires UI FX 0xff4/0x1389 depending on entity flags, clears mini-map trace, and when condition FUN_1050a110(0xf) set plays PlayNpcTaskDlgCompleteFx via UI action dispatcher.* (server: Server triggers the NPC-task/dialogue state change; these are client-side reactions (UI FX, mini-map). Server must send the driving task-progress/dialogue message; opcode not identifiable here., conf low)

### MsgHandler_NpcTaskDlgComplete_B `@107fdf20` — S2C
*Variant of NpcTaskDlgComplete handler taking int* payload; same entity-lookup + UI FX + mini-map clear + PlayNpcTaskDlgCompleteFx path, plus extra branches (FUN_105ec1c0 / FUN_105e4fe0).* (server: Server triggers the NPC-task/dialogue state change; these are client-side reactions (UI FX, mini-map). Server must send the driving task-progress/dialogue message; opcode not identifiable here., conf low)

### MsgHandler_TaskDialogClose_A `@107fd030` — S2C
*Message/event handler triggered on a task/dialogue-related network event: looks up the referenced entity by id (param_2+0xc), plays UI Flash notifications (0x139e), clears mini-map trace info when the tracked target matches, and forwards code 0xcb to a subsystem. Task/NPC dialogue completion flow.* (server: Server triggers the NPC-task/dialogue state change; these are client-side reactions (UI FX, mini-map). Server must send the driving task-progress/dialogue message; opcode not identifiable here., conf low)

### MsgHandler_TaskDialogClose_B `@107feb50` — S2C
*Task/dialogue handler variant (int* payload) with stack-guard frame; entity lookup, UI FX 0x139e, mini-map trace clear, conditional subsystem calls (FUN_105e4fe0/FUN_105ec1c0).* (server: Server triggers the NPC-task/dialogue state change; these are client-side reactions (UI FX, mini-map). Server must send the driving task-progress/dialogue message; opcode not identifiable here., conf low)


## tlv-serializer  (839)

Full per-struct field tables are in the byclass/TLV docs; here we list serializers with flagged discrepancies or protocol fields.

### EquipShowInfo_DebugFormat `@0x102033d0` — unknown
*DebugFormat text dump of an equipment-show element: [index] int16; [equipID] as 6 dwords ('%s[0 : %I64i]:' + 6x hex from param_1+2, likely 3x int64); a separator byte; [dataLen] int32 (validated 0..5000, -6/-7 on range); [equipData] byte array of dataLen bytes (header via FUN_1024a3b0). This is the per-element formatter for TlvFarmData's equipShowInfo[].* (server: Low. Debug dumper, but defines the equipShowInfo element layout (index + equipID[6dw] + dataLen + variable byte blob<=5000) needed to build the real struct., conf medium)
- TLV: TlvFarmData
- fields:
    - `index: int16 @ +0`
    - `equipID: 6 x int32 @ +2 (24 bytes; likely 3 x int64)`
    - `dataLen: int32 @ +0x1a (range 0..5000)`
    - `equipData: uint8[dataLen] @ +0x1e`

### PetTimeSlot_DebugFormat `@0x10201900` — unknown
*DebugFormat text dump of the pet time-slot element: prints [petID] as 4 dwords ('%s[0 : %I64i]:' header + 4x hex) then a separator byte, then [startTime] as 4 dwords. Documents the layout used by FUN_10201100/FUN_102012c0.* (server: Low. Debug-only; confirms petID/startTime naming and 4-dword width., conf medium)
- TLV: TlvPetFarmShowData
- fields:
    - `[petID]: 4 x int32 @ +0`
    - `[startTime]: 4 x int32 @ +0x10`

### PetTimeSlot_Write_variantA `@0x10201100` — both
*Binary TDR WRITE for a 2-field struct where each field is a fixed 4-element scalar array. field1 tag 0x15 (wire5 LEN): reserve len, write 4 varints from param_1+0..+0xc (FUN_1010c560), backpatch. field2 tag 0x25 (wire5 LEN): write 4 varints from param_1+0x10..+0x1c, backpatch. Per paired DebugFormat FUN_10201900 these are [petID] (4 dwords) and [startTime] (4 dwords).* (server: High. Wire writer for the pet time-slot element embedded (x6) inside TlvPetFarmShowData's sPFData array., conf medium)
- TLV: TlvPetFarmShowData
- fields:
    - `field 1 (tag 0x15): petID — LEN array of 4 x int32 @ +0 (16 bytes)`
    - `field 2 (tag 0x25): startTime — LEN array of 4 x int32 @ +0x10 (16 bytes)`

### PetTimeSlot_Write_variantB `@0x102012c0` — both
*Structural twin of FUN_10201100 (same {petID[4], startTime[4]} 2-field LEN layout, tags 0x15/0x25) but writes each dword via FUN_1010c190 (fixed32) instead of FUN_1010c560 (varint).* (server: High. Alternate-encoding wire writer for the pet time-slot element., conf medium)
- TLV: TlvPetFarmShowData
- fields:
    - `field 1 (tag 0x15): petID — LEN array of 4 x fixed32 @ +0`
    - `field 2 (tag 0x25): startTime — LEN array of 4 x fixed32 @ +0x10`

### PkgHead_TdrDebugFormat `@104227c0` — both
*TDR meta/DebugFormat serializer for the transport packet header struct (CPkgHead). Emits each header field with its name to a text/meta buffer via FUN_1024a290(ctx,name,type_meta,value). Reveals the fixed 16-byte packet header wire layout.* (server: CRITICAL: this is the fixed packet-framing header every message is wrapped in. Server MUST produce/parse this exact 16-byte layout: u16 wCmdID (opcode), u16 wHeadLen, u32 dwBodyLen, u32 dwSeqID, u32 dwNoUse., conf high)
- msgId: n/a (frame header)
- TLV: CPkgHead / packet frame header
- fields:
    - `wCmdID: uint16 @ 0x0 - command/opcode id`
    - `wHeadLen: uint16 @ 0x2 - header length`
    - `dwBodyLen: uint32 @ 0x4 - body/payload length`
    - `dwSeqID: uint32 @ 0x8 - sequence id`
    - `dwNoUse: uint32 @ 0xc - reserved/unused`
- ⚠ discrepancy: No packet-header doc present in TLV_DOCS to compare against; layout recovered here (size 0x10). Uses DebugFormat helper FUN_1024a290 with u16 meta DAT_11d9e0b4 and u32 meta DAT_11d9f574.

### Pkg_TdrDebugFormat_HeadBody `@10459960` — both
*TdrBufUtil.cpp packet meta/DebugFormat wrapper: emits [stHead] (calls PkgHead_TdrDebugFormat 104227c0) then [stBody] and recurses into the body serializer FUN_1043b460. Represents full packet = header + body framing.* (server: Confirms packet = {stHead: CPkgHead, stBody: <opcode-specific payload>}. Server must frame every message this way., conf high)
- msgId: n/a (frame)
- TLV: CPkgHead + body
- fields:
    - `stHead: CPkgHead @ header`
    - `stBody: variable payload`

### RoleDataList_DebugFormat `@0x101fd7b0` — unknown
*DebugFormat text dump of a role-keyed variable list: [roleGID] as %I64u (int64), [count] as int16 (validated 0..0x28=40), then [data] array of 'count' nested elements dumped via FUN_101fcbe0. Returns -6 if count<0, -7 if count>40.* (server: Low. Debug dumper, but establishes a roleGID + bounded(40) array shape used by some role/friend list struct., conf medium)
- TLV: unknown
- fields:
    - `roleGID: int64 @ +0 (printed %I64u)`
    - `count: int16 @ +8 (range 0..40)`
    - `data[count]: nested element (serializer sub_101fcbe0), one per index printed as '[data][i]'`

### TdrBuf_ReadByte `@0x10151b00` — unknown
*Low-level TdrBuf primitive: assert position<=length, if pos==len return -2 (0xfffffffe), else read one byte into *param_2 and advance position.* (server: Primitive; server's TdrBuf reader must match (return underflow error, advance pos)., conf high)
- TLV: unknown
- fields:
    - `buf: {base@0, pos@4, len@8} — reads 1 byte into out, pos++`

### TdrBuf_WriteByte `@0x10151ab0` — unknown
*Low-level TdrBuf primitive: assert position<=length, bounds-check, write one byte at buf[pos] and advance position. Returns 0xffffffff on full buffer.* (server: Primitive; server's TdrBuf equivalent must bounds-check and append a byte., conf high)
- TLV: unknown
- fields:
    - `buf: {base@0, pos@4, len@8} — writes 1 byte at base+pos, pos++`

### TdrDbgFmt_AccessoryArray_max18 `@0x103b0970` — both
*DebugFormat dump: [iCount] int32 @0 (range 0..0x12=18) then [astAccessory] array (elem FUN_103b0570).* (server: Server MUST cap accessories at 18., conf high)
- TLV: accessories list
- fields:
    - `iCount: int32 @0 (0..18)`
    - `astAccessory[]: struct (elem FUN_103b0570)`

### TdrDbgFmt_ActivityList_max100 `@0x103cca70` — S2C
*DebugFormat dump: [bActivitySum] uint8 @0 (cap 100) then [astActivityList] array (elem FUN_103cc6b0).* (server: Server MUST cap activity list at 100., conf high)
- TLV: TlvActivityDataList.md (candidate)
- fields:
    - `bActivitySum: uint8 @0 (max 100)`
    - `astActivityList[]: struct (elem FUN_103cc6b0)`

### TdrDbgFmt_ActivityWinners_max10 `@0x103cd210` — S2C
*DebugFormat dump: [iAcitivtyId] int32 @0 (sic), [bWinnersSum] uint8 @4 (cap 10), [astWinnersList] array of [szName] fixed 32-byte strings (stride 0x20 @5).* (server: Server MUST cap winners at 10; each winner is a 32-byte name., conf high)
- TLV: activity winners announcement
- fields:
    - `iAcitivtyId: int32 @0`
    - `bWinnersSum: uint8 @4 (max 10)`
    - `astWinnersList[]: {szName: char[32]} @5 stride 0x20`

### TdrDbgFmt_AppearArray_max4 `@0x10393550` — both
*DebugFormat dump: [iCount] (int32 @0, range 0..4) then [astAppear] array (elem FUN_10392bd0).* (server: Server MUST cap astAppear at 4., conf high)
- TLV: appearance/equip list
- fields:
    - `iCount: int32 @0 (0..4)`
    - `astAppear[]: struct (elem FUN_10392bd0)`

### TdrDbgFmt_ArgsCtxWrap `@0x103c8de0` — both
*DebugFormat dump: nested [stArgs] (FUN_103c6f30) then [stCtx] (FUN_103c76e0).* (server: Layout only., conf medium)
- fields:
    - `stArgs: nested (FUN_103c6f30)`
    - `stCtx: nested (FUN_103c76e0)`

### TdrDbgFmt_ArgsWrap_103c7a80 `@0x103c7a80` — both
*DebugFormat dump: nested [stArgs] (FUN_103c6f30).* (server: Layout only., conf medium)
- fields:
    - `stArgs: nested (FUN_103c6f30)`

### TdrDbgFmt_AvatarSculptureWrap `@0x10385ff0` — both
*DebugFormat dump: prints scalar [iSculpture] (int32 @0) then nested struct label [stAvatar] and recurses into avatar serializer FUN_103849c0.* (server: Layout only: server must emit iSculpture then embedded avatar struct in this order., conf medium)
- TLV: TlvAvatar/BasicRoleInfo (unconfirmed)
- fields:
    - `iSculpture: int32 @0`
    - `stAvatar: nested-struct (FUN_103849c0)`

### TdrDbgFmt_AwardsArray_max5 `@0x10387810` — both
*DebugFormat dump of an awards struct: scalar [iCount] (int32 @0, validated 0..5) then array [astAwards] of up to 5 elements, each printed by FUN_10387450.* (server: Server MUST cap astAwards at 5; returns -6 if count<0, -7 if count>5., conf high)
- TLV: awards list (unconfirmed)
- fields:
    - `iCount: int32 @0 (range 0..5)`
    - `astAwards[]: struct[iCount] (elem FUN_10387450)`

### TdrDbgFmt_CardData_max20 `@0x103ab160` — both
*DebugFormat dump: [bCardNum] uint8 @0 (cap 20) then [astCardData] array (elem FUN_103aacd0).* (server: Cap 20., conf high)
- TLV: TlvCompleteBitCards.md / card data (candidate)
- fields:
    - `bCardNum: uint8 @0 (max 20)`
    - `astCardData[]: struct (elem FUN_103aacd0)`

### TdrDbgFmt_CtxArray_max20 `@0x103c76e0` — both
*DebugFormat dump: [iCount] int32 @0 (0..0x14=20) then [astCtx] array (elem FUN_103c7320).* (server: Server MUST cap ctx list at 20., conf high)
- fields:
    - `iCount: int32 @0 (0..20)`
    - `astCtx[]: struct (elem FUN_103c7320)`

### TdrDbgFmt_ErrCodeReqWrap_103c0900 `@0x103c0900` — S2C
*DebugFormat dump: [iErrCode] int32 @0, nested [stReq] (FUN_103c0590).* (server: Layout only., conf medium)
- fields:
    - `iErrCode: int32 @0`
    - `stReq: nested (FUN_103c0590)`

### TdrDbgFmt_ErrCodeReqWrap_103c1060 `@0x103c1060` — S2C
*DebugFormat dump: [iErrCode] int32 @0, nested [stReq] (FUN_103c0cd0).* (server: Layout only., conf medium)
- fields:
    - `iErrCode: int32 @0`
    - `stReq: nested (FUN_103c0cd0)`

### TdrDbgFmt_ErrCodeReqWrap_103c3f70 `@0x103c3f70` — S2C
*DebugFormat dump: [iErrCode] int32 @0, nested [stReq] (FUN_103c3b70).* (server: Layout only., conf medium)
- fields:
    - `iErrCode: int32 @0`
    - `stReq: nested (FUN_103c3b70)`

### TdrDbgFmt_FarmBlob_dwServerTime `@0x103c2940` — S2C
*DebugFormat dump: [szFarm] as a 4096-byte (0x1000) hex byte-dump, then [dwServerTime] uint32 @0x1000.* (server: Server sends a 4KB farm-state blob plus server timestamp., conf high)
- TLV: farm state blob
- fields:
    - `szFarm: byte[4096] @0 (opaque blob)`
    - `dwServerTime: uint32 @0x1000`

### TdrDbgFmt_FarmGatherResult `@0x103c0020` — S2C
*DebugFormat dump of farm/gather result: [iErrCode] int32 @0, nested [stReq] (FUN_103bf800), scalar-array [award] int32[10] @0x31, [awardCount] int32[10] @0x59, [awardErrCode] int32[10] @0x81, [iConsumeTool] int32 @0xa9, [iGatherLeft] int32 @0xad, [iFarmExp] int32 @0xb1, [bAdvResult] uint8 @0xb5, [bSkipCutScene] uint8 @0xb6.* (server: Server produces farm-gather reply: award/count/errcode triple arrays (10 each) + tool consumption, remaining gathers, farm exp, advance flag, skip-cutscene flag. DebugFormat for FUN_103bfb20 pack., conf high)
- TLV: farm gather/harvest result
- fields:
    - `iErrCode: int32 @0`
    - `stReq: nested (FUN_103bf800)`
    - `award: int32[10] @0x31`
    - `awardCount: int32[10] @0x59`
    - `awardErrCode: int32[10] @0x81`
    - `iConsumeTool: int32 @0xa9`
    - `iGatherLeft: int32 @0xad`
    - `iFarmExp: int32 @0xb1`
    - `bAdvResult: uint8 @0xb5`
    - `bSkipCutScene: uint8 @0xb6`

### TdrDbgFmt_FriendOnlineList_max700 `@0x1038d3d0` — S2C
*DebugFormat dump: [wFriendCount] (uint16 @0, cap 700) then [astFriendOnlineList] array (elem FUN_1038c5c0).* (server: Server sends online-friends list; cap 700., conf high)
- TLV: friend online notify
- fields:
    - `wFriendCount: uint16 @0 (max 700)`
    - `astFriendOnlineList[]: struct (elem FUN_1038c5c0)`

### TdrDbgFmt_FriendOnlineWrap `@0x1038d800` — both
*DebugFormat dump: nested [stFriendOnline] (FUN_1038c5c0) then [stFriender] (FUN_10388330).* (server: Layout only., conf medium)
- fields:
    - `stFriendOnline: nested (FUN_1038c5c0)`
    - `stFriender: nested (FUN_10388330)`

### TdrDbgFmt_FrienderRoleInfo `@0x10388930` — both
*DebugFormat dump of the friend-with-result struct: [bRet] uint8 @0, nested [stFriender] (FUN_10388330), then [ullRoleDBID] i64 @0x205, [iNetID] @0x20d, [iLevel] @0x211, [szRoleName] @0x215, [bOnline] @0x235, [iFarmPoint] @0x236, [iFarmCanBGatheredCount] @0x23a, [iLineId] @0x23e.* (server: Reveals authoritative full friend-info layout the server must reproduce., conf high)
- TLV: TlvFriendRoleInfo.md
- fields:
    - `bRet: uint8 @0`
    - `stFriender: nested @after`
    - `ullRoleDBID: int64 @0x205`
    - `iNetID: int32 @0x20d`
    - `iLevel: int32 @0x211`
    - `szRoleName: char[32] @0x215`
    - `bOnline: uint8 @0x235`
    - `iFarmPoint: int32 @0x236`
    - `iFarmCanBGatheredCount: int32 @0x23a`
    - `iLineId: int32 @0x23e`
- ⚠ discrepancy: Authoritative DebugFormat contradicts TlvFriendRoleInfo.md: extra fields iNetID/bOnline/iLineId present here, field name is iFarmCanBGatheredCount (no 'e'). Doc's 0x99 form is a strict subset.

### TdrDbgFmt_FriendersArray_max700 `@0x1038cf80` — both
*DebugFormat dump: [wFriendCount] (uint16 @0, cap 700) then [astFrienders] array of friender entries (elem FUN_10388330).* (server: Server MUST cap friends list at 700 (returns -7 otherwise)., conf high)
- TLV: friend list / TlvFriendRoleInfo
- fields:
    - `wFriendCount: uint16 @0 (max 700)`
    - `astFrienders[]: struct[wFriendCount] (elem FUN_10388330)`

### TdrDbgFmt_FriendersArray_max700_b `@0x1038f1a0` — both
*DebugFormat dump: [wFriendCount] (uint16, cap 700) then [astFrienders] (elem FUN_10388330). Second occurrence (different message).* (server: Cap 700., conf high)
- fields:
    - `wFriendCount: uint16 @0 (max 700)`
    - `astFrienders[]: struct (elem FUN_10388330)`

### TdrDbgFmt_MailArgsWrap `@0x103b3670` — both
*DebugFormat dump: nested [stMailArgs] (FUN_103b1e50).* (server: Layout only., conf medium)
- fields:
    - `stMailArgs: nested (FUN_103b1e50)`

### TdrDbgFmt_MailBody `@0x103b0e50` — both
*DebugFormat dump: [szContent] string then nested [stAccessories] (FUN_103b0970 accessory array).* (server: Layout only., conf medium)
- fields:
    - `szContent: string @0`
    - `stAccessories: nested (FUN_103b0970)`

### TdrDbgFmt_MailDetail `@0x103b12b0` — S2C
*DebugFormat dump: nested [stHead] (FUN_103ae4e0), [stMemo] (FUN_103aead0), [stBody] (FUN_103b0e50).* (server: Full mail-detail structure the server sends: head + memo + body(content+accessories)., conf high)
- TLV: mail detail (stMailDetail)
- fields:
    - `stHead: nested (FUN_103ae4e0)`
    - `stMemo: nested (FUN_103aead0)`
    - `stBody: nested (FUN_103b0e50)`

### TdrDbgFmt_MailDetailResult_dwUin `@0x103b5c10` — S2C
*DebugFormat dump: [iResult] int32 @0, nested [stResults] (union FUN_103b58d0), [dwUin] uint32 @0x94be.* (server: Mail-detail reply with trailing dwUin., conf high)
- fields:
    - `iResult: int32 @0`
    - `stResults: nested union (FUN_103b58d0)`
    - `dwUin: uint32 @0x94be`

### TdrDbgFmt_MailDetailWrap `@0x103b5110` — S2C
*DebugFormat dump: nested [stMailDetail] (FUN_103b12b0).* (server: Layout only., conf medium)
- fields:
    - `stMailDetail: nested (FUN_103b12b0)`

### TdrDbgFmt_MailDetail_ResultUnion `@0x103b58d0` — S2C
*DebugFormat dump union: result==0 -> [stNoerr] (FUN_103b5110 mail detail); else [stError] (FUN_103b5570).* (server: Server selects branch by result., conf high)
- fields:
    - `union tag = result`
    - `stNoerr: FUN_103b5110`
    - `stError: FUN_103b5570`

### TdrDbgFmt_MailHeadMemo `@0x103aef00` — both
*DebugFormat dump: nested [stHead] (FUN_103ae4e0) then [stMemo] (FUN_103aead0).* (server: Layout only., conf medium)
- fields:
    - `stHead: nested (FUN_103ae4e0)`
    - `stMemo: nested (FUN_103aead0)`

### TdrDbgFmt_MailRoleToError_max100 `@0x103b40b0` — S2C
*DebugFormat dump of mail error branch: [szErrMsg] string @0, [iRoleCount] int32 @0x80 (0..100), [astMailRoleTo] array (elem FUN_103ad690), [iErrCount] int32 @0x1088 (0..100), scalar-array [errCode] int32[] @0x108c.* (server: Server MUST cap both arrays at 100; errCode is a scalar int32 array (uses FUN_1024a3b0 array-open + FUN_1010c060 array-close)., conf high)
- fields:
    - `szErrMsg: char[128] @0`
    - `iRoleCount: int32 @0x80 (0..100)`
    - `astMailRoleTo[]: struct (elem FUN_103ad690)`
    - `iErrCount: int32 @0x1088 (0..100)`
    - `errCode[]: int32 @0x108c`

### TdrDbgFmt_MailRoleToResult_szErr `@0x103b49b0` — S2C
*DebugFormat dump: [iResult] int32 @0, nested [stMailRoleTo] (FUN_103ad690), [szErrMsg] string @0x2d.* (server: Layout only., conf medium)
- fields:
    - `iResult: int32 @0`
    - `stMailRoleTo: nested (FUN_103ad690)`
    - `szErrMsg: string @0x2d`

### TdrDbgFmt_MailRoleTo_ResultUnion `@0x103b45b0` — S2C
*DebugFormat dump union: result==0 -> [stNoerr] (FUN_103b3a50 recipients list); else [stError] (FUN_103b40b0 error+errCodes).* (server: Server selects branch by result code., conf high)
- fields:
    - `union tag = result`
    - `stNoerr: FUN_103b3a50`
    - `stError: FUN_103b40b0`

### TdrDbgFmt_MailRoleTo_max100 `@0x103b3a50` — both
*DebugFormat dump: [iCount] int32 @0 (0..100) then [astMailRoleTo] array (elem FUN_103ad690).* (server: Server MUST cap recipients at 100., conf high)
- TLV: mail recipients list
- fields:
    - `iCount: int32 @0 (0..100)`
    - `astMailRoleTo[]: struct (elem FUN_103ad690)`

### TdrDbgFmt_MatchInfoWrap `@0x1039e6e0` — both
*DebugFormat dump: nested [stInfo] recursing into FUN_1039e310 (the match-infos struct above).* (server: Layout only., conf medium)
- fields:
    - `stInfo: nested (FUN_1039e310)`

### TdrDbgFmt_MatchInfos_max10 `@0x1039e310` — both
*DebugFormat dump: [iNpcID] int32 @0, [dwMatchCount] uint32 @4 (cap 10), then [astMatchInfos] array of {[iLevelID] int32} starting @8.* (server: Server MUST cap matches at 10; each element is a single int32 iLevelID., conf high)
- TLV: match/quest info list
- fields:
    - `iNpcID: int32 @0`
    - `dwMatchCount: uint32 @4 (max 10)`
    - `astMatchInfos[]: {iLevelID: int32} @8, stride 4`

### TdrDbgFmt_MatchSignUpWrap_103a35c0 `@0x103a35c0` — both
*DebugFormat dump: nested [stMatchSignUp] recursing into FUN_103a2de0.* (server: Layout only., conf medium)
- fields:
    - `stMatchSignUp: nested (FUN_103a2de0)`

### TdrDbgFmt_MatchSignUpWrap_103a44e0 `@0x103a44e0` — both
*DebugFormat dump: nested [stMatchSignUp] recursing into FUN_103a2de0.* (server: Layout only., conf medium)
- fields:
    - `stMatchSignUp: nested (FUN_103a2de0)`

### TdrDbgFmt_PrizeInfo_fixed10 `@0x103bbc70` — S2C
*DebugFormat dump: fixed [astPrizeInfo] array of 10 elements {[dwPrizeId] uint32, [iPrizeState] int32} (8-byte stride @0), then [iCount] int32 @0x50, [iCurContribution] int32 @0x54, [iMaxDailyContribution] int32 @0x58.* (server: Fixed 10-entry prize table + contribution counters; server must emit exactly 10 entries., conf high)
- TLV: TlvCommerceGuild/guild prize contribution (candidate)
- fields:
    - `astPrizeInfo[10]: {dwPrizeId: uint32, iPrizeState: int32} @0 stride 8`
    - `iCount: int32 @0x50`
    - `iCurContribution: int32 @0x54`
    - `iMaxDailyContribution: int32 @0x58`

### TdrDbgFmt_ResultUnion_ErrMsg `@0x103b2fb0` — S2C
*DebugFormat dump of a result union: if (result==0) print nested [stNoerr] (FUN_103b27c0); else print [stError] then string [szErrMsg].* (server: Server chooses stNoerr vs stError branch based on result code; error branch carries szErrMsg., conf high)
- TLV: generic error/result union
- fields:
    - `union tag = (param_2,param_3) result`
    - `stNoerr: nested (FUN_103b27c0) when result==0`
    - `stError.szErrMsg: string when result!=0`

### TdrDbgFmt_ResultUnion_ullMailId `@0x103b6a30` — S2C
*DebugFormat dump union: result==0 -> [stNoerr] with [ullMailId] int64; else [stError] (FUN_103b6690).* (server: Success branch returns the new ullMailId., conf high)
- TLV: send-mail reply
- fields:
    - `union tag = result`
    - `stNoerr.ullMailId: int64 (%I64u)`
    - `stError: FUN_103b6690`

### TdrDbgFmt_ResultWrap_dwUin `@0x103b3310` — S2C
*DebugFormat dump: [iResult] int32 @0, nested [stResults] (union FUN_103b2fb0), then [dwUin] uint32 @0xa1c8 (param_1[0x2872]).* (server: Result reply with trailing dwUin., conf high)
- fields:
    - `iResult: int32 @0`
    - `stResults: nested union (FUN_103b2fb0)`
    - `dwUin: uint32 @0xa1c8`

### TdrDbgFmt_ResultWrap_ullMailId `@0x103b6da0` — S2C
*DebugFormat dump: [iResult] int32 @0, nested [stResults] (union FUN_103b6a30).* (server: Layout only., conf medium)
- fields:
    - `iResult: int32 @0`
    - `stResults: nested union (FUN_103b6a30)`

### TdrDbgFmt_ResultsArray_max300 `@0x103babb0` — S2C
*DebugFormat dump: [iResult] int32 @0, [iCount] int32 @4 (0..300), [astResults] array (elem FUN_103ba7c0).* (server: Server MUST cap results at 300., conf high)
- fields:
    - `iResult: int32 @0`
    - `iCount: int32 @4 (0..300)`
    - `astResults[]: struct (elem FUN_103ba7c0)`

### TdrDbgFmt_SenderName_Bytes32 `@0x103b87c0` — both
*DebugFormat dump: [szSenderName] as a 33-byte (0x21) hex-byte dump (' 0x%02x' each), then writes a trailing byte + null terminator into buffer.* (server: Layout only; sender-name fixed 32+1 bytes., conf medium)
- fields:
    - `szSenderName: byte[33] @0 (dumped as hex)`

### TdrDbgFmt_SignUpTeams_max128 `@0x103a4910` — both
*DebugFormat dump: [dwCount] uint32 @0 (cap 0x80=128) then [astSignUpTeams] array (elem FUN_103a2de0).* (server: Server MUST cap at 128., conf high)
- fields:
    - `dwCount: uint32 @0 (max 128)`
    - `astSignUpTeams[]: struct (elem FUN_103a2de0)`

### TdrDbgFmt_SignUpTeams_max20 `@0x103a3ac0` — both
*DebugFormat dump: [dwCount] uint32 @0 (cap 20), [astSignUpTeams] array (elem FUN_103a2de0), then [chBegin] uint8 @0x15f8 and [chFin] uint8 @0x15f9.* (server: Cap 20., conf high)
- TLV: match sign-up teams
- fields:
    - `dwCount: uint32 @0 (max 20)`
    - `astSignUpTeams[]: struct (elem FUN_103a2de0)`
    - `chBegin: uint8 @0x15f8`
    - `chFin: uint8 @0x15f9`

### TdrDbgFmt_StarBranchStats `@0x103aa390` — both
*DebugFormat dump of a card/arena star+branch stats struct: [iAllScore] int32 @0, [iStarScore] int32 @4, [bStarNum] uint8 @8 (cap 20), [astStarList] array (elem FUN_103a9ef0), [bBranchNum] uint8 @0x6d (cap 10), [astBranchList] array (elem FUN_103a9b60).* (server: Server MUST cap stars at 20 and branches at 10., conf high)
- TLV: TlvCardStarSystemData.md / TlvBranchStats.md (candidate)
- fields:
    - `iAllScore: int32 @0`
    - `iStarScore: int32 @4`
    - `bStarNum: uint8 @8 (max 20)`
    - `astStarList[]: struct (elem FUN_103a9ef0)`
    - `bBranchNum: uint8 @0x6d (max 10)`
    - `astBranchList[]: struct (elem FUN_103a9b60)`

### TdrDbgFmt_StatData_max100 `@0x103ab990` — both
*DebugFormat dump: [bStatNum] uint8 @0 (cap 100) then [astStatData] array (elem FUN_103ab550).* (server: Cap 100., conf high)
- fields:
    - `bStatNum: uint8 @0 (max 100)`
    - `astStatData[]: struct (elem FUN_103ab550)`

### TdrDbgFmt_TargetInfo_fixed100 `@0x103bc7b0` — both
*DebugFormat dump: fixed [astTargetInfo] array of 100 elements (elem FUN_103bc400), then [iCount] int32 @0x4b0.* (server: Fixed 100-entry target table; iCount indicates used entries., conf high)
- fields:
    - `astTargetInfo[100]: struct (elem FUN_103bc400)`
    - `iCount: int32 @0x4b0`

### TdrDbgFmt_TokensArray_max20 `@0x103cdaf0` — both
*DebugFormat dump: [iCount] int32 @0 (0..20) then [astTokens] array (elem FUN_103cd6e0).* (server: Server MUST cap tokens at 20., conf high)
- fields:
    - `iCount: int32 @0 (0..20)`
    - `astTokens[]: struct (elem FUN_103cd6e0)`

### TdrDbgFmt_TypedAwards_max20 `@0x103c9210` — both
*DebugFormat dump: [iType] int32 @0, [bAwardsSum] uint8 @4 (cap 20), [astAwards] array (elem FUN_103c6f30).* (server: Server MUST cap awards at 20., conf high)
- TLV: typed award list
- fields:
    - `iType: int32 @0`
    - `bAwardsSum: uint8 @4 (max 20)`
    - `astAwards[]: struct (elem FUN_103c6f30)`

### TdrDebugFormat_ActionPointData `@0x102b9020` — unknown
*DebugFormat dumper for ActionPointData: [actionPoint] fixed u32[2] @0x0, terminator byte, [iAdditionalActionPoint]=i32@8, [iNextResetTime]=i32@0xc, [dwActionPointFlags]=u32@0x10 (%u).* (server: None - debug logging only; documents full struct beyond 0x99 wire subset., conf high)
- TLV: TlvActionPointData
- fields:
    - `actionPoint: u32[2] @0x0`
    - `iAdditionalActionPoint: i32 @0x8`
    - `iNextResetTime: i32 @0xc`
    - `dwActionPointFlags: u32 @0x10`
- ⚠ discrepancy: TlvActionPointData.md 0x99 subset lists only actionPoint(fid2) and nextResetTime(fid4) as scalar int32; the full struct also has iAdditionalActionPoint@0x8 and dwActionPointFlags@0x10, and actionPoint is a fixed u32[2] array, not a scalar. Doc already flags 'schema has 2, DebugFormat has 3'.

### TdrDebugFormat_ActionPointDataWrap `@0x102bef10` — unknown
*DebugFormat dumper: single [stActionPointData] = ActionPointData (FUN_102b9020).* (server: None - debug logging only., conf high)
- TLV: TlvActionPointData
- fields:
    - `stActionPointData: ActionPointData`

### TdrDebugFormat_ActionPointResponse `@0x102b97c0` — unknown
*DebugFormat dumper for an action-point response wrapper: [stRequest](FUN_102b9450), [iResult]=i32@8, [stData] = ActionPointData (FUN_102b9020).* (server: None - debug logging only., conf high)
- TLV: TlvActionPointData
- fields:
    - `stRequest: substruct`
    - `iResult: i32 @0x8`
    - `stData: ActionPointData`

### TdrDebugFormat_AmmoList `@0x102b4d50` — unknown
*DebugFormat dumper: [iNetID]=i32@0, [iCount]=i32@4 (max 0x14), [astAmmos] array via FUN_102a4760.* (server: None - debug logging only., conf high)
- fields:
    - `iNetID: i32 @0x0`
    - `iCount: i32 @0x4 (max 20)`
    - `astAmmos: array (FUN_102a4760)`

### TdrDebugFormat_AppearList4_A `@0x102a60f0` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 4), [astAppear] array via FUN_102a5490.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 4)`
    - `astAppear: array (FUN_102a5490)`

### TdrDebugFormat_AppearList4_B `@0x102b4170` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 4), [astAppear] array via FUN_102b1930.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 4)`
    - `astAppear: array (FUN_102b1930)`

### TdrDebugFormat_AppearList4_C `@0x102b6060` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 4), [astAppear] array via FUN_102b5700.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 4)`
    - `astAppear: array (FUN_102b5700)`

### TdrDebugFormat_AttrList50 `@0x102845d0` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 0x32, >=0), [astAttr] array via FUN_10284190.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 50)`
    - `astAttr: array (FUN_10284190)`

### TdrDebugFormat_BaseStatInfo `@0x102986c0` — unknown
*DebugFormat dumper: [stBaseInfo](FUN_10297290) + [stStatInfo](FUN_10297710) - the leading subset of the hunt-result struct.* (server: None - debug logging only., conf high)
- fields:
    - `stBaseInfo: substruct`
    - `stStatInfo: substruct`

### TdrDebugFormat_BuyLimitData `@0x102c3240` — unknown
*DebugFormat dumper for shop buy-limit data: [wDayLimitCnt]@0, [wWeekLimitCnt]@2, [wMonthLimitCnt]@4, [wForeverLimitCnt]@6 (each u16, each max 0xc8), then four arrays [astDayBuyLimitData]/[astWeekBuyLimitData]/[astMonthBuyLimitData]/[astForeverBuyLimitData], each element via FUN_102c2b90.* (server: None - debug logging only., conf high)
- fields:
    - `wDayLimitCnt: u16 @0x0 (max 200)`
    - `wWeekLimitCnt: u16 @0x2 (max 200)`
    - `wMonthLimitCnt: u16 @0x4 (max 200)`
    - `wForeverLimitCnt: u16 @0x6 (max 200)`
    - `astDay/Week/Month/ForeverBuyLimitData: arrays (FUN_102c2b90)`

### TdrDebugFormat_ByteThenFloatSub `@0x10271b90` — unknown
*DebugFormat dumper: emits a char/type field (name DAT_11da9f98) then a nested float sub-struct (FUN_102717b0) then another named field (DAT_11da9f94).* (server: None - debug logging only., conf low)
- fields:
    - `type: i8`
    - `sub: substruct (FUN_102717b0)`

### TdrDebugFormat_CatCarUseInfoList `@0x102ae180` — unknown
*DebugFormat dumper: [iCatCarPlayerNum]=i32@0 (max 0x18), [astPlayerCatCarUseInfo] array via FUN_102add90.* (server: None - debug logging only., conf high)
- fields:
    - `iCatCarPlayerNum: i32 @0x0 (max 24)`
    - `astPlayerCatCarUseInfo: array (FUN_102add90)`

### TdrDebugFormat_DisappearList4 `@0x102b74d0` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 4), [astDisappear] array via FUN_102b6de0.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 4)`
    - `astDisappear: array (FUN_102b6de0)`

### TdrDebugFormat_EffectAttach `@0x10280f70` — unknown
*DebugFormat dumper for an effect-attach struct: [szEffectName] string@0, [stOffset] vec3 (FUN_102713d0), [stAngle] vec3 (FUN_102713d0), [fScale]=float@0x98.* (server: None - debug logging only., conf high)
- fields:
    - `szEffectName: str @0x0`
    - `stOffset: vec3`
    - `stAngle: vec3`
    - `fScale: float @0x98`

### TdrDebugFormat_EffectList256 `@0x102a7480` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 0x100), [astEffectList] array via FUN_102a6fc0.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 256)`
    - `astEffectList: array (FUN_102a6fc0)`

### TdrDebugFormat_EntityAttrList `@0x10285510` — unknown
*DebugFormat dumper: [dwEntityID]=u32@0 (%u), [nCount]=i16@4 (max 100), [astAttr] array via FUN_102850c0.* (server: None - debug logging only., conf high)
- fields:
    - `dwEntityID: u32 @0x0`
    - `nCount: i16 @0x4 (max 100)`
    - `astAttr: array (FUN_102850c0)`

### TdrDebugFormat_EntriesList `@0x10280a30` — unknown
*DebugFormat dumper: [wCount]=u16@0 (max 0x32), [astEntries] array via FUN_10280640.* (server: None - debug logging only., conf high)
- fields:
    - `wCount: u16 @0x0 (max 50)`
    - `astEntries: array (FUN_10280640)`

### TdrDebugFormat_ErrNoRandomPos `@0x10286a90` — unknown
*DebugFormat dumper: [iErrNo]=i32@0, [stRandomPos] vec3 (FUN_102713d0).* (server: None - debug logging only., conf high)
- fields:
    - `iErrNo: i32 @0x0`
    - `stRandomPos: vec3`

### TdrDebugFormat_ExtNotify `@0x102bfdb0` — unknown
*DebugFormat dumper: [chExtType]=u8@0 (0x%02x), [stNotify] union dispatched by chExtType via FUN_102bf230.* (server: None - debug logging only., conf high)
- fields:
    - `chExtType: u8 @0x0`
    - `stNotify: union (FUN_102bf230)`

### TdrDebugFormat_ExtRequest `@0x102bf590` — unknown
*DebugFormat dumper: [chExtType]=u8@0 (0x%02x), [stRequest] union; when chExtType==2 emits body via FUN_102bec20 (InteractRequest).* (server: None - debug logging only., conf high)
- fields:
    - `chExtType: u8 @0x0`
    - `stRequest: union (type==2 -> FUN_102bec20)`

### TdrDebugFormat_FactionWarState `@0x102b2eb0` — unknown
*DebugFormat dumper for a faction-war struct: [astGang] fixed array of 2 (FUN_102b24b0), [iCountDown]@0x74, [iStage]@0x78, [iResult]@0x7c, [iGoal]@0x80, [iFaction]@0x84, [stEvent] sub-struct (FUN_102b2960).* (server: None - debug logging only., conf high)
- fields:
    - `astGang: array[2] (FUN_102b24b0)`
    - `iCountDown: i32 @0x74`
    - `iStage: i32 @0x78`
    - `iResult: i32 @0x7c`
    - `iGoal: i32 @0x80`
    - `iFaction: i32 @0x84`
    - `stEvent: substruct (FUN_102b2960)`

### TdrDebugFormat_FixedU32Array7 `@0x102849a0` — unknown
*DebugFormat dumper for a fixed [value] array of 7 u32 (indices 0..6), then writes a terminator byte (param_4) + NUL into the sink buffer.* (server: None - debug logging only (fixed 7-element bonus/attr array)., conf high)
- fields:
    - `value: u32[7] @0x0`

### TdrDebugFormat_FloatField_at0xc `@0x102717b0` — unknown
*DebugFormat dumper emitting a single float field (%f) read from offset 0xc of the struct; opens one named element (name via DAT_11da9f8c).* (server: None - debug logging only., conf medium)
- fields:
    - `field: float @0xc`

### TdrDebugFormat_GiftData `@0x1024cf20` — unknown
*DebugFormat text dumper for GiftData: emits [giftAttr] sub-struct (FUN_1024c2f0), [giftNum]=u8@0x10 (0x%02x), [giftId] u32 array@0x11, [giftState] u8 array@0x1a1.* (server: None - client debug logging only; confirms GiftData field layout., conf high)
- TLV: TlvGiftData
- fields:
    - `giftAttr: substruct @0x?? (FUN_1024c2f0)`
    - `giftNum: u8 @0x10`
    - `giftId: u32[] @0x11`
    - `giftState: u8[] @0x1a1`

### TdrDebugFormat_GroupList17 `@0x102acc20` — unknown
*DebugFormat dumper: [iErrCode]=i32@0, [nGroupCount]=i16@4 (max 0x11), [astGroupInfos] array via FUN_102aa170.* (server: None - debug logging only., conf high)
- fields:
    - `iErrCode: i32 @0x0`
    - `nGroupCount: i16 @0x4 (max 17)`
    - `astGroupInfos: array (FUN_102aa170)`

### TdrDebugFormat_GuideNotify `@0x102bcb60` — unknown
*DebugFormat dumper: [iNotifyType]=i32@0, [stNotify] union; only when iNotifyType==1 emits sub-body via FUN_102bc8a0 (GuideNotifySetStep).* (server: None - debug logging only., conf high)
- fields:
    - `iNotifyType: i32 @0x0`
    - `stNotify: union (type==1 -> FUN_102bc8a0)`

### TdrDebugFormat_GuideNotifySetStep `@0x102bc8a0` — unknown
*DebugFormat dumper: single [stGuideNotifySetStep] sub-struct via FUN_102bc530.* (server: None - debug logging only., conf high)
- fields:
    - `stGuideNotifySetStep: substruct (FUN_102bc530)`

### TdrDebugFormat_GuildIdName `@0x102a43c0` — unknown
*DebugFormat dumper for a guild id/name: [stId] sub-struct (FUN_102a3f50), [szGuildName] string@0x38.* (server: None - debug logging only., conf high)
- fields:
    - `stId: substruct (FUN_102a3f50)`
    - `szGuildName: str @0x38`

### TdrDebugFormat_HuntResultFull `@0x10298140` — unknown
*DebugFormat dumper for a large hunt/monster result: [stBaseInfo](FUN_10297290), [stStatInfo](FUN_10297710), [iRewardCount]=i32@0x178 (max 0x28) + [astRewardInfoList] via FUN_10296b50, [iSizeChangeNtfCnt]=i32@0x2169c (max 10) + [astSizeChangeInfoList] via FUN_10297b60.* (server: None - debug logging only; useful for reconstructing hunt-result struct offsets., conf high)
- fields:
    - `stBaseInfo: substruct`
    - `stStatInfo: substruct`
    - `iRewardCount: i32 @0x178 (max 40)`
    - `astRewardInfoList: array (FUN_10296b50)`
    - `iSizeChangeNtfCnt: i32 @0x2169c (max 10)`
    - `astSizeChangeInfoList: array (FUN_10297b60)`

### TdrDebugFormat_InfoList10 `@0x1029c690` — unknown
*DebugFormat dumper: [nInfoCount]=i16@0 (max 10), [astInfos] array via FUN_1029c280.* (server: None - debug logging only., conf high)
- fields:
    - `nInfoCount: i16 @0x0 (max 10)`
    - `astInfos: array (FUN_1029c280)`

### TdrDebugFormat_InteractRequest `@0x102bd900` — unknown
*DebugFormat dumper: [iRequestType]=i32@0, [stRequest] union dispatched by iRequestType via FUN_102bd5d0.* (server: None - debug logging only., conf high)
- fields:
    - `iRequestType: i32 @0x0`
    - `stRequest: union (FUN_102bd5d0)`

### TdrDebugFormat_InteractRequestWrap `@0x102bec20` — unknown
*DebugFormat dumper: single [stInteractRequest] = InteractRequest (FUN_102bd900).* (server: None - debug logging only., conf high)
- fields:
    - `stInteractRequest: InteractRequest`

### TdrDebugFormat_InteractResult `@0x102bdca0` — unknown
*DebugFormat dumper: [stRequest] = InteractRequest (FUN_102bd900), [iResultCode]=i32@0x10.* (server: None - debug logging only., conf high)
- fields:
    - `stRequest: InteractRequest`
    - `iResultCode: i32 @0x10`

### TdrDebugFormat_ItemList40 `@0x10294910` — unknown
*DebugFormat dumper: [nInfoCount]=i16@0 (max 0x28), [astItems] array via FUN_10294550.* (server: None - debug logging only., conf high)
- fields:
    - `nInfoCount: i16 @0x0 (max 40)`
    - `astItems: array (FUN_10294550)`

### TdrDebugFormat_JoinMember `@0x1028fd70` — unknown
*DebugFormat dumper: single [stJoinMem] sub-struct via FUN_1028f560.* (server: None - debug logging only., conf high)
- fields:
    - `stJoinMem: substruct (FUN_1028f560)`

### TdrDebugFormat_LineInfoList `@0x1027d9e0` — unknown
*DebugFormat dumper: [wLineCount]=u16@0 (max 0xf), [astLineInfo] array via FUN_1027d650.* (server: None - debug logging only., conf high)
- fields:
    - `wLineCount: u16 @0x0 (max 15)`
    - `astLineInfo: array (FUN_1027d650)`

### TdrDebugFormat_LotteryBoxState `@0x102c5cd0` — unknown
*DebugFormat dumper for a lottery box: [iStatus]@0, [iBoxId]@4, [iVipRefreshCount]@8, [iRefreshCount]@0xc, [astLotteryItemList] fixed 8 (FUN_102c58d0), [iIsVipRefresh]@0x70.* (server: None - debug logging only., conf medium)
- TLV: TlvLotteryBoxItemPool, TlvSearchItemPool
- fields:
    - `iStatus: i32 @0x0`
    - `iBoxId: i32 @0x4`
    - `iVipRefreshCount: i32 @0x8`
    - `iRefreshCount: i32 @0xc`
    - `astLotteryItemList: element[8] (FUN_102c58d0)`
    - `iIsVipRefresh: i32 @0x70`

### TdrDebugFormat_LotteryPool_ItemsThenBox `@0x102c70a0` — unknown
*DebugFormat dumper: [astLotteryItemList] fixed 8 elements (FUN_102c58d0) then [iBoxId]=i32@0x60.* (server: None - debug logging only., conf medium)
- TLV: TlvSearchItemPool, TlvLotteryBoxItemPool
- fields:
    - `astLotteryItemList: element[8] (FUN_102c58d0)`
    - `iBoxId: i32 @0x60`

### TdrDebugFormat_LotteryPool_Research `@0x102c74e0` — unknown
*DebugFormat dumper: [iBoxId]@0, [astLotteryItemList] fixed 8 (FUN_102c58d0), [iVipRefrshCount]@0x64, [iRefreshCount]@0x68, [iResearchCount]@0x6c.* (server: None - debug logging only., conf medium)
- TLV: TlvSearchItemPool, TlvLotteryBoxItemPool
- fields:
    - `iBoxId: i32 @0x0`
    - `astLotteryItemList: element[8] (FUN_102c58d0)`
    - `iVipRefrshCount: i32 @0x64`
    - `iRefreshCount: i32 @0x68`
    - `iResearchCount: i32 @0x6c`

### TdrDebugFormat_MaterialList `@0x10272b80` — unknown
*DebugFormat dumper: [bMaterialNum]=u8@0 (max 100), [astMaterialList] array, each element via FUN_10272760.* (server: None - debug logging only., conf high)
- fields:
    - `bMaterialNum: u8 @0x0 (max 100)`
    - `astMaterialList: array (FUN_10272760)`

### TdrDebugFormat_MemberList `@0x1028f9a0` — unknown
*DebugFormat dumper: [iShowUI]=i32@0, [nInfoCount]=i16@4 (max 0x14), [astMember] array via FUN_1028f560.* (server: None - debug logging only., conf high)
- fields:
    - `iShowUI: i32 @0x0`
    - `nInfoCount: i16 @0x4 (max 20)`
    - `astMember: array (FUN_1028f560)`

### TdrDebugFormat_MoveLinear `@0x10281be0` — unknown
*DebugFormat dumper for a linear-move struct: [stTargetPos] vec3, [stStartPos] vec3, [fSpeed]=float@0x18, [nTeleport]=i16@0x1c.* (server: None - debug logging only., conf high)
- fields:
    - `stTargetPos: vec3`
    - `stStartPos: vec3`
    - `fSpeed: float @0x18`
    - `nTeleport: i16 @0x1c`

### TdrDebugFormat_MoveRotate `@0x10282070` — unknown
*DebugFormat dumper for a rotate-move struct: [stAxis] vec3, [fRotateAngle]=float@0xc, [fSpeed]=float@0x10, [fAcceleration]=float@0x14.* (server: None - debug logging only., conf high)
- fields:
    - `stAxis: vec3`
    - `fRotateAngle: float @0xc`
    - `fSpeed: float @0x10`
    - `fAcceleration: float @0x14`

### TdrDebugFormat_OpResult `@0x1029f0a0` — unknown
*DebugFormat dumper for an operation-result struct: [stOp](FUN_1029eb30), [iResult]@0x114, [iResultParam1..4]@0x118,0x11c,0x120,0x124, [szResultParamStr] string@0x128.* (server: None - debug logging only., conf high)
- fields:
    - `stOp: substruct`
    - `iResult: i32 @0x114`
    - `iResultParam1: i32 @0x118`
    - `iResultParam2: i32 @0x11c`
    - `iResultParam3: i32 @0x120`
    - `iResultParam4: i32 @0x124`
    - `szResultParamStr: str @0x128`

### TdrDebugFormat_PassLevelInfo `@0x102ab7d0` — unknown
*DebugFormat dumper: single [stPassLevelInfo] sub-struct via FUN_102ab4d0.* (server: None - debug logging only., conf high)
- fields:
    - `stPassLevelInfo: substruct (FUN_102ab4d0)`

### TdrDebugFormat_PlayerLevelData `@0x102c1f10` — unknown
*Very large DebugFormat dumper for player level/entrust data. Fields in order: [iEntrustMoneyLastTm]@0, [iUnLockLevelCount]@4 (max 5000) + [astUnLockLevelData] each {[iLevelID] i32}, [iUnlockHubCnt]@0x138a*4 (max 0x80)+[astUnlockHubData](FUN_102ba4d0), [iHubRewardCnt]@0x148b*4 (max 0x80)+[astHubRewardData](FUN_102c1030), [iLevelIntegrateCount]@0x152c*4 (max 5000)+[astLevelIntegrateData](FUN_102bafa0), [iLevelEntrustCount]@0x7bb7*4 (max 1)+[stLevelEntrustData](FUN_102bbe00), [iPlayerLevelEnstrustRewardCount]@0x7bbb*4 (max 0xaa)+[astPlayerLevelEnstrustRewardData](FUN_102b9ba0), [stPlayerLevelFormatPeriodLimitData](FUN_102c04e0), [iPlayerThousandLayerDataCount]@0x1f24e (max 0x46)+[astPlayerThousandLayerData](FUN_102c08a0), [iLevelStatLen]@0x1f50e (max 0x5000)+[szLevelStatDataPack] byte-blob@0x1f512, [iEntrustGroupDataLen]@0x24512 (max 0x5000)+[szEntrustGroupDataPack]@0x24516, [iLevelWarningLen]@0x29516 (max 200)+[szLevelWarningDataPack]@0x2951a, [iMonsterSizeCnt]@0x295e2 (max 0x200)+[astCSMonsterSizeList](FUN_102c0c40), [iUnLockLevelGroupCount]@0x2bde6 (max 0x40)+[astUnLockLevelGroupData](FUN_102ba180), [iUnlockStarLevelCnt]@0x2beea (max 0x40)+[astUnlockHubStarData](FUN_102ba840), [stPlayerSuperHunterData](FUN_102babc0).* (server: None directly (debug), but this is the authoritative field map for the large player-level persistence/notify blob the server must build., conf high)
- fields:
    - `iEntrustMoneyLastTm: i32 @0x0`
    - `iUnLockLevelCount: i32 @0x4 (max 5000)`
    - `astUnLockLevelData: array of {iLevelID i32} stride 4 @0x8`
    - `iUnlockHubCnt: i32 @0x4e28 (max 128)`
    - `iHubRewardCnt: i32 @0x522c (max 128)`
    - `iLevelIntegrateCount: i32 @0x54b0 (max 5000)`
    - `iLevelEntrustCount: i32 @0x1eedc (max 1)`
    - `iPlayerLevelEnstrustRewardCount: i32 @0x1eeec (max 170)`
    - `iPlayerThousandLayerDataCount: i32 @0x1f24e (max 70)`
    - `iLevelStatLen: i32 @0x1f50e; szLevelStatDataPack: bytes @0x1f512 (max 0x5000)`
    - `iEntrustGroupDataLen: i32 @0x24512; szEntrustGroupDataPack: bytes @0x24516 (max 0x5000)`
    - `iLevelWarningLen: i32 @0x29516; szLevelWarningDataPack: bytes @0x2951a (max 200)`
    - `iMonsterSizeCnt: i32 @0x295e2 (max 512); astCSMonsterSizeList (FUN_102c0c40)`
    - `iUnLockLevelGroupCount: i32 @0x2bde6 (max 64); astUnLockLevelGroupData (FUN_102ba180)`
    - `iUnlockStarLevelCnt: i32 @0x2beea (max 64); astUnlockHubStarData (FUN_102ba840)`
    - `stPlayerSuperHunterData: substruct (FUN_102babc0)`

### TdrDebugFormat_RebuildLimitData `@0x102c3c90` — unknown
*DebugFormat dumper: [ullLastRebuildTm]=u64@0 (%I64u), [bRebuildLimitDataCnt]=u8@8 (max 0x1e), [astRebuildLimitDataInfo] array via FUN_102c38a0.* (server: None - debug logging only., conf high)
- fields:
    - `ullLastRebuildTm: u64 @0x0`
    - `bRebuildLimitDataCnt: u8 @0x8 (max 30)`
    - `astRebuildLimitDataInfo: array (FUN_102c38a0)`

### TdrDebugFormat_RoleList `@0x102793a0` — unknown
*DebugFormat dumper: [nCount]=i16@0 (max 6), [astRole] array via FUN_10278ae0.* (server: None - debug logging only., conf high)
- fields:
    - `nCount: i16 @0x0 (max 6)`
    - `astRole: array (FUN_10278ae0)`

### TdrDebugFormat_SubGroupList_ByErrCode `@0x102aa940` — unknown
*DebugFormat dumper: [iErrCode]=i32@0, [nSubGroupCount]=i16@4 (max 99), [astSubGroupInfos] array via FUN_102a9ce0.* (server: None - debug logging only., conf high)
- fields:
    - `iErrCode: i32 @0x0`
    - `nSubGroupCount: i16 @0x4 (max 99)`
    - `astSubGroupInfos: array (FUN_102a9ce0)`

### TdrDebugFormat_SubGroupList_ByGroupId `@0x102aa170` — unknown
*DebugFormat dumper: [iGroupID]=i32@0, [nSubGroupCount]=i16@4 (max 99), [astSubGroupInfos] array via FUN_102a9ce0.* (server: None - debug logging only., conf high)
- fields:
    - `iGroupID: i32 @0x0`
    - `nSubGroupCount: i16 @0x4 (max 99)`
    - `astSubGroupInfos: array (FUN_102a9ce0)`

### TdrDebugFormat_TargetInfoList `@0x10291b20` — unknown
*DebugFormat dumper: [nInfoCount]=i16@0 (max 100), [astTargetInfos] array via FUN_10291730.* (server: None - debug logging only., conf high)
- fields:
    - `nInfoCount: i16 @0x0 (max 100)`
    - `astTargetInfos: array (FUN_10291730)`

### TdrDebugFormat_TargetPosOnly `@0x102824a0` — unknown
*DebugFormat dumper: single [stTargetPos] vec3 sub-struct (FUN_102713d0).* (server: None - debug logging only., conf high)
- fields:
    - `stTargetPos: vec3`

### TdrDebugFormat_TypedItemData `@0x102963d0` — unknown
*DebugFormat dumper: [iItemType]=i32@0, [stItemData] sub-struct via FUN_102741f0.* (server: None - debug logging only., conf high)
- fields:
    - `iItemType: i32 @0x0`
    - `stItemData: substruct (FUN_102741f0)`

### TdrDebugFormat_TypedValue `@0x10283dd0` — unknown
*DebugFormat dumper for a tagged value: [wType]=u16@0, [stValue] union body dispatched by wType via FUN_10283a20.* (server: None - debug logging only., conf high)
- fields:
    - `wType: u16 @0x0`
    - `stValue: union (FUN_10283a20)`

### TdrDebugFormat_UIInfoList `@0x10292e30` — unknown
*DebugFormat dumper: [nInfoCount]=i16@0 (max 100), [astUIInfos] array via FUN_10292a40.* (server: None - debug logging only., conf high)
- fields:
    - `nInfoCount: i16 @0x0 (max 100)`
    - `astUIInfos: array (FUN_10292a40)`

### TdrDebugFormat_Union_BaseOrBonus `@0x10284dc0` — unknown
*DebugFormat union dumper: selector==1 -> [stBase] via FUN_10283dd0 (TypedValue); selector==2 -> [stBonus] via FUN_102849a0 (u32[7]).* (server: None - debug logging only., conf high)
- fields:
    - `case1 stBase: TypedValue`
    - `case2 stBonus: u32[7]`

### TdrDebugFormat_Union_GuideNotifyOrClientSettings `@0x102bf230` — unknown
*DebugFormat union dumper: selector==3 -> [stGuideNotify] (FUN_102bcb60); selector==4 -> [stClientSettings] (FUN_102be3d0).* (server: None - debug logging only., conf high)
- fields:
    - `case3 stGuideNotify: substruct`
    - `case4 stClientSettings: substruct`

### TdrDebugFormat_Union_InteractReqBeginEnd `@0x102bd5d0` — unknown
*DebugFormat union dumper: selector==1 -> [stInteractRequestBegin] (FUN_102bcf40); selector==2 -> [stInteractRequestEnd] with [iTargetID].* (server: None - debug logging only., conf high)
- fields:
    - `case1 stInteractRequestBegin: substruct`
    - `case2 stInteractRequestEnd.iTargetID: i32 @0x0`

### TdrDebugFormat_VarsList16 `@0x10273da0` — unknown
*DebugFormat dumper: [nCount]=i16@0 (max 0x10, must be >=0), [astVars] array via FUN_10273930.* (server: None - debug logging only., conf high)
- fields:
    - `nCount: i16 @0x0 (max 16)`
    - `astVars: array (FUN_10273930)`

### TdrDebugFormat_VarsList32 `@0x102772d0` — unknown
*DebugFormat dumper: [iCount]=i32@0 (max 0x20, >=0), [astVars] array via FUN_10276ea0.* (server: None - debug logging only., conf high)
- fields:
    - `iCount: i32 @0x0 (max 32)`
    - `astVars: array (FUN_10276ea0)`

### TdrDebugFormat_WeaponRecord `@0x1028de90` — unknown
*DebugFormat dumper for WeaponRecord: [weaponRecord] fixed u32[20] (index 0..0x13), then [weaponRecordTime] fixed u32[20] @0x50.* (server: None - debug logging only; confirms 20-element array layout., conf high)
- TLV: TlvWeaponRecord
- fields:
    - `weaponRecord: u32[20] @0x0`
    - `weaponRecordTime: u32[20] @0x50`
- ⚠ discrepancy: Confirms discrepancy: doc treats weaponRecord as int32 scalar but it is u32[20]; second array weaponRecordTime[20] missing from doc.

### TdrDebugFormat_WeaponStyleData `@0x1028e5e0` — unknown
*DebugFormat dumper for WeaponStyleData: [weaponStyleData] fixed u32[20] (index 0..0x13).* (server: None - debug logging only., conf high)
- TLV: TlvWeaponStyleData
- fields:
    - `weaponStyleData: u32[20] @0x0`
- ⚠ discrepancy: TlvWeaponStyleData.md describes weaponStyleData (field_id 1) as scalar int32; it is actually a fixed array of 20 u32.

### TdrDump_ApplyList_iCount_astApplys `@1033bce0` — both
*TDR text dumper: [iCount] i32@0 (max 0x80=128), [astApplys] via FUN_1033b850.* (server: Debug-only dumper; guild join-application list (cap 128)., conf high)
- TLV: ApplyList (iCount/astApplys)
- fields:
    - `iCount: i32 @0 (max 128)`
    - `astApplys[] via FUN_1033b850`

### TdrDump_CommerceBoatMaterials_dwBoatId_bMaterialNum_astMaterialList `@103568f0` — both
*TDR text dumper: [dwBoatId] u32@0, [bMaterialNum] u8@4 (max 100), [astMaterialList] via FUN_10272760.* (server: Debug-only dumper; documents commerce-boat material list (cap 100)., conf high)
- TLV: CommerceBoatMaterials (dwBoatId/bMaterialNum/astMaterialList)
- fields:
    - `dwBoatId: u32 @0`
    - `bMaterialNum: u8 @4 (max 100)`
    - `astMaterialList[] via FUN_10272760`

### TdrDump_CommerceBuff_iBuffCount_astCommerceBuffInfo_dwHistory `@1035bf90` — S2C
*TDR text dumper: [iBuffCount] i32@0 (max 5), [astCommerceBuffInfo] via FUN_10340ba0, [dwHistory] u32@0x40. Matches TlvGuildCommerceData (buff list + history).* (server: Debug-only dumper, but documents the guild commerce data struct field order., conf high)
- TLV: TlvGuildCommerceData
- fields:
    - `iBuffCount: i32 @0 (max 5)`
    - `astCommerceBuffInfo[]: TlvCommerceTimeout[] via FUN_10340ba0`
    - `dwHistory: u32 @0x40 (param_1[0x10])`
- ⚠ discrepancy: Field ORDER differs: this dumper prints iBuffCount THEN astCommerceBuffInfo THEN dwHistory(=history), whereas TlvGuildCommerceData.cs writes GuildWarHistoryInfo(field4) BEFORE BuffCount(field5)+CommerceBuffInfo. The dumper prints history LAST. TDR field-id order (4=history,5=count) in C# vs print order suggests the printer emits history after the array; verify field-id assignment (dwHistory may actually be a distinct field, not the same as GuildWarHistoryInfo).

### TdrDump_DelGridList_wReason_bDelGridCnt_astDelGridList `@10329620` — both
*TDR text dumper: [wReason] u16@0, [bDelGridCnt] u8@2 (max 50), [astDelGridList] array via FUN_10329240. Documents a grid-deletion result struct.* (server: Debug-only dumper; documents field names for a depot/bag grid-delete result the server produces., conf high)
- TLV: DelGridList (wReason/bDelGridCnt/astDelGridList)
- fields:
    - `wReason: u16 @0`
    - `bDelGridCnt: u8 @2 (max 50)`
    - `astDelGridList[]: struct[] via FUN_10329240`

### TdrDump_DepotRightsList_iCount_astDepotsRights `@1033f350` — both
*TDR text dumper: [iCount] i32@0 (max 8), [astDepotsRights] via FUN_1033ef60.* (server: Debug-only dumper; guild depot access-rights list (cap 8)., conf high)
- TLV: DepotRightsList (iCount/astDepotsRights)
- fields:
    - `iCount: i32 @0 (max 8)`
    - `astDepotsRights[] via FUN_1033ef60`

### TdrDump_EquipParamList_iEquipCnt_astEquipParamList `@1032c6d0` — both
*TDR text dumper: [iEquipCnt] i32@0 (max 0x28=40), [astEquipParamList] via FUN_1032c2c0. Documents an equipment-parameter list struct.* (server: Debug-only dumper; documents equip param list (cap 40) exchanged with server., conf high)
- TLV: EquipParamList (iEquipCnt/astEquipParamList)
- fields:
    - `iEquipCnt: i32 @0 (max 40, rejects <0)`
    - `astEquipParamList[] via FUN_1032c2c0`

### TdrDump_EquipPlanWrapper_iReNameFlag_stPlanInfo `@10330a20` — both
*TDR text dumper wrapper: [iReNameFlag] i32@0, then nested [stPlanInfo] via FUN_1032ff70 (the EquipPlan dumper).* (server: Debug-only wrapper around EquipPlan., conf high)
- TLV: EquipPlan
- fields:
    - `iReNameFlag: i32 @0`
    - `stPlanInfo: struct via FUN_1032ff70`

### TdrDump_EquipPlan_iPlanId_szPlanName_astEquipList `@1032ff70` — both
*TDR text dumper for an equipment plan: [iPlanId] i32@0, [iReNameFlag] i32@4, [szPlanName] string@8, [iEquipCnt] i32@0x1c, [astEquipList] array (max 0x1d=29) via FUN_1032f9d0.* (server: Debug-only dumper; documents equipment-plan struct (save/load loadout). Server stores/returns this; array cap 29., conf high)
- TLV: EquipPlan (iPlanId/iReNameFlag/szPlanName/astEquipList)
- fields:
    - `iPlanId: i32 @0`
    - `iReNameFlag: i32 @4`
    - `szPlanName: string @8`
    - `iEquipCnt: i32 @0x1c`
    - `astEquipList[] via FUN_1032f9d0 (max 29)`
- ⚠ discrepancy: No generated TLV doc/C# contains szPlanName/iPlanId/astEquipList; this EquipPlan struct appears MISSING from the auto-generated set.

### TdrDump_ExecList_bCount_astExec `@1035fcb0` — both
*TDR text dumper: [bCount] u8@0 (max 64), [astExec] via FUN_1035f890.* (server: Debug-only dumper; documents exec/command list (cap 64)., conf high)
- TLV: ExecList
- fields:
    - `bCount: u8 @0 (max 64)`
    - `astExec[] via FUN_1035f890`

### TdrDump_GuildFuncRecordList_iCount_astInfos `@1035d5e0` — S2C
*TDR text dumper: [iCount] i32@0, [astGuildFuncRecordInfos] via FUN_1035cfd0 (loop caps at 499).* (server: Debug-only dumper; guild function record log (cap 500)., conf high)
- TLV: GuildFuncRecordInfoList
- fields:
    - `iCount: i32 @0`
    - `astGuildFuncRecordInfos[] via FUN_1035cfd0 (loop max 499)`

### TdrDump_GuildFuncRecordList_iCount_astInfos_b `@1035dec0` — S2C
*TDR text dumper duplicate of FUN_1035d5e0.* (server: Debug-only., conf high)
- TLV: GuildFuncRecordInfoList
- fields:
    - `iCount: i32 @0`
    - `astGuildFuncRecordInfos[] via FUN_1035cfd0 (loop max 499)`

### TdrDump_GuildList_iCount_astGuilds `@1033b190` — both
*TDR text dumper: [iCount] i32@0 (max 0x10=16), [astGuilds] via FUN_1033ac40.* (server: Debug-only dumper; documents guild-search result list (cap 16)., conf high)
- TLV: GuildList (iCount/astGuilds)
- fields:
    - `iCount: i32 @0 (max 16)`
    - `astGuilds[] via FUN_1033ac40`

### TdrDump_GuildList_iCount_astGuilds_b `@1034df30` — both
*TDR text dumper duplicate of FUN_1033b190: [iCount] i32 (max 16), [astGuilds] via FUN_1033ac40.* (server: Debug-only dumper; guild list (cap 16)., conf high)
- TLV: GuildList
- fields:
    - `iCount: i32 @0 (max 16)`
    - `astGuilds[] via FUN_1033ac40`

### TdrDump_GuildSimpleInfoList_wStart_wInnerStart_wCount_astInfos `@1035b7e0` — S2C
*TDR text dumper: [wStart] u16@0, [wInnerStart] u16@2, [wCount] u16@4 (max 100), [astGuildSimpleInfos] via FUN_1035b3e0. Paginated guild list.* (server: Debug-only dumper; documents paginated guild-search response (cap 100)., conf high)
- TLV: GuildSimpleInfoList (wStart/wInnerStart/wCount/astGuildSimpleInfos)
- fields:
    - `wStart: u16 @0`
    - `wInnerStart: u16 @2`
    - `wCount: u16 @4 (max 100)`
    - `astGuildSimpleInfos[] via FUN_1035b3e0`

### TdrDump_GuildWarBoatStatusList_wCount_astList `@10358410` — S2C
*TDR text dumper: [wCount] u16@0 (max 0x32=50), [astGuildWarBoatStatusList] via FUN_103573b0.* (server: Debug-only dumper; guild-war boat status list (cap 50)., conf high)
- TLV: GuildWarBoatStatusList
- fields:
    - `wCount: u16 @0 (max 50)`
    - `astGuildWarBoatStatusList[] via FUN_103573b0`

### TdrDump_GuildWarBoatStatus_dwErrCode_stInfo_chMode `@10357fa0` — S2C
*TDR text dumper: [dwErrCode] u32@0, [stGuildWarBoatStatusInfo] via FUN_103573b0, [chMode] i8@0x108(char). Guild-war boat status response.* (server: Debug-only dumper; documents guild-war boat status response., conf high)
- TLV: GuildWarBoatStatusInfo
- fields:
    - `dwErrCode: u32 @0`
    - `stGuildWarBoatStatusInfo: struct via FUN_103573b0`
    - `chMode: i8 @0x108 (param_1+0x42 as int*)`

### TdrDump_GuildWarCommerce_dwErrCode_wCount_astList_ullGuildId_dwCommerceId `@10356450` — S2C
*TDR text dumper: [dwErrCode] u32@0, [wCount] u16@4 (max 10), [astGuildWarCommerceInfoList] via FUN_10355f80, [ullGuildId] u64@0x222, [dwCommerceId] u32@0x22a.* (server: Debug-only dumper; documents guild-war commerce info response (cap 10) the server sends., conf high)
- TLV: GuildWarCommerceInfoList
- fields:
    - `dwErrCode: u32 @0`
    - `wCount: u16 @4 (max 10)`
    - `astGuildWarCommerceInfoList[] via FUN_10355f80`
    - `ullGuildId: u64 @0x222`
    - `dwCommerceId: u32 @0x22a`

### TdrDump_GuilderList_iCount_astGuilders `@1033eb90` — S2C
*TDR text dumper: [iCount] i32@0 (max 0x140=320), [astGuilders] via FUN_1033e300 (guild-member dumper).* (server: Debug-only dumper; documents guild roster list (cap 320 members)., conf high)
- TLV: GuilderList / guild member roster
- fields:
    - `iCount: i32 @0 (max 320)`
    - `astGuilders[] via FUN_1033e300`

### TdrDump_Guilder_MemberData `@1033e300` — S2C
*TDR text dumper for a guild-member/guilder record with 24 fields: [stId] via FUN_102a3f50, szNote@0x38, iLevel@0x138, szHunterStar@0x13c, bIsOnline@0x1bc(u8), iContribution@0x1bd, ullContributionAcc@0x1c1(u64,%I64u), iWage@0x1c9, iTitle@0x1cd, dwOfflineTime@0x1d1, iDepotOpCount@0x1d5, iHRLevel@0x1d9, dwJoinTime@0x1dd, dwCelebrationScore@0x1e1, dwCelebrationTask@0x1e5, dwPreCelebrationTask@0x1e9, dwCelebrationRewardType@0x1ed, iContributionWeekAcc@0x1f1(i32), iLevelupAll@0x1f5, iHunterCount@0x1f9, iTaskCount@0x1fd, iIsBaned@0x201, iBanedTime@0x205, stGuildWar via FUN_1033d840.* (server: Debug-only dumper, but authoritative for the guild-member wire field order/types the server sends. Important: reveals field layout., conf high)
- TLV: TlvGuildMemberData
- fields:
    - `stId: struct @0 via FUN_102a3f50`
    - `szNote: string @0x38`
    - `iLevel: i32 @0x138`
    - `szHunterStar: string @0x13c`
    - `bIsOnline: u8 @0x1bc`
    - `iContribution: i32 @0x1bd`
    - `ullContributionAcc: u64 @0x1c1`
    - `iWage: i32 @0x1c9`
    - `iTitle: i32 @0x1cd`
    - `dwOfflineTime: u32 @0x1d1`
    - `iDepotOpCount: i32 @0x1d5`
    - `iHRLevel: i32 @0x1d9`
    - `dwJoinTime: u32 @0x1dd`
    - `dwCelebrationScore: u32 @0x1e1`
    - `dwCelebrationTask: u32 @0x1e5`
    - `dwPreCelebrationTask: u32 @0x1e9`
    - `dwCelebrationRewardType: u32 @0x1ed`
    - `iContributionWeekAcc: i32 @0x1f1`
    - `iLevelupAll: i32 @0x1f5`
    - `iHunterCount: i32 @0x1f9`
    - `iTaskCount: i32 @0x1fd`
    - `iIsBaned: i32 @0x201`
    - `iBanedTime: i32 @0x205`
    - `stGuildWar: struct via FUN_1033d840`
- ⚠ discrepancy: Generated TlvGuildMemberData.cs DIFFERS from this dumper: (1) C# has NO bIsOnline field (decompiled field 5); (2) C# includes WildHuntSoul/WildHuntPhase (fields 13-14) which this dumper does NOT show; (3) celebration ordering differs (C# CelebrationTask/PreCelebrationTask/CelebrationScore/CelebrationReward vs decompiled CelebrationScore/CelebrationTask/PreCelebrationTask/CelebrationRewardType); (4) C# ContributionWeekAcc is 'long' but dumper prints iContributionWeekAcc with %d (i32). FUN_1033e300 (client crygame.dll) is authoritative and likely a different/newer guilder layout than the auto-generated TlvGuildMemberData (whose printer was sub_10121D40, a different function). Reconcile before use.

### TdrDump_HissList_iCount_astHiss `@1037e6b0` — both
*TDR text dumper: [iCount] i32@0 (max 300), [astHiss] via FUN_1037e220.* (server: Debug-only dumper; a list (cap 300) - 'Hiss' likely history/records set., conf high)
- TLV: HissList (iCount/astHiss)
- fields:
    - `iCount: i32 @0 (max 300)`
    - `astHiss[] via FUN_1037e220`

### TdrDump_InformationList_iCount_astInformations `@1035e670` — both
*TDR text dumper: [iCount] i32@0 (max 10), [astInformations] via FUN_1035e290.* (server: Debug-only dumper; information/notice list (cap 10)., conf high)
- TLV: InformationList (iCount/astInformations)
- fields:
    - `iCount: i32 @0 (max 10)`
    - `astInformations[] via FUN_1035e290`

### TdrDump_InvitationList_iCount_astInvitations `@1033c680` — both
*TDR text dumper: [iCount] i32@0 (max 0x10=16), [astInvitations] via FUN_1033c260.* (server: Debug-only dumper; guild invitation list (cap 16)., conf high)
- TLV: InvitationList (iCount/astInvitations)
- fields:
    - `iCount: i32 @0 (max 16)`
    - `astInvitations[] via FUN_1033c260`

### TdrDump_ItemList_bItemCount_wReason_astItemList `@10328950` — both
*TDR text/debug dumper (ToString) printing fields [bItemCount] u8, [wReason] u16, [astItemList] array (max 50) via element dumper FUN_103284f0. Reveals struct field names for the item-result list.* (server: Debug-only; server does NOT need this dumper, but it documents the wire struct field names/order., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8 (0x%02x)`
    - `wReason: u16`
    - `astItemList[]: struct[] via FUN_103284f0 (max 50)`

### TdrDump_ItemList_bItemCount_wReason_astItemList_b `@10328e00` — both
*Text dumper duplicate of FUN_10328950.* (server: Debug-only., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8`
    - `wReason: u16`
    - `astItemList[] max 50`

### TdrDump_ItemList_bItemCount_wReason_astItemList_c `@10352cd0` — both
*Text dumper duplicate of FUN_10328950.* (server: Debug-only., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8`
    - `wReason: u16`
    - `astItemList[] max 50`

### TdrDump_ItemList_bItemCount_wReason_astItemList_d `@10353180` — both
*Text dumper duplicate of FUN_10328950.* (server: Debug-only., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8`
    - `wReason: u16`
    - `astItemList[] max 50`

### TdrDump_ItemMoveOp_bOpType_stSrc_stDst `@1034b060` — C2S
*TDR text dumper: [bOpType] u8, [stSrcItemLoc] via FUN_1034ac50, [stDstItemLoc] via FUN_1034ac50. Documents an item move/swap operation.* (server: Debug-only dumper; documents C2S item-move request the server must validate., conf high)
- TLV: ItemMoveOp
- fields:
    - `bOpType: u8`
    - `stSrcItemLoc: struct via FUN_1034ac50`
    - `stDstItemLoc: struct via FUN_1034ac50`

### TdrDump_MoveSwapItems_bCnt_astData `@1032a660` — C2S
*TDR text dumper: [bMoveSwapItemsCnt] u8 (max 10), [astMoveSwapItemsData] via FUN_1032a200. Documents item move/swap request struct.* (server: Debug-only dumper; documents a C2S bag move/swap request struct (server must validate cap 10)., conf high)
- TLV: MoveSwapItems
- fields:
    - `bMoveSwapItemsCnt: u8 (max 10)`
    - `astMoveSwapItemsData[] via FUN_1032a200`

### TdrDump_MoveSwapItems_bCnt_astData_b `@1032aab0` — C2S
*Text dumper duplicate of FUN_1032a660.* (server: Debug-only., conf high)
- TLV: MoveSwapItems
- fields:
    - `bMoveSwapItemsCnt: u8 (max 10)`
    - `astMoveSwapItemsData[] via FUN_1032a200`

### TdrDump_NetExec_iNetId_stExec `@10361980` — both
*TDR text dumper: [iNetId] i32@0, [stExec] via FUN_1035fcb0.* (server: Debug-only dumper; documents a net-id-tagged exec list., conf high)
- TLV: NetExec (iNetId/stExec)
- fields:
    - `iNetId: i32 @0`
    - `stExec: struct via FUN_1035fcb0`

### TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords `@10371b60` — S2C
*TDR text dumper: [iRet] i32@0, [dwRecordAllCount] u32@4, [wRecordCount] u16@8 (max 400), [astRecords] via FUN_103709a0.* (server: Debug-only dumper; paginated record list response (cap 400) e.g. logs/auction records., conf high)
- TLV: RecordList (iRet/dwRecordAllCount/wRecordCount/astRecords)
- fields:
    - `iRet: i32 @0`
    - `dwRecordAllCount: u32 @4`
    - `wRecordCount: u16 @8 (max 400)`
    - `astRecords[] via FUN_103709a0`

### TdrDump_RecordList_iRet_dwRecordAllCount_wRecordCount_astRecords_b `@10372390` — S2C
*TDR text dumper duplicate of FUN_10371b60.* (server: Debug-only., conf high)
- TLV: RecordList
- fields:
    - `iRet: i32 @0`
    - `dwRecordAllCount: u32 @4`
    - `wRecordCount: u16 @8 (max 400)`
    - `astRecords[] via FUN_103709a0`

### TdrDump_RecordList_iRet_iFin_wRecordCount_astRecords `@10374780` — S2C
*TDR text dumper: [iRet] i32@0, [iFin] i32@4, [wRecordCount] u16@8 (max 400), [astRecords] via FUN_10374240.* (server: Debug-only dumper; record list with finished-flag (cap 400)., conf high)
- TLV: RecordList (iRet/iFin/wRecordCount/astRecords)
- fields:
    - `iRet: i32 @0`
    - `iFin: i32 @4`
    - `wRecordCount: u16 @8 (max 400)`
    - `astRecords[] via FUN_10374240`

### TdrDump_RecordList_iRet_wRecordCount_astRecords `@10374f70` — S2C
*TDR text dumper: [iRet] i32@0, [wRecordCount] u16@4 (max 400), [astRecords] via FUN_10374240.* (server: Debug-only dumper; record list (cap 400)., conf high)
- TLV: RecordList (iRet/wRecordCount/astRecords)
- fields:
    - `iRet: i32 @0`
    - `wRecordCount: u16 @4 (max 400)`
    - `astRecords[] via FUN_10374240`

### TdrDump_RecordList_iRet_wRecordCount_astRecords_b `@10375740` — S2C
*TDR text dumper duplicate of FUN_10374f70.* (server: Debug-only., conf high)
- TLV: RecordList
- fields:
    - `iRet: i32 @0`
    - `wRecordCount: u16 @4 (max 400)`
    - `astRecords[] via FUN_10374240`

### TdrDump_RecordList_iRet_wRecordCount_astRecords_c `@10375f10` — S2C
*TDR text dumper duplicate of FUN_10374f70.* (server: Debug-only., conf high)
- TLV: RecordList
- fields:
    - `iRet: i32 @0`
    - `wRecordCount: u16 @4 (max 400)`
    - `astRecords[] via FUN_10374240`

### TdrDump_SculptureConfig_iCfgCount_astCfgs_iCount_astLibs `@10385af0` — S2C
*TDR text dumper: [iCfgCount] i32@0 (max 4), [astCfgs] via FUN_10382b80, then [iCount] i32@0x414 (param_1[0x105], max 4), [astLibs] via FUN_10385250.* (server: Debug-only dumper; sculpture config+library container (both caps 4)., conf high)
- TLV: SculptureConfig (iCfgCount/astCfgs/iCount/astLibs)
- fields:
    - `iCfgCount: i32 @0 (max 4)`
    - `astCfgs[] via FUN_10382b80`
    - `iCount: i32 @0x414 (param_1[0x105], max 4)`
    - `astLibs[] via FUN_10385250`

### TdrDump_SculptureData_iRound_astCurrent_stBest_astHistory `@103844a0` — S2C
*TDR text dumper for sculpture data: [iRound] i32@0, [iCurCount] i32@4 (max 5), [astCurrent] via FUN_10383b10, [stBest] via FUN_10383f70, [iHisCount] i32@0x148 (max 3), [astHistory] via FUN_10383f70. Matches TlvSculptureData.* (server: Debug-only dumper, but documents sculpture struct field order (round, current entries, best, histories)., conf high)
- TLV: TlvSculptureData
- fields:
    - `iRound: i32 @0`
    - `iCurCount: i32 @4 (max 5)`
    - `astCurrent[] via FUN_10383b10`
    - `stBest: TlvSculptureScoreEntry via FUN_10383f70`
    - `iHisCount: i32 @0x148 (param_1[0x52], max 3)`
    - `astHistory[] via FUN_10383f70 (via FUN_1024a230 elem)`
- ⚠ discrepancy: Print order differs from TlvSculptureData.cs field-id order: dumper shows Round, Current-list, Best, History-list — while C# declares Id(1),Round(2),Best(3),Histories(4),Currents(5),Avatar(6). This dumper appears to be an INNER container (currents+best+histories, no Id/Avatar), i.e. it likely corresponds to a different sub-struct (SculptureCurrentList/HistoryList combined) rather than the top-level TlvSculptureData. Caps: current=5, history=3. Verify which sub-struct this maps to.

### TdrDump_SculptureLib_iLib_iCount_astSculpture `@10385250` — both
*TDR text dumper: [iLib] i32@0, [iCount] i32@4 (max 10), [astSculpture] via FUN_10384da0.* (server: Debug-only dumper; sculpture-library list (cap 10). Matches TlvSculptureLibData doc., conf high)
- TLV: TlvSculptureLibData (iLib/iCount/astSculpture)
- fields:
    - `iLib: i32 @0`
    - `iCount: i32 @4 (max 10)`
    - `astSculpture[] via FUN_10384da0`

### TdrDump_SkillList_iCount_astSkills `@1033a4c0` — both
*TDR text dumper: [iCount] i32@0 (max 100), [astSkills] via FUN_1033a120.* (server: Debug-only dumper; documents skill list (cap 100)., conf high)
- TLV: SkillList (iCount/astSkills)
- fields:
    - `iCount: i32 @0 (max 100)`
    - `astSkills[] via FUN_1033a120`

### TdrDump_SlotListResult_iError_iSlotsCnt_astSlots `@103647e0` — S2C
*TDR text dumper: [iError] i32@0, [iSlotsCnt] i32@4 (max 8), [astSlots] via FUN_102c48b0.* (server: Debug-only dumper; documents a slot-list result response (cap 8). Note different element dumper (FUN_102c48b0) than FUN_10364360., conf high)
- TLV: SlotListResult (iError/iSlotsCnt/astSlots)
- fields:
    - `iError: i32 @0`
    - `iSlotsCnt: i32 @4 (max 8)`
    - `astSlots[] via FUN_102c48b0`

### TdrDump_SlotList_iSlotsCnt_astSlots `@10364360` — both
*TDR text dumper: [iSlotsCnt] i32@0 (max 8), [astSlots] via FUN_10363f70.* (server: Debug-only dumper; documents a slot list (cap 8)., conf high)
- TLV: SlotList (iSlotsCnt/astSlots)
- fields:
    - `iSlotsCnt: i32 @0 (max 8)`
    - `astSlots[] via FUN_10363f70`

### TdrDump_TitleList_iCount_astTitles `@1033fca0` — both
*TDR text dumper: [iCount] i32@0 (max 0x10=16), [astTitles] via FUN_1033f830.* (server: Debug-only dumper; title/rights list (cap 16). Reused by several wrappers as stTitles/stRights., conf high)
- TLV: TitleList (iCount/astTitles)
- fields:
    - `iCount: i32 @0 (max 16)`
    - `astTitles[] via FUN_1033f830`

### TdrDump_UserDataListResult_iResult_iUserCount_astUserDatas `@10381930` — S2C
*TDR text dumper: [iResult] i32@0, [iUserCount] i32@4 (max 0xf=15), [astUserDatas] via FUN_103814d0.* (server: Debug-only dumper; user-data list response (cap 15) e.g. team/party., conf high)
- TLV: UserDataListResult (iResult/iUserCount/astUserDatas)
- fields:
    - `iResult: i32 @0`
    - `iUserCount: i32 @4 (max 15)`
    - `astUserDatas[] via FUN_103814d0`

### TdrDump_UserDataList_iUserCount_astUserDatas `@103821d0` — both
*TDR text dumper: [iUserCount] i32@0 (max 15), [astUserDatas] via FUN_10381d80.* (server: Debug-only dumper; user-data list (cap 15). Note different element dumper (FUN_10381d80) than FUN_10381930., conf high)
- TLV: UserDataList (iUserCount/astUserDatas)
- fields:
    - `iUserCount: i32 @0 (max 15)`
    - `astUserDatas[] via FUN_10381d80`

### TdrDump_VersionedInfoList_dwVersion_iNum_astInfo `@1037a910` — both
*TDR text dumper: [dwVersion] u32@0, [iNum] i32@4 (max 100), [astInfo] via FUN_10379f40.* (server: Debug-only dumper; versioned info/config list (cap 100)., conf high)
- TLV: VersionedInfoList (dwVersion/iNum/astInfo)
- fields:
    - `dwVersion: u32 @0`
    - `iNum: i32 @4 (max 100)`
    - `astInfo[] via FUN_10379f40`

### TdrDump_Wrapper_stApplys `@1034e2b0` — both
*TDR text dumper wrapper: [stApplys] via FUN_1033bce0 (apply list).* (server: Debug-only., conf high)
- TLV: ApplyList
- fields:
    - `stApplys: struct via FUN_1033bce0`

### TdrDump_Wrapper_stCommodities `@10350640` — both
*TDR text dumper wrapper: [stCommodities] via FUN_103400b0.* (server: Debug-only., conf high)
- TLV: Commodities
- fields:
    - `stCommodities: struct via FUN_103400b0`

### TdrDump_Wrapper_stDaily `@103396b0` — both
*TDR text dumper wrapper: nested [stDaily] via FUN_103392a0.* (server: Debug-only., conf high)
- TLV: Daily (stDaily)
- fields:
    - `stDaily: struct via FUN_103392a0`

### TdrDump_Wrapper_stExec `@10360330` — both
*TDR text dumper wrapper: [stExec] via FUN_1035fcb0 (exec list).* (server: Debug-only., conf high)
- TLV: ExecList
- fields:
    - `stExec: struct via FUN_1035fcb0`

### TdrDump_Wrapper_stGuild `@1034e8f0` — both
*TDR text dumper wrapper: [stGuild] via FUN_10341cc0.* (server: Debug-only., conf high)
- TLV: Guild
- fields:
    - `stGuild: struct via FUN_10341cc0`

### TdrDump_Wrapper_stGuild_via1033ac40 `@103545c0` — both
*TDR text dumper wrapper: [stGuild] via FUN_1033ac40 (the astGuilds element).* (server: Debug-only., conf high)
- TLV: Guild (list element)
- fields:
    - `stGuild: struct via FUN_1033ac40`

### TdrDump_Wrapper_stGuilder_via102a3f50 `@1034f8e0` — S2C
*TDR text dumper wrapper: [stGuilder] via FUN_102a3f50 (the guild-member id struct dumper).* (server: Debug-only., conf medium)
- TLV: GuildMemberId
- fields:
    - `stGuilder: struct via FUN_102a3f50`

### TdrDump_Wrapper_stGuilder_via102a43c0 `@1034f5a0` — S2C
*TDR text dumper wrapper: [stGuilder] via FUN_102a43c0 (a different, smaller guilder variant).* (server: Debug-only; note it uses a DIFFERENT element dumper (FUN_102a43c0) than the full guild-member one., conf medium)
- TLV: Guilder (brief variant)
- fields:
    - `stGuilder: struct via FUN_102a43c0`

### TdrDump_Wrapper_stGuilder_via1033e300 `@1034ef30` — S2C
*TDR text dumper wrapper: [stGuilder] via FUN_1033e300 (guild-member dumper).* (server: Debug-only., conf high)
- TLV: TlvGuildMemberData
- fields:
    - `stGuilder: struct via FUN_1033e300`

### TdrDump_Wrapper_stGuilder_via1033e300_b `@1034f250` — S2C
*TDR text dumper wrapper: [stGuilder] via FUN_1033e300 (duplicate of FUN_1034ef30).* (server: Debug-only., conf high)
- TLV: TlvGuildMemberData
- fields:
    - `stGuilder: struct via FUN_1033e300`

### TdrDump_Wrapper_stGuilder_via1033e300_c `@1034fc00` — S2C
*TDR text dumper wrapper: [stGuilder] via FUN_1033e300 (duplicate of FUN_1034ef30).* (server: Debug-only., conf high)
- TLV: TlvGuildMemberData
- fields:
    - `stGuilder: struct via FUN_1033e300`

### TdrDump_Wrapper_stInvitations `@1034e5d0` — both
*TDR text dumper wrapper: [stInvitations] via FUN_1033c680 (invitation list).* (server: Debug-only., conf high)
- TLV: InvitationList
- fields:
    - `stInvitations: struct via FUN_1033c680`

### TdrDump_Wrapper_stLib `@10385600` — both
*TDR text dumper wrapper: [stLib] via FUN_10385250 (sculpture lib dumper).* (server: Debug-only., conf high)
- TLV: TlvSculptureLibData
- fields:
    - `stLib: struct via FUN_10385250`

### TdrDump_Wrapper_stQuest `@10350970` — both
*TDR text dumper wrapper: [stQuest] via FUN_10340470.* (server: Debug-only., conf high)
- TLV: Quest
- fields:
    - `stQuest: struct via FUN_10340470`

### TdrDump_Wrapper_stRights `@103490f0` — both
*TDR text dumper wrapper: [stRights] via FUN_1033fca0.* (server: Debug-only., conf high)
- TLV: TitleList/RightsList
- fields:
    - `stRights: struct via FUN_1033fca0`

### TdrDump_Wrapper_stRights_b `@1034bd50` — both
*TDR text dumper wrapper: [stRights] via FUN_1033fca0 (duplicate of FUN_103490f0).* (server: Debug-only., conf high)
- TLV: TitleList/RightsList
- fields:
    - `stRights: struct via FUN_1033fca0`

### TdrDump_Wrapper_stShop `@10366e40` — both
*TDR text dumper wrapper: [stShop] via FUN_10366a60.* (server: Debug-only., conf high)
- TLV: Shop
- fields:
    - `stShop: struct via FUN_10366a60`

### TdrDump_Wrapper_stSkill `@1036a030` — both
*TDR text dumper wrapper: [stSkill] via FUN_10369ca0.* (server: Debug-only., conf high)
- TLV: Skill
- fields:
    - `stSkill: struct via FUN_10369ca0`

### TdrDump_Wrapper_stSkills `@103521e0` — both
*TDR text dumper wrapper: [stSkills] via FUN_1033a4c0 (skill list dumper).* (server: Debug-only., conf high)
- TLV: SkillList
- fields:
    - `stSkills: struct via FUN_1033a4c0`

### TdrDump_Wrapper_stSkills_b `@10352520` — both
*TDR text dumper wrapper: [stSkills] via FUN_1033a4c0 (duplicate of FUN_103521e0).* (server: Debug-only., conf high)
- TLV: SkillList
- fields:
    - `stSkills: struct via FUN_1033a4c0`

### TdrDump_Wrapper_stTitles `@10348ae0` — both
*TDR text dumper wrapper: [stTitles] via FUN_1033fca0 (title list dumper).* (server: Debug-only., conf high)
- TLV: TitleList
- fields:
    - `stTitles: struct via FUN_1033fca0`

### TdrDump_Wrapper_stTitles_b `@1034ec10` — both
*TDR text dumper wrapper: [stTitles] via FUN_1033fca0 (duplicate of FUN_10348ae0).* (server: Debug-only., conf high)
- TLV: TitleList
- fields:
    - `stTitles: struct via FUN_1033fca0`

### TdrField_ReadInt16BE `@0x101ffb50` — both
*TDR READ deserializer for a struct with a single int16 field. Loops reading tags (FUN_1010ccb0) until end; when tag>>4 (field_id) == 1 it sets presence-flag bit 0x1 (*(param_1+2)) and reads 2 bytes big-endian into param_1[0]=buf[pos+1], param_1[1]=buf[pos+0]; other field_ids are skipped via FUN_1010d4f0. Read counterpart of FUN_101ff870.* (server: High. Shows how the client parses a single-int16 TLV incl. presence-flag bit and big-endian order; server must produce matching bytes., conf high)
- TLV: unknown
- fields:
    - `field 1: int16 @ +0 (big-endian on wire), presence bit 0x1 stored at +2`
    - `presence_flags: uint32 @ +2`

### TdrField_WriteInt16BE `@0x101ff870` — both
*TDR write helper for a single 16-bit field with two encoding modes selected by param_5. Mode 0: writes variant marker 0x99 (FUN_1010c0c0), tag 0x12 (field 1, wire2=2B), then the uint16 big-endian into the output buffer (2 bytes). Mode 1: writes marker 0xaa, tag 0x10 (field1, wire0 varint) via FUN_1010c430. Returns bytes-written via param_4; returns -0x13 if dest buffer/len null.* (server: High. Confirms 0x99 = NoVariant marker and shows the exact big-endian byte order (MSB first) the client expects for a wire2 int16 field; server must match this ordering., conf medium)
- TLV: unknown
- fields:
    - `field 1 (tag 0x12 mode0 / 0x10 mode1): int16 value, written big-endian (hi byte first) in 2B mode`

### TdrGet_U16BE_FromU32U8U16 `@0x10321180` — S2C
*Binary unpack/accessor: validates a uint32 and a uint8, then emits the struct's uint16 field as 2 big-endian bytes into the caller output buffer, writing the consumed length via param_4.* (server: Field accessor/serializer emitting a big-endian uint16; returns -0x13 on null out, -1 on short buffer., conf medium)
- fields:
    - `u32 @0`
    - `u8 @4`
    - `u16 @5 -> emitted BE`

### TdrGet_U16BE_FromU32U8U16_Dup `@0x103218d0` — S2C
*Binary unpack/accessor emitting a struct uint16 as big-endian bytes. Duplicate of FUN_10321180.* (server: Big-endian uint16 accessor., conf medium)
- fields:
    - `u32 @0`
    - `u8 @4`
    - `u16 @5 -> emitted BE`

### TdrMarshal_U32_U16 `@0x102abcb0` — both
*Fixed-size binary marshaller: writes u32 (FUN_1010c190 on *param_1) then a big-endian u16 (from offset 4) into output buffer param_2; returns bytes-consumed (2) via out-param param_4. Bounds-checked against param_3 capacity.* (server: High - fixed 2-field marshaller used inside larger packets., conf medium)
- fields:
    - `d: u32 @0x0`
    - `w: u16 @0x4 (big-endian in output)`

### TdrMarshal_U32_U32_U16 `@0x102c0640` — both
*Fixed-size binary marshaller: writes u32@0, u32@4, then big-endian u16@8 into output buffer; returns bytes-consumed (2) via out-param. Bounds-checked.* (server: High - fixed 3-field marshaller used inside larger packets., conf medium)
- fields:
    - `d0: u32 @0x0`
    - `d1: u32 @0x4`
    - `w: u16 @0x8 (big-endian in output)`

### TdrPack_ActivityArray_max100 `@0x103cc870` — both
*TdrBuf.h pack: count byte @0 (cap 100) then array of {int32, uint8} elements (stride 5): int32 @+1 (FUN_1010c190), uint8 @+5 (FUN_101150a0).* (server: Cap 100., conf medium)
- fields:
    - `count: uint8 @0 (max 100)`
    - `arr[]: {i:int32, b:uint8} stride 5 @1`

### TdrPack_AttrBlockBig_3x10int `@0x103bfb20` — both
*TdrBuf.h pack of a larger attribute block: int32 @0, nested (FUN_103bf560), int32[10] @0x31, int32[10] @0x59, int32[10] @0x81 (raw big-endian 4-byte writes), int32 @0xa9, int32 @0xad, int32 @0xb1, uint8 @0xb5, uint8 @0xb6.* (server: Fixed-size attribute/award block; note direct MSB-first 4-byte stores (assert 0x108)., conf medium)
- TLV: char attributes / award triple (candidate)
- fields:
    - `i0: int32 @0`
    - `sub: FUN_103bf560`
    - `a1: int32[10] @0x31`
    - `a2: int32[10] @0x59`
    - `a3: int32[10] @0x81`
    - `i1: int32 @0xa9`
    - `i2: int32 @0xad`
    - `i3: int32 @0xb1`
    - `b1: uint8 @0xb5`
    - `b2: uint8 @0xb6`

### TdrPack_AttrBlock_3int_2x4int_byte `@0x103bf560` — both
*TdrBuf.h pack: int32 @0, int32 @4, int32 @8 (FUN_1010c190), then int32[4] @0xc, int32[4] @0x1c, then presence byte @0x2c.* (server: Layout only; fixed-size attribute block., conf medium)
- TLV: char/battle attributes block (candidate)
- fields:
    - `i0: int32 @0`
    - `i1: int32 @4`
    - `i2: int32 @8`
    - `a1: int32[4] @0xc`
    - `a2: int32[4] @0x1c`
    - `b: uint8 @0x2c`

### TdrPack_Bool_Struct2Fields_10387280 `@0x10387280` — both
*TdrBuf.h pack: writes presence byte, then int32 @+1 (FUN_1010c190) and int32 @+5 (FUN_1010c190). Two 4-byte fields.* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `f1: int32 @1`
    - `f2: int32 @5`

### TdrPack_Byte1 `@0x102d1420` — C2S
*Binary wire pack of a single 1-byte field into TdrBuf; bounds-checked (position<=length).* (server: Low-level TdrBuf encoder; server serializer must emit the same single byte., conf high)
- fields:
    - `field0: uint8 @0`

### TdrPack_Byte1_B `@0x1030b270` — C2S
*Binary pack of a single byte field (no following fields).* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`

### TdrPack_ByteEnumInt32_103b8ce0 `@0x103b8ce0` — both
*TdrBuf.h pack: presence byte @0, uint8/enum @+1 (FUN_101150a0), int32 @+2 (FUN_1010c190).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `enum: uint8 @1`
    - `i1: int32 @2`

### TdrPack_ByteInt32Array_max20_103aa6f0 `@0x103aa6f0` — both
*TdrBuf.h pack: count byte @0 (cap 20), then array of int32 (FUN_1010c190) at stride 4 starting @+1.* (server: Cap 20 scalar-array., conf medium)
- fields:
    - `count: uint8 @0 (max 20)`
    - `vals[]: int32[count] @1 stride 4`

### TdrPack_ByteInt32Int16_103a9990 `@0x103a9990` — both
*TdrBuf.h pack: presence byte @0, int32 @+1 (FUN_1010c190), int16 @+5 (FUN_1010c120).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `f1: int32 @1`
    - `f2: int16 @5`

### TdrPack_ByteInt32Nested_103b0370 `@0x103b0370` — both
*TdrBuf.h pack: presence byte @0, int32 @+1, then nested serialize (FUN_103aff20 over field @+1).* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`
    - `f1: int32 @1`
    - `nested: (FUN_103aff20)`

### TdrPack_ByteInt32_103a9d20 `@0x103a9d20` — both
*TdrBuf.h pack: presence byte @0 then int32 @+1 (FUN_1010c190).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `f1: int32 @1`

### TdrPack_ByteInt64_103b4bd0 `@0x103b4bd0` — both
*TdrBuf.h pack: presence byte @0 then int64 @+1 (FUN_1010c200 lo@1,hi@5).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `ull: int64 @1`

### TdrPack_ByteStructArray_max100_103ab790 `@0x103ab790` — both
*TdrBuf.h pack: count byte @0 (cap 100) then struct array (elem FUN_103ab390).* (server: Cap 100., conf medium)
- fields:
    - `count: uint8 @0 (max 100)`
    - `arr[]: struct (elem FUN_103ab390)`

### TdrPack_ByteStructArray_max20_103aaf60 `@0x103aaf60` — both
*TdrBuf.h pack: count byte @0 (cap 20), then array of sub-structs (elem FUN_103aaad0).* (server: Cap 20., conf medium)
- fields:
    - `count: uint8 @0 (max 20)`
    - `arr[]: struct (elem FUN_103aaad0)`

### TdrPack_ByteThenStr32_103895b0 `@0x103895b0` — both
*TdrBuf.h pack: presence byte @0, then a 32-byte string field @+1 (terminator @0x20) written via FUN_1010bf70/c2b0/c3c0.* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `szField: char[32] @1`

### TdrPack_ByteThenStr32_1038a050 `@0x1038a050` — both
*TdrBuf.h pack: presence byte @0 + 32-byte string @+1 (terminator @0x20).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `szField: char[32] @1`

### TdrPack_ByteThenStr32_1038a4b0 `@0x1038a4b0` — both
*TdrBuf.h pack: presence byte @0 + 32-byte string @+1.* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `szField: char[32] @1`

### TdrPack_ByteThreeStr4096_103c54d0 `@0x103c54d0` — both
*TdrBuf.h pack: presence byte @0, int32 @+1, then three 4096-byte string fields @5 (term @0x1004), @0x1009 (term @0x2008), @0x200d (term @0x300c).* (server: Layout only; three large 4KB text/blob fields., conf medium)
- fields:
    - `presence: uint8 @0`
    - `i1: int32 @1`
    - `szA: char[4096] @5`
    - `szB: char[4096] @0x1009`
    - `szC: char[4096] @0x200d`

### TdrPack_ByteTwoEnums_103b96c0 `@0x103b96c0` — both
*TdrBuf.h pack: presence byte @0, uint8 @+1 (FUN_101150a0), uint8 @+2 (FUN_101150a0).* (server: Layout only., conf medium)
- fields:
    - `presence: uint8 @0`
    - `e1: uint8 @1`
    - `e2: uint8 @2`

### TdrPack_Byte_Str_Nested `@0x102d7360` — C2S
*Binary pack: byte + string (via FUN_1010bf70 begin / FUN_1010c2b0 body / FUN_1010c3c0 len-fixup) + nested (FUN_102d3f30).* (server: Low-level encoder with embedded length-delimited string., conf medium)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `szStr: cstring @3 (max 0x190)`
    - `nested @? -- FUN_102d3f30`

### TdrPack_Byte_U16 `@0x102d3770` — C2S
*Binary pack: 1 byte then a uint16 (FUN_1010c120).* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`

### TdrPack_Byte_U16_A `@0x10320750` — C2S
*Binary pack: byte + uint16.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`

### TdrPack_Byte_U16_B `@0x10320e60` — C2S
*Binary pack: byte + uint16. Duplicate of FUN_10320750.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`

### TdrPack_Byte_U16_U16_A `@0x1031e0c0` — C2S
*Binary pack: byte + uint16 + uint16.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint16 @3`

### TdrPack_Byte_U16_U16_B `@0x1031f000` — C2S
*Binary pack: byte + uint16 + uint16. Duplicate of FUN_1031e0c0.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint16 @3`

### TdrPack_Byte_U16_U16_C `@0x103215a0` — C2S
*Binary pack: byte + uint16 + uint16.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint16 @3`

### TdrPack_Byte_U16_U32 `@0x102e6490` — C2S
*Binary pack: byte + uint16 + uint32.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint32 @3`

### TdrPack_Byte_U16_U64_U8 `@0x10322d30` — C2S
*Binary pack: byte + uint16 + uint64 (FUN_1010c200) + uint8.* (server: Low-level encoder with 64-bit field., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint64 @3`
    - `field3: uint8 @0xb`

### TdrPack_Byte_U16_U8 `@0x102e93d0` — C2S
*Binary pack: byte + uint16 + uint8.* (server: Low-level encoder (element of FUN_102e9790 array)., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`

### TdrPack_Byte_U16_U8_B `@0x1031d9c0` — C2S
*Binary pack: byte + uint16 + uint8.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`

### TdrPack_Byte_U16_U8_C `@0x10323450` — C2S
*Binary pack: byte + uint16 + uint8.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`

### TdrPack_Byte_U16_U8_U16_U16 `@0x1031f6f0` — C2S
*Binary pack: byte + uint16 + uint8 + uint16 + uint16.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`
    - `field3: uint16 @4`
    - `field4: uint16 @6`

### TdrPack_Byte_U16_U8_U16_U8 `@0x1031d230` — C2S
*Binary pack: byte + uint16 + uint8 + uint16 + uint8.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`
    - `field3: uint16 @4`
    - `field4: uint8 @6`

### TdrPack_Byte_U16_U8_U8_U16 `@0x10321cf0` — C2S
*Binary pack: byte + uint16 + uint8 + uint8 + uint16.* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint16 @1`
    - `field2: uint8 @3`
    - `field3: uint8 @4`
    - `field4: uint16 @5`

### TdrPack_Byte_U32CountArray `@0x102df750` — C2S
*Binary pack: byte + uint32 count (<=0x10) + array of elements (FUN_102def10).* (server: Count-prefixed array encoder; cap 0x10., conf high)
- fields:
    - `field0: uint8 @0`
    - `count: uint32 @1 (0..0x10)`
    - `elems: struct[count] -- FUN_102def10`

### TdrPack_Byte_U32_U8_U8_Nested `@0x102fd3c0` — C2S
*Binary pack: byte + uint32 + uint8 + uint8 + nested (FUN_102fd000).* (server: Low-level encoder., conf medium)
- fields:
    - `field0: uint8 @0`
    - `field1: uint32 @1`
    - `field2: uint8 @5`
    - `field3: uint8 @6`
    - `nested -- FUN_102fd000`

### TdrPack_Byte_U32_U8_U8_Str `@0x102fd810` — C2S
*Binary pack: byte + uint32 + uint8 + uint8 + length-delimited string.* (server: Low-level encoder with large (0x800) string., conf medium)
- fields:
    - `field0: uint8 @0`
    - `field1: uint32 @1`
    - `field2: uint8 @5`
    - `field3: uint8 @6`
    - `szStr: cstring @7 (buf 0x800)`

### TdrPack_Byte_U8 `@0x102d86c0` — C2S
*Binary pack: 1 byte + 1 uint8 (FUN_1010c0c0).* (server: Low-level encoder., conf high)
- fields:
    - `field0: uint8 @0`
    - `field1: uint8 @1`

### TdrPack_FriendOnlineEntry_10388590 `@0x10388590` — both
*TdrBuf.h pack of a friend/role entry: presence byte, int64 @0x205, int32 @0x20d, int32 @0x211, string @0x215 (len 0x1f terminator @0x234), uint8 @0x235, int32 @0x236, int32 @0x23a, int32 @0x23e.* (server: Server must pack friender entry in this field order., conf medium)
- TLV: TlvFriendRoleInfo.md
- fields:
    - `presence: uint8 @0`
    - `ullRoleDBID: int64 @0x205`
    - `iNetID: int32 @0x20d`
    - `iLevel: int32 @0x211`
    - `szRoleName: char[32] @0x215`
    - `bOnline: uint8 @0x235`
    - `iFarmPoint: int32 @0x236`
    - `iFarmCanBGatheredCount: int32 @0x23a`
    - `iLineId: int32 @0x23e`
- ⚠ discrepancy: This is the pack side of the stFriender struct whose DebugFormat is FUN_10388930; the generated TlvFriendRoleInfo.md (0x99 subset, 9 fields) OMITS iNetID, bOnline, iLineId and renames iFarmCanBGatheredCount->iFarmCanBeGatheredCount. Full struct has 10+ fields (doc itself flags the 9-vs-10 mismatch).

### TdrPack_HdrWith31Array `@0x103d2230` — unknown
*PacketCode serialize: u8@0, i32@1, i32@5, i32@9, str(0x80)@0xd, str(0x80)@0x8d, i32@0x10d, u8-count@0x111(max 0x1f) then that many sub-elements via FUN_103d1eb0.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `i1: i32 @1`
    - `i2: i32 @5`
    - `i3: i32 @9`
    - `sz1: len-delim string buf=0x80 @0xd`
    - `sz2: len-delim string buf=0x80 @0x8d`
    - `i4: i32 @0x10d`
    - `count: u8 @0x111 (max 31)`
    - `array[count]: sub-struct via FUN_103d1eb0`

### TdrPack_HuntTaskElem `@0x103d38b0` — unknown
*PacketCode serialize of one hunt-task element: string(0x80)@0, u8-count@0x80(max8)+i32[]@0x81, u8-count@0xa1(max8)+i32[]@0xa2, u8@0xc2, i32@0xc3, u8@0xc7.* (server: Yes, conf medium)
- fields:
    - `szName: len-delim string buf=0x80 @0`
    - `cntA: u8 @0x80 (max8)`
    - `arrA[cntA]: i32 @0x81`
    - `cntB: u8 @0xa1 (max8)`
    - `arrB[cntB]: i32 @0xa2`
    - `b1: u8 @0xc2`
    - `i1: i32 @0xc3`
    - `b2: u8 @0xc7`

### TdrPack_HuntTaskList `@0x103d4010` — unknown
*PacketCode serialize of hunt-task list: u8-count@0(max3) then that many FUN_103d38b0 elements, then i32 iParam1@0x259.* (server: Yes, conf high)
- fields:
    - `bHuntTaskCount: u8 @0 (max3)`
    - `astHuntTasks[count]: FUN_103d38b0 element`
    - `iParam1: i32 @0x259`

### TdrPack_LargeMultiStringStruct `@0x103d6600` — unknown
*PacketCode serialize of a large struct: u8@0, i32@1/5/9, seven length-delimited strings (0x1f,0x1f,0xff,0x3ff,0x3ff,0x7f... varying bufs), i32@0xacd, u8@0xad1, u8-count@0xad2(max0x40) array FUN_103d50e0, u8-count@0x11393(max6) array FUN_103d54e0, trailer FUN_103d5ef0.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `i1: i32 @1`
    - `i2: i32 @5`
    - `i3: i32 @9`
    - `sz@0xd buf=0x20`
    - `sz@0x2d buf=0x20`
    - `sz@0x4d buf=0x100`
    - `sz@0x14d buf=0x400`
    - `sz@0x54d buf=0x400`
    - `sz@0x94d buf=0x100`
    - `sz@0xa4d buf=0x80`
    - `i@0xacd: i32`
    - `b@0xad1: u8`
    - `count1: u8 @0xad2 (max64) -> FUN_103d50e0[]`
    - `count2: u8 @0x11393 (max6) -> FUN_103d54e0[]`
    - `trailer: FUN_103d5ef0`

### TdrPack_LargeRoleInfoStruct `@0x102ec7a0` — S2C
*Binary pack of a large multi-field struct: two length-delimited strings (names), many uint32/uint8 scalars, several nested sub-serializers (FUN_10271230 repeated Vec3-like, FUN_102715d0), and an inner uint32-count array (<=8).* (server: Large player/role info packer; high relevance but many fields uncertain., conf medium)
- TLV: RoleInfo, PlayerBaseInfo
- fields:
    - `szName1: cstring @0xd`
    - `szName2: cstring @0x10d`
    - `u32 fields @0x12b..0x13f`
    - `nested FUN_10271230 x several`
    - `innerArrayCount: int32 @0x199 (0..8)`
    - `trailing u32/u8 fields @0x20a..`

### TdrPack_MailMemo_103b1510 `@0x103b1510` — both
*TdrBuf.h pack: presence byte @0, int16 @+1, int64 @+3, int16 @+0xb, int32 @+0xd.* (server: Layout only; candidate stMemo packer., conf medium)
- fields:
    - `presence: uint8 @0`
    - `w1: int16 @1`
    - `ull: int64 @3`
    - `w2: int16 @0xb`
    - `i1: int32 @0xd`

### TdrPack_MailRoleTo_TwoArrays_max100 `@0x103b3ce0` — both
*TdrBuf.h pack: 128-byte string @0, int32 count @0x80 (cap<=100) + struct array (FUN_103ad430), int32 count @0x1088 (cap<=100) + int32 array @0x108c.* (server: Server MUST honor both 100 caps., conf medium)
- TLV: mail send result (stError branch)
- fields:
    - `sz: char[128] @0`
    - `iRoleCount: int32 @0x80 (0..100)`
    - `astMailRoleTo[]: struct (elem FUN_103ad430)`
    - `iErrCount: int32 @0x1088 (0..100)`
    - `errCode[]: int32 @0x108c`

### TdrPack_MailSummary_103b7c00 `@0x103b7c00` — both
*TdrBuf.h pack: presence byte @0, bool @+1 (FUN_101159e0), int32 @+2, nested (FUN_103aed70), int32 @+0x90.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`
    - `bFlag: bool @1`
    - `i1: int32 @2`
    - `nested: FUN_103aed70`
    - `i2: int32 @0x90`

### TdrPack_MsgHeader_I32_BE16_I32 `@0x10404510` — unknown
*Serialize a small header into a raw output buffer: i32@0, then a BIG-ENDIAN u16@4 (written high-byte-first), then i32@6. Returns bytes-written via out param.* (server: Yes - the big-endian u16 is a network-order length/command; server must match byte order exactly., conf medium)
- fields:
    - `field0: i32 @0 (host order via FUN_1010c190)`
    - `wLen/cmd: u16 @4 BIG-ENDIAN (out[+0]=hi, out[+1]=lo)`
    - `field2: i32 @6`

### TdrPack_MultiField_ArrayU16Count `@0x102e9790` — C2S
*Binary pack: byte + uint8 + uint32 + uint32 + uint16 count (<=0x40) + array (FUN_102e93d0 elements).* (server: Count-prefixed array encoder; cap 0x40., conf medium)
- fields:
    - `field0: uint8 @0`
    - `field1: uint8 @1`
    - `field2: uint32 @2`
    - `field3: uint32 @6`
    - `count: int16 @0xa (0..0x40)`
    - `elems: struct[count] -- FUN_102e93d0`

### TdrPack_PresenceByteOnly_103868a0 `@0x103868a0` — both
*TdrBuf.h pack: writes one presence/flag byte (*param_1) into buffer at pos; returns 0/-1 on overflow. Struct body fully optional/absent in this path.* (server: Server must write the leading presence byte., conf medium)
- fields:
    - `presence_flag/leadByte: uint8 @0`

### TdrPack_PresenceByteOnly_10386bc0 `@0x10386bc0` — both
*TdrBuf.h pack: identical to 0x103868a0 - writes single presence byte, no further fields on this path.* (server: Layout only., conf medium)
- fields:
    - `presence_flag: uint8 @0`

### TdrPack_PresenceByteOnly_10389a10 `@0x10389a10` — both
*TdrBuf.h pack: single presence byte, no further required fields.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_10389d30 `@0x10389d30` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_1038e750 `@0x1038e750` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_10390100 `@0x10390100` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_1039a580 `@0x1039a580` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103abbb0 `@0x103abbb0` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103ac480 `@0x103ac480` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103b9a50 `@0x103b9a50` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103bb400 `@0x103bb400` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103bbf10 `@0x103bbf10` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103c7c60 `@0x103c7c60` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103c7f80 `@0x103c7f80` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103c82a0 `@0x103c82a0` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_PresenceByteOnly_103caad0 `@0x103caad0` — both
*TdrBuf.h pack: single presence byte only.* (server: Layout only., conf low)
- fields:
    - `presence: uint8 @0`

### TdrPack_RoleInfoLarge `@0x10401de0` — unknown
*PacketCode serialize of a large role/character info struct: 3 strings(0x20), i32@0x60, 10x string(0x20) array@0x64, 10x i32 array@0x1a4, i32@0x1cc, i32-len@0x1d0(max0x80)+blob@0x1d4, i32@0x254, i32@0x258, 10x i32 array@0x25c.* (server: Yes - full character/role info packet body., conf medium)
- fields:
    - `sz1: string buf=0x20 @0`
    - `sz2: string buf=0x20 @0x20`
    - `sz3: string buf=0x20 @0x40`
    - `i0: i32 @0x60`
    - `aszNames[10]: string buf=0x20 @0x64 (stride 0x20)`
    - `ai32A[10]: i32 @0x1a4`
    - `i1: i32 @0x1cc`
    - `blobLen: i32 @0x1d0 (max0x80)`
    - `blob: bytes[blobLen] @0x1d4`
    - `i2: i32 @0x254`
    - `i3: i32 @0x258`
    - `ai32B[10]: i32 @0x25c`

### TdrPack_SignUpTeams_max20_a `@0x103a3830` — both
*TdrBuf.h pack: int32 count @0 (cap 0x14=20), loop pack team entries (FUN_103a2960), then uint8 @0x15f8-ish (byte @0x57e word) and a bool @0x15f9.* (server: Server MUST cap teams at 20., conf medium)
- TLV: arena/match sign-up teams
- fields:
    - `count: int32 @0 (max 20)`
    - `astTeams[]: struct (elem FUN_103a2960)`
    - `chBegin: uint8 @0x15f8`
    - `chFin: bool @0x15f9`

### TdrPack_SingleU8 `@0x103d7470` — unknown
*PacketCode serialize of a 1-byte struct (single u8).* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_b `@0x103e86c0` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_c `@0x103e89e0` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_d `@0x103e9340` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_e `@0x1040a360` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_f `@0x10414170` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_g `@0x1041c640` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_SingleU8_h `@0x1041e120` — unknown
*Duplicate single-u8 packer.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`

### TdrPack_Str256 `@0x10412220` — unknown
*PacketCode serialize of a single length-delimited string, buf 0x100 @0.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x100 @0`

### TdrPack_Str32_I32 `@0x103d02d0` — unknown
*PacketCode serialize: length-delimited string(buf 0x20)@0 then int32@0x20.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`
    - `i32: int32 @0x20`

### TdrPack_Str32_I32_4xU8 `@0x10414790` — unknown
*PacketCode serialize: string(0x20)@0, i32@0x20, four u8 (via FUN_101159e0) @0x24,0x25,0x26,0x27.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`
    - `i32: i32 @0x20`
    - `b0: u8 @0x24`
    - `b1: u8 @0x25`
    - `b2: u8 @0x26`
    - `b3: u8 @0x27`

### TdrPack_Str32_I32_U8_U8_Str128 `@0x103d0740` — unknown
*PacketCode serialize: string(0x20)@0, int32@0x20, u8@0x24, u8@0x25, string(0x80)@0x26.* (server: Yes, conf medium)
- fields:
    - `sz1: len-delim string buf=0x20 @0`
    - `i32: int32 @0x20`
    - `b1: u8 @0x24`
    - `b2: u8 @0x25`
    - `sz2: len-delim string buf=0x80 @0x26`

### TdrPack_Str32_I64_Sub `@0x103e55b0` — unknown
*PacketCode serialize: string(0x20)@0, int64@0x20, then sub-struct via FUN_103e4730.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`
    - `i64: int64 @0x20`
    - `sub: FUN_103e4730`

### TdrPack_Str32_Str32_I32_I32 `@0x103e4730` — unknown
*PacketCode serialize: string(0x20)@0, string(0x20)@0x20, i32@0x40, i32@0x44.* (server: Yes, conf medium)
- fields:
    - `sz1: len-delim string buf=0x20 @0`
    - `sz2: len-delim string buf=0x20 @0x20`
    - `i1: i32 @0x40`
    - `i2: i32 @0x44`

### TdrPack_Str32_a `@0x103daf70` — unknown
*PacketCode serialize of a single length-delimited string, buf 0x20 @0.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str32_b `@0x103db2f0` — unknown
*Duplicate single-string(0x20) packer.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str32_c `@0x103db960` — unknown
*Duplicate single-string(0x20) packer.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str32_d `@0x103df550` — unknown
*Duplicate single-string(0x20) packer.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str32_e `@0x103df8d0` — unknown
*Duplicate single-string(0x20) packer.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str32_f `@0x103e1060` — unknown
*Duplicate single-string(0x20) packer.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x20 @0`

### TdrPack_Str33_U8_I32_U8 `@0x10409f10` — unknown
*PacketCode serialize: string(buf 0x21=33)@0, u8@0x21, i32@0x22, u8@0x26.* (server: Yes, conf medium)
- fields:
    - `sz: len-delim string buf=0x21 @0`
    - `b0: u8 @0x21`
    - `i32: i32 @0x22`
    - `b1: u8 @0x26`

### TdrPack_Str600Nested_103b0be0 `@0x103b0be0` — both
*TdrBuf.h pack: fixed string @0 (terminator @599/0x257) then nested serialize (FUN_103b0770).* (server: Layout only., conf medium)
- fields:
    - `szContent: char[600] @0`
    - `nested: (FUN_103b0770)`

### TdrPack_ThreeStrings_128_128_256 `@0x103d1480` — unknown
*PacketCode serialize: three length-delimited strings buf 0x80@0, 0x80@0x80, 0x100@0x100.* (server: Yes, conf medium)
- fields:
    - `sz1: len-delim string buf=0x80 @0`
    - `sz2: len-delim string buf=0x80 @0x80`
    - `sz3: len-delim string buf=0x100 @0x100`

### TdrPack_TwoStrings_32_1024 `@0x103cf8b0` — unknown
*PacketCode serialize: writes two length-delimited strings (buf[0x20] @0, buf[0x400] @0x20) into the send buffer.* (server: Yes - server must produce/consume this exact byte layout., conf medium)
- fields:
    - `szField1: len-delim string (4B LE len + bytes), buf=0x20 @0`
    - `szField2: len-delim string, buf=0x400 @0x20`

### TdrPack_TwoStrings_32_1024_dup `@0x103cfdc0` — unknown
*Byte-identical duplicate of FUN_103cf8b0 (two length-delimited strings 0x20 + 0x400).* (server: Yes, conf medium)
- fields:
    - `szField1: len-delim string buf=0x20 @0`
    - `szField2: len-delim string buf=0x400 @0x20`

### TdrPack_U32Array100 `@0x102d7b40` — C2S
*Binary pack of a 100-element uint32 array (big-endian byte order, 4 bytes each) into TdrBuf.* (server: Fixed 100-entry uint32 array encoder., conf high)
- fields:
    - `au32[100]: uint32[100] (BE)`

### TdrPack_U8CountArray_U32U16 `@0x10323ec0` — C2S
*Binary pack: byte count (<=10) then array of {uint32, uint16} 6-byte elements.* (server: Count-prefixed {id,count} pair array (e.g. item list); cap 10., conf high)
- fields:
    - `count: uint8 @0 (0..10)`
    - `elems[count]: {u32, u16} (6 bytes each) @1`

### TdrPack_U8Count_I32Array100 `@0x103e7000` — unknown
*PacketCode serialize: u8-count@0(max100) then that many i32 elements @1.* (server: Yes, conf medium)
- fields:
    - `count: u8 @0 (max100)`
    - `arr[count]: i32 @1 (stride 4)`

### TdrPack_U8Count_I32U8Array100 `@0x103e7730` — unknown
*PacketCode serialize: u8-count@0(max100) then that many {i32, u8} elements (stride 5) @1.* (server: Yes, conf medium)
- fields:
    - `count: u8 @0 (max100)`
    - `arr[count]: { i32 @+0, u8 @+4 } stride 5`

### TdrPack_U8Count_I32U8Array50 `@0x103e7ed0` — unknown
*PacketCode serialize: u8-count@0(max0x32) then that many {i32, u8} elements (stride 5).* (server: Yes, conf medium)
- fields:
    - `count: u8 @0 (max50)`
    - `arr[count]: { i32 @+0, u8 @+4 } stride 5`

### TdrPack_U8U8U8_Array `@0x103d50e0` — unknown
*PacketCode serialize: u8@0, u8@1, u8@2, then array/sub via FUN_103d4610(count=field@1).* (server: Yes, conf low)
- fields:
    - `b0: u8 @0`
    - `b1: u8 @1 (used as array count)`
    - `b2: u8 @2`
    - `array: FUN_103d4610`

### TdrPack_U8_Enum_Sub `@0x103f2690` — unknown
*PacketCode serialize: u8@0, enum-u8@1(FUN_101150a0), then sub via FUN_103f1a90.* (server: Yes, conf low)
- fields:
    - `b: u8 @0`
    - `e: u8/enum @1`
    - `sub: FUN_103f1a90`

### TdrPack_U8_Enum_Sub_b `@0x103f81b0` — unknown
*PacketCode serialize: u8@0, enum-u8@1, then sub via FUN_103f75b0.* (server: Yes, conf low)
- fields:
    - `b: u8 @0`
    - `e: u8/enum @1`
    - `sub: FUN_103f75b0`

### TdrPack_U8_I32_Str32 `@0x10415a10` — unknown
*PacketCode serialize: u8@0, i32@1, string(0x20)@5.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`
    - `i32: i32 @1`
    - `sz: len-delim string buf=0x20 @5`

### TdrPack_U8_Str128_Str256 `@0x103d54e0` — unknown
*PacketCode serialize: u8@0, string(0x80)@1, string(0x100)@0x81.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`
    - `sz1: len-delim string buf=0x80 @1`
    - `sz2: len-delim string buf=0x100 @0x81`

### TdrPack_U8_Str256 `@0x103d1a20` — unknown
*PacketCode serialize: u8@0 then length-delimited string(buf 0x100)@1.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`
    - `sz: len-delim string buf=0x100 @1`

### TdrPack_U8_U16 `@0x103ed570` — unknown
*PacketCode serialize: u8@0, u16@1.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`

### TdrPack_U8_U16_I32 `@0x103ed8f0` — unknown
*PacketCode serialize: u8@0, u16@1, i32@3.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `i32: i32 @3`

### TdrPack_U8_U16_I64_U8 `@0x103ec6e0` — unknown
*PacketCode serialize: u8@0, u16@1, int64@3, u8@0xb.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `i64: int64 @3`
    - `b1: u8 @0xb`

### TdrPack_U8_U16_I64_U8_dup1 `@0x103ecaa0` — unknown
*Duplicate of FUN_103ec6e0 (u8,u16,i64,u8).* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `i64: int64 @3`
    - `b1: u8 @0xb`

### TdrPack_U8_U16_I64_U8_dup2 `@0x103ee5c0` — unknown
*Duplicate of FUN_103ec6e0 (u8,u16,i64,u8).* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `i64: int64 @3`
    - `b1: u8 @0xb`

### TdrPack_U8_U16_U8 `@0x103ece50` — unknown
*PacketCode serialize: u8@0, u16@1, u8@3.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `b1: u8 @3`

### TdrPack_U8_U16_U8_U16_U8_Array6 `@0x103f5200` — unknown
*PacketCode serialize: u8@0, u16@1, u8@3, u16@4, u8@6, u8-count@7(max6) then FUN_102720f0 elements.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w1: u16 @1`
    - `b1: u8 @3`
    - `w2: u16 @4`
    - `b2: u8 @6`
    - `count: u8 @7 (max6)`
    - `arr[count]: FUN_102720f0`

### TdrPack_U8_U16_U8_dup `@0x103ed1e0` — unknown
*Duplicate of FUN_103ece50 (u8,u16,u8).* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `w: u16 @1`
    - `b1: u8 @3`

### TdrPack_U8_U16_b `@0x10414c70` — unknown
*PacketCode serialize: u8@0, u16@1.* (server: Yes, conf medium)
- fields:
    - `b: u8 @0`
    - `w: u16 @1`

### TdrPack_U8_U8_U8 `@0x103ff0b0` — unknown
*PacketCode serialize: u8@0, u8@1, u8@2.* (server: Yes, conf medium)
- fields:
    - `b0: u8 @0`
    - `b1: u8 @1`
    - `b2: u8 @2`

### TdrStruct3_Read_variantA `@0x10200180` — both
*Binary TDR READ deserializer for the 3-field struct. Reads tags; field_id 1 -> int8 into *param_1 (presence 0x1); field_id 2 -> value into param_1+1 via FUN_1010cbd0 (presence 0x2); field_id 3 -> param_1+5 via FUN_1010cbd0 (presence 0x4); else skip. Presence flags stored at param_1+9.* (server: High. Read counterpart of FUN_101fff70., conf medium)
- TLV: unknown
- fields:
    - `field 1: int8 @ +0 (presence 0x1)`
    - `field 2: varint @ +1 (FUN_1010cbd0, presence 0x2)`
    - `field 3: varint @ +5 (FUN_1010cbd0, presence 0x4)`
    - `presence_flags: uint32 @ +9`

### TdrStruct3_Read_variantB `@0x10200290` — both
*Binary TDR READ deserializer for the 3-field struct, using FUN_1010c870 (read fixed32) for fields 2 and 3. Read counterpart of FUN_10200010.* (server: High. Read counterpart of FUN_10200010., conf medium)
- TLV: unknown
- fields:
    - `field 1: int8 @ +0 (presence 0x1)`
    - `field 2: fixed32 @ +1 (FUN_1010c870, presence 0x2)`
    - `field 3: fixed32 @ +5 (FUN_1010c870, presence 0x4)`
    - `presence_flags: uint32 @ +9`

### TdrStruct3_Write_variantA `@0x101fff70` — both
*Binary TDR WRITE for a 3-field struct: field1 tag 0x11 (wire1=1B) writes 1 byte (*param_1); field2 tag 0x20 (wire0 varint) writes *(param_1+1) via FUN_1010c560; field3 tag 0x30 (wire0 varint) writes *(param_1+5) via FUN_1010c560.* (server: High. Wire writer for a small {byte,int,int} sub-struct; server must reproduce., conf medium)
- TLV: unknown
- fields:
    - `field 1 (tag 0x11): int8 @ +0`
    - `field 2 (tag 0x20): varint @ +1 (FUN_1010c560)`
    - `field 3 (tag 0x30): varint @ +5 (FUN_1010c560)`

### TdrStruct3_Write_variantB `@0x10200010` — both
*Binary TDR WRITE for the same 3-field {byte,int,int} struct as FUN_101fff70 but with different value encodings: field1 tag 0x11 (1B), field2 tag 0x23 (wire3=4B), field3 tag 0x33 (wire3=4B), values via FUN_1010c190.* (server: High. Alternate-encoding wire writer for the {byte,int,int} sub-struct., conf medium)
- TLV: unknown
- fields:
    - `field 1 (tag 0x11): int8 @ +0`
    - `field 2 (tag 0x23): fixed32/int @ +1 (FUN_1010c190)`
    - `field 3 (tag 0x33): fixed32/int @ +5 (FUN_1010c190)`

### TdrText_ActorBeginMoveInner `@0x102f68b0` — both
*Text dump: llSyncTime (int64), stLocation (Vec3), stRotation (Rot), stMoveSpeed (Vec3).* (server: Begin-move movement sync., conf high)
- TLV: ActorBeginMove
- fields:
    - `llSyncTime: int64 @0`
    - `stLocation: Vec3 -- FUN_102713d0`
    - `stRotation: Rot -- FUN_102717b0`
    - `stMoveSpeed: Vec3 -- FUN_102713d0`

### TdrText_ActorBeginMove_Wrapper `@0x102f6ce0` — both
*Text dump: dwNetObjId (uint32) + nested stActorBeginmove (FUN_102f68b0).* (server: Begin-move sync wrapper., conf high)
- TLV: ActorBeginMove
- fields:
    - `dwNetObjId: uint32 @0`
    - `stActorBeginmove: struct -- FUN_102f68b0`

### TdrText_ActorIdleMoveInner `@0x102f2000` — both
*Text dump: llSyncTime (int64), nested stLocation (Vec3), stActorRot (rotation).* (server: Movement sync payload (idle); server relays., conf high)
- TLV: ActorIdleMove
- fields:
    - `llSyncTime: int64 @0`
    - `stLocation: Vec3 -- FUN_102713d0`
    - `stActorRot: Rot -- FUN_102717b0`

### TdrText_ActorIdleMove_Wrapper `@0x102f2430` — both
*Text dump: dwNetObjId (uint32) + nested stActorIdlemove (FUN_102f2000).* (server: Idle-move sync wrapper., conf high)
- TLV: ActorIdleMove
- fields:
    - `dwNetObjId: uint32 @0`
    - `stActorIdlemove: struct -- FUN_102f2000`

### TdrText_ActorMoveStateInner `@0x102f70f0` — both
*Text dump: llSyncTime (int64), stLocation, stRotation, stMoveSpeed, iState (int32).* (server: Move-state sync (state transition)., conf high)
- TLV: ActorMoveState
- fields:
    - `llSyncTime: int64 @0`
    - `stLocation: Vec3`
    - `stRotation: Rot`
    - `stMoveSpeed: Vec3`
    - `iState: int32 @0x30`

### TdrText_ActorMoveState_Wrapper `@0x102f7530` — both
*Text dump: dwNetObjId (uint32) + nested stActorMovestate (FUN_102f70f0).* (server: Move-state sync wrapper., conf high)
- TLV: ActorMoveState
- fields:
    - `dwNetObjId: uint32 @0`
    - `stActorMovestate: struct -- FUN_102f70f0`

### TdrText_ActorStopMoveInner `@0x102f7970` — both
*Text dump: llSyncTime (int64), stLocation (Vec3), stActorRot (Rot).* (server: Stop-move movement sync., conf high)
- TLV: ActorStopMove
- fields:
    - `llSyncTime: int64 @0`
    - `stLocation: Vec3 -- FUN_102713d0`
    - `stActorRot: Rot -- FUN_102717b0`

### TdrText_ActorStopMove_Wrapper `@0x102f7da0` — both
*Text dump: dwNetObjId (uint32) + nested stActorStopmove (FUN_102f7970).* (server: Stop-move sync wrapper., conf high)
- TLV: ActorStopMove
- fields:
    - `dwNetObjId: uint32 @0`
    - `stActorStopmove: struct -- FUN_102f7970`

### TdrText_AnimParametricState `@0x102da6c0` — S2C
*Text dump of an animation parametric-segment state: nested stParametric, anim CRC, segment counter, anim time, transition weight, flags.* (server: Animation sync broadcast; server relays entity anim state., conf high)
- TLV: AnimParametric, EntityAnimState
- fields:
    - `stParametric: struct @? -- FUN_102da100`
    - `dwAnimCRC: uint32 @0x196`
    - `nSegmentCounter: int16 @0x19a`
    - `fAnimTime: float @0x19c`
    - `fTransitionWeight: float @0x1a0`
    - `dwFlags: uint32 @0x1a4`

### TdrText_AoeAttack `@0x102e1690` — C2S
*Text dump: dwAttackerNetID (uint32), nested stPos (FUN_102713d0 = Vec3), fRadius (float).* (server: Area/AOE attack request; server validates radius/position., conf high)
- TLV: AoeAttack, AreaAttack
- fields:
    - `dwAttackerNetID: uint32 @0`
    - `stPos: Vec3 @? -- FUN_102713d0`
    - `fRadius: float @0x10`

### TdrText_AppearEffect `@0x102ee980` — S2C
*Text dump: nested stBaseInfo (FUN_102ee200), iOwnerId (int32), iType (int32), fDuration (float).* (server: Effect/entity appearance with owner and duration; server emits., conf high)
- TLV: AppearEffect, EntityAppear
- fields:
    - `stBaseInfo: struct -- FUN_102ee200`
    - `iOwnerId: int32 @0x42eb`
    - `iType: int32 @0x42ef`
    - `fDuration: float @0x42f3`

### TdrText_AppearList `@0x102eeec0` — S2C
*Text dump: iCount (int32, 0..4) then astAppear array (FUN_102ee200 element).* (server: Batch appear list; cap 4., conf high)
- TLV: AppearList
- fields:
    - `iCount: int32 @0 (0..4)`
    - `astAppear: struct[iCount] -- FUN_102ee200`

### TdrText_AttackeeLayers `@0x102dba20` — C2S
*Text dump: nested stAttackeeEntityPos, nAttackeeLayersCount (int16, <=0x10), then astAttackeeLayers array (FUN_102daca0).* (server: Combat/damage message; server validates layer count (<0 ->-6, >0x10 ->-7)., conf high)
- TLV: AttackeeLayers, DamageInfo
- fields:
    - `stAttackeeEntityPos: struct @? -- FUN_10271b90`
    - `nAttackeeLayersCount: int16 @0x1c (0..0x10)`
    - `astAttackeeLayers: struct[count] -- FUN_102daca0`

### TdrText_BoxTrapPlacement `@0x1030e480` — C2S
*Text dump: iItemID (int32), nested stBoxParam-position (Vec3), szTriggerType string, stPosition (Vec3), stRotation (Rot), dwRelativeID (uint32).* (server: Placeable item/trap deployment request; server spawns object., conf high)
- TLV: BoxParam, TrapPlacement
- fields:
    - `iItemID: int32 @0`
    - `stBoxParam.pos: Vec3 -- FUN_102713d0`
    - `szTriggerType: cstring @0x10`
    - `stPosition: Vec3 -- FUN_1024a1e0`
    - `stRotation: Rot -- FUN_102717b0`
    - `dwRelativeID: uint32 @0x4c`

### TdrText_DamageResult_Wrapper `@0x102ddef0` — S2C
*Text dump wrapper for nested [stDamageResult] (FUN_102dcf40).* (server: Damage result relayed to clients., conf high)
- TLV: DamageResult
- fields:
    - `stDamageResult: struct @0 -- FUN_102dcf40`

### TdrText_Data_Wrapper `@0x10325f50` — both
*Text dump wrapper for nested [stData] (FUN_102b78c0).* (server: Generic single-struct wrapper., conf high)
- fields:
    - `stData: struct @0 -- FUN_102b78c0`

### TdrText_DbidVec3 `@0x1031c1e0` — both
*Text dump: ullDBID (uint64) + nested stVec3 (Vec3).* (server: DBID-keyed position (team member element)., conf high)
- fields:
    - `ullDBID: uint64 @0`
    - `stVec3: Vec3 -- FUN_102713d0`

### TdrText_DbidVec3Dir `@0x10319a30` — both
*Text dump: ullDBID (uint64), stVec3 (Vec3), stDir (Vec3).* (server: DBID-keyed position + direction., conf high)
- fields:
    - `ullDBID: uint64 @0`
    - `stVec3: Vec3 -- FUN_102713d0`
    - `stDir: Vec3 -- FUN_102713d0`

### TdrText_EntInitList `@0x102df990` — S2C
*Text dump: bInitMode (uint8), dwEntNum (uint32, <=0x10), astEntList array (FUN_102df1d0).* (server: Entity spawn/init batch sent to client; count cap 0x10., conf high)
- TLV: EntInitList, EntityListInit
- fields:
    - `bInitMode: uint8 @0`
    - `dwEntNum: uint32 @1 (0..0x10)`
    - `astEntList: struct[dwEntNum] -- FUN_102df1d0`

### TdrText_EntityBuffList `@0x10301f30` — S2C
*Text dump: dwEntityId (uint32), nCount (int16, <=0x40), astBuff array (FUN_103018e0).* (server: Entity buff list sync; count cap 0x40., conf high)
- TLV: EntityBuffList
- fields:
    - `dwEntityId: uint32 @0`
    - `nCount: int16 @4 (0..0x40)`
    - `astBuff: struct[nCount] -- FUN_103018e0`

### TdrText_EntityBuff_Wrapper_A `@0x10302370` — S2C
*Text dump: dwEntityId (uint32) + nested stBuff (FUN_103018e0).* (server: Single buff add/update., conf high)
- TLV: EntityBuff
- fields:
    - `dwEntityId: uint32 @0`
    - `stBuff: struct -- FUN_103018e0`

### TdrText_EntityBuff_Wrapper_B `@0x10302df0` — S2C
*Text dump: dwEntityId (uint32) + nested stBuff (FUN_103018e0). Duplicate of FUN_10302370.* (server: Single buff remove/update (paired message)., conf high)
- TLV: EntityBuff
- fields:
    - `dwEntityId: uint32 @0`
    - `stBuff: struct -- FUN_103018e0`

### TdrText_EntityDiffuseColor `@0x1030fe10` — S2C
*Text dump: dwEntityId (uint32) + nested stDiffuseColor (Vec3/color, FUN_102713d0).* (server: Entity tint/color sync., conf high)
- TLV: EntityDiffuseColor
- fields:
    - `dwEntityId: uint32 @0`
    - `stDiffuseColor: Vec3 -- FUN_102713d0`

### TdrText_EntityFullSyncState `@0x102ea1b0` — S2C
*Text dump of a large entity sync-state struct: sync timestamp, position, three rotations, type/extension bytes, four generic state dwords, AG state, skill id/level, int and float params, attack rotation, sp/sta.* (server: Core entity/actor state broadcast; server must serialize the full field set exactly (skill, states, stamina)., conf high)
- TLV: EntitySyncInfo, ActorSyncState
- fields:
    - `llSyncTime: int64 @0`
    - `stPos: Vec3 -- FUN_102713d0`
    - `stRot: Rot -- FUN_102717b0`
    - `stRot1: Rot`
    - `stRot2: Rot`
    - `bType: uint8 @0x44`
    - `bExtension: uint8 @0x45`
    - `dwState1: uint32 @0x46`
    - `dwState2: uint32 @0x4a`
    - `dwState3: uint32 @0x4e`
    - `dwState4: uint32 @0x52`
    - `dwAGState: uint32 @0x56`
    - `dwSkillID: uint32 @0x5a`
    - `dwSkillLevel: uint32 @0x5e`
    - `iParam: int32 @0x62`
    - `fParamf: float @0x66`
    - `fAttackRotation: float @0x6a`
    - `wSp: uint16 @0x6e`
    - `wSta: uint16 @0x70`

### TdrText_EntityPosRotTarget `@0x1030db50` — both
*Text dump: dwEntityId (uint32), stPosition (Vec3), stRotation (Rot), stTargetPos (Vec3).* (server: Entity aim/target transform sync., conf high)
- TLV: EntityPosRotTarget
- fields:
    - `dwEntityId: uint32 @0`
    - `stPosition: Vec3 -- FUN_102713d0`
    - `stRotation: Rot -- FUN_102717b0`
    - `stTargetPos: Vec3 -- FUN_102713d0`

### TdrText_EntitySync_Wrapper_A `@0x102ea820` — S2C
*Text dump: dwEntityId (uint32) + nested stSyncInfo (FUN_102ea1b0).* (server: Per-entity sync broadcast wrapper., conf high)
- TLV: EntitySyncInfo
- fields:
    - `dwEntityId: uint32 @0`
    - `stSyncInfo: struct -- FUN_102ea1b0`

### TdrText_EntitySync_Wrapper_B `@0x102eabe0` — S2C
*Text dump: dwEntityId (uint32) + nested stSyncInfo (FUN_102ea1b0). Duplicate of FUN_102ea820 (different message context).* (server: Per-entity sync broadcast wrapper., conf high)
- TLV: EntitySyncInfo
- fields:
    - `dwEntityId: uint32 @0`
    - `stSyncInfo: struct -- FUN_102ea1b0`

### TdrText_EntityVariableList `@0x1030df80` — S2C
*Text dump: dwEntityId (uint32) + nested stVariableList (FUN_10273da0).* (server: Entity script variable sync., conf high)
- TLV: EntityVariableList
- fields:
    - `dwEntityId: uint32 @0`
    - `stVariableList: struct -- FUN_10273da0`

### TdrText_FlagLocation `@0x102f5330` — both
*Text dump: iFlag (int32) + nested stLocation (Vec3).* (server: Generic flag + location., conf high)
- fields:
    - `iFlag: int32 @0`
    - `stLocation: Vec3 -- FUN_102713d0`

### TdrText_InstanceEnterInfo `@0x102d0c10` — S2C
*Text dump of an instance-enter/init result struct: error code, nested init info, line id, level enter type.* (server: Server sends instance-enter results; struct layout must match., conf high)
- TLV: InstanceInitInfo
- fields:
    - `iErrNo: int32 @0`
    - `stIntanceInitInfo: struct @? (FUN_102a22d0)`
    - `wLineID: uint16 @0x29`
    - `iLevelEnterType: int32 @0x2b`

### TdrText_ItemBoxList_astItemBoxList `@0x102c7a10` — both
*Text/meta dump of a fixed array field [astItemBoxList] (3 elements), each element serialized via FUN_102c74e0.* (server: Debug/ToString helper; documents a 3-slot item-box array the server must encode., conf high)
- TLV: ItemBoxList
- fields:
    - `astItemBoxList: struct[3] @0 -- element serializer FUN_102c74e0`

### TdrText_ItemList_bItemCount `@0x103240c0` — both
*Text dump: bItemCount (uint8, <=10) then astItemList array (FUN_10323d00).* (server: Item list (id+count pairs); cap 10. Text-dump companion of FUN_10323ec0., conf high)
- TLV: ItemList
- fields:
    - `bItemCount: uint8 @0 (0..10)`
    - `astItemList: struct[bItemCount] -- FUN_10323d00`

### TdrText_ItemsArray_dwCount `@0x102d3cd0` — both
*Text dump: dwCount (uint32, max 4) followed by [astItems] array, element serializer FUN_102d3950.* (server: Server must respect count<=4 bound., conf high)
- TLV: ItemsArray
- fields:
    - `dwCount: uint32 @0 (max 4)`
    - `astItems: struct[dwCount] -- FUN_102d3950`

### TdrText_LockItemList `@0x102d7dc0` — both
*Text dump: dwLockItemNum (uint32) then a fixed 100-entry uint32 lockItemList, a separator, and iReserver.* (server: Item-lock list (auction/trade escrow); server maintains locked-item set., conf high)
- TLV: LockItemList
- fields:
    - `dwLockItemNum: uint32 @0`
    - `lockItemList: uint32[100] @4`
    - `iReserver: int32 @0x194`

### TdrText_MEGridInfo `@0x103257e0` — both
*Text dump: dwMEID (uint32), dwMEGridCount (uint32, <=0x10), astMEGridInfo array (FUN_103253f0).* (server: 'ME' (event/mission grid) data with grid list; count cap 0x10., conf high)
- TLV: MEGridInfo
- fields:
    - `dwMEID: uint32 @0`
    - `dwMEGridCount: uint32 @4 (0..0x10)`
    - `astMEGridInfo: struct[count] -- FUN_103253f0`

### TdrText_MonsterBonePose `@0x102f1300` — S2C
*Text dump: dwMonsterID (uint32), nested stEntityPose (FUN_10271b90), dwBoneCount (uint32, <=100), astBonePose array (FUN_10271b90 per bone).* (server: Monster bone/pose sync; count cap 100., conf high)
- TLV: MonsterBonePose
- fields:
    - `dwMonsterID: uint32 @0`
    - `stEntityPose: struct -- FUN_10271b90`
    - `dwBoneCount: uint32 @0x20 (0..100)`
    - `astBonePose: struct[dwBoneCount] -- FUN_10271b90`

### TdrText_MonsterPartPose `@0x102f1840` — S2C
*Text dump: dwMonsterID (uint32), nested stEntityPose, dwPartCount (uint32, <=0x20), astPartPose array.* (server: Monster part/pose sync; count cap 0x20., conf high)
- TLV: MonsterPartPose
- fields:
    - `dwMonsterID: uint32 @0`
    - `stEntityPose: struct -- FUN_10271b90`
    - `dwPartCount: uint32 @0x20 (0..0x20)`
    - `astPartPose: struct[dwPartCount] -- FUN_10271b90`

### TdrText_MoveInputFull `@0x102f5ea0` — C2S
*Text dump of a movement-input struct: stInputWorldDir (Vec3), llSyncTime (int64), stLocation, stRotation, stMoveSpeed, stAngleSpeed.* (server: Client movement input; server validates/relays., conf high)
- TLV: MoveInput, ActorMoveFull
- fields:
    - `stInputWorldDir: Vec3 -- FUN_102713d0`
    - `llSyncTime: int64 @0xc`
    - `stLocation: Vec3`
    - `stRotation: Rot`
    - `stMoveSpeed: Vec3`
    - `stAngleSpeed: Vec3`

### TdrText_NetIdAttrs `@0x10319600` — S2C
*Text dump: dwNetId (uint32) + nested stAttrs (FUN_102772d0).* (server: Entity attribute block sync., conf high)
- TLV: EntityAttrs
- fields:
    - `dwNetId: uint32 @0`
    - `stAttrs: struct -- FUN_102772d0`

### TdrText_NetIdBuffArray `@0x1031b8b0` — S2C
*Text dump: dwNetId (uint32), iCount (int32, <=0x14), astBuffs array (FUN_1031b4a0).* (server: Buff array per net object; count cap 0x14. Element of team-member array below., conf high)
- TLV: BuffArray
- fields:
    - `dwNetId: uint32 @0`
    - `iCount: int32 @4 (0..0x14)`
    - `astBuffs: struct[iCount] -- FUN_1031b4a0`

### TdrText_NetObjIdList `@0x102dfda0` — S2C
*Text dump: dwEntNum (uint32, <=0x10) then astEntList array whose element is dwNetObjID (uint32).* (server: List of network object ids (e.g. entity despawn); server emits., conf high)
- TLV: NetObjIdList, EntityRemoveList
- fields:
    - `dwEntNum: uint32 @0 (0..0x10)`
    - `astEntList[].dwNetObjID: uint32`

### TdrText_NetObjLocation `@0x102e7880` — S2C
*Text dump: dwNetObjId (uint32) + nested stLocation (FUN_10271b90).* (server: Entity location update., conf high)
- TLV: NetObjLocation
- fields:
    - `dwNetObjId: uint32 @0`
    - `stLocation: struct -- FUN_10271b90`

### TdrText_NetObjPosRot `@0x102e7180` — S2C
*Text dump: dwNetObjId (uint32), nested stPos (Vec3), stRot (rotation, FUN_102717b0).* (server: Entity transform sync., conf high)
- TLV: NetObjPosRot, EntityTransform
- fields:
    - `dwNetObjId: uint32 @0`
    - `stPos: Vec3 -- FUN_102713d0`
    - `stRot: Rot -- FUN_102717b0`

### TdrText_NpcCraftTagItems `@0x10324ba0` — C2S
*Text dump: dwNCraftID (uint32), dwNCraftCreditCnt (uint32), bTagItemCnt (uint8, <=6), astTagItemData array (FUN_10272300).* (server: NPC-craft request with credit count and tagged item data; server validates recipe/credits., conf high)
- TLV: NpcCraftTagItem
- fields:
    - `dwNCraftID: uint32 @0`
    - `dwNCraftCreditCnt: uint32 @4`
    - `bTagItemCnt: uint8 @8 (0..6)`
    - `astTagItemData: struct[bTagItemCnt] -- FUN_10272300`

### TdrText_PlayerAvatar `@0x10320550` — S2C
*Text dump: iPlayerId (int32) + nested stAvatar (FUN_10274670).* (server: Player avatar/appearance data., conf high)
- TLV: Avatar, AvatarBriefInfo
- fields:
    - `iPlayerId: int32 @0`
    - `stAvatar: struct -- FUN_10274670`

### TdrText_RewardGeneralItems `@0x10320100` — S2C
*Text dump: wReason (uint16), wGeneralItemCount (uint16, <=100), astGeneralItem array (FUN_102741f0).* (server: Item reward/grant notification with reason code; count cap 100., conf high)
- TLV: GeneralItemReward
- fields:
    - `wReason: uint16 @0`
    - `wGeneralItemCount: uint16 @2 (0..100)`
    - `astGeneralItem: struct[count] -- FUN_102741f0`

### TdrText_StealItem `@0x103061d0` — S2C
*Text dump: nested [stStealItem] then iItemID (int32).* (server: Monster steal-item result item id., conf high)
- TLV: StealItem
- fields:
    - `stStealItem: (opener)`
    - `iItemID: int32 @0`

### TdrText_StealResultList `@0x103068e0` — S2C
*Text dump: dwEntityId (uint32), nCount (int16, <=8), astResult array (FUN_103064a0).* (server: Batch steal results; count cap 8., conf high)
- TLV: StealResultList
- fields:
    - `dwEntityId: uint32 @0`
    - `nCount: int16 @4 (0..8)`
    - `astResult: struct[nCount] -- FUN_103064a0`

### TdrText_StealResult_Union `@0x103064a0` — S2C
*Text dump: wType (int16) then union [stData] - if wType==0 dumps FUN_103061d0 (steal item), otherwise empty. Type-tagged optional payload.* (server: Steal-attempt result, type-selected payload., conf high)
- TLV: StealResult
- fields:
    - `wType: int16 @0`
    - `stData: union (wType==0 -> StealItem -- FUN_103061d0)`

### TdrText_SysNotify_MsgParam `@0x102d6b40` — S2C
*Text dump of a system-notify message: msg type/area, 64-bit dbid, param count, fixed 5-entry param list, and a variable byte buffer szItems (<=0x200).* (server: System-notification payload the server originates; byte-array size cap 0x200 must be enforced., conf high)
- TLV: SSysNtf, SysNotifyMsgParam
- fields:
    - `dwMsgType: uint32 @0`
    - `dwMsgArea: uint32 @4`
    - `ullDbid: uint64 @8`
    - `bMsgParamNum: uint8 @0x10`
    - `astMsgPramList: struct[5] -- FUN_102d6640`
    - `iSize: int32 @0x16a (0..0x200)`
    - `szItems: uint8[iSize] @0x16e`

### TdrText_SysNotify_MsgParam_NoItems `@0x102d70a0` — S2C
*Text dump variant of the sys-notify struct: msg type/area, dbid, param count, up to 5 param entries; no trailing byte buffer.* (server: Same struct family as FUN_102d6b40 without szItems., conf high)
- TLV: SSysNtf
- fields:
    - `dwMsgType: uint32 @0`
    - `dwMsgArea: uint32 @4`
    - `ullDbid: uint64 @8`
    - `bMsgParamNum: uint8 @0x10`
    - `astMsgPramList: struct[<=5] -- FUN_102d6640`

### TdrText_SysNtf_UnionSelector `@0x102fd270` — S2C
*Union/case text dumper: for (field_id=1) dumps nested [stSSysNtf] via FUN_102d6b40; for (field_id=2) dumps [szSContent] string. Selected by field id / presence.* (server: System-notification union body (structured vs string content); server picks the active case., conf high)
- msgId: 1\|2
- TLV: SSysNtf
- fields:
    - `case 1: stSSysNtf -- FUN_102d6b40`
    - `case 2: szSContent: cstring`

### TdrText_TargetForPlayer `@0x10310c20` — both
*Text dump: dwDstPlayerId (uint32) + nested stTarget (FUN_10310850).* (server: Directed target info., conf high)
- TLV: TargetInfo
- fields:
    - `dwDstPlayerId: uint32 @0`
    - `stTarget: struct -- FUN_10310850`

### TdrText_TeamIdVec3 `@0x10319e30` — both
*Text dump: dwTeamID (uint32) + nested stVec3 (Vec3).* (server: Team-keyed position., conf high)
- fields:
    - `dwTeamID: uint32 @0`
    - `stVec3: Vec3 -- FUN_102713d0`

### TdrText_TeamList `@0x10316ea0` — S2C
*Text dump: dwTotalTeamNum (uint32), dwTeamNum (uint32, <=100), astTeams array (FUN_103123b0).* (server: Team browser/list response; count cap 100., conf high)
- TLV: TeamList
- fields:
    - `dwTotalTeamNum: uint32 @0`
    - `dwTeamNum: uint32 @4 (0..100)`
    - `astTeams: struct[dwTeamNum] -- FUN_103123b0`

### TdrText_TeamMemberBuffArray `@0x1031bd90` — S2C
*Text dump: dwTeamId (uint32), iNum (int32, <=0x10), astMember array whose element is FUN_1031b8b0 (net id + buff array).* (server: Team-wide per-member buff sync; member cap 0x10., conf high)
- TLV: TeamMemberBuffs
- fields:
    - `dwTeamId: uint32 @0`
    - `iNum: int32 @4 (0..0x10)`
    - `astMember: struct[iNum] -- FUN_1031b8b0`

### TdrText_TeamMemberPosList `@0x1031c640` — S2C
*Text dump: iNum (int32, <=0x10), astTeammember array (FUN_1031c1e0 = dbid+vec3).* (server: Team member position broadcast; cap 0x10., conf high)
- TLV: TeamMemberPosList
- fields:
    - `iNum: int32 @0 (0..0x10)`
    - `astTeammember: struct[iNum] -- FUN_1031c1e0`

### TdrText_TeamMemberSlot `@0x10313a00` — S2C
*Text dump: nested stMember (FUN_103117b0) then iSlot (int32).* (server: Team member with slot index., conf high)
- TLV: TeamMember
- fields:
    - `stMember: struct -- FUN_103117b0`
    - `iSlot: int32 @0xf8`

### TdrText_TeamSetting `@0x10317d30` — C2S
*Text dump of team-creation/settings: nested base, team name, target mode/map/level-group, difficulty, member max, free-join, open-recruit, password, min/max level.* (server: Team create/configure request; server validates level bounds, member cap, password., conf high)
- TLV: TeamSetting
- fields:
    - `stTeamSetting-base: struct -- FUN_10317570`
    - `szTeamName: cstring @0x66`
    - `nTargetMode: int16 @0x8e`
    - `dwTargetMap: uint32 @0x90`
    - `dwTargetLevelGrp: uint32 @0x94`
    - `nDifficulty: int16 @0x98`
    - `wMemberMax: uint16 @0x9a`
    - `iFreeJoin: int32 @0x9c`
    - `iOpenRecruit: int32 @0xa0`
    - `szPwd: cstring @0xa4`
    - `wMinLevel: uint16 @0xc4`
    - `wMaxLevel: uint16 @0xc6`

### TdrText_TeamSetting_Wrapper_A `@0x103184f0` — both
*Text dump wrapper for nested [stTeamSetting] base (FUN_10317570).* (server: Team-setting base wrapper., conf high)
- TLV: TeamSetting
- fields:
    - `stTeamSetting: struct @0 -- FUN_10317570`

### TdrText_TeamSetting_Wrapper_B `@0x10318bc0` — both
*Text dump wrapper for nested [stTeamSetting] base (FUN_10317570). Duplicate of FUN_103184f0.* (server: Team-setting base wrapper (paired message)., conf high)
- TLV: TeamSetting
- fields:
    - `stTeamSetting: struct @0 -- FUN_10317570`

### TdrText_Team_Wrapper_A `@0x10312a00` — S2C
*Text dump wrapper for nested [stTeam] (FUN_103123b0).* (server: Team info wrapper., conf high)
- TLV: Team
- fields:
    - `stTeam: struct @0 -- FUN_103123b0`

### TdrText_Team_Wrapper_B `@0x10318ee0` — S2C
*Text dump wrapper for nested [stTeam] (FUN_103123b0). Duplicate of FUN_10312a00.* (server: Team info wrapper (paired message)., conf high)
- TLV: Team
- fields:
    - `stTeam: struct @0 -- FUN_103123b0`

### TdrText_TriggerEnter `@0x102e5810` — C2S
*Text dump: nested stPlayerPos (Vec3, FUN_102713d0) and szTriggerName string.* (server: Player-triggered map trigger; server validates trigger by name/pos., conf high)
- TLV: TriggerEvent
- fields:
    - `stPlayerPos: Vec3 @? -- FUN_102713d0`
    - `szTriggerName: cstring @0xc`

### TdrText_VehicleAmmoList `@0x102fa340` — S2C
*Text dump: dwNetObjId (uint32), nAmmoAmount (int16, <=0x28), astVehicleAmmoList array (FUN_102f9f40).* (server: Vehicle/ballista ammo state; count cap 0x28., conf high)
- TLV: VehicleAmmoList
- fields:
    - `dwNetObjId: uint32 @0`
    - `nAmmoAmount: int16 @4 (0..0x28)`
    - `astVehicleAmmoList: struct[nAmmoAmount] -- FUN_102f9f40`

### TdrUnpack_AttrBlockBig_3x10int `@0x103bfe20` — both
*TdrBuf.h unpack mirror of 103bfb20: read int32 @0, nested (FUN_103bf6a0), int32[10] @0x31/@0x59/@0x81, int32 @0xa9/@0xad/@0xb1, uint8 @0xb5/@0xb6.* (server: Server MUST parse this block., conf medium)
- fields:
    - `i0: int32 @0`
    - `sub: FUN_103bf6a0`
    - `a1: int32[10] @0x31`
    - `a2: int32[10] @0x59`
    - `a3: int32[10] @0x81`
    - `i1: int32 @0xa9`
    - `i2: int32 @0xad`
    - `i3: int32 @0xb1`
    - `b1: uint8 @0xb5`
    - `b2: uint8 @0xb6`

### TdrUnpack_AttrBlock_3int_2x4int_byte `@0x103bf6a0` — both
*TdrBuf.h unpack mirror of 103bf560: read int32 @0/4/8, int32[4] @0xc, int32[4] @0x1c, byte @0x2c (FUN_1010c870 read int32; assert 0x290).* (server: Server MUST parse this fixed attribute block., conf medium)
- fields:
    - `i0: int32 @0`
    - `i1: int32 @4`
    - `i2: int32 @8`
    - `a1: int32[4] @0xc`
    - `a2: int32[4] @0x1c`
    - `b: uint8 @0x2c`

### TdrUnpack_FixedStr1024_103ce080 `@0x103ce080` — both
*TdrBuf.h unpack of a fixed 1024-byte (0x3ff terminator) string field.* (server: Layout only., conf medium)
- fields:
    - `szField: char[1024] @0`

### TdrUnpack_FixedStr128_103a8ec0 `@0x103a8ec0` — both
*TdrBuf.h unpack of a fixed 128-byte (0x7f terminator) string field.* (server: Layout only., conf medium)
- fields:
    - `szField: char[128] @0`

### TdrUnpack_FixedStr128_103b2a70 `@0x103b2a70` — both
*TdrBuf.h unpack of a fixed 128-byte (0x7f terminator) string field.* (server: Layout only., conf medium)
- fields:
    - `szField: char[128] @0`

### TdrUnpack_FixedStr32_10387d40 `@0x10387d40` — both
*TdrBuf.h unpack: reads a fixed 32-byte (0x20) string field (null-terminates at [0x1f]) after skipping 4-byte length/guard, via FUN_1010c2b0/c3c0; then reads trailing int32 @0x20.* (server: Server must emit 32-byte fixed string + int32., conf medium)
- fields:
    - `szField: char[32] @0`
    - `trailing: int32 @0x20`

### TdrUnpack_FixedStr32_10389230 `@0x10389230` — both
*TdrBuf.h unpack of a standalone fixed 32-byte string field (terminator @0x1f).* (server: Layout only., conf medium)
- fields:
    - `szField: char[32] @0`

### TdrUnpack_FixedStr32_1038aff0 `@0x1038aff0` — both
*TdrBuf.h unpack of a fixed 32-byte string field (terminator @0x1f).* (server: Layout only., conf medium)
- fields:
    - `szField: char[32] @0`

### TdrUnpack_FixedStr32_103ccca0 `@0x103ccca0` — both
*TdrBuf.h unpack of a fixed 32-byte string field (term @0x1f).* (server: Layout only., conf medium)
- fields:
    - `szField: char[32] @0`

### TdrUnpack_FixedStr32_103cf530 `@0x103cf530` — both
*TdrBuf.h unpack of a fixed 32-byte string field (term @0x1f).* (server: Layout only., conf medium)
- fields:
    - `szField: char[32] @0`

### TdrUnpack_FixedStr40_1038fd80 `@0x1038fd80` — both
*TdrBuf.h unpack of a fixed 40-byte (0x27 terminator) string field.* (server: Layout only., conf medium)
- fields:
    - `szField: char[40] @0`

### TdrUnpack_MailHead_103ae770 `@0x103ae770` — both
*TdrBuf.h unpack of a mail-head struct: fixed 64-byte string @0 (term @0x3f), 32-byte string @0x40 (term @0x60), int64 @0x61, int32 @0x69, int32 @0x6d, uint8 @0x71.* (server: Layout only; likely stHead used by mail-detail struct., conf medium)
- TLV: mail header (stHead)
- fields:
    - `szA: char[64] @0`
    - `szB: char[32] @0x40`
    - `ull: int64 @0x61`
    - `i1: int32 @0x69`
    - `i2: int32 @0x6d`
    - `b1: uint8 @0x71`

### TdrUnpack_SignUpTeams_max20_a `@0x103a3970` — both
*TdrBuf.h unpack (mirror of 103a3830): read int32 count (cap 20), read team entries (FUN_103a2b70), read trailing byte @0x15f8 and bool @0x15f9.* (server: Server MUST parse and cap teams at 20., conf medium)
- fields:
    - `count: int32 @0 (max 20)`
    - `astTeams[]: struct (elem FUN_103a2b70)`
    - `chBegin: uint8 @0x15f8`
    - `chFin: bool @0x15f9`

### TdrUnpack_Str1024_U8 `@0x1030b590` — S2C
*Binary unpack: length-prefixed string (buf 0x3ff/1024) + trailing uint8.* (server: Large-string (chat/mail body) decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x3ff)`
    - `flag: uint8 @0x400`

### TdrUnpack_Str128Int32_103cd470 `@0x103cd470` — both
*TdrBuf.h unpack: fixed 128-byte string @0 (term @0x7f) then int32 @0x80.* (server: Layout only., conf medium)
- fields:
    - `szField: char[128] @0`
    - `trailing: int32 @0x80`

### TdrUnpack_Str32 `@0x102de0d0` — S2C
*Binary unpack of a length-prefixed string (buffer ~0x1f/0x20 bytes) from TdrBuf.* (server: Low-level string decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x1f)`

### TdrUnpack_Str32_B `@0x102fe0a0` — S2C
*Binary unpack of a length-prefixed string (buf 0x1f).* (server: Low-level string decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x1f)`

### TdrUnpack_Str32_C `@0x1030aef0` — S2C
*Binary unpack of a length-prefixed string (buf 0x1f).* (server: Low-level string decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x1f)`

### TdrUnpack_Str32_Int32Arr32_Str32_a `@0x103ce950` — both
*TdrBuf.h unpack: 32-byte string @0, uint8 count @0x20 (cap 0x20=32), int32[count] @0x21, 32-byte string @0xa1 (term @0xc0).* (server: Server MUST cap the int32 array at 32., conf medium)
- fields:
    - `szA: char[32] @0`
    - `count: uint8 @0x20 (max 32)`
    - `vals: int32[count] @0x21`
    - `szB: char[32] @0xa1`

### TdrUnpack_Str32_Int32Arr32_Str32_b `@0x103cef50` — both
*TdrBuf.h unpack: identical to 0x103ce950 - 32-byte string, uint8 count (cap 32), int32[count], 32-byte string.* (server: Cap 32., conf medium)
- fields:
    - `szA: char[32] @0`
    - `count: uint8 @0x20 (max 32)`
    - `vals: int32[count] @0x21`
    - `szB: char[32] @0xa1`

### TdrUnpack_Str32_U8 `@0x1030d500` — S2C
*Binary unpack: length-prefixed string (buf 0x1f) + trailing uint8.* (server: Low-level string+flag decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x1f)`
    - `flag: uint8 @0x20`

### TdrUnpack_Str_TwoNested `@0x102def10` — S2C
*Binary unpack: string (buf 0x1f) + uint32 + two nested structs (FUN_10277b50, FUN_10277ef0) + trailing uint32.* (server: Element decoder used by FUN_102df750 array., conf medium)
- fields:
    - `szStr: cstring @0`
    - `u32 @0x20`
    - `nested @? -- FUN_10277b50`
    - `nested @? -- FUN_10277ef0`
    - `u32 @0x40`

### TdrUnpack_Str_U32_U32 `@0x103163b0` — S2C
*Binary unpack: length-prefixed string (buf 0x27) + uint32 + uint32.* (server: Named record decoder., conf high)
- fields:
    - `szStr: cstring @0 (buf 0x27)`
    - `u32 @0x28`
    - `u32 @0x2c`

### TdrUnpack_TeamInfoScalars `@0x10317120` — S2C
*Binary unpack of a team-info record: name string + interleaved uint16/uint32 scalars + second name string + trailing uint32/uint16 fields.* (server: Team record decoder; server must produce matching field order., conf medium)
- TLV: TeamInfo
- fields:
    - `szName: cstring @0 (buf 0x27)`
    - `u16 @0x28`
    - `u32 @0x2a`
    - `u32 @0x2e`
    - `u16 @0x32`
    - `u16 @0x34`
    - `u32 @0x36`
    - `u32 @0x3a`
    - `szName2: cstring @0x3e`
    - `u32 @0x5e`
    - `u16 @0x62`
    - `u16 @0x64`

### TdrUnpack_ThreeStr_Flags `@0x102fe450` — S2C
*Binary unpack: three length-delimited strings (offsets 0, 0x24, 0x44) plus uint32 fields and several uint8 flags.* (server: Multi-string record decoder., conf medium)
- fields:
    - `szStr0: cstring @0`
    - `szStr1: cstring @0x24`
    - `szStr2: cstring @0x44`
    - `u32 @0xc4`
    - `u32 @0xc8`
    - `u8 @0xcc`
    - `u8 @0xcd`

### TdrUnpack_TwoStr32_TwoInt32_103ce410 `@0x103ce410` — both
*TdrBuf.h unpack: 32-byte string @0 (term @0x1f), int32 @0x20, int32 @0x24, 32-byte string @0x28 (term @0x47).* (server: Layout only., conf medium)
- fields:
    - `szA: char[32] @0`
    - `i1: int32 @0x20`
    - `i2: int32 @0x24`
    - `szB: char[32] @0x28`

### TdrUnpack_U32Array100 `@0x102d7c70` — S2C
*Binary unpack (read) of a 100-element uint32 array (big-endian) from TdrBuf.* (server: Read side matching FUN_102d7b40; server encoder must produce same 100xu32., conf high)
- fields:
    - `au32[100]: uint32[100] (BE)`

### TdrWrite_FourStrings `@0x102a7a40` — S2C
*Binary writer of four consecutive string fields: str@0 (cap 0x1f), str@0x20 (cap 0x3f), str@0x40 (cap 0x5f), str@0x60 (cap 0x85f).* (server: High - server must emit exact layout., conf high)
- fields:
    - `s1: str[32] @0x0`
    - `s2: str[32] @0x20`
    - `s3: str[32] @0x40`
    - `s4: str[2048] @0x60`

### TdrWrite_GiftData `@0x1024c760` — S2C
*Binary wire writer for a GiftData struct: writes u8 count@0x10 (max 100), then that many u32 giftId entries starting @0x11 (stride 4), then that many u8 giftState entries starting @0x1a1.* (server: High - server must emit this exact TDR layout when sending gift data to client., conf high)
- TLV: TlvGiftData
- fields:
    - `giftNum(count): u8 @0x10 (max 100)`
    - `giftId: u32[100] @0x11`
    - `giftState: u8[100] @0x1a1`
- ⚠ discrepancy: TlvGiftData.md marks giftId (field_id 4) as 'bytes[]'; the writer actually stores giftId as an array of u32 (FUN_1010c190), not raw bytes.

### TdrWrite_IdName_TimePair `@0x102a3cb0` — S2C
*Binary writer: string@0 (cap 0x1f), u64@0x20, u32@0x28, u64@0x2c, u32@0x34.* (server: High - server must emit exact layout., conf high)
- fields:
    - `name: str[32] @0x0`
    - `q1: u64 @0x20`
    - `d1: u32 @0x28`
    - `q2: u64 @0x2c`
    - `d2: u32 @0x34`

### TdrWrite_MaterialList `@0x10272940` — S2C
*Binary writer: u8 count@0 (max 100), then per element three u32 fields at offsets +1,+5,+9 (element stride 0xc).* (server: High - server must emit exact layout., conf high)
- fields:
    - `count: u8 @0x0 (max 100)`
    - `element[i]: {u32 @+1, u32 @+5, u32 @+9} stride 0xc`

### TdrWrite_NamedEntity_Complex `@0x10279cf0` — S2C
*Binary writer: string@0 (cap 0x1f) then u8@0x20, u16@0x21,@0x23,@0x25, then seven u32 @0x27..0x3f, then a fixed u16 array @0x43 (0x2e=46 entries), then u64 @0x9f/0xa3.* (server: High - server must emit exact layout., conf high)
- fields:
    - `name: str[32] @0x0`
    - `b: u8 @0x20`
    - `w1: u16 @0x21`
    - `w2: u16 @0x23`
    - `w3: u16 @0x25`
    - `d0..d6: u32 @0x27,0x2b,0x2f,0x33,0x37,0x3b,0x3f`
    - `warr: u16[46] @0x43`
    - `q: u64 @0x9f`

### TdrWrite_NamedStr127_ThreeShort `@0x102811d0` — S2C
*Binary writer: string@0 (cap 0x7f) then u16@0x80,@0x82,@0x84.* (server: High - server must emit exact layout., conf high)
- fields:
    - `name: str[128] @0x0`
    - `w1: u16 @0x80`
    - `w2: u16 @0x82`
    - `w3: u16 @0x84`

### TdrWrite_NamedStr127_TwoVarU32 `@0x10280cb0` — S2C
*Binary writer: string@0 (cap 0x7f), two varint fields via FUN_10271230, then u32@0x98.* (server: High - server must emit exact layout., conf high)
- fields:
    - `name: str[128] @0x0`
    - `v1: var (FUN_10271230)`
    - `v2: var (FUN_10271230)`
    - `d: u32 @0x98`

### TdrWrite_NamedStr63_ShortArray `@0x102803c0` — S2C
*Binary writer: string@0 (cap 0x3f), u16 count@0x40, then variable content via FUN_1027ff00 (element writer).* (server: High - server must emit exact layout., conf high)
- fields:
    - `name: str[64] @0x0`
    - `count: u16 @0x40`
    - `elements: array (FUN_1027ff00)`

### TdrWrite_Str127Only `@0x10281650` — S2C
*Binary writer of a single string field@0 (cap 0x7f).* (server: High - primitive string field writer., conf high)
- fields:
    - `name: str[128] @0x0`

### TdrWrite_Str2047_A `@0x10286ff0` — S2C
*Binary writer of a single string field@0 (cap 0x7ff).* (server: High - long string field writer (2KB cap)., conf high)
- fields:
    - `str: str[2048] @0x0`

### TdrWrite_Str2047_B `@0x10287370` — S2C
*Binary writer of a single string field@0 (cap 0x7ff). Duplicate codegen of FUN_10286ff0.* (server: High - long string field writer (2KB cap)., conf high)
- fields:
    - `str: str[2048] @0x0`

### TdrWrite_Str2047_C `@0x1028a430` — S2C
*Binary writer of a single string field@0 (cap 0x7ff). Duplicate codegen of FUN_10286ff0.* (server: High - long string field writer (2KB cap)., conf high)
- fields:
    - `str: str[2048] @0x0`

### TdrWrite_Str255_U32_Str `@0x102b0210` — S2C
*Binary writer: string@0 (cap 0xff), u32@0x100, string@0x104 (cap 0x203).* (server: High - server must emit exact layout., conf high)
- fields:
    - `s1: str[256] @0x0`
    - `d: u32 @0x100`
    - `s2: str[256] @0x104`

### TdrWrite_U8 `@0x10271da0` — S2C
*Binary writer of a single u8 from *structPtr into the TdrBuf (bounds-checked, pos++).* (server: High - primitive TDR field writer reused by packet builders., conf high)
- fields:
    - `value: u8 @0x0`

### TdrWrite_U8_String `@0x102b8a00` — S2C
*Binary writer: u8@0, then a length-prefixed string@1 (cap 0x20) with FUN_1010bf70 reserve + FUN_1010c2b0 + FUN_1010c3c0 patch.* (server: High - server must emit exact layout., conf high)
- fields:
    - `b: u8 @0x0`
    - `str: str[32] @0x1`

### TdrWrite_U8_ThreeU32 `@0x102c29e0` — S2C
*Binary writer: u8@0 then three u32 @+1,@+5,@+9.* (server: High - primitive struct writer., conf high)
- fields:
    - `b: u8 @0x0`
    - `d0: u32 @0x1`
    - `d1: u32 @0x5`
    - `d2: u32 @0x9`

### TdrWrite_U8_U32 `@0x10274c30` — S2C
*Binary writer: u8@0 then u32@+1.* (server: High - primitive struct writer., conf high)
- fields:
    - `b: u8 @0x0`
    - `value: u32 @0x1`

### TdrWrite_U8_U32_B `@0x102c0e60` — S2C
*Binary writer: u8@0 then u32@1. Duplicate codegen of FUN_10274c30.* (server: High - primitive struct writer., conf high)
- fields:
    - `b: u8 @0x0`
    - `value: u32 @0x1`

### TdrWrite_U8_U32_TwoUnions `@0x102bf7a0` — S2C
*Binary writer: u8@0, u32@1, then two union bodies dispatched by *param_1 via FUN_102bea90 and FUN_102bed80.* (server: High - server must emit exact layout., conf high)
- fields:
    - `type: u8 @0x0`
    - `d: u32 @0x1`
    - `union1: FUN_102bea90`
    - `union2: FUN_102bed80`

### TdrWrite_U8_U8 `@0x102bc350` — S2C
*Binary writer: u8@0 then u8@1 (FUN_1010c0c0).* (server: High - primitive 2-byte struct writer., conf high)
- fields:
    - `b0: u8 @0x0`
    - `b1: u8 @0x1`

### TdrWrite_U8_Union `@0x102bfbe0` — S2C
*Binary writer: u8 selector@0 then union body via FUN_102bf070 (dispatched by selector).* (server: High - server must emit exact layout., conf high)
- fields:
    - `selector: u8 @0x0`
    - `body: union (FUN_102bf070)`

### TdrWrite_Union_Selector2 `@0x102bf3a0` — S2C
*Binary union writer: writes u8 selector@0; if selector==2 writes union body via FUN_102bd770.* (server: High - server must emit exact layout., conf high)
- fields:
    - `selector: u8 @0x0`
    - `body: union (sel==2 -> FUN_102bd770)`

### TdrWrite_WeaponRecord `@0x1028dc90` — S2C
*Binary writer for WeaponRecord: 20 u32 (weaponRecord) via FUN_1010c190 loop, then a second block of 20 u32 @0x50 (weaponRecordTime) written as manual big-endian 4-byte stores.* (server: High - server must emit both 20-element arrays., conf high)
- TLV: TlvWeaponRecord
- fields:
    - `weaponRecord: u32[20] @0x0`
    - `weaponRecordTime: u32[20] @0x50 (big-endian)`
- ⚠ discrepancy: TlvWeaponRecord.md describes weaponRecord (field_id 2) as a scalar int32; the actual struct is a fixed array of 20 u32 PLUS a second 20xu32 weaponRecordTime array @0x50 that the doc omits entirely.

### Tdr_PackU8LeafField `@10326130` — both
*Generated TDR binary packer that writes a single u8 field from struct into TdrBuf {base@0,pos@4,len@8}; bounds-checked (position<=length assert). Wire type 1 (1B).* (server: Wire primitive: server must emit/consume the same single-byte encoding. Low individual value; part of a larger struct codec., conf high)
- fields:
    - `field0: u8 @0 - single byte payload`

### Tdr_PackU8LeafField_b `@10328010` — both
*Generated TDR packer for a single-u8 struct (identical to FUN_10326130).* (server: Wire primitive; must match server encoding., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_PackU8LeafField_c `@10350b50` — both
*Generated TDR packer for a single-u8 struct (duplicate of FUN_10326130).* (server: Wire primitive., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_PackU8LeafField_d `@10367020` — both
*Generated TDR packer for a single-u8 struct (duplicate of FUN_10326130).* (server: Wire primitive., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_PackU8LeafField_e `@1036cdf0` — both
*Generated TDR packer for a single-u8 struct (duplicate of FUN_10326130).* (server: Wire primitive., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_PackU8LeafField_f `@1036d460` — both
*Generated TDR packer for a single-u8 struct (duplicate of FUN_10326130).* (server: Wire primitive., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_PackU8LeafField_g `@1036da70` — both
*Generated TDR packer for a single-u8 struct (duplicate of FUN_10326130).* (server: Wire primitive., conf high)
- fields:
    - `field0: u8 @0`

### Tdr_Pack_Byte_3xU16_4xU32_ArrCap2000 `@1032cc90` — both
*TDR binary packer: u8@0, u16@1, u16@3, u16@5 (=array count, max 2000), u32@7,@0xb,@0xf,@0x13, then array via FUN_1032bd90 up to 2000 entries.* (server: Large-array struct (cap 2000); server must enforce cap. Field order fixed., conf medium)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u16 @3`
    - `count: u16 @5 (max 2000)`
    - `f: u32 @7`
    - `f: u32 @0xb`
    - `f: u32 @0xf`
    - `f: u32 @0x13`
    - `array[count] via FUN_1032bd90`

### Tdr_Pack_Byte_3xU16_ArrCap1000 `@1034b2c0` — both
*TDR binary packer: u8@0, u16@1, u16@3, u16@5 (count, max 1000), array of item-location structs via FUN_1034aac0.* (server: Server enforces cap 1000., conf medium)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u16 @3`
    - `count: u16 @5 (max 1000)`
    - `array[count] via FUN_1034aac0`

### Tdr_Pack_Byte_3xU16_ArrCap1000_b `@10353f90` — both
*Binary packer duplicate of FUN_1034b2c0 (u8, 3x u16 with count@5 max 1000, array via FUN_1034aac0).* (server: Server enforces cap 1000., conf medium)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u16 @3`
    - `count: u16 @5 (max 1000)`
    - `array[count] via FUN_1034aac0`

### Tdr_Pack_Byte_3xU16_ArrCap2000 `@1032d2c0` — both
*TDR binary packer: u8@0, u16@1, u16@3, u16@5 (count, max 2000), array via FUN_1032bd90. Shorter variant of FUN_1032cc90 (no trailing 4 dwords).* (server: Server enforces cap 2000., conf medium)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u16 @3`
    - `count: u16 @5 (max 2000)`
    - `array[count] via FUN_1032bd90`

### Tdr_Pack_Byte_5xU32_Sub `@1037ed40` — both
*TDR binary packer: u8@0, u32@1,@5,@9,@0xd,@0x11, then nested via FUN_1037c530.* (server: Fixed struct: byte + 5 dwords + nested substruct., conf high)
- fields:
    - `f: u8 @0`
    - `f: u32 @1`
    - `f: u32 @5`
    - `f: u32 @9`
    - `f: u32 @0xd`
    - `f: u32 @0x11`
    - `sub via FUN_1037c530`

### Tdr_Pack_Byte_TwoItemLocs `@1034ae60` — C2S
*TDR binary packer: u8@0, then two nested item-location structs via FUN_1034aac0 (called twice). Binary encoder for the item move op (bOpType + src + dst) dumped by FUN_1034b060.* (server: Server validates item move request (op type + source/dest locations). Relevant., conf high)
- TLV: ItemMoveOp (bOpType/stSrcItemLoc/stDstItemLoc)
- fields:
    - `bOpType: u8 @0`
    - `stSrcItemLoc: struct via FUN_1034aac0`
    - `stDstItemLoc: struct via FUN_1034aac0`

### Tdr_Pack_Byte_U16_U32_U16_2xU32_U8 `@1036e4c0` — both
*TDR binary packer for a 7-field leaf: u8@0, u16(FUN_1010c120)@1, u32(FUN_1010c190)@3, u16@7, u32@9, u32@0xd, u8(FUN_1010c0c0)@0x11.* (server: Fixed mixed-scalar wire struct; server must match order/types., conf high)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u32 @3`
    - `f: u16 @7`
    - `f: u32 @9`
    - `f: u32 @0xd`
    - `f: u8 @0x11`

### Tdr_Pack_Byte_U64_Str8 `@1034b7b0` — both
*TDR binary packer: u8@0, u64(FUN_1010bf70 placeholder + FUN_1010c3c0 patch)@?, char[8] string@1. Byte + 64-bit id + short 8-byte string.* (server: Small mixed struct; string buffer 8 bytes., conf low)
- fields:
    - `f: u8 @0`
    - `ull: u64 (len-prefixed placeholder)`
    - `sz: char[8] @1`

### Tdr_Pack_CountArray64_fixed `@0x101544e0` — S2C
*Fixed variant of FUN_101543d0: elements packed by FUN_10153c40.* (server: Server must emit count + nested-array container., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 count: uint8 @ 0 (max 0x40)`
    - `2 items[]: nested (FUN_10153c40) (tag 0x25)`

### Tdr_Pack_CountArray64_varint `@0x101543d0` — S2C
*TDR pack: field1 count u8@0 (max 0x40), field2 nested array (tag 0x25) of `count` elements packed by FUN_10153ba0 with per-element length framing.* (server: Server must emit a count + nested-array container (max 64 elems)., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 count: uint8 @ 0 (tag 0x11, max 0x40)`
    - `2 items[]: nested (FUN_10153ba0) (tag 0x25)`

### Tdr_Pack_CountU8_ArrCap10 `@1032a460` — both
*TDR binary packer: u8 count@0 (max 10), array via element packer FUN_1032a030. Binary encoder for the [bMoveSwapItemsCnt]/[astMoveSwapItemsData] struct dumped by FUN_1032a660.* (server: Server validates item move/swap requests, cap 10 entries. Relevant (likely C2S bag operation)., conf high)
- TLV: MoveSwapItems (bMoveSwapItemsCnt/astMoveSwapItemsData)
- fields:
    - `bMoveSwapItemsCnt: u8 @0 (max 10)`
    - `astMoveSwapItemsData[] via FUN_1032a030`

### Tdr_Pack_CountU8_ArrCap10_b `@1032a8b0` — both
*Binary packer duplicate of FUN_1032a460 (bMoveSwapItemsCnt u8 max10, astMoveSwapItemsData).* (server: Relevant wire codec., conf high)
- TLV: MoveSwapItems
- fields:
    - `bMoveSwapItemsCnt: u8 @0 (max 10)`
    - `astMoveSwapItemsData[] via FUN_1032a030`

### Tdr_Pack_CountU8_ArrCap64_Elem3xU32 `@1035fa70` — both
*TDR binary packer: u8 count@0 (max 0x40=64), then array where each element = 3x u32 (element size 0xc=12 bytes at +1, +5, +9). Binary encoder for the [bCount]/[astExec] struct dumped by FUN_1035fcb0.* (server: Server encodes an exec/command list (cap 64), each entry = 3 dwords. Relevant., conf high)
- TLV: ExecList (bCount/astExec)
- fields:
    - `bCount: u8 @0 (max 64)`
    - `astExec[count]: {u32,u32,u32} inline @1+i*0xc`

### Tdr_Pack_CountU8_Dword_Byte_ArrCap50 `@10327b00` — both
*TDR binary packer: writes u8 count@0, then u32(FUN_1010c190)@1, byte/enum(FUN_101150a0)@5, u32@6, then loops the array (element packer FUN_10327720) up to 0x32=50 entries. Rejects <0 (-6) and >50 (-7).* (server: Server must honor the 50-element array cap and field order when (de)serializing this struct., conf medium)
- fields:
    - `count: u8 @0 (array length, max 50)`
    - `f: u32 @1`
    - `f: u8/enum @5`
    - `f: u32 @6`
    - `array[count] via FUN_10327720`

### Tdr_Pack_GuildCore_Byte_U8_2xU32_U8_ArrCap10_Sub_U32 `@1033d510` — both
*TDR binary packer for a guild-core struct: u8@0, u8(FUN_101159e0)@1, u32@2, u32@6, u8@10, i32@0xb (array count, max 10), array via FUN_1033c8f0, then nested FUN_1033d090, then u32@0xc7(=199).* (server: Server (de)serializes this guild struct; array cap 10, fixed field order., conf medium)
- TLV: Guild core/detail struct
- fields:
    - `f: u8 @0`
    - `f: u8 @1`
    - `f: u32 @2`
    - `f: u32 @6`
    - `f: u8 @10`
    - `count: i32 @0xb (max 10)`
    - `array[count] via FUN_1033c8f0`
    - `sub via FUN_1033d090`
    - `f: u32 @0xc7`

### Tdr_Pack_ItemList_CountU8_ReasonU16_ArrCap50 `@10328730` — both
*TDR binary packer: u8 count@0 (max 0x32=50), u16(FUN_1010c120) reason@1, then array of item entries (element packer FUN_10328350). This is the binary encoder for the [bItemCount]/[wReason]/[astItemList] struct dumped by FUN_10328950.* (server: Server encodes/validates item-operation result lists (count<=50). Relevant., conf high)
- TLV: ItemList-with-reason (bItemCount/wReason/astItemList)
- fields:
    - `bItemCount: u8 @0 (max 50)`
    - `wReason: u16 @1`
    - `astItemList[bItemCount] via FUN_10328350`

### Tdr_Pack_ItemList_CountU8_ReasonU16_ArrCap50_b `@10328be0` — both
*Binary packer duplicate of FUN_10328730 (bItemCount u8 max50, wReason u16, astItemList).* (server: Relevant wire codec; count<=50., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8 @0 (max 50)`
    - `wReason: u16 @1`
    - `astItemList[] via FUN_10328350`

### Tdr_Pack_ItemList_CountU8_ReasonU16_ArrCap50_c `@10352ab0` — both
*Binary packer duplicate of FUN_10328730 (bItemCount u8 max50, wReason u16, astItemList via FUN_10328350).* (server: Relevant wire codec., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8 @0 (max 50)`
    - `wReason: u16 @1`
    - `astItemList[] via FUN_10328350`

### Tdr_Pack_ItemList_CountU8_ReasonU16_ArrCap50_d `@10352f60` — both
*Binary packer duplicate of FUN_10328730.* (server: Relevant wire codec., conf high)
- TLV: ItemList-with-reason
- fields:
    - `bItemCount: u8 @0 (max 50)`
    - `wReason: u16 @1`
    - `astItemList[] via FUN_10328350`

### Tdr_Pack_SingleU8_a `@0x1015aad0` — S2C
*TDR pack of a single-field struct: write tag 0x11 then one uint8 (*param_1) at buf[pos], advance. Returns -1 on full buffer.* (server: Server must emit a single tagged uint8; trivial one-field struct., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`

### Tdr_Pack_SingleU8_b `@0x1015ab40` — S2C
*Byte-identical sibling of FUN_1015aad0 (single tagged uint8).* (server: Server must emit a single tagged uint8., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`

### Tdr_Pack_Str32_U32 `@10336bd0` — both
*TDR binary packer: char[0x20] length-prefixed string@0 + u32@0x20.* (server: Common name+id pair wire struct; must match., conf high)
- fields:
    - `szName: char[0x20] @0 (len-prefixed)`
    - `f: u32 @0x20`

### Tdr_Pack_Str32_U32_U64_Str256 `@10342aa0` — both
*TDR binary packer: char[0x20] string@0, u32@0x20, u64(FUN_1010bf70 placeholder+FUN_1010c200)@?, second string char[0x100]@0x24 (buffer terminated at 0x123). Name+id + 64-bit + long (256B) string.* (server: Server must match string buffer sizes (32 then 256 bytes)., conf low)
- fields:
    - `szName1: char[0x20] @0`
    - `f: u32 @0x20`
    - `szName2/text: char[0x100] @0x24 (terminator @0x123)`

### Tdr_Pack_Str32_U32_U8 `@1037c050` — both
*TDR binary packer: char[0x20] string@0, u32@0x20, u8/enum(FUN_101150a0)@0x24.* (server: name+id+flag wire struct., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`
    - `f: u8 @0x24`

### Tdr_Pack_Str32_U32_b `@10342710` — both
*TDR binary packer: char[0x20] string@0 + u32@0x20 (duplicate of FUN_10336bd0).* (server: name+id wire pair., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`

### Tdr_Pack_Str32_U32_c `@10343570` — both
*TDR binary packer duplicate of FUN_10336bd0 (char[0x20]+u32).* (server: name+id wire pair., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`

### Tdr_Pack_Str32_U32_d `@10344640` — both
*TDR binary packer duplicate of FUN_10336bd0 (char[0x20]+u32).* (server: name+id wire pair., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`

### Tdr_Pack_Str32_U32_e `@1034c800` — both
*TDR binary packer duplicate of FUN_10336bd0 (char[0x20]+u32).* (server: name+id wire pair., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`

### Tdr_Pack_Str32_U32_f `@1037db60` — both
*TDR binary packer duplicate of FUN_10336bd0 (char[0x20]+u32).* (server: name+id wire pair., conf high)
- fields:
    - `szName: char[0x20] @0`
    - `f: u32 @0x20`

### Tdr_Pack_Str500_U32 `@10345ff0` — both
*TDR binary packer: long char[0x1f4=500] string@0 (terminator cleared at param_1[499]) + u32@0x1f4. Large text field (e.g. guild notice/announcement) + id.* (server: Server must allocate 500-byte string buffer for this field., conf medium)
- fields:
    - `szText: char[0x1f4=500] @0 (len-prefixed)`
    - `f: u32 @0x1f4`

### Tdr_Pack_ThreeName32_fixed `@0x10151330` — S2C
*Duplicate/fixed sibling of FUN_101511a0 (identical body: three 32-byte strings under tags 0x15/0x25/0x35).* (server: Server must emit three capped strings., conf medium)
- TLV: unknown
- fields:
    - `1 name0: char[32] @ 0 (tag 0x15)`
    - `2 name1: char[32] @ 0x20 (tag 0x25)`
    - `3 name2: char[32] @ 0x40 (tag 0x35)`

### Tdr_Pack_ThreeName32_varint `@0x101511a0` — S2C
*TDR pack of a struct with three 32-byte fixed strings: strnlen(<0x20) then FUN_1010c2b0 (write bytes) under tags 0x15/0x25/0x35 with length-prefix framing (FUN_1010bf70/FUN_1010c3c0). name0@0, name1@0x20, name2@0x40.* (server: Server must emit three NUL-terminated strings each capped at 31 chars; identity unresolved (likely a names/titles struct)., conf medium)
- TLV: unknown
- fields:
    - `1 name0: char[32] @ 0 (tag 0x15, len-delim, max 31)`
    - `2 name1: char[32] @ 0x20 (tag 0x25, max 31)`
    - `3 name2: char[32] @ 0x40 (tag 0x35, max 31)`

### Tdr_Pack_TwoStr32_TwoU32 `@1037b240` — both
*TDR binary packer: char[0x20] string@0, char[0x20] string@0x20, u32@0x40, u32@0x44. Two 32-byte name fields + two dwords.* (server: Server must produce two 32-byte length-prefixed strings + two dwords in order., conf medium)
- fields:
    - `szName1: char[0x20] @0`
    - `szName2: char[0x20] @0x20`
    - `f: u32 @0x40`
    - `f: u32 @0x44`

### Tdr_Pack_TwoStr_TwoU64_TwoU32 `@1032eaf0` — both
*TDR binary packer: fixed char[0x20] string@0 (length-prefixed, patched via FUN_1010c3c0), u64(FUN_1010c200)@0x20, second char[0x20] string@0x28, u64@0x48, u32@0x50, u32@0x54. Two 32-byte name fields + two 64-bit ids + two dwords.* (server: Server must produce identical length-prefixed strings (32-byte buffers) and 64-bit ids., conf medium)
- fields:
    - `szName1: char[0x20] @0 (len-prefixed)`
    - `ull1: u64 @0x20`
    - `szName2: char[0x20] @0x28 (len-prefixed)`
    - `ull2: u64 @0x48`
    - `f: u32 @0x50`
    - `f: u32 @0x54`

### Tdr_Pack_U32_U64_U16BE `@1036aef0` — both
*TDR binary packer: u32(FUN_1010c190)@0, u64(FUN_1010c200)@1/@2, then u16@3 written BIG-ENDIAN (2 bytes high-first). Mixed TDR + big-endian trailing word.* (server: Server must match: dword + int64 + big-endian word., conf medium)
- fields:
    - `f: u32 @0`
    - `ull: u64 @1..@2`
    - `w: u16 @3 (big-endian)`

### Tdr_Pack_U8Count_U32Array16_fixed `@0x10154ee0` — S2C
*Fixed variant of FUN_10154e00: array elems via FUN_1010c190 (fixed 4-byte).* (server: Server must emit count + u32[16] array., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint8 @ 0 (max 16)`
    - `2 values: int32[<=16] @ 1 (tag 0x25, fixed elems)`

### Tdr_Pack_U8Count_U32Array16_varint `@0x10154e00` — S2C
*TDR pack: field1 count u8@0 (max 0x10), field2 uint32 scalar array (tag 0x25) of `count` elems via FUN_1010c560 (varint) at +1 stride 4.* (server: Server must emit count + u32[16] array; identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint8 @ 0 (tag 0x11, max 16)`
    - `2 values: uint32[<=16] @ 1 (tag 0x25 scalar array, varint elems)`

### Tdr_Pack_U8U32U32_fixed `@0x10144280` — S2C
*Fixed variant of FUN_101441e0: tag 0x11 u8, tag 0x23 int32, tag 0x33 int32 (FUN_1010c190).* (server: Server must emit this triple., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: int32 @ 1 (tag 0x23 fixed)`
    - `3 f3: int32 @ 5 (tag 0x33 fixed)`

### Tdr_Pack_U8U32U32_varint `@0x101441e0` — S2C
*TDR pack of {uint8@0, uint32@1, uint32@5}: tag 0x11 u8, tag 0x20 u32 varint, tag 0x30 u32 varint (FUN_1010c560).* (server: Server must emit this triple; identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: uint32 @ 1 (tag 0x20 varint)`
    - `3 f3: uint32 @ 5 (tag 0x30 varint)`

### Tdr_Pack_U8U32_fixed `@0x10143b40` — S2C
*Fixed variant of FUN_10143ac0: tag 0x11 u8, tag 0x23 int32 fixed (FUN_1010c190).* (server: Server must emit this pair struct., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: int32 @ 1 (tag 0x23 fixed 4-byte)`

### Tdr_Pack_U8U32_varint `@0x10143ac0` — S2C
*TDR pack of {uint8@0, uint32@1}: tag 0x11 u8, tag 0x20 u32 as VARINT (FUN_1010c560).* (server: Server must emit this small pair struct; identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: uint32 @ 1 (tag 0x20 varint)`

### Tdr_Pack_U8U8U32_fixed `@0x10153c40` — S2C
*Fixed variant of FUN_10153ba0: field4 via tag 0x43 int32 (FUN_1010c190).* (server: Server must emit this element., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `3 f3: uint8 @ 1 (tag 0x31)`
    - `4 f4: int32 @ 2 (tag 0x43 fixed)`

### Tdr_Pack_U8U8U32_varint `@0x10153ba0` — S2C
*TDR pack of {uint8@0, uint8@1, uint32@2}: tag 0x11 u8, tag 0x31 u8 (FUN_1010c0c0, field3 wire1), tag 0x40 u32 varint (FUN_1010c5f0, field4). Note field2 (id 2) is skipped.* (server: Server must emit this element; likely the counterData element (see FUN_10154af0)., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `3 f3: uint8 @ 1 (tag 0x31)`
    - `4 f4: uint32 @ 2 (tag 0x40 varint)`

### Tdr_Pack_U8U8_a `@0x1015f980` — S2C
*TDR pack of {uint8@0, uint8@1}: tag 0x11 u8, tag 0x21 u8 (FUN_1010c0c0).* (server: Server must emit this small pair; identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: uint8 @ 1 (tag 0x21)`

### Tdr_Pack_U8U8_b `@0x1015fa00` — S2C
*Byte-identical sibling of FUN_1015f980 ({uint8, uint8} pack).* (server: Server must emit this pair., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0 (tag 0x11)`
    - `2 f2: uint8 @ 1 (tag 0x21)`

### Tdr_Pack_U8_U16_Leaf `@1032e3b0` — both
*TDR binary packer for a 2-field leaf struct: u8@0 + u16(FUN_1010c120)@1.* (server: Small wire struct; must match., conf high)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`

### Tdr_Pack_U8_U16_U8_Leaf `@1032e730` — both
*TDR binary packer: u8@0 + u16@1 + u8/enum(FUN_101150a0)@3.* (server: Small wire struct., conf high)
- fields:
    - `f: u8 @0`
    - `f: u16 @1`
    - `f: u8/enum @3`

### Tdr_ReadStruct_ByteByteInt_A `@10176d90` — both
*TDR read (variant A) of {uint8@+0, uint8@+1, int32@+2 (FUN_1010cbd0 varint)}. Presence flags@+6.* (server: Server decode path., conf medium)
- TLV: unknown (read sibling of FUN_10176b80)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `field 3: int32 @ +2`
    - `presence_flags: uint32 @ +6`

### Tdr_ReadStruct_ByteByteInt_B `@10176ee0` — both
*Variant B of FUN_10176d90 (int32 via FUN_1010c870).* (server: Same as FUN_10176d90., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `field 3: int32 @ +2`
    - `presence_flags: uint32 @ +6`

### Tdr_ReadStruct_IntByteInt_A `@1016e6a0` — both
*TDR read (variant A) of {int32@+0 (field1, FUN_1010cbd0 varint), uint8@+4 (field2), int32@+5 (field3, FUN_1010ccb0)}. Presence flags@+9.* (server: Server decode path., conf medium)
- TLV: unknown (int/byte/int record)
- fields:
    - `field 1: int32 @ +0 (tag wire0)`
    - `field 2: uint8 @ +4 (wire1)`
    - `field 3: int32 @ +5`
    - `presence_flags: uint32 @ +9`

### Tdr_ReadStruct_IntByteInt_B `@1016e7b0` — both
*Variant B of FUN_1016e6a0 (fields read via FUN_1010c870).* (server: Same as FUN_1016e6a0., conf medium)
- TLV: unknown
- fields:
    - `field 1: int32 @ +0`
    - `field 2: uint8 @ +4`
    - `field 3: int32 @ +5`
    - `presence_flags: uint32 @ +9`

### Tdr_ReadStruct_IntByte_A `@10171c90` — both
*TDR read (variant A) of {int32@+0 (field1, FUN_1010cbd0), uint8@+4 (field2)}. Presence flags@+5.* (server: Server decode path., conf medium)
- TLV: unknown (int+byte record)
- fields:
    - `field 1: int32 @ +0`
    - `field 2: uint8 @ +4`
    - `presence_flags: uint32 @ +5`

### Tdr_ReadStruct_IntByte_B `@10171d80` — both
*Variant B of FUN_10171c90 (field1 via FUN_1010c870).* (server: Same as FUN_10171c90., conf medium)
- TLV: unknown
- fields:
    - `field 1: int32 @ +0`
    - `field 2: uint8 @ +4`
    - `presence_flags: uint32 @ +5`

### Tdr_ReadStruct_ThreeUint16 `@10164240` — both
*TDR deserializer for a struct of three 16-bit fields. Switch cases field_id 2/3/4 (wire 2 = 2-byte); each reads 2 big-endian bytes into +0/+1, +2/+3, +4/+5. Presence flags at +6.* (server: Server must decode; note 2-byte fields are stored byte-swapped., conf medium)
- TLV: unknown (3x uint16 struct)
- fields:
    - `field 2: uint16 @ +0 (bytes read hi@+1,lo@+0)`
    - `field 3: uint16 @ +2`
    - `field 4: uint16 @ +4`
    - `presence_flags: uint32 @ +6`

### Tdr_ReadStruct_TwoBytes_A `@1015fb50` — both
*TDR deserializer for a 2-field struct of two uint8 values. Loops FUN_1010ccb0 reading tags; case field_id 1 -> byte@+0, field_id 2 -> byte@+1; presence flags at +2. Unknown fields skipped via FUN_1010d4f0.* (server: Server must decode this small struct when receiving it; identical to FUN_1015fc70., conf medium)
- TLV: unknown (generic 2-byte pair struct)
- fields:
    - `field 1: uint8 @ +0 — byte value 0`
    - `field 2: uint8 @ +1 — byte value 1`
    - `presence_flags: uint32 @ +2`

### Tdr_ReadStruct_TwoBytes_A2 `@101669b0` — both
*TDR read of {uint8@+0 (field1), uint8@+1 (field2)}, presence flags@+2. Read sibling of the FUN_101667e0 writers.* (server: Server decode path., conf medium)
- TLV: unknown (2-byte struct)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `presence_flags: uint32 @ +2`

### Tdr_ReadStruct_TwoBytes_B `@1015fc70` — both
*Byte-identical duplicate of FUN_1015fb50: TDR read of {uint8@+0, uint8@+1}, presence flags@+2.* (server: Same as FUN_1015fb50., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `presence_flags: uint32 @ +2`

### Tdr_ReadStruct_TwoBytes_B2 `@10166ad0` — both
*Byte-identical duplicate of FUN_101669b0.* (server: Same as FUN_101669b0., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `presence_flags: uint32 @ +2`

### Tdr_ReadVarint64_ZigZag `@101600d0` — both
*Low-level TDR primitive: reads a LEB128 varint (up to 64-bit), overflow-checked, then ZigZag-decodes into param_2[0..1]. Shared read primitive, not a struct.* (server: Core decoding primitive the server's TDR reader must replicate., conf high)
- fields:
    - `output: int64 -> param_2[0]=lo, param_2[1]=hi (ZigZag-decoded)`

### Tdr_Unpack_CountArray64_varint `@0x101546c0` — S2C
*TDR unpack: field1 u8@0 (count), field2 nested array (each element len-delim, decoded by FUN_10153db0) up to 0x40; writes element count to *param_1. Presence @ 0x281.* (server: Counterpart of FUN_101543d0., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 count: uint8 @ 0`
    - `2 items[]: nested (FUN_10153db0), max 0x40`

### Tdr_Unpack_CountBlob1286_fixed `@0x1013c510` — S2C
*Fixed-4-byte-length variant of FUN_1013c390: field1 count read via FUN_1010c870 (fixed u32), byte blob into +4 capped 0x506.* (server: Server must produce a matching count+blob field., conf medium)
- TLV: unknown
- fields:
    - `1 count/len: uint32 @ 0 (fixed 4-byte)`
    - `2 data: uint8[<=0x506] @ 4 (len-delim)`

### Tdr_Unpack_CountBlob1286_varint `@0x1013c390` — S2C
*TDR unpack of {count, opaque byte blob}: field1 count (varint via FUN_1010ccb0 into *param_1), field2 len-delim byte array copied byte-by-byte into +4, capped at 0x506 (1286) bytes; sets *param_1 to bytes read. Presence bitmask @ 0x50a.* (server: Server must produce a matching count+blob field; struct identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 count/len: uint32 @ 0 (varint)`
    - `2 data: uint8[<=0x506] @ 4 (len-delim, 1286-byte cap)`

### Tdr_Unpack_NestedU16U16 `@0x10144bc0` — S2C
*TDR unpack: field1 nested u32/struct via FUN_1010c870 @0; field2 2-byte value @4 (bytes swapped: +4 hi,+5 lo); field3 2-byte value @6. Presence @ +8. Fields 2/3 read as raw 2-byte big-endian pairs (wire type 3 in switch).* (server: Server must emit matching {u32, u16, u16}; note byte-swapped 2-byte reads., conf low)
- TLV: unknown
- fields:
    - `1 f1: uint32 @ 0 (nested/fixed)`
    - `2 f2: uint16 @ 4 (2-byte, stored [hi@4,lo@5])`
    - `3 f3: uint16 @ 6 (2-byte, stored [hi@6,lo@7])`

### Tdr_Unpack_SingleU8_a `@0x1015ac80` — S2C
*TDR unpack of a single-field struct: reads field1 u8 @0. Presence @ +1. Unknown fields skipped (FUN_1010d4f0).* (server: Counterpart reader for single-u8 struct., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`

### Tdr_Unpack_SingleU8_b `@0x1015ad40` — S2C
*Byte-identical sibling of FUN_1015ac80 (reads single u8 @0).* (server: Counterpart reader for single-u8 struct., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`

### Tdr_Unpack_U16U32 `@0x10159fb0` — S2C
*TDR unpack: field1 2-byte value @0 (bytes [hi@0,lo@1], wire1), field3 u32 @2 (FUN_1010c870, wire3). Presence @ +6. field_id 2 absent.* (server: Server must emit {u16, u32}; identity unresolved., conf low)
- TLV: unknown
- fields:
    - `1 f1: uint16 @ 0 (2-byte, [hi,lo])`
    - `3 f3: uint32 @ 2 (fixed 4-byte)`

### Tdr_Unpack_U16_ByteArr10_U16Arr10_fixed `@0x10145630` — S2C
*Fixed variant of FUN_10145430: field1 u16 via FUN_1010c800, field3 elems via FUN_1010c870 (fixed).* (server: Counterpart fixed reader., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint16 @ 0 (fixed)`
    - `2 bytes: uint8[<=10] @ 2`
    - `3 words: uint16[<=10] @ 6 (fixed elems)`

### Tdr_Unpack_U16_ByteArr10_U16Arr10_varint `@0x10145430` — S2C
*TDR unpack: field1 u16 @0 (FUN_1010ca10); field2 byte array @2 (len-delim, count into *param_1, max 10); field3 u16 array @6 (element via FUN_1010ccb0 varint, wire3+len prefix, max 10). Presence @ 0x1a (as shorts).* (server: Server must emit {u16 count, uint8[10], uint16[10]} array struct., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint16 @ 0 (varint)`
    - `2 bytes: uint8[<=10] @ 2 (len-delim scalar array)`
    - `3 words: uint16[<=10] @ 6 (len-delim scalar array, varint elems)`

### Tdr_Unpack_U32U8_fixed `@0x1015a690` — S2C
*Fixed variant of FUN_1015a5a0: field1 via FUN_1010c870 (fixed 4-byte).* (server: Server must emit {u32, u8}., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint32 @ 0 (fixed)`
    - `2 f2: uint8 @ 4`

### Tdr_Unpack_U32U8_varint `@0x1015a5a0` — S2C
*TDR unpack: field1 u32 @0 (FUN_1010cbd0 varint), field2 u8 @4. Presence @ +5.* (server: Server must emit {u32, u8}; identity unresolved., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint32 @ 0 (varint)`
    - `2 f2: uint8 @ 4`

### Tdr_Unpack_U8Count_U32Array16_fixed `@0x10155200` — S2C
*Fixed variant of FUN_10155090: array elems via FUN_1010c870 (fixed 4-byte).* (server: Counterpart of FUN_10154ee0., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint8 @ 0`
    - `2 values: uint32[<=16] @ 1 (fixed elems)`

### Tdr_Unpack_U8Count_U32Array16_varint `@0x10155090` — S2C
*TDR unpack: field1 u8@0 count, field2 uint32 array @1 (elems via FUN_1010cbd0 varint, max 0x10). Presence @ 0x41.* (server: Counterpart of FUN_10154e00., conf medium)
- TLV: unknown
- fields:
    - `1 count: uint8 @ 0`
    - `2 values: uint32[<=16] @ 1 (varint elems)`

### Tdr_Unpack_U8U32U32_fixed `@0x10144500` — S2C
*Fixed variant of FUN_101443f0: field2/field3 via FUN_1010c870 (fixed 4-byte).* (server: Counterpart of FUN_10144280., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`
    - `2 f2: uint32 @ 1 (fixed)`
    - `3 f3: uint32 @ 5 (fixed)`

### Tdr_Unpack_U8U32U32_varint `@0x101443f0` — S2C
*TDR unpack of {uint8@0, uint32@1, uint32@5}: field2/field3 via FUN_1010cbd0 (varint). Presence @ +9.* (server: Counterpart of FUN_101441e0., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`
    - `2 f2: uint32 @ 1 (varint)`
    - `3 f3: uint32 @ 5 (varint)`

### Tdr_Unpack_U8U32_fixed `@0x10143d80` — S2C
*Fixed variant of FUN_10143c90: field2 u32 via FUN_1010c870 (fixed 4-byte).* (server: Server-side counterpart of FUN_10143b40., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`
    - `2 f2: uint32 @ 1 (fixed 4-byte)`

### Tdr_Unpack_U8U32_varint `@0x10143c90` — S2C
*TDR unpack of {uint8@0, uint32@1}: field1 u8, field2 u32 via FUN_1010cbd0 (varint). Presence bitmask @ +5.* (server: Server-side counterpart of FUN_10143ac0., conf medium)
- TLV: unknown
- fields:
    - `1 f1: uint8 @ 0`
    - `2 f2: uint32 @ 1 (varint)`

### Tdr_Unpack_U8U8U32_fixed `@0x10153f00` — S2C
*Fixed variant of FUN_10153db0 (doc sub_10153F00, counterData element): field4 via FUN_1010c870 (fixed 4-byte).* (server: Counterpart of FUN_10153c40; TlvCounterData.counterData element., conf high)
- TLV: TlvCounterData
- fields:
    - `1 f1: uint8 @ 0`
    - `3 f3: uint8 @ 1`
    - `4 f4: uint32 @ 2 (fixed)`
- ⚠ discrepancy: TlvCounterData.md field2 'counterData -> sub_10153F00': this IS that element reader; element has fields at ids 1,3,4 (id2 gap), types uint8/uint8/uint32.

### Tdr_Unpack_U8U8U32_varint `@0x10153db0` — S2C
*TDR unpack of {uint8@0, uint8@1, uint32@2}: field1 u8, field3 u8, field4 u32 via FUN_1010ccb0 (varint). Presence @ +6. field_id 2 absent.* (server: Counterpart of FUN_10153ba0., conf medium)
- TLV: TlvCounterData
- fields:
    - `1 f1: uint8 @ 0`
    - `3 f3: uint8 @ 1`
    - `4 f4: uint32 @ 2 (varint)`

### Tdr_WriteStruct_ByteByteInt_A `@10176b80` — both
*TDR serializer (variant A) for {uint8@+0 (field1, tag 0x11), uint8@+1 (field2, tag 0x21 via FUN_101150a0), int32@+2 (field3, tag 0x30)}.* (server: Server encode path., conf medium)
- TLV: unknown (byte/byte/int record); read sibling FUN_10176d90
- fields:
    - `field 1: uint8 @ +0 (tag 0x11)`
    - `field 2: uint8 @ +1 (tag 0x21)`
    - `field 3: int32 @ +2 (tag 0x30)`

### Tdr_WriteStruct_ByteByteInt_B `@10176c20` — both
*Variant B of FUN_10176b80: field3 int32 tag 0x33 (wire3 fixed) via FUN_1010c190.* (server: Canonical wire form., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`
    - `field 3: int32 @ +2 (tag 0x33)`

### Tdr_WriteStruct_ByteCount3IntArrays_A `@101798b0` — both
*TDR serializer (variant A) for a struct: field1 uint8@+0 (tag 0x11), field2 count int32@+4 (tag 0x20), then three parallel int32 arrays of length count (max 5) at +5 (tag 0x45), +0x19 (tag 0x55), +0x2d (tag 0x65), each length-delimited.* (server: Server encode path for this nested record., conf medium)
- TLV: unknown (element of FUN_1017b1c0 field10 array)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +4 (max 5)`
    - `field 4: int32[count] @ +5 (tag 0x45)`
    - `field 5: int32[count] @ +0x19 (tag 0x55)`
    - `field 6: int32[count] @ +0x2d (tag 0x65)`

### Tdr_WriteStruct_ByteCount3IntArrays_B `@10179ae0` — both
*Variant B of FUN_101798b0 (int writes via FUN_1010c190, field2 tag 0x23 fixed).* (server: Canonical wire form., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +4`
    - `3x int32[count] arrays @ +5/+0x19/+0x2d`

### Tdr_WriteStruct_ByteCountIntByteIntArrays_A `@101863e0` — both
*TDR serializer (variant A): field1 uint8@+0 (tag 0x11), field2 count int32@+1 (tag 0x20, max 100), field3 int32[count]@+5 (tag 0x35), field4 uint8[count]@+0x195 (tag 0x45), field5 int32[count]@+0x1f9 (tag 0x55). All arrays length-delimited.* (server: Server encode path for this large record., conf medium)
- TLV: unknown (large parallel-array record, up to 100 entries)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +1 (max 100)`
    - `field 3: int32[count] @ +5 (tag 0x35)`
    - `field 4: uint8[count] @ +0x195 (tag 0x45)`
    - `field 5: int32[count] @ +0x1f9 (tag 0x55)`

### Tdr_WriteStruct_ByteCountIntByteIntArrays_B `@10186600` — both
*Variant B of FUN_101863e0 (int writes via FUN_1010c190, field2 tag 0x23 fixed).* (server: Canonical wire form., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +1 (max 100)`
    - `field 3: int32[count] @ +5`
    - `field 4: uint8[count] @ +0x195`
    - `field 5: int32[count] @ +0x1f9`

### Tdr_WriteStruct_ByteCountSubArray_A `@1017c810` — both
*TDR serializer (variant A): field1 uint8@+0 (tag 0x11), field2 count int32@+1 (tag 0x20, max 5), field3 array[count] of sub-struct FUN_1017c1a0 (tag 0x35).* (server: Server encode path., conf medium)
- TLV: unknown (element of trace record)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +1 (max 5)`
    - `field 3: sub_1017c1a0[count] @ +5 (tag 0x35)`

### Tdr_WriteStruct_ByteCountSubArray_B `@1017c960` — both
*Variant B of FUN_1017c810 (field2 tag 0x23 fixed, element via FUN_1017c200).* (server: Canonical wire form., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +1`
    - `field 3: sub_1017c200[count] @ +5`

### Tdr_WriteStruct_Complex_A `@1017b1c0` — both
*TDR serializer (variant A) for a composite struct: field5 uint8@+0 (tag 0x51), field6 int64@+1 (tag 0x60, param_1+1/+5), field7 uint8[count]@+9 (tag 0x75), field8 int32[count]@+0x11 (tag 0x85), field9 uint8 count@+0x31 (tag 0x91, max 10), field10 array of sub-struct FUN_101798b0 @ (tag 0xa5).* (server: Server encode path for this composite record., conf medium)
- TLV: unknown (complex activity/record struct)
- fields:
    - `field 5: uint8 @ +0 (count for arrays, max 8)`
    - `field 6: int64 @ +1 (tag 0x60)`
    - `field 7: uint8[cnt] @ +9 (tag 0x75)`
    - `field 8: int32[cnt] @ +0x11 (tag 0x85)`
    - `field 9: uint8 @ +0x31 (tag 0x91, max 10)`
    - `field 10: sub_101798b0[] @ (tag 0xa5)`

### Tdr_WriteStruct_Complex_B `@1017b400` — both
*Variant B of FUN_1017b1c0 (int64 via FUN_1010c200 tag 0x64, ints via FUN_1010c190, sub-struct via FUN_10179ae0).* (server: Canonical wire form., conf medium)
- TLV: unknown
- fields:
    - `field 5: uint8 @ +0`
    - `field 6: int64 @ +1 (tag 0x64)`
    - `field 7: uint8[cnt] @ +9`
    - `field 8: int32[cnt] @ +0x11`
    - `field 9: uint8 @ +0x31`
    - `field 10: sub_10179ae0[]`

### Tdr_WriteStruct_TwoBytes_A `@101667e0` — both
*TDR serializer (variant A) for a 2-field struct: field1 uint8@+0 (tag 0x11), field2 uint8@+1 via FUN_1010c0c0 (tag 0x21).* (server: Server must encode when sending this struct., conf medium)
- TLV: unknown (2-byte struct; read sibling FUN_101669b0)
- fields:
    - `field 1: uint8 @ +0 (tag 0x11)`
    - `field 2: uint8 @ +1 (tag 0x21)`

### Tdr_WriteStruct_TwoBytes_B `@10166860` — both
*Byte-identical duplicate of FUN_101667e0 (write {uint8@+0, uint8@+1}).* (server: Same as FUN_101667e0., conf medium)
- TLV: unknown
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: uint8 @ +1`

### Tdr_WriteVarint64_ZigZag `@10160010` — both
*Low-level TDR primitive: encodes a signed 64-bit value (param_2 low, param_3 high) as ZigZag then writes it LEB128/varint into the TdrBuf, advancing position. Not a struct serializer — a shared write primitive.* (server: Core encoding primitive the server's TDR writer must replicate exactly., conf high)
- fields:
    - `input: int64 (lo=param_2, hi=param_3) — ZigZag+LEB128 encoded`

### TlvActionPointData_DebugFormat `@101664d0` — both
*TDR text/DebugFormat dumper for TlvActionPointData. Emits '[actionPoint]' as I64 (2 dwords), '[nextResetTime]', '[actionPointFlags]'.* (server: Not needed on server (debug-only), but authoritative for field names/layout., conf high)
- TLV: TlvActionPointData
- fields:
    - `actionPoint: int64 @ +0`
    - `nextResetTime: int32/int64 @ +8`
    - `actionPointFlags: int32 @ +0xc`

### TlvActionPointData_Write_FixedB `@10165f90` — both
*TDR serializer (variant B, fixed-width) for TlvActionPointData: field2 actionPoint (0x25 len-delim 2xint32), field3 nextResetTime (0x33 wire3 4-byte), field4 actionPointFlags (0x43 wire3 4-byte).* (server: Canonical wire form (fixed 4-byte); server should match this., conf high)
- TLV: TlvActionPointData
- fields:
    - `field 2: int32[2] actionPoint @ +0 (tag 0x25)`
    - `field 3: int32 nextResetTime @ +8 (tag 0x33, wire3)`
    - `field 4: int32 actionPointFlags @ +0xc (tag 0x43, wire3)`
- ⚠ discrepancy: Doc mislabels: it assigns nextResetTime to field4 (tag 0x43) which is really actionPointFlags, and omits the actual field3 nextResetTime and the flags field name.

### TlvActionPointData_Write_VarintA `@10165e70` — both
*TDR serializer (variant A, varint) for TlvActionPointData. Writes field2 actionPoint as a length-delimited packed pair of int32 (the 8-byte actionPoint), field3 nextResetTime, field4 actionPointFlags.* (server: Server must produce this exact layout when sending action-point data., conf high)
- TLV: TlvActionPointData
- fields:
    - `field 2: int32[2]/int64 actionPoint @ +0 (tag 0x25, len-delim)`
    - `field 3: int32 nextResetTime @ +8 (tag 0x30, wire0 varint)`
    - `field 4: int32 actionPointFlags @ +0xc (tag 0x40, wire0 varint)`
- ⚠ discrepancy: TLV doc TlvActionPointData (read @0x101662D0) lists only 2 fields (actionPoint field2 int32 tag0x23, nextResetTime field4 tag0x43) and DROPS actionPointFlags. Actual code has 3 fields: nextResetTime is field 3 (not 4) and actionPointFlags is field 4; actionPoint is a packed 2xint32 (8 bytes), not a scalar int32.

### TlvAlarmTimeData_DebugPrint `@0x10157f00` — unknown
*TdrBufUtil printer for TlvAlarmTimeData: [daily][weekly][monthly][count][selfDefs(array,max10)] each nested elem FUN_10157090.* (server: Diagnostic; authoritative names/bounds for alarm/online-time data., conf high)
- TLV: TlvAlarmTimeData
- fields:
    - `daily: nested (FUN_10157090)`
    - `weekly: nested (FUN_10157090)`
    - `monthly: nested (FUN_10157090)`
    - `count: uint8 @ 0x60 (0..10)`
    - `selfDefs[]: nested (FUN_10157090), count=count`
- ⚠ discrepancy: Confirms count is uint8@0x60 and selfDefs is an array, correcting TlvAlarmTimeData.md.

### TlvAttrsSubstruct_TextDump `@0x1018a9d0` — both
*TdrBufUtil debug text serializer for a sub-struct containing an '[attrs]' field. Prints a leading count/scalar (via FUN_1024a290) then recurses into an attribute-array text-dump FUN_102074e0 under label '[attrs]'. Diagnostic text, not wire.* (server: Diagnostic only; identifies an 'attrs' attribute-list container but exact parent TLV struct unresolved., conf medium)
- TLV: unknown
- fields:
    - `count/scalar: @ offset 0 (*param_1)`
    - `attrs[]: attribute sub-array via FUN_102074e0`

### TlvAuctionRecordContainer_DebugFormat `@0x1023a060` — unknown
*TdrBufUtil.cpp DebugFormat of auction records: saleCount+sales[] (max 100), recordSaleCount+recordSale[] (max 400), recordBuyCount+recordBuy[] (max 400), all elements via FUN_10238ce0.* (server: Debug only; documents auction house record container (S2C auction data)., conf high)
- TLV: TlvAuctionRecordContainer
- fields:
    - `saleCount: uint16 @0 (max 100)`
    - `sales[]: element @ FUN_10238ce0`
    - `recordSaleCount: uint16 @0x5dc4 (param_1[0x1771]) (max 400)`
    - `recordSale[]: element @ FUN_10238ce0`
    - `recordBuyCount: uint16 @0x1d4c8 (param_1[0x7532]) (max 400)`
    - `recordBuy[]: element @ FUN_10238ce0`
- ⚠ discrepancy: Verify doc TlvAuctionRecordContainer captures all three arrays (sales max 100, recordSale max 400, recordBuy max 400) sharing the same element type sub_10238CE0.

### TlvAvatarRecord_Write_varA `@0x101a3db0` — both
*TDR wire WRITE serializer for a large record (~0x489 bytes) containing two 32-byte name strings, level/exp scalars, and several nested sub-structs. This is the compact/varint encoding cut. Written by FUN_101a6710 as an array element (up to 12 per container), so it is one entry of a roster/list. Field->tag map recovered from the FUN_1010c5f0(tag) calls.* (server: HIGH — server must (de)serialize this record with exactly these tags/field_ids to exchange the roster list. Compact/varint cut., conf high)
- TLV: unknown
- fields:
    - `field_2: uint8 @ off 0 (tag 0x21)`
    - `field_3: int32 varint @ off 1 (tag 0x30, FUN_1010c560)`
    - `field_4: int32 varint @ off 5 (tag 0x40)`
    - `field_5: char[32] string @ off 9 (tag 0x55 wire5, FUN_1010c2b0)`
    - `field_6: char[32] string @ off 0x29 (tag 0x65 wire5)`
    - `field_7: uint8 @ off 0x49 (tag 0x71)`
    - `field_8: uint8 @ off 0x4a (tag 0x81)`
    - `field_9: int32 @ off 0x4b (tag 0x90)`
    - `field_10: int32 @ off 0x4f (tag 0xa0)`
    - `field_11: int16 @ off 0x53 (tag 0xb0, FUN_1010c430)`
    - `field_12: int16 @ off 0x55 (tag 0xc0)`
    - `field_14: int16 @ off 0x57 (tag 0xe0)`
    - `field_15: int16 @ off 0x59 (tag 0xf0)`
    - `field_16: int32 @ off 0x5b (tag 0x100)`
    - `field_17: int32 @ off 0x5f (tag 0x110)`
    - `field_18: uint8 @ off 0x63 (tag 0x121)`
    - `field_21_count: int16 @ off 0x64 (tag 0x150, max 0x46); field_22 array @ tag 0x165 (element FUN_1019e0e0)`
    - `field_23_count: int16 @ off 0x2dc (tag 0x170, max 10); field_24 array @ tag 0x185 (element FUN_1019e790)`
    - `field_28: substruct @ tag 0x1c5 (FUN_1019ee10)`
    - `field_29: substruct @ tag 0x1d5 (FUN_1019f540)`
    - `field_30: uint8 @ off 0x38f (tag 0x1e1, FUN_101150a0)`
    - `field_31: substruct @ tag 0x1f5 (FUN_101a1ec0)`
    - `field_32: int32 fixed @ off 0x488 (tag 0x203 wire3, FUN_1010c190)`
    - `field_33: substruct @ tag 0x215 (FUN_101a2cc0)`
    - `field_34: substruct @ tag 0x225 (FUN_101a3620)`
- ⚠ discrepancy: unknown — could not bind to a named TLV_DOCS entry; two char[32] names + weapon-style scalars suggest an avatar/role brief record.

### TlvAvatarRecord_Write_varB `@0x101a44d0` — both
*Fixed-width encoding twin of FUN_101a3db0: same record and same field_ids, but scalars use fixed wire types (tags 0x33/0x43 wire3, 0xb2/0xc2/0xe2/0xf2 wire2, 0x93/0xa3/0x103/0x113 wire3, 0x152/0x172 wire2). Array element sub-codecs are the fixed variants (FUN_1019e130, FUN_1019e7e0, FUN_1019ee60, FUN_1019f6d0, FUN_101a20a0, FUN_101a2db0, FUN_101a3670).* (server: HIGH — fixed-cut encoding of the same roster record., conf high)
- TLV: unknown
- fields:
    - `same field_ids as FUN_101a3db0; scalar fields encoded with fixed wire types (wire2=2B FUN_1010c120, wire3=4B FUN_1010c190)`

### TlvAvatarRoster_Write_varA `@0x101a6710` — both
*TDR wire WRITE serializer for a roster/list container. field2 (tag 0x21, uint8 @off0), field3 (tag 0x30, int32 @off1), field4 (tag 0x41, uint8 count @off5, max 0xc=12) with array (tag 0x55 wire5) of TlvAvatarRecord elements via FUN_101a3db0; field6 (tag 0x61, uint8 @off 0x3bd6); field7 (tag 0x70, int16 count @off 0x3bd7, max 0x46) with byte-array (tag 0x85) via FUN_1010c0c0 @off 0x3bd9; field9 (tag 0x90, int16 count @off 0x3c1f, max 0x46) with byte-array (tag 0xa5) @off 0x3c21; field11 (tag 0xb1, uint8 @off 0x3c67); field12 (tag 0xc1, uint8 @off 0x3c68).* (server: HIGH — top-level list struct; server must build this to send the roster of up to 12 avatar records., conf high)
- TLV: unknown
- fields:
    - `field_2: uint8 @ off 0 (tag 0x21)`
    - `field_3: int32 @ off 1 (tag 0x30)`
    - `field_4: uint8 count @ off 5 (tag 0x41, max 12); records[] @ tag 0x55 -> FUN_101a3db0`
    - `field_6: uint8 @ off 0x3bd6 (tag 0x61)`
    - `field_7: int16 count @ off 0x3bd7 (tag 0x70, max 0x46); bytes[] @ tag 0x85 @ off 0x3bd9`
    - `field_9: int16 count @ off 0x3c1f (tag 0x90, max 0x46); bytes[] @ tag 0xa5 @ off 0x3c21`
    - `field_11: uint8 @ off 0x3c67 (tag 0xb1)`
    - `field_12: uint8 @ off 0x3c68 (tag 0xc1)`

### TlvAvatarRoster_Write_varB `@0x101a6a80` — both
*Fixed-cut encoding twin of FUN_101a6710: same container, field3 uses tag 0x33 (wire3 fixed), field7/field9 counts use tag 0x72/0x92 (wire2 fixed), array element codec is FUN_101a44d0.* (server: HIGH — fixed-cut roster container., conf high)
- TLV: unknown
- fields:
    - `same field_ids as FUN_101a6710; scalar counts fixed-width (wire2/wire3); records[] -> FUN_101a44d0`

### TlvBaseOrBonus_DebugFormat `@0x101affd0` — S2C
*DebugFormat text dump of a discriminated union (base-or-bonus). If discriminator==1: dump [base] (single typed-variant via FUN_101aeeb0). If discriminator==2: dump [bonus] (7-element array via FUN_101af840). Text output. Matches TLV_DOCS TlvBaseOrBonus / TlvTypedBaseOrBonus.* (server: Debug-only; confirms the base/bonus union field names., conf high)
- TLV: TlvBaseOrBonus, TlvTypedBaseOrBonus
- fields:
    - `selector==1: base (typed-variant, FUN_101aeeb0)`
    - `selector==2: bonus (typed-variant array[7], FUN_101af840)`
- ⚠ discrepancy: TLV_DOCS/docs/TlvBaseOrBonus.md documents only 'field_1 -> sub_101AECC0' (single field). The union nature (base vs bonus, selector 1/2) and the [base]/[bonus] labels are absent from the generated schema.

### TlvBigArrayContainer_Unpack_v0 `@0x102205c0` — both
*TdrBuf.h wire unpack of a large container: field1 scalar (FUN_1010cbd0), field2 = array (max 0x800=2048) of 2-byte scalars starting @+2 (FUN_1010ca10), field3 = byte array (max 2048) at offset 0x1004. Count written to *param_1. Presence flags at +0x1804 (param_1[0x601]).* (server: Yes — large fixed-capacity array container parsed from wire., conf high)
- fields:
    - `field 1: scalar @0 (presence bit 0x1)`
    - `field 2: array<uint16>[*param_1] (max 2048) @ base+4, element via FUN_1010ca10 (presence bit 0x2)`
    - `field 3: array<uint8>[] (max 2048) @ base+0x1004 (presence bit 0x4)`

### TlvBigArrayContainer_Unpack_v1 `@0x102207e0` — both
*TdrBuf.h wire unpack, cut-version of FUN_102205c0 (element via FUN_1010c800, scalar via FUN_1010c870).* (server: Yes — wire unpacker (cut variant)., conf high)
- fields:
    - `field 1: scalar @0`
    - `field 2: array<uint16>[] (max 2048)`
    - `field 3: array<uint8>[] (max 2048) @ base+0x1004`

### TlvBoxArray_DebugFormat `@0x10231d90` — unknown
*TdrBufUtil.cpp DebugFormat: count(byte@0, max 5) + boxes[] via FUN_10231270.* (server: Debug only; documents boxes array., conf high)
- fields:
    - `count: uint8 @0 (max 5)`
    - `boxes[]: element @ FUN_10231270`

### TlvBoxArray_Pack_v0 `@0x102315f0` — both
*TdrBuf.h wire pack: count byte@0 (max 5), then length-delimited (tag 0x25) array of elements via FUN_10230ad0.* (server: Yes — box/container array serializer., conf high)
- fields:
    - `count: uint8 @0 (max 5)`
    - `boxes[]: element @ FUN_10230ad0`

### TlvBoxArray_Pack_v1 `@0x10231720` — both
*TdrBuf.h wire pack, cut-version of FUN_102315f0 (elements via FUN_10230bf0).* (server: Yes — array serializer (cut variant)., conf high)
- fields:
    - `count: uint8 @0 (max 5)`
    - `boxes[]: element @ FUN_10230bf0`

### TlvBoxArray_Unpack_v0 `@0x10231920` — both
*TdrBuf.h wire unpack: field1 count byte@0, field2 length-delimited array (max 5, element stride 0x204=516) via FUN_10230de0. Presence flags at +0xa15.* (server: Yes — box array unpacker., conf high)
- fields:
    - `field 1: count uint8 @0`
    - `field 2: boxes[] (max 5, stride 0x204) via FUN_10230de0`

### TlvBoxArray_Unpack_v1 `@0x10231af0` — both
*TdrBuf.h wire unpack, cut-version of FUN_10231920 (element via FUN_10230fc0).* (server: Yes — array unpacker (cut variant)., conf high)
- fields:
    - `field 1: count uint8 @0`
    - `field 2: boxes[] (max 5, stride 0x204) via FUN_10230fc0`

### TlvByteBufStruct_Unpack_v1 `@0x1018c5b0` — both
*TDR unpack of a struct with a scalar field + a fixed-capacity byte array. field_id 1 => scalar read via FUN_1010cbd0 (presence bit 0x1, flags word @ +0x84 (param_1[0x21])); field_id 2 => length-delimited raw byte array copied byte-by-byte into buffer at (param_1+4), capped at 0x80 (128) bytes, count stored in *param_1; other field_ids skipped via FUN_1010d4f0.* (server: Server must honor the 128-byte cap on the byte array and the length framing when exchanging this struct., conf medium)
- TLV: unknown
- fields:
    - `field_id 1: scalar via FUN_1010cbd0 @ offset 0 (presence bit 0x1)`
    - `field_id 2: byte[] @ offset 4, len-delimited, max 0x80 bytes (presence bit 0x2)`
    - `presence_flags: uint32 @ offset 0x84 (word index 0x21)`

### TlvByteBufStruct_Unpack_v2 `@0x1018c730` — both
*Twin of FUN_1018c5b0 (this is doc address sub_1018C730). Same layout: field_id 1 scalar (here read via FUN_1010c870, the alternate int codec), field_id 2 length-delimited byte array into (param_1+4) capped 0x80, count -> *param_1. Presence flags @ param_1[0x21].* (server: Same as FUN_1018c5b0; 128-byte cap and framing must be reproduced., conf medium)
- TLV: unknown
- fields:
    - `field_id 1: scalar via FUN_1010c870 @ offset 0 (presence bit 0x1)`
    - `field_id 2: byte[] @ offset 4, len-delimited, max 0x80 (presence bit 0x2)`
    - `presence_flags: uint32 @ word index 0x21`
- ⚠ discrepancy: XML structure sub_1018C730.xml exists in TLV_DOCS/structures but no named .md; struct name unresolved. Layout (scalar + 0x80 byte buffer) recovered here.

### TlvBytePair_Unpack_v0 `@0x1022bfd0` — both
*TdrBuf.h wire unpack of element with two byte fields: field1 uint8@0, field2 uint8@+1. Presence flags at +2.* (server: Yes — 'pieces' element unpacker (used by FUN_1022c890)., conf high)
- fields:
    - `field 1: uint8 @0`
    - `field 2: uint8 @+1`

### TlvBytePair_Unpack_v1 `@0x1022c0f0` — both
*TdrBuf.h wire unpack, cut-version of FUN_1022bfd0 (two byte fields).* (server: Yes — element unpacker (used by FUN_1022ca50)., conf high)
- fields:
    - `field 1: uint8 @0`
    - `field 2: uint8 @+1`

### TlvByteSub_Pack_v0 `@0x1022be00` — both
*TdrBuf.h wire pack of small element: field1 byte@0 (tag 0x11), field2 (tag 0x21, wire1) via FUN_101159e0 (nested byte/sub serializer).* (server: Yes — element serializer used by 'pieces' array pack FUN_1022c580., conf medium)
- fields:
    - `field 1: uint8 @0 (tag 0x11)`
    - `field 2: @+1 via FUN_101159e0 (tag 0x21)`

### TlvByteSub_Pack_v1 `@0x1022be80` — both
*TdrBuf.h wire pack, duplicate/cut-version of FUN_1022be00 (same tags 0x11/0x21, FUN_101159e0).* (server: Yes — element serializer (variant, used by FUN_1022c6a0)., conf medium)
- fields:
    - `field 1: uint8 @0`
    - `field 2: @+1 via FUN_101159e0`

### TlvCardTargetContainer_DebugFormat `@0x10218e00` — unknown
*TdrBufUtil.cpp DebugFormat for the card/target struct: cardId (2-byte, DAT_11d9e0b4), targetNum (byte), targetList[targetNum] (max 10) each via FUN_10218440.* (server: Debug only; documents cardId/targetNum/targetList layout (pairs with unpack FUN_10218990)., conf high)
- fields:
    - `cardId: uint16 @0`
    - `targetNum: uint8 @2 (max 10)`
    - `targetList[]: element @ FUN_10218440`

### TlvCardTargetContainer_Unpack_v0 `@0x10218990` — both
*TdrBuf.h wire unpack of a container: field1 scalar (FUN_1010cb00) = cardId, field2 byte@+2 = targetNum, field3 = length-delimited array (up to 10) of target elements each parsed by FUN_10218160. Matches DebugFormat FUN_10218e00.* (server: Yes — server parses this card/target struct from client., conf high)
- fields:
    - `field 1: cardId scalar @0 (presence bit 0x1)`
    - `field 2: targetNum uint8 @+2 (presence bit 0x2)`
    - `field 3: targetList[] array (max 10), element via FUN_10218160 (presence bit 0x4)`

### TlvCardTargetContainer_Unpack_v1 `@0x10218b60` — both
*TdrBuf.h wire unpack, cut-version of FUN_10218990 (nested element via FUN_10218250, scalar via FUN_1010c800).* (server: Yes — wire unpacker (cut variant)., conf high)
- fields:
    - `field 1: cardId scalar @0`
    - `field 2: targetNum uint8 @+2`
    - `field 3: targetList[] (max 10) via FUN_10218250`

### TlvCatCuisineData_DebugFormat `@1017e4a0` — both
*TDR DebugFormat dumper for TlvCatCuisineData: '[tCatTime]' I64, '[vCatSeq]' 7 bytes, '[iOpen]', '[tOpenTime]' I64, '[iTools]'.* (server: Debug-only; authoritative names; proves vCatSeq is a 7-byte array., conf high)
- TLV: TlvCatCuisineData
- fields:
    - `tCatTime: int64 @ +0`
    - `vCatSeq: uint8[7] @ +8`
    - `iOpen: uint8 @ +0xf`
    - `tOpenTime: int64 @ +0x10`
    - `iTools: uint8 @ +0x18`

### TlvCatCuisineData_Write_A `@1017dd20` — both
*TDR serializer (variant A) for TlvCatCuisineData: field1 tCatTime int64@+0 (tag 0x10 varint via FUN_10160010), field2 vCatSeq uint8[7]@+8 (tag 0x25 len-delim), field3 iOpen uint8@+0xf (tag 0x31), field4 tOpenTime int64 (tag 0x40, param_1[4]/[5]), field5 iTools uint8 (tag 0x51, param_1+6).* (server: Server sends cat-cuisine (Felyne kitchen) state., conf high)
- TLV: TlvCatCuisineData
- fields:
    - `field 1: int64 tCatTime @ +0 (tag 0x10)`
    - `field 2: uint8[7] vCatSeq @ +8 (tag 0x25, len-delim)`
    - `field 3: uint8 iOpen @ +0xf (tag 0x31)`
    - `field 4: int64 tOpenTime @ +0x10 (tag 0x40)`
    - `field 5: uint8 iTools @ +0x18 (tag 0x51)`
- ⚠ discrepancy: Doc TlvCatCuisineData lists field2 vCatSeq as int32 (tag 0x23). Actual code encodes vCatSeq as a 7-byte uint8 array (len-delimited, tag 0x25), not a scalar int32. Other fields (tCatTime int64, iOpen u8, tOpenTime int64, iTools u8) match.

### TlvCatCuisineData_Write_B `@1017de50` — both
*Variant B of TlvCatCuisineData writer: tCatTime int64 tag 0x14 (fixed8 via FUN_1010c200), vCatSeq tag 0x25, iOpen 0x31, tOpenTime tag 0x44 (fixed8), iTools 0x51.* (server: Canonical wire form (matches doc tags 0x14/0x44 fixed 8-byte)., conf high)
- TLV: TlvCatCuisineData
- fields:
    - `field 1: int64 tCatTime @ +0 (tag 0x14)`
    - `field 2: uint8[7] vCatSeq @ +8 (tag 0x25)`
    - `field 3: uint8 iOpen @ +0xf (tag 0x31)`
    - `field 4: int64 tOpenTime @ +0x10 (tag 0x44)`
    - `field 5: uint8 iTools @ +0x18 (tag 0x51)`
- ⚠ discrepancy: Same as FUN_1017dd20: doc's vCatSeq (field2) is int32 tag 0x23 but real wire is uint8[7] len-delim tag 0x25.

### TlvChannelTabEntry_Read_A `@10167210` — both
*TDR read of a channel-tab entry: field1 strName (len-delimited, max 20 via FUN_1010c870+memmove) into +0, field2 nChannelFlags varint@+0x15. Presence flags@+0x19.* (server: Server decode of a channel tab., conf high)
- TLV: TlvChannelTabs (astTabs element)
- fields:
    - `field 1: char[21] strName @ +0`
    - `field 2: int32 nChannelFlags @ +0x15`
    - `presence_flags: uint32 @ +0x19`

### TlvChannelTabEntry_Read_B `@10167350` — both
*Variant B channel-tab entry reader (== documented sub_10167350 referenced as astTabs sub-struct). {strName[21]@+0, nChannelFlags int32@+0x15}, flags@+0x19.* (server: Canonical decode of a channel tab entry., conf high)
- TLV: TlvChannelTabs (astTabs element, sub_10167350)
- fields:
    - `field 1: char[21] strName @ +0`
    - `field 2: int32 nChannelFlags @ +0x15`
    - `presence_flags: uint32 @ +0x19`

### TlvChannelTabEntry_Write_A `@10166fa0` — both
*TDR serializer (variant A) for a channel-tab entry (astTabs element): field1 strName string (max 20 chars, tag 0x15 len-delim) written via FUN_1010c2b0, field2 nChannelFlags int32@+0x15 (tag 0x20 varint).* (server: Server must encode each channel tab (name+flags)., conf high)
- TLV: TlvChannelTabs (astTabs element, sub_10167350)
- fields:
    - `field 1: char[21] strName @ +0 (tag 0x15, strnlen<=20)`
    - `field 2: int32 nChannelFlags @ +0x15 (tag 0x20)`

### TlvChannelTabEntry_Write_B `@10167070` — both
*Variant B of channel-tab entry writer: strName (tag 0x15) + nChannelFlags int32 (tag 0x23 wire3 fixed) via FUN_1010c190.* (server: Canonical wire form for a channel tab., conf high)
- TLV: TlvChannelTabs (astTabs element)
- fields:
    - `field 1: char[21] strName @ +0 (tag 0x15)`
    - `field 2: int32 nChannelFlags @ +0x15 (tag 0x23, wire3)`

### TlvChannelTabs_DebugFormat `@10167fe0` — both
*TDR DebugFormat dumper for TlvChannelTabs: '[nNumTabs]', '[astTabs]' array, per-entry '[strName]' and '[nChannelFlags]'. Entry stride 0x1d.* (server: Debug-only; authoritative for field names., conf high)
- TLV: TlvChannelTabs
- fields:
    - `nNumTabs: uint8 @ +0 (max 20)`
    - `astTabs[i].strName: char[21] @ entry+0`
    - `astTabs[i].nChannelFlags: uint32 @ entry+0x15`

### TlvChannelTabs_Read_A `@10167bb0` — both
*TDR read (variant A) of TlvChannelTabs: field1 nNumTabs char@+0, field2 astTabs array (up to 20) via FUN_10167210. Presence flags@+0x245; sets count byte at +0.* (server: Server decode of the tab list., conf high)
- TLV: TlvChannelTabs
- fields:
    - `field 1: uint8 nNumTabs @ +0`
    - `field 2: astTabs[] @ +1 (element sub_10167210, entry 0x1d bytes, max 20)`
    - `presence_flags: uint32 @ +0x245`

### TlvChannelTabs_Read_B `@10167d60` — both
*Variant B read of TlvChannelTabs == documented read at 0x10167D60. nNumTabs@+0, astTabs[] via FUN_10167350, flags@+0x245.* (server: Canonical decode; this is the doc's TlvChannelTabs read address., conf high)
- TLV: TlvChannelTabs
- fields:
    - `field 1: uint8 nNumTabs @ +0`
    - `field 2: astTabs[] @ +1 (element sub_10167350, max 20)`
    - `presence_flags: uint32 @ +0x245`

### TlvChannelTabs_Write_A `@101678c0` — both
*TDR serializer (variant A) for TlvChannelTabs: field1 nNumTabs uint8@+0 (tag 0x11), then field2 astTabs as a length-delimited array (tag 0x25) of up to 20 tab entries, each written via FUN_10166fa0.* (server: Server must encode the chat/channel tab list., conf high)
- TLV: TlvChannelTabs
- fields:
    - `field 1: uint8 nNumTabs @ +0 (max 20; returns -7 if >0x14)`
    - `field 2: astTabs[] entry-array @ +1 (tag 0x25, element sub_10166fa0)`

### TlvChannelTabs_Write_B `@101679d0` — both
*Variant B of TlvChannelTabs writer (elements via FUN_10167070).* (server: Canonical wire form., conf high)
- TLV: TlvChannelTabs
- fields:
    - `field 1: uint8 nNumTabs @ +0`
    - `field 2: astTabs[] @ +1 (element sub_10167070)`

### TlvCharBattleAttributes_DebugFormat `@0x101d1470` — S2C
*Massive (19762-byte) DebugFormat text dump of the full character battle/public attributes struct (245 field-print calls, all 'o'-prefixed: oCharLevel, oCharSex, oCharExp, oStarLevel, oCharHP/MaxHP, oCharReju, elemental attack/accum/threshold sets, weapon exps, ammo, bottle counts, facial info 1..25+, ghost values, title/guild/team fields, etc.). Emits labelled text, not TDR wire (no FUN_1010c5f0 / FUN_1010ccb0 calls; 245x FUN_1024a290).* (server: Debug-only text dump; server does not emit this format. Authoritative field map (245 fields) for the TlvCharBattleAttributes wire struct the server MUST populate/parse., conf high)
- TLV: TlvCharBattleAttributes, TlvCharPublicAttributes, TlvCharRoleAttributes
- fields:
    - `oCharLevel, oCharSex, oCharExp, oStarLevel, oCharHP, oCharMaxHP, oCharReju, oCharMaxReju, oDeath, oCharSta.. (245 'o'-prefixed fields; full ordered list captured in analysis)`
    - `elemental sets: oWater/Fire/Lightning/Dragon/Ice/Non/Poison/Sleepy/Paralysis {Attack,Accum,Thrsh}`
    - `weapon exps: oClaymore/Hammer/Katana/DuelSword/Sword/Spear/Gun/Bow/Crossbow/Flute Exp`
    - `oFacialInfo1..25+, oGhost*/oJinLi*/oEquipTitle*/oGuild*/oTeam* fields`
- ⚠ discrepancy: TLV_DOCS/docs/TlvCharBattleAttributes.md self-flags 'schema has 4, DebugFormat has 112' and documents only fields 2,4,6,7 (oCharLevel/oCharSex/oCharExp/oStarLevel). This DebugFormat actually enumerates ~245 labelled fields — the generated 0x99 schema is a tiny subset. Field offsets in the .md (e.g. oCharSex @ offset 28 same as oCharLevel) also look unreliable.

### TlvCharBattleAttributes_Pack_FixedBE `@0x101d7ba0` — S2C
*TDR pack/serialize (WRITE path) of the same full 112-field TlvCharBattleAttributes structure as FUN_101d6660, but using FIXED big-endian encoding: int32 -> 4-byte BE (sub_1010c190, wire 3), int16 -> 2-byte BE (sub_1010c120, wire 2); [7] arrays identical layout (LEN_DELIM + 4B length + 7 fixed elements). Field/offset set is identical to the varint variant.* (server: HIGH - alternate (uncompressed/aligned) encoder for the same CharBattleAttributes payload. Server must match whichever TDR compress mode the wire uses for the carrying message., conf high)
- TLV: TlvCharBattleAttributes
- fields:
    - `f2 OCharLevel: LEN(len4)+7*fixed4-BE @ 0x0 (C#type=int) [DISCREPANCY: C# models OCharLevel as scalar int, real serializer = int32[7]/float[7] array]`
    - `f4 OCharSex: fixed4-BE @ 0x1c (C#type=int)`
    - `f6 OCharExp: fixed4-BE @ 0x20 (C#type=int)`
    - `f7 OStarLevel: fixed4-BE @ 0x24 (C#type=int)`
    - `f16 OCharHP: fixed4-BE @ 0x28 (C#type=int)`
    - `f17 OCharMaxHP: LEN(len4)+7*fixed4-BE @ 0x2c (C#type=int) [DISCREPANCY: C# models OCharMaxHP as scalar int, real serializer = int32[7]/float[7] array]`
    - `f19 OCharMaxReju: LEN(len4)+7*fixed4-BE @ 0x48 (C#type=int) [DISCREPANCY: C# models OCharMaxReju as scalar int, real serializer = int32[7]/float[7] array]`
    - `f20 ODeath: i16fixed2 @ 0x64 (C#type=short)`
    - `f36 OSharpness: fixed4-BE @ 0x66 (C#type=int)`
    - `f75 OCharAnimSpeed: LEN(len4)+7*fixed4-BE @ 0x6a (C#type=int) [DISCREPANCY: C# models OCharAnimSpeed as scalar int, real serializer = int32[7]/float[7] array]`
    - `f108 OMaleFace: fixed4-BE @ 0x86 (C#type=int)`
    - `f109 OMaleHair: fixed4-BE @ 0x8a (C#type=int)`
    - `f116 OQiRenLevel: fixed4-BE @ 0x8e (C#type=int)`
    - `f122 ORejuFlag: fixed4-BE @ 0x92 (C#type=int)`
    - `f128 OTeamID: fixed4-BE @ 0x96 (C#type=int)`
    - `f136 OPVPDef: LEN(len4)+7*fixed4-BE @ 0x9a (C#type=int) [DISCREPANCY: C# models OPVPDef as scalar int, real serializer = int32[7]/float[7] array]`
    - `f137 OPVPDefAngle: LEN(len4)+7*fixed4-BE @ 0xb6 (C#type=int) [DISCREPANCY: C# models OPVPDefAngle as scalar int, real serializer = int32[7]/float[7] array]`
    - `f150 ORegion: fixed4-BE @ 0xd2 (C#type=int)`
    - `f173 OUnderClothes: fixed4-BE @ 0xd6 (C#type=int)`
    - `f176 OCharRejuPer: LEN(len4)+7*fixed4-BE @ 0xda (C#type=int) [DISCREPANCY: C# models OCharRejuPer as scalar int, real serializer = int32[7]/float[7] array]`
    - `f200 OCharRemainsExp: fixed4-BE @ 0xf6 (C#type=int)`
    - `f204 OLastResetTime: fixed4-BE @ 0xfa (C#type=int)`
    - `f205 OSkinColor: fixed4-BE @ 0xfe (C#type=int)`
    - `f206 OHairColor: fixed4-BE @ 0x102 (C#type=int)`
    - `f207 OInnerColor: fixed4-BE @ 0x106 (C#type=int)`
    - `f208 OFaceTattooIndex: fixed4-BE @ 0x10a (C#type=int)`
    - `f209 OEyeBall: fixed4-BE @ 0x10e (C#type=int)`
    - `f220 OFaceTattooColor: fixed4-BE @ 0x112 (C#type=int)`
    - `f221 OEyeColor: fixed4-BE @ 0x116 (C#type=int)`
    - `f223 OCombatNPCID: fixed4-BE @ 0x11a (C#type=int)`
    - `f227 OHideFashion: i16fixed2 @ 0x11e (C#type=short)`
    - `f228 OHideSuite: fixed4-BE @ 0x120 (C#type=short)`
    - `f229 OHideHelm: i16fixed2 @ 0x122 (C#type=short)`
    - `f232 OJinLiValue: fixed4-BE @ 0x124 (C#type=int)`
    - `f237 OEquipTitleID: fixed4-BE @ 0x128 (C#type=int)`
    - `f239 OTitleLevel: fixed4-BE @ 0x12c (C#type=int)`
    - `f244 OGuildId: fixed4-BE @ 0x130 (C#type=int)`
    - `f245 OTeamPasswordFlag: i16fixed2 @ 0x134 (C#type=short)`
    - `f252 OFacialInfo1: i16fixed2 @ 0x136 (C#type=short)`
    - `f253 OFacialInfo2: i16fixed2 @ 0x138 (C#type=short)`
    - `f254 OFacialInfo3: i16fixed2 @ 0x13a (C#type=short)`
    - `f255 OFacialInfo4: i16fixed2 @ 0x13c (C#type=short)`
    - `f256 OFacialInfo5: i16fixed2 @ 0x13e (C#type=short)`
    - `f257 OFacialInfo6: i16fixed2 @ 0x140 (C#type=short)`
    - `f258 OFacialInfo7: i16fixed2 @ 0x142 (C#type=short)`
    - `f259 OFacialInfo8: i16fixed2 @ 0x144 (C#type=short)`
    - `f260 OFacialInfo9: i16fixed2 @ 0x146 (C#type=short)`
    - `f261 OFacialInfo10: i16fixed2 @ 0x148 (C#type=short)`
    - `f262 OFacialInfo11: i16fixed2 @ 0x14a (C#type=short)`
    - `f263 OFacialInfo12: i16fixed2 @ 0x14c (C#type=short)`
    - `f264 OFacialInfo13: i16fixed2 @ 0x14e (C#type=short)`
    - `f265 OFacialInfo14: i16fixed2 @ 0x150 (C#type=short)`
    - `f266 OFacialInfo15: i16fixed2 @ 0x152 (C#type=short)`
    - `f267 OFacialInfo16: i16fixed2 @ 0x154 (C#type=short)`
    - `f268 OFacialInfo17: i16fixed2 @ 0x156 (C#type=short)`
    - `f269 OFacialInfo18: i16fixed2 @ 0x158 (C#type=short)`
    - `f270 OFacialInfo19: i16fixed2 @ 0x15a (C#type=short)`
    - `f271 OFacialInfo20: i16fixed2 @ 0x15c (C#type=short)`
    - `f272 OFacialInfo21: i16fixed2 @ 0x15e (C#type=short)`
    - `f273 OFacialInfo22: i16fixed2 @ 0x160 (C#type=short)`
    - `f274 OFacialInfo23: i16fixed2 @ 0x162 (C#type=short)`
    - `f275 OFacialInfo24: i16fixed2 @ 0x164 (C#type=short)`
    - `f276 OFacialInfo25: i16fixed2 @ 0x166 (C#type=short)`
    - `f284 OVIP: i16fixed2 @ 0x168 (C#type=short)`
    - `f293 OVIPLevel: fixed4-BE @ 0x16a (C#type=int)`
    - `f294 OVIPExp: fixed4-BE @ 0x16e (C#type=int)`
    - `f300 OVIPBaseCanUse: i16fixed2 @ 0x172 (C#type=short)`
    - `f307 OGameVIP: i16fixed2 @ 0x174 (C#type=short)`
    - `f308 OQQVIP: i16fixed2 @ 0x176 (C#type=short)`
    - `f309 OYearQQVIP: i16fixed2 @ 0x178 (C#type=short)`
    - `f310 OSuperQQVIP: i16fixed2 @ 0x17a (C#type=short)`
    - `f311 ONetbarLevel: i16fixed2 @ 0x17c (C#type=short)`
    - `f322 OCharHRLevel: fixed4-BE @ 0x17e (C#type=int)`
    - `f323 OCharHRPoint: fixed4-BE @ 0x182 (C#type=int)`
    - `f328 OXYVIP: i16fixed2 @ 0x186 (C#type=short)`
    - `f329 OFacialInfo26: i16fixed2 @ 0x188 (C#type=short)`
    - `f330 OFacialInfo27: i16fixed2 @ 0x18a (C#type=short)`
    - `f331 OFacialInfo28: i16fixed2 @ 0x18c (C#type=short)`
    - `f332 OFacialInfo29: i16fixed2 @ 0x18e (C#type=short)`
    - `f333 OFacialInfo30: i16fixed2 @ 0x190 (C#type=short)`
    - `f334 OFacialInfo31: i16fixed2 @ 0x192 (C#type=short)`
    - `f335 OFacialInfo32: i16fixed2 @ 0x194 (C#type=short)`
    - `f336 OFacialInfo33: i16fixed2 @ 0x196 (C#type=short)`
    - `f337 OFacialInfo34: i16fixed2 @ 0x198 (C#type=short)`
    - `f338 OFacialInfo35: i16fixed2 @ 0x19a (C#type=short)`
    - `f339 OFacialInfo36: i16fixed2 @ 0x19c (C#type=short)`
    - `f340 OFacialInfo37: i16fixed2 @ 0x19e (C#type=short)`
    - `f341 OFacialInfo38: i16fixed2 @ 0x1a0 (C#type=short)`
    - `f342 OFacialInfo39: i16fixed2 @ 0x1a2 (C#type=short)`
    - `f343 OFacialInfo40: i16fixed2 @ 0x1a4 (C#type=short)`
    - `f344 OFacialInfo41: i16fixed2 @ 0x1a6 (C#type=short)`
    - `f345 OFacialInfo42: i16fixed2 @ 0x1a8 (C#type=short)`
    - `f346 OFacialInfo43: i16fixed2 @ 0x1aa (C#type=short)`
    - `f347 OFacialInfo44: i16fixed2 @ 0x1ac (C#type=short)`
    - `f348 OFacialInfo45: i16fixed2 @ 0x1ae (C#type=short)`
    - `f349 OFacialInfo46: i16fixed2 @ 0x1b0 (C#type=short)`
    - `f350 OFacialInfo47: i16fixed2 @ 0x1b2 (C#type=short)`
    - `f352 OTGPVIP: i16fixed2 @ 0x1b4 (C#type=short)`
    - `f359 OFluteTune: fixed4-BE @ 0x1b6 (C#type=int)`
    - `f360 ODefenseReduceHPModifyRate: LEN(len4)+7*fixed4-BE @ 0x1ba (C#type=int) [DISCREPANCY: C# models ODefenseReduceHPModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f361 ODefenseReduceStaModifyRate: LEN(len4)+7*fixed4-BE @ 0x1d6 (C#type=int) [DISCREPANCY: C# models ODefenseReduceStaModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f363 ODeadTime: fixed4-BE @ 0x1f2 (C#type=int)`
    - `f370 OWildHuntCamp: fixed4-BE @ 0x1f6 (C#type=int)`
    - `f377 OTotalHRPoint: fixed4-BE @ 0x1fa (C#type=int)`
    - `f378 OLikeHunterOfficer: fixed4-BE @ 0x1fe (C#type=int)`
    - `f383 OLevelShowType: fixed4-BE @ 0x202 (C#type=int)`
    - `f385 OMonolopyRoundCount: fixed4-BE @ 0x206 (C#type=int)`
    - `f386 OMonolopyActivity: fixed4-BE @ 0x20a (C#type=int)`
    - `f387 OMonolopyCurGrid: fixed4-BE @ 0x20e (C#type=int)`
    - `f402 OSoulStoneLevel: fixed4-BE @ 0x212 (C#type=int)`
    - `f403 OWeeklyRefreshTime: fixed4-BE @ 0x216 (C#type=int)`
    - `f405 OSoulStoneAtkLevel: fixed4-BE @ 0x21a (C#type=int)`
- ⚠ discrepancy: Same discrepancies as FUN_101d6660: fields 2,17,19,75,136,137,176 are int32[7] arrays (C# says scalar int), fields 360,361 are float[7]. This variant differs only in scalar wire encoding (fixed BE vs zigzag varint); tag low-nibble is 3 for int32 and 2 for int16.

### TlvCharBattleAttributes_Pack_Varint `@0x101d6660` — S2C
*TDR pack/serialize (WRITE path) of the full 112-field TlvCharBattleAttributes structure into a TdrBuf, compact/zigzag-varint encoding. Writes each field as tag=(field_id<<4)\|wire then value; int32 via zigzag LEB128 (sub_1010c560), int16 via zigzag LEB128 (sub_1010c430); [7]-element arrays as tag wire=5 (LEN_DELIM) + 4-byte big-endian byte-length prefix + 7 elements; float[7] arrays use raw fixed4 elements (sub_1010c190). Top-level body is itself wrapped as field 2 tag 0x25.* (server: HIGH - server must emit character battle/scene attributes (level, sex, exp, HP/reju, sharpness, appearance/facial-info, VIP, HR, monopoly, soulstone, etc.) whenever a message carries CharBattleAttributes (self/other-player attribute sync, scene entity spawn). This is the compact varint variant., conf high)
- TLV: TlvCharBattleAttributes
- fields:
    - `f2 OCharLevel: LEN(len4)+7*zz-varint @ 0x0 (C#type=int) [DISCREPANCY: C# models OCharLevel as scalar int, real serializer = int32[7]/float[7] array]`
    - `f4 OCharSex: zz-varint @ 0x1c (C#type=int)`
    - `f6 OCharExp: zz-varint @ 0x20 (C#type=int)`
    - `f7 OStarLevel: zz-varint @ 0x24 (C#type=int)`
    - `f16 OCharHP: zz-varint @ 0x28 (C#type=int)`
    - `f17 OCharMaxHP: LEN(len4)+7*zz-varint @ 0x2c (C#type=int) [DISCREPANCY: C# models OCharMaxHP as scalar int, real serializer = int32[7]/float[7] array]`
    - `f19 OCharMaxReju: LEN(len4)+7*zz-varint @ 0x48 (C#type=int) [DISCREPANCY: C# models OCharMaxReju as scalar int, real serializer = int32[7]/float[7] array]`
    - `f20 ODeath: zz-varint @ 0x64 (C#type=short)`
    - `f36 OSharpness: zz-varint @ 0x66 (C#type=int)`
    - `f75 OCharAnimSpeed: LEN(len4)+7*zz-varint @ 0x6a (C#type=int) [DISCREPANCY: C# models OCharAnimSpeed as scalar int, real serializer = int32[7]/float[7] array]`
    - `f108 OMaleFace: zz-varint @ 0x86 (C#type=int)`
    - `f109 OMaleHair: zz-varint @ 0x8a (C#type=int)`
    - `f116 OQiRenLevel: zz-varint @ 0x8e (C#type=int)`
    - `f122 ORejuFlag: zz-varint @ 0x92 (C#type=int)`
    - `f128 OTeamID: zz-varint @ 0x96 (C#type=int)`
    - `f136 OPVPDef: LEN(len4)+7*zz-varint @ 0x9a (C#type=int) [DISCREPANCY: C# models OPVPDef as scalar int, real serializer = int32[7]/float[7] array]`
    - `f137 OPVPDefAngle: LEN(len4)+7*zz-varint @ 0xb6 (C#type=int) [DISCREPANCY: C# models OPVPDefAngle as scalar int, real serializer = int32[7]/float[7] array]`
    - `f150 ORegion: zz-varint @ 0xd2 (C#type=int)`
    - `f173 OUnderClothes: zz-varint @ 0xd6 (C#type=int)`
    - `f176 OCharRejuPer: LEN(len4)+7*zz-varint @ 0xda (C#type=int) [DISCREPANCY: C# models OCharRejuPer as scalar int, real serializer = int32[7]/float[7] array]`
    - `f200 OCharRemainsExp: zz-varint @ 0xf6 (C#type=int)`
    - `f204 OLastResetTime: zz-varint @ 0xfa (C#type=int)`
    - `f205 OSkinColor: zz-varint @ 0xfe (C#type=int)`
    - `f206 OHairColor: zz-varint @ 0x102 (C#type=int)`
    - `f207 OInnerColor: zz-varint @ 0x106 (C#type=int)`
    - `f208 OFaceTattooIndex: zz-varint @ 0x10a (C#type=int)`
    - `f209 OEyeBall: zz-varint @ 0x10e (C#type=int)`
    - `f220 OFaceTattooColor: zz-varint @ 0x112 (C#type=int)`
    - `f221 OEyeColor: zz-varint @ 0x116 (C#type=int)`
    - `f223 OCombatNPCID: zz-varint @ 0x11a (C#type=int)`
    - `f227 OHideFashion: zz-varint @ 0x11e (C#type=short)`
    - `f228 OHideSuite: zz-varint @ 0x120 (C#type=short)`
    - `f229 OHideHelm: zz-varint @ 0x122 (C#type=short)`
    - `f232 OJinLiValue: zz-varint @ 0x124 (C#type=int)`
    - `f237 OEquipTitleID: zz-varint @ 0x128 (C#type=int)`
    - `f239 OTitleLevel: zz-varint @ 0x12c (C#type=int)`
    - `f244 OGuildId: zz-varint @ 0x130 (C#type=int)`
    - `f245 OTeamPasswordFlag: zz-varint @ 0x134 (C#type=short)`
    - `f252 OFacialInfo1: zz-varint @ 0x136 (C#type=short)`
    - `f253 OFacialInfo2: zz-varint @ 0x138 (C#type=short)`
    - `f254 OFacialInfo3: zz-varint @ 0x13a (C#type=short)`
    - `f255 OFacialInfo4: zz-varint @ 0x13c (C#type=short)`
    - `f256 OFacialInfo5: zz-varint @ 0x13e (C#type=short)`
    - `f257 OFacialInfo6: zz-varint @ 0x140 (C#type=short)`
    - `f258 OFacialInfo7: zz-varint @ 0x142 (C#type=short)`
    - `f259 OFacialInfo8: zz-varint @ 0x144 (C#type=short)`
    - `f260 OFacialInfo9: zz-varint @ 0x146 (C#type=short)`
    - `f261 OFacialInfo10: zz-varint @ 0x148 (C#type=short)`
    - `f262 OFacialInfo11: zz-varint @ 0x14a (C#type=short)`
    - `f263 OFacialInfo12: zz-varint @ 0x14c (C#type=short)`
    - `f264 OFacialInfo13: zz-varint @ 0x14e (C#type=short)`
    - `f265 OFacialInfo14: zz-varint @ 0x150 (C#type=short)`
    - `f266 OFacialInfo15: zz-varint @ 0x152 (C#type=short)`
    - `f267 OFacialInfo16: zz-varint @ 0x154 (C#type=short)`
    - `f268 OFacialInfo17: zz-varint @ 0x156 (C#type=short)`
    - `f269 OFacialInfo18: zz-varint @ 0x158 (C#type=short)`
    - `f270 OFacialInfo19: zz-varint @ 0x15a (C#type=short)`
    - `f271 OFacialInfo20: zz-varint @ 0x15c (C#type=short)`
    - `f272 OFacialInfo21: zz-varint @ 0x15e (C#type=short)`
    - `f273 OFacialInfo22: zz-varint @ 0x160 (C#type=short)`
    - `f274 OFacialInfo23: zz-varint @ 0x162 (C#type=short)`
    - `f275 OFacialInfo24: zz-varint @ 0x164 (C#type=short)`
    - `f276 OFacialInfo25: zz-varint @ 0x166 (C#type=short)`
    - `f284 OVIP: zz-varint @ 0x168 (C#type=short)`
    - `f293 OVIPLevel: zz-varint @ 0x16a (C#type=int)`
    - `f294 OVIPExp: zz-varint @ 0x16e (C#type=int)`
    - `f300 OVIPBaseCanUse: zz-varint @ 0x172 (C#type=short)`
    - `f307 OGameVIP: zz-varint @ 0x174 (C#type=short)`
    - `f308 OQQVIP: zz-varint @ 0x176 (C#type=short)`
    - `f309 OYearQQVIP: zz-varint @ 0x178 (C#type=short)`
    - `f310 OSuperQQVIP: zz-varint @ 0x17a (C#type=short)`
    - `f311 ONetbarLevel: zz-varint @ 0x17c (C#type=short)`
    - `f322 OCharHRLevel: zz-varint @ 0x17e (C#type=int)`
    - `f323 OCharHRPoint: zz-varint @ 0x182 (C#type=int)`
    - `f328 OXYVIP: zz-varint @ 0x186 (C#type=short)`
    - `f329 OFacialInfo26: zz-varint @ 0x188 (C#type=short)`
    - `f330 OFacialInfo27: zz-varint @ 0x18a (C#type=short)`
    - `f331 OFacialInfo28: zz-varint @ 0x18c (C#type=short)`
    - `f332 OFacialInfo29: zz-varint @ 0x18e (C#type=short)`
    - `f333 OFacialInfo30: zz-varint @ 0x190 (C#type=short)`
    - `f334 OFacialInfo31: zz-varint @ 0x192 (C#type=short)`
    - `f335 OFacialInfo32: zz-varint @ 0x194 (C#type=short)`
    - `f336 OFacialInfo33: zz-varint @ 0x196 (C#type=short)`
    - `f337 OFacialInfo34: zz-varint @ 0x198 (C#type=short)`
    - `f338 OFacialInfo35: zz-varint @ 0x19a (C#type=short)`
    - `f339 OFacialInfo36: zz-varint @ 0x19c (C#type=short)`
    - `f340 OFacialInfo37: zz-varint @ 0x19e (C#type=short)`
    - `f341 OFacialInfo38: zz-varint @ 0x1a0 (C#type=short)`
    - `f342 OFacialInfo39: zz-varint @ 0x1a2 (C#type=short)`
    - `f343 OFacialInfo40: zz-varint @ 0x1a4 (C#type=short)`
    - `f344 OFacialInfo41: zz-varint @ 0x1a6 (C#type=short)`
    - `f345 OFacialInfo42: zz-varint @ 0x1a8 (C#type=short)`
    - `f346 OFacialInfo43: zz-varint @ 0x1aa (C#type=short)`
    - `f347 OFacialInfo44: zz-varint @ 0x1ac (C#type=short)`
    - `f348 OFacialInfo45: zz-varint @ 0x1ae (C#type=short)`
    - `f349 OFacialInfo46: zz-varint @ 0x1b0 (C#type=short)`
    - `f350 OFacialInfo47: zz-varint @ 0x1b2 (C#type=short)`
    - `f352 OTGPVIP: zz-varint @ 0x1b4 (C#type=short)`
    - `f359 OFluteTune: zz-varint @ 0x1b6 (C#type=int)`
    - `f360 ODefenseReduceHPModifyRate: LEN(len4)+7*fixed4 @ 0x1ba (C#type=int) [DISCREPANCY: C# models ODefenseReduceHPModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f361 ODefenseReduceStaModifyRate: LEN(len4)+7*fixed4 @ 0x1d6 (C#type=int) [DISCREPANCY: C# models ODefenseReduceStaModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f363 ODeadTime: zz-varint @ 0x1f2 (C#type=int)`
    - `f370 OWildHuntCamp: zz-varint @ 0x1f6 (C#type=int)`
    - `f377 OTotalHRPoint: zz-varint @ 0x1fa (C#type=int)`
    - `f378 OLikeHunterOfficer: zz-varint @ 0x1fe (C#type=int)`
    - `f383 OLevelShowType: zz-varint @ 0x202 (C#type=int)`
    - `f385 OMonolopyRoundCount: zz-varint @ 0x206 (C#type=int)`
    - `f386 OMonolopyActivity: zz-varint @ 0x20a (C#type=int)`
    - `f387 OMonolopyCurGrid: zz-varint @ 0x20e (C#type=int)`
    - `f402 OSoulStoneLevel: zz-varint @ 0x212 (C#type=int)`
    - `f403 OWeeklyRefreshTime: zz-varint @ 0x216 (C#type=int)`
    - `f405 OSoulStoneAtkLevel: zz-varint @ 0x21a (C#type=int)`
- ⚠ discrepancy: (1) TlvCharBattleAttributes.md/.cs model fields 2 OCharLevel, 17 OCharMaxHP, 19 OCharMaxReju, 75 OCharAnimSpeed, 136 OPVPDef, 137 OPVPDefAngle, 176 OCharRejuPer as scalar int32, but the real serializer encodes them as length-delimited int32[7] arrays; fields 360 ODefenseReduceHPModifyRate, 361 ODefenseReduceStaModifyRate are float[7] arrays (raw fixed4). (2) The generated doc only captured 4 fields (2,4,6,7) from the 0x99 reader ('DebugFormat has 112') - the remaining 108 field names here are taken from the C# printer reconstruction and match by field_id. (3) Array wire_type is 5 (LEN_DELIM) with a 4-byte size prefix, not wire_type 3 as the generic TDR note assumes.

### TlvCharPublicAttributes_Pack_Varint `@0x101de490` — S2C
*TDR pack/serialize (WRITE path) of the full ~180-field TlvCharPublicAttributes structure into a TdrBuf, compact/zigzag-varint encoding. Superset of CharBattleAttributes: adds star-progression (f8-15), full elemental attack/resist tables as int32[7] arrays (f26-52: Str/Bst/Lck/Vgr, Melee/Range f30/f31 as float[7], Defence/Crit, Water/Fire/Lightning/Dragon/Ice/Non/Poison/Sleepy/Paralysis attack, elemental resists, thresholds), weapon EXP (f90-99), PVE/PVP defence arrays (f134-137), hate/atk/crit arrays, JinLi tables, dynamite attack arrays (f406/f407), etc.* (server: HIGH - this is the main public character attribute blob the server sends to clients (role/scene entity full attribute snapshot: combat stats, elemental attack/resistance, weapon proficiency, appearance, guild/title/VIP). Server must generate this exact layout., conf high)
- TLV: TlvCharPublicAttributes
- fields:
    - `f2 OCharLevel: LEN(len4)+7*zz-varint @ 0x0 (C#type=int) [DISCREPANCY: C# models OCharLevel as scalar int, real serializer = int32[7]/float[7] array]`
    - `f4 OCharSex: zz-varint @ 0x1c (C#type=int)`
    - `f6 OCharExp: zz-varint @ 0x20 (C#type=int)`
    - `f7 OStarLevel: zz-varint @ 0x24 (C#type=int)`
    - `f8 OStarCollection: zz-varint @ 0x28 (C#type=int)`
    - `f9 OStarQuest: zz-varint @ 0x2c (C#type=int)`
    - `f10 OStarCombat: zz-varint @ 0x30 (C#type=int)`
    - `f11 OStarPet: zz-varint @ 0x34 (C#type=int)`
    - `f12 OStarProduct: zz-varint @ 0x38 (C#type=int)`
    - `f13 OStarGuild: zz-varint @ 0x3c (C#type=int)`
    - `f14 OStarTame: zz-varint @ 0x40 (C#type=int)`
    - `f15 OStarPvP: zz-varint @ 0x44 (C#type=int)`
    - `f16 OCharHP: zz-varint @ 0x48 (C#type=int)`
    - `f17 OCharMaxHP: LEN(len4)+7*zz-varint @ 0x4c (C#type=int) [DISCREPANCY: C# models OCharMaxHP as scalar int, real serializer = int32[7]/float[7] array]`
    - `f20 ODeath: zz-varint @ 0x68 (C#type=short)`
    - `f22 OCharMaxSta: LEN(len4)+7*zz-varint @ 0x6a (C#type=int) [DISCREPANCY: C# models OCharMaxSta as scalar int, real serializer = int32[7]/float[7] array]`
    - `f26 OCharStr: LEN(len4)+7*zz-varint @ 0x86 (C#type=int) [DISCREPANCY: C# models OCharStr as scalar int, real serializer = int32[7]/float[7] array]`
    - `f27 OCharBst: LEN(len4)+7*zz-varint @ 0xa2 (C#type=int) [DISCREPANCY: C# models OCharBst as scalar int, real serializer = int32[7]/float[7] array]`
    - `f28 OCharLck: LEN(len4)+7*zz-varint @ 0xbe (C#type=int) [DISCREPANCY: C# models OCharLck as scalar int, real serializer = int32[7]/float[7] array]`
    - `f29 OCharVgr: LEN(len4)+7*zz-varint @ 0xda (C#type=int) [DISCREPANCY: C# models OCharVgr as scalar int, real serializer = int32[7]/float[7] array]`
    - `f30 OCharMelee: LEN(len4)+7*fixed4 @ 0xf6 (C#type=int) [DISCREPANCY: C# models OCharMelee as scalar int, real serializer = int32[7]/float[7] array]`
    - `f31 OCharRange: LEN(len4)+7*fixed4 @ 0x112 (C#type=int) [DISCREPANCY: C# models OCharRange as scalar int, real serializer = int32[7]/float[7] array]`
    - `f32 OCharDefence: LEN(len4)+7*zz-varint @ 0x12e (C#type=int) [DISCREPANCY: C# models OCharDefence as scalar int, real serializer = int32[7]/float[7] array]`
    - `f33 OCritLevel: LEN(len4)+7*zz-varint @ 0x14a (C#type=int) [DISCREPANCY: C# models OCritLevel as scalar int, real serializer = int32[7]/float[7] array]`
    - `f34 OCritDmg: LEN(len4)+7*zz-varint @ 0x166 (C#type=int) [DISCREPANCY: C# models OCritDmg as scalar int, real serializer = int32[7]/float[7] array]`
    - `f35 OAntiCritDmg: LEN(len4)+7*zz-varint @ 0x182 (C#type=int) [DISCREPANCY: C# models OAntiCritDmg as scalar int, real serializer = int32[7]/float[7] array]`
    - `f39 OWaterAttack: LEN(len4)+7*zz-varint @ 0x19e (C#type=int) [DISCREPANCY: C# models OWaterAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f40 OFireAttack: LEN(len4)+7*zz-varint @ 0x1ba (C#type=int) [DISCREPANCY: C# models OFireAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f41 OLightningAttack: LEN(len4)+7*zz-varint @ 0x1d6 (C#type=int) [DISCREPANCY: C# models OLightningAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f42 ODragonAttack: LEN(len4)+7*zz-varint @ 0x1f2 (C#type=int) [DISCREPANCY: C# models ODragonAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f43 OIceAttack: LEN(len4)+7*zz-varint @ 0x20e (C#type=int) [DISCREPANCY: C# models OIceAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f44 ONonAttack: LEN(len4)+7*zz-varint @ 0x22a (C#type=int) [DISCREPANCY: C# models ONonAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f45 OPoisonAttack: LEN(len4)+7*zz-varint @ 0x246 (C#type=int) [DISCREPANCY: C# models OPoisonAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f46 OSleepyAttack: LEN(len4)+7*zz-varint @ 0x262 (C#type=int) [DISCREPANCY: C# models OSleepyAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f47 OParalysisAttack: LEN(len4)+7*zz-varint @ 0x27e (C#type=int) [DISCREPANCY: C# models OParalysisAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f48 OWaterRes: LEN(len4)+7*zz-varint @ 0x29a (C#type=int) [DISCREPANCY: C# models OWaterRes as scalar int, real serializer = int32[7]/float[7] array]`
    - `f49 OFireRes: LEN(len4)+7*zz-varint @ 0x2b6 (C#type=int) [DISCREPANCY: C# models OFireRes as scalar int, real serializer = int32[7]/float[7] array]`
    - `f50 OLightningRes: LEN(len4)+7*zz-varint @ 0x2d2 (C#type=int) [DISCREPANCY: C# models OLightningRes as scalar int, real serializer = int32[7]/float[7] array]`
    - `f51 ODragonRes: LEN(len4)+7*zz-varint @ 0x2ee (C#type=int) [DISCREPANCY: C# models ODragonRes as scalar int, real serializer = int32[7]/float[7] array]`
    - `f52 OIceRes: LEN(len4)+7*zz-varint @ 0x30a (C#type=int) [DISCREPANCY: C# models OIceRes as scalar int, real serializer = int32[7]/float[7] array]`
    - `f68 OParaThrsh: LEN(len4)+7*zz-varint @ 0x326 (C#type=int) [DISCREPANCY: C# models OParaThrsh as scalar int, real serializer = int32[7]/float[7] array]`
    - `f88 OCharEnergy: zz-varint @ 0x342 (C#type=int)`
    - `f89 OCharMaxEnergy: zz-varint @ 0x346 (C#type=int)`
    - `f90 OClaymoreExp: zz-varint @ 0x34a (C#type=int)`
    - `f91 OHammerExp: zz-varint @ 0x34e (C#type=int)`
    - `f92 OKatanaExp: zz-varint @ 0x352 (C#type=int)`
    - `f93 ODuelSwordExp: zz-varint @ 0x356 (C#type=int)`
    - `f94 OSwordExp: zz-varint @ 0x35a (C#type=int)`
    - `f95 OSpearExp: zz-varint @ 0x35e (C#type=int)`
    - `f96 OGunExp: zz-varint @ 0x362 (C#type=int)`
    - `f97 OBowExp: zz-varint @ 0x366 (C#type=int)`
    - `f98 OCrossbowExp: zz-varint @ 0x36a (C#type=int)`
    - `f99 OFluteExp: zz-varint @ 0x36e (C#type=int)`
    - `f106 OCharGuild: zz-varint @ 0x372 (C#type=int)`
    - `f107 OCharWarteam: zz-varint @ 0x376 (C#type=int)`
    - `f108 OMaleFace: zz-varint @ 0x37a (C#type=int)`
    - `f109 OMaleHair: zz-varint @ 0x37e (C#type=int)`
    - `f134 OPVEDef: LEN(len4)+7*zz-varint @ 0x39a (C#type=int) [DISCREPANCY: C# models OPVEDef as scalar int, real serializer = int32[7]/float[7] array]`
    - `f135 OPVEDefAngle: LEN(len4)+7*zz-varint @ 0x3b6 (C#type=int) [DISCREPANCY: C# models OPVEDefAngle as scalar int, real serializer = int32[7]/float[7] array]`
    - `f136 OPVPDef: LEN(len4)+7*zz-varint @ 0x3d2 (C#type=int) [DISCREPANCY: C# models OPVPDef as scalar int, real serializer = int32[7]/float[7] array]`
    - `f137 OPVPDefAngle: LEN(len4)+7*zz-varint @ 0x3ee (C#type=int) [DISCREPANCY: C# models OPVPDefAngle as scalar int, real serializer = int32[7]/float[7] array]`
    - `f173 OUnderClothes: zz-varint @ 0x40a (C#type=int)`
    - `f174 ONewbie: zz-varint @ 0x40e (C#type=int)`
    - `f177 OPetCarryNum: zz-varint @ 0x412 (C#type=int)`
    - `f178 OPetHomeNum: zz-varint @ 0x416 (C#type=int)`
    - `f179 OPetOwendNumMax: zz-varint @ 0x41a (C#type=int)`
    - `f180 OCharContribution: zz-varint @ 0x41e (C#type=int)`
    - `f200 OCharRemainsExp: zz-varint @ 0x422 (C#type=int)`
    - `f201 OFarmOpenFlag: zz-varint @ 0x426 (C#type=short)`
    - `f202 OFarmExp: zz-varint @ 0x42a (C#type=int)`
    - `f203 OFarmEvaluation: zz-varint @ 0x42e (C#type=int)`
    - `f204 OLastResetTime: zz-varint @ 0x432 (C#type=int)`
    - `f205 OSkinColor: zz-varint @ 0x436 (C#type=int)`
    - `f206 OHairColor: zz-varint @ 0x43a (C#type=int)`
    - `f207 OInnerColor: zz-varint @ 0x43e (C#type=int)`
    - `f208 OFaceTattooIndex: zz-varint @ 0x442 (C#type=int)`
    - `f209 OEyeBall: zz-varint @ 0x446 (C#type=int)`
    - `f210 OAdditionalHate: LEN(len4)+7*zz-varint @ 0x44c (C#type=int) [DISCREPANCY: C# models OAdditionalHate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f211 OPlayerAtk: LEN(len4)+7*fixed4 @ 0x468 (C#type=int) [DISCREPANCY: C# models OPlayerAtk as scalar int, real serializer = int32[7]/float[7] array]`
    - `f212 OFarmFriendGatherCount: zz-varint @ 0x484 (C#type=int)`
    - `f214 OPlayerCrit: LEN(len4)+7*fixed4 @ 0x488 (C#type=int) [DISCREPANCY: C# models OPlayerCrit as scalar int, real serializer = int32[7]/float[7] array]`
    - `f220 OFaceTattooColor: zz-varint @ 0x4a4 (C#type=int)`
    - `f221 OEyeColor: zz-varint @ 0x4a8 (C#type=int)`
    - `f222 OAttrAtkFlag: LEN(len4)+7*zz-varint @ 0x4ac (C#type=int) [DISCREPANCY: C# models OAttrAtkFlag as scalar int, real serializer = int32[7]/float[7] array]`
    - `f223 OCombatNPCID: zz-varint @ 0x4c8 (C#type=int)`
    - `f224 OBattleState: zz-varint @ 0x4cc (C#type=int)`
    - `f226 OHammerModeTime: LEN(len4)+7*zz-varint @ 0x4d0 (C#type=int) [DISCREPANCY: C# models OHammerModeTime as scalar int, real serializer = int32[7]/float[7] array]`
    - `f227 OHideFashion: zz-varint @ 0x4ec (C#type=short)`
    - `f228 OHideSuite: zz-varint @ 0x4f0 (C#type=short)`
    - `f229 OHideHelm: zz-varint @ 0x4f4 (C#type=short)`
    - `f232 OJinLiValue: zz-varint @ 0x4f8 (C#type=int)`
    - `f233 OJinLiStep1MaxValue: LEN(len4)+7*zz-varint @ 0x4f6 (C#type=int) [DISCREPANCY: C# models OJinLiStep1MaxValue as scalar int, real serializer = int32[7]/float[7] array]`
    - `f234 OJinLiStep2MaxValue: LEN(len4)+7*zz-varint @ 0x512 (C#type=int) [DISCREPANCY: C# models OJinLiStep2MaxValue as scalar int, real serializer = int32[7]/float[7] array]`
    - `f235 OJinLiStep1ReduceValue: zz-varint @ 0x52e (C#type=int)`
    - `f236 OJinLiStep2ReduceValue: zz-varint @ 0x532 (C#type=int)`
    - `f237 OEquipTitleID: zz-varint @ 0x536 (C#type=int)`
    - `f238 OTitleExp: zz-varint @ 0x53a (C#type=int)`
    - `f239 OTitleLevel: zz-varint @ 0x53e (C#type=int)`
    - `f240 OEquipTitleBuff: zz-varint @ 0x542 (C#type=int)`
    - `f241 OSystemUnlockData: zz-varint @ 0x546 (C#type=int)`
    - `f242 OGuildContribution: zz-varint @ 0x54a (C#type=int)`
    - `f243 OExtDailyExp: zz-varint @ 0x54e (C#type=int)`
    - `f244 OGuildId: zz-varint @ 0x552 (C#type=int)`
    - `f245 OTeamPasswordFlag: zz-varint @ 0x556 (C#type=short)`
    - `f252 OFacialInfo1: zz-varint @ 0x55a (C#type=short)`
    - `f253 OFacialInfo2: zz-varint @ 0x55e (C#type=short)`
    - `f254 OFacialInfo3: zz-varint @ 0x562 (C#type=short)`
    - `f255 OFacialInfo4: zz-varint @ 0x566 (C#type=short)`
    - `f256 OFacialInfo5: zz-varint @ 0x56a (C#type=short)`
    - `f257 OFacialInfo6: zz-varint @ 0x56e (C#type=short)`
    - `f258 OFacialInfo7: zz-varint @ 0x572 (C#type=short)`
    - `f259 OFacialInfo8: zz-varint @ 0x576 (C#type=short)`
    - `f260 OFacialInfo9: zz-varint @ 0x57a (C#type=short)`
    - `f261 OFacialInfo10: zz-varint @ 0x57e (C#type=short)`
    - `f262 OFacialInfo11: zz-varint @ 0x582 (C#type=short)`
    - `f263 OFacialInfo12: zz-varint @ 0x586 (C#type=short)`
    - `f264 OFacialInfo13: zz-varint @ 0x58a (C#type=short)`
    - `f265 OFacialInfo14: zz-varint @ 0x58e (C#type=short)`
    - `f266 OFacialInfo15: zz-varint @ 0x592 (C#type=short)`
    - `f267 OFacialInfo16: zz-varint @ 0x596 (C#type=short)`
    - `f268 OFacialInfo17: zz-varint @ 0x59a (C#type=short)`
    - `f269 OFacialInfo18: zz-varint @ 0x59e (C#type=short)`
    - `f270 OFacialInfo19: zz-varint @ 0x5a2 (C#type=short)`
    - `f271 OFacialInfo20: zz-varint @ 0x5a6 (C#type=short)`
    - `f272 OFacialInfo21: zz-varint @ 0x5aa (C#type=short)`
    - `f273 OFacialInfo22: zz-varint @ 0x5ae (C#type=short)`
    - `f274 OFacialInfo23: zz-varint @ 0x5b2 (C#type=short)`
    - `f275 OFacialInfo24: zz-varint @ 0x5b6 (C#type=short)`
    - `f276 OFacialInfo25: zz-varint @ 0x5ba (C#type=short)`
    - `f284 OVIP: zz-varint @ 0x5be (C#type=short)`
    - `f293 OVIPLevel: zz-varint @ 0x5c2 (C#type=int)`
    - `f294 OVIPExp: zz-varint @ 0x5c6 (C#type=int)`
    - `f300 OVIPBaseCanUse: zz-varint @ 0x5ca (C#type=short)`
    - `f307 OGameVIP: zz-varint @ 0x5ce (C#type=short)`
    - `f308 OQQVIP: zz-varint @ 0x5d2 (C#type=short)`
    - `f309 OYearQQVIP: zz-varint @ 0x5d6 (C#type=short)`
    - `f310 OSuperQQVIP: zz-varint @ 0x5da (C#type=short)`
    - `f311 ONetbarLevel: zz-varint @ 0x5de (C#type=short)`
    - `f322 OCharHRLevel: zz-varint @ 0x5e2 (C#type=int)`
    - `f323 OCharHRPoint: zz-varint @ 0x5e6 (C#type=int)`
    - `f328 OXYVIP: zz-varint @ 0x5ea (C#type=short)`
    - `f329 OFacialInfo26: zz-varint @ 0x5ee (C#type=short)`
    - `f330 OFacialInfo27: zz-varint @ 0x5f2 (C#type=short)`
    - `f331 OFacialInfo28: zz-varint @ 0x5f6 (C#type=short)`
    - `f332 OFacialInfo29: zz-varint @ 0x5fa (C#type=short)`
    - `f333 OFacialInfo30: zz-varint @ 0x5fe (C#type=short)`
    - `f334 OFacialInfo31: zz-varint @ 0x602 (C#type=short)`
    - `f335 OFacialInfo32: zz-varint @ 0x606 (C#type=short)`
    - `f336 OFacialInfo33: zz-varint @ 0x60a (C#type=short)`
    - `f337 OFacialInfo34: zz-varint @ 0x60e (C#type=short)`
    - `f338 OFacialInfo35: zz-varint @ 0x612 (C#type=short)`
    - `f339 OFacialInfo36: zz-varint @ 0x616 (C#type=short)`
    - `f340 OFacialInfo37: zz-varint @ 0x61a (C#type=short)`
    - `f341 OFacialInfo38: zz-varint @ 0x61e (C#type=short)`
    - `f342 OFacialInfo39: zz-varint @ 0x622 (C#type=short)`
    - `f343 OFacialInfo40: zz-varint @ 0x626 (C#type=short)`
    - `f344 OFacialInfo41: zz-varint @ 0x62a (C#type=short)`
    - `f345 OFacialInfo42: zz-varint @ 0x62e (C#type=short)`
    - `f346 OFacialInfo43: zz-varint @ 0x632 (C#type=short)`
    - `f347 OFacialInfo44: zz-varint @ 0x636 (C#type=short)`
    - `f348 OFacialInfo45: zz-varint @ 0x63a (C#type=short)`
    - `f349 OFacialInfo46: zz-varint @ 0x63e (C#type=short)`
    - `f350 OFacialInfo47: zz-varint @ 0x642 (C#type=short)`
    - `f352 OTGPVIP: zz-varint @ 0x646 (C#type=short)`
    - `f359 OFluteTune: zz-varint @ 0x64a (C#type=int)`
    - `f360 ODefenseReduceHPModifyRate: LEN(len4)+7*fixed4 @ 0x5dc (C#type=int) [DISCREPANCY: C# models ODefenseReduceHPModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f361 ODefenseReduceStaModifyRate: LEN(len4)+7*fixed4 @ 0x5f8 (C#type=int) [DISCREPANCY: C# models ODefenseReduceStaModifyRate as scalar int, real serializer = int32[7]/float[7] array]`
    - `f370 OWildHuntCamp: zz-varint @ 0x614 (C#type=int)`
    - `f377 OTotalHRPoint: zz-varint @ 0x618 (C#type=int)`
    - `f378 OLikeHunterOfficer: zz-varint @ 0x61c (C#type=int)`
    - `f383 OLevelShowType: zz-varint @ 0x620 (C#type=int)`
    - `f385 OMonolopyRoundCount: zz-varint @ 0x624 (C#type=int)`
    - `f386 OMonolopyActivity: zz-varint @ 0x628 (C#type=int)`
    - `f387 OMonolopyCurGrid: zz-varint @ 0x62c (C#type=int)`
    - `f402 OSoulStoneLevel: zz-varint @ 0x630 (C#type=int)`
    - `f403 OWeeklyRefreshTime: zz-varint @ 0x634 (C#type=int)`
    - `f405 OSoulStoneAtkLevel: zz-varint @ 0x638 (C#type=int)`
    - `f406 ODynamiteAttack: LEN(len4)+7*zz-varint @ 0x63c (C#type=int) [DISCREPANCY: C# models ODynamiteAttack as scalar int, real serializer = int32[7]/float[7] array]`
    - `f407 ODynamiteThrsh: LEN(len4)+7*zz-varint @ 0x658 (C#type=int) [DISCREPANCY: C# models ODynamiteThrsh as scalar int, real serializer = int32[7]/float[7] array]`
    - `f408 OGuildBanChatEndTime: zz-varint @ 0x674 (C#type=int)`
- ⚠ discrepancy: (1) TlvCharPublicAttributes.cs contains field 175 (OStateFlag) which this serializer DOES NOT emit (serializer field set = 180, C# = 181; 175 absent). Verify whether 175 is real or a doc over-generation. (2) Many fields the C# models as scalar int are int32[7] arrays on the wire: 2,17,22,26,27,28,29,32,33,34,35,39-52,68,134,135,136,137,210,222,226,233,234,406,407; and fields 30,31,211,214,360,361 are float[7]. (3) Array wire_type is 5 (LEN_DELIM)+4B size prefix. Field names by field_id match C# exactly otherwise.

### TlvClientSettingsData_DebugFormat `@1016b080` — both
*TDR DebugFormat dumper for TlvClientSettingsData: '[stChatTabs]', '[stHunterStar]', '[stGamePadCustom]', '[stSilverTips]'.* (server: Debug-only; authoritative field names., conf high)
- TLV: TlvClientSettingsData
- fields:
    - `stChatTabs: sub-struct`
    - `stHunterStar: sub-struct`
    - `stGamePadCustom: sub-struct`
    - `stSilverTips: sub-struct`

### TlvClientSettingsData_Write_A `@1016a880` — both
*TDR serializer (variant A) for TlvClientSettingsData. Writes 4 length-delimited sub-structs: field2 stChatTabs (tag 0x25 -> FUN_101678c0), field3 stHunterStar (tag 0x35 -> FUN_10168340), field4 stGamePadCustom (tag 0x45 -> FUN_10168970), field5 stSilverTips (tag 0x55 -> FUN_1016a090).* (server: Server must (de)serialize client settings blob (tabs, hunter-star, gamepad, silver-tips)., conf high)
- TLV: TlvClientSettingsData
- fields:
    - `field 2: stChatTabs sub-struct (tag 0x25, sub_101678c0=TlvChannelTabs)`
    - `field 3: stHunterStar sub-struct (tag 0x35, sub_10168340)`
    - `field 4: stGamePadCustom sub-struct (tag 0x45, sub_10168970)`
    - `field 5: stSilverTips sub-struct (tag 0x55, sub_1016a090)`

### TlvClientSettingsData_Write_B `@1016a9d0` — both
*Variant B of TlvClientSettingsData writer: sub-structs via FUN_101679d0/FUN_10168390/FUN_10168d40/FUN_1016a110.* (server: Canonical wire form., conf high)
- TLV: TlvClientSettingsData
- fields:
    - `field 2: stChatTabs (sub_101679d0)`
    - `field 3: stHunterStar (sub_10168390)`
    - `field 4: stGamePadCustom (sub_10168d40)`
    - `field 5: stSilverTips (sub_1016a110)`

### TlvCommerceBoat_Pack_be `@1011fb90` — both
*Big-endian variant of FUN_1011fac0: sub via FUN_1011b160; contributeResPoint fixed-BE tag 0x23; challengeTimes u8 tag 0x31; refreshTimestamp fixed-BE tag 0x43.* (server: Yes, conf high)
- TLV: TlvCommerceBoat
- fields:
    - `commerceBoatInfo: sub @ 0 - tag 0x15`
    - `contributeResPoint: uint32 @ 0x48 - tag 0x23 (BE)`
    - `challengeTimes: uint8 @ 0x4c - tag 0x31`
    - `refreshTimestamp: uint32 @ 0x4d - tag 0x43 (BE)`

### TlvCommerceBoat_Pack_varint `@1011fac0` — both
*Pack the commerce-boat/guild-war sub-struct. tag 0x15 sub-struct (FUN_1011b090); tag 0x20 contributeResPoint(u32 varint @0x48); tag 0x31 challengeTimes(u8 @0x4c); tag 0x40 refreshTimestamp(u32 @0x4d). Field names from FUN_101200e0 printer.* (server: Yes, conf high)
- TLV: TlvCommerceBoat
- fields:
    - `commerceBoatInfo: sub-struct @ 0 - tag 0x15 (w5)`
    - `contributeResPoint: uint32 @ 0x48 - tag 0x20 (w0)`
    - `challengeTimes: uint8 @ 0x4c - tag 0x31 (w1)`
    - `refreshTimestamp: uint32 @ 0x4d - tag 0x40 (w0)`

### TlvCounterDataList_DebugFormat `@10246740` — unknown
*DebugFormat dumper for an array of counter records. Writes '[count]' then up to 64 (0x40) '[data]' elements, recursing into FUN_10245ca0 per element.* (server: None (debug text). Confirms CounterDataList caps its array at 64., conf medium)
- TLV: TlvCounterDataList
- fields:
    - `count: int32 @ obj+0 (max 64)`
    - `data[]: counter record dumped by FUN_10245ca0`

### TlvCounterData_DebugFormat `@10245ca0` — unknown
*DebugFormat dumper for a counter/online-time record. Emits a fixed 16-entry '[vars]' array (0x10 int64s), then '[length]', a '[data]' byte array (cap 1024), and '[lastUpdate]' int64. Diagnostic path.* (server: None (debug text). Documents the in-memory layout (16 int64 vars + data blob + lastUpdate) of the counter record., conf medium)
- TLV: TlvCounterDataList, TlvOnlineTime
- fields:
    - `vars[16]: int64 array @ obj+4..`
    - `length: int32 @ obj+0x11*4 (obj[0x11])`
    - `data[]: byte array @ obj+0x48 (cap 1024)`
    - `lastUpdate: int64 @ obj[0x112]`

### TlvCounterData_DebugPrint `@0x10154af0` — unknown
*TdrBufUtil printer for TlvCounterData: [counterNum][counterData(array,max0x40=64)] each elem FUN_10154120.* (server: Diagnostic; naming source for counter data., conf high)
- TLV: TlvCounterData
- fields:
    - `counterNum: uint8 @ 0 (0..64)`
    - `counterData[]: nested (FUN_10154120)`

### TlvCounterData_Unpack_fixed `@0x10154870` — S2C
*Fixed variant of FUN_101546c0 (matches TlvCounterData doc address 0x10154870): count + nested array via FUN_10153f00.* (server: Server-side deserializer for TlvCounterData., conf high)
- TLV: TlvCounterData
- fields:
    - `1 counterNum: uint8 @ 0 (max 0x40)`
    - `2 counterData[]: nested (FUN_10153f00)`
- ⚠ discrepancy: TlvCounterData.md 'Address 0x10154870' is THIS function. Doc calls field1 counterNum(uint8) and field2 counterData(nested sub_10153F00) — consistent; note field1 here doubles as the element count (max 64).

### TlvDailyList_DebugFormat `@0x102281f0` — unknown
*TdrBufUtil.cpp DebugFormat: count(int32@0, max 0x20) + dailys[] via FUN_10227820.* (server: Debug only; documents daily-list layout., conf high)
- fields:
    - `count: int32 @0 (max 0x20)`
    - `dailys[]: element @ FUN_10227820`

### TlvDragonBoxLotteryData_DebugFormat `@0x102304e0` — unknown
*TdrBufUtil.cpp DebugFormat of DragonBoxLotteryData: hitCount, pieces, ultimatePrize, piecePrizes, blackFaceCount, iFHasSSR, dragonShopID, dragonShopEndTime(time), freshNumBitCount+freshNumBit[] (max 10), freshNumTenCount+freshNumTen[] (max 10), dragonBoxShopItems, freshNumCnt, fetchState.* (server: Debug only; authoritative field list for the DragonBox lottery struct., conf high)
- TLV: TlvDragonBoxLotteryData
- fields:
    - `hitCount uint8 @0`
    - `pieces sub @ FUN_1022cce0`
    - `ultimatePrize sub @ FUN_1022d470`
    - `piecePrizes sub @ FUN_1022de30`
    - `blackFaceCount int32 @0xf5`
    - `iFHasSSR int32 @0xf9`
    - `dragonShopID int32 @0xfd`
    - `dragonShopEndTime uint32(time) @0x101`
    - `freshNumBitCount int32 @0x105 (max 10)`
    - `freshNumBit[] int32 @0x109`
    - `freshNumTenCount int32 @0x131 (max 10)`
    - `freshNumTen[] int32 @0x135`
    - `dragonBoxShopItems sub @ FUN_1022eda0`
    - `freshNumCnt int32 @0x1dd`
    - `fetchState int32 @0x1e1`
- ⚠ discrepancy: Confirms the 15-field superset the doc truncated to 9. dragonShopEndTime uses time format (DAT_11d9f574), not plain int32 as doc labels it.

### TlvDragonBoxLotteryData_Pack_v0 `@0x1022f160` — both
*TdrBuf.h wire pack of DragonBoxLotteryData (15 fields). f1 hitCount byte (tag 0x11); f2 pieces (tag 0x25, FUN_1022c580); f3 ultimatePrize (0x35, FUN_1022cfe0); f4 piecePrizes (0x45, FUN_1022d6f0); f5 blackFaceCount (0x50) @0xf5; f6 iFHasSSR (0x60) @0xf9; f7 dragonShopID (0x70) @0xfd; f8 dragonShopEndTime (0x80) @0x101; f9 freshNumBitCount (0x90) @0x105; f10 freshNumBit[] int32-array (0xa5) @0x109; f11 freshNumTenCount (0xb0) @0x131; f12 freshNumTen[] (0xc5) @0x135; f13 dragonBoxShopItems (0xd5, FUN_1022e780); f14 freshNumCnt (0xe0) @0x1dd; f15 fetchState (0xf0) @0x1e1.* (server: Yes — critical: server must serialize the full 15-field DragonBox lottery payload (S2C shop/lottery state). Paired with FUN_1022f570 (fixed-32 cut variant)., conf high)
- TLV: TlvDragonBoxLotteryData, TlvDragonBoxShopItems, TlvPiecePrizes
- fields:
    - `f1 hitCount: uint8 @0 (tag 0x11)`
    - `f2 pieces: sub-array @ FUN_1022c580 (tag 0x25)`
    - `f3 ultimatePrize: sub @ FUN_1022cfe0 (tag 0x35)`
    - `f4 piecePrizes: sub-array @ FUN_1022d6f0 (tag 0x45)`
    - `f5 blackFaceCount: varint @0xf5 (tag 0x50)`
    - `f6 iFHasSSR: varint @0xf9 (tag 0x60)`
    - `f7 dragonShopID: varint @0xfd (tag 0x70)`
    - `f8 dragonShopEndTime: varint @0x101 (tag 0x80)`
    - `f9 freshNumBitCount: varint @0x105 (tag 0x90, max 10)`
    - `f10 freshNumBit[]: int32 array @0x109 (tag 0xa5)`
    - `f11 freshNumTenCount: varint @0x131 (tag 0xb0, max 10)`
    - `f12 freshNumTen[]: int32 array @0x135 (tag 0xc5)`
    - `f13 dragonBoxShopItems: sub @ FUN_1022e780 (tag 0xd5)`
    - `f14 freshNumCnt: varint @0x1dd (tag 0xe0)`
    - `f15 fetchState: varint @0x1e1 (tag 0xf0)`
- ⚠ discrepancy: Doc TlvDragonBoxLotteryData lists only 9 fields (truncates after freshNumBitCount) and mis-tracks offsets (e.g. field 5 blackFaceCount shown @offset 245 duplicating 'pieces'). Real struct has 15 fields; missing from doc: freshNumBit[] (f10), freshNumTenCount (f11), freshNumTen[] (f12), dragonBoxShopItems (f13), freshNumCnt (f14), fetchState (f15). Also fields f2/f3/f4 offsets in doc (245/249/253) are wrong — those are sub-array structs, not int32 @ those offsets.

### TlvDragonBoxLotteryData_Pack_v1 `@0x1022f570` — both
*TdrBuf.h wire pack, cut-version of FUN_1022f160 using fixed-32 wire (tags 0x53/0x63/0x73/0x83/0x93/0xb3/0xe3/0xf3, scalars via FUN_1010c190) and sub-structs FUN_1022c6a0/FUN_1022d030/FUN_1022d810/FUN_1022e860.* (server: Yes — wire serializer (cut variant)., conf high)
- TLV: TlvDragonBoxLotteryData
- fields:
    - `Same 15 fields as FUN_1022f160 but scalars encoded as fixed32 (wire3) instead of varint (wire0)`
- ⚠ discrepancy: See FUN_1022f160 (doc truncated to 9 fields).

### TlvDragonBoxShopItems_DebugFormat `@0x1022eda0` — unknown
*TdrBufUtil.cpp DebugFormat: count(int32@0, max 10) + dragonBoxShopItems[] via FUN_1022e4f0.* (server: Debug only; documents dragon-box shop items array., conf high)
- TLV: TlvDragonBoxShopItems
- fields:
    - `count: int32 @0 (max 10)`
    - `dragonBoxShopItems[]: element @ FUN_1022e4f0`

### TlvEntrustGroupStatList_DebugPrint `@0x10149fe0` — unknown
*TdrBufUtil printer for TlvEntrustGroupStatList: [entrustGroupStatCount][entrustGroupStatInfo(array,max0xf=15)] each elem FUN_101468d0.* (server: Diagnostic; entrust (quest commission) group stats., conf high)
- TLV: TlvEntrustGroupStatList
- fields:
    - `entrustGroupStatCount: int32 @ 0 (0..15)`
    - `entrustGroupStatInfo[]: nested (FUN_101468d0)`

### TlvEquipPlanList_Pack_be `@10111900` — both
*Big-endian variant of TlvEquipPlanList pack (element via FUN_10110c50).* (server: Yes, conf high)
- TLV: TlvEquipPlanList
- fields:
    - `curPlan: uint8 @ 0 - tag 0x11`
    - `planCnt: uint8 @ 1 - tag 0x21`
    - `equipPlanList: array @ 2 - tag 0x35`
- ⚠ discrepancy: Same equipPlanList wire-type mismatch as FUN_101117c0.

### TlvEquipPlanList_Pack_varint `@101117c0` — both
*Pack TlvEquipPlanList. tag 0x11 curPlan(u8@0); tag 0x21 planCnt(u8@1, max 20); tag 0x35 equipPlanList = length-delimited array of TlvEquipPlan (FUN_10110a90).* (server: Yes, conf high)
- TLV: TlvEquipPlanList
- fields:
    - `curPlan: uint8 @ 0 - tag 0x11 (f1,w1)`
    - `planCnt: uint8 @ 1 - tag 0x21 (f2,w1)`
    - `equipPlanList: TlvEquipPlan array @ 2 - tag 0x35 (f3,w5), max 20`
- ⚠ discrepancy: TlvEquipPlanList.md field3 equipPlanList is documented as 'int32 tag 0x33 (wire 3)'; ACTUAL is a length-delimited sub-struct array with tag 0x35 (wire 5).

### TlvEquipPlanList_Unpack_be `@10111d50` — both
*Big-endian unpack variant of TlvEquipPlanList (element via FUN_10111100 = TlvEquipPlan read, matching the doc's sub_10111100).* (server: Yes, conf high)
- TLV: TlvEquipPlanList, TlvEquipPlan
- fields:
    - `curPlan: uint8 @ 0`
    - `planCnt: uint8 @ 1`
    - `equipPlanList: TlvEquipPlan array, max 20`

### TlvEquipPlanList_Unpack_varint `@10111b10` — both
*Unpack TlvEquipPlanList: reads tags; field1 curPlan u8@0, field2 planCnt u8@1, field3 = read length-prefix (FUN_1010c870) then loop up to 20 TlvEquipPlan elements (FUN_10110ee0). Presence flags at struct+0x3982.* (server: Yes, conf high)
- TLV: TlvEquipPlanList
- fields:
    - `curPlan: uint8 @ 0`
    - `planCnt: uint8 @ 1`
    - `equipPlanList: array, max 20 elems`

### TlvEquipPlan_Pack_be `@10110c50` — both
*Big-endian variant of TlvEquipPlan pack: same layout but the sub-struct element uses the fixed-BE serializer (FUN_1010fff0); name still tag 0x25.* (server: Yes, conf high)
- TLV: TlvEquipPlan
- fields:
    - `planId: uint8 @ 0 - tag 0x11`
    - `name: char[20] string @ 1 - tag 0x25`
    - `equipCnt: uint8 @ 0x15 - tag 0x31`
    - `equipList: sub-struct array @ 0x16 - tag 0x45 (BE elems)`
- ⚠ discrepancy: Same as FUN_10110a90 - name/equipList wire types in the doc are wrong.

### TlvEquipPlan_Pack_varint `@10110a90` — both
*Pack TlvEquipPlan. tag 0x11 planId(u8@0); tag 0x25 name = string char[0x14] @1 (reserve+PutBytes+patch len); tag 0x31 equipCnt(u8@0x15, max 10); tag 0x45 equipList = array of sub-struct (FUN_1010feb0) length-prefixed.* (server: Yes - server must build TlvEquipPlan with these exact wire-5 tags for name and equipList., conf high)
- TLV: TlvEquipPlan
- fields:
    - `planId: uint8 @ 0 - tag 0x11 (f1,w1)`
    - `name: char[20] string @ 1 - tag 0x25 (f2,w5 LEN_DELIM)`
    - `equipCnt: uint8 @ 0x15 - tag 0x31 (f3,w1)`
    - `equipList: sub-struct array @ 0x16 - tag 0x45 (f4,w5), max 10 elems`
- ⚠ discrepancy: TlvEquipPlan.md is WRONG: field2 name is a char[20] STRING with tag 0x25 (wire 5), NOT 'int32 tag 0x23'; field4 equipList is a length-delimited sub-struct ARRAY with tag 0x45 (wire 5), NOT 'int32 tag 0x43'. Also doc places name @ offset 21 but name is @ offset 1 (equipCnt is @ offset 21).

### TlvEquips_DebugPrint `@0x1013be60` — unknown
*TdrBufUtil printer for TlvEquips: [count][equips(array,max0x28=40)] each elem prints [itemType] (uint32 @ elem+0, stride 8 bytes).* (server: Diagnostic; equip list field names/bounds., conf high)
- TLV: TlvEquips
- fields:
    - `count: uint32 @ 0 (0..40)`
    - `equips[]: struct{ itemType: uint32 @ +0 } stride 8 bytes, starting @ 4`

### TlvFarmData_DebugFormat `@0x10205ad0` — unknown
*DebugFormat text dump for TlvFarmData (paired read is sub_10205140). Emits the FULL 27-field farm record: scalars, fixed byte arrays, nested-struct arrays (sBCPData[6], sPFData[6], sPlowLandData[3], petAvatarInfo[], equipShowInfo[]), and trailing flags. This is the ground-truth layout of the farm struct.* (server: Low as code (debug), but High as documentation: the farm record the server must (de)serialize has all 27 fields with the array bounds shown (petAvatar<=30, equipShow<=12)., conf high)
- TLV: TlvFarmData, TlvPetAvatarData
- fields:
    - `farmID: int32 @ +0`
    - `ownerUID: int32 @ +4`
    - `ownerDBID: int64 @ +8 (%I64u)`
    - `remark: int32 @ +0x10`
    - `credit: int32 @ +0x14`
    - `hits: int32 @ +0x18`
    - `currentHits: int32 @ +0x1c`
    - `maxGatherCount: int32 @ +0x20`
    - `autoGatherPetID: int32 @ +0x24`
    - `autoGatherBCPType: int32 @ +0x28`
    - `sACPOpen: uint8[4] @ +0x2c (' 0x%02x')`
    - `sOFOpen: uint8[2] @ +0x30`
    - `sBCPData: array[6] nested (FUN_101ff650)`
    - `sPFData: array[6] nested (FUN_101ffd00)`
    - `sPlowLandData: array[3] nested (FUN_10200470)`
    - `lastFarmRefreshTime: int32 @ +0x101`
    - `farmCanBeGatheredCount: int32 @ +0x105`
    - `friendGatherBonus: int8 @ +0x109 ('0x%02x')`
    - `safeDataFlag: int16 @ +0x10a`
    - `facilityUseFlag: int32 @ +0x10c`
    - `farmOpenFlag: int8 @ +0x110`
    - `petAvatarCount: int16 @ +0x111 (0..30)`
    - `petAvatarInfo: array[petAvatarCount] TlvPetAvatarData element (FUN_10200df0)`
    - `equipShowCount: int16 @ +0x5e1 (0..12)`
    - `equipShowInfo: array[equipShowCount] EquipShowInfo element (FUN_102033d0)`
    - `gender: int8 @ +0xf1db ('0x%02x')`
    - `skipCutScene: int8`
- ⚠ discrepancy: Generated TlvFarmData doc lists only 8 fields (farmID..maxGatherCount) as the 0x99 subset. This DebugFormat proves the real struct has 27 fields incl. autoGatherPetID/autoGatherBCPType, the sACPOpen/sOFOpen byte arrays, sBCPData[6]/sPFData[6]/sPlowLandData[3] nested arrays, timestamp/flag fields, petAvatarInfo[] and equipShowInfo[] arrays, gender and skipCutScene. Offsets above from the dumper's member reads.

### TlvFriendInsts_DebugFormat `@0x102358f0` — unknown
*TdrBufUtil.cpp DebugFormat: count(int32@0, max 2000) + friendInsts[] via FUN_10234f20.* (server: Debug only; documents friend-instances list (social/friends S2C)., conf high)
- TLV: TlvFriendInsts
- fields:
    - `count: int32 @0 (max 2000)`
    - `friendInsts[]: element @ FUN_10234f20`

### TlvFriendListContainer_DebugFormat `@101740f0` — both
*TDR DebugFormat dumper for TlvFriendListContainer. Reveals true field order: iFriendCount + astFriendData[] (sub FUN_1016bdf0, max 500), iPasserbyCount + astPasserbyData[] (sub FUN_1016c990, max 20), iBlacklistCount + astBlacklistData[] (sub FUN_1016d370, max 20), iFriendGroupCount + astFriendGroupData[] (sub FUN_1016dcf0, max 10).* (server: HIGH — server sends the player's friend/passerby/blacklist/group lists; this dumper gives the correct field names and per-list caps., conf high)
- TLV: TlvFriendListContainer
- fields:
    - `iFriendCount: int32 @ +0 (max 500)`
    - `astFriendData[]: sub_1016bdf0 elements`
    - `iPasserbyCount: int32 @ +0x23a6 (max 20)`
    - `astPasserbyData[]: sub_1016c990 elements`
    - `iBlacklistCount: int32 @ +0x24c4 (max 20)`
    - `astBlacklistData[]: sub_1016d370 elements`
    - `iFriendGroupCount: int32 @ +0x25dd (max 10)`
    - `astFriendGroupData[]: sub_1016dcf0 elements @ +0x25de`
- ⚠ discrepancy: The generated TlvFriendListContainer doc is scrambled: it lists astFriendData as field 8 -> sub_1016DA60 and mislabels iPasserbyCount/iBlacklistCount/iFriendGroupCount as int32 sub-structs. Actual layout (from this DebugFormat) pairs each count with its array immediately: friends(sub_1016bdf0,500), passerby(sub_1016c990,20), blacklist(sub_1016d370,20), groups(sub_1016dcf0,10). Element sub-struct addresses in the doc do not match the real element dumpers.

### TlvGamePadCustom_Write_A `@10168970` — both
*TDR serializer (variant A) for a 24-byte all-uint8 struct: fields 1..24 each uint8 @ +0..+0x17, tags 0x11,0x21,0x31,...,0x181 (wire1). This is stGamePadCustom within TlvClientSettingsData.* (server: Server must round-trip the gamepad custom mapping (24 bytes)., conf medium)
- TLV: TlvClientSettingsData.stGamePadCustom (24 button-mapping bytes)
- fields:
    - `fields 1..24: uint8 each @ +0 .. +0x17 (tags 0x11,0x21,...,0x181)`

### TlvGamePadCustom_Write_B `@10168d40` — both
*Byte-identical duplicate of FUN_10168970 (24 uint8 fields).* (server: Same as FUN_10168970., conf medium)
- TLV: TlvClientSettingsData.stGamePadCustom
- fields:
    - `fields 1..24: uint8 each @ +0 .. +0x17`

### TlvGenericList_DebugFormat `@1016f2a0` — both
*TDR DebugFormat dumper for a generic count+array struct: '[count]' int32 then '[data]' array (max 50) with element dumper FUN_1016e980.* (server: Debug-only; identifies a count-prefixed list., conf medium)
- TLV: unknown (generic list; element sub_1016e980)
- fields:
    - `count: int32 @ +0 (0<=count<=50)`
    - `data[]: array of sub_1016e980 elements`

### TlvGiftData_Write `@1024c5c0` — both
*Wire WRITER for TlvGiftData. Writes field_id 2 giftAttr as a wire5 nested sub-struct (tag 0x25, via FUN_1024bf30, length back-patched); field_id 3 giftNum as a byte (tag 0x31 wire1, via FUN_101150a0, max 100); field_id 4 giftId as a wire5 length-delimited array of int32 (tag 0x45, elements via FUN_1010c560 from obj+0x11 stride 4); field_id 5 giftState as a wire5 array of bytes (tag 0x55, elements via FUN_101150a0 from obj+0x1a1). Element count at obj+0x10.* (server: High. Server must send giftAttr as a nested wire5 struct, giftNum as a byte, and giftId/giftState as wire5 arrays; the doc's giftAttr wire3 int32 would be wrong., conf high)
- TLV: TlvGiftData
- fields:
    - `field_id 2: giftAttr (wire5 nested sub-struct) tag=0x25 via FUN_1024bf30`
    - `field_id 3: giftNum uint8 tag=0x31 @ obj+0x10 (max 100)`
    - `field_id 4: giftId int32[] tag=0x45 @ obj+0x11 (stride 4)`
    - `field_id 5: giftState uint8[] tag=0x55 @ obj+0x1a1 (stride 1)`
- ⚠ discrepancy: TlvGiftData.md gives giftAttr tag 0x23 (field2, wire3 int32); the real writer emits it as tag 0x25 (wire5 nested sub-struct via FUN_1024bf30). Doc marks giftNum tag/type 'unknown' — real is field_id 3 tag 0x31 uint8. giftId(0x45)/giftState(0x55) arrays and max 100 match the doc.

### TlvGiftListElemArray_WriteA `@1024b510` — both
*WRITER for a struct with a count byte (field_id 1, tag 0x11 wire1, max 100) and an array of gift-list elements (field_id 2, tag 0x25 wire5) where each element is written by FUN_1024ae30, length back-patched via FUN_1010c3c0. Write counterpart of the gift-list array.* (server: High. Server must emit giftNum byte + wire5 element array to send a gift list., conf high)
- TLV: TlvGiftList
- fields:
    - `field_id 1: giftNum uint8 tag=0x11 @ obj+0 (max 100)`
    - `field_id 2: giftList[] tag=0x25 (wire5) elements via FUN_1024ae30`
- ⚠ discrepancy: TlvGiftList.md lists giftList as field_id 2 tag 0x23 (wire3); the real writer uses tag 0x25 (wire5, length-delimited element array). Wire type in doc is wrong.

### TlvGiftListElemArray_WriteB `@1024b620` — both
*Sibling of FUN_1024b510: same giftNum(0x11)+giftList array(0x25 wire5) writer, but element writer is FUN_1024ae80.* (server: High. Same as FUN_1024b510., conf high)
- TLV: TlvGiftList
- fields:
    - `field_id 1: giftNum uint8 tag=0x11 @ obj+0 (max 100)`
    - `field_id 2: giftList[] tag=0x25 (wire5) elements via FUN_1024ae80`
- ⚠ discrepancy: Same as FUN_1024b510: doc's field-2 wire3 (0x23) vs real wire5 (0x25).

### TlvGiftListElem_ReadA `@1024afa0` — both
*TLV READER for a 2-field gift-list element. Read loop: field_id 1 -> value via FUN_1010cbd0 (presence bit 0x1), field_id 2 -> single byte at obj+4 (presence bit 0x2); presence mask at obj+5. Sibling of FUN_1024b090. Element parser used by the gift-list array reader FUN_1024b800.* (server: Server must parse each gift entry (id/state pair) when receiving a gift list., conf medium)
- TLV: TlvGiftList
- fields:
    - `field_id 1: value (presence bit 0x1) via FUN_1010cbd0`
    - `field_id 2: uint8 (presence bit 0x2) @ obj+4`

### TlvGiftListElem_ReadB `@1024b090` — both
*TLV READER for a 2-field gift-list element; the sub_1024B090 referenced by TlvGiftList.md as its field-2 element parser. field_id 1 -> value via FUN_1010c870 (presence bit 0x1), field_id 2 -> byte at obj+4 (presence bit 0x2); presence mask at obj+5. Called per-element by FUN_1024b9b0.* (server: Server must parse each gift entry when receiving TlvGiftList., conf high)
- TLV: TlvGiftList
- fields:
    - `field_id 1: value (presence bit 0x1) via FUN_1010c870`
    - `field_id 2: uint8 (presence bit 0x2) @ obj+4`

### TlvGiftList_DebugFormat `@1024bc30` — unknown
*DebugFormat text dumper for the gift list. Emits '[giftNum]' (as '0x%02x', byte at obj[0], max 100) then a '[giftList]' array indexed via '%s[%u]%c', recursing into element dumper FUN_1024b280.* (server: None (debug text). Confirms giftNum/giftList naming for the gift-list readers/writers., conf high)
- TLV: TlvGiftList
- fields:
    - `giftNum: uint8 @ obj+0 (max 100)`
    - `giftList[]: element dumped by FUN_1024b280`

### TlvGiftList_ReadA `@1024b800` — both
*TLV READER for TlvGiftList (A variant). Read loop: field_id 1 -> giftNum byte at obj[0] (presence bit 0x1); field_id 2 -> length-delimited element array, reads a byte length, loops up to 100 elements each parsed by FUN_1024afa0, stores element count at obj[0]. Presence mask at obj+0x385.* (server: High. Server must parse an inbound gift list (count + element array)., conf high)
- TLV: TlvGiftList
- fields:
    - `field_id 1: giftNum uint8 (presence bit 0x1) @ obj+0`
    - `field_id 2: giftList[] (presence bit 0x2) elements via FUN_1024afa0 (max 100)`
- ⚠ discrepancy: Confirms 2-field TlvGiftList (giftNum + giftList array). Element reader is FUN_1024afa0 here.

### TlvGiftList_ReadB `@1024b9b0` — both
*TLV READER for TlvGiftList — the sub_1024B9B0 named in TlvGiftList.md. field_id 1 -> giftNum uint8 (presence bit 0x1); field_id 2 -> length-delimited array of gift elements parsed by FUN_1024b090 (max 100), element count stored at obj[0]. Presence mask at obj+0x385.* (server: High. Server must parse inbound TlvGiftList., conf high)
- TLV: TlvGiftList
- fields:
    - `field_id 1: giftNum uint8 (presence bit 0x1) @ obj+0`
    - `field_id 2: giftList[] (presence bit 0x2) elements via FUN_1024b090 (max 100)`
- ⚠ discrepancy: Matches TlvGiftList.md exactly (giftNum uint8 field1, giftList sub_1024B090 field2). No mismatch.

### TlvGlobalLevelStatContainer_DebugPrint `@0x10149410` — unknown
*TdrBufUtil printer for the global level-stat container, source of authoritative field names and array bounds.* (server: Diagnostic; naming source., conf high)
- TLV: TlvGlobalLevelStatContainer
- fields:
    - `globalStatCnt: uint8 @ 0 (max 10)`
    - `globalStatDataType: uint8[]`
    - `globalStatDataVal: uint32[]`
    - `levelDataCnt: uint16 @ 0x33 (max 5000)`
    - `levelStatDataInfo[]: nested (FUN_10147540)`
    - `levelModeDataCnt: uint8 @ 0x4808d (max 10)`
    - `levelModeStatDataInfo[]: nested (FUN_101480d0)`

### TlvGlobalLevelStatContainer_Pack_fixed `@0x101487d0` — S2C
*Fixed variant of FUN_101484d0: globalStatDataVal via FUN_1010c190, levelDataCnt via FUN_1010c120 (tag 0x42, fixed 2-byte), nested elems FUN_10146e70/FUN_10147a00.* (server: Server must serialize container (fixed encoding)., conf high)
- TLV: TlvGlobalLevelStatContainer
- fields:
    - `1 globalStatCnt: uint8 @ 0`
    - `2 globalStatDataType: uint8[] @ 1`
    - `3 globalStatDataVal: int32[] @ 0xb (fixed)`
    - `4 levelDataCnt: uint16 @ 0x33 (tag 0x42 fixed 2-byte)`
    - `5 levelStatDataInfo[]: nested (FUN_10146e70)`
    - `6 levelModeDataCnt: uint8 @ 0x4808d`
    - `7 levelModeStatDataInfo[]: nested (FUN_10147a00)`

### TlvGlobalLevelStatContainer_Pack_varint `@0x101484d0` — S2C
*TDR pack of the global level-stat container (varint): field1 globalStatCnt(u8@0,max10); field2 globalStatDataType u8 array (tag 0x25); field3 globalStatDataVal u32 array (tag 0x35, elems FUN_1010c5f0); field4 levelDataCnt u16@0x33 (tag 0x40 varint via FUN_1010c4d0, max5000); field5 levelStatDataInfo nested array (FUN_10146d20, tag 0x55); field6 levelModeDataCnt u8@0x4808d(tag 0x61,max10); field7 levelModeStatDataInfo nested array (FUN_101478b0, tag 0x75).* (server: Server must serialize global/level statistics container in this exact layout., conf high)
- TLV: TlvGlobalLevelStatContainer
- fields:
    - `1 globalStatCnt: uint8 @ 0 (tag 0x11, max 10)`
    - `2 globalStatDataType: uint8[] @ 1 (tag 0x25)`
    - `3 globalStatDataVal: uint32[] @ 0xb (tag 0x35)`
    - `4 levelDataCnt: uint16 @ 0x33 (tag 0x40 varint, max 5000)`
    - `5 levelStatDataInfo[]: nested (FUN_10146d20) (tag 0x55)`
    - `6 levelModeDataCnt: uint8 @ 0x4808d (tag 0x61, max 10)`
    - `7 levelModeStatDataInfo[]: nested (FUN_101478b0) (tag 0x75)`
- ⚠ discrepancy: Field names confirmed by printer FUN_10149410 ([globalStatCnt][globalStatDataType][globalStatDataVal][levelDataCnt][levelStatDataInfo][levelModeDataCnt][levelModeStatDataInfo]).

### TlvGuideBookAutoOpen_Unpack_v1 `@0x1018ed90` — both
*TDR unpack of the small sub-struct referenced as 'isFisrtAutoOpenGuideBook' (sub_1018EE90 in docs). Three fields: field_id 1 => scalar via FUN_1010cbd0 into (param_1) (presence 0x1); field_id 2 => scalar via FUN_1010cbd0 into (param_1+4) (presence 0x2); field_id 3 => 1 byte into (param_1+8) (presence 0x4). Flags word @ (param_1+9). Unknown fields skipped.* (server: Sub-struct of the guide-book data; server must serialize its 3 fields correctly (2x int32 + 1x uint8)., conf medium)
- TLV: TlvGuideBookData
- fields:
    - `field_id 1: int32 @ offset 0 (presence bit 0x1)`
    - `field_id 2: int32 @ offset 4 (presence bit 0x2)`
    - `field_id 3: uint8 @ offset 8 (presence bit 0x4)`
    - `presence_flags: uint32 @ offset 9`
- ⚠ discrepancy: Auto-doc TlvGuideBookData labels field2 'isFisrtAutoOpenGuideBook' as a single int32 pointing at sub_1018EE90 — but sub_1018EE90 is itself a 3-field struct (two int32 + a uint8), not a scalar. Doc collapses the sub-struct into a scalar.

### TlvGuideBookAutoOpen_Unpack_v2 `@0x1018ee90` — both
*Twin of FUN_1018ed90 (this is doc address sub_1018EE90). Same 3-field layout but scalar fields read via FUN_1010c870 (alternate int codec). field1 int32 @0, field2 int32 @4, field3 uint8 @8, flags @ +9.* (server: Same as FUN_1018ed90; part of guide-book sync., conf high)
- TLV: TlvGuideBookData
- fields:
    - `field_id 1: int32 @ offset 0 (presence bit 0x1)`
    - `field_id 2: int32 @ offset 4 (presence bit 0x2)`
    - `field_id 3: uint8 @ offset 8 (presence bit 0x4)`
    - `presence_flags: uint32 @ offset 9`
- ⚠ discrepancy: Confirms sub_1018EE90 is a 3-field struct, contradicting the TlvGuideBookData doc which treats field2 as a plain int32.

### TlvGuideBookData_TextDump `@0x1018fc30` — both
*TdrBufUtil debug text serializer for TlvGuideBookData. Prints [guideBookChapterCount] (int32, *param_1, range 0..8, returns -6/-7 on out-of-range), iterates guideBookChapterInfos array (0..count, each via FUN_1018f060), then [isFisrtAutoOpenGuideBook] uint8 @ param_1[0x1b], [weaopnId] uint8 @ (param_1+0x6d), and [guideActionInfos] via FUN_1018e890. Diagnostic text, not wire.* (server: Diagnostic only, but reveals true cardinality: server must send guideBookChapterInfos as a bounded array (max 8), not a scalar., conf high)
- TLV: TlvGuideBookData
- fields:
    - `guideBookChapterCount: int32 @ offset 0 (0..8)`
    - `guideBookChapterInfos[]: repeated sub-struct via FUN_1018f060, max 8`
    - `isFisrtAutoOpenGuideBook: uint8 @ word 0x1b`
    - `weaopnId: uint8 @ byte offset 0x6d`
    - `guideActionInfos: sub-struct via FUN_1018e890`
- ⚠ discrepancy: TlvGuideBookData auto-doc is materially wrong: (1) 'guideBookChapterInfos' (field5) is a REPEATED sub-struct array (max 8, FUN_1018f060/text FUN_1018e580), not a single int32 @ offset 43; (2) 'isFisrtAutoOpenGuideBook' is uint8 not int32; (3) 'weaopnId' is uint8 @0x6d not a generic struct. Field ordering in the dump (count, chapterInfos[], autoOpen, weaopnId, guideActionInfos) also differs from the doc's field_id order.

### TlvGuildBuyRecords_DebugPrint `@0x101325f0` — unknown
*TdrBufUtil printer for TlvGuildBuyRecords: [count][guildBuyRecordInfosPkg(array,max500)] each elem FUN_10131250.* (server: Diagnostic; field names/bounds for guild buy-record log., conf high)
- TLV: TlvGuildBuyRecords
- fields:
    - `count: int32 @ 0 (0..500)`
    - `guildBuyRecordInfosPkg[]: nested (FUN_10131250)`

### TlvGuildCommerceData_DebugPrint `@0x101305c0` — unknown
*TdrBufUtil printer for TlvGuildCommerceData. Emits [commerceCount][commerceInfo(array,max10)][selectCommerceId][guildWarHistoryInfo][buffCount][commerceBuffInfo(array,max5)].* (server: Diagnostic only; gives field names + array bounds for guild commerce state., conf high)
- TLV: TlvGuildCommerceData
- fields:
    - `commerceCount: int32 @ 0 (max 10)`
    - `commerceInfo[]: nested (FUN_1012f0f0), count=commerceCount`
    - `selectCommerceId: int32 @ 0xae`
    - `guildWarHistoryInfo: uint32 @ 0xb2`
    - `buffCount: int32 @ 0xb6 (max 5)`
    - `commerceBuffInfo[]: nested (FUN_1012f750), count=buffCount`
- ⚠ discrepancy: TlvGuildCommerceData.md misorders/mistypes: it lists commerceInfo as field6 int32 and commerceBuffInfo as field5 int32; the printer shows commerceInfo is a nested ARRAY (count=commerceCount, max10) and commerceBuffInfo a nested ARRAY (count=buffCount, max5). commerceCount/buffCount are the loop counters, not simple int32 leaves.

### TlvGuildFuncRecords_DebugPrint `@0x10131c10` — unknown
*TdrBufUtil printer for TlvGuildFuncRecords: [count][guildFuncRecordInfosPkg(array,max500)] each elem printed by FUN_10131250.* (server: Diagnostic; field names/bounds for guild function-record log., conf high)
- TLV: TlvGuildFuncRecords
- fields:
    - `count: int32 @ 0 (0..500)`
    - `guildFuncRecordInfosPkg[]: nested (FUN_10131250)`

### TlvGuildMemberData_Pack_be `@10120a60` — both
*Big-endian variant of FUN_10120540: same fields, scalar tags use wire-3/4 fixed-BE encodings (e.g. level 0x33, contribution 0x53, contributionAcc 0x64 8B); role sub via FUN_10118030; guildWar sub via FUN_1011fb90.* (server: Yes, conf high)
- TLV: TlvGuildMemberData
- fields:
    - `same field set as FUN_10120540 but fixed big-endian scalar wire types`
    - `note: string @ 0x38 - tag 0x25`
    - `hunterStar: string @ 0x13c - tag 0x45`
    - `guildWar: sub - tag 0x195`

### TlvGuildMemberData_Pack_varint `@10120540` — both
*Pack the large guild-member/guilder struct (~25 fields). tag 0x15 role sub (FUN_10117f20); tag 0x25 note string char[0x100] @0x38; tag 0x30 sint32 @0x138; tag 0x45 hunterStar string char[0x80] @0x13c; then a long run of sint32/u64 fields (tags 0x50..0x180) covering contribution, wage, title, offlineTime, depotOpCount, hRLevel, joinTime, wildHunt*, celebration*, hunterCount, taskCount, isBaned, banedTime; final tag 0x195 guildWar sub-struct (FUN_1011fac0). Field names confirmed by FUN_10121d40 printer.* (server: Yes - full guild-member record., conf high)
- TLV: TlvGuildMemberData, TlvGuildMemberList
- fields:
    - `role: sub @ 0 - tag 0x15 (w5)`
    - `note: char[256] string @ 0x38 - tag 0x25 (w5)`
    - `level: sint32 @ 0x138 - tag 0x30`
    - `hunterStar: char[128] string @ 0x13c - tag 0x45 (w5)`
    - `contribution: sint32 @ 0x1bc - tag 0x50`
    - `contributionAcc: uint64 @ 0x1c0 - tag 0x60 (w0)`
    - `wage: sint32 @ 0x1c8 - tag 0x70`
    - `title: sint32 @ 0x1cc - tag 0x80`
    - `offlineTime: uint32 @ 0x1d0 - tag 0x90`
    - `depotOpCount: sint32 @ 0x1d4 - tag 0xa0`
    - `hRLevel: sint32 @ 0x1d8 - tag 0xb0`
    - `joinTime: uint32 @ 0x1dc - tag 0xc0`
    - `wildHuntSoul: sint32 @ 0x1e0 - tag 0xd0`
    - `wildHuntPhase: sint32 @ 0x1e4 - tag 0xe0`
    - `celebrationTask: sint32 @ 0x1e8 - tag 0xf0`
    - `preCelebrationTask: sint32 @ 0x1ec - tag 0x100`
    - `celebrationScore: sint32 @ 0x1f0 - tag 0x110`
    - `celebrationReward: sint32 @ 0x1f4 - tag 0x120`
    - `contributionWeekAcc: uint64 @ 0x1f8 - tag 0x130 (w5 fixed via c680)`
    - `levelupAll: sint32 @ 0x200 - tag 0x140`
    - `hunterCount: sint32 @ 0x204 - tag 0x150`
    - `taskCount: sint32 @ 0x208 - tag 0x160`
    - `isBaned: sint32 @ 0x20c - tag 0x170`
    - `banedTime: sint32 @ 0x210 - tag 0x180`
    - `guildWar: sub-struct - tag 0x195 (w5)`
- ⚠ discrepancy: note and hunterStar are char-array STRINGS (tags 0x25/0x45, wire 5), not int32; role and guildWar are sub-structs (tags 0x15/0x195).

### TlvIdName8_Pack_dup `@10128a00` — both
*Byte-identical duplicate of FUN_10128930 ({u8 id, char[8] name} pack).* (server: Yes, conf high)
- TLV: unknown
- fields:
    - `id: uint8 @ 0 - tag 0x11`
    - `name: char[8] string @ 1 - tag 0x25`

### TlvIdName8_Pack_varint `@10128930` — both
*Pack a small {uint8 id @0, string char[8] @1} struct: tag 0x11 id(u8); tag 0x25 name = string (reserve+PutBytes char[8]+patch len). strnlen capped at 8.* (server: Yes, conf high)
- TLV: unknown
- fields:
    - `id: uint8 @ 0 - tag 0x11 (w1)`
    - `name: char[8] string @ 1 - tag 0x25 (w5)`
- ⚠ discrepancy: field2 is a char[8] string (tag 0x25, wire 5); any doc calling it int32/tag 0x23 would be wrong.

### TlvItemBattleUse_Unpack `@10112590` — both
*Unpack a single TlvItemBattleUse element (doc sub_10112590). field1 (>>4==1) = fixed 32-bit BE (FUN_1010c870) into struct+0; field2 (>>4==2) = fixed 16-bit BE into struct+4/+5. Presence flags at struct+6.* (server: Yes, conf medium)
- TLV: TlvItemBattleUse
- fields:
    - `field1: uint32 @ 0 (fixed BE, tag 0x13)`
    - `field2: uint16 @ 4 (fixed BE, tag 0x22)`

### TlvItemRebuildLimitData_DebugFormat `@10178f00` — both
*TDR DebugFormat dumper for TlvItemRebuildLimitData: '[itemRebuildLimitCount]' int32, '[lastItemRebuildTime]' int64 (param_1[1],param_1[2]), '[itemRebuildLimitInfo]' array (max 8, element sub FUN_101785a0).* (server: Server sends item-rebuild daily-limit state., conf high)
- TLV: TlvItemRebuildLimitData
- fields:
    - `itemRebuildLimitCount: int32 @ +0 (0<=n<=8)`
    - `lastItemRebuildTime: int64 @ +4 (param_1[1..2])`
    - `itemRebuildLimitInfo[]: sub_101785a0 elements`

### TlvKeyByteVal_Read_varA `@0x1019e250` — C2S
*TDR wire READ deserializer for a tiny leaf struct. Reads TDR tags in a length-bounded loop (FUN_1010ccb0), switching on tag>>4: field_id 1 (value via FUN_1010cbd0 signed-varint into param_1), field_id 2 (single byte into param_1+4). Sets presence-flag bits at param_1+5. Unknown fields skipped via FUN_1010d4f0.* (server: Server must serialize this leaf with matching tags when sending the parent struct., conf medium)
- TLV: unknown
- fields:
    - `field_1: signed varint @ off 0 (FUN_1010cbd0)`
    - `field_2: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvKeyByteVal_Read_varB `@0x1019e340` — C2S
*Encoding twin of FUN_1019e250 (field_1 read via FUN_1010c870 unsigned varint instead of FUN_1010cbd0). Same 2-field leaf, field_ids 1 & 2.* (server: Encoding variant of FUN_1019e250., conf medium)
- TLV: unknown
- fields:
    - `field_1: unsigned varint @ off 0 (FUN_1010c870)`
    - `field_2: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvLevelHubSystemData_DebugPrint `@0x101508d0` — S2C
*TdrBufUtil printer for the large TlvLevelHubSystemData struct (read at sub_1014FF80). Emits 20 named fields; authoritative field list for a struct whose 0x99 wire schema only serializes a subset.* (server: Server must serialize hub/level progression state; this printer documents the full field set and offsets., conf high)
- TLV: TlvLevelHubSystemData
- fields:
    - `entrustMoneyLastTm: int32 @ 0`
    - `thousandLayerDataCount: int32 @ 4 (0..0x46=70)`
    - `thousandLayerData[]: nested (FUN_10144e00)`
    - `levelStatLen: int32 @ 0x350 (param_1[0xd4]) (0..0x2000)`
    - `levelStatDataPack: uint8[levelStatLen] @ 0x354`
    - `entrustAllStat: nested (FUN_10149fe0 = TlvEntrustGroupStatList)`
    - `levelWarningData: nested (FUN_1014b090)`
    - `monsterSizeHistroyInfo: nested (FUN_1014c2e0)`
    - `unlockHubPageCount: uint16 @ 0x11588 (param_1[0x4562])`
    - `unlockHubPageData[64]: nested (FUN_10143850) @ 0x1158a`
    - `levelUnLockCount: int32 @ 0x1188a (0..5000)`
    - `unLockLevelData: int32[levelUnLockCount] @ 0x1188e`
    - `levelIntegrateData: nested (FUN_1014d8b0)`
    - `hubRewardCount: uint8 @ 0x2649c (param_1[0x9927]) (0..0x40)`
    - `hubRewardData[]: nested (FUN_10143f70)`
    - `unlockLevelGroupCount: uint8 @ 0x266dd (0..0x40)`
    - `unlockLevelGroupData: int32[] @ 0x266de`
    - `hubPageStarUnLockCount: uint8 @ 0x267de (0..0x40)`
    - `hubPageStarUnLockData[]: nested (FUN_101446e0)`
    - `superHunterData: nested (FUN_1014e300)`
- ⚠ discrepancy: TlvLevelHubSystemData.md self-admits 'schema has 1, DebugFormat has 20'. This printer recovers all 20 fields with offsets; the doc only lists field2 entrustMoneyLastTm. Server implementers should use this full list, not the doc.

### TlvLevelWarningData_DebugPrint `@0x1014b090` — unknown
*TdrBufUtil printer: [lastRefreshTm][rewardCnt][levelCnt][warningData(array,max10, FUN_1014a6a0)].* (server: Diagnostic; level warning/reward refresh data (printed as [levelWarningData] in TlvLevelHubSystemData)., conf medium)
- TLV: TlvLevelHubSystemData
- fields:
    - `lastRefreshTm: uint32 @ 0`
    - `rewardCnt: uint8 @ 4`
    - `levelCnt: uint8 @ 5 (0..10)`
    - `warningData[]: nested (FUN_1014a6a0), count=levelCnt`

### TlvLotteryBoxContainer_Pack_v1 `@0x10192610` — S2C
*TDR pack (write) of TlvLotteryBoxContainer. Writes tag 0x15 (field_id 1) as a length-delimited group, reserves the 4-byte size prefix, then serializes a FIXED array of 3 cLotteryBox elements via FUN_101919f0 (each individually length-framed), backfills the group size, then writes field iLastDailyRefreshTime from (param_1+0x228) via FUN_1010c560 (tag 0x20). Uses FUN_1010c5f0 for tags, FUN_1010c3c0 to backfill.* (server: Server must emit exactly 3 cLotteryBox entries then iLastDailyRefreshTime; this is the outgoing lottery container blob., conf high)
- TLV: TlvLotteryBoxContainer
- fields:
    - `field_id 1: cLotteryBox[3] repeated sub-struct via FUN_101919f0, length-delimited`
    - `field_id 2: iLastDailyRefreshTime int32 @ byte offset 0x228 (tag 0x20)`
- ⚠ discrepancy: TlvLotteryBoxContainer auto-doc treats cLotteryBox (field1) as a single sub-struct @ offset 138 and iLastDailyRefreshTime @ offset 138; actually cLotteryBox is a FIXED array of 3 sub-structs and iLastDailyRefreshTime is at byte offset 0x228.

### TlvLotteryBoxContainer_Pack_v2 `@0x10192780` — S2C
*Twin of FUN_10192610: TDR pack of TlvLotteryBoxContainer, 3-element cLotteryBox array serialized via FUN_10191b30, and iLastDailyRefreshTime written via FUN_1010c190 (alternate int codec) with field tag 0x23. Second generated encoding variant.* (server: Same container as FUN_10192610 with alternate scalar encoding., conf high)
- TLV: TlvLotteryBoxContainer
- fields:
    - `field_id 1: cLotteryBox[3] repeated sub-struct via FUN_10191b30`
    - `field_id 2: iLastDailyRefreshTime int32 @ byte offset 0x228 (FUN_1010c190, tag 0x23)`
- ⚠ discrepancy: Same as FUN_10192610: cLotteryBox is a 3-element array, not a scalar; iLastDailyRefreshTime @ 0x228.

### TlvLotteryBoxContainer_TextDump `@0x10192d70` — S2C
*TdrBufUtil debug text serializer for TlvLotteryBoxContainer. Iterates 3 [cLotteryBox] entries (each via FUN_10192230, the item-pool dump), then prints [iLastDailyRefreshTime] from (param_1+0x228). Diagnostic text.* (server: Diagnostic only; confirms 3-element cLotteryBox array and 0x228 offset for the refresh timestamp., conf high)
- TLV: TlvLotteryBoxContainer
- fields:
    - `cLotteryBox[3]: sub-struct via FUN_10192230 (TlvLotteryBoxItemPool)`
    - `iLastDailyRefreshTime: int32 @ byte offset 0x228`
- ⚠ discrepancy: Confirms the FUN_10192610 discrepancy: cLotteryBox is an array of 3 TlvLotteryBoxItemPool, not a single sub-struct @ offset 138.

### TlvLotteryBoxItemPool_TextDump `@0x10192230` — S2C
*TdrBufUtil debug text serializer for TlvLotteryBoxItemPool. Prints [iReSearchCount] (*param_1), [iRrefreshCount] (param_1[1]), [iVipRefreshCount] (param_1[2]), a FIXED array of 8 [vItemPoolList] entries (each via FUN_10191700), then [iBoxId] (param_1[0x2b]) and [iLastClockRefreshTime] (param_1[0x2c]). Diagnostic text.* (server: Server sends lottery-box item pool state; vItemPoolList must be 8 elements, then iBoxId + iLastClockRefreshTime., conf high)
- TLV: TlvLotteryBoxItemPool
- fields:
    - `iReSearchCount: int32 @ word 0`
    - `iRrefreshCount: int32 @ word 1`
    - `iVipRefreshCount: int32 @ word 2`
    - `vItemPoolList[8]: sub-struct via FUN_10191700 (words 3..0x2a)`
    - `iBoxId: int32 @ word 0x2b`
    - `iLastClockRefreshTime: int32 @ word 0x2c`
- ⚠ discrepancy: TlvLotteryBoxItemPool auto-doc calls vItemPoolList a single int32 @ offset 43; actually a fixed array of 8 sub-structs (words 3..42). iBoxId @ word 43 and iLastClockRefreshTime @ word 44 do match doc's offsets 43/44.

### TlvMiscGameData_DebugFormat `@0x10199de0` — S2C
*Human-readable text dump (DebugFormat) of the master 'misc game data' player blob. Walks every field of the struct at param_1 and appends a labelled line to an output buffer via the FUN_1024a2xx / FUN_1010c010 formatting helpers. NOT a wire codec: it emits text ("0x%02x", "%I64u", field-name labels), never TDR tags. Fields dumped (in order): itemColumnData, iCreditCount, creditValue[], wGuideStepCount, astGuideSteps[], mailInfo, schedulePrizeInfo, giftBag, npcAtd, iCatCuisineID, wCatCuisineCount, bCatCuisineLevel, bCatCuisineBuffs, dwCatCuisineLastTm, equipTitle, equipTitleBuff, guild, videoSize/video[], stClientSettings, spoor, rapidHunt, activity, itemRebuild, itemBox, shop, catTreature, normalLimitInfo, reportInfo, trace, equipPlan, shortcutCount/shortcutData[], catCuisineFormulaCount/catCuisineID[]/catCuisineState[], titleInfoCount/titleID[]/titleUnlockTime[], starStoneData, dataRepairFlag, itemSnapshot, personalLeagueData, speak, supplyPlanData, cDCount/cDGroupID[]/cDType[]/cD(0x02x)[]/cDTime[], creditVersion, equipSuitSkill, weaponTrial, astrolabe, creditNoChangeCount, wildHunt, soulStone, monolopy, growHigher, achieve, illustrate, weaponStyle, weaponHavenInfoCount/weaponHavenInfo[], silverStorageBox, guideBook, monsterTalkData, secretResearchData, dragonBoxShopID, rewardActivityCost, count/rewardActivityState[].* (server: Debug-only text dump; the server never needs to emit this format. HOWEVER it is the authoritative field map for the TlvMiscGameData wire struct the server MUST (de)serialize (~71 fields). Use it to reconstruct the full struct layout., conf high)
- TLV: TlvMiscGameData
- fields:
    - `itemColumnData: substruct @ off 0xa (fid6/tag 0x63 on wire)`
    - `iCreditCount: int32 @ off 0xa (array count, max 9)`
    - `creditValue: int32[] @ off 0xe`
    - `wGuideStepCount: uint16 @ off 0x32 (array count, max 0x100)`
    - `astGuideSteps: substruct[] (element FUN_10166cf0)`
    - `iCatCuisineID: int32 @ off 0x1c05`
    - `wCatCuisineCount: uint16 @ off 0x1c09`
    - `bCatCuisineLevel: uint8 @ off 0x1c0b`
    - `bCatCuisineBuffs: uint8 @ off 0x1c0c`
    - `dwCatCuisineLastTm: uint32 @ off 0x1c0d`
    - `equipTitle: int32 @ off 0x1c11`
    - `equipTitleBuff: uint32 @ off 0x1c15`
    - `videoSize: uint16 @ off 0x1d1e (max 0x80); video: uint8[] @ off 0x1d20`
    - `shortcutCount: int32 @ off 0x193bd (max 0x3c); shortcutData: int32[] @ off 0x193c1`
    - `catCuisineFormulaCount: int32 @ off 0x194b1 (max 0x80)`
    - `titleInfoCount: uint32 @ off 0x198b5 (max 500); titleID[] @ off 0x198b9; titleUnlockTime[] @ off 0x1a089`
    - `dataRepairFlag: uint64 @ off 0x1a8d5`
    - `cDCount: int32 @ off 0x1b66e (max 0x32)`
    - `creditVersion: int32 @ off 0x1b834`
    - `creditNoChangeCount: int32 @ off 0x249a8`
    - `weaponHavenInfoCount: int32 @ off 0x31ffb (max 0x2ee)`
    - `dragonBoxShopID: int32 @ off 0x32763; rewardActivityCost: int32 @ off 0x32767; count: int32 @ off 0x3276b (max 6)`
- ⚠ discrepancy: TLV_DOCS/docs/TlvMiscGameData.md self-flags 'schema has 1, DebugFormat has 71' and only documents field 6 (itemColumnData). The generated 0x99 schema is a severe subset — 70 fields are undocumented. This DebugFormat dump recovers the full field list above.

### TlvMultiShopRefresh_DebugFormat `@0x10214140` — unknown
*DebugFormat printer for TlvMultiShopRefresh. Prints count (int32, max 0x14/20), shops[] array (each via FUN_10213570), then refreshTimeD/refreshTimeW/refreshTimeM (int32, word-indices 0xa47/0xa48/0xa49).* (server: High — server sends shop refresh-time blob; must emit shops[] array (<=20) plus 3 int32 refresh timestamps., conf high)
- TLV: TlvMultiShopRefresh
- fields:
    - `count: int32 @ off 0x00 (max 20)`
    - `shops: sub-struct[count] (elem FUN_10213570)`
    - `refreshTimeD: int32 @ word-index 0xa47`
    - `refreshTimeW: int32 @ word-index 0xa48`
    - `refreshTimeM: int32 @ word-index 0xa49`
- ⚠ discrepancy: Doc TlvMultiShopRefresh lists refreshTimeD as 'sub-struct -> sub_102132D0' and shops as scalar int32. Actual: shops is an array of count sub-structs; refreshTimeD/W/M are plain int32 scalars at the tail. Doc's sub-struct/scalar assignment is off.

### TlvNameEntry_Read_A `@1016d8d0` — both
*TDR read (variant A) of {uint8@+0, strName[32]@+1}: field1 byte, field2 len-delimited string (max 31, FUN_1010c870+memmove). Presence flags@+0x21.* (server: Server decode of name entry., conf medium)
- TLV: friend/name entry (sub_1016DA60 family)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: char[32] strName @ +1 (max 31)`
    - `presence_flags: uint32 @ +0x21`

### TlvNameEntry_Read_B `@1016da60` — both
*Variant B read of {uint8@+0, strName[32]@+1} == documented sub_1016DA60 (referenced by FriendListContainer as astFriendData element). Presence flags@+0x21.* (server: Canonical decode; doc references this address., conf high)
- TLV: TlvFriendListContainer.astFriendData element (sub_1016DA60)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: char[32] strName @ +1 (max 31)`
    - `presence_flags: uint32 @ +0x21`

### TlvNameEntry_Write_A `@1016d660` — both
*TDR serializer (variant A) for a {uint8, name[32]} entry: field1 uint8@+0 (tag 0x11), field2 strName string (max 32, tag 0x25 len-delim) via FUN_1010c2b0.* (server: Server must encode this name-bearing entry., conf medium)
- TLV: friend/name entry (see FriendListContainer astFriendData sub_1016DA60)
- fields:
    - `field 1: uint8 @ +0 (tag 0x11)`
    - `field 2: char[33] strName @ +1 (tag 0x25, strnlen<=32)`

### TlvNameEntry_Write_B `@1016d730` — both
*Byte-identical duplicate of FUN_1016d660 ({uint8@+0, name[32]@+1}).* (server: Same as FUN_1016d660., conf medium)
- TLV: friend/name entry
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: char[33] strName @ +1`

### TlvNpcOrgPrefsContainer_DebugFormat `@0x1022b490` — unknown
*TdrBufUtil.cpp DebugFormat of NPC org/prefs container: count+npcAtdPkg[] (max 0x1e=30) via FUN_10229350; orgNum+npcOrgPkg[] (max 30) via FUN_102299a0; preferNum+npcPrefersPkg[] (max 30) via FUN_1022a2c0.* (server: Debug only; documents NPC attendance/organization/preference package layout., conf high)
- TLV: TlvNpcOrgPrefsContainer
- fields:
    - `count: int32 @0 (max 30) — drives npcAtdPkg[]`
    - `npcAtdPkg[]: element @ FUN_10229350`
    - `orgNum: int32 @0x1e4 (param_1[0x79]) — drives npcOrgPkg[]`
    - `npcOrgPkg[]: element @ FUN_102299a0`
    - `preferNum: int32 @0x3c8 (param_1[0xf2]) (max 30) — drives npcPrefersPkg[]`
    - `npcPrefersPkg[]: element @ FUN_1022a2c0`
- ⚠ discrepancy: Doc TlvNpcOrgPrefsContainer (@0x1022B030) models this as 6 SCALAR fields (count/orgNum/npcOrgPkg/preferNum/npcPrefersPkg/npcAtdPkg). In reality it is THREE count+array pairs: (count → npcAtdPkg[]), (orgNum → npcOrgPkg[]), (preferNum → npcPrefersPkg[]). The doc mis-pairs the names (e.g. npcAtdPkg is the array driven by 'count', not a standalone tail scalar) and treats the *Pkg members as scalars rather than array elements. NOTE: DebugFormat loops npcOrgPkg using *param_1 (the 'count' field) not param_1[0x79] (orgNum) — likely an in-game bug or count-shared design; verify server side.

### TlvOnlineTime_Pack_fixed `@0x10157670` — S2C
*Fixed variant of FUN_10157480: sub-records via FUN_10156b10.* (server: Server must serialize online-time/alarm sub-record., conf high)
- TLV: TlvAlarmTimeData, TlvOnlineTime
- fields:
    - `1 daily: nested (FUN_10156b10)`
    - `2 weekly: nested (FUN_10156b10)`
    - `3 monthly: nested (FUN_10156b10)`
    - `4 count: uint8 @ 0x60 (max 10)`
    - `5 selfDefs[]: nested (FUN_10156b10)`
- ⚠ discrepancy: Same corrections as FUN_10157480.

### TlvOnlineTime_Pack_varint `@0x10157480` — S2C
*TDR pack of an online-time struct: three leading len-delim fields (no explicit ids at 0x15/0x25/0x35 each = FUN_10156a30 sub-writer), then field4 count u8@0x60 (tag 0x41, max10) and field5 nested array (tag 0x55) of FUN_10156a30 elems.* (server: Server must serialize online-time/self-def sub-record used inside TlvAlarmTimeData/TlvScriptProcData., conf high)
- TLV: TlvAlarmTimeData, TlvOnlineTime
- fields:
    - `1 daily: nested (FUN_10156a30) (tag 0x15)`
    - `2 weekly: nested (FUN_10156a30) (tag 0x25)`
    - `3 monthly: nested (FUN_10156a30) (tag 0x35)`
    - `4 count: uint8 @ 0x60 (tag 0x41, max 10)`
    - `5 selfDefs[]: nested (FUN_10156a30) (tag 0x55)`
- ⚠ discrepancy: Field names from printer FUN_10157f00 ([daily][weekly][monthly][count][selfDefs]). This is TlvAlarmTimeData's body: TlvAlarmTimeData.md field4 'count' typed 'unknown@96' is actually uint8@0x60 (tag 0x41); field5 'selfDefs -> sub-struct' is actually a nested ARRAY (count elems, max10), and daily/weekly/monthly are single nested sub-structs.

### TlvPair_ByteFixed32_Pack_v1 `@0x10218010` — both
*TdrBuf.h wire pack, same element as FUN_10217f90 but field2 uses tag 0x23 (wire3, fixed 4-byte) via FUN_1010c190. Alternate TDR cut-version of the same struct.* (server: Yes — wire serializer (cut-version variant of FUN_10217f90)., conf medium)
- fields:
    - `f1: uint8 @0 (tag 0x11, wire1)`
    - `f2: fixed32 @+1 (tag 0x23, wire3)`

### TlvPair_ByteVarint_Pack_v0 `@0x10217f90` — both
*TdrBuf.h wire pack for a 2-field element: field1 byte@0 (tag 0x11), field2 (tag 0x20, wire0 varint) via FUN_1010c5f0.* (server: Yes — wire serializer; server must emit this exact tag/field layout. Paired with FUN_10218010 (alternate TDR cut version)., conf medium)
- fields:
    - `f1: uint8 @0 (tag 0x11, wire1)`
    - `f2: varint @+1 (tag 0x20, wire0)`

### TlvPair_Element_Unpack_v0 `@0x10218160` — both
*TdrBuf.h wire unpack of a 2-field element: field_id 1 = byte@0, field_id 2 = varint@+1 (FUN_1010c870). Switches on local_8>>4 (field_id). Sets presence-flag dword at +5.* (server: Yes — server must parse this element from client packets. Unknown fields skipped via FUN_1010d4f0., conf high)
- fields:
    - `field 1: uint8 @0 (presence bit 0x1)`
    - `field 2: varint @+1 (presence bit 0x2)`

### TlvPair_Element_Unpack_v1 `@0x10218250` — both
*TdrBuf.h wire unpack, same element as FUN_10218160, alternate cut-version.* (server: Yes — wire unpacker (cut variant of FUN_10218160)., conf high)
- fields:
    - `field 1: uint8 @0`
    - `field 2: varint @+1`

### TlvPair_Pack_be `@1010d720` — both
*Big-endian variant of FUN_1010d6a0: tag 0x11 writes u8, tag 0x23 (field2, wire3=4B) writes the value as fixed 32-bit big-endian.* (server: Yes, conf medium)
- TLV: unknown-2field-u8-u32
- fields:
    - `type: uint8 @ 0 - tag 0x11`
    - `value: uint32 @ 1 - tag 0x23 (field_id 2, wire 3 fixed BE)`

### TlvPair_Pack_varint `@1010d6a0` — both
*Pack a 2-field {uint8 @0, uint32 @1} struct: tag 0x11 (field1, wire1) writes the u8, tag 0x20 (field2, wire0) writes the value as LEB128 varint.* (server: Yes, conf medium)
- TLV: unknown-2field-u8-u32
- fields:
    - `type: uint8 @ 0 - tag 0x11 (field_id 1, wire 1)`
    - `value: uint32 @ 1 - tag 0x20 (field_id 2, wire 0 varint)`

### TlvPair_ScalarByte_Unpack `@0x1021fc80` — both
*TdrBuf.h wire unpack: field1 scalar 4-byte via FUN_1010ca10 @0, field2 byte @+2. Presence flags at +3.* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: 4-byte scalar @0 (FUN_1010ca10)`
    - `field 2: uint8 @+2`

### TlvPair_U16Byte_Unpack `@0x1021fd70` — both
*TdrBuf.h wire unpack: field1 = 2-byte little-endian @0, field2 = byte @+2. Presence flags at +3.* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0`
    - `field 2: uint8 @+2`

### TlvPair_U16U16_Unpack `@0x1021a9f0` — both
*TdrBuf.h wire unpack of element with two 2-byte little-endian fields: field1 @0 (bytes @+0/+1), field2 @+2 (bytes @+2/+3). Presence flags at +4.* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0`
    - `field 2: uint16 @+2`

### TlvPair_U16Varint_Unpack `@0x10219330` — both
*TdrBuf.h wire unpack of element: field1 = 2-byte little-endian @0/@+1 (tag wire1, reads 2 bytes hi/lo), field2 = varint @+2 (FUN_1010c870). Presence flags at +6.* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0 (little-endian, 2 bytes)`
    - `field 2: varint @+2`

### TlvPair_U16Varint_Unpack_2 `@0x1021b0a0` — both
*TdrBuf.h wire unpack: field1 = 2-byte little-endian @0, field2 = varint @+2 (FUN_1010c870). Presence flags at +6. (Same shape as FUN_10219330.)* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0`
    - `field 2: varint @+2`

### TlvPair_U16Varint_Unpack_3 `@0x10221010` — both
*TdrBuf.h wire unpack: field1 = 2-byte little-endian @0, field2 = varint @+2. Presence flags at +6. (Same shape as FUN_10219330.)* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0`
    - `field 2: varint @+2`

### TlvPair_U16Varint_Unpack_4 `@0x10222220` — both
*TdrBuf.h wire unpack: field1 = 2-byte little-endian @0, field2 = varint @+2. Presence flags at +6. (Same shape as FUN_10219330.)* (server: Yes — element unpacker., conf medium)
- fields:
    - `field 1: uint16 @0`
    - `field 2: varint @+2`

### TlvPair_Unpack_be `@1010d960` — both
*Big-endian unpack variant: field 2 read as fixed 32-bit big-endian (FUN_1010c870) into struct+1.* (server: Yes, conf medium)
- TLV: unknown-2field-u8-u32
- fields:
    - `field1: uint8 @ 0`
    - `field2: uint32 @ 1 (fixed BE)`

### TlvPair_Unpack_varint `@1010d870` — both
*Unpack the {uint8 @0, uint32 @1} struct; reads tags via FUN_1010ccb0, field 1 -> u8 @0, field 2 -> varint u32 @1 (FUN_1010ccb0). Presence flags stored at struct+5.* (server: Yes, conf medium)
- TLV: unknown-2field-u8-u32
- fields:
    - `field1: uint8 @ 0`
    - `field2: uint32 @ 1 (varint)`

### TlvPair_Write_varA `@0x1019b360` — both
*TDR wire WRITE serializer for a 2-field container: field2 (tag 0x25, wire5 len-delim substruct via FUN_10164ff0) and field3 (tag 0x35, wire5 substruct via FUN_102152f0). Reserves a 4-byte length placeholder (FUN_1010bf70), writes each sub-struct, then backpatches the length (FUN_1010c3c0).* (server: Server must produce/parse this exact tag layout for the owning message., conf medium)
- TLV: unknown
- fields:
    - `field_2: substruct @ tag 0x25 (fid2 wire5) -> FUN_10164ff0`
    - `field_3: substruct @ tag 0x35 (fid3 wire5) -> FUN_102152f0`

### TlvPair_Write_varB `@0x1019b420` — both
*Alternate-encoding twin of FUN_1019b360: same 2-field container (tag 0x25 substruct via FUN_101651b0, tag 0x35 substruct via FUN_102154b0). The .._varB functions in this chunk are the 'fixed/other cut-version' encoding of the same struct.* (server: Server must match layout; encoding variant of FUN_1019b360., conf medium)
- TLV: unknown
- fields:
    - `field_2: substruct @ tag 0x25 -> FUN_101651b0`
    - `field_3: substruct @ tag 0x35 -> FUN_102154b0`

### TlvPetExtAttrData_Write `@0x101f4c50` — both
*Binary TDR WRITE serializer for a 58-field pet attribute struct. For each field it writes the field tag (FUN_1010c5f0), advances 4 bytes for a length placeholder (FUN_1010bf70), serializes a nested 'observed value' sub-struct (FUN_101b0280 -> sub_101B0520 family), then backpatches the LEN_DELIM length (FUN_1010c3c0). All 58 fields are wire-type 5 (LEN_DELIM) nested sub-structs. Field-id count (58) matches TlvPetExtAttrData DebugFormat (58).* (server: High. This is a real wire producer; a server rebuild must emit these 58 optional nested fields in field-id order with correct LEN_DELIM framing to be parsed by the client., conf high)
- TLV: TlvPetExtAttrData
- fields:
    - `field 4 (tag 0x45): oPetName — wire5 LEN nested observed-value substruct`
    - `field 5 (tag 0x55): oPetSex — wire5 LEN nested`
    - `field 7 (tag 0x75): oOwner — wire5 LEN nested`
    - `field 8 (tag 0x85): oPetSignature — wire5 LEN nested`
    - `field 9 (tag 0x95): oPetExp — wire5 LEN nested`
    - `field 10 (tag 0xa5): oPetLevel — wire5 LEN nested`
    - `fields 18,19,20,21 (tags 0x125,0x135,0x145,0x155): wire5 LEN nested — names unknown`
    - `fields 23,24,25 (tags 0x175,0x185,0x195): wire5 LEN nested — names unknown`
    - `fields 30,31,32 (tags 0x1e5,0x1f5,0x205): wire5 LEN nested`
    - `fields 34,35,36 (tags 0x225,0x235,0x245): wire5 LEN nested`
    - `fields 42-56 (tags 0x2a5..0x365, gaps): wire5 LEN nested`
    - `fields 67,68,69,70 (tags 0x435,0x445,0x455,0x465): wire5 LEN nested`
    - `fields 76-91 (tags 0x4c5..0x5b5): wire5 LEN nested`
    - `fields 142,143,145,146 (tags 0x8e5,0x8f5,0x915,0x925): wire5 LEN nested`
- ⚠ discrepancy: Generated TlvPetExtAttrData doc lists only the 5-field 0x99 subset and types the fields as plain int32 with wire3 tags (e.g. oPetName 0x43). Actual writer emits ALL 58 fields as wire5 (LEN_DELIM) nested sub-structs (oPetName tag 0x45, not 0x43). The 'oXxx' fields are nested observed-value wrappers (sub_101B0520), not scalar int32. Doc field count (5) vs real (58).

### TlvPetFarmShowData_DebugFormat `@0x10202790` — unknown
*DebugFormat text dump for the pet-farm-show container: iterates [sPFData] index 0..5 dumping each PetTimeSlot via FUN_10201900, prints [petAvatarCount] (int16, 0..30), then [petAvatarInfo] array via FUN_10200df0. Provides authoritative field names for FUN_10201d10/FUN_10201f60.* (server: Low. Debug-only; documents field names/order/bounds., conf high)
- TLV: TlvPetFarmShowData, TlvPetAvatarData
- fields:
    - `[sPFData][0..5]: 6 x PetTimeSlot element (FUN_10201900)`
    - `[petAvatarCount]: int16 (0..30)`
    - `[petAvatarInfo][i]: TlvPetAvatarData element (FUN_10200df0)`
- ⚠ discrepancy: Confirms sPFData is a 6-element array (not scalar int16 as the generated doc states) and that petAvatarInfo is a count-prefixed array.

### TlvPetFarmShowData_Serialize_variantA `@0x10201d10` — both
*Binary TDR WRITE for the pet-farm-show container. field1 tag 0x15 (wire5 LEN): array of 6 PetTimeSlot elements (each nested via FUN_10201100 with per-element length backpatch). field2 tag 0x20 (wire0): petAvatarCount int16 (FUN_1010c430; validated 0..0x1e=30, returns -6/-7 on out-of-range). field3 tag 0x35 (wire5 LEN): array of 'petAvatarCount' pet-avatar elements (FUN_10200710).* (server: High. Real wire (de)serializer for pet-farm-show data (sPFData[6] + petAvatarInfo[]); server must honor the 6-element array and the count<=30 bound., conf medium)
- TLV: TlvPetFarmShowData, TlvPetAvatarData
- fields:
    - `field 1 (tag 0x15): sPFData — LEN array[6] of PetTimeSlot (FUN_10201100)`
    - `field 2 (tag 0x20): petAvatarCount — int16 (range 0..30)`
    - `field 3 (tag 0x35): petAvatarInfo — LEN array[petAvatarCount] of TlvPetAvatarData element (FUN_10200710)`
- ⚠ discrepancy: Generated TlvPetFarmShowData doc lists sPFData as a single int16 @+108 (tag 0x22) and petAvatarCount as field3. Actual struct: field1=sPFData is a fixed array[6] of the 32-byte PetTimeSlot sub-struct (tag 0x15 wire5), field2=petAvatarCount int16, field3=petAvatarInfo array[count]. Doc field ids/types/widths are wrong.

### TlvPetFarmShowData_Serialize_variantB `@0x10201f60` — both
*Structural twin of FUN_10201d10 for the pet-farm-show container: sPFData array[6] via FUN_102012c0, petAvatarCount via FUN_1010c120 with tag 0x22, petAvatarInfo array via FUN_10200800. The read/write counterpart variant.* (server: High. Counterpart wire (de)serializer for pet-farm-show data., conf medium)
- TLV: TlvPetFarmShowData, TlvPetAvatarData
- fields:
    - `field 1 (tag 0x15): sPFData — LEN array[6] of PetTimeSlot (FUN_102012c0)`
    - `field 2 (tag 0x22): petAvatarCount — int16 fixed16 (FUN_1010c120, range 0..30)`
    - `field 3 (tag 0x35): petAvatarInfo — LEN array[count] (FUN_10200800)`
- ⚠ discrepancy: Same as FUN_10201d10: real sPFData is array[6] of a sub-struct, not a scalar int16; doc mis-shapes fields 2/3.

### TlvPetFullAttrData_DebugFormat `@10241650` — unknown
*Human-readable (DebugFormat) text dumper for the full pet attribute struct. Walks the same 54 fields as FUN_1023dd50, emitting each field name ('[oPetName]'..'[oRegion]') and value into a text buffer (FUN_1010c010) with indentation via FUN_1024a140. Diagnostic/log path, not wire format.* (server: None for wire compat (debug text). Useful as authoritative field-name/order source for the wire struct., conf high)
- TLV: TlvPetFullAttrData
- fields:
    - `Emits field-name labels in id order: oPetName,oPetSex,oOwner,oPetSignature,oPetExp,oPetLevel,oSpirit,oVigour,oPetHP,oPetMaxHP,oPetMelee,oPetDefence,oCritLevel,oPetExecution,oPetObservation,oPetLoadBearing,oPetMaxSp,oPetSp,oPetPotential,oWaterAtk,oFireAtk,oLightningAtk,oDragonAtk,oIceAtk,oWaterRes,oFireRes,oLightningRes,oDragonRes,oIceRes,oWaterThrsh,oFireThrsh,oLightningThrsh,oDragonThrsh,oIceThrsh,oComaThrsh,oPoisonThrsh,oSleepingThrsh,oParaThrsh,oWindPressureDef,oQuakeDef,oRoarDef,oPalsyDef,oSnowManDef,oTiredDef,oAttackLevelDef,oPetSkillID,oEquipedSkillID,oPetWeaponID,oPetHatID,oPetBodyID,oFashionWwaponID,oFashionHatID,oFashionBodyID,oRegion`

### TlvPetFullAttrData_DebugFormat `@0x101f89d0` — unknown
*DebugFormat / human-readable text dump (TdrBufUtil.cpp) of the pet full-attribute struct. Emits labeled lines '[fieldName]' + printf value for each field via FUN_1024a1e0/FUN_101b0710/FUN_1024a140. Not a wire serializer. ~54 fields (size 3657) matching TlvPetFullAttrData DebugFormat field count.* (server: Low. Debug text dumper; a server does not need it, but it authoritatively documents the field set/order the wire serializer uses., conf medium)
- TLV: TlvPetFullAttrData
- fields:
    - `[oPetName]`
    - `[oPetSex]`
    - `[oOwner]`
    - `[oPetSignature]`
    - `[oPetExp]`
    - `[oPetLevel]`
    - `[oSpirit]`
    - `[oVigour]`
    - `[oPetHP]`
    - `[oPetMaxHP]`
    - `[oPetMelee]`
    - `[oPetDefence]`
    - `[oCritLevel]`
    - `[oPetExecution]`
    - `[oPetObservation]`
    - `[oPetLoadBearing]`
    - `[oPetMaxSp]`
    - `[oPetSp]`
    - `(remaining fields truncated in view; total ~54 attribute fields)`
- ⚠ discrepancy: Generated TlvPetFullAttrData doc shows only 5 fields (0x99 subset). This DebugFormat proves the struct actually carries ~54 pet-attribute fields (Exp/Level/Spirit/Vigour/HP/MaxHP/Melee/Defence/CritLevel/Execution/Observation/LoadBearing/MaxSp/Sp and more). Field names recovered here should populate the real struct definition.

### TlvPetFullAttrData_Write `@1023dd50` — both
*Wire WRITER for the full pet attribute struct (TlvPetFullAttrData). Emits 54 optional fields, each as a TDR tag (via FUN_1010c5f0) followed by a length-delimited nested value written by FUN_101b0280 (the sub_101B0520 'optional int32 wrapper'), with FUN_1010c3c0 back-patching each field length. Skips writing when a field is absent; matches the DebugFormat field order recovered from FUN_10241650.* (server: Critical. Server must build this exact 54-field pet blob (correct field_ids + wire5 nested framing) whenever it sends pet detail to the client (pet summon/inspect/attribute-update). Doc's 5-field/wire3 layout would be rejected., conf high)
- TLV: TlvPetFullAttrData
- fields:
    - `field_id 4: oPetName (wire5 nested) tag=0x45`
    - `field_id 5: oPetSex tag=0x55`
    - `field_id 7: oOwner tag=0x75`
    - `field_id 8: oPetSignature tag=0x85`
    - `field_id 9: oPetExp tag=0x95`
    - `field_id 10: oPetLevel tag=0xa5`
    - `field_id 18: oSpirit tag=0x125`
    - `field_id 19: oVigour tag=0x135`
    - `field_id 20: oPetHP tag=0x145`
    - `field_id 21: oPetMaxHP tag=0x155`
    - `field_id 23: oPetMelee tag=0x175`
    - `field_id 24: oPetDefence tag=0x185`
    - `field_id 25: oCritLevel tag=0x195`
    - `field_id 30: oPetExecution tag=0x1e5`
    - `field_id 31: oPetObservation tag=0x1f5`
    - `field_id 32: oPetLoadBearing tag=0x205`
    - `field_id 34: oPetMaxSp tag=0x225`
    - `field_id 35: oPetSp tag=0x235`
    - `field_id 36: oPetPotential tag=0x245`
    - `field_id 42: oWaterAtk tag=0x2a5`
    - `field_id 43: oFireAtk tag=0x2b5`
    - `field_id 44: oLightningAtk tag=0x2c5`
    - `field_id 45: oDragonAtk tag=0x2d5`
    - `field_id 46: oIceAtk tag=0x2e5`
    - `field_id 47: oWaterRes tag=0x2f5`
    - `field_id 48: oFireRes tag=0x305`
    - `field_id 49: oLightningRes tag=0x315`
    - `field_id 50: oDragonRes tag=0x325`
    - `field_id 51: oIceRes tag=0x335`
    - `field_id 52: oWaterThrsh tag=0x345`
    - `field_id 53: oFireThrsh tag=0x355`
    - `field_id 54: oLightningThrsh tag=0x365`
    - `field_id 55: oDragonThrsh tag=0x375`
    - `field_id 56: oIceThrsh tag=0x385`
    - `field_id 67: oComaThrsh tag=0x435`
    - `field_id 68: oPoisonThrsh tag=0x445`
    - `field_id 69: oSleepingThrsh tag=0x455`
    - `field_id 70: oParaThrsh tag=0x465`
    - `field_id 76: oWindPressureDef tag=0x4c5`
    - `field_id 77: oQuakeDef tag=0x4d5`
    - `field_id 78: oRoarDef tag=0x4e5`
    - `field_id 79: oPalsyDef tag=0x4f5`
    - `field_id 80: oSnowManDef tag=0x505`
    - `field_id 81: oTiredDef tag=0x515`
    - `field_id 82: oAttackLevelDef tag=0x525`
    - `field_id 83: oPetSkillID tag=0x535`
    - `field_id 84: oEquipedSkillID tag=0x545`
    - `field_id 85: oPetWeaponID tag=0x555`
    - `field_id 86: oPetHatID tag=0x565`
    - `field_id 87: oPetBodyID tag=0x575`
    - `field_id 88: oFashionWwaponID tag=0x585`
    - `field_id 89: oFashionHatID tag=0x595`
    - `field_id 90: oFashionBodyID tag=0x5a5`
    - `field_id 91: oRegion tag=0x5b5`
- ⚠ discrepancy: TlvPetFullAttrData.md lists only 5 fields (auto-schema subset) and encodes them as wire-type 3 int32 (tag 0x43/0x53/...). The real writer emits ALL 54 fields as wire-type 5 length-delimited nested values (tag 0x45/0x55/...), confirming the doc's own '54 in DebugFormat' warning. Field_ids 6,11-17,22,26-29,33,37-41,57-66,71-75 are unused/reserved. Full 54-field name->id map recovered here.

### TlvPetList_DebugFormat `@0x101a0860` — S2C
*DebugFormat text dump of a pet list: [count] (int32 @ off0, max 0x14=20) followed by [pets] array whose elements are dumped by FUN_1019fe20. Uses "%s[%u]%c" indexed-element labels. Text output, not wire.* (server: Debug-only; confirms 'pets' array field name and max=20 for the wire struct., conf high)
- TLV: unknown
- fields:
    - `count: int32 @ off 0 (max 20)`
    - `pets: substruct[] (element FUN_1019fe20)`

### TlvPetOptionDataB_Write `@10242a70` — both
*Wire WRITER for pet option/appearance struct, sibling of FUN_102426e0. Identical 11-field layout but uses sub-writer FUN_101b0280 (the 'B' variant, cf. TlvPetOptionDataB @10243380 parent 10242E00).* (server: High. Same as FUN_102426e0; server must produce the 11-field wire5 layout., conf high)
- TLV: TlvPetOptionDataB
- fields:
    - `field_id 4: oPetName tag=0x45`
    - `field_id 5: oPetSex tag=0x55`
    - `field_id 7: oOwner tag=0x75`
    - `field_id 8: oPetSignature tag=0x85`
    - `field_id 10: oPetLevel tag=0xa5`
    - `field_id 85: oPetWeaponID tag=0x555`
    - `field_id 86: oPetHatID tag=0x565`
    - `field_id 87: oPetBodyID tag=0x575`
    - `field_id 88: oFashionWwaponID tag=0x585`
    - `field_id 89: oFashionHatID tag=0x595`
    - `field_id 90: oFashionBodyID tag=0x5a5`
- ⚠ discrepancy: TlvPetOptionDataB.md lists 4 fields (wire3). Real struct = 11 fields (wire5 nested), same as the A variant. Sub-writer FUN_101b0280 differs from A's FUN_101b01d0.

### TlvPetOptionData_DebugFormat `@10243900` — unknown
*DebugFormat text dumper for the pet option/appearance struct. Emits '[oPetName]','[oPetSex]','[oOwner]','[oPetSignature]','[oPetLevel]','[oPetWeaponID]','[oPetHatID]','[oPetBodyID]','[oFashionWwaponID]','[oFashionHatID]','[oFashionBodyID]'. Diagnostic path.* (server: None (debug text); authoritative field-name source for the option writers., conf high)
- TLV: TlvPetOptionData, TlvPetOptionDataB
- fields:
    - `labels in order: oPetName,oPetSex,oOwner,oPetSignature,oPetLevel,oPetWeaponID,oPetHatID,oPetBodyID,oFashionWwaponID,oFashionHatID,oFashionBodyID`
- ⚠ discrepancy: Confirms the 11-field pet-option layout that the generated PetOption docs truncate to 4.

### TlvPetOptionData_DebugFormat `@0x101faee0` — unknown
*DebugFormat text dump (TdrBufUtil.cpp) for the pet option/appearance struct. Emits 12 labeled fields, providing the authoritative names for the binary serializers FUN_101f9b60/FUN_101f9f40.* (server: Low. Debug-only text output; documents field names/order., conf high)
- TLV: TlvPetOptionData
- fields:
    - `[oPetName]`
    - `[oPetSex]`
    - `[oOwner]`
    - `[oPetSignature]`
    - `[oPetLevel]`
    - `[oPetWeaponID]`
    - `[oPetHatID]`
    - `[oPetBodyID]`
    - `[oFashionWwaponID] (sic; = FashionWeaponID)`
    - `[oFashionHatID]`
    - `[oFashionBodyID]`
    - `[oRegion]`
- ⚠ discrepancy: Confirms the 12-field real layout vs the generated doc's 4 fields. Note the source typo 'oFashionWwaponID'.

### TlvPetOptionData_Serialize_variantA `@0x101f9b60` — both
*Binary TDR serializer for the 12-field pet option/appearance struct. Writes/patches 12 wire5 (LEN_DELIM) nested observed-value sub-structs via FUN_101b01d0. Field-id set {4,5,7,8,10,85,86,87,88,89,90,91} maps 1:1 to the 12 field names in the paired DebugFormat FUN_101faee0.* (server: High. Real wire (de)serializer for pet appearance/option data; server must handle all 12 nested fields., conf high)
- TLV: TlvPetOptionData
- fields:
    - `field 4 (tag 0x45): oPetName — wire5 LEN nested`
    - `field 5 (tag 0x55): oPetSex — wire5 LEN nested`
    - `field 7 (tag 0x75): oOwner — wire5 LEN nested`
    - `field 8 (tag 0x85): oPetSignature — wire5 LEN nested`
    - `field 10 (tag 0xa5): oPetLevel — wire5 LEN nested`
    - `field 85 (tag 0x555): oPetWeaponID — wire5 LEN nested`
    - `field 86 (tag 0x565): oPetHatID — wire5 LEN nested`
    - `field 87 (tag 0x575): oPetBodyID — wire5 LEN nested`
    - `field 88 (tag 0x585): oFashionWeaponID (spelled oFashionWwaponID) — wire5 LEN nested`
    - `field 89 (tag 0x595): oFashionHatID — wire5 LEN nested`
    - `field 90 (tag 0x5a5): oFashionBodyID — wire5 LEN nested`
    - `field 91 (tag 0x5b5): oRegion — wire5 LEN nested`
- ⚠ discrepancy: Generated TlvPetOptionData doc lists only 4 fields (oPetName/oPetSex/oOwner/oPetSignature) typed as int32 with wire3 tags (0x43 etc). Actual code emits 12 fields, all wire5 (LEN_DELIM) nested sub-structs (oPetName tag 0x45), adding oPetLevel(10) and appearance/fashion fields at ids 85-91.

### TlvPetOptionData_Serialize_variantB `@0x101f9f40` — both
*Binary TDR serializer for the same 12-field pet option struct as FUN_101f9b60, identical field-id/tag sequence, but nested elements handled by FUN_101b0280 (the other of the read/write pair).* (server: High. Wire (de)serializer counterpart for pet option data., conf high)
- TLV: TlvPetOptionData
- fields:
    - `field 4 (0x45) oPetName`
    - `field 5 (0x55) oPetSex`
    - `field 7 (0x75) oOwner`
    - `field 8 (0x85) oPetSignature`
    - `field 10 (0xa5) oPetLevel`
    - `field 85 (0x555) oPetWeaponID`
    - `field 86 (0x565) oPetHatID`
    - `field 87 (0x575) oPetBodyID`
    - `field 88 (0x585) oFashionWeaponID`
    - `field 89 (0x595) oFashionHatID`
    - `field 90 (0x5a5) oFashionBodyID`
    - `field 91 (0x5b5) oRegion`
- ⚠ discrepancy: Same as FUN_101f9b60: doc under-counts (4 vs 12) and mistypes the wire3/int32 tags; real fields are wire5 nested sub-structs.

### TlvPetOptionData_Write `@102426e0` — both
*Wire WRITER for a compact pet option/appearance struct (11 optional fields). Same tag+nested+backpatch pattern as FUN_1023dd50 but uses sub-writer FUN_101b01d0. Writes identity+appearance subset of pet attributes.* (server: High. Server must emit these 11 fields (identity + weapon/hat/body + fashion IDs) with wire5 framing for pet list/appearance sync., conf high)
- TLV: TlvPetOptionData
- fields:
    - `field_id 4: oPetName tag=0x45`
    - `field_id 5: oPetSex tag=0x55`
    - `field_id 7: oOwner tag=0x75`
    - `field_id 8: oPetSignature tag=0x85`
    - `field_id 10: oPetLevel tag=0xa5`
    - `field_id 85: oPetWeaponID tag=0x555`
    - `field_id 86: oPetHatID tag=0x565`
    - `field_id 87: oPetBodyID tag=0x575`
    - `field_id 88: oFashionWwaponID tag=0x585`
    - `field_id 89: oFashionHatID tag=0x595`
    - `field_id 90: oFashionBodyID tag=0x5a5`
- ⚠ discrepancy: TlvPetOptionData.md (@101FA900, parent 101FA320) lists only 4 fields (oPetName/oPetSex/oOwner/oPetSignature) as wire3 int32. Real struct has 11 fields incl oPetLevel(10) and appearance IDs 85-90, all wire5 nested. Field names/ids confirmed against DebugFormat FUN_10243900.

### TlvPiecesArray_DebugFormat `@0x1022cce0` — unknown
*TdrBufUtil.cpp DebugFormat: count(byte@0, max 0x19=25) + pieces[] via FUN_1022c310.* (server: Debug only; documents pieces array., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `count: uint8 @0 (max 25)`
    - `pieces[]: element @ FUN_1022c310`

### TlvPiecesArray_Pack_v0 `@0x1022c580` — both
*TdrBuf.h wire pack: count byte@0 (field1 tag 0x11, max 0x19=25), then length-delimited (tag 0x25) array of elements via FUN_1022be00 with back-patched sizes.* (server: Yes — 'pieces' array serializer (referenced as field 'pieces' in DragonBoxLottery pack FUN_1022f160)., conf high)
- TLV: TlvPiecePrizes, TlvDragonBoxLotteryData
- fields:
    - `count: uint8 @0 (max 25)`
    - `pieces[]: element @ FUN_1022be00 (tag 0x25, length-delimited)`

### TlvPiecesArray_Pack_v1 `@0x1022c6a0` — both
*TdrBuf.h wire pack, cut-version of FUN_1022c580 (elements via FUN_1022be80).* (server: Yes — array serializer (cut variant)., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `count: uint8 @0 (max 25)`
    - `pieces[]: element @ FUN_1022be80`

### TlvPiecesArray_Unpack_v0 `@0x1022c890` — both
*TdrBuf.h wire unpack: field1 count byte@0, field2 length-delimited array (max 0x19=25, element stride 6) of elements via FUN_1022bfd0. Presence flags at +0x97.* (server: Yes — 'pieces' array unpacker., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: count uint8 @0`
    - `field 2: pieces[] (max 25, element stride 6) via FUN_1022bfd0`

### TlvPiecesArray_Unpack_v1 `@0x1022ca50` — both
*TdrBuf.h wire unpack, cut-version of FUN_1022c890 (element via FUN_1022c0f0).* (server: Yes — array unpacker (cut variant)., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: count uint8 @0`
    - `field 2: pieces[] (max 25, stride 6) via FUN_1022c0f0`

### TlvPlayerRoleFullData_Pack_v1 `@0x10193b80` — S2C
*Very large (~5864 byte) TDR pack (write) of the top-level aggregate player/role data blob. Sequentially writes ~40+ optional fields and sub-structs, each length-framed via FUN_1010bf70/FUN_1010c3c0 with tags emitted by FUN_1010c5f0. Aggregates most game subsystems: a leading sub-struct (FUN_10163fe0) at tag 0x65, a varint array (max 9) @ +10, a short-counted sub-struct array (max 0x100) @ +0x32 via FUN_101667e0, then guide-book/item-pool/skill/attribute/lottery/suit-skill sub-structs (FUN_10170ea0, FUN_10172210, FUN_1024c5c0, FUN_1022a650, FUN_1016fd00, FUN_1016a880, FUN_10175de0, FUN_101773c0, FUN_101582f0, FUN_1017b1c0, FUN_102315f0, FUN_10211220, FUN_1017dd20, FUN_10181b80, FUN_101843c0, FUN_1017d3a0, FUN_101117c0, ... FUN_10189ae0 [suit skills], FUN_10192610 [lottery container], ... FUN_10193050 array), plus scalar/byte-array fields with hard caps (e.g. 0x3c, 0x80, 0x2ee, 0x32, 6). Struct spans >0x32770 bytes.* (server: Critical: this is the master role/player-state serializer the server produces (login/full-sync). All bounds (element caps 9/0x100/0x80/0x3c/500/0x2ee/0x32/6) and field tags must be reproduced exactly, or the client rejects (-6 count-negative, -7 count-overflow)., conf medium)
- TLV: unknown
- fields:
    - `field_id 6 (tag 0x65): sub-struct via FUN_10163fe0`
    - `field_id 0xa (tag 0xa0): int32/varint array, count @ word 10, max 9, elements tag 0xb5`
    - `field_id 0xc (tag 0xc0): sub-struct array, count uint16 @ +0x32, max 0x100, element FUN_101667e0 (tag 0xd5)`
    - `field_id 0x10..0x13: sub-structs FUN_10170ea0/FUN_10172210/FUN_1024c5c0/FUN_1022a650`
    - `field_id 0x14 (0x140): int32 @ +0x1c05; 0x15 (0x150): uint16 @ +0x1c09; 0x16 (0x161): uint8 @ +0x1c0b; 0x17 (0x171): uint8 @ +0x1c0c; 0x18 (0x180): varint @ +0x1c0d`
    - `field_id 0x1c (0x1c0): int32 @ +0x1c11; 0x1d (0x1d0): varint @ +0x1c15; 0x1e (0x1e5): sub-struct FUN_1016fd00`
    - `field_id 0x1f (0x1f0): uint8 array count uint16 @ +0x1d1e, max 0x80 (tag 0x205)`
    - `field_id 0x21 (0x215): sub-struct FUN_1016a880; then FUN_10175de0/FUN_101773c0/FUN_101582f0/FUN_1017b1c0/FUN_102315f0/FUN_10211220/FUN_1017dd20/FUN_10181b80/FUN_101843c0/FUN_1017d3a0/FUN_101117c0`
    - `int32 array @ +0x193bd, max 0x3c (tag 0x3d5); array @ +0x194b1 twice (max 0x80, tags 0x3f5/0x405); uint32-counted arrays @ +0x198b5 max 500 (tags 0x465/0x475)`
    - `suit-skill array via FUN_10189ae0 (tag 0x535); lottery container via FUN_10192610 (tag 0x635); trailing sub-struct array @ +0x3276b max 6 via FUN_10193050 (tag 0x685)`
- ⚠ discrepancy: No single auto-doc matches this top-level struct; it composes many documented sub-structs (TlvSuitSkillGroups, TlvLotteryBoxContainer, guide-book/item-pool families). Exact top-level TLV name unresolved.

### TlvPlayerRoleFullData_Pack_v2 `@0x10195270` — S2C
*Twin of FUN_10193b80 (~5864 bytes): the second generated PACK variant of the same top-level player/role aggregate. Identical field/sub-struct sequence but uses the alternate scalar codec FUN_1010c190 for several trailing fields (tags 0x643/0x663/0x673 vs 0x640/0x660/0x670) and alternate sub-serializers (FUN_10192780 lottery, FUN_101809e0->FUN_10180a60, FUN_1018f330->FUN_1018f4a0, FUN_10190770->FUN_10190890, FUN_10193050->FUN_101930a0). Same bounds and error codes.* (server: Critical: alternate encoding of the master role snapshot; server must select the correct variant per channel/context., conf medium)
- TLV: unknown
- fields:
    - `same top-level layout as FUN_10193b80`
    - `trailing fields use FUN_1010c190 scalar codec (tags 0x643/0x663/0x673)`
    - `lottery container via FUN_10192780; final array via FUN_101930a0 (max 6, tag 0x685)`
- ⚠ discrepancy: Same as FUN_10193b80: composite top-level struct, no single matching auto-doc entry.

### TlvPrizeArray_DebugFormat `@0x1022de30` — unknown
*TdrBufUtil.cpp DebugFormat: count(byte@0, max 0xb=11) + piecePrizes[] via FUN_1022d470.* (server: Debug only; documents piecePrizes array., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `count: uint8 @0 (max 11)`
    - `piecePrizes[]: element @ FUN_1022d470`

### TlvPrizeArray_Pack_v0 `@0x1022d6f0` — both
*TdrBuf.h wire pack: count byte@0 (max 0xb=11), then length-delimited (tag 0x25) array of elements via FUN_1022cfe0.* (server: Yes — piecePrizes array serializer (field 'piecePrizes' in FUN_1022f160)., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `count: uint8 @0 (max 11)`
    - `prizes[]: element @ FUN_1022cfe0 (length-delimited)`

### TlvPrizeArray_Pack_v1 `@0x1022d810` — both
*TdrBuf.h wire pack, cut-version of FUN_1022d6f0 (elements via FUN_1022d030).* (server: Yes — array serializer (cut variant)., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `count: uint8 @0 (max 11)`
    - `prizes[]: element @ FUN_1022d030`

### TlvPrizeArray_Unpack_v0 `@0x1022da00` — both
*TdrBuf.h wire unpack: field1 count byte@0, field2 length-delimited array (max 0xb=11, element stride 7) via FUN_1022d150. Presence flags at +0x4e.* (server: Yes — piecePrizes array unpacker., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: count uint8 @0`
    - `field 2: prizes[] (max 11, stride 7) via FUN_1022d150`

### TlvPrizeArray_Unpack_v1 `@0x1022dbb0` — both
*TdrBuf.h wire unpack, cut-version of FUN_1022da00 (element via FUN_1022d240).* (server: Yes — array unpacker (cut variant)., conf high)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: count uint8 @0`
    - `field 2: prizes[] (max 11, stride 7) via FUN_1022d240`

### TlvPrizePair_Unpack_v0 `@0x1022d150` — both
*TdrBuf.h wire unpack element: field1 scalar 4-byte @0 (FUN_1010ca10), field2 byte @+2. Presence flags at +3.* (server: Yes — 'piecePrizes' element unpacker (used by FUN_1022da00)., conf medium)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: 4-byte scalar @0`
    - `field 2: uint8 @+2`

### TlvPrizePair_Unpack_v1 `@0x1022d240` — both
*TdrBuf.h wire unpack, cut-version of FUN_1022d150: field1 = 2-byte little-endian @0, field2 byte @+2.* (server: Yes — element unpacker (cut variant, used by FUN_1022dbb0)., conf medium)
- TLV: TlvPiecePrizes
- fields:
    - `field 1: uint16 @0`
    - `field 2: uint8 @+2`

### TlvProcs_DebugPrint `@0x10153890` — unknown
*TdrBufUtil printer for TlvProcs: [procsCount][procs(array,max0x14=20)] each elem FUN_10152f10.* (server: Diagnostic; script/proc list., conf high)
- TLV: TlvProcs
- fields:
    - `procsCount: int32 @ 0 (0..20)`
    - `procs[]: nested (FUN_10152f10)`
- ⚠ discrepancy: TlvProcs.md gives max via schema; printer confirms bound 0x14 (20) and names.

### TlvProcs_Proc_Unpack_fixed `@0x10152c90` — S2C
*Fixed variant of FUN_10152ae0 (doc sub_10152C90): fields via FUN_1010c870 (fixed 4-byte).* (server: Server must emit Proc elements., conf high)
- TLV: TlvProcs
- fields:
    - `1 f1: uint32 @ 0 (fixed)`
    - `2 count: uint32 @ 4 (fixed)`
    - `3 data: uint8[<=0x100] @ 8 (len-delim)`

### TlvProcs_Proc_Unpack_varint `@0x10152ae0` — S2C
*TDR unpack of a single Proc element (sub_10152C90 per TlvProcs doc): field1 u32/nested @0 (FUN_1010cbd0), field2 u32/nested @4 (FUN_1010cbd0), field3 byte array @8 (len-delim, count -> *(param_1+4), max 0x100). Presence @ 0x108.* (server: Server must emit Proc elements matching TlvProcs.procs., conf medium)
- TLV: TlvProcs
- fields:
    - `1 f1: uint32 @ 0 (varint)`
    - `2 count: uint32 @ 4 (varint) — element count of field3`
    - `3 data: uint8[<=0x100] @ 8 (len-delim scalar array)`
- ⚠ discrepancy: TlvProcs.md lists procs element reader as sub_10152C90 (the fixed sibling of this varint reader).

### TlvQuestSystemData_DebugFormat `@0x10226430` — unknown
*TdrBufUtil.cpp DebugFormat of the quest/task system container: taskCount+task[] (max 0x80), contentCount+content[] (max 0x100), completeBitCount+completeBit[] (byte-array, max 0x500), daily (sub), schedule (sub), xDailyCount+xDaily[] (max 0x20), reset (sub), trace (sub), complete (sub).* (server: Debug only; documents the full quest-system payload layout the server must build for quest sync., conf high)
- TLV: TlvQuestSystemData, TlvQuestScheduleData, TlvCompleteBit
- fields:
    - `taskCount: int32 @0 (max 0x80)`
    - `task[]: element @ FUN_1021efd0 (base offset 4)`
    - `contentCount: int32 @0x784 (param_1[0x1e1]) (max 0x100)`
    - `content[]: element @ FUN_1021f870`
    - `completeBitCount: int32 @0x1088 (param_1[0x422]) (max 0x500)`
    - `completeBit[]: uint8[] @ base+0x108c`
    - `daily: sub-struct @ FUN_102239e0`
    - `schedule: sub-struct @ FUN_10224030`
    - `xDailyCount: int32 @0x1626 (max 0x20)`
    - `xDaily[]: element @ FUN_10224750`
    - `reset: sub-struct @ FUN_10221ce0`
    - `trace: sub-struct @ FUN_10222eb0`
    - `complete: sub-struct @ FUN_10220ad0`
- ⚠ discrepancy: Cross-ref TlvQuestSystemData / TlvQuestScheduleData / TlvCompleteBit: verify the auto-doc includes all 12 members (task, content, completeBit byte-array, daily, schedule, xDaily, reset, trace, complete). If the 0x99 doc truncated after early fields, flag it as incomplete.

### TlvRateHistory_DebugFormat `@0x1023bcc0` — unknown
*TdrBufUtil.cpp DebugFormat: rate(uint16@0) + historyCount(uint16@2, max 10) + history[] via FUN_1023b350.* (server: Debug only; documents rate + history-list layout., conf high)
- TLV: TlvRateHistory
- fields:
    - `rate: uint16 @0`
    - `historyCount: uint16 @2 (max 10)`
    - `history[]: element @ FUN_1023b350`

### TlvRecordList300_DebugFormat `@0x102379a0` — unknown
*TdrBufUtil.cpp DebugFormat: recordCount(uint16@0, max 300) + records[] via FUN_10236e10.* (server: Debug only; documents a record list (max 300)., conf high)
- fields:
    - `recordCount: uint16 @0 (max 300)`
    - `records[]: element @ FUN_10236e10`

### TlvRecordList400_DebugFormat `@0x1023ac70` — unknown
*TdrBufUtil.cpp DebugFormat: recordCount(uint16@0, max 400) + records[] via FUN_10238ce0 (same element as auction records).* (server: Debug only; documents auction record list (max 400)., conf high)
- TLV: TlvAuctionRecordContainer
- fields:
    - `recordCount: uint16 @0 (max 400)`
    - `records[]: element @ FUN_10238ce0`

### TlvRoleBrief_Pack_be `@10118030` — both
*Big-endian variant of FUN_10117f20: name string tag 0x15; id u64 fixed-BE tag 0x24 (w4); field3 u32 fixed-BE tag 0x33 (w3); field4 u64 fixed-BE tag 0x44 (w4).* (server: Yes, conf high)
- TLV: TlvBasicRoleInfo
- fields:
    - `name: char[32] string @ 0 - tag 0x15`
    - `id: uint64 @ 0x20 - tag 0x24 (fixed BE)`
    - `field3: uint32 @ 0x28 - tag 0x33 (fixed BE)`
    - `field4: uint64 @ 0x2c - tag 0x44 (fixed BE)`

### TlvRoleBrief_Pack_varint `@10117f20` — both
*Pack a role-brief sub-struct. tag 0x15 name = string char[0x20] @0 (reserve+PutBytes+patch); tag 0x20 u64 @0x20 (PutVarintU64); tag 0x30 varint u32 @0x28; tag 0x40 u64 @0x2c. This is the 'role' sub-struct embedded in profile structs.* (server: Yes, conf high)
- TLV: TlvBasicRoleInfo, TlvAvatarBriefInfo
- fields:
    - `name: char[32] string @ 0 - tag 0x15 (f1,w5)`
    - `id: uint64 @ 0x20 - tag 0x20 (f2,w0 varint)`
    - `field3: uint32 @ 0x28 - tag 0x30 (f3,w0)`
    - `field4: uint64 @ 0x2c - tag 0x40 (f4,w0)`
- ⚠ discrepancy: If a doc labels field1 (name) as int32 it is wrong: it is a char[32] string, tag 0x15 (wire 5).

### TlvRoleProfile_Pack_be `@10118b80` — both
*Big-endian variant of TlvRoleProfile pack: role sub via FUN_10118030; scalar fields use fixed-BE tags (level 0x23, icon 0x53, gold 0x73, bindGold 0x83, hRLevel 0x93); string fields unchanged (0x35/0x45/0x65).* (server: Yes, conf high)
- TLV: TlvRoleProfile
- fields:
    - `role: sub @ 0 - tag 0x15`
    - `level: int32 @ 0x38 - tag 0x23 (BE)`
    - `hunterStar: string @ 0x3c - tag 0x35`
    - `name: string @ 0xbc - tag 0x45`
    - `icon: int32 @ 0xdc - tag 0x53 (BE)`
    - `note: string @ 0xe0 - tag 0x65`
    - `gold: int32 @ 0x1e0 - tag 0x73`
    - `bindGold: int32 @ 0x1e4 - tag 0x83`
    - `hRLevel: int32 @ 0x1e8 - tag 0x93`

### TlvRoleProfile_Pack_varint `@101188d0` — both
*Pack a role profile. tag 0x15 role sub-struct (FUN_10117f20); tag 0x20 level(sint32 varint @0x38); tag 0x35 hunterStar string char[0x80] @0x3c; tag 0x45 name string char[0x20] @0xbc; tag 0x50 icon(sint32 @0xdc); tag 0x65 note string char[0x100] @0xe0; tag 0x70 gold(sint32 @0x1e0); tag 0x80 bindGold(sint32 @0x1e4); tag 0x90 hRLevel(sint32 @0x1e8). Field names confirmed by FUN_101195f0 printer.* (server: Yes, conf high)
- TLV: TlvRoleProfile
- fields:
    - `role: sub-struct @ 0 - tag 0x15 (w5)`
    - `level: sint32 @ 0x38 - tag 0x20 (w0)`
    - `hunterStar: char[128] string @ 0x3c - tag 0x35 (w5)`
    - `name: char[32] string @ 0xbc - tag 0x45 (w5)`
    - `icon: sint32 @ 0xdc - tag 0x50 (w0)`
    - `note: char[256] string @ 0xe0 - tag 0x65 (w5)`
    - `gold: sint32 @ 0x1e0 - tag 0x70`
    - `bindGold: sint32 @ 0x1e4 - tag 0x80`
    - `hRLevel: sint32 @ 0x1e8 - tag 0x90`
- ⚠ discrepancy: hunterStar, name, note are char-array STRINGS (wire 5, tags 0x35/0x45/0x65) - any doc calling them int32 is wrong; role is a sub-struct (tag 0x15) not a scalar.

### TlvS16U8Elem_Unpack_A `@10124840` — both
*Unpack a 2-field element: field1 (>>4==1) via zigzag-varint-s16 reader (FUN_1010ca10) into struct+0; field2 (>>4==2) uint8 @struct+2. Presence flags at struct+3.* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: sint16 @ 0 (varint zigzag)`
    - `field2: uint8 @ 2`

### TlvS16U8Elem_Unpack_B `@101257d0` — both
*Byte-identical duplicate of FUN_10124840 (another struct's generated unpacker with the same {s16,u8} shape).* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: sint16 @ 0 (varint zigzag)`
    - `field2: uint8 @ 2`

### TlvS16U8Elem_Unpack_C `@10127a20` — both
*Byte-identical duplicate of FUN_10124840 ({s16 varint, u8} element unpacker).* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: sint16 @ 0 (varint zigzag)`
    - `field2: uint8 @ 2`

### TlvSaveMapStar_DebugFormat `@0x1019b8a0` — S2C
*DebugFormat text dump of a small struct with a [saveMap] substruct (FUN_10165a70) and [starLevel] substruct (FUN_10215c50). Text output, not wire.* (server: Debug-only; confirms field names saveMap/starLevel for the underlying wire struct., conf high)
- TLV: unknown
- fields:
    - `saveMap: substruct -> FUN_10165a70`
    - `starLevel: substruct -> FUN_10215c50`

### TlvScheduleContainer_DebugFormat `@0x10228a90` — unknown
*TdrBufUtil.cpp DebugFormat: prints [schedule] sub-struct (FUN_10226e70) then [dailys] via FUN_102281f0.* (server: Debug only; documents schedule+dailys container., conf high)
- TLV: TlvQuestScheduleData
- fields:
    - `schedule: sub-struct @ FUN_10226e70`
    - `dailys: sub-struct @ FUN_102281f0`

### TlvScheduleEntry_Pack_v0 `@0x10228510` — both
*TdrBuf.h wire pack: field1 (tag 0x10, wire0 varint) @0 via FUN_1010c5f0; field2 (tag 0x20, wire0) @+4 via FUN_1010c560; then length-delimited (tag 0x25) sub-struct via FUN_10227b90 with back-patched size.* (server: Yes — wire serializer. Paired with FUN_10228600 (cut variant)., conf medium)
- fields:
    - `field 1: varint @0 (tag 0x10)`
    - `field 2: varint @+4 (tag 0x20)`
    - `field 3: length-delimited sub-struct @ FUN_10227b90 (tag 0x25)`

### TlvScheduleEntry_Pack_v1 `@0x10228600` — both
*TdrBuf.h wire pack, cut-version of FUN_10228510: fields use fixed-32 encoding (tags 0x13/0x23, FUN_1010c190) and sub-struct FUN_10227c80.* (server: Yes — wire serializer (cut variant)., conf medium)
- fields:
    - `field 1: fixed32 @0 (tag 0x13)`
    - `field 2: fixed32 @+4 (tag 0x23)`
    - `field 3: length-delimited sub-struct @ FUN_10227c80 (tag 0x25)`

### TlvScriptProcData_DebugPrint `@0x10158990` — unknown
*TdrBufUtil printer for TlvScriptProcData: [fetchProcs][scriptVars][onlineTime] dispatching to FUN_10153890/FUN_10156700/FUN_10157f00.* (server: Diagnostic; naming source., conf high)
- TLV: TlvScriptProcData
- fields:
    - `fetchProcs: nested (FUN_10153890 = TlvProcs)`
    - `scriptVars: nested (FUN_10156700)`
    - `onlineTime: nested (FUN_10157f00 = TlvAlarmTimeData)`

### TlvScriptProcData_Pack_fixed `@0x10158400` — S2C
*Fixed variant of FUN_101582f0: sub-structs via FUN_10153320/FUN_10156190/FUN_10157670.* (server: Server must serialize script/proc data., conf high)
- TLV: TlvScriptProcData
- fields:
    - `1 fetchProcs: nested (FUN_10153320) (tag 0x15)`
    - `2 scriptVars: nested (FUN_10156190) (tag 0x25)`
    - `3 onlineTime: nested (FUN_10157670) (tag 0x35)`

### TlvScriptProcData_Pack_varint `@0x101582f0` — S2C
*TDR pack of ScriptProcData: three nested sub-structs under tags 0x15/0x25/0x35 (FUN_10153230=fetchProcs, FUN_101560a0=scriptVars, FUN_10157480=onlineTime), each length-framed.* (server: Server must serialize per-character script/proc persistent data., conf high)
- TLV: TlvScriptProcData
- fields:
    - `1 fetchProcs: nested (FUN_10153230 = TlvProcs) (tag 0x15)`
    - `2 scriptVars: nested (FUN_101560a0) (tag 0x25)`
    - `3 onlineTime: nested (FUN_10157480 = TlvOnlineTime) (tag 0x35)`
- ⚠ discrepancy: Field names from printer FUN_10158990 ([fetchProcs][scriptVars][onlineTime]).

### TlvScriptVars_DebugPrint `@0x10156700` — unknown
*TdrBufUtil printer: [count][data(array,max0x38=56)] each elem FUN_10155d40. Printed as [scriptVars] within TlvScriptProcData.* (server: Diagnostic; script variable list., conf medium)
- TLV: TlvScriptProcData
- fields:
    - `count: int32 @ 0 (0..56)`
    - `data[]: nested (FUN_10155d40)`

### TlvSculptureContainer_DebugPrint `@0x1013af60` — unknown
*TdrBufUtil printer for a sculpture container: [curCount][sculptures(array,max5)] each elem FUN_1013a5d0.* (server: Diagnostic; field names/bounds., conf medium)
- TLV: TlvSculptureContainer
- fields:
    - `curCount: int32 @ 0 (0..5)`
    - `sculptures[]: nested (FUN_1013a5d0)`

### TlvSculptureHistory_DebugPrint `@0x10139bc0` — unknown
*TdrBufUtil printer for TlvSculptureHistory: [hisCount][sculptures(array,max3)] each elem FUN_10139290.* (server: Diagnostic; field names/bounds., conf high)
- TLV: TlvSculptureHistory
- fields:
    - `hisCount: int32 @ 0 (0..3)`
    - `sculptures[]: nested (FUN_10139290)`

### TlvSculptureLibData_DebugPrint `@0x101412a0` — unknown
*TdrBufUtil printer for TlvSculptureLibData: [count][libs(array,max4, FUN_10140430)][cfgCount][cfgs(array,max10, FUN_1013f770)].* (server: Diagnostic; field names/bounds for sculpture-lib config., conf high)
- TLV: TlvSculptureLibData
- fields:
    - `count: int32 @ 0 (0..4)`
    - `libs[]: nested (FUN_10140430)`
    - `cfgCount: int32 @ 0x54fd*4 (param_1[0x54fd]) (0..10)`
    - `cfgs[]: nested (FUN_1013f770)`

### TlvSculptureLibData_Pack_fixed_wrapper `@0x10141750` — S2C
*Fixed-variant pack wrapper equivalent to FUN_101416d0, nested body via FUN_10140a40.* (server: Server must frame nested len-delim field., conf medium)
- TLV: TlvSculptureLibData
- fields:
    - `1 body: len-delim nested struct (FUN_10140a40) @ tag 0x15`

### TlvSculptureLibData_Pack_varint_wrapper `@0x101416d0` — S2C
*TDR pack wrapper: writes tag 0x15 (field1 len-delim), reserves 4-byte length (FUN_1010bf70), serializes nested struct via FUN_10140860, then patches length (FUN_1010c3c0).* (server: Server must frame nested len-delim field with a 4-byte length prefix., conf medium)
- TLV: TlvSculptureLibData
- fields:
    - `1 body: len-delim nested struct (FUN_10140860) @ tag 0x15`

### TlvSculptureLibData_libs_DebugPrintWrapper `@0x10141ad0` — unknown
*TdrBufUtil helper that prints label [libs] then dispatches to FUN_101412a0 with incremented indent.* (server: Diagnostic only., conf medium)
- TLV: TlvSculptureLibData
- fields:
    - `libs: nested-array label wrapper -> FUN_101412a0`

### TlvSearchItemPool_TextDump `@0x10190f10` — S2C
*TdrBufUtil debug text serializer for TlvSearchItemPool. Prints [iSearchCount] (*param_1), [iRrefreshCount] (param_1[1]), [iVipRefreshCount] (param_1[2]) as int32, then a FIXED array of 8 [vItemPoolList] entries (each via FUN_10190480), then [iLastUpdateTime] (param_1[0x2b]). Diagnostic text.* (server: Server sends item-pool/search state; must emit vItemPoolList as an 8-element array and iLastUpdateTime after it., conf high)
- TLV: TlvSearchItemPool
- fields:
    - `iSearchCount: int32 @ word 0`
    - `iRrefreshCount: int32 @ word 1`
    - `iVipRefreshCount: int32 @ word 2`
    - `vItemPoolList[8]: sub-struct via FUN_10190480 (words 3..0x2a)`
    - `iLastUpdateTime: int32 @ word 0x2b`
- ⚠ discrepancy: TlvSearchItemPool auto-doc calls vItemPoolList a single int32 @ offset 43; it is actually a fixed array of 8 sub-structs (words 3..42). iLastUpdateTime is @ word 0x2b (43), consistent with doc's '@ offset 43' once vItemPoolList's 8 slots are accounted for.

### TlvShopBuyLimitData_DebugFormat `@0x1020f2f0` — unknown
*DebugFormat printer for TlvShopBuyLimitData. Dumps lastResetTm (%I64u int64), limitDataCnt (uint8 count at off 8), then four parallel arrays of length limitDataCnt: shopType (uint8, off 9), shopID (int32, off 0x109), saleID (int32, off 0x509), buyCount (int16, off 0x909).* (server: High — server must send shopType/shopID/saleID/buyCount as arrays of length limitDataCnt with correct element widths (u8/i32/i32/i16), not four scalar int32s., conf high)
- TLV: TlvShopBuyLimitData
- fields:
    - `field1 lastResetTm: int64 @ off 0x00`
    - `field2 limitDataCnt: uint8 @ off 0x08 (array length)`
    - `shopType: uint8[limitDataCnt] @ off 0x09`
    - `shopID: int32[limitDataCnt] @ off 0x109`
    - `saleID: int32[limitDataCnt] @ off 0x509`
    - `buyCount: int16[limitDataCnt] @ off 0x909`
- ⚠ discrepancy: Generated doc TlvShopBuyLimitData lists shopType/shopID/saleID as scalar int32 (fields 5/6/7) and buyCount as scalar int32 (field 8). Actual structure: they are PARALLEL ARRAYS sized by limitDataCnt, and buyCount elements are int16 (2 bytes), not int32. shopType elements are uint8. Doc field-id/type mapping for 5..8 is wrong.

### TlvShopDataContainer_DebugFormat `@0x102121e0` — unknown
*DebugFormat printer for TlvShopDataContainer. Prints shopCount (int32, max 0x14/20) then shops[] array (each via FUN_102106f0); then four TlvShopBuyLimitData sub-objects dayBuyItemLimitData/weekBuyItemLimitData/monthBuyItemLimitData/foreverBuyLimitData (each via FUN_1020f2f0); then groupCount (int32 @ index 0x1568, max 0x80/128) and groups[] array (each via FUN_10210e70).* (server: High — top-level shop data blob; server must build shops[] and groups[] arrays plus the four buy-limit sub-structs with correct counts (<=20 / <=128)., conf high)
- TLV: TlvShopDataContainer, TlvShopBuyLimitData
- fields:
    - `shopCount: int32 @ off 0x00 (max 20)`
    - `shops: TlvShopEntry[shopCount] (elem FUN_102106f0)`
    - `dayBuyItemLimitData: TlvShopBuyLimitData (FUN_1020f2f0)`
    - `weekBuyItemLimitData: TlvShopBuyLimitData`
    - `monthBuyItemLimitData: TlvShopBuyLimitData`
    - `foreverBuyLimitData: TlvShopBuyLimitData`
    - `groupCount: int32 @ word-index 0x1568 (max 128)`
    - `groups: sub-struct[groupCount] (elem FUN_10210e70)`
- ⚠ discrepancy: Doc TlvShopDataContainer assigns field ids as f1 shopCount, f2 dayBuyItemLimitData, f3 week, f4 month, f5 forever, f6 groupCount, f7 groups, f8 shops, and types all as scalar int32. Actual layout: shops/groups are arrays, the four *BuyItemLimitData are TlvShopBuyLimitData sub-structs, shopCount/groupCount are counts with bounds 20/128. The doc's flat scalar-int32 typing for f2..f8 is wrong (these are sub-structs/arrays).

### TlvShopEntry_Read `@0x10210c80` — C2S
*Read/deserialize of a shop entry (sub_10210C80, the 'shops' element of TlvShopDataContainer). Presence flags at off 0xa. field1 int16 (off 0), field2 int32 via FUN_1010c870 (off 2), field3 int32 via FUN_1010c870 (off 6).* (server: High — the shop entry element the server serializes inside TlvShopDataContainer.shops[]., conf high)
- TLV: TlvShopDataContainer
- fields:
    - `field1: int16 @ off 0x00 (presence 0x1)`
    - `field2: int32 @ off 0x02 (presence 0x2)`
    - `field3: int32 @ off 0x06 (presence 0x4)`
    - `presence_flags: uint32 @ off 0x0a`
- ⚠ discrepancy: Doc TlvShopDataContainer references 'shops sub-struct -> sub_10210C80' but does not enumerate this element's own fields (int16 + 2x int32). Recovered here.

### TlvSilverTips_Read_A `@1016a260` — both
*TDR read (variant A) of stSilverTips: field1 uint8@+0, field2 varint int32@+1 (FUN_1010ccb0). Presence flags@+5.* (server: Server decode path., conf medium)
- TLV: TlvClientSettingsData.stSilverTips
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 @ +1`
    - `presence_flags: uint32 @ +5`

### TlvSilverTips_Read_B `@1016a350` — both
*Variant B read of stSilverTips == documented sub_1016A350. {uint8@+0, int32@+1 via FUN_1010c870}, flags@+5.* (server: Canonical decode; doc references this address., conf high)
- TLV: TlvClientSettingsData.stSilverTips (sub_1016A350)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 @ +1`
    - `presence_flags: uint32 @ +5`

### TlvSilverTips_Write_A `@1016a090` — both
*TDR serializer (variant A) for stSilverTips: field1 uint8@+0 (tag 0x11), field2 int32@+1 (tag 0x20 varint).* (server: Server must encode the silver-tips setting., conf medium)
- TLV: TlvClientSettingsData.stSilverTips (sub_1016A350)
- fields:
    - `field 1: uint8 @ +0 (tag 0x11)`
    - `field 2: int32 @ +1 (tag 0x20)`

### TlvSilverTips_Write_B `@1016a110` — both
*Variant B of stSilverTips writer: uint8@+0 (0x11) + int32@+1 (tag 0x23 wire3 fixed).* (server: Canonical wire form., conf medium)
- TLV: TlvClientSettingsData.stSilverTips
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 @ +1 (tag 0x23, wire3)`

### TlvSkillAndSlotList_DebugFormat `@0x101a28a0` — S2C
*DebugFormat text dump of a skill+slot struct: [count] (int16 @ off0, max 10) then [skill] array (elements via FUN_101a0f20); then [slotCount] (int16 @ off 0x7a i.e. param_1[0x3d], max 10) then [slotLock] array (elements via FUN_101a1c00). Text output.* (server: Debug-only; recovers field names skill/slotLock and max counts., conf high)
- TLV: unknown
- fields:
    - `count: int16 @ off 0 (max 10)`
    - `skill: substruct[] (element FUN_101a0f20)`
    - `slotCount: int16 @ off 0x7a (max 10)`
    - `slotLock: substruct[] (element FUN_101a1c00)`

### TlvSkillList_DebugFormat `@0x101a3300` — S2C
*DebugFormat text dump of a skill list: [count] (int16 @ off0, max 10) then [skill] array (elements via FUN_101a15e0). Text output.* (server: Debug-only., conf high)
- TLV: unknown
- fields:
    - `count: int16 @ off 0 (max 10)`
    - `skill: substruct[] (element FUN_101a15e0)`

### TlvSkillWeaponItem_Write_fixed_101efad0 `@0x101efad0` — both
*Second TDR writer for the SAME SkillWeaponItem struct, differing only in element/scalar encoding: skillLearn inner element uses field-1 tag 0x13 (wire3, fixed 4-byte) via FUN_1010c190; talentLearn elements via FUN_101ee110 (fixed variant); talentEquip elements via FUN_101ee7d0; rage/bushidoRage int32 values via FUN_1010c190. Same field ids/tags/offsets and same range checks as FUN_101ef630.* (server: High — alternate (fixed-width) encoding of SkillWeaponItem; server must handle whichever variant the wire uses. Same layout/limits as FUN_101ef630., conf high)
- TLV: SkillWeaponItem, TlvSkillLearnIdItem, TlvTalentLearnItem, TlvTalentEquipItem
- fields:
    - `field 2: skillLearnCount byte, tag 0x21 @ src+0`
    - `field 3: skillLearn[] tag 0x35; inner field1 Id tag 0x13 (wire3, 4B) via FUN_1010c190`
    - `field 4: talentLearnCount byte, tag 0x41 @ src+0x21`
    - `field 5: talentLearn[] tag 0x55 — elements via FUN_101ee110`
    - `field 6: talentEquipCount byte, tag 0x61 @ src+0xb2`
    - `field 7: talentEquip[] tag 0x75 — elements via FUN_101ee7d0`
    - `field 8: rageIdx byte, tag 0x81 @ src+0xfb`
    - `field 9: rageCount byte, tag 0x91 @ src+0xfc`
    - `field 10: rage[] int32 array, tag 0xa5 @ src+0xfd (FUN_1010c190)`
    - `field 11: bushidoRageCount byte, tag 0xb1 @ src+0x111`
    - `field 12: bushidoRage[] int32 array, tag 0xc5 @ src+0x112`
- ⚠ discrepancy: Same discrepancy as FUN_101ef630 vs SkillWeaponItem.md (field names shifted, missing bushidoRage*, count fields mis-typed). Additionally the doc does not capture that two TDR encoding variants exist (varint inner-Id 0x10 vs fixed inner-Id 0x13).

### TlvSkillWeaponItem_Write_varint_101ef630 `@0x101ef630` — both
*TDR/TLV serializer (writer) for SkillWeaponItem (varint element variant). Field order recovered from tag sequence + the DebugFormat FUN_101f0b50 and reconstructed C# (writer noted as sub_101EF630). Writes: skillLearnCount(byte)->skillLearn[]->talentLearnCount(byte)->talentLearn[]->talentEquipCount(byte)->talentEquip[]->rageIdx(byte)->rageCount(byte)->rage[](int32 scalar array)->bushidoRageCount(byte)->bushidoRage[](int32 scalar array). Count fields validated with FUN_101159e0 and range-checked (<0 => -6, >max => -7). Arrays framed with FUN_1010bf70/FUN_1010c3c0. skillLearn inner element writes field 1 (tag 0x10, VARINT) via FUN_1010c560.* (server: High — server must serialize SkillWeaponItem when sending character skill/weapon data (S2C) and validate/parse the same layout on C2S skill changes. Field ranges (max 4/0x10/8/5) are server-enforceable limits., conf high)
- TLV: SkillWeaponItem, TlvSkillLearnIdItem, TlvTalentLearnItem, TlvTalentEquipItem
- fields:
    - `field 2: skillLearnCount byte, tag 0x21 (wire1) @ src+0, max 4`
    - `field 3: skillLearn[] tag 0x35 (wire5), stride 8 @ src+1; each entry inner field1 Id (tag 0x10 VARINT via FUN_1010c560)`
    - `field 4: talentLearnCount byte, tag 0x41 (wire1) @ src+0x21, max 0x10`
    - `field 5: talentLearn[] tag 0x55 (wire5) — elements via FUN_101ee0c0 (TlvTalentLearnItem writer)`
    - `field 6: talentEquipCount byte, tag 0x61 (wire1) @ src+0xb2, max 8`
    - `field 7: talentEquip[] tag 0x75 (wire5) — elements via FUN_101ee780 (TlvTalentEquipItem writer)`
    - `field 8: rageIdx byte, tag 0x81 (wire1) @ src+0xfb`
    - `field 9: rageCount byte, tag 0x91 (wire1) @ src+0xfc, max 5`
    - `field 10: rage[] int32 scalar array, tag 0xa5 (wire5) @ src+0xfd (values via FUN_1010c560)`
    - `field 11: bushidoRageCount byte, tag 0xb1 (wire1) @ src+0x111`
    - `field 12: bushidoRage[] int32 scalar array, tag 0xc5 (wire5) @ src+0x112`
- ⚠ discrepancy: Generated SkillWeaponItem.md is materially WRONG. It lists only 8 fields with SHIFTED names/types: it labels field3=talentLearnCount, field4=talentLearn, field5=talentEquipCount, field6=talentEquip, field7=rageIdx, field8=rageCount, field9=rage, and marks count fields as wire5/int32 struct. Actual layout (from writer + DebugFormat): f2=skillLearnCount(byte,wire1), f3=skillLearn[], f4=talentLearnCount(byte), f5=talentLearn[], f6=talentEquipCount(byte), f7=talentEquip[], f8=rageIdx(byte), f9=rageCount(byte), f10=rage[](int32 array), f11=bushidoRageCount(byte), f12=bushidoRage[](int32 array). Doc omits bushidoRageCount/bushidoRage entirely and mis-types the count fields.

### TlvSkill_Pack_be `@10126270` — both
*Big-endian variant of FUN_10125e10 (same large struct, fixed-BE scalar wire types).* (server: Yes, conf low)
- TLV: TlvSkill
- fields:
    - `big-endian variant of FUN_10125e10 (not fully enumerated)`

### TlvSkill_Pack_varint `@10125e10` — both
*Pack a large multi-field struct (skill/attribute record; caller chain reaches the [skills] list printer FUN_10128600). Long chained sequence of tag writes + varint/string fields via the shared primitives. Exact field map not fully recovered in this pass.* (server: Yes, conf low)
- TLV: TlvSkill
- fields:
    - `multiple fields via FUN_1010c5f0 tags + FUN_1010c2b0/varint writers (not fully enumerated)`

### TlvSoulBeastStatsArrayB_DebugFormat `@0x1020b0c0` — unknown
*Duplicate of FUN_102090a0 debug printer for the ArrayB parent (same [oCharLevel]..[oFeedTime] labels, 7 elements each).* (server: None (debug)., conf high)
- TLV: TlvSoulBeastStatsArrayB
- fields:
    - `[oCharLevel]:int32[7]@0x00`
    - `[oCharExp]:int32[7]@0x1c`
    - `[oCharGlut]:int32[7]@0x38`
    - `[oEvloveStage]:int32[7]@0x54`
    - `[oImage]:int32[7]@0x70`
    - `[oFollow]:int32[7]@0x8c`
    - `[oFeedTime]:int32[7]@0xa8`
- ⚠ discrepancy: Confirms array (7-element) nature vs doc scalar.

### TlvSoulBeastStatsArrayB_Write_Fixed `@0x10209eb0` — S2C
*Duplicate of FUN_10207e90 (fixed/inline element flavor) for the ArrayB parent. Same 7 int32[7] fields.* (server: High — alternate ArrayB encoder., conf medium)
- TLV: TlvSoulBeastStatsArrayB
- fields:
    - `field2: int32[7] @0x00 oCharLevel`
    - `field4: int32[7] @0x1c oCharExp`
    - `field5: int32[7] @0x38 oCharGlut`
    - `field6: int32[7] @0x54 oEvloveStage`
    - `field7: int32[7] @0x70 oImage`
    - `field8: int32[7] @0x8c oFollow`
    - `field9: int32[7] @0xa8 oFeedTime`
- ⚠ discrepancy: Same discrepancy: wire5 int32[7] arrays vs doc scalar int32/wire3.

### TlvSoulBeastStatsArrayB_Write_Varint `@0x102098b0` — S2C
*Duplicate of FUN_10207890 (soul-beast attribute-array writer, FUN_1010c560 elements, tags 0x25..0x95) instantiated for the ArrayB parent. Same 7 int32[7] fields / offsets.* (server: High — server must emit identical wire5 array framing for ArrayB., conf medium)
- TLV: TlvSoulBeastStatsArrayB
- fields:
    - `field2: int32[7] @0x00 oCharLevel`
    - `field4: int32[7] @0x1c oCharExp`
    - `field5: int32[7] @0x38 oCharGlut`
    - `field6: int32[7] @0x54 oEvloveStage`
    - `field7: int32[7] @0x70 oImage`
    - `field8: int32[7] @0x8c oFollow`
    - `field9: int32[7] @0xa8 oFeedTime`
- ⚠ discrepancy: Same as FUN_10207890: doc TlvSoulBeastStatsArrayB lists scalar int32/wire3; code emits wire5 len-delimited int32[7] arrays.

### TlvSoulBeastStatsArrayC_DebugFormat `@0x1020d0d0` — unknown
*Duplicate of FUN_102090a0 debug printer for the ArrayC parent.* (server: None (debug)., conf high)
- TLV: TlvSoulBeastStatsArrayC
- fields:
    - `[oCharLevel]:int32[7]@0x00`
    - `[oCharExp]:int32[7]@0x1c`
    - `[oCharGlut]:int32[7]@0x38`
    - `[oEvloveStage]:int32[7]@0x54`
    - `[oImage]:int32[7]@0x70`
    - `[oFollow]:int32[7]@0x8c`
    - `[oFeedTime]:int32[7]@0xa8`
- ⚠ discrepancy: Confirms array nature vs doc scalar.

### TlvSoulBeastStatsArrayC_Write_Fixed `@0x1020bec0` — S2C
*Duplicate of FUN_10207e90 (fixed/inline flavor) for the ArrayC parent.* (server: High — alternate ArrayC encoder., conf medium)
- TLV: TlvSoulBeastStatsArrayC
- fields:
    - `field2: int32[7] @0x00 oCharLevel`
    - `field4: int32[7] @0x1c oCharExp`
    - `field5: int32[7] @0x38 oCharGlut`
    - `field6: int32[7] @0x54 oEvloveStage`
    - `field7: int32[7] @0x70 oImage`
    - `field8: int32[7] @0x8c oFollow`
    - `field9: int32[7] @0xa8 oFeedTime`
- ⚠ discrepancy: Same discrepancy: wire5 int32[7] arrays vs scalar int32/wire3.

### TlvSoulBeastStatsArrayC_Write_Varint `@0x1020b8c0` — S2C
*Duplicate of FUN_10207890 for the ArrayC parent (FUN_1010c560 element writer, tags 0x25..0x95, 7 int32[7] fields).* (server: High — server emits identical wire5 array framing for ArrayC., conf medium)
- TLV: TlvSoulBeastStatsArrayC
- fields:
    - `field2: int32[7] @0x00 oCharLevel`
    - `field4: int32[7] @0x1c oCharExp`
    - `field5: int32[7] @0x38 oCharGlut`
    - `field6: int32[7] @0x54 oEvloveStage`
    - `field7: int32[7] @0x70 oImage`
    - `field8: int32[7] @0x8c oFollow`
    - `field9: int32[7] @0xa8 oFeedTime`
- ⚠ discrepancy: Same as FUN_10207890 vs TlvSoulBeastStatsArrayC doc: wire5 int32[7] arrays not scalar int32/wire3.

### TlvSoulBeastStatsArray_DebugFormat `@0x102090a0` — unknown
*DebugFormat pretty-printer for the soul-beast attribute array. Dumps each of the 7 attribute arrays under labels [oCharLevel],[oCharExp],[oCharGlut],[oEvloveStage],[oImage],[oFollow],[oFeedTime] using '%s[0 : %I64i]:' + '%I64i' per element (7 elements each). Confirms field names/offsets used by the writers.* (server: None directly (debug), but authoritative source of the field names/order the server must honor., conf high)
- TLV: TlvSoulBeastStatsArray
- fields:
    - `[oCharLevel]: int32[7] @ off 0x00`
    - `[oCharExp]: int32[7] @ off 0x1c`
    - `[oCharGlut]: int32[7] @ off 0x38`
    - `[oEvloveStage]: int32[7] @ off 0x54`
    - `[oImage]: int32[7] @ off 0x70`
    - `[oFollow]: int32[7] @ off 0x8c`
    - `[oFeedTime]: int32[7] @ off 0xa8`
- ⚠ discrepancy: Confirms the array nature: each labeled field is dumped as 7 int64-formatted elements, not a single scalar as the generated doc implies.

### TlvSoulBeastStatsArray_Write_Fixed `@0x10207e90` — S2C
*Second write flavor of the soul-beast attribute array. Same 7 fields / same offsets as FUN_10207890, but first blocks use FUN_1010c190 and later blocks are written with inline big-endian 4-byte stores plus per-element buffer bounds checks (TdrBuf.h 0x108). Produces the same wire5 int32[7] arrays.* (server: High — alternate encoder for the same structure; server must produce identical wire5 array framing., conf medium)
- TLV: TlvSoulBeastStatsArray
- fields:
    - `field2: int32[7] array @ tag 0x25, off 0x00 — oCharLevel`
    - `field4: int32[7] array @ tag 0x45, off 0x1c — oCharExp`
    - `field5: int32[7] array @ tag 0x55, off 0x38 — oCharGlut`
    - `field6: int32[7] array @ tag 0x65, off 0x54 — oEvloveStage`
    - `field7: int32[7] array @ tag 0x75, off 0x70 — oImage`
    - `field8: int32[7] array @ tag 0x85, off 0x8c — oFollow`
    - `field9: int32[7] array @ tag 0x95, off 0xa8 — oFeedTime`
- ⚠ discrepancy: Same discrepancy as FUN_10207890: doc labels these fields scalar int32/wire3, code emits wire5 len-delimited int32[7] arrays.

### TlvSoulBeastStatsArray_Write_Varint `@0x10207890` — S2C
*Write/marshal of the soul-beast (farm pet) attribute array. Emits 7 length-delimited (wire5) fields; each field is an int32[7] scalar array written element-by-element via FUN_1010c560, with a backpatched 4-byte length. Field tags 0x25,0x45,0x55,0x65,0x75,0x85,0x95.* (server: High — server building character/pet packets must emit these 7 fields as wire5 length-delimited int32[7] arrays, not scalar wire3 ints, or the client parse fails., conf medium)
- TLV: TlvSoulBeastStatsArray
- fields:
    - `field2: int32[7] array @ tag 0x25, struct off 0x00 — oCharLevel per soul-beast`
    - `field4: int32[7] array @ tag 0x45, struct off 0x1c — oCharExp`
    - `field5: int32[7] array @ tag 0x55, struct off 0x38 — oCharGlut`
    - `field6: int32[7] array @ tag 0x65, struct off 0x54 — oEvloveStage`
    - `field7: int32[7] array @ tag 0x75, struct off 0x70 — oImage`
    - `field8: int32[7] array @ tag 0x85, struct off 0x8c — oFollow`
    - `field9: int32[7] array @ tag 0x95, struct off 0xa8 — oFeedTime`
- ⚠ discrepancy: Generated doc TlvSoulBeastStatsArray lists each of fields 2/4/5/6/7/8/9 as a SCALAR int32 with wire3 tags (0x23,0x43,...). The actual write code emits them as wire5 LEN_DELIM fields (tags 0x25,0x45,...) each carrying an int32[7] array (7 elements, struct stride 0x1c). Fields are arrays, not scalars, and wire type is 5 not 3. Field 3 is absent (doc also omits it).

### TlvStarBranchData_DebugFormat `@0x10217b40` — unknown
*TdrBufUtil.cpp DebugFormat/ToString for a star-branch reward struct. Emits starNum(byte@0), branchNum(byte@1), branchList[branchNum] (max 11), starList[starNum] (max 21) where each starList element = {quality(byte), finishTime(uint32)}.* (server: Debug/logging only, not on wire; but authoritatively documents the star-branch reward struct layout the server must build., conf high)
- TLV: TlvStarBranchData
- fields:
    - `starNum: uint8 @0 — number of starList entries (max 0x15=21)`
    - `branchNum: uint8 @1 — number of branchList entries (max 0xb=11)`
    - `branchList[]: sub-struct array @ (offset via FUN_102166e0)`
    - `starList[]: array @ base+0xe8 stride 9 = { quality: uint8 @+0, finishTime: uint32 @+1 }`
- ⚠ discrepancy: Doc TlvStarBranchData (@0x10217820) lists 4 wire fields: starNum(1), branchNum(3,unknown), starList(4,int32), quality(5,int32). The real DebugFormat shows branchNum is a uint8 count driving a separate branchList array (doc omits branchList entirely), and starList is an ARRAY whose element = {quality:uint8, finishTime:uint32}, not two scalar int32 fields. Doc's 0x99-subset flag is correct that it truncated, but the field semantics (branchList missing, starList element shape) are wrong.

### TlvStarBranchData_Write_Fixed `@0x10217320` — S2C
*Fixed-encoding flavor of TlvStarBranchData write. Same structure as FUN_10217140 but starList elements via FUN_10216100 and quality elements via FUN_10216a50 (fixed wire3 encodings).* (server: High — alternate TlvStarBranchData encoder (fixed element encoding)., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1 starNum: uint8 @ off 0x00, tag 0x11 (max 20)`
    - `field3 branchNum: uint8 @ off 0x01, tag 0x31 (max 10)`
    - `field4 starList: sub-struct[branchNum] @ tag 0x45 (elem FUN_10216100)`
    - `field5 quality: sub-struct[starNum] @ tag 0x55 (elem FUN_10216a50)`
- ⚠ discrepancy: Same as FUN_10217140: field4/field5 are sub-struct arrays not scalar int32; field3 is a uint8 count. Doc's 4-vs-6 field-count mismatch reflects that DebugFormat sees the array/count fields the 0x99 schema collapses.

### TlvStarBranchData_Write_Varint `@0x10217140` — S2C
*Write/marshal of TlvStarBranchData. field1 uint8 (tag 0x11, off 0); field3 branchNum uint8 count (tag 0x31, off 1, max 10) via FUN_101150a0; field4 starList as wire5 array (tag 0x45) of branchNum sub-structs via FUN_10216000; field5 quality as wire5 array (tag 0x55) of field1-count sub-structs via FUN_102169d0 (count max 20).* (server: High — weapon/card star-branch blob; server must emit starList[] and quality[] as sub-struct arrays with counts bounded 10/20., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1 starNum: uint8 @ off 0x00, tag 0x11 (also array count for field5, max 20)`
    - `field3 branchNum: uint8 @ off 0x01, tag 0x31 (array count for field4, max 10)`
    - `field4 starList: sub-struct[branchNum] @ tag 0x45 (elem FUN_10216000 = sub_10216470)`
    - `field5 quality: sub-struct[starNum] @ tag 0x55 (elem FUN_102169d0 / read sub_10216C90)`
- ⚠ discrepancy: Doc TlvStarBranchData flags a field-count mismatch (schema 4 vs DebugFormat 6) and types field4 starList / field5 quality as scalar int32. Actual: field4 and field5 are ARRAYS of sub-structs (starList = u8+i16+4xi32 elements sized by branchNum; quality = u8+i32 elements sized by starNum), field3 branchNum is a uint8 count. Wire5 arrays, not scalar int32.

### TlvStarBranch_Quality_Elem_Read_Fixed `@0x10216c90` — C2S
*Read/deserialize of the quality element (fixed flavor, sub_10216C90). Presence flags at off 5. field1 uint8 (off 0), field2 int32 fixed via FUN_1010c870 (off 1).* (server: High — the quality element reader named in the doc (sub_10216C90)., conf high)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00 (presence 0x1)`
    - `field2: int32(fixed) @ off 0x01 (presence 0x2)`
    - `presence_flags: uint32 @ off 0x05`
- ⚠ discrepancy: Matches TlvStarBranchData doc's sub_10216C90 reference; element fields (uint8 + int32) confirmed.

### TlvStarBranch_Quality_Elem_Read_Varint `@0x10216ba0` — C2S
*Read/deserialize of the quality element (varint flavor). Presence flags at off 5. field1 uint8 (off 0), field2 int32 varint via FUN_1010ccb0 (off 1).* (server: Server must parse quality element (uint8 + int32)., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00 (presence 0x1)`
    - `field2: int32(varint) @ off 0x01 (presence 0x2)`
    - `presence_flags: uint32 @ off 0x05`

### TlvStarBranch_Quality_Elem_Write_Fixed `@0x10216a50` — S2C
*Fixed-encoding flavor of the quality element write. field1 uint8 (0x11), field2 int32 fixed (tag 0x23, FUN_1010c190, off 1).* (server: High — alternate encoder for the quality element., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int32(fixed) @ off 0x01, tag 0x23`
- ⚠ discrepancy: Same element as FUN_102169d0; doc leaves fields unspecified.

### TlvStarBranch_Quality_Elem_Write_Varint `@0x102169d0` — S2C
*Write of a 2-field quality element (write counterpart of read sub_10216C90). field1 uint8 (tag 0x11, off 0), field2 int32 varint (tag 0x20, off 1).* (server: High — element of TlvStarBranchData.quality[] (field5)., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int32(varint) @ off 0x01, tag 0x20`
- ⚠ discrepancy: TlvStarBranchData doc references field5 quality -> sub_10216C90; element fields (uint8 + int32) recovered here.

### TlvStarBranch_StarList_Elem_Write_Fixed `@0x10216100` — S2C
*Fixed-encoding flavor of the star-branch starList element write. field1 uint8 (0x11), field2 int16 fixed (tag 0x22, FUN_1010c120), field3-6 int32 fixed (tags 0x33/0x43/0x53/0x63, FUN_1010c190).* (server: High — alternate encoder for the same starList element., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int16(fixed) @ off 0x01, tag 0x22`
    - `field3: int32(fixed) @ off 0x03, tag 0x33`
    - `field4: int32(fixed) @ off 0x07, tag 0x43`
    - `field5: int32(fixed) @ off 0x0b, tag 0x53`
    - `field6: int32(fixed) @ off 0x0f, tag 0x63`
- ⚠ discrepancy: Same element as FUN_10216000; doc leaves its fields unspecified.

### TlvStarBranch_StarList_Elem_Write_Varint `@0x10216000` — S2C
*Write/marshal of a 6-field star-branch starList element (write counterpart of read sub_10216470). field1 uint8 (tag 0x11, off 0), field2 int16 (tag 0x20, FUN_1010c4d0, off 1), field3 int32 (tag 0x30, off 3), field4 int32 (tag 0x40, off 7), field5 int32 (tag 0x50, FUN_1010c560, off 0xb), field6 int32 (tag 0x60, off 0xf). Varint/wire0 encoding.* (server: High — element of TlvStarBranchData.starList[]; server must emit u8+i16+4xi32 per entry., conf medium)
- TLV: TlvStarBranchData
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int16 @ off 0x01, tag 0x20`
    - `field3: int32 @ off 0x03, tag 0x30`
    - `field4: int32 @ off 0x07, tag 0x40`
    - `field5: int32 @ off 0x0b, tag 0x50`
    - `field6: int32 @ off 0x0f, tag 0x60`
- ⚠ discrepancy: TlvStarBranchData doc references field4 starList -> sub_10216470 but does not enumerate this element (uint8 + int16 + 4x int32). Recovered here.

### TlvStarStatData_DebugFormat `@0x10215c50` — unknown
*DebugFormat printer for TlvStarStatData. Prints starNum (0x%02x, max 20), starList[] (bytes, ' 0x%02x'), statNum (0x%02x, max 10), statList[] (each via FUN_10215060), starPoints (int32 @ off 0x7a).* (server: None (debug); authoritative field names for the star-stat writers., conf high)
- TLV: TlvStarStatData
- fields:
    - `starNum: uint8 @ off 0x00 (max 20)`
    - `starList: uint8[starNum] @ off 0x01`
    - `statNum: uint8 @ off 0x15 (max 10)`
    - `statList: sub-struct[statNum]`
    - `starPoints: int32 @ off 0x7a`
- ⚠ discrepancy: Confirms starList is a uint8 array and statNum a uint8 count, contradicting the doc's scalar-int32/unknown typing.

### TlvStarStatData_Write_Fixed `@0x102154b0` — S2C
*Fixed-encoding flavor of TlvStarStatData write. Same fields as FUN_102152f0 but statList elements via FUN_10214ca0 and field5 starPoints written as fixed int32 (tag 0x53) via FUN_1010c190.* (server: High — alternate TlvStarStatData encoder (wire3 starPoints)., conf high)
- TLV: TlvStarStatData
- fields:
    - `field1 starNum: uint8 @ off 0x00, tag 0x11`
    - `field2 starList: uint8[starNum] @ tag 0x25`
    - `field3 statNum: uint8 @ off 0x15, tag 0x31`
    - `field4 statList: sub-struct[statNum] @ tag 0x45 (elem FUN_10214ca0)`
    - `field5 starPoints: int32(fixed) @ off 0x7a, tag 0x53`
- ⚠ discrepancy: Same as FUN_102152f0: doc mistypes field2 (byte array not scalar int32) and field3 (uint8 count not 'unknown').

### TlvStarStatData_Write_Varint `@0x102152f0` — S2C
*Write/marshal of TlvStarStatData. field1 starNum uint8 (tag 0x11, off 0, max 0x14/20); field2 starList as wire5 array (tag 0x25) of starNum uint8 elements (FUN_101150a0); field3 statNum uint8 (tag 0x31, off 0x15, max 10); field4 statList as wire5 array (tag 0x45) of statNum sub-structs via FUN_10214c50 (each len-delimited); field5 starPoints int32 varint (tag 0x50) at off 0x7a.* (server: High — weapon/card star-stat blob; server must emit starList as a byte array and statList as an array of {int16,int32} sub-structs, counts bounded 20/10., conf high)
- TLV: TlvStarStatData
- fields:
    - `field1 starNum: uint8 @ off 0x00, tag 0x11 (max 20)`
    - `field2 starList: uint8[starNum] array @ tag 0x25 (off 0x01)`
    - `field3 statNum: uint8 @ off 0x15, tag 0x31 (max 10)`
    - `field4 statList: sub-struct[statNum] @ tag 0x45 (elem FUN_10214c50 = sub_10214E60)`
    - `field5 starPoints: int32(varint) @ off 0x7a, tag 0x50`
- ⚠ discrepancy: Doc TlvStarStatData lists field2 starList as scalar int32 (@off21) and field3 statNum type 'unknown'. Actual: field2 starList is a uint8[] array (wire5, sized by starNum), field3 statNum is a uint8 count, field4 statList is an array of sub_10214E60 structs. starPoints @off122(0x7a) matches doc.

### TlvStarStatList_Elem_Read `@0x10214e60` — C2S
*Read/deserialize of a stat-list element (sub_10214E60, the statList element of TlvStarStatData). Presence flags at off 6. field1 int16 (off 0), field2 int32 via FUN_1010c870 (off 2).* (server: High — element of TlvStarStatData.statList[]; server must serialize int16 + int32 per entry., conf high)
- TLV: TlvStarStatData
- fields:
    - `field1: int16 @ off 0x00 (presence 0x1)`
    - `field2: int32 @ off 0x02 (presence 0x2)`
    - `presence_flags: uint32 @ off 0x06`
- ⚠ discrepancy: TlvStarStatData doc references field4 statList -> sub_10214E60 but leaves this element's fields unspecified. Recovered: int16 + int32.

### TlvStatContainer_DebugFormat `@0x1021bf40` — unknown
*TdrBufUtil.cpp DebugFormat of a two-array stat container: statNumInt(uint16@0) + statListInt[] (max 200) via FUN_1021b2a0; statNum(uint16 @0x7d2) + statList[] (max 0xe74=3700) via FUN_1021ac30.* (server: Debug only; documents the dual stat-list layout the server produces (e.g., star/stat progression)., conf high)
- TLV: TlvStarStatData
- fields:
    - `statNumInt: uint16 @0 (max 200)`
    - `statListInt[]: element @ FUN_1021b2a0`
    - `statNum: uint16 @0x7d2 (param_1[0x3e9]) (max 3700)`
    - `statList[]: element @ FUN_1021ac30`
- ⚠ discrepancy: Candidate match to TlvStarStatData/similar stat container; verify element structs FUN_1021b2a0/FUN_1021ac30 against doc.

### TlvStateArray_DebugFormat `@102450a0` — unknown
*DebugFormat dumper for an array of a sub-struct. Writes '[count]' then up to 1024 (0x400) '[state]' elements, formatting each element index via '%s[%u]%c' and recursing into element dumper FUN_10244790.* (server: None (debug text). Indicates a 'state' array field with cap 1024 in the parent struct., conf medium)
- TLV: unknown
- fields:
    - `count: int32 @ obj+0 (max 1024)`
    - `state[]: element sub-struct dumped by FUN_10244790`

### TlvStoreData_DebugPrint `@0x10129d20` — unknown
*TdrBufUtil debug/dump printer for TlvStoreData. Emits named fields [curNum][count][stores][storeSize][storeData] via FUN_1024a290/FUN_1010c010.* (server: Not needed on server (diagnostic pretty-printer); authoritative source of field NAMES for TlvStoreData., conf high)
- TLV: TlvStoreData
- fields:
    - `curNum: uint8 @ 0`
    - `count: uint8 @ 1 (max 8)`
    - `stores[]: nested (FUN_10128fc0 print)`
    - `storeSize: uint32 @ 0x6a (max 200000)`
    - `storeData: uint8[] @ 0x6e`
- ⚠ discrepancy: Confirms field names/types over the doc's wrong 'unknown'/'int32' entries.

### TlvStoreData_Pack_fixed `@0x101294b0` — S2C
*TDR pack of TlvStoreData (fixed-width variant). Identical to FUN_101292e0 except storeSize written as fixed int32 (tag 0x43 via FUN_1010c190) and stores elements packed by FUN_10128a00.* (server: Server must serialize TlvStoreData; this fixed-width encoding matches the generated doc's tags., conf high)
- TLV: TlvStoreData
- fields:
    - `1 curNum: uint8 @ 0 (tag 0x11)`
    - `2 count: uint8 @ 1 (tag 0x21)`
    - `3 stores: nested array (tag 0x35)`
    - `4 storeSize: int32 @ 0x6a FIXED 4-byte (tag 0x43)`
    - `5 storeData: uint8[storeSize] @ 0x6e (tag 0x55)`
- ⚠ discrepancy: Same field-type corrections as FUN_101292e0. Doc tag 0x43 for storeSize matches THIS fixed variant (not the varint sibling).

### TlvStoreData_Pack_varint `@0x101292e0` — S2C
*TDR pack of TlvStoreData (varint-encoding variant). Writes curNum(u8), count(u8), stores[] nested array (FUN_10128930 per elem, max 8), storeSize as VARINT (tag 0x40), storeData byte-array (tag 0x55, len=storeSize<=200000).* (server: Server must serialize player store state (curNum/store list/opaque blob) in this exact layout., conf high)
- TLV: TlvStoreData
- fields:
    - `1 curNum: uint8 @ 0 (tag 0x11)`
    - `2 count: uint8 @ 1 (tag 0x21) — element count of stores, max 8`
    - `3 stores: nested array of Store(FUN_10128930) (tag 0x35, len-delim)`
    - `4 storeSize: uint32 @ 0x6a as VARINT (tag 0x40) — max 200000`
    - `5 storeData: uint8[storeSize] @ 0x6e (tag 0x55, len-delim byte array)`
- ⚠ discrepancy: TlvStoreData.md is WRONG: field2 'count' typed 'unknown' — it is uint8 (tag 0x21); field3 'stores' typed 'int32 @106' — it is a nested TlvIdxName array (offset 1 is count, 106/0x6a is storeSize); field5 'storeData' typed 'int32' — it is a variable-length uint8[] (len=storeSize) @0x6e. C# TlvStoreData matches this corrected view (List<TlvIdxName>, byte[] StoreData).

### TlvStoreData_Store_Unpack_v `@0x10128d30` — S2C
*TDR unpack of a single 'store' element of TlvStoreData: reads field_id=1 (idx, uint8 @0) and field_id=2 (len-delimited string, max 7 bytes, memmove into +1 with NUL terminator -> char name[8]@1). Presence bitmask at +9.* (server: Server must emit this element identically inside TlvStoreData.Stores; nested sub-struct, not a top-level message., conf high)
- TLV: TlvStoreData, TlvIdxName
- fields:
    - `1 idx: uint8 @ 0 (wire1)`
    - `2 name: char[8] len-delim string, max 7 chars @ 1 (wire5)`
- ⚠ discrepancy: This is the 'stores' element reader referenced by TlvStoreData doc as sub_10128D30; C# TlvStoreData confirms List<TlvIdxName> (idx+name), consistent with reversed {uint8 idx, char[8] name}.

### TlvSub3Field_ReadA `@102444c0` — both
*Generic TLV sub-struct READER for a small 3-field record. Loops reading TDR tags (FUN_1010ccb0) until byte budget consumed; dispatches on tag>>4: field_id 1 -> varint (FUN_1010ccb0), field_id 2 -> single byte copied to obj+4, field_id 3 -> varint at obj+5. Sets presence bitmask at obj+9 (bits 0x1/0x2/0x4). Unknown fields skipped via FUN_1010d4f0.* (server: Server must parse/produce this 3-field record wherever its parent embeds it; exact struct identity unresolved in this chunk., conf medium)
- TLV: unknown
- fields:
    - `field_id 1: varint (presence bit 0x1) @ obj+? via FUN_1010ccb0`
    - `field_id 2: uint8 (presence bit 0x2) @ obj+4`
    - `field_id 3: varint (presence bit 0x4) @ obj+5`

### TlvSub3Field_ReadB `@102445c0` — both
*Sibling of FUN_102444c0: same 3-field TLV read loop, but field_id 1 and field_id 3 are decoded via FUN_1010c870 (length/int reader) instead of FUN_1010ccb0. Presence bitmask at obj+9.* (server: Same as FUN_102444c0., conf medium)
- TLV: unknown
- fields:
    - `field_id 1: int/len (presence bit 0x1) via FUN_1010c870`
    - `field_id 2: uint8 (presence bit 0x2) @ obj+4`
    - `field_id 3: int/len (presence bit 0x4) @ obj+5`

### TlvSuitSkillGroups_PackArray_v1 `@0x10189ae0` — both
*TDR pack (write) of the repeated 'suitSkillGroupData' array of TlvSuitSkillGroups. Writes a 1-byte element count (*param_1, hard-capped at 0x28=40, returns -7 if exceeded) then, per element, reserves a 4-byte length via FUN_1010bf70, serializes one element via FUN_10188df0, and backfills the length via FUN_1010c3c0. Whole array is itself length-prefixed. FUN_1010c5f0 emits the TDR tag.* (server: Server must produce this exact wire layout (count byte + per-element length-prefixed blobs, 40-element cap) when sending suit-skill-group data., conf high)
- TLV: TlvSuitSkillGroups
- fields:
    - `count: uint8 @ offset 0 — element count, max 0x28`
    - `elements[]: sub-struct (FUN_10188df0) — length-delimited repeated, wire type 5`

### TlvSuitSkillGroups_PackArray_v2 `@0x10189bf0` — both
*Near-identical twin of FUN_10189ae0: TDR pack of the suitSkillGroupData array (count byte max 0x28, per-element length-prefixed) but serializes each element via FUN_10188f70 instead of FUN_10188df0. Represents the second generated encoding variant of the same struct (differing scalar int encoding).* (server: Same wire format as FUN_10189ae0; server must match whichever variant the client uses on a given channel., conf high)
- TLV: TlvSuitSkillGroups
- fields:
    - `count: uint8 @ offset 0 — element count, max 0x28`
    - `elements[]: sub-struct (FUN_10188f70) — length-delimited repeated`

### TlvSuitSkillGroups_TextDump `@0x1018a240` — both
*TdrBufUtil debug/human-readable text serializer for TlvSuitSkillGroups. Prints [groupCnt] as '0x%02x' (uint8, *param_1, capped 0x28), then iterates the suitSkillGroupData array formatting each element header '%s[%u]%c' with label '[suitSkillGroupData]' and recursing into element text-dump FUN_10189710. Not a wire codec — produces diagnostic text.* (server: Diagnostic only (TdrBufUtil.cpp text dump); confirms field names/types but server does not need to emit this format., conf high)
- TLV: TlvSuitSkillGroups
- fields:
    - `groupCnt: uint8 @ offset 0`
    - `suitSkillGroupData[]: element text via FUN_10189710`

### TlvSuitSkillGroups_Unpack_v1 `@0x10189dd0` — both
*TDR unpack (read) of TlvSuitSkillGroups. Reads tag via FUN_1010ccb0, switches on field_id (tag>>4): field_id 1 => reads 1 byte into *param_1 (groupCnt) and sets presence bit 0x1 in flags word @ +0x8ea9; field_id 2 => reads a byte-size length (FUN_1010c870), loops reading repeated elements via FUN_101891c0 until position == start+length (max 0x28 iterations), stores element count in *param_1, sets presence bit 0x2; unknown field_ids skipped via FUN_1010d4f0. Bounds-checks against buffer length.* (server: Server must parse this to consume client-supplied suit-skill-group data; enforce 0x28 element cap and length framing., conf high)
- TLV: TlvSuitSkillGroups
- fields:
    - `field_id 1: groupCnt uint8 @ offset 0 (presence bit 0x1)`
    - `field_id 2: suitSkillGroupData repeated sub-struct via FUN_101891c0 (presence bit 0x2), len-delimited, max 0x28 elements`
    - `presence_flags: uint32 @ offset 0x8ea9`
- ⚠ discrepancy: Auto-doc TlvSuitSkillGroups gives field2 tag 0x23 (wire3); decompiled read treats field2 as a length-delimited repeated sub-struct (reads byte-size prefix then loops elements) — semantically a repeated struct array, not a scalar. Field count/wire framing matches; wire-type nibble in doc is misleading.

### TlvSuitSkillGroups_Unpack_v2 `@0x10189fa0` — both
*TDR unpack of TlvSuitSkillGroups, twin of FUN_10189dd0 but reads repeated elements via FUN_10189400. field_id 1 => groupCnt uint8 @0 (presence 0x1); field_id 2 => length-delimited repeated suitSkillGroupData via FUN_10189400 (presence 0x2), element count -> *param_1, max 0x28. This is the address the auto-doc names sub_10189FA0.* (server: Authoritative read path for TlvSuitSkillGroups; server must reproduce framing., conf high)
- TLV: TlvSuitSkillGroups
- fields:
    - `field_id 1: groupCnt uint8 @ offset 0 (presence bit 0x1)`
    - `field_id 2: suitSkillGroupData repeated sub-struct via FUN_10189400 (presence bit 0x2), len-delimited, max 0x28`
    - `presence_flags: uint32 @ offset 0x8ea9`
- ⚠ discrepancy: Matches auto-doc field set (groupCnt uint8 f1, suitSkillGroupData f2->sub_10189400). No material discrepancy; doc field2 wire nibble 0x23 vs actual len-delimited repeated is a wire-type labelling nuance.

### TlvSupplyPlanList_Pack_be `@10114720` — both
*Big-endian variant of TlvSupplyPlanList pack (element FUN_101136c0).* (server: Yes, conf high)
- TLV: TlvSupplyPlanList
- fields:
    - `curPlan: uint8 @ 0 - tag 0x11`
    - `planCnt: uint8 @ 1 - tag 0x21`
    - `supplyPlanList: array @ 2 - tag 0x35`
- ⚠ discrepancy: Same supplyPlanList wire-type mismatch as FUN_101145e0.

### TlvSupplyPlanList_Pack_varint `@101145e0` — both
*Pack TlvSupplyPlanList: tag 0x11 curPlan(u8@0); tag 0x21 planCnt(u8@1, max 5); tag 0x35 supplyPlanList = length-delimited array (element FUN_10113440).* (server: Yes, conf high)
- TLV: TlvSupplyPlanList
- fields:
    - `curPlan: uint8 @ 0 - tag 0x11`
    - `planCnt: uint8 @ 1 - tag 0x21`
    - `supplyPlanList: sub-struct array @ 2 - tag 0x35 (w5), max 5`
- ⚠ discrepancy: TlvSupplyPlanList.md field3 supplyPlanList documented as 'int32 tag 0x33'; ACTUAL is a length-delimited sub-struct array, tag 0x35 (wire 5), max 5 elements.

### TlvSupplyPlanList_Unpack_be `@10114b70` — both
*Big-endian unpack variant of TlvSupplyPlanList (element FUN_10113d40).* (server: Yes, conf high)
- TLV: TlvSupplyPlanList
- fields:
    - `curPlan: uint8 @ 0`
    - `planCnt: uint8 @ 1`
    - `supplyPlanList: array, max 5`

### TlvSupplyPlanList_Unpack_varint `@10114930` — both
*Unpack TlvSupplyPlanList: field1 curPlan u8@0, field2 planCnt u8@1, field3 length-prefixed array up to 5 elements (FUN_10113a10). Presence flags at struct+0x7aa.* (server: Yes, conf high)
- TLV: TlvSupplyPlanList
- fields:
    - `curPlan: uint8 @ 0`
    - `planCnt: uint8 @ 1`
    - `supplyPlanList: array, max 5`

### TlvTalentEquipItem_Read_fixed_101ee320 `@0x101ee320` — both
*TDR/TLV element deserializer (reader), 4-byte-field variant. Same shape as FUN_101ee230 but field 1 (Id) is read via FUN_1010c870 (fixed 4-byte) instead of varint; field 2 -> byte (Idx) into obj+4; other -> skip. Presence bits at obj+5. Matches sub_101EE320 referenced by the generated SkillWeaponItem doc (talentEquip element {Id:int32, Idx:byte} = TlvTalentEquipItem).* (server: Server must parse talent-equip elements on C2S skill/talent equip updates and emit them S2C., conf medium)
- TLV: TlvTalentEquipItem
- fields:
    - `field 1: Id int32 (fixed 4B) — via FUN_1010c870, presence bit0 @ obj+5`
    - `field 2: Idx byte @ obj+4, presence bit1 @ obj+5`

### TlvTalentEquipItem_Read_fixed_101ee9e0 `@0x101ee9e0` — both
*Duplicate of FUN_101ee320: TDR element reader with field 1 Id read as fixed 4-byte (FUN_1010c870), field 2 byte @ obj+4, presence flags @ obj+5. Corresponds to sub_101EE9E0 referenced by the SkillWeaponItem doc (the doc attaches it to 'rageIdx', but the actual shape is the standard {Id:int32, Idx:byte} element reader).* (server: Element reader for talent-equip / skill sub-lists on C2S., conf medium)
- TLV: TlvTalentEquipItem
- fields:
    - `field 1: Id int32 (fixed 4B), presence bit0 @ obj+5`
    - `field 2: byte @ obj+4, presence bit1 @ obj+5`
- ⚠ discrepancy: Generated SkillWeaponItem.md maps sub_101EE9E0 to scalar field 'rageIdx' (0x73); in reality sub_101EE9E0 is a 2-field element reader {Id:int32, Idx:byte}, not a scalar. The doc's field->sub_addr mapping is unreliable.

### TlvTalentLearnItem_Read_varint_101ee230 `@0x101ee230` — both
*TDR/TLV element deserializer (reader). Loops reading LEB128 tags via FUN_1010ccb0; switches on tag>>4 (field_id): field 1 -> reads Id via FUN_1010cbd0 (varint int); field 2 -> reads a single byte (Level/Idx) into obj+4; other -> skip via FUN_1010d4f0. Sets presence-flag bits at obj+5 (bit0 for field1, bit1 for field2). This is the read counterpart the C# marks as 'C++ Reader: sub_XXXXX' for the {Id:int32, Level:byte} element (TlvTalentLearnItem).* (server: Server must parse this element when receiving talent-learn lists (embedded in SkillWeaponItem, C2S skill updates) and produce it S2C., conf medium)
- TLV: TlvTalentLearnItem
- fields:
    - `field 1: Id int32 (varint) — via FUN_1010cbd0, presence bit0 @ obj+5`
    - `field 2: Level/Idx byte @ obj+4, presence bit1 @ obj+5`

### TlvTalentLearnItem_Read_varint_101ee8f0 `@0x101ee8f0` — both
*Byte-for-byte duplicate of FUN_101ee230: TDR element reader, field 1 Id via varint (FUN_1010cbd0), field 2 byte @ obj+4, presence flags @ obj+5. Codegen emitted a separate instance for a second array field of the same element type ({Id, Level/Idx}).* (server: Same as FUN_101ee230 — element reader for talent/skill sub-lists., conf medium)
- TLV: TlvTalentLearnItem
- fields:
    - `field 1: Id int32 (varint), presence bit0 @ obj+5`
    - `field 2: byte @ obj+4, presence bit1 @ obj+5`

### TlvTimesArray_DebugFormat `@10247720` — unknown
*DebugFormat dumper for an array of a sub-struct. Writes '[count]' then up to 128 (0x80) '[times]' elements, recursing into element dumper FUN_10246e10.* (server: None (debug text). Indicates a 'times' array field capped at 128 in the parent., conf medium)
- TLV: unknown
- fields:
    - `count: int32 @ obj+0 (max 128)`
    - `times[]: element sub-struct dumped by FUN_10246e10`

### TlvTypeCountArgsList_DebugFormat `@1017ae40` — both
*TDR DebugFormat dumper for TlvTypeCountArgsList: '[count]' int32 then '[tracksSet]' array (max 10, element sub FUN_1017a3d0).* (server: Server sends this list; DebugFormat confirms element cap 10., conf high)
- TLV: TlvTypeCountArgsList
- fields:
    - `count: int32 @ +0 (0<=n<=10)`
    - `tracksSet[]: sub_1017a3d0 elements`

### TlvTypeTraceEntry_DebugFormat `@1017d010` — both
*TDR DebugFormat dumper for the trace record: '[type]' uint8, '[count]' int32@+1, '[trace]' array (max 5, element sub FUN_1017c560).* (server: Debug-only; authoritative field names for the trace record., conf high)
- TLV: TlvTypeTraceList element
- fields:
    - `type: uint8 @ +0`
    - `count: int32 @ +1 (0<=n<=5)`
    - `trace[]: sub_1017c560 elements`

### TlvTypeTraceEntry_Read_A `@1017cb80` — both
*TDR read (variant A) of a trace record (tracesSet element): field1 uint8@+0, field2 int32@+1 (FUN_1010cbd0), field3 array of sub-struct FUN_1017c330 (each 0x10 bytes, max 5) writing count@+1. Presence flags@+0x55.* (server: Server decode of a trace record., conf medium)
- TLV: TlvTypeTraceList element (paired with tracesSet sub_1017CD60)
- fields:
    - `field 1: uint8 @ +0 (type)`
    - `field 2: int32 count @ +1`
    - `field 3: sub_1017c330[<=5] @ +5 (entry 0x10 bytes)`
    - `presence_flags: uint32 @ +0x55`

### TlvTypeTraceEntry_Read_B `@1017cd60` — both
*Variant B trace-record reader == documented sub_1017CD60 (tracesSet element of TlvTypeTraceList). Elements via FUN_1017c3e0. flags@+0x55.* (server: Canonical decode; doc references this address., conf high)
- TLV: TlvTypeTraceList.tracesSet element (sub_1017CD60)
- fields:
    - `field 1: uint8 @ +0`
    - `field 2: int32 count @ +1`
    - `field 3: sub_1017c3e0[<=5] @ +5`
    - `presence_flags: uint32 @ +0x55`

### TlvTypeTraceList_DebugFormat `@1017da00` — both
*TDR DebugFormat dumper for TlvTypeTraceList: '[count]' int32 then '[tracesSet]' array (max 50, element dumper FUN_1017d010).* (server: Server sends this list; cap is 50., conf high)
- TLV: TlvTypeTraceList
- fields:
    - `count: int32 @ +0 (0<=n<=50)`
    - `tracesSet[]: FUN_1017d010 trace-record elements`

### TlvTypedBaseOrBonus_DebugFormat `@0x101b0710` — S2C
*DebugFormat text dump of the type+union leaf: [type] (uint8 @off0) and [value] (base/bonus union via FUN_101affd0). Text output.* (server: Debug-only; confirms type/value field names., conf high)
- TLV: TlvTypedBaseOrBonus, TlvBaseOrBonus
- fields:
    - `type: uint8 @ off 0`
    - `value: base/bonus union -> FUN_101affd0`

### TlvTypedBaseOrBonus_Read_varA `@0x101b0400` — both
*TDR wire READ deserializer for the type+union leaf. field_id 1 = uint8 type @off0; field_id 2 = wire2 len-delim value: read length (FUN_1010c870) then decode union via FUN_101afd20, result byte @off0. Presence flags @ off 0x60.* (server: HIGH — read side of the type+base/bonus leaf., conf medium)
- TLV: TlvTypedBaseOrBonus, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0`
    - `field_2: len-delim union value -> FUN_101afd20`
    - `presence_flags: uint32 @ off 0x60`

### TlvTypedBaseOrBonus_Read_varB `@0x101b0520` — both
*Encoding twin of FUN_101b0400; union value decoded via FUN_101afe20 (the function the generated TlvBaseOrBonus.md maps to address 0x101AFE20). Fields 1 & 2, presence flags @ off 0x60.* (server: HIGH — variant of FUN_101b0400., conf medium)
- TLV: TlvBaseOrBonus, TlvTypedBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0`
    - `field_2: len-delim union value -> FUN_101afe20`
    - `presence_flags: uint32 @ off 0x60`
- ⚠ discrepancy: The generated TlvBaseOrBonus.md attributes struct 0x101AFE20 with a single 'field_1' — it is actually the union-value decoder called from this type+value wrapper (fields type + value), so the doc's field list is incomplete.

### TlvTypedBaseOrBonus_Write_varA `@0x101b01d0` — both
*TDR wire WRITE serializer for the type+union leaf: field1 (tag 0x11, uint8 type @off0), field2 (tag 0x25 wire5 substruct via FUN_101afb30 = the base/bonus union value). Reserve+backpatch length.* (server: HIGH — server must emit type+base/bonus value., conf medium)
- TLV: TlvTypedBaseOrBonus, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0 (tag 0x11)`
    - `field_2: union value @ tag 0x25 -> FUN_101afb30`

### TlvTypedBaseOrBonus_Write_varB `@0x101b0280` — both
*Encoding twin of FUN_101b01d0 (value substruct via FUN_101afbc0).* (server: HIGH — variant of FUN_101b01d0., conf medium)
- TLV: TlvTypedBaseOrBonus, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0 (tag 0x11)`
    - `field_2: union value @ tag 0x25 -> FUN_101afbc0`

### TlvTypedVariantArray7_DebugFormat `@0x101af840` — S2C
*DebugFormat text dump of the 7-element typed-variant array: [value][index] up to 7 elements (each dumped via FUN_101aeeb0). Text output.* (server: Debug-only., conf high)
- TLV: TlvTypedVariant
- fields:
    - `value: array[<=7] (element FUN_101aeeb0)`

### TlvTypedVariantArray7_Write_varA `@0x101af1a0` — both
*TDR wire WRITE serializer for a fixed array of 7 typed-variant elements. Writes tag 0x15 (fid1 wire5), reserves the 4-byte length, loops exactly 7 times writing each element via FUN_101ae970 (each with its own reserved+backpatched length), then backpatches the outer length. This is an attribute-set of 7 base/bonus variants.* (server: HIGH — server must emit exactly 7 elements in this LEN-delimited block., conf high)
- TLV: TlvTypedVariant
- fields:
    - `field_1: array[7] of typed-variant @ tag 0x15 (element FUN_101ae970)`

### TlvTypedVariantArray7_Write_varB `@0x101af2f0` — both
*Encoding twin of FUN_101af1a0 (elements via FUN_101aea20). Same 7-element array.* (server: HIGH — variant of FUN_101af1a0., conf high)
- TLV: TlvTypedVariant
- fields:
    - `field_1: array[7] @ tag 0x15 (element FUN_101aea20)`

### TlvTypedVariant_DebugFormat `@0x101aeeb0` — S2C
*DebugFormat text dump of the typed-variant leaf: [wType] (uint8 @off0) and [stValue] (the value union, dumped by FUN_101ae7b0). Text output.* (server: Debug-only; confirms field names wType/stValue., conf high)
- TLV: TlvTypedVariant, TlvBaseOrBonus
- fields:
    - `wType: uint8 @ off 0`
    - `stValue: union -> FUN_101ae7b0`

### TlvTypedVariant_Read_varA `@0x101aeba0` — both
*TDR wire READ deserializer for the typed-variant leaf. field_id 1 = uint8 type @off0 (read raw byte); field_id 2 = wire2 length-delimited value: reads a length (FUN_1010c870) then decodes the union via FUN_101ae4e0, storing result byte at off0. Presence flags @ off9.* (server: HIGH — read side of the attribute variant leaf., conf medium)
- TLV: TlvTypedVariant, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0`
    - `field_2: len-delim value -> FUN_101ae4e0`
    - `presence_flags: uint32 @ off 9`

### TlvTypedVariant_Read_varB `@0x101aecc0` — both
*Encoding twin of FUN_101aeba0 (value decode via FUN_101ae5f0). Same typed-variant leaf, fields 1 & 2.* (server: HIGH — variant of FUN_101aeba0., conf medium)
- TLV: TlvTypedVariant, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type @ off 0`
    - `field_2: len-delim value -> FUN_101ae5f0`
    - `presence_flags: uint32 @ off 9`

### TlvTypedVariant_Write_varA `@0x101ae970` — both
*TDR wire WRITE serializer for a 2-field 'typed variant' leaf: field1 (tag 0x11, uint8 type @off0) then field2 (tag 0x25 wire5 substruct via FUN_101ae230, the value union). Reserves+backpatches length. Part of the TlvTypedVariant/TlvBaseOrBonus attribute family.* (server: HIGH — attribute variant leaf; server must emit type+value with these tags., conf medium)
- TLV: TlvTypedVariant, TlvBaseOrBonus
- fields:
    - `field_1: uint8 type/wType @ off 0 (tag 0x11)`
    - `field_2: substruct value @ tag 0x25 -> FUN_101ae230`

### TlvTypedVariant_Write_varB `@0x101aea20` — both
*Encoding twin of FUN_101ae970 (value substruct via FUN_101ae330). Same 2-field typed-variant leaf.* (server: HIGH — variant of FUN_101ae970., conf medium)
- TLV: TlvTypedVariant, TlvBaseOrBonus
- fields:
    - `field_1: uint8 @ off 0 (tag 0x11)`
    - `field_2: substruct @ tag 0x25 -> FUN_101ae330`

### TlvU16U8Elem_Unpack_A `@10124930` — both
*Unpack element: field1 (>>4==1) fixed 16-bit BE (2B) into struct+0/+1; field2 (>>4==2) uint8 @struct+2. Presence flags at struct+3.* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: uint16 @ 0 (fixed BE)`
    - `field2: uint8 @ 2`

### TlvU16U8Elem_Unpack_B `@101258c0` — both
*Duplicate of FUN_10124930 ({u16 fixed BE, u8}).* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: uint16 @ 0 (fixed BE)`
    - `field2: uint8 @ 2`

### TlvU16U8Elem_Unpack_C `@10127b10` — both
*Duplicate of FUN_10124930 ({u16 fixed BE, u8} element unpacker).* (server: Yes, conf medium)
- TLV: unknown
- fields:
    - `field1: uint16 @ 0 (fixed BE)`
    - `field2: uint8 @ 2`

### TlvU8Str_Unpack `@10128ba0` — both
*Unpack a {uint8 @0, string @1} struct: field1 (>>4==1) uint8 @struct+0; field2 (>>4==2) read 4-byte BE length (FUN_1010c870, max 7) then memmove that many bytes to struct+1 and NUL-terminate. Presence flags at struct+9.* (server: Yes, conf high)
- TLV: unknown
- fields:
    - `field1: uint8 @ 0`
    - `field2: string (max 7 bytes) @ 1 - length-delimited`
- ⚠ discrepancy: field2 is a length-delimited string (wire 5, 4-byte BE length prefix), not an int32.

### TlvUniformSubStructAggregate_Pack `@0x1023cc50` — both
*TdrBuf.h wire pack of a large aggregate: ~35 length-delimited members, each a sub-struct serialized by the SAME helper FUN_101b01d0, at ascending tags 0x45,0x55,0x75,0x85,0x95,0xa5,0x125,0x135,...0x5b5 (wire5 each with reserved/back-patched length). No field-name strings (pure TdrBuf.h).* (server: Yes — server must emit this multi-member aggregate; each member is the same sub-struct type (FUN_101b01d0). Likely a large per-entity data blob (e.g., character/attribute or slot array)., conf medium)
- fields:
    - `~35 members, all length-delimited sub-structs via FUN_101b01d0 (uniform element type)`
    - `tags: 0x45,0x55,0x75,0x85,0x95,0xa5,0x125,0x135,0x145,0x155,0x175,0x185,0x195,0x1e5,0x1f5,0x205,0x225,0x235,0x245,0x2a5,0x2b5,0x2c5,0x2d5,0x2e5,0x2f5,0x305,0x315,0x325,0x335,0x345,0x355,0x365,0x375,0x385,0x435,0x445,0x455,0x465,0x4c5,0x4d5,0x4e5,0x4f5,0x505,0x515,0x525,0x535,0x545,0x555,0x565,0x575,0x585,0x595,0x5a5,0x5b5`
- ⚠ discrepancy: No embedded field names; cross-ref by address (0x1023cc50) and the shared element serializer FUN_101b01d0 to identify which generated TLV struct this is. Field IDs are non-contiguous (gaps between 0xa5→0x125 etc.), so the generated doc must preserve the exact field_id numbering, not a 1..N renumber.

### TlvVarintPlusByte_Read_varA `@0x1019ef80` — C2S
*TDR wire READ deserializer for a 2-field leaf: field_id 1 (varint via FUN_1010ccb0 into param_1), field_id 3 (single byte into param_1+4). Presence flags param_1+5. Note the second case is field_id 3 (not 2).* (server: Server must match layout; twin FUN_1019f070., conf medium)
- TLV: unknown
- fields:
    - `field_1: varint @ off 0 (FUN_1010ccb0)`
    - `field_3: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvVarintPlusByte_Read_varA_2 `@0x101a1300` — C2S
*TDR wire READ deserializer, identical shape to FUN_1019e250: field_id 1 (varint via FUN_1010cbd0 into param_1), field_id 2 (byte into param_1+4), flags at param_1+5. Distinct struct instance (separate leaf type) with same 2-field pattern.* (server: Server must match layout; twin FUN_101a13f0., conf medium)
- TLV: unknown
- fields:
    - `field_1: varint @ off 0 (FUN_1010cbd0)`
    - `field_2: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvVarintPlusByte_Read_varB `@0x1019f070` — C2S
*Encoding twin of FUN_1019ef80: field_id 1 read via FUN_1010c870, field_id 3 = byte. Same layout.* (server: Encoding variant of FUN_1019ef80., conf medium)
- TLV: unknown
- fields:
    - `field_1: varint @ off 0 (FUN_1010c870)`
    - `field_3: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvVarintPlusByte_Read_varB_2 `@0x101a13f0` — C2S
*Encoding twin of FUN_101a1300 (field_1 via FUN_1010c870). Fields 1 & 2.* (server: Encoding variant of FUN_101a1300., conf medium)
- TLV: unknown
- fields:
    - `field_1: varint @ off 0 (FUN_1010c870)`
    - `field_2: uint8 @ off 4`
    - `presence_flags: uint32 @ off 5`

### TlvWeaponRecord_DebugFormat `@1017fdd0` — both
*TDR DebugFormat dumper for TlvWeaponRecord: '[weaponRecord]' 20 dwords + '[weaponRecordTime]' 20 dwords.* (server: Debug-only; proves the two 20-element arrays., conf high)
- TLV: TlvWeaponRecord
- fields:
    - `weaponRecord: int32[20] @ +0`
    - `weaponRecordTime: int32[20] @ +0x50`

### TlvWeaponRecord_Write_A `@1017f5b0` — both
*TDR serializer (variant A) for TlvWeaponRecord: field1 weaponRecord int32[20]@+0 (tag 0x15, scalar-array with 4-byte size prefix), field2 weaponRecordTime int32[20]@+0x50 (tag 0x25).* (server: Server sends the player's weapon usage records + timestamps., conf high)
- TLV: TlvWeaponRecord
- fields:
    - `field 1: int32[20] weaponRecord @ +0 (tag 0x15, wire5 scalar array)`
    - `field 2: int32[20] weaponRecordTime @ +0x50 (tag 0x25)`
- ⚠ discrepancy: Doc TlvWeaponRecord shows only ONE field (weaponRecord, field2, scalar int32) and drops weaponRecordTime. Actual: TWO fixed arrays of 20 int32 each (weaponRecord field1 tag 0x15, weaponRecordTime field2 tag 0x25). Not a scalar.

### TlvWeaponRecord_Write_B `@1017f770` — both
*Variant B of TlvWeaponRecord writer (int32 elements via FUN_1010c190).* (server: Canonical wire form., conf high)
- TLV: TlvWeaponRecord
- fields:
    - `field 1: int32[20] weaponRecord @ +0 (tag 0x15)`
    - `field 2: int32[20] weaponRecordTime @ +0x50 (tag 0x25)`
- ⚠ discrepancy: Same as FUN_1017f5b0: doc omits weaponRecordTime and treats weaponRecord as scalar.

### TlvWeaponStyleData_DebugFormat `@101806e0` — both
*TDR DebugFormat dumper for TlvWeaponStyleData: '[weaponStyleData]' 20 dwords.* (server: Debug-only; proves array[20]., conf high)
- TLV: TlvWeaponStyleData
- fields:
    - `weaponStyleData: int32[20] @ +0`

### TlvWeaponStyleData_Write_A `@10180180` — both
*TDR serializer (variant A) for TlvWeaponStyleData: field1 weaponStyleData int32[20]@+0 (tag 0x15, scalar-array with 4-byte size prefix).* (server: Server sends weapon-style data (20 int32)., conf high)
- TLV: TlvWeaponStyleData
- fields:
    - `field 1: int32[20] weaponStyleData @ +0 (tag 0x15, wire5 scalar array)`
- ⚠ discrepancy: Doc TlvWeaponStyleData describes field1 as a scalar int32. Actual is a fixed array of 20 int32 (packed, tag 0x15, wire5). Field id and tag match; cardinality differs.

### TlvWeaponStyleData_Write_B `@10180270` — both
*Variant B of TlvWeaponStyleData writer (elements via FUN_1010c190).* (server: Canonical wire form., conf high)
- TLV: TlvWeaponStyleData
- fields:
    - `field 1: int32[20] weaponStyleData @ +0 (tag 0x15)`
- ⚠ discrepancy: Same as FUN_10180180: array[20] not scalar.

### TlvWord2ByteEntry_Read `@0x1019e9a0` — C2S
*TDR wire READ deserializer. field_id 1 = a 2-byte little-endian value read directly (param_1[0]=hi/lo bytes, advances pos by 2); field_id 2 = varint via FUN_1010c870 into param_1+2. Presence flags at param_1+6. Length-bounded tag loop.* (server: Server must match this 2-field leaf layout., conf medium)
- TLV: unknown
- fields:
    - `field_1: 2 raw bytes @ off 0 (wire1 pair)`
    - `field_2: varint @ off 2 (FUN_1010c870)`
    - `presence_flags: uint32 @ off 6`

### Tlv_Read2xI16_ShopSubElem `@0x1020f9c0` — C2S
*Read/deserialize of a 2-field record. Clears presence flags at off 4, loops reading TDR tags (FUN_1010ccb0); tag>>4==1 -> field1 int16 (big-endian, off 0), ==2 -> field2 int16 (off 2); unknown tags skipped via FUN_1010d4f0.* (server: Server must parse/accept this 2x int16 sub-element (e.g. shop line id/quantity pair) with 2-byte wire fields., conf medium)
- fields:
    - `field1: int16 @ off 0x00 (presence bit 0x1)`
    - `field2: int16 @ off 0x02 (presence bit 0x2)`
    - `presence_flags: uint32 @ off 0x04`

### Tlv_Read2xI16_ShopSubElem_Dup `@0x102128e0` — C2S
*Read/deserialize identical to FUN_1020f9c0: presence flags at off 4, field1 int16 (off 0), field2 int16 (off 2). Separate instantiation for a different parent.* (server: Same as FUN_1020f9c0 — 2x int16 sub-element reader., conf medium)
- fields:
    - `field1: int16 @ off 0x00 (presence 0x1)`
    - `field2: int16 @ off 0x02 (presence 0x2)`
    - `presence_flags: uint32 @ off 0x04`

### Tlv_Write4Field_U8_3xI32_Fixed `@0x1020de90` — unknown
*Fixed-encoding sibling of FUN_1020ddd0. field1 uint8 (tag 0x11), fields 2/3/4 as fixed 4-byte int32 (tags 0x23/0x33/0x43, wire3) via FUN_1010c190 from offs 1/5/9.* (server: Alternate (wire3) encoding of the same record; server must match whichever the parent selects., conf low)
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int32(fixed) @ off 0x01, tag 0x23`
    - `field3: int32(fixed) @ off 0x05, tag 0x33`
    - `field4: int32(fixed) @ off 0x09, tag 0x43`

### Tlv_Write4Field_U8_3xI32_Varint `@0x1020ddd0` — unknown
*Write/marshal of a small 4-field record. Emits field1 as uint8 (tag 0x11) from off 0, then fields 2/3/4 as varint int32 (tags 0x20/0x30/0x40, wire0) from offs 1/5/9 via FUN_1010c5f0.* (server: Server must emit the 4 fields with these tags/wire types when producing this sub-record., conf low)
- fields:
    - `field1: uint8 @ off 0x00, tag 0x11`
    - `field2: int32(varint) @ off 0x01, tag 0x20`
    - `field3: int32(varint) @ off 0x05, tag 0x30`
    - `field4: int32(varint) @ off 0x09, tag 0x40`

### Tlv_WriteField2_SoulBeastSub_A `@0x10206300` — unknown
*Length-prefixed sub-struct writer: emits TDR tag 0x25 (field_id=2, wire5 LEN_DELIM), reserves a 4-byte length slot, calls body writer FUN_10203930, then backpatches the byte length via FUN_1010c3c0. A thin wrapper that serializes an embedded soul-beast/farm sub-object as field 2.* (server: Server must emit the same field2 len-delimited framing (tag 0x25 + 4-byte size prefix) when sending this soul-beast sub-object., conf low)
- TLV: TlvSoulBeastStats
- fields:
    - `field2: sub-struct(len-delimited) @ tag 0x25 — embedded soul-beast object written by FUN_10203930`

### Tlv_WriteField2_SoulBeastSub_B `@0x10206380` — unknown
*Identical to FUN_10206300 (tag 0x25 field2, reserve 4-byte length, body, backpatch) but calls a different body writer FUN_10204070. Second flavor of the field-2 len-delimited sub-struct writer.* (server: Same as FUN_10206300; server replicates len-delimited field-2 framing., conf low)
- TLV: TlvSoulBeastStats
- fields:
    - `field2: sub-struct(len-delimited) @ tag 0x25 — embedded object written by FUN_10204070`

### Tlv_WriteLargeStruct_Unknown_101e0ea0 `@0x101e0ea0` — both
*Auto-generated TDR/TLV serializer (writer) for a very large fixed-layout struct. Opens with tag 0x25 (field 2, wire 5 LEN) framing a nested block of 7 consecutive int32 written raw via FUN_1010c190 (7-dword group = 28 bytes), then writes a long chain of individual 4-byte fields (tags 0x43,0x63,0x73,0x83,0x93,0xa3,0xb3,0xc3,0xd3,0xe3,0xf3,0x103,0x115...), 2-byte fields via FUN_1010c120 (tags 0x142,0xca3), and many more LEN-delimited nested 7-dword groups (each framed by FUN_1010bf70 reserve + FUN_1010c3c0 patch). Tag space extends past 0x925. Helpers: FUN_1010c5f0=write tag(LEB128), FUN_1010c190=write int32, FUN_1010c120=write int16, FUN_1010bf70=reserve 4-byte len, FUN_1010c3c0=backpatch len. Concrete struct identity not recoverable from this chunk.* (server: Unknown struct; if identified it is a large payload the server must produce/consume, but no name recovered here., conf low)
- fields:
    - `field 2: tag 0x25 wire5 @ src+0 — nested block of 7x int32 (28B)`
    - `field 4: tag 0x43 wire3 int32 @ src+0x1c`
    - `field 6: tag 0x63 wire3 int32 @ src+0x20`
    - `field 7: tag 0x73 wire3 int32 @ src+0x24`
    - `field 8: tag 0x83 wire3 int32 @ src+0x28`
    - `field 9..17: tags 0x93/0xa3/0xb3/0xc3/0xd3/0xe3/0xf3/0x103/0x115 wire3 int32 @ src+0x2c..0x48`
    - `field 0x14: tag 0x142 wire2 int16 @ src+0x68`
    - `field 0x16: tag 0x165 wire5 nested 7x int32 group @ src+0x6a (repeats many times up to src+0x448)`

### Tlv_WriteStructArray_Elem101b01d0_101f3a10 `@0x101f3a10` — both
*Auto-generated TDR/TLV serializer (writer) for a large struct/collection whose ~50 members are each a LEN-delimited nested element written by FUN_101b01d0 (element = {field1 byte tag 0x11, field2 nested struct tag 0x25 via FUN_101afb30}). param_1 is the TdrBuf object (pos @+4, len @+8). Emits members at tags 0x45,0x55,0x75,0x85,0x95,0xa5,0x125,0x135,0x145,0x155,0x175,0x185,0x195,0x1e5,0x1f5,0x205,0x225,0x235,0x245,0x2a5..0x2f5,0x305..0x385,0x435..0x5b5,0x8e5,0x8f5,0x915,0x925 (all wire5), each framed by FUN_1010bf70/FUN_1010c3c0. Concrete struct identity not recoverable here.* (server: Unknown parent struct; each element is a {byte, nested} record the server would produce/consume if this struct is identified. Name not recovered., conf low)
- fields:
    - `field 4: tag 0x45 wire5 nested element (sub_101b01d0)`
    - `field 5: tag 0x55 wire5 nested element`
    - `field 7: tag 0x75 wire5 nested element`
    - `... ~50 members, all wire5 nested elements of type sub_101b01d0 {byte, sub-struct}`


## other  (88)

### AI_LoadFearSteeringParams `@10d0e640` — unknown
*Loads AI 'Fear' steering behaviour parameters from a config/property node into the steering struct: Steer_FearMaxEvents, TimeDeltaWeight, SensorDistance, MinDistance, EstimationTime, AnimName, ReactionTime, SpeedMultiplier (written at fixed struct offsets).* (server: No. Client/AI behaviour config; not network., conf high)
- msgId: n/a

### FlowNode_GetFarmInfo_RegisterPorts `@10e1bdd0` — S2C
*Lazy one-time registration of a FlowGraph/UI event node named 'GetFarmInfo' and its output ports: Success, FishingLV, BugLV, HerbLV, LandLV, MineLV, MushroomLV, HoneyLV. Fills a static node descriptor (input def @DAT_120325f0, output defs @DAT_12032628) returned via param_1.* (server: Indirect: names the farm-info result fields (gathering skill levels) surfaced to UI. The wire data comes via a farm-info response (see TlvFarmData/GetFarmInfo message); this is only the UI/flowgraph descriptor, NOT the wire serializer., conf medium)
- TLV: TlvFarmData, GetFarmInfo (response)
- fields:
    - `Success`
    - `FishingLV`
    - `BugLV`
    - `HerbLV`
    - `LandLV`
    - `MineLV`
    - `MushroomLV`
    - `HoneyLV`
- ⚠ discrepancy: These UI port names (skill LVs) do not appear in TlvFarmData.md (which lists farmID/ownerUID/ownerDBID/credit/hits...). This is a different, UI-facing farm summary not the TlvFarmData wire struct - not a direct doc conflict but note the two 'farm' structures are distinct.

### IsCatArchetypeName `@104a6ea0` — unknown
*Returns 1 if the passed archetype/class name is one of the cat (Felyne) prototypes: CatPrototype, Cat_Farming, CatInCity, CatNewType. Pure string classification helper.* (server: No. Client-side entity archetype classification., conf high)

### Net_WriteTwoU16_BigEndian `@10366420` — both
*Writes two u16 fields (param_1[0], param_1[1]) as 4 bytes in BIG-ENDIAN order (high byte first) into output buffer; returns bytes-written via param_4. NOT TDR little-endian scalar encoding — this is a big-endian network-order header writer.* (server: Likely a transport/packet-header field writer (network byte order). Server must produce big-endian for these two u16 fields. Distinct from TDR body encoding., conf medium)
- fields:
    - `w0: u16 @0 (big-endian, 2 bytes)`
    - `w1: u16 @2 (big-endian, 2 bytes)`

### ParseActivityLootCoeffConfigRow `@11a348f0` — unknown
*Parses an activity loot-coefficient config record from a property reader into struct: ActivityId, PlayerLootChanceCoefficient, GatherMinCoefficient, GatherMaxCoefficient (written at +0x10/+0x14/+0x18/+0x1c). Column-name ids cached in DAT_123a965c bitmask.* (server: Config-table loader for activity loot/gather multipliers. Loot chance is server-authoritative in most designs, so server needs this data; function itself is client-side XML parse., conf high)
- msgId: n/a

### ParseGatherResourceConfigRow `@118a46e0` — unknown
*Parses a gathering-resource config record from an XML/property reader (param_2 vtable: HasAttr@0x10, GetInt@0x20, GetStr@0x24, GetFloat@0x30) into a struct: ResourceID, MapID, LevelMin/Max, DifMin/Max, ResType, RichType(1/2), SpecTool, ToolLevel, ToolDmgProb, IsShared(bool), GatherMin/Max, CatGatherMin/Max, ViewArcheTypeName, LifeTime(float). Column-name ids cached in DAT_1239bdbc bitmask.* (server: Config-table loader (gather resource definitions). Server that spawns/validates gather nodes needs equivalent data, but this is a client XML parser, not wire code., conf high)
- msgId: n/a

### PvpDamage_GetDistanceScaledValue `@115daad0` — unknown
*CPvpDamageParmInfo lookup via vtable+0x4c returning a distance/level-scaled float (entry.field18*field1c/(dist+field20)); PvP damage falloff calc.* (server: PvP damage-scaling formula from a config table. If server authoritatively computes PvP damage it must replicate this table/formula; but function itself is client-side., conf medium)
- msgId: n/a

### PvpDamage_GetTimeDecayMultiplier `@115d8840` — unknown
*Looks up CPvpDamageParmInfo 2D table by a key from vtable+0x2c and returns a damage multiplier = 1.0 - table[key].field14/scale (time-based PvP damage decay).* (server: PvP damage-scaling formula from a config table. If server authoritatively computes PvP damage it must replicate this table/formula; but function itself is client-side., conf medium)
- msgId: n/a

### PvpDamage_LookupEntryByKey `@115d8940` — unknown
*Indexes the CPvpDamageParmInfo 2D array (base/stride at +0x30/+0x28) by an integer key and returns the matching entry pointer, else 0.* (server: PvP damage-scaling formula from a config table. If server authoritatively computes PvP damage it must replicate this table/formula; but function itself is client-side., conf medium)
- msgId: n/a

### TdrDump_ActivityList `@0x103d79a0` — unknown
*Debug dump: wCount(max0x80) + astActivities[] (elements via FUN_103d5c10).* (server: No - client debug only., conf high)
- fields:
    - `[wCount]: u16 (max128)`
    - `[astActivities]: element FUN_103d5c10`

### TdrDump_AppearList4 `@0x10413720` — unknown
*Debug dump: iCount(max4)+astAppear[] (elements via FUN_10413230).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 @0 (max4)`
    - `[astAppear]: FUN_10413230[]`

### TdrDump_AvatarUpdate `@0x103ffa10` — unknown
*Debug dump: iRoleId, iUpdateCnt(max0x1e)+astAvatar[] (elements via FUN_10274670).* (server: No - client debug only., conf high)
- fields:
    - `[iRoleId]: i32 @0`
    - `[iUpdateCnt]: i32 @4 (max30)`
    - `[astAvatar]: FUN_10274670[]`
- ⚠ discrepancy: Name overlaps generated TlvAvatarBriefInfo/TlvPetAvatarData; those are CryGame 0x99 tag readers, not this packetcode dump. Do not merge.

### TdrDump_BagStoreMailItems `@0x103f0ee0` — S2C
*Debug dump of a bag/store/mail reply: iErrCode, bIsCrited, then three counted item arrays (bag/store/mail) each via FUN_103f0940.* (server: No - client debug only (iErrCode implies a server reply body)., conf high)
- fields:
    - `[iErrCode]: i32 @0`
    - `[bIsCrited]: u8 @4`
    - `[bBagItemCount]: u8 @5 (max30)`
    - `[astBagItems]: FUN_103f0940[]`
    - `[bStoreItemCount]: u8 @0x114 (max30)`
    - `[astStoreItems]: FUN_103f0940[]`
    - `[bMailItemCount]: u8 @0x223 (max30)`
    - `[astMailItems]: FUN_103f0940[]`

### TdrDump_BoxID_ItemList11 `@0x103fd480` — unknown
*Debug dump: iBoxID, iItemCount(max0xb)+astItemList (FUN_103f8770).* (server: No - client debug only., conf high)
- fields:
    - `[iBoxID]: i32 @0`
    - `[iItemCount]: i32 @4 (max11)`
    - `[astItemList]: FUN_103f8770[]`

### TdrDump_Box_Items10_Equip10_BagFull `@0x103f8c50` — unknown
*Debug dump: iBox, bItemCount(max10)+astItemList (FUN_103f8770), bEquipCnt(max10)+astEquipList (FUN_103284f0), bBagFull.* (server: No - client debug only., conf high)
- fields:
    - `[iBox]: i32 @0`
    - `[bItemCount]: u8 @4 (max10)`
    - `[astItemList]: FUN_103f8770[]`
    - `[bEquipCnt]: u8 @0x7d (max10)`
    - `[astEquipList]: FUN_103284f0[]`
    - `[bBagFull]: u8 @0x8a8`

### TdrDump_Box_Items11_Equip11 `@0x103f92a0` — unknown
*Debug dump: iBox, bItemCount(max11)+astItemList, bEquipCnt(max11)+astEquipList (no bBagFull).* (server: No - client debug only., conf high)
- fields:
    - `[iBox]: i32 @0`
    - `[bItemCount]: u8 @4 (max11)`
    - `[astItemList]: FUN_103f8770[]`
    - `[bEquipCnt]: u8 @0x89 (max11)`
    - `[astEquipList]: FUN_103284f0[]`

### TdrDump_Box_Items11_Equip11_BagFull `@0x103f9900` — unknown
*Debug dump: iBox, bItemCount(max11)+astItemList, bEquipCnt(max11)+astEquipList, bBagFull@0x985.* (server: No - client debug only., conf high)
- fields:
    - `[iBox]: i32 @0`
    - `[bItemCount]: u8 @4 (max11)`
    - `[astItemList]: FUN_103f8770[]`
    - `[bEquipCnt]: u8 @0x89 (max11)`
    - `[astEquipList]: FUN_103284f0[]`
    - `[bBagFull]: u8 @0x985`

### TdrDump_CatCuisineOpenInfo `@0x104077a0` — unknown
*Debug dump of a cat-cuisine/open-info struct: llTCatTime(int64)@0, szVOpenInfo (7 raw bytes) @8, bITools@0xf, bIOpenID@0x10. Also writes the separator char directly into the sink buffer.* (server: No - client debug only., conf medium)
- fields:
    - `[llTCatTime]: int64 @0 (%I64i)`
    - `[szVOpenInfo]: 7 raw bytes @8 (dumped as ' 0x%02x')`
    - `[bITools]: u8 @0xf`
    - `[bIOpenID]: u8 @0x10`
- ⚠ discrepancy: Generated TlvCatCuisineData.md (sub_1017E210, 0x99 tag reader) lists: tCatTime int64 (0x14), vCatSeq int32 (0x23), iOpen u8 (0x31), tOpenTime int64 (0x44), iTools u8 (0x51). This packetcode struct instead has: llTCatTime int64, szVOpenInfo as a 7-byte blob, bITools u8, bIOpenID u8 - field set and types differ. The generated doc reflects the CryGame config-TLV path, not this network struct.

### TdrDump_Clan `@0x103e36d0` — unknown
*Debug dump wrapper for a single [stClan] (delegates to FUN_103e2c60).* (server: No - client debug only., conf medium)
- fields:
    - `[stClan]: sub FUN_103e2c60`

### TdrDump_ClanerDetail `@0x103e2110` — unknown
*Debug dump of a clan-member detail struct.* (server: No - client debug only. In-memory offsets of the clan-member struct., conf high)
- fields:
    - `[stId]: sub FUN_102a3f50`
    - `[szNote]: string @0x38`
    - `[iLevel]: i32 @0x58`
    - `[iLine]: i32 @0x5c`
    - `[bIsOnline]: u8 @0x60`
    - `[iOfflineTimeInterval]: i32 @0x61`
    - `[iTitle]: i32 @0x65`
    - `[iScore]: i32 @0x69`
    - `[iRewardTag]: i32 @0x6d`
    - `[iHRLevel]: i32 @0x71`

### TdrDump_ClanerList `@0x103e2670` — unknown
*Debug dump: iCount(max0x14) + astClaners[] (elements via FUN_103e2110).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max20)`
    - `[astClaners]: element FUN_103e2110`

### TdrDump_ClanerNameList `@0x103dfe40` — unknown
*Debug dump: iCount(max0x14) + astClanerNames[] where each element has [szName] (stride 32 bytes / 8 ints).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max20)`
    - `[astClanerNames][]: { [szName]: string, element stride 0x20 }`

### TdrDump_Claner_a `@0x103e3090` — unknown
*Debug dump wrapper for a single [stClaner] (delegates to FUN_103e2110).* (server: No - client debug only., conf medium)
- fields:
    - `[stClaner]: sub FUN_103e2110`

### TdrDump_Claner_b `@0x103e33b0` — unknown
*Debug dump wrapper for a single [stClaner] (delegates to FUN_103e2110).* (server: No - client debug only., conf medium)
- fields:
    - `[stClaner]: sub FUN_103e2110`

### TdrDump_ClanersWithCount `@0x103e3a70` — unknown
*Debug dump: [iClanersCount] + [stClaners] (delegates to FUN_103e2670).* (server: No - client debug only., conf medium)
- fields:
    - `[iClanersCount]: i32 @0`
    - `[stClaners]: sub FUN_103e2670`

### TdrDump_CostItemEquipRoute `@0x103f6ef0` — unknown
*Debug dump: [stCostItem] (FUN_103eeed0), [stEquip] (FUN_103eeed0), iRouteCount@0x1a (max100), astRoute[] (FUN_103f6ac0).* (server: No - client debug only., conf high)
- fields:
    - `[stCostItem]: FUN_103eeed0`
    - `[stEquip]: FUN_103eeed0`
    - `[iRouteCount]: i32 @0x1a (max100)`
    - `[astRoute]: FUN_103f6ac0[]`

### TdrDump_DataWrapper `@0x1041cda0` — unknown
*Debug dump wrapper: [stData] sub-object (delegates to FUN_1028e990).* (server: No - client debug only., conf medium)
- fields:
    - `[stData]: sub FUN_1028e990`

### TdrDump_GiftList `@0x103e7930` — unknown
*Debug dump: bCount(max100) + astGiftList[] (elements via FUN_103e7570).* (server: No - client debug only., conf high)
- fields:
    - `[bCount]: u8 (0x%02x) (max100)`
    - `[astGiftList]: element FUN_103e7570`
- ⚠ discrepancy: Name overlaps generated TlvGiftList.md (fields giftNum u8, giftList sub-struct via tag 0x11/0x23). That doc is the CryGame 0x99 tag-based reader (sub_1024B9B0); this is the packetcode dump. Different serializer families - do not conflate offsets.

### TdrDump_GroupInfoList `@0x103e80d0` — unknown
*Debug dump: bCount(max0x32) + astGroupInfo[] (elements via FUN_103e7d10).* (server: No - client debug only., conf high)
- fields:
    - `[bCount]: u8 (0x%02x) (max50)`
    - `[astGroupInfo]: element FUN_103e7d10`

### TdrDump_GuideBookData `@0x1041de50` — unknown
*Debug dump: iGuideBookChapterCount(max8)+astGuideBookChapterInfos[] (FUN_1041d9f0), chIsFisrtAutoOpenGuideBook@0x4c, chWeaopnId@0x4d, stGuideActionInfos (FUN_1041d580).* (server: No - client debug only., conf high)
- fields:
    - `[iGuideBookChapterCount]: i32 @0 (max8)`
    - `[astGuideBookChapterInfos]: FUN_1041d9f0[]`
    - `[chIsFisrtAutoOpenGuideBook]: u8 @0x4c (idx 0x13)`
    - `[chWeaopnId]: u8 @0x4d`
    - `[stGuideActionInfos]: sub FUN_1041d580`
- ⚠ discrepancy: Generated TlvGuideBookData.md (sub_1018F920) says field2 isFisrtAutoOpenGuideBook = int32 sub-struct and field3 weaopnId = struct. This packetcode dump shows chIsFisrtAutoOpenGuideBook and chWeaopnId are u8 (printed via '0x%02x'). The generated doc's types are wrong for this network struct (it modeled the CryGame tag reader). Misspellings 'Fisrt'/'Weaopn' are in the binary.

### TdrDump_HuntTaskList `@0x103d4220` — unknown
*Debug text dump of the hunt-task list struct (fields bHuntTaskCount, astHuntTasks[], iParam1@0x259).* (server: No - client debug/logging (TdrBufUtil). Reveals field names only., conf high)
- fields:
    - `[bHuntTaskCount]: u8 (0x%02x) (max3)`
    - `[astHuntTasks]: array element FUN_103d3c80`
    - `[iParam1]: i32 @0x259`

### TdrDump_ItemList30 `@0x103f0530` — unknown
*Debug dump: iItemCount(max0x1e) + astItems[] (elements via FUN_103eeed0).* (server: No - client debug only., conf high)
- fields:
    - `[iItemCount]: i32 (max30)`
    - `[astItems]: element FUN_103eeed0`

### TdrDump_ItemList5_WithBind `@0x103f6320` — unknown
*Debug dump: iItemCount(max5) + astItems[] (FUN_103eeed0) + bBBind@0x114.* (server: No - client debug only., conf high)
- fields:
    - `[iItemCount]: i32 (max5)`
    - `[astItems]: FUN_103eeed0`
    - `[bBBind]: u8 @0x114`

### TdrDump_LeagueInfoList `@0x103df310` — unknown
*Debug dump: iCount(max10) + astLeagueInfo[] (elements via FUN_103deee0).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max10)`
    - `[astLeagueInfo]: element FUN_103deee0`

### TdrDump_LeagueOpenList `@0x103ddf10` — unknown
*Debug dump: iCount(max10) + astLeagueOpen[] (elements via FUN_103ddae0).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max10)`
    - `[astLeagueOpen]: element FUN_103ddae0`

### TdrDump_Level_Items40_BagFull `@0x103f9e90` — unknown
*Debug dump: iLevelID, bItemCount(max0x28)+astItemList (FUN_103f8770), bBagFull@0x1e5.* (server: No - client debug only., conf high)
- fields:
    - `[iLevelID]: i32 @0`
    - `[bItemCount]: u8 @4 (max40)`
    - `[astItemList]: FUN_103f8770[]`
    - `[bBagFull]: u8 @0x1e5`

### TdrDump_MonsterCardMaterials `@0x10420ec0` — unknown
*Debug dump: iMonsterIndex, bCardType, bMaterialNum(max100)+astMaterialList[] (elements via FUN_10272760).* (server: No - client debug only., conf high)
- fields:
    - `[iMonsterIndex]: i32 @0`
    - `[bCardType]: u8 @4`
    - `[bMaterialNum]: u8 @5 (max100)`
    - `[astMaterialList]: FUN_10272760[]`

### TdrDump_OpenGoodsList `@0x10403120` — unknown
*Debug dump: iOpenGoodsCount(max100)+astOpenGoods[] (elements via FUN_10402d60).* (server: No - client debug only., conf high)
- fields:
    - `[iOpenGoodsCount]: i32 @0 (max100)`
    - `[astOpenGoods]: FUN_10402d60[]`

### TdrDump_OpenGoodsList_WithResult `@0x104035b0` — S2C
*Debug dump: iOpenGoodsCount(max100)+astOpenGoods[] + iResult@0x4b4 + iEndTime@0x4b8.* (server: No - client debug only (iResult => reply)., conf high)
- fields:
    - `[iOpenGoodsCount]: i32 @0 (max100)`
    - `[astOpenGoods]: FUN_10402d60[]`
    - `[iResult]: i32 @0x4b4 (idx 0x12d)`
    - `[iEndTime]: i32 @0x4b8 (idx 0x12e)`

### TdrDump_PassLevelInfoList `@0x10420a10` — S2C
*Debug dump: iErrCode, iLevelCount(max0x37)+astPassLevelInfo[] (elements via FUN_102ab4d0).* (server: No - client debug only (iErrCode => reply)., conf high)
- fields:
    - `[iErrCode]: i32 @0`
    - `[iLevelCount]: i32 @4 (max55)`
    - `[astPassLevelInfo]: FUN_102ab4d0[]`

### TdrDump_PlayerInfoList12 `@0x10417450` — unknown
*Debug dump: iPlayerNum(max0xc)+astPlayereInfo[] (elements via FUN_10417060).* (server: No - client debug only. Note misspelling 'Playere' is in the binary., conf high)
- fields:
    - `[iPlayerNum]: i32 @0 (max12)`
    - `[astPlayereInfo]: FUN_10417060[]`

### TdrDump_RemoteDataUnion `@0x1040b520` — unknown
*Debug dump: [wDataType]@0 + [stRemoteData] where the sub-object is a discriminated union selected by wDataType (delegates to FUN_1040b0e0(type,...)).* (server: No - client debug only. Confirms a type-tagged union body exists., conf medium)
- fields:
    - `[wDataType]: u16 @0 (union discriminant)`
    - `[stRemoteData]: union via FUN_1040b0e0`

### TdrDump_RequestWithTwoResults `@0x103d96a0` — S2C
*Debug dump: [stRequest] sub-object + [iResult1]@0xd + [iResult2]@0x11.* (server: No - client debug only (but names imply a request+result reply packet)., conf medium)
- fields:
    - `[stRequest]: sub FUN_103d92c0`
    - `[iResult1]: i32 @0xd`
    - `[iResult2]: i32 @0x11`

### TdrDump_RetCodeWithReq `@0x103f7370` — S2C
*Debug dump: [iRetCode]@0 + [stReq] sub-object (FUN_103f6ef0).* (server: No - client debug only (iRetCode + echoed request => server reply)., conf high)
- fields:
    - `[iRetCode]: i32 @0`
    - `[stReq]: FUN_103f6ef0`

### TdrDump_RewardInfoList `@0x10406770` — S2C
*Debug dump: iRet, iRewardCount(max6)+astRewardInofs[] (elements via FUN_10406020).* (server: No - client debug only (iRet => reply). Note misspelling 'Inofs' is in the binary., conf high)
- fields:
    - `[iRet]: i32 @0`
    - `[iRewardCount]: i32 @4 (max6)`
    - `[astRewardInofs]: FUN_10406020[]`

### TdrDump_SimpleDetailPair `@0x103d80d0` — unknown
*Debug dump of a struct with [stSimple] then [stDetail] sub-objects (via FUN_103d5c10 / FUN_103d6fd0).* (server: No - client debug only., conf medium)
- fields:
    - `[stSimple]: sub FUN_103d5c10`
    - `[stDetail]: sub FUN_103d6fd0`

### TdrDump_SimpleWithWorldSvrID `@0x103d84d0` — unknown
*Debug dump: [stSimple] sub-object + [dwWorldSvrID]@0x87.* (server: No - client debug only., conf medium)
- fields:
    - `[stSimple]: sub FUN_103d5c10`
    - `[dwWorldSvrID]: u32 @0x87`

### TdrDump_TitleDataList `@0x10401ab0` — S2C
*Debug dump: iErrCode, iTitleDataCount(max0x800)+astTitleData[] (elements via FUN_104013e0).* (server: No - client debug only (iErrCode => server reply)., conf high)
- fields:
    - `[iErrCode]: i32 @0`
    - `[iTitleDataCount]: i32 @4 (max2048)`
    - `[astTitleData]: FUN_104013e0[]`
- ⚠ discrepancy: Related to generated TlvGuildTitleData/TlvGuildTitleList (0x99 tag readers). Different serializer family.

### TdrDump_Trace5 `@0x103f7b00` — unknown
*Debug dump: iCount(max5) + astTrace[] (elements via FUN_103f7740).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max5)`
    - `[astTrace]: element FUN_103f7740`

### TdrDump_TraceSet50 `@0x103f7f60` — unknown
*Debug dump: iCount(max0x32) + astTraceSet[] (elements via FUN_103f7b00).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max50)`
    - `[astTraceSet]: element FUN_103f7b00`

### TdrDump_Tracks5 `@0x103f1fe0` — unknown
*Debug dump: iCount(max5) + astTracks[] (elements via FUN_103f1c20).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max5)`
    - `[astTracks]: element FUN_103f1c20`

### TdrDump_TracksSet10 `@0x103f2440` — unknown
*Debug dump: iCount(max10) + astTracksSet[] (elements via FUN_103f1fe0).* (server: No - client debug only., conf high)
- fields:
    - `[iCount]: i32 (max10)`
    - `[astTracksSet]: element FUN_103f1fe0`

### TdrText_ArrayElemDate `@1024a9b0` — unknown
*DebugFormat helper: indexed variant of FUN_1024a930 — '%s[%u]: ' label then '%4d-%02d-%02d' date.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemDateTime `@1024aae0` — unknown
*DebugFormat helper: indexed variant of FUN_1024aa40 — '%s[%u]: ' label then full datetime via FUN_1024a010.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemIPv4 `@1024a790` — unknown
*DebugFormat helper: indexed variant of FUN_1024a700 — '%s[%u]: ' label then dotted-quad IPv4.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemLabel `@1024a230` — unknown
*DebugFormat helper: indent then write an array-element label via '%s[%u]%c' (name, index, separator char).* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemScalar `@1024a320` — unknown
*DebugFormat helper: array-element scalar emitter. Writes '%s[%u]: ' label then vsnprintf value, appends newline.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemTime `@1024a8a0` — unknown
*DebugFormat helper: indexed variant of FUN_1024a820 — '%s[%u]: ' label then '%02d:%02d:%02d' time.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemValueFmt `@1024a480` — unknown
*DebugFormat helper: array-element label '%s[%u]: ' then value formatted with &DAT_11d9e0dc, newline.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayElemWStringHex `@1024a600` — unknown
*DebugFormat helper: indexed variant of FUN_1024a500 — array-element label '%s[%u]: ' then wide-string dumped as ' 0x%04x' hex words.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_ArrayHeader `@1024a3b0` — unknown
*DebugFormat helper: writes an array header label '%s[0 : %I64i]:' (name, count-1 as int64) before dumping elements.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldDate `@1024a930` — unknown
*DebugFormat helper: field label then a packed date formatted '%4d-%02d-%02d' (short year + bytes month/day).* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldDateTime `@1024aa40` — unknown
*DebugFormat helper: field label then full datetime via FUN_1024a010 ('YYYY-MM-DD HH:MM:SS'), newline.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldIPv4 `@1024a700` — unknown
*DebugFormat helper: field label then a uint32 formatted as dotted-quad '%u.%u.%u.%u' (little-endian byte order).* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldLabelChar `@1024a1e0` — unknown
*DebugFormat helper: indent then write a field label plus a char separator (format &DAT_11da4eb8). Asserts variable name non-NULL.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldScalar `@1024a290` — unknown
*DebugFormat helper: indent, write field label (&DAT_11da4ec0), then vsnprintf a scalar value using a caller-supplied format string; appends newline (FUN_1010c060). Core scalar field emitter.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldTime `@1024a820` — unknown
*DebugFormat helper: field label then a packed time formatted '%02d:%02d:%02d' (short hour + bytes min/sec).* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldValueFmt `@1024a410` — unknown
*DebugFormat helper: field label (&DAT_11da4ec0) then value formatted with fixed format &DAT_11d9e0dc, newline.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FieldWStringHex `@1024a500` — unknown
*DebugFormat helper: field label then dumps a wide-string as space-separated ' 0x%04x' hex words (length by wcslen), terminating with a separator byte. Asserts wstr non-NULL.* (server: None (debug text)., conf high)
- TLV: unknown

### TdrText_FormatDateTime `@1024a010` — unknown
*Formats a packed datetime (short year, byte month/day/hour/min/sec) into text 'YYYY-MM-DD HH:MM:SS' in the DebugFormat buffer. Helper, not wire.* (server: None (debug/text formatting)., conf high)
- TLV: unknown

### TdrText_WriteIndent `@1024a140` — unknown
*Writes N copies of a 4-byte indent/separator constant (&DAT_11d9e044) into the DebugFormat text buffer (memmove loop), advancing position by 4 each; used to indent nested-struct text dumps. Not wire format.* (server: None (debug text layout)., conf high)
- TLV: unknown

### TlvCommerceBoat_Print `@101200e0` — unknown
*TdrBufUtil printer: [commerceBoatInfo] sub, [contributeResPoint], [challengeTimes] (int8 0x%02x), [refreshTimestamp]. Confirms challengeTimes is a signed 8-bit field.* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvCommerceBoat
- fields:
    - `commerceBoatInfo sub`
    - `contributeResPoint uint32`
    - `challengeTimes int8`
    - `refreshTimestamp uint32`

### TlvDepotsRights_Print `@1011e280` — unknown
*TdrBufUtil printer for TlvDepotsRights: [count] int32, [depotsRights][i] up to 8 elements (element FUN_1011d960).* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvDepotsRights
- fields:
    - `count int32`
    - `depotsRights[] sub-struct (max 8)`

### TlvEquipPlanList_Print `@10112060` — unknown
*TdrBufUtil printer for TlvEquipPlanList: [curPlan],[planCnt],[equipPlanList][i]. Confirms curPlan/planCnt are uint8, list max 20.* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvEquipPlanList
- fields:
    - `curPlan uint8`
    - `planCnt uint8`
    - `equipPlanList[]`

### TlvEquipPlan_Print `@101113f0` — unknown
*TdrBufUtil debug printer for TlvEquipPlan; emits [planId] 0x%02x, [name] (string), [equipCnt] 0x%02x, [equipList][i]. Confirms field names and that name is a string, equipCnt is uint8 (max 10).* (server: No - debug visualizer; source of the true field names., conf high)
- msgId: N/A
- TLV: TlvEquipPlan
- fields:
    - `planId uint8`
    - `name string`
    - `equipCnt uint8`
    - `equipList[] sub-struct`

### TlvGuildApplyList_Print `@101243d0` — unknown
*TdrBufUtil printer for TlvGuildApplyList: [count] int32, [applys][i] up to 0x80 elements (element FUN_10123940 = TlvGuildMemberInfo).* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvGuildApplyList, TlvGuildMemberInfo
- fields:
    - `count int32`
    - `applys[] TlvGuildMemberInfo (max 128)`

### TlvGuildMemberData_Print `@10121d40` — unknown
*TdrBufUtil printer confirming the guilder field names: role, note, level, hunterStar, contribution, contributionAcc(%I64u), wage, title, offlineTime, depotOpCount, hRLevel, joinTime, wildHuntSoul, wildHuntPhase, celebrationTask, preCelebrationTask, celebrationScore, celebrationReward, contributionWeekAcc(%I64u), levelupAll, hunterCount, taskCount, isBaned, banedTime, guildWar.* (server: No - debug visualizer; authoritative field-name source., conf high)
- msgId: N/A
- TLV: TlvGuildMemberData
- fields:
    - `see FUN_10120540 field list`

### TlvGuildMemberInfo_Print `@10123940` — unknown
*TdrBufUtil printer for a guild-apply/member-info element: [id] int32, [role] sub, [level], [hunterStar] string, [note] string, [time], [hRLevel]. Matches TlvGuildMemberInfo doc.* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvGuildMemberInfo
- fields:
    - `id int32`
    - `role sub`
    - `level int32`
    - `hunterStar string`
    - `note string`
    - `time int32`
    - `hRLevel int32`
- ⚠ discrepancy: TlvGuildMemberInfo.md marks hunterStar/note as int32; the printer uses the string formatter (FUN_1024a410) so they are char-array strings (wire 5).

### TlvGuildMemberList_Print `@10122b60` — unknown
*TdrBufUtil printer for TlvGuildMemberList: [count] int32, [guilders][i] up to 0x100 elements (element FUN_10121d40).* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvGuildMemberList
- fields:
    - `count int32`
    - `guilders[] TlvGuildMemberData (max 256)`

### TlvItemBattleUseList_Print `@101130b0` — unknown
*TdrBufUtil printer for TlvItemBattleUseList: [itemBattleUseCount] (int32), then [itemBattleUse][i] up to 0x100 elements.* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvItemBattleUseList
- fields:
    - `itemBattleUseCount int32`
    - `itemBattleUse[] sub-struct (max 256)`

### TlvManuSkill_DebugFormat_101f26e0 `@0x101f26e0` — unknown
*Debug/ToString formatter for ManuSkill (TdrBufUtil.cpp). Emits labelled fields: [version](int32 @+0), [manuSkillCount](int16 @+4, max5) + [manuSkill][] via FUN_101ed330, [ingredientCount](int16 @+0x56, max0x280) + [ingredient][] via FUN_101ed8d0, [skillWeapon][] fixed 13 entries via FUN_101f0b50 (SkillWeaponItem), [formulaBitCount](int32 @+0x237a, max0x280) + [formulaBit][] raw bytes @+0x237e, [expressionCount](int16 @+0x25fe, max0x100) + [expression][] via FUN_101ef2f0. Reveals the true ManuSkill layout/order. Not a wire serializer.* (server: None on the wire — DebugFormat/logging. Ground truth for ManuSkill field names/offsets/limits when rebuilding server serialization., conf high)
- msgId: n/a
- TLV: ManuSkill, SkillWeaponItem, ExpressionItem
- fields:
    - `version int32 @ +0`
    - `manuSkillCount int16 @ +4 (max 5)`
    - `manuSkill[] sub-struct via FUN_101ed330`
    - `ingredientCount int16 @ +0x56 (max 0x280)`
    - `ingredient[] sub-struct via FUN_101ed8d0`
    - `skillWeapon[13] fixed array of SkillWeaponItem via FUN_101f0b50`
    - `formulaBitCount int32 @ +0x237a (max 0x280)`
    - `formulaBit[] byte array @ +0x237e`
    - `expressionCount int16 @ +0x25fe (max 0x100)`
    - `expression[] sub-struct via FUN_101ef2f0`
- ⚠ discrepancy: Generated ManuSkill.md field table is scrambled: it lists field3=ingredientCount, field4=skillWeapon, field5=formulaBitCount, field9=ingredient, etc., with wrong sub-struct pointers and offsets. Real member order (from this DebugFormat): version, manuSkill[], ingredient[], skillWeapon[13], formulaBit[](bytes), expression[]. skillWeapon is a FIXED 13-element array of SkillWeaponItem (doc marks it 'unknown'). formulaBit is a raw byte array, not int32.

### TlvRoleProfile_Print `@101195f0` — unknown
*TdrBufUtil printer confirming TlvRoleProfile fields: [role],[level],[hunterStar],[name],[icon],[note],[gold],[bindGold],[hRLevel].* (server: No - debug visualizer; authoritative field-name source., conf high)
- msgId: N/A
- TLV: TlvRoleProfile
- fields:
    - `role sub`
    - `level int32`
    - `hunterStar string`
    - `name string`
    - `icon int32`
    - `note string`
    - `gold int32`
    - `bindGold int32`
    - `hRLevel int32`

### TlvSkillList_Print `@10128600` — unknown
*TdrBufUtil printer for a skill list: [count] int32, [skills][i] up to 100 elements (element FUN_10127d40).* (server: No - debug visualizer., conf medium)
- msgId: N/A
- TLV: TlvSkillList
- fields:
    - `count int32`
    - `skills[] sub-struct (max 100)`

### TlvSkillWeaponItem_DebugFormat_101f0b50 `@0x101f0b50` — unknown
*Debug/ToString formatter for SkillWeaponItem (TdrBufUtil.cpp). Emits labelled hex via FUN_1024a290/FUN_1010c010 with literal field names: [skillLearnCount],[skillLearn],[talentLearnCount],[talentLearn],[talentEquipCount],[talentEquip],[rageIdx],[rageCount],[rage],[bushidoRageCount],[bushidoRage]. Confirms the true SkillWeaponItem field set (12 fields) and their offsets, matching writer FUN_101ef630. Not a wire (de)serializer — human-readable dump only.* (server: None on the wire — client-side/logging DebugFormat. Useful only as ground truth for field names when rebuilding the server struct., conf high)
- msgId: n/a
- TLV: SkillWeaponItem
- fields:
    - `skillLearnCount @ src+0 (byte, max4)`
    - `skillLearn[] @ src+1 stride8`
    - `talentLearnCount @ src+0x21 (byte, max0x10)`
    - `talentLearn[]`
    - `talentEquipCount @ src+0xb2 (byte, max8)`
    - `talentEquip[]`
    - `rageIdx @ src+0xfb (byte)`
    - `rageCount @ src+0xfc (byte, max5)`
    - `rage[] @ src+0xfd (int32)`
    - `bushidoRageCount @ src+0x111 (byte)`
    - `bushidoRage[] @ src+0x112 (int32)`
- ⚠ discrepancy: This DebugFormat is the authoritative source proving SkillWeaponItem.md's 8-field/shifted-name table is wrong (see FUN_101ef630 discrepancy).

### TlvSupplyPlanList_Print `@10114e80` — unknown
*TdrBufUtil printer: [curPlan],[planCnt],[supplyPlanList][i]. Confirms uint8 fields and max-5 list.* (server: No - debug visualizer., conf high)
- msgId: N/A
- TLV: TlvSupplyPlanList
- fields:
    - `curPlan uint8`
    - `planCnt uint8`
    - `supplyPlanList[]`

### TlvTitleList_Print `@1011f760` — unknown
*TdrBufUtil printer for a title list: [count] int32, [titles][i] up to 0x10 elements (element FUN_1011ed60).* (server: No - debug visualizer., conf medium)
- msgId: N/A
- TLV: TlvTitleList
- fields:
    - `count int32`
    - `titles[] sub-struct (max 16)`

### Tlv_PrintArray_generic `@1010f4e0` — unknown
*TdrBufUtil debug/visualize helper: prints [count], iterates [items] up to 0x9c4, prints [safeDataFlag]. Formats a generic length-prefixed array to text. Not emitted on the wire.* (server: No - client-side debug string dumper (TdrBufUtil.cpp); reveals field labels only., conf medium)
- msgId: N/A
- fields:
    - `count: uint16 @ 0`
    - `items[count]`
    - `safeDataFlag @ +0x37d8f (large trailing field)`

### UI_PopulateInstanceLevelInfo `@109daac0` — unknown
*Populates instance/level info fields into a UI data model via FUN_104d1550/FUN_104d1700: LevelId, LevelName, LevelCharLevel, LevelShowMonsterId, LevelNeedPlayerMin/Max, LevelEnterLimitTimes, LevelCurrentEnterTimes, LevelReqBuffId, LevelBuffCnt, LevelCanEnterTimes. Reads from level-config objects and pet/buff managers.* (server: Reads server-provided level/instance config indirectly; itself a client UI populate routine. Server relevance is in the underlying level data, not this function., conf medium)
