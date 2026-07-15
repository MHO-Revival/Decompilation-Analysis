# Category: quest  (25 classes)

### CGuideBookActionInfo  

*Guide-book (hunter's notes / monster field guide) action definitions - actions/entries triggered from the guide book UI. Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CGuildQuestLevelInfo  

*Static data for guild-quest level tiers.*  

confidence: **low**  


> Only manager accessors and simple per-record iterators recovered; no field offsets.

---
### CGuildQuestPrizeInfo  

*Static definition of guild-quest reward rows (prize item ids granted for a guild quest).*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| questId | 0x14 | int | reader |


**Constants:** prizeListMax=4

---
### CGuildTaskInfo  

*Guild (legion) task definition table: each record is a guild task/objective referenced by id. Recovered logic validates a player's guild-task id arrays and collects tasks by category.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| typeOrCategory | 0x20 | int | inferred |


**Constants:** MaxPlayerTasks=0x400, TaskBitsetSize=0x640(1600), PlayerTaskEntryStride=7

---
### CHubEntryConfigKingQuestInfo  

*Hub-entry config for 'King' (special boss) quests.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CHubEntryConfigLetterQuestInfo  

*Hub-entry config for letter (mail-triggered) quests.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CIllustrateTaskInfo  

*Illustration/monster-guide task definition table (hunter's notebook entries). Recovered logic links guide books to star stats, collects tasks by book, and rebuilds task state.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| bookId | 0x18 | int | inferred |


---
### CLevelCatExtraStrateInfo  

*Extra Felyne ('Cat') strategy config for mission levels.*  

confidence: **low**  


> 'Strate'=strategy; 'Cat'=Felyne. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CLevelEnGroupRewardInfo  

*Group reward config for a stage/level (level = mission/stage), likely energy or grouped completion rewards. Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'En' meaning unresolved.

---
### CLevelEntrustNpcInfo  

*Config record for a level/stage's entrust (commission) NPC — the NPC that hands out entrusted quests for a level. Only manager accessors + consumers recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| levelId | 0x10 | int32 | inferred |
| resolvedNpcId | 0x98 | int32 | inferred |


---
### CLevelGroupInfo  

*Grouping of stages/levels (mission grouping). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLevelRegularRewardInfo  

*Regular (standard) reward config for a stage/level completion. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CMHLevelAdditonalTargetInfo  

*Additional (optional/sub) objectives table for a MH mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CMHLoseLevelConditionInfo  

*Failure (lose) conditions for a MH mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CMHWinLevelConditionInfo  

*Success (win/clear) conditions for a MH mission level.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CRoadOfGrowthInfo  

*Config for a 'road of growth' progression/achievement path with staged rewards. Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered.

---
### CTaskAttackInfo  

*Maps up to five attack-target ids (monsters/NPCs) to a task; used to find which task is triggered when a given target is attacked.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| taskId | 0x10 | int32 | inferred |
| targetId0 | 0x18 | int32 | inferred |
| targetId1 | 0x1c | int32 | inferred |
| targetId2 | 0x20 | int32 | inferred |
| targetId3 | 0x24 | int32 | inferred |
| targetId4 | 0x28 | int32 | inferred |


**Formulas / rules:**
- match if queryTarget in {targetId0..targetId4}

> Clean 5-slot equality check gives high confidence on offsets 0x18-0x28.

---
### CTaskBountyLevelInfo  

*Static definition of task/quest bounty-level rows (keyed by a bounty/task id at +0x14); used to collect available bounties and to link a task to its bounty level.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| bountyId | 0x14 | int | reader |


> Sibling class CTaskInfo.

---
### CTaskCalculateInfo  

*Config table describing how task/quest progress or rewards are calculated. Only the CInfoManager factory-registration boilerplate was recovered; no field-bearing methods survived.*  

confidence: **low**  


> All four recovered methods are the shared CInfoManager singleton/factory pattern; no DebugFormat, reader, XML or field offsets present. Field layout unknown.

---
### CTaskChapterInfo  

*Config record for a task/quest chapter (groups task series into chapters). Only manager accessors + consumers recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| chapterPtr | 0x30 | ptr | inferred |
| seriesId | 0x34 | int32 | inferred |
| taskPtr | 0x2c | ptr | inferred |


---
### CTaskGroupInfo  

*Data-registry for task/quest groups. A group's owner object (this+0x2c) holds a task-id list (+0x3c..0x40); the group resolves those ids to CTaskGroupInfo entries. Provides find-by-predicate, collect-all-tasks, and post-load linking to task bounty levels.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| owner | 0x2c | ptr | inferred |
| resolvedTasks | 0x34 | vector | inferred |


> The 11747290/117472a0 pair are the same function (auto-tool emitted a c0 and a c3 decode of one body).

---
### CTaskHuntStageInfo  

*Config for hunt-task stage gating: defines a monster/target list plus a required kill count and a rank threshold that unlocks a hunt stage.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| targetList_begin | 0x14 | int32* (vector begin) | inferred |
| targetList_end | 0x18 | int32* (vector end) | inferred |
| requiredCount | 0x20 | int32 | inferred |
| rankThreshold | 0x24 | int32 | inferred |


**Formulas / rules:**
- stage unlocked when count(entries in targetList where FUN_114cdd70(entry)) >= requiredCount, provided rankThreshold check passes

> Layout inferred from FindUnlockedStage. FUN_114cdd70 = per-target 'is completed/killed?' predicate; FUN_1134b7d0 = player rank/count provider.

---
### CTaskInfo  

*Static config/registry class describing a Task (quest / objective definition) in MHO, managed by the global CInfoManager<CTaskInfo> singleton. It is loaded from task-library config blobs and, at runtime, is queried to build task sets, active-task chains, and NPC/location task lists, and to validate task-condition references (tutorial counters, buffs, other tasks). Sibling config types referenced: CTaskLibInfo, CTutorialCounterInfo, CBuffInfo.*  

confidence: **medium**  

related TLV: TlvTaskContent, TlvTaskState, TlvTaskCount, TlvRefreshLibTasks, TlvQuestSystemData  


| field | offset | type | source |
|---|---|---|---|
| taskId | 0x10 | int32 | reader |
| conditionTree | 0x14 | rbtree | reader |
| field48 | 0x48 | int32 | reader |
| flag60 | 0x60 | uint8 | reader |
| field64 | 0x64 | int32 | reader |
| field74 | 0x74 | int32 | reader |
| field78 | 0x78 | int32 | reader |
| taskSetTree | 0x90 | rbtree | reader |
| childTaskIds | 0xb0 | vector<int32> | reader |
| fieldBC | 0xbc | int32 | reader |
| setFieldC0 | 0xc0 | int32 | reader |
| setFieldC8 | 0xc8 | int32 | reader |
| setFieldCC | 0xcc | int32 | reader |
| activeTaskChain | 0xf0 | vector<CTaskInfo*> | reader |
| def_type | obj[0xb]+0x10 | int32 | inferred |
| def_name | obj[0xb]+0x4c | char[0x1f] | inferred |
| def_objectives | obj[0xb]+0x20 | vector | inferred |
| def_chainTargetId | obj[0xb]+0x134 | int32 | inferred |
| def_acceptNpc | obj+0x30 (word 0xc) | int32 | inferred |
| def_submitNpc | obj+0x34 (word 0xd) | int32 | inferred |
| def_categoryId | obj+0x2c->+0x18 | int32 | inferred |


**Constants:** MainTaskType=1, MaxTaskSetSlots=64 (0x40), ConditionBitsetSlots=60 (0x3c), Event_LoadTableA=700 (0x2bc), Event_LoadTableB=0x27b (635), Cond_TutorialCounter=0x12d/0x12f, Cond_TaskRange=0x2bd-0x2c2, Cond_Buff=0x385, Cond_0x4b1_range=1..0x198

**Formulas / rules:**
- CInfoManager::GetById(id): idx = id - baseId(+0x30); record = mgr[+0x20][idx/bucketSize(+0x28)][idx%bucketSize]; valid iff 0<=idx<capacity(+0x24)
- ValidateConditionRef buff slot must satisfy 0 <= slot < 8

> All 17 methods are mislabeled CTaskInfo::GetManagers (symbol propagation). Only 104d8c80 is the real singleton accessor. TlvTaskContent (id, lib, arg1-3, npc, name, note) is the network/serialized view and aligns loosely with the config CTaskInfo loaded here (id, lib id, npc, name), but CTaskInfo is the client static-config class, not the TLV reader — relatedTlv is directional. The record layout uses a two-level indirection: manager -> record(+0x2c = task object) -> obj[0xb] = task-definition struct where the descriptive fields live; offsets marked obj[...] are relative to that def struct and are inferred, not from a DebugFormat printer (none present in this bundle).

---
### CTaskLibInfo  

*Static-data library of task/quest groups. Each managed record exposes a descriptor at +0x2c whose +0x10 holds a task-category enum (values 1..7). The helpers query the CInfoManager-backed pool to fetch task-lib entries filtered by that category, or iterate all of them.*  

confidence: **medium**  

related TLV: TlvRefreshLibTasks, TlvTaskContent  


| field | offset | type | source |
|---|---|---|---|
| descriptor | 0x2c | ptr | reader |


**Constants:** TaskCategoryCount~7

**Formulas / rules:**
- CInfoManager paged getter (shared infra): index = id - baseId(mgr+0x30); page = arr[mgr+0x20][index / pageSize(mgr+0x28)]; record = page[index % pageSize]; bounds-checked against count(mgr+0x24). GetCount via vtable+0x28; flat vector at mgr+0x14..0x18.

> TLV names (TlvRefreshLibTasks, TlvTaskState, etc.) are runtime/network player-state structs, not this static config class; only directionally related. The category enum meaning (main/branch/daily/guild/...) is not proven from code.

---
### CTaskSeriesInfo  

*Data-registry for task series (quest chains); structurally parallel to CTaskGroupInfo. The owner object (this+0x2c) holds a task-id list (+0x2c..0x30); the series resolves those to CTaskSeriesInfo entries. Provides find-by-predicate, collect-all, and bulk post-load passes.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| owner | 0x2c | ptr | inferred |
| resolvedTasks | 0x34 | vector | inferred |


> Mirror of CTaskGroupInfo (owner list at +0x2c vs +0x3c). The 118a8970/118a8980 pair are the same function decoded twice.

---
