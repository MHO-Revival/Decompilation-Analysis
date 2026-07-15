// ===== class CGuildTipsInfo  (1 recovered methods) =====

/* --- CGuildTipsInfo::GetManagers @ 10962120 --- */
// [RE-AUTO c3]
// id: CGuildTipsInfo::GetManagers
// strings:
//   ""CGuildTipsInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTipsInfo::GetManagers
   strings:
     ""CGuildTipsInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGuildTipsInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0394 & 1) == 0) {
    DAT_123c0394 = DAT_123c0394 | 1;
    _DAT_123c03ac = &DAT_123c039c;
    DAT_123c03b0 = &DAT_123c039c;
    DAT_123c039c = 0;
    FUN_100d83d0("CGuildTipsInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c795c0);
  }
  return DAT_123c0398;
}



