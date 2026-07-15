/* ===== FUN_11a17f70 @ 11a17f70  size=20 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

void FUN_11a17f70(void)

{
  CInfoManager__GetByName(0,"CPetSkillInfo",0);
  return;
}



/* ===== FUN_11a23370 @ 11a23370  size=3449 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"spawnGroupId"
//   u"msgID"
//   u"logic"
//   u"targetMonsterID"
//   u"targetCount"
//   u"TargMsgID"
//   u"targetMonsterID2"
//   u"targetCount2"
//   u"TargMsgID2"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"spawnGroupId""
     "u"msgID""
     "u"logic""
     "u"targetMonsterID""
     "u"targetCount""
     "u"TargMsgID""
     "u"targetMonsterID2""
     "u"targetCount2""
     "u"TargMsgID2"" */

void __thiscall FUN_11a23370(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8514 & 1) == 0) {
    DAT_123a8514 = DAT_123a8514 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8514 & 2) == 0) {
    DAT_123a8514 = DAT_123a8514 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a8510);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8518);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8510);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8518);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a8514 & 4) == 0) {
    DAT_123a8514 = DAT_123a8514 | 4;
    FUN_100f67b0(L"spawnGroupId");
  }
  if ((DAT_123a8514 & 8) == 0) {
    DAT_123a8514 = DAT_123a8514 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a8528);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a852c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8528);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_44c = (**(code **)(*param_2 + 0x20))(&DAT_123a852c);
  }
  if ((DAT_123a8514 & 0x10) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x10;
    FUN_100f67b0(L"msgID");
  }
  if ((DAT_123a8514 & 0x20) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a853c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8540);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a853c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_444 = (**(code **)(*param_2 + 0x20))(&DAT_123a8540);
  }
  if ((DAT_123a8514 & 0x40) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x40;
    FUN_100f67b0(L"logic");
  }
  if (-1 < (char)DAT_123a8514) {
    DAT_123a8514 = DAT_123a8514 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a8550);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8554);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8550);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_448 = (**(code **)(*param_2 + 0x20))(&DAT_123a8554);
  }
  if ((DAT_123a8514 & 0x100) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x100;
    FUN_100f67b0(L"targetMonsterID");
  }
  if ((DAT_123a8514 & 0x200) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a8564);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8568);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8564);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_440 = (**(code **)(*param_2 + 0x20))(&DAT_123a8568);
  }
  if ((DAT_123a8514 & 0x400) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x400;
    FUN_100f67b0(L"targetCount");
  }
  if ((DAT_123a8514 & 0x800) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a8578);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a857c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8578);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_43c = (**(code **)(*param_2 + 0x20))(&DAT_123a857c);
  }
  if ((DAT_123a8514 & 0x1000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x1000;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a8514 & 0x2000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a858c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8590);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a858c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_438 = (**(code **)(*param_2 + 0x20))(&DAT_123a8590);
  }
  if ((DAT_123a8514 & 0x4000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x4000;
    FUN_100f67b0(L"targetMonsterID2");
  }
  if ((DAT_123a8514 & 0x8000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a85a0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a85a4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a85a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_434 = (**(code **)(*param_2 + 0x20))(&DAT_123a85a4);
  }
  if ((DAT_123a8514 & 0x10000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x10000;
    FUN_100f67b0(L"targetCount2");
  }
  if ((DAT_123a8514 & 0x20000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a85b4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a85b8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a85b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_430 = (**(code **)(*param_2 + 0x20))(&DAT_123a85b8);
  }
  if ((DAT_123a8514 & 0x40000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x40000;
    FUN_100f67b0(L"TargMsgID2");
  }
  if ((DAT_123a8514 & 0x80000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a85c8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a85cc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a85c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a85cc);
  }
  if ((DAT_123a8514 & 0x100000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x100000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a8514 & 0x200000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a85dc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a85e0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a85dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a85e0);
  }
  if ((DAT_123a8514 & 0x400000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x400000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a8514 & 0x800000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a85f0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a85f4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a85f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a85f4);
  }
  if ((DAT_123a8514 & 0x1000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x1000000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a8514 & 0x2000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a8604);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8608);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8604);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8608);
  }
  if ((DAT_123a8514 & 0x4000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x4000000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a8514 & 0x8000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_123a8618);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a861c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8618);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a861c);
  }
  if ((DAT_123a8514 & 0x10000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x10000000;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a8514 & 0x20000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x20000000;
    iVar3 = FUN_100e1cb0(DAT_123a862c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8630);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a862c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8630);
  }
  if ((DAT_123a8514 & 0x40000000) == 0) {
    DAT_123a8514 = DAT_123a8514 | 0x40000000;
    FUN_100f67b0(L"Time3");
  }
  if (-1 < (int)DAT_123a8514) {
    DAT_123a8514 = DAT_123a8514 | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_123a8640);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8644);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8640);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8644);
  }
  if ((DAT_123a8658 & 1) == 0) {
    DAT_123a8658 = DAT_123a8658 | 1;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a8658 & 2) == 0) {
    DAT_123a8658 = DAT_123a8658 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a8654);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a865c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8654);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a865c);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_44c;
      puVar1[1] = uStack_448;
      puVar1[2] = uStack_444;
      puVar1[3] = uStack_440;
      puVar1[4] = local_43c;
      puVar1[5] = uStack_438;
      puVar1[6] = uStack_434;
      puVar1[7] = uStack_430;
      puVar1[8] = local_42c;
      puVar1[9] = uStack_428;
      puVar1[10] = uStack_424;
      puVar1[0xb] = uStack_420;
      puVar1[0xc] = local_41c;
      puVar1[0xd] = uStack_418;
      puVar1[0xe] = uStack_414;
      puVar1[0xf] = uStack_410;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x40;
    FUN_11a89daa();
    return;
  }
  FUN_11a241d0(puVar1,&local_44c,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a24910 @ 11a24910  size=2661 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"itemId"
//   u"itemNum"
//   u"spawnGroupId"
//   u"msgID"
//   u"TargMsgID"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"itemId""
     "u"itemNum""
     "u"spawnGroupId""
     "u"msgID""
     "u"TargMsgID""
     "u"MonsterBuffID1""
     "u"MonsterBuffID2""
     "u"MonsterBuffID3""
     "u"Time1"" */

void __thiscall FUN_11a24910(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8670 & 1) == 0) {
    DAT_123a8670 = DAT_123a8670 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8670 & 2) == 0) {
    DAT_123a8670 = DAT_123a8670 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a866c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8674);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a866c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8674);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a8670 & 4) == 0) {
    DAT_123a8670 = DAT_123a8670 | 4;
    FUN_100f67b0(L"itemId");
  }
  if ((DAT_123a8670 & 8) == 0) {
    DAT_123a8670 = DAT_123a8670 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a8684);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8688);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8684);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_438 = (**(code **)(*param_2 + 0x20))(&DAT_123a8688);
  }
  if ((DAT_123a8670 & 0x10) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x10;
    FUN_100f67b0(L"itemNum");
  }
  if ((DAT_123a8670 & 0x20) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a8698);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a869c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8698);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_434 = (**(code **)(*param_2 + 0x20))(&DAT_123a869c);
  }
  if ((DAT_123a8670 & 0x40) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x40;
    FUN_100f67b0(L"spawnGroupId");
  }
  if (-1 < (char)DAT_123a8670) {
    DAT_123a8670 = DAT_123a8670 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a86ac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a86b0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a86ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_43c = (**(code **)(*param_2 + 0x20))(&DAT_123a86b0);
  }
  if ((DAT_123a8670 & 0x100) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x100;
    FUN_100f67b0(L"msgID");
  }
  if ((DAT_123a8670 & 0x200) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a86c0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a86c4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a86c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_430 = (**(code **)(*param_2 + 0x20))(&DAT_123a86c4);
  }
  if ((DAT_123a8670 & 0x400) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x400;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a8670 & 0x800) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a86d4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a86d8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a86d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a86d8);
  }
  if ((DAT_123a8670 & 0x1000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x1000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a8670 & 0x2000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a86e8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a86ec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a86e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a86ec);
  }
  if ((DAT_123a8670 & 0x4000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x4000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a8670 & 0x8000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a86fc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8700);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a86fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8700);
  }
  if ((DAT_123a8670 & 0x10000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x10000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a8670 & 0x20000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a8710);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8714);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8710);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8714);
  }
  if ((DAT_123a8670 & 0x40000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x40000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a8670 & 0x80000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a8724);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8728);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8724);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8728);
  }
  if ((DAT_123a8670 & 0x100000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x100000;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a8670 & 0x200000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a8738);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a873c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8738);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a873c);
  }
  if ((DAT_123a8670 & 0x400000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x400000;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a8670 & 0x800000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a874c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8750);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a874c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8750);
  }
  if ((DAT_123a8670 & 0x1000000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x1000000;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a8670 & 0x2000000) == 0) {
    DAT_123a8670 = DAT_123a8670 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a8760);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8764);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8760);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a8764);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_43c;
      puVar1[1] = uStack_438;
      puVar1[2] = uStack_434;
      puVar1[3] = uStack_430;
      puVar1[4] = local_42c;
      puVar1[5] = uStack_428;
      puVar1[6] = uStack_424;
      puVar1[7] = uStack_420;
      puVar1[8] = local_41c;
      puVar1[9] = uStack_418;
      puVar1[10] = uStack_414;
      puVar1[0xb] = uStack_410;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x30;
    FUN_11a89daa();
    return;
  }
  FUN_11a25470(puVar1,&local_43c,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a26090 @ 11a26090  size=3695 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"spawnGroupId"
//   u"logic"
//   u"msgID"
//   u"targetMonsterID"
//   u"targetPartName"
//   u"targetBreakLev"
//   u"TargMsgID"
//   u"targetPartName2"
//   u"targetBreakLev2"
//   u"TargMsgID2"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"spawnGroupId""
     "u"logic""
     "u"msgID""
     "u"targetMonsterID""
     "u"targetPartName""
     "u"targetBreakLev""
     "u"TargMsgID""
     "u"targetPartName2""
     "u"targetBreakLev2"" */

void __thiscall FUN_11a26090(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_475;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined1 local_464 [16];
  undefined1 *local_454;
  undefined1 *local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined1 local_444 [16];
  undefined1 *local_434;
  undefined1 *local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8778 & 1) == 0) {
    DAT_123a8778 = DAT_123a8778 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8778 & 2) == 0) {
    DAT_123a8778 = DAT_123a8778 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8774);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a877c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8774);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a877c);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  local_454 = local_464;
  local_464[0] = 0;
  local_434 = local_444;
  local_444[0] = 0;
  local_450 = local_454;
  local_430 = local_434;
  if ((DAT_123a8778 & 4) == 0) {
    DAT_123a8778 = DAT_123a8778 | 4;
    FUN_100f67b0(L"spawnGroupId");
  }
  if ((DAT_123a8778 & 8) == 0) {
    DAT_123a8778 = DAT_123a8778 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a878c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8790);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a878c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_474 = (**(code **)(*param_2 + 0x20))(&DAT_123a8790);
  }
  if ((DAT_123a8778 & 0x10) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x10;
    FUN_100f67b0(L"logic");
  }
  if ((DAT_123a8778 & 0x20) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a87a0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a87a4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a87a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_470 = (**(code **)(*param_2 + 0x20))(&DAT_123a87a4);
  }
  if ((DAT_123a8778 & 0x40) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x40;
    FUN_100f67b0(L"msgID");
  }
  if (-1 < (char)DAT_123a8778) {
    DAT_123a8778 = DAT_123a8778 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a87b4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a87b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a87b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_46c = (**(code **)(*param_2 + 0x20))(&DAT_123a87b8);
  }
  if ((DAT_123a8778 & 0x100) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x100;
    FUN_100f67b0(L"targetMonsterID");
  }
  if ((DAT_123a8778 & 0x200) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a87c8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a87cc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a87c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_468 = (**(code **)(*param_2 + 0x20))(&DAT_123a87cc);
  }
  if ((DAT_123a8778 & 0x400) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x400;
    FUN_100f67b0(L"targetPartName");
  }
  if ((DAT_123a8778 & 0x800) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a87dc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a87e0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a87dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_464,&DAT_123a87e0);
  }
  if ((DAT_123a8778 & 0x1000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x1000;
    FUN_100f67b0(L"targetBreakLev");
  }
  if ((DAT_123a8778 & 0x2000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a87f0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a87f4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a87f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_44c = (**(code **)(*param_2 + 0x20))(&DAT_123a87f4);
  }
  if ((DAT_123a8778 & 0x4000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x4000;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a8778 & 0x8000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a8804);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8808);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8804);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_448 = (**(code **)(*param_2 + 0x20))(&DAT_123a8808);
  }
  if ((DAT_123a8778 & 0x10000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x10000;
    FUN_100f67b0(L"targetPartName2");
  }
  if ((DAT_123a8778 & 0x20000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a8818);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a881c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8818);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_444,&DAT_123a881c);
  }
  if ((DAT_123a8778 & 0x40000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x40000;
    FUN_100f67b0(L"targetBreakLev2");
  }
  if ((DAT_123a8778 & 0x80000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a882c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8830);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a882c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a8830);
  }
  if ((DAT_123a8778 & 0x100000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x100000;
    FUN_100f67b0(L"TargMsgID2");
  }
  if ((DAT_123a8778 & 0x200000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a8840);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8844);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8840);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a8844);
  }
  if ((DAT_123a8778 & 0x400000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x400000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a8778 & 0x800000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a8854);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8858);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8854);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8858);
  }
  if ((DAT_123a8778 & 0x1000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x1000000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a8778 & 0x2000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a8868);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a886c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8868);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a886c);
  }
  if ((DAT_123a8778 & 0x4000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x4000000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a8778 & 0x8000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a887c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8880);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a887c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8880);
  }
  if ((DAT_123a8778 & 0x10000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x10000000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a8778 & 0x20000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a8890);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8894);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8890);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8894);
  }
  if ((DAT_123a8778 & 0x40000000) == 0) {
    DAT_123a8778 = DAT_123a8778 | 0x40000000;
    FUN_100f67b0(L"Time2");
  }
  if (-1 < (int)DAT_123a8778) {
    DAT_123a8778 = DAT_123a8778 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a88a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a88a8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a88a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a88a8);
  }
  if ((DAT_123a88bc & 1) == 0) {
    DAT_123a88bc = DAT_123a88bc | 1;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a88bc & 2) == 0) {
    DAT_123a88bc = DAT_123a88bc | 2;
    iVar2 = FUN_100e1cb0(DAT_123a88b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a88c0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a88b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a88c0);
  }
  if ((DAT_123a88bc & 4) == 0) {
    DAT_123a88bc = DAT_123a88bc | 4;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a88bc & 8) == 0) {
    DAT_123a88bc = DAT_123a88bc | 8;
    iVar2 = FUN_100e1cb0(DAT_123a88d0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a88d4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a88d0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_40c = (**(code **)(*param_2 + 0x20))(&DAT_123a88d4);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == *(int *)(param_1 + 0x1c)) {
    FUN_11a27030(iVar2,&local_474,&local_475,1,1);
  }
  else {
    if (iVar2 != 0) {
      FUN_11a25d00(&local_474);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x6c;
  }
  if ((local_430 != local_444) && (local_430 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_430);
  }
  if ((local_450 != local_464) && (local_450 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_450);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a27780 @ 11a27780  size=2661 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"spawnGroupId"
//   u"targetMonsterID"
//   u"targetStateAbnormal"
//   u"msgID"
//   u"TargMsgID"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"spawnGroupId""
     "u"targetMonsterID""
     "u"targetStateAbnormal""
     "u"msgID""
     "u"TargMsgID""
     "u"MonsterBuffID1""
     "u"MonsterBuffID2""
     "u"MonsterBuffID3""
     "u"Time1"" */

void __thiscall FUN_11a27780(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a88e8 & 1) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a88e8 & 2) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a88e4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a88ec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a88e4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a88ec);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a88e8 & 4) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 4;
    FUN_100f67b0(L"spawnGroupId");
  }
  if ((DAT_123a88e8 & 8) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a88fc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8900);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a88fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_43c = (**(code **)(*param_2 + 0x20))(&DAT_123a8900);
  }
  if ((DAT_123a88e8 & 0x10) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x10;
    FUN_100f67b0(L"targetMonsterID");
  }
  if ((DAT_123a88e8 & 0x20) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a8910);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8914);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8910);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_438 = (**(code **)(*param_2 + 0x20))(&DAT_123a8914);
  }
  if ((DAT_123a88e8 & 0x40) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x40;
    FUN_100f67b0(L"targetStateAbnormal");
  }
  if (-1 < (char)DAT_123a88e8) {
    DAT_123a88e8 = DAT_123a88e8 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a8924);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8928);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8924);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_434 = (**(code **)(*param_2 + 0x20))(&DAT_123a8928);
  }
  if ((DAT_123a88e8 & 0x100) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x100;
    FUN_100f67b0(L"msgID");
  }
  if ((DAT_123a88e8 & 0x200) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a8938);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a893c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8938);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_430 = (**(code **)(*param_2 + 0x20))(&DAT_123a893c);
  }
  if ((DAT_123a88e8 & 0x400) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x400;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a88e8 & 0x800) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a894c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8950);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a894c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a8950);
  }
  if ((DAT_123a88e8 & 0x1000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x1000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a88e8 & 0x2000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a8960);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8964);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8960);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a8964);
  }
  if ((DAT_123a88e8 & 0x4000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x4000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a88e8 & 0x8000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a8974);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8978);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8974);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8978);
  }
  if ((DAT_123a88e8 & 0x10000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x10000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a88e8 & 0x20000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a8988);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a898c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8988);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a898c);
  }
  if ((DAT_123a88e8 & 0x40000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x40000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a88e8 & 0x80000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a899c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a89a0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a899c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a89a0);
  }
  if ((DAT_123a88e8 & 0x100000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x100000;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a88e8 & 0x200000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a89b0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a89b4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a89b0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a89b4);
  }
  if ((DAT_123a88e8 & 0x400000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x400000;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a88e8 & 0x800000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a89c4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a89c8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a89c4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a89c8);
  }
  if ((DAT_123a88e8 & 0x1000000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x1000000;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a88e8 & 0x2000000) == 0) {
    DAT_123a88e8 = DAT_123a88e8 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a89d8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a89dc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a89d8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a89dc);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_43c;
      puVar1[1] = uStack_438;
      puVar1[2] = uStack_434;
      puVar1[3] = uStack_430;
      puVar1[4] = local_42c;
      puVar1[5] = uStack_428;
      puVar1[6] = uStack_424;
      puVar1[7] = uStack_420;
      puVar1[8] = local_41c;
      puVar1[9] = uStack_418;
      puVar1[10] = uStack_414;
      puVar1[0xb] = uStack_410;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x30;
    FUN_11a89daa();
    return;
  }
  FUN_11a282e0(puVar1,&local_43c,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a28a80 @ 11a28a80  size=2475 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"spawnGroupId"
//   u"targetMonsterID"
//   u"msgID"
//   u"TargMsgID"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"spawnGroupId""
     "u"targetMonsterID""
     "u"msgID""
     "u"TargMsgID""
     "u"MonsterBuffID1""
     "u"MonsterBuffID2""
     "u"MonsterBuffID3""
     "u"Time1""
     "u"Time2"" */

void __thiscall FUN_11a28a80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a89f0 & 1) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a89f0 & 2) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a89ec);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a89f4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a89ec);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a89f4);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a89f0 & 4) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 4;
    FUN_100f67b0(L"spawnGroupId");
  }
  if ((DAT_123a89f0 & 8) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a8a04);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a08);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a04);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_438 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a08);
  }
  if ((DAT_123a89f0 & 0x10) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x10;
    FUN_100f67b0(L"targetMonsterID");
  }
  if ((DAT_123a89f0 & 0x20) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a8a18);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a1c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a18);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_434 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a1c);
  }
  if ((DAT_123a89f0 & 0x40) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x40;
    FUN_100f67b0(L"msgID");
  }
  if (-1 < (char)DAT_123a89f0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a8a2c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a30);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a2c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_430 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a30);
  }
  if ((DAT_123a89f0 & 0x100) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x100;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a89f0 & 0x200) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a8a40);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a44);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a40);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a8a44);
  }
  if ((DAT_123a89f0 & 0x400) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x400;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a89f0 & 0x800) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a8a54);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a58);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a54);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a58);
  }
  if ((DAT_123a89f0 & 0x1000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x1000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a89f0 & 0x2000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a8a68);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a6c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a68);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a6c);
  }
  if ((DAT_123a89f0 & 0x4000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x4000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a89f0 & 0x8000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a8a7c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a80);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a7c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8a80);
  }
  if ((DAT_123a89f0 & 0x10000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x10000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a89f0 & 0x20000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a8a90);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8a94);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8a90);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8a94);
  }
  if ((DAT_123a89f0 & 0x40000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x40000;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a89f0 & 0x80000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a8aa4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8aa8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8aa4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8aa8);
  }
  if ((DAT_123a89f0 & 0x100000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x100000;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a89f0 & 0x200000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a8ab8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8abc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ab8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8abc);
  }
  if ((DAT_123a89f0 & 0x400000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x400000;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a89f0 & 0x800000) == 0) {
    DAT_123a89f0 = DAT_123a89f0 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a8acc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ad0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8acc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ad0);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_438;
      puVar1[1] = uStack_434;
      puVar1[2] = uStack_430;
      puVar1[3] = uStack_42c;
      puVar1[4] = local_428;
      puVar1[5] = uStack_424;
      puVar1[6] = uStack_420;
      puVar1[7] = uStack_41c;
      *(ulonglong *)(puVar1 + 8) = CONCAT44(uStack_414,local_418);
      puVar1[10] = local_410;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x2c;
    FUN_11a89daa();
    return;
  }
  FUN_11a29520(puVar1,&local_438,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a2a160 @ 11a2a160  size=3882 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"spawnGroupId"
//   u"logic"
//   u"msgID"
//   u"wrongHitCheck"
//   u"targetMonsterID"
//   u"targetPartName"
//   u"targetPartCount"
//   u"TargMsgID"
//   u"targetPartName2"
//   u"targetPartCount2"
//   u"TargMsgID2"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"spawnGroupId""
     "u"logic""
     "u"msgID""
     "u"wrongHitCheck""
     "u"targetMonsterID""
     "u"targetPartName""
     "u"targetPartCount""
     "u"TargMsgID""
     "u"targetPartName2"" */

void __thiscall FUN_11a2a160(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_479;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined1 local_464 [16];
  undefined1 *local_454;
  undefined1 *local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined1 local_444 [16];
  undefined1 *local_434;
  undefined1 *local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8ae4 & 1) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8ae4 & 2) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8ae0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ae8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8ae0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ae8);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  local_454 = local_464;
  local_464[0] = 0;
  local_434 = local_444;
  local_444[0] = 0;
  local_450 = local_454;
  local_430 = local_434;
  if ((DAT_123a8ae4 & 4) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 4;
    FUN_100f67b0(L"spawnGroupId");
  }
  if ((DAT_123a8ae4 & 8) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a8af8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8afc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8af8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_478 = (**(code **)(*param_2 + 0x20))(&DAT_123a8afc);
  }
  if ((DAT_123a8ae4 & 0x10) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x10;
    FUN_100f67b0(L"logic");
  }
  if ((DAT_123a8ae4 & 0x20) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a8b0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b10);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b0c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_474 = (**(code **)(*param_2 + 0x20))(&DAT_123a8b10);
  }
  if ((DAT_123a8ae4 & 0x40) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x40;
    FUN_100f67b0(L"msgID");
  }
  if (-1 < (char)DAT_123a8ae4) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a8b20);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b24);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b20);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_470 = (**(code **)(*param_2 + 0x20))(&DAT_123a8b24);
  }
  if ((DAT_123a8ae4 & 0x100) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x100;
    FUN_100f67b0(L"wrongHitCheck");
  }
  if ((DAT_123a8ae4 & 0x200) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a8b34);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b38);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b34);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_46c = (**(code **)(*param_2 + 0x20))(&DAT_123a8b38);
  }
  if ((DAT_123a8ae4 & 0x400) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x400;
    FUN_100f67b0(L"targetMonsterID");
  }
  if ((DAT_123a8ae4 & 0x800) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a8b48);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b4c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b48);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_468 = (**(code **)(*param_2 + 0x20))(&DAT_123a8b4c);
  }
  if ((DAT_123a8ae4 & 0x1000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x1000;
    FUN_100f67b0(L"targetPartName");
  }
  if ((DAT_123a8ae4 & 0x2000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a8b5c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b60);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_464,&DAT_123a8b60);
  }
  if ((DAT_123a8ae4 & 0x4000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x4000;
    FUN_100f67b0(L"targetPartCount");
  }
  if ((DAT_123a8ae4 & 0x8000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a8b70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b74);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_44c = (**(code **)(*param_2 + 0x20))(&DAT_123a8b74);
  }
  if ((DAT_123a8ae4 & 0x10000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x10000;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a8ae4 & 0x20000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a8b84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b88);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_448 = (**(code **)(*param_2 + 0x20))(&DAT_123a8b88);
  }
  if ((DAT_123a8ae4 & 0x40000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x40000;
    FUN_100f67b0(L"targetPartName2");
  }
  if ((DAT_123a8ae4 & 0x80000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a8b98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8b9c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8b98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_444,&DAT_123a8b9c);
  }
  if ((DAT_123a8ae4 & 0x100000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x100000;
    FUN_100f67b0(L"targetPartCount2");
  }
  if ((DAT_123a8ae4 & 0x200000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a8bac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8bb0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8bac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a8bb0);
  }
  if ((DAT_123a8ae4 & 0x400000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x400000;
    FUN_100f67b0(L"TargMsgID2");
  }
  if ((DAT_123a8ae4 & 0x800000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a8bc0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8bc4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8bc0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a8bc4);
  }
  if ((DAT_123a8ae4 & 0x1000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x1000000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a8ae4 & 0x2000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a8bd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8bd8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8bd4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8bd8);
  }
  if ((DAT_123a8ae4 & 0x4000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x4000000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a8ae4 & 0x8000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a8be8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8bec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8be8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8bec);
  }
  if ((DAT_123a8ae4 & 0x10000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x10000000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a8ae4 & 0x20000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a8bfc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c00);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8bfc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8c00);
  }
  if ((DAT_123a8ae4 & 0x40000000) == 0) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x40000000;
    FUN_100f67b0(L"Time1");
  }
  if (-1 < (int)DAT_123a8ae4) {
    DAT_123a8ae4 = DAT_123a8ae4 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a8c10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c14);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8c10);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c14);
  }
  if ((DAT_123a8c28 & 1) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 1;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a8c28 & 2) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8c24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c2c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8c24);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c2c);
  }
  if ((DAT_123a8c28 & 4) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 4;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a8c28 & 8) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a8c3c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c40);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8c3c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c40);
  }
  if ((DAT_123a8c28 & 0x10) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 0x10;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a8c28 & 0x20) == 0) {
    DAT_123a8c28 = DAT_123a8c28 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a8c50);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c54);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8c50);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_40c = (**(code **)(*param_2 + 0x20))(&DAT_123a8c54);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == *(int *)(param_1 + 0x1c)) {
    FUN_11a2b1c0(iVar2,&local_478,&local_479,1,1);
  }
  else {
    if (iVar2 != 0) {
      FUN_11a29dd0(&local_478);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x70;
  }
  if ((local_430 != local_444) && (local_430 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_430);
  }
  if ((local_450 != local_464) && (local_450 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_450);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a2b5a0 @ 11a2b5a0  size=2661 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"itemId"
//   u"itemNum"
//   u"spawnGroupId"
//   u"msgID"
//   u"TargMsgID"
//   u"MonsterBuffID1"
//   u"MonsterBuffID2"
//   u"MonsterBuffID3"
//   u"Time1"
//   u"Time2"
//   u"Time3"
//   u"AlertMsgID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"itemId""
     "u"itemNum""
     "u"spawnGroupId""
     "u"msgID""
     "u"TargMsgID""
     "u"MonsterBuffID1""
     "u"MonsterBuffID2""
     "u"MonsterBuffID3""
     "u"Time1"" */

void __thiscall FUN_11a2b5a0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8c68 & 1) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8c68 & 2) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a8c64);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c6c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8c64);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c6c);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a8c68 & 4) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 4;
    FUN_100f67b0(L"itemId");
  }
  if ((DAT_123a8c68 & 8) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a8c7c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c80);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8c7c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_438 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c80);
  }
  if ((DAT_123a8c68 & 0x10) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x10;
    FUN_100f67b0(L"itemNum");
  }
  if ((DAT_123a8c68 & 0x20) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a8c90);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8c94);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8c90);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_434 = (**(code **)(*param_2 + 0x20))(&DAT_123a8c94);
  }
  if ((DAT_123a8c68 & 0x40) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x40;
    FUN_100f67b0(L"spawnGroupId");
  }
  if (-1 < (char)DAT_123a8c68) {
    DAT_123a8c68 = DAT_123a8c68 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a8ca4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ca8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ca4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_43c = (**(code **)(*param_2 + 0x20))(&DAT_123a8ca8);
  }
  if ((DAT_123a8c68 & 0x100) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x100;
    FUN_100f67b0(L"msgID");
  }
  if ((DAT_123a8c68 & 0x200) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a8cb8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8cbc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8cb8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_430 = (**(code **)(*param_2 + 0x20))(&DAT_123a8cbc);
  }
  if ((DAT_123a8c68 & 0x400) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x400;
    FUN_100f67b0(L"TargMsgID");
  }
  if ((DAT_123a8c68 & 0x800) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a8ccc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8cd0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ccc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_42c = (**(code **)(*param_2 + 0x20))(&DAT_123a8cd0);
  }
  if ((DAT_123a8c68 & 0x1000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x1000;
    FUN_100f67b0(L"MonsterBuffID1");
  }
  if ((DAT_123a8c68 & 0x2000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a8ce0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ce4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ce0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_428 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ce4);
  }
  if ((DAT_123a8c68 & 0x4000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x4000;
    FUN_100f67b0(L"MonsterBuffID2");
  }
  if ((DAT_123a8c68 & 0x8000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a8cf4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8cf8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8cf4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_424 = (**(code **)(*param_2 + 0x20))(&DAT_123a8cf8);
  }
  if ((DAT_123a8c68 & 0x10000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x10000;
    FUN_100f67b0(L"MonsterBuffID3");
  }
  if ((DAT_123a8c68 & 0x20000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a8d08);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d0c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8d08);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d0c);
  }
  if ((DAT_123a8c68 & 0x40000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x40000;
    FUN_100f67b0(L"Time1");
  }
  if ((DAT_123a8c68 & 0x80000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a8d1c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d20);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8d1c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8d20);
  }
  if ((DAT_123a8c68 & 0x100000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x100000;
    FUN_100f67b0(L"Time2");
  }
  if ((DAT_123a8c68 & 0x200000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a8d30);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d34);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8d30);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d34);
  }
  if ((DAT_123a8c68 & 0x400000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x400000;
    FUN_100f67b0(L"Time3");
  }
  if ((DAT_123a8c68 & 0x800000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a8d44);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d48);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8d44);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d48);
  }
  if ((DAT_123a8c68 & 0x1000000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x1000000;
    FUN_100f67b0(L"AlertMsgID");
  }
  if ((DAT_123a8c68 & 0x2000000) == 0) {
    DAT_123a8c68 = DAT_123a8c68 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a8d58);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d5c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8d58);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d5c);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_43c;
      puVar1[1] = uStack_438;
      puVar1[2] = uStack_434;
      puVar1[3] = uStack_430;
      puVar1[4] = local_42c;
      puVar1[5] = uStack_428;
      puVar1[6] = uStack_424;
      puVar1[7] = uStack_420;
      puVar1[8] = local_41c;
      puVar1[9] = uStack_418;
      puVar1[10] = uStack_414;
      puVar1[0xb] = uStack_410;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x30;
    FUN_11a89daa();
    return;
  }
  FUN_11a25470(puVar1,&local_43c,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a2d0b0 @ 11a2d0b0  size=1261 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"itemId"
//   u"minCount"
//   u"maxCount"
//   u"dropProbability"
//   u"BuffID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"itemId""
     "u"minCount""
     "u"maxCount""
     "u"dropProbability""
     "u"BuffID"" */

void __thiscall FUN_11a2d0b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8eb4 & 1) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8eb4 & 2) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a8eb0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8eb8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8eb0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8eb8);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a8eb4 & 4) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 4;
    FUN_100f67b0(L"itemId");
  }
  if ((DAT_123a8eb4 & 8) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a8ec8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ecc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ec8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_420 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ecc);
  }
  if ((DAT_123a8eb4 & 0x10) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x10;
    FUN_100f67b0(L"minCount");
  }
  if ((DAT_123a8eb4 & 0x20) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a8edc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ee0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8edc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_41c = (**(code **)(*param_2 + 0x20))(&DAT_123a8ee0);
  }
  if ((DAT_123a8eb4 & 0x40) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x40;
    FUN_100f67b0(L"maxCount");
  }
  if (-1 < (char)DAT_123a8eb4) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a8ef0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ef4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8ef0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_418 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ef4);
  }
  if ((DAT_123a8eb4 & 0x100) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x100;
    FUN_100f67b0(L"dropProbability");
  }
  if ((DAT_123a8eb4 & 0x200) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a8f04);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8f08);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8f04);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uStack_414 = (**(code **)(*param_2 + 0x20))(&DAT_123a8f08);
  }
  if ((DAT_123a8eb4 & 0x400) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x400;
    FUN_100f67b0(L"BuffID");
  }
  if ((DAT_123a8eb4 & 0x800) == 0) {
    DAT_123a8eb4 = DAT_123a8eb4 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a8f18);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a8f1c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a8f18);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (**(code **)(*param_2 + 0x20))(&DAT_123a8f1c);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != *(undefined4 **)(param_1 + 0x1c)) {
    *puVar1 = local_420;
    puVar1[1] = uStack_41c;
    puVar1[2] = uStack_418;
    puVar1[3] = uStack_414;
    puVar1[4] = local_410;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x14;
    FUN_11a89daa();
    return;
  }
  FUN_11a2d630(puVar1,&local_420,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a34ce0 @ 11a34ce0  size=965 ===== */
// calls: memset
// strings:
//   u"ActivityId"
//   u"Buff1"
//   u"Buff2"
//   u"Buff3"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ActivityId""
     "u"Buff1""
     "u"Buff2""
     "u"Buff3"" */

void __thiscall FUN_11a34ce0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a96b0 & 1) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 1;
    FUN_100f67b0(L"ActivityId");
  }
  if ((DAT_123a96b0 & 2) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a96ac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a96b4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a96ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a96b4);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  iVar3 = 0;
  local_410 = 0;
  if ((DAT_123a96b0 & 4) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 4;
    FUN_100f67b0(L"Buff1");
  }
  if ((DAT_123a96b0 & 8) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 8;
    iVar5 = FUN_100e1cb0(DAT_123a96c4);
    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a96c8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar5 = FUN_100e1c50(DAT_123a96c4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a96c8);
    local_410 = iVar3;
    if (0 < iVar3) {
      piVar1 = *(int **)(param_1 + 0x18);
      if (piVar1 == *(int **)(param_1 + 0x1c)) {
        FUN_10463c40(piVar1,&local_410,&local_409,1,1);
      }
      else {
        *piVar1 = iVar3;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      }
    }
  }
  if ((DAT_123a96b0 & 0x10) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 0x10;
    FUN_100f67b0(L"Buff2");
  }
  if ((DAT_123a96b0 & 0x20) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 0x20;
    iVar5 = FUN_100e1cb0(DAT_123a96d8);
    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a96dc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar5 = FUN_100e1c50(DAT_123a96d8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a96dc);
    local_410 = iVar3;
  }
  if (0 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == *(int **)(param_1 + 0x1c)) {
      FUN_10463c40(piVar1,&local_410,&local_409,1,1);
    }
    else {
      *piVar1 = iVar3;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
    }
  }
  if ((DAT_123a96b0 & 0x40) == 0) {
    DAT_123a96b0 = DAT_123a96b0 | 0x40;
    FUN_100f67b0(L"Buff3");
  }
  if (-1 < (char)DAT_123a96b0) {
    DAT_123a96b0 = DAT_123a96b0 | 0x80;
    iVar5 = FUN_100e1cb0(DAT_123a96ec);
    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a96f0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar5 = FUN_100e1c50(DAT_123a96ec);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a96f0);
    local_410 = iVar3;
  }
  if (0 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != *(int **)(param_1 + 0x1c)) {
      *piVar1 = iVar3;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      FUN_11a89daa();
      return;
    }
    FUN_10463c40(piVar1,&local_410,&local_409,1,1);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a3a630 @ 11a3a630  size=991 ===== */
