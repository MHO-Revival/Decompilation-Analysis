// ===== class CMonsterGroupInfo  (4 recovered methods) =====

/* --- CMonsterGroupInfo::GetManagers @ 118d52c0 --- */
// [RE-AUTO c3]
// id: CMonsterGroupInfo::GetManagers
// strings:
//   ""CMonsterGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterGroupInfo::GetManagers
   strings:
     ""CMonsterGroupInfo::GetManagers"" */

undefined * CMonsterGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5a884;
  if (param_3 == 0) {
    if ((DAT_1239d770 & 1) == 0) {
      DAT_1239d770 = DAT_1239d770 | 1;
      FUN_102500e0("CMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb00f0);
    }
    if ((undefined *)*DAT_1239d754 != (undefined *)0x0) {
      return (undefined *)*DAT_1239d754;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239d7e0 & 1) == 0) {
      DAT_1239d7e0 = DAT_1239d7e0 | 1;
      FUN_118d55d0();
      FUN_11a8911f(&LAB_11cb0090);
    }
    puVar1 = &DAT_1239d7a8;
  }
  return puVar1;
}



/* --- CMonsterGroupInfo::GetManagers_118d5f00 @ 118d5f00 --- */
// [RE-AUTO c3]
// id: CMonsterGroupInfo::GetManagers
// strings:
//   ""CMonsterGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterGroupInfo::GetManagers
   strings:
     ""CMonsterGroupInfo::GetManagers"" */

undefined4 CMonsterGroupInfo__GetManagers_118d5f00(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239d770 & 1) == 0) {
      DAT_1239d770 = DAT_1239d770 | 1;
      FUN_102500e0("CMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb00f0);
    }
    return *DAT_1239d754;
  }
  return 0;
}



/* --- CMonsterGroupInfo::GetManagers_118d6130 @ 118d6130 --- */
// [RE-AUTO c3]
// id: CMonsterGroupInfo::GetManagers
// calls: CMonsterGroupInfo::GetManagers
// strings:
//   ""CMonsterGroupInfo""
//   ""CMonsterGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterGroupInfo::GetManagers
   calls: CMonsterGroupInfo::GetManagers
   strings:
     ""CMonsterGroupInfo""
     ""CMonsterGroupInfo::GetManagers"" */

void CMonsterGroupInfo__GetManagers_118d6130(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonsterGroupInfo__GetManagers(0,"CMonsterGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5a884;
      if ((DAT_1239d770 & 1) == 0) {
        DAT_1239d770 = DAT_1239d770 | 1;
        FUN_102500e0("CMonsterGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb00f0);
      }
      if (((*DAT_1239d754 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonsterGroupInfo",0), iVar3 == 0)) &&
         ((DAT_1239d7e0 & 1) == 0)) {
        DAT_1239d7ac = 0;
        DAT_1239d7bc = 0;
        DAT_1239d7c0 = 0;
        _DAT_1239d7c4 = 0;
        uRam1239d7c8 = 0;
        DAT_1239d7e0 = DAT_1239d7e0 | 1;
        _DAT_1239d7a8 = &PTR_FUN_11d5a8c0;
        _DAT_1239d7cc = _DAT_11de9ae0;
        uRam1239d7d0 = _UNK_11de9ae4;
        uRam1239d7d4 = _UNK_11de9ae8;
        uRam1239d7d8 = _UNK_11de9aec;
        DAT_1239d7dc = 1;
        DAT_1239d7b0 = iVar3;
        _DAT_1239d7b4 = iVar3;
        _DAT_1239d7b8 = iVar3;
        FUN_11a8911f(&LAB_11cb0090);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_119e6fe0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonsterGroupInfo::GetManagers_118d62b0 @ 118d62b0 --- */
// [RE-AUTO c3]
// id: CMonsterGroupInfo::GetManagers
// calls: CMonsterGroupInfo::GetManagers
// strings:
//   ""CMonsterGroupInfo""
//   ""CMonsterGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterGroupInfo::GetManagers
   calls: CMonsterGroupInfo::GetManagers
   strings:
     ""CMonsterGroupInfo""
     ""CMonsterGroupInfo::GetManagers"" */

void CMonsterGroupInfo__GetManagers_118d62b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CMonsterGroupInfo__GetManagers(0,"CMonsterGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5a884;
      if ((DAT_1239d770 & 1) == 0) {
        DAT_1239d770 = DAT_1239d770 | 1;
        FUN_102500e0("CMonsterGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb00f0);
      }
      if (((*DAT_1239d754 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonsterGroupInfo",0), iVar3 == 0)) &&
         ((DAT_1239d7e0 & 1) == 0)) {
        DAT_1239d7ac = 0;
        DAT_1239d7bc = 0;
        DAT_1239d7c0 = 0;
        _DAT_1239d7c4 = 0;
        uRam1239d7c8 = 0;
        DAT_1239d7e0 = DAT_1239d7e0 | 1;
        _DAT_1239d7a8 = &PTR_FUN_11d5a8c0;
        _DAT_1239d7cc = _DAT_11de9ae0;
        uRam1239d7d0 = _UNK_11de9ae4;
        uRam1239d7d4 = _UNK_11de9ae8;
        uRam1239d7d8 = _UNK_11de9aec;
        DAT_1239d7dc = 1;
        DAT_1239d7b0 = iVar3;
        _DAT_1239d7b4 = iVar3;
        _DAT_1239d7b8 = iVar3;
        FUN_11a8911f(&LAB_11cb0090);
      }
      local_8 = &PTR_FUN_11da54a8;
      CMonsterInfo__GetManagers_119e6e10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



