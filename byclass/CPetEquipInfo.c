// ===== class CPetEquipInfo  (1 recovered methods) =====

/* --- CPetEquipInfo::GetManagers @ 107cb070 --- */
// [RE-AUTO c3]
// id: CPetEquipInfo::GetManagers
// strings:
//   ""CPetEquipInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetEquipInfo::GetManagers
   strings:
     ""CPetEquipInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPetEquipInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123becd4 & 1) == 0) {
    DAT_123becd4 = DAT_123becd4 | 1;
    _DAT_123becec = &DAT_123becdc;
    DAT_123becf0 = &DAT_123becdc;
    DAT_123becdc = 0;
    FUN_100d83d0("CPetEquipInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70670);
  }
  return DAT_123becd8;
}



