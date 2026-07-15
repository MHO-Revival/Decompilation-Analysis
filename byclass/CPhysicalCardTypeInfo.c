// ===== class CPhysicalCardTypeInfo  (1 recovered methods) =====

/* --- CPhysicalCardTypeInfo::GetManagers @ 109c55a0 --- */
// [RE-AUTO c3]
// id: CPhysicalCardTypeInfo::GetManagers
// strings:
//   ""CPhysicalCardTypeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPhysicalCardTypeInfo::GetManagers
   strings:
     ""CPhysicalCardTypeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPhysicalCardTypeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c07a4 & 1) == 0) {
    DAT_123c07a4 = DAT_123c07a4 | 1;
    _DAT_123c0780 = &DAT_123c0770;
    DAT_123c0784 = &DAT_123c0770;
    DAT_123c0770 = 0;
    FUN_100d83d0("CPhysicalCardTypeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c1d0);
  }
  return DAT_123c076c;
}



