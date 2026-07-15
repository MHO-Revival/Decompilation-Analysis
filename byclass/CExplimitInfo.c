// ===== class CExplimitInfo  (2 recovered methods) =====

/* --- CExplimitInfo::GetManagers @ 108d1770 --- */
// [RE-AUTO c3]
// id: CExplimitInfo::GetManagers
// strings:
//   ""CExplimitInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CExplimitInfo::GetManagers
   strings:
     ""CExplimitInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CExplimitInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7cd4 & 1) == 0) {
    DAT_123c7cd4 = DAT_123c7cd4 | 1;
    _DAT_123c7cec = &DAT_123c7cdc;
    DAT_123c7cf0 = &DAT_123c7cdc;
    DAT_123c7cdc = 0;
    FUN_100d83d0("CExplimitInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75be0);
  }
  return DAT_123c7cd8;
}



/* --- CExplimitInfo::GetManagers_1139db00 @ 1139db00 --- */
// [RE-AUTO c3]
// id: CExplimitInfo::GetManagers
// calls: CPlayerLevelUpInfo::GetManagers
// strings:
//   ""CPlayerLevelUpInfo""
//   ""CExplimitInfo::GetManagers""
//   ""CExplimitInfo""

/* [RE-AUTO c3]
   id: CExplimitInfo::GetManagers
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo""
     ""CExplimitInfo::GetManagers""
     ""CExplimitInfo"" */

int CExplimitInfo__GetManagers_1139db00(undefined **param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar3 = CPlayerLevelUpInfo__GetManagers(0,"CPlayerLevelUpInfo",0);
  local_c = param_2;
  local_8 = (int)param_1;
  if (((param_1 != (undefined **)0xffffffff) &&
      (((param_1 != (undefined **)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar7 = *(int *)(iVar3 + 0x28), iVar7 != 0)))) &&
     ((iVar4 = (int)param_1 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))
      ))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar7) * 4);
    if ((iVar3 != 0) &&
       ((iVar3 = *(int *)(iVar3 + (iVar4 % iVar7) * 4), iVar3 != 0 &&
        (param_2 < *(int *)(iVar3 + 0x14))))) {
      iVar3 = FUN_1046c7c0(1);
      iVar7 = param_3;
      iVar3 = *(int *)(iVar3 + 0xd0);
      if (local_8 < iVar3) {
        param_3 = 0;
        while( true ) {
          iVar4 = local_8;
          param_1 = &PTR_FUN_11dd6710;
          if ((DAT_123c7cd4 & 1) == 0) {
            DAT_123c7cd4 = DAT_123c7cd4 | 1;
            FUN_102500e0("CExplimitInfo::GetManagers");
            FUN_11a8911f(&LAB_11c75be0);
          }
          puVar5 = (undefined *)*DAT_123c7cd8;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&param_1,"CExplimitInfo",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_123c7d90 & 1) == 0) {
              DAT_123c7d90 = DAT_123c7d90 | 1;
              FUN_108df7e0();
              FUN_11a8911f(&LAB_11c9b660);
            }
            puVar5 = &DAT_123c7d94;
          }
          param_1 = &PTR_FUN_11da54a8;
          if ((iVar4 == -1) ||
             ((((iVar4 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
               (iVar1 = *(int *)(puVar5 + 0x28), iVar1 == 0)) ||
              ((iVar6 = iVar4 - *(int *)(puVar5 + 0x30), iVar6 < 0 ||
               (*(int *)(puVar5 + 0x24) <= iVar6)))))) {
            return -1;
          }
          iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar1) * 4);
          if (iVar2 == 0) {
            return -1;
          }
          iVar1 = *(int *)(iVar2 + (iVar6 % iVar1) * 4);
          if (iVar1 == 0) break;
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar7 <= iVar1) {
            return param_3;
          }
          iVar4 = FUN_1139dcb0(iVar4,param_2,iVar1,&local_8,&local_c);
          if (iVar4 != 0) {
            return -1;
          }
          if (iVar3 <= local_8) {
            return param_3;
          }
          iVar7 = iVar7 - iVar1;
          param_2 = local_c;
          param_3 = param_3 + 1;
        }
        return -1;
      }
    }
  }
  return -1;
}



