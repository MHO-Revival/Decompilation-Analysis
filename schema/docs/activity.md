# Category: activity  (67 classes)

### CAchieveGroupInfo  

*Config record for an achievement group (a category grouping individual achievements). Only CInfoManager accessors and consumer loops recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| groupKey | 0x20 | int32 | inferred |


> Address 11a814e0 appears twice (c0 and c3 decompiler passes of the same function).

---
### CAchieveInfo  

*Config record for a single achievement. Only CInfoManager accessors and consumer loops recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x1c | int32 | inferred |


> Address 11a81ac0 appears twice (c0 and c3 passes).

---
### CActivityHuntInfo  

*Config for timed hunt activity events; checks activity open/running state and resolves the active hunt activity's data.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| activityState_flag | 0x4 | int8 | inferred |


**Constants:** ActivityState_Running=3

**Formulas / rules:**
- active hunt = first record whose activity state byte(+4) == 3

> Own record layout not recovered; the state check is on a separate activity-state object. Closely tied to CActivityInfo.

---
### CActivityInfo  

*Static-data for in-game activities/events. Records carry a runtime state field(+0x10: e.g. 2=open, 3=closed), open/close reward ids(+0x3c/+0x40), and a level-entrust reference(+0x14). Helpers drive activity state transitions from server packets, query whether any activity is open, precache entrust data, and compute exp-limit bonuses tied to level-entrust progress.*  

confidence: **medium**  

related TLV: TlvActivityData, TlvActivityDataList, TlvActivityFetched  


| field | offset | type | source |
|---|---|---|---|
| state | 0x10 | int | reader |
| levelEntrustId | 0x14 | int | reader |
| openRewardId | 0x3c | int | reader |
| closeRewardId | 0x40 | int | reader |


**Constants:** ActivityState_Open=2, ActivityState_Closed=3, StateListEntryStride=5

**Formulas / rules:**
- expLimitBonus += (entrustProgress(entrust+0x24) - 1) * explimit(+0x18)  [variant _field14 uses explimit(+0x14)]

> State-list entry stride is 5 bytes: 4-byte activity id + 1-byte new state. Bonus formulas verified from the (value-1)*multiplier expression.

---
### CActivityLevelEntrustInfo  

*Per-activity-level entrust (commission) reward/config, indexed via the CLevelEnGroupInfo level grid. Provides a level-based lookup used to enumerate entrust entries for an activity level.*  

confidence: **medium**  

related TLV: TlvEntrustGroupStatList, TlvGroupEntrustStatData  


**Formulas / rules:**
- CLevelEnGroupInfo grid index: idx = level - base(+0x30); row = idx / cols(+0x28); col = idx % cols; entry = grid[+0x20][row][col]; valid iff 0 <= idx < count(+0x24) and entry->+0x2c != 0

> The 2D-grid layout (+0x20 row-array, +0x24 count, +0x28 columns, +0x30 base) is the shared CInfoManager/CLevelEnGroupInfo container layout, not fields of the entrust element itself. Entrust TLV docs exist but describe group stats; treat mapping as directional.

---
### CActivityLotteryInfo  

*Static config for activity/event lottery pools. Rows precached per entry at load.*  

confidence: **medium**  

related TLV: TlvLotteryBoxContainer, TlvLotteryBoxItemPool  


---
### CAdditionLevelRewardInfo  

*Extra/bonus ('addition') reward table keyed by level, e.g. supplementary level-up rewards. Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CAstrolabeStarInfo  

*Config for the Astrolabe (constellation) minigame stars; each record carries a star id plus an associated value used to populate global lookup tables.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| starId | 0x10 | int32 | inferred |
| starValue | 0x14 | int32 | inferred |


> Layout inferred from BuildStarIndexTables. DAT_123ad234/DAT_123ad240 are global vectors filled at load.

---
### CAstrolabeTaskPrizeInfo  

*Astrolabe task reward table: for a given task id, holds a weighted set of prize ids and performs a weighted-random draw.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| prizeId | 0x10 | int32 | inferred |
| weight | 0x14 | int32 | inferred |
| taskId | 0x20 | int32 | inferred |


