# MHO Items / Inventory / Equipment — Round 10

104 functions from CryGame.dll.


## items  (94)

### CActor::GetOrAcquireInventoryExtension `@0x10a50d10` — items/gameobject-inventory
*Lazily acquires the 'Inventory' game-object extension (mode 2 = acquire) for an actor and caches it at +0x3c. CryEngine plumbing.* (server: client-only, conf high)
- ƒ if (this+0x3c)==0: this+0x3c = IGameObject::AcquireExtension('Inventory', 2); return this+0x3c

### CActor::ReleaseInventoryInteractorSlots `@0x10a64f90` — items/gameobject-inventory
*Releases the 'Inventory' (+0x3c) and 'Interactor' (+0x40) game-object extension slots (mode 3 = release) and clears the cached handles. CryEngine plumbing.* (server: client-only, conf high)
- ƒ if (this+0x3c): ReleaseExtension('Inventory',3); this+0x3c=0
- ƒ if (this+0x40): ReleaseExtension('Interactor',3); this+0x40=0

### CEatState::OnAnimEvent_PLUseItem `@10f7fad0` — items/use
*On "PLUseItem" anim event, plays the "PLBaseSignal"/"EatSatisfy" animation signal (eating/consumable satisfy animation).* (server: client-only, conf medium)
- ƒ if event name == "PLUseItem": call anim vtbl+0x600("PLBaseSignal","EatSatisfy")

### CExpandInventorySlotInfo::GetRecordById `@0x108aca50` — items/inventory-expansion
*Config-table lookup for CExpandInventorySlotInfo (bag-slot expansion tiers/costs) by id. Defines how bag capacity can be expanded. Same 2D-array pattern.* (server: client-only config read; expansion costs/limits are authoritative content, conf high)
- ƒ id -= mgr[0x30]; valid iff 0<=id<mgr[0x24] && mgr[0x28]!=0; row=mgr[0x20][id/mgr[0x28]]; return row[id%mgr[0x28]]
- $ Row content (not read here) holds inventory-slot expansion cost/limit per tier

### CExpandStoreHouseSlotInfo::GetRecordById `@0x108ad830` — items/storehouse-expansion
*Config-table lookup for CExpandStoreHouseSlotInfo (storehouse-slot expansion tiers/costs) by id; identical 2D-array pattern.* (server: client-only config read; storehouse expansion costs/limits are authoritative content, conf high)
- ƒ id -= mgr[0x30]; valid iff 0<=id<mgr[0x24] && mgr[0x28]!=0; row=mgr[0x20][id/mgr[0x28]]; return row[id%mgr[0x28]]
- $ Row content holds storehouse-slot expansion cost/limit per tier

### CFGModuleOnUseItem::GetManagers `@116ffe40` — items/use-config
*Singleton CInfoManager accessor for the CFGModuleOnUseItem static config (on-use-item behavior module). Lazily registers the manager and returns it (or a default sentinel if not found).* (server: client-only, conf high)
- ƒ one-time RegisterAndGetSingleton("CFGModuleOnUseItem::GetManagers") guarded by DAT_1238eca8 bit 1; fallback sentinel &DAT_1238ee0c

### CFGModuleOnUseItem::GetRecordByIndex `@117045f0` — items/use-config
*Indexed lookup into the CFGModuleOnUseItem config table (2D paged pattern) to fetch the on-use behavior record for an item/module index.* (server: validation, conf high)
- ƒ same 2D paged lookup against CFGModuleOnUseItem::GetManagers

### CFGModuleOnUseItem::GetSingleton `@11704bb0` — items/use-config
*Inlined-duplicate singleton accessor for CFGModuleOnUseItem: returns the registered manager pointer (*DAT_1238ec8c) when param==0, else 0.* (server: client-only, conf high)
- ƒ one-time RegisterAndGetSingleton guarded by DAT_1238eca8 bit 1; returns *DAT_1238ec8c

### CGamePadItemBar::MapActionToUICode `@10c96130` — items/input
*Gamepad/action-name dispatcher for the quick-item/radial bar. Only runs when FUN_10bac530()==3 (some UI/game mode ==3) and param_3==1 (key-down). Compares the incoming action string (*param_2) and a long chain of IsActionActive checks (FUN_10b73690) against named bindings and produces a small UI opcode, then posts UI event 0x33 with a payload {code, 0xffffffff, 9999}.* (server: client-only, conf high)
- ƒ guard: FUN_10bac530() must == 3 else return 1; param_3 must == 1 (key-down) else return 1
- ƒ direct _stricmp map: "GP_moveleft"->100(0x64), "GP_moveright"->0x65, "GP_moveup"->0x66
- ƒ FUN_10b73690 (action-active test) chain assigns codes: GP_movedown->0x67; *_Quick left/right/up/down->0x74/0x75/0x76/0x77; *_Focus->0x78/0x7c/0x7d/0x7e; *_Bullet(down)->0x7f..; DAT_11ccddb4->0x68; GP_useitem/1/2->0x69/0x6a/0x6b; DAT_11ccdde4->0x6c (also calls FUN_10c95210(0,param_2,0,0)); ui_unGamePad_start->0x71; ui_unGamePad_back->0x72? ; GP_lb->0x6d; GP_lt->0x6e; GP_close->0x73; GP_open->0x72; GP_rb->0x6f; GP_rt->0x70 (via -(uint)(cVar!=0)&0x70)
- ƒ final: local_c=code; post UI msg id 0x33 with &{local_10=9999, local_8=0xffffffff, local_c} via vtbl+4 of FUN_10d17870()

### CHunterGroupInventoryUI::RefreshRights `@0x108b2440` — items/guild-inventory-ui
*Populates the hunter-group (guild) shared-inventory UI VO: inHunterGroup flag, m_Fund, inventoryRight array (7 rights entries), isHunterLeader, title, m_leaderName, and registers updataSelfCallBack. Only builds detailed fields when player is in a hunter group.* (server: client-only (UI); the rights/fund values are server-authoritative and merely displayed, conf medium)
- ƒ inHunterGroup = vtbl+8 call (bool)
- ƒ m_Fund = FUN_114a8610(); rights = *(FUN_114b0f80()+0x20)
- ƒ inventoryRight[] loop i in 0..6 (7 entries): value = FUN_116294f0() wrapped as VO type 3
- ƒ isHunterLeader = FUN_114b0f90(); title = *(FUN_114b0f80()+4)
- $ inventoryRight has exactly 7 permission entries (loop < 7)

### CInventoryUIController::RegisterCommandHandlers `@0x10944780` — items/inventory-ui
*Registers the inventory UI command handlers (GetDataInit, SwapInventoryItem, SplitInventoryItem, TidyInventoryItem, RightClickItem, DiscardInventoryItem, InterSwapItem, TidyAllInventoryItem, MoveOutItem, EditTabName), binding each command string to a handler function pointer (FUN_10944dc0, FUN_10944f40, ...).* (server: client-only (UI command routing); the operations map to server-authoritative requests, conf high)
- ƒ handler bindings: SwapInventoryItem->FUN_10944dc0, SplitInventoryItem->FUN_10944f40, TidyInventoryItem->FUN_109450b0, RightClickItem->FUN_10945160, DiscardInventoryItem->FUN_10945280, InterSwapItem->FUN_10945350, TidyAllInventoryItem->FUN_10945060, MoveOutItem->FUN_10944be0, EditTabName->FUN_10944aa0

### CItemBoxGroupInfo::GetRecordById `@0x1052c6a0` — items/config-table
*Config-table row lookup for CItemBoxGroupInfo (item-box group definitions) by id; identical 2D-array pattern to FUN_1052c520.* (server: client-only config read, conf high)
- ƒ id -= mgr[0x30]; valid iff 0<=id<mgr[0x24] && mgr[0x28]!=0; row=mgr[0x20][id/mgr[0x28]]; return row[id%mgr[0x28]]

