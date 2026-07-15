// ===== class CExpressionGroupInfo  (1 recovered methods) =====

/* --- CExpressionGroupInfo::GetManagers @ 109b09d0 --- */
// [RE-AUTO c3]
// id: CExpressionGroupInfo::GetManagers
// strings:
//   ""CExpressionGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpressionGroupInfo::GetManagers
   strings:
     ""CExpressionGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CExpressionGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8c40 & 1) == 0) {
    DAT_123c8c40 = DAT_123c8c40 | 1;
    _DAT_123c8c58 = &DAT_123c8c48;
    DAT_123c8c5c = &DAT_123c8c48;
    DAT_123c8c48 = 0;
    FUN_100d83d0("CExpressionGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b8b0);
  }
  return DAT_123c8c44;
}



