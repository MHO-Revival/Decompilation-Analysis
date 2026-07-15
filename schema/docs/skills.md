# MHO Skills / Buffs / Talents / Status — Round 5

583 functions from CryGame.dll.


## skills  (100)

### AttrDesc_SkillName::get `@0x11901b70` — skills
*Reflection attribute-descriptor accessor for 'SkillName' (type tag 0xac). One-time initializes the descriptor block and returns it.* (conf medium)
- ƒ Descriptor tag _DAT_1239e784 = 0xac.

### AttrDesc_SkillVideoInfo::get `@0x119214a0` — skills
*Reflection attribute-descriptor accessor for 'SkillVideoInfo' (type tag 0xaa).* (conf medium)
- ƒ Descriptor tag _DAT_1239f320 = 0xaa.

### CBowWeapon::SetupRageArrowAttachments `@0x10fdbbf0` — skills/rage-bow
*When the player model ([param_1+0x100]) is weapon-type 10 (piVar1[0x56d]==10, bow), (re)creates arrow bone attachments for rage mode. Rebinds attachment sockets weapon_item_attachment, melee_arrow_item (bone index 0) and melee_arrow_secrect (bone index 7) via vfunc +0x790 + FUN_10ad44d0, then hides them (FUN_10a64020(0,...)), and attaches CGF 'Objects/items/arrow_bone.cgf' to sockets bow_rage01_A / bow_rage01_B (also hidden).* (conf medium)
- ƒ guard: piVar1 = *(param_1+0x100); require piVar1!=0 && piVar1[0x56d]==10 (weapon class id 10 = bow)
- ƒ melee_arrow_secrect uses bone slot arg 7; others use slot 0
- ƒ attachment DAT_11cbf0e0/e4/e8/ec = default transform (identity offset quat)

### CEquipHiddenSkillCondOpenInfo::GetByIndex `@0x11522770` — skills/equip-hidden-skill
*Linear-list accessor: returns the CEquipHiddenSkillCondOpenInfo* stored at ordinal index param_1 in the manager's flat vector.* (conf high)
- ƒ mgr = CEquipHiddenSkillCondOpenInfo::GetInfoManager()
- ƒ if 0 <= idx < ((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14] + idx*4) else 0
- ƒ standard CInfoManager flat-vector accessor (base=+0x14, end=+0x18, stride 4)

### CEquipPassiveSkillGroupInfo::ComputeLevelById `@0x11522920` — skills/equip-passive
*Looks up a CEquipPassiveSkillGroupInfo row by id (2D sparse lookup) and, if present, returns ComputeSuitSkillLevel(param_2) for it.* (conf medium)
- ƒ CInfoManager 2D lookup: id2=id-mgr[0x30]; guard id!=-1, (id!=0 \|\| mgr[0x30]==0), mgr[0x28]!=0, 0<=id2<mgr[0x24]; row=mgr[0x20][id2/mgr[0x28]]; entry=row[id2%mgr[0x28]]
- ƒ if entry present: return ComputeSuitSkillLevel(param_2)

### CEquipPassiveSkillSystem::AddOrUpdatePassiveEntry `@0x115b7cf0` — skills/equip-passive
*Inserts/updates a passive-skill activation record (5-dword stride 0x14) keyed by group id (param_2) in the vector at this+0x48..+0x50. Computes level via ComputeSuitSkillLevel(param_3). If an existing entry has a higher level (entry[1][0x24] > newLevel[0x24]) it bails (keeps higher); otherwise removes old (memmove) and appends {group, levelInfo, flags, param_5, param_4}.* (conf medium)
- ƒ levelInfo = ComputeSuitSkillLevel(param_3)
- ƒ keep-higher: if newLevelInfo[0x24] < existing[1][0x24] return (don't downgrade)
- ƒ record = {group, levelInfo, flags&0xffffff00, param_5, param_4} stride 0x14

### CEquipRandPassiveSkill::RollGroup `@0x11638ac0` — skills/equip-rand-passive
*Clears the output list then, for the equipment's rand-passive group (id at this+0x20c), dispatches the roll: group type (row+0x3c)==1 -> RollRandomPassiveSkills; ==2 -> RollRandomPassiveSkills_Variant.* (conf medium)
- ƒ group type row[0x3c]: 1=standard roll, 2=variant roll

### CEquipRandPassiveSkillActivateGroup::GetActivatedSkill `@0x11638b60` — skills/equip-rand-passive
*Validates the activate-group id exists, then outputs *param_2 = *FUN_11866860() (currently activated random-passive skill id). Returns 1 if resolved.* (conf low)
- ƒ out = *FUN_11866860() when group id valid

### CEquipRandPassiveSkillActivateGroup::GetById `@0x11639a40` — skills/equip-rand-passive
*2D-sparse lookup returning CEquipRandPassiveSkillActivateGroupInfo* by id.* (conf high)
- ƒ standard 2D lookup

### CEquipRandPassiveSkillActivateSetInfo::GetByIndex `@0x1197cc00` — skills
*Linear-index lookup into the CEquipRandPassiveSkillActivateSetInfo table (equip random-passive-skill activation sets).* (conf high)
- ƒ valid if 0<=index<((mgr+0x18 - mgr+0x14)>>2); return array[index].

### CEquipRandPassiveSkillGroup::GetById `@0x11639a90` — skills/equip-rand-passive
*2D-sparse lookup returning CEquipRandPassiveSkillGroupInfo* by id.* (conf high)
- ƒ standard 2D lookup

### CEquipRandPassiveSkillGroup::SelectSubGroupForSkill `@0x1163a930` — skills/equip-rand-passive
*Builds the candidate sub-group id list for a rand-passive group (type row+0x3c: 1 = copy list at row+0x2c..+0x30; 2 = FUN_11868050(param_2) then FUN_116367f0(row+0xc, row+0x10)), then selects one via CEquipRandPassiveSkillSubGroupInfo::SelectSubGroupForSkill(param_3, param_4, &list).* (conf medium)
- ƒ type 1 = static candidate list [row+0x2c..+0x30]; type 2 = dynamic (FUN_11868050/116367f0)

### CEquipRandPassiveSkillSubGroup::GetById `@0x11639ae0` — skills/equip-rand-passive
*2D-sparse lookup returning CEquipRandPassiveSkillSubGroupInfo* by id.* (conf high)
- ƒ standard 2D lookup

### CEquipRandPassiveSkillSubGroup::RollValue `@0x11638bd0` — skills/equip-rand-passive
*Rolls a random passive-skill magnitude for a sub-group. Resolves sub-group (FUN_11865190(param_2)) with min=sub+0x14, max=sub+0x18; adds a uniform random offset to param_3 then clamps to [sub+0x1c, sub+0x20].* (conf high)
- ƒ rand01 = FUN_100ee450() * _DAT_11de9a60  (uniform 0..1)
- ƒ param_3 += ( min - (int)(rand01 * ((max - min) + 1)) )  where min=sub[0x14], max=sub[0x18]
- ƒ clamp: if param_3 > sub[0x20] -> sub[0x20]; if param_3 < sub[0x1c] -> sub[0x1c]
- ƒ returns clamped value (0 if unresolved)
- $ roll range [sub+0x14, sub+0x18]
- $ clamp bounds [sub+0x1c, sub+0x20]

### CEquipSuitSkillInfo::GetByIndex `@0x119ada30` — skills
*Linear-index lookup into the CEquipSuitSkillInfo table (armor/equipment set-bonus skills).* (conf high)
- ƒ valid if 0<=index<((mgr+0x18 - mgr+0x14)>>2); return array[index].

### CEquipSuitSkillSystem::AddOrUpdateSuitEntry `@0x11572f60` — skills/equip-suit
*Inserts/updates a suit-skill activation record. Looks up CEquipSuitSkillInfo by id (param_3); keyed on param_2 (suit-piece count/tier) in a red-black tree at param_1+4. New node accumulates threshold from info+0x38 plus a base from FUN_11759f80()+0x30; existing node accumulates (node+0x18 += info+0x38) and pushes (param_3, value) into node's paired vector (node+0x20/+0x24). Emits UI/event 0x183a at end.* (conf medium)
- ƒ info(param_3) via CEquipSuitSkillInfo 2D lookup (guards id==0->mgr[0x30]==0, mgr[0x28]!=0, id2 in [0,mgr[0x24]))
- ƒ new-entry value: local_28 = FUN_11759f80()[0x30] + info[0x38]
- ƒ existing node: node[0x18] += info[0x38]; append pair (param_3, uVar1&0xffffff00) to vector node[0x20..0x24]
- ƒ tree keyed/compared on node[0x10] vs param_2 (BST: key<param_2 -> right child +0xc else left +8)
- ƒ event header {0x183a, -1, -1, suitCount} dispatched via vtbl(+0x1c)(+0x14)

### CEquipSuitSkillSystem::ReevaluateSuitSkills `@0x1165ffb0` — skills/equip-suit
*Walks the suit-skill activation tree (this+0xb) and, for each CEquipSuitSkillInfo, checks activation via FUN_11572a20(info+0x18, info+0x10) (suit id + required piece count); if satisfied notifies vtbl+8(1) to activate the suit skill. Only runs when a valid equip context exists (this[5][0x10][0x1c]!=0).* (conf medium)
- ƒ per node key node[4] -> CEquipSuitSkillInfo lookup
- ƒ activation test: FUN_11572a20(info[0x18], info[0x10])  (info[0x18]=suit id/group, info[0x10]=required count)

### CLemonSkillInfo::ParseConfig `@0x11685450` — skills
*XML/attr config loader for a 'LemonSkill' record. Reads sub-record at param_1+0x9c (0x24-byte stride records), then reads the wide-string attribute 'LemonSkill', tokenizes it on ';' and atoi()s each token into an int vector (the skill-id list).* (conf medium)
- ƒ Delimiter = 0x3b = ';' (passed to tokenizer FUN_100e4b30).
- ƒ Per token: local_470 = atoi(token); token records stride 0x18 (24) bytes (iVar8 += 0x18).
- ƒ Sub-record vector at param_1+0x9c grows by 0x24 (36) bytes per element; when *(param_1+0x9c)==*(param_1+0xa0) a new element is emplaced (FUN_11690f00) else FUN_1167a440 fills in place and advances +0x24.
- ƒ int vector push: *(iVar5-8) == *(iVar5-4) -> grow (FUN_10463c40) else *piVar1=val; *(iVar5-8)+=4.

### CNewSkillInfo::GetRecordByIndex `@10876810` — skills/weapon-skill
*Data-table accessor: returns the CNewSkillInfo record pointer at a linear index. Singleton via CNewSkillInfo::GetInfoManager, fallback CInfoManager::FindByName("CNewSkillInfo").* (conf high)
- ƒ mgr fields: [5]=array begin, [6]=array end
- ƒ count = (mgr[6] - mgr[5]) >> 2
- ƒ guard 0 <= param_1 < count; return *(mgr[5] + param_1*4) else 0

### CNewSkillInfo::GetRecordCount `@108768a0` — skills/weapon-skill
*Returns the CNewSkillInfo record count by calling manager vtbl+0x28. Used as the loop bound paired with GetRecordByIndex (see FUN_1087a4c0 which does count=FUN_108768a0() then loops FUN_10876810(i)).* (conf medium)
- ƒ return = mgr->vtbl[0x28/4]()  (record count)

### CNewSkillLearnInfo::GetByIndex `@0x118ff610` — skills
*Linear-index lookup into the CNewSkillLearnInfo table (skill learning/unlock config).* (conf high)
- ƒ valid if 0<=index<((mgr+0x18 - mgr+0x14)>>2); return array[index].

### CNewSkillList::AddSkill `@0x1157a0c0` — skills/new-skill
*Adds a CNewSkillInfo id (param_1) to the player's per-group skill list. Group index = info+0x40 (effectId/group). Skips if already present; only adds if current count < FUN_11744050()[0x40] (per-group cap). Also pushes up to 5 auxiliary related-skill ids (from FUN_1182d280) into a parallel list at group (info+0x40 + 0xd).* (conf medium)
- ƒ info via CNewSkillInfo 2D lookup by param_1
- ƒ grp = info[0x40]; primary vector at param_1 + grp*0xc; dup-scan (*p==id)
- ƒ cap check: existingCount < FUN_11744050()[0x40]
- ƒ aux vector at param_1 + (grp + 0xd)*0xc; push each nonzero of 5 aux ids from FUN_1182d280
- ƒ stack-cookie guarded (DAT_11e11390 ^ esp)

### CNewSkillList::IsSkillInList `@0x1157a470` — skills/new-skill
*Returns 1 if new-skill id (param_2) is present in the per-group vector (group=info+0x40) at param_1, else 0. Returns 1 if id/info invalid (treated as trivially satisfied).* (conf medium)
- ƒ grp=info[0x40]; scan vector [param_1+grp*0xc .. count]; match *p==param_2 -> return 1
- ƒ not found -> 0; invalid id/info -> 1

### CNewSkillList::RemoveSkill `@0x1157a8d0` — skills/new-skill
*Removes new-skill id (param_2) from primary group vector (group=info+0x40) and from the aux vector (group+0xd) for up to 5 related aux ids (FUN_1182d280). Uses swap-with-last + shrink.* (conf medium)
- ƒ primary vector at param_1+grp*0xc: on match, *slot = *(end-4); end -= 4
- ƒ aux vector at param_1+(grp+0xd)*0xc (data ptr at param_1+0x9c+grp*0xc, end at +0xa0): same swap-remove for each of 5 aux ids

### CNewSkillSystem::CanUseSkill `@0x1157c3f0` — skills/new-skill
*Checks usability of a CNewSkillInfo (param_2). If info+0x44 (rank) == -1: usable when IsSkillInList (FUN_1157a470). Otherwise queries via vtbl(+0x8c)(info[0x40], info[0x44]) then FUN_1141c9e0()==0 => usable. Returns 1 usable, 0 not.* (conf medium)
- ƒ if info[0x44]==-1: usable = FUN_1157a470(param_2)
- ƒ else: vtbl+0x8c(info[0x40], info[0x44]); usable = (FUN_1141c9e0()==0)

### CPlayerInput::ParseActionName `@0x10fbfde0` — skills/input-mapping
*Maps a player action/input command name (string) to an integer action-ID enum written to *param_2, returning 1 on match / 0 on no-match. First lowercases the input in place (chars 'A'..'Z' += 0x20). Then compares against a fixed table. For 'direction' variants it also writes a 2D direction vector into param_3[0]/param_3[1] as floats.* (conf high)
- ƒ lowercase: if (c>'@' && c<'[') c += 0x20
- ƒ DAT_11ccdbec -> id 0; DAT_11ccdbf4 -> id 1; DAT_11cface8 -> id 2 (first three unnamed action strings)
- ƒ holster->3, interact->4, defense->5, reload->6, dodge->7
- ƒ DAT_11dce978->8, crouch->9, DAT_11dce988->0xa(10), creep->0xb, rage1->0xc, rage2->0xd, rage3->0xe, rage_transmission->0xf
- ƒ direction->0x24 (no vector); direction_right->0x24 with param_3[0]=0x3f800000(1.0f),param_3[1]=0; direction_left->0x24 param_3[0]=0xbf800000(-1.0f),param_3[1]=0; direction_back->0x24 param_3[0]=0,param_3[1]=0xbf800000(-1.0f); direction_front->0x24 param_3[0]=0,param_3[1]=0x3f800000(1.0f)
- ƒ xi_switch_lb->0x10, rb->0x11, lt->0x12, rt->0x13, x->0x14, y->0x15, b->0x16, a->0x17, l3->0x18, r3->0x19, start->0x1b, back->0x1a, pad_up->0x1c, pad_left->0x1d, pad_down->0x1e, r3_right->0x1f, r3_up->0x20, r3_left->0x21, r3_down->0x22, (dup r3_right)->0x23; no match -> return 0

### CPlayerRage01::EnterShieldAttack `@0x10feea60` — skills/rage
*Enters COMBAT_PL04_RAGE01_SHIELDATTACK: sets state, registers 'Rage01ShieldAttack' tag, sets next-state COMBAT_IDLE (len 0xb).* (conf high)

### CPlayerRage01::EnterSpinAttack01 `@0x10feead0` — skills/rage
*Enters COMBAT_PL04_RAGE01_SPINATTACK01, registers 'Rage01SpinAttack01' tag, sets next combo state COMBAT_PL04_RAGE01_SPINATTACK02 with combo params local_38=1, local_34=0x2d.* (conf high)
- ƒ combo window params: local_38=1, local_34=0x2d (45) passed with next-state finalize

### CPlayerRage01::EnterSpinAttack02 `@0x10feeba0` — skills/rage
*Enters COMBAT_PL04_RAGE01_SPINATTACK02, tag 'Rage01SpinAttack02', next state SPINATTACK03 (combo params local_38=1, local_34=0x2d).* (conf high)
- ƒ combo params local_38=1, local_34=0x2d

### CPlayerRage01::EnterSpinAttack03 `@0x10feec70` — skills/rage
*Enters COMBAT_PL04_RAGE01_SPINATTACK03, sets next state COMBAT_IDLE (len 0xb), tag 'Rage01SpinAttack03'. Final spin combo step.* (conf high)

### CPlayerRage01::EnterStabAttack01 `@0x10feed50` — skills/rage
*Enters COMBAT_PL04_RAGE01_STABATTACK01, tag 'Rage01StabAttack01', next state STABATTACK02 (combo params local_38=1, local_34=0x2d).* (conf high)
- ƒ combo params local_38=1, local_34=0x2d

### CPlayerRage01::EnterStabAttack02 `@0x10feee20` — skills/rage
*Enters COMBAT_PL04_RAGE01_STABATTACK02, tag 'Rage01StabAttack02', next state STABATTACK03 (combo params local_38=1, local_34=0x2d).* (conf high)
- ƒ combo params local_38=1, local_34=0x2d

### CPlayerRage01::EnterStabAttack03 `@0x10feeef0` — skills/rage
*Enters COMBAT_PL04_RAGE01_STABATTACK03, sets next state COMBAT_IDLE (len 0xb) first, tag 'Rage01StabAttack03'. Final stab combo step.* (conf high)

### CPlayerRage01::EnterSwordAttack `@0x10feece0` — skills/rage
*Enters COMBAT_PL04_RAGE01_SWORDATTACK, tag 'Rage01SwordAttack', next state COMBAT_IDLE (len 0xb).* (conf high)

### CPlayerRage03::EnterState `@0x10fefa20` — skills/rage
*Enters COMBAT_PL04_RAGE03 (bomb-throw rage). Initializes throw counter *(param_1+0x1f0) = config *(DAT_120286b8+0x728) (max throws), *(param_1+0x1f4)=0, *(param_1+0x200)=0. Registers 6 throw tags Rage03_Throw01..06 + Rage03_End (into +0x64 vector) and callbacks FUN_10fef4f0(+0xb0), FUN_10fef6a0(+0xc8), FUN_10fef700(+0xf8, the throw event handler above), FUN_10fef9a0(+0xec), plus timer FUN_10f5bd40(6,FUN_10fef560).* (conf medium)
- ƒ *(param_1+0x1f0) = *(DAT_120286b8+0x728) (rage03 max throw count from config)
- ƒ *(param_1+500)=0 (0x1f4), *(param_1+0x200)=0
- $ throw count capped at config DAT_120286b8+0x728

### CPlayerRage03::OnThrowAnimEvent `@0x10fef700` — skills/rage
*Rage03 (bomb-throw) animation-event handler (param_2+0xc = event/tag name). Early-outs unless the model, weapon component (vfunc +0x790!=0), FUN_10f19240 (world), combat mode (vfunc +0x228) and FUN_10f59630 all hold. Matches tag: RandomRight/RandomLeft/BombRight/BombLeft select a projectile-type string (from PTR table PTR_s_Throw_FlashGrenade... at 0x11df9a50; RandomRight/Left pick rand()%0xd; Bomb* use the FlashGrenade default) and set throwing flag +0x1f8=1, then emit OnEnter/Throw/OnLeave logic events (weapon vfunc +0x24 with packed args {0x11d,0x4ffff,...}). Rage03EndEnter clears +0x1f8=0; Rage03EndLeave -> NORMAL_IDLE.* (conf medium)
- ƒ projectile pick: rand() % 0xd (13 throw types) index into (&PTR_s_Throw_FlashGrenade_11d05a9b_1_11df9a50)[i]
- ƒ Rage03EndEnter -> *(byte*)(param_1+0x1f8)=0; else set +0x1f8=1 when throwing
- ƒ logic-event packet header {0x11d, 0x4ffff, 0} with name 'OnEnter'/'Throw'/'OnLeave' + projectile ptr, sent via weapon vfunc(piVar2[1] +0x24)
- $ throw uses a projectile from a 13-entry random table (FlashGrenade among them) - no currency cost, consumes rage-mode charges tracked elsewhere

### CPlayerRageRush::ApplyRushSpeedAndDirection `@0x10fee700` — skills/rage
*Computes and applies rage-rush movement speed. If the horizontal velocity magnitude (abs sum of components +0x154/+0x158/+0x15c) is <= threshold DAT_11cc3f68, forces +0x158 = 1.0f (default forward). Selects LOW vs HIGH rush by matching current state name to COMBAT_PL04_RAGERUSH_LOW/HIGH; reads a speed value from FUN_1134cd10 (low) or FUN_1134cd30 (high) and a config value from DAT_1202e818+0x7c +0x418(low)/+0x41c(high), stores config at +0x1e4, then applies speed via FUN_10de9b60(model, speed) and locomotion vfunc +0x198.* (conf medium)
- ƒ abs mask DAT_11de9c70 (=0x7fffffff, fabs) applied to *(param_1+0x154/0x158/0x15c)
- ƒ if (\|v154\|+\|v158\|+\|v15c\|) <= DAT_11cc3f68 then *(param_1+0x158) = 0x3f800000 (1.0f)
- ƒ LOW: speed = FUN_1134cd10(); cfg = *(*(DAT_1202e818+0x7c)+0x418)
- ƒ HIGH: speed = FUN_1134cd30(); cfg = *(*(DAT_1202e818+0x7c)+0x41c)
- ƒ *(param_1+0x1e4) = cfg; FUN_10de9b60(model, speed)

### CPlayerRageRush::EnterRageRushToIdle `@0x10fee5b0` — skills/rage
*Transition state RageRushToIdle -> COMBAT_IDLE. Sets state flags *(param_1+0x80) \|= 0x11, registers leave/update callbacks FUN_10fee1e0 (+0xb0 vector) and FUN_10fefef0 (+0xc8 vector), registers timer/event FUN_10f5bd40(6,FUN_10fee230) (bind the energy-drain update to event id 6), registers 'RageRushToIdle' tag, plays FX 'Fire_Ability_Mst.CST.FireBallSparkM_MST', sets next states PLLocomotion/UnholsteredIdle and finalizes COMBAT_PL04_RAGERUSH_END.* (conf medium)
- ƒ *(uint*)(param_1+0x80) \|= 0x11
- ƒ FUN_10f5bd40(6, FUN_10fee230) binds event-id 6 -> energy-drain update
- ƒ FUN_1083ab70('Fire_Ability_Mst.CST.FireBallSparkM_MST', 0x27) = FX name (len 0x27)

### CPlayerRageRush::EnterRushEnd `@0x10fee9a0` — skills/rage
*Enters COMBAT_PL04_RAGERUSH_END: sets animation state, registers 'RageRushToIdle' tag, sets next-state COMBAT_IDLE (FUN_10f57080/FUN_1083ab70), finalizes.* (conf high)

### CPlayerRageRush::EnterRushHigh `@0x10fee980` — skills/rage
*Enters COMBAT_PL04_RAGERUSH_HIGH: sets animation state and sets rush-tier field *(param_1+0x6c) = 7.* (conf high)
- ƒ *(param_1+0x6c) = 7 (high-tier id)

### CPlayerRageRush::EnterRushLow `@0x10fee960` — skills/rage
*Enters COMBAT_PL04_RAGERUSH_LOW: sets animation state and sets rush-tier field *(param_1+0x6c) = 6.* (conf high)
- ƒ *(param_1+0x6c) = 6 (low-tier id)

### CPlayerRageRush::EnterState `@0x10fee290` — skills/rage
*Enters COMBAT_PL04_RAGERUSH_START. Sets animation state (FUN_10f58340), registers state tags 'HolsteredToRageRush' and 'UnholsteredToRageRush' (pushed into event vector at +0x64/+0x68), registers per-frame update callback FUN_1083ab70('COMBAT_PL04_RAGERUSH_LOW',0x18) and callbacks FUN_10fefd40 (into +0xb0 vector) and FUN_10fefe00 (into +0xc8 vector). Zeroes rage counters at +0x200, +0x204, +0x208.* (conf medium)
- ƒ clears *(param_1+0x204)=0, *(param_1+0x208)=0, *(param_1+0x200)=0
- ƒ callback vectors: +0x64/+0x68 (enter tags), +0xb0/+0xb4 (FUN_10fefd40), +0xc8/+0xcc (FUN_10fefe00); grow via FUN_10f649a0/FUN_108716d0 when full else *p=fn; p+=4

### CPlayerRageRush::OnLowHighLeave_A `@0x10fefe00` — skills/rage
*Leave callback for RAGERUSH_LOW/HIGH. Always calls weapon vfunc +0x740(1) (enable something) and, in combat mode (+0x228), vfunc +0x7f4(0). For state COMBAT_PL04_RAGERUSH_HIGH additionally calls vfunc +0x580(0) and installs the state-update function pointer *(*(param_1+0x18)+0x234) = FUN_10fdc650.* (conf medium)
- ƒ always: weapon vfunc +0x740(1); if combat(+0x228): +0x7f4(0)
- ƒ HIGH only: +0x580(0); *(*(param_1+0x18)+0x234) = FUN_10fdc650

### CPlayerRageRush::OnLowHighLeave_B `@0x10fefef0` — skills/rage
*Second RAGERUSH_LOW/HIGH leave callback. For COMBAT_PL04_RAGERUSH_HIGH: weapon vfunc +0x740(0); if combat(+0x228) FUN_10de9aa0(model,1); clears model[0x822]=0; +0x580(0); installs *(*(param_1+0x18)+0x234) = FUN_10fdc650.* (conf medium)
- ƒ HIGH: +0x740(0); combat-> FUN_10de9aa0(model,1); model[0x822]=0; +0x580(0); +0x234 fn = FUN_10fdc650

### CPlayerRageRush::UpdateEnergyDrain `@0x10fee230` — skills/rage
*RageRush per-frame update. Advances rage-energy by frame time (FUN_10f169e0(deltaTime) where deltaTime from timer vfunc DAT_1202e818+0x28 +0x1c). When the rage energy at model+0x2088 has drained to/below the threshold at model+0x208c, fires the 'COMBAT_PL04_RAGERUSH_END' state event (FUN_10f59ff0).* (conf medium)
- ƒ model = *(*(param_1+0x18)+0x100)
- ƒ deltaTime = (**(DAT_1202e818+0x28) +0x1c)(0); FUN_10f169e0((float)deltaTime)
- ƒ end condition: *(float*)(model+0x208c) <= *(float*)(model+0x2088)

### CPlayerRage_PL05::EnterRageShoot `@0x10ff1200` — skills/rage-gun
*PL05 (gun/bowgun class 5) enters COMBAT_PL05_RAGE_SHOOT. Sets state, tag 'RageShoot', next-state COMBAT_IDLE, registers callbacks FUN_10ff1d80(+0xc8) and FUN_10ff06f0(+0xf8), sets next states PLLocomotion/UnholsteredIdle and finalizes.* (conf high)

### CPlayerRage_PL05::OnRageShootLeave `@0x10ff1cd0` — skills/rage-gun
*Leave callback for COMBAT_PL05_RAGE_SHOOT. Calls weapon vfunc +0x740(1); if the leaving state name == COMBAT_PL05_RAGE_SHOOT calls FUN_10f15f30(0); if combat mode (+0x228) calls FUN_10de9d20(weapon).* (conf high)
- ƒ weapon vfunc +0x740(1); if state=='COMBAT_PL05_RAGE_SHOOT' -> FUN_10f15f30(0); if +0x228 -> FUN_10de9d20

### CPlayerRage_WE09::EnterGunLanceRageAim `@0x10ff25d0` — skills/rage-gunlance
*WE09 (gunlance) enters WE09GunLanceRageAim. Sets state and registers callbacks FUN_10ff1e70(+0xb0), FUN_10ff20a0(+0xc8), FUN_10ff2120(+0xec), plus timer FUN_10f5bd40(6,FUN_10ff1ee0).* (conf high)
- ƒ FUN_10f5bd40(6, FUN_10ff1ee0) binds event-id 6 update

### CPlayerWeaponFSM::DispatchCallbackTable `@0x10fbec40` — skills/weapon-fsm
*Iterates a named callback table ('Callbacks') read from the weapon/skill state definition (CInfoRecord::GetModelString) and dispatches each entry by name to a concrete handler. Outer key must be 'Callbacks'; then for each child it reads the child's name and, when it has a value, string-matches SetValue/SetGValue/HolsterItem/SetAGInput and a long chain of FUN_10a675d0(...) probes to ~30 weapon-effect handlers (FUN_10fc3b60..FUN_10fd0280 range). Also handles per-callback sub-keys OnEnter/Update/OnLeave/SetCanDodge/SetCannotDodge/CheckFps by pushing thunk closures (FUN_10f7ef40/FUN_10f7eff0/FUN_10f7f040/FUN_10f7f100) into the state's callback vectors at param_2+0xbc/0xc0. Ref-counted string plumbing (FUN_10c3d780/FUN_10c3dab0/DAT_123be268) throughout.* (conf medium)
- ƒ Outer table name must equal 'Callbacks' (strcmp) else whole function no-ops
- ƒ child count = (**(param_1+0xa0))(); loop child = (**(param_1+0xa8))()
- ƒ HolsterItem branch caches local_30 = *(param_2+0x50) before FUN_10f57110
- ƒ SetCanDodge (in OnEnter/Update): pushes closure FUN_10f7ef40 into vector param_2+0xbc (grow-by-8 when +0xbc==+0xc0)
- ƒ *(int*)(param_2+0xbc) += 8 on push
- ƒ string heap-alloc: DAT_123be268 += _Size + 0xd on alloc, -= (*(p-4)+0xd) on free (CryString COW refcount at p-0xc, p-4=capacity)

### CPlayerWeaponFSM::TryComboTransitionWithSkillGate `@0x10fdcba0` — skills/combo-gating
*Iterates the current state's transition table and, for each candidate whose target state != 'INVALID_STATE', checks whether the associated skill is castable before allowing the transition. Resolves the transition's skill via FUN_10fb8080, looks up the skill def (FUN_116cd730/FUN_116cd660), and gates on: skill enabled, cooldown/availability (FUN_117194d0 + FUN_11719420 count > 0), and a per-skill castable check FUN_1139aa90(skillId, ammo/resource). If ('sm_ignoreSkill' cvar set) OR skill invalid (id==-1) OR resource-available, executes the transition (func_0x10f6bb80 / FUN_10f59ff0). If the availability call returns state==2 (blocked) and skill valid, sets a block flag *(player+0x18)+0x40 = 1 and returns 0.* (conf medium)
- ƒ index = *(uint)(DAT_120286b8+0x9d4); guard index < (*(param_1+0x188)-*(param_1+0x184))/0xc (transition-bucket array, stride 0xc)
- ƒ inner transition entries stride 0x48 (iVar10 += 0x48; end at *(iVar1+4))
- ƒ skillId resolve: iVar10 = *(iVar7+0x14); if ==-1 and iVar8!=0 then iVar10 = *(iVar8+0x1c4)
- ƒ local_5 (castable) default 1; if skillId>0: def=FUN_116cd660; if def==0 -> local_5=0; else if *(def+0x2d)!=0 && FUN_117194d0(skillId)==1 && FUN_11719420(skillId)>0 -> local_5 = FUN_1139aa90(skillId, ammoIndex)
- ƒ ammoIndex uVar4 = (*(*(param_1+0x18)+0x18c)!=0) ? FUN_10f3bae0(param_2) : 0xffffffff
- ƒ local_6 = (name=='sm_ignoreSkill'); local_7 = (skillId==-1)
- ƒ availability = vfunc(+0x18)(skillId,&local_18); allow if avail==0 && local_5==1; execute if local_6\|\|local_7\|\|allow
- ƒ if local_18==2 && local_5==1 -> set *(*(param_1+0x18)+0x40)=1, return 0 (blocked)

### CPlayerWeaponFSM::TryRequestStateChange `@0x10fd05f0` — skills/state-change
*Core weapon/skill state-transition request. Aborts if busy flag (char)param_1[0x42]!=0. Resolves the active weapon component via FUN_10fde0a0 (returns extension vector; [8]=component). Handles a 'sm_ignoreSkill'-gated fast path and an aim-direction path for gun/bow (COMBAT_PL05_AIM/COMMONSHOOT/CHARGE/HEAVYSHOOT/HEAVYSHOOTS). Computes a normalized aim direction and a rotation quaternion/basis from the target's velocity vector, iterates the state's transition-condition list (piStack_100[0x89..0x8a]) evaluating each predicate (piVar20[1] callback) and, on match, applies via FUN_10fd7800. Builds a network state-change packet (vfunc +0xf8 encode, FUN_10bf81b0 serialize, vfunc +0x228 send/apply) then runs cleanup lists (memmove-based vector compaction of active states at [0x30]).* (conf low)
- ƒ abort if (char)param_1[0x42] != 0 (busy/locked)
- ƒ component = FUN_10fde0a0()[8]; abort if list==self or component==0
- ƒ aim math constants: 0.70710677 (=sqrt(0.5), fStack_90 default), DAT_11de9950 (*2 midpoint scale for piStack_9c = (b0+b0)*DAT_11de9950), DAT_11de9978 (bias added after normalize), DAT_11de98e0 (min-length epsilon), DAT_11de9c80 (sign-flip xor mask), DAT_11cc06d8 (fallback angle)
- ƒ len2 = b8*b8 + d0*d0 (horizontal speed^2); sqrt via libm_sse2_sqrt_precise; if len>DAT_11de98e0 normalize else use fallback
- ƒ attack-flag: piStack_f0 = (char)param_7!=0 ? ... ; set to 2 if uStack_138 high byte set (charged)
- ƒ transition list walked at component[0x89]..[0x8a] in stride 3 ints; predicate = piVar20[1], action-check FUN_10fd7800; on-hit cleanup FUN_10c3d5d0 when piVar20[2]!=0
- ƒ DAT_120286b8+0x538 (combat-mode gate), +0x54c==1 (special transition branch FUN_10fd7bc0/80f0/81a0), +0x209 (dev/debug gate)

### CRageBullet::FireHitEvent `@0x1100efe0` — skills/rage-projectile
*Handles a 'RageBullet' projectile hit. Resolves the RageBullet entity class (vfunc +4 -> FUN 'RageBullet' name lookup -> +0x150), then resolves a hit target from param_3 via DAT_1202e818+0xd0 hit system (+0x90 -> +0x7c). If param_2==0 (server-hit path): calls CActor::FireServerOnHitScriptEvent(target.entityId at +8) or with 0xffffffff when no target. If param_2==1 (local path): FUN_11001740(target+8) and sets bullet vfunc +0xc4(1).* (conf medium)
- ƒ target = (DAT_1202e818+0xd0)[+0x90] vfunc +0x7c (param_3)
- ƒ param_2==0: CActor::FireServerOnHitScriptEvent(target?*(target+8):0xffffffff)
- ƒ param_2==1: FUN_11001740(*(target+8)); bullet vfunc +0xc4(1)

### CSkillDisplayInfo::ParseConfig `@0x1182d330` — skills
*Config loader for a skill display/definition record with associated buffs. Reads id fields, resolves skill type/category, level, group counters, name/ICON/Tips/SkillVideoID, and a decoded buff-id list; registers each buff and adds itself to a vector at +0xac.* (conf medium)
- ƒ +0x10, +0x14 = two id/int fields; +0x18 = wide-string name; type = FUN_118998f0(name) -> +0x40.
- ƒ Guard: proceeds only if type != 0xd (13) and FUN_11679c30() != 0 (context/server-side flag).
- ƒ +0x44 = level field, then decremented by 1: if result == -1 increments counter array &DAT_12397564[type*4], else increments &DAT_12397598[type*4] and reads +0x48, +0x4c and registers mapping (FUN_1169f290).
- ƒ String name -> +0x54 area name, ICON -> +0x8c, Tips wide-string, SkillVideoID string.
- ƒ buffCount = DecodeBuffIdList(SkillVideoID-string, param_1+0x54, 0xd) -> +0x50; loops registering each buff via FUN_1169ef30(buffId, *(param_1+0x10)).
- ƒ Self appended to vector at param_1+0xac (grow at +0xb0).

### CSkillInfo::FindBySkillId `@0x116cd660` — skills
*Looks up a static skill definition by skill id via the CSkillInfo manager, bounds-checks the group array, and on success returns the resolved row (FUN_116cd100).* (conf high)
- ƒ groupIndex = skillId/100000 - *(mgr+0x24) (base group id).
- ƒ Valid if groupIndex in [0, (*(mgr+0x18)-*(mgr+0x14))>>2) and *(mgr+0x14 array[groupIndex]) != 0.
- ƒ So skill IDs encode group = skillId/100000.

### CSkillInfo::ParseConfig `@0x116cdd50` — skills
*Core static skill-definition config parser. Reads skill id, level, the four special-attack status buildup values, town/angry flags, then branches on skill-type code to read fire-mode/anim/group/attack fields, and finally common event/name fields. Registers itself into a vector at param_1+0x137.* (conf medium)
- ƒ param_1[5] = skillid; param_1[6] = level (forced to 1 if 0).
- ƒ skillType = vtbl+0x3c() (local_464/piVar1); switch cases 1,2,3,9 vs 4-8 vs 5,6,7 select different field sets.
- ƒ SkillSpecialAttack_Paraylze -> param_1[9] (read as double, stored (int)(float)); SkillSpecialAttack_Poison -> param_1[7]; SkillSpecialAttack_Sleep -> param_1[8]; SkillSpecialAttack_Dynamite -> param_1[10].
- ƒ IsTown -> *(bool*)(param_1+0xb) = (val==1); IsAngry -> *(bool*)((int)param_1+0x2d) = (val==1).
- ƒ group1..group4 -> param_1[0x2c],[0x2d],[0x2e],[0x2f].
- ƒ type in {1,2,9}: FireModeName -> param_1+0x30. type in {5,6,7}: AnimSeq -> param_1+0x36. type in {1,3,9} also FireModeName -> param_1+0xe.
- ƒ type in {1,4,5,6,7,9}: SkillAttack -> param_1[0x3c], SkillAttrAttack -> param_1[0x3d], SkillSpecialAttack -> param_1[0x3e] (all double default DAT_11de9978), AttackInfo string -> param_1+0x3f.
- ƒ type in {1,9}: three ids -> param_1[0x45],[0x46],[0x49]; type 2: CBEvent string -> param_1+0x4b.
- ƒ Common: FUN_1186f860 parsed lists -> param_1[0x58], param_1[0xa4], param_1[0xf0]; string fields param_1+0x59, +99(0x63), +0x9d(eventname), +0xa5, +0xaf, +0xf1, +0xfb.

### CSkillSystem::CanChooseSkill `@0x1157bc20` — skills/casting
*Validates that a target skill can be chosen/cast. Resolves target via vtbl(+0x90); reads its type via vtbl(+0x3c). type==2 or type==3 branches require the owner's action state (vtbl +0xa8) to be idle (==0) else -2. If no combo context (FUN_11398e60==null) applies a rate-limited retry counter (DAT_11dfa7d0=10 / DAT_11dfa7d4=9 budget) returning -3 when exhausted; otherwise calls combo vtbl(+0x11c)(target[0x13]) and returns 0 on success or -4.* (conf medium)
- ƒ return 0 = OK; -1 (0xffffffff) no target; -2 (0xfffffffe) busy state; -3 (0xfffffffd) throttled/no-context; -4 (0xfffffffc) predicate failed
- ƒ type 2 retry budget DAT_11dfa7d0 init 10, type 3 budget DAT_11dfa7d4 init 9; decrement each fail, <1 -> reject
- ƒ throttled log id "CSkillSystem_CanChooseSkill"

### CTalentInfo::GetTalentRecordById `@108765a0` — skills/talent
*Data-table accessor: returns the talent record pointer for a given talent id from the CTalentInfo manager (2D row/column table). Singleton via CTalentInfo::GetInfoMgrSingleton, fallback CInfoManager::FindByName("CTalentInfo"). This is the core id->record resolver used across talent UI.* (conf high)
- ƒ mgr fields: [8]=row-pointer array base, [9]=totalCount, [10]=columnCount(rowStride), [0xc]=baseId
- ƒ guard: param_1 != -1; if param_1==0 require mgr[0xc]==0; require mgr[10]!=0
- ƒ idx = param_1 - mgr[0xc]; guard 0 <= idx < mgr[9]
- ƒ row = *(mgr[8] + (idx / mgr[10]) * 4); if row!=0 return *(row + (idx % mgr[10]) * 4)
- ƒ else return 0

### EquipRandPassiveSkillActivateActionDef::ctor `@0x1177eb00` — skills/content
*Trivial content-definition constructor: initializes list head (+0x10/+0x14 = self) and sets type name 'EquipRandPassiveSkillActivateActionDef'.* (conf medium)

### EquipRandPassiveSkillActivateActionDef::ctor_dup `@0x117807e0` — skills/content
*Duplicate/second-registration constructor for 'EquipRandPassiveSkillActivateActionDef'.* (conf medium)

### EquipRandPassiveSkillActivateSetDef::ctor `@0x1177eb30` — skills/content
*Trivial content-def constructor for 'EquipRandPassiveSkillActivateSetDef' (list head init + name).* (conf medium)

### EquipRandPassiveSkillActivateSetDef::ctor_dup `@0x11780810` — skills/content
*Duplicate constructor for 'EquipRandPassiveSkillActivateSetDef'.* (conf medium)

### EquipSkillPointCheckDef::Load `@0x11782630` — skills/content
*Loads an EquipSkillPointCheck condition from a data node: reads 'SkillGroup' -> param_1+4 and 'Point' -> param_1+8.* (conf medium)
- ƒ param_1+4 = SkillGroup id; param_1+8 = required Point (skill points).
- $ Point = required skill-point threshold.

### EquipSkillPointCheckDef::ctor `@0x1177eb60` — skills/content
*Trivial content-def constructor for 'EquipSkillPointCheckDef' (skill-point requirement condition).* (conf medium)

### EquipSkillPointCheckDef::ctor_dup `@0x11780840` — skills/content
*Duplicate constructor for 'EquipSkillPointCheckDef'.* (conf medium)

### EquipSkillsPointAllCheckDef::Load `@0x11782680` — skills/content
*Loads an EquipSkillsPointAllCheck condition: reads 'SkillsPointAll' -> param_1+4.* (conf medium)
- ƒ param_1+4 = SkillsPointAll (total skill points required).
- $ SkillsPointAll = total-skill-points threshold.

### EquipSkillsPointAllCheckDef::ctor `@0x1177eb90` — skills/content
*Trivial content-def constructor for 'EquipSkillsPointAllCheckDef' (total-skill-points condition).* (conf medium)

### EquipSkillsPointAllCheckDef::ctor_dup `@0x11780870` — skills/content
*Duplicate constructor for 'EquipSkillsPointAllCheckDef'.* (conf medium)

### GetEnumId_SkillGroup `@0x11759d60` — skills
*Returns the registered enum/type id for 'SkillGroup' (one-time registered via FUN_1024f010), writing DAT_12391d84 to *param_1.* (conf medium)

### GetEnumId_SkillVideo `@0x11921420` — skills
*Returns the registered enum id for 'SkillVideo' (DAT_1239f318) into *param_1.* (conf medium)

### MHUI::BuildActiveProfoundSkillDataVO `@1087a9e0` — skills/profound
*'GetActiveProfoundSkillData' callback: builds the currently-active/equipped profound-skill slot VO for a weapon. Enumerates up to 3 profound slots (minus one if a set is active), resolving each slot's profound record through a 2D config table lookup, and emits status(=1), profoundID, profoundIndex, strprofoundTips, isActivateSkill(=1), profoundIcon(rec+0x1b4), profoundName, weaponType, video_file(rec+0x194), profoundDescribe.* (conf medium)
- ƒ slotCount iStack_5c = 3 - (currentSet(iVar3 from vtbl 0x2af4->0x10)(weaponType) != 0 ? 1 : 0)
- ƒ per-slot profound id resolution differs by *(profoundInfo+0x40): ==0 uses slot index array *(info+0x50 + resolvedIdx*4); !=0 uses *(info+0x54); resolvedIdx then run through a 2D table on FUN_107d45b0 result: base+0x20 rows, +0x24 count, +0x28 colCount, +0x30 baseId (idx = raw - base; row=*(tbl+0x20 + (idx/col)*4); val=*(row + (idx%col)*4))
- ƒ guard: idx != -1, (idx!=0 \|\| *(t+0x30)==0), *(t+0x28)!=0, 0 <= idx-*(t+0x30) < *(t+0x24)

### MHUI::BuildEquipSkillBuffVO `@10866ba0` — skills/equip-buff
*Scaleform VO builder for an equipment-skill buff tooltip. Gated arg count==1. Requires local player character with *(char+0x2d1c)!=0. Looks up equip-skill-buff record via FUN_113f9820(index). Emits m_nEquipSkillBuffLevel = rec+0x24 and m_nEquipSkillBuffDesc (formatted string from rec+0x1c/+0x20/+0x24).* (conf medium)
- ƒ gate: argCount==1 AND char+0x2d1c != 0
- ƒ rec = FUN_113f9820(bufIndex local_44)
- ƒ m_nEquipSkillBuffLevel = *(rec+0x24)
- ƒ m_nEquipSkillBuffDesc = format(*(rec+0x20), *(rec+0x1c)) into local_24 buffer (rec+0xc)

### MHUI::BuildEquipSuitSetBonusVO `@10862710` — skills/suit-set-bonus
*Scaleform VO builder for equipment SUIT (armor set) bonuses. Reads GFx args (param_4 +8 obj, +0x20 bool m_bIsLocal-style flag, +0x34 flags, +0x38 handler). Requires local-player character (DAT_1202e818->0xd0->0x90 vtbl+0xb4). If not the 'other-config' path (uStack_160._3_1_==0), builds the player's own active suit-skill set: scans an active-suit-skill id array at char+0x5b2 (17 slots, index 0..0x10), copies nonzero ids into a working list via FUN_10871a00; then resolves the suit skill group (CEquipSuitSkillGroupInfo::GetSuitSkillId) and finds the matching group by scanning char+0x8b6 with stride 0x102 for up to 0x80 groups. Calls CEquipInfo::BuildSuitSetBonusDisplay to fill display records, then emits per-equip rows (m_strEquipName/m_bIsAct) and per-effect rows (m_strEffectName, m_strEffectTips, m_nEffectTotalNeed, m_nOtherEquipNeed, m_nOtherEquipAct, m_nSelfConfigSkillNeedCnt, m_nSelfConfigSkillActCnt, m_nType, m_nIndentationIndex, m_vecDesc) plus m_vecSuitDesc/m_vecEffectDesc.* (conf medium)
- ƒ active-suit-skill id array: char[0x5b2 + i], i in [0,0x11) (17 entries); nonzero => appended
- ƒ suit-group table: base char+0x8b6, stride 0x102 ints, up to 0x80 groups; match where *ptr == GetSuitSkillId result; matched group id = char[i*0x102 + 0x8b7]
- ƒ effect-descriptor vector: base puStack_10c/uStack_104, element stride = 0x38 (56) bytes; count = (end - begin)/0x38. Fields: +8 m_bIsAct(byte), +0xc m_nEffectTotalNeed, +0x1c m_nOtherEquipNeed, +0x20 m_nOtherEquipAct, +0x24 m_nSelfConfigSkillNeedCnt, +0x28 m_nSelfConfigSkillActCnt, +0x2c m_nType, +0x30 m_nIndentationIndex, +0x10/+0x14 inner equip-name vector (stride 8, +4 m_bIsAct)
- ƒ equip-list vector element stride = 8 bytes; local_120[i*2+1] = m_bIsAct byte

### MHUI::BuildPassiveSkillDataRows `@1088eaa0` — skills/passive
*Populates passive-skill rows into a GFx object from a source record. Reads passiveSkillLength and arrayPassiveSkillData from the object, then walks the source record's passive vector [rec+0x21c..rec+0x220) (stride 8: [0]=groupID, [1]=value), bounded by passiveSkillLength. For each entry resolves the skill via FUN_1050ebc0 and emits passiveSkillGroupID, passiveSkillValue, passiveSkillName (from resolved rec+0x24/+0x28).* (conf medium)
- ƒ passive vector: rec+0x21c(begin)..rec+0x220(end), stride 8: entry[0]=passiveSkillGroupID, entry[1]=passiveSkillValue
- ƒ iteration bound = min(vectorCount, passiveSkillLength(local_24))
- ƒ passiveSkillName built via FUN_100b62c0(*(skillRec+0x28), *(skillRec+0x24))

### MHUI::BuildPassiveSkillListVO `@1085bcb0` — skills/passive
*Scaleform VO builder for the equipment passive-skill list (passiveSkillTitle + parallel arrays arrayPassiveSkillValue / arrayPassiveSkillDesc / arrayPassiveSkillEnabled). Gated on arg count==4. Resolves an info record via FUN_10254130 (equip/item info by id) and requires *(rec+0x34)==2. Iterates the record's passive-skill vector [rec+0x21c .. rec+0x220) (stride 8: [0]=skillId, [1]=value/level). Looks up each skill name/desc via FUN_1050ebc0 and FUN_108199e0 and pushes rows.* (conf medium)
- ƒ gate: argCount(in_stack_00000014) == 4 and *(rec+0x34) == 2
- ƒ passive-entry vector at rec+0x21c(begin)..rec+0x220(end), stride = 8 bytes: entry[0]=skillId, entry[1]=passiveValue
- ƒ value string id = 0x13a5 if entry[1] >= 0 else 0x13a6 (sign-encoded +/- passive)
- ƒ FUN_1050ebc0(skillId) resolves skill; 0 => name-only fallback

### MHUI::BuildProfoundSkillDataVO `@1087a4c0` — skills/profound
*'GetProfoundSkillData' callback: builds the profound-skill (deep/awaken weapon skill) list VO for a weapon type. Emits SKILL_VIDEO_PROFOUND_DATA_VO_CLASSNAME rows with status, isWeaponProfound, profoundID, strprofoundTips, isActivateSkill(=0), profoundIcon, profoundName, weaponType, video_file, profoundDescribe. Iterates all CNewSkillInfo records (count=FUN_108768a0, record=FUN_10876810(i)), filtering by effectId(rec+0x40)==weaponType (or 0) and rank(rec+0x44)>=0. Enforces a hunt-rank unlock gate via CPlayer::GetHuntRankOrCount.* (conf medium)
- ƒ record filter: *(rec+0x44) >= 0 AND ( *(rec+0x40)==weaponType OR (*(rec+0x40)==0 AND weaponType==0) )
- ƒ unlock gate: if profound info not already unlocked (FUN_112b4000/FUN_112b4040 both false) AND CPlayer::GetHuntRankOrCount() < requiredRank(puStack_48) => skip record
- ƒ status = FUN_1087c890(weaponType, profoundId=*(rec+0x10))
- ƒ profoundID = *(rec+0x10); profoundIcon = infoRec[0x6d]; video_file = infoRec[0x65]
- ƒ weaponType arg deref: args[7] type 3/4 => args[8] else 0xdeadbeaf
- $ unlock requirement: hunter-rank/hunt-count threshold (puStack_48) gating profound skill availability; server-authoritative.

### MHUI::BuildRandPassiveSkillVO `@1085b470` — skills/passive
*Scaleform VO builder for an equipment 'random passive skill' panel. Gated on param_5==3. Reads a GFx-arg struct at param_4 (offsets +4/+8 obj, +0x1c/+0x20 str, +0x34 flags, +0x38 handler, +0x3c/+0x40). Requires the local player's active weapon/equip context (DAT_1202e818->0xd0->0x90 vtbl+0xb4 -> character, needs *(char+0x2d1c)!=0). Resolves the equip's rand-passive-skill data via FUN_113f9bb0 and, when the item is a hidden skill (bIsHidden, iVar3==1 branch), computes the reveal cost via CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance -> nVisibleMoney. Emits title, PASSIVESKILL_VO_CLASSNAME rows, arrayRandPassiveSkillDesc, and per-entry activateInfoList (ACTIVATE_VO_CLASSNAME, nType) via CPet::SetName/FUN_104d15xx setters.* (conf medium)
- ƒ gate: param_5 == 3
- ƒ GFx value type mask: (*(param_4+k) & 0x8f) with 3/4=number-ref used to deref obj/str fields; (flags>>6&1) => managed/heap-string pointer indirection (stock GFx Value plumbing)
- ƒ bIsHidden set from iVar3(entry)==1; only then nVisibleMoney (reveal cost) is emitted
- ƒ per-passive-entry iteration stride = 0x1c bytes (piStack_118 = (iStack_d0 - piStack_d4)/0x1c); entry fields read at +0(id/type), +4,+8(iStack_88 group/id), +0xc,+0x10,+0x18 (uStack_80 pair)
- ƒ activate-name string id = 0x13a5 + (iStack_88 < 0)  (negative -> 0x13a6)
- $ nVisibleMoney: currency required to reveal a hidden equip passive skill (value produced by CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance for the entry). Amount is data-driven; this code only reads/displays it.

### MHUI::BuildSkillCompletionRatesVO `@10878ba0` — skills/progression
*Scaleform VO builder emitting three completion-percentage values for the current weapon: profoundFinishRate (FUN_112f04a0), skillFinishRate (FUN_112f04b0), talentFinishRate (FUN_112f04c0). Requires local player character + weapon subobject (char+0x14 vtbl+4). Uses FUN_112b3da0 to init a stats context from the weapon type arg.* (conf medium)
- ƒ profoundFinishRate = FUN_112f04a0()
- ƒ skillFinishRate = FUN_112f04b0()
- ƒ talentFinishRate = FUN_112f04c0()
- ƒ weapon type arg deref: args[7] type 3/4 => args[8], else 0xdeadbeaf

### MHUI::BuildSkillItemInfoVO `@108a86a0` — skills/skill-item
*Scaleform VO builder for a 'skill item' (consumable/equippable that grants an active skill with a cooldown). Given an item id, checks the special-skill-item id (FUN_116a6a70()+0x100) vs a skill-count table (FUN_108a8a30). Emits m_bSkillItem, m_nSkillCount, m_nSkillCDTime, m_strSkillName, m_nSkillId, and m_nCDTime. Converts the CD to milliseconds.* (conf medium)
- ƒ if *(FUN_116a6a70()+0x100) == itemId: use FUN_108a8910 (equipped-skill path) else if FUN_108a8a30(itemId) >= 1: use FUN_108a89a0(FUN_108a8a30(itemId))
- ƒ on success: m_nSkillCount=uStack_44, m_nSkillCDTime=iStack_40, m_nSkillId=puStack_14, m_strSkillName=puStack_18; m_nCDTime = iStack_40 * 1000  (seconds -> milliseconds)
- ƒ on failure: all zeroed, m_nCDTime = 0
- ƒ out-VO ready byte = success char

### MHUI::BuildWeaponSkillListVO `@10877c00` — skills/weapon-skill
*Scaleform VO builder producing the full weapon skill list ('SkillListData'). Iterates the runtime skill-record list (manager via FUN_107d45b0; list at mgr+0x14, count via vtbl+0x28) and, for records whose weapon-class field (rec[5]) matches the requested class (piStack_130), emits per-skill rows: skillid (vtbl+0x18 GetId), skill_name, skill_status, skill_content, video_file, special, profoundIcon, unlockTips, gp_num, skill_gp_op_str1/2/3, skill_gp_op_img1/2/3, gp_skill_content, bequipped, bIsProFoundMeaning, profoundmeaning1/2, unlockHunterstarLevel. Uses CNewSkillInfo::BuildSkillDisplayList for profound-meaning rows.* (conf medium)
- ƒ record fields read: rec[4]=skillId(for bequipped compare), rec[5]=weaponClassId(filter == piStack_130), rec[0x15]==2 selects gp/dual-mode branch, rec[0x30]=gp_num, rec[0x3d]/[0x4a]/[0x57]=skill_gp_op_img1/2/3, rec[0x5f]=special/video, rec[0x65]=video_file, rec[0x67]=byte(isProfound flag)
- ƒ list iterate: for i in [0,count): rec = *(mgr[0x14] + i*4); count clamp via (*(mgr+0x18)-*(mgr+0x14))>>2
- ƒ profound-meaning slot counter pppiStack_190 increments; slot 1 -> 'profoundmeaning1', slot 2 -> 'profoundmeaning2'
- ƒ bequipped = (displayEntry[0x12] == 1) for entry whose [3]==rec[4]; display-entry stride 0x13 words (0x4c bytes, matches schema CNewSkillInfo display stride)

### SkillDegreeContentDef::Load `@0x117857d0` — skills/content
*Loads a skill/degree node: 'Skill' -> +4, 'Degree' -> +8.* (conf medium)
- ƒ param_1+4 = Skill id; param_1+8 = Degree.
- $ Degree = skill degree/rank value.

### SkillManufactureLevelContentDef::Load `@0x11785820` — skills/content
*Loads a skill/manufacture-level node: 'Skill' -> +4 (int), 'ManufactureLevel' -> +8 (read via FUN_118a6e70/FUN_118a68e0, likely float/typed).* (conf medium)
- ƒ param_1+4 = Skill id; param_1+8 = ManufactureLevel.
- $ ManufactureLevel = required manufacture (crafting) skill level.

### SkillSysChecker::EnsureTimer `@0x116152a0` — skills/checker
*Registers the 1000ms periodic skill-check timer if not already set; returns the timer handle (this+0x4c).* (conf high)
- ƒ periodic 1000ms timer FUN_11615090

### SkillSysChecker::RegisterTimer `@0x11615040` — skills/checker
*Runs FUN_116151a0(playerId from FUN_1141bd30) then, if no timer registered (this+0x4c==-1), schedules a 1000ms periodic skill-check timer (FUN_11615090).* (conf high)
- ƒ periodic timer 1000ms: FUN_100ea610(name, 1000, 0, this, FUN_11615090, 0)

### SkillSysChecker::ScheduleBuffCheck `@0x116151a0` — skills/checker
*For player param_2 not already tracked (BST at this+0x34), schedules a buff-consistency check with a fixed deviation of 1000ms: deadline = serverTime(vtbl+0xb4) + BuffCheckDeviation(1000), enqueued via FUN_11615550.* (conf medium)
- ƒ deviation constant = 1000 (config key "BuffCheckDeviation")
- ƒ deadline = playerNet->vtbl+0xb4() + 1000
- ƒ BST search on node[0x10] vs param_2 to avoid duplicates
- $ BuffCheckDeviation = 1000 (ms)

### SkillUseCountContentDef::Load `@0x11785f50` — skills/content
*Loads a skill-use-count content node: parses TaskBuffFilterDef base, then resolves 'Skill' via CSkillInfo::FindBySkillId (FUN_116cd660) into +0x20 (fallback FUN_118a70b0), and 'Count' -> +0x24.* (conf medium)
- ƒ Skill id resolved through FUN_116cd660(skillId); if 0 -> fallback FUN_118a70b0() stored at +0x20.
- ƒ param_1+0x24 = Count.
- $ Count = required number of skill uses.

### SoulBeastSoulStoneSkillLevelCheckDef::Load `@0x11783ad0` — skills/content
*Loads a soul-stone skill-level condition: 'Skill' -> param_1+4, 'Level' -> param_1+8.* (conf medium)
- ƒ param_1+4 = Skill id; param_1+8 = required Level.
- $ Level = required soul-stone skill level.

### SoulBeastSoulStoneSkillLevelCheckDef::ctor `@0x1177f490` — skills/content
*Trivial content-def constructor for 'SoulBeastSoulStoneSkillLevelCheckDef' (soul-stone skill-level condition).* (conf medium)

### SoulBeastSoulStoneSkillLevelCheckDef::ctor_dup `@0x11781170` — skills/content
*Duplicate constructor for 'SoulBeastSoulStoneSkillLevelCheckDef'.* (conf medium)

### SoulBeastSoulStoneSkillLevelsCheckDef::ctor `@0x1177f4c0` — skills/content
*Trivial content-def constructor for 'SoulBeastSoulStoneSkillLevelsCheckDef' (multi soul-stone skill-level condition).* (conf medium)

### SoulBeastSoulStoneSkillLevelsCheckDef::ctor_dup `@0x117811a0` — skills/content
*Duplicate constructor for 'SoulBeastSoulStoneSkillLevelsCheckDef'.* (conf medium)

### SpeakUseSkillContentDef::Load `@0x11783f50` — skills/content
*Loads a speak-use-skill content node: id -> +4, 'Skill' -> +8, 'Count' -> +0xc.* (conf medium)
- ƒ param_1+4 = id; param_1+8 = Skill id; param_1+0xc = Count.
- $ Count = number of skill uses.

### SpeakUseSkillContentDef::ctor `@0x1177f640` — skills/content
*Trivial content-def constructor for 'SpeakUseSkillContentDef' (speak action that uses a skill).* (conf medium)

### SpeakUseSkillContentDef::ctor_dup `@0x11781320` — skills/content
*Duplicate constructor for 'SpeakUseSkillContentDef'.* (conf medium)

### TaskAccSuitSkillUnlockContentDef::ctor `@0x1177f730` — skills/content
*Trivial content-def constructor for 'TaskAccSuitSkillUnlockContentDef' (task content unlocking an accessory-suit skill).* (conf medium)

### TaskAccSuitSkillUnlockContentDef::ctor_dup `@0x11781410` — skills/content
*Duplicate constructor for 'TaskAccSuitSkillUnlockContentDef'.* (conf medium)

### TaskUseSkillContentDef::Load `@0x11785870` — skills/content
*Loads a task-use-skill content node: first parses the TaskBuffFilterDef base (FUN_11784560), then 'Skill' -> +0x20, 'Level' -> +0x24.* (conf medium)
- ƒ Base filter fields 0x4-0x14 (via FUN_11784560); param_1+0x20 = Skill id; param_1+0x24 = Level.
- $ Level = required skill level.

### TaskUseSkillContentDef::ctor `@0x117805d0` — skills/content
*Trivial content-def constructor for 'TaskUseSkillContentDef' (task content requiring skill use).* (conf medium)

### TaskUseSkillContentDef::ctor_dup `@0x117822b0` — skills/content
*Duplicate constructor for 'TaskUseSkillContentDef'.* (conf medium)


## pet  (88)

### BuildPetMonsterSkillListVO `@0x10971170` — pet-monster-skills
*Builds the VO/data payload returned to UI for a pet-monster's skill loadout. Reads the pet's skill array (from the game context object at DAT_1202e818+0xd0->+0x90 vtbl+0xb4) and emits a list of up to 5 skill entries, each with nSkillIndex, nSkillID, strSkillName, bEnabled.* (conf medium)
- ƒ class name PET_MONSTER_SKILL_VO_CLASSNAME; array key "skillList"
- ƒ loop iVar3 = 1; do { ...; iVar3++ } while (iVar3 < 6)   // 5 skill slots, 1-indexed
- ƒ per slot: nSkillIndex = iVar3; nSkillID = uVar8 (read from pet skill container)
- ƒ if nSkillID > 0: skillId->def via uVar4=FUN_1182e200(nSkillID,0); iVar5=FUN_10970c70(uVar4) (CPetMonsterSkillInfo lookup); name record iVar5=FUN_100e5b40(); strSkillName = *(iVar5+0x14)
- ƒ bEnabled = ( (vtbl+0x1c)(nSkillID) == 0 )   // note inverted sense
- ƒ field setters: FUN_104d1550=int, FUN_104d1670=string, FUN_104d15e0=bool

### CBattlePet::OpenSkillPanel_IfInGame `@0x105164f0` — pet-skill-ui
*If UI mode ((DAT_123bcdb4 & 0x8f) in {8,9,10}) fires AS 'OpenBattlePetSkillPanel'. Mode 8/9/10 = in-game contexts.* (conf high)
- ƒ gate: (DAT_123bcdb4 & 0x8f) == 8 \|\| 9 \|\| 10; AS-mode flag = (mode==10)

### CBattlePet::TryOpenSkillPanel_OnState5 `@0x10511fc0` — pet-skill-ui
*If gate FUN_1050a550(0x2d) (feature/quest flag id 0x2d) is true AND *(param_1+0x180)==5 (pet state == 5), fires AS event 'OpenBattlePetSkillPanel' via the UI dispatcher.* (conf medium)
- ƒ condition: FUN_1050a550(0x2d)!=0 && *(this+0x180)==5
- ƒ AS-mode arg: ((byte)DAT_123bcdb4 & 0x8f)==10

### CFarmPetModel::BuildCollectPetAndPlantVO `@108e2bb0` — pet-farm / garden (collect-pet + plant)
*Client UI builder for the farm/garden panel: builds a CP_VO_CLASSNAME list of 'collect pets' (0x98 entries) and a PLANT_VO_CLASSNAME list of 3 plant plots, computing collectability and remaining time from server timestamps. Uses _time64 for now.* (conf medium)
- ƒ Collect-pet loop: iterates iVar3 = 0..0x97 (0x98=152 slots); per-slot record pointer piVar9 advances +5 ints (0x14 bytes). level = (short)*piVar9.
- ƒ maxLevel = *(int*)(FUN_117c7e70() + petTypeOffset).
- ƒ canCollect logic: _Var11 = _time64(0); now = (int)_Var11. If ( *(short*)((int)piVar9+2)==0 && piVar9[1]!=0 && ((uint)(now - piVar9[1]))/0x3c < *(uint*)(cfg+0x1c) ) then canCollect=0 else 1. (0x3c=60, converts seconds to minutes; cfg+0x1c = required minutes.)
- ƒ totalTime = (piVar9[1] + *(int*)(cfg+0x1c) * 0x3c) - now   (start-timestamp + requiredMinutes*60 - now = seconds remaining).
- ƒ If cfg (FUN_108e1450 result) is null: canCollect emitted with no value (default) and totalTime=0.
- ƒ Plant loop: 3 plots (iVar3<3), record piVar7 advances +3 ints. seedID via FUN_10254130; state=*(piVar7+2). totalTime = FUN_114219c0(0,iVar3) (server remaining time). canCollect = (iVar6!=0 && iVar8<=0) ? 1 : 0 where iVar8 = totalTime.
- ƒ petSkillList emitted as nested list per collect-pet (FUN_11a98a70 array + setter vtbl+0x14).
- $ cfg+0x1c = required grow/produce minutes per collect-pet type (time gate, not currency).

### CPetAddGroupBuff::RegisterNodeParams `@0x10aa5ed0` — pet-buff
*Registers the behavior-tree node "CPetAddGroupBuff" and its parameters: GroupId(int, slot0 type5) and InputBBName(blackboard input, slot1 type1). Pet applies a group buff by GroupId.* (conf high)
- ƒ FUN_1048b080("CPetAddGroupBuff","GroupId", slot=0, type=5, isBB=0)
- ƒ FUN_1048b080("CPetAddGroupBuff","InputBBName", slot=1, type=1, isBB=1)

### CPetBufferPanel::BuildEquipAndBufferVO `@0x10531e90` — pet-equip-ui
*Builds a pet equip/buffer-food VO. Resolves player (FUN_107cb630) and validates has-pet (FUN_116698a0). Reads two AS input variants (arg struct in_stack_00000010) for slot indices; for each valid slot resolves item id (FUN_11669730/FUN_1166dc70 depending on FUN_1166e250) and buffer id, then writes itemID/bufferID/equipName/bufferName. Buffer name resolved via string-table id 0x159d when no direct name.* (conf low)
- ƒ sentinel/no-value marker = -0x21524151 (0xDEADBEAF) for offsets 0x38/0x50 when tag (&0x8f) not in {3,4}
- ƒ itemID = FUN_1166e250()? FUN_1166dc70() : FUN_11669730()
- ƒ bufferID = FUN_1166e040(); string id 0x159d (5533) used to format buffer name when FUN_116c4f30()==0
- ƒ second slot guarded by iStack_90+1 < 4 (max 3 buffer slots)
- $ string-table entry 0x159d for default buffer name

### CPetFarmSkill::AggregateFarmBonuses `@0x115873d0` — pet/farm-skill
*Iterates the equipped farm-skill list (this+4..+8, stride 3) and aggregates farming bonus stats into a 10-field output block (param_2). Only runs when context (*this[0][0x1c][0x1c])==1 else returns 0x759a. Per matching farm-skill row (via FUN_1158ad60 predicate), mutates the accumulator.* (conf high)
- ƒ out[2] += row[0x1c]  (flat add)
- ƒ out[3] = ((row[0x20] + 100) / 100) * out[3]  (percent multiplier, +row%)
- ƒ out[4] = ((100 - row[0x24]) / 100) * out[4]  (percent reduction, -row%)
- ƒ out[5] -= row[0x28]  (flat subtract)
- ƒ out[7] = ((row[0x2c] + 100) / 100) * out[7]  (percent multiplier)
- ƒ out[6] += row[0x30]  (flat add)
- ƒ global counter _DAT_122df248 incremented per applied skill
- $ row[0x1c] flat bonus
- $ row[0x20] % increase
- $ row[0x24] % reduction
- $ row[0x28] flat reduction
- $ row[0x2c] % increase
- $ row[0x30] flat bonus
- $ 0x759a not-in-farm-context

### CPetFarmSkill::GetById `@0x11587f60` — pet/farm-skill
*2D-sparse lookup returning CPetFarmSkill* by id.* (conf high)
- ƒ standard 2D lookup

### CPetFarmSkill::GetByIndex `@0x11928460` — pet-skills
*Linear-index lookup into the CPetFarmSkill table (pet farm/gather-skill config).* (conf high)
- ƒ valid if 0<=index<((mgr+0x18 - mgr+0x14)>>2); return array[index].

### CPetFarmSkill::GetManagers `@0x11585710` — pet/farm-skill
*Singleton manager accessor for CPetFarmSkill info table (RegisterAndGetSingleton + CInfoManager::FindByName fallback).* (conf high)
- ƒ stock CInfoManager singleton registration (flag DAT_122df244, ptr DAT_122df228)

### CPetFarmSkill::GetSingleton `@0x11587970` — pet/farm-skill
*Returns the CPetFarmSkill manager singleton pointer (or 0).* (conf high)
- ƒ stock singleton accessor (DAT_122df228)

### CPetFarmSkill::precacheAllRows `@0x11928510` — pet-skills
*Iterates all CPetFarmSkill rows at load, registering/precaching each valid row (FUN_11a17f70).* (conf medium)
- ƒ count = vtbl+0x28(); loops 0..count precaching rows.

### CPetGiftSkillInfo::GetById `@112f6f90` — pet-skill
*CInfoManager sparse lookup returning a CPetGiftSkillInfo entry by id.* (conf high)
- ƒ standard sparse lookup

### CPetInfoPanel::BuildPetDetailVO_ByLookup `@0x105145c0` — pet-info-ui
*Builds a full pet detail VO. FUN_112f64e0(param_3,param_2,&local_12c) looks up a pet record by key; if found (local_12c!=0) writes ~50 fields (name, type, status, level, indices, stats). If petType local_ec==0 (combat pet) also writes the full combat stat block (attack/defense/elemental attacks & resistances, fightwill, lucklevel).* (conf medium)
- ƒ guard: param_5!=0; record found if local_12c(petid)!=0
- ƒ combat-stat block emitted only when petType (local_ec)==0
- ƒ fields: strName,petType,status,otherStatus,level,petindex,petid,intelligence,proficientcy,character,quality,exp_max,intimacy,intimacyvalue,fluteskillEquipped,fluteskilltotal,normalskillEquipped,normalskilltotal,skillpointleft,petcolordescription,traintime,maxLevel; combat: fightwill(_max),attacktype,attacktrend,attack(_max),hp_max,defense(_max),fire/water/thunder/ice/dragon/poison/sleepy/paralysisattack,fire/water/thunder/ice/dragonendure,lucklevel

### CPetInfoPanel::BuildPetInfoVO `@0x10514a90` — pet-info-ui
*Builds the '_PetInfo' VO from the this-object's pet struct and pushes it to Flash; then sets max item counts and refreshes the panel. Reads pet fields from fixed offsets on param_1, and looks up CPetStarInfo::FindByKey3(intelligence,quality,character) to derive item caps.* (conf high)
- ƒ pet struct offsets on param_1: petType@0x84, status@0x54, otherStatus@0x58, level@0x60, petindex@0x48, petid@0x44(*ppiVar3), altId@0x4c, intelligence@0x74, proficientcy@0x80, character@0x7c, quality@0x78, exp@0x64, exp_max@0x68, intimacy@0x6c, intimacyvalue@0x70, fluteskillEquipped@0x114, fluteskilltotal@0x118, normalskillEquipped@0x11c, normalskilltotal@0x120, skillpointleft@0x110, renamenum@0x124, traintime@0x128, maxLevel@0x130
- ƒ combat block only if *(param_1+0x84)==0 (petType==0): fightwill@0xb0/max@0xb4, attacktype@0xac, attacktrend@0xa8, attack@0x9c/max@0xa0, hp@0x8c/hp_max@0x90, defense@0x94/max@0x98, fireattack@0xd8,waterattack@0xdc,thunderattack@0xe4,iceattack@0xe0,dragonattack@0xe8,poisonattack@0xec,sleepyattack@0xf0,paralysisattack@0xf4, fireendure@0xfc,waterendure@0x100,thunderendure@0x10c,iceendure@0x104,dragonendure@0x108, lucklevel@0xa4
- ƒ item caps from CPetStarInfo record iVar2: setMaxNumInitialtiveItem=*(iVar2+0xa0), setMaxNumPassiveItem=*(iVar2+0xa4), setMaxNumAssistItem=*(iVar2+0xac)+*(iVar2+0xa8)

### CPetMonster::LoadSkillConfigFromXml `@10dcded0` — pet-skill
*Loads '/Libs/PetMonsterSkillConfig.xml' ('PetMonsterSkillConfig' root). For the pet's captured MonsterID: in 'PetMonsters' section sets the 5 active skill slots (First..Fifth) via slotMgr+0x18(slotIndex, skillID); in 'SkillLearn' section iterates learnable skills reading SkillID+Level and registers them via mgr+0x20.* (conf high)
- ƒ resolves MonsterID = FUN_113a23b0()+0x14 only when pet BT ctrl object type (mgr+0xa8)==1
- ƒ PetMonsters/<entry MonsterID==id>: slots 1..5 = attrs First,Second,Third,Fourth,Fifth (slotMgr+0x18(N, skillId))
- ƒ SkillLearn/<entry MonsterID==id>/<skill>: SkillID (default 0), Level (default 1) -> mgr+0x20(&{skillID,level})

### CPetMonsterSkillInfo::GetById `@0x1157e880` — pet/monster-skill
*2D-sparse lookup returning CPetMonsterSkillInfo* for id resolved from (param_1,param_2) via FUN_1182e200.* (conf high)
- ƒ id=FUN_1182e200(p1,p2); standard 2D lookup (base +0x30, stride +0x28, count +0x24, rows +0x20)

### CPetMonsterSkillInfo::GetByIndex `@0x1154de30` — pet/monster-skill
*Flat-vector accessor returning CPetMonsterSkillInfo* at ordinal index.* (conf high)
- ƒ if 0<=idx<((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14]+idx*4)

### CPetMonsterSkillInfo::LookupRecordById `@0x10970c70` — pet-monster-skills
*Indexed lookup into the CPetMonsterSkillInfo data table (pet-monster skill definitions). Resolves the InfoManager singleton (CInfoManager::FindByName("CPetMonsterSkillInfo")), lazily initializes it once via a bitflag guard, then does a paged 2D-array lookup to return the record pointer for a given global skill id.* (conf high)
- ƒ record = *CPetMonsterSkillInfo::GetInfoMgrSingleton(); if null -> CInfoManager::FindByName(vtbl=PTR_FUN_11dde0d4, "CPetMonsterSkillInfo", 0)
- ƒ lazy-init guard: if (DAT_123c87a0 & 1)==0 { DAT_123c87a0\|=1; FUN_10972180(); register(&LAB_11c79bf0); } fallback record=&DAT_123c87a4
- ƒ reject if param_1 == -1 (0xffffffff) -> return 0
- ƒ guard: (param_1!=0 \|\| record[+0x30]==0) && record[+0x28]!=0
- ƒ idx = param_1 - record[+0x30]  (base-id offset)
- ƒ bounds: 0 <= idx < record[+0x24]  (total element count)
- ƒ row = *(int*)(record[+0x20] + (idx / record[+0x28]) * 4)   // record[+0x20]=array-of-row-pointers, record[+0x28]=stride/elems-per-row
- ƒ if row!=0 return *(record4)(row + (idx % record[+0x28]) * 4)

### CPetMonsterSkillInfo::onDestroyOrUnregister `@0x119fbfb0` — pet-skills
*If the context flag FUN_11679c30() is set, unregisters a skill mapping (FUN_1169e9d0 with *(param_1+0x14)) and touches the CPetMonsterSkillInfo manager. Cleanup/teardown of a pet-monster skill record.* (conf medium)
- ƒ Uses skill id at param_1+0x14.

### CPetMonsterSkillSystem::CastSkill `@0x1157e310` — pet/monster-skill
*Activates the pet-monster skill whose id is at this+0x2a. Guards with FUN_1157d5a0 (cooldown/lock). Stops any current action (vtbl+0x48/+0x38), stores skill ptr at this+7. If this+0x23 matches skill+0x14 (same category) copies cached per-slot cooldown/state pairs (this+0x17..0x22 -> this+0x9..0x14); otherwise invalidates 3 cached callback pairs (this+0x1d..). Dispatches cast event 0x6a6 (with skill+0x18 anim, skill[5], skill[6]).* (conf medium)
- ƒ skillId = this[0x2a]; info via CPetMonsterSkillInfo 2D lookup
- ƒ event {0x6a6, -1, -1, ownerId, vtbl+0x18(skill), skill[5], skill[6], 0}
- ƒ same-category test: this[0x23] == skill[0x14]
- ƒ returns 0 on cast, -1 on guard/invalid

### CPetMonsterSkillSystem::SelectUsableSkill `@0x1157e5f0` — pet/monster-skill
*Picks a usable pet-monster skill from a skill's candidate list. Resolves group id from param_2 (FUN_1182e200); guards FUN_1157d650 and owner-can-act vtbl(+0x58). Iterates candidate list [skill+0x4e4 .. +0x4e8] backwards; accepts a candidate iVar1 only if its resolved level-info (FUN_1157a660(cand+0x14))[4] >= cand[0x18]>>1 AND cand+0x2e byte==0 AND FUN_1157e800(cand). Out status: 1=invalid id, 2=no candidate matched.* (conf medium)
- ƒ candidate count = (skill[0x4e8]-skill[0x4e4])>>2 (iterated high->low)
- ƒ accept when NOT( info[4] < (cand[0x18]>>1) \|\| cand[0x2e]!=0 \|\| !FUN_1157e800(cand) )
- ƒ threshold uses cand[0x18] halved (>>1)

### CPetPanel::OnRefreshLearnedSkills `@0x10512480` — pet-skill-ui
*State-gated pet-panel refresh. If flag 0x2d is set: calls FUN_10514a90 (rebuild _PetInfo VO) and fires AS 'RefreshPetLearnedSkills'; also dispatches with *(param_1+0x180) (pet state) as arg. Else if flag 0x7b is set: calls FUN_10510ff0 with *(param_1+0x24) (env/'ShowAsEnviroment' path).* (conf medium)
- ƒ branch: FUN_1050a550(0x2d) then RefreshPetLearnedSkills path; else FUN_1050a550(0x7b) then FUN_10510ff0
- ƒ *(this+0x24)=UI/movie context ptr; *(this+0x180)=pet state

### CPetPanel::PlayOrHideNewSkillEffect `@0x10512580` — pet-skill-ui
*Flag-0x2d gated. Calls CPetPanelUI::BuildEquippedSkillLists then FUN_10514a90. If *(param_2+0xc)==0 fires AS 'HideAllSkillEffects'; otherwise builds an arg array {*(this+0x34), *(this+0x38), *(param_2+8)} and fires both 'HideAllSkillEffects' and 'PlayNewSkillEffect'.* (conf medium)
- ƒ gate: FUN_1050a550(0x2d)
- ƒ toggle: *(param_2+0xc)==0 -> hide only; else play new-skill effect with args (*(this+0x34),*(this+0x38),*(param_2+8))

### CPetPanelUI::BuildSubSkillListVO `@0x105130a0` — pet-skill-ui
*Builds the 'subskills' array of PetSkillItemVO objects for the pet skill panel. Iterates skill-list nodes (CPetSkillInfo::BuildSkillListByCategory fills list at *(this+0x14c)..*(this+0x150)); for each node walks its entries (base *(node+2)[2], end [3], stride 0x2c) and writes per-skill fields into a PetSkillItemVO_CLASS_NAME object.* (conf medium)
- ƒ outer list: node ptr from *(this+0x14c), sentinel *(this+0x150); next node = node+5 (20 bytes)
- ƒ inner entry loop: for(iVar7=node[2]; iVar7!=node[3]; iVar7+=0x2c)
- ƒ PetSkillItem entry offsets: bAssemble=byte@+0x14, skillPoint=int@+0x10, skilllevel=int@+8, SkillID=int@+0xc, SkillIcon=str@+4, quality=int@+0x20, aptitude=int@+0x24, intimate@+0x1c, skillsubtype@+0x28
- ƒ param_2 flag gates whether bAssemble/skillPoint/skilllevel/SkillID/quality/aptitude are written (AS setInt vs skip)

### CPetPanelUI::OnRefreshPetSkillPanel `@0x10511480` — pet-skill-ui
*Client UI callback (fires only when param_6==1) that refreshes the pet panel: registers Flash/ActionScript callbacks (rename cost, skill-unlock item names, IsSkillUnlock), computes rename money, builds equipped-skill lists, and pushes SetRequireItemId / setPetTempSkillMaxNum / RefreshPetPropertyUI to the UI.* (conf low)
- ƒ Early-out unless param_6==1.
- ƒ Registers AS handlers: _HasEnoughItemOfRename, _getRenameItemName, _getSkillUnlockItemName, _IsSkillUnlock, _renameMoney/SetRennameMoney.
- ƒ setPetTempSkillMaxNum <- MAX_NUM_ADVANCED_SKILL (advanced-skill cap, exact constant not resolved in decompile).
- ƒ Calls CPetPanelUI::BuildEquippedSkillLists; on avatar refresh invokes _root.Global_PetAvatarRefresh.
- $ Pet rename money (SetRennameMoney / _renameMoney) — amount computed via FUN_112d62a0, exact value not resolved.
- $ MAX_NUM_ADVANCED_SKILL = max advanced pet-skill slots (constant not resolved here).

### CPetSkill::BuildSkillMetaVO_ByHandle `@0x10858e30` — pet-skill-ui
*AS provider: given a pet-skill handle (AS arg @+8), resolves the skill object (FUN_10540d00 -> FUN_116c05c0 -> FUN_1050ef40 record) and writes skillPoint, intimate, quality, skilltype from the record.* (conf high)
- ƒ record iVar2 offsets: skillPoint=*(rec+0x64), intimate=*(rec+0x68), quality=*(rec+0x70), skilltype=*(rec+0x58)
- ƒ AS input value @ in_stack_00000010+8 when tag (&0x8f) in {3,4} else 0xdeadbeaf

### CPetSkill::EquipOn `@0x11587270` — pet/skill
*Core equip-on: enforces active-skill cap and duplicate rules. If skill is active (info+0x54==1), rejects when equipped active count (CountActiveSkillsInList) >= cap (petStats+0x48) or cap<1 -> 0x7611. Requires category info+0x58 > 5 (active) to proceed; scans existing list for duplicate -> 0x75d0; otherwise appends via FUN_1158cba0, applies weight/anim (FUN_1158ac80 if info+0x94>0) and FUN_11589640. Non-active (<=5) path throttle-logs "CPetSkill_EquipOn" and returns 0x760c.* (conf medium)
- ƒ active cap: petStats[0x48]; reject if <1 or CountActiveSkillsInList() >= cap -> 0x7611
- ƒ must have info[0x58] > 5 else 0x760c (retry budget DAT_11dfa7d8 init 10)
- ƒ duplicate id -> 0x75d0
- ƒ codes: 0 ok, 0x7611 cap reached, 0x75d0 duplicate, 0x760c not-active/throttled, 0x7598 invalid
- $ 0x7611 active slot cap reached
- $ 0x75d0 duplicate
- $ 0x760c wrong category
- $ 0x7598 invalid

### CPetSkillConditionInfo::ComparePriority `@0x11580040` — pet/skill-condition
*Comparator over two condition ids: returns (b.priority < a.priority) using field +0x18, else true when equal/invalid. Used for sorting/selecting highest-priority condition.* (conf medium)
- ƒ a=cond(param_1), b=cond(param_2); pa=a[0x18], pb=b[0x18]; if pa!=pb return pb<pa; else true

### CPetSkillConditionInfo::ComputeValueById `@0x1157f370` — pet/skill-condition
*Looks up condition by id and returns FUN_115803e0(cond) (resolved condition magnitude/type).* (conf medium)
- ƒ return FUN_115803e0(cond)

### CPetSkillConditionInfo::GetById `@0x1157f470` — pet/skill-condition
*2D-sparse lookup returning CPetSkillConditionInfo* by id.* (conf high)
- ƒ standard 2D lookup

### CPetSkillConditionInfo::GetByIndex `@0x1154de90` — pet/skill-condition
*Flat-vector accessor returning CPetSkillConditionInfo* at ordinal index.* (conf high)
- ƒ if 0<=idx<((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14]+idx*4)

### CPetSkillConditionInfo::GetProbabilityPermille `@0x1157f2f0` — pet/skill-condition
*Looks up CPetSkillConditionInfo by id; returns FUN_1154bc80(cond+0x10)/1000 (probability expressed per-mille -> integer permille count). Requires this+8 nonzero.* (conf high)
- ƒ return FUN_1154bc80(cond[0x10]) / 1000
- ƒ cond[0x10] is a per-mille probability/value (matches recovered schema note)

### CPetSkillConditionInfo::IsConditionSatisfied `@0x1157fc90` — pet/skill-condition
*Returns 0 (satisfied) when condition value (FUN_115803e0) > 0 AND this+8 set AND probability FUN_1154bc80(cond+0x10)/1000 > 0; returns 1 when value>0 but probability not met; 0 otherwise.* (conf medium)
- ƒ if FUN_115803e0(cond) > 0: if this[8]!=0 && (FUN_1154bc80(cond[0x10])/1000) > 0 -> 0 else 1

### CPetSkillInfo::GetByIndex `@0x11587fb0` — pet/skill
*Flat-vector accessor returning CPetSkillInfo* at ordinal index.* (conf high)
- ƒ if 0<=idx<((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14]+idx*4)

### CPetSkillInfo::GetManager `@11a17f70` — pet-skills
*Static accessor/registrar that resolves the CInfoManager singleton for the 'CPetSkillInfo' record type via CInfoManager::GetByName(0,"CPetSkillInfo",0). This is the manager-lookup idiom that pet.md documents (FUN_1051c550(0,"CPetSkillInfo",0)); all pet-skill definition records are held in this manager and fetched by the sparse-id formula.* (conf high)

### CPetSkillInfo::GetPairedBuffInfo `@0x11587ff0` — pet/skill
*For a pet skill with a linked buff (info+0x94 nonzero = buff count/id), outputs *param_4 = info+0x94 and *param_3 = paired-buff field (+0x14) looked up in a map at info+0x24 relative to this+0x1c.* (conf low)
- ƒ if info[0x94] != 0: *param_4 = info[0x94]; map lookup FUN_107e00f0(this+0x1c, info+0x24); *param_3 = found[0x14]

### CPetSkillInfo::GetRecordById `@0x1050ef40` — pet-skill-config
*Sparse-id lookup of a CPetSkillInfo record (pet skill definition) by pet-skill id.* (conf high)
- ƒ mgr via CPetSkillInfo::GetInfoManagerSingleton, fallback CInfoManager::FindByName('CPetSkillInfo',0).
- ƒ Sparse-id (byte layout): base@mgr+0x30, stride@mgr+0x28, count@mgr+0x24, buckets@mgr+0x20. Valid if id!=-1 && (id!=0\|\|base==0) && stride!=0 && 0<=id-base<count. record=buckets[idx/stride][idx%stride].

### CPetSkillInfo::HasNextLevel `@112f5190` — pet-skill
*After building a lookup context (FUN_112fb460) and checking a precondition (FUN_1158d040), resolves a CPetSkillInfo entry by id (param_3) and returns CPetSkillInfo::HasNextLevelInList(param_3) (whether the pet skill can be upgraded further).* (conf medium)
- ƒ sparse lookup on 'CPetSkillInfo'; delegate to HasNextLevelInList(param_3)

### CPetSkillInfo::IsActiveSkill `@0x11584d90` — pet/skill
*Returns true when CPetSkillInfo category (info+0x58) > 5 (i.e. an active skill category rather than passive 0..5).* (conf medium)
- ƒ return info[0x58] > 5

### CPetSkillInfo::IsType9 `@0x1181db80` — pet-skills
*Looks up a CPetSkillInfo row by id and returns whether its type field (+0x58) equals 9.* (conf high)
- ƒ 2D-map lookup (base mgr+0x30, stride mgr+0x28, cap mgr+0x24); returns (*(row+0x58) == 9) as bool.
- ƒ Pet-skill type code 9 at row+0x58.

### CPetSkillInfo::Read `@11a473a0` — pet-skills
*The XML/TLV deserializer for CPetSkillInfo records — the 'Read_0x99' reader that schema/docs/pet.md states was NOT present in the pet bundle and 'loaded elsewhere'. This is it. Populates the full CPetSkillInfo struct: displayId(+0x10), name (string), level(+0x18), +0x1c, +0x20, +0x24(skillGroupId), +0x28, +0xec, two 0x30-byte blocks parsed from string via FUN_10a199b0 into +0x30..0x5c and +0x60..0x8c (vec/param arrays), +0x94, a linked-id list into vectors at +0xd8 and +0xe4 (linkedSkillIds, split into two groups of 4), and a per-level 'BuffLV%d' (1..5) table of 0x10-byte entries starting at +0x98. Each parsed BuffLV id is validated against the buff manager's red-black tree (FUN_11679c30, root at +0x8d4); a missing buff triggers FUN_10c3d580(0xc) (fatal / does-not-return).* (conf medium)
- ƒ displayId -> +0x10; level -> +0x18; skillGroupId -> +0x24 (offsets match pet.md CPetSkillInfo table)
- ƒ linkedSkillIds: id-list of 4-byte ints split into vector at +0xd8 (first 4) and +0xe4 (next 4); count = (list_end - list_begin) >> 2, processed only when (count & 3)==0
- ƒ BuffLV table: attribute names formatted 'BuffLV%d' for d=1..5 (FUN_1167e120(L"BuffLV%d",1,5)); each entry is 0x10 bytes written sequentially from +0x98 (stride 0x10, loop bound local_480 < 0x50 = 5 entries)
- ƒ buff-id validation: for each BuffLV entry with id!=0, binary-search buff manager tree at (mgr+0x8d4); abort FUN_10c3d580(0xc) if not found

### CPetSkillInfo::ResolveEffectById `@0x11583140` — pet/skill
*If FUN_11679c30() (context available), looks up CPetSkillInfo by id and returns FUN_1169ea20(info+0x24) (resolved skill-group/effect handle).* (conf low)
- ƒ return FUN_1169ea20(info[0x24]) (0x24=skillGroupId per schema)

### CPetSkillList::RemoveEquipped `@0x115871c0` — pet/skill
*Removes the equipped-skill record (3-dword stride 0xc) whose id matches param_2 from the vector at this+4..+8, via memmove compaction; shrinks end by 0xc. Returns 0 on removal, 0x75d8 if not found, 0x7598 if invalid id.* (conf high)
- ƒ record stride = 0xc (3 dwords: id, +4, +8)
- ƒ memmove to compact; this[8] -= 0xc
- ƒ codes: 0 ok, 0x75d8 not in list, 0x7598 invalid
- $ 0x75d8 not equipped
- $ 0x7598 invalid

### CPetSkillSlotUnlockInfo::FindByKey `@0x1174c730` — pet-skills
*2D-sparse-map lookup into the CPetSkillSlotUnlockInfo table (pet skill-slot unlock requirements) by key.* (conf high)
- ƒ key valid if key!=-1 and (key!=0 or mgr+0x30==0) and mgr+0x28!=0.
- ƒ k = key - *(mgr+0x30); valid if 0<=k<*(mgr+0x24).
- ƒ row = array[k / *(mgr+0x28)]; if row!=0 return row[k % *(mgr+0x28)].
- ƒ mgr+0x28 = row stride, +0x30 = base key, +0x24 = capacity, +0x20 = row-array base.

### CPetSkillSystem::ActivateCondition `@0x1157fd30` — pet/skill-condition
*Activates a resolved condition: dispatches event 0x423 (with owner+4[8] and skill id) via combat vtbl (+0x1c/+0x14), runs FUN_11580310(cond), and records current skill at owner+0x84.* (conf medium)
- ƒ event {0x423, -1, -1, skillId, ownerCtx}
- ƒ owner[0x84] = skillId

### CPetSkillSystem::ApplyConditionTune_A `@0x11580190` — pet/skill-condition
*Reads condition record (param_2: id at +0x10, value at +0x1c) and, via CPetSkillInfo lookup on same id, pushes a tune payload (info+0x24) with UI/display vtbl(+0x14). If this+8 set, applies FUN_1154bee0(condId, value, 0) to the buff/attribute system.* (conf low)
- ƒ local_8 = cond[0x1c] (value); id = cond[0x10]
- ƒ FUN_1154bee0(cond[0x10], value, 0) when this[8]!=0
- ƒ display tunes from _DAT_11d2df20.. / _DAT_11d2df30.. templates

### CPetSkillSystem::ApplyConditionTune_Random `@0x11580540` — pet/skill-condition
*Like ApplyConditionTune_A but computes a RANDOM magnitude within a range. From condition record: base=cond+0x1c, lo=cond+0x20, hi=cond+0x24. value = lo + (base + (lo - rand01*(hi-lo))). Applies FUN_1154bda0(condId*100) then FUN_1154bee0(condId*100, value, 0).* (conf medium)
- ƒ rand01 = FUN_100ee450() * _DAT_11de9a60 (uniform 0..1 scale constant _DAT_11de9a60)
- ƒ value = cond[0x1c] + ( cond[0x20] - (int)(rand01 * (cond[0x24] - cond[0x20])) )
- ƒ apply key = condId*100: FUN_1154bda0(id*100); FUN_1154bee0(id*100, value, 0)

### CPetSkillSystem::ApplyPetSkillConditionEffects `@0x1157f8c0` — pet/skill-condition
*On pet-skill activation, resets any prior condition entity (owner+0x1ed4 vtbl+0x54 then +0x28), then looks up both CPetSkillConditionInfo and CPetSkillInfo by same id. Registers timers/tunes (info+0xbc, +0xc0 via combat-tune vtbl +0x44, class 0xc). Iterates three effect lists on CPetSkillInfo: self-target list [+0xdc..+0xe0], targeted list [+0x124..+0x128] (resolves target via player pathfind vtbl +0x7c/+0xa8 needing state==1), and owner list [+0x100..+0x104]; each effect: vtbl+0xc(target,0) check then vtbl+0x10(target,&ctx) apply. If owner-current-skill (+0x84) != id, runs FUN_11580310 (dispatch condition update).* (conf medium)
- ƒ condition entity at owner[+4][0x1ed4]
- ƒ tune ids info[0xbc], info[0xc0] registered via vtbl+0x44(playerId, tuneId, 0, 1, 0xc)
- ƒ effect lists: self +0xdc/+0xe0, targeted +0x124/+0x128, owner +0x100/+0x104 (dword arrays)
- ƒ target eligibility requires vtbl+0xa8()==1
- ƒ returns 0 ok / -1 invalid

### CPetSkillSystem::AutoTriggerSkills `@0x115823a0` — pet/skill-ai
*Pet-skill AI tick: guarded by owner idle (vtbl+0xa8==0) and a once-flag (this+6). Iterates equipped skills (count this[3][0x34]) via FUN_1158d020; for category-1 skills whose action is free (vtbl+0x4c==0) issues cast via this[2] vtbl(+0x1c). When a farm/collect context is active (this[1][0xc] vtbl+0x168), collects category-8 skill ids (CPetSkillInfo::CollectSkillIdsByCategory(8)), registers their tunes (info+0xb8) for non-category-4 skills, and casts the found farm skill (records this+0x21 = skill+0x24).* (conf low)
- ƒ equipped count = this[3][0x34]
- ƒ CollectSkillIdsByCategory(8) -> id list; skip skill where info[0x5c]==4; register tune info[0xb8]
- ƒ this[0x21] = selected skill[0x24]

### CPetSkillSystem::CanLearnSkill `@0x11584f30` — pet/skill
*Validates learning/upgrading a pet skill (param_3). Requires FUN_1158d040(owner) context else 0x7597. Rejects if already known or an equal/higher level already in list (FUN_11588430 or CPetSkillInfo::HasEqualOrHigherLevelInList) -> 0x75d0. Checks generic prereq FUN_11586df0. If skill level>=2, requires the previous-level skill (same skillGroupId info+0x24, level == this.level-1) to be present in the category-group list (CollectSkillIdsByCategory(info+0x58)); success 0, missing prereq 0x75c3, bad entry 0x7598.* (conf medium)
- ƒ level < 2 -> return 0 (no prereq)
- ƒ prereq match: prev[0x24]==info[0x24] && prev[0x14] == info[0x14]-1 (level-1 of same group)
- ƒ codes: 0x7597 no-context, 0x75d0 already/higher owned, 0x75c3 prereq missing, 0x7598 invalid
- $ 0x7597 no context
- $ 0x75d0 duplicate/higher
- $ 0x75c3 missing prereq level
- $ 0x7598 invalid

### CPetSkillSystem::DispatchConditionUpdate `@0x11580310` — pet/skill-condition
*Given a condition object (param_2), resolves the best matching condition row by value key (vtbl+0x18) via a BST (this+0x6c/+0x70) then CPetSkillConditionInfo lookup; then runs four sub-updaters FUN_115806f0/FUN_11580490/FUN_11580190/FUN_11580540 on the resolved condition.* (conf low)
- ƒ key = param_2->vtbl+0x18(); BST search in tree at this+0x6c keyed on node[0x10]
- ƒ if found node[0x14] -> resolve CPetSkillConditionInfo; else use param_2

### CPetSkillSystem::EquipSkill `@0x11584070` — pet/skill
*Equips a pet skill (param_2): if a conflicting skill of the same slot/group (FUN_115877f0(info+0x58, param_3)) is equipped, unequips it first (FUN_11583f10). Runs FUN_11568140(info+0x64), then FUN_11587270 (actual equip-on with cap checks). On success (0) calls FUN_11588c60. Returns FUN_11587270 result or 0x7598.* (conf medium)
- ƒ conflict = FUN_115877f0(info[0x58], param_3); if >0 unequip it
- ƒ result = FUN_11587270(param_2, param_3)
- $ 0x7598 invalid skill

### CPetSkillSystem::FillSkillDisplayRecord `@0x11582f70` — pet/skill-condition
*Populates a display/status struct (param_2) for a pet skill (param_3): flag param_2[0]=1, param_2+0x34=skillLevel(info+0x10), param_2+8=cond+0x1c, param_2+4=cond+0x28. In farm context, overrides param_2+4 with FUN_1157f370 (computed condition value). Builds a localized name string (FUN_100e5c10/61d0).* (conf low)
- ƒ param_2[0]=1; param_2[0x34]=skillInfo[0x10]; param_2[8]=cond[0x1c]; param_2[4]=cond[0x28]
- ƒ farm override: param_2[4] = FUN_1157f370(condId)

### CPetSkillSystem::IsSkillReady `@0x11588660` — pet/skill
*Scans equipped list (this+4, stride 3) for id param_2; if found and info+0x94==0 returns true, else defers to FUN_1158add0(info) (buff/cooldown readiness). Returns false when not equipped.* (conf low)
- ƒ if equipped: (info[0x94]==0) ? true : FUN_1158add0(info)

### CPetSkillSystem::UnequipSkill `@0x11583f10` — pet/skill
*Unequips a pet skill (param_3): FUN_11566bd0(info+0x64), notifies via this+8 vtbl(+0x18)(param_2+0x28, id), then removes from equipped list via FUN_115871c0. Returns error 0x7598 (invalid skill).* (conf medium)
- ƒ info[0x64] passed to FUN_11566bd0; returns FUN_115871c0(id) or 0x7598
- $ error code 0x7598 = invalid/unknown skill id

### CPetSupportBuff::GetById `@112f7940` — pet-buff
*CInfoManager sparse lookup returning a CPetSupportBuff entry by id.* (conf high)
- ƒ standard sparse lookup

### CPetSupportBuff::GetManager `@112f0c40` — pet-buff (info-manager singleton)
*Stock CInfoManager singleton accessor for CPetSupportBuff table; lazy-registers and returns manager, sentinel fallback DAT_12040c84.* (conf high)

### CPetSupportBuff::GetSingleton `@112f6120` — pet-buff
*Simplified singleton getter returning *DAT_12040b8c for CPetSupportBuff.* (conf high)

### CPetSupportCatSkill::LoadAndPlaySkillAnims `@10beff70` — pet-skill
*For a pet/support-cat active skill instance: reads script attr 'PetActiveSkillID' into this+0xc, looks up CPetSupportCatSkillInfo via FUN_10bf1a20, copies its animation strings (entry/castStart/castLoop/skill/leave) and SkillCastTime, then reads override attrs NeedSummonAnim, SkillEntryAnim, SkillCastStartAnim, SkillCastLoopAnim, SkillAnim, SkillLeaveAnim, SkillCastTime; finally dispatches a 0x938 event with this+0x10.* (conf medium)
- ƒ this+0xc = PetActiveSkillID (default 0xffffffff)
- ƒ skillInfo offsets copied: +0x24/+0x28 (entry anim str), +0x84/+0x88 (loop?), +0x3c/+0x40, +0x54/+0x58, +0x6c/+0x70 (anim strings); cast time = *(skillInfo+0x8c) -> local_20
- ƒ override attr 'SkillCastTime' -> local_20 (float)
- ƒ event id local_84 = 0x938, local_80=local_7c = -1

### CPetSupportCatSkillInfo::FindSkillEntryByKey `@10bf1a20` — pet-skill
*2D paged-array lookup of a pet-support-cat skill info record by skill key/id. Gets the info manager singleton (FindInfoByKey 'CPetSupportCatSkillInfo'), then indexes a paged table.* (conf high)
- ƒ mgr+0x30 = base id offset; mgr+0x28 = page size (cols); mgr+0x24 = total count; mgr+0x20 = page-pointer array
- ƒ reject if key==-1, or (key==0 && mgr+0x30==0), or mgr+0x28==0
- ƒ idx = key - mgr[0x30]; require 0<=idx<mgr[0x24]
- ƒ page = mgr[0x20][idx / mgr[0x28]]; return page[idx % mgr[0x28]]

### CPetSupportSkillInfo::GetByIndex `@0x11753c90` — pet-skills
*Linear-index lookup into the CPetSupportSkillInfo table (pet support-skill definitions).* (conf high)
- ƒ valid if 0<=index<((mgr+0x18 - mgr+0x14)>>2); return array[index].

### CPetWaitSkillPanel::GetWaitSkillData_ASProvider `@0x10518600` — pet-skill-ui
*AS data-provider ('GetPetWaitSkillData'). Gets the local pet manager (DAT_1202e818->0xd0->0x90 vtbl+0xb4), fetches its pending-skill list, and for each learnable skill builds a Pet_Skill_Vo_Class_NAME object with skill fields; also emits skillNoticeList and nLastPetIndex.* (conf medium)
- ƒ pet obj = vtbl[0xb4] of (DAT_1202e818+0xd0)->0x90; skill container = *(pet+0x2cd8); vtbl[0x15] count check
- ƒ iterate pairs: count = (aiStack_a0[0]-pppiStack_a4)>>3 (8-byte entries)
- ƒ skill record iVar2 offsets: SkillIcon@0x40, strSkillName(str reader), skilllevel@0x14, SkillID@0x10, skilltype@0x58, learntime@0x94, aptitude@0x6c, quality@0x70, skillPoint@0x64, intimate@0x68, skilleffect(str), bAdvanced=byte@0x54
- ƒ nCurSkillLv=*(iVar2+0x14); nMaxSkillLv = vtbl[0x2e](*(iVar2+0x10)) (max level for skill id); bFixed=0; bAddNew from per-entry flag
- ƒ nLastPetIndex = FUN_112fb100()

### CPetWaitSkillPanel::RegisterASCallbacks `@0x10511bb0` — pet-skill-ui
*UI init hook (in_stack_00000014==1 = panel-open phase): calls FUN_104f42b0(ctx) then registers three ActionScript->C callbacks via FUN_104d13b0: 'GetPetWaitSkillData'->FUN_10518600, 'ReqWaitSkillNewNtf'->FUN_10518b00, 'IsLastBattlePetStateNormal'->FUN_10518bf0.* (conf high)
- ƒ dispatch guard: if in_stack_00000014 == 1

### PetSkillBuffLevelEntry::Read `@11a44a90` — pet-skills-buff
*Config deserializer for a pet-skill/buff record keyed by a composite (skillId*100+level) index. Reads two int fields (owner+0x14, owner+0x18), two string fields (via ReadWString + FUN_100e5530; passed to the mislabeled CPet::SetName global-name helper), int at owner+0x24, owner+0x28, and BuffID -> owner+0x2c. Finally derives the composite key.* (conf medium)
- ƒ composite key: *(owner+0x10) = *(owner+0x14) * 100 + *(owner+0x18)  (skill/group id * 100 + level)
- ƒ BuffID -> *(owner+0x2c)

### RegisterHandler_GetPetMonsterSkillData `@0x10971020` — pet-monster-skills
*Registers the client command/RPC handler named "GetPetMonsterSkillData" -> FUN_10971170 via FUN_104d13b0. Wraps registration in an object begin/end (vtbl+4 / vtbl+8) guarded by presence-flag bit 6 of arg[1] (>>6 & 1).* (conf medium)
- ƒ if arg[+0x14]==1 (call kind) proceed
- ƒ presence check: (local_1c >> 6 & 1) where local_1c = in_arg[1]
- ƒ FUN_104d13b0("GetPetMonsterSkillData", FUN_10971170)

### Tlv::PetFullData_DebugFormat `@0x101a5dd0` — pet-skill-schema
*TDR DebugFormat for the full pet/Palico record: idx, uId, id, name, desc, sex, state, level, exp, loyal, potential, spirit, vigour, supportSkill, giftSkill, rename, groupNum + [groupExp] array, potentialNum + [potentialValue] array, [train], [rngAttrs], talkStyle, [equipSkills] (TlvSkillAndSlotList), growHigher float @ +0x488, [waitSkills] (TlvSkillList), growHigherCat. Reveals pet skill/talent storage layout.* (conf high)
- ƒ offsets: +0 idx(u8), +1 uId(i32), +5 id(i32), +9.. name, +0x29.. desc, +0x49 sex(u8), +0x4a state(u8), +0x4b level(i32), +0x4f exp(i32), +0x53 loyal(i16), +0x55 potential(i16), +0x57 spirit(i16), +0x59 vigour(i16), +0x5b supportSkill(i32), +0x5f giftSkill(i32), +0x63 rename(u8), +0x64 groupNum(i16, max 0x46=70)
- ƒ +0x2dc potentialNum(i16, max 10); groupExp[] via FUN_1019e530; potentialValue[] via FUN_1019eba0
- ƒ +0x38f talkStyle(u8); equipSkills via TlvSkillAndSlotList_DebugFormat; +0x488 growHigher(float); waitSkills via TlvSkillList_DebugFormat

### Tlv::PetSupportAttrs_DebugFormat `@0x1019fe20` — pet-skill-schema
*TDR DebugFormat for a pet/companion (cat) attribute block: an id field, quality, character, atkTarget, atkMode, name(string @ +5..), skin(+0xd), supportSkill(+0xe), randType(+0xf). Part of the larger pet struct (0x101a5dd0).* (conf high)
- ƒ struct(int32 idx): +0 id, +1 quality, +2 character, +3 atkTarget, +4 atkMode, +5.. name, +0xd skin, +0xe supportSkill, +0xf randType

### TlvPetBuffReq2::PrintText `@0x10399cb0` — pet-buff
*TDR text dump of {iIdx, iUID, iBuffID} (duplicate shape).* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iBuffID @0x8

### TlvPetBuffReq::PrintText `@0x10399920` — pet-buff
*TDR text dump of {iIdx, iUID, iBuffID} (pet buff operation).* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iBuffID @0x8

### TlvPetFullSnapshot::PrintText `@0x10392bd0` — pet-skill
*TDR serializer for a pet full spawn/snapshot {identity, pose, equip, attrs, buffs, rand-attrs, skills, growth}.* (conf high)
- ƒ iNetID @0x0; iOwnerID @0x4; iInfoID @0x8; ullEntGUID (u64) @0xc/0x10; iPetUID @0x14; iPetIdx @0x18; szName @0x1c (param_1+7); stPose via TdrDebugFormat_ByteThenFloatSub; bAvatarSetID (u8) @0x58; fHealth (float) @0x59; wEquipCount (u16) @0x5d
- ƒ CAP wEquipCount>10 -> -7 (equip u32[] @0x5f max 10, stride 4)
- ƒ wAttrSize (u16) @0x87; CAP >0x5000 -> -7 (szAttr byte[] @0x89 max 0x5000)
- ƒ wBuffSize (u16) @0x5089; CAP >0x2800 -> -7 (szBuff byte[] @0x508b max 0x2800)
- ƒ stRandAttrs via FUN_10391e30; bSupport (u8) @0x78c7; iSkillNum @param_1[0x1e32] (offset 0x78c8); CAP <0->-6, >10->-7 (astSkill[] @param_1+0x1e33 via FUN_10392240, max 10)
- ƒ iGrowHighDay @param_1[0x1e47]; iGrowHeight @param_1[0x1e48]
- $ Max 10 equip, 10 skills; attr blob 0x5000; buff blob 0x2800

### TlvPetGiftRand::PrintText `@0x10393dc0` — pet-skill
*TDR serializer {iPetID, iIdx, iUID, chSex, iGiftSkill, stRandAttrs}.* (conf high)
- ƒ iPetID @0x0; iIdx @0x4; iUID @0x8; chSex (i8 '0x%02x') @0xc; iGiftSkill @0xd; stRandAttrs via FUN_10391e30

### TlvPetSkillCount::PackToBuffer `@0x103921a0` — pet-skill
*TDR pack of {iSkillID, iCount}.* (conf high)
- ƒ iSkillID @0x0; iCount @0x4. Returns -0x13 if buffer NULL.

### TlvPetSkillCount::PrintText `@0x10392240` — pet-skill
*TDR text dump of {iSkillID, iCount} (pet astSkill element serializer).* (conf high)
- ƒ iSkillID @0x0; iCount @0x4

### TlvPetSkillList::PrintText `@0x1039c3c0` — pet-skill
*TDR serializer for a pet skill list {iIdx, iUID, nCount, skill[], szNewFlag[]} (learned skills + per-skill 'new' flag).* (conf high)
- ƒ iIdx @0x0; iUID @0x4; nCount (i16) @0x8; CAP <0->-6, >10->-7; skill u32[] @0xa (param_1+ ...+10, stride 4) length nCount; szNewFlag i8[] @0x32 (' 0x%02x') length nCount
- $ Max 10 pet skills

### TlvPetSkillReq2::PrintText `@0x10397d20` — pet-skill
*TDR text dump of {iIdx, iUID, iSkillID}.* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSkillID @0x8

### TlvPetSkillReq3::PrintText `@0x1039b510` — pet-skill
*TDR text dump of {iIdx, iUID, iSkill}.* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSkill @0x8

### TlvPetSkillReq4::PrintText `@0x1039c860` — pet-skill
*TDR text dump of {iIdx, iUID, iSkill}.* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSkill @0x8

### TlvPetSkillReq::PrintText `@0x10396ef0` — pet-skill
*TDR text dump of {iIdx, iUID, iSkillID}.* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSkillID @0x8

### TlvPetSkillResult2::PrintText `@0x10398070` — pet-skill
*TDR text dump of {iErrCode, iIdx, iUID, iSkillID}.* (conf high)
- ƒ iErrCode @0x0; iIdx @0x4; iUID @0x8; iSkillID @0xc

### TlvPetSkillResult3::PrintText `@0x10398eb0` — pet-skill
*TDR text dump of {iErrCode, iIdx, iUID, iSkillID}.* (conf high)
- ƒ iErrCode @0x0; iIdx @0x4; iUID @0x8; iSkillID @0xc

### TlvPetSkillResult4::PrintText `@0x10399570` — pet-skill
*TDR text dump of {iErrCode, iIdx, iUID, iSkillID}.* (conf high)
- ƒ iErrCode @0x0; iIdx @0x4; iUID @0x8; iSkillID @0xc

### TlvPetSkillResult5::PrintText `@0x1039b860` — pet-skill
*TDR text dump of {iResult, iIdx, iUID, iSkill}.* (conf high)
- ƒ iResult @0x0; iIdx @0x4; iUID @0x8; iSkill @0xc

### TlvPetSkillResult::PrintText `@0x10397240` — pet-skill
*TDR text dump of {iErrCode, iIdx, iUID, iSkillID}.* (conf high)
- ƒ iErrCode @0x0; iIdx @0x4; iUID @0x8; iSkillID @0xc

### TlvPetSkillSlot2::PrintText `@0x103975b0` — pet-skill
*TDR text dump of {iIdx, iUID, iSkillID, iSlot}.* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSkillID @0x8; iSlot @0xc

### TlvPetSkillSlot2Result::PrintText `@0x10397950` — pet-skill
*TDR text dump of {iErrCode, iIdx, iUID, iSkillID, iSlot}.* (conf high)
- ƒ iErrCode @0x0; iIdx @0x4; iUID @0x8; iSkillID @0xc; iSlot @0x10

### TlvPetSkillSlotSet::PrintText `@0x10396b40` — pet-skill
*TDR text dump of {iIdx, iUID, iSlot, iSkillID} (equip pet skill into slot).* (conf high)
- ƒ iIdx @0x0; iUID @0x4; iSlot @0x8; iSkillID @0xc

### TlvPetSupportInfo::PrintText `@0x10391e30` — pet-skill
*TDR serializer for a pet/felyne support info block {iTalkStype, iQuality, iCharacter, iAtkTarget, iAtkMode, szName, iSkin, iSupportSkill}. Used as sub-struct in pet snapshots.* (conf high)
- ƒ iTalkStype @0x0; iQuality @0x4; iCharacter @0x8; iAtkTarget @0xc; iAtkMode @0x10; szName @0x14 (param_1+5, 32B); iSkin @0x34 (param_1[0xd]); iSupportSkill @0x38 (param_1[0xe])


## skill  (80)

### CChargeFallState::Enter `@10f8bc00` — skill-state-charge
*Enter-handler for the charge-fall state. Pushes event 0x12; clears aim state short@(param_1+0x1ac); stores buff name "PlayerChargeBuff" into param_1+0x200 and copies byte@(param_1+0x1af) into +0x204. Registers callbacks FUN_10f9b620 / FUN_10f9b1e0, plus tick handler FUN_10f5bd40(6, FUN_10f9b100). Builds fall anim transition PLLocomotion:StartFall -> PLCharging -> NORMAL_FALL.* (conf medium)
- ƒ event pushed: 0x12
- ƒ buff 'PlayerChargeBuff' -> param_1+0x200; byte@(param_1+0x204) = byte@(param_1+0x1af)
- ƒ tick registration: FUN_10f5bd40(6, FUN_10f9b100)  (6 = tick group/priority)
- ƒ clear param_1+0x20c = 0

### CChargeState::Enter `@10f7e370` — skill-state-charge
*Enter-handler for the weapon charge state. Pushes event 0x26 onto an event queue; resolves state COMBAT_CHARGE and INVALID_STATE; stores the buff name "PlayerChargeBuff" into a string field at param_1+0x85 (the buff applied while charging). Registers state callbacks FUN_10f9aa60 (param_1+0x2c list) and FUN_10f9aea0 (param_1+0x32 list); iterates/reinitializes a 0x80-stride sub-object array (param_1[0x81]..[0x82]). Sets byte@(param_1+0x86)=1 (charge active).* (conf medium)
- ƒ event pushed: 0x26
- ƒ buff name string 'PlayerChargeBuff' stored at param_1+0x85 (word field 0x6b zeroed too)
- ƒ sub-object array stride 0x80 bytes between param_1[0x81] and param_1[0x82]
- ƒ byte@(param_1+0x86) = 1 (charging flag)

### CEquipPassiveSkillGroupInfo::ForceInitAllRecords `@0x1082e0d0` — skill-info-registry
*Gets the CEquipPassiveSkillGroupInfo manager then calls vtbl+0x28 with a PTR arg (bulk force-init / iterate-and-load of all group records).* (conf medium)

### CEquipPassiveSkillGroupInfo::GetInfoManagerSingleton `@0x1050eb10` — skill-passive-config
*Lazy-initializes and returns the CInfoManager singleton holding CEquipPassiveSkillGroupInfo static records (thread-safe one-time init guarded by DAT_123be514 bit 0).* (conf high)
- ƒ One-time init sets DAT_123be52c/530 = &DAT_123be51c, registers singleton name 'CEquipPassiveSkillGroupInfo::GetManagers' and 'StcMbrNameSvr<class CInfoManager>::GetSingletonName'. Returns DAT_123be518.

### CEquipPassiveSkillGroupInfo::GetRecordById `@0x1050ebc0` — skill-passive-config
*Sparse-id lookup of a CEquipPassiveSkillGroupInfo record (equipment random-passive-skill activation group) by id.* (conf high)
- ƒ mgr via CEquipPassiveSkillGroupInfo::GetInfoManagerSingleton, fallback CInfoManager::FindByName('CEquipPassiveSkillGroupInfo',0).
- ƒ Sparse-id (dword layout): base@puVar2[0xc], stride@puVar2[0xa], count@puVar2[9], buckets@puVar2[8]. Valid if id!=-1 && (id!=0\|\|base==0) && stride!=0 && 0<=id-base<count. record=buckets[idx/stride][idx%stride].

### CEquipPassiveSkillGroupInfo::GetRecordByIndex `@0x1082e040` — skill-info-registry
*Contiguous-vector accessor into the CEquipPassiveSkillGroupInfo static table (not sparse): returns element param_1 from a pointer array.* (conf high)
- ƒ valid if 0<=param_1 < (mgr[6]-mgr[5])>>2; return ((int*)mgr[5])[param_1]  (mgr[5]=vector begin, mgr[6]=end)

### CEquipRandPassiveSkillActivateSetInfo::CheckSetActivation `@11465310` — skill-passive-equip
*Evaluates whether an equipment random-passive-skill activation SET is satisfied. Skips if state (*param_3==1). Resolves the set entry (via param_3[5]=setId), gets its rule list at entry+0x2c (begin/end at +0x10/+0x14) and iterates each rule object, dispatching a per-rule check (rule.vtbl+0x10 -> handler FUN_11562d00 -> vtbl+0xc(param_2, rule, param_3, this+0xc)). Returns 0 as soon as any rule fails, 1 if all pass.* (conf medium)
- ƒ setId = param_3[5]; rule list at *(setEntry+0x2c)+0x10 .. +0x14
- ƒ per-rule: handler = FUN_11562d00(rule.vtbl+0x10()); ok = handler.vtbl+0xc(param_2, rule, param_3, *(this+0xc)); if !ok return 0

### CEquipRandPassiveSkillActivateSetInfo::GetRecordById `@0x10856700` — skill-info-registry
*Sparse-id lookup into CEquipRandPassiveSkillActivateSetInfo static table (byte-offset variant of the standard idiom).* (conf high)
- ƒ idx = id - *(mgr+0x30) (base); valid if id!=-1 && (id!=0\|\|*(mgr+0x30)==0) && *(mgr+0x28)!=0 (stride) && 0<=idx<*(mgr+0x24) (count)
- ƒ row = *(*(mgr+0x20) + (idx / *(mgr+0x28))*4); return *(row + (idx % *(mgr+0x28))*4)

### CEquipSkillInfo::GetById `@113f9970` — skill-equip
*CInfoManager sparse lookup returning a CEquipSkillInfo entry by id.* (conf high)
- ƒ standard sparse lookup

### CFsmChecker::CheckGotoState `@1105f6c0` — skill-fsm-anticheat
*Thin wrapper that validates a skill-driven FSM 'GotoState' transition. Fetches the game context (FUN_11398e60); if valid, packs the 4-word next-state id (param_2..param_5) into a local struct and calls the shared transition validator FUN_1105f7f0(..., mode=0). On failure it logs '[FsmChecker][1]HandleGotoState state_id: %u %u %u %u \| skill: %d %d' and calls FUN_114811e0(param_10, 1) (raise/handle a tolerance violation of kind 1).* (conf high)
- ƒ local struct at &local_14 = {param_2(state word0), param_3(word1), param_4(word2), param_5(word3)}; passed with param_6=skillId, param_7=level, param_8, param_9, transitionMode=0
- ƒ on validator returning false byte: log + FUN_114811e0(param_10, 1); return that
- ƒ return value masked with 0xffffff00 on success (returns 0/false-byte)

### CFsmChecker::CheckTransitionToState `@1105f750` — skill-fsm-anticheat
*Identical to CheckGotoState but for a 'TransitionToState' FSM edge. Calls FUN_1105f7f0(..., mode=1); on failure logs '[FsmChecker][2]HandleTransitionToState state_id: %u %u %u %u \| skill: %d %d' and calls FUN_114811e0(param_10, 2) (tolerance violation kind 2).* (conf high)
- ƒ same packing as 1105f6c0; transitionMode=1; failure path uses violation code 2

### CFsmChecker::ValidateSkillStateTransition `@1105f7f0` — skill-fsm-anticheat
*Core anti-cheat / rate-limiter for skill-driven state transitions. Resolves the next-state definition object (FUN_10fb8160) from the 4-word state id and the current-state object (FUN_10fd05d0). Verifies the skill actually maps to a valid transition between current and next state (FUN_10fd4810). Then enforces a timing constraint: the elapsed time since last transition must not be shorter than the animation-defined limit multiplied by an 'FsmTolerance' factor. Logs detailed diagnostics when rejecting.* (conf medium)
- ƒ increments transition counter: *(param_1+0x74) += 1
- ƒ FsmTolerance CVar read via FUN_100b62c0("FsmTolerance",""); default multiplier = _DAT_11cbf11c (float). If CVar present, multiplier = (float)(cvarInt + 100) / DAT_11de9a30 (DAT_11de9a30 almost certainly 100.0 => tolerance% -> factor)
- ƒ limited = animLimitTime(local_c) * multiplier, where local_c = (float)auVar13 * param_4 (param_4 = duration/speed input)
- ƒ elapsed cached = FUN_11484e10(vtbl+0x294(param_1+0x28,+0x40,+0x58)) then * DAT_11de9a44 (DAT_11de9a44 = 0.001f, ms->sec) -> local_8
- ƒ gate: if (*(param_1+0x24) >= 0) && ( *(param_1+0x24) > 0 \|\| *(param_1+0x20) != 0 ) && (local_c < local_8): transition considered too-soon-cached; if local_8 <= DAT_11de9918 return 1(accept) else { *(param_1+0x70) += 1 (violation counter); return 0(reject) }
- ƒ else store last-sync time: *(param_1+0x20)=param_5, *(param_1+0x24)=param_6; return 1
- ƒ param_1+0x20/0x24 = last sync time (I64d pair), param_1+0x70 = reject count, param_1+0x74 = attempt count

### CGuildSkillInfo::GetById `@1145f2c0` — skill-guild
*CInfoManager sparse lookup returning a CGuildSkillInfo entry by id.* (conf high)
- ƒ standard sparse lookup

### CGuildSkillInfo::GetByLevelAndId `@1145f260` — skill-guild
*Composite-key lookup into CGuildSkillInfo: key = param_1*100 + param_2 (level*100 + skillId), then CInfoManager sparse lookup.* (conf high)
- ƒ key = param_1 * 100 + param_2; standard sparse lookup on key

### CNewSkillInfo::AutoAssignWeaponSkillSlot `@1141e3c0` — skill-slot
*Assigns a default skill into a weapon skill slot (param_3 = slot index < 0xD) for weapon side param_2 (0 or 1). Checks the slot-open gate (talent-mgr obj[0xabd] vtbl+0x10(slot) returns 0 or 1 = openable). Selects a base pointer per side (param_1+0x14 for side0, +0x3b for side1) with per-slot stride 0xD ints. If slot already populated (any of the 'iVar3' stride-scan entries nonzero) returns without change. Otherwise resolves the default skill via FUN_11679c30/FUN_1169ebe0(slot) -> CNewSkillInfo entry and writes entry+0x14 (skill level/id) into the slot.* (conf low)
- ƒ slot gate index < 0xD (weaponSlotMax=0x0D from schema)
- ƒ side0 base = param_1+0x14, side1 base = param_1+0x3b; slot record stride = 0xD ints (0x34 bytes)
- ƒ scan count = 3 (side0) / 2 (side1); if any occupied -> abort
- ƒ assigned value = *(CNewSkillInfo entry + 0x14)

### CNewSkillInfo::CheckLearnPrereq `@1141dac0` — skill-learn
*Full prerequisite check for learning a weapon skill (param_2). Resolves entry, gets player level (role provider vtbl+0x46c -> vtbl+0x18). If entry+0x48 (required level) nonzero and playerLevel < it -> 0xE1 (under level). If entry+0x4c (prereq skill/condition id) nonzero and FUN_114e0340(that)==false -> 0xE2 (prereq unmet). Returns 0 ok, 0xCA invalid-role, 0xD5 not-found.* (conf high)
- ƒ if *(entry+0x48)!=0 && playerLevel < *(entry+0x48) -> 0xE1
- ƒ if *(entry+0x4c)!=0 && !FUN_114e0340(*(entry+0x4c)) -> 0xE2
- ƒ error codes: 0xE1 under-level, 0xE2 prereq-unmet, 0xCA invalid-role, 0xD5 not-found

### CNewSkillInfo::FillSkillDisplay `@112b3a20` — skill
*Resolves a CNewSkillInfo entry by id (param_1) and fills an output struct (param_2): sets name (CPet::SetName on entry+0x88 icon/name, fallback empty), copies entry+0x48 -> out+0x10 and entry+0x54 -> out+0x2c, and calls FUN_100e5e40(entry+0x18). Returns 0 on success, 0xD5 (missing-skill) if not found.* (conf medium)
- ƒ out+0x10 = *(entry+0x48); out+0x2c = *(entry+0x54); name from entry+0x88
- ƒ error code 0xD5 = skill-not-found (matches schema missingSkillCode=0xD5)

### CNewSkillInfo::GetRecordById `@0x107cd4f0` — skill-info-registry
*Sparse-id record lookup into the CNewSkillInfo static table. Gets the manager (falls back to CInfoManager::FindByName 'CNewSkillInfo'), then indexes a two-level block table by skill id.* (conf high)
- ƒ sparse-table lookup: idx = id - mgr[0xc] (base id); valid if id!=-1 && (id!=0\|\|mgr[0xc]==0) && mgr[10]!=0 && 0<=idx<mgr[9](count)
- ƒ row = mgr[8][idx / mgr[10]]; return row[idx % mgr[10]]; mgr[10]=block stride, mgr[8]=block ptr array

### CNewSkillInfo::ValidateSkillOwner `@1141c960` — skill-learn
*Validates that skill id (param_2) belongs to weapon/category param_1: resolves CNewSkillInfo entry, if entry+0x40 (skill's owner/effect category) != param_1 returns 0xE3 (wrong owner). Otherwise delegates to FUN_1141dac0(param_2) (the full learn-prereq check). Returns 0xD5 if entry not found.* (conf medium)
- ƒ if param_1 != *(entry+0x40) return 0xE3; else return FUN_1141dac0(param_2)
- ƒ error codes: 0xE3 wrong-owner, 0xD5 not-found

### CPlayerInput::OnRageMeleeActionInput `@10f79480` — skill-input-network
*Rage/melee input handler (gated by state short@(param_1+0x1ac)==1). param_3==2 (release/move): on any move action (moveforward/back/left/right) with nonzero velocity, zeroes velocity vector (0x154/0x158/0x15c) and issues an input command (local_2d8=0x800000). param_3==1 (press): depending on input scheme DAT_120286b8+0x9d4 (0=KB: melee1 or rage_1; 1=xi_switch_y; 2=xi_switch_y; 3=xi_switch_rb; 4=xi_thumbr_down / else xi_switch_lt combo) triggers rage/melee: builds and sends a 0x404 network packet (skill activation) via server-object vtable+0x254, or fires the combo-buffered action (state 0x234=2).* (conf medium)
- ƒ gate: short@(param_1+0x1ac)==1 else exit
- ƒ input scheme = *(DAT_120286b8+0x9d4): 0=keyboard(melee1/rage_1); 1=pad(xi_switch_y); 2=pad(xi_switch_y); 3=pad(xi_switch_rb); 4=pad(xi_thumbr_down); fallback combo key xi_switch_lt
- ƒ velocity offsets zeroed: param_1+0x154, +0x158, +0x15c (abs>0 test via &DAT_11de9c70 = 0x7fffffff abs mask)
- ƒ rage skill send: if(actor+0x100 && FUN_10f19240() skillMgr && skillMgr.vtable[0x10]+0x1c(0x4c4b456)!=0){ build pkt: *local_8=0x404; local_8[8]=FUN_1141bd30(); local_8[10]=*(skill+8); send via (player+0x3c).vtable+0x254(pkt) }
- ƒ combo path: if(byte@(param_1+0x238)==1){ func_0x12402b6c(2,1,0); param_1[0x234]=2; byte@(param_1+0x238)=0 }

### CRageInfo::GetRecordById `@0x107cd660` — skill-info-registry
*Same sparse-id lookup idiom as CNewSkillInfo, for the CRageInfo static table (rage/bushido meter definitions).* (conf high)
- ƒ idx = id - mgr[0xc]; valid if id!=-1 && (id!=0\|\|mgr[0xc]==0) && mgr[10]!=0 && 0<=idx<mgr[9]; return mgr[8][idx/mgr[10]][idx%mgr[10]]

### CRageTransmissionState::Enter `@10f98d30` — skill-state-rage
*Enter-handler for the rage-transmission (rage transfer) state. Registers state RAGE_TRANSMISSION, sub-state RageTransmission with callback (local_c) and tick callback FUN_10fac4b0; sets default-next-state NORMAL_IDLE; marks byte@(param_1+0x70)=1. Builds idle anim transitions PLLocomotion:HolsteredIdle -> PLBaseAction -> NORMAL_IDLE.* (conf medium)
- ƒ state name RAGE_TRANSMISSION; sub RageTransmission; default next NORMAL_IDLE
- ƒ byte@(param_1+0x70) = 1

### CSkillChangeFGNode::Activate `@10dcdd30` — skill
*Flowgraph/script node that reads script-table attrs 'SkillId' and 'SkillChanged' (caching their attr ids in this+0x10/+0x11), then triggers a skill change. Routes by id threshold: id<1000000 -> local/player skill path (FUN_1025d5b0/FUN_1025d690); id>=1000000 -> monster skill path (FUN_1025b300/FUN_1025b520 with id-1000000). Emits event 0x93b.* (conf medium)
- ƒ this+0x10 = attr id of 'SkillId', this+0x11 = attr id of 'SkillChanged' (lazily resolved when <0)
- ƒ id space split: skillId < 1000000 => player/normal skill; skillId >= 1000000 => monster skill (real id = skillId - 1000000)
- ƒ if param_2 > 5 early-returns validity flag (param_2 is a mode/level gate)
- ƒ success path calls FUN_1025d5b0(id) then FUN_1025d690(id) [player] or FUN_1025b300(id-1e6,param_2) then FUN_1025b520(id-1e6,1) [monster]
- ƒ event id local_54 = 0x93b

### CSkillClient::SendSkillEvent_0x44 `@10d2bb80` — skill-net
*Builds a script-object payload {m_nWeaponType, m_nSkillID, m_nSlotIndex} from param_2[0..2] and dispatches network/script event id 0x44 via FUN_10d1d220. Guarded by two empty-list checks at ownerObj+0x774 / +0x77c.* (conf medium)
- ƒ payload: m_nWeaponType=(float)param_2[0], m_nSkillID=(float)param_2[1], m_nSlotIndex=(float)param_2[2]
- ƒ event id = 0x44; guard lists at *(this+0xac)+0x774 and +0x77c must be non-empty
- ƒ sender obj at this+0x58

### CSkillClient::SendSkillEvent_0x45 `@10d2bd90` — skill-net
*Identical shape to 0x44 sender: payload {m_nWeaponType, m_nSkillID, m_nSlotIndex}, event id 0x45, guard lists at ownerObj+0x790 / +0x798.* (conf medium)
- ƒ payload: m_nWeaponType, m_nSkillID, m_nSlotIndex (from param_2[0..2] as floats)
- ƒ event id = 0x45; guard lists at *(this+0xac)+0x790 and +0x798

### CSkillClient::SendSkillEvent_0x46 `@10d2bfa0` — skill-net
*Same shape but payload {m_nWeaponType, m_nSkillID, m_nCurrentLevel}, event id 0x46, guard lists at ownerObj+0x7ac / +0x7b4.* (conf medium)
- ƒ payload: m_nWeaponType, m_nSkillID, m_nCurrentLevel (from param_2[0..2] as floats)
- ƒ event id = 0x46; guard lists at *(this+0xac)+0x7ac and +0x7b4

### CSkillNameAttr::GetStaticTypeInfo `@10eb3390` — skill-data-reflection
*One-time (guarded by DAT_1203bc48 bit0) static initializer that builds a CryEngine-style attribute/type descriptor named "Skill_Name" and fills param_1 with vtable/typeinfo pointers (param_1[0]=&DAT_1203bc00 descriptor, param_1[1]=vtable &DAT_11cf63ac, param_1[2] type flags \|= 0x11). Stock reflection/attribute-registration plumbing for a string field labelled 'Skill_Name'.* (conf low)
- ƒ init guard: if((DAT_1203bc48 & 1)==0){ DAT_1203bc48 \|= 1; ... }
- ƒ local_c = (local_c & 3) \| 0x11df76e9 (vtable/type-tag composition)
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x11 (set type flag bits)

### CSkillRef::ReadFromXml `@10ea6a20` — skill
*Parses a skill reference node into {SkillResID, SkillID, Level} (each defaulting to -1). Returns true if SkillResID>=1 OR SkillID>=1 (i.e. at least one identifier is valid).* (conf high)
- ƒ this+0x00 = SkillResID (default -1), this+0x04 = SkillID (default -1), this+0x08 = Level (default -1)
- ƒ valid = (SkillResID >= 1) \|\| (SkillID >= 1)

### CSkillSequence::LoadFromXmlNode `@11065d70` — skill-animation-sequence
*Parses a 'Sequence' XML/config node into a runtime skill animation-sequence object. Reads boolean flags into a packed bitfield at param_1+0x116/0x117, an int Layer (0x114), SkillID (0x80), and iterates child event lists (AnimationNode, SoundEvent, EffectEvent, PhysicEvent, TriggerEvent, AttachmentEvent, SkillEvent, SkillRotateEvent, NextSequences) building per-event objects. Sorts SkillRotateEvent list by a float key (+4) using an introsort/insertion-sort hybrid.* (conf medium)
- ƒ flags packed into *(param_1+0x116): DisablePhy -> bit3 (val<<3 &0x08), DisableColWithWall -> bit4 (<<4 &0x10), IsLoop -> bit6 (<<6 &0x40), CatchUpDist(present) -> bit5 (<<5 &0x20)
- ƒ *(param_1+0x117): EnableMoveSplineScale -> bit2 (<<2 &0x04)
- ƒ Layer: *(byte*)(param_1+0x114) = (byte)Layer
- ƒ SkillID read into param_1+0x80 (getter vtbl+0x74)
- ƒ SkillRotateEvent sort: heap-depth = floor(log2(count)) computed via loop; FUN_11069c20 (introsort) then FUN_11069b80 (final) with threshold 0x10; insertion sort compares *(float*)(evt+4)
- ƒ per-event object sizes allocated via FUN_10c3d580: Sound 0x60, Effect 0x50, Physic 0x30, Trigger 0x30, (DAT_11cc19cc list) 0x20, Attachment 0x24, Skill 0x1c, SkillRotate/AnimationNode 0x5c, NextSequences 0x11c(?)

### CSkillSequenceGroup::LoadEntries `@11077b00` — skill-animation-sequence
*Validates a node is 'SkillSequenceGroup' (compare against DAT_11d0e0c8) then iterates its children allocating a 0x11c-byte entry per child (the full sequence-group entry). Lazily initializes a global registry (DAT_12031140) via FUN_10de9640/FUN_10de98c0 on first use.* (conf low)
- ƒ per-child alloc size 0x11c (FUN_10c3d580)

### CSkillSequenceGroup::LoadFromRecord_variantB `@110720a0` — skill-animation-sequence
*Same SkillSequenceGroup parse as 110717d0 but sourced from a linked-list record structure (walks nodes via [10] next pointer, filters type==1) using FUN_110725e0 to find 'SkillSequenceGroup'/'Position'/'Rotation' child records.* (conf low)
- ƒ list walk: node = *(iVar3+0x18); next = node[10]; entries with node[5]==1; alloc 0x14 for Position and Rotation

### CSkillSequenceGroup::LoadFromRecord_variantC `@110722e0` — skill-animation-sequence
*Third SkillSequenceGroup loader variant using FUN_11070530/FUN_110704b0 record accessors and __alloca for a large temp buffer (iStack_10060). Same semantics: iterate type==1 nodes named 'Sequence', read Position/Rotation (0x14 each).* (conf low)
- ƒ node[0xb] next pointer; node[5]==1 filter; alloc 0x14 twice

### CSkillSequenceGroup::LoadFromXml_variantA `@110717d0` — skill-animation-sequence
*Parses a 'SkillSequenceGroup' node: for each 'Sequence' child reads a name (DAT_11da7300 = attr key), a Position (14-byte struct alloc 0x14) and a Rotation (0x14). Builds group entries. Client config loader.* (conf low)
- ƒ child count via vtbl+0xa0; iterate via vtbl+0xa8; per-Sequence alloc 0x14 for Position and 0x14 for Rotation (FUN_10c3d580)

### CSkillState::ParseBoostBuffID `@10f87670` — skill-data-buff
*Scans the child nodes of an XML element (vtable+0xa0 count, +0xa8 get) for a node named "BoostBuffID"; when found reads its value attribute (attr key @0x11de661c) into param_1+0x224 and returns true. Returns false if no BoostBuffID present.* (conf medium)
- ƒ for i in 0..childCount: if(child.name=="BoostBuffID" && child.has(attr@0x11de661c)) { child.get(attr, param_1+0x224); return 1 }

### CSkillTrigger::ParseFromXmlNode `@10f678f0` — skill-trigger-data
*Parses a skill-trigger/condition XML node into an object. Reads the node name (vtable+0x7c(0x11dca14c)); if it equals a first sentinel string (0x11cfb1a4) sets type field param_1+0x24 = 1, else if it equals a second (0x11ccdb2c) sets param_1+0x24 = 3. Then reads attribute "tpeOnly" into param_1+0x2c (bool) and "skillID" into param_1+0x28 (int).* (conf medium)
- ƒ type: if(nodeName==str@0x11cfb1a4) param_1[0x24]=1 else if(nodeName==str@0x11ccdb2c) param_1[0x24]=3
- ƒ param_1+0x2c = attr 'tpeOnly' (bool via vtable+0x50)
- ƒ param_1+0x28 = attr 'skillID' (int via vtable+0x74)

### CSkillVideo::GetInfoManagerSingleton `@0x107cd340` — skill-info-registry
*Lazy-init singleton accessor for the CSkillVideo CInfoManager (stock double-checked-init idiom: sets flag bit, initialises intrusive list head DAT_123bec50, registers singleton name, returns manager ptr DAT_123bec4c).* (conf high)
- ƒ init-once guard: (DAT_123bec68 & 1)==0

### CSkillVideo::GetManagerPtr `@0x107d45b0` — skill-info-registry
*Accessor returning the CSkillVideo manager pointer (via CSkillVideo::GetManagers, fallback CInfoManager::FindByName 'CSkillVideo', fallback registration + default DAT_123be98c).* (conf high)

### CState::ParseBasicsSection `@10fb9dd0` — skill-state-data
*Parses a state's <Basics> section. Handles child elements: EndAnims/EndAnim (appends end-anim ids to list param_1+0x19), Extensions/Extension (extension state ids -> list param_1+0x53), Callbacks (installs FUN_10fbec40), Property with sub-keys: Skill (param_1[0x71]=atoi(skillID); registers via FUN_10f19240/FUN_11398240), NoEndLastStateSkills/NoEndLastStateSkill (FUN_10f5ca90 per id), CanRotation (bool -> byte@(param_1+3)), Speed (param_1[0x75]=FUN_113b3380(value)), StateType/Component/SpecialSelectAnim (via value attr), NextHolsterStateName.* (conf medium)
- ƒ Skill: param_1[0x71] = atoi(value); FUN_10f19240(id,0xffffffff); FUN_11398240()  (binds state to a skill id)
- ƒ Speed: param_1[0x75] = FUN_113b3380(value)  (parsed playback/action speed)
- ƒ CanRotation: byte@(param_1+3) = FUN_10a675d0(value, str@0x11d9e058)  (compares to a bool literal)
- ƒ EndAnim list appended at param_1[0x19]/[0x1a]; Extension id list at param_1[0x53]/[0x54]

### CState::ParseDefaultNextState `@10fbad40` — skill-state-transition
*Parses the "DefaultNextState" element of a state. Reads its value attr (@0x11dbac80); depending on the state name it names, stores the default-next-state into one of several slots: Charge/LanceRage02_charge -> generic slot (local_14 via FUN_10a72410), ChargingIdle->local_8, ChargingRun->local_c, ChargingSpinAttack->local_10, and NormalCombo/GunAction/WE05Reload/InteractEmotion/Dodge/SlashAxeDodge -> registered via FUN_1083ac30 or FUN_10f57080.* (conf low)
- ƒ element 'DefaultNextState', value attr @0x11dbac80
- ƒ branch by value name: Charge/LanceRage02_charge/ChargingIdle/ChargingRun/ChargingSpinAttack/NormalCombo/GunAction/WE05Reload/InteractEmotion/Dodge/SlashAxeDodge -> distinct storage slots

### CState::ParseTransitionSection `@10fbb060` — skill-state-transition
*Parses a <Transition> node of the combat state machine. Reads: skillID (atoi; validates the skill is owned/usable via FUN_10f19240 + skill.vtable+0x58 and FUN_116cd660/FUN_116cdb80 — if the skill exists but is not usable the transition is rejected and the function returns 0); stateName (target state); rotType (camera=1 / normal=2 / default=3 stored at trans+0xc) with rotLimit (atoi -> trans+0x10); TransNoCheckHolster (bool -> trans+0x1c); c2Process (bool -> trans+0x1d); windowName (dodge=1 / combo=2 / immedodge=3 -> trans+0x18); Conditions list; OnTransitionCallbacks/OnTransition/function dispatch to a large set of transition-action handlers (HolsterItem, SetValue, SetFpsMode, FUN_10fc42c0..FUN_10fcfb20 chain); AGInputs/AGInput (action-graph input bindings).* (conf medium)
- ƒ skillID = atoi(value); validation: if(actor+0x100 && actor.+0x228 (is-local) && (skillMgr=FUN_10f19240())!=0 && skillID>0 && skillMgr.(+0x14).vtable+0x58()=='\0') { FUN_116cd660(); if(FUN_116cdb80()=='\0') return 0 }  -> transition blocked when skill not usable
- ƒ on valid skillID: transitionObj(+0x14) = skillID (via FUN_10f59500 target)
- ƒ rotType: camera->1, normal->2, default->3 stored at trans+0xc; rotLimit atoi -> trans+0x10
- ƒ windowName: dodge->trans+0x18=1, combo->=2, immedodge->=3 (cancel-window classification)
- ƒ TransNoCheckHolster -> byte trans+0x1c; c2Process(false) -> byte trans+0x1d

### CStateFactory::CreateStateFromXmlNode `@10fb8630` — skill-state-machine
*State-machine factory: given an XML node it verifies the node is named "State", reads a required attr (@0x11dbac80, likely 'name'), and looks up an existing state by name (FUN_10fde580). If absent, resolves the state "class" attribute (or inherits via "parent") and allocates the concrete state object whose byte-size is chosen per class name (giant if-chain: Charge=0x220, NormalCombo/InteractEmotion/GunAction/WE05Rage01Shoot=0x200, HolsteredIdle=0x2d0, HolsteredRun=0x2d8, UnholsteredIdle/UseItem/SharpenWeapon/WE05Rage01Reload/Aim=0x1f0, UnholsteredRun/DefenseSuccess/DefenseFailed=0x1f8, Defense=0x1e0, Standard/CollectRestart/Injury/PLInjuryLevelN=0x1e8, Dodge/SlashAxeDodge=0x208, ChargingIdle=0x218, ChargingRun/ChargingSpinAttack=0x220, Abnormal=0x1d8, InjuryFly/PLInjuryLevel11-12=0x258, InjuryRun=0x250, Lance/GunLance rage/SlashAxe holster=0x230, PLStateFly=0x240...). Then dispatches its child sections: Basics->FUN_10fb9dd0, Extend->FUN_10fba900, Transitions->FUN_10fbab00, DefenseSuperArmor->FUN_10fbaba0.* (conf medium)
- ƒ must be node 'State' with attr@0x11dbac80; else *param_2=0
- ƒ class->object size map (operator new size via FUN_10c3d580): Charge 0x220; NormalCombo 0x200; InteractEmotion 0x200; HolsteredIdle 0x2d0; HolsteredRun 0x2d8; UnholsteredIdle 0x1f0; UnholsteredRun 0x1f8; Defense 0x1e0; DefenseSuccess 0x1f8; DefenseFailed 0x1f8; Standard 0x1e8; CollectRestart 0x1e8; Dodge 0x208; UseItem 0x1f0; ChargingIdle 0x218; ChargingRun 0x220; ChargingSpinAttack 0x220; GunAction 0x200; WE05Reload 0x218; WE05ReloadPerfect 0x218; WE05Rage01Reload 0x1f0; WE05Rage01Aim 0x1f0; WE05Rage01Shoot 0x200; WE09GunLanceRageAim 0x230; Abnormal 0x1d8; Injury 0x1e8; InjuryFly 0x258(600); InjuryRun 0x250; SharpenWeapon 0x1f0; LanceRage02_charge 0x230; SlashAxeDodge 0x208; SlashAxeSwordRunningHolster 0x230; PLInjuryLevel1..8 Front/Back 0x1e8; PLInjuryLevel11-12 Front/Back 0x258(600); PLStateFly 0x240
- ƒ child section dispatch by name: Basics/Extend/Transitions/DefenseSuperArmor

### SkillBehaviorTree::LoadFromConfig `@0x10262280` — skill-behavior-tree
*Iterates a 'SkillBehaviorTree' config node; for each child reads 'FileName' and 'SkillID' attributes, then loads/creates the behavior-tree instance for that skill (via FUN_10262e90/FUN_100b4ca0) and marks it initialized (byte @ +0xe9 = 1). Builds the SkillID -> behavior-tree-file mapping.* (conf medium)
- ƒ reads attr 'FileName' (into node) and 'SkillID'; instance init flag byte at instance+0xe9
- ƒ vtable-driven config iteration; skill BT stored in map keyed by SkillID

### SkillBehaviorTree::ReadSkillIDAttr_Thunk `@0x10262e70` — skill-behavior-tree
*Tiny thunk: sets attribute name to 'SkillID' and tail-calls the config reader vtable slot (+0x20) to fetch the SkillID attribute. Helper for the loader above.* (conf medium)

### Tlv::ItemUseWithSkillBeads_DebugFormat `@0x101106b0` — skill-schema
*TDR DebugFormat (text dump) for an item-use request struct containing itemId(u64), itemType, targetPos, posColumn(u8), posGrid(u16 @ +0x11), and a [skillBeadsInfo] array (max 3 elements, each via FUN_1010fbe0). Debug/logging serializer — reveals the client's item-use-with-decoration wire struct.* (conf high)
- ƒ struct: +0/+4 itemId(u64 %I64u), +8 itemType, +0xc targetPos, +0x10 posColumn(u8), +0x11 posGrid(u16)
- ƒ skillBeadsInfo array count capped at 3 (uVar3<3), element decoder FUN_1010fbe0

### Tlv::SkillGroupLayout_DebugFormat `@0x10189710` — skill-schema
*TDR DebugFormat for a player skill-group / skill-bar layout struct: skillGroup(int32 @ +0), leftEditCnt(int32 @ +4), skillCnt(u8 @ +8), then parallel arrays [skillID] (int32 each, starting @ +9) and [actFlag] (u8 each, starting @ +0x2d9), both length=skillCnt (max 0xb4=180).* (conf high)
- ƒ struct: +0 skillGroup(i32), +4 leftEditCnt(i32), +8 skillCnt(u8, max 0xb4)
- ƒ skillID[i] at +9 + i*4 (i32); actFlag[i] at +0x2d9 + i (u8)
- ƒ actFlag array base offset 0x2d9 => skillID array capacity = (0x2d9-9)/4 = 180 entries

### Tlv::SkillLevelPair_DebugFormat `@0x10127d40` — skill-schema
*Simple TDR DebugFormat for the same {skill:int16 @ +0, level:int8 @ +2} pair. Emits [skill] then [level].* (conf high)
- ƒ struct: +0 skill(int16), +2 level(int8)

### Tlv::SkillLevelPair_DebugFormat_Guarded `@0x10127c60` — skill-schema
*TDR DebugFormat for a {skill:int16, level:int8} pair, wrapped in an SEH frame with a scratch buffer (FUN_10c3da30 cleanup). Emits [skill] and [level] fields.* (conf high)
- ƒ struct: +0 skill(int16), +2 level(int8); returns -0x13 if buf handle null

### TlvEntitySkillReq::PackToBuffer `@0x10310470` — skill-casting
*TDR pack of {dwEntityId, dwSkillID}.* (conf high)
- ƒ dwEntityId @0x0; dwSkillID @0x4. Returns -0x13 if buffer NULL.

### TlvEntitySkillReq::PrintText `@0x10310510` — skill-casting
*TDR text dump of {dwEntityId, dwSkillID}.* (conf high)
- ƒ dwEntityId @0x0; dwSkillID @0x4

### TlvHunterAppearanceSync::PrintText `@0x102cd750` — skill-loadout
*TDR text serializer for a hunter/player full appearance+equipment+skill sync struct (character enters view / self load).* (conf high)
- ƒ iErrNo @0x0; iNetID @0x4; dwSessionID @0x8; szName @0xc (param_1+3, 32B); bGender (u8) @0x2c; bAvatarSetID (u8) @0x2d; iWeapon @0x2e; iWeaponAtkFlag @0x32; wEquipSize (u16) @0x36
- ƒ CAP wEquipSize>0x1000 -> -7 (szEquipItem byte[] @0x38 max 0x1000=4096)
- ƒ wAttrSize (u16) @0x1038 (param_1+0x40e); wEquipSkillCnt (u16) @0x103a; CAP wEquipSkillCnt>0x19 -> -7 (max 25 equip skills)
- ƒ Five parallel arrays each length wEquipSkillCnt (<=0x19): skillGroup u32[] @0x103c (param_1+0x40f), skillId u32[] @0x10a0 (param_1+0x428), skillActFlag u32[] @0x1104 (+0x441), skillType u32[] @0x1168 (+0x45a)
- ƒ szAttr byte[] @0x11cc len wAttrSize; CAP >0x5000 -> -7 (max 0x5000=20480)
- ƒ szHunterStar @0x61cc (param_1+0x1873); dwSuitSkillLen @0x624c (param_1[0x1893]); CAP >0x2800 -> -7; szSuitSkillData byte[] @0x6250
- ƒ iSoulStoneLen @0x8a50 (param_1[0x2294]); CAP <0 -> -6, >0x400 -> -7; szSoulStone byte[] @0x8a54 (max 0x400=1024)

### TlvMonsterFullSnapshot::PrintText `@0x102ee200` — skill-monster-cast
*TDR text serializer for a monster full spawn/snapshot struct (identity, pose, faction, BT state, attributes, active projectiles, buffs, current skill state).* (conf high)
- ƒ iNetID @0x0; nSpawnType (i16) @0x4; iMonsterInfoID @0x6; ullEntGUID (u64) @0xa/0xe; szName @0x12 (32B); szClass @0x32; stPose via TdrDebugFormat_ByteThenFloatSub; iFaction @0x6e; szBTState @0x72; stBBVars via TdrDebugFormat_VarsList16
- ƒ bDead (u8) @0xcac (param_1+0x2ad); stLcmState via FUN_102ed140 (monster skill/locomotion sub-state)
- ƒ nAttrCount (i16) @0xcef; CAP <0->-6, >100->-7; astAttrInit[] via FUN_102850c0 (attribute init records, max 100)
- ƒ iProjIdCount @0x1a39; CAP <0->-6, >0x14->-7 (max 20 active projectiles); astProjIds[] @0x1a3d via FUN_102a4760
- ƒ nBuffSize (i16) @0x1add; CAP <0->-6, >0x2800->-7; szBuff byte[] @0x1adf (buff blob max 10240)
- ƒ ullParentGUID (u64) @0x42df; iLastChildID @0x42e7

### TlvMonsterSkillSync::PrintText `@0x102ebf70` — skill-monster-cast
*TDR text serializer for a monster skill-cast sync packet (animation, movement/rotation speeds, multi-target attack positions).* (conf high)
- ƒ llSyncTime (i64) @0x0; dwMonsterID @0x8 (param_1[2]); szAnimSeqName @0xc (param_1+3, 256B); iSkillID @0x10c (param_1[0x43]); iSkillLv @0x110 (param_1[0x44]); dwSyncFlag @0x114 (param_1[0x45]); iTargetSrvID @0x118 (param_1[0x46])
- ƒ stMoveSpeed/stRotSpeed/stMonsterPos/stMonsterRot vec3 via FUN_102713d0; fSkillSpeed via TdrDebugFormat_FloatField_at0xc
- ƒ bRestartAnim (u8 '0x%02x') @0x154 (param_1+0x55); iTargetAttackNum @0x155; CAP <0->-6, >8->-7 (astTargetMultiAttackPos max 8, each vec3 via FUN_102713d0)
- ƒ stTargetAttackPos vec3; bNeedTargetAttackPos (u8) @0x1c5; dwAckFlag @0x1c6; bSetRotate @0x1ca; bSetPos @0x1cb; bNoTransferCorrection @0x1cc (param_1+0x73); bNeedMoveSpeedAcc @0x1cd; stMoveSpeedAccelerate vec3
- ƒ fMoveSpeedAccStart (float) @0x1da; fMoveSpeedAccEnd @0x1de; stMoveSplineScale vec3

### TlvMonsterSkillSyncV2::PrintText `@0x102ed140` — skill-monster-cast
*Extended monster skill-cast sync serializer (adds steering, part-bone target, per-target rotation/flags, user params). Called as sub-serializer of monster full-sync FUN_102ee200 (stLcmState).* (conf high)
- ƒ bSteeringEnabled (u8) @0x0; llSyncTime (i64) @0x1; dwMonsterID @0x9; szAnimSeqName @0xd (256B); szPartBoneName @0x10d (256B); iSkillID @0x12b (param_1+299); iSkillLv @0x12f; dwSyncFlag @0x133; dwTargetID @0x137; iTargetSrvID @0x13b; dwFlag @0x13f
- ƒ stTargetDis/stMoveSpeed/stTargetRot/stRotSpeed vec3; bRotSpeedByAnim (u8) @0x173; stMonsterPos/stMonsterRot vec3; fSkillSpeed via TdrDebugFormat_FloatField_at0xc
- ƒ bRestartAnim (u8) @0x194; iRotFlag @0x195; iTargetAttackNum @0x199; CAP <0->-6, >8->-7 (astTargetMultiAttackPos max 8 vec3)
- ƒ stTargetAttackPos vec3; bNeedTargetAttackPos @0x209; dwAckFlag @0x20a; iUserParam1 @0x20e; iUserParam2 @0x212; bSetRotate @0x216; bSetPos @0x217; bNoTransferCorrection @0x218; bNeedMoveSpeedAcc @0x219; stMoveSpeedAccelerate vec3
- ƒ fMoveSpeedAccStart @0x226; fMoveSpeedAccEnd @0x22a; stMoveSplineScale vec3

### TlvProjectileLaunchSync::PrintText `@0x102b5700` — skill-projectile
*TDR text serializer for a projectile / vehicle-launch sync packet (skill/item spawned projectile with ballistics).* (conf high)
- ƒ llSyncTime (i64) @0x0/0x4; iNetID @0x8 (param_1[2]); iLauncherID @0xc; dwVehicleID @0x10; iTypeID @0x14; stPos/stDir/stAdditiveVel vec3 via FUN_102713d0
- ƒ iSkillId @0x3c (param_1[0xf]); iItemId @0x40 (param_1[0x10]); fDelay/fSpeedScale/fDamageScale (three TdrText_FieldScalar with args omitted) ~param_1[0x11..0x13]; iOverrideTrail @0x50 (param_1[0x14])
- ƒ stAcc/stVel vec3; fRadius (float) @param_1[0x1b]; fGravityChangeTime @param_1[0x1c]; fAdditiveGravity @param_1[0x1d]; iLaunchType @param_1[0x1e]; iAdditiveAccXYZMode @param_1[0x1f]
- ƒ iAdditiveAccCount @param_1[0x20]; CAP <0 -> -6, >=6 -> -7 (astAdditiveAccXYZ max 5 elems @param_1+0x21 stride vec3); additiveAccTime[] floats @param_1+0x30, same count cap 6

### TlvSkillBeadItemUse::PrintText `@0x1032f9d0` — skill-item
*TDR serializer for a skill-bead / item-use request {ullItemId, iItemType, bTargetPos, bCurCol, iCurGrid, astSkillBeadsInfo[<=3]}.* (conf high)
- ƒ ullItemId (u64) @0x0; iItemType @0x8; bTargetPos (u8) @0xc; bCurCol (u8) @0xd; iCurGrid @0xe; astSkillBeadsInfo[] via FUN_1032f5d0, loop breaks when idx>2 (max 3 beads)
- $ Max 3 skill beads

### TlvSkillCooldownSync::PrintText `@0x1039d5e0` — skill-cooldown
*TDR text dump of a skill sync/cooldown record {iSkillInfo, iSkillID, llSyncTime, iServerTimeHour, iServerTimeMin, iServerTimeSec}.* (conf high)
- ƒ iSkillInfo @0x0; iSkillID @0x4; llSyncTime (i64) @0x8/0xc; iServerTimeHour @0x10; iServerTimeMin @0x14; iServerTimeSec @0x18

### TlvSkillDebugToggle::PackToBuffer `@0x1039d1d0` — skill-debug
*TDR pack of {iEnableSkillDebug}.* (conf high)
- ƒ iEnableSkillDebug @0x0. Returns 0xffffffed (-19) if buffer NULL.

### TlvSkillDebugToggle::PackToBuffer_Bounded `@0x1039d280` — skill-debug
*Bounded-buffer pack of {iEnableSkillDebug}.* (conf high)
- ƒ iEnableSkillDebug @0x0; NUL at min(len,cap-1).

### TlvSkillDebugToggle::PackToStream `@0x1039d310` — skill-debug
*Stream-desc pack of {iEnableSkillDebug}.* (conf high)
- ƒ iEnableSkillDebug @0x0

### TlvSkillDebugToggle::PrintText `@0x1039d250` — skill-debug
*TDR text dump of {iEnableSkillDebug}.* (conf high)
- ƒ iEnableSkillDebug @0x0

### TlvSkillEventNotify::PrintText `@0x10305b50` — skill-casting
*TDR text serializer for a skill event notification (entity, skill id/level, event type, named event).* (conf high)
- ƒ dwEntityId @0x0; iSkillID @0x4; iSkillLevel @0x8; iType @0xc; szEventName @0x10 (param_1+4)

### TlvSkillGroupList::PrintText `@0x10309ad0` — skill-group
*TDR serializer for a skill-group list {iGroup, iSkillCnt, skillID[], iItemFlag}.* (conf high)
- ƒ iGroup @0x0; iSkillCnt @0x4; CAP <0->-6, >0x28->-7 (skillID u32[] @param_1+2 max 40); iItemFlag @param_1[0x2a] (offset 0xa8)
- $ Max 40 skills per group

### TlvSkillGroupListResult::PrintText `@0x10309f70` — skill-group
*TDR serializer for skill-group list result {iRet, iArg, iGroup, iSkillCnt, skillID[]}.* (conf high)
- ƒ iRet @0x0; iArg @0x4; iGroup @0x8; iSkillCnt @0xc; CAP <0->-6, >0x28->-7 (skillID u32[] @param_1+4 max 40)
- $ Max 40 skills

### TlvSkillGroupOpResult::PrintText `@0x103096b0` — skill-group
*TDR text dump of {iRetCode, iArg, iGroup, iSkill}.* (conf high)
- ƒ iRetCode @0x0; iArg @0x4; iGroup @0x8; iSkill @0xc

### TlvSkillID2::PackToBuffer `@0x1039dc20` — skill-casting
*TDR pack of {iSkillID}.* (conf high)
- ƒ iSkillID @0x0. Returns 0xffffffed if buffer NULL.

### TlvSkillID2::PackToBuffer_Bounded `@0x1039dcd0` — skill-casting
*Bounded-buffer pack of {iSkillID}.* (conf high)
- ƒ iSkillID @0x0; NUL at min(len,cap-1).

### TlvSkillID2::PackToStream `@0x1039dd60` — skill-casting
*Stream-desc pack of {iSkillID}.* (conf high)
- ƒ iSkillID @0x0

### TlvSkillID2::PrintText `@0x1039dca0` — skill-casting
*TDR text dump of {iSkillID}.* (conf high)
- ƒ iSkillID @0x0

### TlvSkillId::PackToBuffer `@0x10368f40` — skill-casting
*TDR pack of {iSkillId}.* (conf high)
- ƒ iSkillId @0x0. Returns 0xffffffed (-19) if buffer NULL.

### TlvSkillId::PackToBuffer_Bounded `@0x10368ff0` — skill-casting
*TDR pack of {iSkillId} into a bounded buffer with NUL-terminate.* (conf high)
- ƒ iSkillId @0x0. NUL at min(len,cap-1); empty string if NULL/cap 0.

### TlvSkillId::PackToStream `@0x10369080` — skill-casting
*TDR pack of {iSkillId} into a stream desc struct.* (conf high)
- ƒ iSkillId @0x0

### TlvSkillId::PrintText `@0x10368fc0` — skill-casting
*TDR text dump of {iSkillId}.* (conf high)
- ƒ iSkillId @0x0

### TlvSkillLevel::PackToBuffer `@0x1033a080` — skill-level
*TDR pack of {iSkill, iLevel}.* (conf high)
- ƒ iSkill @0x0; iLevel @0x4. Returns -0x13 if buffer NULL.

### TlvSkillLevel::PackToBuffer_Dup `@0x1034a870` — skill-level
*Duplicate TDR pack of {iSkill, iLevel} (different packet id/context).* (conf high)
- ƒ iSkill @0x0; iLevel @0x4. Returns -0x13 if buffer NULL.

### TlvSkillLevel::PrintText `@0x1033a120` — skill-level
*TDR text dump of {iSkill, iLevel}.* (conf high)
- ƒ iSkill @0x0; iLevel @0x4

### TlvSkillLevel::PrintText_Dup `@0x1034a910` — skill-level
*Duplicate TDR text dump of {iSkill, iLevel}.* (conf high)
- ƒ iSkill @0x0; iLevel @0x4

### TlvSkillProficiency::PrintText `@0x10369ca0` — skill-proficiency
*TDR text dump of skill-proficiency record {iSkillId, iProficiencyLevel, iProficiencyDegree}.* (conf high)
- ƒ iSkillId @0x0; iProficiencyLevel @0x4; iProficiencyDegree @0x8

### TlvSkillTagList::PrintText `@0x103092c0` — skill-tags
*TDR serializer for a skill-tag data struct {iGroup, iSkill, iTagCnt, astTagItemData[]}.* (conf high)
- ƒ iGroup @0x0; iSkill @0x4; iTagCnt @0x8; CAP <0->-6, >8->-7 (astTagItemData max 8, each via FUN_10272300)

### TlvWeaponSkillReq::PrintText `@0x10308810` — skill-weapon
*TDR text dump of a weapon-skill selection {iWeaponType, iIdx, iSkillID}.* (conf high)
- ƒ iWeaponType @0x0; iIdx @0x4; iSkillID @0x8

### TlvWeaponSkillResult::PrintText `@0x10308b60` — skill-weapon
*TDR text dump of {iWeaponType, iIdx, iSkillID, iErrorID}.* (conf high)
- ƒ iWeaponType @0x0; iIdx @0x4; iSkillID @0x8; iErrorID @0xc


## buffs  (58)

### ActivityBuffList::Read `@11a34ce0` — buffs-activity
*Config deserializer mapping an ActivityId to up to three buff ids. ActivityId -> owner+0x10. Buff1/Buff2/Buff3 each read as int; each value is appended to an int32 vector at owner+0x18 (grow-insert via FUN_10463c40) ONLY when the value is > 0, so unset/zero buff slots are skipped.* (conf high)
- ƒ buff id appended to vector at owner+0x18 (stride 4) iff value > 0 (0<iVar3)
- ƒ ActivityId -> *(owner+0x10)

### AttrDesc_buff::get `@0x11949650` — buffs
*Reflection attribute-descriptor accessor for 'buff' (type tag 0xff).* (conf medium)
- ƒ Descriptor tag _DAT_123a019c = 0xff.

### BuffRelatedRecord::Read `@11a872c0` — buffs
*Config deserializer for a small record carrying a 'Buff' id plus id/string fields. Reads an int -> owner+0x10, a string -> owner+0x2c, a string -> owner+0x14, a string -> owner+0x44, an int -> owner+0x5c, and Buff (int) -> owner+0x60. Standard Read idiom, direct member writes (no vector).* (conf low)
- ƒ id -> *(owner+0x10); Buff -> *(owner+0x60); int -> *(owner+0x5c)
- ƒ string fields written in place at owner+0x14, owner+0x2c, owner+0x44 (std::string via ReadString vtable+0x24)

### CBuffAreaSystem::SpawnBuffArea `@0x115af1a0` — buffs/area
*Spawns a buff-area entity (type 4). Creates entity via factory (this+4 vtbl+8), defaults its name to "BuffArea%d" (entity index) when none given, sets model (param_5), position (FUN_11414fc0/fe0), name (FUN_11414fa0), then places it (vtbl+0xcc, +0x18).* (conf low)
- ƒ entity type = 4; default name sprintf("BuffArea%d", entityIndex)

### CBuffContainer::CollectInstancesById `@0x116126f0` — buffs
*Collects all active buff-instance handles whose definition id == param_2 into an output vector (param_3). Selects one of up to 3 group sub-trees by buff group (info+0x44, if <2 use param_1+4+group*0x18) and in-order-traverses that red-black tree, skipping instances flagged deleted (inst+0x14[+0x3c]!=0). Returns collected count.* (conf medium)
- ƒ group = info[0x44]; container = this+4 (+ group*0x18 if group<2)
- ƒ per instance: skip if inst->def[0x3c]!=0 (deleted); match FUN_1141bd30()==param_2
- ƒ returns (out[1]-out[0])>>2 count

### CBuffContainer::FindFirstInstanceById `@0x11612820` — buffs
*Finds the first active (non-deleted) buff instance whose definition id == param_2, optionally filtered by an extra predicate (param_3 -> FUN_1141bec0). In-order RB-tree walk over the group bucket (info+0x44). Returns instance ptr or 0.* (conf medium)
- ƒ group = info[0x44]; bucket = this + group*0x18 (if group<2)
- ƒ match: def[0x3c]==0 (alive) && (!param_3 \|\| FUN_1141bec0()) && FUN_1141bd30()==param_2

### CBuffEffect::AdjustStackByMatch `@0x115ef4f0` — buffs/status/stacking
*Matches a buff instance by mode (this+4): 0x7dc = buffId(inst+0x10)==this+0x10; 0x7dd = FUN_116a78d0(this+0x10); 0x7de = FUN_116a7820(this+0x10). On match, adjusts the instance stack counter (*inst[0xc]) via FUN_115e8570(counter, this+8, this+0xc); if stacks fall below 1 (and not 0/1 sentinel) clamps to 1.* (conf medium)
- ƒ match modes: 0x7dc exact id, 0x7dd/0x7de tag/group match
- ƒ stack adjust: FUN_115e8570(stackPtr, this[8], this[0xc]); if 0<result<1 clamp *stackPtr=1
- ƒ skip when *stackPtr is 0 or 1 (already min)

### CBuffEffect::ApplyIfLinkedBuffValid `@0x115e50f0` — buffs/status
*If a precondition vtbl+0xc(param_2,param_3) passes and the owning CBuffInfo has a linked buff (info+0x424 != -1), applies the buff via combat vtbl+0x44 with a 2-field context (PTR_FUN_11cd72a0, subtype 2) and class 0x2c. Returns true if apply count > 0.* (conf medium)
- ƒ gate: info[0x424] != -1 (linked buff id)
- ƒ apply: vtbl+0x44(0, buffId, &ctx{vtbl,2,0,targetField,0}, 1, 0x2c); return result>0

### CBuffEffect::ApplyWithSpecialTag27 `@0x115e3f00` — buffs/status
*For the owning CBuffInfo (this+4): if buff status-tag (info+0x4c)==0x27, first sets attribute 0x27 flag (target vtbl+0x58(0x27,1)). Then applies the buff to the target via combat vtbl+0x44(0, buffId, 0, this+8 flag, class 0x2c). Always returns 1.* (conf medium)
- ƒ if info[0x4c]==0x27: vtbl+0x58(0x27, 1)
- ƒ apply: vtbl+0x44(0, buffId=this[4], 0, this[8], 0x2c)

### CBuffEffect::MatchGuardBuffEvent `@0x11660950` — buffs/status
*Matches an incoming event (param_2[0]) of type 0x1f8 or 0x1f9 against a CBuffInfo (resolved from current caster FUN_1141bd30). Match mode via (this+8 - 3): 0/1 -> casterId == this+0xc; 2/3 -> FUN_116a78d0(this+0xc) (group/tag match). Returns bool.* (conf medium)
- ƒ event ids 0x1f8, 0x1f9
- ƒ mode = *(this+8) - 3: {0,1} exact caster match, {2,3} tag match FUN_116a78d0

### CBuffEffect::RemoveBuffByMatch `@0x115e9bf0` — buffs/status
*Removes/cleanses a buff instance based on a match mode (this+8). Modes: 1=only if buff-source(inst+0x420)==0; 10=source == this+0xc (specific caster); 0xb=buffId == this+0xc; 0xc=FUN_116a7820(this+0xc) (group/tag match); 0xd=FUN_116a78d0(this+0xc); 0xf=probabilistic: if inst+0x428 != -1, roll rand()%100 <= chance FUN_113dbde0(). On match, dispatches removal event {_DAT_11d26040..} via FUN_1142f470(1, buffId) and clears the slot.* (conf medium)
- ƒ case 0xf random cleanse: (float)(rand()%100) <= (float)FUN_113dbde0() [chance in 0..100]
- ƒ case 1: inst[0x420]==0 (no source); case 10: inst[0x420]==this[0xc]; case 0xb: buffId==this[0xc]
- ƒ on match: FUN_1142f470(1, buffId); clear *(param_2[0xc])=0

### CBuffEffect::TryApplyReviveGuard `@0x115e3e20` — buffs/status
*For the owning CBuffInfo (this+4), when a specific buff event (FUN_116a7300(0x42f)) is active and target action-state is idle (param_2 vtbl+0xa8==0): if target has a special sub-object (param_2[0xb47]) and quest/state condition FUN_113f95f0(0,{3}) passes but FUN_113f9970 fails, writes {sub+0x170=0x3f5, sub+0x174=0} (a pending state) and returns 0; returns 1 to block.* (conf low)
- ƒ event id 0x42f; state value 0x3f5 written to obj+0x170 (with 0 at +0x174)
- ƒ condition token {3} for FUN_113f95f0

### CBuffEffectEOT::AddTimer `@0x1164a990` — buffs/dot-hot
*Starts an effect-over-time (DoT/HoT) periodic timer for a buff. Period = this+0x10 (ms). Registers repeating timer (FUN_1164ab00). On success sets running flag this+0x18=1; if the effect targets a special group (FUN_116a77f0(this+8)) and caster is idle, triggers vtbl+0x2ec + FUN_113599d0. If this+0xc==1 (fire-on-apply) invokes the tick immediately.* (conf high)
- ƒ period = this[0x10] (ms) via FUN_100ea610(name, this[0x10], 0, this, FUN_1164ab00, 0)
- ƒ this[0xc]==1 -> immediate first tick FUN_1164ab00(0,0)
- ƒ this[0x18] = running flag
- $ EOT tick period = this+0x10 (ms)

### CBuffEffectEOT::EnsureTimer `@0x1164aa60` — buffs/dot-hot
*Registers the EOT tick timer (period this+0x10) if not already running; returns true if the timer handle is valid.* (conf high)
- ƒ timer period = this[0x10] ms; returns handle != -1

### CBuffEffect_PlayerLockHP::ctor `@0x116cb450` — buffs
*Constructor for the 'PlayerLockHPBuff' buff-effect object. Installs vtable PTR_FUN_11d3f5b4 and sets the effect name string 'PlayerLockHPBuff'. Object size 0x24.* (conf medium)
- ƒ Allocated size 0x24 (FUN_10c3d580(0x24)). *param_1 = &PTR_FUN_11d3f5b4.

### CBuffFilterInfo::ResolveBuffId `@0x117d60c0` — buffs
*Given a buff id (param_1) and a mode (param_2), looks up CBuffFilterInfo and returns a substituted/filtered buff id depending on mode.* (conf medium)
- ƒ Lookup CBuffFilterInfo by (param_1 - mgr+0x30) with stride mgr+0x28; entry = array[k/stride][k%stride].
- ƒ If entry found: mode 0 -> return entry+0x18; mode 1 -> entry+0x14; mode 8 -> entry+0x1c; else return entry+0x18.
- ƒ If not found -> return param_1 unchanged (identity).

### CBuffFilterInfo::validateReferences `@0x117d6460` — buffs
*For a buff-filter entry, for each of the three alt-buff-id fields (+0x14, +0x18, +0x1c) that is nonzero, touches the CBuffInfo and CBuffFilterInfo managers (reference validation/precache).* (conf medium)
- ƒ Checks entry+0x14, +0x18, +0x1c.

### CBuffGarbageSystem::SetDel `@0x116139e0` — buffs/lifecycle
*Marks a buff instance for deletion (inst+0x3c=1) and, if the GC has no pending timer (this+4==-1) and not suspended (this+8==0), schedules a 1ms one-shot GC timer (FUN_11613a30).* (conf high)
- ƒ inst[0x3c]=1 (deleted flag); timer FUN_100ea610(name, 1ms, 1, this, FUN_11613a30, 0)

### CBuffInfo::FindByField4 `@0x1181c250` — buffs
*Reads a buff id from the object at param_1+4 and looks it up in the CBuffInfo 2D map, returning the buff-info row.* (conf high)
- ƒ id = *(param_1+4); lookup CBuffInfo: k=id-mgr+0x30; 0<=k<mgr+0x24; return array[k/stride][k%stride]; stride=mgr+0x28.

### CBuffInfo::GetByIndex `@0x1154c960` — buffs
*Flat-vector accessor returning CBuffInfo* at ordinal index (base +0x14, stride 4).* (conf high)
- ƒ if 0<=idx<((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14]+idx*4)

### CBuffInfo::GetDefaultBuff10000 `@0x118a6ef0` — buffs
*Returns the CBuffInfo row for the hard-coded default buff id 10000.* (conf high)
- ƒ k = 10000 - *(mgr+0x30); valid 0<=k<mgr+0x24; return array[k/stride][k%stride]; stride=mgr+0x28.

### CBuffSystem::CheckBuffPersistence `@0x115d60b0` — buffs
*For a CBuffInfo id: if info+0xe8==1 (persistent/skip) returns early. Otherwise queries active-buff snapshot (FUN_116a72b0, cap 10); if none active and info+0xf0==0 returns. (Cleanup/validation stub.)* (conf low)
- ƒ skip if info[0xe8]==1; early-out if activeCount==0 && info[0xf0]==0

### CBuffSystem::ForEachActiveInstance `@0x115d6540` — buffs
*For a CBuffInfo id (non-persistent, info+0xe8!=1), enumerates up to 100 active buff instances (FUN_116a7380) and calls FUN_115d66b0(instance+0x4c, param_2) on each.* (conf low)
- ƒ instance list cap 100; per-instance FUN_115d66b0(inst[0x4c], param_2)

### CHRLevelBuffInfo::ParseConfig `@0x11a08470` — buffs
*Config loader mapping a Hunter-Rank (HR) level to buffs. Reads HRLevel -> +0x10, two uint fields -> +0x14/+0x18, and a 'Buffs' string parsed into a buff container at +0x1c (FUN_1162bea0).* (conf medium)
- ƒ param_1+0x10 = HRLevel; +0x14 = uint field (DAT_11d6d28c key, default 0); +0x18 = uint field (DAT_11d522e8 key, default 0); +0x1c = parsed Buffs list (FUN_1162bea0).

### CPlayerBuffState::Refresh `@0x116aa680` — buffs/status
*Refreshes an entity's active buff/abnormal-state display+selection. Iterates the buff-entry vector (param_1+0x42c..0x430), calls per-buff update (FUN_1186e760, FUN_116ab0a0), selects the highest-priority abnormal state, extracts two special buff values, and does {token} text substitution for status HUD strings.* (conf medium)
- ƒ Buff-entry vector: base=*(param_1+0x42c), end=*(param_1+0x430), stride 4; each entry object has buff-info sub at *entry+0x118 and secondary at *entry+0x168; entries collected when either is nonzero (cap 100).
- ƒ Priority selection scans for entry with *(buff+0xf4)==1, then ==2, then ==3 (abnormal-status priority order 1>2>3).
- ƒ If a buff has *(buff+0x50)==0x3ed (1005): param_1+0x420 = *(buff+0x144).
- ƒ If a buff has *(buff+0x50)==0x3ef (1007): param_1+0x428 = *(buff+0x144).
- ƒ Text substitution tokens '{'=0x7b, '}'=0x7d; 4 replacement key/value pairs (local_84/local_5c/local_34/local_c) via FUN_116a71d0/FUN_10897f50.

### CScriptBind_MHBuffArea::AddExtendBuff `@0x1101eb50` — buffs/buff-area-scriptbind
*Lua AddExtendBuff(sBuffID) handler. atoi(param_3) -> buffID; if nonzero, appends it to the extension's extend-buff list via FUN_10d60090(buffID).* (conf high)
- ƒ extendBuffId = atoi(sBuffID); if !=0 -> FUN_10d60090(extendBuffId) appends to extend-buff list

### CScriptBind_MHBuffArea::CScriptBind_MHBuffArea `@0x1101e220` — buffs/buff-area-scriptbind
*Constructor/registrar for the MHBuffArea Lua script-bind. Sets vtable PTR_FUN_11d085c8, grabs the script system (param_2 vfunc +0xfc), creates the methods table (this[0x11]) and a second table (this[0x14]), and registers all Lua-callable BuffArea methods via table vfunc 100 with (name, argSpec, thunk). Registered verbs: TestFunc, SetBuffID(sBuffID)->FUN_1101e880, AddExtendBuff(sBuffID)->FUN_1101eb50, SetContinuous(bContinuous)->FUN_1101e950, SetCheckDelta(fCheckDelta)->FUN_1101e9a0, SetLifeTime(fLifeTime)->FUN_1101e9f0, SetEnterInfo(processEnter,bEnterAdd)->FUN_1101ea40, SetLeaveInfo(processLeave,bLeaveAdd)->FUN_1101eaa0, SetRemoveBuffGene(bRemoveBuffGene)->FUN_1101eb00, SetEffectID(sEffectID)->FUN_1101ebc0, SetPlayerCanAttack(enable)->FUN_1101ec70, SetMonsterCanAttack(enable)->FUN_1101ec20, SetNPCCanAttack(enable)->FUN_1101ecc0, SetPetCanAttack(enable)->FUN_1101ed10.* (conf high)
- ƒ this[0x15]=param_2 (script sys); this[0x16] = param_2 vfunc(+0x124) vfunc(+0x3c)
- ƒ this[0x12]=param_2 vfunc(+0xfc); this[0x11]=this[0x12] vfunc(+0x30)(0); this[0x14]=this[0x12] vfunc(+0x30)(0)
- ƒ arg type ids: local_18=8 for typed setters, param converters FUN_1101f1a0(float), FUN_1101f1f0(string), FUN_1101f230(two-arg), FUN_1101f290(bool)

### CScriptBind_MHBuffArea::CreateScriptTable `@0x1101e7a0` — buffs/buff-area-scriptbind
*Creates and binds the per-instance 'BuffArea' Lua table for a MHBuffArea entity. Verifies the entity has a proxy (vfunc chain +0xc -> +0x150(2) -> +0x38), creates a new script table (script sys +0x48 -> +0x30(0)), sets its '__this' field to the entity ptr (type 3, with GC handling for types 6/7), sets metatable to this+0x44 (the methods table), and registers it globally as 'BuffArea' via FUN_10c0df10.* (conf medium)
- ƒ __this field: type 3 (ptr); if resolved type==6 -> AddRef(+0xc); if type==7 -> GC hold (DAT_1202e818+0x30 +0x60)
- ƒ setmetatable(table, this+0x44); global name 'BuffArea'

### CScriptBind_MHBuffArea::GetterThunk_A `@0x1101ed60` — buffs/buff-area-scriptbind
*MHBuffArea Lua getter thunk: resolves the entity's MHBuffArea extension (same +0x58 -> +0x144 -> +0x18 chain) then tail-calls a component vfunc +0x18 whose jumptable the decompiler could not recover, returning its result (or 0 if no extension).* (conf low)
- ƒ extension resolve then return component vfunc(+0x18)(...)

### CScriptBind_MHBuffArea::GetterThunk_B `@0x11026970` — buffs/buff-area-scriptbind
*MHBuffArea Lua getter thunk identical in shape to FUN_1101ed60: resolves the extension and tail-calls component vfunc +0x18 (jumptable unrecovered), returning its value or 0.* (conf low)
- ƒ extension resolve then return component vfunc(+0x18)(...)

### CScriptBind_MHBuffArea::SetBuffID `@0x1101e880` — buffs/buff-area-scriptbind
*Lua SetBuffID(sBuffID) handler. Resolves the entity's MHBuffArea extension (game-object +0x58 -> +0x144(entityId) -> +0x18('MHBuffArea')), atoi(param_3) -> buffID. If dev flag (DAT_1202e818+0x209) set and buffID!=0 and the buff does not exist (FUN_104fd710(buffID)==0), logs error 'entity %s set a invalid buffID %i' / 'BuffID Error'. Writes buffID to extension+0x84.* (conf high)
- ƒ buffID = atoi(sBuffID); write to MHBuffArea+0x84
- ƒ validation: if DAT_1202e818[0x209]!=0 && buffID!=0 && FUN_104fd710(buffID)==0 -> error dialog (buff def must exist)

### CScriptBind_MHBuffArea::SetCheckDelta `@0x1101e9a0` — buffs/buff-area-scriptbind
*Lua SetCheckDelta(fCheckDelta) handler. Writes float to MHBuffArea+0x90 (tick/re-check interval).* (conf high)
- ƒ MHBuffArea+0x90 (float) = fCheckDelta

### CScriptBind_MHBuffArea::SetContinuous `@0x1101e950` — buffs/buff-area-scriptbind
*Lua SetContinuous(bContinuous) handler. Writes byte flag to MHBuffArea+0x8c.* (conf high)
- ƒ MHBuffArea+0x8c (byte) = bContinuous

### CScriptBind_MHBuffArea::SetEffectID `@0x1101ebc0` — buffs/buff-area-scriptbind
*Lua SetEffectID(sEffectID) handler. atoi(param_3) -> effectID; if nonzero writes to MHBuffArea+0x88.* (conf high)
- ƒ effectID = atoi(sEffectID); if !=0 -> MHBuffArea+0x88 = effectID

### CScriptBind_MHBuffArea::SetEnterInfo `@0x1101ea40` — buffs/buff-area-scriptbind
*Lua SetEnterInfo(processEnter, bEnterAdd) handler. Writes MHBuffArea+0x99 = processEnter (byte, trigger on enter) and +0x9a = bEnterAdd (byte, add-buff-on-enter).* (conf high)
- ƒ +0x99 = processEnter (byte), +0x9a = bEnterAdd (byte)

### CScriptBind_MHBuffArea::SetFlag_0x7a `@0x110243b0` — buffs/buff-area-scriptbind
*MHBuffArea Lua setter: resolves the MHBuffArea extension and writes byte param_3 to extension+0x7a. Which property this is (the registering call is outside this chunk) is unknown.* (conf medium)
- ƒ MHBuffArea+0x7a (byte) = param_3

### CScriptBind_MHBuffArea::SetLeaveInfo `@0x1101eaa0` — buffs/buff-area-scriptbind
*Lua SetLeaveInfo(processLeave, bLeaveAdd) handler. Writes MHBuffArea+0x9b = processLeave (byte) and +0x9c = bLeaveAdd (byte).* (conf high)
- ƒ +0x9b = processLeave (byte), +0x9c = bLeaveAdd (byte)

### CScriptBind_MHBuffArea::SetLifeTime `@0x1101e9f0` — buffs/buff-area-scriptbind
*Lua SetLifeTime(fLifeTime) handler. Writes float to MHBuffArea+0x94 (total area lifetime).* (conf high)
- ƒ MHBuffArea+0x94 (float) = fLifeTime

### CScriptBind_MHBuffArea::SetMonsterCanAttack `@0x1101ec20` — buffs/buff-area-scriptbind
*Lua SetMonsterCanAttack(enable) handler. Writes byte to MHBuffArea+0xad.* (conf high)
- ƒ +0xad (byte) = enable (monsters can attack / be affected)

### CScriptBind_MHBuffArea::SetNPCCanAttack `@0x1101ecc0` — buffs/buff-area-scriptbind
*Lua SetNPCCanAttack(enable) handler. Writes byte to MHBuffArea+0xae.* (conf high)
- ƒ +0xae (byte) = enable (NPCs affected)

### CScriptBind_MHBuffArea::SetPetCanAttack `@0x1101ed10` — buffs/buff-area-scriptbind
*Lua SetPetCanAttack(enable) handler. Writes byte to MHBuffArea+0xaf.* (conf high)
- ƒ +0xaf (byte) = enable (pets affected)

### CScriptBind_MHBuffArea::SetPlayerCanAttack `@0x1101ec70` — buffs/buff-area-scriptbind
*Lua SetPlayerCanAttack(enable) handler. Writes byte to MHBuffArea+0xac.* (conf high)
- ƒ +0xac (byte) = enable (players can attack / be affected)

### CScriptBind_MHBuffArea::SetRemoveBuffGene `@0x1101eb00` — buffs/buff-area-scriptbind
*Lua SetRemoveBuffGene(bRemoveBuffGene) handler. Writes byte to MHBuffArea+0x9d (remove buff on leave/expire).* (conf high)
- ƒ +0x9d (byte) = bRemoveBuffGene

### MHUI::BuildCatCuisineBuffVO `@108d8b00` — buffs/canteen-cuisine
*Scaleform VO builder for cat/canteen 'cuisine' meal buffs ('Buffer' = buff). Requires local player character with cuisine subobject at char+0x2d60. Reads the cuisine object via vtbl +0x10 (count), +0x14, +0x18, +0x1c. Fills three parallel arrays: arrayBufferID (buff ids), arrayBuffer (buff display names, resolved via FUN_104fd710 buff lookup + CPet::SetName), arrayBufferTips (buff tooltip strings). Also emits catCuisineName (FUN_108d15f0). Uses raw memcpy over the buff vectors (with an out-of-memory guard: >0x3FFFFFFF elements -> puts/exit).* (conf medium)
- ƒ cuisine counts: n0 = cuisine->vtbl[0x10](); flags = vtbl[0x18]()&0xff, vtbl[0x1c]()&0xff; gate 0 < n0
- ƒ arrayBufferID from int vector [unaff_EDI..], stride 4
- ƒ arrayBuffer/arrayBufferTips resolved per buff id via FUN_104fd710(buffId) (buff-info lookup); name via CPet::SetName
- ƒ OOM guard: if (elementCount) > 0x3FFFFFFF -> puts("out of memory") + exit(1) (stock allocator guard)

### ResolveBuffInfoOrDefault `@0x11761710` — buffs
*Reads an id from param_1 (FUN_118a68a0), looks it up in the CBuffInfo 2D map; if missing/zero falls back to the default buff (FUN_118a6ef0). Result written to *param_2.* (conf medium)
- ƒ id via FUN_118a68a0. Same 2D-map math as other CBuffInfo lookups (base mgr+0x30, stride mgr+0x28, capacity mgr+0x24).
- ƒ On invalid/0 -> *param_2 = FUN_118a6ef0() (default buff id 10000).

### ResolveBuffThroughFilter `@0x117d64e0` — buffs
*If param_1 (buff id) != 0, touches CBuffInfo then resolves it via CBuffFilterInfo::ResolveBuffId(param_1, param_2).* (conf medium)
- ƒ Delegates to FUN_117d60c0(param_1, param_2).

### SpeakAddBuffContentDef::ctor `@0x1177f520` — buffs/content
*Trivial content-def constructor for 'SpeakAddBuffContentDef' (NPC-speak action that adds a buff).* (conf medium)

### SpeakAddBuffContentDef::ctor_dup `@0x11781200` — buffs/content
*Duplicate constructor for 'SpeakAddBuffContentDef'.* (conf medium)

### SpeakAddBuffGeneContentDef::Load `@0x11783c00` — buffs/content
*Loads a speak-add-buff-gene content node: id(DAT_11dbe654) -> +4, 'BuffGene' -> +8, 'Count' -> +0xc.* (conf medium)
- ƒ param_1+4 = id; param_1+8 = BuffGene id; param_1+0xc = Count.
- $ Count = number of buff-genes added.

### SpeakAddBuffGeneContentDef::ctor `@0x1177f550` — buffs/content
*Trivial content-def constructor for 'SpeakAddBuffGeneContentDef' (speak action adding a buff-gene).* (conf medium)

### SpeakAddBuffGeneContentDef::ctor_dup `@0x11781230` — buffs/content
*Duplicate constructor for 'SpeakAddBuffGeneContentDef'.* (conf medium)

### SpeakAddBuffGroupContentDef::Load `@0x11783c70` — buffs/content
*Loads a speak-add-buff-group content node: id -> +4, 'BuffGroup' -> +8, 'Count' -> +0xc.* (conf medium)
- ƒ param_1+4 = id; param_1+8 = BuffGroup id; param_1+0xc = Count.
- $ Count = number of buffs from the group added.

### SpeakAddBuffGroupContentDef::ctor `@0x1177f580` — buffs/content
*Trivial content-def constructor for 'SpeakAddBuffGroupContentDef' (speak action adding a buff-group).* (conf medium)

### SpeakAddBuffGroupContentDef::ctor_dup `@0x11781260` — buffs/content
*Duplicate constructor for 'SpeakAddBuffGroupContentDef'.* (conf medium)

### TaskBuffFilterDef::Load `@0x11784560` — buffs/content
*Loads a buff-filter definition: id -> +4, 'Order' -> +8, 'IsDebuff' (bool) -> +0xc, 'ClearType' -> +0x10, 'EventFilters' (list) -> +0x14.* (conf medium)
- ƒ param_1+4 = id; param_1+8 = Order; param_1+0xc = IsDebuff (bool via FUN_118a6e00); param_1+0x10 = ClearType; param_1+0x14 = EventFilters (parsed by FUN_1176a620).

### TaskBuffFilterDef::ctor `@0x1177f850` — buffs/content
*Trivial content-def constructor for 'TaskBuffFilterDef' (task buff-filter condition).* (conf medium)

### TaskBuffFilterDef::ctor_dup `@0x11781530` — buffs/content
*Duplicate constructor for 'TaskBuffFilterDef'.* (conf medium)


## buff  (43)

### CBuffArea::ApplyAreaBuffsToTarget `@1143dab0` — buff-area
*Applies a set of up to 10 buffs defined on an area/effect descriptor (param_2) to a resolved target. Locates target's buff manager (via param_1[3]+0x90 lookup by key vtbl+0x1d4). Iterates 10 candidate buff ids stored at param_2+0x25.. (float-encoded ids), validates each against CBuffInfo, and adds it via buffMgr vtbl+0x44(sourceId=param_2[0x16], buffId, 0, removeFlag=(param_2[0x24]==0), type=0xb). Also does a pre-step effect refresh (vtbl+0xd8/0xb8) when *param_2 > epsilon.* (conf low)
- ƒ buff id list: 10 floats starting at param_2+0x25 (pfVar7); nonzero => apply
- ƒ apply: buffMgr.vtbl+0x44(param_2[0x16], (int)buffId, 0, *(char*)(param_2+0x24)=='\0', 0xB)
- ƒ gate DAT_11de9890 < *param_2 for the effect-refresh branch

### CBuffBase::OnConditionChange `@1141bef0` — buff-runtime
*Handles a change in a buff's activation condition. If the buff is in an error/guard state (+0x3d), rate-limits an error log 'CBuffBase_OnConditionChange' (counter DAT_11dfa438 starts 10, decrements). Otherwise checks current condition state (FUN_115d3de0) vs the stored active flag (*(+0x48)+4): if condition now false but was active -> deactivate (FUN_115d2990(1)) and optionally notify owner (buffMgr vtbl+0x10(this,0)); if condition now true but was inactive -> activate (FUN_115d2a50) and notify owner (vtbl+0x10(this,1)).* (conf medium)
- ƒ error-log rate limiter: DAT_11dfa438 init 10, --each, suppress when <1
- ƒ active flag = *(*(param_1+0x48)+4); param_2 = 'notify' bool
- ƒ activate -> owner.vtbl+0x10(this, 1); deactivate -> owner.vtbl+0x10(this, 0)
- ƒ owner obtained via *(param_1+0x44)+0x10

### CBuffBase::_AddTimer `@1141c350` — buff-duration
*Arms a buff's duration/expiry timer (param_2 = duration in ms). If the buff is server-controlled (buffInfo+0x420 != 0), it just records expiry wall-clock and server-tick without scheduling a local timer. Otherwise (client-owned, timer slot +0x24 == -1) it schedules a periodic scheduler tick, accounting for the tick granularity (1000/tickRate).* (conf medium)
- ƒ guard: only if *(param_1+0x34)=='\0' (not already timed) and param_2!=0
- ƒ wall expiry: *(DWORD*)(param_1+0x1c) = GetTickCount() + duration; server-tick expiry: *(param_1+0x20) = duration/1000 + serverTick(iVar2)
- ƒ server-buff path (*(bufObj+0x420)!=0): set +0x1c and +0x20 as above, return (no local timer)
- ƒ client path (+0x24 == -1): tickRate = vtbl+8(); step = 1000/tickRate; timerArg = step + duration; schedule FUN_10a127d0('CBuffBase::_AddTimer', timerArg, 1, this, FUN_1141c470); on success store handle +0x24, and +0x1c = step + tick + duration, +0x20 = timerArg/1000 + serverTick

### CBuffFilter::RemoveWithFilter `@1143f250` — buff-filter
*Removes a buff (param_2) applying the same CBuffFilterInfo target-type redirection as 1143f020 (type1->+0x14, type0->+0x18, type8->+0x1c). If a filter mapping resolves, removes the mapped id via buffMgr vtbl+0x4c(id,1) and returns 1. If no filter and param_3(force)==0, removes param_2 directly (vtbl+0x4c). If force set, expands via FUN_104fd710/FUN_116a7450 into 2 related buff ids and removes each via vtbl+0x58.* (conf medium)
- ƒ same target-type redirect as 1143f020
- ƒ remove one: buffMgr.vtbl+0x4c(id, 1)
- ƒ force-remove group: FUN_116a7450(local_c, 2) then for i in 0..2: buffMgr.vtbl+0x58(local_c[i], 1)

### CBuffFilter::ResolveAddWithFilter `@1143f020` — buff-filter
*Applies a buff (param_2 source, param_3 buffId) but first runs it through CBuffFilterInfo, which can redirect the buff id based on the target's type (vtbl+0xa8). If a filter entry exists: type1 -> use +0x14, type0 -> +0x18, type8 -> +0x1c; if the mapped value is 0 the branch falls through to add the original. Adds via buffMgr vtbl+0x44(param_2, resolvedId, 0, 1, 0x2d) and returns handle in *param_4.* (conf medium)
- ƒ CBuffFilterInfo lookup by param_3; redirect: (targetType==1 -> +0x14) else (targetType==0 -> +0x18) else (targetType==8 -> +0x1c); if 8 and +0x1c==0 abort
- ƒ add: buffMgr.vtbl+0x44(param_2, resolvedBuffId, 0, 1, 0x2d)

### CBuffFilterInfo::GetById `@1143f360` — buff-filter
*CInfoManager sparse lookup returning a CBuffFilterInfo entry by id.* (conf high)
- ƒ standard sparse lookup

### CBuffIconPair::Init `@11424f30` — buff-ui
*Initializes a two-slot buff descriptor object (e.g. a stacking/paired buff display). Clears fields, then for param_2>0 resolves CBuffInfo entry storing entry+0x420 (server flag) at obj[7], the entry ptr at obj[9], and param_3 (level/source) at obj[8]. Repeats for param_4>0 into obj[0xc]/obj[10]/obj[0xb]. If first buff set, calls FUN_11473320(source, buffInfo, 0, 0, uVar3) where uVar3 = 6 if owner-type (vtbl+0xa8)==0xb else 5.* (conf low)
- ƒ obj[7] = *(entry1+0x420) [server flag], obj[9] = entry1, obj[8] = param_3
- ƒ obj[10] = *(entry2+0x420), obj[0xc] = entry2, obj[0xb] = param_5
- ƒ add-type uVar3 = (ownerType==0xb) ? 6 : 5

### CBuffInfoManager::GetRecordById `@0x104fd710` — buff-config
*Looks up a CBuffInfo static-data record (buff definition) by buff id using the CInfoManager sparse 2D-bucket index. Returns pointer to the buff config record or 0.* (conf high)
- ƒ mgr = CBuffInfo::GetInfoManagerSingleton() -> *mgr, fallback CInfoManager::FindByName('CBuffInfo',0).
- ƒ Lookup (sparse-id): base@mgr+0x30, stride@mgr+0x28, count@mgr+0x24, buckets@mgr+0x20.
- ƒ Valid if id!=-1 AND (id!=0 OR base==0) AND stride!=0 AND (idx=id-base) in [0,count).
- ƒ record = buckets[idx/stride][idx%stride]; return 0 if bucket null.

### CBuffSystem::AddBuff `@114736a0` — buff-runtime
*Primary AddBuff entrypoint (string 'CBuffSystem_AddBuff'). Maps input buff id param_3 to an effective id via FUN_117d60c0(param_3, ownerType) then FUN_104fd710. If a suppression flag from owner (vtbl+0x174) is set, forces param_5=0. Builds a message-region check (msgId 0x1fb) to see if the buff is allowed in the current region; if blocked sets error 0x65. If buff not server-controlled (buffInfo+0x420==0), applies directly via FUN_11473320(target, buffInfo, param_4, flag, param_6). Otherwise server path (debug name + FUN_11424c80 + FUN_11472cb0 with buffInfo+0x10c/+0x80 + FUN_11579b90/FUN_11579c00).* (conf low)
- ƒ effectiveBuffId = FUN_104fd710(FUN_117d60c0(param_3, ownerType))
- ƒ region check msgId 0x1fb; if disallowed (local_6c==0) -> error code 0x65 stored at param_1[0x116]
- ƒ direct apply: FUN_11473320(target, buffInfo, param_4, param_5flag, param_6)
- ƒ server apply: FUN_11472cb0(1, *(buffInfo+0x10c), *(buffInfo+0x80), param_4, 0, 0)
- ƒ rate-limited error log DAT_11dfa5b4 (init 10)

### CBuffSystem::ApplyBuffPacket `@114733f0` — buff-runtime
*Applies a buff from a network/event descriptor (param_2). Resolves CBuffInfo by param_2[1]. If target is server-side and buff is server-controlled (buffInfo+0x420 != 0), routes to server (builds a debug name via FUN_1083ded0 with DAT_11d9e0b4 format, then FUN_11424c80). Otherwise builds a local buff-apply structure (FUN_11472cb0 with fields from the descriptor: level *(short)(param_2+6)/+0x16 count, params +0xe/+0x12, flags +0x7d/+0x7f, ptr +0x81) and adds it via FUN_11612920/FUN_11612230 -> FUN_11475fb0 (OnAddBuff).* (conf low)
- ƒ buffInfo lookup on param_2[1]; server gate: isServer(vtbl+100) && *(entry+0x420)!=0
- ƒ descriptor fields: param_2[0]=?, [1]=buffId, [2]=source; +0x16=short stack/count, +0x7d=ushort, +0x7f=ushort, +0x81=extra ptr
- ƒ FUN_11472cb0((short)param_2[3], *(param_2+0xe), *(param_2+0x12), overridesPtr, *(param_2+0x7f), param_2+0x81)

### CBuffSystem::ApplyOrRemoveBuffFromEntity `@1124a0c0` — buff-runtime
*Given a param packet {entityId, buffIndex, arg2, boolArg}, resolves the entity (FUN_111e09f0 -> table -> vtbl+0x14) and the CBuffInfo entry. If the entity is server-side (vtbl+100 nonzero) and the buff is server-controlled (CBuffInfo+0x420 != 0), it re-dispatches and calls FUN_114249e0(buffIndex) (server remove path). Always finally calls the entity buff-manager (buffMgr = entity+0x10) vtbl+0x54(arg2, boolArg!=0).* (conf medium)
- ƒ CBuffInfo sparse lookup on param_1[1]=buffIndex
- ƒ gate: if (isServer(vtbl+100) != 0 && *(entry+0x420) != 0) -> server buff handling FUN_114249e0(param_1[1])
- ƒ final call: buffMgr.vtbl+0x54(param_1[2], (char)param_1[3] != 0)

### CBuffSystem::BuildBuffInstanceFromInfo `@11260460` — buff-runtime
*Resolves a CBuffInfo entry by id (param_2) and constructs a buff-instance descriptor struct (local_a4..) with a fresh instance id (global counter DAT_11dfa3cc++), copying buffInfo+0x10 (buffId), buffInfo+0x10c and buffInfo+0x80 (magnitude/param fields), then submits it to the target's buff manager via (param_1+0x10) vtbl+0x40.* (conf medium)
- ƒ instanceId = DAT_11dfa3cc++ (monotonic buff-instance counter)
- ƒ descriptor: local_a0 = *(entry+0x10) [buffId], local_9c=0, local_98=1(state), local_96=*(entry+0x10c), local_92=*(entry+0x80), local_28=1
- ƒ dispatch: buffMgr(param_1+0x10).vtbl+0x40(&descriptor)

### CBuffSystem::ClearBuffSlot `@11441be0` — buff-runtime
*Given a buff id (param_2), resolves CBuffInfo, reads its slot index (entry+0x424); if != -1, clears the player's buff-slot array entry at param_1+0x14 + slot*4 (sets to 0).* (conf high)
- ƒ slot = *(entry+0x424); if slot != -1: *(param_1 + 0x14 + slot*4) = 0

### CBuffSystem::ConflictCheck `@114739b0` — buff-stacking
*Checks whether adding a buff (param_1 = buff id) would conflict with existing buffs. Resolves CBuffInfo, then delegates to FUN_11475300(buffInfo, &outFlag) which performs the actual conflict/priority test. Rate-limits an error log 'CBuffSystem_ConflictCheck' (DAT_11dfa5b0 init 10) when the id is invalid.* (conf medium)
- ƒ result = FUN_11475300(buffInfo, &local(0)) (bool byte)
- ƒ invalid-id log limiter DAT_11dfa5b0 init 10

### CBuffSystem::GetCountByTypeID `@114744f0` — buff-query
*Validates buff id (param_1) against CBuffInfo, then returns the active count for that buff type via FUN_11612a80(param_1). Rate-limits error log 'CBuffSystem_GetCountByTypeID' (DAT_11dfa5bc init 10) on invalid id; returns -1 on failure.* (conf high)
- ƒ return FUN_11612a80(param_1) if valid, else 0xffffffff

### CBuffSystem::OnAddBuff `@11475fb0` — buff-runtime
*Post-add hook. Only acts for buff phase/state == 2 (param_1+4). If the buff object flags an error (+0x3c), rate-limits an 'CBuffSystem_OnAddBuff' log (DAT_11dfa5b8 init 10). Otherwise fires a pre-add event (msgId 0x1fa), calls manager vtbl+0x24 (register), computes a follow-up value (FUN_1141bcc0, or FUN_11476490(buff) when param_3==0), commits via FUN_1141bbe0, invokes manager vtbl+0x14 (activate), and fires a post-add event (msgId 0x1f8).* (conf low)
- ƒ only when *(param_1+4)==2
- ƒ pre-event msgId 0x1fa (fields {0x1fa,-1,-1,buff}); post-event msgId 0x1f8
- ƒ value = (param_3=='\0') ? FUN_11476490(buff) : FUN_1141bcc0()

### CBuffSystem::OnServerBuffRemoved `@114249e0` — buff-runtime
*Server-buff removal notification: resolves CBuffInfo entry by id (param_2); if entry valid and the target has an active state (param_1+0x3c != 0), and the currently-tracked buff (FUN_1141bd30) equals param_2, triggers FUN_1139d4a0 (state/UI refresh, e.g. clearing the current-buff indicator).* (conf low)
- ƒ if FUN_1141bd30() == param_2 -> FUN_1139d4a0()
- ƒ guard: *(param_1+0x3c) != 0

### CBuffSystem::RemoveBuff `@11473aa0` — buff-runtime
*Removes a buff. Maps input id (param_2) via FUN_117d60c0(param_2, ownerType) then resolves CBuffInfo. If target server-side and buff server-controlled (+0x420!=0), takes server path (FUN_114249e0 then builds a remove descriptor and FUN_1141b890/FUN_1141ba70 via manager vtbl+8). Otherwise removes locally via FUN_11475450(buffInfo+0x44, 1, buffInfo+0x10, param_3). Returns 0 ok, -1 if id invalid.* (conf low)
- ƒ effectiveId = FUN_117d60c0(param_2, ownerType)
- ƒ server gate: isServer && *(entry+0x420)!=0
- ƒ local remove: FUN_11475450(*(entry+0x44), 1, *(entry+0x10), param_3)

### CBuffSystem::TriggerBuffAndBroadcast `@114da6b0` — buff-runtime
*Resolves a buff id from source/target context (FUN_117eb840 given caster type flags: PvP flag FUN_11463d90 or vtbl+0x30 hostility check, and self-cast flag param_1[0x11]==1) and applies it. If FUN_116a78d0(0x24) gate is false, applies the buff to the primary target (vtbl+0x44 type 0x20) and builds a debug string (skill name via FUN_114daf10(buffInfo+0x14), caster name). If gate true, iterates all entities in an area/party list (FUN_113a5930/58c0/58d0 iterator), applying the buff (type 0x20) to each and sending a per-target event (msgId 0x204).* (conf low)
- ƒ buffId = FUN_117eb840(param_1[0x13], pvpFlag, selfCastFlag)
- ƒ selfCastFlag = (param_1[0x11]==1); pvpFlag from FUN_11463d90 or target-hostility vtbl+0x30
- ƒ add-type 0x20 = skill-triggered buff channel; per-target event msgId 0x204
- ƒ area gate: FUN_116a78d0(0x24)

### CCliLogicBuffArea::OnLogicEntityEnter `@11288e90` — buff-area
*Client-side logic buff-area callback when an entity enters. Appends the entity to the area's occupant vector (param_1+0x1b4/0x1b8). If the area is active (+0x168), this is the first occupant (occupant-bytes delta == 4), and no tick timer yet (+0x180 == -1), schedules a periodic tick at interval *(param_1+0x16c)*DAT_11de9a44 seconds (ms) with callback FUN_11288d90. Then optionally applies the area buff to the entity (FUN_111e0ab0 gate -> FUN_11415280) and always FUN_11415380.* (conf medium)
- ƒ occupant append: *(param_1+0x1b4) grows by 4 (int entity id per slot)
- ƒ tick interval = (int)(*(float*)(param_1+0x16c) * DAT_11de9a44)  [DAT_11de9a44 = 0.001f, so field is ms]
- ƒ timer scheduled only when occupantBytes(&0xfffffffc)==4 (first entity) and +0x180==-1
- ƒ buff apply gated by FUN_111e0ab0()

### CEquipInfo::CollectBuffIds `@111e0d40` — buff-equip
*Given an equip record (param_1) resolves its CBuffInfo entry and decodes the packed buff-id list at buffInfo+0x3c8 via DecodeBuffIdList into up to 10 ids, appending each to the output vector param_2. Uses standard CInfoManager sparse-table lookup on 'CBuffInfo' keyed by equip field *(param_1+0x1b) mapped through FUN_116c5010.* (conf medium)
- ƒ buff index = FUN_116c5010(*(byte*)(param_1+0x1b)) ; CInfoManager sparse lookup on 'CBuffInfo' (mgr+0x30 base, +0x28 pageSize, +0x24 count, +0x20 pageArray): row=mgr[+0x20 + (idx/pageSize)*4]; entry=row[(idx%pageSize)*4]
- ƒ DecodeBuffIdList(entry+0x3c8, local_30, max=10) -> count; append count ids to vector at param_2 (grows via FUN_10463c40 or writes *end and end+=4)

### CGameBuffArea::CreateEntity `@10bc8d60` — buff-area
*Spawns/binds the render+logic entity for a buff area (region that applies buffs). Branch on source-type param_2[0x38]: type 0 = wrap an existing world entity (from param_2[0x36],[0x37] id pair) and call CLogicBuffArea::ReadPropertiesFromXml; type 4 = spawn a new entity named 'CGameBuffArea_%08x' of class 'MHBuffArea', load '/Libs/EntityProperties/<model>' 'Properties', apply, ReadPropertiesFromXml; else = minimal proxy creation. Stores render node in this+0x11.* (conf medium)
- ƒ this[0x10] = param_2 (owning buff-area logic object)
- ƒ param_2[0x38] = creation mode selector (0 \| 4 \| other)
- ƒ param_2[0x36],[0x37] = entity id pair; fallback this[0x10]+0xd8/0xdc
- ƒ entity name = sprintf('CGameBuffArea_%08x', this[0x10]+4)
- ƒ class name 'MHBuffArea'; property path '/Libs/EntityProperties/' + record model string; sub-node 'Properties'
- ƒ default scale local_20 = 0x3f800000 = 1.0f
- ƒ on failure: releases render node id (this+0x11 = -1), this+0x10=0, returns 0

### CLogicBuffArea::SetEnable `@11415450` — buff-area
*Enables/disables a logic buff-area. On enable, if the area has a positive lifetime (+0x5e as float > DAT_11de9890), it (re)schedules a one-shot expiry timer at lifetime*DAT_11de9a44 ms via FUN_100ea610 with callback FUN_11415260, storing the timer handle at +0x5f. On disable, cancels the timer and, if flag +0x6b set, notifies owner (owner=+0x3 vtbl+0x1c). Propagates enable state to a child object (vtbl+0xd8 -> vtbl+0xa4).* (conf medium)
- ƒ enabled flag stored at *(byte*)(param_1+0x58)
- ƒ lifetime gate: DAT_11de9890 < (float)*(param_1+0x5e)  [DAT_11de9890 ~ small epsilon/0]
- ƒ expiry delay = (float)*(param_1+0x5e) * DAT_11de9a44  [ms; DAT_11de9a44 = 0.001? actually here used as *seconds->ms multiplier]
- ƒ timer handle at param_1+0x5f (-1 = none)

### CPlayer::RefreshBuffsWithPVPExtraTime `@10f1a850` — buff-application
*Reads config value "PVPExtraBuffTime" (via FUN_10a68a10 into local_8) when a PVP-mode gate is set (manager vtable+0x150(2) then +0x38 != 0). If param_2 (entity/actor id) == -1 it defaults to FUN_10a636e0() (local player). Then twice enumerates buff lists (flag 0 then flag 1) for that actor via context (DAT_1202e818+0xd0) buff-source vtable +0x34, passing each list plus PVPExtraBuffTime to FUN_10f1dba0, freeing the returned intrusive list nodes.* (conf medium)
- ƒ extraTime local_8 = read 'PVPExtraBuffTime' (only if PVP gate: mgr.vtable+0x150(2) && (+0x38)()!=0)
- ƒ if(param_2==-1) param_2 = FUN_10a636e0()  (default = local player id)
- ƒ buff enum: (ctx+0xd0).buffMgr(+0x94).vtable+0x34( actorId, buffOwner(+0x90), &list, 0 ) then FUN_10f1dba0(&list, 0, extraTime); repeat with flag 1

### CPlayer::SpawnSkillBuffEffectsFromCBuffInfo `@10f1c150` — buff-effect-spawn
*For an actor's skill/buff-source list at (param_1+0x15cc), for each entry: refreshes it (FUN_10f1fd40), resolves its model string and (if it lacks the "_enhanced" suffix) appends "_enhanced" to pick the enhanced-variant model, re-resolves. Then looks up a CBuffInfo record (FUN_10500130(0,"CBuffInfo",0)) and indexes it by param_3 to get the per-level buff row; DecodeBuffIdList extracts up to 10 buff ids; for each buff whose type (vtable[0]())==7 it spawns the buff's visual/particle effect on the skill object via (skillObj+0x1e8). Handles NUS_null00 special case and DAT_11dfa3c4 alt-buff-data override.* (conf medium)
- ƒ enhanced variant: if strstr(modelName,"_enhanced")==NULL -> modelName += FUN_10a4c990("_enhanced",9) (append 9-char suffix)
- ƒ NUS special: if(DAT_11dfa3c4!=0 && (t=DAT_11dfa3c4/1000)==0x32\|\|t==0x34\|\|t==0x36) FUN_1083ac30("NUS_null00")  [t in {50,52,54}]
- ƒ CBuffInfo 2D lookup by param_3: rec=FUN_10500130(0,'CBuffInfo',0); base=rec[0x30]; rows*? : iVar4=rec[0x28] (columns); idx=param_3-base; valid iff param_3!=0-cases && 0<=idx<rec[0x24]; cell = rec[0x20][ (idx/iVar4) ][ (idx%iVar4) ]
- ƒ buff id list: n = DecodeBuffIdList(cell+0x3c8, local_7c, 10)  (max 10 ids)
- ƒ per buff: obj=buffMgr(+8)(id); if(obj && obj.vtable[0]()==7) { altData = DAT_11dfa3c4? FUN_10b2de00(DAT_11dfa3c4,DAT_11dfa3c8):0; spawn effect via skillObj.vtable+0x1e8( buffId=[3], effect=[4], pos=+6, rot=&{[9],[10],[0xb]}, scale=[0xc], flag=byte[0xe], 1,0, cond, 0 ); second effect uses field [0x10]/[0xf] }

### FGNode_AddBuff::GetConfiguration `@10e329a0` — buff
*Flowgraph node definition. Inputs: targetNetID, buffID (default -1), needPartName (bool), partName (string). Output: buffInstanceID. This is an 'apply buff to target' node.* (conf medium)
- ƒ inputs: targetNetID(int), buffID(int, default -1), needPartName(bool), partName(string)
- ƒ output: buffInstanceID(int)

### FGNode_BuffAreaDisplay::GetConfiguration `@10e47620` — buff-area
*Flowgraph node for buff-area/monster UI display. Inputs include Show/Hide plus Root1..Root4 and other root ports. Outputs: BuffCurrentValue, BuffMaxValue, ShowMonster(bool), ShowArea1(bool), ShowArea2(bool).* (conf medium)
- ƒ output ports: BuffCurrentValue(int), BuffMaxValue(int), ShowMonster(bool), ShowArea1(bool), ShowArea2(bool)

### FGNode_GetBuffCount::GetConfiguration `@10e345a0` — buff
*Flowgraph node. Inputs: targetNetID, buffID (default -1). Outputs: Success, Failed, buffCount, stackCount. Queries a buff's instance count and stack count.* (conf medium)
- ƒ inputs: targetNetID(int), buffID(int, default -1)
- ƒ outputs: Success, Failed, buffCount(int), stackCount(int)

### FGNode_RemoveOrQueryBuff::GetConfiguration `@10e33780` — buff
*Flowgraph node. Inputs: targetNetID, buffID (default -1). Outputs: Success, Failed. Likely a remove-buff / has-buff node.* (conf medium)
- ƒ inputs: targetNetID(int), buffID(int, default -1)
- ƒ outputs: Success(void), Failed(void)

### LoadBuffEffectsConfig `@0x10b2b510` — buff-visuals
*Loads /Libs/BuffEffects.xml (root "BuffEffects"), iterating an effects table and an "EffectsTMConfig" table keyed by "bodysize" with per-entry "attachment", Position, Angle, Scale. Registers buff visual-effect definitions. Client rendering config.* (conf medium)
- ƒ reads bodysize-keyed transform config: attachment name + Position/Angle/Scale (FUN_10b312e0 registers the parsed TM entry)
- ƒ TM entry copied: fields piVar10[1..4] + [5..6] (transform) + [7] (id)

### LoadBuffEffectsConfig_Instanced `@0x10b348e0` — buff-visuals
*Instance-guarded variant (flag byte @ param_1+0x1d) of the BuffEffects.xml loader: parses the same BuffEffects/EffectsTMConfig structure but dispatches per-entry through an object-method table (piVar13[idx+7]) to build effect factory objects, then sets the loaded flag.* (conf medium)
- ƒ guard: if (char)param_1[0x1d]==0 load...; then *(param_1+0x1d)=1
- ƒ per effect index (local_30 < 0x16): factory = (param_1[local_30+7])(); store via FUN_10b34f00
- ƒ EffectsTMConfig entries parsed identically to 0x10b2b510 (bodysize/attachment/Position/Angle/Scale)

### Tlv::BuffInfo_DebugFormat `@0x101fcbe0` — buff-schema
*TDR DebugFormat for TlvBuffInfo (confirmed vs schema doc @ 0x101FC830): buffId, uID, ownerId, retainTime, expireTime, count, stack, from, effectNum + [effectData] array (max 10, element decoder FUN_101fbd20). This is the authoritative active-buff instance record.* (conf high)
- ƒ struct: +0 buffId(i32), +4 uID(i32), +8 ownerId(i32), +0xc retainTime(i32), +0x10 expireTime(i32), +0x14 count(i16), +0x16 stack(i16), +0x18 from(i16), +0x1a effectNum(i16, max 10)
- ƒ effectData[] per-element via FUN_101fbd20; count>10 -> error -7, <0 -> error -6
- ƒ NOTE: DebugFormat orders count(@+0x14) then stack(@+0x16) then from(@+0x18); schema doc lists offsets differently (count@10,stack@11,from@12) — trust these decode offsets as they read the live struct

### TlvBuffID::PackToBuffer `@0x10400cc0` — buff
*TDR pack of {iBuffID}.* (conf high)
- ƒ iBuffID @0x0. Returns 0xffffffed if buffer NULL.

### TlvBuffID::PackToBuffer_Bounded `@0x10400d70` — buff
*Bounded-buffer pack of {iBuffID}.* (conf high)
- ƒ iBuffID @0x0; NUL at min(len,cap-1).

### TlvBuffID::PackToStream `@0x10400e00` — buff
*Stream-desc pack of {iBuffID}.* (conf high)
- ƒ iBuffID @0x0

### TlvBuffID::PrintText `@0x10400d40` — buff
*TDR text dump of {iBuffID}.* (conf high)
- ƒ iBuffID @0x0

### TlvBuffIDResult::PackToBuffer `@0x10400ff0` — buff
*TDR pack of {iErrCode, iBuffID}.* (conf high)
- ƒ iErrCode @0x0; iBuffID @0x4. Returns -0x13 if buffer NULL.

### TlvBuffIDResult::PrintText `@0x10401090` — buff
*TDR text dump of {iErrCode, iBuffID}.* (conf high)
- ƒ iErrCode @0x0; iBuffID @0x4

### TlvBuffOpNotify::PrintText `@0x1031ca70` — buff-state
*TDR text dump of a buff apply/remove/update notification {dwNetId, iBuffOp, iBuffId, iBuffRetainTime, iBuffStackCount, ullDbid}.* (conf high)
- ƒ dwNetId @0x0 (target); iBuffOp @0x4 (op code: add/remove/refresh); iBuffId @0x8; iBuffRetainTime @0xc; iBuffStackCount @0x10; ullDbid (u64) @0x14/0x18

### TlvBuffRelationResult::PrintText `@0x102f2b50` — buff-relations
*TDR text serializer for a buff-interaction/relation result (two buffs colliding, hit-type, change/result). Directly a buff-relation/priority record.* (conf high)
- ƒ iFirstBuffId @0x0; iFirstBuffOwner @0x4; iSecondBuffId @0x8; iSecondBuffOwner @0xc; chChange (i8 '0x%02x') @0x10; iHittype @0x11; iResult @0x15; iParam1 @0x19

### TlvBuffState::PrintText `@0x1031b4a0` — buff-state
*TDR text dump of a buff-state record {iBuffId, iBuffRetainTime, iBuffStackCount} — core buff duration/stack element.* (conf high)
- ƒ iBuffId @0x0; iBuffRetainTime @0x4 (remaining duration); iBuffStackCount @0x8 (stack count)

### TlvPaidItemsBuffsResult::PrintText `@0x102e36e0` — buff-purchase
*TDR text serializer for a result packet listing purchased/consumed paid items and paid buffs.* (conf high)
- ƒ iErrCode @0x0; iNetID @0x4; iItemDataCount @0x8 (param_1[2]); CAP <0->-6, >100->-7; astPaidItems[] @param_1+3 each serialized by FUN_102ada60
- ƒ iBuffDataCount @param_1[0xcb]; CAP <0->-6, >100->-7; astPaidBuffs[] @param_1+0xcc each via FUN_102ada60
- ƒ Element stride between count fields: (0xcb-3)=0xc8 dwords = 200 dwords per astPaidItems block of 100 -> 2 dwords (8 bytes) per element
- $ Max 100 paid items and 100 paid buffs per packet


## talent  (20)

### CTalentActiveInfo::CheckLevelRequirement `@1141d020` — talent
*Checks whether the player can use an active talent (index param_2, looked up at index+1). Resolves the player's active-role object (via *param_1 chain, vtbl+0xa8 must be 0 = not disabled, then vtbl+0x46c to get level provider, vtbl+0x18 = current level). Returns 0 if level >= talent requirement (entry+0x14); 0xE6 if under-level; 0xCA if role invalid; 0xD6 if talent not found.* (conf medium)
- ƒ playerLevel = provider.vtbl+0x18(); requirement = *(entry+0x14)
- ƒ if playerLevel < requirement -> 0xE6 (under level); else 0 (ok)
- ƒ error codes: 0xE6 under-level, 0xCA invalid-role, 0xD6 not-found

### CTalentActiveInfo::GetById `@112b3650` — talent
*CInfoManager sparse-table lookup returning the CTalentActiveInfo entry for a talent id.* (conf high)
- ƒ standard sparse lookup

### CTalentActiveInfo::GetByListIndex `@112b36a0` — talent
*Dense-array accessor into CTalentActiveInfo manager list ((mgr+0x14)[index]).* (conf high)
- ƒ count = (*(mgr+0x18)-*(mgr+0x14))>>2; return list[index]

### CTalentActiveInfo::GetTalentIdByIndexPlus1 `@112b3ca0` — talent
*Sparse lookup on (index+1) into CTalentActiveInfo; returns entry+0x14 (talentId) or -1. The +1 offset implies the list is 1-based / index 0 is reserved.* (conf medium)
- ƒ param+1 then sparse lookup; return *(entry+0x14) else 0xffffffff

### CTalentInfo::EquipTalent `@1141d4a0` — talent
*Equips/activates a talent (param_2) in a slot (param_3). Rejects if player is in a disabled state (vtbl+0xa8 != 0 -> 0xCC). Resolves CTalentInfo entry; verifies the talent's class/tree (entry+0x44) matches the player's current class (vtbl+0x294). Removes any previously-granted buff (FUN_1141df30 -> buffMgr vtbl+0x44 remove, type 0x10), then records the equip (FUN_1157a340), and pushes the new talent state (vtbl+0x30 with FUN_1157a720 level). Returns 0 on success, 0xD2 not-found, 0xCC disabled.* (conf medium)
- ƒ class match: player.vtbl+0x294() == *(entry+0x44)  (entry+0x44 = talent class/tree id)
- ƒ remove old buff: id=FUN_1141df30(param_2); buffMgr.vtbl+0x44(0, id, 0, 1, 0x10)
- ƒ error codes: 0xCC disabled/in-combat, 0xD2 not-found

### CTalentInfo::FillTalentDisplay `@112b59d0` — talent
*Resolves a CTalentInfo entry by id (param_2) and fills an output struct (param_3): out+0xc = FUN_11742830() (current runtime talent obj?), out+0x10 = talentId param_2, out+0x18 = (FUN_1141d820(id)==0) bool (learnable/available flag). Sets names from entry+0x90 and entry+0x78 (fallback empty).* (conf medium)
- ƒ out+0x10 = param_2 (talentId); out+0x18 = (FUN_1141d820(param_2)==0); names entry+0x90, entry+0x78

### CTalentInfo::GetByListIndex `@1141cf80` — talent
*Dense-array accessor into CTalentInfo manager list ((mgr+0x14)[index]).* (conf high)
- ƒ count = (*(mgr+0x18)-*(mgr+0x14))>>2

### CTalentInfo::GetGrantedBuffId `@1141df30` — talent
*For a learned talent (param_1), resolves its CTalentInfo entry, reads the equipped/learned level (FUN_1157a720), resolves the runtime talent record (FUN_117427f0) and returns its granted buff id (record+0x54). Returns 0 if talent id 0 / not found / not learned.* (conf medium)
- ƒ level = FUN_1157a720(param_1); if 0 return 0; rt = FUN_117427f0(level); return *(rt+0x54)

### CTalentInfo::LearnTalentLevel `@1141d640` — talent
*Learns/upgrades a talent (param_2) by one level. Rejects if disabled (0xCC). Reads current level (FUN_1157a720); if already >0 returns 0xDC (already learned/maxed). Bumps to level = cur+1 (FUN_1157a380 stores), records via vtbl+0x2c, builds a talent-change event packet (msg 0x6ac, {..., talentId, newLevel}) via FUN_1157c850/FUN_1157df40, resolves runtime talent (FUN_117427f0). If active (FUN_1157a850) and class matches, removes prior buff and re-applies (buffMgr vtbl+0x44). Finally fires vtbl+0x20(entry+0x44 class, entry+0x10, entry+0x14). Success 0; 0xD3 apply-fail; 0xD2 not-found; 0xDC already; 0xCC disabled.* (conf medium)
- ƒ curLevel = FUN_1157a720(param_2); if curLevel > 0 return 0xDC
- ƒ newLevel = curLevel + 1; store FUN_1157a380(param_2, newLevel)
- ƒ event packet msgId = 0x6ac, fields {0x6ac, -1, -1, talentId=param_2, newLevel}
- ƒ final broadcast vtbl+0x20(*(entry+0x44), *(entry+0x10), *(entry+0x14))
- ƒ error codes: 0xDC already-learned, 0xD3 runtime-fail, 0xD2 not-found, 0xCC disabled

### CTalentInfo::ResetAllTalentBuffs `@1141dcb0` — talent
*On some transition (class-change / respec), iterates all CTalentInfo rows and, for talents whose class (+0x44) matches the player's current class field (param_1+6), removes their granted buff (entry+0x54) via buffMgr vtbl+0x44 (type 0x10). Guarded by: player enabled (vtbl+0xa8==0), a subsystem present (obj+3), a flag (vtbl+0x168), current class level < 0xD, and a talent-manager present (obj[0xabd]), plus a state check (vtbl+0x10 != 1).* (conf low)
- ƒ class level gate: player.vtbl+0x294() < 0xD
- ƒ for each CTalentInfo row: if *(entry+0x44) == param_1[6] -> buffMgr.vtbl+0x44(0, *(entry+0x54), 0, 1, 0x10)
- ƒ row count via manager vtbl+0x28

### Tlv::SkillActionPoint_DebugFormat `@0x1029caa0` — talent-schema
*TDR DebugFormat for a skill/talent action-point allocation record: iNetID, iActionType, iPoint, iLevel, iBuffID (all int32). Represents a point spent into a skill/talent producing a buff — talent-tree allocation entry.* (conf high)
- ƒ struct: +0 iNetID(i32), +4 iActionType(i32), +8 iPoint(i32), +0xc iLevel(i32), +0x10 iBuffID(i32)

### TlvTalentIdxReq::PackToBuffer `@0x103072b0` — talent
*TDR pack of {iTalentID, iIdx} (talent at a tree index/slot).* (conf high)
- ƒ iTalentID @0x0; iIdx @0x4. Returns -0x13 if buffer NULL.

### TlvTalentIdxReq::PrintText `@0x10307350` — talent
*TDR text dump of {iTalentID, iIdx}.* (conf high)
- ƒ iTalentID @0x0; iIdx @0x4

### TlvTalentIdxResult::PrintText `@0x103076c0` — talent
*TDR text dump of talent-index result {iTalentID, iIdx, iErrorID}.* (conf high)
- ƒ iTalentID @0x0; iIdx @0x4; iErrorID @0x8

### TlvTalentReq::PackToBuffer `@0x10306c30` — talent
*TDR pack of a single-field talent request struct {iTalentID} into a caller buffer (variant with buffer/length out-params and cleanup).* (conf high)
- ƒ iTalentID @0x0. Returns 0xffffffed (-19) if buffer NULL. Writes consumed length to *param_4.

### TlvTalentReq::PackToBuffer_Bounded `@0x10306ce0` — talent
*TDR pack of {iTalentID} into a bounded byte buffer (param_3 = capacity); NUL-terminates at min(len,cap-1).* (conf high)
- ƒ iTalentID @0x0. If buffer NULL or cap==0 returns &DAT_11d9d32b (empty string). NUL at index min(local_10,param_3-1).

### TlvTalentReq::PackToStream `@0x10306d70` — talent
*TDR pack of {iTalentID} into a stream/desc struct (param_2 = {ptr,len,cap}); writes NUL via TdrBuf_PutNulAt.* (conf high)
- ƒ iTalentID @0x0; NUL at min(len@param_2[1], cap@param_2[2]-1)

### TlvTalentReq::PrintText `@0x10306cb0` — talent
*TDR text dump of {iTalentID}.* (conf high)
- ƒ iTalentID @0x0

### TlvTalentResult::PackToBuffer `@0x10306f60` — talent
*TDR pack of talent result {iTalentID, iErrorID}.* (conf high)
- ƒ iTalentID @0x0; iErrorID @0x4. Returns -0x13 (-19) if buffer NULL.

### TlvTalentResult::PrintText `@0x10307000` — talent
*TDR text dump of talent result {iTalentID, iErrorID}.* (conf high)
- ƒ iTalentID @0x0; iErrorID @0x4


## tdr  (18)

### Tdr::FormatEntryValue `@0x10006530` — tdr-serialization
*Formats a single TDR meta-entry value into a text buffer for human-readable dump/logging. Dispatches on the entry's iType (switch on *(param_3+8)) and appends a formatted string via FUN_1000f770 (sprintf-append helper), then advances the read cursor by the entry's host unit size (*(param_3+0x18)). NOT skill logic — this is the debug/text-dump path of the TDR codec that (de)serializes all game TLV structures (SkillItem, ManuSkill, TlvAttributeItem, etc.).* (conf medium)
- ƒ Dispatch on TDR iType at *(param_3+8): case 2/5/6/7/9 = integer -> '%d'(&DAT_11d9e0dc); case 3/4 = int8/char; case 8/10 = unsigned '%u'(&DAT_11d9f574); case 0xb/0xc = two 32-bit words printed together; case 0xd = 16-byte hex (FUN_1000ee40 base 0x10); case 0xe = 16-byte alt-hex (FUN_1000ef00); case 0xf = 32-byte hex/GUID (FUN_1000efa0); case 0x11 = float32 (*(float*)_Str, promoted to double, '%f'=&DAT_11da0cf4); case 0x12 = double; case 0x13 = IPv4/host string (FUN_1000f0d0, 0x20 buf); case 0x14 = uint16 big-endian (FUN_1000e5c0, 2 bytes); case 0x15 = C string (max len from *(param_3+0x20), else host_end-cursor); case 0x16 = wstring->utf8 (FUN_1000e630, len>>1)
- ƒ cursor advance per entry: _Str += *(int*)(param_3+0x18)  (host unit size)
- ƒ type 0x15 string: max = *(param_3+0x20); if 0 use (host_end - cursor); strnlen must be < max else err -0x7dfefbfa (=0x82010406)
- ƒ error format 'failed to output value of entry<%s>, consume input buffer from %p to %p' guarded by iVar5<0

### Tdr::FprintfMetaToFile `@0x10009ab0` — tdr-serialization
*Validates params (meta, format, fp, host all non-null; host->pszBuff & host->iBuff>0) and clamps the requested cut-off version, then delegates to FUN_100086c0 to write a meta instance to a file/stream using a format. Stock TDR API entry (tdr_fprintf-style).* (conf medium)
- ƒ version clamp: if (a_iCutOffVersion==0 \|\| meta.curVer < a_iCutOffVersion) a_iCutOffVersion = meta.curVer  (meta.curVer at *(param_1+0xc))
- ƒ if (a_iCutOffVersion < meta.baseVer) return 0x82010401  (meta.baseVer at *(param_1+8))
- ƒ host struct layout: param_3[0]=pszBuff, param_3[1]=iBuff; both must be nonzero else return 0x82010468

### Tdr::FprintfMetaToFile_NoFormat `@0x10009bc0` — tdr-serialization
*Same as FUN_10009ab0 but without an explicit format arg — builds a default format context (FUN_10007840 on a 16-byte stack struct) then calls FUN_100086c0. Version validation identical.* (conf medium)
- ƒ version default: if a_iCutOffVersion==0 -> meta.curVer(*(param_1+0xc)); if < meta.baseVer(*(param_1+8)) return 0x82010401
- ƒ host validity: param_3[0]!=0 && param_3[1]!=0 else 0x82010468

### Tdr::HostToXml_Buffer `@0x1006a610` — tdr-serialization
*TDR export entry point (data/struct -> XML or host-text into a buffer). Validates meta/xml/host pointers, clamps cutoff version to [baseVersion, meta.maxVersion], dispatches to output mode 1/3/other (FUN_10066d50 / FUN_10069c70 / FUN_10066510).* (conf medium)
- ƒ cutoff = (param_4==0 \|\| param_4>meta.maxVer(+0xc)) ? meta.maxVer : param_4
- ƒ reject if cutoff < baseVersion(meta+8): error 0x82010401
- ƒ param invalid: 0x82010468
- ƒ mode==1 -> FUN_10066d50; mode==3 -> FUN_10069c70; else FUN_10066510

### Tdr::HostToXml_FileName `@0x1006a8e0` — tdr-serialization
*TDR export to a named file: fopen(path,'w'), writes XML prolog with encoding, dispatches by mode, fclose. Same version validation.* (conf medium)
- ƒ writes '<?xml version="1.0" encoding=%s standalone="yes" ?>'; error 0x82010446 on open fail

### Tdr::HostToXml_FilePtr `@0x1006a790` — tdr-serialization
*TDR export variant writing to a FILE* (a_fpXml). Same validation/cutoff dispatch as 0x1006a610.* (conf medium)
- ƒ same cutoff/version checks; errors 0x82010468 / 0x82010401

### Tdr::HostToXml_IOWrap `@0x1006aa90` — tdr-serialization
*TDR export via an IOWrap descriptor struct (chooses file-name / FILE* / memory-buffer output source, and mode field). Validates the wrap fields and dispatches.* (conf medium)
- ƒ IOWrap layout: [0]=meta [1]=fileName [2]=FILE* [3]=buf [4]=buflen [5]=host.buf [6]=host.len [7]=cutoffVer [8]=mode [9]=arg

### Tdr::MetalibInputEntries `@0x10067670` — tdr-serialization
*TDR (Tencent Data Representation) metalib deserializer core: iterates struct entries (0xb4-byte descriptors starting at meta+0xb8), resolves array refer-counts, validates refer value in [0,array_count], and copies/decodes each field into the host buffer honoring version cutoff. Generic serialization engine.* (conf medium)
- ƒ entry stride = idx*0xb4 + 0xb8 + meta base
- ƒ refer-count width at entry+0x58: 2->u16, 4->i32(sign-extend), 8->i64, else u8
- ƒ error 0x82010403 invalid refer value; 0x82010407 buffer not enough; error mask bit 0x80000000
- ƒ inline string copy loop when size<=0x40 else memcpy

### Tdr::PackArrayFieldHostToNet `@0x1000cfa0` — tdr-serialization
*Helper for packing one array-typed entry host->net. For nested-struct elements (entry iType==1) it recurses into FUN_1000a1f0 per element; for iType 0x15 (string array) and 0x16 (wstring array) it emits per-element length prefix + bytes; otherwise it BE-swaps fixed 1/2/4/8-byte elements in a tight loop. Writes total consumed net length back into param_3[1].* (conf medium)
- ƒ entry base = param_2*0xb4 + 0xb8 + param_1 (meta base + entry index * 180 + 0xb8)
- ƒ iType==1 (struct): for i in 0..arrayCount(entry+0x24): elem_host = host + (entry+0x18)*i; call FUN_1000a1f0(sub_meta, netOut, elem_host, version); advance net by returned length
- ƒ iType==0x15 (string[]): per elem: len=strnlen(src, custom_size(entry+0x20) or remaining)+1; write BE size-prefix of width entry+0x50; memcpy len bytes; src advances by custom_size stride
- ƒ iType==0x16 (wstring[]): per elem: byteLen=FUN_100108a0(src,avail)*2+2; write BE size-prefix width entry+0x50; copy bytes
- ƒ default fixed array: unit=entry+0x1c net size (1/2/4/8) BE-swap * arrayCount; host unit stride entry+0x18
- ƒ bounds: host_end < src+unit*count -> -0x7dfefbf9 (0x82010407); net_end < dst+unit*count -> -0x7dfefbfe (0x82010402); string overflow -0x7dfefb87 (0x82010479)
- ƒ param_3[1] set to (dst - *param_3) = bytes written on every exit

### Tdr::PackHostToNet `@0x1000a1f0` — tdr-serialization
*CORE host->network packer (tdr_host2net). Walks the meta tree with an explicit stack of frames (stride 0x2f ints = 188 bytes/frame, in aiStack_1784[]), converting each host struct field to big-endian (network) byte order and writing it into the net buffer. Handles: primitive scalars (1/2/4/8-byte BE swap), fixed arrays, refer/count-driven arrays, unions, version-indicator emission, C strings (type 0x15) and wstrings (type 0x16, UTF16 via FUN_100108a0). This is the codec that emits every TLV/TDR network message the server sends and parses — protocol-critical.* (conf medium)
- ƒ version clamp: if (a_iVersion==0 \|\| meta.curVer(+0xc) < a_iVersion) a_iVersion = meta.curVer; error if a_iVersion < meta.baseVer(+8) OR (meta.hasVerIndicator(+0x74)!=0 && a_iVersion < verIndicator.minVer(+0x58)) -> 0x82010401
- ƒ max nesting depth = 0x20 (32) layers; iStack_17cc>0x1f -> 0x82010404 'too complex, more than 32 layers'
- ƒ sizeinfo overflow check uses 64-bit limit table at DAT_11e11420(lo)/DAT_11e11424(hi) indexed by sizeinfoSize*8: if value exceeds limit -> 0x82010479
- ƒ refer/array count read from entry+0x58 (size 0/2/4/8) at host offset entry+0x5c; validated 0 <= refer <= arrayCount(entry+0x24) else 0x82010403
- ƒ BE swap 16-bit: (v<<8)\|(v>>8); 32-bit: ((v&0xff0000\|v>>0x10)>>8)\|((v<<0x10\|v&0xff00)<<8); 64-bit swaps both dwords and exchanges them
- ƒ version-indicator emit into net at (meta+0x70)+hostBase, width meta+0x74 (2->i16,4->i32,8->i64 sign-extended,else i8); host-buffer bounds checked -> 0x82010407
- ƒ net-buffer overrun -> 0x82010402; string/wstring length errors -> 0x82010406
- ƒ wstring byte length = FUN_100108a0(...)*2 + 2 (UTF16 + NUL); string length = strnlen+1

### Tdr::SprintfMetaToBuffer `@0x10009cc0` — tdr-serialization
*Renders a meta instance into an output text buffer (a_pstOut) instead of a file. Validates out/host buffers, clamps version, calls FUN_100086c0, and on success writes consumed length into out[1] = out.pszBuff_end - out.pszBuff.* (conf medium)
- ƒ on success: param_2[1] = iVar1 - *param_2  (bytes written to out buffer; iVar1 captured = *param_2 at entry)
- ƒ on any error: param_2[1] = 0
- ƒ version: if a_iCutOffVersion==0 -> meta.curVer(+0xc); if < baseVer(+8) return 0x82010401 (and out[1]=0)

### Tdr::UnpackArrayFieldNetToHost `@0x1000d800` — tdr-serialization
*Mirror of FUN_1000cfa0: unpacks one array-typed entry net->host. Reads per-element BE size prefixes for string(0x15)/wstring(0x16) arrays, validates min lengths and NUL termination, recurses for nested structs, and BE-decodes fixed 1/2/4/8-byte elements. Enforces the same 'net-buffer NOT enough' / 'string from net-buffer format error' / min_string_len=1 / min_wstring_len=2 rules as the scalar unpacker.* (conf medium)
- ƒ entry base = param*0xb4 + 0xb8 + meta (180-byte entry stride)
- ƒ string element: length>=1, last byte must be NUL else 'string from net-buffer format error'; needs end > start+sizeinfo
- ƒ wstring element: length>=2 ('min_wstring_len<2>'), last wchar must be 0 else format error
- ƒ fixed array BE-decode 1/2/4/8-byte inverse swaps; host/net buffer sufficiency checks -> host-buffer/net-buffer NOT enough errors
- ƒ sizeinfo prefix width from entry+0x50; custom size entry+0x20

### Tdr::UnpackNetToHost `@0x1000b780` — tdr-serialization
*CORE network->host unpacker (tdr_net2host), mirror of FUN_1000a1f0. Reads big-endian fields from the net buffer, validates version indicator against [base_ver, cur_ver] and the meta's versionindicator min_ver, converts to host byte order, applies default values for absent select/union branches, and validates string/wstring NUL-termination. Same 0x2f-int frame stack, same 32-layer depth cap.* (conf medium)
- ƒ version resolve: if (a_iVersion==0 \|\| meta.curVer(+0xc) < a_iVersion) a_iVersion=meta.curVer; error if a_iVersion < baseVer(+8) OR a_iVersion > curVer -> 0x82010468 'expect in [base_ver,cur_ver]'
- ƒ version-indicator read from net: width meta+0x74 (2/4/8/1) with BE decode; validated indicator in [base_ver,cur_ver] AND >= verIndicator.minVer(+0x58) else version error; if meta+0x74==0 use a_iVersion directly
- ƒ string min length = 1, wstring min length = 2 (must include NUL); last char must be NUL (0) else format-error
- ƒ 'has NO space for string/wstring null' when host buffer too small for terminator
- ƒ net-buffer sufficiency: end - start >= length + sizeinfo, else 0x82010402
- ƒ absent optional (refer==0) fills host with 0 across unit size (memset)
- ƒ max depth 32 layers -> 0x82010404; sizeinfo overflow via DAT_11e11420/24 table
- ƒ BE decode 16/32/64-bit inverse of the pack swaps

### Tdr::VisualizeMetaWithFormat `@0x10009f50` — tdr-serialization
*'Visual' variant: validates meta/format/visual/host, requires the format string to be at most 1 char (single separator), mallocs a private copy of the host buffer, strncpy's it (NUL-terminated), then calls FUN_10007870 to produce output; frees the copy. Stock TDR tdr_visualize-style API.* (conf medium)
- ƒ format-length check: walk *param_5 as C string; if (strlen) i.e. (end-(start+1)) > 1 return 0x82010468  (format must be a single-char separator or empty)
- ƒ version: if (a_ver==0 \|\| meta.curVer(+0xc) < a_ver) a_ver=meta.curVer; if a_ver < baseVer(+8) return 0x82010401 (visual[1]=0)
- ƒ buffer copy: pcVar3 = malloc(host.iBuff); strncpy(copy, host.pszBuff, host.iBuff-1); copy[host.iBuff-1]=0; if malloc fails return 0x82010409
- ƒ visual/host struct: [0]=pszBuff,[1]=iBuff (both nonzero required else 0x82010468)

### Tdr::XmlToHost_Buffer `@0x1006e120` — tdr-serialization
*TDR import (XML text buffer -> host struct). Builds an xml_parser_tree, finds root, then decodes into host via FUN_1006dff0 respecting cutoff version. Reverse of 0x1006a610.* (conf medium)
- ƒ cutoff default 0x7fffffff when 0; reject cutoff<baseVer -> -0x7dfefbff; no-root -> -0x7dfefbf5; param err -0x7dfefb98

### Tdr::XmlToHost_FileName `@0x1006e510` — tdr-serialization
*TDR import from a named file (parses via FUN_10070410). Same decode/version flow as 0x1006e120.* (conf medium)
- ƒ same error codes as sibling importers

### Tdr::XmlToHost_FilePtr `@0x1006e330` — tdr-serialization
*TDR import from a FILE* (parses xml tree via FUN_10070300). Same decode/version flow as 0x1006e120.* (conf medium)
- ƒ same error codes -0x7dfefbff / -0x7dfefbf5 / -0x7dfefb98

### Tdr::XmlToHost_IOWrap `@0x1006e6f0` — tdr-serialization
*TDR import via IOWrap descriptor: selects source (filename / FILE* / buffer), builds xml tree, decodes into host struct. Reverse counterpart of 0x1006aa90.* (conf medium)
- ƒ cutoff default 0x7fffffff; same error codes


## weapon  (16)

### CPlayer::ApplyWeaponClassReachAndCleanup `@10f16c10` — weapon-equip
*Weapon-swap/equip finalizer. Clears byte@(param_1+0x159d); resolves weapon manager (vtable+400), links two weapon-instance ids (local_c/local_10 from attach slots iVar2+4 / iVar2+8, cross-wiring via vtable +0x110/+0x10c). Then switch on weapon class param_1[0x56d] (1,3,4,5,9) sets two float weapon params via *param_1 vtable +0x584 and +0x588 from per-class getter pairs. Finally iterates attachment sub-objects clearing flags and detaches the weapon/arrow attachment set; calls FUN_10f7f340/FUN_10f96b10.* (conf medium)
- ƒ param_1[0x56d] = weapon class id (switch cases 1,3,4,5,9)
- ƒ case1: (*param_1+0x584)((float)FUN_11351190()); (*param_1+0x588)((float)FUN_11351470())
- ƒ case3: 0x584<-FUN_11351250(); 0x588<-FUN_11351530()
- ƒ case4: 0x584<-FUN_11350fd0(); 0x588<-FUN_113512b0()
- ƒ case5: 0x584<-FUN_113511d0(); 0x588<-FUN_113514b0()
- ƒ case9: 0x584<-FUN_11351210(); 0x588<-FUN_113514f0()
- ƒ buff link: iVar2 = FUN_11111ec0(param_1[0x56d] + 0x1e) (weapon-class -> table row lookup, +0x1e base offset)

### CPlayer::ToggleWeaponRageAttachments `@10f98e80` — weapon-rage-fx
*Shows or hides the rage/bow weapon attachment set. On entry (param_1!=0, and FUN_10fdbb90 true): re-shows the weapon_item_attachment slot (sub-object +0x44(1)). When param_2==10: hides the weapon and detaches weapon_item_attachment plus (if present) melee_arrow_item / melee_arrow_secrect / bow_rage01_A / bow_rage01_B, storing the base attachment id at param_1[0x8a3].* (conf medium)
- ƒ entry: (*param_1+0x790)() [get weapon]; if(FUN_10fdbb90()) show weapon_item_attachment (attach.vtable+0x44(1))
- ƒ param_2==10: hide weapon (FUN_10fdbbf0); param_1[0x8a3] = weapon_item_attachment id; detach each of {weapon_item_attachment, melee_arrow_item, melee_arrow_secrect, bow_rage01_A, bow_rage01_B} that exists

### CRangedWeapon::CacheFireStateSounds `@11099640` — weapon-animation-audio
*Looks up and (optionally, when param_2 flag set) preloads a fixed list of weapon-fire animation/sound states by name, reading each one's 'value' child. States: fire_cock, empty_clip, reload, reload_chamber_full, reload_chamber_empty, spin_up, spin_down, spin_down_tail, overheating, cooldown, null_fire (plus a leading DAT_11dd633c/DAT_11d0f42c pair). FUN_10ab4370 = load/register, FUN_10ab25f0 = find-by-name.* (conf medium)

### CWeaponChargeInfo::ParseChildStates `@10b717f0` — weapon-charge-buff
*Iterates XML child nodes of a weapon-charge definition. For each child by tag: 'WeaponChargeInfo' -> invoke child parser into list at this+4; 'StateQuitInfo' -> iterate its children reading 'stateName' attr (into a state-name collection); 'buffTrig' -> invoke child parser into list at this+0xc (buff-trigger list). Builds the mapping of weapon charge states to triggered buffs.* (conf medium)
- ƒ struct: this+4 = WeaponChargeInfo entry list head; this+0xc = buffTrig entry list head
- ƒ tag comparison via FUN_10f56fa0(intern)+FUN_10f57110 (interned-string equality)

### CWeaponChargeInfo::ReadFromXml `@10b72690` — weapon-charge-buff
*Parses a 'weaponInfo' XML node for a weapon charge level entry. Reads string attrs via atoi into a struct: weaponID, chargeLevel, buffID, skillID. Then iterates children expecting startInfo/loopInfo/endInfo sub-nodes (each dispatched to a sub-parser).* (conf high)
- ƒ this+4 = atoi(weaponID)
- ƒ this+8 = atoi(chargeLevel)
- ƒ this+0xc = atoi(buffID)
- ƒ this+0x10 = atoi(skillID)
- ƒ child tags: 'startInfo','loopInfo','endInfo' each allocate/parse a sub-struct (FUN_10c3d580 alloc size 0x10)

### CWeaponTalentModel::BuildProfoundSkillTipVO `@10911e00` — weapon-talent profound skill
*Builds one profound-skill tip VO from a talent record (param_2), reading fixed offsets, and resolves a TipsDesc string from a 2D tips table indexed by the skill index.* (conf high)
- ƒ SkillID=*(rec+4), WeaponType=*(rec+0x10), PlayerLevel=*(rec+0x14), HunterRank=*(rec+0x18), SkillIndex=*(rec+0x20), Card1ID=*(rec+0x24), Card2ID=*(rec+0x28), Card3ID=*(rec+0x2c), Status=*(rec+0x48).
- ƒ TipsDesc lookup: idx = *(rec+0xc); tbl = FUN_107d45b0(); valid if idx!=-1 && (idx!=0 \|\| *(tbl+0x30)==0) && *(tbl+0x28)!=0 && (idx -= *(tbl+0x30)) in [0, *(tbl+0x24)). Then row = *(*(tbl+0x20) + (idx / *(tbl+0x28))*4); cell = *(row + (idx % *(tbl+0x28))*4); if cell!=0 emit TipsDesc. (Standard MHO chunked-2D table: base+0x20 rows, +0x28 stride, +0x24 count, +0x30 offset.)

### CWeaponTalentModel::BuildTalentSkillVO `@10912030` — weapon-talent skill
*Builds one weapon-talent-skill VO from a talent-style record (param_2), reading fixed offsets and three name/tip strings.* (conf high)
- ƒ skillID=*(rec+4), weaponType=*(rec+8), playerLevel=*(rec+0x18), hunterStarLevel=*(rec+0x1c), SkillIndex=*(rec+0xc), cardID1=*(rec+0x20), cardID2=*(rec+0x24), cardID3=*(rec+0x28), skillStatus=*(rec+0x38), schoolsType=*(rec+0x10), masterValue=*(rec+0x14).
- ƒ Strings: skillName, iconPath, skillTips (from FUN_100e5aa0 string accessors).

### CWeaponTalentModel::GetWeaponTalentAndProfoundSkillData `@10911660` — weapon-talent tree / profound skills
*_GetWeaponTalentAndProfoundSkillData handler: builds the full weapon-talent tree VO (talentInfo) with style/common names, masterValue, an arrayProfound of profound-skill tips and arrayStyles containing per-style arrayWeaponTalentData. Reads static config via _DAT_00000000-based reflection lookups (STATIC_WEAPON_TALENT_PROFOUND / _DATA / _STYLE_DATA).* (conf medium)
- ƒ Requires ctx+0x58 and CPlayer (ctx+0xd0->+0x90 vtbl+0xb4) and its +0x14 vtbl+4 subsystem non-null.
- ƒ masterValue = FUN_112f0580() (player's accumulated talent 'master' points).
- ƒ CNewSkillInfo::BuildSkillDisplayList() computes uStack_110 (talentInfo string/id).
- ƒ arrayProfound: iterates STATIC_WEAPON_TALENT_PROFOUND records (iStack_7c..iStack_78, stride 0x4c) calling FUN_10911e00 per entry to build a profound-skill tip VO.
- ƒ arrayStyles -> STATIC_WEAPON_TALENT_DATA (piStack_68..piStack_64) and STATIC_WEAPON_TALENT_STYLE_DATA; per style iterates arrayWeaponTalentData (piVar6[-1]..*piVar6, stride 0x3c) calling FUN_10912030 per talent-skill entry.
- ƒ AS3 type discriminant (byte & 0x8f)==10 for string, ==6 for object throughout.

### CWeaponTalentModel::InitModel `@10911340` — weapon-talent tree
*InitModel handler: registers the weapon-talent RPC/callback surface and pushes currentWeaponType. Gated on DAT_1202e818+0x58 present.* (conf high)
- ƒ Registers (FUN_104d13b0): _SaveWeaponTalentData->FUN_10911480, _SaveProfoundSkillData->FUN_10911540, _GetWeaponTalentAndProfoundSkillData->FUN_10911660, _UnlockTalent->FUN_10911d00, _RequestServerTalentInfo->LAB_10912960, _isInBattleGroundAs3->FUN_10912a00.
- ƒ currentWeaponType: piVar5 = CPlayer (ctx+0xd0->+0x90 vtbl+0xb4); uVar2 = CPlayer vtbl+0x444 (current weapon item id); iVar3 = FUN_10254130(uVar2) (item record); weaponType = *(iVar3+0x3c). Default uVar4=7 if no record.

### CWeaponTalentModel::RegisterInitHandlers `@10911230` — weapon-talent UI init
*Registers three AS3 model-init native callbacks: InitModel->FUN_10911340, InitWeaponTalentTips->FUN_10912240, InitWeaponTalentProfoundSkillTips->FUN_109122a0. Pure binding/plumbing.* (conf high)

### CWeaponTalentProfoundTipsModel::RegisterHandlers `@109122a0` — weapon-talent profound tips UI
*Registers AS3 handler _WeaponTalentProfoundTipsGetInfo->FUN_10912490. Gated on ctx+0x58.* (conf high)

### CWeaponTalentTipsModel::BuildTalentCardTipVO `@109125d0` — weapon-talent tips / hunter cards
*Builds a talent-tip VO (m_str*) comparing the talent's required player level / hunter rank / card levels against the player's current values, and marks which of the 3 hunter-cards the player already owns.* (conf high)
- ƒ current values: m_nCurrentPlayerLevel = CPlayer::GetHuntRankOrCount(); m_nCurrentHunterRank = CPlayer subsystem (*(cp+0x2d10) vtbl+0x18); both only when *(cp+0x2d10)!=0.
- ƒ card ownership: bVar5/6/7 = (IsCardIdCollected(*(param_1+0x14 / +0x1c / +0x24)) == 2). Result==2 means fully collected. Emitted as m_bHasCard1/2/3.
- ƒ required fields: m_nPlayerLevel=*(param_1+0xc), m_nHunterRank=*(param_1+0x10), m_nCard1Lv=*(param_1+0x18), m_nCard2Lv=*(param_1+0x20), m_nCard3Lv=*(param_1+0x28).
- ƒ m_strSkillTips: same chunked-2D tips lookup as FUN_10911e00 using idx=*(param_1+0x2c), tbl=FUN_107d45b0().
- ƒ card names: FUN_11a88b20(cardId,0) -> non-null enables m_strCard1/2/3Name.

### CWeaponTalentTipsModel::RegisterHandlers `@10912240` — weapon-talent tips UI
*Registers AS3 handler _WeaponTalentTipsGetInfo->FUN_10912300. Gated on ctx+0x58.* (conf high)

### MHUI::BuildRandomWeaponSkillVO `@10865c50` — weapon/random-recast
*Scaleform VO builder for a random/recast weapon's skill info panel. Parses a large GFx arg struct (fields at word indices 1,7-8,0xd-0xe,0x13-0x14,0x19-0x1a,0x1f-0x20,0x25-0x26,0x31-0x32,0x36-0x3a,0x3d). Resolves weapon item via FUN_107cb630/FUN_10858a70/FUN_10858670 depending on flags. Emits: canUnbind, isRandomWeapon, isRecast, rareScore, m_strComments, m_nRareType, m_nWeaponCurrentSlash, plus randomWeaponSkillName/Desc arrays.* (conf medium)
- ƒ canUnbind initially 1 when item[8]!=0 AND *(FUN_11669250()+0x108)!=0 AND *(+0x10c)>0; then forced 0 if isRandomWeapon(FUN_1166e250) AND (recastCount FUN_1166dc70 > 0 OR uStack_100._1_1_ flag)
- ƒ isRandomWeapon = FUN_1166e250() != 0
- ƒ isRecast = FUN_1166dc70() (recast count) > 0
- ƒ rareScore = FUN_1166dbb0()
- ƒ m_nRareType = weapon vtbl+0x2c
- ƒ m_nWeaponCurrentSlash = FUN_1166dff0()
- ƒ skill list iterates ppiStack_f8..piStack_f4 (stride 4 pointers); per entry reads *(entryPtr+0x18)

### MHUI::BuildWeaponSlashGaugeVO `@10864360` — weapon/gauge
*Scaleform VO builder returning current weapon 'slash'/charge-gauge values. Gated arg count==1. Reads a 3-int + 1-byte struct via FUN_107ccc30 x3 + FUN_107cccb0 (local_2c[0]=weapon type, local_2d=local/valid flag). Requires local player character. Only for weapon type 3 or 8 (m_bIsLocal true): emits m_nWeaponCurrentSlash = FUN_113509f0(2) and m_nWeaponCurrentSlashBuffer = FUN_113509f0(4). Sets out-VO ready flag byte at in_stack_00000018[2].* (conf medium)
- ƒ gate: argCount==1 AND weaponType(local_2c[0]) in {3,8} AND local_2d(isLocal)!=0
- ƒ m_nWeaponCurrentSlash = FUN_113509f0(2)
- ƒ m_nWeaponCurrentSlashBuffer = FUN_113509f0(4)
- ƒ out flag: in_stack_00000018[1]=2, byte[+8]=1 on success

### MHUI::BuildWeaponStyleDataVO `@1087b3e0` — weapon/style
*'GetWeaponStyleData' callback: emits the current weaponStyle for a weapon type. Requires local player character; reads style via character vtbl (char+0x2af4)->0x10 (uStack_90 = weapon type/id). Single field VO: weaponStyle.* (conf medium)
- ƒ weaponStyle = (*(char+0x2af4))->vtbl[0x10](weaponTypeArg)


## monster  (12)

### CBTNode_AddBuff::LoadConfig `@0x10ab9690` — monster-ai-buff
*XML config loader for a buff-related BT node (node name at DAT_11cc19cc). Reads Weight (float @ param_1+4), "BuffID" (@ param_1+0x18), "Enable" (bool @ param_1+0x1c). Returns true if Weight>=0.* (conf medium)
- ƒ node-name compare against DAT_11cc19cc; on match:
- ƒ Weight = float(attr 0x11dbb648) @ param_1+4
- ƒ BuffID (int attr "BuffID") @ param_1+0x18
- ƒ Enable (bool attr "Enable") @ param_1+0x1c
- ƒ valid if (*pfWeight >= 0.0)

### CBTNode_MHBuffArea::Enter `@0x10a9ff40` — monster-ai-buff
*Behavior-tree action node: finds the entity's "MHBuffArea" game-object extension and activates a buff area, passing a buff id read from the node's parameter array (param_1+0x2c). Returns 2 (success/running) if the extension exists, else 1.* (conf medium)
- ƒ ext = entityScriptTable(+0x144)(entityId)->QueryExtension("MHBuffArea")
- ƒ params vec at param_1+0x2c: require count>1 ((p[1]-p[0]>>2)>1) and second-vec size>4; buffId source = *(p[3]+4) if >=0 -> FUN_10493d50(buffId,&local_8)
- ƒ ext->vtbl+0x74 (StartBuffArea)(buffId(local_8), enableFlag(local_c=1))
- ƒ return 2 on success else 1

### CBTNode_MHBuffArea::Exit `@0x10aa0190` — monster-ai-buff
*Behavior-tree node exit counterpart to 0x10a9ff40: queries the "MHBuffArea" extension and stops/deactivates the buff area (vtbl+0x84). Returns 2 on success else 1.* (conf medium)
- ƒ local_8 = FUN_10496940(0,&local_8) (read stored buff-area handle)
- ƒ ext = QueryExtension("MHBuffArea"); ext->vtbl+0x84 (StopBuffArea)(handle)

### CBTNode_TemptGasBuffCheck::CacheBlackboardKeys `@0x10a958d0` — monster-ai-buff
*Behavior-tree node init: resolves the target entity and caches two blackboard-key handles "CurState" (-> param_1[10]) and "TemptGasBuffCheck" (-> param_1[0xb]). Used by monster AI to branch on the tempt-gas (bait/lure) buff state.* (conf medium)
- ƒ entity = ctx(0x50 vtbl+0x2c)(param_1[2]); param_1[9] = FUN_104789d0(entity vtbl+0x48)
- ƒ if param_1[9]!=0: param_1[10] = blackboard-key("CurState"); param_1[0xb] = blackboard-key("TemptGasBuffCheck")
- ƒ blackboard-key id = FUN_1046dc60(FUN_113168d0(name))

### CBehaviorTreeProfiler::DumpNodeRuntimeStats `@0x104bc010` — monster-ai
*Iterates a behavior-tree node stats map (in-order tree walk) and emits per-node runtime profiling records (NodePathRT, TimeStamp, NodeName, NodeId, TotalMiliSec, AccountTime, SuccessTime, FailureTime, Average, Percent) into an output object.* (conf medium)
- ƒ Node record offsets (from iVar6 node): NodePathRT(string, lowercased) built from +0x20/+0x24; TimeStamp @+0x3c; NodeName resolved via FUN_11317f30; NodeId @+0x4c; TotalMiliSec @+0x44; AccountTime @+0x50; SuccessTime @+0x54; FailureTime @+0x58; Average(float) @+0x5c; Percent(float) @+0x60
- ƒ Path chars uppercase->lowercase normalization: if '@'<c<'[' then c+=0x20.
- ƒ Tree walk over red-black tree nodes rooted at param_1+0x28 (successor iteration).

### CBuffAreaPorcess::RegisterNodeParams `@0x10aa0000` — monster-ai-buff
*Registers the behavior-tree node type "CBuffAreaPorcess" and its parameter schema: param slot 0 (attribute, type 3) and "BuffIDBBName" as blackboard-input (type 1, index 1). Node-definition boilerplate (FUN_1048b080 param registration).* (conf medium)
- ƒ FUN_1048b080(node="CBuffAreaPorcess", key=DAT_11cc0668, slot=0, type=3, isBB=0)
- ƒ FUN_1048b080(node="CBuffAreaPorcess", key="BuffIDBBName", slot=1, type=1, isBB=1)

### CMonsterAI::LoadSkillSetting `@10db5920` — monster-skill
*Loads a monster/entity AI 'Skill' setting: tries direct 'Skill' property (FUN_10a68a90); if absent, resolves record 'PropertyCustom'+'.AISetting.Skill' path and reads it; on success calls FUN_110779b0(skillCfg,0) to apply. Manages temp-string refcounts.* (conf medium)
- ƒ property lookup key 'Skill' or resolved '<record>.AISetting.Skill' via CInfoRecord::GetModelString('PropertyCustom','.AISetting.Skill')
- ƒ apply: FUN_110779b0(skillHandle, 0)

### CMonsterEntity::CreateAndBindRenderProxy `@10be99f0` — monster-spawn
*Large monster/NPC spawn+bind routine. Reads 'EmCommon' record fields nMonsterDifficulty, nMonsterSizeScale, NPCSkillFile, NpcAnimationName1..8, DeadPose, CanLemon; sets up BT control object ('BTCtrlObject'), sculpture/mesh, size scaling, and writes script table attrs LastState/State on 'OnConnect'. Emits 'Spawned' events to two logic-entity slots (this[0x10]+0x125c, +0x1260).* (conf low)
- ƒ size scale: local_8 = (float)FUN_10bec810() / DAT_11de9a30
- ƒ this[0x10]+0x49a/0x49b read into local_10c/local_108 (id pair)
- ƒ this[0x10]+0x102d != 0 -> sets flag bit \|4
- ƒ iterates monster part/limb array with stride 0x18 (count = (end-begin)/0x18), up to 8 entries at +0x14,+0x2c,+0x44,+0x5c,+0x74,+0x8c,+0xa4,+0xbc
- ƒ spawn events written to this[0x10]+0x125c and +0x1260

### CMonsterEntity::LoadAISettingsFromBlackboard `@0x104a2af0` — monster-ai
*Real logic (not a serializer): loads a monster's AISetting overrides from its BlackBoardFile property node and pushes Health, RageDec, TailFire values into the entity's blackboard/behavior-tree variables. Reads Properties.<...>.AISetting[.PropertyCustom] node.* (conf medium)
- ƒ Guard: if param_1[0x4d]!=0 OR param_1[5]==0 OR blackboard-holder null -> skip. param_1[0x3f] = result of vtbl+0x24 call (node id).
- ƒ Reads sub-node path 'Properties.' then optional 'PropertyCustom' + '.AISetting.' / '.AISetting'.
- ƒ Health: node->GetFloat('Health', out); if found AND out>0.0 -> format float (fmt &DAT_11da0cf4) and set BB var 'Health' via FUN_113168d0/FUN_1046d130.
- ƒ RageDec (via DAT_11dbc56c string) and 'RageDec': if found AND >0.0 -> set BB var.
- ƒ TailFire: GetString via vtbl+0x3c; if found and differs from empty -> set BB var 'TailFire' (string).
- ƒ Uses FUN_104a1b30 to stringify float with a printf-style format DAT.

### CMonsterPartInfo::ParseConfig `@0x1168b9e0` — monster/skills
*Config loader for a monster body-part record (part-break / stagger / elemental-buildup definition). Reads PartID (looks up/creates part record iVar2 via FUN_11680c60), PartName, then per-element resistance/accumulation values, Scar, and a 5-row table of per-attack-type loot/damage columns.* (conf medium)
- ƒ iVar2+0x14 = Unbalance (float, KO/stagger buildup), iVar2+0x18 = UnbalanceMulti (float, default DAT_11de9978)
- ƒ iVar2+0x1c = Fall (float, topple/mount buildup), iVar2+0x20 = FallMulti (float)
- ƒ iVar2+0x24 = WaterAcc (uint), iVar2+0x28 = WaterAccMulti (float)
- ƒ iVar2+0x2c = FireAcc (uint), iVar2+0x30 = FireAccMulti (float)
- ƒ iVar2+0x34 = ElectricAcc (uint), iVar2+0x38 = ElectricAccMulti (float)
- ƒ iVar2+0x3c = DragonAcc (uint), iVar2+0x40 = DragonAccMulti (float)
- ƒ iVar2+0x44 = IceAcc (uint), iVar2+0x48 = IceAccMulti (float)
- ƒ iVar2+0x4c = Scar (float, wound buildup)
- ƒ Column loop: 5 iterations (index 0..4, iVar3 step 0x10 until <0x50). Per row it reads string arrays LootSkillLv%d, DmgVal%d, Cut%d, Hammer%d, Shoot%d, Fire%d, Water%d, Electric%d, Dragon%d, Ice%d, ProcessLv%d (each %d = 1..5).
- ƒ Row records: one at iVar2+0x58 stride 0xd*4=0x34 (52 bytes) carrying {back-ptr=iVar2, index}; one at iVar2+0x198 stride 4 (float LootSkillLv). Bitmasks built: field local_558 bit0=Cut present, bit1=Hammer; field uVar9 bits0..4 = Shoot/Fire/Water/Electric/Dragon (per-column present flags).
- ƒ iVar2+4 set to 1 (record-loaded flag) at end.

### CMonsterSpawnInfo::ParseConfig `@0x11958c30` — monster/buffs
*Config loader for a monster spawn record: id, MonsterID, MonsterGroupID, SpawnAmount, RegionId, Delay, RespawnAmount, RespawnDelay, Scale (float), BuffID.* (conf medium)
- ƒ param_1+0x10 = id (first field, DAT_11d38d6c key); +0x14 = MonsterID; +0x18 = MonsterGroupID; +0x1c = SpawnAmount; +0x20 = RegionId; +0x24 = Delay; +0x28 = RespawnAmount; +0x2c = RespawnDelay; +0x30 = Scale (float); +0x34 = BuffID.
- $ SpawnAmount / RespawnAmount = spawn counts; Delay / RespawnDelay = spawn timers.

### InitCombatBehaviorTreeSystem `@0x10aaa460` — monster-ai-buff
*Initializes the combat behavior-tree subsystem: lazily creates BT manager singletons, calls RegisterCombatBehaviorTreeNodes(), then reads cvars g_BT_LoadAtStartup / g_BT_BuffLoad / g_BT_OptimizeMode to optionally preload BT assets and buff BTs.* (conf medium)
- ƒ if cvar g_BT_LoadAtStartup != 0 -> FUN_10aac650() (preload trees)
- ƒ if g_BT_BuffLoad != 0 && g_BT_OptimizeMode != 0 && !dedicated(DAT_1202e818+0x209) -> FUN_10aaa7d0() (preload/optimize buff BTs)


## equip  (10)

### CCharmPanel::BuildRandPassiveSkillVO `@0x1085ab40` — equip-skill-ui
*Builds the charm / random-passive-skill VO (param_5==9 required). Resolves the equip/charm object (branches: hidden-skill path FUN_113f9bb0, normal FUN_10858a70, or FUN_10858670), validates via FUN_116698a0/FUN_1166e120, then emits title, charmFoundTimes, and an 'arrayRandPassiveSkillDesc' array. Each rolled passive can be hidden (bIsHidden, with nVisibleMoney unlock cost) and carries an 'activateInfoList' of ACTIVATE_VO entries (nType per activation, expanded via CEquipRandPassiveSkillActivateSetInfo).* (conf medium)
- ƒ gate: param_5==9; requires equip obj (DAT_1202e818->0xd0->0x90 vtbl+0xb4) with *(obj+0x2d1c)!=0
- ƒ charmFoundTimes = piVar5[0x7b]
- ƒ passive-desc loop count = (uStack_f4 - piStack_f8)/0x1c (stride 0x1c per input desc); entry fields: iStack_9c(=bIsHidden flag, ==1), skill group @+8/+0xc
- ƒ bIsHidden = (entry[0]==1); if hidden: nVisibleMoney = CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance(skill via vtbl[0x2c]/vtbl[0x18])
- ƒ hidden-name string id: 0x13a5 + (skillIdx<0) ; charm title string id 0x13a4
- ƒ activateInfoList: iterate FUN_10856700(uStack_a4)->+0x2c list [4]..[5] stride 4; per activate nType = vtbl[0x10](); value via FUN_1085a0c0
- $ nVisibleMoney = money required to reveal a hidden random-passive skill (server-authoritative unlock cost)
- $ string ids 0x13a4 (title) / 0x13a5 (hidden name)

### CEquipExcellentRankInfo::ParseConfig `@0x119e40d0` — equip/buffs
*Config loader for an equipment 'Excellent' (appraisal) rank record. Reads Rank, Excellent_Point, Excellent_Judegement_Rank, Excellent_Rank_Name, then up to 10 Buff_N strings each parsed 'buffId;degree' and pushed into a buff vector.* (conf medium)
- ƒ param_1+0x10 = Rank; +0x18 = Excellent_Point; +0x1c = Excellent_Judegement_Rank; +0x20 = Excellent_Rank_Name (string).
- ƒ Buff_1..Buff_10: each read as string then sscanf_s(str, "%d;%d", &buffId, &degree). If parsed==2 and (buffId!=0 \|\| degree!=0): push {buffId, degree} (8-byte pair) into vector at param_1+0x3c (advance +8). Grow via FUN_119e5100.
- ƒ Format string '%d;%d' = buffId;degree.
- $ Excellent_Point = appraisal points threshold; degree = per-buff magnitude.

### CEquipSkillPanel::BuildAllEquipSkillDetailVO `@0x1082f3d0` — equip-skill-ui
*AS provider '_getAllEquipSkillDetailInfo'. For a requested skill group it builds EQUIPSKILL_DETAILCELL entries (totalPoint, needPoint, skillName, skillEffect, groupID, bCanBeLighten) across all tiers, aggregated into 'allSkillDetailList'.* (conf medium)
- ƒ reads AS args param_4 (group) and param_4+6 (second arg); iterates skill collection (vtbl+0x28 count, vtbl+0x30 element)
- ƒ per element resolves record via FUN_1050ebc0; walks tier list (piStack_cc..piStack_c8 stride 0x14) emitting DETAILCELL with totalPoint/needPoint/skillName/skillEffect/groupID; bCanBeLighten=FUN_11463b10() when skillMgr+0xb48!=0

### CEquipSkillPanel::BuildEquipSkillCellDescVO `@0x1082ffc0` — equip-skill-ui
*AS provider '_getEquipSkillCellDescData'. Walks two node lists on the player equip-skill mgr (playerObj+0x2d20: list A at [0x19]..[0x1a] stride 5, list B at [0x1f]..[0x20] stride 5) and builds EQUIPSKILL_CELL_DESC entries into 'allSkillDetailList' with totalPoint(0), needPoint, skillName, skillEffect, skillType, bCanBeLighten, and for list B also skillGroupName (FUN_1050ebc0) and suitName (FUN_1082e210).* (conf medium)
- ƒ list A: piVar5 = mgr[0x19]; while(piVar5 != mgr[0x1a]) { rec=piVar5[1]; needPoint=*(rec+0x24), skillName=*(rec+0x18), skillType=piVar5[4]; piVar5+=5 }
- ƒ list B: piVar5 = mgr[0x1f]..mgr[0x20] stride 5; adds skillGroupName=FUN_1050ebc0(*piVar5)+0x2c, suitName=FUN_1082e210(piVar5[3])+0x14
- ƒ bCanBeLighten = FUN_11463b10(rec) when *(mgr+0x2d20)!=0 else 0

### CEquipSkillPanel::BuildEquipSkillDetailInfoVO `@0x1082fa70` — equip-skill-ui
*AS provider '_getEquipSkillDetailInfo'. Builds EQUIPSKILL_DETAIL for one skill group (looked up by AS-provided groupID param_4+0x1c/0x20): iterates CEquipPassiveSkillGroupInfo records (FUN_1082e0d0 count, FUN_1082e040 element) whose group matches, emits a 'dataArr' of DETAILCELL {needPoint, skillName, skillEffect, explain} plus 'equipSkillDetailInfo'.* (conf medium)
- ƒ target groupId from AS arg *(param_4+0x20) when tag ok else 0xdeadbeaf
- ƒ match: FUN_1082e040(iVar8) record, keep if *(rec+0x10)==requested group ptr; skillName from *(rec+0x24/0x28); tier list rec+0x30 walked stride 0x14
- ƒ outputs: dataArr[] (per-tier needPoint/skillName/skillEffect) and equipSkillDetailInfo object

### CEquipSkillPanel::BuildEquipSkillListVO `@0x1082e540` — equip-skill-ui
*AS provider '_getEquipSkillListData'. Iterates the player's active equipment-skill map (player obj +0x2d20, red-black-tree walk of node set +0x34..+0x3c) and for each active skill builds an EQUIPSKILL_CELLVO with typeName and param1..param9 (+Extra) value/threshold pairs, plus a suit-bonus (param9) contribution from CSuitCfgInfo::GetSuitBySlot(9), a skillExplain string chosen by threshold comparison, and a bCanBeLighten flag.* (conf medium)
- ƒ skill nodes: RB-tree over *(playerObj+0x2d20)+0x34..+0x3c; per-node skill id = node[4]
- ƒ params emitted via FUN_108304f0(bandIndex,...) for indices {0,1,3,2,4,5} -> param1..param6 (+Extra), FUN_10830580 -> param7, FUN_108304f0(9) -> param8; param8 may be overridden by suit-bonus loop (CSuitCfgInfo::GetSuitBySlot(9); suit table stride 0x1c, match FUN_11465310)
- ƒ param9 via FUN_108306b0; 'total'/'toralExtra' = accumulated point/threshold
- ƒ skillExplain selection: compares accumulated (puStack_16c+pppuStack_170) against per-band threshold iStack_7c to pick the active description tier; bCanBeLighten = FUN_11463b10() when playerObj+0xb48 != 0

### CEquipSkillPanel::BuildOtherEquipSkillListVO `@0x1082f040` — equip-skill-ui
*AS provider '_getOtherEquipSkillListData'. Iterates the equipment-skill definition list (player skill-mgr vtbl+0x56c, count at +0x17b4, entries at base+0x5ee stride 1 with paired index +0x80) and builds EQUIPSKILL_CELL_DESC objects: needPoint, skillName, skillEffect, bCanBeLighten (=piVar1[0x100]>0), skillType=0.* (conf medium)
- ƒ count = *(mgr+0x17b4); entry loop over piVar1=base+0x5ee, piVar1++ per iteration; skill record via FUN_11522920(*piVar1, piVar1[0x80])
- ƒ bCanBeLighten = (piVar1[0x100] > 0); skillType constant 0
- ƒ output array 'otherEquipSkillArr'

### CEquipSkillPanel::RegisterASCallbacks `@0x1082e430` — equip-skill-ui
*On panel-open (in_stack_00000014==1) registers equip-skill AS data providers: _getEquipSkillListData->FUN_1082e540, _getEquipSkillDetailInfo->FUN_1082fa70, _getAllEquipSkillDetailInfo->FUN_1082f3d0, _getOtherEquipSkillListData->FUN_1082f040, _getEquipSkillCellDescData->FUN_1082ffc0.* (conf high)
- ƒ gate: in_stack_00000014 == 1

### CEquipTalentPanel::BuildAttackAndPassiveSkillVO `@0x1081adf0` — equip-skill-ui
*Builds the attack/defense/element + passive-skill data object for an equip talent/detail view. param_5 selects sub-struct offset (param_2+0x30 vs +0x48). Resolves equip record via FUN_1052bdd0; emits base attack/element/defend/health values and iterates the record's passive-skill list writing group id / value / name.* (conf medium)
- ƒ sub-struct offset: param_5=='\0' -> param_2+0x48 else param_2+0x30
- ƒ value_i = floor((float)(*(rec+Foff) * SCALE) + DAT_11de9968) + *(rec+Boff)  [SCALE rendered as 0.0 by decompiler => term collapses to floor(DAT_11de9968); DAT_11de9968 is a shared double bias/multiplier constant]
- ƒ offsets: attackWater float@0x1a4 base@0x190; attackFire f@0x1a8 b@0x194; attackThunder f@0x1ac b@0x198; attackDragon f@0x1b0 b@0x19c; attackIce f@0x1b4 b@0x1a0; attackDefend f@0x154 b@0x150; attack f@0x14c b@0x148; currentSlashValue=*(rec+0x160)
- ƒ passive-skill list: iterate ptr *(rec+0x21c)..*(rec+0x220) stride 8: entry[0]=passiveSkillGroupID, entry[1]=passiveSkillValue; count capped by AS-provided passiveSkillLength (uStack_d8); passiveSkillName via FUN_1050ebc0(groupID) lookup
- ƒ arrayPassiveSkillData filled via AS array accessor vtbl[0x30](index)

### CEquipTooltip::AggregateEquipStatsVO `@0x107cc1d0` — equip-stats
*Aggregates all displayed stats for an equipment item (weapon/armor) and pushes them to the tooltip/detail VO. param_8 selects source type (0x5e pet-weapon, 0x32 weapon-with-sharpness, 0xe, 0x3f, else). Sums a stride-0x48 (18-int) stat block from up to 4 contributors (base + two upgrade/enchant sources + optional gem local_5c) and caps slot count.* (conf high)
- ƒ stat block stride check: ((local_70-local_74) & 0xfffffffc) == 0x48 (18 ints)
- ƒ 18-int stat layout (local_74[i]): [0]attackValue, [1]defendValue, [2]healthValue, [3]knowingLevel, [4]attackWater, [5]attackFire, [6]attackThunder, [7]attackDragon, [8]attackIce, [9]poison, [10]sleep, [0xb]hocus(=DynamiteValue group), [0xc]resWater, [0xd]resFire, [0xe]resThunder, [0xf]resDragon, [0x10]resIce, [0x11]DynamiteValue
- ƒ contributors summed: FUN_11405420/11406f90 (base) + FUN_114074a0(iVar6,1,param_6) + FUN_114073f0(param_7) [normal path]; or FUN_11405c10/114074f0/11407430 [param_10 preview path]; plus FUN_107cb1d0 when local_5c(gem)!=0
- ƒ maxSlotCounts local_60 = *(iVar6+300 / 0x12c); initSlotCounts local_54 = min(computed, maxSlotCounts)
- ƒ param_8==0xe: local_54 += *(FUN_117b5220(*(iVar6+0x114),param_6)+0xd4) when param_9==0
- ƒ param_8==0x3f: local_54 += *(CEquipLevelUpInfo::LookupMap0x108ByKey(*(iVar6+0x11c),param_7)+0xe8) when param_9==0
- ƒ param_8==0x32 (weapon): slotCount=*(iVar6+0x124), weaponCurrentSlash=*(iVar6+0x160); weaponSlash_Red..Gold = FUN_116c4ea0(0..9) (10 sharpness bands)
- ƒ weaponCurrentSlashDIF = FUN_113509f0(2) - prevSlash when equipped weapon (vtbl+0xb4) && param_9!=0 && (param_3==3\|\|8); weaponCurrentSlashBuffer=FUN_113509f0(4)
- ƒ param_8==0x5e path: iVar6 = FUN_1052bdd0(*(FUN_11669250()+0x10)) when pet equipped


## rage  (9)

### CLogicPlayer::IsRagePowerEnough `@1139a9f0` — rage
*Checks whether the player has a rage weapon equipped and enough rage power to cast the given skill (param_1). Delegates the actual check to FUN_1139f0f0(skillId); if nonzero (ok) proceeds via FUN_115bcbf0(param_2); otherwise logs 'CLogicPlayer::IsRagePowerEnough skill[%d] rage not equip or rageinfo not exist' and reports via FUN_1139c980.* (conf medium)
- ƒ ok = FUN_1139f0f0(skillId) != 0 -> FUN_115bcbf0(param_2); else formatted-error path

### CMonsterCombat::UpdateDragonheatFlameTransform `@10b92350` — rage-combat-fx
*For a monster in combat state 'COMBAT_DragonheatFront' or 'COMBAT_Rage02_FlamerFire', computes distance to a target bone/effector and copies the monster's position+orientation (this+0x98..0xa4) into the flame-attack target object (obj+0x218..0x224), then re-attaches the effect via FUN_10eff090. Squared-distance gate then rsqrtss.* (conf medium)
- ƒ dx=this+0x88 - tgt.x; dy=this+0x8c - tgt.y; dz=this+0x90 - tgt.z; d2=dx*dx+dy*dy+dz*dz
- ƒ if (DAT_11cbf070 < d2) rsqrtss(d2) -> inverse length (threshold DAT_11cbf070)
- ƒ FUN_10eff090(1, this+0x88, 0x3f19999a=0.6f, 1) — 0.6f blend/scale param
- ƒ copies this+0x98/0x9c/0xa0/0xa4 -> flameObj+0x218/0x21c/0x220/0x224

### CPlayer::SetupRagePassiveEnergyFx `@10f98c50` — rage-passive-fx
*Initializes 3 rage-passive-ability slots (loop i=0..2) from an id array param_2. For each slot (struct base param_1+0x1e8, stride 4 dwords = 0x10 bytes): stores the ability id at [+0x18/word6]; resolves the ability object; if its state (vtable+0xa8)==0, verifies particle asset "Energy_Ability_PC.PRJ.RagePassPRJ" exists, spawns it and stores the effect handle at slot[0], and sets slot[+0xc]=0x3f800000 (1.0f intensity/scale).* (conf medium)
- ƒ loop 3 iterations (3 rage-passive slots); slot stride = 4 dwords (0x10 bytes) starting param_1+0x1e8
- ƒ slot[6] = param_2[i] (ability id)
- ƒ gate: abilityObj = buffMgr(+0x7c)(id); if(abilityObj && abilityObj.vtable+0xa8()==0)
- ƒ if particle 'Energy_Ability_PC.PRJ.RagePassPRJ' exists: slot[0] = spawned effect; slot[3] = 0x3f800000 (=1.0f)

### CRageInfo::GetByIndex `@0x11660630` — rage/bushido
*Flat-vector accessor returning CRageInfo* at ordinal index.* (conf high)
- ƒ if 0<=idx<((mgr[0x18]-mgr[0x14])>>2): return *(mgr[0x14]+idx*4)

### CRageSkill::LoadEditorRageData `@10bf31b0` — rage
*If this+0x50 set and rage manager (FUN_10f19240) present, loads '/Libs/MHUI/XML/editorRageData.xml', iterates entries, matches DAT_11dca14c attr == param_2, then reads DAT_11cd68d8 attr and 'skillid' attr and registers them via (rageMgr+0x14)->fn(matchKey, val, skillid).* (conf medium)
- ƒ guard: this+0x50 != 0 && FUN_10f19240() != 0
- ƒ per-entry: read attr[DAT_11dca14c] into local_8; if local_8==param_2 read attr[DAT_11cd68d8] and 'skillid'; register (key=local_8, val, skillid)

### CRageSkillSystem::ctor `@0x115bc720` — rage/bushido
*Constructs the rage/bushido skill system for an owner. Looks up CRageInfo by id (param_3) into this+4. Reads several rage-config float thresholds (FUN_117193e0/f0/a0/c0/470) and, when a threshold > 0 (DAT_11de98f8==0.0f baseline), registers callbacks/events: 0xc25, 0x42b, a 1000ms periodic rage tick timer (this+0xe) invoking FUN_115bceb0 (id "CRageSkillSystem::CRageSkillSystem"), and 0x42a. Requires (owner vtbl+0x4fc)!=0 to enable.* (conf medium)
- ƒ this[4] = CRageInfo(param_3); this[3]=FUN_11719490(); this[0xb]=owner vtbl+0x17c
- ƒ threshold compare: cfgFloat > DAT_11de98f8 (0.0f)
- ƒ periodic rage timer: FUN_100ea610(name, 1000ms, 0, this, FUN_115bceb0, 0) requires this[0xb]!=0
- ƒ event ids 0xc25 (FUN_115bcc40), 0x42b (FUN_115bccc0), 0x42a (FUN_115bcd60)

### CSkillSystem::_CheckRage `@0x11635240` — rage/casting
*Validates rage cost before casting skill (this+0x14 = skillId). If skill is an angry/rage skill (FUN_117194d0==1): reads its rage cost (FUN_11719420); if cost==0 logs 'angryskill but no ragecost' error; else checks CLogicPlayer::IsRagePowerEnough(owner, cost) — if insufficient sets *param_3=2 and logs 'rage not enough'; if enough consumes/validates via FUN_11348ac0(...,1) expecting result 1.* (conf high)
- ƒ isRageSkill = FUN_117194d0(skillId)==1; rageCost = FUN_11719420(skillId)
- ƒ gate: CLogicPlayer::IsRagePowerEnough(owner, rageCost)==1
- ƒ failure: *param_3 = 2 (error code); logs skill id
- $ rage cost per skill = FUN_11719420(skillId); error 2 = rage not enough

### TlvRageValue::PackToBuffer `@0x1040e420` — rage-bushido
*TDR pack of a rage-slot value {fRageValue, iRageSlot}.* (conf high)
- ƒ fRageValue (float, '%f') @0x0; iRageSlot @0x4. Returns -0x13 if buffer NULL.

### TlvRageValue::PrintText `@0x1040e4d0` — rage-bushido
*TDR text dump of {fRageValue, iRageSlot}.* (conf high)
- ƒ fRageValue (float) @0x0; iRageSlot @0x4


## quest  (8)

### AbnormalStatusObjective::Read `@11a27780` — quest-activity-objectives
*Config deserializer for an objective requiring a monster to be inflicted with a given abnormal status. groupId -> owner+0x10; 12 ints packed into 0x30-byte record appended to vector at owner+0x18 (grow-insert via FUN_11a282e0).* (conf high)
- ƒ record element size = 0x30 bytes (12 int32)
- ƒ groupId -> *(owner+0x10)

### BreakPartCountObjective::Read `@11a2a160` — quest-activity-objectives
*Config deserializer for a part-break-count objective (break a named part N times, with a wrong-hit check). Like BreakPartObjective but uses targetPartCount instead of break-level and adds wrongHitCheck flag. Two string part-name fields read via ReadString. Appends a 0x70-byte record (embedded strings) to vector at owner+0x18 via FUN_11a29dd0/FUN_11a2b1c0.* (conf high)
- ƒ record element size = 0x70 bytes (two heap std::string members)
- ƒ groupId -> *(owner+0x10)
- $ targetPartCount / targetPartCount2 (required break counts)

### BreakPartObjective::Read `@11a26090` — quest-activity-objectives
*Config deserializer for a monster part-break objective (break a named part to a break-level). Reads two string part-name fields via vtable+0x24=ReadString into local std::string buffers, other fields via ReadInt. groupId -> owner+0x10. Appends a 0x6c-byte record (contains embedded strings) to the vector at owner+0x18, using placement/copy helper FUN_11a25d00 (existing element) or FUN_11a27030 (grow-insert).* (conf high)
- ƒ record element size = 0x6c bytes (has two heap std::string members targetPartName/targetPartName2)
- ƒ groupId -> *(owner+0x10)
- $ targetBreakLev / targetBreakLev2 (break-level thresholds)

### FGNode_QuestObjectiveConfig::GetConfiguration `@10ea1ab0` — quest
*Flowgraph node defining a quest/objective condition block. Input: modelGroupID. Large output/param set: moduleType, useItemID, useItemNum, targetMonsterID, killMonsterCount, monsterPartName(5-wide), monsterBreakLev, monsterStateAbnormal, spawnGroupID, msgID, targMsgID, monsterBuff1/2/3, logic, targetMonsterID2, killTargetMonsterCount2, monsterPartName2(5-wide), monsterBreakLev2, targMsgID2, wrongHitCheck, time1/2/3, alertMsgID.* (conf medium)
- ƒ input: modelGroupID(int)
- ƒ params include monsterStateAbnormal(int) = required abnormal-status condition, monsterBuff1..3(int) = required monster buffs, monsterBreakLev/2 = part break level, killMonsterCount/killTargetMonsterCount2 = kill quotas, monsterPartName/2 are 5-wide string arrays
- ƒ monsterPartName port width = 5, monsterPartName2 width = 5

### GatherItemObjective::Read `@11a2b5a0` — quest-activity-objectives
*Config deserializer for an item-gather objective (collect itemId x itemNum from a spawn group). Byte-identical record layout to ItemUseObjective::Read (0x30-byte element, grow-insert via FUN_11a25470) but a distinct field-name once-flag block, i.e. a separate objective subclass sharing the same POD record type.* (conf high)
- ƒ record element size = 0x30 bytes (12 int32)
- ƒ groupId -> *(owner+0x10)
- $ itemNum (quantity requirement)

### ItemUseObjective::Read `@11a24910` — quest-activity-objectives
*Config deserializer for an activity objective keyed on an item (use/collect a given itemId x itemNum near a spawn). Same Read idiom as KillMonsterObjective::Read; groupId -> owner+0x10, remaining 12 ints packed into a 0x30-byte record appended to vector at owner+0x18.* (conf high)
- ƒ record element size = 0x30 bytes (12 int32); *(owner+0x18) += 0x30, else FUN_11a25470 grow-insert
- ƒ groupId -> *(owner+0x10)
- $ itemNum (quantity requirement, authoritative game-data amount)

### KillMonsterObjective::Read `@11a23370` — quest-activity-objectives
*IXmlNode config deserializer for an activity/quest 'kill monster' objective. Reads scalar fields by attribute name, stores groupId into owner+0x10, then packs the remaining 16 int fields into a fixed 0x40-byte record appended to the objective vector at owner+0x18 (end ptr owner+0x1c). Standard MHO Read pattern: vtable+0x10=HasAttr(nameId), +0x20=ReadInt(nameId); missing fields emit a client warning (FUN_100ea3b0/FUN_100ee330) and leave the slot uninitialized.* (conf high)
- ƒ record element size = 0x40 bytes (16 int32); appended by *(owner+0x18) += 0x40 or via FUN_11a241d0 grow-and-insert when full
- ƒ groupId -> *(owner+0x10)

### KillMonsterSimpleObjective::Read `@11a28a80` — quest-activity-objectives
*Config deserializer for a minimal kill objective (single target monster, no count field). groupId -> owner+0x10; 11 ints packed into a 0x2c-byte record appended to vector at owner+0x18 (grow-insert via FUN_11a29520).* (conf high)
- ƒ record element size = 0x2c bytes (11 int32); note field pair at record+0x20 written as CONCAT44(Time3,Time2)
- ƒ groupId -> *(owner+0x10)


## status  (7)

### BehaviorTree::RegisterEventAndAbnormalStatusEnums `@0x10256190` — status-effect-enum
*Registers the numeric ID -> string-name table for all behavior-tree event types AND monster abnormal-status effects (each entry FUN_10256e40(id, name)). This is the authoritative enum of status-effect IDs and their _End counterparts, plus BT combat events (rage/angry, enter-combat, skill-hit, cooperation-attack, etc). Critical for server status-effect logic.* (conf high)
- ƒ Abnormal status IDs (apply): 0x8b4 Paralysis, 0x8b5 Traped(trap), 0x8b6 Poison, 0x8b7 Stun, 0x8b8 Flare, 0x8b9 SonicGranade, 0x8ba Poo, 0x8bb Marked, 0x8bc Slivervine(catnip), 0x8bd Sleep, 0x8be Balance, 0x8bf Falldown, 0x8c0 PartBreak, 0x8c1 TailBreak, 0x8c2 CrazyRun, 0x8c3 FireFall, 0x8c4 Stuck, 0x8c6 Anethesia, 0x8c7 ParalysisTrap, 0x8c8 AdvancedTrap, 0x8c9 WindPressure, 0x8ca DragonWindPressure, 0x8cb Quake, 0x8cc Roar, 0x8cd Paralyse, 0x8ce Snowman, 0x8cf Exhaust, 0x8d0 Piyo, 0x8d1 Scare, 0x8d2 Bound, 0x8d3 Carry, 0x8d4 Haze, 0x8d5 Sink, 0x954 Dynamite
- ƒ Abnormal status _End IDs = apply_id + 0x22 (e.g. 0x8b4->0x8d6, 0x8b5->0x8d7 ... 0x8d5 Sink->0x8f7 Sink_End); Anethesia 0x8c6->0x8e8, etc. Dynamite 0x954 apply / 0x955 end (irregular)
- ƒ BT stimuli events 0x89c-0x8b1: 0x89c CommonAIBehaviorStart, 0x89d End, 0x89e DAMAGE_EVENT, 0x89f TRAP, 0x8a0 PARARYSIS_TRAP, 0x8a1 PARARYSIS, 0x8a2 FLASH, 0x8a3 SONIC, 0x8a4 CATCH, 0x8a5 POOL, 0x8a6 ATTACKPLAYER, 0x8a7 ATTACKMONSTER, 0x8a8 INIT, 0x8a9 DESTROY, 0x8aa GAME, 0x8ab OnNoTarget, 0x8ac OnInterestingSoundHeard, 0x8ad OnThreateningSoundHeard, 0x8ae OnSomethingSeen, 0x8af OnEnemySeen, 0x8b0 COLLIDEWALL, 0x8b1 MOVETIMEOUT
- ƒ Monster events 0x516-0x529: 0x516 HEALTH_LOW, 0x517 DEAD, 0x518 ATTR_THRESHOLD, 0x519 PART_BREAK, 0x51b PART_BALANCE_LOST, 0x51c STATE_ABNORMAL, 0x51d STATE_ABNORMAL_END, 0x520 ADD_THREAT, 0x521 PART_FALLDOWN, 0x522 PART_SCAR, 0x526 LOSTBALANCE, 0x527 HEALTH_REACH_CAPTURE, 0x528 HEALTH_CHANGE, 0x529 PET_TIMEOUT
- ƒ Master/self events 0x8f8-0x909: Abnormalized/End, Buffed/End, HitReactioned, DoAttack, DoDefense, DoDodge, DoUseItem, Died, SendCommand, EnterCombat, ExitCombat, StateChanged, DoStartMove, DoStopMove
- ƒ GroupMember events 0x90a-0x918; AttentionTarget events 0x919-0x92d
- ƒ Misc combat: 0x936 SKILL_HIT, 0x937 ENTER_ANGRY(rage), 0x939 ENTER_LEMON, 0x93a LEAVE_LEMON, 0x938 SMPET_Summon, 0x947 COOPERATION_ATTACK, 0x948 COOPERATION_ATTACK_END, 0x949 KEY_ATTR_CHANGE, 0x931 Inner_After_Abnormal, 0x952 SOULBEAST_INTERACT
- ƒ Emotion states 0x94b-0x950: NORMAL_START/END, ANGRY_START/END, TIRED_START/END; monster ctrl fight/power levels 0x93c-0x943; 3v3/mvm win events 0x944-0x946

### CAbnormalStatePriorityInfo::FindByKey `@0x117cb800` — status-effects
*2D-sparse-map lookup into the CAbnormalStatePriorityInfo table by abnormal-state key; returns the configured priority value.* (conf high)
- ƒ valid if key!=-1 and (key!=0 or mgr+0x30==0) and mgr+0x28!=0; k=key-mgr+0x30; 0<=k<mgr+0x24; return array[k/stride][k%stride]. stride=mgr+0x28, base=mgr+0x30, cap=mgr+0x24.

### CAbnormalStatePriorityInfo::GetManagers `@0x117cb940` — status-effects
*Singleton accessor for the CAbnormalStatePriorityInfo manager (registers on first call). Returns *DAT_123935e8 when param==0.* (conf high)

### CAbnormalStateRelationInfo::FindByKey `@0x117ccbd0` — status-effects
*2D-sparse-map lookup into the CAbnormalStateRelationInfo table by abnormal-state key; returns the relation entry (which statuses override/conflict/replace each other).* (conf high)
- ƒ Same 2D-map math: k=key-mgr+0x30; valid 0<=k<mgr+0x24; return array[k/stride][k%stride]; stride=mgr+0x28.

### CAbnormalStatusConfig::LoadFromNode `@0x11681860` — status/abnormal
*Reads the full abnormal-status tolerance/effect config from an XML/data node (param_2 reader vtbl: +0x10 HasKey, +0x2c GetInt) into the owner struct starting at +0x218. Covers all abnormal statuses with per-status fields. Uses lazy interned-key caching (bitmask flags DAT_12389990 / DAT_12389ad4 / DAT_12389c18 / DAT_12389d5c / DAT_12389ea0). Base value + Max fields default to -1 (0xffffffff), all others default 0.* (conf high)
- ƒ Poison:  Tol=+0x218, base=+0x21c(-1), Add=+0x220, Max=+0x224(-1), Weaken=+0x228, Buff=+0x22c, Dmg=+0x230, Count=+0x234, WeakenScale=+0x238
- ƒ Paralysis: Tol=+0x23c, base=+0x240(-1), Add=+0x244, Max=+0x248(-1), Weaken=+0x24c, Buff=+0x250, Count=+0x254, WeakenScale=+0x258
- ƒ Stun: Tol=+0x25c, base=+0x260(-1), Add=+0x264, Max=+0x268(-1), Weaken=+0x26c, Buff=+0x270, Count=+0x274, WeakenScale=+0x278
- ƒ Sleep: Tol=+0x27c, base=+0x280(-1), Add=+0x284, Max=+0x288(-1), Weaken=+0x28c, Buff=+0x290, Count=+0x294, WeakenScale=+0x298
- ƒ Trap: Tol=+0x29c, TimeLower=+0x2a0, Count=+0x2a4, WeakenScale=+0x2a8
- ƒ ParaTrap: Tol=+0x2ac, TimeLower=+0x2b0, Count=+0x2b4, WeakenScale=+0x2b8
- ƒ AdvTrap: Tol=+0x2bc, TimeLower=+0x2c0, Count=+0x2c4, WeakenScale=+0x2c8
- ƒ Flare: Tol=+0x2cc, TimeLower=+0x2d0, Count=+0x2d4, WeakenScale=+0x2d8
- ƒ Sonic: Tol=+0x2dc, WeakenScale=+0x2e0, TimeLower=+0x2e4
- ƒ Falldown: Tol=+0x2e8, WeakenScale=+0x2ec, TimeLower=+0x2f0
- ƒ Anesthesia: Count=+0x2f4, base=+0x2f8, WeakenScale=+0x2fc
- ƒ Dynamite: Tol=+0x300, base=+0x304(-1), Add=+0x308, Max=+0x30c(-1), Weaken=+0x310, Buff=+0x314, Dmg=+0x318, Count=+0x31c, WeakenScale=+0x320
- ƒ default rule: base-value keys (Poison/Paralysis/Stun/Sleep/Dynamite) and all Max keys default 0xffffffff; every other field defaults 0
- $ per-status: Tol (buildup threshold), Max (cap), Add (per-hit accumulation), Dmg (tick damage), Count (trigger count), Weaken/WeakenScale (decay), TimeLower (duration reduction)

### GetEnumId_AbnormalState_a `@0x119177c0` — status-effects
*Returns the registered enum id for 'AbnormalState' (DAT_1239ef28) into *param_1.* (conf medium)

### GetEnumId_AbnormalState_b `@0x11917e10` — status-effects
*Returns the registered enum id for 'AbnormalState' (DAT_1239ef54) into *param_1 (second registration site).* (conf medium)


## guild  (7)

### BuildCommerceBufferIconVO `@0x109f6650` — guild-commerce (tangential)
*Builds bufferIconArray of BufferIconVo for the hunter-team-battle/guild commerce buff display: {deadlineTime, iconIndex, isOwned, commerceName, buffDes}. Iterates the available-goods list (CCommerceInfo::BuildAvailableGoodsList) stride 0xc.* (conf medium)
- ƒ server time uStack_44 = FUN_111f8d20(); localtime64_s(&tm,&uStack_44)
- ƒ goods list built into [iStack_98..iStack_94) stride 0xc; count = (iStack_94-iStack_98)/0xc
- ƒ per entry (base = iStack_9c+iStack_98): iconIndex = *(base); isOwned(bool) = *(base+4); deadlineTime = *(base+8) - uStack_44._4_4_   (expiry - current time)
- ƒ commerceName = *(commerceRec+0x28); buffDes = buffRec+0x3ac (via FUN_104fd710)

### BuildHunterTeamBattleShipVO `@0x109f7eb0` — guild-commerce (tangential)
*Airship/guild-sail selection VO builder: shipName, shipDes, bufferDes, requireDes, indexIcon, shipID, chosenShipId/Name, isAuthority, and rankInfoArray of RankVo {hunterGroupName, currentValue, commerceID, isLock, guildID}. Out of skills category.* (conf low)
- ƒ rank entries stride 0x36; count = (piVar1 - iVar4)/0x36
- ƒ bufferDes = buffRec+0x3ac; isLock = (*(base+4) != 0)

### CGuildSkillInfo::GetSkillCount `@1091a0a0` — guild-skill config accessor
*Returns the guild-skill count by calling the manager's vtbl+0x28 (size). Same lazy CInfoManager::FindByName('CGuildSkillInfo') init pattern as FUN_1091a010.* (conf high)
- ƒ returns (**(manager+0x28))() = number of guild skills.

### CGuildSkillInfo::GetSkillIdByIndex `@1091a010` — guild-skill config accessor
*Returns the guild-skill entry at index param_1 from the CGuildSkillInfo manager's array. Lazily initializes the manager via CInfoManager::FindByName('CGuildSkillInfo') with a one-time init guard (DAT_123c8254 bit 0).* (conf high)
- ƒ array count = (puVar1[6]-puVar1[5])>>2; valid if 0<=param_1<count; returns *(puVar1[5] + param_1*4), else 0.
- ƒ one-time init: if (DAT_123c8254 & 1)==0 -> set bit, FUN_1091e8a0(), FUN_11a8911f(default record &DAT_123c8258).

### CGuildSkillModel::BuildSkillCandidateData `@1091bc50` — guild-skill panel (candidates)
*Builds SkillDataArray of SKILL_CLASS_NAME candidate guild-skill entries (skills available to learn), resolving item name/icon and emitting level/tuition/trainingLevel + guildfund. Dispatches 'SkillCandidateUpdate'.* (conf medium)
- ƒ candidate list from FUN_11174390() (base..[1], word stride); copied via memcpy.
- ƒ per entry ppiVar12 (skill record): level=ppiVar12[6], tuition=ppiVar12[10], trainingLevel=ppiVar12[9].
- ƒ itemName/icon via FUN_1145f260(id0,id1) -> *(rec+0x1c)/*(rec+0x20).
- ƒ guildfund = FUN_114a8610(); also emits trainingLevel = *(byte)(uVar7+0x224) (guild building level gate).
- $ tuition = skillRecord[10] (guild-fund cost).
- $ guildfund = current guild fund.

### CGuildSkillModel::BuildSkillViewData `@1091b5a0` — guild-skill panel (owned/trained)
*Builds SkillViewDataArray of SKILL_VIEW_CLASS_NAME entries for the guild-skill view: per skill it resolves item name/icon via FUN_1145f260 and emits level/tuition/trainingLevel, plus the guild fund. Dispatches 'SkillViewUpdate' AS3 event.* (conf medium)
- ƒ skill list read via FUN_114a9180 / FUN_114a90b0(&piStack_b0) (range piStack_b0..piStack_ac).
- ƒ per entry: FUN_1145f260(id0, id1) -> item record; itemName from *(rec+0x1c), display string from *(rec+0x20).
- ƒ level = *(int*)(local_104+0x18), tuition = *(int*)(rec+0x28), trainingLevel = *(int*)(rec+0x24).
- ƒ guildfund = FUN_114a8610().
- $ tuition = *(rec+0x28) (guild-fund cost to train/upgrade the guild skill).
- $ guildfund = current guild fund balance (FUN_114a8610).

### RegisterGuildAirshipCommerceMessageHandlers `@0x109f5c90` — guild-commerce (tangential)
*Bulk registration of ~20 guild / airship-occupy / sea-sand / hunter-team-battle commerce message handlers (C2AS_GetBoLaiDaoDatas, C2AS_GetGuildCommerceBuffData, ExecuteLevelMatch, AS2C_GetDynamicShipData, ReqAllCommerce, ReqSeaSandData, etc.). Same key->handler binding idiom as 0x109a4c60.* (conf medium)
- ƒ notable handlers: FUN_109f6650 (BuildCommerceBufferIconVO), FUN_109f7eb0 (ship/rank VO), AirshipOccupyView::BuildLevelInfoVO
- ƒ "C2AS_GetGuildCommerceBuffData" among the registered keys


## crafting  (5)

### CManufactureSkillLearnInfo::GetByIndex `@1120a2a0` — crafting-skill
*Dense-array index accessor for CManufactureSkillLearnInfo: returns entry ptr at (mgr+0x14)[index] if 0<=index<count where count = (mgr+0x18 - mgr+0x14)>>2.* (conf high)
- ƒ count = (*(mgr+0x18) - *(mgr+0x14)) >> 2; return *(*(mgr+0x14) + index*4)

### CManufactureSkillName::GetById `@1120a300` — crafting-skill
*CInfoManager sparse-table lookup returning the CManufactureSkillName entry for a given id.* (conf high)
- ƒ standard sparse lookup (base +0x30, page +0x28, count +0x24, pages +0x20)

### CManufactureSkillName::GetManager `@112076e0` — crafting-skill (info-manager singleton)
*Stock CInfoManager singleton accessor for CManufactureSkillName (manufacture/crafting skill name table). Lazy-registers the manager via StcMbrNameSvr and returns it, falling back to a sentinel (&DAT_1203f824) on failure.* (conf high)

### CManufactureSkillName::GetSingleton `@1120a050` — crafting-skill (info-manager singleton)
*Simplified singleton getter returning *DAT_1203f730 for CManufactureSkillName after lazy registration.* (conf high)

### CManufactureSkillName::ShowNameTooltip `@1120b200` — crafting-skill-ui
*Resolves a CManufactureSkillName entry by id, reads its name string (entry+0x14, fallback DAT_11d9d32b empty), wraps via FUN_1024e9b0(name,0x2a) and posts a UI message FUN_1112f070(0x4b6, name).* (conf medium)
- ƒ UI message id 0x4b6 with wrapped name string


## abnormal  (5)

### CPlayerGaugeMgr::AddBlast `@114d7b10` — abnormal-status-gauge
*Gauge-accumulate-and-proc for a fifth status type (blastblight/other), threshold FUN_11353880 / buff-id FUN_11353860, advance FUN_113b6530. Add-type 4 when not server-controlled.* (conf medium)
- ƒ total>=FUN_11353880(); buffId=FUN_11353860(); buffMgr.vtbl+0x44(0,buffId,0,0,4) if +0x420==0

### CPlayerGaugeMgr::AddParalysis `@114d7700` — abnormal-status-gauge
*Identical gauge-accumulate-and-proc logic to 114d75f0 but for a second status type (paralysis), using threshold FUN_11351760 / buff-id FUN_11351740 and advance FUN_113b5d80. Applies buff via add-type 4 when not server-controlled.* (conf medium)
- ƒ total = FUN_1025b060()+param_2 >= FUN_11351760(); buffId = FUN_11351740(); buffMgr.vtbl+0x44(0,buffId,0,0,4) if +0x420==0

### CPlayerGaugeMgr::AddPoison `@114d75f0` — abnormal-status-gauge
*Accumulates a status gauge (poison-type) and, when the running total (base FUN_1025b060 + param_2 delta) reaches the current threshold (FUN_1134d820), applies the associated CBuffInfo buff. Reads the current threshold's buff id (FUN_1134d720), validates CBuffInfo, and if buff is NOT server-controlled (+0x420==0) applies it locally via buffMgr vtbl+0x44(0, buffId, 0, 0, type=4). Advances gauge state via FUN_113b5640.* (conf medium)
- ƒ total = FUN_1025b060() + param_2; if total >= threshold(FUN_1134d820()) -> resolve buff id FUN_1134d720()
- ƒ apply if *(entry+0x420)==0: buffMgr.vtbl+0x44(0, buffId, 0, 0, 4); reset local_1c=0
- ƒ add-type 4 = status-gauge-triggered buff

### CPlayerGaugeMgr::AddSleep `@114d7a00` — abnormal-status-gauge
*Gauge-accumulate-and-proc for another status type (sleep), threshold FUN_11352650 / buff-id FUN_11352570, advance FUN_113b6010. Add-type 4 when not server-controlled.* (conf medium)
- ƒ total>=FUN_11352650(); buffId=FUN_11352570(); buffMgr.vtbl+0x44(0,buffId,0,0,4) if +0x420==0

### CPlayerSPMgr::AddPiyo `@114d7810` — abnormal-status-gauge
*Adds to the stun/piyo (dizzy) gauge. When total >= threshold (FUN_113520d0), resolves the piyo buff (FUN_11351fd0 id) and applies it (add-type 4) if not server-controlled. Manages a stun-timer list at param_1+0x20..0x24 (pairs of {kind=1, timerHandle}): if gauge drained (total<1) removes the active stun entry (cancel timer FUN_100ea6a0, memmove-compact the vector); if gauge active and no entry exists, schedules a 1000ms stun-duration timer (FUN_100ea610 -> FUN_114d82d0) and pushes {1, handle}.* (conf medium)
- ƒ total = FUN_1025b060()+param_2; threshold FUN_113520d0(); buff id FUN_11351fd0(); add-type 4
- ƒ stun duration timer = 1000 ms (FUN_100ea610('CPlayerSPMgr::AddPiyo', 1000, 0, this, FUN_114d82d0, 0))
- ƒ stun list entries stride 8 bytes {int kind==1, int timerHandle} at [0x20,0x24), capacity end [0x28]
- ƒ on drain (total<1): cancel timer + remove entry; on proc (total>=1, none present): add entry


## combat  (5)

### CAttackHitCondition::ReadFromXml_A `@10d5d700` — combat-hit
*Parses an attack hit-condition config block. Reads scalar limits then builds a hash-keyed map of per-attacker override entries (children named 'attacker'), with redundant-hash-collision detection/error.* (conf high)
- ƒ this+0x00 condition_flag (int), +0x04 max_entity_hit (int), +0x08 max_part_hit (int), +0x0c min_time_interval (float), +0x10 ignore_skill (int), +0x14 partbase_attack (bool)
- ƒ attacker-name hash: h = 0x4e67c6a7; for each char c: h = h ^ (h*0x20 + (h>>2) + (int)(char)c)
- ƒ map root at this+0x18 (red-black tree, node key at node+0x10, name ptr at node+0x14); collision => sprintf redundant-hash error
- $ max_entity_hit / max_part_hit = per-swing hit caps
- $ min_time_interval = minimum seconds between hits on same target/part

### CAttackHitCondition::ReadFromXml_B `@10d5d950` — combat-hit
*Variant of ReadFromXml_A using the property-node API (FUN_10ab25f0 'value') with a reset flag (param_3). Reads the same fields into a struct addressed as int array, then builds the same per-attacker hash map.* (conf high)
- ƒ param_1[0] condition_flag, [1] max_entity_hit, [2] max_part_hit, [3] min_time_interval(float), [4] ignore_skill, [5] partbase_attack(bool)
- ƒ if reset flag (param_3 nonzero): each field pre-zeroed before optional override
- ƒ same attacker hash: h=0x4e67c6a7; h = h ^ (h*0x20 + (h>>2) + c)
- ƒ attacker map root at param_1+6 (node key +0x10, name ptr node[5]/+0x14)
- $ max_entity_hit, max_part_hit hit caps; min_time_interval re-hit cooldown

### CCombatActionDef::ReadFromXml `@10ea6b30` — combat-action
*Master parser for a combat action/state definition. Reads ActionName->type code, weapon holster state, state lists, QTE start states, hittable/non-hittable skill lists, start effects, monster BT event string, failed-except states, and sub-actions.* (conf medium)
- ƒ ActionName attr -> this+0xc type: ''(default)->3, 'UnHolstered'->1, 'Special'->2, (str@0x11cf5810)->4, (str@0x11cf5814)->5
- ƒ State lists: 'States'/child 'State' appended to list at this+0x14; 'QTEStartStates' -> list at this+0x64
- ƒ 'HitSkillID' (int>0) and 'HitSkills' (children of CSkillRef {SkillResID,SkillID,Level}) -> hittable-skill list at this+0x1c (node stride 0x14)
- ƒ 'CannotHitSkills' (CSkillRef children) -> list at this+0x24; valid if SkillResID>=1 \|\| SkillID>=1
- ƒ 'StartEffects'/'EffectID'(int>0) -> effect list at this+0x5c (node stride 0xc)
- ƒ 'MonsterBTEvent' string stored at this+0x40 (buffer end this+0x3c)
- ƒ 'FailedExceptState'/'FailedExceptStates' -> state list; 'Actions' children parsed via FUN_10ea6920 (node stride 0x1c)

### CMHHitInfo::SerializeToNet `@10c30c30` — combat-hit
*Serializes/deserializes the combat hit-info struct to/from a network stream (twin of documented CMHHitInfo::SerializeToKeyValue @0x102d9480). Serializes every hit field with typed tags. This is the authoritative shot/hit packet carrying skill id & sequence.* (conf high)
- ƒ this+0x00 shooterId (eid 'eid'), +0x04 targetId (eid), +0x08 weaponId (eid), +0x0c projectileId (ui32 'ui32')
- ƒ this+0x48 partId (part 'part')
- ƒ this+0x50 world pos (wrld), +0x68 dir (dir31), +0x74 normal (dir31)
- ƒ this+0xe8 aimed (bool/serialize), +0xfc armorHeating (float)
- ƒ this+0xe0 projectileClass (ui16), +0xe2 weaponClass (ui16)
- ƒ this+0x100 penetrationCount (ui8), +0x108 impulseScale (vec3 'iii')
- ƒ this+0x4c attackType, +0x118 hitType, +0x11c defenseResult, +0x120 HitIndex
- ƒ this+0x124 shooterSrvId, +0x128 targetSrvId, +0x12c weaponSrvId, +0x130 projectileSrvId
- ƒ this+0x15c skillID (matches combat.md: clientSkillId compared to server current skill), +0x160 skillSeq

### TlvDamageHitResult::PrintText `@0x102dcf40` — combat-damage
*TDR text serializer for a damage/hit resolution result struct (per-hit outcome: elemental damage split, stun/stamina, applied status buffs).* (conf high)
- ƒ Result block (floats/ints): fDamageResult @0x0; fWaterDamageResult @0x4; fFireDamageResult @0x8; fElectricDamageResult @0xc; fDragonDamageResult @0x10; fIceDamageResult @0x14; fNonDamageResult @0x18; iPIYOResut(stun) @0x1c; iStaminaResult @0x20; iDamageMode @0x24; iDefenceLevel @0x28; iInjuryLevel @0x2c
- ƒ nTanDao (i16) @0x30; iAttack_levelP @0x32; iHitIndex @0x36; iAttackLogicEntityId @0x3a; iHitLogicEntityId @0x3e; iDefenceLogicEntityId @0x42
- ƒ Gener(base/pre-mitigation) block floats: fDamageGener @0x46; fWaterDamageGener @0x4a; fFireDamageGener @0x4e; fElectricDamageGener @0x52; fDragonDamageGener @0x56; fIceDamageGener @0x5a
- ƒ iPartId @0x5e; iSkillResID @0x62; iItemType @0x66; iAttackDataID @0x6a; stDir/stPos/stNormal vec3 via FUN_102713d0
- ƒ stateBuffID: FIXED array of 0x11 (17) u32 entries @0x92 (param_1+0x92) — status/abnormal buffs applied by this hit


## tconnd  (4)

### TcltApi::RecvPackage `@0x100502a0` — tconnd-net
*tconnd receive: tries to parse a buffered package (FUN_1004fad0); if none, recv()s more data into buffer (respecting free space = field[7]-field[8]-field[9]) then re-parses. Logs no-space/recv-error/recv-data.* (conf high)
- ƒ free space = recvbuff(field[7]) - field[8] - leftdata(field[9]); if<1 errcode=3(no space)
- ƒ recv dest = buf(field[6]) + field[8] + field[9]; on data field[9]+=n

### TcltApi::RecvPackage_Variant `@0x10050f10` — tconnd-net
*Identical structure to RecvPackage (0x100502a0) but uses parser FUN_100506b0 (a different framing variant). tconnd receive + reparse loop.* (conf high)
- ƒ same free-space and offset math as FUN_100502a0

### TcltApi::SendPackage `@0x1004f9b0` — tconnd-net
*tconnd tcltapi client-connection send: writes a length-prefixed package via the low-level socket send (FUN_10049b90), logs success/failure with errno. Sets handle error code (field[1]) 4=bad-arg, 1=send-fail.* (conf high)
- ƒ returns 0 on full send (iRet==len), -1 otherwise; handle->errcode field[1]=4(bad param)/1(send error)

### TcltApi::TryParseOnePackage `@0x1004fad0` — tconnd-net
*tconnd: extracts one complete package from the recv ring buffer. Reads a big-endian package-length header (header width 1/2/4/8 bytes at buf+0x30, and a second optional length field at +0x38), compacts buffer if incomplete, else memcpy's the full package out.* (conf high)
- ƒ header field width selects endian-swap: 2->bswap16, 4->bswap32, 8->bswap64 (via __aullshr/__allshl), else raw byte
- ƒ pkglen = local_8 + local_c (two length fields at offsets +0x30 and +0x38)
- ƒ returns 1 when full package copied, 0 when need more data


## talents  (4)

### CTalentSkillSystem::ctor `@0x1157b670` — talents
*Constructor for a talent/active-skill system object (~0x29 dwords). Sets vtable PTR_FUN_11d2ddb4, stores owner (param_2) and param_3, zero-inits many list/pair members, then queries CTalentActiveInfo manager (vtbl +0x28) and runs FUN_11744050/FUN_1157d4f0 init.* (conf medium)
- ƒ param_1[1]=owner; param_1[2]=param_3; vtbl=&PTR_FUN_11d2ddb4
- ƒ CTalentActiveInfo::GetManager() then vtbl+0x28 called

### CTalentTree::GetNode `@0x1157a720` — talents
*Reads the talent-tree node value for CTalentInfo id (param_2) from the param_1+0x2d8 grid (mirror of SetNode).* (conf high)
- ƒ flatIndex = ((info[0x44]*3 + info[0x4c])*3 + info[0x50])
- ƒ return *(param_1 + 0x2d8 + flatIndex*4)

### CTalentTree::HasTalentInBranch `@0x1157a850` — talents
*Checks whether talent id (param_2) is present in the learned-list of its branch. Branch = CTalentInfo+0x44; scans 8 slots (stride 4) at base param_1 + info[0x44]*0x20 + 0x138.* (conf medium)
- ƒ info via CTalentInfo 2D lookup by param_2
- ƒ branchBase = param_1 + info[0x44]*0x20 + 0x138
- ƒ for i in 0..7: if *(branchBase + i*4) == param_2 return true
- ƒ per-branch learned array = 8 entries * 4 bytes; branch stride 0x20

### CTalentTree::SetNode `@0x1157a380` — talents
*Sets the value (param_3) of a talent-tree node. Looks up CTalentInfo by id (param_2); stores param_3 into a flattened 3-axis grid at param_1+0x2d8.* (conf high)
- ƒ info via CTalentInfo 2D lookup by param_2
- ƒ flatIndex = ((info[0x44]*3 + info[0x4c])*3 + info[0x50])
- ƒ *(param_1 + 0x2d8 + flatIndex*4) = param_3
- ƒ axes info[0x44], info[0x4c], info[0x50] each 0..2 (3x3x3 grid = 27 nodes)


## ui  (4)

### CGuideTarget::ResolveItemOrSkillHighlight `@10f33380` — ui-guide-skill-item
*Given a name string (*param_2) and param_3==1, resolves a UI guide/highlight target: if the name begins with "MhItem_" (index 0) or "MSkill_" (index 1) and the current guide slot type (vtable+0x14) matches that index, extracts the trailing numeric id via atoi(name+7) and sets it on the guide object (vtable+0xc). Always returns 1.* (conf medium)
- ƒ prefix table: {0:"MhItem_", 1:"MSkill_"}; for i in 0..1: if( guide.vtable+0x14()==i && strncmp(name, table[i], 7)==0 ) { id = atoi(name+7); guide.vtable+0xc(id); return 1 }

### CPropertyPanelModel::BuildPlayerPropertyVO `@108d97c0` — ui-character-property / equipment-skills
*Client UI marshaller that builds a PROPERTY_VO_CLASSNAME view-object describing the local player's combat stats plus the element/status flags of both weapon slots and the active armor/equipment skill list. Reads the player object (param_5, a CPlayer-like whose vtbl+0xb8 fills a scratch buffer) and pushes ~30 named fields into an AS3 data object. Guarded by param_6>1.* (conf medium)
- ƒ Player-context resolve: piVar4 = FUN_107cb5c0() (local CPlayer); requires piVar4 && local_130[0][0xc] && local_130[0][0xd] non-null before building.
- ƒ Weapon slot pointers: main weapon = *(int*)(playerRec+0x30), sub weapon = *(int*)(playerRec+0x34); pcVar2 is the player record from FUN_108df100 chain.
- ƒ Weapon element/status bitmask lives at *(uint*)(weaponSlot+0x78). Per-bit booleans emitted (FUN_104d15e0): bit0,bit1,bit2 (fire/water/thunder tolerances group per string order), bit3 = weaponAttackContainsDragon, bit4 = weaponAttackContainsIce, bit6 = weaponAttackContainsPoison, bit7 = weaponAttackContainsSleep, bit8 = (11dd64fc string) e.g. paralysis. Same 9-bit decode done for both main(0x30) and sub(0x34) slots.
- ƒ Attribute type detection: ((uint)param_5[7] & 0x8f) == 3 or == 4 selects weapon-attack container pointer param_5[8], else sentinel 0xdeadbeaf.
- ƒ Armor/equipment skill iteration (two lists at playerRec+0x48 loop): base = *(int*)(rec+0x48), count = (*(rec+0x4c) - base)/0x14 (stride 0x14=20 bytes). Per non-null entry emits skillName=*(entry+0x18), needPoint=*(entry+0x24), skillEffect=(entry+0x1c), bIsActivation=1, bCanBeLighten=*(byte)(entry+8). Same pattern repeated for a second list (activated vs available skills).
- ƒ A third skill list built under piStack_84[0x9838] non-zero: 10-iteration table (iVar5=10) stepping puVar6 += 0x12 words per row, emitting a 'collumn' grid; used when player has some feature flag at CPlayer+0x9838*4.
- ƒ Emits floats via FUN_104d14d0 (setFloat, e.g. luckattack) and CPlayer::GetHuntRankOrCount() for hunt-rank/hrLevel fields.
- ƒ curendure/endure flag: ((byte)uStack_d4 & 0x8f) == 10 (AS3 string-type discriminant).

### MHUI::RegisterGetSkillListDataCallback `@10877440` — ui/registration
*Registers the '_getSkillListData' Scaleform callback bound to FUN_10877c00, and installs a related handler via FUN_104f42b0. Gated arg count==1.* (conf high)

### MHUI::RegisterWeaponSkillWindowCallbacks `@10876d10` — ui/registration
*One-time registration of Scaleform->native callbacks for the weapon/skill/talent window. Binds named callbacks (via FUN_100b62c0 string ctor + FUN_1087c9e0 map insert) to handler functions: InitModel, WeaponGeneralViewWindowHide, InitGeneral, WeaponUnlockUIOpened, InitWeaponUnlockView, ApplyWeaponTutorial, WeaponSelect, SetCurrentPlayerWeapon, VideoViewAlready, WeaponTalentActived, CloseUI, InitViewModel, InitTalentCom, GetProfoundSkillData(->FUN_1087a4c0), GetActiveProfoundSkillData(->FUN_1087a9e0), ActivateWeaponProfound, UnactivateWeaponProfound, SetWeaponStyle, GetWeaponStyleData(->FUN_1087b3e0), GetItemColumnGridByID, plus _getSkillListData(->FUN_10877440->FUN_10877c00), BuildWeaponDeriveTreeData, GetWeaponDeriveTipsMaterial. Then fires several one-shot init hooks (FUN_10d17440/FUN_10d17870 gates).* (conf high)


## suit  (4)

### BuildSuitSkillGroupDataVO `@0x109a4ef0` — suit-skills
*Response builder for C2AS_GetSkillGroupData: constructs the full suit-skill UI tree (group -> skill-types -> skills, plus per-skill activation item/material costs and passive-skill-group activation info). Reads the authoritative suit-skill state from game context (DAT_1202e818+0xd0->+0x90 vtbl+0xb4, records at +0x260d8 / +0x2cd4).* (conf medium)
- ƒ top VO class "mh.view.SuitSkill.Data.SuitSkillGroupData": GroupId, GroupName(str at unaff_EBX+0x14), ResetCount = piVar9[1], SkillTypeDatas[]
- ƒ SkillTypeData "mh.view.SuitSkill.Data.SuitSkillTypeData" per typeRecord puVar7: TypeName, CurrentCostLimit = CEquipSuitSkillInfo::GetSuitSkillTotal(ppppiVar12, puVar7[0]), MaxCostLimit = puVar7[3], SkillDatas[]; type-record stride: skill list = [puVar7[4] .. puVar7[5]), typeRecord advances puVar7 += 7 words
- ƒ SkillData "mh.view.SuitSkill.Data.SuitSkillData" per record pppiVar10 (word indices): SkillId=[4], SkillType=[7], field(0x11de16c8)=[8], CostLimitAdd=[9], PassiveGroup=[10], IsNotOpen(byte)=[0xd], AddResetCount=[0xe], ActiveMoney=[0xf], ClientTitleId=[0x3a], ClientPageId=[0x3c]
- ƒ name/desc: grp=FUN_1050ebc0(pppiVar10[10]) (passive-group lookup); if grp && lvl=ComputeSuitSkillLevel(pppiVar10[0xc]) : SkillName=*(lvl+0x18), PassiveGroupPoint=*(lvl+0x24)
- ƒ IsActive = FUN_11572a20(grpId, pppiVar10[4]); CanActive = (IsActive==0) ? FUN_109a6400(pppiVar10) : 0
- ƒ ActiveItemDatas: iterate 6 slots (iStack_188=6, pppiVar10 += 0x10 then +1 each iter): ItemId=*pppiVar10, Count=pppiVar10[6]; CanRapidBuy = ( materialInfo(FUN_112d6f00(*(item+0x104)))+0x28 == *(item+0x10) )
- ƒ ActiveCommonMaterialDatas: ItemId=pppiVar10[0xc], Count=pppiVar10[0x12], CoinId=pppiVar10[0x18], CoinValue=pppiVar10[0x24], CoinLimit=pppiVar10[0x1e]; material tag desc via CMaterialTagDescInfo paged lookup (offsets 0x20/0x24/0x28/0x30)
- ƒ EquipSkillList emitted from piStack_158 entries where *(entry+4)!='\0' (stride 8)
- ƒ PassiveSkillGroup activation blocks: NeedActiveSkillCount = ppiVar11[-1][1]; PassiveSkillGroupId = *ppiVar11[-5]; sprintf(buf,"+%d", level) for '+N' point display; grp record via FUN_1050ebc0, name ptr at grp+0x2c (fallback &DAT_11d9d32b)
- $ ActiveMoney (currency to activate a suit skill) = SkillData word[0xf]
- $ AddResetCount = word[0xe] (reset charges granted)
- $ ResetCount (group) = groupRecord[1]
- $ ActiveCommonMaterialData: CoinValue = word[0x24], CoinLimit = word[0x1e] (per-coin spend cap), Count = word[0x12]
- $ ActiveItemData: Count = word[6] (required item quantity), up to 6 item slots per skill

### CEquipSuitSkillGroupInfo::LookupRecordById `@0x109a4ae0` — suit-skills
*Paged 2D-array lookup into the CEquipSuitSkillGroupInfo table (suit-skill group definitions). Identical accessor pattern to 0x10970c70.* (conf high)
- ƒ record = *CEquipSuitSkillGroupInfo::GetManager(); fallback FindByName(vtbl=PTR_FUN_11de1860,"CEquipSuitSkillGroupInfo",0); lazy guard DAT_123c8ad8 bit0 -> FUN_109a8080()+register(LAB_11c7b220); fallback &DAT_123c8adc
- ƒ idx = param_1 - record[+0x30]; bounds 0<=idx<record[+0x24]; row=*(record[+0x20]+(idx/record[+0x28])*4); return *(row+(idx%record[+0x28])*4)

### CEquipSuitSkillInfo::LookupRecordById `@0x109a4960` — suit-skills
*Paged 2D-array lookup into the CEquipSuitSkillInfo data table (equipment-suit skill definitions), keyed by global suit-skill id. Same InfoManager singleton + lazy-init + bounds pattern as 0x10970c70.* (conf high)
- ƒ record(words) = *CEquipSuitSkillInfo::GetInfoManager(); fallback CInfoManager::FindByName(vtbl=PTR_FUN_11de1868,"CEquipSuitSkillInfo",0); lazy guard DAT_123c8a9c bit0 -> FUN_109a7fe0()+register(LAB_11c7b280); fallback &DAT_123c8aa0
- ƒ reject param_1==-1
- ƒ guard (param_1!=0 \|\| record[0xc]==0) && record[10]!=0
- ƒ idx = param_1 - record[0xc]  (base id, byte offset 0x30)
- ƒ bounds 0 <= idx < record[9]  (count, byte 0x24)
- ƒ row = *(record[8] + (idx / record[10]) * 4)  (record[8]=rows byte0x20, record[10]=stride byte0x28)
- ƒ return *(row + (idx % record[10]) * 4)

### RegisterSuitSkillMessageHandlers `@0x109a4c60` — suit-skills
*Registers the client<->AppServer message handlers for the equipment-suit-skill system. Each block builds a string key (FUN_100b62c0) and binds it to a handler function via FUN_109a6730.* (conf high)
- ƒ "C2AS_GetCurrentSkillGroupId" -> FUN_109a4e50
- ƒ "C2AS_GetSkillGroupData"      -> FUN_109a4ef0 (BuildSuitSkillGroupDataVO)
- ƒ "C2AS_ActiveSkill"            -> FUN_109a5f40
- ƒ "C2AS_EditSkills"             -> FUN_109a61f0
- ƒ "C2AS_GetResetItemId"         -> FUN_109a6380
- ƒ "C2AS_GetResetRecoveryCount"  -> FUN_109a63c0


## npc  (4)

### CActor::LoadNpcSkillFile `@0x10a51180` — npc-monster-skills
*During entity/actor init, resolves the NPC skill definition file from entity properties: tries "PropertiesInstance.NPCSkillFile", then "Skill", then CInfoRecord::GetModelString("PropertyCustom", ".AISetting.Skill"). Loads the resolved skill file (FUN_11070f80 -> FUN_11071b90) and stores the skill-set handle at param_1+0xbc; also caches a bbox at +0x149c/+0x14a8.* (conf medium)
- ƒ skill file lookup priority: PropertiesInstance.NPCSkillFile > Skill > PropertyCustom.AISetting.Skill
- ƒ on success: handle = FUN_110785d0(param_1); *(param_1+0xbc) = handle
- ƒ ref-counted string cleanup via DAT_123be268 allocator accounting (-0xd - len)

### CBTNode_SkillEffect::LoadConfig `@0x10ab97c0` — npc-monster-skills
*XML config loader for the "SkillEffect" BT node: reads node id (0x11da7300), Weight (float @ param_1+4), and "SkillEffectName". Plays a named skill effect during a skill.* (conf medium)
- ƒ match node name "SkillEffect"; Weight @ param_1+4 (attr 0x11dbb648); read string "SkillEffectName"; valid if Weight>=0

### CBTNode_SkillRotate::LoadConfig `@0x10ab9cd0` — npc-monster-skills
*XML config loader for the "SkillRotate" BT node: makes the monster rotate/aim toward its target during a skill within angle limits. Reads EventName, Weight, NeedRotate(bool), EnableLeftMaxAngle/EnableRightMaxAngle(bool), and LeftMaxAngle/RightMaxAngle/AdditionalAngle (floats).* (conf high)
- ƒ match "SkillRotate"; read string "EventName"; Weight(float) @ param_1+4
- ƒ NeedRotate(bool) @ param_1+0x28
- ƒ EnableLeftMaxAngle(bool) @ param_1+0x29, EnableRightMaxAngle(bool) @ param_1+0x2a
- ƒ LeftMaxAngle(float) @ param_1+0x18, RightMaxAngle(float) @ param_1+0x1c, AdditionalAngle(float) @ param_1+0x20
- ƒ valid if Weight>=0

### CNpcSkillPlay::RegisterNodeParams `@0x10aa5760` — npc-monster-skills
*Registers the behavior-tree node "CNpcSkillPlay" (NPC/monster skill cast/play node) and its parameter schema: StateName(str), Duration, bWaitCombo(bool), bWaitDodge(bool).* (conf high)
- ƒ FUN_1048b080("CNpcSkillPlay","StateName", slot=0, type=1, isBB=0)
- ƒ FUN_1048b080("CNpcSkillPlay","Duration", slot=1, type=2, isBB=0)
- ƒ FUN_1048b080("CNpcSkillPlay","bWaitCombo", slot=2, type=3, isBB=0)
- ƒ FUN_1048b080("CNpcSkillPlay","bWaitDodge", slot=3, type=3, isBB=0)


## flowgraph  (4)

### FGNode_ItemSubmit::GetConfiguration `@10e178a0` — flowgraph
*Flowgraph node definition (lazy static init pattern). Inputs: Enable, Disable. Outputs: OnSubmit, SubmittedItemID, SubmittedItemCount, SubmittedBuffID, Submitter. Describes an item-submission event that yields a buff.* (conf medium)
- ƒ input ports: Enable, Disable (void)
- ƒ output ports: OnSubmit(void), SubmittedItemID(int), SubmittedItemCount(int), SubmittedBuffID(int), Submitter(int)

### FGNode_LogicEntityEvent::GetConfiguration `@10e5a420` — flowgraph
*Flowgraph node. Inputs: enable, disable, triggerOnce(bool), and filter selectors isSpawnerEntityID(int default -1), isCollectPointNetID, isPet, isItemID, isBuffID. Output: OnEvent with spawnerEntityID, collectPointNetID, playerNetID, petNetID, itemID, buffID.* (conf medium)
- ƒ inputs: enable, disable, triggerOnce(bool), isSpawnerEntityID(int,-1), isCollectPointNetID(int), isPet(int), isItemID(int), isBuffID(int)
- ƒ output OnEvent params: spawnerEntityID(int,3-wide?), collectPointNetID, playerNetID, petNetID, itemID, buffID

### FGNode_LogicEntityEventEx::GetConfiguration `@10e741a0` — flowgraph
*Flowgraph node, extended variant of FGNode_LogicEntityEvent adding logicEntityNetID input. Inputs: enable, disable, triggerOnce, logicEntityNetID, isSpawnerEntityID(-1), isCollectPointNetID, isPet, isItemID, isBuffID. Output: OnEvent (spawnerEntityID, collectPointNetID, playerNetID, petNetID, itemID, buffID).* (conf medium)
- ƒ adds logicEntityNetID(int) input over FUN_10e5a420; same isX filters and OnEvent output ports

### FGNode_MonsterBuffEvent::GetConfiguration `@10e5b2d0` — flowgraph
*Flowgraph node. Inputs: enable, disable, triggerOnce(bool), monsterInfoID(int), buffID(int). Output: OnEvent with monsterNetID.* (conf medium)
- ƒ inputs: enable, disable, triggerOnce(bool), monsterInfoID(int), buffID(int)
- ƒ output OnEvent param: monsterNetID(int)


## player  (3)

### CPlayer::ExitVehicleOrDetachWeaponFx `@10f0f750` — player-vehicle-weapon-fx
*Reads model string "VEHICLE_STATE", queries a boolean state (vtable +0x830); when the state flag is clear and weapon object present, detaches weapon_item_attachment / melee_arrow_item / melee_arrow_secrect / bow_rage01_A/B via FUN_10a64020 and, if render proxy active (vtable+0x280), issues a render command (vtable+0x2c0(4,0,0)) and a UI/message dispatch (local_20=0x6e). Vehicle/mount dismount or weapon-fx cleanup.* (conf low)
- ƒ local_5 = (vtable+0x830 result == '\0')  (invert of state query)
- ƒ message struct: local_20=0x6e (msg id), local_1c=local_18=0xffffffff, local_14=FUN_1025b060()

### CPlayer::OnGameObjectEvent `@10ef4f80` — player-event-weapon-effects
*Player game-object event dispatcher keyed on event id *param_2. Handles: 0xc/0xd & 0x26/0x27 (weapon-render enable/disable via render-proxy vtable +0x28/+0x2c; on 0x27 also tears down weapon_item_attachment / melee_arrow_item / melee_arrow_secrect / bow_rage01_A/B attachments); event 1 sub-ids 0x39/0x3a/0x3b (aim/zoom FOV interpolation); event 0 (per-frame update: caches root transform, position tracking, network position sync); event 0x1e (cleanup of aux object param_1[0x714]); event 0x24 (calls param_1 vtable +0x44). DAT_1202e818 = global player/game context.* (conf medium)
- ƒ event 1 / sub 0x39: zoom time arg = (int)((*(float*)(DAT_120286b8+0x450) - *(float*)(DAT_120286b8+0x454)) * DAT_11de9a44)  [DAT_11de9a44 ~= 100.0f]; pushes state 0x3b
- ƒ event 0 flag test on piVar1[1] (event flags): if((flags & 4)!=0 && (flags & 0x1002000)==0){ param_1[0x33 byte] = (flags & 0x1c000)!=0; copy root transform (4 ints via vtable+0xb4) into param_1[0x4db..0x4e2] and mirror into [0x591..0x594]; if(vtable+0x1b0 true) mirror [0x591..0x594] into [0x589..0x590] } gated by (param_1[0x4d9]==0 \|\| (byte param_1[0x4da]&1)==0)
- ƒ event 0: if((flags & 0x10000)==0 && byte@(param_1+0x1c9a)) call vtable+0x90
- ƒ event 0 movement threshold: if( DAT_11cbf0b4 < (px-x)^2+(py-y)^2+(pz-z)^2 ) where last-pos cached at param_1[0x8df],[0x8e0],[0x8e1]; on exceed -> update cache and push network position (FUN_10b640b0 remote / FUN_10b63ff0 local via param_1[2] entity id, gated by DAT_12025178)

### Tlv::PlayerSceneBrief_DebugFormat `@0x102a5490` — player-schema
*TDR DebugFormat for a large player scene/appearance broadcast struct: iNetID, dwSessionID, szName, bGender, stPose, avatar/health/faction/weapon/state, equipment array [astEquip] (max 0x28=40), raw attribute blob [szAttr] (max 0x5000), raw buff blob [szBuff] (max 0x2800), projectile ids, entity GUID, state bitmasks dwState1-4/AGState/SubState, guild, star level, facial info (0x2e entries), vehicle/growHigh fields.* (conf high)
- ƒ offsets: +0 iNetID(i32), +4 dwSessionID(u32), +8.. szName, +0x28 bGender(u8), stPose sub-struct, +0x45 bAvatarSetID(u8), +0x46 fHealth(float), +0x4a fHealthRecover(float), +0x4e iFaction(i32), +0x52 iWeapon(i32), +0x56 iState(i32), +0x5a bHasTeam(u8), +0x5b bTeamHasPwd(u8), +0x5c dwRandSeed(u32), +0x60 wEquipCount(u16, max 40)
- ƒ astEquip[] via FUN_10274670; wAttrSize(u16 @ +0x422, max 0x5000) then raw bytes @ +0x424; wBuffSize(u16 @ +0x5424... shown as param_1+0x1509 word = +0x5424) then raw buff bytes @ +0x5426 (max 0x2800)
- ƒ iProjIdCount(i32 @ +0x7c26, max 0x14) astProjIds @ +0x7c2a; ullParentEntityGUID(u64 @ +0x7cca); bType(u8 @ +0x7cd2); dwState1..4 @ +0x7cd3/+0x7cd7/+0x7cdb/+0x7cdf; dwAGState @ +0x7ce3; dwSubState @ +0x7ce7; facialInfo[0x2e] i16 @ +0x7dc3; iVehicleID @ +0x7e1f; iGrowHighDay @ +0x7e23; iGrowHeight @ +0x7e27


## item  (3)

### CItemBuffRewardEntry::ParseConfig `@0x116d28d0` — item/buffs
*Config loader for an item-grant entry that can also apply a buff. Reads ItemID, ItemAmountMin/Max, DeleteWhenFull flag, BuffID, and BindType.* (conf medium)
- ƒ param_1[0] = ItemID; param_1[1] = ItemAmountMin; param_1[2] = ItemAmountMax.
- ƒ *(bool*)(param_1+3) = (DeleteWhenFull != 0).
- ƒ param_1[4] = BuffID.
- ƒ BindType (uint): only stored to param_1[5] if value < 5 (valid range 0..4).
- $ ItemAmountMin / ItemAmountMax = quantity range of item granted.

### LoadCommercializeWeaponConfig `@0x10b57fe0` — item-visuals (tangential)
*Loads /Libs/common/commercializeWeapon.xml, reading per-entry weaponID, strState, strAGEventName, (0x11dca14c) and effectID. Config for cosmetic 'commercialized' weapon state effects. (Function aborts via FUN_10c3d580 mid-parse in this build.)* (conf low)
- ƒ fields: weaponID(int), strState(str), strAGEventName(str), field 0x11dca14c(int), effectID(int)

### TlvItemBlob::PrintText `@0x103af940` — item
*TDR serializer for a generic item record with opaque buffer {ullItemId, dwItemType, dwItemCount, bBindType, iLen, szBuffer[]}.* (conf high)
- ƒ ullItemId (u64) @0x0; dwItemType @0x8; dwItemCount @0xc; bBindType (u8) @0x10; iLen @0x11; CAP <0->-6, >0x800->-7 (szBuffer byte[] @0x15 max 0x800=2048, ' 0x%02x')
- $ Item opaque buffer max 2048 bytes


## input  (3)

### CKeymapPanel::BuildKeymapSettingVO `@0x10838870` — input-bindings
*Builds the KEYMAPSETTING VO: maps every bindable action to its current key. Combat/movement bindings (melee1/2, move*, dodge, holster, defense, reload, creep, focus, interact, crouch), rage_1/rage_2/rage_3 (via FUN_10839e50), ammo (bulletf1-5), item shortcuts (MhItem_0-9), and ~40 UI-panel toggles (ui_*). Then reads 25 nData fields (mouse/extended bindings) from FUN_108342e0() and emits keyMapVo.* (conf high)
- ƒ each key value = FUN_10839d50() (keyboard binding) except rage_1/2/3 = FUN_10839e50() (separate binding source)
- ƒ nData0..nData57 default 0xffffffff; populated by (FUN_108342e0()) vtbl+0x14 (25 out-params) — extended/mouse bindings
- ƒ ui_* actions include ui_equipSkill, ui_manufacture, ui_WeaponTalent, ui_petlist, ui_Skillvideo, ui_ActionPanel

### CPlayerInput::RegisterActionMap `@10f390b0` — input-actionmap-rage
*Registers the player's full action-name table via FUN_1083ab70(name,len): movement/combat verbs (holster, interact, defense, reload, dodge, crouch, creep) plus rage_1/rage_2/rage_3/rage_transmission and the full xi_switch_* gamepad button set. Initializes 0x25(37) history/binding slots (copying default DAT_11cc06d8), then iterates 0x24(36) action-string entries binding each via FUN_10f40c80. Finally re-binds 3 rage action-map handlers (offsets 0x3b0/0x3b4/0x3b8) via FUN_10f3c450/FUN_10f3bbc0.* (conf medium)
- ƒ slot init: puVar3 walks param_1+0x250, count 0x25 (37); each writes DAT_11cc06d8 at [-0x4a],[-0x25],[0]
- ƒ action loop: 0x24 (36) iterations over string array at param_1+0x380 (local_c), binding via FUN_10f40c80
- ƒ rage handlers: for slot in {0x3b0,0x3b4,0x3b8}: h=FUN_10f3c450(param+slot); if(h && byte@(h+0xde)==0) FUN_10f3bbc0(param+slot, *(h+0xc))
- ƒ clear param_1+0x8fc = 0

### CRageActionMap::LoadKeyBindings `@10f3b700` — input-rage-keymap
*Loads Libs\common\RageActionMap.xml, gets the first (index 0) action node, and reads keyAction1..keyAction4 string attributes, resolving each into a key/action id via FUN_10fbfde0 and storing into local_1c/local_20/local_24/local_28. Reads an unnamed 0x11cd68d8 attribute first. Ends with FUN_10c3d580(0x14) construction of a 0x14-byte binding record.* (conf medium)
- ƒ load path literal: "Libs\\common\\RageActionMap.xml"
- ƒ for each of keyAction1..4: if(node.has(name)) { node.get(name,&str); id=FUN_10fbfde0(str); store } -> local_10 holds resolved id, copied to local_20/24/28 for actions 2/3/4
- ƒ record alloc size = 0x14 bytes (FUN_10c3d580(0x14))


## debug  (3)

### CCodeCheckpointDebugMgr::Constructor `@10b6a6d0` — debug
*Constructor for the feature-tester code-coverage debug manager. Sets vtable PTR_FUN_11cc83fc, zeroes lists, initializes cvars/commands: 'ft_debug_checkpoint_search' (cmd->FUN_10b6b9a0), 'ft_debug_ccoverage', 'ft_debug_ccoverage_rate', 'ft_debug_ccoverage_maxlines', filter_maxcount/mincount; loads '../USER/CodeCheckpointList.txt'.* (conf high)
- ƒ param_1[5] (ft_debug_ccoverage_rate default) = 0x3d4ccccd = 0.05f
- ƒ param_1[6] (ccoverage_maxlines default) = 10
- ƒ param_1[4],[7],[8] (ccoverage / filter_maxcount / filter_mincount defaults) = 0

### RegisterMonsterDebugCommands `@10c33050` — debug
*Registers debug console commands via cvar-mgr vtable+0x7c: 'setfaction'->FUN_10c33970, 'ChangeMonster'->FUN_10c362a0, 'g_playmonsterskill'->FUN_10c36430.* (conf high)

### UnregisterGameDebugCommands `@10c330b0` — debug
*Removes (vtable+0x80) a large list of debug console commands on shutdown, including buff cheats addbuffP/delbuffP/getbuffP, g_playmonsterskill, ChangeMonster, PlayBuffFX, CtrlM, SpawnItem, buyammo, buynpcshopitem/sellnpcshopitem, manuprod, lmanuskl, lmanuingd, catcs, warninglevel.* (conf high)


## anim  (3)

### CAnimEventParser::ParseNoteTrackCommand `@10f6bea0` — anim-event-fx
*Parses an animation note-track / event string (from param_2+0xc). sscanf splits it into first token (keyword) and remaining value. Dispatches on keyword: EFFECT -> spawn effect at "Bip01 Spine" bone (via char proxy +0x1e8, scale 0x3f800000=1.0); SKILLEFFECT -> spawn skill effect on the local player (checks +0x228 local-player flag); ANIMSPEED -> set animation playback speed = atof(value)*DAT_11de9a30 via FUN_10fd9120; OnLeave -> reset anim speed to 100 (if current !=100).* (conf medium)
- ƒ token split: sscanf(str,"%[^ ]",keyword); sscanf(str,"%*s%s",value)
- ƒ EFFECT: charProxy.vtable+0x1e8( value, "Bip01 Spine", &pos{0,0,0}, &rot{0,0,0}, 0x3f800000, 1,1,1,0,0 )  [scale=1.0f]
- ƒ ANIMSPEED: speed = (float)atof(value) * DAT_11de9a30; FUN_10fd9120((int)speed)  [DAT_11de9a30 ~= 100.0f, so 'ANIMSPEED 1.5' -> 150]
- ƒ OnLeave: if(FUN_10fd9110()!=100) FUN_10fd9120(100)  (restore default speed 100)

### CPlayerAnimGraph::SetupCombatTransitions_TypeA `@10f781b0` — anim-fsm-weapon
*Builds the animation state-transition graph for the current weapon class (read from actor+0x15b4). Case weapon==4: registers RageRushLow transition (PLLocomotion->RageRushLow via COMBAT_PL04_RAGERUSH_START) with callback FUN_10f73a40. Case weapon==5 (bowgun/gun): registers NoBullet (COMBAT_PL05_NOBULLET), ChangeBullet (COMBAT_PL05_CHANGEBULLET), and RageAim (COMBAT_PL05_RAGE_PRESHOOT) transitions between PLLocomotion/PLCombat/PLCharging animsets. Registers per-frame callback FUN_10f74a60.* (conf medium)
- ƒ weaponType = *(actor+0x15b4); if==0 return
- ƒ state-array index: (weaponType+0x2f)*0xc byte offset into param_1 (per-weapon transition table slot)
- ƒ case 4 -> RageRush transition; case 5 -> NoBullet/ChangeBullet/RageAim(preshoot) transitions

### CPlayerAnimGraph::SetupCombatTransitions_TypeB `@10f7a080` — anim-fsm-weapon
*Second variant of the weapon anim-transition setup (weaponType@0x15b4, valid range 1..0xc). Case weapon==1: registers UnholsteredIdle transition via COMBAT_UNHOLSTER with callback FUN_10f6b660. Case weapon==5: registers the same NoBullet/ChangeBullet/RageAim(preshoot) ranged transitions as f781b0 but with callback wrapper FUN_10fb6bf0. Registers per-frame callback FUN_10f74a60.* (conf medium)
- ƒ weaponType = *(actor+0x15b4); valid iff (weaponType-1) unsigned <= 0xb (1..12)
- ƒ state slot: index = weaponType*3 + 0x8c; byte offset = index*4 into param_1
- ƒ case 1 -> COMBAT_UNHOLSTER; case 5 -> COMBAT_PL05 NoBullet/ChangeBullet/RagePreshoot


## gathering  (2)

### CLootEntityInfo::ParseConfig `@0x117bdb00` — gathering/loot
*Config loader for a loot/gather entity: EntityClass string -> +0x18, LootSize (float) -> +0x30, LootSkillID (uint) -> +0x34, LifeTime (float) -> +0x38. Chains FUN_117bd8b0.* (conf medium)
- ƒ param_1+0x18 = EntityClass; param_1+0x30 = LootSize (float, default = existing value); param_1+0x34 = LootSkillID (uint); param_1+0x38 = LifeTime (float).
- $ LifeTime = despawn timer of the loot entity.

### CResourceGatherInfo::ParseConfig `@0x117175c0` — gathering/skills
*Config loader for a gatherable-resource type. Reads ResourceType index (bound <20), ResourceName, DefaultSkillID, MainType, MidType, SubType, IgnoreTool flag, CollectPriority; writes into an indexed record array (first-write-wins).* (conf medium)
- ƒ ResourceType (uVar3) must be < 0x14 (20) or record is skipped.
- ƒ Record base = param_1 + ResourceType*0x1c (28-byte stride).
- ƒ Written only if *(base+0x48)==0 (empty slot): base+0x48=DefaultSkillID, base+0x3c=MainType, base+0x40=MidType, base+0x44=SubType, base+0x4c=CollectPriority (default = ResourceType+1), base+0x50=(bool)IgnoreTool.


## misc  (2)

### GetEnumId_StorageBox `@0x117e6cb0` — misc
*Returns the registered enum id for 'StorageBox' (DAT_12394854) into *param_1; one-time register via FUN_1024f010.* (conf medium)

### GetEnumId_StorageBoxConst `@0x117e6ce0` — misc
*Returns the registered enum id for 'StorageBoxConst' (DAT_1239485c) into *param_1.* (conf medium)


## reward  (2)

### CLevelRewardInfo::ParseConfig `@0x1183fb70` — reward/buffs
*Config loader for a per-level reward record: LEVEL_ID, a second field, an (ITEM_ID, ITEM_COUNT) pair pushed into a vector, and a (BUFF_ID, BUFF_COUNT) -> BUFF_ITEM_ID mapping.* (conf medium)
- ƒ param_1+0x10 = LEVEL_ID; param_1+0x14 = second field (DAT_11d4ed68 key, unknown).
- ƒ If ITEM_ID>0 and ITEM_COUNT>0: push {ITEM_ID, ITEM_COUNT} (8-byte pair) into vector at param_1+0x1c (advance +8).
- ƒ If BUFF_ID>0 and BUFF_COUNT>0 and BUFF_ITEM_ID>0: build key {BUFF_ID, BUFF_COUNT} (FUN_115b6a40), map-insert (FUN_104ef0a0) value = BUFF_ITEM_ID.
- $ ITEM_COUNT = item quantity granted; BUFF_COUNT = buff stack/count.

### RewardContentFactory::CreateByType `@0x1181c060` — reward/content
*Factory that dispatches on a content-type string and allocates the matching effect object (sizes indicate the object layout). Covers reward and effect content including AddBuff.* (conf medium)
- ƒ ItemPrize -> alloc 0xc; ItemReclaim -> 0xc; GoldPrize -> 0xc; GoldReclaim -> 0xc; AddBuff -> 8; Teleport -> 0x40; PlayCutScene -> 0x1c; SendFGEvent -> 0x34.
- $ ItemPrize/ItemReclaim/GoldPrize/GoldReclaim are the currency/item reward content types (12-byte objects).


## titles  (2)

### MHUI::BuildTitleListVO `@108d7da0` — titles/equip-buff
*Scaleform VO builder for the achievement-title list. Emits a per-title VO (TITLE_VO_CLASS_NAME) with bcarry(equipped), titleId, name, description, bNull, bGetInHand(owned), curproperty, detail, and nEquipBuffID (the equip buff a title grants). Iterates owned titles via FUN_11442b40/FUN_108d1a20; the currently-carried title (FUN_11442b60/FUN_1025b060) is emitted first with bcarry=1, then a null/none entry, then all other owned titles.* (conf medium)
- ƒ title record fields: +0x10 titleId, +0x14 name, +0x90 description, +0x98 buffid (see 108d8370), +0xac curproperty, +0xc0 detail
- ƒ bcarry = (record == currentCarriedTitleId); bGetInHand(owned) = FUN_10a03d10(record)
- ƒ nEquipBuffID = piStack_7c (the equip-buff pointer/id associated with the title view)
- ƒ owned-title iteration count = uStack_c8 from FUN_11442b40; skip current-carried when re-listing

### MHUI::BuildTitlePropertyListVO `@108d8370` — titles/equip-buff
*Scaleform VO builder for the property/buff list of owned titles (TITLEPROPERTY_VO_CLASS_NAME -> propertyList). For each owned title (FUN_11442b40 count, FUN_108d1a20 record, FUN_10a03d10 owned-check) emits name, description, buffid=*(rec+0x98), propertyType=*(rec+0x1c).* (conf medium)
- ƒ per owned title: buffid = *(rec+0x98), propertyType = *(rec+0x1c), name = rec+0xac, description = rec+0xc0
- ƒ iterate i in [0, FUN_11442b40()) filtering FUN_10a03d10(record)!=0 (owned)


## passive  (2)

### BuildEquipPassiveSkillDataVO_A `@0x109ef110` — passive-skills
*Builds an "mh.model.equip.EquipPassiveSkillData" array for an equipment item's passive skills. Decodes a TDR-style source struct at param_4 (presence-flag byte checks &0x8f ==3/4), resolves each passive-skill-group record and emits {passiveSkillGroupID, passiveSkillValue, passiveSkillName}. Has two branches: direct equip (iStack_cc==-1 -> FUN_10855a60) or pet/mount-sourced (FUN_113f9bb0/FUN_116698c0/FUN_11673530).* (conf medium)
- ƒ TDR field extract idiom: t=*(src+off)&0x8f; if (t==3\|\|t==4) value=*(src+off+4) else value=0xdeadbeaf (sentinel = missing)
- ƒ reads src offsets: +0x4/+0x8 (group id A, local_d0), +0x34/+0x38 (iStack_cc), +0x4c/+0x50 (iStack_c8), +0x60..+0x88 (nested VO writer objects)
- ƒ if iStack_cc == -1: equip = FUN_10855a60(local_d0); passive list = [*(equip+0x198) .. *(equip+0x19c)) stride 3 words
- ƒ per entry: grp = FUN_1050ebc0(*puVar5); passiveSkillGroupID = *(grp+0x10); passiveSkillValue = *(grp+0x24) (+ accumulator); passiveSkillName from grp string; source per-entry level = puVar5[1]
- ƒ else branch: guarded by game-context (DAT_1202e818+0xd0->+0x90 vtbl+0xb4, record+0x2d1c!=0), FUN_113f9bb0(id,sub) && FUN_116698c0() -> local_d0=FUN_11669730(); FUN_11673530(); goto equip branch
- ƒ array key "arrayPassiveSkillData"

### BuildEquipPassiveSkillDataVO_B `@0x109f4f80` — passive-skills
*Variant of 0x109ef110 (param_5==6 call kind). Emits TWO arrayPassiveSkillData lists of EquipPassiveSkillData {passiveSkillGroupID, passiveSkillValue, passiveSkillName}: one from a pet/mount equip source (FUN_116734c0 -> list at +0x66/+0x67 words) and one from an inline list (piStack_cc[0]..[1] stride 3).* (conf medium)
- ƒ same TDR extract idiom (&0x8f==3\|\|4) for src offsets +0x4/+0x8, +0x1c/+0x20, +0x34/+0x38, +0x4c/+0x50
- ƒ gated by game-context record+0x2d1c!=0 && FUN_113f9bb0(local_c8,puStack_bc) && FUN_116698c0()
- ƒ source obj = FUN_116734c0(); passive list #1 = [obj[0x66] .. obj[0x67]) stride 3 words; equip = FUN_10855a60(piStack_cc); equip passive base = equip+0x198
- ƒ per entry: grp = FUN_1050ebc0(*puVar5); passiveSkillGroupID = *(grp+0x10); passiveSkillName via FUN_108199e0 buffer; passiveSkillValue = accumulator+ptr
- ƒ list #2: for (p=*piStack_cc; p!=piStack_cc[1]; p+=3) { grp=FUN_1050ebc0(*p); emit }
- ƒ both flushed with key "arrayPassiveSkillData"


## platform  (1)

### Sys::BuildWindowsVersionString `@0x100f74f0` — platform-diag
*Microsoft sample-code 'GetOSDisplayString': builds a human-readable Windows version/edition banner via GetVersionExA/GetNativeSystemInfo/GetProductInfo. Diagnostic only.* (conf high)


## behavior  (1)

### BehaviorTree::RegisterBlackboardKeys `@0x10258da0` — behavior-tree
*Registers/caches behavior-tree blackboard variable keys (name->id via FUN_113168d0, stored into struct offsets). Includes combat-relevant keys: HitSkillId, HitDamageType, AbnormalCauserId, Input_AbnormalType, Sense_Master/TargetAbnormalType, PartBrokenLevel, Damage{Fire,Water,Electric,Dragon,Ice}Attr, HitSkillResID/ID/Level, Cooperation_Attack_TargetId, plus NpcAnimationName1..8. Maps skill/damage/abnormal data into the AI blackboard.* (conf high)
- ƒ each key resolved and stored at fixed offsets, e.g. HitPart@+0x228, HitSkillId@+0x22c, HitDamageHealth@+0x230, HitDamageType@+0x238, HitAttrDmgType@+0x23c, HitPos@+0x240, ShooterId@+0x248, Input_AbnormalType@+0x260, Sense_MasterAbnormalType@+0x264, Sense_TargetAbnormalType@+0x268, PartBrokenLevel@+0x26c, DamageCauserId@+0x270, LastAbnormalCauserId@+0x274, AbnormalCauserId@+0x278, Health@+0x280
- ƒ Damage element attrs: DamageFireAttr@+0x2d4, Water@+0x2d8, Electric@+0x2dc, Dragon@+0x2e0, Ice@+0x2e4; Cooperation_Attack_TargetId@+0x2e8
- ƒ HitSkillResID@+0x2c4, HitSkillID@+0x2c8, HitSkillLevel@+0x2cc; unresolved keys default 0xffffffff


## network  (1)

### Tlv::PingDelayInfo_DebugFormat `@0x10289b70` — network-schema
*TDR DebugFormat for a network ping/latency struct: dwPingID(u32 @ +0), wDelay(u16 @ +4), wCurDelay(u16 @ +6), wAverageDelay(u16 @ +8), chServerFps(i8 @ +0xa), dwServerTm(u32 @ +0xb). Not skill-related.* (conf high)
- ƒ struct: +0 dwPingID(u32), +4 wDelay(u16), +6 wCurDelay(u16), +8 wAverageDelay(u16), +0xa chServerFps(i8), +0xb dwServerTm(u32)


## instance  (1)

### Tlv::InstanceSceneInfo_DebugFormat `@0x102afba0` — instance-schema
*TDR DebugFormat for an instance/dungeon scene-info struct: iCreatePlayerMaxLv, iStartTime, remain-seconds (normal/vip/item), max-limits, iPlayerNum, iIsHunterOfficer, region weather array [astRegionWeather] (max 0x19=25), cross-server/warning/hunting-mode flags, cat-car use info, rules info, paid items [astPaidItems] (max 100), paid buffs [astPaidBuffs] (max 100), iIsBigRand. Instance metadata, largely not skill-related.* (conf high)
- ƒ offsets: +0 iCreatePlayerMaxLv, +4 iStartTime, +8 iRemainSeconds, +0xc iVipRemainSeconds, +0x10 iItemRemainSeconds, +0x14 iNormalMaxLimit, +0x18 iVipMaxLimit, +0x1c iItemMaxLimit, +0x20 iPlayerNum, +0x24 iIsHunterOfficer, +0x28 nRegionCount(i16, max 25)
- ƒ flags @ +0x2ff iIsCrossServerInstance, +0x303 iIsWarning, +0x307 iHuntingMode, +0x30b iActHuntingMode; iRulesInfoType @ +0x493
- ƒ iItemDataCount @ +0x9ef (max 100) astPaidItems[]; iBuffDataCount @ +0xd13 (max 100) astPaidBuffs[]; iIsBigRand @ +0x1037
- ƒ astPaidItems/astPaidBuffs share element decoder FUN_102ada60
- $ astPaidItems (max 100) and astPaidBuffs (max 100) are cash-shop/paid item & buff lists inside an instance — buffs purchasable for the dungeon session


## vehicle  (1)

### CVehicleMovementSound::Init `@110ce4f0` — vehicle-audio (NOT skill)
*Stock/vehicle CryEngine plumbing: parses vehicle 'SoundParams'/'Animations' config (engine, engineIgnitionTime, rpmPitchSpeed, runSoundDelay, maxSlipSpeed, engineSoundPosition) and builds sound event-group name strings ('sounds/vehicles:', ':start', ':stop', ':gear', ':slip', ':boost', ':acceleration', etc.). Also reads a 'Boost' block (endurance/regeneration/strength/skillID at param_1+0x2b..0x2e) and 'Eject'/'AirDamp'/'ForceFeedback'.* (conf medium)
- ƒ engineIgnitionTime default 0x3fcccccd = 1.6f if attribute absent
- ƒ Eject: if maxTippingAngle==0 => *(param_1+0xe3) = -0x40733333 (=-3.8f approx); else cos(maxTippingAngle * DAT_11de98c0) where DAT_11de98c0 = deg->rad (pi/180)
- ƒ runSoundDelay: if >0, *(param_1+0xf) = runSoundDelay + DAT_11de98e8
- ƒ Boost block reads endurance/regeneration/strength floats and skillID int into param_1+0x2b..0x2e


## loot  (1)

### DropTableEntry::Read `@11a2d0b0` — loot-drops-buff
*Config deserializer for a loot/drop table entry with an optional buff. groupId -> owner+0x10; the 5 remaining ints (itemId, minCount, maxCount, dropProbability, BuffID) packed into a 0x14-byte record appended to vector at owner+0x18 (grow-insert via FUN_11a2d630).* (conf high)
- ƒ record element size = 0x14 bytes (5 int32: itemId, minCount, maxCount, dropProbability, BuffID)
- ƒ groupId -> *(owner+0x10)
- $ minCount / maxCount (drop quantity range)
- $ dropProbability (drop chance; stored as int — likely per-mille or percent, exact denominator not in this function)


## rewards  (1)

### RewardBuffEntry::Read `@11a3a630` — rewards-buff
*Config deserializer for a reward entry (item + buff with a probability) into a fixed 5-dword struct (param_1 is the record, not a vector owner). Writes each field to a fixed member offset.* (conf high)
- ƒ ItemID -> record[0]; ItemAmount -> record[1]; BuffID -> record[2]; BuffItem -> record[3]; Probability -> record[4]
- ƒ no vector append — writes directly into caller-provided struct
- $ ItemAmount (reward quantity)
- $ Probability (reward/proc chance; int, denominator not resolved here)


## netpacket  (1)

### TlvEntitySpawnInfo::PrintText `@0x102b1930` — netpacket-serialization
*TDR text-dump serializer for a generic CE entity spawn/sync struct. Emits fields to a text buffer (debug/log formatter), returns 0 on success or a negative TDR error.* (conf high)
- ƒ Field layout (offsets into param_1, byte offsets): dwNetID @0x0; szEntityName @0x4 (32B); szClassName @0x24 (via param_1+9); stPose sub-struct via TdrDebugFormat_ByteThenFloatSub; iSubTypeID @0x60 (param_1[0x18]); bSync2CE @0x64 (u8); chSpawnType @0x65 (i8, '0x%02x'); iBone @0x66; dwHolder @0x6a; dwOwner @0x6e; iFaction @0x72; iRegionId @0x76; iDataLen @0x7a; szUsrData[] @0x7e
- ƒ CAP: iDataLen<0 -> return -6; iDataLen>100 -> return -7 (szUsrData max 100 bytes)
- ƒ ullEntGUID (u64 '%I64u') @0xe2/0xe6; szPropertityFile @0xea; nMHSpawnType (i16) @0x12a; szBTState @0x12c (param_1+0x4b); stBBVars via TdrDebugFormat_VarsList16
- ƒ wBuffSize (u16) @0xb6e; CAP >0x2800 -> -7 (szBuff max 0x2800=10240 bytes) @0xb70
- ƒ dwParentID @0x3370 (param_1[0xcdc]); ullParentGUID (u64) @0x3374/0x3378 (param_1[0xcdd/0xcde])


## companion  (1)

### TlvCatCompanionItem::PrintText `@0x103be970` — companion
*TDR text dump of a cat/companion item {iId, wCount, bLevel, bBuffs, dwCatLastTm}.* (conf medium)
- ƒ iId @0x0; wCount (u16) @0x4; bLevel (u8) @0x6; bBuffs (u8 '0x%02x') @0x7; dwCatLastTm @0x8 (param_1[2])


## anti  (1)

### TlvSignatureBlob::PrintText `@0x1040a880` — anti-cheat
*TDR serializer for a signed-payload/signature block {nSigVer, dwSigTime, nSigLen, szSigBuff[]}.* (conf high)
- ƒ nSigVer (i16) @0x0; dwSigTime @0x4 (param_1+1); nSigLen (i16) @0x6 (param_1[3]); CAP <0->-6, >0x400->-7 (szSigBuff byte[] @0x8 max 0x400=1024)
- $ Signature buffer max 1024 bytes


## manufacture  (1)

### CManufactureSkillPanel::RegisterASCallbacks `@0x10813de0` — manufacture-skill-ui
*Registers the full set of ActionScript<->C event handlers for the Manufacture/Study (weapon-skill crafting/talent study) panel and wires them onto the panel object param_1. Then does one-time init of the manufacture controller (FUN_10d17440/FUN_10d17870/FUN_108163a0).* (conf medium)
- ƒ handler map (event -> C fn via FUN_100b62c0 make-delegate + FUN_104d0ee0/10815080 add-listener): RequestManufactureStudyViewData->FUN_10814230, ManufactureStudy->FUN_10814270, ManufactureStudyNextLevelSkill->FUN_108142b0, ManufactureTreeListClick->FUN_10814b20, ManufactureMake->FUN_10814b70, ManufactureCancel->LAB_10814c70, RequestManufactureMake->LAB_10814c20, StopIntoneBar->FUN_10814cb0, RequestManufactureViewData->FUN_108142f0, OnClose->FUN_108141f0, CheckUnBind->(anon), C2AS_IsMaking->FUN_10814e60


## economy  (1)

### MHUI::BuildStorageExpandCostVO `@108a7660` — economy/storage-expand
*Scaleform VO builder for bag/storage-expansion cost lines. Gated arg count==2. Requires local player character with char+0x260e0!=0. Storage kind (piVar6) must be 2 (bag) or 0xa (warehouse/storage). Computes number of expansion lines and, per line, the item+credit cost, then emits EXPAND_COST_VO_CLASSNAME rows (nItemID, nItemCost, nCreditCost, strIconPath) into lineCostList, plus nStorageExpandFunc.* (conf medium)
- ƒ gate: argCount==2 AND storageKind in {2, 0xa} AND FUN_113f9390() != 0
- ƒ lineCount = FUN_113f9390() / FUN_11522b10(storageKind)  (total capacity units / units-per-line)
- ƒ per line L (1-based), offset = (L-1)*unitsPerLine: FUN_115226e0(kind, offset); cost table = (kind==2 ? FUN_108ad830(L)+0x10 : kind==0xa ? FUN_108aca50(L)+0x18)
- ƒ cost fields: nItemID=cost[0], nItemCost=cost[1], nCreditCost=cost[2]; strIconPath from FUN_10254130(nItemID)+0xb4
- ƒ nStorageExpandFunc = *(FUN_11727ff0()+0x54)
- $ Per storage-expansion line: nItemCost (quantity of item nItemID) AND/OR nCreditCost (credits/currency). Amounts are data-driven from FUN_108ad830 (bag) / FUN_108aca50 (storage) cost tables.
- $ unitsPerLine = FUN_11522b10(storageKind) (grid slots granted per expansion purchase).


## pet stats  (1)

### CPetModel::BuildPetDetailVO `@108e7830` — pet stats / pet skills
*Client UI builder for a single pet's detail sheet. Calls FUN_112f64e0(petIndex, ...) to fill a local struct, then pushes ~50 named fields to the AS3 pet VO. If petType(local_f4)==0 (combat pet) it additionally emits full combat stats.* (conf high)
- ƒ Guard: if the pet-battle system (DAT_1202e818+0xd0->+0x90 vtbl+0xb4, then +0x2cd8 vtbl+0x54) reports active/in-battle, skip the fill (goto LAB_108e78bd only when not in battle path).
- ƒ FUN_112f64e0(param_2=petIndex-hi, param_1=lo, &local_134) fills local struct; only builds if local_134 (petid) != 0.
- ƒ Base fields: petType=local_f4, status=local_124, level=local_118, petindex=local_130, petid=local_134, intelligence=local_104, proficientcy=local_f8, character=local_fc, quality=local_100, exp_max=local_110, intimacy=local_10c, intimacyvalue=local_108, fluteskillEquipped=local_64, fluteskilltotal=local_60, normalskillEquipped=local_5c, normalskilltotal=local_58, skillpointleft=local_68, traintime=local_50.
- ƒ If local_f4(petType)==0: emit fightwill/fightwill_max, attacktype, attacktrend, attack/attack_max, hp/hp_max, defense/defense_max, fireattack/waterattack/thunderattack/iceattack/dragonattack/poisonattack/sleepyattack/paralysisattack, fireendure/waterendure/thunderendure/iceendure/dragonendure, lucklevel(local_d4).


## cat  (1)

### CCatCuisineModel::GetCatCuisineResultInfo `@108fb670` — cat-cuisine food buffs
*AS3 handler '_getCatCuisineResultInfo' (also binds '_hideWindow'). Reads the cat-cuisine result object (game ctx +0xd0->+0x90 vtbl+0xb4, then +0x2d60) to extract an arrayBuffer of active food-buffer IDs, then for each ID builds a mh.model.CatFood.CatFoodBufferData {bufferName, bufferDesc, bufferID} and also emits catCuisineName.* (conf medium)
- ƒ Result object at *(iVar2+0x2d60); iVar3 = vtbl+0x10 -> count; vtbl+0x14, vtbl+0x18 (uVar4 & 0xff flag), vtbl+0x1c -> fill buffer via FUN_10a04620/FUN_10a04770(count).
- ƒ Guarded by 0 < iVar3 (has buffers). Buffer copied via memcpy of (iStack_64 - ppiStack_68) bytes; element size 4 (>>2 word count).
- ƒ Per buffer id: iVar3 = FUN_104fd710(id); if non-zero -> bufferName = *(id_rec+0x28); bufferDesc from FUN_100e5b60; bufferID = iVar2 (index).
- ƒ catCuisineName resolved via FUN_108d15f0(uStack_e8) when non-zero.


## guild building level  (1)

### CGuildBuildingModel::BuildLevelUpData `@1091cec0` — guild building level-up (skill unlocks)
*Builds the guild-building level-up VO: current building level (by building type), current vs next level bonuses (team member cap, gold cap, storehouse), gold cost to level up, and for type 5 (skill building) the current/next unlocked guild-skill lists. Dispatches 'levelMessageUpdate'.* (conf medium)
- ƒ building type = local_f0 (from param_4[8] if type-tagged, else 0xdeadbeaf/-0x21524151).
- ƒ current building level by type (switch): case 2->*(byte)(guild+0x221), 3->+0x222, 4->+0x223, 5->+0x224 (i.e. the four building levels are packed bytes at guild+0x221..0x224).
- ƒ nextLevel = currentLevel+1, capped at 5 (if piVar7 > 5 -> 5).
- ƒ config records via CGuildBuildingLevelUpInfo::FindInfoByTypeLevel(type, level): addTeamMember=*(rec+0x24), addGoldMax=*(rec+0x28), addStorehouse=*(rec+0x2c); next-level rec: guildLevel=*(rec+0x1c), goldNeed=*(rec+0x20), nextTeamMember=+0x24, nextGoldMax=+0x28, nextStorehouse=+0x2c. If no next rec: nextLevel=9 (sentinel 'max').
- ƒ CurrentGuildLevel=*(guildState+0x44); CurrentGuildFund=FUN_114a8610().
- ƒ type-5 path: builds currentSkillUnlock / nextSkilUnlock arrays by iterating FUN_1091a0a0() guild skills, emitting each skill's item info when *(skillRec+0x24)==currentLevel (unlocked-at) or ==nextLevel.
- ƒ can-level flag: FUN_114f7010() gates whether the level-up button is enabled.
- $ goldNeed = *(nextLevelRec+0x20) (guild fund required to level the building).
- $ CurrentGuildFund = current guild fund (FUN_114a8610).


## arena  (1)

### CArenaScoreDebugModel::BuildTransformStatsVO `@10929bf0` — arena/score animation timing (debug telemetry)
*Builds a debug/telemetry VO of score-transform animation timings (icon play times, base/bill/mvp/achieve score-transform counts & durations, delays). Not a skill/buff function.* (conf high)
- ƒ Each field read via FUN_117423e0() (select) + a specific accessor FUN_1174xxxx() (getter): totalIconPlayTime, totalIconCountsPlayTime, averageIconPlayTime, scoreToScoreTransformDelay/Counts, base/bill/mvp ScoreTransformTotalTime & Counts, zeroScoreDelayTime, achieveScoreTransformCounts/AverageTime, iconFirstPlayDelayTime; testDataFlag=DAT_123bbb3c.


## battle  (1)

### CBattleTeamModel::BuildMemberArrayVO `@1093de10` — battle-team roster (not skills)
*Builds the battle-team (_teamInfo) roster: a _memberArray of BTMemberVo_CLASS_NAME entries (name, level, HR level, note, leader/online flags, index, dayleft, score, IsSelf) plus team totals (member num/online num, name, score, average level, PvP effectiveness, personal/PvE/PvP scores).* (conf medium)
- ƒ member fields via vtbl calls on record pppiVar1: nLevel=vtbl[2], nHRLevel=vtbl[8], bIsLeader=FUN_115b6e70(), index=vtbl[5], bOnline=vtbl[4], dayleft=vtbl[6], nScore=vtbl[3].
- ƒ IsSelf: compares member handle (ppiVar11 vtbl[0x30] returns 64-bit id) against local player id (ppppppiStack_f0/iStack_ec pair).
- ƒ team totals: BTMemberNum=FUN_115022e0(), BTMemberOnlineNum=teamObj vtbl[5], BTScore=teamObj[0x22], averageMemberLevel=teamObj vtbl[7], BTPvpEffectiveness=teamObj[0x2b], BTPersonalScore=member-count value FUN_11348ac0()+0x134, BTPveScore=teamObj[0x26], BTPvpScore=teamObj[0x2a].


## group  (1)

### CCommonGroupBuffModel::RegisterHandlers `@109568f0` — group/party buff UI init
*Registers the common-group buff AS3 callback surface (gated on init flag param==1): _getLocalPlayerNetID, _getCommonGroupPlayerHealth, _getCommonGroupPlayerLevel, _getCommonGroupInfo, _getCommonGroupBufferInfo, _getCommonGroupPlayerInfo, _getCommonBatchExecBuffCmd (->FUN_109572a0).* (conf high)


## team  (1)

### CCommonGroupBuffModel::GetBatchExecBuffCmd `@109572a0` — team/party buff & debuff data
*'_getCommonBatchExecBuffCmd' handler: iterates the local buff container (FUN_11183d00/de0/df0 = iterator begin/at-end/next) and builds a BatchBuffList of TEAM_MEMBER_BUFFER_DATA_CLASSNAME entries describing each active buff/debuff (name, type, remaining time, total time, tooltip, icon, stack count, owner netID, icon-update flag, team-buff act type, trigger count).* (conf high)
- ƒ For each buff in the iterated container: _strName (string), _tipString, _strIcon (strings). Numeric fields (_nType, _nTime, _nTotalTime, _nStackCount, _nNetID, _nIconUpdateTimeFlag, _nTeamBuffActType, _nbufTriggerCount) are pushed conditionally when param_2!=0 via the int64/typed setter vtbl+0x14 (each guarded and released with vtbl+8).
- ƒ _nTime = remaining duration; _nTotalTime = full duration; _nStackCount = current stacks; _nTeamBuffActType = team-buff activation type; _nbufTriggerCount = number of times the buff has triggered.
- ƒ AS3 type flag (byte & 0x8f)==10 (string discriminant).


## charm crafting  (1)

### CCharmModel::BuildPassiveSkillAndActivateVO `@10958830` — charm crafting / passive skills
*Builds the charm (護石) crafting panel VO: charm name, a passiveSkillList of PASSIVESKILL_VO entries (each with bIsHidden, nVisibleMoney unlock cost, name, and an activateInfoList of ACTIVATE_VO entries), plus the required material item (id, owned bound/unbound counts, needed count). Uses CEquipHiddenSkillCondOpenInfo and CCharmFoundCostInfo.* (conf medium)
- ƒ Guard: param_5>2; charm object at *(CPlayer+0x2d1c) (iStack_120).
- ƒ passive skill array iterated over (local_e8 - piStack_ec)/0x1c entries (stride 0x1c=28 bytes). Per entry reads iVar3=*rec, uStack_a4=rec[1], puStack_a0=rec[2], iStack_9c=rec[3], uStack_98=*(rec+4) (8 bytes), iStack_90=rec[6].
- ƒ bIsHidden = (rec[0] == 1).
- ƒ nVisibleMoney (unlock cost for hidden skill) = iVar6 - iVar3, where iVar3 = piStack_164[0x7b] (current) and iVar6 = CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance(...) computed from charm skill index (vtbl+0x2c then vtbl+0x18). Only for hidden (type==1) skills.
- ƒ activateInfoList: for non-zero skill (FUN_1050ebc0), iterates activate records at *(rec2+0x2c)+0x10..+0x14 (stride 4), each emitting nType=(piVar10 vtbl+0x10) and a nested VO via FUN_10958500.
- ƒ Material cost: iVar3 = CCharmFoundCostInfo::GetInfoManagerInstance() -> *(rec+0x28) = required item id; nItemID; nRakeType=*(itemRec+0x4c). Counts: nItemNowBindCount = FUN_113fa680(itemId,1,1) (owned bound), nItemNowUnbindCount = FUN_113fa680(itemId,0,1) (owned unbound), nItemNowCount = iVar4 (total owned), nItemNeedCount = puStack_158 (required).
- ƒ strItemIconPathName = *(itemRec+0xb4).
- $ nVisibleMoney = hidden-skill unlock cost = CEquipHiddenSkillCondOpenInfo value - current charm value.
- $ nItemNeedCount = required material count (CCharmFoundCostInfo rec+0x28 = item id); nItemNowBind/Unbind/NowCount = player's owned quantities.


## skill QTE  (1)

### CQTEModel::BuildQTEData `@1096b9a0` — skill QTE (quick-time-event)
*Builds the QTE_DATAVO for a skill's quick-time-event sequence: a list of ACTION_DATAVO entries (action string, status, delay, started flag), plus per-QTE skillName/description/status. Gated on mode param_5==1.* (conf medium)
- ƒ QTE list from FUN_10ea7ad0() (head) / FUN_10ea7ae0() (count); iterates linked list nodes (piVar4[0x17] inner action list).
- ƒ per action node piVar2: action = string *(node+3) (default &DAT_11d9d32b if null), status = *(node+4), delay = (double)(float)*(node+2) (seconds), started = ((char)*(node+6)=='\0').
- ƒ per QTE piVar1: field(11dca14c)=*(node+5), status=*(node+2), started=(char)*(node+0x1d), description string.
- ƒ delay pushed via typed setter (float->double cast, uStack_54).


## netsync  (1)


## cvars  (1)

### RegisterNetSyncedCVars `@10bda3f0` — cvars
*Registers ~300 cvars with a subsystem (obj vtable+0x20(name, flag)) — flag 1 for most, 0 for autotest_* / designer_warning_enabled / g_MonsterInfo. Marks which cvars participate (likely net-serialized / config-persisted). Ends with FUN_10bdb500. Notable gameplay cvars: g_playerHealthValue, g_MHFC_DamageMode, mg_dmgCalOnSvr, g_RandomDmgRst, g_frostDecay, g_BT_BuffLoad.* (conf medium)
- ƒ flag==0 cvars: autotest_enabled, autotest_state_setup, autotest_quit_when_done, designer_warning_enabled, g_MonsterInfo; all others flag==1


## animation  (1)

### GetLodBlendModeName `@10d0a9d0` — animation
*Maps an int LOD/pose blend mode (this+0x90) to a string: 0='WeightedAverage', 1='Prioritized', 2='Dithered', else empty.* (conf high)
- ƒ this+0x90: 0->WeightedAverage, 1->Prioritized, 2->Dithered, default->empty


## lua  (1)

### CGameLuaBindings::RegisterEntityEnumsAndFuncs `@10d1a840` — lua-scripting
*Lua binding setup: publishes entity-type enum constants MH_LETYPE_* and player-guide/loot enums into a Lua table, then registers Lua-callable functions (each with signature-hint string).* (conf high)
- ƒ MH_LETYPE_PLAYER=0, MONSTER=1(0x3f800000), PROJECTILE=2(0x40000000), COLLECTPOINT=4(0x40800000), BUFFAREA=5(0x40a00000), ANIMOBJECT=6(0x40c00000), BTOBJECT=7(0x40e00000), PET=8(0x41000000), VEHICLE=9(0x41100000)  [note: value 3 is skipped]
- ƒ ePlayerGuideState_NotDone=0, _Executing=1(0x3f800000), _Done=255(0x437f0000)
- ƒ eLootType_MonsterSpecial=14 (0x41600000)
- ƒ registered funcs: __tostring, GetEntityType, GetPlayerGuideStepState(step), SetPlayerGuideStepState(step,state), GetPlayerAttr(attr), SetPlayerAttr(attr,value), RegisterPlayerEvent(EventID,entity,func,params), RegisterMonsterEvent(EventID,entity,func,params), DeltaCharExp(exp)