### CItemBoxGroupInfo::GetRecordByIndex `@11923ca0` — items/itembox
*Flat-array indexed lookup into CItemBoxGroupInfo (loot/reward box group table). Bounds-checks against ((+0x18)-(+0x14))>>2 element count and returns record pointer.* (server: validation, conf high)
- ƒ mgr = FUN_1053b200(0,"CItemBoxGroupInfo",0)
- ƒ count = (*(mgr+0x18) - *(mgr+0x14)) >> 2; if 0<=idx<count return *(*(mgr+0x14)+idx*4)

### CItemBoxInfo::GetRecordById `@0x1052c520` — items/config-table
*Config-table row lookup for CItemBoxInfo (item-box/loot-box definitions) by record id. Standard CInfoManager 2D-array lookup: resolves the singleton manager (lazily creating a default if FindByName fails), then indexes.* (server: client-only config read; the data table itself is authoritative content shared with server, conf high)
- ƒ mgr = *CItemBoxInfo::GetInfoManager(); if null -> CInfoManager::FindByName('CItemBoxInfo') else default &DAT_123be650
- ƒ id -= mgr[0x30] (base id); valid iff id>=0 && id<mgr[0x24] (count) && mgr[0x28] (stride)!=0
- ƒ row = mgr[0x20][id / mgr[0x28]]; return row[id % mgr[0x28]]  (chunked 2D storage)

### CItemBoxInfo::GetRecordByIndex `@11924470` — items/itembox
*Flat-array indexed lookup into CItemBoxInfo (item-box/container definition table). Same contiguous-array bounds check as CItemBoxGroupInfo.* (server: validation, conf high)
- ƒ mgr = CItemBoxInfo::GetInfoManager(0,"CItemBoxInfo",0)
- ƒ count = (*(mgr+0x18)-*(mgr+0x14))>>2; if 0<=idx<count return *(*(mgr+0x14)+idx*4)

### CItemColumnInfo::GetRecordByIndex `@11230460` — items/inventory-config
*Indexed lookup into the CItemColumnInfo static config table (bag column/slot layout) using the standard CInfoManager 2D paged-table pattern. Returns the record pointer for a given column/slot index, or 0.* (server: validation, conf high)
- ƒ mgr = CItemColumnInfo::GetInfoManager(0,"CItemColumnInfo",0)
- ƒ validate: idx!=-1; (idx!=0 \|\| baseId(+0x30)==0); pageSize(+0x28)!=0; idx-=baseId; 0<=idx<count(+0x24)
- ƒ row = *(table(+0x20) + (idx/pageSize)*4); return *(row + (idx%pageSize)*4)

### CItemColumnUI::OnSlotOperationRequest `@11231b60` — items/inventory
*Handles an item-bag column/slot operation from the UI and sends the request to the server. Input param_1 is a packed struct {col: byte@0, grid/pos: uint16@1, action: byte@3}. Validates the column against CItemColumnInfo, resolves the live item at that column (FUN_113ffac0), and emits two client->server messages carrying item id/count/position.* (server: validation, conf medium)
- ƒ col = param_1[0]; grid = *(uint16*)(param_1+1); action = param_1[3]
- ƒ column validation identical to CItemColumnInfo::GetRecordByIndex (2D paged lookup), then require slot cell !=0 and live item FUN_113ffac0(col)!=0
- ƒ if action==1: FUN_11460dc0(grid)
- ƒ build payload local_28={col, id=item->vtbl+0x38(), count=item->vtbl+0x34(), pos=item->vtbl+0x3c(&x,&y)}
- ƒ send message 0x78 (120) with &local_28; send message 0x20a (522) with {col}
- $ network opcode 0x78 (120) = item-column slot detail
- $ network opcode 0x20a (522) = item-column select/use by index

### CItemColumnUI::SerializeOpenWidgetMessage `@10d2d3b0` — items/inventory-ui
*Serializes an item-column widget-open request into a network/UI message object and posts it as message 0x51 (81). Reads a 5-element param_2 array and writes named typed fields into a serializer obtained from vtbl+0x30 of the channel at +0x58.* (server: validation, conf medium)
- ƒ field writes via serializer vtbl+0x18(name,&type,0): "m_nOpenWidgetID"=(int)(float)param_2[0] type4; "m_nItemColumn"=(int)(float)param_2[1] type4; "m_nItemGrid"=(int)(float)param_2[2] type4; "m_nSelectItemID"=(int)(float)param_2[3] type4; "m_bUpdateProcess"=(char)param_2[4] type2
- ƒ guarded by two empty-list checks at *(param_1+0xac)+0x8e0 and +0x8e8
- ƒ posts message via FUN_10d1d220(*(param_1+0x58), 0x51, &local_18, &local_28)
- $ message opcode 0x51 (81)
- $ serializer type tags: 4=int32, 2=bool/byte

### CItemContainer::TdrTextFormat `@0x102ce8a0` — items/inventory-container
*TDR text (human-readable) serializer for the full player item-container struct: store sizes, bag/equip/storehouse item blobs, and the item-use-once list. Iterates each variable-length array formatting one byte per element (via FUN_1010c010). This is the single most important struct in the chunk because it embeds every container capacity cap.* (server: validation - client-side TdrText formatter, but the array-size caps it enforces mirror the authoritative TDR schema bounds the server MUST enforce when parsing the binary container. Rebuild server should reject packets exceeding these caps., conf high)
- ƒ field [wStoreSize] = u16 @ *param_1 (offset 0)
- ƒ field [wNormalSize] = u16 @ param_1[1] (offset 2)
- ƒ field [wMaterialStoreSize] = u16 @ param_1[2] (offset 4)
- ƒ field [iBagSize] = int @ *(param_1+3) (offset 6); if iBagSize < 0 return -6; if iBagSize > 82000 return -7
- ƒ [szBagItem] = byte[iBagSize] starting at (int)param_1 + 10 (offset 0xa), one byte per element
- ƒ field [wEquipSize] = u16 @ param_1[0xa02d] (offset 0x1405a); if wEquipSize > 0x1000 (4096) return -7
- ƒ [szEquipItem] = byte[wEquipSize] starting at (int)param_1 + 0x1405c
- ƒ field [iStoreDataSize] = int @ *(param_1+0xa82e) (offset 0x1505c); if iStoreDataSize < 0 return -6; if iStoreDataSize > 200000 return -7
- ƒ [szStoreItem] = byte[iStoreDataSize] starting at (int)param_1 + 0x15060
- ƒ field [wItemUseOnceCount] = u16 @ param_1[0x22ed0] (offset 0x45da0); if wItemUseOnceCount > 200 return -7
- ƒ [itemUseOnceList] = u16[wItemUseOnceCount] starting at param_1[0x22ed1] (offset 0x45da2)
- $ Bag raw-data size cap: 82000 bytes
- $ Equipment raw-data size cap: 0x1000 = 4096 bytes
- $ Storehouse raw-data size cap: 200000 bytes
- $ Item-use-once list cap: 200 entries
- $ TDR error codes: -6 = negative/invalid size, -7 = array size exceeds max

### CItemUseHandler::HandleSpecialUseItem `@0x10924ee0` — items/use
*Dispatch for special client-side item-use actions keyed by an item action code (0x44, 0xee, 0x7f, 0x10f, 0xf5): checks group/quest/wardrobe preconditions and either shows an error dialog (FUN_104ef270 with code) or grants an activity reward (GrantActivityReward) / enters wardrobe. Includes NORMAL_IDLE_WARDROBE gate.* (server: client-only (precondition UI gating); actual reward grant is a server request, conf low)
- ƒ only runs when in_stack_00000014 == 1 and (state&0x8f) in {3,4}
- ƒ action 0x44: needs group leader; if group fund count>0 -> GrantActivityReward(0xca7); else error code 0x43
- ƒ action 0xee: wardrobe check -> GrantActivityReward(0x1bd9) else FUN_105eb980
- ƒ action 0x7f: group check; fund>0 -> reward 0xca7; else -> reward 0x74f
- ƒ action 0x9f4/0x1373/0x1376: wardrobe/idle-anim gated activity rewards
- ƒ default error id = -0x21524151 (sentinel 0xDEADBEAF-like)
- $ Activity reward IDs: 0xca7, 0x1bd9, 0x74f, 0x9f4, 0x1373, 0x1376

