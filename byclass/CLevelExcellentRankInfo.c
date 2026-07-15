// ===== class CLevelExcellentRankInfo  (4 recovered methods) =====

/* --- CLevelExcellentRankInfo::GetManagers @ 11294780 --- */
// [RE-AUTO c3]
// id: CLevelExcellentRankInfo::GetManagers
// strings:
//   ""CLevelExcellentRankInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelExcellentRankInfo::GetManagers
   strings:
     ""CLevelExcellentRankInfo::GetManagers"" */

undefined * CLevelExcellentRankInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1cae4;
  if (param_3 == 0) {
    if ((DAT_12040788 & 1) == 0) {
      DAT_12040788 = DAT_12040788 | 1;
      FUN_102500e0("CLevelExcellentRankInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99880);
    }
    if ((undefined *)*DAT_1204076c != (undefined *)0x0) {
      return (undefined *)*DAT_1204076c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040804 & 1) == 0) {
      DAT_12040804 = DAT_12040804 | 1;
      FUN_11295730();
      FUN_11a8911f(&LAB_11c99640);
    }
    puVar1 = &DAT_120407cc;
  }
  return puVar1;
}



/* --- CLevelExcellentRankInfo::GetManagers_1129b6f0 @ 1129b6f0 --- */
// [RE-AUTO c3]
// id: CLevelExcellentRankInfo::GetManagers
// strings:
//   ""CLevelExcellentRankInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelExcellentRankInfo::GetManagers
   strings:
     ""CLevelExcellentRankInfo::GetManagers"" */

undefined4 CLevelExcellentRankInfo__GetManagers_1129b6f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040788 & 1) == 0) {
      DAT_12040788 = DAT_12040788 | 1;
      FUN_102500e0("CLevelExcellentRankInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99880);
    }
    return *DAT_1204076c;
  }
  return 0;
}



/* --- CLevelExcellentRankInfo::GetManagers_114d6fe0 @ 114d6fe0 --- */
// [RE-AUTO c3]
// id: CLevelExcellentRankInfo::GetManagers
// calls: CLevelExcellentRankInfo::GetManagers
// strings:
//   ""CLevelExcellentRankInfo""
//   ""CLevelExcellentRankInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelExcellentRankInfo::GetManagers
   calls: CLevelExcellentRankInfo::GetManagers
   strings:
     ""CLevelExcellentRankInfo""
     ""CLevelExcellentRankInfo::GetManagers"" */

