# MHO Instances / Levels / Matchmaking / Party — Round 11

118 functions from CryGame.dll.


## lobby  (24)

### CLobbyController::EnableDeleteRoleBtn_A `@1084df70` — lobby-ui
*Re-enables NewLobby _root.EnableDeleteRoleBtn and _root.enableEnterHandler; clears this+0x11d busy flag. One of several near-identical UI-unlock helpers.* (server: client-only, conf high)

### CLobbyController::EnableDeleteRoleBtn_B `@1084e0c0` — lobby-ui
*UI-unlock helper: NewLobby EnableDeleteRoleBtn + enableEnterHandler, clears this+0x11d. Identical to 1084df70.* (server: client-only, conf high)

### CLobbyController::EnableDeleteRoleBtn_C `@1084e960` — lobby-ui
*UI-unlock helper identical to 1084df70/1084e0c0.* (server: client-only, conf high)

### CLobbyController::EnableDeleteRoleBtn_D `@1084eab0` — lobby-ui
*UI-unlock helper (EnableDeleteRoleBtn + enableEnterHandler, clears this+0x11d).* (server: client-only, conf high)

### CLobbyController::GetLobbyAnimationVar `@1084c5a0` — lobby-ui
*Reads cvar 'e_lobbyAnimation' value, returns via out variant with type tag 3 (int). Getter counterpart of 1084c380.* (server: client-only, conf high)
- ƒ variant type tag 3 = integer

### CLobbyController::GetLobbySceneVar `@1084c540` — lobby-ui
*Reads cvar 'e_LobbyScene' current value (record vtbl+8 Get) and stores it into an out CScriptVariant (in_stack_00000018): releases old, sets [2]=value, [1]=3 (int type tag).* (server: client-only, conf high)
- ƒ variant type tag 3 = integer

### CLobbyController::GetNewLobbyRoot `@108515b0` — lobby-ui
*Helper returning the NewLobby Flash movie root (GetMovieClip('NewLobby')->GetRoot vtbl+0x8c). Returns 0 if absent.* (server: client-only, conf high)

### CLobbyController::OnEnterHandlerReady `@10850f00` — lobby-ui
*If NewLobby movie is loaded (vtbl+0x68 IsReady), parses an int variant (FUN_104f4330); when the arg is NOT a positive int (type not 3/4 or value<1) it disables UI (calls 1084b7d0) and re-enables _root.enableEnterHandler. Gate that only re-enables the lobby enter button when no pending selection.* (server: client-only, conf medium)
- ƒ condition: (variantType&0x8f) not in {3,4} OR value < 1 -> enable enter

### CLobbyController::OnEnter_RegisterScriptHandlers `@1084c040` — lobby-ui
*Lobby scene enter callback (in_stack_00000014==1 event guard). Registers Flash script handlers _getRoleListData->FUN_108502f0 and _getLineListData->FUN_108509e0 via FUN_104d13b0, writes current time into cvar 'sys_last_config_time' (reads clock via ctx+0x28 vtbl+0xc, stores through record+0x18), and refreshes the NewLobby movie root.* (server: client-only, conf high)
- ƒ variant guard: (flags>>6 & 1) addref/release wrapper pattern used for CScriptVariant refcounting throughout chunk
- ƒ event-type guard: in_stack_00000014 (arg count) == 1

### CLobbyController::OnExitButtonPressed `@108514c0` — lobby-ui
*If *param_2 (pressed flag) != 0 shows the LobbyExit yes/no message box (0x2010); else sets this+0x4c=1. Button-press dispatcher for lobby exit.* (server: client-only, conf high)
- ƒ dialog id 0x2010

### CLobbyController::OnSetDeleteRoleBtnEnabled_Var `@1084edc0` — lobby-ui
*Variant-driven version of 1084ecf0: reads bool from a byte variant (type 2) and enables/disables delete-role button + enter handler accordingly.* (server: client-only, conf high)
- ƒ bool variant type tag 2

### CLobbyController::SetDeleteRoleBtnEnabled `@1084ecf0` — lobby-ui
*Parameterized unlock: if param_2!=0 -> EnableDeleteRoleBtn({2,1}) + enableEnterHandler; else EnableDeleteRoleBtn({2,0}) + disableEnterHandler. Sets this+0x11d = (param_2==0) i.e. busy when disabled.* (server: client-only, conf high)
- ƒ EnableDeleteRoleBtn payload {2, enable=param_2!=0}
- ƒ this+0x11d = (param_2==0)

### CLobbyController::SetEnterUIEnabled `@1084b7d0` — lobby-ui
*Fetches the 'NewLobby' Flash movie (DAT_1202e818+0xbc = FlashUI manager, vtbl+0x3c GetMovieClip, then +0x8c GetRoot) and invokes _root.DisbaleUI [sic] plus _root.enableEnterHandler. param_1!=0 -> disable UI (enableEnterHandler cleared); param_1==0 -> DisbaleUI(...,1). Pure Flash UI toggle.* (server: client-only, conf high)

### CLobbyController::SetLobbyAnimation `@1084c380` — lobby-ui
*Sibling of 1084c260 for the 'e_lobbyAnimation' cvar (this+0x124). Dispatches opcode 0x75 with cached scene id (this+0x120), sets e_lobbyAnimation cvar, then builds an animation-name string: if this+0x124 < 2 -> 'NORMAL_IDLE_SELECT', else snprintf 'INTERACT_AVATAR_CREATE_%d' with (this+0x124 - 1). Applies it via CInfoRecord::GetModelString and FUN_10fd7800.* (server: client-only, conf high)
- ƒ anim select: if (*(this+0x124) < 2) name='NORMAL_IDLE_SELECT' else sprintf('INTERACT_AVATAR_CREATE_%d', *(this+0x124)-1)
- ƒ string buffer 0x31 (49) bytes

### CLobbyController::SetLobbySceneState `@1084c260` — lobby-ui
*Reads a variant arg (type must be 3=int or 4, else sentinel 0xdeadbeaf), stores it at this+0x120, dispatches net/game message opcode 0x75 with the value (via FUN_10d17440 event system), then writes the value into cvar 'e_LobbyScene' (record vtbl+0x14 Set) and forces a scene refresh (ctx[0]+0x21c).* (server: client-only, conf medium)
- ƒ variant type check: (flags & 0x8f) in {3,4} else 0xdeadbeaf sentinel
- ƒ message opcode 0x75 (117) dispatched via FUN_10d17440()->+0xc->+4(opcode,&payload)

### CLobbyController::ShowExitConfirmDialog `@1084da50` — lobby-ui
*Opens a yes/no confirmation message box: FUN_1112d520 (begin), FUN_1112d6b0(0x2010,'LobbyExitYes','LobbyExitNo',&buf), FUN_1112d550 (commit). 0x2010 is the dialog/text template id for the lobby-exit prompt.* (server: client-only, conf high)
- ƒ dialog template id 0x2010 (8208)

### CLobbyLevelSystem::BindLobbyEntity `@10bc4ec0` — lobby
*Creates/gets the 'Lobby' level-system object (via system registry ctx DAT_120286c8 +0x3c ->+0x74 ->+0x54('Lobby',1)) and stores at this+0x594. Registers ~12 component/field pointers (this+0xd4,0xd8,0xdc,0xe4,0xf0,0xe8, this+0..0x24) with it via vtbl+0xc. Stock entity-to-subsystem binding.* (server: client-only, conf medium)

### CMHLobbyLevel::OnEnterLevel `@10d64430` — lobby
*Massive lobby-level enter handler. Registers ~17 game-event listeners (FUN_10d17440 event bus) for lobby callbacks (FUN_10d679a0..FUN_10d657a0). Sets cvars pl_LookIKFOV=75.0f (0x42a00000), pl_LookIKFadeTime=2.0f (0x40000000), reads e_SplashHideMouseTime. Handles the intro splash movie ('splash') and registers SplashOver/HasViewSplash/ViewSplash handlers only when DAT_1202f9d0==0. Parses command line for -q / -loginqq= / -src=tgp (TGP/QQ launcher integration) to drive login flow FUN_10d65c40. Builds the lobby map via console command sprintf('create_map %s', param_1[7]) and shows the NewLobby UI (_root.UIModel_Init). Uses cvar g_MHFC_LobbyLevel and 'level_avatar' default.* (server: client-only, conf medium)
- ƒ pl_LookIKFOV = 0x42a00000 = 75.0f
- ƒ pl_LookIKFadeTime = 0x40000000 = 2.0f
- ƒ splash gate: DAT_1202f9d0 == 0.0
- ƒ cmdline flags: -q, -loginqq=, -src=tgp (TGP launcher); con_tconnect_qq cvar read for auto-login
- ƒ map command: sprintf('create_map %s', *(param_1[7]))

### CMHLobbyLevel::OnLeaveLevel `@10d64d80` — lobby
*Lobby-level teardown counterpart to 10d64430. Clears this+0x10 flag, unhooks the m_pThis view callback (vtbl+0x34), resets this+0x20=0 and this+0xd8f=1, calls FUN_10d6a420 cleanup, restores cvars pl_LookIKFOV=70.0f (0x428c0000) and ca_EnableLookIKNoise=0, resets input (FUN_104d0280 vtbl+0x10(0)), optionally stops something (ctx+0x209 flag / ctx[0xe] vtbl+0x60), releases the NewLobby movie ref and hides it (vtbl+100(0)).* (server: client-only, conf medium)
- ƒ pl_LookIKFOV restored = 0x428c0000 = 70.0f
- ƒ ca_EnableLookIKNoise = 0

### CNewLobbyUI::NotifyReady `@10d658d0` — lobby-ui
*FlashUI 'NewLobby' widget plumbing: sets flag at param_1+0x18=1, optionally pushes a color/vec3 (0xc09eb852,0xbeff559b,0x4330b852) via FUN_10b44230, fetches the FlashUI system, resolves the 'NewLobby' UI element, releases refcounted handles, then calls vtable+0x24(1) and DAT_120286c0+0x594 vtbl+0x18(1) to enable input/window.* (server: client-only (FlashUI/CryEngine UI plumbing; no server authority), conf medium)
- ƒ writes 1 to *(param_1+0x18)
- ƒ float triplet local_10=0xc09eb852(-4.96f), local_c=0xbeff559b(-0.499f), local_8=0x4330b852(176.72f) passed to FUN_10b44230 when *(DAT_120286c8+0xd0)+0x5c != 0

