// ===== class CEquipRandPassiveSkillSubGroupInfo  (6 recovered methods) =====

/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers @ 11636480 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers"" */

undefined *
CEquipRandPassiveSkillSubGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d36550;
  if (param_3 == 0) {
    if ((DAT_122e0490 & 1) == 0) {
      DAT_122e0490 = DAT_122e0490 | 1;
      FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6650);
    }
    if ((undefined *)*DAT_122e0474 != (undefined *)0x0) {
      return (undefined *)*DAT_122e0474;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e05f4 & 1) == 0) {
      DAT_122e05f4 = DAT_122e05f4 | 1;
      FUN_11637430();
      FUN_11a8911f(&LAB_11ca6500);
    }
    puVar1 = &DAT_122e05bc;
  }
  return puVar1;
}



/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers_11638930 @ 11638930 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillSubGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillSubGroupInfo"" */

int CEquipRandPassiveSkillSubGroupInfo__GetManagers_11638930(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_10;
  undefined **local_8;
  
  iVar8 = 0;
  local_10 = 0;
  piVar3 = (int *)*param_3;
  iVar7 = 0;
  if (piVar3 != (int *)param_3[1]) {
    do {
      iVar7 = *piVar3;
      local_8 = &PTR_FUN_11d36550;
      if ((DAT_122e0490 & 1) == 0) {
        DAT_122e0490 = DAT_122e0490 | 1;
        FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca6650);
      }
      puVar4 = (undefined *)*DAT_122e0474;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CEquipRandPassiveSkillSubGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122e05f4 & 1) == 0) {
          DAT_122e05c0 = 0;
          DAT_122e05d0 = 0;
          uRam122e05d4 = 0;
          _DAT_122e05d8 = 0;
          DAT_122e05dc = 0;
          DAT_122e05f4 = DAT_122e05f4 | 1;
          _DAT_122e05bc = &PTR_FUN_11d365ac;
          DAT_122e05e0 = _DAT_11de9ae0;
          DAT_122e05e4 = _UNK_11de9ae4;
          uRam122e05e8 = _UNK_11de9ae8;
          DAT_122e05ec = _UNK_11de9aec;
          DAT_122e05f0 = 1;
          DAT_122e05c4 = puVar4;
          _DAT_122e05c8 = puVar4;
          _DAT_122e05cc = puVar4;
          FUN_11a8911f(&LAB_11ca6500);
        }
        puVar4 = &DAT_122e05bc;
      }
      if (((iVar7 != -1) &&
          (((iVar7 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) &&
         ((iVar5 = iVar7 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar1 != 0)) {
          for (piVar6 = *(int **)(iVar1 + 0x18); piVar6 != *(int **)(iVar1 + 0x1c);
              piVar6 = piVar6 + 1) {
            if (*(int *)*piVar6 == param_1) {
              if (param_2 < 0) {
                return iVar7;
              }
              iVar5 = ((int *)*piVar6)[8];
              if (iVar8 < iVar5) {
                iVar8 = iVar5;
                local_10 = iVar7;
              }
            }
          }
        }
      }
      piVar3 = piVar3 + 1;
      iVar7 = local_10;
    } while (piVar3 != (int *)param_3[1]);
  }
  return iVar7;
}



/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers_11639f80 @ 11639f80 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers"" */

undefined4 CEquipRandPassiveSkillSubGroupInfo__GetManagers_11639f80(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0490 & 1) == 0) {
      DAT_122e0490 = DAT_122e0490 | 1;
      FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6650);
    }
    return *DAT_122e0474;
  }
  return 0;
}



/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers_1163d020 @ 1163d020 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillSubGroupInfo""
//   ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillActivateGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillSubGroupInfo""
     ""CEquipRandPassiveSkillActivateGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillActivateGroupInfo"" */

