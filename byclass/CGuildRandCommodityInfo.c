// ===== class CGuildRandCommodityInfo  (5 recovered methods) =====

/* --- CGuildRandCommodityInfo::GetManagers @ 111ef5b0 --- */
// [RE-AUTO c3]
// id: CGuildRandCommodityInfo::GetManagers
// strings:
//   ""CGuildRandCommodityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo::GetManagers"" */

undefined * CGuildRandCommodityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17d74;
  if (param_3 == 0) {
    if ((DAT_1203f4a0 & 1) == 0) {
      DAT_1203f4a0 = DAT_1203f4a0 | 1;
      FUN_102500e0("CGuildRandCommodityInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97810);
    }
    if ((undefined *)*DAT_1203f484 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f484;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f5b0 & 1) == 0) {
      DAT_1203f5b0 = DAT_1203f5b0 | 1;
      FUN_111eff60();
      FUN_11a8911f(&LAB_11c976c0);
    }
    puVar1 = &DAT_1203f578;
  }
  return puVar1;
}



/* --- CGuildRandCommodityInfo::GetManagers_111f1f60 @ 111f1f60 --- */
// [RE-AUTO c3]
// id: CGuildRandCommodityInfo::GetManagers
// strings:
//   ""CGuildRandCommodityInfo::GetManagers""
//   ""CGuildRandCommodityInfo""

/* [RE-AUTO c3]
   id: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo::GetManagers""
     ""CGuildRandCommodityInfo"" */

void __thiscall CGuildRandCommodityInfo__GetManagers_111f1f60(int *param_1,undefined **param_2)

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
    FUN_114a6fd0();
    local_c = (undefined *)0x1e;
    ppuVar5 = &local_c;
    if ((int)*param_2 < 0x1f) {
      ppuVar5 = param_2;
    }
    local_c = *ppuVar5;
    ppuVar5 = param_2;
    if (0 < (int)local_c) {
      do {
        puVar1 = ppuVar5[1];
        param_2 = &PTR_FUN_11d17d74;
        if ((DAT_1203f4a0 & 1) == 0) {
          DAT_1203f4a0 = DAT_1203f4a0 | 1;
          FUN_102500e0("CGuildRandCommodityInfo::GetManagers");
          FUN_11a8911f(&LAB_11c97810);
        }
        puVar6 = (undefined *)*DAT_1203f484;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&param_2,"CGuildRandCommodityInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_1203f5b0 & 1) == 0) {
            DAT_1203f5b0 = DAT_1203f5b0 | 1;
            FUN_111eff60();
            FUN_11a8911f(&LAB_11c976c0);
          }
          puVar6 = &DAT_1203f578;
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
            FUN_114a68c0();
          }
        }
        local_c = local_c + -1;
        ppuVar5 = ppuVar5 + 1;
      } while (local_c != (undefined *)0x0);
      local_c = (undefined *)0x0;
    }
    (**(code **)(*(int *)param_1[3] + 0x74))();
  }
  return;
}



/* --- CGuildRandCommodityInfo::GetManagers_111f30b0 @ 111f30b0 --- */
// [RE-AUTO c3]
// id: CGuildRandCommodityInfo::GetManagers
// strings:
//   ""CGuildRandCommodityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo::GetManagers"" */

undefined4 CGuildRandCommodityInfo__GetManagers_111f30b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f4a0 & 1) == 0) {
      DAT_1203f4a0 = DAT_1203f4a0 | 1;
      FUN_102500e0("CGuildRandCommodityInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97810);
    }
    return *DAT_1203f484;
  }
  return 0;
}



/* --- CGuildRandCommodityInfo::GetManagers_11965990 @ 11965990 --- */
// [RE-AUTO c3]
// id: CGuildRandCommodityInfo::GetManagers
// calls: CGuildRandCommodityInfo::GetManagers
// strings:
//   ""CGuildRandCommodityInfo""
//   ""CGuildRandCommodityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildRandCommodityInfo::GetManagers
   calls: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo""
     ""CGuildRandCommodityInfo::GetManagers"" */

void CGuildRandCommodityInfo__GetManagers_11965990(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CGuildRandCommodityInfo__GetManagers(0,"CGuildRandCommodityInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d17d74;
      if ((DAT_1203f4a0 & 1) == 0) {
        DAT_1203f4a0 = DAT_1203f4a0 | 1;
        FUN_102500e0("CGuildRandCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97810);
      }
      puVar4 = (undefined *)*DAT_1203f484;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CGuildRandCommodityInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1203f5b0 & 1) == 0) {
          DAT_1203f57c = 0;
          DAT_1203f58c = 0;
          DAT_1203f590 = 0;
          _DAT_1203f594 = 0;
          DAT_1203f598 = 0;
          DAT_1203f5b0 = DAT_1203f5b0 | 1;
          _DAT_1203f578 = &PTR_FUN_11d17dbc;
          DAT_1203f59c = _DAT_11de9ae0;
          DAT_1203f5a0 = _UNK_11de9ae4;
          uRam1203f5a4 = _UNK_11de9ae8;
          DAT_1203f5a8 = _UNK_11de9aec;
          DAT_1203f5ac = 1;
          DAT_1203f580 = puVar4;
          _DAT_1203f584 = puVar4;
          _DAT_1203f588 = puVar4;
          FUN_11a8911f(&LAB_11cb2c70);
        }
        puVar4 = &DAT_1203f578;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_11a45200(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CGuildRandCommodityInfo::GetManagers_11a06580 @ 11a06580 --- */
// [RE-AUTO c3]
// id: CGuildRandCommodityInfo::GetManagers
// calls: CGuildRandCommodityInfo::GetManagers
// strings:
//   ""CGuildRandCommodityInfo""
//   ""CGuildRandCommodityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildRandCommodityInfo::GetManagers
   calls: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo""
     ""CGuildRandCommodityInfo::GetManagers"" */

void __fastcall CGuildRandCommodityInfo__GetManagers_11a06580(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CGuildRandCommodityInfo__GetManagers(0,"CGuildRandCommodityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d17d74;
      if ((DAT_1203f4a0 & 1) == 0) {
        DAT_1203f4a0 = DAT_1203f4a0 | 1;
        FUN_102500e0("CGuildRandCommodityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97810);
      }
      puVar3 = (undefined *)*DAT_1203f484;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CGuildRandCommodityInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_1203f5b0 & 1) == 0) {
            DAT_1203f57c = 0;
            DAT_1203f58c = 0;
            DAT_1203f590 = 0;
            _DAT_1203f594 = 0;
            DAT_1203f598 = 0;
            DAT_1203f5b0 = DAT_1203f5b0 | 1;
            _DAT_1203f578 = &PTR_FUN_11d17dbc;
            DAT_1203f59c = _DAT_11de9ae0;
            DAT_1203f5a0 = _UNK_11de9ae4;
            uRam1203f5a4 = _UNK_11de9ae8;
            DAT_1203f5a8 = _UNK_11de9aec;
            DAT_1203f5ac = 1;
            DAT_1203f580 = puVar3;
            _DAT_1203f584 = puVar3;
            _DAT_1203f588 = puVar3;
            FUN_11a8911f(&LAB_11cb5b60);
          }
          puVar3 = &DAT_1203f578;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && ((int)local_c[5] <= *(int *)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_114ac7b0(piVar1,&local_c,&local_5,1,1);
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



