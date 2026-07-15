// ===== class CTattooInfo  (1 recovered methods) =====

/* --- CTattooInfo::GetManagers @ 10849dd0 --- */
// [RE-AUTO c3]
// id: CTattooInfo::GetManagers
// strings:
//   ""CTattooInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTattooInfo::GetManagers
   strings:
     ""CTattooInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTattooInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c751c & 1) == 0) {
    DAT_123c751c = DAT_123c751c | 1;
    _DAT_123c7534 = &DAT_123c7524;
    DAT_123c7538 = &DAT_123c7524;
    DAT_123c7524 = 0;
    FUN_100d83d0("CTattooInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72b70);
  }
  return DAT_123c7520;
}