### CItemUseInteraction::TryUseOnTarget `@0x10b25320` — items/use-interaction
*Validates a use-item-on-world-target interaction: reads ItemID from the interaction params, checks the target object is the expected type (==2) and shares the same class id (vtbl+0x88) as the actor's inventory-held object, then flags ItemUsed and triggers the use (FUN_1025bd00 / FUN_10262a50). Returns 0 on success, 0xffffffff on failure.* (server: validation - client-side pre-check before firing a server use request, conf low)
- ƒ requires *param_2 == 0x3ff (interaction type) and ItemID (local_8) != -1
- ƒ target type check: obj->vtbl(0xa8) must == 2 else reject
- ƒ class match: actor-inventory obj->vtbl(0x88) == target obj->vtbl(0x88) required
- ƒ reads 'ItemID' param, writes 'ItemUsed' flag
- $ interaction type constant 0x3ff

### CPetEquipUI::RefreshPetEquipsUI `@0x10515860` — items/pet-equipment-ui
*Builds the pet-equipment list VO array and pushes it to Flash/Scaleform UI. For each equip slot record (0x40-byte stride) fills asset, collumn, m_bUseItem, isBind, m_nBindType, then calls RefreshPetEquipsUI on the UI.* (server: client-only (UI rendering), conf medium)
- ƒ per-record stride = 0x40 bytes (piVar3 += 0x10 dwords)
- ƒ asset = rec[0xb]; collumn = rec[2]; m_bUseItem = (rec[0xd] > 0); bindType field(0x11dbfe78) = rec[1]; isBind = (char)rec[0xe]; m_nBindType = rec[0xf]

### CPlayer::IsInWardrobeInteractableAnimState `@0x10bf76e0` — items/wardrobe
*Returns 1 only if the local player's current animation state name is NOT one of NORMAL_IDLE / NORMAL_RUN / NORMAL_IDLE_WARDROBE (i.e. player is busy), else 0; also requires wardrobe preconditions (FUN_10fd05d0, vtbl+0x7bc, FUN_10f5b910). Inline strcmp of the current anim state name.* (server: client-only (animation gating for wardrobe/try-on), conf medium)
- ƒ returns 0 if anim-state == 'NORMAL_IDLE' or 'NORMAL_RUN' or 'NORMAL_IDLE_WARDROBE'; else 1 (with precondition checks)

### CPlayerAppearance::TdrTextFormat `@0x102debc0` — items/equipment-appearance
*TDR text serializer for a player-entity appearance/spawn struct: playerId, netObjId, name, gender, position (sub-struct FUN_10277cf0), rotation (FUN_102780d0), scale, connect flags, sendSrvId, equipmentPack blob, avatarSetID.* (server: client-only (debug text formatter); struct layout is authoritative for the spawn/appearance packet, conf high)
- ƒ [dwPlayerId]=u32 @ *param_1; [dwNetObjId]=u32 @ param_1[1]; [szName]=str @ param_1+2
- ƒ [bGender]=u8 @ (param_1+10); [stPosition] sub @ FUN_10277cf0; [stRotation] sub @ FUN_102780d0
- ƒ [fScale]=float @ (int)param_1+0x45; [dwNewConnect]=u32 @ +0x49; [dwSendSrvId]=u32 @ +0x4d
- ƒ [szEquipmentPack]=str/blob @ (int)param_1+0x51; [bAvatarSetID]=u8 @ +0x71

### CPlayerFSM::UpdateWardrobeTimers `@10fd1b60` — items/wardrobe
*Per-frame FSM update handling the wardrobe idle timer (+0x18), timed callback list (+0xf4 entries of {fn,arg,time}), and per-frame handler dispatch. Counts down each callback's remaining time by the frame delta and fires/removes expired ones.* (server: client-only, conf low)
- ƒ if *(float)(this+0x18) <= DAT_11de9890 (threshold, likely 0.0f): run timed-callback + per-frame handler update path
- ƒ else: pause anim, and if *(float)(this+0x18)*DAT_11de98b0 - deltaWardrobeTimer > DAT_11de9890 restore NORMAL_IDLE_WARDROBE and clear +0x18=0
- ƒ timed callback: t -= frameDelta(vtbl+0x1c); if t<=0 call cb(0) and swap-remove (stride 0xc = {fn,arg,float time})
- ƒ DAT_11de98b0 = anim playback-rate scalar applied to +0x18

### CPlayerInventoryExtension::Init `@0x10a50ee0` — items/gameobject-inventory
*Initializes the player Inventory game-object extension: binds parent game object, enables/updates AnimatedCharacter and Inventory slots, registers with the actor system, caches globals. Stock CryEngine init. Terminates in a not-return error path (FUN_10c3d580) if a subcheck fails.* (server: client-only, conf low)
- ƒ acquires 'AnimatedCharacter'(mode 2) at +0x4d6; acquires 'Inventory'(mode 2) on parent
- ƒ sets physics/update flags via vtbl calls

### CPlayerInventoryExtension::PostInitClient `@0x10a51440` — items/gameobject-inventory
*Post-init / hand-off of the Inventory extension to a new owner: copies the +0x4d7 handle, re-acquires 'Inventory' slot, syncs AnimatedCharacter, sets update flags. CryEngine plumbing.* (server: client-only, conf low)
- ƒ param_2[2] = this[0x4d7]; slot flag = (DAT_1202e818+0x16d == 0) ? 2 : 1

### CPlayerInventoryExtension::ResetAndReload `@0x10a53640` — items/gameobject-inventory
*Resets the player Inventory extension on (re)spawn/revive: releases Inventory/Interactor slots, resets transform/scale members (identity 0x3f800000), reloads hitpart data (hitpartParams, HitPartSetting), gameParams, fires OnRevive. Largely CryEngine actor plumbing; touches worn-equipment appearance but not bag contents.* (server: client-only (entity reset), conf low)
- ƒ resets members +0x4d9.. with identity scale 0x3f800000 (1.0f) at +0x4de and +0x4e2
- ƒ loads 'hitpartParams.hitpartdata'/'hitpartParams.partbinddata', HitpartInfo, HitPartData; script 'OnRevive'

### CPlayerInventoryExtension::~Reset `@0x10a4fc50` — items/gameobject-inventory
*Destructor/teardown for the CryEngine player game-object 'Inventory' extension: releases the 'Inventory'/'Interactor'/'AnimatedCharacter' game-object slots, unbinds many held references and animated-character resources, and restores base vtables. Stock CryEngine game-object-extension plumbing (IInventory), not the bag/item container.* (server: client-only (entity lifecycle), conf medium)
- ƒ releases slots via IGameObject::ReleaseExtension('Inventory'/'Interactor'/'AnimatedCharacter', mode 3)
- ƒ many member-pointer teardowns at param_1[...] offsets; ref-count free pattern (idx-0xc header, FUN_10c3dad0/FUN_10c3d900)

### CPlayerViewState::Exit `@10fb7c30` — items/wardrobe
*FSM state-exit/cleanup for view/wardrobe states. Plays exit anims ("NORMAL_IDLE_VIEW","NORMAL_SIT_DOWN"), tears down the WardrobeView on state 3, and releases many per-state resource vectors and callback handlers on the player controller.* (server: client-only, conf low)
- ƒ if WardrobeView state (vtbl[0]()==3) and *(char)(this+0x15) set: FUN_10f699e0(this+0x1c); *(byte)(this+0x14)=1
- ƒ iterates and refcount-releases callback list [+0xe8..+0xec], resource lists at +0xd4/+0x224, and singletons at +0x190/+0x18c/+0x1c50

### CSRLItemBoxDescription::GetRecordByIndex `@1153ebd0` — items/itembox
*Indexed lookup into CSRLItemBoxDescriptionInfo config table via the standard 2D paged pattern; returns record pointer or 0.* (server: validation, conf high)
- ƒ same 2D paged lookup as 11230460 against CSRLItemBoxDescriptionInfo manager

