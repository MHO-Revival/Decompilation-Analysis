// ===== class CGuildBuildingLevelUpInfo  (3 recovered methods) =====

/* --- CGuildBuildingLevelUpInfo::GetManagers @ 1145da50 --- */
// [RE-AUTO c3]
// id: CGuildBuildingLevelUpInfo::GetManagers
// strings:
//   ""CGuildBuildingLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo::GetManagers"" */

undefined *
CGuildBuildingLevelUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d27604;
  if (param_3 == 0) {
    if ((DAT_122ddf80 & 1) == 0) {
      DAT_122ddf80 = DAT_122ddf80 | 1;
      FUN_102500e0("CGuildBuildingLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9da60);
    }
    if ((undefined *)*DAT_122ddf64 != (undefined *)0x0) {
      return (undefined *)*DAT_122ddf64;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122ddff8 & 1) == 0) {
      DAT_122ddff8 = DAT_122ddff8 | 1;
      FUN_1145df30();
      FUN_11a8911f(&LAB_11c9d930);
    }
    puVar1 = &DAT_122ddfc0;
  }
  return puVar1;
}



/* --- CGuildBuildingLevelUpInfo::GetManagers_1145ec70 @ 1145ec70 --- */
// [RE-AUTO c3]
// id: CGuildBuildingLevelUpInfo::GetManagers
// calls: CGuildBuildingLevelUpInfo::GetManagers
// strings:
//   ""CGuildBuildingLevelUpInfo""
//   ""CGuildBuildingLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildBuildingLevelUpInfo::GetManagers
   calls: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo""
     ""CGuildBuildingLevelUpInfo::GetManagers"" */

int CGuildBuildingLevelUpInfo__GetManagers_1145ec70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  piVar1 = (int *)CGuildBuildingLevelUpInfo__GetManagers(0,"CGuildBuildingLevelUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d27604;
      if ((DAT_122ddf80 & 1) == 0) {
        DAT_122ddf80 = DAT_122ddf80 | 1;
        FUN_102500e0("CGuildBuildingLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9da60);
      }
      puVar3 = (undefined *)*DAT_122ddf64;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CGuildBuildingLevelUpInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_122ddff8 & 1) == 0) {
          DAT_122ddfc4 = 0;
          DAT_122ddfd4 = 0;
          DAT_122ddfd8 = 0;
          _DAT_122ddfdc = 0;
          uRam122ddfe0 = 0;
          DAT_122ddff8 = DAT_122ddff8 | 1;
          _DAT_122ddfc0 = &PTR_FUN_11d27650;
          _DAT_122ddfe4 = _DAT_11de9ae0;
          uRam122ddfe8 = _UNK_11de9ae4;
          uRam122ddfec = _UNK_11de9ae8;
          uRam122ddff0 = _UNK_11de9aec;
          DAT_122ddff4 = 1;
          DAT_122ddfc8 = puVar3;
          _DAT_122ddfcc = puVar3;
          _DAT_122ddfd0 = puVar3;
          FUN_11a8911f(&LAB_11c9d930);
        }
        puVar3 = &DAT_122ddfc0;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if ((*(int *)(iVar4 + 0x14) == param_1) && (iVar6 < *(int *)(iVar4 + 0x18))) {
        iVar6 = *(int *)(iVar4 + 0x18);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return iVar6;
}



/* --- CGuildBuildingLevelUpInfo::GetManagers_1145f610 @ 1145f610 --- */
// [RE-AUTO c3]
// id: CGuildBuildingLevelUpInfo::GetManagers
// strings:
//   ""CGuildBuildingLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo::GetManagers"" */

undefined4 CGuildBuildingLevelUpInfo__GetManagers_1145f610(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122ddf80 & 1) == 0) {
      DAT_122ddf80 = DAT_122ddf80 | 1;
      FUN_102500e0("CGuildBuildingLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9da60);
    }
    return *DAT_122ddf64;
  }
  return 0;
}



