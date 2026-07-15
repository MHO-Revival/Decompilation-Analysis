// ===== class CEquipRankUpInfo  (3 recovered methods) =====

/* --- CEquipRankUpInfo::GetManagers @ 115bf540 --- */
// [RE-AUTO c3]
// id: CEquipRankUpInfo::GetManagers
// strings:
//   ""CEquipRankUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRankUpInfo::GetManagers
   strings:
     ""CEquipRankUpInfo::GetManagers"" */

undefined * CEquipRankUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30c58;
  if (param_3 == 0) {
    if ((DAT_122df62c & 1) == 0) {
      DAT_122df62c = DAT_122df62c | 1;
      FUN_102500e0("CEquipRankUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4520);
    }
    if ((undefined *)*DAT_122df610 != (undefined *)0x0) {
      return (undefined *)*DAT_122df610;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df830 & 1) == 0) {
      DAT_122df830 = DAT_122df830 | 1;
      FUN_115c0890();
      FUN_11a8911f(&LAB_11ca42b0);
    }
    puVar1 = &DAT_122df7f8;
  }
  return puVar1;
}



/* --- CEquipRankUpInfo::GetManagers_115c4310 @ 115c4310 --- */
// [RE-AUTO c3]
// id: CEquipRankUpInfo::GetManagers
// strings:
//   ""CEquipRankUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRankUpInfo::GetManagers
   strings:
     ""CEquipRankUpInfo::GetManagers"" */

undefined4 CEquipRankUpInfo__GetManagers_115c4310(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df62c & 1) == 0) {
      DAT_122df62c = DAT_122df62c | 1;
      FUN_102500e0("CEquipRankUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4520);
    }
    return *DAT_122df610;
  }
  return 0;
}



/* --- CEquipRankUpInfo::GetManagers_11916d10 @ 11916d10 --- */
// [RE-AUTO c3]
// id: CEquipRankUpInfo::GetManagers
// calls: CEquipRankUpInfo::GetManagers, CItemBaseInfo::GetManagers_117b5360
// strings:
//   ""CEquipRankUpInfo""
//   ""CEquipRankUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRankUpInfo::GetManagers
   calls: CEquipRankUpInfo::GetManagers, CItemBaseInfo::GetManagers_117b5360
   strings:
     ""CEquipRankUpInfo""
     ""CEquipRankUpInfo::GetManagers"" */

void CEquipRankUpInfo__GetManagers_11916d10(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CEquipRankUpInfo__GetManagers(0,"CEquipRankUpInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d30c58;
      if ((DAT_122df62c & 1) == 0) {
        DAT_122df62c = DAT_122df62c | 1;
        FUN_102500e0("CEquipRankUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca4520);
      }
      puVar4 = (undefined *)*DAT_122df610;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipRankUpInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122df830 & 1) == 0) {
          DAT_122df7fc = 0;
          DAT_122df80c = 0;
          DAT_122df810 = 0;
          _DAT_122df814 = 0;
          uRam122df818 = 0;
          DAT_122df830 = DAT_122df830 | 1;
          _DAT_122df7f8 = &PTR_FUN_11d30c94;
          _DAT_122df81c = _DAT_11de9ae0;
          uRam122df820 = _UNK_11de9ae4;
          uRam122df824 = _UNK_11de9ae8;
          uRam122df828 = _UNK_11de9aec;
          DAT_122df82c = 1;
          DAT_122df800 = puVar4;
          _DAT_122df804 = puVar4;
          _DAT_122df808 = puVar4;
          FUN_11a8911f(&LAB_11cb1920);
        }
        puVar4 = &DAT_122df7f8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_117b5360(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



