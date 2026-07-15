// ===== class CLevelEnSubGroupRewardInfo  (2 recovered methods) =====

/* --- CLevelEnSubGroupRewardInfo::GetManagers @ 1095c030 --- */
// [RE-AUTO c3]
// id: CLevelEnSubGroupRewardInfo::GetManagers
// strings:
//   ""CLevelEnSubGroupRewardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnSubGroupRewardInfo::GetManagers
   strings:
     ""CLevelEnSubGroupRewardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelEnSubGroupRewardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c00dc & 1) == 0) {
    DAT_123c00dc = DAT_123c00dc | 1;
    _DAT_123c00f8 = &DAT_123c00e8;
    DAT_123c00fc = &DAT_123c00e8;
    DAT_123c00e8 = 0;
    FUN_100d83d0("CLevelEnSubGroupRewardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c792e0);
  }
  return DAT_123c00e4;
}



/* --- CLevelEnSubGroupRewardInfo::GetManagers_114cfd70 @ 114cfd70 --- */
// [RE-AUTO c3]
// id: CLevelEnSubGroupRewardInfo::GetManagers
// strings:
//   ""CLevelEnSubGroupRewardInfo::GetManagers""
//   ""CLevelEnSubGroupRewardInfo""

/* [RE-AUTO c3]
   id: CLevelEnSubGroupRewardInfo::GetManagers
   strings:
     ""CLevelEnSubGroupRewardInfo::GetManagers""
     ""CLevelEnSubGroupRewardInfo"" */

void __thiscall
CLevelEnSubGroupRewardInfo__GetManagers_114cfd70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) & 0xfffffff8U)) {
    do {
      if (*(char *)(*(int *)(param_1 + 8) + 4 + iVar5 * 8) != '\0') {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar5 * 8);
        local_8 = &PTR_FUN_11ddd42c;
        if ((DAT_123c00dc & 1) == 0) {
          DAT_123c00dc = DAT_123c00dc | 1;
          FUN_102500e0("CLevelEnSubGroupRewardInfo::GetManagers");
          FUN_11a8911f(&LAB_11c792e0);
        }
        puVar2 = (undefined *)*DAT_123c00e4;
        if ((puVar2 == (undefined *)0x0) &&
           (puVar2 = (undefined *)FUN_11679e10(&local_8,"CLevelEnSubGroupRewardInfo",0),
           puVar2 == (undefined *)0x0)) {
          if ((DAT_123c00ac & 1) == 0) {
            DAT_123c00ac = DAT_123c00ac | 1;
            FUN_1095ed20();
            FUN_11a8911f(&LAB_11c9f0a0);
          }
          puVar2 = &DAT_123c003c;
        }
        if (((iVar4 != -1) &&
            (((iVar4 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
             (iVar3 = *(int *)(puVar2 + 0x28), iVar3 != 0)))) &&
           ((iVar4 = iVar4 - *(int *)(puVar2 + 0x30), -1 < iVar4 &&
            (iVar4 < *(int *)(puVar2 + 0x24))))) {
          iVar1 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar4 / iVar3) * 4);
          if ((iVar1 != 0) && (iVar4 = *(int *)(iVar1 + (iVar4 % iVar3) * 4), iVar4 != 0)) {
            if (*(int *)(iVar4 + 0x14) == 1) {
              iVar3 = *(int *)(iVar4 + 0x18);
            }
            else {
              iVar3 = 0;
            }
            *param_2 = *param_2 + iVar3;
            if (*(int *)(iVar4 + 0x14) == 2) {
              iVar4 = *(int *)(iVar4 + 0x18);
            }
            else {
              iVar4 = 0;
            }
            *param_3 = *param_3 + iVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
  }
  return;
}



