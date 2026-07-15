// ===== class CVipFuLiConfigInfo  (1 recovered methods) =====

/* --- CVipFuLiConfigInfo::GetManagers @ 1081f250 --- */
// [RE-AUTO c3]
// id: CVipFuLiConfigInfo::GetManagers
// strings:
//   ""CVipFuLiConfigInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CVipFuLiConfigInfo::GetManagers
   strings:
     ""CVipFuLiConfigInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CVipFuLiConfigInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf2e4 & 1) == 0) {
    DAT_123bf2e4 = DAT_123bf2e4 | 1;
    _DAT_123bf2dc = &DAT_123bf2cc;
    DAT_123bf2e0 = &DAT_123bf2cc;
    DAT_123bf2cc = 0;
    FUN_100d83d0("CVipFuLiConfigInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71ff0);
  }
  return DAT_123bf2c8;
}



