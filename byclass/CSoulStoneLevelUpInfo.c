// ===== class CSoulStoneLevelUpInfo  (1 recovered methods) =====

/* --- CSoulStoneLevelUpInfo::GetManagers @ 10520880 --- */
// [RE-AUTO c3]
// id: CSoulStoneLevelUpInfo::GetManagers
// strings:
//   ""CSoulStoneLevelUpInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulStoneLevelUpInfo::GetManagers
   strings:
     ""CSoulStoneLevelUpInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSoulStoneLevelUpInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7260 & 1) == 0) {
    DAT_123c7260 = DAT_123c7260 | 1;
    _DAT_123c7278 = &DAT_123c7268;
    DAT_123c727c = &DAT_123c7268;
    DAT_123c7268 = 0;
    FUN_100d83d0("CSoulStoneLevelUpInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fa60);
  }
  return DAT_123c7264;
}



