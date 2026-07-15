# Category: pet  (25 classes)

### CCatTreatureInfo  

*Config record for a Felyne ('cat') treasure entry (treasure a hunting cat/palico can find). Consumer builds a sorted treasure list. ('Treature' is the game's spelling of 'Treasure'.)*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| sortKey | 0x1c | int32 | inferred |
| dataPtr | 0x10 | ptr | inferred |


---
### CFarmAdvPetInfo  

*Config for advanced/adventure pets in the farm system. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CPetAtkModeInfo  

*Weighted random table of pet attack-mode values; assigns a rolled attack-mode value to a pet during generation.*  

confidence: **high**  

related TLV: TlvPetBattleData  


| field | offset | type | source |
|---|---|---|---|
| atkModeValue | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.atkMode(+0xAC) = weightedRandom(records, weight).value

> Same weighted-roll pattern as other pet-attribute tables.

---
### CPetAtkTargetInfo  

*Weighted random table of pet attack-target modes; assigns a rolled attack-target value to a pet during generation.*  

confidence: **high**  

related TLV: TlvPetBattleData  


| field | offset | type | source |
|---|---|---|---|
| atkTargetValue | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.atkTarget(+0xA8) = weightedRandom(records, weight).value

> Same weighted-roll pattern as the other pet-attribute tables.

---
### CPetAvatarInfo  

*Data table describing pet (companion) avatar/appearance entries.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CPetCharacterInfo  

*Weighted random table of pet character/personality values; assigns a rolled character value to a pet during generation.*  

confidence: **high**  

related TLV: TlvPetFullAttrData  


| field | offset | type | source |
|---|---|---|---|
| characterValue | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.character(+0xA4) = weightedRandom(records, weight).value

> Same weighted-roll pattern as other pet-attribute tables.

---
### CPetEquipInfo  

*Definition of equipment items for pets. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CPetFireInfo  

*Static config for pet 'fire' (elemental/attack) attributes. Rows precached per entry at load.*  

confidence: **medium**  


---
### CPetGiftSkillInfo  

*Gift-skill table for pets/companions.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CPetInfo  

*Static definition table of pet species/base data (attributes, skills, avatar). Also hosts the routine that deserializes a player's owned-pet blob and populates pet instances from this table.*  

confidence: **medium**  

related TLV: TlvPetInfo, TlvPetFullAttrData, TlvPetBattleData  


| field | offset | type | source |
|---|---|---|---|
| petCount | 0x1c | int | inferred |
| level | 0x40 | int | reader |
| isActive | 0x44 | bool | reader |
| flag38 | 0x38 | bool | reader |
| attrByte68 | 0x68 | byte | reader |
| attrId6c | 0x6c | int | reader |
| attrId70 | 0x70 | int | reader |
| attrId74 | 0x74 | int | reader |
| attrId78 | 0x78 | int | reader |
| attrId7c | 0x7c | int | reader |
| field80 | 0x80 | int | reader |
| field84 | 0x84 | int | reader |


**Constants:** petRecordStride=0x4FC

**Formulas / rules:**
- serialized pet record stride = 0x4FC bytes; max 12 records (< local_3c73, capped at 13)

> Offsets +0x40..+0x84 are on the populated pet-instance object, not on the CPetInfo species row. Related wire struct TlvPetInfo/TlvPetFullAttrData.

---
### CPetLevelInfo  

*Pet leveling/experience curve table: one record per pet level giving the experience required to advance and the per-level attribute growth used to recompute pet stats.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| expToNextLevel | 0x14 | int | inferred |
| growthFactorA | 0x18 | int | inferred |
| growthFactorB | 0x1c | int | inferred |


**Formulas / rules:**
- level-up: while(accExp >= level[lvl].expToNextLevel){ lvl++; accExp -= level[lvl].expToNextLevel; } clamp lvl to maxLevel
- attr = (petGrowBase * record.growthFactorB)/100 + baseAttr, then clamp to CAttributeInfo[0x23] min/max

---
### CPetMonsterSkillInfo  

*Static data mapping pet (captured-monster) records to their skill sets. Consumer rebuilds per-pet skill lists and re-evaluates skill entries, skipping a special skill (id 0x8f) unless a flag is set.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| skillType | 0x1c | int32 | inferred |
| skillParam | 0x18 | int32 | inferred |
| computedValue | 0x12c | int32 | inferred |


**Constants:** SpecialSkillId=0x8f

**Formulas / rules:**
- entry+0x12c = FUN_11430a30(entry+0x18) for each active skill entry

> The multiple 116cdXXX calls fetch fixed-count skill buckets (9 and 10 entries). Stack-canary present (FUN_11679c30/FUN_11a89daa).

---
### CPetNameInfo  

*Weighted random table of pet default names; rolls a name string and applies it to a pet during generation.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| weight | 0x14 | int32 | inferred |
| nameString | 0x18 | char* | inferred |


**Formulas / rules:**
- pet name = weightedRandom(records, weight).nameString (falls back to default string DAT_11d9d32b if null)

> Distinct from the numeric pet tables: the payload is a string at +0x18, not an int at +0x10.

---
### CPetQualityInfo  

*Weighted random table of pet quality/grade values; assigns a rolled quality value to a pet during generation.*  

confidence: **high**  

related TLV: TlvPetFullAttrData  


| field | offset | type | source |
|---|---|---|---|
| qualityValue | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.quality(+0xA0) = weightedRandom(records, weight).value

> Same weighted-roll pattern as other pet-attribute tables.

---
### CPetSkillConditionInfo  

*Static definition of pet-skill unlock/trigger conditions. Each row holds two condition arrays (+0x118 and +0x124); provides selection logic that picks a pet skill whose conditions are satisfied (with probability gating).*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| condVec1Begin | 0x118 | ptr | reader |
| condVec2Begin | 0x124 | ptr | reader |
| resolvedRef | 0x18 | int | reader |


**Constants:** defaultCondId=0x2B3A

**Formulas / rules:**
- probability gate: FUN_1154bc80(skill+0x10) / 1000 compared against 1 (i.e. skill probability expressed per-mille)

> Sibling class CPetSkillInfo.

---
### CPetSkillInfo  

*Static game-data record describing a single pet skill definition (id, level, name, category/pet-type, weight, tier, linked buffs and effect animation). All records live in a CInfoManager<CPetSkillInfo> singleton indexed by skill id; this bundle contains the runtime query/apply/selection helpers that operate over that record set and over the player's equipped-skill lists (TlvSkillSlotData / TlvSkillGroupData) and the buff system.*  

confidence: **medium**  

related TLV: TlvSkillSlotData, TlvSkillGroupData, TlvSkillLevel, TlvSkills  


| field | offset | type | source |
|---|---|---|---|
| displayId | 0x10 | int32 | inferred |
| level | 0x14 | int32 | inferred |
| name | 0x18 | char* | inferred |
| desc | 0x1c | char* | inferred |
| skillGroupId | 0x24 | int32 | inferred |
| str_0x28 | 0x28 | char* | inferred |
| str_0x40 | 0x40 | char* | inferred |
| classTag_0x44 | 0x44 | int32 | inferred |
| reqLevelOrCost_0x48 | 0x48 | int32 | inferred |
| flag_0x4c | 0x4c | uint8 | inferred |
| flag_0x4d | 0x4d | uint8 | inferred |
| weight | 0x50 | int32 | inferred |
| activeFlag_0x54 | 0x54 | uint8 | inferred |
| category | 0x58 | int32 | inferred |
| val_0x5c | 0x5c | int32 | inferred |
| val_0x60 | 0x60 | int32 | inferred |
| param_0x64 | 0x64 | int32 | inferred |
| param_0x68 | 0x68 | int32 | inferred |
| param_0x6c | 0x6c | int32 | inferred |
| tier_0x70 | 0x70 | int32 | inferred |
| linkedSkillIds | 0x80 | int32[5] | inferred |
| val_0x94 | 0x94 | int32 | inferred |
| actionName | 0xac | char* | inferred |
| rate_0xb0 | 0xb0 | int32 | inferred |
| buffRef_0xb4 | 0xb4 | ptr(CBuffInfo) | inferred |
| buffRef_0xb8 | 0xb8 | ptr(CBuffInfo) | inferred |


**Constants:** WildcardClassTag=0x12, MaxLinkedSkills=5, MinPetSkillCategory=6, SkillCategories={4,6,7,8,9}

**Formulas / rules:**
- CInfoManager sparse-id lookup (used everywhere): idx = id - base(mgr+0x30); valid if 0 <= idx < capacity(mgr+0x24); bucket = *(int*)(mgr+0x20 + (idx / bucketSize(mgr+0x28))*4); record = *(int*)(bucket + (idx % bucketSize)*4).
- CInfoManager linear enumeration: count = (mgr+0x18 - mgr+0x14)>>2; record[i] = *(int*)(*(mgr+0x14) + i*4).
- Weighted random skill pick (1158b730): total = sum over list of record[+0x50]; rand = frand() * _DAT_11de98f0 * (total-1); iterate list subtracting record[+0x50] from rand, pick the record at which the running value first goes < 1; result id written to *param_3.
- Skill effect rate (113f0ca0 / 113f0ff0): FUN_113e5380(animId, 0, (float)(record[+0xb0] / DAT_11de99b8)) — +0xb0 is an integer rate divided by a constant to a float.
- Passive/aura match filter (11589800 / 115899c0 / 11589b80): apply if (record[+0x44]==0x12 || record[+0x44]==target[+0x70]) && tier rule on record[+0x70] vs target[+0x6c] (both <3, or 2<record<=target) && record[+0x48] <= target[+0x48] && record[+0x4c]!=0 && !FUN_1174ca30(record[+0x10]).
- Next-level existence (112f4fe0 / 115889c0): true if some other record has other[+0x24]==rec[+0x24] && other[+0x14]==rec[+0x14]+1 (same skill group id, level+1).
- Per-category cap on equipped list (11584a50): entries grouped by record[+0x58]; local_30[category] counter incremented, gated by FUN_1174bf40(category, currentCount); records with +0x58 < 6 rejected.

> Every method in the bundle was auto-labeled 'CPetSkillInfo::GetManagers' by Ghidra; this is wrong. The real shared idiom is CInfoManager lookup: FUN_1051c550(0,"CPetSkillInfo",0) / FUN_11679e10 return the manager, and records are fetched by the sparse-id formula (see formulas). NO XML/TLV reader (Read_0x99) is present in this bundle, so the CPetSkillInfo struct is loaded elsewhere; field offsets below are INFERRED from the serializer/printer builders (112f6b70, 112f73a0, 112f6dd0) and the debug-log selector (1158b730). Cross-ref: the short* list processed by 11584a50/11588cc0 (count at [0], entries stride 6 shorts, sub-block at short offset 0x3d = byte 61) matches TlvSkillSlotData (count int16 @0, slotCount sub-struct @offset 61) and TlvSkillGroupData (skillGroup/skillCnt/skillID[]). Treat the field table as medium-confidence.

---
### CPetSkillSlotUnlockInfo  

*Static data defining unlock requirements for pet skill slots. A pet references 3 primary slot-unlock ids (this+0xe8) and 2 secondary ids (this+0xf4); the consumer resolves each id and stores the pointers into two output vectors.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| primarySlotIds | 0xe8 | int32[3] | inferred |
| secondarySlotIds | 0xf4 | int32[2] | inferred |
| resolvedPtrVec | 0x100 | vector<ptr> | inferred |
| resolvedIdVec | 0x10c | vector<int32> | inferred |


**Constants:** PrimarySlots=3, SecondarySlots=2

> The 3-then-2 fixed-count structure is clear from the two loops (local_14=3 then local_14=2).

---
### CPetSkinInfo  

*Weighted random table of pet skins/avatars; assigns a rolled skin id to a pet during generation.*  

confidence: **high**  

related TLV: TlvPetAvatarData  


| field | offset | type | source |
|---|---|---|---|
| skinId | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.skin(+0xB0) = weightedRandom(records, weight).skinId

> Links to CPetAvatarInfo; TlvPetAvatarData is the serialized counterpart.

---
### CPetStarInfo  

*Static definition of pet star/rank rows keyed by a 2- or 3-part composite key (e.g. petType/star/subrank); drives pet star upgrade and skill-slot unlocks.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| keyA | 0x14 | int | reader |
| keyB | 0x18 | int | reader |
| keyC | 0x1c | int | reader |


---
### CPetSupportCatSkillInfo  

*Support Felyne ('Cat') skill table for pets/companions.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CPetSupportSkillInfo  

*Weighted random table of pet support skills used during pet generation; assigns a rolled support-skill id to a pet.*  

confidence: **high**  

related TLV: TlvPetFullAttrData, TlvPetExtAttrData  


| field | offset | type | source |
|---|---|---|---|
| skillId | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |


**Formulas / rules:**
- pet.supportSkill(+0xB4) = weightedRandom(records, weight).skillId

> Pet-generation struct offsets across this batch: +0xA0 quality, +0xA4 character, +0xA8 atkTarget, +0xAC atkMode, +0xB0 skin, +0xB4 supportSkill. Batch index 12 namesake.

---
### CPetTalkInfo  

*Pet/companion dialogue (talk) line table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSoulBeastEvolveInfo  

*Static config for Soul Beast evolution stages. Used to query the max evolve stage for a soul-beast id/type.*  

confidence: **high**  

related TLV: TlvSoulBeastSystemData  


| field | offset | type | source |
|---|---|---|---|
| soulBeastId | 0x14 | int | reader |
| evolveStage | 0x18 | int | reader |


---
### CSoulBeastInfo  

*Static/loaded data for the Soul Beast pet system: stage/level progression, stage-unlock arrays and attribute arrays. Loader parses a TDR (0x99) record into the runtime object and dereferences referenced soul-beast ids.*  

confidence: **medium**  

related TLV: TlvSoulBeastSystemData, TlvSoulBeastStats, TlvSoulBeastIdAttrs  


| field | offset | type | source |
|---|---|---|---|
| stageCount | src+0x4 | uint8 | reader |
| attrCount | src+0xb1 | uint8 | reader |
| refBeastCount | src+0x3d6 | int32 | reader |
| runtimeField | 0x8c | int32 | inferred |


**Constants:** RuntimeObjSize=0x1C0

**Formulas / rules:**
- referenced beast entries stride = 0xC (12 bytes)

> LoadFromData matches TlvSoulBeastSystemData (stage/level/attrPoint/stages[]/attrs[]). Exact src offsets are large (0x3d2/0x3da/0xbf5a) suggesting a big fixed record; FUN_10467580 = string/ref helper.

---
### CSoulBeastLevelUpInfo  

*Static config for Soul Beast (pet/companion) level-up rules. Used to query the max level available for a given soul-beast id/type.*  

confidence: **high**  

related TLV: TlvSoulBeastSystemData, TlvSoulBeastStats  


| field | offset | type | source |
|---|---|---|---|
| soulBeastId | 0x14 | int | reader |
| level | 0x18 | int | reader |


---
