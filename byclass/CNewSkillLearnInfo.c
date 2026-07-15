// ===== class CNewSkillLearnInfo  (3 recovered methods) =====

/* --- CNewSkillLearnInfo::GetManagers @ 118fe930 --- */
// [RE-AUTO c3]
// id: CNewSkillLearnInfo::GetManagers
// strings:
//   ""CNewSkillLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNewSkillLearnInfo::GetManagers
   strings:
     ""CNewSkillLearnInfo::GetManagers"" */

undefined * CNewSkillLearnInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5d090;
  if (param_3 == 0) {
    if ((DAT_1239e658 & 1) == 0) {
      DAT_1239e658 = DAT_1239e658 | 1;
      FUN_102500e0("CNewSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0cc0);
    }
    if ((undefined *)*DAT_1239e63c != (undefined *)0x0) {
      return (undefined *)*DAT_1239e63c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239e6c8 & 1) == 0) {
      DAT_1239e6c8 = DAT_1239e6c8 | 1;
      FUN_118fec40();
      FUN_11a8911f(&LAB_11cb0c60);
    }
    puVar1 = &DAT_1239e690;
  }
  return puVar1;
}



/* --- CNewSkillLearnInfo::GetManagers_118ff570 @ 118ff570 --- */
// [RE-AUTO c3]
// id: CNewSkillLearnInfo::GetManagers
// strings:
//   ""CNewSkillLearnInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNewSkillLearnInfo::GetManagers
   strings:
     ""CNewSkillLearnInfo::GetManagers"" */

undefined4 CNewSkillLearnInfo__GetManagers_118ff570(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239e658 & 1) == 0) {
      DAT_1239e658 = DAT_1239e658 | 1;
      FUN_102500e0("CNewSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0cc0);
    }
    return *DAT_1239e63c;
  }
  return 0;
}



/* --- CNewSkillLearnInfo::GetManagers_118ff800 @ 118ff800 --- */
// [RE-AUTO c3]
// id: CNewSkillLearnInfo::GetManagers
// calls: CNewSkillLearnInfo::GetManagers
// strings:
//   ""CNewSkillLearnInfo""
//   ""CNewSkillLearnInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewSkillLearnInfo::GetManagers
   calls: CNewSkillLearnInfo::GetManagers
   strings:
     ""CNewSkillLearnInfo""
     ""CNewSkillLearnInfo::GetManagers"" */

void CNewSkillLearnInfo__GetManagers_118ff800(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CNewSkillLearnInfo__GetManagers(0,"CNewSkillLearnInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d5d090;
      if ((DAT_1239e658 & 1) == 0) {
        DAT_1239e658 = DAT_1239e658 | 1;
        FUN_102500e0("CNewSkillLearnInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb0cc0);
      }
      puVar4 = (undefined *)*DAT_1239e63c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CNewSkillLearnInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1239e6c8 & 1) == 0) {
          DAT_1239e694 = 0;
          DAT_1239e6a4 = 0;
          DAT_1239e6a8 = 0;
          _DAT_1239e6ac = 0;
          uRam1239e6b0 = 0;
          DAT_1239e6c8 = DAT_1239e6c8 | 1;
          _DAT_1239e690 = &PTR_FUN_11d5d0cc;
          _DAT_1239e6b4 = _DAT_11de9ae0;
          uRam1239e6b8 = _UNK_11de9ae4;
          uRam1239e6bc = _UNK_11de9ae8;
          uRam1239e6c0 = _UNK_11de9aec;
          DAT_1239e6c4 = 1;
          DAT_1239e698 = puVar4;
          _DAT_1239e69c = puVar4;
          _DAT_1239e6a0 = puVar4;
          FUN_11a8911f(&LAB_11cb0c60);
        }
        puVar4 = &DAT_1239e690;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_119fbfb0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