### CSRLItemBoxDescription::Init `@1153d200` — items/itembox
*Constructs/initializes a CSRLItemBoxDescriptionInfo view object: stores key (param_3) at [0], param_2 at [4], resolves the description record via the 2D paged lookup and stores it at [0x25], zeroes [0x26].* (server: client-only, conf medium)
- ƒ record = CSRLItemBoxDescriptionInfo::FindInfoByKey table 2D lookup by param_3 (same paged pattern)
- ƒ this[0]=key; this[4]=param_2; this[0x25]=record; this[0x26]=0

### CSpeakUseItemContentDef::ctor `@1177f5e0` — items/use-content
*Constructor for a SpeakUseItemContentDef object: initializes an intrusive list (this+0x10/+0x14 self-link) and sets the type name string "SpeakUseItemContentDef".* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this (empty doubly-linked list head)

### CSpeakUseItemContentDef::ctor_dup `@117812c0` — items/use-content
*Duplicate constructor for SpeakUseItemContentDef (identical to 1177f5e0).* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this

### CSpeakUseItemGroupContentDef::ctor `@1177f610` — items/use-content
*Constructor for SpeakUseItemGroupContentDef; same list-head init pattern, type name "SpeakUseItemGroupContentDef".* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this

### CSpeakUseItemGroupContentDef::ctor_dup `@117812f0` — items/use-content
*Duplicate constructor for SpeakUseItemGroupContentDef.* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this

### CStoreHouse::GetExpandSlotRecordPtr `@113ffb00` — items/storehouse
*Resolves a storehouse-expansion slot config record for a given container type and slot index. For type 2 uses CExpandStoreHouseSlotInfo (returns record+0x10); for type 10 uses FUN_108aca50 (returns record+0x18).* (server: validation, conf medium)
- ƒ group index = param_2/10 + 1 (10 slots per expansion group)
- ƒ type 2: CExpandStoreHouseSlotInfo 2D lookup by group index -> return record+0x10
- ƒ type 10: FUN_108aca50(group) -> return record+0x18
- $ 10 = storehouse slots per expansion group (integer div by 10)

### CStoreHouse::GetExpandSlotUnlockValue `@115226e0` — items/storehouse
*Returns a scalar field from the storehouse-expansion slot config for a slot index. Type 2 -> *(CExpandStoreHouseSlotInfo record+0x20); type 0 -> *(FUN_108aca50 record+0x14). Likely the unlock cost/requirement for that expansion slot group.* (server: validation, conf medium)
- ƒ group index = param_2/10 + 1
- ƒ type 2: return *(int*)(record+0x20)
- ƒ type 0: return *(int*)(FUN_108aca50(group)+0x14)
- $ field +0x20 of CExpandStoreHouseSlotInfo (per-group value, likely unlock cost/threshold; exact meaning unknown)

### CTaskUseItemContentDef::ctor `@117805a0` — items/use-content
*Constructor for TaskUseItemContentDef (quest/task use-item requirement content); list-head init + type name.* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this

### CTaskUseItemContentDef::ctor_dup `@11782280` — items/use-content
*Duplicate constructor for TaskUseItemContentDef.* (server: client-only, conf medium)
- ƒ this[0x10]=this; this[0x14]=this

### CTutorialStep::ReadFromXml `@10ea7530` — items/tutorial
*Parses a tutorial/teach step from XML. Recognizes tags BeginTeach/EndTeach with attributes ShortcutSet, clearShortcut, itemid, ItemList, initInventory, itemCounts, Steps, PresentActions. Can populate a starter inventory (itemid + itemCounts) for the tutorial and set step flags on the owner object.* (server: client-only, conf medium)
- ƒ default id when a required getter (vtbl+0x74) fails: *(param_1+8)=0xc379
- ƒ ShortcutSet count read: *(bool*)(param_1+0x38)=0<local_10 (has-shortcut)
- ƒ initInventory count read: *(bool*)(param_1+0x39)=0<local_14 (has-init-items); reads "itemCounts" into local_10 alongside item ids
- ƒ iterates child nodes via vtbl+0xa0 (count) / +0xa8 (getChild); sub-parsers FUN_10ea9bc0, CCombatActionDef::ReadFromXml, FUN_10ea6920
- $ sentinel/default item id 0xc379 (50041)

### CUIWidgetFactory::RegisterItemColumn `@118ba760` — items/inventory-ui
*One-time static registration descriptor for the UI widget class named u"ItemColumn" (the inventory bag-grid widget). Sets its type id and returns the shared descriptor; param_2 set to 1 (registered).* (server: client-only, conf medium)
- ƒ widget type id _DAT_1239cac8 = 0xd (13); guarded by DAT_1239cae8 bit 1; name FUN_100f67b0(L"ItemColumn")
- $ ItemColumn UI widget type id = 0xd (13)

### CUIWidgetFactory::RegisterOnUseItem `@11935c70` — items/use-ui
*One-time static registration descriptor for the UI widget/event class named u"OnUseItem". Sets type id 0xe1 and a flag, returns the shared descriptor.* (server: client-only, conf medium)
- ƒ type id _DAT_1239faf0 = 0xe1 (225); flag _DAT_1239faf8 = 1; guarded by DAT_1239fb10 bit 1; name L"OnUseItem"
- $ OnUseItem widget/event type id = 0xe1 (225)

### CUIWindowDef::ReadFromXml `@11a088c0` — items/inventory-ui
*Reads a UI window definition record from an XML/attribute node into a config struct. Parses all window layout/behavior attributes; each attribute is looked up by cached wide-name and, if present, stored at a fixed struct offset; missing attributes emit a formatted warning. Includes the inventory-specific 'inventoryShowMode' and 'weaponType' fields.* (server: client-only, conf high)
- ƒ attribute -> struct-offset writes: name->+0x14(str), path->+0x2c(str), CacheType->+0x44(int), xPos->+0x48(int), yPos->+0x4c(int), layer->+0x50(int), layoutModel->+0x54(int), isLockPos->+0x58(bool), CallMouseTyp->+0x5c(int), winModel->+0x60(int), togetherOpenWin->+0x64(int), togetherCloseWin->+0x68(int), escLevel->+0x6c(int), uiModelElement->+0x70(bool), inventoryShowMode->+0x74(int), weaponType->+0x78(int), canCloseByEsc->+0x7c(bool), openDenyOther->+0x7d(bool), WontDenyByOther->+0x7e(bool)
- ƒ first field (unnamed, via DAT_123a6af4) -> +0x10 (id/enum)
- ƒ per-field: cVar=HasAttr(name); if false memset(warnbuf,0,0x3ff)+FormatWarning; else read value (vtbl+0x20 int / +0x24 string)

### CUseItemState::OnAnimEvent_PLUseItem `@10f7f490` — items/use
*Handles the "PLUseItem" animation event (state id 0x1d). On match, calls into the item-use effect system (vtbl+800 accessor, then vtbl+0x14/+0x30) passing the event name to trigger the use-item VFX/logic.* (server: client-only, conf medium)
- ƒ state id via FUN_10f5c510(&{0x1d},1)
- ƒ string-compares event name (param_2+0xc) to "PLUseItem"; on match invokes *(*(param_1+0x18)+0x100) vtbl+800 then vtbl+0x14/+0x30(name,0,0)

### CWardrobe::BuildFashionDataArray `@0x109e7dd0` — items/wardrobe
*Builds the fashion-data array for the wardrobe UI (C2AS_GetFashionDataArray). Iterates the player's wardrobe fashion records (mode 4/5) and, for each, emits a FashionData VO (FUN_109e8440) plus a nested SuitFashionDataArray of the suit's component pieces looked up in CWardrobeInfo.* (server: client-only (UI); ownership (HasItem) reflects server state, conf medium)
- ƒ gated on param_5==2 and arg types (state&0x8f) in {3,4}
- ƒ iterates wardrobe list; skips records where rec[10] byte != 0 (hidden)
- ƒ per component: CWardrobeInfo::GetRecordById lookup (same 2D pattern: id-=[0x30]; row=[0x20][id/[0x28]]; elem=row[id%[0x28]])

