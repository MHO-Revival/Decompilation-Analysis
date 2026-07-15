# MHO Quests / Tasks / Objectives — Round 7

151 functions from CryGame.dll.


## quests  (45)

### CActivityLevelEntrustInfo::GetByIndex `@0x114d5330` — quests/entrust-activity
*Contiguous-vector lookup of CActivityLevelEntrustInfo by array index param_1.* (server: authoritative-config: index-based entrust table accessor., conf high)
- ƒ if 0<=param_1 < (mgr[+0x18]-mgr[+0x14])>>2: return vec[param_1] else 0

### CActivityLevelEntrustInfo::GetByKey `@0x111ff1e0` — quests/entrust-activity
*Paged-array lookup of a CActivityLevelEntrustInfo record by key id.* (server: authoritative-config: activity/entrust level info by id., conf high)
- ƒ same paged accessor: base=+0x30,pageSize=+0x28,count=+0x24,pages=+0x20

### CChapterUI::FillChapterVO `@0x107f43c0` — quests/chapters-ui
*Populates a Scaleform view-object (VO) with quest-chapter fields, then sets two Flash timeline params. Reads a chapter record and writes string/int/bool VO fields consumed by the ActionScript UI.* (server: client-only (UI VO population); reveals chapter record layout the server must supply, conf medium)
- ƒ chapter record offsets: +0x7c = nChapterID (int, written to VO 'nChapterID' via FUN_104d1670), +0x80 = strChapterName ptr (VO 'strChapterName' via FUN_104d1550), +0x64/100 = bOpen (byte, VO 'bOpen' via FUN_104d15e0)
- ƒ Flash calls: SetVariable('FillBorderBlack_FadeInTime', 0x3f800000=1.0f) then ('FillBorderBlack_Active', 0x3f800000=1.0f) via vtbl+0x2b4 on DAT_1202e818+0x34 (Flash/GFx player)
- ƒ the standard '(flags>>6 & 1)' pattern is a CVariant/smart-string refcount-owning check (bit 6 of type byte = heap-allocated string), used throughout this chunk for AddRef/Release

### CDailyRewardUI::BuildDailyScheduleQuestListVO `@0x1089b5f0` — quests/daily-schedule-ui
*Builds the DAILY_SCHEDULE_QUEST_SIMPLE_DATA VO array (questDataArray): iterates the client quest list and emits a simple card per daily-schedule quest with name, priority, bg images, counts, type, comment level, id and role/HS-level requirements. Also computes exp/money award preview.* (server: client-only display; reward preview (currentValue) mirrors server-authoritative daily reward state, conf medium)
- ƒ quest object per entry: piVar2 = *piVar10; piVar2[0xb] = quest def record; skip if (char)questDef[0x4b] != 0; questDef[0x3a] used as id
- ƒ reward preview branch: if no reward-state object -> FUN_1089e5e0() reward record, uStack_c8 = rec+0x24 (award value), currentValue(uStack_cc)= that value only if completed-flag(iVar4)!=0; else FUN_1161a1e0(0x20) provides claimed(+0x14) / total(+0x18) counts
- ƒ VO fields: questName, priority=rec+0x18, bgPath=rec+0x34, bgPath2=rec+0x4c, questCounts, questFinishCounts, questType, commentLevel, questID, roleLevelRequire, roleHSLevelRequire
- $ reward award value read from FUN_1089e5e0 record +0x24

### CDailyRewardUI::RegisterHandlers `@0x1089a840` — quests/daily-schedule-ui
*Registers the Daily-Schedule/Daily-Reward UI model handlers (InitModel, QuestInfoTipsData, CollectTipsData) and the ActionScript commands OnOpenDailyScheduleByQuestID / OnOpenDailySchedule.* (server: client-only handler wiring, conf high)
- ƒ registers via FUN_100b62c0/FUN_1089d120 pairs: InitModel, QuestInfoTipsData->CDailyRewardUI::RegisterHandlers(sub), CollectTipsData->CDailyRewardUI::BuildDailyScheduleRewardItemData, OnOpenDailyScheduleByQuestID->FUN_1089acd0, OnOpenDailySchedule->FUN_1089ac70

### CEntrustClient::OnRecvEntrustLevelList `@0x112a0880` — quests/entrust-commission
*Client handler for the server 'Entrust Level List' response. On success (errcode 0) it rebuilds the local entrust-level list from the packet: iterates a count of fixed-size entries and appends each to a vector, then sends ack message 0x109. On a specific code it grants an activity reward; otherwise formats an error log line.* (server: validation/client: parses server-authoritative entrust list. The reward id 5196 and errcode 190006 are server-defined; server owns the list contents and the reward grant., conf high)
- ƒ success branch when param_4[0]==0
- ƒ entry count = (short)param_4[1]; entries start at param_4+6, stride 0x196 (406) bytes
- ƒ each entry copied as 0x65 (101) dwords + 1 short (=406 bytes) into local buffer then appended to vector at (iVar2+0x2b9c)[+0x1c..+0x20], node size 0x10
- ƒ after fill: send client message 0x109 (265)
- ƒ if errcode == 0x2e636 (190006): GrantActivityReward(0x144c=5196) and return
- ƒ else: format 'Recv Entrust Level List Fail Errcode = %d'
- $ GrantActivityReward id 0x144c (5196) on errcode 190006
- $ network opcodes: response consumed here, ack 0x109 (265)

### CEntrustQuestMgr::ValidateAcceptEntrust `@0x11528890` — quests/entrust-commission
*Validates accepting an entrust (commission) quest. Resolves four config records by id: CMHLevelInfo(param_4=levelId), CLevelEnGroupInfo(param_2=groupId), CLevelEnSubGroupInfo(param_3=subGroupId), CLevelEntrustNpcInfo(param_5=npcId). Checks group prerequisite cost/item, group/subgroup unlock state, and level availability, returning granular error codes.* (server: authoritative validation: gates entrust/commission acceptance. Error codes 190001/190002/190007/190011/190017 must be replicated by the server for accept-entrust requests., conf high)
- ƒ All four records must resolve non-null else return 0x2e631 (190001)
- ƒ if group[iVar4+0x24] > 0: FUN_11399b20()->vtbl+0x10(group[+0x24]) must be true else return 0x2e63b (190011) — group entry cost/requirement check
- ƒ unlock: (this[+4]+0x2b80)->vtbl+0x38(param_3) OR ->vtbl+0x44(subgroup+0x1c); if both false return 0x2e641 (190017)
- ƒ FUN_11803c00(param_3) && FUN_1173ecb0(param_4) must both pass
- ƒ (this[+4]+0x2b98)->vtbl+4(param_2) group must be unlocked else return 0x2e632 (190002)
- ƒ (this[+4]+0x2b98)->vtbl+8(param_2,param_3) subgroup unlocked -> return 0 on success else 0x2e637 (190007)
- $ group[+0x24] is a prerequisite id/cost consumed via FUN_11399b20 manager (likely required item/currency for group entry)

### CGuideBookChapter::ClaimObjectiveReward `@0x11539e10` — quests/guidebook-chapter-reward
*Claims the reward for a GuideBook chapter objective at index param_2. Validates the objective index, that it is not already claimed (bitmask), and that progress meets the requirement, then grants the reward item and sets the claimed bit.* (server: authoritative: server grants the chapter-objective reward, tracks the per-objective claimed bitmask (this[2]) and the progress counter (this[1]) against required *req. Error codes 489489-489494., conf high)
- ƒ objectiveCount = (chapter[+0x20]-chapter[+0x1c])>>3; if param_2 > objectiveCount return 0x77a13 (489491)
- ƒ if param_2 >= 0x20 or param_2 < 0 or (this[2] & (1<<param_2)) != 0 return 0x77a12 (489490) — already claimed / out of bit range
- ƒ req = FUN_1180a860(param_2); if this[1] < *req return 0x77a16 (489494) — progress this[1] below required *req
- ƒ if this[5] and manager (this[5]+0x2d1c): grant = mgr->vtbl+0x2c(req[1], 1, 0x85); item id=req[1], count=1, reason=0x85(133)
- ƒ if grant != 0 return (grant==0x2a)+0x77a14 -> 0x77a14 (489492) or 0x77a15 on partial
- ƒ on success: this[2] \|= (1<<param_2); return 0
- ƒ fallthrough return 0x77a11 (489489)
- $ reward item id = req[1] (from FUN_1180a860), quantity 1, grant reason 0x85 (133)

