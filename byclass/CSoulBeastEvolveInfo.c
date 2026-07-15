// ===== class CSoulBeastEvolveInfo  (3 recovered methods) =====

/* --- CSoulBeastEvolveInfo::GetManagers @ 115330b0 --- */
// [RE-AUTO c3]
// id: CSoulBeastEvolveInfo::GetManagers
// strings:
//   ""CSoulBeastEvolveInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSoulBeastEvolveInfo::GetManagers
   strings:
     ""CSoulBeastEvolveInfo::GetManagers"" */

undefined * CSoulBeastEvolveInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c6c8;
  if (param_3 == 0) {
    if ((DAT_122deb4c & 1) == 0) {
      DAT_122deb4c = DAT_122deb4c | 1;
      FUN_102500e0("CSoulBeastEvolveInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1270);
    }
    if ((undefined *)*DAT_122deb30 != (undefined *)0x0) {
      return (undefined *)*DAT_122deb30;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122debb8 & 1) == 0) {
      DAT_122debb8 = DAT_122debb8 | 1;
      FUN_11533590();
      FUN_11a8911f(&LAB_11ca1150);
    }
    puVar1 = &DAT_122deb80;
  }
  return puVar1;
}



/* --- CSoulBeastEvolveInfo::GetManagers_11533fd0 @ 11533fd0 --- */
// [RE-AUTO c3]
// id: CSoulBeastEvolveInfo::GetManagers
// strings:
//   ""CSoulBeastEvolveInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSoulBeastEvolveInfo::GetManagers
   strings:
     ""CSoulBeastEvolveInfo::GetManagers"" */

undefined4 CSoulBeastEvolveInfo__GetManagers_11533fd0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deb4c & 1) == 0) {
      DAT_122deb4c = DAT_122deb4c | 1;
      FUN_102500e0("CSoulBeastEvolveInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1270);
    }
    return *DAT_122deb30;
  }
  return 0;
}



/* --- CSoulBeastEvolveInfo::GetManagers_117b86a0 @ 117b86a0 --- */
// [RE-AUTO c3]
// id: CSoulBeastEvolveInfo::GetManagers
// calls: CSoulBeastEvolveInfo::GetManagers
// strings:
//   ""CSoulBeastEvolveInfo""
//   ""CSoulBeastEvolveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulBeastEvolveInfo::GetManagers
   calls: CSoulBeastEvolveInfo::GetManagers
   strings:
     ""CSoulBeastEvolveInfo""
     ""CSoulBeastEvolveInfo::GetManagers"" */

int CSoulBeastEvolveInfo__GetManagers_117b86a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)CSoulBeastEvolveInfo__GetManagers(0,"CSoulBeastEvolveInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2c6c8;
      if ((DAT_122deb4c & 1) == 0) {
        DAT_122deb4c = DAT_122deb4c | 1;
        FUN_102500e0("CSoulBeastEvolveInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca1270);
      }
      puVar3 = (undefined *)*DAT_122deb30;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CSoulBeastEvolveInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_122debb8 & 1) == 0) {
          DAT_122deb84 = 0;
          DAT_122deb94 = 0;
          DAT_122deb98 = 0;
          _DAT_122deb9c = 0;
          uRam122deba0 = 0;
          DAT_122debb8 = DAT_122debb8 | 1;
          _DAT_122deb80 = &PTR_FUN_11d2c70c;
          _DAT_122deba4 = _DAT_11de9ae0;
          uRam122deba8 = _UNK_11de9ae4;
          uRam122debac = _UNK_11de9ae8;
          uRam122debb0 = _UNK_11de9aec;
          DAT_122debb4 = 1;
          DAT_122deb88 = puVar3;
          _DAT_122deb8c = puVar3;
          _DAT_122deb90 = puVar3;
          FUN_11a8911f(&LAB_11caa550);
        }
        puVar3 = &DAT_122deb80;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if ((*(int *)(iVar4 + 0x14) == param_1) && (DAT_123926f4 < *(int *)(iVar4 + 0x18))) {
        DAT_123926f4 = *(int *)(iVar4 + 0x18);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return DAT_123926f4;
}



