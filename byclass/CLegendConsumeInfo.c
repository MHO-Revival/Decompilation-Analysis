// ===== class CLegendConsumeInfo  (1 recovered methods) =====

/* --- CLegendConsumeInfo::GetManagers @ 109ed7a0 --- */
// [RE-AUTO c3]
// id: CLegendConsumeInfo::GetManagers
// strings:
//   ""CLegendConsumeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLegendConsumeInfo::GetManagers
   strings:
     ""CLegendConsumeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLegendConsumeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c07cc & 1) == 0) {
    DAT_123c07cc = DAT_123c07cc | 1;
    _DAT_123c07c4 = &DAT_123c07b4;
    DAT_123c07c8 = &DAT_123c07b4;
    DAT_123c07b4 = 0;
    FUN_100d83d0("CLegendConsumeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7d290);
  }
  return DAT_123c07b0;
}



