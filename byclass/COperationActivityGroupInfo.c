// ===== class COperationActivityGroupInfo  (1 recovered methods) =====

/* --- COperationActivityGroupInfo::GetManagers @ 10961f00 --- */
// [RE-AUTO c3]
// id: COperationActivityGroupInfo::GetManagers
// strings:
//   ""COperationActivityGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: COperationActivityGroupInfo::GetManagers
   strings:
     ""COperationActivityGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall COperationActivityGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c02dc & 1) == 0) {
    DAT_123c02dc = DAT_123c02dc | 1;
    _DAT_123c02f4 = &DAT_123c02e4;
    DAT_123c02f8 = &DAT_123c02e4;
    DAT_123c02e4 = 0;
    FUN_100d83d0("COperationActivityGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79560);
  }
  return DAT_123c02e0;
}