### CWardrobe::BuildFashionDataVO `@0x109e8440` — items/wardrobe
*Builds a single FashionData Scaleform VO (mh.view.Wardrobe.Data.FashionData): ItemId, MartId, HasItem, SecondType, ThirdType, ItemIcon, MaleIcon, FemaleIcon, Score. HasItem computed from an inventory presence check (FUN_113fa380).* (server: client-only (UI VO); HasItem reflects server-owned inventory, conf medium)
- ƒ ItemId = rec[0x14/4]... (uStack_6c); MartId = rec+0x18; HasItem = (FUN_113fa380(MartId) != 0)
- ƒ SecondType = rec+0x3c (from FUN_10254130); ItemIcon/MaleIcon(+0x40)/FemaleIcon(+0x58); Score = rec+0x60

### CWardrobe::BuildOwnedFashionList `@0x109e82c0` — items/wardrobe
*Builds the list of wardrobe fashion records the player owns by iterating CWardrobeInfo table entries (count from vtbl+0x28) and appending each record whose model resolves. Lazily initializes the CWardrobeInfo manager default instance if missing.* (server: client-only, conf low)
- ƒ count = mgr vtbl(+0x28); for i in 0..count-1: rec = mgr[0x14][i]; append if model type in {4,5}
- ƒ table bounds check: i valid iff i>=0 && i < (mgr[0x18]-mgr[0x14])>>2

### CWardrobe::EnterWardrobeIdleState `@0x109e8670` — items/wardrobe
*Sets the local player model into the wardrobe idle state: flags byte +0x2405 = 1 and plays the NORMAL_IDLE_WARDROBE animation via CInfoRecord::GetModelString + FUN_10fd7800.* (server: client-only (animation/state), conf medium)
- ƒ model->+0x2405 = 1; anim = CInfoRecord::GetModelString('NORMAL_IDLE_WARDROBE',...,1,0,0)

### CWardrobe::OnIdleActivity `@10c978d0` — items/wardrobe
*Wardrobe-screen idle handler. Requires global player ctx DAT_1202e818 valid, the "Wardrobe" action-map active, and mode FUN_10bac530()==3. Plays "NORMAL_IDLE_WARDROBE" model anim and grants an activity reward; on an alternate branch grants a different reward and posts a UI notice.* (server: authoritative, conf medium)
- ƒ if wardrobe entity subtree valid and idle-anim (vtbl+0x790) present: GetModelString("NORMAL_IDLE_WARDROBE"); if FUN_10fd2467()==0 -> GrantActivityReward(0x1376) and return
- ƒ else (widget vtbl+0x168 false path) posts UI struct {0x10f, 2, 0, 0} via FUN_104ef270; the +0x168-true path calls GrantActivityReward(0x1373)
- $ GrantActivityReward reward id 0x1376 (4982) on idle-anim success
- $ GrantActivityReward reward id 0x1373 (4979) on alternate branch
- $ UI notice code 0x10f with subcode 2

### CWardrobeIdleState::Enter `@10f7be10` — items/wardrobe
*Enters the "NORMAL_IDLE_WARDROBE" FSM state. Clears +0x250, plays the model string, registers state id 0x2d and callbacks (FUN_10fad420 enter, FUN_10fad480 leave, FUN_10fad510 via FUN_10f5bd40(6,...)), and prunes two prior callback entries.* (server: client-only, conf medium)
- ƒ state id 0x2d pushed at +0x44 queue
- ƒ FUN_10f5bd40(6, FUN_10fad510) registers signal-6 callback

### CWardrobeIdleState::OnEnterCallback `@10fad420` — items/wardrobe
*WardrobeView enter callback (anim state id 0x2d). Sets owner flag +0x250=1, resolves the "WardrobeView" FSM state, and clears the flag again if FUN_10fdc1d0()==1.* (server: client-only, conf medium)
- ƒ guard state id 0x2d via FUN_10f5c510; set *(byte)(this+0x250)=1

### CWardrobeIdleState::OnLeaveCallback `@10fad480` — items/wardrobe
*WardrobeView leave callback. Resolves "WardrobeView" state; if the owning entity is not in wardrobe mode (*(entity+0x2405)!=1) toggles widget vtbl+0x30(0); then FUN_10fdc1b0(1); refcount-decrements a temp string.* (server: client-only, conf medium)
- ƒ check *(char*)(entity+0x2405) == 1 (wardrobe-active flag on player entity)
- ƒ string refcount teardown: if refcount(*(p-0xc)) drops <1, DAT_123be268 += (-0xd - *(p-4)); free

### CWardrobeIdleState::OnSignal6Callback `@10fad510` — items/wardrobe
*WardrobeView signal-6 callback (state id 0x2d). If owner flag +0x250 set, clears it and re-enables the WardrobeView widget via vtbl+0x30(1).* (server: client-only, conf medium)
- ƒ guard state id 0x2d; if *(char)(this+0x250)!=0 then set 0 and widget->vtbl+0x30(1)

### CWardrobeInfo::GetManagerOrDefault `@0x109e9300` — items/config-table
*Returns the CWardrobeInfo config manager singleton, lazily creating a default (&DAT_123c911c) and initializing (FUN_109e9840) if the named manager is not found. Helper used by the wardrobe lookups.* (server: client-only config accessor, conf high)
- ƒ mgr = *CWardrobeInfo::GetManager(); if null -> FindByName('CWardrobeInfo'); if still null -> default &DAT_123c911c (init once via flag DAT_123c9118&1)

### CWardrobeUIController::RegisterCommandHandlers `@0x109e78b0` — items/wardrobe
*Registers wardrobe UI -> game (C2AS) command handlers: C2AS_EnterWardrobeState, C2AS_LeaveWardrobeState, C2AS_GetFashionDataArray (FUN_109e7dd0), C2AS_TryOn (FUN_109e80c0), C2AS_ChangePose (FUN_109e8230).* (server: client-only (UI command routing), conf high)
- ƒ C2AS_GetFashionDataArray -> FUN_109e7dd0; C2AS_TryOn -> FUN_109e80c0; C2AS_ChangePose -> FUN_109e8230

### CWardrobeViewState::OnStateEvent `@10f69ad0` — items/wardrobe
*WardrobeView camera/FSM state event handler. switch(param_2) with cases 0=enter,1=update,2=leave-begin,3=leave-end. Manages third-person wardrobe camera, hides HUD nameplates and other players via console vars, and restores camera pitch/yaw stored in param_1[10].* (server: client-only, conf medium)
- ƒ camera pitch clamp constant param_1[9] = -0x40800000 (=-4.0f)
- ƒ wardrobe zoom/offset *(DAT_120286b8+0x1e8) = 0x40333333 (=2.8f); *(DAT_120286b8+0xa58)=1 on enter
- ƒ restores from param_1[10] struct: byte@0->+0xad4, +4->+0x1e0, +8->+0x1ec, +0xc->+0x1e8, +0x10->+0x98, +0x14->+0x50c
- ƒ console vars toggled by case: "g_hidden_namepad", "g_hide_other_players" (values 0/1/2 driven by param_1[0xc]); dedup via bitmask uRam1203cd6c bits 1/2/4/8
- ƒ activates action-map "UpView" on leave

### TlvBeastItemReq::TdrTextFormat `@0x10412a60` — items/pet-beast
*TDR text serializer for a beast/pet item op: iSrcBeast, iDstBeast, iUseItem (all int). Uses an item to act on/transfer between two beasts (e.g. feed/transfer).* (server: client-only formatter, conf medium)
- ƒ [iSrcBeast]=int @ *param_1; [iDstBeast]=int @ param_1[1]; [iUseItem]=int @ param_1[2]

