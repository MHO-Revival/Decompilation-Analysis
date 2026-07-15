# MHO Combat / Damage — Round 2

Recovered from CryGame.dll. 116 functions.

Priority: authoritative damage math + client-hit validation for the private server.


## damage-calc  (10)

### CCombatNPC::IsDamageableBySkill_0x2f  `@0x116657c0`
*Gating check: gets combat object (FUN_116689a0), aborts (return 0) if busy (vtbl+0xa8 != 0). Checks state FUN_11397c30(0x1e). Looks up CDamageInfo record for id at param_2+0xc (2D table); if present, tests condition FUN_116e5220 with arg 0x2f. Returns 1 only when the 0x1e state is set AND the 0x2f condition is NOT set.*  — server: validation: appears to gate whether a damage/skill (id 0x2f) may apply given npc state (0x1e). Confirm meaning of the two state ids. (conf low)

**Constants:** state id 0x1e, condition id 0x2f, damage id = *(param_2+0xc), 'CDamageInfo'
> Semantics of 0x1e/0x2f unresolved; FUN_11397c30 and FUN_116e5220 in other chunks.

### CDamageDampingInfo::EvalDampingMultiplier  `@0x1142c620`
*Core damage DAMPING / diminishing-returns curve. Computes a ratio t = (accumA + accumB) / (reference * K), then looks up a cubic curve entry (index 0 or 1 selected by param_5) and evaluates a piecewise curve to produce a damage multiplier written to *param_4. Returns 0 if reference or ratio is 0.*  — server: authoritative: server MUST reproduce this to apply damage damping (e.g. per-hit or cumulative damage falloff vs a reference such as monster max-HP or part health). (conf high)

**Formulas:**
- if (*param_3 == 0) return 0;
- t = (*param_1 + *param_2) / (*param_3 * DAT_11de9990);   // K = DAT_11de9990
- if (t == 0) return 0;
- if (t > entry[+0x14]) {
-    if (t <= entry[+0x18]) *param_4 = ( A*t*t*t + B*t*t + C*t + D ) / t;   // A=+0x20,B=+0x24,C=+0x28,D=+0x2c
-    else                  *param_4 = entry[+0x1c] / t;                    // clamp beyond hi bound
- } else *param_4 = 1.0;   // below lo bound: no damping
- returns 1 on success (multiplier written), 0 otherwise
**Constants:** DAT_11de9990 = divisor/scale K on the reference (value not in this chunk; resolve from data section), curve entry: +0x14 lo, +0x18 hi, +0x1c clamp/cap value, +0x20 A(cubic), +0x24 B(quad), +0x28 C(lin), +0x2c D(const), param_5==1 -> use entry[1] (2nd curve), else entry[0]
> The polynomial is divided by t, i.e. output multiplier = f(t)/t where f is a cubic — effectively normalizing accumulated damage. Resolve DAT_11de9990 (likely 1.0 or a health-scale) from the data segment.

### CDamageDampingInfo::GetCurveByIndex  `@0x1142ba90`
*Returns damping-curve entry ptr from the CDamageDampingInfo array (base+0x14, size (base+0x18 - base+0x14)/4) by index param_1, bounds-checked. Returns 0 if out of range.*  — server: authoritative: accessor for the damage damping/diminishing-returns curve table used by FUN_1142c620. (conf high)

**Constants:** array base+0x14, end+0x18, stride 4

### CDamageInfo::BuildDamageEventRecord  `@0x1142b3d0`
*Constructs a damage-event record. Looks up a CDamageInfo config entry by id (param_5) in the 2D table (falls back to entry 0). Resolves attacker (param_2) and target (param_3/param_4) handles via FUN_1142fe70/FUN_1142fd90/FUN_1142fc50, zeroes a 0x108 scratch (memset), calls FUN_1142b1a0 to populate. Stores attacker entity id at this+0x58 and target entity id at this+0x60. Releases the temp handles.*  — server: authoritative: assembles the damage record (attacker/target/damage-config) that feeds actual damage application. Server produces authoritative damage; this shows the record wiring (attacker@+0x58, target@+0x60, damageInfo entry). (conf medium)

**Constants:** this+0x58 attacker id, this+0x60 target id, 0x108 record size, 'CDamageInfo'
> FUN_1142b1a0 is the actual populate; trace it in another chunk for the damage fields.

### CDamageInfo::GetIdByIndex  `@0x118c0a60`
*Returns a CDamageInfo id from the manager's flat array (base+0x14 .. base+0x18, stride 4) by index param_1, bounds-checked; 0 if out of range.*  — server: data: damage-info id accessor. (conf high)

**Constants:** array base+0x14/end+0x18/stride4, 'CDamageInfo'

### CDamageInfo::GetRecordById  `@0x10abaa70`
*Paged-array accessor into the CDamageInfo data table (manager via CDamageInfo::GetManager). Same base/page/count layout as combo table.*  — server: authoritative/data - resolves a damage-definition record by id; the damage table this reads is a prime candidate for server-side damage math input. Worth locating the record struct fields. (conf high)

**Formulas:**
- idx' = id - table[+0x30]; require 0<=idx'<table[+0x24]; page=table[+0x20][idx'/table[+0x28]]; return page[idx'%table[+0x28]]
> Only the accessor is here; the CDamageInfo record layout (multipliers etc.) is elsewhere. Flag for follow-up.

### CDamageInfo::ParseAttackInfoXml_[DECOMPILE_FAILED]  `@0x116e5410`
*Per-attack damage/AttackInfo config parser (14846 bytes, DECOMPILE FAILED / VIRTUALIZED — no body recovered, only string evidence). Parses AttackName + AttackInfo blocks with per-attack modifier fields: DamageNumberM (raw damage), PiyoM (stun/KO buildup), StaminaM (stamina damage/drain), Damage_LevelM, Damage_Level_NumberM, Damage_PowerM, Damage_Dir_useM/Damage_DirM (directional damage), elemental attacks Fire_AtkM/Water_AtkM/Dragon_AtkM/Electric_AtkM/Ice_AtkM, CutM/Cut_ValueM (sever/cut damage), HanmmerM/Hammer_ValueM (blunt/impact -> KO).*  — server: authoritative: THE per-attack damage table. Server must load these multipliers to compute damage. Body is virtualized in this dump — recover from another decompiler pass or from the loaded data. The field list is the deliverable. (conf high)

**Formulas:**
- BODY NOT RECOVERED (virtualized). These 'M' fields are per-attack damage components consumed by the damage-calc path (see FUN_1142b3d0/FUN_1142c620).
**Protocol fields:**
- `AttackName: string -> hash32 (identifies the attack the client claims to have used in a hit message)`
**Constants:** AttackName (hashed via FUN_11116730 algo), DamageNumberM = motion/raw damage value, PiyoM = stun buildup, StaminaM = stamina damage, Fire/Water/Dragon/Electric/Ice_AtkM = elemental attack values, CutM/Cut_ValueM = sever damage, HanmmerM/Hammer_ValueM = impact/KO damage (note misspelling 'Hanmmer'), Damage_PowerM, Damage_LevelM, Damage_DirM = power/level/direction modifiers
> HIGHEST-VALUE table for server damage math but decompilation failed. Flag: needs a second RE pass (e.g. binary ninja / IDA) or reading the XML schema directly.

### CDamageInfoController::InitEntityDamageResources  `@10efe700`
*On entity/actor setup, if the actor's CDamageInfo controller (vtable 800/0x320) exists, resolves 4 resource ids from the config struct param_2 (0x2c->0xe0, 0x114->0xd4, 0x118->0xd0, 0x120->0x10c) via the controller's material/effect resolvers, runs post-init, and links the actor's CDamageInfo record (param_2+0x138 as index into CDamageInfo manager) storing entity ptr at record+0x924 and config at +0x928.*  — server: authoritative: the CDamageInfo record (hitzone/material multipliers) bound here is what damage math consumes; server must load the same records and bind them to monsters/actors. (conf medium)

**Formulas:**
- CDamageInfo record lookup: rec = mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]] with idx=param_2+0x138 (slotted-array accessor)
**Constants:** param_2 offsets: 0x2c/0x114/0x118/0x120 = source resource ids -> resolved into 0xe0/0xd4/0xd0/0x10c; 0x138 = CDamageInfo record index; record+0x924 = back-ptr to entity, +0x928 = config, controller vtable 800(0x320)=GetDamageInfo, 0x5c/0x60/0x64/0x68 = per-slot resolvers, 700(0x2bc)=finalize
> Binds a spawned entity to its CDamageInfo record (hitzones/material data). Establishes the record<->entity link the damage evaluator later reads.

### CGameRules::ResolveHitMaterialOrEffectRecord  `@10c39260`
*Given the hit context (param_1) and an actor/damageinfo object (param_2), builds a lookup key string and resolves a CDamageInfo/effect record. Chooses between two resolver paths (FUN_116cd660 vs FUN_10970c70) based on a bool from param_2 vtable+0x10, optionally overlays a second key via param_2 vtable+0x64 (FUN_10540d00), then looks up the record with FUN_116e50d0 using id at param_1+0x18. Falls back to CDamageInfo manager array element [0][0] if not found.*  — server: validation: resolves which damage/material record applies to a hit; server needs the equivalent record lookup to compute authoritative damage, though string-key building here is client-flavored. (conf low)

**Formulas:**
- CDamageInfo manager fallback indexing: rec = mgr[0x20][ (0 / mgr[0x28]) ][ (0 % mgr[0x28]) ] guarded by mgr[0x30]==0 && mgr[0x28]!=0 && mgr[0x24]>0 (standard slotted-array accessor: bucket = idx/stride, slot = idx%stride)
**Constants:** param_1+0x15c = optional key-count gate (>0), param_1+0x18 = damage-info/effect record id used for FUN_116e50d0 lookup
> Helper returning a record pointer used by FUN_10c38390 (local_14). The slotted-array pattern (0x20=buckets,0x24=count,0x28=stride,0x30=base-offset) recurs across CDamageInfo/CProjectileExplosionInfo managers in this chunk.

### TdrCharFullStat::ToDebugString  `@0x101ea1c0`
*TDR debug/ToString serializer for the FULL character stat struct — the combat-relevant attribute block. Same helper pattern as FUN_101dc8a0 (FUN_1024a290 named scalar, FUN_1024a3b0+7-loop+FUN_1010c060 for 7-element arrays, DAT_11da064c float format for float members). No math; pure field enumeration. Its value is that it enumerates the exact authoritative combat-stat layout the server must reproduce, with offsets.*  — server: client-only serializer, BUT it is the definitive STRUCT-LAYOUT REFERENCE for the character combat-stat block the server computes and sends. Offsets/field names below are authoritative for building the stat packet; the numbers themselves are server-authoritative (server must compute atk/def/res/crit). (conf high)

**Protocol fields:**
- `+0x48 oCharHP; oCharMaxHP[7]@0x4c; +0x68 oDeath(short); oCharMaxSta[7]@0x6a`
- `Primary attributes (each [7]): oCharStr@0x86, oCharBst@0xa2, oCharLck@0xbe, oCharVgr@0xda`
- `oCharMelee[7 float]@0xf6, oCharRange[7 float]@0x112 (weapon raw attack)`
- `oCharDefence[7]@0x12e, oCritLevel[7]@0x14a, oCritDmg[7]@0x166, oAntiCritDmg[7]@0x182`
- `Elemental ATTACK (each [7]): oWaterAttack@0x19e, oFireAttack@0x1ba, oLightningAttack@0x1d6, oDragonAttack@0x1f2, oIceAttack@0x20e, oNonAttack@0x22a, oPoisonAttack@0x246, oSleepyAttack@0x262, oParalysisAttack@0x27e`
- `Elemental RESIST (each [7]): oWaterRes@0x29a, oFireRes@0x2b6, oLightningRes@0x2d2, oDragonRes@0x2ee, oIceRes@0x30a; oParaThrsh[7]@0x326 (paralysis threshold)`
- `+0x342 oCharEnergy; oCharMaxEnergy[7]@0x346`
- `Weapon EXP: oClaymoreExp@0x362, oHammerExp@0x366, oKatanaExp@0x36a, oDuelSwordExp@0x36e, oSwordExp@0x372, oSpearExp@0x376, oGunExp@0x37a, oBowExp@0x37e, oCrossbowExp@0x382, oFluteExp@0x386`
- `oPVEDef[7]@0x39a, oPVEDefAngle[7]@0x3b6, oPVPDef[7]@0x3d2, oPVPDefAngle[7]@0x3ee (defense values + defense arc angles)`
- `oAdditionalHate[7]@0x44c (aggro/hate bonus); oPlayerAtk[7 float]@0x468; oPlayerCrit[7 float]@0x488 (final computed attack & crit-rate)`
- `+0x4c8 oCombatNPCID, +0x4cc oBattleState, oHammerModeTime[7]@0x4d0`
- `oDefenseReduceHPModifyRate[7 float]@0x5dc, oDefenseReduceStaModifyRate[7 float]@0x5f8 (defense-broken HP/stamina damage multipliers)`
- `oDynamiteAttack[7]@0x63c, oDynamiteThrsh[7]@0x658; +0x674 oGuildBanChatEndTime`
**Constants:** each stat = fixed array of 7 dwords/floats (base + modifier slots), float fmt DAT_11da064c for oCharMelee/oCharRange/oPlayerAtk/oPlayerCrit/oDefenseReduce* (these are float stats); int fmt DAT_11d9f710 for the rest
> src TdrBufUtil.cpp. This struct is the master combat-stat definition: raw weapon attack (Melee/Range), per-element attack & resist, crit level/dmg/anti-crit, status-ailment attack values (poison/sleep/paralysis/dynamite) plus their thresholds (oParaThrsh/oDynamiteThrsh), PVE/PVP defense with directional arc angles, and final computed oPlayerAtk/oPlayerCrit. oDefenseReduce*ModifyRate are the multipliers applied once a monster part's defense is broken. The actual damage arithmetic using these fields lives elsewhere (not in this chunk) — search later chunks for consumers of these offsets. The 7-slot arrays are the modifier stack (base/equipment/skill/buff/etc.).


## hit-validation  (35)

### CActor::EmitGameOnHitFromLocalHit  `@10f19670`
*Builds and emits a 'GameOnHit' event for a local hit. Resolves the hit surface/segment (via team/effect manager DAT_1202e818+0xd0 vtable 0x90->0x7c using param_2), fills payload: local_19c = hit-part id (intersect+8 or self id), local_198 = self id, local_134/local_12c = negated hit position (XOR DAT_11de9c90 = -pos), local_184 = attack-name id (FUN_10b27fd0 of record+0x28 from FUN_10abaa70(param_3)); then fires GameOnHit (flags 0x4ffff) on this entity's game object.*  — server: validation: this is a client->server GameOnHit report; server validates the part id, victim, position and attackName id it carries. (conf medium)

**Formulas:**
- hit position payload = -(pos) i.e. each component XOR 0x80000000 (sign flip) -> local_134,local_12c
**Protocol fields:**
- `local_19c: hit part/bone id (from intersect record +8, else GetEntityId vtable+4)`
- `local_198: victim entity id (vtable+4)`
- `local_134/local_12c: negated hit world position (Vec3)`
- `local_184: attackName id (FUN_10b27fd0 of surface record +0x28)`
**Constants:** DAT_11de9c90 = 0x80000000 (negates the hit position vector), 0x4ffff = event flag mask
> Another GameOnHit emitter path (simpler than 10d607a0). Payload structure {partId, victimId, -hitPos, attackNameId} is the load-bearing protocol shape.

### CActor::FireServerOnHitScriptEvent  `@11000e30`
*Stores the hit source (param_2) at this+0x198 and invokes the Lua/script table function 'ServerOnHit' on this entity's script proxy (character slot 2 -> script table vtable 0x34 lookup, then FUN_10a69650 push + call vtable 0x44).*  — server: authoritative: ServerOnHit is the server-side script hook that resolves/applies damage. This is a key server entry point — the server must implement ServerOnHit semantics. (conf high)

**Constants:** this+0x198 = current server hit-source ptr, 'ServerOnHit' = script table method invoked authoritatively
> The authoritative server-side hit callback into game script. Called from FUN_11000d20 when running as server. 'ServerOnHit' is the server damage-resolution entry into Lua.

### CActor::OnHitLocalAndReportToServer  `@11000d20`
*Local OnHit handler. Validates the hit (this vtable 0x108 = CanHit/IsValidHit(param_2)), records the hit-info into this+8 buffer (FUN_10b26050), fires the client script event 'OnHit'. Then: if this is the server instance (DAT_1202e818+0x209 set) calls FUN_11000e30 (ServerOnHit script event); ELSE if the hit target is the local player (attacker id == local player id via vtable 0x128) builds and sends network message 0x2b0 to the server carrying weapon class (vtable 0x274), region 0, and the local net id (vtable 0x2ac).*  — server: validation: server receives 0x2b0 and must validate weaponClassId/region/netId before applying. Cross-check with TLV docs for opcode 0x2b0 (see discrepancy note). (conf medium)

**Protocol fields:**
- `message id 0x2b0 (client->server hit report)`
- `field @local_8+0: 0x2b0 (msg type tag / opcode, u16)`
- `field @local_8+8 (offset 0x20): weaponClassId (vtable 0x274)`
- `field @local_8+0xa (offset 0x28): region = 0 (constant here)`
- `field @local_8+0xc (offset 0x30): local net/channel id (vtable 0x2ac)`
**Constants:** 0x2b0 = client->server hit RMI/message id, DAT_1202e818+0x209 = isServer / authoritative-context flag, vtable 0x274 = weapon class id, 0x2ac = channel/net id, 0x128 = local player id
> This is a concrete client->server hit report (opcode 0x2b0). The isServer branch runs ServerOnHit directly; the client branch marshals the message. Struct built via FUN_100e49c0/FUN_100e4a80 (message writer).

