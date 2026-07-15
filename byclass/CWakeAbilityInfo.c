// ===== class CWakeAbilityInfo  (3 recovered methods) =====

/* --- CWakeAbilityInfo::GetManagers @ 116c33a0 --- */
// [RE-AUTO c3]
// id: CWakeAbilityInfo::GetManagers
// strings:
//   ""CWakeAbilityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWakeAbilityInfo::GetManagers
   strings:
     ""CWakeAbilityInfo::GetManagers"" */

undefined * CWakeAbilityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3efd0;
  if (param_3 == 0) {
    if ((DAT_1238c30c & 1) == 0) {
      DAT_1238c30c = DAT_1238c30c | 1;
      FUN_102500e0("CWakeAbilityInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7ce0);
    }
    if ((undefined *)*DAT_1238c2f0 != (undefined *)0x0) {
      return (undefined *)*DAT_1238c2f0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238cb4c & 1) == 0) {
      DAT_1238cb4c = DAT_1238cb4c | 1;
      FUN_116c38e0();
      FUN_11a8911f(&LAB_11ca7c50);
    }
    puVar1 = &DAT_1238cb14;
  }
  return puVar1;
}



/* --- CWakeAbilityInfo::GetManagers_116c4ce0 @ 116c4ce0 --- */
// [RE-AUTO c3]
// id: CWakeAbilityInfo::GetManagers
// strings:
//   ""CWakeAbilityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWakeAbilityInfo::GetManagers
   strings:
     ""CWakeAbilityInfo::GetManagers"" */

undefined4 CWakeAbilityInfo__GetManagers_116c4ce0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238c30c & 1) == 0) {
      DAT_1238c30c = DAT_1238c30c | 1;
      FUN_102500e0("CWakeAbilityInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7ce0);
    }
    return *DAT_1238c2f0;
  }
  return 0;
}



/* --- CWakeAbilityInfo::GetManagers_11966a30 @ 11966a30 --- */
// [RE-AUTO c3]
// id: CWakeAbilityInfo::GetManagers
// calls: CWakeAbilityInfo::GetManagers
// strings:
//   ""CWakeAbilityInfo""
//   ""CWakeAbilityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWakeAbilityInfo::GetManagers
   calls: CWakeAbilityInfo::GetManagers
   strings:
     ""CWakeAbilityInfo""
     ""CWakeAbilityInfo::GetManagers"" */

void CWakeAbilityInfo__GetManagers_11966a30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CWakeAbilityInfo__GetManagers(0,"CWakeAbilityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d3efd0;
      if ((DAT_1238c30c & 1) == 0) {
        DAT_1238c30c = DAT_1238c30c | 1;
        FUN_102500e0("CWakeAbilityInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca7ce0);
      }
      if (((*DAT_1238c2f0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CWakeAbilityInfo",0), iVar3 == 0)
          ) && ((DAT_1238cb4c & 1) == 0)) {
        DAT_1238cb18 = 0;
        DAT_1238cb28 = 0;
        DAT_1238cb2c = 0;
        _DAT_1238cb30 = 0;
        uRam1238cb34 = 0;
        DAT_1238cb4c = DAT_1238cb4c | 1;
        _DAT_1238cb14 = &PTR_FUN_11d3f00c;
        _DAT_1238cb38 = _DAT_11de9ae0;
        uRam1238cb3c = _UNK_11de9ae4;
        uRam1238cb40 = _UNK_11de9ae8;
        uRam1238cb44 = _UNK_11de9aec;
        DAT_1238cb48 = 1;
        DAT_1238cb1c = iVar3;
        _DAT_1238cb20 = iVar3;
        _DAT_1238cb24 = iVar3;
        FUN_11a8911f(&LAB_11cb2cd0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a46590();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



