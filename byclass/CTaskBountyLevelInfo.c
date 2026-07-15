// ===== class CTaskBountyLevelInfo  (6 recovered methods) =====

/* --- CTaskBountyLevelInfo::GetManagers @ 1161e430 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo::GetManagers"" */

undefined * CTaskBountyLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d34568;
  if (param_3 == 0) {
    if ((DAT_122e0100 & 1) == 0) {
      DAT_122e0100 = DAT_122e0100 | 1;
      FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5cb0);
    }
    if ((undefined *)*DAT_122e00e4 != (undefined *)0x0) {
      return (undefined *)*DAT_122e00e4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e01b8 & 1) == 0) {
      DAT_122e01b8 = DAT_122e01b8 | 1;
      FUN_1161f2f0();
      FUN_11a8911f(&LAB_11ca5bd0);
    }
    puVar1 = &DAT_122e0180;
  }
  return puVar1;
}



/* --- CTaskBountyLevelInfo::GetManagers_11620da0 @ 11620da0 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo::GetManagers"" */

undefined4 CTaskBountyLevelInfo__GetManagers_11620da0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0100 & 1) == 0) {
      DAT_122e0100 = DAT_122e0100 | 1;
      FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5cb0);
    }
    return *DAT_122e00e4;
  }
  return 0;
}



/* --- CTaskBountyLevelInfo::GetManagers_11621220 @ 11621220 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// calls: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo""
//   ""CTaskBountyLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   calls: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo""
     ""CTaskBountyLevelInfo::GetManagers"" */

undefined4 * CTaskBountyLevelInfo__GetManagers_11621220(undefined **param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 local_c [8];
  
  puVar2 = param_1;
  iVar7 = 0;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  *(undefined1 *)param_1 = 0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)param_1;
  param_1[3] = (undefined *)param_1;
  param_1[4] = (undefined *)0x0;
  *(undefined1 *)(param_1 + 5) = param_1._3_1_;
  piVar4 = (int *)CTaskBountyLevelInfo__GetManagers(0,"CTaskBountyLevelInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  if (0 < iVar5) {
    do {
      if (2 < (uint)puVar2[4]) {
        return puVar2;
      }
      param_1 = &PTR_FUN_11d34568;
      if ((DAT_122e0100 & 1) == 0) {
        DAT_122e0100 = DAT_122e0100 | 1;
        FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5cb0);
      }
      puVar6 = (undefined *)*DAT_122e00e4;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&param_1,"CTaskBountyLevelInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_122e01b8 & 1) == 0) {
          DAT_122e01b8 = DAT_122e01b8 | 1;
          FUN_1161f2f0();
          FUN_11a8911f(&LAB_11ca5bd0);
        }
        puVar6 = &DAT_122e0180;
      }
      if (((-1 < iVar7) && (iVar7 < *(int *)(puVar6 + 0x18) - *(int *)(puVar6 + 0x14) >> 2)) &&
         (iVar1 = *(int *)(*(int *)(puVar6 + 0x14) + iVar7 * 4), iVar1 != 0)) {
        param_1 = *(undefined ***)(iVar1 + 0x14);
        cVar3 = (**(code **)(**(int **)(param_2 + 0x2b80) + 0x28))(param_1);
        if (cVar3 != '\0') {
          FUN_10467580(local_c,&param_1);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  return puVar2;
}



/* --- CTaskBountyLevelInfo::GetManagers_11722bc0 @ 11722bc0 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// calls: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo""
//   ""CTaskBountyLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   calls: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo""
     ""CTaskBountyLevelInfo::GetManagers"" */

void __fastcall CTaskBountyLevelInfo__GetManagers_11722bc0(undefined **param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  local_8 = param_1;
  CTaskInfo__GetManagers_11722cc0();
  if (0 < *(int *)(param_1[0xb] + 0x20)) {
    iVar5 = 0;
    piVar2 = (int *)CTaskBountyLevelInfo__GetManagers(0,"CTaskBountyLevelInfo",0);
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (0 < iVar3) {
      do {
        local_8 = &PTR_FUN_11d34568;
        if ((DAT_122e0100 & 1) == 0) {
          DAT_122e0100 = DAT_122e0100 | 1;
          FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
          FUN_11a8911f(&LAB_11ca5cb0);
        }
        puVar4 = (undefined *)*DAT_122e00e4;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskBountyLevelInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_122e01b8 & 1) == 0) {
            DAT_122e01b8 = DAT_122e01b8 | 1;
            FUN_1161f2f0();
            FUN_11a8911f(&LAB_11ca8bf0);
          }
          puVar4 = &DAT_122e0180;
        }
      } while (((((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5))
                || (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 == 0)) ||
               (*(int *)(iVar1 + 0x14) != *(int *)(param_1[0xb] + 0x20))) &&
              (iVar5 = iVar5 + 1, iVar5 < iVar3));
    }
  }
  return;
}



