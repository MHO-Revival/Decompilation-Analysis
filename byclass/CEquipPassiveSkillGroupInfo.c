// ===== class CEquipPassiveSkillGroupInfo  (5 recovered methods) =====

/* --- CEquipPassiveSkillGroupInfo::GetManagers @ 1050eb10 --- */
// [RE-AUTO c3]
// id: CEquipPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipPassiveSkillGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be514 & 1) == 0) {
    DAT_123be514 = DAT_123be514 | 1;
    _DAT_123be52c = &DAT_123be51c;
    DAT_123be530 = &DAT_123be51c;
    DAT_123be51c = 0;
    FUN_100d83d0("CEquipPassiveSkillGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f650);
  }
  return DAT_123be518;
}



/* --- CEquipPassiveSkillGroupInfo::GetManagers_1159d660 @ 1159d660 --- */
// [RE-AUTO c3]
// id: CEquipPassiveSkillGroupInfo::GetManagers
// calls: memmove
// strings:
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""CEquipPassiveSkillGroupInfo""

/* WARNING: Removing unreachable block (ram,0x1159d67d) */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   calls: memmove
   strings:
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""CEquipPassiveSkillGroupInfo"" */

int __thiscall CEquipPassiveSkillGroupInfo__GetManagers_1159d660(int param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *local_18;
  int local_14;
  int local_c;
  int local_8;
  
  ppuVar3 = param_2;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  FUN_10867910(*(int *)(param_1 + 0x7c) + 0x1bc);
  iVar6 = (local_14 - (int)local_18) * -0x6db6db6d;
  local_8 = (local_14 - (int)local_18) / 0x1c;
  piVar7 = local_18;
  if (local_8 != 0) {
    do {
      if (*piVar7 != 1) {
        iVar6 = piVar7[2];
        param_2 = &PTR_FUN_11dbffc8;
        local_c = iVar6;
        if ((DAT_123be514 & 1) == 0) {
          DAT_123be514 = DAT_123be514 | 1;
          FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f650);
        }
        puVar4 = (undefined4 *)*DAT_123be518;
        if ((puVar4 == (undefined4 *)0x0) &&
           (puVar4 = (undefined4 *)FUN_11679e10(&param_2,"CEquipPassiveSkillGroupInfo",0),
           puVar4 == (undefined4 *)0x0)) {
          if ((DAT_123be440 & 1) == 0) {
            DAT_123be440 = DAT_123be440 | 1;
            FUN_1051d130();
            FUN_11a8911f(&LAB_11ca3640);
          }
          puVar4 = &DAT_123be444;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((iVar6 != -1) && (((iVar6 != 0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0)))) &&
           ((iVar5 = iVar6 - puVar4[0xc], -1 < iVar5 && (iVar5 < (int)puVar4[9])))) {
          iVar1 = *(int *)(puVar4[8] + (iVar5 / (int)puVar4[10]) * 4);
          if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % (int)puVar4[10]) * 4) != 0)) {
            piVar2 = (int *)ppuVar3[1];
            if (piVar2 == (int *)ppuVar3[2]) {
              FUN_10463c40(piVar2,&local_c,(int)&param_2 + 3,1,1);
            }
            else {
              *piVar2 = iVar6;
              ppuVar3[1] = ppuVar3[1] + 4;
            }
          }
        }
      }
      local_8 = local_8 + -1;
      piVar7 = piVar7 + 7;
    } while (local_8 != 0);
    iVar6 = 0;
    local_8 = 0;
  }
  if (local_18 != (int *)0x0) {
    iVar6 = FUN_10c3d5d0(local_18);
  }
  return iVar6;
}



/* --- CEquipPassiveSkillGroupInfo::GetManagers_1159e040 @ 1159e040 --- */
// [RE-AUTO c3]
// id: CEquipPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipPassiveSkillGroupInfo""
//   ""CEquipPassiveSkillGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo""
     ""CEquipPassiveSkillGroupInfo::GetManagers"" */

