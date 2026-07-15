// ===== class CBulletDataInfo  (1 recovered methods) =====

/* --- CBulletDataInfo::GetManagers @ 10856090 --- */
// [RE-AUTO c3]
// id: CBulletDataInfo::GetManagers
// strings:
//   ""CBulletDataInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBulletDataInfo::GetManagers
   strings:
     ""CBulletDataInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CBulletDataInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf860 & 1) == 0) {
    DAT_123bf860 = DAT_123bf860 | 1;
    _DAT_123bf838 = &DAT_123bf828;
    DAT_123bf83c = &DAT_123bf828;
    DAT_123bf828 = 0;
    FUN_100d83d0("CBulletDataInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72ef0);
  }
  return DAT_123bf824;
}



