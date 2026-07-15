// ===== class CSystemShortcutDataInfo  (1 recovered methods) =====

/* --- CSystemShortcutDataInfo::GetManagers @ 109239f0 --- */
// [RE-AUTO c3]
// id: CSystemShortcutDataInfo::GetManagers
// strings:
//   ""CSystemShortcutDataInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSystemShortcutDataInfo::GetManagers
   strings:
     ""CSystemShortcutDataInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSystemShortcutDataInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8290 & 1) == 0) {
    DAT_123c8290 = DAT_123c8290 | 1;
    _DAT_123c82a8 = &DAT_123c8298;
    DAT_123c82ac = &DAT_123c8298;
    DAT_123c8298 = 0;
    FUN_100d83d0("CSystemShortcutDataInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77a50);
  }
  return DAT_123c8294;
}



