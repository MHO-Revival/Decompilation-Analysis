# MHO Progression / Economy — Round 4

377 functions from CryGame.dll.

Focus: currency & item mutations, crafting/forge/enchant/upgrade, leveling/EXP, rewards/lottery. Server must be authoritative + validate costs.


## rewards  (74)

### CAdditionLevelRewardInfo::GetByIndex `@0x118e6fc0`
*Flat-vector accessor into CAdditionLevelRewardInfo (additional/bonus per-level reward table).* (server: validation (config read), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CDailyRewardUI::BuildDailyScheduleRewardItemData `@1089c9b0`
*'FetchPrize'-related VO builder for STATIC_DailyScheduleRewardItemData: emits the reward item array (itemID/itemName/itemCounts), the pack item name, and the money prices to buy/redeem the pack.* (server: client-only, conf medium)
- ƒ Per reward item: itemID = puVar6[0], itemCounts = puVar6[3]; array element stride 9 dwords (0x24 bytes); itemName resolved via FUN_10254130(itemID) item-def lookup
- ƒ Quest/schedule scan: iterate context list at ctx+0x164..ctx+0x168, element stride 0x114; entry valid while entry.state (offset 0x00) == 0xbc9
- ƒ boundMoneyPrice = (int)((float)FUN_11a13970() * fStack_1d4)  where fStack_1d4 is a rate/discount factor derived from CPlayer::GetHuntRankOrCount
- ƒ moneyPrice = (int)((float)FUN_11a13bb0() * unaff_EDI)  (unaff_EDI second rate factor)
- ƒ Only emits prices when player HR-rank context (DAT_1202e818+0xd0 ... +0x90 -> vtbl+0xb4) resolves and FUN_1089a6a0 returns nonzero
- $ boundMoneyPrice = bound-money (bind currency) cost of the pack
- $ moneyPrice = free/unbound money cost of the pack
- $ Both are base price * rank-based rate factor; base prices from FUN_11a13970 / FUN_11a13bb0 (pack price accessors)

### CDailyRewardUI::BuildRewardStateString `@1089c170`
*Helper that maps a reward-state enum (0/1/2) to a localized string-table id and publishes it as 'RewardStateString'.* (server: client-only, conf high)
- ƒ state 0 -> text id 0x13b3; state 1 -> 0x13b4; state 2 -> 0x13b5; any other -> no text emitted
- ƒ FUN_1024ebe0(&buf, tmp, textId, 0) resolves string-table entry; result published via FUN_104d1670("RewardStateString", ...)

### CDailyRewardUI::RegisterHandlers `@1089aa10`
*Constructor/init for the Daily Reward + server-quest UI module. Copies 5 SmartPtr/variant slots out of the incoming arg block (in_stack_00000010), then registers named script->native callbacks and zeroes an instance field.* (server: client-only, conf high)
- ƒ Registers dispatch table via FUN_104d13b0(name, fn): RequestRewardInfo->FUN_1089c930, SetDailyReward->FUN_1089ad50, FetchPrize->FUN_1089c870, SetQuest->FUN_1089b5f0, requestServerQuestInfo->LAB_1089c970, SetQuestInfo->FUN_1089c040, initTextField->FUN_1089c240
- ƒ   *(param_1+0x38)=0 (clears an instance state field)
- ƒ Standard variant-refcount pattern: for each slot, if (flags>>6 & 1) call vtbl[+4] (addref) on load and vtbl[+8] (release) on teardown

### CDailyRewardUI::SetDailyReward `@1089ad50`
*'SetDailyReward' handler. Builds the daily-contribution ('add oil'/hunter-honor) reward VO: iterates REWARD_ITEM_MODEL entries, publishes each reward's state/index/contributeValue/ItemID, computes today's contribution vs. the reward thresholds, and the amount still needed to reach the next tier.* (server: client-only, conf medium)
- ƒ todayContribute (uVar11): default 0x1e=30; if a valid player/context object present, uVar11 = FUN_1025b060() (query current contribution value)
- ƒ maxContribute / todayRestLevelUp loop over reward-threshold array [local_bc .. local_b8), element stride 4 bytes, count uVar5=((local_b8+3-local_bc)>>2): find FIRST threshold pppiVar7 with (todayContribute < threshold) and set: todayRestLevelUp = threshold - todayContribute; maxContribute = threshold (published only when param_2!=0)
- ƒ Per reward entry: RewardState = entry[4], rewardIndex = entry[1][1], contributeValue = *(local_b4+0x10), ItemID = *(*(local_b0+8)+0x10)
- ƒ Publishes text fields via FUN_1024ebe0 with string-table IDs 0x13b6 contributeTitle, 0x13b7 todayPart1, 0x13b8 todayPart2, 0x13b9 todayPart3, 0x13ba addOilText, 0x13bb finishText, 0x13bc hunterHonor
- $ contributeValue and reward thresholds are contribution-point amounts (hunter-honor 'oil' contribution), not currency; values come from REWARD_ITEM_MODEL data table

### CFinalGuildMatchRewardInfo::GetByIndex `@0x11970b00`
*Flat-vector accessor into CFinalGuildMatchRewardInfo (final guild-match reward table).* (server: validation (config read), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CGiftPackUIModel::BuildGiftPackData `@108fccc0`
*Builds the client display VO array 'giftListArray' for the gift-pack panel from server-pushed/config data. Iterates gift entries (FUN_108fc5a0 count, FUN_108fc510 by index), matches CONSECTIVE_LOGIN/ONLINE_TIME/NEWER_UPGRADE/WEAPON item classnames, and emits per-entry fields.* (server: client-only display builder; the currency/state values it emits (boundGold, unboundGold, state, totalTime) are read from server-authoritative structures. Server owns the real gift state and grant., conf medium)
- ƒ nOnlineTime = ((*(int*)(giftObj+0x3c) - *(int*)(giftObj+0x40)) + _time64(0)) * 1000  (converts server epoch-delta seconds to ms)
- ƒ boundGold = FUN_117faa00() ; unboundGold = FUN_117fac50()  (current player wallet snapshot)
- ƒ state = giftEntry+0xc field, or 0 if lookup (vtbl+0x20)(entryId) == 0
- ƒ if gift type (iVar3+0x2c) == 2: totalTime = FUN_117fac90() * 1000 (online-time gift)
- ƒ if gift type == 1: consecutive-login gift, builds subItemList from SUB_ITEM_CLASSNAME entries (itemID via vtbl+0x18, itemCnt=entry+8, itemIconPathName=itemDef+0xb4)
- ƒ sentinel/uninitialized marker = -0x21524151 (0xDEADBEAF) when a TLV field tag &0x8f is not 3 (int) or 4
- $ boundGold/unboundGold = dual-currency wallet (bound vs tradable gold)

### CGiftPackUIModel::BuildNewPlayerGiftList `@108fe3b0`
*Builds 'newPlayerGiftList' VO for the newbie/upgrade gift panel. Iterates gift entries filtering type (iVar2+0x2c)==3 (NEWER_UPGRADE), emits per-entry item rows and wallet/state.* (server: client-only display builder; emitted boundGold/unboundGold/state are server-authoritative snapshots., conf medium)
- ƒ filter: gift type *(iVar2+0x2c) == 3
- ƒ boundGold = FUN_117faa00(); unboundGold = FUN_117fac50()
- ƒ per reward item: itemID = (itemDef vtbl+0x18)(), itemCnt = entry+8, itemIconPathName = itemDef+0xb4
- ƒ state = (vtbl+0x20)(entryId)+0xc, else 0

### CGiftPackUIModel::RegisterHandlers `@108fc780`
*GUI/Flash model init for the gift-pack subsystem. Binds named RPC/callback slots via FUN_104d13b0 so the client model can query/request gift data. Guarded by in_stack_00000014==1 (one-time init flag).* (server: client-only. Enumerates the gift command surface the server must implement/authorize: GetConsectiveLoginGiftItemList->108fdb10, GetOnlineTimeGiftItemList->108fdf30, GetNewerUpgradeGiftItemList->108fe3b0, ReqGetGift->108fe7d0, GetCanFetchedGiftPackNum->108fd970, GetGroupInfoData->108fc8b0, GetGiftPackData->108fccc0, GetOnlineGiftTimeData->108fd700., conf high)
- ƒ callback bit-flag check: (flags>>6 & 1) tests smart-ref ownership before invoking release vtbl+8 (stock ref-counted string/handle idiom, repeated throughout chunk)

### CGuideGoalDef::LoadFromDataNode `@0x1180a8a0`
*Deserializes a guide / beginner-goal definition (wide-char fields) that maps completion counts to reward ids. Reads: id(->+0x10), OpenCondition(->+0x14), Name; Instruction0..Instruction9 (each resolved to a level/entry id via FUN_100e1bf0/1c30 and appended to the vector at this+0x2C, 4 bytes each); and up to 9 (FinishCount_n, RewardId_n) pairs appended as 8-byte pairs {FinishCount, RewardId} to the vector at this+0x20 (grows by 8; stops early when a RewardId is 0).* (server: client-only (config-node deserialization); populates the guide-goal reward table that authoritative reward-granting reads (FinishCount->RewardId mapping), conf medium)
- ƒ Instruction list: vector at this+0x2C, element stride 4, capacity end at this+0x30
- ƒ reward pairs: vector at this+0x20, element = {u32 FinishCount (local_440), u32 RewardId (local_43c)}, stride 8, end at this+0x24
- ƒ loop pattern: parse FinishCountN then RewardIdN; if RewardId==0 stop; supports N=1..9
- $ each entry pairs a FinishCount threshold with a RewardId to grant on reaching it (up to 9 tiers)

### CGuildMatchRewardInfo::GetByIndex `@0x11970b60`
*Flat-vector accessor into CGuildMatchRewardInfo (guild-match reward table).* (server: validation (config read), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CLeagueRankUIModel::BuildRankDataList `@1094ddf0`
*League variant of the rank-list builder: emits RANK_BASE_DATA_VO 'arrDataList' plus league-specific fields (bGetReward from a claimed-bitmask, strStartTimeStr, strMyRewardStr).* (server: client-only display; bGetReward (claimed) derives from a server-provided bitmask, reward strings from server reward table., conf medium)
- ƒ row stride 0xa0; count = (uStack_1a8 - piStack_1ac) / 0xa0
- ƒ column meta from FUN_1090b6c0: nColumn1Type=+0x14, nColumn2Type=+0x18
- ƒ reward: if uStack_1fc(no-reward flag)==0 and FUN_1094ed10 returns >0 -> nRewardItemID=1, bRewardFetched=0; else nRewardItemID=0, bRewardFetched=1
- ƒ bGetReward = (*(uint*)(state+0x7c) & (1 << (rewardIndex & 0x1f))) != 0  (claimed-reward bitmask)
- ƒ nMyPostion = *(int*)(state+0x24)

### CLeagueRankUIModel::RegisterHandlers `@1094caf0`
*GUI model init for the league/guild-match ranking panel. Registers InitModel/doSearch/GetInfo/GetMyReward/GetTeamMates callbacks and two net notify handlers.* (server: client-only. GetMyReward is the reward-preview query; server owns reward eligibility., conf high)

### CLeagueRankUIModel::RegisterRankHandlers `@1094ccf0`
*Secondary registration (called from InitModel) binding the league leaderboard command set. Guarded by DAT_1202e818+0x209 flag (spectator/disabled mode).* (server: client-only. Commands: GetRankTitleList, ReqRankDataList, UpdateRankDataList->1094ddf0, FetchReward->1094e840 (server authorizes grant), ReqRankTitleList, ReqTeamMatesList., conf high)

### CLeagueRewardInfo::GetRewardAt `@1094c980`
*Static-config accessor into the CLeagueRewardInfo 2D reward table (rank-tier -> reward). Lazy-inits the info manager. Returns the reward id for a linear rank index.* (server: config lookup for both sides; server-authoritative league reward table., conf high)
- ƒ idx = param_1 - base+0x30 (rank offset)
- ƒ valid iff idx>=0 and idx < base+0x24 (total count) and base+0x28 (cols/stride) != 0
- ƒ row = *(int*)(base+0x20 + (idx / cols)*4); return *(row + (idx % cols)*4)
- ƒ special: param_1==-1 rejected; param_1==0 only valid when base+0x30 (offset)==0

### CLevelAppraiseRewardBoxInfo::GetRewardByLevelIndex `@1095c240`
*Identical 2D-grid config accessor for CLevelAppraiseRewardBoxInfo (level appraisal/评价 reward-box table). Lazy singleton (fallback DAT_123c0074).* (server: authoritative: read-only accessor over server-loaded appraisal reward-box config., conf high)
- ƒ same CInfoManager grid formula as 1095c0d0: idx=param-base[+0x30]; row=grid[+0x20][idx/cols[+0x28]]; result=row[idx%cols]; guards param!=-1, cols!=0, 0<=idx<count[+0x24]

### CLevelBoxRewardInfo::FindInfoById `@1144f290`
*Returns the CLevelBoxRewardInfo config entry for a given box/reward id. Standard paged CInfoManager lookup.* (server: validation - server uses this to determine box/chest reward contents., conf high)
- ƒ idx=id-mgr[0x30]; require 0<=idx<mgr[0x24]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ provides level-box reward record (contents in returned struct)

### CLevelBoxRewardInfo::GetManagers `@1144d4c0`
*Singleton accessor / registration for the CLevelBoxRewardInfo config table (level-box / chest reward table). Stock CInfoManager singleton plumbing.* (server: client-only plumbing; underlying table drives box rewards., conf high)

### CLevelCatExtRewardCfgInfo::ApplyReward_wrapper `@0x11826fc0`
*Thin wrapper: ensures CLevelCatExtRewardCfgInfo manager is loaded then calls FUN_11826d40(param_1). No bounds logic here.* (server: authoritative (reward apply path; body in FUN_11826d40, out-of-chunk), conf medium)

### CLevelCatExtRewardCfgInfo::GetRewardByScore `@0x11826f60`
*Looks up a level-category extra-reward config entry from a score/points value. Computes a bucket index = (param_1 / 100000) then subtracts the config's minId base at mgr+0x24; bounds-checks against the flat vector, and if the slot is non-null delegates to FUN_11826c90(param_1) to build the reward.* (server: authoritative (server maps accumulated score/points to a reward tier via config; must use same 100000 divisor and minId base), conf high)
- ƒ bucketIndex = param_1 / 100000 - *(mgr+0x24)   (0x100000-style divisor is decimal 100000, i.e. score->bucket)
- ƒ valid if 0 <= bucketIndex < ((*(mgr+0x18) - *(mgr+0x14)) >> 2) and *( *(mgr+0x14) + bucketIndex*4 ) != 0
- ƒ mgr from CLevelCatExtRewardCfgInfo::FindInfoByKey(0,"CLevelCatExtRewardCfgInfo",0)
- $ score bucket width = 100000 points per category tier

### CLevelEnGroup::GrantGroupReward `@114cf6b0`
*Grants a level-encounter group reward. Looks up both CLevelEnGroupInfo and CLevelEnGroupRewardInfo for group id param_2; requires both present and a valid reward object from FUN_117e9080(param_3). Builds an item bundle (FUN_115223e0 -> FUN_1141c6c0 -> FUN_1149a960), validates via FUN_113f7ed0, then grants by calling vtable+0x228 on this->0x14 with (bundle[1]=count, bundle[0]=itemId). Returns 0=success, 2=no config/no object, 6=build/validate failed, 7=grant rejected.* (server: authoritative - grants items to the player; server must own this grant and validate against CLevelEnGroupRewardInfo. vtable+0x228 = add-item/grant call., conf medium)
- ƒ CLevelEnGroupInfo lookup and CLevelEnGroupRewardInfo lookup, both by group id param_2 (standard paged pattern)
- ƒ reward record puVar5 = FUN_117e9080(param_3); grant call: (*this[0x14] vtable[0x228])(puVar5[1], puVar5[0])
- ƒ return codes: 0 ok, 2 missing config/reward, 6 build fail (FUN_113f7ed0 != 0 or FUN_115223e0 false), 7 grant rejected
- $ reward item id = puVar5[0], count = puVar5[1] (from CLevelEnGroupRewardInfo config)

### CLevelEnGroup::PreviewOrCheckGroupReward `@114cfa30`
*Variant of the group-reward path (114cf6b0) that first calls a check/preview virtual (**(this[0x14]+0x2d1c)+0x44)(buf,0x3d); only if that returns 0 does it grant via vtable+0x22c(bundle[1],bundle[0]). Returns void. Likely the capacity-check-then-grant or preview flow. Same CLevelEnGroupInfo/RewardInfo lookups by param_2.* (server: authoritative/validation - the 0x3d-preflight is a bag/capacity check before granting; server must enforce the same check before the vtable+0x22c grant., conf medium)
- ƒ same dual lookup as 114cf6b0 by group id param_2
- ƒ check: (*(*(this[0x14]+0x2d1c)) vtable[0x44])(local_78, 0x3d); if result==0 then grant (*this[0x14] vtable[0x22c])(puVar5[1], puVar5[0])
- ƒ 0x3d = check-context/count constant
- $ reward item id=puVar5[0], count=puVar5[1]

### CLevelEnSubGroup::GrantSubGroupRewards `@114cf840`
*Grants level-encounter SUB-group rewards. Looks up CLevelEnSubGroupInfo and CLevelEnSubGroupRewardInfo for id param_1. Iterates the reward-entry array of the reward record (base mgr-entry+0x1c, end+0x20, stride 0x10, count=(end-begin)>>4), building and granting each bundle via FUN_115223e0/FUN_1141c640/memcpy/FUN_1149a960. Finalizes with FUN_113f7ed0. Returns 0=success, 2=missing config, 6=failure.* (server: authoritative - grants a batch of items; server must iterate the same config records and grant server-side., conf medium)
- ƒ two paged lookups (CLevelEnSubGroupInfo, CLevelEnSubGroupRewardInfo) by id param_1
- ƒ reward-entry array: base=rewardEntry+0x1c, end=rewardEntry+0x20, entryStride=0x10, count=(end-base)>>4
- ƒ per entry puVar8 (at base+i*0x10): build bundle then FUN_1149a960(puVar8[0], puVar8[1])
- ƒ return 0 ok, 2 missing config, 6 fail
- $ each sub-group reward entry: id=puVar8[0], count/param=puVar8[1] (CLevelEnSubGroupRewardInfo config, 0x10-byte records)

### CLevelEnSubGroup::PreviewOrCheckSubGroupRewards `@114cfb90`
*Sub-group variant with the same preflight-check pattern as 114cfa30: builds the sub-group reward bundle by iterating the 0x10-stride reward array, then calls the check virtual (*(*(0x2d1c))+0x44)(buf,0x3d) once at the end. Returns void.* (server: authoritative/validation - capacity/preview check plus batch grant; server enforces server-side., conf medium)
- ƒ same sub-group array iteration as 114cf840 (base+0x1c, end+0x20, stride 0x10)
- ƒ final check: (*(*(role+0x2d1c)) vtable[0x44])(local_84, 0x3d)
- $ sub-group reward entries id=puVar8[0], count=puVar8[1]

### CLevelEnSubGroupRewardInfo::GetRewardByLevelIndex `@1095c0d0`
*2D-grid config accessor for CLevelEnSubGroupRewardInfo (entrust sub-group reward table). Resolves the singleton InfoManager (lazy FindByName fallback DAT_123c003c) then indexes the shared CInfoManager grid by a level/reward id, returning the entry pointer.* (server: authoritative: read-only accessor over server-loaded static reward config; server owns the CLevelEnSubGroupRewardInfo table and the reward ids it yields., conf high)
- ƒ shared CInfoManager 2D-grid lookup: valid iff param!=-1 && (param!=0 \|\| base[+0x30]==0) && cols[+0x28]!=0; idx = param - base[+0x30]; valid iff 0<=idx<count[+0x24]; row = grid[+0x20][idx / cols]; result = row[idx % cols] (row==0 -> return 0)
- ƒ container offsets: +0x20 row-array, +0x24 element count, +0x28 columns/stride, +0x30 base/first-id (same layout confirmed in schema item.md GetLevelByExp)

### CLevelRegularRewardInfo::GetInfoManager `@1097c720`
*Lazy singleton accessor for the CLevelRegularRewardInfo InfoManager (regular/repeatable level reward table); FindByName fallback with default DAT_123c03f8. No indexing (returns the manager base).* (server: authoritative: config-table manager accessor., conf high)

### CLevelReward::BuildRewardEntry `@11416be0`
*Initializes a level-reward descriptor object (this=param_1) from a reward-config record (param_3), dispatching on the reward mode at this[0x56] (=param_3[0], values 0-0x12). Reads CLevelRewardInfo entry offsets 0x40/0x44 (local defaults). Sets item/count/probability fields on the descriptor. Handles direct rewards (case 0), grouped rewards (cases 1-9,0xc,0xd,0x10-0x12 via param_3[0xb]), level-encounter group/subgroup rewards (cases 10/0xb/0xe), and a fixed count-1 reward (case 0xf). Returns 1 on success, 0 on failure/unknown mode.* (server: authoritative - defines what a level reward grants (item ids, counts, probabilities). Server must build/grant from this config, not from client claims., conf medium)
- ƒ mode = this[0x56] = param_3[0] (offset 0x158)
- ƒ CLevelRewardInfo lookup by mode gives local_c=entry[0x40], local_8=entry[0x44] (default group/pool ids)
- ƒ this[0x57]=param_3[6] (or FUN_1140dd10() default if -1); this[0x58]=param_3[7] (or FUN_1140dce0() default if <1); this[0x59]=param_3[8] (or *(param_2[0x1e]+0x38))
- ƒ reward output fields: this[0x64]/this[0x65]=item/minCount, this[0x66]/this[0x67]=?/maxCount, this[0x5b]=count, this[0x5c]=rate/probability, this[0x62]=item-list ptr, this[0x5d]=extra
- ƒ case 0 (direct): this[0x6c..0x70]=param_3[0x20..0x24]; this[0x5c]=param_3[0x26]; this[0x62]=param_3[0x28]; this[0x64]=param_3[0x29]; this[0x65]=param_3[0x2a]; this[0x66]=param_3[0x2b]; this[0x67]=param_3[0x2c]
- ƒ case 0xf (fixed): this[0x64]=this[0x65]=1, this[0x66]=this[0x67]=0; if (float)param_3[0x26]>0 this[0x5c]=param_3[0x26]; if param_3[0x25]>0 this[0x5b]=param_3[0x25]
- ƒ override tail: if param_3[0x25]!=0 this[0x5b]=param_3[0x25]; if (float)param_3[0x26]>0 this[0x5c]=param_3[0x26]; if param_3[0x2a]>0 {this[0x64]=param_3[0x29]; this[0x65]=param_3[0x2a]}; if param_3[0x2c]>0 {this[0x66]=param_3[0x2b]; this[0x67]=param_3[0x2c]}
- $ reward item ids, min/max counts, and drop rate/probability (this[0x5c], a float) are populated from CLevelRewardInfo config and param_3 record; exact currency amounts live in the config records

### CLevelRewardInfo::GetByIndex `@0x11827070`
*Flat-vector accessor: returns the CLevelRewardInfo record at index param_1 (per-level reward table).* (server: validation (config read; server uses per-level reward table), conf high)
- ƒ valid if 0 <= param_1 < ((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CLevelRewardInfo::GetRewardByLevelIndex `@10976e80`
*2D-grid config accessor for CLevelRewardInfo (per-level reward table). Lazy singleton (fallback DAT_123c03bc).* (server: authoritative: read-only accessor over server-loaded per-level reward config., conf high)
- ƒ same CInfoManager grid formula as 1095c0d0: idx=param-base[+0x30]; row=grid[+0x20][idx/cols[+0x28]]; result=row[idx%cols]

### CPlayerLvAppraisalRewardInfo::FindReward `@0x119869a0`
*Three-level lookup in CPlayerLvAppraisalRewardInfo (player-level appraisal reward). Paged-map by param_1 (level), then walks a linked list at record+0x14 matching node[2]==param_2 (a sub-key/type), then walks that node's sub-list (node[3]..) returning the first entry whose entry[2] >= param_3 (threshold); returns entry+3.* (server: authoritative (server selects appraisal reward by player level + type + threshold), conf medium)
- ƒ record = paged-map(param_1): idx=param_1-minId(+0x30), page=*(*(+0x20)+(idx/pageSize)*4), record=*(page+(idx%pageSize)*4), pageSize=*(+0x28)
- ƒ list1 at record+0x14: match node where node[2]==param_2 (intrusive list, next=*node)
- ƒ list2 at node[3]: return (entry+3) for first entry with entry[2] >= param_3
- ƒ returns null if no match

### CPlayerLvAppraisalRewardInfo::GetByLevel `@0x11986bb0`
*Paged id-map accessor returning the CPlayerLvAppraisalRewardInfo record for a player level key param_1.* (server: validation (config read), conf high)
- ƒ idx=param_1-minId(+0x30), page=*(*(+0x20)+(idx/pageSize)*4), return *(page+(idx%pageSize)*4); pageSize=*(+0x28), cap=*(+0x24)

### CPlayerLvRewardMiniGroupInfo::GetById `@0x11a5b1e0`
*Paged id-map accessor into CPlayerLvRewardMiniGroupInfo (player-level reward mini-group table).* (server: validation (config read; per-level reward grouping), conf high)
- ƒ idx=param_1-minId(+0x30), page=*(*(+0x20)+(idx/pageSize)*4), return *(page+(idx%pageSize)*4); pageSize=*(+0x28), cap=*(+0x24)

### CRankRewardCfg::LoadFromXml `@0x11a3c0f0`
*XML reader for a rank-reward config: RankId plus a list of RewardIds pushed into a vector on the struct.* (server: authoritative (server grants rank rewards from this config), conf high)
- ƒ RankId=+0x10; RewardId appended to vector at struct+0x1c(end ptr)/+0x20(cap) (push_back of 4-byte id)
- $ RewardId list = reward package(s) granted at this rank

### CRankUIModel::BuildRankDataList `@1090cd20`
*Builds RANK_BASE_DATA_VO array 'arrDataList' for the leaderboard from server-pushed rank rows. Emits rank, name, guild/clan, two data columns with type/unit, reward item id/name/fetched flag, level name, and viewer's own position.* (server: client-only display builder. Reward eligibility (bRewardFetched) and reward item id are server-authoritative; client only renders., conf medium)
- ƒ row stride = 0xa0 bytes; entry count = ((int)piStack_164 - iStack_168) / 0xa0
- ƒ record header stride from ppiStack_120 blocks = >>5 (0x20)
- ƒ column meta from FUN_1090b6c0(rankType): nColumn1Type=+0x14, nColumn2Type=+0x18, nColumn1Unit=+0x1c, nColumn2Unit=+0x20
- ƒ reward emitted only if row index (unaff_EDI) < uStack_180 (reward-count cap); else nRewardItemID=0
- ƒ nMyPostion = *(int*)(rankState+0x24)  (server-provided own rank)

### CRankUIModel::RegisterHandlers `@1090bea0`
*GUI model init for the leaderboard/ranking + rapid-hunt reward panel. Binds rank data and reward-fetch callbacks.* (server: client-only. Command surface: GetRankTitleList->1090bfa0, ReqRankDataList->1090c460, UpdateRankDataList->1090cd20, FetchReward->1090d680 (server must authorize reward grant), UpdateRapidHuntDataList->1090c690, UpdateRapidHuntAwardData->1090d730, FetchHuntRapidHuntReward->1090db70 (claim)., conf high)

### CSpoorTaskUIModel::BuildRewardList `@10948b40`
*Builds the spoor/achievement reward-claim list (FUN_10923e00 count, FUN_10923d70 by index). Emits ItemID, fetched/claimable flags, contribution value, reward index, prize id, and the player's current spoor points.* (server: client-only display; isFetch/canFetch and currentSpoorValue are server-authoritative (FUN_11504c20 claimable, FUN_11504d90 fetched-state, FUN_11504d20 current points)., conf medium)
- ƒ ItemID = rewardEntry[5]
- ƒ contributeValue = rewardEntry[8]  (spoor points threshold for this reward)
- ƒ canFetch = FUN_11504c20(prizeId); isFetch from FUN_11504d90
- ƒ prizeID = (rewardEntry vtbl+0x18)()
- ƒ currentSpoorValue = FUN_11504d20()
- $ contributeValue = accumulated contribution/spoor points required to unlock each reward tier

### CSuperSeriesReward::ComputeTier2Progress `@114d2ba0`
*Tier-2 twin of 114d23b0: identical structure but reads the second reward column set (entry+0x20/0x24/0x28), uses this[4]/this[6] for current count, and computes remaining against counter FUN_1156c660(2) instead of (3).* (server: authoritative - tier-2 claimable = min(counter2 - claimed, cap - claimed); server-enforced., conf medium)
- ƒ out param_3[4]=entry[0x28], param_3[0]=entry[0x20], param_3[1]=entry[0x24], param_3[3]=0
- ƒ param_3[2] = (param_2==0) ? this[4] : this[6]
- ƒ counter = FUN_1156c660(2); remaining = clamp(counter - count, 0); param_3[3]=min(remaining, entry[0x28]-count)
- ƒ same CLevelSuperSequence + CMHLevelModeInfo[0x36] + vtable[0x388] + FUN_1156c6b0(seqEntry[0x2c]) gates
- $ second reward tier: entry+0x20=id, entry+0x24=?, entry+0x28=cap; progress counter FUN_1156c660(2)

### CSuperSeriesReward::ComputeTier3Progress `@114d23b0`
*Computes a super-series reward's progress/claimable amount (tier using counter arg 3). Looks up CSuperSeriesReward[param_2], fills out-struct param_3 with reward params (id/count/max), reads current count from this[3] (if param_2==0) or this[5]. Gates on CLevelSuperSequence[current-sequence] and CMHLevelModeInfo[0x36] (mode 54) validity, a vtable+0x388 condition, and FUN_1156c6b0(entry+0x2c). Computes remaining claimable = clamp(FUN_1156c660(3) - count, 0) then min with (max - count). Returns bool (1 with progress, 0 otherwise).* (server: authoritative - claimable amount = min(counter3 - claimedCount, cap - claimedCount). Server must compute this and cap claims; do not trust client-reported progress., conf medium)
- ƒ CSuperSeriesReward lookup by param_2 (paged pattern)
- ƒ out param_3[4]=entry[0x1c] (max/cap), param_3[0]=entry[0x14] (reward id), param_3[1]=entry[0x18], param_3[3]=0
- ƒ param_3[2] = (param_2==0) ? this[3] : this[5]   // current accumulated count
- ƒ seqId = this vtable[0x30](0); CLevelSuperSequence lookup by seqId; CMHLevelModeInfo fixed index 0x36 (=54) must be valid
- ƒ gate: this[1] vtable[0x388]() != 0 AND FUN_1156c6b0(seqEntry[0x2c]) != 0
- ƒ counter = FUN_1156c660(3); remaining = counter - count; if remaining<0 remaining=0; param_3[3]=remaining; if (param_3[4]-count) < remaining param_3[3]=param_3[4]-count
- ƒ returns 1 (byte) when computed, 0 otherwise
- $ entry+0x14=reward id, entry+0x18=?, entry+0x1c=max claimable cap; progress counter from FUN_1156c660(3)

### CSuperSeriesReward::FindInfoById `@114d2d40`
*Returns the CSuperSeriesReward config entry for a given id. Standard paged CInfoManager lookup.* (server: validation., conf high)
- ƒ idx=id-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]

### CSuperSeriesReward::GetManagers `@114d1460`
*Singleton accessor / registration for the CSuperSeriesReward config table (super-series / streak reward table). Stock CInfoManager plumbing.* (server: client-only plumbing., conf high)

### CSuperSeriesReward::GetSingletonManager `@114d2780`
*Minimal singleton getter returning *DAT_122de584 (CSuperSeriesReward manager) after one-time init. Stock plumbing.* (server: client-only plumbing., conf high)

### EventDef::RankReward::GetSingleton `@0x1195c4b0`
*Lazily constructs the named descriptor for L"RankReward" with id 0x113 (275).* (server: authoritative (rank-reward operation/event constant id 275), conf high)
- ƒ id = 0x113 (275); name = L"RankReward"

### FireworksActivityController::RegisterScriptHandlers `@10992310`
*Registers fireworks + exchange activity handlers (param_5==1): GetFireworksData, ReqFireworks, GetExchangeData, ReqExchangeReward, C2AS_IsActivityOpen.* (server: client-only: handler registration. ReqFireworks/ReqExchangeReward consume/grant items and must be server-validated (exchange rate, stock, cost)., conf high)

### InstanceSelectController::RequireInstanceRewardShow `@1097a150`
*Scans all hubs (outer) and up to 32 chapters (inner) to find the first unclaimed hub-completion reward and reports it to UI (hubId, chapterInfo, numReward, rewardId, stateReward). If none pending, reports terminal state 2.* (server: validation: client computes which reward to show/request; server must authoritatively decide claim eligibility (state) and grant. Client display of stateReward is advisory., conf medium)
- ƒ outer loop bound = FUN_10976b80() (hub count); hub obj = FUN_10976af0(hubIdx); inner loop 0..0x20 (32) chapters; chapter = FUN_116b8a70(i)
- ƒ rewardId = hubObj->vtbl[+0x18](chapter+4, &iStack_54); reward state iStack_50 = FUN_1130c880(playerLevelObj local_2c, rewardId)
- ƒ emit when rewardId>0 (iStack_54>0) && state!=1: stateReward = (rewardId==-1)?0:1; else if all hubs exhausted (hubCount<=hubIdx): report chapterInfo=-1, rewardId=-1, stateReward=2
- ƒ iStack_50 init -5 sentinel; state==1 means already claimed

### LotteryActivityController::RegisterScriptHandlers `@109899f0`
*Registers a gacha/lottery activity controller's script handlers: InitModel, FetchActivityData, FetchStaticData, FetchPlayerData, DeliverItem, DrawReward, DrawFinalReward, IsPrizeDrawn (via FUN_100b62c0 config bind + FUN_1098ad10 register).* (server: client-only: handler registration. DrawReward/DrawFinalReward/DeliverItem are lottery draw requests the server must authoritatively resolve (RNG, item grant, cost)., conf high)

### NetMsgSchema::InitOrdinaryDropReward `@0x10e357c0`
*Lazily initializes the reflection/TDR field schema for an 'ordinary drop reward' network message: enable, playerNetId, addExp, addBindGold, addUnBindGold, OrdinaryDropItem, OrdinaryDropItemCount, plus a Result sub-struct.* (server: authoritative (this is the wire schema for a reward the SERVER computes and pushes: EXP + bound/unbound gold + drop item/count). Bind vs unbind gold distinction is significant., conf high)
- ƒ One-time init guarded by DAT_120341a8 bits 1 and 2.
- ƒ Field descriptors built at globals DAT_120340e8.. via PTR_FUN_11df7674/11df7734 constructors; param_1 populated with {&fields, &Result, &empty, flags\|0x10}.
- $ Message conveys server-computed reward amounts: addExp, addBindGold, addUnBindGold, OrdinaryDropItem(+Count).

### NetMsgSchema::InitOrdinaryItemGroupRewardMsg `@0x10ea2fc0`
*Lazily initializes the reflection field schema for a reward message carrying: enable, playerNetId, addExp, addBindGold, addUnBindGold, OrdinaryItemGroupID, plus Result.* (server: authoritative (sibling of FUN_10e357c0 but references an item GROUP id rather than a single item; server rolls the group into concrete items), conf high)
- ƒ Init guarded by DAT_1203aaf0 bits 1/2; descriptors at DAT_1203aa48..
- $ Server-computed grant: addExp, addBindGold, addUnBindGold, and OrdinaryItemGroupID (item-group id resolved to concrete drops server-side).

### NetMsgSchema::InitRewardStateMsg `@0x10e35bc0`
*Lazily initializes the reflection field schema for a reward-state network message: enable, rewardSstate (sic), plus a Result sub-struct.* (server: authoritative (server-pushed reward-claim state message schema), conf high)
- ƒ Init guarded by DAT_120340c0 bits 1/2; descriptors at DAT_12034078..

### NetMsgSchema::InitWaveRewardConfigMsg `@0x10ea2960`
*Lazily initializes the reflection field schema for a wave/layer reward-config message: layer, modelGroupID, delayStartTime, rewardTime, rewardExp, rewardBindGold, rewardUnbindGold, rewardItemGroupID, addPlayerBuffID, addBossBuffID, isHaveReward, resouceID, monsterID, monsterNum.* (server: authoritative (defines server-driven per-wave reward config: EXP + bound/unbound gold + item group; server grants on wave clear), conf high)
- ƒ Init guarded by DAT_1203a778 bits 1/2; 'layer' is field group 1, the rest group 2, at globals DAT_1203a748..
- $ Per-wave reward payload: rewardExp, rewardBindGold, rewardUnbindGold, rewardItemGroupID (item-group id for loot table).

### TdrText_ChapterRewardState_Dump `@1041d9f0`
*TDR text dumper for chapter reward tracking {iChapterId, iGetRewardCount, chIsNotNew}.* (server: authoritative: claimed-count owned by server to prevent over-claim; client/debug dump, conf high)
- ƒ [iChapterId]=p[0], [iGetRewardCount]=p[1], [chIsNotNew]=*(char)(p+2) @0x8 ('0x%02x')
- $ iGetRewardCount = number of rewards already claimed for the chapter (server-enforced cap tracking)

### TdrText_DailyHunterActivity_Dump `@10418650`
*TDR text dumper for a daily activity/encounter tracking struct {iDateDay, iCurHigher, iMeetTime, iGiantTime, iDailyRewardFlag, iRewardFlag}.* (server: authoritative: daily counters and reward flags reset/owned by server; client/debug dump here, conf medium)
- ƒ [iDateDay]=p[0], [iCurHigher]=p[1], [iMeetTime]=p[2], [iGiantTime]=p[3], [iDailyRewardFlag]=p[4], [iRewardFlag]=p[5]
- $ iDailyRewardFlag/iRewardFlag = reward-claimed bitflags (anti-double-claim)

### TdrText_PointRewardStep_Dump `@10406020`
*TDR text dumper for a point-threshold reward step {iIndex, iNeedPoint, iGetedState, iRewardItemID, iRewardItemCount}.* (server: authoritative/validation: server checks accumulated points >= iNeedPoint and iGetedState to grant reward. This fn is client/debug dump., conf high)
- ƒ [iIndex]=p[0], [iNeedPoint]=p[1], [iGetedState]=p[2], [iRewardItemID]=p[3], [iRewardItemCount]=p[4]
- $ iNeedPoint = point threshold required to claim
- $ iRewardItemID x iRewardItemCount = reward granted at threshold

### TdrText_RankIdRewardName_Dump `@1037f790`
*TDR text emit of {iRankId, iReward, szName}.* (server: client-only debug serializer, conf high)
- ƒ [iRankId]=param_1[0]
- ƒ [iReward]=param_1[1]
- ƒ [szName]=param_1+2
- $ iReward

### TdrText_RankIdReward_Dump `@1037f390`
*TDR text emit of {iRankId, iReward}.* (server: client-only debug serializer, conf high)
- ƒ [iRankId]=param_1[0]
- ƒ [iReward]=param_1[1]
- $ iReward

### TdrText_RankIdReward_Parse `@1037f2f0`
*TDR parse of {iRankId, iReward}. Returns -0x13 on null.* (server: client-only TDR helper; server owns reward mapping, conf high)
- ƒ [iRankId]=param_1[0]
- ƒ [iReward]=param_1[1]
- $ iReward: reward value tied to a rank id

### TdrText_RankListInfo_Dump `@1037c880`
*TDR text dump of a ranking list response: paging, reward list (max 5), and ranker array (max 150). Enforces array bounds.* (server: authoritative source of rank data & reward list; caps (5 rewards, 150 rankers) are validation limits. This fn is client/debug dump., conf high)
- ƒ [iRankId]=param_1[0], [iPos]=param_1[1], [iRankersCount]=param_1[2], [iPages]=param_1[3], [iPage]=param_1[4], [iRewardNum]=param_1[5]
- ƒ [astRewards] array count=param_1[5] (validate <0->-6, >5->-7), per-elem FUN_1037c2a0
- ƒ [iCount] = *(param_1+0xd1) (rank entry count; validate <0->-6, >0x96(150)->-7)
- ƒ [astRank] array @param_1+0xd5 count=[iCount] max 150, per-elem FUN_1037bd80

### TdrText_RankRewardEntry_Dump `@1037c2a0`
*TDR text dump of a rank reward entry {szName, iReward, bBFetched}.* (server: authoritative: reward grant & fetched-flag are server-owned; function is client/debug dump, conf high)
- ƒ [szName] = param_1+0 (string)
- ƒ [iReward] = *(param_1+0x20) (int)
- ƒ [bBFetched] = *(u8)(param_1+0x24) ('0x%02x', fetched-flag)
- $ iReward: reward amount/id for a rank slot

### TdrText_RewardTaskConfig_Dump `@103d3460`
*TDR text dumper for a reward/task config item with unlock conditions, per-item get-count cap, and a reward-item array (max 10). Reveals config struct layout.* (server: validation/authoritative: nGetCountMax and reward-item list define what/how-much server grants and caps; bBindType controls bound-on-acquire. This fn is client/debug dump., conf high)
- ƒ [dwItemID] = param_1[0] (uint32)
- ƒ [nItemCount] = *(short)(param_1+1) (@0x4, int16)
- ƒ [bBindType] = *(u8)@0x6, [bOpenType] = *(u8)@0x7
- ƒ [chColumn] = *(char)@0x8
- ƒ [dwFlags] = *(u32)@0x9
- ƒ [bCondType]=@0xd, [bCondId]=@0xe (u8 condition type/id)
- ƒ [iCondParam1]=@0xf, [iCondParam2]=@0x13 (int cond params)
- ƒ [szCondParam] string @0x17 (32 bytes -> next field @0x37)
- ƒ [nGetCountMax] = *(short)@0x37 (int16, max obtain count)
- ƒ [szDesc] string @0x39 (0x80=128 bytes -> @0xb9)
- ƒ [szCondArg1] @0xb9 (128 bytes -> @0x139), [szCondArg2] @0x139 (128 bytes -> @0x1b9)
- ƒ [bRewardItemCount] = *(u8)@0x1b9 (validate >10 -> -7)
- ƒ [astRewardItems] array count=@0x1b9 max 10, per-elem FUN_103d2b40
- $ nGetCountMax = per-player obtain cap for this reward (server-enforced limit)
- $ astRewardItems (<=10) with dwItemID/nItemCount = items granted

### TlvChapterRewardRecord::DebugFormat `@0x1018f060`
*TDR text-dump of a chapter reward-progress record: chapterId, getRewardCount, isNotNew(bool).* (server: client-only formatter; documents chapter reward-claim tracking, conf high)
- ƒ chapterId [0]; getRewardCount [1]; isNotNew(u8/char) @ [2]
- $ getRewardCount limits chapter reward claims

### TlvItemRewardResult::DebugFormat `@0x10299900`
*TDR text-dump of an item-reward RPC result (SoA): retCode + rewardTypeCnt, then parallel arrays itemType[], itemCnt[], bindType[], rewardIdx[].* (server: client-only formatter; documents server item-grant result payload, conf high)
- ƒ iRetCode [0]; iRewardTypeCnt(i32) [1], cap 0x28=40 (<0 -> -6, >40 -> -7)
- ƒ itemType[] @ [2]; itemCnt[] @ [0x2a]; bindType[] @ [0x52]; rewardIdx[] @ [0x7a] (each length rewardTypeCnt, u32 elems via FUN_1010c010)
- $ Granted items: (itemType, itemCnt, bindType, rewardIdx) tuples — up to 40 distinct item stacks per reward; bindType marks bound vs tradable

### TlvLevelRecordAoS::DebugFormat `@0x102bafa0`
*TDR text-dump of a single per-level record (AoS element): iLevelID, iTheBestScore, bState(u8), dwHistoryFinalRank, dwGainRewardFlag, dwLastTm.* (server: client-only formatter, conf high)
- ƒ iLevelID @ [0]; iTheBestScore @ [1]; bState(u8) @ [2]; dwHistoryFinalRank(u32) @ byte+9; dwGainRewardFlag(u32) @ byte+0xd; dwLastTm(u32) @ byte+0x11 (packed struct size ~0x15)
- $ dwGainRewardFlag gates per-level reward claim

### TlvLevelRecordSoA::DebugFormat `@0x1014d8b0`
*TDR text-dump of a struct-of-arrays holding per-level challenge/arena records. Prints parallel arrays keyed by levelCnt: levelID, theBestScore, state, historyFinalRank, gainRewardFlag, lastTm.* (server: client-only text formatter; documents challenge-record array layout, conf medium)
- ƒ levelCnt(u16) @ param_1[0] (word), array cap 5000 (>5000 -> -7)
- ƒ levelID[] u32 @ base+2 (param_1 + i*2 + 1 word-index); theBestScore[] u16 @ word 0x2711; state[] u8 @ byte 0x7532; historyFinalRank[] u8 @ byte 0x88ba; gainRewardFlag[] u8 @ byte 0x9c42; lastTm[] u32 @ word 0x57e5

### TlvLotteryResult::DebugFormat `@0x1029a5d0`
*TDR text-dump of a lottery/reset reward result (SoA): retCode, resetCnt, rewardCnt, then arrays itemType[], itemCount[], bindType[].* (server: client-only formatter; documents server lottery result payload, conf high)
- ƒ iRetCode [0]; iResetCnt [1]; iRewardCnt(i32) [2], cap 0x28=40 (<0 -> -6, >40 -> -7)
- ƒ itemType[] @ [3]; itemCount[] @ [0x2b]; bindType[] @ [0x53] (each length rewardCnt, u32 via FUN_1010c010)
- $ Lottery output: (itemType, itemCount, bindType) up to 40 stacks; iResetCnt = number of lottery resets consumed

### TlvPlayerRewardFlag::DebugFormat `@0x10298a80`
*TDR text-dump of {iPlayerID, iRewardFlag} (plain, no buffer management).* (server: client-only formatter, conf high)
- ƒ iPlayerID [0]; iRewardFlag [1]
- $ iRewardFlag = reward-claimed bitmask

### TlvPlayerRewardFlag::DebugFormatBuffered `@0x102989e0`
*Buffered TDR text-dump wrapper for {iPlayerID, iRewardFlag}. Sets up a local text buffer (returns -0x13 if dest null), prints two fields, frees temp buffer via FUN_10c3da30.* (server: client-only formatter, conf high)
- ƒ iPlayerID [0]; iRewardFlag [1]
- $ iRewardFlag = per-player reward-claimed bitmask

### TlvRewardDef::DebugFormat `@0x10296b50`
*TDR text-dump of a reward/loot-table definition: reward type, ext id, attribute-reward pairs (type[]/value[]), reward-affect list, item loot list, box item loot list, and instance item data.* (server: client-only formatter; documents the reward-table struct the server rolls/grants, conf high)
- ƒ nRewardType(i16) @ [0]; iExtId(i32) @ word+1; iAttrRewardCnt(i32) @ word+3, cap 10 (<0 -> -6, >10 -> -7)
- ƒ attrRewardType[] i16 @ word+5; attrRewardValue[] i32 @ word+0xf (stride 2 words)
- ƒ iRewardAffectCnt(i32) @ word+0x23, cap 10; astRewardAffectList[] @ word+0x25 (element via FUN_10295dd0)
- ƒ iInstanceLootCnt(i32) @ word+0x4a5, cap 5; astInstanceItemData[] @ word+0x4a7 (TypedItemData)
- $ stItemLootList + stBoxItemLootList = item reward payloads (via TdrDebugFormat_ItemList40, 40-item lists); attrReward pairs = stat rewards

### TlvRewardGrantPayload::DebugFormat `@0x10294d70`
*TDR text-dump of a reward-grant payload: additive amounts applied to a character. iAddExp, iAddBindGold, iAddUnBindGold, iAddFarmPoint, iGuildAthPoint, iAddPetExp, iPetRoyalPoint.* (server: client-only formatter; the payload it describes is a server-computed currency/EXP grant delta, conf high)
- ƒ iAddExp [0]; iAddBindGold [1]; iAddUnBindGold [2]; iAddFarmPoint [3]; iGuildAthPoint [4]; iAddPetExp [5]; iPetRoyalPoint [6]
- $ Grant deltas: EXP, bound gold, unbound gold, farm point, guild athletics point, pet EXP, pet royal point — server must compute and apply these

### TlvRewardIdx::DebugFormat `@0x102993b0`
*Minimal TDR text-dump of a single {iRewardIdx} field.* (server: client-only formatter, conf high)
- ƒ iRewardIdx [0]

### TlvRewardIdx::DebugFormatBuffered `@0x10299330`
*Buffered TDR text-dump wrapper for a single {iRewardIdx} field. Returns 0xffffffed (-19) if dest null; allocates local buffer, prints, frees via FUN_10c3da30.* (server: client-only formatter, conf high)
- ƒ iRewardIdx [0]

### TlvRewardIdx::DebugFormatToCharBuf `@0x102993e0`
*TDR text-dump of {iRewardIdx} into a caller char buffer with length clamp and NUL-termination; returns &DAT_11d9d32b (empty string) if buffer null/zero-length.* (server: client-only formatter, conf high)
- ƒ iRewardIdx [0]; NUL written at min(written_len, buflen-1)

### TlvRewardIdx::DebugFormatWithNulAt `@0x10299470`
*TDR text-dump of {iRewardIdx} using an in-struct buffer descriptor {ptr,len,cap}, then TdrBuf_PutNulAt to clamp/terminate; returns empty string if unset.* (server: client-only formatter, conf high)
- ƒ iRewardIdx [0]; nul index = min(len, cap-1)

### TlvRewardResetCounters::DebugFormat `@0x1014e300`
*TDR text-dump of a daily-reset reward-claim counter struct: last reset time plus 4 gain-reward-times counters (normal/success challenge, VIP variants).* (server: client-only formatter; struct is server-authoritative claim tracking (limits how many times a reward may be claimed per reset window), conf high)
- ƒ iLastResetTime @ [0] (time fmt); iGainChallangeRewardTimes @ [1]; iGainSuccessRewardTimes @ [2]; iGainVipChallangeRewardTimes @ [3]; iGainVipSuccessRewardTimes @ [4]
- $ reward-claim counters gate free/VIP reward grants per reset period

### TlvRewardResetCountersDw::DebugFormat `@0x102babc0`
*TDR text-dump of a daily-reset reward counter struct (dw-labelled variant): dwLastResetTime + 4 gain-reward-times counters.* (server: client-only formatter; struct is server claim-limit tracking, conf high)
- ƒ dwLastResetTime @ [0] (time); iGainChallangeRewardTimes [1]; iGainSuccessRewardTimes [2]; iGainVipChallangeRewardTimes [3]; iGainVipSuccessRewardTimes [4]
- $ reward-claim counters per reset window (normal/VIP challenge/success)

### TlvRewardResetResult::DebugFormat `@0x10276530`
*TDR text-dump of a reward-reset RPC result: retCode + 4 gain-reward-times counters + superSeqId + delayRefreshTime.* (server: client-only formatter; documents server reward-reset response payload, conf high)
- ƒ iRetCode [0]; iGainChallangeRewardTimes [1]; iGainSuccessRewardTimes [2]; iGainVipChallangeRewardTimes [3]; iGainVipSuccessRewardTimes [4]; iSuperSeqId [5]; iDelayRefreshTime [6]
- $ reward-times counters returned to client after a reset


## crafting  (28)

### CCharmFoundUIModel::RegisterHandlers `@109582f0`
*GUI model init for the charm-found (charm forging/appraisal) + item-decompose panel. Binds the charm/decompose command callbacks. Guarded by init flag (in_stack_00000014==1).* (server: client-only. Server-authoritative commands: GetCharmFoundData, ReqCharmFound (charm forge attempt - server charges cost & rolls result), CheckCharmFound, RefreshMoneyData, ReqItemDecompose (server removes items & grants decompose yield), GetItemDecomposeResultData->10959760, CheckBindStateAfterCharmFound., conf high)

### CCraftInfo::GetCraftCount_or_Rebuild `@10876bc0`
*Gets the CCraftInfo manager (same singleton pattern) and invokes its vtable method at +0x28 (returns craft-entry count / triggers list build). Used to size iteration in FUN_10894040.* (server: client-only, conf high)
- ƒ Same manager resolution as FUN_10876b30; then call mgr->vfunc(+0x28)().

### CCraftInfo::GetCraftEntryByIndex `@10876b30`
*Accessor: gets the CCraftInfo static-data manager (singleton pattern) then returns the craft-entry pointer at array index param_1 (bounds-checked against the entry vector).* (server: client-only (shared static table; server has same table), conf high)
- ƒ Manager singleton via CCraftInfo::GetInfoManagerSingleton, else CInfoManager::FindByName("CCraftInfo"), else fallback &DAT_123bf070 (guard DAT_123bf0e0 bit0, init FUN_10806120).
- ƒ Entry vector: begin=mgr[5], end=mgr[6]; count = (end-begin)>>2; if 0<=param_1<count return *(begin + param_1*4).

### CEquipEnchaseRuleInfo::GetRuleById `@0x118514b0`
*Paged id-map accessor for CEquipEnchaseRuleInfo (equipment gem-enchase/socket rules). Returns the rule record for key param_1.* (server: validation (server reads enchase rule config to validate/compute gem-socketing), conf high)
- ƒ reject if key==-1, or (key==0 && minId!=0), or pageSize==0
- ƒ idx = key - minId(mgr+0x30); valid if 0<=idx<capacity(mgr+0x24)
- ƒ page = *(*(mgr+0x20) + (idx/pageSize)*4); if page!=0 return *(page + (idx%pageSize)*4)
- ƒ pageSize = *(mgr+0x28)

### CEquipEnchaseRuleInfo::HasRuleForObject `@0x11852330`
*Takes an object (param_1), reads its enchase-rule key at param_1+0x30, looks it up in CEquipEnchaseRuleInfo; if a non-null rule exists calls FUN_11852170() (likely returns/applies the rule). Existence/dispatch helper.* (server: validation (server checks equip has a valid enchase rule before applying), conf medium)
- ƒ key = *(param_1+0x30); same paged-map lookup as CEquipEnchaseRuleInfo::GetRuleById

### CEquipRule::ValidateAllRuleRefs `@0x11854570`
*Validates that all rule-config references on an equipment-generation descriptor exist. Reads five keys off param_1 and confirms each referenced rule table has the entry (or the key is <=0 meaning unused): +0x24 CEquipRandBaseItemRuleInfo, +0x28 CWeaponWakeUpRandRuleInfo, +0x2c CEquipEnforceRuleInfo, +0x34 (via FUN_11851550), +0x30 (via FUN_118514b0 enchase). Returns early if a required (>0) key resolves to null.* (server: validation (integrity check of an equip template's rule references; server should reject items referencing missing rules), conf medium)
- ƒ for each rule table: paged-map lookup idx=key-minId(+0x30), page=*(*(+0x20)+(idx/pageSize)*4), val=*(page+(idx%pageSize)*4); pageSize=*(+0x28), cap=*(+0x24)
- ƒ field map: param_1+0x24=RandBaseItemRuleId, +0x28=WeaponWakeUpRandRuleId, +0x2c=EnforceRuleId, +0x30=EnchaseRuleId, +0x34=key checked via FUN_11851550
- ƒ if (key>0 && lookup==0) abort (invalid config reference)

### CInventoryUI::BuildEnchantRequirementInfo `@108a69d0`
*Publishes the requirement gate for enchanting an item: min/max level, belonging, type, subtype, min quality, min rank, and the requirement description string. Read directly from the enchant item-def row.* (server: validation, conf high)
- ƒ Runs only when param arg == 2 and player/world context valid and *(ctx+0x260e0)!=0
- ƒ Item-def resolved via FUN_10254130(itemId) with *(def+0x34)==1, then enchant list FUN_10540d00(itemId) scanned (+0x164..+0x168 stride 0x114, entry type *(entry+4)==0xbbc), enchantData = FUN_1050ed80(*(entry+0xf8))
- ƒ m_nEnchantNeedLevMin = *(enchantData+0x14); LevMax = +0x18; Belong = +0x1c; Type = +0x20; SubType = +0x24; QualityMin = +0x28; RankMin = +0x2c
- ƒ m_strEnchantItemDesc = string at (FUN_100e5b40(...)+0x14)
- $ Enchant requirement gate (level/quality/rank thresholds) — these are the eligibility constraints the SERVER must enforce before allowing an enchant.

### CInventoryUI::BuildEnchantTimeInfo `@108a63f0`
*Resolves an item (by handle, or transmogrify id, or current context) and publishes its remaining enchant time and enchant description string.* (server: client-only, conf medium)
- ƒ Only runs when param_5==8 (VO array element type) and player world-context resolves and *(ctx+0x260e0)!=0
- ƒ If enchant-def *(enchantData+0x30)==0: m_nEnchantTime = -1 (0xffffffff = permanent/none)
- ƒ Else m_nEnchantTime = FUN_10a136c0() - item.vtbl[+0x40]()  (server-clock now minus enchant expiry timestamp)
- ƒ m_strEnchantDesc = string at (FUN_100e5b40(...)+0x14)
- ƒ Item-type branch: iVar3==6 uses FUN_112f5b90(itemId, DAT_123bb978+0x34) then FUN_113f9bb0(6, ...)

### CInventoryUI::PrepareEnchantConfirmMsgBox `@108a55e0`
*Stores two selected item handles (src/target for pet-equip enchant) into instance fields and pops the 'MsgBoxEnchantOk' confirmation dialog with the correct prompt text depending on whether the target already has an enchant.* (server: client-only, conf medium)
- ƒ Saves item refs: *(this+0x2c)=itemA.lo, +0x30=itemA.hi, +0x34=itemB.lo, +0x38=itemB.hi (0 first)
- ƒ Scans an item-data list (FUN_11671b50 -> +0x164..+0x168, stride 0x114) for entry with type *(entry+4)==0xbbc, then uVar6 = *(entry+0xf8)
- ƒ Msgbox text id: default 0x1fde; if target enchant slot vtbl[+0x3c]()!=0 then 0x1fdf
- ƒ FUN_1112d7d0(textId, "MsgBoxEnchantOk", ..., FUN_1050ea70(enchantData+0x38, 0x2a))

### CItemDecomposeInfo::GetByIndex `@0x1197dfd0`
*Flat-vector accessor into CItemDecomposeInfo (item decompose/salvage yield table).* (server: authoritative (server computes salvage yields from this config; must validate item->material output), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CWeaponAwakenUIModel::BuildAwakenData `@109544b0`
*Builds the weapon 'wake'/awaken (enchant-upgrade) panel data for the currently selected weapon: current/max level & layer, next-level money cost & success probability, wake-times usage, VIP gate, and current/next attribute names/descriptions.* (server: client-only display of server-config awaken costs/probabilities. Server MUST authoritatively charge nNextMoney / nWakeCostMoney, roll nNextProbability, enforce nMaxWakeTimes and nVipNeedLevel on the actual awaken command., conf medium)
- ƒ requires param_5 >= 3 (arg-count guard)
- ƒ weapon record via FUN_113f9bb0; weaponLevel = record[0x6b], nPreNextMoney = piStack_6c = weapon current-tier field(+0x18)
- ƒ nCurLevel = CVipCutOffInfo::GetVipCutOffIndex(...) result (ppiStack_90); nCurLayer = uStack_9c
- ƒ nMaxLevel = *(cfg+0x18); nMaxLayer = *(cfg+0x1c)  (cfg = tier config iStack_98)
- ƒ nNextMoney = FUN_1159a210(...)  (next awaken attempt cost)
- ƒ nNextProbability = FUN_117442d0(...)  (next awaken success chance)
- ƒ nCurWakeTimes = weapon[0x6e]; nMaxWakeTimes = *(cfg+0x78)
- ƒ nWakeCostMoney = record(FUN_117441f0(FUN_1166dfb0(weaponLevel-1)))+0x7c, else 0
- ƒ nVipNeedLevel = pcStack_94 (from FUN_11744280 / FUN_1159a4a0)
- ƒ bIsVip = (player charm/level FUN_1025b060() >= nVipNeedLevel) when weapon+11000 set and FUN_11549b10(10) true
- ƒ nWakeAttr: if current awaken attr (FUN_116c4f30 at level iStack_98)==0 -> 0xffffffff, else attr = attrDef+0xb4; strNextName/strNextDesc from next tier (FUN_116c4f30 at +1)
- $ nNextMoney: gold cost of next awaken attempt
- $ nWakeCostMoney: gold cost per wake-times consumption tier (record+0x7c)
- $ nNextProbability: success probability of next awaken
- $ nMaxWakeTimes / nCurWakeTimes: per-weapon attempt limit
- $ nVipNeedLevel: VIP level gate for the operation

### CWeaponAwakenUIModel::BuildWakePointData `@10954b00`
*Builds the wake-point / awaken-progress sub-panel: max & current wake points, current/max wake times, per-attempt money cost, and a two-value 'collumn' pair.* (server: client-only display; server owns wake-point balance, wake-times, and cost., conf medium)
- ƒ nMaxWakePoint = *(cfg(FUN_10953ad0)+0x14)
- ƒ nCurWakePoint = FUN_1025b060()  (player accumulated wake points)
- ƒ nCurWakeTimes = *(playerState+0x1b8); nMaxWakeTimes = *(weaponCfg+0x78)
- ƒ nWakeCostMoney = record(FUN_117441f0(weaponId, *(state+0x1ac)-1))+0x7c, else 0
- ƒ collumn + &DAT_11dbfe78 pair filled from FUN_11669710() decomposed 64-bit result
- $ nWakeCostMoney: gold per wake attempt indexed by current wake-times-1; nMaxWakePoint: point cap

### EquipQuickLevelUpModel::GetUpgradeData `@109cfa70`
*Computes the equip quick-level-up preview data (EquipQuickLevelUp_UpgradeData): resolves source & destination items, applies the upgrade step-list (CEquipUpgrade::ApplyStepList) to determine the upgrade path, and emits ItemId, ItemLevel and instanceChannelNumber per resulting step.* (server: validation. Client-side preview of the upgrade path/steps; the authoritative upgrade + material/cost consumption happens server-side in C2AS_UpgradeItem. Server must recompute the step list., conf low)
- ƒ Runs only when param_6 == 1.
- ƒ Reads AS args: m_nFactItemLevel, collumn, item id (DAT_11dbb0b4 field).
- ƒ Resolve src item: FUN_113f99c0(*(this+0x20), &uStack_1b8) -> piVar6; itemLevel via FUN_11669710/vtbl+0xc. Resolve dest via FUN_113f9bb0.
- ƒ Feature gate: found equip iVar5=*(player+0x260e8) with player+0x2d1c!=0.
- ƒ Upgrade path: FUN_115c4920/FUN_109d0040/FUN_109d17f0 build step candidates; per step CEquipUpgrade::ApplyStepList(&stepCtx, out, ...) — on success emit an EquipQuickLevelUp_UpgradeData row {ItemId=iVar5, ItemLevel=ppuStack_224, instanceChannelNumber=FUN_11669710()}; on failure invoke vtbl[0xe] rollback.
- ƒ Dedup: skips a step whose (itemDataId@+4, itemDataId@+8) pair already appears in the accumulated result list.

### EquipQuickLevelUpModel::RegisterScriptHandlers `@109cf8a0`
*Registers the equip quick-level-up (batch equipment upgrade) handlers: C2AS_GetCostItemId->FUN_109cfa30, C2AS_GetUpgradeData->FUN_109cfa70, C2AS_UpgradeItem->FUN_109d0130.* (server: client-only (handler registration plumbing)., conf high)

### EquipRecastModel::BuildDestEquipArray `@109b5990`
*Builds destEquipArray entries for equip recast: per candidate target equip, emits equipID/name/rare/itemLevel, player-use level range, recast money cost, current money, craft-credit id/owned/max, craft money, enforce/break levels, canBreak flag, and material data array.* (server: validation. Exposes recastMoney/nCraftMoney/craft-credit costs and canBreak requirement the server must re-check on the actual recast., conf medium)
- ƒ Gate: player+0x2d1c != 0 (recast unlocked). recastCfg iVar5 = FUN_1183d500(0).
- ƒ recastMoney = *(recastCfg+4).
- ƒ currentMoney = GetMoneyA()+GetMoneyB() [two FUN_1025b060 summed].
- ƒ playerUseLevelMin = *(itemInst+0x40); playerUseLevelMax = 500 (constant cap).
- ƒ enforceLevel = FUN_1166c160(); breakLevel = FUN_1166c400().
- ƒ canBreak = (*(itemInst+0x144) > 0) && (*(itemInst+0x144) <= FUN_1166c160()) [break requires enforce level >= threshold @ item+0x144].
- ƒ nCraftCreditID=*(recastCfg+8); nOwnCraftCredit=FUN_113fa380(creditID); nCraftCreditMax=*(recastCfg+0xc); nCraftMoney=*(recastCfg+0x10).
- ƒ equipCounts=0, enforceRequirement=0, hunterstarRequirement=0, rankDownLevel=0, enforceDownLevel=0, newRankLevel=0, bBindState=1, enforceRuleID=0, equipHasEnoughMaterial=0 (placeholders).
- ƒ arrayMaterialData filled via FUN_109b5db0 when the nested AS array read succeeds.
- $ recastMoney = *(recastCfg+4) money cost
- $ nCraftMoney = *(recastCfg+0x10) craft money cost
- $ nCraftCreditID/nCraftCreditMax = craft-credit currency id and cap; nOwnCraftCredit = owned amount
- $ playerUseLevelMax capped at constant 500

### EquipRecastModel::BuildSourceInfo `@109b5360`
*Builds the 'source equipment' info block for the equip recast/reforge (重铸) UI: isWeapon, roleLevel, srcEquipEnforceLv, awakeningLevel, roleHunterStarLv, sourceRare, itemLevel, ItemRank, sourceItemName, then delegates to BuildDestArray (109b5990) and 109b6810 to fill dest equipment options.* (server: client-only (display). Server owns the recast mutation., conf medium)
- ƒ Gate piVar7[0xb47] != 0 (recast feature enabled).
- ƒ Resolve source item: FUN_113f9bb0(guidLo,guidHi) -> item; itemInst = FUN_1052bdd0(*(itemMeta+0x10)).
- ƒ isWeapon = FUN_116c5290(); roleLevel = CPlayer::GetHuntRankOrCount(); srcEquipEnforceLv = FUN_1166c160() (enforce/enhance level); awakeningLevel = item[0x6b].
- ƒ roleHunterStarLv = player->GetLevelInfo(vtbl+0x46c)->GetStar(vtbl+0x18); sourceRare = *(itemInst+0x4c); itemLevel = item->GetLevel(vtbl+0x18); ItemRank = FUN_11669840().
- ƒ destArrayLength read from AS, then FUN_109b5990 (dest equip array) and FUN_109b6810 populate options.

### MHUI::BuildForgeCraftListData `@10894040`
*Builds the forge/craft item list (gated mode param==2). Iterates all CCraftInfo entries, applies visibility filters (type, job/class-restriction arrays, map/distance-restriction arrays), and for each craftable entry pushes recipe metadata + costs + material requirements to a cached AS3 list (FORGE_ITEM_DATA_CLASS / forgeitemdataCacheList), supporting a strSearchKeyword filter.* (server: validation-mirror (server owns the CCraftInfo table and validates cost/material consumption on the actual forge; client renders the same static data for the shop UI)., conf high)
- ƒ Iteration count = FUN_10876bc0(); per-index entry = FUN_10876b30(i). Visibility: FUN_108496a0()!=0 AND entry[0x11] (offset 0x44) != 2.
- ƒ Job/class filter: entry[0x42]/[0x43] (0x108/0x10c) begin/end pointer pair; passes if empty or contains player's class token (compared vs puVar8 = player class).
- ƒ Map/distance filter: entry[0x45]/[0x46] (0x114/0x118) begin/end pair; each id resolved via FUN_107d7930 then checked against current-map object vfunc(+0x2c); count=(end-begin)>>2.
- ƒ Craft-entry field offsets (int index): [0x10]=canCraft base flag; vfunc(+0x18)=craftID; [0x12]=craftType; [0x13]=craftSubType; [0x17]=itemID (DAT_11dbb0b4 key); [0x15]=nLevelLimit; [0x20]=nMoney; [0x16]=nStarLimit; [0x14]=nDistanceType.
- ƒ [0x21]=nCraftCreditID; nOwnCraftCredit = FUN_113fa380(nCraftCreditID); [0x22]=nCraftCreditMax; [0x23]=nCraftMoney.
- ƒ Material list: entry[0x48]/[0x49] (0x120/0x124) begin/end pair, each record 2 ints: [0]=materialID (DAT_11dbb0b4 key), [1]=nNeedItemNum. Materials emitted into materialIDArr.
- ƒ Item presentation: def = FUN_10254130(itemID); strItemIconName = def+0xb4; strItemDescrbie/strItemName from FUN_116bd4d0; empty (&DAT_11d9d32b) when def==0.
- ƒ Final list committed via CCraftInfo::BuildCraftLists.
- $ nMoney = primary money cost to craft the recipe.
- $ nCraftMoney = secondary money cost; nCraftCreditID/nCraftCreditMax = craft-credit currency spent (capped at nCraftCreditMax); nOwnCraftCredit = player-owned craft credit.
- $ nLevelLimit = min player level; nStarLimit = min hunter-star; nDistanceType = required proximity/facility to craft.
- $ Material requirements: list of {materialID, nNeedItemNum}.

### MHUI::RegisterForgeCallbacks `@10893f30`
*Registers the forge UI AS3 handlers: InitModel, setPointMaterialData, requestForge.* (server: client-only (requestForge issues the server RPC; server validates cost and grants item), conf medium)
- ƒ Registers InitModel, setPointMaterialData, requestForge handlers via the AS3 register-native-function path.

### QuenchModel::BuildQuenchBillMo `@1099a1f0`
*Builds the client-side data::QuenchBillMo displayed in the weapon quench/temper (淬炼) UI: previews the money + material cost of quenching an item to a given quench-level index. Parses the variant arg array (param_4) to extract item GUID (two dwords) and a quench-level index, resolves the item, then fills the mo with cost/material fields.* (server: client-only (cost preview for UI). Server is authoritative on the actual quench mutation and must re-validate money+material cost from the same cost tables; this only mirrors them., conf medium)
- ƒ Arg extraction from variant array param_4 (stride: each variant = 6 dwords; tag byte at param_4[7],[0xd],[0x13],[0x19] masked &0x8f, tag 3/4=int, 2=byte): item GUID lo = param_4[8], item GUID hi = param_4[0xe], flag byte cVar6 = *(param_4+0x14), quench-level index uVar7 = param_4[0x1a] (guarded uVar7<10).
- ƒ Item resolve: iVar3 = FindItemByGuid(uVar8=guidLo, local_4c=guidHi) [FUN_113f9bb0]; slot check FUN_115c3cc0(item, *(ushort*)(item+0x1f8) + (cVar6!=0?1:0)).
- ƒ currentMoney = GetMoneyA()+GetMoneyB() [two FUN_1025b060 calls summed] (two currency components).
- ƒ Branch cStack_51==0 (no-cost path): iCostMoney=0; iMaterialA=*(costStruct+0x80); iMaterialACount=*(item+0x214).
- ƒ Branch cStack_51!=0 (cost path, indexed by quench level uVar7): iCostMoney = *(int*)(costStruct + 0x58 + uVar7*4); iMaterialA = *(int*)(costStruct + 0x08 + uVar7*4); iMaterialACount = *(int*)(costStruct + 0x30 + uVar7*4).
- ƒ Cost struct layout (base = uStack_50): materialId[] @ +0x08 (stride 4), materialCount[] @ +0x30 (stride 4), costMoney[] @ +0x58 (stride 4); all indexed by quench-level 0..9.
- $ iCostMoney: per-quench-level money cost from table costMoney[level] @ struct+0x58
- $ iMaterialA / iMaterialACount: material id + qty from tables @ struct+0x08 / +0x30 indexed by level
- $ quench level index capped < 10

### QuenchModel::BuildQuenchEffectMo `@1099afa0`
*Builds data::QuenchEffectMo (mh.data::QuenchEffectMo) with an arrProperty list of QuenchEffectPropertyMo for the quench-effect UI: lists the property (iType/iValue/strName) bonuses granted by a quench effect. Selects an effect either by scanning the item's quench-effect table or by resolving an item GUID.* (server: client-only (displays effect properties). Values come from item struct/config; server owns the real stat grant., conf medium)
- ƒ Effect selection when flag byte==0: base = *(item+0x56c)()+0x16cc; iterate 6-dword-stride records, matching effect index iVar7 against the record's 6 candidate slots (offsets -1..+4), stop when loop counter reaches 0x18.
- ƒ Else (flag!=0): iVar4 = FindItemByGuid(local_a0, uVar6) [FUN_113f9bb0].
- ƒ arrProperty loop: piVar3 = item_effect+0xb0, 10 iterations (uStack_a4=10, stride 4). Per property with *piVar3>0: iType = *piVar3, iValue = FUN_1166d9a0(*piVar3), strName = FUN_100e5aa0 (localized name). iPoint written as 0.

### TdrText_AddCraftOrder_Dump `@10325000`
*TDR text dumper for a craft ORDER struct: a craft recipe that produces a result and consumes up to two order/material items with counts. Economy-relevant: defines the material-cost shape of an AddCraft request/config.* (server: validation/authoritative: struct is the AddCraft order wire type; server must validate the two material item/count pairs and deduct on craft. This function itself is a client/debug text serializer., conf high)
- ƒ [dwNCraftID] = param_1[0] (0x0, uint32)
- ƒ [dwNResult] = param_1[1] (0x4, uint32)
- ƒ [dwNOrderItemID1] = param_1[2] (0x8, uint32)
- ƒ [dwNOrderItemCount1] = param_1[3] (0xc, uint32)
- ƒ [dwNOrderItemID2] = param_1[4] (0x10, uint32)
- ƒ [dwNOrderItemCount2] = param_1[5] (0x14, uint32)
- $ OrderItemID1 x OrderItemCount1 and OrderItemID2 x OrderItemCount2 = material items consumed by the craft order (server must validate/deduct these)

### TdrText_CraftIdKey_DumpBufStruct `@10324500`
*TDR text dump of craft-ID key into a buf-descriptor struct {ptr@0, len@4, cap@8}; null-terminates via TdrBuf_PutNulAt at min(written,cap-1).* (server: client-only debug serializer, conf high)
- ƒ [dwNCraftID] = param_1[0]
- ƒ clamp: if(cap <= written) written = cap-1; TdrBuf_PutNulAt(cap, written)

### TdrText_CraftIdKey_DumpField `@10324440`
*Minimal TDR text emit of [dwNCraftID] scalar field for the craft-ID key struct.* (server: client-only debug serializer, conf high)
- ƒ [dwNCraftID] = param_1[0] (uint32)

### TdrText_CraftIdKey_DumpToSizedBuf `@10324470`
*TDR text dump of craft-ID key struct into a caller buffer of size param_3, null-terminating at min(len,param_3-1). Returns empty string (&DAT_11d9d32b) if buffer null/zero-size.* (server: client-only debug serializer, conf high)
- ƒ [dwNCraftID] = param_1[0]
- ƒ null-term index: uVar2 = written_len; if(param_3 <= written_len) uVar2 = param_3-1; buf[uVar2]=0

### TdrText_CraftIdKey_Parse `@103243c0`
*TDR parse/scan variant for a single-field struct holding a craft recipe ID. Sets up a local read cursor, reads [dwNCraftID], optionally frees a temp buffer (FUN_10c3da30). Returns 0xffffffed (-19) on null input.* (server: client-only text/TDR helper; craft ID key struct shared with server, conf high)
- ƒ field [dwNCraftID] = param_1[0] (offset 0x0, uint32 via fmt &DAT_11d9f574)

### TdrText_CraftResultKey_Dump `@10324790`
*TDR text emit of {dwNCraftID, dwNResult}.* (server: client-only debug serializer, conf high)
- ƒ [dwNCraftID]=param_1[0]
- ƒ [dwNResult]=param_1[1]

### TdrText_CraftResultKey_Parse `@103246f0`
*TDR parse for {dwNCraftID, dwNResult} struct (craft recipe + result code/item). Returns -0x13 (-19) on null input.* (server: client-only TDR helper; struct is craft-result wire type, conf high)
- ƒ [dwNCraftID] = param_1[0] (uint32)
- ƒ [dwNResult] = param_1[1] (offset 0x4, uint32)

### TdrText_EnforceItemEntry_Dump `@10322b60`
*TDR human-readable text dumper for an enforce/enhance material item entry struct. Walks fields and emits name=value lines via TdrText_FieldScalar/FieldValueFmt.* (server: client-only (debug/log text serializer); the struct {itemID, enforceLv, name} is a shared wire type the server also parses, conf high)
- ƒ field [iM_nItemID] = param_1[0] (offset 0x0, int via fmt &DAT_11d9e0b4 = '%d')
- ƒ field [iM_nEnforceLv] = param_1[1] (offset 0x4, int)
- ƒ field [szM_strName] = param_1+2 (offset 0x8, string via TdrText_FieldValueFmt)
- $ iM_nEnforceLv: enforcement/enhance level of the item (no arithmetic here, just a field)


## activity  (23)

### AstrolabeActivityModel::FetchActivityData `@109a9190`
*Builds astrolabe activity data for the UI: counts lit star-rows (activeStar), emits activity start/end dates, the current claimable reward entry (rewardID/rewardCount/entryID/entryState/entryClaimed/entryOpened), divination material costs (specific + random material id/count), timers (remainTime/maxTime/canResetTime), consumeCredit, and a rewardArray of RewardItemMo.* (server: client-only (display). Server owns star state, reward claims, and reset/consume-credit charges., conf medium)
- ƒ activeStar count: outer iVar7 in [0,0x38) step 5, inner iVar5 in [0,5). node = FUN_1152edc0(iVar7+iVar5); a star is lit iff node!=0 && node[1]==1. A row counts toward activeStar only if all 5 stars in it are lit. (=> up to 11 rows of 5.)
- ƒ start date: (iStack_64+0x76c) year / (iStack_68+1) month / uStack_6c day  [0x76c=1900 base year, month is 0-based+1]. end date similarly (iStack_34+0x76c)/(iStack_38+1)/uStack_3c.
- ƒ reward entry table stride 0x423, count *(byte*)(activity+0xad2); entry base activity+0xb0d region; entryOpened = *(entry+0xae5) <= playerTime; entryClaimed = claimedCount < *(short*)(entry+0xb0d).
- ƒ specificMaterialID=*(cfg+0x38), specificMaterialCount=*(cfg+0x3c), randomMaterialID=*(cfg+0x30), randomMaterialCount=*(cfg+0x34) [cfg=FUN_11806ee0()].
- ƒ remainTime=FUN_1152ec90(); maxTime=*(cfg+0x40); canResetTime = FUN_1152eca0() - FUN_1152f030() (reset-quota remaining); cosumeCredit=*(cfg+0x68).
- ƒ rewardArray entries: iItemId=*(byte)(entry-0x3a), iItemDataId=*(entry-0x37), iItemCount=*(short)(entry-0x33), bClaimed, bEnabled = *(uint)(entry-0x24) <= activeStarCount, strItemName.
- $ specificMaterialID/Count and randomMaterialID/Count = divination cost per draw
- $ cosumeCredit @ cfg+0x68 = credit cost
- $ canResetTime = remaining free resets (resetQuota - usedResets)

### AstrolabeActivityModel::FetchQuestData `@109a9a90`
*Builds astrolabe divination quest/task data: finishTaskCount, refreshTaskCount, maxTaskCount, buyCount, consumeCount, and a taskArray of AstrolabeTaskMo (iTaskId, strName, iRewardID/iRewardCount, bCanAccept, bCanSubmit, arrTargets[5] with target ids/names/op-type/cur/max counts).* (server: client-only (display). Server authoritative on task accept/submit, refresh/buy counts and consume charges., conf low)
- ƒ finishTaskCount = FUN_1152ecb0().
- ƒ refreshTaskCount = *(cfg+0x6c) - FUN_1152ef60()  [cfg=FUN_11806ee0(); = maxFreeRefresh - usedRefresh].
- ƒ maxTaskCount = FUN_1152ed00().
- ƒ consumeCount = *(cfg+0x74) + *(cfg+0x78) (two consume components summed).
- ƒ buyCount = clamp0( boughtBase - (sumRefreshTimers%1000 accumulations + remainder) ): computed from per-task refresh timers (each /1000 and %1000) over uStack_e4 tasks; result clamped to >=0. Exact accumulation is convoluted in the decompile — treat as approximate.
- ƒ bCanAccept = (mgr->CanAccept(taskId)[vtbl+0x4c] == 0); bCanSubmit = (task->state[+0x14] == 4).
- ƒ arrTargets: nTargetID1..5 = puVar13[-2..+2], strTarget1..5 = puVar13[0xb,0x11,0x17,0x1d,0x23], nOpType=puVar13[3], nCurCount=puVar13[4], nMaxCount=puVar13[5]; target record stride 0x3b dwords.
- $ refreshTaskCount = remaining free task refreshes
- $ consumeCount = consumed refresh/buy resources (cfg+0x74 + cfg+0x78)
- $ maxTaskCount = task slot cap

### AstrolabeActivityModel::RegisterScriptHandlers `@109a8bf0`
*Registers the astrolabe/divination activity model handlers (star-lighting + quest/task divination minigame) via the make-string/register-delegate boilerplate.* (server: client-only (handler registration plumbing)., conf high)

### CActivityDef::LoadFromDataNode `@0x1160b030`
*Deserializes an in-game Activity (limited-time event) definition from a config/data node. Reads scalar fields ACTIVITY_ID, ACTIVITY_NAME(+0xD), ACTIVITY_NOTE(+0x2D), ACTIVITY_TYPE, ACTIVITY_TIME(+0x4D), ACTIVITY_RULE(+0x14D), ACTIVITY_ICON(+0x94D), ACTIVITY_BUBBLE(+0xA4D), ACTIVITY_BUBBLEINTERVAL(+0xACD), ACTIVITY_SERIAL(+0xAD1), ACTIVITY_URL(+0x54D); date range START_DATE/STOP_DATE/SHOW_DATE (validates STOP>=START); array ACTIVITY_PERIOD (Type='iParam1'), ACTIVITY_PHASES; ACTIVITY_PARAMS (iParam1..6 ints at +0x11B19,+0x11B1D,+0x11B21,+0x11B25,+0x11B29,+0x11B2D; szStr1 at +0x11B31 len 0x80, szStr2 at +0x11BB1 len 0x80); and a large ACTIVITY_DATA phase array. Each ACTIVITY_DATA entry (record size 0x423, stored at base+0xAD3 + n*0x423, count byte at +0xAD2, cap DAT_122e0088=0x40) has an InitState type byte selecting a variant parser and a condition dispatch switch(bCondType) cases 1..0x12. Case 0x30 ('0') parses an item-reward sub-block: dwItemID, nItemCount, bBindType, bOpenType, chColumn, dwFlags, bCondType, nGetCountMax, szDesc, plus a nested ItemRewards array (dwItemID,nItemCount,bBindType,chColumn; up to DAT_122e0090=10 entries).* (server: client-only (config-node deserialization) — but populates the authoritative event/reward tables the server also loads; item-reward amounts here are the source data an authoritative reward grant must honor, conf medium)
- ƒ ACTIVITY_PARAMS ints stored at record 0x11B19..0x11B2D (4 bytes each, iParam1..6)
- ƒ ACTIVITY_DATA entry stride = 0x423 bytes; entries at (base+0x11393? no) base+0xAD3 + n*0x423; count byte at base+0xAD2
- ƒ hunt-task sub-records stride 200 (0xC8), stored at auStack region, cap DAT_122e008c=3
- ƒ phase/period record type tag == 0xC (data-node object type)
- ƒ date sanity: reject if STOP_DATE < START_DATE
- ƒ caps: DAT_122e0080=5 (period list), DAT_122e0088=0x40 (activity-data), DAT_122e0090=10 (item rewards), DAT_122e008c=3 (hunt tasks)
- $ item-reward sub-block carries dwItemID / nItemCount / bBindType (reward grants defined by the event config)

### CActivityLevelCoefficientCfg::LoadFromXml `@0x11a33fe0`
*XML reader for an activity/level reward-multiplier config. Parses per-activity-per-level scaling coefficients applied to EXP, gold, and drop rewards. Central economy tuning table for events/activities.* (server: authoritative (server MUST apply these coefficients when computing EXP/gold/material/drop rewards; core reward-scaling config), conf high)
- ƒ ActivityId=+0x10, LevelId=+0x14, LevelType=+0x18, ExpCoefficient=+0x1c, BoundGoldCoefficient=+0x20, GoldCoefficient=+0x24, RegularRewardCoefficient=+0x28, RandomRewardCoefficient=+0x2c, MonsterBasicMaterialCoefficient=+0x30, MonsterPartBrokenCoefficient=+0x34, CaptureMaterialCoefficient=+0x38
- ƒ coefficients read via getter vtable+0x20 (stored as 4-byte; semantically float multipliers applied to base reward)
- $ ExpCoefficient: multiplier on EXP gained in this activity/level
- $ BoundGoldCoefficient / GoldCoefficient: multipliers on bound vs unbound gold rewards
- $ RegularRewardCoefficient / RandomRewardCoefficient: multipliers on fixed vs random drop rewards
- $ MonsterBasicMaterialCoefficient / MonsterPartBrokenCoefficient / CaptureMaterialCoefficient: multipliers on crafting-material drops

### DiceBoardActivityModel::FetchActivityData `@109bc160`
*Builds dice/board-game activity data: start/end dates, a rewardArray of RewardItemMo, current board state (currentNode, currentAccStep, currentRound, currentDice), round reward + roundRewardArray, fixedTime (guaranteed-dice cost tier) and its needCredit cost.* (server: validation. Exposes the fixed-dice needCredit cost the server must charge; board position/round are server-authoritative state., conf medium)
- ƒ Dates: (iStack_64+0x76c)/(iStack_68+1)/uStack_6c start, (iStack_34+0x76c)/(iStack_38+1)/uStack_3c end (year base 1900, month 0-based+1).
- ƒ Reward entries stride 0x423, count *(byte)(activity+0xad2); state byte *(entry-0x11)=='0'; bEnabled = (playerPoint >= *(short)(entry+0x28)); item fields itemId=*(byte)(entry-0x12), itemDataId=*(entry-0xf), itemCount=*(short)(entry-0xb).
- ƒ currentNode = FUN_1025b060() - 1; currentAccStep = FUN_1025b060(); currentRound = FUN_1025b060().
- ƒ currentDice = FUN_113fa150(*(cfg+0x30), 0xffffffff); roundReward = *(cfg+0x34)  [cfg=FUN_11800150()].
- ƒ fixedTime = FUN_1151a480() + 1; needCredit = FUN_117ff580(fixedTime) (credit cost for the fixed/guaranteed dice at that tier).
- $ needCredit = FUN_117ff580(fixedTime) = credit cost of buying a fixed dice roll
- $ roundReward = per-round reward item id @ cfg+0x34

### DiceBoardActivityModel::RegisterScriptHandlers `@109bb850`
*Registers the dice/board-game activity model handlers (a Monopoly-style board minigame with node/rank/block data and dice rolls).* (server: client-only (handler registration plumbing)., conf high)

### NewOperationActivityService::BuildAchieveRewardDataList `@0x109dbdd0`
*Serializes an achievement-progress reward set into 'RewardDatas' {ItemId, ItemCount, CurrentAchieveCount, NeedAchieveCount, nParam1, nParam2}. Walks a red-black-tree container at (activityObj+0x2dd0); shared CurrentAchieveCount at (activityObj+0x2dc8).* (server: client-only display; achievement counters from server state., conf medium)
- ƒ gated by *(activityObj+11000/0x2af8)!=0
- ƒ CurrentAchieveCount = *(int*)(activityObj+0x2dc8) (shared)
- ƒ per node: ItemId=*(node+0x20); ItemCount=*(node+0x24); NeedAchieveCount=*(node+0x18); nParam1=*(node+0x14); nParam2=*(node+0x1c)
- ƒ tree iterated via std::map successor (offsets +4 parent, +8 right, +0xc left)

### NewOperationActivityService::BuildActivityRewardDataList `@0x109d8fc0`
*Handler (C2AS_GetActivityDetailData family) that serializes an activity's reward/condition rows into 'RewardDatas' array of 'mh.view.NewOperationActivity.Data.ActivityRewardData'. Large switch on ConditionType drives per-type extra fields; separate switch on the activity-type byte (*param_4[0]) drives needItemCount / exchange fields.* (server: client-only display; FetchCount/CurrentAchieveCount/MaxFetchCount come from server activity state (FUN_109d8f20 reads counters). Server authoritative on actual fetch/exchange., conf medium)
- ƒ entry count = *(byte*)(param_4+0xad2); entry stride 0x423; iVar6 = idx*0x423
- ƒ skip row unless (param_4[iVar6+0xad4]!='0') etc. (visibility gating on type/state bytes at +0xad4,+0xae3)
- ƒ ItemId = *(param_4+iVar6+0xad6); ItemCount = *(short*)(param_4+iVar6+0xada); EntryId = param_4[iVar6+0xad3]
- ƒ FetchCount = FUN_109d8f20(byte param_4[iVar6+0xad3]); MaxFetchCount = *(short*)(param_4+iVar6+0xb0d)
- ƒ ConditionType = param_4[iVar6+0xae3]; nCondParam1 = *(param_4+iVar6+0xae5); nCondParam2 = *(param_4+iVar6+0xae9)
- ƒ ConditionType switch: 2=LoginDayTime(nCondParam1), 3=NeedOnlineTime(nCondParam1), 8=CurrentAchieve via FUN_109d8f20(byte +0xae4) & need=+0xae5, 9=FUN_114e00a0 via vtbl+0x46c(short +0xae5), 11=exchange (ExchangeSourceItemDataArray built from source list at +0xb8f and dest at +0xc0f, entries parsed with atoi, stride 0x18/6-dword; emits ActivitySimpleItemData{ItemId,ItemCount}), 13=need=1 gated by FUN_107ca5b0/FUN_116b8a70/FUN_114cdd70
- ƒ exchange loop count uStack_e8 = ((int)piStack_100 - iStack_104)/0x18 (0x18=24-byte records)
- ƒ activity-type byte (*param_4) branches: 0x7f/0x0c/0x10/0x16/0x1c/0x1b/0x1f/0x22 -> currentItemCount+needItemCount; 0x18,0x19 -> needItemCount; 0x7c(+cond 0x0a) -> time-based ItemCount via FUN_10a13c30 with (now-0x2a30) offset (0x2a30=10800s=3h); 0x0a/0x17 with cond 0x0a and subtype at +0xadf (==4 or ==2) -> FUN_113fa0d0/FUN_113fa380 count deltas; 0x25,0x2a(strParam5/name),0x2b(atoi +0xc0f),0x2c(FetchCount/MaxFetchCount/Desc)
- $ needItemCount / currentItemCount / exchange source-dest item pairs are the exchange 'price' the server must validate on ReqRewardActivity

### NewOperationActivityService::BuildActivitySimpleDataList `@0x109d4990`
*Handler for C2AS_GetActivitySimpleDatas: iterates the activity list at (activityMgr+0x260fc) and builds an array of 'mh.view.NewOperationActivity.Data.ActivitySimpleData' VOs (ActivityType, ActivityId, ActivityName, ActivityIcon, HasRewardCanFetch) for the operation-activity panel.* (server: client-only serialization of server-provided activity list; HasRewardCanFetch is a display flag (FUN_109db010(activityId)) — server remains authoritative on actual fetch eligibility., conf high)
- ƒ activity container = *(activityMgr+0x260fc); each element *puVar7 resolved via FUN_1122b9d0(*obj), gated by FUN_109d8df0(obj,cfg)
- ƒ ActivityType = *cfg (byte at cfg[0]); ActivityId = *obj; ActivityName = CPet::SetName(cfg+0xd); ActivityIcon = cfg+0x94d
- ƒ HasRewardCanFetch = FUN_109db010(activityId)

### NewOperationActivityService::BuildConstTableRewardData `@0x109dade0`
*Serializes reward data from a const/config table (loaded via FUN_10540d00 / FUN_1052c520) into 'RewardDatas' when the table id == 0xbc9 (3017). Iterates nested config lists.* (server: client-only; reads static config table, not player state., conf medium)
- ƒ guard: config record stride 0x114 (iVar2/0x114), only when table field local_124==0xbc9 (3017)
- ƒ outer list nodes stride 0x14; inner reward records stride 9 dwords (puVar4+=9, 0x24 bytes)
- ƒ ItemId = *puVar4; ItemCount = puVar4[3]

### NewOperationActivityService::BuildExchangeRewardDataList `@0x109da2a0`
*Serializes an exchange-type activity's 'RewardDatas'. Per entry, type byte at (entry-0x39)==' '(0x20) produces {EntryId,nParam1,nParam2} where nParam2 flags server exchange-availability (FUN_11513b40); otherwise produces full reward row {ItemId,ItemCount,FetchCount,MaxFetchCount,EntryId,ConditionType,CurrentAchieveCount,NeedAchieveCount}.* (server: validation surface: FetchCount and nParam2/availability are computed by server call FUN_11513b40(cacheId, subId, entryId, out). Client only displays., conf medium)
- ƒ entry count = *(byte*)(local_90+0xad2); psVar7 starts at local_90+0xb0d; stride 0x423
- ƒ type byte = *(char*)(psVar7-0x39); ==0x20 -> EntryId=(char)psVar7[-0x1d], nParam1=*(int*)(psVar7-0x17), nParam2 = (FUN_11513b40(...,&cnt) && cnt>=1)?1:0
- ƒ else: ItemId=*(int*)(psVar7-0x37); ItemCount=*(short*)(psVar7-0x33); FetchCount = FUN_11513b40 out[0] when obj[0xab3]!=0; MaxFetchCount=*(short*)psVar7; EntryId=(char)psVar7[-0x1d]; ConditionType=(char)psVar7[-0x15]
- ƒ if EntryId type==2: CurrentAchieveCount=FUN_109d8f20(DAT_1201fce4), NeedAchieveCount=1; else CurrentAchieveCount = (FUN_109d8f20(DAT_1201fce4)<1)?0:FUN_109d8f20(byte at +0x11b19), NeedAchieveCount=*(int*)(psVar7-0x14)

### NewOperationActivityService::BuildTaskRewardArray `@0x109d9ec0`
*Serializes a task's fixed reward list into 'arrTaskReward' array of ActivityRewardData {ItemId, ItemCount}. Reads a compact reward table on the task struct.* (server: client-only display of server-defined task rewards., conf high)
- ƒ reward count = *(byte*)(param_3+0x1b9); first entry = param_3+0x1be; stride 8 bytes (psVar3+=4 shorts)
- ƒ ItemId = *(int*)(psVar3-2); ItemCount = *(short*)psVar3

### NewOperationActivityService::RegisterC2ASHandlers `@0x109d4690`
*Registers the client->ActivityServer (C2AS) RPC dispatch table for the NewOperationActivity system: C2AS_GetActivitySimpleDatas (->FUN_109d4990), C2AS_GetActivityDetailData (->FUN_109d4bc0), C2AS_GetConstTableData (->FUN_109d87e0), C2AS_GetServerId (->FUN_109d8a90), C2AS_SetCacheActivityId (->FUN_109d8b00), C2AS_GetCacheActivityId (->FUN_109d8b30), C2AS_ExecuteEntry (->FUN_109d8b70), C2AS_ExecuteLevelMatch (->FUN_109d8c70), C2AS_GetNewYearRedPacket (->FUN_109d8cf0), C2AS_ReqRewardActivity (->LAB_109dbfc0).* (server: validation/authoritative: these C2AS_* names are the client->activity-server request opcodes. Server must own ExecuteEntry, ReqRewardActivity (reward grant), GetNewYearRedPacket (currency/item grant) and validate all reward claims., conf high)
- $ C2AS_ReqRewardActivity and C2AS_GetNewYearRedPacket trigger server-side reward/currency grants (amounts server-defined)

### OperationActivity::RegisterEnumReflection `@1158dc80`
*Reflection/serialization registrar: registers name<->value pairs for several activity enums into a descriptor object (via param_2 vtable+8). Covers kOperationActivityBoardType_* (board/panel kinds), kScriptActivityDataType_* (script data payload kinds), and kScriptActivityDataItemCondType_* (exchange/gift item unlock conditions). Pure enum-name reflection plumbing (each block sets a value + string then calls the register vtable, then FUN_10a2eb80 twice to free temporaries). Returns bool (all-registered).* (server: client-only - reflection/serialization enum registration. Useful only as an enum-value reference (e.g. ScriptActivityDataItemCondType_ExchangeItem=1 for exchange/gift gating)., conf high)
- ƒ OperationActivityBoardType values: NoBoard=0, Marqueen=1, Buttons=2, Items=3, LevelEnter=0x65, LevelFinish=0x66, LoginGift=0x67, FirstBuyVip=0x68, Exchange=0x69, Note=0x6a, Achievement=0x6b, OnlineTime=0x6c, LevelUp=0x6d, Compensate=0x6e, NewRealmWelfare=0x6f, NewAchievement=0x70, SingleButton=0x71, IntoChaos=0x72, MultiLevelEnter=0x73, QiXi=0x74, Divination=0x75, Exchanges=0x76, TaskChain=0x77, Investment=0x78, EquipUpgrade=0x79, ThunderDragon=0x7a, OpenView=0x7b, ... plus a second numbering block 0xa..0x2d (TunDragon..DailyConsumption)
- ƒ ScriptActivityDataType values: Marqueen=0x10, ButtonScript=0x20, ButtonCharge=0x21, ButtonInternalWeb=0x22, ButtonExternalWeb=0x23, ButtonAcceptTask=0x24, ButtonEnterLevel=0x25, Item=0x30, Param=0x40, LevelHidden=0x41, HubHidden=0x42, LevelControl=0x43, Script=0x44, ScriptAttachParam=0x45, Hunt=0x46
- ƒ ScriptActivityDataItemCondType values: None=0, ExchangeItem=1, Time=2, OnlineTime=3, CharLevel=4, LevelFinish=5, GetItem=6, EntryFinish=7, Login=8, Achievement=9

### RankRewardActivityModel::BuildExchangeAndRankInfo `@0x109ddd60`
*Builds rewardItemIdArray, entryIdArray and exchangeItemCount plus per-entry flags for a rank/level/fashion-ticket exchange activity. Switch on entry type byte: 0x20=rank, 0x25=level(lottery chances), 0x30=ticket/fashion, 0x40=rankReward(time window).* (server: client-only display; counts and fetched-flags are server-provided. remainderChance/exchangeItemCount are display computations of server state., conf medium)
- ƒ entry count = *(byte*)(actData+0xad2); base = actData+0xb66; stride 0x423
- ƒ case 0x20 (rank): rankEntryId=byte(entry-0x93); isRankRewardFetched=1 if FUN_107e6320()>0
- ƒ case 0x25 (level/lottery): remainderChance = 3 (default, no state) OR local_10 - FUN_1156c660() (maxChances - usedChances); levelEntryId=byte(entry-0x93)
- ƒ case 0x30 (ticket/fashion): ticketEntryId (first, bVar-guarded) or fashionExchangeNeedTicketCount=(entry+0xa9); isFashionRewardFetched=1 if FUN_107e6320()>0
- ƒ case 0x40 (rankReward window): remainderTime = (endTime - now) / 0x15180 when startTime<=now<endTime (0x15180 = 86400 s/day -> days remaining); isActivityFinish flag = now>=endTime; times read now=FUN_111f8d20, window at (entry-0x8c start, entry+0x80 end)
- ƒ exchangeItemCount = (obj[0xb47]==0)?0 : FUN_113fa680(ticketId,0,1) + FUN_113fa680(ticketId,1,1)
- $ fashionExchangeNeedTicketCount = ticket price for fashion exchange (config at entry+0xa9)
- $ remainderChance = per-day lottery chances left (default cap 3)

### RankRewardActivityModel::RegisterHandlers `@0x109dd880`
*Registers a small activity model command table: InitModel, IsActivityOpen (->FUN_109de2e0), IsRankRewardFetched (->FUN_109de3e0), and wires the model into the manager (FUN_10d17440/FUN_10d17870/FUN_109de770).* (server: client-only model registration; IsRankRewardFetched reflects server fetch state., conf medium)

### SuperHunterModel::BuildSuperHunterData `@0x109eaf00`
*C2AS_GetSuperHunterData handler (mode==1): builds the SuperHunter panel data - difficulty, remainNum, vipLevel, isVip, ruleStr, monster character path/state/tips, a BossVo list (bossID, bossName, bossData), and a 4-tier RewardVo array (rewardID, rewardCount, gainedTimes, remainGainTimes, maxGainTimes) under rewardData.* (server: client-only display; difficulty/remainNum/vip/reward-times are server-provided. GainReward remains server-authoritative., conf medium)
- ƒ difficulty = boss vtbl+0x3c; remainNum = boss vtbl+0x38; vipLevel = FUN_1025b060(actData+0x2348)
- ƒ isVip emitted only when *(actData+11000/0x2af8)!=0, value = FUN_11549be0()&0xff
- ƒ boss list from (actData->0x2b84)->vtbl+0x30 iterated at (list+0x3c..+0x40), stride 0x12 dwords
- ƒ reward tiers: loop uVar3 0..3 (4 tiers); even idx uses boss vtbl+0x44, odd uses vtbl+0x40 with page arg = clamp(bossCount,>=1); builds 'mh.view.SuperHunter.model.RewardVo'

### SuperHunterModel::RegisterHandlers `@0x109eacd0`
*Registers the SuperHunter activity model command table: C2AS_GetSuperHunterData (->FUN_109eaf00), AS2C_RequestSuperHunterRankData (->FUN_109eba30), C2AS_GetSuperHunterRankData (->FUN_109eba90), EnterInstance (->FUN_109ec540), TeamMatch (->FUN_109ec5c0), GainReward (->FUN_109ec630), GetSuperHunterInfo (->FUN_109ec4b0).* (server: validation/authoritative: EnterInstance, TeamMatch and GainReward (reward grant) are server operations; server must validate entry limits (remainGainTimes/maxGainTimes) and pay rewards., conf high)
- $ GainReward -> server grants rewardID x rewardCount, bounded by maxGainTimes

### TowerDefenseModel::RegisterScriptHandlers `@109c0c00`
*Registers the tower-defense activity model handlers, then wires up three sub-controllers (via FUN_10d17440/FUN_10d17870 gates -> FUN_109c47a0/109c47f0/109c4840) and initializes state (FUN_109c1590).* (server: client-only (handler registration + controller wiring)., conf high)

### XmasActivityModel::BuildRewardArray `@0x109d3b20`
*FetchRewardData handler: serializes the Xmas 'height/meat' reward ladder into a 'rewardArray' of XmasRewardItemMo VOs for the UI. Reads the activity data block obtained from the activity manager (DAT_1202e818->0xd0->0x90->vtbl+0xb4 -> +0x2acc). Emits currentHeight plus per-entry fields.* (server: client-only display; the reward-eligibility values (currentHeight, bClaimed, bEnabled) originate from server activity state., conf medium)
- ƒ entry count = *(byte*)(actData+0xad2)
- ƒ entry stride = 0x423 bytes, first entry ptr = actData+0xada
- ƒ per-entry emit only if type byte *(char*)(entry-6)=='@' (0x40)
- ƒ iItemIndex = entry[-1]; iItemId = entry[0x43]; iItemDataId = entry[2]; iNeedHeight = entry[1]; bIsDaily = (entry[0]==1)
- ƒ currentHeight fetched via FUN_1141f8e0() when *(activityObj+0x4e8)()!=0

### XmasActivityModel::RegisterHandlers `@0x109d3900`
*Builds the command dispatch table for the Xmas (secret/giant meat) activity model. Registers named callbacks InitModel, FetchActivityData, GetSecretMeat, GetGiantMeat, SubmitGiantMeat, FetchRewardData (->FUN_109d3b20), DrawReward (->FUN_109d3f10) via FUN_100b62c0/FUN_109d4230 string-keyed registration.* (server: client-only (client-side model command table). GetSecretMeat/GetGiantMeat/SubmitGiantMeat/DrawReward correspond to server operations that must be authoritative., conf medium)

### XmasRewardItemMo::XmasRewardItemMo `@0x109d36e0`
*Constructor for the ActionScript/UI data object 'mh.data::XmasRewardItemMo' (a Christmas 'meat/height' event reward row). Zeroes fields [0],[1], stores flag param_2 at [6], and if non-zero registers the AS class name via FUN_11a98de0.* (server: client-only (UI data-object ctor, CryEngine/ActionScript bridge plumbing), conf high)
- ƒ *param_1=0; param_1[1]=0; param_1[6]=param_2; if(param_2!=0) register 'mh.data::XmasRewardItemMo'


## quest  (21)

### CTaskFarmLevelUpAnyContentDef::ctor `@0x1177fb20`
*Def-object ctor (list-head init + register 'TaskFarmLevelUpAnyContentDef'). Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmLevelUpAnyContentDef::ctor_dup `@0x11781800`
*Duplicate def-object ctor registering 'TaskFarmLevelUpAnyContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmLevelUpContentDef::ctor `@0x1177fb50`
*Def-object ctor registering 'TaskFarmLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmLevelUpContentDef::ctor_dup `@0x11781830`
*Duplicate def-object ctor registering 'TaskFarmLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmPetLevelUpAnyContentDef::ctor `@0x1177fb80`
*Def-object ctor registering 'TaskFarmPetLevelUpAnyContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmPetLevelUpAnyContentDef::ctor_dup `@0x11781860`
*Duplicate def-object ctor registering 'TaskFarmPetLevelUpAnyContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmPetLevelUpContentDef::ctor `@0x1177fbb0`
*Def-object ctor registering 'TaskFarmPetLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskFarmPetLevelUpContentDef::ctor_dup `@0x11781890`
*Duplicate def-object ctor registering 'TaskFarmPetLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskLevelUpContentDef::ctor `@0x1177ffa0`
*Def-object ctor registering 'TaskLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskLevelUpContentDef::ctor_dup `@0x11781c80`
*Duplicate def-object ctor registering 'TaskLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskManufactureLevelUpContentDef::ctor `@0x11780090`
*Def-object ctor registering 'TaskManufactureLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskManufactureLevelUpContentDef::ctor_dup `@0x11781d70`
*Duplicate def-object ctor registering 'TaskManufactureLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskNpcAtdLevelUpContentDef::ctor `@0x11780210`
*Def-object ctor registering 'TaskNpcAtdLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskNpcAtdLevelUpContentDef::ctor_dup `@0x11781ef0`
*Duplicate def-object ctor registering 'TaskNpcAtdLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskNpcOrgLevelUpContentDef::ctor `@0x117802a0`
*Def-object ctor registering 'TaskNpcOrgLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskNpcOrgLevelUpContentDef::ctor_dup `@0x11781f80`
*Duplicate def-object ctor registering 'TaskNpcOrgLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskPetLevelUpContentDef::ctor `@0x11780330`
*Def-object ctor registering 'TaskPetLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CTaskPetLevelUpContentDef::ctor_dup `@0x11782010`
*Duplicate def-object ctor registering 'TaskPetLevelUpContentDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### LevelEntrustDetailVO::Build `@10974d90`
*Builds the LEVELENTRUST_DETAILVO client view-object for a level/commission detail screen (param_5==3 command). Reads server-provided level-config + player state and writes ~40 TLV fields (requirements, limits, player currency snapshot, appraisal/boss/reward arrays, material-ticket, fastest-pass).* (server: validation/client-only: populates UI from server-authoritative level config and player currency/level; the requirement thresholds (needLev, needGuildLev, needItem, enter-count caps) shown here must be enforced server-side on entrust accept., conf medium)
- ƒ nLimitEnterCount = FUN_1130cb50(argIdx=9) + FUN_1130cb50(argIdx=5) (two TLV int args summed at 0x10975727-0x10975764)
- ƒ appraiseArr max value iVar4 = max over up-to-3 appraisal slots of FUN_1141bcc0(piVar3[4]->vtbl[+0x1c]()) where result>=0; stored per slot keyed by CLevelInfo grid offsets +0x30/+0x34/+0x38 (FUN_1184c850)
- ƒ requirement fields read by TLV arg-index (FUN_1130bb80(idx)): idx0xe->needLev, idx8->mLimitMember/mLimitMemberMax(+4/+8), idx0xd->needItemId/needItemCount, idx5->needGuildLev + nCurrentGuildLev(guild+0x44), idx4->needGoldenHunterLev + nCurrentGoldernLev, idx0xc->nTicketCount
- ƒ bIsFastestPass path: only when levelInfo+0x2e34 != 0; nFastestPassTime = *(short*)psVar10; strFastestPassName from psVar10+4
- ƒ IsShowMaterialTicket set true only when reward count uVar6 < 2 (piVar5[0x97] gate, FUN_...+0x3a4/+0xa4)
- ƒ bIsAccept/progress via CMHLevelInfo::CheckLevelProgressThreshold; cleared to 0 if pcVar8+0x14 == 0x4b2 (level id 1202)
- $ playerMoney = FUN_1025b060() (unbound currency getter), playerBoundMoney = second FUN_1025b060 read; both snapshotted into VO for display
- $ needItemId/needItemCount = entrust material requirement (arg idx 0xd)

### LevelEntrustDetailVO::BuildByGroup `@109863d0`
*Builds LEVELENTRUST_DETAILVO by (nGroupID,nSubGroupID,nLevelID) (param_5==4). If all three are 0, resolves the current active entrust (mgr+0x2b9c) else uses args. Writes accept state, current/max entrust counts, medal descriptions, title, target area, limit time, need-item, reward placeholders, and other-target array.* (server: validation/client-only: entrust detail UI; accept eligibility, counts and rewards are server-authoritative. maxEntrustCount = base + title bonus is a useful server rule to mirror., conf medium)
- ƒ arg parse: group=in+8(if type 3/4), subGroup=in+0x20, levelID=in+0x38; else default group=0xdeadbeaf sentinel
- ƒ bIsAccept = (activeEntrust(+0xae7 obj)->[10](0) exists && its +8 == nLevelID)
- ƒ curEntrustCount = (+0xae6 obj)->vtbl[10]()
- ƒ maxEntrustCount = base->[0xb] + titleBonus, where titleBonus = mgr(local_10c+0x2b98)->vtbl[+0x20](titleObj, entrustCfg[0xc]) (0x10986502 area)
- ƒ nLimitTime = *(entrustCfg+0x24)+0x40; needItemId=*(FUN_116ae260(3)+4), needItemCount=+8
- ƒ nRewardUnBindGold / nRewardBindGold / nRewardExp all written 0 (client placeholders; real reward server-side)
- ƒ strOtherTargetArr: iterates entrust other-target list, element stride = 0x54 bytes, count = (list+0x20 - list+0x1c)/0x54; medal desc block gated by FUN_116ae4c0 && FUN_1175b200(1)
- $ needItemId/needItemCount = commission material requirement (FUN_116ae260(3)); reward gold/exp displayed as 0 here (populated server-side elsewhere)

### WeaponTrialModel::BuildDetailVO `@109aca80`
*Builds the large WEAPONTRIAL_DETAILVO (weapon-trial / hunt level detail view): level id/mode/target/boss/area/entrust text, hire-NPC item+good ids, entry requirements (needLev/needItemId/needItemCount/needHunterLev/needGoldenHunterLev/needCard), player current levels, limit member/time, match CD, material-ticket id + owned count, and pre/current boss & reward arrays.* (server: validation. Displays entry requirements the server must enforce on level entry (item/hunter-level/card gates, member limits, material-ticket cost). Values read from level config + player state., conf low)
- ƒ Runs only when param_5 == 4.
- ƒ Config columns via FUN_1130bb80(col): col1=nLevelMode(*+4), col0xe=nLimitTime(*+4), col8=mLimitMember(*+4)/mLimitMemberMax(*+8), col3=needItemId(*+4)/needItemCount(*+8), col2 (if *+4>0)=needLev-ish pair, col5=needHunterLev(*+4) [nCurrentHunterLev = player->GetLevelInfo()[0x46c]->GetHunterLev vtbl+0x18], col4=needGoldenHunterLev [nCurrentGoldernLev via FUN_114dfc10], col0xd=needGoldenHunterLev pair, col9=strNeedCardDes gate, col6=? , col7/col3/col4/col5/col6 via FUN_1130cb50 = nLimitEnterType etc.
- ƒ nHireNpcItemId=*(FUN_1181d450()+0x78); nHireNpcGoodId=*(+0x74).
- ƒ bMatchCD = max over 4 CD sources FUN_1141bcc0 vs config values at (FUN_1184c850()+0x30/0x34/0x38/0x40).
- ƒ bNeedHRLev via CMHLevelInfo::CheckLevelProgressThreshold + FUN_107d7930 (level!=0x4b2 special case zeros it).
- ƒ materialTicketID=*(FUN_116bd200()+0x40); materialTicketNum = FUN_113fa380(ticketID) = player-owned count (only if piVar3[0xb47]!=0).
- ƒ IsShowMaterialTicket = 1 when piStack_1d8[0x97]!=0 && !player->flag(vtbl+0x394) && party->GetMemberCount(vtbl+0xa4) < 2.
- ƒ preBossArr / curBossArr / preRewardArr / curRewardArr built by iterating level context boss/reward tables (2D table lookups).
- $ needItemId/needItemCount = entry item cost
- $ needHunterLev / needGoldenHunterLev = level gates
- $ materialTicketID + materialTicketNum = material-ticket entry cost & owned count
- $ mLimitMember/mLimitMemberMax = party size limits; nLimitTime = time limit


## leveling  (19)

### CGuild::ClampTargetLevel `@114aa550`
*Validates/clamps a requested guild level. this+0x44 holds current guild level. Looks up CGuildLevelUpInfo for that level; if valid, fetches the level record via FUN_108ada90 and reads the level cap at entry+0x14. Clamps the requested param_2 to min(param_2, cap) and stores it at this+0x48. Rejects negative targets. Returns 1.* (server: validation/authoritative - server must clamp guild level to the config cap (entry+0x14). this+0x44=current level, this+0x48=clamped target., conf high)
- ƒ if targetLevel(param_2) < 0 return 0
- ƒ curLevel = this[0x44]; CGuildLevelUpInfo lookup: idx=curLevel-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- ƒ levelRec = FUN_108ada90(this[0x44]); cap = levelRec[0x14]
- ƒ this[0x48] = (targetLevel <= cap) ? targetLevel : cap
- $ CGuildLevelUpInfo entry+0x14 = guild level cap

### CGuildBuildingLevelUpInfo::FindInfoById `@1145f0c0`
*Returns the CGuildBuildingLevelUpInfo entry for a single composite id (already-combined key). Standard paged CInfoManager lookup.* (server: validation., conf high)
- ƒ idx=id-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]

### CGuildBuildingLevelUpInfo::FindInfoByTypeLevel `@1145f060`
*Returns the CGuildBuildingLevelUpInfo config entry for a guild building, keyed by buildingType*100 + level. Composite-key CInfoManager lookup.* (server: validation - server validates guild building upgrade cost/requirements from this table; key composition buildingType*100+level is load-bearing., conf high)
- ƒ key = buildingType(param_1)*100 + level(param_2)
- ƒ idx=key-mgr[0x30]; require 0<=idx<mgr[0x24]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ guild-building level-up cost/requirement record keyed by type*100+level (costs in returned struct)

### CGuildBuildingLevelUpInfo::GetByIndex `@1145f110`
*Flat-vector accessor: returns element param_1 from the CGuildBuildingLevelUpInfo id list (begin at mgr+0x14, end at mgr+0x18). Used to enumerate all building/level ids.* (server: client-only enumeration helper., conf high)
- ƒ count = (mgr[0x18]-mgr[0x14])>>2; require 0<=index<count; return *(mgr[0x14] + index*4)

### CGuildLevelUpInfo::GetByIndex `@0x1190ae70`
*Flat-vector accessor into CGuildLevelUpInfo (guild level-up curve/requirements table).* (server: validation (config read; guild level thresholds), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CPlayerLevelUpInfo::AddExpComputeLevel `@1139dcb0`
*Given a current (level=param_1, exp=param_2) and an exp delta (param_3), computes the resulting (level->*param_4, exp->*param_5) by rolling exp over per-level EXP caps. Looks up the CPlayerLevelUpInfo record for the level; the per-level EXP-to-next cap is at entry+0x14. Carries overflow into subsequent levels via FUN_10b629d0(level) (per-level info lookup), stopping at the level cap.* (server: authoritative - this is the exact EXP->level accumulation the server must run to award levels; do not trust client level. Validate against same CPlayerLevelUpInfo curve., conf high)
- ƒ InfoManager lookup: idx=level-mgr[0x30]; require 0<=idx<mgr[0x24]; block=mgr[0x20][idx/mgr[0x28]]; entry=block[idx%mgr[0x28]] (standard CInfoManager paged pattern)
- ƒ entry+0x14 = EXP required to advance from this level (per-level cap)
- ƒ levelCap = *(FUN_1046c7c0(1) + 0xd0); if levelCap <= level return 0xffffffff
- ƒ if exp+delta < entry[0x14]: outLevel=level, outExp=exp+delta (no level change)
- ƒ else level-up: carry = (exp - entry[0x14]) + delta; outExp=0; outLevel=level+1; then while true: nextEntry=FUN_10b629d0(outLevel); cap=nextEntry[0x14]; if carry<cap break (outExp=carry); else outLevel++, carry-=cap; stop when outLevel>=levelCap
- ƒ returns 0 on success, 0xffffffff on error (invalid level / level>=cap / missing entry / exp>=cap)
- $ EXP curve: per-level EXP-to-next stored at CPlayerLevelUpInfo entry+0x14
- $ hard level cap at FUN_1046c7c0(1)+0xd0

### CPlayerLevelUpInfo::LookupByLevel `@0x10b629d0`
*Chunked-2D config lookup into CPlayerLevelUpInfo returning the level-curve entry (EXP threshold / reward record) for a given level, or 0 if out of range.* (server: config-lookup (authoritative level/EXP curve table; server should use identical thresholds for level-up validation), conf high)
- ƒ mgr = CPlayerLevelUpInfo::GetInfoManager(0,"CPlayerLevelUpInfo",0).
- ƒ Guard: level!=-1 && (level!=0 \|\| mgr[0x30]==0) && mgr[0x28]!=0; idx = level - mgr[0x30]; require 0<=idx<mgr[0x24].
- ƒ row = *(mgr[0x20] + (idx / mgr[0x28]) * 4); return *(row + (idx % mgr[0x28]) * 4).
- ƒ Field byte-offsets: base ptr @0x20, count @0x24, cols @0x28, base-level @0x30.

### CSoulBeastLevelUpInfo::FindInfoById `@11534260`
*Returns the CSoulBeastLevelUpInfo entry for a single composite id. Standard paged lookup.* (server: validation., conf high)
- ƒ idx=id-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]

### CSoulBeastLevelUpInfo::FindInfoByTypeLevel `@11534200`
*Returns the CSoulBeastLevelUpInfo config entry for a soul-beast, keyed by beastType*100 + level. Composite-key CInfoManager lookup.* (server: validation - server validates soul-beast leveling from this table; key = type*100+level., conf high)
- ƒ key = beastType(param_1)*100 + level(param_2)
- ƒ idx=key-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ soul-beast level-up cost/stat record keyed type*100+level

### CSoulStone::LevelUpAddValue `@11413d50`
*Levels up a soul-stone object by one: increments its level counter at this+0x24 (param_1[9]), looks up the CSoulStoneLevelUpInfo record for the new level, and adds that record's per-level value (entry+0x18) into the accumulator at this+0x28 (param_1[10]), saturating at INT_MAX. Then tail-calls a virtual (vtable+0xa8), likely a change/notify hook.* (server: authoritative - soul-stone level and accumulated value are progression state the server must own; entry+0x18 is the per-level gain., conf high)
- ƒ this[9] (level, offset 0x24) += 1
- ƒ InfoManager lookup for new level: idx=level-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- ƒ this[10] (accumulator, offset 0x28) += entry[0x18]; if result < 0 (overflow) clamp this[10]=0x7fffffff
- $ CSoulStoneLevelUpInfo entry+0x18 = per-level value added on each level-up (stat/points)

### EventDef::LevelUp::GetSingleton `@0x118f3ff0`
*Lazily constructs a named event/token descriptor for L"LevelUp" with numeric id 0x5f (95). Sets *param_2=1 (found flag), returns descriptor.* (server: authoritative (server fires LevelUp event; id 95 is the wire/event constant), conf high)
- ƒ event id = 0x5f (95); name = L"LevelUp"

### EventDef::VIPLevelUp::GetSingleton `@0x118f4640`
*Lazily constructs the named event descriptor for L"VIPLevelUp" with id 0x60 (96).* (server: authoritative (VIP level-up event constant id 96), conf high)
- ƒ event id = 0x60 (96); name = L"VIPLevelUp"

### FirstLoginAddExp::ctor_registerConfigKey `@0x11848010`
*Constructor/registrar for a 'FirstLoginAddExp' config object: sets vtable PTR_FUN_11d4f068 and registers the config key string 'FirstLoginAddExp'. (One-time EXP bonus granted on first login.)* (server: authoritative (first-login EXP bonus is a server-granted reward; this is its config binding), conf medium)

### LevelUpView::BuildExpCurveInfo_Variant1 `@0x10b611b0`
*Builds player level-up UI data (two blocks, UI events 0x87 and 0x252) from CPlayerLevelUpInfo (level/EXP curve) and CExplimitInfo (EXP cap). Shows current level, EXP, star level, and reward preview for current and next level.* (server: client-only (display of level/EXP curve; server owns actual EXP & level), conf medium)
- ƒ current level = CPlayer::GetHuntRankOrCount(); level-up config row via CPlayerLevelUpInfo chunked-2D lookup (mgr+0x20/0x24/0x28/0x30).
- ƒ *(levelRec+0x14) used as an EXP/threshold field emitted into local_40[0].
- ƒ CExplimitInfo lookup (FUN_108dea50) by hunt rank -> emits *(rec+0x1c) and *(rec+0x18) as exp-limit fields (local_2c/local_28, local_64/local_60).
- ƒ Several stat getters FUN_1025b060() populate current/next-level stat comparison; FUN_113974a0 returns paired values; FUN_116bd200()+0x30 supplies another field.

### LevelUpView::BuildExpCurveInfo_Variant2 `@0x10b61860`
*Variant of the level-up UI data builder (UI events 0x87 and 0x252) using CPlayerLevelUpInfo, with a constant 1000 denominator field; shows current/next level EXP and reward preview.* (server: client-only (level/EXP display), conf medium)
- ƒ local_3c = 1000 and local_74 = 1000 (fixed constant, likely EXP-percentage denominator / display scale).
- ƒ current level = CPlayer::GetHuntRankOrCount(); CPlayerLevelUpInfo chunked-2D lookup; *(levelRec+0x14) emitted.
- ƒ Reward preview via FUN_108d1810(level) -> *(rec+0x18)/*(rec+0x1c) when *(rec+0x14)!=0.

### Player::OnLevelUp_PlayVfxAndNotify `@0x11164820`
*Level-up reaction: plays the 'Energy_Ability_PC.BUF.LevelUp' particle effect, runs level-up logic (FUN_1139ab90), and if a predicate holds fires client event 0x4ce with the player's hunt rank.* (server: client-only (level-up presentation; server owns the level change that triggers it), conf medium)
- ƒ Particle spawn params: local_10=0x42b40000 (=90.0f), local_14=0x3f000000 (=0.5f), scale 0x3f800000 (=1.0f).
- ƒ Event 0x4ce dispatched with FUN_1024e8a0(CPlayer::GetHuntRankOrCount(2)).

### Player::PlayLevelUpBuffVfx `@0x112b79a0`
*Plays the 'Energy_Ability_PC.BUF.LevelUp' level-up particle effect and invokes vfunc[0x1ac](2,0,0) on the target (level-up presentation).* (server: client-only (VFX), conf medium)
- ƒ Same particle params as FUN_11164820: 0x42b40000 (90.0f), 0x3f000000 (0.5f), scale 0x3f800000 (1.0f).

### TdrText_LeagueScoreMod_Dump `@103de410`
*TDR text dumper for a league/arena match score-modifier config: clan & self score/PV/medal deltas, punish, step-reward level, weekly/total limits, extra reward score/medal.* (server: authoritative config: server applies these score/medal modifiers and enforces week/total limits. This fn is client/debug dump., conf medium)
- ƒ [iType]=param_1[0]
- ƒ [iClanScoreMod]=param_1[1], [iClanPVMod]=param_1[2]
- ƒ [iSelfScoreMod]=param_1[3], [iPunish]=param_1[4], [iSelfPVMod]=param_1[5], [iSelfMedalMod]=param_1[6]
- ƒ [iStepRewardLevel]=param_1[7]
- ƒ [bWeekLimit] = *(u8)@0x20, [bTotalLimit] = *(u8)@0x21
- ƒ [iExRewardScore] = *(u32)@0x22, [iExRewardMedal] = *(u32)@0x26
- $ iClanScoreMod/iSelfScoreMod/iSelfMedalMod/iSelfPVMod = score & medal deltas applied per match outcome
- $ iExRewardScore/iExRewardMedal = extra reward amounts
- $ bWeekLimit/bTotalLimit = claim caps

### TdrText_LeagueSeasonStats_Dump `@103e0350`
*TDR text dumper for a player's league season stats: score, top score, streak, win/lose/total counts, reward mask, extra-reward and step-reward counts, medal count.* (server: authoritative: season score/streak/win-loss and reward mask are server-owned; function is client/debug dump, conf high)
- ƒ [iCurSeason]=p[0], [iScore]=p[1], [iScoreTop]=p[2], [iWeekReward]=p[3], [iStreak]=p[4]
- ƒ [iWinNum]=p[5], [iLoseNum]=p[6], [iTotalNum]=p[7]
- ƒ [iRewardMask]=p[8], [iExRewardNum]=p[9], [iStepReward]=p[10], [iExMedalNum]=p[0xb]
- $ iScore = league score (currency-like ranking value)
- $ iRewardMask = bitmask of claimed rewards (anti-double-claim)
- $ iExMedalNum = medal count


## progression  (18)

### CBuildUpSkillLeagueUIModel::RegisterHandlers `@1091a1f0`
*GUI model init that registers a large table of callbacks for the character build-up / skill-unlock / league-registration panel via repeated FUN_100b62c0 (bind name) + FUN_1091d8d0 (register slot) pairs.* (server: client-only. Server-relevant command surface: GetBuildUpData, LevelUpBuild (server must validate cost & apply level), GetFundData, GetUnlockData, GetCandidateSkillData, GetSkillViewData, GetLeagueRegistrationViewData, UnlockItem (server validates unlock cost), LearnSkill (server validates & grants skill), ReqLeagueRegistration, GiveUpLeagueRegistration, sendGuildMatchSignUpList., conf high)

### CEquipEnforceModel::BuildDiamondCostAndRateVO `@0x1082bc10`
*Emits the enforcement material ('diamond') cost and the enforce success-rate info to the VO. Reads the required diamond/material item id and count for the current enforce level, the player's owned amount, and a localized success-rate string. param_4 (char) selects live-equip mode (0) vs preview mode (1); param_3 selects whether bind materials are used.* (server: client-only display (reads local data / client-side rate helper FUN_11599a70). CRITICAL for the authoritative server: it exposes the enforce cost model (a per-level 'diamond' item cost at rec+0xc4/+0xc8) and a success-rate that the server must be the one to actually roll and charge. Gated on server enhancement config present (player+0x260e0 and +0x260e8)., conf medium)
- ƒ cost source (preview mode param_4!=0): rec=FUN_115c3a10(FUN_115997b0(guid)); diamondPacked=*(rec+0xac), *(rec+0xb0); diamondItemID=*(int*)(rec+0xc4); diamondCounts=*(int*)(rec+0xc8)
- ƒ cost source (live mode param_4==0): FUN_115999a0(equip,&packed,&packed2,&diamondItemID,&diamondCounts)
- ƒ diamondBindCounts = FUN_113fa680(packed,1,1); diamondUnbindCounts = FUN_113fa680(packed,0,1)
- ƒ diamondHasCounts = FUN_113fa380(diamondItemID)  (player total owned, emitted via FUN_104d1440 int64)
- ƒ guaranteed/effective flag cVar6=param_3; forced false if diamondCounts<1 \|\| diamondItemID<1
- ƒ enforceRate = FUN_11599a70(item,cVar6) [live] or FUN_11599c50(item,param_3) [preview]; only when FUN_116698a0() true
- ƒ enforceRateInfo = localized string msgId 0x48b (live) / 0x445 (preview), 1 arg = FUN_1024e8a0(enforceRate,2)
- $ diamondItemID + diamondCounts = material item consumed per enforce attempt; diamondBindCounts/diamondUnbindCounts split the requirement into bind vs unbind stacks
- $ enforceRate = success chance (%) displayed to player

### CEquipEnforceModel::BuildEnforcePunishmentVO `@0x1082bf40`
*Emits the enforce-failure penalty (level-loss) info: a localized 'enforcePunishmentInfo' string plus maxLevel/minLevel fields describing how many enforce levels are lost on failure. param_5 selects normal-enforce vs alternate (transfer/break) message set.* (server: client-only display of the failure penalty; the actual level-loss on a failed enforce must be applied authoritatively by the server. Gated on player+0x260e0 (enhancement config present)., conf high)
- ƒ penalty range: FUN_115998e0(item,&minLevel,&maxLevel) [normal, param_5==0] or FUN_11599be0() [param_5==1], only when FUN_116698a0() true
- ƒ if maxLevel==minLevel && ==0: msg 0x487 (param5=0) / 0x4c3 (param5=1), 0 args (no penalty)
- ƒ if maxLevel==minLevel && !=0: msg 0x488 / 0x4c4, 1 arg = FUN_1024e8a0(maxLevel,2) (fixed loss)
- ƒ else (range): msg 0x489 / 0x4c5, 2 args = FUN_1024e8a0(minLevel,2), FUN_1024e8a0(maxLevel,2)
- $ on-failure penalty = loss of between minLevel and maxLevel enforce levels

### CEquipEnforceModel::BuildLevelCapsVO `@0x1082b380`
*Emits equipment enforce/break level fields to the VO: current enforce level, current break level, and the config caps (enforce top level, break top level, level-required-for-break).* (server: validation-relevant: these caps (config obj +0x140 enforceBreakTopLevel, +0x144 enforceLevelForBreak) are the bounds the server must enforce; here read for display only., conf high)
- ƒ equipEnforceLevel = FUN_1166c160() (current enforce/strengthen level)
- ƒ equipBreakLevel = FUN_1166c400() (current break level)
- ƒ enforceTopLevel = FUN_1166d7c0() (max enforce level)
- ƒ enforceBreakTopLevel = *(int*)(FUN_1166c4b0() + 0x140)
- ƒ enforceLevelForBreak = *(int*)(FUN_1166c4b0() + 0x144)  (enforce level required before break allowed)
- $ level caps: enforceTopLevel, enforceBreakTopLevel, enforceLevelForBreak (all read from equip config object)

### CEquipEnforceModel::OnRequestEquipDetail `@0x1082ab30`
*Handler for '_requestEquipDetail': builds the enforce-detail panel VO for a selected equipment. Resolves item guid (params 8/0xe), reads two byte flags (params 0x14, 0x20), fetches the currently-selected equip (FUN_107cb630), sets 'openEnforceDiamond' bool, then delegates to sub-builders that emit level/cost/rate/punishment fields.* (server: client-only detail-panel assembly (reads local equip + config)., conf medium)
- ƒ guidLo=param[8] if (param[7]&0x8f)==3\|\|4; guidHi=param[0xe] if (param[0xd]&0x8f)==3\|\|4
- ƒ flag1 = *(byte)(param+0x14) if (param[0x13]&0x8f)==2 else 0; flag2 = *(byte)(param+0x20) if (param[0x1f]&0x8f)==2 else 0
- ƒ openEnforceDiamond = FUN_116ebf50() (bool) set via FUN_104d15e0

### CEquipEnforceModel::RegisterCommands `@0x1082a9e0`
*Registers equipment enforce/break sub-model command handlers: _requestEquipDetail (FUN_1082ab30), _requireEquipBreak (FUN_1082c380), checkBindStateAfterEnforce (FUN_1082c7b0), _openEquipShow (FUN_1082d450), _CanEquipEnforceORBreak (FUN_1082d4e0).* (server: client-only registration. _requireEquipBreak (equipment 'break'/downgrade-for-materials) and enforce are server-validated mutations., conf high)

### CEquipTransferModel::RegisterCommands `@0x1082a2b0`
*Registers the equipment-transfer/enforce model methods and its network message handlers. Method binds (FUN_1082d6b0): InitModel, TrasferInitModel, PutEquipIntoSlot, RequireEquipEnforce, IsTransferReady, GetForceLevel, Dispose, StartTransfer, GetCanTransferLevel, IsEquipTransferRuleError, GetMaxForceLevel, IsTransferBindCost. Then registers 7 network message IDs.* (server: client-only registration; enumerates the equip-transfer/enforce protocol opcodes (0x424,0x3ee,0x419,0x418,0x416,0x3f2,0x448). StartTransfer/RequireEquipEnforce are the server-validated mutation requests. IsTransferBindCost indicates transfer may bind the equipment (cost side-effect)., conf high)
- ƒ registered network message IDs (FUN_1081b5b0): 0x424, 0x3ee, 0x419, 0x418, 0x416, 0x3f2, 0x448

### CGuildLevelUpInfo::GetValueForLevel `@108ada90`
*2D-table accessor over the CGuildLevelUpInfo data (singleton, lazy-loaded via CInfoManager::FindByName). Given a guild level/index, returns the corresponding table cell (e.g. exp/threshold for that level).* (server: authoritative, conf high)
- ƒ Resolve info object: singleton = CGuildLevelUpInfo::GetInfoManagerSingleton(); if null, CInfoManager::FindByName("CGuildLevelUpInfo"); fallback &DAT_123bfa54
- ƒ Guard: param_1 != -1, (param_1!=0 or *(obj+0x30)==0), *(obj+0x28)!=0
- ƒ idx = param_1 - *(obj+0x30) (base offset); require 0 <= idx < *(obj+0x24) (count)
- ƒ row = *(int*)(*(obj+0x20) + (idx / *(obj+0x28)) * 4)  where *(obj+0x28) = stride/columns
- ƒ return *(int*)(row + (idx % *(obj+0x28)) * 4); returns 0 if row null or out of range
- $ Returns per-level guild progression values (level-up exp/points table). Base=+0x30, count=+0x24, stride/cols=+0x28, data ptr=+0x20.

### CHunterCardUI::BuildBaseCardData `@108bbea0`
*Builds the hunter-card / branch (star) progression overview VO: branch cards (1/2/3), hunter star level, branch points/total, level score, daily refresh records, upgrade card name, per-star detail array.* (server: client-only, conf medium)
- ƒ Defaults: level=1, uStack_70=0x1e (30), maxContribute-like=100
- ƒ Builds 3 branch cards: FUN_108bdc90(cardId, branchN in {1,2,3}, ...) for the branchCardArray
- ƒ branchLevel: from FUN_114dfc50(cardId) -> *(res+0xc); associated data ptr *(res+0x18)
- ƒ hunterStarLevel = FUN_108bac70(cardId) (or FUN_108bab00 for cardId==0)
- ƒ star detail count = (*(dataObj+0x14) - *(dataObj+0x10)) >> 3; starLevelDetailArray iterates that block (stride 8 bytes / 2 dwords)
- ƒ branchPoints/branchTotalPoint from FUN_108bde10(...); branchCardState = FUN_114e0340(level)
- $ branchPoints / branchTotalPoint = hunter-card progression points (not currency); default cap-like value 100

### CHunterCardUI::BuildStatisticCardData `@108bc6a0`
*Builds the achievement/statistic-card VO array: per card its class, show type, context text, check state, title, current vs target value, award point, reward item id, achieve id, and canFetch/hasFetched flags.* (server: validation, conf medium)
- ƒ Per statistic entry (array *(iVar5+0x8c)..*(iVar5+0x90), stride 8 dwords=0x20): switch on entry[0] type -> 1: FUN_104d8d20(entry[1]) name; 2: FUN_107d7930; 3: FUN_11a88b20(entry[1],1); 4: (skip name)
- ƒ currentValue = (achieved ? entry[5] : 0); targetValue = entry[5]
- ƒ cardID = entry[1] when type==3 else 0
- ƒ Progress mask gate: reads mask *(iVar5+8)/*(iVar5+0xc) vs FUN_100ed750() bitfield; if bits not all set -> card skipped
- ƒ canFetch set when reward requirements met (FUN_114e00a0() >= reqB[9], not yet fetched via FUN_115350b0); hasFetched otherwise
- ƒ cardAwardPoint = *(iVar5+0x80); rewardItemID = *(iVar5+0x98) (or reqB[10]); achieveID = *(iVar5+0xac)
- $ cardAwardPoint = points awarded on achievement completion
- $ rewardItemID = item granted; canFetch/hasFetched gate the (server-authoritative) reward claim

### CItemUpgradeModel::BuildTaskQuestVO `@0x107f7e50`
*Client UI-model builder for the item-upgrade (equipment upgrade/refine) panel. Iterates the 'itemUpgradeDatas' variant array (records of 3 dwords: two-dword id/guid + nItemLevel), and for each entry builds a TASK_QUEST_VO_NAME view-object describing required upgrade materials and their current-vs-max owned counts, plus quest metadata. Uses CMaterialTagDescInfo lookups and two red-black-tree maps (CSkillLevelMap::Insert) to aggregate material requirements and skill/level contributions.* (server: client-only (populates flash/UI VO from local inventory counts). Reveals that upgrade-material sufficiency is a per-material curCount>=maxCount check that the server must re-validate on upgrade commit., conf medium)
- ƒ record stride in itemUpgradeDatas = 3 dwords: uStack_70 = *(u64)(base + idx*3 + 1) (item guid/id pair), nItemLevel = base[idx*3 + 3]
- ƒ per material: nCurCount = FUN_113fa680(itemId,0,1) + FUN_113fa680(itemId,1,1)  (unbind count + bind count of owned item)
- ƒ nMaxCount = required count = puVar14[1] (path A, CMaterialTagDescInfo entries stride 2 dwords) OR piVar5[6] (path B)
- ƒ completion flag piStack_1b8/iVar22: stays 'complete' (==4) only if all materials satisfy curCount >= maxCount; set to 0 (incomplete) when iVar17+iVar6 < maxCount
- ƒ material entry offsets (path A): puVar14[0]=materialItemId, puVar14[1]=requiredCount; rareType = ppiStack_168[0x13]
- ƒ material entry offsets (path B, subTask): piVar5[0]=targetId, piVar5[6]=requiredMax; rareType = *(itemDef+0x4c)
- $ no currency mutation; reports material requirement counts (nCurCount/nMaxCount) and isPointMaterial flag for the upgrade recipe

### CPlayerVIPLevelUpInfo::GetEntryAt `@1092d480`
*Static-config accessor: returns element[param_1] from the CPlayerVIPLevelUpInfo singleton's contiguous array (the VIP level-up requirement/reward table). Lazy-inits the info manager via CInfoManager::FindByName.* (server: config lookup used by both sides; server should treat this table as authoritative source of VIP level-up thresholds., conf high)
- ƒ count = (base[6] - base[5]) >> 2  (array of 4-byte entries)
- ƒ return valid iff 0 <= param_1 < count, value = *(base[5] + param_1*4), else 0
- ƒ base = manager[0] or fallback singleton &DAT_123bff0c

### CPlayerVIPLevelUpInfo::ReleaseManagerRef `@1092d510`
*Resolves the CPlayerVIPLevelUpInfo singleton (lazy-init) and invokes its vtbl+0x28 method (ref release / RAII teardown helper).* (server: client-only plumbing., conf medium)

### CRankLevelUpModel::OnRequestPutItemIn `@0x1081a400`
*Handler for '_requestPutItemIn' in the equipment rank-level-up (enforce) UI. Resolves the dropped item by its guid (param_4 variant fields 8 and 0xe = guid lo/hi), validates it against the local game-data object, computes a status/result code, and writes the current enforce level to the VO under 'enforceLevel'.* (server: client-only pre-check/UI feedback. The itemDef type test (+0x34==2 equipment, +0xc0 subtype) and enforce-level read mirror validation the server must enforce on the actual enforce request., conf medium)
- ƒ guidLo = param_4[8] if (param_4[7]&0x8f)==3\|\|==4 else 0xdeadbeaf; guidHi = param_4[0xe] if (param_4[0xd]&0x8f)==3\|\|==4 else 0xdeadbeaf
- ƒ item = FUN_113f9bb0(guidLo,guidHi); if item==0 -> result 0x29812
- ƒ else itemDef=FUN_11669250(); if *(itemDef+0x34)!=2 -> result 0x29813 (not equipment)
- ƒ else if *(itemDef+0x34)==2 && *(itemDef+0xc0)==6 -> result 0x2981b
- ƒ enforceLevel = FUN_1166c160() when item selected (FUN_107cb630 nonzero and FUN_116698a0 true)
- $ result-code enum (client status): 0x29812=item-not-found, 0x29813=not-enforceable-type, 0x2981b=disallowed-subtype(0xc0==6)

### CRankLevelUpModel::RegisterCommands `@0x1081a9f0`
*Registers equipment rank-level-up (enforce) UI command handlers: _requestPutItemIn (FUN_1081a400), _requestRankLevelUp (FUN_1081a5e0), _msgBoxConfirm (FUN_1081a740), _requestRankLevelUpItemInfo (FUN_1081a820), _isRankLevelUpItemRequireLevelBigger (FUN_1081aad0).* (server: client-only registration. _requestRankLevelUp is the enforce-commit request; server must validate item, level cap, and material/currency cost., conf high)

### CSpoorTaskUIModel::BuildEventList `@109480a0`
*Builds the achievement/'spoor' (footprint/track) task event VO list for the client panel. Iterates event definitions (FUN_10947810 count, FUN_10947780 by index) and emits per-event display fields plus completion timestamp breakdown.* (server: client-only display builder; progress (eventCurrent/eventFinish), reward value and completion time come from server-authoritative event state., conf low)
- ƒ eventRewardValue = def+0x2ab0 style field (iStack_84)
- ƒ spoorGroupID: when def[6]==2, scan group table (base+0x2d10) matching index==def[7] -> value at +4
- ƒ finish date: local_58 = completion epoch, _localtime64 -> finishDay=tm_mday, finishYear=tm_year, finishMonth=tm_mon
- ƒ hunterStarLevel = def[7]
- ƒ newClear/newDetailClear flag uVar1 set if event id present in global cleared-set [DAT_123bd2a8..DAT_123bd2ac)

### TlvStarBranchRecord::DebugFormat `@0x102166e0`
*TDR text-dump of a single star-system branch record: branchType(u8), branchLevel(u16), allScore, dayScore, recordCardLevelUpTimes, challengeScore.* (server: client-only formatter; documents star-branch scoring record, conf high)
- ƒ branchType(u8) @ +0; branchLevel(u16) @ +1; branchAllScore(u32) @ +3; branchDayScore(u32) @ +7; branchRecordCardLevelUpTimes(u32) @ +0xb; branchChallengeScore(u32) @ +0xf
- ƒ struct is packed (byte offsets, not word-indexed): size ~0x13
- $ recordCardLevelUpTimes = count of card-level-up spends for this branch

### TlvStarSystemData::DebugFormat `@0x1021dd80`
*TDR text-dump of the star-system container: openFlag, resetTime, recordCardLevelUpTimes, starScore, then nested levelInfo(StarBranchData list), cardInfo, statInfo(StatContainer), trackCards, plus a new-stat SoA (ids u16 / vals u32).* (server: client-only formatter; documents star-system state and stat container, conf high)
- ƒ openFlag [0]; resetTime [1] (time); recordCardLevelUpTimes [2]; starScore [3]
- ƒ weeklyRefreshTime @ byte-off 0x9116; newStatCount(i32) @ 0x911a, validated <0 -> -6, >3000 -> -7
- ƒ newStatIds[] u16 @ 0x911e; newStatVals[] u32 @ 0xa88e (both length newStatCount)


## equipment-enhance  (17)

### CEquipEnforce::GetRuleRecordByCategoryAndLevel `@0x115c3960`
*Dispatches an enhance-rule lookup by equip category. Builds composite index = param_2*100 + param_3. If the current equip is weapon-type (FUN_116c5290 \|\| FUN_116c5250) looks up CEquipEnforceWeapon by that index; if armor-type (FUN_116c51f0) delegates to FUN_115c3b80; if jewelry-type (FUN_116c5260) delegates to FUN_115c3bd0. Returns the record pointer.* (server: authoritative data source: resolves the enhance cost/success rule row; server must use identical index math (cat*100+level), conf high)
- ƒ compositeIndex = param_2 * 100 + param_3   (category-block * 100 + level)
- ƒ weapon: CEquipEnforceWeapon sparse lookup by compositeIndex
- ƒ armor: return FUN_115c3b80(compositeIndex); jewelry: return FUN_115c3bd0(compositeIndex)

### CEquipEnforceArmor::GetManagers `@0x115bf220`
*Stock CInfoManager singleton accessor/registrar for the CEquipEnforceArmor config table (armor enhance rules). Registers on first call, caches at DAT_122df5b0, falls back to placeholder DAT_122df744.* (server: client-only plumbing (config-manager singleton); table itself shared, conf high)

### CEquipEnforceArmor::GetRecordById `@0x115c3b80`
*CInfoManager sparse-array accessor returning the CEquipEnforceArmor rule record for index param_1.* (server: authoritative data source: read-only config lookup, conf high)

### CEquipEnforceArmor::GetSingletonRaw `@0x115c4180`
*Lightweight variant of CEquipEnforceArmor::GetManagers that only returns the cached singleton (*DAT_122df5b0) after first-call registration; returns 0 for non-zero param.* (server: client-only plumbing (config-manager singleton), conf high)

### CEquipEnforceBreak::GetNextBreakStageId `@0x116c4a30`
*Given a break record index param_1, reads its break-stage/tier at record+0xC8 (200): if stage==3 returns the same index (already max), if stage>2 returns 0; otherwise scans forward (idx+1, idx+2, ...) through CEquipEnforceBreak for the next record whose stage (+0xC8) == currentStage+1 and returns that index. Returns 0 if none found.* (server: authoritative: resolves the next break stage; server should compute progression using field 0xC8 (max stage = 3) not trust client, conf high)
- ƒ stage = *(rec + 0xC8)   (0xC8 = 200 = break stage/tier field)
- ƒ if stage==3: return same index (max stage is 3)
- ƒ if stage>2: return 0
- ƒ else: find smallest idx' > param_1 with *(rec' + 0xC8) == stage+1; return idx'

### CEquipEnforceBreak::GetNextLevelField_0xac `@0x11599830`
*Sparse-array (CInfoManager) accessor into the CEquipEnforceBreak config table. Index = current break level (FUN_1166c400) + 1, i.e. the record for the NEXT break level. On a valid record, writes field at record+0xAC into *param_2. FUN_116c5290/51f0/5260 select the equip category (weapon/armor/jewelry) before the lookup.* (server: validation/authoritative data source: read-only config lookup; break/enhance tables are shared, server reads same field to validate the next-level parameters, conf medium)
- ƒ idx = FUN_1166c400() + 1  (current break level + 1 -> next level record)
- ƒ manager sparse lookup: rec = mgr[0x20][(idx-mgr[0x30])/mgr[0x28]][(idx-mgr[0x30])%mgr[0x28]]; guarded by idx!=-1, idx<mgr[0x24]
- ƒ *param_2 = *(rec + 0xAC)

### CEquipEnforceBreak::GetNextLevelFields_0xa4_0xa8_0xbc_0xc0 `@0x115999a0`
*Same NEXT-break-level record lookup. Writes four fields: rec+0xA4->param_2, rec+0xA8->param_3, rec+0xBC->param_4, rec+0xC0->param_5.* (server: validation/authoritative data source: read-only config lookup (likely material/cost/success parameters for the break level), conf medium)
- ƒ idx = FUN_1166c400() + 1
- ƒ *param_2=*(rec+0xA4); *param_3=*(rec+0xA8); *param_4=*(rec+0xBC); *param_5=*(rec+0xC0)

### CEquipEnforceBreak::GetNextLevelFields_0xb4_0xb8 `@0x115998e0`
*Same NEXT-break-level record lookup as FUN_11599830. Writes record+0xB4 into *param_2 and record+0xB8 into *param_3.* (server: validation/authoritative data source: read-only config lookup, conf medium)
- ƒ idx = FUN_1166c400() + 1
- ƒ *param_2 = *(rec + 0xB4); *param_3 = *(rec + 0xB8)

### CEquipEnforceBreak::GetNextLevelRecord `@0x115c3a90`
*Returns the CEquipEnforceBreak config record pointer for the NEXT break level (idx = current break level FUN_1166c400 + 1). Category selected first via FUN_116c5290/51f0/5260.* (server: authoritative data source: read-only lookup of next break-level rule, conf high)
- ƒ idx = FUN_1166c400() + 1; standard CEquipEnforceBreak sparse lookup; returns row pointer

### CEquipEnforceBreak::GetSuccessChancePercent `@0x11599a70`
*Computes a break/enhance success-or-protect percentage from the NEXT-break-level record (idx = current+1). If param_2>0 (protection/aid item present) returns base+bonus, else returns base only; both clamped to 100.* (server: authoritative: server must compute this success chance from the same table (offsets 0xB0 base, 0xC4 bonus, cap 100) rather than trust client, conf high)
- ƒ idx = FUN_1166c400() + 1; rec looked up in CEquipEnforceBreak manager
- ƒ if (param_2 > 0): result = *(rec+0xC4) + *(rec+0xB0); if (result>100) result=100
- ƒ else: result = *(rec+0xB0); if (result>100) result=100
- ƒ rec+0xB0 = base success percent; rec+0xC4 = bonus percent added when param_2>0; hard cap 100
- $ success chance is a percentage capped at 100

### CEquipEnforceJewelry::GetManagers `@0x115bf2c0`
*Stock CInfoManager singleton accessor/registrar for CEquipEnforceJewelry config table (jewelry/decoration enhance rules). Cache DAT_122df5d0.* (server: client-only plumbing (config-manager singleton), conf high)

### CEquipEnforceJewelry::GetRecordById `@0x115c3bd0`
*CInfoManager sparse-array accessor returning the CEquipEnforceJewelry rule record for index param_1.* (server: authoritative data source: read-only config lookup, conf high)

### CEquipEnforceJewelry::GetSingletonRaw `@0x115c41d0`
*Lightweight singleton getter for CEquipEnforceJewelry (*DAT_122df5d0).* (server: client-only plumbing, conf high)

### CEquipEnforceWeapon::GetManagers `@0x115bf400`
*Stock CInfoManager singleton accessor/registrar for CEquipEnforceWeapon config table (weapon enhance rules). Cache DAT_122df5f0.* (server: client-only plumbing (config-manager singleton), conf high)

### CEquipEnforceWeapon::GetRecordById `@0x115c3c70`
*CInfoManager sparse-array accessor returning the CEquipEnforceWeapon rule record for index param_1.* (server: authoritative data source: read-only config lookup, conf high)

### CEquipEnforceWeapon::GetSingletonRaw `@0x115c4270`
*Lightweight singleton getter for CEquipEnforceWeapon (*DAT_122df5f0).* (server: client-only plumbing, conf high)

### COpenEnforceDiamond::ctor `@0x116ebd80`
*Constructor for an 'OpenEnforceDiamond' object: sets vtable PTR_FUN_11d41958, initializes an intrusive list head (local_c=local_10), registers the name 'OpenEnforceDiamond', then calls non-returning FUN_10c3d580(0x24). Stock object-init boilerplate.* (server: client-only plumbing (object ctor), conf medium)


## upgrade  (15)

### CEquipEnforceBreak::FindInfoById `@114072a0`
*Returns the CEquipEnforceBreak config entry pointer for a given id (enhance/enforce level). Standard paged CInfoManager lookup; returns 0 if not found.* (server: validation - server uses this table to determine equipment break/downgrade on failed enhance., conf high)
- ƒ idx=id-mgr[0x30]; require 0<=idx<mgr[0x24]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ provides the enforce-break record; break/downgrade parameters are inside the returned struct (not read here)

### CEquipEnforceBreak::GetManagers `@11404e20`
*Singleton accessor / CInfoManager registration for the CEquipEnforceBreak config table (equipment enforce/enhance failure-break data). Stock CryEngine StcMbrNameSvr singleton plumbing (RegisterAndGetSingleton + CInfoManager::FindByName, one-shot init flags DAT_1218f860/DAT_1218f8a8).* (server: client-only plumbing; the table it returns is config the server also needs, but this accessor is boilerplate., conf high)

### CEquipEnforceBreak::GetSingletonManager `@114075c0`
*Minimal singleton getter returning *DAT_1218f844 (the CEquipEnforceBreak manager) after one-time RegisterAndGetSingleton init. Stock plumbing.* (server: client-only plumbing., conf high)

### CEquipEnforceRuleInfo::GetRuleById `@0x11851500`
*Paged id-map accessor for CEquipEnforceRuleInfo (equipment enforce/enhancement rules). Same page-map algorithm as enchase.* (server: validation (server reads enforce rule config for enhancement cost/success), conf high)
- ƒ idx = key - minId(mgr+0x30); page=*(*(mgr+0x20)+(idx/pageSize)*4); return *(page+(idx%pageSize)*4); pageSize=*(mgr+0x28), capacity=*(mgr+0x24)

### CEquipEnforceRuleInfo::HasRuleForObject `@0x11852450`
*Reads object's enforce-rule key at param_1+0x2c, looks it up in CEquipEnforceRuleInfo; if non-null calls FUN_11852390().* (server: validation (server checks equip has a valid enforce rule), conf medium)
- ƒ key = *(param_1+0x2c); same paged-map lookup as CEquipEnforceRuleInfo::GetRuleById

### CEquipEnforceTransferInfo::GetByIndex `@0x1191c470`
*Flat-vector accessor into CEquipEnforceTransferInfo (transfer of enhancement level between equipment).* (server: validation (config read; enforce-transfer rules), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CEquipLevelUpInfo::GetByIndex `@0x119167f0`
*Flat-vector accessor into CEquipLevelUpInfo (equipment level-up / cost curve table).* (server: validation (config read; equip level-up costs), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CEquipQuenchRuleInfo::GetByIndex `@0x1191c4d0`
*Flat-vector accessor into CEquipQuenchRuleInfo (equipment quench/temper rule table).* (server: validation (config read; quench rules), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CEquipQuickLevelUpInfo::GetByIndex `@0x11916850`
*Flat-vector accessor into CEquipQuickLevelUpInfo (batch/quick equip level-up config).* (server: validation (config read), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CEquipUpgradeInfo::GetByIndex `@0x119753f0`
*Flat-vector accessor into CEquipUpgradeInfo (equipment upgrade/promotion table).* (server: validation (config read; upgrade requirements/costs), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CLegendUpgrade::PreloadPearlAndItemRefs `@0x119cd000`
*Iterates all CLegendUpgrade config entries (legendary weapon upgrade via pearls). For each entry it walks its sub-entry list (record+0x1c..+0x20, stride 0xb0), calling FUN_117e4e60 and touching CLegendPearlItemInfo; each sub-entry has an inner item list (sub+4..+8, stride 8) iterated against CItemBaseInfo. Warms/validates the pearl and item-base references used by legend upgrades.* (server: validation (integrity/preload of legend-upgrade pearl+material references), conf medium)
- ƒ outer records: flat vector at CLegendUpgrade mgr +0x14/+0x18
- ƒ sub-entry list per record: begin=*(rec+0x1c), end=*(rec+0x20), stride 0xb0
- ƒ inner item list per sub-entry: count = (*(sub+8)-*(sub+4))>>3 (stride 8)

### EventDef::enforcetransfer::GetSingleton `@0x1191c5c0`
*Lazily constructs the named descriptor for L"enforcetransfer" with id 0x9e (158).* (server: authoritative (enforce-transfer operation/event constant id 158), conf high)
- ƒ id = 0x9e (158); name = L"enforcetransfer"

### TdrText_QuenchResult_Dump `@103f3940`
*TDR text dumper for an item Quench (淬炼 temper/enchant) result struct: return code, item uid, quench level, and parallel attrType[]/attrValue[] arrays (max 20). Reveals the enchant-result wire layout.* (server: authoritative: quench level and resulting attributes are computed server-side (upgrade result). This fn is client/debug dump. Array cap 20 is a validation bound., conf high)
- ƒ [iRetCode] = param_1[0]
- ƒ [llItemUid] = param_1[1..2] (i64 @0x4, '%I64i')
- ƒ [iQuenchLv] = param_1[3] (@0xc, quench/temper level)
- ƒ [iAttrDataCnt] = param_1[4] (@0x10; validate <0 -> -6, >0x14(20) -> -7)
- ƒ [attrType] array = param_1+5 (@0x14), count=[iAttrDataCnt], 4 bytes each, emitted via FUN_1010c010
- ƒ [szAttrValue] array = bytes at (param_1 + 0x64 + i) (@0x64), count=[iAttrDataCnt], u8 each ('0x%02x')

### TdrText_QuenchResult_Dump_dup `@103f3ee0`
*Byte-identical sibling of FUN_103f3940 (same Quench result struct dumper). Likely the Req vs Rsp or two protocol structs sharing the same layout.* (server: authoritative quench result; client/debug dump. Same as FUN_103f3940., conf high)
- ƒ [iRetCode]=p[0]; [llItemUid]=p[1..2] i64; [iQuenchLv]=p[3]; [iAttrDataCnt]=p[4] (cap 20)
- ƒ [attrType][] @0x14 (u32 x count); [szAttrValue][] @0x64 (u8 x count)

### TdrText_ReserveAbilityResult_Dump `@1041b390`
*TDR text dumper for an item reserve-ability / level-up result {iErrCode, ullItemID, bColumn, wGrid, stReserveAbilityInfo (nested), bLevelUpFlag}.* (server: authoritative: item ability upgrade / level-up result computed server-side; bColumn/wGrid identify inventory slot. Client/debug dump., conf medium)
- ƒ [iErrCode]=p[0]
- ƒ [ullItemID]=p[1..2] (u64 @0x4, '%I64u')
- ƒ [bColumn]=*(u8)@0xc
- ƒ [wGrid]=*(u16)@0xd (inventory grid slot)
- ƒ [stReserveAbilityInfo] nested via FUN_10272f80
- ƒ [bLevelUpFlag]=*(u8)@0x1b


## reward  (8)

### ActivityMgr::FindActivityIdByName_QCoinReward `@109a4530`
*Looks up the 'QCoinReward' activity in the activity registry (an ordered/red-black-tree map keyed by name string) and returns the matching activity id (*(node+0x10)); returns 0 if not found or subsystem absent.* (server: client-only (registry lookup helper)., conf high)
- ƒ Standard std::map<string,...>::find over the RB-tree at activityMgr+0x260fc; strcmp against literal 'QCoinReward'; on match returns node value at +0x10. Name string field at node+0x14 offset +0x2d.

### QCoinExchangeModel::RegisterScriptHandlers `@109a2a10`
*Registers the Q-coin exchange model callbacks: GetExchangeData->FUN_109a2ac0, ReqExchangeReward->FUN_109a3300.* (server: client-only (handler registration plumbing)., conf high)

### QCoinRewardActivityModel::FetchActivityUserData `@109a3d00`
*Builds the Q-coin reward activity user data (arrayReward of reward entries with strName, iNeedScore, iEntryId, iItemId, bCanDraw, bIsDraw, exchangeRate, plus player point). Iterates the activity's reward-entry table and computes draw eligibility from the player's accumulated point.* (server: client-only (display + draw eligibility hint). Server must re-validate iNeedScore<=point and claim state on DrawReward., conf medium)
- ƒ Activity data present: iVar3=player(...+0xb4); activityData iStack_64 = *(player+0x2acc); entry-table iVar4 = FUN_109a4400().
- ƒ Player point playerPoint = *FUN_11348ac0() ; cap compare bVar2 = playerPoint < DAT_120e8240 (global point cap). If under cap, iStack_c4 = playerPoint; else uses aiStack_40 accumulation path (sum of two FUN_11348ac0 point sources).
- ƒ Reward-entry iteration: entry stride = 0x423 bytes, count = *(byte*)(iStack_84+0xad2); entry base piVar8 = activity+0xae9. Process entry only if state byte *(piVar8-0x15)=='0'.
- ƒ iNeedScore = *(piVar8-1) + *piVar8 (two dword score parts summed).
- ƒ iEntryId = *(byte*)(piVar8-0x16); iItemId = *(dword*)(piVar8-0x13); exchangeRate = *(byte*)(piVar8-5).
- ƒ bCanDraw = (iNeedScore <= playerPoint).
- ƒ bIsDraw computed from claimed-count vs *(short*)(piVar8[9]): drawn if claimedCount(uVar7=(int)piVar8+0x26) >= threshold.
- $ iNeedScore = accumulated-point threshold per reward entry (needScore = part1+part2)
- $ exchangeRate byte @ entry-5
- $ player point cap = DAT_120e8240

### QCoinRewardActivityModel::RegisterScriptHandlers `@109a38a0`
*Registers Q-coin reward-activity model handlers using the FUN_100b62c0/FUN_109a46d0 (make-string + register-delegate) boilerplate pattern.* (server: client-only (handler registration plumbing)., conf high)

### RewardMo::SetRewardCount `@109a8b20`
*Trivial setter: writes the 'iRewardCount' field into the current serialization context.* (server: client-only., conf high)

### RewardMo::SetRewardID `@109a8b00`
*Trivial setter: writes the 'iRewardID' field into the current serialization context (FUN_104d1550).* (server: client-only., conf high)

### data::QCoinRewardMo::ctor `@109a36c0`
*Constructor for mh.data::QCoinRewardMo (a serialization mo). Zeroes fields, stores flag at +6, and if param_2!=0 registers the type name with the reflection system (FUN_11a98de0).* (server: client-only (data mo scaffolding)., conf high)

### data::RewardItemMo::ctor `@109a88b0`
*Constructor for mh.data::RewardItemMo (reward-item serialization mo). Zeroes fields, stores flag at +6, registers type name if param_2!=0.* (server: client-only (data mo scaffolding)., conf high)


## economy  (8)

### CPlayerPropertyUI::BuildCurrencyData `@108d8660`
*'GetCurrencyData' handler: enumerates all currency definitions and builds the currencyList VO (id/attr/icon/name/tips/count/max), with special handling for currency IDs 3 and 4.* (server: client-only, conf high)
- ƒ Iterate currency defs: outer FUN_10848370 collection, count = def.vtbl[+0x28](); per row def at *(row+0x14)+idx*4
- ƒ Per currency emits: nCurrencyID = row[+0x10], nAttrID = row[+0x14], strIconPath = row[+0x30], strName = row+0x18, strTips = row+0x34
- ƒ If nCurrencyID==3: nCount=FUN_1025b060(), nCountMax=FUN_1134c890(), nCount2=FUN_1025b060(), nCountMax2=FUN_1134c8b0()
- ƒ If nCurrencyID==4: nCountMax = *(FUN_117fa140()+0xa4), nCount2-source = *(FUN_117fa140()+0xa0), nCount=FUN_1025b060(); if sub-obj (obj+0x4e4)()!=0 -> nCount2 = *(sub+0x14)
- ƒ Else (generic): FUN_11348ac0(...,nAttrID); nCount = piStack_64 (queried amount)
- ƒ Currency id 4 only emitted if FUN_104d0280 vtbl[+0x54]("MatchEntry") gate passes
- $ nCount / nCountMax / nCount2 / nCountMax2 = live currency balances and caps for each currency id (ids 3 and 4 are dual-pool currencies with bound/unbound or primary/secondary counts)

### CStoreModel::GetCurrencyData `@0x10843460`
*Builds the currency-list VO (CURRENCY_VO_CLASSNAME 'currencyList') for the shop currency display. Emits a hard-coded silver (gold) entry, then iterates CCurrencyInfo manager records emitting id/icon/name/tips/count and per-type count & cap fields. Reveals the currency 'type' enum.* (server: client-only currency panel builder. Confirms credit (type 4) has an authoritative balance+cap held server-side (FUN_117fa140 +0xa0 max / +0xa4 count)., conf medium)
- ƒ currency_silver base entry: nCount = FUN_1025b060() (gold); nCurrencyID=0
- ƒ per record: type=rec[4], attrId=rec[5], key=rec[0xe]; strName from rec[0xc]
- ƒ type==3 (silver-family): nCount=FUN_1025b060(), nCount2=FUN_1134c890(), nCountMax2=FUN_1134c8b0() (current/cap split)
- ƒ type==4 (credit/real-money): count=*(FUN_117fa140()+0xa4), max=*(FUN_117fa140()+0xa0); also nCount=FUN_1025b060(), nCount2=vtbl[0x139]()+0x14
- ƒ else: FUN_11348ac0(rec[5]) generic currency amount
- ƒ list-order table iterated via DAT_123bcff8..DAT_123bcff0 (rb-tree); each maps to FUN_10254130 item template for icon/name
- $ currency type enum: 3=silver/gold-family, 4=credit (点券, cash currency with cap at +0xa0/+0xa4). nCountMax/nCountMax2 = per-currency caps

### CStoreModel::GetFilteredStoreData `@0x10844080`
*Core shop-page builder: for the requested page (param_4=pageSize, param_5=pageIndex) it filters the shop's sale records by class/skill/time filters, then emits a full SALE_ITEM_DATA VO per item -- ids, quantities, price, currency, buy-limit, player-level requirement, exchange (barter) cost items, and up to 12 special/discount item entries. Consumes EXCHANGE_DATA_CLASS records for barter costs.* (server: client-only VO assembly, but the single richest source of the shop PRICING & COST schema in this chunk. The server must authoritatively re-derive price (FUN_114b6660), barter cost items/counts (rec[0x21..0x22] + FUN_114b7110), buy-limit (currentLimitBuyCounts/itemLimitType), player-level requirement (itemDef+0xc8) and time window before committing a buy. isSkillFormula/isManuFormula/hasBeenLearned* gate purchase of skill/recipe items., conf medium)
- ƒ sale-record offsets (ppiVar1): [2]=SaleItemId, [3]=shopID, [10]=ItemId(granted), [0xb]=ItemNum(qty), byte(+0xd)=UnBindGold flag, [0x1c]=currencyShowType, [0x1e]=itemClass1, [0x1f]=itemClass2, [0x20]=itemClass3, byte(+0x1d)=enabled
- ƒ time window: rec[0x19]/[0x1b] (hi) & rec[0x18]/[0x1a] (lo) vs now=FUN_111f8d20() -> visible only within [start,end]
- ƒ class filters: rec[0x1e]/[0x1f]/[0x20] must equal DAT_123bcf90/0x94/0x98 when those >0
- ƒ exchange/barter cost list: rec[0x21]..rec[0x22], stride 2 dwords per cost item: [0]=costItemId, [1]=baseCount; actual cost = FUN_114b7110(rec,costItemId) + pair[1]; itemCount = pair[3]*rec[0xb] for material list (FUN_114b6f80(rec[0x16]))
- ƒ currentCounts (owned of cost item) = FUN_113f9300(bag,itemId,0); if !bindable also + FUN_113f9300(2,id,0)+FUN_113f9300(10,id,0)
- ƒ special items loop idx 1..0xd via FUN_108418c0; discount = rec[0x27][7]; special count = FUN_114b7530(currencyIdx) (idx7 also adds FUN_114b7530(8))
- ƒ itemPrice = FUN_114b6660(saleItemId,shopId) (currency price lookup); needPlayerLevel = *(itemDef+0xc8); maxStackCount = *(itemDef+0x50)
- ƒ page bound: total shown limited by param_4*param_5; pagination index tracked in uStack_124 (0..param_4-1) with edge flags 0/1/2
- $ purchase cost model: primary price FUN_114b6660(item,shop) in currency currencyShowType(rec[0x1c]); UnBindGold flag(+0xd) selects unbind-gold payment; barter cost = list of (costItemId,count) at rec[0x21..0x22]; special/discount multipliers at rec[0x27]
- $ buy limit: currentLimitBuyCounts + itemLimitType (per-item purchase cap); needPlayerLevel gate

### CStoreModel::GetUnifiedListData `@0x10842770`
*Builds the 'unified list' of shop entries (item ids/names, sale-point ids/names, valid shop ids) filtered by the player's eligibility. Iterates shop group data, applies permission-bit, hunt-rank, level-range and time-window filters, dedupes via red-black-tree maps, and emits four parallel arrays plus validShopIDs. Uses CCurrencyInfo manager to resolve sale-point currency names.* (server: client-only display filtering. Encodes the eligibility rules (permission bitmask, hunt-rank >= requirement, level/time window) that the server must independently enforce before allowing a purchase of any listed item., conf medium)
- ƒ permission gate: rec[2]/rec[3] bitmask vs FUN_100ed750() 64-bit mask -> (mask&rec[2])==rec[2] && (maskHi&rec[3])==rec[3] required (else skip)
- ƒ hunt-rank gate: rec[0x1a] <= CPlayer__GetHuntRankOrCount(); if rec[0x1b]>0 also *(FUN_1083eb20(rec[0x1b])+0x18) <= huntRank
- ƒ sub-filter: FUN_104d90e0(id)+0x58 quest/unlock check via FUN_114e0340
- ƒ special ids 0x0a/0x1a/0x2c require FUN_1139ab70() true
- ƒ sale-record time-window compare uses 64-bit now = FUN_111f8d20() against rec fields 100/0x6c (hi) and 0x60/0x68 (lo): available only within [start,end]

### CStoreModel::OnInitModel `@0x1083f300`
*Shop InitModel handler. Registers per-shop request sub-handlers, then populates the initial currency VO for the shop panel.* (server: client-only display refresh (reads local currency mirror). Currency reads are guarded by player+0x2afc (currency subsystem present)., conf high)
- ƒ CurrentBindMoney / CurrentUnbindMoney = FUN_1025b060() (bind + unbind gold)
- ƒ currencyGuildValue = FUN_114b7530(2); currencyFarmValue = FUN_114b7530(1); currencyClanMoney = FUN_114b7530(3); currencyClanMoneyPvp = FUN_114b7530(4); FUN_114b7530(5) fetched but discarded
- ƒ switchDrag = *(int*)(FUN_11727ff0()+0x34); switchTipsOpen = *(int*)(FUN_11727ff0()+0x30)  (client UI settings)

### CStoreModel::OnRefreshCurrency `@0x10841c40`
*'_refreshCurrency' handler: reads all player currency balances from the local currency subsystem and writes them to the shop VO. This is the authoritative reference for the game's currency-type taxonomy/indices.* (server: client-only display, but defines the currency ID space the server must own. All 10+ currencies plus bind/unbind gold are separate authoritative balances; the server must be the source of truth for each FUN_114b7530(idx) value., conf high)
- ƒ CurrentBindMoney / CurrentUnbindMoney = FUN_1025b060() (gold, bind & unbind)
- ƒ currency index -> field map via FUN_114b7530(idx): 1=currencyFarmValue, 2=currencyGuildValue, 3=currencyClanMoney, 4=currencyClanMoneyPvp, 5=(fetched,discarded), 7=currencyBindCredit, 8=currencyCredit, 9=currencyMonster, 10=currencyLieHun
- ƒ each read guarded: player(DAT_1202e818+0xd0+0x90 vtbl+0xb4)!=0 && (that+0x2afc)!=0 else 0
- $ enumerated currencies: gold(bind/unbind), Farm(1), Guild(2), ClanMoney(3), ClanMoneyPvp(4), idx5(unknown), BindCredit(7), Credit(8), Monster(9), LieHun/hunt-soul(10)

### CStoreModel::RegisterCommands `@0x1083f010`
*Registers the shop/store UI model methods and one network handler. Method binds (FUN_10845f00): GetBackItemSalesInfo, GetSalesRequirementBySaleItemID, InitModel, C2AS_NeedEquipShow, GetFilteredStoreData, SetFilterParams, GetUnifiedListData, GetCurrencyData; plus net handler AS2C_NeedCreditCost (server->client credit-cost prompt).* (server: client-only registration. AS2C_NeedCreditCost is a server-originated message confirming the server drives credit (real-money currency) charges. C2AS_NeedEquipShow is client->server., conf high)

### CTradeModel::RegisterCommands `@0x10812910`
*Registers the player-to-player trade UI command handlers and network message handlers. Binds UI callbacks (FUN_104d0ee0) for: ReqTrade, ConfirmTrade, CancelTrade, LockTrade, MoveItemToTrade, UpdataMoneyToTrade, RemoveItemFromTrade, DragItemInTrade, TradeRespondOkHandler, TradeRespondCancelHandler; and network C2AS message handlers (FUN_10813750) for C2AS_GetDealLimitLevel and C2AS_IsUnderDealLimit.* (server: client-only registration, but names the trade protocol surface. C2AS_GetDealLimitLevel / C2AS_IsUnderDealLimit prove the SERVER is authoritative over a 'deal limit level' gate (a per-account cap that bounds trade value/eligibility). MoveItemToTrade + UpdataMoneyToTrade are the item- and currency-mutation requests the server must validate., conf high)


## equipment  (7)

### LegendPearlModel::BuildUpgradeInfo `@0x109edfd0`
*C2AS_RequestLegendPearlUpgradeInfo handler (mode==3): builds the equipment-upgrade info panel from source item + config table - role/hunter-star levels, source rarity/level/rank, and a destEquipArray of candidate upgrade targets each with cost (upgradeMoney/currentMoney), level/rank requirements, break/enforce parameters, craft credit id, and a per-target arrayMaterialData with required vs owned counts and equipHasEnoughMaterial flag.* (server: client-only display of upgrade requirements/costs; the actual charge (money) and material consumption happen server-side on C2AS_RequestLegendPearlUpgrade. Server must recompute and validate these exact costs., conf medium)
- ƒ roleLevel = CPlayer::GetHuntRankOrCount(); roleHunterStarLv = ownerObj vtbl+0x18 sum of FUN_1025b060 pair
- ƒ sourceRare = srcItem vtbl+0x2c; itemLevel = srcItem vtbl+0x18; ItemRank = FUN_11669840()
- ƒ destEquip config record stride 0x22 dwords (ppuVar13 += 0x22); per record:
- ƒ equipID = ppuVar13[0]; equipRare = ppuVar13[6]; itemLevel = ppuVar13[7]; playerUseLevelMin = ppuVar13[0x12]; playerUseLevelMax = ppuVar13[0x13]
- ƒ equipCounts = ppuVar13[8]; upgradeMoney(cost) = ppuVar13[9]; currentMoney(owned) = ppuVar13[10]
- ƒ enforceRequirement = ppuVar13[-2]; hunterstarRequirement = ppuVar13[-1]; rankDownLevel = ppuVar13[0xb]; enforceDownLevel = ppuVar13[0xc]; newRankLevel = ppuVar13[0xd]
- ƒ enforceLevel = ppuVar13[3]; breakLevel = ppuVar13[4]; canBreak = byte ppuVar13[5]; enforceRuleID = ppuVar13[0x11]; nCraftCreditID = ppuVar13[0x15]; bBindState = byte ppuVar13[0x10]
- ƒ arrayMaterialData per entry: requireItemCounts, currentItemCounts, item id/cost at (matRec+0x4c); up to 6 materials (iVar6<=5 loop); equipHasEnoughMaterial=false when material sub-array absent
- $ upgradeMoney = ppuVar13[9] (currency cost of the upgrade, server must validate against owned currency)
- $ currentMoney = ppuVar13[10] (player-owned currency snapshot)
- $ material requirement: requireItemCounts vs currentItemCounts per material (server must consume requireItemCounts)
- $ requirements: enforceRequirement (ppuVar13[-2]) and hunterstarRequirement (ppuVar13[-1]) gate eligibility

### LegendPearlModel::RegisterHandlers `@0x109eda60`
*Registers the Legend Pearl (equipment enhance/upgrade) model handlers (mode==1): C2AS_RequestLegendPearlPutItemIn (->FUN_109edb40), C2AS_RequestLegendPearlUpgradeInfo (->FUN_109edfd0), C2AS_RequestLegendPearlUpgrade (->FUN_109ef720), C2AS_RequestLegendPearlReplaceAbility (->FUN_109efc10).* (server: validation/authoritative: C2AS_RequestLegendPearlUpgrade and PutItemIn / ReplaceAbility are server mutations that spend money+materials and change equipment; server must validate costs, requirements and consume items., conf high)
- $ Upgrade consumes upgradeMoney (currency) and material items; requirement gates enforceRequirement/hunterstarRequirement (see FUN_109edfd0)

### MHUI::BuildEquipTooltipData `@1085c900`
*Client equipment-tooltip / item-icon data builder. Reads an item instance and emits enforce level, break level, other-equip-position, instance-channel, jewel/socket data and enforce-rule info for display. Formats strings like "%s + %d" (name+enforce), "%d*%d" (jewel grid), jewelEmpty markers.* (server: client-only (display; all values are server-replicated item state), conf low)
- ƒ Entry gated on param_6==6 (variant tag). Reads item fields: m_nEnforceLevel, m_nBreakLevel, m_bCanBreak, m_nOtherEquipPos, itemEnforceRuleID, m_bIsLocal, instanceChannel/instanceChannelType.
- ƒ Format strings: "%s + %d  " (name + enforce level), "%s %d  ", "%d*%d-" and "%d*%d" (jewel/socket column layout), "jewelEmpty" and "collumn" keys.

### MHUI::BuildEquipUpgradeContextData `@1088e010`
*Provider for _requestEquipUpgradeInfo (gated param_5==5). Reads player and source-equip state to populate the upgrade dialog header: isWeapon, roleLevel, srcEquipEnforceLv, awakeningLevel, roleHunterStarLv, hasWakeup, sourceRare, itemLevel, ItemRank, sourceItemName, bPointType, and the destination-equip candidate array (destEquipArray / destArrayLength).* (server: client-only (all values server-replicated; feeds the confirm UI), conf low)
- ƒ Player context via DAT_1202e818->+0xd0->+0x90 vfunc(+0xb4); source-equip def via FUN_113f9bb0(equipId).
- ƒ roleHunterStarLv via CPlayer::GetHuntRankOrCount; player field ctx[0xb47] gates the destination-array build.
- ƒ srcEquipEnforceLv / awakeningLevel / rare / itemLevel / rank read from the source item + its static def.
- ƒ Sentinels 0xdeadbeaf / -0x21524151 used when a variant cell is absent.

### MHUI::BuildEquipUpgradeCostData `@1088eca0`
*Provider that iterates the server-supplied equip-upgrade candidate entries (stride 0x88 bytes) and pushes the full cost/requirement breakdown per candidate to AS3: upgrade money, current money, craft-credit costs, enforce/break levels, requirements, and per-material availability (equipHasEnoughMaterial).* (server: validation-mirror (server computes these cost fields; client re-surfaces them and computes affordability. Server must remain authoritative on upgradeMoney/nCraftMoney and material consumption)., conf medium)
- ƒ Candidate entry base = param_3+4; iterated with stride 0x88 until reaching *(param_3_ctx+8). Entry field offsets:
- ƒ +0x10 -> itemID (DAT_11dbb0b4 key); +0xc -> equipID; +0x24 -> equipRare; +0x28 -> itemLevel; +0x54 -> playerUseLevelMin; +0x58 -> playerUseLevelMax; +0x2c -> equipCounts.
- ƒ +0x30 -> upgradeMoney (currency cost); +0x34 -> currentMoney (player-owned money snapshot); +0x6c(byte) -> needUnboundGold.
- ƒ +0x04 -> enforceRequirement; +0x08 -> hunterstarRequirement; +0x38 -> rankDownLevel; +0x3c -> enforceDownLevel; +0x40 -> newRankLevel.
- ƒ +0x4c(byte) -> bBindState; +0x18 -> enforceLevel; +0x1c -> breakLevel; +0x20(byte) -> canBreak; +0x50 -> enforceRuleID.
- ƒ +0x60 -> nCraftCreditID; nOwnCraftCredit = FUN_113fa380(nCraftCreditID) (player-owned craft credit); +0x64 -> nCraftCreditMax; +0x68 -> nCraftMoney.
- ƒ +0x7c -> material array; equipHasEnoughMaterial (byte at +0x14) set after checking arrayMaterialData counts via FUN_108910e0/FUN_1088f110.
- ƒ Iteration gated on player ctx present and *(param_3+4) != *(local_4c+8).
- $ upgradeMoney = primary money cost of the equip upgrade/enforce step.
- $ needUnboundGold = flag that cost must be paid in unbound gold.
- $ nCraftMoney = secondary money cost; nCraftCreditID/nCraftCreditMax = craft-credit currency spent (capped at nCraftCreditMax); nOwnCraftCredit = player's owned amount.
- $ Per-material requirement list at entry+0x7c with owned-vs-needed check driving equipHasEnoughMaterial.

### MHUI::FormatUpgradeItemName `@10891950`
*Helper that formats/looks up the display name of an upgrade item and pushes it to AS3 as strUpgradeItemName.* (server: client-only, conf low)
- ƒ Resolves item name string and calls FUN_104d1670("strUpgradeItemName", ...) (AS3 string setter).

### MHUI::RegisterEquipUpgradeCallbacks `@1088c9c0`
*Registers the AS3 handlers for the equipment-upgrade/enforce UI: _checkEquipUpgrade, _requestEquipUpgrade, _canEquipUpgrade, _requestPutItemIn, _requestEquipUpgradeInfo, _requrestAttributeData, _openEquipShow, _checkItemBindStateChange, _getLeveRange, plus native helpers GetNewEquipDeriveLevel and CheckSlotChange. Gated on registration mode param==1.* (server: client-only (the _request* handlers issue server RPCs; server validates cost and applies), conf high)
- ƒ Handler map: _checkEquipUpgrade->FUN_1088d230, _requestEquipUpgrade->FUN_1088d770, _canEquipUpgrade->FUN_1088cbb0, _requestPutItemIn->FUN_1088dc50, _requestEquipUpgradeInfo->FUN_1088e010, _requrestAttributeData->FUN_1088e550, _openEquipShow->FUN_1088e940, _checkItemBindStateChange->FUN_1088ff50, _getLeveRange->FUN_10891b00.
- ƒ Native helpers: GetNewEquipDeriveLevel->FUN_108912a0, CheckSlotChange->FUN_108913c0.


## leagues  (7)

### CLeagueRewardInfo::GetByIndex `@0x119a08b0`
*Flat-vector accessor into CLeagueRewardInfo table.* (server: validation (config read), conf high)
- ƒ valid if 0<=param_1<((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CLeagueRewardSchedule::ForEachActive_PreloadLeague `@0x119a1880`
*Iterates all CLeagueRewardSchedule entries (count via vtable+0x28); for each non-null slot calls FUN_118b27a0(param_1) to preload league/reward managers. Bulk warm-up over the schedule.* (server: client-only (config preload iteration), conf medium)

### CLeagueRewardSchedule::GetByIndex `@0x11845ea0`
*Flat-vector accessor into the CLeagueRewardSchedule table by index.* (server: validation (config read), conf high)
- ƒ valid if 0 <= param_1 < ((*(mgr+0x18)-*(mgr+0x14))>>2); returns *(*(mgr+0x14)+param_1*4)

### CLeagueRewardSchedule::GetInfoManager `@0x11844120`
*Stock CInfoManager singleton accessor for CLeagueRewardSchedule (RegisterAndGetSingleton + FindByName, with fallback default instance).* (server: client-only (CryEngine InfoManager plumbing), conf high)

### CLeagueRewardSchedule::GetSingletonRaw `@0x11845f00`
*Returns the raw singleton pointer (*DAT_12398144) for CLeagueRewardSchedule when param==0; registers singleton on first call.* (server: client-only (InfoManager plumbing), conf high)

### CLeagueRoundSchedule::BuildRoundAndRewardLists `@0x11846750`
*Builds, for a league object (param_1), the sorted list of matching round-schedule entries and reward-schedule entries. Iterates CLeagueRoundSchedule table; keeps entries whose entry+0x14 (owner/leagueType) equals the league's virtual-call result (**(*param_1+0x18))(); inserts into a set keyed by entry+0x18 (round order) via a balanced tree (local_34/puStack_30 = red-black-like node walk comparing at offset 4). Collected round ptrs are pushed to vector param_1[0x2c..0x2e], then binary-insertion-sorted (FUN_118447c0 heap/introsort with FUN_11847310 comparator; threshold 0x10/0x40 elements). Then iterates CLeagueRewardSchedule table; keeps entries where entry+0x14 == param_1[5] (league type) AND FUN_118b2170(param_1[6]) passes; pushes to vector param_1[0x2f..0x31] and sorts with FUN_118472f0 comparator (skipped when param_1[5]==4).* (server: authoritative (server determines which reward/round schedules apply to a league instance; ordering drives reward distribution), conf medium)
- ƒ round kept if entry+0x14 == (**(*param_1+0x18))()  (owner match)
- ƒ reward kept if entry+0x14 == param_1[5] (leagueType) AND FUN_118b2170(param_1[6]) != 0
- ƒ sort depth = log2(count) via loop halving (iVar5>>=1); introsort threshold count<0x11 -> insertion sort, else heap-partition first 0x40
- ƒ league type 4 is special-cased (reward list not sorted/built): if (param_1[5] != 4) ...
- ƒ round vector at param_1[0x2c](begin)/[0x2d](end)/[0x2e](cap); reward vector at [0x2f]/[0x30]/[0x31]; league type at [5], sub-key at [6]

### League::PreloadRewardManagers `@0x118b27a0`
*Loads/warms the CLeagueInfo and CLeagueRewardInfo config managers (FindInfoByKey on both).* (server: client-only (config preload plumbing), conf high)


## forge  (6)

### ForgeView::OnRequireCraftMaterialId `@0x10b5f680`
*Forge handler that, given a selected craftID, looks up CCraftInfo, checks whether the player owns enough of the required craft materials, and pushes the result (event 0x3d) to the UI.* (server: validation/display (client-side affordability preview; server is authoritative on actual craft material consumption), conf medium)
- ƒ craftID = *(param_2+8); early-out if <1.
- ƒ CCraftInfo entry via chunked-2D lookup (mgr+0x20 base, +0x24 count, +0x28 cols, +0x30 base-offset), same pattern as FUN_10a03930.
- ƒ Requirement check uses FUN_1025b060() hunter/stat counts vs *(craft+0x80) (required material threshold): compares single count and sum of two counts against *(craft+0x80).
- ƒ local_10 (owned-material total) = FUN_113f9300(3,matListId,0) + FUN_113f9300(0,...) + FUN_113f9300(2,...) + FUN_113f9300(10,...), where matListId = *(craft+0x5c). Sums owned materials across bag categories {3,0,2,10}.
- ƒ Emits struct {local_14=canFlag, local_10=ownedTotal, ...} via UI event 0x3d.
- $ *(craft+0x80) = required material count for the craft; *(craft+0x5c) = material-list/group id.

### ForgeView::ctor_RegisterModelHandlers `@0x10b5f4f0`
*Constructor for the Forge (crafting) UI controller; registers model-string callbacks: RequireCraftMaterialId, EquipTypeSelcted, EquipSubTypeSelcted, ForgePagePre, ForgePageNext, OnStartForge, OnForgeClose, ForgeChk, RefreshForgeView.* (server: client-only (UI controller construction & callback registration), conf high)

### SmithController::BuildCraftMaterialList `@0x1124fee0`
*For a given craftID, looks up CCraftInfo, iterates its required-material list and, per material, resolves name/icon from CItemBaseInfo (fallback 'test item'/'2.png'), reads owned count, and pushes each entry to the UI via message id 0x3c.* (server: validation/display (client renders craft material requirements + owned counts; server enforces consumption), conf high)
- ƒ CCraftInfo entry via chunked-2D lookup (mgr+0x20/0x24/0x28/0x30).
- ƒ Material list walked at *(craft+0x120)..*(craft+0x124), stride 8 bytes (int pairs): materialItemID=*piVar8, requiredCount=piVar8[1].
- ƒ Owned count = FUN_113fa380(materialItemID). Item name via CItemBaseInfo chunked-2D lookup -> local_5c; icon = *(itemInfo+0xb4).
- ƒ Per-material struct {name[0x20], icon[0x20], requiredCount=local_18, ownedCount=uStack_14, itemID=iStack_10, index=iStack_c} pushed via message id 0x3c.
- $ requiredCount (piVar8[1]) = quantity of each material the craft consumes; *(craft+0x120) is the material-list head.

### SmithController::OnCraftResult `@0x1124ed40`
*Handles the server craft-result: processes the result (FUN_1124f8f0); on success (param_1[1]==0) reads owned craft-credit and pushes event 0x60, advances the 'Smith_crafting' tutorial step at guide id 0x75a2, and fires UI event 0x11a with code 0x3d; on failure fires 0x11a with code 0x56.* (server: client reaction (server already decided craft success/cost; this only updates local UI + owned-credit display), conf medium)
- ƒ Success gate: param_1[1] == 0.
- ƒ On success owned craft-credit = FUN_113fa380(*(item+0x84)) where item = FUN_107ec240(*param_1); pushed via message id 0x60.
- ƒ Tutorial: if current guide == 0x75a2 advance 'Smith_crafting' step.
- ƒ UI event 0x11a payload = 0x3d (success) or 0x56 (failure).

### SmithModel::SendReqCraftWithDiscount `@0x10d260c0`
*Serializes {CraftID, Discount} and sends it to the server as message id 10 (0xa). Client->server craft request carrying a discount value.* (server: client request (SECURITY: discount is client-provided; server must validate/derive it, never accept the client value as the price), conf high)
- ƒ CraftID = (float)*param_2; Discount = (float)param_2[1]; both AS number values (tag 4).
- ƒ Dispatched via FUN_10d1d220(model+0x58, 10, ...). Queue guard on model+0xac at +0x11c/+0x124.
- $ Discount field is client-supplied; server MUST NOT trust it — recompute discounted price authoritatively.

### SmithModel::SendReqStartCraft `@0x10d25f60`
*Serializes a {CraftID} request and sends it to the server as message id 9 (matches eMHGameEventID_AddCraft/BeginCraft family). Client->server craft request.* (server: client request (server authoritative: must validate craft cost/materials before crafting), conf high)
- ƒ CraftID = (float)*param_2 written into an AS-value (type tag 4=number).
- ƒ Dispatched via FUN_10d1d220(model+0x58, 9, ...). Guarded by empty-queue check on model+0xac lists at +0x100/+0x108.


## lottery  (5)

### CActivityLotteryInfo::LookupByIndex `@0x111ff230`
*Chunked-2D config lookup into CActivityLotteryInfo (lottery/gacha activity table); returns the entry for a given index or 0.* (server: config-lookup (lottery activity table; server must own draw odds/rewards, client uses same table for display), conf high)
- ƒ mgr = CActivityLotteryInfo::GetInfoManager(0,"CActivityLotteryInfo",0).
- ƒ Guard: idx!=-1 && (idx!=0 \|\| mgr[0x30]==0) && mgr[0x28]!=0; k = idx - mgr[0x30]; require 0<=k<mgr[0x24].
- ƒ row = *(mgr[0x20] + (k / mgr[0x28]) * 4); return *(row + (k % mgr[0x28]) * 4).

### CSRLItemLotteryInfo::FindInfoById `@1153ec20`
*Returns the CSRLItemLotteryInfo config entry for a given id (SRL item lottery/gacha table). Standard paged CInfoManager lookup (accessor label in header is CSRLItemLotteryInfo::FindInfoByKey/GetManagers).* (server: authoritative - lottery/gacha draw outcomes and probabilities come from this table; server must roll and grant, never the client., conf high)
- ƒ idx=id-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ item-lottery pool record: item ids, weights/probabilities inside the returned struct

### CSRLMaterialLotteryInfo::FindInfoById `@1153ecc0`
*Returns the CSRLMaterialLotteryInfo config entry for a given id (material lottery pool). Standard paged CInfoManager lookup.* (server: authoritative - material lottery draws must be server-rolled from this table., conf high)
- ƒ idx=id-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- $ material-lottery pool record: material ids, weights inside struct

### CSRLMaterialLotteryInfo::GetManagers `@1153b3e0`
*Singleton accessor / registration for the CSRLMaterialLotteryInfo config table (SRL material lottery/gacha pool). Stock CInfoManager plumbing.* (server: client-only plumbing; underlying table defines lottery material pool., conf high)

### LotteryView::TriggerActivityByStringList `@0x111ffc70`
*For a lottery activity entry (looked up in CActivityLotteryInfo), joins a client-provided list of fixed-width (0x20) strings and fires the entry's UI/flow event (*(entry+0x1c)) with the concatenated argument.* (server: client-only (UI/flow trigger; the lottery draw itself is a separate server-authoritative action), conf medium)
- ƒ Activity index = *param_1; string count = (byte)param_1[1]; strings start at (param_1+5), each 0x20 bytes.
- ƒ Join with separator (&DAT_11d9dc4c/11d9dc4d) between entries; event id = *(entry+0x1c); dispatch via FUN_1112f070(eventId, joinedStr) with mode 0x2a.
- ƒ Only runs if *(entry+0x1c) > 0.


## quench  (5)

### EquipQuenchController::RegisterScriptHandlers `@10999e20`
*Registers equipment-quench (装备淬炼) script handlers: InitModel, CanQuenchEquip, GetQuenchEquipCost, GetQuenchEquipEffect, GetQuenchEquipCompareEffect, ReqEquipQuench, RollBackEquipQuench, GetTipsData (last bound to a data::QuenchEffectMo factory at 1099afa0).* (server: client-only: handler registration. ReqEquipQuench/RollBackEquipQuench mutate equipment and consume currency; cost (GetQuenchEquipCost) and success/effect must be server-authoritative., conf high)

### QuenchBillVO::WriteCostMoney `@10999cb0`
*Trivial helper writing the 'iCostMoney' field into the current quench view/bill object via FUN_104d1550.* (server: client-only: writes a single cost field for display; server owns the actual quench cost., conf high)
- $ iCostMoney = quench operation currency cost (value passed in, server-computed)

### data::QuenchBillMo::ctor `@10999c40`
*Constructor for mh.data::QuenchBillMo TLV model (a quench 'bill'/cost record). Same zero+owner+TLV-init pattern.* (server: client-only: TLV VO scaffold for quench cost data (real cost is server-computed)., conf high)

### data::QuenchEffectMo::ctor `@10999b80`
*Constructor for mh.data::QuenchEffectMo TLV model (a quench effect entry, groups QuenchEffectPropertyMo). Same zero+owner+TLV-init pattern.* (server: client-only: TLV VO scaffold., conf high)

### data::QuenchEffectPropertyMo::ctor `@10999ab0`
*Constructor/initializer for the mh.data::QuenchEffectPropertyMo TLV model object (a single quench effect property row). Zeroes fields [0],[1], stores owner at [6], and if owner!=0 initializes the TLV wrapper.* (server: client-only: TLV VO scaffold. Quench effect property values are server-authoritative config., conf high)


## guild  (4)

### GuildActivityModel::BuildDailyTaskRewardArray `@0x109e27e0`
*Serializes a weekly/daily task activity into weekCount, processingTaskId, and a 'dayRewardArray' where each day holds a rewardItemArray {ItemId,ItemCount} plus FetchCount/CurrentAchieveCount/NeedAchieveCount/entryId/taskDesc. Groups reward entries 3-per-day.* (server: client-only display; counters (FetchCount, CurrentAchieveCount, weekCount) from server task state., conf medium)
- ƒ weekCount = FUN_109d8f20(byte at actData+0x11b1d); processingTaskId = FUN_109d8f20(byte at actData+0x11b19)
- ƒ entry count = *(byte*)(actData+0xad2); entry base = actData+0xae9; stride 0x423; per-entry type byte at (entry-0x15)=='0'
- ƒ day grouping: new day when (idx == idx/3*3) i.e. every 3 entries; puStack_164 advances 6 dwords (0x18) per day
- ƒ FetchCount = FUN_109d8f20(byte at entry-0x16 = entryId); CurrentAchieveCount = FUN_109d8f20(byte at entry-1); NeedAchieveCount = *entry(+0xae9 dword); entryId = byte(entry-0x16)
- ƒ taskDesc = CPet::SetName(entry+0x26); rewardItemArray: ItemId=*puVar10, ItemCount=(short)puVar10[1], count=*(byte*)(entry+0x1a6), stride 2 dwords

### GuildActivityModel::BuildGroupMemberList `@0x109e0250`
*ReqGroupMemberList handler: serializes guild members into 'groupMemberArray' of GUILDMEMBER_CLASS_NAME VOs with paging and celebration/attendance stats (name, level, HRlevel, title, currentP, nCelebrationScore/Reward/Task/PreCelebrationTask, online state, offlineTimeSpan, 64-bit id via _i64toa).* (server: client-only display of server-provided guild member data., conf medium)
- ƒ GroupMemberMaxPageNum = *(guild+0x2a8); GroupMemberCurrentPage = *(guild+0x2a4)
- ƒ guildersCount = vtbl+0x18; m_nOnlineGuildersCount = vtbl+0x1c
- ƒ per member: level_member=vtbl+8; HRlevel_member=vtbl+0x3c; currentP=vtbl+0x14; nCelebrationScore=vtbl+0x18; nCelebrationReward=vtbl+0x1c; nCelebrationTask=vtbl+0x34; nPreCelebrationTask=vtbl+0x38; 64-bit uid=vtbl+0x20 (_i64toa base 10)
- ƒ state: online=vtbl+0x10; if offline offlineTimeSpan = max(0, now - member[0x25])

### GuildActivityModel::RegisterHandlers `@0x109dfac0`
*Registers the guild activity/guilder-task model command table: InitModel, ReqGroupMemberList, ReqGuildActivityInfo, ReqGuildDetailInfo, ReqGuilderInfo, GetLocalGuilderActivityInfo, GetGuilderTaskInfoById, AcceptGuilderTaskById, GiveUpGuilderTaskById, FinishGuilderTaskById, GetSpecialTaskReward, GiveUpHiddenLevel, EnterHiddenLevel. Wires three sub-listeners at the end.* (server: validation/authoritative: Accept/GiveUp/FinishGuilderTaskById and GetSpecialTaskReward drive server-side task-state and reward grants; server must own completion validation and reward payout., conf high)
- $ GetSpecialTaskReward -> server reward grant (amount server-defined)

### TdrText_GuildFullInfo_Dump `@10341cc0`
*TDR text dumper for the full Guild/Clan info struct. Rich economy state: fund, resources A-D (daily/weekly/max), commerce boats, commerce buffs, celebration scores. Reveals guild struct layout. Enforces array-count sanity (returns -6 if <0, -7 if over cap).* (server: authoritative: this struct holds guild currency (fund) and resource balances/caps the server must own; array-count bounds (10 boats, 5 buffs) are server-enforced validation limits. This function is the client/debug text dump of it., conf high)
- ƒ [ullId] = param_1[0..1] (u64 @0x0, '%I64u')
- ƒ [szName] = param_1+2 (@0x8)
- ƒ [iIcon] = param_1[0x10] (@0x40)
- ƒ [szNote] = param_1+0xb (@0x2c)
- ƒ [iLevel] = param_1[0x88] (@0x220)
- ƒ [iExp] = param_1[0x89] (@0x224)
- ƒ [iRepute] = param_1[0x8a] (@0x228)
- ƒ [iFund] = param_1[0x8b] (@0x22c)
- ƒ [iArena] = param_1[0x8c] (@0x230)
- ƒ [iPlot]=0x8d, [iResA]=0x8e, [iResB]=0x8f (@0x234/0x238/0x23c)
- ƒ [iGuildersCount]=0x90, [iOnlineGuildersCount]=0x91, [iGuildersAvgLevel]=0x92, [iJoinLevel]=0x93
- ƒ [bDepotOpenFlag] = *(u8)(param_1+0x94) @0x250 ('0x%02x')
- ƒ [ullFundMax] = u64 @0x251, [bHallLevel]@0x259, [bRecruitingLevel]@0x25a, [bResourcingLevel]@0x25b, [bTradingLevel]@0x25c, [bTrainingLevel]@0x25d
- ƒ [iGuilderCountMax] @0x25e
- ƒ [ullFundDaily] u64 @0x262, [ullFundWeekly] u64 @0x26a
- ƒ [ullCommodityUnlock1] @0x272, [ullCommodityUnlock2] @0x27a, [ullCommodityUnlock3] @0x282
- ƒ [iResC]@0x28a, [iResD]@0x28e
- ƒ [iResADaily]@0x292, [iResBDaily]@0x296, [iResCDaily]@0x29a, [iResDDaily]@0x29e
- ƒ [iResAWeekly]@0x2a2, [iResBWeekly]@0x2a6, [iResCWeekly]@0x2aa, [iResDWeekly]@0x2ae
- ƒ [iResAMax]@0x2b2, [iResBMax]@0x2b6, [iResCMax]@0x2ba, [iResDMax]@0x2be
- ƒ [iCelebrationScore]@0x2c2, [iCelebrationTaskA..D]@0x2c6/0x2ca/0x2ce/0x2d2, [iCelebrationReward]@0x2d6, [iDailyCelebrationScore]@0x2da
- ƒ [iCommerceBoatCount]@0x2de (validate: <0 -> -6, >10 -> -7)
- ƒ [astCommerceBoats] array @0x2e2, count=@0x2de max 10, per-elem via FUN_103407f0
- ƒ [iSelectBoatsId]=param_1[0xd9], [dwGuildWarHistoryInfo]=param_1[0xda], [iBuffCount]=param_1[0xdb] (validate <0 ->-6, >5 ->-7)
- ƒ [astCommerceBuffInfo] array @param_1+0xdc, count=param_1[0xdb] max 5, per-elem via FUN_10340ba0
- $ iFund/ullFundMax/ullFundDaily/ullFundWeekly = guild currency (fund) balance & caps
- $ iResA-D + daily/weekly/max = guild resource currencies with periodic caps
- $ ullCommodityUnlock1-3 = commerce/commodity unlock bitmasks or ids


## monster-card  (4)

### MonsterCardExchangeView::BuildCurTabDataVO `@0x109fdfe0`
*Builds the current MonsterCard tab data VO (type==1): curSeriesNum, curCardType, cardGroupImageUrl, arrSeries, arrCardEntry (MonsterCardEntryVo per monster), and arrRewards (BaseItemVo list). Uses CIllustrateBookInfo::CollectByCategory to gather cards.* (server: client-only (illustration/card-collection display; rewards shown are definition data), conf medium)
- ƒ Card book manager at (uiMgr+0x2b1c). Series count = FUN_109d4570(); per-series record = FUN_109fdd40(i), included only if *(rec+0x44)!=0.
- ƒ MonsterCardEntryVo: imageUrl = entry+0x18; monsterId = entry[4]; monsterName = entry+5; (&DAT_11dbdc0c field) = FUN_11537410(entry[4]) [collected/owned flag].
- ƒ arrRewards BaseItemVo: itemID = rewardVec[5][i*2]; count = rewardVec[5][i*2+1]; name via FUN_10540d00(itemID)->+0x14. Count of rewards = ((rewardVec[6]-rewardVec[5])>>3).

### MonsterCardExchangeView::BuildExchangeDataVO `@0x109fe5d0`
*Builds the MonsterCard exchange-preview VO (type==1): cost items, owned counts, gain items, owned credit, and cost amount for the selected series/card-type exchange.* (server: validation/display (client previews the exchange cost; server must verify credit/items and perform the exchange authoritatively), conf high)
- ƒ arrExchangeCostItem: BaseItemVo list from costCfg (iVar5) at *(cfg+0x14)..*(cfg+0x18), stride 8: itemID=*(base+i*8), count=*(base+i*8+1). Owned count per cost item = FUN_113fa380(itemID) -> emitted into arrExchangeCostItemOwnNum.
- ƒ arrExchangeGainItem: BaseItemVo list from gainCfg (FUN_11809ca0-derived) same 8-byte stride layout.
- ƒ ownCreditNum = player->vfunc[0x244]() (current owned exchange credit).
- ƒ costNum = *(seriesCfg+0x48) (credit cost of the exchange).
- ƒ seriesName = seriesCfg+0x18; cardTypeName = player+5; imageUrl = seriesCfg+0x1c.
- $ costNum = *(seriesCfg+0x48) exchange credit price; arrExchangeCostItem lists required item ids+counts; ownCreditNum is player's current credit balance (for affordability display).

### MonsterCardExchangeView::RegisterMessageHandlers `@0x109fde80`
*Registers message handlers for the MonsterCard exchange view: ReqCurTabData/ReqReward/ReqExchangePhyCard/ReqExchangeData -> FUN_109fdfe0, FUN_109fec60, FUN_109feb30, FUN_109fe5d0.* (server: client-only (UI message-routing table registration), conf high)

### MonsterCardResearchView::RegisterMessageHandlers `@0x109fbd40`
*Registers AS3<->C++ message handlers for the MonsterCard research/lottery tab view: requests ReqCurTabData/ReqResearch/ReqRefresh and responses AS2C_GetCurTabData/AS2C_GetResearchData/AS2C_GetLotteryItemListByMonsterType, binding handlers FUN_109fbf30, FUN_109fc040, LAB_109fc550, FUN_109fc6a0, FUN_109fc7b0, FUN_109fc880.* (server: client-only (UI message-routing table registration), conf high)


## item-decompose  (4)

### CDecomposeUI::RegisterModelHandlers `@0x108f07e0`
*Registers flash/UI message handlers for the item-decompose (salvage) panel. Same FUN_100b62c0 + FUN_108f0ae0 binding pattern as FUN_108ef270. Handler map: InitModel->FUN_108f0980, OnDecompose->DAT_108f09f0, OnCancel->DAT_108f0a00, OnContinue->DAT_108f0a10, OnEnd->DAT_108f0a20.* (server: client-only (UI event-binding plumbing)., conf medium)

### CItemDecomposeDef::ctor `@0x1177efb0`
*Def-object constructor: initializes intrusive list head at +0x10/+0x14 to self, registers type name 'ItemDecomposeDef'. Stock boilerplate.* (server: client-only plumbing, conf high)

### CItemDecomposeDef::ctor_dup `@0x11780c90`
*Duplicate def-object ctor registering 'ItemDecomposeDef' (second copy, likely a different translation unit). Stock boilerplate.* (server: client-only plumbing, conf high)

### CItemDecomposeInfo::GetRecordById `@0x11599df0`
*CInfoManager sparse-array accessor: returns the CItemDecomposeInfo config record pointer for index param_1 (item decompose/salvage rules).* (server: validation/authoritative data source: decompose output tables; server reads to compute salvage results, conf high)
- ƒ standard mgr sparse lookup (same shape as FUN_11599ce0)


## legend-upgrade  (4)

### CLegendPearl::CanUpgrade `@0x117e3be0`
*Validation: for a CLegendPearlItemInfo record at index param_1, reads its field +0x1C0 (an already-applied/flag value), then iterates all CLegendUpgrade entries; for each valid entry it calls FUN_117e1b00(param_1). If an applicable upgrade exists it returns 1 when +0x1C0==0 (not yet upgraded) and 0 when +0x1C0!=0 (already upgraded); returns 0 when no entry applies.* (server: validation: server-side eligibility check for legendary-pearl upgrade (must confirm not already upgraded, +0x1C0==0), conf medium)
- ƒ pearlField = *(pearlRec + 0x1C0)
- ƒ for idx' in [0, CLegendUpgrade.count): if entry valid and FUN_117e1b00(param_1)!=0 -> return (pearlField==0) ? 1 : 0
- ƒ else return 0

### CLegendUpgrade::GetManagers `@0x117e2fe0`
*Stock CInfoManager singleton accessor/registrar for the CLegendUpgrade config table (legendary equipment upgrade). Cache DAT_123945c0, placeholder DAT_1239476c.* (server: client-only plumbing (config-manager singleton), conf high)

### CLegendUpgrade::GetSingletonRaw `@0x117e3ae0`
*Lightweight singleton getter for CLegendUpgrade (*DAT_123945c0) after first-call registration.* (server: client-only plumbing, conf high)

### CLegendUpgrade::GetValueByIndex(vector) `@0x117e3a10`
*Contiguous-vector accessor into CLegendUpgrade: returns element param_1 (base *(mgr+0x14), count (mgr[0x18]-mgr[0x14])/4).* (server: authoritative data source: legend-upgrade table lookup, conf high)
- ƒ count=(*(mgr+0x18)-*(mgr+0x14))>>2; if 0<=idx<count return *(*(mgr+0x14)+idx*4)


## item  (4)

### CItemDecomposeUIModel::BuildDecomposeResult `@10959760`
*Builds the item-decompose preview/result VO. Emits three source lists (itemBagList, itemStoreList, itemMailList) of DECOMPOSE_ITEM_VO entries and a bIsBonus flag. Reads candidate items from bag (base+0), store (base+0x64), and mail (playerObj+0x70) containers.* (server: client-only display builder; the actual item removal and reward grant happen server-side on ReqItemDecompose. Server must validate quantities, bind-type and rarity., conf medium)
- ƒ each list built by walking a container array (count = (-basePtr>>2) or (end-begin)>>2, stride 4 = item pointers)
- ƒ per item: itemID = *puVar1 (=&DAT_11dbb0b4 key), count = puVar1[1], m_nBindType = puVar1[2]
- ƒ asset (icon) = itemDef+0xb4 for bag; store: itemDef+0xb4; mail: iVar6+0xb4
- ƒ m_nRareType = itemDef+0x13 (bag) / +0x4c (store/mail)
- ƒ itemDef resolved via FUN_10254130(itemID)
- ƒ bIsBonus flag emitted from uStack_b4
- $ m_nBindType (bound/unbound) and m_nRareType (rarity) gate what is decomposable and the yield tier

### ItemListVO::BuildFromBagByMaterial `@1097fd80`
*Builds an ITEM_VO itemList view-object (param_5==2) by scanning the player's bag across bag types {0,2,10} and matching items whose base-item id equals a target material id (from FUN_11669250 -> +0x10). Writes per-item VO fields: id, count, asset, collumn(slot), isBind, m_nBindType, m_nFactItemLevel, and if transmogrify-capable m_nTransmogrifyItemId + quench fields.* (server: client-only: read-only bag view builder; bag contents are server-authoritative., conf medium)
- ƒ bag-type set auStack_18 = {0, 2, 10}; per type slotCount = FUN_113f92a0(type); item = FUN_113f9bb0(type, slotIdx)
- ƒ match: candidate base id (from op-struct +0x10 via FUN_11669250) == target; count via item->vtbl[+0xc]()
- ƒ isBind = (piVar3[8] != 0); m_nBindType = FUN_116693d0(); m_nFactItemLevel = item->vtbl[+0x18]()
- ƒ quench block only if FUN_116698a0()!=0 (transmog-capable): m_nTransmogrifyItemId = piVar3[0x7d]; item def via FUN_1052bdd0; m_bCanQuench = (def+0x28c != 0); m_nMaxQuenchLevel = def+0x290; m_nQuenchLevel = (short)piVar3[0x7e]

### ItemListVO::BuildFromBagByTypeFilter `@109803b0`
*Builds an ITEM_VO itemList (param_5==5) scanning bag types {0,2,10} filtered by item category fields (rareType iStack_78 at def+0x34, typeNormal piStack_74 at def+0x38, typeSub iStack_a0/iStack_7c at def+0x3c). Emits richer VO incl. m_typeNormal, m_typeSub, m_nRareType.* (server: client-only: bag view builder with category filter; contents server-authoritative., conf medium)
- ƒ bag types {0,2,10}; slotCount=FUN_113f92a0(type); item=FUN_113f9bb0(type,slot)
- ƒ filter: (iStack_78<0 \|\| iStack_78==def+0x34) && (piStack_74<0 \|\| piStack_74==def+0x38); typeSub match: if iStack_7c==-1 use iStack_a0==def+0x3c; else if iStack_a0>=0 && iStack_a0!=def+0x3c && iStack_7c>=0 use iStack_7c==def+0x3c
- ƒ sentinel -0x21524151 (0xDEADBEAF-like) marks 'no filter'; def field offsets +0x10(id) +0x34(rareType) +0x38(typeNormal) +0x3c(typeSub) +0xb4(asset) +0x4c(rareType alt)
- ƒ quench fields identical to 1097fd80 (m_bCanQuench def+0x28c, m_nMaxQuenchLevel def+0x290, m_nQuenchLevel (short)piVar3[0x7e]); m_nRareType from item->vtbl[+0x2c]() when transmog-capable else def+0x4c

### MHUI::PushItemFactLevelAndTransmogInfo `@10860b90`
*Client marshaller: given an item-instance pointer (in_stack_00000010), resolves the item's static definition and pushes computed 'factual' item level, factual rank, rare type, and (if transmogrify/quench supported) transmogrify item id and quench level to AS3.* (server: client-only (reads server-replicated item state and shared static tables), conf medium)
- ƒ Type-tag test pattern used throughout chunk: (*(u32)(inst+off) & 0x8f)==<tag> selects a Lua/variant value slot; e.g. off+0x34 tag 2 -> byte at +0x38; off+0x64 tag 2 -> byte at +0x68; off+0x7c tag 5 -> u64 at +0x80.
- ƒ Reads inst+0xac (flags; bit6 = has-owner-object at inst+0xa8), inst+0xb0/0xb4/0xb8.
- ƒ Def resolution: cVar2!=0 -> FUN_107cb630(); else FUN_10858a70(); alt path FUN_10858670(u64,uVar1).
- ƒ m_nFactItemLevel = def->vfunc(+0x18)(); m_nFactRank = FUN_11669840(); m_nRareType = def->vfunc(+0x2c)().
- ƒ If FUN_116698a0()!=0 (transmog/quench enabled): m_nTransmogrifyItemId = def[0x7d]; m_nQuenchLevel = (short)def[0x7e].


## weapon  (4)

### MHUI::BuildWeaponDeriveTreeData `@1087c070`
*Builds the weapon-derive (weapon evolution/forge tree) node data for the UI. For each derive node emits weaponID, isForge, isAcquired, parentNodeID into a weaponArr, sourced from the CWeaponDerive static manager. Uses SKILL_VIDEO_WEAPON_DERIVE VO class names for the presentation objects.* (server: client-only (isAcquired reflects server-owned progress; tree topology is static data), conf low)
- ƒ Manager via CWeaponDerive::GetManagers / CInfoManager::FindByName("CWeaponDerive").
- ƒ Per node: weaponID, parentNodeID, boolean isForge (craftable), boolean isAcquired (player already owns/unlocked).

### MHUI::BuildWeaponTalentSkillData `@10879150`
*Data provider for the weapon-talent-skill panel. Reads the active-talent list and, per talent, pushes status/level info plus the full per-level upgrade cost table (level-up value, credit cost, level cap, and required material items with owned counts) to AS3. Also surfaces the player's current bound and unbound money for affordability checks.* (server: validation-mirror / client-only (server computes and validates the actual talent upgrade; this recomputes costs client-side for the confirm dialog), conf medium)
- ƒ Talent entry (piVar8): [-1]=status, [0]=currentLevel, [1]=maxLevel, [2]=talentID, [3]=talentIndex, [7]=unlockLevel.
- ƒ Per-level upgrade record (puVar9, iterated): [-3]=levelupValue, [-2]=levelupCost (currency), [-1]=levelLimit (level cap for this step).
- ƒ Material sub-records per level step: [0]=itemID, [1]=itemCounts (required); currentItemCounts = FUN_113fa380(itemID) (player's owned amount of that item/credit).
- ƒ roleBindMoney and roleMoney read from player context (piStack_8c chain via FUN_1025b060; talent list at context+0x260e0).
- ƒ Active talent list built via CTalentActiveInfo::BuildActiveTalentList; level-up records enumerated via FUN_112b3940 / detailed via FUN_112b3e60.
- $ levelupCost = currency (money) charged per talent level-up step.
- $ Per-step material requirements: itemID x itemCounts.
- $ roleBindMoney (bound money) + roleMoney (unbound money) are the affordability pools.

### MHUI::RegisterWeaponTalentCallbacks `@10878e40`
*Registers the AS3 callback handlers for the weapon-talent-skill UI: _getActivateTalentData, _getTalentSkillData, _activateWeaponTalentSkill, _unactivateWeaponTalentSkill, _upgradeWeaponTalentSkill (FUN_104d13b0 = AS3 register-native-function).* (server: client-only (the activate/upgrade handlers send requests; server validates and applies), conf high)
- ƒ Handler map: _getActivateTalentData->FUN_10878f20, _getTalentSkillData->FUN_10878f40, _activateWeaponTalentSkill->FUN_10878f60, _unactivateWeaponTalentSkill->FUN_10879000, _upgradeWeaponTalentSkill->FUN_108790b0.

### WeaponMelodyController::RegisterScriptHandlers `@10972de0`
*Registers weapon 'melody/tune' (hunting-horn) script RPC handlers via FUN_104d13b0 and pushes current weaponID into the script model. Binds _GetCurrentWeaponMelodyList, _ChooseMelody, _GetEnforceMelodyList, _GetTuneNameByID.* (server: client-only: UI/script handler registration and weaponID display. Enforcement of melody effects is server-side elsewhere., conf medium)
- ƒ weaponID = player->pet-container(DAT_1202e818+0xd0 ->+0x90)->vtbl[+0xb4]()->vtbl[+0x444](); written via FUN_104d1550("weaponID",...)


## match  (3)

### MatchModel::GetMatchLevelInfo `@1099fb50`
*Handler for _reqMatchLevelInfo: builds ranked-match level/grade info for the UI (grade name, win/loss stats, success rate, current/remain score, remaining vs limit reward count, match rank). Dispatches on a request-type selector float (values 1..4).* (server: client-only (display). Reward counts and scores are read from client-cached match structs mirrored from server., conf medium)
- ƒ Only runs when param_5 == 4. Request-type selector fStack_40 read as float from raw int bits: 0x00000001->1 (1.4013e-45), 0x00000002->2 (2.8026e-45), 0x00000003->3 (4.2039e-45), 0x00000004->4 (5.60519e-45).
- ƒ remainRewardCount (type 1/2): usedCount iStack_38 = (FUN_1156c6b0()==0 ? 0 : FUN_1156c660(5)); limit iStack_34 = *(*(cfg+0x24)+0x6c); remain = iStack_34 - iStack_38 (nRemainRewardCount=remain, nLimitRewardCount=limit).
- ƒ Type 4 branch: totalGames iVar3 = *(stats+0x24); wins iStack_3c = *(stats+0x1c); nTotalNum = wins; succRate fStack_40 = (float)wins / (float)totalGames (only if totalGames>0).
- ƒ Grade band code iStack_44 = *(cfg+0xc); nRemainScore iStack_28 = (score/100 + 1)*100 - score  (score = iStack_44) — score-to-next-100 remainder.
- ƒ nMatchRank written as 0xffffffff (-1) in the placeholder/type1/type2 branches.
- $ nRemainRewardCount / nLimitRewardCount = per-period ranked reward claim quota (limit @ cfg+0x6c)

### MatchModel::GetMatchRankRewardInfo `@109a0760`
*Handler for _reqMatchRankRewardInfo: builds the ranked reward tier info (nLevel, nMedal, and arrItem[5] of nItemId/nCountItem) shown for the player's current match rank. Uses reward-tier config resolved from the player's score/medal, with a fallback tier when the primary lookup fails.* (server: client-only (display). Server grants the actual reward., conf medium)
- ƒ Only runs when param_5 == 1.
- ƒ Primary tier: iStack_3c = FUN_115b7100(*(ctx+0x30), *(ctx+0x10)) where ctx = playerMatchState (*(iVar4)). nLevel=rewardData[0], nMedal=rewardData[1]. arrItem: 5 entries starting rewardData+7, per-entry itemId=piVar5[-5], count=*piVar5 (emit only if both >0).
- ƒ Fallback tier when primary==0: iVar4 = FUN_1099e490(*(ctx+0x30)/100 + 2)  (tier index = score/100 + 2). nLevel=*(iVar4+0x34), nMedal=*(iVar4+0x38). arrItem 5 entries from iVar4+0x50: itemId=piVar5[-5], count=*piVar5.
- $ reward tier fallback index = score/100 + 2
- $ arrItem: up to 5 reward item id/count pairs per tier

### MatchModel::RegisterScriptHandlers `@1099e840`
*Registers the matchmaking/ranked-match model script callbacks (C++ -> Flash/AS bindings) via FUN_104d13b0(name, fnptr). Gated on DAT_1202e818 subsystem being present and flag byte at +0x209 == 0.* (server: client-only (handler registration plumbing)., conf high)


## achievement  (3)

### GoalGuideModel::BuildGoalGuideData `@0x109e4150`
*GetGoalGuideData handler (mode param_5==1): builds 'pageDataList' of achievement groups, each 'GOALGUIDE_VO_CLASSNAME' with the current in-progress goal (groupID, strName, goalValue, curValue, strDesc, rewardAchieveID, rewardValue, itemId, itemNum, strTips, hasRewards) and an achieveList. Uses CPlayer::GetHuntRankOrCount to evaluate current progress vs goalValue.* (server: client-only display; curValue from CPlayer::GetHuntRankOrCount and reward-fetched state (FUN_115350b0) are server-authoritative sources. Actual reward via FetchReward., conf medium)
- ƒ per achievement node: goalValue = node[9]; itemId = node[10]; itemNum = node[0xb]; rewardAchieveID = vtbl+0x18
- ƒ hasRewards set to 1 when an unfetched achievement (FUN_115350b0(id)=='\0') is found
- ƒ curValue = piStack_e8 (server-provided current count); selected goal = first node with node[9] > curValue (else last completed)
- ƒ iterates groups 0..FUN_109e3df0() (group count)

### GoalGuideModel::BuildNextRewardData `@0x109e49e0`
*GetNextRewardData handler (mode param_5==2): finds the next unclaimed achievement in the active group and builds a single 'goalGuideVo' {groupID, strName, strDesc, curValue, rewardAchieveID, rewardValue, itemId, itemNum, hasRewards=1}; writes result presence flag into out param_6.* (server: client-only display; unclaimed determination uses server reward-fetched check FUN_115350b0., conf medium)
- ƒ iterate achievement list; pick first node where FUN_115350b0(rewardAchieveID)=='\0' (not yet fetched)
- ƒ itemId = node[10]; itemNum = node[0xb]; curValue = piStack_40; hasRewards=1
- ƒ out: param_6[1]=2, *(byte*)(param_6+2)=foundFlag

### GoalGuideModel::RegisterHandlers `@0x109e3f50`
*Registers the Goal Guide (achievement guide) model command table: InitModel, GetGoalGuideData (->FUN_109e4150), FetchReward (->FUN_109e4980), GetNextRewardData (->FUN_109e49e0), UpdateAchieveNotice (->FUN_109e4de0), CheckSystemUnlock (->FUN_109e4f70).* (server: validation/authoritative: FetchReward triggers server reward grant for a completed achievement goal; server must validate goal completion and pay out., conf high)
- $ FetchReward -> server grants itemId x itemNum (defined per achievement goal)


## guidebook  (3)

### GuideBookModel::RegisterHandlers `@0x109f0f10`
*Registers the Guide Book model handlers: C2AS_GetAllGuideChapters, C2AS_GetGuideBookDataByID, C2AS_GetReward (->FUN_109f1bb0), C2AS_SetAlreadyOpenGuide, C2AS_IsNeedAutoOpenGuideBook, C2AS_IsShowGuideBook, C2AS_SetChooseWeaponType, C2AS_SetChapterNotNew, C2AS_GetWeaponDesByType, C2AS_GetGuideBookCanReward (->FUN_109f2120).* (server: validation/authoritative: C2AS_GetReward grants the guide-book chapter reward; server must validate chapter completion/eligibility (GetGuideBookCanReward) and pay out. Cross-ref TLV_DOCS/TlvGuideBookData.md., conf high)
- $ C2AS_GetReward -> server grants guide-book chapter reward (items, server-defined)

### GuideBookView::BuildChapterDetailVO `@0x109f14a0`
*Builds GuideBook chapter-detail UI VOs (case type==2): introductionArr (TextDescriptionVo), taskArr (TaskItemVo), rewardArr (RewardItemVo). Shows chapter progress, tasks, and claimable rewards.* (server: client-only (display of server-authoritative task progress and reward-claim state), conf medium)
- ƒ curProgress compared as (iStack_c0 == *(FUN_1170a680()+0x3c)).
- ƒ isWeaponChapter and isHasChooseWeapon (local_a0[2]!=0) emitted as bools.
- ƒ finishActionCount = ppppppiVar7[1]; actionCount = (ppppppiVar7[7]-ppppppiVar7[6])>>2 (element count of an int vector).
- ƒ TaskItemVo: detailDes (string), curCompleteNum = (*taskRec)[8], needCompleteNum = (*taskRec)[6][10].
- ƒ RewardItemVo per index i in [0, rewardCount): getCondition = (float)FUN_11539f30(i+1); rewardID = *(FUN_1180a860()+4); rewardCount = 1 (hardcoded); isHasGetReward = FUN_11539960(i); finishCount = *FUN_1180a860().
- ƒ reward loop count = (*(rewardMgr+0x20) - *(rewardMgr+0x1c)) >> 3.
- $ rewardCount is always displayed as 1 per reward entry (single-item rewards).

### GuideBookView::BuildChapterListVO `@0x109f1210`
*Builds the AS3 UI VO array 'chapterArr' of mh.view.GuideBook.ChapterItemVo for the GuideBook (progression/tutorial reward book). Iterates chapter records at (guideMgr+0x2b28) and emits per-chapter {chapterID, chapterName, isOpen, isNew, isCanGetReward}.* (server: client-only (renders server-provided guidebook state; no mutation or cost validation here), conf high)
- ƒ Guide manager reached via DAT_1202e818->[0xd0]->[0x90]->vfunc[0xb4]() then +0x2b28 = chapter container.
- ƒ Chapter array walk: base=*(cont+0x10), end=*(cont+0x14), stride = 0xf ints (0x3c bytes).
- ƒ chapterID = *puVar5 (record[0]); isOpen = *(record+0xd) (byte); isNew = (*(record+0xf) == 0) (byte, inverted); isCanGetReward = FUN_1153a0a0() (per-record can-claim check).
- ƒ chapterName resolved via FUN_100e5aa0 (localized string lookup).


## equipment-levelup  (3)

### CEquipLevelUpInfo::GetRecordById `@0x116c49e0`
*CInfoManager sparse-array accessor returning the CEquipLevelUpInfo record for index param_1.* (server: authoritative data source: equip level-up curve/cost table lookup, conf high)

### CEquipLevelUpInfo::LookupMap0x108ByKey `@0x117b6e00`
*Identical to FUN_117b6d70 but over the second map rooted at record+0x108 (sentinel +0x104). Same node layout and lower-bound semantics keyed by param_2, returning value(+0x14).* (server: authoritative data source: second equip level-up threshold map (e.g. the inverse curve), conf high)
- ƒ tree root = *(rec + 0x108), sentinel = rec+0x104
- ƒ same lower_bound-by-key(+0x10) -> value(+0x14) logic as FUN_117b6d70

### CEquipLevelUpInfo::LookupMap0xf0ByKey `@0x117b6d70`
*Looks up CEquipLevelUpInfo record for index param_1, then performs a std::map / red-black tree lower-bound over the tree rooted at record+0xF0 keyed by param_2. Returns the mapped value (+0x14) of the entry with the greatest key(+0x10) not exceeding param_2; 0 if none. Node layout: left=+0x08, right=+0x0C, key=+0x10, value=+0x14.* (server: authoritative data source: maps an equip level/EXP threshold (param_2) to a level-up value; server must use same table, conf high)
- ƒ tree root = *(rec + 0xF0), sentinel = rec+0xEC
- ƒ walk: if key(node+0x10) < param_2 go right(+0xC) else go left(+0x8), remember candidate
- ƒ return value(+0x14) of best node with key <= param_2 (lower_bound-style)


## currency  (3)

### CCurrencyCfg::LoadFromXml `@0x11a68990`
*XML reader for a currency-definition config record. Defines each in-game currency: its CurrencyID, the player-attribute it maps to (AttrID), display Name/Icon/Tips, and an SPId. This is the authoritative currency registry.* (server: authoritative (server currency registry; every currency add/remove must resolve through CurrencyID->AttrID defined here), conf high)
- ƒ CurrencyID=+0x10, AttrID=+0x14, Name(string via CPet::SetName)=+0x18(str obj), Icon(string via getter vtable+0x24)=+0x1c, Tips(string)=+? , SPId=+0x38
- ƒ AttrID at +0x14 links a currency to the player-stat/attribute slot that holds its balance
- $ defines the set of currencies and their balance attribute mapping (AttrID) — foundational for all currency mutation validation

### CCurrencyInfo::GetInfoManager `@10848370`
*Singleton accessor for the CCurrencyInfo static-data manager (currency-type definition table). Returns cached manager, else looks it up by name via CInfoManager::FindByName("CCurrencyInfo"), else lazily initializes a fallback default (FUN_10848b50) guarded by DAT_123bf3b4 bit0.* (server: client-only (info-manager plumbing; same table exists server-side), conf high)
- ƒ DAT_123bf3b4 & 1 guards one-time fallback init; fallback object = &DAT_123bf3f0.

### CShopUI::PushCurrencyAndResetInfoToAS3 `@10845600`
*Client-side marshaller that reads the local player's six secondary-currency balances and the current shop-reset schedule, then pushes them into an ActionScript3 data object (FUN_104d1550 = AS3 setInt property) for the shop / currency panel. Values are queried from the client player object; server remains authoritative for the underlying balances.* (server: client-only (display marshalling; the balances and reset times originate from server-replicated player state), conf medium)
- ƒ Player object chain: DAT_1202e818 -> +0xd0 -> +0x90 (vtable call +0xb4) -> player context; requires context+0x2afc != 0 (shop sub-object present) before reading currencies.
- ƒ Each currency read via FUN_114b7530(idx) with idx 1..6 mapped in order: 1=currencyFarmValue, 2=currencyGuildValue, 3=currencyClanMoney, 4=currencyClanMoneyPvp, 5=currencyCatMoney, 6=currencyPvpMoney (idx passed to FUN_114b7530 selects the currency slot).
- ƒ shopLibType source: uVar3 = DAT_1200acdc by default, or *(param_3[0]) when param_4==0 (caller-provided shop lib type); resolved via FUN_114b7910(uVar3).
- ƒ nextResetTime = FUN_11182210(shopLibType) high dword; resetBindCredit/resetCredit obtained from FUN_114b7650(&local_2c) -> FUN_11720a30 (local_28=resetCredit=local_2c, _param_4=resetBindCredit=local_28 pre-swap).
- ƒ currentTime = FUN_111f8d20() (64-bit server/game time, low dword pushed).
- ƒ context+0x2afc = shop/library sub-object pointer (gate for all currency reads).
- $ Currencies surfaced: currencyFarmValue, currencyGuildValue, currencyClanMoney, currencyClanMoneyPvp, currencyCatMoney, currencyPvpMoney (six secondary currencies beyond primary gold/credit).
- $ resetBindCredit / resetCredit = credit refunded or granted at shop reset (bound vs unbound credit).


## player-property  (3)

### CPlayerPropertyUI::BuildOtherPlayerPropertyData `@108d6ea0`
*'GetOtherPlayerPropertyData' handler: builds another player's full stat + equipment VO (hp/endure/attack/defense/elemental atk & tolerances/level/sex/armor level, star-level detail, title privileges, and the other player's equipment item list).* (server: client-only, conf medium)
- ƒ Stat block puVar5 fields: curhp=puVar5[0], endure=puVar5[1], curendure=puVar5[2](float), Attack=puVar5[3]? level=puVar5[4], defense=puVar5[5], defendeffect=(float)(int)puVar5[7]/DAT_11de9a20, luck fields puVar5[8..9], elemental fire/water/thunder/ice/dragon/poison = puVar5[10..0x11], tolerances puVar5[0x12..0x16]
- ƒ weaponAttackContains* flags = individual bits of puVar5[0x5ec]: Water bit0, Fire bit1, Thunder bit2, Dragon bit3, Ice bit4, Poison bit6, Sleep bit7, Palsy bit8
- ƒ hrLevel=puVar5[0x5e0], (rank fields) puVar5[0x5e1..0x5e3]=showLevel, sex=puVar5[0x57], ammorLevel=puVar5[0x59]
- ƒ privilege/star detail: FUN_108d5a80(i, puVar5[0x5e5..0x5eb]) for i=0..6 (per-star privilege values)
- ƒ Equipment loop: 0x18 slots, per-slot stride 0xe4 bytes; emits item VO fields identical to BuildItemData (m_nSellPrice, m_nBindType, m_nQuenchLevel@+0xa0, m_nColorIndex@+0xac, m_nTransmogrifyItemId@+0x9c, etc.); m_bIsLocal=0
- ƒ If a weapon (slot type flags) has iVar6==5, all weaponAttackContains* forced 0

### CPlayerPropertyUI::RegisterDataGetters `@108d2d20`
*Registers the read-only property/currency data getters and buff-check helpers for the player-property UI.* (server: client-only, conf high)
- ƒ Only runs when arg==1. Registers: GetPlayerPropertyData->FUN_108d5ef0, GetOtherPlayerPropertyData->FUN_108d6ea0, GetPlayerTitleData->FUN_108d7da0, GetTitlePropertyListData->FUN_108d8370, GetCurrencyData->FUN_108d8660, GetCatFoodData->FUN_108d8b00, _checkEquipItemColor->FUN_108dba40, _requestEquipItemColor->FUN_108db8d0, _checkOtherEquipItemColor->FUN_108dbda0, _requestOtherEquipItemColor->FUN_108dbf30, IsSelfHasBuffer->FUN_108d5bb0, IsSelfHasBuffers->FUN_108d5d60, IsSelfHasBufferGene->FUN_108d5c70

### CPlayerPropertyUI::RegisterHandlers `@108d1ef0`
*Registers the player-property / title / VIP-recharge / equip-plan dispatch table. Pure wiring of request names to handlers.* (server: client-only, conf high)
- ƒ Registers (subset): InitModelEx/InitModel, IsNormalLevelMax->FUN_10a039d0, TitleCarry->FUN_10a03a50, HideTitle->FUN_10a03ac0, TitleProperty_OK->LAB_10a03b20, ReChargeVIP->FUN_10a03b50, StartVIP->FUN_10a03b90, ReChargeGrownup->FUN_10a03bd0, ReChargeEarning->FUN_108dabb0, DeleteEquipPlan->FUN_108db130, SaveEquipPlan->FUN_108d9710, StartPreviewEquip->FUN_108d9790, StopPreviewEquip->FUN_108d97c0, GetEquipPreviewDeltaData->FUN_108d9510, UblockPlanSlot->FUN_108db2a0, GetEquipPlans->FUN_108d9570, EquipPlan->FUN_108db020, EditEquipPlan->FUN_108dad00, DeleteEquipSlot->FUN_108d3020, ClearEditRangeNotMatch->FUN_108dae00, RefreshPlayerMoney->FUN_108d2f90, saveTitleShowSetting->FUN_108d2b80, and a nested GetXxx group registered via FUN_108d2d20


## forge-craft  (3)

### CForgeUI::BuildCraftListVO `@0x108efeb0`
*InitModel handler (expects 1 arg: in_stack_00000014==1) that builds the full craftable-item list VO ('forgeitemdataCacheList'). Iterates all craft recipes (count FUN_10876bc0, each FUN_10876b30), skipping hidden ones, and emits per-recipe PET_FORGE_ITEM_DATA_CLASS entries with an embedded PET_MATERIAL_ITEM_DATA_CLASS material list. Ends by calling CCraftInfo::BuildCraftLists.* (server: client-only (UI list of craft recipes mirrored from client config); server owns the authoritative recipe table and must validate craftID/materials/money on commit., conf medium)
- ƒ Recipe count = FUN_10876bc0(); recipe[i] = FUN_10876b30(i). Skip entry when recipe[0x11]==1 (byte offset 0x44 flag: hidden/locked).
- ƒ canCraft = (bool)FUN_1124f6a0(recipe); craftID = virtual getter recipe->vtbl[0x18/4]().
- ƒ Recipe struct int-index -> byte-offset fields: PetType = recipe[0x14] (0x50); PetEquipType = recipe[0x12] (0x48); PetEquipSeries = recipe[0x13] (0x4c); EquipLevel = recipe[0x15] (0x54); EquipProperty = recipe[0x16] (0x58); nMoney = recipe[0x20] (0x80); resultItemId(&DAT_11dbb0b4) = recipe[0x17] (0x5c).
- ƒ nLevelLimit = *(itemCfg+0x110) where itemCfg = FUN_10254130(recipe[0x17]) and *(itemCfg+0x34)==4; else nLevelLimit branch emits 0/empty.
- ƒ Material list: iterate recipe material array [recipe[0x48]..recipe[0x49]) i.e. bytes [+0x120..+0x124), stride 2 ints: *piVar6 = materialId(&DAT_11dbb0b4), piVar6[1] = nNeedItemNum.
- ƒ Icon/desc fallback when itemCfg==0: strItemIconName='item_icon_42', strItemDescrbie='ceshi'.
- $ nMoney (craft currency cost) @ recipe+0x80
- $ resultItemId @ recipe+0x5c
- $ EquipLevel @ recipe+0x54, nLevelLimit @ itemCfg+0x110
- $ material (id, nNeedItemNum) pairs at recipe+0x120..+0x124

### CForgeUI::BuildSelectedForgeItemVO `@0x108ef420`
*Handler (RequireCraftMaterialId, expects 3 args: in_stack_00000014==3) that builds the detail VO for the currently-selected forge/craft item. Populates full weapon/armor stat block, a 'forgematerialList' of required materials with owned counts, and a 'forgeOtherInfo' block containing the affordability check (bReallyCanForge/bMoneyIsEnough/nHaveNum/nMoney).* (server: client-only preview; the bMoneyIsEnough / material-count checks it computes are a client-side affordability PREVIEW. Server must independently validate currency and material inventory before consuming them on craft/forge commit., conf medium)
- ƒ Item resolved via FUN_107ec240(itemInstance) -> FUN_10254130(cfg+0x5c) -> stat struct iVar5.
- ƒ Item type check: *(iVar5+0x34)==4 => weapon branch (emits weapon slash + elemental fields); else armor.
- ƒ Weapon/armor stat offsets in iVar5: m_nDefense +0x128, m_nLife +0x12c(300), m_nWeaponCurrentSlash +0x140, Slash_Red +0x144, Orange +0x148, Yellow +0x14c, Green +0x150, Blue +0x154, White +0x158, Purple +0x15c, Copper +0x160; EAttack Water +0x170 Fire +0x174 Thunder +0x178 Dragon +0x17c Ice +0x180; Resistance Water +0x194 Fire +0x198 Thunder +0x19c Dragon +0x1a0 Ice +0x1a4; PoisonAdd +0x184 SleepAdd +0x188 NarcosisAdd +0x18c DynamiteAdd +0x190(400). m_nWeaponMaxSlash = *(FUN_116cc020()+0x40).
- ƒ Owned-count formula (repeated pattern): count = FUN_113f9300(0,itemId,0) + FUN_113f9300(2,itemId,0) + FUN_113f9300(10,itemId,0)  — sum of the item quantity across three inventory containers (container type ids 0, 2, 10).
- ƒ forgeOtherInfo: nHaveNum = sum over the recipe's own material (FUN_113f9300 across containers 0/2/10); nMoney = *(cfg+0x80).
- ƒ Per-material loop over recipe material array [*(iVar4+0x120) .. *(iVar4+0x124)), stride 2 ints: entry[0]=materialId, entry[1]=nNeedItemNum; nSelfHasItemNum = FUN_113f9300(0,id)+FUN_113f9300(2,id)+FUN_113f9300(10,id).
- $ nMoney (forge/craft currency cost) @ cfg+0x80
- $ material requirement pairs (materialId, nNeedItemNum) at recipe+0x120..+0x124
- $ owned inventory counts summed across containers 0,2,10 via FUN_113f9300

### CForgeUI::RegisterModelHandlers `@0x108ef270`
*Registers the flash/UI message handlers for the pet-equipment forge/craft panel. Binds 5 named UI callbacks via FUN_100b62c0 (create handler slot) + FUN_108f0580 (install). Names in registration order: InitModel->FUN_108efeb0, RequireCraftMaterialId->FUN_108ef420, PetTypeSelcted->DAT_108efe30, OnStartForge->FUN_108efe40, ForgeItemLevel->DAT_108ef410.* (server: client-only (UI event-binding plumbing)., conf medium)


## equipment-upgrade  (2)

### EquipUpgradeView::BuildEnforceDataVO `@0x109f3df0`
*Builds the equipment enhance/upgrade (enforce) UI data block (param_5==3): source-item stats plus a 'destEquipArray' of candidate upgrade targets, each with full cost/requirement fields. This is the client mirror of the server's upgrade cost table.* (server: validation/display (client shows server-provided upgrade costs & requirements; server must recompute and enforce upgradeMoney/craft cost & requirement gates on the actual upgrade action), conf high)
- ƒ Top-level fields: roleLevel = CPlayer::GetHuntRankOrCount(); roleHunterStarLv = playerObj->vfunc[0x18]() + (FUN_1025b060()+FUN_1025b060()); sourceRare = item->vfunc[0x2c](); itemLevel = item->vfunc[0x18](); ItemRank = FUN_11669840(); bPointType = 1.
- ƒ Per destEquip record walked at (iStack_20c+0x1c)..(+0x20), stride 0xb0 bytes.
- ƒ Result array entries laid out at cursor iVar4 (base+0x5c), advancing +0x88 per entry then +0x2c inner. Field offsets relative to iVar4 (the +0x5c anchor of each entry):
- ƒ equipID = *(e-0x50); enforceRequirement = *(e-0x58); hunterstarRequirement = *(e-0x54); equipRare = *(e-0x38); itemLevel = *(e-0x34); equipCounts = *(e-0x30); upgradeMoney = *(e-0x2c); currentMoney = *(e-0x28); rankDownLevel = *(e-0x24); enforceDownLevel = *(e-0x20); newRankLevel = *(e-0x1c); bBindState = *(e-0x10) (byte); enforceLevel = *(e-0x44); breakLevel = *(e-0x40); canBreak = *(e-0x3c) (byte); enforceRuleID = *(e-0xc).
- ƒ &DAT_11dbb0b4 field (index) = *(e-0x4c).
- ƒ Craft-credit cost fields: nCraftCreditID = *(e+4); nOwnCraftCredit = FUN_113fa380(*(e+4)) [owned amount of that craft-credit currency]; nCraftCreditMax = *(e+8); nCraftMoney = *(e+0xc).
- ƒ equipHasEnoughMaterial hardcoded to 0 here (material sufficiency computed elsewhere).
- $ upgradeMoney (e-0x2c) = gold cost to upgrade; currentMoney (e-0x28) = money threshold/current.
- $ enforceRequirement (e-0x58), hunterstarRequirement (e-0x54) = level/hunter-star gates.
- $ nCraftMoney (e+0xc) craft-credit cost; nCraftCreditMax (e+8) cap; nOwnCraftCredit = FUN_113fa380(creditID) currently-owned.

### SmithModel::SendReqEnforceEquip `@0x10d2d660`
*Serializes an equipment-enforce/enchant request {m_nItemID, m_nItemColumn, m_nItemGrid, m_nEnforceRule, m_nEnforceLevel, m_nBufferID} and sends it to the server as message id 0x52. Client->server upgrade request.* (server: client request (server authoritative on enforce success/cost; must validate item ownership at column/grid, rule, and consume the money/material/craft-credit costs from FUN_109f3df0's table), conf high)
- ƒ Payload fields (all AS number tag 4): m_nItemID=(float)param_2[0], m_nItemColumn=param_2[1], m_nItemGrid=param_2[2], m_nEnforceRule=param_2[3], m_nEnforceLevel=param_2[4], m_nBufferID=param_2[5].
- ƒ Dispatched via FUN_10d1d220(model+0x58, 0x52, ...). Queue guard on model+0xac at +0x8fc/+0x904.


## vehicle  (2)

### AircraftEntity::AttachAndRelease `@0x10f99040`
*Locates the 'aircraft' sub-entity/proxy on an entity, invokes an attach vfunc, then releases a ref-counted temp (decrementing DAT_123be268 allocator counter).* (server: client-only (entity/vehicle plumbing; not economy), conf low)
- ƒ DAT_123be268 -= (0xd + *(param_2-4)) on final free (allocator bookkeeping).

### HovercraftComponent::InitFromXml `@0x110f82c0`
*Parses the 'Hovercraft' entity XML node into component fields (maxThrustersDamaged, collapsedFeetAngle, collapsedLegAngle, recoverTime) and resolves attachment helpers (turret1, cannon, generator, platform_pos).* (server: client-only (entity component init; not economy), conf medium)
- ƒ Writes floats at param_1+0x500/0x504/0x508 and int at +0x4f8; attachment ids at +0x520/0x524/0x528/0x52c.


## equipment-quick-levelup  (2)

### CEquipQuickLevelUp::ValidateAndLog `@0x115c2610`
*Guard/validation path for a quick-level-up action on an equip. Verifies the CEquipQuickLevelUpInfo record exists for index param_1, then runs predicate checks FUN_1183e200(level), FUN_1052bdd0(equip), FUN_116c4620(idx); on the success branch builds a key/value log record ('Equip'=param_2, 'Level'=param_3) and calls a non-returning handler FUN_10c3d580(0xc) (throw/assert-style). Returns a boolean (low byte cleared => false on the normal fall-through).* (server: unknown (looks like a client-side precondition/telemetry guard around quick-level-up); authoritative equivalent would validate equip+level server-side, conf low)
- ƒ idx=param_1 sparse lookup into CEquipQuickLevelUpInfo
- ƒ return value = uVar2 & 0xFFFFFF00 (boolean in low byte, normally false)

### CEquipQuickLevelUpInfo::GetRecordById `@0x11599ce0`
*CInfoManager sparse-array accessor: returns the CEquipQuickLevelUpInfo config record pointer for index param_1 (0 if out of range / missing).* (server: validation/authoritative data source: read-only config lookup, conf high)
- ƒ standard mgr sparse lookup: guard idx!=-1 && (idx!=0\|\|mgr[0x30]==0) && mgr[0x28]!=0; idx-=mgr[0x30]; 0<=idx<mgr[0x24]; row=mgr[0x20][idx/mgr[0x28]]; return row[idx%mgr[0x28]]


## equipment-quench  (2)

### CEquipQuench::ValidateLevelAndGetRule `@0x115c3cc0`
*Validates a quench (refine/temper) operation. Reads the player/equip quench state via FUN_1166c4b0(): current quench id at state+0x28C, max quench cap at state+0x290. If requested param_2 <= cap(+0x290) AND a valid CEquipQuenchRuleInfo record exists for the current quench id (+0x28C), returns FUN_11830c10(param_2); otherwise returns 0.* (server: validation: server must enforce quench level <= cap and that the quench-rule row exists before applying, conf medium)
- ƒ cap  = *(state + 0x290)   (max allowed quench level)
- ƒ curId= *(state + 0x28C)   (current quench rule id, used as manager index)
- ƒ guard: param_2 <= cap AND CEquipQuenchRuleInfo[curId] valid
- ƒ on success: return FUN_11830c10(param_2)
- $ quench level bounded by state+0x290 cap

### CEquipQuenchRuleInfo::GetRecordById `@0x115c3d40`
*CInfoManager sparse-array accessor returning the CEquipQuenchRuleInfo record for index param_1.* (server: authoritative data source: read-only config lookup, conf high)


## soul-beast  (2)

### CSoulBeastDef::LoadSubTables `@0x11783760`
*Parses the sub-collections of a SoulBeastDef config object from its data node: AcceptChecks(->+0x10), Foods(->+0x1C), Images(->+0x28), EvolveRule(->+0x34), LevelUpRule(->+0x38), SocialActions(->+0x3C), and one more list (DAT_11de09d4 name ->+0x48). Each present child node is passed to a type-specific list reader.* (server: client-only (config deserialization); soul-beast feeding/evolve/levelup rules are the underlying data, conf high)
- ƒ child 'AcceptChecks' -> FUN_11768560(node, this+0x10)
- ƒ child 'Foods' -> FUN_117686e0(node, this+0x1C)
- ƒ child 'Images' -> FUN_117687a0(node, this+0x28)
- ƒ child 'EvolveRule' -> FUN_118a68a0(node, this+0x34)
- ƒ child 'LevelUpRule' -> FUN_118a68a0(node, this+0x38)
- ƒ child 'SocialActions' -> FUN_117689e0(node, this+0x3C)

### CSoulBeastLevelUpInfo::GetValueByIndex(vector) `@0x117b8f50`
*Contiguous-vector accessor into CSoulBeastLevelUpInfo: returns element param_1 (base *(mgr+0x14), count (mgr[0x18]-mgr[0x14])/4).* (server: authoritative data source: soul-beast level table lookup, conf high)
- ƒ count=(*(mgr+0x18)-*(mgr+0x14))>>2; if 0<=idx<count return *(*(mgr+0x14)+idx*4)


## player-levelup  (2)

### CPlayerLevelUpInfo::GetField0x2cById `@0x117b1d30`
*CInfoManager sparse-array accessor into CPlayerLevelUpInfo for index param_1; on a valid record returns the field at record+0x2C (a per-level value, e.g. required EXP or level reward reference).* (server: authoritative data source: player level curve; server reads +0x2C per level, conf medium)
- ƒ standard mgr sparse lookup; return *(rec + 0x2C)

### CPlayerLevelUpInfo::GetValueByIndex(vector) `@0x117b1da0`
*Contiguous-vector accessor: returns element param_1 from the CPlayerLevelUpInfo vector (base *(mgr+0x14), size (mgr[0x18]-mgr[0x14])/4).* (server: authoritative data source: player level table indexed lookup, conf high)
- ƒ count = (*(mgr+0x18) - *(mgr+0x14)) >> 2
- ƒ if 0<=idx<count: return *(*(mgr+0x14) + idx*4)


## pet-ui  (2)

### CPetPanelUI::BuildEquippedSkillLists `@0x105137f0`
*Builds the pet skill list UI model. Creates arrays _PetEquippedInitiativeSkills/_PetEquippedPassiveSkills/_PetEquippedAssistantSkills/_PetEquippedTemporarySkills, _SelfTalentSkill, _SelfBuff, plus PetSkillItemVO entries. For each pet skill (from CPetSkillInfo::BuildSkillDetailList) emits strSkillName/SkillIcon/skilllevel/SkillID/skilltype/skillPoint/skilleffect/quality/aptitude/intimate/curpercent/maxpercent/learntime/bCanLevelUp/bAdvanced/bFixed/nCurSkillLv/nMaxSkillLv and routes each into a list by skilltype.* (server: client-only: read-only display of pet skill state; no mutation. Max-level (nMaxSkillLv) is queried from a pet object vtbl (authoritative source elsewhere)., conf medium)
- ƒ SetRequireItemId seed from FUN_116a6a70()+0xf8.
- ƒ Skill VO (undefined4* puVar9, stride 0xf words = 60 bytes): [1]=SkillIcon ptr, [2]=skilllevel/nCurSkillLv, [3]=SkillID, [4]=skilltype, [5]=curpercent, [6]=maxpercent, [7]=learntime, [8]=skillPoint, [0xb]=quality, [0xc]=aptitude, [0xd]=field DAT_11dbfae0, [10]=intimate.
- ƒ List routing by skilltype=[4]: type7 -> passive list (local_150), type6 -> initiative (local_d0), type8 -> assistant (local_b8), type9 -> sets DAT_11dbfae0=1 and routes to assistant; else skip (LAB_10513f85). Temporary skills appended to local_118.
- ƒ bCanLevelUp = CPetSkillInfo::HasNextLevelSkillInList(...); nMaxSkillLv = pet vtbl+0xb8(SkillID); bFixed = CPetSkillInfo::ExistsByIdInAltRegistry(record+0x24); bAdvanced = *(record+0x54).
- ƒ Temporary-skill record offsets (iVar3): +0x10=SkillID, +0x14=skilllevel, +0x40=SkillIcon, +0x54=bAdvanced, +0x58=skilltype, +0x64=skillPoint, +0x68=intimate, +0x6c=aptitude, +0x70=quality.
- $ skillPoint = VO[8] / record+0x64 — skill point cost/value displayed
- $ intimate/aptitude/quality — pet skill quality metrics

### CPetPanelUI::RegisterFlashCallbacks `@0x1050f390`
*One-time registration of the pet-management panel's Flash<->C++ callback table (~55 named handlers) and console vars. Registers InitModel/InitSkillModel/InitMyPetListModel, pet name/declaration change, pet skills (flute/normal/temp/talent/buff levelup), OnFire/OnFollow/OnGetBack/OnPack, equip put-on/take-off, GetEnchantInfo, onQuickBuy, GetPetDetailInfo, GetSuiteInfo, SkillLearnNew, CheckSkillBookInfo, checkbox-message config, etc. Caches 'gfx_draw_only'/'gfx_draw' cvars into param_1[100]/[0x65].* (server: client-only: UI callback registration. Notable economy-adjacent commands registered here are client requests (onQuickBuy = quick-purchase, TakeoffEquip/OnPetEquipClick/PetSwapInventoryItem = equipment moves, GetEnchantInfo, BuffLevelup/TalentLevelup/OnPetSkillLevelUp/SkillLearnNew = spend/upgrade requests); server stays authoritative on the corresponding requests., conf high)
- ƒ DAT_123bcde4 guarded with bit 0x40 (>>6 &1) release pattern; set to 1 after first init (run-once flag).
- ƒ cvar cache: param_1[100]=GetCVar('gfx_draw_only'), param_1[0x65]=GetCVar('gfx_draw') via *(DAT_1202e818+0x2c) vtbl+0x54.
- $ onQuickBuy — pet-panel quick-buy request
- $ BuffLevelup / TalentLevelup / OnPetSkillLevelUp / SkillLearnNew / UnlockPetSkill — pet skill spend/upgrade request commands


## forge-ui  (2)

### CEquipForgeUI::OnPanelActivate `@0x1052dd30`
*Equipment forge/enhance panel activation handler (Flash callback, param_6 = arg-count variant). Registers the dropdown-refresh callbacks (_refreshEquipRankupDropDownData / _refreshEquipUpgradeDropDownData / _refreshEquipBreakLevelDropDownData / _refreshEquipWakeLevelDropDownData / _updateEquipShowContent), sets itemColumn/itemGrid/selectItemID from state, then drives a page state machine selecting which forge sub-mode (rankup / upgrade / enforce-break / awaken) is shown based on active feature/tab flags.* (server: client-only: UI panel state/selection management for the equipment forge (rankup, upgrade, enforce-break, awaken/wake). No currency/item mutation here; each forge action is a separate server request., conf medium)
- ƒ Panel state offsets on param_1: +0x438 = mode (computed 1 + (checkbox bool)), +0x43c = selected equip handle (FUN_1025b060), +0x48c = active page id, +0x468+page*4 = per-page sub-model object, +0x490 = widgetIDOpen (reset to 0xffffffff), +0x494 itemColumn, +0x498 itemGrid, +0x49c selectItemID, +0x4d0..0x4e0 = deque cleanup of pending entries.
- ƒ Page selection via FUN_1050a110(featureId): 0x7c set -> ; 0x8b -> page=7,mode=3,+0x464=1 (rankup-with-selection); 0xc1 -> upgrade branch; 0xd1 -> page=6; 0x1d/0xfb -> page=7 (+0x34 flag=0); default mode->page: mode1->page0, mode2->page2. Page objects built via FUN_1052db00(pageId).
- ƒ Per-page +0x34 = enable flag, +0x5c = selected equip handle, +0x5a = bool from FUN_1050a110(0xc1).

### CEquipForgeUI::RefreshEnforceBreakDropDown `@0x105319d0`
*'_refreshEquipBreakLevelDropDownData' handler: builds the equipment enforce/break-level dropdown model for the selected equipment. Emits equipName/itemID/breakLevel/enforceLevel/enforceruleid for the current equip, then iterates all reachable break levels (via CEquipEnforceBreak manager) emitting equipName/itemID/breakLevel per option.* (server: client-only: read-only display of an equip's enforce/break progression options. Actual break/enforce operations are separate server requests; server owns enforceruleid and break-level validation., conf medium)
- ƒ Arg variant unpack from in_stack_00000010: +0x04 tag (string id, wire 6) -> equipName (else DAT_11d9d32b), +0x18 obj ptr, +0x34 tag {3,4} -> local_98 = *(+0x38) else -0x21524151 sentinel, +0x60 obj ptr, +0x64 tag.
- ƒ Item id: FUN_1166e250()? FUN_1166dc70() : FUN_11669730(); breakLevel = FUN_1166c400(); enforceLevel = FUN_1166c160(); enforceruleid = FUN_1166c190().
- ƒ Iteration: base = FUN_1052bdd0(itemId); loop over levels list via CEquipEnforceBreak::GetManagers_116c4a30 with cursor piStack_94 = local_98+0x14 until reaching FUN_11669730() terminator; each iteration emits itemID=unaff_EBX, breakLevel=current.
- $ breakLevel / enforceLevel — equipment enforce (强化) and break-limit progression values
- $ enforceruleid — id of the enforce rule table (governs cost/success on server)


## instance-clearing-ui  (2)

### CInstanceClearingView::BuildLevelResultInfo `@107d9870`
*SetLevelResultInfo handler: reads the server-delivered instance-clearing result struct (via DAT_1202e818->+0xd0->+0x90 vtable+0xb4 -> result object at iVar6) and builds the score/reward VO passed to the UI script. Populates IsWin, IsIndPVE, PveBattleScore, SelfBattleScore, PveBattleMoney, HuntSoul/FinalHuntSoul/WildHuntCamp/IsHuntSoulReachLimit, RandomMatchPoint, IsDoubleReward. Then assembles multiple parallel item/exp/gold reward lists by calling FUN_107dbf70 (ExtraBonus aggregation) five times with different field-id key sets, plus RewardEventItemInfoList and per-player PlayerDatas/PlayerStateData sub-objects. Iterates monster-change records (MonsterId/OldSize/NewSize/ChangeType/OldType/MonsterName via FUN_107d7df0+FUN_100e5b60).* (server: client-only display. Reads a server-authoritative clearing-result struct and reformats it for the UI. All money/exp/hunt-soul values originate server-side; this only presents them. Server must compute PveBattleMoney, BaseExp/ExtraExps, HuntSoul caps (IsHuntSoulReachLimit), IsDoubleReward, RandomMatchPoint., conf medium)
- ƒ IsDoubleReward = (FUN_114549f0(0x18) >> 4) & 1  (bit 4 of reward-flags word at selector 0x18)
- ƒ IsHuntSoulReachLimit displayed from FUN_11454780()&0xff
- ƒ IsIndPVE = (FUN_114549f0(0x19) == 1)
- $ PveBattleMoney: money earned from the cleared instance (server-computed)
- $ HuntSoul / FinalHuntSoul: wild-hunt soul currency earned, subject to IsHuntSoulReachLimit cap
- $ RandomMatchPoint: matchmaking reward points

### CInstanceClearingView::RegisterScriptHandlers `@107d7f80`
*Registers the Lua/UI script mediator handlers for the end-of-instance clearing/reward/score view. Builds a table of named callbacks (FUN_100b62c0 = intern name key, FUN_104d0ee0/FUN_107dddb0 = bind delegate into a hash map, FUN_10c3d5d0 = release previous delegate). Wires client-side actions: CloseInstanceScoreView, CloseInstanceRewardView, ReqInstanceClearingStart, ReqQuitInstanceDirectly, RefreshScoreInfo, SetLevelResultInfo (->FUN_107d9870), PayModeCheck, OnGiveup/OK/Cancel, CanGiveupLevel, GetViewSystemData, GetActivityRewardData, GetGiveupStatus, InitGiveupView, GetCreditLevelNeed, addLikeIt, GetLikeItWaitTime, IsTeamMateReportedGuaJi, C2AS_IsLevelCatAvailable, C2AS_LevelCatReset. Tail conditionals (FUN_10d17440/FUN_10d17870 guards) register the four data providers FUN_107e0a20/70/c0/b10.* (server: client-only. Pure UI/script-mediator plumbing; names like ReqInstanceClearingStart, ReqQuitInstanceDirectly, C2AS_LevelCatReset, GetCreditLevelNeed, C2AS_IsLevelCatAvailable are the client request stubs whose server counterparts (AS2C / C2AS RPCs) must be authoritative. No economy logic here., conf high)


## reward-display  (2)

### CInstanceClearingView::BuildRewardItemVO_FromDrop `@107dbce0`
*Builds a 'mh.model.Instance.vo.RewardItem' VO from a raw drop tuple param_3 (an {itemId, count, bindType} triple). Looks up the item base-info record (FUN_10254130) and emits itemIconPathName (info+0xb4), ItemID (=*param_3), a count field (DAT_11dbdc0c key = param_3[1]), itemType (info+0x10), bindType (param_3[2]).* (server: client-only display. Formats a server-granted item drop for the reward UI. Item icon/type come from static item base-info config; id/count/bind come from the server drop record., conf high)
- ƒ itemIconPathName = *(itemBaseInfo + 0xb4)
- ƒ itemType = *(itemBaseInfo + 0x10)
- ƒ ItemID = param_3[0]; count(DAT_11dbdc0c) = param_3[1]; bindType = param_3[2]

### CInstanceClearingView::BuildRewardItemVO_FromItemObject `@107dbd80`
*Builds a 'mh.model.Instance.vo.RewardItem' VO from a live item object (param_3+4 = item ptr). Emits itemIconPathName (vtable+0x24), ItemID (FUN_11669730), count (vtable+0xc, DAT_11dbdc0c key), itemType (FUN_11669730 again), bindType (FUN_116693d0); if FUN_116698a0() true also emits rareType (vtable+0x2c). Always writes instanceChannel=1 and instanceChannelNumber (int field, default).* (server: client-only display of a granted item object. rareType only emitted for items whose class flags it (FUN_116698a0)., conf high)
- ƒ instanceChannel = 1 (constant); rareType emitted only if FUN_116698a0(item) != 0


## crafting-config  (2)

### CCraftInfo::GetRecordById `@107ec240`
*CInfoManager 2D-table accessor for CCraftInfo (weapon/armor crafting recipes). Gets the singleton manager (CCraftInfo::GetInfoManagerSingleton, else CInfoManager::FindByName("CCraftInfo"), else default &DAT_123bf070), then given a flat record id returns the config row pointer via 2D indexing.* (server: validation/authoritative config source. This is the crafting-recipe cost/material table; the server must use the equivalent table to validate craft material and currency costs. Client uses it to display recipes., conf high)
- ƒ id valid iff id != -1 && (id != 0 \|\| base[0xc]==0) && base[10]!=0 && (id-=base[0xc]) in [0, base[9]); record = *(*(base[8] + (id/base[10])*4) + (id%base[10])*4)
- ƒ base[8]=row-pointer array, base[9]=total count, base[10]=row stride, base[0xc]=id base offset
- $ CCraftInfo record = per-recipe material list + currency cost (fields consumed downstream, not read here)

### CSuperCraftConsumeInfo::GetRecordById `@107ec870`
*CInfoManager 2D-table accessor for CSuperCraftConsumeInfo (advanced/'super' craft material+cost table). Singleton-or-FindByName("CSuperCraftConsumeInfo")-or-default(&DAT_123bef7c); identical 2D index formula (manager fields +0x20/+0x24/+0x28/+0x30).* (server: validation/authoritative config. Defines materials/currency for high-tier crafting; server must enforce., conf high)
- ƒ same 2D lookup formula as the other three accessors
- $ CSuperCraftConsumeInfo record = materials + currency for super-craft


## upgrade-config  (2)

### CEquipLevelUpConsumeInfo::GetRecordById `@107ec3e0`
*CInfoManager 2D-table accessor for CEquipLevelUpConsumeInfo (equipment level-up material/cost table). Same singleton-or-FindByName-or-default(&DAT_123bf030) pattern and same 2D index formula as CCraftInfo, but reads the array/count/stride/base fields at manager offsets +0x20/+0x24/+0x28/+0x30.* (server: validation/authoritative config. Defines the consumables/currency required to level up equipment; server must enforce these costs on the level-up transaction., conf high)
- ƒ id valid iff id!=-1 && (id!=0 \|\| *(base+0x30)==0) && *(base+0x28)!=0 && (id-=*(base+0x30)) in [0,*(base+0x24)); record = *(*(*(base+0x20) + (id / *(base+0x28))*4) + (id % *(base+0x28))*4)
- $ CEquipLevelUpConsumeInfo record = materials + currency consumed per equip level-up step

### CEquipUpgradeInfo::GetRecordById `@107ec550`
*CInfoManager 2D-table accessor for CEquipUpgradeInfo (equipment upgrade/enchant table). Singleton-or-FindByName("CEquipUpgradeInfo")-or-default(&DAT_123beff4); same 2D index formula with manager fields at +0x20/+0x24/+0x28/+0x30.* (server: validation/authoritative config. Equipment-upgrade cost/success table; server must consult it to validate upgrade material/currency spend and (likely) success rates., conf high)
- ƒ same 2D lookup as CEquipLevelUpConsumeInfo::GetRecordById (fields +0x20/+0x24/+0x28/+0x30)
- $ CEquipUpgradeInfo record = upgrade cost + (probably) success-chance parameters per upgrade level


## inventory  (2)

### CInventoryUI::BuildItemData `@108a6bb0`
*'GetItemData' handler: builds the full item VO for the inventory UI. Reads a huge set of item-def and item-instance fields (bind/type/use/CD/rare/price/enchant/quench/skill/transmog) and publishes them into an itemList array.* (server: client-only, conf high)
- ƒ Emitted fields (accessor -> key): count = item.vtbl[+0xc](); m_nBindType = FUN_116693d0(); m_bMallItem = def.byte(+0x68); m_typeNormal = def(+0x38); m_typeSub = def(+0x3c); m_nRareType = item.vtbl[+0x2c](); isBind = (item[8]!=0); m_nSellPrice = FUN_11a897a0(); m_nExpireTime = FUN_11669350(); m_nRequire_Sex = def(+0xfc)
- ƒ CD group (only if FUN_11669930 true): m_nCDTime=FUN_11671aa0(), m_nCDGroupTag=FUN_11671a80(), m_nUseTimes=FUN_11671c00(), m_nMaxUseTimes=FUN_11671b30(), m_nCDRemainTime=FUN_1154bc80(FUN_11671a80())
- ƒ m_nCanUseTimesInBS = FUN_113f9d20(FUN_11669730(0)); m_nCanUseTimesInDB = FUN_113f9d20(FUN_11669730(1))
- ƒ Enchant: if not enchantable -> m_nEnchantTime=-1; else if item[0xc]==0 -> -1 else m_nEnchantTime = FUN_10a136c0() - item.vtbl[+0x10]()
- ƒ Quench (via FUN_1052bdd0(...)): m_bCanQuench = *(q+0x28c)!=0; m_bCanReQuench = *(q+0x294); m_nMaxQuenchLevel = *(q+0x290); m_nQuenchLevel = *(short*)(item+0x7e)
- ƒ m_nTransmogrifyItemId = item[0x7d]; m_fSellPriceFact = (float)FUN_11669880(); m_fBuyPriceFact = (float)FUN_11669280(); m_nFactItemLevel = item.vtbl[+6](); m_nFactRank = FUN_11669840()
- ƒ Skill item branch selects between FUN_108a8910 / FUN_108a89a0(FUN_108a8a30(...)) to emit m_bSkillItem/m_nSkillCount/m_nSkillCDTime/m_strSkillName/m_nSkillId
- $ m_nSellPrice = per-item sell price (server authoritative on actual sale)
- $ m_fSellPriceFact / m_fBuyPriceFact = sell/buy price multiplier factors applied to base item price

### CInventoryUI::RegisterHandlers `@108a3110`
*Registers the full inventory/enchant/supply-plan dispatch table (script<->native). No economic logic itself; wires request names to handler functions.* (server: client-only, conf high)
- ƒ Registered requests (name -> handler): SwapInventoryItem->FUN_108a3ee0, SwapInventoryItems->FUN_108a4420, SplitInventoryItem->FUN_108a4ab0, TidyInventoryItem->FUN_108a4d80, ClickInventoryItem->FUN_108a5550, DiscardInventoryItem->LAB_108a57e0, ExpandInventoryItem->FUN_108a5850, MoveInventoryItem->FUN_108a5890, MsgBoxEnchantOk->LAB_108a5710, GetExpandCostData->FUN_108a7660, GetItemData->FUN_108a6bb0, ClickTaskItemUse->LAB_108a3ab0, requestEnchantForPetEquip->FUN_108a3b40, GetSupplyPlanList->SupplyPlanMo_108a7990, GetItemInSupplyPlan->FUN_108a7c50, RenameSupplyPlan->FUN_108a8030, UnlockSupplyPlan->FUN_108a8160, SaveInventoryToSupplyPlan->FUN_108a81d0, ChangeCurrentSupplyPlan->FUN_108a8240, LoadInventoryFromSupplyPlan->FUN_108a82b0, GetSkillItemInfo->FUN_108a63f0(?)/FUN_108a86a0, requestEnchant-desc FUN_108a69d0/FUN_108a6950, UnionItemRespondOkHandler->FUN_108a4a30, UnionGuildItemRespondOkHandler->FUN_108a48a0, UnEquipALL_OK->LAB_108a67a0, CanItemUseInCurrentLevel->FUN_108a3cd0
- ƒ param_1[9]=param_1[10]=0xffffffff (init selected-slot indices)


## farm  (2)

### CFarmUI::BuildCollectPointListData `@108e36f0`
*'GetCollectPointListData' handler: builds the collection-point VO array — per point: level/maxLevel/outputLevel/requiredPlayerLevel/curExp/maxExp/desc, upgrade & farm-exp cost, canCollect, remaining totalTime, output material item list, and the assigned pet (id/name/skills).* (server: client-only, conf medium)
- ƒ Iterate collect points: block from piStack_264+0xb, per-point stride advances puVar8 = puVar10 + 5 (0x14 bytes), loop while uStack_278 (starts 0x80) < 0x98 -> 6 points
- ƒ outputLevel = (ushort)puVar8[3]; curExp = puVar8[-1]; maxExp = *(cpDef+0x1c); requiredPlayerLevel = *(cpDef+0x58)
- ƒ canCollect gate: if (DAT_123bbac8/acc timers unset OR farm-time vtbl[+0xc0]() == stored time) -> canCollect based on (*(ushort*)(puVar8+2)==0) else based on (piStack_284[0x39]==0)
- ƒ remaining time = (puStack_2bc[1] + upgradeData[7]*0x3c) - _time64(NULL)  (0x3c=60: upgradeData[7] is minutes -> seconds); only marks not-collectable when (canCollectFlag && remaining < 1)
- ƒ Output items: 5 entries at cpDef+0x3c stride 1 dword: ItemID=puVar11[-5], count=*puVar11, icon=*(itemDef+0xb4)
- ƒ Assigned pet: petID=auStack_6c[0]; if >0 petIndex=FUN_112fb110(petID), petName via FUN_112f64e0; pet skills loop over (auStack_6c - (cpDef+0x54))/0x14 entries -> strSkillName/skilllevel/SkillID/bAutoGather (=skillType==5)
- ƒ Farm-wide footer: 4 output-level entries + FUN_1025b060()x4 into uStack_17c..170 (current farm resources/output counts)
- $ upgradeCost / farmExpCost = resource cost to upgrade a collection point (published keys 'upgradeCost','farmExpCost')
- $ remaining totalTime derived from upgradeData[7] minutes * 60

### CFarmUI::RegisterHandlers `@108e20c0`
*Registers the farm/ranch subsystem dispatch table (farm data getters, collection points, training, seeds/tools, plant/upgrade/facility requests, CD reduce, equip-rack avatar, pet info).* (server: client-only, conf high)
- ƒ Registers (subset): GetFriendFarmListData->FUN_108e25d0, GetCollectPointListData->FUN_108e36f0, GetTrainListData->FUN_108e4680, GetFarmData->FUN_108e3340, GetSeedData->FUN_108e50d0, GetToolData->FUN_108e5e20, GetFLSettlementData->FUN_108e6190, ReqFarmLocationUpgrade->FUN_108e5760, ReqEnterFarm->FUN_108e5860, ReqReturnHomeFarm->FUN_108e57f0, ReqAutoCollection->FUN_108e58c0, ReqSetPetToCollectionPoint->FUN_108e5960, ReqSetPetToTrain->FUN_108e5a20, ReqPlant->FUN_108e5cb0, ReqSetOutputLevel->FUN_108e5d20, ReqFarmLargeFacility->FUN_108e6460, GetFarmCDData->FUN_108e66f0, ReqFarmCDReduce->FUN_108e6d50, ReqGetEquipItemVoByItemID->FUN_108e7140, GetPetInfoData->FUN_108e7d30 (and more)


## level-entrust  (2)

### CLevelEnGroupRewardInfo::GetRewardByIndex `@0x108f2e10`
*Looks up a reward entry from the level-entrust group reward config (singleton via CLevelEnGroupRewardInfo::GetManager, else CInfoManager::FindByName). Given a global index, resolves a 2D reward table (row pointers array) and returns the reward value at that cell, or 0.* (server: validation/config lookup — client mirror of the group-reward table; server owns authoritative reward grant. Useful for reconstructing the reward config layout., conf high)
- ƒ cfg = singleton or FindByName('CLevelEnGroupRewardInfo'); if missing use default DAT_123bfbfc (lazy-init guarded by DAT_123bfbf8 bit0).
- ƒ Guard: return 0 unless (param_1 != -1) && ((param_1 != 0 \|\| *(cfg+0x30)==0) && *(cfg+0x28)!=0).
- ƒ idx = param_1 - *(cfg+0x30) (base index offset); require 0 <= idx < *(cfg+0x24) (total entry count).
- ƒ row = *(int*)(*(cfg+0x20) + (idx / *(cfg+0x28)) * 4)  where cfg+0x28 = columns-per-row / stride; if row==0 return 0.
- ƒ return *(int*)(row + (idx % *(cfg+0x28)) * 4).
- $ returns a reward id/value from the group reward matrix (row-major, stride = cfg+0x28)

### CLevelEntrustUI::BuildEntrustListVO `@0x108f3b90`
*Large UI-model builder (param_5==2) for the level-entrust (quest commission) list panel. Emits a LEVELENTRUST_LISTVO with group header fields (groupID, title, maxEntrustCount, repeatCycle, curEntrustCount, nEntrustVipCnt) and a LEVELENTRUST_TASKVO_CLASSNAME sub-list. Per task it evaluates unlock conditions (level, quest task, hunter star / gold hunter star, finish-level, hunter card, use-item cost) and computes a display 'state'/'codes', plus reward info via CLevelEnGroupRewardInfo::GetRewardByIndex, CLevelEnSubGroupRewardInfo::SumSubGroupRewards, and league schedule via CLeagueInfo::CollectLeagueScheduleEntries.* (server: client-only VO builder, but surfaces validation-relevant economy limits: maxEntrustCount / curEntrustCount / repeatCycle (how many commissions may be accepted per cycle) and the per-task unlock item cost (iUseItemID / iUseItemCount). Server must authoritatively enforce these caps and item consumption., conf low)
- ƒ Unlock condition records fetched by type index via FUN_117e7460(type): observed types 1 (HunterStar rank, compared vs CPlayer::GetHuntRankOrCount), 2, 3, 4, 5, 6 (finish-level), 7 (finish-level string), 8 (hunter card / quest task), 0xa (iUnlockNeedLevelsCount, list), 0xb (appraisal + levels count). Each writes str/int unlock fields when the player's value < required (*(rec+4)).
- ƒ condition value getters FUN_1130bb80(type)/FUN_1130cb50(type) supply current player progress; e.g. state bump when current < required.
- ƒ VIP reward/count scaling: when pppppuStack_35c[9] != 0 && pppppuStack_35c[9][6]==1 (VIP-active flag), value = (int)((double)value * DAT_11de9968) applied to two reward counters (ppppppuStack_330 and uVar18). DAT_11de9968 is the VIP entrust multiplier (a double constant).
- ƒ A config base offset constant 0x261d0 is added to a level-entrust config pointer (aiStack_25c[0] += 0x261d0).
- ƒ 'state' (ppppppiVar19) computed by cascading condition checks; a reward-count comparison drives state 2 with sub-code (ppppiStack_314 set to 0xa or 0x4). Task material-list branch compares (int)((rec[4]-rec[3])>>2) == rec[1]/rec[2] to set bIsAndOpration and iUnlockNeedLevelsCount.
- ƒ League-schedule sub-loop (only when high byte of unaff_EDI set): iterates entries of size 0x18; counts matching league notices (local_2a8 < 2 gate) and emits noticeLeagueName.
- $ maxEntrustCount, curEntrustCount, repeatCycle, nEntrustVipCnt (commission accept caps per cycle)
- $ iUseItemID / iUseItemCount (item cost to unlock an entrust task)
- $ VIP multiplier DAT_11de9968 (double) applied to entrust reward/count values when VIP flag set
- $ reward ids resolved via GetRewardByIndex / SumSubGroupRewards


## pvp  (2)

### CPvpUIModel::RegisterHandlers `@109082d0`
*GUI model init for PVP room/agreement panel. Registers PVP query callbacks and pushes a few enforce-time/rate config scalars to the Flash model.* (server: client-only. Not a currency path. enforceSpecialTime and rateX/Y begin/end are UI layout/rate config scalars fetched from FUN_117424xx accessors., conf medium)
- ƒ enforceSpecialTime = FUN_117424f0()
- ƒ rateXBegin=FUN_117424a0(), rateXEnd=FUN_117424b0(), rateYBegin=FUN_117424c0(), rateYEnd=FUN_117424d0() (each preceded by FUN_117423e0 selector)

### IpvpSettlementDataVO::Build `@109814c0`
*Builds the mh.model.Ipvp.IpvpSettlementData VO after an interactive-PvP match: per-player rows (level, name, score, catcar), reward Items list, and league (排位) result: score/power deltas, coin change, faction, rank-band transition and pictures.* (server: client-only: settlement UI. All scores, coin deltas, reward Items and rank transitions are server-authoritative; this function only renders them., conf medium)
- ƒ player-row array stride = 0x430 bytes; row count = (list_end[+0x64] - list_begin[+0x60]) / 0x430; self row matched by row+4 == myId(iStack_f4+4)
- ƒ RedTeamScore=battle+0x54, BlueTeamScore=battle+0x58, PlayerLevel=self+0x408, Score=self+0x40c, CatCar=self+0x414
- ƒ league fields read from player+0x9880.. : LeagueType=[0x9880], LeagueScoreChange=[0x9881], LeaguePowerChange=[0x9882], LeagueSelfScoreChange/CoinChange=[0x9883]; [0x9884..0x988a] rank/pic state
- ƒ LeagueCoinCurrent = FUN_1025b060(); LeagueCoinChange = iStack_c8 ([0x9883])
- ƒ rank-band (LeagueType==4 only): tier = score/100 + 1; iStack_d0 = maxScore/100+1, iVar7 = curScore/100+1; LeagueCurSelRankScore = (maxScore/100+1)*100 - maxScore (points to next band); band-transition code: ==->1, cur<prev->3, prev<cur->2, else 0
- ƒ Items list built from in_stack_00000018 pairs {id, count} stride 4 dwords as BaseItemVo(id,count)
- $ LeagueCoinCurrent snapshot = FUN_1025b060(); LeagueCoinChange = league coin delta awarded this match (server-computed)


## transactions  (2)

### CMartShopUIModel::RegisterHandlers `@1092d870`
*GUI model init for the cash-shop / mart panel. Registers the full mart command table (bind-name FUN_100b62c0 + register FUN_10935d40 pairs) and wires several C2AS/AS2C net notify handlers via FUN_10d17440/FUN_10d17870. Clears mart model state fields at the end.* (server: client-only registration, but the most economy-critical command surface in the chunk. Server must be authoritative over: RequestBuy (FUN_10930720), GetCurPrice (FUN_10930a60), RequestOpenVip (FUN_1092fbb0), FetchOpenVipData/FetchExtendVipData, RapidBuyVip (FUN_10931830), RequestWorldPay_Face/RequestWorldPay_Sex (paid appearance/gender change), C2AS_GetMartItemData, C2AS_OpenWeiXinWindow (WeChat recharge), AS2C_RequestRefreshNum, OpenMartVipPanelNotify. GoodsListReq/GetMartData/GetSelItemGroupData/GetCharCreditData/GetPurchaseItemData are read queries., conf high)
- ƒ on teardown: model+0x20=0, +0x24=0, +0xb8=0; frees +0xbc buffer; +0xbc..+0xc4=0, +0xc8=0
- $ RequestBuy is the authoritative purchase command; RapidBuyVip/RequestOpenVip are VIP purchase commands; WorldPay_Face/Sex are premium currency sinks (paid character customization).

### CSpoorTaskUIModel::BuildRewardPreviewWithPrice `@10948d90`
*Builds 'rewardItemArray' preview (itemID/itemName/itemCounts) for a spoor prize pack and computes the two-currency purchase price of the pack for display, applying a rank-based discount multiplier.* (server: client-only PRICE DISPLAY. Server must independently compute/validate the true bound & unbound price; client discount rates come from CPlayer hunt-rank accessors and must not be trusted., conf medium)
- ƒ base price record = FUN_109478c0(packId); baseBoundPrice = record+0x18, baseUnboundPrice = record+0x1c
- ƒ boundMoneyPrice = (int)((float)*(record+0x18) * fStack_98)
- ƒ moneyPrice = (int)((float)*(record+0x1c) * fStack_9c)
- ƒ discount multipliers: if FUN_10947a30(mailId)==0 -> fStack_98 = fStack_9c = DAT_11de9918 (default rate, likely 1.0f)
- ƒ else fStack_98 (bound-rate) = FUN_11860ff0(huntRank), fStack_9c (unbound-rate) = FUN_11861030(huntRank)  (per-hunt-rank price scalars)
- ƒ reward preview loop stride 0x14 over prize groups (FUN_1052c520/FUN_1052c6a0), inner item stride 9 dwords; itemID=*puVar6, itemCounts=puVar6[2]
- ƒ uninitialized-field sentinel = 0xdeadbeaf
- $ dual-currency pack price: bound gold price (record+0x18) and unbound/tradable gold price (record+0x1c), each scaled by a hunt-rank discount factor


## instance  (2)

### InstanceSelectController::GetSpecHubInfo `@10977e30`
*Builds the hub-page level list VO (param_5==7). Depending on selector local_19c (1=entry,4=raid,2=king,3=letter,5=star-level,7=other) calls CMHLevelInfo::CollectHub*Configs, then per level writes many display fields (levelID, levelMod, levelShowType, levelLockType, isReward, isStarHunt, appraisal, bDoubleReward, maxLimited, isElite, unlock conditions, next-level indices, BossName/LevelName).* (server: client-only: UI list builder reading server-authoritative CMHLevelInfo config and unlock/reward state., conf medium)
- ƒ selector dispatch on local_19c: 1->CollectHubEntryConfigs, 4->CollectHubRaidConfigs, 2->CollectHubKingQuests, 3->CollectHubLetterQuests, 5->CollectHubPageStarLevelQuests, 7->FUN_1130bcd0
- ƒ per-level element stride = 0x20 dwords (0x80 bytes): fields at [0]=levelID, [1]=levelMod, [2]=levelPointIndex, [4]=isValidLevel/levelShowType, [5]=levelDifficultType, [6]=levelIconName-related, [0xc]=levelLockType, [0xd]=maxLimited, +0x1d(byte)=isElite-flag, [0x14/0x15]=unlock-condition range, [0x17/0x18]=arrayNextLevelIndex range, [0x1a]=SubPageID, [0x1b]=strSubPageTitle key, [0x1e/0x1f]=star/priority sort keys
- ƒ isReward = *(byte*)(elem+7); isReward reward id resolved via FUN_10976e80 (CLevelRewardInfo grid) then FUN_10976ff0
- ƒ 'best/highlight' level pick: keeps elem with higher [0x1f] (or equal [0x1f] and higher pppppiStack_174 vs [0x1e]) when [0xc]==0 (unlocked)

### InstanceSelectController::RegisterScriptHandlers `@109772d0`
*Registers InstanceSelect script RPC handlers (param_5==6). Binds _openDetailInfoView, getHubPageInfo, QuickStartInstance, QuickMatchInstance, PreSelectInstance, RequireInstanceRewardShow(1097a150), GetInstanceReward, getSpecHubInfo(10977e30), UnlockEliteLevel, GetEliteUnlockInfo, getLevelGroupLimit. (Several duplicate registrations present in decompile.)* (server: client-only: handler-table registration. GetInstanceReward/QuickStart etc. issue requests the server must validate., conf high)


## starstone  (2)

### StarStoneController::OnFeedFragmentsResult `@1098c900`
*Builds FeedResultData VO from a C2AS_FeedFragments response (param_5/in_stack_00000014==1): consumed-fragment count list, per-element feed EXP gained, and money cost. Feeds fragments into the star-stone to raise its level.* (server: client-only display of a server-authoritative feed result; server computes feed EXP per element, item consumption and money cost., conf medium)
- ƒ per-element FeedExp via FUN_1163d760(elem): elem 0=Fire, 1=Water, 2=Thunder, 3=Dragon, 4=Ice (written FeedExp_Fire/Water/Thunder/Dragon/Ice)
- ƒ CostMoney = uStack_58 (money consumed by feed, from server result struct via FUN_1098bc10 / vtbl[+0xc](auStack_38,auStack_6c))
- ƒ consumed items iterated: count per entry via FUN_104d4800 id/count into (id=uStack_b8, count=piStack_bc) accumulated by FUN_1163d700; loop bound = fragment list count vtbl[+0x28]
- ƒ gated on levelInfo+0x26118 != 0
- $ CostMoney = currency consumed feeding fragments (server-computed, displayed here)
- $ consumed fragment items (id,count) enumerated for UI

### StarStoneController::RegisterScriptHandlers `@1098bd60`
*Registers star-stone (星石) script handlers: C2AS_GetStarStoneData, FeedFragments(1098c900), FeedCheck, GetAttributeByLevel, GetRepairMoney, RepairStone, GetStarStoneMaxLevelExp, GetStarFragmentAttribute, EnchaseLights, EnchaseCheck, GetCurrentWeaponAttribute, GetStarLightData, GetStarLightSlotUnlockCondition, GetStarLightAvailableList.* (server: client-only: handler registration. RepairStone/FeedFragments/EnchaseLights mutate items+consume currency and must be server-authoritative (cost + success validated server-side)., conf high)


## guild-economy  (1)

### TlvGuildData::DebugFormat `@0x10136e50`
*TDR human-readable text-dump of the full Guild data TLV struct (guild economy state). Walks every field/nested-list emitting '[label] value' lines. No arithmetic; pure struct-to-text. Reveals the guild economy layout: fund, reputation, resources (A/B/C/D), and their daily/weekly/max counters, guild-commerce commodity unlocks, celebration scores and hunt-soul.* (server: client-only (debug/log text formatter); but documents the server-authoritative guild economy struct layout, conf high)
- ƒ level @ param_1[0x89]; exp @ [0x8a]; repute @ [0x8b]; fund @ [0x8c] (i32); arena @ [0x8d]; resA @ [0x8e]; resB @ [0x8f]; joinLevel @ [0x90]; leader int64 @ [0x91],[0x92]
- ƒ fundMax int64 @ byte-off 0x362e9 (param_1[0xd8b9],[0xd8ba]); hallLevel(u8) @ 0x362ec; recruitingLevel(u8) @ 0x362ed; resourcingLevel(u8) @ 0x362ee; tradingLevel(u8) @ 0x362ef; trainingLevel(u8) @ 0x362f0; guilderCountMax(u32) @ 0x362f1
- ƒ fundDaily int64 @ 0x362f5; fundWeekly int64 @ 0x362fd; commodityUnlock1 int64 @ 0x36305; commodityUnlock2 @ 0x3630d; commodityUnlock3 @ 0x36315; fundDailyTime @ 0x3631d; fundWeeklyTime @ 0x36321
- ƒ resC @ 0x36325; resD @ 0x36329; resA/B/C/D Daily @ 0x3632d/0x36331/0x36335/0x36339; resA/B/C/D Weekly @ 0x3633d/0x36341/0x36345/0x36349; resA/B/C/D Max @ 0x3634d/0x36351/0x36355/0x36359
- ƒ addFundWithDay @ 0x3635d; consumeFundWithDay @ 0x36361; plot @ 0x36365; questPrize @ 0x6df65; contribution @ 0x6df69; huntSoul int64 @ 0x6df71; celebrationScore @ 0x6df91
- ƒ signUpCount(i32) @ 0x38dda validated: <0 -> -6, >0x40(64) -> -7; depotOpenFlag(u8) @ param_1[0x1b7b4]
- $ Guild fund (i64 fund/fundMax/fundDaily/fundWeekly) and 4 guild resources resA-D with daily/weekly accrual and max caps — guild economy currency pools
- $ guilderCountMax = guild member capacity


## pvp-rewards  (1)

### TlvPvpSeasonStats::DebugFormat `@0x1017f1e0`
*TDR text-dump of a PVP/arena season stats struct: season, score, top score, weekly reward flag, streak, win/lose/total counts, reward mask and extra reward/medal counters.* (server: client-only formatter; documents PVP season reward-eligibility state, conf high)
- ƒ iCurSeason [0]; iScore [1]; iScoreTop [2]; iWeekReward [3]; iStreak [4]; iWinNum [5]; iLoseNum [6]; iTotalNum [7]; iRewardMask [8]; iExRewardCount [9]; iStepReward [10]; iExMedalCount [0xb]
- $ iRewardMask/iStepReward/iExRewardCount/iExMedalCount drive season reward payout eligibility


## activity-rewards  (1)

### TlvDailyActivityRecord::DebugFormat `@0x101817b0`
*TDR text-dump of a per-day activity/encounter record: dateDay, curHigher, meetTime, giantTime, dailyRewardFlag, rewardFlag, activity.* (server: client-only formatter; documents daily activity/reward-flag state, conf medium)
- ƒ dateDay [0]; curHigher [1]; meetTime [2]; giantTime [3]; dailyRewardFlag [4]; rewardFlag [5]; activity [6]
- $ dailyRewardFlag/rewardFlag/activity gate daily activity reward grants


## character-economy  (1)

### TlvCharRoleAttributes::DebugFormat `@0x101b8940`
*TDR text-dump of the master character attribute TLV (TlvCharRoleAttributes @0x101B6660 per TLV_DOCS). Emits ~168 fields. This is the authoritative per-character economy/progression state: all currencies, weapon EXP pools, VIP timers, clan/PVP currencies, hunt-soul, HR level. No arithmetic — just field-by-field print, but it is the canonical currency-offset map.* (server: client-only formatter; struct is fully server-authoritative — these are the exact offsets the server must own for currency/EXP mutations, conf high)
- ƒ roleGID int64 @ [0],[1]; oCharLevel @ [2]; oCharExp @ [3]; oStarLevel @ [4]; oCharHP @ [5]; oCharMaxHP @ [6]; oCharStr [7]; oCharBst [8]; oCharLck [9]; oCharVgr [10]; oCharDefence [0xb]
- ƒ CURRENCIES: oCharMoney @ [0xc]; oCharBoundMoney @ [0xd]; oCharCredit @ [0xe]; oCharBoundCredit @ [0xf]; oCharCatCredit @ [0x30]; oCharReviveCredit @ [0x31]; oClanMoney @ +0x152; oClanMoneyPVP @ +0x15e; oPVPMoney @ +0x196; oCharCatMoney @ +0x19a; oCharCatMoneyWeek @ +0x19e (cap oCharCatMoneyWeekMax @ +0x1a2); oTotalCredit float @ +0x1ba
- ƒ oCharFatigue @ [0x10]; oCharMaxFatigue @ [0x11]; weapon EXP: oClaymoreExp [0x12], oHammerExp [0x13], oKatanaExp [0x14], oDuelSwordExp [0x15], oSwordExp [0x16], oSpearExp [0x17], oGunExp [0x18], oBowExp [0x19], oCrossbowExp [0x1a], oFluteExp [0x1b]
- ƒ oCharContribution @ [0x21]; oCharRemainsExp @ [0x22]; oFarmExp @ +0x8e; oExtDailyExp @ [0x33]; oCharRemainsDoubleExp @ [0x45]; oExtDailyDoubleExp @ [0x46]
- ƒ VIP: oVIPLevel [0x47]; oVIPExp [0x48]; oVIPBaseEndTime [0x49]; oVIPGrowthEndTime [0x4a]; oVIPProfitEndTime [0x4b]; oBanChatEndTime [0x4c]
- ƒ oHuntSoul @ +0x1a6; oLevelHuntSoul @ [0x87]; oTaskHuntSoul @ [0x88]; oCampHuntSoul @ [0x89]; oLastHuntSoul @ +0x1c6; oCharHRLevel @ +0x156; oCharHRPoint @ +0x15a; oTotalHRPoint @ +0x1ca; oShouHunPoint @ +0x1ee; oLieHunPoint @ +0x1f2; oMVPPoint @ +0x1f6; oIllustratePoint @ [0x8b]
- $ Primary tradable currency oCharMoney (i32) + bound variant oCharBoundMoney; premium currency oCharCredit + bound oCharBoundCredit + float oTotalCredit
- $ Secondary currencies: cat money/credit (weekly-capped), clan money, PVP money, hunt-soul pools, HR points, MVP/hunt points
- $ Per-weapon EXP pools (10 weapon types) — progression
- $ oCharCatMoneyWeek capped by oCharCatMoneyWeekMax (weekly earning cap)


## guild-rewards  (1)

### TlvCelebrationMember::DebugFormat `@0x102a3f50`
*TDR text-dump of a member/identity record with celebration reward: szName, ullDbid(i64), dwRtid, ullUin(i64), iCelebrationReward.* (server: client-only formatter, conf high)
- ƒ szName @ +0; ullDbid int64 @ +0x20/+0x24; dwRtid @ +0x28; ullUin int64 @ +0x2c/+0x30; iCelebrationReward @ +0x34
- $ iCelebrationReward = per-member guild celebration reward amount/flag


## player-state  (1)

### TlvOnlineRoleData::DebugFormat `@0x102ca4c0`
*TDR text-dump of the master online-player data blob sent at login/entity-init. Emits session/world/server identity then every inventory and system sub-blob: bag/equip/store items, shortcuts, buffs, skills, pets, attrs, tasks, guild, action-point, guide steps, cooldowns, schedule prizes, mail, npc attitude, item box, item rebuild, soul stone, battle-item use, cuisine level, celebration reward. Documents inventory sizing/caps.* (server: client-only formatter; struct is the server-authoritative full player snapshot and defines inventory capacity caps the server must enforce, conf high)
- ƒ identity: dwAccountID [0]; iNetID [1]; ullDBId i64 [2],[3]; dwSessionID [4]; dwWorldID [5]; dwServerID [6]; dwWorldSvrID [7]; dwServerTime [8]; dwIsReConnect [9]; szName @ [10]; bGender(u8) @ [0x12]; bIsGM(u8) @ +0x49; iFaction @ +0x6f; iWeapon @ +0x77
- ƒ INVENTORY CAPS: iBagSize(i32) @ +0x89 cap 82000; szBagItem[] @ +0x8d; wEquipSize(u16) @ +0x140dd cap 0x1000(4096), szEquipItem @ +0x140df; iStoreDataSize(i32) @ +0x150df cap 200000, szStoreItem @ +0x150e3; wStoreSize @ +0x83; wNormalSize @ +0x85; wMaterialStoreSize @ +0x87
- ƒ wShortcutCount(u16) @ +0x45e23 cap 0x3c(60); wBuffSize @ +0x46005 cap 0x2800(10240); wSkillSize @ +0x48807 cap 0x2800; wPetSize @ +0x4b009 cap 0x2800; wAttrSize @ +0x5685d cap 0x5000(20480)
- ƒ social caps: iFriendCount @ +0x4d80b cap 500; iPasserbyCount @ +0x55ed3 cap 0x14(20); iBlacklistCount @ +0x562fb cap 0x14; iFriendGroupCount @ +0x5670f cap 10
- ƒ iTaskLen @ +0x5b85f cap 0x2800; iGuildLen @ +0x5e063 cap 0x400(1024); wGuideStepCount @ +0x5e487 cap 0x100; wCDSize @ +0x5e689 cap 0x400; iSchedulePrizeLen @ +0x5ea8b cap 0x400; iMailInfoLen @ +0x5ee8f cap 0x400; iNpcAtdInfoLen @ +0x5f293 cap 0x400
- ƒ array count validation pattern throughout: cnt<0 -> -6, cnt>cap -> -7
- $ Defines maximum inventory/store sizes (bag 82000, store 200000, equip 4096) that bound how many items a player may hold — server must cap adds against these
- $ Contains item box / item rebuild / soul stone / battle-item-use sub-blobs (crafting & consumable inventories) and iCelebrationReward / iCanGetRewarded reward flags


## protocol  (1)

### TdrDbg_DispatchByCmdId_MasterFormatter `@1043b460`
*Master TDR debug-format dispatcher. Big jumptable switch over a protocol command/message ID (param_1) that labels the payload with the struct name (TdrText_FieldLabelChar) then calls the per-message text formatter. param_4>=0 increments a depth/index arg by 1 before recursing. Covers the ENTIRE protocol (hundreds of message types), including all economy messages.* (server: client-only/tooling: pure debug text-formatting dispatcher. BUT it is the authoritative command-ID -> message-struct registry for the whole protocol; economy messages routed here include: stAddCraft/stAddCraftResult/stBeginCraft/stBeginCraftResult (crafting), stManufactureProduceReq, stMaterialExchange/stMaterialExchangeNtf (material exchange), stNpcShopBuyItemReq (shop purchase), stTradeErrorRet, stAuction* (Bidding/Cancel/Sale/Search/Sort - auction house), stC2SVIPOpenReq/stC2SVIPServiceRenewReq (VIP purchases), stBuyExpLimitRsp (buy exp cap), stC2SGuildTakeWage/stC2SGuildOperateItemReq/stC2SGuildLevelUp/stC2SGuildLearnSkill (guild econ), stCatCuisineMakeReq (cooking), stC2SSoulStoneLevelUp/StageUp/AttrUpgrade/Reset (soulstone upgrade), stCharmRebuildReq (charm reroll), stC2SActivityFetchAward/stC2SAchieveFetchReward (reward claims), stC2SPetRng/stC2SActivityMonolopyDice (lottery/gacha-like)., conf high)
- ƒ guard: if((param_2-1+(param_1!=0)) != 0 \|\| (param_1-1) > 0xee00) -> return 0 (bail)
- ƒ special: param_1 == 0x201 -> '[stAction]' (FUN_102d88a0)
- ƒ range param_1-1 < 0x10e -> switch((&DAT_10457a8f)[param_1]) jumptable; jumptable base DAT_10457a8f, case values map to struct labels
- ƒ recurse arg: iVar = (param_4 < 0) ? param_4 : param_4+1 passed to per-struct formatter


## airship  (1)

### AirshipOccupyView::BuildLevelInfoVO `@0x109f85a0`
*Builds UI VO for a guild-airship / occupied-level entry (param_5==3): guild vs captain comparison, ship status, occupancy players, and the level's reward payload (normal + delicate rewards, material drops).* (server: client-only (display of server-owned occupy state and reward definitions), conf medium)
- ƒ isSameGuild = (strcmp(playerGuildName, ship+0x20) != 0) ? ... emitted as 1 when strings differ (uVar8!=0 branch sets 1).
- ƒ isAttack = (strcmp(playerGuildName, ship+0x64) != 0).
- ƒ shipStatus = ((uVar9 << 0x1d) >> 0x1d) = sign-extended low 3 bits of *(ship+0x60).
- ƒ textFinishTimes = (uVar9 >> 3) & 0x1fff (bits 3..15 of *(ship+0x60)).
- ƒ textTimeReamain = (*(ship+0xc) - iStack_88) + 0x4b0  [remaining time; +1200 constant offset].
- ƒ levelID = *(ship+0x10); occupyTime = *(ship+0x14).
- ƒ guildName=ship+0x40-region string; captainName=ship+0x40; captainGuild=ship+0x20; occupyHunterText=ship+0x64; occupyPlayer1..4 = ship+0x84/0xa4/0xc4/0xe4.
- ƒ Reward block from ship-config (iStack_c4): shipId=*(cfg+0x10); delicateRewardId=*(cfg+0x78); delicateRewardNum=*(cfg+0x7c); normalRewardID=*(cfg+0x70); normalRewardNum=*(cfg+0x74); materialNum=*(cfg+0x64); materialTagType=*(cfg+0x60).
- $ normalRewardID/normalRewardNum and delicateRewardId/delicateRewardNum define the occupy reward items and counts; materialNum/materialTagType define material payout.


## vip  (1)

### CPlayerVIPLevelUpInfo::LookupByLevel `@0x10a03930`
*2D config-table lookup into CPlayerVIPLevelUpInfo (VIP level-up thresholds). Returns the config value for a given level index, or 0 if out of range.* (server: config-lookup (shared VIP level-up threshold table; both client and server read the same config to gate VIP levels), conf high)
- ƒ mgr obtained via CPlayerVIPLevelUpInfo::GetManager()/CInfoManager::FindByName.
- ƒ Guard: level!=-1 && (level!=0 \|\| mgr[0xc]==0) && mgr[10]!=0; then idx = level - mgr[0xc]; require 0<=idx<mgr[9].
- ƒ row = *(mgr[8] + (idx / mgr[10]) * 4); if row!=0 return *(row + (idx % mgr[10]) * 4).
- ƒ mgr[0xc]=base level offset, mgr[9]=total count, mgr[10]=columns-per-row (chunked 2D table).


## telemetry  (1)

### TGBang::ReportLevelUpTelemetry `@0x10b74240`
*Formats a Tencent 'tgbang' analytics/beacon URL query string reporting role level (and qt=levelUp when flagged) and dispatches it via FUN_10b73f00.* (server: client-only (external analytics beacon; not gameplay-authoritative), conf high)
- ƒ Format: "&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&ext=" (param_14==0) or the same with "&qt=levelUp" inserted before &ext= (param_14!=0).
- ƒ Buffer size 0x823 bytes; snprintf-style via FUN_100ec3b0.


## gathering  (1)

### ScriptBind::RegisterLootAndEventEnums `@0x10d1d7f0`
*Registers script/flowgraph enum constants into a script table: resource-quality, gather loot types (Mine/Herb/Insect/Fish/Mushroom/Honey/Stone/Body/Bone/Egg...), interest-point types, and the eMHGameEventID_* client event enumeration (~0x08..0x85).* (server: client-only (script/flowgraph constant registration; loot-type taxonomy is shared vocabulary), conf high)
- ƒ Float enum values: DAT_3f800000=1.0, DAT_40000000=2.0, DAT_40400000=3.0, DAT_40800000=4.0, DAT_40a00000=5.0, DAT_40c00000=6.0, DAT_40e00000=7.0, DAT_41000000=8.0, DAT_41100000=9.0, DAT_41200000=10.0, DAT_41300000=11.0, DAT_41400000=12.0, DAT_41800000=16.0, DAT_41880000=17.0, DAT_41900000=18.0.
- ƒ eLootType_ order: Mine=1,Herb=2,Insect=3,Fish=4,Mushroom=5,Honey=6,Stone=7,Shit=8,Remain=9,Body=10,BrokenPart=11,Bone=12,Egg=16,Web=17,Other=18 (values as floats).
- ƒ eMHGameEventID_* integer enum registered via FUN_10d1cc20(name,id) from 8..0x85; notable: AddCraft=9, BeginCraft=10, BeginLoot=0xb, VipLevelNotify=0x76, LevelUnlockNotify=0x6d.


## player-data-schema  (1)

### CharAttrTable::SetFieldByName `@0x11356730`
*Player persistent-attribute deserializer: given a DB/config field name, a value, and the character struct base, matches the name and writes the value to the correct struct offset. This is effectively the full authoritative player-attribute schema (currency, EXP, level, VIP, clan, weapon proficiency, farm, PVP, face customization).* (server: authoritative (schema map): although this function is client-side deserialization of server-sent character data, every offset here is a server-owned persistent field. Currency mutations (CharMoney/BoundMoney/Credit/etc.) and all EXP/level fields MUST be computed and validated server-side. CharCatMoneyWeek + CharCatMoneyWeekMax indicate a weekly earn cap the server must enforce., conf high)
- ƒ Dispatch: for each name, iVar1=FUN_100ec310(name,"<Field>"); if match, *(base+OFFSET)=value; return 1. (int32 unless noted undefined2=int16.)
- ƒ PROGRESSION: CharLevel@0x8, CharExp@0xc, StarLevel@0x10, CharHP@0x14, CharMaxHP@0x18, CharStr@0x1c, CharBst@0x20, CharLck@0x24, CharVgr@0x28, CharDefence@0x2c.
- ƒ CURRENCY: CharMoney@0x30, CharBoundMoney@0x34, CharCredit@0x38, CharBoundCredit@0x3c, CharCatCredit@0xc0, CharReviveCredit@0xc4, PVPMoney@0x196, CharCatMoney@0x19a, CharCatMoneyWeek@0x19e, CharCatMoneyWeekMax@0x1a2, HuntSoul@0x1a6, ClanMoney@0x152, ClanMoneyPVP@0x15e, TotalCredit@0x1ba (stored as FLOAT), HuntingCreditExchange@0x1da, WeekMoneyGain@0x20e.
- ƒ FATIGUE: CharFatigue@0x40, CharMaxFatigue@0x44.
- ƒ WEAPON EXP: ClaymoreExp@0x48, HammerExp@0x4c, KatanaExp@0x50, DuelSwordExp@0x54, SwordExp@0x58, SpearExp@0x5c, GunExp@0x60, BowExp@0x64, CrossbowExp@0x68, FluteExp@0x6c.
- ƒ MISC PROGRESSION: CharContribution@0x84, CharRemainsExp@0x88, CharRemainsDoubleExp@0x114, ExtDailyExp@0xcc, ExtDailyDoubleExp@0x118, FarmExp@0x8e, FarmEvaluation@0x92, IllustratePoint@0x22c, TotalHRPoint@0x1ca, CharHRLevel@0x156, CharHRPoint@0x15a.
- ƒ VIP: VIPLevel@0x11c, VIPExp@0x120, VIPBaseEndTime@0x124, VIPGrowthEndTime@0x128, VIPProfitEndTime@0x12c, VIPVASFrozen@0x134(i16), VIPBaseCanUse@0x136(i16), VIPGrowthCanUse@0x138(i16), VIPProfitCanUse@0x13a(i16).
- ƒ CLAN: ClanScore@0x14a, ClanScoreMax@0x14e, ClanLeaveTime@0x162.
- ƒ WildHuntGuild@0x1b2 also writes sign-extension into +0x1b6 (64-bit value: *(+0x1b6)=value>>0x1f).
- ƒ SoulStone/PVP scoring: SoulStoneLevel@0x206, SoulStoneAtkLevel@0x212, PersonalELO@0x192, XHunterScore@0x1fa, XHunterHighScore@0x202, MVPPoint@0x1f6, ShouHunPoint@0x1ee, LieHunPoint@0x1f2.
- ƒ MonopolyRoundCount@0x1e2, MonolopyActivity@0x1e6, MonolopyCurGrid@0x1ea, MonolopyAccStep@0x1fe (spellings as shipped).
- $ Defines the exact persistent fields the server owns and must be authoritative over: CharMoney/CharBoundMoney (gold, unbound/bound), CharCredit/CharBoundCredit (credits), CharCatCredit, CharReviveCredit, PVPMoney, CharCatMoney(+week/weekMax cap), HuntSoul, ClanMoney/ClanMoneyPVP, TotalCredit(float), WeekMoneyGain, plus all *Exp fields.


## enchant  (1)

### CEquipEnchant::ApplyTimedEffect `@114242e0`
*Applies an equipment-enchant timed effect. Reads an enchant id/level via vtable+0x3c, looks up CEquipEnchantInfo entry; requires entry+0x34 (effect/buff id) nonzero. If entry+0x30 (duration/threshold) nonzero, reads current value via vtable+0x40 and compares against a counter/time from FUN_10a136c0(); early-returns if already satisfied, else computes a residual. Creates the effect via FUN_115d5b10(effectId, 1, seconds*1000) and stores the handle at param_2+0xc.* (server: authoritative - enchant effect id and duration come from CEquipEnchantInfo config; server should compute/grant the timed effect., conf medium)
- ƒ enchantKey = vtable[0x3c](); CEquipEnchantInfo lookup: idx=key-mgr[0x30]; entry=mgr[0x20][idx/mgr[0x28]][idx%mgr[0x28]]
- ƒ require entry[0x34] != 0 (effect id)
- ƒ if entry[0x30] != 0: cur=vtable[0x40](); limit=FUN_10a136c0(); if (uint)(entry[0x30]+cur) <= limit return (no-op); residual = (entry[0x30]-limit)+cur
- ƒ effectHandle = FUN_115d5b10(entry[0x34], 1, residual*1000)  // *1000 = seconds->milliseconds duration
- ƒ store handle at param_2+0xc
- $ entry+0x34 = enchant effect/buff id; entry+0x30 = base duration/threshold (seconds); effect duration passed as residual*1000 ms


## equipment-enhance-transfer  (1)

### CEquipEnforceTransferInfo::GetRecordById `@0x115c3c20`
*CInfoManager sparse-array accessor returning the CEquipEnforceTransferInfo record for index param_1 (rules for transferring enhancement level between equipment).* (server: authoritative data source: read-only config lookup; enhance-transfer cost/rules, conf high)


## level  (1)

### CLevelEntryPointDef::LoadFromDataNode `@0x116b9a90`
*Deserializes a level entry-point / mission-tab definition (wide-char field names): Entry_ID(->+0x10), Entry_Point, Position_X, Position_Y, Level_ID, FromLevelID, FromTriggerName, TaskShowCondition, TabID, TabName, IsSpecReward (stored as bool at local_40c: value==1). Uses the standard per-field 'register name / cache / read' idiom with a shared init bitmask DAT_1238b3b4.* (server: client-only (UI/level entry-point config); IsSpecReward flags a special-reward level, conf medium)
- ƒ IsSpecReward stored as (parsedValue == 1)


## feature-flags  (1)

### CFunctionSwitchDef::LoadFromDataNode(virtualized) `@0x116d3ab0`
*Config parser (size 24299, marked <decompile failed/virtualized>) for a feature-unlock/permission table. Field names indicate per-feature enable flags: Title, ForgeEnabled, SupplyBoxEnabled, Mail, Auction, Enhance, RankUp, ManufactureLearn, Storage, Found, WeaponWake, EquipEmbed, plus many HunterGroup* actions.* (server: unknown (body not decompilable); by field names this is a feature-gate config — an authoritative server would enforce whether Forge/Enhance/Auction/etc. are enabled, conf low)


## config-factory  (1)

### GameDefFactory::DispatchByTypeName (type -> struct size) `@0x1177c850`
*Large string-dispatch factory: compares an incoming type-name against ~150 Def type names (FUN_100fd0c0 = strcmp) and, on match, invokes FUN_10c3d580(size) with that type's struct size. Effectively a map of def-type-name -> allocation size. Economy-relevant sizes recovered: EquipDef=0x10, DragonDef=0x40, DragonItemDef=8; GiftBagDef=0x30, GiftBagGroupDef=0xC4, GiftBagItemDef=0x10, GiftBagGoldPrizeDef=0xC, GiftBagItemPrizeDef=0x14, GiftBagHuntCreditPrizeDef=8, GiftItem=0xC; ItemNumRateDef=0xC, FixedItemDef=0x20, RandomItemDef=0x10, RandomItemGroupDef=0x24, ItemDecomposeDef=0x24; RapidHuntDef=0x18, RapidHuntGoldPrizeDef=0xC, RapidHuntItemsPrizeDef=0x10, AttendAwardDef=0x10, RapidAwardDef=0x14, MasterAwardDef=0x10, MasterAward=0xC; ScheduleDef family (SchedulePrizeDef=0x2C, ScheduleGoldPrizeDef=0xC, ScheduleExpPrizeDef=8, ScheduleItemsPrizeDef=0x14, ScheduleGoldShowDef=0xC, ScheduleItemsShowDef=0x10, ScheduleItemDef=0x10); SoulBeastDef=0x4C, SoulBeastFoodDef=0x14, SoulBeastImageDef=0x84, SoulBeastSocialActionDef=0x38; TaskDef=0x138, TaskGoldPrizeDef=0x10, TaskExpPrizeDef=0xC, TaskMerExpPrizeDef=8, TaskItemPrizeDef=8, TaskItemsPrizeDef=0x10, TaskItemReclaimDef=0x10, TaskGuildPrizeDef=0x10, TaskHRPointPrizeDef=8, TaskHuntCreditPrizeDef=8, TaskFarmExpPrizeDef=0xC, TaskNpcAtdPrizeDef=0xC, TaskContributionPrizeDef=8, TaskHuntSoulPrizeDef=8, TaskSpoorPrizeDef=8.* (server: client-only plumbing (config object factory); the recovered struct sizes are useful reference for reconstructing the reward/prize/def layouts, conf high)
- ƒ type-name string == matched -> FUN_10c3d580(<size const>) for that type (see purpose for the size map)


## monster  (1)

### CMonsterWaveLayerCfg::LoadFromXml `@0x11a2c0b0`
*XML/config reader that parses a monster-wave/spawn-layer record into a struct. Uses the standard field-read pattern (attr-name intern + vtable getters +0x10 has, +0x20 int, +0x24/+0x28 string). Notably includes bound-gold and unbind-gold reward fields and a drop item group.* (server: authoritative (server-side spawn config: gold/item rewards and monster counts the server must grant and validate), conf high)
- ƒ field->offset: layer=+0x10, modelGroupID=+0x18, time=+0x1c, delayStartTime=+0x20, isTriggerStart(bool)=+0x24, bindGlod=+0x28, unBingGold=+0x2c, addPlayerBuffID(u"IsHaveReward"-adjacent DAT_11d6f09c)=+0x30, dropItemGroupID=+0x34, addBossBuffID=+0x38, IsHaveReward=+0x3c(?), ResouceID=+0x40, +0x44, MonsterID=+0x48, MonsterNum=+0x4c
- ƒ name field stored via CPet::SetName (string setter reused)
- $ bindGlod (bound gold reward for clearing the wave) -> struct+0x28
- $ unBingGold (unbound/tradeable gold reward) -> struct+0x2c
- $ dropItemGroupID -> struct+0x34 (item drop table reference)


## npc-shop-ui  (1)

### CNpcTalkUI::BuildNpcInteractionData `@0x104db710`
*Builds the NPC dialogue / interaction menu data model for the client UI: NPC id/name/hello text, friendship (frienddegree / friendshipdescription / valueNpcProgress[Max]), and per-function menu entries (funcType/funcParam/funcParam2/funcTalkId/funcNpcId/funcTitle) including shop 'Sale[%d]' listings, 'ManufactureLearn' (recipe learning), '_CatTreasure', and activity reward grants. Body is <decompile failed/virtualized> so control flow is not recoverable.* (server: client-only: populates a UI data model of NPC menu options (shop sale lists, manufacture-learn entries, activity rewards). Any actual purchase/learn/reward-grant is issued as a separate server request; despite the GrantActivityReward call name the function is a UI builder and its logic could not be decompiled., conf low)
- $ 'Sale[%d]' — indexed shop sale entries (NPC vendor listings); amounts not recoverable (virtualized)
- $ 'ManufactureLearn' — recipe/craft learning menu entry
- $ '_CatTreasure' — cat treasure feature entry


## activity-reward-ui  (1)

### CGuildActivitySystemUI::RegisterFlashCallbacks `@0x104f71e0`
*One-time registration of named Flash->C++ callbacks for the guild/camp activity system UI (all commands prefixed 'C2AS_' = Client-to-ActivitySystem). Each block: FUN_100b62c0 builds a std::string key, FUN_104f9970 binds it to a handler function pointer, FUN_10c3d5d0 frees the temp string. Tail installs two extra bindings via FUN_10d17440/FUN_10d17870 gate pattern.* (server: client-only: pure UI callback registration table. The registered commands are client requests; server remains authoritative. Reward-claim commands of interest: C2AS_FetchPersonAward / C2AS_FetchGuildAward / C2AS_FetchCampAward (reward claim requests), C2AS_AcceptDoubleReward (double-reward opt-in), C2AS_AcceptTask/SubmitTask/GiveUpTask/RefreshTasks, C2AS_GetExtraSubmitCount., conf high)
- $ C2AS_FetchPersonAward / FetchGuildAward / FetchCampAward: reward-claim request commands (server grants)
- $ C2AS_AcceptDoubleReward: request to accept a doubled reward
- $ C2AS_GetExtraSubmitCount / GetCurrentLevelTicket: task-submit quota / entry-ticket queries


## cat-cuisine-ui  (1)

### CCatCuisineUI::BuildCatFoodListModel `@0x104fd9e0`
*Builds the client UI data model for the Felyne/cat cuisine (cooking) system. Iterates every cat-food record (count=FUN_104fd5a0, record=FUN_104fd510(i)), applies unlock/eligibility filters, and for each eligible dish emits fields itemID/itemName/itemDesc/costMoney/foodLevel/cookName/cookType/cookLevel/iconPath/isActivity/FreeInBattle plus catFoodUnlock/itemNew flags, then nested arrays 'arrayMaterial' (required ingredients) and 'arrayBuffer' (granted buffs). Also registers sub-callbacks _refreshSlotState/_PlayEatCuisineRequest/_EatCuisineRequest/_PlayCuisineResultRequest/_onGetRoleMoney/_unlockCatFood.* (server: client-only: display model of dishes, their money cost, ingredient requirements (owned vs required), and resulting buffs. The eat/cook action is sent to the server via '_EatCuisineRequest'; ingredient-sufficiency shown here is a client-side display convenience, not the authoritative check. Server must re-validate costMoney and material counts on the eat request., conf medium)
- ƒ Per-material owned count: currentCounts = FUN_113f9300(0,itemID,0) + FUN_113f9300(2,itemID,0) + FUN_113f9300(10,itemID,0) — sums the item's quantity across bag containers 0, 2 and 10.
- ƒ Cat-food record offsets (int* piVar4, indices are 4-byte words): [0x1d]=iconPath, [0x1e]=costMoney, [0x20]=category/cookType key (matched against iStack_124), [0x21]=cookLevel, [0x22]=foodLevel, [0x23]=cookType, [0x25]=FreeInBattle (low byte), [0x26]=requiredHuntRank (compared to CPlayer::GetHuntRankOrCount), [0x27]=required-unlock id (checked via *(pcVar3+0x2ab0) vtbl+0x60), [0x28]=required id (checked via vtbl+0x46c then FUN_114e0340), [0x29]=activity id (isActivity; checked via *(pcVar3+0x2acc) vtbl+0x3c). Name/desc: piVar4+5=itemName, +6=itemDesc, +7=cookName.
- ƒ Material array entry stride = 2 words (8 bytes): piVar12[0]=itemID (requireCounts source item), piVar12[1]=requireCounts (required quantity).
- ƒ Eligibility gate: record shown only if ([0x26]==0 \|\| huntRank>=[0x26]) && ([0x27]==0 \|\| unlock-check) && ([0x28]==0 \|\| feature-off \|\| FUN_114e0340 ok) && ([0x29]==0 \|\| activity-check).
- ƒ local_f4 uninitialized sentinel = 0xdeadbeaf when variant tag (in_stack_00000010[7] & 0x8f) is not 3/4 (stock ScriptAnyValue plumbing).
- $ costMoney = record[0x1e] — currency cost to cook/eat a dish
- $ requireCounts = material[1] — required quantity of each ingredient item
- $ foodLevel=record[0x22], cookLevel=record[0x21], cookType=record[0x23] — dish tiering
- $ requiredHuntRank = record[0x26] — hunter-rank gate


## enchant-data  (1)

### CEquipEnchantInfo::GetRecordByIndex `@0x1050ed80`
*InfoManager table accessor: resolves the CEquipEnchantInfo data manager (via GetInfoMgr, else CInfoManager::FindByName('CEquipEnchantInfo'), else lazy-init fallback DAT_123be480), then returns the enchant record entry for a given index/id using a paged 2D-array lookup.* (server: validation/data: read-only static config-table lookup used by both sides to resolve an equip-enchant definition by id. Server should own the same table to validate enchant references and costs., conf high)
- ƒ Manager struct offsets: +0x20 = pointer-array of row chunks, +0x24 = total entry count, +0x28 = entries-per-chunk (page size), +0x30 = base-id offset.
- ƒ Lookup: i = param_1 - mgr[+0x30]; guard: param_1!=-1 && (param_1!=0 \|\| mgr[+0x30]==0) && mgr[+0x28]!=0 && 0<=i<mgr[+0x24]; row = mgr[+0x20][ i / mgr[+0x28] ]; if row!=0 return row[ i % mgr[+0x28] ]; else 0.
- ƒ Returns 0 (not found) on any guard failure.


## enchant-ui  (1)

### CPetPanelUI::OnGetEnchantInfo `@0x10517530`
*'GetEnchantInfo' Flash callback handler (param_6==4 path). Resolves the currently selected item's enchant id, looks up the CEquipEnchantInfo record via FUN_1050ed80, and writes the enchant description string 'm_strEnchantDesc' back to the UI (empty string DAT_11d9d32b if no record).* (server: client-only: read-only enchant-description display. No currency/item mutation., conf medium)
- ƒ Guard: param_6==4 && player-model manager present (*(DAT_1202e818+0xd0)+0x90 vtbl+0xb4) with field +0x260e0 != 0 && *(param_1+0x30)!=0.
- ƒ Variant unpack: uVar5 = *(param_5+8) when (*(param_5+4)&0x8f) in {3,4} else 0xdeadbeaf; iVar1 = *(param_5+0x50) when (*(param_5+0x4c)&0x8f) in {3,4} else -0x21524151 (=0xDEADBEAF sentinel).
- ƒ Item resolve: if iVar1==6 uVar5 = FUN_112f5b90(uVar5, *(DAT_123bb978+0x34)) then FUN_113f9bb0(6,uVar5); else FUN_113f9bb0(iVar1,uVar5). enchantId = item vtbl+0x3c(); record = FUN_1050ed80(enchantId); desc from FUN_100e5b40 -> +0x14.


## soulstone-data  (1)

### CSoulStoneLevelUpInfo::GetRecordByIndex `@0x10520930`
*InfoManager table accessor for soul-stone level-up config: resolves the CSoulStoneLevelUpInfo manager (GetManager, else CInfoManager::FindByName('CSoulStoneLevelUpInfo'), else lazy-init fallback DAT_123c7314) and returns the level-up record for a given index/id via the same paged 2D-array lookup as the enchant table.* (server: validation/data: read-only static config-table lookup for soul-stone upgrade definitions. Server should own the same table to validate soul-stone level-up costs/success., conf high)
- ƒ Manager offsets: +0x20 row-chunk array, +0x24 total count, +0x28 page size, +0x30 base id.
- ƒ i = param_1 - mgr[+0x30]; guard param_1!=-1 && (param_1!=0 \|\| mgr[+0x30]==0) && mgr[+0x28]!=0 && 0<=i<mgr[+0x24]; return mgr[+0x20][i/mgr[+0x28]][i%mgr[+0x28]] (or 0).


## flash-command-router  (1)

### CGameFlashBridge::DispatchFSCommand `@0x105ac060`
*Central client-side FSCommand / console-string dispatcher (~150 cases). Reads command name = arg[1], then case-matches via _stricmp and parses trailing string args with strtol/strtod/strtoul before forwarding to a dedicated request/notify handler. Routes gameplay + economy commands: EnterInstance, GMCommand, LeaveInstanceReq, AddCraft, BeginCraft, BeginLoot, RequestPaidBox, AcceptEntrustTask/GiveUpEntrustTask/EntrustSelHuntBox (commissions), OpenChargeInternalUrl (cash-shop top-up), VipLevelNotify, OnResponseActivityResponseAcceptTask/PickupItem, S2CUpdateOperationItemCountsRefresh[Data], plus many UI/tutorial/role/instance messages.* (server: client-only: string-command routing layer. It only parses args and calls the corresponding request/notify function; it performs NO cost or ownership validation itself. Every economy command it dispatches (crafting begin/add, loot, paid box, commission accept, charge/top-up, activity task accept/pickup) must be validated authoritatively by the target server request handler — this router is not a trust boundary., conf high)
- ƒ Arg access: count = (*param_1)[1]() ; arg[i] = (*param_1)[2](i). Commands guard on count (e.g. '2 < count' before reading arg[2]).
- ƒ Arg typing per command via strtol(base 0) for ints/bools, strtod for floats/doubles, strtoul for unsigned; bools stored as (strtol(..)!=0).
- ƒ EnterInstance -> FUN_105dfdd0(instanceId,flag); BeginCraft -> FUN_105e0020(recipeId,count); AddCraft -> FUN_105dffe0(id); BeginLoot -> FUN_105e0060(id); RequestPaidBox -> FUN_105e0b00(id); AcceptEntrustTask -> FUN_105e0940; GiveUpEntrustTask -> FUN_105e0980; EntrustSelHuntBox -> FUN_105e09c0.
- ƒ String args copied via FUN_100ea440 / FUN_105fe150 into fixed buffers (local_523 0x400, local_324 0x100, local_224 0x100).
- $ AddCraft/BeginCraft — crafting/forge start commands (recipe id + count args)
- $ BeginLoot — loot pickup command
- $ RequestPaidBox — paid loot-box / gacha open request
- $ AcceptEntrustTask/GiveUpEntrustTask/EntrustSelHuntBox — commission (委托) task reward flow
- $ OpenChargeInternalUrl — opens cash-shop top-up URL
- $ VipLevelNotify — VIP tier notification
- $ OnResponseActivityResponseAcceptTask/PickupItem, S2CUpdateOperationItemCountsRefresh[Data] — operation-activity item/reward updates


## currency-display  (1)

### CInstanceClearingView::BuildInstanceCurrencyData `@107db970`
*Builds the 'mh.model.Instance.InstanceCurrencyData' VO. Reads four currency totals from the server clearing-result object (DAT_1202e818->+0xd0->+0x90 vtable+0xb4) via four FUN_1025b060 accessor calls and emits fields BindMoney, UnbindMoney, BindCredit, UnbindCredit (all via FUN_104d1550 = write-int).* (server: client-only display of server-authoritative currency balances/rewards. Confirms the four-currency model: bound money, unbound money, bound credit, unbound credit. Server must own all four ledgers., conf high)
- $ Four currency channels displayed: BindMoney, UnbindMoney, BindCredit, UnbindCredit (bound vs tradeable money and credit)


## instance-level-reset  (1)

### CInstanceClearingView::BuildLevelCatRewardListData `@107dbab0`
*Builds 'mh.model.Instance.InstanceLevelCatRewardListData' VO for the instance 'level cat' (level restart/reset) reward preview. Reads reset-state struct via FUN_112ad370 and config record via FUN_119d7d10, emits CurrentResetTimes (state+4), MaxResetTimes (config+0x38), ResetCost (config+0x34, written via FUN_104d1440 = int/id field). Then iterates a reward array (base state+0xac, count state+8, element stride 4 bytes across three parallel columns) emitting per-entry InstanceLevelCatRewardData {ItemId=elem[-0x28], ItemCount=elem[0], BindType=elem[0x28]}.* (server: validation/authoritative. ResetCost and MaxResetTimes are config-driven cost/limit values the client displays; the server (C2AS_LevelCatReset) must charge ResetCost and enforce CurrentResetTimes < MaxResetTimes before granting RewardDatas. Client only previews., conf high)
- ƒ CurrentResetTimes = *(resetState + 4)
- ƒ MaxResetTimes = *(config + 0x38)
- ƒ ResetCost = *(config + 0x34)  (currency amount charged per reset)
- ƒ reward entry count = *(resetState + 8); reward columns based at resetState+0xac with word stride: ItemId at elem-0xa0, ItemCount at elem+0, BindType at elem+0xa0
- $ ResetCost: currency charged to reset/re-run an instance level (paid via the 'level cat' feature)
- $ MaxResetTimes: hard cap on number of paid resets


## reward-bonus-calc  (1)

### CInstanceClearingView::AggregateExtraBonusData `@107dbf70`
*Aggregates instance-reward 'extra bonus' contributions into InstanceReward_ExtraBonusData VOs. Iterates the reward-source list (param_3 range [+4,+8)), and for each source reads per-entry percentage and flat components and accumulates them into several red-black-tree maps keyed by bonus id (categories split by FUN_1144f490()==6 vs other). Categories are distinguished into two output passes: id-keyed ExtraBonus values, and named-activity bonuses (ActivityName from FUN_107d7c80 name lookup + FUN_100ecfd0 unicode conversion). Emits DAT_11dbabc0 (bonus-type id), 'ExtraBonus' (value), DAT_11dc97c8, and 'ActivityName'. Uses CSkillLevelMap::Insert / FUN_107e0b70 as the map-insert helpers.* (server: client-only preview/aggregation. Recomputes displayed bonus exp/gold from server-delivered per-source pct+flat data. The authoritative reward total must be computed server-side; this mirrors the math for the UI. Constants below are the percentage model the server should match., conf medium)
- ƒ DAT_11de9a30 = 100.0f (percent divisor); DAT_11de9918 = 1.0f
- ƒ multiplied result = ((float)pctSum / 100.0 + 1.0) * (float)baseValue + (float)flatSum   [line 2425: piStack_7c]
- ƒ per-source contribution = ((float)pct / 100.0) * (float)base + (float)flat   [line 2434]
- ƒ adjustment accum = ((float)pct / 100.0 - 1.0) * (float)result + prevAccum   [line 2436]
- ƒ category selector: FUN_1144f490()==6 routes to the second (credit/gold?) map, else to the first (exp?) map
- $ Bonus multipliers expressed as integer percentages divided by 100 then applied as (1 + pct/100) to a base reward, plus flat additive components


## activity-reward  (1)

### CInstanceClearingView::IsQCoinRewardActivityActive `@107e4ef0`
*Returns 1 if the 'QCoinReward' activity is currently active. Gates on the clearing-result object having a non-zero flag at +0x260fc, then walks the activity map (FUN_1122ba70 = activity tree root/iter), matching each activity's name (at *(activity+0x14)+0x2d) against DAT_11dc9f44 and 'QCoinReward'; for matches, calls CActivityMgr::GetActivityState and returns 1 if state byte (+4) == 3.* (server: client-only check that mirrors server activity state; used to show/hide a QCoin (real-money proxy) reward affordance. Server must be authoritative over activity state (==3 = active/claimable) and any QCoin grant., conf high)
- ƒ active := activityState != 0 && *(activityState + 4) == 3
- ƒ gate := *(clearingResult + 0x260fc) != 0
- $ QCoinReward: activity granting QCoin (Tencent Q-coin, real-currency-linked) reward


## forge-config-display  (1)

### CForgeView::BuildCraftUpgradeConfigVO `@107f3b70`
*When param_5==1, builds the forge/crafting config VO delivered to the UI script. Pulls the config subsystem (FUN_113f3640 -> FUN_1115abd0) and, over several vtable[0xdc]+FUN_1159a350 enumerations, emits keyed maps: weaponCraftData (id->{u64,int} tuples), weaponUpgradeData + weaponUpgradeKeys, weaponLevelData, itemLevelUpData, itemLevelData, itemRecastData. Each is a table of config rows copied into script-side dictionaries.* (server: client-only. Reformats static forge/craft/upgrade/recast config tables for the UI. Underlying tables are the authoritative cost sources (see the four accessors above); this only serializes them to the client., conf medium)
- $ Aggregates the weapon craft / upgrade / level / item level-up / item level / item recast config tables (each row carries cost/material/level data)


## quest-tracking  (1)

### CQuestTrackView::BuildTracedQuestVOList `@107f5670`
*Builds the tracked-quest ('traceDatas') VO list for the quest-tracker HUD. Guarded by DAT_123bb99c and a state check (DAT_123bcebc&0x8f in {8,9,10}). For each traced quest it emits a TASK_QUEST_VO_NAME record: nQuestID, nQuestStatus, nQuestLevel, strQuestName, nQuestType, bTraced, lefttime, timeout, and a subTaskArr of sub-objectives each with nOpType, nTargetID1..5 / strTarget1.., nCurCount, nMaxCount, isPointMaterial. Handles quest-type branches (type 4 = gather/kill variants) and looks up target names via item/monster info tables.* (server: client-only display of server-authoritative quest progress. nCurCount/nMaxCount/nQuestStatus reflect server-tracked progress; server must own quest completion and any reward grant. Not a currency/item mutation., conf medium)
- ƒ sub-task loop bounded to 6 objectives (do..while ((int)idx < 6))
- ƒ point-material remaining count: cnt = FUN_116c04a0(materialId) * (curValue - baseValue)  [line 5335-5337]
- ƒ nMaxCount clamp: if (opType != 4 \|\| nCurCount < nMaxCount) status forced to 0 (incomplete) [line 5366]


## UI  (1)

### MHUI::RegisterGlobalAS3Callbacks `@108570a0`
*Large ActionScript3 <-> C++ bridge registration table. Repeatedly builds std::string names and binds native handler function pointers (via FUN_100b62c0 / FUN_10866f40 / cleanup FUN_10c3d5d0) for the whole tooltip / equipment / item-icon / static-data UI surface. Registers e.g. global_registerGetAttribute, global_registerGetStaticData, GetPetSkillItemInfo/Limit, MHUI_SetEquipPassiveSkillTips, MHUI_SetEquipAwakeningTips, MHUI_RegisteCommonFunction, etc.* (server: client-only (Scaleform/AS3 UI plumbing), conf medium)
- ƒ Pure registration; no economic arithmetic. Handler targets in this chunk include FUN_1085c900 (equip tooltip), FUN_10860b90 (item fact-level), and dozens of MHUI handlers.


## pet-training  (1)

### CPetTrainUI::BuildTrainInfoVO `@0x108e4680`
*Client UI-model builder for the pet-training panel. Allocates a TRAIN_VO_CLASSNAME VO, then loops over 6 training levels emitting per-level cost fields, an embedded MATERIAL_ITEM_VO list, and a PET_VO list of the 4 candidate pets (facialityIndex counting 4->1). Also emits m_nUIMaxTrainPointLevel. Populates the flash/UI databinding via FUN_104d1550 (int prop) / FUN_104d1670 (string prop) / FUN_104d12b0 (array prop).* (server: client-only (UI VO builder); the cost values it displays (upgradeCost/farmExpCost/trainCost) mirror server-authoritative training config and must be re-validated server-side on any train/upgrade request., conf medium)
- ƒ Outer loop: iVar2 = 0..5 (6 training levels); puVar8 (train-level record ptr) advances by 1 ushort each iter, piStack_24c (pet-list cursor) advances by 4 ints/iter.
- ƒ Per-level record (iVar4, from FUN_108e15c0(trainLevelId)): level = (short)*piStack_270; upgradeCost = *(iVar4+0x24); farmExpCost = *(iVar4+0x20).
- ƒ trainCost = *(FUN_108e1aa0(uVar3)+0x38) (only emitted when that lookup != 0).
- ƒ Material list: 5 entries read from puVar9 = iVar4+0x3c, iterating puVar9[-5] (material item-id via FUN_10254130) and *puVar9 (count); fields ItemID, count(&DAT_11dbdc0c), itemIconPathName(offset +0x2d*4=0xb4).
- ƒ Pet list: 4 entries, facialityIndex = 4,3,2,1 (iVar4 decremented); petid = *ppcVar7; if petid>0 resolve CPet via FUN_112fb110/FUN_112f64e0, emit strName, level(uStack_198), remainTrainTime(uStack_d4).
- $ upgradeCost @ trainRecord+0x24
- $ farmExpCost @ trainRecord+0x20 (EXP cost to farm/train)
- $ trainCost @ trainCfg+0x38
- $ material list: 5 (materialItemId, count) pairs at trainRecord+0x3c region
- $ 6 training levels max; 4 selectable pets per panel
