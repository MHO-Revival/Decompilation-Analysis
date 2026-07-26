
/* [RE-R1]
   calls: memset
   strings:
     "u"groupId""
     "u"monsterId""
     "u"monsterCount""
     "u"regionId""
     "u"delay""
     "u"respawnAmount""
     "u"respawnDelay""
     "u"scale""
     "u"monsterId2""
     "u"monsterCount2"" */

void __thiscall CWildHuntSpawnGroupInfo__ReadConfig(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8354 & 1) == 0) {
    DAT_123a8354 = DAT_123a8354 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8354 & 2) == 0) {
    DAT_123a8354 = DAT_123a8354 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8350);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8358);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8350);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8358);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a8354 & 4) == 0) {
    DAT_123a8354 = DAT_123a8354 | 4;
    FUN_100f67b0(L"monsterId");
  }
  if ((DAT_123a8354 & 8) == 0) {
    DAT_123a8354 = DAT_123a8354 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a8368);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a836c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8368);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a836c);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a8354 & 0x10) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10;
    FUN_100f67b0(L"monsterCount");
  }
  if ((DAT_123a8354 & 0x20) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a837c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8380);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a837c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8380);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a8354 & 0x40) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40;
    FUN_100f67b0(L"regionId");
  }
  if (-1 < (char)DAT_123a8354) {
    DAT_123a8354 = DAT_123a8354 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a8390);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8394);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8390);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8394);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a8354 & 0x100) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x100;
    FUN_100f67b0(L"delay");
  }
  if ((DAT_123a8354 & 0x200) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a83a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83a8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83a8);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((DAT_123a8354 & 0x400) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x400;
    FUN_100f67b0(L"respawnAmount");
  }
  if ((DAT_123a8354 & 0x800) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a83b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83bc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83bc);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if ((DAT_123a8354 & 0x1000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x1000;
    FUN_100f67b0(L"respawnDelay");
  }
  if ((DAT_123a8354 & 0x2000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a83cc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83d0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83d0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  if ((DAT_123a8354 & 0x4000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x4000;
    FUN_100f67b0(L"scale");
  }
  if ((DAT_123a8354 & 0x8000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a83e0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83e4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a83e4);
    *(float *)(param_1 + 0x2c) = (float)fVar4;
  }
  if ((DAT_123a8354 & 0x10000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10000;
    FUN_100f67b0(L"monsterId2");
  }
  if ((DAT_123a8354 & 0x20000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a83f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83f8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83f8);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((DAT_123a8354 & 0x40000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40000;
    FUN_100f67b0(L"monsterCount2");
  }
  if ((DAT_123a8354 & 0x80000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a8408);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a840c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8408);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a840c);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  if ((DAT_123a8354 & 0x100000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x100000;
    FUN_100f67b0(L"regionId2");
  }
  if ((DAT_123a8354 & 0x200000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a841c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8420);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a841c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8420);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  if ((DAT_123a8354 & 0x400000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x400000;
    FUN_100f67b0(L"delay2");
  }
  if ((DAT_123a8354 & 0x800000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a8430);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8434);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8430);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8434);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  if ((DAT_123a8354 & 0x1000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x1000000;
    FUN_100f67b0(L"respawnAmount2");
  }
  if ((DAT_123a8354 & 0x2000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a8444);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8448);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8444);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8448);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
  }
  if ((DAT_123a8354 & 0x4000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x4000000;
    FUN_100f67b0(L"respawnDelay2");
  }
  if ((DAT_123a8354 & 0x8000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a8458);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a845c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8458);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a845c);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  if ((DAT_123a8354 & 0x10000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10000000;
    FUN_100f67b0(L"scale2");
  }
  if ((DAT_123a8354 & 0x20000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a846c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8470);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a846c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a8470);
    *(float *)(param_1 + 0x48) = (float)fVar4;
  }
  if ((DAT_123a8354 & 0x40000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40000000;
    FUN_100f67b0(L"monsterId3");
  }
  if (-1 < (int)DAT_123a8354) {
    DAT_123a8354 = DAT_123a8354 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a8480);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8484);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8480);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8484);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  if ((DAT_123a8498 & 1) == 0) {
    DAT_123a8498 = DAT_123a8498 | 1;
    FUN_100f67b0(L"monsterCount3");
  }
  if ((DAT_123a8498 & 2) == 0) {
    DAT_123a8498 = DAT_123a8498 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8494);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a849c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8494);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a849c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  if ((DAT_123a8498 & 4) == 0) {
    DAT_123a8498 = DAT_123a8498 | 4;
    FUN_100f67b0(L"regionId3");
  }
  if ((DAT_123a8498 & 8) == 0) {
    DAT_123a8498 = DAT_123a8498 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a84ac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84b0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84b0);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  if ((DAT_123a8498 & 0x10) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x10;
    FUN_100f67b0(L"delay3");
  }
  if ((DAT_123a8498 & 0x20) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a84c0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84c4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84c4);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  if ((DAT_123a8498 & 0x40) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x40;
    FUN_100f67b0(L"respawnAmount3");
  }
  if (-1 < (char)DAT_123a8498) {
    DAT_123a8498 = DAT_123a8498 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a84d4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84d8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84d8);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if ((DAT_123a8498 & 0x100) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x100;
    FUN_100f67b0(L"respawnDelay3");
  }
  if ((DAT_123a8498 & 0x200) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a84e8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84ec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84ec);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  if ((DAT_123a8498 & 0x400) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x400;
    FUN_100f67b0(L"scale3");
  }
  if ((DAT_123a8498 & 0x800) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a84fc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8500);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a8500);
  *(float *)(param_1 + 100) = (float)fVar4;
  FUN_11a89daa();
  return;
}

