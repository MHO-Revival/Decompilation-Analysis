// ===== class CMaterialTagDescInfo  (1 recovered methods) =====

/* --- CMaterialTagDescInfo::GetManagers @ 1080a3f0 --- */
// [RE-AUTO c3]
// id: CMaterialTagDescInfo::GetManagers
// strings:
//   ""CMaterialTagDescInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMaterialTagDescInfo::GetManagers
   strings:
     ""CMaterialTagDescInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMaterialTagDescInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf180 & 1) == 0) {
    DAT_123bf180 = DAT_123bf180 | 1;
    _DAT_123bf178 = &DAT_123bf168;
    DAT_123bf17c = &DAT_123bf168;
    DAT_123bf168 = 0;
    FUN_100d83d0("CMaterialTagDescInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71970);
  }
  return DAT_123bf164;
}



