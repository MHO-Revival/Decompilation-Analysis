// ===== class CEquipRandPassiveSkillActivateSetInfo  (3 recovered methods) =====

/* --- CEquipRandPassiveSkillActivateSetInfo::GetManagers @ 10856650 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateSetInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipRandPassiveSkillActivateSetInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf7e4 & 1) == 0) {
    DAT_123bf7e4 = DAT_123bf7e4 | 1;
    _DAT_123bf7fc = &DAT_123bf7ec;
    DAT_123bf800 = &DAT_123bf7ec;
    DAT_123bf7ec = 0;
    FUN_100d83d0("CEquipRandPassiveSkillActivateSetInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72f80);
  }
  return DAT_123bf7e8;
}



/* --- CEquipRandPassiveSkillActivateSetInfo::GetManagers_118669d0 @ 118669d0 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateSetInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CEquipRandPassiveSkillActivateSetInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CEquipRandPassiveSkillActivateSetInfo"" */

void __fastcall CEquipRandPassiveSkillActivateSetInfo__GetManagers_118669d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    do {
      local_8 = &PTR_FUN_11dd0490;
      if ((DAT_123bf7e4 & 1) == 0) {
        DAT_123bf7e4 = DAT_123bf7e4 | 1;
        _DAT_123bf7fc = &DAT_123bf7ec;
        DAT_123bf800 = &DAT_123bf7ec;
        DAT_123bf7ec = 0;
        FUN_100d9260("CEquipRandPassiveSkillActivateSetInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bf7e8 = (int *)FUN_100dfd90(DAT_123bf800);
        if (DAT_123bf7e8 == (int *)0x0) {
          DAT_123bf7e8 = (int *)FUN_100dde50(4);
          *DAT_123bf7e8 = 0;
          FUN_100dfdc0(DAT_123bf800,DAT_123bf7e8);
        }
        FUN_11a8911f(&LAB_11c72f80);
      }
      if (((*DAT_123bf7e8 == 0) &&
          (iVar1 = FUN_11679e10(&local_8,"CEquipRandPassiveSkillActivateSetInfo",0), iVar1 == 0)) &&
         ((DAT_123bf564 & 1) == 0)) {
        DAT_123bf56c = 0;
        DAT_123bf57c = 0;
        DAT_123bf580 = 0;
        _DAT_123bf584 = 0;
        DAT_123bf588 = 0;
        DAT_123bf564 = DAT_123bf564 | 1;
        DAT_123bf570 = 0;
        _DAT_123bf574 = 0;
        _DAT_123bf578 = 0;
        _DAT_123bf568 = &PTR_FUN_11dd0628;
        DAT_123bf58c = _DAT_11de9ae0;
        DAT_123bf590 = _UNK_11de9ae4;
        uRam123bf594 = _UNK_11de9ae8;
        DAT_123bf598 = _UNK_11de9aec;
        DAT_123bf59c = 1;
        FUN_11a8911f(&LAB_11caddc0);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x1c));
  }
  return;
}



/* --- CEquipRandPassiveSkillActivateSetInfo::GetManagers_1197d070 @ 1197d070 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillActivateSetInfo""
//   ""CEquipRandPassiveSkillActivateSetInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillActivateSetInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo""
     ""CEquipRandPassiveSkillActivateSetInfo::GetManagers"" */

void CEquipRandPassiveSkillActivateSetInfo__GetManagers_1197d070(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10870cd0(0,"CEquipRandPassiveSkillActivateSetInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd0490;
      if ((DAT_123bf7e4 & 1) == 0) {
        DAT_123bf7e4 = DAT_123bf7e4 | 1;
        FUN_102500e0("CEquipRandPassiveSkillActivateSetInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72f80);
      }
      if (((*DAT_123bf7e8 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CEquipRandPassiveSkillActivateSetInfo",0), iVar3 == 0)) &&
         ((DAT_123bf564 & 1) == 0)) {
        DAT_123bf56c = 0;
        DAT_123bf57c = 0;
        DAT_123bf580 = 0;
        _DAT_123bf584 = 0;
        DAT_123bf588 = 0;
        DAT_123bf564 = DAT_123bf564 | 1;
        _DAT_123bf568 = &PTR_FUN_11dd0628;
        DAT_123bf58c = _DAT_11de9ae0;
        DAT_123bf590 = _UNK_11de9ae4;
        uRam123bf594 = _UNK_11de9ae8;
        DAT_123bf598 = _UNK_11de9aec;
        DAT_123bf59c = 1;
        DAT_123bf570 = iVar3;
        _DAT_123bf574 = iVar3;
        _DAT_123bf578 = iVar3;
        FUN_11a8911f(&LAB_11cb3600);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a520a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



