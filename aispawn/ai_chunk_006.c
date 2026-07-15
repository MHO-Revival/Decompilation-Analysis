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



