# MHO Guild / Social / League / Chat — Round 9

377 functions from CryGame.dll.


## guild  (113)

### BattleTeamClanModel::RegisterHandlers `@1093d680` — guild/social (clan UI)
*UI-model initializer that registers named command handlers for the battle-team/clan creation window. Registers: InitModel, InitModelEx, InitCreateModel, CreateClan, CloseCreateUI, CloseBTM, AddBTMember, HasClan, EnterQT, CheckBTName, RenameBTName, RemoveMember, ChangeLeader, ModifyNote, MsgBoxClanInviteOk, MsgBoxClanInviteCancel. Each is bound via FUN_100b62c0 (std::string ctor) + FUN_10940240 (register), then a second pass (FUN_10d17440/10d17870) wires event dispatchers. Zeroes model state at +0x28.* (server: client-only (UI command-table registration; stock CryEngine/game UI plumbing), conf high)

### BattleTeamModel::HasClan `@1093e680` — guild/social (clan)
*HasClan command handler. When param_5==1, reads local player's clan object (localPlayer(+0x2adc)->vtbl_0x14 -> clan) and, if present, sets strClanName from clan->GetName(+0x14) and marks the model result byte (*(param_1+2)) = 1 (has clan) else stays 0.* (server: client-only (reads synced clan state, sets UI result flag), conf medium)
- ƒ hasClan = (localPlayer+0x2adc != 0); strClanName = clan->vtbl_0x14()->[0x14]
- ƒ player guild/clan handle offset = +0x2adc

### BattleTeamModel::OnClanInviteReceived `@1093faf0` — guild/social (clan invite)
*Handles an incoming clan invite (stores inviter ids at model+0x28/+0x2c). Reads config flag 'g_refuseClanRequest' (config mgr [0x2c]->vtbl_0x54('g_refuseClanRequest')->vtbl_0x08 = GetInt). If flag==0: pops a confirm dialog 'BattleTeam.MsgBoxClanInviteOk'/'BattleTeam.MsgBoxClanInviteCancel' (dialog id 0x1ff1) with localized message-parm indices 0x2a and 6. If flag!=0 (auto-refuse enabled): silently rejects via FUN_11c65590(guild, inviteId1, inviteId2, 0).* (server: validation/client (client decides prompt vs auto-reject; the actual accept/reject is sent to server), conf medium)
- ƒ refuse = configInt('g_refuseClanRequest'); refuse!=0 -> auto-reject FUN_11c65590(guild,*(model+0x28),*(model+0x2c),0)
- ƒ dialog id = 0x1ff1; CMessageParmDescInfo record indices 0x2a and 6 (localized text)