void CEquipRandPassiveSkillSubGroupInfo__GetManagers_1163d020(undefined **param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  int *piVar9;
  int iVar10;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar6 = param_1;
  local_8 = (undefined4 *)0x3;
  iVar10 = (int)param_1[7];
  iVar1 = (int)param_1[8];
  FUN_100ee470();
  iVar3 = FUN_100ee450();
  local_c = (undefined4 *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  param_1 = (undefined **)
            (iVar10 - (int)((double)iVar3 * _DAT_11de9a60 * (double)((iVar1 - iVar10) + 1)));
  ppuVar8 = &param_1;
  if ((int)param_1 < 1) {
    ppuVar8 = &local_c;
  }
  ppuVar4 = &local_8;
  if ((int)*ppuVar8 < 4) {
    ppuVar4 = ppuVar8;
  }
  iVar10 = 0;
  puVar7 = *ppuVar4;
  if (0 < (int)puVar7) {
    do {
      if (iVar10 == 0) {
        local_8 = (undefined4 *)FUN_11867d00();
      }
      else if (*(char *)(puVar6 + 9) == '\0') {
        local_8 = (undefined4 *)FUN_11867f60(&local_1c);
      }
      else {
        local_8 = (undefined4 *)FUN_11867f50();
      }
      if (local_8 != (undefined4 *)0x0) {
        if (local_18 == local_14) {
          FUN_1163b380(local_18,&local_8,(int)&param_1 + 3,1,1);
        }
        else {
          *local_18 = (int)local_8;
          local_18 = local_18 + 1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)puVar7);
  }
  local_28 = 0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  piVar9 = local_1c;
  if (local_1c != local_18) {
    do {
      local_10 = (int *)*piVar9;
      if (local_10 != (int *)0x0) {
        iVar10 = *local_10;
        param_1 = &PTR_FUN_11d36550;
        if ((DAT_122e0490 & 1) == 0) {
          DAT_122e0490 = DAT_122e0490 | 1;
          FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11ca6650);
        }
        puVar5 = (undefined *)*DAT_122e0474;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&param_1,"CEquipRandPassiveSkillSubGroupInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_122e05f4 & 1) == 0) {
            DAT_122e05c0 = 0;
            DAT_122e05d0 = 0;
            uRam122e05d4 = 0;
            _DAT_122e05d8 = 0;
            DAT_122e05dc = 0;
            DAT_122e05f4 = DAT_122e05f4 | 1;
            _DAT_122e05bc = &PTR_FUN_11d365ac;
            _DAT_122e05e0 = _DAT_11de9ae0;
            DAT_122e05f0 = 1;
            DAT_122e05c4 = puVar5;
            _DAT_122e05c8 = puVar5;
            _DAT_122e05cc = puVar5;
            FUN_11a8911f(&LAB_11ca6500);
          }
          puVar5 = &DAT_122e05bc;
        }
        param_1 = &PTR_FUN_11da54a8;
        if ((iVar10 != -1) &&
           ((((iVar10 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar5 + 0x28), iVar1 != 0)) &&
            ((iVar10 = iVar10 - *(int *)(puVar5 + 0x30), -1 < iVar10 &&
             (iVar10 < *(int *)(puVar5 + 0x24))))))) {
          iVar3 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar10 / iVar1) * 4);
          if ((iVar3 != 0) &&
             ((*(int *)(iVar3 + (iVar10 % iVar1) * 4) != 0 &&
              (puVar6 = (undefined4 *)FUN_118650a0(&local_28), local_8 = puVar6,
              puVar6 != (undefined4 *)0x0)))) {
            if (local_24 == local_20) {
              FUN_1163b4a0(local_24,&local_8,(int)&param_1 + 3,1,1);
            }
            else {
              *local_24 = puVar6;
              local_24 = local_24 + 1;
            }
            iVar10 = puVar6[4];
            local_8 = (undefined4 *)0x0;
            param_1 = &PTR_FUN_11d365f8;
            if ((DAT_122e04b0 & 1) == 0) {
              DAT_122e04b0 = DAT_122e04b0 | 1;
              FUN_102500e0("CEquipRandPassiveSkillActivateGroupInfo::GetManagers");
              FUN_11a8911f(&LAB_11ca65f0);
            }
            puVar5 = (undefined *)*DAT_122e0494;
            if ((puVar5 == (undefined *)0x0) &&
               (puVar5 = (undefined *)
                         FUN_11679e10(&param_1,"CEquipRandPassiveSkillActivateGroupInfo",0),
               puVar5 == (undefined *)0x0)) {
              if ((DAT_122e0630 & 1) == 0) {
                DAT_122e05fc = 0;
                DAT_122e060c = 0;
                uRam122e0610 = 0;
                _DAT_122e0614 = 0;
                DAT_122e0618 = 0;
                DAT_122e0630 = DAT_122e0630 | 1;
                _DAT_122e05f8 = &PTR_FUN_11d36660;
                _DAT_122e061c = _DAT_11de9ae0;
                DAT_122e062c = 1;
                DAT_122e0600 = puVar5;
                _DAT_122e0604 = puVar5;
                _DAT_122e0608 = puVar5;
                FUN_11a8911f(&LAB_11ca6440);
              }
              puVar5 = &DAT_122e05f8;
            }
            param_1 = &PTR_FUN_11da54a8;
            if (((iVar10 == -1) ||
                (((iVar10 == 0 && (*(int *)(puVar5 + 0x30) != 0)) || (*(int *)(puVar5 + 0x28) == 0))
                )) || ((iVar10 = iVar10 - *(int *)(puVar5 + 0x30), iVar10 < 0 ||
                       (*(int *)(puVar5 + 0x24) <= iVar10)))) {
LAB_1163d397:
              bVar2 = false;
              puVar7 = local_8;
            }
            else {
              iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar10 / *(int *)(puVar5 + 0x28)) * 4);
              if ((iVar1 == 0) ||
                 ((*(int *)(iVar1 + (iVar10 % *(int *)(puVar5 + 0x28)) * 4) == 0 ||
                  (puVar7 = (undefined4 *)FUN_11866860(), puVar7 == (undefined4 *)0x0))))
              goto LAB_1163d397;
              bVar2 = true;
              puVar7 = (undefined4 *)*puVar7;
            }
            if (bVar2) {
              local_38 = FUN_11638ca0(puVar6[1],puVar6[2],0);
              local_40 = *local_10;
              local_3c = *puVar6;
              local_44 = (uint)(0 < (int)local_c);
              local_34 = puVar6[4];
              local_c = (undefined4 *)((int)local_c + 1);
              local_30 = puVar7;
              local_2c = local_38;
              FUN_1163c850(&local_44);
            }
          }
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != local_18);
    if (local_28 != 0) {
      FUN_10c3d5d0(local_28);
    }
  }
  if (local_1c != (int *)0x0) {
    FUN_10c3d5d0(local_1c);
  }
  return;
}



