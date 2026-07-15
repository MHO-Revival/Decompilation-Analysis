// ===== class CFluteFxInfo  (3 recovered methods) =====

/* --- CFluteFxInfo::GetManagers @ 115e2370 --- */
// [RE-AUTO c3]
// id: CFluteFxInfo::GetManagers
// strings:
//   ""CFluteFxInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFluteFxInfo::GetManagers
   strings:
     ""CFluteFxInfo::GetManagers"" */

undefined * CFluteFxInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d31d00;
  if (param_3 == 0) {
    if ((DAT_122dfb9c & 1) == 0) {
      DAT_122dfb9c = DAT_122dfb9c | 1;
      FUN_102500e0("CFluteFxInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4be0);
    }
    if ((undefined *)*DAT_122dfb80 != (undefined *)0x0) {
      return (undefined *)*DAT_122dfb80;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dfbe0 & 1) == 0) {
      DAT_122dfbe0 = DAT_122dfbe0 | 1;
      FUN_115e25e0();
      FUN_11a8911f(&LAB_11ca4b20);
    }
    puVar1 = &DAT_122dfba8;
  }
  return puVar1;
}



/* --- CFluteFxInfo::GetManagers_115e2d80 @ 115e2d80 --- */
// [RE-AUTO c3]
// id: CFluteFxInfo::GetManagers
// strings:
//   ""CFluteFxInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFluteFxInfo::GetManagers
   strings:
     ""CFluteFxInfo::GetManagers"" */

undefined4 CFluteFxInfo__GetManagers_115e2d80(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dfb9c & 1) == 0) {
      DAT_122dfb9c = DAT_122dfb9c | 1;
      FUN_102500e0("CFluteFxInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4be0);
    }
    return *DAT_122dfb80;
  }
  return 0;
}



/* --- CFluteFxInfo::GetManagers_118bfd30 @ 118bfd30 --- */
// [RE-AUTO c3]
// id: CFluteFxInfo::GetManagers
// calls: CFluteFxInfo::GetManagers
// strings:
//   ""CFluteFxInfo""
//   ""CFluteFxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteFxInfo::GetManagers
   calls: CFluteFxInfo::GetManagers
   strings:
     ""CFluteFxInfo""
     ""CFluteFxInfo::GetManagers"" */

void CFluteFxInfo__GetManagers_118bfd30(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CFluteFxInfo__GetManagers(0,"CFluteFxInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d31d00;
      if ((DAT_122dfb9c & 1) == 0) {
        DAT_122dfb9c = DAT_122dfb9c | 1;
        FUN_102500e0("CFluteFxInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca4be0);
      }
      puVar4 = (undefined *)*DAT_122dfb80;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CFluteFxInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_122dfbe0 & 1) == 0) {
          DAT_122dfbac = 0;
          DAT_122dfbbc = 0;
          DAT_122dfbc0 = 0;
          _DAT_122dfbc4 = 0;
          uRam122dfbc8 = 0;
          DAT_122dfbe0 = DAT_122dfbe0 | 1;
          _DAT_122dfba8 = &PTR_FUN_11d31d34;
          _DAT_122dfbcc = _DAT_11de9ae0;
          uRam122dfbd0 = _UNK_11de9ae4;
          uRam122dfbd4 = _UNK_11de9ae8;
          uRam122dfbd8 = _UNK_11de9aec;
          DAT_122dfbdc = 1;
          DAT_122dfbb0 = puVar4;
          _DAT_122dfbb4 = puVar4;
          _DAT_122dfbb8 = puVar4;
          FUN_11a8911f(&LAB_11cafac0);
        }
        puVar4 = &DAT_122dfba8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_119dc810(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



