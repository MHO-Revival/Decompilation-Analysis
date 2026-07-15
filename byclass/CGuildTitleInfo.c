// ===== class CGuildTitleInfo  (4 recovered methods) =====

/* --- CGuildTitleInfo::GetManagers @ 114f5da0 --- */
// [RE-AUTO c3]
// id: CGuildTitleInfo::GetManagers
// strings:
//   ""CGuildTitleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo::GetManagers"" */

undefined * CGuildTitleInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2b56c;
  if (param_3 == 0) {
    if ((DAT_122de720 & 1) == 0) {
      DAT_122de720 = DAT_122de720 | 1;
      FUN_102500e0("CGuildTitleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9fcf0);
    }
    if ((undefined *)*DAT_122de704 != (undefined *)0x0) {
      return (undefined *)*DAT_122de704;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de764 & 1) == 0) {
      DAT_122de764 = DAT_122de764 | 1;
      FUN_114f6270();
      FUN_11a8911f(&LAB_11c9fc90);
    }
    puVar1 = &DAT_122de72c;
  }
  return puVar1;
}



/* --- CGuildTitleInfo::GetManagers_114f75b0 @ 114f75b0 --- */
// [RE-AUTO c3]
// id: CGuildTitleInfo::GetManagers
// strings:
//   ""CGuildTitleInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo::GetManagers"" */

undefined4 CGuildTitleInfo__GetManagers_114f75b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de720 & 1) == 0) {
      DAT_122de720 = DAT_122de720 | 1;
      FUN_102500e0("CGuildTitleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9fcf0);
    }
    return *DAT_122de704;
  }
  return 0;
}



/* --- CGuildTitleInfo::GetManagers_1190a5b0 @ 1190a5b0 --- */
// [RE-AUTO c3]
// id: CGuildTitleInfo::GetManagers
// calls: CGuildTitleInfo::GetManagers
// strings:
//   ""CGuildTitleInfo""
//   ""CGuildTitleInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTitleInfo::GetManagers
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo""
     ""CGuildTitleInfo::GetManagers"" */

void CGuildTitleInfo__GetManagers_1190a5b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTitleInfo__GetManagers(0,"CGuildTitleInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2b56c;
      if ((DAT_122de720 & 1) == 0) {
        DAT_122de720 = DAT_122de720 | 1;
        FUN_102500e0("CGuildTitleInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9fcf0);
      }
      if (((*DAT_122de704 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGuildTitleInfo",0), iVar3 == 0))
         && ((DAT_122de764 & 1) == 0)) {
        DAT_122de730 = 0;
        DAT_122de740 = 0;
        DAT_122de744 = 0;
        _DAT_122de748 = 0;
        uRam122de74c = 0;
        DAT_122de764 = DAT_122de764 | 1;
        _DAT_122de72c = &PTR_FUN_11d2b5a4;
        _DAT_122de750 = _DAT_11de9ae0;
        uRam122de754 = _UNK_11de9ae4;
        uRam122de758 = _UNK_11de9ae8;
        uRam122de75c = _UNK_11de9aec;
        DAT_122de760 = 1;
        DAT_122de734 = iVar3;
        _DAT_122de738 = iVar3;
        _DAT_122de73c = iVar3;
        FUN_11a8911f(&LAB_11cb1230);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a018f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildTitleInfo::GetManagers_1190a700 @ 1190a700 --- */
// [RE-AUTO c3]
// id: CGuildTitleInfo::GetManagers
// calls: CGuildTitleInfo::GetManagers
// strings:
//   ""CGuildTitleInfo""
//   ""CGuildTitleInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTitleInfo::GetManagers
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo""
     ""CGuildTitleInfo::GetManagers"" */

void CGuildTitleInfo__GetManagers_1190a700(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTitleInfo__GetManagers(0,"CGuildTitleInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2b56c;
      if ((DAT_122de720 & 1) == 0) {
        DAT_122de720 = DAT_122de720 | 1;
        FUN_102500e0("CGuildTitleInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9fcf0);
      }
      if (((*DAT_122de704 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGuildTitleInfo",0), iVar3 == 0))
         && ((DAT_122de764 & 1) == 0)) {
        DAT_122de730 = 0;
        DAT_122de740 = 0;
        DAT_122de744 = 0;
        _DAT_122de748 = 0;
        uRam122de74c = 0;
        DAT_122de764 = DAT_122de764 | 1;
        _DAT_122de72c = &PTR_FUN_11d2b5a4;
        _DAT_122de750 = _DAT_11de9ae0;
        uRam122de754 = _UNK_11de9ae4;
        uRam122de758 = _UNK_11de9ae8;
        uRam122de75c = _UNK_11de9aec;
        DAT_122de760 = 1;
        DAT_122de734 = iVar3;
        _DAT_122de738 = iVar3;
        _DAT_122de73c = iVar3;
        FUN_11a8911f(&LAB_11cb1230);
      }
      local_8 = &PTR_FUN_11da54a8;
      thunk_FUN_11720120();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