### CNewLobbyUI::SendLoadLocalData `@10d66b30` — lobby-ui
*Resolves FlashUI 'NewLobby' element; if valid, obtains its model (vtbl+0x8c) and invokes UI callback 'LoadLocalData' (vtbl+0xc0) passing an arg struct {local_18=*param_1, local_20[0]=3}.* (server: client-only, conf medium)
- ƒ arg count constant 3 (local_20[0]=3); local_18 = *param_1

### CNewLobbyUI::SetActive `@10d69790` — lobby-ui
*Sets NewLobby UI active state bVar5 = (*param_1==1) via vtbl+100 and model vtbl+0x94; writes bool to *(local_8+0xd8f); refreshes a related manager (FUN_10d17440 -> +4 -> vtbl+0x28 -> vtbl+0x1c).* (server: client-only, conf low)
- ƒ bVar5 = (*param_1 == 1)

### CNewLobbyUI::SetWindowVisible `@10d679a0` — lobby-ui
*If flag *(param_1+0xd95)!=0, destroys old splash window (FindWindowA/DestroyWindow) then Show/Focus/Foreground the game window (DAT_1202e818+0x10 vtbl+0x50c). Then sets NewLobby visibility = (*param_2=='\0') via vtbl+100 and model vtbl+0x94, stores bool at param_1+0xd8f, and propagates cursor/UI visibility.* (server: client-only (Win32 window + UI visibility), conf medium)
- ƒ bVar4 = (*param_2 == 0); stored to *(param_1+0xd8f) and pushed to UI vtbl+100/+0x94

### CNewLobbyUISH::RegisterCallbacks `@110ae0e0` — lobby-ui
*Constructs a FlashUI ScaleForm callback handler for the lobby. Resolves DAT_11dbd178 UI element and 'NewLobby'; registers named callbacks via CInfoRecord::GetModelString + vtbl+0xf0: 'UIModeRelationUICount', 'DisablePlayerInput', 'DisableUIInput', 'UISHCallBack', 'OnPlayUISound', 'OnPauseGameCallBack' (first element) and 'OnPlayUISound' (NewLobby). Then registers 4 delegates via FUN_110af700/5b0/620/690.* (server: client-only (UI callback registration), conf medium)
- ƒ clears *(param_1+1)(u16)=0, *(param_1+4)=0, *(param_1+3)(u8)=0


## instances  (22)

### Flash_BuildInstanceLevelCatCostData `@0x107db7f0` — instances/level-cost (client)
*On a Flash getter callback, computes an instance-level category cost (FUN_11574f20 given category id) and returns an AS3 object 'mh.model.Instance.InstanceLevelCatCostData' with CostType and CostValue.* (server: validation: cost lookup surfaced to UI; the authoritative cost table lives behind FUN_11574f20 (instance manager). Server should charge CostType/CostValue on entry., conf medium)
- ƒ arg variant: (arg.tag & 0x8f)==3\|\|4 => category value else 0xdeadbeaf sentinel
- ƒ FUN_11574f20(instMgr, subObj, categoryId, &costType, &costValue) fills CostType/CostValue

### Flash_BuildInstancePlayerStateData `@0x107dcf10` — instances/settlement (client)
*Builds AS3 object 'mh.model.Instance.InstancePlayerStateData' with a StateDatas array of 'mh.model.Instance.vo.ScoreDataVo' {nScoreType, nScore}, iterating a per-player score rb-tree/list at param_3+0x50, then calls InitData.* (server: authoritative source: the score entries (nScoreType/nScore) are computed server-side and pushed to the result screen. Server owns settlement scoring., conf medium)
- ƒ score list root at param_3+0x50; iterate rb-tree (node +0x4/+0xc/+0x8), each node: nScoreType @ +0x10, nScore @ +0x14
- ƒ emit ScoreDataVo per node into StateDatas array

### InstanceResult_ShowWinLoseWindow `@0x107d8f60` — instances/result (client)
*Builds the instance settlement/result window. Dispatches a batch of UI element enable/config events (event id 0x1e with element ids 0x34,0,2,0xc,0xd,0xe,0xf,0x10,0x13,4,0x18,0x1a,0x1b,0x1f,0x20,0x33,0x6e), configures HUD visibility, then shows 'InstanceWin' or 'InstanceLose' dialog based on the win flag at param_1+0x20.* (server: client-only presentation: reflects server-decided win/lose (param_1+0x20). Server owns the actual result; this only renders it., conf medium)
- ƒ win/lose branch: *(char*)(param_1+0x20) != 0 => InstanceWin (menu vtbl+0x2b0) else InstanceLose (vtbl+0x2b4)
- ƒ UI event id = 0x1e (30) applied to ~17 element ids

### Lobby_EnterTownTransition `@0x1050bac0` — instances/hub-entry (client)
*Performs the town/lobby enter transition when game-state matches (FUN_10bac530()==3 with substate flag==2, or forced). Resolves Flash clips (DAT_11dbd178 movie, 'NewLobby'), fires UI events 0x33 and 0x1f, toggles lobby-active state (FUN_10b69ec0(1), FUN_10b69c40), and conditionally FUN_112e0770.* (server: client-only: local UI/scene transition into town hub (drives Flash + local state). State value 2/3 mirror server-authoritative game state., conf low)
- ƒ gate: (*(int*)(local_38+0x3c)==2 && FUN_10bac530()==3) \|\| param_1!='\0'
- ƒ UI events dispatched with ids 0x33 and 0x1f
- ƒ extra: if *(int*)(instObj+11000)!=0 => FUN_112e0770(0)

### Lobby_SendReqChangeTownInstance `@0x1050b730` — instances/hub-entry (client send)
*Handler for changing the town instance / hub line. Reloads UI if needed, sets pet name, and either sends a scripted 'ReqChangeTownInstance' (msg-id 0x202f) or fills a large request struct with a level name (strncpy 0x100) and dispatches it via the network layer (msg type byte 0x42).* (server: authoritative flow (client-side sender): 0x202f = ReqChangeTownInstance request. Server must handle town-instance/line change and validate target level name (256 bytes). Struct hdr 0x42 identifies the message., conf medium)
- ƒ if FUN_1050a110(0x9e): script path FUN_1112d6b0(0x202f, "ReqChangeTownInstance", ...)
- ƒ else: struct hdr byte = 0x42; strncpy(levelName, *(param_1+0x306c), 0x100); send via FUN_113f3640 net obj vtbl+0x14
- ƒ request buffer sized 0xa6d9c (memset), level-name field 0x100 bytes

### TdrText_DumpBattleGroundCreateInfo `@0x102a22d0` — instances/create
*TDR text serializer for the instance/battleground creation descriptor — the parameters used to spin up an instance level: battleground id, level id, max players, game mode, time/weather, world time, rand seed, warning flag, max player level.* (server: authoritative: these are the server-owned parameters that define an instance session (capacity, mode, difficulty inputs, deterministic rand seed for level generation, weather/time). Server must generate iLevelRandSeed and enforce iCreateMaxPlayerCount / iCreatePlayerMaxLv., conf high)
- ƒ struct: +0x0 iBattleGroundID(i32); +0x4 iLevelID(i32); +0x8 iCreateMaxPlayerCount(i32); +0xc iGameMode(i32); +0x10 iTimeType(i32); +0x14 iWeatherType(i32)
- ƒ +0x18 fTime(float, printed via DAT_11da0cf4 float fmt); +0x1c iLevelRandSeed(i32)
- ƒ +0x20 bWarningFlag(u8, 0x%02x); +0x21 iCreatePlayerMaxLv(i32)

### TdrText_DumpFixedTimesBlock `@0x1015f5a0` — instances/level-result
*TDR text serializer for the FixedTimesBlock struct (dump direction; matches TlvFixedTimesBlock read at 0x1015F270 in schema docs). Level completion/quest block with a completeBit array plus levelId/levelResult.* (server: validation/schema: cross-referenced with TLV_DOCS/TlvFixedTimesBlock.md (fields fixedTimes, blockArg1-4, completeBitCount, completeBit, levelId, levelResult). Server evaluates level completion / fixed-times gating., conf high)
- ƒ struct: +0x0 fixedTimes(i32); +0x4 blockArg1; +0x8 blockArg2; +0xc blockArg3; +0x10 blockArg4; +0x14 completeBitCount(i32)
- ƒ completeBit[]: u8 array @ +0x18, element i = *(char*)((int)param_1 + 0x18 + i)
- ƒ levelId: i32 @ +0x1d; levelResult: i32 @ +0x21
- ƒ CAP: completeBitCount < 0 return -6; completeBitCount > 5 return -7 (max 5 complete-bits)

### TdrText_DumpInstanceAllocResponse `@0x102a2a40` — instances/enter
*TDR text serializer for the instance allocation / enter response: error code, role id, instance id, the battle-server address string, service id, connection key, embedded stInstanceInfo (BattleGroundCreateInfo), and same-BS/cross-region/matchroom flags. This is the reply that hands a client off to a battle server.* (server: authoritative: server assigns the battle-server (szBattleSvr), iServiceID and per-session szKey, decides bSameBS/bCrossRegion/bMatchRoom routing, and returns iErrNo. Core matchmaking->battle-server handoff message., conf high)
- ƒ struct: +0x0 iErrNo(i32); +0x4 iRoleId(i32); +0x8 iInstanceID(i32)
- ƒ +0xc szBattleSvr (char[], ~0x200 bytes: next scalar iServiceID at param_1[0x83]=+0x20c)
- ƒ +0x20c iServiceID(i32); +0x210 szKey (char[] connection key)
- ƒ [stInstanceInfo] -> nested FUN_102a22d0 (BattleGroundCreateInfo)
- ƒ +0x255 bSameBS(u8); +0x256 bCrossRegion(u8); +0x257 bMatchRoom(u8) (all 0x%02x)

