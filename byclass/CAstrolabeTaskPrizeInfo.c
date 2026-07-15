// ===== class CAstrolabeTaskPrizeInfo  (4 recovered methods) =====

/* --- CAstrolabeTaskPrizeInfo::GetManagers @ 109a8720 --- */
// [RE-AUTO c3]
// id: CAstrolabeTaskPrizeInfo::GetManagers
// strings:
//   ""CAstrolabeTaskPrizeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeTaskPrizeInfo::GetManagers
   strings:
     ""CAstrolabeTaskPrizeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAstrolabeTaskPrizeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8b34 & 1) == 0) {
    DAT_123c8b34 = DAT_123c8b34 | 1;
    _DAT_123c8b4c = &DAT_123c8b3c;
    DAT_123c8b50 = &DAT_123c8b3c;
    DAT_123c8b3c = 0;
    FUN_100d83d0("CAstrolabeTaskPrizeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b3d0);
  }
  return DAT_123c8b38;
}



/* --- CAstrolabeTaskPrizeInfo::GetManagers_118060e0 @ 118060e0 --- */
// [RE-AUTO c3]
// id: CAstrolabeTaskPrizeInfo::GetManagers
// strings:
//   ""CAstrolabeTaskPrizeInfo""
//   ""CAstrolabeTaskPrizeInfo::GetManagers""

/* WARNING: Removing unreachable block (ram,0x118062a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeTaskPrizeInfo::GetManagers
   strings:
     ""CAstrolabeTaskPrizeInfo""
     ""CAstrolabeTaskPrizeInfo::GetManagers"" */

undefined4 CAstrolabeTaskPrizeInfo__GetManagers_118060e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_28;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_28 = (int *)0x0;
  piVar2 = (int *)FUN_109abc20(0,"CAstrolabeTaskPrizeInfo",0);
  local_14 = (**(code **)(*piVar2 + 0x28))();
  iVar4 = 0;
  if (0 < local_14) {
    piVar2 = (int *)0x0;
    do {
      local_c = &PTR_FUN_11de1c64;
      if ((DAT_123c8b34 & 1) == 0) {
        DAT_123c8b34 = DAT_123c8b34 | 1;
        FUN_102500e0("CAstrolabeTaskPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b3d0);
      }
      puVar3 = (undefined *)*DAT_123c8b38;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CAstrolabeTaskPrizeInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123c8ba0 & 1) == 0) {
          DAT_123c8ba8 = 0;
          DAT_123c8bb8 = 0;
          DAT_123c8bbc = 0;
          _DAT_123c8bc0 = 0;
          DAT_123c8bc4 = 0;
          DAT_123c8ba0 = DAT_123c8ba0 | 1;
          _DAT_123c8ba4 = &PTR_FUN_11de1cd4;
          DAT_123c8bc8 = _DAT_11de9ae0;
          DAT_123c8bcc = _UNK_11de9ae4;
          uRam123c8bd0 = _UNK_11de9ae8;
          DAT_123c8bd4 = _UNK_11de9aec;
          DAT_123c8bd8 = 1;
          DAT_123c8bac = puVar3;
          _DAT_123c8bb0 = puVar3;
          _DAT_123c8bb4 = puVar3;
          FUN_11a8911f(&LAB_11cabc90);
        }
        puVar3 = &DAT_123c8ba4;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
          (piVar1 = *(int **)(*(int *)(puVar3 + 0x14) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (piVar1[8] == param_1)) {
        local_10 = piVar1[5];
        if (local_1c == local_18) {
          FUN_10463c40(local_1c,&local_10,&local_5,1,1);
        }
        else {
          *local_1c = local_10;
          local_1c = local_1c + 1;
        }
        local_10 = (**(code **)(*piVar1 + 0x18))();
        if (piVar2 == (int *)0x0) {
          FUN_10463c40(0,&local_10,&local_5,1,1);
          piVar2 = local_28;
        }
        else {
          *piVar2 = local_10;
          local_28 = piVar2 + 1;
          piVar2 = local_28;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_14);
  }
  iVar4 = FUN_10a1cee0(&local_20);
  if (iVar4 == -1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar4 * 4);
  }
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  return uVar5;
}



