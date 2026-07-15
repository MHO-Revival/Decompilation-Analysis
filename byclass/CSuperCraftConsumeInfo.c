// ===== class CSuperCraftConsumeInfo  (1 recovered methods) =====

/* --- CSuperCraftConsumeInfo::GetManagers @ 107ec7d0 --- */
// [RE-AUTO c3]
// id: CSuperCraftConsumeInfo::GetManagers
// strings:
//   ""CSuperCraftConsumeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuperCraftConsumeInfo::GetManagers
   strings:
     ""CSuperCraftConsumeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSuperCraftConsumeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bee9c & 1) == 0) {
    DAT_123bee9c = DAT_123bee9c | 1;
    _DAT_123beeb4 = &DAT_123beea4;
    DAT_123beeb8 = &DAT_123beea4;
    DAT_123beea4 = 0;
    FUN_100d83d0("CSuperCraftConsumeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71330);
  }
  return DAT_123beea0;
}



