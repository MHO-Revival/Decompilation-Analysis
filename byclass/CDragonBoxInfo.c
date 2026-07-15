// ===== class CDragonBoxInfo  (4 recovered methods) =====

/* --- CDragonBoxInfo::GetManagers @ 108a2960 --- */
// [RE-AUTO c3]
// id: CDragonBoxInfo::GetManagers
// strings:
//   ""CDragonBoxInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxInfo::GetManagers
   strings:
     ""CDragonBoxInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CDragonBoxInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfa0c & 1) == 0) {
    DAT_123bfa0c = DAT_123bfa0c | 1;
    _DAT_123bfa04 = &DAT_123bf9f4;
    DAT_123bfa08 = &DAT_123bf9f4;
    DAT_123bf9f4 = 0;
    FUN_100d83d0("CDragonBoxInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74ce0);
  }
  return DAT_123bf9f0;
}



/* --- CDragonBoxInfo::GetManagers_11912440 @ 11912440 --- */
// [RE-AUTO c3]
// id: CDragonBoxInfo::GetManagers
// strings:
//   ""CDragonBoxInfo""
//   ""CDragonBoxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxInfo::GetManagers
   strings:
     ""CDragonBoxInfo""
     ""CDragonBoxInfo::GetManagers"" */

void CDragonBoxInfo__GetManagers_11912440(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108aa6d0(0,"CDragonBoxInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd4470;
      if ((DAT_123bfa0c & 1) == 0) {
        DAT_123bfa0c = DAT_123bfa0c | 1;
        FUN_102500e0("CDragonBoxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c74ce0);
      }
      if (((*DAT_123bf9f0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CDragonBoxInfo",0), iVar3 == 0))
         && ((DAT_123bfa48 & 1) == 0)) {
        DAT_123bfa14 = 0;
        DAT_123bfa24 = 0;
        DAT_123bfa28 = 0;
        _DAT_123bfa2c = 0;
        uRam123bfa30 = 0;
        DAT_123bfa48 = DAT_123bfa48 | 1;
        DAT_123bfa10 = &PTR_FUN_11dd4518;
        _DAT_123bfa34 = _DAT_11de9ae0;
        uRam123bfa38 = _UNK_11de9ae4;
        uRam123bfa3c = _UNK_11de9ae8;
        uRam123bfa40 = _UNK_11de9aec;
        DAT_123bfa44 = 1;
        DAT_123bfa18 = iVar3;
        _DAT_123bfa1c = iVar3;
        _DAT_123bfa20 = iVar3;
        FUN_11a8911f(&LAB_11cb1680);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_118191f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxInfo::GetManagers_11912590 @ 11912590 --- */
// [RE-AUTO c3]
// id: CDragonBoxInfo::GetManagers
// calls: CDragonBoxPrizeInfo::GetManagers_118189e0
// strings:
//   ""CDragonBoxInfo""
//   ""CDragonBoxInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxInfo::GetManagers
   calls: CDragonBoxPrizeInfo::GetManagers_118189e0
   strings:
     ""CDragonBoxInfo""
     ""CDragonBoxInfo::GetManagers"" */

void CDragonBoxInfo__GetManagers_11912590(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108aa6d0(0,"CDragonBoxInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd4470;
      if ((DAT_123bfa0c & 1) == 0) {
        DAT_123bfa0c = DAT_123bfa0c | 1;
        FUN_102500e0("CDragonBoxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c74ce0);
      }
      if (((*DAT_123bf9f0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CDragonBoxInfo",0), iVar3 == 0))
         && ((DAT_123bfa48 & 1) == 0)) {
        DAT_123bfa14 = 0;
        DAT_123bfa24 = 0;
        DAT_123bfa28 = 0;
        _DAT_123bfa2c = 0;
        uRam123bfa30 = 0;
        DAT_123bfa48 = DAT_123bfa48 | 1;
        DAT_123bfa10 = &PTR_FUN_11dd4518;
        _DAT_123bfa34 = _DAT_11de9ae0;
        uRam123bfa38 = _UNK_11de9ae4;
        uRam123bfa3c = _UNK_11de9ae8;
        uRam123bfa40 = _UNK_11de9aec;
        DAT_123bfa44 = 1;
        DAT_123bfa18 = iVar3;
        _DAT_123bfa1c = iVar3;
        _DAT_123bfa20 = iVar3;
        FUN_11a8911f(&LAB_11cb1680);
      }
      local_8 = &PTR_FUN_11da54a8;
      CDragonBoxPrizeInfo__GetManagers_118189e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CDragonBoxInfo::GetManagers_11a06c20 @ 11a06c20 --- */
// [RE-AUTO c3]
// id: CDragonBoxInfo::GetManagers
// strings:
//   ""CDragonBoxInfo::GetManagers""
//   ""CDragonBoxInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDragonBoxInfo::GetManagers
   strings:
     ""CDragonBoxInfo::GetManagers""
     ""CDragonBoxInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * CDragonBoxInfo__GetManagers_11a06c20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd4470;
  if ((DAT_123bfa0c & 1) == 0) {
    DAT_123bfa0c = DAT_123bfa0c | 1;
    FUN_102500e0("CDragonBoxInfo::GetManagers");
    FUN_11a8911f(&LAB_11c74ce0);
  }
  if (((*DAT_123bf9f0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CDragonBoxInfo",0), iVar1 == 0)) &&
     ((DAT_123bfa48 & 1) == 0)) {
    DAT_123bfa14 = 0;
    DAT_123bfa24 = 0;
    DAT_123bfa28 = 0;
    _DAT_123bfa2c = 0;
    uRam123bfa30 = 0;
    DAT_123bfa48 = DAT_123bfa48 | 1;
    DAT_123bfa18 = 0;
    _DAT_123bfa1c = 0;
    _DAT_123bfa20 = 0;
    DAT_123bfa10 = &PTR_FUN_11dd4518;
    _DAT_123bfa34 = _DAT_11de9ae0;
    uRam123bfa38 = _UNK_11de9ae4;
    uRam123bfa3c = _UNK_11de9ae8;
    uRam123bfa40 = _UNK_11de9aec;
    DAT_123bfa44 = 1;
    FUN_11a8911f(&LAB_11cb5c20);
  }
  local_8 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar2 = (undefined4 *)*DAT_123bdba0;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0), puVar2 == (undefined4 *)0x0))
  {
    if ((DAT_123bdc00 & 1) == 0) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc8 = 0;
      _DAT_123bdbcc = 0;
      _DAT_123bdbd0 = 0;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      FUN_11a8911f(&LAB_11cb5c80);
    }
    puVar2 = &DAT_123bdbc0;
  }
  return puVar2;
}