**Formulas / rules:**
- weighted-random draw over {records where taskId==query} using weight field (FUN_10a1cee0 = weighted index picker)

> FUN_10a1cee0 is the shared weighted-random-index helper used across all the pet-attribute rollers in this batch.

---
### CBabecueInfo  

*Barbecue/cooking (BBQ spit) recipe/config table; records keyed by an id field.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| id | 0x24 | int | reader |


> 'Babecue'=Barbecue, the MH felyne cooking mini-system. Loader form is a FindById (id @0x24). Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CCatCuisineRateInfo  

*Static config for Felyne (Cat) Cuisine success/effect rates. Rows precached per entry and linked to buff definitions.*  

confidence: **medium**  

related TLV: TlvCatCuisineData, TlvCatCuisineState  


> TLV structs are runtime cuisine save state; this is the static rate config.

---
### CDailyFramAwardInfo  

*Daily 'farm' (Fram, likely farming/harvest) award table; references item-box groups (CItemBoxGroupInfo) as the reward containers. Only factory boilerplate + one cross-ref recovered.*  

confidence: **low**  


> 'Fram' is likely a typo of 'Farm'. Cross-reference to CItemBoxGroupInfo for reward containers. No field offsets recovered.

---
### CDailySchedulePrizeInfo  

*Prize table for the daily-schedule (daily login/quota) activity.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEliminateMatchInfo  

*Config for elimination (knockout) match rounds in a PvP tournament/ladder. Only factory boilerplate recovered.*  

confidence: **low**  


> Pairs with CQualifierMatchInfo. No field data recovered.

---
### CExpressionInfo  

*Data-registry for the 'Expression' collection/progression system (matches TLV ExpressionItem: id, level, point, collectlevel). Entries are keyed by a composite id = category*100 + sub-index; each has a per-level point cost (+0x20) and a max/collect level (+0x3c). Methods sum point ranges, count valid entries, enumerate categories, look up by name, and advance a level by consuming points.*  

confidence: **medium**  

related TLV: ExpressionItem  


| field | offset | type | source |
|---|---|---|---|
| id | 0x10 | int32 | tlv-doc |
| point | 0x20 | int32 | tlv-doc |
| collectlevel | 0x3c | int32 | inferred |
| fieldA | 0x14 | int32 | inferred |
| fieldB | 0x1c | int32 | inferred |


**Formulas / rules:**
- id = category * 100 + subIndex
- SumPointsRange(cat,n) = sum_{i=1..n} entry(cat*100+i).point(+0x20)
- AdvanceLevel: while remainingPoints >= entry.point and level < collectlevel(+0x3c): remainingPoints -= entry.point; level++

> Cross-referenced with ExpressionItem.md (id/level/point/collectlevel), which confirms this is a level+points collection system rather than chat emotes. Offsets 0x10/0x20 map to id/point; 0x3c inferred as collectlevel.

---
### CFarmAwardInfo  

*Award/reward table for the farm activity.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CFarmCDInfo  

*Cooldown (CD) config for the farm/plantation activity; loader touches CItemBaseInfo.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CFarmCPInfo  

*Farm system config (CP = capacity/points or combat-power within the farm mini-game). Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'CP' meaning ambiguous.

---
### CFarmFacilityInfo  

*Definition of farm facilities/buildings in the farm mini-game. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CFireworkInfo  

*Config for firework items/effects (festival/celebration content). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CFishInfo  

*Static config table for the fishing activity: each record ties a fish type to a monster id and spawn parameters. The recovered logic is the client-side fishing-spot effect spawner that scatters fish visual effects around target positions.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| monsterId | 0x38 | int | inferred |
| spotId | 0x20 | int | inferred |


**Constants:** FishEffectFile=fish.pro, ScriptEvent=TargetPos, ScriptEvent=ShowStart, MaxSpotsPerUpdate=6