### CAttackHitVolumeInfo::ParseHitSphereXml  `@0x119dff50`
*Parses an attack hit-volume / damage-region entry: Name@+0x14, Type@+0x10 (matched against a name table at DAT_11d6ad60, 5-dword stride; 'Normal' etc -> index stored at +0x10), Radius, OffsetY, OffsetZ (sphere geometry), and AttackName. Defines the collision sphere used to detect/validate hits, tied to an AttackName.*  — server: authoritative/validation: defines the hit-sphere (radius + Y/Z offset) and attack type per AttackName. Server needs this to validate client hit claims geometrically (is target within the claimed attack's volume). (conf medium)

**Formulas:**
- Type index = linear search of name table DAT_11d6ad60 (stride 0x14) matching the Type string; -1 if none
**Protocol fields:**
- `AttackName (hashed) -> hit volume`
- `Radius, OffsetY, OffsetZ define the sphere for hit validation`
**Constants:** Name@+0x14, Type@+0x10, Radius/OffsetY/OffsetZ = hit sphere, type table DAT_11d6ad60 (stride 5 dwords), 'Normal', AttackName

### CClientHitValidator::CheckVerticalMovement (Security code 3)  `@110553b0`
*Anti-fly/height movement security check. On a config-gated cadence (RaycastTime) it casts a downward RayWorldIntersection(Game) from the player's position to find ground height, measures how far the player is above/below ground, and if that deviation exceeds HeightThreshold continuously for longer than HeightTime it flags '[Security]Movement error code 3' and sanctions the client via FUN_114811e0(param_3,3).*  — server: validation (conf medium)

**Formulas:**
- ground_ray_down from (pos.xy, pos.z + DAT_11de98cc)
- heightDelta = \|rayHitZ - pos.z\| (abs via ^0x80000000)
- flag if heightDelta > HeightThreshold sustained for (now - violationStartTime) > HeightTime -> sanction code 3
**Constants:** 0xc3fa0000=-500.0f (short ray z), 0xc59c4000=-5000.0f (long ray z), 5000.0f ray length, DAT_11de9c90=0x80000000 (fabs sign mask), DAT_11de98cc (z probe offset), 0x101 ray flags, 0x40f entity type mask
> param_2 = player position (param_2[0]=x,y packed, param_2+1=z as float). this+0x20/0x24 = last raycast timestamp (I64), this+0x28/0x2c = height-violation start timestamp. Config keys read via FUN_100b62c0/FUN_100b5f70 then FUN_11479100/FUN_1147cea0 (GetCVar int). Ray setup: local_60=0x101 flags, local_5c=0x40f entity-type mask, max 4 hits. First ray uses z+DAT_11de98cc offset with down-vector encoded as 0xc3fa0000 (=-500.0f); fallback long ray uses 5000.0 length, dir 0xc59c4000 (=-5000.0f). Height delta abs via XOR DAT_11de9c90 (=0x80000000 sign flip). local_a8 = ray hit height.

### CDamageChecker::EvaluateAllErrorRatiosAndSanction  `@11059d60`
*Master anti-cheat evaluator run periodically. Computes error-to-attack ratios for six categories and issues sanctions (FUN_114811e0 with the logical error code) when a ratio exceeds its configured threshold and enough samples exist: MMG (code 6), MMZ (code 7), client-attack-info (code 8), monster sequence (code 9), monster attack-name (code 10), monster projectile (code 11). Also force-sanctions code 10 if this+0xa4 flag set. Finally clears the sample lists (FUN_1105acc0/FUN_1105e570).*  — server: validation (conf high)

**Formulas:**
- MMG: if MMGsvr(0x74)>=MMGSvrAttackCount && (0x78*100)/0x74 <= MMGCliAttackRatio -> sanction 6
- MMZ: if MMZsvr(0x7c)>=MMZSvrAttackCount && (0x80*100)/0x7c <= MMZCliAttackRatio -> sanction 7
- AttackInfo: count list at this+0x28; if listLen>=ClientBeAttackCount && (0x88*100)/listLen >= ClientAttackInfoErrorRatio -> sanction 8
- SeqRatio (0x94*100)/0x90 >= MonsterSequenceErrorRatio -> sanction 9
- NameRatio (0x98*100)/0x90 >= MonsterAttackNameErrorRatio -> sanction 10
- ProjRatio (0x9c*100)/0x90 >= MonsterProjectileErrorRatio -> sanction 11
- if this+0xa4 != 0 -> sanction 10
> Counters: this+0x74 MMG server attacks, +0x78 MMG client, +0x7c MMZ server, +0x80 MMZ client, +0x88 client-attack-info errors, +0x90 total monster attacks, +0x94 seq err, +0x98 name err, +0x9c proj err, +0xa4 force-sanction byte. Config sample-count gates: MMGSvrAttackCount, MMZSvrAttackCount, ClientBeAttackCount. Config ratio thresholds: MMGCliAttackRatio, MMZCliAttackRatio, ClientAttackInfoErrorRatio, MonsterSequenceErrorRatio, MonsterAttackNameErrorRatio, MonsterProjectileErrorRatio.

### CEvpDamageChecker::ClearExpiredFiremodes  `@1105ab90`
*Garbage-collects the per-checker pending firemode-hit list at this+0x4c: for each entry older than EvpDamageFiremodeClearTime (default 2000 ms if cvar missing), removes the matching firemode node from the boss's firemode map (DAT_1202e818+0xd0) and unlinks/frees the entry. Housekeeping run from the ack/update tick.*  — server: validation (conf high)

**Formulas:**
- age = now_I64 - entry.timestamp(entry[4],[5]); if age > EvpDamageFiremodeClearTime -> unlink boss firemode node (key entry[3]) and free entry
**Constants:** 2000 (default EvpDamageFiremodeClearTime ms)
> entry layout: [1]=prev,[0]=next (intrusive), [2]=bossNetID, [3]=firemode id, [4]/[5]=I64 timestamp. FUN_10c3d5d0 frees node.

### CEvpDamageChecker::EvaluateMonsterAttackErrorRatios  `@11059000`
*Reads accumulated monster-hit error counters and compares their ratios against configured thresholds to decide whether to sanction. Gate config AttackDataErrorSanction must be non-zero. Returns a sanction flag if any of sequence/attackname/projectile error ratios exceed their configured limits.*  — server: validation (conf high)

**Formulas:**
- seqRatio = (this+0x94 * 100) / this+0x90 ; if count>=ClientBeAttackCount && seqRatio >= MonsterSequenceErrorRatio -> flag
- nameRatio = (this+0x98 * 100) / this+0x90 ; >= MonsterAttackNameErrorRatio -> flag
- projRatio = (this+0x9c * 100) / this+0x90 ; >= MonsterProjectileErrorRatio -> flag
- final: return flag only if AttackDataErrorSanction != 0, else 0
> Counters: this+0x90 = total client-be-attacked count (ClientBeAttackCount min sample), this+0x94 = sequence errors, this+0x98 = attack-name errors, this+0x9c = projectile errors, this+0xa4 = pre-set sanction flag (byte). Config thresholds: MonsterSequenceErrorRatio, MonsterAttackNameErrorRatio, MonsterProjectileErrorRatio. AttackDataErrorSanction toggles enforcement.

### CEvpDamageChecker::HandleClientHit (monster/Boss hit validation, codes 9/10/11)  `@11059210`
*Core validation for a client-reported hit ON a monster/Boss (EVP = entity-vs-player / monster attacking). Resolves the Boss entity by netID, checks that the reported attack sequence matches the server's current/last recorded attack sequence, validates the firemode hash and attack-name hash against the Boss's registered attack list, and for projectile-type ids validates the projectile. Logs '[Security]EvpDamage error code 10/11' and sanctions on failure; on success records the hit into the reaction/ack list.*  — server: validation (conf medium)

**Formulas:**
- seq check: (param_2[0x58],[0x59]) must == currentSeq(list[8],[9]) OR lastSeq(list[6],[7]); else log code 9, ++seqErr(0x94)
- firemode valid = FUN_1105a890(bossNetID=param_2[0x49], hashFiremode=param_2[5])
- attackname valid = FUN_1105aa20(boss, param_2[4], param_2[5], param_2[6]) OR FUN_1105a930(param_2[0x49],param_2[5],param_2[6])
- fail -> ++0x98, log code 10, FUN_114811e0(param_3, 8)
**Protocol fields:**
- `param_2[0x49]: bossNetID (u32) — target monster network id, resolved via m_pThis+0x29c (entity lookup)`
- `param_2[0x4c]: projectileOrFiremodeId (u32) — top nibble (>>0x1c)==2 means projectile-type; 0 means melee firemode path`
- `param_2[4]: attackerContext (u32) passed to IsAttackNameValid`
- `param_2[5]: hashFiremode (u32) — validated against Boss firemode list (FUN_1105a890)`
- `param_2[6]: hashAttacker / attackNameHash (u32) — validated against Boss attack-name list (FUN_1105aa20/FUN_1105a930)`
- `param_2[0x58]/[0x59]: attack sequence (I64, low/high) — must equal server current-seq (list[8]/[9]) or last-seq (list[6]/[7])`
- `param_3: sanction/response handle passed to FUN_114811e0(handle, code)`
> Counters incremented: +0x90 total attacks (when reaction id==1), +0x94 sequence errors, +0x98 firemode/attackname errors, +0x9c projectile errors, +0xa0 valid processed. Boss firemode tree root = DAT_1202e818+0xd0. Error-code strings are logical ('9' seq, '10' firemode+attackname, '11' projectile); actual sanction codes passed to FUN_114811e0 are 8 (firemode/name fail) and 4 (duplicate/already-in-reaction-list). FUN_11056f00 stamps the current server timestamp; FUN_1105ae50 builds hit-info; FUN_1105c050 inserts into pending list; FUN_11058460 = scope cleanup.

### CEvpDamageChecker::IsFiremodeRegistered  `@1105a890`
*Looks up a Boss (by netID param_2) in the boss red-black tree at DAT_1202e818+0xd0+0x44, then walks that boss's firemode intrusive list to find an entry whose id (node+8) equals param_3 (firemode). Returns true if found. Logs 'cant find firemode in List netID:%u firemode:%u' or 'cant find Boss netID:%d' on failure.*  — server: validation (conf high)

> Standard std::map<netID, BossFiremodeList> traversal (key at node+0x10, left/right at +8/+0xc, list head at +0x14). Helper for HandleClientHit firemode validation.

### CEvpDamageChecker::UpdateAckAndTimeouts  `@110597f0`
*Per-tick maintenance for the EVP damage/ack pipeline. When not yet acked (this+0x30/0x70 flags), reads server time and, gated by EvpDamageTime, flushes the oldest pending hit entry (serializes it via 0x104/0x5c network calls) if it has aged past EvpDamageTime; separately, gated by AckTimeout, walks the pending list and after AckTimeout (>=0x4e21=20001 baseline window) marks the checker acked (this+0x30=1) and sends. Calls FUN_1105ab90 (firemode clear) at the end.*  — server: validation (conf low)

> Timestamps: this+0x60/0x64 and this+0x68/0x6c are I64 baselines. 0x4e21 (=20001) appears as a fixed minimum window before ack-timeout logic. Heavy inlined 64-bit compare noise from decompiler. Config: EvpDamageTime, AckTimeout. Networking send via **(this+0x1c vtable). Server-side ack bookkeeping.

### CEvpDamageChecker::ValidateSequence (Security code 5)  `@11059b30`
*Validates the monotonic per-hit sequence number. Reconstructs a 32-bit sequence from two 16-bit halves of the client-sent timestamp/seq words and requires it to increment by exactly 1 from the stored m_sequence (this+0x54). Tolerates up to 3 mismatches (this+0x58 counter) before logging '[Security]EvpDamageChecker error code 5' and sanctioning FUN_114811e0(param_6,5).*  — server: validation (conf high)

**Formulas:**
- reconstructedSeq uVar3 = (param_5 << 16) \| (param_4 >> 16)
- require (param_2 << 16) == (param_5 & 0xffff0000) else ++errCnt
- if m_sequence != 0: require reconstructedSeq - m_sequence == 1
- if m_sequence == 0: require reconstructedSeq == 0 (first)
- on violation ++this+0x58; if this+0x58 > 3 -> log code 5, sanction 5
- on success store m_sequence(0x54) = reconstructedSeq
**Protocol fields:**
- `param_2: expected time high word (<<0x10 compared to param_5 high half)`
- `param_3: time low context (logged)`
- `param_4: seq low word (>>0x10 supplies low bits of reconstructed seq)`
- `param_5: seq/time high word (&0xffff0000 must equal param_2<<0x10; <<0x10 supplies high bits)`
- `param_6: sanction handle -> FUN_114811e0(handle,5)`
> this+0x54 = last accepted sequence (m_sequence); this+0x58 = consecutive-error counter. Sanction only fires when error counter > 3.

### CGameRules::RegisterGameHitListeners  `@10d53a60`
*For a hit record param_1 (param_1[0]=attacker netId, param_1[1]=target netId): looks up both game objects (vtable 0x144 by id), then registers the RMI/schedule 'GameOnHit' on the target-object channel and 'GameHit' on the attacker-object channel (both event flags 0x4ffff, payload = param_1). If FUN_10c007c0(target) resolves an actor, calls FUN_10d53b90(param_1, param_2+0x58) and FUN_10d53fe0(param_1, param_2+0xd8).*  — server: validation: GameOnHit/GameHit are the client->server (and server->client) hit notifications the server must receive and validate; this function is the client-side registrar. (conf medium)

**Protocol fields:**
- `param_1[0]: attacker netId (u32)`
- `param_1[1]: target netId (u32)`
- `param_2+0x58: attacker-side hit data blob passed to FUN_10d53b90`
- `param_2+0xd8: target-side hit data blob passed to FUN_10d53fe0`
**Constants:** 0x4ffff = aspect/event flag mask for GameOnHit/GameHit scheduling, event name id from vtable 0x18 ('GameOnHit'/'GameHit')
> 'GameOnHit' and 'GameHit' are the network hit events threaded through GameObject scheduling. This wires the client emission of those events.

### CMHHitInfo::SerializeToKeyValue  `@0x102d9480`
*Debug/telemetry serializer that dumps the full client<->server HIT/DAMAGE event structure field-by-field as labelled key/value lines via FUN_1024a290(printer,indent,ctx,label,fmtStr,value) and FUN_102713d0 (Vec3 dumper). Because it enumerates every field of the hit message with its exact name, offset and type, it is the authoritative field map for the GameOnHit / hit-report structure.*  — server: validation - this is the exact layout of the hit/damage event the client emits; the authoritative server must parse and validate these fields (attacker/firemode/attackName hashes, skill seq, defense result, hit index). (conf high)

**Formulas:**
- Vec3 fields are emitted as 3 consecutive floats each (11 vectors span this+0x28..this+0xa4).
- llSkillSeq occupies two dwords this+0xfc (low) and this+0x100 (high), printed with %I64i.
- Client-side srv-id fields (iShooterSrvId/iTargetSrvId/iWeaponSrvId/iProjectileSrvId) are the server-authoritative entity ids paired with the client dwShooterId/dwTargetId/etc.
**Protocol fields:**
- `dwShooterId: u32 @ this+0x00`
- `dwTargetId: u32 @ this+0x04`
- `dwWeaponId: u32 @ this+0x08`
- `dwProjectileId: u32 @ this+0x0c`
- `iMaterial: int @ this+0x10`
- `iType: int @ this+0x14`
- `iBulletType: int @ this+0x18`
- `fDamageMin: float @ this+0x1c`
- `fPierce: float @ this+0x20`
- `iPartId: int @ this+0x24 (hitzone/part id)`
- `stPos: Vec3 @ this+0x28 (world hit pos)`
- `stLpos: Vec3 @ this+0x34 (local hit pos)`
- `stDir: Vec3 @ this+0x40 (hit/shot direction)`
- `stNormal: Vec3 @ this+0x4c`
- `stLnorm: Vec3 @ this+0x58 (local normal)`
- `stAttackDir: Vec3 @ this+0x64`
- `stTScarDir: Vec3 @ this+0x70 (target scar direction)`
- `stTPos: Vec3 @ this+0x7c (target pos)`
- `stTUp: Vec3 @ this+0x88 (target up)`
- `stTNormal: Vec3 @ this+0x94 (target normal)`
- `stLocalnormangle: Vec3 @ this+0xa0`
- `fShakeStrength: float @ this+0xac`
- `fShakeDurationTime: float @ this+0xb0`
- `fShakeStillTime: float @ this+0xb4`
- `wProjectileClassId: u16 @ this+0xb8`
- `wWeaponClassId: u16 @ this+0xba`
- `iRemote: int @ this+0xbc`
- `iDamageLevel: int @ this+0xc0`
- `dwAttackType: u32 @ this+0xc4`
- `dwHitType: u32 @ this+0xc8`
- `iDefenseResult: int @ this+0xcc`
- `iHitIndex: int @ this+0xd0`
- `iShooterSrvId: int @ this+0xd4`
- `iTargetSrvId: int @ this+0xd8`
- `iWeaponSrvId: int @ this+0xdc`
- `iProjectileSrvId: int @ this+0xe0`
- `dwHashWeaponClass: u32 @ this+0xe4`
- `dwHashFireMode: u32 @ this+0xe8`
- `dwHashAttacker: u32 @ this+0xec`
- `dwHashMeleeParams: u32 @ this+0xf0`
- `dwHashCurEvent: u32 @ this+0xf4`
- `iSkillResID: int @ this+0xf8 (skill resource/config id)`
- `llSkillSeq: i64 @ this+0xfc (skill sequence number, [0x3f]/[0x40])`
- `fCurStamina: float @ this+0x104`
**Constants:** &DAT_11d9f574 = "%u" (u32 fmt, used 11x), &DAT_11d9e0b4 = "%d" (int fmt, used 255x), &DAT_11da0cf4 = float fmt "%f"/"%.3f" (double-promoted, used 6x), "%I64i" = int64 fmt for llSkillSeq
> No matching TLV struct found in TLV_DOCS/ for these field names (not one of the 12 catalogued combat TLVs); this is a raw in-memory event struct, likely the payload behind GameOnHit and the hit-report opcode. This layout should drive the server's hit-validation parser.

### CMelee::ComputeHitDirectionAndEmitGameOnHit  `@10d607a0`
*For a hit where the target actor kind (vtable 0xa8) == 2 and species (vtable 0x88) matches attacker's, computes the hit direction/orientation in the attacker's local frame. Fetches target hit position (vtable 0x28), validates via FUN_10d60650, gets both entities' world transforms, builds direction vectors with quaternion->basis rotation and cross products, normalizes (Newton-Raphson rsqrt), computes an angle via acos and rotates by cos/sin, then emits 'GameOnHit' (flags 0x4ffff) with the assembled payload (local_208..local_1ec).*  — server: validation: server must recognize the GameOnHit hit-direction payload; the geometric direction is client-computed but the attacker/target type tags and hit region are validated server-side. Math itself is client FX-adjacent. (conf medium)

**Formulas:**
- normalize(v): e = rsqrtss(\|v\|^2); n = (1.5 - 0.5*\|v\|^2*e*e)*e; v_hat = v*n  (guarded by \|v\|^2 > DAT_11cbf070)
- quaternion(q=x,y,z,w) rotate of vector: t = 2*cross(q.xyz, v); v' = v + q.w*t + cross(q.xyz,t) (expanded inline as (y*Bz - z*By)+w*Bx etc.)
- scale factor: fVar14 = (pos[0]==0)? 1.0 : 1.0/pos[0] applied to rotated axis (local_1ac = axis*scale)
- angle path: theta = acos(dot) ; rotated = axis*sin(theta*0.5?) with cos(theta) stored (local_2c._4_4_) -- fcos/fsin of (acos_result * DAT_11de98e8)
**Protocol fields:**
- `GameOnHit payload local_208 = attacker damage-info type (piVar3 vtable+4)`
- `local_204 = attacker context id (iVar4+8)`
- `local_1fc = target damage-info type (param_2 vtable+4)`
- `local_1f0/local_1ec = computed direction/segment id (FUN_10b27fd0 of intersect record +0x14)`
**Constants:** DAT_11de9c90 = 0x80000000 float sign-flip mask (vector/quaternion negation), DAT_11de9938 = 1.5f, DAT_11de98e8 = 0.5f (Newton-Raphson refine: n = (1.5 - 0.5*x*n*n)*n on rsqrtss estimate), DAT_11de9918 = 1.0f, DAT_11cbf070 = length^2 epsilon (skip-normalize threshold), DAT_11cc4cc0 / 0x43fa0000 = 500.0f (used to build a large bound / clamp box local_150..local_170), DAT_11cbf074 = min-length gate before acos path; DAT_11de98e8 reused as rad<->? scale on the acos result, 0x3f800000 = 1.0f (w component), 0x4ffff = GameOnHit event flag mask
> This is the melee/monster-part hit direction resolver (kind==2 path). Heavy Vec3/Quat math is standard CryEngine; the load-bearing output is the GameOnHit payload with attacker/target damage-info type tags.

### CMeleeCollision::SweepAndReportGameOnHit  `@11006ea0`
*Melee weapon collision sweep that detects hit actors and reports GameOnHit. Gets the weapon collision box world transform (vtable 0xC8 -> local_ac Vec3), cleans the tracked-entity list (this+0x35..0x36 removing stale ids via entity system 0x54), runs PrimitiveWorldIntersection(Game) box sweep (filter 0x208, or 0xa08 when weapon record+0x18 flag set), and for each intersected entity: resolves the actor, skips self and (in PvP mode: DAT_1202e818+0xd0 team-mgr getMode==1) friendly targets (vtable 0x50 friendly check), builds a hit record with direction/rotation (quaternion basis + cross products), and appends to one of two hit lists (local_40 = damageable, local_20 = non-damageable/blocked). After the sweep it emits 'GameOnHit' (flags 0x4ffff, extra data 0x2a) for every entity in local_40, and 'GameOnHit' for local_20. Includes a same-position repeat-hit debounce (counter this+0x34, needs > 3 frames or position delta > DAT_11de98c4 to re-hit). A secondary radius query (3.0f, filter 0x1e) catches near-miss entities.*  — server: validation: the client computes candidate melee hits here and emits GameOnHit; the SERVER must validate these (attacker weapon box overlap, friendly-fire rule, debounce/no-double-hit, target reachability). Server should reproduce the box sweep + friendly check to reject spoofed GameOnHit reports. Direction/normal math is client presentation but the hit set and attackName id are authoritative-critical. (conf medium)

**Formulas:**
- hit direction vec = target quaternion rotated basis: v' = v + q.w*cross(q.xyz,v) + cross(q.xyz,cross(q.xyz,v)) expanded with dot terms; each source vector negated (XOR 0x80000000) before rotation
- surface normal normalize: e=rsqrtss(\|d\|^2); n=(1.5 - 0.5*\|d\|^2*e*e)*e; d_hat=d*n (guarded \|d\|^2 > DAT_11cbf070)
- angular-velocity scale piVar9 = (targetPos[0]==0)? 1.0 : 1.0/targetPos[0] applied to rotated velocity vectors
- repeat-hit gate: re-hit allowed if \|curPos - lastPos\| > DAT_11de98c4 on any axis (abs via &0x7fffffff), else increment this[0x34]; force hit when this[0x34] > 3 then reset to 0
**Protocol fields:**
- `GameOnHit payload per hit (local_a0 block): local_a0 = 'GameOnHit' name id, flags 0x4ffff, target/self ids and hit id from list entry (pppppppiVar11[3]=targetGameObjectId, [0x14]=attackName/weapon-hit id, [0x16..0x18]=impact direction Vec3)`
- `extra field local_60=0x2a with dir/normal appended via vtable 0x110`
- `friendly-flag stored: entry[0x56] bool = (localPlayerId == entryTargetId)`
**Constants:** collision filter uVar10: 0x208 default, 0xa08 when weapon-record[0xb4]+0x18 flag != 0 (extended/monster-part hittable set), 0x1c = intersection object-types flag for FUN_10a797c0 box sweep, second query radius 0x40400000 = 3.0f, filter 0x1e, GameOnHit event extra byte local_60 = 0x2a, 0x4ffff = GameOnHit event flag mask, DAT_11de9c90 = 0x80000000 sign-flip; DAT_11de9938=1.5, DAT_11de98e8=0.5 (rsqrt refine); DAT_11de9918=1.0, DAT_11de98c4 = per-axis position-delta threshold for repeat-hit debounce; DAT_11de9c70 = 0x7fffffff abs mask; DAT_3f800000 = 1.0f, DAT_40400000 = 3.0f, repeat-hit debounce: this[0x34] counter, must exceed 3; last position cached this[0x31..0x33]
> This is the primary CLIENT melee hit-detection sweep. It produces the GameOnHit reports that FUN_10d53a60 registers and that the server validates. Two-list split (damageable local_40 vs blocked local_20) and the same-target debounce (this[0x34]>3, DAT_11de98c4 pos-delta) are the load-bearing anti-double-hit logic. Uses PvP friendly-fire filter (team mgr getMode==1 + vtable 0x50).

### CMovementChecker::CheckPositionAndResetState  `@0x11482d20`
*Position-only anti-cheat variant: FUN_114822c0 validates pos; on invalid logs '[Security]Movement error code 2', bump this+0x9c, kick if > this+0xa0 else report code 2. Additionally advances a state cursor (this+0x24 <- FUN_11481b00 when this+0x20 != this+0x24) and clears this+0x2c = 0.*  — server: validation: movement anti-cheat with per-frame state reset. (conf high)

**Protocol fields:**
- `pos: float[3]`
- `error code 2 = position invalid`
**Constants:** error code 2, this+0x9c/0xa0 count/limit, this+0x20/0x24 cursor, this+0x2c reset

### CMovementChecker::CheckPosition_NoSpeed  `@0x11482a60`
*Anti-cheat position check. FUN_114822c0 validates reported position param_4 (speed arg 0). If invalid: logs '[Security]Movement error code 2 pos=(%f,%f,%f)', increments violation counter this+0x9c; if counter > limit this+0xa0 returns fail (high byte 1), else reports error code 2 to param_5 (FUN_114811e0(ctx,2)). If valid, calls FUN_114821a0 (accept) and returns ok.*  — server: validation: server-side movement/position anti-cheat. Error code 2 = illegal position. (conf high)

**Protocol fields:**
- `pos: float[3] (param_4)`
- `error code 2 = position invalid`
- `violation counter this+0x9c vs limit this+0xa0 -> kick when exceeded`
**Constants:** this+0x9c violation count, this+0xa0 violation limit, error code 2

### CMovementChecker::CheckSpeedAndPosition  `@0x11482b30`
*Anti-cheat speed+position check. speed = sqrt(vx^2+vy^2+vz^2) from param_5. FUN_11482690 checks speed cap: if exceeded -> logs '[MovementChecker]Movement error code 1 speed=(%f,%f,%f)(%f)', bump this+0x9c, report code 1. Else position check FUN_114822c0(pos, speed): if invalid -> '[Security]Movement error code 2 pos=...', report code 2. Both bump this+0x9c and kick when > this+0xa0.*  — server: validation: movement anti-cheat. Code 1 = speed too high, Code 2 = illegal position. (conf high)

**Formulas:**
- speed = sqrt(vx*vx + vy*vy + vz*vz)  (param_5 = velocity vec3)
**Protocol fields:**
- `velocity: float[3] (param_5)`
- `position: float[3] (param_4)`
- `error code 1 = speed limit exceeded`
- `error code 2 = position invalid`
**Constants:** error code 1 = speed, error code 2 = position, this+0x9c count, this+0xa0 limit

### CPlayerFsmValidation::LoadTransitionTablesXml  `@0x11484eb0`
*Loads weapon-state-machine validation tables from '%sPlayerFsmValidationWE%02d.xml' for weapon types 0..12 (loop while <0xd). Per State parses defaultTime, maxFiremode, maxLaunch; per Transition parses nextState + fastestTime; per PrevStateFix parses prevStateName + fixedTime. Builds hashed state/transition maps used to validate that the client's weapon action state machine does not transition faster than 'fastestTime' (anti-macro / speedhack).*  — server: validation: config for server-side weapon FSM validation of attack timing/state legality (fastestTime, maxFiremode, maxLaunch). Server must load these to gate attacks. (conf medium)

**Protocol fields:**
- `defaultTime, fastestTime, fixedTime (float min-durations)`
- `maxFiremode, maxLaunch (int caps)`
- `state/nextState/prevStateName (names, hashed)`
**Constants:** '%sPlayerFsmValidationWE%02d.xml', weapon-type range 0..12 (0xd), fields: State/defaultTime/maxFiremode/maxLaunch, Transition/nextState/fastestTime, PrevStateFix/prevStateName/fixedTime
> Heavy std::string/std::vector churn is CRT/STL plumbing.

### CPveDamageChecker::HandleClientHit (player attack validation, codes 1-12/15)  `@11061560`
*THE authoritative validator for a client-reported player attack (PvE: player hitting monster/target). Resolves attacker (hit+0x124) and attackee (hit+0x128) entities; validates same-region, position deviation of both endpoints, skill-id consistency, weapon-specific constraints (lance charge stamina), melee vs projectile vs other attack-category verification, hit timestamp freshness, and ack timeout. Emits '[Security]PveDamage error code N' and sanctions via FUN_114811e0(param_7, code).*  — server: authoritative (conf medium)

**Formulas:**
- resolve fail OR region(attacker.vt+0x88) != region(attackee.vt+0x88) -> log code 1, sanction 1
- PositionDeviation: dev = sqrt(dx^2+dy^2+dz^2) between server-recorded pos (model vt+200/0xc8) and client pos param_5 (attacker) and param_6 (attackee); if dev > PositionDeviation(cvar) -> code 2, sanction 2
- skill: if hit+0x15c (clientSkill) > 0 && clientSkill != serverCurrentSkill(slot vt+0x48) -> code 3, sanction 3
- lance (weapon type==3): for each buff, if buffId==0x8b(139) && cost(buff+0x254)>0 subtract; if (currentStamina(FUN_10268110) + accumulated) < 0 -> code 5, sanction 5 (config LanceChargeStaminaDeviation)
- melee (attacker==self): if FUN_11057070(hitinfo)==false -> code 5, sanction 5
- projectile (category==2): FUN_11062a80(hit+0x18 attacknamehash) must pass else code 12 sanction 0xc; then FUN_11057530
- other category: if FUN_10263a20(hash,nibble)!=0 -> code 4, sanction 4
- PveDamageTime: if (now_I64 - clientTime(local_18)) > (param_2,param_3) -> code 9, sanction 9
- if hit+0x48 < 0: async verify opcode 0xf; on fail sanction 0xf
- ack: if queued (local_40==1) ++this+0x64; if this+0x64 > AckTimeoutThreshold -> code 11 sanction 0xb else code 10 sanction 0xa
**Protocol fields:**
- `hit+0x124: attackerEntityId (u32) -> resolved via m_pThis+0x29c`
- `hit+0x128: attackeeEntityId (u32) -> resolved via m_pThis+0x29c`
- `hit+0x130: attackNameHash / attack id (u32); category = hash>>0x1c (0/1/8/0xb melee-skill, 2 projectile, else other)`
- `hit+0x15c: clientSkillId (int) compared to server current skill id`
- `hit+0x48: flag (<0 triggers extra async verify opcode 0xf)`
- `hit+0x10/0x14/0x18: hit locus (used by FUN_11399800 region/zone stamp)`
- `param_2/param_3: client attack timestamp (I64) checked against PveDamageTime`
- `param_5: client attacker position (vec3) — for PositionDeviation`
- `param_6: client attackee/impact position (vec3) — for PositionDeviation`
- `param_7: sanction handle -> FUN_114811e0(handle, code)`
**Constants:** skill/attack category nibble = hash>>0x1c (0x1c=28), buff id 0x8b=139 (LanceCharge stamina buff), opcode 0xf=15 async verify
> Region compared via entity vtable+0x88. Attacker/attackee live entities via vtable+800(0x320)->model. this+0x1c = game/context object; this+0x64 = ack-retry counter. Sanction codes actually passed: 1(resolve/region),2(position),3(skill mismatch),4(bad attack category),5(lance stamina / melee verify),9(stale time),0xc=12(projectile attackname),0xf=15(async verify),0xb=11 and 0xa=10 (ack timeout). Melee verify=FUN_11057070, projectile verify=FUN_11057530 / FUN_11062a80, region stamp=FUN_11399800, timestamp stamp=FUN_11056f00.

### CPveDamageChecker::ValidateAoEHitTarget (Security code 6)  `@11061f30`
*Validates a reported hit on a target found by id (param_2) in the tree at this+0x20. If the target is absent it runs a chain of gameplay-object checks (target has combat model at ctx+0xc, +0x90; entity present; passes FUN_110626d0 launch-type, FUN_11062c70, FUN_110627a0 launch-position, FUN_11062a30 launch-count). If all pass, marks and records the hit (FUN_11064a70) and returns valid; otherwise logs '[Security]PveDamage error code 6' and sanctions FUN_114811e0(param_3,6).*  — server: validation (conf medium)

**Protocol fields:**
- `param_2: hit/entity id (u32) — key into this+0x20 red-black tree`
- `param_3: sanction handle -> FUN_114811e0(handle,6)`
> this+0x20 tree keyed at node+0x10. Reuses projectile verify helpers FUN_110626d0/110627a0/11062a30. FUN_11062650 allocates the record slot, FUN_11064a70 inserts. Returns 1 even when sanction fired if FUN_114811e0 returns nonzero (sanction-continue).

### CScriptBind_GameRules::RegisterMethods  `@0x110442b0`
*Registrar for the GameRules Lua script bind (CryEngine CScriptBind_GameRules, MH-extended). For each method it fills a binding descriptor (name at local_38, argSpec at local_34, C thunk at local_18) and registers via script table vfunc 100. Registers ~95 game-rules methods.*  — server: authoritative/validation - registration plumbing, but this is the GameRules surface where authoritative damage entrypoints live: ServerHit and ServerExplosion (server-side hit/explosion application), KillPlayer (with a full damage/hit descriptor), plus the hit-material and hit-type registries (RegisterHitMaterial/GetHitMaterialId, RegisterHitType/GetHitTypeId/GetHitType) that map names<->ids used in hit packets. Handlers are FUN_1104b0a0/FUN_1104b100/... (outside this chunk). (conf high)

**Protocol fields:**
- `KillPlayer args (damage descriptor): playerId, dropItem, ragdoll, shooterId, weaponId, damage, hitJoint, headshot, melee, impulse, projectileId, [weaponClassId], [projectileClassId]`
- `ServerHit: (arg spec not captured here) - authoritative hit application`
- `ServerExplosion: authoritative explosion application`
- `RegisterHitType / GetHitTypeId / GetHitType - hit-type name<->id table`
- `RegisterHitMaterial / GetHitMaterialId / GetHitMaterialName - hit-material name<->id table`
> Mostly stock CryEngine GameRules scriptbind (teams, spawn/spectator locations, objectives, timers, minimap, text messages). Combat-authoritative handlers of interest: ServerHit, ServerExplosion, KillPlayer, ResetEntities, Register/Get HitMaterial/HitType. Full list captured in prior extraction: IsServer, IsClient, CanCheat, SpawnPlayer, ChangePlayerClass, RevivePlayer(InVehicle), RenamePlayer, KillPlayer, MovePlayer, GetPlayerByChannelId, GetChannelId, GetPlayerCount, GetSpectatorCount, GetPlayers, IsPlayerInGame, IsProjectile, IsSameTeam, IsNeutral, spawn/spectator-location mgmt, minimap, GetPing, ResetEntities, ServerExplosion, ServerHit, team mgmt, objectives, text/chat messages, game/round/revive/prestart timers, EndGame, NextLevel, RegisterHitMaterial/HitType + getters, ForceScoreboard, FreezeInput, Schedule/Abort Entity Respawn/Removal.

### CSecurityChecker::CheckPlayerAttr_StaminaRageSp  `@0x11483990`
*Anti-cheat on regenerating attributes. param_3 selects attribute: 1=Stamina('StaminaDeviation'), 2=Rage('RageDeviation', current via FUN_11399610(actor+8)), 3=SP('SpDeviation', current via FUN_1025b060). Reads the allowed deviation (config lookup FUN_100b62c0+FUN_11479100+FUN_1147cea0 into local_8) and the server's current value (uVar3). If client-reported value param_2 exceeds server value: if reported < serverVal -> '[Security]PlayerAttr error code %d, subtype 1' (flag+4=1, report), else if reported < serverVal+deviation -> subtype 2 (flag+4=2, warning only).*  — server: validation: anti-cheat verifying client-reported Stamina/Rage/SP against server-authoritative value + allowed deviation. Server must hold authoritative stamina/rage/sp. (conf high)

**Formulas:**
- cond: reported(param_2) > serverValue(uVar3) triggers check
- if (serverValue + deviation) > reported -> subtype 1 error (report code = param_3)
- else -> subtype 2 (soft, flag=2)
**Protocol fields:**
- `attr type param_3: 1=Stamina, 2=Rage, 3=SP`
- `reported attr value param_2`
- `error subtype 1 = value below server (impossible/hard), subtype 2 = above allowed deviation`
- `config keys StaminaDeviation/RageDeviation/SpDeviation`
**Constants:** 'StaminaDeviation','RageDeviation','SpDeviation', subtype 1 (flag=1) = hard error, subtype 2 (flag=2) = within-deviation warning, flag stored at param_4+4
> FUN_11399610 = current Rage getter, FUN_1025b060 = SP/actor id getter; verify which.

### CSecurityChecker::CheckSyncTime  `@0x11614340`
*Anti-cheat on client time sync (64-bit timestamps). Requires two internal clocks equal (FUN_11483630==FUN_11483620) else resets baseline (this+0x20..0x2c to 0/0x80000000). Compares client-reported time (iVar1+8/+0xc, I64) against last accepted (this+0x20/0x24). If new < last: accumulates backward drift at this+0x30; if drift > 'DisorderLimit' -> '[Security]SyncTime error code 1 ... disorder=%d', report code 1. Forward path: if elapsed exceeds 'SpeedLimit' allowance -> '[Security]SyncTime error code 2', report code 2; otherwise accepts and stores new time.*  — server: validation: anti-timewarp/anti-speedhack on client timestamp stream. Code 1 = time going backward beyond DisorderLimit, Code 2 = time advancing faster than SpeedLimit. (conf high)

**Formulas:**
- reported time = I64(iVar1+8 lo, iVar1+0xc hi)
- backward if reported < (this+0x20,this+0x24); accum disorder += (last_lo - reported_lo)
- code1 if disorder(this+0x30) > DisorderLimit; code2 if forward delta > SpeedLimit
**Protocol fields:**
- `client timestamp: I64 at msg+8(lo)/+0xc(hi)`
- `error code 1 = SyncTime disorder (backward)`
- `error code 2 = SyncTime speed (too fast)`
- `config DisorderLimit, SpeedLimit`
**Constants:** config keys 'DisorderLimit','SpeedLimit', this+0x20/0x24 last-accepted time (lo/hi I64), this+0x28/0x2c speed-baseline, this+0x30 accumulated disorder, reset hi = 0x80000000, error code 1 = disorder, code 2 = speed

### CombatEntity::BuildGameOnHitEvent_Melee  `@0x10b255c0`
*Computes hit geometry for a melee/entity hit and dispatches a 'GameOnHit' script event (event 0x11f, flags 0x4ffff) to the target entity. Normalizes attack direction, rotates vectors by target orientation quaternion, derives a scar/impact rotation via acos+sin/cos, and packs a bounding region (500 units) + hash into the event table.*  — server: client-only - builds the client GameOnHit visual/scar event. The math is presentation (impact rotation), not damage; but it reads the same hit record and is the client emitter of GameOnHit. (conf medium)

**Formulas:**
- normalize(v): x=rsqrt(\|v\|^2+eps); x=(1.5-0.5*\|v\|^2*x*x)*x; v*=x
- impact angle theta = acos(dot(dir, refDir)); rotationVec = axis * cos(theta*0.5) style half-angle (fcos/fsin of dVar9*0.5)
- region extents set to (500,500,500) around hit
**Constants:** rsqrt Newton refine: (1.5 - 0.5*v*x*x)*x  -> DAT_11de9938=1.5f, DAT_11de98e8=0.5f, DAT_11de9c90 = 0x80000000 float sign-flip mask (vector negation), DAT_11de98a0 = tiny epsilon added to \|v\|^2 before rsqrt, DAT_11cbf070 = near-zero length threshold; DAT_11cbf074 = min-scale guard, DAT_11de9918 = 1.0f (reciprocal numerator), 0x43fa0000 = 500.0f and DAT_11cc4cc0 = 500.0f (region half-extents)
> Quaternion/half-angle rotation of the impact normal for decal/scar placement.

### CombatEntity::HandleGameEvent_HitBreakage  `@0x10b21b70`
*Entity game-event handler dispatching on event id: 0x124 -> GameCommonEvent (EventName/EventParam forwarded to script), 0x125 -> OnHit with monster-part Breakage:Breakage effect trigger + camera/impulse math and OnHit FSM fire, 0x126 -> forwards two params via vtbl+0xe0.*  — server: client-only - hit/breakage FX and OnHit FSM handling on the client entity. The 0x125 path reads the hit record (puVar6) and triggers part-breakage visuals; not authoritative but confirms OnHit event routing. (conf medium)

**Protocol fields:**
- `hit record puVar6[0x14..0x16]: Vec3 breakage position`
- `puVar6[0x53]: breakage effect id/param`
- `puVar6[0x54]: flag gating alternate hit path (FUN_10bab190)`
**Constants:** event 0x124 = GameCommonEvent, event 0x125 = OnHit/Breakage, event 0x126 = paired-param forward, DAT_11de993c = small height offset added to breakage effect Z
> Breakage:Breakage = monster part-break effect. DAT_1202e818+0x209 branch = dedicated-server/authoritative flag toggling networked vs local handling.

### CombatNpc::OnHit_ProcessAndBroadcast  `@0x10c25c70`
*NPC/entity OnHit processing: resolves attacker (param_2[0]) and validates target alive (health via vtbl+0x304 > 0) and not blocking (attacker vtbl+0x1a4). If valid: records hit, fires 'OnHit' FSM event (code 4), notifies all registered hit-listeners (array param_1+0x25c..+0x260), and sends impact/decal events (types 0x17/0x18/0x19) carrying the damage value param_2[0x11] to the render/effect layer (param_1+0x40 vtbl+0x18).*  — server: client-only - client OnHit reaction, listener fan-out and decal events. Confirms damage/value carried at hit record +0x44 (param_2[0x11]) and health gate, but the authoritative kill/damage decision is elsewhere. (conf medium)

**Protocol fields:**
- `param_2[0]=target/self id, param_2[1]=attacker id, param_2[2]=weapon/proj id`
- `param_2[0x11] (=+0x44): damage/hit value`
**Constants:** DAT_11de9890 = min value threshold for decal/impact (param_2[0x11] must exceed), effect event type bytes: 0x17, 0x18, 0x19, 'OnHit' FSM code == 4

### FireModeName::ComputeHash32AndRegister  `@0x11116730`
*Computes the 32-bit hash of a fire-mode / attack name string and registers it into a name->hash map (rbtree at this+0x108, count this+0x10c). On hash collision with a DIFFERENT string it logs an error demanding a rename. This is the canonical string hash used to identify fire modes / attack names on the wire.*  — server: authoritative/validation: THE attackName/fireMode string-hash algorithm. Server must reproduce it exactly to map the attackName/firemode hashes the client sends in hit messages to config entries. (conf high)

**Formulas:**
- hash = 0x4e67c6a7; for each byte c (signed char) in name: hash = hash ^ ( (hash*32) + (hash>>2) + (int)(signed char)c ); (h*32 == h<<5; >>2 is logical on uint)
- collision if two distinct names produce equal hash -> logs '[FireModeName]Find redundant hash code, Name1:%s; Name2:%s ...'
**Constants:** seed = 0x4e67c6a7, shift *0x20 (=*32), >>2, map root this+0x108, count this+0x10c
> Same JS/SDBM-style hash family; verify signedness of char (cast (int)(char) => sign-extends).

### Game::TriggerScriptEvent_GameOnHit  `@0x123f6da5`
*Fires the named script/framework event 'GameOnHit'. Fetches a manager off the game framework global (DAT_1202e818): mgr = ((*(DAT_1202e818+4))->vtbl[0x3c])(); then calls mgr->vtbl[0x60](); then dispatches the event via FUN_123eef39("GameOnHit") (a named script-event / Lua callback dispatcher).*  — server: client-only (script/flowgraph notification hook triggered locally on a hit; not an authoritative damage or validation path). Named 'GameOnHit' — relevant to hit-event flow but this is a client-side script-event trigger, not the server hit checker. (conf medium)

> Small dispatch stub. FUN_123eef39 is the generic named-event/script-callback fire function; 'GameOnHit' is the event name. No damage arithmetic or field validation here.

### LocalPlayer::OnHit_CameraShakeAndFsm  `@0x10c25a20`
*On-hit handler for a specific entity: if the hit target is the local view target it triggers a camera shake scaled by the hit value at param_2+0x44, forwards the hit to the target's vtbl+0x674, records it (FUN_10c06020) and fires the 'OnHit' FSM event (id 4) with cleanup.*  — server: client-only - camera shake + OnHit FSM on the local client. (conf medium)

**Formulas:**
- cameraShake.amp = hitVal*DAT_11cbf080; cameraShake.freq = hitVal*0.5*DAT_11de98bc
**Protocol fields:**
- `param_2+0x04: hit source entity id`
- `param_2+0x44: hit magnitude/value driving shake`
**Constants:** shake amplitude = value(param_2+0x44) * DAT_11cbf080, shake frequency/other = value(param_2+0x44) * 0.5f(DAT_11de98e8) * DAT_11de98bc, 'OnHit' FSM transition code == 4

### MHAttackable::HandleGameOnHitAnimEvent  `@0x11008410`
*Game-object event handler (this=param_1, param_2=SGameObjectEvent). Reacts to two event ids. On event 0x110 (melee/attack hit frame reached): if a suppress flag at this[7]+0x1d is set it just calls a cleanup vfunc and returns; otherwise it walks the physics/proximity query result set (red-black tree of nearby entities obtained via world manager DAT_1202e818+4 -> proxy 0x3c -> 0x68 -> 0x14 fill), and for each entity whose vfunc 0x1c4 test returns false it does a hit-shape overlap query FUN_10b27660(this[0x10],0,this[0x12],0,-1,-1,0), reads the attack descriptor from this[7]+0xb4 (attack params: [0]=id, +0x10, +0x14) and issues a hit (vfunc 0x31c). A second pass (when world/camera manager DAT_1202e818+0xd0 mode==1) collects entities into a local list and broadcasts a 'GameOnHit' game-object event (flags 0x4ffff) to each via game-object lookup (+0x144 -> SendEvent 0x24), then frees list nodes with FUN_10c3d5d0/FUN_11008e10. Finally builds a material/impact effect struct (vfunc 0x9c). On event 0x111: reads flag via vfunc 0x1b0 and OR's bit 1 back via 0x1ac (enables an aspect/state).*  — server: validation - this is the client-side melee hit-frame trigger that enumerates nearby attackable entities and emits GameOnHit events; the authoritative damage decision lives in the receiving entity's GameOnHit handler and on the server. Server should treat client-emitted GameOnHit as a claim to validate (overlap of attack shape this[0x10]/this[0x12] vs target), not trust it. (conf medium)

**Formulas:**
- hit-shape overlap query: FUN_10b27660(this[0x10], 0, this[0x12], 0, 0xffffffff, 0xffffffff, 0) — this[0x10] and this[0x12] are the attack collision-shape / filter handles
**Protocol fields:**
- `GameOnHit event payload assembled from attack descriptor at this[7]+0xb4: field[0], field+0x10, field+0x14 (attack id + params)`
**Constants:** event id 0x110 = attack hit frame, event id 0x111 = enable-aspect (OR bit 1), GameOnHit event flags 0x4ffff, attack descriptor pointer at this[7]+0xb4, suppress flag at this[7]+0x1d
> Iteration is std::map/set red-black-tree successor walk (offsets [1]=parent,[2]=left,[3]=right,[4]=value). Uses global world/scene manager DAT_1202e818. Client-side attack broadcasting; not the damage math itself.

### MHCombat::BuildAndSendGameOnHit_Variant1  `@0x11014af0`
*Builds a 'GameOnHit' hit-info payload for a specific target and dispatches it. Args: param_1=this (attacker context, this[0xc]=attacker entity), param_2=target entity id, param_3=attack/hit-type token, param_4=extra param. Resolves target via entity-system DAT_1202e818+0x50 vfunc 0x2c(param_2). Early-out if attacker/target null or param_3==0, or if target's component (vfunc 0x288) reports invulnerable (vfunc 0x9c != 0). Computes: (a) attacker origin = bone/attach pos (vfunc 0xd8) if this+0x40 flag set, else attacker world pos (vfunc 0xc8); (b) delta = attackerPos - targetPos (each component sign-flipped via XOR 0x80000000), normalizes it with a fast rsqrt + one Newton-Raphson step; (c) fetches target rotation quaternion (vfunc 0xd0), world pos (vfunc 0xc8), and inverse scale = 1.0/scale (vfunc 0xbc, guarded against 0); (d) rotates the delta and an up-vector into target-local space via quaternion sandwich (q*v*q^-1 expansions), computes the angle between vectors with libm acos, then a half-angle cos/sin to form a hit rotation (via FUN_10abc150). Packs entity ids (local_204=attacker entity id via vfunc+4, local_200=target id, local_1ec/1e8=FUN_10b27fd0(param_3) hit-type), a ±500 unit AABB, and dispatches the 'GameOnHit' event (flags 0x4ffff) to the target's game object (game-object mgr +0x144 lookup -> SendEvent 0x24).*  — server: validation - computes client-side hit geometry (direction/angle/position on target) and reports it as a GameOnHit event to the target. Server must independently verify the attacker->target relationship (range, facing) rather than trust the reported hit vector; the hit-type token (param_3, transformed by FUN_10b27fd0) identifies which attack. (conf medium)

**Formulas:**
- dir = normalize(attackerPos - targetPos): sq = dx*dx+dy*dy+dz*dz + eps; r = rsqrt(sq); r = (1.5 - 0.5*sq*r*r)*r; dir *= r
- invScale = (scale != 0) ? 1.0/scale : 1.0  (from target vfunc 0xbc)
- vector rotate by quaternion q=(x,y,z,w): t = 2*cross(q.xyz, v); v' = v + w*t + cross(q.xyz, t) (standard, expanded inline)
- half-angle hit rotation: theta = acos(dot); cos(theta*0.5), sin(theta*0.5) build axis-angle quaternion; axis scaled by invScale
- AABB extents = [-500, +500] on each axis
**Protocol fields:**
- `local_204: attacker entity id (vfunc+4)`
- `local_200: target entity id (param_2)`
- `local_1ec/local_1e8: hit-type/attack id = FUN_10b27fd0(param_3)`
- `local_a8: param_4 (extra token, e.g. weapon/firemode)`
- `hit position + rotation + ±500 AABB in payload`
**Constants:** DAT_11de9c90 = 0x80000000 (float sign-flip mask for vector negation), DAT_11de9938 = 1.5f, DAT_11de98e8 = 0.5f (rsqrt Newton step: (1.5 - 0.5*x*r*r)*r), DAT_11de9918 = 1.0f, DAT_11de98a0 = squared-length epsilon, DAT_11cbf070 = min squared-length threshold, DAT_11cbf074 = min-length threshold for angle path, 0x43fa0000 = 500.0f (AABB half-extent), DAT_11cc4cc0 = -500.0f, GameOnHit event flags 0x4ffff
> acos via libm_sse2_acos_precise. Nearly identical to FUN_11017ff0; this variant always uses attacker context this[0xc]/this+0x40 as origin.

### MHCombat::BuildAndSendGameOnHit_Variant2  `@0x11017ff0`
*Second overload of the GameOnHit builder (see FUN_11014af0). Same math and payload, differing in origin/defaults: attacker origin entity comes from FUN_11018a00() (fallback to this[0xc] if null) and its entity id is used for local_204; if param_4 == -1 it is replaced by FUN_110189c0() (a default firemode/weapon token). Resolves target via entity-system vfunc 0x2c(param_2), same invulnerability guard (vfunc 0x288 -> 0x9c), same normalize/quaternion/acos geometry, same ±500 AABB, and dispatches 'GameOnHit' (flags 0x4ffff) to the target game object.*  — server: validation - identical role to FUN_11014af0 but with a resolved shooter entity (FUN_11018a00) and default-firemode substitution when param_4==-1. Server should validate the reported hit; the substituted firemode (FUN_110189c0) is the current weapon fire mode. (conf medium)

**Formulas:**
- same normalize/quaternion-rotate/half-angle formulas as FUN_11014af0
- if (param_4 == -1) param_4 = GetDefaultFireMode()  // FUN_110189c0
- attacker origin entity = FUN_11018a00() ?: this[0xc]
**Protocol fields:**
- `local_204: shooter entity id (FUN_11018a00 result, vfunc+4)`
- `local_200: target entity id (param_2)`
- `local_1ec/1e8: hit-type = FUN_10b27fd0(param_3)`
- `local_a8: firemode/weapon token (param_4, -1 => default)`
**Constants:** same float set as FUN_11014af0: 0x80000000 negate mask, 1.5f/0.5f rsqrt, 1.0f, 500.0f (0x43fa0000)/-500.0f, param_4 == -1 sentinel -> default firemode via FUN_110189c0, GameOnHit flags 0x4ffff
> Ranged/projectile-oriented variant (shooter resolved separately, default fire mode). Duplicate of FUN_11014af0 geometry.

### MeleeAttack::QueryTargetsAndEmitGameOnHit  `@0x10c26e50`
*Melee/area attack resolver: runs a physics/proximity query (vtbl+0x288) around the attacker producing up to 100 candidate part-entities (results in local_384[], ids in local_514[]); for each candidate it enforces a per-target hit-count cap (param_1[0xa]) and, when allowed, computes the normalized hit direction (attacker pos param_1[4..6] minus target center) and dispatches a 'GameOnHit' script event (event 0x4ffff via vtbl+0x144 -> +0x24) to that target, tagging self-hit (isSelf = queried root id == hit id).*  — server: validation - this is the CLIENT melee hit-detection geometry: radius/range query + per-target multi-hit cap. An authoritative server must reproduce the same proximity test (center param_1[4..6], radius param_1[7]) and per-target hit cap (param_1[0xa]) to validate claimed hits. (conf medium)

**Formulas:**
- for each hit part: dir = normalize(center - partCenter) with rsqrt (1.5-0.5*\|v\|^2*x*x)*x; if !multiHit or hitCount<cap emit GameOnHit
- isSelf = (m_pThis vtbl+0x2a8 root id) == attackerRootId
**Protocol fields:**
- `param_1[0]=attackerRootId, param_1[1]=?, param_1[4..6]=attack center Vec3, param_1[7]=radius/range`
- `param_1[0xa]=max hits per target (hit-count cap), param_1[0xb]=result capacity(100), param_1[0xc]=results ptr, param_1[0xd]=id-out ptr, param_1[0xe]=event/attack hash`
- `byte param_1+0x26: multi-hit-tracking enabled flag`
**Constants:** candidate buffer capacity = 100 (param_1[0xb]), DAT_11de9890 = min radius/value gate on param_1[7], rsqrt normalize constants 1.5f/0.5f, sign mask DAT_11de9c90, GameOnHit event flags 0x4ffff
> This function is the closest thing in this chunk to authoritative client hit-detection; pairs with FUN_102d9480's hit record. Verify radius/cap semantics against server design.


## combat-npc  (19)

### AISystem::LoadEntityBehaviorTree_Recursive  `@0x10259b80`
*Recursive loader/registrar for CryEngine AI Behavior-Tree assets tied to combat entities. Reads XML-ish node attributes (Parent, BTFile, BTFolder, EntityType, Event, FunBT), and for each child decides handling by entity type. Calls vtable slot (*obj+0xa8)() to get an entity-type id and compares: EntityType 'monster' => type id 1, 'combatnpc' => type id 0xb (11), 'pet' => type id 8. Builds the BT path by concatenating '/Scripts/AI/BehaviorTree/' + folder + name (via string helpers FUN_100b62c0/FUN_100f21e0). Registers event-BT bindings into an array at struct +0x10c..+0x110 (12-byte entries) indexed by an id from FUN_10256f10. Recurses into child nodes (self-call at 0x1025a154).*  — server: client-only (CryEngine AI behavior-tree asset loading / event-BT registration; fx/AI-driver plumbing). The only server-useful datum is the EntityType->typeId mapping: monster=1, combatnpc=11(0xb), pet=8, which likely matches the authoritative entity-type enum used elsewhere in combat. (conf medium)

**Formulas:**
- registry bounds check: index in [0, (this[0x110]-this[0x10c])/0xc); store 12-byte record at this[0x10c] + index*0xc
**Constants:** entity type id: monster=1, combatnpc=0xb (11), pet=8, paths: '/Scripts/AI/EventBT', '/Scripts/AI/BehaviorTree/', attribute keys: Parent, BTFile, BTFolder, EntityType, Event, FunBT, event-BT registry entry size = 0xc (12) bytes at struct +0x10c/+0x110
> Stock CryEngine 3.3.8 AI behavior-tree plumbing (not authoritative combat math). Uses stack-canary DAT_11e11390. Retained here only for the entity-type enum mapping and confirmation that combatnpc is a distinct AI-driven entity class (type 11).

### BTNode_CCombatNpcRotateToPos::DescribeParams  `@0x10aa0760`
*Registers the parameter descriptors (TargetOrientation, RotateAngle, TargetPos) for the CCombatNpcRotateToPos behavior-tree node.*  — server: client-only - BT node schema plumbing. (conf medium)

> Stock BT param-registration idiom (string ctor + FUN_1048b080/170/250).

### BTNode_CCombatNpcRotateToTarget::DescribeParams  `@0x10aa10c0`
*Registers the TargetID parameter for the CCombatNpcRotateToTarget BT node.*  — server: client-only - BT node schema plumbing. (conf medium)


### BTNode_CEnableMoveCollision::DescribeParams  `@0x10aa1800`
*Registers parameters (Living, WithWall, CombatNPCMovCol) for the CEnableMoveCollision BT node.*  — server: client-only - BT node schema plumbing. (conf medium)


### CCombatNPC::ApplyLevelScaledAttributes  `@0x1130f590`
*Fetches this monster's CCombatNPCInfo record (FUN_11419510) and per-instance scale factors at info+0x20/0x24/0x28/0x2c. Uses player hunt rank (CPlayer::GetHuntRankOrCount) to index the 2D CCombatNPCLevelInfo table [rank/step][rank%step]; the level entry holds base ints at +0x14/+0x18/+0x1c/+0x20. Computes scaled attributes and pushes them via setter calls (FUN_113b5110 HP, FUN_1138ce20, FUN_11380be0, FUN_1138cee0). Also names the record via param_1 vtbl+0xac.*  — server: authoritative: server must compute monster HP/attack/etc from level table * per-monster scale. This is the monster stat derivation. (conf high)

**Formulas:**
- attr0 = (int)( (float)levelEntry[+0x14] * scale[info+0x20] )   -> FUN_113b5110  (likely HP/base)
- attr1 = (float)levelEntry[+0x18] * scale[info+0x24]           -> FUN_1138ce20
- attr2 = (int)( (float)levelEntry[+0x1c] * scale[info+0x28] )  -> FUN_11380be0
- attr3 = (float)levelEntry[+0x20] * scale[info+0x2c]           -> FUN_1138cee0
- table index: idx = huntRank - table[+0x30]; row = table[+0x20][idx/table[+0x28]]; entry = row[idx%table[+0x28]]
**Constants:** info+0x20/0x24/0x28/0x2c = scale multipliers, levelEntry+0x14/0x18/0x1c/0x20 = base attrs, table: root+0x20 rows, +0x24 total, +0x28 stride, +0x30 base-rank offset
> Setter FUN targets (HP/atk/def/element) live in other chunks; identify to confirm which attr is which.

### CCombatNPC::GetCachedWeaponEquipId  `@0x114195f0`
*Returns cached value at this+0x2e08; if -1 (uncached), looks up this npc's CCombatNPCInfo record, reads weapon item-id string at record+0x4c, resolves via CEquipInfo::FindByItemIdString, gets its id (vtbl+0x18), caches at this+0x2e08.*  — server: data: monster weapon/equip id resolution (affects attack type/element). Server may need for damage type. (conf high)

**Constants:** cache this+0x2e08, record+0x4c = weapon item-id string

### CCombatNPC::SelectCombatNPCModel  `@10f17270`
*If the entity's damage controller reports actor kind (vtable 0xa8) == 0xb (combat NPC), copies a 2-byte model/variant id from a lookup (FUN_11419510, +200) into this+0xb4 and, if the character slot 2 has a valid entity, fires the script event 'SelectCombatNPCModel' with the resolved data.*  — server: client-only (model/variant selection + script event); the kind==0xb enum is a useful server-side discriminator. (conf medium)

**Constants:** actor kind 0xb = combat NPC; this+0x2d(word) = model/variant id copied from record+200(0xc8)
> Combat-NPC model selection notification. Kind==0xb is the combat-NPC discriminator (compare with kind 0=player,1=monster,2=part seen elsewhere in this chunk).

### CCombatNPC::SetDebugName  `@0x11419690`
*If FUN_11398eb0 true, sets the entity/pet name to 'CombatNpc_%x' formatted with entity id (this+0x4) via CPet::SetName.*  — server: client-only: cosmetic naming. (conf high)

**Constants:** 'CombatNpc_%x'

### CCombatNPCComboInfo::GetRecordByIndex  `@0x10aa4e10`
*Indexed lookup into the CCombatNPCComboInfo data table (found via FindInfoByKey). Standard paged-array accessor: validates index against base (+0x30), page size (+0x28), count (+0x24), returns element from page array (+0x20).*  — server: validation/data - combo-definition table accessor; server needs equivalent combo data if it validates NPC combo chains. (conf high)

**Formulas:**
- idx' = index - table[+0x30]; require 0<=idx'<table[+0x24]; page=table[+0x20][idx'/table[+0x28]]; return page[idx'%table[+0x28]]

### CCombatNPCInfo::GetRecordByIndex  `@0x10aaea10`
*Bounds-checked accessor into the CCombatNPCInfo flat array: valid range 0..((table[+0x18]-table[+0x14])>>2), returns table[+0x14][index].*  — server: data - combat-NPC definition table accessor. (conf high)

**Formulas:**
- count = (table[+0x18]-table[+0x14])>>2; if 0<=index<count return *(table[+0x14]+index*4)

### CCombatNPCInfo::GetRecordByIndex  `@0x114195a0`
*Same 2D-table lookup on CCombatNPCInfo but with explicit index param_1; returns record ptr or 0.*  — server: authoritative: monster config accessor. (conf high)


### CCombatNPCInfo::GetRecordForThisNpc  `@0x11419510`
*Resolves the CCombatNPCInfo config record for the current combat-npc id (id from FUN_1025b060) via the same 2D-table lookup. On failure lazily initializes (FUN_11418540) and returns a default record &DAT_1218fd50.*  — server: authoritative: monster config record accessor. (conf high)

**Constants:** default record DAT_1218fd50, init guard DAT_1218fe20

### CCombatNPCInfo::ParseMonsterConfigXml  `@0x116878f0`
*Large monster/combat-NPC config XML parser. Reads (via bit-guarded interned attribute ids DAT_123889c8/DAT_12388b24/DAT_12388c68) fields into the record: MonsterID@+0x14, InheritFrom@+0x18, MonsterType@+0x20 (1/2/5/6), SpawnAppear flags@+0x6c, LootBone/LootOffset(+0x954/958/95c)/LootRotation@+0x960/LootSize@+0x938, Race@+0x70, ChangeAreaType flags@+0x964 (bit1=..,bit2=..,bit4=..,bit8='GoDown'), CatchCamera@+0x108, CatchCameraPoint@+0x138, CaptureHPPercent@+0x968, BodySize@+0x96c, InterestPointType@+0x974, EmotionAngryTime@+0xa50, AngryDamagePeakValue@+0xa54, EmotionAngryAnimSpeed@+0xa58, SkillSpeed@+0xa5c, RegionMaxTime@+0xa60, RegionMinTime@+0xa64, DistBodySize@+0x930, and misc flags/booleans (NeedShowEvEDmg@+0xa4c, NeedHidePVEDmg@+0xa4d, UseCombatNPCAtkModify@+0xa4e, EnableLemonSystem@+0xa4, MinTag@+0xac, MaxTag@+0xa8, EnterLemonMin/MaxHP@+0xb4/+0xb0, LemonTime).*  — server: authoritative/data: defines monster combat attributes (capture HP%, body size, anger thresholds AngryDamagePeakValue, skill speed, atk-modify flag). Server must load these to drive PvE combat, capture, and rage. Config parse, not runtime math. (conf medium)

**Formulas:**
- LootOffset parsed as 3 atof() -> +0x954,+0x958,+0x95c; LootSize -> +0x938; LootRotation -> +0x960
**Constants:** CaptureHPPercent@+0x968, AngryDamagePeakValue@+0xa54 (rage from damage), EmotionAngryTime@+0xa50, SkillSpeed@+0xa5c, MonsterType values 1/2/5/6, ChangeAreaType 'GoDown' bit=8, UseCombatNPCAtkModify@+0xa4e
> Field->offset map above is the main value. 'AngryDamagePeakValue' = damage accumulation threshold that enrages the monster (server-authoritative).

### CCombatNPCLevelInfo::GetEntryByRank  `@0x1130f850`
*2D-table lookup helper: given a rank/index param_1, returns entry pointer from CCombatNPCLevelInfo (row = base[+0x20][idx/stride], entry = row[idx%stride]) with bounds/base-offset checks. Returns 0 if out of range.*  — server: authoritative: data accessor for monster level scaling table. (conf high)

**Formulas:**
- idx -= t[+0x30]; if 0<=idx<t[+0x24]: return t[+0x20][idx/t[+0x28]][idx%t[+0x28]]
**Constants:** +0x20 rows ptr, +0x24 count, +0x28 stride, +0x30 base offset

### CScriptBind_MHLogicObject::SetContinuousAttackInfo  `@0x110265d0`
*Lua handler for 'SetContinuousAttackInfo'. Reads a parameter table describing a periodic (continuous) area attacker and applies it to the object's MHContAttacker component. Fetches the component by looking up 'MHContAttacker' extension (game-object +0x144 -> 0x18). Reads table fields: bAttackPlayer/bAttackMonster/bAttackPet (bool), fAttackDelta/fAttackTime/fRestTime/fLifeTime (float), vAttackBox/vOffset (vec3), bMoveable/bUseHostile/bUseFixedDir (bool), sAttackName (string, length computed inline). Packs them into a local config struct and passes to the component via vfunc 0x6c, then returns the component's status (piVar6 vfunc 0x2c).*  — server: authoritative - defines a server-driven continuous/periodic AoE attack: who it hits (player/monster/pet), timing (delta/attack/rest/lifetime), volume (box+offset), whether it moves with the owner, hostility filter, fixed direction, and the named attack (sAttackName -> damage table). Server must run this timing/volume logic to produce damage. (conf high)

**Protocol fields:**
- `bAttackPlayer: bool - hit players`
- `bAttackMonster: bool - hit monsters`
- `bAttackPet: bool - hit pets`
- `fAttackDelta: float - initial delay before first tick`
- `fAttackTime: float - active/attacking duration per cycle`
- `fRestTime: float - idle duration per cycle`
- `vAttackBox: vec3 - half-extents of the attack volume`
- `vOffset: vec3 - volume offset from owner`
- `bMoveable: bool - volume follows owner`
- `sAttackName: string - named attack -> damage descriptor`
- `bUseHostile: bool - only hit hostiles`
- `bUseFixedDir: bool - fixed vs owner-relative direction`
- `fLifeTime: float - total lifetime of the attacker`
**Constants:** component name 'MHContAttacker'
> Field readers: FUN_10a690f0 (bool), FUN_10a68f50 (float), FUN_10a69050 (vec3), FUN_10a68fd0 (string). Config applied via component vfunc 0x6c.

### CombatNpc::Constructor  `@0x10bd08a0`
*Trivial CombatNpc ctor: sets self back-pointers (+0x10,+0x14) and initializes an embedded CryString to "CombatNpc".*  — server: client-only - object construction plumbing. (conf high)


### CombatNpc::Destructor_Release  `@0x10bcfb70`
*CombatNpc teardown: sets vtable pointers, detaches the entity's 'CombatNpc' game-object extension (param_1[0x16]/[0x17]) via GetGameObject +0xec activation=3, releases the script/state string at +0x20.*  — server: client-only - CombatNpc game-object extension teardown. (conf medium)

> &PTR_FUN_11ccf8d0 etc are vtables for the CombatNpc extension.

### CombatNpc::Init  `@0x10bcfc00`
*Initializes a CombatNpc game-object extension: acquires the 'CombatNpc' extension, registers RMI/event listeners for opcodes 0x401 and 0x6a9, sets up network-serialized aspects OwnerPlayerID/SelfFSMState, and (on authoritative/dedicated branch DAT_1202e818+0x209) reads owner/state, NpcName, NpcWeaponType and pushes them to the sync layer.*  — server: validation - CombatNpc networked entity setup; OwnerPlayerID/SelfFSMState/NpcName/NpcWeaponType are replicated aspects the server owns. Relevant for spawning/owning summoned combat NPCs. (conf medium)

**Protocol fields:**
- `aspect OwnerPlayerID (init 0xffffffff)`
- `aspect SelfFSMState (init 0xffffffff)`
- `NpcName (string)`
- `NpcWeaponType (int)`
- `RMI/event ids: 0x401, 0x6a9, 0x8a8`
> DAT_1202e818+0x209 = authoritative/dedicated-server flag; the true-branch does the server-side aspect writes.

### RegisterCombatBehaviorTreeNodes  `@0x10a9bc30`
*One-time (guard DAT_12020a88) registration of combat/NPC behavior-tree action nodes with the BT factory: CChangeArea, CSetTimerEvent, CBuffAreaPorcess[sic], CNpcSkillPlay, CNpcStateAbnoraml, CCombatNpcRotateToPos/ToTarget, CBTObjEnableItemListener, CPetExistNearestLedge, CApplyEffect, CShowIcon, CLocalPlayerGotoState, CNpcGetClientTimeTable, CPetAddGroupBuff, CPetApplyGroupEffect, CEnableMoveCollision, CEntityFollowTarget/PursuitTarget, CResetLocomotion, CCommonRotateToPos, CEntityMoveToPosEx, CLMGRotateToPos, CNpcStartCombo/NextCombo/LeaveCombo, CSceneObjectHide, CSwitchMonsterPartDefence, CCheckBattleGround.*  — server: client-only - client BT node factory registration. Node NAMES are useful reference for what NPC combat behaviors exist (CSwitchMonsterPartDefence, CNpcSkillPlay, combo nodes) but the registration itself is client plumbing. (conf high)

> Each entry calls factory-create then a per-node param-descriptor init (e.g. FUN_10aa0760).


## projectile  (6)

### CDmgRangeInfo::ParseAreaDamageXml  `@0x116eeb20`
*Parses area/range-damage (explosion/projectile) config XML into the record. Fields: Timer, TriggerableFx, TriggerableFxScale, ReflectChance, Distance, DistanceExecTimes, DmgRangeID, DefaultExplosionParam, DefaultSpawnParam, DefaultAttackName. Defines timed/repeating area damage, damage-reflect chance, and the default attack applied by the range.*  — server: authoritative/data: defines area-damage timing, ReflectChance (damage reflection probability), execution repeats over Distance, and DefaultAttackName linking to the attack table. Server needs ReflectChance, DmgRangeID, DistanceExecTimes for authoritative area damage. (conf medium)

**Protocol fields:**
- `DmgRangeID`
- `DefaultAttackName (hashed attack id)`
- `ReflectChance (0..1 reflect probability)`
**Constants:** ReflectChance, DistanceExecTimes (repeat count over Distance), Timer, DmgRangeID, DefaultAttackName (-> attack table)
> TriggerableFx/Scale are client FX; ReflectChance/Distance/DmgRangeID are server-relevant.

### CProjectile::DoExplosionAreaDamage  `@10d7d4e0`
*Area-of-effect explosion damage for a projectile. Looks up a CProjectileExplosionInfo record by key (param_2 as index into the slotted manager), iterates its explosion entries (each entry stride 0xb*4=0x2c). For each entry: computes effective radius = entry.radius(piVar7[1]) * projectile scale (owner vtable+0xbc [0]); gets explosion center (param_3[1..3] if *param_3>=3 else projectile position). Then EITHER (mode *param_3<3) runs a PrimitiveWorldIntersection sphere sweep collecting hit actors and applies per-hit damage via FUN_10d7c730, OR (mode>=3) runs an AABB entity query (DAT_1202e818+0x50 vtable 0x50) around center +/- radius and applies damage. Skips already-hit entities (dedup list local_20..local_1c). Emits 'GameOnHit' per hit and triggers 'ProjectileExplode' camera shake.*  — server: authoritative: explosion radius, target selection (sphere/AABB), friendly-fire/part filtering, and per-target damage application must be reproduced server-side. The GameOnHit emission and camera shake are client presentation but the hit set + FUN_10d7c730 damage must be authoritative. (conf medium)

**Formulas:**
- effective damage radius: param_2 (=entry.value piVar7[1]) *= projectile->GetScale() (owner vtable 0xbc, first float) when owner exists
- explosion center: (*param_3 < 3) ? projectile world pos (owner vtable 0xC8) : param_3[1],param_3[2],param_3[3]
- AABB query box (mode>=3): min = center - radius, max = center + radius on all axes (local_58/local_4c built as center-/+param_2)
- hit facing vector (mode>=3 damage dir) from target quaternion q(pfVar5[0..3]): dir.x=(q.x*q.y - q.z*q.w)*2, dir.y=(q.w*q.x + q.z*q.y)*2, dir.z=(q.w^2+q.y^2)*2 - 1  (standard quat forward/up column, factor DAT_11de9990=2)
- hit surface distance dir (mode<3): d = targetPos - projectilePos, then normalize(d) via rsqrt Newton-Raphson (1.5 - 0.5*\|d\|^2*e*e)*e
**Protocol fields:**
- `FUN_10d7c730(hitCtx, targetObj, entry.attackNameId(local_14[10]), hitPointIdx, &dir, surfaceId, 0) is the per-victim damage-apply call carrying attackName id local_14[10]`
**Constants:** collision filter local_c: 0xa10 default, 0xa18 if target is a monster/part-based (g_EnableMonsterPartBasedAttack cvar enabled or vtable 0x1c8 state), 0xf10 otherwise -- selects hittable geometry class for PrimitiveWorldIntersection, 0x4000 = intersection flag arg to FUN_10a797c0, ProjectileExplode camera-shake params: 0x3f800000=1.0 (amount), 0x3f4ccccd=0.8 (x2), 0x3f000000=0.5 (x2) = shake magnitude/frequency tuple, DAT_11de9990 = 2.0f (quaternion->direction basis factor), DAT_11de9918 = 1.0f, 0x11d = material/surface-type filter id passed to FUN_10a797c0, entry stride 0xc per radius sample; entry loop stride local_14+0xb ints (0x2c bytes)
> AoE damage core. The actual scalar damage per victim is applied inside FUN_10d7c730 (uses entry.value param_2 as damage/impulse). Radius scaling by projectile scale is the load-bearing arithmetic here. Two query modes (sphere primitive sweep vs AABB entity list).

### CPveDamageChecker::HandleProjectileEffect (Security code 7)  `@11062220`
*Validates a client 'HandleProjectileEffect' (projectile impact) report. Looks up the projectile in this+0x20 tree, resolves the projectile entity, computes an allowed positional deviation from ProjDeviation, special-cases bow projectile ids (BowIgnoreProjectileIDStart..End) to skip a check, verifies the impact against the projectile's launch/skill data, and counts attempts. On success increments this+0x60; on failure logs '[Security]PveDamage error code 7' and sanctions FUN_114811e0(param_7,7).*  — server: validation (conf low)

**Formulas:**
- allowedDeviation = DAT_11de9918 + (float)ProjDeviation / DAT_11de9a30 (when cvar present, else DAT_11de9918)
**Protocol fields:**
- `param_2: projectile id (u32) — key into this+0x20 tree`
- `param_5: impact info struct (param_5[0]=hit type 0/1 direct; param_5[1..3]=impact pos vec3; param_5[3]=extra; param_5[0xd]=surface/target ptr)`
- `param_7: sanction handle -> FUN_114811e0(handle,7)`
**Constants:** DAT_11de9918 (base projectile deviation), DAT_11de9a30 (deviation divisor, ~100.0f)
> this+0x5c = projectile-effect attempt counter, this+0x60 = validated counter. Bow ignore range read via BowIgnoreProjectileIDStart/End cvars; matched against projectile id (FUN_113f2660 -> +0x10). DAT_11df9d70 is a log-throttle counter for the 'no projectile entity' spam case.

### CPveDamageChecker::VerifyProjectileLaunchCount (Security code 7)  `@11062a30`
*Rate-limits projectile launches. For launch types other than 2 and 1, decrements a per-checker launch-count budget at this+0x38; if it goes below 0 the launch is rejected with '[PveDamageChecker][7][Projectile]projectile verify launch count failed' (returns 0).*  — server: validation (conf high)

**Formulas:**
- if launchType(desc+0x4c) not in {1,2}: this+0x38 -= 1; if this+0x38 < 0 -> invalid (code 7)

### CPveDamageChecker::VerifyProjectileLaunchPosition (Security code 6)  `@110627a0`
*Verifies the projectile's claimed launch position is within ProjLaunchDist of the shooter's current position. For launch type 0: valid if 3D distance < tolerance^2 where tolerance = ProjLaunchDist/DAT_11de9a44; weapons whose name contains 'HeavyShandan' get tolerance *= (1+DAT_11de9990). For launch type 5: 2D (xy) distance must fall inside a ring [min,max] around DAT_11cc4180/DAT_11cbf0b8 adjusted by ProjLaunchDist. On failure logs '[PveDamageChecker][6][Projectile]projectile verify launch position failed'.*  — server: validation (conf medium)

**Formulas:**
- type0: tol = (float)ProjLaunchDist / DAT_11de9a44 (0 if cvar missing); if weaponName contains 'HeavyShandan': tol = tol + tol*DAT_11de9990; valid if sqrt(dx^2+dy^2+dz^2) < tol*tol
- type5: d2 = sqrt(dx^2+dy^2); upper = DAT_11cc4180 + ProjLaunchDist/DAT_11de9a44 ; lower = DAT_11cbf0b8 - ProjLaunchDist/DAT_11de9a44 ; valid if d2 < upper && lower < d2
**Constants:** DAT_11de9a44 (~100.0f ProjLaunchDist divisor), DAT_11de9990 (HeavyShandan bonus ratio), DAT_11cc4180 (type-5 ring center/max base), DAT_11cbf0b8 (type-5 ring min base), DAT_11de9918 (z offset)
> Launch pos from FUN_113f2530 (float3), shooter pos from ctx+0x1c vt+0x30. Z uses +DAT_11de9918 offset. Weapon name from ctx+0x1c->+0x14->+0x48->+0xd4 via strstr.

### CPveDamageChecker::VerifyProjectileLaunchType  `@110626d0`
*Projectile launch-type verification helper. Reads the projectile's launch descriptor (FUN_113f2520) and its type field at +0x4c and switches: type 0/5 require the shooter entity id to match the player's controlled entity; type 1/6 always valid; type 2 -> skill-fail path; type 3/4 -> FUN_11062c20 check; unknown -> log 'launch type unknown'. On failure logs '[PveDamageChecker][5][Projectile]projectile verify skill failed'. Returns 1 valid / 0 invalid.*  — server: validation (conf medium)

> Launch type at descriptor+0x4c. Shooter obtained via ctx+0x1c ->+0x14 ->+0x48 ->+0x18. Feeds error-code-5/6 projectile validation in FUN_11061f30.


## status  (5)

### CActor::AccumulateInjuryAndSetInjuryLevel  `@10f80770`
*Accumulates injury from a hit and classifies injury level. Looks up the CDamageInfo record (param_3 index into manager), and if FUN_10facec0 validates, adds record+0x19c (injury/rage value of this attack) to this+0x228 (accumulated injury). Then compares accumulated injury against 3 threshold accessors (FUN_116db630/640/650) to set this+0x220 (and mirror +0x224) to injury level 1/2/3.*  — server: authoritative: injury accumulation and level thresholds drive stagger/part-break/enrage state that the server should own. Server must reproduce this += record[0x19c] and the t1/t2/t3 comparison. (conf high)

**Formulas:**
- this+0x228 += record[0x19c]
- level = (accum < t1 \|\| accum < t2) ? 1 : (accum < t3) ? 2 : 3   (note: t1 and t2 both checked, level 1 if below either)
- this+0x224 = this+0x220 (mirror)
**Constants:** record+0x19c = per-attack injury/stagger value, this+0x228 = accumulated injury total; this+0x220/0x224 = injury level output (1,2,3), thresholds: t1=FUN_116db630, t2=FUN_116db640, t3=FUN_116db650
> This is the stagger/injury/rage tier calculation. The three thresholds gate level 1/2/3. record[0x19c] is the attack's injury contribution — a concrete server-relevant value from the damage record.

### CActor::OnHitDeathReactionInterrupted  `@10c6ef90`
*When an actor's death-reaction/hit-reaction state (this+0x54) is 0 or 1, copies a value (this+0x3c) into an event object (+0x24) and, if the global flow-node system is enabled (DAT_1202e818+0x16c) and the actor is not in a blocking state (vtable 0x1c4 false) and has a valid script table (vtable 0x134), fires the flowgraph event 'OnHitDeathReactionInterrupted'.*  — server: client-only (flowgraph/script notification for animation state). (conf medium)

**Constants:** this+0x54 == 0 \|\| 1 gate; this+0x3c = payload copied to event+0x24
> Notifies scripts that a death/hit reaction animation was interrupted.

### CActor::SelectHitReaction  `@10fd48b0`
*Chooses the hit reaction/knockback response for an incoming hit. If actor is dead/knocked (health vtable 0x304 <= 0) picks a death path. Otherwise: reads the hit's CDamageInfo record (param_3[0x4e] index) and sets a 'force big reaction' flag if record+0x194 (>0, has forced reaction) AND incoming damage *param_3 > DAT_11de9890 threshold. Then dispatches one of: FUN_10fd54e0 (impulse-only reaction, using impulse vector param_3[0x6a..0x6c]), FUN_10fd51c0 (directional reaction with dir param_3[0x10]), or FUN_10fd6170 (scripted reaction when param_3[0xf] > 0).*  — server: validation/authoritative-adjacent: reaction selection is client-side animation, but the damage>threshold and record.forcedReaction logic mirrors server stagger decisions; server may replicate to stay authoritative on flinch/knockback. (conf medium)

**Formulas:**
- bigReaction = (record[0x194] > 0) AND (incomingDamage(*param_3) > DAT_11de9890)
- reaction dispatch precedence: forced-big -> directional(FUN_10fd51c0 with param_3[0x10]) -> scripted(FUN_10fd6170 if param_3[0xf]>0) -> default impulse(FUN_10fd54e0)
**Constants:** param_3[0x4e] = damage-info record index; record+0x194 = forced-reaction flag (>0), DAT_11de9890 = damage magnitude threshold that qualifies a hit for a forced big reaction, param_3[0x6a..0x6c] = impulse/knockback direction Vec3; param_3[0x10] = hit direction id; param_3[0xf] = reaction-type count (>0), param_3[0] (*param_3) = incoming damage amount
> Hit-reaction/flinch selection. The damage-vs-threshold gate (DAT_11de9890) deciding forced reactions is combat-relevant. Impulse vector at param_3[0x6a..0x6c].

### CGameRules::ClientProcessHitReaction  `@10c38390`
*Master client-side hit-application/reaction pipeline for one hit. Resolves attacker (param_1[0]), victim (param_1[1]) and a 3rd actor (param_1[0x4a]) via the entity->actor manager (DAT_1202e818+0x50 vtable 0x2c), fetches their CDamageInfo controllers (vtable 0x288), gates on actor kind (vtable 0xa8 returns 0=player/1=monster/other) and blend state (vtable 0x180), then builds hit context and applies the reaction/animation blend. Emits a sequence of anim/effect events with ids 0xc1e,0xc1f,0xc20,0xc21,0xc22,0xc23 via FUN_10c38d30. Core damage/impulse work is delegated to FUN_1142b1a0 and FUN_10c393e0; final impulse vector written back to caller out-param param_8[0..2].*  — server: validation/authoritative-adjacent: this is the client reaction driver, but it is the entry that consumes the server/GameRules hit record and calls the shared damage-info evaluator (FUN_1142b1a0). Server must reimplement the FUN_1142b1a0 math it feeds; the reaction/anim event emission (0xc1e-0xc23) is client-only. (conf medium)

**Formulas:**
- damping/speed select: local_314 = (param_9 >= DAT_11de9a58) ? param_9 : attacker->GetSpeed() (vtable+0x50); passed into FUN_1142b1a0 alongside firemode(param_1[0x57]), hit-id(param_1[0x12]) and hit position (param_1[0x1a],[0x1b],[0x1c] copied to local_28/24/20)
- if victim is player (vtable 0xa8 == 0): copy computed hit position local_28/24/20 into local_150/14c/148 and out param_8[0]=local_28, param_8[1]=local_24, param_8[2]=local_20 (impulse/knockback direction result)
- no closed-form damage number here; magnitude computed inside FUN_1142b1a0 (see chunk covering 0x1142b1a0) using local_2f8 result struct and local_400 damage-info buffer (memset 0x108 bytes)
**Constants:** 0xc1e/0xc1f/0xc20/0xc21/0xc22/0xc23 = hit-effect / animation event ids passed to FUN_10c38d30, DAT_11de9a58 = damping/velocity threshold: if (param_9 >= DAT_11de9a58) local_314=param_9 else local_314 = attacker-speed (local_8 vtable 0x50), 1.4013e-45 = 0x00000001 reinterpreted as float (a boolean/enum flag, not a real magnitude) used at param_9 compare and local_2bc gate -> FUN_1139cdb0(0x1e)/FUN_1139c8d0(0x1e)
> Reads param_1 struct heavily: [0]=attackerId,[1]=victimId,[3]=weapon/thirdActorId,[4]=?,[0x12]=hitInfo/hashId,[0x1a..0x1c]=hit world position,[0x48]=?,[0x49],[0x4a]=3rd actor,[0x4c]=count(>0 gates FUN_10b27fa0),[0x57]=fireMode. local_18 vtable calls 0x338/0x33c are the per-actor 'apply hit reaction' handlers. This is the ORCHESTRATOR; the authoritative arithmetic lives in FUN_1142b1a0/FUN_10c393e0.

### CGrabHandWeapon::Serialize  `@10ee5920`
*Network/save serialization of a grab/hold weapon state. Serializes fields: m_lastFireModeId(this+0x4b4), m_usable(0x550), m_currentState(0x568), m_preHeldEntityId(0x4d4), m_startPickUp(0x52f), m_heldEntityId(0x4d0), m_constraintId(0x518), m_grabType(0x4cc), m_grabbedNPCSpecies(0x520), m_killTimeOut(0x528,float), m_effectRunning(0x52d), m_grabbedNPCInitialHealth(0x530,float), m_prevMainHandId(0x574), m_holdScale(0x50c,float). On reading (vtable 0x20 true) if heldEntityId changed, resets grab visuals/physics flags on the previously held entity.*  — server: authoritative/validation: these fields are network-serialized state the server tracks (which NPC is grabbed, its initial health, grab type, kill timeout). Server must own this state. (conf high)

**Protocol fields:**
- `m_heldEntityId (EntityId, vtable 0x44)`
- `m_grabbedNPCSpecies (u32/short, vtable 0x54)`
- `m_grabbedNPCInitialHealth (float, vtable 0x70)`
- `m_killTimeOut (float, vtable 0x70)`
- `m_currentState (u32, vtable 0x54)`
- `m_grabType (EntityId/enum, vtable 0x44)`
- `m_holdScale (float, vtable 0x68)`
**Constants:** offsets: 0x4b4 lastFireModeId, 0x4cc grabType, 0x4d0 heldEntityId, 0x4d4 preHeldEntityId, 0x50c holdScale(float), 0x518 constraintId, 0x520 grabbedNPCSpecies, 0x528 killTimeOut(float), 0x52d effectRunning, 0x52f startPickUp, 0x530 grabbedNPCInitialHealth(float), 0x550 usable, 0x568 currentState, 0x574 prevMainHandId
> The grab/capture mechanic serialization. Useful struct map for the grab-hand weapon; server must track heldEntityId, grabbedNPCSpecies, grabbedNPCInitialHealth for the capture/kill mechanic.


## buff  (2)

### BuffArea::BuildGameOnHitEvent  `@0x10bc94c0`
*BuffArea variant of the GameOnHit builder: resolves source (param_1+0x44) and target (param_2+8) entities, computes normalized direction between them, derives impact rotation (same acos+half-angle math as FUN_10b255c0), and dispatches 'GameOnHit' (via vtbl+0x144 -> +0x24) to the target with a 'BuffArea' event-name hash.*  — server: client-only - buff-area hit visual/GameOnHit emission. Confirms buff areas route through the same GameOnHit path with a BuffArea tag. (conf medium)

**Formulas:**
- dir = normalize(targetPos - sourcePos); impact rotation = half-angle(cos/sin) of acos(dot)
**Constants:** same as FUN_10b255c0: rsqrt 1.5/0.5, sign mask DAT_11de9c90, region 500.0f, event name hashes via FUN_10b27fd0("BuffArea") and FUN_10b27fd0(param_3)

### CLogicBuffArea::ReadPropertiesFromXml  `@0x10bc9f20`
*Parses a BuffArea entity's XML Properties into its runtime struct (param_1[0x10]): SkillInfo{b_HaveSkill, s_i_SkillID(atoi), i_SkillLv, AttackName}, BuffInfo{i_BuffID, f_LifeTime, f_CheckDelta, b_Continous, b_InitEnable->SetEnable, b_EnterTrigger, b_LeaveTrigger, b_EnterAdd, b_LeaveAdd, b_NeedRemove}, TriggerInfo{b_UseBox, vBoxParam}.*  — server: validation/authoritative - defines buff-area semantics (skill id, buff id, lifetime, tick delta, enter/leave add/remove). The server needs these fields to apply/validate area buffs; struct offsets given. (conf high)

**Protocol fields:**
- `obj+0x18c: b_HaveSkill (byte)`
- `obj+0x184: s_i_SkillID (int, atoi)`
- `obj+0x188: i_SkillLv (int)`
- `obj+0x170: i_BuffID (int)`
- `obj+0x178: f_LifeTime (float)`
- `obj+0x16c: f_CheckDelta (float, tick interval)`
- `obj+0x168: b_Continous (byte)`
- `obj+0x1a8: b_EnterTrigger, +0x1a9: b_LeaveTrigger, +0x1aa: b_EnterAdd, +0x1ab: b_LeaveAdd, +0x1ac: b_NeedRemove (bytes)`
> obj = param_1[0x10] (the CLogicBuffArea logic component). AttackName resolved via FUN_11415410 (name-hash).


## other  (39)

### CFlowNode_MHOnHitResult::Init  `@0x11010ab0`
*Flow-graph node initializer for the 'MHOnHitResult' node. Copies host/graph pointers into this (+4=graph, +0xc=node ctx from param+0xc, +8), registers the node with the flow system (DAT_120286c8 vtable +0x154), calls FUN_1101f970, then if graph feature vfunc(0x150)(2)->0x38 is nonzero it caches two interned string handles 'MHOnHit...' (this+0x2c) and 'MHOnHitResult' (this+0x30) via FUN_10a68b10. Returns 1.*  — server: client-only - CryEngine flow-graph (visual scripting) node setup for surfacing hit results in the editor/UI. No damage math. (conf medium)

**Constants:** string 'MHOnHitResult', string 'MHOnHit...' (PTR_s_MHOnHit_11d07ebb)
> Standard IFlowNode plumbing customized for MH hit-result event routing.

### CFlowNode_MHOnHitResult::ProcessEvent  `@0x11011110`
*Flow-graph node event handler. On event type 3 (eFE_Uninitialize/cleanup): releases the two cached string handles at this+0x2c and this+0x30 via string-table release (DAT_1202e818+0x30 vtable +0x60). On event type 5 (eFE_Initialize/activate): if graph feature (vfunc 0x150(2)->0x38) is active, re-acquires the 'MHOnHit...' (this+0x2c) and 'MHOnHitResult' (this+0x30) string handles.*  — server: client-only - flow-graph node lifecycle (visual scripting). No damage math. (conf medium)

**Constants:** event type 3 = cleanup, event type 5 = init/activate
> Pairs with FUN_11010ab0.

### CFlowNode_OnHit::GetConfiguration  `@10eb4d30`
*One-time init of a flowgraph node descriptor: single OnHit trigger input; outputs Health/GreenHealth(float)/RedHealth(float). Flag 0x20 (approved/entity node).*  — server: client-only (flowgraph node definition); note the GreenHealth/RedHealth split as a data-model hint for HP. (conf high)

**Constants:** GreenHealth/RedHealth port type 2 = float; Health type 1 = int
> Flowgraph OnHit node exposing target Health/GreenHealth/RedHealth. Green vs Red health is the MHO two-layer HP model (recoverable green / lost red), but no math here.

### CFlowNode_QueryEntities::GetConfiguration  `@10e943d0`
*One-time init of a flowgraph node descriptor for an area entity query: inputs ClearOutput/inside(bool)/ignoreHeight(bool)/maxOut(int)/player(bool)/monster(bool)/combatNPC(bool); outputs GetSuccess/GetFailed/ClearDone/OutputComplete/outNetID(int).*  — server: client-only (flowgraph node definition). (conf high)

> Flowgraph node config for spatial entity queries filtered by player/monster/combatNPC.

### CFlowNode_RemoveEntity::GetConfiguration  `@10e377e0`
*One-time init of a flowgraph node descriptor: input Remove + netID(int), output ports monsterOk/collectPointOk/combatNPCOk(bool) and success. Registers with FUN_11a8911f.*  — server: client-only (flowgraph node definition). (conf high)

> Flowgraph node config referencing monster/collectPoint/combatNPC removal outcomes. Editor/script plumbing.

### CFlowNode_Weapon::GetConfiguration  `@10e10460`
*One-time init of a flowgraph node port descriptor for a Weapon node: input ports Enable/Disable/OnWeaponChange/OnFiremodeChange/OnShoot/OnZoom/OnReloaded/OnOutOfAmmo/OnStartFire/OnStopFire and output ports WeaponId/WeaponName/IsMelee/AmmoType/AmmoName/MaxAmmo/AmmoPool/Spread/Zoomed/ZoomMode/ZoomName/CurrZoomStep/MaxZoomStep (with port type codes 1=int,2=float,3=entity,5=string,6=bool).*  — server: client-only (flowgraph/editor node definition). (conf high)

**Constants:** port type codes: 1=int,2=float,3=EntityId,5=string,6=bool; flags 0x11 set on param_1[2]
> Stock CryEngine flowgraph node config (weapon FG node). No combat logic.

### CItem::ParseAccessoryFiremodeActions  `@10cce380`
*Parses an item accessory XML node: requires 'attach' and 'detach' sub-nodes, interns their action/helper/layer attrs, reads the 'firemodes' string list, splits it, and for each firemode name interns it and appends to a vector at this+0x1c. Also reads switchToFireMode/zoommode actions and the bool flags 'exclusive'->this+0x28 and 'client_only'->this+0x29, stores 'params' node ptr at this+0x24.*  — server: client-only (item accessory config parsing). (conf medium)

**Constants:** this+0x28 = exclusive flag, this+0x29 = client_only flag, this+0x24 = params node, this+0x1c/0x20 = firemode-name vector begin/end
> Item accessory/firemode XML parsing; the client_only flag is notable but this is config parsing, not runtime damage.

### CItem::PlaySelectActionAndTransition  `@10f596e0`
*Weapon select/holster transition driver. Guards against busy state (this+0x18 +0x108/+0x105 flags), resolves the target action set (FUN_10fb8160 by params), runs pre/post action callback lists, plays the fragment/animation via the item character (vtable 0x600/0xfc), handles CarryEgg / PLInjurySignal / Unholstered special cases, and on transition failure sets state 6 and logs 'TransitionError:%d'. Returns success bool.*  — server: client-only (weapon animation/action transition state machine). (conf low)

**Constants:** error code 6 = transition failure (this+0x10=6, 'TransitionError:%d'), action ids 7/8/9 = failure reasons passed to FUN_10f5c5d0, 'CombatNPC' default action-set name
> Large animation/action-transition state machine for weapon select. Mostly client presentation with script callbacks; the error codes 6/7/8/9 are internal, not network.

### CItem::PreloadFiremodeXmlModels  `@10ddeef0`
*For a given weapon class id (param_2), enumerates the class's ammo/firemode name list and builds 'Scripts/Entities/Items/XML/Weapons/<name>_firemode.xml' path strings, dedups against an already-loaded list (this+0x50), and preloads each via CInfoRecord::GetModelString.*  — server: client-only (firemode XML asset preloading). (conf medium)

> Weapon firemode XML preloading. String assembly + dedup. Config/asset plumbing.

### CItem::SelectFireModeByNameOnAttachedItems  `@0x11102000`
*Iterates the entity's attachment/child items (rbtree at this+0x34/0x36). For each, gets its script table 'firemodes' collection (vtbl+0x284 -> +0x24 -> +0x58 'firemodes'), and for each firemode compares its DAT_11dbac80 (name) and DAT_11dca14c (alias) attributes to param_3 (requested mode name) with _stricmp; on match calls param_2 vtbl+0x2c (select). Sets flags: local_6=1 if attachment id matches weapon slots DAT_1202f450+0xd4/0xd8; result stored this+0x10f.*  — server: client-only: weapon attachment fire-mode selection driven by name strings. Server tracks mode by index/hash, not this UI walk. (conf medium)

**Constants:** DAT_11dbac80 = 'name' attr, DAT_11dca14c = alias attr, DAT_1202f450 = actor/weapon manager

### CItemAnimationTable::RegisterActionNames  `@10cb3320`
*Zero-initializes a 0x3d-slot table (DAT_1202f450) and interns ~60 weapon/item animation action name strings (activate, begin_reload, cannon, change_firemode, reload_shell, select, zoom_in/out, swim_*, etc.) via the string-atom function FUN_10ab4370.*  — server: client-only (animation action name table). (conf high)

> Pure animation-action name registry initialization. CryEngine item-system plumbing.

### CItemFsm::ApplyWeaponAvatarModel  `@0x10bec410`
*Third avatar/firemode loader variant: resolves CAvatarInfo by id, and either applies a resolved sub-record model (FUN_10ad9880 with param_4 avatarid whose record+0x14==1) or manually builds and loads the .fxparams / WE99FSMStates.xml / _firemode.xml model strings for slots +0x2c/+0x44/+0x6c.*  — server: client-only - weapon avatar model + firemode visual loading. (conf medium)


### CItemFsm::LoadWeaponAvatarFireMode  `@0x10ae4c50`
*Loads/applies a weapon or avatar visual by id: resolves CAvatarInfo record, picks male/female variant, loads .fxparams, WE99FSMStates.xml FSM, and /Scripts/Entities/Items/XML/Weapons/<name>_firemode.xml. Branches on param_3 slot range (0x1e..0x2b weapon avatar vs <8 equip slots).*  — server: client-only - character/weapon model + firemode XML loading (visuals/FSM). (conf medium)

> Heavy CryString refcount plumbing; error string 'Can not find avatar info...'.

### CMonsterHitEffectTable::LoadMaterialEffectPaths  `@10dc27f0`
*Populates the monster hit-effect resource tables: loads dozens of MaterialEffects XML paths (KnifeFlash normal/crit/awaken/ncrit, Blood normal/skill per material metal/hide/bone/scale/stone/slippy/fur/wood/shell01-04/noblood, Spark per material, PiyoAttack, AttrDamage normal/lower/higher, SpecialAttack, WeaponHitSound per material, scale-base/ext variants, TimeDelay, MerchantWeaponEffect) and stores the resolved effect ids into arrays at this+0x18/0x48/0x54/0x84/0x90/0x9c/0xb4 etc.*  — server: client-only (hit blood/spark/sound/knife-flash effect resource loading). (conf high)

**Constants:** 14 (0xe) material variants per effect category; 3 variants for AttrDamage/SpecialAttack (normal/lower/higher)
> Pure client visual/audio effect resource table construction. The normal-vs-crit and lower/normal/higher(attribute) split is interesting for understanding damage classification but no math here.

### CPetFsm::LoadWeaponAvatarFireMode  `@0x10ae6470`
*Pet/companion variant of the avatar+firemode loader: resolves CAvatarInfo and CPetAvatarInfo records, builds the _firemode.xml path, applies model strings for three material/mesh slots (+0x18/+0x30/+0x58 with data at +0x2c/+0x44/+0x6c).*  — server: client-only - pet model/firemode visual loading. (conf medium)


### CScriptBind_Actor::RegisterMethods  `@0x1102bc00`
*Constructor/registrar for the Actor Lua script bind (CryEngine CScriptBind_Actor, MH-extended). Sets vtable PTR_FUN_11d094f0, builds the method table (this[0x11]) and registers ~65 actor methods via table vfunc 100 (name, argSpec, thunk-label).*  — server: authoritative - registration is client plumbing, but the registered verbs are the authoritative actor/damage surface. Combat-relevant registered methods: DamageInfo, SetHealth/GetHealth/GetMaxHealth/SetMaxHealth, GetArmor/GetMaxArmor, GetFrozenAmount/AddFrost, Revive/Kill, RagDollize, AttachVulnerabilityEffect/ResetVulnerabilityEffects/GetCloseColliderParts (hit-zone parts), SetStats/SetParams/GetParams. Actual handlers live elsewhere. (conf high)

**Protocol fields:**
- `registered actor verbs incl. DamageInfo, SetHealth, GetHealth, GetMaxHealth, GetArmor, GetMaxArmor, GetFrozenAmount, AddFrost, Kill, Revive, RagDollize, GetCloseColliderParts, AttachVulnerabilityEffect`
> Standard CryEngine actor scriptbind, mostly stock plumbing; MH additions are frost/vulnerability/collider-part helpers. Handlers not in this chunk. Full verb list: DumpActorInfo, SetViewAngleOffset, GetViewAngleOffset, Revive, Kill, RagDollize, SetStats, SetParams, GetParams, GetHeadPos, GetHeadDir, PostPhysicalize, GetChannel, IsPlayer, IsMonster, IsPet, IsDead, IsLocalClient, LinkToEntity, GetLinkedVehicleId, LinkToVehicle, LinkToVehicleRemotely, IsGhostPit, IsFlying, SetAngles, GetAngles, AddAngularImpulse, SetViewLimits, PlayAction, SimulateOnAction, SetMovementTarget, CameraShake, SetViewShake, VectorToLocal, EnableAspect, SetExtensionActivation, SetExtensionParams, GetExtensionParams, SetMovementControlledByAnimation, EnableFade, Set/Add/GetInventoryAmmo, SetHealth, DamageInfo, SetMaxHealth, GetHealth, GetMaxHealth, GetArmor, GetMaxArmor, GetFrozenAmount, AddFrost, Set/GetPhysicalizationProfile, GetClosestAttachment, AttachVulnerabilityEffect, ResetVulnerabilityEffects, GetCloseColliderParts, QueueAnimationState, ChangeAnimGraph, CreateCodeEvent, GetCurrentAnimationState, SetAnimationInput, TrackViewControlled, Set/GetSpectatorMode, GetSpectatorTarget.

### CScriptBind_HitReaction::Register  `@1104bc00`
*Constructs a ScriptBind object and registers Lua-callable methods for the hit/death reaction subsystem: OnHit, ExecuteHitReaction, ExecuteDeathReaction, EndCurrentReaction, StartReactionAnim, EndReactionAnim, IsValidReaction, StartInteractiveAction. Each call at vtable+0x64 registers a native function pointer (FUN_1104bf80 etc.) under a name+arg-signature string. this[0x11]=script system, this[0x12]=game framework, this[0x15]=arg2, this[0x16]=arg3.*  — server: client-only (conf high)

> Stock CryEngine IScriptSystem::RegisterFunction plumbing (vtable slot 0x64 = RegisterFunction). Reaction handlers are visual/anim; server does not run this Lua binding. Method table pointer PTR_FUN_11d0b914.

### CScriptBind_InteractiveEntity::RegisterMethods  `@1104dea0`
*Registers Lua methods for an interactive/usable entity (item, mountable, ballista-like object): SetExtensionActivation, SetExtensionParams, GetExtensionParams, GetStats, GetParams, Reset, Quiet, Select, CanPickUp(userId), CanUse(userId), IsMounted, PlayAction(actionName), GetOwnerId, StartUse/StopUse/Use/IsUsed(userId), GetMountedDir, Get/SetMountedAngleLimits(min_pitch,max_pitch,yaw_range), OnHit(hit), IsDestroyed, OnUsed(userId), GetHealth, GetMaxHealth. Reads script system from this+0x44, RegisterFunction via vtable+0x64.*  — server: client-only (conf high)

> Stock ScriptBind registration table. GetHealth/GetMaxHealth/OnHit imply the object has a health/hit model but the damage math lives in the native handlers (not in this chunk). Registration only.

### CScriptBind_MHLogicObject::RegisterMethods  `@0x110219a0`
*Constructor/registrar for the MH scene-logic-object Lua script bind. Sets vtable PTR_FUN_11d089a0, grabs the script system (param_2 vfunc 0xfc) and creates two script tables (this[0x11] methods table, this[0x14]). Registers a large table of Lua-callable methods, each via table vfunc 100 with (name, argSpec, thunk). Also registers named float constants into the type table (param_1[0x12] vfunc 0x70).*  — server: authoritative - registration is client scripting plumbing, BUT it exposes the authoritative MH combat verbs and, critically, the attack-flag enum values the server must interpret. Handlers of interest: MHExplode(radius, friendFire, attackName), MakeDamageTo, ShootProjectile(paramTable), SetContinuousAttackInfo(paramtable -> FUN_110265d0), StartAttack(bStart), SetReceiveAttackType/Flag, EnableAttackType(attackType), SetPlayerCanAttack/SetMonsterCanAttack/SetNPCCanAttack/SetPetCanAttack(enable), SetFaction/GetFaction, SetDamageTag, SetBuffAreaEnterDamage. (conf high)

**Protocol fields:**
- `MHExplode args: radius, friendFire, attackName`
- `MakeDamageTo (no arg spec captured)`
- `ShootProjectile args: paramTable`
- `SetContinuousAttackInfo args: paramtable`
- `SetReceiveAttackType args: spAttackType`
- `SetReceiveAttackFlag args: flagTable`
- `EnableAttackType args: attackType`
- `SetDamageTag args: sTag`
- `SetBuffAreaEnterDamage args: sBuffAreaEnterDamage`
**Constants:** ObjAF_Normal_Short = 1.0 (0x3f800000), ObjAF_Shake_Gournd = 2.0 (0x40000000), ObjAF_Rush = 4.0 (0x40800000), ObjAF_FlyObj = 8.0 (0x41000000), ObjAF_AttackDropTrap = 16.0 (0x41800000), ObjAF_AttackParaTrap = 32.0 (0x42000000), ObjAF_BreakBarrier = 64.0 (0x42800000)  [these are a bitmask], OAF_NormalShort = 0, OAF_ShakeGround = 1.0, OAF_Rush = 2.0, OAF_FlyObj = 3.0 (0x40400000), OAF_DropTrap = 4.0, OAF_ParaTrap = 5.0 (0x40a00000), OAF_BreakBarrier = 6.0 (0x40c00000)  [enum index], SimpleAction_Enable=0, _Disable=1.0, _Hide=2.0, _UnHide=3.0(0x40400000), ScriptState_OnEvent = 4.0 (0x40800000), ScriptState_OnDamage = 5.0 (0x40a00000)
> Method thunks live at FUN_11025300 (MHExplode), FUN_11025490 (MakeDamageTo), FUN_11025830 (ShootProjectile), FUN_110265d0 (SetContinuousAttackInfo), FUN_11026790 (StartAttack), etc. — outside this chunk. Attack-flag values above are the load-bearing takeaway for the server.

### CScriptBind_Weapon::RegisterMethods  `@11050cf0`
*Registers Lua methods for the Weapon extension: SetAmmoCount, GetAmmoCount, GetClipSize, IsZoomed, IsZooming, GetDamage, GetAmmoType, GetRecoil, GetSpread, GetCrosshair(+Opacity/Visibility), ModifyCommit, SupportsAccessory(accessoryName), GetAccessory, AttachAccessoryPlaceHolder, GetAttachmentHelperPos(helperName), GetShooter, ScheduleAttach, AttachAccessory(accessoryName,attach,force), SwitchAccessory, IsFiring, EnableFireMode(name,enable), IsFireModeEnabled, Set/GetCurrentFireMode, GetFireMode(idx), GetFireModeIdx(name), GetNumOfFireModes, SetCurrentZoomMode, AutoShoot(nshots,autoReload), Reload, ActivateLamLaser/Light(activate).*  — server: client-only (conf high)

> Stock ScriptBind registration. GetDamage/GetRecoil/GetSpread are getters into the weapon fire-mode data; actual damage numbers computed elsewhere. Registration only, no math here.

### CVehicleClient::RegisterActionMaps  `@110baa60`
*Builds the vehicle input action map: binds action names (v_exit, v_changeseat, v_changeseat1..5, v_changeview, v_viewoption, v_zoom_in/out, v_attack1/2, xi_zoom, xi_v_attack1/2, v_lights, v_horn, v_rotateyaw, v_rotatepitch, ...) to sequential action ids into a hash map at this+4, with refcount bookkeeping on the interned string entries.*  — server: client-only (conf high)

> Pure input-binding plumbing (FUN_1083aa90 interns string, FUN_110be580 inserts into map, DAT_1202e818+0x70 = allocator for refcounted entries). No combat math. Server irrelevant.

### CVehicleDamageBehaviorBlowTire::Init  `@110bfd70`
*Init for the vehicle 'blow tire' damage behavior: reads the 'BlowTire' sub-table and its 'effect' string from the vehicle data, stores the effect name at this+0x10, sets wheel index this+0x14=-1, and registers the effect resource if present.*  — server: client-only (conf high)

> Vehicle visual/physics FX (tire deflation). Not combat damage math.

### CVehicleDamageBehaviorCameraShake::Init  `@110bf030`
*Init for the vehicle 'camera shake on damage' behavior: stores the parent vehicle at this+4 and, if the global gate DAT_1202e818+0x208 is set, registers itself under 'VehicleDamageBehaviorCameraShake' via the vehicle vtable+0x138.*  — server: client-only (conf high)

> Camera/FX behavior. Server does not shake cameras.

### CVehicleDamageBehaviorCameraShake::OnDamageEvent  `@110bf130`
*On a vehicle damage event, iterates all vehicle seats, finds the seat occupied by the local player (matches passenger entity id from the local actor), and triggers a camera shake (vehicle-view vtable+0x17c with params, magnitude group 5, tag 'VehicleDamageBehaviorCameraShake').*  — server: client-only (conf medium)

> Client camera FX only. param_2..param_5 are shake amplitude/frequency/time params passed through.

### CVehicleWeapon::ParseRocketFiremodeHelpers  `@10c65530`
*Parses a weapon/vehicle XML 'params' node for a rocket firemode: reads string attrs rocket_firemode, radar_helper, barrel_helper, fire_helper, rocket_helper (all via GetAttr 'value'), interns them, and stores 4 resolved firemode ids (via FUN_10cdd560) at this+0x600/0x60c/0x618/0x624 from source ids at this+0x5f0/0x5f4/0x5f8/0x5fc. Also wires a 'turret' node's 'search'/other sub-nodes and caches a helper object at this+0x574.*  — server: client-only (weapon visual/helper setup from XML); firemode ids may matter but resolution is data-driven config. (conf medium)

**Constants:** this+0x5f0..0x5fc = source firemode ids; this+0x600/0x60c/0x618/0x624 = resolved firemode records; the '3,1,1,1' first arg to FUN_10cdd560 is a firemode-type/category selector
> Weapon/vehicle rocket setup from XML. Stock item-system parsing, not damage math.

### CWeapon::FindFireModeByName  `@0x11104c00`
*Looks up the params node stored at this+0x418, gets its 'firemodes' collection, iterates (count via vtbl+0x50, element via vtbl+0x5c), reads each element's name attribute (DAT_11dbac80) and returns the first whose name == param_2 (_stricmp). Returns firemode node ptr or 0.*  — server: validation: name->firemode resolution; parallels the server's attackName-hash lookup. (conf high)

**Constants:** DAT_11dbac80 = 'name', this+0x418 params node

### CWeapon::FullSerialize (ammo + weapon stats)  `@110fd1a0`
*Full serialization of a weapon's ammo and stats (save-game / entity full sync path). Reads/writes WeaponAmmo blocks: AmmoAmount entries (AmmoName+Bullets), BonusAmmoAmount entries, minDroppedAmmo entries — each keyed into three red-black maps at this+0xea, this+0xf0, this+0xfc by ammo-type hash. Then WeaponStats: silencer, numFiremodes (per-firemode serialize), hasZoom/ZoomMode/Zoomed/ZoomStep, FireModeReloading, Alternation.*  — server: authoritative (conf medium)

> Ammo counts (this+0xea/0xf0/0xfc maps, value at node+0x14 field [5]=count) and current firemode/zoom state are gameplay-relevant state the server should track for ammo accounting, but the arithmetic here is pure serialize/deserialize (ISerialize vtable: 0x54=int, 0x74=bool, 0x14=BeginGroup, 0x1c=EndGroup, 0x20=IsReading). No damage math. Ammo hash via DAT_1202e818+0x50 name-table vt+0xc.

### CWeapon::InitFromItemParamsXml  `@0x111047e0`
*Weapon init from item script 'params' node. Reads 'melee_attack_firemode' value string (hashes/stores it), then parses child collections: 'firemodes' -> FUN_11104d20, 'zoommodes' -> FUN_11104fa0, 'ammos' -> FUN_11105270, 'ai_descriptor' -> FUN_11105400. Stores params node at this+0x418. Builds path '/Scripts/Entities/Items/XML/Weapons/<model>_firemode.xml' via CInfoRecord::GetModelString and loads it (XML reader through DAT_1202e818 managers). Sets up a state-machine object at this+0x354 (vtbl+0x74) and finalizes via FUN_11106020 + this+0x42c vtbl+0x14.*  — server: validation/data: loads per-weapon firemode xml which defines the attack/firemode set the server-side validator (PlayerFsmValidation) keys against. Server needs the firemode names/hashes, not the client init path itself. (conf medium)

**Constants:** '/Scripts/Entities/Items/XML/Weapons/', '_firemode.xml', this+0x418 = params node ptr, this+0x354 = fsm/state obj

### CWeapon::LoadFireModeXml  `@0x11104d20`
*Builds path '/Scripts/Entities/Items/XML/Weapons/<modelString>_firemode.xml' (CInfoRecord::GetModelString + string concat) and loads/parses the XML through the entity-system XML reader (DAT_1202e818[0x22] or [*]). Reference-counts and frees the temporary path strings.*  — server: data: config file load; same firemode data used for validation. (conf medium)

**Constants:** 0x24 = len('/Scripts/.../Weapons/'), 0xd = len('_firemode.xml')
> std::string COW plumbing (FUN_10c3dab0/FUN_10c3d900 refcount) is CryEngine/CRT.

### CWeapon::NetSerialize (ammo + weapon stats, network variant)  `@110fdf60`
*Network/lightweight serialization variant of weapon ammo+stats. Serializes WeaponAmmo AmmoAmount (AmmoName+Bullets into the this+0xea map only), then WeaponStats: silencer, numFiremodes (per-firemode serialize), currentFireMode (applied via vtable+0x88 on read), hasZoom/ZoomMode/Zoomed/ZoomStep, FireModeReloading, Alternation. Differs from FUN_110fd1a0 by serializing currentFireMode and omitting bonus/dropped ammo maps.*  — server: authoritative (conf medium)

> Same serialize plumbing as FUN_110fd1a0; ammo count node field [5]=Bullets, keyed by ammo-type hash in map at param_1+0xea. currentFireMode getter vt+0x80 / setter vt+0x88. State the server may replicate; no combat formula.

### CWeaponData::GetMemoryUsage_FireModesZoomModesAmmos  `@0x110ff0d0`
*Memory-statistics collector. Serializes/accounts sizes for 'FireModes' (rbtree at this+0x360, array this+0x378..0x380), 'ZoomModes' (rbtree this+0x38c/0x384=900, array this+0x39c..0x3a4) and ammos (this+0x3b0/0x3c8/0x3e0/0x3f8 blocks, each count*0x18). Walks red-black trees (successor iteration) calling each element's vtbl GetMemoryUsage (fire vtbl+0x1c, zoom vtbl+0x10).*  — server: client-only: CryEngine ICrySizer memory accounting. No combat logic. (conf high)

**Constants:** 0x18 = sizeof fire/zoom/ammo record, this+0x360 firemode tree root, this+0x38c/900 zoommode tree root
> Reveals weapon layout offsets: FireModes tree@0x360, count@0x370; ZoomModes tree@0x38c, count@0x394; ammo blocks @0x3b0/0x3c8/0x3e0/0x3f8.

### CWeaponFireMode::OnAnimationEvent_FxAndModeSwitch  `@0x110fe590`
*Handles item/weapon animation-graph events. event id 0x11d/0x11e = 'OnChgFireMode'/'OnEnter'/'OnLeave' -> resolves a fire-mode node from a name-keyed tree (this+0x360) and sets the current fire-mode index on a subsystem via vtbl+0x88 (getter vtbl+0x80). event id 0x130 = FX events 'swordflashghostlevel01/02', 'swordflash', 'bloodsplash': for bloodsplash it runs full quaternion math (quat*quat, cross products, Newton-Raphson normalize via rsqrtss with DAT_11de9938/DAT_11de98e8 refine constants, scale by DAT_11d148a0) to attach a decal/effect at a bone joint queried from the character (vtbl+0x10 name->joint, vtbl+0x20 joint->transform) then spawns via vtbl+0x1e8 or +0x204.*  — server: client-only: pure FX/animation-event handling (swordflash/bloodsplash decals, fire-mode UI switch). The only semantically interesting part (fire-mode index) is mirrored authoritatively elsewhere. No damage produced. (conf medium)

**Formulas:**
- quaternion normalize: q *= rsqrt(x^2+y^2+z^2+eps) refined as f=(1.5 - f*mag*f*0.5)*f (standard fast-inverse-sqrt)
- position blend when dVar22 <= _DAT_11cc33a0: local_68 = 0.80999994f (fixed decal alpha/scale)
**Constants:** DAT_11de9c90 = 0x80000000 (float sign-bit XOR = negate), DAT_11de9938/DAT_11de98e8 = rsqrt Newton refine consts (1.5f / 0.5f), DAT_11d148a0 = fx scale, 0x3f800000 = 1.0f, 0.80999994f fallback, event ids 0x11d,0x11e,0x130
> Stock-style CryEngine animation-event plumbing with MHO FX. Not needed by server.

### CWeaponFireModeDef::LoadFromXml  `@0x11a0f9e0`
*Parses a weapon 'firemode' definition node from an XmlNodeRef (param_2) into a config struct (param_1). Iterates a fixed list of named attributes; for each it (1) lazily registers the attribute name string via FUN_100f67b0 and resolves/caches its interned id in a per-attribute static DAT_ global, guarded by bitmask flags in DAT_123a7238 / DAT_123a737c, then (2) calls the XmlNode reader vtable to fetch the value, and on a missing attribute (vtable+0x10 returns 0) formats and logs a 'missing attribute' error via FUN_100ea3b0/FUN_100ee330 using format string DAT_11d389ec. The reader vtable overloads are: +0x10 = HasAttr(name)->bool, +0x20 = GetAttrInt(name)->int, +0x24 = GetAttr into vector/struct (e.g. parse composite), +0x28 = GetAttr as string, +0x30 = GetAttrFloat(name)->float.*  — server: client-only (CryEngine XmlNodeRef config loader for weapon firemode/aim tuning). The DATA it loads is shared with combat, but the pitch/Yaw fields are camera/aim constraints (client). The server needs the equivalent skillid and firemode identity from the same config, but this parsing routine itself runs client-side. (conf high)

**Formulas:**
- param_1+0x88 (firemode enum/type) = table lookup: compare the parsed name string (local_458) against each PTR_DAT_11e080e4 table entry (UTF-16 length+content compare); on match store *(u32*)(&DAT_11e080e8 + matchIndex*0x2c)
- param_1+0x8c (id/name hash) = FUN_11820cc0(local_458); if param_1+0x88 == 0 then param_1+0x8c = FUN_11820cc0(local_458) + 0x5a
- param_1+0x5c = param_1+0x8c  (duplicate/copy of the computed id at the end)
- attribute-id resolution per field: id = FUN_100e1bf0(nameW); if id == -1 then id = FUN_100e1c30(nameW)  (find-or-add interned attribute id)
**Protocol fields:**
- `firemode: composite (read via reader+0x24) -> param_1+0x10`
- `skillid: int (reader+0x20) -> param_1+0x7c`
- `attr DAT_11d4cd94: int (reader+0x20) -> param_1+0x58`
- `pitchspeed: float (reader+0x30) -> param_1+0x68`
- `pitchlower: float -> param_1+0x60`
- `pitchupper: float -> param_1+0x64`
- `Yawspeed: float -> param_1+0x74`
- `Yawlower: float -> param_1+0x6c`
- `Yawupper: float -> param_1+0x70`
- `attr DAT_11d6dc7c: float -> param_1+0x78`
- `attr DAT_11d6dc84: composite (reader+0x24) -> param_1+0x28`
- `attr DAT_11d6dc94: composite (reader+0x24) -> param_1+0x40`
- `attr DAT_11d6dca0: int -> bool at param_1+0x90`
- `attr DAT_11d6dcac: float -> param_1+0x84`
- `attr DAT_11d6dcb8: int (reader+0x20) -> param_1+0x80`
- `name1 (DAT_11d6dbcc): string -> local_458 (used for enum lookup + id hash)`
- `name2 (DAT_11d6dbd8): string -> local_480`
**Constants:** lookup table base PTR_DAT_11e080e4, stride 0xb pointers (0x2c bytes) per entry, terminates at 0x11e08168; value read from &DAT_11e080e8 + index*0x2c into param_1+0x88, 0x5a (=90) additive offset applied to the id hash when the name-lookup enum (param_1+0x88) resolves to 0
> Classic per-attribute lazy-interned XmlNode reader pattern (CryEngine). Names visible as strings: firemode, skillid, pitchspeed/pitchlower/pitchupper, Yawspeed/Yawlower/Yawupper. Several attribute name strings are only referenced by data address (DAT_11d6dbcc, DAT_11d6dbd8, DAT_11d4cd94, DAT_11d6dc7c, DAT_11d6dc84, DAT_11d6dc94, DAT_11d6dca0, DAT_11d6dcac, DAT_11d6dcb8) and were not resolved to text in this chunk. FUN_11820cc0 is a string->id/hash helper (CRC/name hash). FUN_100e1bf0/FUN_100e1c30 = interned-attr find / find-or-create. Offsets are decimal-mixed in source: param_1+100 == 0x64 (pitchupper).

### DebugHud::DrawWeaponRaycastInfo  `@0x10b78ab0`
*Debug overlay: casts RayWorldIntersection(Game) from the current firemode and prints hovered surface info (Firemode name+id, pierceability, distance %.1f m, mass %.1f kg, pe_type, submerged, velocity m/s, Frozen amount, health/%% health/passengers/Running).*  — server: client-only - developer debug HUD / raycast diagnostics. (conf high)

**Constants:** DAT_11cbf0b8, DAT_11cc9180, DAT_11de9a5c, DAT_11de9900, DAT_11de9a30 = HUD layout/scale factors, 0x3dcccccd=0.1f and 0x3e4ccccd=0.2f passed to a draw call (line widths), 0x3fb33333=1.4f, 0x3f99999a=1.2f = text scales
> 0x3dcccccd=0.1f confirmed here as a UI draw parameter, NOT a damage constant.

### GameFactory::RegisterEntityClasses  `@0x10be3840`
*One-time game-object/entity class registration with the factory: NullAI, BTEmCommon, BTCtrlObject, MHBuffArea, BehaviorTreeBase, MHCommonArea, MHTestSpawner, SceneObject, MHAttackable, MHBurnable, MHContAttacker, GroupAI, EmCommon, RageBullet, Player, CombatNpc, MonsterCtrlPlugin, CatHandcart, PlayerFeature, Accessory, Weapon, VehicleWeapon, CameraRegion, OffHand; vehicle-part attachments; environment entities (Tornado/Shake/Rain/Snow/...); GameRules classes (SinglePlayer/DeathMatch -> GameRulesClient).*  — server: client-only - entity/component class factory registration. Class NAMES (MHAttackable, MHBurnable, MHContAttacker, RageBullet, MHBuffArea) are a useful inventory of combat entity types. (conf high)

> Stock CryEngine class-registration idiom with per-class one-shot guards.

### PlayerInput::BindActionHandlers  `@0x10bc0de0`
*Zeroes a ~0x164-entry action table then binds ~356 named input actions (moveleft/right/forward/back, crouch, prone, sprint, attack1, attack2, zoom, reload, use, item slots, weapon/firemode, godmode/flymode debug, etc.) by resolving each name through the input manager (DAT_1202e818+0x70) and storing refcounted handler pointers.*  — server: client-only - local player input action map (keybind -> action). (conf high)

> Stock CryEngine action-map binding; attack1/attack2/zoom are the melee/fire triggers but binding is client-side.

### PlayerParams::RegisterCVars  `@0x10bd1c70`
*Registers/parses the large client player+camera CVar/param block (cl_fov, cl_bob, cl_headBob, cl_tpvDist, cl_sensitivity, cl_invertMouse, cl_sprintTime, cl_strengthscale, ...). Decompiler reports the body as failed/virtualized.*  — server: client-only - local player/camera tuning CVars. (conf low)

> 34686-byte function, body not decompiled (<decompile failed/virtualized>); classified purely from string table.

### TdrCharBaseInfo::ToDebugString  `@0x101dc8a0`
*TDR (Tencent packet framework) debug/ToString serializer for a character 'base info' struct. Walks the struct field-by-field, appending each named field to a text buffer using helpers FUN_1024a140 (write header/tag), FUN_1010c010 (append raw value with fmt DAT_11d9f710='%I64i'-style int), FUN_1024a290 (append a named scalar field with fmt DAT_11d9e0b4), FUN_1024a3b0/FUN_1010c060 (begin/end a fixed 7-element array section). No arithmetic. Format string '%s[0 : %I64i]:' and label '[oCharLevel]' confirm this is a human-readable dump, not the wire packer. Bounds-checks buffer with _wassert("position <= length", TdrBuf.h:0xc4).*  — server: client-only (TDR debug/ToString of a character base-info packet struct). Value is only as a STRUCT-LAYOUT REFERENCE: documents field order/offsets the server must fill. Not authoritative and no validation logic. (conf high)

**Protocol fields:**
- `Struct offsets (base-info variant): +0x1c oCharSex, +0x20 oCharExp, +0x24 oStarLevel, +0x28 oCharHP, oCharMaxHP[7]@0x2c, oCharMaxReju[7]@0x48, +0x64 oDeath(short), +0x66 oSharpness, oCharAnimSpeed[7]@0x6a, +0x86 oMaleFace, +0x8a oMaleHair, +0x8e oQiRenLevel, +0x92 oRejuFlag, +0x96 oTeamID, oPVPDef[7]@0x9a, oPVPDefAngle[7]@0xb6, +0xd2 oRegion, +0xd6 oUnderClothes, oCharRejuPer[7]@0xda, +0xf6 oCharRemainsExp, +0x11a oCombatNPCID, +0x124 oJinLiValue, +0x130 oGuildId, oDefenseReduceHPModifyRate[7 floats]@0x1ba, oDefenseReduceStaModifyRate[7 floats]@0x1d6, +0x1f6 oWildHuntCamp, +0x21a oSoulStoneAtkLevel`
- `Many oFacialInfo1..47 shorts and VIP fields interleaved (cosmetic/account, not combat)`
**Constants:** fmt DAT_11d9f710 = integer/'%I64i'-style field format, fmt DAT_11d9e0b4 = named-scalar field format, fmt DAT_11da064c = float field format (used for float members), array count = 7 (each stat block written as 7 consecutive dwords)
> src TdrBufUtil.cpp / TdrBuf.h. Stock Tencent TDR plumbing. The 7-element arrays likely represent value + per-source modifier slots (base/equip/buff/etc.). Note this variant lacks the elemental attack/res block that appears in FUN_101ea1c0.

### Weapon::DispatchOnChgFireMode  `@0x10a5ab60`
*Builds a small script-event descriptor (event 0x11d, flags 0x4ffff, name "OnChgFireMode", param=param_2) and dispatches it through the entity's script proxy vtable (+0x24).*  — server: client-only - fire-mode change is a client FSM/script notification (fx/animation). (conf medium)

**Constants:** event id 0x11d, flags 0x4ffff
> Same event-dispatch pattern as the GameOnHit builders (local struct then vtbl+0x24 call).
