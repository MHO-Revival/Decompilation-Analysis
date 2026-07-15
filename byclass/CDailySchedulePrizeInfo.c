// ===== class CDailySchedulePrizeInfo  (2 recovered methods) =====

/* --- CDailySchedulePrizeInfo::GetManagers @ 1089a600 --- */
// [RE-AUTO c3]
// id: CDailySchedulePrizeInfo::GetManagers
// strings:
//   ""CDailySchedulePrizeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDailySchedulePrizeInfo::GetManagers
   strings:
     ""CDailySchedulePrizeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDailySchedulePrizeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7868 & 1) == 0) {
    DAT_123c7868 = DAT_123c7868 | 1;
    _DAT_123c7880 = &DAT_123c7870;
    DAT_123c7884 = &DAT_123c7870;
    DAT_123c7870 = 0;
    FUN_100d83d0("CDailySchedulePrizeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74850);
  }
  return DAT_123c786c;
}



/* --- CDailySchedulePrizeInfo::GetManagers_11923210 @ 11923210 --- */
// [RE-AUTO c3]
// id: CDailySchedulePrizeInfo::GetManagers
// strings:
//   ""CDailySchedulePrizeInfo""
//   ""CDailySchedulePrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDailySchedulePrizeInfo::GetManagers
   strings:
     ""CDailySchedulePrizeInfo""
     ""CDailySchedulePrizeInfo::GetManagers"" */

void CDailySchedulePrizeInfo__GetManagers_11923210(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1089e440(0,"CDailySchedulePrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd34c0;
      if ((DAT_123c7868 & 1) == 0) {
        DAT_123c7868 = DAT_123c7868 | 1;
        FUN_102500e0("CDailySchedulePrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c74850);
      }
      if (((*DAT_123c786c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDailySchedulePrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c7890 & 1) == 0)) {
        DAT_123c7898 = 0;
        DAT_123c78a8 = 0;
        DAT_123c78ac = 0;
        _DAT_123c78b0 = 0;
        DAT_123c78b4 = 0;
        DAT_123c7890 = DAT_123c7890 | 1;
        _DAT_123c7894 = &PTR_FUN_11dd34d4;
        DAT_123c78b8 = _DAT_11de9ae0;
        DAT_123c78bc = _UNK_11de9ae4;
        uRam123c78c0 = _UNK_11de9ae8;
        DAT_123c78c4 = _UNK_11de9aec;
        DAT_123c78c8 = 1;
        DAT_123c789c = iVar3;
        _DAT_123c78a0 = iVar3;
        _DAT_123c78a4 = iVar3;
        FUN_11a8911f(&LAB_11cb1ad0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a13c00();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



