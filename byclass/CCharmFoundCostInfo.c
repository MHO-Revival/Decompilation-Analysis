// ===== class CCharmFoundCostInfo  (3 recovered methods) =====

/* --- CCharmFoundCostInfo::GetManagers @ 11636160 --- */
// [RE-AUTO c3]
// id: CCharmFoundCostInfo::GetManagers
// strings:
//   ""CCharmFoundCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundCostInfo::GetManagers
   strings:
     ""CCharmFoundCostInfo::GetManagers"" */

undefined * CCharmFoundCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d36398;
  if (param_3 == 0) {
    if ((DAT_122e0430 & 1) == 0) {
      DAT_122e0430 = DAT_122e0430 | 1;
      FUN_102500e0("CCharmFoundCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6560);
    }
    if ((undefined *)*DAT_122e0414 != (undefined *)0x0) {
      return (undefined *)*DAT_122e0414;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e0540 & 1) == 0) {
      DAT_122e0540 = DAT_122e0540 | 1;
      FUN_11637250();
      FUN_11a8911f(&LAB_11ca6320);
    }
    puVar1 = &DAT_122e0508;
  }
  return puVar1;
}



/* --- CCharmFoundCostInfo::GetManagers_116394a0 @ 116394a0 --- */
// [RE-AUTO c3]
// id: CCharmFoundCostInfo::GetManagers
// calls: CCharmFoundCostInfo::GetManagers
// strings:
//   ""CCharmFoundCostInfo""
//   ""CCharmFoundCostInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCharmFoundCostInfo::GetManagers
   calls: CCharmFoundCostInfo::GetManagers
   strings:
     ""CCharmFoundCostInfo""
     ""CCharmFoundCostInfo::GetManagers"" */

int CCharmFoundCostInfo__GetManagers_116394a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined **local_8;
  
  iVar3 = FUN_1166da50();
  FUN_1166c4b0();
  iVar8 = 0;
  piVar4 = (int *)CCharmFoundCostInfo__GetManagers(0,"CCharmFoundCostInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  if (0 < iVar5) {
    do {
      local_8 = &PTR_FUN_11d36398;
      if ((DAT_122e0430 & 1) == 0) {
        DAT_122e0430 = DAT_122e0430 | 1;
        FUN_102500e0("CCharmFoundCostInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca6560);
      }
      puVar6 = (undefined *)*DAT_122e0414;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)FUN_11679e10(&local_8,"CCharmFoundCostInfo",0);
        if (puVar6 == (undefined *)0x0) {
          if ((DAT_122e0540 & 1) == 0) {
            DAT_122e050c = 0;
            DAT_122e051c = 0;
            DAT_122e0520 = 0;
            _DAT_122e0524 = 0;
            uRam122e0528 = 0;
            DAT_122e0540 = DAT_122e0540 | 1;
            DAT_122e0510 = 0;
            _DAT_122e0514 = 0;
            _DAT_122e0518 = 0;
            _DAT_122e0508 = &PTR_FUN_11d363d8;
            _DAT_122e052c = _DAT_11de9ae0;
            uRam122e0530 = _UNK_11de9ae4;
            uRam122e0534 = _UNK_11de9ae8;
            uRam122e0538 = _UNK_11de9aec;
            DAT_122e053c = 1;
            FUN_11a8911f(&LAB_11ca6320);
          }
          puVar6 = &DAT_122e0508;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(puVar6 + 0x18) - *(int *)(puVar6 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar6 + 0x14) + iVar8 * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x18) == iVar3)) {
        iVar2 = *(int *)(iVar1 + 0x14);
        iVar7 = (**(code **)(*param_1 + 0x2c))();
        if (iVar2 == iVar7) {
          local_8 = *(undefined ***)(iVar1 + 0x20);
          iVar2 = *(int *)(iVar1 + 0x1c);
          iVar7 = (**(code **)(*param_1 + 0x18))();
          if ((iVar2 <= iVar7) && (iVar7 <= (int)local_8)) {
            return iVar1;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return 0;
}



/* --- CCharmFoundCostInfo::GetManagers_11639df0 @ 11639df0 --- */
// [RE-AUTO c3]
// id: CCharmFoundCostInfo::GetManagers
// strings:
//   ""CCharmFoundCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCharmFoundCostInfo::GetManagers
   strings:
     ""CCharmFoundCostInfo::GetManagers"" */

undefined4 CCharmFoundCostInfo__GetManagers_11639df0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0430 & 1) == 0) {
      DAT_122e0430 = DAT_122e0430 | 1;
      FUN_102500e0("CCharmFoundCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6560);
    }
    return *DAT_122e0414;
  }
  return 0;
}



