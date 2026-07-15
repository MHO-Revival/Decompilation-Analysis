/* ===== FUN_116ebac0 @ 116ebac0  size=37 ===== */
// strings:
//   "SoulBeastDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastDef"" */

int FUN_116ebac0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastDef","");
  return param_1;
}



/* ===== FUN_116ebb20 @ 116ebb20  size=37 ===== */
// strings:
//   "SoulBeastDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastDef"" */

int FUN_116ebb20(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastDef","");
  return param_1;
}



/* ===== FUN_1174cd70 @ 1174cd70  size=8396 ===== */
// calls: memset
// strings:
//   u"Defence"
//   u"PhyPDRatio"
//   u"MonsterAtkPet"
//   u"PlayerAtkPet"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Defence""
     "u"PhyPDRatio""
     "u"MonsterAtkPet""
     "u"PlayerAtkPet"" */

void __thiscall FUN_1174cd70(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int local_438;
  undefined1 local_431;
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_410 = local_430;
  local_430[0] = 0;
  local_40c = local_410;
  if ((DAT_123912b4 & 1) == 0) {
    DAT_123912b4 = DAT_123912b4 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123912b4 & 2) == 0) {
    DAT_123912b4 = DAT_123912b4 | 2;
    iVar3 = FUN_100e1cb0(DAT_123912b0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123912b8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123912b0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123912b8);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123912b4 & 4) == 0) {
    DAT_123912b4 = DAT_123912b4 | 4;
    FUN_100f67b0(&DAT_11d45ef4);
  }
  if ((DAT_123912b4 & 8) == 0) {
    DAT_123912b4 = DAT_123912b4 | 8;
    iVar3 = FUN_100e1cb0(DAT_123912c8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123912cc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123912c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123912cc);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_123912b4 & 0x10) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x10;
    FUN_100f67b0(&DAT_11d45efc);
  }
  if ((DAT_123912b4 & 0x20) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123912dc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123912e0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123912dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123912e0);
  }
  uVar4 = FUN_1181d900(local_430);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if ((DAT_123912b4 & 0x40) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x40;
    FUN_100f67b0(&DAT_11d45f04);
  }
  if (-1 < (char)DAT_123912b4) {
    DAT_123912b4 = DAT_123912b4 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123912f0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123912f4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123912f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123912f4);
  }
  uVar4 = FUN_1181d700(local_430);
  uVar4 = FUN_1181dbe0(uVar4);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if ((DAT_123912b4 & 0x100) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x100;
    FUN_100f67b0(&DAT_11d45f0c);
  }
  if ((DAT_123912b4 & 0x200) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_12391304);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391308);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391304);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_12391308);
  }
  puVar5 = (undefined4 *)(param_1 + 0x24);
  iVar3 = FUN_100ec4b0(local_40c,puVar5,5);
  *(int *)(param_1 + 0x20) = iVar3;
  if (0 < iVar3) {
    local_438 = 0;
    do {
      iVar3 = FUN_11679c30();
      if (iVar3 == 0) goto LAB_1174ee0c;
      puVar1 = *(undefined4 **)(iVar3 + 0x3b758);
      if (puVar1 == *(undefined4 **)(iVar3 + 0x3b75c)) {
        FUN_10463c40(puVar1,puVar5,&local_431,1,1);
      }
      else {
        *puVar1 = *puVar5;
        *(int *)(iVar3 + 0x3b758) = *(int *)(iVar3 + 0x3b758) + 4;
      }
      puVar5 = puVar5 + 1;
      local_438 = local_438 + 1;
    } while (local_438 < *(int *)(param_1 + 0x20));
  }
  if ((DAT_123912b4 & 0x400) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x400;
    FUN_100f67b0(&DAT_11d45f1c);
  }
  if ((DAT_123912b4 & 0x800) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_12391318);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239131c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391318);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239131c);
    *(undefined4 *)(param_1 + 0xa0) = uVar4;
  }
  if ((DAT_123912b4 & 0x1000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x1000;
    FUN_100f67b0(&DAT_11d45f2c);
  }
  if ((DAT_123912b4 & 0x2000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_1239132c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391330);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239132c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391330);
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
  }
  if ((DAT_123912b4 & 0x4000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x4000;
    FUN_100f67b0(&DAT_11d45f3c);
  }
  if ((DAT_123912b4 & 0x8000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_12391340);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391344);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391340);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391344);
    *(undefined4 *)(param_1 + 0xa8) = uVar4;
  }
  if ((DAT_123912b4 & 0x10000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x10000;
    FUN_100f67b0(&DAT_11d45f50);
  }
  if ((DAT_123912b4 & 0x20000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_12391354);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391358);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391354);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391358);
    *(undefined4 *)(param_1 + 0xac) = uVar4;
  }
  if ((DAT_123912b4 & 0x40000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x40000;
    FUN_100f67b0(&DAT_11d45f64);
  }
  if ((DAT_123912b4 & 0x80000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_12391368);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239136c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391368);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239136c);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  if ((DAT_123912b4 & 0x100000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x100000;
    FUN_100f67b0(&DAT_11d45f70);
  }
  if ((DAT_123912b4 & 0x200000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_1239137c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391380);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239137c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391380);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  if ((DAT_123912b4 & 0x400000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x400000;
    FUN_100f67b0(&DAT_11d45f7c);
  }
  if ((DAT_123912b4 & 0x800000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_12391390);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391394);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391390);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391394);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
  }
  if ((DAT_123912b4 & 0x1000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x1000000;
    FUN_100f67b0(&DAT_11d45f88);
  }
  if ((DAT_123912b4 & 0x2000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123913a4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123913a8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123913a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123913a8);
    *(undefined4 *)(param_1 + 0x44) = uVar4;
  }
  if ((DAT_123912b4 & 0x4000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x4000000;
    FUN_100f67b0(&DAT_11d45f94);
  }
  if ((DAT_123912b4 & 0x8000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_123913b8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123913bc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123913b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123913bc);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
  }
  if ((DAT_123912b4 & 0x10000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x10000000;
    FUN_100f67b0(&DAT_11d45fa8);
  }
  if ((DAT_123912b4 & 0x20000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x20000000;
    iVar3 = FUN_100e1cb0(DAT_123913cc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123913d0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123913cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123913d0);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
  }
  if ((DAT_123912b4 & 0x40000000) == 0) {
    DAT_123912b4 = DAT_123912b4 | 0x40000000;
    FUN_100f67b0(&DAT_11d45fb4);
  }
  if (-1 < (int)DAT_123912b4) {
    DAT_123912b4 = DAT_123912b4 | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_123913e0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123913e4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123913e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123913e4);
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  if ((DAT_123913f8 & 1) == 0) {
    DAT_123913f8 = DAT_123913f8 | 1;
    FUN_100f67b0(&DAT_11d45fc4);
  }
  if ((DAT_123913f8 & 2) == 0) {
    DAT_123913f8 = DAT_123913f8 | 2;
    iVar3 = FUN_100e1cb0(DAT_123913f4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123913fc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123913f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123913fc);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  if ((DAT_123913f8 & 4) == 0) {
    DAT_123913f8 = DAT_123913f8 | 4;
    FUN_100f67b0(&DAT_11d45fd0);
  }
  if ((DAT_123913f8 & 8) == 0) {
    DAT_123913f8 = DAT_123913f8 | 8;
    iVar3 = FUN_100e1cb0(DAT_1239140c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391410);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239140c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391410);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  if ((DAT_123913f8 & 0x10) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x10;
    FUN_100f67b0(&DAT_11d45fe0);
  }
  if ((DAT_123913f8 & 0x20) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_12391420);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391424);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391420);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391424);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  if ((DAT_123913f8 & 0x40) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x40;
    FUN_100f67b0(&DAT_11d45fec);
  }
  if (-1 < (char)DAT_123913f8) {
    DAT_123913f8 = DAT_123913f8 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_12391434);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391438);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391434);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391438);
    *(undefined4 *)(param_1 + 0x60) = uVar4;
  }
  if ((DAT_123913f8 & 0x100) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x100;
    FUN_100f67b0(&DAT_11d45ffc);
  }
  if ((DAT_123913f8 & 0x200) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_12391448);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239144c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391448);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239144c);
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  if ((DAT_123913f8 & 0x400) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x400;
    FUN_100f67b0(&DAT_11d46008);
  }
  if ((DAT_123913f8 & 0x800) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_1239145c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391460);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239145c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391460);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
  }
  if ((DAT_123913f8 & 0x1000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x1000;
    FUN_100f67b0(&DAT_11d46018);
  }
  if ((DAT_123913f8 & 0x2000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_12391470);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391474);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391470);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391474);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
  }
  if ((DAT_123913f8 & 0x4000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x4000;
    FUN_100f67b0(&DAT_11d46024);
  }
  if ((DAT_123913f8 & 0x8000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_12391484);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391488);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391484);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391488);
    *(undefined4 *)(param_1 + 0x70) = uVar4;
  }
  if ((DAT_123913f8 & 0x10000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x10000;
    FUN_100f67b0(&DAT_11d46034);
  }
  if ((DAT_123913f8 & 0x20000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_12391498);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239149c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391498);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239149c);
    *(undefined4 *)(param_1 + 0x74) = uVar4;
  }
  if ((DAT_123913f8 & 0x40000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x40000;
    FUN_100f67b0(&DAT_11d46040);
  }
  if ((DAT_123913f8 & 0x80000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123914ac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123914b0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123914ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123914b0);
    *(undefined4 *)(param_1 + 0x78) = uVar4;
  }
  if ((DAT_123913f8 & 0x100000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x100000;
    FUN_100f67b0(&DAT_11d46050);
  }
  if ((DAT_123913f8 & 0x200000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123914c0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123914c4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123914c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123914c4);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
  }
  if ((DAT_123913f8 & 0x400000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x400000;
    FUN_100f67b0(&DAT_11d46060);
  }
  if ((DAT_123913f8 & 0x800000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123914d4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123914d8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123914d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123914d8);
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
  if ((DAT_123913f8 & 0x1000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x1000000;
    FUN_100f67b0(&DAT_11d46070);
  }
  if ((DAT_123913f8 & 0x2000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123914e8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123914ec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123914e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123914ec);
    *(undefined4 *)(param_1 + 0x84) = uVar4;
  }
  if ((DAT_123913f8 & 0x4000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x4000000;
    FUN_100f67b0(&DAT_11d46080);
  }
  if ((DAT_123913f8 & 0x8000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_123914fc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391500);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123914fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391500);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
  }
  if ((DAT_123913f8 & 0x10000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x10000000;
    FUN_100f67b0(&DAT_11d46090);
  }
  if ((DAT_123913f8 & 0x20000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x20000000;
    iVar3 = FUN_100e1cb0(DAT_12391510);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391514);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391510);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391514);
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
  }
  if ((DAT_123913f8 & 0x40000000) == 0) {
    DAT_123913f8 = DAT_123913f8 | 0x40000000;
    FUN_100f67b0(&DAT_11d460a0);
  }
  if (-1 < (int)DAT_123913f8) {
    DAT_123913f8 = DAT_123913f8 | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_12391524);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391528);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391524);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391528);
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
  }
  if ((DAT_1239153c & 1) == 0) {
    DAT_1239153c = DAT_1239153c | 1;
    FUN_100f67b0(&DAT_11d460b8);
  }
  if ((DAT_1239153c & 2) == 0) {
    DAT_1239153c = DAT_1239153c | 2;
    iVar3 = FUN_100e1cb0(DAT_12391538);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391540);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391538);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391540);
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
  }
  if ((DAT_1239153c & 4) == 0) {
    DAT_1239153c = DAT_1239153c | 4;
    FUN_100f67b0(&DAT_11d460d0);
  }
  if ((DAT_1239153c & 8) == 0) {
    DAT_1239153c = DAT_1239153c | 8;
    iVar3 = FUN_100e1cb0(DAT_12391550);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391554);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391550);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391554);
    *(undefined4 *)(param_1 + 0xe8) = uVar4;
  }
  if ((DAT_1239153c & 0x10) == 0) {
    DAT_1239153c = DAT_1239153c | 0x10;
    FUN_100f67b0(&DAT_11d460e8);
  }
  if ((DAT_1239153c & 0x20) == 0) {
    DAT_1239153c = DAT_1239153c | 0x20;
    iVar3 = FUN_100e1cb0(DAT_12391564);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391568);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391564);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391568);
    *(undefined4 *)(param_1 + 0xec) = uVar4;
  }
  if ((DAT_1239153c & 0x40) == 0) {
    DAT_1239153c = DAT_1239153c | 0x40;
    FUN_100f67b0(&DAT_11d46100);
  }
  if (-1 < (char)DAT_1239153c) {
    DAT_1239153c = DAT_1239153c | 0x80;
    iVar3 = FUN_100e1cb0(DAT_12391578);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239157c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12391578);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239157c);
    *(undefined4 *)(param_1 + 0xf0) = uVar4;
  }
  if ((DAT_1239153c & 0x100) == 0) {
    DAT_1239153c = DAT_1239153c | 0x100;
    FUN_100f67b0(&DAT_11d46118);
  }
  if ((DAT_1239153c & 0x200) == 0) {
    DAT_1239153c = DAT_1239153c | 0x200;
    iVar3 = FUN_100e1cb0(DAT_1239158c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12391590);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239158c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12391590);
    *(undefined4 *)(param_1 + 0xf4) = uVar4;
  }
  if ((DAT_1239153c & 0x400) == 0) {
    DAT_1239153c = DAT_1239153c | 0x400;
    FUN_100f67b0(&DAT_11d46130);
  }
  if ((DAT_1239153c & 0x800) == 0) {
    DAT_1239153c = DAT_1239153c | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123915a0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123915a4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123915a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123915a4);
    *(undefined4 *)(param_1 + 0xf8) = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x7c);
  if (DAT_1239128c < iVar3) {
    DAT_1239128c = iVar3;
  }
  if ((DAT_1239153c & 0x1000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x1000;
    FUN_100f67b0(L"Defence");
  }
  if ((DAT_1239153c & 0x2000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123915b4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123915b8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123915b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123915b8);
    *(float *)(param_1 + 0x90) = (float)fVar6;
  }
  if ((DAT_1239153c & 0x4000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x4000;
    FUN_100f67b0(L"PhyPDRatio");
  }
  if ((DAT_1239153c & 0x8000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123915c8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123915cc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123915c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123915cc);
    *(float *)(param_1 + 0x94) = (float)fVar6;
  }
  if ((DAT_1239153c & 0x10000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x10000;
    FUN_100f67b0(L"MonsterAtkPet");
  }
  if ((DAT_1239153c & 0x20000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123915dc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123915e0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123915dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123915e0);
    *(float *)(param_1 + 0x98) = (float)fVar6;
  }
  if ((DAT_1239153c & 0x40000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x40000;
    FUN_100f67b0(L"PlayerAtkPet");
  }
  if ((DAT_1239153c & 0x80000) == 0) {
    DAT_1239153c = DAT_1239153c | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123915f0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123915f4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123915f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123915f4);
    *(float *)(param_1 + 0x9c) = (float)fVar6;
  }
  FUN_1174ee80();
LAB_1174ee0c:
  if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11753290 @ 11753290  size=103 ===== */
// calls: CPetSkinInfo::GetInfoManager
// strings:
//   "CPetSkinInfo"

/* [RE-AUTO c0]
   calls: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo"" */

int __fastcall FUN_11753290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    iVar3 = *(int *)(param_1 + 0xb0);
    iVar2 = CPetSkinInfo__GetInfoManager(0,"CPetSkinInfo",0);
    if (((iVar3 != -1) &&
        (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
       ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)) {
        return iVar3 + 0x30;
      }
    }
  }
  return param_1 + 0x44;
}



/* ===== FUN_11753420 @ 11753420  size=103 ===== */
// calls: CPetSkinInfo::GetInfoManager
// strings:
//   "CPetSkinInfo"

/* [RE-AUTO c0]
   calls: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo"" */

int __fastcall FUN_11753420(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    iVar3 = *(int *)(param_1 + 0xb0);
    iVar2 = CPetSkinInfo__GetInfoManager(0,"CPetSkinInfo",0);
    if (((iVar3 != -1) &&
        (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
       ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)) {
        return iVar3 + 0x18;
      }
    }
  }
  return param_1 + 0x2c;
}



