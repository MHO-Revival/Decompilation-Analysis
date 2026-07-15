// ===== class CSoulBeastLevelUpInfo  (3 recovered methods) =====

/* --- CSoulBeastLevelUpInfo::GetManagers @ 11533150 --- */
// [RE-AUTO c3]
// id: CSoulBeastLevelUpInfo::GetManagers
// strings:
//   ""CSoulBeastLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo::GetManagers"" */

undefined * CSoulBeastLevelUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c758;
  if (param_3 == 0) {
    if ((DAT_122deb6c & 1) == 0) {
      DAT_122deb6c = DAT_122deb6c | 1;
      FUN_102500e0("CSoulBeastLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca12a0);
    }
    if ((undefined *)*DAT_122deb50 != (undefined *)0x0) {
      return (undefined *)*DAT_122deb50;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122debf4 & 1) == 0) {
      DAT_122debf4 = DAT_122debf4 | 1;
      FUN_115335f0();
      FUN_11a8911f(&LAB_11ca11b0);
    }
    puVar1 = &DAT_122debbc;
  }
  return puVar1;
}



/* --- CSoulBeastLevelUpInfo::GetManagers_11534020 @ 11534020 --- */
// [RE-AUTO c3]
// id: CSoulBeastLevelUpInfo::GetManagers
// strings:
//   ""CSoulBeastLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo::GetManagers"" */

undefined4 CSoulBeastLevelUpInfo__GetManagers_11534020(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deb6c & 1) == 0) {
      DAT_122deb6c = DAT_122deb6c | 1;
      FUN_102500e0("CSoulBeastLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca12a0);
    }
    return *DAT_122deb50;
  }
  return 0;
}



/* --- CSoulBeastLevelUpInfo::GetManagers_117b8df0 @ 117b8df0 --- */
// [RE-AUTO c3]
// id: CSoulBeastLevelUpInfo::GetManagers
// calls: CSoulBeastLevelUpInfo::GetManagers
// strings:
//   ""CSoulBeastLevelUpInfo""
//   ""CSoulBeastLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulBeastLevelUpInfo::GetManagers
   calls: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo""
     ""CSoulBeastLevelUpInfo::GetManagers"" */

int CSoulBeastLevelUpInfo__GetManagers_117b8df0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)CSoulBeastLevelUpInfo__GetManagers(0,"CSoulBeastLevelUpInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2c758;
      if ((DAT_122deb6c & 1) == 0) {
        DAT_122deb6c = DAT_122deb6c | 1;
        FUN_102500e0("CSoulBeastLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca12a0);
      }
      puVar3 = (undefined *)*DAT_122deb50;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CSoulBeastLevelUpInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_122debf4 & 1) == 0) {
          DAT_122debc0 = 0;
          DAT_122debd0 = 0;
          DAT_122debd4 = 0;
          _DAT_122debd8 = 0;
          uRam122debdc = 0;
          DAT_122debf4 = DAT_122debf4 | 1;
          _DAT_122debbc = &PTR_FUN_11d2c79c;
          _DAT_122debe0 = _DAT_11de9ae0;
          uRam122debe4 = _UNK_11de9ae4;
          uRam122debe8 = _UNK_11de9ae8;
          uRam122debec = _UNK_11de9aec;
          DAT_122debf0 = 1;
          DAT_122debc4 = puVar3;
          _DAT_122debc8 = puVar3;
          _DAT_122debcc = puVar3;
          FUN_11a8911f(&LAB_11caa5b0);
        }
        puVar3 = &DAT_122debbc;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      if ((*(int *)(iVar4 + 0x14) == param_1) && (DAT_12392738 < *(int *)(iVar4 + 0x18))) {
        DAT_12392738 = *(int *)(iVar4 + 0x18);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return DAT_12392738;
}



