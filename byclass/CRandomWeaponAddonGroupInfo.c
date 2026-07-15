// ===== class CRandomWeaponAddonGroupInfo  (3 recovered methods) =====

/* --- CRandomWeaponAddonGroupInfo::GetManagers @ 11870c90 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonGroupInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAddonGroupInfo::GetManagers
   strings:
     ""CRandomWeaponAddonGroupInfo::GetManagers"" */

undefined *
CRandomWeaponAddonGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5352c;
  if (param_3 == 0) {
    if ((DAT_12399788 & 1) == 0) {
      DAT_12399788 = DAT_12399788 | 1;
      FUN_102500e0("CRandomWeaponAddonGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae460);
    }
    if ((undefined *)*DAT_1239976c != (undefined *)0x0) {
      return (undefined *)*DAT_1239976c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12399b54 & 1) == 0) {
      DAT_12399b54 = DAT_12399b54 | 1;
      FUN_11873170();
      FUN_11a8911f(&LAB_11cae2f0);
    }
    puVar1 = &DAT_12399b1c;
  }
  return puVar1;
}



/* --- CRandomWeaponAddonGroupInfo::GetManagers_11874f60 @ 11874f60 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonGroupInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAddonGroupInfo::GetManagers
   strings:
     ""CRandomWeaponAddonGroupInfo::GetManagers"" */

undefined4 CRandomWeaponAddonGroupInfo__GetManagers_11874f60(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12399788 & 1) == 0) {
      DAT_12399788 = DAT_12399788 | 1;
      FUN_102500e0("CRandomWeaponAddonGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae460);
    }
    return *DAT_1239976c;
  }
  return 0;
}



/* --- CRandomWeaponAddonGroupInfo::GetManagers_119b7db0 @ 119b7db0 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonGroupInfo::GetManagers
// calls: CRandomWeaponAddonGroupInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonGroupInfo""
//   ""CRandomWeaponAddonGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponAddonGroupInfo::GetManagers
   calls: CRandomWeaponAddonGroupInfo::GetManagers
   strings:
     ""CRandomWeaponAddonGroupInfo""
     ""CRandomWeaponAddonGroupInfo::GetManagers"" */

void CRandomWeaponAddonGroupInfo__GetManagers_119b7db0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CRandomWeaponAddonGroupInfo__GetManagers(0,"CRandomWeaponAddonGroupInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d5352c;
      if ((DAT_12399788 & 1) == 0) {
        DAT_12399788 = DAT_12399788 | 1;
        FUN_102500e0("CRandomWeaponAddonGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11cae460);
      }
      puVar4 = (undefined *)*DAT_1239976c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CRandomWeaponAddonGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12399b54 & 1) == 0) {
          DAT_12399b20 = 0;
          DAT_12399b30 = 0;
          DAT_12399b34 = 0;
          _DAT_12399b38 = 0;
          uRam12399b3c = 0;
          DAT_12399b54 = DAT_12399b54 | 1;
          _DAT_12399b1c = &PTR_FUN_11d535ac;
          _DAT_12399b40 = _DAT_11de9ae0;
          uRam12399b44 = _UNK_11de9ae4;
          uRam12399b48 = _UNK_11de9ae8;
          uRam12399b4c = _UNK_11de9aec;
          DAT_12399b50 = 1;
          DAT_12399b24 = puVar4;
          _DAT_12399b28 = puVar4;
          _DAT_12399b2c = puVar4;
          FUN_11a8911f(&LAB_11cb43e0);
        }
        puVar4 = &DAT_12399b1c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11878190(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



