// ===== class CHunterStarStatInfo  (5 recovered methods) =====

/* --- CHunterStarStatInfo::GetManagers @ 114db920 --- */
// [RE-AUTO c3]
// id: CHunterStarStatInfo::GetManagers
// strings:
//   ""CHunterStarStatInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHunterStarStatInfo::GetManagers
   strings:
     ""CHunterStarStatInfo::GetManagers"" */

undefined4 * CHunterStarStatInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2ac20;
  if (param_3 == 0) {
    if ((DAT_122de680 & 1) == 0) {
      DAT_122de680 = DAT_122de680 | 1;
      FUN_102500e0("CHunterStarStatInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9f6a0);
    }
    if ((undefined4 *)*DAT_122de664 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122de664;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122de6c4 & 1) == 0) {
      DAT_122de6c4 = DAT_122de6c4 | 1;
      FUN_114dbd50();
      FUN_11a8911f(&LAB_11c9f640);
    }
    puVar1 = &DAT_122de68c;
  }
  return puVar1;
}



/* --- CHunterStarStatInfo::GetManagers_114dc810 @ 114dc810 --- */
// [RE-AUTO c3]
// id: CHunterStarStatInfo::GetManagers
// strings:
//   ""CHunterStarStatInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHunterStarStatInfo::GetManagers
   strings:
     ""CHunterStarStatInfo::GetManagers"" */

undefined4 CHunterStarStatInfo__GetManagers_114dc810(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de680 & 1) == 0) {
      DAT_122de680 = DAT_122de680 | 1;
      FUN_102500e0("CHunterStarStatInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9f6a0);
    }
    return *DAT_122de664;
  }
  return 0;
}



/* --- CHunterStarStatInfo::GetManagers_114dcac0 @ 114dcac0 --- */
// [RE-AUTO c3]
// id: CHunterStarStatInfo::GetManagers
// strings:
//   ""CHunterStarStatInfo::GetManagers""
//   ""CHunterStarStatInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarStatInfo::GetManagers
   strings:
     ""CHunterStarStatInfo::GetManagers""
     ""CHunterStarStatInfo"" */

