// ===== class CFarmCPInfo  (1 recovered methods) =====

/* --- CFarmCPInfo::GetManagers @ 108e13b0 --- */
// [RE-AUTO c3]
// id: CFarmCPInfo::GetManagers
// strings:
//   ""CFarmCPInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFarmCPInfo::GetManagers
   strings:
     ""CFarmCPInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFarmCPInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7e44 & 1) == 0) {
    DAT_123c7e44 = DAT_123c7e44 | 1;
    _DAT_123c7e5c = &DAT_123c7e4c;
    DAT_123c7e60 = &DAT_123c7e4c;
    DAT_123c7e4c = 0;
    FUN_100d83d0("CFarmCPInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76170);
  }
  return DAT_123c7e48;
}



