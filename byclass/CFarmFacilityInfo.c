// ===== class CFarmFacilityInfo  (1 recovered methods) =====

/* --- CFarmFacilityInfo::GetManagers @ 108e1520 --- */
// [RE-AUTO c3]
// id: CFarmFacilityInfo::GetManagers
// strings:
//   ""CFarmFacilityInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFarmFacilityInfo::GetManagers
   strings:
     ""CFarmFacilityInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFarmFacilityInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7e64 & 1) == 0) {
    DAT_123c7e64 = DAT_123c7e64 | 1;
    _DAT_123c7e7c = &DAT_123c7e6c;
    DAT_123c7e80 = &DAT_123c7e6c;
    DAT_123c7e6c = 0;
    FUN_100d83d0("CFarmFacilityInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c761a0);
  }
  return DAT_123c7e68;
}



