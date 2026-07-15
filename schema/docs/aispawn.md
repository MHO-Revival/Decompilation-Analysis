# MHO Monster AI / Spawning — Round 6

314 functions from CryGame.dll.


## behaviortree  (55)

### BTAttributeInfo::GetBool `@0x10255cf0` — behaviortree/attribute
*Typed getter: asserts m_eValueType (offset 0x1c) == E_Type_Bool (3), copies 1-byte value to *param_2.* (conf high)
- ƒ assert: *(int*)(this+0x1c) == 3 (E_Type_Bool); out = *(byte*)this
- ƒ src BTAttributeInfoType.h line 0x75

### BTAttributeInfo::GetInt `@0x10255cc0` — behaviortree/attribute
*Accessor on a behavior-tree attribute-value object: asserts m_eValueType (offset 0x1c, i.e. param_1[7]) == E_Type_Int (1), then copies the stored value (*param_1) into *param_2 and returns it.* (conf high)
- ƒ assert: *(int*)(this+0x1c) == 1 (E_Type_Int); out = *(int*)this
- ƒ src BTAttributeInfoType.h line 0x65

### BehaviorTree::LoadWithParentInheritance `@11004740` — behaviortree
*Loads a behavior-tree XML by filename, then reads its 'Parent' node's 'FileName' attribute and loads the parent tree from '/Scripts/AI/BehaviorTree/'+parentFile, implementing BT inheritance. Uses the engine XML/system node (DAT_1202e818 root vtbl+0x1c4 -> +0x40 parse).* (conf medium)
- ƒ parent path = '/Scripts/AI/BehaviorTree/' + xmlNode['Parent']['FileName']
- ƒ local_220[512] stack buffer for constructed path
- ƒ string-heap counter DAT_1202015c adjusted on buffer free

### BehaviorTree::StripScriptPathPrefix `@11037820` — behaviortree-scriptbind
*Helper: if the string is >0x17 chars and begins with 'scripts/ai/behaviortree', erases that 23-char prefix (FUN_10a821e0 substr from index 0x18) leaving a relative BT name. Used by all BT Load* binds.* (conf high)
- ƒ if len>0x17 && strncmp(s,'scripts/ai/behaviortree',0x17)==0: s = substr(s, 0x18)

### BehaviorTree::StripScriptPathPrefix_dup `@1103a300` — behaviortree-scriptbind
*Byte-identical duplicate of 11037820: strips the 'scripts/ai/behaviortree' 23-char prefix from a BT filename.* (conf high)
- ƒ if len>0x17 && strncmp==0: substr(0x18)

### CAnimusInfoSystemManager::RegisterEventHandler `@0x1026a360` — behaviortree/animus
*Builds a temporary event-slot/handler descriptor (vtable PTR_FUN_11da7ab0, callback LAB_1026bc27) for event type param_2 via the entity event system (path this->+0x1c ->+0x2c ->+0x98 vtbl+0x1c), asserts temp.IsValid(), then inserts it into the manager's handler map at this+0x20 (FUN_1026ad90).* (conf medium)
- ƒ registers slot with args (evtId, -1, -1, &handler, -1, 1,0,0)
- ƒ AnimusInfoSystemManager.cpp line 0x40

### CAnimusInfoSystemManager::RegisterEventHandler2 `@0x1026a3f0` — behaviortree/animus
*Twin of 0x1026a360 with a different callback (LAB_1026bc1d); registers a second animus event handler.* (conf medium)

### CBTActor::GetBlackboardBool `@0x1025b860` — behaviortree/blackboard
*Same as GetBlackboardInt but asserts value type == E_Type_Bool (3) and writes a byte to *param_3.* (conf medium)
- ƒ assert m_eValueType==3 (E_Type_Bool); *param_3 = (char)value
- ƒ line 0x75

### CBTActor::GetBlackboardInt `@0x1025b730` — behaviortree/blackboard
*If enabled-flag at this+0x60 set and system ptr this+0x1c present, resolves an attribute/blackboard entry keyed by this+0x5c and by param_2, asserts its value type == E_Type_Int (1), and writes the int value to *param_3.* (conf medium)
- ƒ guard: *(char*)(this+0x60)!=0 && *(void**)(this+0x1c)!=0
- ƒ assert m_eValueType==1 (E_Type_Int); *param_3 = value
- ƒ BTAttributeInfoType.h line 0x65

### CBTActor::LoadBehaviorTreeFromAISetting `@0x10258840` — behaviortree/loading
*Reads the entity's AISetting property block and loads the behavior-tree file list. Looks up property group 'BehaviorTree' (fallback path '.AISetting.BehaviorTree' under 'PropertyCustom'); iterates entries reading each 'FileName' and registering the BT. Then, if a server/authority flag (vtbl+0x134 returns true) is set, also loads 'ClientBehaviorTree' (path '.AISetting.ClientBehaviorTree').* (conf medium)
- ƒ property lookups: 'BehaviorTree' / '.AISetting.BehaviorTree'; 'ClientBehaviorTree' / '.AISetting.ClientBehaviorTree'; per-entry key 'FileName'
- ƒ clears entity BT-list at offsets 0x1c..0x28 before reload; sets flag *(param_1+0x128)=0

### CBTActor::LoadClientBehaviorTree `@0x10262030` — behaviortree/loading
*Reads the 'ClientBehaviorTree' property group ('.AISetting.ClientBehaviorTree' under 'PropertyCustom'), iterates entries reading 'FileName', and for each valid (tree,owner) pair records it into a container (FUN_10262d10).* (conf medium)
- ƒ property 'ClientBehaviorTree' / '.AISetting.ClientBehaviorTree'; per-entry 'FileName'

### CBTActor::LoadDefaultBehaviorTree `@0x10262480` — behaviortree/loading
*Reads 'DefaultBehaviorTree' property (single value); if present stores its (tree,owner,extra) handle triple into this[0xc5],this[0xc6],this[199] and finalizes via FUN_104b5420.* (conf medium)
- ƒ property 'DefaultBehaviorTree'; stored at this[0xc5]=ptrA, this[0xc6]=ptrB, this[0xc7]=extra

### CBTActor::LoadSkillBehaviorTrees `@0x10262280` — behaviortree/loading
*Reads the 'SkillBehaviorTree' property group and iterates entries, each providing a 'FileName' and a 'SkillID'; loads the BT and associates it to the skill id, then instantiates/activates the skill BT node (branch on child-state flags at obj+0x3b/+0x21/+0x29, sets active byte at obj+0xe9=1).* (conf medium)
- ƒ property 'SkillBehaviorTree'; per-entry keys 'FileName' and 'SkillID'; per-skill node stored via FUN_10262e90; obj+0xe9 = 1 (activated)

### CBTActorDefaultTree::Ctor `@0x10263ac0` — behaviortree/node
*Constructor variant chaining FUN_10257270, installs vtable PTR_FUN_11da75d8, zero-inits the default-tree handle triple at this[0xc4..0xc6].* (conf medium)

### CBTActorDerived::Ctor `@0x10261ce0` — behaviortree/node
*Constructor of a BT-actor subclass: chains base ctor FUN_10257270, installs vtable PTR_FUN_11da7540, zero-inits an embedded intrusive list/container at offset 0xbc (self-links param_1[0xbe]=param_1[0xbf]=this), copies a byte flag from smart-ptr arg's high byte to this+0xc1, sets more handle fields (0xc2..0xc8) and a block of ids (0xc9..0xd0) to 0xffffffff, and sets m_type field this[0x4c]=2.* (conf medium)
- ƒ this[0x4c]=2 (node kind); this[0xc9..0xd0]=0xffffffff invalid handles; embedded list head at this+0xbc

### CBTBlackboardFact::Dtor `@0x10267c20` — behaviortree/node
*Non-deleting destructor twin of 0x10267bb0 (releases this[8] member, swaps vtable).* (conf medium)

### CBTBlackboardFact::Dtor_Deleting `@0x10267bb0` — behaviortree/node
*Deleting destructor: installs vtable 11da78c8, releases smart-ptr member at this[8], reinstalls base vtable 11da7908, frees self if flag bit0 set.* (conf medium)

### CBTBlackboardSystem::Dtor `@0x1047bfd0` — behaviortree/blackboard
*Destructor for the BT blackboard system: installs vtable 11dbae18, tears down two intrusive maps (at +0x12 list@0x13/0x16 and +0x20 tree@0x21/0x24, both in-order freed), deletes a critical section at +0x26 (threaded blackboard access), releases several smart-ptr members (+0x11, +0x1e, +0x1f), frees a vector at +0x18, and reinstalls base vtable 11dbaa58.* (conf medium)
- ƒ DeleteCriticalSection(this+0x26) -> blackboard is mutex-protected

### CBTEventTypeRegistry::RegisterEnumNames `@0x10256190` — behaviortree/events
*Initializes an object then registers the string<->id mapping for the entire behavior-tree event/notification enum via FUN_10256e40(id, name). This is the authoritative BT event-type ID table for MHO monster/master/group AI.* (conf high)
- ƒ Monster abnormal-state START ids 0x8b4..0x8d6 (Paralysis,Traped,Poison,Stun,Flare,SonicGranade,Poo,Marked,Slivervine,Sleep,Balance,Falldown,PartBreak,TailBreak,CrazyRun,FireFall,Stuck; note gap 0x8c5; Anethesia=0x8c6,ParalysisTrap=0x8c7,AdvancedTrap=0x8c8,WindPressure=0x8c9,DragonWindPressure=0x8ca,Quake=0x8cb,Roar=0x8cc,Paralyse=0x8cd,Snowman=0x8ce,Exhaust=0x8cf,Piyo=0x8d0,Scare=0x8d1,Bound=0x8d2,Carry=0x8d3,Haze=0x8d4,Sink=0x8d5)
- ƒ Matching abnormal-state _End ids 0x8d6..0x8f7 (Paralysis_End=0x8d6 ... Sink_End=0x8f7; +0x22 offset from START block)
- ƒ Core monster event ids: E_EVTTYPE_MONSTER_HEALTH_LOW=0x516, MONSTER_DEAD=0x517, MONSTER_ATTR_THRESHOLD=0x518, MONSTER_PART_BREAK=0x519, MONSTER_PART_BALANCE_LOST=0x51b, MONSTER_STATE_ABNORMAL=0x51c, MONSTER_STATE_ABNORMAL_END=0x51d, MONSTER_ADD_THREAT=0x520, MONSTER_PART_FALLDOWN=0x521, MONSTER_PART_SCAR=0x522, MONSTER_LOSTBALANCE=0x526, MONSTER_HEALTH_REACH_CAPTURE=0x527, MONSTER_HEALTH_CHANGE=0x528, MONSTER_PET_TIMEOUT=0x529
- ƒ BT perception/combat ids: BT_DAMAGE_EVENT=0x89e, BT_TRAP=0x89f, BT_PARARYSIS_TRAP=0x8a0, BT_PARARYSIS=0x8a1, BT_FLASH=0x8a2, BT_SONIC=0x8a3, BT_CATCH=0x8a4, BT_POOL=0x8a5, BT_ATTACKPLAYER=0x8a6, BT_ATTACKMONSTER=0x8a7, BT_INIT=0x8a8, BT_DESTROY=0x8a9, BT_GAME=0x8aa, OnNoTarget=0x8ab, OnInterestingSoundHeard=0x8ac, OnThreateningSoundHeard=0x8ad, OnSomethingSeen=0x8ae, OnEnemySeen=0x8af, COLLIDEWALL=0x8b0, MOVETIMEOUT=0x8b1
- ƒ Master/GroupMember/AttentionTarget action-relay ids 0x8f8..0x929 (DoAttack/DoDefense/DoDodge/DoUseItem/Died/EnterCombat/ExitCombat/StateChanged/DoStartMove/DoStopMove per role)
- ƒ AttentionTarget social ids 0x92a..0x92d (DoSomeAction/DoInterestingAction/DoFriendingAction/DoThreateningAction); SendFrom_FG=0x92e, SELF_FSM_STATE_CHANGE=0x930, Inner_After_Abnormal=0x931, SendFrom_UI=0x933, QuestComplete=0x934, QuestFail=0x935, SKILL_HIT=0x936, ENTER_ANGRY=0x937, ENTER_LEMON=0x939, LEAVE_LEMON=0x93a, SMPET_Summon=0x938, PLAYER_INPUT=0x93b
- ƒ MonsterCtrl ids 0x93c..0x943 (ACTION_CHANGED/ACTION_END/HIGH_FIGHT/LOW_FIGHT/NORMAL_FIGHT/LOW_POWER/NORMAL_POWER/MTM_MESSAGE); 3V3_FirstWin=0x944, 3V3_SecondWin=0x945, MVM_FinalWin=0x946, COOPERATION_ATTACK=0x947/END=0x948, KEY_ATTR_CHANGE=0x949
- ƒ CommonAIBehaviorStart=0x89c, CommonAIBehaviorEnd=0x89d; EMOTIONSTATE NORMAL_START=0x94b..TIRED_END=0x950; SOULBEAST_INTERACT=0x952, SOULBEAST_CHANGEIMG=0x953; Abnormal_Dynamite=0x954, _end=0x955

### CBTHandler::OnEvent_0x9cb_Broadcast `@0x1026a780` — behaviortree/events
*For event type 0x9cb, walks an intrusive red-black/ordered tree of subscribers (nodes at param_1+4..0xc, in-order traversal) and delivers the event to each subscriber's handler (vtbl+0x2c), refcounting each.* (conf low)
- ƒ guard: event->type==0x9cb; in-order tree walk over map at this+4

### CBTNodeBase::Ctor `@0x10257270` — behaviortree/node
*Base constructor for a behavior-tree node/actor object. Calls base init FUN_104a2050, installs vtable PTR_FUN_11da55a4, sets a byte flag at +0x27c(param_1[0x9f])=1, initializes a large block of id/handle fields (offsets 0xa1..0xac and 0xb1..0xb9) to 0xffffffff (invalid), sets m_type field param_1[0x4c]=1, then (if a name/registrar object is present) derives the node's registered base-name string via the IdPtrNameSvr and stores it into the object's string field at param_1+0x56.* (conf medium)
- ƒ this[0x9f].byte=1; this[0xa1..0xac]=this[0xb1..0xb9]=0xffffffff; this[0x4c]=1 (node kind tag)
- ƒ name string built into this+0x56 from IdPtrNameSvr result

### CBehaviorTree::BuildScriptFilePath `@0x1046d000` — behaviortree/loading
*Builds the full behavior-tree script path by concatenating the game resource root (DAT_123bb90c+0x18) + '/Scripts/AI/BehaviorTree/' + the given tree filename param_2, stores it into this+0x7c (path string), stores param_3 into this+0x94, and triggers a load (FUN_104b9210).* (conf medium)
- ƒ path = <resRoot> + '/Scripts/AI/BehaviorTree/' + fileName; stored at this+0x7c; this+0x94 = param_3

### CBehaviorTreeEventSystem::RegisterEventSlots `@0x1026d130` — behaviortree/events
*Initializes the BT event system: asserts m_listEventSlotTag is empty, then registers event 'slots' for contiguous id ranges by allocating a slot descriptor (vtable PTR_FUN_11da7b60) per id and inserting into the tag list. Registers ranges 0x89a..0x955 (BT/abnormal/master events), single ids 0x66 and 0x67, and 0x516..0x52f (monster events).* (conf medium)
- ƒ loop iVar2 = 0x89a; while (iVar2 < 0x956) register slot(iVar2) -- covers all BT events + abnormal states from 0x256190
- ƒ register single slots 0x67 and 0x66 (special slots)
- ƒ loop iVar2 = 0x516; while (iVar2 < 0x52f) register slot(iVar2) -- monster core events (HEALTH_LOW..PET_TIMEOUT)

### CMVMFightManager::RegisterEventHandler `@0x1026ed50` — behaviortree/mvm
*MVM fight-manager event handler registration (vtable PTR_FUN_11da7e10, callback LAB_1026fe5d). Src MVMFightManager.cpp.* (conf medium)

### CMVMPowerManager::RegisterEventHandler `@0x1026d9d0` — behaviortree/mvm
*Registers an event handler/slot for the MVM (monster-vs-monster) power manager (vtable PTR_FUN_11da7d28, callback LAB_1026eadd) for event param_2; inserts into map at this+0x20.* (conf medium)

### IdPtrNameSvr<CBehaviorTree>::GetInstance `@0x1025ef10` — behaviortree/idsvr
*Lazy singleton init for the CBehaviorTree id/name server: sets vtable PTR_FUN_11da557c on global _DAT_123c2b60, allocs 0x48 bytes if needed, registers its debug name, returns &instance.* (conf medium)

### IdPtrNameSvr<CBehaviorTree>::Register `@0x1025c060` — behaviortree/idsvr
*Allocates a 0x118-byte name-server record, links it into the global CBehaviorTree id/name registry (DAT_123bdc04), stores back-pointers at rec+0x8/+0xc/+0x10, and registers the debug name 'IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName'.* (conf medium)
- ƒ alloc size 0x118; rec[+8]=id, rec[+0xc]=registry, rec[+0x10]=self

### ScriptBind_BT::ClearAllTrees `@110376a0` — behaviortree-scriptbind
*Lua binding: ClearAllTrees(). Resolves BehaviorTreeBase and calls FUN_10b04fd0 to tear down all loaded trees.* (conf high)

### ScriptBind_BT::ExecuteEventTree `@110377d0` — behaviortree-scriptbind
*Lua binding: ExecuteEventTree(). Resolves BehaviorTreeBase and calls vtbl +0xbc to run the event tree once.* (conf high)
- ƒ comp vtbl+0xbc()

### ScriptBind_BT::GetBlackboardBool `@11037020` — behaviortree-scriptbind
*Lua binding: GetBTBlackBoardValueBool(keyName) -> bool. Reads via BehaviorTreeBase vtbl +0x94 into a packed byte, returns FUN_10d1c620.* (conf high)
- ƒ comp vtbl+0x94(key,&byteOut)

### ScriptBind_BT::GetBlackboardEntityID `@11036d60` — behaviortree-scriptbind
*Lua binding: GetBTBlackBoardValueEntityID(keyName) -> entityId. Reads via BehaviorTreeBase vtbl +0x84 and returns to script (FUN_110273e0).* (conf high)
- ƒ comp vtbl+0x84(key,&out); return script value FUN_110273e0(&out)

### ScriptBind_BT::GetBlackboardFloat `@11036e50` — behaviortree-scriptbind
*Lua binding: GetBTBlackBoardValueFloat(keyName) -> float. Reads via BehaviorTreeBase vtbl +0x88, returns FUN_10d1c5b0.* (conf high)
- ƒ comp vtbl+0x88(key,&out float)

### ScriptBind_BT::GetBlackboardString `@11037100` — behaviortree-scriptbind
*Lua binding: GetBTBlackBoardValueString(keyName) -> string. Reads via BehaviorTreeBase vtbl +0x8c, resolves interned string (FUN_11317f30) and returns FUN_10a01710.* (conf high)
- ƒ comp vtbl+0x8c(key,&hashOut); string = FUN_11317f30(hash)

### ScriptBind_BT::GetBlackboardVec3 `@11036f30` — behaviortree-scriptbind
*Lua binding: GetBTBlackBoardValueVec3(keyName) -> vec3. Reads via BehaviorTreeBase vtbl +0x90, returns FUN_110333d0.* (conf high)
- ƒ comp vtbl+0x90(key,&out xyz)

### ScriptBind_BT::GetComponentHelper `@110367a0` — behaviortree-scriptbind
*Helper: resolves the calling entity, fetches its component 0x144 and its 'BehaviorTreeBase' sub-object. Used as the common prologue for BT scriptbind calls.* (conf high)
- ƒ entity = param_2 vtbl+8; comp = (*(param_1+0x58) vtbl+0x144)(entity); comp->GetImpl('BehaviorTreeBase') via +0x18

### ScriptBind_BT::GetComponentPtr `@110378a0` — behaviortree-scriptbind
*Helper returning the BehaviorTreeBase sub-object pointer for the calling entity (component 0x144 -> 'BehaviorTreeBase' via +0x18), or 0.* (conf high)

### ScriptBind_BT::InitBehaviorTrees `@110376f0` — behaviortree-scriptbind
*Lua binding: InitBehaviorTrees(paramsTable). Reads file_BlackBoardFile, file_BTEventFileName, file_BTFileName1/2/3 from the Lua table and initializes the BT set (FUN_10b04dd0). So a monster can load a blackboard + up to 3 BTs + an event tree in one call.* (conf high)
- ƒ reads keys: file_BlackBoardFile, file_BTEventFileName, file_BTFileName1, file_BTFileName2, file_BTFileName3
- ƒ FUN_10b04dd0(&fileSet) initializes trees

### ScriptBind_BT::LoadBehaviorTree `@11037380` — behaviortree-scriptbind
*Lua binding: LoadBehaviorTree(FileName). Same normalization as LoadEventBehaviorTree, then calls vtbl +0x9c to load the main BT.* (conf high)
- ƒ comp vtbl+0x9c(normalizedName)