void CHunterStarStatInfo__GetManagers_114dcac0(undefined **param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  
  local_8 = *(uint *)((int)param_1 + 0x911a);
  if (local_8 < 3000) {
    if ((int)local_8 < 1) {
      return;
    }
  }
  else {
    local_8 = 3000;
  }
  puVar3 = (ushort *)((int)param_1 + 0x911e);
  do {
    uVar5 = (uint)*puVar3;
    param_1 = &PTR_FUN_11d2ac20;
    if ((DAT_122de680 & 1) == 0) {
      DAT_122de680 = DAT_122de680 | 1;
      FUN_102500e0("CHunterStarStatInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9f6a0);
    }
    puVar4 = (undefined4 *)*DAT_122de664;
    if ((puVar4 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CHunterStarStatInfo",0),
       puVar4 == (undefined4 *)0x0)) {
      if ((DAT_122de6c4 & 1) == 0) {
        DAT_122de690 = 0;
        DAT_122de6a0 = 0;
        DAT_122de6a4 = 0;
        _DAT_122de6a8 = 0;
        DAT_122de6ac = 0;
        DAT_122de6c4 = DAT_122de6c4 | 1;
        DAT_122de68c = &PTR_FUN_11d2ac60;
        DAT_122de6b0 = _DAT_11de9ae0;
        DAT_122de6b4 = _UNK_11de9ae4;
        uRam122de6b8 = _UNK_11de9ae8;
        DAT_122de6bc = _UNK_11de9aec;
        DAT_122de6c0 = 1;
        DAT_122de694 = puVar4;
        _DAT_122de698 = puVar4;
        _DAT_122de69c = puVar4;
        FUN_11a8911f(&LAB_11c9f640);
      }
      puVar4 = &DAT_122de68c;
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((uVar5 != 0xffffffff) &&
        (((uVar5 != 0 || (puVar4[0xc] == 0)) && (iVar1 = puVar4[10], iVar1 != 0)))) &&
       ((iVar6 = uVar5 - puVar4[0xc], -1 < iVar6 && (iVar6 < (int)puVar4[9])))) {
      iVar2 = *(int *)(puVar4[8] + (iVar6 / iVar1) * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar6 % iVar1) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x18);
      }
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}



/* --- CHunterStarStatInfo::GetManagers_114dcca0 @ 114dcca0 --- */
// [RE-AUTO c3]
// id: CHunterStarStatInfo::GetManagers
// strings:
//   ""CHunterStarStatInfo::GetManagers""
//   ""CHunterStarStatInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarStatInfo::GetManagers
   strings:
     ""CHunterStarStatInfo::GetManagers""
     ""CHunterStarStatInfo"" */

void CHunterStarStatInfo__GetManagers_114dcca0(ushort *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_c = 0;
  if (*param_1 != 0) {
    puVar6 = param_1 + 2;
    do {
      uVar4 = (uint)puVar6[-1];
      local_8 = &PTR_FUN_11d2ac20;
      if ((DAT_122de680 & 1) == 0) {
        DAT_122de680 = DAT_122de680 | 1;
        FUN_102500e0("CHunterStarStatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9f6a0);
      }
      puVar3 = (undefined4 *)*DAT_122de664;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CHunterStarStatInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_122de6c4 & 1) == 0) {
          DAT_122de690 = 0;
          DAT_122de6a0 = 0;
          DAT_122de6a4 = 0;
          _DAT_122de6a8 = 0;
          DAT_122de6ac = 0;
          DAT_122de6c4 = DAT_122de6c4 | 1;
          DAT_122de68c = &PTR_FUN_11d2ac60;
          DAT_122de6b0 = _DAT_11de9ae0;
          DAT_122de6b4 = _UNK_11de9ae4;
          uRam122de6b8 = _UNK_11de9ae8;
          DAT_122de6bc = _UNK_11de9aec;
          DAT_122de6c0 = 1;
          DAT_122de694 = puVar3;
          _DAT_122de698 = puVar3;
          _DAT_122de69c = puVar3;
          FUN_11a8911f(&LAB_11c9f640);
        }
        puVar3 = &DAT_122de68c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((uVar4 != 0xffffffff) &&
          (((uVar4 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)))) &&
         ((iVar5 = uVar4 - puVar3[0xc], -1 < iVar5 && (iVar5 < (int)puVar3[9])))) {
        iVar2 = *(int *)(puVar3[8] + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x18);
        }
      }
      puVar6 = puVar6 + 5;
      local_c = local_c + 1;
    } while (local_c < (int)(uint)*param_1);
  }
  local_10 = 0;
  if (param_1[0x3e9] != 0) {
    puVar6 = param_1 + 0x3eb;
    do {
      uVar4 = (uint)puVar6[-1];
      local_8 = &PTR_FUN_11d2ac20;
      if ((DAT_122de680 & 1) == 0) {
        DAT_122de680 = DAT_122de680 | 1;
        FUN_102500e0("CHunterStarStatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9f6a0);
      }
      puVar3 = (undefined4 *)*DAT_122de664;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CHunterStarStatInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_122de6c4 & 1) == 0) {
          DAT_122de690 = 0;
          DAT_122de6a0 = 0;
          DAT_122de6a4 = 0;
          _DAT_122de6a8 = 0;
          DAT_122de6ac = 0;
          DAT_122de6c4 = DAT_122de6c4 | 1;
          DAT_122de68c = &PTR_FUN_11d2ac60;
          DAT_122de6b0 = _DAT_11de9ae0;
          DAT_122de6b4 = _UNK_11de9ae4;
          uRam122de6b8 = _UNK_11de9ae8;
          DAT_122de6bc = _UNK_11de9aec;
          DAT_122de6c0 = 1;
          DAT_122de694 = puVar3;
          _DAT_122de698 = puVar3;
          _DAT_122de69c = puVar3;
          FUN_11a8911f(&LAB_11c9f640);
        }
        puVar3 = &DAT_122de68c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((uVar4 != 0xffffffff) &&
         ((((uVar4 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
          ((iVar5 = uVar4 - puVar3[0xc], -1 < iVar5 && (iVar5 < (int)puVar3[9])))))) {
        iVar2 = *(int *)(puVar3[8] + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x18);
        }
      }
      puVar6 = puVar6 + 4;
      local_10 = local_10 + 1;
    } while (local_10 < (int)(uint)param_1[0x3e9]);
  }
  return;
}



