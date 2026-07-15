// ===== class CFarmAdvPetInfo  (1 recovered methods) =====

/* --- CFarmAdvPetInfo::GetManagers @ 108e1d40 --- */
// [RE-AUTO c3]
// id: CFarmAdvPetInfo::GetManagers
// strings:
//   ""CFarmAdvPetInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFarmAdvPetInfo::GetManagers
   strings:
     ""CFarmAdvPetInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFarmAdvPetInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7f04 & 1) == 0) {
    DAT_123c7f04 = DAT_123c7f04 | 1;
    _DAT_123c7f1c = &DAT_123c7f0c;
    DAT_123c7f20 = &DAT_123c7f0c;
    DAT_123c7f0c = 0;
    FUN_100d83d0("CFarmAdvPetInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76290);
  }
  return DAT_123c7f08;
}



