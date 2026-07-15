// ===== class CLegendRandomAttrInfo  (3 recovered methods) =====

/* --- CLegendRandomAttrInfo::GetManagers @ 119cb830 --- */
// [RE-AUTO c3]
// id: CLegendRandomAttrInfo::GetManagers
// strings:
//   ""CLegendRandomAttrInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLegendRandomAttrInfo::GetManagers
   strings:
     ""CLegendRandomAttrInfo::GetManagers"" */

undefined * CLegendRandomAttrInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d69810;
  if (param_3 == 0) {
    if ((DAT_123a337c & 1) == 0) {
      DAT_123a337c = DAT_123a337c | 1;
      FUN_102500e0("CLegendRandomAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4c20);
    }
    if ((undefined *)*DAT_123a3360 != (undefined *)0x0) {
      return (undefined *)*DAT_123a3360;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a3444 & 1) == 0) {
      DAT_123a3444 = DAT_123a3444 | 1;
      FUN_119cbcf0();
      FUN_11a8911f(&LAB_11cb4b60);
    }
    puVar1 = &DAT_123a340c;
  }
  return puVar1;
}



/* --- CLegendRandomAttrInfo::GetManagers_119ccbe0 @ 119ccbe0 --- */
// [RE-AUTO c3]
// id: CLegendRandomAttrInfo::GetManagers
// strings:
//   ""CLegendRandomAttrInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLegendRandomAttrInfo::GetManagers
   strings:
     ""CLegendRandomAttrInfo::GetManagers"" */

undefined4 CLegendRandomAttrInfo__GetManagers_119ccbe0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a337c & 1) == 0) {
      DAT_123a337c = DAT_123a337c | 1;
      FUN_102500e0("CLegendRandomAttrInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4c20);
    }
    return *DAT_123a3360;
  }
  return 0;
}



/* --- CLegendRandomAttrInfo::GetManagers_119cced0 @ 119cced0 --- */
// [RE-AUTO c3]
// id: CLegendRandomAttrInfo::GetManagers
// calls: CLegendRandomAttrInfo::GetManagers
// strings:
//   ""CLegendRandomAttrInfo""
//   ""CLegendRandomAttrInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLegendRandomAttrInfo::GetManagers
   calls: CLegendRandomAttrInfo::GetManagers
   strings:
     ""CLegendRandomAttrInfo""
     ""CLegendRandomAttrInfo::GetManagers"" */

void CLegendRandomAttrInfo__GetManagers_119cced0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CLegendRandomAttrInfo__GetManagers(0,"CLegendRandomAttrInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d69810;
      if ((DAT_123a337c & 1) == 0) {
        DAT_123a337c = DAT_123a337c | 1;
        FUN_102500e0("CLegendRandomAttrInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4c20);
      }
      puVar4 = (undefined *)*DAT_123a3360;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CLegendRandomAttrInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123a3444 & 1) == 0) {
          DAT_123a3410 = 0;
          DAT_123a3420 = 0;
          DAT_123a3424 = 0;
          _DAT_123a3428 = 0;
          uRam123a342c = 0;
          DAT_123a3444 = DAT_123a3444 | 1;
          _DAT_123a340c = &PTR_FUN_11d69854;
          _DAT_123a3430 = _DAT_11de9ae0;
          uRam123a3434 = _UNK_11de9ae4;
          uRam123a3438 = _UNK_11de9ae8;
          uRam123a343c = _UNK_11de9aec;
          DAT_123a3440 = 1;
          DAT_123a3414 = puVar4;
          _DAT_123a3418 = puVar4;
          _DAT_123a341c = puVar4;
          FUN_11a8911f(&LAB_11cb4b60);
        }
        puVar4 = &DAT_123a340c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a85460(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



