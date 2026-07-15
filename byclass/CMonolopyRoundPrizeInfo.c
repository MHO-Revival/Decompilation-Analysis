// ===== class CMonolopyRoundPrizeInfo  (3 recovered methods) =====

/* --- CMonolopyRoundPrizeInfo::GetManagers @ 109bb3f0 --- */
// [RE-AUTO c3]
// id: CMonolopyRoundPrizeInfo::GetManagers
// strings:
//   ""CMonolopyRoundPrizeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyRoundPrizeInfo::GetManagers
   strings:
     ""CMonolopyRoundPrizeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMonolopyRoundPrizeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8d28 & 1) == 0) {
    DAT_123c8d28 = DAT_123c8d28 | 1;
    _DAT_123c8d40 = &DAT_123c8d30;
    DAT_123c8d44 = &DAT_123c8d30;
    DAT_123c8d30 = 0;
    FUN_100d83d0("CMonolopyRoundPrizeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7bdb0);
  }
  return DAT_123c8d2c;
}



/* --- CMonolopyRoundPrizeInfo::GetManagers_119bc690 @ 119bc690 --- */
// [RE-AUTO c3]
// id: CMonolopyRoundPrizeInfo::GetManagers
// strings:
//   ""CMonolopyRoundPrizeInfo""
//   ""CMonolopyRoundPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyRoundPrizeInfo::GetManagers
   strings:
     ""CMonolopyRoundPrizeInfo""
     ""CMonolopyRoundPrizeInfo::GetManagers"" */

void CMonolopyRoundPrizeInfo__GetManagers_119bc690(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be870(0,"CMonolopyRoundPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2838;
      if ((DAT_123c8d28 & 1) == 0) {
        DAT_123c8d28 = DAT_123c8d28 | 1;
        FUN_102500e0("CMonolopyRoundPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bdb0);
      }
      if (((*DAT_123c8d2c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyRoundPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8d94 & 1) == 0)) {
        DAT_123c8d9c = 0;
        DAT_123c8dac = 0;
        DAT_123c8db0 = 0;
        _DAT_123c8db4 = 0;
        uRam123c8db8 = 0;
        DAT_123c8d94 = DAT_123c8d94 | 1;
        DAT_123c8d98 = &PTR_FUN_11de28a8;
        _DAT_123c8dbc = _DAT_11de9ae0;
        uRam123c8dc0 = _UNK_11de9ae4;
        uRam123c8dc4 = _UNK_11de9ae8;
        uRam123c8dc8 = _UNK_11de9aec;
        DAT_123c8dcc = 1;
        DAT_123c8da0 = iVar3;
        _DAT_123c8da4 = iVar3;
        _DAT_123c8da8 = iVar3;
        FUN_11a8911f(&LAB_11cb4710);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a79510();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonolopyRoundPrizeInfo::GetManagers_119bc7e0 @ 119bc7e0 --- */
// [RE-AUTO c3]
// id: CMonolopyRoundPrizeInfo::GetManagers
// strings:
//   ""CMonolopyRoundPrizeInfo""
//   ""CMonolopyRoundPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonolopyRoundPrizeInfo::GetManagers
   strings:
     ""CMonolopyRoundPrizeInfo""
     ""CMonolopyRoundPrizeInfo::GetManagers"" */

void CMonolopyRoundPrizeInfo__GetManagers_119bc7e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109be870(0,"CMonolopyRoundPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de2838;
      if ((DAT_123c8d28 & 1) == 0) {
        DAT_123c8d28 = DAT_123c8d28 | 1;
        FUN_102500e0("CMonolopyRoundPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7bdb0);
      }
      if (((*DAT_123c8d2c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonolopyRoundPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_123c8d94 & 1) == 0)) {
        DAT_123c8d9c = 0;
        DAT_123c8dac = 0;
        DAT_123c8db0 = 0;
        _DAT_123c8db4 = 0;
        uRam123c8db8 = 0;
        DAT_123c8d94 = DAT_123c8d94 | 1;
        DAT_123c8d98 = &PTR_FUN_11de28a8;
        _DAT_123c8dbc = _DAT_11de9ae0;
        uRam123c8dc0 = _UNK_11de9ae4;
        uRam123c8dc4 = _UNK_11de9ae8;
        uRam123c8dc8 = _UNK_11de9aec;
        DAT_123c8dcc = 1;
        DAT_123c8da0 = iVar3;
        _DAT_123c8da4 = iVar3;
        _DAT_123c8da8 = iVar3;
        FUN_11a8911f(&LAB_11cb4710);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a79500();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_11a796b0();
  return;
}



