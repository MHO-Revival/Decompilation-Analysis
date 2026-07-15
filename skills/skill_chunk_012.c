/* ===== FUN_11685450 @ 11685450  size=1042 ===== */
// calls: memset, atoi
// strings:
//   u"LemonSkill"

/* [RE-AUTO c0]
   calls: memset, atoi
   strings:
     "u"LemonSkill"" */

void __thiscall FUN_11685450(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int local_470;
  int *local_46c;
  int *local_468;
  undefined4 local_464;
  undefined1 local_45d;
  char local_45c [16];
  char *local_44c;
  char *local_448;
  undefined1 local_444 [16];
  undefined1 *local_434;
  undefined1 *local_430;
  undefined1 local_42c [12];
  undefined1 local_420 [4];
  undefined1 *local_41c;
  undefined1 *local_418;
  int local_414;
  undefined1 *local_410;
  undefined1 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_434 = local_444;
  local_444[0] = 0;
  local_430 = local_434;
  if ((DAT_12389f50 & 1) == 0) {
    DAT_12389f50 = DAT_12389f50 | 1;
    FUN_100f67b0(L"LemonSkill");
  }
  if ((DAT_12389f50 & 2) == 0) {
    DAT_12389f50 = DAT_12389f50 | 2;
    iVar5 = FUN_100e1cb0(DAT_12389f4c);
    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_12389f54);
  if (cVar4 == '\0') {
    local_408 = cVar4;
    memset(local_407,0,0x3ff);
    iVar5 = FUN_100e1c50(DAT_12389f4c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_444,&DAT_12389f54);
  }
  local_44c = local_45c;
  local_46c = (int *)0x0;
  local_41c = local_42c;
  iVar5 = *(int *)(param_1 + 0x9c);
  local_468 = (int *)0x0;
  local_464 = 0;
  local_45c[0] = '\0';
  local_42c[0] = 0;
  local_414 = 0;
  local_410 = (undefined1 *)0x0;
  local_40c = (undefined1 *)0x0;
  local_448 = local_44c;
  local_418 = local_41c;
  if (iVar5 == *(int *)(param_1 + 0xa0)) {
    FUN_11690f00(iVar5,local_42c,&local_45d,1,1);
  }
  else {
    FUN_1167a440(iVar5,local_42c);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 0x24;
  }
  if (local_414 != 0) {
    FUN_10c3d5d0(local_414);
  }
  if ((local_418 != local_42c) && (local_418 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_418);
  }
  iVar5 = *(int *)(param_1 + 0x9c);
  if (local_444 != (undefined1 *)(iVar5 + -0x24)) {
    FUN_100d83d0(local_430,local_434);
  }
  if ((DAT_12389f50 & 4) == 0) {
    DAT_12389f50 = DAT_12389f50 | 4;
    FUN_100f67b0(&DAT_11d3a018);
  }
  if ((DAT_12389f50 & 8) == 0) {
    DAT_12389f50 = DAT_12389f50 | 8;
    iVar6 = FUN_100e1cb0(DAT_12389f64);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_12389f68);
  if (cVar4 == '\0') {
    local_408 = cVar4;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_12389f64);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_45c,&DAT_12389f68);
  }
  local_410 = local_420;
  pcVar3 = local_448;
  do {
    pcVar7 = pcVar3;
    pcVar3 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  local_40c = local_410;
  FUN_100b62c0(local_448,pcVar7);
  iVar6 = FUN_100e4b30(local_420,&local_46c,0x3b);
  if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      local_470 = atoi(*(char **)(iVar8 + 0x14 + (int)local_46c));
      piVar1 = *(int **)(iVar5 + -8);
      if (piVar1 == *(int **)(iVar5 + -4)) {
        FUN_10463c40(piVar1,&local_470,&local_45d,1,1);
      }
      else {
        *piVar1 = local_470;
        *(int *)(iVar5 + -8) = *(int *)(iVar5 + -8) + 4;
      }
      iVar8 = iVar8 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((local_448 != local_45c) && (local_448 != (char *)0x0)) {
    FUN_10c3d5d0(local_448);
  }
  piVar1 = local_46c;
  if (local_468 != local_46c) {
    piVar9 = local_468 + -1;
    do {
      piVar2 = (int *)*piVar9;
      if ((piVar2 != piVar9 + -5) && (piVar2 != (int *)0x0)) {
        FUN_10c3d5d0(piVar2);
      }
      piVar2 = piVar9 + -5;
      piVar9 = piVar9 + -6;
    } while (piVar2 != piVar1);
  }
  if (local_46c != (int *)0x0) {
    FUN_10c3d5d0(local_46c);
  }
  if ((local_430 != local_444) && (local_430 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_430);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1168b9e0 @ 1168b9e0  size=4809 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"PartID"
//   u"PartName"
//   u"Unbalance"
//   u"UnbalanceMulti"
//   u"Fall"
//   u"FallMulti"
//   u"WaterAcc"
//   u"WaterAccMulti"
//   u"FireAcc"
//   u"FireAccMulti"
//   u"ElectricAcc"
//   u"ElectricAccMulti"
//   u"DragonAcc"
//   u"DragonAccMulti"
//   u"IceAcc"
//   u"IceAccMulti"
//   u"Scar"
//   u"LootSkillLv%d"
//   u"DmgVal%d"
//   u"Cut%d"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"PartID""
     "u"PartName""
     "u"Unbalance""
     "u"UnbalanceMulti""
     "u"Fall""
     "u"FallMulti""
     "u"WaterAcc""
     "u"WaterAccMulti""
     "u"FireAcc""
     "u"FireAccMulti"" */

void __thiscall FUN_1168b9e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  float10 fVar10;
  double dVar11;
  undefined4 *local_55c;
  uint local_558;
  uint local_554;
  undefined8 local_550;
  undefined2 local_548 [16];
  undefined2 *local_528;
  undefined2 *local_524;
  undefined1 local_520 [16];
  undefined1 *local_510;
  undefined1 *local_50c;
  char local_508;
  undefined1 local_507 [1023];
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_510 = local_520;
  local_520[0] = 0;
  local_50c = local_510;
  if ((DAT_12388e14 & 1) == 0) {
    DAT_12388e14 = DAT_12388e14 | 1;
    FUN_100f67b0(L"PartID");
  }
  if ((DAT_12388e14 & 2) == 0) {
    DAT_12388e14 = DAT_12388e14 | 2;
    iVar2 = FUN_100e1cb0(DAT_12388e10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e18);
  if (cVar1 == '\0') {
    local_508 = cVar1;
    memset(local_507,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12388e10);
    FUN_100ea3b0(&local_508,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_508,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_520,&DAT_12388e18);
  }
  iVar2 = FUN_11680c60(local_520,1);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 4) == '\0')) {
    iVar3 = FUN_100e1bd0(local_520);
    if ((iVar3 != -1) || (iVar3 = FUN_100e1c10(local_520), iVar6 = -1, iVar3 != -1)) {
      iVar6 = iVar3;
    }
    uVar9 = DAT_12388e14;
    *(int *)(iVar2 + 0xc) = iVar6;
    if ((uVar9 & 4) == 0) {
      DAT_12388e14 = uVar9 | 4;
      FUN_100f67b0(L"PartName");
      uVar9 = DAT_12388e14;
    }
    if ((uVar9 & 8) == 0) {
      DAT_12388e14 = uVar9 | 8;
      iVar3 = FUN_100e1cb0(DAT_12388e28);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e2c);
    if (cVar1 == '\0') {
      local_508 = cVar1;
      memset(local_507,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_12388e28);
      FUN_100ea3b0(&local_508,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_508,1);
    }
    else {
      local_528 = local_548;
      local_548[0] = 0;
      local_524 = local_528;
      (**(code **)(*param_2 + 0x28))(local_548,&DAT_12388e2c);
      puVar4 = (undefined4 *)FUN_100e5530((int)&local_550 + 4,local_524);
      puVar8 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)*puVar4;
      }
      CPet__SetName(puVar8);
      FUN_100e5670();
      if ((local_524 != local_548) && (local_524 != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_524);
      }
    }
    if ((DAT_12388e14 & 0x10) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x10;
      FUN_100f67b0(L"Unbalance");
    }
    if ((DAT_12388e14 & 0x20) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x20;
      iVar3 = FUN_100e1cb0(DAT_12388e3c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e40);
    if (cVar1 != '\0') {
      local_550 = 0.0;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388e40,&local_550);
      dVar11 = local_550;
      if (cVar1 == '\0') {
        dVar11 = 0.0;
      }
      *(float *)(iVar2 + 0x14) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x40) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x40;
      FUN_100f67b0(L"UnbalanceMulti");
    }
    if (-1 < (char)DAT_12388e14) {
      DAT_12388e14 = DAT_12388e14 | 0x80;
      iVar3 = FUN_100e1cb0(DAT_12388e50);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e54);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388e54,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x18) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x100) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x100;
      FUN_100f67b0(L"Fall");
    }
    if ((DAT_12388e14 & 0x200) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x200;
      iVar3 = FUN_100e1cb0(DAT_12388e64);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e68);
    if (cVar1 != '\0') {
      local_550 = 0.0;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388e68,&local_550);
      dVar11 = local_550;
      if (cVar1 == '\0') {
        dVar11 = 0.0;
      }
      *(float *)(iVar2 + 0x1c) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x400) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x400;
      FUN_100f67b0(L"FallMulti");
    }
    if ((DAT_12388e14 & 0x800) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x800;
      iVar3 = FUN_100e1cb0(DAT_12388e78);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e7c);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388e7c,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x20) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x1000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x1000;
      FUN_100f67b0(L"WaterAcc");
    }
    if ((DAT_12388e14 & 0x2000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x2000;
      iVar3 = FUN_100e1cb0(DAT_12388e8c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388e90);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x24) = 0;
    }
    else {
      local_550 = (double)((ulonglong)local_550 & 0xffffffff);
      cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12388e90,(int)&local_550 + 4);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_550._4_4_;
      }
      *(undefined4 *)(iVar2 + 0x24) = uVar5;
    }
    if ((DAT_12388e14 & 0x4000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x4000;
      FUN_100f67b0(L"WaterAccMulti");
    }
    if ((DAT_12388e14 & 0x8000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x8000;
      iVar3 = FUN_100e1cb0(DAT_12388ea0);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388ea4);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388ea4,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x28) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x10000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x10000;
      FUN_100f67b0(L"FireAcc");
    }
    if ((DAT_12388e14 & 0x20000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x20000;
      iVar3 = FUN_100e1cb0(DAT_12388eb4);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388eb8);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
    else {
      local_550 = (double)((ulonglong)local_550 & 0xffffffff);
      cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12388eb8,(int)&local_550 + 4);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_550._4_4_;
      }
      *(undefined4 *)(iVar2 + 0x2c) = uVar5;
    }
    if ((DAT_12388e14 & 0x40000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x40000;
      FUN_100f67b0(L"FireAccMulti");
    }
    if ((DAT_12388e14 & 0x80000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x80000;
      iVar3 = FUN_100e1cb0(DAT_12388ec8);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388ecc);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388ecc,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x30) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x100000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x100000;
      FUN_100f67b0(L"ElectricAcc");
    }
    if ((DAT_12388e14 & 0x200000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x200000;
      iVar3 = FUN_100e1cb0(DAT_12388edc);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388ee0);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x34) = 0;
    }
    else {
      local_550 = (double)((ulonglong)local_550 & 0xffffffff);
      cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12388ee0,(int)&local_550 + 4);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_550._4_4_;
      }
      *(undefined4 *)(iVar2 + 0x34) = uVar5;
    }
    if ((DAT_12388e14 & 0x400000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x400000;
      FUN_100f67b0(L"ElectricAccMulti");
    }
    if ((DAT_12388e14 & 0x800000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x800000;
      iVar3 = FUN_100e1cb0(DAT_12388ef0);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388ef4);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388ef4,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x38) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x1000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x1000000;
      FUN_100f67b0(L"DragonAcc");
    }
    if ((DAT_12388e14 & 0x2000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x2000000;
      iVar3 = FUN_100e1cb0(DAT_12388f04);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388f08);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
    else {
      local_550 = (double)((ulonglong)local_550 & 0xffffffff);
      cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12388f08,(int)&local_550 + 4);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_550._4_4_;
      }
      *(undefined4 *)(iVar2 + 0x3c) = uVar5;
    }
    if ((DAT_12388e14 & 0x4000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x4000000;
      FUN_100f67b0(L"DragonAccMulti");
    }
    if ((DAT_12388e14 & 0x8000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x8000000;
      iVar3 = FUN_100e1cb0(DAT_12388f18);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388f1c);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388f1c,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x40) = (float)dVar11;
    }
    if ((DAT_12388e14 & 0x10000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x10000000;
      FUN_100f67b0(L"IceAcc");
    }
    if ((DAT_12388e14 & 0x20000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x20000000;
      iVar3 = FUN_100e1cb0(DAT_12388f2c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388f30);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x44) = 0;
    }
    else {
      local_550 = (double)((ulonglong)local_550 & 0xffffffff);
      cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12388f30,(int)&local_550 + 4);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_550._4_4_;
      }
      *(undefined4 *)(iVar2 + 0x44) = uVar5;
    }
    if ((DAT_12388e14 & 0x40000000) == 0) {
      DAT_12388e14 = DAT_12388e14 | 0x40000000;
      FUN_100f67b0(L"IceAccMulti");
    }
    if (-1 < (int)DAT_12388e14) {
      DAT_12388e14 = DAT_12388e14 | 0x80000000;
      iVar3 = FUN_100e1cb0(DAT_12388f40);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388f44);
    if (cVar1 != '\0') {
      local_550 = DAT_11de9978;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388f44,&local_550);
      dVar11 = DAT_11de9978;
      if (cVar1 != '\0') {
        dVar11 = local_550;
      }
      *(float *)(iVar2 + 0x48) = (float)dVar11;
    }
    if ((DAT_12388f58 & 1) == 0) {
      DAT_12388f58 = DAT_12388f58 | 1;
      FUN_100f67b0(L"Scar");
    }
    if ((DAT_12388f58 & 2) == 0) {
      DAT_12388f58 = DAT_12388f58 | 2;
      iVar3 = FUN_100e1cb0(DAT_12388f54);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12388f5c);
    if (cVar1 != '\0') {
      local_550 = 0.0;
      cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_12388f5c,&local_550);
      dVar11 = local_550;
      if (cVar1 == '\0') {
        dVar11 = 0.0;
      }
      *(float *)(iVar2 + 0x4c) = (float)dVar11;
    }
    if ((DAT_12388f58 & 4) == 0) {
      DAT_12388f58 = DAT_12388f58 | 4;
      FUN_1167e120(L"LootSkillLv%d",1,5);
      FUN_11a8911f(&LAB_11ca6f10);
    }
    if ((DAT_12388f58 & 8) == 0) {
      DAT_12388f58 = DAT_12388f58 | 8;
      FUN_1167e120(L"DmgVal%d",1,5);
      FUN_11a8911f(&LAB_11ca6e50);
    }
    if ((DAT_12388f58 & 0x10) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x10;
      FUN_1167e120(L"Cut%d",1,5);
      FUN_11a8911f(&LAB_11ca6e30);
    }
    if ((DAT_12388f58 & 0x20) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x20;
      FUN_1167e120(L"Hammer%d",1,5);
      FUN_11a8911f(&LAB_11ca6ed0);
    }
    if ((DAT_12388f58 & 0x40) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x40;
      FUN_1167e120(L"Shoot%d",1,5);
      FUN_11a8911f(&LAB_11ca6f50);
    }
    if (-1 < (char)DAT_12388f58) {
      DAT_12388f58 = DAT_12388f58 | 0x80;
      FUN_1167e120(L"Fire%d",1,5);
      FUN_11a8911f(&LAB_11ca6eb0);
    }
    if ((DAT_12388f58 & 0x100) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x100;
      FUN_1167e120(L"Water%d",1,5);
      FUN_11a8911f(&LAB_11ca6f90);
    }
    if ((DAT_12388f58 & 0x200) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x200;
      FUN_1167e120(L"Electric%d",1,5);
      FUN_11a8911f(&LAB_11ca6e90);
    }
    if ((DAT_12388f58 & 0x400) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x400;
      FUN_1167e120(L"Dragon%d",1,5);
      FUN_11a8911f(&LAB_11ca6e70);
    }
    if ((DAT_12388f58 & 0x800) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x800;
      FUN_1167e120(L"Ice%d",1,5);
      FUN_11a8911f(&LAB_11ca6ef0);
    }
    if ((DAT_12388f58 & 0x1000) == 0) {
      DAT_12388f58 = DAT_12388f58 | 0x1000;
      FUN_1167e120(L"ProcessLv%d",1,5);
      FUN_11a8911f(&LAB_11ca6f30);
    }
    iVar3 = 0;
    local_554 = 0;
    local_55c = (undefined4 *)(iVar2 + 0x198);
    local_550 = (double)CONCAT44(iVar2 + 0x58,(undefined4)local_550);
    do {
      local_528 = local_548;
      local_548[0] = 0;
      local_524 = local_528;
      if (local_554 < (uint)(DAT_12388f7c - DAT_12388f78 >> 4)) {
        puVar7 = (undefined *)(DAT_12388f78 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      fVar10 = (float10)(**(code **)(*param_2 + 0x30))(puVar7);
      local_55c[-0xf] = (float)fVar10;
      if (local_554 < (uint)(DAT_12388fe8 - DAT_12388fe4 >> 4)) {
        puVar7 = (undefined *)(DAT_12388fe4 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      uVar5 = (**(code **)(*param_2 + 0x20))(puVar7);
      *local_55c = uVar5;
      if (local_554 < (uint)(DAT_12388f88 - DAT_12388f84 >> 4)) {
        puVar7 = (undefined *)(DAT_12388f84 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      local_558 = (uint)(iVar6 != 0);
      if (local_554 < (uint)(DAT_12388f94 - DAT_12388f90 >> 4)) {
        puVar7 = (undefined *)(DAT_12388f90 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        local_558 = local_558 | 2;
      }
      if (local_554 < (uint)(DAT_12388fa0 - DAT_12388f9c >> 4)) {
        puVar7 = (undefined *)(DAT_12388f9c + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        local_558 = local_558 | 4;
      }
      local_55c[-10] = local_558;
      if (local_554 < (uint)(DAT_12388fac - DAT_12388fa8 >> 4)) {
        puVar7 = (undefined *)(DAT_12388fa8 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      uVar9 = (uint)(iVar6 != 0);
      if (local_554 < (uint)(DAT_12388fb8 - DAT_12388fb4 >> 4)) {
        puVar7 = (undefined *)(DAT_12388fb4 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        uVar9 = uVar9 | 2;
      }
      if (local_554 < (uint)(DAT_12388fc4 - DAT_12388fc0 >> 4)) {
        puVar7 = (undefined *)(DAT_12388fc0 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        uVar9 = uVar9 | 4;
      }
      if (local_554 < (uint)(DAT_12388fd0 - DAT_12388fcc >> 4)) {
        puVar7 = (undefined *)(DAT_12388fcc + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        uVar9 = uVar9 | 8;
      }
      if (local_554 < (uint)(DAT_12388fdc - DAT_12388fd8 >> 4)) {
        puVar7 = (undefined *)(DAT_12388fd8 + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      iVar6 = (**(code **)(*param_2 + 0x20))(puVar7);
      if (iVar6 != 0) {
        uVar9 = uVar9 | 0x10;
      }
      local_55c[-5] = uVar9;
      *(int *)((int)local_550._4_4_ + -8) = iVar2;
      *(uint *)((int)local_550._4_4_ + -4) = local_554;
      if (local_554 < (uint)(DAT_12388f70 - DAT_12388f6c >> 4)) {
        puVar7 = (undefined *)(DAT_12388f6c + iVar3);
      }
      else {
        if ((DAT_12387c90 & 1) == 0) {
          DAT_12387c90 = DAT_12387c90 | 1;
          FUN_10a30000();
        }
        puVar7 = &DAT_12387c80;
      }
      uVar5 = (**(code **)(*param_2 + 0x20))(puVar7);
      *local_550._4_4_ = uVar5;
      if ((local_524 != local_548) && (local_524 != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_524);
      }
      local_55c = local_55c + 1;
      local_554 = local_554 + 1;
      iVar3 = iVar3 + 0x10;
      local_550 = (double)CONCAT44(local_550._4_4_ + 0xd,(undefined4)local_550);
    } while (iVar3 < 0x50);
    FUN_100ec390(local_108,0x100,"Parts.%s.",local_50c);
    FUN_1188e230(param_1 + 0x184,param_2,local_108);
    *(undefined1 *)(iVar2 + 4) = 1;
  }
  if ((local_50c != local_520) && (local_50c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_50c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_116aa680 @ 116aa680  size=1374 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_116aa680(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  ushort *puVar9;
  uint *puVar10;
  uint uVar11;
  ushort *puVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint local_2d0;
  int local_2cc;
  int *local_2c8;
  undefined4 **local_2c4;
  int local_2c0;
  uint local_2bc;
  int local_2b8;
  uint local_2b4;
  ushort local_2b0 [16];
  ushort *local_290;
  ushort *local_28c;
  int local_288 [8];
  int local_268;
  int *local_264;
  int aiStack_260 [100];
  int local_d0 [10];
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2 [13];
  undefined2 *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a [13];
  undefined2 *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52 [13];
  undefined2 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a [13];
  undefined2 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_2b8 = param_2;
  local_2b4 = 10;
  local_2c0 = param_1;
  FUN_116a72b0(&local_2b4,local_d0);
  uVar11 = local_2b4;
  iVar14 = 0;
  if (0 < (int)local_2b4) {
    do {
      if (((int *)local_d0[iVar14] != (int *)0x0) && (*(int *)local_d0[iVar14] - 3U < 2)) {
        FUN_10500130(0,"CBuffInfo",0);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)uVar11);
  }
  iVar14 = 0;
  piVar2 = *(int **)(param_1 + 0x430);
  for (piVar13 = *(int **)(param_1 + 0x42c); piVar13 != piVar2; piVar13 = piVar13 + 1) {
    piVar8 = (int *)(*piVar13 + 0x118);
    if ((*piVar8 != 0) || (*(int *)(*piVar13 + 0x168) != 0)) {
      aiStack_260[iVar14] = (int)piVar8;
      iVar14 = iVar14 + 1;
      if (99 < iVar14) break;
    }
  }
  iVar16 = 0;
  if (0 < iVar14) {
    do {
      iVar3 = aiStack_260[iVar16];
      param_1 = local_2c0;
      if (iVar3 != 0) {
        FUN_1186e760(iVar3 + 0x4c,local_2b8);
        param_1 = local_2c0;
        FUN_116ab0a0(iVar3,local_2b8);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14);
  }
  piVar2 = *(int **)(param_1 + 0x430);
  piVar13 = *(int **)(param_1 + 0x42c);
  for (piVar8 = piVar13; piVar5 = piVar13, piVar6 = piVar13, piVar8 != piVar2; piVar8 = piVar8 + 1)
  {
    if (*(int *)(*piVar8 + 0xf4) == 1) goto joined_r0x116aa7e6;
  }
  for (; piVar8 = piVar13, piVar5 != piVar2; piVar5 = piVar5 + 1) {
    if (*(int *)(*piVar5 + 0xf4) == 2) goto joined_r0x116aa7e6;
  }
  for (; (piVar8 != piVar2 && (*(int *)(*piVar8 + 0xf4) != 3)); piVar8 = piVar8 + 1) {
  }
joined_r0x116aa7e6:
  for (; (piVar6 != piVar2 && (*(int *)(*piVar6 + 0xf4) != 1)); piVar6 = piVar6 + 1) {
  }
  iVar14 = 0;
  for (; piVar13 != piVar2; piVar13 = piVar13 + 1) {
    piVar8 = (int *)(*piVar13 + 0x118);
    if ((*piVar8 != 0) || (*(int *)(*piVar13 + 0x168) != 0)) {
      aiStack_260[iVar14] = (int)piVar8;
      iVar14 = iVar14 + 1;
      if (99 < iVar14) break;
    }
  }
  iVar16 = 0;
  if (0 < iVar14) {
    do {
      iVar3 = aiStack_260[iVar16];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x50) == 0x3ed)) {
        if (iVar3 != -0x4c) {
          *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(iVar3 + 0x144);
        }
        break;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14);
  }
  FUN_116aafd0();
  iVar14 = 0;
  piVar2 = *(int **)(param_1 + 0x430);
  for (piVar13 = *(int **)(param_1 + 0x42c); piVar13 != piVar2; piVar13 = piVar13 + 1) {
    piVar8 = (int *)(*piVar13 + 0x118);
    if ((*piVar8 != 0) || (*(int *)(*piVar13 + 0x168) != 0)) {
      aiStack_260[iVar14] = (int)piVar8;
      iVar14 = iVar14 + 1;
      if (99 < iVar14) break;
    }
  }
  iVar16 = 0;
  if (0 < iVar14) {
    do {
      iVar3 = aiStack_260[iVar16];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x50) == 0x3ef)) {
        if (iVar3 != -0x4c) {
          *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(iVar3 + 0x144);
        }
        break;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14);
  }
  local_84 = &local_a8;
  local_88 = local_a2;
  local_a8 = DAT_11d3de04;
  local_a4 = DAT_11d3de08;
  local_a2[0] = 0;
  local_5c = &local_80;
  local_60 = local_7a;
  local_80 = DAT_11d3de0c;
  local_7c = DAT_11d3de10;
  local_7a[0] = 0;
  local_34 = &local_58;
  local_38 = local_52;
  local_58 = DAT_11d3de14;
  local_54 = DAT_11d3de18;
  local_52[0] = 0;
  local_c = &local_30;
  local_10 = local_2a;
  local_30 = DAT_11d3de1c;
  local_2c = DAT_11d3de20;
  local_2a[0] = 0;
  local_290 = local_2b0;
  local_2b0[0] = 0;
  local_2cc = param_1 + 0x3ac;
  local_28c = local_290;
  FUN_100e5c10(local_288);
  local_2b4 = FUN_116a71d0(local_288,0,0x7b,0x7d,local_2b0);
  if (local_2b4 != 0xffffffff) {
    local_2c8 = (int *)(param_1 + 400);
    do {
      local_2c4 = &local_84;
      local_2b8 = 0;
      puVar12 = local_28c;
      piVar13 = local_2c8;
      do {
        uVar7 = local_2b4;
        puVar9 = (ushort *)*local_2c4;
        uVar17 = (int)local_290 - (int)puVar12 >> 1;
        uVar11 = uVar17;
        if (uVar17 == (int)local_2c4[-1] - (int)puVar9 >> 1) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            uVar1 = *puVar12;
            if (uVar1 != *puVar9) {
              puVar12 = local_28c;
              if ((-(uint)(uVar1 < *puVar9) & 0xfffffffe) != 0xffffffff) goto LAB_116aab07;
              break;
            }
            puVar12 = puVar12 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar11 = local_268 - (int)local_264 >> 1;
          local_2bc = uVar17;
          if (uVar11 < local_2b4) {
                    /* WARNING: Subroutine does not return */
            FUN_100e4fd0();
          }
          local_2d0 = uVar11 - local_2b4;
          puVar10 = &local_2d0;
          if (uVar17 <= uVar11 - local_2b4) {
            puVar10 = &local_2bc;
          }
          local_2bc = *puVar10;
          if ((local_2bc - uVar11) + 0x7ffffffe < (uint)(piVar13[-1] - *piVar13 >> 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_100e39a0();
          }
          FUN_10897f50((int)local_264 + local_2b4 * 2,(int)local_264 + (local_2bc + local_2b4) * 2,
                       *piVar13,piVar13[-1],piVar13 + -9 == local_288);
          puVar12 = local_28c;
        }
LAB_116aab07:
        piVar13 = piVar13 + 10;
        local_2b8 = local_2b8 + 1;
        local_2c4 = local_2c4 + 10;
      } while (local_2b8 < 4);
      local_2b4 = FUN_116a71d0(local_288,uVar7 + 1,0x7b,0x7d,local_2b0);
    } while (local_2b4 != 0xffffffff);
  }
  FUN_100e5e40(local_288);
  if ((local_264 != local_288) && (local_264 != (int *)0x0)) {
    FUN_10c3d5d0(local_264);
  }
  if ((local_28c != local_2b0) && (local_28c != (ushort *)0x0)) {
    FUN_10c3d5d0(local_28c);
  }
  iVar14 = 3;
  puVar15 = &stack0x0000001c;
  do {
    puVar4 = *(undefined1 **)(puVar15 + -0x28);
    if ((puVar4 != puVar15 + -0x4c) && (puVar4 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puVar4);
    }
    iVar14 = iVar14 + -1;
    puVar15 = puVar15 + -0x28;
  } while (-1 < iVar14);
  FUN_11a89daa();
  return;
}



/* ===== FUN_116cb450 @ 116cb450  size=64 ===== */
// strings:
//   "PlayerLockHPBuff"

/* [RE-AUTO c0]
   strings:
     ""PlayerLockHPBuff"" */

void __fastcall FUN_116cb450(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d3f5b4;
  local_c = local_10;
  FUN_100b62c0("PlayerLockHPBuff","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_116cd660 @ 116cd660  size=85 ===== */
// calls: CSkillInfo::GetInfoManager
// strings:
//   "CSkillInfo"

/* [RE-AUTO c0]
   calls: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo"" */

undefined4 FUN_116cd660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CSkillInfo__GetInfoManager(0,"CSkillInfo",0);
  iVar3 = param_1 / 100000 - *(int *)(iVar1 + 0x24);
  if (((-1 < iVar3) && (iVar3 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + iVar3 * 4) != 0)) {
    uVar2 = FUN_116cd100(param_1);
    return uVar2;
  }
  return 0;
}



/* ===== FUN_116cd6c0 @ 116cd6c0  size=32 ===== */
// calls: CSkillInfo::GetInfoManager
// strings:
//   "CSkillInfo"

/* [RE-AUTO c0]
   calls: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo"" */

void FUN_116cd6c0(undefined4 param_1)

{
  CSkillInfo__GetInfoManager(0,"CSkillInfo",0);
  FUN_116cd1b0(param_1);
  return;
}



/* ===== FUN_116cd6e0 @ 116cd6e0  size=24 ===== */
// calls: CSkillInfo::GetInfoManager
// strings:
//   "CSkillInfo"

/* [RE-AUTO c0]
   calls: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo"" */

void FUN_116cd6e0(void)

{
  int *piVar1;
  
  piVar1 = (int *)CSkillInfo__GetInfoManager(0,"CSkillInfo",0);
                    /* WARNING: Could not recover jumptable at 0x116cd6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))();
  return;
}



/* ===== FUN_116cdd50 @ 116cdd50  size=4844 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"skillid"
//   u"level"
//   u"SkillSpecialAttack_Paraylze"
//   u"SkillSpecialAttack_Poison"
//   u"SkillSpecialAttack_Sleep"
//   u"SkillSpecialAttack_Dynamite"
//   u"IsTown"
//   u"IsAngry"
//   u"group1"
//   u"group2"
//   u"group3"
//   u"group4"
//   u"eventname"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"skillid""
     "u"level""
     "u"SkillSpecialAttack_Paraylze""
     "u"SkillSpecialAttack_Poison""
     "u"SkillSpecialAttack_Sleep""
     "u"SkillSpecialAttack_Dynamite""
     "u"IsTown""
     "u"IsAngry""
     "u"group1""
     "u"group2"" */

void __thiscall FUN_116cdd50(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 local_465;
  int *local_464;
  double local_460;
  undefined2 local_458 [16];
  undefined2 *local_438;
  undefined2 *local_434;
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1238cc5c & 1) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 1;
    FUN_100f67b0(&DAT_11d3f8a0);
  }
  if ((DAT_1238cc5c & 2) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 2;
    iVar3 = FUN_100e1cb0(DAT_1238cc58);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cc60);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cc58);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_438 = local_458;
    local_458[0] = 0;
    local_434 = local_438;
    (**(code **)(*param_2 + 0x28))(local_458,&DAT_1238cc60);
    puVar4 = (undefined4 *)FUN_100e5530(&local_464,local_434);
    puVar7 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar7);
    FUN_100e5670();
    if ((local_434 != local_458) && (local_434 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_434);
    }
  }
  puVar7 = &DAT_11d9d32b;
  if ((undefined1 *)param_1[0xc] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)param_1[0xc];
  }
  CPet__SetName(puVar7);
  if ((DAT_1238cc5c & 4) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 4;
    FUN_100f67b0(L"skillid");
  }
  if ((DAT_1238cc5c & 8) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 8;
    iVar3 = FUN_100e1cb0(DAT_1238cc70);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cc74);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cc70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cc74);
    param_1[5] = iVar3;
  }
  local_464 = (int *)(**(code **)(*param_1 + 0x3c))();
  if ((DAT_1238cc5c & 0x10) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x10;
    FUN_100f67b0(L"level");
  }
  if ((DAT_1238cc5c & 0x20) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x20;
    iVar3 = FUN_100e1cb0(DAT_1238cc84);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cc88);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cc84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cc88);
    param_1[6] = iVar3;
  }
  if ((DAT_1238cc5c & 0x40) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x40;
    FUN_100f67b0(L"SkillSpecialAttack_Paraylze");
  }
  if (-1 < (char)DAT_1238cc5c) {
    DAT_1238cc5c = DAT_1238cc5c | 0x80;
    iVar3 = FUN_100e1cb0(DAT_1238cc98);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cc9c);
  if (cVar2 != '\0') {
    local_460 = 0.0;
    cVar2 = (**(code **)(*param_2 + 0x34))(&DAT_1238cc9c,&local_460);
    dVar8 = local_460;
    if (cVar2 == '\0') {
      dVar8 = 0.0;
    }
    param_1[9] = (int)(float)dVar8;
  }
  if ((DAT_1238cc5c & 0x100) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x100;
    FUN_100f67b0(L"SkillSpecialAttack_Poison");
  }
  if ((DAT_1238cc5c & 0x200) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x200;
    iVar3 = FUN_100e1cb0(DAT_1238ccac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ccb0);
  if (cVar2 != '\0') {
    local_460 = 0.0;
    cVar2 = (**(code **)(*param_2 + 0x34))(&DAT_1238ccb0,&local_460);
    dVar8 = local_460;
    if (cVar2 == '\0') {
      dVar8 = 0.0;
    }
    param_1[7] = (int)(float)dVar8;
  }
  if ((DAT_1238cc5c & 0x400) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x400;
    FUN_100f67b0(L"SkillSpecialAttack_Sleep");
  }
  if ((DAT_1238cc5c & 0x800) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x800;
    iVar3 = FUN_100e1cb0(DAT_1238ccc0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ccc4);
  if (cVar2 != '\0') {
    local_460 = 0.0;
    cVar2 = (**(code **)(*param_2 + 0x34))(&DAT_1238ccc4,&local_460);
    dVar8 = local_460;
    if (cVar2 == '\0') {
      dVar8 = 0.0;
    }
    param_1[8] = (int)(float)dVar8;
  }
  if ((DAT_1238cc5c & 0x1000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x1000;
    FUN_100f67b0(L"SkillSpecialAttack_Dynamite");
  }
  if ((DAT_1238cc5c & 0x2000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_1238ccd4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ccd8);
  if (cVar2 != '\0') {
    local_460 = 0.0;
    cVar2 = (**(code **)(*param_2 + 0x34))(&DAT_1238ccd8,&local_460);
    dVar8 = local_460;
    if (cVar2 == '\0') {
      dVar8 = 0.0;
    }
    param_1[10] = (int)(float)dVar8;
  }
  if (param_1[6] == 0) {
    param_1[6] = 1;
  }
  iVar3 = 0;
  if ((DAT_1238cc5c & 0x4000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x4000;
    FUN_100f67b0(L"IsTown");
  }
  if ((DAT_1238cc5c & 0x8000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x8000;
    iVar5 = FUN_100e1cb0(DAT_1238cce8);
    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ccec);
  if (cVar2 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar5 = FUN_100e1c50(DAT_1238cce8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238ccec);
  }
  iVar5 = 0;
  *(bool *)(param_1 + 0xb) = iVar3 == 1;
  if ((DAT_1238cc5c & 0x10000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x10000;
    FUN_100f67b0(L"IsAngry");
  }
  if ((DAT_1238cc5c & 0x20000) == 0) {
    DAT_1238cc5c = DAT_1238cc5c | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_1238ccfc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cd00);
  if (cVar2 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ccfc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x20))(&DAT_1238cd00);
  }
  *(bool *)((int)param_1 + 0x2d) = iVar5 == 1;
  iVar3 = (**(code **)(*param_1 + 0x30))();
  param_1[4] = iVar3;
  (**(code **)(*param_1 + 0x38))();
  piVar1 = local_464;
  switch(local_464) {
  case (int *)0x1:
  case (int *)0x2:
  case (int *)0x3:
  case (int *)0x9:
    if ((DAT_1238cc5c & 0x40000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x40000;
      FUN_100f67b0(&UNK_11d3f9c0);
    }
    if ((DAT_1238cc5c & 0x80000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x80000;
      iVar3 = FUN_100e1cb0(uRam1238cd10);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cd14);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(uRam1238cd10);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(param_1 + 0xe,0x1238cd14);
    }
  case (int *)0x4:
  case (int *)0x5:
  case (int *)0x6:
  case (int *)0x7:
  case (int *)0x8:
    switch(piVar1) {
    case (int *)0x1:
    case (int *)0x2:
    case (int *)0x3:
    case (int *)0x9:
      FUN_116d0aa0(param_2);
    }
  default:
    if ((DAT_1238cc5c & 0x100000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x100000;
      FUN_100f67b0(L"group1");
    }
    if ((DAT_1238cc5c & 0x200000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x200000;
      iVar3 = FUN_100e1cb0(DAT_1238cd24);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cd28);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_1238cd24);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cd28);
      param_1[0x2c] = iVar3;
    }
    if ((DAT_1238cc5c & 0x400000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x400000;
      FUN_100f67b0(L"group2");
    }
    if ((DAT_1238cc5c & 0x800000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x800000;
      iVar3 = FUN_100e1cb0(DAT_1238cd38);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cd3c);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_1238cd38);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cd3c);
      param_1[0x2d] = iVar3;
    }
    if ((DAT_1238cc5c & 0x1000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x1000000;
      FUN_100f67b0(L"group3");
    }
    if ((DAT_1238cc5c & 0x2000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x2000000;
      iVar3 = FUN_100e1cb0(DAT_1238cd4c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cd50);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_1238cd4c);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cd50);
      param_1[0x2e] = iVar3;
    }
    if ((DAT_1238cc5c & 0x4000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x4000000;
      FUN_100f67b0(L"group4");
    }
    if ((DAT_1238cc5c & 0x8000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x8000000;
      iVar3 = FUN_100e1cb0(DAT_1238cd60);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cd64);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_1238cd60);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238cd64);
      param_1[0x2f] = iVar3;
    }
  }
  switch(piVar1) {
  case (int *)0x1:
  case (int *)0x2:
  case (int *)0x9:
    if ((DAT_1238cc5c & 0x10000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x10000000;
      FUN_100f67b0(L"FireModeName");
    }
    if ((DAT_1238cc5c & 0x20000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x20000000;
      iVar3 = FUN_100e1cb0(uRam1238cd74);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cd78);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      uVar9 = uRam1238cd74;
      goto code_r0x116ce90e;
    }
    uVar9 = 0x1238cd78;
    piVar6 = param_1 + 0x30;
code_r0x116ce9e1:
    (**(code **)(*param_2 + 0x24))(piVar6,uVar9);
    break;
  case (int *)0x3:
  case (int *)0x4:
  case (int *)0x8:
    break;
  case (int *)0x5:
  case (int *)0x6:
  case (int *)0x7:
    if ((DAT_1238cc5c & 0x40000000) == 0) {
      DAT_1238cc5c = DAT_1238cc5c | 0x40000000;
      FUN_100f67b0(L"AnimSeq");
    }
    if (-1 < (int)DAT_1238cc5c) {
      DAT_1238cc5c = DAT_1238cc5c | 0x80000000;
      iVar3 = FUN_100e1cb0(uRam1238cd88);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cd8c);
    if (cVar2 != '\0') {
      uVar9 = 0x1238cd8c;
      piVar6 = param_1 + 0x36;
      goto code_r0x116ce9e1;
    }
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    uVar9 = uRam1238cd88;
code_r0x116ce90e:
    iVar3 = FUN_100e1c50(uVar9);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    break;
  default:
    goto LAB_116ceff8;
  }
  switch(piVar1) {
  case (int *)0x1:
  case (int *)0x4:
  case (int *)0x5:
  case (int *)0x6:
  case (int *)0x7:
  case (int *)0x9:
    if ((DAT_1238cda0 & 1) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 1;
      FUN_100f67b0(L"SkillAttack");
    }
    if ((DAT_1238cda0 & 2) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 2;
      iVar3 = FUN_100e1cb0(uRam1238cd9c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cda4);
    if (cVar2 != '\0') {
      local_460 = DAT_11de9978;
      cVar2 = (**(code **)(*param_2 + 0x34))(0x1238cda4,&local_460);
      dVar8 = DAT_11de9978;
      if (cVar2 != '\0') {
        dVar8 = local_460;
      }
      param_1[0x3c] = (int)(float)dVar8;
    }
    if ((DAT_1238cda0 & 4) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 4;
      FUN_100f67b0(L"SkillAttrAttack");
    }
    if ((DAT_1238cda0 & 8) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 8;
      iVar3 = FUN_100e1cb0(uRam1238cdb4);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cdb8);
    if (cVar2 != '\0') {
      local_460 = DAT_11de9978;
      cVar2 = (**(code **)(*param_2 + 0x34))(0x1238cdb8,&local_460);
      dVar8 = DAT_11de9978;
      if (cVar2 != '\0') {
        dVar8 = local_460;
      }
      param_1[0x3d] = (int)(float)dVar8;
    }
    if ((DAT_1238cda0 & 0x10) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 0x10;
      FUN_100f67b0(L"SkillSpecialAttack");
    }
    if ((DAT_1238cda0 & 0x20) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 0x20;
      iVar3 = FUN_100e1cb0(uRam1238cdc8);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cdcc);
    if (cVar2 != '\0') {
      local_460 = DAT_11de9978;
      cVar2 = (**(code **)(*param_2 + 0x34))(0x1238cdcc,&local_460);
      dVar8 = DAT_11de9978;
      if (cVar2 != '\0') {
        dVar8 = local_460;
      }
      param_1[0x3e] = (int)(float)dVar8;
    }
    if ((DAT_1238cda0 & 0x40) == 0) {
      DAT_1238cda0 = DAT_1238cda0 | 0x40;
      FUN_100f67b0(L"AttackInfo");
    }
    if (-1 < (char)DAT_1238cda0) {
      DAT_1238cda0 = DAT_1238cda0 | 0x80;
      iVar3 = FUN_100e1cb0(uRam1238cddc);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cde0);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(uRam1238cddc);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(param_1 + 0x3f,0x1238cde0);
    }
  case (int *)0x2:
  case (int *)0x3:
  case (int *)0x8:
    switch(piVar1) {
    case (int *)0x1:
    case (int *)0x9:
      if ((DAT_1238cda0 & 0x100) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x100;
        FUN_100f67b0(&DAT_11d3fab0);
      }
      if ((DAT_1238cda0 & 0x200) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x200;
        iVar3 = FUN_100e1cb0(uRam1238cdf0);
        FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
      }
      cVar2 = (**(code **)(*param_2 + 0x10))(0x1238cdf4);
      if (cVar2 == '\0') {
        local_408 = cVar2;
        memset(local_407,0,0x3ff);
        iVar3 = FUN_100e1c50(uRam1238cdf0);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x20))(0x1238cdf4);
        param_1[0x45] = iVar3;
      }
      if ((DAT_1238cda0 & 0x400) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x400;
        FUN_100f67b0(&UNK_11d3fab8);
      }
      if ((DAT_1238cda0 & 0x800) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x800;
        iVar3 = FUN_100e1cb0(uRam1238ce04);
        FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
      }
      cVar2 = (**(code **)(*param_2 + 0x10))(0x1238ce08);
      if (cVar2 == '\0') {
        local_408 = cVar2;
        memset(local_407,0,0x3ff);
        iVar3 = FUN_100e1c50(uRam1238ce04);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x20))(0x1238ce08);
        param_1[0x46] = iVar3;
      }
      if ((DAT_1238cda0 & 0x1000) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x1000;
        FUN_100f67b0(&UNK_11d3fac0);
      }
      if ((DAT_1238cda0 & 0x2000) == 0) {
        DAT_1238cda0 = DAT_1238cda0 | 0x2000;
        iVar3 = FUN_100e1cb0(uRam1238ce18);
        FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
      }
      cVar2 = (**(code **)(*param_2 + 0x10))(0x1238ce1c);
      if (cVar2 == '\0') {
        local_408 = cVar2;
        memset(local_407,0,0x3ff);
        iVar3 = FUN_100e1c50(uRam1238ce18);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x20))(0x1238ce1c);
        param_1[0x49] = iVar3;
      }
      FUN_116d0d60(param_2);
    case (int *)0x2:
    case (int *)0x3:
    case (int *)0x4:
    case (int *)0x5:
    case (int *)0x6:
    case (int *)0x7:
    case (int *)0x8:
      switch(piVar1) {
      case (int *)0x2:
        if ((DAT_1238cda0 & 0x4000) == 0) {
          DAT_1238cda0 = DAT_1238cda0 | 0x4000;
          FUN_100f67b0(L"CBEvent");
        }
        if ((DAT_1238cda0 & 0x8000) == 0) {
          DAT_1238cda0 = DAT_1238cda0 | 0x8000;
          iVar3 = FUN_100e1cb0(uRam1238ce2c);
          FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
        }
        cVar2 = (**(code **)(*param_2 + 0x10))(0x1238ce30);
        if (cVar2 == '\0') {
          local_408 = cVar2;
          memset(local_407,0,0x3ff);
          iVar3 = FUN_100e1c50(uRam1238ce2c);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
          FUN_100ee330(&local_408,1);
        }
        else {
          (**(code **)(*param_2 + 0x24))(param_1 + 0x4b,0x1238ce30);
        }
      }
    }
  }
LAB_116ceff8:
  local_410 = local_430;
  local_430[0] = 0;
  local_40c = local_410;
  if ((DAT_1238cda0 & 0x10000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x10000;
    FUN_100f67b0(&DAT_11d3fadc);
  }
  if ((DAT_1238cda0 & 0x20000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_1238ce40);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ce44);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ce40);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_1238ce44);
  }
  iVar3 = FUN_1186f860(local_430);
  param_1[0x58] = iVar3;
  if ((DAT_1238cda0 & 0x40000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x40000;
    FUN_100f67b0(&DAT_11d3faf0);
  }
  if ((DAT_1238cda0 & 0x80000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_1238ce54);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ce58);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ce54);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0x59,&DAT_1238ce58);
  }
  if ((DAT_1238cda0 & 0x100000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x100000;
    FUN_100f67b0(&DAT_11d3fb04);
  }
  if ((DAT_1238cda0 & 0x200000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_1238ce68);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ce6c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ce68);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 99,&DAT_1238ce6c);
  }
  FUN_1186eb90(param_1 + 0x57);
  if ((DAT_1238cda0 & 0x400000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x400000;
    FUN_100f67b0(L"eventname");
  }
  if ((DAT_1238cda0 & 0x800000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_1238ce7c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ce80);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ce7c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x9d,&DAT_1238ce80);
  }
  if ((DAT_1238cda0 & 0x1000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x1000000;
    FUN_100f67b0(&DAT_11d3fb2c);
  }
  if ((DAT_1238cda0 & 0x2000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_1238ce90);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ce94);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ce90);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_1238ce94);
  }
  iVar3 = FUN_1186f860(local_430);
  param_1[0xa4] = iVar3;
  if ((DAT_1238cda0 & 0x4000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x4000000;
    FUN_100f67b0(&DAT_11d3fb40);
  }
  if ((DAT_1238cda0 & 0x8000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_1238cea4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cea8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cea4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0xa5,&DAT_1238cea8);
  }
  if ((DAT_1238cda0 & 0x10000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x10000000;
    FUN_100f67b0(&DAT_11d3fb58);
  }
  if ((DAT_1238cda0 & 0x20000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x20000000;
    iVar3 = FUN_100e1cb0(DAT_1238ceb8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cebc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238ceb8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0xaf,&DAT_1238cebc);
  }
  FUN_1186eb90(param_1 + 0xa3);
  if ((DAT_1238cda0 & 0x40000000) == 0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x40000000;
    FUN_100f67b0(&DAT_11d3fb70);
  }
  if (-1 < (int)DAT_1238cda0) {
    DAT_1238cda0 = DAT_1238cda0 | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_1238cecc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ced0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cecc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_1238ced0);
  }
  iVar3 = FUN_1186f860(local_430);
  param_1[0xf0] = iVar3;
  if ((DAT_1238cee4 & 1) == 0) {
    DAT_1238cee4 = DAT_1238cee4 | 1;
    FUN_100f67b0(&DAT_11d3fb84);
  }
  if ((DAT_1238cee4 & 2) == 0) {
    DAT_1238cee4 = DAT_1238cee4 | 2;
    iVar3 = FUN_100e1cb0(DAT_1238cee0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cee8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cee0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0xf1,&DAT_1238cee8);
  }
  if ((DAT_1238cee4 & 4) == 0) {
    DAT_1238cee4 = DAT_1238cee4 | 4;
    FUN_100f67b0(&DAT_11d3fb94);
  }
  if ((DAT_1238cee4 & 8) == 0) {
    DAT_1238cee4 = DAT_1238cee4 | 8;
    iVar3 = FUN_100e1cb0(DAT_1238cef8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238cefc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238cef8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0xfb,&DAT_1238cefc);
  }
  FUN_1186eb90(param_1 + 0xef);
  puVar4 = (undefined4 *)param_1[0x137];
  local_464 = param_1;
  if (puVar4 == (undefined4 *)param_1[0x138]) {
    FUN_116d0760(puVar4,&local_464,&local_465,1,1);
  }
  else {
    *puVar4 = param_1;
    param_1[0x137] = param_1[0x137] + 4;
  }
  if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_116d28d0 @ 116d28d0  size=1032 ===== */
// calls: memset
// strings:
//   u"ItemID"
//   u"ItemAmountMin"
//   u"ItemAmountMax"
//   u"DeleteWhenFull"
//   u"BuffID"
//   u"BindType"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ItemID""
     "u"ItemAmountMin""
     "u"ItemAmountMax""
     "u"DeleteWhenFull""
     "u"BuffID""
     "u"BindType"" */

void __thiscall FUN_116d28d0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1238d018 & 1) == 0) {
    DAT_1238d018 = DAT_1238d018 | 1;
    FUN_100f67b0(L"ItemID");
  }
  if ((DAT_1238d018 & 2) == 0) {
    DAT_1238d018 = DAT_1238d018 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238d014);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d01c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238d014);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1238d01c);
    *param_1 = uVar4;
  }
  if ((DAT_1238d018 & 4) == 0) {
    DAT_1238d018 = DAT_1238d018 | 4;
    FUN_100f67b0(L"ItemAmountMin");
  }
  if ((DAT_1238d018 & 8) == 0) {
    DAT_1238d018 = DAT_1238d018 | 8;
    iVar2 = FUN_100e1cb0(DAT_1238d02c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d030);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238d02c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = local_40c;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1238d030);
  }
  if ((DAT_1238d018 & 0x10) == 0) {
    DAT_1238d018 = DAT_1238d018 | 0x10;
    FUN_100f67b0(L"ItemAmountMax");
  }
  if ((DAT_1238d018 & 0x20) == 0) {
    DAT_1238d018 = DAT_1238d018 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_1238d040);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d044);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238d040);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar3 = local_40c;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238d044);
  }
  param_1[2] = iVar3;
  uVar5 = DAT_1238d018;
  param_1[1] = iVar2;
  if ((uVar5 & 0x40) == 0) {
    DAT_1238d018 = uVar5 | 0x40;
    FUN_100f67b0(L"DeleteWhenFull");
    uVar5 = DAT_1238d018;
  }
  if (-1 < (char)uVar5) {
    DAT_1238d018 = uVar5 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_1238d054);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d058);
  if (cVar1 != '\0') {
    local_40c = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_1238d058,&local_40c);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_40c;
    }
    *(bool *)(param_1 + 3) = iVar2 != 0;
  }
  if ((DAT_1238d018 & 0x100) == 0) {
    DAT_1238d018 = DAT_1238d018 | 0x100;
    FUN_100f67b0(L"BuffID");
  }
  if ((DAT_1238d018 & 0x200) == 0) {
    DAT_1238d018 = DAT_1238d018 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_1238d068);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d06c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238d068);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1238d06c);
    param_1[4] = uVar4;
  }
  if ((DAT_1238d018 & 0x400) == 0) {
    DAT_1238d018 = DAT_1238d018 | 0x400;
    FUN_10a30020(L"BindType");
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238d07c);
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0x20))(&DAT_1238d07c);
    if (uVar5 < 5) {
      param_1[5] = uVar5;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_117175c0 @ 117175c0  size=1952 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"ResourceType"
//   u"ResourceName"
//   u"DefaultSkillID"
//   u"MainType"
//   u"MidType"
//   u"SubType"
//   u"IgnoreTool"
//   u"CollectPriority"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ResourceType""
     "u"ResourceName""
     "u"DefaultSkillID""
     "u"MainType""
     "u"MidType""
     "u"SubType""
     "u"IgnoreTool""
     "u"CollectPriority"" */

void __thiscall FUN_117175c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined1 *local_438;
  undefined4 local_434;
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1238f194 & 1) == 0) {
    DAT_1238f194 = DAT_1238f194 | 1;
    FUN_100f67b0(L"ResourceType");
  }
  if ((DAT_1238f194 & 2) == 0) {
    DAT_1238f194 = DAT_1238f194 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238f190);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f198);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238f190);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238f198);
  if (uVar3 < 0x14) {
    FUN_100e5570();
    if ((DAT_1238f194 & 4) == 0) {
      DAT_1238f194 = DAT_1238f194 | 4;
      FUN_100f67b0(L"ResourceName");
    }
    if ((DAT_1238f194 & 8) == 0) {
      DAT_1238f194 = DAT_1238f194 | 8;
      iVar2 = FUN_100e1cb0(DAT_1238f1a8);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f1ac);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_1238f1a8);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_410 = local_430;
      local_430[0] = 0;
      local_40c = local_410;
      (**(code **)(*param_2 + 0x28))(local_430,&DAT_1238f1ac);
      puVar4 = (undefined4 *)FUN_100e5530(&local_434,local_40c);
      puVar7 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)*puVar4;
      }
      CPet__SetName(puVar7);
      FUN_100e5670();
      if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_40c);
      }
    }
    local_440 = 0;
    if ((DAT_1238f194 & 0x10) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x10;
      FUN_100f67b0(L"DefaultSkillID");
    }
    if ((DAT_1238f194 & 0x20) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x20;
      iVar2 = FUN_100e1cb0(DAT_1238f1bc);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f1c0);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_1238f1bc);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_440 = (**(code **)(*param_2 + 0x20))(&DAT_1238f1c0);
    }
    local_448 = 0;
    if ((DAT_1238f194 & 0x40) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x40;
      FUN_100f67b0(L"MainType");
    }
    if (-1 < (char)DAT_1238f194) {
      DAT_1238f194 = DAT_1238f194 | 0x80;
      iVar2 = FUN_100e1cb0(DAT_1238f1d0);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f1d4);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_1238f1d0);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_448 = (**(code **)(*param_2 + 0x20))(&DAT_1238f1d4);
    }
    local_43c = 0;
    if ((DAT_1238f194 & 0x100) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x100;
      FUN_100f67b0(L"MidType");
    }
    if ((DAT_1238f194 & 0x200) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x200;
      iVar2 = FUN_100e1cb0(DAT_1238f1e4);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f1e8);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_1238f1e4);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_43c = (**(code **)(*param_2 + 0x20))(&DAT_1238f1e8);
    }
    local_434 = 0;
    if ((DAT_1238f194 & 0x400) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x400;
      FUN_100f67b0(L"SubType");
    }
    if ((DAT_1238f194 & 0x800) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x800;
      iVar2 = FUN_100e1cb0(DAT_1238f1f8);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f1fc);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_1238f1f8);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_434 = (**(code **)(*param_2 + 0x20))(&DAT_1238f1fc);
    }
    iVar2 = 0;
    if ((DAT_1238f194 & 0x1000) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x1000;
      FUN_100f67b0(L"IgnoreTool");
    }
    if ((DAT_1238f194 & 0x2000) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x2000;
      iVar5 = FUN_100e1cb0(DAT_1238f20c);
      FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f210);
    if (cVar1 == '\0') {
      local_408 = '\0';
      memset(local_407,0,0x3ff);
      iVar5 = FUN_100e1c50(DAT_1238f20c);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1238f210);
    }
    iVar5 = uVar3 + 1;
    if ((DAT_1238f194 & 0x4000) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x4000;
      FUN_100f67b0(L"CollectPriority");
    }
    if ((DAT_1238f194 & 0x8000) == 0) {
      DAT_1238f194 = DAT_1238f194 | 0x8000;
      iVar6 = FUN_100e1cb0(DAT_1238f220);
      FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238f224);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar6 = FUN_100e1c50(DAT_1238f220);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar5 = (**(code **)(*param_2 + 0x20))(&DAT_1238f224);
    }
    puVar7 = &DAT_11d9d32b;
    if (local_438 != (undefined1 *)0x0) {
      puVar7 = local_438;
    }
    CPet__SetName(puVar7);
    iVar6 = param_1 + uVar3 * 0x1c;
    if (*(int *)(param_1 + 0x48 + uVar3 * 0x1c) == 0) {
      *(undefined4 *)(iVar6 + 0x48) = local_440;
      *(undefined4 *)(iVar6 + 0x3c) = local_448;
      *(undefined4 *)(iVar6 + 0x40) = local_43c;
      *(undefined4 *)(iVar6 + 0x44) = local_434;
      *(int *)(iVar6 + 0x4c) = iVar5;
      *(bool *)(iVar6 + 0x50) = iVar2 != 0;
    }
    FUN_100e5670();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1174c730 @ 1174c730  size=78 ===== */
