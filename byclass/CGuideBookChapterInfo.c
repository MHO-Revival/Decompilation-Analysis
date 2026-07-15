// ===== class CGuideBookChapterInfo  (3 recovered methods) =====

/* --- CGuideBookChapterInfo::GetManagers @ 1146bd30 --- */
// [RE-AUTO c3]
// id: CGuideBookChapterInfo::GetManagers
// strings:
//   ""CGuideBookChapterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuideBookChapterInfo::GetManagers
   strings:
     ""CGuideBookChapterInfo::GetManagers"" */

undefined * CGuideBookChapterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d28eb8;
  if (param_3 == 0) {
    if ((DAT_122de168 & 1) == 0) {
      DAT_122de168 = DAT_122de168 | 1;
      FUN_102500e0("CGuideBookChapterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e060);
    }
    if ((undefined *)*DAT_122de14c != (undefined *)0x0) {
      return (undefined *)*DAT_122de14c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de238 & 1) == 0) {
      DAT_122de238 = DAT_122de238 | 1;
      FUN_1146cac0();
      FUN_11a8911f(&LAB_11c9dfa0);
    }
    puVar1 = &DAT_122de200;
  }
  return puVar1;
}



/* --- CGuideBookChapterInfo::GetManagers_1146e960 @ 1146e960 --- */
// [RE-AUTO c3]
// id: CGuideBookChapterInfo::GetManagers
// strings:
//   ""CGuideBookChapterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuideBookChapterInfo::GetManagers
   strings:
     ""CGuideBookChapterInfo::GetManagers"" */

undefined4 CGuideBookChapterInfo__GetManagers_1146e960(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de168 & 1) == 0) {
      DAT_122de168 = DAT_122de168 | 1;
      FUN_102500e0("CGuideBookChapterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e060);
    }
    return *DAT_122de14c;
  }
  return 0;
}



/* --- CGuideBookChapterInfo::GetManagers_1146ef30 @ 1146ef30 --- */
// [RE-AUTO c3]
// id: CGuideBookChapterInfo::GetManagers
// calls: CGuideBookChapterInfo::GetManagers
// strings:
//   ""CGuideBookChapterInfo""
//   ""CGuideBookChapterInfo::GetManagers""
//   ""CGuideBookActionInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CGuideBookActionInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuideBookChapterInfo::GetManagers
   calls: CGuideBookChapterInfo::GetManagers
   strings:
     ""CGuideBookChapterInfo""
     ""CGuideBookChapterInfo::GetManagers""
     ""CGuideBookActionInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CGuideBookActionInfo"" */