// calls: memset
// strings:
//   u"Probability"
//   u"ItemID"
//   u"ItemAmount"
//   u"BuffID"
//   u"BuffItem"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Probability""
     "u"ItemID""
     "u"ItemAmount""
     "u"BuffID""
     "u"BuffItem"" */

void __thiscall FUN_11a3a630(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a9ce4 & 1) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 1;
    FUN_100f67b0(L"Probability");
  }
  if ((DAT_123a9ce4 & 2) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a9ce0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9ce8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9ce0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9ce8);
    param_1[4] = uVar3;
  }
  if ((DAT_123a9ce4 & 4) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 4;
    FUN_100f67b0(L"ItemID");
  }
  if ((DAT_123a9ce4 & 8) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a9cf8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9cfc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9cf8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9cfc);
    *param_1 = uVar3;
  }
  if ((DAT_123a9ce4 & 0x10) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x10;
    FUN_100f67b0(L"ItemAmount");
  }
  if ((DAT_123a9ce4 & 0x20) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a9d0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9d10);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9d0c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9d10);
    param_1[1] = uVar3;
  }
  if ((DAT_123a9ce4 & 0x40) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x40;
    FUN_100f67b0(L"BuffID");
  }
  if (-1 < (char)DAT_123a9ce4) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a9d20);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9d24);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9d20);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9d24);
    param_1[2] = uVar3;
  }
  if ((DAT_123a9ce4 & 0x100) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x100;
    FUN_100f67b0(L"BuffItem");
  }
  if ((DAT_123a9ce4 & 0x200) == 0) {
    DAT_123a9ce4 = DAT_123a9ce4 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a9d34);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9d38);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9d34);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9d38);
  param_1[3] = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a44a90 @ 11a44a90  size=1599 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"BuffID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"BuffID"" */

