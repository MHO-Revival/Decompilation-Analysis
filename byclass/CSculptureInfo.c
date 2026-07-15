// ===== class CSculptureInfo  (8 recovered methods) =====

/* --- CSculptureInfo::GetManagers @ 10950be0 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSculptureInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8694 & 1) == 0) {
    DAT_123c8694 = DAT_123c8694 | 1;
    _DAT_123c86ac = &DAT_123c869c;
    DAT_123c86b0 = &DAT_123c869c;
    DAT_123c869c = 0;
    FUN_100d83d0("CSculptureInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c78d20);
  }
  return DAT_123c8698;
}



/* --- CSculptureInfo::GetManagers_10be6ef0 @ 10be6ef0 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers"" */

undefined4 CSculptureInfo__GetManagers_10be6ef0(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *local_c;
  undefined **local_8;
  
  iVar3 = (**(code **)(*param_1 + 0xc4))();
  puVar1 = *(undefined **)(iVar3 + 0x14);
  piVar4 = (int *)FUN_109532f0(0,"CSculptureInfo",0);
  iVar3 = (**(code **)(*piVar4 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      puVar5 = (undefined4 *)*DAT_123c8698;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CSculptureInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123c86bc & 1) == 0) {
          DAT_123c86c4 = 0;
          DAT_123c86d4 = 0;
          DAT_123c86d8 = 0;
          _DAT_123c86dc = 0;
          DAT_123c86e0 = 0;
          DAT_123c86bc = DAT_123c86bc | 1;
          DAT_123c86c8 = 0;
          _DAT_123c86cc = 0;
          _DAT_123c86d0 = 0;
          DAT_123c86c0 = &PTR_FUN_11ddc7c0;
          DAT_123c86e4 = _DAT_11de9ae0;
          DAT_123c86e8 = _UNK_11de9ae4;
          uRam123c86ec = _UNK_11de9ae8;
          DAT_123c86f0 = _UNK_11de9aec;
          DAT_123c86f4 = 1;
          FUN_11a8911f(&LAB_11c85f40);
        }
        puVar5 = &DAT_123c86c0;
      }
      puVar2 = DAT_1202e12c;
      if ((((-1 < iVar6) && (iVar6 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
          (local_8 = *(undefined ***)(puVar5[5] + iVar6 * 4), local_8 != (undefined **)0x0)) &&
         (local_8[10] == puVar1)) {
        local_c = param_1;
        if (DAT_1202e12c == DAT_1202e130) {
          FUN_10bed330(DAT_1202e12c,&local_c,(int)&param_1 + 3,1,1);
          return 1;
        }
        if (DAT_1202e12c != (undefined4 *)0x0) {
          *DAT_1202e12c = param_1;
          puVar2[1] = local_8;
        }
        DAT_1202e12c = DAT_1202e12c + 2;
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return 0;
}



/* --- CSculptureInfo::GetManagers_1117fcf0 @ 1117fcf0 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo::GetManagers""
//   ""CSculptureInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo::GetManagers""
     ""CSculptureInfo"" */

void __thiscall CSculptureInfo__GetManagers_1117fcf0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_c = 10;
  piVar5 = &local_c;
  if ((int)param_2[1] < 10) {
    piVar5 = param_2 + 1;
  }
  local_c = *piVar5;
  local_10 = param_1;
  if (0 < local_c) {
    piVar5 = param_2 + 2;
    do {
      iVar6 = *piVar5;
      local_8 = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      puVar1 = (undefined4 *)*DAT_123c8698;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CSculptureInfo",0);
        if (puVar1 == (undefined4 *)0x0) {
          if ((DAT_123c86bc & 1) == 0) {
            DAT_123c86c4 = 0;
            DAT_123c86d4 = 0;
            DAT_123c86d8 = 0;
            _DAT_123c86dc = 0;
            DAT_123c86e0 = 0;
            DAT_123c86bc = DAT_123c86bc | 1;
            DAT_123c86c0 = &PTR_FUN_11ddc7c0;
            DAT_123c86e4 = _DAT_11de9ae0;
            DAT_123c86e8 = _UNK_11de9ae4;
            uRam123c86ec = _UNK_11de9ae8;
            DAT_123c86f0 = _UNK_11de9aec;
            DAT_123c86f4 = 1;
            DAT_123c86c8 = puVar1;
            _DAT_123c86cc = puVar1;
            _DAT_123c86d0 = puVar1;
            FUN_11a8911f(&LAB_11c96fd0);
          }
          puVar1 = &DAT_123c86c0;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar6 != -1) &&
         ((((iVar6 != 0 || (puVar1[0xc] == 0)) && (iVar4 = puVar1[10], iVar4 != 0)) &&
          ((iVar6 = iVar6 - puVar1[0xc], -1 < iVar6 && (iVar6 < (int)puVar1[9])))))) {
        iVar7 = *(int *)(puVar1[8] + (iVar6 / iVar4) * 4);
        if ((iVar7 != 0) && (*(int *)(iVar7 + (iVar6 % iVar4) * 4) != 0)) {
          iVar7 = local_10 + 0x38;
          iVar6 = *(int *)(local_10 + 0x3c);
          iVar4 = iVar7;
          if (*(int *)(local_10 + 0x3c) == 0) {
LAB_1117fe70:
            if ((iVar4 != iVar7) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
              (**(code **)(**(int **)(iVar4 + 0x14) + 4))(piVar5);
              goto LAB_1117feaa;
            }
          }
          else {
            do {
              if (*(int *)(iVar6 + 0x10) < *piVar5) {
                iVar2 = *(int *)(iVar6 + 0xc);
              }
              else {
                iVar2 = *(int *)(iVar6 + 8);
                iVar4 = iVar6;
              }
              iVar6 = iVar2;
            } while (iVar2 != 0);
            if (iVar4 != iVar7) {
              if (*piVar5 < *(int *)(iVar4 + 0x10)) {
                iVar4 = iVar7;
              }
              goto LAB_1117fe70;
            }
          }
          uVar3 = FUN_11181ba0(piVar5);
          local_18 = FUN_114b15a0();
          local_14 = uVar3;
          FUN_11181320(local_20,&local_18);
        }
      }
LAB_1117feaa:
      piVar5 = piVar5 + 0x185;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
  }
  (**(code **)(**(int **)(local_10 + 0xc) + 0xc))(*param_2);
  return;
}



/* --- CSculptureInfo::GetManagers_1117fee0 @ 1117fee0 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __thiscall CSculptureInfo__GetManagers_1117fee0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined **local_104;
  int *local_100;
  int local_fc;
  int *local_f8;
  int local_f4;
  int *local_f0 [58];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  local_100 = param_2;
  local_fc = param_1;
  if (0 < *param_2) {
    param_2 = param_2 + 2;
    do {
      iVar3 = param_2[-1];
      if ((param_2 != (int *)0x0) && (iVar3 != 0)) {
        FUN_1013e1c0();
        local_f4 = 0;
        iVar3 = FUN_1013ec30(param_2,iVar3,&local_f4);
        piVar4 = local_f0[0];
        if (iVar3 == 0) {
          local_f8 = local_f0[0];
          iVar3 = FUN_109532f0(0,"CSculptureInfo",0);
          if (((piVar4 != (int *)0xffffffff) &&
              (((piVar4 != (int *)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
               (*(int *)(iVar3 + 0x28) != 0)))) &&
             ((iVar9 = (int)piVar4 - *(int *)(iVar3 + 0x30), -1 < iVar9 &&
              (iVar9 < *(int *)(iVar3 + 0x24))))) {
            iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar9 / *(int *)(iVar3 + 0x28)) * 4);
            if ((iVar1 != 0) &&
               (iVar3 = *(int *)(iVar1 + (iVar9 % *(int *)(iVar3 + 0x28)) * 4), iVar3 != 0)) {
              FUN_114b2470(iVar3,local_f0);
              (**(code **)(**(int **)(local_fc + 0xc) + 0x18))(local_f8);
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 0x41;
    } while (iVar8 < *local_100);
  }
  piVar2 = local_100;
  FUN_1117ec50(local_fc + 0x38);
  piVar4 = piVar2 + 0x105;
  local_f4 = 4;
  piVar7 = &local_f4;
  if (*piVar4 < 4) {
    piVar7 = piVar4;
  }
  local_f4 = *piVar7;
  if (0 < local_f4) {
    local_f8 = piVar2 + 0x107;
    local_108 = 10;
    do {
      piVar4 = &local_108;
      if (*local_f8 < 10) {
        piVar4 = local_f8;
      }
      local_100 = (int *)*piVar4;
      if (0 < *piVar4) {
        piVar4 = local_f8 + 1;
        do {
          iVar8 = *piVar4;
          local_104 = &PTR_FUN_11ddc7b8;
          if ((DAT_123c8694 & 1) == 0) {
            DAT_123c8694 = DAT_123c8694 | 1;
            _DAT_123c86ac = &DAT_123c869c;
            DAT_123c86b0 = &DAT_123c869c;
            DAT_123c869c = 0;
            FUN_100d9260("CSculptureInfo::GetManagers","");
            FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
            DAT_123c8698 = (undefined4 *)FUN_100dfd90(DAT_123c86b0);
            if (DAT_123c8698 == (undefined4 *)0x0) {
              DAT_123c8698 = (undefined4 *)FUN_100dde50(4);
              *DAT_123c8698 = 0;
              FUN_100dfdc0(DAT_123c86b0,DAT_123c8698);
            }
            FUN_11a8911f(&LAB_11c78d20);
          }
          puVar5 = (undefined4 *)*DAT_123c8698;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(&local_104,"CSculptureInfo",0),
             puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123c86bc & 1) == 0) {
              DAT_123c86c4 = 0;
              DAT_123c86d4 = 0;
              DAT_123c86d8 = 0;
              _DAT_123c86dc = 0;
              DAT_123c86e0 = 0;
              DAT_123c86bc = DAT_123c86bc | 1;
              DAT_123c86c0 = &PTR_FUN_11ddc7c0;
              DAT_123c86e4 = _DAT_11de9ae0;
              DAT_123c86e8 = _UNK_11de9ae4;
              uRam123c86ec = _UNK_11de9ae8;
              DAT_123c86f0 = _UNK_11de9aec;
              DAT_123c86f4 = 1;
              DAT_123c86c8 = puVar5;
              _DAT_123c86cc = puVar5;
              _DAT_123c86d0 = puVar5;
              FUN_11a8911f(&LAB_11c96fd0);
            }
            puVar5 = &DAT_123c86c0;
          }
          local_104 = &PTR_FUN_11da54a8;
          if ((iVar8 != -1) &&
             ((((iVar8 != 0 || (puVar5[0xc] == 0)) && (iVar3 = puVar5[10], iVar3 != 0)) &&
              ((iVar8 = iVar8 - puVar5[0xc], -1 < iVar8 && (iVar8 < (int)puVar5[9])))))) {
            iVar9 = *(int *)(puVar5[8] + (iVar8 / iVar3) * 4);
            if ((iVar9 != 0) && (*(int *)(iVar9 + (iVar8 % iVar3) * 4) != 0)) {
              uVar6 = FUN_11181ba0(piVar4);
              local_110 = FUN_114b15a0();
              local_10c = uVar6;
              FUN_11181320(local_118,&local_110);
            }
          }
          piVar4 = piVar4 + 0x185;
          local_100 = (int *)((int)local_100 + -1);
        } while (local_100 != (int *)0x0);
      }
      local_f8 = local_f8 + 0xf34;
      local_f4 = local_f4 + -1;
    } while (local_f4 != 0);
  }
  (**(code **)(**(int **)(local_fc + 0xc) + 0x10))();
  FUN_11a89daa();
  return;
}



/* --- CSculptureInfo::GetManagers_114b1c50 @ 114b1c50 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers"" */

undefined4 CSculptureInfo__GetManagers_114b1c50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar1 = (int *)FUN_109532f0(0,"CSculptureInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      puVar3 = (undefined4 *)*DAT_123c8698;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CSculptureInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123c86bc & 1) == 0) {
          DAT_123c86c4 = 0;
          DAT_123c86d4 = 0;
          DAT_123c86d8 = 0;
          _DAT_123c86dc = 0;
          DAT_123c86e0 = 0;
          DAT_123c86bc = DAT_123c86bc | 1;
          DAT_123c86c0 = &PTR_FUN_11ddc7c0;
          DAT_123c86e4 = _DAT_11de9ae0;
          DAT_123c86e8 = _UNK_11de9ae4;
          uRam123c86ec = _UNK_11de9ae8;
          DAT_123c86f0 = _UNK_11de9aec;
          DAT_123c86f4 = 1;
          DAT_123c86c8 = puVar3;
          _DAT_123c86cc = puVar3;
          _DAT_123c86d0 = puVar3;
          FUN_11a8911f(&LAB_11c9e850);
        }
        puVar3 = &DAT_123c86c0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
          (piVar1 = *(int **)(puVar3[5] + iVar5 * 4), piVar1 != (int *)0x0)) &&
         (piVar1[10] == param_1)) {
        uVar4 = (**(code **)(*piVar1 + 0x18))();
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



/* --- CSculptureInfo::GetManagers_11980c30 @ 11980c30 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers"" */

void CSculptureInfo__GetManagers_11980c30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109532f0(0,"CSculptureInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      if (((*DAT_123c8698 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSculptureInfo",0), iVar3 == 0))
         && ((DAT_123c86bc & 1) == 0)) {
        DAT_123c86c4 = 0;
        DAT_123c86d4 = 0;
        DAT_123c86d8 = 0;
        _DAT_123c86dc = 0;
        DAT_123c86e0 = 0;
        DAT_123c86bc = DAT_123c86bc | 1;
        DAT_123c86c0 = &PTR_FUN_11ddc7c0;
        DAT_123c86e4 = _DAT_11de9ae0;
        DAT_123c86e8 = _UNK_11de9ae4;
        uRam123c86ec = _UNK_11de9ae8;
        DAT_123c86f0 = _UNK_11de9aec;
        DAT_123c86f4 = 1;
        DAT_123c86c8 = iVar3;
        _DAT_123c86cc = iVar3;
        _DAT_123c86d0 = iVar3;
        FUN_11a8911f(&LAB_11cb36c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a54280();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSculptureInfo::GetManagers_11980f00 @ 11980f00 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers"" */

void CSculptureInfo__GetManagers_11980f00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109532f0(0,"CSculptureInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      if (((*DAT_123c8698 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSculptureInfo",0), iVar3 == 0))
         && ((DAT_123c86bc & 1) == 0)) {
        DAT_123c86c4 = 0;
        DAT_123c86d4 = 0;
        DAT_123c86d8 = 0;
        _DAT_123c86dc = 0;
        DAT_123c86e0 = 0;
        DAT_123c86bc = DAT_123c86bc | 1;
        DAT_123c86c0 = &PTR_FUN_11ddc7c0;
        DAT_123c86e4 = _DAT_11de9ae0;
        DAT_123c86e8 = _UNK_11de9ae4;
        uRam123c86ec = _UNK_11de9ae8;
        DAT_123c86f0 = _UNK_11de9aec;
        DAT_123c86f4 = 1;
        DAT_123c86c8 = iVar3;
        _DAT_123c86cc = iVar3;
        _DAT_123c86d0 = iVar3;
        FUN_11a8911f(&LAB_11cb36c0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CSculptureLibInfo__GetManagers_11a540b0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSculptureInfo::GetManagers_11a53910 @ 11a53910 --- */
// [RE-AUTO c3]
// id: CSculptureInfo::GetManagers
// strings:
//   ""CSculptureInfo""
//   ""CSculptureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureInfo::GetManagers
   strings:
     ""CSculptureInfo""
     ""CSculptureInfo::GetManagers"" */

void __fastcall CSculptureInfo__GetManagers_11a53910(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **local_c;
  undefined1 local_5;
  
  piVar2 = (int *)FUN_109532f0(0,"CSculptureInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_c = &PTR_FUN_11ddc7b8;
      if ((DAT_123c8694 & 1) == 0) {
        DAT_123c8694 = DAT_123c8694 | 1;
        FUN_102500e0("CSculptureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78d20);
      }
      puVar4 = (undefined4 *)*DAT_123c8698;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_c,"CSculptureInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c86bc & 1) == 0) {
          DAT_123c86c4 = 0;
          DAT_123c86d4 = 0;
          DAT_123c86d8 = 0;
          _DAT_123c86dc = 0;
          DAT_123c86e0 = 0;
          DAT_123c86bc = DAT_123c86bc | 1;
          DAT_123c86c0 = &PTR_FUN_11ddc7c0;
          DAT_123c86e4 = _DAT_11de9ae0;
          DAT_123c86e8 = _UNK_11de9ae4;
          uRam123c86ec = _UNK_11de9ae8;
          DAT_123c86f0 = _UNK_11de9aec;
          DAT_123c86f4 = 1;
          DAT_123c86c8 = puVar4;
          _DAT_123c86cc = puVar4;
          _DAT_123c86d0 = puVar4;
          FUN_11a8911f(&LAB_11cb7150);
        }
        puVar4 = &DAT_123c86c0;
      }
      if ((iVar6 < 0) || ((int)(puVar4[6] - puVar4[5]) >> 2 <= iVar6)) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        ppuVar7 = *(undefined ***)(puVar4[5] + iVar6 * 4);
      }
      if ((ppuVar7 != (undefined **)0x0) &&
         (puVar1 = ppuVar7[5], local_c = ppuVar7,
         puVar5 = (undefined *)(**(code **)(*param_1 + 0x18))(), puVar1 == puVar5)) {
        piVar2 = (int *)param_1[0xf];
        if (piVar2 == (int *)param_1[0x10]) {
          FUN_11981330(piVar2,&local_c,&local_5,1,1);
        }
        else {
          *piVar2 = (int)ppuVar7;
          param_1[0xf] = param_1[0xf] + 4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



