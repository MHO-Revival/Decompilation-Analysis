// ===== class CPlayerLvRewardMiniGroupInfo  (3 recovered methods) =====

/* --- CPlayerLvRewardMiniGroupInfo::GetManagers @ 11a5ab30 --- */
// [RE-AUTO c3]
// id: CPlayerLvRewardMiniGroupInfo::GetManagers
// strings:
//   ""CPlayerLvRewardMiniGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLvRewardMiniGroupInfo::GetManagers
   strings:
     ""CPlayerLvRewardMiniGroupInfo::GetManagers"" */

undefined *
CPlayerLvRewardMiniGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d72074;
  if (param_3 == 0) {
    if ((DAT_123a1900 & 1) == 0) {
      DAT_123a1900 = DAT_123a1900 | 1;
      FUN_102500e0("CPlayerLvRewardMiniGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3930);
    }
    if ((undefined *)*DAT_123a18e4 != (undefined *)0x0) {
      return (undefined *)*DAT_123a18e4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123abec0 & 1) == 0) {
      DAT_123abec0 = DAT_123abec0 | 1;
      FUN_11a5ac90();
      FUN_11a8911f(&LAB_11cb72d0);
    }
    puVar1 = &DAT_123abe88;
  }
  return puVar1;
}



/* --- CPlayerLvRewardMiniGroupInfo::GetManagers_11a5b180 @ 11a5b180 --- */
// [RE-AUTO c3]
// id: CPlayerLvRewardMiniGroupInfo::GetManagers
// strings:
//   ""CPlayerLvRewardMiniGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLvRewardMiniGroupInfo::GetManagers
   strings:
     ""CPlayerLvRewardMiniGroupInfo::GetManagers"" */

undefined4 CPlayerLvRewardMiniGroupInfo__GetManagers_11a5b180(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a1900 & 1) == 0) {
      DAT_123a1900 = DAT_123a1900 | 1;
      FUN_102500e0("CPlayerLvRewardMiniGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3930);
    }
    return *DAT_123a18e4;
  }
  return 0;
}



/* --- CPlayerLvRewardMiniGroupInfo::GetManagers_11a5b2f0 @ 11a5b2f0 --- */
// [RE-AUTO c3]
// id: CPlayerLvRewardMiniGroupInfo::GetManagers
// strings:
//   ""CPlayerLvRewardMiniGroupInfo::GetManagers""
//   ""CPlayerLvRewardMiniGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPlayerLvRewardMiniGroupInfo::GetManagers
   strings:
     ""CPlayerLvRewardMiniGroupInfo::GetManagers""
     ""CPlayerLvRewardMiniGroupInfo"" */

void __thiscall CPlayerLvRewardMiniGroupInfo__GetManagers_11a5b2f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3 != 0) {
    do {
      local_c = &PTR_FUN_11d72074;
      iVar4 = *(int *)(*(int *)(param_1 + 0x20) + local_8 * 8);
      if ((DAT_123a1900 & 1) == 0) {
        DAT_123a1900 = DAT_123a1900 | 1;
        FUN_102500e0("CPlayerLvRewardMiniGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3930);
      }
      puVar3 = (undefined *)*DAT_123a18e4;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPlayerLvRewardMiniGroupInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123abec0 & 1) == 0) {
          DAT_123abe8c = 0;
          DAT_123abe9c = 0;
          uRam123abea0 = 0;
          _DAT_123abea4 = 0;
          DAT_123abea8 = 0;
          DAT_123abec0 = DAT_123abec0 | 1;
          _DAT_123abe88 = &PTR_FUN_11d65518;
          DAT_123abeac = _DAT_11de9ae0;
          DAT_123abeb0 = _UNK_11de9ae4;
          uRam123abeb4 = _UNK_11de9ae8;
          DAT_123abeb8 = _UNK_11de9aec;
          DAT_123abebc = 1;
          DAT_123abe90 = puVar3;
          _DAT_123abe94 = puVar3;
          _DAT_123abe98 = puVar3;
          FUN_11a8911f(&LAB_11cb72d0);
        }
        puVar3 = &DAT_123abe88;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar4 != -1) &&
         ((((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
          ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar2 + (iVar4 % iVar1) * 4) != 0 &&
            (iVar4 = 0, 0 < *(int *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 8))))) {
          do {
            FUN_11a5b460(param_2);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 8));
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3));
  }
  return;
}