/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers_1163d430 @ 1163d430 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillSubGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillSubGroupInfo"" */

void CEquipRandPassiveSkillSubGroupInfo__GetManagers_1163d430(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined **ppuVar9;
  int iVar10;
  uint local_40;
  int local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined **local_18;
  undefined **local_14 [3];
  undefined1 local_5;
  
  local_14[0] = (undefined **)0x3;
  iVar10 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x20);
  FUN_100ee470();
  iVar3 = FUN_100ee450();
  local_14[1] = (undefined **)0x0;
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_14[2] = (undefined **)
                (iVar10 - (int)((double)iVar3 * _DAT_11de9a60 * (double)((iVar6 - iVar10) + 1)));
  pppuVar5 = local_14 + 2;
  if ((int)local_14[2] < 1) {
    pppuVar5 = local_14 + 1;
  }
  pppuVar4 = local_14;
  if ((int)*pppuVar5 < 4) {
    pppuVar4 = pppuVar5;
  }
  local_14[0] = (undefined **)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2);
  local_14[1] = *pppuVar4;
  pppuVar5 = local_14;
  if ((int)*pppuVar4 <= (int)local_14[0]) {
    pppuVar5 = local_14 + 1;
  }
  iVar10 = 0;
  local_18 = *pppuVar5;
  if (0 < (int)local_18) {
    do {
      local_14[1] = (undefined **)FUN_11868050(iVar10);
      if (local_14[1] != (undefined **)0x0) {
        iVar6 = FUN_11867af0();
        local_14[2] = &PTR_FUN_11d36550;
        if ((DAT_122e0490 & 1) == 0) {
          DAT_122e0490 = DAT_122e0490 | 1;
          FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11ca6650);
        }
        puVar7 = (undefined *)*DAT_122e0474;
        if ((puVar7 == (undefined *)0x0) &&
           (puVar7 = (undefined *)FUN_11679e10(local_14 + 2,"CEquipRandPassiveSkillSubGroupInfo",0),
           puVar7 == (undefined *)0x0)) {
          if ((DAT_122e05f4 & 1) == 0) {
            DAT_122e05f4 = DAT_122e05f4 | 1;
            FUN_11637430();
            FUN_11a8911f(&LAB_11ca6500);
          }
          puVar7 = &DAT_122e05bc;
        }
        local_14[2] = &PTR_FUN_11da54a8;
        if ((iVar6 != -1) &&
           ((((iVar6 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
             (iVar3 = *(int *)(puVar7 + 0x28), iVar3 != 0)) &&
            ((iVar8 = iVar6 - *(int *)(puVar7 + 0x30), -1 < iVar8 &&
             (iVar8 < *(int *)(puVar7 + 0x24))))))) {
          iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar8 / iVar3) * 4);
          if ((iVar1 != 0) &&
             ((*(int *)(iVar1 + (iVar8 % iVar3) * 4) != 0 &&
              (ppuVar9 = (undefined **)FUN_118650a0(&local_24), local_14[0] = ppuVar9,
              ppuVar9 != (undefined **)0x0)))) {
            if (local_20 == local_1c) {
              FUN_1163b4a0(local_20,local_14,&local_5,1,1);
            }
            else {
              *local_20 = ppuVar9;
              local_20 = local_20 + 1;
            }
            local_14[2] = (undefined **)0x0;
            cVar2 = FUN_11638b60(ppuVar9[4],local_14 + 2);
            if (cVar2 != '\0') {
              local_34 = FUN_11638ca0(ppuVar9[1],ppuVar9[2],0);
              local_38 = *ppuVar9;
              local_30 = ppuVar9[4];
              local_40 = (uint)(*(char *)(local_14[1] + 9) != '\0');
              local_2c = local_14[2];
              local_3c = iVar6;
              local_28 = local_34;
              FUN_1163c850(&local_40);
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_18);
    if (local_24 != 0) {
      FUN_10c3d5d0(local_24);
    }
  }
  return;
}



/* --- CEquipRandPassiveSkillSubGroupInfo::GetManagers_11868120 @ 11868120 --- */
// [RE-AUTO c3]
// id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
// strings:
//   ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
//   ""CEquipRandPassiveSkillSubGroupInfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo::GetManagers""
     ""CEquipRandPassiveSkillSubGroupInfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __fastcall CEquipRandPassiveSkillSubGroupInfo__GetManagers_11868120(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined **local_8;
  
  if ((*(int *)(param_1 + 0x3c) == 1) &&
     (iVar4 = *(int *)(param_1 + 0x2c), iVar4 != *(int *)(param_1 + 0x30))) {
    do {
      local_8 = &PTR_FUN_11d36550;
      if ((DAT_122e0490 & 1) == 0) {
        DAT_122e0490 = DAT_122e0490 | 1;
        FUN_102500e0("CEquipRandPassiveSkillSubGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca6650);
      }
      if (((*DAT_122e0474 == 0) &&
          (iVar1 = FUN_11679e10(&local_8,"CEquipRandPassiveSkillSubGroupInfo",0), iVar1 == 0)) &&
         ((DAT_122e05f4 & 1) == 0)) {
        DAT_122e05c0 = 0;
        DAT_122e05d0 = 0;
        uRam122e05d4 = 0;
        _DAT_122e05d8 = 0;
        DAT_122e05dc = 0;
        DAT_122e05f4 = DAT_122e05f4 | 1;
        DAT_122e05c4 = 0;
        _DAT_122e05c8 = 0;
        _DAT_122e05cc = 0;
        _DAT_122e05bc = &PTR_FUN_11d365ac;
        DAT_122e05e0 = _DAT_11de9ae0;
        DAT_122e05e4 = _UNK_11de9ae4;
        uRam122e05e8 = _UNK_11de9ae8;
        DAT_122e05ec = _UNK_11de9aec;
        DAT_122e05f0 = 1;
        FUN_11a8911f(&LAB_11cade20);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x30));
  }
  if ((*(int *)(param_1 + 0x3c) == 2) &&
     (piVar3 = *(int **)(param_1 + 0x2c), piVar3 != *(int **)(param_1 + 0x30))) {
    do {
      iVar4 = *piVar3;
      iVar1 = *(int *)(iVar4 + 0xc);
      if (iVar1 != *(int *)(iVar4 + 0x10)) {
        do {
          local_8 = &PTR_FUN_11d36550;
          if ((DAT_122e0490 & 1) == 0) {
            DAT_122e0490 = DAT_122e0490 | 1;
            _DAT_122e0488 = &DAT_122e0478;
            DAT_122e048c = &DAT_122e0478;
            DAT_122e0478 = 0;
            FUN_100d9260("CEquipRandPassiveSkillSubGroupInfo::GetManagers","");
            FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
            DAT_122e0474 = (int *)FUN_100dfd90(DAT_122e048c);
            if (DAT_122e0474 == (int *)0x0) {
              DAT_122e0474 = (int *)FUN_100dde50(4);
              *DAT_122e0474 = 0;
              FUN_100dfdc0(DAT_122e048c,DAT_122e0474);
            }
            FUN_11a8911f(&LAB_11ca6650);
          }
          if (((*DAT_122e0474 == 0) &&
              (iVar2 = FUN_11679e10(&local_8,"CEquipRandPassiveSkillSubGroupInfo",0), iVar2 == 0))
             && ((DAT_122e05f4 & 1) == 0)) {
            DAT_122e05c0 = 0;
            DAT_122e05d0 = 0;
            uRam122e05d4 = 0;
            _DAT_122e05d8 = 0;
            DAT_122e05dc = 0;
            DAT_122e05f4 = DAT_122e05f4 | 1;
            DAT_122e05c4 = 0;
            _DAT_122e05c8 = 0;
            _DAT_122e05cc = 0;
            _DAT_122e05bc = &PTR_FUN_11d365ac;
            DAT_122e05e0 = _DAT_11de9ae0;
            DAT_122e05e4 = _UNK_11de9ae4;
            uRam122e05e8 = _UNK_11de9ae8;
            DAT_122e05ec = _UNK_11de9aec;
            DAT_122e05f0 = 1;
            FUN_11a8911f(&LAB_11cade20);
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 != *(int *)(iVar4 + 0x10));
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x30));
  }
  return;
}



