# Category: monster  (11 classes)

### CLevelSpawnBatchInfo  

*Monster spawn-batch (wave) config for a level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CMonsterGroupInfo  

*Groups multiple monster definitions (e.g. a spawn set or encounter group); iterates child CMonsterInfo elements. Only factory boilerplate recovered.*  

confidence: **medium**  


> Cross-reference: owns/iterates CMonsterInfo children. No field offsets recovered.

---
### CMonsterInfo  

*Static configuration record for a monster/NPC definition, owned by a CInfoManager<CMonsterInfo> singleton and keyed by monster id. Drives entity precache from Libs/EntityCustomTypes XML, spawning, level/reward association, and NPC-shop linkage.*  

confidence: **medium**  

related TLV: TlvMonsterSizeData  


| field | offset | type | source |
|---|---|---|---|
| isNpcOrHasShop | 0x10 | bool | inferred |
| sizeVariantKey | 0x14 | int | inferred |
| spawnParamA | 0x20 | int | inferred |
| spawnParamB | 0x6c | int | inferred |
| aiOrNameList | 0x68 | ptr | inferred |
| useSizeTable | 0x78 | int | inferred |


**Constants:** MaxLevelSequenceSteps=99 (114d28a0), SpawnRecordStride=0x42eb bytes (112a2e10), PrecacheMonsterSlots=24 (0x17 loops), ActionType_SpawnMonster=4 (11a389b0 +0x14)

**Formulas / rules:**
- CInfoManager id lookup uses word-indexed form here: minId=mgr[0xc], count=mgr[9], pageSize=mgr[0xa], pageTable=mgr[8]; entry = pageTable[(id-minId)/pageSize][(id-minId)%pageSize]
- Action-descriptor precache selects manager by type field +0x14 (==4 monster), buff ids +0x20/+0x24, level id +0x10

> All 9 methods auto-labeled 'CMonsterInfo::GetManagers'; only 107d7d50 (and defensively 119e6e10) is an actual manager accessor. Strongest evidence is 10ddf560 (the _PreCache.xml entity dependency loader). TlvMonsterSizeData is a runtime/network struct and only loosely related (the size-variant concept), not a field-level map.

---
### CMonsterPartGroupInfo  

*Grouping of monster body parts (breakable/severable part sets used for damage zones and carve rewards). Only factory boilerplate recovered.*  

confidence: **low**  


> Monster-part family. No field data recovered.

---
### CMonsterPartInfo  

*Static definition of a monster body part (breakable/severable part), keyed and looked up by name strings.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| nameA | 0x28 | char* | reader |
| nameB | 0x2c | char* | reader |


---
### CRageInfo  

*Static config for monster rage/enrage states. The recovered method walks a red-black tree of active entities and toggles a rage flag when a matching rage entry is found.*  

confidence: **low**  


> Row field layout not exposed; only manager count/array access. FUN_11719490/117194b0/11518b30/1141ca30 resolve/compare an entity id.

---
### CSRLMonsterClassInfo  

*'SRL' subsystem: monster class/category table.*  

confidence: **low**  


> 'SRL' subsystem meaning not recovered. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSRLMonsterTypeInfo  

*'SRL' subsystem: monster type table.*  

confidence: **low**  


> 'SRL' subsystem meaning not recovered. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSpawnMonsterGroupInfo  

*Static definition of a monster spawn group for a level: weighted collection of monster spawn entries used to roll which monsters appear.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| levelId | 0x10 | int | reader |
| groupList | 0x18 | list | reader |


**Formulas / rules:**
- weighted pick: threshold = (int)(rand01 * _DAT_11de98f0 * groupWeight); walk entry list subtracting entry+4 weights until threshold < weight

> This class holds the runtime spawn-roll logic, not just data. rand01 from FUN_100ee450.

---
### CSpoorGroupInfo  

*Static data grouping monster 'spoor' (tracks/footprint) entries. Each group aggregates CSpoorInfo records; consumers look up a group by a runtime spoor id.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| groupKey | 0x14 | int32 | inferred |


> Cross-reference to CSpoorInfo; offset 0x14 is the group key.

---
### CSpoorRoadInfo  

*Config for spoor/tracking trails (monster footprint paths used in tracking/gathering). Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'Spoor' = animal tracks/trail.

---