**Formulas / rules:**
- spawn angle uses rand()%0x168 (0..359) scaled by DAT_11de98c0 then *DAT_11de98e8 (deg->rad); position offset = (cos(a), sin(a))

---
### CFreeHuntingCreditInfo  

*Config for credits/points earned in a free-hunting activity mode. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CGodLuckInfo  

*Static config for the 'God Luck' (blessing/lucky) system. Rows precached per entry at load.*  

confidence: **medium**  


---
### CGuideBookChapterInfo  

*Config record for a guide-book (hunter handbook) chapter, holding chapter actions and linked action infos. Consumer builds chapter/action state from a source record. Runtime/save counterpart is TlvGuideBookData.*  

confidence: **low**  

related TLV: TlvGuideBookData  


| field | offset | type | source |
|---|---|---|---|
| autoOpenFlag | 0x04 | bool | inferred |
| chapterCount | 0x08 | int32 | inferred |
| actionEntries | 0x10 | vector<0x3c> | inferred |


> TLV is the player-save form (guideBookChapterCount/guideActionInfos/guideBookChapterInfos); this Info is the config/runtime form. Field offsets inferred from the consumer only.

---
### CHRLevelInfo  

*Config record for a Hunter-Rank (HR) level: the requirements/thresholds to advance to a given HR level. Consumer computes HR level-ups. Only manager accessors + one evaluator recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| requiredValue | 0x14 | int32 | inferred |
| prerequisiteId | 0x18 | int32 | inferred |


**Constants:** HRCapAttributeId=0x13d

**Formulas / rules:**
- HR cap = CAttributeInfo(id=0x13d).field_0xd0; level-up loop advances from current+1 while requiredValue met and prerequisiteId satisfied, not exceeding cap

---
### CHubEntryConfigInfo  

*Static config controlling access/entry to hub (gathering hall / town) instances. Used to test whether a given entry is available to the player.*  

confidence: **medium**  


---
### CHubEntryInfo  

*Definition of hub entries (quest/activity access points in the hub). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CHubEntryRaidConfigInfo  

*Raid-mode configuration attached to a hub entry (raid instance setup). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CHubPageStarLevelInfo  

*Star-level thresholds for a hub page/section (e.g. quest-hub star ratings). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CHunterChallengeCardInfo  

*Static-data for Hunter 'challenge cards' (part of a hunter card/collection minigame with Challenge, Ability and Record card families). Records carry a card id(+0x10) and an enabled flag(+0x18). Helpers collect available cards, build star-challenge card instances, and match cards to targets. One method is a memory-pool performance benchmark left in the build.*  

confidence: **medium**  

related TLV: TlvChallengeRewardStats  


| field | offset | type | source |
|---|---|---|---|
| cardId | 0x10 | int | reader |
| secondaryKey | 0x1c | int | reader |
| enabledFlag | 0x18 | byte | reader |


**Constants:** CardFamily_Challenge=1, CardFamily_Ability=2, CardFamily_Record=3, sizeof_CHunterStarChallengeCard=0x3c, sizeof_CHunterStarCardTargetCard=0x28

> Sibling managers CHunterAbilityCardInfo (108c64c0) and CHunterRecordCardInfo (108c6620) share the same layout. 108c60b0 is CHunterChallengeCardInfo's own paged getter.

---
### CHunterStarLevelInfo  

*Config record for a hunter star-level tier (star progression with branch level and challenge-card links). Only manager accessor + one resolver recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| starLevelId | 0x20 | int32 | inferred |
| branchLevelId | 0x1c | int32 | inferred |
| challengeCardIds | 0x2c | vector<int32> | inferred |
| selfId | 0x10 | int32 | inferred |


> References CHunterBranchLevelInfo and CHunterChallengeCardInfo managers.

---
### CHunterStarStatInfo  

*Hunter-star statistics config table (per-star-rank statistic definitions). Recovered logic validates and builds UI lists from a player's star-stat arrays.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| statFieldsBlock | 0x10 | int[5] | inferred |
| statType | 0x24 | int | inferred |