### TdrText_DumpInstanceBrowseEntry `@0x102fbb60` — instances/lobby-browse
*TDR text serializer for one instance browse/list entry: battle-server id, instance id, level name string, occupant count, and an array of occupant player names.* (server: validation/schema: instance/room browse listing (server provides open instances with occupant names). Player cap surfaced here is 8 names., conf high)
- ƒ struct: +0x0 dwBattleSvrID(u32, fmt DAT_11d9f574); +0x4 dwInstanceID(u32)
- ƒ +0x8 szLevelName (char[0x20], 32 bytes; nCount at +0x28)
- ƒ +0x28 nCount(i16)
- ƒ aszPlayerName[]: entries @ +0x2a + i*0x20 (32 bytes each), length = nCount
- ƒ CAP: nCount < 0 return -6; nCount > 8 return -7 (max 8 players listed per instance)

### TdrText_DumpInstanceDataArray `@0x1029ab90` — instances/instance-data
*TDR text serializer for an instance-data blob: a count plus two parallel u32 arrays [instanceDataType] and [instanceDataValue].* (server: validation/schema: instance-scoped key/value data (up to 40 type/value pairs). Server owns instance data., conf high)
- ƒ struct: +0x0 iInstanceDataCnt(i32)
- ƒ instanceDataType[]: u32 array @ +0x4 (param_1[1..]), length = cnt
- ƒ instanceDataValue[]: u32 array @ +0xa4 (param_1[0x29..]), length = cnt
- ƒ CAP: cnt < 0 return -6; cnt > 0x28 (40) return -7 (max 40 entries per array)

### TdrText_DumpInstanceId `@0x1029cdf0` — instances/id
*Minimal TDR text serializer emitting only [iInstanceID] (i32 @ +0).* (server: validation/schema: single-field iInstanceID message., conf high)
- ƒ field: iInstanceID(i32) @ +0x0

### TdrText_DumpInstanceId_bufwrap `@0x1029cd70` — instances/id
*Buffer-wrapper TDR text serializer that emits a single [iInstanceID] field into a caller buffer; sets up local cursor struct and returns bytes written via out-param.* (server: client-only: text-dump helper (single instance id)., conf high)
- ƒ field: iInstanceID(i32) @ +0x0 of source struct
- ƒ returns 0xffffffed (-19) if dest buffer ptr (param_2) is NULL

### TdrText_DumpInstanceId_bufwrap2 `@0x1029ce20` — instances/id
*Buffer-wrapper variant of iInstanceID text dump; writes into fixed-size dest buffer (param_3 = size), NUL-terminates at min(written, size-1), returns dest ptr.* (server: client-only: text-dump helper., conf high)
- ƒ field: iInstanceID(i32) @ +0x0
- ƒ clamp: if written >= size, term index = size-1; dest[idx]=0
- ƒ returns &DAT_11d9d32b (empty string) if dest NULL or size==0

### TdrText_DumpInstanceId_bufwrap3 `@0x1029ceb0` — instances/id
*Another iInstanceID text-dump buffer wrapper using a cursor struct {buf,pos,cap}; NUL-terminates via TdrBuf_PutNulAt, returns buf.* (server: client-only: text-dump helper., conf high)
- ƒ field: iInstanceID(i32) @ +0x0
- ƒ clamp: pos=param_2[1]; cap=param_2[2]; if pos>=cap pos=cap-1; PutNulAt(cap,pos)
- ƒ returns &DAT_11d9d32b if buf(param_2[0])==0 or cap(param_2[2])==0

### TdrText_DumpInstanceListResponse `@0x102fc860` — instances/lobby-browse
*TDR text serializer for the instance-list response: index, error code, count, and an array of astInstanceInfo entries (each dumped via FUN_102fbb60).* (server: authoritative: server returns paginated open-instance list (max 10 per response), dwIndex = page cursor, nErrCode = query result., conf high)
- ƒ struct: +0x0 dwIndex(u32); +0x4 nErrCode(i16); +0x6 nCount(i16)
- ƒ astInstanceInfo[]: nested FUN_102fbb60 per element, length = nCount
- ƒ CAP: nCount < 0 return -6; nCount > 10 return -7 (max 10 instances per page)

### TdrText_DumpInstanceTriggerInfo `@0x1028b500` — instances/trigger
*TDR text serializer for an instance-trigger descriptor: iTriggerId, iInstancePoint, iLevelID, iLevelDiff, iLevelMode.* (server: validation/schema: instance entry trigger + level id/difficulty/mode gate. Server owns which trigger maps to which level/difficulty/mode., conf high)
- ƒ struct: +0x0 iTriggerId(i32); +0x4 iInstancePoint(i32); +0x8 iLevelID(i32); +0xc iLevelDiff(i32); +0x10 iLevelMode(i32)

### TdrText_DumpInstanceTriggerInfo_dup `@0x1028bbb0` — instances/trigger
*Byte-identical duplicate of FUN_1028b500 (same iTriggerId/iInstancePoint/iLevelID/iLevelDiff/iLevelMode dump). Likely a second TDR-generated struct sharing the same layout.* (server: validation/schema: same as FUN_1028b500., conf high)
- ƒ struct: +0x0 iTriggerId; +0x4 iInstancePoint; +0x8 iLevelID; +0xc iLevelDiff; +0x10 iLevelMode (all i32)

### TdrText_DumpLevelInstanceRef `@0x102a3800` — instances/ref
*Minimal TDR text serializer for {iLevelid, iInstanceid}.* (server: validation/schema: level+instance reference pair., conf high)
- ƒ struct: +0x0 iLevelid(i32); +0x4 iInstanceid(i32)

### TdrText_DumpLevelInstanceRef_bufwrap `@0x102a3760` — instances/ref
*Buffer-wrapper TDR text serializer for a {iLevelid, iInstanceid} pair into a caller buffer.* (server: validation/schema: level+instance reference pair., conf high)
- ƒ struct: +0x0 iLevelid(i32); +0x4 iInstanceid(i32)
- ƒ returns -0x13 (-19) if dest buffer NULL

### TdrText_DumpLevelModeStat `@0x101480d0` — instances/level-mode
*TDR text/debug serializer for a Level-Mode-Stat struct. Dumps [levelMode] then [modeStatCnt], validates count, then two parallel arrays [modeStatType] (u8) and [modeStatVal] (u32).* (server: validation/schema: defines the level-mode stat block layout (max 10 type/value pairs) used in level config messages; server owns level mode definition. This is the debug-dump direction., conf high)
- ƒ struct: +0x0 levelMode (u32, printed via DAT_11d9e0b4=int fmt); +0x4 modeStatCnt (u8, printed 0x%02x)
- ƒ modeStatType[]: u8 array @ +0x5, length = modeStatCnt
- ƒ modeStatVal[]: u32 array @ +0xf, element i = *(u32*)((int)param_1 + i*4 + 0xf)
- ƒ CAP: if modeStatCnt > 10 return -7 (max 10 entries)

### TdrText_DumpLevelQueryFilter `@0x103169b0` — instances/level-select
*TDR text serializer for a level query/filter descriptor: level mode, map id, level group id, difficulty, cross-line flag, and a begin/end range.* (server: validation/schema: level selection filter (mode/map/group/difficulty + cross-line + range). Server validates level availability and difficulty gates., conf high)
- ƒ struct (param_1 is short*): +0x0 nLevelMode(i16); +0x2 dwMapId(u32); +0x6 dwLevelGrpId(u32)
- ƒ +0xa nDifficulty(i16); +0xc nCrossLine(i16)
- ƒ +0xe dwBeginFrom(u32); +0x12 dwEndTo(u32)

### TdrText_DumpWorldServerStats `@0x102a83b0` — instances/telemetry
*TDR text serializer for world/battle-server load telemetry: online player count, players in town/battle, active instance count, players in wait queue, world FPS, and per-slot town/battle FPS arrays.* (server: authoritative: server-side monitoring/telemetry (load balancing across matchmaking). iPlayerInWaitQueue and iActiveInstanceCount inform matchmaking capacity. Fixed 10-slot FPS arrays = per-line/per-shard health., conf high)
- ƒ struct: +0x0 iOnlinePlayerNum(i32); +0x4 iPlayerInTown(i32); +0x8 iPlayerInBattle(i32); +0xc iActiveInstanceCount(i32); +0x10 iPlayerInWaitQueue(i32)
- ƒ +0x14 fWorldFPS(float)
- ƒ townFPS[10]: float array @ +0x18 (param_1+6), fixed length 10
- ƒ battleFPS[10]: float array @ +0x40 (param_1+0x10), fixed length 10


## instance  (19)

### CCliFarmBattleGround::_InitCP `@112ee750` — instance-lifecycle-client
*One-time init (guard flag at param_1+0xb4) for a farm/grind battleground checkpoint. Registers a delegate (PTR_FUN_11d21668) on object [0x27], then schedules a 1000ms periodic timer 'CCliFarmBattleGround::_InitCP' (-> LAB_112ee7d0), storing handle at [0xb5].* (server: client-only (checkpoint timer scheduling), conf medium)
- ƒ timer period 1000 ms; one-time guard *(param_1+0xb4)

### CCliLogicPlayer::AfterEnterBattleGround `@11161990` — instance-lifecycle-client
*Client-side hook run after the local player enters a battleground/instance. Calls FUN_113966e0(instance), refreshes state (vtbl+0x2e8). If in-battle (vtbl+0x280): sends net msg 0x6e (levelID param_1[0xb], local_14=0x6e) then 0x6f to server message channel. Fires a series of vtbl+0x2c0 subsystem-init calls with tags 8,0,2,4,0x12,5. If in-battle again sends msg 0x276 (level id). Conditionally FUN_11218530 when a flag+0x164 and slot [0xb8d] set. Schedules a 10000ms timer 'CCliLogicPlayer::AfterEnterBattleGround' -> LAB_11167250, storing handle at [0x9830] when [0x9830]==-1.* (server: validation/client (client announces battleground entry to server via msgs 0x6e/0x6f/0x276; server owns authoritative entry), conf medium)
- ƒ net message opcodes: 0x6e, 0x6f, 0x276; subsystem init tags {8,0,2,4,0x12,5}
- ƒ timer period 10000 ms; sentinel [0x9830]==-1 guards one-shot scheduling
- ƒ levelID read from param_1[0xb]