// calls: CPetSkillSlotUnlockInfo::GetInfoMgrByName
// strings:
//   "CPetSkillSlotUnlockInfo"

/* [RE-AUTO c0]
   calls: CPetSkillSlotUnlockInfo::GetManagers
   strings:
     ""CPetSkillSlotUnlockInfo"" */

undefined4 FUN_1174c730(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSkillSlotUnlockInfo__GetInfoMgrByName(0,"CPetSkillSlotUnlockInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11753c90 @ 11753c90  size=52 ===== */
// calls: CPetSupportSkillInfo::GetInfoManager
// strings:
//   "CPetSupportSkillInfo"

/* [RE-AUTO c0]
   calls: CPetSupportSkillInfo::GetManagers
   strings:
     ""CPetSupportSkillInfo"" */

undefined4 FUN_11753c90(int param_1)

{
  int iVar1;
  
  iVar1 = CPetSupportSkillInfo__GetInfoManager(0,"CPetSupportSkillInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11759cb0 @ 11759cb0  size=30 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_11759cb0(int param_1)

{
  if (param_1 != 0) {
    FUN_10500130(0,"CBuffInfo",0);
  }
  return;
}



/* ===== FUN_11759d60 @ 11759d60  size=48 ===== */
// strings:
//   "SkillGroup"

/* [RE-AUTO c0]
   strings:
     ""SkillGroup"" */

void FUN_11759d60(undefined4 *param_1)

{
  if ((DAT_12391d88 & 1) == 0) {
    DAT_12391d88 = DAT_12391d88 | 1;
    FUN_1024f010("SkillGroup");
  }
  *param_1 = DAT_12391d84;
  return;
}



/* ===== FUN_11761710 @ 11761710  size=141 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_11761710(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  FUN_118a68a0(param_1,&local_8);
  iVar3 = local_8;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar3 == -1) ||
     (((iVar3 == 0 && (*(int *)(iVar2 + 0x30) != 0)) || (*(int *)(iVar2 + 0x28) == 0)))) {
    *param_2 = 0;
    iVar3 = FUN_118a6ef0();
    *param_2 = iVar3;
    return;
  }
  iVar3 = iVar3 - *(int *)(iVar2 + 0x30);
  if ((-1 < iVar3) && (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4);
      goto LAB_11761788;
    }
  }
  iVar3 = 0;
LAB_11761788:
  *param_2 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_118a6ef0();
    *param_2 = iVar3;
  }
  return;
}



/* ===== FUN_1177eb00 @ 1177eb00  size=37 ===== */
// strings:
//   "EquipRandPassiveSkillActivateActionDef"

/* [RE-AUTO c0]
   strings:
     ""EquipRandPassiveSkillActivateActionDef"" */

int FUN_1177eb00(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipRandPassiveSkillActivateActionDef","");
  return param_1;
}



/* ===== FUN_1177eb30 @ 1177eb30  size=37 ===== */
// strings:
//   "EquipRandPassiveSkillActivateSetDef"

/* [RE-AUTO c0]
   strings:
     ""EquipRandPassiveSkillActivateSetDef"" */

int FUN_1177eb30(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipRandPassiveSkillActivateSetDef","");
  return param_1;
}



/* ===== FUN_1177eb60 @ 1177eb60  size=37 ===== */
// strings:
//   "EquipSkillPointCheckDef"

/* [RE-AUTO c0]
   strings:
     ""EquipSkillPointCheckDef"" */

int FUN_1177eb60(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipSkillPointCheckDef","");
  return param_1;
}



/* ===== FUN_1177eb90 @ 1177eb90  size=37 ===== */
// strings:
//   "EquipSkillsPointAllCheckDef"

/* [RE-AUTO c0]
   strings:
     ""EquipSkillsPointAllCheckDef"" */

int FUN_1177eb90(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipSkillsPointAllCheckDef","");
  return param_1;
}



/* ===== FUN_1177f490 @ 1177f490  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneSkillLevelCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneSkillLevelCheckDef"" */

int FUN_1177f490(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneSkillLevelCheckDef","");
  return param_1;
}



/* ===== FUN_1177f4c0 @ 1177f4c0  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneSkillLevelsCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneSkillLevelsCheckDef"" */

int FUN_1177f4c0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneSkillLevelsCheckDef","");
  return param_1;
}



/* ===== FUN_1177f520 @ 1177f520  size=37 ===== */
// strings:
//   "SpeakAddBuffContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffContentDef"" */

int FUN_1177f520(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffContentDef","");
  return param_1;
}



/* ===== FUN_1177f550 @ 1177f550  size=37 ===== */
// strings:
//   "SpeakAddBuffGeneContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffGeneContentDef"" */

int FUN_1177f550(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffGeneContentDef","");
  return param_1;
}



/* ===== FUN_1177f580 @ 1177f580  size=37 ===== */
// strings:
//   "SpeakAddBuffGroupContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffGroupContentDef"" */

int FUN_1177f580(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffGroupContentDef","");
  return param_1;
}



/* ===== FUN_1177f640 @ 1177f640  size=37 ===== */
// strings:
//   "SpeakUseSkillContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseSkillContentDef"" */

int FUN_1177f640(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseSkillContentDef","");
  return param_1;
}



/* ===== FUN_1177f730 @ 1177f730  size=37 ===== */
// strings:
//   "TaskAccSuitSkillUnlockContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskAccSuitSkillUnlockContentDef"" */

int FUN_1177f730(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskAccSuitSkillUnlockContentDef","");
  return param_1;
}



/* ===== FUN_1177f850 @ 1177f850  size=37 ===== */
// strings:
//   "TaskBuffFilterDef"

/* [RE-AUTO c0]
   strings:
     ""TaskBuffFilterDef"" */

int FUN_1177f850(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskBuffFilterDef","");
  return param_1;
}



/* ===== FUN_117805d0 @ 117805d0  size=37 ===== */
// strings:
//   "TaskUseSkillContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskUseSkillContentDef"" */

int FUN_117805d0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskUseSkillContentDef","");
  return param_1;
}



/* ===== FUN_117807e0 @ 117807e0  size=37 ===== */
// strings:
//   "EquipRandPassiveSkillActivateActionDef"

/* [RE-AUTO c0]
   strings:
     ""EquipRandPassiveSkillActivateActionDef"" */

int FUN_117807e0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipRandPassiveSkillActivateActionDef","");
  return param_1;
}



/* ===== FUN_11780810 @ 11780810  size=37 ===== */
// strings:
//   "EquipRandPassiveSkillActivateSetDef"

/* [RE-AUTO c0]
   strings:
     ""EquipRandPassiveSkillActivateSetDef"" */

int FUN_11780810(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipRandPassiveSkillActivateSetDef","");
  return param_1;
}



/* ===== FUN_11780840 @ 11780840  size=37 ===== */
// strings:
//   "EquipSkillPointCheckDef"

/* [RE-AUTO c0]
   strings:
     ""EquipSkillPointCheckDef"" */

int FUN_11780840(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipSkillPointCheckDef","");
  return param_1;
}



/* ===== FUN_11780870 @ 11780870  size=37 ===== */
// strings:
//   "EquipSkillsPointAllCheckDef"

/* [RE-AUTO c0]
   strings:
     ""EquipSkillsPointAllCheckDef"" */

int FUN_11780870(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("EquipSkillsPointAllCheckDef","");
  return param_1;
}



/* ===== FUN_11781170 @ 11781170  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneSkillLevelCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneSkillLevelCheckDef"" */

int FUN_11781170(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneSkillLevelCheckDef","");
  return param_1;
}



/* ===== FUN_117811a0 @ 117811a0  size=37 ===== */
// strings:
//   "SoulBeastSoulStoneSkillLevelsCheckDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSoulStoneSkillLevelsCheckDef"" */

int FUN_117811a0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSoulStoneSkillLevelsCheckDef","");
  return param_1;
}