**Constants:** MaxPlayerStarStats=3000, PlayerStatEntryStrideShortsA=5, PlayerStatEntryStrideShortsB=4

---
### CInDirectPVPInfo  

*Static config for indirect PVP (asynchronous / non-realtime PVP) rules. Rows precached per entry at load.*  

confidence: **medium**  


---
### CLeagueInfo  

*League/tournament (PvP season) config table. Records define league seasons/schedules; recovered logic collects league entries for UI and tracks the currently-active league season.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| seasonId | 0x18 | int | inferred |


**Constants:** ActiveLeagueId=4, ResetPeriod=0x5dc(1500)

---
### CLeagueScoreInfo  

*Static config for league/ranked-score thresholds and rewards. Rows precached per entry at load.*  

confidence: **medium**  


---
### CLevelAppraisalInfo  

*Static data for level (quest) appraisal / rating rules used to score a hunt's performance.*  

confidence: **low**  


> No field offsets exposed; iterator applies FUN_1175c4c0 per appraisal record.

---
### CLevelEnGroupInfo  

*Data-registry for level 'En' groups (groups of CLevelEnSubGroupInfo, tied to CItemBaseInfo). Holds a group id (+0x10) and a sub-group id vector (+0x18..0x1c). Links sub-groups back to their parent group and precaches referenced sub-groups/items.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x10 | int32 | inferred |
| subGroupIds_begin | 0x18 | int32* | inferred |
| subGroupIds_end | 0x1c | int32* | inferred |


> Meaning of 'En' unresolved (enchant/energy?). Tightly coupled to CLevelEnSubGroupInfo (parent id stored at sub+0x94) and CItemBaseInfo.

---
### CLevelEnSubGroupInfo  

*Static data for level 'entrust' (commission) sub-groups. Each sub-group aggregates CLevelEntrustNpcInfo entries and references item rewards (CItemBaseInfo).*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| rewardListBegin | 0x1c | ptr | inferred |
| rewardListEnd | 0x20 | ptr | inferred |


**Formulas / rules:**
- reward count = (param+0x20 - param+0x1c) >> 4 (stride 0x10)

> Cross-references CLevelEntrustNpcInfo and CItemBaseInfo.

---
### CLevelExcellentRankInfo  

*Config record for a level 'excellent' rank band (S/A/B-style clear-evaluation tier bounded by a score range). Consumers add score, pick the matching rank, and normalize the rank thresholds.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| lowerBound | 0x14 | int32 | inferred |
| upperBound | 0x18 | int32 | inferred |


**Constants:** MaxScore=1000

**Formulas / rules:**
- score(this+0xc) = clamp(score + delta, 0, 1000)
- rank match: lowerBound < score <= upperBound
- threshold normalize: rank[i].lowerBound = rank[i-1].upperBound (first rank = 0)

---
### CLevelNARegionInfo  

*Static game-data record describing a 'NA region' of a hunting level/map. Each record links to a CMHLevelInfo cell (by level index) and carries a key/id used to build a per-level region lookup table.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| levelCellIndex | 0x14 | int32 | inferred |
| regionKey | 0x18 | int32 | inferred |


**Formulas / rules:**
- CMHLevelInfo GetById: id-=base(+0x30); bucket=arr[+0x20][id/bucketSize(+0x28)]; entry=bucket[id%bucketSize]

> No DebugFormat/Reader recovered; offsets 0x14/0x18 inferred from the lookup-builder consumer. 118c9c00 also touches CMHLevelInfo internals (cell+0x14/+0x18, tree at cell+0xC0).

---
### CLevelResInfo  

*Data-registry describing a level/instance's resource bindings. A runtime level object holds mapId(+0x14=[5]), levelModeId([8]) and difficulty/level values; ResolveLevelData fills in the resolved CMHMapInfo([6]), CMHLevelModeInfo([9]), static weather, matching CLevelResInfo config slots, and the appropriate hub-entry configs, plus spawn monster groups.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| mapId | 0x14 | int32 | inferred |
| mapInfo | 0x18 | ptr | inferred |
| levelModeId | 0x20 | int32 | inferred |
| levelModeInfo | 0x24 | ptr | inferred |
| resSlots_type1 | 0x18c | ptr[20] | inferred |
| resSlots_type2 | 0x1dc | ptr[20] | inferred |
| hubEntry | 0x270 | int32[2] | inferred |