### CClientCmd::EnterInstanceOrLevel `@112a7670` — instance-entry-cmd
*Debug/console command handler. Formats 'InstanceId = %d, LevelId = %d' from param_3[1] (instanceId) and *param_3 (levelId) and prints (FUN_1115cba0 chat/console channel 8). Dispatch: if instanceId(>0) call FUN_111c5790 (enter instance); else if levelId(>0) call FUN_111bb9b0 (enter level); else prints a fallback message.* (server: client-only entry-point (issues request; server validates/authorizes actual entry), conf medium)
- ƒ param_3[1] = InstanceId, param_3[0] = LevelId; branch on >0

### CInstanceEnterController::RegisterModelHandlers `@10b601c0` — instance-enter
*Constructor/initializer for the instance-enter view controller (vtbl PTR_FUN_11cc7c48). Grabs the default Flash movie (DAT_11dbd178) into this+1, then registers 8 model-string handlers via CInfoRecord::GetModelString + vtbl+0xf0: CloseSettmentView->FUN_10b60330, CloseInstanceCountDownView, SelectInstanceId->FUN_10b60450, SelectInstanceDifficulty->FUN_10b60520, EnterInstance->FUN_10b60630, EnterInstanceAck->FUN_10b60af0, RefreshEnterInstanceView->CMHLevelInfo::DispatchCurrentHubMapEvent, RefreshInstanceDownMessageBoxView->FUN_10b60c10.* (server: validation, conf high)

### CInstanceManager::CreateInstance `@11a98d10` — instance-lifecycle
*Instance factory. Increments the running instance counter at this+0x3a34, builds an instance name 'instance{N}' (N = counter, formatted via FUN_11b2ffe0/FUN_11a8b6e0 with width 0x30=48 buffer), invokes a manager hook (this+0xc vtbl+0xdc), then creates/looks up the instance object (FUN_11abe680) storing it in *param_2 and bumping its refcount at obj+0xc.* (server: authoritative (instance creation + naming/counter; server owns instance registry), conf medium)
- ƒ *(this+0x3a34) += 1 (monotonic instance counter); instance name = format 'instance{0}' with counter value; obj(+0xc) refcount += 1

### CInstancePortalDef::ParseXML `@118a33d0` — instance-portal
*Parses an instance-transition/portal entity from XML. Reads: (DAT_11da7300 key)->this+0x1c, 'EntityClass'->this+0x34, 'iToInstanceId'->this+0x4c, position 'Pos'(DAT_11cca8a0, default '0,0,0')-> sscanf %f,%f,%f into this+0x10/+0x14/+0x18, 'Rotate'(default '0,0,0,0')-> %f,%f,%f,%f into this+0xc/+0x0/+0x4/+0x8, 'RegionID'->this+0x50.* (server: validation/config (instance teleport target; server should own destination instance id), conf high)
- ƒ offsets: +0x10/+0x14/+0x18 = pos xyz, +0xc/+0x0/+0x4/+0x8 = rotation quat (w,x,y,z), +0x1c = name, +0x34 = EntityClass, +0x4c = iToInstanceId, +0x50 = RegionID
- ƒ pos default '0,0,0'; rotate default '0,0,0,0'

### CLevelSuperSequence::GetRemainingCount_Idx54 `@114d2aa0` — instance-entry-limit
*Cross-references a CLevelSuperSequence entry (index from param_1 vtbl+0x30(0)) and a CMHLevelModeInfo entry at fixed index 0x36 (54). If counter subsystem active (this[1] vtbl+0x388) and FUN_1156c6b0(seq(+0x2c))!=0: returns clamp(FUN_1156c660(4) + (mode(+0x6c) - FUN_1156c660(3)), min 0); else returns mode(+0x6c). Returns 0 if not resolvable.* (server: validation (remaining attempts/count for a level super-sequence), conf low)
- ƒ CMHLevelModeInfo index = 0x36 (54)
- ƒ remaining = FUN_1156c660(4) + (mode(+0x6c) - FUN_1156c660(3)), clamped to >= 0
- ƒ selector = CLevelSuperSequence[seqIdx].(+0x2c)

### CMHLevel::CheckEntryAllowed `@1156c340` — instance-entry-validation
*Validates whether the player may enter/continue a level/instance. Two paths keyed on param_1: (a) param_1==-8 uses CMHLevelModeInfo index 0x3c(60): checks a session gate (FUN_1171ebf0); if entry has count fields set (+0x68 !=0 and +0x6c > 0), compares current count FUN_1156c660(4) against limit entry(+0x70), sets error 0x32e when at/over limit, returns whether count < limit. (b) otherwise param_1 indexes CMHLevelInfo and reads its mode ref (+0x24). Sets *param_3 error codes: 0x332 (session/precondition fail), 0x32e (limit reached), 1 (invalid level).* (server: validation (server-authoritative entry gate; error codes are the reject reasons), conf medium)
- ƒ special selector param_1 == -8 (0xfffffff8) -> CMHLevelModeInfo idx 0x3c
- ƒ count limit check: allowed = (FUN_1156c660(4) < entry(+0x70)); if >= limit set err 0x32e
- ƒ requires entry(+0x68)!=0 && entry(+0x6c)>0 else err 0x32e
- ƒ err 0x332 when session gate FUN_1171ebf0()==0
- ƒ err 1 when level index invalid

### CMHLevelInfo::DispatchEnterInstanceEvent `@10d25350` — instance-enter
*Fires a Flash/game event carrying instance-enter parameters. Guarded so it only fires if two listener lists (level+0xac +0x20 / +0x28) are non-empty. Creates an event args object (level+0x58 vtbl+0x30), sets 'iInstanceID' = (float)param_2[0] and 'nEnterType' = (float)param_2[1] (both written as arg type 4=float then boxed), and dispatches event id 1 via FUN_10d1d220.* (server: validation, conf high)
- ƒ event id 1
- ƒ args: iInstanceID = (float)param_2[0], nEnterType = (float)param_2[1]
- ƒ arg slot type tag 4 (float) with 6/7 = object/ref release codes

### CMHLevelMode::GetEntryCountRemaining_Idx60 `@11497fc0` — instance-entry-limit
*Looks up CMHLevelModeInfo entry at fixed index 0x3c (60). If the level context (param_1+4) exists and entry valid, reads limit field (+0x6c). If a counter subsystem (vtbl+0x388) is active, returns limit(+0x6c) unless adjusted by FUN_1156c660(4) - FUN_1156c660(3) counters: returns cnt4 + (limit - cnt3). Otherwise returns limit(+0x6c). Returns 0 if unavailable.* (server: validation (per-mode entry/attempt allowance; server should be authoritative), conf low)
- ƒ modeInfo index = 0x3c (60)
- ƒ if counter subsystem present and FUN_1156c6b0(0xfffffff8)==0: return entry(+0x6c)
- ƒ else: return FUN_1156c660(4) + (entry(+0x6c) - FUN_1156c660(3))

### CMHLevelMode::SumEntryCounters_Idx44 `@1156c7d0` — instance-entry-limit
*Looks up CMHLevelModeInfo entry at fixed index 0x2c (44), iterates its pointer-vector [+0x124 .. +0x128) (count = (end-begin)>>2), for each element resolves a counter via FUN_1156c6b0(elem->(+0x10)) and, walking a red-black tree (nodes at +4/+8/+0xc/+0x10/+0x14), accumulates the found value at (+0x14). Returns the total sum.* (server: validation (aggregate of per-mode counters), conf low)
- ƒ modeInfo index = 0x2c (44)
- ƒ vector element stride 4 bytes; total = sum of tree-lookup(+0x14) over elements

### InstanceChannelUI::BuildPackingSpeedVO `@108606f0` — instance-channel
*Reads two variants (m_bIsLocal flag, instanceChannel data), resolves instance record (ctx+0xd0->+0x90->+0xb4). Depending on m_bIsLocal, resolves channel via FUN_113f9bb0(local) or FUN_10858a70/FUN_10858670(remote by channel id). Validates level template (FUN_10254130: type+0x34==2, +0x3c==5) and m_bCanBreak (FUN_108563c0). Formats a packing-speed string via FUN_1186ae80/FUN_100e1c50 and writes cvar/field 'm_strPackingSpeed'. Sets out variant bool=1 on success.* (server: validation, conf low)
- ƒ level template gate: record+0x34==2 && record+0x3c==5
- ƒ channel-type value 5 handling for FUN_11399c60 party leader

### InstanceChannelUI::BuildRandomWeaponVO `@10866710` — instance-channel
*For arg count==5 parses a string channel number (_strtoui64) into 'instanceChannelNumber'; otherwise uses an int64 from the variant. If flag byte set and item resolves (FUN_10858670) and is a weapon (FUN_1166e250), sets UI fields m_bIsRandomWeapon=1, m_bIsRecast=(FUN_1166dc70()>0), item name (CPet::SetName), model string (DAT_11dbac80), and m_nRareType from item+0x2c accessor.* (server: validation, conf medium)
- ƒ channel number = _strtoui64(str,0,10)
- ƒ m_bIsRecast = (FUN_1166dc70() > 0)
- ƒ arg-count branch: ==5 -> string channel, else int64 channel

### InstanceChannelUI::ReadChannelParamsFromVO `@10861c50` — instance-channel
*Reads five named fields from an incoming Flash variant object via vtbl+0x10 Get: m_bIsLocal(bool), m_nOtherEquipPos(int, 0xdeadbeaf sentinel), instanceChannel(bool), instanceChannelNumber(int64, type 5), instanceChannelType(int, sentinel). Passes them to FUN_10858d90 (apply channel selection); on failure calls FUN_10861ef0(out,0). Returns result. Releases all five temp variants.* (server: validation, conf high)
- ƒ field types: m_bIsLocal=bool(2), m_nOtherEquipPos=int(3/4), instanceChannel=bool(2), instanceChannelNumber=int64(5), instanceChannelType=int(3/4)
- ƒ int64 assembled via CONCAT44(hi,lo)