/* ===== FUN_11781200 @ 11781200  size=37 ===== */
// strings:
//   "SpeakAddBuffContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffContentDef"" */

int FUN_11781200(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffContentDef","");
  return param_1;
}



/* ===== FUN_11781230 @ 11781230  size=37 ===== */
// strings:
//   "SpeakAddBuffGeneContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffGeneContentDef"" */

int FUN_11781230(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffGeneContentDef","");
  return param_1;
}



/* ===== FUN_11781260 @ 11781260  size=37 ===== */
// strings:
//   "SpeakAddBuffGroupContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakAddBuffGroupContentDef"" */

int FUN_11781260(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakAddBuffGroupContentDef","");
  return param_1;
}



/* ===== FUN_11781320 @ 11781320  size=37 ===== */
// strings:
//   "SpeakUseSkillContentDef"

/* [RE-AUTO c0]
   strings:
     ""SpeakUseSkillContentDef"" */

int FUN_11781320(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SpeakUseSkillContentDef","");
  return param_1;
}



/* ===== FUN_11781410 @ 11781410  size=37 ===== */
// strings:
//   "TaskAccSuitSkillUnlockContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskAccSuitSkillUnlockContentDef"" */

int FUN_11781410(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskAccSuitSkillUnlockContentDef","");
  return param_1;
}



