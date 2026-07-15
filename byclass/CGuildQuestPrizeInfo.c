// ===== class CGuildQuestPrizeInfo  (6 recovered methods) =====

/* --- CGuildQuestPrizeInfo::GetManagers @ 111ef510 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo::GetManagers"" */

undefined * CGuildQuestPrizeInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17ce4;
  if (param_3 == 0) {
    if ((DAT_1203f480 & 1) == 0) {
      DAT_1203f480 = DAT_1203f480 | 1;
      FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c977e0);
    }
    if ((undefined *)*DAT_1203f464 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f464;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f574 & 1) == 0) {
      DAT_1203f574 = DAT_1203f574 | 1;
      FUN_111eff00();
      FUN_11a8911f(&LAB_11c97660);
    }
    puVar1 = &DAT_1203f53c;
  }
  return puVar1;
}



/* --- CGuildQuestPrizeInfo::GetManagers_111f1e00 @ 111f1e00 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo::GetManagers""
//   ""CGuildQuestPrizeInfo""

/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo::GetManagers""
     ""CGuildQuestPrizeInfo"" */

void __thiscall CGuildQuestPrizeInfo__GetManagers_111f1e00(int *param_1,undefined **param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int iVar7;
  undefined *local_c;
  int *local_8;
  
  local_8 = param_1;
  cVar4 = (**(code **)(*param_1 + 4))();
  if ((cVar4 != '\0') && (cVar4 = (**(code **)(*param_1 + 8))(), cVar4 != '\0')) {
    FUN_111743b0();
    FUN_114a6fc0();
    local_c = (undefined *)0x3;
    ppuVar5 = &local_c;
    if ((int)*param_2 < 4) {
      ppuVar5 = param_2;
    }
    local_c = *ppuVar5;
    ppuVar5 = param_2;
    if (0 < (int)local_c) {
      do {
        puVar1 = ppuVar5[1];
        param_2 = &PTR_FUN_11d17ce4;
        if ((DAT_1203f480 & 1) == 0) {
          DAT_1203f480 = DAT_1203f480 | 1;
          FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
          FUN_11a8911f(&LAB_11c977e0);
        }
        puVar6 = (undefined *)*DAT_1203f464;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&param_2,"CGuildQuestPrizeInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_1203f574 & 1) == 0) {
            DAT_1203f574 = DAT_1203f574 | 1;
            FUN_111eff00();
            FUN_11a8911f(&LAB_11c97660);
          }
          puVar6 = &DAT_1203f53c;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((puVar1 != (undefined *)0xffffffff) &&
            (((puVar1 != (undefined *)0x0 || (*(int *)(puVar6 + 0x30) == 0)) &&
             (iVar2 = *(int *)(puVar6 + 0x28), param_1 = local_8, iVar2 != 0)))) &&
           ((iVar7 = (int)puVar1 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
            (iVar7 < *(int *)(puVar6 + 0x24))))) {
          iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar2) * 4);
          if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar7 % iVar2) * 4), iVar2 != 0)) {
            FUN_111743b0(iVar2);
            FUN_114a6890();
          }
        }
        local_c = local_c + -1;
        ppuVar5 = ppuVar5 + 1;
      } while (local_c != (undefined *)0x0);
      local_c = (undefined *)0x0;
    }
    (**(code **)(*(int *)param_1[3] + 0x7c))();
  }
  return;
}



/* --- CGuildQuestPrizeInfo::GetManagers_111f3060 @ 111f3060 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo::GetManagers"" */

undefined4 CGuildQuestPrizeInfo__GetManagers_111f3060(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f480 & 1) == 0) {
      DAT_1203f480 = DAT_1203f480 | 1;
      FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
      FUN_11a8911f(&LAB_11c977e0);
    }
    return *DAT_1203f464;
  }
  return 0;
}



/* --- CGuildQuestPrizeInfo::GetManagers_1190ded0 @ 1190ded0 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// calls: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo""
//   ""CGuildQuestPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   calls: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo""
     ""CGuildQuestPrizeInfo::GetManagers"" */

