// ===== class CIllustrateBookGroupInfo  (1 recovered methods) =====

/* --- CIllustrateBookGroupInfo::GetManagers @ 109c5490 --- */
// [RE-AUTO c3]
// id: CIllustrateBookGroupInfo::GetManagers
// strings:
//   ""CIllustrateBookGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CIllustrateBookGroupInfo::GetManagers
   strings:
     ""CIllustrateBookGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CIllustrateBookGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8e98 & 1) == 0) {
    DAT_123c8e98 = DAT_123c8e98 | 1;
    _DAT_123c8eb0 = &DAT_123c8ea0;
    DAT_123c8eb4 = &DAT_123c8ea0;
    DAT_123c8ea0 = 0;
    FUN_100d83d0("CIllustrateBookGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c1a0);
  }
  return DAT_123c8e9c;
}