/* ===== FUN_11781530 @ 11781530  size=37 ===== */
// strings:
//   "TaskBuffFilterDef"

/* [RE-AUTO c0]
   strings:
     ""TaskBuffFilterDef"" */

int FUN_11781530(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskBuffFilterDef","");
  return param_1;
}



/* ===== FUN_117822b0 @ 117822b0  size=37 ===== */
// strings:
//   "TaskUseSkillContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskUseSkillContentDef"" */

int FUN_117822b0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskUseSkillContentDef","");
  return param_1;
}



/* ===== FUN_11782630 @ 11782630  size=77 ===== */
// strings:
//   "SkillGroup"
//   "Point"

/* [RE-AUTO c0]
   strings:
     ""SkillGroup""
     ""Point"" */

void __thiscall FUN_11782630(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,"SkillGroup");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"Point");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  return;
}



/* ===== FUN_11782680 @ 11782680  size=44 ===== */
// strings:
//   "SkillsPointAll"

/* [RE-AUTO c0]
   strings:
     ""SkillsPointAll"" */

void __thiscall FUN_11782680(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,"SkillsPointAll");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  return;
}



/* ===== FUN_11783ad0 @ 11783ad0  size=77 ===== */
// strings:
//   "Skill"
//   "Level"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""Level"" */

