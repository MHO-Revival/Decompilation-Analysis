// ===== class CAttributeInfo  (1 recovered methods) =====

/* --- CAttributeInfo::GetManagers @ 1046c700 --- */
// [RE-AUTO c3]
// id: CAttributeInfo::GetManagers
// strings:
//   ""CAttributeInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAttributeInfo::GetManagers
   strings:
     ""CAttributeInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAttributeInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bdd9c & 1) == 0) {
    DAT_123bdd9c = DAT_123bdd9c | 1;
    _DAT_123bdd50 = &DAT_123bdd40;
    DAT_123bdd54 = &DAT_123bdd40;
    DAT_123bdd40 = 0;
    FUN_100d83d0("CAttributeInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10470af0();
    FUN_11a8911f(&LAB_11c6e6c0);
  }
  return DAT_123bdd3c;
}



