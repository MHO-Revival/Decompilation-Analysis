// ===== class CLevelGroupInfo  (1 recovered methods) =====

/* --- CLevelGroupInfo::GetManagers @ 109006c0 --- */
// [RE-AUTO c3]
// id: CLevelGroupInfo::GetManagers
// strings:
//   ""CLevelGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelGroupInfo::GetManagers
   strings:
     ""CLevelGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8100 & 1) == 0) {
    DAT_123c8100 = DAT_123c8100 | 1;
    _DAT_123c8118 = &DAT_123c8108;
    DAT_123c811c = &DAT_123c8108;
    DAT_123c8108 = 0;
    FUN_100d83d0("CLevelGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76de0);
  }
  return DAT_123c8104;
}



