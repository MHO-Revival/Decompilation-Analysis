
// ===== "BehaviorTreeBase" user: GameFactory::RegisterEntityClasses@10be3840 =====
//   indirect: CALL dword ptr [EAX + 0x10]
//   indirect: CALL dword ptr [EAX + 0x20]
//   indirect: CALL dword ptr [EDX + 0xc]
//   indirect: CALL dword ptr [EDX + 0xc]
//   indirect: CALL dword ptr [EDI + 0x10]
//   indirect: CALL dword ptr [EAX + 0x10]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x10]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x10]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x10]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x80]
//   indirect: CALL dword ptr [EAX + 0x6c]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x14]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x20]
//   indirect: CALL dword ptr [EDX + 0xc]
//   indirect: CALL dword ptr [EDX + 0xc]
//   indirect: CALL dword ptr [EDI + 0x10]
//   indirect: CALL dword ptr [EAX + 0x60]
//   indirect: CALL dword ptr [EDX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x84]
//   indirect: CALL dword ptr [EDX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x84]
//   indirect: CALL dword ptr [EDX + 0x10]
//   indirect: CALL dword ptr [EAX + 0x84]
//   indirect: CALL dword ptr [EDX + 0x4]
//   indirect: CALL dword ptr [EAX + 0x84]
//   indirect: CALL dword ptr [EDX + 0x10]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""NullAI""
     ""BTEmCommon""
     ""BTCtrlObject""
     ""MHBuffArea""
     ""BehaviorTreeBase""
     ""MHCommonArea""
     ""MHTestSpawner""
     ""SceneObject""
     ""MHAttackable""
     ""MHBurnable"" */

