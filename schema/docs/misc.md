# Category: misc  (32 classes)

### CAchieveLibInfo  

*Static achievement 'library' records (achievement definitions/groups). Consumers iterate all achievements, feed achievement groups, and resolve a matching achievement for a runtime object.*  

confidence: **low**  


> Related to CAchieveGroupInfo. No field offsets exposed.

---
### CAvatarInfo  

*Client-side avatar/appearance controller for a player (and pet) character. It turns an appearance description (gender + equipment part ids + face/eye/weapon ids) into a live CryEngine skinned character: it creates/rebuilds the character instance, binds equipment part skin-attachments across ~8 slots, attaches eye_left/eye_right offsets, spawns master/slave weapon entities, and precaches all avatar-related assets. All 18 methods were auto-tagged 'GetManagers' by the RTTI-string heuristic; only the first is the manager singleton accessor, the rest are appearance/model logic.*  

confidence: **medium**  

related TLV: TlvAvatarBriefInfo, TlvEquips, TlvEquipData, TlvPetAvatarData  


| field | offset | type | source |
|---|---|---|---|
| loadState | 0x14 | int32 | inferred |
| baseModelIdStr | 0x2c | char* (atoi'd) | inferred |
| modelIdStr_field | 0x14 | char* (atoi'd) | inferred |
| faceIdStr | 0x44 | char* (atoi'd) | inferred |
| equipPartsMap | 0x4c | std::map<uint slot,std::string> | inferred |
| decalTintVector | 0x7c | std::vector<int> | inferred |
| cachedPartIds_A | 0x1fc | int32[7] | inferred |
| slotStreamFlags_A | 0x221 | char[8] | inferred |
| pendingAttachStrings | 0x230 | struct[8] (0x24 each) | inferred |
| readyFlag | 0xc0 | uint8 | inferred |
| characterInstance | 0x24 | ICharacterInstance* | inferred |
| resourceHandleVector | 0x124 | DynArray<void*> | inferred |
| cachedPartIds_B | 0x899*4 | int32[8] | inferred |
| slotStreamFlags_B | 0x2284 | char[] | inferred |
| appearanceDirtyFlag | 0x8ff*4 | uint8 | inferred |
| attachmentContext | 0x8a4 | struct | inferred |
| avatarDataPtr | 0x18c | AvatarData* | inferred |
| genderVFunc | vtbl | int16 (vtbl +0x2ec) | inferred |


**Constants:** SlotCount=8 (decal/tint + equipment attach slots), PartCount=6 (body/equipment parts iterated 1..6), SpecialModelId=0x530e8 (=340200, checked in UpdateAsyncLoadState), SpawnFlags=0x480000 (BasicEntity weapon spawn flags), DefaultEquipIds: male 20002/620002, female base/610002, PlayerFSM files WE00..WE10 (11 FSM state XMLs)

**Formulas / rules:**
- CInfoManager record lookup (used everywhere): idx = id - mgr[+0x30]; valid if id!=-1 and 0<=idx<mgr[+0x24] and stride mgr[+0x28]!=0; record = mgr[+0x20][idx/stride][idx%stride] (2-level page table).
- Eye attachment world offset: Leye/Reye position from 'Leye_offset'/'Reye_offset' + rotation quats from 'Leye_rotation'/'Reye_rotation', gender-selected via 'male'/'female' EyeAttachmentOffset table (SetupPlayerEntityFromScript).
- Skeleton precache path = 'Objects/characters/player/{female|male}/{female|male}_skeleton_' + itoa(faceRecord+0x10) + '.cdf'.
- Physics/movement toggle uses factor 0.1f (0x3dcccccd) via skeleton vtbl+0x134 (ApplyAppearanceData).

> CAvatarInfo is the CLIENT-side rendering/appearance controller (CryGame.dll), not a pure TLV data record; the auto-tag 'GetManagers' on all 18 methods is a false RTTI-string match (the singleton-accessor string "CAvatarInfo::GetManagers" is reused as an allocator tag inside every method). Only 1052bb90 is a real manager accessor. IMPORTANT: two distinct object layouts appear under this class: (a) a compact avatar-data layout using cachedPartIds at +0x1fc and stream flags at +0x221 (used by 10ae4120/10aeadc0/10aeddc0 etc.), and (b) a larger player-info layout using +0x899 (word idx) part ids, +0x2284 flags and +0x8ff dirty flag (used by 10f01650/10f02190/10f02e50/1103bc00). Layout (a) is likely the object pointed to by (b)'s +0x18c field. The param_2 'appearance-description' struct (fields +0x10/+0x14/+0x2c/+0x44 strings and a std::map at +0x4c) is a parsed XML/entity-property description, NOT a TLV wire struct; it maps conceptually to TlvAvatarBriefInfo (sex/equips) but the offsets do not match the TLV field ids, so treat the TLV link as directional only. All field offsets are inferred from control flow (no DebugFormat/printer method exists in this bundle), hence medium confidence.

---
### CBenchmarkInfo  

*Benchmark/performance-test config table.*  

confidence: **low**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CCalculateInfo  

*Config table for calculation/formula parameters (data-driven arithmetic constants). Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered.

---
### CEffectInfo  

*Visual/gameplay effect definition table.*  

confidence: **medium**  


> Has an extra list-precache method (@116e91f0) that walks a supplied vector. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CExplimitInfo  

*Static experience-limit table (per-level exp caps). Works together with CPlayerLevelUpInfo to compute how many levels an exp gain crosses given the exp cap rows.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| expLimit | 0x14 | int | reader |


> FUN_1046c7c0(1)+0xd0 = server max level; FUN_1139dcb0 advances level/exp given a cap.

---
### CFaceInfo  

*Character face appearance definitions (character-creation face options). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered. Appearance-customization data.

---
### CHairInfo  

*Character hair appearance definitions (hairstyle options). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered. Appearance-customization data.

---
### CIllustrateBookGroupInfo  

*Group/category definition for the illustration book (bestiary/collection gallery). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CIllustrateBookInfo  

*Static definition of a hunting-notes / illustration-book (bestiary) page. Groups monster/collection entries by category and links to illustration tasks.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| id | 0x18 | int | reader |
| category | 0x64 | int | reader |


> Related sibling class CIllustrateTaskInfo (illustration progress tasks).

---
### CIllustrateBookStoryInfo  

*Story/lore entries associated with illustration-book (bestiary) pages. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLevelBalanceInfo  

*Balance-tuning constants per mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CLevelBaseNumericalInfo  

*Base numerical/balance constants per mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CLevelIDGroupInfo  

*Static config table that groups map/level IDs under a shared group id; on load it stamps each member level's runtime object with the group id.*  

confidence: **medium**  

related TLV: TlvLevelId  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x10 | int32 | inferred |
| levelIds_begin | 0x14 | int32* (vector begin) | inferred |
| levelIds_end | 0x18 | int32* (vector end) | inferred |


**Formulas / rules:**
- For each levelId in group: CMHLevelInfo(levelId).field_0x260 = group.groupId (sparse lookup: bucket=(levelId-base)/bucketSize, slot=(levelId-base)%bucketSize)

> No DebugFormat/reader recovered; layout inferred from ApplyGroupsToLevels control flow. Manager container layout (shared by whole batch): +0x14/+0x18 = vector<T*>; +0x20 bucket array, +0x24 capacity, +0x28 bucketSize, +0x30 idBase for id->record sparse lookup; vtable+0x28 = GetCount. TlvLevelId is player-side serialized data, only loosely related.

---
### CLevelMusicInfo  

*Music/BGM assignments per mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CMHMapInfo  

*Static definition of a Monster-Hunter world map/zone. Each entry references a set of monsters (CMonsterInfo) and levels (CMHLevelInfo) placed on the map.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| id | 0x10 | int | reader |
| monsterContainer | 0xb4 | ptr | reader |


> Manager idiom: vtable+0x28 = GetCount; entry array at mgr+0x14/+0x18 (>>2 = count); id-indexed lookup uses mgr+0x30(minId)/+0x28(divisor)/+0x20(bucketArray)/+0x24(size). Same idiom across the whole batch.

---
### CMessageParmDescInfo  

*Descriptions for message parameters (localized message/template parameter definitions). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CMonsterBattleBgmInfo  

*Battle BGM (music) assignments per monster.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CNewPlayerInfo  

*New-player setup/guide config; on load applies each record's setup action (grants/tutorial steps) to a target.*  

confidence: **low**  


> Own record layout not recovered (per-record work is in uninspected FUN_119fad30). Two near-identical apply loops.

---
### CNpcAtdAttrUnlockInfo  

*Static config for NPC ATD (attitude/affinity) attribute unlock thresholds. Rows precached per entry at load.*  

confidence: **medium**  


---
### CNpcAtdGroupInfo  

*Static config for NPC 'ATD' (attitude/affinity) groups. Given a query it finds the matching group and returns its group id.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x10 | int | reader |


---
### CNpcAtdInfo  

*Static NPC 'ATD' (attitude/attendant) data. A record field at +0x34 groups NPCs; consumers collect NPC ids for a requested group and link to preferences data.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x34 | int32 | inferred |


> Cross-reference to CNpcAtdPrefersInfo. Offset 0x34 group id is clear.

---
### CPersonalParagraphInfo  

*Static config for 'personal paragraph' entries (per-player narrative/biography or profile text blocks). Rows precached per entry at load.*  

confidence: **medium**  


---
### CPlayerLevelUpInfo  

*Player level-up curve: per-level increment values; used to compute cumulative totals (e.g. exp/attribute points) up to a target level, and to build a merged threshold table with CExplimitInfo.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| level | 0x10 | int32 | inferred |
| value | 0x14 | int32 | inferred |


**Constants:** MaxLevelInTable=0x28

**Formulas / rules:**
- cumulative(targetLevel) = sum of record.value over records with record.level < targetLevel
- threshold table combines CPlayerLevelUpInfo.value and CExplimitInfo.value per level up to 40

> BuildLevelThresholdTable references CExplimitInfo (sibling exp-limit config); result cached in DAT_12392268/DAT_12392218.

---
### CSpecRulesInfo  

*Special-rules config table.*  

confidence: **low**  


> 'Spec'=special (generic rules table). Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CStarLevelPageUnlockInfo  

*Static data controlling unlocking of 'star level' pages (progression pages). Records carry a type tag (==99) and a range whose entries drive per-page unlock processing.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| typeTag | 0x1c | int32 | inferred |
| rangeBegin | 0x10 | ptr | inferred |
| rangeEnd | 0x14 | ptr | inferred |


**Constants:** PageUnlockType=99, MaxPages=6

**Formulas / rules:**
- element count = (rangeEnd - rangeBegin) / 0x1c

> No DebugFormat/Reader; element stride 0x1c and cap 6 read from CollectUnlockPages control flow.

---
### CStaticLevelWeatherInfo  

*Static (fixed) weather config per level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CTattooInfo  

*Character tattoo/body-marking appearance definitions. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered. Appearance-customization data.

---
### CTraceInfo  

*Config for a 'trace' system (likely footprint/tracking marks or a guided-trace feature). Only factory boilerplate recovered.*  

confidence: **low**  


> Meaning of 'Trace' inferred from name only; no field data recovered.

---
### CVehicleInfo  

*Vehicle/mount definition table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CXHunterRandomInfo  

*Randomisation config for the 'X Hunter' feature.*  

confidence: **low**  


> 'X Hunter' feature meaning not recovered. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CXianYouInfo  

*Config for a 'XianYou' feature (Chinese term, possibly a travel/roaming or leisure activity system). Meaning unresolved. Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'XianYou' meaning unresolved.

---
