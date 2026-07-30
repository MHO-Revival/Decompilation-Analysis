
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelSuperSequence::GetManagers
   strings:
     ""CLevelSuperSequence::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelSuperSequence__GetManagers(undefined4 param_1)

{
  if ((DAT_123c9154 & 1) == 0) {
    DAT_123c9154 = DAT_123c9154 | 1;
    _DAT_123c916c = &DAT_123c915c;
    DAT_123c9170 = &DAT_123c915c;
    DAT_123c915c = 0;
    FUN_100d83d0("CLevelSuperSequence::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7d180);
  }
  return DAT_123c9158;
}

