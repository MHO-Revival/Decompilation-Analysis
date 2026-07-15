// ===== class CDragonBoxFxInfo  (3 recovered methods) =====

/* --- CDragonBoxFxInfo::GetManagers @ 1092d080 --- */
// [RE-AUTO c3]
// id: CDragonBoxFxInfo::GetManagers
// strings:
//   ""CDragonBoxFxInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxFxInfo::GetManagers
   strings:
     ""CDragonBoxFxInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDragonBoxFxInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8398 & 1) == 0) {
    DAT_123c8398 = DAT_123c8398 | 1;
    _DAT_123c83b0 = &DAT_123c83a0;
    DAT_123c83b4 = &DAT_123c83a0;
    DAT_123c83a0 = 0;
    FUN_100d83d0("CDragonBoxFxInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77ee0);
  }
  return DAT_123c839c;
}



/* --- CDragonBoxFxInfo::GetManagers_11912e30 @ 11912e30 --- */
// [RE-AUTO c3]
// id: CDragonBoxFxInfo::GetManagers
// strings:
//   ""CDragonBoxFxInfo""
//   ""CDragonBoxFxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxFxInfo::GetManagers
   strings:
     ""CDragonBoxFxInfo""
     ""CDragonBoxFxInfo::GetManagers"" */

void CDragonBoxFxInfo__GetManagers_11912e30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109395c0(0,"CDragonBoxFxInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaae4;
      if ((DAT_123c8398 & 1) == 0) {
        DAT_123c8398 = DAT_123c8398 | 1;
        FUN_102500e0("CDragonBoxFxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77ee0);
      }
      if (((*DAT_123c839c == 0) && (iVar3 = FUN_11679e10(&local_8,"CDragonBoxFxInfo",0), iVar3 == 0)
          ) && ((DAT_123c848c & 1) == 0)) {
        DAT_123c8494 = 0;
        DAT_123c84a4 = 0;
        DAT_123c84a8 = 0;
        _DAT_123c84ac = 0;
        DAT_123c84b0 = 0;
        DAT_123c848c = DAT_123c848c | 1;
        _DAT_123c8490 = &PTR_FUN_11ddaafc;
        DAT_123c84b4 = _DAT_11de9ae0;
        DAT_123c84b8 = _UNK_11de9ae4;
        uRam123c84bc = _UNK_11de9ae8;
        DAT_123c84c0 = _UNK_11de9aec;
        DAT_123c84c4 = 1;
        DAT_123c8498 = iVar3;
        _DAT_123c849c = iVar3;
        _DAT_123c84a0 = iVar3;
        FUN_11a8911f(&LAB_11cb16e0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a07a10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxFxInfo::GetManagers_11912f80 @ 11912f80 --- */
// [RE-AUTO c3]
// id: CDragonBoxFxInfo::GetManagers
// strings:
//   ""CDragonBoxFxInfo""
//   ""CDragonBoxFxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxFxInfo::GetManagers
   strings:
     ""CDragonBoxFxInfo""
     ""CDragonBoxFxInfo::GetManagers"" */

void CDragonBoxFxInfo__GetManagers_11912f80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109395c0(0,"CDragonBoxFxInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddaae4;
      if ((DAT_123c8398 & 1) == 0) {
        DAT_123c8398 = DAT_123c8398 | 1;
        FUN_102500e0("CDragonBoxFxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c77ee0);
      }
      if (((*DAT_123c839c == 0) && (iVar3 = FUN_11679e10(&local_8,"CDragonBoxFxInfo",0), iVar3 == 0)
          ) && ((DAT_123c848c & 1) == 0)) {
        DAT_123c8494 = 0;
        DAT_123c84a4 = 0;
        DAT_123c84a8 = 0;
        _DAT_123c84ac = 0;
        DAT_123c84b0 = 0;
        DAT_123c848c = DAT_123c848c | 1;
        _DAT_123c8490 = &PTR_FUN_11ddaafc;
        DAT_123c84b4 = _DAT_11de9ae0;
        DAT_123c84b8 = _UNK_11de9ae4;
        uRam123c84bc = _UNK_11de9ae8;
        DAT_123c84c0 = _UNK_11de9aec;
        DAT_123c84c4 = 1;
        DAT_123c8498 = iVar3;
        _DAT_123c849c = iVar3;
        _DAT_123c84a0 = iVar3;
        FUN_11a8911f(&LAB_11cb16e0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a07860();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



