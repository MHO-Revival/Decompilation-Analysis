# Category: skill  (20 classes)

### CAstrolabeSubjectInfo  

*Astrolabe (star-chart talent system) 'subject' definitions - the categories/themes of astrolabe nodes. Only factory boilerplate recovered.*  

confidence: **low**  


> Part of the Astrolabe family (CAstrolabeStarInfo, CAstrolabeTaskPrizeInfo). No field data recovered.

---
### CEquipHiddenSkillCondOpenInfo  

*Conditions under which an equipment's hidden skill is unlocked/opened. Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CEquipPassiveSkillGroupInfo  

*Data-registry mapping equipment to groups of passive skills. Group entries carry a group id (+0x10) and a level-indexed sub-table (+0x30..0x34, stride 0x50) whose +0x24 is a level threshold. Provides name lookup, level-based skill resolution, and buff linking.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x10 | int32 | inferred |
| name | 0x14 | char* | inferred |
| levelTable_begin | 0x30 | ptr | inferred |
| levelTable_end | 0x34 | ptr | inferred |


**Formulas / rules:**
- ResolveSkillsByLevel: among level-table entries (stride 0x50) pick the one whose threshold(+0x24) is the highest <= requested level (sign-aware comparison handling negative/level-cap sentinels)
- FindGroupsByName result array is capped at 200 ids

> Level sub-table stride 0x50 confirmed by pointer arithmetic; threshold at +0x24.

---
### CEquipRandPassiveSkillActivateGroupInfo  

*Static data grouping equipment random-passive-skill activation rules; each group ties into CEquipPassiveSkillGroupInfo definitions.*  

confidence: **low**  


> Cross-reference to CEquipPassiveSkillGroupInfo. Method 11865260 mainly forces manager init for each list element.

---
### CEquipRandPassiveSkillActivateSetInfo  

*Static data for a 'set' of equipment random-passive-skill activation rules (grouping of activate-groups).*  

confidence: **low**  


> Sibling of CEquipRandPassiveSkillActivateGroupInfo; no field offsets exposed.

---
### CEquipRandPassiveSkillGroupInfo  

*Config record for an equipment random-passive-skill group: a bundle of buff/passive references plus wake/rank-up/level-up links resolved onto an equipment instance. Only manager accessors + one resolver recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| buffArray | 0x200 | array<{id,ptr}> | inferred |
| wakeId | 0x254 | int32 | inferred |
| slots3 | 0x258 | int32[3] | inferred |
| rankUpCount | 0x114 | int32 | inferred |
| levelUpCount | 0x11c | int32 | inferred |


> References CBuffInfo, CEquipWakeInfo, CEquipRankUpInfo, CEquipLevelUpInfo managers.

---
### CEquipRandPassiveSkillSubGroupInfo  

*Sub-group table for equipment random passive skills. Each sub-group holds a list of (skill, weight) entries; used to pick the best sub-group for a skill and to randomly roll passive-skill sets together with CEquipRandPassiveSkillActivateGroupInfo.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| entryList | 0x18..0x1c | vector<Entry*> | reader |
| entrySkillId | 0x00 (entry[0]) | int32 | inferred |
| entryWeight | 0x20 (entry[8]) | int32 | inferred |
| mode | 0x3c | int32 (1|2) | reader |


**Constants:** MinRollCount=3, rngScale=_DAT_11de9a60

**Formulas / rules:**
- rollCount = base - floor(rand01 * _DAT_11de9a60 * (range+1)), clamped to >=1 and >=3 candidates then processed

> The two roll methods are the core random-passive-skill generator; SelectSubGroupForSkill is a weighted best-match. Exact rng constant _DAT_11de9a60 is a double (likely 1/RAND_MAX). Activate-group class CEquipRandPassiveSkillActivateGroupInfo is a sibling table.

---
### CEquipSkillInfo  

*Equipment skill (armor-skill) definition table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipSuitSkillGroupInfo  

*Equipment set-bonus (suit) skill-group table: each group lists the suit skills granted at given equipped-piece counts. Recovered logic builds a player's active suit-skill set from equipped gear and answers suit-skill queries.*  

confidence: **medium**  

related TLV: TlvSuitSkillGroups (genuine: L1 caller sub_115721D0 adjoins builder 0x11572a90; groupCnt + suitSkillGroupData sub-struct)  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x18 | int | inferred |
| sourceEntryType | 0x0 | int | inferred |


**Constants:** GroupEntryStride=0x391, SourceEntryStride=0x20(8 ints), SuitType=2, PassiveType=1

---
### CEquipSuitSkillInfo  

*Static-data for equipment SUIT SKILLS (set-bonus skills). Records key on a skillId(+0x1c) with a per-piece value(+0x24) and threshold(+0x20), grouped under CEquipSuitSkillGroupInfo. Helpers validate whether a suit skill can be activated, accumulate a player's total skill level from equipped pieces, collect active passive skills, and register all suit skills into their groups.*  