void GameFactory__RegisterEntityClasses(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("NullAI",&DAT_1202e01c,1);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("NullAI");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("BTEmCommon",&DAT_1202e014,1);
  if ((DAT_1202e010 & 1) == 0) {
    DAT_1202e010 = DAT_1202e010 | 1;
    _DAT_1202e00c = &PTR_FUN_11cd50cc;
    FUN_11a8911f(&LAB_11c85bf0);
  }
  (**(code **)(*param_1 + 4))("BTCtrlObject",&DAT_1202e00c,1);
  if ((DAT_1202e028 & 1) == 0) {
    DAT_1202e028 = DAT_1202e028 | 1;
    _DAT_1202e024 = &PTR_FUN_11cd50f0;
    FUN_11a8911f(&LAB_11c85c80);
  }
  (**(code **)(*param_1 + 4))("MHBuffArea",&DAT_1202e024,0);
  if ((DAT_1202e030 & 1) == 0) {
    DAT_1202e030 = DAT_1202e030 | 1;
    _DAT_1202e02c = &PTR_FUN_11cd50fc;
    FUN_11a8911f(&LAB_11c85c00);
  }
  (**(code **)(*param_1 + 4))("BehaviorTreeBase",&DAT_1202e02c,0);
  if ((DAT_1202e038 & 1) == 0) {
    DAT_1202e038 = DAT_1202e038 | 1;
    _DAT_1202e034 = &PTR_FUN_11cd5108;
    FUN_11a8911f(&LAB_11c85ca0);
  }
  (**(code **)(*param_1 + 4))("MHCommonArea",&DAT_1202e034,0);
  if ((DAT_1202e040 & 1) == 0) {
    DAT_1202e040 = DAT_1202e040 | 1;
    _DAT_1202e03c = &PTR_FUN_11cd5114;
    FUN_11a8911f(&LAB_11c85cd0);
  }
  (**(code **)(*param_1 + 4))("MHTestSpawner",&DAT_1202e03c,0);
  if ((DAT_1202e048 & 1) == 0) {
    DAT_1202e048 = DAT_1202e048 | 1;
    _DAT_1202e044 = &PTR_FUN_11cd5120;
    FUN_11a8911f(&LAB_11c85cc0);
  }
  (**(code **)(*param_1 + 4))("SceneObject",&DAT_1202e044,0);
  if ((DAT_1202e050 & 1) == 0) {
    DAT_1202e050 = DAT_1202e050 | 1;
    _DAT_1202e04c = &PTR_FUN_11cd512c;
    FUN_11a8911f(&LAB_11c85c70);
  }
  (**(code **)(*param_1 + 4))("MHAttackable",&DAT_1202e04c,0);
  if ((DAT_1202e058 & 1) == 0) {
    DAT_1202e058 = DAT_1202e058 | 1;
    _DAT_1202e054 = &PTR_FUN_11cd5138;
    FUN_11a8911f(&LAB_11c85c90);
  }
  (**(code **)(*param_1 + 4))("MHBurnable",&DAT_1202e054,0);
  if ((DAT_1202e060 & 1) == 0) {
    DAT_1202e060 = DAT_1202e060 | 1;
    _DAT_1202e05c = &PTR_FUN_11cd5144;
    FUN_11a8911f(&LAB_11c85cb0);
  }
  (**(code **)(*param_1 + 4))("MHContAttacker",&DAT_1202e05c,0);
  if ((DAT_1202e068 & 1) == 0) {
    DAT_1202e068 = DAT_1202e068 | 1;
    _DAT_1202e064 = &PTR_FUN_11cd5150;
    FUN_11a8911f(&LAB_11c85c40);
  }
  (**(code **)(*param_1 + 4))("GroupAI",&DAT_1202e064,0);
  FUN_10be3540(param_1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("EmCommon",&DAT_1202e014,1);
  if ((DAT_1202e070 & 1) == 0) {
    DAT_1202e070 = DAT_1202e070 | 1;
    _DAT_1202e06c = &PTR_FUN_11cd515c;
    FUN_11a8911f(&LAB_11c85d30);
  }
  (**(code **)(*param_1 + 4))("RageBullet",&DAT_1202e06c,1);
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("Player",&DAT_1202e01c,0);
  if ((DAT_1202e078 & 1) == 0) {
    DAT_1202e078 = DAT_1202e078 | 1;
    _DAT_1202e074 = &PTR_FUN_11cd5168;
    FUN_11a8911f(&LAB_11c85c20);
  }
  (**(code **)(*param_1 + 4))("CombatNpc",&DAT_1202e074,0);
  if ((DAT_1202e080 & 1) == 0) {
    DAT_1202e080 = DAT_1202e080 | 1;
    _DAT_1202e07c = &PTR_FUN_11cd5174;
    FUN_11a8911f(&LAB_11c85cf0);
  }
  (**(code **)(*param_1 + 4))("MonsterCtrlPlugin",&DAT_1202e07c,0);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("CatHandcart",&DAT_1202e014,1);
  if ((DAT_1202e088 & 1) == 0) {
    DAT_1202e088 = DAT_1202e088 | 1;
    _DAT_1202e084 = &PTR_FUN_11cd5180;
    FUN_11a8911f(&LAB_11c85c50);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cc4fa8,&DAT_1202e084,0);
  if ((DAT_1202e090 & 1) == 0) {
    DAT_1202e090 = DAT_1202e090 | 1;
    _DAT_1202e08c = &PTR_FUN_11cd518c;
    FUN_11a8911f(&LAB_11c85d20);
  }
  (**(code **)(*param_1 + 0xc))("PlayerFeature",&DAT_1202e08c,0);
  if ((DAT_1202e098 & 1) == 0) {
    DAT_1202e098 = DAT_1202e098 | 1;
    _DAT_1202e094 = &PTR_FUN_11cd5198;
    FUN_11a8911f(&LAB_11c85c60);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cd4e7c,&DAT_1202e094,0);
  if ((DAT_1202e0a0 & 1) == 0) {
    DAT_1202e0a0 = DAT_1202e0a0 | 1;
    _DAT_1202e09c = &PTR_FUN_11cd51a4;
    FUN_11a8911f(&LAB_11c85be0);
  }
  (**(code **)(*param_1 + 0xc))("Accessory",&DAT_1202e09c,0);
  if ((DAT_1202e0a8 & 1) == 0) {
    DAT_1202e0a8 = DAT_1202e0a8 | 1;
    _DAT_1202e0a4 = &PTR_FUN_11cd51b0;
    FUN_11a8911f(&LAB_11c85d50);
  }
  (**(code **)(*param_1 + 0xc))("Weapon",&DAT_1202e0a4,0);
  if ((DAT_1202e0b0 & 1) == 0) {
    DAT_1202e0b0 = DAT_1202e0b0 | 1;
    _DAT_1202e0ac = &PTR_FUN_11cd51bc;
    FUN_11a8911f(&LAB_11c85d40);
  }
  (**(code **)(*param_1 + 0xc))("VehicleWeapon",&DAT_1202e0ac,0);
  if ((DAT_1202e0b8 & 1) == 0) {
    DAT_1202e0b8 = DAT_1202e0b8 | 1;
    _DAT_1202e0b4 = &PTR_FUN_11cd51c8;
    FUN_11a8911f(&LAB_11c85c10);
  }
  (**(code **)(*param_1 + 4))("CameraRegion",&DAT_1202e0b4,0);
  if ((DAT_1202e0c0 & 1) == 0) {
    DAT_1202e0c0 = DAT_1202e0c0 | 1;
    _DAT_1202e0bc = &PTR_FUN_11cd51d4;
    FUN_11a8911f(&LAB_11c85d00);
  }
  (**(code **)(*param_1 + 0xc))("OffHand",&DAT_1202e0bc,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x80))();
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)("EntityAttachment",&DAT_10be45c0,0);
    DAT_1203eb70 = (**(code **)(*piVar2 + 0x6c))();
    (**(code **)(*piVar2 + 0x14))("Hovercraft",&DAT_10be45e0,0);
    (**(code **)(*piVar2 + 0x14))("Helicopter",&DAT_10be4600,0);
    (**(code **)(*piVar2 + 0x14))("StdBoat",&DAT_10be4620,0);
    (**(code **)(*piVar2 + 0x14))("StdWheeled",&DAT_10be4640,0);
    (**(code **)(*piVar2 + 0x14))("ArcadeWheeled",&DAT_10be4660,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f04,&DAT_10be4680,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f0c,&DAT_10be46a0,0);
    (**(code **)(*piVar2 + 0x14))("Warrior",&DAT_10be46c0,0);
    (**(code **)(*piVar2 + 0x14))("Amphibious",&DAT_10be46e0,0);
  }
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Tornado";
  local_24 = "Scripts/Entities/Environment/Tornado.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 1) == 0) {
    DAT_1202dfec = DAT_1202dfec | 1;
    _DAT_1202dfe8 = &PTR_FUN_11cd4f54;
    FUN_11a8911f(&LAB_11c85b60);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Tornado",&DAT_1202dfe8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Shake";
  local_24 = "Scripts/Entities/Environment/Shake.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 2) == 0) {
    DAT_1202dfec = DAT_1202dfec | 2;
    _DAT_1202dff0 = &PTR_FUN_11cd4f88;
    FUN_11a8911f(&LAB_11c85b70);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Shake",&DAT_1202dff0,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Rain";
  local_24 = "Scripts/Entities/Environment/Rain.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 4) == 0) {
    DAT_1202dfec = DAT_1202dfec | 4;
    _DAT_1202dff4 = &PTR_FUN_11cd4fc4;
    FUN_11a8911f(&LAB_11c85bc0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4f94,&DAT_1202dff4,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Snow";
  local_24 = "Scripts/Entities/Environment/Snow.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 8) == 0) {
    DAT_1202dfec = DAT_1202dfec | 8;
    _DAT_1202dff8 = &PTR_FUN_11cd5000;
    FUN_11a8911f(&LAB_11c85bd0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4fd0,&DAT_1202dff8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "WaterRipplesGenerator";
  local_24 = "Scripts/Entities/Environment/WaterRipplesGenerator.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x10) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x10;
    _DAT_1202dffc = &PTR_FUN_11cd505c;
    FUN_11a8911f(&LAB_11c85b80);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("WaterRipplesGenerator",&DAT_1202dffc,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "RopeEntAttach";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x20) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x20;
    _DAT_1202e000 = &PTR_FUN_11cd5078;
    FUN_11a8911f(&LAB_11c85b90);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("RopeEntAttach",&DAT_1202e000,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "BattleEvent";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x40) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x40;
    _DAT_1202e004 = &PTR_FUN_11cd5084;
    FUN_11a8911f(&LAB_11c85ba0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("BattleEvent",&DAT_1202e004,&local_2c);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("BattleEvent");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if (-1 < (char)DAT_1202dfec) {
    DAT_1202dfec = DAT_1202dfec | 0x80;
    _DAT_1202e008 = &PTR_FUN_11cd5090;
    FUN_11a8911f(&LAB_11c85bb0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("ScriptControlledPhysics",&DAT_1202e008,0);
  if ((DAT_1202e0c8 & 1) == 0) {
    DAT_1202e0c8 = DAT_1202e0c8 | 1;
    _DAT_1202e0c4 = &PTR_FUN_11cd51e0;
    FUN_11a8911f(&LAB_11c85c30);
  }
  (**(code **)(*param_1 + 4))("GameRulesClient",&DAT_1202e0c4,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("SinglePlayer","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("SinglePlayer",&DAT_11cd50c4);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("DeathMatch","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("DeathMatch",&DAT_11cd50c8);
  return;
}


// ===== "BehaviorTreeBase" user: CProximityTrigger::FireBTEnterEvent@10d604a0 =====
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x24]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""EnterEntityID""
     ""EnterEntity"" */

void __thiscall CProximityTrigger__FireBTEnterEvent(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("EnterEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "EnterEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}


// ===== "BehaviorTreeBase" user: CProximityTrigger::FireBTLeaveEvent@10d60510 =====
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x24]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""LeaveEntityID""
     ""LeaveEntity"" */

void __thiscall CProximityTrigger__FireBTLeaveEvent(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("LeaveEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "LeaveEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}


// ===== "BehaviorTreeBase" user: CTrigger::NotifyBTNewComer_Single@10c5e3d0 =====
//   indirect: CALL dword ptr [EAX + 0x68]
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x24]
//   indirect: CALL dword ptr [EAX + 0x7c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __thiscall CTrigger__NotifyBTNewComer_Single(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  char *local_14;
  undefined4 local_10;
  int local_c [2];
  
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x7c))(param_2);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x68))();
    if (iVar1 == -1) {
      piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x70))("NewComerID",param_2);
        local_c[0] = param_1[2];
        local_18 = local_c;
        local_20 = 0x124;
        local_1c = 0x4ffff;
        local_10 = 0;
        local_14 = "NewCome";
        local_c[1] = 2;
        (**(code **)(*(int *)param_1[1] + 0x24))(&local_20);
        return;
      }
    }
  }
  return;
}