### InstanceChannelUI::ResolveChannelNumber `@108583c0` — instance-channel
*Reads a string variant, _strtoui64 -> 64-bit instance-channel number. If the instance subsystem (ctx+0xd0 -> +0x90 -> vtbl+0xb4 record) has a valid channel table (record+0x2d1c!=0), resolves the channel via FUN_113f9c70 and stores it into UI fields 'instanceChannelNumber' / 'collumn'(=-1) / DAT_11dbfe78. Sets out variant type 2 (bool) result. If arg count==4 with a bool set, additionally looks up item (FUN_10858670) and its m_nFactItemLevel, applying hunt-rank checks (FUN_116698a0/1166e250/1166dc70<1) to set the result bool false.* (server: validation, conf medium)
- ƒ channel number = _strtoui64(str,0,10) (64-bit)
- ƒ 'collumn' set to 0xffffffff (-1)
- ƒ gate: instance record+0x2d1c != 0 (channel table present)
- ƒ eligibility fail: FactItemLevel path && FUN_1166dc70() < 1

### InstanceChannelUI::ResolveFactItemLevelChannel `@109d0130` — instance-channel
*For an object/array variant (types 8/9/10) reads fields m_strName/m_nFactItemLevel/collumn(=0)/DAT_11dbfe78 via FUN_104d4800, then reads instanceChannelNumber (int64) from a nested object. Validates instance record (FUN_107cb5c0: +0x2d1c!=0 && +0x260e8!=0), resolves two channel records via FUN_113f99c0 / FUN_113f9bb0 (with hunt id FUN_11669710 and level via vtbl+0xc), and if the resolved instance differs from (this+0x24) applies it (FUN_109d0920) and formats display (FUN_112beb10).* (server: validation, conf low)
- ƒ variant container types 8/9/10 (object/array)
- ƒ 'collumn' set 0, then filled from int64 channel number
- ƒ instance record gates: +0x2d1c != 0 && +0x260e8 != 0
- ƒ compare resolved instance vs this+0x24

### InstanceSelectController::RegisterScriptHandlers `@109770f0` — instance-select
*Registers the InstanceSelect controller's Flash script handlers via repeated FUN_1097a9b0: InitModel->InstanceSelectController::RegisterScriptHandlers ref, InstanceSelect_GetElderScrollID->FUN_10979260, InstanceSelect_GetLevelEnterInvalidCondition->FUN_10979d40, InstanceSelect_IsEliteLevelValid->FUN_1097a000, InstanceSelect_SetKeyWord->FUN_1097a4c0, InstanceSelect_GetKeyWord->FUN_1097a520.* (server: validation, conf high)

### ThousandSlayerUI::BuildSupplyPanelVO `@10916ab0` — instance-mode-thousandslayer
*Builds the 'Thousand Slayer' supply/team panel VO (event id param_6==1). For each team member emits a THOUSANDSLAYERSUPPLY_MEMBERVO_CLASSNAME with: itemId, m_strName, HRLevel (FUN_1025b060), hunt-rank/count (CPlayer::GetHuntRankOrCount), state=0, bIsLeader, and per-member stats matched from an array at this+0x40 (stride 0x30): nAttNum(+4), nDefNum(+8), nBestHistoryTime(+0x2c). Emits teammemberInfoArr. Then top-level fields: nCurUseTime(this+0x2c), curLayer(this+0x20), activationSupplyLevelID(this+0x24). Builds selSupplyArr / unSelSupplyArr item VOs (5 supply slots, layers via FUN_11957cc0(1..4)) with count and remainTime (=slot[5]).* (server: authoritative, conf medium)
- ƒ team member stat array at this+0x40, stride 0x30: nAttNum=+4, nDefNum=+8, nBestHistoryTime=+0x2c; count=(this+0x44 - this+0x40)/0x30
- ƒ curLayer = *(this+0x20), activationSupplyLevelID = *(this+0x24), nCurUseTime = *(this+0x2c)
- ƒ supply slot list at this+0x4c..this+0x50 stride 8: id=[0], count=[+4]
- ƒ layer loop index 1..4 (FUN_11957cc0), 5 supply array slots
- ƒ remainTime = slotPtr[5]

### WeaponTrialController::RegisterScriptHandlers `@109ac660` — instance-mode-weapontrial
*Registers WeaponTrial instance Flash handlers: InitModel, SwitchViewMode->FUN_109ac9a0, FetchInstaceData->WeaponTrialModel::BuildDetailVO, FetchNormalKnockoutRemainSeconds->FUN_109ae190, RecordNormalKnockoutStartTime->LAB_109ae200, InstancePayMode->FUN_109ae4d0, NotifyWindow->FUN_109ae230, GetMonsterData->FUN_109ae290, GetWeaponType->FUN_109ae540, GetMaxWeaponTrialLevel->FUN_109ae5a0. Finally records start time: this+0x20 = DAT_123bbcc8/ccc time64 (or fresh _time64) — the knockout/trial start timestamp.* (server: authoritative, conf high)
- ƒ this+0x20 (trial start time, 64-bit __time64_t) = (DAT_123bbcc8\|ccc) if nonzero else _time64(NULL)
- ƒ FetchNormalKnockoutRemainSeconds / RecordNormalKnockoutStartTime -> knockout timer


## character  (13)

### CLobbyController::CancelDeleteRole `@1084f5b0` — character-select
*Cancels delete: re-enables delete-role button ({2,1}) on NewLobby and clears this+0x11c guard, without sending a request.* (server: client-only, conf high)

### CLobbyController::ConfirmDeleteRole `@1084f530` — character-select
*Calls FUN_10851ba0(*(this+0x20)) — the delete-role network request for the stored role id — then re-enables the delete-role button ({2,1}). Clears this+0x11c delete-guard.* (server: validation, conf high)
- ƒ this+0x11c cleared (delete no longer in progress)

### CLobbyController::OnConfirmChangeFace `@1084dcf0` — character-create
*Fetches FlashUI 'splash'/default movie (DAT_11dbd178 name ref) via FUN_104d7640('FlashUI'), calls _root.onReqConfirmChangeFace, then on the NewLobby movie calls _root.EnableDeleteRoleBtn(&{2}) and _root.disableEnterHandler. Sets this+0x11d=1 (busy flag). Includes CryEngine smart-pointer refcount decrement boilerplate.* (server: client-only, conf medium)
- ƒ EnableDeleteRoleBtn arg struct: [0]=2 (button-id/state), [+8 byte]=enable flag
- ƒ this+0x11d = UI-busy/input-lock flag

### CLobbyController::OnCreateRoleNameConfirm `@1084daf0` — character-create
*Character-creation name-confirm handler (event arg count==2). Extracts a string variant (type 6=string) into a heap/inline buffer via FUN_100b62c0, validates the name (FUN_10855530 normalize, FUN_1143b840/FUN_1143b0e0 length/charset check). If check fails (cVar2==0) shows message box 0x1f81 ('CreatRoleNameInputOK'/'Cancel') and calls _root.HideWaitingText. If check passes and the second arg is int(3/4), calls FUN_108517c0 with the name plus 11 fields from this+0x24..+0x48 (the create-role request payload).* (server: validation, conf high)
- ƒ string variant type tag 6
- ƒ dialog id 0x1f81 (8065) = name-invalid prompt
- ƒ second-arg int type check (flags&0x8f) in {3,4} else 0xdeadbeaf

### CLobbyController::OnDeleteRoleRequest `@1084e150` — character-select
*Delete-role UI entry (event arg count==1). Guarded by this+0x11c (one-shot). If int variant (type 3) stores role id at this+0x20. Opens _root.DeleteRole_MessgeBox on the default movie, and on NewLobby sets EnableDeleteRoleBtn({2,0}) + disableEnterHandler (locks input during confirm).* (server: validation, conf high)
- ƒ this+0x11c = delete-in-progress guard
- ƒ EnableDeleteRoleBtn payload {btnId=2, enable=0}
- ƒ role id stored at this+0x20 when variant type==3

### CLobbyController::OnRoleListLoaded `@108510b0` — character-select
*Sets this+0x55=1 (list-loaded flag). If *param_2 != -2 (valid roster, not empty sentinel) re-enables NewLobby delete-role button + enter handler and clears this+0x11d busy flag.* (server: client-only, conf medium)
- ƒ *param_2 == -2 sentinel = empty/no-role state
- ƒ this+0x55 = roster-loaded flag

### CLobbyController::OnShowBeautyUI `@1084e2b0` — character-create
*Two-arg event handler; stores int arg (type 3) as selection at this+0x20 and opens _root.showPlayerBeautyUI (appearance/beauty editor). Standard dual-variant refcount wrapping.* (server: client-only, conf high)

### CLobbyController::SendCreateRolePacket `@10851610` — character-create
*Builds and sends the create-role / appearance packet. Resolves a preset id: FUN_10849e90(param_11); if found, reads a string at record+0x28 (param_4==0) or +0x40 (else) and atoi()'s it into param_11. Zeroes a large staging buffer, copies scalar appearance params, and crucially converts 0x2e (46) float sculpt values starting at this+0x58 into int16 via (short)(int)((double)f * DAT_11de9a08). Packet header uStack_a6db0=0xa8 (168=packet type/len). Sends via FUN_10d179a0 when net subsystem ready. Then disables delete-role btn + enter handler; sets this+0x11d=1.* (server: authoritative, conf high)
- ƒ 46 (0x2e) sculpt floats: bodyMorph[i] = (short)(int)((double)(*(float*)(this+0x58+4*i)) * DAT_11de9a08)
- ƒ preset id: if param_4==0 str=record+0x28 else record+0x40; param_11 = atoi(str)
- ƒ packet type/opcode field = 0xa8 (168)
- ƒ boolean field uStack_a6d94 = (param_15 != 0)

### CLobbyController::ShowNameInputResultDialog `@10850130` — character-create
*Name-input result handler (event arg count==1, int variant type 3). If value==1 shows dialog 0x1f82, if value==2 shows dialog 0x1f83 (both 'CreatRoleNameInputOK'/'Cancel'), then calls _root.HideWaitingText. Maps a server/validation result code to a name-error message box.* (server: validation, conf high)
- ƒ result code 1 -> dialog 0x1f82 (8066); code 2 -> dialog 0x1f83 (8067)

