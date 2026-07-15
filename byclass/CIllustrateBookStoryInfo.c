// ===== class CIllustrateBookStoryInfo  (1 recovered methods) =====

/* --- CIllustrateBookStoryInfo::GetManagers @ 109c5940 --- */
// [RE-AUTO c3]
// id: CIllustrateBookStoryInfo::GetManagers
// strings:
//   ""CIllustrateBookStoryInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookStoryInfo::GetManagers
   strings:
     ""CIllustrateBookStoryInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CIllustrateBookStoryInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8eb8 & 1) == 0) {
    DAT_123c8eb8 = DAT_123c8eb8 | 1;
    _DAT_123c8ed0 = &DAT_123c8ec0;
    DAT_123c8ed4 = &DAT_123c8ec0;
    DAT_123c8ec0 = 0;
    FUN_100d83d0("CIllustrateBookStoryInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c230);
  }
  return DAT_123c8ebc;
}