**Formulas / rules:**
- Config match: entry.mapId(+0x14)==obj.mapId && entry.levelMin(+0x18) <= obj.level(+0xe) <= entry.levelMax(+0x1c) && entry.rangeMin(+0x20) <= obj[0xc] <= entry.rangeMax(+0x24); slot index = entry+0x28 (must be < 20); array = type1(+99) if entry+0x2c==1 else type2(+0x77) if ==2

> Array base offsets given as word-index*4 from object base; slot count cap 20 (0x14) confirmed. Ties level instances to map/mode/weather/hub-entry/spawn data.

---
### CMHLevelInfo  

*Static config/registry class describing a game Level (a hub/expedition map instance) in Monster Hunter Online. It is managed by the global CInfoManager<CMHLevelInfo> singleton and aggregates the quests, spawn groups, item drops, hub-entry configs and league schedule attached to a level. Almost every method here is an accessor/iterator over that manager keyed by level id, or a collector that walks the level's sub-lists and validates their referenced Info records (CHubEntry*, CSpawnMonsterGroupInfo, CItemBaseInfo, CLeague*).*  

confidence: **medium**  

related TLV: TlvLevelData, TlvHubPageStar, TlvHubPage, TlvStarLevelData  


| field | offset | type | source |
|---|---|---|---|
| leagueScheduleId | 0x264 | int32 | reader |
| groupKey | 0x20 (word[8]) | int32 | inferred |
| matchField | 0x14 | int32 | inferred |


**Constants:** HubPageStarKey=page*100+star, MaxHubMonsterGroupWalk=10, UiEvent_HubMapInfo=0x45

**Formulas / rules:**
- CHubPageStarLevelInfo lookup key = pageId * 100 + starLevel
- CInfoManager::GetById(id): idx = id - baseId(+0x30); page = mgr[+0x20][idx / bucketSize(+0x28)]; record = page[idx % bucketSize]; valid iff 0<=idx<capacity(+0x24)

> Every method carries the mislabeled name CMHLevelInfo::GetManagers because Ghidra propagated the singleton-accessor string. Only 107d6dd0 is truly GetManagers; 11a08370/11a4aaa0 are inlined duplicates. The rest are distinct member functions renamed above by behavior. The pervasive FUN_11679e10(&x,"ClassName",0) + (id-baseId)/bucketSize indexing is the CInfoManager registry lookup (GetById). The Tlv* Task/Level structures are runtime network/save state, NOT this static config class; treat relatedTlv as directional only.

---
### CMHLevelModeInfo  

*Static data enumerating MH level (quest) modes. Provides an id-validity check and per-mode iteration into CMHLevelInfo.*  

confidence: **medium**  


**Formulas / rules:**
- IsValidModeId: id=obj->GetId(); valid iff id>=0 and pagedMap[id] exists

> 116b3350 is a clear boolean id-existence check (returns CONCAT31(...,1) on found). Cross-references CMHLevelInfo.

---
### CManufactureSkillLearnInfo  

*Static-data table describing which manufacturing (crafting) recipes/ingredients a player unlocks as a given crafting skill levels up. Records key on skillId(+0x14) and a level/group value(+0x18). Helpers cross-reference CManufactureIngredientLearnInfo, CManufactureInfo, CManufactureProficiencyInfo and CItemBaseInfo to build and send client packets listing learnable recipes.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| id | 0x10 | int | reader |
| skillId | 0x14 | int | reader |
| learnGroup | 0x18 | int | reader |


**Constants:** MsgOp_LearnableRecipe=0x76, MsgOp_Proficiency_0x75=0x75, MsgOp_Proficiency_0xa6=0xa6

