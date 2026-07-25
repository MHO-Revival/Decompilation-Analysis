# MHO — Battle server-handling & client AI triggering (recovered)

CryGame.dll is the **shared client/server binary** (CryEngine dedicated-server model): a global
authority flag at `DAT_1202e818 + 0x209` selects the server branch. So the server-side battle
logic IS present in this DLL, gated by that flag.

## 1. Battle / hit server-handling flow

### Client side — report a hit
`CActor::OnHitLocalAndReportToServer` @ `11000d20`:
1. Confirms the hit is valid for this actor (vtbl+0x108).
2. Fires the local **`OnHit`** script event on the entity's script proxy
   (script proxy via GetProxy(2)=`vtbl+0x150`, table via `+0x38`, fired by `FUN_10b268e0`).
3. Branch on authority flag `*(DAT_1202e818+0x209)`:
   - **server/authority set** → calls `CActor::FireServerOnHitScriptEvent` directly (no packet).
   - **client** → builds a net message: **opcode `0x2b0`** (`*local_8 = 0x2b0`), fills
     shooter/aspect ids (vtbl+0x274, +0x2ac), and sends it over the game channel (net ctx `vtbl+0x254`).

### Server side — authoritative hit
`CActor::FireServerOnHitScriptEvent` @ `11000e30`:
- Stores the hit at `this+0x198`, resolves the entity script table, and fires the
  **`ServerOnHit`** script method. **The authoritative damage/rules run in the game's Lua/script
  layer** (`ServerOnHit`), not in fixed C++ — the C++ is the plumbing + validation.

### Anti-cheat validation (server-authoritative, before applying)
Client hits are validated by the checker chain (combat round):
- `CPveDamageChecker::HandleClientHit` @ `11061560` — player-attack validation (error codes 1–12/15).
- `CEvpDamageChecker::HandleClientHit` @ `11059210` — monster/boss hit validation (codes 9/10/11).
- `CDamageChecker::EvaluateAllErrorRatiosAndSanction` @ `11059d60` — aggregate error ratio → sanction.
- Keys: attackName hash (`FireModeName::ComputeHash32AndRegister` @ `11116730`), firemode, sequence.

### Battle protocol (metalib, group BATTLE)
`CS_CMD_GROUP_BATTLE=2`, `BATTLE_RULES=87`, `BATTLE_RESULT=89`. Notable opcodes:
`CS_CMD_BATTLE_ACTION=513`, `BATTLE_AG_MELEE_EVENT=595`, `BATTLE_ACTOR_AG_SYNC=592`,
`BATTLE_ACTOR_FIFO_SYNC=593`, `BATTLE_TARGET_LIST_NTF=92`, `BATTLE_SPE_FSM=597`.
Caps: `CS_MAX_BATTLE_TARGET_COUNT=100`, `CS_MAX_BATTLE_PLAYER_COUNT=24`, `BATTLESERVER_COUNT_MAX=15`.

**Summary:** local hit → `OnHit` script + send opcode `0x2b0` → server validates (Pve/Evp checkers)
→ fires `ServerOnHit` Lua → authoritative damage. The wire opcode is `0x2b0`; the rules are in script.

## 2. How AI is triggered on the client

Monster AI = **event-driven behavior trees** (MHFC BT, `D:\MHFC\OpRelease\Code\Common\BehaviorTree`).
Behavior trees are loaded per skill: `CBTActor::LoadSkillBehaviorTrees` @ `10262280`.

### Trigger path
- Game/combat events are fired as **script events** and **broadcast to a listener list**.
  `CombatNpc::OnHit_ProcessAndBroadcast` @ `10c25c70`:
  1. resolve attacker/victim, check HP (vtbl+0x304),
  2. fire NPC **`OnHit`** script method,
  3. **iterate the registered-listener vector** (`this+0x25c..0x260`), calling `listener->vtbl[1](hit)`
     for each — the AI/BT is one of these listeners → the monster reacts to being hit,
  4. post a game event (type `0x19`).
- The BT event system consumes these:
  `CBTEventHandler::OnEvent` @ `1026a610` invokes the BT node handler (`node->vtbl+0x24`) per event
  (ref-counted smart-ptr dispatch). Threat feeds in via `CBTHandler::OnAddThreatEvent` @ `1026a670`
  (event `MONSTER_ADD_THREAT` = 0x520).

### AI event vocabulary (the triggers)
`MONSTER_ADD_THREAT`, `MONSTER_AISKILL`, `MONSTER_ACTIONACK`, `MONSTER_ACTIVE`, `MONSTER_DEAD`,
`MONSTER_ATTACHTOTARGET`, `MONSTER_ATTR_THRESHOLD`, `MONSTER_ANIM_SEQUENCE`, `AISignal`, `BTEvent`…
The BT reads/writes a **blackboard** (`CBTActor::GetBlackboardInt/Bool` @ `1025b730`/`1025b860`;
`CBTBlackboardFact`), and selects the monster's next action (`MONSTER_AISKILL`).

**Summary:** client AI is not polled by opcode — it's **event-driven**: combat/game events (`OnHit`,
threat, timers) are broadcast to listeners and posted to the BT event system (`CBTEventHandler::OnEvent`),
which ticks the per-skill behavior tree against a blackboard and emits the monster's next skill/action.
Note: much of the BT core is stock MHFC/CEShare engine code; the MHO-specific part is the monster
event vocabulary + skill BT assets.

## 3. How the monster BT is loaded, and why a spawned monster is inert

