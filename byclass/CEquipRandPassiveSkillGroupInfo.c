// ===== class CEquipRandPassiveSkillGroupInfo  (3 recovered methods) =====

/* --- CEquipRandPassiveSkillGroupInfo::GetManagers @ 116363e0 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillGroupInfo::GetManagers"" */

undefined *
CEquipRandPassiveSkillGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d366ac;
  if (param_3 == 0) {
    if ((DAT_122e04d0 & 1) == 0) {
      DAT_122e04d0 = DAT_122e04d0 | 1;
      FUN_102500e0("CEquipRandPassiveSkillGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6620);
    }
    if ((undefined *)*DAT_122e04b4 != (undefined *)0x0) {
      return (undefined *)*DAT_122e04b4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e066c & 1) == 0) {
      DAT_122e066c = DAT_122e066c | 1;
      FUN_116373d0();
      FUN_11a8911f(&LAB_11ca64a0);
    }
    puVar1 = &DAT_122e0634;
  }
  return puVar1;
}



/* --- CEquipRandPassiveSkillGroupInfo::GetManagers_11639f30 @ 11639f30 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillGroupInfo::GetManagers"" */

undefined4 CEquipRandPassiveSkillGroupInfo__GetManagers_11639f30(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e04d0 & 1) == 0) {
      DAT_122e04d0 = DAT_122e04d0 | 1;
      FUN_102500e0("CEquipRandPassiveSkillGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6620);
    }
    return *DAT_122e04b4;
  }
  return 0;
}



/* --- CEquipRandPassiveSkillGroupInfo::GetManagers_116c52a0 @ 116c52a0 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillGroupInfo""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""CEquipWakeInfo::GetManagers""
//   ""CEquipWakeInfo""
//   ""CEquipRankUpInfo::GetManagers""
//   ""CEquipRankUpInfo""
//   ""CEquipLevelUpInfo::GetManagers""
//   ""CEquipLevelUpInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillGroupInfo""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""CEquipWakeInfo::GetManagers""
     ""CEquipWakeInfo""
     ""CEquipRankUpInfo::GetManagers""
     ""CEquipRankUpInfo""
     ""CEquipLevelUpInfo::GetManagers""
     ""CEquipLevelUpInfo"" */

