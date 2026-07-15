// ===== class CEquipQuickLevelUpInfo  (3 recovered methods) =====

/* --- CEquipQuickLevelUpInfo::GetManagers @ 11594620 --- */
// [RE-AUTO c3]
// id: CEquipQuickLevelUpInfo::GetManagers
// strings:
//   ""CEquipQuickLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo::GetManagers"" */

undefined * CEquipQuickLevelUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2f8bc;
  if (param_3 == 0) {
    if ((DAT_122df2dc & 1) == 0) {
      DAT_122df2dc = DAT_122df2dc | 1;
      FUN_102500e0("CEquipQuickLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca35e0);
    }
    if ((undefined *)*DAT_122df2c0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df2c0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df364 & 1) == 0) {
      DAT_122df364 = DAT_122df364 | 1;
      FUN_11594d60();
      FUN_11a8911f(&LAB_11ca32e0);
    }
    puVar1 = &DAT_122df32c;
  }
  return puVar1;
}



/* --- CEquipQuickLevelUpInfo::GetManagers_11599f40 @ 11599f40 --- */
// [RE-AUTO c3]
// id: CEquipQuickLevelUpInfo::GetManagers
// strings:
//   ""CEquipQuickLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo::GetManagers"" */

undefined4 CEquipQuickLevelUpInfo__GetManagers_11599f40(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df2dc & 1) == 0) {
      DAT_122df2dc = DAT_122df2dc | 1;
      FUN_102500e0("CEquipQuickLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca35e0);
    }
    return *DAT_122df2c0;
  }
  return 0;
}



/* --- CEquipQuickLevelUpInfo::GetManagers_11916be0 @ 11916be0 --- */
// [RE-AUTO c3]
// id: CEquipQuickLevelUpInfo::GetManagers
// calls: CEquipQuickLevelUpInfo::GetManagers
// strings:
//   ""CEquipQuickLevelUpInfo""
//   ""CEquipQuickLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipQuickLevelUpInfo::GetManagers
   calls: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo""
     ""CEquipQuickLevelUpInfo::GetManagers"" */

void CEquipQuickLevelUpInfo__GetManagers_11916be0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CEquipQuickLevelUpInfo__GetManagers(0,"CEquipQuickLevelUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2f8bc;
      if ((DAT_122df2dc & 1) == 0) {
        DAT_122df2dc = DAT_122df2dc | 1;
        FUN_102500e0("CEquipQuickLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca35e0);
      }
      puVar3 = (undefined *)*DAT_122df2c0;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CEquipQuickLevelUpInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_122df364 & 1) == 0) {
          DAT_122df330 = 0;
          DAT_122df340 = 0;
          DAT_122df344 = 0;
          _DAT_122df348 = 0;
          uRam122df34c = 0;
          DAT_122df364 = DAT_122df364 | 1;
          _DAT_122df32c = &PTR_FUN_11d2f900;
          _DAT_122df350 = _DAT_11de9ae0;
          uRam122df354 = _UNK_11de9ae4;
          uRam122df358 = _UNK_11de9ae8;
          uRam122df35c = _UNK_11de9aec;
          DAT_122df360 = 1;
          DAT_122df334 = puVar3;
          _DAT_122df338 = puVar3;
          _DAT_122df33c = puVar3;
          FUN_11a8911f(&LAB_11cb18c0);
        }
        puVar3 = &DAT_122df32c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        FUN_1183e310();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