/* --- CHunterStarStatInfo::GetManagers_117f31f0 @ 117f31f0 --- */
// [RE-AUTO c3]
// id: CHunterStarStatInfo::GetManagers
// calls: CHunterStarStatInfo::GetManagers
// strings:
//   ""CHunterStarStatInfo::GetManagers""
//   ""CHunterStarStatInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarStatInfo::GetManagers
   calls: CHunterStarStatInfo::GetManagers
   strings:
     ""CHunterStarStatInfo::GetManagers""
     ""CHunterStarStatInfo"" */

void __fastcall CHunterStarStatInfo__GetManagers_117f31f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 local_1c [8];
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2ac20;
  local_10 = param_1;
  if ((DAT_122de680 & 1) == 0) {
    DAT_122de680 = DAT_122de680 | 1;
    FUN_102500e0("CHunterStarStatInfo::GetManagers");
    FUN_11a8911f(&LAB_11c9f6a0);
  }
  piVar1 = (int *)*DAT_122de664;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_11679e10(&local_8,"CHunterStarStatInfo",0);
    if (piVar1 == (int *)0x0) {
      if ((DAT_122de6c4 & 1) == 0) {
        DAT_122de690 = 0;
        DAT_122de6a0 = 0;
        DAT_122de6a4 = 0;
        _DAT_122de6a8 = 0;
        DAT_122de6ac = 0;
        DAT_122de6c4 = DAT_122de6c4 | 1;
        DAT_122de68c = &PTR_FUN_11d2ac60;
        DAT_122de6b0 = _DAT_11de9ae0;
        DAT_122de6b4 = _UNK_11de9ae4;
        uRam122de6b8 = _UNK_11de9ae8;
        DAT_122de6bc = _UNK_11de9aec;
        DAT_122de6c0 = 1;
        DAT_122de694 = piVar1;
        _DAT_122de698 = piVar1;
        _DAT_122de69c = piVar1;
        FUN_11a8911f(&LAB_11cab760);
      }
      piVar1 = (int *)&DAT_122de68c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar1 + 0x28))();
  iVar3 = 0;
  piVar1 = (int *)CHunterStarStatInfo__GetManagers(0,"CHunterStarStatInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    local_c = param_1 + 0x38;
    do {
      local_8 = &PTR_FUN_11d2ac20;
      if ((DAT_122de680 & 1) == 0) {
        DAT_122de680 = DAT_122de680 | 1;
        FUN_102500e0("CHunterStarStatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9f6a0);
      }
      piVar1 = (int *)*DAT_122de664;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)FUN_11679e10(&local_8,"CHunterStarStatInfo",0);
        if (piVar1 == (int *)0x0) {
          if ((DAT_122de6c4 & 1) == 0) {
            DAT_122de690 = 0;
            DAT_122de6a0 = 0;
            DAT_122de6a4 = 0;
            _DAT_122de6a8 = 0;
            DAT_122de6ac = 0;
            DAT_122de6c4 = DAT_122de6c4 | 1;
            DAT_122de68c = &PTR_FUN_11d2ac60;
            DAT_122de6b0 = _DAT_11de9ae0;
            DAT_122de6b4 = _UNK_11de9ae4;
            uRam122de6b8 = _UNK_11de9ae8;
            DAT_122de6bc = _UNK_11de9aec;
            DAT_122de6c0 = 1;
            DAT_122de694 = piVar1;
            _DAT_122de698 = piVar1;
            _DAT_122de69c = piVar1;
            FUN_11a8911f(&LAB_11cab760);
          }
          piVar1 = (int *)&DAT_122de68c;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar3 < 0) || (piVar1[6] - piVar1[5] >> 2 <= iVar3)) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(piVar1[5] + iVar3 * 4);
      }
      local_44 = piVar1[4];
      local_48 = piVar1[5];
      iStack_3c = piVar1[6];
      iStack_38 = piVar1[7];
      local_34 = piVar1[8];
      iStack_40 = local_48;
      local_30 = local_44;
      iStack_2c = local_48;
      iStack_28 = iStack_3c;
      iStack_24 = iStack_38;
      FUN_117f5ad0(local_14,&local_48);
      if (piVar1[9] == 2) {
        local_8 = (undefined **)(**(code **)(*piVar1 + 0x18))();
        FUN_10467580(local_1c,&local_8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}



