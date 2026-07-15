// ===== class CLegendPearlItemInfo  (1 recovered methods) =====

/* --- CLegendPearlItemInfo::GetManagers @ 10855950 --- */
// [RE-AUTO c3]
// id: CLegendPearlItemInfo::GetManagers
// strings:
//   ""CLegendPearlItemInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLegendPearlItemInfo::GetManagers
   strings:
     ""CLegendPearlItemInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLegendPearlItemInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf864 & 1) == 0) {
    DAT_123bf864 = DAT_123bf864 | 1;
    _DAT_123bf87c = &DAT_123bf86c;
    DAT_123bf880 = &DAT_123bf86c;
    DAT_123bf86c = 0;
    FUN_100d83d0("CLegendPearlItemInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72e60);
  }
  return DAT_123bf868;
}



