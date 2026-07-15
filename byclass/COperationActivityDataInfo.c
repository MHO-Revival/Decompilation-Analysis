// ===== class COperationActivityDataInfo  (1 recovered methods) =====

/* --- COperationActivityDataInfo::GetManagers @ 10962010 --- */
// [RE-AUTO c3]
// id: COperationActivityDataInfo::GetManagers
// strings:
//   ""COperationActivityDataInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: COperationActivityDataInfo::GetManagers
   strings:
     ""COperationActivityDataInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall COperationActivityDataInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c02fc & 1) == 0) {
    DAT_123c02fc = DAT_123c02fc | 1;
    _DAT_123c0314 = &DAT_123c0304;
    DAT_123c0318 = &DAT_123c0304;
    DAT_123c0304 = 0;
    FUN_100d83d0("COperationActivityDataInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79590);
  }
  return DAT_123c0300;
}



