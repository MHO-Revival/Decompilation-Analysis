// ===== class CRandomWeaponRandScoreInfo  (3 recovered methods) =====

/* --- CRandomWeaponRandScoreInfo::GetManagers @ 11870dd0 --- */
// [RE-AUTO c3]
// id: CRandomWeaponRandScoreInfo::GetManagers
// strings:
//   ""CRandomWeaponRandScoreInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponRandScoreInfo::GetManagers
   strings:
     ""CRandomWeaponRandScoreInfo::GetManagers"" */

undefined *
CRandomWeaponRandScoreInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5339c;
  if (param_3 == 0) {
    if ((DAT_12399748 & 1) == 0) {
      DAT_12399748 = DAT_12399748 | 1;
      FUN_102500e0("CRandomWeaponRandScoreInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae4c0);
    }
    if ((undefined *)*DAT_1239972c != (undefined *)0x0) {
      return (undefined *)*DAT_1239972c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12399adc & 1) == 0) {
      DAT_12399adc = DAT_12399adc | 1;
      FUN_11873230();
      FUN_11a8911f(&LAB_11cae3b0);
    }
    puVar1 = &DAT_12399aa4;
  }
  return puVar1;
}



/* --- CRandomWeaponRandScoreInfo::GetManagers_11875000 @ 11875000 --- */
// [RE-AUTO c3]
// id: CRandomWeaponRandScoreInfo::GetManagers
// strings:
//   ""CRandomWeaponRandScoreInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponRandScoreInfo::GetManagers
   strings:
     ""CRandomWeaponRandScoreInfo::GetManagers"" */

undefined4 CRandomWeaponRandScoreInfo__GetManagers_11875000(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12399748 & 1) == 0) {
      DAT_12399748 = DAT_12399748 | 1;
      FUN_102500e0("CRandomWeaponRandScoreInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae4c0);
    }
    return *DAT_1239972c;
  }
  return 0;
}



/* --- CRandomWeaponRandScoreInfo::GetManagers_119b7b50 @ 119b7b50 --- */
// [RE-AUTO c3]
// id: CRandomWeaponRandScoreInfo::GetManagers
// calls: CRandomWeaponRandScoreInfo::GetManagers
// strings:
//   ""CRandomWeaponRandScoreInfo""
//   ""CRandomWeaponRandScoreInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponRandScoreInfo::GetManagers
   calls: CRandomWeaponRandScoreInfo::GetManagers
   strings:
     ""CRandomWeaponRandScoreInfo""
     ""CRandomWeaponRandScoreInfo::GetManagers"" */

void CRandomWeaponRandScoreInfo__GetManagers_119b7b50(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CRandomWeaponRandScoreInfo__GetManagers(0,"CRandomWeaponRandScoreInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d5339c;
      if ((DAT_12399748 & 1) == 0) {
        DAT_12399748 = DAT_12399748 | 1;
        FUN_102500e0("CRandomWeaponRandScoreInfo::GetManagers");
        FUN_11a8911f(&LAB_11cae4c0);
      }
      puVar4 = (undefined *)*DAT_1239972c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CRandomWeaponRandScoreInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12399adc & 1) == 0) {
          DAT_12399aa8 = 0;
          DAT_12399ab8 = 0;
          DAT_12399abc = 0;
          _DAT_12399ac0 = 0;
          uRam12399ac4 = 0;
          DAT_12399adc = DAT_12399adc | 1;
          _DAT_12399aa4 = &PTR_FUN_11d53418;
          _DAT_12399ac8 = _DAT_11de9ae0;
          uRam12399acc = _UNK_11de9ae4;
          uRam12399ad0 = _UNK_11de9ae8;
          uRam12399ad4 = _UNK_11de9aec;
          DAT_12399ad8 = 1;
          DAT_12399aac = puVar4;
          _DAT_12399ab0 = puVar4;
          _DAT_12399ab4 = puVar4;
          FUN_11a8911f(&LAB_11cb4500);
        }
        puVar4 = &DAT_12399aa4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11878270(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



