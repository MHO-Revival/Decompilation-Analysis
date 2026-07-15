// ===== class CGuildTaskInfo  (6 recovered methods) =====

/* --- CGuildTaskInfo::GetManagers @ 114a1aa0 --- */
// [RE-AUTO c3]
// id: CGuildTaskInfo::GetManagers
// strings:
//   ""CGuildTaskInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo::GetManagers"" */

undefined * CGuildTaskInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d29ee8;
  if (param_3 == 0) {
    if ((DAT_122de4e0 & 1) == 0) {
      DAT_122de4e0 = DAT_122de4e0 | 1;
      FUN_102500e0("CGuildTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e7c0);
    }
    if ((undefined *)*DAT_122de4c4 != (undefined *)0x0) {
      return (undefined *)*DAT_122de4c4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de524 & 1) == 0) {
      DAT_122de524 = DAT_122de524 | 1;
      FUN_114a2ec0();
      FUN_11a8911f(&LAB_11c9e700);
    }
    puVar1 = &DAT_122de4ec;
  }
  return puVar1;
}



/* --- CGuildTaskInfo::GetManagers_114a8db0 @ 114a8db0 --- */
// [RE-AUTO c3]
// id: CGuildTaskInfo::GetManagers
// strings:
//   ""CGuildTaskInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo::GetManagers"" */

undefined4 CGuildTaskInfo__GetManagers_114a8db0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de4e0 & 1) == 0) {
      DAT_122de4e0 = DAT_122de4e0 | 1;
      FUN_102500e0("CGuildTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e7c0);
    }
    return *DAT_122de4c4;
  }
  return 0;
}



/* --- CGuildTaskInfo::GetManagers_114a97b0 @ 114a97b0 --- */
// [RE-AUTO c3]
// id: CGuildTaskInfo::GetManagers
// strings:
//   ""CGuildTaskInfo::GetManagers""
//   ""CGuildTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo::GetManagers""
     ""CGuildTaskInfo"" */