// ===== "BehaviorTreeBase" user: CTrigger::NotifyBTNewComers_All@10c5dcb0 =====
//   indirect: CALL dword ptr [EAX + 0x8c]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x68]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EDX + 0x88]
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x4]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x24]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __fastcall CTrigger__NotifyBTNewComers_All(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  char *local_2c;
  undefined4 local_28;
  int local_24 [5];
  int local_10;
  undefined4 local_c;
  char local_5;
  
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x8c))(local_24);
  cVar1 = FUN_113a58c0();
  while (cVar1 == '\0') {
    iVar2 = (**(code **)(local_24[0] + 0xc))();
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar2 = (**(code **)(*param_1 + 0x68))(uVar5);
    local_5 = iVar2 != -1;
    piVar3 = (int *)(**(code **)(local_24[0] + 0xc))();
    iVar2 = (**(code **)(*piVar3 + 0x88))();
    if ((((param_1[8] == iVar2) && (local_5 == '\0')) &&
        (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar5),
        piVar3 != (int *)0x0)) &&
       (piVar4 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase"),
       piVar4 != (int *)0x0)) {
      uVar5 = (**(code **)(*piVar3 + 4))();
      (**(code **)(*piVar4 + 0x70))("NewComerID",uVar5);
      local_10 = param_1[2];
      local_30 = &local_10;
      local_38 = 0x124;
      local_34 = 0x4ffff;
      local_28 = 0;
      local_2c = "NewCome";
      local_c = 2;
      (**(code **)(*(int *)param_1[1] + 0x24))(&local_38);
    }
    FUN_113a58d0();
    cVar1 = FUN_113a58c0();
  }
  FUN_113a5790();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardVec3@11036900 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x7c]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardVec3(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 local_10;
  undefined4 local_8;
  
  piVar1 = param_2;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    puVar6 = &param_2;
    param_2 = (int *)0x0;
    uVar5 = 1;
    FUN_10c62470();
    cVar2 = FUN_10b1f370(2,&local_10,uVar5,puVar6);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x7c))(param_2,local_10,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardBool@110369a0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x80]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardBool(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10b1f4b0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x80))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardFloat@11036870 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x74]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardFloat(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c623f0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x74))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardStringString@11036b30 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x98]
