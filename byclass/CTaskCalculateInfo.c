// ===== class CTaskCalculateInfo  (4 recovered methods) =====

/* --- CTaskCalculateInfo::GetManagers @ 1185ea20 --- */
// [RE-AUTO c3]
// id: CTaskCalculateInfo::GetManagers
// strings:
//   ""CTaskCalculateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskCalculateInfo::GetManagers
   strings:
     ""CTaskCalculateInfo::GetManagers"" */

undefined * CTaskCalculateInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d51230;
  if (param_3 == 0) {
    if ((DAT_12398d78 & 1) == 0) {
      DAT_12398d78 = DAT_12398d78 | 1;
      FUN_102500e0("CTaskCalculateInfo::GetManagers");
      FUN_11a8911f(&LAB_11cadc20);
    }
    if ((undefined *)*DAT_12398d5c != (undefined *)0x0) {
      return (undefined *)*DAT_12398d5c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12398f68 & 1) == 0) {
      DAT_12398f68 = DAT_12398f68 | 1;
      FUN_1185ec90();
      FUN_11a8911f(&LAB_11cadbc0);
    }
    puVar1 = &DAT_12398f30;
  }
  return puVar1;
}



/* --- CTaskCalculateInfo::GetManagers_1185f220 @ 1185f220 --- */
// [RE-AUTO c3]
// id: CTaskCalculateInfo::GetManagers
// strings:
//   ""CTaskCalculateInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskCalculateInfo::GetManagers
   strings:
     ""CTaskCalculateInfo::GetManagers"" */

undefined4 CTaskCalculateInfo__GetManagers_1185f220(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398d78 & 1) == 0) {
      DAT_12398d78 = DAT_12398d78 | 1;
      FUN_102500e0("CTaskCalculateInfo::GetManagers");
      FUN_11a8911f(&LAB_11cadc20);
    }
    return *DAT_12398d5c;
  }
  return 0;
}



/* --- CTaskCalculateInfo::GetManagers_11903fe0 @ 11903fe0 --- */
// [RE-AUTO c3]
// id: CTaskCalculateInfo::GetManagers
// calls: CTaskCalculateInfo::GetManagers
// strings:
//   ""CTaskCalculateInfo""
//   ""CTaskCalculateInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskCalculateInfo::GetManagers
   calls: CTaskCalculateInfo::GetManagers
   strings:
     ""CTaskCalculateInfo""
     ""CTaskCalculateInfo::GetManagers"" */

void CTaskCalculateInfo__GetManagers_11903fe0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskCalculateInfo__GetManagers(0,"CTaskCalculateInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d51230;
      if ((DAT_12398d78 & 1) == 0) {
        DAT_12398d78 = DAT_12398d78 | 1;
        FUN_102500e0("CTaskCalculateInfo::GetManagers");
        FUN_11a8911f(&LAB_11cadc20);
      }
      if (((*DAT_12398d5c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskCalculateInfo",0), iVar3 == 0)) &&
         ((DAT_12398f68 & 1) == 0)) {
        DAT_12398f34 = 0;
        DAT_12398f44 = 0;
        DAT_12398f48 = 0;
        _DAT_12398f4c = 0;
        uRam12398f50 = 0;
        DAT_12398f68 = DAT_12398f68 | 1;
        _DAT_12398f30 = &PTR_FUN_11d5129c;
        _DAT_12398f54 = _DAT_11de9ae0;
        uRam12398f58 = _UNK_11de9ae4;
        uRam12398f5c = _UNK_11de9ae8;
        uRam12398f60 = _UNK_11de9aec;
        DAT_12398f64 = 1;
        DAT_12398f38 = iVar3;
        _DAT_12398f3c = iVar3;
        _DAT_12398f40 = iVar3;
        FUN_11a8911f(&LAB_11cb0db0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185f5f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskCalculateInfo::GetManagers_11904130 @ 11904130 --- */
// [RE-AUTO c3]
// id: CTaskCalculateInfo::GetManagers
// calls: CTaskCalculateInfo::GetManagers
// strings:
//   ""CTaskCalculateInfo""
//   ""CTaskCalculateInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskCalculateInfo::GetManagers
   calls: CTaskCalculateInfo::GetManagers
   strings:
     ""CTaskCalculateInfo""
     ""CTaskCalculateInfo::GetManagers"" */

void CTaskCalculateInfo__GetManagers_11904130(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskCalculateInfo__GetManagers(0,"CTaskCalculateInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d51230;
      if ((DAT_12398d78 & 1) == 0) {
        DAT_12398d78 = DAT_12398d78 | 1;
        FUN_102500e0("CTaskCalculateInfo::GetManagers");
        FUN_11a8911f(&LAB_11cadc20);
      }
      if (((*DAT_12398d5c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskCalculateInfo",0), iVar3 == 0)) &&
         ((DAT_12398f68 & 1) == 0)) {
        DAT_12398f34 = 0;
        DAT_12398f44 = 0;
        DAT_12398f48 = 0;
        _DAT_12398f4c = 0;
        uRam12398f50 = 0;
        DAT_12398f68 = DAT_12398f68 | 1;
        _DAT_12398f30 = &PTR_FUN_11d5129c;
        _DAT_12398f54 = _DAT_11de9ae0;
        uRam12398f58 = _UNK_11de9ae4;
        uRam12398f5c = _UNK_11de9ae8;
        uRam12398f60 = _UNK_11de9aec;
        DAT_12398f64 = 1;
        DAT_12398f38 = iVar3;
        _DAT_12398f3c = iVar3;
        _DAT_12398f40 = iVar3;
        FUN_11a8911f(&LAB_11cb0db0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185f5e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