### CLobbyController::SubmitFaceChange_Cancel `@1084deb0` — character-create
*Builds a 12-field appearance packet from this+0x20..+0x50 (uStack_24=0 head flag) and calls FUN_10851610(*(this+0x20)) (the appearance/create-role packet sender), then re-enables the delete-role button and enter handler on NewLobby. Clears busy flag this+0x11d=0.* (server: validation, conf medium)
- ƒ appearance field layout copied from this+0x20(id),+0x24,+0x28,+0x2c,+0x30,+0x34,+0x38,+0x3c,+0x40,+0x44,+0x48,+0x50; uStack_24 (head/mode flag)=0
- ƒ iStack_54 = *(this+0x20) >> 0x1f (sign bit)

### CLobbyController::SubmitFaceChange_Confirm `@1084e000` — character-create
*Same as 1084deb0 but uStack_24=1 (head/confirm flag set) before calling FUN_10851610 appearance-commit; then re-enables delete-role btn + enter handler and clears busy flag.* (server: validation, conf medium)
- ƒ identical appearance field copy as 1084deb0 but uStack_24=1

### CLobbyController::SwitchChangeFaceMode `@1084e8a0` — character-create
*Computes a mode value via FUN_1084b880(*(this+0x20)), dispatches game message opcode 0x79 (121) with it, then calls _root.SwitchChangeFaceMode on NewLobby. Clears busy flag this+0x11d.* (server: client-only, conf high)
- ƒ message opcode 0x79 (121)

### CLobbyController::SwitchChangeSexMode `@1084e9f0` — character-create
*Same as 1084e8a0 (opcode 0x79) but calls _root.SwitchChangeSexMode. Sex-change UI mode toggle.* (server: client-only, conf high)
- ƒ message opcode 0x79 (121)


## level  (13)

### CDamageDampingInfo::EvalDampingMultiplier `@1142e3a0` — level-mode-scaling
*Returns a damage-damping multiplier for the current LevelMode/difficulty and a damage-type selector param_3. Builds the same composite CMonsterLevelMatch key as ApplyLevelModeScaling (mode field +0x110 default 1, plus difficulty*10, *10, + base), looks up the match entry, and — only if actor gate vtbl+8 true and vtbl+0x18 false — returns the type-specific float. Default 1.0.* (server: authoritative-mirror (damage damping applied to combat; server must match), conf medium)
- ƒ levelModeIdx = actorCtx(+0xc)(+0x78)(+0x20); base = actorCtx(+0xc)(+0x78)(+0x30)
- ƒ modeField = CMHLevelModeInfo[levelModeIdx].(+0x110), default 1
- ƒ key = base + (modeField + vtbl+0x2c()*10)*10
- ƒ return by param_3: 3 -> match(+0x48), 4 -> match(+0x4c), 5 -> match(+0x50), 0x10 -> match(+0x54); else 1.0
- ƒ gate: only if param_1 vtbl+8()!=0 AND vtbl+0x18()==0

### CFlowNode_LevelResult::GetConfiguration `@10e35140` — level-result-flownode
*One-time static init of a CryEngine flowgraph node port descriptor set for a level-result node. Input ports: 'enable', 'levelResult', 'winCamp', 'atOnceExitEnable'. Output port group named 'Result' (port type 6). Sets param_1 descriptor pointers and flags (&0xfffff01f \| 0x10).* (server: client-only (UI/flowgraph presentation of result); the authoritative result comes from server, conf high)
- ƒ port config flag: param_1[2] = param_1[2] & 0xfffff01f \| 0x10
- ƒ output port type constant 6

### CLevelGroupDef::ParseXML `@119e26f0` — level-mode-config
*Parses a level-group definition XML element. Reads wide attrs: 'LevelGrpID'(int)->this+0x10, 'LevelMode'(int)->this+0x14, 'Name'(string)-> object name (CPet::SetName reused as a generic setter), 'Params'(string)-> parsed into this+0x1c via FUN_1162bea0. Missing attrs log errors.* (server: validation/config (level group -> mode mapping used by matchmaking/entry), conf medium)
- ƒ offsets: +0x10 = LevelGrpID, +0x14 = LevelMode, +0x1c = Params (parsed)

### CLevelModeFilter::ParseXML `@117b92a0` — level-mode-config
*Parses a level-mode filter/definition XML element. Reads wide-attr 'LevelMode' (string; on-miss logs error) into param_1[0] via enum/string map, and 'Difficulty' (int, default 0xffffffff) into param_1[1].* (server: validation/config (level mode + difficulty selection def), conf medium)
- ƒ param_1[0] = LevelMode (enum via FUN); param_1[1] = Difficulty, default 0xffffffff (-1 = any)

### CLevelResult::GetSingletonTypeInfo `@119d7880` — level-result
*Lazy one-time init (guard DAT_123a3a08 bit0) of the 'LevelResult' type/class registration (FUN_1024f010), returns the cached type ptr DAT_123a3a04 into *param_1.* (server: unknown (RTTI/type registration for LevelResult), conf medium)

### CMHLevelInfo::DispatchLevelModeEnterEvent `@10d26f60` — level-mode
*Fires event id 0x15 (21) with five level-enter parameters set on an event-args object: 'LevelMode'=(float)param_2[0], 'TriggerID'=(float)param_2[1], 'TriggerPoint'=(float)param_2[2], 'LevelID'=(float)param_2[3], 'LevelDiff'=(float)param_2[4]. Gated on two listener lists at level+0xac +0x250 / +600 being non-empty. Dispatched via FUN_10d1d220.* (server: validation, conf high)
- ƒ event id 0x15 (21)
- ƒ args: LevelMode=[0], TriggerID=[1], TriggerPoint=[2], LevelID=[3], LevelDiff=[4] (all float-boxed)

### CMHLevelModeInfo::GetIdByIndex `@118e6110` — level-mode-config
*Array accessor into CMHLevelModeInfo id list: bounds-checks param_1 against (mgr+0x18 - mgr+0x14)>>2 (element count) and returns the id at mgr+0x14 + index*4, else 0.* (server: client/shared (config table accessor), conf high)
- ƒ count = (mgr(+0x18) - mgr(+0x14)) >> 2; return mgr(+0x14)[index] if 0 <= index < count else 0

### CMHLevelModeInfo::GetModeConfigById `@109dd700` — level-mode
*Looks up a CMHLevelModeInfo config record by id. Gets the info-manager singleton (CMHLevelModeInfo::GetInfoMgrSingleton); if empty, finds it by name 'CMHLevelModeInfo' (lazy-init via FUN_109dca90). Then indexes a 2D config table: base id offset at cfg+0x30, columns at cfg+0x28, row-pointer array at cfg+0x20, row count cfg+0x24. Returns table[(param-base)/columns][(param-base)%columns].* (server: validation, conf high)
- ƒ idx = param_1 - *(cfg+0x30) (base offset); require 0 <= idx < *(cfg+0x24)
- ƒ row = *(cfg+0x20)[ idx / *(cfg+0x28) ]  (0x28 = columns/stride)
- ƒ return row[ idx % *(cfg+0x28) ]
- ƒ special: param_1==-1 -> return 0; param_1==0 allowed only if base(cfg+0x30)==0

### CMonsterLevelMatch::ApplyLevelModeScaling `@11425c30` — level-mode-scaling
*Computes and applies monster stat scaling for the current level based on LevelMode + difficulty. Resolves a CMHLevelModeInfo entry from the level's mode index (level+0x78 -> +0x20), reads its mode field (+0x110), combines with difficulty (FUN_1025b060) to build a composite key modeKey = FUN_1140dce0() + (modeField + diff*10)*10, and looks up a CMonsterLevelMatch entry with it. Then multiplies match-entry, mode-entry, and global (FUN_11680c20) float factors to set HP, attack, and other combat multipliers.* (server: authoritative-mirror (client computes monster stat multipliers; server must apply identical curve for combat correctness), conf medium)
- ƒ modeField = CMHLevelModeInfo[levelModeIdx].(+0x110), default 1 if entry missing
- ƒ diff = FUN_1025b060() (difficulty tier)
- ƒ modeKey = FUN_1140dce0() + (modeField + diff*10)*10
- ƒ HP factor (FUN_11428a10) = match(+0x14) * mode(+0x20) * global(+0x2c) * mode(+0x2c)
- ƒ ATK factor (FUN_11428ac0) = match(+0x1c) * mode(+0x20) * global(+0x2c) * mode(+0x2c)
- ƒ *(param_1+0x30c) = mode(+0x20) * global(+0x2c) * mode(+0x2c)
- ƒ extra (FUN_1025afc0) = match(+0x4c) * mode(+0x20) * normalTable(+0x14) * mode(+0x2c), with normalTable = FUN_117cdd70(0,0,'Normal')
- ƒ additional per-type factors from FUN_114270b0/11427190/11427270 * local_34(+0xc/+0x8/+0x4) and level(+0x78)(+0x11c/+0x120/+0x118)

### CSPAnalyst::SerializeSessionStats `@1109d790` — level-stats-telemetry
*Serializes single-player analyst/telemetry block 'SPAnalyst': writes levelStartTime(param_1+0x20), gameStartTime(param_1+0x28), then a nested record with kills(param_1+0x18) and deaths(param_1+0x1c).* (server: client-only telemetry serialization (values may originate from gameplay; not itself authoritative), conf medium)
- ƒ struct offsets: +0x18 kills, +0x1c deaths, +0x20 levelStartTime, +0x28 gameStartTime

### CTaskLevelFinishContentDef::ctor `@1177ff70` — level-finish-def
*Constructor for a 'TaskLevelFinishContentDef' object: initializes an intrusive linked-list head (self-links +0x10 and +0x14 to self) and binds the type name.* (server: unknown (data definition container), conf medium)
- ƒ +0x10 = self, +0x14 = self (empty list sentinels)

### CTaskLevelFinishContentDef::ctor_dup `@11781c50` — level-finish-def
*Identical constructor to FUN_1177ff70 for 'TaskLevelFinishContentDef' (self-linking list head + type name bind). Duplicate/second instantiation.* (server: unknown (data definition container), conf medium)
- ƒ +0x10 = self, +0x14 = self

### thunk_FUN_1142c9f0 `@1142ca4b` — level-mode-scaling
*Thunk/wrapper: LOCK/UNLOCK barrier, FUN_123f16d9(0x52d754f8) (likely SEH/stack-guard or TLS token), then tail-calls FUN_1142c9f0. Header lists CMonsterLevelMatch/CDamageDampingInfo but body is just the wrapper.* (server: unknown (wrapper), conf low)
- ƒ constant 0x52d754f8 passed to FUN_123f16d9


