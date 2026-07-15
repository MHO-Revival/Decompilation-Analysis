// ===== class CDragonBoxShowInfo  (3 recovered methods) =====

/* --- CDragonBoxShowInfo::GetManagers @ 1092d200 --- */
// [RE-AUTO c3]
// id: CDragonBoxShowInfo::GetManagers
// strings:
//   ""CDragonBoxShowInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxShowInfo::GetManagers
   strings:
     ""CDragonBoxShowInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDragonBoxShowInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c83b8 & 1) == 0) {
    DAT_123c83b8 = DAT_123c83b8 | 1;
    _DAT_123c83d0 = &DAT_123c83c0;
    DAT_123c83d4 = &DAT_123c83c0;
    DAT_123c83c0 = 0;
    FUN_100d83d0("CDragonBoxShowInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77f10);
  }
  return DAT_123c83bc;
}



/* --- CDragonBoxShowInfo::GetManagers_11913880 @ 11913880 --- */
// [RE-AUTO c3]
// id: CDragonBoxShowInfo::GetManagers
// strings:
//   ""CDragonBoxShowInfo""
//   ""CDragonBoxShowInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxShowInfo::GetManagers
   strings:
     ""CDragonBoxShowInfo""
     ""CDragonBoxShowInfo::GetManagers"" */

void CDragonBoxShowInfo__GetManagers_11913880(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10939720(0,"CDragonBoxShowInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaadc;
      if ((DAT_123c83b8 & 1) == 0) {
        DAT_123c83b8 = DAT_123c83b8 | 1;
        FUN_102500e0("CDragonBoxShowInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77f10);
      }
      if (((*DAT_123c83bc == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxShowInfo",0), iVar3 == 0)) &&
         ((DAT_123c84c8 & 1) == 0)) {
        DAT_123c84d0 = 0;
        DAT_123c84e0 = 0;
        DAT_123c84e4 = 0;
        _DAT_123c84e8 = 0;
        DAT_123c84ec = 0;
        DAT_123c84c8 = DAT_123c84c8 | 1;
        _DAT_123c84cc = &PTR_FUN_11ddabe0;
        DAT_123c84f0 = _DAT_11de9ae0;
        DAT_123c84f4 = _UNK_11de9ae4;
        uRam123c84f8 = _UNK_11de9ae8;
        DAT_123c84fc = _UNK_11de9aec;
        DAT_123c8500 = 1;
        DAT_123c84d4 = iVar3;
        _DAT_123c84d8 = iVar3;
        _DAT_123c84dc = iVar3;
        FUN_11a8911f(&LAB_11cb1740);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a07fd0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxShowInfo::GetManagers_119139d0 @ 119139d0 --- */
// [RE-AUTO c3]
// id: CDragonBoxShowInfo::GetManagers
// strings:
//   ""CDragonBoxShowInfo""
//   ""CDragonBoxShowInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxShowInfo::GetManagers
   strings:
     ""CDragonBoxShowInfo""
     ""CDragonBoxShowInfo::GetManagers"" */

void CDragonBoxShowInfo__GetManagers_119139d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10939720(0,"CDragonBoxShowInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaadc;
      if ((DAT_123c83b8 & 1) == 0) {
        DAT_123c83b8 = DAT_123c83b8 | 1;
        FUN_102500e0("CDragonBoxShowInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77f10);
      }
      if (((*DAT_123c83bc == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CDragonBoxShowInfo",0), iVar3 == 0)) &&
         ((DAT_123c84c8 & 1) == 0)) {
        DAT_123c84d0 = 0;
        DAT_123c84e0 = 0;
        DAT_123c84e4 = 0;
        _DAT_123c84e8 = 0;
        DAT_123c84ec = 0;
        DAT_123c84c8 = DAT_123c84c8 | 1;
        _DAT_123c84cc = &PTR_FUN_11ddabe0;
        DAT_123c84f0 = _DAT_11de9ae0;
        DAT_123c84f4 = _UNK_11de9ae4;
        uRam123c84f8 = _UNK_11de9ae8;
        DAT_123c84fc = _UNK_11de9aec;
        DAT_123c8500 = 1;
        DAT_123c84d4 = iVar3;
        _DAT_123c84d8 = iVar3;
        _DAT_123c84dc = iVar3;
        FUN_11a8911f(&LAB_11cb1740);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a07fc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



