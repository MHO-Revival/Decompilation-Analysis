// ===== class CSuitInfo  (1 recovered methods) =====

/* --- CSuitInfo::GetManagers @ 1052c040 --- */
// [RE-AUTO c3]
// id: CSuitInfo::GetManagers
// strings:
//   ""CSuitInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSuitInfo::GetManagers
   strings:
     ""CSuitInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSuitInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be944 & 1) == 0) {
    DAT_123be944 = DAT_123be944 | 1;
    _DAT_123be91c = &DAT_123be90c;
    DAT_123be920 = &DAT_123be90c;
    DAT_123be90c = 0;
    FUN_100d83d0("CSuitInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fe10);
  }
  return DAT_123be908;
}