void CEquipPassiveSkillGroupInfo__GetManagers_1159e040(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined **local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  *param_2 = 0;
  piVar5 = (int *)FUN_1051c290(0,"CEquipPassiveSkillGroupInfo",0);
  uVar6 = (**(code **)(*piVar5 + 0x28))();
  uVar12 = 0;
  if (uVar6 != 0) {
    do {
      local_28 = &PTR_FUN_11dbffc8;
      if ((DAT_123be514 & 1) == 0) {
        DAT_123be514 = DAT_123be514 | 1;
        FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f650);
      }
      puVar7 = (undefined4 *)*DAT_123be518;
      if ((puVar7 == (undefined4 *)0x0) &&
         (puVar7 = (undefined4 *)FUN_11679e10(&local_28,"CEquipPassiveSkillGroupInfo",0),
         puVar7 == (undefined4 *)0x0)) {
        if ((DAT_123be440 & 1) == 0) {
          DAT_123be448 = 0;
          DAT_123be458 = 0;
          DAT_123be45c = 0;
          _DAT_123be460 = 0;
          DAT_123be464 = 0;
          DAT_123be440 = DAT_123be440 | 1;
          DAT_123be444 = &PTR_FUN_11dc0070;
          DAT_123be468 = _DAT_11de9ae0;
          DAT_123be46c = _UNK_11de9ae4;
          uRam123be470 = _UNK_11de9ae8;
          DAT_123be474 = _UNK_11de9aec;
          DAT_123be478 = 1;
          DAT_123be44c = puVar7;
          _DAT_123be450 = puVar7;
          _DAT_123be454 = puVar7;
          FUN_11a8911f(&LAB_11ca36a0);
        }
        puVar7 = &DAT_123be444;
      }
      local_28 = &PTR_FUN_11da54a8;
      if (((-1 < (int)uVar12) && ((int)uVar12 < (int)(puVar7[6] - puVar7[5]) >> 2)) &&
         (iVar2 = *(int *)(puVar7[5] + uVar12 * 4), iVar2 != 0)) {
        FUN_100e5a30(local_20);
        puVar11 = local_c;
        puVar4 = local_10;
        pcVar3 = *(char **)(param_1 + 0x14);
        pcVar8 = pcVar3;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar9 = (int)pcVar8 - (int)(pcVar3 + 1);
        if ((local_10 == local_c) || ((uint)((int)local_10 - (int)local_c) < uVar9)) {
          if (uVar9 == 0) goto LAB_1159e1d1;
        }
        else {
          puVar10 = (undefined1 *)FUN_100fd370(local_c,local_10,pcVar3,pcVar3 + uVar9,uVar6);
          if ((puVar10 != puVar4) && ((int)puVar10 - (int)puVar11 != -1)) {
LAB_1159e1d1:
            *(undefined4 *)(param_3 + *param_2 * 4) = *(undefined4 *)(iVar2 + 0x10);
            *param_2 = *param_2 + 1;
            puVar11 = local_c;
          }
        }
        if (199 < *param_2) {
          if ((puVar11 != local_20) && (puVar11 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puVar11);
          }
          FUN_11a89daa();
          return;
        }
        param_1 = local_24;
        if ((puVar11 != local_20) && (puVar11 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puVar11);
          param_1 = local_24;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  FUN_11a89daa();
  return;
}



/* --- CEquipPassiveSkillGroupInfo::GetManagers_115b7e90 @ 115b7e90 --- */
// [RE-AUTO c3]
// id: CEquipPassiveSkillGroupInfo::GetManagers
// strings:
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""CEquipPassiveSkillGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""CEquipPassiveSkillGroupInfo"" */

void __fastcall CEquipPassiveSkillGroupInfo__GetManagers_115b7e90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined4 local_18;
  int local_14;
  undefined **local_10;
  int local_c;
  undefined1 local_5;
  
  iVar9 = *(int *)(param_1 + 8);
  local_c = param_1;
  if (iVar9 != param_1) {
    do {
      iVar6 = *(int *)(iVar9 + 0x10);
      iVar1 = *(int *)(iVar9 + 0x14);
      local_10 = &PTR_FUN_11dbffc8;
      if ((DAT_123be514 & 1) == 0) {
        DAT_123be514 = DAT_123be514 | 1;
        FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f650);
      }
      puVar4 = (undefined4 *)*DAT_123be518;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_10,"CEquipPassiveSkillGroupInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123be440 & 1) == 0) {
          DAT_123be448 = 0;
          DAT_123be458 = 0;
          DAT_123be45c = 0;
          _DAT_123be460 = 0;
          DAT_123be464 = 0;
          DAT_123be440 = DAT_123be440 | 1;
          DAT_123be444 = &PTR_FUN_11dc0070;
          DAT_123be468 = _DAT_11de9ae0;
          DAT_123be46c = _UNK_11de9ae4;
          uRam123be470 = _UNK_11de9ae8;
          DAT_123be474 = _UNK_11de9aec;
          DAT_123be478 = 1;
          DAT_123be44c = puVar4;
          _DAT_123be450 = puVar4;
          _DAT_123be454 = puVar4;
          FUN_11a8911f(&LAB_11ca3c80);
        }
        puVar4 = &DAT_123be444;
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((iVar6 != -1) && (((iVar6 != 0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0)))) &&
         ((iVar5 = iVar6 - puVar4[0xc], -1 < iVar5 && (iVar5 < (int)puVar4[9])))) {
        local_14 = iVar5 % (int)puVar4[10];
        iVar5 = *(int *)(puVar4[8] + (iVar5 / (int)puVar4[10]) * 4);
        if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + local_14 * 4), iVar5 != 0)) {
          iVar7 = 0;
          iVar10 = *(int *)(iVar5 + 0x30);
          iStack_24 = 0;
          uStack_20 = uStack_20 & 0xffffff00;
          local_28 = iVar6;
          if (iVar10 != *(int *)(iVar5 + 0x34)) {
            do {
              iVar2 = *(int *)(iVar10 + 0x24);
              if (((iVar2 < 1) || (iVar2 <= iVar1)) &&
                 ((-1 < iVar2 || ((iVar1 < 1 && (iVar1 <= iVar2)))))) {
                iVar8 = iVar10;
                if (iVar7 == 0) {
                  if ((((-1 < iVar1) || (-1 < iVar2)) || (iVar2 < iVar1)) &&
                     (((iVar1 < 1 || (iVar2 < 1)) || (iVar1 < iVar2)))) goto LAB_115b8045;
                }
                else if ((-1 < iVar1) || (*(int *)(iVar7 + 0x24) <= iVar2)) {
                  if (iVar1 < 1) goto LAB_115b8045;
                  iVar8 = iVar7;
                  if (*(int *)(iVar7 + 0x24) < iVar2) {
                    iVar8 = iVar10;
                  }
                }
                iVar7 = iVar8;
                iStack_24 = iVar8;
              }
LAB_115b8045:
              iVar10 = iVar10 + 0x50;
            } while (iVar10 != *(int *)(iVar5 + 0x34));
            if (iVar7 != 0) {
              piVar3 = *(int **)(local_c + 0x34);
              local_18 = 0;
              if (piVar3 == *(int **)(local_c + 0x38)) {
                FUN_11303f30(piVar3,&local_28,&local_5,1,1);
              }
              else {
                if (piVar3 != (int *)0x0) {
                  *piVar3 = iVar6;
                  piVar3[1] = iStack_24;
                  piVar3[2] = uStack_20;
                  piVar3[3] = iStack_1c;
                  piVar3[4] = 0;
                }
                *(int *)(local_c + 0x34) = *(int *)(local_c + 0x34) + 0x14;
              }
            }
          }
        }
      }
      iVar6 = *(int *)(iVar9 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar9 + 4);
        if (iVar9 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar9 = iVar6;
            iVar6 = *(int *)(iVar9 + 4);
          } while (iVar9 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar9 + 0xc) != iVar6) {
          iVar9 = iVar6;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar6 + 8); iVar9 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar6 = iVar1;
        }
      }
    } while (iVar9 != local_c);
  }
  return;
}



