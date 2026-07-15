# MHO Pets / Palico — Round 8

170 functions from CryGame.dll.


## pets  (87)

### CCatCuisineRateInfo::GetRowByIndex `@11933c40` — pets/cuisine
*Bounds-checked flat-array accessor into the CCatCuisineRateInfo table (support-cat cuisine buff success-rate / effect-rate definitions). Uses generic manager-lookup FUN_10a05550 rather than a symbolized GetInfoManager.* (server: authoritative data (cuisine buff rate table; server applies cuisine buffs). Actual rate values are in the row payload, not this accessor., conf high)
- ƒ mgr=FUN_10a05550(0,"CCatCuisineRateInfo",0); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetAtkModeInfo::GetRowByIndex `@11753a50` — pets/combat-ai
*Bounds-checked flat-array accessor into the CPetAtkModeInfo data table (pet attack-mode definitions). Returns table[index] pointer or 0.* (server: authoritative data (pet attack-mode table; combat AI mode definitions used by server), conf high)
- ƒ mgr=GetInfoManager("CPetAtkModeInfo"); if 0<=i<((mgr+0x18 - mgr+0x14)>>2) return *(mgr+0x14 + i*4) else 0

### CPetAtkTargetInfo::GetRowByIndex `@11753ab0` — pets/combat-ai
*Bounds-checked flat-array accessor into the CPetAtkTargetInfo table (pet attack-target selection definitions).* (server: authoritative data (target-selection rules for pet combat AI), conf high)
- ƒ mgr=GetInfoManager("CPetAtkTargetInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetCharacterInfo::GetRowByIndex `@11753b10` — pets
*Bounds-checked flat-array accessor into the CPetCharacterInfo table (pet character/personality definitions).* (server: authoritative data, conf high)
- ƒ mgr=GetInfoManager("CPetCharacterInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetEquipInfo::GetRecordById `@0x107cb110` — pets/equipment/config
*CPetEquipInfo config accessor with base-offset + 2D indexing (same pattern as CPetInfo), returning the pet-equipment config record for an id.* (server: client-only (static config table), conf high)
- ƒ idx = id - mgr[0x30]; valid if 0<=idx<mgr[0x24]; row=mgr[0x20][idx/mgr[0x28]]; return row[idx%mgr[0x28]]

### CPetFireInfo::GetRowByIndex `@11928c30` — pets
*Bounds-checked flat-array accessor into the CPetFireInfo table (pet 'fire'/dispatch or pet-firing/release definitions).* (server: authoritative data, conf medium)
- ƒ mgr=GetInfoManager("CPetFireInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetInfo::Deserialize `@1174cd70` — pets/stats-combat
*Config/data-table deserializer for a pet definition row (the 'Pet*Info' record). Reads ~40 typed fields from a key/value data source (param_2 is a reader interface: vtbl+0x10=HasKey, +0x20=GetInt/GetUInt, +0x28=GetStruct/GetString, +0x30=GetFloat) and writes them into the pet-def struct at param_1. Each field guarded by a once-per-key init bitset (DAT_123912b4 / DAT_123913f8 / DAT_1239153c) that lazily interns the field-name string (FUN_100f67b0) and warms a lookup cache (FUN_100e1cb0). Missing keys emit a formatted 'field not found' warning (FUN_100ea3b0 with template DAT_11d389ec) instead of writing. The last four fields are the combat damage-ratio floats.* (server: authoritative data (pet-definition table shared client/server). Combat ratios PhyPDRatio (physical-defence ratio), MonsterAtkPet (monster->pet damage scale), PlayerAtkPet (player->pet damage scale), Defence, plus the ~30 int stat fields feed server-authoritative pet combat math. Only 4 of ~40 field-name keys were recovered symbolically (Defence/PhyPDRatio/MonsterAtkPet/PlayerAtkPet); the remaining keys live in unrecovered DAT_ globals., conf medium)
- ƒ int field -> obj+0x10 (from DAT_123912b8 key)
- ƒ int field -> obj+0x14 (DAT_123912cc)
- ƒ obj+0x18 = FUN_1181d900(parsedStruct)  (DAT_123912e0)
- ƒ obj+0x1c = FUN_1181dbe0(FUN_1181d700(parsedStruct))  (DAT_123912f4)
- ƒ obj+0x20 = count of id-list (<=5) parsed by FUN_100ec4b0(list, &obj+0x24, 5); id array stored at obj+0x24.. ; ids also pushed onto a per-thread ring buffer at ctx+0x3b758/0x3b75c (DAT_12391308)
- ƒ int fields -> obj+0xa0,0xa4,0xa8,0xac (DAT_1239131c/1330/1344/1358)
- ƒ int fields -> obj+0x38,0x3c,0x40,0x44,0x48,0x4c,0x50 (DAT_..136c/1380/1394/13a8/13bc/13d0/13e4)
- ƒ int fields -> obj+0x54,0x58,0x5c,0x60,0x64,0x68,0x6c,0x70,0x74,0x78,0x7c,0x80,0x84,0x88,0x8c (DAT_..13fc/1410/1424/1438/144c/1460/1474/1488/149c/14b0/14c4/14d8/14ec/1500/1514)
- ƒ int field -> obj+0xe0 (DAT_12391528)
- ƒ int fields -> obj+0xe4,0xe8,0xec,0xf0,0xf4,0xf8 (DAT_..1540/1554/1568/157c/1590/15a4)
- ƒ derived: tmp = *(obj+0x80) + *(obj+0x7c); if (DAT_1239128c < tmp) DAT_1239128c = tmp   // tracks global max of (field@0x80 + field@0x7c) across all rows
- ƒ float 'Defence'      -> obj+0x90
- ƒ float 'PhyPDRatio'   -> obj+0x94
- ƒ float 'MonsterAtkPet'-> obj+0x98
- ƒ float 'PlayerAtkPet' -> obj+0x9c

### CPetInfo::GetRecordById `@0x1052bf70` — pets/config
*CPetInfo config accessor with base-offset + 2D (row/col) indexing (identical pattern to CSoulBeastInfo::GetRecordById), returning the pet config record for a pet id.* (server: client-only (static pet config table; server keeps its own), conf high)
- ƒ guard: id!=-1 && (id!=0 \|\| mgr[0x30]==0) && mgr[0x28]!=0
- ƒ idx = id - mgr[0x30]; valid if 0<=idx<mgr[0x24]
- ƒ row = mgr[0x20][idx / mgr[0x28]]; return row[idx % mgr[0x28]]

### CPetInfo::GetSkinAltAssetOrDefault `@11753420` — pets/skin
*Identical to FUN_11753290 except returns (skinRow + 0x18) on hit and falls back to (petdef + 0x2c). Second skin-related asset field lookup.* (server: client-only, conf medium)
- ƒ same bucket-table lookup as 11753290 but hit -> row+0x18, miss/disabled -> pet+0x2c

### CPetInfo::GetSkinModelAssetOrDefault `@11753290` — pets/skin
*Given a pet-def struct, if field@0x98 > 0 uses skin id at field@0xb0 to look up a row in the CPetSkinInfo 2D bucket table; returns (skinRow + 0x30) on hit, else falls back to (petdef + 0x44). Client asset/model resolution.* (server: client-only (visual skin/model lookup), conf medium)
- ƒ if (*(pet+0x98) <= 0) return pet+0x44
- ƒ idx = *(pet+0xb0); mgr=CPetSkinInfo::GetInfoManager()
- ƒ valid if idx!=-1 && (idx!=0 \|\| mgr+0x30==0) && mgr+0x28!=0 && (idx-=mgr+0x30) in [0, mgr+0x24)
- ƒ row = table[mgr+0x20][idx / (mgr+0x28)][idx % (mgr+0x28)]; if row!=0 return row+0x30 else return pet+0x44

### CPetInfoPanel::BuildPetsListVO `@0x10512b70` — pets/UI
*Scaleform: builds _PetsList VO array with per-pet strName, level, petindex, petid, status; iterates pet nodes (stride 0x30) and calls BuildPetDetailVO_ByLookup + BuildPetInfoVO for the selected pet.* (server: client-only, conf medium)
- ƒ per-node fields: +0x04 level, +0x1c (icon/asset key), +0x20 status, +0x28 petid, +0x2c petindex; stride 0x30
- ƒ selected pet match: *(this+0x34)==node+0x2c && *(this+0x38)==node+0x28

### CPetInfoPanel::BuildPetsListVO_Select `@0x10512e20` — pets/UI
*Scaleform: variant of BuildPetsListVO that also drives default-selection and calls BuildPetInfoVO under several fallback conditions (empty list, param_3 flag).* (server: client-only, conf medium)
- ƒ node stride 0x30; count = (*(this+0x138)-*(this+0x134))/0x30
- ƒ on first node when !param_3: set selection *(this+0x34)=node+0x2c, *(this+0x38)=node+0x28

### CPetInfoPanel::RefreshPetList `@0x10510ff0` — pets/UI
*Scaleform UI: rebuilds the _petList VO array (PetPropertyALLVO_CLASS_NAME) by iterating the panel's pet list (records stride 0x30 between +0x134 and +0x138), calling CPetInfoPanel::BuildPetDetailVO_ByLookup per pet, then invokes Flash ResetPos / RefreshPetInfoByPos.* (server: client-only (UI rendering of pet list), conf medium)
- ƒ pet record iteration: from *(this+0x134) to *(this+0x138), stride 0x30
- ƒ per-record fields used: +0x1c, +0x24, +0x28 (petid), +0x2c (petindex)

### CPetLevelInfo::GetRowByIndex `@11926df0` — pets/leveling
*Bounds-checked flat-array accessor into the CPetLevelInfo table (pet level/EXP curve definitions).* (server: authoritative data (level/EXP curve table; server owns leveling), conf high)
- ƒ mgr=CPetLevelInfo::GetManager(); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetLevelInfo::Manager_VCall28 `@1181ddc0` — pets/leveling
*Fetches the CPetLevelInfo singleton manager and tail-calls its vtbl+0x28 method (jumptable not recovered; likely a reload/rebuild-table entry). Thin dispatcher.* (server: unknown, conf low)
- ƒ mgr=CPetLevelInfo::GetManager(); (*(mgr+0x28))()

### CPetNameInfo::GetRowByIndex `@11753b70` — pets
*Bounds-checked flat-array accessor into the CPetNameInfo table (pet name definitions).* (server: validation (name id table; server may validate chosen name id), conf high)
- ƒ mgr=GetInfoManager("CPetNameInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetPanelUI::BuildPetEquipsVO `@0x10515860` — pets/equipment/UI
*Scaleform: builds the _PetEquips VO array (PETEQUIPITEMVO_CLASS_NAME) from the pet's equipment list (nodes stride 0x40 between +0x158 and +0x15c), emitting asset, name, collumn, m_bUseItem, isBind, m_nBindType; then fires RefreshPetEquipsUI.* (server: client-only (renders server-owned pet equipment inventory), conf medium)
- ƒ equip node stride 0x40 (0x10 int words); fields: +0x0 itemId, +0x4 (id2), +0x8 collumn, +0x2c asset, +0x34 m_bUseItem(=0<node[0xd]), +0x38 isBind(node[0xe]), +0x3c m_nBindType(node[0xf])
- ƒ empty slot when node[0]==0

### CPetPanelUI::OnFirePetClicked `@0x10512810` — pets/UI
*Handles the 'fire/dismiss pet' (FirePet) confirm flow: sets a flag at +0x1a0, resolves CMessageParmDescInfo config, and pops a MsgBox with OK/Cancel (MsgBoxFirePetOk / MsgBoxFirePetCancel), message id 0x1fb5.* (server: client-only (confirmation dialog; the actual fire request goes elsewhere), conf medium)
- ƒ message-param 2D lookup index: iVar5 = 0x2f - mgr[0xc]; valid if 0<=iVar5<mgr[9]; row=mgr[8][iVar5/mgr[10]], col index iVar5%mgr[10]
- ƒ msgbox id = 0x1fb5

### CPetPanelUI::OnRequireItemUpdated `@0x10519640` — pets/UI
*Scaleform: when the panel's tracked item id (+0x48) matches the local player's current item context (entity +0xf8), sets _PetPos and fires SetRequireItemId / RefreshPetPropertyUI.* (server: client-only, conf low)
- ƒ gate: *(this+0x48) > 0 && *(this+0x48) == *(playerEntity+0xf8)

### CPetPanelUI::RefreshAll `@0x10512150` — pets/UI
*Scaleform UI dispatcher: depending on a mode check (FUN_1050a550), rebuilds the pet property view via CPetPanelUI::BuildSubSkillListVO + BuildEquippedSkillLists, sets _PetPos, fires RefreshPetPropertyUI and _root.Global_PetAvatarRefresh; sets dirty flags at +0x18c/+0x18d.* (server: client-only, conf medium)
- ƒ pet list non-empty test: *(this+0x134) != *(this+0x138)

### CPetPanelUI::RefreshByMode `@0x10512310` — pets/UI
*Scaleform UI: mode-gated refresh that sets _PetPos, calls RefreshPetInfoByPos and ShowAsEnviroment(*(this+0x180)); otherwise delegates to RefreshPetList (0x10510ff0).* (server: client-only, conf medium)

### CPetPanelUI::RenderPetAvatar3D `@0x10516d50` — pets/UI
*Scaleform: positions/scales the 3D pet avatar render (color-transform + translate) reading 4 double values from the incoming VO (offsets +0x8, +0x20, +0x38, +0x50) and blits into petavatarimg when dirty.* (server: client-only, conf low)
- ƒ reads doubles at VO+0x8, +0x20, +0x38, +0x50 (guarded by type-tag byte &0x8f==5 meaning double)
- ƒ final translate/scale multiplied by device scale factor and _DAT_11de99c8/_DAT_11de99d8

### CPetPanelUI::RenderPetAvatarImage `@0x10512a20` — pets/UI
*Scaleform: fetches the FlashUI render target and blits the pet avatar into the 'petavatarimg' element, scaling by a DPI factor from the render device.* (server: client-only, conf medium)
- ƒ render size = deviceScale * _DAT_11de99c8 (H) and _DAT_11de99d8 (V)

### CPetPanelUI::SetPetName `@0x10517820` — pets/UI
*Scaleform: writes the pet's display name into the _PetName field (name fetched via FUN_112f64e0 from pet id at +0x34/+0x38).* (server: client-only, conf medium)

### CPetQualityInfo::GetRowByIndex `@11753bd0` — pets/quality
*Bounds-checked flat-array accessor into the CPetQualityInfo table (pet star/quality-grade definitions).* (server: authoritative data (quality/star grade table; server owns quality growth), conf high)
- ƒ mgr=GetInfoManager("CPetQualityInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CPetSkinInfo::GetRowByIndex `@11753c30` — pets/skin
*Bounds-checked flat-array accessor into the CPetSkinInfo table (pet skin definitions).* (server: client-only (skin visuals), conf high)
- ƒ mgr=GetInfoManager("CPetSkinInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CSoulBeastEvolveInfo::GetRowByIndex `@117b8800` — pets/soul-beast/evolution
*Bounds-checked flat-array accessor into the CSoulBeastEvolveInfo table (soul-beast evolution definitions: evolution requirements/results).* (server: authoritative data (evolution requirement/result table; server owns evolution), conf high)
- ƒ mgr=GetInfoManager("CSoulBeastEvolveInfo"); if 0<=i<((mgr+0x18-mgr+0x14)>>2) return *(mgr+0x14+i*4) else 0

### CSoulBeastInfo::GetRecordById `@0x10520400` — pets/soul-beast/config
*CSoulBeastInfo config accessor with base-offset + 2D (row/col) indexing: resolves singleton, adjusts id by base offset mgr[0xc], then indexes the row/col table (cols = mgr[10]).* (server: client-only (static config table), conf high)
- ƒ guard: param!=-1 && (param!=0 \|\| mgr[0xc]==0) && mgr[10]!=0
- ƒ idx = param - mgr[0xc]; valid if 0<=idx<mgr[9]
- ƒ row = mgr[8][idx / mgr[10]]; return row[idx % mgr[10]]

### CSoulBeastInfo::GetRecordByIndex `@0x105204a0` — pets/soul-beast/config
*CSoulBeastInfo linear-index accessor: returns record ptr at index param_1 from [mgr+0x14..mgr+0x18].* (server: client-only, conf high)
- ƒ bounds: 0<=param<(mgr[6]-mgr[5])>>2; return *(mgr[5]+param*4)

### CSoulBeastInfo::ReleaseManager `@0x10520530` — pets/soul-beast/config
*Resolves CSoulBeastInfo singleton and calls its vtable+0x28 cleanup method.* (server: client-only, conf medium)

### CSoulBeastPanelUI::BuildFaceListVO `@0x10524c10` — pets/soul-beast/appearance
*Builds the beastFaceArray VO and CurrentFaceID: iterates all face/appearance config entries emitting iItemId, strIcon, iLevel(req level), isLock (locked if current level below req), bIsUse (equipped == current face id).* (server: authoritative (server owns current face id and unlock-by-level); client mirror for UI, conf high)
- ƒ per-face fields: +0x4 iItemId, +0x1c strIcon, +0x50 iLevel (required level)
- ƒ isLock = (currentLevel(FUN_11439380) < face.reqLevel(+0x50))
- ƒ bIsUse = (face.itemId(+0x4) == currentFaceId(FUN_11439740))
- ƒ CurrentFaceID = FUN_11439740()

### CSoulBeastPanelUI::BuildFeedAndEvolveVO `@0x105245e0` — pets/soul-beast/evolution+feeding
*KEY FORMULA FUNCTION. Builds the soul-beast feed/evolve detail VO: current level/growth/hunger and their caps, max-level/evolve state, evolution gold+silver+item costs and affordability flags, and food-box capacity. Reads evolve-info and level-up-info config records.* (server: authoritative (server owns level/growth/hunger and computes evolution eligibility & cost consumption; this is the client mirror for the confirm UI, so exact numbers match server rules), conf high)
- ƒ iLevel = FUN_11439380() (current soul-beast level)
- ƒ iGrow = FUN_11439200() (current growth/exp)
- ƒ iHungry = FUN_115aad40() (current satiety/hunger)
- ƒ iMaxGrow = levelUpInfo(FindInfoByTypeLevel(type)).field(+0x1c)
- ƒ iMaxHungry = FUN_1171a1d0().field(+0x48)
- ƒ iMaxLevel selection: if curLevel >= CSoulBeastLevelUpInfo::GetMaxLevel(type) -> 0xffffffff(-1); else if evolveStage < CSoulBeastEvolveInfo::GetMaxEvolveStage(type) -> nextEvolve.reqLevel(evolveInfo+0x1c); else -> 0xfffffffe(-2)
- ƒ bCanEvolveBeast = (evolveInfo.reqLevel(+0x1c) <= curLevel)
- ƒ iNeedGold = evolveInfo(+0x24); bEnoughGold = iNeedGold <= FUN_11396e10(iNeedGold, 0)  [currency-0 balance check]
- ƒ iNeedSilver = evolveInfo(+0x20); bEnoughSilver = (gold+silver) <= FUN_11396e10(gold+silver, 1)  [currency-1 balance check]
- ƒ arrNeedItems: iterate evolve item-req list from *(evolveInfo+0x30) down to (evolveInfo+0x28), stride 0x10; per item iItemId(+0x10), iItemCount(+0x14), bEnough = required(+0x14) <= inventoryCount(FUN_113fa380(itemId))
- ƒ iBoxCapacity = FUN_114c7530(); iMaxBoxCapacity = FUN_114c7510() (food-box capacity)
- $ evolution gold cost = evolveInfo+0x24
- $ evolution silver cost = evolveInfo+0x20 (checked as gold+silver combined)
- $ evolution material items = list at evolveInfo+0x28..+0x30 (stride 0x10: itemId@+0x10, count@+0x14)
- $ level cap sentinels: -1 = at max level, -2 = at max evolve stage

### CSoulBeastPanelUI::BuildFoodListVO `@0x10524f20` — pets/soul-beast/feeding
*Builds the beastFoodArray VO: iterates the soul-beast's valid food item list emitting iItemId, iItemCount (player inventory count), and iItemLevel.* (server: authoritative (server validates feed-item eligibility & consumes items); client mirror, conf high)
- ƒ per-food fields: +0x4 iItemId; iItemCount = FUN_113fa380(itemId) (owned count); iItemLevel = foodItem.vtbl+0x18()

### CSoulBeastPanelUI::BuildUnlockConditionVO `@0x10523e90` — pets/soul-beast/evolution
*Builds the soul-beast stage/unlock condition VO array (lockConditionArr): for each condition evaluates an unlock checker and emits iUnlockType, bIsUnlock, iUnlockParam, and (for level-type conditions) a param label; sets aggregate bIsUnlock/lockType and lockConditionTips.* (server: validation (mirrors server-side unlock rules for display; server is authoritative on whether a stage is unlocked), conf medium)
- ƒ condition checker: (*(vtbl+8))(playerCtx, condition, ...) -> bIsUnlock (bool)
- ƒ aggregate bIsUnlock stays true only while every condition returns true
- ƒ switch(unlockType): case 1/2/4/5/6 -> iUnlockParam = *(cond+4); case 3 (level/quest) -> iUnlockParam = *(cond+8), and label lookup key = *(cond+4)*100 + *(cond+8) via FUN_10520b90, label from result+0x14
- ƒ non-checker branch (FUN_11412fc0 true): reads current level (FUN_11439380 -> iLevel) and a second value (FUN_11439200), lockType=2

### CSoulBeastPanelUI::InitModel `@0x10521420` — pets/soul-beast/UI
*Initializes the Soul Beast panel's Flash<->native callback registry, binding external interface names to handlers: InitModel, GetSoulStoneData, GetAttrUpData, Reset, StageUp, UnlockStage, LearnAttr, GetItemName, CloseUI, SetAvatarFrameData, SendSoulBeastSocialAction, GetSoulBeastSocialActionData, UnLockBeast, GetSoulBeastConditionArr, GetSoulBeastData, GetSoulBeastDetailData, GetSoulBeastFace, GetSoulBeastFood, OnlyOneFeedTips, FeedSoulBeast, IsAchieveMaxLevel, etc. Also caches gfx_draw/gfx_draw_only material handles.* (server: client-only (UI dispatch table; the named actions map to server requests handled elsewhere), conf medium)

### CSoulBeastPanelUI::RenderAvatar3D `@0x10525e00` — pets/soul-beast/UI
*Scaleform: color-transforms and positions the soul-beast 3D avatar into avatarSoulBeastShow, reading 4 doubles from the VO and firing _root.Global_SoulBeastAvatarRefresh; near-identical to the pet variant at 0x10516d50.* (server: client-only, conf low)
- ƒ reads doubles at VO +0x8/+0x20/+0x38/+0x50; scale by device factor * _DAT_11de99c0

### CSoulBeastPanelUI::RenderAvatarImage `@0x10526080` — pets/soul-beast/UI
*Scaleform: blits the soul-beast avatar into the avatarSoulBeastShow element scaled by device DPI factor.* (server: client-only, conf low)
- ƒ render size = deviceScale * _DAT_11de99c0

### CSoulBeastPanelUI::SetupAvatarModel `@0x10521f00` — pets/soul-beast/UI
*Registers avatar-refresh callbacks (event ids 0x1121/0x1122) and fires _root.Global_SoulBeastAvatarRefresh; stores the avatar object at this+0x44.* (server: client-only, conf low)
- ƒ event ids 0x1121, 0x1122

### PetAvatarInfo::PackText `@0x10200df0` — pets/appearance
*TDR text serializer for a pet avatar record: petID, skinID, a fixed 6-element avatarInfo array (byte-encoded via FUN_1010c010 with fmt 0x%02x-style), then sex (int8, fmt "0x%02x") and slot.* (server: authoritative (server stores pet appearance/skin/slot), conf high)
- ƒ struct layout: +0x0 petID (int32), +0x4 skinID (int32), +0x8 avatarInfo[6] (each element 4 bytes, iterated 6x), +0x20 sex (int8, fmt "0x%02x"), +0x21 slot (uint32 read unaligned)
- ƒ avatarInfo array header written via TdrText_ArrayHeader(...,6,0) then 6 elements

### PetBlobMsg::PackText `@0x10393970` — pets/serialization
*TDR text serializer for a variable-length pet blob: dwEntityId, iSize (bounds-checked), then szPet1[iSize] as a byte array. Validates size range before emitting.* (server: validation (server enforces size bounds on the pet payload), conf high)
- ƒ struct: +0x0 dwEntityId (uint32), +0x4 iSize (int32), +0x8 szPet1[iSize] (byte array)
- ƒ bounds check: if iSize<0 return -6; if iSize>0x400 (1024) return -7
- ƒ array iterated byte-by-byte via FUN_1010c010
- $ max blob size = 0x400 = 1024 bytes

### PetDailyRecord::PackText `@0x104190e0` — pets/daily
*TDR text serializer for {iPetIdx, iDateDay, iCurHigher} - a per-pet daily record tracking a date-day and a current-highest value.* (server: authoritative (server tracks daily counter/highest with date-day reset), conf medium)
- ƒ struct: +0x0 iPetIdx (int32), +0x4 iDateDay (int32), +0x8 iCurHigher (int32)

### PetErrResp::PackText `@0x103c1e20` — pets/serialization
*TDR text writer for {iPetID, iErrCode}.* (server: serialization plumbing, conf high)
- ƒ struct: +0x0 iPetID, +0x4 iErrCode (int32)

### PetErrResp::UnpackText `@0x103c1d80` — pets/serialization
*TDR text reader for {iPetID, iErrCode}. Returns -0x13 if source null.* (server: serialization plumbing (server-authored error response), conf high)
- ƒ struct: +0x0 iPetID (int32), +0x4 iErrCode (int32); null guard -> -0x13

### PetFacilityRef::PackText_A `@0x103c1430` — pets/farm-facility
*TDR text serializer for {iPetID, iFacilityType, iFacilityIndex}.* (server: serialization plumbing, conf high)
- ƒ struct: +0x0 iPetID, +0x4 iFacilityType, +0x8 iFacilityIndex (all int32)

### PetFacilityRef::PackText_B `@0x103c1ab0` — pets/farm-facility
*TDR text serializer for {iPetID, iFacilityType, iFacilityIndex}; byte-identical to 0x103c1430.* (server: serialization plumbing, conf high)
- ƒ struct: +0x0 iPetID, +0x4 iFacilityType, +0x8 iFacilityIndex (all int32)

### PetFacilitySlotReq::PackText `@0x103c2150` — pets/farm-facility
*TDR text serializer for {iPetID, iFacilityType, iFacilityIndex, nFacilitySlot}.* (server: validation (server validates facility slot assignment), conf high)
- ƒ struct: +0x0 iPetID (int32), +0x4 iFacilityType (int32), +0x8 iFacilityIndex (int32), +0xc nFacilitySlot (int16)

### PetFacilityUseResp::PackText `@0x103c2530` — pets/farm-facility
*TDR text serializer for a facility-use response: iPetID, iErrCode, iFacilityType, iFacilityIndex, nFacilitySlot, nIsFirstUse, dwLeftTime.* (server: authoritative (server computes remaining time, first-use flag, error code), conf high)
- ƒ struct: +0x0 iPetID (int32), +0x4 iErrCode (int32), +0x8 iFacilityType (int32), +0xc iFacilityIndex (int32), +0x10 nFacilitySlot (int16), +0x12 nIsFirstUse (int16), +0x14 dwLeftTime (uint32)

### PetFacilityWorkReq::PackText `@0x103bf800` — pets/farm-facility
*TDR text serializer for a pet farm/facility work request: iFacilityType, iFacilityIndex, iPlowLandIndex, a 4-element pet array, a 4-element tools array, and bSkipCutScene flag.* (server: validation (server validates facility/pet/tool assignment request), conf high)
- ƒ struct: +0x0 iFacilityType (int32), +0x4 iFacilityIndex (int32), +0x8 iPlowLandIndex (int32), +0xc pet[4] (4x int32), +0x1c tools[4] (4x int32), +0x2c bSkipCutScene (int8, fmt "0x%02x")
- ƒ pet and tools arrays are fixed length 4 each (TdrText_ArrayHeader(...,4,0))
- $ up to 4 pets and 4 tools per facility work order

### PetGatherRecord::PackText `@0x101ff650` — pets/gather-farm
*TDR text serializer for a pet gathering/farm record. Emits curExp, level, gatherCount, lastRefreshTime, petID, gatherLevel in order (short-circuits on first non-zero return).* (server: authoritative (server owns gather EXP/level and refresh timing); this is the client-side text codec mirror, conf high)
- ƒ struct layout: +0x0 curExp (int32), +0x4 level (int16), +0x6 gatherCount (int16), +0x8 lastRefreshTime (uint32), +0xc petID (int32), +0x10 gatherLevel (int16)
- ƒ field width note: level/gatherCount/gatherLevel are 16-bit; curExp/lastRefreshTime/petID are 32-bit

### PetShowChxTime::CheckDailyReset `@0x105193a0` — pets/UI-preference
*Loads the persisted 'PetShowChxTime' timestamp, converts both it and now via _localtime64_s, and sets an output flag when the stored year/month/day differ from today (daily-reset detection for a pet UI 'show' hint).* (server: client-only (local persisted preference / daily flag, not server state), conf medium)
- ƒ reset trigger if (storedYear != todayYear) \|\| (storedMon != todayMon) \|\| (storedDay != todayMday); day compared via tm_isdst field reuse (decompiler artifact)

### PetShowChxTime::Persist `@0x10519500` — pets/UI-preference
*Writes/clears the persisted 'PetShowChxTime' value (stores current time via FUN_111f8d20 when flag set, else clears) in the local config store.* (server: client-only, conf medium)

### PetTrainResultResp::PackText `@0x103c3420` — pets/training
*TDR text serializer for a pet TRAINING result: iErrCode, iPetID, iTrainID, then the resulting pet stats iMelee, iDefence, iMaxHP, iLoyalPoint, iSpirit, iPotential.* (server: authoritative (server computes post-training stat block; client only displays), conf high)
- ƒ struct: +0x0 iErrCode (int32), +0x4 iPetID (int32), +0x8 iTrainID (int32), +0xc iMelee (int32), +0x10 iDefence (int32), +0x14 iMaxHP (int32), +0x18 iLoyalPoint (int32), +0x1c iSpirit (int32), +0x20 iPotential (int32)

### SoulBeastActionDef::RegisterReflection `@1177f340` — pets/soul-beast
*Reflection registration stub for 'SoulBeastActionDef' (soul-beast action/animation table row).* (server: client-only, conf high)
- ƒ *(obj+0x10)=obj; *(obj+0x14)=obj; RegisterDef("SoulBeastActionDef","")

### SoulBeastActionDef::RegisterReflection_dup `@11781020` — pets/soul-beast
*Duplicate registration stub for 'SoulBeastActionDef'.* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastActionDef","")

### SoulBeastDef::RegisterReflection `@116ebac0` — pets/soul-beast
*Reflection/type-descriptor registration stub for the 'SoulBeastDef' data-table row type. Sets self-pointers at obj+0x10 and obj+0x14, then calls FUN_100b62c0("SoulBeastDef","") to register the schema name. Stock data-def plumbing.* (server: client-only (reflection registration; schema name shared with server data tables), conf high)
- ƒ *(obj+0x10)=obj; *(obj+0x14)=obj; RegisterDef("SoulBeastDef","")

### SoulBeastDef::RegisterReflection_dup `@116ebb20` — pets/soul-beast
*Byte-identical duplicate of FUN_116ebac0; registers 'SoulBeastDef' reflection descriptor.* (server: client-only, conf high)
- ƒ *(obj+0x10)=obj; *(obj+0x14)=obj; RegisterDef("SoulBeastDef","")

### SoulBeastFoodDef::RegisterReflection `@1177f370` — pets/soul-beast
*Reflection registration stub for 'SoulBeastFoodDef' (soul-beast feeding/food table row).* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastFoodDef","")

### SoulBeastFoodDef::RegisterReflection_dup `@11781050` — pets/soul-beast
*Duplicate registration stub for 'SoulBeastFoodDef'.* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastFoodDef","")

### SoulBeastImageDef::RegisterReflection `@1177f3a0` — pets/soul-beast
*Reflection registration stub for 'SoulBeastImageDef'.* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastImageDef","")

### SoulBeastImageDef::RegisterReflection_dup `@11781080` — pets/soul-beast
*Duplicate registration stub for 'SoulBeastImageDef'.* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastImageDef","")

### SoulBeastLieHunCheckDef::RegisterReflection `@1177f3d0` — pets/soul-beast/evolution
*Reflection registration stub for 'SoulBeastLieHunCheckDef' (soul-beast 'LieHun'/soul-hunt check requirement table).* (server: validation (requirement-check definitions server enforces), conf high)
- ƒ RegisterDef("SoulBeastLieHunCheckDef","")

### SoulBeastLieHunCheckDef::RegisterReflection_dup `@117810b0` — pets/soul-beast/evolution
*Duplicate registration stub for 'SoulBeastLieHunCheckDef'.* (server: validation, conf high)
- ƒ RegisterDef("SoulBeastLieHunCheckDef","")

### SoulBeastShouHunCheckDef::RegisterReflection `@1177f400` — pets/soul-beast/evolution
*Reflection registration stub for 'SoulBeastShouHunCheckDef' ('ShouHun'/beast-hunt check requirement table).* (server: validation, conf high)
- ƒ RegisterDef("SoulBeastShouHunCheckDef","")

### SoulBeastShouHunCheckDef::RegisterReflection_dup `@117810e0` — pets/soul-beast/evolution
*Duplicate registration stub for 'SoulBeastShouHunCheckDef'.* (server: validation, conf high)
- ƒ RegisterDef("SoulBeastShouHunCheckDef","")

### SoulBeastSocialActionDef::RegisterReflection `@1177f430` — pets/soul-beast
*Reflection registration stub for 'SoulBeastSocialActionDef' (soul-beast social/interaction action table).* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastSocialActionDef","")

### SoulBeastSocialActionDef::RegisterReflection_dup `@11781110` — pets/soul-beast
*Duplicate registration stub for 'SoulBeastSocialActionDef'.* (server: client-only, conf high)
- ƒ RegisterDef("SoulBeastSocialActionDef","")

### SoulBeastSoulStoneLevelCheckDef::RegisterReflection `@1177f460` — pets/soul-beast/evolution
*Reflection registration stub for 'SoulBeastSoulStoneLevelCheckDef' (soul-stone level requirement check table for evolution).* (server: validation (evolution soul-stone-level requirements), conf high)
- ƒ RegisterDef("SoulBeastSoulStoneLevelCheckDef","")

### SoulBeastSoulStoneLevelCheckDef::RegisterReflection_dup `@11781140` — pets/soul-beast/evolution
*Duplicate registration stub for 'SoulBeastSoulStoneLevelCheckDef'.* (server: validation, conf high)
- ƒ RegisterDef("SoulBeastSoulStoneLevelCheckDef","")

### SoulBeastSoulStoneStageCheckDef::RegisterReflection `@1177f4f0` — pets/soul-beast/evolution
*Reflection registration stub for 'SoulBeastSoulStoneStageCheckDef' (soul-stone stage requirement check table for evolution).* (server: validation (evolution soul-stone-stage requirements), conf high)
- ƒ RegisterDef("SoulBeastSoulStoneStageCheckDef","")

### SoulBeastSoulStoneStageCheckDef::RegisterReflection_dup `@117811d0` — pets/soul-beast/evolution
*Duplicate registration stub for 'SoulBeastSoulStoneStageCheckDef'.* (server: validation, conf high)
- ƒ RegisterDef("SoulBeastSoulStoneStageCheckDef","")

### SoulBeastState::PackText `@0x102074e0` — pets/soul-beast
*TDR text serializer for the persistent Soul Beast state record. Emits soulBeastGID (int64), oCharLevel, oCharExp, oCharGlut (glutton/hunger), oEvloveStage, oImage, oFollow, oFeedTime.* (server: authoritative (server owns soul-beast level/exp/hunger/evolve-stage/feed-time), conf high)
- ƒ struct layout: +0x0 soulBeastGID (int64, fmt "%I64u", uses *param_1 + param_1[1]), +0x8 oCharLevel (int32), +0xc oCharExp (int32), +0x10 oCharGlut/hunger (int32), +0x14 oEvloveStage (int32), +0x18 oImage/faceID (int32), +0x1c oFollow (int32), +0x20 oFeedTime (int32)

### SoulBeastType::PackTextField `@0x10412430` — pets/soul-beast/serialization
*Minimal TDR text writer for [szSoulBeastType] field.* (server: serialization plumbing, conf medium)
- ƒ writes [szSoulBeastType] via TdrText_FieldValueFmt

### SoulBeastType::UnpackTextField `@0x104123c0` — pets/soul-beast/serialization
*TDR text reader for a single [szSoulBeastType] formatted value field; returns -0x13 (0xffffffed) if source null, else the TdrText_FieldValueFmt result.* (server: serialization plumbing, conf medium)
- ƒ single field [szSoulBeastType] via TdrText_FieldValueFmt; null guard -> 0xffffffed (-19)

### SoulBeastType::UnpackTextField_Bounded `@0x104124d0` — pets/soul-beast/serialization
*TDR text reader for [szSoulBeastType] into a bounded buffer; clamps NUL position to cap-1 via TdrBuf_PutNulAt.* (server: serialization plumbing, conf medium)
- ƒ clamp: if cap<=len then nulPos = cap-1; TdrBuf_PutNulAt(cap,nulPos)

### SoulBeastType::UnpackTextField_Buf `@0x10412450` — pets/soul-beast/serialization
*TDR text reader for [szSoulBeastType] into a caller buffer with NUL termination; returns &DAT_11d9d32b (empty string) if buffer/len null.* (server: serialization plumbing, conf medium)
- ƒ NUL-terminates output buffer at index 0 (or -1 if len==0)

### TaskPetEmploymentContentDef::RegisterReflection `@117802d0` — pets/tasks
*Reflection registration stub for 'TaskPetEmploymentContentDef' (task/employment pet dispatch content table).* (server: authoritative data (pet dispatch/employment task content), conf high)
- ƒ RegisterDef("TaskPetEmploymentContentDef","")

### TaskPetEmploymentContentDef::RegisterReflection_dup `@11781fb0` — pets/tasks
*Duplicate registration stub for 'TaskPetEmploymentContentDef'.* (server: authoritative data, conf high)
- ƒ RegisterDef("TaskPetEmploymentContentDef","")

### TaskPetFilterDef::RegisterReflection `@11780300` — pets/tasks
*Reflection registration stub for 'TaskPetFilterDef' (pet task eligibility/filter table).* (server: validation, conf high)
- ƒ RegisterDef("TaskPetFilterDef","")

### TaskPetFilterDef::RegisterReflection_dup `@11781fe0` — pets/tasks
*Duplicate registration stub for 'TaskPetFilterDef'.* (server: validation, conf high)
- ƒ RegisterDef("TaskPetFilterDef","")

### TaskPetTrainingContentDef::RegisterReflection `@11780360` — pets/training
*Reflection registration stub for 'TaskPetTrainingContentDef' (pet training task content table).* (server: authoritative data (training task content), conf high)
- ƒ RegisterDef("TaskPetTrainingContentDef","")

### TaskPetTrainingContentDef::RegisterReflection_dup `@11782040` — pets/training
*Duplicate registration stub for 'TaskPetTrainingContentDef'.* (server: authoritative data, conf high)
- ƒ RegisterDef("TaskPetTrainingContentDef","")

### WeaponUIConfig::LoadFromXml `@0x10530e20` — pets/UI-config
*Loads Libs/WeaponUIConfig.xml (WeaponUICOnfigs): parses GlobalConfig (maxscale/minscale/scalespeed), per-weapon WeaponConfigs (indexed by weaponid-0x1f into a 12-slot table stride 0x48), EquipConfigs with PlayerConfig and PetConfig, and WeaponConfigOverride entries.* (server: client-only (visual placement/scale config), conf medium)
- ƒ weapon slot index = weaponid - 0x1f, valid range [0,0xc); slot base = base + index*0x48
- ƒ GlobalConfig writes: maxscale->DAT_11e22934, minscale->DAT_11e22938, scalespeed->this+0x2c

### data::SoulBeastDetailMo::ctor `@0x10520ea0` — pets/soul-beast/UI-VO
*Constructor for the 'mh.data::SoulBeastDetailMo' Scaleform value-object.* (server: client-only, conf high)
- ƒ tags obj with "mh.data::SoulBeastDetailMo" when ctx set

### data::SoulBeastFaceMo::ctor `@0x10520d90` — pets/soul-beast/UI-VO
*Constructor for the 'mh.data::SoulBeastFaceMo' Scaleform value-object.* (server: client-only, conf high)
- ƒ tags obj with "mh.data::SoulBeastFaceMo" when ctx set

### data::SoulBeastFoodMo::ctor `@0x10521210` — pets/soul-beast/UI-VO
*Constructor for the 'mh.data::SoulBeastFoodMo' Scaleform value-object.* (server: client-only, conf high)
- ƒ tags obj with "mh.data::SoulBeastFoodMo" when ctx set

### data::SoulBeastMo::ctor `@0x10520c80` — pets/soul-beast/UI-VO
*Constructor for the 'mh.data::SoulBeastMo' Scaleform value-object; zero-inits and tags with the class name when a movie context is provided.* (server: client-only, conf high)
- ƒ obj[0]=0; obj[1]=0; obj[6]=ctx; if ctx: FUN_11a98de0(obj,"mh.data::SoulBeastMo",0,0)

### data::SoulBeastUnlockMo::ctor `@0x10521120` — pets/soul-beast/UI-VO
*Constructor for the 'mh.data::SoulBeastUnlockMo' Scaleform value-object.* (server: client-only, conf high)
- ƒ tags obj with "mh.data::SoulBeastUnlockMo" when ctx set


## pet-avatar  (11)

### CPetAvatar::AttachWeaponModel `@0x10af8d80` — pet-avatar/render
*Creates the pet weapon render entity 'AvatarImagePetWeapon' (class BasicEntity, flags 0x200000), resolves weapon avatar record via CAvatarInfo::ResolveRecordById(param_2), loads its model (record+0x2c), attaches to a named weapon bone from table (&PTR_s_weapon_11df7434)[param_3], applies material (record+0x6c via material manager), and sets a full attach transform (rotation/pos from record offsets 0xc4..0xdc, scale 0x3f800000=1.0f).* (server: client-only (rendering pet's weapon)., conf medium)
- ƒ attach transform constant 0x3f800000 = 1.0f (uniform scale)
- ƒ record offsets: model @ +0x2c, material @ +0x6c (!= +0x68), rot block @ +0xc4/+0xc8/+0xcc/+0xd0/+0xd4/+0xd8/+0xdc, byte flag +0xe4, +0xe0
- ƒ weapon bone name = (&PTR_s_weapon_11df7434)[param_3]

### CPetAvatar::CreateAnimObjectEntity `@0x10af8a80` — pet-avatar/render
*Creates the pet render entity. Gets EntitySystem (ctx+0x50), creates entity class 'AnimObject' named 'AvatarImagePet' flags 0x200000 with the given transform (7 dwords), then loads character model 'Objects/characters/pet/pet_skeleton.cdf' (vtbl+0x1d4), gets its render node (vtbl+0x1b8), ORs render flag \|0x10 and enables (vtbl+0x1c4(1)). Returns the entity pointer.* (server: client-only (spawns visual-only entity)., conf high)
- ƒ render flag \|= 0x10 on the pet's IRenderNode
- ƒ spawn flags = 0x200000

### CPetAvatar::RebuildAttachments `@0x10aeba30` — pet-avatar/render
*Rebuilds pet avatar attachments. Clears prior attachment object (+0x370), optional reset (param_4), resolves CPetAvatarInfo model string, atoi's various string IDs from a record list at param_2 (base id @ +0x44, slot list @ +0x4c..+0x54), resolves each via CAvatarInfo::ResolveRecordById, and attaches/clears slots (CAvatarInfo::ClearSlotAttachment) walking a red-black-tree of slot entries.* (server: client-only (avatar equipment/appearance attachment)., conf medium)
- ƒ slot-record type gate: entries with (*(entry+0x10) >= 0x47) vs (<0x47) select different child pointers (0x47 = attachment record type tag)
- ƒ record IDs parsed with atoi from string fields (+0x44 base, +0x28 per slot, +0x14 name)

### CPetAvatar::ResolveAvatarAndPetModel `@0x10c0a490` — pet-avatar/render
*Given a base avatar id string (param_2), resolves it in CAvatarInfo, then resolves CPetAvatarInfo record for param_3 to get the pet model string, compares param_4 vs empty (custom weapon/attach id); if non-empty resolves it in CAvatarInfo (expects type 0x47) and applies. Finally calls FUN_10ad8ca0(param_1, avatarId, modelString). String refcount cleanup throughout.* (server: client-only (model resolution)., conf medium)
- ƒ avatar type check == 0x47 (attachment record type)
- ƒ both CAvatarInfo and CPetAvatarInfo use paged-array lookup (base +0x30, count +0x24, stride +0x28, table +0x20)

### CPetAvatar::ResolveModelAndAttach `@0x10aea450` — pet-avatar/render
*Pet avatar model resolution. If flag byte @ +0xac is 0, delegates to FUN_10aeb7b0. Otherwise reads pet-avatar key (*(this+0xb0) -> **), resolves CPetAvatarInfo record, extracts model string (record+0x28, strlen'd) via FUN_1083ab70, then applies attachment via FUN_10aebf60. Handles refcount cleanup.* (server: client-only (rendering/appearance)., conf medium)
- ƒ record model string ptr @ record+0x28 (null-terminated; length computed by scan)

### CPetAvatar::SetBodyModelByKey `@0x10af8620` — pet-avatar/render
*Resolves CPetAvatarInfo record for key param_2 (paged lookup), sets its model string, then calls FUN_10af86c0(this+0x84, valid?1:0) to (re)apply. param_2==-1 means clear.* (server: client-only (rendering)., conf medium)
- ƒ valid flag uVar6 = (param_2 != -1) ? 1 : 0

### CPetAvatar::SetModelByKey_Temp `@0x10af8900` — pet-avatar/render
*Builds a temp transform holder (FUN_10af8c60), resolves CPetAvatarInfo model string for key param_2 (paged lookup), applies via FUN_10af86c0(&temp, valid?1:0).* (server: client-only (rendering)., conf medium)
- ƒ valid flag = (param_2 != -1) ? 1 : 0

### CPetAvatar::SetTransformAndModel `@0x10af89c0` — pet-avatar/render
*Stores a 7-dword transform block (from param_3) into this+0x54..+0x6c, computes a key (param_2!=0 ? FUN_113ef9d0() : 1), resolves CPetAvatarInfo model string for that key (paged lookup). Returns 1.* (server: client-only (rendering)., conf medium)
- ƒ key iVar6 = (param_2 != 0) ? FUN_113ef9d0() : 1
- ƒ transform: quat @ this+0x54..+0x60, pos @ +0x64..+0x6c copied from param_3[0..6]

### CPetAvatarConfig::Load `@0x10ad2e20` — pet-avatar/config
*Loads XML 'libs/avatar/PetAvatarConfig.xml' via the XML system (context vtbl+0x1c0). Reads child node count (vtbl+0xa0); if >0 sets a pointer at param_1+0x6c (then FUN_10c3d580(8) - decompiler flags no-return; likely container alloc). Releases the XML node. Returns 1.* (server: client-only (loads visual/avatar config)., conf medium)

### CPetAvatarImage::Init `@0x10af84f0` — pet-avatar/render
*Initializes a pet avatar image object. Copies a 7-dword transform block (pos/rot/scale) from param_4 into this+0x15..+0x1b, resolves CPetAvatarInfo model string, creates the AnimObject entity via FUN_10af8a80 (stored at this+0x14), enables update (vtbl+0xf8(1)), applies transform (FUN_10af8c60/FUN_10af86c0), mirrors transform to +0x21..+0x24, marks ready byte +0x13=1. Returns 1 on success.* (server: client-only (rendering)., conf medium)
- ƒ transform block = 7 dwords (quat[4] @ +0x15..+0x18, pos[3] @ +0x19..+0x1b) copied from param_4[0..6]

### CPetAvatarInfo::GetRecordByKey `@0x10ae8f20` — pet-avatar/config
*Config accessor for CPetAvatarInfo (pet appearance table) via CPetAvatarInfo::FindInfoByKey manager, then paged-array lookup (base +0x30, count +0x24, stride +0x28, table +0x20).* (server: config-data lookup (appearance); mostly client-only., conf high)
- ƒ paged lookup with offsets base +0x30, count +0x24, stride +0x28, table +0x20 (same shape as CCatCuisine but different member offsets on this manager type)


## soul-beast  (8)

### CSoulBeast::ApplyAvatarAndAttrUpdate `@0x112e8f10` — soul-beast
*For soul-beast id (param_1+8): validates CSoulBeastInfo row, optionally (when param_2 != 0) applies an avatar-model change (FUN_114137f0 + FUN_115aaf40 with data at param_1+0x2c/+0x28), then pushes a 7-dword attribute update (param_1+0xc..+0x24) via FUN_114380a0 and a follow-up FUN_114382c0.* (server: client-only: applies server-authored soul-beast avatar/attribute state., conf medium)
- ƒ attr block = param_1+0x0c .. +0x24 (7 dwords)

### CSoulBeast::ApplyEvolveOrLevelState `@0x114126f0` — soul-beast
*Given a soul-beast stage/level key (param_2), walks a balanced-tree map (root at param_1+0x70, node fields +8/+0xc children, +0x10 key) to find the matching node; validates the CSoulBeastInfo row; iterates the row's effect list (detail+0x2c -> +0x10.. +0x14) applying each effect handler (FUN_115d1b10 -> vtbl+8). Emits error/notice prompts 0x121b, 0x1201, or 0x1214 on the various failure/empty paths.* (server: client-only: applies soul-beast evolution/level effects and shows prompts. Effect application driven by server-sent state., conf low)
- ƒ tree search: at each node go left(+8) if key <= node+0x10 else right(+0xc)
- ƒ prompt ids: 0x121b (no node/empty), 0x1201 (row invalid), 0x1214 (empty effect list)
- $ prompt/notice ids 0x121b, 0x1201, 0x1214

### CSoulBeast::OnActivatePlayNotice `@0x112160b0` — soul-beast
*For soul-beast id (param_1+4): validates the CSoulBeastInfo row exists, resolves the beast's display-name string (row+0x2c +8, fallback DAT_11d9d32b), formats a notice via FUN_1024e9b0(name,0x2a) and posts prompt FUN_1112f070(0x15f7,...). Marks the beast activated via FUN_114149b0(id,0) and sends client message 0x2c0 {mode=2, id, 0}.* (server: authoritative: server-side soul-beast activation notice + state msg 0x2c0(mode 2). Prompt id 0x15f7., conf medium)
- ƒ prompt = FUN_1112f070(0x15f7, formatted_name)
- ƒ client msg 0x2c0 payload {0x90=2, soulBeastId, 0}
- $ prompt/notice id 0x15f7

### CSoulBeast::OnLevelChangedGrantRewards `@0x11215d30` — soul-beast
*Fired when a soul-beast's level crosses a threshold (param_1+8 = oldLevel, param_1+0xc = newLevel, param_1+4 = soulBeastId). Grants activity reward 0x15f0 unconditionally; looks up the CSoulBeastInfo row, then scans two per-row threshold lists: if any entry in list at row+0x2c/+0x3c has (+0x34) in (old,new] grants 0x15f5; if any entry in list at row+0x2c/+0x28 has (+0x50) in (old,new] grants 0x15f9. Sends message 0x2c0 {mode=7, soulBeastId, 0} to the client and posts a 'PlayChange' UI event (id 0x953).* (server: authoritative: server grants soul-beast level-milestone rewards and notifies the client. Reward ids 0x15f0/0x15f5/0x15f9, message 0x2c0., conf medium)
- ƒ CInfoManager sparse-id lookup on CSoulBeastInfo (idx = id - mgr+0x30; bucket math via mgr+0x20/+0x28)
- ƒ milestone A: for entry in [row+0x2c +0x3c .. +0x40): if old(+8) < entry[+0x34] <= new(+0xc) => GrantActivityReward(0x15f5); break
- ƒ milestone B: for entry in [row+0x2c +0x28 .. +0x2c): if old(+8) < entry[+0x50] <= new(+0xc) => GrantActivityReward(0x15f9); break
- ƒ client msg 0x2c0 payload {0x90=7, soulBeastId, 0}
- $ activity reward ids: 0x15f0 (base), 0x15f5 (skill-slot milestone), 0x15f9 (attr/skill milestone)

### CSoulBeast::TryActivateWithGuard `@0x115f6e60` — soul-beast
*Attempts to activate/interact with a soul beast (id param_1+4) on target actor param_2. Bails (return 0) if the target is busy (vtbl+0xa8 != 0). Validates the CSoulBeastInfo row and a target readiness flag (param_2[0xac5]); if a further activation gate (FUN_11412fc0) fails returns 1, otherwise fires a target event (vtbl+0x464, event 0x15fd) and returns 0.* (server: client-only: soul-beast interaction trigger + event 0x15fd., conf low)
- ƒ event id 0x15fd fired on success
- $ event id 0x15fd

### CSoulBeast::alloc_stub `@0x114149b0` — soul-beast
*Thin allocator/accessor: touches the CSoulBeastInfo manager then allocates a 0x1c0-byte soul-beast object (FUN_10c3d580(0x1c0)). Decompiler shows it as non-returning (tail into allocator).* (server: unknown: allocation plumbing. 0x1c0 = soul-beast runtime object size., conf low)
- ƒ object size = 0x1c0 bytes

### CSoulBeastEvolveInfo::GetRecordById `@0x115341b0` — soul-beast
*CInfoManager sparse-id lookup returning a CSoulBeastEvolveInfo record by raw id.* (server: shared: evolution config accessor., conf high)
- ƒ standard CInfoManager sparse-id lookup on CSoulBeastEvolveInfo

### CSoulBeastEvolveInfo::GetRecordByTypeStage `@0x11534150` — soul-beast
*Resolves a CSoulBeastEvolveInfo record from a composite key built as type*100 + stage. Returns the record pointer or 0.* (server: authoritative/shared: evolution-stage config accessor; the key formula is load-bearing for evolution lookups., conf high)
- ƒ compositeKey = param_1*100 + param_2 (soulBeastType*100 + evolveStage)
- ƒ then standard CInfoManager sparse-id lookup on CSoulBeastEvolveInfo by compositeKey


## pet-runtime  (7)

### CCliLogicPet::AfterEnterBattleGround `@0x112b6fa0` — pet-runtime
*Client pet-logic hook run after entering a battleground. Calls base handler, then if the pet's periodic-timer handle (this[0x7cb]) is unset (-1) schedules a repeating 10000ms timer (FUN_112b7fe0) and stores its handle.* (server: client-only: schedules a 10s client tick for pet logic in battlegrounds., conf high)
- ƒ timer period = 10000 ms; handle stored at this[0x7cb] (byte offset 0x1f2c)

### CCliLogicPet::OnPetSummoned `@0x112b92e0` — pet-runtime
*Handles a pet-summon result. Validates the CPetInfo row for pet id (param_3), builds the pet runtime object via FUN_112fb470/FUN_112fb460 keyed by (petUid param_4, extra param_5), fills its slot fields from the header (param_2+0x15,+0x19), sets active flags (+0x40=1, and +0x44=1 when the pet has no mount weapon), and if the active pet uid matches param_4 sends message 0x20c (pet-summon confirm) and message 0x100, then calls vtbl+100(1,petUid,extra,0).* (server: client-only: applies a server-authored summon result and updates UI/state. Returns 0 on success, 0xffffffff on failure., conf medium)
- ƒ runtime+0x40 = 1 (summoned); if mountWeapon lookup (vtbl+0x4c)==0 then also runtime+0x44 = 1
- ƒ confirm gated on runtime+0x24 == param_4 (active pet uid match)
- ƒ client msgs: 0x20c {0, petUid?, param_5, runtime+0x70}, 0x100 {}

### CCliLogicPet::SpawnPetActorFromBlob `@0x112b84b0` — pet-runtime
*Instantiates the pet actor from a serialized pet-state blob (param_2). Resolves the CPetInfo species row for the pet id (param_2+8), creates/binds the render proxy, copies transform (param_2+0x3c..0x54) and attribute block (param_2+0x5f..0x73) into the actor, calls CActor::ApplyEquipItemBonus with the equipment attr set, sets the pet name (string at param_2+0x1c), and stores the pet's world position (param_2+0x791c/+0x7920) into this+0x1f24/+0x1f28 and the mirror object at this+0x1ed4.* (server: client-only: constructs the visual pet actor and applies equip bonuses for display. Authoritative stats come from the blob the server sent., conf medium)
- ƒ transform copied from param_2+0x3c (12 bytes pos) and +0x4c (12 bytes rot)
- ƒ equip attr block copied from param_2+0x5f (6 dwords) -> CActor::ApplyEquipItemBonus
- ƒ world pos: this+0x1f24=param_2+0x791c; this+0x1f28=param_2+0x7920
- ƒ flag copied via vtbl+4(param_2+0x508b, u16 at param_2+0x5089)

### CPet::ctor_InitCatModelPath `@0x112fb130` — pet-runtime
*Small constructor: initializes an intrusive list head (this+0x10/+0x14 = self) and sets the default Palico model path 'Objects/characters/pet/cat/cat_0'.* (server: client-only: default cat/Palico model asset path., conf high)

### CPetActor::InitFromSpeciesAndPlaySkills `@0x113efa30` — pet-runtime
*Initializes a pet actor instance: stores owner/species pointers (this+0x7b1=owner uid, this+0x7b2=owner ptr, this+0x7b4=species-row ptr, this+0x7b5), copies two attribute vectors (FUN_11414fc0/FUN_11414fe0 from param_5/param_6), binds the mesh (vtbl+0xb0 with species+0x7c), attaches to owner bone or spawns standalone, and finally plays skill animations (CPetSkillInfo::PlaySkillAnimations) and creates buff effects (CBuffInfo::CreateBuffEffects). When param_7 (isLocalPlayerPet) is set it re-resolves the species row from the local player's pet id (FUN_116a6a70 +0xa8).* (server: client-only: pet actor construction and cosmetic skill/buff FX. Buff/skill *effects* application is authoritative elsewhere; here it only plays the visuals., conf medium)
- ƒ this+0x7c5 = (char)isLocalPlayerPet
- ƒ if standalone (no owner): spawn attachment via vtbl chain with args (0x68,-1,-1,...) -> stores handle this+0x7b7/0x7b8/0x7b9

### CPetManager::CanSummonPet `@0x11581920` — pet-runtime
*Validation predicate for summoning a pet (id param_2). Returns 0 (OK) or an error code. Checks: pet row exists; party-leader gate (member+0xc vtbl+0x164); a capability flag (self vtbl+0x78); player hunt rank >= pet required rank (row+0x14); and the summoned-pet count limit.* (server: validation: server must re-check these gates before allowing a summon., conf high)
- ƒ if param_3 (already-summoned?) != 0 => return 0 (allowed / no-op)
- ƒ if not party leader (member+0xc absent or vtbl+0x164==0) => return 0x759b
- ƒ if self capability vtbl+0x78 == 0 => return 0x759c
- ƒ if CPlayer::GetHuntRankOrCount() < row+0x14 (required rank) => return 0x759f
- ƒ curCount = *(this[3]+0x34); maxCount = FUN_1158d1e0(); if curCount <= maxCount => return 0x75a0 (limit reached) else 0
- ƒ if pet row missing => return 0x7596
- $ error codes: 0x7596 invalid pet, 0x759b not-leader, 0x759c no-capability, 0x759f rank-too-low, 0x75a0 pet-limit-reached
- $ row+0x14 = required hunt rank to summon this pet

### CPetManager::SummonPet `@0x11581810` — pet-runtime
*Executes a pet-summon request for pet id (param_2). Runs a pre-check (vtbl+0x18); on success validates the CPetInfo row, optionally recalls the currently-summoned pet (when param_4 flag set, FUN_1158d020/FUN_1158cfd0), then activates the pet (FUN_1158ce40). On failure sets error code (*param_3): 0x759e (activation failed) or 0x7596 (invalid pet id). On success emits vtbl+4(petId, petUid, extra, summonType, ...) and returns petUid.* (server: authoritative: drives the actual pet activation/recall and returns the assigned pet uid + error code., conf medium)
- ƒ err 0x759e = activation (FUN_1158ce40) failed; err 0x7596 = invalid pet id / row missing
- ƒ on success: local_8 = petObj+0x28 (uid?), local_c = petObj+0x24 (id)
- $ error codes 0x7596, 0x759e


## cuisine  (6)

### CCatCuisineInfo::GetRecordByIndex `@0x104fd510` — cuisine/config
*Config-manager accessor: obtains the CCatCuisineInfo singleton (falling back to CInfoManager::FindByName), then returns the record pointer at linear index param_1 from array [mgr+0x14 .. mgr+0x18].* (server: client-only (static config table lookup; server would have its own copy), conf high)
- ƒ index bounds: 0 <= param_1 < (mgr[6]-mgr[5])>>2  (element size 4)
- ƒ return *(mgr[5] + param_1*4)  where mgr[5]=array begin, mgr[6]=array end

### CCatCuisineInfo::ReleaseManager `@0x104fd5a0` — cuisine/config
*Resolves the CCatCuisineInfo singleton and calls its vtable+0x28 method (release/cleanup).* (server: client-only, conf medium)
- ƒ calls (*(mgr+0x28))() after singleton resolution

### CatCuisineReq::PackText `@0x102c0170` — cuisine/serialization
*TDR text writer for iCatCuisineID/dwState pair.* (server: serialization plumbing, conf high)
- ƒ struct: +0x0 iCatCuisineID (int32), +0x4 dwState (uint32)

### CatCuisineReq::UnpackText `@0x102c00d0` — cuisine/serialization
*TDR text reader for a cat-cuisine request: iCatCuisineID into *param_1, dwState into param_1[1]. Returns -0x13 if source null.* (server: validation (server reads/validates cuisine selection request), conf high)
- ƒ struct: +0x0 iCatCuisineID (int32), +0x4 dwState (uint32)
- ƒ null guard returns -0x13

### TlvCatCuisineState::PackText `@0x101718b0` — cuisine/serialization
*TDR text-format serializer (writer) for the cat-cuisine state record: writes [catCuisineID]=*param_1 then [state]=param_1[1].* (server: serialization plumbing, conf high)
- ƒ struct: +0x0 catCuisineID (int32), +0x4 state (uint32)

### TlvCatCuisineState::UnpackText `@0x101717d0` — cuisine/serialization
*TDR text-format deserializer for the cat-cuisine state record. Reads [catCuisineID] into *param_1 and [state] into param_1[1] via TdrText_FieldScalar. Sets up SEH frame and optional cleanup (FUN_10c3da30). Returns -0x13 (-19) if the source buffer (param_2) is null.* (server: serialization plumbing (TDR text codec); struct is server-owned cat-cuisine state (see TlvCatCuisineState), conf high)
- ƒ struct: +0x0 catCuisineID (int32, fmt DAT_11d9e0b4="%d"-style), +0x4 state (uint32, fmt DAT_11d9f574)
- ƒ null-source guard: if param_2==0 return -0x13 (-19)


## pet flownode  (6)

### CFlowNode_PetCutsceneA::GetConfig `@0x10e89600` — pet flownode/cutscene
*Flowgraph node config (guard DAT_12038bc0). Inputs Enable/Disable/eventID(int 'fired event id'). Outputs cutsceneType(type1), petNetID(type1), PetCharacter(type1), PetMaterialLeft(type1), PetMaterialRight(type1).* (server: client flownode definition (cutscene wiring)., conf medium)

### CFlowNode_PetCutsceneB::GetConfig `@0x10e898f0` — pet flownode/cutscene
*Flowgraph node config (guard DAT_12038b18). Inputs Enable/Disable/eventID. Outputs cutsceneType(type1), petNetID(type1). Reduced variant of FUN_10e89600.* (server: client flownode definition., conf medium)

### CFlowNode_PetFacilityA::GetConfig `@0x10e76270` — pet flownode/facility
*Flowgraph node config (guard DAT_12038110). Inputs enable/disable/triggerOnce(bool)/logicEntityNetID. Outputs OnEvent, PetCount(type1), PetFacilityType(type5), PetFacilityFirstUse(type6).* (server: client flownode; PetCount/PetFacilityType/FirstUse reflect server-owned facility state., conf medium)
- ƒ port types: PetCount type1(int), PetFacilityType type5, PetFacilityFirstUse type6(bool)

### CFlowNode_PetFacilityB::GetConfig `@0x10e76580` — pet flownode/facility
*Flowgraph node config (guard DAT_120381e0). Inputs enable/disable/triggerOnce/logicEntityNetID. Outputs OnEvent, PetCount(type1), PetFacilityType(type5). Same as FUN_10e76270 minus FirstUse output.* (server: client flownode definition., conf medium)

### CFlowNode_PetQuery::GetConfig `@0x10e1bb00` — pet flownode
*Flowgraph node config (one-time static init, guarded by DAT_12032a70 bits 0/1). Input port: Index. Output ports: Success, Failed, IsEmpty(type6), PetID(type1=int), NeverUsed(type6). Assigns port arrays into param_1.* (server: client flownode definition., conf medium)
- ƒ port types: PetID type 1 (int/entityid), IsEmpty/NeverUsed type 6 (bool)

### CFlowNode_PetUI::GetConfig `@0x10e1c720` — pet flownode
*Flowgraph node config (guard DAT_120329a8). Inputs enable/disable/Index(default -1). Outputs OnEvent, Start, FirstShow(type6), petID(type1). Assigns port tables.* (server: client flownode definition., conf medium)
- ƒ Index default 0xffffffff (-1); petID type 1


## pet-animation-fsm  (6)

### CPetActionController::BuildCombatIdleStateGraph `@0x10f7d410` — pet-animation-fsm
*Sets up the COMBAT_IDLE / INVALID_STATE branch of the actor animation graph, plus PARAPET_FALL and NORMAL_FALL fall transitions. Registers combat state callbacks (FUN_10f74c40, FUN_10f9a5b0, LAB_10f6b6a0, DAT_10f9a600).* (server: client-only: animation state graph setup., conf high)
- ƒ *(u8*)(this+0x1fc)=1; *(uint*)(this+0x80) \|= 0x20 (COMBAT-state bit)
- ƒ *(this+0x1d8)=0; *(u8*)(this+0x1dc)=0; *(u8*)(this+0x1f4)=0; *(this+0x1f8)=0xffffffff (no active state)
- ƒ state token 0x10 pushed to vector at this+0x44/0x48

### CPetActionController::BuildNormalActionStateGraph `@0x10f7a350` — pet-animation-fsm
*Builds the large NORMAL (non-combat) animation/action-state graph for the pet/companion actor. Registers transition callbacks and maps gameplay action signals (EatDrug/EatMeat/EatDragonMeat/EatChocolate/EatCokeMeat, Flute type1/2, SetOnGround, Set Large/Small Bucket, Throw, Smash, SharpenWeapon, CollectPlant, Strip, Catch, Mine, CarryEgg, CliffFall/Fall, Fishing/NetFishing, Vehicle/SpeedBoat, ClimbLadder, Run, FlyAttack, GoToCuisine, GoTo Low/Med Climb, FindEgg, Bake, Glider fly, IdleView/IdleSelect, and hungry/hot/cold holstered idle-breaks) to CryEngine animation-graph tokens (PLBaseSignal/PLLocomotion/PLCombat/PLFlying/HolsteredIdle etc.) via GetModelString. Idle-break variants tagged with mood indices (0=hungry,1=hot,2=cold,3=normal) via FUN_10f5a480.* (server: client-only: pure CryEngine animation-graph/state-machine wiring; no gameplay state computed. 'GoToCuisine'/'FindEgg'/'Bake' etc. are visual action states only., conf high)
- ƒ sets flags: *(uint*)(this+0x80) \|= 0x10 (NORMAL-state bit); *(this+0x6c)=0; *(this+0x14)=1 (state-ready)
- ƒ *(u16*)(this+0x230)=0; *(this+0x234)=0x41400000 (=12.0f, likely a distance/timeout for holstered idle-break)
- ƒ idle-break mood tags via FUN_10f5a480(this,4,mood): hungry=0, hot=1, cold=2, normal=3
- ƒ state-record token 0x18 pushed to vector at this+0x44/0x48 (stride 4)

### CPetActionController::BuildParapetCliffJumpStates `@0x10f81100` — pet-animation-fsm
*Builds the PARAPET_CLIFF_JUMP state and its Landing/StartJump_Parapet/Falling_Parapet/StartFall_Parapet sub-transitions, wiring to NORMAL_IDLE and COMBAT_IDLE via PLLocomotion/PLFlying/PLCombatAction. Registers callback FUN_10fa39f0.* (server: client-only: animation state graph setup., conf high)
- ƒ FUN_10f5a480(this,2,0)/(3,2)/(4,2) attach transition mood/index tuples for Falling/Unholstered/Holstered idle branches

### CPetActionController::BuildParapetFallState `@0x10f81640` — pet-animation-fsm
*Builds the PARAPET_FALL state with StartFall_Parapet entry; registers callback FUN_10fa3ac0.* (server: client-only: animation state graph setup., conf high)

### CPetLocomotion::OnFallAnimEvent `@0x10fa35e0` — pet-animation-fsm
*Animation-graph event handler for the fall/jump state. String-compares the incoming event name (param_2+0xc) against OnLeave / StartFall / StartFall_Parapet / CloseCol / AGAnimationEnd. On OnLeave restores prior state (this+0x200 label). StartFall->func(1), StartFall_Parapet->func(2). On AGAnimationEnd, if current anim is not StartJump/StartFall, forces PLLocomotion 'Falling'.* (server: client-only: animation event routing., conf medium)
- ƒ func_0x12402b6c(1,1,0) on StartFall; func_0x12402b6c(2,1,0) on StartFall_Parapet

### CPetLocomotion::SelectCliffJumpOrFallAnim `@0x10f91660` — pet-animation-fsm
*Given the actor's active locomotion sub-state (from FUN_10f6c5e0), picks between cliff-jump and fall animations. If cliff-type==2 uses PARAPET_CLIFF_JUMP else PARAPET_FALL; if ==3 uses NORMAL_CLIFF_JUMP else NORMAL_FALL. The jump variant is chosen only when a ground/edge test (vtbl+0x88) passes and the run-anim range matches.* (server: client-only: chooses visual fall animation; movement is not authoritative here., conf medium)
- ƒ if (FUN_10f6c5e0(entity,1)==2): edgeTest=vtbl[0x88](); jump if edgeTest && runAnimStart==runAnimEnd else fall (parapet variant)
- ƒ if (==3): same test, NORMAL variant


## pet-ui  (5)

### CPetBattleHudController::InitModel_RegisterHandlers `@0x10970dc0` — pet-ui/battle
*UI controller init for pet battle HUD. Registers: InitModel->RegisterHandler_GetPetMonsterSkillData, IsPetMonsterWithBattle, IsPetMonsterWithPVP, InitEnemyPetHud, InitSelfPetHud, InitPetBattleUI. Tail path (FUN_10d17440/FUN_10d17870) calls FUN_10972290.* (server: client-only (HUD registration)., conf high)

### CPetEntity::PushShopItemIdsToScript `@0x10d2b150` — pet-ui/shop
*Writes pet shop/sell item ids into the pet entity's script table. Gets the entity script (component +0x58), sets script vars m_nPetShopItemID = (float)param_2[0], m_nPetSellItemID = (float)param_2[1] (stored as script number type 4), then fires script event 0x3e (FUN_10d1d220). Only runs if the two linked-list heads at (+0xac+0x6cc) / (+0xac+0x6d4) are non-empty.* (server: client-only (sets client-side entity Lua vars for shop UI)., conf medium)
- ƒ m_nPetShopItemID / m_nPetSellItemID stored as float from param_2[0]/param_2[1]
- ƒ script event id 0x3e fired on the entity script proxy

### CPetShopController::InitModel_RegisterHandlers `@0x108ccb40` — pet-ui/shop
*Scaleform/UI controller init for the Pet Shop window. Registers named script callbacks: InitModel, handle_filterinteligence/filterquality/filternature_dropdown_click, onPetFightClick, onPetProduceClick, NotifyPetAvatarEvent, OnClose. Each pair (FUN_100b62c0 build-string, FUN_108cfdf0 register) binds a handler function to a name; FUN_108cf410/FUN_108cf5b0 etc are the concrete handlers. Tail calls FUN_108d03a0 after two guard checks (FUN_10d17440/FUN_10d17870).* (server: client-only (UI event registration; no game state), conf high)

### CPetShopController::OnInitModel `@0x108cce00` — pet-ui/shop
*InitModel handler for the pet shop. Registers request handlers: _requestBuyBackItem->FUN_108cd070(buyback path), _requestBuyItem->FUN_108cd070, _requestNpcSales->FUN_108cd400, _requestSoldList->FUN_108ce7d0, _requestSellItem->FUN_108cef10, _requestGetBuyStackCounts->FUN_108cfa10 (all via FUN_104d13b0). Sets shop-mode flag DAT_123bbab1 = (param_5 == 2). Pushes CurrentBindMoney/CurrentUnbindMoney (from two FUN_1025b060 money getters) and strPetShopTitle to the Scaleform model when the player entity (DAT_1202e818+0xd0 -> +0x90) is valid.* (server: client-only (display of server-owned money; money values read locally via FUN_1025b060), conf high)
- ƒ shopModeFlag DAT_123bbab1 = (param_5 == 2)
- ƒ param_4[1] presence-flags: bit6 ((>>6)&1) gates optional string/object refs (recurring TDR-style presence pattern across chunk)
- $ CurrentBindMoney and CurrentUnbindMoney read from FUN_1025b060 (bound vs unbound gold getters)

### CPetShopController::OnRequestNpcSales_BuildSaleVO `@0x108cd400` — pet-ui/shop
*Handles _requestNpcSales (only when param_5==7). Builds shopSaleItemDataArray of SALE_ITEM_DATA entries (each with nested EXCHANGE_DATA_CLASS / arrayExchangeItem) for the pet-shop NPC sale list, with pagination. Iterates the shop's sale-record container, filters by category/shopID/etc, and for each visible page item emits a VO: backItem, SaleItemId(*rec), shopID(rec[1]), ItemId(rec[8]), ItemNum(rec[9]), UnBindGold(byte rec[0xb]), salesCount, backItemIndex, itemPrice, itemName, maxStackCount(itemInfo+0x50), packTag, currentBindMoney, currentMoney, plus per-exchange itemName/itemCount/itemID/currentCounts and up to 13 special-item slots.* (server: client-only VO builder for display; prices/counts derived from client-side item info + server-synced sale records. Server remains authoritative for actual buy/sell transactions., conf medium)
- ƒ page skip count local_fc = (local_58 >= 0 && local_8c > 0) ? local_58 * local_8c : 0  (local_58=page index/size input arg7@rec[0x14], local_8c=count arg from rec[0xe])
- ƒ salesCount local_b4 = (local_d8 - firstRec) / 0xb0  (0xb0 = size of one sale-record struct)
- ƒ itemPrice = FUN_114b74e0(rec-2, rec[9])  (unit price * ItemNum); when itemInfo(FUN_10254130(rec[8]))==0 -> itemPrice=0, itemName=empty, maxStackCount=0
- ƒ exchange itemCount = rec[9] * exchangePrice, where exchangePrice local_5c = FUN_114b7110(rec-2,*ex)+ex[1]; iterate ex pairs from rec[0x1f]..rec[0x20] (stride 2)
- ƒ currentCounts = FUN_113f9300(0,itemID,0) + FUN_113f9300(2,itemID,0) + FUN_113f9300(10,itemID,0)  (owned counts across bag containers 0,2,10)
- ƒ packTag local_54: 0 if page position local_88==0 (first); 2 if local_88==local_8c-1 or last record (rec+0x2a==end); else 1 (middle)
- ƒ record stride = 0x2c dwords (0xb0 bytes): loop advances local_50 += 0x2c; ItemId at rec[8], ItemNum at rec[9], UnBindGold byte at rec[0xb], SaleItemId at rec[0], shopID at rec[1], exchange list rec[0x1f]..rec[0x20]
- ƒ special items: loop iVar3 0..12 (13 types); FUN_108cfae0 gets (count,name), FUN_108cfc80 gets currentSpecial count; fields specialItemName%d/specialItemCounts%d/currentSpecialItem%dCounts/specialItemType%d
- $ UnBindGold flag per item (rec[0xb] low byte)
- $ itemPrice = unit price * ItemNum (FUN_114b74e0)
- $ currentBindMoney/currentMoney from FUN_1025b060
- $ 13 special-item exchange slots per sale item


## pet-farm  (3)

### CFarmAdvPetInfo::GetManager `@0x108ecfb0` — pet-farm/advance
*Singleton accessor for the CFarmAdvPetInfo config manager (CFarmAdvPetInfo::GetManager, fallback CInfoManager::FindByName; lazy one-time init guarded by DAT_123c80c4 bit0). Returns manager pointer.* (server: config-manager plumbing (data table lookup)., conf high)

### CFarmPetModel::BuildFarmPetVO `@0x108e3340` — pet-farm/gather
*Builds the farm/gather pet VO for UI. Requires valid player logic component and a gather flag (vtbl+0x16c). Pushes: farmPoint(*(ctx+0x14)), farmExp(FUN_1025b060), bFriendGatherBonus(byte ctx+0xe8), bSkipCutScene(byte ctx+0xe9), bFarmPetVisible(cvar g_ShowFarmPet), ownerID. If owner != local player's 64-bit ID (DAT_123bbac8/DAT_123bbacc), resolves the friend entry and adds friendName, friendFarmPoint(*(friend+0x4c)), friendRemainGatherCnt(*(+0xe4)). Sets param_1 status byte (2,then result 0/1).* (server: client-only VO builder; farmPoint/farmExp/remainGatherCnt are server-owned values displayed here. Server authoritative for gather counts and rewards., conf medium)
- ƒ friend check: (**(piVar2+0xc0))() (owner 64-bit id) compared to CONCAT44(DAT_123bbacc,DAT_123bbac8) (local player id); equal => own pet path (status=1)
- ƒ ctx offsets: farmPoint @ +0x14, bFriendGatherBonus @ +0xe8 (byte), bSkipCutScene @ +0xe9 (byte), friendRemainGatherCnt @ +0xe4
- ƒ friend entry offsets: friendFarmPoint @ +0x4c, name id @ +0x24
- $ farmPoint, farmExp, friendFarmPoint, friendRemainGatherCnt (gather currency/counters, server-owned)

### CPetModel::BuildPetPropertyAndFLSuccessVO `@0x108e7d30` — pet-farm/advance
*Builds two VOs. (1) PetPropertyALLVO_CLASS_NAME.petList: iterates the player's pet array (stride 0x30) building per-pet entries strName, level, petindex, petid, status, otherStatus. (2) PetFLSuccessVo (farm-advance / breeding success): iterates advancement levels and, via CFarmAdvPetInfo record lookup (paged-array), fills strSuccess, strBigSuccess into successList, plus needToolCount/needToolID/needToolName/needToolIcon.* (server: client-only VO builder; pet list & advancement (soul-beast/breeding 'success' rate) data are server-owned and displayed here. CFarmAdvPetInfo supplies success text/tool requirements., conf medium)
- ƒ pet-list iteration count = (iStack_f4 - firstPet) / 0x30 (pet entry stride 0x30 bytes); per entry: status @ +0x00 area, transform block copied from +0x20..+0x2c
- ƒ CFarmAdvPetInfo lookup (paged array on puVar7): base +0x30, count +0x24, stride +0x28, table +0x20 -> record used for strSuccess/strBigSuccess
- ƒ advancement loop index uVar4 from 1, count = (unaff_EDI - successListBase)/0x30
- $ needToolCount / needToolID (materials required for pet advancement/breeding success)


## pet-combat-anticheat  (3)

### CPetHitValidator::InitFreqQueueDepth `@0x1105fe90` — pet-combat-anticheat
*Initializes the pet-hit anti-cheat frequency-queue depth from config key 'PetHitFreqQueue'; if the config lookup fails the default is 3. Passes result to FUN_11060d00 (reserves/sizes the hit-record ring buffer).* (server: authoritative/validation: this is server-side pet-hit rate-limit config init. Reproduce default PetHitFreqQueue=3 when the config value is absent., conf high)
- ƒ queueDepth = config('PetHitFreqQueue'); if lookup fails => queueDepth = 3; then FUN_11060d00(queueDepth)
- $ PetHitFreqQueue default = 3 entries

### CPetHitValidator::SetExpectedHitRangeAndCount `@0x11060380` — pet-combat-anticheat
*Configures the expected hit window for the next pet attack: rotates the current hit-range (this+0x30/0x34) into the previous slot (this+0x38/0x3c) if valid, stores the new range (param_2 lo, param_3 hi) into this+0x30/0x34, and loads the max hit count from config 'PetHitCountMax' into this+0x40 (default 0 if lookup fails). Returns early (no-op) when the new range encodes an empty/negative window.* (server: authoritative/validation: sets the range/count budget consumed by ValidatePetHit. Reproduce server-side., conf high)
- ƒ guard: if (param_3 < 1) && (param_3 < 0 \|\| param_2 == 0) => return 0 (invalid/empty window)
- ƒ if current range valid ((this+0x34>0) \|\| (this+0x34==0 && this+0x30!=0)): this+0x38=this+0x30; this+0x3c=this+0x34; this+0x30=0; this+0x34=0
- ƒ this+0x30=param_2; this+0x34=param_3 (new 64-bit hit-range key)
- ƒ this+0x40 = config('PetHitCountMax'); if lookup fails => this+0x40 = 0
- ƒ returns 1
- $ PetHitCountMax = max number of hits allowed for the attack window

### CPetHitValidator::ValidatePetHit `@0x1105ff10` — pet-combat-anticheat
*SERVER-SIDE authoritative validation of a single pet melee hit report. Resolves attacker entity (attackInfo+0x124) and target entity (attackInfo+0x128), verifies both have physics proxies and that the reported physical entity matches the attacker; verifies bone/joint id (vtbl+0x88) consistency; performs a 3D position-deviation check between the claimed hit positions (param_5/param_6) and the real entity positions; then applies hit-range and hit-frequency/hit-count rate limits before recording the hit in a ring buffer. Returns an error code (1..6) via FUN_114811e0 on any failure, or records the hit and returns success.* (server: authoritative/validation: MUST be re-implemented server-side. Rejects spoofed/too-frequent/too-distant pet hits. Error codes propagated to caller., conf high)
- ƒ err1: attacker/target entity missing, proxy null, physics-entity(0x800) null, or reported phys-entity != attacker phys-entity
- ƒ err2: attacker bone id (vtbl+0x88) != target bone id when both != -1 (bone/joint mismatch)
- ƒ position check: dev = (float)config('PositionDeviation'); reject(err3) if sqrt(dx^2+dy^2+dz^2) > dev for attacker(pos param_5) OR target(pos param_6); check skipped if either entity's flag (vtbl+0x68) != 0
- ƒ range check (only if attackInfo+0xc == 0): reject(err4) unless (attackInfo+0x160,+0x164) equals current range (this+0x38,+0x3c) OR previous range (this+0x30,+0x34)
- ƒ hit-count: piCount=(int*)(this+0x40); *piCount -= 1; reject(err5) if *piCount < 0 (only when attackInfo+0xc==0)
- ƒ queueCount = (this+0x24 - this+0x20)/0x18 (ring buffer entry stride = 0x18 = 24 bytes = 6 dwords)
- ƒ freqQueueMin = config('PetHitFreqQueue'); clamped to >= 1
- ƒ if freqQueueMin <= queueCount (buffer full enough): find oldest entry (min by dword[1]=ts_hi then dword[0]=ts_lo); delta64 = (param_3:param_2) - (oldest[1]:oldest[0]); if delta>0: freq = __alldiv(queueCount*1000, delta64); reject(err6) if config('PetHitFreqMax') <= freq
- ƒ on accept: overwrite oldest entry with { [0]=param_2(ts_lo), [1]=param_3(ts_hi), [2]=attackInfo+0x160, [3]=attackInfo+0x164, [4]=attackInfo+0x128(targetId) }
- ƒ if buffer not yet full (freqQueueMin > queueCount): append new entry via FUN_11060c90({ts_lo,ts_hi,+0x160,(targetId:+0x164)})
- $ PetHitFreqMax = max allowed hit frequency; freq metric = queueCount*1000 / deltaTimeMs. Higher freq (hits arriving faster) rejected when freq >= PetHitFreqMax.
- $ PositionDeviation = max allowed distance (world units, float) between claimed and actual hit position
- $ PetHitFreqQueue = minimum ring-buffer fill before frequency gating engages


## pet-attributes  (3)

### CCliLogicPet::OnPetListUpdate `@0x112b9790` — pet-attributes
*Parses a pet-list update packet (param_2/param_3). Decodes up to 0x14 (20) pet entries via FUN_101a03c0; for each entry (stride 0x11 = 17 dwords) looks up the CPetInfo row by entry[-2] (pet id) and writes quality-block fields into the pet species/runtime object: +0xa0=quality, +0xa4=character, +0xa8=atkTarget, +0xac=atkMode, name from entry[+3], +0xb0=skin, +0xb4=supportSkill. Then sends UI message 0x262.* (server: client-only: applies server-authored pet full-attribute rolls to local pet objects. The rolled values (+0xa0..+0xb4) are authoritative and owned by the server (see CPetQuality/Character/AtkTarget/AtkMode/Skin/SupportSkill tables)., conf high)
- ƒ max entries = 0x14 (20); actual count = min(20, entry[0])
- ƒ per-pet write: rec+0xa0=quality(entry[-1]), rec+0xa4=character(entry[0]), rec+0xa8=atkTarget(entry[1]), rec+0xac=atkMode(entry[2]), name=entry[3..], rec+0xb0=skin(entry[0xb]), rec+0xb4=supportSkill(entry[0xc])
- ƒ entry stride = 0x11 dwords (0x44 bytes)

### CPet::BuildPetDetailView `@0x112f64e0` — pet-attributes
*Fills a large output struct (param_3, ~0x3c dwords) with a pet's full detail for the UI/query: resolves the runtime pet (FUN_112fb460/FUN_1158d040) and reads instance fields plus many localized/config values via FUN_115681b0(handle, index, 7). Includes level, exp, name, quality/star, growth, skills, cuisine, support-cat skill, and skin fields.* (server: client-only: assembles a display/query struct from the authoritative pet instance. Reproducing exact indices is only needed for UI parity., conf medium)
- ƒ out[0]=inst+0x28, out[1]=inst+0x24, out[2]=inst+0x2c, out[3]=name(inst+0x30)
- ƒ out[4]=inst+0x40 (level), out[5]=9 + (inst+0x44 != 0) (i.e. 9 or 10 = quality/active tier)
- ƒ out[7]=inst+0x48 (skin/level-table id), out[8]=inst+0x4c
- ƒ out[9]=CPetLevelInfo row(+0x14) expToNext for id inst+0x48
- ƒ out[0xc]=*(inst+0x1c)+0x24, out[0x10]=*(inst+0x1c)+0x1c
- ƒ out[0xd]=inst+0x6c, out[0xe]=inst+0x70, out[0x19]=inst+0x74, out[0x1a]=inst+0x78, out[0x1b]=inst+0x5c
- ƒ many out[i] = *FUN_115681b0(h, cfgIndex, 7) with cfgIndex in {0x14,0x16,0x17,0x1d,0x1e,0x1f,0x2a,0x29,0x2d,0x2b,0x2c,0x76,0x77,0x78,0x2f,0x2e,0x32,0x31,0x30,0x89,...} (attribute-id -> value/string lookups)
- ƒ out[0x18]=(int)(float)FUN_115681b0(h,0x89,7) (a float attr cast to int)
- ƒ out[0x37]=*(inst+0x20)+0x7c, out[0x35]=*(inst+0x20)+0x80, out[0x3b]=*(inst+0x20)+0x44
- ƒ out[0x38]=FUN_112ba910(petUid), out[0x39]=FUN_11568e80()

### CPet::BuildPetPreviewFromItem `@0x112f70d0` — pet-attributes
*Given an item id (param_1), verifies it is a pet-capsule item (CItemBaseInfo row with type flags +0x34==1,+0x38==1,+0x3c==0xe), scans the item's embedded sub-records (stride 0x114) for tag 0x73, loads the referenced pet record (FUN_1052bf70), and fills the preview struct (param_2) with the pet's ids, quality block (+0xa0..+0xac), level (+0x14), name, computed total stats, and matched star grade.* (server: validation/shared: computes displayed pet stats via CPetLevelInfo::CalcPetStatTotal; server should use the same stat totals. Returns 1 on success, 0 otherwise., conf medium)
- ƒ item type gate: row+0x34==1 && row+0x38==1 && row+0x3c==0xe
- ƒ sub-record scan: base=row+0x164, count=(row+0x168-base)/0x114; match when subrec+4 == 0x73
- ƒ stat totals via CPetLevelInfo::CalcPetStatTotal(petRec, attrId, level=petRec+0x14): out[9]=attr0x16, out[0xa]=attr0x17, out[0xb]=attr0x14, out[0xd]=attr0x1d, out[0xe]=attr0x1e, out[0xf]=attr0x1f; out[0xc]=0
- ƒ out[0]=petRec+0x1c, out[1]=petRec+0x24, out[2]=out[3]=petRec+0xa0(quality), out[4]=+0xa4, out[5]=+0xa8, out[6]=+0xac, out[0x10]=+0x14(level), out[0x11]=1
- ƒ star grade: scan CPetStarInfo rows; match when star.keyB(+0x18)==pet.quality(+0xa0) && star.keyA(+0x14)==pet(+0x24) && star.keyC(+0x1c)==pet(+0xa4); out[0x16]=star(+0x44); else out[0x16]=0


## pet-skin  (3)

### CPet::GetSkinModelString `@0x11567070` — pet-skin
*Returns a pointer to the pet's skin model-string field (CPetSkinInfo row + 0x18) for the pet's skin id (pet+0x7c). Lazily initializes a default string global on first call. Falls back to a default string when the skin id is invalid.* (server: client-only: resolves the pet skin model/asset string., conf high)
- ƒ skinId = pet+0x7c; CInfoManager lookup on CPetSkinInfo; return &(rec+0x18)

### CPet::GetSkinSecondaryString `@0x115673e0` — pet-skin
*Like GetSkinModelString but returns the CPetSkinInfo secondary string field at rec+0x30 (e.g. avatar/portrait path) for the pet's skin id (pet+0x7c). Lazily inits a default global.* (server: client-only: resolves secondary skin asset string., conf high)
- ƒ skinId = pet+0x7c; return &(CPetSkinInfo_rec + 0x30)

### CPetSkinInfo::GetRecordById `@0x11567330` — pet-skin
*CInfoManager sparse-id lookup returning a CPetSkinInfo record by skin id.* (server: shared: skin config accessor., conf high)
- ƒ standard CInfoManager sparse-id lookup on CPetSkinInfo


## pet-combat  (3)

### CPetCombatTuning::ParseMonsterVsPetRow `@0x11689ed0` — pet-combat
*Parses one row of the monster-vs-pet combat tuning data table (an XML/data node param_2) into a cached struct that is inserted into a per-monster hash list (param_1+0x90). Reads named columns: MonsterID, Difficulty, MaxHealth, PhyAtk, Defence, PhyPDRatio(float), WaterAtk, FireAtk, LightningAtk, DragonAtk, IceAtk, GoldSliFlag, three more float columns, and (when param_4 set) MonsterAtkPet(float) and PlayerAtkPet(float) damage-scalar columns.* (server: authoritative data: these are the pet-vs-monster combat balance parameters (monster stats and the MonsterAtkPet / PlayerAtkPet damage multipliers applied to/for a pet). Server must load the same table to compute pet combat damage., conf medium)
- ƒ keyed/deduped by MonsterID (param_1+0x14) then cached per (MonsterID+Difficulty) node into hash bucket param_1+0x90
- ƒ struct fields: MaxHealth(int), PhyAtk(int), Defence(int), PhyPDRatio(float local_424), WaterAtk(int), FireAtk(int), LightningAtk(int), DragonAtk(int), IceAtk(int), GoldSliFlag(int local_420)
- ƒ float columns local_41c/local_418/local_414 (unnamed in strings list) + MonsterAtkPet(float local_410), PlayerAtkPet(float local_40c) parsed only when param_4 != 0
- ƒ each column read: hasAttr = node->vtbl+0x10(colName); int via vtbl+0x20, float via vtbl+0x30; missing column logs an error (FUN_100ea3b0/FUN_100ee330)
- $ damage scalars: MonsterAtkPet (monster->pet damage multiplier), PlayerAtkPet (player->pet damage multiplier)

### CPetFireInfo::GetRecordById `@0x11582eb0` — pet-combat
*CInfoManager sparse-id lookup returning a CPetFireInfo record by id.* (server: shared: pet-fire config accessor., conf high)
- ƒ standard CInfoManager sparse-id lookup on CPetFireInfo

### CPetManager::CanDispatchPetFire `@0x11582700` — pet-combat
*Validation predicate for a pet 'fire'/deployment action (soul-beast/pet ranged dispatch). Returns 0 (OK) or an error code. Requires an active pet (FUN_1158d040); party-leader + capability gates; the pet must not be busy (row+0x40==0); no conflicting active state across 6 slots (FUN_114242c0); and a valid CPetFireInfo row for the current fire id (FUN_11567170).* (server: validation: server-side gate for the pet-fire/deploy action., conf medium)
- ƒ if no active pet (FUN_1158d040==0) => return 0x7597
- ƒ if not party leader => return 0x759b
- ƒ if self capability vtbl+0x78 == 0 => return 0x759c
- ƒ if pet+0x40 != 0 (busy) => return 0x75a1
- ƒ for slot in 0..5: if FUN_114242c0(slot) != 0 => return 0x75a3 (slot conflict)
- ƒ if CPetFireInfo row for fireId (FUN_11567170) missing => return 0x7599; else return 0
- $ error codes: 0x7597 no-active-pet, 0x759b not-leader, 0x759c no-capability, 0x75a1 pet-busy, 0x75a3 slot-conflict, 0x7599 invalid-fire-config
- $ slot count = 6


## settings  (2)


## pet-cuisine  (2)

### CCatCuisineInfo::GetRecordByKey `@0x108d15f0` — pet-cuisine
*Config-record accessor for CCatCuisineInfo (Felyne/Palico cuisine buff table). Resolves the singleton manager (CCatCuisineInfo::GetManager, fallback CInfoManager::FindByName). Then does the standard CInfoManager 2D paged-array lookup to return the record pointer for key param_1.* (server: config-data lookup (cuisine buff definitions); data table shared by client and server, server authoritative for applying cuisine buffs., conf high)
- ƒ lookup: if param_1==-1 return 0; if (param_1==0 && mgr[0xc]!=0) return 0; require mgr[10]!=0; idx = param_1 - mgr[0xc] (base id at [0xc]); require 0<=idx<mgr[9] (count at [9]); row=*(mgr[8] + (idx / mgr[10])*4) (table ptr [8], stride/page mgr[10]); if row!=0 return *(row + (idx % mgr[10])*4)
- ƒ This paged-array pattern (base [0xc], count [9], stride [10], table [8]) is reused by all CInfoManager accessors in this chunk.

### CCatCuisineRateInfo::GetRecordByKey `@0x10a04580` — pet-cuisine
*Config accessor for CCatCuisineRateInfo (cat cuisine success-rate / quality-rate table). Resolves singleton (fallback CInfoManager::FindByName, lazy init guarded by DAT_123c9370 bit0), then standard paged-array lookup returns record for key param_1.* (server: config-data lookup; cuisine outcome rates likely applied server-side (authoritative). Data shared., conf high)
- ƒ same paged-array lookup: base [0xc], count [9], stride [10], table [8]; idx = param_1 - [0xc]; return table[idx/stride][idx%stride]


## pet-talk  (2)

### CCliLogicPet::ShowPetTalkNotice `@0x112b81b0` — pet-talk
*Displays a pet 'talk' notice bubble. Requires an active pet (this+0x1ed0). Looks up the CPetTalkInfo row for param_2, checks a game-mode gate (FUN_113efa00 returns 1/2/3), pulls the pet's current display name (FUN_113ef730 vtbl+0xd8), fetches CNoticeInfo row index 6, formats the talk text (template + separator DAT_11d1e564 + name), and shows it via FUN_1112f070(noticeRow+0x2c, text).* (server: client-only: UI notice/bubble rendering., conf medium)
- ƒ gate: only when FUN_113efa00() in {1,2,3}
- ƒ CNoticeInfo index = 6 - (mgr+0x30)

### CPetTalkInfo::GetRecordById `@0x112b75f0` — pet-talk
*CInfoManager sparse-id lookup returning the CPetTalkInfo record pointer for a given talk id.* (server: shared: static config record accessor., conf high)
- ƒ standard CInfoManager lookup: idx=id-(mgr+0x30); valid if 0<=idx<(mgr+0x24); bucket=*(mgr+0x20 + (idx/(mgr+0x28))*4); rec=*(bucket + (idx%(mgr+0x28))*4)


## pet-leveling  (2)

### CPet::SetLevelClamped `@0x11567ae0` — pet-leveling
*Sets the pet's current level (pet+0x4c) to param_2, clamped to the max level defined by its CPetLevelInfo table: if param_2 >= table maxLevel (row+0x14 used here as level count) the level is set to maxLevel-1.* (server: authoritative/validation: server should clamp pet level to the level-table maximum identically., conf high)
- ƒ levelTableId = pet+0x48; row = CPetLevelInfo lookup; maxLevel = row+0x14
- ƒ pet+0x4c = param_2; if maxLevel <= param_2 then pet+0x4c = maxLevel - 1

### CPetLevelInfo::GetRecordByLevel `@0x112f7820` — pet-leveling
*CInfoManager sparse-id lookup returning the CPetLevelInfo (exp-curve) record for a given level id.* (server: shared: level-curve config accessor., conf high)
- ƒ standard CInfoManager sparse-id lookup on CPetLevelInfo


## cat-cuisine  (2)

### CCatCuisineInfo::GetDishStateFlag `@0x1152a280` — cat-cuisine
*Looks up a CCatCuisineInfo dish by id and, if present, returns a per-dish state/flag value via FUN_118047d0 (e.g. unlocked/new state). Returns (id & 0xffffff00) sentinel when not found.* (server: client-only: reads a per-dish UI state byte., conf medium)
- ƒ standard CInfoManager sparse-id lookup on CCatCuisineInfo; then result = FUN_118047d0()

### CCatCuisineInfo::IsDishAvailable `@0x11529df0` — cat-cuisine
*Server/shared eligibility check for a Felyne (cat) cuisine dish (CCatCuisineInfo row param_2). Returns 1 if the dish is unlocked/usable, else 0. Gates on hunt rank, an unlock-check id, and a feature/quest condition.* (server: validation: mirrors the client BuildCatFoodListModel eligibility gate. Server must re-validate before granting the cuisine buff., conf high)
- ƒ pre-gate: vtbl+0x40(dishId) must return non-zero
- ƒ if row+0x98 (requiredHuntRank) != 0 && CPlayer::GetHuntRankOrCount() < row+0x98 => return 0
- ƒ if row+0x9c (unlock id) != 0 && unlockCheck(vtbl@player[1]+0x2ab0, +100, row+0x9c) == 0 => return 0
- ƒ if row+0xa0 (required id) != 0: vtbl(player[1], +0x46c, row+0xa0); if FUN_114dfbc0()==0 => return 0
- ƒ else return 1
- $ row+0x98 = required hunt rank (word-index 0x26 in UI model)
- $ row+0x9c = required unlock id (word-index 0x27)
- $ row+0xa0 = required feature/quest id (word-index 0x28)


## team-ui  (1)

### CTeamController::InitModel_RegisterHandlers `@0x10900850` — team-ui (tangential; not pets)
*TEAM/party UI controller init (not pet-specific). Registers a long list of team handlers: GetTeamFiltrationData, RefreshTeamInfo, SearchOtherTeam, SearchTeamChangePage, LookOtherTeamInfo, CreateTeamReq, JoinTeamReq, ReqQuitTeam, ReqChangeLeader, ReqKickMember, SetTeamOptionReq, InviteTeam, QuickJoinTeamReq, ReqSearchByName, onTeamTypeEight/Twelve/SixTeen, GetTeamMemberList, RaidInviteTeam, RaidTeamRequest, GetNetID.* (server: client-only (UI handler registration)., conf high)


## pet-skill  (1)

### CPetApplyGroupEffect::RegisterFlowNodePorts `@0x10aa61d0` — pet-skill/effect
*Registers a CryEngine flowgraph node 'CPetApplyGroupEffect' with input ports GroupId, InputBBName, TargetEntityID (via FUN_1048b080 slot 0/1/2, FUN_1048b170). Represents applying a pet group (buff) effect to a target entity.* (server: client flownode definition; semantically a pet applies a group effect to TargetEntityID. Effect application is server-authoritative., conf medium)
- ƒ port slots: GroupId (slot 0, type 5=int list?), InputBBName (slot 1, type 1), TargetEntityID (slot 2, type 1)


## pet-core  (1)

### CPetInfo::GetRecordByIndex `@0x10aaeba0` — pet-core/config
*Config accessor for CPetInfo (pet definition table). Uses FUN_1053ab40(0,'CPetInfo',0) to get the manager, then a flat contiguous-array lookup (not paged): base ptr @ +0x14, end @ +0x18; count = (end-base)>>2; returns element[param_1] if in range.* (server: config-data lookup; CPetInfo = base pet stats/definitions, shared table. Server authoritative for stat/growth application., conf high)
- ƒ count = (*(mgr+0x18) - *(mgr+0x14)) >> 2; require 0<=param_1<count; return *(base + param_1*4)
- ƒ This is a flat vector<ptr> lookup, distinct from the paged-array pattern used by CCatCuisine*/CPetAvatarInfo.


## pet-soul-beast  (1)

### CPetSoul::InitAndPlayIdle `@0x10afb7d0` — pet-soul-beast/render
*Initializes/positions the pet SOUL (soul-beast) render object and plays 'pet_soul_idle'. Requires this+0x14 (entity) valid. Copies transform (quat this+0x15..+0x18, pos +0x19..+0x1b) plus extra params (+0x1c..+0x22), loads model param_2 (vtbl+0x1d4), enables render node (\|0x10). Then computes an offset world transform via quaternion rotation of a local offset vector and applies it (vtbl+0xc4). Plays 'pet_soul_idle' loop via FUN_10afbd40. Returns 1.* (server: client-only (soul-beast visual/idle anim)., conf medium)
- ƒ uses fcos/fsin of 1.5707964 (pi/2) for a 90-degree rotation term (local_c=cos(pi/2))
- ƒ quaternion rotate: rotates local offset (this+0x1c..+0x1e) by quat (this+0x15..+0x18) to produce world pos added to base pos (this+0x19..+0x1b)


## pet-action  (1)

### CPetActionController::RegisterActionStates `@0x10f769c0` — pet-action/animation
*Builds the pet (Palico) animation/action state machine: registers the full set of pet action states and their signal->locomotion transition rules. Sets default state NORMAL_RUN (0x17), a blend param +0x2d4=0.5f. Enumerated actions include: eat drug/meat/dragon meat/chocolate/coke meat, flute type 1 & 2, set-on-ground, set large/small bucket, throw, smash, sharpen weapon, collect plant, strip, mine, go-to-cuisine, catch, cliff-jump/parapet fall/fall, fish begin, vehicle/speedboat, net fishing, climb ladder, low/med climb, find egg, bake start, carry egg idle; plus tired/creep/back-to-boss locomotion variants.* (server: client-only (animation graph). Enumerates the pet's supported actions/attack-modes for cross-reference, but does not compute stats., conf medium)
- ƒ initial action state id = 0x17 (NORMAL_RUN)
- ƒ flag bits: (param_1+0x80) \|= 0x11; (param_1+0x2d4) = 0x3f000000 = 0.5f (blend/transition weight)
- ƒ FUN_10f5bd40(6, handler) registers priority-6 transitions; FUN_10f5a480(a,b,list) wires tired/locomotion sub-states


## physics-scriptbind  (1)

### CScriptBind_PhysicsGeom::Register `@0x1101f3f0` — physics-scriptbind
*Constructor for a physics/geometry script-bind object. Registers Lua/script functions on the entity's script table: TestFunc, ClearPhysicsFlag, SetReceiveAttackType(spAttackType), EnableAttackable(enable), EnablePlayerWall, EnableMonsterWall, EnableCameraWall, AddGeometry(geometryInfo), EnableTerrain, SetPlayerCanAttack, SetMonsterCanAttack, SetUseMaterialEffect(use), SetNPCCanAttack(canAttack), SetPetCanAttack(canAttack).* (server: client-only/shared: script-binding registration plumbing. The per-flag bind FUN_11020690 handles bool 'enable'/'canAttack' args; SetPetCanAttack toggles whether pets may collide/attack a geometry volume — the effect (a physics wall flag) is applied wherever geometry collision is authoritative, not here., conf high)
- ƒ vtable *param_1 = &PTR_FUN_11d08768; each bind: signature descriptor {name, argSpec, handler} passed to scriptSystem->RegisterFunction (vtbl+0x64)


## gamerules-scriptbind  (1)

### CScriptBind_GameRules::RegisterPetAndLevelFuncs `@0x1103d2d0` — gamerules-scriptbind
*Registers a batch of gameplay script functions: QueryBattleStatus, GetNumLightsActivated, IsMountedWeaponUsableWithTarget, IsPlayer(entityId), GetPlayerLevel(entityId), PromptPlayerLevelTooLow(requiredLevel), LevelCtrlSwitchToNewLevel(levelname), TeleportToLevel(levelid), RegionJumpTriggerHandle(TriggerName), RegionJumpNearbyHandle(Enable), SyncPlayerAvatar(id,PlayerIndex), FreeRopeAttachment(id), SyncPlayerAvatarById(ProxyId,PlayerId), SyncPlayerPos(pos), SyncPetAvatar(id,index,nTrainingType,nPetID), ShowInteractIcon(show), TeleportToFarm, LeaveFarm, EnterGuildCamp, LeaveGuildCamp, HideWeapon(id,hide), UpdateSoundAreaOcclusion, SendEventToGameObject(entityId,event).* (server: client-only/shared: script-binding registration. Notable pet arg contract: SyncPetAvatar(id, index, nTrainingType, nPetID) — the client requests the server/scene to spawn a pet avatar keyed by pet id + training type. The actual pet spawn is authoritative elsewhere., conf high)
- ƒ SyncPetAvatar param string = "id,index,nTrainingType,nPetID" (handler FUN_1103e7e0)


## pet-star  (1)

### CPetStarInfo::GetRecordByIndex `@0x112f78e0` — pet-star
*Linear-array accessor returning the CPetStarInfo record at a given index (bounds-checked against the manager's contiguous record vector).* (server: shared: star-table config accessor., conf high)
- ƒ count = (mgr+0x18 - mgr+0x14) >> 2; rec = *(mgr+0x14 + index*4) for 0<=index<count


## pet-training  (1)

### CPetTrain::_AddTimer `@0x11569120` — pet-training
*(Re)schedules the pet-training completion timer. If a timer handle exists (this+0x10 != -1) it is cancelled first; then a one-shot named timer 'CPetTrain::_AddTimer' is scheduled for param_2 seconds (param_2*1000 ms) firing FUN_115692a0, and its handle stored at this+0x10. No-op when param_2 <= 0.* (server: client-only timer mirror: training duration is server-authoritative; this schedules the local completion callback. Duration param is in SECONDS., conf high)
- ƒ timer duration = param_2 * 1000 ms (param_2 = training seconds); one-shot (repeat flag 1... 5th arg=1)
- ƒ guard: only if param_2 > 0
- $ training timer input in seconds
