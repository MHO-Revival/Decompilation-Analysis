// ===== class CSpoorPrizeBonusInfo  (2 recovered methods) =====

/* --- CSpoorPrizeBonusInfo::GetManagers @ 10947990 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeBonusInfo::GetManagers
// strings:
//   ""CSpoorPrizeBonusInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeBonusInfo::GetManagers
   strings:
     ""CSpoorPrizeBonusInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpoorPrizeBonusInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8544 & 1) == 0) {
    DAT_123c8544 = DAT_123c8544 | 1;
    _DAT_123c855c = &DAT_123c854c;
    DAT_123c8560 = &DAT_123c854c;
    DAT_123c854c = 0;
    FUN_100d83d0("CSpoorPrizeBonusInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c785f0);
  }
  return DAT_123c8548;
}



/* --- CSpoorPrizeBonusInfo::GetManagers_1197af40 @ 1197af40 --- */
// [RE-AUTO c3]
// id: CSpoorPrizeBonusInfo::GetManagers
// strings:
//   ""CSpoorPrizeBonusInfo""
//   ""CSpoorPrizeBonusInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpoorPrizeBonusInfo::GetManagers
   strings:
     ""CSpoorPrizeBonusInfo""
     ""CSpoorPrizeBonusInfo::GetManagers"" */

void CSpoorPrizeBonusInfo__GetManagers_1197af40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1094b7f0(0,"CSpoorPrizeBonusInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc1a8;
      if ((DAT_123c8544 & 1) == 0) {
        DAT_123c8544 = DAT_123c8544 | 1;
        FUN_102500e0("CSpoorPrizeBonusInfo::GetManagers");
        FUN_11a8911f(&LAB_11c785f0);
      }
      if (((*DAT_123c8548 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CSpoorPrizeBonusInfo",0), iVar3 == 0)) &&
         ((DAT_123c861c & 1) == 0)) {
        DAT_123c8624 = 0;
        DAT_123c8634 = 0;
        DAT_123c8638 = 0;
        _DAT_123c863c = 0;
        DAT_123c8640 = 0;
        DAT_123c861c = DAT_123c861c | 1;
        _DAT_123c8620 = &PTR_FUN_11ddc1c8;
        DAT_123c8644 = _DAT_11de9ae0;
        DAT_123c8648 = _UNK_11de9ae4;
        uRam123c864c = _UNK_11de9ae8;
        DAT_123c8650 = _UNK_11de9aec;
        DAT_123c8654 = 1;
        DAT_123c8628 = iVar3;
        _DAT_123c862c = iVar3;
        _DAT_123c8630 = iVar3;
        FUN_11a8911f(&LAB_11cb3540);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11861100();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