void __thiscall FUN_11a44a90(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123aa950 & 1) == 0) {
    DAT_123aa950 = DAT_123aa950 | 1;
    FUN_100f67b0(&DAT_11d43284);
  }
  if ((DAT_123aa950 & 2) == 0) {
    DAT_123aa950 = DAT_123aa950 | 2;
    iVar2 = FUN_100e1cb0(DAT_123aa94c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa954);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa94c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123aa954);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_123aa950 & 4) == 0) {
    DAT_123aa950 = DAT_123aa950 | 4;
    FUN_100f67b0(&DAT_11d46564);
  }
  if ((DAT_123aa950 & 8) == 0) {
    DAT_123aa950 = DAT_123aa950 | 8;
    iVar2 = FUN_100e1cb0(DAT_123aa964);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa968);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa964);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123aa968);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  if ((DAT_123aa950 & 0x10) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x10;
    FUN_100f67b0(&DAT_11d710fc);
  }
  if ((DAT_123aa950 & 0x20) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123aa978);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa97c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa978);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123aa97c);
    puVar3 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123aa950 & 0x40) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x40;
    FUN_100f67b0(&DAT_11d3f8a0);
  }
  if (-1 < (char)DAT_123aa950) {
    DAT_123aa950 = DAT_123aa950 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123aa98c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa990);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa98c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123aa990);
    puVar3 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123aa950 & 0x100) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x100;
    FUN_100f67b0(&DAT_11d71104);
  }
  if ((DAT_123aa950 & 0x200) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123aa9a0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa9a4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa9a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123aa9a4);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
  }
  if ((DAT_123aa950 & 0x400) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x400;
    FUN_100f67b0(&DAT_11d71110);
  }
  if ((DAT_123aa950 & 0x800) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123aa9b4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa9b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa9b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123aa9b8);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  if ((DAT_123aa950 & 0x1000) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x1000;
    FUN_100f67b0(L"BuffID");
  }
  if ((DAT_123aa950 & 0x2000) == 0) {
    DAT_123aa950 = DAT_123aa950 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123aa9c8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123aa9cc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123aa9c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123aa9cc);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) * 100 + *(int *)(param_1 + 0x18);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a473a0 @ 11a473a0  size=4101 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"BuffLV%d"
