// ===== class CRandomWeaponAbilityInfo  (3 recovered methods) =====

/* --- CRandomWeaponAbilityInfo::GetManagers @ 11870bf0 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAbilityInfo::GetManagers
// strings:
//   ""CRandomWeaponAbilityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAbilityInfo::GetManagers
   strings:
     ""CRandomWeaponAbilityInfo::GetManagers"" */

undefined * CRandomWeaponAbilityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d53464;
  if (param_3 == 0) {
    if ((DAT_12399768 & 1) == 0) {
      DAT_12399768 = DAT_12399768 | 1;
      FUN_102500e0("CRandomWeaponAbilityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae430);
    }
    if ((undefined *)*DAT_1239974c != (undefined *)0x0) {
      return (undefined *)*DAT_1239974c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12399b18 & 1) == 0) {
      DAT_12399b18 = DAT_12399b18 | 1;
      FUN_11873110();
      FUN_11a8911f(&LAB_11cae290);
    }
    puVar1 = &DAT_12399ae0;
  }
  return puVar1;
}



/* --- CRandomWeaponAbilityInfo::GetManagers_11874f10 @ 11874f10 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAbilityInfo::GetManagers
// strings:
//   ""CRandomWeaponAbilityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAbilityInfo::GetManagers
   strings:
     ""CRandomWeaponAbilityInfo::GetManagers"" */

undefined4 CRandomWeaponAbilityInfo__GetManagers_11874f10(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12399768 & 1) == 0) {
      DAT_12399768 = DAT_12399768 | 1;
      FUN_102500e0("CRandomWeaponAbilityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae430);
    }
    return *DAT_1239974c;
  }
  return 0;
}



/* --- CRandomWeaponAbilityInfo::GetManagers_119b7c80 @ 119b7c80 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAbilityInfo::GetManagers
// calls: CRandomWeaponAbilityInfo::GetManagers
// strings:
//   ""CRandomWeaponAbilityInfo""
//   ""CRandomWeaponAbilityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponAbilityInfo::GetManagers
   calls: CRandomWeaponAbilityInfo::GetManagers
   strings:
     ""CRandomWeaponAbilityInfo""
     ""CRandomWeaponAbilityInfo::GetManagers"" */

void CRandomWeaponAbilityInfo__GetManagers_119b7c80(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CRandomWeaponAbilityInfo__GetManagers(0,"CRandomWeaponAbilityInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d53464;
      if ((DAT_12399768 & 1) == 0) {
        DAT_12399768 = DAT_12399768 | 1;
        FUN_102500e0("CRandomWeaponAbilityInfo::GetManagers");
        FUN_11a8911f(&LAB_11cae430);
      }
      puVar4 = (undefined *)*DAT_1239974c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CRandomWeaponAbilityInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12399b18 & 1) == 0) {
          DAT_12399ae4 = 0;
          DAT_12399af4 = 0;
          DAT_12399af8 = 0;
          _DAT_12399afc = 0;
          uRam12399b00 = 0;
          DAT_12399b18 = DAT_12399b18 | 1;
          _DAT_12399ae0 = &PTR_FUN_11d534e0;
          _DAT_12399b04 = _DAT_11de9ae0;
          uRam12399b08 = _UNK_11de9ae4;
          uRam12399b0c = _UNK_11de9ae8;
          uRam12399b10 = _UNK_11de9aec;
          DAT_12399b14 = 1;
          DAT_12399ae8 = puVar4;
          _DAT_12399aec = puVar4;
          _DAT_12399af0 = puVar4;
          FUN_11a8911f(&LAB_11cb4380);
        }
        puVar4 = &DAT_12399ae0;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11878180(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



