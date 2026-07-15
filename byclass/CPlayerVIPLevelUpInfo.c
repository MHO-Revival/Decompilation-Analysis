// ===== class CPlayerVIPLevelUpInfo  (1 recovered methods) =====

/* --- CPlayerVIPLevelUpInfo::GetManagers @ 1092d3e0 --- */
// [RE-AUTO c3]
// id: CPlayerVIPLevelUpInfo::GetManagers
// strings:
//   ""CPlayerVIPLevelUpInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPlayerVIPLevelUpInfo::GetManagers
   strings:
     ""CPlayerVIPLevelUpInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPlayerVIPLevelUpInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bff6c & 1) == 0) {
    DAT_123bff6c = DAT_123bff6c | 1;
    _DAT_123bff64 = &DAT_123bff54;
    DAT_123bff68 = &DAT_123bff54;
    DAT_123bff54 = 0;
    FUN_100d83d0("CPlayerVIPLevelUpInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77f40);
  }
  return DAT_123bff50;
}



