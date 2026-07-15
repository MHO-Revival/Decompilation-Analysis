// ===== class CWildHuntTaskRatioInfo  (5 recovered methods) =====

/* --- CWildHuntTaskRatioInfo::GetManagers @ 11806f50 --- */
// [RE-AUTO c3]
// id: CWildHuntTaskRatioInfo::GetManagers
// strings:
//   ""CWildHuntTaskRatioInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo::GetManagers"" */

undefined * CWildHuntTaskRatioInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4c640;
  if (param_3 == 0) {
    if ((DAT_12395c08 & 1) == 0) {
      DAT_12395c08 = DAT_12395c08 | 1;
      FUN_102500e0("CWildHuntTaskRatioInfo::GetManagers");
      FUN_11a8911f(&LAB_11cabd90);
    }
    if ((undefined *)*DAT_12395bec != (undefined *)0x0) {
      return (undefined *)*DAT_12395bec;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12395cb4 & 1) == 0) {
      DAT_12395cb4 = DAT_12395cb4 | 1;
      FUN_118071c0();
      FUN_11a8911f(&LAB_11cabd30);
    }
    puVar1 = &DAT_12395c7c;
  }
  return puVar1;
}



/* --- CWildHuntTaskRatioInfo::GetManagers_118075e0 @ 118075e0 --- */
// [RE-AUTO c3]
// id: CWildHuntTaskRatioInfo::GetManagers
// calls: CWildHuntTaskRatioInfo::GetManagers
// strings:
//   ""CWildHuntTaskRatioInfo""
//   ""CWildHuntTaskRatioInfo::GetManagers""

/* WARNING: Removing unreachable block (ram,0x1180777f) */
/* [RE-AUTO c3]
   id: CWildHuntTaskRatioInfo::GetManagers
   calls: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo""
     ""CWildHuntTaskRatioInfo::GetManagers"" */

float10 CWildHuntTaskRatioInfo__GetManagers_118075e0(float param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_28;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  undefined **local_c;
  undefined1 local_5;
  
  if ((uint)param_1 < 3) {
    local_20 = 0;
    local_1c = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    piVar1 = (int *)CWildHuntTaskRatioInfo__GetManagers(0,"CWildHuntTaskRatioInfo",0);
    local_14 = (**(code **)(*piVar1 + 0x28))();
    iVar4 = 0;
    if (0 < local_14) {
      do {
        local_c = &PTR_FUN_11d4c640;
        if ((DAT_12395c08 & 1) == 0) {
          DAT_12395c08 = DAT_12395c08 | 1;
          FUN_102500e0("CWildHuntTaskRatioInfo::GetManagers");
          FUN_11a8911f(&LAB_11cabd90);
        }
        puVar2 = (undefined *)*DAT_12395bec;
        if ((puVar2 == (undefined *)0x0) &&
           (puVar2 = (undefined *)FUN_11679e10(&local_c,"CWildHuntTaskRatioInfo",0),
           puVar2 == (undefined *)0x0)) {
          if ((DAT_12395cb4 & 1) == 0) {
            DAT_12395cb4 = DAT_12395cb4 | 1;
            FUN_118071c0();
            FUN_11a8911f(&LAB_11cabd30);
          }
          puVar2 = &DAT_12395c7c;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar4 < 0) || (*(int *)(puVar2 + 0x18) - *(int *)(puVar2 + 0x14) >> 2 <= iVar4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(puVar2 + 0x14) + iVar4 * 4);
        }
        local_10 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + (int)param_1 * 4);
        if (local_1c == local_18) {
          FUN_10463c40(local_1c,&local_10,&local_5,1,1);
        }
        else {
          *local_1c = local_10;
          local_1c = local_1c + 1;
        }
        local_10 = *(undefined4 *)(iVar3 + 0x14);
        if (local_28 == (undefined4 *)0x0) {
          FUN_104c1300(0,&local_10,&local_5,1,1);
        }
        else {
          *local_28 = local_10;
          local_28 = local_28 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_14);
    }
    iVar4 = FUN_10a1cee0(&local_20);
    if (iVar4 == -1) {
      param_1 = 0.0;
    }
    else {
      param_1 = *(float *)(iVar4 * 4);
    }
    if (local_20 != 0) {
      FUN_10c3d5d0(local_20);
    }
    return (float10)param_1;
  }
  return (float10)0;
}