undefined4 __thiscall
CLevelExcellentRankInfo__GetManagers_114d6fe0(int *param_1,undefined **param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  piVar1 = param_1 + 3;
  *piVar1 = *piVar1 + (int)param_2;
  param_1[2] = 0;
  if (*piVar1 < 0) {
    param_1[3] = 0;
  }
  if (1000 < param_1[3]) {
    param_1[3] = 1000;
  }
  piVar1 = (int *)CLevelExcellentRankInfo__GetManagers(0,"CLevelExcellentRankInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      param_2 = &PTR_FUN_11d1cae4;
      if ((DAT_12040788 & 1) == 0) {
        DAT_12040788 = DAT_12040788 | 1;
        FUN_102500e0("CLevelExcellentRankInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99880);
      }
      puVar3 = (undefined *)*DAT_1204076c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&param_2,"CLevelExcellentRankInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_12040804 & 1) == 0) {
          DAT_120407d0 = 0;
          DAT_120407e0 = 0;
          DAT_120407e4 = 0;
          _DAT_120407e8 = 0;
          DAT_120407ec = 0;
          DAT_12040804 = DAT_12040804 | 1;
          _DAT_120407cc = &PTR_FUN_11d1cb2c;
          DAT_120407f0 = _DAT_11de9ae0;
          DAT_120407f4 = _UNK_11de9ae4;
          uRam120407f8 = _UNK_11de9ae8;
          DAT_120407fc = _UNK_11de9aec;
          DAT_12040800 = 1;
          DAT_120407d4 = puVar3;
          _DAT_120407d8 = puVar3;
          _DAT_120407dc = puVar3;
          FUN_11a8911f(&LAB_11c9f4c0);
        }
        puVar3 = &DAT_120407cc;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (iVar4 < 0) {
        return 0;
      }
      if (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4) {
        return 0;
      }
      piVar1 = *(int **)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((piVar1[5] < param_1[3]) && (param_1[3] <= piVar1[6])) {
        iVar2 = (**(code **)(*piVar1 + 0x18))();
        param_1[2] = iVar2;
        (**(code **)(*param_1 + 0x10))();
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}



/* --- CLevelExcellentRankInfo::GetManagers_118ce980 @ 118ce980 --- */
// [RE-AUTO c3]
// id: CLevelExcellentRankInfo::GetManagers
// calls: CLevelExcellentRankInfo::GetManagers
// strings:
//   ""CLevelExcellentRankInfo""
//   ""CLevelExcellentRankInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelExcellentRankInfo::GetManagers
   calls: CLevelExcellentRankInfo::GetManagers
   strings:
     ""CLevelExcellentRankInfo""
     ""CLevelExcellentRankInfo::GetManagers"" */

void CLevelExcellentRankInfo__GetManagers_118ce980(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  piVar2 = (int *)CLevelExcellentRankInfo__GetManagers(0,"CLevelExcellentRankInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d1cae4;
      if ((DAT_12040788 & 1) == 0) {
        DAT_12040788 = DAT_12040788 | 1;
        FUN_102500e0("CLevelExcellentRankInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99880);
      }
      puVar4 = (undefined *)*DAT_1204076c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CLevelExcellentRankInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12040804 & 1) == 0) {
          DAT_120407d0 = 0;
          DAT_120407e0 = 0;
          DAT_120407e4 = 0;
          _DAT_120407e8 = 0;
          DAT_120407ec = 0;
          DAT_12040804 = DAT_12040804 | 1;
          _DAT_120407cc = &PTR_FUN_11d1cb2c;
          DAT_120407f0 = _DAT_11de9ae0;
          DAT_120407f4 = _UNK_11de9ae4;
          uRam120407f8 = _UNK_11de9ae8;
          DAT_120407fc = _UNK_11de9aec;
          DAT_12040800 = 1;
          DAT_120407d4 = puVar4;
          _DAT_120407d8 = puVar4;
          _DAT_120407dc = puVar4;
          FUN_11a8911f(&LAB_11cafeb0);
        }
        puVar4 = &DAT_120407cc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar6 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar6)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(*(int *)(puVar4 + 0x14) + iVar6 * 4);
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))();
      if (iVar5 == 1) {
        piVar2[5] = 0;
      }
      else {
        iVar5 = (**(code **)(*piVar2 + 0x18))();
        local_8 = &PTR_FUN_11d1cae4;
        iVar5 = iVar5 + -1;
        if ((DAT_12040788 & 1) == 0) {
          DAT_12040788 = DAT_12040788 | 1;
          FUN_102500e0("CLevelExcellentRankInfo::GetManagers");
          FUN_11a8911f(&LAB_11c99880);
        }
        puVar4 = (undefined *)*DAT_1204076c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_8,"CLevelExcellentRankInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_12040804 & 1) == 0) {
            DAT_12040804 = DAT_12040804 | 1;
            FUN_11295730();
            FUN_11a8911f(&LAB_11cafeb0);
          }
          puVar4 = &DAT_120407cc;
        }
        if (iVar5 == -1) {
          return;
        }
        if ((iVar5 == 0) && (*(int *)(puVar4 + 0x30) != 0)) {
          return;
        }
        if (*(int *)(puVar4 + 0x28) == 0) {
          return;
        }
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if (iVar5 < 0) {
          return;
        }
        if (*(int *)(puVar4 + 0x24) <= iVar5) {
          return;
        }
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
        if (iVar1 == 0) {
          return;
        }
        iVar5 = *(int *)(iVar1 + (iVar5 % *(int *)(puVar4 + 0x28)) * 4);
        if (iVar5 == 0) {
          return;
        }
        piVar2[5] = *(int *)(iVar5 + 0x18);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



