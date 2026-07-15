// ===== class CRandomWeaponRandBaseInfo  (2 recovered methods) =====

/* --- CRandomWeaponRandBaseInfo::GetManagers @ 11675c20 --- */
// [RE-AUTO c3]
// id: CRandomWeaponRandBaseInfo::GetManagers
// strings:
//   ""CRandomWeaponRandBaseInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponRandBaseInfo::GetManagers
   strings:
     ""CRandomWeaponRandBaseInfo::GetManagers"" */

void CRandomWeaponRandBaseInfo__GetManagers(void)

{
  if ((DAT_12387c20 & 1) == 0) {
    DAT_12387c20 = DAT_12387c20 | 1;
    FUN_102500e0("CRandomWeaponRandBaseInfo::GetManagers");
    FUN_11a8911f(FUN_11ca6da0);
  }
  FUN_10250140();
  return;
}



/* --- CRandomWeaponRandBaseInfo::GetManagers_119b7a20 @ 119b7a20 --- */
// [RE-AUTO c3]
// id: CRandomWeaponRandBaseInfo::GetManagers
// strings:
//   ""CRandomWeaponRandBaseInfo""
//   ""CRandomWeaponRandBaseInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponRandBaseInfo::GetManagers
   strings:
     ""CRandomWeaponRandBaseInfo""
     ""CRandomWeaponRandBaseInfo::GetManagers"" */

void CRandomWeaponRandBaseInfo__GetManagers_119b7a20(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_11673b70(0,"CRandomWeaponRandBaseInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d387e0;
      if ((DAT_12387c20 & 1) == 0) {
        DAT_12387c20 = DAT_12387c20 | 1;
        FUN_102500e0("CRandomWeaponRandBaseInfo::GetManagers");
        FUN_11a8911f(FUN_11ca6da0);
      }
      puVar4 = (undefined *)*DAT_12387c04;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CRandomWeaponRandBaseInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12387c64 & 1) == 0) {
          DAT_12387c30 = 0;
          DAT_12387c40 = 0;
          DAT_12387c44 = 0;
          _DAT_12387c48 = 0;
          uRam12387c4c = 0;
          DAT_12387c64 = DAT_12387c64 | 1;
          _DAT_12387c2c = &PTR_FUN_11d3882c;
          _DAT_12387c50 = _DAT_11de9ae0;
          uRam12387c54 = _UNK_11de9ae4;
          uRam12387c58 = _UNK_11de9ae8;
          uRam12387c5c = _UNK_11de9aec;
          DAT_12387c60 = 1;
          DAT_12387c34 = puVar4;
          _DAT_12387c38 = puVar4;
          _DAT_12387c3c = puVar4;
          FUN_11a8911f(&LAB_11cb44a0);
        }
        puVar4 = &DAT_12387c2c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_118781b0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



