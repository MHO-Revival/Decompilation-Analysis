// ===== class CEquipLevelUpInfo  (3 recovered methods) =====

/* --- CEquipLevelUpInfo::GetManagers @ 116c3300 --- */
// [RE-AUTO c3]
// id: CEquipLevelUpInfo::GetManagers
// strings:
//   ""CEquipLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo::GetManagers"" */

undefined * CEquipLevelUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3f058;
  if (param_3 == 0) {
    if ((DAT_1238c32c & 1) == 0) {
      DAT_1238c32c = DAT_1238c32c | 1;
      FUN_102500e0("CEquipLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7cb0);
    }
    if ((undefined *)*DAT_1238c310 != (undefined *)0x0) {
      return (undefined *)*DAT_1238c310;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238cb88 & 1) == 0) {
      DAT_1238cb88 = DAT_1238cb88 | 1;
      FUN_116c3880();
      FUN_11a8911f(&LAB_11ca7ad0);
    }
    puVar1 = &DAT_1238cb50;
  }
  return puVar1;
}



/* --- CEquipLevelUpInfo::GetManagers_116c4c90 @ 116c4c90 --- */
// [RE-AUTO c3]
// id: CEquipLevelUpInfo::GetManagers
// strings:
//   ""CEquipLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo::GetManagers"" */

undefined4 CEquipLevelUpInfo__GetManagers_116c4c90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238c32c & 1) == 0) {
      DAT_1238c32c = DAT_1238c32c | 1;
      FUN_102500e0("CEquipLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7cb0);
    }
    return *DAT_1238c310;
  }
  return 0;
}



/* --- CEquipLevelUpInfo::GetManagers_11916e40 @ 11916e40 --- */
// [RE-AUTO c3]
// id: CEquipLevelUpInfo::GetManagers
// calls: CEquipLevelUpInfo::GetManagers, CItemBaseInfo::GetManagers_117b6f40
// strings:
//   ""CEquipLevelUpInfo""
//   ""CEquipLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipLevelUpInfo::GetManagers
   calls: CEquipLevelUpInfo::GetManagers, CItemBaseInfo::GetManagers_117b6f40
   strings:
     ""CEquipLevelUpInfo""
     ""CEquipLevelUpInfo::GetManagers"" */

void CEquipLevelUpInfo__GetManagers_11916e40(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CEquipLevelUpInfo__GetManagers(0,"CEquipLevelUpInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d3f058;
      if ((DAT_1238c32c & 1) == 0) {
        DAT_1238c32c = DAT_1238c32c | 1;
        FUN_102500e0("CEquipLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca7cb0);
      }
      puVar4 = (undefined *)*DAT_1238c310;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipLevelUpInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1238cb88 & 1) == 0) {
          DAT_1238cb54 = 0;
          DAT_1238cb64 = 0;
          DAT_1238cb68 = 0;
          _DAT_1238cb6c = 0;
          uRam1238cb70 = 0;
          DAT_1238cb88 = DAT_1238cb88 | 1;
          _DAT_1238cb50 = &PTR_FUN_11d3f094;
          _DAT_1238cb74 = _DAT_11de9ae0;
          uRam1238cb78 = _UNK_11de9ae4;
          uRam1238cb7c = _UNK_11de9ae8;
          uRam1238cb80 = _UNK_11de9aec;
          DAT_1238cb84 = 1;
          DAT_1238cb58 = puVar4;
          _DAT_1238cb5c = puVar4;
          _DAT_1238cb60 = puVar4;
          FUN_11a8911f(&LAB_11cb1860);
        }
        puVar4 = &DAT_1238cb50;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_117b6f40(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



