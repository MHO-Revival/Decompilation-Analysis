// ===== class CFaceInfo  (1 recovered methods) =====

/* --- CFaceInfo::GetManagers @ 10849ae0 --- */
// [RE-AUTO c3]
// id: CFaceInfo::GetManagers
// strings:
//   ""CFaceInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFaceInfo::GetManagers
   strings:
     ""CFaceInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFaceInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c74fc & 1) == 0) {
    DAT_123c74fc = DAT_123c74fc | 1;
    _DAT_123c7514 = &DAT_123c7504;
    DAT_123c7518 = &DAT_123c7504;
    DAT_123c7504 = 0;
    FUN_100d83d0("CFaceInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72b40);
  }
  return DAT_123c7500;
}



