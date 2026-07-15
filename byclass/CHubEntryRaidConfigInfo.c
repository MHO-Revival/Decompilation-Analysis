// ===== class CHubEntryRaidConfigInfo  (1 recovered methods) =====

/* --- CHubEntryRaidConfigInfo::GetManagers @ 107cac90 --- */
// [RE-AUTO c3]
// id: CHubEntryRaidConfigInfo::GetManagers
// strings:
//   ""CHubEntryRaidConfigInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryRaidConfigInfo::GetManagers
   strings:
     ""CHubEntryRaidConfigInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryRaidConfigInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed6c & 1) == 0) {
    DAT_123bed6c = DAT_123bed6c | 1;
    _DAT_123bed08 = &DAT_123becf8;
    DAT_123bed0c = &DAT_123becf8;
    DAT_123becf8 = 0;
    FUN_100d83d0("CHubEntryRaidConfigInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70610);
  }
  return DAT_123becf4;
}



