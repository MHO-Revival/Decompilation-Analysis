// ===== class CWeaponTutorialInfo  (4 recovered methods) =====

/* --- CWeaponTutorialInfo::GetManagers @ 10876670 --- */
// [RE-AUTO c3]
// id: CWeaponTutorialInfo::GetManagers
// strings:
//   ""CWeaponTutorialInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponTutorialInfo::GetManagers
   strings:
     ""CWeaponTutorialInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CWeaponTutorialInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf908 & 1) == 0) {
    DAT_123bf908 = DAT_123bf908 | 1;
    _DAT_123bf920 = &DAT_123bf910;
    DAT_123bf924 = &DAT_123bf910;
    DAT_123bf910 = 0;
    FUN_100d83d0("CWeaponTutorialInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c73c60);
  }
  return DAT_123bf90c;
}



/* --- CWeaponTutorialInfo::GetManagers_11a5a350 @ 11a5a350 --- */
// [RE-AUTO c3]
// id: CWeaponTutorialInfo::GetManagers
// strings:
//   ""CWeaponTutorialInfo""
//   ""CWeaponTutorialInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponTutorialInfo::GetManagers
   strings:
     ""CWeaponTutorialInfo""
     ""CWeaponTutorialInfo::GetManagers"" */

undefined4 CWeaponTutorialInfo__GetManagers_11a5a350(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1087e930(0,"CWeaponTutorialInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  while( true ) {
    local_8 = &PTR_FUN_11dd2614;
    if ((DAT_123bf908 & 1) == 0) {
      DAT_123bf908 = DAT_123bf908 | 1;
      FUN_102500e0("CWeaponTutorialInfo::GetManagers");
      FUN_11a8911f(&LAB_11c73c60);
    }
    puVar3 = (undefined4 *)*DAT_123bf90c;
    if ((puVar3 == (undefined4 *)0x0) &&
       (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CWeaponTutorialInfo",0),
       puVar3 == (undefined4 *)0x0)) {
      if ((DAT_123bf8c4 & 1) == 0) {
        DAT_123bf8cc = 0;
        DAT_123bf8dc = 0;
        DAT_123bf8e0 = 0;
        _DAT_123bf8e4 = 0;
        uRam123bf8e8 = 0;
        DAT_123bf8c4 = DAT_123bf8c4 | 1;
        DAT_123bf8c8 = &PTR_FUN_11dd26bc;
        _DAT_123bf8ec = _DAT_11de9ae0;
        uRam123bf8f0 = _UNK_11de9ae4;
        uRam123bf8f4 = _UNK_11de9ae8;
        uRam123bf8f8 = _UNK_11de9aec;
        DAT_123bf8fc = 1;
        DAT_123bf8d0 = puVar3;
        _DAT_123bf8d4 = puVar3;
        _DAT_123bf8d8 = puVar3;
        FUN_11a8911f(&LAB_11cb7270);
      }
      puVar3 = &DAT_123bf8c8;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar6) && (iVar6 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
        (piVar1 = *(int **)(puVar3[5] + iVar6 * 4), piVar1 != (int *)0x0)) &&
       (iVar4 = (**(code **)(*piVar1 + 0x30))(), iVar4 == param_1)) break;
    iVar6 = iVar6 + 1;
    if (iVar2 <= iVar6) {
      return 0;
    }
  }
  uVar5 = (**(code **)(*piVar1 + 0x34))();
  return uVar5;
}



/* --- CWeaponTutorialInfo::GetManagers_11a5a4c0 @ 11a5a4c0 --- */
// [RE-AUTO c3]
// id: CWeaponTutorialInfo::GetManagers
// strings:
//   ""CWeaponTutorialInfo""
//   ""CWeaponTutorialInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponTutorialInfo::GetManagers
   strings:
     ""CWeaponTutorialInfo""
     ""CWeaponTutorialInfo::GetManagers"" */