### CGuideBookChapter::HasClaimableObjective `@0x1153a0a0` — quests/guidebook-chapter-reward
*Returns 1 if any GuideBook chapter objective is currently claimable: enabled flag set, not yet claimed (bitmask), and progress meets the objective requirement.* (server: validation/query: mirrors ClaimObjectiveReward's gating; used to light up the UI 'claim' button. Same progress(this[1]) vs required and claimed-bitmask(this[2]) semantics., conf high)
- ƒ iterate i over objectiveCount = (chapter[+0x20]-chapter[+0x1c])>>3
- ƒ claimable if: byte[this+0xd] != 0 AND i<0x20 AND (this[2] & (1<<i))==0 AND FUN_1180a860(i)[0] <= this[1]
- ƒ return 1 on first claimable, else 0

### CGuideBookChapter::IsLevelRequirementMet `@0x115399f0` — quests/guidebook-chapter
*Looks up the CGuideBookChapterInfo for chapter id param_1[0] and returns whether the player's value param_1[1] meets/exceeds the chapter's required level field (+0x14).* (server: validation: chapter unlock gate by required level/progress., conf high)
- ƒ chapter = CGuideBookChapterInfo[param_1[0]]
- ƒ return (chapter[+0x14] <= param_1[1]) — required level at +0x14 <= player value param_1[1]

### CGuideBookChapter::RegisterConfigType `@0x119cf240` — quests/guidebook-chapter
*One-time registration of the 'GuideBookChapter' config record type descriptor.* (server: authoritative-config: declares GuideBookChapter config type., conf high)
- ƒ type id = 0x1d2 (466) at _DAT_123a34d4; factory/param at _DAT_123a34d8

### CGuideBookChapterInfo::GetByKey `@0x1146e5b0` — quests/guidebook-chapter
*Paged-array lookup of CGuideBookChapterInfo by key id.* (server: authoritative-config: guidebook chapter definition accessor., conf high)
- ƒ paged accessor (+0x30/+0x28/+0x24/+0x20)

### CGuideBookChapterInfo::GetByKey_fromStruct `@0x11539d40` — quests/guidebook-chapter
*Paged-array lookup of CGuideBookChapterInfo using chapter id from param_1[0]; returns the record pointer.* (server: authoritative-config., conf high)
- ƒ id=param_1[0]; paged accessor (+0x30/+0x28/+0x24/+0x20)

### CGuildQuestLevelInfo::GetByIndex `@0x1190d950` — quests/guild-quest
*Contiguous-vector lookup of CGuildQuestLevelInfo by index (guild-quest level definitions).* (server: authoritative-config: guild-quest level table accessor., conf high)
- ƒ if 0<=param_1 < (mgr[+0x18]-mgr[+0x14])>>2: return vec[param_1] else 0

### CGuildQuestPrizeInfo::GetByIndex `@0x1190d9b0` — quests/guild-quest-prize
*Contiguous-vector lookup of CGuildQuestPrizeInfo by index.* (server: authoritative-config: guild-quest prize table accessor (index variant of FUN_111f2d90)., conf high)
- ƒ if 0<=param_1 < (mgr[+0x18]-mgr[+0x14])>>2: return vec[param_1] else 0

### CGuildQuestPrizeInfo::GetByKey `@0x111f2d90` — quests/guild-quest-prize
*Paged-array lookup of a CGuildQuestPrizeInfo record by key id param_1.* (server: authoritative-config: guild-quest reward/prize table accessor., conf high)
- ƒ paged lookup: base=mgr[+0x30], pageSize=mgr[+0x28], count=mgr[+0x24], pages=mgr[+0x20]; i=param_1-base; row=pages[i/pageSize]; return row[i%pageSize] if in range else 0

### CHubEntryConfigKingQuestInfo::GetByKey `@0x1130bc30` — quests/hub-entry
*Paged-array lookup of CHubEntryConfigKingQuestInfo by key id (hub 'King Quest' entry config).* (server: authoritative-config: hub King-Quest entry definition., conf high)
- ƒ paged accessor (+0x30/+0x28/+0x24/+0x20)

### CHubEntryConfigLetterQuestInfo::GetByKey `@0x1130bc80` — quests/hub-entry
*Paged-array lookup of CHubEntryConfigLetterQuestInfo by key id (hub 'Letter Quest' entry config).* (server: authoritative-config: hub Letter-Quest entry definition., conf high)
- ƒ paged accessor (+0x30/+0x28/+0x24/+0x20)

### CItemBuffRewardEntry_QuestObjBuff::ParseConfig `@0x116d2e60` — quests/objective-reward
*XML config loader tying a buff/item reward to a quest objective. Reads QuestID, QuestObjID and AbsProp (a probability/proportion float). Calls CItemBuffRewardEntry::ParseConfig for the shared reward fields.* (server: authoritative-config: binds a reward/buff to a specific quest objective with a probability. Server grants/rolls this on objective completion., conf high)
- ƒ QuestID -> [param_1+0x20] (u32)
- ƒ QuestObjID -> [param_1+0x24] (int, DEFAULT 0xffffffff/-1 if absent)
- ƒ AbsProp -> float[param_1+0x28] (probability or absolute proportion)

### CLevelEntrustNpcInfo::GetByIndex `@0x1173eb20` — quests/entrust-commission
*Contiguous-vector lookup of CLevelEntrustNpcInfo by index (entrust NPC definitions).* (server: authoritative-config: entrust NPC table accessor (used by ValidateAcceptEntrust)., conf high)
- ƒ if 0<=param_1 < (mgr[+0x18]-mgr[+0x14])>>2: return vec[param_1] else 0

### CLevelLoseConditionInfo::RegisterConfigType `@0x118c7600` — quests/lose-condition
*One-time registration of the 'LevelLoseCondition' config record type descriptor (interns the name, sets type id and flags). Stock config-reflection registration.* (server: authoritative-config: declares the LevelLoseCondition config type used to evaluate quest failure., conf high)
- ƒ type id = 0x25 (37) at _DAT_1239cf38
- ƒ flag = 1 at _DAT_1239cf40; factory/param stored at _DAT_1239cf3c

### CMHLevelInfo::ParseConfig `@0x116aef20` — quests/level-config
*XML config loader for a MH quest/level definition (CMHLevelInfo). Reads named attributes from the XML node (param_2 is the reader vtable) and writes them to the level-info struct at param_1. Also loads a sub-file \Data\Common\LevelConfig\<LevelID>.xml. This is the authoritative quest/level definition record (id, map, mode, difficulty, level, monster level, boss multipliers, status-ailment multipliers, reward/drop lists, level target). Client parses the shared config; server uses the same data authoritatively.* (server: authoritative-config: defines quest/level parameters (level, monster level, difficulty, boss/status-ailment multipliers, drop lists, finish countdown, star-hunt flag). Server must load identical values for authoritative combat/reward/completion logic., conf high)
- ƒ LevelID -> [param_1+0x10] (u32)
- ƒ MapID -> [param_1+0x14] (u32)
- ƒ LevelName -> wstring member (via CPet::SetName helper)
- ƒ LevelMode -> [param_1+0x20] (u32)
- ƒ BGType -> [param_1+0x34]: only accepts 0 or 1
- ƒ Difficulty -> [param_1+0x30] (u32)
- ƒ LevelLv -> [param_1+0x38] (u32)
- ƒ MonsterLv -> [param_1+0x3c] (u32)
- ƒ ShowMonsterName -> wstring; ShowMonsterID -> [param_1+0x78]
- ƒ LevelDesc -> wstring; UIShowLevelTarget -> wstring; UIEntrustNpc -> wstring
- ƒ UIDropList -> [param_1+0x80] (list via FUN_116ab490)
- ƒ DailyFirstUIDropList -> [param_1+0x8c] (list)
- ƒ UIWarningDropList -> [param_1+0x98] (list)
- ƒ FinishCountDown -> [param_1+0x23c]; HunterBox -> [param_1+0x22c]; MonsterOverView -> [param_1+0x234]; InitScore -> [param_1+0x230]; WeatherID -> [param_1+0x238]
- ƒ BossID -> [param_1+0xd8] (list via FUN_1162bea0)
- ƒ QuestMode -> [param_1+0x2c] (u32)
- ƒ monsterlevel_rule -> [param_1+0xe4] (bool); BOSS_match -> [param_1+0x104] (bool)
- ƒ floats at +0x108,+0x10c,+0x110 (unnamed DAT names); int at +0x114
- ƒ BossPBMul -> float[param_1+0x118]; BossLBMul -> float[param_1+0x11c]; BossFDMul -> float[param_1+0x120]
- ƒ bool[param_1+0x124]; float[param_1+0x128]; float[param_1+0x12c]; float[param_1+0x130]; int[param_1+0x134]; bool[param_1+0xe5]; bool[param_1+0xe6]
- ƒ BossPoisonMul -> float[param_1+0xec]; BossParalysisMul -> float[param_1+0xf0]; BossSleepMul -> float[param_1+0xf4]; BossStunMul -> float[param_1+0xf8]
- ƒ BossPoisonOpen -> bool[param_1+0xe7]; BossParalysisOpen -> bool[param_1+0xe8]; BossSleepOpen -> bool[param_1+0xe9]; BossStunOpen -> bool[param_1+0xea]
- ƒ BossDynamiteisOpen -> bool[param_1+0xfc]; BossDynamiteMul -> float[param_1+0x100]
- ƒ lists at +0xb4 and +0xa8; OffcerLv -> [param_1+0x268]; OffcierHR -> [param_1+0x26c]
- ƒ fields +0x27c, +0x280 (u32)
- ƒ BigRandLvMin -> [param_1+0x28c]; BigRandLvMax -> [param_1+0x290]; BigRandWeaponLvMin -> [param_1+0x294]; BigRandWeaponLvMax -> [param_1+0x298]; BigRandArmorLvMin -> [param_1+0x29c]; BigRandArmorLvMax -> [param_1+0x2a0]
- ƒ WeaponLimit -> [param_1+0x2a4] (list)
- ƒ fields +0x258, +0x25c (u32)
- ƒ WarningGroupID -> [param_1+0x278] (default 0 if absent)
- ƒ EnableLemonSystem -> bool[param_1+0x284]; DisableCatFood -> [param_1+0x288]
- ƒ EnableSoulStone -> bool[param_1+0x2b0] (DEFAULT 1 if absent)
- ƒ IsStarHunt -> bool[param_1+0x2b1] (default 0)

### CMHLoseLevelConditionMgr::ForwardFindByKey `@0x117381f0` — quests/lose-condition
*Ensures the CMHLoseLevelConditionInfo manager is initialized then delegates to FUN_11737cf0(param_1).* (server: authoritative: thin accessor into lose-condition subsystem., conf medium)

### CMHLoseLevelConditionMgr::GetConditionByQuestId `@0x11738190` — quests/lose-condition
*Resolves a lose-level (quest-fail) condition object for a quest/level id. Derives the condition table index as questId/100000, validates it, then delegates to FUN_11737a10.* (server: authoritative: quest-fail (lose) condition lookup. The /100000 divisor is the quest-id-to-condition-group encoding; server must apply the same lose conditions to end a quest in failure., conf high)
- ƒ idx = param_1/100000 - table[+0x24]
- ƒ valid if 0<=idx < (table[+0x18]-table[+0x14])>>2 AND slot non-null
- ƒ return FUN_11737a10(param_1) if valid else 0

### CMHWinLevelConditionMgr::ForwardFindByKey `@0x117386a0` — quests/win-condition
*Ensures CMHWinLevelConditionInfo manager init then delegates to FUN_11737d90(param_1).* (server: authoritative: thin accessor into win-condition subsystem., conf medium)

### CMHWinLevelConditionMgr::GetConditionByQuestId `@0x11738640` — quests/win-condition
*Resolves a win-level (quest-clear) condition object for a quest/level id. Index = questId/100000; validates then delegates to FUN_11737a50.* (server: authoritative: quest win/clear condition lookup. Server evaluates these to declare a quest complete. Same /100000 quest-id encoding as the lose variant., conf high)
- ƒ idx = param_1/100000 - table[+0x24]
- ƒ valid if 0<=idx < (table[+0x18]-table[+0x14])>>2 AND slot non-null
- ƒ return FUN_11737a50(param_1) if valid else 0

### CNpcQuestTalkConfig::ParseConfig `@0x11725390` — quests/npc-dialogue
*XML parser for an NPC's quest-related dialogue table. Reads NPCID, greeting (Hello/Hellos), OpenUiAction, generic TalkID entries, and per-quest QuestTalk blocks each containing AcceptTalk / ExceTalk / SubmitTalk lines plus an optional Filter (QuestExec condition). Each talk entry is stamped with its QuestID.* (server: client-only: dialogue/UI text binding for quest NPCs (accept/execute/submit talk). The QuestExec Filter it references (FUN_118a60f0) is the same prerequisite grammar used for gating., conf medium)
- ƒ NPCID -> [param_1+0x10]; Hello -> [param_1+0x14]; OpenUiAction -> [param_1+0x44]
- ƒ Hellos: builds linked list at [param_1+0x3c]/[param_1+0x40] (entry node via FUN_11725c60)
- ƒ TalkID entries via FUN_117269d0(0,node) stored at node+4
- ƒ QuestTalk.QuestID -> local_54 (int)
- ƒ AcceptTalk -> FUN_117269d0(1,node), node+4 = QuestID
- ƒ ExceTalk -> FUN_117269d0(2,node), node+4 = QuestID; optional Filter parsed by FUN_118a60f0(QuestExec)
- ƒ SubmitTalk -> FUN_117269d0(3,node), node+4 = QuestID

### CPlayerAnim::TriggerQuestSignal `@0x10fddb40` — quests/client-fx
*If a gate check (FUN_10f10bb0) passes, reads an animation/state value via vtable ((this+0x100)->...+0xc, vtbl+200), advances a float by constant DAT_11de9990, then dispatches a 'Quest' signal on the animation graph (vtbl+0x310); otherwise calls vtbl+0x314 (stop/clear).* (server: client-only: animation/state-graph signal named 'Quest' (visual, e.g. quest-complete pose). No server logic., conf low)
- ƒ local_8 += DAT_11de9990 (float constant, value not resolved)
- ƒ dispatch graph->vtbl+0x310(state,'Quest') on pass, else graph->vtbl+0x314()

### CQuestData::RegisterConfigType `@0x119036e0` — quests/quest-data
*One-time registration of the 'QuestData' config record type descriptor.* (server: authoritative-config: declares the top-level QuestData config type., conf high)
- ƒ type id = 0x76 (118) at _DAT_1239e834
- ƒ flags = 0x10000 at _DAT_1239e83c; factory/param at _DAT_1239e838

### CQuestExecFilter::BuildConditions `@0x118a60f0` — quests/prerequisite-conditions
*Parses a QuestExec/quest condition-filter node and allocates a condition object per recognized child element. Recognized quest prerequisite condition types: Quest, QuestExec, CharLevel, NpcAtdLevel, HunterStarLevel, GuildLevel, CharSex, ItemCount.* (server: validation: enumerates quest-acceptance/execution prerequisites (character level, hunter star level, guild level, sex, item count, prior-quest completion). Server should enforce these gates. Allocation sizes hint at condition struct layouts., conf medium)
- ƒ if child 'Quest' -> alloc 0xc bytes
- ƒ if child 'QuestExec' -> alloc 0xc
- ƒ if child 'CharLevel' -> alloc 0x10
- ƒ if child 'NpcAtdLevel' -> alloc 0x10
- ƒ if child 'HunterStarLevel' -> alloc 0x10
- ƒ if child 'GuildLevel' -> alloc 0x10
- ƒ if child 'CharSex' -> alloc 0xc
- ƒ if child 'ItemCount' -> alloc 0x14

### CQuestInfoTipsUI::BuildQuestTipsVO `@0x1089bb10` — quests/quest-tips-ui
*Builds the quest-info tooltip VO for a single quest: name, comment level, today's completion times, accept-level, open time, contribution, npc name, description, and formatted exp/money/contribution award strings.* (server: client-only tooltip; award numbers reflect server-defined quest reward config, conf medium)
- ƒ quest def resolved via FUN_104d8d20(questId); def+0x2c = detail; detail+0x38 -> +0x1c = npc name; detail+8 = name, +0x14 = description, +0xc = ?; detail+0xdc = commentLevel
- ƒ reward text formatting via FUN_1024ebe0 with template ids: 0x17f4 (exp line), 0x13c8 (contribution/fund line), 0x13c9 (money line, 2 args); amount pre-scaled by FUN_1024e8a0(value,1)
- ƒ reward value source uses same FUN_1089e5e0(+0x24) / FUN_1161a1e0(0x20 claimed+0x14/total+0x18) pattern as BuildDailyScheduleQuestListVO
- ƒ trailing VO writes 'expAward'=1,'moneyAward'=2,'questClass'=2 appear to be placeholder/enum constants
- $ award template ids 0x17f4 exp, 0x13c8 contribution, 0x13c9 money

### CQuitGameQuestUI::BuildQuitGameQuestVO `@0x1089ef80` — quests/quit-game-summary-ui
*Builds the QuitGameQuestDataClass VO array (arrayQuestData) shown on logout: per quest emits name, contribution, max/current progress value and id, plus a textNotify summary string.* (server: client-only summary; current/max values mirror server-authoritative quest progress, conf medium)
- ƒ iterates quest ctx (FUN_107cb5c0 -> +0x2ab0 -> vtbl+0xa0 list) [piStack_60, piStack_5c)
- ƒ per quest: quest def piVar2[0xb]; reward-state accessor: if no state obj use FUN_1089e5e0()+0x24 gated by completed flag; else FUN_1161a1e0(0x20) claimed(+0x14)/total(+0x18)
- ƒ VO: questName, contribution, maxValue, currentValue, questID; textNotify built separately
- ƒ reward format uses FUN_1024ebe0 template id 0x13af
- $ textNotify/reward template id 0x13af

### CSpoorTaskUIModel::RegisterHandlers `@0x10947d90` — quests
*Registers the Hunter Road (spoor task / progression road) UI handlers and builds the level-filter-condition VO list (min/max value ranges per group) plus localPlayerLevel. Hunter-road progression UI.* (server: client-only (UI registration + filter VO); localPlayerLevel and reward/contribution are server-authoritative and only rendered here, conf medium)
- ƒ Registers: _requestHunterRoadData->CSpoorTaskUIModel::BuildEventList, _requestHunterRoadMapData->FUN_10948890, _requestHunterRoadGetGift->FUN_10948ae0, _requestHunterRoadContribution->CSpoorTaskUIModel::BuildRewardList
- ƒ LEVEL_FILTER_CONDITION_CLASS VO per condition (FUN_10947530 count, FUN_109474a0(i)): maxValue = cond[6], minValue = cond[5], groupID = cond vtbl+0x18
- ƒ localPlayerLevel = CPlayer::GetHuntRankOrCount() when player present (DAT_1202e818+0xd0->+0x90->vtbl+0xb4 != 0)
- $ Filter-condition ranges minValue=cond[5]/maxValue=cond[6] used to bucket hunter-road tasks by player level/hunt rank

### CTaskBountyLevelInfo::GetByIndex `@0x11620ff0` — quests/bounty
*Contiguous-vector lookup of CTaskBountyLevelInfo by index (bounty-task level definitions).* (server: authoritative-config: bounty level table accessor., conf high)
- ƒ if 0<=param_1 < (mgr[+0x18]-mgr[+0x14])>>2: return vec[param_1] else 0

### CTaskChapterDef::ctor `@0x1177f8b0` — quests/task-chapter
*Constructor/initializer for a TaskChapterDef container: initializes intrusive list head pointers at +0x10/+0x14 to self and sets an empty name string.* (server: authoritative-config: task chapter object init (holds child objectives parsed by CTaskChapterObjectiveInfo::ParseConfig)., conf medium)
- ƒ [param_1+0x10] = param_1; [param_1+0x14] = param_1 (empty circular list)

### CTaskChapterDef::ctor_dup `@0x11781590` — quests/task-chapter
*Identical TaskChapterDef constructor as FUN_1177f8b0 (separate instantiation/inline copy).* (server: authoritative-config., conf medium)
- ƒ [param_1+0x10] = param_1; [param_1+0x14] = param_1

### CTaskChapterObjectiveInfo::ParseConfig `@0x11858480` — quests/task-objective-config
*XML config loader for a task/objective definition (TaskChapterDef record). Reads objective fields including the completion count NeedFinishCount and objective Action type, plus advantage-level list. Authoritative objective definition used to evaluate task progress/completion.* (server: authoritative-config: NeedFinishCount is the objective completion threshold and Action is the objective/condition type (kill/gather/etc.). Param1..Param4 carry the objective's target ids/counts. Server must evaluate objective progress against NeedFinishCount., conf high)
- ƒ ID -> [param_1+0x10] (u32)
- ƒ Chapter -> [param_1+0x14] (u32)
- ƒ Action -> [param_1+0x18] (u32, objective/condition type)
- ƒ NeedFinishCount -> [param_1+0x28] (u32, required progress count to complete objective)
- ƒ Param1 -> [param_1+0x1c]; Param2(DAT_11d3a060) -> [param_1+0x20]; Param3(DAT_11d3a070) -> [param_1+0x24]
- ƒ Param4 -> [param_1+0x30] (list via reader vtable+0x24)
- ƒ WeaponLimit -> [param_1+0x2c]
- ƒ Description -> wstring; Detail -> wstring
- ƒ AdvantageLevel -> temp int-list parsed into local_444; each element processed via FUN_10467580; on completion FUN_11679c30 gate then FUN_1169e0d0(Chapter=[param_1+0x14], param_1)

### CTaskTraceUI::BuildQuestVO `@0x107f4b10` — quests/objective-display
*Builds the tracked-quest / task-tracker view-object (TASK_QUEST_VO_NAME) and its subTaskArr of objective rows. Reads the active quest record from the client player's quest manager and emits per-objective target IDs, op-type, current/max counts and label strings. THE key function for objective/subtask struct layout in this chunk.* (server: client-only display, but the subtask struct offsets are the client mirror of server-authoritative objective state (nCurCount/nMaxCount/nOpType/targetIDs), conf high)
- ƒ quest manager chain: DAT_1202e818+0xd0 -> +0x90 (player) -> vtbl+0xb4 (get quest ctx) -> +0x2ab0 (quest object); vtbl+0x50 returns active quest record 'iVar2'
- ƒ quest record offsets: *(*(iVar2+8)+4) = nQuestID; *(iVar2+0x14) = nQuestStatus (also compared ==4 to select single-target branch); *(*(iVar2+8)+0x5c) = timeout; nQuestType from FUN_114f4f20; lefttime from FUN_114f4860 (clamped: if <=0 emit 0)
- ƒ SUBTASK struct stride = 0x3b dwords (236 bytes). Per-subtask (piVar7) dword indices: [0..4]=nTargetID1..5; [5]=nOpType; [6]=nCurCount; [7]=nMaxCount; [0xd]=strTarget1 ptr; [0x13]=strTarget2; [0x19]=strTarget3; [0x1f]=strTarget4; [0x25]=strTarget5; [0x38]=nQuestType; [0x39]=extra id (VO key DAT_11dca838); [0x3a]=objective-kind flag; [0x34]=secondary type flag
- ƒ OBJECTIVE VISIBILITY GATE: if (subtask[0x3a]==3 && subtask[0x34]!=4) the row is emitted ONLY when nCurCount < nMaxCount (piVar7[6] < piVar7[7]) i.e. incomplete; otherwise (all other kinds) the row is always emitted. This is a display filter, not the completion test.
- ƒ single-target branch when quest record +0x14 == 4: reads *(*(iVar2+8)+0x34)+0x14 as nTargetID4, forces nOpType=0xd (13); FUN_114f4f20()==0x400 && *(*(iVar2+8)+0x38)!=0 selects a formatted vs raw target label

### CTaskUI::BuildTaskDetailVO `@0x108ca7e0` — quests/task-detail-ui
*Builds the full task-detail VO for the currently selected quest: header (taskName, taskLevel, queststatus, bTeam, bRepeat), the reward preview block (gold, gold_bind, farm actuarial points, hunter exp/fund/contribution, npc friendship), the reward-item list (task_awardList) and the objective list (task_targets). This is the richest reward-formula function in the chunk.* (server: validation/client-display: reward amounts are scaled client-side by hunt-rank for preview, but the authoritative grant is server-side; the reward-type IDs and scaling formulas mirror server reward config, conf high)
- ƒ gate: only runs when DAT_123bbaac (selected quest cache) > 0
- ƒ queststatus: rewardState=vtbl+0x50(questPtr); if state obj -> status=*(state+0x14); else status = (vtbl+0x60 bool)?10:0
- ƒ bTeam: FUN_10804c90(); team if quest party record present and memberCount(**+4) >= 2
- ƒ bRepeat = *(quest+0x80) != 0
- ƒ REWARD entries fetched by type-id from reward table at (quest param_2 + 0x4c): FUN_10804cd0(tbl,0x19), FUN_10804940(tbl,0x18), FUN_108049c0(tbl,0x21), FUN_10804900(tbl,0x1f award items), plus FUN_10804980()/FUN_10804a00() for actuarial/npc-friend
- ƒ REWARD SCALING: each reward amount is multiplied by a hunt-rank factor from CPlayer::GetHuntRankOrCount. e.g. DAT_11dbfbc8 (type 0x19) = rec+8 * rankMul(local_30); gold_bind(type 0x18) = rec+0xc * countMul(local_2c); DAT_11dc0944 = rec+8 * rankMul; farm_actuarialpoint = rec+8 * rankMul; only applied when DAT_123bbaa8 (rank data loaded) != 0
- ƒ hunter_exp = rec(0x21)+8; hunter_fund = rec(0x21)+0xc; hunter_contribution = rec(0x21)+4; npcfriendvalue = rec(0x24?)+8
- ƒ award item row (TASK_AWARD_CLASS_NAME): itemIconPathName=itemRec+0xb4, slotid=index, ItemID=vtbl+0x18(item), count(DAT_11dbdc0c)=entry+8, quality(DAT_11dca14c)=itemRec+0x10; empty slot -> slotid=10,ItemID=0
- ƒ task_targets objective rows (stride 0x3b dwords, same layout as BuildQuestVO): [0..4]=nTargetID1..5,[3]=nOpType,[4]=nCurCount,[5]=nMaxCount(NB base pointer here is at +2 vs BuildQuestVO), strTarget at [0xb/0x11/0x17/0x1d/0x23], [0x36]=nQuestType; single-target fallback forces nOpType=0x1f (31) with strTarget4
- $ reward-type IDs: 0x18 (gold/gold_bind), 0x19 (money/DAT_11dbfbc8), 0x1f (award item list), 0x21 (hunter exp/fund/contribution)
- $ reward = base_amount * huntRankMultiplier (CPlayer::GetHuntRankOrCount)

### CTaskUI::RefreshTaskListVO `@0x108cb6f0` — quests/task-list-ui
*Builds/refreshes the task-list VO (refresh_tasks_list / TASK_TASKDATA_CLASS_NAME): per quest emits quest_id, level, questStatus, taskName, groupName, curStage/totalStage, groupType, group_id, bTracked, starLevel, Image and AwardNum; also emits daily-completion summary (compledaily: completecount/totalcount). Selects a default-focused quest and calls BuildTaskDetailVO for it.* (server: client-only list display; per-quest fields (quest_id, status, groupType, starLevel) mirror server-authoritative quest state, conf high)
- ƒ daily summary: completecount = huntCounter[5]; totalcount = FUN_114e4950() (daily cap)
- ƒ quest list obtained via DAT_123bbab4 (task manager) vtbl+0xd8 (list ptr), +0xe4 (count), +0xdc (copy)
- ƒ per quest record piVar1 = *(*questNode + 0x2c): quest_id = piVar1[1]; level via FUN_104d8d20(piVar1[1]); questStatus via FUN_108cc140; groupType = piVar1[4]; group_id = piVar1[1]; starLevel = piVar1[0x4a]; Image = piVar1[0x36]; AwardNum via FUN_108ca6f0; curStage/totalStage hardcoded 1
- ƒ default focus: first quest sets DAT_123bbaac = piVar1[1] (selected quest id) unless DAT_123bba53 (sticky-selection) set
- ƒ match test to detect already-listed quest: *(*(*questNode+0x2c)+4) == *(*(existing+8)+4)

### CTaskUIModel::BuildTaskListVO `@0x1091f100` — quests
*PRIMARY quest/task VO builder. Builds guildTaskArray (GUILDTASK_CLASS_NAME) and the general active-task list, emitting per-task status, objective/target progress (kill/gather counts), reward-item lists, and computed reward amounts (exp/gold/fund/contribution). Reflects the server-authoritative task-progress and reward structures into the client UI.* (server: client-only VO builder, but it is the clearest map of server-authoritative task structures: task-target record layout (stride 0x3b: ids 0-4, opType@5, curCount@6, maxCount@7, name strings @0xd/0x13/0x19/0x1f/0x25), completion comparison cur==max, and reward = base*rankFactor. Server must produce these counters/rewards; this validates their layout and comparison semantics., conf medium)
- ƒ GUILD TASKS: iterate container FUN_114a9220 -> [ppppiStack_d0 .. pppppiStack_cc]. Per guild task record pppiVar1: quest_id/name = pppiVar1[4] (task def), groupType = pppiVar1[2]. remainTime computed from _time64(0) baseline (DAT_123bbcc8/ccc) + status obj FUN_111743b0 (vtbl+0xe). questStatus, taskName(str@11dca5f8), description(str@11dcaa28). curCount = taskDef vtbl[3], maxCount = taskDef vtbl[4]. curStage=1, totalStage=1, group_id=1, bTracked=1, canShared=1, bGuildTask flag
- ƒ other_info sub-VO (guild): farm_actuarialpoint=0, hunter_exp = taskDef[0x14], hunter_fund = taskDef[0x15], DAT_11dbfbc8 = taskDef[0x14], DAT_11dc0944 = taskDef[0x1b], gold_bind=0, hunter_contribution=0, npcfriendvalue=0, queststatus=0
- ƒ GENERAL TASKS: iterate piStack_13c..piStack_138 (task ptr array). Task valid when *(taskDef+0x10)==0x80. taskDef = *(taskObj+8). questStatus = *(taskObj+0x14). quest_id = taskDef+4. Type flags *(taskDef+0x10): values 0x10/0x20/0x40/0x80 normalized to 0x10 for nOpType-like field @11dca6d0
- ƒ OBJECTIVE/TARGET progress: task_targets array (TASK_TARGET_VO_NAME), target record stride 0x3b dwords (0xEC bytes). Per target piVar15: nTargetID1..5 = piVar15[0..4]; nOpType = piVar15[5]; nCurCount = piVar15[6]; nMaxCount = piVar15[7]; strTarget1..5 = piVar15[0xd],[0x13],[0x19],[0x1f],[0x25]; DAT_11dca874=0
- ƒ TARGET COMPLETION GATE: if piVar15[0x3a]==3 && piVar15[0x34]!=4 (special/hunt objective): when piVar15[6]==piVar15[7] emit completed; when piVar15[6]<piVar15[7] emit in-progress and BREAK (stop listing further targets). Otherwise emit target unconditionally. cur==max => objective done, cur<max => in progress
- ƒ REWARD AMOUNT FORMULA: reward = (int)((float)rewardLine[2] * (float)scaleFactor) where scaleFactor from CPlayer::GetHuntRankOrCount(rewardLine[1]) -> FUN_1185f2e0. Reward-line lookups by type id: FUN_10804980(taskDef+0x13, ...) hunter_exp-scaled; FUN_10804cd0(0x19)->DAT_11dbfbc8; FUN_10804940(0x18)->DAT_11dc0944 (line[2]*f and line[3]*f2); FUN_108049c0(0x21) x2 -> gold_bind = line[8]/line[0xc], hunter_fund = line[4]; FUN_10804a00() -> DAT_11dca87c
- ƒ canShared/duplicate flag: canShared computed from FUN_10804c90 (>=2 -> 1 else 0)@11dca808; *(rewardCtx+0x20)!='0' -> flag@11dca830
- ƒ task_awardList (TASK_AWARD_CLASS_NAME): per award item slotid, ItemID=award[0], count=award[1](DAT_11dbdc0c), itemIconPathName = itemDef[0x2d], quality = itemDef[4](DAT_11dca14c); empty slot -> ItemID=0, slotid=10, empty icon
- $ Reward amounts: hunter_exp, hunter_fund, gold_bind (bind+unbind money line[8]/line[0xc]), hunter_contribution, all = rewardLineBase * rankScaleFactor
- $ Objective thresholds: nCurCount/nMaxCount per target (kill/gather/hunt counts)

### CVIPEntrustTimesInfo::GetByKey `@0x11549530` — quests/entrust-vip
*Paged-array lookup of CVIPEntrustTimesInfo by key id (VIP-tier entrust/commission daily-times limits).* (server: authoritative-config: VIP entrust-count limits; server enforces daily entrust caps., conf high)
- ƒ paged accessor (+0x30/+0x28/+0x24/+0x20)
- $ record likely holds per-VIP-level allowed entrust attempt counts (limits) — not read here

### CWeaponRecastUI::BuildRecastMaterialVO `@0x107f90b0` — quests/weapon-recast-materials
*Builds the weapon-recast/reforge (weaponRecastDatas) quest VO: for each recast data entry it emits a quest header plus a subTaskArr of required-material rows with rarity, owned-count vs required-count, and a point-material flag. Aggregates the player's owned material counts and computes point-material cost via CMaterialTagDescInfo lookup tables.* (server: client-only display of recast requirements; material owned-count aggregation and cost-table indexing mirror server-authoritative crafting/recast validation, conf medium)
- ƒ top gate: only runs when weaponRecastDatas CVariant type&0x8f in {8,9,10} (array-like); iterates *ppppiStack_14c entries (count at [0]), stride 3 dwords per entry (id64 at +1, level ptr at +3)
- ƒ per-material row: FUN_10254130(id) resolves item record; VO 'nTargetID1'=material id, 'rareType'=*(itemRec+0x4c)
- ƒ OWNED COUNT = FUN_113fa680(id,0,1) + FUN_113fa680(id,1,1)  (two storage sources summed, e.g. bag + box); REQUIRED COUNT (nMaxCount) = piVar22[6]
- ƒ completion mark: subtask 'complete' pointer cleared unless (piStack_178 != &DAT_00000004) OR (owned < required); i.e. a material is satisfied when owned >= required
- ƒ point-material cost: uses red-black-tree maps keyed by material id (CSkillLevelMap::Insert at vtbl); per-material accumulates local_19c += FUN_116c04a0(playerPtr) * (needQty - alreadyCounted) using FUN_113fa680 / FUN_10540d00 / FUN_116c0400/0x4a0 helpers; nItemLevel from entry level ptr
- ƒ CMaterialTagDescInfo lookup: 2-D table at (descInfo+0x20)[ (level - *(desc+0x30)) / *(desc+0x28) ][ (level-...) % *(desc+0x28) ]; guarded by range check against *(desc+0x24)
- ƒ emits per material: 'nItemLevel','nTargetID1','strTarget1','rareType','nCurCount'(=owned),'nMaxCount'(=required),'isPointMaterial'(bool, default 1); quest header 'nQuestID','nQuestStatus','nQuestLevel','strQuestName'
- $ nMaxCount (required material qty) = subtask dword[6]; nCurCount (owned) = sum of two FUN_113fa680 storage queries
- $ point-material total cost = sum over materials of unitCost(FUN_116c04a0) * remainingQty


## chapters  (10)

### TaskHistoryModel::BuildChapterGroupsVO `@107f0270` — chapters/history UI (display)
*Builds the history 'task groups' VO for a selected chapter+group (selectchapterrecall_chapterid / _groupid). Iterates chapter task-group content records (TASKHISTORY_CONTENT_CLASS_NAME) emitting content/taskname/iscomplete. Client-side display.* (server: client-only, conf high)
- ƒ chapter looked up via FUN_107eb990 (CTaskChapterInfo)
- ƒ per-content node: node+0x2c -> content record; iscomplete = vtable+0x60(record+4) (completion query on task manager DAT_123bb99c)
- ƒ content/taskname strings materialized from record

### TdrPack_ChapterId `@1041f9b0` — chapters (TDR)
*TDR packer for {iChapterId} with capacity clamp and NUL pad.* (server: client-only, conf high)
- ƒ clamp: cap=param_2[2], used=param_2[1]; if cap<=used used=cap-1

### TdrText_Print_ChapterErrResult `@1041fc40` — chapters (TDR)
*TDR printer for {iErrCode, iChapterId}.* (server: client-only, conf high)
- ƒ struct: +0x0 iErrCode; +0x4 iChapterId

### TdrText_Print_ChapterId `@1041f8f0` — chapters (TDR)
*TDR printer for {iChapterId:int}.* (server: client-only, conf high)
- ƒ struct: +0x0 iChapterId

### TdrText_Print_ChapterIdIndex `@1041e8e0` — chapters (TDR)
*TDR printer for {iChapterId, iIndex}.* (server: client-only, conf high)
- ƒ struct: +0x0 iChapterId; +0x4 iIndex

### TdrText_Print_ChapterResult `@1041ec50` — chapters (TDR)
*TDR printer for {iErrCode:int, iChapterId:int, iIndex:int} - chapter operation result packet.* (server: validation, conf high)
- ƒ struct: +0x0 iErrCode; +0x4 iChapterId; +0x8 iIndex

### TdrText_ToString_ChapterId `@1041f920` — chapters (TDR)
*TDR to-string for {iChapterId} into capped caller buffer, NUL-terminated.* (server: client-only, conf high)
- ƒ clamp: if cap<=written, written=cap-1; buf[written]=0

### TdrUnpack_ChapterErrResult `@1041fba0` — chapters (TDR)
*TDR reader for {iErrCode:int, iChapterId:int} - chapter result. Returns -0x13 on null.* (server: validation, conf high)
- ƒ struct: +0x0 iErrCode; +0x4 iChapterId
- ƒ null buffer -> -0x13

### TdrUnpack_ChapterId `@1041f870` — chapters (TDR)
*TDR reader for {iChapterId:int}. Returns -0x13 on null buffer.* (server: validation, conf high)
- ƒ struct: +0x0 iChapterId
- ƒ null buffer -> -0x13

### TdrUnpack_ChapterIdIndex `@1041e840` — chapters (TDR)
*TDR reader for {iChapterId:int, iIndex:int} - chapter selection/recall request.* (server: validation, conf high)
- ƒ struct: +0x0 iChapterId; +0x4 iIndex
- ƒ null buffer -> -0x13


## profiling  (10)


## entrust  (7)

### TdrPack_iEntrustUIStep `@1019bfb0` — entrust (TDR)
*TDR host->binary packer for {iEntrustUIStep}. Clamps offset to buffer capacity and NUL-pads.* (server: client-only, conf high)
- ƒ clamp: cap=param_2[2], used=param_2[1]; if cap<=used, used=cap-1; TdrBuf_PutNulAt(cap,used)

### TdrText_Print_EntrustGroupStat `@101468d0` — entrust/commission (TDR serialization)
*TDR debug-text serializer for a level-entrust group-stat record. Emits groupID, groupStatCnt and two parallel arrays (stat type/value), then a per-level array. Reveals the entrust group struct field layout used on the wire.* (server: validation, conf high)
- ƒ struct: +0x0 groupID (int, *param_1); +0x4 groupStatCnt (short, param_1[1] low)
- ƒ +0x6 groupStatType[10] (bytes, printed ' 0x%02x')
- ƒ +0x10 groupStatValue[10] (ints, param_1[4+i])
- ƒ +0x38 groupLevelCnt (short, param_1[0xe]); then groupLevelCnt sub-records via FUN_10145900
- ƒ bounds: groupStatCnt <0 -> return -6, >10 -> return -7 (max 10 stat entries)
- ƒ bounds: groupLevelCnt <0 -> return -6, >0x40 -> return -7 (max 64 entrust levels)

### TdrText_Print_iEntrustUIStep `@1019beb0` — entrust (TDR)
*TDR debug-text printer for {iEntrustUIStep:int}.* (server: client-only, conf high)
- ƒ struct: +0x0 iEntrustUIStep (int)

### TdrText_ToString_iEntrustUIStep `@1019bee0` — entrust (TDR)
*TDR reader that writes into a caller buffer with length cap, NUL-terminates (clamps written length to param_3-1). Single field iEntrustUIStep.* (server: client-only, conf high)
- ƒ clamp: if param_3 <= written, written = param_3-1; buf[written]=0

### TdrUnpack_iEntrustUIStep `@1019be00` — entrust (TDR)
*TDR binary->host reader for a single-field struct {iEntrustUIStep:int}. Returns -0x13 (0xffffffed) if buffer null. Stack-canary guarded.* (server: validation, conf high)
- ƒ struct: +0x0 iEntrustUIStep (int)
- ƒ null buffer -> -0x13

### TreasuresEntrustModel::GetEntrustMoney `@1095cc50` — entrust/treasures
*GetEntrustMoney handler. Resolves the local player (DAT_1202e818+0xd0 -> +0x90 -> vtbl+0xb4 == GetLocalPlayer); if non-null, reads the two entrust-money balances via FUN_1025b060 and writes them into the outgoing VO as nEntrustMoney1Num and nEntrustMoney2Num (FUN_104d1550 = set-int field). local_1c>>6&1 tests bit 6 of a variant/AS-value header for the pointer-owned addref/release around the write.* (server: client-only display of two server-authoritative entrust currency balances; server owns the actual balances., conf high)
- ƒ playerObj = *(*(*(DAT_1202e818+0xd0)+0x90))+0xb4)()  // GetLocalPlayer
- ƒ nEntrustMoney1Num = FUN_1025b060(); nEntrustMoney2Num = FUN_1025b060()  // two successive money accessors
- ƒ variant addref/release gated by (header>>6 & 1) != 0
- $ nEntrustMoney1Num, nEntrustMoney2Num: two distinct entrust-currency balances shown in the entrust UI

### TreasuresEntrustModel::RegisterHandlers `@1095c390` — entrust/treasures
*Model init that registers the client->model command handler table for the Treasures/Entrust shop UI. Registers 7 named handlers: GetTreasuresBoxData, GetTreasuresShopData, GetEntrustMoney(->FUN_1095cc50), GetMedalTreasuresData, RequestGetAllTreasures, RequestTreasuresExchange, RequestGetMedalTreasures. Repeated FUN_100b62c0(makeString)/FUN_1095d720\|FUN_1095d660(registerHandler)/FUN_10c3d5d0(freeString) triads — stock UI-binding plumbing.* (server: client-only: builds the model's local command-dispatch table. Each 'Request*' entry is the client request that maps to a server RPC; the 'Get*' entries return locally-cached server data., conf high)


## social  (5)

### CMHUI_HunterGroup::BuildReqJoinListVO `@0x108b41e0` — social/hunter-group (not quests)
*Builds the guild join-request list VO (reqJoinGroupArray / REQUESTJOINHG_CLASS_NAME): per pending applicant emits memberName, level, message, hunterStar and id, then fires UpdataREQUESTJOINHG.* (server: client-only display, conf medium)
- ƒ applicant record offsets: +0x40=level, +8=id(DAT_11dbb0b4 key), +0x1c/0x20=name pair, +0x54/0x58=hunterStar strings, +0x6c/0x70=message pair
- ƒ iterates [piStack_8c, piStack_88)

### CMHUI_HunterGroup::InitModel `@0x108ae290` — social/hunter-group (not quests)
*Initializes the Hunter Group (guild) UI model: binds the data source, registers a large set of AS command handlers (AddGuilderRight, ReqJoinGroup, QuitHunterGroup, NoteSetting, impeach commands, OnGetMembers, record-data server responses) and reads the impeach-leader money cost.* (server: client-only wiring; reads a server-defined ImpeachMoney constant, conf medium)
- ƒ ImpeachMoney = *(FUN_11720120() + 0xac)  (guild config record + 0xac)
- ƒ registers AS handlers via FUN_100b62c0/FUN_108b6f80; server-message bindings AS2C_RequestRecordData->FUN_108b6a00, AS2C_GetRecordData->FUN_108b6aa0
- ƒ list getters FUN_104d13b0: _getSearchGroupList/_getReqJoinGroupList/_getGroupMemberList/_getGuildTitleList
- $ ImpeachMoney (guild leader impeachment cost) = guildConfig+0xac

### CMHUI_HunterGroupModel::RegisterHandlers `@0x108b0970` — social/hunter-group (not quests)
*Registers the full Hunter Group model command handler table (InitModel, CheckGroupName, RenameGroup, GetGuildName, RefreshGuildDetail, Updata*, SubmitCreateHunterGroup, member/rights management, TitleSetting, UpGuildLevel, EditIcon, TakeWage, DisBandGuild, BanGuilder, etc.).* (server: client-only handler registration, conf high)
- ƒ pure sequence of FUN_100b62c0(name,'')/FUN_108b6f80(&slot, handlerFn, 0) registrations; e.g. InitModel->FUN_108ae290, CheckGroupName->FUN_108b5bb0, SubmitCreateHunterGroup->FUN_108b6430, UpGuildLevel->LAB_108b05f0, DisBandGuild->LAB_108b4dc0

### CTeamUI::OnTeamRequestMsgBox `@0x10899850` — social/team (not quests)
*Handles team invite/join-request notifications: auto-rejects when the matching refuse flag is set, else shows a Yes/No message box (MsgBoxRespondOk/CancelHandler).* (server: client-only prompt, conf medium)
- ƒ invite ids {0x1f49,0x204e,0x205c} gated by cvar g_refuseTeamInvite; request ids {0x1f44,0x204f} gated by g_refuseTeamRequest; if refused -> FUN_1130eb90 reject
- ƒ player+0x260dc != 0 required (in a session/map)

### CTradeUI::OnTradeRequest `@0x108131b0` — social/trade (not quests)
*Handles an incoming trade request: if the g_refuseTradeRequest cvar-backed flag is set it silently rejects (FUN_1130eb90), otherwise pops a Yes/No message box wired to TradeRespondOk/CancelHandler.* (server: client-only UI prompt; server owns actual trade authorization, conf medium)
- ƒ msgbox id 0x1f4a passed to FUN_1112d7d0 with handlers 'TradeRespondOkHandler'/'TradeRespondCancelHandler'
- ƒ player+0x260dc != 0 => busy/auto-reject path (FUN_1130eb90 sends refusal)


## ui  (5)

### CFlashUICache::GetOrCreate_FontRequest `@0x11b31580` — ui/scaleform (stock)
*Scaleform/Flash UI resource-request cache lookup-or-create keyed by 'FontRequest'. Reference-counted hash-map access with djb2-style hash seed 0x1505.* (server: client-only: UI plumbing, no quest logic., conf low)
- ƒ hash seed 0x1505 (5381, djb2); refcount decrement pattern with LOCK/UNLOCK

### CFlashUICache::GetOrCreate_ImageRequest `@0x11b31700` — ui/scaleform (stock)
*Same as FUN_11b31580 but keyed 'ImageRequest'.* (server: client-only: UI plumbing., conf low)
- ƒ hash seed 0x1505

### CFlashUICache::GetOrCreate_ObjectsReportRequest `@0x11b31a00` — ui/scaleform (stock)
*Same as FUN_11b31580 but keyed 'ObjectsReportRequest'.* (server: client-only: UI plumbing., conf low)
- ƒ hash seed 0x1505

### CFlashUICache::GetOrCreate_SourceRequest `@0x11b31b80` — ui/scaleform (stock)
*Same as FUN_11b31580 but keyed 'SourceRequest'.* (server: client-only: UI plumbing., conf low)
- ƒ hash seed 0x1505

### CFlashUICache::GetOrCreate_SwdRequest `@0x11b31d00` — ui/scaleform (stock)
*Same as FUN_11b31580 but keyed 'SwdRequest'.* (server: client-only: UI plumbing., conf low)
- ƒ hash seed 0x1505


## quest hub config  (4)

### CHubEntryConfigKingQuestInfo::GetCount `@107ca9b0` — quest hub config (king quest)
*Returns element count for King-Quest hub-entry config (virtual call slot +0x28).* (server: validation, conf high)
- ƒ count via vtable[0x28/4]()

### CHubEntryConfigKingQuestInfo::GetEntryByIndex `@107ca920` — quest hub config (king quest)
*Linear accessor into the King-Quest hub-entry config array by index.* (server: validation, conf high)
- ƒ count = (mgr[6]-mgr[5])>>2 (dword ptr array); require 0<=param_1<count; entry = mgr[5][param_1]

### CHubEntryConfigLetterQuestInfo::GetCount `@107cabf0` — quest hub config (letter quest)
*Returns element count for Letter-Quest hub-entry config (vtable +0x28).* (server: validation, conf high)
- ƒ count via vtable[0x28/4]()

### CHubEntryConfigLetterQuestInfo::GetEntryByIndex `@107cab60` — quest hub config (letter quest)
*Linear accessor into the Letter-Quest (commission letter) hub-entry config array by index.* (server: validation, conf high)
- ƒ count = (mgr[6]-mgr[5])>>2; require 0<=param_1<count; entry = mgr[5][param_1]


## quest  (4)

### PlayerTaskDialog::RegisterUiHandlers `@107eca30` — quest/task UI
*Registers the full set of player-task/quest-journal UI event handlers and data providers into the dialog dispatch table: data getters (_getPlayerTasksList, _getNpcTaskInfo(WithItem), _getPlayerTasksChapter, _getPlayerTasksTaskGroupDetail, _getNpcFriendList, _getTaskTimeLeftFunc, _IsTaskShouldCountDown, _getTaskTraceMode) and UI actions (OnAcceptTask, OnGiveupTask, OnPlayerShareTask/GiveupTask, OnCompleteNpcTaskDlg, OnCancelNpcTaskDlg, NpcTaskAwardClick/AwardClick, QuestTrace*, OnResetTask, TaskCheck, FetchQuestData, etc.). Pure client UI wiring.* (server: client-only, conf high)
- ƒ gated by DAT_1202e818+0x209 flag (register once); DAT_123bb96a=1 set as 'model initialized'

### PlayerTaskModel::BuildTaskListVO `@107ee600` — quest/task UI (display)
*Builds the UI value-object list for the player-task dialog. Branch on tab mode DAT_1200acbc: mode 1 = accepted-tasks list (TASK_TASKDATA_CLASS_NAME), mode 2 = history grouped by chapter (TASKHISTORY_CHAPTER_CLASS_NAME + per-group children). Reads authoritative task-instance fields and emits UI fields. Client-side display; exposes the task-instance struct layout.* (server: client-only, conf high)
- ƒ accepted-task instance struct (entry at iVar8): +0x08 = ptr to task-def (def+0x04 = group_id/quest_id, def+0x81 = canShared byte); +0x14 = questStatus; +0x1c = bTracked (byte)
- ƒ quest_id emitted = def+0x04; group_id = def+0x04; curStage/totalStage hardcoded 1 in this VO; groupType via FUN_107f1d10()
- ƒ level field sourced from FUN_117c1280()
- ƒ history chapter (piVar7): ChapterID via vtable+0x18; piVar7[0xb]=chapter cfg -> +0x28 sourceR; (piVar7[0xb]+0x10)[0]=levelMin, [1]=levelMax
- ƒ history task-group node: node+0x2c -> +0x4 = nTaskGroupID; IsComplete/curStage via FUN_107ee460/FUN_107ee4f0; nChapterID via vtable+0x18

### TaskResultNotify::GetNetSerializer `@10e3f1f0` — quest/task net-schema
*Lazily initializes and returns the network-message descriptor for a task RESULT notification. Fields: Enable(bool), playerNetID, taskID, taskState, plus a trailing result field. One-time init guarded by DAT_12035430 bits 0/1.* (server: authoritative wire schema: server->client task-result message adding a 'result' code on top of {playerNetID, taskID, taskState}. Mirror for task completion/failure results., conf high)
- ƒ field set = { Enable:bool, playerNetID:int, taskID:int, taskState:int, result:int }
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10

### TaskStateNotify::GetNetSerializer `@10e3efd0` — quest/task net-schema
*Lazily initializes and returns the network-message (RMI) field descriptor for a task-state notification. Fields: Enable(bool), playerNetID, taskID, taskState. One-time init guarded by DAT_12035390 bits 0/1; assigns the descriptor to *param_1 and the taskState sub-field table to param_1[1].* (server: authoritative wire schema: this defines the on-the-wire layout of a server->client task-state message (playerNetID, taskID, taskState). Directly mirror for the private server's task-update packet., conf high)
- ƒ field set = { Enable:bool, playerNetID:int, taskID:int, taskState:int }
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10  // flag/type bits


## quest presentation  (4)

### QuestPresenter::OnQuestComplete `@10f15d00` — quest presentation
*Client-side quest-complete trigger. If the actor is alive/valid (vtbl+0x228 true), has a quest context (vtbl+0x790 non-null) and is still valid, calls FUN_10fc3af0 then FUN_10fd9450('QUEST_COMPLETE', 0, FUN_10f96490, 0) to fire the QUEST_COMPLETE cinematic/anim event.* (server: client-only presentation; server decides actual completion. This just plays the local complete sequence., conf medium)
- ƒ gate: alive(vtbl+0x228) && questCtx(vtbl+0x790)!=0 && alive(vtbl+0x228)

### QuestPresenter::OnQuestFail `@10f15d60` — quest presentation
*Client-side quest-fail trigger; same gating as OnQuestComplete but fires FUN_10fd9450('QUEST_FAIL', 0, FUN_10f96490, 0). No FUN_10fc3af0 pre-call.* (server: client-only presentation., conf medium)
- ƒ gate: alive(vtbl+0x228) && questCtx(vtbl+0x790)!=0 && alive(vtbl+0x228)


## interact  (3)

### TdrText_Print_InteractExtRequestResult `@102bf990` — interact/action-point (TDR)
*TDR debug printer for an interact request/result wrapper with a discriminated union. chExtType selects which sub-struct (stRequest / stResult) is present.* (server: validation, conf high)
- ƒ struct: +0x0 chExtType (byte, printed 0x%02x); +0x1 iResultCode (int)
- ƒ union tag: stRequest and stResult sub-records emitted only when chExtType == 0x2 (calls TdrDebugFormat_InteractRequestWrap / _ActionPointDataWrap)

### TdrText_Print_InteractTargetReq `@102be040` — interact/entrust request (TDR)
*TDR debug printer for {iTargetID, iRequestPlayer}.* (server: client-only, conf high)
- ƒ struct: +0x0 iTargetID; +0x4 iRequestPlayer

### TdrUnpack_InteractTargetReq `@102bdfa0` — interact/entrust request (TDR)
*TDR reader for {iTargetID:int, iRequestPlayer:int}. This is a generic interact/entrust request header (target entity + requesting player).* (server: validation, conf high)
- ƒ struct: +0x0 iTargetID (int); +0x4 iRequestPlayer (int)
- ƒ null buffer -> -0x13


## chapters config  (3)

### CTaskChapterInfo::GetCount `@107ebad0` — chapters config
*Returns number of task chapters (vtable +0x28).* (server: validation, conf high)
- ƒ count via vtable[0x28/4]()

### CTaskChapterInfo::GetEntryByIndex `@107eba40` — chapters config
*Linear index accessor into CTaskChapterInfo array (0..count).* (server: validation, conf high)
- ƒ count=(mgr[6]-mgr[5])>>2; require 0<=idx<count; entry=mgr[5][idx]

### CTaskChapterInfo::GetEntryByKey `@107eb990` — chapters config
*Static-config accessor for CTaskChapterInfo (quest/task chapter definitions). Bucketed 2-level index lookup by chapter key.* (server: validation, conf high)
- ƒ guard: key!=-1 AND (key!=0 \|\| mgr[0xc]==0) AND mgr[10]!=0
- ƒ key -= mgr[0xc] (id base); require 0<=key<mgr[9]
- ƒ entry = mgr[8][key/mgr[10]][key%mgr[10]]


## entrust-ui  (3)

### CLevelEntrustUI::BuildTeamMemberVO_Guild `@0x108f77f0` — entrust-ui
*Builds team-member VO array for the guild entrust panel (variant with hrLevel/bOfficer/remainWarning). Iterates a member container and emits per-member fields.* (server: client-only (UI VO from synced guild-team state), conf medium)
- ƒ Guard: in_stack_00000014 == 1; player via DAT_1202e818+0xd0->+0x90->vtbl+0xb4; member container via FUN_107cb5c0 / FUN_112e5470
- ƒ Iterates container [begin..end] = *ppppiStack_b0 .. ppppiStack_b0[1], element stride 0xb (11 dwords)
- ƒ Per member accessor calls emit: starLevel(FUN_112e9980 str), DAT_11dccf88(FUN_112e9970), weapon(FUN_112e99d0), DAT_11dd7eac(FUN_112e9950), hrLevel(FUN_112e9960), state(FUN_112e99c0 byte), bOfficer(FUN_112e99a0 byte), selHuntPacket(FUN_112e9930), bIsLeader=0
- ƒ remainWarning = FUN_115768f0() emitted once after loop; teammemberInfoArr array field written
- ƒ If bOfficer(FUN_112e99a0)!=0, cross-checks player vtbl+0xb8 member and marks *(iVar3+0x20)=1

### CLevelEntrustUI::BuildTeamMemberVO_Instance `@0x108f72f0` — entrust-ui
*Builds the team-member VO array (LEVELENTRUST_MEMBERVO_CLASSNAME) for the guild-instance member panel from the live player/team object.* (server: client-only (UI VO built from already-synced team state), conf medium)
- ƒ Guard: param_5 > 0; player = DAT_1202e818+0xd0 -> +0x90 -> vtbl+0xb4; team = player vtbl+0xc0; requires player[0xaaf] != 0
- ƒ Member list iterated over player-team container: count = (piVar3[0x14]-piVar3[0x13])/0x30 (member record stride 0x30)
- ƒ Per member emits: netId (member vtbl+0xc), starLevel = *(memberInfo+0x14) where memberInfo=member vtbl+0x80, DAT_11dccf88 = member vtbl+0x30, weapon = member vtbl+0x38, DAT_11dd7eac = teamObj vtbl+4; state=0, selHuntPacket=0xffffffff, bIsLeader=0
- ƒ Writes VO array field teammemberInfoArr

### CLevelEntrustUI::RegisterHandlers `@0x108f32b0` — entrust-ui
*Registers all entrust/commission ("level entrust") UI request handlers and VO builders. Pure dispatch-table registration for the entrust/bounty browser.* (server: client-only (UI callback registration table), conf high)
- ƒ Each block: FUN_100b62c0() builds a name string, then FUN_108f84a0()/FUN_108f83e0() registers handler fn; handlers: GetEntrustListData->CLevelEntrustUI::BuildEntrustListVO, GetLevelUnlockInfo->FUN_108f63e0, GetGroupUnlockInfo->FUN_108f6610, UnlockInstance->FUN_108f6840, UnlockSubGroup->FUN_108f68b0, UpdateGuildMemberData->FUN_108f6f70, GetLevelInstanceGoData->FUN_108f77f0, GetHunterBoxData->FUN_108f69a0, GetAvalidActionPoint->FUN_108f6920, GetLocalPlayerIsCoach->FUN_108f8110, SelHuntPacket->FUN_108f3a00, EntrustReady->FUN_108f3a50, RequestEntrustList->FUN_108f3880, ReqOpenEntrustGoView->FUN_108f38e0, ReqOpenWeaponTrialGoView->FUN_108f3970, ReqLevelTrackData->FUN_108f7c90, ReqOpenEntrustInfoByTrack->FUN_108f8040, FetechGuildInstanceMemberData->FUN_108f72f0, RequestLeagueList->LAB_108f80d0, IsShowCountDown->FUN_108f8250


## instance-ui  (3)

### CInstanceEnterUI::BuildEntryDataVO `@0x10913600` — instance-ui
*Builds the instance-entry browser VO tree: per-tab entries (ENTRY_TAB) and per-level data (ENTRYDATAVO/LEVELDATAVO) including daily entry counts, unlock state, proposed level/weapons, and objective descriptions. Client display model built from the level-definition registry.* (server: client-only display, but exposes server-authoritative level-def offsets: daily-enter counters (level[9]+0x1b/0x1c), difficulty (level+0xc), proposed level/players (level+0x1a/0x1b), boss id (level+0x1e), conf medium)
- ƒ Guard param_5==1. Walks a red-black tree of level-tab records (FUN_10912db0 gets root); tab dedup list built with dynamic array (FUN_10463c40 growth)
- ƒ Per-level fields from level record pppppiVar4: nLevelID, nDiffLev=level[0xc], nProposeLev=level[0x1a], nProposePlayerNum=level[0x1b], nUIShowBossID=level[0x1e], nBelongTabId=iStack_d0
- ƒ nState = FUN_10914e90(level[0x10]); nRecord = (level[0xae2]!=0 && FUN_114cd4a0(player)!=0) ? FUN_114cd4a0 result : 0
- ƒ DAILY ENTRY COUNT: nDailyEnterCnt base = level[9][0x1b]; nDailyTotalMaxEnterCnt = level[9][0x1b] + level[9][0x1c]. If max>0 and active-hunt activity present (vtbl+0x388, FUN_1156c6b0): adjust enterCnt = level[9][0x1b] - FUN_1156c660(0) + FUN_1156c660(4); maxCnt -= FUN_1156c660(3)
- ƒ nNeedLev emitted 0; strNeedQuest/strNeedOtherLevel/strProposeWeapon built empty then FUN_10914d40 fills proposed-weapon; strTargetDesc = level[0x1d] (fallback DAT_11d9d32b empty)
- ƒ strOtherTarget%d loop: target array via FUN_117380d0, entry stride 0x54, capped at index 0x1a3 (sprintf "%s%d","strOtherTarget",n)
- ƒ strUIShowBossName from level[0x1d] when iStack_1b4==0 else built; strDesc = level[0x18]
- ƒ Also queries per-level record activity via **(*ppppppiStack_228+0x388)
- $ nDailyEnterCnt / nDailyTotalMaxEnterCnt: daily instance-entry quota (base level[9][0x1b], cap +level[9][0x1c], reduced by consumed entries and activity bonuses)

### CInstanceEnterUI::BuildSpecLevelDataVO `@0x10914690` — instance-ui
*Builds a single LEVELDATAVO for one level id (GetSpecLevelData path): resolves level record, emits difficulty/state/proposed/record/target fields. Sibling of BuildEntryDataVO for a single level.* (server: client-only display of server-authoritative level-def fields (same offsets as BuildEntryDataVO), conf medium)
- ƒ Guard param_5==3. Level id iVar10 = *(param_4+8) when (*(param_4+4)&0x8f) is 3 or 4 else sentinel 0xDEADBEAF (-0x21524151)
- ƒ Finds condition in player level-tab tree (FUN_10912db0 on player+0x2d2c); tab record stride: tree walk, per node target-id list at +0x14/+0x1c
- ƒ Emits: nTaskShowCondition=uStack_34, nEntryPointID=uStack_68 when tab target id matches level id
- ƒ Level record ppiVar4 (FUN_107d7930(levelId)): nUIShowBossID=level[0x1e], strDesc=level[0x18], nDiffLev=level[0xc], nState=FUN_10914e90(level[0x10],levelId), nProposeLev=level[0x1a], nProposePlayerNum=level[0x1b], nLevelID=iVar10, nNeedLev=0
- ƒ nRecord = (*(player+0x2b88)!=0 && FUN_114cd4a0(levelId)!=0) ? FUN_114cd4a0 : 0
- ƒ strTargetDesc = *(local_cc+0x74) (fallback empty); strOtherTarget%d loop identical to BuildEntryDataVO (stride 0x54, cap 0x1a3)

### CInstanceEnterUI::RegisterHandlers `@0x10912f00` — instance-ui
*Registers instance/level-enter and matchmaking UI handlers (get enter data, spec level data, team match, stop match, region/battle-map queries).* (server: client-only (UI callback registration), conf high)
- ƒ Registers: GetInstanceEnterData->CInstanceEnterUI::BuildEntryDataVO(FUN_10913600), GetSpecLevelData->FUN_10914690, IsCrossRegion->FUN_10913400, GetCrossRegionRoomID->FUN_10913480, GetGuildMathSignUP->FUN_10913370, IsBattleWatch->FUN_109134d0, LevelTeamMatch->FUN_10914f90, LevelTeamMatchByEntrust->FUN_10915240, ReqSpecLevelData->LAB_109154b0, ReqStopMatch->FUN_109154d0, IsLocalBattleMap->FUN_10913580, GetCurLevelID->FUN_109152e0, GetCurLevelMode->FUN_10915340, IsCrossServerPlayer->FUN_109153b0, IsBattleLevelCanTrade->FUN_10915440


## pvp-battle  (3)

### PvpBattleEntrustModel::BuildPvpBattleListVO `@10985850` — pvp-battle/league-entrust
*GetPvpBattleListData handler (param_5==1 guard). Resolves local player, reads its league/pvp-battle data block (player+0x2b9c). Emits: maxPvpBattleCount, curPvpBattleCount, nEntrustVipCnt, plus three arrays: leagueTasksArr, pvpBattleListArr, pvpBattleNoticeArr. Iterates league entries (record stride 0x14=20 bytes) and notice entries (stride 0x18=24 bytes), building nested VOs (PVPBATTLE_LISTVO_CLASSNAME / PVPBATTLE_TASKVO_CLASSNAME / PVPBATTLE_NOTICEVO_CLASSNAME). Calls CLeagueInfo::CollectLeagueScheduleEntries for the schedule/notice list.* (server: client-only display; all values (counts, vip count, league/task/notice lists, schedule times) originate from server-authoritative league state. maxPvpBattleCount / curPvpBattleCount are the server-tracked participation cap and current count., conf medium)
- ƒ player = *(*(*(DAT_1202e818+0xd0)+0x90))+0xb4)(); leagueBlock = *(player+0x2b9c); guard leagueBlock!=0
- ƒ maxPvpBattleCount = vtbl+0x20 accessor on player[0xae6]; curPvpBattleCount = vtbl+0x28 accessor on player[0xae6]
- ƒ nEntrustVipCnt = FUN_11548ea0() only if player[0xabe] != 0, else 0
- ƒ iCountLeague = (levelIdArrEnd - levelIdArrStart) >> 2   // count of 4-byte level IDs
- ƒ league loop count = (EBX[2]-EBX[1]) / 0x14 ; per-entry: iLeagueID = *(base+4), levelIds span = *(base+0xc)-*(base+8)
- ƒ notice loop count = (pcStack_1b8 - piStack_1bc) / 0x18 ; noticePvpBattleRound = *(apiStack_138+iVar4+8)
- $ maxPvpBattleCount: per-period cap on PvP-battle/league task participation
- $ curPvpBattleCount: current used count against the cap
- $ nEntrustVipCnt: VIP entrust slot count

### PvpBattleEntrustModel::BuildTeamMemberInfoVO `@10987380` — pvp-battle/level-entrust
*GetLevelInstanceGoData handler (in_stack_00000014==1 guard). Builds the teammemberInfoArr for the level-entrust 'go' view. Resolves local player and a party/team object (FUN_112ea0c0 returns [begin,end], iterating members at stride 0x2c=44 bytes). Per member emits fields via LEVELENTRUST_MEMBERVO_CLASSNAME: playerName (DAT_11dbac80), starLevel, level (DAT_11dccf88), weapon, class/job (DAT_11dd7eac), state=0, selHuntPacket=0xffffffff, bIsLeader=0. Also emits remainWarning (FUN_115768f0) at model level.* (server: client-only display of party member info; membership, star levels and remainWarning are server-provided. state/selHuntPacket/bIsLeader are initialized to sentinel defaults client-side (state=0, selHuntPacket=-1/0xffffffff)., conf medium)
- ƒ member iteration: for(p=*iter; p!=iter[1]; p+=0x2c)
- ƒ state initialized 0, selHuntPacket initialized 0xFFFFFFFF (no packet selected), bIsLeader initialized 0
- ƒ remainWarning = FUN_115768f0()

### PvpBattleEntrustModel::RegisterHandlers `@10985230` — pvp-battle/league-entrust
*Model init registering the PvP-Battle / League-Entrust command handler table. Handlers: GetPvpBattleListData(->FUN_10985850), GetSelEntrustDetailData(->LevelEntrustDetailVO__BuildByGroup), GetLevelInstanceGoData(->FUN_10987380), GetHunterBoxData(->FUN_10986db0), GetAvalidActionPoint(->FUN_10986d30), AcceptPvpBattleTask(->FUN_10985650), SelHuntPacket(->FUN_10985790), PvpBattleReady(->FUN_109857e0), RequestPvpBattleList(->LAB_10985610), GiveUpPvpBattleTask(->FUN_109856b0), ReqOpenPvpBattleGoView(->FUN_10985700), ReqPvpBattleTrackData(->FUN_10987760), ReqOpenPvpBattleInfoByTrack(->FUN_10987b10).* (server: client-only registration; the Accept/GiveUp/Ready/Request handlers are the client-side entry points that emit the corresponding server RPCs (server authoritatively accepts/gives-up/starts league tasks)., conf high)


## locomotion  (3)

### MovementController::ApplyMoveRequest `@10be86b0` — locomotion (stock CryEngine)
*CryEngine locomotion: reads a movement request block, computes delta from current position via animation-graph query, and forwards RequestedMoveAnim / MoveSpeedMultiplier / Steer_Enabled into the animation-graph input (FUN_113168d0 = get-AG-input-id, FUN_1046dc90, FUN_1025bc60/cc60/be30 = set value). Two paths based on request flags (bit 2 vs bit 1 at +0x133).* (server: client-only movement/animation., conf low)
- ƒ request flags at *(param_2+0x133): bit2 path A, bit1 path B

### MovementSteeringParams::ctor `@10cf6f50` — locomotion/steering (stock CryEngine)
*Constructor for a movement/steering parameter block: creates many named AG inputs with float/bool defaults (TargetPos, TargetID, RequestedMoveAnim, TargetType='Entity', MoveSpeedByAnim, Steer_* family, RotateSpeedByMove, MaxMoveSpeed, MaxRotateSpeed, MoveSpeedMultiplier, etc.). Ends with FUN_10c3d580(0x44) (noreturn tail).* (server: client-only movement tuning constants., conf low)
- ƒ defaults: RotateReachedTimeScale=0.5f(0x3f000000), MaxMoveSpeed=4.0f(0x40800000), MaxRotateSpeed=180.0f(0x43340000), MoveSpeedMultiplier=1.0f(0x3f800000), Steer_MaxForce=2.0f(0x40000000), Steer_AvoidanceRadius=1.0f, Steer_TravelAngleToRollRatio=0.6f(0x3f19999a), MinYawTurnAngle=60.0f(0x42700000), PitchRotateSpeed=125.0f(0x42fa0000), Steer_MoveSpeedSmoothTime=0.04f(0x3d23d70a), Steer_TurnSpeedSmoothTime=0.4f(0x3ecccccd), Steer_StrafeSmoothTime=0.1f(0x3dcccccd)


## player movement  (3)

### PlayerMovementSync::WriteRequestState_A `@10dceca0` — player movement/physics net-sync
*Physics/movement network-debug sync: computes requested velocity magnitude and rotation-Z (via _CIatan2 * rad-to-deg DAT_11de9a28) and publishes m_request.velocity, ReqVelo, ReqVeloX/Y/Z, ReqRotZ debug values; fires detachLadder/jumped events; copies velocity/jumped/rotation state from the physics block (param_1) into the entity net-state (param_2 at word offsets 0x5a4..0x646). Sets an on-ground/moving flag.* (server: client-only debug publish + local state copy; the actual movement is server-validated elsewhere., conf low)
- ƒ ReqVelo = sqrt(vx^2+vy^2+vz^2), vx=*(p1+0x248) vy=*(p1+0x24c) vz=*(p1+0x250)
- ƒ ReqRotZ = atan2(...) * DAT_11de9a28 (rad->deg)
- ƒ moving flag = (velY>threshold) && ... && (physFlags&8) via *(byte*)(p1+0x240)&8

### PlayerMovementSync::WriteRequestState_B `@10ed1a20` — player movement/physics net-sync
*Duplicate of FUN_10dceca0 (player movement/physics net-sync + ReqVelo/ReqRotZ debug publish). Differs only in entity net-state word offsets (0x5a6.. / flag at +0x179d) and uses accessor FUN_10ecc2c0 instead of FUN_10da84c0.* (server: client-only., conf low)
- ƒ ReqVelo = sqrt(vx^2+vy^2+vz^2); ReqRotZ = atan2(...)*DAT_11de9a28

### PlayerMovementSync::WriteRequestState_C `@10f414e0` — player movement/physics net-sync
*Third duplicate of the player movement/physics net-sync (see FUN_10dceca0), with its own entity net-state offsets (0x5ce.. / flag +0x1851) and accessor FUN_10f1eb30.* (server: client-only., conf low)
- ƒ ReqVelo = sqrt(vx^2+vy^2+vz^2); ReqRotZ = atan2(...)*DAT_11de9a28


## operation activity  (2)

### OperationActivityModel::RegisterLuaHandlers `@107e1d80` — operation activity (adjacent)
*Registers ~18 operation-activity/anti-addiction Lua callbacks (C2AS_LevelMatch, C2AS_LevelStart, RequestOPSimpleData, GetActivityNoticeStatus, etc.) and a daily-login counter 's_loginIngameEachDay'. Marketing/operation-activity subsystem, not core quest state.* (server: client-only, conf medium)
- ƒ daily login counter registered at param_1+0x24, cap 0x100

### OperationActivityModel::RegisterSubHandlers `@107e2430` — operation activity (adjacent)
*Secondary registration for operation-activity model: _OpenInternalAddress, _RequestExeByUniqueID, _RequestOPSimpleData, _RequestOPDetailInfo, _getOnlineTimeFunc.* (server: client-only, conf medium)
- ƒ smart-ptr addref pattern: if (flags>>6 &1) call vtable+4 (AddRef) / vtable+8 (Release)


## quest rewards + objectives  (2)

### NpcTaskModel::BuildNpcTaskDetailVO `@107eef70` — quest rewards + objectives (display)
*Builds the NPC-task detail VO: award item list (task_awardList / task_selectawardList), task meta (taskName, taskLevel, queststatus, cantGiveup, bTeam, bRepeat), computed reward preview currencies, and the task_targets objective list. Client-side preview; the reward math and the objective/target struct layout are the load-bearing data here.* (server: client-only, conf high)
- ƒ task-def base piVar6; reward table base = piVar6+0x13 (byte offset 0x4c)
- ƒ reward lookup by type id via FUN_10804900/FUN_10804880/FUN_10804940/FUN_10804cd0/FUN_108049c0/FUN_10804980/FUN_10804d10/FUN_10804a00; reward record fields at [2],[3],[4]
- ƒ farm_actuarialpoint = (int)((float)rewardRec[2] * (float)huntCount) where huntCount from CPlayer::GetHuntRankOrCount(rec[1],0,0,0,&cnt)
- ƒ DAT_11dbfbc8 currency (type 0x19) = (int)((float)rewardRec[2] * (float)rank), rank via GetHuntRankOrCount(...,&rank,0)
- ƒ gold_bind (type 0x18): DAT_11dc0944 = (int)((float)rewardRec[2]*(float)cnt); gold_bind = (int)((float)rewardRec[3]*(float)cnt2)
- ƒ hunter_exp (type 0x21) = rewardRec[2]; hunter_fund = rewardRec[3]; hunter_contribution = *(rec+4)
- ƒ huntingCredit (type 0x24) emitted as 0 in preview; npcfriendvalue = *(rec+8) (type via FUN_10804a00)
- ƒ cantGiveup = (char)piVar6[7]; bRepeat = (char)piVar6[0x20]; bTeam = 1 if FUN_10804c90 team-size>=2 else 0
- ƒ queststatus = task-instance+0x14 (or 0 if no instance)
- ƒ OBJECTIVE/TARGET struct (stride 0x3b dwords = 0xEC bytes), fields per target: [0]nTargetID1 [1]nTargetID2 [2]nTargetID3 [3]nTargetID4 [4]nTargetID5 [5]nOpType [6]nCurCount [7]nMaxCount [0xd]strTarget1 [0x13]strTarget2 [0x19]strTarget3 [0x1f]strTarget4 [0x25]strTarget5 [0x34]?(compared !=4) [0x38]nQuestType [0x39]field(DAT_11dca838)[0x3a]?(compared ==3)
- ƒ objective display gate: if (target[0x3a]==3 && target[0x34]!=4): complete branch when nCurCount==nMaxCount, in-progress branch when nCurCount<nMaxCount
- $ reward currencies: farm_actuarialpoint, gold_bind, hunter_exp, hunter_fund, hunter_contribution, huntingCredit, npcfriendvalue, and a gold amount (DAT_11dc0944)
- $ reward amount = floor(config_base * player_hunt_count_or_rank) - i.e. rewards scale by hunt rank/count

### PlayerTaskModel::BuildTaskDetailVO `@107f2330` — quest rewards + objectives (display)
*Builds the detailed VO for a single player task: award list, select-award list, task meta (taskid, tasktype, taskName, taskLevel, cantGiveup, queststatus, bTeam, bRepeat, bTrace, TaskContent), reward-currency previews, and the full task_targets objective list. Near-duplicate of FUN_107eef70 but for the player-owned (accepted) task including nQuestType per target. Client-side.* (server: client-only, conf high)
- ƒ same OBJECTIVE struct stride 0x3b dwords; per target emits nTargetID1..5, strTarget1..5, nOpType(idx5), nCurCount(idx6), nMaxCount(idx7), nQuestType(idx0x38), field idx0x39
- ƒ same completion gate: if (target[0x3a]==3 && target[0x34]!=4): if nCurCount==nMaxCount full-complete VO; else if nCurCount<nMaxCount partial VO
- ƒ default (non-count) target VO emits nOpType=0x1f for strTarget4-style entries
- ƒ same reward-preview math as FUN_107eef70 (farm_actuarialpoint, gold_bind, hunter_exp/fund/contribution scaling by hunt rank/count)
- $ reward currencies mirror FUN_107eef70: farm_actuarialpoint, gold_bind, hunter_exp, hunter_fund, hunter_contribution, huntingCredit


## settings  (2)

### CSettingsUI::ApplyOptionsFromVO `@0x10836b50` — settings/options-ui (not quests)
*Reverse of BuildOptionsVO: reads a packed options struct (param_3) and writes each value back into the corresponding cvar (SetIVal at vtbl+0x14), flushing via vtbl+0x21c. Also toggles chat-dialog rendering and refreshes task-trace mode if it changed.* (server: client-only, conf medium)
- ƒ options struct param_3 field offsets (stride 0x10): +8=g_FriendRemind... +0x28=g_refuseTradeRequest, +0x38=g_refuseTeamRequest, +0x48=g_GuilderRemind, +0x58=cl_ShowHeroNamePadMode, +0x68=cl_ShowPlayerNamePadMode, +0x78=e_ChatDialogRendering, +0x88=cl_ShowHeroPetName(inverted), +0xa8=g_refuseClanRequest, +0xb8=cl_ShowPlayerPetName(inv), +0xc8=cl_ShowBossDeadGlow(inv), +0xd8=g_NPCName_hide(inv), +0xe8=cl_TaskTraceMode, +0xf8=g_DInputKeyboard, +0x108=g_UseEmbeddedIME, +0x118=g_hideEmoji, +0x128=r_HideC2PlaeyerEffect, +0x138=r_HideSelfPlaeyerEffect, +0x148=cl_iHideBreakEffect
- ƒ if cl_TaskTraceMode changed (bVar24), notifies task-trace subsystem via FUN_10d17440/10d17870 -> event 0x231

### CSettingsUI::BuildOptionsVO `@0x10835cb0` — settings/options-ui (not quests)
*Reads dozens of client cvars (camera, HUD, gamepad, social-refuse flags, name-pad modes) via ICVar->GetIVal/GetFVal and packs them into a settings VO for the options panel. Also builds per-weapon-type gamepad key config (weapon_type_1..12).* (server: client-only, conf medium)
- ƒ cvar accessor: DAT_1202e818+0x2c -> vtbl+0x54 = ICVarManager::GetCVar(name); then cvar vtbl+8 = GetIVal, +0xc = GetFVal
- ƒ gamepad loop: for i in 1..12 sprintf('g_Gamepad_WeaponType_%d',i) read -> VO 'weapon_type_%d'
- ƒ mouse sensitivity VO = cvar('i_mouse_accel')*DAT_11de9a30 (and _v, cl_MHFpsRotSpeed) — DAT_11de9a30 is a float scale constant
- ƒ 'isWindowsMode' = (r_Fullscreen==0)


## shop-ui  (2)

### CPaidBoxUI::RegisterHandlers `@0x10907130` — shop-ui
*Registers two UI handlers: RequestPaidBox and UpdateItemData. Small dispatch-registration stub.* (server: client-only (UI registration), conf medium)
- ƒ Registers RequestPaidBox->handler@0x1090b064 and UpdateItemData->handler@0x1090b0a7 via FUN_100b62c0 + FUN_10907740/FUN_10907810

### CPetShopUI::RegisterHandlers `@0x108cce00` — shop-ui
*Registers the pet-shop Lua/UI request dispatch handlers and pushes shop money fields to the UI VO. Not quest logic; pet/NPC shop UI plumbing.* (server: client-only (UI dispatch registration; balances are display copies), conf medium)
- ƒ DAT_123bbab1 = (param_5 == 2)  // flag: shop opened in mode 2
- ƒ Registers via FUN_104d13b0(name, fn): _requestBuyItem->FUN_108cd070, _requestNpcSales->FUN_108cd400, _requestSoldList->FUN_108ce7d0, _requestSellItem->FUN_108cef10, _requestGetBuyStackCounts->FUN_108cfa10; and _requestBuyBackItem VO-built inline
- ƒ Emits FUN_104d1550("CurrentBindMoney", uVar4) and ("CurrentUnbindMoney", uVar3) from two FUN_1025b060() reads (bound/unbound currency balances)
- ƒ strPetShopTitle string field set only when pet-shop record present: DAT_1202e818+0xd0 -> +0x90 -> vtbl+0xb4 != 0
- $ CurrentBindMoney / CurrentUnbindMoney (bound & unbound wallet balances) shown in shop UI


## team-ui  (2)

### CBattleTeamUI::OnClanInviteReceived `@0x1093faf0` — team-ui
*Handles an incoming clan/team invite: if auto-refuse config is off, pops a confirm MsgBox (Ok/Cancel); otherwise forwards accept directly to the network layer. Team/clan invite UI, not quest logic.* (server: client-only (invite dialog + request send), conf medium)
- ƒ Stores invite payload: *(this+0x28) = param_2 (8-byte inviter id)
- ƒ Config check g_refuseClanRequest via config mgr (DAT_1202e818+0x2c vtbl+0x54); vtbl+8 == 0 => show dialog
- ƒ String-table lookup (CInfoManager idiom): idx = wantId - mgr[0xc]; valid if 0<=idx<mgr[9] and stride mgr[10]!=0; rec = mgr[8][idx/stride][idx%stride] (2-level page table). Used for message ids 0x2a and 6
- ƒ Dialog: FUN_1112d7a0(0x1ff1, "BattleTeam.MsgBoxClanInviteOk", "BattleTeam.MsgBoxClanInviteCancel", ...)
- ƒ Accept path (refuse off): FUN_11c65590(player, invite_hi, invite_lo, 0) where player = DAT_1202e818+0xd0->+0x90->vtbl+0xb4

### CTeamMatchUI::RegisterHandlers `@0x10900850` — team-ui
*Registers team/matchmaking UI request handlers (create/join/quit/kick/invite/search team, raid invite). Dispatch-table registration.* (server: client-only (UI callback registration), conf high)
- ƒ Registers: GetTeamFiltrationData->FUN_109011d0, RefreshTeamInfo->FUN_10901db0, SearchOtherTeam->FUN_10901fd0, SearchTeamChangePage->FUN_109020b0, LookOtherTeamInfo->FUN_109026e0, CreateTeamReq->FUN_109027e0, JoinTeamReq->FUN_10902bf0, ReqQuitTeam->LAB_10902eb0, ReqChangeLeader->FUN_10903e90, ReqKickMember->FUN_10902ee0, SetTeamOptionReq->FUN_10904030, InviteTeam->FUN_109043f0, QuickJoinTeamReq->FUN_10901e80, ReqSearchByName->FUN_10904480, onTeamTypeEight->FUN_10904540, onTeamTypeTwelve->FUN_10904600, onTeamTypeSixTeen->FUN_109038a0, GetTeamMemberList->FUN_10900f70, RaidInviteTeam->FUN_10901080, RaidTeamRequest->FUN_10902120, GetNetID->FUN_10904830


## input  (2)

### PlayerInputContext::RegisterActionFilters `@10bc3b80` — input/action-map (stock CryEngine)
*Registers CryEngine action/input-context filter groups on a player-input object via DAT_120286c8 action-map factory (vtbl+0x3c ->+0x74 ->+0x54 add). Groups: no_vehicle_exit(param_1+0x570), cutscene(+0x578), cutscene_no_player(+0x57c), no_map_open(+0x580), no_objectives_open(+0x584), no_connectivity(+0x58c), teleport(+0x598), UpView(+0x5a8); plus sub-init calls FUN_10bc3db0/3e90/4050/4120/42c0/4660/4870/4960/4aa0/4b70/4ca0/4ec0.* (server: client-only input plumbing. 'no_objectives_open' is an input-block context tied to the objectives HUD, not quest logic., conf medium)

### PlayerInputContext::RegisterNoObjectivesOpenFilter `@10bc4830` — input/action-map (stock CryEngine)
*Registers just the 'no_objectives_open' action filter (writes result to param_1+0x584 and binds handler param_1+0x39c). A single-group variant of FUN_10bc3b80.* (server: client-only., conf medium)


## objectives HUD  (2)

### CUIObjectives::ctor `@10ca6410` — objectives HUD (stock CryEngine)
*Constructor for the stock CryEngine 'UIObjectives' HUD element (vtable PTR_FUN_11cddd38). Registers Flash<->game events ObjectiveAdded/ObjectiveRemoved/ObjectivesReset/ObjectiveStateChanged (each with args ObjectiveID/MissionID/Name/Desc/State) and function RequestObjectives, then calls FUN_10ca6e10 to load the objectives XML.* (server: client-only HUD. These are the generic CryEngine mission-objective UI events; MHO quest objective data is pushed into them but the widget itself is stock., conf high)
- ƒ event ids: ObjectiveAdded=0, ObjectiveRemoved=1, ObjectivesReset=2, ObjectiveStateChanged=3


## libpng  (1)

### png_write_PLTE `@1002c890` — libpng (third-party)
*libpng: writes a PLTE palette chunk. Validates color count (0..0x100), rejects on grayscale PNG. Not quest-related; stock third-party plumbing.* (server: client-only, conf high)
- ƒ palette bound: reject if param_3==0 (when flag bit0 clear) or 0x100 < param_3
- ƒ chunk length = param_3*3 (RGB triples), tag 0x504c5445='PLTE'


## entrust config  (1)

### CLevelEntrustNpcInfo::GetEntryByKey `@104d8260` — entrust config
*Static-config accessor for CLevelEntrustNpcInfo (level-entrust NPC table). Resolves the singleton InfoManager (falls back to CInfoManager::FindByName), then performs a 2-level (bucketed) index lookup by key.* (server: validation, conf medium)
- ƒ guard: param_1 != -1 AND (param_1!=0 \|\| mgr[0xc]==0) AND mgr[10]!=0
- ƒ key = param_1 - mgr[0xc] (mgr[0xc]=id base offset); require 0 <= key < mgr[9] (mgr[9]=count)
- ƒ bucket = mgr[8][key / mgr[10]] (mgr[10]=bucket size); entry = bucket[key % mgr[10]]


## revive UI  (1)

### ReviveModel::RegisterLuaHandlers `@104faa60` — revive UI (unrelated)
*Registers revive/death-watch UI callbacks (GetReviveData, RequestRevive, Start/StopDeathWatchModel, ChangeZIconFunc, RequestQuikBuy, ChangeAutoRevieState, PlayerRefuseRevive) into a Lua/UI dispatch table. Not quest logic.* (server: client-only, conf medium)
- ƒ *(param_1+0x24)=0 init


## quest hub entry resolution  (1)

### HubEntryConfig::ResolveEntryScriptForPlayer `@107cbc00` — quest hub entry resolution
*Given a player/context (param_2), scans four hub-entry config tables in order - CHubEntryConfigInfo, CHubEntryConfigKingQuestInfo, CHubEntryRaidConfigInfo, CHubEntryConfigLetterQuestInfo - and for the first entry that MatchEntry()s and whose two chained lookups (FUN_107d7930 then FUN_107caf90) succeed, returns an associated string (copied into param_1 std::string). Determines which hub quest entry / entry-point script applies.* (server: validation, conf medium)
- ƒ iterate each table 0..GetCount()-1 (GetCount via vtable+0x28)
- ƒ match: CHubEntryConfigInfo entry offset +0x28 -> FUN_107d7930 -> its +0x14 -> FUN_107caf90 -> +0x14
- ƒ KingQuest match uses entry +0x14; Raid uses +0x28; Letter uses +0x10 as first indirection
- ƒ result string materialized from matched entry via +0x14 chain


## quest tracker UI  (1)

### QuestTraceUI::SetMouseEnable `@107edd80` — quest tracker UI
*Fires the 'QuestTraceUIMouseEnable' Lua/UI event with a bool arg, guarded by view-state (DAT_123bcea4 low nibble in {8,9,10}).* (server: client-only, conf medium)
- ƒ state gate: (DAT_123bcea4 & 0x8f) in {8,9,10}


## equipment  (1)

### CEmbedJewelUI::RegisterHandlers `@0x1081c610` — equipment/gem-embed (not quests)
*Registers the EmbedJewel (gem socketing) UI command handlers with the Flash->C dispatch table (FUN_104d13b0 = register named callback).* (server: client-only handler registration; gem embed operations themselves are server-validated elsewhere, conf high)
- ƒ registers: EmbedJewel_IsPlayerOpenEmbedUIFirstTime->FUN_1081e0e0, _putEquipIntoSlot->FUN_1081ca10, _checkPutEquipIntoSlot->FUN_1081c950, _requestEquipEmbedJewel->FUN_1081dbe0, _requestEquipEmbedJewelByArray->FUN_1081d640, New...ByArray->FUN_1081d910, _checkEquipEmbedJewel->FUN_1081d2d0, _checkEquipEmbedJewelByArray->FUN_1081cf80, _RemoveGem->FUN_1081df60, New_RemoveGem->FUN_1081e020, _putJewelIntoSlot->FUN_1081bf20


## coach  (1)

### CoachModel::RegisterHandlers `@109895d0` — coach/matchmaking
*Minimal model init registering a single handler 'RequestCoachLoginMatch' (->FUN_10989740). Standard makeString/register/free triad.* (server: client-only registration; RequestCoachLoginMatch emits a server matchmaking RPC., conf medium)


## equip-color-shop  (1)

### EquipColorShopModel::RegisterHandlers `@10991240` — equip-color-shop (non-quest)
*Registers equip-dye/color shop handlers, gated on DAT_1202e818 present, +0x58 non-null, and *(DAT_1202e818+0x209)=='\0'. Handlers (FUN_104d13b0 = registerNamedMethod): _openEquipShow, _requestEquipColorList, _requestEquipItemColor, _checkEquipItemColor, _buyEquipItemColor, _getItemCount, _getMoneyCount, _getItemMartID.* (server: client-only registration; _buy/_check/_request map to server shop RPCs; _getItemCount/_getMoneyCount read locally-cached inventory/currency., conf medium)


## question  (1)

### QuestionModel::GetQuestionTitle `@109aa610` — question/quiz activity
*Handler (in_stack_00000014==2 guard) that resolves an ID from the request variant (type 3 or 4 -> *(req+0x20), else sentinel 0xdeadbeaf), fetches the local player, looks up a question/quiz record via FUN_109a8650(id) and, if found, writes its title (record+0x14) into 'questionTitle'.* (server: client-only display; question definition is data-driven, title text from record., conf medium)
- ƒ id = ((reqHeader & 0x8f)==3\|\|==4) ? *(req+0x20) : 0xdeadbeaf
- ƒ questionTitle = *(FUN_109a8650(id) resolved record via FUN_100e5b40 +0x14)


## equip-recast  (1)

### EquipRecastModel::RegisterHandlers `@109b4ca0` — equip-recast (non-quest)
*Registers equip-recast (re-forge) model handlers: InitModel(&DAT_109b4fa0), requestPutItemIn(->FUN_109b4fb0), requestEquipRecastInfo(->EquipRecastModel::BuildSourceInfo), requrestAttributeData(->FUN_109b6580), requestEquipRecast(->FUN_109b6ff0), setDestEquipData(->FUN_109b56c0), requestEquipShow(->FUN_109b7540), canEquipRecast(->LAB_109b6bd0), Dispose(->FUN_109b4990).* (server: client-only registration; requestEquipRecast is the server RPC that performs the reforge (server-authoritative outcome)., conf medium)


## item-unbind  (1)

### ItemRemoveBindModel::RegisterHandlers `@109bf940` — item-unbind (non-quest)
*Registers item unbind model handlers: InitModel(&DAT_109bfb70), requestPutItemIn(->FUN_109bfb80), requestRemoveBindItemInfo(->FUN_109bfd90), canItemRomoveBind(->FUN_109c0220), requestItemRomoveBind(->FUN_109c02a0), Dispose(->FUN_109bf630).* (server: client-only registration; requestItemRomoveBind is a server RPC., conf medium)


## operation-activity tasks  (1)

### OperationActivityModel::BuildTaskListVO `@109da010` — operation-activity tasks
*Builds arrTaskData for the NewOperationActivity detail view. Resolves local player, iterates the activity's task table and for each task whose byte at [record-0x22]==0x20 (' ', 'active/shown' flag) emits an ActivityDetailData VO (class 'mh.view.NewOperationActivity.Data.ActivityDetailData') with EntryId, taskState (0/1 completion), taskDesc. taskState is computed from server-tracked progress.* (server: client-only VO build, but taskState is DERIVED from server-authoritative progress: server owns the completion counters queried by FUN_11513b40. Useful to mirror the completion gate., conf high)
- ƒ activityObj = param_4 (local_78); taskCount = *(byte*)(activityObj+0xad2)
- ƒ record base = activityObj+0xaf6, stride 0x423 bytes, loop while index < taskCount
- ƒ filter: process record only if *(byte*)(record-0x22) == 0x20 (' ')
- ƒ EntryId = *(byte*)(record-0x23); taskTypeArg = *(byte*)record (piStack_70)
- ƒ taskState = 1 IFF ( *(player+0x2acc)!=0  AND  FUN_11513b40(*ESI, *(byte*)(ESI+5), taskTypeArg, &progressOut)!='\0'  AND  progressOut!=0 ); else taskState = 0
- ƒ taskDesc built from CPet::SetName(record-0x20) name buffer


## guild-task  (1)

### GuildTaskModel::BuildGuildTaskInfoVO `@109e13d0` — guild-task/commission
*Builds guildTaskInfoData VO for a single guild task/commission (in_stack_00000014==2 guard). Resolves taskId from request variant, looks up guild + task-config + reward record, and emits strName, taskId, nMoneyType, nMoneyCount, nTaskAddition, strTarget, the six button-gate booleans (bShowAccept/bEnableAccept/bShowGiveUp/bEnableGiveUp/bShowFinish/bEnableFinish), and nTaskState. Handles the special generic task id 99999.* (server: client-only VO build for the guild-task panel, but reward amounts (nMoneyCount/nMoneyType), nTaskAddition, hunt-count progress and nTaskState are server-authoritative; the accept/giveup/finish gates and reward math are worth mirroring server-side for validation., conf medium)
- ƒ taskId = ((reqHeader & 0x8f)==3\|\|==4) ? *(int*)(req+0x20) : -0x21524151 (0xdeadbeaf)
- ƒ reward record = FUN_10804940(iStack_a0+0x4c, 0x18)  // lookup by 0x18-stride table
- ƒ if reward==0: nMoneyCount = 0
- ƒ else: (huntCountFloat, huntRank) = CPlayer::GetHuntRankOrCount(*(reward+4), &countFloat, &rankPtr, 0)
- ƒ   if (countFloat > 0.0 && *(int*)(reward+0xc) > 0): nMoneyType=0, nMoneyCount=FUN_104d14d0
- ƒ   if (rankFloat > 0.0 && *(int*)(reward+8) > 0): nMoneyType=0, nMoneyCount=FUN_104d14d0
- ƒ nTaskAddition = FUN_109e22e0()==0 ? 0 : *(int*)(ret+4)
- ƒ if taskId==99999: strName/taskId overridden with generic guild-task record (FUN_109df950)
- ƒ target list: iterate task targets at stride 0xec=236 bytes; strTarget from *(entry+0x18)(DAT_11de486c) and *(entry+0x1c)(DAT_11de4830)
- ƒ button gates default 0 then set via (*(*apiStack_90[0]+0x30))(0x494, 2, &stateVar)  // 0x494=1172 task-state query
- ƒ nTaskState = iStack_b4
- $ nMoneyType / nMoneyCount: guild-task reward currency type and amount (server-authoritative)
- $ nTaskAddition: task reward bonus/addition value


## legend-pearl  (1)

### LegendPearlModel::RegisterHandlers `@109ed990` — legend-pearl (non-quest)
*Registers InitModel(->LegendPearlModel::RegisterHandlers thunk) and C2AS_RequestLegendPearlAttribute(->BuildEquipPassiveSkillDataVO_A).* (server: client-only registration; C2AS_RequestLegendPearlAttribute is a client->AS(activity server) RPC., conf medium)


## lucky-shop activity  (1)

### LuckyShopModel::RegisterHandlers `@109ffdc0` — lucky-shop activity (non-quest)
*Registers lucky-shop activity handlers: C2AS_GetCountDown(->FUN_109fff20), AS2C_RequestLuckyShop(->FUN_109fffd0), C2AS_GetCommodityData(->FUN_10a00060), AS2C_RequestBuy(->FUN_10a002a0).* (server: client-only registration; C2AS_*/AS2C_* are activity-server RPCs (server authoritative for purchase outcome)., conf medium)


## item-info UI  (1)

### ItemInfoUIModel::ctor `@10b5e6c0` — item-info UI (non-quest)
*Constructor for an item-info UI model (vtable PTR_FUN_11cc7aa4). Grabs a subsystem from DAT_1202e818+0xbc vtbl+0x3c and registers script commands via CInfoRecord::GetModelString: GetStaticItemData(->FUN_10b5dbc0), ItemIcon_RequestItemInfo(->FUN_10b5dcb0), global_getItemData(->FUN_10b5dd90), global_getEquipAdditionalInfo(->FUN_10b5dec0).* (server: client-only UI plumbing., conf medium)


## system-message  (1)

### SystemMsgDialogUIModel::ctor `@10b5eed0` — system-message/dialog UI (non-quest)
*Constructor (vtable PTR_FUN_11cc7b14) registering onSendSystemMsgByIDFromUI(->FUN_10b5e900), requestDialogCreate(->FUN_10b5ea90), SpecialQuitGame(->FUN_10b5ee80).* (server: client-only UI plumbing., conf medium)


## systembar HUD  (1)

### SystemBarUIModel::ctor `@10b660a0` — systembar HUD (non-quest UI)
*Constructor (vtable PTR_FUN_11cc8130) for the system-bar/HUD top menu, registering navigation commands: SystemBar_PlayerPropertyUI, SystemBar_ShowQuestUI, SystemBar_ShowInventoryUI, SystemBar_ShowSysConfigUI, SystemBar_ShowT/O/K/H/M.* (server: client-only UI navigation. SystemBar_ShowQuestUI merely opens the quest panel; no server logic., conf medium)


## spectator  (1)

### SpectatorController::RequestSpectatorTarget `@10c01e40` — spectator (non-quest)
*If the target's state (vtbl+0x1a4) == 3 and DAT_1202e818+0x16c flag set, sends 'RequestSpectatorTarget' RPC (via FUN_10c0bc50 on obj+0x6c) with the target's id (param_2[2]).* (server: client emits a server RPC to switch spectate target; server authoritative., conf medium)
- ƒ gate: targetState(vtbl+0x1a4)==3 && *(char*)(DAT_1202e818+0x16c)!=0


## settings UI  (1)

### CUISettings::ctor `@10caa200` — settings UI (stock CryEngine)
*Constructor for the stock CryEngine 'Settings' UI (graphics/sound/game). Caches cvars r_Width/r_Height/r_Fullscreen/s_MusicVolume/s_SFXVolume/sys_flash_video_soundvolume/cl_sensitivity/cl_invertMouse/cl_invertController, seeds a default resolution list, and registers events (OnGraphicChanged/OnSoundChanged/OnGameSettingsChanged/OnResolutions/OnResolutionItem/OnLevelItem) and functions (SetGraphics/SetResolution/SetSound/SetGameSettings/GetResolutionList/GetCurrGraphics/GetCurrSound/GetCurrGameSettings/GetLevels/LogoutUser).* (server: client-only settings., conf medium)
- ƒ default resolutions seeded: 1024x768(0x400x0x300), 1280x720(0x500x0x2d0), 1280x1050(0x500x0x41a), 1680x1050(0x690x0x41a), 1920x1080(0x780x0x438)


## crafting  (1)

### CManufactureUI::SendRequestManufactureMake `@0x1120b2c0` — crafting/manufacture (adjacent)
*Builds and sends a RequestManufactureMake network message. Resolves a CManufactureInfo record by id [param_1+0x44]; reads field +0x80 (default fallback 0x4b0) into the request; sends client message 0x7b and marks [param_1+0x4d]=1 (request-in-flight).* (server: client-request: server validates and performs the manufacture authoritatively. Included because manufacture may be a quest/entrust reward path; not core quest logic., conf medium)
- ƒ recipeId = [param_1+0x44]; info = CManufactureInfo[recipeId] (paged accessor)
- ƒ value = info[+0x80] if >0 else default 0x4b0 (1200) -> local_50
- ƒ message name 'RequestManufactureMake'; opcode 0x7b (123)
- ƒ [param_1+0x4d] = 1 (pending flag)
- $ default cost/value 0x4b0 (1200) when recipe field +0x80 <= 0
- $ network opcode 0x7b (123)


## player-animation  (1)

### CPlayerAnimGraph::RegisterStateTransitions `@0x10fd99c0` — player-animation (adjacent)
*One-time (guarded by DAT_1203d0c0==0) registration of the player animation/injury/status-ailment state-transition table: combat actions, wind-pressure/roar/quake/paralyse/sleep/mud/bound/sink/haze abnormal states, injury levels 1-26 (front/back, sword variants, fly-up), rebound/charge-rebound levels, and the QuestComplete/QuestFail base signals mapped to QUEST_COMPLETE / QUEST_FAIL animation states.* (server: client-only: pure animation-graph plumbing (CryEngine Mannequin-style). Only quest relevance is the QuestComplete/QuestFail visual signals., conf medium)
- ƒ guard: only runs if DAT_1203d0c0 == 0 (one-time init)
- ƒ registers signal 'QuestComplete' -> anim 'QUEST_COMPLETE'; 'QuestFail' -> anim 'QUEST_FAIL' (PLBaseSignal)
- ƒ injury-level rebound thresholds LV1/LV2/LV3 mapped to COMBAT_REBOUND_LVn and COMBAT_ChargeREBOUND_LVn animations