void CGuildTaskInfo__GetManagers_114a97b0(undefined **param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_c;
  undefined **local_8;
  
  local_c = 0x400;
  piVar6 = &local_c;
  if (*(int *)((int)param_1 + 0xba5) < 0x400) {
    piVar6 = (int *)((int)param_1 + 0xba5);
  }
  local_c = *piVar6;
  if (0 < local_c) {
    iVar8 = (int)param_1 + 0xbab;
    do {
      iVar7 = (int)*(short *)(iVar8 + -2);
      local_8 = &PTR_FUN_11d29ee8;
      if ((DAT_122de4e0 & 1) == 0) {
        DAT_122de4e0 = DAT_122de4e0 | 1;
        FUN_102500e0("CGuildTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9e7c0);
      }
      puVar4 = (undefined *)*DAT_122de4c4;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)FUN_11679e10(&local_8,"CGuildTaskInfo",0);
        if (puVar4 == (undefined *)0x0) {
          if ((DAT_122de524 & 1) == 0) {
            DAT_122de4f0 = 0;
            DAT_122de500 = 0;
            DAT_122de504 = 0;
            _DAT_122de508 = 0;
            DAT_122de50c = 0;
            DAT_122de524 = DAT_122de524 | 1;
            _DAT_122de4ec = &PTR_FUN_11d29f1c;
            DAT_122de510 = _DAT_11de9ae0;
            DAT_122de514 = _UNK_11de9ae4;
            uRam122de518 = _UNK_11de9ae8;
            DAT_122de51c = _UNK_11de9aec;
            DAT_122de520 = 1;
            DAT_122de4f4 = puVar4;
            _DAT_122de4f8 = puVar4;
            _DAT_122de4fc = puVar4;
            FUN_11a8911f(&LAB_11c9e700);
          }
          puVar4 = &DAT_122de4ec;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar7 != -1) &&
         ((((iVar7 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar5 = *(int *)(puVar4 + 0x28), iVar5 != 0)) &&
          ((iVar7 = iVar7 - *(int *)(puVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar7 / iVar5) * 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar7 % iVar5) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0xc);
        }
      }
      iVar8 = iVar8 + 7;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
  }
  ppuVar2 = param_1;
  FUN_115bed10(0,0x640);
  FUN_115bee10((int)ppuVar2 + 0xadd,*(undefined4 *)((int)ppuVar2 + 0xad9));
  iVar8 = 0;
  do {
    cVar3 = FUN_115bedf0(iVar8);
    if (cVar3 != '\0') {
      param_1 = &PTR_FUN_11d29ee8;
      if ((DAT_122de4e0 & 1) == 0) {
        DAT_122de4e0 = DAT_122de4e0 | 1;
        FUN_102500e0("CGuildTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9e7c0);
      }
      puVar4 = (undefined *)*DAT_122de4c4;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)FUN_11679e10(&param_1,"CGuildTaskInfo",0);
        if (puVar4 == (undefined *)0x0) {
          if ((DAT_122de524 & 1) == 0) {
            DAT_122de4f0 = 0;
            DAT_122de500 = 0;
            DAT_122de504 = 0;
            _DAT_122de508 = 0;
            DAT_122de50c = 0;
            DAT_122de524 = DAT_122de524 | 1;
            _DAT_122de4ec = &PTR_FUN_11d29f1c;
            DAT_122de510 = _DAT_11de9ae0;
            DAT_122de514 = _UNK_11de9ae4;
            uRam122de518 = _UNK_11de9ae8;
            DAT_122de51c = _UNK_11de9aec;
            DAT_122de520 = 1;
            DAT_122de4f4 = puVar4;
            _DAT_122de4f8 = puVar4;
            _DAT_122de4fc = puVar4;
            FUN_11a8911f(&LAB_11c9e700);
          }
          puVar4 = &DAT_122de4ec;
        }
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((((iVar8 != -1) && ((iVar8 != 0 || (*(int *)(puVar4 + 0x30) == 0)))) &&
          (iVar7 = *(int *)(puVar4 + 0x28), iVar7 != 0)) &&
         ((iVar5 = iVar8 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar7) * 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % iVar7) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0xc);
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (0x63f < iVar8) {
      FUN_115bed60();
      return;
    }
  } while( true );
}



/* --- CGuildTaskInfo::GetManagers_118a9020 @ 118a9010 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CGuildTaskInfo__GetManagers_118a9020(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar1 = (int *)CGuildTaskInfo__GetManagers(0,"CGuildTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      ppuStack_c = &PTR_FUN_11d29ee8;
      if ((DAT_122de4e0 & 1) == 0) {
        DAT_122de4e0 = DAT_122de4e0 | 1;
        FUN_102500e0("CGuildTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9e7c0);
      }
      puVar3 = (undefined *)*DAT_122de4c4;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&ppuStack_c,"CGuildTaskInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_122de524 & 1) == 0) {
            DAT_122de4f0 = 0;
            DAT_122de500 = 0;
            DAT_122de504 = 0;
            _DAT_122de508 = 0;
            DAT_122de50c = 0;
            DAT_122de524 = DAT_122de524 | 1;
            _DAT_122de4ec = &PTR_FUN_11d29f1c;
            DAT_122de510 = _DAT_11de9ae0;
            DAT_122de514 = _UNK_11de9ae4;
            uRam122de518 = _UNK_11de9ae8;
            DAT_122de51c = _UNK_11de9aec;
            DAT_122de520 = 1;
            DAT_122de4f4 = puVar3;
            _DAT_122de4f8 = puVar3;
            _DAT_122de4fc = puVar3;
            FUN_11a8911f(&LAB_11caf150);
          }
          puVar3 = &DAT_122de4ec;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        ppuStack_c = (undefined **)0x0;
      }
      else {
        ppuStack_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((ppuStack_c != (undefined **)0x0) && (ppuStack_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_118a9400(piVar1,&ppuStack_c,&uStack_5,1,1);
        }
        else {
          *piVar1 = (int)ppuStack_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildTaskInfo::GetManagers_118a9020 @ 118a9020 --- */
// [RE-AUTO c3]
// id: CGuildTaskInfo::GetManagers
// calls: CGuildTaskInfo::GetManagers
// strings:
//   ""CGuildTaskInfo""
//   ""CGuildTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskInfo::GetManagers
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo""
     ""CGuildTaskInfo::GetManagers"" */

void __fastcall CGuildTaskInfo__GetManagers_118a9020(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CGuildTaskInfo__GetManagers(0,"CGuildTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d29ee8;
      if ((DAT_122de4e0 & 1) == 0) {
        DAT_122de4e0 = DAT_122de4e0 | 1;
        FUN_102500e0("CGuildTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9e7c0);
      }
      puVar3 = (undefined *)*DAT_122de4c4;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CGuildTaskInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_122de524 & 1) == 0) {
            DAT_122de4f0 = 0;
            DAT_122de500 = 0;
            DAT_122de504 = 0;
            _DAT_122de508 = 0;
            DAT_122de50c = 0;
            DAT_122de524 = DAT_122de524 | 1;
            _DAT_122de4ec = &PTR_FUN_11d29f1c;
            DAT_122de510 = _DAT_11de9ae0;
            DAT_122de514 = _UNK_11de9ae4;
            uRam122de518 = _UNK_11de9ae8;
            DAT_122de51c = _UNK_11de9aec;
            DAT_122de520 = 1;
            DAT_122de4f4 = puVar3;
            _DAT_122de4f8 = puVar3;
            _DAT_122de4fc = puVar3;
            FUN_11a8911f(&LAB_11caf150);
          }
          puVar3 = &DAT_122de4ec;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_118a9400(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildTaskInfo::GetManagers_1190c650 @ 1190c650 --- */
// [RE-AUTO c3]
// id: CGuildTaskInfo::GetManagers
// calls: CGuildTaskInfo::GetManagers
// strings:
//   ""CGuildTaskInfo""
//   ""CGuildTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskInfo::GetManagers
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo""
     ""CGuildTaskInfo::GetManagers"" */

void CGuildTaskInfo__GetManagers_1190c650(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTaskInfo__GetManagers(0,"CGuildTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d29ee8;
      if ((DAT_122de4e0 & 1) == 0) {
        DAT_122de4e0 = DAT_122de4e0 | 1;
        FUN_102500e0("CGuildTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9e7c0);
      }
      if (((*DAT_122de4c4 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGuildTaskInfo",0), iVar3 == 0))
         && ((DAT_122de524 & 1) == 0)) {
        DAT_122de4f0 = 0;
        DAT_122de500 = 0;
        DAT_122de504 = 0;
        _DAT_122de508 = 0;
        DAT_122de50c = 0;
        DAT_122de524 = DAT_122de524 | 1;
        _DAT_122de4ec = &PTR_FUN_11d29f1c;
        DAT_122de510 = _DAT_11de9ae0;
        DAT_122de514 = _UNK_11de9ae4;
        uRam122de518 = _UNK_11de9ae8;
        DAT_122de51c = _UNK_11de9aec;
        DAT_122de520 = 1;
        DAT_122de4f4 = iVar3;
        _DAT_122de4f8 = iVar3;
        _DAT_122de4fc = iVar3;
        FUN_11a8911f(&LAB_11cb1350);
      }
      local_8 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a02fc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