## ui  (8)

### CEquipForgeUI_RegisterHandlers `@0x1052ce50` — ui/equip-forge (client)
*Initializes the Equipment Forge / avatar-preview UI panel (WeaponUIConfig::LoadFromXml) and registers its Flash event handlers: InitModel, onBtn_Left/Right/Near/Reset/Down, OnClose, SetAvatarFrameData, Reset/ClearEquip, onCommonShowItem/onShowItem/onShowItemWithColor, C2AS_SetBodyType/SetPoseType, OnCheckPackType, OnShowPackAvatars, OnCheckAvatarWndPos, onMoveLeft/Right, onShowEquipItemInstance.* (server: client-only: equip/avatar preview UI (CEquipForgeUI::OnPanelActivate). Not authoritative., conf medium)
- ƒ panel flag: *(param_1+0x424)=1; existing model released if bit6 of *(param_1+0x424) set

### CreateRoleUI_RegisterHandlers `@0x1084a130` — ui/create-role (client)
*Initializes the character create/select UI panel and registers its full Flash handler table: InitModel, FaceEditing, AvatarSubId, SexSelected, Return, CreateRole(Ok/ClickOK), SelectRoleMode, DeleteRole(_OK/_No), StartGame, ColorSelected, AvatarTypeSelected, DoRefresh, SelectedRole, RoleNumError, ResetFace, ReturnRoleList, ChangeFaceMode, ReqGotoChangeFaceRole, ShowNewSimpleDialogById, LineFullMessageBoxOK, CreatRoleNameInput OK/Cancel, LobbyExit Yes/No, AutoConfigSystemPreference OK/NO, etc.; sets default panel state fields.* (server: client-only: character creation/selection UI binding. Names like CreateRole/DeleteRole/StartGame/LineFullMessageBox map to server flows (role CRUD, line-full rejection) worth documenting server-side, but this function itself is UI wiring., conf medium)
- ƒ init state: param_1[0x48]=1; [0x49]=1; [8]=0; [9]=1; [10]=1; [0xc]=1; [0x14]=0; [0x46]=0xffffffff; DAT_123bba2c=0xffffffff; DAT_123bba28=0

### Flash_ReadInstanceChannelNumber `@0x107ccd30` — ui/instance (client)
*Reads the 'instanceChannelNumber' variable from a Flash object into an out u64 (param_2); handles TDR-style variant tag (wire types 0x8f mask: 10=object arg, 5=number).* (server: client-only: Flash variable read (instance channel/line number for display)., conf medium)
- ƒ presence: ((byte)param_1[1] & 0x8f)==10 flag passed to getter
- ƒ if ((local_24 & 0x8f)==5) out = CONCAT44(hi,lo) else out=0

### Lobby_ClearNewLobbyActiveGreyImg `@0x104fb080` — ui/lobby (client)
*Clears the 'GreyImg_Active' flag on a HUD element and fetches/refcounts the 'NewLobby' Flash movie clip, then invokes its vtbl+0x64(0).* (server: client-only: Flash/Scaleform UI lobby plumbing., conf medium)
- ƒ refcount dec pattern on Flash clip (piVar3[1]--, then [2] on zero)

### Lobby_EnableCreateRoleView `@0x108394b0` — ui/lobby (client)
*When in lobby state (FUN_10bac530()==2), sets _root.EnableCreateRoleView on the 'NewLobby' Flash clip to enable the character-creation view.* (server: client-only: Flash lobby UI toggle., conf medium)
- ƒ gate: FUN_10bac530()==2

### NewLobby_RegisterUiEventHandlers `@0x10509470` — ui/lobby (client)
*Registers a large set of Flash UI event->handler callbacks for the New Lobby: Dialog_LinkClick, GuideUIStepComplete, WinModelChange, EnableAction, GamepadUIFocus, QuickSpeakModeFocus, RelaySvrOk/Cancel, ReloadUIInfo, onLimitUnlockFunc, OpenSafeModeUrl/SensitiveUrl/BangBangWnd, ReqChangeLineToTeamLeader, ReqChangeTownInstance, ReqLeaveFarm, ReqLeaveCamp, OpenXianYouWnd, InitModel, (Un)LoadSwfNotify.* (server: client-only: UI event binding table. However the event names name real client->server requests (ReqChangeTownInstance, ReqChangeLineToTeamLeader, ReqLeaveFarm, ReqLeaveCamp) => hub/instance-change flows to document server-side., conf medium)

### NewLobby_Tick `@0x1050adc0` — ui/lobby (client)
*Per-frame lobby update: expires a countdown timer at +0x24 vs current time and calls FUN_1050ba30 when elapsed; when in town game-state (FUN_10bac530()==3) resolves the NewLobby Flash clip; conditionally runs FUN_1050af30/FUN_1050b060.* (server: client-only: UI tick / Flash clip management., conf medium)
- ƒ timer: if *(float*)(param_1+0x24) > 0 and now >= that value => *(param_1+0x24)=0; FUN_1050ba30()
- ƒ game-state gate: FUN_10bac530() == 3 (town)

### Settings_InitAudioVideoAndLobbyState `@0x10838500` — ui/settings (client)
*Caches CVar handles (s_SFXVolume, s_FmodMusicVolume, r_colorchart_Gamma2, g_npc_language), reads their values, pushes an audio-state UI event (id 0x62), and if in lobby state (FUN_10bac530()==2) enables the create-role view in the 'NewLobby' Flash via _root.EnableCreateRoleView.* (server: client-only: local settings + Flash lobby setup., conf low)
- ƒ sfxVol*DAT_11de9a30, musicVol*DAT_11de9a30; mute flags: vol<=0.0
- ƒ lobby gate: FUN_10bac530()==2


## matchmaking  (3)

### BattlegroundUI::RegisterIsPlayerInBattleGround `@1085f760` — matchmaking
*Registers Flash script handler 'function_IsPlayerInBattleGround' -> FUN_1085f7f0. Standard single-variant refcount wrapper.* (server: client-only, conf high)

### CLevelWeightDef::ParseXML `@11a56660` — matchmaking-level-select
*Parses a weighted level-selection table entry from XML. Reads wide attrs: 'TypeID'(int)->this+0x10, 'LevelMode'(int)->this+0x14, 'LevelMin'(int)->this+0x18, 'LevelMax'(int)->this+0x1c, 'Weighted'(int)->this+0x20. Used for random/weighted level pick within a player level range.* (server: authoritative-mirror (weighted random level selection by player level; server should own RNG/selection), conf high)
- ƒ offsets: +0x10 TypeID, +0x14 LevelMode, +0x18 LevelMin, +0x1c LevelMax, +0x20 Weighted (selection weight); entry active when LevelMin <= playerLevel <= LevelMax

### CLobbyController::ShowServerLineSelect `@10851510` — matchmaking
*If FUN_10bac530()==3 (some connection/scene state) dispatches game message opcode 0x1e (30) with payload {0x57,1,0,0} (0x57=87 sub-command). Otherwise opens _root.ShowServerLine on NewLobby (server-line/channel picker UI).* (server: client-only, conf medium)
- ƒ state gate: FUN_10bac530()==3
- ƒ message opcode 0x1e (30), sub-cmd 0x57 (87)


## settlement  (3)

### SettlementUI::BuildDropRewardVO `@108e7140` — settlement
*Builds reward VOs from an instance's drop/loot record. Matches a loot entry by id (iStack_ac) in a list at instance+0x140 (stride 0xd ints), then iterates item collections (vtbl+0x28 count, +0x30 getAt) emitting per-item VOs: m_strName(DAT_11dbac80 item+0x14), asset(item+0xb4), itemId(DAT_11dbb0b4), count=1, quality(DAT_11dca14c item+0x34), m_nItemLevel(item+0x40), m_typeNormal(+0x38), m_typeSub(+0x3c), instanceChannel=0. For channel items sets instanceChannelType=7 and instanceChannelNumber = channel*100 + index (via __allmul by 100).* (server: authoritative, conf low)
- ƒ instanceChannelNumber = channel * 100 + index (via __allmul(hi,lo,100,0) + index)
- ƒ instanceChannelType = 7 (drop-channel)
- ƒ loot list at instance+0x140 vtbl+8, entries stride 0xd ints, match on entry[0]==lootId, payload at entry+7
- ƒ item offsets same as 108a15e0: +0x14/+0x34/+0x38/+0x3c/+0x40/+0xb4

### SettlementUI::BuildPackItemArrayVO `@108a15e0` — settlement
*Builds an itemArray VO for the settlement/pack-item screen. Iterates a source item container (piVar4[0x983b] slot list, stride 0xc: [0]=item id,[1]=count) resolving each via FUN_10254130 and emitting a PACKITEM_CLASS_NAME VO with fields: DAT_11dbb0b4(itemId), count, m_strName(DAT_11dbac80 from item+0x14), asset(item+0xb4), quality(DAT_11dca14c=item+0x34), m_nItemLevel(item+0x40), m_typeNormal(item+0x38), m_typeSub(item+0x3c), m_nBindType, m_nExpireTime(item+0xb8), m_nRareType(item+0x4c). Second loop over a pointer array (stride 4) emits similar VOs and sets instanceChannel=1 / instanceChannelType=8 for those. Also scans a proc list (stride 0x114) for type 0xbc9 to set 'Param2'.* (server: authoritative, conf medium)
- ƒ item struct offsets: +0x14 name, +0x34 quality, +0x38 typeNormal, +0x3c typeSub, +0x40 itemLevel, +0x4c rareType, +0xb4 asset, +0xb8 expireTime
- ƒ source slot stride 0xc (id,count,extra); count = elements/0xc
- ƒ instanceChannelType = 8 (pack-item channel)
- ƒ proc scan: entry+4 == 0xbc9 (3017) -> Param2 = entry+0xfc, stride 0x114