### Loading (not server-triggered)
`SkillBehaviorTree::LoadFromConfig` (@10262280) is a **virtual method** (vtable slot @11da75c0,
invoked indirectly — no static caller xref). It is **data-driven**: it walks a config of
`(SkillID, FileName)` entries and loads each behavior-tree asset from local game data:
- compiled trees: `btbinary.bt`, `citycatbtbinary.bt`
- blackboards/trees: `Scripts/AI/BehaviorTree/Common{,_Mobs,_Pet}/.../MonsterBlackBoard.xml`
It runs at **monster/AI initialization / level load**, entirely client-local. The server never
sends the tree; it only says which monster to spawn (`MonsterSpawnData.iMonsterInfoID`).

### Authority: monsters run on the BattleServer tier
The metalib has a `BattleServer` concept (`BATTLESERVER_COUNT_MAX=15`, `CS_CMD_GROUP_BATTLE`).
The **authoritative monster simulation (threat, target, movement, skill selection) runs on the
battle/scene server**; the client is presentation — it plays what the server streams. Client-side
locomotion/anim FSMs (MovementController::ApplyMoveRequest, CPlayerFSM, Pet locomotion, etc.) are
driven by incoming battle-actor notifications.

### Why a freshly spawned monster does not move
Because nothing drives it. After spawn the server must stream battle-actor commands. A monster is
idle until it receives a target + movement/action stream. Required S2C drive messages:
- Target / aggro:  `CS_CMD_BATTLE_MONSTER_ATTACHTOTARGET=652`, `BATTLE_TARGET_CHANGE_NTF=91`,
  `BATTLE_TARGET_LIST_NTF=92`
- Movement:        `BATTLE_ACTOR_BEGINMOVE_NTF=609`, `ACTOR_MOVESTATE_NTF=610`,
  `ACTOR_STOPMOVE_NTF=611`, `ACTOR_LOCATION=580`, `MONSTER_MOVESTATE=648`, `ACTOR_LOCOMOTION=621`
- Actions/skills:  `BATTLE_ACTION=513`, `ACTOR_AG_SYNC=592`, `ACTOR_FIFO_SYNC=593`,
  `ACTOR_AG_ALL_INPUT=594`, `MONSTER_ACTIONACK=653`

### About "add threat"
`MONSTER_ADD_THREAT` (BT event 0x520) is an **internal AI event on the authoritative side**, not a
packet the client consumes. There is no client-received "add threat" packet. To make a monster
engage a player over the wire you send the **target notifications** (ATTACHTOTARGET / TARGET_CHANGE_NTF)
and then stream movement/actions. Threat is a server-side bookkeeping concept that decides *which*
target those notifications point at.

### Rathalos gap (current)
Rathalos.Servers.Game implements only Auth/Character/Connection/Misc/Network handlers — **no battle,
monster, spawn, target, or movement handler**. So monsters spawn but receive zero drive commands →
inert. Making them move requires implementing the battle-actor drive stream above (ideally behind a
battle/scene simulation), not a single packet.

## 4. Battle-actor payload structs (from metalib) + monster-drive recipe

Sub-types: `CSVec3{float x,y,z}` · `CSQuat{CSVec3 v; float w}` · `CSQuatT{CSQuat q; CSVec3 t}`.
All TDR/TLV-encoded (tag=(field_id<<4)|wire_type; field ids by declaration order — verify vs TLV round).

### Aggro / engage — `CS_CMD_BATTLE_MONSTER_ATTACHTOTARGET` (652) → CSMonsterAttachToTarget
    int64  SyncTime
    uint   MonsterID       // the monster's net id
    uint   TargetID        // the player/entity to engage
    CSVec3 AttachOffset
    CSVec3 AttachRotation
    string AttachmentName

### Move stream — `CS_CMD_BATTLE_MONSTER_MOVESTATE` (648) → CSMonsterMovestate
    int64  SyncTime
    uint   MonsterID
    CSVec3 Location        // world position
    CSQuat Rotation
    CSVec3 Speed           // velocity

### Generic actor move — `CS_CMD_BATTLE_ACTOR_MOVESTATE_NTF` (610) → CSActorMovestateNtf
    uint32 NetObjId
    CSActorMovestate { int64 SyncTime; CSVec3 Location; CSQuat Rotation; CSVec3 MoveSpeed; int State }

### Position/rotation sync
- `CS_CMD_BATTLE_ACTOR_LOCATION` (580) → CSBattleLocation { uint32 NetObjId; CSQuatT Location }
- `CS_CMD_BATTLE_ACTOR_ROTATION_NTF` (615) → CSActorRotationNtf { int64 SyncTime; uint32 NetObjId; CSQuat ActorRot }
- `CS_CMD_BATTLE_ACTOR_LOCOMOTION` (621) → CSActorLocomotion { NetObjId; SyncTime; int32 MoveType; float x5; CSVec3; u32 x2; int; string x2 }

### Recipe: make a spawned monster chase a player (server side)
1. Spawn the monster (MonsterSpawnData) — client creates it + loads its BT locally.
2. Send **ATTACHTOTARGET(652)** once: MonsterID = monster netId, TargetID = player netId → aggro.
3. **Stream MONSTER_MOVESTATE(648)** every tick (e.g. 100-200ms) with SyncTime + updated Location
   moving toward the target, Speed set → client interpolates the walk/run.
4. Drive attacks with **BATTLE_ACTION(513)** and confirm with **MONSTER_ACTIONACK(653)**;
   the client plays the corresponding skill animation (skill BT / AG).
Note: these are NTF (server->client notifications). The monster is a server-driven puppet; SyncTime
timestamps let the client interpolate. No "threat packet" — aggro is expressed by ATTACHTOTARGET +
the movement stream pointing the monster at TargetID.