### ScriptBind_BT::LoadBlackboard `@11037510` — behaviortree-scriptbind
*Lua binding: LoadBlackboard(FileName). Normalizes path then calls vtbl +0xa0 to load the blackboard definition.* (conf high)
- ƒ comp vtbl+0xa0(normalizedName)

### ScriptBind_BT::LoadEventBehaviorTree `@110371f0` — behaviortree-scriptbind
*Lua binding: LoadEventBehaviorTree(FileName). Strips the 'scripts/ai/behaviortree' path prefix (FUN_11037820) then calls BehaviorTreeBase vtbl +0xb4 to load an event-driven BT from the normalized name.* (conf high)
- ƒ filename normalized via FUN_11037820 (strip 0x17-char prefix); comp vtbl+0xb4(name)

### ScriptBind_BT::SetBlackboardBool `@110369a0` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueBool(keyName, bool). Calls blackboard-set vtbl +0x80 with (key, bool).* (conf high)
- ƒ key via FUN_10c62470, bool via FUN_10b1f4b0; comp vtbl+0x80(key,bool)

### ScriptBind_BT::SetBlackboardEntityID `@110367e0` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueEntityID(keyName, entityId). Resolves BehaviorTreeBase then calls its blackboard-set vtbl +0x70 with (keyStringId, entityId).* (conf high)
- ƒ arg1 via FUN_10c62470 (string/key), arg2 via FUN_10d32550 (entity id); comp vtbl+0x70(key,entityId)

### ScriptBind_BT::SetBlackboardFloat `@11036870` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueFloat(keyName, floatValue). Calls BehaviorTreeBase blackboard-set vtbl +0x74 with (key, float).* (conf high)
- ƒ key via FUN_10c62470, value via FUN_10c623f0 (float); comp vtbl+0x74(key,float)

### ScriptBind_BT::SetBlackboardString `@11036a30` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueString(keyName, stringValue). Hashes the value string (FUN_113168d0) and calls blackboard-set vtbl +0x78 with (key, hashedString).* (conf high)
- ƒ value string hashed/interned via FUN_113168d0; comp vtbl+0x78(key,*hashed)

### ScriptBind_BT::SetBlackboardStringString `@11036b30` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueStringString(name, value). Builds two CryString keys and calls BehaviorTreeBase vtbl +0x98 twice. Note: contains a non-returning path (FUN_10c3d580) after the second call — likely a decompiler artifact of an inlined string ctor/exception frame.* (conf medium)
- ƒ local CryString from param_3; comp vtbl+0x98(...) (string-keyed string set)

### ScriptBind_BT::SetBlackboardUint `@11036ad0` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueUint(keyName, uint). Calls blackboard-set vtbl +0x70 with (uintKey, value) when key non-zero.* (conf high)
- ƒ comp vtbl+0x70(param_3,param_4) guarded by param_3!=0

### ScriptBind_BT::SetBlackboardVec3 `@11036900` — behaviortree-scriptbind
*Lua binding: SetBTBlackBoardValueVec3(keyName, vec3). Calls blackboard-set vtbl +0x7c with (key, vec3 x/y/z).* (conf high)
- ƒ key via FUN_10c62470, vec via FUN_10b1f370; comp vtbl+0x7c(key, x, y (packed), z)

### ScriptBind_BehaviorTree::Register `@11035fb0` — behaviortree-scriptbind
*Registers the Lua/script binding table for the BehaviorTreeBase component (vtable PTR_FUN_11d0a268). Exposes: TestFunc, SetBTBlackBoardValue{Bool,EntityID,Float,String,Vec3,Uint}, GetBTBlackBoardValue{Bool,EntityID,Float,String,Vec3}, LoadEventBehaviorTree, LoadBehaviorTree, LoadBlackboard, ClearAllTrees, InitBehaviorTrees, SetBTBlackBoardValueStringString, ExecuteEventTree.* (conf high)
- ƒ each entry registered via (component[0x11] vtbl +100)(&descriptor) with param-signature strings (e.g. 'KeyName,BoolValue')
- ƒ handler fn ptrs: SetBool=FUN_110369a0, SetEntityID=FUN_110367e0, SetFloat=FUN_11036870, SetString=FUN_11036a30, SetVec3=FUN_11036900, SetUint=FUN_11036ad0, GetBool=FUN_11037020, GetEntityID=FUN_11036d60, GetFloat=FUN_11036e50, GetString=FUN_11037100, GetVec3=FUN_11036f30, LoadEventBT=FUN_110371f0, LoadBT=FUN_11037380, LoadBlackboard=FUN_11037510, ClearAllTrees=FUN_110376a0, InitBehaviorTrees=FUN_110376f0, SetStringString=FUN_11036b30, ExecuteEventTree=FUN_110377d0

### ScriptBind_MonsterBehaviorTree::Register `@11037e80` — behaviortree-scriptbind
*Registers the extended scriptbind table (vtable PTR_FUN_11d0a518) for monster BT entities. Includes all blackboard get/set + BT load functions of 11035fb0 PLUS monster combat/physics toggles: ClearPhysicsFlag, EnableAttackable, SetReceiveAttackType, EnablePlayerWall, EnableMonsterWall, AddGeometry, EnableTerrain, EnableSpecialObject, IgnoreHitCount, SetPlayerCanAttack, SetMonsterCanAttack, SetUseMaterialEffect, SetCanHitCount, LogicHide. Also seeds blackboard 'attack force' constants used by monster attacks.* (conf high)
- ƒ blackboard float constants written via component[0x12] vtbl+0x70: AF_Normal_Short = 0x3f800000 (1.0f), AF_Shake_Gournd = 0x40000000 (2.0f), AF_FlyObj = 0x41000000 (8.0f), AF_Rush = 0x40800000 (4.0f)
- ƒ toggle handler fns bind bool ports via FUN_1103aa00; SetReceiveAttackType/SetCanHitCount via int handler FUN_1103a8e0
- ƒ handlers: EnableAttackable=FUN_11039a80, SetReceiveAttackType=FUN_11039b60, EnablePlayerWall=FUN_11039bf0, EnableMonsterWall=FUN_11039cd0, AddGeometry=FUN_1103a0f0, EnableTerrain=FUN_11039db0, EnableSpecialObject=FUN_11039e90, IgnoreHitCount=FUN_11039f70, SetPlayerCanAttack=FUN_1103a050, SetMonsterCanAttack=FUN_1103a000, SetUseMaterialEffect=FUN_1103a2b0, SetCanHitCount=FUN_1103a0a0, LogicHide=FUN_1103a380
- $ attack-force categories: Normal_Short=1, Shake_Ground=2, Rush=4, FlyObj=8 (bitmask-style values used as hit-reaction classes; align with the '\|=8' special-hit flag in 1101b290)


## monster  (32)

### CActor::InitFromSpawn `@10be99f0` — monster-spawn/actor-init
*Large actor/monster spawn-initialization routine. Selects a branch on FUN_113a2790()==0 (fresh) vs ==1/==3 (respawn/other). Reads monster spawn params (EmCommon table via CSculptureInfo: nMonsterDifficulty, nMonsterSizeScale, NPCSkillFile, NpcAnimationName1..8, DeadPose, CanLemon), builds a per-instance name via _snprintf("%s_%08x"), attaches the animated character/skeleton, plays DeadPose if the actor's vtable+0x180 (isDead) is set, wires the BehaviorTreeBase controller (BTCtrlObject), and fires the "Spawned" script event through two spawn-listener slots at actor+0x125c and actor+0x1260. Also pushes LastState/OnConnect/State onto the actor's script table and replays queued state/transform arrays (param_1+0x18 and +0x19).* (conf medium)
- ƒ param_1[0x10]=param_2 (owning entity/gameobject ptr); param_1[0x11]=character-instance ptr (via vtable+4)
- ƒ instance name = snprintf(buf,0x104,"%s_%08x", baseName, id) from FUN_113a23b0 record
- ƒ size/height adjust: local_14 = height(local_d8) + (float)local_30 when vtable+0x164 (DAT_1202e818+0xd0) true; DAT_11de9918 used as additive constant
- ƒ hp/scale from difficulty record iVar3+0xb0/+0xb4/+0xb8 iterated in 0x18-byte strides (up to 8 slots), each *(entry+0x14..+0xbc) passed to FUN_10ab3600
- ƒ scale = (float)FUN_10bec810() / DAT_11de9a30 (DAT_11de9a30 = frame/time or 1000.0 divisor)
- ƒ diff record +0x20==3 gates monster-difficulty branch (local_ac = (localTeam==0))
- ƒ state event flags: local_30 hi-dword written to script key "State"; "LastState" written only if param_2 != current
- ƒ actor+0x40b4 nonzero triggers FUN_104753a0/FUN_1046dc90 property-record path (param_2=-1)

### CBTHandler::OnAddThreatEvent `@0x1026a670` — monster/threat
*Event handler that fires only for event type 0x520 (E_EVTTYPE_MONSTER_ADD_THREAT): looks up a target object by the event's payload field param_2[3] through the monster/threat subsystem (this[7]->+0x2c ->+0x90 vtbl+0x7c), then dispatches to handler vtbl+0x28 with the resolved threat source (iVar2+8).* (conf medium)
- ƒ guard: event->type (param_2[0]) == 0x520 (MONSTER_ADD_THREAT)
- ƒ payload key = param_2[3]; resolved via subsystem vtbl+0x7c -> +8

### CBehaviorTreeContext::Ctor `@0x104a2050` — monster-ai/config
*Constructor for a behavior-tree context/loader object bound to an entity. Zero-inits multiple embedded containers (vtables PTR_FUN_11dbac64 -> PTR_FUN_11dbc480), stores ctor args (param_2->[0x4b], param_3->[0x4e], param_4->[0x4d], param_5 file->[5]), then reads the entity's 'BTFolder' AISetting property (tries 'BTFolder', 'Properties.BTFolder', 'PropertyCustom'+'.AISetting.BTFolder') and stores it. Base BT path root is '/Scripts/AI/BehaviorTree/'.* (conf medium)
- ƒ default scalar fields: [0x67]=5, [0x72]=10 (container initial capacities/limits)
- ƒ isServerCtx-ish flag: *(bool*)(this+0x30) = (param_1[0x4d]==0)
- ƒ AISetting property lookup chain: 'BTFolder' -> 'Properties.BTFolder' -> ('PropertyCustom' + '.AISetting.BTFolder')
- ƒ BT asset path base = '/Scripts/AI/BehaviorTree/'

### CBehaviorTreeContext::LoadAISettingsToBlackboard `@0x104a2af0` — monster-ai/blackboard
*Reads the entity's AISetting property block and pushes named tuning values into the AI blackboard. Property source resolved via 'Properties.'/'PropertyCustom'+'.AISetting.' chain. Reads BlackBoardFile, then AISetting keys 'Health' (float), 'RageDec' (float, DAT_11dbc56c), 'RageDec' key again, and 'TailFire'; for each present value it formats it (FUN_104a1b30 with DAT_11da0cf4 format) and writes it into the blackboard by key (FUN_113168d0 lookup + FUN_1046d130 set).* (conf medium)
- ƒ AISetting blackboard keys written: 'Health', 'RageDec' (DAT_11dbc56c), 'TailFire'
- ƒ each value written only if present AND >0.0 (Health/RageDec numeric guards)
- ƒ property source key chain: 'Properties.' -> 'PropertyCustom' + '.AISetting.' / '.AISetting'

### CFGModuleOnMonsterStateAbnormalInfo::GetRecordByKey `@117045a0` — monster-state
*CInfoManager keyed 2D-table accessor for CFGModuleOnMonsterStateAbnormalInfo (config for reacting to abnormal monster states / status effects). Returns record pointer or 0.* (conf medium)
- ƒ idx = key - *(mgr+0x30); bucket=*(*(mgr+0x20)+(idx/ *(mgr+0x28))*4); return *(bucket+(idx% *(mgr+0x28))*4)

### CMonster::ApplyCustomAppearanceSettings `@10dbb900` — monster-appearance
*Reads the 'PropertyCustom' InfoRecord block and applies cosmetic/appearance customization to a monster's character instance via CMonsterCustomSettingHelper: custom shader color (.colorCustom / .HasCustomColor), skin decals/scars (.SkinDecalSetting.DecalList: Texture/Normal/Dirscale/Upscale), hidden attachments (.HideAttachment.AttachmentList), morph weights (.Morph.MorphList: Weight), and attachment slots/objects/effects (.AttachmentSetting: AttachmentList AName/BName/Rotation/Position/Binding, ObjectAttachment, EffectAttachment, MonsterStateEffects). Iterates InfoRecord child arrays.* (conf medium)
- ƒ param_2 low-byte flags: bit tests param_2._3_1_ toggle color/decal application; param_2 masked with 0xffffff repeatedly (packs a 1-byte 'apply' flag in top byte)
- ƒ InfoRecord node type check == 6 (object node) before descending; type 7 handled via refcount release
- ƒ attachment effect uses model scale *(*(local_a0+0xc) vtbl+0xbc)() as the effect scale param

### CMonster::ComputeAimReflectedTarget `@10db7120` — monster-ai-aim
*Monster aim / target-lead computation. Pops the front of a small ring/deque of recorded target positions (history samples at +0x21a4..+0x21a8, 0xc-byte stride: Vec3 + 1 float), then transforms the relative target vector (targetPos - param) by the entity's orientation quaternion (matrix col fetched via vtbl+0xd0) using the standard q*v reflection formula, and forwards the result to FUN_10dba840. When debug flag *(DAT_1202e818+0x7c)+0xabc is set it draws a debug sphere labelled 'MonsterAim'.* (conf medium)
- ƒ gate: *(param_1+0x21b0)!=0 AND *(param_1+0x21a4)!=*(param_1+0x21a8) (history non-empty)
- ƒ sample pop: reads Vec3 local_20 = *(hist-0xc), scalar local_18 = *(hist-4); advances tail: *(param_1+0x21a8) -= 0xc
- ƒ rel = (target.x-param2, target.y-param3, sample-param4)
- ƒ quat-rotate-vector reflection: v' = rel + 2*( cross(q.xyz, cross(q.xyz,rel) + q.w*rel) ); components use q.xyz XORed with sign mask DAT_11de9c90 (float negate) matching Ghidra's q*v*q^-1 expansion
- ƒ debug sphere color arg &DAT_40400000 = 3.0f, radius 0x3f800000=1.0f