//   ">f:yL"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"BuffLV%d""
     "">f:yL"" */

void __thiscall FUN_11a473a0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined4 *local_49c;
  int local_498;
  undefined4 local_494;
  uint local_490;
  undefined4 local_48c;
  int local_488;
  undefined1 local_481;
  int local_480;
  int *local_47c;
  undefined1 local_478 [48];
  char local_448 [16];
  char *local_438;
  char *local_434;
  undefined2 local_430 [8];
  undefined1 local_420 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_48c = 0;
  local_488 = param_1;
  if ((DAT_123aac60 & 1) == 0) {
    DAT_123aac60 = DAT_123aac60 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123aac60 & 2) == 0) {
    DAT_123aac60 = DAT_123aac60 | 2;
    iVar6 = FUN_100e1cb0(DAT_123aac5c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aac64);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aac5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aac64);
    *(undefined4 *)(param_1 + 0x10) = uVar8;
  }
  if ((DAT_123aac60 & 4) == 0) {
    DAT_123aac60 = DAT_123aac60 | 4;
    FUN_100f67b0(&DAT_11d3ef94);
  }
  if ((DAT_123aac60 & 8) == 0) {
    DAT_123aac60 = DAT_123aac60 | 8;
    iVar6 = FUN_100e1cb0(DAT_123aac74);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aac78);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aac74);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123aac78);
    puVar7 = (undefined4 *)FUN_100e5530(&local_47c,local_40c);
    puVar14 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)*puVar7;
    }
    CPet__SetName(puVar14);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123aac60 & 0x10) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x10;
    FUN_100f67b0(&DAT_11d49414);
  }
  if ((DAT_123aac60 & 0x20) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x20;
    iVar6 = FUN_100e1cb0(DAT_123aac88);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aac8c);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aac88);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aac8c);
    *(undefined4 *)(param_1 + 0x18) = uVar8;
  }
  if ((DAT_123aac60 & 0x40) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x40;
    FUN_100f67b0(&DAT_11d4a5a0);
  }
  if (-1 < (char)DAT_123aac60) {
    DAT_123aac60 = DAT_123aac60 | 0x80;
    iVar6 = FUN_100e1cb0(DAT_123aac9c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aaca0);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aac9c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aaca0);
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
  }
  if ((DAT_123aac60 & 0x100) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x100;
    FUN_100f67b0(&DAT_11d6c08c);
  }
  if ((DAT_123aac60 & 0x200) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x200;
    iVar6 = FUN_100e1cb0(DAT_123aacb0);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aacb4);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aacb0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aacb4);
    *(undefined4 *)(param_1 + 0x20) = uVar8;
  }
  if ((DAT_123aac60 & 0x400) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x400;
    FUN_100f67b0(&DAT_11d71300);
  }
  if ((DAT_123aac60 & 0x800) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x800;
    iVar6 = FUN_100e1cb0(DAT_123aacc4);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aacc8);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aacc4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aacc8);
    *(undefined4 *)(param_1 + 0x24) = uVar8;
  }
  if ((DAT_123aac60 & 0x1000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x1000;
    FUN_100f67b0(&DAT_11d71308);
  }
  if ((DAT_123aac60 & 0x2000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x2000;
    iVar6 = FUN_100e1cb0(DAT_123aacd8);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aacdc);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aacd8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aacdc);
    *(undefined4 *)(param_1 + 0x28) = uVar8;
  }
  if ((DAT_123aac60 & 0x4000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x4000;
    FUN_100f67b0(&DAT_11d71314);
  }
  if ((DAT_123aac60 & 0x8000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x8000;
    iVar6 = FUN_100e1cb0(DAT_123aacec);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aacf0);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aacec);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aacf0);
    *(undefined4 *)(param_1 + 0xec) = uVar8;
  }
  local_438 = local_448;
  local_448[0] = '\0';
  local_434 = local_438;
  if ((DAT_123aac60 & 0x10000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x10000;
    FUN_100f67b0(&DAT_11d71320);
  }
  if ((DAT_123aac60 & 0x20000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x20000;
    iVar6 = FUN_100e1cb0(DAT_123aad00);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aad04);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aad00);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_448,&DAT_123aad04);
  }
  if (local_434 != local_438) {
    local_410 = (undefined2 *)local_420;
    pcVar4 = local_434;
    do {
      pcVar11 = pcVar4;
      pcVar4 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    local_40c = local_410;
    FUN_100b62c0(local_434,pcVar11);
    puVar7 = (undefined4 *)FUN_10a199b0(local_478,local_420);
    uVar8 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)(param_1 + 0x30) = *puVar7;
    *(undefined4 *)(param_1 + 0x34) = uVar8;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    uVar8 = puVar7[5];
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    *(undefined4 *)(param_1 + 0x40) = puVar7[4];
    *(undefined4 *)(param_1 + 0x44) = uVar8;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    uVar8 = puVar7[9];
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    *(undefined4 *)(param_1 + 0x50) = puVar7[8];
    *(undefined4 *)(param_1 + 0x54) = uVar8;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
    if ((DAT_123aac60 & 0x40000) == 0) {
      DAT_123aac60 = DAT_123aac60 | 0x40000;
      FUN_100f67b0(&DAT_11d71330);
    }
    if ((DAT_123aac60 & 0x80000) == 0) {
      DAT_123aac60 = DAT_123aac60 | 0x80000;
      iVar6 = FUN_100e1cb0(DAT_123aad14);
      FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
    }
    cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aad18);
    if (cVar5 == '\0') {
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      iVar6 = FUN_100e1c50(DAT_123aad14);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(local_448,&DAT_123aad18);
    }
    local_410 = (undefined2 *)local_420;
    pcVar4 = local_434;
    do {
      pcVar11 = pcVar4;
      pcVar4 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    local_40c = local_410;
    FUN_100b62c0(local_434,pcVar11);
    puVar7 = (undefined4 *)FUN_10a199b0(local_478,local_420);
    uVar8 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)(param_1 + 0x60) = *puVar7;
    *(undefined4 *)(param_1 + 100) = uVar8;
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    uVar8 = puVar7[5];
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    *(undefined4 *)(param_1 + 0x70) = puVar7[4];
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    uVar8 = puVar7[9];
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    *(undefined4 *)(param_1 + 0x80) = puVar7[8];
    *(undefined4 *)(param_1 + 0x84) = uVar8;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
    FUN_10a19e00();
    FUN_10a19e00();
  }
  if ((DAT_123aac60 & 0x100000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x100000;
    FUN_100f67b0(&DAT_11d71340);
  }
  if ((DAT_123aac60 & 0x200000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x200000;
    iVar6 = FUN_100e1cb0(DAT_123aad28);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aad2c);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aad28);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123aad2c);
    puVar7 = (undefined4 *)FUN_100e5530(&local_47c,local_40c);
    puVar14 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)*puVar7;
    }
    CPet__SetName(puVar14);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123aac60 & 0x400000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x400000;
    FUN_100f67b0(&DAT_11d7134c);
  }
  if ((DAT_123aac60 & 0x800000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x800000;
    iVar6 = FUN_100e1cb0(DAT_123aad3c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aad40);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aad3c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x20))(&DAT_123aad40);
    *(undefined4 *)(param_1 + 0x94) = uVar8;
  }
  local_49c = (undefined4 *)0x0;
  local_498 = 0;
  local_494 = 0;
  if ((DAT_123aac60 & 0x1000000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x1000000;
    FUN_100f67b0(&DAT_11d7135c);
  }
  if ((DAT_123aac60 & 0x2000000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x2000000;
    iVar6 = FUN_100e1cb0(DAT_123aad50);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123aad54);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123aad50);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (undefined2 *)local_420;
    local_420[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123aad54);
    FUN_1162bea0(&local_49c,local_420);
    if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  local_47c = (int *)(local_498 - (int)local_49c >> 2);
  if (((uint)local_47c & 3) == 0) {
    if ((int *)0x3 < local_47c) {
      local_480 = 4;
      puVar7 = local_49c;
      do {
        puVar1 = *(undefined4 **)(param_1 + 0xd8);
        if (puVar1 == *(undefined4 **)(param_1 + 0xdc)) {
          FUN_10463c40(puVar1,puVar7,&local_481,1,1);
        }
        else {
          *puVar1 = *puVar7;
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 4;
        }
        puVar7 = puVar7 + 1;
        local_480 = local_480 + -1;
      } while (local_480 != 0);
      local_480 = 0;
    }
    iVar6 = local_488;
    if (&DAT_00000007 < local_47c) {
      puVar7 = local_49c + 4;
      local_480 = 4;
      do {
        puVar1 = *(undefined4 **)(iVar6 + 0xe4);
        if (puVar1 == *(undefined4 **)(iVar6 + 0xe8)) {
          FUN_10463c40(puVar1,puVar7,&local_481,1,1);
        }
        else {
          *puVar1 = *puVar7;
          *(int *)(iVar6 + 0xe4) = *(int *)(iVar6 + 0xe4) + 4;
        }
        puVar7 = puVar7 + 1;
        local_480 = local_480 + -1;
      } while (local_480 != 0);
    }
  }
  if ((DAT_123aac60 & 0x4000000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x4000000;
    FUN_1167e120(L"BuffLV%d",1,5);
    FUN_11a8911f(&LAB_11cb6bd0);
  }
  if ((DAT_123aac60 & 0x8000000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x8000000;
    FUN_1167e120(">f:yL",1,5);
    FUN_11a8911f(&LAB_11cb6bf0);
  }
  if ((DAT_123aac60 & 0x10000000) == 0) {
    DAT_123aac60 = DAT_123aac60 | 0x10000000;
    FUN_1167e120(&DAT_11d7138c,1,5);
    FUN_11a8911f(&LAB_11cb6c10);
  }
  local_490 = 0;
  local_480 = 0;
  piVar15 = (int *)(local_488 + 0x98);
  do {
    iVar6 = local_480;
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    if (local_490 < (uint)(DAT_123aad68 - DAT_123aad64 >> 4)) {
      puVar12 = (undefined *)(DAT_123aad64 + local_480);
    }
    else {
      if ((DAT_12387c90 & 1) == 0) {
        DAT_12387c90 = DAT_12387c90 | 1;
        FUN_10a30000();
      }
      puVar12 = &DAT_12387c80;
    }
    iVar9 = (**(code **)(*param_2 + 0x20))(puVar12);
    *piVar15 = iVar9;
    if (local_490 < (uint)(DAT_123aad74 - DAT_123aad70 >> 4)) {
      puVar12 = (undefined *)(DAT_123aad70 + iVar6);
    }
    else {
      if ((DAT_12387c90 & 1) == 0) {
        DAT_12387c90 = DAT_12387c90 | 1;
        FUN_10a30000();
      }
      puVar12 = &DAT_12387c80;
    }
    (**(code **)(*param_2 + 0x28))(local_430,puVar12);
    local_47c = piVar15 + 5;
    FUN_100e5e40(local_430);
    if (local_490 < (uint)(DAT_123aad80 - DAT_123aad7c >> 4)) {
      puVar12 = (undefined *)(DAT_123aad7c + iVar6);
    }
    else {
      if ((DAT_12387c90 & 1) == 0) {
        DAT_12387c90 = DAT_12387c90 | 1;
        FUN_10a30000();
      }
      puVar12 = &DAT_12387c80;
    }
    (**(code **)(*param_2 + 0x28))(local_430,puVar12);
    FUN_100e5e40(local_430);
    if (*piVar15 != 0) {
      iVar6 = FUN_11679c30();
      iVar9 = iVar6 + 0x8d4;
      iVar13 = iVar9;
      if (*(int *)(iVar6 + 0x8d8) != 0) {
        iVar6 = *(int *)(iVar6 + 0x8d8);
        do {
          if (*(int *)(iVar6 + 0x10) < *piVar15) {
            iVar10 = *(int *)(iVar6 + 0xc);
          }
          else {
            iVar10 = *(int *)(iVar6 + 8);
            iVar13 = iVar6;
          }
          iVar6 = iVar10;
        } while (iVar10 != 0);
        if (iVar13 == iVar9) goto LAB_11a4831d;
        if (*piVar15 < *(int *)(iVar13 + 0x10)) {
          iVar13 = iVar9;
        }
      }
      iVar6 = local_480;
      if (iVar13 == iVar9) {
LAB_11a4831d:
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0xc);
      }
    }
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
    local_480 = iVar6 + 0x10;
    local_490 = local_490 + 1;
    piVar15 = piVar15 + 1;
    if (0x4f < local_480) {
      if (local_49c != (undefined4 *)0x0) {
        FUN_10c3d5d0(local_49c);
      }
      if ((local_434 != local_448) && (local_434 != (char *)0x0)) {
        FUN_10c3d5d0(local_434);
      }
      FUN_11a89daa();
      return;
    }
  } while( true );
}



/* ===== FUN_11a872c0 @ 11a872c0  size=1189 ===== */
// calls: memset
// strings:
//   u"Buff"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Buff"" */

void __thiscall FUN_11a872c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123ae264 & 1) == 0) {
    DAT_123ae264 = DAT_123ae264 | 1;
    FUN_100f67b0(&DAT_11d73d5c);
  }
  if ((DAT_123ae264 & 2) == 0) {
    DAT_123ae264 = DAT_123ae264 | 2;
    iVar2 = FUN_100e1cb0(DAT_123ae260);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae268);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae260);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ae268);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123ae264 & 4) == 0) {
    DAT_123ae264 = DAT_123ae264 | 4;
    FUN_100f67b0(&DAT_11d3ef8c);
  }
  if ((DAT_123ae264 & 8) == 0) {
    DAT_123ae264 = DAT_123ae264 | 8;
    iVar2 = FUN_100e1cb0(DAT_123ae278);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae27c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae278);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x2c,&DAT_123ae27c);
  }
  if ((DAT_123ae264 & 0x10) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x10;
    FUN_100f67b0(&DAT_11d4cbe8);
  }
  if ((DAT_123ae264 & 0x20) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123ae28c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae290);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae28c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x14,&DAT_123ae290);
  }
  if ((DAT_123ae264 & 0x40) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x40;
    FUN_100f67b0(&DAT_11d44360);
  }
  if (-1 < (char)DAT_123ae264) {
    DAT_123ae264 = DAT_123ae264 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123ae2a0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae2a4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae2a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x44,&DAT_123ae2a4);
  }
  if ((DAT_123ae264 & 0x100) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x100;
    FUN_100f67b0(&DAT_11d73d68);
  }
  if ((DAT_123ae264 & 0x200) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123ae2b4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae2b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae2b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ae2b8);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if ((DAT_123ae264 & 0x400) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x400;
    FUN_100f67b0(L"Buff");
  }
  if ((DAT_123ae264 & 0x800) == 0) {
    DAT_123ae264 = DAT_123ae264 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123ae2c8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ae2cc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ae2c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ae2cc);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  FUN_11a89daa();
  return;
}