//   indirect: CALL dword ptr [EAX + 0x98]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall
ScriptBind_BT__SetBlackboardStringString(int param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 local_8 [4];
  
  local_1c = local_2c;
  pcVar1 = param_3;
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  local_18 = local_1c;
  FUN_100b62c0(param_3,pcVar5);
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        FUN_11316810(local_2c);
        (**(code **)(*piVar3 + 0x98))(local_8,&param_3);
        FUN_1046dc90();
        (**(code **)(*piVar3 + 0x98))();
        FUN_1046e900(param_3);
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x54);
      }
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_18);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardString@11036a30 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [ESI + 0x78]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardString(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c62470(2,&local_8);
    if (cVar2 != '\0') {
      iVar3 = *piVar4;
      puVar5 = (undefined4 *)FUN_113168d0(local_8);
      (**(code **)(iVar3 + 0x78))(param_2,*puVar5);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardUint@11036ad0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall
ScriptBind_BT__SetBlackboardUint(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if ((piVar2 != (int *)0x0) && (param_3 != 0)) {
        (**(code **)(*piVar2 + 0x70))(param_3,param_4);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetBlackboardEntityID@11036d60 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x84]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardEntityID(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  int *local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = (int *)0x0;
          (**(code **)(*piVar3 + 0x84))(param_2,&local_8);
          param_2 = local_8;
          uVar4 = FUN_110273e0(&param_2);
          goto LAB_11036e00;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11036e00:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetBlackboardVec3@11036f30 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x90]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardVec3(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  int *local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_10 = 0;
          local_c = 0;
          local_8 = 0;
          (**(code **)(*piVar3 + 0x90))(param_2,&local_10);
          uVar4 = FUN_110333d0(&local_10);
          goto LAB_11036fd8;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_20);
LAB_11036fd8:
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar4;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetBlackboardFloat@11036e50 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x88]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardFloat(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = 0;
          (**(code **)(*piVar3 + 0x88))(param_2,&local_8);
          uVar4 = FUN_10d1c5b0(&local_8);
          goto LAB_11036eea;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11036eea:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetComponentHelper@110367a0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__GetComponentHelper(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::SetBlackboardEntityID@110367e0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__SetBlackboardEntityID(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    local_8 = 0;
    FUN_10c62470(1,&local_8);
    param_2 = (int *)0x0;
    cVar2 = FUN_10d32550(2,&param_2);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x70))(local_8,param_2);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetComponentPtr@110378a0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

int __thiscall ScriptBind_BT__GetComponentPtr(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (((iVar1 != 0) &&
      (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1),
      piVar2 != (int *)0x0)) &&
     (iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase"), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetBlackboardString@11037100 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x8c]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardString(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined1 local_8 [4];
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          FUN_113168d0(&DAT_11d9d32b);
          (**(code **)(*piVar3 + 0x8c))(param_2,local_8);
          param_2 = (int *)FUN_11317f30();
          uVar4 = FUN_10a01710(&param_2);
          goto LAB_110371ab;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_110371ab:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::LoadEventBehaviorTree@110371f0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EAX + 0xb4]
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__LoadEventBehaviorTree(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_1103723c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103723c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_1103723c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_110372f2;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xb4))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_110372f2:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::GetBlackboardBool@11037020 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x94]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__GetBlackboardBool(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          local_8 = 0;
          FUN_10c62470(1,&local_8);
          param_2 = (int *)((uint)param_2 & 0xffffff);
          (**(code **)(*piVar3 + 0x94))(local_8,(int)&param_2 + 3);
          uVar4 = FUN_10d1c620((int)&param_2 + 3);
          goto LAB_110370b7;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_110370b7:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::LoadBehaviorTree@11037380 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x9c]
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__LoadBehaviorTree(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_110373cc:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_110373cc;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_110373cc;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11037482;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x9c))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_11037482:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::LoadBlackboard@11037510 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EAX + 0xa0]
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x28]
//   indirect: CALL dword ptr [EAX + 0x60]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall ScriptBind_BT__LoadBlackboard(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_1103755c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11037612;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xa0))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_11037612:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::ExecuteEventTree@110377d0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0xbc]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__ExecuteEventTree(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xbc))();
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::ClearAllTrees@110376a0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EAX + 0x2c]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall ScriptBind_BT__ClearAllTrees(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (iVar1 != 0) {
        FUN_10b04fd0();
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BehaviorTreeBase" user: ScriptBind_BT::InitBehaviorTrees@110376f0 =====
//   indirect: CALL dword ptr [EAX + 0x8]
//   indirect: CALL dword ptr [EDX + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x30]
//   indirect: CALL dword ptr [EAX + 0x34]
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EDX + 0xc]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""file_BlackBoardFile""
     ""file_BTEventFileName""
     ""file_BTFileName1""
     ""file_BTFileName2""
     ""file_BTFileName3"" */

undefined4 __thiscall ScriptBind_BT__InitBehaviorTrees(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (iVar1 != 0) {
        (**(code **)(*param_3 + 0x30))();
        local_8 = 0;
        local_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        FUN_10a68fd0("file_BlackBoardFile",&local_18);
        FUN_10a68fd0("file_BTEventFileName",&uStack_14);
        FUN_10a68fd0("file_BTFileName1",&uStack_10);
        FUN_10a68fd0("file_BTFileName2",&uStack_c);
        FUN_10a68fd0("file_BTFileName3",&local_8);
        (**(code **)(*param_3 + 0x34))();
        FUN_10b04dd0(&local_18);
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  return uVar3;
}


// ===== "BehaviorTreeBase" user: CBTActor::InstantiateBehaviorTreeForEntity@10aa66e0 =====
//   indirect: CALL dword ptr [EAX + 0x3c]
//   indirect: CALL dword ptr [EDX + 0x68]
//   indirect: CALL dword ptr [EDX + 0x50]
//   indirect: CALL dword ptr [EDI + 0xc]
//   indirect: CALL dword ptr [EAX + 0xc]
//   indirect: CALL dword ptr [EDI + 0x144]
//   indirect: CALL dword ptr [EDX + 0x18]
//   indirect: CALL dword ptr [ESI + 0xc0]
//   indirect: CALL dword ptr [EAX + 0x18]

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""BTCtrlObject"" */

undefined4 __fastcall CBTActor__InstantiateBehaviorTreeForEntity(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_11318380();
  if (cVar1 != '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar5 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  piVar2 = (int *)(**(code **)(iVar5 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    iVar5 = **(int **)m_pThis_exref;
    uVar3 = (**(code **)(*(int *)param_1[0x15] + 0xc))();
    piVar2 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar4 != (int *)0x0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        cVar1 = FUN_104969c0(4,&local_8);
        iVar5 = *piVar4;
        piVar2 = local_8;
        if (cVar1 == '\0') {
          piVar2 = (int *)0xffffffff;
        }
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a],piVar2);
        (**(code **)(iVar5 + 0xc0))(uVar3);
        return 2;
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar5 != 0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a]);
        FUN_10b24e30(uVar3);
        return 2;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x1d4))();
    if (cVar1 != '\0') {
      param_1[0x1c] = param_1[0x1c] + 1;
      *(undefined2 *)((int)param_1 + 0x72) = 0;
      FUN_10aa6af0(3,param_1 + 0x18);
      uVar3 = FUN_11317f30();
      cVar1 = FUN_10db7340(param_1[0x18],param_1[0x1b] + param_1[0x1c],(char)param_1[0x1a],uVar3);
      if (cVar1 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}


// ===== "BehaviorTreeBase" user: CMonster::OnDamageFireBTDamageEvent@1101b290 =====
//   indirect: CALL dword ptr [EAX + 0x2c]
//   indirect: CALL dword ptr [EDX + 0x288]
//   indirect: CALL dword ptr [EDX + 0xa8]
//   indirect: CALL dword ptr [EAX + 0x3c]
//   indirect: CALL dword ptr [EDX + 0x68]
//   indirect: CALL dword ptr [EDX + 0xc]
//   indirect: CALL dword ptr [EAX + 0x150]
//   indirect: CALL dword ptr [EDX + 0x70]
//   indirect: CALL dword ptr [EAX + 0x150]
//   indirect: CALL dword ptr [EDX + 0x38]
//   indirect: CALL dword ptr [EDX + 0x8]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EDX + 0x40]
//   indirect: CALL dword ptr [EAX + 0x44]
//   indirect: CALL dword ptr [EAX + 0x18]
//   indirect: CALL dword ptr [EDX + 0x78]
//   indirect: CALL dword ptr [EAX + 0x94]
//   indirect: CALL dword ptr [EDX + 0x94]
//   indirect: CALL dword ptr [EDX + 0x7c]
//   indirect: CALL dword ptr [ESI + 0x6c]
//   indirect: CALL dword ptr [EDX + 0x7c]
//   indirect: CALL dword ptr [EAX + 0x70]
//   indirect: CALL dword ptr [ESI + 0x6c]
//   indirect: CALL dword ptr [EAX + 0x4]
//   indirect: CALL dword ptr [EAX + 0xc]

/* [RE-R1]
   calls: ceil
   strings:
     ""MHOnDamage""
     ""BehaviorTreeBase""
     ""DamageEvent""
     ""EventName""
     ""AttackDir""
     ""HitDamage""
     ""HitPoint""
     ""AttackerID""
     ""AttackAttr"" */

void __thiscall CMonster__OnDamageFireBTDamageEvent(int param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  float local_18;
  float fStack_14;
  int *local_c;
  int *local_8;
  
  pfVar1 = param_3;
  pfVar7 = (float *)0x0;
  if (param_3[0x1a] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1a;
  }
  if (param_3[0x1c] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1c;
  }
  if (param_3[0x1e] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1e;
  }
  if (param_3[0x20] == 1.4013e-45) {
    pfVar7 = param_3 + 0x20;
  }
  if ((((param_2[3] != 0) &&
       (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2[3]),
       piVar3 != (int *)0x0)) &&
      (piVar3 = (int *)(**(code **)(*piVar3 + 0x288))(), piVar3 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar3 + 0xa8))(), iVar4 == 2)) {
    if (pfVar7 == (float *)0x0) {
      pfVar1[0x1b] = (float)((uint)pfVar1[0x1b] | 8);
      pfVar7 = pfVar1 + 0x1a;
    }
    else {
      pfVar7[1] = (float)((uint)pfVar7[1] | 8);
    }
  }
  if (pfVar7 == (float *)0x0) {
    pfVar1[0x1b] = 1.4013e-45;
    pfVar7 = pfVar1 + 0x1a;
  }
  if ((*(uint *)(param_1 + 0x30) & (uint)pfVar7[1]) != 0) {
    iVar4 = FUN_10ba9b00();
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2d4) != 0)) {
      *(undefined4 **)(*(int *)(iVar4 + 0x2d4) + 0xe8) = param_2;
      FUN_10dc0e00(pfVar1);
    }
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    iVar4 = (**(code **)(*piVar3 + 0xc))(*param_2);
    if (iVar4 != 0) {
      FUN_1101a1f0((undefined4 *)(param_1 + 100),param_2,pfVar1);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x70))(5,*(undefined4 *)(param_1 + 100),0);
      }
      param_3 = (float *)0x0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar3 == (int *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x38))();
        local_8 = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
          cVar2 = FUN_10a68b10("MHOnDamage",&param_3);
          if (cVar2 != '\0') {
            CBuffInfo__SerializeHitDamageMessage64(param_1 + 0x68,param_2,pfVar1);
            local_c = piVar3;
            piVar3 = (int *)(**(code **)(*piVar3 + 4))();
            iVar5 = (**(code **)(*piVar3 + 0x40))(param_3);
            if (iVar5 != 0) {
              FUN_10a69900(piVar3,&local_c,param_1 + 0x68);
              (**(code **)(*piVar3 + 0x44))();
            }
          }
        }
      }
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
      param_3 = (float *)piVar3;
      if (piVar3 != (int *)0x0) {
        FUN_113168d0("DamageEvent");
        (**(code **)(*piVar3 + 0x78))("EventName",local_c);
        piVar3 = *(int **)(param_1 + 0xc);
        puVar6 = (undefined8 *)(**(code **)(**(int **)(iVar4 + 0xc) + 0x94))();
        pfVar7 = (float *)(**(code **)(*piVar3 + 0x94))();
        piVar3 = (int *)param_3;
        local_18 = (float)*puVar6;
        fStack_14 = (float)((ulonglong)*puVar6 >> 0x20);
        (**(code **)((int)*param_3 + 0x7c))
                  ("AttackDir",CONCAT44(pfVar7[1] - fStack_14,*pfVar7 - local_18),
                   pfVar7[2] - *(float *)(puVar6 + 1));
        dVar10 = ceil((double)*pfVar1);
        iVar4 = *piVar3;
        dVar11 = ceil((double)(pfVar1[1] + DAT_11de9890 + pfVar1[2] + pfVar1[3] + pfVar1[4] +
                              pfVar1[5]));
        piVar3 = (int *)param_3;
        (**(code **)(iVar4 + 0x6c))("HitDamage",(int)dVar11 + (int)dVar10);
        (**(code **)(*piVar3 + 0x7c))("HitPoint",*(undefined8 *)(param_2 + 0x14),param_2[0x16]);
        (**(code **)(*piVar3 + 0x70))("AttackerID",*param_2);
        iVar4 = *piVar3;
        uVar8 = HitDescriptor__ComputeAttackAttrMask();
        (**(code **)(iVar4 + 0x6c))("AttackAttr",uVar8);
        if (piVar3[10] != 0) {
          piVar9 = (int *)FUN_100b4ca0(piVar3[9]);
          piVar3[0xb] = (int)piVar9;
          if (piVar9 != (int *)0x0) {
            FUN_104b57b0(0);
            (**(code **)(*piVar9 + 4))(1);
            FUN_104b5770();
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 0xc))();
      }
    }
    return;
  }
  *pfVar1 = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  return;
}

