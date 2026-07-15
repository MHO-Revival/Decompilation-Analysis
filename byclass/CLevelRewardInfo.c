// ===== class CLevelRewardInfo  (2 recovered methods) =====

/* --- CLevelRewardInfo::GetManagers @ 10976de0 --- */
// [RE-AUTO c3]
// id: CLevelRewardInfo::GetManagers
// strings:
//   ""CLevelRewardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelRewardInfo::GetManagers
   strings:
     ""CLevelRewardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelRewardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c04a4 & 1) == 0) {
    DAT_123c04a4 = DAT_123c04a4 | 1;
    _DAT_123c04bc = &DAT_123c04ac;
    DAT_123c04c0 = &DAT_123c04ac;
    DAT_123c04ac = 0;
    FUN_100d83d0("CLevelRewardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79f50);
  }
  return DAT_123c04a8;
}



/* --- CLevelRewardInfo::GetManagers_1182cb30 @ 1182cb30 --- */
// [RE-AUTO c3]
// id: CLevelRewardInfo::GetManagers
// strings:
//   ""CLevelRewardInfo""
//   ""CLevelRewardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelRewardInfo::GetManagers
   strings:
     ""CLevelRewardInfo""
     ""CLevelRewardInfo::GetManagers"" */

void CLevelRewardInfo__GetManagers_1182cb30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1097c5c0(0,"CLevelRewardInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dde838;
      if ((DAT_123c04a4 & 1) == 0) {
        DAT_123c04a4 = DAT_123c04a4 | 1;
        FUN_102500e0("CLevelRewardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c79f50);
      }
      if (((*DAT_123c04a8 == 0) && (iVar3 = FUN_11679e10(&local_8,"CLevelRewardInfo",0), iVar3 == 0)
          ) && ((DAT_123c0430 & 1) == 0)) {
        DAT_123c03c0 = 0;
        DAT_123c03d0 = 0;
        uRam123c03d4 = 0;
        _DAT_123c03d8 = 0;
        DAT_123c03dc = 0;
        DAT_123c0430 = DAT_123c0430 | 1;
        DAT_123c03c4 = 0;
        _DAT_123c03c8 = 0;
        _DAT_123c03cc = 0;
        _DAT_123c03bc = &PTR_FUN_11dde894;
        DAT_123c03e0 = _DAT_11de9ae0;
        DAT_123c03e4 = _UNK_11de9ae4;
        uRam123c03e8 = _UNK_11de9ae8;
        DAT_123c03ec = _UNK_11de9aec;
        DAT_123c03f0 = 1;
        FUN_11a8911f(&LAB_11cac630);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