/* --- CAstrolabeTaskPrizeInfo::GetManagers_119b11d0 @ 119b11d0 --- */
// [RE-AUTO c3]
// id: CAstrolabeTaskPrizeInfo::GetManagers
// strings:
//   ""CAstrolabeTaskPrizeInfo""
//   ""CAstrolabeTaskPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeTaskPrizeInfo::GetManagers
   strings:
     ""CAstrolabeTaskPrizeInfo""
     ""CAstrolabeTaskPrizeInfo::GetManagers"" */

void CAstrolabeTaskPrizeInfo__GetManagers_119b11d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109abc20(0,"CAstrolabeTaskPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de1c64;
      if ((DAT_123c8b34 & 1) == 0) {
        DAT_123c8b34 = DAT_123c8b34 | 1;
        FUN_102500e0("CAstrolabeTaskPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b3d0);
      }
      if (((*DAT_123c8b38 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeTaskPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8ba0 & 1) == 0)) {
        DAT_123c8ba8 = 0;
        DAT_123c8bb8 = 0;
        DAT_123c8bbc = 0;
        _DAT_123c8bc0 = 0;
        DAT_123c8bc4 = 0;
        DAT_123c8ba0 = DAT_123c8ba0 | 1;
        _DAT_123c8ba4 = &PTR_FUN_11de1cd4;
        DAT_123c8bc8 = _DAT_11de9ae0;
        DAT_123c8bcc = _UNK_11de9ae4;
        uRam123c8bd0 = _UNK_11de9ae8;
        DAT_123c8bd4 = _UNK_11de9aec;
        DAT_123c8bd8 = 1;
        DAT_123c8bac = iVar3;
        _DAT_123c8bb0 = iVar3;
        _DAT_123c8bb4 = iVar3;
        FUN_11a8911f(&LAB_11cb41d0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11806380();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAstrolabeTaskPrizeInfo::GetManagers_119b1320 @ 119b1320 --- */
// [RE-AUTO c3]
// id: CAstrolabeTaskPrizeInfo::GetManagers
// strings:
//   ""CAstrolabeTaskPrizeInfo""
//   ""CAstrolabeTaskPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeTaskPrizeInfo::GetManagers
   strings:
     ""CAstrolabeTaskPrizeInfo""
     ""CAstrolabeTaskPrizeInfo::GetManagers"" */

void CAstrolabeTaskPrizeInfo__GetManagers_119b1320(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109abc20(0,"CAstrolabeTaskPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de1c64;
      if ((DAT_123c8b34 & 1) == 0) {
        DAT_123c8b34 = DAT_123c8b34 | 1;
        FUN_102500e0("CAstrolabeTaskPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b3d0);
      }
      if (((*DAT_123c8b38 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeTaskPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8ba0 & 1) == 0)) {
        DAT_123c8ba8 = 0;
        DAT_123c8bb8 = 0;
        DAT_123c8bbc = 0;
        _DAT_123c8bc0 = 0;
        DAT_123c8bc4 = 0;
        DAT_123c8ba0 = DAT_123c8ba0 | 1;
        _DAT_123c8ba4 = &PTR_FUN_11de1cd4;
        DAT_123c8bc8 = _DAT_11de9ae0;
        DAT_123c8bcc = _UNK_11de9ae4;
        uRam123c8bd0 = _UNK_11de9ae8;
        DAT_123c8bd4 = _UNK_11de9aec;
        DAT_123c8bd8 = 1;
        DAT_123c8bac = iVar3;
        _DAT_123c8bb0 = iVar3;
        _DAT_123c8bb4 = iVar3;
        FUN_11a8911f(&LAB_11cb41d0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11806370();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



