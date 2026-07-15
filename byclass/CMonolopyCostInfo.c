// ===== class CMonolopyCostInfo  (4 recovered methods) =====

/* --- CMonolopyCostInfo::GetManagers @ 117fed50 --- */
// [RE-AUTO c3]
// id: CMonolopyCostInfo::GetManagers
// strings:
//   ""CMonolopyCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonolopyCostInfo::GetManagers
   strings:
     ""CMonolopyCostInfo::GetManagers"" */

undefined * CMonolopyCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4bea4;
  if (param_3 == 0) {
    if ((DAT_12395464 & 1) == 0) {
      DAT_12395464 = DAT_12395464 | 1;
      FUN_102500e0("CMonolopyCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11caba40);
    }
    if ((undefined *)*DAT_12395448 != (undefined *)0x0) {
      return (undefined *)*DAT_12395448;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123954e8 & 1) == 0) {
      DAT_123954e8 = DAT_123954e8 | 1;
      FUN_117fefc0();
      FUN_11a8911f(&LAB_11cab9e0);
    }
    puVar1 = &DAT_123954b0;
  }
  return puVar1;
}



/* --- CMonolopyCostInfo::GetManagers_117ff670 @ 117ff670 --- */
// [RE-AUTO c3]
// id: CMonolopyCostInfo::GetManagers
// strings:
//   ""CMonolopyCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonolopyCostInfo::GetManagers
   strings:
     ""CMonolopyCostInfo::GetManagers"" */

undefined4 CMonolopyCostInfo__GetManagers_117ff670(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12395464 & 1) == 0) {
      DAT_12395464 = DAT_12395464 | 1;
      FUN_102500e0("CMonolopyCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11caba40);
    }
    return *DAT_12395448;
  }
  return 0;
}



/* --- CMonolopyCostInfo::GetManagers_119b9b90 @ 119b9b90 --- */
// [RE-AUTO c3]
// id: CMonolopyCostInfo::GetManagers
// calls: CMonolopyCostInfo::GetManagers
// strings:
//   ""CMonolopyCostInfo""
//   ""CMonolopyCostInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyCostInfo::GetManagers
   calls: CMonolopyCostInfo::GetManagers
   strings:
     ""CMonolopyCostInfo""
     ""CMonolopyCostInfo::GetManagers"" */

void CMonolopyCostInfo__GetManagers_119b9b90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonolopyCostInfo__GetManagers(0,"CMonolopyCostInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4bea4;
      if ((DAT_12395464 & 1) == 0) {
        DAT_12395464 = DAT_12395464 | 1;
        FUN_102500e0("CMonolopyCostInfo::GetManagers");
        FUN_11a8911f(&LAB_11caba40);
      }
      if (((*DAT_12395448 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyCostInfo",0), iVar3 == 0)) &&
         ((DAT_123954e8 & 1) == 0)) {
        DAT_123954b4 = 0;
        DAT_123954c4 = 0;
        DAT_123954c8 = 0;
        _DAT_123954cc = 0;
        uRam123954d0 = 0;
        DAT_123954e8 = DAT_123954e8 | 1;
        _DAT_123954b0 = &PTR_FUN_11d4bf10;
        _DAT_123954d4 = _DAT_11de9ae0;
        uRam123954d8 = _UNK_11de9ae4;
        uRam123954dc = _UNK_11de9ae8;
        uRam123954e0 = _UNK_11de9aec;
        DAT_123954e4 = 1;
        DAT_123954b8 = iVar3;
        _DAT_123954bc = iVar3;
        _DAT_123954c0 = iVar3;
        FUN_11a8911f(&LAB_11cb45c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117ff890();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonolopyCostInfo::GetManagers_119b9ce0 @ 119b9ce0 --- */
// [RE-AUTO c3]
// id: CMonolopyCostInfo::GetManagers
// calls: CMonolopyCostInfo::GetManagers
// strings:
//   ""CMonolopyCostInfo""
//   ""CMonolopyCostInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyCostInfo::GetManagers
   calls: CMonolopyCostInfo::GetManagers
   strings:
     ""CMonolopyCostInfo""
     ""CMonolopyCostInfo::GetManagers"" */

void CMonolopyCostInfo__GetManagers_119b9ce0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonolopyCostInfo__GetManagers(0,"CMonolopyCostInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4bea4;
      if ((DAT_12395464 & 1) == 0) {
        DAT_12395464 = DAT_12395464 | 1;
        FUN_102500e0("CMonolopyCostInfo::GetManagers");
        FUN_11a8911f(&LAB_11caba40);
      }
      if (((*DAT_12395448 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyCostInfo",0), iVar3 == 0)) &&
         ((DAT_123954e8 & 1) == 0)) {
        DAT_123954b4 = 0;
        DAT_123954c4 = 0;
        DAT_123954c8 = 0;
        _DAT_123954cc = 0;
        uRam123954d0 = 0;
        DAT_123954e8 = DAT_123954e8 | 1;
        _DAT_123954b0 = &PTR_FUN_11d4bf10;
        _DAT_123954d4 = _DAT_11de9ae0;
        uRam123954d8 = _UNK_11de9ae4;
        uRam123954dc = _UNK_11de9ae8;
        uRam123954e0 = _UNK_11de9aec;
        DAT_123954e4 = 1;
        DAT_123954b8 = iVar3;
        _DAT_123954bc = iVar3;
        _DAT_123954c0 = iVar3;
        FUN_11a8911f(&LAB_11cb45c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117ff880();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_117ffe10();
  return;
}



