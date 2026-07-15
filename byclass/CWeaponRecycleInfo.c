// ===== class CWeaponRecycleInfo  (4 recovered methods) =====

/* --- CWeaponRecycleInfo::GetManagers @ 113f3d60 --- */
// [RE-AUTO c3]
// id: CWeaponRecycleInfo::GetManagers
// strings:
//   ""CWeaponRecycleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWeaponRecycleInfo::GetManagers
   strings:
     ""CWeaponRecycleInfo::GetManagers"" */

undefined * CWeaponRecycleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2499c;
  if (param_3 == 0) {
    if ((DAT_1218f794 & 1) == 0) {
      DAT_1218f794 = DAT_1218f794 | 1;
      FUN_102500e0("CWeaponRecycleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9c370);
    }
    if ((undefined *)*DAT_1218f778 != (undefined *)0x0) {
      return (undefined *)*DAT_1218f778;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1218f804 & 1) == 0) {
      DAT_1218f804 = DAT_1218f804 | 1;
      FUN_113f5690();
      FUN_11a8911f(&LAB_11c9c2e0);
    }
    puVar1 = &DAT_1218f7cc;
  }
  return puVar1;
}



/* --- CWeaponRecycleInfo::GetManagers_113fa540 @ 113fa540 --- */
// [RE-AUTO c3]
// id: CWeaponRecycleInfo::GetManagers
// strings:
//   ""CWeaponRecycleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CWeaponRecycleInfo::GetManagers
   strings:
     ""CWeaponRecycleInfo::GetManagers"" */

undefined4 CWeaponRecycleInfo__GetManagers_113fa540(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1218f794 & 1) == 0) {
      DAT_1218f794 = DAT_1218f794 | 1;
      FUN_102500e0("CWeaponRecycleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9c370);
    }
    return *DAT_1218f778;
  }
  return 0;
}



/* --- CWeaponRecycleInfo::GetManagers_119b4a80 @ 119b4a80 --- */
// [RE-AUTO c3]
// id: CWeaponRecycleInfo::GetManagers
// calls: CWeaponRecycleInfo::GetManagers
// strings:
//   ""CWeaponRecycleInfo""
//   ""CWeaponRecycleInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponRecycleInfo::GetManagers
   calls: CWeaponRecycleInfo::GetManagers
   strings:
     ""CWeaponRecycleInfo""
     ""CWeaponRecycleInfo::GetManagers"" */

void CWeaponRecycleInfo__GetManagers_119b4a80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CWeaponRecycleInfo__GetManagers(0,"CWeaponRecycleInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2499c;
      if ((DAT_1218f794 & 1) == 0) {
        DAT_1218f794 = DAT_1218f794 | 1;
        FUN_102500e0("CWeaponRecycleInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9c370);
      }
      if (((*DAT_1218f778 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CWeaponRecycleInfo",0), iVar3 == 0)) &&
         ((DAT_1218f804 & 1) == 0)) {
        DAT_1218f7d0 = 0;
        DAT_1218f7e0 = 0;
        DAT_1218f7e4 = 0;
        _DAT_1218f7e8 = 0;
        uRam1218f7ec = 0;
        DAT_1218f804 = DAT_1218f804 | 1;
        _DAT_1218f7cc = &PTR_FUN_11d249d8;
        _DAT_1218f7f0 = _DAT_11de9ae0;
        uRam1218f7f4 = _UNK_11de9ae4;
        uRam1218f7f8 = _UNK_11de9ae8;
        uRam1218f7fc = _UNK_11de9aec;
        DAT_1218f800 = 1;
        DAT_1218f7d4 = iVar3;
        _DAT_1218f7d8 = iVar3;
        _DAT_1218f7dc = iVar3;
        FUN_11a8911f(&LAB_11cb4320);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76ff0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CWeaponRecycleInfo::GetManagers_119b4bd0 @ 119b4bd0 --- */
// [RE-AUTO c3]
// id: CWeaponRecycleInfo::GetManagers
// calls: CWeaponRecycleInfo::GetManagers
// strings:
//   ""CWeaponRecycleInfo""
//   ""CWeaponRecycleInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponRecycleInfo::GetManagers
   calls: CWeaponRecycleInfo::GetManagers
   strings:
     ""CWeaponRecycleInfo""
     ""CWeaponRecycleInfo::GetManagers"" */

void CWeaponRecycleInfo__GetManagers_119b4bd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CWeaponRecycleInfo__GetManagers(0,"CWeaponRecycleInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2499c;
      if ((DAT_1218f794 & 1) == 0) {
        DAT_1218f794 = DAT_1218f794 | 1;
        FUN_102500e0("CWeaponRecycleInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9c370);
      }
      if (((*DAT_1218f778 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CWeaponRecycleInfo",0), iVar3 == 0)) &&
         ((DAT_1218f804 & 1) == 0)) {
        DAT_1218f7d0 = 0;
        DAT_1218f7e0 = 0;
        DAT_1218f7e4 = 0;
        _DAT_1218f7e8 = 0;
        uRam1218f7ec = 0;
        DAT_1218f804 = DAT_1218f804 | 1;
        _DAT_1218f7cc = &PTR_FUN_11d249d8;
        _DAT_1218f7f0 = _DAT_11de9ae0;
        uRam1218f7f4 = _UNK_11de9ae4;
        uRam1218f7f8 = _UNK_11de9ae8;
        uRam1218f7fc = _UNK_11de9aec;
        DAT_1218f800 = 1;
        DAT_1218f7d4 = iVar3;
        _DAT_1218f7d8 = iVar3;
        _DAT_1218f7dc = iVar3;
        FUN_11a8911f(&LAB_11cb4320);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76fe0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



