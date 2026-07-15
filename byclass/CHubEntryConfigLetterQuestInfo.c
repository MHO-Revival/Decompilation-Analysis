// ===== class CHubEntryConfigLetterQuestInfo  (1 recovered methods) =====

/* --- CHubEntryConfigLetterQuestInfo::GetManagers @ 107caa50 --- */
// [RE-AUTO c3]
// id: CHubEntryConfigLetterQuestInfo::GetManagers
// strings:
//   ""CHubEntryConfigLetterQuestInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryConfigLetterQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigLetterQuestInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryConfigLetterQuestInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed70 & 1) == 0) {
    DAT_123bed70 = DAT_123bed70 | 1;
    _DAT_123bed64 = &DAT_123bed54;
    DAT_123bed68 = &DAT_123bed54;
    DAT_123bed54 = 0;
    FUN_100d83d0("CHubEntryConfigLetterQuestInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c705e0);
  }
  return DAT_123bed50;
}



