// ===== class CSkillInfo  (3 recovered methods) =====

/* --- CSkillInfo::GetManagers @ 116cc170 --- */
// [RE-AUTO c3]
// id: CSkillInfo::GetManagers
// strings:
//   ""CSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo::GetManagers"" */

undefined * CSkillInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3f7e8;
  if (param_3 == 0) {
    if ((DAT_1238cc54 & 1) == 0) {
      DAT_1238cc54 = DAT_1238cc54 | 1;
      FUN_102500e0("CSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7eb0);
    }
    if ((undefined *)*DAT_1238cc38 != (undefined *)0x0) {
      return (undefined *)*DAT_1238cc38;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238d004 & 1) == 0) {
      DAT_1238d004 = DAT_1238d004 | 1;
      FUN_116cc600();
      FUN_11a8911f(&LAB_11ca7d90);
    }
    puVar1 = &DAT_1238cfd0;
  }
  return puVar1;
}



/* --- CSkillInfo::GetManagers_116cd540 @ 116cd540 --- */
// [RE-AUTO c3]
// id: CSkillInfo::GetManagers
// strings:
//   ""CSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo::GetManagers"" */

undefined4 CSkillInfo__GetManagers_116cd540(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238cc54 & 1) == 0) {
      DAT_1238cc54 = DAT_1238cc54 | 1;
      FUN_102500e0("CSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7eb0);
    }
    return *DAT_1238cc38;
  }
  return 0;
}



/* --- CSkillInfo::GetManagers_116cffa0 @ 116cffa0 --- */
// [RE-AUTO c3]
// id: CSkillInfo::GetManagers
// calls: CSkillInfo::GetManagers
// strings:
//   ""CSkillInfo""
//   ""CSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSkillInfo::GetManagers
   calls: CSkillInfo::GetManagers
   strings:
     ""CSkillInfo""
     ""CSkillInfo::GetManagers"" */

int CSkillInfo__GetManagers_116cffa0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CSkillInfo__GetManagers(0,"CSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d3f7e8;
      if ((DAT_1238cc54 & 1) == 0) {
        DAT_1238cc54 = DAT_1238cc54 | 1;
        FUN_102500e0("CSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca7eb0);
      }
      if (((*DAT_1238cc38 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSkillInfo",0), iVar3 == 0)) &&
         ((DAT_1238d004 & 1) == 0)) {
        DAT_1238d004 = DAT_1238d004 | 1;
        DAT_1238cfd4 = 0;
        DAT_1238cfd8 = 0;
        _DAT_1238cfdc = 0;
        _DAT_1238cfe0 = 0;
        _DAT_1238cfd0 = &PTR_FUN_11d3f854;
        DAT_1238cfe4 = 0;
        _DAT_1238cfe8 = 0;
        _DAT_1238cfec = 0;
        DAT_1238cff0 = 1;
        _DAT_1238cff4 = _DAT_11d3fe60;
        uRam1238cff8 = _UNK_11d3fe64;
        uRam1238cffc = _UNK_11d3fe68;
        uRam1238d000 = _UNK_11d3fe6c;
        FUN_11a8911f(&LAB_11ca7d90);
      }
      local_8 = &PTR_FUN_11da54a8;
      iVar3 = FUN_116cd1b0(iVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}