### SettlementUI::BuildSettlementItemListVO `@108e6190` — settlement
*Builds an 'itemList' VO of exactly 10 entries for the FL_SETTLEMENT_ITEM_VO_CLASS_NAME class. Guarded by instance record present (ctx+0xd0->+0x90->+0xb4), a settlement-active check (ctx+0xd0 vtbl+0x16c) and record+0x2d1c!=0. Copies a 0x2d9-byte item-id/count array onto the stack, then loops i=0..9 resolving each item id (auStack_bf[i]) via FUN_10254130, setting ItemID, count(DAT_11dbdc0c=auStack_97[i]), itemIconPathName(item+0xb4). Sets out variant bool=1.* (server: authoritative, conf medium)
- ƒ fixed loop count 10 (settlement item slots)
- ƒ item icon = item+0xb4
- ƒ gate: settlement active (ctx+0xd0 vtbl+0x16c) && record+0x2d1c != 0


## pvp  (3)

### AttackSettlementController::RegisterScriptHandlers `@10980ce0` — pvp-settlement
*Registers 'C2AS' (Client-to-AttackSettlement) Flash handlers: InitModel, C2AS_GetPlayerScoreData->FUN_10981130, C2AS_GetSettlementData->FUN_109811a0, C2AS_Refresh->IpvpSettlementDataVO::Build, C2AS_GetAttackInfoPlayerData->FUN_10981dc0, plus IpvpAttackInfoPlayerDataVO::Build and C2AS_IsMartDisable->FUN_10981f70. Then subscribes 3 game events via FUN_10d17440/FUN_10982300/2350/23a0.* (server: client-only, conf high)

### CGlobalCfg_PvpGroupSettlementTime::ctor `@11741590` — pvp-settlement
*Constructs a global-config accessor object bound to key 'PvpGroupSettlementTime' (sets vtable PTR_FUN_11d4528c). Reads a PvP group-settlement time value from config. NOTE: ends in FUN_10c3d580(0x24) marked 'does not return' — this is the string-temp destructor tail, a decompiler artifact.* (server: validation/config (settlement timing; likely server-authoritative timer), conf medium)

### PvpGroupUI::RegisterHandlers `@10929ea0` — pvp-settlement
*Registers PvP group/settlement Flash handlers: _PVPGetGroupData->FUN_1092a5a0, _PVPQuitGroupSettlementUI->FUN_1092ab00, _IsPvpOver->FUN_1092abc0. Gated on ctx+0x58 (PvP subsystem) present.* (server: client-only, conf high)


## tutorial  (2)

### CFlowNode_WeaponTutorial::GetConfiguration `@10eabda0` — tutorial-flownode
*One-time static init of flowgraph node ports for the weapon-tutorial node. Input ports: 'Success' plus name1..name16 (type 5=string) each paired with type1..type16 (type 1=int), and teach-ID ports: maleTeachID, femaleTeachID, selWeaponID, quitTeachID, baseTeachID, advanceTeachID, backTeachID, nextTeachID, doTeachID, previewTeachID, currentPlayerWeaponType, EnterLevelTeachID, SelectWeaponTeachID, QuitLessonTeachID.* (server: client-only (tutorial UI flowgraph), conf high)
- ƒ port type constants: name* = 5 (string), type* = 1 (int); 'Success' output type 6
- ƒ 16 name/type pairs (name1..name16)

### CWeaponTutorialConfig::LoadFromXML `@10ead340` — tutorial-config
*Loads 'Libs/LevelXML/WeaponTutorialV2.xml'. Reads root 'WeaponTutorial' attrs into this: MaleTeachID(+0x28), WeaponTutorialTaskID(+0x58), FemaleTeachID(+0x2c), EnterLevelTeachID(+0x5c), SelectWeaponTeachID(+0x60), QuitLessonTeachID(+0x64). Iterates child 'TextMessageInfo' nodes (count vtbl+0xa0) building a linked list. Then 'selWeaponID' block reads selWeaponID(+0x30), quitTeachID(+0x34), baseTeachID(+0x38), advanceTeachID(+0x3c), backTeachID(+0x40), nextTeachID(+0x44), doTeachID(+0x48), previewTeachID(+0x4c), and stores an ID at +0x50 from FUN_10eacf00->vtbl+0x294. Returns 1 on full success else 0.* (server: client-only (tutorial content config), conf high)
- ƒ struct offsets written: +0x28 MaleTeachID, +0x2c FemaleTeachID, +0x30 selWeaponID, +0x34 quitTeachID, +0x38 baseTeachID, +0x3c advanceTeachID, +0x40 backTeachID, +0x44 nextTeachID, +0x48 doTeachID, +0x4c previewTeachID, +0x50 (weapon obj id), +0x58 WeaponTutorialTaskID, +0x5c EnterLevelTeachID, +0x60 SelectWeaponTeachID, +0x64 QuitLessonTeachID


## party  (2)

### CGlobalCfg_MinTeamMemberNum::ctor `@117d6590` — party-team
*Constructs a global-config accessor bound to key 'MinTeamMemberNum' (vtable PTR_FUN_11d4a00c). Minimum party size required to enter/matchmake. Tail FUN_10c3d580(0x24) is string-temp dtor artifact.* (server: validation (minimum team size gate; server enforces), conf medium)

### CTeamConfig::ReadTeamMemberCount `@11785e60` — party-team
*Reads config field 'TeamMemberCount' (via FUN_118a6e70 lookup, FUN_118a68e0 fetch) into this+4. Party/team size for a level or matchmaking config.* (server: validation (team-size rule; server enforces), conf medium)
- ƒ *(this+4) = config['TeamMemberCount']


## ai  (1)

### BehaviorTree_DumpResourceStats `@0x1047cee0` — ai/behavior-tree (engine)
*Debug/stats dump walking Behavior-Tree resources: reports 'BT Res', 'Template BT Tree/Nodes', and iterates an rb-tree of 'Instanced BT Tree/Nodes' calling FUN_1047ce00 per node.* (server: client-only: stock CryEngine AI behavior-tree resource stat reporting. Not gameplay-authoritative., conf medium)
- ƒ instance tree base at param_1+0x48; rb-tree traversal via node fields +0x4(parent)/+0xc(left)/+0x8/+0x14
- ƒ template node ptr at *(param_1+0x44)+0xc when type *(param_1+0x44)+4 == 1


## shop  (1)

### Flash_BuildShopSaleItemDataArray `@0x1083fb60` — shop/backpack (client)
*Builds the 'shopSaleItemDataArray' of SALE_ITEM_DATA AS3 objects for a backpack/shop panel: iterates backpack item container, and per item emits ItemId, ItemNum, price, level/rank requirement, name, bind state, transmogrify id, required sex, pack tag, and current bind/unbound money.* (server: client-only display builder; the authoritative price (FUN_114b7130) and money balances (FUN_1025b060) originate server/config-side. Server must recompute price and validate funds on purchase., conf low)
- ƒ per item: SaleItemId, ItemId(FUN_11669730), salesCount, ItemNum(vtbl+0xc), backItemIndex, backItemBind, backItemTransmogrifyItemId (item[0x7d] if FUN_116698a0), backItemRequireSex (*(base+0xfc)), factItemLevel(vtbl+0x18), factRankLevel
- ƒ itemPrice via FUN_114b7130(itemDef, count) when itemDef!=0 else 0; needPlayerLevel = *(itemDef+0xc8)
- ƒ currentBindMoney/currentMoney via FUN_1025b060 (two currency reads)


## engine  (1)

### HitDeathReactions::SerializeInstances `@10c75530` — engine-plumbing
*Serialization visitor: opens node 'HitDeathReactionsSystem', serializes a value tagged 0xa4c (2636) via FUN_10c7a8c0, opens 'HitDeathReactionInstances', enumerates all entities from the entity system (DAT_120286c8) and for each whose vtbl+0x1ec returns 1 pulls a HitDeathReaction component (entity[0x796]/[0x797]) and serializes it (FUN_10c6d660), with CryEngine smart-ptr refcounting.* (server: client-only, conf medium)
- ƒ tag id 0xa4c (2636)
- ƒ component ptrs at entity[0x796]/entity[0x797]


## startup  (1)

### CGameStartup::HideSplashShowLobby `@10d6b8e0` — startup-splash
*Startup/splash->lobby transition. If not already done (DAT_1202e818+0x209==0): unless cvar 'r_hidewindowuntilelobby' is set, destroys splash window and Show/Focus/Foreground game window; caches cvar 'e_SplashHideMouseTime' float into param_1+0x2c (ptr at +0x28, +0x30=0, flag +0x24=1). If param_1+0x25==0, hides FlashUI 'BottomAnnounce' and 'WaterPrint' widgets (vtbl+100(1)) and calls FUN_10b6a400.* (server: client-only (window/cvar/UI startup plumbing), conf medium)
- ƒ *(param_1+0x2c) = (float)cvar('e_SplashHideMouseTime')->vtbl+0xc()
- ƒ *(param_1+0x24)=1 (splash-hidden flag)


## video  (1)

### CFlowNode_VideoPlayer::GetConfiguration `@10eb85d0` — video-flownode
*One-time static init of flowgraph video/cutscene node ports. Inputs: (2 leading unnamed play/stop trigger ports), 'Pause', 'Resume', 'InstanceID'(int, default -1), 'VideoFile'(string), 'Transparent'(bool default 0), an unnamed bool, 'Skipable'(bool default 1), 'AudioChannel'(int 0), 'SubtitleChannel'(int 0). Outputs: 'OnPlay','OnStop','OnPause','OnResume','OnLooped','OnVideoNotFound'.* (server: client-only (cutscene playback UI), conf high)
- ƒ defaults: InstanceID = -1 (0xffffffff), Transparent = 0, Skipable = 1, AudioChannel = 0, SubtitleChannel = 0
- ƒ config flag param_1[2] = &0xfffff02f \| 0x20


## battle  (1)

### CBattlePunishLevelModeFilterInfo::GetIdByIndex `@11a732b0` — battle-punish
*Array accessor into CBattlePunishLevelModeFilterInfo id list: bounds-checks index against (mgr+0x18 - mgr+0x14)>>2 and returns id at mgr+0x14 + index*4, else 0. Governs which level modes apply battle-punish (e.g., death/desertion penalty) filtering.* (server: validation (which modes trigger battle-punish; server enforces penalties), conf medium)
- ƒ count = (mgr(+0x18) - mgr(+0x14)) >> 2; return mgr(+0x14)[index] if in range else 0