> Ingredient-learn entry offsets observed: +0x14 skillId, +0x18 group, +0x10 id, +0x1c recipe/manufacture ref, +0x24/+0x28 params. CManufactureInfo/CItemBaseInfo use the shared paged getter with word-offset fields [8]=pagePtr [9]=count [10]=pageSize [0xc]=baseId.

---
### CMonolopyBlockInfo  

*Static data for a single board tile in the 'Monolopy' (Monopoly-style) minigame board. A field at +0x20 groups tiles; consumers collect tiles matching a requested group.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| groupId | 0x20 | int32 | inferred |


> Offset 0x20 (local_c[8]) is the only clearly-read field. Class name is game's own misspelling 'Monolopy' (Monopoly board minigame).

---
### CMonolopyCostInfo  

*Cost table for the 'Monolopy' (Monopoly-style) board-game minigame/event, e.g. dice/roll or step costs. Only factory boilerplate recovered.*  

confidence: **low**  


> 'Monolopy' is the game's spelling of Monopoly (see also CMonolopyRoundPrizeInfo). No field data recovered.

---
### CMonolopyInfo  

*Monopoly-style board minigame config (name is a typo of 'Monopoly'); records define board tiles/positions. Computes and caches the max tile index.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| tileIndex | 0x14 | int32 | inferred |


**Formulas / rules:**
- maxTileIndex = max over records of field_0x14

> 'Monolopy' is the game's own misspelling of Monopoly. Two methods at 11a78530 and 11a78c50 are identical; the bundle labeled both with the same address in the header.

---
### CMonolopyMonsterLibInfo  

*Static 'monster library' data for the Monolopy (Monopoly-style) minigame, tying board blocks to monsters.*  

confidence: **low**  


> Cross-reference to CMonolopyBlockInfo confirms the board minigame linkage.

---
### CMonolopyRoundPrizeInfo  

*Per-round prize table for the 'Monolopy' (Monopoly) minigame/event. Only factory boilerplate recovered.*  

confidence: **low**  


> Family with CMonolopyCostInfo. No field data recovered.

---
### COperationActivityDataInfo  

*Data table for operational (live-ops) activity entries.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### COperationActivityGroupInfo  

*Grouping table for operational (live-ops) activities.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CPhysicalCardGroupInfo  

*Group table for 'physical' (stamina/energy 体力) cards, likely a daily stamina/recharge card group. One real query method over the group grid was recovered.*  

confidence: **low**  


> Only 2 methods recovered. Second is a real lookup but without field labels; offsets not confidently identified.

---
### CPlayerLvRewardMiniGroupInfo  

*Grouping table for player-level 'mini' reward sets (small level-up reward groups). Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CQualifierMatchInfo  

*Config for qualifier (qualifying round) matches in a PvP tournament/ladder. Only factory boilerplate recovered.*  

confidence: **low**  


> Pairs with CEliminateMatchInfo. No field data recovered.

---
### CSculptureInfo  

*Sculpture (carving) activity definition entry. Records are keyed/grouped by a library id (record+0x28 / record+0x14) and used to build per-player sculpture maps and to collect sculptures belonging to a given library.*  

confidence: **medium**  

related TLV: TlvSculptureData, TlvSculptureLibData, TlvSculptureRound  


| field | offset | type | source |
|---|---|---|---|
| libKey | 0x28 | int32 | inferred |
| libId | 0x14 | int32 | inferred |


**Constants:** MaxIds=10, InnerStride=0x185, OuterMax=4

> TlvSculpture* are the persistence/network structs; these are client runtime iterators over CSculptureInfo. Distinguish two key offsets: +0x28 (libKey) used by 10be6ef0/114b1c50, +0x14 (libId) used by 11a53910. record[10]==key checks confirmed against code.

---
### CSculptureLibInfo  

*Sculpture-library config (sculpture/carving collection feature); links library entries to CSculptureInfo and CItemBaseInfo item definitions.*  

confidence: **low**  

related TLV: TlvSculptureLibData, TlvSculptureLibWrapper, TlvSculptureData  


