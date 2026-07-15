// ===== class CExpandInventorySlotInfo  (1 recovered methods) =====

/* --- CExpandInventorySlotInfo::GetManagers @ 108abef0 --- */
// [RE-AUTO c3]
// id: CExpandInventorySlotInfo::GetManagers
// strings:
//   ""CExpandInventorySlotInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExpandInventorySlotInfo::GetManagers
   strings:
     ""CExpandInventorySlotInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CExpandInventorySlotInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c79c4 & 1) == 0) {
    DAT_123c79c4 = DAT_123c79c4 | 1;
    _DAT_123c79bc = &DAT_123c79ac;
    DAT_123c79c0 = &DAT_123c79ac;
    DAT_123c79ac = 0;
    FUN_100d83d0("CExpandInventorySlotInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74f50);
  }
  return DAT_123c79a8;
}



