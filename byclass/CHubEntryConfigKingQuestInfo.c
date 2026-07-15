// ===== class CHubEntryConfigKingQuestInfo  (1 recovered methods) =====

/* --- CHubEntryConfigKingQuestInfo::GetManagers @ 107ca810 --- */
// [RE-AUTO c3]
// id: CHubEntryConfigKingQuestInfo::GetManagers
// strings:
//   ""CHubEntryConfigKingQuestInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryConfigKingQuestInfo::GetManagers
   strings:
     ""CHubEntryConfigKingQuestInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryConfigKingQuestInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed30 & 1) == 0) {
    DAT_123bed30 = DAT_123bed30 | 1;
    _DAT_123bed48 = &DAT_123bed38;
    DAT_123bed4c = &DAT_123bed38;
    DAT_123bed38 = 0;
    FUN_100d83d0("CHubEntryConfigKingQuestInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c705b0);
  }
  return DAT_123bed34;
}



