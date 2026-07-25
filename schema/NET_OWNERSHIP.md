# MHO / CryEngine net-ownership & authority handshake (CryAction.dll)

## Primitives (verified)
- **channelId** — each connected client = one net channel. Entities carry an owner `nChannelId`.
- **DelegateAuthority(entity, channelId)** — hands authoritative control of an entity to a channel.
- **CCET** = Client Context Establishment Task — ordered tasks run while a client joins.

## The handshake, step by step
1. **Connect** → server creates a channel for the client; client stores `g_localChannelId`,
   `g_localActorId`, `g_localActor` (`FUN_108f8560`, the CGameClientChannel setup;
   also `cl_packetRate`/`cl_bandwidth`).
2. **Context establishment** → the server streams a sequence of CCETs. One is
   **`CCET_DelegateAuthority`** (`FUN_108f3720`): it resolves the entity and calls
   `INetContext::DelegateAuthority(entity, channelId)` (`netCtx = *(DAT_113f3a18+0x50)`, vtbl+0x2c
   validate, vtbl+0x58 = DelegateAuthority) with the channel from `*(task+4)`.
3. **Entity spawn over the wire** (`FUN_108fa720`, spawn-params serializer) carries:
   `classId, scale, rotation, pos, **bClientActor**, **nChannelId**, flags`.
   `nChannelId` = which channel owns/controls the entity; `bClientActor` marks the client's own avatar.
4. **Client ownership test**: an entity whose `channelId == g_localChannelId` is *locally owned* →
   the client runs that entity's authoritative logic (input, prediction, and for AI entities, the BT tick).
   Entities owned by the server channel are **render-only puppets** driven by NTFs.
5. **Scriptable delegation**: `DelegateAuthority(entity, channel)` is a **server Lua binding**
   (`FUN_10924a20`, registered with sig "entity, channel"), alongside `CreateActor(channelId, actorParams)`
   and `CreateLogicPlayer` (`FUN_1095b490`). So server game-script chooses what to delegate.

## Consequence for monsters (path A vs B)
- **Default (path A):** monsters spawn with `nChannelId` = server (not any client) → no client is the
  authority → clients only render them → the server MUST stream movestate/action (see BATTLE_AND_AI.md §4).
- **Delegation (path B):** if the server spawns the monster with `nChannelId` = a specific client's
  channel, or calls `DelegateAuthority(monster, clientChannel)`, that client becomes the authority and its
  local BT ticks the monster (same mechanism that already runs the player's own avatar and pets).
  For a private server this can move monsters without a full server-side AI sim, but it makes one player's
  client authoritative for that monster (cheatable, and it dies if that client leaves) — so real servers
  keep monsters server-authoritative.

## Aspects (the "what syncs" layer, separate from ownership)
Entity network state is split into **aspects** (bit-flags); `SetAspectProfile` / `EnableAspect` /
`ChangedNetworkState` mark an aspect dirty so it re-serializes. Ownership (channelId) decides WHO writes
an aspect; aspects decide WHAT fields sync. (Only light references in CryGame; core in CryAction/CryNetwork.)