/* --- CEquipPassiveSkillGroupInfo::GetManagers_118e4710 @ 118e4710 --- */
// [RE-AUTO c3]
// id: CEquipPassiveSkillGroupInfo::GetManagers
// calls: CBuffInfo::GetManagers_118006a0
// strings:
//   ""CEquipPassiveSkillGroupInfo""
//   ""CEquipPassiveSkillGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPassiveSkillGroupInfo::GetManagers
   calls: CBuffInfo::GetManagers_118006a0
   strings:
     ""CEquipPassiveSkillGroupInfo""
     ""CEquipPassiveSkillGroupInfo::GetManagers"" */

void CEquipPassiveSkillGroupInfo__GetManagers_118e4710(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1051c290(0,"CEquipPassiveSkillGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbffc8;
      if ((DAT_123be514 & 1) == 0) {
        DAT_123be514 = DAT_123be514 | 1;
        FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f650);
      }
      puVar3 = (undefined4 *)*DAT_123be518;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CEquipPassiveSkillGroupInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123be440 & 1) == 0) {
          DAT_123be448 = 0;
          DAT_123be458 = 0;
          DAT_123be45c = 0;
          _DAT_123be460 = 0;
          DAT_123be464 = 0;
          DAT_123be440 = DAT_123be440 | 1;
          DAT_123be444 = &PTR_FUN_11dc0070;
          DAT_123be468 = _DAT_11de9ae0;
          DAT_123be46c = _UNK_11de9ae4;
          uRam123be470 = _UNK_11de9ae8;
          DAT_123be474 = _UNK_11de9aec;
          DAT_123be478 = 1;
          DAT_123be44c = puVar3;
          _DAT_123be450 = puVar3;
          _DAT_123be454 = puVar3;
          FUN_11a8911f(&LAB_11cb0510);
        }
        puVar3 = &DAT_123be444;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
         (*(int *)(puVar3[5] + iVar4 * 4) != 0)) {
        CBuffInfo__GetManagers_118006a0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