void __thiscall FUN_11783ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,"Skill");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"Level");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  return;
}



/* ===== FUN_11783c00 @ 11783c00  size=109 ===== */
// strings:
//   "BuffGene"
//   "Count"

/* [RE-AUTO c0]
   strings:
     ""BuffGene""
     ""Count"" */

void __thiscall FUN_11783c00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,&DAT_11dbe654);
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"BuffGene");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0xc);
  }
  return;
}



/* ===== FUN_11783c70 @ 11783c70  size=109 ===== */
// strings:
//   "BuffGroup"
//   "Count"

/* [RE-AUTO c0]
   strings:
     ""BuffGroup""
     ""Count"" */

void __thiscall FUN_11783c70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,&DAT_11dbe654);
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"BuffGroup");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0xc);
  }
  return;
}



/* ===== FUN_11783f50 @ 11783f50  size=109 ===== */
// strings:
//   "Skill"
//   "Count"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""Count"" */

void __thiscall FUN_11783f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,&DAT_11dbe654);
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"Skill");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0xc);
  }
  return;
}



/* ===== FUN_11784560 @ 11784560  size=184 ===== */
// strings:
//   "Order"
//   "IsDebuff"
//   "ClearType"
//   "EventFilters"

/* [RE-AUTO c0]
   strings:
     ""Order""
     ""IsDebuff""
     ""ClearType""
     ""EventFilters"" */

