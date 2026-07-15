// ===== class CTitleInfo  (1 recovered methods) =====

/* --- CTitleInfo::GetManagers @ 108567d0 --- */
// [RE-AUTO c3]
// id: CTitleInfo::GetManagers
// strings:
//   ""CTitleInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTitleInfo::GetManagers
   strings:
     ""CTitleInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTitleInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf804 & 1) == 0) {
    DAT_123bf804 = DAT_123bf804 | 1;
    _DAT_123bf81c = &DAT_123bf80c;
    DAT_123bf820 = &DAT_123bf80c;
    DAT_123bf80c = 0;
    FUN_100d83d0("CTitleInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72fb0);
  }
  return DAT_123bf808;
}



