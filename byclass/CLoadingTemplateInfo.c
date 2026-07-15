// ===== class CLoadingTemplateInfo  (1 recovered methods) =====

/* --- CLoadingTemplateInfo::GetManagers @ 10962340 --- */
// [RE-AUTO c3]
// id: CLoadingTemplateInfo::GetManagers
// strings:
//   ""CLoadingTemplateInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLoadingTemplateInfo::GetManagers
   strings:
     ""CLoadingTemplateInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLoadingTemplateInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0374 & 1) == 0) {
    DAT_123c0374 = DAT_123c0374 | 1;
    _DAT_123c038c = &DAT_123c037c;
    DAT_123c0390 = &DAT_123c037c;
    DAT_123c037c = 0;
    FUN_100d83d0("CLoadingTemplateInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79620);
  }
  return DAT_123c0378;
}