void __thiscall FUN_11784560(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_2;
  iVar2 = FUN_118a6e60(param_2,&DAT_11dbe654);
  if (iVar2 != 0) {
    FUN_118a68a0(iVar2,param_1 + 4);
  }
  iVar2 = FUN_118a6e60(uVar1,"Order");
  if (iVar2 != 0) {
    FUN_118a68a0(iVar2,param_1 + 8);
  }
  iVar2 = FUN_118a6e60(uVar1,"IsDebuff");
  if (iVar2 != 0) {
    FUN_118a6e00(iVar2,param_1 + 0xc);
  }
  iVar2 = FUN_118a6e60(uVar1,"ClearType");
  if (iVar2 != 0) {
    param_2 = 0;
    FUN_118a68a0(iVar2,&param_2);
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  iVar2 = FUN_118a6e60(uVar1,"EventFilters");
  if (iVar2 != 0) {
    FUN_1176a620(iVar2,param_1 + 0x14);
  }
  return;
}



/* ===== FUN_117857d0 @ 117857d0  size=77 ===== */
// strings:
//   "Skill"
//   "Degree"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""Degree"" */

void __thiscall FUN_117857d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,"Skill");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e60(param_2,"Degree");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 8);
  }
  return;
}



/* ===== FUN_11785820 @ 11785820  size=77 ===== */
// strings:
//   "Skill"
//   "ManufactureLevel"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""ManufactureLevel"" */

void __thiscall FUN_11785820(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e60(param_2,"Skill");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 4);
  }
  iVar1 = FUN_118a6e70(param_2,"ManufactureLevel");
  if (iVar1 != 0) {
    FUN_118a68e0(iVar1,param_1 + 8);
  }
  return;
}



/* ===== FUN_11785870 @ 11785870  size=84 ===== */
// strings:
//   "Skill"
//   "Level"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""Level"" */

void __thiscall FUN_11785870(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_11784560(param_2);
  iVar1 = FUN_118a6e60(param_2,"Skill");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x20);
  }
  iVar1 = FUN_118a6e60(param_2,"Level");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x24);
  }
  return;
}



/* ===== FUN_11785f50 @ 11785f50  size=114 ===== */
// strings:
//   "Skill"
//   "Count"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     ""Count"" */

void __thiscall FUN_11785f50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_2;
  FUN_11784560(param_2);
  iVar2 = FUN_118a6e60(uVar1,"Skill");
  if (iVar2 != 0) {
    param_2 = 0;
    FUN_118a68a0(iVar2,&param_2);
    iVar2 = FUN_116cd660(param_2);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_118a70b0();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  iVar2 = FUN_118a6e60(uVar1,"Count");
  if (iVar2 != 0) {
    FUN_118a68a0(iVar2,param_1 + 0x24);
  }
  return;
}



/* ===== FUN_117bdb00 @ 117bdb00  size=704 ===== */
// calls: memset
// strings:
//   u"EntityClass"
//   u"LootSize"
//   u"LootSkillID"
//   u"LifeTime"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"EntityClass""
     "u"LootSize""
     "u"LootSkillID""
     "u"LifeTime"" */

void __thiscall FUN_117bdb00(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 local_410;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123927dc & 1) == 0) {
    DAT_123927dc = DAT_123927dc | 1;
    FUN_100f67b0(L"EntityClass");
  }
  if ((DAT_123927dc & 2) == 0) {
    DAT_123927dc = DAT_123927dc | 2;
    iVar2 = FUN_100e1cb0(DAT_123927d8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123927e0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123927d8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x18,&DAT_123927e0);
  }
  if ((DAT_123927dc & 4) == 0) {
    DAT_123927dc = DAT_123927dc | 4;
    FUN_100f67b0(L"LootSize");
  }
  if ((DAT_123927dc & 8) == 0) {
    DAT_123927dc = DAT_123927dc | 8;
    iVar2 = FUN_100e1cb0(DAT_123927f0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123927f4);
  if (cVar1 != '\0') {
    local_410 = (double)*(float *)(param_1 + 0x30);
    cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_123927f4,&local_410);
    dVar4 = local_410;
    if (cVar1 == '\0') {
      dVar4 = (double)*(float *)(param_1 + 0x30);
    }
    *(float *)(param_1 + 0x30) = (float)dVar4;
  }
  if ((DAT_123927dc & 0x10) == 0) {
    DAT_123927dc = DAT_123927dc | 0x10;
    FUN_100f67b0(L"LootSkillID");
  }
  if ((DAT_123927dc & 0x20) == 0) {
    DAT_123927dc = DAT_123927dc | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12392804);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392808);
  if (cVar1 != '\0') {
    local_410 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x34),(undefined4)local_410);
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12392808,(int)&local_410 + 4);
    uVar3 = local_410._4_4_;
    if (cVar1 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  if ((DAT_123927dc & 0x40) == 0) {
    DAT_123927dc = DAT_123927dc | 0x40;
    FUN_100f67b0(L"LifeTime");
  }
  if (-1 < (char)DAT_123927dc) {
    DAT_123927dc = DAT_123927dc | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12392818);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239281c);
  if (cVar1 != '\0') {
    local_410 = (double)*(float *)(param_1 + 0x38);
    cVar1 = (**(code **)(*param_2 + 0x34))(&DAT_1239281c,&local_410);
    dVar4 = local_410;
    if (cVar1 == '\0') {
      dVar4 = (double)*(float *)(param_1 + 0x38);
    }
    *(float *)(param_1 + 0x38) = (float)dVar4;
  }
  FUN_117bd8b0(param_2);
  FUN_11a89daa();
  return;
}



/* ===== FUN_117cb800 @ 117cb800  size=78 ===== */
// calls: CAbnormalStatePriorityInfo::GetInfoManager
// strings:
//   "CAbnormalStatePriorityInfo"

/* [RE-AUTO c0]
   calls: CAbnormalStatePriorityInfo::GetManagers
   strings:
     ""CAbnormalStatePriorityInfo"" */

undefined4 FUN_117cb800(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CAbnormalStatePriorityInfo__GetInfoManager(0,"CAbnormalStatePriorityInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== CAbnormalStatePriorityInfo::GetManagers_117cb940 @ 117cb940  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CAbnormalStatePriorityInfo::GetManagers"

/* [RE-AUTO c3]
   id: CAbnormalStatePriorityInfo::GetManagers
   strings:
     ""CAbnormalStatePriorityInfo::GetManagers"" */

undefined4 CAbnormalStatePriorityInfo__GetManagers_117cb940(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12393604 & 1) == 0) {
      DAT_12393604 = DAT_12393604 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CAbnormalStatePriorityInfo::GetManagers")
      ;
      FUN_11a8911f(&LAB_11caaa10);
    }
    return *DAT_123935e8;
  }
  return 0;
}



/* ===== FUN_117ccbd0 @ 117ccbd0  size=78 ===== */
// calls: CAbnormalStateRelationInfo::FindInfoByKey
// strings:
//   "CAbnormalStateRelationInfo"

/* [RE-AUTO c0]
   calls: CAbnormalStateRelationInfo::GetManagers
   strings:
     ""CAbnormalStateRelationInfo"" */

undefined4 FUN_117ccbd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CAbnormalStateRelationInfo__FindInfoByKey(0,"CAbnormalStateRelationInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_117d60c0 @ 117d60c0  size=112 ===== */
// calls: CBuffFilterInfo::FindInfoByKey
// strings:
//   "CBuffFilterInfo"

/* [RE-AUTO c0]
   calls: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo"" */

int FUN_117d60c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
  iVar1 = *(int *)(iVar2 + 0x28);
  if (((iVar1 != 0) && (iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3)) &&
     (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar1 != 0)) {
      iVar2 = 0;
      if (param_2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x18);
      }
      else {
        if (param_2 == 1) {
          return *(int *)(iVar1 + 0x14);
        }
        if (param_2 == 8) {
          return *(int *)(iVar1 + 0x1c);
        }
      }
      return iVar2;
    }
  }
  return param_1;
}



/* ===== FUN_117d6460 @ 117d6460  size=118 ===== */
// calls: CBuffFilterInfo::FindInfoByKey
// strings:
//   "CBuffInfo"
//   "CBuffFilterInfo"

/* [RE-AUTO c0]
   calls: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CBuffFilterInfo"" */

void __fastcall FUN_117d6460(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10500130(0,"CBuffInfo",0);
    CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10500130(0,"CBuffInfo",0);
    CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10500130(0,"CBuffInfo",0);
    CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
  }
  return;
}



/* ===== FUN_117d64e0 @ 117d64e0  size=41 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_117d64e0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_10500130(0,"CBuffInfo",0);
    FUN_117d60c0(param_1,param_2);
  }
  return;
}



/* ===== FUN_117e6cb0 @ 117e6cb0  size=48 ===== */
// strings:
//   "StorageBox"

/* [RE-AUTO c0]
   strings:
     ""StorageBox"" */

void FUN_117e6cb0(undefined4 *param_1)

{
  if ((DAT_12394858 & 1) == 0) {
    DAT_12394858 = DAT_12394858 | 1;
    FUN_1024f010("StorageBox");
  }
  *param_1 = DAT_12394854;
  return;
}



/* ===== FUN_117e6ce0 @ 117e6ce0  size=48 ===== */
// strings:
//   "StorageBoxConst"

/* [RE-AUTO c0]
   strings:
     ""StorageBoxConst"" */

void FUN_117e6ce0(undefined4 *param_1)

{
  if ((DAT_12394860 & 1) == 0) {
    DAT_12394860 = DAT_12394860 | 1;
    FUN_1024f010("StorageBoxConst");
  }
  *param_1 = DAT_1239485c;
  return;
}



/* ===== FUN_1181c060 @ 1181c060  size=216 ===== */
// strings:
//   "ItemPrize"
//   "ItemReclaim"
//   "GoldPrize"
//   "GoldReclaim"
//   "AddBuff"
//   "Teleport"
//   "PlayCutScene"
//   "SendFGEvent"

/* [RE-AUTO c0]
   strings:
     ""ItemPrize""
     ""ItemReclaim""
     ""GoldPrize""
     ""GoldReclaim""
     ""AddBuff""
     ""Teleport""
     ""PlayCutScene""
     ""SendFGEvent"" */

undefined4 FUN_1181c060(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_100fd0c0(param_1,"ItemPrize");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"ItemReclaim");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"GoldPrize");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"GoldReclaim");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"AddBuff");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"Teleport");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x40);
  }
  cVar1 = FUN_100fd0c0(param_1,"PlayCutScene");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x1c);
  }
  cVar1 = FUN_100fd0c0(param_1,"SendFGEvent");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x34);
  }
  return 0;
}



/* ===== FUN_1181c250 @ 1181c250  size=78 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __fastcall FUN_1181c250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1181db80 @ 1181db80  size=89 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

uint FUN_1181db80(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((param_1 != 0xffffffff) &&
      (((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) && (*(int *)(iVar1 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar1 + 0x30), -1 < (int)param_1 &&
      ((int)param_1 < *(int *)(iVar1 + 0x24))))) {
    iVar2 = (int)param_1 % *(int *)(iVar1 + 0x28);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + ((int)param_1 / *(int *)(iVar1 + 0x28)) * 4);
    param_1 = 0;
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + iVar2 * 4), param_1 = 0, iVar1 != 0)) {
      return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x58) == 9);
    }
  }
  return param_1 & 0xffffff00;
}



/* ===== FUN_1182d330 @ 1182d330  size=2464 ===== */
// calls: memset, CPet::SetName, DecodeBuffIdList
// strings:
//   u"ICON"
//   u"Tips"
//   u"SkillVideoID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ICON""
     "u"Tips""
     "u"SkillVideoID"" */