/* ===== FUN_11753a50 @ 11753a50  size=52 ===== */
// calls: CPetAtkModeInfo::GetInfoManager
// strings:
//   "CPetAtkModeInfo"

/* [RE-AUTO c0]
   calls: CPetAtkModeInfo::GetManagers
   strings:
     ""CPetAtkModeInfo"" */

undefined4 FUN_11753a50(int param_1)

{
  int iVar1;
  
  iVar1 = CPetAtkModeInfo__GetInfoManager(0,"CPetAtkModeInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11753ab0 @ 11753ab0  size=52 ===== */
// calls: CPetAtkTargetInfo::GetInfoManager
// strings:
//   "CPetAtkTargetInfo"

/* [RE-AUTO c0]
   calls: CPetAtkTargetInfo::GetManagers
   strings:
     ""CPetAtkTargetInfo"" */

undefined4 FUN_11753ab0(int param_1)

{
  int iVar1;
  
  iVar1 = CPetAtkTargetInfo__GetInfoManager(0,"CPetAtkTargetInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11753b10 @ 11753b10  size=52 ===== */
// calls: CPetCharacterInfo::GetInfoManager
// strings:
//   "CPetCharacterInfo"

/* [RE-AUTO c0]
   calls: CPetCharacterInfo::GetManagers
   strings:
     ""CPetCharacterInfo"" */

undefined4 FUN_11753b10(int param_1)

{
  int iVar1;
  
  iVar1 = CPetCharacterInfo__GetInfoManager(0,"CPetCharacterInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11753b70 @ 11753b70  size=52 ===== */
// calls: CPetNameInfo::GetInfoManager
// strings:
//   "CPetNameInfo"

/* [RE-AUTO c0]
   calls: CPetNameInfo::GetManagers
   strings:
     ""CPetNameInfo"" */

undefined4 FUN_11753b70(int param_1)

{
  int iVar1;
  
  iVar1 = CPetNameInfo__GetInfoManager(0,"CPetNameInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11753bd0 @ 11753bd0  size=52 ===== */
// calls: CPetQualityInfo::GetInfoManager
// strings:
//   "CPetQualityInfo"

/* [RE-AUTO c0]
   calls: CPetQualityInfo::GetManagers
   strings:
     ""CPetQualityInfo"" */

undefined4 FUN_11753bd0(int param_1)

{
  int iVar1;
  
  iVar1 = CPetQualityInfo__GetInfoManager(0,"CPetQualityInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11753c30 @ 11753c30  size=52 ===== */
// calls: CPetSkinInfo::GetInfoManager
// strings:
//   "CPetSkinInfo"

/* [RE-AUTO c0]
   calls: CPetSkinInfo::GetManagers
   strings:
     ""CPetSkinInfo"" */

undefined4 FUN_11753c30(int param_1)

{
  int iVar1;
  
  iVar1 = CPetSkinInfo__GetInfoManager(0,"CPetSkinInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1177f340 @ 1177f340  size=37 ===== */
// strings:
//   "SoulBeastActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastActionDef"" */

int FUN_1177f340(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastActionDef","");
  return param_1;
}



/* ===== FUN_1177f370 @ 1177f370  size=37 ===== */
// strings:
//   "SoulBeastFoodDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastFoodDef"" */

int FUN_1177f370(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastFoodDef","");
  return param_1;
}



/* ===== FUN_1177f3a0 @ 1177f3a0  size=37 ===== */
// strings:
//   "SoulBeastImageDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastImageDef"" */

int FUN_1177f3a0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastImageDef","");
  return param_1;
}



/* ===== FUN_1177f3d0 @ 1177f3d0  size=37 ===== */
// strings:
//   "SoulBeastLieHunCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastLieHunCheckDef"" */

int FUN_1177f3d0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastLieHunCheckDef","");
  return param_1;
}



/* ===== FUN_1177f400 @ 1177f400  size=37 ===== */
// strings:
//   "SoulBeastShouHunCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastShouHunCheckDef"" */

int FUN_1177f400(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastShouHunCheckDef","");
  return param_1;
}



/* ===== FUN_1177f430 @ 1177f430  size=37 ===== */
// strings:
//   "SoulBeastSocialActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSocialActionDef"" */

int FUN_1177f430(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSocialActionDef","");
  return param_1;
}



/* ===== FUN_1177f460 @ 1177f460  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneLevelCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneLevelCheckDef"" */

int FUN_1177f460(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneLevelCheckDef","");
  return param_1;
}



/* ===== FUN_1177f4f0 @ 1177f4f0  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneStageCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneStageCheckDef"" */

int FUN_1177f4f0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneStageCheckDef","");
  return param_1;
}



/* ===== FUN_117802d0 @ 117802d0  size=37 ===== */
// strings:
//   "TaskPetEmploymentContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetEmploymentContentDef"" */

int FUN_117802d0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetEmploymentContentDef","");
  return param_1;
}



/* ===== FUN_11780300 @ 11780300  size=37 ===== */
// strings:
//   "TaskPetFilterDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetFilterDef"" */

int FUN_11780300(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetFilterDef","");
  return param_1;
}



/* ===== FUN_11780360 @ 11780360  size=37 ===== */
// strings:
//   "TaskPetTrainingContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetTrainingContentDef"" */

int FUN_11780360(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetTrainingContentDef","");
  return param_1;
}



/* ===== FUN_11781020 @ 11781020  size=37 ===== */
// strings:
//   "SoulBeastActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastActionDef"" */

int FUN_11781020(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastActionDef","");
  return param_1;
}



/* ===== FUN_11781050 @ 11781050  size=37 ===== */
// strings:
//   "SoulBeastFoodDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastFoodDef"" */

int FUN_11781050(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastFoodDef","");
  return param_1;
}



/* ===== FUN_11781080 @ 11781080  size=37 ===== */
// strings:
//   "SoulBeastImageDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastImageDef"" */

int FUN_11781080(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastImageDef","");
  return param_1;
}



/* ===== FUN_117810b0 @ 117810b0  size=37 ===== */
// strings:
//   "SoulBeastLieHunCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastLieHunCheckDef"" */

int FUN_117810b0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastLieHunCheckDef","");
  return param_1;
}



/* ===== FUN_117810e0 @ 117810e0  size=37 ===== */
// strings:
//   "SoulBeastShouHunCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastShouHunCheckDef"" */

int FUN_117810e0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastShouHunCheckDef","");
  return param_1;
}



/* ===== FUN_11781110 @ 11781110  size=37 ===== */
// strings:
//   "SoulBeastSocialActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSocialActionDef"" */

int FUN_11781110(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSocialActionDef","");
  return param_1;
}



/* ===== FUN_11781140 @ 11781140  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneLevelCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneLevelCheckDef"" */

int FUN_11781140(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneLevelCheckDef","");
  return param_1;
}



/* ===== FUN_117811d0 @ 117811d0  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneStageCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneStageCheckDef"" */

int FUN_117811d0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneStageCheckDef","");
  return param_1;
}



/* ===== FUN_11781fb0 @ 11781fb0  size=37 ===== */
// strings:
//   "TaskPetEmploymentContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetEmploymentContentDef"" */

int FUN_11781fb0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetEmploymentContentDef","");
  return param_1;
}



/* ===== FUN_11781fe0 @ 11781fe0  size=37 ===== */
// strings:
//   "TaskPetFilterDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetFilterDef"" */

int FUN_11781fe0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetFilterDef","");
  return param_1;
}



/* ===== FUN_11782040 @ 11782040  size=37 ===== */
// strings:
//   "TaskPetTrainingContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetTrainingContentDef"" */

int FUN_11782040(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetTrainingContentDef","");
  return param_1;
}



/* ===== FUN_117b8800 @ 117b8800  size=52 ===== */
// calls: CSoulBeastEvolveInfo::GetInfoManager
// strings:
//   "CSoulBeastEvolveInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastEvolveInfo::GetManagers
   strings:
     ""CSoulBeastEvolveInfo"" */

undefined4 FUN_117b8800(int param_1)

{
  int iVar1;
  
  iVar1 = CSoulBeastEvolveInfo__GetInfoManager(0,"CSoulBeastEvolveInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1181ddc0 @ 1181ddc0  size=24 ===== */
// calls: CPetLevelInfo::GetManager
// strings:
//   "CPetLevelInfo"

/* [RE-AUTO c0]
   calls: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo"" */

void FUN_1181ddc0(void)

{
  int *piVar1;
  
  piVar1 = (int *)CPetLevelInfo__GetManager(0,"CPetLevelInfo",0);
                    /* WARNING: Could not recover jumptable at 0x1181ddd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))();
  return;
}



/* ===== FUN_11926df0 @ 11926df0  size=52 ===== */
// calls: CPetLevelInfo::GetManager
// strings:
//   "CPetLevelInfo"

/* [RE-AUTO c0]
   calls: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo"" */

undefined4 FUN_11926df0(int param_1)

{
  int iVar1;
  
  iVar1 = CPetLevelInfo__GetManager(0,"CPetLevelInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11928c30 @ 11928c30  size=52 ===== */
// calls: CPetFireInfo::GetInfoManager
// strings:
//   "CPetFireInfo"

/* [RE-AUTO c0]
   calls: CPetFireInfo::GetManagers
   strings:
     ""CPetFireInfo"" */

undefined4 FUN_11928c30(int param_1)

{
  int iVar1;
  
  iVar1 = CPetFireInfo__GetInfoManager(0,"CPetFireInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11933c40 @ 11933c40  size=52 ===== */
// strings:
//   "CCatCuisineRateInfo"

/* [RE-AUTO c0]
   strings:
     ""CCatCuisineRateInfo"" */

undefined4 FUN_11933c40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10a05550(0,"CCatCuisineRateInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