confidence: **medium**  

related TLV: TlvSuitSkillGroups  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x18 | int | reader |
| skillId | 0x1c | int | reader |
| threshold | 0x20 | int | reader |
| pieceValue | 0x24 | int | reader |
| passiveSkillId | 0x28 | int | reader |
| passiveArg | 0x30 | int | reader |


**Constants:** ActivePassiveRecordStride=0x14, ActivePassiveRecordType=2

**Formulas / rules:**
- Effective suit-skill total = max(sumOf pieceValue(+0x24) where skillId matches, group-table contribution). Skill activates when total >= threshold(+0x20).

> Error codes 0x8..0xe in CheckSuitSkillActivatable enumerate distinct failure reasons (missing group, wrong param, insufficient count) — worth mapping to named enum later.

---
### CFluteTuneInfo  

*Static data for hunting-horn (flute) tunes/melodies. Each tune references buff ids (a paired value at +0x18/+0x1c) that get applied when the melody plays.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| buffValueA | 0x18 | int32 | inferred |
| buffValueB | 0x1c | int32 | inferred |


> Cross-reference to CBuffInfo plus the +0x18/+0x1c pair strongly indicate tune->buff mapping.

---
### CHunterAbilityCardInfo  

*Static data for hunter 'ability cards' — each card grants a list of passive skills. Consumer walks a player's card tree and applies each card's skill list.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| skillIdsBegin | 0x8c | ptr | inferred |
| skillIdsEnd | 0x90 | ptr | inferred |


**Constants:** SkillApplyType=0x13, CardStateGate=2

**Formulas / rules:**
- skill count = (card+0x90 - card+0x8c) >> 2

> ApplyCardSkills clearly grants a per-card skill list; type-arg 0x13 to the skill-add call. Offsets 0x8c/0x90 confirmed by the memcpy of the skill-id vector.

---
### CHunterBranchLevelInfo  

*Per-level config for a Hunter progression branch (talent/rank branch level thresholds). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CHunterStarMainBranchInfo  

*Config for the Hunter-Star main progression branch (rank/talent tree main path). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CNewSkillInfo  

*Static definition of a weapon 'new skill' (active/passive combat skill). Holds skill id, level, icon/name/description strings and effect ids used to build the skill display list and to apply weapon skills in combat.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| skillId | 0x10 | int | reader |
| level | 0x14 | int | reader |
| field54 | 0x54 | int | reader |
| rank | 0x44 | int | reader |
| field48 | 0x48 | int | reader |
| iconOrName | 0x88 | char* | reader |
| descA0 | 0xa0 | char* | reader |
| descA4 | 0xa4 | char* | reader |
| effectId | 0x40 | int | reader |


**Constants:** skillSlots=3, weaponSlotMax=0x0D, missingSkillCode=0xD5

**Formulas / rules:**
- display record stride = 0x4C bytes; record rank field = info+0x44 + 1

---
### CNewSkillLearnInfo  

*Static config for the (new) skill learning/unlock system. Rows precached per entry at load.*  

confidence: **medium**  

related TLV: TlvNewFlagSkills, TlvSkills  


---
### CSkillInfo  

*Static skill definition table (core skill data). The recovered iteration returns the first skill row that passes a predicate.*  

confidence: **medium**  

related TLV: TlvSkills, TlvSkillLevel, TlvSkillGroupData  


> TLV structs are runtime player skill data; CSkillInfo is the static skill config table.

---
### CTalentActiveInfo  

*Active-talent (activatable skill) definition table. Records carry a talent id and display name; recovered logic learns/activates active talents, builds the active-talent UI list, and triggers talents by id.*  

confidence: **medium**  

related TLV: TlvTalentEquipItem, TlvTalentLearnItem (related talent network structs; not directly parsed here — directional)  


| field | offset | type | source |
|---|---|---|---|
| talentId | 0x14 | int | inferred |
| nameOrIcon | 0x18 | char* | inferred |


**Constants:** Status_NoSlot=0xe8, Status_NotFound=0xd2, Status_Fail=0xcb, Status_TalentMissing=0xc9

---
### CTalentInfo  

*Static data for player talents. Consumer builds and sends a talent-list network packet (opcode 0xb12) enumerating talent ids the player qualifies for.*  

confidence: **medium**  


**Constants:** TalentListMsgId=0xb12

> 0xb12 packet id set at start of SendTalentListPacket; per-talent id via vtbl GetId (+0x18).

---
### CWakeAbilityInfo  

*Static config for 'wake'/awaken abilities (weapon or armor awakening skills). Rows precached per entry at load.*  

confidence: **medium**  


---