void __thiscall FUN_1182d330(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 local_454 [7];
  undefined1 local_44d;
  int local_44c;
  undefined1 local_448 [16];
  undefined1 *local_438;
  undefined1 *local_434;
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123975d4 & 1) == 0) {
    DAT_123975d4 = DAT_123975d4 | 1;
    FUN_100f67b0(&DAT_11d4e43c);
  }
  if ((DAT_123975d4 & 2) == 0) {
    DAT_123975d4 = DAT_123975d4 | 2;
    iVar3 = FUN_100e1cb0(DAT_123975d0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123975d8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123975d0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123975d8);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123975d4 & 4) == 0) {
    DAT_123975d4 = DAT_123975d4 | 4;
    FUN_100f67b0(&DAT_11d4e448);
  }
  if ((DAT_123975d4 & 8) == 0) {
    DAT_123975d4 = DAT_123975d4 | 8;
    iVar3 = FUN_100e1cb0(DAT_123975e8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123975ec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123975e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123975ec);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_123975d4 & 0x10) == 0) {
    DAT_123975d4 = DAT_123975d4 | 0x10;
    FUN_100f67b0(&DAT_11d432f0);
  }
  if ((DAT_123975d4 & 0x20) == 0) {
    DAT_123975d4 = DAT_123975d4 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123975fc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397600);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123975fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0x18,&DAT_12397600);
  }
  iVar3 = FUN_118998f0(param_1 + 0x18);
  *(int *)(param_1 + 0x40) = iVar3;
  if ((iVar3 != 0xd) && (local_44c = FUN_11679c30(), local_44c != 0)) {
    FUN_1169eed0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
    if ((DAT_123975d4 & 0x40) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x40;
      FUN_100f67b0(&DAT_11d4e460);
    }
    if (-1 < (char)DAT_123975d4) {
      DAT_123975d4 = DAT_123975d4 | 0x80;
      iVar3 = FUN_100e1cb0(DAT_12397610);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397614);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_12397610);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12397614);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    if (*(int *)(param_1 + 0x44) == -1) {
      *(int *)(&DAT_12397564 + *(int *)(param_1 + 0x40) * 4) =
           *(int *)(&DAT_12397564 + *(int *)(param_1 + 0x40) * 4) + 1;
    }
    else {
      *(int *)(&DAT_12397598 + *(int *)(param_1 + 0x40) * 4) =
           *(int *)(&DAT_12397598 + *(int *)(param_1 + 0x40) * 4) + 1;
      FUN_1169f290(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                   *(undefined4 *)(param_1 + 0x10));
      if ((DAT_123975d4 & 0x100) == 0) {
        DAT_123975d4 = DAT_123975d4 | 0x100;
        FUN_100f67b0(&DAT_11d4e46c);
      }
      if ((DAT_123975d4 & 0x200) == 0) {
        DAT_123975d4 = DAT_123975d4 | 0x200;
        iVar3 = FUN_100e1cb0(DAT_12397624);
        FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
      }
      cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397628);
      if (cVar2 == '\0') {
        local_408 = cVar2;
        memset(local_407,0,0x3ff);
        iVar3 = FUN_100e1c50(DAT_12397624);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12397628);
        *(undefined4 *)(param_1 + 0x48) = uVar4;
      }
      if ((DAT_123975d4 & 0x400) == 0) {
        DAT_123975d4 = DAT_123975d4 | 0x400;
        FUN_100f67b0(&DAT_11d4e478);
      }
      if ((DAT_123975d4 & 0x800) == 0) {
        DAT_123975d4 = DAT_123975d4 | 0x800;
        iVar3 = FUN_100e1cb0(DAT_12397638);
        FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
      }
      cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239763c);
      if (cVar2 == '\0') {
        local_408 = cVar2;
        memset(local_407,0,0x3ff);
        iVar3 = FUN_100e1c50(DAT_12397638);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239763c);
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
      }
    }
    if ((DAT_123975d4 & 0x1000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x1000;
      FUN_100f67b0(&DAT_11d4e484);
    }
    if ((DAT_123975d4 & 0x2000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x2000;
      iVar3 = FUN_100e1cb0(DAT_1239764c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397650);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_1239764c);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_410 = local_430;
      local_430[0] = 0;
      local_40c = local_410;
      (**(code **)(*param_2 + 0x28))(local_430,&DAT_12397650);
      puVar5 = (undefined4 *)FUN_100e5530(local_454,local_40c);
      puVar6 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)*puVar5;
      }
      CPet__SetName(puVar6);
      FUN_100e5670();
      if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_40c);
      }
    }
    if ((DAT_123975d4 & 0x4000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x4000;
      FUN_100f67b0(L"ICON");
    }
    if ((DAT_123975d4 & 0x8000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x8000;
      iVar3 = FUN_100e1cb0(DAT_12397660);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397664);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_12397660);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(param_1 + 0x8c,&DAT_12397664);
    }
    if ((DAT_123975d4 & 0x10000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x10000;
      FUN_100f67b0(L"Tips");
    }
    if ((DAT_123975d4 & 0x20000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x20000;
      iVar3 = FUN_100e1cb0(DAT_12397674);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12397678);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_12397674);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_410 = local_430;
      local_430[0] = 0;
      local_40c = local_410;
      (**(code **)(*param_2 + 0x28))(local_430,&DAT_12397678);
      puVar5 = (undefined4 *)FUN_100e5530(local_454,local_40c);
      puVar6 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)*puVar5;
      }
      CPet__SetName(puVar6);
      FUN_100e5670();
      if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_40c);
      }
    }
    local_438 = local_448;
    local_448[0] = 0;
    local_434 = local_438;
    if ((DAT_123975d4 & 0x40000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x40000;
      FUN_100f67b0(L"SkillVideoID");
    }
    if ((DAT_123975d4 & 0x80000) == 0) {
      DAT_123975d4 = DAT_123975d4 | 0x80000;
      iVar3 = FUN_100e1cb0(DAT_12397688);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1239768c);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      iVar3 = FUN_100e1c50(DAT_12397688);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(local_448,&DAT_1239768c);
    }
    puVar5 = (undefined4 *)(param_1 + 0x54);
    iVar3 = DecodeBuffIdList(local_434,puVar5,0xd);
    *(int *)(param_1 + 0x50) = iVar3;
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        FUN_1169ef30(*puVar5,*(undefined4 *)(param_1 + 0x10));
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x50));
    }
    piVar1 = *(int **)(param_1 + 0xac);
    local_44c = param_1;
    if (piVar1 == *(int **)(param_1 + 0xb0)) {
      FUN_1182ddd0(piVar1,&local_44c,&local_44d,1,1);
    }
    else {
      *piVar1 = param_1;
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 4;
    }
    if ((local_434 != local_448) && (local_434 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_434);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1183fb70 @ 1183fb70  size=1587 ===== */
// calls: memset
// strings:
//   u"LEVEL_ID"
//   u"ITEM_ID"
//   u"ITEM_COUNT"
//   u"BUFF_ID"
//   u"BUFF_COUNT"
//   u"BUFF_ITEM_ID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"LEVEL_ID""
     "u"ITEM_ID""
     "u"ITEM_COUNT""
     "u"BUFF_ID""
     "u"BUFF_COUNT""
     "u"BUFF_ITEM_ID"" */

void __thiscall FUN_1183fb70(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int iStack_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_418 = param_1;
  if ((DAT_12397f84 & 1) == 0) {
    DAT_12397f84 = DAT_12397f84 | 1;
    FUN_100f67b0(L"LEVEL_ID");
  }
  if ((DAT_12397f84 & 2) == 0) {
    DAT_12397f84 = DAT_12397f84 | 2;
    iVar2 = FUN_100e1cb0(DAT_12397f80);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397f88);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12397f80);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12397f88);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_12397f84 & 4) == 0) {
    DAT_12397f84 = DAT_12397f84 | 4;
    FUN_100f67b0(&DAT_11d4ed68);
  }
  if ((DAT_12397f84 & 8) == 0) {
    DAT_12397f84 = DAT_12397f84 | 8;
    iVar2 = FUN_100e1cb0(DAT_12397f98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397f9c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12397f98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12397f9c);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  iVar6 = 0;
  local_41c = 0;
  iVar2 = 0;
  local_420 = 0;
  if ((DAT_12397f84 & 0x10) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x10;
    FUN_100f67b0(L"ITEM_ID");
  }
  if ((DAT_12397f84 & 0x20) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x20;
    iVar4 = FUN_100e1cb0(DAT_12397fac);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397fb0);
  if (cVar1 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_12397fac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12397fb0);
  }
  if ((DAT_12397f84 & 0x40) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x40;
    FUN_100f67b0(L"ITEM_COUNT");
  }
  if (-1 < (char)DAT_12397f84) {
    DAT_12397f84 = DAT_12397f84 | 0x80;
    iVar4 = FUN_100e1cb0(DAT_12397fc0);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397fc4);
  if (cVar1 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_12397fc0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x20))(&DAT_12397fc4);
  }
  if ((0 < iVar2) && (0 < iVar6)) {
    _local_414 = CONCAT44(iVar6,iVar2);
    piVar5 = *(int **)(local_418 + 0x1c);
    if (piVar5 == *(int **)(local_418 + 0x20)) {
      FUN_115b5f00(piVar5,&local_414,&local_409,1,1);
    }
    else {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        piVar5[1] = iVar6;
      }
      *(int *)(local_418 + 0x1c) = *(int *)(local_418 + 0x1c) + 8;
    }
  }
  if ((DAT_12397f84 & 0x100) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x100;
    FUN_100f67b0(L"BUFF_ID");
  }
  if ((DAT_12397f84 & 0x200) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12397fd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397fd8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12397fd4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12397fd8);
    local_420 = iVar2;
  }
  if ((DAT_12397f84 & 0x400) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x400;
    FUN_100f67b0(L"BUFF_COUNT");
  }
  if ((DAT_12397f84 & 0x800) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x800;
    iVar6 = FUN_100e1cb0(DAT_12397fe8);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12397fec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_12397fe8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_41c = (**(code **)(*param_2 + 0x20))(&DAT_12397fec);
  }
  iVar6 = 0;
  if ((DAT_12397f84 & 0x1000) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x1000;
    FUN_100f67b0(L"BUFF_ITEM_ID");
  }
  if ((DAT_12397f84 & 0x2000) == 0) {
    DAT_12397f84 = DAT_12397f84 | 0x2000;
    iVar4 = FUN_100e1cb0(DAT_12397ffc);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12398000);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_12397ffc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x20))(&DAT_12398000);
  }
  if (((0 < iVar2) && (0 < local_41c)) && (0 < iVar6)) {
    _local_414 = CONCAT44(local_41c,iVar2);
    FUN_115b6a40(&local_414);
    piVar5 = (int *)FUN_104ef0a0(&local_420);
    *piVar5 = iVar6;
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_118a6ef0 @ 118a6ef0  size=61 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 FUN_118a6ef0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((*(int *)(iVar2 + 0x28) != 0) && (iVar3 = 10000 - *(int *)(iVar2 + 0x30), -1 < iVar3)) &&
     (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_118ff610 @ 118ff610  size=52 ===== */
// calls: CNewSkillLearnInfo::GetInfoManager
// strings:
//   "CNewSkillLearnInfo"

/* [RE-AUTO c0]
   calls: CNewSkillLearnInfo::GetManagers
   strings:
     ""CNewSkillLearnInfo"" */

undefined4 FUN_118ff610(int param_1)

{
  int iVar1;
  
  iVar1 = CNewSkillLearnInfo__GetInfoManager(0,"CNewSkillLearnInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11901b70 @ 11901b70  size=132 ===== */
// strings:
//   u"SkillName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"SkillName"" */

undefined * __thiscall FUN_11901b70(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239e7a4 & 1) == 0) {
    DAT_1239e7a4 = DAT_1239e7a4 | 1;
    FUN_100f67b0(L"SkillName");
    _DAT_1239e784 = 0xac;
    _DAT_1239e78c = 0;
    _DAT_1239e790 = 0;
    _DAT_1239e794 = 0;
    _DAT_1239e798 = 0;
    _DAT_1239e79c = 0;
    _DAT_1239e7a0 = 0;
    _DAT_1239e788 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239e784;
}



/* ===== FUN_119177c0 @ 119177c0  size=50 ===== */
// strings:
//   u"AbnormalState"

/* [RE-AUTO c0]
   strings:
     "u"AbnormalState"" */

void FUN_119177c0(undefined4 *param_1)

{
  if ((DAT_1239ef2c & 1) == 0) {
    DAT_1239ef2c = DAT_1239ef2c | 1;
    FUN_100f67b0(L"AbnormalState");
  }
  *param_1 = DAT_1239ef28;
  return;
}



/* ===== FUN_11917e10 @ 11917e10  size=50 ===== */
// strings:
//   u"AbnormalState"

/* [RE-AUTO c0]
   strings:
     "u"AbnormalState"" */

void FUN_11917e10(undefined4 *param_1)

{
  if ((DAT_1239ef58 & 1) == 0) {
    DAT_1239ef58 = DAT_1239ef58 | 1;
    FUN_100f67b0(L"AbnormalState");
  }
  *param_1 = DAT_1239ef54;
  return;
}



/* ===== FUN_11921420 @ 11921420  size=50 ===== */
// strings:
//   u"SkillVideo"

/* [RE-AUTO c0]
   strings:
     "u"SkillVideo"" */

void FUN_11921420(undefined4 *param_1)

{
  if ((DAT_1239f31c & 1) == 0) {
    DAT_1239f31c = DAT_1239f31c | 1;
    FUN_100f67b0(L"SkillVideo");
  }
  *param_1 = DAT_1239f318;
  return;
}



/* ===== FUN_119214a0 @ 119214a0  size=132 ===== */
// strings:
//   u"SkillVideoInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"SkillVideoInfo"" */

undefined * __thiscall FUN_119214a0(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239f340 & 1) == 0) {
    DAT_1239f340 = DAT_1239f340 | 1;
    FUN_100f67b0(L"SkillVideoInfo");
    _DAT_1239f320 = 0xaa;
    _DAT_1239f328 = 0;
    _DAT_1239f32c = 0;
    _DAT_1239f330 = 0;
    _DAT_1239f334 = 0;
    _DAT_1239f338 = 0;
    _DAT_1239f33c = 0;
    _DAT_1239f324 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239f320;
}



/* ===== FUN_11928460 @ 11928460  size=52 ===== */
// calls: CPetFarmSkill::GetManagers
// strings:
//   "CPetFarmSkill"

/* [RE-AUTO c0]
   calls: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill"" */

undefined4 FUN_11928460(int param_1)

{
  int iVar1;
  
  iVar1 = CPetFarmSkill__GetManagers(0,"CPetFarmSkill",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CPetFarmSkill::GetManagers_11928510 @ 11928510  size=297 ===== */
// calls: CPetFarmSkill::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CPetFarmSkill"
//   "CPetFarmSkill::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetFarmSkill::GetManagers
   calls: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill""
     ""CPetFarmSkill::GetManagers"" */

void CPetFarmSkill__GetManagers_11928510(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetFarmSkill__GetManagers(0,"CPetFarmSkill",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d2e13c;
      if ((DAT_122df244 & 1) == 0) {
        DAT_122df244 = DAT_122df244 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetFarmSkill::GetManagers");
        FUN_11a8911f(&LAB_11ca3010);
      }
      puVar4 = (undefined *)*DAT_122df228;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)CInfoManager__FindByName(&param_1,"CPetFarmSkill",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122df290 & 1) == 0) {
          DAT_122df25c = 0;
          DAT_122df26c = 0;
          DAT_122df270 = 0;
          _DAT_122df274 = 0;
          DAT_122df278 = 0;
          DAT_122df290 = DAT_122df290 | 1;
          _DAT_122df258 = &PTR_FUN_11d2e170;
          DAT_122df27c = _DAT_11de9ae0;
          DAT_122df280 = _UNK_11de9ae4;
          uRam122df284 = _UNK_11de9ae8;
          DAT_122df288 = _UNK_11de9aec;
          DAT_122df28c = 1;
          DAT_122df260 = puVar4;
          _DAT_122df264 = puVar4;
          _DAT_122df268 = puVar4;
          FUN_11a8911f(&LAB_11cb1e00);
        }
        puVar4 = &DAT_122df258;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a17f70(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* ===== FUN_11949650 @ 11949650  size=132 ===== */
// strings:
//   u"buff"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"buff"" */

undefined * __thiscall FUN_11949650(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a01bc & 1) == 0) {
    DAT_123a01bc = DAT_123a01bc | 1;
    FUN_100f67b0(L"buff");
    _DAT_123a019c = 0xff;
    _DAT_123a01a4 = 0;
    _DAT_123a01a8 = 0;
    _DAT_123a01ac = 0;
    _DAT_123a01b0 = 0;
    _DAT_123a01b4 = 0;
    _DAT_123a01b8 = 0;
    _DAT_123a01a0 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a019c;
}



/* ===== FUN_11958c30 @ 11958c30  size=1964 ===== */
// calls: memset
// strings:
//   u"MonsterID"
//   u"MonsterGroupID"
//   u"SpawnAmount"
//   u"RegionId"
//   u"Delay"
//   u"RespawnAmount"
//   u"RespawnDelay"
//   u"Scale"
//   u"BuffID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"MonsterID""
     "u"MonsterGroupID""
     "u"SpawnAmount""
     "u"RegionId""
     "u"Delay""
     "u"RespawnAmount""
     "u"RespawnDelay""
     "u"Scale""
     "u"BuffID"" */

void __thiscall FUN_11958c30(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a05e0 & 1) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a05e0 & 2) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a05dc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a05e4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a05dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a05e4);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a05e0 & 4) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 4;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_123a05e0 & 8) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a05f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a05f8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a05f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a05f8);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a05e0 & 0x10) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x10;
    FUN_100f67b0(L"MonsterGroupID");
  }
  if ((DAT_123a05e0 & 0x20) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a0608);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a060c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0608);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a060c);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a05e0 & 0x40) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x40;
    FUN_100f67b0(L"SpawnAmount");
  }
  if (-1 < (char)DAT_123a05e0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a061c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0620);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a061c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0620);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a05e0 & 0x100) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x100;
    FUN_100f67b0(L"RegionId");
  }
  if ((DAT_123a05e0 & 0x200) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a0630);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0634);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0630);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0634);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((DAT_123a05e0 & 0x400) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x400;
    FUN_100f67b0(L"Delay");
  }
  if ((DAT_123a05e0 & 0x800) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a0644);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0648);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0644);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0648);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if ((DAT_123a05e0 & 0x1000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x1000;
    FUN_100f67b0(L"RespawnAmount");
  }
  if ((DAT_123a05e0 & 0x2000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a0658);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a065c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0658);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a065c);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  if ((DAT_123a05e0 & 0x4000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x4000;
    FUN_100f67b0(L"RespawnDelay");
  }
  if ((DAT_123a05e0 & 0x8000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a066c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0670);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a066c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0670);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  if ((DAT_123a05e0 & 0x10000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x10000;
    FUN_100f67b0(L"Scale");
  }
  if ((DAT_123a05e0 & 0x20000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a0680);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0684);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0680);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a0684);
    *(float *)(param_1 + 0x30) = (float)fVar4;
  }
  if ((DAT_123a05e0 & 0x40000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x40000;
    FUN_100f67b0(L"BuffID");
  }
  if ((DAT_123a05e0 & 0x80000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a0694);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0698);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0694);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0698);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1197cc00 @ 1197cc00  size=52 ===== */
