// ===== class CTutorialHintInfo  (1 recovered methods) =====

/* --- CTutorialHintInfo::GetManagers @ 1080b2a0 --- */
// [RE-AUTO c3]
// id: CTutorialHintInfo::GetManagers
// strings:
//   ""CTutorialHintInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTutorialHintInfo::GetManagers
   strings:
     ""CTutorialHintInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTutorialHintInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf260 & 1) == 0) {
    DAT_123bf260 = DAT_123bf260 | 1;
    _DAT_123bf278 = &DAT_123bf268;
    DAT_123bf27c = &DAT_123bf268;
    DAT_123bf268 = 0;
    FUN_100d83d0("CTutorialHintInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71b50);
  }
  return DAT_123bf264;
}