### CMonster::OnDamageFireBTDamageEvent `@1101b290` — monster-ai-damage
*Damage-reception handler that aggregates a HitDescriptor's damage components, then fires a 'DamageEvent' into the monster's BehaviorTreeBase blackboard with AttackDir, HitDamage, HitPoint, AttackerID, AttackAttr. Also raises the 'MHOnDamage' script event and marks the entity dirty (network 0x70,5). Gates on attack-attribute mask matching (param_1+0x30 & attrFlags). This is the aggro/threat input path from combat into AI.* (conf medium)
- ƒ damage array param_3 (pfVar1): [0..5] are 6 damage components (element/status channels)
- ƒ HitDamage = (int)ceil(pfVar1[0]) + (int)ceil(pfVar1[1] + DAT_11de9890 + pfVar1[2] + pfVar1[3] + pfVar1[4] + pfVar1[5])
- ƒ attr-flag detection: fields param_3[0x1a],[0x1c],[0x1e],[0x20] compared == 1.4013e-45 (float bit-pattern 0x00000001) to find the active attack-attr slot; if none, sets pfVar1[0x1b]=1.4013e-45
- ƒ if attacker entity type (vtbl+0xa8) == 2 : OR flag 8 into the attr word (pfVar7[1] \|= 8) — flags a special hit class
- ƒ gate: (*(param_1+0x30) & (uint)pfVar7[1]) != 0  (attack-attr mask must intersect monster's accepted mask)
- ƒ AttackDir = attackerPos - hitEntityPos (per-axis subtraction of two Vec3 fetched via vtbl+0x94)
- ƒ on gate-fail: zeroes all 6 damage components (damage nullified)
- $ HitDamage rounding: each channel ceil()'d; channels 1-5 summed then ceil'd together, channel 0 ceil'd separately, results added

### CMonster::SpawnParticleEffect `@10da0520` — monster-fx
*Client visual helper: profiles the scope 'CMonster::SpawnParticleEffect' then builds a particle-spawn descriptor (FUN_10b01ff0 with scale 1.0f, flags 0,0) and queues it (FUN_10a7b9f0). Pure rendering/FX.* (conf high)
- ƒ particle descriptor built with scale=0x3f800000(1.0f), two trailing flags = 0
- ƒ profiler gate via (*(DAT_1202e818+0xa0) vtbl +0xc)(this,'CMonster::SpawnParticleEffect',1,1)

### CMonsterInfo::ReadConfig `@117bf4e0` — monster-ai
*Reader for a monster/pet definition record. Parses id(@+0x10), Name(via CPet::SetName), Title(via CPet::SetName), LevelEnabled(@+0x1c), stat multipliers HPMul(float@+0x20), AttackMul(@+0x24), DefenseMul(@+0x28), CRIMul(@+0x2c), AvatarId1..8(@+0x30..+0x4c), SkeletonFile(str@+0x50), BlackBoardName(str@+0x68), BTFolder(str@+0x80), BTFiles(str@+0x98), EventBT(str@+0xb0), Gender(@+0xc8), MonsterEnabled(@+0xcc). The BT/BlackBoard fields wire this monster to its behavior-tree.* (conf high)
- ƒ HPMul->float@+0x20, AttackMul->+0x24, DefenseMul->+0x28, CRIMul->+0x2c (crit multiplier), all read as float10->float32
- ƒ AvatarId1..8 -> int @+0x30,+0x34,+0x38,+0x3c,+0x40,+0x44,+0x48,+0x4c
- ƒ LevelEnabled@+0x1c, Gender@+0xc8, MonsterEnabled@+0xcc

### CMonsterSpawnGroup::DoSpawnBatch `@116ae000` — monster-spawn
*AUTHORITATIVE spawn execution. Reads the cached spawn-group id at this+0x278 (must be >0), validates it exists in CSpawnMonsterGroupInfo, builds a spawn context from this+0x20 (position?) and this+0x30 (region/level ctx) via FUN_116f86a0, then configures a spawner: count param (defaulting to this+0x38 when caller count<1 or flag this+0xe4==0), FUN_1184a310(count), FUN_1184a540(ctx), FUN_1184a650(param_3)->number actually spawned (clamped >=0). Returns spawned count.* (conf medium)
- ƒ groupId = *(this+0x278); require >0 and valid in CSpawnMonsterGroupInfo
- ƒ if (param_2 < 1) \|\| (*(byte)(this+0xe4)==0): count = *(this+0x38)   // default spawn amount
- ƒ spawnedCount = FUN_1184a650(param_3); if (<1) spawnedCount=0

### CMonsterSpawnGroup::EnableSpawner `@11643b90` — monster-spawn
*AUTHORITATIVE spawn scheduler. Rolls a randomized FirstSpawnDelay in [min,max] and, if positive, schedules a one-shot timer 'CMonsterSpawnGroup::EnableSpawner' (delay*1000 ms) with callback FUN_116440b0(this) and stores the timer handle at this[0x31]. If the first delay <= 0, immediately rolls a second randomized value from a second min/max pair and calls vtable+0xb4(value) (spawn now / set count).* (conf high)
- ƒ delay = (int)((double)FUN_100ee450() * _DAT_11de98f0 * (double)((max-min)+1)) + min   // uniform int in [min,max]
- ƒ _DAT_11de98f0 = 1/RAND_MAX scale (rand01 normalizer; shared across codebase)
- ƒ primary pair: min=this[0x23] (off 0x8c), max=this[0x24] (off 0x90) -> FirstSpawnDelay(sec)
- ƒ timer: FUN_100ea610(name, delay*1000 ms, oneShot=1, this, cb=FUN_116440b0, 0); handle-> this[0x31] (off 0xc4)
- ƒ fallback pair when delay<=0: min=this[0x25] (0x94), max=this[0x26] (0x98) -> value passed to vtbl+0xb4

### CMonsterSpawnGroup::ResolveSpawnGroupInfo `@11644370` — monster-spawn
*Looks up a CSpawnMonsterGroupInfo record by key (param_2) using the standard CInfoManager 2D table and caches the record pointer into this+0x7c (0 if not found).* (conf high)
- ƒ idx = key - *(mgr+0x30); bucket=*(*(mgr+0x20)+(idx/ *(mgr+0x28))*4); this+0x7c = *(bucket + (idx% *(mgr+0x28))*4)

### CMonsterSpawnGroup::_CheckRespawn `@116448e0` — monster-spawn
*AUTHORITATIVE respawn scheduler. If respawn count so far (this[0x32]) < respawn amount (this[0x27]), and a virtual precondition (vtable+0x2c, e.g. group still active/alive slots) passes, and no respawn timer is pending (this[0x33]==-1): rolls a randomized RespawnDelay in [min,max]; if >0 schedules one-shot timer 'CMonsterSpawnGroup::_CheckRespawn' with callback FUN_11644120 and stores handle at this[0x33]; else respawns immediately via FUN_11644120(-1,1).* (conf high)
- ƒ gate: this[0x32] (respawnedCount, off 0xc8) < this[0x27] (respawnAmount, off 0x9c)
- ƒ gate: vtbl+0x2c() true AND this[0x33] (timer handle, off 0xcc) == -1
- ƒ delay = (int)((double)FUN_100ee450() * _DAT_11de98f0 * (double)((max-min)+1)) + min
- ƒ RespawnDelay pair: min=this[0x28] (0xa0), max=this[0x29] (0xa4)
- ƒ timer: FUN_100ea610(name, delay*1000 ms, 1, this, FUN_11644120, 0) -> this[0x33]; else FUN_11644120(0xffffffff,1)

### CMonsterSpawnGroupEntry::ParseXml `@1189ca40` — monster-spawn
*Parses one <MonsterSpawnGroups> entry. Resolves/auto-assigns the group key (attr DAT_11de661c; if <=0 auto-generates count+1 \| 0x10000000), then reads RegionID(@+0x4), SpawnAmountMin(@+0x8)/SpawnAmountMax(@+0xc), FirstSpawnDelayMin/Max(@+0x10/+0x14 via FUN_1189a8a0), RespawnAmont(@+0x18), RespawnDelayMin/Max(@+0x1c/+0x20 via FUN_1189a8a0), SpawnMonsterGroupID(@+0x24), and a RandomMonsters list (each MonsterID + SpawnWeight, appended via FUN_1189db00 when MonsterID>0 and SpawnWeight>0). Returns success only if SpawnMonsterGroupID>0 or the RandomMonsters list is non-empty.* (conf high)
- ƒ group key from attr; if key<=0: key = (existingEntryCount + 1) \| 0x10000000  (auto id, high bit tag)
- ƒ RegionID->param_1+1 (0x4)
- ƒ SpawnAmountMin->param_1[2] (0x8), SpawnAmountMax->param_1[3] (0xc); both required
- ƒ FirstSpawnDelay pair (min,max)->param_1+4,+5 (0x10,0x14)
- ƒ RespawnAmont (sic, typo in data)->param_1[6] (0x18)
- ƒ RespawnDelay pair (min,max)->param_1+7,+8 (0x1c,0x20)
- ƒ SpawnMonsterGroupID->param_1[9] (0x24)
- ƒ RandomMonsters entry: MonsterID default 0, SpawnWeight default 100; appended if MonsterID>0 && SpawnWeight>0
- ƒ success gate: param_1[9]>0 OR RandomMonsters list (param_1+10, 0x28) non-empty
- $ SpawnWeight default = 100 when attribute absent

### CSpawnMonsterGroupInfo::ReadConfig `@116f8790` — monster-spawn
*Reader for a CSpawnMonsterGroupInfo record (weighted monster spawn group). Parses id (attr@+0x10), Name(str@+0x14), then a MonsterID list where each entry may carry SpawnWeight and a LevelMin/LevelMax range; entries are appended into the group's monster list (via FUN_11645210). Handles both a single MonsterID value and an array form.* (conf medium)
- ƒ record id -> this+0x10 (attr reader vtbl+0x20)
- ƒ Name -> this+0x14 (string)
- ƒ per entry: MonsterID (int) + SpawnWeight (int, default via presence check) + LevelMin + LevelMax; SpawnWeight>0 required to append
- ƒ entry struct assembled at local_418: [monsterId(local_42c), weight(local_414), levelMin(local_410), levelMax(local_40c)] -> FUN_11645210

### CmdDisableMonsterAI_GM `@10c36430` — monster-ai/gm
*GM/dev handler: parses atoi(arg0) as a target monster/entity id, iterates all monsters in the monster manager (DAT_1202e818+0xd0 -> +0x90 iterator: FUN_113a58c0/58d0 loop), and when a monster's id (FUN_113a2390) matches and it has a valid gameobject (+0xc), issues the network command "gm disablemonsterai %d" via the console/net (vtable+0x5b4). Only runs when the not-a-server-authoritative check (vtable+0x164) is false, i.e. it forwards to the server.* (conf medium)

### LoadBlackBoard::ParseXml `@0x104b9210` — monster-ai/blackboard
*Recursive AI blackboard XML loader. Validates the 'BlackBoard' tag, follows a single 'Parent' (with 'FileName') and a 'Parents' list of parent blackboards (each 'Parent'/'FileName'), recursing to load each parent file first (path base from DAT_123bb90c+0x18), then processes the 'KeyVars' section (FUN_104b98b0) to load this file's own key variables.* (conf medium)
- ƒ XML tags: 'BlackBoard' (root), 'Parent'+'FileName' (single inherit), 'Parents' (list), 'KeyVars' (own vars)
- ƒ parent files loaded before child (inheritance/override order)

### MHMonsterSpawnPoint::ParseEntity `@118a3500` — monster-spawn
*Reads an MHMonsterSpawnPoint level entity. Parses name(@+0x1c), EntityClass(@+0x34), Pos %f,%f,%f (@+0x10/+0x14/+0x18), Rotate %f,%f,%f,%f quaternion (@+0xc,+0x0,+0x4,+0x8), LevelWeather(@+0x4c), LevelTime(@+0x50), FixedMonsterID(@+0x60, default 0), RegionID(@+100=0x64, default -1), SpawnerEnable(@+0x54, default 0), EntityGuid (%PRIX64 hex64 @+0x58), and a LevelInfo id list (parsed from a comma/token string into the list at +0x68).* (conf high)
- ƒ Pos: sscanf '%f,%f,%f' -> +0x10,+0x14,+0x18 (default '0,0,0')
- ƒ Rotate: sscanf '%f,%f,%f,%f' -> +0xc,+0x0,+0x4,+0x8 (default '0,0,0,0')
- ƒ FixedMonsterID default 0; RegionID default 0xffffffff(-1); SpawnerEnable default 0
- ƒ EntityGuid: sscanf '%PRIX64' -> 64-bit at +0x58
- ƒ LevelInfo list: tokenize -> ints >0 appended to list at +0x68

### MonsterSpawnCondition_AbnormalState::ParseFromXmlNode `@11a27780` — monster-spawn / quest-objective (status-ailment) condition parsing
*Deserializes a 'monster abnormal-state' spawn/objective condition. Fields: groupId, spawnGroupId, targetMonsterID, targetStateAbnormal, msgID, TargMsgID, MonsterBuffID1..3, Time1..3, AlertMsgID. groupId -> parent+0x10; 12 dwords -> 0x30-byte record appended to vector; grow via FUN_11a282e0. Semantics: when targetMonsterID enters status/abnormal state 'targetStateAbnormal' (poison/para/sleep/etc), fire spawnGroupId and apply buffs/timers.* (conf high)
- ƒ record size = 0x30 bytes (12 dwords)
- ƒ groupId -> parent+0x10
- ƒ record layout: [0]=spawnGroupId [1]=targetMonsterID [2]=targetStateAbnormal [3]=msgID [4]=TargMsgID [5]=MonsterBuffID1 [6]=MonsterBuffID2 [7]=MonsterBuffID3 [8]=Time1 [9]=Time2 [10]=Time3 [11]=AlertMsgID
- ƒ append: if(end==cap) FUN_11a282e0(end,&rec,&flag,1,1) else copy 12 dwords; end += 0x30
- ƒ name-registration bitmask = DAT_123a88e8
- $ targetStateAbnormal = status-ailment id/enum; Time1..3 = durations

### MonsterSpawnCondition_BreakPart::ParseFromXmlNode `@11a26090` — monster-spawn / quest-objective (part-break) condition parsing
*Deserializes a 'break monster part' spawn/objective condition. Fields: groupId, spawnGroupId, logic, msgID, targetMonsterID, targetPartName (string), targetBreakLev, TargMsgID, targetPartName2 (string), targetBreakLev2, TargMsgID2, MonsterBuffID1..3, Time1..3, AlertMsgID. Two of the fields (targetPartName/targetPartName2) are std::string members read via vtable+0x24 into local SSO string buffers (local_464/local_444, 16-byte inline). groupId -> parent+0x10. Record is 0x6c (108) bytes (contains two embedded strings), appended to vector [param_1+0x18..0x1c); grow via FUN_11a27030, copy-construct via FUN_11a25d00, and local strings freed with FUN_10c3d5d0 if heap-allocated. Semantics: when the named body part(s) of targetMonsterID are broken to targetBreakLev, fire spawnGroupId.* (conf high)
- ƒ record size = 0x6c (108) bytes; contains two std::string (SSO, 16-byte inline buffer at offsets for part names)
- ƒ groupId -> parent+0x10
- ƒ scalar fields: spawnGroupId(local_474), logic(local_470), msgID(local_46c), targetMonsterID(local_468), targetBreakLev(local_44c), TargMsgID(local_448), targetBreakLev2(local_42c), TargMsgID2(local_428), MonsterBuffID1(local_424), MonsterBuffID2(local_420), MonsterBuffID3(local_41c), Time1(local_418), Time2(local_414), Time3(local_410), AlertMsgID(local_40c)
- ƒ append: if(end==cap) FUN_11a27030(end,&rec,&flag,1,1) else FUN_11a25d00(&rec) [copy-ctor into slot]; end += 0x6c
- ƒ name-registration bitmasks: DAT_123a8778 (32 fields) then DAT_123a88bc (Time3, AlertMsgID)
- $ targetBreakLev/targetBreakLev2 = required part break level; Time1..3 = durations

### MonsterSpawnCondition_HitPart::ParseFromXmlNode `@11a2a160` — monster-spawn / quest-objective (part-hit) condition parsing
*Deserializes a 'hit monster part N times' spawn/objective condition. Fields: groupId, spawnGroupId, logic, msgID, wrongHitCheck, targetMonsterID, targetPartName (string), targetPartCount, TargMsgID, targetPartName2 (string), targetPartCount2, TargMsgID2, MonsterBuffID1..3, Time1..3, AlertMsgID. Two std::string part-name members (SSO buffers local_464/local_444). groupId -> parent+0x10. Record is 0x70 (112) bytes appended to vector; grow via FUN_11a2b1c0, copy-construct via FUN_11a29dd0, strings freed via FUN_10c3d5d0. Semantics: when the named part(s) of targetMonsterID are hit targetPartCount times, fire spawnGroupId. 'wrongHitCheck' flags whether hits on non-target parts count/invalidate.* (conf high)
- ƒ record size = 0x70 (112) bytes; two embedded std::string part names
- ƒ groupId -> parent+0x10
- ƒ scalar fields: spawnGroupId(local_478), logic(local_474), msgID(local_470), wrongHitCheck(local_46c), targetMonsterID(local_468), targetPartCount(local_44c), TargMsgID(local_448), targetPartCount2(local_42c), TargMsgID2(local_428), MonsterBuffID1(local_424), MonsterBuffID2(local_420), MonsterBuffID3(local_41c), Time1(local_418), Time2(local_414), Time3(local_410), AlertMsgID(local_40c)
- ƒ append: if(end==cap) FUN_11a2b1c0(end,&rec,&flag,1,1) else FUN_11a29dd0(&rec) [copy-ctor]; end += 0x70
- ƒ name-registration bitmasks: DAT_123a8ae4 (32 fields) then DAT_123a8c28 (Time2,Time3,AlertMsgID)
- $ targetPartCount/targetPartCount2 = required hit counts on named parts; wrongHitCheck = bool/flag; Time1..3 = durations

### MonsterSpawnCondition_ItemCollect2::ParseFromXmlNode `@11a2b5a0` — monster-spawn / quest-objective condition parsing
*Deserializes an item-based spawn/objective condition, layout-identical to FUN_11a24910 (groupId, itemId, itemNum, spawnGroupId, msgID, TargMsgID, MonsterBuffID1..3, Time1..3, AlertMsgID). groupId -> parent+0x10; 12 dwords -> 0x30-byte record appended to a different vector/parent; shares the same emplace helper FUN_11a25470. Likely a second item-condition subtype (e.g. consume vs deliver) with its own static name-registration state (DAT_123a8c68).* (conf high)
- ƒ record size = 0x30 bytes (12 dwords), identical layout to 11a24910
- ƒ groupId -> parent+0x10
- ƒ record layout: [0]=itemId [1]=itemNum [2]=spawnGroupId [3]=msgID [4]=TargMsgID [5]=MonsterBuffID1 [6]=MonsterBuffID2 [7]=MonsterBuffID3 [8]=Time1 [9]=Time2 [10]=Time3 [11]=AlertMsgID
- ƒ append: if(end==cap) FUN_11a25470(end,&rec,&flag,1,1) else copy 12 dwords; end += 0x30
- ƒ name-registration bitmask = DAT_123a8c68 (separate from 11a24910's DAT_123a8670)
- $ itemNum = required item quantity; itemId = required item id; Time1..3 = durations

### MonsterSpawnCondition_ItemCollect::ParseFromXmlNode `@11a24910` — monster-spawn / quest-objective condition parsing
*Deserializes one item-based spawn/objective condition record. Fields: groupId, itemId, itemNum, spawnGroupId, msgID, TargMsgID, MonsterBuffID1..3, Time1..3, AlertMsgID. groupId -> parent+0x10; remaining 12 dwords -> 0x30-byte record appended to vector [param_1+0x18..0x1c). Emplace helper FUN_11a25470 on grow. Semantics: when the player group collects/turns in itemNum of itemId, fire spawnGroupId and apply buffs/timers/messages.* (conf high)
- ƒ record size = 0x30 bytes (12 dwords)
- ƒ groupId -> parent+0x10
- ƒ record layout: [0]=itemId [1]=itemNum [2]=spawnGroupId [3]=msgID [4]=TargMsgID [5]=MonsterBuffID1 [6]=MonsterBuffID2 [7]=MonsterBuffID3 [8]=Time1 [9]=Time2 [10]=Time3 [11]=AlertMsgID
- ƒ append: if(end==cap) FUN_11a25470(end,&rec,&flag,1,1) else copy 12 dwords; end += 0x30
- ƒ name-registration bitmask = DAT_123a8670
- $ itemNum = required item quantity (objective threshold); itemId = required material/item id; Time1..3 = buff/timer durations

### MonsterSpawnCondition_KillCount::ParseFromXmlNode `@11a23370` — monster-spawn / quest-objective condition parsing
*Deserializes one 'kill-count' spawn/objective condition record from an XML/property-tree node (param_2 is an attribute reader with vtable: +0x10 hasAttr(name)->bool, +0x20 getAttrInt(name)->int, +0x24 getAttrString(node,name)). Fields read in order: groupId, spawnGroupId, msgID, logic, targetMonsterID, targetCount, TargMsgID, targetMonsterID2, targetCount2, TargMsgID2, MonsterBuffID1..3, Time1..3, AlertMsgID. groupId is written to parent object at (param_1+0x10); the remaining 16 dwords are packed into a 0x40-byte record and appended to the vector [param_1+0x18 .. param_1+0x1c). If capacity remains the 16 dwords are copied inline and end ptr advanced by 0x40, else growth/emplace helper FUN_11a241d0 is called. This is a condition that, when N monsters of one/two target species are killed, fires spawnGroupId (spawns a wave), sends msgID/TargMsgID, applies MonsterBuffID1..3 and Time1..3, and shows AlertMsgID. 'logic' selects AND/OR combination of the two target-monster sub-conditions.* (conf high)
- ƒ record size = 0x40 bytes (16 dwords) appended per condition
- ƒ groupId -> stored at parent+0x10 (getAttrInt on 'groupId')
- ƒ record dword layout (from stack copy): [0]=spawnGroupId [1]=msgID [2]=logic [3]=targetMonsterID [4]=targetCount [5]=TargMsgID [6]=targetMonsterID2 [7]=targetCount2 [8]=TargMsgID2 [9]=MonsterBuffID1 [10]=MonsterBuffID2 [11]=MonsterBuffID3 [12]=Time1 [13]=Time2 [14]=Time3 [15]=AlertMsgID
- ƒ vector append: if (end==cap) FUN_11a241d0(end,&rec,&flag,1,1) else copy 16 dwords; end += 0x40
- ƒ per-attribute one-time name registration guarded by bitmask DAT_123a8514 (bit per field, 32 bits) then DAT_123a8658 for AlertMsgID
- $ targetCount, targetCount2 = number of monsters to kill (objective thresholds); Time1..3 = buff/timer durations (units unknown, likely ms or s)

### MonsterSpawnCondition_MonsterPresent::ParseFromXmlNode `@11a28a80` — monster-spawn / quest-objective condition parsing
*Deserializes the simplest monster-target spawn/objective condition. Fields: groupId, spawnGroupId, targetMonsterID, msgID, TargMsgID, MonsterBuffID1..3, Time1..3, AlertMsgID (no count/part/state). groupId -> parent+0x10; 11 dwords -> 0x2c (44)-byte record appended to vector; grow via FUN_11a29520. Semantics: on presence/kill of targetMonsterID, fire spawnGroupId with buffs/timers/messages.* (conf high)
- ƒ record size = 0x2c (44) bytes (11 dwords)
- ƒ groupId -> parent+0x10
- ƒ record layout: [0]=spawnGroupId [1]=targetMonsterID [2]=msgID [3]=TargMsgID [4]=MonsterBuffID1 [5]=MonsterBuffID2 [6]=MonsterBuffID3 [7..8]=Time1,Time2 (written as CONCAT44 8-byte store) [9]=Time3 [10]=AlertMsgID
- ƒ append: if(end==cap) FUN_11a29520(end,&rec,&flag,1,1) else copy 11 dwords; end += 0x2c
- ƒ name-registration bitmask = DAT_123a89f0
- $ Time1..3 = buff/timer durations

### OnMonsterStateAbnormalInfo::GetTypeDescriptor `@11936910` — monster-state
*One-time init of the 'OnMonsterStateAbnormal' type descriptor (DAT_1239fb48 block): type id 0xe3, count 1. Returns descriptor pointer.* (conf medium)
- ƒ _DAT_1239fb48 = 0xe3 (type id); _DAT_1239fb50 = 1

### SharkAI::OnEventAndReadParams `@11082790` — monster-ai-movement
*Shark-AI goal/behavior event handler and runtime param reader. Handles blackboard/signal events: 'targetId' (set current target @0x161c), 'selectTarget' (set target, reset circling state, enter state 8), 'goAway' (enter state 6, reset), 'spawned'. Then reads live movement params (speedInertia, sprint, rotSpeed, turn radius, accel/decel, circle distances, circlingTime, numCircles, bones, melee sub-block) into the runtime struct. A finite state machine field lives at +0x1bd8.* (conf medium)
- ƒ targetId/selectTarget: *(param_1+0x161c) = targetEntity
- ƒ selectTarget resets: 0x15fc,0x16e0,0x16dc,0x16d8,0x15ec,0x15e8,0x15e4 = 0; state @0x1bd8 = 8; reads 'spawned' flag @0x1b84
- ƒ goAway: state @0x1bd8 = 6; resets 0x15fc,0x15ec,0x15e8,0x15e4 = 0
- ƒ runtime param offsets: speedInertia@0x1b30, minTurnRadius@0x1b3c, sprintMultiplier@0x1b40, sprintDuration@0x1b44, accel@0x1b48, decel@0x1b4c, rotSpeed_min@0x1b50, rotSpeed_max@0x1b54, speed_min@0x1b58(+7000), minDistanceCircle@0x1b5c, maxDistanceCircle@0x1b60, numCircles@0x1b64(int), minDistForUpdatingMoveTarget@0x1b68, melee.radius@0x1b70, circlingTime@0x1b74, melee.rollTime@0x1b78, melee.rollAngle@0x1b7c, escapeAnchorType@0x1b80
- ƒ rollAngle converted to radians: *pfVar1 *= DAT_11de98c0 (deg->rad, ~0.01745)

### SharkAI::SerializeParams `@11080ba0` — monster-ai-movement
*Serializes/loads the 'SSharkParams' movement-AI parameter block for a shark-type monster into struct fields, using an XML/serializer object (vtbl +0x70 float, +0x54 int, +0x74 bool). Maps circling/sprint/melee movement tuning to offsets 0x160..0x1c0.* (conf high)
- ƒ speedInertia@0x160, rollAmount@0x164, accel@0x178, decel@0x17c, sprintMultiplier@0x170, sprintDuration@0x174
- ƒ rotSpeed_min@0x180, rotSpeed_max@0x184, speed_min@0x188
- ƒ minDistanceCircle@0x18c, maxDistanceCircle@0x190 (shown as +400), numCircles@0x194 (int)
- ƒ minDistForUpdatingMoveTarget@0x198, meleeAnimation@0x19c (string), meleeDistance@0x1a0
- ƒ circlingTime@0x1a4, attackRollTime@0x1a8, attackRollAngle@0x1ac
- ƒ escapeAnchorType@0x1b0 (int), bSpawned@0x1b4 (bool)
- ƒ headBoneName@0x1b8, spineBoneName1@0x1bc, spineBoneName2@0x1c0

### SpawnMonsterGroupInfo::GetTypeDescriptor `@118a4120` — monster-spawn
*One-time init of the SpawnMonsterGroupInfo type descriptor (DAT_1239bd94 block): type id 0x27, count 1, various zeroed fields, instance pointer stashed. Returns descriptor pointer, sets *param_2=1.* (conf medium)
- ƒ _DAT_1239bd94 = 0x27 (type id/field count); _DAT_1239bd9c = 1

### SpawnMonsterGroupInfo::registerName `@118a40b0` — monster-spawn
*Registers the 'SpawnMonsterGroupInfo' string name; returns arg.* (conf medium)


## BehaviorTree  (32)

### BTCryVector3::ParseFromParamString `@0x104c4860` — BehaviorTree/params
*Parses a Vec3/Vec4 (4 floats) from a node-parameter string 'x,y,z,w' via sscanf_s '%f,%f,%f,%f'. Requires the object's IsEnabled (vtable+0x18) true and a valid param (FUN_104cd660). On 4 successful floats and at least one non-tiny component, stores the vector to param_3 (x,y,z at +0/+4/+8, w at +0xc) and validates finiteness (rejects inf/nan via exponent mask 0x7f800000). Returns true iff all components finite.* (conf high)
- ƒ sscanf_s(src,'%f,%f,%f,%f',&x,&z,&y,&w) — note decompiler ordering; 4 floats required
- ƒ finite check: (bits & 0x7f800000) != 0x7f800000 for each of x,y,z,w (0x7f800000 = inf/nan exponent)
- ƒ non-tiny gate: \|component\| > DAT_11de98c4 (small epsilon, via abs mask DAT_11de9c70) for at least one
- ƒ wassert 'this->IsValid()' at BTCry_Vector3.h line 0x95

### BTObject::~Dtor_ReleaseSmartPtr18 `@0x10488eb0` — BehaviorTree/smartptr
*Object teardown: releases smart-pointer member at +0x18 (Release semantics, vtable[0](1) on zero refcount), then frees heap block at +0x14 (FUN_10c3d5d0) if distinct from self.* (conf high)
- ƒ release member @+0x18; free @+0x14 if (!=this && !=0)

### BTObject::~Dtor_ReleaseSmartPtr18_b `@0x10489a30` — BehaviorTree/smartptr
*Same teardown as 10488eb0: release smart ptr @+0x18 (vtable[1] dtor variant), free @+0x14.* (conf high)

### BTObject::~Dtor_ReleaseSmartPtr18_c `@0x10489d60` — BehaviorTree/smartptr
*Object teardown identical to 10488eb0 (release @+0x18, free @+0x14).* (conf high)

### BTObject::~Dtor_ReleaseSmartPtr18_ret `@0x1048a3a0` — BehaviorTree/smartptr
*Teardown as 10488eb0 but returns param_1 (release @+0x18 via vtable[1], free @+0x14).* (conf high)

### BTObject::~Dtor_ReleaseSmartPtr18_ret_b `@0x1048a3f0` — BehaviorTree/smartptr
*Teardown as 1048a3a0 but release uses vtable[0](1). Returns param_1.* (conf high)

### CBTIteratorState::~Dtor `@0x104b6eb0` — BehaviorTree
*Destructor for 104b6d90's type: frees owned block [5] (FUN_104b3f20 + free), releases smart ptr [3], resets vtable to base PTR_FUN_11dbac64.* (conf medium)

### CBTNode::SetSmartPtrMember50 `@0x104979c0` — BehaviorTree/smartptr
*Setter for a smart-pointer member at this+0x50: AddRef new value, Release old, store, AddRef stored again (standard _smart_ptr::operator=).* (conf high)

### CBTNodeGroup::~Dtor `@0x104931f0` — BehaviorTree
*Destructor of a BT node/group container. Sets vtable PTR_FUN_11dbae74; walks child vector [4]..[5] calling each child's vtable[0](1); conditionally frees owned block at [0xb] (flag byte at +0xc*4); releases smart ptrs at [0x14],[0x12],[0x11] (latter two gated by refcount-owned byte at +2); frees child vector storage [4].* (conf medium)
- ƒ child vector: begin=[4], end=[5]; flag byte at *(char*)(this+0xc*4); owned block ptr [0xb]
- ƒ smart ptr members at word offsets [0x11],[0x12],[0x14]

### CBTObject::SetSmartPtrMember84 `@0x104b4e40` — BehaviorTree/smartptr
*Setter for smart-pointer member at this+0x84 (AddRef new, Release old, store, AddRef).* (conf high)

### CBTObject::~Dtor `@0x104b51a0` — BehaviorTree
*Destructor: sets vtable PTR_FUN_11dbc7a8, clears back-link (*(this[0x29]+0x20)=0), tears down owned listener at [0x28] (FUN_1047c530), frees [0x2a], releases refcounted [0x28]/[0x21], frees embedded string [0x27], calls base FUN_104b5110, resets vtable to PTR_FUN_11dbac64.* (conf medium)

### CBTTreeWalker::Init `@0x104bad50` — BehaviorTree/runtime
*Initializes a BT tree-walk/iterator context. Stores tree root smart-ptr (param_2 @+0x20, AddRef), stores a second object (param_3 @+0x34), copies node table pointers (+0x1c = *(param_2+0xc), +0x3c = param_2+0x28, +0x28 = param_3+0x14), computes node count = *(*(this+0x1c)+0x20) writing it to *(param_3+0x6c), pre-populates a per-node visited/stack array, and seeds the first current node at +0x14.* (conf low)
- ƒ node count = *(int*)(*(this+0x1c)+0x20) stored to *(param_3+0x6c)
- ƒ per-node entry stride 0x10 (16 bytes) in the node-position table walked by iVar5+=0x10

### CBehaviorTreeContext::BuildRuntimeNodeMaps `@0x104a69f0` — BehaviorTree/runtime
*Populates runtime node lookup maps for an AI instance from a source table. Resolves the current node set (via FUN_1048a120 against a global at DAT_123bb90c+0x28), then walks three red-black trees rooted in the source object (offsets +0x10/+0x28/+0x4c) building key->value pairs (FUN_104a6d40 pair-maker) into arrays at this+0x118/+0x120 and this+0x10c, clears an existing list at +0x34..+0x40, and sets ready flag *(this+0x171)=1.* (conf low)
- ƒ guard: *(this+0x200) != *(this+0x1fc) and resolved node != global set
- ƒ per-entry stride 0xc (12 bytes) writing into *(this+0x10c) array indexed by count
- ƒ sets *(this+0x171) = 1 (maps-ready flag) on success

### CBehaviorTreeContext::SerializeNodeRef `@0x104a6720` — BehaviorTree/serialize
*Serializes a BT node reference into a network/save buffer (param_4). Builds the node name string from *(node+0x9c), checks it resolves to the expected node id (FUN_1048a080 == param_6), then writes length-prefixed name plus offset fields into the buffer via FUN_100eaf50 (raw write) and back-patches a size field.* (conf low)
- ƒ writes: int len, name bytes, int 0 placeholder; back-patch *(buf+0xc + startOff) = curOff - startOff

### LoadBehaviorTree::ApplyOverrideBranch `@0x104994b0` — BehaviorTree/override
*Parses an override's RT (runtime) path against a referenced BT file and creates an override branch. strstr-matches the BT filename (*(ref+0x20)) inside the override's reference path (*(node+0xc)+0x38); tokenizes the RT path via FUN_1047c8f0 building a ':'-joined id list; when the path has exactly one segment and a flag is set it edits the node in place (writes segment id to node+0x4c, appends to list node+0x1c), otherwise creates a new override branch (FUN_10498a10/FUN_10498ab0) and links it (node+0x10). Increments a counter at target+0x24.* (conf medium)
- ƒ single-segment path (iVar5==1) + flag param_4 -> in-place: node+0x4c = segment id; else create override branch at ret+0x10
- ƒ *(iVar6+0x24) += 1 (override apply count)

### LoadBehaviorTree::ExpandReferencesAndApplyOverrides `@0x1049b020` — BehaviorTree/override
*Second load pass: expands 'Reference' sub-tree nodes and applies overrides across the tree/group managers. Walks the override list (+0x1c) and reference list (+0x14), clones sub-trees (FUN_1049bd50), erases old id-map entries from parent & sub-tree group managers, re-parents cloned nodes, and recursively expands nested references. Rich error set covers RT-path resolution, id-map erase failures, clone failures, and 'root must contain single child' validation.* (conf medium)
- ƒ reference bt file validity: ((child_end - child_begin) & 0xfffffffc) == 4  => exactly one child under root
- ƒ RT-path node name build: sprintf('%s%c%-i', parentPath, ':' (0x3a), childNodeId+0x54)
- ƒ override apply not allowed over an already-expanded tree (guard on iVar15+0x24 > 0)

### LoadBehaviorTree::LoadXmlRoot `@0x10499a30` — BehaviorTree/load
*Loads a behavior-tree XML file: gets XML system via DAT_123bb90c+8, validates the root is a 'Behavior' node (vtable+0x10 IsTag), fetches child count, recursively parses each node via FUN_10499f10, rejects stray 'OverrideNode' at root, and finalizes id-map (FUN_1049cbc0). Errors: 'Couldn't find root node in xml file!', 'Failed to find override root node!', 'Root Node is not ready when load XML file'.* (conf medium)

### LoadBehaviorTree::ParseNode `@0x10499f10` — BehaviorTree/nodes
*Core recursive BT-node XML parser. Reads 'Node_id' (int, req) and 'Type' (req) attributes, dispatches by node Type, constructs the concrete node, sets id/flags, links into parent's child vector, records into the tree id-map, and recurses into 'Connector' children (also handles 'EventBT').* (conf high)
- ƒ Node type taxonomy: Reference \| Selector(SelectorType: Random/General/RandomAttack) \| Sequence(SequenceType) \| Filter(Filter_Type) \| Action \| Condition
- ƒ Selector alloc: General -> operator new(0x54); Random/RandomAttack -> operator new(0x70); Reference -> new(0x64=100); Enter_Exit filter -> new(0x5c); EventBT child -> new(0x50)
- ƒ Action/Condition leaf: node[0x17] = 2 - (strcmp(Type,'Action')!=0) => Action=2, Condition=1; leaf class resolved by 'Operation' attr via leaf factory (DAT_123bb90c+0x14)
- ƒ Filter subtypes -> factory calls: Logger=FUN_1049e300, Timer=FUN_1049e390, Counter=FUN_1049e440, Loop(DAT_11dbb71c)=FUN_1049e4f0, Until_Fails_Limited=FUN_1049e5a0, Until_Fails=FUN_1049e650, Until_Success=FUN_1049e6e0, (DAT_11dbb75c)=FUN_1049e800
- ƒ Timer: attr 'Time' (float, DAT_11dbb648) default 0xbf800000 = -1.0f
- ƒ Counter: attr 'Times' (int) default -1; node[0x16]=Times, node[0x17]=0
- ƒ Loop: attr 'Times' default -1; node[0x16]=Times, node[0x17]=0
- ƒ Until_Fails_Limited: attr 'Times' default -1; node[0x16]=Times, node[0x17]=0
- ƒ node struct: [9]=Node_id; [0xe] \|= parent[0xf] (inherited flags); [0x13]=id-map entry ptr; child vector at [4](storage)/[5](end-ptr)/[6](cap-ptr)
- ƒ '.' string DAT_11dbaf60 len==4 short-circuit sets local_a1=0 (skip attach to parent)

### LoadBehaviorTree::ParseNodeCustomAttrs `@0x1049ae30` — BehaviorTree/nodes
*Iterates all XML attributes of a node (vtable+0x18 count, +0x1c getAt), skips the reserved keys 'Comment', 'Type' (DAT_11da7300), 'Type'(DAT_11dbabc0) and 'Node_id', and stores every other attribute as a custom key/value property on the node (FUN_104934f0).* (conf medium)
- ƒ reserved attribute keys skipped: Comment, Type(x2 dat refs), Node_id

### SmartPtr::Assign `@0x1049c650` — BehaviorTree/smartptr
*Smart-pointer assignment: AddRef *param_2 (+4), Release *param_1, store.* (conf high)

### SmartPtr::Assign_refcount4 `@0x104bb120` — BehaviorTree/smartptr
*Assign a plain refcounted pointer to *param_1: AddRef param_2 (+4), Release prior, store. (refcount-at-+4 variant, wassert-guarded.)* (conf high)

### SmartPtr::Release `@0x1048ac50` — BehaviorTree/smartptr
*Release a single smart pointer at *param_1 (dec refcount @+4, call vtable[1] dtor at 0, wassert on negative).* (conf high)

### SmartPtr::Release_vtable0 `@0x10492f90` — BehaviorTree/smartptr
*Release a single smart pointer (dec refcount @+4, call vtable[0](1) dtor at 0).* (conf high)

### SmartPtr::Release_withInnerRelease `@0x104c3ac0` — BehaviorTree/smartptr
*Release variant: dec refcount at param_1+2 (word offset 8 bytes); on zero, conditionally destroys an inner owned object at [0x11] (gated by owner byte at word +0x10) then calls vtable[0](1).* (conf medium)

### SmartPtrVector::CopyAssignRange `@0x1048a9b0` — BehaviorTree/smartptr
*Copy-assign smart-pointer range: AddRef source (+4), Release destination prior, store source into destination.* (conf high)

### SmartPtrVector::DestroyRangeBackward `@0x1048a240` — BehaviorTree/smartptr
*Destroys a range of smart pointers walking backward (param_1 down to param_2, step -4), Release each (dec refcount @+4, vtable[1] dtor at 0).* (conf high)

### SmartPtrVector::DestroyRangeForward `@0x1048a2e0` — BehaviorTree/smartptr
*Destroys a forward range of smart pointers (param_1..param_2, step +4), Release each.* (conf high)

### SmartPtrVector::InsertRange `@0x10488ad0` — BehaviorTree/smartptr
*std::vector<_smart_ptr<T>>::insert helper. Shifts/copies smart-pointer elements and either reuses the tail (when count < size) or reallocates via FUN_10489ac0. Each copied element does AddRef (*(elem+4)++) and Release (dec refcount at +4, call vtable[1] dtor when 0).* (conf high)
- ƒ refcount stored at object offset +4; AddRef: *(int*)(obj+4)+=1; Release: *(int*)(obj+4)-=1, if ==0 call (*vtable[1])()
- ƒ element stride 4 bytes; size = (end-begin)>>2
- ƒ _wassert on negative refcount at smartptr.h line 0x18c (396)

### SmartPtrVector::MoveBackward `@0x1048a930` — BehaviorTree/smartptr
*Backward move/copy of smart-pointer vector elements with AddRef/Release (used by InsertRange tail path).* (conf high)

### SmartPtrVector::UninitializedCopyForward `@0x10489360` — BehaviorTree/smartptr
*Forward copy of a smart-pointer range with refcount management (uninitialized_copy). AddRef source (+4), Release the slot's prior value, then store.* (conf high)
- ƒ count = (param_2-param_1)>>2; AddRef @+4, Release prior via vtable[1]


## network  (18)

### TdrMeta_BTBlackboard `@0x1046c210` — network/tdr-meta
*TDR meta reg for 'BT BlackBoard' record (size 0x10) then FUN_104716e0 sub-init.* (conf medium)

### TdrMeta_BTBlackboardFact_A `@0x10467d80` — network/tdr-meta
*TDR metadata registration for a 'BT BlackBoard Fact' record (size 0x1c); registers field layout with the TDR reflection system.* (conf medium)

### TdrMeta_BTBlackboardFact_B `@0x10467ea0` — network/tdr-meta
*TDR meta reg for 'BT BlackBoard Fact' (size 0x20) with a conditional default-value setup (0x1c subfield); picks default via FUN_11317f40/11318b60 based on flag.* (conf medium)

### TdrMeta_BTBlackboardFact_C `@0x10468ac0` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x28).* (conf medium)

### TdrMeta_BTBlackboardFact_D `@0x10468b80` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardFact_E `@0x10468c40` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardFact_F `@0x10468d00` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardFact_G `@0x10468dc0` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardFact_H `@0x10468e80` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardFact_I `@0x10468f60` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x2c).* (conf medium)

### TdrMeta_BTBlackboardFact_J `@0x10469020` — network/tdr-meta
*TDR meta reg 'BT BlackBoard Fact' (size 0x20).* (conf medium)

### TdrMeta_BTBlackboardSystem `@0x1046e830` — network/tdr-meta
*TDR meta reg for 'BT BlackBoard System' (size 0xac) containing an embedded 'BT BlackBoard' (size 0x10 @+8) plus three sub-containers (FUN_10472560/104725c0/10472680 at +0x20/+0x2c/+0x50).* (conf medium)

### TdrMeta_BTBlackboard_b `@0x10472500` — network/tdr-meta
*TDR meta reg 'BT BlackBoard' (size 0x10) + FUN_104716e0 (duplicate of 0x1046c210).* (conf medium)

### TdrPrint_EffectSpawnData `@0x102a6fc0` — network/tdr-spawn
*TDR (Tencent data-record) debug/text serializer for an effect-spawn network struct. Emits fields in order: ullEffectID(u64 @0x0), iEffectType(int @0x8), stPos(Vector3 sub-record @0xc), ullOwnerID(u64 @0x18), ullSpawnTime(u64 @0x20), iDurationTime(int @0x28), bSrcType(u8 @0x2c).* (conf high)
- ƒ struct layout: +0x0 ullEffectID, +0x8 iEffectType, +0xc stPos(vec3), +0x18 ullOwnerID, +0x20 ullSpawnTime, +0x28 iDurationTime, +0x2c bSrcType

### TdrPrint_EntitySpawnData `@0x102b1930` — network/tdr-spawn
*TDR text serializer for the generic entity-spawn network struct. Emits: dwNetID(@0x0), szEntityName(str @0x4, 32B), szClassName(str @0x24, 60B), stPose(sub @0x40), iSubTypeID(@0x60), bSync2CE(u8 @0x64), chSpawnType(char @0x65), iBone(@0x66), dwHolder(@0x6a), dwOwner(@0x6e), iFaction(@0x72), iRegionId(@0x76), iDataLen(@0x7a, clamped 0..100), szUsrData[iDataLen](@0x7e), ullEntGUID(u64 @0xe2), szPropertityFile(str @0xea), nMHSpawnType(short @0x12a), szBTState(str @0x12c), stBBVars(vars @~0x136), wBuffSize(u16 @0xb6e, max 0x2800), szBuff[wBuffSize](@0xb70), dwParentID(@0x3370), ullParentGUID(u64 @0x3374).* (conf high)
- ƒ offsets: dwNetID+0x0, szEntityName+0x4, szClassName+0x24, stPose+0x40, iSubTypeID+0x60, bSync2CE+0x64, chSpawnType+0x65, iBone+0x66, dwHolder+0x6a, dwOwner+0x6e, iFaction+0x72, iRegionId+0x76, iDataLen+0x7a, szUsrData+0x7e, ullEntGUID+0xe2, szPropertityFile+0xea, nMHSpawnType+0x12a, szBTState+0x12c, wBuffSize+0xb6e, szBuff+0xb70, dwParentID param_1[0xcdc], ullParentGUID param_1[0xcdd]
- ƒ validation caps: iDataLen<0 -> -6; iDataLen>100 -> -7; wBuffSize>0x2800 (10240) -> -7

### TdrPrint_MonsterPartSpawnData `@0x102ef620` — network/tdr-spawn
*TDR text serializer for a monster body-part spawn struct: llSyncTime(i64 @0x0), dwMonsterID(@0x8), szPartName(str @0xc), szPartBoneName(str @0x3e), szPartTemplate(str @0x5c), dwSpawnFlag(@0x7a), stSpawnPoint(vec3 @0x7e), stSpawnDir(vec3 @0x8a), stSpawnVel(vec3 @0x96), bHide(u8 @0xa2).* (conf high)
- ƒ offsets: llSyncTime+0x0, dwMonsterID+0x8, szPartName+0xc, szPartBoneName+0x3e, szPartTemplate+0x5c, dwSpawnFlag+0x7a, stSpawnPoint+0x7e, stSpawnDir+0x8a, stSpawnVel+0x96, bHide+0xa2

### TdrPrint_MonsterSpawnData `@0x102ee200` — network/tdr-spawn
*TDR text serializer for the full monster-spawn network/persistence struct (~0x42eb bytes, matching CMonsterInfo SpawnRecordStride=0x42eb). Emits: iNetID(@0x0), nSpawnType(short @0x4), iMonsterInfoID(@0x6), ullEntGUID(u64 @0xa), szName(str @0x12, 32B), szClass(str @0x32, 60B), stPose(@0x6e area), iFaction(@0x6e), szBTState(str @0x72), stBBVars(list), bDead(u8 @0xcac), stLcmState(sub @~0xcb0), nAttrCount(short @0xcef, 0..100), astAttrInit[nAttrCount] (per-elem FUN_102850c0), iProjIdCount(@0x1a39, 0..0x14), astProjIds[](FUN_102a4760 @0x1a3d), nBuffSize(short @0x1add, 0..0x2800), szBuff[](@0x1adf), ullParentGUID(u64 @0x42df), iLastChildID(@0x42e7).* (conf high)
- ƒ offsets: iNetID+0x0, nSpawnType+0x4(short), iMonsterInfoID+0x6, ullEntGUID+0xa, szName+0x12, szClass+0x32, iFaction+0x6e, szBTState+0x72, bDead+0xcac, nAttrCount+0xcef(short), astAttrInit+~0xcf1, iProjIdCount+0x1a39, astProjIds+0x1a3d, nBuffSize+0x1add(short), szBuff+0x1adf, ullParentGUID+0x42df, iLastChildID+0x42e7
- ƒ validation caps: nAttrCount<0 -> -6, >100 -> -7; iProjIdCount<0 -> -6, >0x14(20) -> -7; nBuffSize<0 -> -6, >0x2800(10240) -> -7
- ƒ total record stride ~0x42eb bytes

### TdrPrint_TrapSpawnData `@0x102d1ac0` — network/tdr-spawn
*TDR text serializer for a trap-spawn struct: iTrapID(@0x0), chSpawnType(char @0x4), stPose(sub @0x8), stRotation(sub @~0x1c via FUN_102780d0), iBone(@0x21), stOffset(byte-then-float sub @0x25), dwHolder(@0x41), szCEClassName(str @0x45), iParam(@0x6d).* (conf high)
- ƒ offsets: iTrapID+0x0, chSpawnType+0x4, stPose+0x8, stRotation, iBone+0x21, stOffset+0x25, dwHolder+0x41, szCEClassName+0x45, iParam+0x6d


## spawn  (16)

### CBoids::SpawnParticleEffectWithStatus `@0x10b367b0` — spawn-effect
*Spawns 'Particle.SpawnEffect' particle at a bone (default 'Bip01 Spine') on a boid/entity, computing the emitter transform from the entity quaternion (this+0x48..0x54) into a rotation matrix, then scaling by DAT_11de9a28. If the entity has PoisonEffect/BurnEffect, builds a network packet (id 0x2a7) with the transformed position/orientation and sends it via m_pThis_exref.* (conf low)
- ƒ quaternion->matrix from this+0x48(x),0x4c(y),0x50(z),0x54(w); columns scaled *DAT_11de9a28
- ƒ network packet id = 0x2a7; bone name default 'Bip01 Spine' (this+0x58 override)
- ƒ PoisonEffect/BurnEffect gate via FUN_10a675d0 name compare

### CGameRules::GetPlayerSpawnGroup_RMI `@10c05c00` — spawn-group/net
*RMI "GetPlayerSpawnGroup": resolves method type==4, serializes an argument obtained from param_2 script context (vtable+0x150(2) then +0x38 -> entity/spawngroup id via FUN_10a69450), and returns the resulting spawn-group value (local_8).* (conf medium)

### CGameRules::OnSpawnGroupInvalid `@10c05d50` — spawn-group
*Handles invalidation of a spawn group (param_2 = spawnGroupId). Looks the id up in a red-black tree rooted at param_1+0x8d/+0x8e (nodes keyed by [4]=id, [2]/[3]=children), verifies the group still exists in the entity/spawn system (DAT_1202e818+0x50 vtable+0x2c) and passes actor+0x208 gate. Then walks the entity list [param_1+0x22 .. +0x23], and for every entity whose current spawn group (vtable+0x2b0) == param_2, fires the "OnSpawnGroupInvalid" script/RMI event (method type==4) with (entityId, spawnGroupId). Skips entities that share the same +0x208 result when the group is still valid.* (conf medium)
- ƒ RB-tree search: descend right (piVar2[3]) when node key piVar2[4] < param_2 else left (piVar2[2]); match requires !(param_2 < found[4])
- ƒ per-entity dispatch condition: (*(param_1+0x2b0))(entity) == param_2 AND (!bValid OR (*(param_1+0x208))(entityGroup) != (*(param_1+0x208))(param_2))

### CGameRules::RequestSpawnGroup_ClientRMI `@10c05b30` — spawn-group/net
*Client->server RMI. If the RMI dispatcher (obj+0x5c) resolves "RequestSpawnGroup" to type 4, it opens the message on the net channel (obj+0x50 vtable+0x34), serializes one param (FUN_10a69520) and sends (vtable+0x44). Requests that the server assign/activate a spawn group for the caller.* (conf high)

### CGameRules::SetPlayerSpawnGroup_RMI `@10c05b90` — spawn-group/net
*RMI "SetPlayerSpawnGroup" carrying two serialized params (player id + spawn-group id). Same dispatch pattern as RequestSpawnGroup (checks method type==4, serializes param_2 then param_3 via FUN_10a69520).* (conf high)

### CLevelSpawnBatchInfo::GetRecordByIndex `@10e9ad80` — spawn-config
*Paged-array accessor into the CLevelSpawnBatchInfo CInfoManager: given a linear index, returns the config record pointer. Byte-offset form of the standard CInfoManager id lookup.* (conf high)
- ƒ mgr = CLevelSpawnBatchInfo::FindInfoByKey(0,'CLevelSpawnBatchInfo',0)
- ƒ gate: param_1!=-1 AND (param_1!=0 OR mgr[0x30]==0) AND mgr[0x28]!=0
- ƒ idx = param_1 - mgr[0x30]  (mgr+0x30 = minId/base)
- ƒ require 0 <= idx < mgr[0x24]  (mgr+0x24 = count)
- ƒ page = *(mgr[0x20] + (idx / mgr[0x28]) * 4)  (mgr+0x20 = page table, mgr+0x28 = pageSize)
- ƒ return *(page + (idx % mgr[0x28]) * 4)

### CLogicEntity::LoadPropertiesFromScript `@10d8ccc0` — spawn/logic-entity
*Loads a logic/spawn entity's script 'Properties' table into fields: file_propertyFile (string), obj_ModelFile (string), n_LogicEntityType(+9 int), s_SpawnEntityName (string), b_InitTrigger(+0xa bool), vector_triggerBox(+0xb vec3).* (conf high)
- ƒ n_LogicEntityType -> param_1+9 (int)
- ƒ b_InitTrigger -> param_1+0xa (bool)
- ƒ vector_triggerBox -> param_1+0xb (vec3)
- ƒ file_propertyFile / obj_ModelFile / s_SpawnEntityName read as trimmed strings (FUN_1083ab70)

### CMHGameFramework::RegisterScriptBindings `@10d1ee70` — spawn/script-api
*Registers the MHO gameplay Lua/script binding table (via manager obj+0x44 vtable+0x64 with descriptor {handlerThunk FUN_10d3ee40/60/b0/40, self=param_1, name, argSig}). Bindings include the spawn/logic API: SpawnMonster, SpawnCollectPoint, SpawnGameObjItem, SpawnCollectPointUnderEntity, EnableSpawner, Spawner_DoSpawn, Spawner_Reset, plus GetEntityLogicId, GetEntityIDByLogicId, GetLocalPlayer, GetAllPlayers, RegisterBattleGroundEvent, RegisterLogicPlayerEvent, RegisterLogicMonsterEvent, AddGameEventListener, RemoveGameEventListener, DispatchGameEvent, SetGameObjProperty, SetMHScnObjProperty, RemoveLogicEntity, UIShowFallPrompt, PrintLog.* (conf high)
- ƒ binding handlers: SpawnMonster->FUN_10d1fa00(params); SpawnCollectPoint->FUN_10d1fe80(params); SpawnGameObjItem->FUN_10d20680(spawner,ItemCEClass); SpawnCollectPointUnderEntity->FUN_10d20450(spawner,resid); GetEntityLogicId->FUN_10d207f0; GetEntityIDByLogicId->FUN_10d208e0(LogicEntityId); GetLocalPlayer->FUN_10d20bf0; GetAllPlayers->FUN_10d20c50; RegisterBattleGroundEvent->FUN_10d20d40; RegisterLogicPlayerEvent->FUN_10d20d60; RegisterLogicMonsterEvent->FUN_10d20d80; AddGameEventListener->FUN_10d20da0; RemoveGameEventListener->FUN_10d22090; DispatchGameEvent->FUN_10d22230; UIShowFallPrompt->FUN_10d222f0; EnableSpawner->FUN_10d223d0(spawner,enable); Spawner_DoSpawn->FUN_10d224f0(spawner,param); Spawner_Reset->FUN_10d226b0(spawner); SetGameObjProperty->FUN_10d20940(entityId,key,value); SetMHScnObjProperty->FUN_10d20a80; RemoveLogicEntity->FUN_10d20b80(LogicId)

### CSpawnEntityEffectInfo::ReadConfig `@119ddbd0` — spawn-effects
*Reader for a spawn-on-event entity/effect definition. Parses Name(str@+0x14), id(@+0x10), EntityType (matched against a wide-string enum table at DAT_11d6abb8 -> index), DelayTime(float), OffsetX/Y/Z(floats), RotationX/Y/Z(floats), SpawnMode (matched against enum table DAT_11d6ac08 -> index), UseHitDir(bool), and Param0..2 (three string params, key format u"Param%1d"). Assembles the parsed values via FUN_119dd840 and appends a 0x70-byte record to a list at this+0x40.* (conf medium)
- ƒ EntityType: linear string-compare against enum table [DAT_11d6abb8, stride 0x14 wchars] -> matched index (local_4e8)
- ƒ SpawnMode: linear string-compare against table [DAT_11d6ac08] -> index (local_4e4)
- ƒ DelayTime,OffsetY,OffsetZ,RotationX,RotationY,RotationZ read via vtbl+0x34 (double) -> float
- ƒ Param%1d loop: i=0..2, reads Param0/Param1/Param2 strings into a temp [+0x18 stride] then packs 0x70-byte record appended at this+0x40 (stride 0x70)

### CSpawnMonsterGroupInfo::GetRecordByIndex `@10e9b010` — spawn-config
*Paged-array accessor into the CSpawnMonsterGroupInfo CInfoManager (identical structure to 10e9ad80). Returns a spawn-monster-group config record by linear index.* (conf high)
- ƒ mgr = CSpawnMonsterGroupInfo::GetInfoManager(0,'CSpawnMonsterGroupInfo',0)
- ƒ idx = param_1 - mgr[0x30]; require 0<=idx<mgr[0x24]
- ƒ page = *(mgr[0x20] + (idx/mgr[0x28])*4); return *(page + (idx%mgr[0x28])*4)

### CSpawnRegion::SerializeProperties `@10d49870` — spawn-region
*Read/write serialization of a spawn-region/trigger entity's linked-entity GUIDs. When reading (param_3!=0): loads TriggerEntGuid(+0x18), ShapeEntGuid(+0x10), SpawnPointEntGuid(+0x20), LinkedSection(+0x28) and a base guid (DAT_11dbabc0 -> +8). When writing: emits the same GUID pairs plus AffectExtent(+0x30).* (conf medium)
- ƒ fields: baseGuid@+8, ShapeEntGuid@+0x10(+0x14 hi), TriggerEntGuid@+0x18(+0x1c hi), SpawnPointEntGuid@+0x20(+0x24 hi), LinkedSection@+0x28, AffectExtent@+0x30

### FlowNode_MonsterSpawnGroup::GetConfiguration `@10e99a40` — spawn-config
*FlowGraph node config for the main MHO monster-spawn-group node (guard DAT_12039e70). Full spawn-batch authoring surface. Inputs: Enable, Disable, DoSpawn, regionSpawnPoints, AddRegionSpawnPoints, AddSpawnPoint, ClearSpawnPoints, mhoMonsterInfoId_monsterID, defaultMonsterWeight, monsterGroup, monsterList, mhoMonsterInfoId_AddMonster, AddMonsterGroup, AddMonsterList, ClearMonsters, spawnAmountMin, spawnAmountMax, firstSpawnDelay, respawnAmount, respawnDelayMin, respawnDelayMax, scale, StrengthID, StrengthRatio. Output: Spawned. This is the richest spawn-table definition in the chunk.* (conf high)
- ƒ DEFAULT defaultMonsterWeight = 100 (local_c8=100; per-monster spawn weight)
- ƒ DEFAULT spawnAmountMin = 1 (local_38=1)
- ƒ DEFAULT spawnAmountMax = 0xffffffff (-1 = unlimited/unset)
- ƒ DEFAULT respawnAmount = 0xffffffff (-1)
- ƒ DEFAULT StrengthRatio = 0x3f800000 = 1.0f (local_170)
- ƒ DEFAULT firstSpawnDelay/respawnDelayMin/respawnDelayMax/StrengthID = 0
- ƒ mhoMonsterInfoId_monsterID default = 0xffffffff; monsterGroup default = 0xffffffff
- ƒ 'scale' and 'StrengthRatio' registered as float ports (PTR_FUN_11df7694/7689); counts/ids as int/uint ports (PTR_FUN_11df7674/7669)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10
- $ defaultMonsterWeight default 100 (weighting for weighted random monster pick, cf. CSpawnMonsterGroupInfo weighted-pick rule)
- $ StrengthRatio default 1.0 (monster stat scalar); StrengthID selects a strength/difficulty table row

### FlowNode_SpawnGroup3Slot::GetConfiguration `@10ea1fc0` — spawn-config
*FlowGraph node config (guard DAT_1203ab60) for a 3-slot monster spawn group. Inputs: enable, spawnGroupID. Outputs (per slot x3): monsterID, monsterCount, spawnRegionID, delay, respawnAmount, respawnDelay, scale (i.e. monsterID/monsterID2/monsterID3 etc.). Defines up to three distinct monster spawns keyed by a spawnGroupID.* (conf high)
- ƒ three identical field blocks suffixed '', '2', '3'
- ƒ 'scale'/'scale2'/'scale3' output tag = 2 (float); ids/counts/delays tag = 1 (int)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10
- $ monsterCount per slot = number to spawn
- $ delay = first-spawn delay; respawnAmount + respawnDelay = respawn behavior per slot

### ScriptBind::SpawnCollectPointUnderEntity `@10d20450` — spawn/collect-point
*Script handler for SpawnCollectPointUnderEntity(spawner, resid). Resolves the spawner entity (FUN_10d1f790 -> entity system +0x2c), reads its rotation (vtable+0xb4) and position (vtable+0x94), and spawns an 'EffectSpawnedCollectPoint' at that transform via the level-spawn manager (DAT_1202e818+0xd0 -> +0x90 vtable+0x48). Returns the new entity id (itoa'd) or nil.* (conf medium)
- ƒ arg count < 2 -> falls through to cleanup path; else reads resid (arg2) via FUN_10d3f100 into local_b8+0x28
- ƒ spawn call: (...+0x48)("EffectSpawnedCollectPoint", pos&local_10, rot&local_24, resid&local_e4, 0, spawnGroupId)
- ƒ spawnGroupId uVar2 = spawner->GetSpawnGroup (vtable+0x288 then +0x88) else 0xffffffff

### ScriptBind::Spawner_DoSpawn `@10d224f0` — spawn/spawner
*Script handler Spawner_DoSpawn(spawner, param). Resolves the spawner entity, gets its spawner logic component (gamerules +0xd0 -> +0x9c -> vtable+0xc), and calls the correct spawn method based on the component subtype (vtable+4 returns 1/2/3): type1 -> vtable+0x9c(0); type2 -> vtable+0xb4(boolArg); type3 -> vtable+0xc0(boolArg). Then fires the 'Spawned' entity script event and returns the spawn result.* (conf medium)
- ƒ spawner subtype (vtable+4): 1->DoSpawn(vtable+0x9c,0); 2->DoSpawn(vtable+0xb4, arg-bool default 1); 3->DoSpawn(vtable+0xc0, arg-bool default 0)
- ƒ on success dispatches script event 'Spawned' on the spawner entity (vtable+0x110)


## giftbag  (15)

### CGiftBagGroupInfo::GetFieldByIndex_0x2c `@115113f0` — giftbag
*CGiftBagGroupInfo linear-array accessor: index into flat array (base+0x14 .. base+0x18, stride 4), returns record+0x2c. Bounds: 0<=idx<(size>>2).* (conf high)
- ƒ count = (*(mgr+0x18) - *(mgr+0x14)) >> 2; require 0<=idx<count
- ƒ record = *(*(mgr+0x14) + idx*4); return record+0x2c

### CGiftBagGroupInfo::GetFieldByKey_0x2c `@11511390` — giftbag
*CInfoManager keyed accessor for CGiftBagGroupInfo. Maps key param_1 into the 2D bucket table (base+0x20, bucket size base+0x28, key offset base+0x30, count base+0x24) and returns record+0x2c. Returns 0 if not found.* (conf high)
- ƒ idx = key - *(mgr+0x30); require 0<=idx<*(mgr+0x24)
- ƒ bucket = *(*(mgr+0x20) + (idx / *(mgr+0x28))*4); record = *(bucket + (idx % *(mgr+0x28))*4); return record+0x2c

### CGiftBagGroupInfo::GetRecordByIndex `@11511480` — giftbag
*CGiftBagGroupInfo linear accessor returning record pointer at flat index (base+0x14, stride 4).* (conf high)
- ƒ count=(*(mgr+0x18)-*(mgr+0x14))>>2; return *(*(mgr+0x14)+idx*4)

### CGiftBagGroupInfo::GetRecordByKey `@11511430` — giftbag
*Same keyed 2D lookup as 11511390 but returns the record pointer itself (record+(idx%bucket)*4) rather than +0x2c.* (conf high)
- ƒ idx = key - *(mgr+0x30); bucket=*(*(mgr+0x20)+(idx/ *(mgr+0x28))*4); return *(bucket + (idx% *(mgr+0x28))*4)

### GiftBagGroupAllRFTCheckDef::ctor `@1177ed70` — giftbag
*Constructs an empty intrusive list node for a GiftBagGroupAllRFTCheckDef record (self-linking +0x10/+0x14) and registers class name.* (conf medium)

### GiftBagGroupAllRFTCheckDef::ctor_dup `@11780a50` — giftbag
*Duplicate empty-list-node ctor for GiftBagGroupAllRFTCheckDef (second copy, likely different TU/vtable).* (conf medium)

### GiftBagGroupCharLevelCheckRngDef::ctor `@1177eda0` — giftbag
*Empty-list-node ctor for GiftBagGroupCharLevelCheckRngDef (character-level range check def).* (conf medium)

### GiftBagGroupCharLevelCheckRngDef::ctor_dup `@11780a80` — giftbag
*Duplicate empty-list-node ctor for GiftBagGroupCharLevelCheckRngDef.* (conf medium)

### GiftBagGroupDRFTCheckDef::ctor `@1177edd0` — giftbag
*Empty-list-node ctor for GiftBagGroupDRFTCheckDef.* (conf medium)

### GiftBagGroupDRFTCheckDef::ctor_dup `@11780ab0` — giftbag
*Duplicate empty-list-node ctor for GiftBagGroupDRFTCheckDef.* (conf medium)

### GiftBagGroupDef::ctor `@1177ee00` — giftbag
*Empty-list-node ctor for GiftBagGroupDef.* (conf medium)

### GiftBagGroupDef::ctor_dup `@11780ae0` — giftbag
*Duplicate empty-list-node ctor for GiftBagGroupDef.* (conf medium)

### GiftBagGroupHRLevelCheckRngDef::ctor `@1177ee30` — giftbag
*Empty-list-node ctor for GiftBagGroupHRLevelCheckRngDef (hunter-rank level range check def).* (conf medium)

### GiftBagGroupHRLevelCheckRngDef::ctor_dup `@11780b10` — giftbag
*Duplicate empty-list-node ctor for GiftBagGroupHRLevelCheckRngDef.* (conf medium)


## wildhunt  (14)

### CGameContext::GetWildHuntModeId_Cached `@0x104f9760` — wildhunt-mode
*Lazily resolves and caches the interned id for the game mode string "WildHunt". Returns cached value at this+0x20 if non-zero; otherwise walks camera/level manager (DAT_1202e818+0xd0 -> +0x90 -> vfunc 0xb4) and, only if that object's flag at +0x260fc != 0, interns "WildHunt" via FUN_1122b8f0 and caches it at this+0x20.* (conf medium)
- ƒ cache slot: this+0x20 (returns early if != 0)
- ƒ gate: DAT_1202e818+0xd0 != 0 && *(DAT_1202e818+0xd0 +0xd0)!=0 && (mgr->+0x90) != 0; obj=vfunc0xb4(); require *(obj+0x260fc)!=0
- ƒ id = FUN_1122b8f0("WildHunt") (string intern/hash)

### CMHLevelInfo::CheckWildHuntPhaseRewardWindow `@115312e0` — wildhunt
*Given a level key (param_2), walks an internal red-black tree (root at param_1+0x60, node at +100) to locate an entry, then looks up CMHLevelInfo by key. From the level record it reads a sub-info (FUN_11531c90 on level+0x38) and a reward record (CLevelRewardInfo::GetRewardByLevelIndex on level+0x10). Validates a percentage reward-availability, then compares the current "WildHuntPhase" config value against the player's phase and checks the current game time falls in [record+0x113, record+0x117). Client gate for WildHunt-phase reward display/eligibility.* (conf low)
- ƒ reward gate: 0 < (*(reward+0x34) * *(subInfo+0x30)) / 100   (integer percentage)
- ƒ require *(subInfo+0x30) > 0
- ƒ phase gate: FUN_1025b060() == local_28 where local_28 = config value 'WildHuntPhase'
- ƒ time window: *(rec+0x113) <= gameTime(vtbl+0x38) < *(rec+0x117)

### CWildHunt::GetManager `@11741100` — wildhunt
*Lazy accessor for 'WildHunt' CInfoManager (DAT_12390984).* (conf high)

### CWildHuntConst::GetManager `@11741130` — wildhunt
*Lazy accessor for 'WildHuntConst' CInfoManager (DAT_1239098c).* (conf high)

### CWildHuntSpawnGroupInfo::ReadConfig `@11a21e50` — wildhunt
*Reader for a WildHunt spawn-group record holding up to three monster spawn slots. Parses groupId(@+0x10), then three identical blocks: slot1 monsterId(@+0x14)/monsterCount(@+0x18)/regionId(@+0x1c)/delay(@+0x20)/respawnAmount(@+0x24)/respawnDelay(@+0x28)/scale(float@+0x2c); slot2 (@+0x30..+0x48, scale float@+0x48); slot3 (@+0x4c..+0x64, scale float@+0x64=100).* (conf high)
- ƒ groupId@+0x10
- ƒ slot1: monsterId@+0x14, count@+0x18, regionId@+0x1c, delay@+0x20, respawnAmount@+0x24, respawnDelay@+0x28, scale(float)@+0x2c
- ƒ slot2: monsterId@+0x30, count@+0x34, regionId@+0x38, delay@+0x3c, respawnAmount@+0x40, respawnDelay@+0x44, scale(float)@+0x48
- ƒ slot3: monsterId@+0x4c, count@+0x50, regionId@+0x54, delay@+0x58, respawnAmount@+0x5c, respawnDelay@+0x60, scale(float)@+0x64

### CWildHuntTaskRatioInfo::GetRecordByIndex `@11807a20` — wildhunt
*Linear-array accessor for CWildHuntTaskRatioInfo (WildHunt task probability/ratio table). Returns record pointer at flat index.* (conf high)
- ƒ count=(*(mgr+0x18)-*(mgr+0x14))>>2; return *(*(mgr+0x14)+idx*4)

### SingletonNameSvr_CCliWildHuntMgr::ctor `@112df200` — wildhunt
*Constructs the singleton-name holder for class CCliWildHuntMgr (client WildHunt manager). Sets vtable PTR_FUN_11d1f1f4 and registers name string.* (conf high)

### SingletonNameSvr_CCliWildHuntMgr::destroy `@112df2f0` — wildhunt
*Tears down the CCliWildHuntMgr singleton (DAT_12040ac0): calls vtable+0 destructor, frees, unregisters singleton name.* (conf high)

### SingletonNameSvr_CCliWildHuntMgr::registerName `@112df5f0` — wildhunt
*Registers CCliWildHuntMgr singleton name mapping (no static store).* (conf high)

### SingletonNameSvr_CCliWildHuntMgr::setInstance `@112df5d0` — wildhunt
*Stores CCliWildHuntMgr instance pointer into DAT_12040ac0 and registers it under its singleton name.* (conf high)

### SingletonNameSvr_CWildHuntMgr::ctor `@115a28f0` — wildhunt
*Constructs singleton-name holder for server-side class CWildHuntMgr (vtable PTR_FUN_11d2f984).* (conf high)

### SingletonNameSvr_CWildHuntMgr::registerName `@115a2d80` — wildhunt
*Registers CWildHuntMgr singleton name mapping.* (conf high)

### SingletonNameSvr_CWildHuntMgr::setInstance `@115a2d30` — wildhunt
*Stores CWildHuntMgr instance into DAT_122df384 and registers singleton name.* (conf high)


## behavior  (12)

### AISystem::PreloadEntityBehaviorTreeFiles `@0x10aacc30` — behavior-tree-loading
*Given an entity class/archetype, walks its script definition for 'AISetting' nodes and preloads the referenced behavior-tree assets: sBTFolder (base path, prefixed '/Scripts/AI/BehaviorTree/'), sBlackBoardFile, sEventBT, and per-child 'BehaviorTree'/'ClientBehaviorTree' collections' sFilename entries. Loads via the BT loader at param_2+8.* (conf medium)
- ƒ node name selector: param_3 low byte -> 'ClientBehaviorTree' if !=0 else 'BehaviorTree'
- ƒ base folder literal '/Scripts/AI/BehaviorTree/' set on loader (vfunc 0x1c)
- ƒ keys: sBTFolder, sBlackBoardFile (vfunc 0x18 load), sEventBT (AISystem::LoadEntityBehaviorTree_Recursive), sFilename (vfunc 4, flag 1)

### AISystem::ScanArchetypesAndPreloadBTs `@0x10aad5c0` — behavior-tree-loading
*Scans /Libs/EntityArchetypes/*.xml (findfirst/next), parses each EntityPrototypeLibrary/EntityPrototype/Properties, and for prototypes declaring a BTFolder preloads their behavior-tree files: file_BlackBoardFile, file_BTEventFileName, file_BTFileName1..3, resolving them under 'Scripts/AI/BehaviorTree/<BTFolder>'.* (conf medium)
- ƒ glob: <gameRoot>/Libs/EntityArchetypes/*.xml
- ƒ BT path = 'Scripts/AI/BehaviorTree/' + BTFolder (FUN_104977f0 join)
- ƒ keys: BTFolder, file_BlackBoardFile (loader vfunc 0x18), file_BTEventFileName (vfunc 4,1), file_BTFileName1/2/3 (vfunc 4,1)
- ƒ param_2 flag chooses per-archetype id path (DAT_11df7390 auto-increment id) vs caller-provided loader (param_1)

### CBTActor::Create_WithIdPtr `@0x10a6b810` — behavior-tree-actor
*Allocates a CBTActor (0x2f0 bytes via FUN_100dde50), registers its IdPtrNameSvr handle, then constructs it (FUN_10257270) from param_2/param_3 plus a refcounted arg (*param_4).* (conf medium)
- ƒ sizeof(CBTActor) = 0x2f0
- ƒ arg refcount: (*param_4)+4 incremented before FUN_10257270(*param_2,*param_3,arg)

### CBTActor::Create_WithIdPtr_dup `@0x10aae120` — behavior-tree-actor
*Identical to FUN_10a6b810 — allocate CBTActor (0x2f0), register IdPtrNameSvr, construct via FUN_10257270.* (conf high)
- ƒ sizeof=0x2f0; type=DAT_12020970; ctor=FUN_10257270

### CBTActor::InstantiateBehaviorTreeForEntity `@0x10aa66e0` — behavior-tree-runtime
*Instantiates the behavior tree (or BT control object) for an entity. Looks up an existing BT record by the entity's BT name (vfunc 0x50); if none, resolves the entity class's script and checks whether it derives from 'BehaviorTreeBase' or 'BTCtrlObject', then creates the appropriate BT instance (FUN_11317f30 -> vfunc 0xc0, or FUN_10b24e30). If a record exists, bumps instance counter (this+0x1c) and starts/attaches the tree via FUN_10db7340 keyed by (this+0x1b + this+0x1c).* (conf medium)
- ƒ early-out: FUN_11318380() true -> return 1
- ƒ class-kind branch: script class 'BehaviorTreeBase' -> tree; 'BTCtrlObject' -> control object
- ƒ instance id = this+0x1b (base) + ++this+0x1c (per-instance counter); this+0x1a low byte = flags; this+0x18 = BT context
- ƒ return 2 on successful (re)instantiate, 1 otherwise

### CBTLevelActor::Create_WithIdPtr `@0x10a6b950` — behavior-tree-actor
*Allocates a CBTLevelActor (800=0x320 bytes), registers IdPtrNameSvr handle (type DAT_12020964), constructs via FUN_10263ac0.* (conf medium)
- ƒ sizeof(CBTLevelActor) = 800 (0x320)
- ƒ ctor = FUN_10263ac0(*param_2,*param_3,arg)

### CBTLevelActor::InitFromEntityProperties `@0x10a63840` — behavior-tree-actor
*Behavior-tree actor init from an entity's script 'Properties' table. If bHaveBehaviorTree is true, marks this+0xc4=1, reads bLevelActor, obtains the AI/level-actor manager (DAT_1202e818+0xd0), pulls the actor's group/context (manager+0x1d) and registers a CBTActor via FUN_10a685d0/FUN_10a68570. Branches on entity state this+0x155c (1 vs 8) to pick a spawn context; state 8 uses "CatInCity" when the level manager reports in-city (vfuncs 0x16c/0x164).* (conf medium)
- ƒ gate: Properties table present AND bHaveBehaviorTree(local_10)!=0
- ƒ sets this+0xc4 = 1 (has-BT flag); reads bLevelActor -> local_5
- ƒ context id local_10 = *(levelMgr + 0x1d*4 = +0x74)
- ƒ state switch: this+0x155c == 1 -> FUN_10a60b80 path; == 8 -> in-city test; else default
- ƒ if levelMgr in-city (vfunc 0x16c \|\| 0x164) -> FUN_100e0410("CatInCity") else FUN_100e0410(*(levelActor[0x7b4]+0x94))
- ƒ if DAT_1202e818+0x209 == 0 (non-editor?) and !bLevelActor: FUN_10a685d0(...,1) and if resulting node's +8 child count *( *(ret+8)+0x28) > 0 set this+0x157d = 1

### CEntityCustomRoot::LoadAIAndModelSettings `@10d15c60` — behavior-tree/asset
*Parses an 'EntityCustomRoot' script definition and loads: sfileModel (model), HitPartSetting.sHitPartInfo (hit-part/hitbox info), and AISetting -> sBlackBoardFile + sBTFolder, resolving behavior-tree file paths under '/Scripts/AI/BehaviorTree/' (folder + '/' + file). Iterates ClientBehaviorTree array loading each sFileName under the same folder, and loads sEventBT under '/Scripts/AI/EventBT/'.* (conf high)
- ƒ BT path = '/Scripts/AI/BehaviorTree/' (len 0x19) + sBTFolder + '/' + sBlackBoardFile-or-sFileName
- ƒ EventBT path = '/Scripts/AI/EventBT/' (len 0x14) + sEventBT

### CProximityTrigger::FireBTEnterEvent `@10d604a0` — behavior-tree/trigger
*On an entity entering a proximity trigger, writes 'EnterEntityID'=param_2 into the trigger's BehaviorTreeBase blackboard (vtable+0x70) and fires the 'EnterEntity' BT event (descriptor {0x124, 0x4ffff, ownerId=obj+8, type 2}).* (conf medium)

### CProximityTrigger::FireBTLeaveEvent `@10d60510` — behavior-tree/trigger
*On an entity leaving a proximity trigger, writes 'LeaveEntityID'=param_2 into BehaviorTreeBase blackboard and fires the 'LeaveEntity' BT event (descriptor {0x124, 0x4ffff, ownerId=obj+8, type 2}).* (conf medium)

### CTrigger::NotifyBTNewComer_Single `@10c5e3d0` — behavior-tree/trigger
*Single-entity variant of the NewCome notifier. If param_3 (leaving flag) is 0 it just calls vtable+0x7c(param_2) (untrack/remove). Otherwise, if the entity is not yet tracked (vtable+0x68 == -1), writes "NewComerID"=param_2 into the BehaviorTreeBase blackboard and fires the "NewCome" BT event with the same descriptor {0x124, 0x4ffff, obj[2], type 2}.* (conf medium)

### CTrigger::NotifyBTNewComers_All `@10c5dcb0` — behavior-tree/trigger
*Iterates all players (monster/player manager DAT_1202e818+0xd0 -> +0x90 iterator). For each entity not already inside this trigger's set (obj vtable+0x68 returns -1 == not present) whose faction/team (vtable+0x88) matches obj+8, and that resolves to a live entity, it writes the newcomer's id into the trigger's BehaviorTreeBase blackboard key "NewComerID" (vtable+0x70) and fires the "NewCome" BT event (event descriptor: 0x124, 0x4ffff, type 2, name "NewCome", payload = obj+2 id) via vtable+0x24.* (conf medium)
- ƒ event descriptor struct: {0x124, 0x4ffff, payloadPtr->obj[2], 0(flags), name="NewCome", type=2}
- ƒ membership test: (*(obj+0x68))(entityId) != -1 means already tracked


## flowgraph  (8)

### FlowNode_DoSpawn_A::GetConfiguration `@10e97da0` — flowgraph-spawn
*FlowGraph node config (guard DAT_1203a2f0): single input 'DoSpawn', single output 'Spawned'. Minimal spawn-trigger node.* (conf high)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10
- ƒ Spawned output data-type tag = 1

### FlowNode_DoSpawn_B::GetConfiguration `@10e989c0` — flowgraph-spawn
*FlowGraph node config (guard DAT_1203a088): input 'DoSpawn', output 'Spawned'.* (conf high)
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10

### FlowNode_DoSpawn_C::GetConfiguration `@10e98ed0` — flowgraph-spawn
*FlowGraph node config (guard DAT_1203a420): input 'DoSpawn', output 'Spawned'.* (conf high)
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10

### FlowNode_DoSpawn_D::GetConfiguration `@10e994c0` — flowgraph-spawn
*FlowGraph node config (guard DAT_12039f88): input 'DoSpawn', output 'Spawned'.* (conf high)
- ƒ param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10

### FlowNode_LogicEntitySpawnEventFilter::GetConfiguration `@10e741a0` — flowgraph-spawn
*FlowGraph node config (guard DAT_120383e0). Same as FlowNode_SpawnEventFilter but adds an extra input 'logicEntityNetID'. Inputs: enable, disable, triggerOnce, logicEntityNetID, isSpawnerEntityID, isCollectPointNetID, isPet, isItemID, isBuffID; outputs: OnEvent, spawnerEntityID, collectPointNetID, playerNetID, petNetID, itemID, buffID.* (conf high)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10
- ƒ OnEvent output tag =1; spawnerEntityID tag =3

### FlowNode_MonsterSupplier::GetConfiguration `@10e9e840` — flowgraph-spawn
*FlowGraph node config (guard DAT_1203a688) for a monster 'supply' spawner. Inputs: Enable, Disable, Faction, SpawnSupply; outputs: Supplier, 'Monster ID', OnEmpty. Spawns/supplies monsters of a faction and signals when the supply is exhausted.* (conf high)
- ƒ OnEmpty output data-type tag = 6 (event/any); Supplier tag = 1; 'Monster ID' tag = 1
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff02f) \| 0x20 (note 0x20 category, different from the 0x10 nodes)

### FlowNode_SpawnEntityByArchetype::GetConfiguration `@10eb7360` — flowgraph-spawn
*FlowGraph node config (guard DAT_1203c0a8): input 'archeType' (entity archetype string-list port); outputs Success, SpawnEntityID, Failed. Spawns a single entity from an archetype and reports its entity id or failure.* (conf high)
- ƒ Success/Failed output tag = 6 (event); SpawnEntityID tag = 3 (entityId)
- ƒ archeType input uses string-list port descriptor (DAT_1201fc98 + type 0x11df76e9)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x11

### FlowNode_SpawnEventFilter::GetConfiguration `@10e5a420` — flowgraph-spawn
*CryEngine FlowGraph node config registrar (one-time init guarded by DAT_120376f8 bits 1/2). Declares inputs: enable, disable, triggerOnce, isSpawnerEntityID, isCollectPointNetID, isPet, isItemID, isBuffID; outputs: OnEvent, spawnerEntityID, collectPointNetID, playerNetID, petNetID, itemID, buffID. A generic spawn/collect/pet/item/buff event filter node routing entity/net IDs.* (conf high)
- ƒ port descriptor type tags via PTR_FUN_11df76xx registrars (bool/int/entityId variants)
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10 (node category/flags word)
- ƒ output port 'spawnerEntityID' data-type tag uRam...=3 (entityId), others =1 (int)


## player  (7)

### CCliGameContext::SpawnLocalTempPlayer `@112a9d80` — player-spawn
*Client-side spawn of the local (temporary) player actor. Grabs a global source struct (FUN_1128e460), logs "[SpawnLocalPlayer] SpawnLocalTempPlayer!", resolves or creates the local player entity via an entity-system vtable (create call passes (entityId@+0xc, srcId@+4, 1, 0)), clears a byte flag at player+9, calls vtable+0x29c(src) to init, and if vtable+0x280() returns true refreshes the WildHunt/entity mgr. Copies a large source blob (0x8498e bytes) into param_1+0x14 when a mgr flag (vtable+0x6c) is set.* (conf medium)
- ƒ memcpy(param_1+0x14, src, 0x8498e) only when (*mgr)+0x6c vcall != 0
- ƒ player entity created via entitySys->vtbl+0x10(id@param_1+0xc, srcId@src+4, 1, 0) if lookup vtbl+0x14 returns null
- ƒ byte at (player+9)=0 before vtbl+0x29c(src) init

### CParticleEmitterList::SpawnEffectAtIndex `@10f9ace0` — player-fx
*Client FX: bounds-checks an index into a particle-entry array (0x80-byte stride, count = (arr_end - arr_begin)>>7), and if entry[0] > threshold DAT_11de9890 spawns the entry's particle on its bone and recurses into child effects (FUN_10f9ac10). Otherwise cleans up (FUN_10f9ab90). Stores current index at param_1[0x84].* (conf medium)
- ƒ count = ((int)param_1[0x82] - (int)param_1[0x81]) >> 7  (0x80-byte entries)
- ƒ entry = index*0x80 + param_1[0x81]
- ƒ prev entry (if index>0) = entry - 0x20 dwords (0x80 bytes)
- ƒ spawn condition: *entry (float) > DAT_11de9890 (small epsilon)
- ƒ attach: (entry[3]=id, entry[4]=bone, entry+5=vec, &pos(entry[8..10]), 1.0f,0,1,1,0,0)
- ƒ param_1[0x84] = index (last-processed marker)

### CParticleEmitterList::SpawnEffectShared `@10f9b480` — player-fx
*Client FX variant of 10f9ace0 using different struct offsets (array at +500/+0x1f8, 0x80 stride). Spawns the indexed particle entry on its bone, recurses children, and if the entry's tag string (at entry+0x7c) differs from empty-sentinel releases it. Mentions 'mh_sharemem_addrinfo' (shared-memory addr info). Stores index at +0x210.* (conf low)
- ƒ count = (*(param_1+0x1f8) - *(param_1+500)) >> 7
- ƒ entry = index*0x80 + *(param_1+500)
- ƒ attach: (*(entry+0xc)=id, *(entry+0x10)=bone, entry+0x14=vec, &pos(entry+0x20..0x28), 1.0f,0,1,1,0,0)
- ƒ string compare entry+0x7c vs &DAT_11d9d32b (empty) to decide refcount release
- ƒ *(param_1+0x210) = index

### CParticleEmitterList::SpawnEffectsForEntry `@10f9ac10` — player-fx
*Client FX: iterates an effect-entry array (0x30-dword/0xc0-byte stride) attached to a spawn record and, for each entry passing the 'Particle.SpawnEffect' gate, attaches the particle to a bone via character vtbl+0x1e8 with scale 1.0f.* (conf medium)
- ƒ iterate puVar2 from *(param_3+0x3c) to *(param_3+0x40), stride 0xc dwords (0x30 bytes? actually +0xc ints=48 bytes)
- ƒ per entry: local pos = puVar3[-2..0]; attach (id, boneName puVar3[-6], &vec puVar3[-5], &pos, 1.0f,0,1,1,0,0)
- ƒ guard: DAT_1202e818 and its +0xa0 subsystem non-null

### CPlayer::SpawnParticleEffect `@10ec8f70` — player-fx
*Client visual: profiles scope 'CPlayer::SpawnParticleEffect', builds a particle descriptor (scale 1.0f) and queues it. Player-side FX twin of 10da0520.* (conf high)
- ƒ scale=0x3f800000(1.0f); FUN_10b01ff0(local_34,pos,dir,1.0f,0,0) -> FUN_10a7b9f0(1,desc)

### CPlayer::SpawnParticleEffect_dup `@10f10670` — player-fx
*Byte-identical duplicate of CPlayer::SpawnParticleEffect (10ec8f70). Client FX.* (conf high)
- ƒ scale=1.0f particle descriptor

### CPlayer::SpawnPerfectDodgeEffect `@10efa380` — player-fx
*Reads InfoRecord 'perfectDodgeGeometry'->'effect' particle name and spawns it attached to the player's 'Bip01 Spine' bone (via character-instance vtbl+0x1e8) when the profiler gate passes. Client dodge feedback FX.* (conf high)
- ƒ attach transform: pos/rot zeroed, scale field local_18=0x3f800000(1.0f)
- ƒ attach call args: (effect,'Bip01 Spine',&pos,&rot,1.0f,0,1,1,0,0)
- ƒ gate via 'Particle.SpawnEffect' profiler scope


## level  (7)

### CLevelSpawnBatchInfo::GetManager `@116fc320` — level-spawn
*Lazy accessor returning the CInfoManager singleton for 'LevelSpawnBatchInfo' (registers name once via DAT_1238eb5c flag, returns DAT_1238eb58).* (conf high)

### CLevelSpawnBatchInfo::ReadConfig `@116fcc00` — level-spawn
*Reader for a LevelSpawnBatchInfo record: parses id (first attr@*param_1) and SpawnGroupID (@param_1[1]). Links a level/batch to a spawn group id.* (conf high)
- ƒ *param_1 = id (attr reader vtbl+0x20)
- ƒ param_1[1] = SpawnGroupID

### CMHLevel::ParseLevelEntities `@11711230` — level-spawn
*Iterates all 'Entity' nodes of a level XML and dispatches by EntityClass to build level runtime objects. Handles: MHMonsterSpawnPoint (FUN_118a3500 -> spawn-point list at this+0xc0), ProximityTrigger (FUN_118a2e90 -> this+0x48), EnterInstance (FUN_118a33d0 -> this+0x78), SwitchRegionTrigger (FUN_118a3270 -> this+0x60), MHPlayerSpawnPoint (FUN_118a3020, branches on type/mode fields local_68==3 / local_70==0), LogicPoint (FUN_118a3710), MHPathPoint (FUN_118a3b90 -> waypoints), WayPointList (FUN_118a3820).* (conf medium)
- ƒ spawn-point dedup: if new point's key FUN_1170ba20 == this+0xc0 (list head) then insert
- ƒ MHPlayerSpawnPoint: local_68==3 -> FUN_117118e0 path; else local_70==0 -> FUN_11711850; else FUN_11711820

### CMHLevelSpawnConfig::ParseLevelXml `@1189c230` — level-spawn
*Top-level parser for a level's spawn/config XML. Validates LevelID matches *(this)+0x10, then iterates: MonsterSpawnGroups (each -> FUN_1189ca40 builds a spawn-group entry, appended via FUN_1189dab0), Entities (each -> FlowgraphEnable + FUN_1189d780 into this+6 list, filtered by FUN_1189c080), ConfigSets (each -> FUN_1189c520 building a config-set list keyed by id), and resolves DefaultConfigSet id to a pointer stored at this[3].* (conf medium)
- ƒ gate: LevelID (FUN_100f6ef0 'LevelID') must equal *(*this + 0x10)
- ƒ DefaultConfigSet: walk config-set list (this[1]..) find node where node[2]==id; this[3]=node(+2) or 0

### CSpawnInfoEntry::ReadConfig `@11958c30` — level-spawn
*Reader for a single SpawnInfo spawn entry. Parses id(@+0x10), MonsterID(@+0x14), MonsterGroupID(@+0x18), SpawnAmount(@+0x1c), RegionId(@+0x20), Delay(@+0x24), RespawnAmount(@+0x28), RespawnDelay(@+0x2c), Scale(float@+0x30), BuffID(@+0x34).* (conf high)
- ƒ MonsterID@+0x14, MonsterGroupID@+0x18, SpawnAmount@+0x1c, RegionId@+0x20
- ƒ Delay@+0x24, RespawnAmount@+0x28, RespawnDelay@+0x2c
- ƒ Scale->float@+0x30, BuffID@+0x34

### CSpawnObjectiveInfo::ReadConfig `@11958350` — level-spawn
*Reader for a SpawnInfo/spawn-objective record. Parses id(@+0x10), Logic (enum clamped to 0/1/2 @+0x14), TimeLimit(@+0x18), MessageID(@+0x1c), SpawnIDs (id list @+0x20 via FUN_1162bea0), then two target-monster conditions: TargetMonsterID1(@+0x2c)/TargetCount1(@+0x30)/TargetMsgID1(@+0x34) and TargetMonsterID2(@+0x38)/TargetCount2(@+0x3c)/TargMsgID2(@+0x40).* (conf high)
- ƒ Logic enum: value must be 0,1,2 -> stored @+0x14 (else left unset)
- ƒ TimeLimit@+0x18, MessageID@+0x1c
- ƒ SpawnIDs: string parsed into int list @+0x20
- ƒ Target1: monsterId@+0x2c, count@+0x30, msgId@+0x34
- ƒ Target2: monsterId@+0x38, count@+0x3c, msgId@+0x40

### SpawnInfo::GetTypeDescriptor `@11957970` — level-spawn
*One-time init of the 'SpawnInfo' type descriptor (DAT_123a05b8 block): type id 0x10f, count 1. Returns descriptor pointer.* (conf medium)
- ƒ _DAT_123a05b8 = 0x10f (type id); _DAT_123a05c0 = 1


## bt  (4)

### IdPtrNameSvr_CBTActor::GetIdPtrBaseName_Init `@0x10a68450` — bt-actor-plumbing
*Initializes an IdPtr-name-server handle triplet {hash, typeId(DAT_12020970), object} for a CBTActor and back-links the object header (+8/+0xc/+0x10). CryEngine named-smart-pointer registration.* (conf high)
- ƒ param_1[0]=hash(FUN_100bcc20), param_1[1]=DAT_12020970 (CBTActor type id), param_1[2]=object
- ƒ object header backlink: obj+8=hash, obj+0xc=typeId, obj+0x10=obj

### IdPtrNameSvr_CBTActor::RegisterType `@0x10a6c630` — bt-actor-plumbing
*Registers the IdPtrNameSvr type descriptor for CBTActor (vtable PTR_FUN_11cbefa0) via FUN_100d6da0.* (conf high)

### IdPtrNameSvr_CBTLevelActor::GetIdPtrBaseName_Init `@0x10a68510` — bt-actor-plumbing
*Same as FUN_10a68450 but for CBTLevelActor (type id DAT_12020964).* (conf high)
- ƒ param_1[1]=DAT_12020964 (CBTLevelActor type id)

### IdPtrNameSvr_CBTLevelActor::RegisterType `@0x10a6c690` — bt-actor-plumbing
*Registers the IdPtrNameSvr type descriptor for CBTLevelActor (vtable PTR_FUN_11cbef80).* (conf high)


## weapon  (3)

### CShotgun::ShootBurst `@10d72ff0` — weapon-fire
*Multi-pellet weapon fire (CommonShoot/ChargeShoot). Iterates the pending-shot list (weapon param+0x44..+0x48, 0xa8-byte stride), for each computes the muzzle CST particle orientation (euler -pi/4) using 'Fire_Ability_Pc.CST.WN_MultipleCST' or '...MultipleChargeCST', spawns via CSingle::Shoot_10d73980, and after all pellets (when local_20==1 single-pellet mode) applies a camera-shake/recoil profile selected from three parameter blocks at DAT_1202e818+0x7c (+0x494 / +0x4b0 / +0x4cc) based on charge level (0/1/2).* (conf low)
- ƒ pellet count local_20: 2 if secondary-fire flag (vtable+0x494), else 1 or 3 depending on vtable+0x7f0
- ƒ muzzle rotation quaternion from euler (-0.7853982,0,0)=(-pi/4)
- ƒ recoil param block by charge: 0->+0x494, 1->+0x4b0, 2->+0x4cc (7 dwords each) at *(DAT_1202e818+0x7c)

### CSingle::Shoot `@10c63300` — weapon-fire
*Fires one shot of a single-fire weapon. Reads/updates fire timing and ammo, computes muzzle pos/dir (vtable+0x18c/+0x188), optionally draws aim debug ('g_aimdebug', 'CSingle::Shoot'), spawns the projectile (server path vtable+0x1fc when not dedicated-server flag @DAT_1202e818+0x209, else spawn-only +0x158), sets projectile owner/params, plays muzzle-flash CST particles ('Fire_Ability_Pc.CST.WN_MultipleCST' / '...MultipleChargeCST' selected by param_6 0/1), applies recoil, decrements ammo and advances the fire counter, and enqueues hit/notification RMIs.* (conf medium)
- ƒ debug predicted pos: base + velocity*DAT_11de9a30 (DAT_11de9a30 = frametime/time-step)
- ƒ burst gating: fire only when (shotIndex==currentFrame) OR (shotIndex % fireRate@+0xb4 ==0); fireRate forced to 1 if DAT_120286b8+0x360/+0x364 set
- ƒ ammo consumed: iVar9 = shotIndex (-1 if DAT_120286b8+0x3e0==0); with spread mult @weapon+0x62+0x80: iVar9 -= (rand*mult)>>32, clamp>=0
- ƒ muzzle-flash CST rotation quaternion seeded from euler (-0.7853982, 0, 0) (= -pi/4)
- ƒ fire-count: param_1[9]++ resets to 0 at *(weapon+0x62+0x1c) (magazine size)
- ƒ cooldown timers: param_1[7]=nextTime=curTime+rate@[6]; param_1[0x47]=param_1[7]+0.5 (DAT_11de98e8)
- $ ammo decrement per shot via vtable+0x160(local_18, iVar9)

### CVehicleWeapon::ShootBurstWithEffect `@10d8d3a0` — weapon-fire
*Iterates a pending-shot list (param_2+0x44..+0x48, 0xa8 stride) and for each: spawns the projectile via CSingle::Shoot_10d73980, sets its lifetime (vtable+0xd0 from weapon-system +0xac), optionally emits a camera/screen effect block (if *(param_2+4)) and a 'Particle.SpawnEffect' muzzle effect oriented by euler angles at param_2+0x2c/+0x30/+0x34 (deg->rad via DAT_11de98c0). Uses libm_sse2_sqrt_precise for the aim-cone basis.* (conf low)
- ƒ euler radians = deg * DAT_11de98c0 (pi/180) * DAT_11de98e8 (0.5, half-angle)
- ƒ effect direction basis built from FSSE sqrt normalization with epsilon DAT_11de98e0


## battleground  (3)

### CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer `@1129ddf0` — battleground-client
*CLIENT battleground manager: on the local-player spawn event, connects to the Battle Server (IP@+0x849a8, uin@+0x84da8), sends a verify/handshake message, then busy-waits (Sleep(10) loop) for the server to acknowledge player init; periodically re-requests init; on success initializes the local player entity and applies spawn transform. On failure returns to town.* (conf high)
- ƒ connect: (BS vtbl+0x14)(ip@+0x849a8, uin@+0x84da8, key, 3, 100, emptyStr) -> result code
- ƒ verify msg header id = 0x0d; payload copies 8 dwords of session key from *(param_1+0x84db4)
- ƒ timeout g_ConnBattleSvrTimeOut default 60000 ms (CVar, +0x30 getter)
- ƒ wait loop: Sleep(10); elapsed += 10; seconds = elapsed/1000; log each whole second; after >1000ms and second%0x1e(30)==0 -> resend 'Recv Client Request Player Init Msg!!' (retry #++)
- ƒ keepalive/reconnect when timeout exceeded (elapsed-timeout); loop until *(param_1+0x84db8)!=0
- ƒ on init: *(param_1+0x18)+=1000; *(param_1+0x24)+=1000 (spawn coordinate/id offsets); state 0x84db8: 1=ready, 2=CloseByTown
- $ g_ConnBattleSvrTimeOut = 60000 ms connect timeout
- $ player-init retry cadence: every 30 s after first 1 s

### CCliBattleGroundMgr::OnRecvPlayerInitMsg `@1129fae0` — battleground-client
*CLIENT handler for the 'Player Init Msg' received from the network sink (completes the spawn handshake started by 1129ddf0). Parses the message, creates/looks up the local player entity, copies the full player-state blob into the manager, and initializes rank/hunt-count UI and combat state. Sets ready flags (+0x109784=1, +0x84db8=1).* (conf medium)
- ƒ guard: FUN_1128e050() (valid msg) && *(param_1+0x109784)=='\0' (not already spawned)
- ƒ memcpy player-state blob: memcpy(param_1+0x14, msg, 0x8498e) when host is the server-authority (+0x6c getter)
- ƒ reads hunt rank/count via CPlayer::GetHuntRankOrCount for UI (FUN_11398580 rank frame)
- ƒ special-hit / difficulty field at msg+0x5e483 (flag) and msg+0x5f697 (added to +0x48c counter)
- ƒ sets flags: *(param_1+0x109784)=1 (spawned), *(param_1+0x84db8)=1 (init ready)

### IBattleGroundSpawnConfig::SpawnLog `@115c8990` — battleground-spawn
*Logging helper for battleground spawn config. Emits a formatted log line (level 7) tagged 'IBattleGroundSpawnConfig::SpawnLog' from BattleGroundSpawnConfig.cpp:0x1d with varargs from stack.* (conf high)


## activity  (2)

### WildHunt::BuildActivityViewData `@0x104f7900` — activity/wildhunt
*Populates a client view struct 'mh.view.WildHunt.Data.WildHunt_ActivityData' from the WildHunt activity manager. Copies ActivityId, SignUp/Hunt/Award begin/end times, HuntSoul fields, guild/camp sign+award flags, and a PersonAwardDatas list ('WildHunt_AwardData': NeedSoul/ItemId/ItemCount parsed with atoi from ';'/',' delimited strings).* (conf medium)
- $ WildHunt award rows: NeedSoul (soul cost), ItemId, ItemCount

### WildHunt::BuildTaskSummaryViewData `@0x104f8c00` — activity/wildhunt
*Populates client view 'mh.view.WildHunt.Data.WildHunt_TaskSummaryData' + per-task 'WildHunt_TaskData'. Fills refresh-count budgets and costs, submit-task counts, per-task HuntSoulBase/HuntSoulScale, IsAccept/IsComplete, and TaskTargets (QuestTrackVo: nTargetID1..5, strTarget1..5, nOpType/nCurCount/nMaxCount).* (conf medium)
- ƒ FreeRefreshCount = max(0, MaxFreeRefreshCount - usedFree)
- ƒ CreditRefreshCount = max(0, MaxCreditRefresh - usedFree) [computed from iVar5-iVar6 clamped >=0]
- ƒ MaxCreditRefreshCount = iVar5 - iVar7 (creditCap - freeCap)
- ƒ IsComplete = (task state *(taskTarget+0x14) == 4)
- $ RefreshCost (task refresh price, FUN_11531be0)
- $ HuntSoulBase / HuntSoulScale (task soul reward scaling)


## ai  (2)

### AISystem::LoadAngerAndSpawnSettings `@0x10a86ac0` — ai-anger-spawn-config
*Loads the AI perception/anger + spawn-cap settings from the '/Scripts/AI' config node (via localization/root path FUN_10478770). Iterates config entries reading each entry's name (DAT_11dbac80) and 'value', matching against a fixed set of setting names and writing them into the AI-settings struct (iVar2).* (conf high)
- ƒ DefaultAnger        -> *(float*)(settings+0x40) = atof(value)  [FUN_10a933f0 = parse float]
- ƒ AngerPeak           -> *(float*)(settings+0x44)
- ƒ BaseDecayFactor     -> *(float*)(settings+0x54)
- ƒ MaxDecayOffset      -> *(float*)(settings+0xa4)
- ƒ MaxAgentsIntensitySpawned -> *(float*)(settings+0xac)
- ƒ MaxEnemiesSpawned   -> *(int*)(settings+0xb0)   [FUN_10a93410 = parse int]
- ƒ name key attribute read via DAT_11dbac80 ('name'); value key literal 'value'
- $ MaxAgentsIntensitySpawned = cap on concurrently spawned high-intensity agents
- $ MaxEnemiesSpawned = hard cap on concurrently spawned enemies

### CThreatModifier::DebugDrawCollisionPath `@10d07650` — ai-threat/debug
*Debug-only render of an AI threat/collision-avoidance path. Gated on DAT_120286b8+0xc0c (debug cvar). Draws lines/spheres between the agent pos, a target pos, and param_1+1, and labels the path with 'ThreatCollisionPath [%s]' where the type comes from param_1[7]: 1='Anti-Parallel Path', 2='Parallel Path', 3='Perpendicular Path', else 'None'.* (conf medium)
- ƒ path-type enum param_1[7]: 1=Anti-Parallel, 2=Parallel, 3=Perpendicular
- ƒ distance label = sqrt((dx)^2 + dy^2 + (dz)^2) * DAT_11de98e8 (=0.5) when dy>=0


## gm  (2)

### CGMCommandRegistry::RegisterCommands `@115608b0` — gm-commands
*Registers the GM/admin command table via repeated FUN_1025e3f0(desc, name) calls. Each entry sets local_c to an argument-count/permission code before registering. Commands include: set_max_queue(2), setmaxonline(2), notice(2), alert(3), exchangesyssale(5), exchangesysbid(3), exchangesyscancel(2), exchangerate(3), feature(3), <DAT>(4), <DAT>(3), exitts(3), hunterstar(5), <DAT>(5), wildhunt(3), scriptactivity(5), reloaddata(2), <DAT>(2), <DAT>(2), levelunlock(3), hubunlock(3).* (conf medium)
- ƒ local_c per command = arg-count: set_max_queue=2, setmaxonline=2, notice=2, alert=3, exchangesyssale=5, exchangesysbid=3, exchangesyscancel=2, exchangerate=3, feature=3, exitts=3, hunterstar=5, wildhunt=3, scriptactivity=5, reloaddata=2, levelunlock=3, hubunlock=3
- $ exchangerate command registered (economy exchange rate GM command; arg count 3)
- $ each local_c value = number of arguments/param-slots for the command

### CGmMonsterAiInfo::DumpToProtocol `@0x10aab760` — gm-debug
*GM/debug command handler that serializes monster AI info (GmMonsterAiInfo.xml) and streams it back to the requester as protocol message id 0x71, chunked into <=0x7ff-byte packets (multi-part with a part-flag field). If access level (vfunc 4) < 2 it instead just references the xml filename.* (conf medium)
- ƒ packet id = 0x71 at *local_18
- ƒ chunk size = 0x7ff bytes; nChunks = (size + 0x7fe)/0x7ff
- ƒ part flag at local_18+10: 0=single, 1=first, 2=middle, 3=last; result code at local_18+8
- ƒ privilege gate: (*param_1 vfunc4) >= 2 required to dump
- ƒ copy loop uses 0x1ff dwords (=0x7fc) + 2-byte + 1-byte tail = 0x7ff per chunk (strncpy/memcpy limit 0x7ff)


## projectile  (2)

### CProjectileSpawnEffectInfo::GetByIndex `@10d858d0` — projectile/data-table
*2D-array accessor into the CProjectileSpawnEffectInfo record table. Given a linear index param_1, subtracts base offset (+0x30), bounds-checks against count (+0x24), and returns table[+0x20][idx/stride][idx%stride] where stride=*(+0x28). Returns 0 if out of range or -1.* (conf medium)
- ƒ idx = param_1 - *(rec+0x30); valid if 0<=idx< *(rec+0x24) and *(rec+0x28)!=0 (and not param_1==-1)
- ƒ row = *(*(rec+0x20) + (idx / stride)*4); return *(row + (idx % stride)*4)

### SAmmoParams::ParseFlagsAndParams `@0x10ab1740` — projectile-spawn-params
*Parses an ammo/projectile (spawnable entity) params from its script: a 'flags' sub-node (ClientOnly/ServerOnly/ServerSpawn/PredictSpawn/Reusable) and a 'params' sub-node (lifetime, showtime, bulletType, hitPoints, noBulletHits, quietRemoval, sleepTime, radius, aitype).* (conf high)
- ƒ flags bits into *param_1: ClientOnly -> \|0x100 ; ServerOnly -> \|0x200
- ƒ ServerSpawn(bool) -> byte at param_1+4; if ServerSpawn set -> PredictSpawn(bool) -> byte param_1+5; else Reusable(bool) -> byte param_1+6
- ƒ params: lifetime -> param_1+8(float via vfunc0x1c); showtime -> param_1+0xc; bulletType(int) -> param_1+0x14; hitPoints(int) -> param_1+0x18; noBulletHits(bool) -> param_1+0x1c; quietRemoval(bool) -> param_1+0x1d; sleepTime(float) -> param_1+0x20; radius(float) -> param_1+0x30
- ƒ aitype string: _stricmp 'grenade' -> *(u16*)(param_1+0x10)=0x96 (150); 'rpg' -> 0x97 (151)


## boids  (2)

### CBoids::PlaySpawnBubbleOrSplashEffect `@0x10b13370` — boids-effect
*Plays a particle/effect for a boid/fish entity on spawn: lazily resolves script functions OnSpawnBubble (this+0xb0) and OnSpawnSplash (this+0xb4); param_4 selects which (0=bubble,1=splash). Sets up a script-call table with 3 args from param_2 and invokes the resolved script function via the script system (DAT_1202e818+0x30).* (conf low)
- ƒ effect selector param_4: 0 -> this+0xb0 (OnSpawnBubble), 1 -> this+0xb4 (OnSpawnSplash), else return
- ƒ 3 script args from param_2[0..2] with type-code 4/6/7 refcount handling

### SBoidsCreateContext::LoadFromParams `@0x10b1e3f0` — boids-flock
*Loads a boids/flock creation context from a params record: count, model/model1..4 (via CInfoRecord::GetModelString), character, animation, behavior, and a large set of boid tuning floats (mass, size, heights, attraction distances, speeds, alignment/cohesion/separation/origin factors, flight/takeoff/landing, fov, ground sub-params, Sounds[] and Animations[] arrays).* (conf medium)
- ƒ float fields into param_2: boid_mass+0x28, boid_size+0xa8, boid_size_random+0xac, min_height+0x38, max_height+0x3c, min_attract_distance+0x44, max_attract_distance+0x40, min_speed+0x50, max_speed+0x4c, factor_align+0x58, factor_cohesion+0x5c, factor_separation+0x60, factor_origin+0x64, factor_keep_height+0x68, factor_avoid_land+0x6c, factor_random_accel+0x78, flight_time+0x48, factor_take_off+0x70, land_deceleration_height+0x54, max_anim_speed+0x90, max_view_distance+0xa0, spawn_radius+0x1c, gravity_at_death+0x2c
- ƒ min_attract clamp: if attract_min <= DAT_11de98c4 (epsilon) -> 0.05f; if attract_max <= attract_min -> attract_max = attract_min + DAT_11de98c4
- ƒ max_animation_distance stored squared: (+0xa4) = d*d
- ƒ fov_angle: v *= DAT_11de98e8 (0.5)? then cos((v*DAT_11de99b0)/DAT_11de9a34) -> +0x74  (fov cosine cache)
- ƒ bool flags (byte): follow_player+0x94, avoid_obstacles+0x95, no_landing+0x96, start_on_ground+0x97, avoid_water+0x98, spawn_from_point+0x99
- ƒ ground sub-node: factor_align+0x7c, factor_cohesion+0x80, factor_separation+0x84, factor_origin+0x88, walk_speed+0x8c, offset+0x9c
- ƒ Sounds[] and Animations[] loops capped at index < 100


## console  (2)

### CGame::RegisterMHODebugConsoleCommands `@10c330b0` — console/dev-commands
*Registers MHO debug/GM console commands via param_1 vtable+0x80 (AddCommand): notice, buyammo, g_debug_spawns, g_debug_minimap/teams/objectives, debugmonsterskel, debugenablesvranimopt, debugmonsterphyspart, syscmd, setdmglog, GetMonstersAround, GetPlayersAround, farmpet, PetEquipChg, PetTalk, TestFirework, IterateNext/PrevFace/Hair, ChangeMonster, g_playmonsterskill, addbuffP/delbuffP/getbuffP, CtrlM, ViewTeamPlayer/Pet, ChangeArea, SpawnItem, PlayBuffFX, PDAnim, load/unload/reloadui, g_firstAtkRotEnable/g_otherAtkRotEnable, setfaction, GotoLogin, ReloadData, buy/sellnpcshopitem, manuprod, lmanuskl, lmanuingd, catcs, warninglevel.* (conf high)

### CGame::UnregisterDevConsoleCommands `@10bdbc20` — console/dev-commands
*Calls a method at *(param_1+0x10) vtable+0x80 once per hard-coded command name, unregistering (removing) the game's console/dev commands: camgoto, freeze, loadactionmap, restartgame, v_kill, sv_restart, sv_say, i_reload, dumpss, g_reloadGameRules, g_quickGame(Stop), g_nextlevel, g_vote, g_startKickVoting, g_startNextMapVoting, g_battleDust_reload, bulletTimeMode, GOCMode, ShowGODMode, test_pathfinder, Cmd(Start/End)VideoCapture, g_hitDeathReactions_reload/dumpAssetUsage.* (conf high)


## combat  (2)

### CProjectileEffect::SpawnShootBloodEffect `@10c225a0` — combat-vfx
*Large client VFX routine: on a projectile/hit resolves the shooter entity (FUN_10c007c0), verifies it is a monster or type 8, gets the target entity via param_3[1], and spawns a directional blood effect. Two paths: monster type 5/10 uses fixed 'Water_Ability_Mst.HIT.ShootBlood_S'/'_M' (indexed by local_34 = (hitFlag @param_5+0x34 == 2)); otherwise resolves an effect name via FUN_11104780 and aims it along the shot direction with asin-based cone spreading. mat_default / weapon_bone are used to sample the emitter transform.* (conf low)
- ƒ local_34 = (*(param_5+0x34) == 2) selects ShootBlood variant (0=_S index, 1=_M index)
- ƒ monster-type switch: piVar6[0x56d] in {5,10}
- ƒ cone spread via libm_sse2_asin_precise, rsqrtss Newton refine (DAT_11de9938 - r*x*x*0.5)*x; epsilons DAT_11cbf070, DAT_11de98bc, DAT_11de98b4
- ƒ local_18 = *(param_5+0x38) = effect scale/param passed to FUN_10dbff80 etc.

### CProjectileEffect::SpawnWeakBloodHit `@10c21d10` — combat-vfx
*Spawns the blood-hit particle 'Water_Ability_Mst.HIT.N_Blood_Red_Weak' (Particle.SpawnEffect) at the impact point when both source(param_4) and target(param_5) are live monster entities (vtable+0xa8==1 twice) and target passes vtable+0x1c4. Computes the effect orientation from the joint/weapon transform (bone matrix, quaternion-from-matrix conversion) then calls FUN_10a7b9f0 to emit. Guarded by ceil() thresholds on param_2 damage-component array (param_2[0]+param_2[1..5]) so it only fires when total > 0.* (conf medium)
- ƒ gate: (int)ceil(param_2[0]) + (int)ceil(param_2[1]+0.0+param_2[2]+param_2[3]+param_2[4]+param_2[5]) > 0
- ƒ orientation from bone matrix at param_2[0x22]; quaternion built via matrix-trace branches using DAT_11de98e8=0.5 and DAT_11de9918=1.0
- ƒ half-angle rotation seed uStack_2c=0x3fc90fdb (pi/2)


## patrol  (2)

### CFlockWanderBehavior::CalcWanderTarget `@10d14690` — patrol/wander
*Stock CryEngine 'wander' steering: reads Steer_WanderRadius(+0x78), Steer_WanderDistance(+0x90), Steer_WanderJitter(+0xa8), Steer_WanderTimePeriod(+0xcc) params, picks a random angle, and writes the wander target offset into +0xc0 (xy) and +0xc8/+200 (z).* (conf medium)
- ƒ angle local_8 = rand() * DAT_11ce1f28 * DAT_11de99b0 * DAT_11de9990 (rand normalized then scaled to 2*pi range)
- ƒ wander target = radius(+0x8c after resolve) * (sin(angle), cos(angle)*..., sin(angle)) written to param_1+0xc0 and +0xc8

### CFlockWanderBehavior::ctor `@10d14c70` — patrol/wander
*Constructor for the 'Wander' steering behavior object: sets self-pointers at +0x10/+0x14 and registers the behavior name 'Wander'.* (conf medium)


## effects  (2)

### CEffectSpawnInfo::ReadConfig `@116f1b30` — effects
*XML/attr reader for a spawnable effect/geometry decoration config. Parses fields into the target struct: Effect(str@+0x120), HideEffectOnDestroy(bool@+0x188), GeomName(str@+0x1b0), TrailSound(str@+0x138), Geom offset X/Y/Z(@+0x1c8/0x1cc/0x1d0), Geom rotate X/Y/Z(@+0x1d4/0x1d8/0x1dc), VFX offset X/Y/Z(@+0x1e0/0x1e4/0x1e8), VFX rotate X/Y/Z(@+0x1ec/0x1f0/0x1f4), RotationSpeed X/Y/Z(@+0x1f8/0x1fc/0x200), GeomScale(@+0x204), DestroyEffect(list), DestroyEffectScale(float list@+0x1a8), MeshHitEffect id(@+0x184 flag via string compare), SpawnScale, plus a bool@+0x208. Also computes a name hash for the Effect string.* (conf medium)
- ƒ geom name hash: h=0x4e67c6a7; for each char c: h ^= h*0x20 + (h>>2) + c; stored at this+0x150 (only if +0x14c != +0x148)
- ƒ float attrs read via reader vtbl+0x30 (returns float10), stored as float32 at listed offsets
- ƒ DestroyEffectScale parsed with atof into float vector at this+0x1a8


## loading  (1)

### CLoadingScreen::BuildLoadingScreenData `@0x109627c0` — loading-screen-ui
*Builds the level-loading UI/screen dataset: picks a weighted-random loading tip, evaluates operation-activity data, selects loading-animation elements, and for specific map ids (0x2bf85 / 0x2bfe9) chooses a WildHunt/xHunter background. Pure UI/data assembly written into the passed struct (param_4).* (conf medium)
- ƒ hunt rank: iStack_15c = CPlayer::GetHuntRankOrCount() (only if a valid actor found)
- ƒ tip group filter per entry: entry+0x18 <= huntRank <= entry+0x1c AND (entry+0x14 == 0 \|\| entry+0x14 == uStack_16c[some category from record+0x20]); weight range accumulator ppuVar16 = prev + entry+0x20 (weight at +0x10)
- ƒ tip roll: r = rand() % totalWeight; select bucket where bucket[1] <= r < bucket[2]
- ƒ data-info index math (repeated pattern): idx = key - mgr+0x30; row = *(mgr+0x20 + (idx / mgr+0x28)*4); elem = *(row + (idx % mgr+0x28)*4); count = (elem+0x18 - elem+0x14)>>3 (or /0x1c, or >>2 depending on stride); pick = rand()%count
- ƒ background pick (map 0x2bf85 or 0x2bfe9): rand()&0x80000001 parity chooses "wildhunt"/"xHunter"; when both flags set: rand()%3==0 -> "xHunter", %3==1/2 -> parity of that toward wildhunt
- ƒ aeroboat gating: only if local_150[8]>0 && ppuStack_174>0 && they differ && cVar17 (screen type (local_154 & 0x8f)==10)


## operation  (1)

### COperationActivityConstTable::Load `@0x109d87e0` — operation-activity-config
*Parses mh.view.NewOperationActivity.Data.ConstTableData record and copies WildHunt button-image URL strings (ServerConfigUrl, ImageUrlPrefix, ButtonImageUrl variants) from a config record (iVar1 offsets 0x74..0x120) into output std::string fields.* (conf medium)
- ƒ source record field offsets: +0x74/0x78 (ServerConfigUrl/ImageUrlPrefix pair), +0x8c/0x90, +0xa4/0xa8, +0xbc/0xc0, +0xd4/0xd8, +0xec/0xf0, +0x104/0x108, +0x11c/0x120


## gamerules  (1)

### CBattleDust::LoadConfig `@0x10b839c0` — gamerules-battledust
*Loads /Scripts/GameRules/BattleDust.xml: 'params' (fogspawnpower, defaultlifetime, maxlifetime, maxeventpower, minparticlecount, maxparticlecount, distancebetweenevents) and 'events' sub-collections (shotfired, explosion, vehicleexplosion, bulletimpact), each entry with name/power/lifetime; builds per-event-type effect tables.* (conf low)
- ƒ params floats into this: fogspawnpower+0x0, defaultlifetime+0x4, maxlifetime+0x8, maxeventpower+0xc, minparticlecount+0x10, maxparticlecount+0x14, distancebetweenevents+0x18
- ƒ per-event default power/lifetime = 1.0 (0x3f800000); 'default' entry stored to fixed slots (shotfired +0x20/+0x24, explosion +0x30/+0x34, vehicleexplosion +0x40/+0x44, bulletimpact +0x50/+0x54)
- ƒ named entries hashed into per-type maps (particle id via effect mgr DAT_1202e818[0x14] vfunc 0x20 -> 0xc)


## funnel  (1)

### CFunnelCloud::InitFromProperties `@0x10b898f0` — funnel-entity
*Initializes a funnel/tornado entity ('FunnelEffect') from script Properties: fWanderSpeed, fCloudHeight, Radius, fSpinImpulse, fAttractionImpulse, fUpImpulse. Sets defaults then reads overrides, builds bounding volume from the entity world transform, and spawns the funnel particle effect.* (conf low)
- ƒ defaults: fCloudHeight(+0x28)=376.0; fWanderSpeed(+0xa4)=10.0(0x41200000); Radius(+0x30)=300.0(0x43960000); fSpinImpulse(+0xc0)=9.0(0x41100000); fAttractionImpulse(+0xc4)=13.0(0x41500000); fUpImpulse(+0xc8)=18.0(0x41900000)
- ƒ bbox built from entity transform scaled by DAT_11cca92c; height bands at +0x4c(base), +0x58(+height*DAT_11de98e8=0.5), +0x64(+full height)


## ground  (1)

### CGroundEffect::LoadSpawnProperties `@0x10b8b1c0` — ground-effect
*Loads a ground/screen effect entity's spawn config from script: Properties (fScale, fStrength, bEnabled), Spawning (bAutoSpawn, bSpawnOnMovement, fFrequency), Randomization (fRandomFreq, fRandomScale, fRandomStrength, fRandomOffsetX/Y).* (conf medium)
- ƒ Properties: fScale->this+0x0, fStrength->this+0x4, bEnabled->this+0x18
- ƒ Spawning: bAutoSpawn->this+0x19, bSpawnOnMovement->this+0x1a, fFrequency->this+0x8
- ƒ Randomization: fRandomFreq->this+0xc, fRandomScale->this+0x10, fRandomStrength->this+0x14, fRandomOffsetX->this+0x1c, fRandomOffsetY->this+0x20


## collect  (1)

### CGameCollectPoint::SpawnEntity `@0x10bcb9a0` — collect-point-spawn
*Creates the in-world entity for a GameCollectPoint (gathering node / captured-monster drop / bound monster). Names it 'CGameCollectPoint_%08x' from netid, resolves the 'MHCommonArea' entity class, fills script properties (collect_point_net_id, collect_type, monster_net_id, monster_info_id, bind_entity_class, life_time, trigger_radius, model_filename, particlefile, Scale), computes spawn position/orientation (including a bone-attached offset with rotation for bound monsters), and spawns the entity via the entity system; marks the source object 'Spawned'.* (conf medium)
- ƒ entity name = snprintf('CGameCollectPoint_%08x', netid @ collectObj+4)
- ƒ collect_type = vfunc 0x1c8 (this+0x13 gets model/radius depending on type)
- ƒ type gate for monster fields: (9 < type) && (type < 0xc \|\| type == 0xe)  i.e. types 10,11,14 carry monster_net_id/monster_info_id/bind_entity_class/life_time
- ƒ trigger_radius read only when type == 0xb (11)
- ƒ type 0xe (14): this+0x13 = *(collectObj+0x170); else resolve monster info FUN_107d7df0(monster_info_id) -> +0x938
- ƒ bound-monster offset (type 3 attachment): pos += monsterInfo[0x255/0x256/599] bone offset; heading angle = monsterInfo[600]*DAT_11de98c0(deg->rad)*DAT_11de98e8(0.5) -> fcos/fsin rotation applied to attach transform
- ƒ default scale/orientation: 1.0 (0x3f800000); model transform from source object vfunc 0x1c
- $ life_time = collect point despawn timer (from collectObj+0x174)
- $ trigger_radius = pickup/interaction radius (type 11)


## target  (1)

### CGunTurret::PredictTargetPos `@10c65a10` — target-prediction
*Target-leading / aim-prediction. Given a target entity, gets its current pos and physics velocity (physical entity status vtable+0x18). Computes the offset needed to lead the target based on relative closing speed and the projectile's muzzle speed, and writes predicted position into param_2. If prediction is disabled (turret+0x4ea flag set, or prediction scale turret+0x4cc == 0) it returns the raw target position. When debug level DAT_120286b8+0x8a8==2 it draws a sphere and logs 'Predict %s: speed %.1f (dspeed %.1f), acc %.1f, time %.1f'.* (conf medium)
- ƒ targetSpeed local_60 = sqrt(vx^2+vy^2+vz^2); if >= DAT_11de98bc normalize dir (dir = vel * (1.0/speed))
- ƒ distance local_70 = \|targetPos - shooterPos(status vtable+0x198(1))\|
- ƒ closingSpeed local_2c = dot(velDir, rangeVec) * (1/dist)  (component of target velocity along line of sight)
- ƒ projectileSpeed = *(projInfo+0x2c) (FUN_1111b3f0, valid iff +0x24 != 0)
- ƒ relSpeed fVar5 = projectileSpeed - closingSpeed; clamp to >= DAT_11de9918 (=1.0)
- ƒ timeToImpact local_70 = distance / relSpeed
- ƒ targetSpeed clamped to max DAT_11cc4180
- ƒ fVar6 = targetSpeed * 0.5 (DAT_11de98e8)
- ƒ predOffset.axis = (vel.axis*time + accComponent.axis * fVar6 * time^2) * predScale(turret+0x4cc)
- ƒ predictedPos = predOffset + currentTargetPos


## ui  (1)

### CUIEntityDynTexTag::RegisterFlowNode `@10c8a390` — ui-flowgraph
*Constructs/registers the 'CUIEntityDynTexTag' UI flowgraph node in class 'UIEntityTagsDynTex'. Declares node functions AddEntityTag / UpdateEntityTag / RemoveEntityTag / RemoveAllEntityTag with their input port descriptors (EntityID, uiElements_UIElement, EntityClass, Material, OffsetX/Y/Z, TagIDX, LerpSpeed) and binds each to handler fns FUN_10c8b6b0/10c8b8d0/10c8ba20/10c8bab0.* (conf high)


## item  (1)

### CPickableItem::LoadPropertiesFromScript `@10ccea90` — item/pickup-spawn
*Loads a pickable/interactable entity's properties from its script table into struct fields: HitPoints (float @+0x2a8), bPickable(+0x2ac), bMounted(+0x2ad), bPhysics(+0x2ae), bUsable(+0x2af), bAutoPickup(+0x2b0), and from the 'Respawn' sub-table: bRespawn(+0x2a5), nTimer(+0x2a0), bUnique(+0x2a4).* (conf high)
- ƒ HitPoints -> +0x2a8 (float, FUN_10ab32a0)
- ƒ bPickable +0x2ac, bMounted +0x2ad, bPhysics +0x2ae, bUsable +0x2af, bAutoPickup +0x2b0 (bytes, FUN_10ccf320)
- ƒ Respawn.bRespawn -> +0x2a5, Respawn.nTimer -> +0x2a0 (int), Respawn.bUnique -> +0x2a4


## anim  (1)

### CAnimEventHandler::OnCustomAnimEvent `@10d9c1b0` — anim-event/vfx
*Handles custom animation events (param_3 = anim-event record). Dispatches on event type id (compared against globals DAT_1201fffc/12020074/78/7c/00/0c -> handlers at self vtable+0x6b8/+0x6bc/+0x6c0), then handles named string effects: 'sound_tp' (spawn a sound/teleport marker at a joint, path chosen 0x44000 vs 0x244000 by presence of ':'), 'watereffect' / 'fireStareffect' / 'dusteffect' (spawn 'Particle.SpawnEffect' at a bone with offset from param_3+0x30/+0x34/+0x38 scaled by DAT_11de98c0). Gated on a distance/LOD check (vtable+0x164, monster manager) and monster-vs-not (vtable+0x25c).* (conf low)
- ƒ sound flag = 0x44000 if strchr(name,':') else 0x244000
- ƒ effect pos offset = bonePos + (param_3+0x30,+0x34,+0x38) * DAT_11de98c0
- ƒ event-type globals: DAT_1201fffc/12020074/12020078/1202007c -> handler +0x6b8; DAT_12020000 -> +0x6bc; DAT_1202000c -> +0x6c0


## quest  (1)

### FlowNode_MonsterQuestModule::GetConfiguration `@10ea1ab0` — quest-monster
*FlowGraph node config (guard DAT_1203a8a0) for a monster-related quest/objective module. Input: modelGroupID. Outputs: moduleType, useItemID, useItemNum, targetMonsterID, killMonsterCount, monsterPartName, monsterBreakLev, monsterStateAbnormal, spawnGroupID, msgID, targMsgID, monsterBuff1/2/3, logic, targetMonsterID2, killTargetMonsterCount2, monsterPartName2, monsterBreakLev2, targMsgID2, wrongHitCheck, time1/2/3, alertMsgID. Defines hunt/break/kill objective parameters and their message IDs.* (conf high)
- ƒ monsterPartName / monsterPartName2 output tag = 5 (string); most numeric ports tag = 1
- ƒ config flags: param_1[2] = (param_1[2] & 0xfffff01f) \| 0x10
- ƒ supports two objective targets (targetMonsterID + targetMonsterID2) with kill counts, part-break levels, state-abnormal, and up to 3 monster buffs
- $ useItemID/useItemNum define a required item consumption for the objective
- $ killMonsterCount / killTargetMonsterCount2 = required kill counts
- $ monsterBreakLev / monsterBreakLev2 = required part-break level thresholds
