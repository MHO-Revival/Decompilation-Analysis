// ===== class CGuildQuestLevelInfo  (4 recovered methods) =====

/* --- CGuildQuestLevelInfo::GetManagers @ 1190c9a0 --- */
// [RE-AUTO c3]
// id: CGuildQuestLevelInfo::GetManagers
// strings:
//   ""CGuildQuestLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildQuestLevelInfo::GetManagers
   strings:
     ""CGuildQuestLevelInfo::GetManagers"" */

undefined * CGuildQuestLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5e1fc;
  if (param_3 == 0) {
    if ((DAT_1239eb60 & 1) == 0) {
      DAT_1239eb60 = DAT_1239eb60 | 1;
      FUN_102500e0("CGuildQuestLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb14d0);
    }
    if ((undefined *)*DAT_1239eb44 != (undefined *)0x0) {
      return (undefined *)*DAT_1239eb44;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239ebfc & 1) == 0) {
      DAT_1239ebfc = DAT_1239ebfc | 1;
      FUN_1190cd50();
      FUN_11a8911f(&LAB_11cb1410);
    }
    puVar1 = &DAT_1239ebc4;
  }
  return puVar1;
}



/* --- CGuildQuestLevelInfo::GetManagers_1190db90 @ 1190db90 --- */
// [RE-AUTO c3]
// id: CGuildQuestLevelInfo::GetManagers
// strings:
//   ""CGuildQuestLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildQuestLevelInfo::GetManagers
   strings:
     ""CGuildQuestLevelInfo::GetManagers"" */

undefined4 CGuildQuestLevelInfo__GetManagers_1190db90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239eb60 & 1) == 0) {
      DAT_1239eb60 = DAT_1239eb60 | 1;
      FUN_102500e0("CGuildQuestLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb14d0);
    }
    return *DAT_1239eb44;
  }
  return 0;
}



/* --- CGuildQuestLevelInfo::GetManagers_1190dda0 @ 1190dda0 --- */
// [RE-AUTO c3]
// id: CGuildQuestLevelInfo::GetManagers
// calls: CGuildQuestLevelInfo::GetManagers
// strings:
//   ""CGuildQuestLevelInfo""
//   ""CGuildQuestLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildQuestLevelInfo::GetManagers
   calls: CGuildQuestLevelInfo::GetManagers
   strings:
     ""CGuildQuestLevelInfo""
     ""CGuildQuestLevelInfo::GetManagers"" */

void CGuildQuestLevelInfo__GetManagers_1190dda0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildQuestLevelInfo__GetManagers(0,"CGuildQuestLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5e1fc;
      if ((DAT_1239eb60 & 1) == 0) {
        DAT_1239eb60 = DAT_1239eb60 | 1;
        FUN_102500e0("CGuildQuestLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb14d0);
      }
      if (((*DAT_1239eb44 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildQuestLevelInfo",0), iVar3 == 0)) &&
         ((DAT_1239ebfc & 1) == 0)) {
        DAT_1239ebc8 = 0;
        DAT_1239ebd8 = 0;
        DAT_1239ebdc = 0;
        _DAT_1239ebe0 = 0;
        uRam1239ebe4 = 0;
        DAT_1239ebfc = DAT_1239ebfc | 1;
        _DAT_1239ebc4 = &PTR_FUN_11d5e240;
        _DAT_1239ebe8 = _DAT_11de9ae0;
        uRam1239ebec = _UNK_11de9ae4;
        uRam1239ebf0 = _UNK_11de9ae8;
        uRam1239ebf4 = _UNK_11de9aec;
        DAT_1239ebf8 = 1;
        DAT_1239ebcc = iVar3;
        _DAT_1239ebd0 = iVar3;
        _DAT_1239ebd4 = iVar3;
        FUN_11a8911f(&LAB_11cb1410);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a05270();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildQuestLevelInfo::GetManagers_1190e070 @ 1190e070 --- */
// [RE-AUTO c3]
// id: CGuildQuestLevelInfo::GetManagers
// calls: CGuildQuestLevelInfo::GetManagers
// strings:
//   ""CGuildQuestLevelInfo""
//   ""CGuildQuestLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildQuestLevelInfo::GetManagers
   calls: CGuildQuestLevelInfo::GetManagers
   strings:
     ""CGuildQuestLevelInfo""
     ""CGuildQuestLevelInfo::GetManagers"" */

void CGuildQuestLevelInfo__GetManagers_1190e070(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildQuestLevelInfo__GetManagers(0,"CGuildQuestLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5e1fc;
      if ((DAT_1239eb60 & 1) == 0) {
        DAT_1239eb60 = DAT_1239eb60 | 1;
        FUN_102500e0("CGuildQuestLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb14d0);
      }
      if (((*DAT_1239eb44 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildQuestLevelInfo",0), iVar3 == 0)) &&
         ((DAT_1239ebfc & 1) == 0)) {
        DAT_1239ebc8 = 0;
        DAT_1239ebd8 = 0;
        DAT_1239ebdc = 0;
        _DAT_1239ebe0 = 0;
        uRam1239ebe4 = 0;
        DAT_1239ebfc = DAT_1239ebfc | 1;
        _DAT_1239ebc4 = &PTR_FUN_11d5e240;
        _DAT_1239ebe8 = _DAT_11de9ae0;
        uRam1239ebec = _UNK_11de9ae4;
        uRam1239ebf0 = _UNK_11de9ae8;
        uRam1239ebf4 = _UNK_11de9aec;
        DAT_1239ebf8 = 1;
        DAT_1239ebcc = iVar3;
        _DAT_1239ebd0 = iVar3;
        _DAT_1239ebd4 = iVar3;
        FUN_11a8911f(&LAB_11cb1410);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a05260();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