// strings:
//   "CEquipRandPassiveSkillActivateSetInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo"" */

undefined4 FUN_1197cc00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10870cd0(0,"CEquipRandPassiveSkillActivateSetInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119ada30 @ 119ada30  size=52 ===== */
// strings:
//   "CEquipSuitSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipSuitSkillInfo"" */

undefined4 FUN_119ada30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109a7b00(0,"CEquipSuitSkillInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119e40d0 @ 119e40d0  size=3935 ===== */
// calls: memset, sscanf_s
// strings:
//   u"Rank"
//   u"Excellent_Point"
//   u"Excellent_Judegement_Rank"
//   u"Excellent_Rank_Name"
//   u"Buff_1"
//   "%d;%d"
//   u"Buff_2"
//   u"Buff_3"
//   u"Buff_4"
//   u"Buff_5"
//   u"Buff_6"
//   u"Buff_7"
//   u"Buff_8"
//   u"Buff_9"
//   u"Buff_10"

/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     "u"Rank""
     "u"Excellent_Point""
     "u"Excellent_Judegement_Rank""
     "u"Excellent_Rank_Name""
     "u"Buff_1""
     ""%d;%d""
     "u"Buff_2""
     "u"Buff_3""
     "u"Buff_4""
     "u"Buff_5"" */

void __thiscall FUN_119e40d0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_42c;
  int local_428;
  undefined1 local_421;
  char local_420 [16];
  char *local_410;
  char *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a452c & 1) == 0) {
    DAT_123a452c = DAT_123a452c | 1;
    FUN_100f67b0(L"Rank");
  }
  if ((DAT_123a452c & 2) == 0) {
    DAT_123a452c = DAT_123a452c | 2;
    iVar3 = FUN_100e1cb0(DAT_123a4528);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4530);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4528);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a4530);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a452c & 4) == 0) {
    DAT_123a452c = DAT_123a452c | 4;
    FUN_100f67b0(L"Excellent_Point");
  }
  if ((DAT_123a452c & 8) == 0) {
    DAT_123a452c = DAT_123a452c | 8;
    iVar3 = FUN_100e1cb0(DAT_123a4540);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4544);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4540);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a4544);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  if ((DAT_123a452c & 0x10) == 0) {
    DAT_123a452c = DAT_123a452c | 0x10;
    FUN_100f67b0(L"Excellent_Judegement_Rank");
  }
  if ((DAT_123a452c & 0x20) == 0) {
    DAT_123a452c = DAT_123a452c | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a4554);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4558);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4554);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a4558);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
  }
  if ((DAT_123a452c & 0x40) == 0) {
    DAT_123a452c = DAT_123a452c | 0x40;
    FUN_100f67b0(L"Excellent_Rank_Name");
  }
  if (-1 < (char)DAT_123a452c) {
    DAT_123a452c = DAT_123a452c | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a4568);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a456c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4568);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x20,&DAT_123a456c);
  }
  local_410 = local_420;
  local_420[0] = '\0';
  local_42c = 0;
  local_428 = 0;
  local_40c = local_410;
  if ((DAT_123a452c & 0x100) == 0) {
    DAT_123a452c = DAT_123a452c | 0x100;
    FUN_100f67b0(L"Buff_1");
  }
  if ((DAT_123a452c & 0x200) == 0) {
    DAT_123a452c = DAT_123a452c | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a457c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4580);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a457c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a4580);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x400) == 0) {
    DAT_123a452c = DAT_123a452c | 0x400;
    FUN_100f67b0(L"Buff_2");
  }
  if ((DAT_123a452c & 0x800) == 0) {
    DAT_123a452c = DAT_123a452c | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a4590);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4594);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4590);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a4594);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x1000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x1000;
    FUN_100f67b0(L"Buff_3");
  }
  if ((DAT_123a452c & 0x2000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a45a4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a45a8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a45a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a45a8);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x4000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x4000;
    FUN_100f67b0(L"Buff_4");
  }
  if ((DAT_123a452c & 0x8000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a45b8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a45bc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a45b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a45bc);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x10000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x10000;
    FUN_100f67b0(L"Buff_5");
  }
  if ((DAT_123a452c & 0x20000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a45cc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a45d0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a45cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a45d0);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x40000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x40000;
    FUN_100f67b0(L"Buff_6");
  }
  if ((DAT_123a452c & 0x80000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a45e0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a45e4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a45e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a45e4);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x100000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x100000;
    FUN_100f67b0(L"Buff_7");
  }
  if ((DAT_123a452c & 0x200000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a45f4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a45f8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a45f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a45f8);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x400000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x400000;
    FUN_100f67b0(L"Buff_8");
  }
  if ((DAT_123a452c & 0x800000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a4608);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a460c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4608);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a460c);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x1000000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x1000000;
    FUN_100f67b0(L"Buff_9");
  }
  if ((DAT_123a452c & 0x2000000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a461c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4620);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a461c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a4620);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((DAT_123a452c & 0x4000000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x4000000;
    FUN_100f67b0(L"Buff_10");
  }
  if ((DAT_123a452c & 0x8000000) == 0) {
    DAT_123a452c = DAT_123a452c | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_123a4630);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a4634);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a4630);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a4634);
  }
  iVar3 = sscanf_s(local_40c,"%d;%d",&local_42c,&local_428);
  if ((iVar3 == 2) && ((local_42c != 0 || (local_428 != 0)))) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 == *(int **)(param_1 + 0x40)) {
      FUN_119e5100(piVar1,&local_42c,&local_421,1,1);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = local_42c;
        piVar1[1] = local_428;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    }
  }
  if ((local_40c != local_420) && (local_40c != (char *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_119fbfb0 @ 119fbfb0  size=43 ===== */
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetMonsterSkillInfo"" */

void __fastcall FUN_119fbfb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_11679c30();
  if (iVar1 != 0) {
    FUN_1169e9d0(*(undefined4 *)(param_1 + 0x14));
    FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  }
  return;
}



/* ===== FUN_11a08470 @ 11a08470  size=803 ===== */
// calls: memset
// strings:
//   u"HRLevel"
//   u"Buffs"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"HRLevel""
     "u"Buffs"" */

void __thiscall FUN_11a08470(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_424;
  undefined1 local_420 [16];
  undefined1 *local_410;
  undefined1 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a6a9c & 1) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 1;
    FUN_100f67b0(L"HRLevel");
  }
  if ((DAT_123a6a9c & 2) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 2;
    iVar2 = FUN_100e1cb0(DAT_123a6a98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6aa0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6a98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a6aa0);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a6a9c & 4) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 4;
    FUN_100f67b0(&DAT_11d6d28c);
  }
  if ((DAT_123a6a9c & 8) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 8;
    iVar2 = FUN_100e1cb0(DAT_123a6ab0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6ab4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    local_424 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123a6ab4,&local_424);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_424;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a6a9c & 0x10) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 0x10;
    FUN_100f67b0(&DAT_11d522e8);
  }
  if ((DAT_123a6a9c & 0x20) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a6ac4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6ac8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    local_424 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123a6ac8,&local_424);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_424;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a6a9c & 0x40) == 0) {
    DAT_123a6a9c = DAT_123a6a9c | 0x40;
    FUN_100f67b0(L"Buffs");
  }
  if (-1 < (char)DAT_123a6a9c) {
    DAT_123a6a9c = DAT_123a6a9c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a6ad8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a6adc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a6ad8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  local_410 = local_420;
  local_420[0] = 0;
  local_40c = local_410;
  (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a6adc);
  FUN_1162bea0(param_1 + 0x1c,local_420);
  if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