undefined4 CWeaponTutorialInfo__GetManagers_11a5a4c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1087e930(0,"CWeaponTutorialInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  while( true ) {
    local_8 = &PTR_FUN_11dd2614;
    if ((DAT_123bf908 & 1) == 0) {
      DAT_123bf908 = DAT_123bf908 | 1;
      FUN_102500e0("CWeaponTutorialInfo::GetManagers");
      FUN_11a8911f(&LAB_11c73c60);
    }
    puVar3 = (undefined4 *)*DAT_123bf90c;
    if ((puVar3 == (undefined4 *)0x0) &&
       (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CWeaponTutorialInfo",0),
       puVar3 == (undefined4 *)0x0)) {
      if ((DAT_123bf8c4 & 1) == 0) {
        DAT_123bf8cc = 0;
        DAT_123bf8dc = 0;
        DAT_123bf8e0 = 0;
        _DAT_123bf8e4 = 0;
        uRam123bf8e8 = 0;
        DAT_123bf8c4 = DAT_123bf8c4 | 1;
        DAT_123bf8c8 = &PTR_FUN_11dd26bc;
        _DAT_123bf8ec = _DAT_11de9ae0;
        uRam123bf8f0 = _UNK_11de9ae4;
        uRam123bf8f4 = _UNK_11de9ae8;
        uRam123bf8f8 = _UNK_11de9aec;
        DAT_123bf8fc = 1;
        DAT_123bf8d0 = puVar3;
        _DAT_123bf8d4 = puVar3;
        _DAT_123bf8d8 = puVar3;
        FUN_11a8911f(&LAB_11cb7270);
      }
      puVar3 = &DAT_123bf8c8;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar6) && (iVar6 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
        (piVar1 = *(int **)(puVar3[5] + iVar6 * 4), piVar1 != (int *)0x0)) &&
       (iVar4 = (**(code **)(*piVar1 + 0x34))(), iVar4 == param_1)) break;
    iVar6 = iVar6 + 1;
    if (iVar2 <= iVar6) {
      return 0;
    }
  }
  uVar5 = (**(code **)(*piVar1 + 0x30))();
  return uVar5;
}



/* --- CWeaponTutorialInfo::GetManagers_11a5a610 @ 11a5a610 --- */
// [RE-AUTO c3]
// id: CWeaponTutorialInfo::GetManagers
// strings:
//   ""CWeaponTutorialInfo""
//   ""CWeaponTutorialInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CWeaponTutorialInfo::GetManagers
   strings:
     ""CWeaponTutorialInfo""
     ""CWeaponTutorialInfo::GetManagers"" */

undefined1 CWeaponTutorialInfo__GetManagers_11a5a610(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar1 = (int *)FUN_1087e930(0,"CWeaponTutorialInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  do {
    local_c = &PTR_FUN_11dd2614;
    if ((DAT_123bf908 & 1) == 0) {
      DAT_123bf908 = DAT_123bf908 | 1;
      FUN_102500e0("CWeaponTutorialInfo::GetManagers");
      FUN_11a8911f(&LAB_11c73c60);
    }
    puVar3 = (undefined4 *)*DAT_123bf90c;
    if ((puVar3 == (undefined4 *)0x0) &&
       (puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CWeaponTutorialInfo",0),
       puVar3 == (undefined4 *)0x0)) {
      if ((DAT_123bf8c4 & 1) == 0) {
        DAT_123bf8cc = 0;
        DAT_123bf8dc = 0;
        DAT_123bf8e0 = 0;
        _DAT_123bf8e4 = 0;
        uRam123bf8e8 = 0;
        DAT_123bf8c4 = DAT_123bf8c4 | 1;
        DAT_123bf8c8 = &PTR_FUN_11dd26bc;
        _DAT_123bf8ec = _DAT_11de9ae0;
        uRam123bf8f0 = _UNK_11de9ae4;
        uRam123bf8f4 = _UNK_11de9ae8;
        uRam123bf8f8 = _UNK_11de9aec;
        DAT_123bf8fc = 1;
        DAT_123bf8d0 = puVar3;
        _DAT_123bf8d4 = puVar3;
        _DAT_123bf8d8 = puVar3;
        FUN_11a8911f(&LAB_11cb7270);
      }
      puVar3 = &DAT_123bf8c8;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((-1 < iVar5) && (iVar5 < (int)(puVar3[6] - puVar3[5]) >> 2)) {
      piVar1 = *(int **)(puVar3[5] + iVar5 * 4);
      if ((piVar1 != (int *)0x0) && (iVar4 = (**(code **)(*piVar1 + 0x34))(), iVar4 == param_1)) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return local_5;
    }
  } while( true );
}



