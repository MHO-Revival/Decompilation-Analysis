// ===== class CMessageParmDescInfo  (1 recovered methods) =====

/* --- CMessageParmDescInfo::GetManagers @ 1024f360 --- */
// [RE-AUTO c3]
// id: CMessageParmDescInfo::GetManagers
// strings:
//   ""CMessageParmDescInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMessageParmDescInfo::GetManagers
   strings:
     ""CMessageParmDescInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMessageParmDescInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bdb4c & 1) == 0) {
    DAT_123bdb4c = DAT_123bdb4c | 1;
    _DAT_123bdaa8 = &DAT_123bda98;
    DAT_123bdaac = &DAT_123bda98;
    DAT_123bda98 = 0;
    FUN_100d83d0("CMessageParmDescInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6e390);
  }
  return DAT_123bda94;
}



