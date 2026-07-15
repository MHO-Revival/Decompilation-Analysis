// ===== class CItemDecomposeInfo  (4 recovered methods) =====

/* --- CItemDecomposeInfo::GetManagers @ 115946c0 --- */
// [RE-AUTO c3]
// id: CItemDecomposeInfo::GetManagers
// strings:
//   ""CItemDecomposeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo::GetManagers"" */

undefined * CItemDecomposeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2f834;
  if (param_3 == 0) {
    if ((DAT_122df2bc & 1) == 0) {
      DAT_122df2bc = DAT_122df2bc | 1;
      FUN_102500e0("CItemDecomposeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3610);
    }
    if ((undefined *)*DAT_122df2a0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df2a0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df328 & 1) == 0) {
      DAT_122df328 = DAT_122df328 | 1;
      FUN_11594dc0();
      FUN_11a8911f(&LAB_11ca3400);
    }
    puVar1 = &DAT_122df2f0;
  }
  return puVar1;
}



/* --- CItemDecomposeInfo::GetManagers_11599f90 @ 11599f90 --- */
// [RE-AUTO c3]
// id: CItemDecomposeInfo::GetManagers
// strings:
//   ""CItemDecomposeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo::GetManagers"" */

undefined4 CItemDecomposeInfo__GetManagers_11599f90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df2bc & 1) == 0) {
      DAT_122df2bc = DAT_122df2bc | 1;
      FUN_102500e0("CItemDecomposeInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3610);
    }
    return *DAT_122df2a0;
  }
  return 0;
}



/* --- CItemDecomposeInfo::GetManagers_1197e100 @ 1197e100 --- */
// [RE-AUTO c3]
// id: CItemDecomposeInfo::GetManagers
// calls: CItemDecomposeInfo::GetManagers
// strings:
//   ""CItemDecomposeInfo""
//   ""CItemDecomposeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemDecomposeInfo::GetManagers
   calls: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo""
     ""CItemDecomposeInfo::GetManagers"" */

void CItemDecomposeInfo__GetManagers_1197e100(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CItemDecomposeInfo__GetManagers(0,"CItemDecomposeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2f834;
      if ((DAT_122df2bc & 1) == 0) {
        DAT_122df2bc = DAT_122df2bc | 1;
        FUN_102500e0("CItemDecomposeInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca3610);
      }
      if (((*DAT_122df2a0 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CItemDecomposeInfo",0), iVar3 == 0)) &&
         ((DAT_122df328 & 1) == 0)) {
        DAT_122df2f4 = 0;
        DAT_122df304 = 0;
        DAT_122df308 = 0;
        _DAT_122df30c = 0;
        uRam122df310 = 0;
        DAT_122df328 = DAT_122df328 | 1;
        _DAT_122df2f0 = &PTR_FUN_11d2f870;
        _DAT_122df314 = _DAT_11de9ae0;
        uRam122df318 = _UNK_11de9ae4;
        uRam122df31c = _UNK_11de9ae8;
        uRam122df320 = _UNK_11de9aec;
        DAT_122df324 = 1;
        DAT_122df2f8 = iVar3;
        _DAT_122df2fc = iVar3;
        _DAT_122df300 = iVar3;
        FUN_11a8911f(&LAB_11cb3660);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a529e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CItemDecomposeInfo::GetManagers_1197e250 @ 1197e250 --- */
// [RE-AUTO c3]
// id: CItemDecomposeInfo::GetManagers
// calls: CItemDecomposeInfo::GetManagers
// strings:
//   ""CItemDecomposeInfo""
//   ""CItemDecomposeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemDecomposeInfo::GetManagers
   calls: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo""
     ""CItemDecomposeInfo::GetManagers"" */

void CItemDecomposeInfo__GetManagers_1197e250(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CItemDecomposeInfo__GetManagers(0,"CItemDecomposeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2f834;
      if ((DAT_122df2bc & 1) == 0) {
        DAT_122df2bc = DAT_122df2bc | 1;
        FUN_102500e0("CItemDecomposeInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca3610);
      }
      if (((*DAT_122df2a0 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CItemDecomposeInfo",0), iVar3 == 0)) &&
         ((DAT_122df328 & 1) == 0)) {
        DAT_122df2f4 = 0;
        DAT_122df304 = 0;
        DAT_122df308 = 0;
        _DAT_122df30c = 0;
        uRam122df310 = 0;
        DAT_122df328 = DAT_122df328 | 1;
        _DAT_122df2f0 = &PTR_FUN_11d2f870;
        _DAT_122df314 = _DAT_11de9ae0;
        uRam122df318 = _UNK_11de9ae4;
        uRam122df31c = _UNK_11de9ae8;
        uRam122df320 = _UNK_11de9aec;
        DAT_122df324 = 1;
        DAT_122df2f8 = iVar3;
        _DAT_122df2fc = iVar3;
        _DAT_122df300 = iVar3;
        FUN_11a8911f(&LAB_11cb3660);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a52950();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



