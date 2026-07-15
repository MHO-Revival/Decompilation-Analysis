// ===== class CEquipHiddenSkillCondOpenInfo  (3 recovered methods) =====

/* --- CEquipHiddenSkillCondOpenInfo::GetManagers @ 11520130 --- */
// [RE-AUTO c3]
// id: CEquipHiddenSkillCondOpenInfo::GetManagers
// strings:
//   ""CEquipHiddenSkillCondOpenInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipHiddenSkillCondOpenInfo::GetManagers
   strings:
     ""CEquipHiddenSkillCondOpenInfo::GetManagers"" */

undefined *
CEquipHiddenSkillCondOpenInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c0fc;
  if (param_3 == 0) {
    if ((DAT_122dea04 & 1) == 0) {
      DAT_122dea04 = DAT_122dea04 | 1;
      FUN_102500e0("CEquipHiddenSkillCondOpenInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c40);
    }
    if ((undefined *)*DAT_122de9e8 != (undefined *)0x0) {
      return (undefined *)*DAT_122de9e8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dea70 & 1) == 0) {
      DAT_122dea70 = DAT_122dea70 | 1;
      FUN_11520aa0();
      FUN_11a8911f(&LAB_11ca09d0);
    }
    puVar1 = &DAT_122dea38;
  }
  return puVar1;
}



/* --- CEquipHiddenSkillCondOpenInfo::GetManagers_115227d0 @ 115227d0 --- */
// [RE-AUTO c3]
// id: CEquipHiddenSkillCondOpenInfo::GetManagers
// calls: CEquipHiddenSkillCondOpenInfo::GetManagers
// strings:
//   ""CEquipHiddenSkillCondOpenInfo""
//   ""CEquipHiddenSkillCondOpenInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipHiddenSkillCondOpenInfo::GetManagers
   calls: CEquipHiddenSkillCondOpenInfo::GetManagers
   strings:
     ""CEquipHiddenSkillCondOpenInfo""
     ""CEquipHiddenSkillCondOpenInfo::GetManagers"" */

undefined4 CEquipHiddenSkillCondOpenInfo__GetManagers_115227d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)CEquipHiddenSkillCondOpenInfo__GetManagers(0,"CEquipHiddenSkillCondOpenInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d2c0fc;
      if ((DAT_122dea04 & 1) == 0) {
        DAT_122dea04 = DAT_122dea04 | 1;
        FUN_102500e0("CEquipHiddenSkillCondOpenInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca0c40);
      }
      puVar4 = (undefined *)*DAT_122de9e8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CEquipHiddenSkillCondOpenInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122dea70 & 1) == 0) {
          DAT_122dea3c = 0;
          DAT_122dea4c = 0;
          DAT_122dea50 = 0;
          _DAT_122dea54 = 0;
          uRam122dea58 = 0;
          DAT_122dea70 = DAT_122dea70 | 1;
          _DAT_122dea38 = &PTR_FUN_11d2c150;
          _DAT_122dea5c = _DAT_11de9ae0;
          uRam122dea60 = _UNK_11de9ae4;
          uRam122dea64 = _UNK_11de9ae8;
          uRam122dea68 = _UNK_11de9aec;
          DAT_122dea6c = 1;
          DAT_122dea40 = puVar4;
          _DAT_122dea44 = puVar4;
          _DAT_122dea48 = puVar4;
          FUN_11a8911f(&LAB_11ca09d0);
        }
        puVar4 = &DAT_122dea38;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (((*(int *)(iVar1 + 0x14) == param_1 && (*(int *)(iVar1 + 0x20) == param_3)) &&
          ((*(int *)(iVar1 + 0x18) <= param_2 && (param_2 <= *(int *)(iVar1 + 0x1c))))))) {
        return *(undefined4 *)(iVar1 + 0x24);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0xffffffff;
}



/* --- CEquipHiddenSkillCondOpenInfo::GetManagers_11522cf0 @ 11522cf0 --- */
// [RE-AUTO c3]
// id: CEquipHiddenSkillCondOpenInfo::GetManagers
// strings:
//   ""CEquipHiddenSkillCondOpenInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipHiddenSkillCondOpenInfo::GetManagers
   strings:
     ""CEquipHiddenSkillCondOpenInfo::GetManagers"" */

undefined4 CEquipHiddenSkillCondOpenInfo__GetManagers_11522cf0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dea04 & 1) == 0) {
      DAT_122dea04 = DAT_122dea04 | 1;
      FUN_102500e0("CEquipHiddenSkillCondOpenInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c40);
    }
    return *DAT_122de9e8;
  }
  return 0;
}