/* --- CWildHuntTaskRatioInfo::GetManagers_11807920 @ 11807920 --- */
// [RE-AUTO c3]
// id: CWildHuntTaskRatioInfo::GetManagers
// strings:
//   ""CWildHuntTaskRatioInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo::GetManagers"" */

undefined4 CWildHuntTaskRatioInfo__GetManagers_11807920(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12395c08 & 1) == 0) {
      DAT_12395c08 = DAT_12395c08 | 1;
      FUN_102500e0("CWildHuntTaskRatioInfo::GetManagers");
      FUN_11a8911f(&LAB_11cabd90);
    }
    return *DAT_12395bec;
  }
  return 0;
}



/* --- CWildHuntTaskRatioInfo::GetManagers_119b4090 @ 119b4090 --- */
// [RE-AUTO c3]
// id: CWildHuntTaskRatioInfo::GetManagers
// calls: CWildHuntTaskRatioInfo::GetManagers
// strings:
//   ""CWildHuntTaskRatioInfo""
//   ""CWildHuntTaskRatioInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWildHuntTaskRatioInfo::GetManagers
   calls: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo""
     ""CWildHuntTaskRatioInfo::GetManagers"" */

void CWildHuntTaskRatioInfo__GetManagers_119b4090(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CWildHuntTaskRatioInfo__GetManagers(0,"CWildHuntTaskRatioInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4c640;
      if ((DAT_12395c08 & 1) == 0) {
        DAT_12395c08 = DAT_12395c08 | 1;
        FUN_102500e0("CWildHuntTaskRatioInfo::GetManagers");
        FUN_11a8911f(&LAB_11cabd90);
      }
      if (((*DAT_12395bec == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CWildHuntTaskRatioInfo",0), iVar3 == 0)) &&
         ((DAT_12395cb4 & 1) == 0)) {
        DAT_12395c80 = 0;
        DAT_12395c90 = 0;
        DAT_12395c94 = 0;
        _DAT_12395c98 = 0;
        uRam12395c9c = 0;
        DAT_12395cb4 = DAT_12395cb4 | 1;
        _DAT_12395c7c = &PTR_FUN_11d4c6b4;
        _DAT_12395ca0 = _DAT_11de9ae0;
        uRam12395ca4 = _UNK_11de9ae4;
        uRam12395ca8 = _UNK_11de9ae8;
        uRam12395cac = _UNK_11de9aec;
        DAT_12395cb0 = 1;
        DAT_12395c84 = iVar3;
        _DAT_12395c88 = iVar3;
        _DAT_12395c8c = iVar3;
        FUN_11a8911f(&LAB_11cb42c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11807b60();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CWildHuntTaskRatioInfo::GetManagers_119b41e0 @ 119b41e0 --- */
// [RE-AUTO c3]
// id: CWildHuntTaskRatioInfo::GetManagers
// calls: CWildHuntTaskRatioInfo::GetManagers
// strings:
//   ""CWildHuntTaskRatioInfo""
//   ""CWildHuntTaskRatioInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWildHuntTaskRatioInfo::GetManagers
   calls: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo""
     ""CWildHuntTaskRatioInfo::GetManagers"" */

void CWildHuntTaskRatioInfo__GetManagers_119b41e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CWildHuntTaskRatioInfo__GetManagers(0,"CWildHuntTaskRatioInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4c640;
      if ((DAT_12395c08 & 1) == 0) {
        DAT_12395c08 = DAT_12395c08 | 1;
        FUN_102500e0("CWildHuntTaskRatioInfo::GetManagers");
        FUN_11a8911f(&LAB_11cabd90);
      }
      if (((*DAT_12395bec == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CWildHuntTaskRatioInfo",0), iVar3 == 0)) &&
         ((DAT_12395cb4 & 1) == 0)) {
        DAT_12395c80 = 0;
        DAT_12395c90 = 0;
        DAT_12395c94 = 0;
        _DAT_12395c98 = 0;
        uRam12395c9c = 0;
        DAT_12395cb4 = DAT_12395cb4 | 1;
        _DAT_12395c7c = &PTR_FUN_11d4c6b4;
        _DAT_12395ca0 = _DAT_11de9ae0;
        uRam12395ca4 = _UNK_11de9ae4;
        uRam12395ca8 = _UNK_11de9ae8;
        uRam12395cac = _UNK_11de9aec;
        DAT_12395cb0 = 1;
        DAT_12395c84 = iVar3;
        _DAT_12395c88 = iVar3;
        _DAT_12395c8c = iVar3;
        FUN_11a8911f(&LAB_11cb42c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11807b50();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