| field | offset | type | source |
|---|---|---|---|
| itemCount | 0x58 | int32 | inferred |


> Own record layout not recovered (per-record work is in uninspected FUN_11a53a80/11a53910). Strongly associated with CSculptureInfo and CItemBaseInfo. TlvSculptureLibData is the serialized counterpart.

---
### CSpoorInfo  

*Config record for a 'spoor' (monster track/footprint investigation entry) identified by a (key1,key2) pair. Only manager accessors and consumer loops recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| key1 | 0x18 | int32 | inferred |
| key2 | 0x1c | int32 | inferred |
| groupKey | 0x14 | int32 | inferred |


> 'Spoor' = animal track; likely the hunt-investigation/tracking feature.

---
### CSpoorPrizeBonusInfo  

*Bonus-prize table tied to 'spoor' (monster tracks/footprints) gathering.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSpoorPrizeInfo  

*Config record for a spoor (track-investigation) reward/prize, gated by an accumulated spoor count. Only manager accessors + consumers recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| requiredCount | 0x20 | int32 | inferred |


---
### CSupplyPlanInfo  

*Static/loaded data for hunter supply plans (loadout presets of item type/count/grid positions). Loader parses a TlvSupplyPlanList blob and merges any manager-defined active plans by name into a tree keyed by plan id.*  

confidence: **high**  

related TLV: TlvSupplyPlanList, TlvSupplyPlan  


| field | offset | type | source |
|---|---|---|---|
| curPlan | 0x154 | uint8 | reader |
| planMap | 0x13c | tree | inferred |
| planName | n/a | char[0x14] | reader |


**Constants:** PlanRecordSize=0x188, NameLen=0x14, DefaultCurPlan=1

**Formulas / rules:**
- plan record size = 0x188 bytes (0x62 dwords)

> Strong match: FUN_112428f0 == TlvSupplyPlan reader (sub_10113D40 family), 0x62-dword (0x188) copy loop, curPlan/planCnt bytes match TlvSupplyPlanList fields 1/2.

---
### CThousandsLayerInfo  

*Config for a 'thousand layers' tower/endless activity.*  

confidence: **low**  


> Name interpreted as a multi-floor tower activity. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CTournamentsAwardInfo  

*Static config for tournament award/prize tiers. Rows precached per entry at load.*  

confidence: **medium**  


---
### CTournamentsInfo  

*Config record for a tournament/arena event (scheduled competitions with reward lists). Only manager accessors and consumer loops recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| startTime | 0x14 | int64? | inferred |
| endTime | 0x2c | int64? | inferred |


---
### CTowerDefenseInfo  

*Config for a tower-defense activity/game mode. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CTowerLayer_SupplyInfo  

*Supply/reward config per layer of a tower-defense or climbing-tower activity. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CWildHuntTaskRatioInfo  

*Config record for wild-hunt task ratios (weighted per-difficulty probability/ratio table used to roll a task outcome). Only manager accessors + a roller recovered.*  

confidence: **medium**  

related TLV: TlvWildHuntSoulData  


| field | offset | type | source |
|---|---|---|---|
| weightOrId | 0x14 | int32 | inferred |
| ratioArray | 0x18 | float[3] | inferred |


**Formulas / rules:**
- weighted random pick over entries; result = entry.ratioArray[difficulty]; difficulty must be < 3

> TlvWildHuntSoulData is a related wild-hunt runtime struct; directional only.

---
### CXHunterInfo  

*Static table for X-Hunter (special hunter mode) value scaling by level. Given a level and category it interpolates a value from a level-band row.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| categoryPacked | 0x10 | int | reader |
| levelMin | 0x14 | int | reader |
| levelMax | 0x18 | int | reader |
| levelStep | 0x1c | int | reader |
| valuePerStep | 0x20 | int | reader |
| valueBase | 0x24 | int | reader |


**Formulas / rules:**
- value = ((level - levelMin) / levelStep) * valuePerStep + valueBase, when valuePerStep != 0; otherwise value = valueBase.

---
