// ===== class CHubPageStarLevelInfo  (1 recovered methods) =====

/* --- CHubPageStarLevelInfo::GetManagers @ 107ca690 --- */
// [RE-AUTO c3]
// id: CHubPageStarLevelInfo::GetManagers
// strings:
//   ""CHubPageStarLevelInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubPageStarLevelInfo::GetManagers
   strings:
     ""CHubPageStarLevelInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubPageStarLevelInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed90 & 1) == 0) {
    DAT_123bed90 = DAT_123bed90 | 1;
    _DAT_123bed88 = &DAT_123bed78;
    DAT_123bed8c = &DAT_123bed78;
    DAT_123bed78 = 0;
    FUN_100d83d0("CHubPageStarLevelInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70580);
  }
  return DAT_123bed74;
}