### TlvCombineItemReq::TdrTextFormat `@0x103edf50` — items/combine-craft
*TDR text serializer for an item combine/craft request: item locator + iDstItemID (resulting item) + iCreditItemCnt + bTagItemCnt (u8) + astTagItemData array (FUN_10272300), cap 6 tag items.* (server: validation - astTagItemData <= 6 enforced; combine result server-authoritative, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9
- ƒ [iDstItemID]=int @ +0xb; [iCreditItemCnt]=int @ +0xf; [bTagItemCnt]=u8 @ +0x13 (fmt 0x%02x)
- ƒ if bTagItemCnt > 6 return -7; [astTagItemData]=FUN_10272300[bTagItemCnt]
- $ Tag-item list cap: 6 entries; error -7. iCreditItemCnt = materials consumed.

### TlvCombineItemReqB::TdrTextFormat `@0x1041bfe0` — items/combine-craft
*TDR text serializer for item combine/craft: item locator + iDstItemID + iCreditItemCnt + bTagItemCnt + astTagItemData (FUN_10272300), cap 6. Byte-identical to FUN_103edf50.* (server: validation - astTagItemData <= 6 enforced, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [iDstItemID]=int @ +0xb; [iCreditItemCnt]=int @ +0xf; [bTagItemCnt]=u8 @ +0x13
- ƒ if bTagItemCnt > 6 return -7; [astTagItemData]=FUN_10272300[bTagItemCnt]
- $ Tag-item list cap: 6 entries; error -7

### TlvDyeItemReq::TdrTextFormat `@0x103ef260` — items/dye-color
*TDR text serializer for a dye/recolor request: item locator + iColorIndex (int). Applies a color index to an equipment item.* (server: client-only formatter; dye applied server-authoritatively, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [iColorIndex]=int @ +0xb

### TlvDyeItemRsp::TdrTextFormat `@0x103ef600` — items/dye-color
*TDR text serializer for the dye response: iRetCode + item locator + iColorIndex.* (server: client-only formatter; iRetCode server-produced, conf high)
- ƒ [iRetCode]=int @ *param_1; [ullItemID]=u64 @ param_1[1..2]; [bItemColumn]=u8 @ param_1+3 (offset 0xc); [wItemGrid]=u16 @ +0xd; [iColorIndex]=int @ +0xf

### TlvItemCountReq::TdrTextFormat `@0x1032de70` — items/packet
*TDR text serializer: item locator + wItemCount (e.g. discard/sell-N request). Same layout as FUN_1032bf20.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb

### TlvItemCountReqB::TdrTextFormat `@0x1034ac50` — items/packet-element
*TDR text serializer: item locator + wItemCount; array element type for FUN_1034b540 / FUN_10354210.* (server: client-only formatter (array element), conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb

### TlvItemCountReqC::TdrTextFormat `@0x103eeed0` — items/packet
*TDR text serializer: item locator + wItemCount. Same layout as FUN_1032bf20/1032de70.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb

### TlvItemErrLocatorRsp::TdrTextFormat `@0x103ea2e0` — items/packet
*TDR text serializer: iErrCode + item locator. Byte-identical to FUN_103e9bb0.* (server: client-only formatter, conf high)
- ƒ [iErrCode]=int @ *param_1; [ullItemID]=u64 @ param_1[1..2]; [bItemColumn]=u8 @ +0xc; [wItemGrid]=u16 @ +0xd

### TlvItemErrLocatorRspB::TdrTextFormat `@0x103f1870` — items/packet
*TDR text serializer: iErrCode + item locator. Same as FUN_103e9bb0/103ea2e0.* (server: client-only formatter, conf high)
- ƒ [iErrCode]=int @ *param_1; [ullItemID]=u64 @ param_1[1..2]; [bItemColumn]=u8 @ +0xc; [wItemGrid]=u16 @ +0xd

### TlvItemIdSlot::TdrTextFormat `@0x10329240` — items/packet
*TDR text serializer for ullItemID (u64), bItemColumn (u8), wItemGrid (u16). Base 'item at a slot' identity triple used by many item ops.* (server: client-only formatter; layout is the canonical item-locator (id+column+grid), conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1] (fmt %I64u); [bItemColumn]=u8 @ param_1+2 (offset 8); [wItemGrid]=u16 @ (int)param_1+9

### TlvItemLocCount::TdrTextFormat `@0x1032bf20` — items/packet-element
*TDR text serializer for a single item-location-with-count element: id/column/grid + wItemCount. Used as the array element type by the tidy/batch serializers (FUN_1032cfa0/1032d540).* (server: client-only formatter (array element), conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb

### TlvItemLocListReq1000::TdrTextFormat `@0x1034b540` — items/batch
*TDR text serializer: bItemColumn + begin/end grid + wItemCount + astItemLocList (FUN_1034ac50), cap 1000 (half of the tidy variants).* (server: validation - astItemLocList <= 1000 enforced, conf high)
- ƒ [bItemColumn]=u8 @ *param_1; [wItemBegGrid]=u16 @ +1; [wItemEndGrid]=u16 @ +3; [wItemCount]=u16 @ +5
- ƒ if wItemCount > 1000 return -7; [astItemLocList]=FUN_1034ac50[wItemCount]
- $ astItemLocList cap: 1000 entries; error -7

### TlvItemLocListReq1000B::TdrTextFormat `@0x10354210` — items/batch
*TDR text serializer: bItemColumn + begin/end grid + wItemCount + astItemLocList (FUN_1034ac50), cap 1000. Byte-identical to FUN_1034b540.* (server: validation - astItemLocList <= 1000 enforced, conf high)
- ƒ [bItemColumn]=u8 @ *param_1; [wItemBegGrid]=u16 @ +1; [wItemEndGrid]=u16 @ +3; [wItemCount]=u16 @ +5
- ƒ if wItemCount > 1000 return -7; [astItemLocList]=FUN_1034ac50[wItemCount]
- $ astItemLocList cap: 1000 entries; error -7

### TlvItemLocListReq::TdrTextFormat `@0x1032d540` — items/tidy-sort
*TDR text serializer: bItemColumn + begin/end grid + wItemCount + astItemLocList array (FUN_1032bf20). Simpler variant of FUN_1032cfa0 without the seq counters.* (server: validation - astItemLocList <= 2000 enforced, conf high)
- ƒ [bItemColumn]=u8 @ *param_1; [wItemBegGrid]=u16 @ +1; [wItemEndGrid]=u16 @ +3; [wItemCount]=u16 @ +5
- ƒ if wItemCount > 2000 return -7; [astItemLocList]=FUN_1032bf20[wItemCount]
- $ astItemLocList cap: 2000 entries; error -7

### TlvItemLocatorReq::TdrTextFormat `@0x103e9840` — items/packet
*TDR text serializer for the bare 13-byte item locator (id/column/grid) with no extra fields. Base request for single-item ops.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9

### TlvItemLocatorReqB::TdrTextFormat `@0x103f1500` — items/packet
*TDR text serializer for the bare item locator (id/column/grid). Same as FUN_103e9840.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9

### TlvItemLocatorRsp::TdrTextFormat `@0x103e9bb0` — items/packet
*TDR text serializer for a response: iErrCode (int) prefix + item locator. Generic error-code + locator reply.* (server: client-only formatter; iErrCode is server-produced, conf high)
- ƒ [iErrCode]=int @ *param_1; [ullItemID]=u64 @ param_1[1..2]; [bItemColumn]=u8 @ param_1+3 (offset 0xc); [wItemGrid]=u16 @ +0xd

### TlvItemReasonReq::TdrTextFormat `@0x10353580` — items/packet
*TDR text serializer: item locator + wReason (u16). Likely a discard/destroy with reason-code packet.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wReason]=u16 @ +0xb

### TlvItemRetErrRsp::TdrTextFormat `@0x103ee3b0` — items/packet
*TDR text serializer for a response: iRetCode + iErrArg1 + item locator. Two-code error reply with one argument.* (server: client-only formatter; codes server-produced, conf high)
- ƒ [iRetCode]=int @ *param_1; [iErrArg1]=int @ param_1[1]; [ullItemID]=u64 @ param_1[2..3]; [bItemColumn]=u8 @ param_1+4 (offset 0x10); [wItemGrid]=u16 @ +0x11

### TlvItemRetErrRspB::TdrTextFormat `@0x1041c440` — items/packet
*TDR text serializer: iRetCode + iErrArg1 + item locator. Byte-identical to FUN_103ee3b0.* (server: client-only formatter, conf high)
- ƒ [iRetCode]=int @ *param_1; [iErrArg1]=int @ param_1[1]; [ullItemID]=u64 @ param_1[2..3]; [bItemColumn]=u8 @ +0x10; [wItemGrid]=u16 @ +0x11

### TlvItemSlotResult::TdrTextFormat `@0x102e6660` — items/packet
*TDR text serializer for a small item-slot-result struct: bItemColumn (u8), wItemGrid (u16), iResult (int).* (server: client-only formatter; layout is the item-slot response, conf high)
- ƒ [bItemColumn]=u8 @ *param_1 (fmt 0x%02x); [wItemGrid]=u16 @ param_1+1; [iResult]=int @ param_1+3

### TlvItemTypeSlot::TdrTextFormat `@0x103284f0` — items/packet
*TDR text serializer: dwItemType (u32), bItemColumn (u8), wItemGrid (u16), then nested item-data sub-struct via FUN_102741f0.* (server: client-only formatter, conf high)
- ƒ [dwItemType]=u32 @ *param_1; [bItemColumn]=u8 @ param_1+1; [wItemGrid]=u16 @ (int)param_1+5; [stItemData] sub @ FUN_102741f0 (param_3+1 if param_3>=0)

### TlvItemUpgradeReq::TdrTextFormat `@0x103e9f40` — items/upgrade
*TDR text serializer: item locator + iCreditItemCnt (int) + iGoalLevel (int). Item enhancement/upgrade request specifying number of credit/material items consumed and the target level.* (server: client-only formatter; upgrade result (cost, success) is server-authoritative, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [iCreditItemCnt]=int @ +0xb; [iGoalLevel]=int @ +0xf
- $ iCreditItemCnt = count of material/credit items consumed for the upgrade; iGoalLevel = target enhance level

### TlvMoveItemReq2::TdrTextFormat `@0x10329e00` — items/move
*TDR text serializer identical in layout to FUN_10329a30 (item locator + dst column/grid). Second move-variant packet (e.g. storehouse move vs bag move).* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [bDstColumn]=u8 @ +0xb; [wDstGrid]=u16 @ param_1[3]

### TlvMoveItemReq::TdrTextFormat `@0x10329a30` — items/move
*TDR text serializer for a move-item request: item locator (id/column/grid) + destination (bDstColumn u8, wDstGrid u16).* (server: client-only formatter; the request is server-authoritative (server validates dst slot free/valid), conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [bDstColumn]=u8 @ +0xb; [wDstGrid]=u16 @ param_1[3] (offset 0xc)

### TlvMoveItemReqD::TdrTextFormat `@0x10353930` — items/move
*TDR text serializer: item locator + dst column/grid; byte-identical to FUN_10329a30 (move variant).* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [bDstColumn]=u8 @ +0xb; [wDstGrid]=u16 @ param_1[3]

### TlvSplitItemReq::TdrTextFormat `@0x1032b720` — items/split-stack
*TDR text serializer for a split/partial-move request: item locator + wItemCount + destination column/grid + ullDstItemID. Presence of wItemCount indicates a stack split into a destination stack.* (server: client-only formatter; server authoritative over split (validates count <= source stack size), conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb; [bDstColumn]=u8 @ +0xd; [wDstGrid]=u16 @ +0xe; [ullDstItemID]=u64 @ param_1[4..5] (offset 0x10)

### TlvSplitItemReqB::TdrTextFormat `@0x1032bb50` — items/split-stack
*TDR text serializer: item locator + wItemCount + dst column/grid (no ullDstItemID, i.e. split into empty slot).* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [wItemCount]=u16 @ +0xb; [bDstColumn]=u8 @ +0xd; [wDstGrid]=u16 @ +0xe

### TlvSwapItemReq::TdrTextFormat `@0x1032a200` — items/swap
*TDR text serializer for a swap-item request: source item locator (ullSrcItemID/column/grid) + destination item locator (ullDstItemID/bDstColumn/wDstGrid). Both endpoints carry item IDs, distinguishing swap from move.* (server: client-only formatter; server authoritative over the swap, conf high)
- ƒ [ullSrcItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [ullDstItemID]=u64 @ +0xb; [bDstColumn]=u8 @ +0x13; [wDstGrid]=u16 @ param_1[5] (offset 0x14)

### TlvSwapItemReqB::TdrTextFormat `@0x1032aec0` — items/swap
*TDR text serializer, same 21-byte layout as FUN_1032a200 but first id labelled [ullItemID] (not SrcItemID) + [ullDstItemID]. Swap variant.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [ullDstItemID]=u64 @ +0xb; [bDstColumn]=u8 @ +0x13; [wDstGrid]=u16 @ param_1[5]

### TlvSwapItemReqC::TdrTextFormat `@0x1032b2e0` — items/swap
*TDR text serializer, byte-identical to FUN_1032aec0 (item locator + dst item locator). Third swap-variant packet.* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [ullDstItemID]=u64 @ +0xb; [bDstColumn]=u8 @ +0x13; [wDstGrid]=u16 @ param_1[5]

### TlvSwapItemReqD::TdrTextFormat `@0x10353d30` — items/swap
*TDR text serializer: item locator + dst item locator; byte-identical to FUN_1032aec0/1032b2e0 (swap variant).* (server: client-only formatter, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [ullDstItemID]=u64 @ +0xb; [bDstColumn]=u8 @ +0x13; [wDstGrid]=u16 @ param_1[5]

### TlvTidyInventoryReq::TdrTextFormat `@0x1032cfa0` — items/tidy-sort
*TDR text serializer for an inventory tidy/sort request: bItemColumn, begin/end grid range, wItemCount, plus four operation sequence counters (iMoveSeq, iSwapSeq, iAddSeq, iDelSeq), then a variable array astItemLocList of item-loc-count elements (FUN_1032bf20).* (server: validation - client formatter; server enforces the astItemLocList <= 2000 cap and applies the authoritative tidy result, conf high)
- ƒ [bItemColumn]=u8 @ *param_1; [wItemBegGrid]=u16 @ +1; [wItemEndGrid]=u16 @ +3; [wItemCount]=u16 @ +5
- ƒ [iMoveSeq]=int @ +7; [iSwapSeq]=int @ +0xb; [iAddSeq]=int @ +0xf; [iDelSeq]=int @ +0x13
- ƒ if wItemCount (u16 @ +5) > 2000 return -7
- ƒ [astItemLocList] = FUN_1032bf20[wItemCount]
- $ astItemLocList cap: 2000 entries; error -7 on overflow

### TlvTransferAttrReq::TdrTextFormat `@0x103ea6e0` — items/attribute-transfer
*TDR text serializer for an attribute-transfer request: wTransferAttr, wTransferType, source item locator (ullSrcItemID/column/grid) + destination item locator. Moves an attribute/enchant from one item to another.* (server: client-only formatter; transfer is server-authoritative, conf high)
- ƒ [wTransferAttr]=u16 @ *param_1; [wTransferType]=u16 @ param_1[1] (offset 2)
- ƒ [ullSrcItemID]=u64 @ param_1+2 (offset 4); [bSrcItemColumn]=u8 @ param_1+6 (offset 0xc); [wSrcItemGrid]=u16 @ +0xd
- ƒ [ullDstItemID]=u64 @ +0xf; [bDstItemColumn]=u8 @ +0x17; [wDstItemGrid]=u16 @ param_1[0xc] (offset 0x18)

### TlvTransferAttrRsp::TdrTextFormat `@0x103eaba0` — items/attribute-transfer
*TDR text serializer for the attribute-transfer response: iErrCode + wTransferAttr + wTransferType + src/dst item locators. Response counterpart of FUN_103ea6e0.* (server: client-only formatter; iErrCode server-produced, conf high)
- ƒ [iErrCode]=int @ *param_1; [wTransferAttr]=u16 @ param_1+1 (offset 4); [wTransferType]=u16 @ (int)param_1+6
- ƒ [ullSrcItemID]=u64 @ param_1[2..3]; [bSrcItemColumn]=u8 @ param_1+4 (offset 0x10); [wSrcItemGrid]=u16 @ +0x11
- ƒ [ullDstItemID]=u64 @ +0x13; [bDstItemColumn]=u8 @ +0x1b; [wDstItemGrid]=u16 @ param_1[7] (offset 0x1c)

### TlvUseItemReq::TdrTextFormat `@0x1032da90` — items/use
*TDR text serializer for a use-item request: item locator + three generic dwParam1/2/3 args + szExtParam string. This is the parameterized item-use packet (params depend on item type).* (server: client-only formatter; item-use effect is server-authoritative, conf high)
- ƒ [ullItemID]=u64 @ param_1[0..1]; [bItemColumn]=u8 @ +8; [wItemGrid]=u16 @ +9; [dwParam1]=u32 @ +0xb; [dwParam2]=u32 @ +0xf; [dwParam3]=u32 @ +0x13; [szExtParam]=str @ +0x17


## player  (4)

### CFlyState::Enter `@10f79790` — player/anim
*Builds/enters the flying-glider FSM state. Pushes anim-event and update callbacks (FUN_10fad1e0/10facfd0/10fad070/10f78f70), registers state ids and model strings ("NORMAL_FLY","Glide_TakeOff","HolsteredFly","Gliding_Throw_Bomb","PLLocomotion","PLBaseSignal","Glider_Throw_Bomb","StartFall","NORMAL_FALL").* (server: client-only, conf low)
- ƒ state id 0x24 pushed at +0x44 queue; sets *(param_1+0x80) \|= 0x2011; resets +0x234=0, +0x238=0
- ƒ stores signal handle FUN_116db5e0() at +0x230

### CGliderFlyState::OnAnimEvent `@10f78f70` — player/anim
*Glider/fly FSM animation-event callback. Matches anim event names ("OnLeave") and current model-state names ("Glide_TakeOff","Gliding_Throw_Bomb","HolsteredFly","HolsteredFlyLeave") to advance a fly sub-state at +0x234 and a holstered flag at +0x238.* (server: client-only, conf medium)
- ƒ state id checked via FUN_10f5c510(&{0x24},1)
- ƒ on Glide_TakeOff while +0x234==0: call func_0x12402b6c(1,1,0); +0x234=1; attach "flyingLoop"
- ƒ on Gliding_Throw_Bomb while +0x234==2: same, +0x234=1
- ƒ on HolsteredFlyLeave: +0x238=1

### CPlayerFSM::LoadWeaponStates `@10fb8270` — player/fsm
*Loads weapon-specific FSM states from XML "Libs\PlayerFSM\WE%02dFSMStates.xml" (weapon type formatted as 2-digit). Parses <Weapon>/<Extensions>/<States>, creates each state via CStateFactory, and specially wires the "WardrobeView" state (id==3) into the controller when the wardrobe flag (this+0x15) is set.* (server: client-only, conf medium)
- ƒ weapon type parsed via atoi(local_24); guard uVar5 < 0xd (max 13 weapon types)
- ƒ path format "Libs\\PlayerFSM\\WE%02dFSMStates.xml"
- ƒ state count = (*(param_1+0xec)-*(param_1+0xe8))>>2; strncmp(name,"WardrobeView",100)
- ƒ WardrobeView special-case: if name matches and stateType(vtbl[0])==3 and *(char)(param_1+0x15)==1 -> FUN_10f69a40 + FUN_10f6a5b0(*(byte)(param_1+0x38))
- $ 13 (0xd) = number of weapon types (WE00..WE12 FSM state files)

### CPlayerFSM::TransitionToIdle `@10fd5d60` — player/fsm
*Transitions the player FSM to an idle state, choosing "NORMAL_IDLE" vs "CHANGE_WEAPON" (param_2) and specially handling "NORMAL_IDLE_WARDROBE" when the entity wardrobe flag (+0x2405) is set. Wires PLLocomotion/PLBaseAction signals and copies pose transform (+0xb0..+0xbc) from the target state.* (server: client-only, conf low)
- ƒ anim: param_2==0 -> "NORMAL_IDLE", else "CHANGE_WEAPON"
- ƒ if entity(+0x100) present and *(char)(+0x2405)==1: use "NORMAL_IDLE_WARDROBE", copy transform iVar4+0x20..0x2c -> this+0xb0..0xbc
- ƒ wardrobe branch sets *(float)(this+0x18)=poseTime*DAT_11de98b0 and PLLocomotion/HolsteredIdleCreate + PLBaseAction signals
- ƒ resolves "WardrobeView" state (id==3) to clear this+0x14 wardrobe flag


## engine  (3)

### CFlowNode_ActorEvents::GetConfiguration `@10e0f640` — engine/flowgraph
*Stock CryEngine flowgraph node port-definition builder. Lazily initializes input ports ("Enable","Disable") and a large output-port table for actor/entity events including item-related events "ItemPickedUp","ItemDropped","ItemUsed", plus vehicle/NPC/object/stance/death events.* (server: client-only, conf high)
- ƒ one-time init guarded by DAT_120318c0 bits 1 and 2; port trailing int is port type (1,3,6 = int/entity/bool-ish)
- ƒ writes param_1[0]=inputs table, [1]=outputs table, [2]=(flags&0xfffff01f)\|0x11, [3]=empty-string sentinel

### CFlowNode_UseItemLogic::GetConfiguration `@10e5a160` — engine/flowgraph
*Stock CryEngine flownode port config for a use-item logic node. Inputs "enable","disable","triggerOnce","useItem"; outputs "OnEvent","playerNetID".* (server: client-only, conf high)
- ƒ init guarded by DAT_120375e8 bits 1/2; param_1[2]=(flags&0xfffff01f)\|0x10

### CFlowNode_UseItemLogicEntity::GetConfiguration `@10e73e70` — engine/flowgraph
*Stock CryEngine flownode port config; variant of 10e5a160 that adds a "logicEntityNetID" input alongside "enable","disable","triggerOnce","useItem"; outputs "OnEvent","playerNetID".* (server: client-only, conf high)
- ƒ init guarded by DAT_120382b8 bits 1/2; param_1[2]=(flags&0xfffff01f)\|0x10


## ui  (2)

### CGamePauseMenu::RegisterCommandHandlers `@0x10b63bb0` — ui/menu (item-adjacent)
*Registers pause/system-menu command handlers via CInfoRecord::GetModelString bindings: OnResumeGame, OnReturnChooseRole, OnReturnTown(+OK/Cancel), OnShowSystemSettingDlg, GPItemClickOpenInventory, GPItemClickOpenManufacture, OnExitGame, RequireExitGame, OnShowKeySettingDlg, OnShowWorldMap, OnResetPosclick, CheckIdelOrFallingState.* (server: client-only (UI routing), conf high)

### CSystemBar::RegisterCommandHandlers `@0x10b660a0` — ui/systembar (item-adjacent)
*Registers system-bar hotkey/command handlers: SystemBar_PlayerPropertyUI, SystemBar_ShowQuestUI, SystemBar_ShowInventoryUI, SystemBar_ShowSysConfigUI, and single-key shows (T/O/K/H/M).* (server: client-only (UI routing), conf high)


## debug  (1)

### CGameStateRecorder::DrawInventoryDebugOverlay `@0x10c4c3c0` — debug/gamestate
*CryEngine demo/game-state-recorder debug overlay renderer: draws the actor's recorded-vs-current inventory (item slots, ammo counts, accessories, ammo packs, firemode, health) using FUN_10b6ffa0 text draw. Pure diagnostic overlay ('demo_force_game_state'), highlights mismatches in red. Not gameplay logic.* (server: client-only (debug rendering), conf low)
- ƒ column X positions 0x43960000(300f)/0x43c80000(400f)/0x44160000(600f) etc; row advance DAT_11cd7e88
- ƒ ammo grid wraps every 5 columns (local_10 == (local_10/5)*5); accessory/ammo-pack iteration over red-black tree
- $ max name length copied: 0x1f (31) chars via strncpy
