// ===== class CCurrencyInfo  (1 recovered methods) =====

/* --- CCurrencyInfo::GetManagers @ 1083ebf0 --- */
// [RE-AUTO c3]
// id: CCurrencyInfo::GetManagers
// strings:
//   ""CCurrencyInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCurrencyInfo::GetManagers
   strings:
     ""CCurrencyInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCurrencyInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf458 & 1) == 0) {
    DAT_123bf458 = DAT_123bf458 | 1;
    _DAT_123bf470 = &DAT_123bf460;
    DAT_123bf474 = &DAT_123bf460;
    DAT_123bf460 = 0;
    FUN_100d83d0("CCurrencyInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c725e0);
  }
  return DAT_123bf45c;
}