void __thiscall CGuideBookChapterInfo__GetManagers_1146ef30(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined **local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  piVar2 = (int *)CGuideBookChapterInfo__GetManagers(0,"CGuideBookChapterInfo",0);
  ppuVar3 = (undefined **)(**(code **)(*piVar2 + 0x28))();
  uVar4 = FUN_11539710();
  FUN_11471200(ppuVar3,uVar4);
  FUN_115397b0();
  ppuVar7 = (undefined **)*param_2;
  if ((int)ppuVar3 < *param_2) {
    ppuVar7 = ppuVar3;
  }
  *(bool *)(param_1 + 4) = (char)param_2[0x1b] != '\0';
  *(int *)(param_1 + 8) = (int)*(char *)((int)param_2 + 0x6d);
  if (0 < (int)ppuVar7) {
    piVar2 = param_2 + 1;
    ppuVar3 = ppuVar7;
    local_10 = ppuVar7;
    do {
      if (*piVar2 <= (int)ppuVar7) {
        CGuideBookActionInfo__GetManagers_1153a240
                  (*(undefined4 *)(local_8 + 0x1c),local_8,piVar2,(int)param_2 + 0x6e);
        ppuVar7 = local_10;
      }
      piVar2 = (int *)((int)piVar2 + 0xd);
      ppuVar3 = (undefined **)((int)ppuVar3 + -1);
      param_1 = local_8;
    } while (ppuVar3 != (undefined **)0x0);
  }
  piVar2 = (int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14) - *piVar2;
  iVar9 = iVar8 >> 0x1f;
  if (iVar8 / 0x3c + iVar9 != iVar9) {
    local_10 = (undefined **)0x0;
    uVar10 = 1;
    do {
      if (*(char *)((int)local_10 + *piVar2 + 0xe) == '\0') {
        local_c = &PTR_FUN_11d28eb8;
        if ((DAT_122de168 & 1) == 0) {
          DAT_122de168 = DAT_122de168 | 1;
          FUN_102500e0("CGuideBookChapterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c9e060);
        }
        puVar5 = (undefined *)*DAT_122de14c;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&local_c,"CGuideBookChapterInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_122de238 & 1) == 0) {
            DAT_122de204 = 0;
            DAT_122de214 = 0;
            uRam122de218 = 0;
            _DAT_122de21c = 0;
            DAT_122de220 = 0;
            DAT_122de238 = DAT_122de238 | 1;
            _DAT_122de200 = &PTR_FUN_11d28efc;
            DAT_122de224 = _DAT_11de9ae0;
            DAT_122de228 = _UNK_11de9ae4;
            uRam122de22c = _UNK_11de9ae8;
            DAT_122de230 = _UNK_11de9aec;
            DAT_122de234 = 1;
            DAT_122de208 = puVar5;
            _DAT_122de20c = puVar5;
            _DAT_122de210 = puVar5;
            FUN_11a8911f(&LAB_11c9dfa0);
          }
          puVar5 = &DAT_122de200;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((uVar10 != 0xffffffff) &&
           ((((uVar10 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
             (iVar9 = *(int *)(puVar5 + 0x28), iVar9 != 0)) &&
            ((iVar8 = uVar10 - *(int *)(puVar5 + 0x30), -1 < iVar8 &&
             (iVar8 < *(int *)(puVar5 + 0x24))))))) {
          iVar6 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar8 / iVar9) * 4);
          if ((iVar6 != 0) && (iVar9 = *(int *)(iVar6 + (iVar8 % iVar9) * 4), iVar9 != 0)) {
            FUN_1153a3f0(*(undefined4 *)(local_8 + 0x1c),local_8,iVar9);
          }
        }
      }
      local_10 = local_10 + 0xf;
      piVar2 = (int *)(local_8 + 0x10);
      bVar12 = uVar10 < (uint)((*(int *)(local_8 + 0x14) - *piVar2) / 0x3c);
      uVar10 = uVar10 + 1;
    } while (bVar12);
  }
  iVar9 = 0;
  if (0 < *(int *)((int)param_2 + 0x112)) {
    puVar11 = (undefined4 *)((int)param_2 + 0x11a);
    do {
      iVar8 = puVar11[-1];
      local_10 = &PTR_FUN_11d28e28;
      if ((DAT_122de148 & 1) == 0) {
        DAT_122de148 = DAT_122de148 | 1;
        _DAT_122de140 = &DAT_122de130;
        DAT_122de144 = &DAT_122de130;
        DAT_122de130 = 0;
        FUN_100d9260("CGuideBookActionInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_122de12c = (undefined4 *)FUN_100dfd90(DAT_122de144);
        if (DAT_122de12c == (undefined4 *)0x0) {
          DAT_122de12c = (undefined4 *)FUN_100dde50(4);
          *DAT_122de12c = 0;
          FUN_100dfdc0(DAT_122de144,DAT_122de12c);
        }
        FUN_11a8911f(&LAB_11c9e030);
      }
      puVar5 = (undefined *)*DAT_122de12c;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_10,"CGuideBookActionInfo",0),
         puVar5 == (undefined *)0x0)) {
        if ((DAT_122de1fc & 1) == 0) {
          DAT_122de1c8 = 0;
          DAT_122de1d8 = 0;
          uRam122de1dc = 0;
          _DAT_122de1e0 = 0;
          DAT_122de1e4 = 0;
          DAT_122de1fc = DAT_122de1fc | 1;
          _DAT_122de1c4 = &PTR_FUN_11d28e6c;
          DAT_122de1e8 = _DAT_11de9ae0;
          DAT_122de1ec = _UNK_11de9ae4;
          uRam122de1f0 = _UNK_11de9ae8;
          DAT_122de1f4 = _UNK_11de9aec;
          DAT_122de1f8 = 1;
          DAT_122de1cc = puVar5;
          _DAT_122de1d0 = puVar5;
          _DAT_122de1d4 = puVar5;
          FUN_11a8911f(&LAB_11c9df40);
        }
        puVar5 = &DAT_122de1c4;
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((iVar8 != -1) &&
          (((iVar8 != 0 || (*(int *)(puVar5 + 0x30) == 0)) && (*(int *)(puVar5 + 0x28) != 0)))) &&
         ((iVar6 = iVar8 - *(int *)(puVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(puVar5 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / *(int *)(puVar5 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           (((iVar6 = *(int *)(iVar1 + (iVar6 % *(int *)(puVar5 + 0x28)) * 4), iVar6 != 0 &&
             (iVar6 = FUN_1146e630(*(undefined4 *)(iVar6 + 0x14)), iVar6 != 0)) &&
            (iVar8 = FUN_11539b30(iVar8), iVar8 != 0)))) {
          *(undefined4 *)(iVar8 + 0x20) = *puVar11;
        }
      }
      iVar9 = iVar9 + 1;
      puVar11 = puVar11 + 3;
    } while (iVar9 < *(int *)((int)param_2 + 0x112));
  }
  return;
}



