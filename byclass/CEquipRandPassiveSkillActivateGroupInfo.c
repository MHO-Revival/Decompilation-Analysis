// ===== class CEquipRandPassiveSkillActivateGroupInfo  (3 recovered methods) =====

/* --- CEquipRandPassiveSkillActivateGroupInfo::GetManagers @ 11636340 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers"" */

undefined *
CEquipRandPassiveSkillActivateGroupInfo__GetManagers
          (undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d365f8;
  if (param_3 == 0) {
    if ((DAT_122e04b0 & 1) == 0) {
      DAT_122e04b0 = DAT_122e04b0 | 1;
      FUN_102500e0("CEquipRandPassiveSkillActivateGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca65f0);
    }
    if ((undefined *)*DAT_122e0494 != (undefined *)0x0) {
      return (undefined *)*DAT_122e0494;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e0630 & 1) == 0) {
      DAT_122e0630 = DAT_122e0630 | 1;
      FUN_11637370();
      FUN_11a8911f(&LAB_11ca6440);
    }
    puVar1 = &DAT_122e05f8;
  }
  return puVar1;
}



/* --- CEquipRandPassiveSkillActivateGroupInfo::GetManagers_11639ee0 @ 11639ee0 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers"" */

undefined4 CEquipRandPassiveSkillActivateGroupInfo__GetManagers_11639ee0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e04b0 & 1) == 0) {
      DAT_122e04b0 = DAT_122e04b0 | 1;
      FUN_102500e0("CEquipRandPassiveSkillActivateGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca65f0);
    }
    return *DAT_122e0494;
  }
  return 0;
}



/* --- CEquipRandPassiveSkillActivateGroupInfo::GetManagers_11865260 @ 11865260 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CEquipRandPassiveSkillActivateGroupInfo""
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""CEquipPassiveSkillGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CEquipRandPassiveSkillActivateGroupInfo""
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""CEquipPassiveSkillGroupInfo"" */

void __fastcall CEquipRandPassiveSkillActivateGroupInfo__GetManagers_11865260(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    do {
      local_8 = &PTR_FUN_11d365f8;
      if ((DAT_122e04b0 & 1) == 0) {
        DAT_122e04b0 = DAT_122e04b0 | 1;
        _DAT_122e04a8 = &DAT_122e0498;
        DAT_122e04ac = &DAT_122e0498;
        DAT_122e0498 = 0;
        FUN_100d9260("CEquipRandPassiveSkillActivateGroupInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_122e0494 = (int *)FUN_100dfd90(DAT_122e04ac);
        if (DAT_122e0494 == (int *)0x0) {
          DAT_122e0494 = (int *)FUN_100dde50(4);
          *DAT_122e0494 = 0;
          FUN_100dfdc0(DAT_122e04ac,DAT_122e0494);
        }
        FUN_11a8911f(&LAB_11ca65f0);
      }
      if (((*DAT_122e0494 == 0) &&
          (iVar1 = FUN_11679e10(&local_8,"CEquipRandPassiveSkillActivateGroupInfo",0), iVar1 == 0))
         && ((DAT_122e0630 & 1) == 0)) {
        DAT_122e05fc = 0;
        DAT_122e060c = 0;
        uRam122e0610 = 0;
        _DAT_122e0614 = 0;
        DAT_122e0618 = 0;
        DAT_122e0630 = DAT_122e0630 | 1;
        DAT_122e0600 = 0;
        _DAT_122e0604 = 0;
        _DAT_122e0608 = 0;
        _DAT_122e05f8 = &PTR_FUN_11d36660;
        DAT_122e061c = _DAT_11de9ae0;
        DAT_122e0620 = _UNK_11de9ae4;
        uRam122e0624 = _UNK_11de9ae8;
        DAT_122e0628 = _UNK_11de9aec;
        DAT_122e062c = 1;
        FUN_11a8911f(&LAB_11cadd60);
      }
      local_8 = &PTR_FUN_11dbffc8;
      if ((DAT_123be514 & 1) == 0) {
        DAT_123be514 = DAT_123be514 | 1;
        _DAT_123be52c = &DAT_123be51c;
        DAT_123be530 = &DAT_123be51c;
        DAT_123be51c = 0;
        FUN_100d9260("CEquipPassiveSkillGroupInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be518 = (int *)FUN_100dfd90(DAT_123be530);
        if (DAT_123be518 == (int *)0x0) {
          DAT_123be518 = (int *)FUN_100dde50(4);
          *DAT_123be518 = 0;
          FUN_100dfdc0(DAT_123be530,DAT_123be518);
        }
        FUN_11a8911f(&LAB_11c6f650);
      }
      if (((*DAT_123be518 == 0) &&
          (iVar1 = FUN_11679e10(&local_8,"CEquipPassiveSkillGroupInfo",0), iVar1 == 0)) &&
         ((DAT_123be440 & 1) == 0)) {
        DAT_123be448 = 0;
        DAT_123be458 = 0;
        DAT_123be45c = 0;
        _DAT_123be460 = 0;
        DAT_123be464 = 0;
        DAT_123be440 = DAT_123be440 | 1;
        DAT_123be44c = 0;
        _DAT_123be450 = 0;
        _DAT_123be454 = 0;
        DAT_123be444 = &PTR_FUN_11dc0070;
        DAT_123be468 = _DAT_11de9ae0;
        DAT_123be46c = _UNK_11de9ae4;
        uRam123be470 = _UNK_11de9ae8;
        DAT_123be474 = _UNK_11de9aec;
        DAT_123be478 = 1;
        FUN_11a8911f(&LAB_11cadd00);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x1c));
  }
  return;
}