### CGuildTaskUI::BuildGuildTaskDataVO `@0x1091f100` — guild/tasks
*Builds the 'guildTaskArray' VO (GUILDTASK_CLASS_NAME entries) plus, for the active-quest branch, per-quest reward and target VOs. Emits bGuildTask, remainTime, quest_id, questStatus, taskName, description, curCount/maxCount, curStage/totalStage, groupType, group_id, bTracked, canShared; an 'other_info' sub-VO with farm_actuarialpoint/gold_bind/hunter_exp/hunter_fund/hunter_contribution/npcfriendvalue/queststatus; a 'task_awardList' (TASK_AWARD_CLASS_NAME) of reward items (itemIconPathName/slotid/ItemID/count); and a 'task_targets' list (TASK_TARGET_VO_NAME) with nTargetID1..5, strTarget1..5, nOpType, nCurCount, nMaxCount.* (server: client-only display builder, but it recomputes reward amounts locally from award-definition tables scaled by the local player's hunt rank/count. Rewards and quest progress are server-authoritative; the client math here mirrors the server reward formula (useful for reproducing reward curves)., conf medium)
- ƒ totalStage=1, group_id=1, curStage=1 (constants written for guild tasks); groupType = quest[2]
- ƒ reward amount scaling: amount = (int)( (float)(int)awardDef[2] * (float)factor ), where factor = 0 unless player exists, then factor derived from CPlayer::GetHuntRankOrCount(awardDef[1], ...) via FUN_1185f2e0. Applied for award ids fetched by: FUN_10804980, FUN_10804cd0 (field &DAT_11dbfbc8 == hunter_exp-related), FUN_10804940 (field &DAT_11dc0944) with a second component awardDef[3]*factor2
- ƒ hunter_exp = questDef[0x14], hunter_fund = questDef[0x15] (dword offsets into quest def pppppppiVar14)
- ƒ gold reward (id 0x21 via FUN_108049c0): gold_bind = def+8, and a paired value def+0xc; hunter_fund path uses def+4
- ƒ reward-def category ids queried: 0x5f7 (task def base), 0x19, 0x18, 0x21, 0x1f (award slot types); target op fields at target-record stride 0x3b dwords
- ƒ task-target record offsets (piVar15 stride 0x3b ints): [0..4] nTargetID1..5, [5] nOpType, [6] nCurCount, [7] nMaxCount, [0xd/0x13/0x19/0x1f/0x25] strTarget1..5; filter: only when target[0x3a]==3 && target[0x34]!=4, with curCount==maxCount vs curCount<maxCount branch selecting completed vs in-progress rendering
- ƒ remainTime computed only if server epoch globals DAT_123bbcc8/ccc are 0 else uses _time64(0) baseline
- $ guild task rewards: hunter_exp, hunter_fund, gold_bind, plus item awards (task_awardList) each with a count
- $ reward amounts scale multiplicatively with player hunt rank/count factor (float multiply of awardDef base value)

### CGuildTaskUI::RegisterGetGuildTaskData `@0x1091f090` — guild/tasks
*Registers the single client callback 'GetGuildTaskData' -> FUN_10922d70 (which routes to the builder FUN_1091f100).* (server: client-only registration., conf high)

### CGuildTipsInfo::GetManager `@10968af0` — guild (config)
*InfoManager singleton getter for the CGuildTipsInfo config table (guild UI tip/hint strings). Returns the manager instance, lazily created via CInfoManager::FindByName('CGuildTipsInfo').* (server: config data / client-only (UI tip strings), conf high)

### CGuildTitleInfo::GetRecordById `@0x114f74f0` — guild
*Config-table accessor (2D) for CGuildTitleInfo records.* (server: client-only, conf high)
- ƒ standard 2D chunked lookup by id

### CGuildTitleInfo::GetTitleName `@0x114f7a70` — guild
*Copies the guild title's display-name string (record+0x14) into an output; emits empty string when the title id is not found.* (server: client-only (UI display), conf high)
- ƒ id=*(param_1+4); record=CGuildTitleInfo[id]; copy string @record+0x14 to param_1+8

### CGuildTitleInfo::GetTitleValueOrDefault `@0x114f7270` — guild
*Returns the title value (record+0x18) for a guild title looked up by ID at param_1+4; falls back to a default value (FUN_11720120()+0xa0) when not found.* (server: client-only (title display from shared config), conf high)
- ƒ id = *(param_1+4); record = CGuildTitleInfo[id]; return *(record+0x18)
- ƒ default: return *(FUN_11720120()+0xa0)

### CGuildTitleRef::Resolve `@0x11629520` — guild
*Resolves a guild title: param_1[2] = *(param_1[5]); param_1[3] = title value (record+0x18) or default (FUN_11720120()+0xa0).* (server: client-only, conf high)
- ƒ id=*param_1; param_1[2]=*(param_1[5]); param_1[3]= *(CGuildTitleInfo[id]+0x18) else *(default+0xa0)

### CGuildUnlockUI::BuildUnlockDataVO `@0x1091c340` — guild/building-unlock
*Builds the guild instance/content 'UnlockDataArray' VO of Unlock_CLASS_NAME entries and computes each entry's lock state relative to the current guild. For each unlock id 1..N it emits nUnlockID, itemID, itemName(0), itemIcon(0), and a computed lockState + lockFund + lockLevel; then emits current guildfund and fires 'UnlockUpdate'.* (server: validation/display: the lockState decision is computed client-side from server-owned inputs (guildfund, guild building level, per-guild unlocked-set). Server must be the authority on which content is unlocked and on fund spending; client only mirrors it., conf high)
- ƒ unlock count: iStack_4c = FUN_1145eed0(); loop unlockID = 1..iStack_4c
- ƒ per-unlock def (iVar3 = FUN_1145f170(unlockID)): itemID = *(def+0x14), lockFund = *(def+0x1c), lockLevel = *(def+0x18)
- ƒ lockState decision: if FUN_1145fa30(guild,unlockID)!=0 -> lockState=1 (already unlocked); else if FUN_1145e690(guild,unlockID)!=0 -> lockState=2; else if def.lockLevel(*(def+0x18)) <= currentGuildBuildingLevel( (uint)*(byte*)(guild+0x223) ) -> lockState=4 (level met, fund needed); else lockState=3 and compare def.lockLevel vs CGuildBuildingLevelUpInfo::GetMaxLevelForBuilding(4)
- ƒ guildfund = FUN_114a8610()
- ƒ building level stored as byte at guildObj+0x223
- ƒ GetMaxLevelForBuilding called with building type constant 4
- $ each unlock has a lockFund (guild-fund cost, def+0x1c) and lockLevel (required guild building level, def+0x18)
- $ guildfund is the guild's current fund balance (spent to unlock)

### GetConfig_Guild `@0x1171ed30` — guild
*Lazily loads and returns the top-level 'Guild' config-data section singleton.* (server: client-only (shared config); membership limits / fund caps likely live in this section, conf high)
- ƒ one-time FUN_1024f010("Guild"); *param_1 = DAT_1238f89c

### GuildActivityTaskInfoVO::Build `@109e0950` — guild (tasks / activity / contribution)
*Builds the guild activity/task overview VO ('GUILDER_INFO_DATA_NAME' + nested 'GUILDER_ACTIVITY_TASK_DATA_NAME'). Reads guild data (guildMgr+0x2abc) and activity component (+0x2ab0). Emits guild-week score, player/guild activity totals and caps, then five task VOs (taskA=1-star, taskB=2-star, taskC=3-star, taskD=4-star, taskS=special id 99999). Each task VO: taskId, nStar, strNameTask, nCountTask, nTotalCountTask, nScoreTask, nStatus.* (server: client-only VO, but reveals authoritative guild-activity/task fields the server owns (scores, activity caps, completion status), conf low)
- ƒ nGuildScoreInWeek = guildData[0x70]; nPlayerScoreTotal = guildData->vtbl_0x18(); nPlayerActivityInToday = guildData->vtbl_0x34()
- ƒ nGuildActivityInToday = guildData[0x75]; nGuildActivityMax = FUN_117d8be0()[0x9c]
- ƒ task record (FUN_117d8be0) offsets per star tier A/B/C/D: nTotalCountTask = record[+0x40,+0x44,+0x48,+0x4c]; nScoreTask = record[+0x50,+0x54,+0x58,+0x5c]
- ƒ nStar values: taskA=1, taskB=2, taskC=3, taskD=4, taskS=0 (id 99999)
- ƒ nStatus: if task-done-flag ptr != 0 -> 1 (completed); else claimable-check guild->vtbl_0x60() ? 4 (claimable) : -1 (locked/0xffffffff)
- ƒ taskS.nStatus = (FUN_114a93d0() && guildComp->vtbl_0x30(0x494,2,&out) && out>=1) ? 1 : 0
- ƒ taskS.taskId = 99999 sentinel
- $ nScoreTask = contribution/activity points awarded per task tier (record offsets +0x50..+0x5c)
- $ activity caps: nPlayerActivityMax, nGuildActivityMax (daily activity ceilings)
- $ taskS gated by counter id 0x494 (guild-comp vtbl_0x30 query, threshold >=1)

### GuildInstanceModel::FetchGuildKnockoutRemainSeconds `@10976560` — guild (instance/knockout timing)
*Computes and emits guild knockout instance timing for the UI. Reads config (FUN_11734e90): guildQualifierInstance = cfg[0x80], guildKnockoutInstance = cfg[0x84]. Looks up match record via CGuildMatchInfo::GetRecordById(matchId). Computes remaining seconds = scheduledTime(round+1) - now, where scheduledTime = FUN_1171cda0(roundIndex+1, param).* (server: validation/client (client mirrors server-scheduled knockout timing for countdown display; server authoritative on actual gating), conf medium)
- ƒ guildQualifierInstance = FUN_11734e90()[0x80]; guildKnockoutInstance = FUN_11734e90()[0x84]
- ƒ guildKnockoutRemainSeconds = FUN_1171cda0(roundIndex+1, arg) - now
- ƒ now = (DAT_123bbcc8\|DAT_123bbccc)!=0 ? cachedTime : _time64(NULL)
- ƒ guarded by arg count == 4; roundIndex from arg[0xe] (tag 3/4) else 0xDEADBEAF sentinel

### GuildInstanceModel::RegisterHandlers `@10974590` — guild (instance/knockout)
*UI-model initializer for the guild-instance/knockout window. Registers handlers: InitModel, SwitchViewMode, FetchInstaceData, FetchGuildConfigData, FetchGuildKnockoutRemainSeconds, FetchNormalKnockoutRemainSeconds, RecordNormalKnockoutStartTime, InstancePayMode, GetInstanceEnterMode, GetPunishPlayTimes, NotifyWindow, GetMonsterIcon. Seeds model+0x20 with current time64 (cached DAT_123bbcc8/ccc override else _time64).* (server: client-only (UI registration; DAT_123bbcc8 is a debug/test time override), conf high)
- ƒ model+0x20 = (DAT_123bbcc8\|DAT_123bbccc != 0) ? cachedTime : _time64(NULL)

### GuildSearchView::BuildGuildNameList `@0x109f8330` — guild
*Builds SearchGuildNameVo list (guildName, guildID) from a guild-search result array at record+0x108..+0x10c (entry stride 0x29). Populates guildSimpleInfoArray.* (server: client-only (UI list build from server-provided search results), conf medium)
- ƒ entry stride = 0x29 (41 bytes); count = (*(rec+0x10c) - *(rec+0x108)) / 0x29

### GuildTaskDetailVO::Build `@109e13d0` — guild (task detail / reward)
*Builds a single guild-task detail VO ('GUILD_TASK_INFO_DATA_NAME'). Guarded on argCount==2. Reads guild task config record (FUN_104d8d20(taskId)) and the player's guild component (guildMgr+0x2abc region, ptrs at +0xaaf/+0xaac). Emits strName, taskId, reward (nMoneyType/nMoneyCount), nTaskAddition, strTarget (task step), UI button flags, and nTaskState.* (server: client-only VO, but exposes guild-task reward + state model that server must own, conf low)
- ƒ taskId = arg[0x20] when (arg+0x1c)&0x8f in {3,4} else 0xDEADBEAF sentinel; special S-task id = 99999
- ƒ reward record = FUN_10804940(taskCfg+0x4c, 0x18)
- ƒ reward split: CPlayer::GetHuntRankOrCount(reward[1], &moneyFloat, &expInt, 0); if moneyFloat>0 && reward[0xc]>0 -> nMoneyType=0,nMoneyCount; if expInt>0 && reward[8]>0 -> nMoneyType=0,nMoneyCount
- ƒ nTaskAddition = FUN_109e22e0() ? [+4] : 0
- ƒ task step vector stride = 0xec (236) bytes; strTarget from step, fields step[+0x18], step[+0x1c] (DAT_11de486c/11de4830)
- ƒ nTaskState = guildComp->vtbl_0x30(0x494, 2, &out)
- ƒ all button flags bShowAccept/bEnableAccept/bShowGiveUp/bEnableGiveUp/bShowFinish/bEnableFinish emitted (0 in this path)
- $ nMoneyType/nMoneyCount = task reward currency & amount; nTaskAddition = bonus/addition value
- $ step-progress fields step+0x18 (current) / step+0x1c (target)

### TdrDump::CommerceBoat `@1011b670` — guild/commerce
*TDR dump of commerce-boat: [commerceBoatId]@+0, [commerceBoatStartTime]@+4, [commerceBoatStatus]@+8, [levelId]@+0xc, then nested [grabInfo] via FUN_1011ad50.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceBoatId(u32), +4=startTime, +8=status, +0xc=levelId, +0x10=grabInfo(CommerceGrabInfo)

### TdrDump::CommerceBoat_b `@1033d250` — guild/commerce
*TDR dump of commerce boat (client naming): [dwCommerceBoatId]@+0, [iCommerceBoatStartTime]@+4, [iCommerceBoatStatus]@+8, [iLevelId]@+0xc, nested [stGrabInfo] via FUN_1033ce20.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceBoatId,+4=startTime,+8=status,+0xc=levelId,+0x10=grabInfo

### TdrDump::CommerceGrabInfo `@1011ad50` — guild/commerce
*TDR dump of commerce-boat grab info: [playerCount]@+0, array [playerId] of up to 4 u64 entries (element stride 8 starting +4), [ownGuildId]@+0x24(u64), [minTime]@+0x2c.* (server: validation (array cap 4 mirrors TDR schema max the server must enforce), conf high)
- ƒ struct: +0=playerCount(u32), +4..=playerId[4] (u64 each, stride 8), +0x24=ownGuildId(u64), +0x2c=minTime(u32)
- $ playerId array cap = 4 (returns -7 if count>4)

### TdrDump::CommerceGrabInfo_b `@1033ce20` — guild/commerce
*TDR dump of grab info (client-side naming variant): [dwPlayerCount]@+0, array [playerId] up to 4 u64 (base +4 stride 8), [ullOwnGuildId]@+0x24(u64), [dwMinTime]@+0x2c.* (server: validation (grab participant cap 4), conf high)
- ƒ struct: +0=playerCount,+4=playerId[4](u64 stride 8),+0x24=ownGuildId(u64),+0x2c=minTime
- $ playerId array cap = 4 (returns -7 if >4)

### TdrDump::CommerceGuild `@1011a400` — guild/commerce
*Plain TDR dump of commerce-guild entry: [commerceId]@+0, [ownGuildId]@+4(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId(u32), +4=ownGuildId(u64)

### TdrDump::CommerceGuildId `@10355b10` — guild/commerce
*Plain TDR dump: [dwCommerceID]@+0, [ullGuildId]@+4(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceID,+4=guildId(u64)

### TdrDump::CommerceGuildId_seh `@10355a70` — guild/commerce
*SEH-wrapped TDR dump: [dwCommerceID]@+0, [ullGuildId]@+4(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceID,+4=guildId(u64)

### TdrDump::CommerceGuild_seh `@1011a320` — guild/commerce
*SEH-wrapped TDR dump of a commerce-guild entry: [commerceId]@+0, [ownGuildId]@+4(u64,%I64u). Returns -0x13 if buffer null.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId(u32), +4=ownGuildId(u64)

### TdrDump::CommerceInfoList `@103592c0` — guild/commerce
*TDR dump of commerce info list: [iSelectedCommerceId]@+0, [iCommerceHistory]@+4, [iCommerceCount]@+8, array [astCommerceInfos] (via FUN_10358ea0).* (server: validation (commerce list cap 10), conf high)
- ƒ struct: +0=selectedCommerceId,+4=commerceHistory,+8=commerceCount,+0xc=astCommerceInfos[]
- $ astCommerceInfos array cap = 10 (returns -7 if >10, -6 if <0)

### TdrDump::CommerceInfoShort `@10358ea0` — guild/commerce
*TDR dump of short commerce info: [dwCommerceId]@+0, [dwGoodsNumber]@+4, [szOwnGuildName]@+8(str,0x20).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId,+4=goodsNumber,+8=ownGuildName(str)

### TdrDump::CommerceTimeout `@1012f750` — guild/commerce
*Plain TDR dump: [commerceId]@+0, [timeoutDate]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId, +4=timeoutDate

### TdrDump::CommerceTimeout_c `@10340ba0` — guild/commerce
*TDR dump of commerce timeout+operator: [iCommerceId]@+0, [dwTimeoutDate]@+4, [dwOperator]@+8.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId,+4=timeoutDate,+8=operator

### TdrDump::CommerceTimeout_seh `@1012f670` — guild/commerce
*SEH-wrapped TDR dump: [commerceId]@+0, [timeoutDate]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=commerceId, +4=timeoutDate

### TdrDump::CommoditySalesFull `@10355f80` — guild/commerce
*TDR dump of full commodity-sales record (TlvCommoditySales): [dwCommerceID]@+0, [dwGoodsNumber]@+4, [dwLastChangeTime]@+8, [szGuildName]@+0xc(str,0x20), [ullGuildId]@+0x2c(u64), [chIsFinish]@+0x34(byte), [chRank]@+0x35(byte).* (server: client-only (debug serialization; chRank=guild commerce ranking, chIsFinish=completion flag), conf high)
- ƒ word offsets: commerceID=param[0],goodsNumber=param[1],lastChangeTime=param[2],szGuildName=param+3,ullGuildId=param[0xb..0xc](u64),chIsFinish=byte@param+0x34,chRank=byte@param+0x35

### TdrDump::CommoditySalesShort `@103407f0` — guild/commerce
*TDR dump of commodity sales record (TlvCommoditySalesShort): [iCommerceId]@+0, [dwGoodsNumber]@+4, [dwLastChangeTime]@+8, [chIsOwned]@+0xc(byte).* (server: client-only (debug serialization; goodsNumber=stock quantity), conf high)
- ƒ struct: +0=commerceId,+4=goodsNumber,+8=lastChangeTime,+0xc=isOwned(u8)

### TdrDump::DragonBoat `@103573b0` — guild/commerce
*TDR dump of a dragon-boat activity record (TlvCommerceBoat-like): [dwBoatId]@+0, [ullPlayerId]@+4(u64), [dwStartTimestamp]@+0xc, [dwLevelId]@+0x10, [dwMinTime]@+0x14, [ullGuildId]@+0x18(u64), [szGuildName]@+0x20(str,0x20), [szRoleName]@+0x40(str,0x20), [dwStatus]@+0x60, [szOhterGuildName]@+0x64, then [szOtherRoleName1..4] at +0x84/+0xa4/+0xc4/+0xe4.* (server: client-only (debug serialization), conf high)
- ƒ word offsets: boatId=param[0],playerId=param[1..2](u64),startTs=param[3],levelId=param[4],minTime=param[5],guildId=param[6..7](u64),guildName=param+8,roleName=param+0x10,status=param[0x18],otherGuildName=param+0x19,otherRoleName1..4=param+0x21/0x29/0x31/0x39

### TdrDump::Guild `@10344e00` — guild
*Plain [ullGuild]@+0(u64) dump.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::GuildApplyEntry `@1033c260` — guild/membership
*TDR dump of a guild-apply/invite entry (TlvGuildApplyList element): [iId]@+0, [ullGuild]@+4(u64), [szName]@+0xc(str,0x20), [szSender]@+0x2c(str,0x20), [iTime]@+0x4c.* (server: client-only (debug serialization; guild-application record), conf high)
- ƒ word offsets: iId=param[0],ullGuild=param[1..2](u64),szName=param+3,szSender=param+0xb,iTime=param[0x13]

### TdrDump::GuildBoatList `@1035a070` — guild/commerce
*TDR dump of a guild-boat list response: [dwErrCode]@+0, [ullGuildId]@+4(u64), [szGuildName]@+0xc(str,0x20), [wCount]@+0x2c(u16), array [astGuildBoats] (via FUN_10359ac0).* (server: validation (guild-boat list cap 300), conf high)
- ƒ word offsets: errCode=param[0],guildId=param[1..2](u64),guildName=param+3,wCount=u16@param+0xb
- $ astGuildBoats array cap = 300 (returns -7 if wCount>300)

### TdrDump::GuildBriefInfo `@1033ac40` — guild
*TDR dump of a guild list/brief entry: [ullId]@+0(u64), [szName]@+8(str,0x24=36 bytes), [iIcon]@+0x28, [szNote]@+0x2c(str,0x100=256), [iLevel]@+0x12c, [iRepute]@+0x130, [szLeader]@+0x134(str,0x40=64), [iGuilders]@+0x234, [iGuildersAvgLevel]@+0x238, [iJoinLevel]@+0x23c, [ullHuntSoul]@+0x240(u64).* (server: client-only (debug serialization; iLevel=guild level, iRepute=reputation, iGuilders=member count, iJoinLevel=minimum HR to join, ullHuntSoul=guild soul resource — server-owned), conf high)
- ƒ word offsets: ullId=param[0..1],szName=param+2 (0x24 bytes = 9 words),iIcon=param[0xb]? actually param[10],szNote=param+0xb,iLevel=param[0x4b],iRepute=param[0x4c],szLeader=param+0x4d,iGuilders=param[0x8d],iGuildersAvgLevel=param[0x8e],iJoinLevel=param[0x8f],ullHuntSoul=param[0x90..0x91]

### TdrDump::GuildCommerceActivity `@1033d840` — guild/commerce
*TDR dump of guild commerce activity state (TlvGuildCommerceActivity): [chChallengeTimes]@+0(byte), [chBuyGrabTimes]@+1(byte), [iRefreshTimestamp]@+2, [iStartBoatTimes]@+6, [chBuyStartBoatTimes]@+0xa(byte), [iGuildCount]@+0xb, array [astOhterGuildNewsInfo] (via FUN_1033ca80, base +0xf), nested [stCommerceBoatInfo] (FUN_1033d250), [dwContributeResPoint]@+0xc7.* (server: validation/authoritative-mirror (challengeTimes/buyGrabTimes/startBoatTimes/buyStartBoatTimes are per-period usage counters; contributeResPoint is a resource-point accumulator; refreshTimestamp drives reset — server-owned), conf high)
- ƒ byte/int offsets: +0=challengeTimes,+1=buyGrabTimes,+2=refreshTimestamp,+6=startBoatTimes,+0xa=buyStartBoatTimes,+0xb=guildCount,+0xf=otherGuildNewsInfo[] base,+0xc7=contributeResPoint
- $ astOhterGuildNewsInfo array cap = 10 (returns -7 if >10, -6 if <0)

### TdrDump::GuildCommerceData `@1011cf20` — guild/commerce
*TDR dump of the large guild commerce/global-state struct (TlvGuildCommerceData). Fields: [wageTime]@+0,[logTime]@+4,[depotFetchCountTime]@+8,[randCommodityTime]@+0xc,[daily3Time]@+0x10,[week3Time]@+0x14,[eliteGuildCount]@+0x18(u8), array [eliteGuilds] of u64 (element base +0x19, stride 8), [commerceCount]@+0x659, array [commerceInfo] (CommerceGuild via FUN_1011a400 at +0x65d), [dragonBoatCount]@+0x6fd(u8), [dragonBoatInfo] via FUN_1011b670, [guildWarHistoryCount]@+0x746, array [guildWarHistoryInfo] (via FUN_10119dc0 at +0x74a), [guildWarDailyRefreshTimestamp]@+0x7d6, [guildWarWeeklyRefreshTimestamp]@+0x7da.* (server: validation (array caps 200/10/7 are schema maxima the server must enforce; refresh timestamps drive daily/weekly reset cadence), conf high)
- ƒ offsets: +0 wageTime,+4 logTime,+8 depotFetchCountTime,+0xc randCommodityTime,+0x10 daily3Time,+0x14 week3Time,+0x18 eliteGuildCount(u8),+0x19 eliteGuilds[] base,+0x659 commerceCount(i32),+0x65d commerceInfo[] base,+0x6fd dragonBoatCount(u8),+0x746 guildWarHistoryCount(i32),+0x74a guildWarHistoryInfo[] base,+0x7d6 dailyRefreshTs,+0x7da weeklyRefreshTs
- ƒ eliteGuilds element stride 8 (u64)
- $ eliteGuilds array cap = 200 (returns -7 if count>200)
- $ commerceInfo array cap = 10 (returns -7 if >10, -6 if <0)
- $ guildWarHistoryInfo array cap = 7 (returns -7 if >7, -6 if <0)

### TdrDump::GuildContributionData `@10170a60` — guild/contribution
*TDR dump of per-player guild contribution/commerce state (TlvGuildContributionData): [guild]@+0(u64), [contribution]@+8, [contributionAcc]@+0xc(u64), [contributionWeekAcc]@+0x14(u64), [lastTime]@+0x1c, [refreshTimestamp]@+0x20, [startBoatTimes]@+0x24, [buyStartBoatTimes]@+0x28(byte), [guildCount]@+0x29, array [otherGuildNews] (via FUN_1016f9d0 at +0x2d), [guildwarGrabPlayerId]@+0xf5(u64), [guildwarGrabPlayerTimeStamp]@+0xfd.* (server: validation/authoritative-mirror (contribution, contributionAcc, contributionWeekAcc are server-owned accrual counters; weekly-acc + refreshTimestamp imply weekly reset; startBoatTimes/buyStartBoatTimes are per-period usage counters), conf high)
- ƒ word/byte offsets: guild=param[0..1](u64),contribution=param[2],contributionAcc=param[3..4](u64),contributionWeekAcc=param[5..6](u64),lastTime=param[7],refreshTimestamp=param[8],startBoatTimes=param[9],buyStartBoatTimes=byte at param+0x28,guildCount=+0x29,otherGuildNews[] base +0x2d,guildwarGrabPlayerId=+0xf5(u64),guildwarGrabPlayerTimeStamp=+0xfd
- $ otherGuildNews array cap = 10 (returns -7 if >10, -6 if <0)

### TdrDump::GuildId `@1029de00` — guild
*Plain TDR dump of [ullGuildID]@+0(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildIdTimestamp `@1033ca80` — guild
*Plain TDR dump: [llGuildId]@+0(i64), [iTimestamp]@+8.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(i64),+8=timestamp

### TdrDump::GuildIdTimestamp_seh `@1033c9e0` — guild
*SEH-wrapped TDR dump: [llGuildId]@+0(i64), [iTimestamp]@+8.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(i64),+8=timestamp

### TdrDump::GuildId_b `@1029e3e0` — guild
*Plain [ullGuildID] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_c `@10359660` — guild
*Plain [ullGuildId]@+0(u64) dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(u64)

### TdrDump::GuildId_seh `@1029dd80` — guild
*SEH-wrapped TDR dump of a single [ullGuildID]@+0(u64) field. Returns 0xffffffed if buffer null.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_seh_b `@1029e360` — guild
*Duplicate of GuildId_seh (SEH-wrapped single [ullGuildID] dump) for a different message struct.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_seh_c `@103595e0` — guild
*SEH-wrapped single [ullGuildId]@+0(u64) dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(u64)

### TdrDump::GuildId_toBuf `@1029dec0` — guild
*TDR dump of [ullGuildID] into a TdrBuf struct with TdrBuf_PutNulAt terminator (buffer-descriptor variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_toBuf_b `@1029e4a0` — guild
*[ullGuildID] dump into TdrBuf with PutNulAt (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_toBuf_c `@10359720` — guild
*[ullGuildId] dump into TdrBuf with PutNulAt (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(u64)

### TdrDump::GuildId_toStr `@1029de30` — guild
*TDR dump of [ullGuildID] into a caller buffer with explicit null-termination (buffer/size variant). Returns &DAT_11d9d32b (empty string) if args invalid.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64); null-terminates output at min(len,size-1)

### TdrDump::GuildId_toStr_b `@1029e410` — guild
*[ullGuildID] dump into caller buffer with null-term (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildID(u64)

### TdrDump::GuildId_toStr_c `@10359690` — guild
*[ullGuildId] dump into caller buffer with null-term (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(u64)

### TdrDump::GuildLeagueTeam `@1012c700` — guild/league
*TDR dump of a guild league/matchmaking team (TlvGuildTeam): [guildID]@+0(u64), [teamName]@+8(str), [matchID]@+0x30, [signUpID]@+0x34, [signUpTM]@+0x38, [bestScore]@+0x3c, [bestScoreTm]@+0x40, [count]@+0x44, array [members] (via FUN_1012b6f0), [acceptRound]@+0x108(byte).* (server: validation (team size cap 4; bestScore/bestScoreTm are league scoring fields the server owns), conf high)
- ƒ word-index offsets: guildID=param[0..1], teamName=param[2..], matchID=param[0xc], signUpID=param[0xd], signUpTM=param[0xe], bestScore=param[0xf], bestScoreTm=param[0x10], count=param[0x11], members[] base param+0x12, acceptRound=byte at param+0x42
- $ members array cap = 4 (returns -7 if >4, -6 if <0)

### TdrDump::GuildListPage `@1034dab0` — guild
*TDR dump of a paged guild-search result (TlvPlayerListGuild-like): [iGuildsCount]@+0, [iPages]@+4, [iPage]@+8, nested array [stGuilds] via TdrDump_GuildList_iCount_astGuilds.* (server: client-only (debug serialization; paging metadata), conf high)
- ƒ struct: +0=guildsCount,+4=pages,+8=page,+0xc=stGuilds[]

### TdrDump::GuildNote `@10343b70` — guild
*Plain TDR dump: [ullGuild]@+0(u64), [szNote]@+8(str).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64),+8=note(str)

### TdrDump::GuildNote_seh `@10343ad0` — guild
*SEH-wrapped TDR dump: [ullGuild]@+0(u64), [szNote]@+8(str). Note field dumped via param_6 sink.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64),+8=note(str)

### TdrDump::GuildReason `@10345160` — guild/membership
*Plain TDR dump: [ullGuild]@+0(u64), [iReason]@+8.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64),+8=reason

### TdrDump::GuildReason_seh `@103450c0` — guild/membership
*SEH-wrapped TDR dump: [ullGuild]@+0(u64), [iReason]@+8. Likely a kick/leave/reject message (reason code).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64),+8=reason

### TdrDump::GuildTeamHeader `@10115840` — guild/team
*TDR debug text-dump of a small team/guild membership header struct. Emits fields [teamId]@+0, [guildId]@+4, [isGuildLeader]@+8, [isClanLeader]@+0xc(byte).* (server: client-only (debug/log serialization; reveals struct layout), conf high)
- ƒ struct: +0=teamId(u32), +4=guildId(u32), +8=isGuildLeader(u32), +0xc=isClanLeader(u8)

### TdrDump::GuildWarHistoryInfo `@10119dc0` — guild/war
*TDR dump of guild-war history entry: [guildId]@+0(u64,%I64u), [commerceId]@+8, [activityStartTime]@+0xc.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(u64), +8=commerceId(u32), +0xc=activityStartTime(u32)

### TdrDump::GuildWarLevelParams `@1028c660` — guild/war
*TDR dump of guild-war level entry params: [iLevelID]@+0, [iParam]@+4, [iUseEmploye]@+8, [iWeaponTrial]@+0xc, [ullGuildWarTargetId]@+0x10(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=levelID,+4=param,+8=useEmploye,+0xc=weaponTrial,+0x10=guildWarTargetId(u64)

### TdrDump::Guild_b2 `@1034ccd0` — guild
*Plain [ullGuild] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_seh `@10344d80` — guild
*SEH-wrapped TDR dump of single [ullGuild]@+0(u64).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_seh_b `@1034cc50` — guild
*SEH-wrapped single [ullGuild] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_toBuf `@10344ec0` — guild
*[ullGuild] dump into TdrBuf with PutNulAt.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_toBuf_b `@1034cd90` — guild
*[ullGuild] dump into TdrBuf (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_toStr `@10344e30` — guild
*[ullGuild] dump into caller buffer with null-term.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guild_toStr_b `@1034cd00` — guild
*[ullGuild] dump into caller buffer (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guild(u64)

### TdrDump::Guilder `@10345740` — guild/membership
*Plain [ullGuilder]@+0(u64) dump.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::GuilderListPage `@103502e0` — guild/membership
*TDR dump of paged guild-member list (TlvGuildMemberList-like): [iGuildersCount]@+0, [iPages]@+4, [iPage]@+8, nested array [stGuilders] via TdrDump_GuilderList_iCount_astGuilders.* (server: client-only (debug serialization; member-list paging), conf high)
- ƒ struct: +0=guildersCount,+4=pages,+8=page,+0xc=stGuilders[]

### TdrDump::GuilderNote `@10345e50` — guild/membership
*Plain TDR dump: [ullGuilder]@+0(u64), [szNote]@+8(str).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64),+8=note(str)

### TdrDump::GuilderNote_seh `@10345db0` — guild/membership
*SEH-wrapped TDR dump: [ullGuilder]@+0(u64), [szNote]@+8(str).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64),+8=note(str)

### TdrDump::GuilderPaging `@1034ff90` — guild/membership
*Plain TDR dump: [iGuilders]@+0, [iPages]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilders,+4=pages

### TdrDump::GuilderPaging_seh `@1034fef0` — guild/membership
*SEH-wrapped TDR dump: [iGuilders]@+0, [iPages]@+4 (member-list paging request).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilders,+4=pages

### TdrDump::Guilder_b `@10345a30` — guild/membership
*Plain [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_c `@10348220` — guild/membership
*Plain [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_d `@10349710` — guild/membership
*Plain [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_e `@10349a00` — guild/membership
*Plain [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_seh `@103456c0` — guild/membership
*SEH-wrapped TDR dump of single [ullGuilder]@+0(u64) (a guild-member player id).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_seh_b `@103459b0` — guild/membership
*SEH-wrapped single [ullGuilder] dump (duplicate for another message type).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_seh_c `@103481a0` — guild/membership
*SEH-wrapped single [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_seh_d `@10349690` — guild/membership
*SEH-wrapped single [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_seh_e `@10349980` — guild/membership
*SEH-wrapped single [ullGuilder] dump (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toBuf `@10345800` — guild/membership
*[ullGuilder] dump into TdrBuf with PutNulAt.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toBuf_b `@10345af0` — guild/membership
*[ullGuilder] dump into TdrBuf (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toBuf_c `@103482e0` — guild/membership
*[ullGuilder] dump into TdrBuf (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toBuf_d `@103497d0` — guild/membership
*[ullGuilder] dump into TdrBuf (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toBuf_e `@10349ac0` — guild/membership
*[ullGuilder] dump into TdrBuf (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toStr `@10345770` — guild/membership
*[ullGuilder] dump into caller buffer with null-term.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toStr_b `@10345a60` — guild/membership
*[ullGuilder] dump into caller buffer (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toStr_c `@10348250` — guild/membership
*[ullGuilder] dump into caller buffer (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toStr_d `@10349740` — guild/membership
*[ullGuilder] dump into caller buffer (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::Guilder_toStr_e `@10349a30` — guild/membership
*[ullGuilder] dump into caller buffer (duplicate variant).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guilder(u64)

### TdrDump::OtherGuildNews `@1016f9d0` — guild/commerce
*TDR dump of an 'other-guild news' entry: [guildId]@+0(u64,%I64i), [timestamp]@+8, [commerceId]@+0xc.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=guildId(i64),+8=timestamp,+0xc=commerceId

### TdrFmtField_ClanIdReason `@0x103dd450` — guild
*Field-format variant: [ullClan] u64@0, [iReason] i32@8.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClan
- ƒ off 0x08 i32 iReason

### TdrFmtField_ClanId_A `@0x103dd0f0` — guild
*Field-format single [ullClan] u64@0.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClan

### TdrFmtField_ClanName `@0x103df760` — guild
*Field-format single [szClanName] string@0.* (server: client-only formatter, conf high)
- ƒ off 0x00 string szClanName

### TdrFmtField_GuildBrief `@0x1035b3e0` — guild
*Formats a guild-brief struct: [ullGuildId] u64@0 ("%I64u"), [szGuildName] string@8 (TdrText_FieldValueFmt), [bBoatsCount] u8@0x28 ("0x%02x"). Guild owns commerce boats; bBoatsCount = number of boats.* (server: authoritative struct layout: guild id, name, boat count owned by guild, conf high)
- ƒ off 0x00 u64 ullGuildId
- ƒ off 0x08 string szGuildName
- ƒ off 0x28 u8 bBoatsCount (param_1+10 words)

### TdrFmtField_GuildId_A `@0x103ca560` — guild
*Field-format single [ullGuild] u64@0.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullGuild

### TdrPack_ClanIdReason `@0x103dd3b0` — guild
*Packs [ullClan] u64@0, [iReason] i32@8 (e.g. quit/kick/reject reason code). Buf NULL -> -0x13.* (server: server<->client: guild action reason code, conf high)
- ƒ off 0x00 u64 ullClan
- ƒ off 0x08 i32 iReason

### TdrPack_ClanId_A `@0x103dd070` — guild
*Single-field [ullClan] u64@0 command packer (clan = guild).* (server: client request packer (guild op by id), conf high)
- ƒ off 0x00 u64 ullClan

### TdrPack_ClanName `@0x103df6f0` — guild
*Single-field [szClanName] string@0 packer. Buf NULL -> -19.* (server: client request packer (create/query guild by name), conf high)
- ƒ off 0x00 string szClanName

### TdrPack_GuildIdList `@0x1035c6a0` — guild
*Packs a guild-id list: [wCount] u16@0, then bounds-checks count>6 -> -7, emits [guildIds] array of u64 (each at word offset 1+idx*4 => byte off 4+idx*8) via ' %I64u'. Terminates with U8Z.* (server: validation: server must enforce/expect max 6 guild ids, conf high)
- ƒ off 0x00 u16 wCount
- ƒ CAP: wCount > 6 -> return -7 (max 6 guild ids)
- ƒ guildIds[i] u64 at byte off 0x04 + i*8
- $ membership/list limit: max 6 guild ids in this message

### TdrPack_GuildIdList_dup `@0x1035ca60` — guild
*Byte-identical duplicate of 0x1035c6a0 (guild-id list, cap 6). Separate TDR command instance.* (server: validation: max 6 guild ids, conf high)
- ƒ off 0x00 u16 wCount
- ƒ CAP wCount>6 -> -7
- ƒ guildIds[i] u64 @ 0x04+i*8

### TdrPack_GuildId_A `@0x103ca4e0` — guild
*Single-field [ullGuild] u64@0 command packer (buf NULL -> -19).* (server: client request packer (guild op by id), conf high)
- ƒ off 0x00 u64 ullGuild

### TdrUnpackToBuf_ClanId_A `@0x103dd1b0` — guild
*Buffer-target [ullClan] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClan

### TdrUnpackToBuf_ClanName `@0x103df800` — guild
*Buffer-target [szClanName] variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 string szClanName

### TdrUnpackToBuf_GuildId_A `@0x103ca620` — guild
*Buffer-target [ullGuild] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullGuild

### TdrUnpackToStr_ClanId_A `@0x103dd120` — guild
*String-target [ullClan] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClan

### TdrUnpackToStr_ClanName `@0x103df780` — guild
*String-target [szClanName] variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 string szClanName

### TdrUnpackToStr_GuildId_A `@0x103ca590` — guild
*String-target [ullGuild] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullGuild


## league  (51)

### CGuildLeagueUI::BuildLeagueRegistrationVO `@0x1091a8a0` — league/guild-registration
*Builds the guild-league registration view. Emits 'registered' flag, then a GuildLREGDataArray of GuildLREG_CLASS_NAME entries (one per registered team) with per-team teamName, isSelf flag, and up to 4 member names (member1..4). Also builds a memberNameStr/memberRoleId list for the local guild team roster (member iteration via team vtbl+0xa4/+0xb8), then fires 'updataLeagueRegistrationViewUpdata' UI notify.* (server: client-only VO builder; registration roster and team membership are server-authoritative. Reveals the 4-member team structure and registration record stride., conf medium)
- ƒ registration record count: iStack_144 = ( ((int*)guild[0xe])[1] - *(int*)guild[0xe] ) / 0x58  -> registration entry stride = 0x58 (88 bytes)
- ƒ per-team member name slots use string constants for index 1..4: iVar15==1 -> DAT_11dd9b54, ==2 -> DAT_11dd9b64, ==3 -> DAT_11dd9b60, ==4 -> DAT_11dd9b78 (member field names member1..member4); member sub-array walked in 0xc-dword (0x30-byte) strides
- ƒ guild manager via player[0xaaf]; guild registration list at guild[0xe]
- ƒ isSelf set to 1 when FUN_1149e820() (self-check) is true
- ƒ updata notify payload flag ppppiStack_130 = 3
- $ guild-league teams displayed with up to 4 named members

### CGuildLeagueUI::SendGuildMatchSignUpListReq `@0x1091a630` — league/guild-match-signup
*When param_1[0]==1 and a guild manager is present, fires the network notification 'sendGuildMatchSignUpListNft' (via net-object vtbl+0x18) to request/broadcast the guild-league sign-up list.* (server: client-only send-trigger for a server RPC/notify; server owns the sign-up list., conf medium)
- ƒ guard: DAT_1202e818 !=0 && *(DAT_1202e818+0xd0)!=0 && player=*(*(..+0xd0)+0x90)!=0 && player.vtbl+0xb4 !=0 && *param_1 == 1
- ƒ net object handle from globals DAT_123bd1e8/ec/f0/f4/f8 (presence-flag ref idiom, bit0x40)

### CGuildMatchInfo::GetRecordById `@10944610` — league/guild-match (config)
*Standard InfoManager accessor for the CGuildMatchInfo config table. Gets/creates the singleton manager (CGuildMatchInfo::GetInfoManager or CInfoManager::FindByName('CGuildMatchInfo')), then does the usual 2D bucketed lookup to return the record for a given id.* (server: config data (static table; both client and server read the same guild-match config), conf high)
- ƒ idx = id - mgr[0xc]; valid if 0<=idx<mgr[9]; record = mgr[8][idx/mgr[10]][idx%mgr[10]]
- ƒ mgr[8]=bucket array, mgr[9]=count, mgr[0xa]=stride/bucketSize, mgr[0xc]=id base

### CLeagueDetail::ForEachApply `@0x119a13c0` — league
*Iterate every CLeagueDetail record (count via vtbl+0x28) and, for each valid entry index, invoke a per-entry apply callback (FUN_11a6cdb0 -> touches CLeagueRoundSchedule). Also performs the one-time fallback-manager init inline.* (server: client-only initialization loop (links league details to round schedules), conf medium)
- ƒ count = (*(mgr_vtbl+0x28))()
- ƒ for iVar5 in [0,count): resolve manager; if 0<=iVar5<((mgr+0x18-mgr+0x14)>>2) && record!=0 -> FUN_11a6cdb0(orig_param)

### CLeagueDetail::GetById `@0x11a6afa0` — league
*Paged/sparse by-id lookup returning the CLeagueDetail record (0 if absent).* (server: client-only accessor into league-detail table by id, conf high)
- ƒ mgr=CLeagueDetail::GetManagers; minId=mgr+0x30,pageSize=mgr+0x28,count=mgr+0x24,pages=mgr+0x20
- ƒ reject id==-1; require (id!=0\|\|minId==0)&&pageSize!=0; local=id-minId; 0<=local<count
- ƒ return pages[local/pageSize][local%pageSize] (0 if page null)

### CLeagueDetail::GetByIndex `@0x119a0850` — league
*Return CLeagueDetail record at linear index (bounds-checked).* (server: client-only accessor into league-detail table, conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0

### CLeagueDetail::GetManagerOrNull `@0x119a0d90` — league
*Thin singleton accessor: registers the CLeagueDetail manager and returns *DAT_123a2024 when param==0, else 0. Variant of 0x1199e640 without the FindByName fallback.* (server: client-only singleton plumbing, conf high)
- ƒ if param_1==0 { ensure-registered; return *DAT_123a2024 } else return 0

### CLeagueDetail::GetManagers `@0x1199e640` — league
*Singleton accessor for the CLeagueDetail info-table manager. First call registers the singleton (StcMbrNameSvr<CInfoManager>) and, on lookup failure, initializes a fallback empty manager; returns the manager pointer.* (server: client-only info-table singleton plumbing (CryEngine), conf high)
- ƒ if param_3==0 return cached *DAT_123a2024 (once registered)
- ƒ else CInfoManager::FindByName(vtbl=PTR_FUN_11d667b4, name, id); on null return fallback &DAT_123a21ac

### CLeagueDetail::ReadRow `@0x11a74910` — league
*Config-row reader for a CLeagueDetail (league tier/detail definition). Reads id, LeagueType, LevelID, three unnamed localized strings (name/note/desc), and PicturePath/PictureDesc.* (server: authoritative config — LeagueType/LevelID define league tiers/divisions used in league scoring & progression; server owns league standings. Picture fields are client display only., conf high)
- ƒ id (unnamed first field, DAT_11d38d6c) -> this+0x10
- ƒ "LeagueType" -> this+0x14
- ƒ "LevelID" -> this+0x18
- ƒ three unnamed string fields (&DAT_11d72fb8, &DAT_11d72fc4, &DAT_11d72fd0) -> localized strings (SetName sinks) [likely name/short-name/desc]
- ƒ "PicturePath" -> localized string
- ƒ "PictureDesc" -> localized string
- $ LeagueType and LevelID key each league tier record

### CLeagueInfo::GetEntryByIndex `@0x108f2f20` — league
*Indexed accessor into the CLeagueInfo static data-table (config table of league definitions). Resolves the CLeagueInfo manager singleton (CLeagueInfo::GetManager / CInfoManager::FindByName fallback), then returns element[param_1] of the manager's contiguous pointer array.* (server: client-only read of static league config table., conf high)
- ƒ bounds check: return element only if (param_1 >= 0) && (param_1 < (mgr[6]-mgr[5])>>2); array base = mgr[5], element = *(mgr[5] + param_1*4); else return 0
- ƒ count = (mgr[6]-mgr[5])>>2 (pointer array, 4-byte stride)

### CLeagueInfo::ReleaseManager `@0x108f2fb0` — league
*Resolves the CLeagueInfo manager singleton (same pattern as GetEntryByIndex) and invokes its vtable+0x28 method (release/clear) after re-pointing the local vtable stub to PTR_FUN_11da54a8.* (server: client-only., conf medium)

### CLeagueRoundSchedule::ForEachApplyToLevel `@0x119a1750` — league
*Iterate every CLeagueRoundSchedule record and call CMHLevelInfo::ApplyLeagueScheduleDetail for each valid entry — applying league round-schedule detail onto level/instance info.* (server: client-only initialization loop; league scheduling is server-authoritative, conf medium)
- ƒ manager via FUN_108fa510(0,"CLeagueRoundSchedule",0)
- ƒ count=(*(mgr_vtbl+0x28))(); container end/begin at puVar4[6]/puVar4[5]; per valid entry -> CMHLevelInfo::ApplyLeagueScheduleDetail(orig_param)

### CLeagueRoundSchedule::GetById `@0x11a6c4f0` — league
*Paged by-id lookup returning the CLeagueRoundSchedule record.* (server: client-only accessor into league-round-schedule table by id, conf high)
- ƒ manager via FUN_108fa510(0,"CLeagueRoundSchedule",0); same paged idiom

### CLeagueRoundSchedule::GetEntryByIndex `@0x108f30f0` — league
*Indexed accessor into the CLeagueRoundSchedule static data-table (league round schedule config). Same pattern as CLeagueInfo::GetEntryByIndex.* (server: client-only read of static league round-schedule config table., conf high)
- ƒ return element only if (param_1 >= 0) && (param_1 < (mgr[6]-mgr[5])>>2); element = *(mgr[5]+param_1*4) else 0

### CLeagueRoundSchedule::GetManagers `@0x108f3050` — league
*Lazy singleton initializer for the CLeagueRoundSchedule InfoManager (league round-schedule config table). One-time guarded init (DAT_123bfc68 bit0) that sets up the StcMbrNameSvr<CInfoManager> singleton name and registers cleanup.* (server: client-only static config-table singleton., conf high)
- ƒ one-time guard: if ((DAT_123bfc68 & 1)==0) { set bit0; init list head DAT_123bfc60/DAT_123bfc64 -> &DAT_123bfc50; DAT_123bfc50=0; register names } ; returns DAT_123bfc4c

### CLeagueRoundSchedule::ReleaseManager `@0x108f3180` — league
*Resolves the CLeagueRoundSchedule manager singleton and invokes its vtable+0x28 (release/clear) method.* (server: client-only., conf medium)

### CLeagueRoundSchedule::TouchManager `@0x11a6cdb0` — league
*Trivial stub that resolves/registers the CLeagueRoundSchedule manager (FUN_108fa510) and returns. Used as the per-entry callback from CLeagueDetail::ForEachApply (0x119a13c0).* (server: client-only manager-registration plumbing, conf medium)

### CLeagueSchedule::ForEachBuildRounds `@0x119a1620` — league
*Iterate every CLeagueSchedule record and, for each valid entry, call CLeagueRoundSchedule::BuildRoundAndRewardLists — i.e. build the per-schedule round & reward lists from the CLeagueSchedule table.* (server: client-only initialization loop; the league round/reward structure is authoritative server scheduling config, conf medium)
- ƒ count=(*(mgr_vtbl+0x28))(); per valid entry -> CLeagueRoundSchedule::BuildRoundAndRewardLists(orig_param)

### CLeagueSchedule::GetById `@0x11a6b000` — league
*Paged by-id lookup returning the CLeagueSchedule record.* (server: client-only accessor into league-schedule table by id, conf high)
- ƒ same paged idiom (minId@0x30,pageSize@0x28,count@0x24,pages@0x20) on CLeagueSchedule::GetManagers

### CLeagueSchedule::GetManagerSingleton `@0x11840d90` — league
*Returns the CLeagueSchedule InfoManager singleton (lazy register + FindByName fallback with static default).* (server: client-only (config manager), conf high)
- ƒ singleton at DAT_12398070; fallback CInfoManager::FindByName; default &DAT_12398108

### CLeagueSchedule::GetManagerSingletonRaw `@0x11842920` — league
*Returns the raw CLeagueSchedule singleton pointer (*DAT_12398070) when param==0, else 0.* (server: client-only, conf high)
- ƒ if param==0 return *DAT_12398070 else 0

### CLeagueSchedule::GetRecordByIndex `@0x11842860` — league
*1D vector accessor for CLeagueSchedule records.* (server: client-only, conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2

### CLeagueScoreInfo::GetRecordByIndex `@0x118428c0` — league
*1D vector accessor for CLeagueScoreInfo records (league scoring table).* (server: client-only (shared league-score config); scoring rules authoritative on server, conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2

### CPvpFactionModel::InitModels `@0x10929840` — league/pvp-faction
*PvP-faction UI-model init. Registers model builders InitModelPersonal (FUN_10929b60), InitModelGroup (FUN_10929ea0), InitModelPvpHunterBox (FUN_1092ac90), InitModelPvpFactionPlayers (FUN_1092b8f0), plus a fifth (FUN_1092c2d0), then attaches five sub-models via the model-manager chain (FUN_10d17440/FUN_10d17870 -> FUN_1092c7e0/830/880/8d0/920).* (server: client-only model wiring., conf medium)

### CPvpFactionModel::RegisterPlayerCallbacks `@0x1092b8f0` — league/pvp-faction
*Registers PvP-faction player callbacks: _PvpFaction_setPlayerBaseInfo (FUN_1092ba00), _PvpFaction_getPlayerFaction (FUN_1092bbc0), _PvpFaction_setBoxInfo (FUN_1092bc60), _PvpFaction_reselectHunterBox (FUN_1092be30), _PvpFaction_setFactionInfo (FUN_1092be80).* (server: client-only registration; reselectHunterBox is the client trigger for a server-side box reselection., conf high)
- ƒ guard: DAT_1202e818 !=0 && *(DAT_1202e818+0x58)!=0 (script/system context present)

### CPvpLevelUI::BuildPvpStageScoreVO `@0x109094c0` — league/pvp-scoring
*Populates PvP level data: registers lookups _getPlayerFactionByID (FUN_10909320) and _IsInPvpLevel (FUN_109085d0), then writes restTimeGameOverFlash, scorePvp1stStage, scorePvp2ndStage (two-stage PvP faction scores) and realStartWithoutReadyGo flag.* (server: client-only display of PvP scores; the score/time values are server-authoritative (read from the local battle context populated by server)., conf medium)
- ƒ restTimeGameOverFlash = FUN_11742460(); scorePvp1stStage = FUN_11742350(); scorePvp2ndStage = FUN_11742360() (all after FUN_117423e0 context fetch)
- ƒ realStartWithoutReadyGo = DAT_123bbab2 (byte flag)
- ƒ arg VO accessed via in_stack_00000010[1..4] (presence-flag/handle idiom, bit 0x40 => held ref)

### FactionBattleScoreVO::Build `@109deac0` — league/pvp (faction battle scoring)
*Builds the faction/PVP battle result score VO. Reads a score struct (unaff_EBX) and the level context (CMHLevelSystem::GetCurrentContext). Emits redBound/blueBound, playerDamage, damagePercentage, useTime, playerScore, accumulateScore, damageScore, withOutInjuryScore, isRedFaction, speedScore, charLevel, charName, winScore. Guarded on local player + battle context + FUN_114584c0(myId) valid.* (server: validation/client (client re-derives display scores from the same formula the server uses; server remains authoritative on stored scores), conf medium)
- ƒ score struct offsets: playerScore=+0x28, speedScore(base)=+0x2c, damageScore=+0x30, withOutInjuryScore=+0x34, redBound=+0x20, blueBound=+0x24
- ƒ redBound=*(model+0x20), blueBound=*(model+0x24)
- ƒ accumulateScore = *(EBX+0x28) + FUN_1025b060()
- ƒ winScore = (ctx[0xc8] * ctx[0xd4]) / 100    (ctx=CMHLevelSystem::GetCurrentContext; /100 integer div)
- ƒ isRedFaction = (player->vtbl_0x44() == 1)
- ƒ speedScore: if redBound==blueBound OR (winningSideFlag != isRedFaction): speedScore = *(EBX+0x2c); else speedScore = *(EBX+0x2c) - (ctx[0xc8]*ctx[0xd4])/100
- ƒ winningSideFlag = (blueBound <= redBound)  [i.e. red is winning side]
- $ winScore bonus = (ctx[0xc8] * ctx[0xd4]) / 100 (a percentage of a base value); speedScore deducts this bonus from raw score when on winning side

### GuildLeagueMatchModel::RegisterHandlers `@10940ee0` — league/guild-match
*UI-model initializer registering guild-league / guild-match command handlers: GetMatchDetail, GetGuildPreMaryByPage, StartGameLeagueReq, StartGameLeaguePairReq, xGetRoomBySignId, SendGuildMatchQualifierResultList, sendGuildMatchPairList, LeagueRespondOkHandler, LeagueRespondCancelHandler. Same register pattern (FUN_100b62c0 + FUN_10942ca0 / FUN_104d0ee0) then event wiring.* (server: client-only (UI command registration; command names map to server league/match requests), conf high)

### GuildLeagueModel::OnLeagueRespond `@10942a00` — league (room entry)
*League invite/enter-room respond handler. Resolves local player league component (player->vtbl_0x3a4). Compares the room/team leader id (team->vtbl_0x88()->vtbl_0x0c) against my id (player[1]). If I am the leader: enter directly (FUN_107cb5c0 -> mgr(+0x2abc)->vtbl_0x0c, then FUN_111764b0(1,1)). Otherwise: pop a confirm dialog (id 0x1ff6, 'LeagueRespondOkHandler'/'LeagueRespondCancelHandler') showing the leader's name (FUN_1024e9b0(name,6)).* (server: validation/client (client gates on leadership; enter/respond sent to server), conf medium)
- ƒ isLeader = (team->vtbl_0x88()->vtbl_0x0c() == myId(player[1]))
- ƒ dialog id = 0x1ff6

### GuildMatchTeamListVO::Build `@109420b0` — league/guild-match (bracket)
*Builds the guild-match bracket/pairing VO ('GuildMathTeamArray' of class 'GUILDMathTeam_CLASS_NAME'). Reads match data (guildMgr+0x2abc). Emits MatchStateNow = *(match+0x120), MathState = *(match+0x11c). Two code paths keyed on MatchStateNow: when state<5 it walks bracket rounds 4..1 (round counter starts at 4, decrements while >0) producing per-round pairings; when state in [5,7) it walks the final pairing list directly. Pairing entries have stride 0x10. Per pairing emits m_SignID1, m_SignID2, teamName1, teamName2, teamWin1/teamWin2, isPlaying.* (server: client-only (VO over server bracket state; scoring/pairing authoritative server-side), conf medium)
- ƒ MatchStateNow = *(match+0x120); MathState = *(match+0x11c)
- ƒ state<5 -> iterate bracket rounds 4 down to 1; state in [5,7) -> final list path
- ƒ pairing entry stride = 0x10 bytes
- ƒ winner: signID1==winnerSignID(iStack_d0) -> teamWin1=1; signID2==winnerSignID -> teamWin2=1
- ƒ isPlaying = FUN_11175670(&signID1)

### GuildQualifierListVO::BuildByPage `@10941ab0` — league/guild-match (qualifier)
*Builds the guild qualifier ('GuildPremary') ranking list VO, one entry per qualifying guild. Reads guild-match data at guildMgr(+0x2abc), calls its vtbl_0x0c (refresh) and FUN_11c65620(mgr,0xd) then FUN_10942d70 to fetch the entry vector (piVar1+10). Iterates entries with stride 0x58 (88 bytes; count=(end-begin)/0x58). Per entry: strName (FUN_1149e590), bestScore (FUN_1149e540), a second score field (FUN_1149e550, name DAT_11dca154), strGuildName (FUN_1149e580), isSelf=1 when FUN_1149e820 matches local guild. Emits array 'GuildPremaryArray' of class 'GUILDPREMARY_CLASS_NAME'.* (server: client-only (VO over server-supplied qualifier ranking), conf medium)
- ƒ entry stride = 0x58 bytes (0x16 dwords); count = (vec_end - vec_begin)/0x58
- ƒ bestScore = FUN_1149e540(entry); secondScore = FUN_1149e550(entry); isSelf = FUN_1149e820(guildId)

### IpvpAttackInfoPlayerDataVO::Build `@10981e80` — league/pvp (faction)
*Builds 'mh.model.Ipvp.IpvpAttackInfoPlayerData' VO for an interactive-PVP attacker. Resolves the target player by id (social mgr vtbl_0x7c), and if not self (vtbl_0xa8()==0) emits name (vtbl_0xb8, field DAT_11da7300) and Faction (vtbl_0x44).* (server: client-only (VO over synced attacker state), conf medium)
- ƒ targetId = ((arg+4)&0x8f==3\|\|4) ? *(arg+8) : 0xDEADBEAF (guarded by argCount==1)
- ƒ Faction = player->vtbl_0x44()

### LeaguePersonalParagraph::TryAdvance `@0x115b7980` — league
*League/personal-paragraph progression: if the personal-paragraph config count is exhausted for the player's value, invokes a callback; otherwise, for a positive counter with an unset flag, looks up CLeagueInfo index 4, validates league eligibility, and fires the advance callback with computed args.* (server: client-only progression check; league standings/points are server-authoritative, conf low)
- ƒ paragraph index = param_1[3] / 100 + 1; if CPersonalParagraphInfo::count() <= that index, call (*param_1[0])()  (exhausted)
- ƒ advance gate: param_1[9] > 0 && (param_1[10] & 1) == 0
- ƒ CLeagueInfo lookup at fixed index 4 (iVar4 = 4 - mgr+0x30)
- ƒ on success: param_1[10] \|= 1; FUN_115b7040(*(leagueRec+0x68), &flagA, &flagB); (*(param_1[0]+8))(param_1[3], flagA, flagB, leagueRec)
- $ 100 = personal-paragraph point divisor (paragraph = points/100 + 1)
- $ league index 4 hardcoded; leagueRec+0x68 = param passed to FUN_115b7040

### LeagueScheduleQuery::CollectPlayerSchedulesAndScores `@0x11842f20` — league
*Builds, for the given player/league context, a sorted list of CLeagueSchedule records matching the context's league id (obj+0x10) into obj+0x18..+0x1c, then collects matching CLeagueScoreInfo records (whose +0x14 equals obj+0x10) into obj+0x28..+0x2c.* (server: client-only (query/sort of shared league config for display); actual standings server-authoritative, conf medium)
- ƒ schedule match: record[5] == *(ctx+0x10) (league id) -> pushed to vector at ctx+0x1c (grows by 4)
- ƒ sort: heapsort/introsort via FUN_118412f0/FUN_11841250/FUN_118418b0 with comparator FUN_11843a60; threshold 0x10 (16) elements switches sort strategy; depth = 2*floor(log2(n))
- ƒ post-sort: for each pair (stride from +0x18), FUN_10a1a330(scheduleRec+0x50)
- ƒ score match: record+0x14 == *(ctx+0x10) -> pushed to vector at ctx+0x28

### PvpBattleLeagueListVO::Build `@10985850` — league/pvp-battle
*Large builder for the league/PVP-battle screen. Reads league component (localPlayer+0x2b9c). Emits header fields strTitleName, maxPvpBattleCount (component vtbl_0x20), curPvpBattleCount (vtbl_0x28), nEntrustVipCnt (FUN_11548ea0 when data[0xabe]!=0). Iterates league entries (vector stride 0x14): iLeagueID, iCountLeague = (levelsEnd-levelsBegin)>>2, plus a per-level sub-array (levelGroupID, levelID, levelName) and matching leagueTasksArr. Then a notices loop (stride 0x18): noticeLeagueID, noticeStartLeagueTime, noticeEndLeagueTime, noticePvpBattleRound, noticeLeagueName. Also builds pvpBattleListArr and pvpBattleNoticeArr; CLeagueInfo::CollectLeagueScheduleEntries fills the notice list.* (server: client-only (VO over server league schedule/task state), conf low)
- ƒ league entry stride = 0x14 (20) bytes; iCountLeague = (levelVecEnd - levelVecBegin) >> 2
- ƒ notice entry stride = 0x18 (24) bytes
- ƒ maxPvpBattleCount = leagueComp->vtbl_0x20(); curPvpBattleCount = leagueComp->vtbl_0x28()
- ƒ time offset constant 0x261d0 (=155600) added to a base time (iStack_164)
- $ maxPvpBattleCount / curPvpBattleCount = per-player league battle attempt cap and usage; nEntrustVipCnt = VIP entrust count

### TdrDump::Faction `@102b3970` — league/faction
*Plain TDR dump of [iFaction]@+0.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=faction(i32)

### TdrDump::FactionSoulWarData `@10248de0` — league/faction
*TDR dump of a large faction/soul-war aggregate struct: [redSoul]@+0(u64), [yellowSoul]@+8(u64), [redSoulAll]@+0x10(u64), [yellowSoulAll]@+0x18(u64), [phase]@+0x20, [activity]@+0x24, [instCount]@+0x28, three parallel u64/byte arrays [instUid] (base +0x2c), [instGuild] (base at word+0x9c4b), [instCamp] (byte base +0x4e22c), then [redCount],[yellowCount],[applyYellowSoulAll](u64),[applyRedSoulAll](u64),[activeRedCount],[activeYellowCount].* (server: validation/authoritative-mirror (faction soul totals are server-owned league scoring accumulators; array cap 20000 = participant limit), conf high)
- ƒ instUid[]/instGuild[] u64 (stride 8); instCamp[] byte; counters redSoul/yellowSoul/redSoulAll/yellowSoulAll/applyYellowSoulAll/applyRedSoulAll are u64
- $ instUid/instGuild/instCamp array cap = 20000 (returns -7 if >20000, -6 if <0) for all three parallel arrays

### TdrDump::FactionStatResult `@1029b0a0` — league/faction
*TDR dump of a per-faction stat result: [iFactionID]@+0, [iFactionDataCnt]@+4, parallel arrays [factionDataType] (base word+2) and [factionDataValue] (base word+0x2a).* (server: validation (faction data array cap 40), conf high)
- ƒ struct: +0=factionID,+4=dataCnt,+8=factionDataType[] base,+0xa8=factionDataValue[] base (word indices 2 and 0x2a)
- $ factionDataType/factionDataValue array cap = 0x28 (40) (returns -7 if >40, -6 if <0)

### TdrDump::Faction_seh `@102b38f0` — league/faction
*SEH-wrapped TDR dump of single [iFaction]@+0.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=faction(i32)

### TdrDump::Faction_toBuf `@102b3a30` — league/faction
*[iFaction] dump into TdrBuf with PutNulAt.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=faction(i32)

### TdrDump::Faction_toStr `@102b39a0` — league/faction
*[iFaction] dump into caller buffer with null-term.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=faction(i32)

### TdrDump::InstanceHuntResult `@1029bcf0` — league/faction
*TDR dump of instance/faction battle result: [iLevelID]@+0, [iGameMode]@+4, [iHuntingMode]@+8, nested [stFakeItemInfo] (FUN_1029b590), [stInstanceStatResult] (FUN_1029ab90), [iFactionCnt]@+0x174, array [astFactionStatResult] (FactionStatResult via FUN_1029b0a0), [stSelfResult] (TdrDebugFormat_HuntResultFull), [bPlayerCnt]@+0x1e000(byte), array [astOtherResultList] (TdrDebugFormat_BaseStatInfo).* (server: validation (faction count cap 4, player count cap 24), conf high)
- ƒ iFactionCnt=param[0x5d]; bPlayerCnt=byte at param+0x8780(word idx)
- $ astFactionStatResult cap = 4 (returns -7 if >4, -6 if <0); astOtherResultList cap = 0x18 (24) (returns -7 if >24)

### TdrDump::NetIdFaction `@102b3cc0` — league/faction
*Plain TDR dump: [iNetID]@+0, [iFaction]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=netID,+4=faction

### TdrDump::NetIdFaction_seh `@102b3c20` — league/faction
*SEH-wrapped TDR dump: [iNetID]@+0, [iFaction]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=netID,+4=faction

### TdrFmtField_LeagueApply `@0x103ca230` — league
*Formats a league/faction apply struct: [iPhase] i32@0, [iCamp] i32@4, [iApplyType] i32@8, [ullGuild] u64@0xc.* (server: authoritative: league phase/camp/apply state server-owned, conf high)
- ƒ off 0x00 i32 iPhase
- ƒ off 0x04 i32 iCamp
- ƒ off 0x08 i32 iApplyType
- ƒ off 0x0c u64 ullGuild

### TdrFmtField_LeagueType `@0x103de850` — league
*Field-format single [iLeagueType] i32@0.* (server: client-only formatter, conf high)
- ƒ off 0x00 i32 iLeagueType

### TdrPack_LeagueLevelList_A `@0x103ddae0` — league
*Packs a league level list: [iLeagueID] i32@0, [iCount] i32@4, cap 10, then [levelIDs] array of i32 (word off 2 + i). U8Z terminated.* (server: validation: max 10 league level ids, conf high)
- ƒ off 0x00 i32 iLeagueID
- ƒ off 0x04 i32 iCount
- ƒ CAP: iCount < 0 -> -6, iCount > 10 -> -7 (max 10 level ids)
- ƒ levelIDs[i] i32 at byte off 0x08 + i*4
- $ league level list cap: 10

### TdrPack_LeagueLevelList_B `@0x103deee0` — league
*Packs [iLeagueType] i32@0, [iCount] i32@4, cap 10, [levelIDs] array i32. Same shape as 0x103ddae0 but keyed by league type.* (server: validation: max 10 league level ids, conf high)
- ƒ off 0x00 i32 iLeagueType
- ƒ off 0x04 i32 iCount
- ƒ CAP: iCount < 0 -> -6, iCount > 10 -> -7
- ƒ levelIDs[i] i32 at byte off 0x08 + i*4
- $ league level list cap: 10

### TdrPack_LeagueType `@0x103de7d0` — league
*Single-field [iLeagueType] i32@0 command packer. Buf NULL -> -19.* (server: client request packer (query by league type), conf high)
- ƒ off 0x00 i32 iLeagueType

### TdrUnpackToBuf_LeagueType `@0x103de910` — league
*Buffer-target [iLeagueType] i32@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 i32 iLeagueType

### TdrUnpackToStr_LeagueType `@0x103de880` — league
*String-target [iLeagueType] i32@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 i32 iLeagueType


## mail  (43)

### MailConfig_MaxAccMailSendTimes::ctor `@0x117f87a0` — mail
*Constructor for a config object named 'nMaxAccMailSendTimes' (per-account max mail send count), sets vtable PTR_FUN_11d4b9b8 and allocates a 0x24 sub-object.* (server: validation — mail send cap should be server-enforced, conf medium)
- ƒ vtable=PTR_FUN_11d4b9b8; name='nMaxAccMailSendTimes'; FUN_10c3d580(0x24)
- $ nMaxAccMailSendTimes = per-account mail send limit (value stored elsewhere)

### MailController::RegisterCommands `@0x1081f560` — mail (command dispatch table)
*Registers the mail controller's command->handler table (dispatch mode param==1). Defines the full client-side mail RPC/command surface.* (server: client-only registration, but enumerates the authoritative mail command surface the server must service., conf high)

### MailGiftBoxReaderVO::Build `@10946980` — mail
*Builds a mail-with-attachments reader VO ('GIFT_BOX_READER_DATA_CLASSNAME' + nested 'MAIL_EXTRACT_ITEM_DATA_CLASSNAME' item list). Reads the mailbox at localPlayer(+0x2ac4), scans mail records (via FUN_114fd740 list piStack_5c..piStack_58) to find the mail whose key matches (*(mail)==*(mailbox+0x78) && mail[1]==*(mailbox+0x7c)). Builds item sub-array from mail attachment entries (mail[0x29]..mail[0x2a], stride 0x20).* (server: client-only (VO over server-synced mail; attachment claim is a separate server request), conf medium)
- ƒ attachment item stride = 0x20 (32) bytes; count = (mail[0x2a]-mail[0x29])>>5
- ƒ per item: itemId=*(base+0x14), _count=u16 *(base+0x10), _index=u16 *(base+0x02)
- ƒ _itemIconPathName = ItemInfo(itemId)->[0xb4]
- ƒ mail fields: gold(nGiftID area DAT_11dc0944)=mail[0x23], goldIndex=mail[0x24], source=(char)mail[2], strSender=mail[0xb], strTitle=mail[0x17], strContent=mail[0x1d]
- $ attachment amounts read as u16 per-item _count; gold amount at mail[0x23], goldIndex at mail[0x24]

### MailModel::RegisterModelCallbacks `@0x1081f440` — mail (registration/plumbing)
*Registers the mail model's script/UI callbacks: InitModel, ReadMail (FUN_10820250), ReadGift (FUN_108202b0). CryEngine/GFx model-binding plumbing.* (server: client-only (callback registration). No game logic., conf high)

### TdrDbgFmt_MailHeadMemo `@0x103aead0` — mail
*Formats mail memo/content: [szTitle] string@0 (0x40 slot), [szMailFromName] string@0x40, [ullMailFrom] u64@0x61, [iAccessoriesNum] i32@0x69, [dwItemId] u32@0x6d, [bItemCount] u8@0x71. This is the shared MailHeadMemo formatter referenced by mail-list loops.* (server: authoritative: mail attachment (item id + count) is server-owned, conf high)
- ƒ off 0x00 char[0x40] szTitle
- ƒ off 0x40 char[~0x21] szMailFromName
- ƒ off 0x61 u64 ullMailFrom
- ƒ off 0x69 i32 iAccessoriesNum (attachment count)
- ƒ off 0x6d u32 dwItemId (attached item)
- ƒ off 0x71 u8 bItemCount

### TdrFmtField_MailAccessoryOp `@0x103b75e0` — mail
*Formats mail-accessory op: [ullMailId] u64@0, [bMailType] u8@8, [iMailAccessoryIndex] i32@9, [iAccStoreLocation] i32@0xd, [iDelType] i32@0x11.* (server: client-only debug formatter; layout authoritative, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 u8 bMailType
- ƒ off 0x09 i32 iMailAccessoryIndex
- ƒ off 0x0d i32 iAccStoreLocation
- ƒ off 0x11 i32 iDelType

### TdrFmtField_MailAccessoryResult `@0x103b79c0` — mail
*Formats mail-accessory result: [iResult] i32@0, [iArg1] i32@4, [ullMailId] u64@8, [iMailIndex] i32@0x10, [iMailAccType] i32@0x14, [bLocation] u8@0x18.* (server: server->client result formatter, conf high)
- ƒ off 0x00 i32 iResult
- ƒ off 0x04 i32 iArg1
- ƒ off 0x08 u64 ullMailId
- ƒ off 0x10 i32 iMailIndex
- ƒ off 0x14 i32 iMailAccType
- ƒ off 0x18 u8 bLocation

### TdrFmtField_MailCountSummary `@0x103b9890` — mail
*Formats mail summary counts: [bMailType] u8@0, [bMailCount] u8@1 (param_1[1]), [bMailunRead] u8@2 (param_1[2]).* (server: client-only formatter, conf medium)
- ƒ off 0x00 u8 bMailType
- ƒ bMailCount (param_1[1])
- ƒ bMailunRead (param_1[2])

### TdrFmtField_MailHead `@0x103ae4e0` — mail
*Formats a mail header: [ullMailId] u64@0, [bMailSource] u8@8, [bMailType] u8@9, [bMailSubType] u8@0xa, [bMailStatus] u8@0xb, [dwMailTime] u32@0xc, [dwMailLeftTime] u32@0x10, [dwMailBitmap] u32@0x14.* (server: authoritative struct: mail metadata incl TTL/expiry; server owns mail store, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 u8 bMailSource
- ƒ off 0x09 u8 bMailType
- ƒ off 0x0a u8 bMailSubType
- ƒ off 0x0b u8 bMailStatus
- ƒ off 0x0c u32 dwMailTime
- ƒ off 0x10 u32 dwMailLeftTime (TTL seconds remaining)
- ƒ off 0x14 u32 dwMailBitmap

### TdrFmtField_MailIdErrMsg `@0x103b5570` — mail
*Field-format variant: [ullMailID] u64@0, [szErrMsg] string@8.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u64 ullMailID
- ƒ off 0x08 string szErrMsg

### TdrFmtField_MailIdErrMsg_B `@0x103b6690` — mail
*Field-format variant of ullMailId+szErrMsg (command B).* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 string szErrMsg

### TdrFmtField_MailIdResult_A `@0x103b84d0` — mail
*Field-format variant: [ullMailID] u64@0, [iResult] i32@8.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailID
- ƒ off 0x08 i32 iResult

### TdrFmtField_MailIdResult_B `@0x103b9520` — mail
*Field-format variant: [ullMailId] u64@0, [iResult] i32@8.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 i32 iResult

### TdrFmtField_MailIdResult_C `@0x103ba7c0` — mail
*Field-format variant: [ullMailId] u64@0, [iResult] i32@8.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 i32 iResult

### TdrFmtField_MailId_A `@0x103b5f80` — mail
*Field-format of single [ullMailId] u64@0.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrFmtField_MailId_B `@0x103b6270` — mail
*Field-format of single ullMailId (command B).* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrFmtField_MailId_C `@0x103b8170` — mail
*Field-format single ullMailId (command C).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrFmtField_MailId_D `@0x103b91c0` — mail
*Field-format single ullMailId (command D).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrFmtField_MailPosTypeWhy `@0x103b22d0` — mail
*Formats: [wMailListPos] u16@0, [bMailType] u8@2, [bMailSubType] u8@3, [bMailWhy] u8@4.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u16 wMailListPos
- ƒ off 0x02 u8 bMailType
- ƒ off 0x03 u8 bMailSubType
- ƒ off 0x04 u8 bMailWhy

### TdrFmtField_MailRemind `@0x103b8eb0` — mail
*Formats mail-remind: [bMailType] u8@0, [bMailRemind] u8@1 (param_1[1] byte), [iMailRemindCount] i32@8 (param_1+2 word).* (server: client-only formatter, conf medium)
- ƒ off 0x00 u8 bMailType
- ƒ off 0x04 u8 bMailRemind (param_1[1])
- ƒ off 0x08 i32 iMailRemindCount

### TdrFmtField_MailTypeAndId `@0x103b4db0` — mail
*Field-format variant: [bMailType] u8@0, [ullMailId] u64@1.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u8 bMailType
- ƒ off 0x01 u64 ullMailId

### TdrFmt_MailListNotify `@0x103b27c0` — mail
*Formats a mail-list notify: [wMailListPos] u16@0, [bMailType] u8@2, [bMailSubType] u8@3, [iMailCount] i32@4, [iCount] i32@8, then [astMailListEntry] array capped at 300 formatted via TdrDbgFmt_MailHeadMemo.* (server: validation: server bounds mail list to 300, conf high)
- ƒ off 0x00 u16 wMailListPos
- ƒ off 0x02 u8 bMailType
- ƒ off 0x03 u8 bMailSubType
- ƒ off 0x04 i32 iMailCount
- ƒ off 0x08 i32 iCount (entries in array)
- ƒ CAP: iCount < 0 -> -6, iCount > 300 -> -7 (max 300 mail entries)
- $ mailbox list cap: max 300 mail entries per notify

### TdrFmt_MailNotify `@0x103b7e00` — mail
*Formats a mail push notify: [bMailType] u8@0, [chMailNotifyType] u8@1, [dwMailCount] u32@2, [stMailListEntry] nested via TdrDbgFmt_MailHeadMemo, [dwUin] u32@0x90.* (server: server->client push formatter, conf high)
- ƒ off 0x00 u8 bMailType
- ƒ off 0x01 u8 chMailNotifyType
- ƒ off 0x02 u32 dwMailCount
- ƒ nested MailHeadMemo at off 0x06
- ƒ off 0x90 u32 dwUin (sender uin)

### TdrPack_MailAccessoryDelReq `@0x103b71d0` — mail
*Packs a delete-accessory / batch-mail request: [iAccStoreLocation] i32@0, [iDelType] i32@4, [iCount] i32@8, then [mailId] array capped at 300 of u64 (each pair of words from param_1+3). U8Z terminated.* (server: validation: server bounds batch to 300 mail ids, conf high)
- ƒ off 0x00 i32 iAccStoreLocation
- ƒ off 0x04 i32 iDelType
- ƒ off 0x08 i32 iCount
- ƒ CAP: iCount < 0 -> -6, iCount > 300 -> -7 (max 300 mail ids)
- ƒ mailId[i] u64 at word off 3 + i*2 (byte off 0x0c + i*8)
- $ batch mail-id cap: 300

### TdrPack_MailIdErrMsg `@0x103b54d0` — mail
*Packs [ullMailID] u64@0, [szErrMsg] string@8. Buf NULL -> -0x13.* (server: server->client response packer (mail op result + error text), conf high)
- ƒ off 0x00 u64 ullMailID
- ƒ off 0x08 string szErrMsg

### TdrPack_MailIdErrMsg_B `@0x103b65f0` — mail
*[ullMailId] u64@0, [szErrMsg] string@8 packer (distinct command from 0x103b54d0).* (server: server->client response packer, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 string szErrMsg

### TdrPack_MailIdList `@0x103ba400` — mail
*Packs a mail-id list: [iCount] i32@0, cap 300, then [mailId] array of u64 (word off 1 + i*2). U8Z terminated.* (server: validation: max 300 mail ids, conf high)
- ƒ off 0x00 i32 iCount
- ƒ CAP: iCount < 0 -> -6, iCount > 300 -> -7
- ƒ mailId[i] u64 at byte off 0x04 + i*8
- $ mail-id list cap: 300

### TdrPack_MailIdResult_A `@0x103b8430` — mail
*Packs [ullMailID] u64@0, [iResult] i32@8. Buf NULL -> -0x13.* (server: server->client result packer, conf high)
- ƒ off 0x00 u64 ullMailID
- ƒ off 0x08 i32 iResult

### TdrPack_MailIdResult_B `@0x103b9480` — mail
*Packs [ullMailId] u64@0, [iResult] i32@8 (distinct command).* (server: server->client result packer, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 i32 iResult

### TdrPack_MailIdResult_C `@0x103ba720` — mail
*Packs [ullMailId] u64@0, [iResult] i32@8 (distinct command).* (server: server->client result packer, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ off 0x08 i32 iResult

### TdrPack_MailId_A `@0x103b5f00` — mail
*Single-field packer: [ullMailId] u64@0. Buf NULL -> 0xffffffed (-19). One of several distinct mail-command packers carrying only a mail id.* (server: client request packer (e.g. read/open/delete mail by id), conf high)
- ƒ off 0x00 u64 ullMailId

### TdrPack_MailId_B `@0x103b61f0` — mail
*Another distinct single [ullMailId] u64@0 command packer (buf NULL -> -19).* (server: client request packer (mail op by id), conf high)
- ƒ off 0x00 u64 ullMailId

### TdrPack_MailId_C `@0x103b80f0` — mail
*Distinct single [ullMailId] u64@0 command packer.* (server: client request packer, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrPack_MailId_D `@0x103b9140` — mail
*Distinct single [ullMailId] u64@0 command packer.* (server: client request packer, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrPack_MailTypeAndId `@0x103b4d00` — mail
*Packs [bMailType] u8@0, [ullMailId] u64@1 (unaligned, bytes 1..8). Buf NULL -> -0x13.* (server: client request packer; layout authoritative, conf high)
- ƒ off 0x00 u8 bMailType
- ƒ off 0x01 u64 ullMailId (unaligned)

### TdrUnpackToBuf_MailId_A `@0x103b6040` — mail
*Buffer-target variant (TdrBuf_PutNulAt) of the ullMailId packer.* (server: client-only debug/buffer formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToBuf_MailId_B `@0x103b6330` — mail
*Buffer-target ullMailId variant (command B).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToBuf_MailId_C `@0x103b8230` — mail
*Buffer-target ullMailId variant (command C).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToBuf_MailId_D `@0x103b9280` — mail
*Buffer-target ullMailId variant (command D).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToStr_MailId_A `@0x103b5fb0` — mail
*String-target variant of the ullMailId packer: writes into caller buffer of size param_3, NUL-terminating at min(len, size-1). Returns &DAT_11d9d32b (empty string) on bad args.* (server: client-only debug/string formatter, conf high)
- ƒ off 0x00 u64 ullMailId
- ƒ NUL clamp: idx = min(written, bufsize-1)

### TdrUnpackToStr_MailId_B `@0x103b62a0` — mail
*String-target ullMailId variant (command B), clamps NUL to bufsize.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToStr_MailId_C `@0x103b81a0` — mail
*String-target ullMailId variant (command C).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId

### TdrUnpackToStr_MailId_D `@0x103b91f0` — mail
*String-target ullMailId variant (command D).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullMailId


## guild-task  (23)

### CGuildQuestPrizeInfo::GetRecordById `@0x111f2d90` — guild-task
*Config-table accessor (2D) for CGuildQuestPrizeInfo — guild-task/quest reward table.* (server: client-only (reads shared guild-task prize config); prize grant is server-authoritative, conf high)
- ƒ standard 2D chunked lookup by id

### CGuildTaskCondition::AllocByTypeName `@0x118a60f0` — guild-task
*Guild-task prerequisite/condition factory. Given a condition type name it tail-calls an allocator (FUN_10c3d580, 'does not return' = jump/throw allocator) with the byte size of the matching condition struct, i.e. it dispatches allocation of a guild-task condition object keyed by its XML type string.* (server: client-only (object factory for parsing condition config); the condition TYPES themselves (Quest, QuestExec, CharLevel, NpcAtdLevel, HunterStarLevel, GuildLevel, CharSex, ItemCount) are the authoritative set of guild-task/quest prerequisites the server must also enforce, conf high)
- ƒ name=="Quest" -> alloc size 0xc (12)
- ƒ name=="QuestExec" -> alloc size 0xc (12)
- ƒ name=="CharLevel" -> alloc size 0x10 (16)
- ƒ name=="NpcAtdLevel" -> alloc size 0x10 (16)
- ƒ name=="HunterStarLevel" -> alloc size 0x10 (16)
- ƒ name=="GuildLevel" -> alloc size 0x10 (16)
- ƒ name=="CharSex" -> alloc size 0xc (12)
- ƒ name=="ItemCount" -> alloc size 0x14 (20)
- ƒ no match -> return 0

### CGuildTaskGroupInfo::GetByIndex `@0x1190c0c0` — guild-task
*Return CGuildTaskGroupInfo (guild-task group definition) record at linear index.* (server: client-only accessor into guild-task-group table, conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0

### CGuildTaskGroupInfo::GetRecordById `@0x111f2e40` — guild-task
*Config-table accessor (2D) for CGuildTaskGroupInfo — guild task group definitions.* (server: client-only (shared guild-task config), conf high)
- ƒ standard 2D chunked lookup by id

### CGuildTaskInfo::FindTaskInGroupById `@0x118a8f90` — guild-task
*Same paged by-id lookup + category filter as 0x118a8e90 but returns the matching CGuildTaskInfo record pointer (0 if not found / category mismatch).* (server: validation/lookup (resolve guild-task id to record within this object's category), conf high)
- ƒ identical paged lookup to 0x118a8e90 (minId=+0x30,pageSize=+0x28,count=+0x24,pages=+0x20)
- ƒ return entry iff entry!=0 && entry+0x20 == this->field_0x10, else 0

### CGuildTaskInfo::GetByIndex `@0x118a8f10` — guild-task
*Return the CGuildTaskInfo record at linear array index param_1 (bounds-checked against the manager's contiguous record vector).* (server: client-only accessor into the guild-task definition table, conf high)
- ƒ mgr = CGuildTaskInfo::GetManager(...)
- ƒ count = (mgr+0x18 - mgr+0x14) >> 2  (vector of ptrs, 4 bytes each)
- ƒ if 0<=idx<count return *(mgr+0x14 + idx*4) else 0

### CGuildTaskInfo::GetRecordById `@0x114a8660` — guild-task
*Config-table accessor (2D) for CGuildTaskInfo records.* (server: client-only (shared config), conf high)
- ƒ standard 2D chunked lookup by id

### CGuildTaskInfo::HasTaskInGroupById `@0x118a8e90` — guild-task
*Member fn on some guild object; looks up a CGuildTaskInfo record by id in the manager's paged/sparse container and returns bool = 'a task with this id exists AND its category field (task+0x20) equals this->field_0x10'. Used to validate a task id belongs to this object's group/category.* (server: validation (confirms a client-referenced guild-task id is real and in the expected category); server must do the equivalent authoritative check. Confirms CGuildTaskInfo+0x20 = task category/typeOrCategory (matches recovered schema)., conf high)
- ƒ mgr = CGuildTaskInfo::GetManager(0,"CGuildTaskInfo",0)
- ƒ paged container: minId=mgr+0x30, pageSize=mgr+0x28, count=mgr+0x24, pages=mgr+0x20
- ƒ reject id==-1; require (id!=0 \|\| minId==0) && pageSize!=0
- ƒ local = id - minId; require 0<=local<count
- ƒ page = pages[local/pageSize]; entry = page[local%pageSize]
- ƒ match iff entry!=0 && entry+0x20 == this->field_0x10
- ƒ returns (entry != 0) after the +0x20==+0x10 check

### CGuildTaskInfo::IsTaskAvailableForGuild `@0x114a6a70` — guild-task
*Validates whether a guild task (by ID) is currently available to a guild: not already taken (FUN_114a73a0), guild meets four numeric requirements, and all sub-conditions pass (FUN_114a9700).* (server: validation — server must enforce these guild-task prerequisites before assigning the task, conf high)
- ƒ record via 2D lookup on param_2 (task id)
- ƒ require FUN_114a73a0(id)==0 (task not already active)
- ƒ req: record+0x24 <= guild+0x44  (e.g. guild level)
- ƒ req: record+0x28 <= guild+0x4c
- ƒ req: record+0x2c <= guild+0x54
- ƒ req: record+0x30 <= guild+0x68
- ƒ then iterate record+0x34..+0x38 (dword list), each must satisfy FUN_114a9700(entry); all pass -> return 1
- $ record+0x24/+0x28/+0x2c/+0x30 = four guild threshold requirements (level/repute/arena/plot per guild-content mapping)

### CGuildTaskInfo::ReadRow `@0x11a03200` — guild-task
*Full config-row reader for a CGuildTaskInfo (guild-task/legion-task definition). Reads id, localized Name/Note/Description strings, requirement fields, a task-content sub-object built from Content* args, and the full reward set. This recovers the complete CGuildTaskInfo struct layout (schema doc previously only had 0x20).* (server: authoritative config — this is the guild-task definition the server must own: task requirements (guild level/repute/arena/plot, prerequisite tasks) and reward grants (guild exp/fund/repute/arena, gold, items). Server computes and grants these amounts on task completion; client only reads the table for display., conf high)
- ƒ id (unnamed first field) -> this+0x10
- ƒ "Name" -> localized string (SetName sink)
- ƒ "Note" -> localized string
- ƒ "Description" -> localized string
- ƒ "Group" -> this+0x20 (int, task category/group; matches recovered typeOrCategory@0x20)
- ƒ "GuildLevel" (required) -> this+0x24
- ƒ "GuildRepute" (required) -> this+0x28
- ƒ "GuildArena" (required) -> this+0x2c
- ƒ "GuildPlot" (required) -> this+0x30
- ƒ "PreTasks" -> list at this+0x34 via FUN_1162bea0 (prerequisite task ids)
- ƒ "ContentsType" -> this+0x40
- ƒ "ContentId" -> local_464; "ContentType" -> local_460; "ContentArg1"->local_45c; "ContentArg2"->local_458; "ContentArg3"->local_454; "ContentArg4"->local_450; "ContentArg5"->local_44c
- ƒ content obj = FUN_11a02e50(&local_464); if nonzero push int into vector at this+0x48 (end ptr this+0x48, grows by 4; realloc via FUN_11a04c30 when full at this+0x4c)
- ƒ "GuildExpPrize" -> this+0x50 (reward: guild EXP)
- ƒ "GuildFundPrize" -> this+0x54 (reward: guild funds)
- ƒ "GuildReputePrize" -> this+0x58 (reward: guild reputation)
- ƒ "GuildArenaPrize" -> this+0x5c (reward: guild arena points)
- ƒ "GoldPrize" -> this+0x6c (reward: gold currency)
- ƒ "ItemsPrize1".."ItemsPrize5" -> parsed via FUN_11a030e0 into an item-reward list (appended, null-terminated, buffer at local_420/this)
- $ Reward columns per guild task: GuildExpPrize, GuildFundPrize, GuildReputePrize, GuildArenaPrize, GoldPrize, plus up to 5 ItemsPrize entries
- $ Requirement columns: GuildLevel, GuildRepute, GuildArena, GuildPlot, PreTasks
- $ Content sub-object holds ContentId, ContentType, ContentArg1..5 (7 ints, matches CGuildTaskInfo PlayerTaskEntryStride=7 in schema doc)

### CGuildTaskInfoWrapper::ctor `@0x116173a0` — guild-task
*Constructs a small guild-task view/wrapper object: sets vtable PTR_FUN_11d34210, stores task id (param_1[1]), a flag (param_1[2]=1), and the resolved CGuildTaskInfo record (param_1[4]); then allocates a 0x28 sub-object.* (server: client-only (UI wrapper), conf medium)
- ƒ param_1[1]=id, param_1[2]=1, param_1[4]=CGuildTaskInfo[id]; then FUN_10c3d580(0x28) alloc

### CGuildTaskLibInfo::GetRecordById `@0x111f2e90` — guild-task
*Config-table accessor (2D) for CGuildTaskLibInfo — guild task library definitions.* (server: client-only (shared guild-task config), conf high)
- ƒ standard 2D chunked lookup by id

### CGuildTaskLibInfo::GetRecordByIndex `@0x117d6be0` — guild-task
*1D vector accessor for CGuildTaskLibInfo records.* (server: client-only, conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2

### CGuildTaskRef::Init `@0x11617b20` — guild-task
*Initializes a 3-field guild-task reference struct: param_1[0]=task id, param_1[1]=CGuildTaskInfo record (or 0), param_1[2]=param_3.* (server: client-only, conf high)
- ƒ param_1[0]=id; param_1[1]=CGuildTaskInfo[id] or 0; param_1[2]=param_3

### GetConfig_GuildCelebration `@0x117d7b00` — guild-task
*Lazily loads and returns the 'GuildCelebration' config-data section singleton.* (server: client-only (shared config), conf high)
- ƒ one-time FUN_1024f010("GuildCelebration"); *param_1 = DAT_12393da4

### GuildTaskState::LoadFromPacket `@0x114a9ad0` — guild-task
*Parses a guild-task-state network payload (param_2): resolves TaskLibInfo (offset +1) and TaskGroupInfo (offset +5), stores refresh time (+9) and a flag (+0xd), then reads up to 0x40 task IDs (count at +0x11, array of int16 at +0x15 stride 7) resolving each CGuildTaskInfo, and finally walks the task tree and validates state.* (server: client-only parse of server-authoritative guild-task state; the 64-task cap and layout are wire contract, conf medium)
- ƒ guard: if *param_2==0 return; obj+0x168 = 1 (loaded flag)
- ƒ obj+0x160 = CGuildTaskLibInfo[ *(param_2+1) ]; obj+0x164 = CGuildTaskGroupInfo[ *(param_2+5) ]
- ƒ obj+0x16c = *(param_2+0xd)
- ƒ refresh: FUN_10a142d0 with *(libRec+0x24) and *(param_2+9)
- ƒ task count = min(*(int*)(param_2+0x11), 0x40); iterate int16 ids at (param_2+0x15) stride 7 bytes
- ƒ then CGuildTaskInfo::ValidateGuildTaskState(param_2)
- $ max task IDs per guild = 0x40 (64); per-id record stride in packet = 7 bytes (int16 id + 5 bytes)

### TaskFilterDef_Guild::Load `@0x117854b0` — guild-task
*Loads a guild-oriented task-filter def reading Level, Group, Appraisal, Count, GuildersCount (ints) and IsOfficer (bool) from XML.* (server: client-only (shared config); these guild-task conditions must be validated server-side, conf high)
- ƒ Level->int@+0x20; Group->int@+0x24; Appraisal->int@+0x28; Count->int@+0x2c; GuildersCount(DAT_11dbb648)->int@+0x30; IsOfficer->bool@+0x34; (second GuildersCount 'GuildersCount' string)->int@+0x38
- $ Level, Group, Appraisal, Count, GuildersCount = guild-task condition thresholds; IsOfficer = officer-only flag

### TaskGuildCelebrationScoreDef::ctor `@0x1177fc70` — guild-task
*List-head+name constructor for TaskGuildCelebrationScoreDef (guild celebration scoring def container).* (server: client-only, conf medium)
- ƒ *(p+0x10)=p; *(p+0x14)=p; name='TaskGuildCelebrationScoreDef'

### TaskGuildCelebrationScoreDef::ctor_dup `@0x11781950` — guild-task
*Duplicate of 0x1177fc70.* (server: client-only, conf medium)
- ƒ list-head+name init

### TaskGuildLevelContentDef::ctor `@0x1177fca0` — guild-task
*List-head+name constructor for TaskGuildLevelContentDef (guild level-up content def container).* (server: client-only, conf medium)
- ƒ *(p+0x10)=p; *(p+0x14)=p; name='TaskGuildLevelContentDef'

### TaskGuildLevelContentDef::ctor_dup `@0x11781980` — guild-task
*Duplicate of 0x1177fca0.* (server: client-only, conf medium)
- ƒ list-head+name init

### TaskGuildPrizeDef::ctor `@0x1177fcd0` — guild-task
*List-head+name constructor for TaskGuildPrizeDef (guild task/level prize def container).* (server: client-only, conf medium)
- ƒ *(p+0x10)=p; *(p+0x14)=p; name='TaskGuildPrizeDef'

### TaskGuildPrizeDef::ctor_dup `@0x117819b0` — guild-task
*Duplicate of 0x1177fcd0.* (server: client-only, conf medium)
- ƒ list-head+name init


## social  (20)

### CFriendFarmModel::BuildEnterFarmVO `@0x108e3340` — social/friend-farm
*Builds the VO for entering/viewing a farm (own or a friend's). Emits farmPoint, farmExp, bFriendGatherBonus, bSkipCutScene, bFarmPetVisible (driven by CVar g_ShowFarmPet), ownerID; if viewing a friend's farm also emits friendName, friendFarmPoint, friendRemainGatherCnt.* (server: client-only display; underlying farmPoint/farmExp/gather-bonus flags are server-owned., conf medium)
- ƒ farm-context struct offsets (base local_64): +0x14 farmPoint, +0xe4 friendRemainGatherCnt, +0xe8 bFriendGatherBonus(byte), +0xe9 bSkipCutScene(byte)
- ƒ friend-record offsets (iVar5): +0x24 name(CPet::SetName), +0x4c friendFarmPoint
- ƒ ownerID compared against CONCAT44(DAT_123bbacc,DAT_123bbac8) (local player 64-bit uid); equal => own farm branch, else friend branch
- ƒ bFarmPetVisible = (CVar g_ShowFarmPet != 0)

### CFriendFarmModel::BuildFriendFarmListVO `@0x108e25d0` — social/friend-farm
*Builds the "FirendFarmList" VO array pushed to the UI listing a player's friends' farms. For each friend entry it emits a FRIEND_FARM_CLASS_NAME VO with fields netId, name(CPet::SetName), a bound-flag, isOnline, farmPoint, intimate, collectionNum; then emits nRemainGatherCnt (remaining daily gather count) for the local player.* (server: client-only presentation, but the cap it renders is authoritative on the server: server owns farmPoint/intimate/collectionNum and the daily gather counter., conf medium)
- ƒ nRemainGatherCnt = 10 - FUN_1025b060(); if (result < 1) result = 0  -> daily friend-farm gather cap = 10
- ƒ friend-entry field offsets (relative to entry ptr iVar1): +0x24 name, +0x28 netId, +0x2c field(FUN_104d1550 &DAT_11dccf88), +0x34 gate(if 0 ->0 else FUN_1025b060 result at +0x38 region), +0x38 isOnline(byte), +0x48 intimate, +0x4c farmPoint, +0x50 collectionNum
- ƒ manager player ptr = *(*(DAT_1202e818+0xd0)+0x90) then vtbl+0xb4; guild/farm mgr accessed via player[0xb57] (checked != 0)
- $ max daily gather count = 10 (used to compute remaining gathers)

### CFriendFarmModel::InitModel `@0x108e1f60` — social/friend-farm
*UI-model init entrypoint for the friend-farm feature. Registers the client script/UI callback pair "InitModel" and "QueryFriendInfo" (via FUN_100b62c0 name-hash + FUN_108e89c0/FUN_108e88f0 binder), then walks a model-manager chain (FUN_10d17440/FUN_10d17870) to attach two sub-models (FUN_108ee190, FUN_108ee1e0).* (server: client-only (UI/script binding and model wiring; no server state)., conf medium)

### FriendController::NotifyFriendOnlineStateChange `@0x10825e70` — social/friends (online notification)
*Fires a friend online/offline reminder toast if the 'g_FriendRemind' cvar is enabled. Sends UI event 0xc30 when the friend is online (*(friend+0x20)==0) or 0xc31 otherwise.* (server: client-only UI toast. Online-state changes are pushed by the server; this only renders the notification., conf medium)
- ƒ gate: cvar 'g_FriendRemind' (via console mgr +0x54, then +0x8 get-value) must be non-zero
- ƒ if *(friend+0x20)==0 -> FUN_1112f070(0xc30, name)  else -> FUN_1112f070(0xc31, name)
- ƒ friend display arg = FUN_1024e9b0(friend, 6)

### FriendController::RegisterCommands `@0x108259e0` — social/friends (command dispatch table)
*Registers the friend controller's command->handler table. Defines the full client-side friend/social RPC surface (friend groups, add/delete, blacklist, mood, apply accept/reject).* (server: client-only registration; enumerates the authoritative friend/social command surface the server must service., conf high)

### FriendListModel::BuildFriendListVO `@0x10825f60` — social/friends (full friend list)
*'_getFriendListData' handler. Reads the friend manager (ctx+0x2d5c) and builds the complete friend-list UI model: group headers (GROUP_CLASS_NAME), the default friend list, and per-group friend rows (FRIEND_CLASS_NAME) with identity, server, level, intimacy, online/team/guild info. Cross-server flag derived by comparing each friend's world-server id against the local player's.* (server: client-only VO builder. Entire social graph (membership, intimacy, online state, team/guild association, cross-server ids) is server-authoritative and pushed into ctx+0x2d5c. bCrossServer is a local comparison against ctx+0x2d78 (local world-server id)., conf medium)
- ƒ friend manager = *(playerCtx + 0x2d5c); skipped if null
- ƒ isInTown top field = default true, overridden by (*(*(ctx+0xd0))+0x164)() query
- ƒ per-friend struct f offsets (dword indexed): netId = f[10]; worldServerId = f[0x11]; HRLevel = f[0x10] and f[0xb] (level fields); intimate = f[0x12] (64-bit via FUN_104d1440 -> intimacy points); isOnline = *(byte)(f+0xe*4); lineID = f[0xf]; strMood = f[0x1a]; nTeamID = f[0x22]; strHunterStar = f[0x29]; StrServer via FUN_1025b060(f[0xd]) when f[0xd]!=0
- ƒ bCrossServer = ( *(curPlayerCtx + 0x2d78) != friend.worldServerId )  -> local world-server id at ctx+0x2d78
- ƒ groupType/groupId from f[0x21] sub-record: groupId = *(byte)(f[0x21]+1) when f[0x21]!=0 else 0/0xff
- ƒ guildName / clanName resolved via FUN_10829c60 (string lookups)
- ƒ friends grouped: records with f[0x21]==0 go to defaultFriendList; others matched into groupDataList by group id byte *(f[0x21]+1)
- $ intimate = f[0x12] friendship intimacy points (64-bit); HRLevel = hunter rank/level; both server-owned

### FriendListModel::RegisterCommands `@0x10825ed0` — social/friends (registration/plumbing)
*Registers '_getFriendListData' -> FUN_10825f60 (dispatch mode param==1). Plumbing.* (server: client-only registration., conf high)

### MailModel::BuildFriendNameListVO `@0x10820e60` — social/friends (mail recipient picker)
*'GetFriendNameData' handler. Reads the friend-list manager (ctx+0x2d5c), builds a FriendNameList VO of friend display names (with an optional name filter), used to populate the mail recipient / friend selector. Emits an 'addtime' boolean per friend derived from how long ago the friendship was formed.* (server: validation/client-preview. Friend add-time and the social graph are server-authoritative; the 3-day maturity rule should be re-checked server-side for any action it gates. Name matching is client-side filtering only., conf medium)
- ƒ friend manager = *(playerCtx + 0x2d5c); skipped if null
- ƒ name filter built from param_4[8] string; friends whose name doesn't match (FUN_10254970 != -1) are skipped
- ƒ addtime flag: nowSecs = FUN_111f8d20() (current time, 64-bit); friendAddTime = *(friend + 0xc0); addtime = ( (nowSecs - friendAddTime) < 0x3f481 ) ? 0 : 1
- ƒ 0x3f481 = 259201 (= 3*86400 + 1). So addtime=1 means the friendship is OLDER than 3 days; addtime=0 within the first 3 days
- $ 3-day (259200s) threshold gates the 'addtime' friend-maturity flag — likely used to restrict gifting/intimacy actions to friendships older than 3 days

### NpcFriendModel::BuildNpcFriendDetailVO `@0x107f0840` — social/npc-friend (companion/ATD)
*Builds the UI value-objects for the NPC-friend ('ATD' companion) detail panel: for the currently selected NPC group it emits a _detail VO plus per-degree gift/lock lists. Reads the NPC-friend group record from the local player context (ctx+0x2ac0), fills GroupId/GroupName, current & max impression (friendship points), friendship degree tiers (unlock/selected flags, degree name strings) and the gift item list. Pure client-side VO population fed to a UI list widget (vtbl+0xf 'push VO').* (server: client-only (UI VO builder). Impression values, degree/tier unlock state and gift eligibility are server-authoritative; this only renders them. The min(cur,max) clamp is a display safeguard., conf medium)
- ƒ player ctx obtained via (*(*(*(DAT_1202e818+0xd0)+0x90))+0xb4)() ; NPC-friend group record base = *(ctx+0x2ac0), skipped if null
- ƒ MaxImpression = FUN_11730460(groupRec[2])  (max impression for the group's current stage)
- ƒ CurImpression = min( groupRec_impression[1] , MaxImpression )  -> clamped so displayed current never exceeds max
- ƒ GroupId = groupRec[0xb]; degree = groupRec[2] (current friendship tier/stage)
- ƒ per-degree loop stride = 9 dwords (pppppuVar9 += 9); bUnLock = (degreeValue <= *(entry+8)); bSelected = (degreeValue == *(iVar3+8))
- ƒ GroupName string resolved via FUN_100e5b40 record (+0x14); degreeName via FUN_117302b0(degree)->record+0x14
- ƒ class names: NPC_ATD_VO_CLASS_NAME, NPC_FRIENDLOCK_VO_CLASS_NAME, NPC_DETAIL_VO_CLASS_NAME, TASK_AWARD_CLASS_NAME
- $ CurImpression / MaxImpression are the NPC-friend intimacy points shown to the player; server owns the accrual, client only clamps display

### SoulBeastSocialActionDef::ctor `@0x1177f430` — social
*Trivial constructor initializing an intrusive list head (self-pointers at +0x10/+0x14) and naming the def 'SoulBeastSocialActionDef'.* (server: client-only (config def container ctor), conf medium)
- ƒ *(p+0x10)=p; *(p+0x14)=p; name='SoulBeastSocialActionDef'

### SoulBeastSocialActionDef::ctor_dup `@0x11781110` — social
*Duplicate of 0x1177f430 (SoulBeastSocialActionDef ctor).* (server: client-only, conf medium)
- ƒ *(p+0x10)=p; *(p+0x14)=p; name='SoulBeastSocialActionDef'

### TdrDump::FriendRoleInfo `@1016bdf0` — social/friend
*TDR dump of a friend/role brief (TlvFriendRoleInfo-like): [ullRoleDBID]@+0(u64), [iLevel]@+8, [szRoleName]@+0xc(str, 0x20), [bGroupID]@+0x2c(u8), [dwFriendly]@+0x2d, [iFarmPoint]@+0x31, [iFarmCanBeGatheredCount]@+0x35, [iHRLevel]@+0x39, [iAddTime]@+0x3d, [dwSvrId]@+0x41.* (server: client-only (debug serialization; dwFriendly=friend-affinity value the server tracks), conf high)
- ƒ struct: +0=roleDBID(u64),+8=level,+0xc=roleName,+0x2c=groupID(u8),+0x2d=friendly,+0x31=farmPoint,+0x35=farmCanBeGatheredCount,+0x39=hrLevel,+0x3d=addTime,+0x41=svrId

### TdrDump::FriendRoleInfo_b `@102b7db0` — social/friend
*TDR dump of friend/role brief, identical field layout to FUN_1016bdf0 but emits [dwSvrId] before [iAddTime] (svrId@+0x3d, addTime@+0x41).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=roleDBID(u64),+8=level,+0xc=roleName,+0x2c=groupID(u8),+0x2d=friendly,+0x31=farmPoint,+0x35=farmCanBeGatheredCount,+0x39=hrLevel,+0x3d=svrId,+0x41=addTime

### TdrDump::MailFlag `@102990c0` — social/mail
*Plain TDR dump: [iRetCode]@+0, [iMailFlag]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=retCode,+4=mailFlag

### TdrDump::MailFlag_seh `@10299020` — social/mail
*SEH-wrapped TDR dump: [iRetCode]@+0, [iMailFlag]@+4.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=retCode,+4=mailFlag

### TdrDump::MailSendStats `@10171270` — social/mail
*TDR dump of mail send-limit stats (TlvMailSendStats): [accMailSendTimes]@+0, [passerbySendTimes]@+4, [refreshTime]@+8.* (server: validation (per-period mail send counters; refreshTime drives reset — server enforces the send caps), conf high)
- ƒ struct: +0=accMailSendTimes,+4=passerbySendTimes,+8=refreshTime

### TdrDump::NameGuildClan `@10151940` — social/profile
*TDR dump of a name+guild+clan string triple: [name]@+0, [guild]@+0x20, [clan]@+0x40 (each 0x20-byte name field).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=name[0x20], +0x20=guildName[0x20], +0x40=clanName[0x20]

### TdrDump::RoleFullInfo `@10233a10` — social/profile
*TDR dump of a full role/player info record (used in friend/team lists): [dBID]@+0(u64), [name]@+8(str), [netID]@+0x28, [level]@+0x2c, [isOnline]@+0x30(byte), [levelID]@+0x31, [lineId]@+0x35, [mood]@+0x39(str), [guildName]@+0x61(str), [farmPoint]@+0x81, [farmCanBeGatheredCount]@+0x85, [teamId]@+0x89, [teamPwdFlag]@+0x8d, [star]@+0x91(str), [clan]@+0x111(str), [hRLevel]@+0x131, [addTime]@+0x135, [svrId]@+0x139.* (server: client-only (debug serialization; reveals social/team record layout), conf high)
- ƒ offsets as listed; name/mood/guildName/star/clan are fixed-size string fields

### TdrDump::SocialInfo `@102fe8c0` — social/profile
*TDR dump of a passerby/social info record (TlvSocialInfo/TlvPasserbyInfo-like): [szName]@+0(str,0x20), [iLevel]@+0x20, [szGuildName]@+0x24(str,0x20), [szHunterStar]@+0x44(str,0x80), [iHRLevel]@+0xc4, [iLineID]@+0xc8, [bVipLevel]@+0xcc(byte), [bVipCanUse]@+0xcd(byte).* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=name[0x20],+0x20=level,+0x24=guildName[0x20],+0x44=hunterStar[0x80],+0xc4=hrLevel,+0xc8=lineID,+0xcc=vipLevel(u8),+0xcd=vipCanUse(u8)

### TdrFmtField_NameGuildValArg `@0x1037b560` — social
*Formats a name/guild/value record: [szName] string@0 (32B slot), [szGuild] string@0x20 (32B slot), [iVal] i32@0x40, [iArg1] i32@0x44.* (server: client-only debug formatter; 0x20-byte name fields authoritative, conf high)
- ƒ off 0x00 char[0x20] szName
- ƒ off 0x20 char[0x20] szGuild
- ƒ off 0x40 i32 iVal
- ƒ off 0x44 i32 iArg1


## guild-commerce  (17)

### CCommerceBoatInfo::GetRecordById `@0x109f58d0` — guild-commerce
*Config-table accessor: fetches a CCommerceBoatInfo static record by ID using the standard InfoManager chunked 2D-array lookup, with lazy singleton init on miss.* (server: client-only (reads shared static commerce-boat config table), conf high)
- ƒ InfoManager singleton at puVar2 (from CCommerceBoatInfo::GetInfoManagerSingleton). row = *(int*)(mgr[8] + (id/mgr[10])*4); return *(row + (id%mgr[10])*4)
- ƒ bounds: id!=-1 && (id!=0 \|\| mgr[0xc]==0) && mgr[10]!=0; id -= mgr[0xc]; require 0<=id<mgr[9]
- ƒ mgr offsets (dwords): [8]=chunk-ptr-array base, [9]=count, [10]=chunk size, [0xc]=id base offset

### CCommerceBoatInfo::GetRecordByIndex `@0x111743d0` — guild-commerce
*1D config-table accessor: returns the CCommerceBoatInfo record pointer at a raw vector index.* (server: client-only (static table), conf high)
- ƒ vec base=*(mgr+0x14), end=*(mgr+0x18); if 0<=idx<((end-base)>>2) return *(base+idx*4)

### CCommerceInfo::GetRecordById `@0x109f5a80` — guild-commerce
*Config-table accessor for CCommerceInfo static records; identical chunked 2D-array lookup pattern as CCommerceBoatInfo.* (server: client-only (shared static commerce config), conf high)
- ƒ row = *(int*)(mgr[8] + (id/mgr[10])*4); return *(row + (id%mgr[10])*4); id -= mgr[0xc]; 0<=id<mgr[9]

### CCommerceInfo::GetRecordByIndex `@0x11174440` — guild-commerce
*1D config-table accessor for CCommerceInfo records by raw index.* (server: client-only (static table), conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2; return *(mgr[0x14]+idx*4)

### CGuildCommodityUnlockInfo::GetManagerTailcall `@0x1145eed0` — guild-commerce
*Fetches the CGuildCommodityUnlockInfo manager and tail-calls its vtable+0x28 method (count/iterator). Thin wrapper.* (server: client-only, conf low)
- ƒ mgr = GetManager(); jmp *(mgr+0x28)

### CGuildCommodityUnlockInfo::GetRecordById `@0x1145f170` — guild-commerce
*Config-table accessor (2D) for CGuildCommodityUnlockInfo records.* (server: client-only (shared config), conf high)
- ƒ standard 2D chunked lookup by id

### CGuildCommodityUnlockInfo::GetRecordById_dup `@0x1145f1c0` — guild-commerce
*Duplicate 2D config-table accessor for CGuildCommodityUnlockInfo (same body as 0x1145f170).* (server: client-only, conf high)
- ƒ standard 2D chunked lookup by id

### CGuildCommodityUnlockInfo::IsCommodityUnlocked `@0x1145e690` — guild-commerce
*Validates whether a guild commodity is unlocked for the given player/guild: looks up CGuildCommodityUnlockInfo by ID, then checks required guild level and a second guild metric against player state. Returns 1 if unlocked.* (server: validation — this exact gate should be enforced server-side before allowing purchase/unlock, conf high)
- ƒ record found by 2D lookup on param_2 (commodity id)
- ƒ unlock cond 1: record+0x18 (requiredGuildLevel) <= (uint)*(byte*)(param_1+0x223) (player/guild level byte)
- ƒ unlock cond 2: record+0x1c (requiredMetric) <= FUN_114a8610() (current guild value)
- ƒ returns 1 only if both hold, else 0
- $ record+0x18 = required guild level to unlock commodity
- $ record+0x1c = required secondary guild metric (from FUN_114a8610)

### CGuildRandCommodityInfo::GetRecordById `@0x111f2de0` — guild-commerce
*Config-table accessor (2D) for CGuildRandCommodityInfo — guild random commodity/shop table.* (server: client-only (shared guild-shop config), conf high)
- ƒ standard 2D chunked lookup by id

### CommerceBoatInfo::GetFieldDescriptor `@0x119d0a40` — guild-commerce
*Lazy-init static schema/field descriptor for 'CommerceBoat' field; returns &descriptor, *param_2=1.* (server: client-only schema plumbing; field id 0x1d7 (guild commerce-boat), conf medium)
- ƒ descriptor id constant _DAT_123a3584 = 0x1d7 (471)

### CommerceGrabTimeInfo::GetFieldDescriptor `@0x119d1d50` — guild-commerce
*Lazy-init static schema/field descriptor for 'CommerceGrabTime' field; returns &descriptor, *param_2=1.* (server: client-only schema plumbing; field id 0x1d9 (commerce grab/steal time window), conf medium)
- ƒ descriptor id constant _DAT_123a35fc = 0x1d9 (473)

### CommerceInfo::GetFieldDescriptor `@0x119d1050` — guild-commerce
*Lazy-init static schema/field descriptor for 'Commerce' field; returns &descriptor, *param_2=1.* (server: client-only schema plumbing; field id 0x1d8 (guild commerce), conf medium)
- ƒ descriptor id constant _DAT_123a35b0 = 0x1d8 (472)

### HunterGroupShipView::BuildTransportShipData `@0x109f6970` — guild-commerce
*Builds the client UI data VO (mh.view.HunterTeamBattle.Data.HunterGroupShipEntryVo) for the guild commerce/transport-ship (HunterTeamBattle) panel: boss timer, boss number, login/transport counts, and per-ship gold cost / required item counts.* (server: client-only (UI VO populate); costs shown are read from shared config, server is authoritative on actual spend, conf medium)
- ƒ bossTime seconds = iStack_48 + iStack_44*0x3c + iStack_40*0xe10 (H*3600 + M*60 + S; 0x3c=60, 0xe10=3600)
- ƒ currentBoss branch 1: bossTime = (iStack_9c*0x3c + iStack_a0*0xe10) - baseSecs + iStack_98; sets currentBoss=1, bossNum=2
- ƒ currentBoss branch 2: bossTime = (iStack_8c*0x3c + iStack_90*0xe10) - baseSecs + prev; sets currentBoss=2, bossNum=2
- ƒ per-ship entry reads: shipID=*(rec+0x10), hunterShipName=*(rec+0x28), goldType=*(rec+0x68), goldNum=*(rec+0x6c), requireItemCounts=*(rec+0x64), tagType/itemTypeID=*(rec+0x60), shipDesc=*(rec+0x58); isUnlock from FUN_111755e0(shipID)
- ƒ sets currentItemCounts=0, bindState=1, bPointType=1, guildID=<empty via 104d14d0>, field 11dcc18c=0xb
- $ goldType @rec+0x68, goldNum @rec+0x6c = currency type & amount to unlock/use a transport ship
- $ requireItemCounts @rec+0x64 = required item quantity

### RanCommerceCount::ctor `@0x1171e0e0` — guild-commerce
*Constructor for a 'RanCommerceCount' object (guild random-commerce counter): sets vtable PTR_FUN_11d439e0, initializes several inline string members, then allocates a 0x24 sub-object.* (server: client-only, conf medium)
- ƒ vtable=PTR_FUN_11d439e0; inits inline strings at +0x19/+0x1f/+0x25/+0x2b/+0x34; FUN_10c3d580(0x24)

### TdrFmtField_CommerceGood `@0x1035ac90` — guild-commerce
*Field-format variant of the commerce-good struct: [dwCommerceId] u32@0, [dwGoodNumber] u32@4.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u32 dwCommerceId
- ƒ off 0x04 u32 dwGoodNumber

### TdrFmtField_GuildCommerceStamp `@0x1035e290` — guild-commerce
*Formats: [ullGuildId] u64@0, [iTimeStamp] i32@8, [iCommerceid] i32@0xc.* (server: client-only debug formatter; layout authoritative, conf high)
- ƒ off 0x00 u64 ullGuildId
- ƒ off 0x08 i32 iTimeStamp
- ƒ off 0x0c i32 iCommerceid

### TdrPack_CommerceGood `@0x1035abf0` — guild-commerce
*TDR text-packer entry point for a guild commerce-good struct. Guards buf==NULL -> -0x13 (-19). Serializes [dwCommerceId] (u32 @off 0) then [dwGoodNumber] (u32 @off 4) as TdrText_FieldScalar decimal fields.* (server: shared plumbing; struct layout is authoritative for wire compat (commerce good id + quantity), conf high)
- ƒ off 0x00 u32 dwCommerceId
- ƒ off 0x04 u32 dwGoodNumber
- ƒ DAT_11d9f574 = unsigned-decimal fmt ("%u") sentinel
- ƒ buf NULL -> return -0x13 (-19)


## chat  (11)

### CChatTabInfo::GetRecordById `@0x111e3320` — chat
*Config-table accessor (chunked 2D) for CChatTabInfo static records by ID.* (server: client-only (chat tab config), conf high)
- ƒ standard 2D lookup: id-=mgr+0x30; row=*(mgr[0x20]+(id/mgr[0x28])*4); return *(row+(id%mgr[0x28])*4)

### CChatTabInfo::GetRecordByIndex `@0x111e3370` — chat
*1D vector accessor for CChatTabInfo records.* (server: client-only, conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2

### CChatTabInfo::ReadRow `@0x1196c250` — chat
*Config-row reader for a chat-tab definition. Reads: an id (unnamed first field) -> this+0x10; "TabName" (localized string, via CPet::SetName sink); "ChatTab" -> a set of chat-channel enum values parsed into a bitmask and a channel list. Emits per-field 'missing attribute' warnings when absent.* (server: client-only (chat-tab UI configuration: which channels appear under a named tab). No server state, but enumerates the chat channel id set., conf medium)
- ƒ id -> this+0x10 (int, reader vtbl+0x20)
- ƒ TabName -> string (reader vtbl+0x28) -> SetName sink
- ƒ ChatTab channel bitmask DAT_123a0e68 built from table UNK_11d63c8c: for offset uVar8=4; uVar8<0x38 step 4: mask \|= 1<<(*(u8*)(UNK_11d63c8c+uVar8) & 0x1f); if result==0 -> 0xffffffff
- ƒ channel-name list built from same 4..0x38 table entries (0x0d=13 channel enums, stride 4)
- ƒ FUN_1196bc50(this+0x18, parsedStr, channelMask, 10, ...) — stores channel config at this+0x18 with cap arg 10
- $ channel table spans bytes 4..0x38 stride 4 => 13 chat-channel enum entries; literal '10' passed as a limit/count to the channel store fn

### ChatCommandPanel::ctor_RegisterHandlers `@0x10b5bdc0` — chat
*Constructor for a chat UI/command controller: initializes 4 embedded string buffers and registers command callbacks (SubmitHornMessage, SubmitLogMessage, InitChatData, CopyChatData, chatSwapIndex, chatDel/Edit/AddLabel, HornNumDialogOK/Cancel).* (server: client-only (chat UI wiring); horn messages themselves are server-relayed, conf high)
- ƒ vtable = PTR_FUN_11cc79cc; 4 inline std::string members at param_1+2,+8,+0xe,+0x14
- ƒ SubmitHornMessage->CGmChatCommand::HandleGiveItemCommand; SubmitLogMessage->FUN_10b5c840; InitChatData->FUN_10b5cf10; CopyChatData->FUN_10b5cde0; chatSwapIndex->FUN_10b5cf60; chatDelLabel->FUN_10b5cfc0; chatEditLabel->FUN_10b5d010; chatAddLabel->FUN_10b5d1e0; HornNumDialogOK->FUN_10b5d3f0

### ChatMessageVO::Build `@109afd60` — chat
*Builds a single chat-message VO appended to 'chatArray' (class 'CHATMESS_CLASS_NAME'). Reads a received chat-message struct (param_2) and maps its fields. Uses global chat model handles (DAT_123bd3f0/f4/f8). m_nWorldSvrID is zeroed when it equals the local world-server id (guildMgr+0x2d78).* (server: client-only (VO over received chat packet), conf high)
- ƒ chat msg struct offsets (dword index unless noted): m_nSrcId=[0], m_sSrcName=+0x10([4]), m_sMsg=+0x30([0xc]), m_bSrcSelf=byte+0x230([0x8c]), m_nLineID=[0x8d], m_nVip=[0x8e], m_bVipCanUse=byte[0x90], m_sGuildName=+0x241, m_nLv=[0x99], m_nHRLv=[0x9a], m_sStarlv=+0x26c([0x9b]), m_nHours=[0xa1], m_nMinutes=[0xa2], m_nSeconds=[0xa3], m_bIsOnline=byte[0xa4], worldSvrId=[0x8f]
- ƒ m_nWorldSvrID = (msg[0x8f] == *(guildMgr+0x2d78)) ? 0 : msg[0x8f]

### ChatModel::RegisterHandlers `@109af720` — chat
*UI-model initializer for the chat window. Registers handlers: InitModel, GetChatMess, SetBlockList, GetBlockList, Clean, SwitchViewMode.* (server: client-only (UI registration), conf high)

### ChatTabInfo::GetFieldDescriptor `@0x1196c160` — chat
*Lazy-init static schema/field descriptor for the 'ChatTab' data field; returns &descriptor, writes 1 to *param_2.* (server: client-only chat-UI schema plumbing; field id 0x129, conf medium)
- ƒ descriptor id constant _DAT_123a0e04 = 0x129 (297)
- ƒ _DAT_123a0e0c = 1 (flag); other slots zeroed

### GameRules::RegisterChatAndMessageEnums `@0x11043df0` — chat
*Registers chat/text-message channel enum constants used by the game-rules script binding: TextMessageCenter/Console/Error/Info/Server, ChatToTarget/ChatToTeam/ChatToAll, TextMessageToAll/ToAllRemote/ToClient, and mission-objective states.* (server: validation/enum registration (defines chat channel routing constants shared client/server), conf high)
- ƒ each enum registered as a float constant via vtable+0x70 on obj @param_1+0x68; values encoded as float bit patterns: 0x0=0.0, 0x3f800000=1.0, 0x40000000=2.0, 0x40400000=3.0, 0x40800000=4.0, 0x41000000=8.0, 0x47800400=65537.0-ish
- ƒ ChatToTarget=0.0, ChatToTeam=1.0, ChatToAll=2.0, TextMessageToAll=8.0, TextMessageToAllRemote=0x47800400, TextMessageToClient=1.0
- ƒ MO_DEACTIVATED=0.0, MO_COMPLETED=1.0, MO_FAILED=2.0, MO_ACTIVATED=3.0

### PopChatDataVO::Build `@109b8b70` — chat (bubble)
*Builds bubble-chat VO ('POP_CHAT_DATA_CLASSNAME') into either 'm_PopChatArray01' or 'm_PopChatArray02'. Iterates the pop-chat entry list (this+0x38..+0x3c, stride 0xc). Per entry emits strTXT, strChatBg, nPlayerId, bUpdateIcon=1, nWidth=-1, nHeight=-1. Target array chosen by DAT_1202e818[0x10]->vtbl_0x608 (0 -> array01, 1 -> array02). Writes count to output+0x28.* (server: client-only (local render list), conf medium)
- ƒ pop-chat entry stride = 0xc (12) bytes; count = (this+0x3c - this+0x38)/0xc
- ƒ strTXT = *(entry+4); strChatBg = *(entry+8); nPlayerId = FUN_10c3f250() >> 0x1e (top 2 bits)
- ƒ nWidth = nHeight = 0xffffffff (-1, auto)

### PopChatModel::RegisterHandlers `@109b87d0` — chat (bubble)
*UI-model initializer for the pop/bubble-chat model. Registers: InitModel, GetPopChatString, GetPopChatUpdateIndex, GetFillThreadId, GetProcessThreadId, GetFrameId.* (server: client-only (UI registration), conf high)

### TdrDump::ChatSpeakData `@102d5b00` — chat
*TDR dump of a chat message record (TlvChatSpeakData): [iSourceID]@+0, [dwSrcUin]@+4, [ullSrcDBID]@+8(u64), [iSrcLevelGrpId]@+0x10, [szSourceName]@+0x14(str), [bSrcVipLevel]@+0x34(byte), [bSrcVipCanUse]@+0x35(byte), [iQQMask]@+0x36, [iChannelType]@+0x3a, [iLineID]@+0x3e, [iWorldSvrID]@+0x42, [iShowTime]@+0x46, [iHeadLen]@+0x4a, array [szHead] bytes (base +0x4e), [szContent]@+0x14e(str), [bSendByMe]@+0x2df(byte), [bContainBanWords]@+0x2e0(byte), nested [stItems] (FUN_102d4180), [iSrcLevel]@+0x809, [szSrcGuildName]@+0x80d(str), [szSrcHunterStar]@+0x82d(str), [iSrcHRLevel]@+0x8ad.* (server: validation (chat head-blob cap 256 bytes; bContainBanWords is a server-side moderation flag; server owns channel routing fields), conf high)
- ƒ offsets as listed; szHead is a byte array of length iHeadLen
- $ szHead array cap = 0x100 (256) (returns -7 if >256, -6 if <0)


## guild-membership  (10)

### TdrFmtField_ClanerIdNote `@0x103dc820` — guild-membership
*Field-format variant: [ullClaner] u64@0, [szNote] string@8.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner
- ƒ off 0x08 string szNote

### TdrFmtField_ClanerId_A `@0x103dc120` — guild-membership
*Field-format single [ullClaner] u64@0.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrFmtField_ClanerId_B `@0x103dc410` — guild-membership
*Field-format single ullClaner (command B).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrPack_ClanerIdNote `@0x103dc780` — guild-membership
*Packs [ullClaner] u64@0, [szNote] string@8 (member note/reason). Buf NULL -> -0x13.* (server: client request packer (member action with note), conf high)
- ƒ off 0x00 u64 ullClaner
- ƒ off 0x08 string szNote

### TdrPack_ClanerId_A `@0x103dc0a0` — guild-membership
*Single-field [ullClaner] u64@0 packer (claner = clan/guild member id). Buf NULL -> -19.* (server: client request packer (member op by id), conf high)
- ƒ off 0x00 u64 ullClaner

### TdrPack_ClanerId_B `@0x103dc390` — guild-membership
*Distinct single [ullClaner] u64@0 command packer.* (server: client request packer, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrUnpackToBuf_ClanerId_A `@0x103dc1e0` — guild-membership
*Buffer-target [ullClaner] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrUnpackToBuf_ClanerId_B `@0x103dc4d0` — guild-membership
*Buffer-target ullClaner variant (command B).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrUnpackToStr_ClanerId_A `@0x103dc150` — guild-membership
*String-target [ullClaner] u64@0 variant.* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner

### TdrUnpackToStr_ClanerId_B `@0x103dc440` — guild-membership
*String-target ullClaner variant (command B).* (server: client-only formatter, conf high)
- ƒ off 0x00 u64 ullClaner


## guild-league  (10)

### CGuildMatchInfo::GetRecordByIndex `@0x1171c640` — guild-league
*1D vector accessor for CGuildMatchInfo records.* (server: client-only, conf high)
- ƒ idx bound (mgr+0x18 - mgr+0x14)>>2

### CGuildMatchInfo::SetMatchState `@0x111765f0` — guild-league
*Lighter variant of 0x11175b20: looks up CGuildMatchInfo by ID and stores record + two params into obj+0x114/0x11c/0x120 without notification.* (server: client-only state store, conf medium)
- ƒ obj+0x114=record, obj+0x11c=param_3, obj+0x120=param_4

### CGuildMatchInfo::SetMatchStateAndNotify `@0x11175b20` — guild-league
*Looks up a CGuildMatchInfo record by ID, stores it plus two params into the match controller (offsets 0x114/0x11c/0x120), then fires UI event 0xe76 and, when param_3==1, triggers match-start callbacks.* (server: client-only (UI/state update reacting to server guild-match state), conf medium)
- ƒ obj+0x114 = matchInfo record; obj+0x11c = param_3 (state); obj+0x120 = param_4
- ƒ event struct: local_18=0xe76 (event id 3702), local_14=-1, local_10=-1, local_c=param_3, local_8=param_4; dispatched via obj+4 chain (+0x1c,+0xc/+0x98) and FUN_113f3640+0x4c
- ƒ if param_3==1: FUN_11172ef0/11172e60 + conditional FUN_1149f860 (obj+0x34) + FUN_11443140 (obj+4)

### GetConfig_GuildMatch `@0x117341a0` — guild-league
*Lazily loads and returns the 'GuildMatch' config-data section singleton.* (server: client-only (shared config), conf high)
- ƒ one-time FUN_1024f010("GuildMatch"); *param_1 = DAT_12390100

### GetConfig_GuildWar `@0x1171e080` — guild-league
*Lazily loads and returns the 'GuildWar' config-data section singleton.* (server: client-only (shared config section), conf high)
- ƒ one-time FUN_1024f010("GuildWar"); *param_1 = DAT_1238f790

### GetConfig_GuildWarConst `@0x1171e0b0` — guild-league
*Lazily loads and returns the 'GuildWarConst' config-data section singleton (guild-war constants).* (server: client-only (shared constants); values (scoring/timing constants) are the authoritative guild-war tuning, conf high)
- ƒ one-time FUN_1024f010("GuildWarConst"); *param_1 = DAT_1238f798

### GuildMatchSchedule::ComputeRoundOffsets `@0x114896e0` — guild-league
*Lazily fills the three match-info records if missing, then computes qualifier and elimination round time-offset base pointers from record counts and a base time (param_4).* (server: client-only (schedule display); actual round timing is server-authoritative from base time, conf medium)
- ƒ obj[4]=param_4 (base time), obj[5]=0, obj[0xc]=param_3
- ƒ qualifier: n=*(qualRec+0x14); obj[7]=0; obj[6]=param_4 + (n*0x10 - n)*4 = param_4 + n*0x3c  (0x3c=60s per round-slot)
- ƒ qualifier round2: m=*(qualRec+0x18); obj[9]=0; obj[8]=param_4 + (m + n)*0x3c
- ƒ elimination: k=*(elimRec+0x18); obj[0xb]=0; obj[10]=param_4 + k*0x3c
- $ 0x3c (60) = seconds per round slot; record+0x14 = qualifier round count, record+0x18 = secondary/elim round count

### GuildMatchSchedule::LoadTripleInfo `@0x114891e0` — guild-league
*Populates a match-schedule object with three config records by the same ID: CGuildMatchInfo (param_1[0]), CQualifierMatchInfo (param_1[1]), CEliminateMatchInfo (param_1[2]); then calls the offset-computing helper.* (server: client-only (loads shared guild-match schedule config), conf high)
- ƒ param_1[0]=CGuildMatchInfo[id], param_1[1]=CQualifierMatchInfo[id], param_1[2]=CEliminateMatchInfo[id] (all via 2D lookup on param_2)
- ƒ then FUN_114896e0(id, param_3, param_4)

### HunterTeamBattleView::BuildPlayerShipEntries `@0x109f7ad0` — guild-league
*Builds SimplePlayerShipVo entries (playerName/ID/shipIcon/shipStatus/guildID/guildName/enemyOrSelf/currentValue) from a roster at playerObj+0x2abc (stride 0x104). currentValue clamps at >=0.* (server: client-only (UI VO build), conf medium)
- ƒ roster base = *(int*)(record+0x2abc); entry stride = 0x104; count = (base[0x40]-*base)/0x104
- ƒ playerShipIconIndex = *(entry + 0x00); shipStatus = (*(entry+0x60) << 0x1d) >> 0x1d
- ƒ enemyOrSelf = (iStack_74==*(entry+0x18) && local_6c==*(entry+0x1c)) ? 0 : 1
- ƒ currentValue = (targetVal < myShipVal) ? (myShipVal - targetVal) : 0  where myShipVal=local_60 (double->int), targetVal=*(uint*)(entry+0xc)

### HunterTeamBattleView::BuildSimplePlayerShipList `@0x109f7090` — guild-league
*Builds SimplePlayerShipVo list for the HunterTeamBattle guild-vs-guild panel: per-player name, id, ship icon, ship status, guild name, enemy/self flag, and a currentValue (score/progress delta). Handles two data sources (in_stack_00000014==2).* (server: client-only (UI list build); underlying scores are server-authoritative, conf medium)
- ƒ shipStatus = (rawStatus << 0x1d) >> 0x1d  (sign-extract low 3 bits)
- ƒ playerShipIconIndex = *(entry + 0x28)
- ƒ currentValue = iStack_68 - *(entry + 0x2c)  (loop A) ; currentValue = apuStack_70[0] - *(entry+0x2c) (loop B)
- ƒ enemyOrSelf = (ppiStack_138==ppiStack_130 && piStack_158==piStack_12c) ? 0 : 1  (self==0, enemy==1)
- ƒ entry stride = 0x38 bytes; count = (piVar3[1]-*piVar3)/0x38
- ƒ selfGuildPlayer flag = (bStack_108 & 0x8f) == 10


## matchmaking  (8)

### BattleTeamBoxMemberVO::Build `@1092be80` — matchmaking/party
*Iterates battle-team member 'boxes' and builds a member-info VO for the box whose player faction matches a target id (arg[0xe]). Box list at localTeam(+0xb4)->list; count = (list[0x88]-list[0x84])>>3. Per box: resolves player (FUN_1092b9b0), if player->vtbl_0x44()==targetId emits fields.* (server: client-only (VO builder over synced battle-team roster), conf medium)
- ƒ boxCount = (*(list+0x88) - *(list+0x84)) >> 3
- ƒ match when player->vtbl_0x44() == targetId (targetId = arg[0xe] if (arg[0xd]&0x8f)==3\|\|4 else 0xDEADBEAF)
- ƒ boxIndex = (*(EBX+0xc+0x7c)!=0) ? FUN_1092c240() : -1

### BattleTeamInvitePlayerInfoVO::Build `@1092ba00` — matchmaking/party
*Builds a UI view-object describing a player targeted for a battle-team/clan invite. Extracts a target id from the tagged-arg blob (arg+8 when type tag (arg+4)&0x8f is 3 or 4), resolves the player through the social manager (DAT_1202e818->[0xd0]->[0x90] vtbl+0x7c = FindPlayerById), rejects it if vtbl+0xa8 returns nonzero (invalid/self), and reads the local party/team via vtbl+0xb4. Emits playerName (obj->GetName), playerFaction (vtbl+0x44), playerLevel (CPlayer::GetHuntRankOrCount), selfID (*(team+4)).* (server: client-only (presentation VO; reads already-synced player/party state), conf medium)
- ƒ targetId = ((arg+4)&0x8f==3 \|\| ==4) ? *(arg+8) : 0xdeadbeaf
- ƒ player = mgr[0xd0][0x90]->vtbl_0x7c(targetId); skip if player->vtbl_0xa8()!=0
- ƒ playerFaction = player->vtbl_0x44(); playerLevel = CPlayer::GetHuntRankOrCount(); selfID = *(localTeam+4)

### CLevelMatchUI::RegisterScriptCallbacks `@0x10912f00` — matchmaking/instance
*Registers the client callback table for instance/level matchmaking. Binds: GetInstanceEnterData, GetSpecLevelData, IsCrossRegion, GetCrossRegionRoomID, GetGuildMathSignUP (guild-match sign-up state), IsBattleWatch, LevelTeamMatch, LevelTeamMatchByEntrust, ReqSpecLevelData, ReqStopMatch, IsLocalBattleMap, GetCurLevelID, GetCurLevelMode, IsCrossServerPlayer, IsBattleLevelCanTrade.* (server: client-only registration; LevelTeamMatch/LevelTeamMatchByEntrust/ReqSpecLevelData/ReqStopMatch trigger server matchmaking. Cross-region/cross-server getters are read-only., conf high)

### CTeamMatchUI::RegisterScriptCallbacks `@0x10900850` — matchmaking/team-party
*Registers the client callback table for the team/party matchmaking UI. Binds: GetTeamFiltrationData, RefreshTeamInfo, SearchOtherTeam, SearchTeamChangePage, LookOtherTeamInfo, CreateTeamReq, JoinTeamReq, ReqQuitTeam, ReqChangeLeader, ReqKickMember, SetTeamOptionReq, InviteTeam, QuickJoinTeamReq, ReqSearchByName, onTeamTypeEight, onTeamTypeTwelve, onTeamTypeSixTeen, GetTeamMemberList, RaidInviteTeam, RaidTeamRequest, GetNetID.* (server: client-only registration; Create/Join/Quit/ChangeLeader/KickMember/Invite/QuickJoin/RaidTeamRequest are the client-side triggers for server-authoritative team operations., conf high)
- ƒ team-type callbacks onTeamTypeEight/Twelve/SixTeen indicate supported party/raid sizes of 8, 12 and 16
- $ party/raid size tiers: 8, 12, 16 members (onTeamType Eight/Twelve/SixTeen)

### TdrDump::CatCarInfo `@102add90` — matchmaking/faction
*TDR dump of a felyne-cart / faction entry: [dwNetId]@+0, [iFactionID]@+4, [iCatCarCount]@+8, [iCatCarTicketCount]@+0xc.* (server: client-only (debug serialization), conf high)
- ƒ struct: +0=netId,+4=factionID,+8=catCarCount,+0xc=catCarTicketCount

### TdrDump::MatchRoleInfo `@1028c1f0` — matchmaking/team
*TDR dump of a matchmaking role entry: [dwRoleIndex]@+0, [iCharLevel]@+4, [iWeapon]@+8, [iBoxID]@+0xc, [szRoleName]@+0x10(str), [szStarLevel]@+0x30(str), [iFaction]@+0xb0, [bOfficer]@+0xb4(byte), [iHRLevel]@+0xb5, [bBigRand]@+0xb9(byte).* (server: client-only (debug serialization; bOfficer=guild-officer flag, iFaction=faction id), conf high)
- ƒ word offsets: roleIndex=param[0],charLevel=param[1],weapon=param[2],boxID=param[3],roleName=param+4,starLevel=param+0xc,faction=param[0x2c],officer=byte@param+0xb4,hrLevel=+0xb5,bBigRand=byte@+0xb9

### TdrDump::RevivePointCatCar `@102d2730` — matchmaking/faction
*TDR dump of revive/faction cart info: [iPlayerID]@+0, [iFactionID]@+4, [szRevivePointName]@+8(str,0x40), [iReviveType]@+0x48, [iCatCarType]@+0x4c, [iParam]@+0x50, nested [stCatCarInfo] via TdrDebugFormat_CatCarUseInfoList.* (server: client-only (debug serialization), conf high)
- ƒ word offsets: playerID=param[0],factionID=param[1],revivePointName=param+2,reviveType=param[0x12],catCarType=param[0x13],iParam=param[0x14]

### TeamMemberInfoVO::Build `@10956f40` — matchmaking/party
*Builds a party/team member info VO. Reads the member object (param_2): weapon type from avatar record, level/HP/faction/subteam. weaponType derives from avatar record via CAvatarInfo::ResolveRecordById(atoi(name))->[0x14]-0x1e. subTeamID computed from FUN_112e5540/FUN_112e5600 of the member net id.* (server: client-only (VO over synced team roster), conf medium)
- ƒ weaponType = CAvatarInfo::ResolveRecordById(atoi(name))->[0x14] - 0x1e   (0x1e=30 weapon base)
- ƒ subTeamID = FUN_112e5600(netId) + FUN_112e5540(netId)*4   (default -1 if no team)
- ƒ memberLevel = CPlayer::GetHuntRankOrCount; memberHRLevel = FUN_1025b060(); memberTotalHP = FUN_1134b990(); memberCurrentHP = FUN_1025b060()


## guild-ui  (7)

### CMHUI_HunterGroup::BuildGroupMemberListVO `@0x108b38a0` — guild-ui
*OnGetMembers handler: builds the paged group-member list VO (GROUPMEMBER_CLASS_NAME array) and pushes it to Flash via UpdataGROUPMEMBER. Reads per-member contribution/level/title/state fields.* (server: client-only display (server owns member roster -> TlvGuildMemberInfo/TlvGuildMemberData; currentP/weekP are server-tracked contribution points), conf medium)
- ƒ GroupMemberMaxPageNum = *(memberMgr(iVar4+0x2abc parent)+0x2a8); GroupMemberCurrentPage = *(...+0x2a4)
- ƒ per member piVar10: name_member from piVar10[6]/[7] (string); level_member = vtbl+8; HRlevel_member = vtbl+0x3c; currentP (current contribution) = vtbl+0x14; growLevel = vtbl+0x28; hunterNum = vtbl+0x2c; weekP (weekly contribution) = vtbl+0x24; taskNum = vtbl+0x30; isBaned = byte@(piVar10+0x32); titleName via FUN_114b0f80 lookup(+0x18/+0x1c); otherMess = vtbl+0x20 formatted via _i64toa base 10
- ƒ online state = vtbl+0x10 (bool). offlineTimeSpan: if offline, = serverNow (FUN_111f8d20 low dword) - piVar10[0x25] (last-online timestamp); clamped to >= 0; 0 while online
- ƒ isCanBanGuilder computed via memberMgr vtbl+0x208

### CMHUI_HunterGroup::BuildGuildTitleArrayVO `@0x108ae990` — guild-ui
*Builds the guildTitleArray VO describing each guild title/rank (GUILDTITLEVO_CLASS_NAME, with per-title depot sub-object GUILDTITLEVODepots_CLASS_NAME) and pushes it to Flash via UpdataTitleArray.* (server: client-only display (server owns the authoritative title/rights table -> TlvGuildTitleData: title/name/rights/depotRights/depotOpCount), conf medium)
- ƒ per title row (iVar2): m_Title = *(iVar2+4); m_Name via FUN_108adbe0/108b9da0; m_Rights (FUN_104d12b0); m_cfg = FUN_114f7690() (3-slot int obj); m_DepotFetchCount = *(iVar2+0x40)
- ƒ iterates title list piStack_11c..piStack_118 (stride 4 = ptr array)
- $ m_DepotFetchCount (title+0x40) = per-title guild-depot withdrawal allowance

### CMHUI_HunterGroup::BuildSearchGroupListVO `@0x108b4790` — guild-ui
*_getSearchGroupList / OnSearchResult: builds the paged guild-search results VO (SEARCHGROUP_CLASS_NAME array) and pushes it to Flash via UpdataSEARCHGROUP.* (server: client-only display (server owns the guild directory / search index), conf medium)
- ƒ GroupListMaxPageNum = *(searchMgr(pcStack_130)+0x54); GroupListCurrentPage = *(...+0x50)
- ƒ per result entry ppiVar1: guildId = ppiVar1[8]; name from ppiVar1[6]/[7]; level = ppiVar1[0xf]; leader name from ppiVar1[0xe]/[0xd]; prestige = ppiVar1[0x10]; (&DAT_11dbdc0c current members?) = ppiVar1[0x17]; Maxnum = ppiVar1[0x17]; AVGLevel = ppiVar1[0x18]; REQLevel = ppiVar1[0x19]
- ƒ iterates *ppppiVar5 .. ppppiVar5[1] (vector of entry ptrs)
- $ Maxnum = guild member capacity; REQLevel = required hunter level to apply; AVGLevel = average member level

### CMHUI_HunterGroup::InitModel `@0x108b0970` — guild-ui
*Top-level HunterGroup (guild) UI model init: binds the full guild command surface from Flash to native handlers. Enumerates every player-facing guild operation.* (server: client-only (dispatch table); each bound handler issues an authoritative server request, conf high)
- ƒ command->handler binds: InitModel->FUN_108ae290, CheckGroupName->FUN_108b5bb0, RenameGroup->FUN_108b5e60, GetGuildName->FUN_108b5d50, RefreshGuildDetail->LAB_108b5fc0, UpdataState->FUN_108b5550, UpdataSelf->FUN_108b52e0, UpdataTitleRights->FUN_108b5090, SubmitCreateHunterGroup->FUN_108b6430, CreateCondition->FUN_108b5770, InviteJoinHunterGroup->FUN_108b6010, HandlerRequestJoin->FUN_108b6310, AssignmentGroupLeaderTo->FUN_108b61b0, RemoveHunterGroupMember->FUN_108b6260, EditMemberRights->FUN_108b4e10, EditMemberUpDownRights->FUN_108b4f90, TitleSetting->FUN_108b0070, UpGuildLevel->LAB_108b05f0, EditIcon->FUN_108b0640, TakeWage->LAB_108b0780, EditBaseName->FUN_108b06b0, ResetRight->FUN_108b5020, DisBandGuild->LAB_108b4dc0, BanGuilder->FUN_108b6970

### CMHUI_HunterGroup::InitSubModel `@0x108ae290` — guild-ui
*Second-stage init for the HunterGroup (guild) UI model: binds Flash->native callbacks and native->Flash list getters, and seeds config-driven values. Establishes the guild member/title/apply data flow.* (server: validation/client (ImpeachMoney is a config value the server also enforces; UI wiring only), conf high)
- ƒ ImpeachMoney = *(int*)(FUN_11720120() + 0xac)  -> config cost to launch a leader-impeachment vote (guild global config record, offset 0xac)
- ƒ binds callbacks: AddGuilderRight->FUN_108aeef0, ReqJoinGroup->FUN_108afe10, QuitHunterGroup->FUN_108afd90, NoteSetting->FUN_108afbf0, CanImpeachLeader->FUN_108b67c0, HasImpeachMoney->FUN_108b6890, ImpeachLeader->LAB_108b6930, OnGetMembers->FUN_108b38a0, RemoveUselessFormat->FUN_108b6a00(AS2C_GetRecordData), AS2C_RequestRecordData->FUN_108b69a0
- ƒ registers list getters: _getSearchGroupList->FUN_108b07d0, _getReqJoinGroupList->FUN_108aefc0, _getGroupMemberList->FUN_108aee10, _getGuildTitleList->FUN_108ae900
- $ ImpeachMoney = guild-config[0xac] (currency to impeach the guild leader)

### CMHUI_HunterGroup::OnTitleSettingSubmit `@0x108b0070` — guild-ui
*'TitleSetting' handler: reads the guildTitleArray back from Flash (per-title m_Name, m_Rights bitmask, m_DepotFetchCount), assembles a title-list request and sends it to the server as either a create-titles or edit-titles request.* (server: authoritative (server persists guild title definitions, rights masks and depot withdrawal counts; client only marshals the request), conf medium)
- ƒ per-title parse: m_Name (string), m_Rights (rights bitmask via FUN_104d12b0), m_DepotFetchCount (FUN_104d4800)
- ƒ iterates count = obj vtbl+0x28 (GetCount)
- ƒ dispatch: if in_stack_00000010 flag/guildId == 0 -> FUN_11478e40 (create titles) else FUN_11478af0 (edit titles); both pass playerHuntRank (guild obj vtbl+0xb4)

### GuildTipsInfo::GetFieldDescriptor `@0x11983470` — guild-ui
*Lazy-init static schema/field descriptor for the 'GuildTips' data field; returns &descriptor, writes 1 to *param_2.* (server: client-only UI schema plumbing; field id 0x14c, conf medium)
- ƒ descriptor id constant _DAT_123a1720 = 0x14c (332); flag slot _DAT_123a1728 = 0


## faction  (6)

### CFactionInfo::GetRecordById `@0x115d00c0` — faction
*Config-table accessor (2D) for CFactionInfo records.* (server: client-only (faction config), conf high)
- ƒ standard 2D chunked lookup by id

### FactionNode::InitSchema `@0x10e90480` — faction
*Initializes an entity/flow node schema with input playerNetID and output 'faction'.* (server: network/flownode schema, conf high)
- ƒ input playerNetID; output faction (type 1); param_1[2]=(param_1[2]&0xfffff01f)\|0x10

### FactionTriggerNode::InitSchema `@0x10e5cc70` — faction
*Initializes a flow-graph/entity node schema with inputs enable/disable/triggerOnce and output OnEvent carrying playerNetID and playerFactionID.* (server: network/flownode schema (faction event fired to trigger); server drives the event, conf high)
- ƒ outputs: OnEvent, playerNetID, playerFactionID; param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10

### NpcOrgModel::BuildNpcOrgListVO `@0x107f4680` — faction / NPC organization reputation
*Builds the NPC-organization (faction) list VO. Iterates the player's NPC-org records (from ctx+0x2ac0 group container) and for each emits OrgID, OrgName, current org friend/reputation value, the max for the current stage, the stage index, and the next-level unlock description string. Also caches the first org's id into a global (current-selected org).* (server: client-only (VO builder). Faction reputation accrual and stage progression are server-authoritative; FUN_1172eac0 (stage->max) and FUN_1172eb20 (stage->unlock text) read shared config, so the server must enforce the same per-stage caps., conf medium)
- ƒ org record iterated; OrgID = orgRec[3][5]; on first record (iStack_98==0) global DAT_123bb9a4 = orgRec[3][5] (current org id)
- ƒ NpcAtdInGroupsStage = orgRec[2]  (current reputation stage/level)
- ƒ OrgFriendValue = orgRec[1]  (current reputation points)
- ƒ OrgFriendValueMax = FUN_1172eac0(orgRec[2])  (max reputation for current stage)
- ƒ NextLevelUnLockContent = FUN_1172eb20(stage+1) string  (unlock description for next stage)
- $ OrgFriendValue / OrgFriendValueMax = faction reputation points and the per-stage cap (FUN_1172eac0 maps stage -> cap)

### TdrFmtField_FactionAgree `@0x10414e50` — faction
*Field-format variant: [chAgree] u8@0, [wFaction] u16@1.* (server: client-only formatter, conf high)
- ƒ off 0x00 u8 chAgree
- ƒ off 0x01 u16 wFaction

### TdrPack_FactionAgree `@0x10414da0` — faction
*Packs a faction agree/vote: [chAgree] u8@0, [wFaction] u16@1. Buf NULL -> -0x13.* (server: client request packer (faction agreement); server owns faction state, conf high)
- ƒ off 0x00 u8 chAgree (0/1 vote)
- ƒ off 0x01 u16 wFaction (faction id)


## friends  (5)

### FriendListVO::Build `@1096eaa0` — friends/social
*Builds the friends list VO ('FRIEND_CLASS_NAME' entries in 'playerList'). Copies the friend record vector from friend component (localPlayer+0x2d5c ->vtbl_0x10) via memcpy, then per friend record (skip if record+0x84==0) emits net id, intimacy, group, online, mood, line, guild, team, star.* (server: client-only (VO over server-owned friend graph), conf medium)
- ƒ friend record offsets: netId=+0x28, name=+0x24, statusField=+0x2c, HRlevelSrc=+0x34, intimate=+0x48, online(byte)=+0x38, groupPtr=+0x84 (groupId = *(group+4)), mood=+0x68, lineID=+0x3c, teamID=+0x88, hunterStar=+0xa4
- ƒ HRlevel = (record+0x34 != 0) ? FUN_1025b060() : 0

### NearbyPlayerListVO::Build `@1096e6d0` — friends/social
*Builds a player-list VO ('PLAYER_CLASS_NAME' entries in 'playerList') from a social list at localPlayer(+0x2d5c). Iterates via list iterator (FUN_113a58c0=atEnd, FUN_113a5930=deref, FUN_113a58d0=advance). Per player: skips if player->vtbl_0xa8()!=0; emits nNetID=player[1], strName (vtbl_0xb8), bFriend (self->vtbl_0x70 friend-check).* (server: client-only (VO over synced social/nearby list), conf medium)
- ƒ social list component offset = localPlayer+0x2d5c
- ƒ bFriend = self->vtbl_0x70(playerName)

### TdrFmtField_FriendlyValue `@0x1038dec0` — friends
*Field-format variant: [ullDBID] u64@0, [dwFriendly] u32@8.* (server: client-only debug formatter, conf high)
- ƒ off 0x00 u64 ullDBID
- ƒ off 0x08 u32 dwFriendly

### TdrPack_FrienderList `@0x10388330` — friends
*Packs a friend/friender byte list: [iFriendSize] i32@0, checks <0 -> -6 and >0x200 -> -7, then emits [szFriender] as an array of single bytes (each byte at off 4+idx) via DAT_11d9f710 fmt. U8Z terminated.* (server: validation: server enforces friend-list max 512, conf high)
- ƒ off 0x00 i32 iFriendSize
- ƒ CAP: iFriendSize < 0 -> -6, iFriendSize > 0x200 (512) -> -7
- ƒ szFriender[i] u8 at byte off 4+i
- $ friend list cap: max 512 (0x200) entries

### TdrPack_FriendlyValue `@0x1038de20` — friends
*Packs [ullDBID] u64@0, [dwFriendly] u32@8 (friendliness/intimacy value). Buf NULL -> -0x13.* (server: authoritative: dwFriendly (friend-point value) is server-owned social-graph state, conf high)
- ƒ off 0x00 u64 ullDBID
- ƒ off 0x08 u32 dwFriendly


## chat-ui  (4)

### CMHUI_Chat::GetChatAlpha `@0x10896e80` — chat-ui
*Reads the e_ChatAlpha console variable and returns it into the caller's variant out-slot (in_stack_00000018).* (server: client-only, conf medium)
- ƒ out = GetCVar('e_ChatAlpha') vtbl+8

### CMHUI_Chat::PushChatMessageToUI `@0x10895af0` — chat-ui
*Converts a received chat-message struct (param_1) into a CHATMESS_CLASS_NAME VO, appends it to 'chatArray' on the cached chat movie, and (when e_ChatDialogRendering enabled) parses embedded item-link tokens ('ITEMID_[' ... ']' and '......') to render clickable item links.* (server: client-only (renders server-delivered chat; server owns channel routing/anti-spam), conf high)
- ƒ chat-message struct offsets: [0]=m_nChannelType, [1]=m_nSrcId, m_nSrcDBId, (param_1+4)=m_sSrcName (wstr @+0x10), (param_1+0xc)=m_sMsg (wstr @+0x30), [0x8c]=m_bSrcTeamLeader, byte@(param_1+0x231)=m_bSrcSelf, [0x8d]=m_nColor, [0x8f]=m_nLineID, [0x90]=m_nVip, [0x91]=m_nQQMask, [0x92]=m_nWorldSvrID
- ƒ m_nWorldSvrID normalized: if param_1[0x92] == *(guild/world obj+0x2d78) then reported as 0 (own-server -> 0)
- ƒ append gating: retrieved-array length uVar4 checked against 0x12d (301). Appends unless (uVar4 < 0x12d) is false for channel types 1 or 5 (system/guild?) -> i.e. cap ~301 lines
- ƒ channel constants used: *param_1==1 and *param_1==5 treated specially (whisper/system link handling); item-link token 'ITEMID_[' parsed, numeric id via wcstol(...,10)

### CMHUI_Chat::RegisterGetChatMessCallback `@0x10895a20` — chat-ui
*Registers the Flash-facing '_getChatMess' getter callback (FUN_108964e0) and caches the calling UI movie handle (DAT_123bd0c0/c4/c8) when param count == 1.* (server: client-only, conf medium)

### CMHUI_Chat::SetChatAlpha `@0x10896ed0` — chat-ui
*Writes the e_ChatAlpha console variable from the first argument variant (when param count == 1).* (server: client-only, conf medium)
- ƒ SetCVar('e_ChatAlpha', arg) vtbl+0x14


## combat  (3)

### ProjectileExplosionParams::Serialize `@0x10c308c0` — combat
*Serializes projectile/explosion parameters (shooterId, weaponId, damage, radii, pressure, shake, flashbang, impact, friendlyfire). Combat, not guild.* (server: client-only (effect params); damage is server-authoritative elsewhere, conf medium)
- ƒ struct offsets: +0=shooterId, +4=weaponId, +8=projectileId, +0x10=damage, +0x2c=minRadius, +0x30=radius, +0x34=soundRadius, +0x40=angle, +0x44=pressure, +0x48=hole_size, +0x84=friendlyfire, +0x88/0x8c shakeMin/MaxR, +0x98=blindAmount, +0x60=impact flag
- ƒ flashbang active when *(float*)(param+0x98) != DAT_11de9890 (0.0f)

### Weapon::CheckFriendlyFireRay `@0x110fa850` — combat
*Periodic ray-cast from a mounted/aimed weapon to detect a friendly target ahead and toggle a no-friendly-fire block flag. Combat, not guild.* (server: client-only prediction (friendly-fire UI/aim block), conf low)
- ƒ cooldown timer @param_1[0x138]: decremented by dt; when <=0 (DAT_11de9890=0.0f) reset to 0x3e19999a (0.15f) and re-cast
- ƒ aim vector scaled by DAT_11ceb528; ray type 0x11f/0x40f
- ƒ checks entity 'Properties'/'bNoFriendlyFire' and team relationship; sets block via vtable+0x378(1)

### Weapon::IsFriendlyFireBlocked `@0x11106330` — combat
*Predicate: returns whether a target should block friendly-fire, based on entity 'bNoFriendlyFire' property and team/faction relationship of shooter vs target.* (server: client-only/validation helper, conf low)
- ƒ reads Properties->bNoFriendlyFire; if unset, queries team manager relation via (+4)->0x80->0x30->0xf4
- ƒ returns true when same-team/no-FF, false otherwise


## guild-resource  (3)

### CGuildRandCommodityInfo::GetByIndex `@0x11965830` — guild-resource
*Return CGuildRandCommodityInfo (guild random-commodity / trade-goods definition) record at linear index.* (server: client-only accessor; random-commodity pool for guild commerce (server rolls authoritatively), conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0

### CGuildResourceInstituteInfo::GetByIndex `@0x119101d0` — guild-resource
*Return CGuildResourceInstituteInfo (guild resource-institute / research building definition) record at linear index.* (server: client-only accessor; guild resource/institute config governs resource accrual & upgrades (server-authoritative), conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0

### CGuildTradeInstituteInfo::GetByIndex `@0x11910230` — guild-resource
*Return CGuildTradeInstituteInfo (guild trade-institute / commerce building definition) record at linear index.* (server: client-only accessor; guild trade/commerce config (server-authoritative), conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0


## guild-war  (3)

### GuildWarConfig::GetField_357c `@0x119d09b0` — guild-war
*Return a single 'GuildWar' scalar config value (DAT_123a357c) via *param_1; lazy-registers the L"GuildWar" name on first call.* (server: client-only accessor to a GuildWar config scalar (value unknown; data-driven), conf low)
- ƒ *param_1 = DAT_123a357c

### GuildWarConfig::GetField_35a8 `@0x119d0f80` — guild-war
*Return GuildWar scalar config value DAT_123a35a8 via *param_1.* (server: client-only accessor to a GuildWar config scalar, conf low)
- ƒ *param_1 = DAT_123a35a8

### GuildWarConfig::GetField_35f4 `@0x119d1b50` — guild-war
*Return GuildWar scalar config value DAT_123a35f4 via *param_1.* (server: client-only accessor to a GuildWar config scalar, conf low)
- ƒ *param_1 = DAT_123a35f4


## engine  (2)

### DebugLog::ApplyChannelVerbosity `@100f1630` — engine/logging
*Per-subsystem log-verbosity applier. For each named DebugLog channel reads GetPrivateProfileIntA('DebugLog', <name>, default) and writes the value (if <9) into that channel object's +0x44 field. param_1!=0 skips the optional/verbose channels. Guild channel object at global DAT_123ba6fc.* (server: client-only (stock logging plumbing), conf medium)
- ƒ value clamped: written to channelObj+0x44 only if value<9
- ƒ channel->global-ptr map: System=DAT_123ba714, BatStatistics=DAT_123ba710, BattleProcessCtrl=DAT_123ba70c, CryEngine=DAT_123ba704, Damage=DAT_123ba700, Guild=DAT_123ba6fc, MovementDebug=DAT_123ba6f4, Movement=DAT_123ba6f0, PositionBlock=DAT_123ba6ec, PositionCheck=DAT_123ba6e8, Security=DAT_123ba6e4, ServerFG=DAT_123ba6e0, Verify=DAT_123ba6d4, MHScriptSystem=DAT_123ba6d0, Firework=DAT_123ba6cc, StaticData=DAT_123ba6c8, PlayerState=DAT_123ba6c0; Summary=DAT_123ba6bc

### DebugLog::InitFromCfg `@100f0660` — engine/logging
*CryEngine-style log initialization. Reads DebugLog section of system.cfg/user.cfg via GetPrivateProfileStringA/IntA: LogPath, DebugLog filename (builds '-[%H.%M]-All.log' timestamped name via strftime), Summary verbosity, EnableSvrProfiler, DebugLogEnable, and per-subsystem verbosity for channels System/BatStatistics/BattleProcessCtrl/CryEngine/Damage/Guild/MovementDebug/Movement/PositionBlock/PositionCheck/Security/ServerFG/Verify/MHScriptSystem/Firework/StaticData/PlayerState. Sets each channel object's +0x44 verbosity field (clamped <9) and profiler flag at +0xcc.* (server: client-only (stock CryEngine logging plumbing; 'Guild' is one of the log channels), conf medium)
- ƒ Summary verbosity default 6; written to logCtx+0x44 only if value<9
- ƒ each subsystem channel struct: +0x44 = verbosity level (must be <9); +0xcc = debug-log-enable flag (set 1 when EnableSvrProfiler==0 && DebugLogEnable!=0, else 0)
- ƒ logCtx+0x4c=2, +0x60=param_2 (output sink ptr), +0x64=in_stack_00000034, +0x44=Summary


## guild-ranking  (2)

### TdrFmtField_NameGuildIntegral `@0x103e4a50` — guild-ranking
*Formats a ranking/contribution row: [szName] string@0 (0x20), [szGuild] string@0x20 (0x20), [iTime] i32@0x40, [iIntegral] i32@0x44 (points/integral score).* (server: authoritative: iIntegral (contribution points) server-owned, conf high)
- ƒ off 0x00 char[0x20] szName
- ƒ off 0x20 char[0x20] szGuild
- ƒ off 0x40 i32 iTime
- ƒ off 0x44 i32 iIntegral (contribution/score points)

### TdrFmt_GuildRankInfo `@0x103e2c60` — guild-ranking
*Formats a guild ranking/leaderboard record. Fields: [ullId] u64@0, [szName] string@8, [iScore] i32@0x28, [iRank] i32@0x2c, [iCapacity] i32@0x30 (member cap), [iClanersCount] i32@0x34 (current members), [iOnlineClanersCount] i32@0x38, [iClanersAvgLevel] i32@0x3c, [llScoreUpdate] i64@0x40, [iPVEScore] i32@0x48, [iINDScore] i32@0x4c, [iINDPV] i32@0x50.* (server: authoritative: guild score/rank/capacity/member counts server-computed; PVE and IND(individual?) score components, conf high)
- ƒ off 0x00 u64 ullId (guild id)
- ƒ off 0x08 string szName (words 2..9, 0x20 slot)
- ƒ off 0x28 i32 iScore (total guild score)
- ƒ off 0x2c i32 iRank
- ƒ off 0x30 i32 iCapacity (max member slots)
- ƒ off 0x34 i32 iClanersCount (current member count)
- ƒ off 0x38 i32 iOnlineClanersCount
- ƒ off 0x3c i32 iClanersAvgLevel
- ƒ off 0x40 i64 llScoreUpdate (score timestamp)
- ƒ off 0x48 i32 iPVEScore
- ƒ off 0x4c i32 iINDScore
- ƒ off 0x50 i32 iINDPV
- $ iCapacity = guild member cap (server-configured max slots)


## ui-registration  (2)

### CPlayerTaskView::RegisterScriptMethods `@0x107eca30` — ui-registration
*Large stock UI-model registration for the Player Task/Quest view. Binds getters (_getPlayerTasksList, _getNpcTaskInfo, _getPlayerTasksChapter, _getTaskTimeLeftFunc, GetNpcOrgInfo) and handlers (OnAcceptTask, OnGiveupTask, OnPlayerShareTask, OnCompleteNpcTaskDlg, NpcTaskAwardClick, QuestTrace*, etc.) via FUN_100b62c0/FUN_107ff5b0/FUN_104d0ee0.* (server: client-only UI plumbing; method names catalog quest/task client actions, conf medium)

### CSoulBeastView::RegisterScriptMethods `@0x10521420` — ui-registration
*Large stock UI-model registration for the Soul Beast (pet/companion) view. Binds ~40 Flash/script callbacks (InitModel, GetSoulStoneData, StageUp, UnlockStage, LearnAttr, FeedSoulBeast, GetSoulBeastData/Detail/Face/Food, SendSoulBeastSocialAction, IsAchieveMaxLevel, etc.) via FUN_100b62c0/FUN_10527090. Sets gfx_draw_only/gfx_draw cvar handles at obj+0x2c/+0x30.* (server: client-only UI plumbing (CryEngine ScaleForm binding); no server logic, conf medium)
- ƒ obj+0x2c = cvar "gfx_draw_only"
- ƒ obj+0x30 = cvar "gfx_draw"


## settings-ui  (2)

### CMHUI_Settings::ApplyClientSettingsVO `@0x10836b50` — settings-ui
*Inverse of BuildClientSettingsVO: reads a settings struct (param_3) at fixed 0x10-stride offsets and writes each value into the matching console CVar (GetCVar vtbl+0x54, Set vtbl+0x14, then a notify call vtbl+0x21c). Handles the social 'refuse/remind' flags among many display flags.* (server: client-only, conf medium)
- ƒ struct field map (param_3): +0x08 g_refuseTeamInvite, +0x18 g_FriendRemind, +0x28 g_refuseTradeRequest, +0x38 g_refuseTeamRequest, +0x48 g_GuilderRemind, +0x58 cl_ShowHeroNamePadMode, +0x68 cl_ShowPlayerNamePadMode, +0x78 e_ChatDialogRendering, +0x88 cl_ShowHeroPetName(inverted: set = byte==0), +0x98 g_refuseGuildRequest, +0xa8 g_refuseClanRequest, +0xb8 cl_ShowPlayerPetName(byte==0), +0xc8 cl_ShowBossDeadGlow(byte==0), +0xd8 g_NPCName_hide(byte==0), +0xe8 cl_TaskTraceMode(int), +0xf8 g_DInputKeyboard, +0x108 g_UseEmbeddedIME, +0x118 g_hideEmoji, +0x128 r_HideC2PlaeyerEffect, +0x138 r_HideSelfPlaeyerEffect, +0x148 cl_iHideBreakEffect
- ƒ if cl_TaskTraceMode changed (bVar24) and quest-tracker active -> notifies handler via vtbl+4 with cmd 0x231

### CMHUI_Settings::BuildClientSettingsVO `@0x10835cb0` — settings-ui
*Reads a large set of console CVars (camera/mouse/gamepad/name-pad/social-remind flags) via the console system (DAT_1202e818+0x2c -> GetCVar vtbl+0x54, value via vtbl+8/int or +0xc/float) and packs them into a Flash/UI value-object using FUN_104d1550/104d15e0/104d14d0/104d1670. Iterates gamepad weapon bindings g_Gamepad_WeaponType_%d -> weapon_type_%d for indices 1..12.* (server: client-only (local client display/config snapshot; includes social-related CVars g_refuseTeamInvite/g_FriendRemind/g_GuilderRemind/g_OtherGuildName/g_selfGuildName/g_refuseGuildRequest/g_refuseClanRequest but only mirrors local CVar state), conf medium)
- ƒ gamepad weapon-type loop: iVar8 from 1 while iVar8 < 0xd (1..12 inclusive)
- ƒ mouse sensitivities: mouse=i_mouse_accel*DAT_11de9a30, mouseV=i_mouse_accel_v*DAT_11de9a30, mouseJ=cl_MHFpsRotSpeed*DAT_11de9a30 (DAT_11de9a30 = float scale constant)
- ƒ isWindowsMode = (r_Fullscreen==0); hidetitle = (cl_ShowLocalPlayerTitle ptr==0); hideHRLevel = (r_ShowHrLevel ptr==0)
- ƒ helmet/fashion/taojian read from player-visual object at (player+0x25ddc): vtbl+4/+0xc/+0x14


## guild-instance  (2)

### CLevelEntrustUI::BuildGuildInstanceMemberVO `@0x108f6f70` — guild-instance
*Handler for UpdateGuildMemberData. Builds the guildmemberInfoArr VO array of GUILDINSTANCE_MEMBERVO_CLASS_CLASSNAME entries. For each guild member it emits a roleId and two flags bIsInTeam and bIsInCamp: bIsInTeam set by matching the member uid against the local team roster (vtbl+0xa4 count / +0xb8 iterator), bIsInCamp compares the member's camp id (vtbl+0x48) against CMHLevelSystem::GetCurrentContext()+0x44.* (server: client-only VO builder; team/camp membership itself is server-authoritative (this only visualizes it)., conf medium)
- ƒ member array iterate: base=puStack_a4[0x13], end=puStack_a4[0x14], stride 0x30 (48 bytes/member); member count = (end-base)/0x30
- ƒ guild/instance mgr obtained via player[0xaaf] (checked !=0) then vtbl+0x3a4 -> team object
- ƒ bIsInCamp = ( member.camp(vtbl+0x48) == CMHLevelSystem::GetCurrentContext()[0x44] )
- ƒ roleId source via FUN_1149e560 (member uid accessor)

### CLevelEntrustUI::RegisterScriptCallbacks `@0x108f32b0` — guild-instance/entrust
*Registers the client script/UI callback table for the level-entrust & guild-instance UI. Binds names to handler functions: GetEntrustListData->CLevelEntrustUI::BuildEntrustListVO, GetLevelUnlockInfo->FUN_108f63e0, GetGroupUnlockInfo->FUN_108f6610, UnlockInstance->FUN_108f6840, UnlockSubGroup->FUN_108f68b0, UpdateGuildMemberData->FUN_108f6f70, GetLevelInstanceGoData->FUN_108f77f0, GetHunterBoxData->FUN_108f69a0, GetAvalidActionPoint->FUN_108f6920, GetLocalPlayerIsCoach->FUN_108f8110, plus request handlers (SelHuntPacket, EntrustReady, RequestEntrustList, ReqOpenEntrustGoView, ReqOpenWeaponTrialGoView, ReqLevelTrackData, ReqOpenEntrustInfoByTrack, FetechGuildInstanceMemberData, RequestLeagueList) and IsShowCountDown->FUN_108f8250.* (server: client-only registration; the Req*/RequestLeagueList/FetechGuildInstanceMemberData entries are the client hooks that ultimately fire server RPCs., conf high)
- ƒ FUN_100b62c0 = string/name-hash key builder; FUN_108f84a0 = 'command' (Req/action) binder, FUN_108f83e0 = 'data getter' binder; distinguishes read-only getters from server-request commands


## social-task  (2)

### TaskFilterDef_CollectionCountIsFriend::Load `@0x11784ce0` — social-task
*Loads task-filter def variant reading ColletionPoint(+0x20), Count(+0x24, int), IsFriend(+0x28, bool).* (server: client-only (config); server enforces, conf high)
- ƒ ColletionPoint->int@+0x20; Count->int@+0x24; IsFriend->bool@+0x28
- $ ColletionPoint, Count = task requirement values

### TaskFilterDef_CountIsFriend::Load `@0x11784c80` — social-task
*Loads a task-buff/filter def variant reading fields Count and IsFriend from XML into +0x20 (int) and +0x24 (bool).* (server: client-only (shared task-condition config); server enforces the condition, conf high)
- ƒ Count -> int @+0x20; IsFriend -> bool @+0x24 (after TaskBuffFilterDef::Load base)
- $ Count = required count for a social/friend-related task condition


## guild-quest  (2)

### CGuildQuestLevelInfo::GetByIndex `@0x1190d950` — guild-quest
*Return CGuildQuestLevelInfo (guild-quest level-curve definition) record at linear index.* (server: client-only accessor; underlying guild-quest level table drives authoritative level gating, conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0

### CGuildQuestPrizeInfo::GetByIndex `@0x1190d9b0` — guild-quest
*Return CGuildQuestPrizeInfo (guild-quest reward definition) record at linear index.* (server: client-only accessor; guild-quest prize table is authoritative reward config, conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0


## social-friend  (2)

### CFriendlyInfo::ReadRow `@0x11a15280` — social-friend
*Config-row reader for a CFriendlyInfo (friendship/friendliness level definition). Reads the level index, level number, lower/upper friendliness point thresholds, and localized name/desc.* (server: authoritative config — friendship point thresholds per friendliness level; server tracks friendship points and computes level from these bands. Client reads for display., conf high)
- ƒ "indexId" -> this+0x10
- ƒ "FriendlyLev" -> this+0x14 (friendliness level number)
- ƒ "DownFriendly" -> this+0x18 (lower point threshold for this level)
- ƒ "TopFriendly" -> this+0x1c (upper point threshold for this level)
- ƒ "name" -> localized string (SetName sink)
- ƒ "desc" -> localized string
- $ Friendliness level bands defined by [DownFriendly, TopFriendly] point ranges per FriendlyLev

### FriendlyInfo::GetFieldDescriptor `@0x11925260` — social-friend
*Lazy-init static schema/field descriptor for the 'FriendlyInfo' (friendship/friendliness) data field. On first call registers the wide name L"FriendlyInfo" and fills a descriptor block; returns &descriptor and writes 1 to *param_2.* (server: client-only reflection/schema plumbing (CryEngine data-field descriptor); field id 0xb3 identifies the FriendlyInfo column, conf medium)
- ƒ descriptor type/id constant _DAT_1239f4a4 = 0xb3 (179)
- ƒ _DAT_1239f4ac = 1 (flag); other slots zeroed; owner=param_1


## league-matchmaking  (1)

### TdrFmtField_LeagueMatchTeam `@0x103a2de0` — league-matchmaking
*Formats a league/guild match sign-up + team struct. Fields: [iMatchID] i32@0, [dwSignUpID] u32@4, [iSignUpTM] i32@8, [ullGuildID] u64@0xc, [szGuildName] string@0x14, [iBestScore] i32@0x34, [iBestScoreTm] i32@0x38, [chAcceptRound] u8@0x3c, [szTeamName] string@0x3d, [dwCount] u32@0x65, then [astMembers] array capped at 4, each member formatted via FUN_103a2730.* (server: authoritative: league match scoring (iBestScore/iBestScoreTm) and team roster (max 4); server owns match state, conf high)
- ƒ off 0x00 i32 iMatchID
- ƒ off 0x04 u32 dwSignUpID
- ƒ off 0x08 i32 iSignUpTM (signup timestamp)
- ƒ off 0x0c u64 ullGuildID
- ƒ off 0x14 string szGuildName (words 5..12)
- ƒ off 0x34 i32 iBestScore
- ƒ off 0x38 i32 iBestScoreTm
- ƒ off 0x3c u8 chAcceptRound
- ƒ off 0x3d string szTeamName
- ƒ off 0x65 u32 dwCount (member count)
- ƒ CAP: dwCount > 4 -> return -7 (max 4 team members)
- ƒ astMembers base at byte off 0x69
- $ team size cap: max 4 members per match team


## guild-funds  (1)

### TdrFmt_GuildSoulCurrency `@0x103ca8e0` — guild-funds
*Formats guild soul currencies + nested guild struct: [ullRedSoul] u64@0, [ullYellowSoul] u64@8, [stGuild] nested via FUN_1033ac40. Red/Yellow Soul are guild resource currencies.* (server: authoritative: guild fund/resource balances server-owned, conf high)
- ƒ off 0x00 u64 ullRedSoul (guild red-soul balance)
- ƒ off 0x08 u64 ullYellowSoul (guild yellow-soul balance)
- ƒ nested guild struct after off 0x10 via FUN_1033ac40
- $ guild resource currencies: RedSoul, YellowSoul (64-bit balances)


## league-config  (1)

### CLeagueInfo::LookupById `@0x104d92b0` — league-config
*Looks up a CLeagueInfo config record by id using a 2D paged table. Resolves the CLeagueInfo manager singleton (CLeagueInfo::GetManager, else CInfoManager::FindByName("CLeagueInfo")). For a valid id: page = (id - base)/stride, slot = (id - base)%stride; returns table[page][slot] or 0.* (server: client-side static config table lookup for league definitions (data-driven; server needs same league config table), conf medium)
- ƒ mgr[0xc] = id base offset (subtracted from param_1)
- ƒ mgr[9] = total count (id-base must be < this)
- ƒ mgr[10] = stride (records per page)
- ƒ mgr[8] = page-pointer table base
- ƒ record = *(mgr[8] + (idx/stride)*4); return *(record + (idx%stride)*4)
- ƒ id==-1 or (id==0 && mgr[0xc]==0) or mgr[10]==0 -> return 0


## social-npc  (1)

### CNpcGiftUI::BuildGiftList `@0x104e4f00` — social-npc
*Builds the NPC friendship-gift list UI data model. Iterates an NPC gift group (CNpcAtdGroupInfo::FindGroupId) and for each gift entry populates a script table with itemIconPathName, ItemID, slotid, IsUnLock, itemName, friendvalue under _giftList/NPC_GIFT_CLASS_NAME. Empty slots get default/zeroed fields.* (server: client-only UI builder; NPC gift->friendvalue mapping comes from static config, conf medium)
- ƒ per-entry fields: itemIconPathName, ItemID, slotid, IsUnLock, itemName, friendvalue
- ƒ friendvalue derived from FUN_113f9300(5,...) + FUN_113f9300(0,...) sum for unlocked entries


## quest-rewards  (1)

### CPlayerTaskView::BuildTaskDetailModel `@0x107eef70` — quest-rewards
*Builds the player-task detail UI data model including a client-side REWARD PREVIEW. Reads the task's reward groups and computes displayed amounts scaled by CPlayer::GetHuntRankOrCount. Populates task_awardList / task_selectawardList (icon/slotid/ItemID/count) and scalar fields taskName, taskLevel, queststatus, cantGiveup, bTeam, bRepeat, plus reward scalars: farm_actuarialpoint, gold_bind, hunter_exp, hunter_fund, hunter_contribution, huntingCredit, npcfriendvalue. Also fills task_targets (nTargetID1..5, strTarget1..3, nOpType, nCurCount, nMaxCount).* (server: client-only display/preview; ACTUAL reward grant is server-authoritative. Values are rank-scaled predictions from static task config x hunt-rank multiplier, conf medium)
- ƒ reward preview = (float)(int)reward[2] * (float)GetHuntRankOrCount(...) cast to int  (rank-scaled quantity)
- ƒ reward group selector FUN_10804cd0/40/80/900/9c0/a00 keyed by type codes: 0x18, 0x19, 0x21, 0x24
- ƒ type 0x18 -> gold_bind (reward[3]*cnt) and DAT_11dc0944 (reward[2]*cnt)
- ƒ type 0x21 -> hunter_exp = reward[2], hunter_fund = reward[3], hunter_contribution = *(rec+4)
- ƒ farm_actuarialpoint = reward[2] * huntRankValue
- ƒ queststatus = *(questState+0x14); bTeam = (teamMemberCount>=2); bRepeat = *(task+0x80)
- ƒ npcfriendvalue = *(npcInfo+8)
- $ reward channels: gold_bind (bound gold), hunter_exp, hunter_fund, hunter_contribution, huntingCredit, farm_actuarialpoint, npcfriendvalue
- $ reward type codes: 0x18 gold, 0x19 farm actuarial, 0x21 exp/fund/contribution, 0x24 hunting credit


## quest  (1)

### TaskModel::BuildTaskDetailVO `@0x107f2330` — quest/task detail + reward preview
*Command handler (dispatch mode param_6==2) that builds the full quest/task detail VO for the selected task: award item list (task_awardList), selectable-award list (task_selectawardList), quest meta (taskName/taskLevel/taskid/tasktype/cantGiveup/queststatus/bTeam/bRepeat/bTrace), currency & progression reward previews, and the target-tracking sub-VO (TASK_TARGET_VO_NAME with up to 5 targets). Reward amounts are computed client-side by scaling quest-config base values by the player's hunt-rank/count factor.* (server: validation/client-preview. These formulas are the client's reward PREVIEW; the server must own actual grant of gold/bound-gold/exp/contribution/fund and enforce the same base*huntRankFactor scaling. cantGiveup/bTeam/bRepeat are server-enforced quest rules the client mirrors., conf medium)
- ƒ selected award index resolved from param_5: if (*(param_5+4)&0x8f) in {3,4} -> awardId=*(param_5+8) else 0xdeadbeaf (sentinel = no selection)
- ƒ reward scaling pattern (repeated): value = (int)( (float)*(cfgRec + off) * (float)factor ) where factor = result of CPlayer::GetHuntRankOrCount(...) passed through FUN_1185f2e0()
- ƒ field DAT_11dbfbc8 (exp/points-type reward) = (float)*(rec+8) * (float)huntFactor ; only when unaff_EBX[0x13] != 0
- ƒ field DAT_11dc0944 (gold reward) = (float)*(rec+8) * (float)factor ; gold_bind = (float)*(rec+0xc) * (float)factor2  (two separate hunt-rank counts feed bound vs unbound gold)
- ƒ farm_actuarialpoint = (float)*(rec+8) * (float)factor
- ƒ hunter_contribution = cfg16c[1]; hunter_fund = cfg16c[3]; hunter_exp = cfg16c[2]  (guild-task rewards, read directly from config record FUN_108049c0)
- ƒ huntingCredit = *(FUN_10804d10(rec+0x13)+4); npcfriendvalue = *(FUN_10804a00()+8)
- ƒ queststatus/limit: FUN_10804c90() row, status flag = (rowCount >= 2) ? 1 : 0
- ƒ task target VO stride = 0x3b dwords per target; fields: nTargetID1..5 = t[0..4], nOpType=t[5], nCurCount=t[6], nMaxCount=t[7], strTarget1..5 = t[0xd],t[0x13],t[0x19],t[0x1f],t[0x25], nQuestType=t[0x38], DAT_11dca838=t[0x39]; special-case when t[0x3a]==3 && t[0x34]!=4
- ƒ taskid = task[1]; tasktype = task[4]; cantGiveup = *(byte)(task+7); bShare = *(byte)((task)+0x81); autotrak = *(byte)(cfg+0x11); shoqwCurQuestLevel = *(byte)(cfg+0x45)
- $ gold reward (DAT_11dc0944) and gold_bind (bound gold) = base * huntRankFactor
- $ hunter_contribution / hunter_fund / hunter_exp = guild-task contribution, guild fund and guild exp rewards, read from task config offsets [1],[3],[2]
- $ huntingCredit, npcfriendvalue, farm_actuarialpoint = additional currency/point rewards scaled by hunt-rank factor


## mail inbox list  (1)

### MailModel::BuildInboxDataVO `@0x10820820` — mail inbox list
*'_getMailInBoxData' handler. Reads the player's mailbox object (ctx+0x2ac4) and builds a MailDataArr of MAIL_DATA_VO_CLASSNAME rows plus allMailNum, for the inbox list UI.* (server: client-only VO builder; the mailbox contents, counts and expiry timers are server-authoritative (delivered via network into ctx+0x2ac4)., conf high)
- ƒ mailbox object = *(playerCtx + 0x2ac4); skipped if null
- ƒ allMailNum = mailboxObj[0x20]  (total mail count)
- ƒ per-mail struct m: _strID = _i64toa(*(int64*)m, base10) (64-bit mail id as string); _nType = *(byte)(m+9); _nSource = *(byte)(m+8); _nRemainTime = m[4] (64-bit via FUN_104d1440); _bHasAccessories = (m[5] != 0xffffffff); _nItemID = m[0x21] (64-bit); _nItemCnt = *(byte)(m+0x88 i.e. m+0x22 dword)
- ƒ _strItemIconPathName = *(FUN_10254130(m[0x21]) + 0xb4)  (item icon from item-def by id) if item exists
- $ _nItemID / _nItemCnt = single attachment item id + count summarised per mail row
- $ _nRemainTime = mail expiry countdown (server-set)


## mail read  (1)

### MailModel::BuildMailReaderVO `@0x10821390` — mail read/detail + attachments
*'_refreshMailDetail' handler. For an opened mail it builds the mailReaderData VO: attachment item list (itemList of MAIL_EXTRACT_ITEM_DATA_CLASSNAME), attached currencies (gold/bound-gold/credit with their extract indices), and sender/title/content strings.* (server: client-only VO builder; attachment contents (item ids/counts, gold/bound-gold/credit amounts, expiry, indices) are server-authoritative. ExtractItem/GroupExtractItem (separate handlers) perform the authoritative claim keyed by these indices., conf high)
- ƒ reader source object = *(playerCtx + 0x2ac4) (mailbox); matched mail m selected by 64-bit id (iRam00000078/iRam0000007c)
- ƒ attachment items iterated over m[0x29]..m[0x2a], stride 0x20 bytes; count = (m[0x2a]-m[0x29]) >> 5
- ƒ per item at (base+i*0x20): _ullItemId/_itemID = *(base+0x14) (64-bit), _count = *(u16)(base+0x10), _index = *(u16)(base+2); _itemIconPathName/_strItemName from item-def FUN_10254130(itemId)+0xb4
- ƒ gold = m[0x23]; goldIndex = m[0x24]; credit = m[0x25]; creditIndex = m[0x26]; boundGold = m[0x27]; boundGoldIndex = m[0x28] (all 64-bit via FUN_104d1440)
- ƒ source = (char)m[2]; strSender = m[0xb]; strTitle = m[0x17]; strContent = m[0x1d]; nMailID via FUN_104d14d0
- $ Mail attachment currencies: gold (m[0x23]), bound gold (m[0x27]), credit (m[0x25]) each with a paired extract-slot index (goldIndex/boundGoldIndex/creditIndex)
- $ Attachment item: _ullItemId (64-bit item id) + _count (u16)


## client settings  (1)

### GameSettings::ApplyDisplayPreset `@0x10834d00` — client settings (not guild logic)
*Applies a batch of gameplay/display cvar values based on a preset selector (param_3+8 == 1 vs otherwise), then rebuilds an npc-language config string. Only tangentially guild-related via the 'g_selfGuildName' cvar (show own guild name overhead).* (server: client-only (local cvar / display preset). No authoritative state. g_selfGuildName just toggles guild-name nameplate display., conf medium)
- ƒ preset A (selector==1): sys_show_damage_number=1, g_selfGuildName=1, cl_ShowLocalPlayerNamePad=1, cl_MHFCCameraPitchControlByMouseZ=1, g_firstAtkRotEnable=1, g_otherAtkRotEnable=0, g_iCommonResetCameraType=1, cl_ShowBossDeadGlow=1, cl_TaskTraceMode=1, pl_autoHolster=1, g_npc_language=2
- ƒ preset B (else): sys_show_damage_number=0, g_selfGuildName=0, cl_ShowLocalPlayerNamePad=0, cl_MHFCCameraPitchControlByMouseZ=1, g_firstAtkRotEnable=0, g_otherAtkRotEnable=1, g_iCommonResetCameraType=1, cl_ShowBossDeadGlow=0, cl_TaskTraceMode=1, pl_autoHolster=0, g_npc_language=1
- ƒ cvars fetched via (*(DAT_1202e818[0xb]))+0x54)(name) then set via vtbl+0x14; tail memcpy/memset builds a 0x191-byte language string buffer


## trade-social  (1)

### CMHUI_Trade::BuildFriendSaleItemVO `@0x10840690` — trade-social
*Builds the value-object for a friend/player-to-player sale (mail-with-goods) UI. Reads a sale config record (ppiVar5 from FUN_117dadb0) plus the item being sold and populates hunter-rank/friend gating, price, bind flag, seller name and the exchange-item list.* (server: validation (client mirrors server-side hunter-rank and friend-value gates for display; server is authoritative on the actual sale/exchange), conf medium)
- ƒ hunterRankValid = (int)requiredHunterRank(ppiVar5[0xe]) <= (int)playerHunterRank(iStack_7c)  [iStack_7c from guild/player obj vtbl+0x46c ->+0x18]
- ƒ friendValid = (int)requiredFriendValue(piStack_74=ppiVar5[0x11]) <= (int)currentFriendValue(piStack_80)
- ƒ hunterRankLimit = ppiVar5[0xe]; saleItemNumber = ppiVar5[0xb]
- ƒ isBindMoney = (*(char*)(ppiVar5+0xd) == 0)
- ƒ moneyCount = FUN_10841be0(FUN_114b74e0(ppiVar5,1)); allMoneyValue = FUN_10841be0(FUN_114b74e0(ppiVar5,0))
- ƒ saleBindType = CItemBaseInfo::ResolveRewardAmount(local_9c, sale.field[0x14]); saleIsBind = 0
- ƒ specialPoint loop specialPoint%dValue/%dType/%dName for index 1..12 (iVar4<0xd)
- ƒ arrayExchangeItem entries: itemName, itemCount=puVar7[1], itemID=*puVar7 (iterates piVar3[0x21]..piVar3[0x22])
- $ sale price: moneyCount / allMoneyValue (bound vs unbound currency split via FUN_114b74e0 arg 0/1)
- $ saleItemNumber = quantity offered (config offset 0xb)


## player-info-ui  (1)

### CMHUI::BuildPlayerBasicVO `@0x10863ab0` — player-info-ui
*Populates a small UI VO with the local player's basic state: guild-membership flag, level and current map id.* (server: client-only (reads local player object), conf medium)
- ƒ isPlayerJoinGuild = FUN_1139ab70() (bool: player is in a guild)
- ƒ playerLevel = CPlayer::GetHuntRankOrCount()
- ƒ playerMapId = player(DAT_1202e818+0xd0) vtbl+0x6c


## guild-depot  (1)

### CMHUI_Depot::OnUnionGuildItemDrop `@0x108a3ee0` — guild-depot
*Drag-drop / context-action handler for moving items between personal bag and the guild (union) depot. Distinguishes personal slots (slot type < 100) from guild-depot slots (>=100, real index = type-100), runs equip/unequip and bind checks, and raises the appropriate confirm dialogs before issuing the move request.* (server: validation/client (client pre-checks bind/equip state and confirms; server is authoritative on the actual bag<->depot move). Dialog ids 0x1fb7/0x2024 are request opcodes to server confirm flow., conf medium)
- ƒ param_5 must == 4 (arg count)
- ƒ slot classification: iVar3 = *(param_4+8); if iVar3 < 100 -> personal-bag path; else guild-depot path with depot index = *(local_70+8) - 100, page/tab = *(local_70+0x18)
- ƒ equip-all confirm dialog id 0x1fb7 ('UnEquipALL_OK'/'UnEquipALL_No') when moving an equipped set
- ƒ union item transfer confirm dialog id 0x2024 ('UnionItemRespondOkHandler') with bound-count formatted via FUN_1024e9b0(name,10)
- ƒ bind check FUN_1122fc50 gates whether item may enter depot


## guild-levelup  (1)

### CMHUI_HunterGroup::BuildGuildDetailVO `@0x108b3300` — guild-levelup
*Builds the RefreshGuildDetail VO: current guild stats plus the next-level-up requirement preview (testUpArray / lm_* fields sourced from CGuildLevelUpInfo). This function recovers the previously-unknown CGuildLevelUpInfo row layout.* (server: authoritative (server enforces guild level-up exp/fund/resource/item/member/reputation requirements from CGuildLevelUpInfo; this VO is the client-side preview). CGuildLevelUpInfo row offsets recovered here were 'unknown' in prior schema., conf high)
- ƒ guild object piVar8 = guildMgr(player+0xd0 obj vtbl+0xb4)[0xaaf] -> vtbl+0xc (current guild)
- ƒ guild fields: m_level = piVar8[0x11]; guildId(&DAT_11dbf768) = piVar8[10]; m_Repute = piVar8[0x13]; m_Fund = FUN_114a8610(); guildersCount = vtbl+0x18; m_dwGuilderCountMax = piVar8[0x8a] (member cap); m_nMemberAvgLevel = vtbl+0x20; m_nRankNum = FUN_114a8110(); m_nReqLevel = piVar8[0x2c]; m_nOnlineGuildersCount = vtbl+0x1c; IsLevelFull = FUN_114a96e0(); inHunterGroup = vtbl+8
- ƒ CGuildLevelUpInfo row = CGuildLevelUpInfo::GetValueForLevel(currentLevel). Row struct offsets: +0x10 lm_ID, +0x14 lm_Exp (guild exp required for next level), +0x18 lm_GuildersCount (member-count requirement), +0x1c lm_Repute (reputation requirement), +0x20 lm_Fund (fund cost), +0x24 lm_ResA, +0x28 lm_ResB, +0x2c lm_Item1 (item id required), +0x30 lm_Item1Count (item qty required)
- ƒ lm_preExp = 0 by default; if currentLevel > 1 then lm_preExp = GetValueForLevel(currentLevel-1) field +0x14 (previous-level exp threshold)
- ƒ lm_OwnItem1Count = FUN_113f9300(0,lm_Item1,0) + FUN_113f9300(2,lm_Item1,0) + FUN_113f9300(10,lm_Item1,0)  (owned count of Item1 summed over bag types 0, 2, 10)
- $ guild level-up cost per level (from CGuildLevelUpInfo row): lm_Exp (exp), lm_Fund (guild fund), lm_ResA, lm_ResB (two guild resource pools), lm_Item1 x lm_Item1Count (material item)
- $ level-up gating: lm_GuildersCount (min members), lm_Repute (min reputation)
- $ m_dwGuilderCountMax = current guild member cap (guild+0x88a? actually piVar8[0x8a])


## guild-task-rewards  (1)

### CMHUI_Task::BuildTaskDetailVO `@0x108ca7e0` — guild-task-rewards
*Builds the quest/guild-task detail VO: task name/level/status, team/repeat flags, and the full reward set (money, gold, farm points, hunter exp/fund/contribution, npc friendship), plus the award-item list and target list. Reward magnitudes are scaled by hunter-rank multipliers from CPlayer::GetHuntRankOrCount.* (server: authoritative (server computes and grants the actual task/guild-task rewards; this VO is a client preview using the same rank-multiplier formula reward=base*rankMultiplier). Reward type-ids and per-entry offsets (+4 contribution, +8 primary amount, +0xc fund/bind) are the load-bearing data., conf high)
- ƒ guard: only runs when DAT_123bbaac > 0 (task subsystem active)
- ƒ reward entries fetched by type-id from the task's reward table (param_2+0x4c): id 0x19=silver/money, 0x18=gold, 0x1f=item award list, 0x21=hunter(guild) exp/fund/contribution. Others: FUN_10804980=farm actuarial point, FUN_10804a00=npc friend value
- ƒ money (m_Money &DAT_11dbfbc8) = (int)((float)entry19[+8] * rankMul); rankMul = CPlayer::GetHuntRankOrCount out-param #4 (local_30) keyed by entry19[+4]
- ƒ gold (&DAT_11dc0944) = (int)((float)entry18[+8] * rankMul); gold_bind = (int)((float)entry18[+0xc] * rankMul2); rankMul/rankMul2 = GetHuntRankOrCount out #2/#3 keyed by entry18[+4]
- ƒ farm_actuarialpoint = (int)((float)entry_farm[+8] * rankMul5); rankMul5 = GetHuntRankOrCount out #5
- ƒ hunter_exp = entry21[+8] (guild exp reward); hunter_fund = entry21[+0xc] (guild fund reward); hunter_contribution = entry21[+4] (personal guild-contribution reward)
- ƒ npcfriendvalue = entry_npc[+8]
- ƒ bTeam = 1 if task team-size (FUN_10804c90 -> *(+4) deref) >= 2 else 0; bRepeat = (byte@(param_2+0x80) != 0)
- ƒ queststatus = (accepted ? questObj+0x14 : (canAccept? 10 : 0))
- ƒ task_awardList entries (type 0x1f): itemIconPathName=item+0xb4, slotid=running index, ItemID=item vtbl+0x18, count=entry+8, (&DAT_11dca14c)=item+0x10; empty entry -> icon '', slotid 10, ItemID 0, count 0
- ƒ task_targets (TASK_TARGET_VO_NAME): nTargetID1..5, strTarget1..5, nOpType, nCurCount, nMaxCount, nQuestType (target struct stride 0x3b dwords)
- $ guild-task rewards (rank-scaled): money = base*rankMul, gold = base*rankMul (+ gold_bind bound portion), farm point = base*rankMul, hunter_exp (guild exp), hunter_fund (guild fund), hunter_contribution (personal contribution), npcfriendvalue
- $ reward-entry type ids: 0x18 gold, 0x19 money, 0x1f item-list, 0x21 hunter/guild exp+fund+contribution, plus farm-point and npc-friend entries


## ui  (1)

### CSystemShortcutUI::RegisterCallbacksAndBuildActionBarVO `@0x10924360` — ui/hud-shortcut
*Registers system-shortcut/widget callbacks (GetSystemShortcutData, ProcessSystemWidget, ReqCatTicketData, ReqFetchHuntCredit, GetHuntCreditData, GetKeyString, ReqBuyExpLimit, IsItemHasUnuseEffect) and writes action-bar visibility flags (nActionBarGiftPackVisible, nActionBarBangBangVisible, nActionBarOperationActivityVisible, nActionBarExchangeVisible, nActionBarMailVisible) read from a system-config struct. Also registers two HUD widgets (ids 0x9c8, 0x9c9).* (server: client-only HUD/action-bar setup. ReqCatTicketData/ReqFetchHuntCredit/ReqBuyExpLimit are client triggers for server currency/limit operations., conf medium)
- ƒ action-bar flags read from struct S=FUN_11727ff0(): GiftPack=*(S+0x3c), BangBang=*(S+0x40), OperationActivity=*(S+0x44), Exchange=*(S+0x48), Mail=*(S+0x4c)
- ƒ widget ids registered: 0x9c8 and 0x9c9 (via mgr[0x1c] vtbl+0x1c)


## combat-stats  (1)

### CombatStatsRecord::EmitPlayTimeStats `@0x10a8cb00` — combat-stats
*Computes and emits per-session combat/action statistics to a model record (PlayTime, action/attack success ratios, damage taken, stamina, frequencies). Not guild-specific.* (server: client-only (stats display/report; derived from counters), conf medium)
- ƒ PlayTime = XMM0*DAT_11de98b0 - *(param+0x78); stored @param+0x64
- ƒ timesOfActionSucceed = *(param+4) - *(param+8); timeOfActionFailed = *(param+8)
- ƒ ActionMistake = *(param+8)/(float)*(param+4); ActionAccuracy = DAT_11de9918 - mistake (DAT_11de9918=1.0f)
- ƒ timesOfAttackSucceed = *(param+0x14) - *(param+0x1c)
- ƒ Frequency_X = PlayTime / (float)countX  for Action(+4), Attack(+0x14), Damaged(+0x48), Dead(+0x50), LowHP(+0x60), LowSta(+0x58)


## social-render  (1)

### NamePad::UpdateRelationColorAndStars `@0x10e06bf0` — social-render
*Computes over-head name-plate color and star display based on social relationship: friend / same-team / enemy-team / neutral / hostile, PVP team coloring, and hunter-rank stars. Reads guild/friend membership to pick friend color.* (server: client-only (rendering); friend/guild relationship data is server-provided, conf medium)
- ƒ default color 0xffd2dce0; self/party 0xff9cd0ee; NPC state3 0xff8eca24 else 0xff0000ff (red)
- ƒ team1/team2/neutral/friend/hostile colors from CVars r_Team1Color/r_Team2Color/r_NeutralColor/r_FriendColor/r_HostileColor; toggle r_UseTeamColor
- ƒ hunt-rank gate: requires CPlayer::GetHuntRankOrCount() > 0x27 (39) for local_20 assignment
- ƒ star count: iterate name string 2 chars at a time; count '1' and '2' chars, '2' also sets bitmask bit (uVar13). starCount clamped to 7 (if >6 -> 7). half-length = (len+1)/2
- ƒ r_NamePadDebug forces all flags = 1


## guild-network  (1)

### GetGuildInfo::InitRmiDescriptor `@0x10e4bce0` — guild-network
*Lazily initializes the RMI/network method descriptor for 'GetGuildInfo' with reply fields Success, HallModelName, RecruitingModelName, ResourcingModelName, TradingModelName, TrainingModelName. Returns descriptor into param_1.* (server: validation/network schema — defines GetGuildInfo RPC reply layout (server fills the 5 guild building model names + Success), conf high)
- ƒ reply fields (all type 5/6 = string): Success(6), HallModelName(5), RecruitingModelName(5), ResourcingModelName(5), TradingModelName(5), TrainingModelName(5)
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10 (flags)


## guild-social-network  (1)

### GameRules::RegisterScriptRmis `@0x1103d2d0` — guild-social-network
*Registers a large table of client/script RPC bindings on the game-rules object, including guild-camp entry/exit and level/teleport controls.* (server: network binding table (server invokes these client RMIs); EnterGuildCamp/LeaveGuildCamp are guild-instance travel commands, conf high)
- ƒ guild-relevant RMIs: EnterGuildCamp(FUN_1103b570), LeaveGuildCamp(FUN_1103b5e0), TeleportToFarm, LeaveFarm; also PromptPlayerLevelTooLow(requiredLevel), LevelCtrlSwitchToNewLevel(levelname), TeleportToLevel(levelid), RegionJumpTriggerHandle, SyncPlayerAvatar(id,PlayerIndex), SyncPetAvatar(id,index,nTrainingType,nPetID)
- ƒ each binding registered via vtable+0x64 on obj at param_1+0x44 with reliability class 8


## guild-chat  (1)

### GuildChat::ShowGuildNameOrNoGuildPrompt `@0x11260f90` — guild-chat
*Displays either the player's guild name (if in a guild) or the message "your don't have guild yet" via the chat/notification system (FUN_1115cba0 channel 8).* (server: client-only (chat message display); guild membership state is server-provided, conf medium)
- ƒ if FUN_11398f30()==0 (no guild): show 'your don\'t have guild yet'
- ƒ else: guild name string from FUN_114a75c0(); dispatched via FUN_1115cba0(channel=8, ..., 0xffffffff, ...)


## guild-level  (1)

### TaskGuildLevelContentDef::LoadFromXml `@0x117d6f40` — guild-level
*Parses a guild level-up content definition from XML, reading Name, Groups, RefreshPeriod, RefreshTime, GuildLevel, GuildRepute, GuildArena, GuildPlot, PreTasks, CompleteTasksCount into the def struct. Defines what a guild must achieve to level up.* (server: client-only parse of shared config; the level-up thresholds (level/repute/arena/plot/completeTasksCount) are the authoritative guild progression rules the server must enforce, conf high)
- ƒ id -> +0x10 (int); Name -> string @+0x14-ish (via CPet::SetName); Groups -> vector @+0x18 (FUN_1162bea0)
- ƒ RefreshPeriod -> int @+0x24; RefreshTime -> string/struct @+0x28
- ƒ GuildLevel -> int @+0x4c; GuildRepute -> int @+0x50; GuildArena -> int @+0x54; GuildPlot -> int @+0x58
- ƒ PreTasks -> vector @+0x5c (FUN_1162bea0); CompleteTasksCount -> int @+0x68
- ƒ each field guarded by DAT_12393cc0 bitset (one-time attribute-name registration via FUN_100f67b0)
- $ GuildLevel/GuildRepute/GuildArena/GuildPlot = guild level-up requirement thresholds (mirror guild obj offsets +0x44/+0x4c/+0x54/+0x68 in 0x114a6a70)
- $ CompleteTasksCount = number of tasks that must be completed; RefreshPeriod/RefreshTime = task refresh cadence


## guild-rank  (1)

### CGuildTitleInfo::GetByIndex `@0x1190a480` — guild-rank
*Return CGuildTitleInfo (guild title/rank definition) record at linear index (bounds-checked).* (server: client-only accessor into guild title/rank table (ranks are authoritative server state), conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0


## league-faction  (1)

### CClanLevelInfo::GetByIndex `@0x1194c640` — league-faction
*Return CClanLevelInfo (clan/league level-curve definition) record at linear index.* (server: client-only accessor; clan/league level table is authoritative progression config, conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0


## guild-league-match  (1)

### CGuildMatchAgainstInfo::GetByIndex `@0x1196ea50` — guild-league-match
*Return CGuildMatchAgainstInfo (guild match/versus-pairing definition) record at linear index.* (server: client-only accessor; guild-match/matchmaking pairing config (server owns matchmaking), conf high)
- ƒ count=(mgr+0x18-mgr+0x14)>>2; return *(mgr+0x14+idx*4) if in range else 0
