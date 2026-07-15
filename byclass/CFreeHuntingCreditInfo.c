// ===== class CFreeHuntingCreditInfo  (1 recovered methods) =====

/* --- CFreeHuntingCreditInfo::GetManagers @ 10923b00 --- */
// [RE-AUTO c3]
// id: CFreeHuntingCreditInfo::GetManagers
// strings:
//   ""CFreeHuntingCreditInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFreeHuntingCreditInfo::GetManagers
   strings:
     ""CFreeHuntingCreditInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFreeHuntingCreditInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c82b0 & 1) == 0) {
    DAT_123c82b0 = DAT_123c82b0 | 1;
    _DAT_123c82c8 = &DAT_123c82b8;
    DAT_123c82cc = &DAT_123c82b8;
    DAT_123c82b8 = 0;
    FUN_100d83d0("CFreeHuntingCreditInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c77b00);
  }
  return DAT_123c82b4;
}