void __fastcall CEquipRandPassiveSkillGroupInfo__GetManagers_116c52a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined **local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  if (0 < *(int *)(param_1 + 0x20c)) {
    local_c = &PTR_FUN_11d366ac;
    if ((DAT_122e04d0 & 1) == 0) {
      DAT_122e04d0 = DAT_122e04d0 | 1;
      FUN_102500e0("CEquipRandPassiveSkillGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6620);
    }
    if (((*DAT_122e04b4 == 0) &&
        (iVar3 = FUN_11679e10(&local_c,"CEquipRandPassiveSkillGroupInfo",0), iVar3 == 0)) &&
       ((DAT_122e066c & 1) == 0)) {
      DAT_122e0638 = 0;
      DAT_122e0648 = 0;
      uRam122e064c = 0;
      _DAT_122e0650 = 0;
      uRam122e0654 = 0;
      DAT_122e066c = DAT_122e066c | 1;
      DAT_122e063c = 0;
      _DAT_122e0640 = 0;
      _DAT_122e0644 = 0;
      _DAT_122e0634 = &PTR_FUN_11d36704;
      _DAT_122e0658 = _DAT_11de9ae0;
      uRam122e065c = _UNK_11de9ae4;
      uRam122e0660 = _UNK_11de9ae8;
      uRam122e0664 = _UNK_11de9aec;
      DAT_122e0668 = 1;
      FUN_11a8911f(&LAB_11ca7b30);
    }
    local_c = &PTR_FUN_11da54a8;
  }
  local_14 = (undefined **)(*(int *)(param_1 + 0x204) - *(int *)(param_1 + 0x200) >> 3);
  ppuVar6 = (undefined **)0x0;
  if (local_14 != (undefined **)0x0) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x200) + (int)ppuVar6 * 8);
      local_10 = *(int *)(param_1 + 0x200) + (int)ppuVar6 * 8;
      local_c = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar4;
          _DAT_123be2dc = puVar4;
          _DAT_123be2e0 = puVar4;
          FUN_11a8911f(&LAB_11ca79b0);
        }
        puVar4 = &DAT_123be2d0;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((iVar3 != -1) && ((iVar3 != 0 || (*(int *)(puVar4 + 0x30) == 0)))) &&
          (iVar1 = *(int *)(puVar4 + 0x28), param_1 = local_8, iVar1 != 0)) &&
         ((iVar3 = iVar3 - *(int *)(puVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar3 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
          *(int *)(local_10 + 4) = iVar3;
        }
      }
      ppuVar6 = (undefined **)((int)ppuVar6 + 1);
    } while (ppuVar6 < local_14);
  }
  if (*(int *)(param_1 + 0x254) != 0) {
    local_14 = &PTR_FUN_11dd04a8;
    if ((DAT_123bf7a4 & 1) == 0) {
      DAT_123bf7a4 = DAT_123bf7a4 | 1;
      FUN_102500e0("CEquipWakeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c73010);
    }
    if (((*DAT_123bf7a8 == 0) && (iVar3 = FUN_11679e10(&local_14,"CEquipWakeInfo",0), iVar3 == 0))
       && ((DAT_123bf4b4 & 1) == 0)) {
      DAT_123bf4b4 = DAT_123bf4b4 | 1;
      FUN_10873510();
      FUN_11a8911f(&LAB_11ca7bf0);
    }
  }
  iVar3 = 0;
  piVar5 = (int *)(param_1 + 600);
  do {
    if (*piVar5 == 0) break;
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 3);
  if (0 < *(int *)(param_1 + 0x114)) {
    local_14 = &PTR_FUN_11d30c58;
    if ((DAT_122df62c & 1) == 0) {
      DAT_122df62c = DAT_122df62c | 1;
      FUN_102500e0("CEquipRankUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4520);
    }
    if (((*DAT_122df610 == 0) && (iVar3 = FUN_11679e10(&local_14,"CEquipRankUpInfo",0), iVar3 == 0))
       && ((DAT_122df830 & 1) == 0)) {
      DAT_122df7fc = 0;
      DAT_122df80c = 0;
      DAT_122df810 = 0;
      _DAT_122df814 = 0;
      uRam122df818 = 0;
      DAT_122df830 = DAT_122df830 | 1;
      DAT_122df800 = 0;
      _DAT_122df804 = 0;
      _DAT_122df808 = 0;
      _DAT_122df7f8 = &PTR_FUN_11d30c94;
      _DAT_122df81c = _DAT_11de9ae0;
      uRam122df820 = _UNK_11de9ae4;
      uRam122df824 = _UNK_11de9ae8;
      uRam122df828 = _UNK_11de9aec;
      DAT_122df82c = 1;
      FUN_11a8911f(&LAB_11ca7b90);
    }
  }
  if (0 < *(int *)(param_1 + 0x11c)) {
    local_14 = &PTR_FUN_11d3f058;
    if ((DAT_1238c32c & 1) == 0) {
      DAT_1238c32c = DAT_1238c32c | 1;
      FUN_102500e0("CEquipLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7cb0);
    }
    if (((*DAT_1238c310 == 0) && (iVar3 = FUN_11679e10(&local_14,"CEquipLevelUpInfo",0), iVar3 == 0)
        ) && ((DAT_1238cb88 & 1) == 0)) {
      DAT_1238cb54 = 0;
      DAT_1238cb64 = 0;
      DAT_1238cb68 = 0;
      _DAT_1238cb6c = 0;
      uRam1238cb70 = 0;
      DAT_1238cb88 = DAT_1238cb88 | 1;
      DAT_1238cb58 = 0;
      _DAT_1238cb5c = 0;
      _DAT_1238cb60 = 0;
      _DAT_1238cb50 = &PTR_FUN_11d3f094;
      _DAT_1238cb74 = _DAT_11de9ae0;
      uRam1238cb78 = _UNK_11de9ae4;
      uRam1238cb7c = _UNK_11de9ae8;
      uRam1238cb80 = _UNK_11de9aec;
      DAT_1238cb84 = 1;
      FUN_11a8911f(&LAB_11ca7ad0);
    }
  }
  return;
}



