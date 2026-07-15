// ===== class CDragonBoxBlackFaceGiftInfo  (4 recovered methods) =====

/* --- CDragonBoxBlackFaceGiftInfo::GetManagers @ 11816a40 --- */
// [RE-AUTO c3]
// id: CDragonBoxBlackFaceGiftInfo::GetManagers
// strings:
//   ""CDragonBoxBlackFaceGiftInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDragonBoxBlackFaceGiftInfo::GetManagers
   strings:
     ""CDragonBoxBlackFaceGiftInfo::GetManagers"" */

undefined4 *
CDragonBoxBlackFaceGiftInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4d084;
  if (param_3 == 0) {
    if ((DAT_123967e0 & 1) == 0) {
      DAT_123967e0 = DAT_123967e0 | 1;
      FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
      FUN_11a8911f(&LAB_11cabfc0);
    }
    if ((undefined4 *)*DAT_123967c4 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123967c4;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12396a5c & 1) == 0) {
      DAT_12396a5c = DAT_12396a5c | 1;
      FUN_118170e0();
      FUN_11a8911f(&LAB_11cabea0);
    }
    puVar1 = &DAT_12396a24;
  }
  return puVar1;
}



/* --- CDragonBoxBlackFaceGiftInfo::GetManagers_11818300 @ 11818300 --- */
// [RE-AUTO c3]
// id: CDragonBoxBlackFaceGiftInfo::GetManagers
// strings:
//   ""CDragonBoxBlackFaceGiftInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDragonBoxBlackFaceGiftInfo::GetManagers
   strings:
     ""CDragonBoxBlackFaceGiftInfo::GetManagers"" */

undefined4 CDragonBoxBlackFaceGiftInfo__GetManagers_11818300(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123967e0 & 1) == 0) {
      DAT_123967e0 = DAT_123967e0 | 1;
      FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
      FUN_11a8911f(&LAB_11cabfc0);
    }
    return *DAT_123967c4;
  }
  return 0;
}



/* --- CDragonBoxBlackFaceGiftInfo::GetManagers_119d5710 @ 119d5710 --- */
// [RE-AUTO c3]
// id: CDragonBoxBlackFaceGiftInfo::GetManagers
// calls: CDragonBoxBlackFaceGiftInfo::GetManagers
// strings:
//   ""CDragonBoxBlackFaceGiftInfo""
//   ""CDragonBoxBlackFaceGiftInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxBlackFaceGiftInfo::GetManagers
   calls: CDragonBoxBlackFaceGiftInfo::GetManagers
   strings:
     ""CDragonBoxBlackFaceGiftInfo""
     ""CDragonBoxBlackFaceGiftInfo::GetManagers"" */

void CDragonBoxBlackFaceGiftInfo__GetManagers_119d5710(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CDragonBoxBlackFaceGiftInfo__GetManagers(0,"CDragonBoxBlackFaceGiftInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4d084;
      if ((DAT_123967e0 & 1) == 0) {
        DAT_123967e0 = DAT_123967e0 | 1;
        FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
        FUN_11a8911f(&LAB_11cabfc0);
      }
      if (((*DAT_123967c4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxBlackFaceGiftInfo",0), iVar3 == 0)) &&
         ((DAT_12396a5c & 1) == 0)) {
        DAT_12396a28 = 0;
        DAT_12396a38 = 0;
        DAT_12396a3c = 0;
        _DAT_12396a40 = 0;
        uRam12396a44 = 0;
        DAT_12396a5c = DAT_12396a5c | 1;
        DAT_12396a24 = &PTR_FUN_11d4d0d4;
        _DAT_12396a48 = _DAT_11de9ae0;
        uRam12396a4c = _UNK_11de9ae4;
        uRam12396a50 = _UNK_11de9ae8;
        uRam12396a54 = _UNK_11de9aec;
        DAT_12396a58 = 1;
        DAT_12396a2c = iVar3;
        _DAT_12396a30 = iVar3;
        _DAT_12396a34 = iVar3;
        FUN_11a8911f(&LAB_11cb4c80);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a87c10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxBlackFaceGiftInfo::GetManagers_119d5860 @ 119d5860 --- */
// [RE-AUTO c3]
// id: CDragonBoxBlackFaceGiftInfo::GetManagers
// calls: CDragonBoxBlackFaceGiftInfo::GetManagers
// strings:
//   ""CDragonBoxBlackFaceGiftInfo""
//   ""CDragonBoxBlackFaceGiftInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxBlackFaceGiftInfo::GetManagers
   calls: CDragonBoxBlackFaceGiftInfo::GetManagers
   strings:
     ""CDragonBoxBlackFaceGiftInfo""
     ""CDragonBoxBlackFaceGiftInfo::GetManagers"" */

void CDragonBoxBlackFaceGiftInfo__GetManagers_119d5860(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CDragonBoxBlackFaceGiftInfo__GetManagers(0,"CDragonBoxBlackFaceGiftInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d4d084;
      if ((DAT_123967e0 & 1) == 0) {
        DAT_123967e0 = DAT_123967e0 | 1;
        FUN_102500e0("CDragonBoxBlackFaceGiftInfo::GetManagers");
        FUN_11a8911f(&LAB_11cabfc0);
      }
      if (((*DAT_123967c4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxBlackFaceGiftInfo",0), iVar3 == 0)) &&
         ((DAT_12396a5c & 1) == 0)) {
        DAT_12396a28 = 0;
        DAT_12396a38 = 0;
        DAT_12396a3c = 0;
        _DAT_12396a40 = 0;
        uRam12396a44 = 0;
        DAT_12396a5c = DAT_12396a5c | 1;
        DAT_12396a24 = &PTR_FUN_11d4d0d4;
        _DAT_12396a48 = _DAT_11de9ae0;
        uRam12396a4c = _UNK_11de9ae4;
        uRam12396a50 = _UNK_11de9ae8;
        uRam12396a54 = _UNK_11de9aec;
        DAT_12396a58 = 1;
        DAT_12396a2c = iVar3;
        _DAT_12396a30 = iVar3;
        _DAT_12396a34 = iVar3;
        FUN_11a8911f(&LAB_11cb4c80);
      }
      local_8 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a87b20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