/* --- CTaskBountyLevelInfo::GetManagers_11907b50 @ 11907b50 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// calls: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo""
//   ""CTaskBountyLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   calls: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo""
     ""CTaskBountyLevelInfo::GetManagers"" */

void CTaskBountyLevelInfo__GetManagers_11907b50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskBountyLevelInfo__GetManagers(0,"CTaskBountyLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d34568;
      if ((DAT_122e0100 & 1) == 0) {
        DAT_122e0100 = DAT_122e0100 | 1;
        FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5cb0);
      }
      if (((*DAT_122e00e4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskBountyLevelInfo",0), iVar3 == 0)) &&
         ((DAT_122e01b8 & 1) == 0)) {
        DAT_122e0184 = 0;
        DAT_122e0194 = 0;
        DAT_122e0198 = 0;
        _DAT_122e019c = 0;
        uRam122e01a0 = 0;
        DAT_122e01b8 = DAT_122e01b8 | 1;
        _DAT_122e0180 = &PTR_FUN_11d345ac;
        _DAT_122e01a4 = _DAT_11de9ae0;
        uRam122e01a8 = _UNK_11de9ae4;
        uRam122e01ac = _UNK_11de9ae8;
        uRam122e01b0 = _UNK_11de9aec;
        DAT_122e01b4 = 1;
        DAT_122e0188 = iVar3;
        _DAT_122e018c = iVar3;
        _DAT_122e0190 = iVar3;
        FUN_11a8911f(&LAB_11cb1050);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a00f50();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskBountyLevelInfo::GetManagers_11907ca0 @ 11907ca0 --- */
// [RE-AUTO c3]
// id: CTaskBountyLevelInfo::GetManagers
// calls: CTaskBountyLevelInfo::GetManagers
// strings:
//   ""CTaskBountyLevelInfo""
//   ""CTaskBountyLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskBountyLevelInfo::GetManagers
   calls: CTaskBountyLevelInfo::GetManagers
   strings:
     ""CTaskBountyLevelInfo""
     ""CTaskBountyLevelInfo::GetManagers"" */

void CTaskBountyLevelInfo__GetManagers_11907ca0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskBountyLevelInfo__GetManagers(0,"CTaskBountyLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d34568;
      if ((DAT_122e0100 & 1) == 0) {
        DAT_122e0100 = DAT_122e0100 | 1;
        FUN_102500e0("CTaskBountyLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5cb0);
      }
      if (((*DAT_122e00e4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskBountyLevelInfo",0), iVar3 == 0)) &&
         ((DAT_122e01b8 & 1) == 0)) {
        DAT_122e0184 = 0;
        DAT_122e0194 = 0;
        DAT_122e0198 = 0;
        _DAT_122e019c = 0;
        uRam122e01a0 = 0;
        DAT_122e01b8 = DAT_122e01b8 | 1;
        _DAT_122e0180 = &PTR_FUN_11d345ac;
        _DAT_122e01a4 = _DAT_11de9ae0;
        uRam122e01a8 = _UNK_11de9ae4;
        uRam122e01ac = _UNK_11de9ae8;
        uRam122e01b0 = _UNK_11de9aec;
        DAT_122e01b4 = 1;
        DAT_122e0188 = iVar3;
        _DAT_122e018c = iVar3;
        _DAT_122e0190 = iVar3;
        FUN_11a8911f(&LAB_11cb1050);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a00f40();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



