// ===== class CEquipQuenchRuleInfo  (3 recovered methods) =====

/* --- CEquipQuenchRuleInfo::GetManagers @ 115bf4a0 --- */
// [RE-AUTO c3]
// id: CEquipQuenchRuleInfo::GetManagers
// strings:
//   ""CEquipQuenchRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo::GetManagers"" */

undefined * CEquipQuenchRuleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d308f8;
  if (param_3 == 0) {
    if ((DAT_122df56c & 1) == 0) {
      DAT_122df56c = DAT_122df56c | 1;
      FUN_102500e0("CEquipQuenchRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca44f0);
    }
    if ((undefined *)*DAT_122df550 != (undefined *)0x0) {
      return (undefined *)*DAT_122df550;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df6c8 & 1) == 0) {
      DAT_122df6c8 = DAT_122df6c8 | 1;
      FUN_115c0830();
      FUN_11a8911f(&LAB_11ca41f0);
    }
    puVar1 = &DAT_122df690;
  }
  return puVar1;
}



/* --- CEquipQuenchRuleInfo::GetManagers_115c42c0 @ 115c42c0 --- */
// [RE-AUTO c3]
// id: CEquipQuenchRuleInfo::GetManagers
// strings:
//   ""CEquipQuenchRuleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo::GetManagers"" */

undefined4 CEquipQuenchRuleInfo__GetManagers_115c42c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df56c & 1) == 0) {
      DAT_122df56c = DAT_122df56c | 1;
      FUN_102500e0("CEquipQuenchRuleInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca44f0);
    }
    return *DAT_122df550;
  }
  return 0;
}



/* --- CEquipQuenchRuleInfo::GetManagers_1191c800 @ 1191c800 --- */
// [RE-AUTO c3]
// id: CEquipQuenchRuleInfo::GetManagers
// calls: CEquipQuenchRuleInfo::GetManagers
// strings:
//   ""CEquipQuenchRuleInfo""
//   ""CEquipQuenchRuleInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipQuenchRuleInfo::GetManagers
   calls: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo""
     ""CEquipQuenchRuleInfo::GetManagers"" */

void CEquipQuenchRuleInfo__GetManagers_1191c800(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CEquipQuenchRuleInfo__GetManagers(0,"CEquipQuenchRuleInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d308f8;
      if ((DAT_122df56c & 1) == 0) {
        DAT_122df56c = DAT_122df56c | 1;
        FUN_102500e0("CEquipQuenchRuleInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca44f0);
      }
      puVar4 = (undefined *)*DAT_122df550;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipQuenchRuleInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122df6c8 & 1) == 0) {
          DAT_122df694 = 0;
          DAT_122df6a4 = 0;
          DAT_122df6a8 = 0;
          _DAT_122df6ac = 0;
          uRam122df6b0 = 0;
          DAT_122df6c8 = DAT_122df6c8 | 1;
          _DAT_122df690 = &PTR_FUN_11d3093c;
          _DAT_122df6b4 = _DAT_11de9ae0;
          uRam122df6b8 = _UNK_11de9ae4;
          uRam122df6bc = _UNK_11de9ae8;
          uRam122df6c0 = _UNK_11de9aec;
          DAT_122df6c4 = 1;
          DAT_122df698 = puVar4;
          _DAT_122df69c = puVar4;
          _DAT_122df6a0 = puVar4;
          FUN_11a8911f(&LAB_11cb1a70);
        }
        puVar4 = &DAT_122df690;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_118324c0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