void CGuildQuestPrizeInfo__GetManagers_1190ded0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildQuestPrizeInfo__GetManagers(0,"CGuildQuestPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17ce4;
      if ((DAT_1203f480 & 1) == 0) {
        DAT_1203f480 = DAT_1203f480 | 1;
        FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c977e0);
      }
      if (((*DAT_1203f464 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildQuestPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_1203f574 & 1) == 0)) {
        DAT_1203f540 = 0;
        DAT_1203f550 = 0;
        DAT_1203f554 = 0;
        _DAT_1203f558 = 0;
        DAT_1203f55c = 0;
        DAT_1203f574 = DAT_1203f574 | 1;
        _DAT_1203f53c = &PTR_FUN_11d17d28;
        DAT_1203f560 = _DAT_11de9ae0;
        DAT_1203f564 = _UNK_11de9ae4;
        uRam1203f568 = _UNK_11de9ae8;
        DAT_1203f56c = _UNK_11de9aec;
        DAT_1203f570 = 1;
        DAT_1203f544 = iVar3;
        _DAT_1203f548 = iVar3;
        _DAT_1203f54c = iVar3;
        FUN_11a8911f(&LAB_11cb1470);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a055a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildQuestPrizeInfo::GetManagers_1190e1a0 @ 1190e1a0 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// calls: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo""
//   ""CGuildQuestPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   calls: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo""
     ""CGuildQuestPrizeInfo::GetManagers"" */

void CGuildQuestPrizeInfo__GetManagers_1190e1a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildQuestPrizeInfo__GetManagers(0,"CGuildQuestPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17ce4;
      if ((DAT_1203f480 & 1) == 0) {
        DAT_1203f480 = DAT_1203f480 | 1;
        FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c977e0);
      }
      if (((*DAT_1203f464 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildQuestPrizeInfo",0), iVar3 == 0)) &&
         ((DAT_1203f574 & 1) == 0)) {
        DAT_1203f540 = 0;
        DAT_1203f550 = 0;
        DAT_1203f554 = 0;
        _DAT_1203f558 = 0;
        DAT_1203f55c = 0;
        DAT_1203f574 = DAT_1203f574 | 1;
        _DAT_1203f53c = &PTR_FUN_11d17d28;
        DAT_1203f560 = _DAT_11de9ae0;
        DAT_1203f564 = _UNK_11de9ae4;
        uRam1203f568 = _UNK_11de9ae8;
        DAT_1203f56c = _UNK_11de9aec;
        DAT_1203f570 = 1;
        DAT_1203f544 = iVar3;
        _DAT_1203f548 = iVar3;
        _DAT_1203f54c = iVar3;
        FUN_11a8911f(&LAB_11cb1470);
      }
      local_8 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a054b0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildQuestPrizeInfo::GetManagers_11a05d90 @ 11a05d90 --- */
// [RE-AUTO c3]
// id: CGuildQuestPrizeInfo::GetManagers
// calls: CGuildQuestPrizeInfo::GetManagers
// strings:
//   ""CGuildQuestPrizeInfo""
//   ""CGuildQuestPrizeInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildQuestPrizeInfo::GetManagers
   calls: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo""
     ""CGuildQuestPrizeInfo::GetManagers"" */

void __fastcall CGuildQuestPrizeInfo__GetManagers_11a05d90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CGuildQuestPrizeInfo__GetManagers(0,"CGuildQuestPrizeInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d17ce4;
      if ((DAT_1203f480 & 1) == 0) {
        DAT_1203f480 = DAT_1203f480 | 1;
        FUN_102500e0("CGuildQuestPrizeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c977e0);
      }
      puVar3 = (undefined *)*DAT_1203f464;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CGuildQuestPrizeInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_1203f574 & 1) == 0) {
            DAT_1203f540 = 0;
            DAT_1203f550 = 0;
            DAT_1203f554 = 0;
            _DAT_1203f558 = 0;
            DAT_1203f55c = 0;
            DAT_1203f574 = DAT_1203f574 | 1;
            _DAT_1203f53c = &PTR_FUN_11d17d28;
            DAT_1203f560 = _DAT_11de9ae0;
            DAT_1203f564 = _UNK_11de9ae4;
            uRam1203f568 = _UNK_11de9ae8;
            DAT_1203f56c = _UNK_11de9aec;
            DAT_1203f570 = 1;
            DAT_1203f544 = puVar3;
            _DAT_1203f548 = puVar3;
            _DAT_1203f54c = puVar3;
            FUN_11a8911f(&LAB_11cb5aa0);
          }
          puVar3 = &DAT_1203f53c;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[5] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x18);
        if (piVar1 == *(int **)(param_1 + 0x1c)) {
          FUN_1190e5c0(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



