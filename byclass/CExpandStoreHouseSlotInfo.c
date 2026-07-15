// ===== class CExpandStoreHouseSlotInfo  (1 recovered methods) =====

/* --- CExpandStoreHouseSlotInfo::GetManagers @ 108accd0 --- */
// [RE-AUTO c3]
// id: CExpandStoreHouseSlotInfo::GetManagers
// strings:
//   ""CExpandStoreHouseSlotInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpandStoreHouseSlotInfo::GetManagers
   strings:
     ""CExpandStoreHouseSlotInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CExpandStoreHouseSlotInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7960 & 1) == 0) {
    DAT_123c7960 = DAT_123c7960 | 1;
    _DAT_123c7958 = &DAT_123c7948;
    DAT_123c795c = &DAT_123c7948;
    DAT_123c7948 = 0;
    FUN_100d83d0("CExpandStoreHouseSlotInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74fe0);
  }
  return DAT_123c7944;
}



