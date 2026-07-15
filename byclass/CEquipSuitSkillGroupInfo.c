// ===== class CEquipSuitSkillGroupInfo  (4 recovered methods) =====

/* --- CEquipSuitSkillGroupInfo::GetManagers @ 109a4a30 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillGroupInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillGroupInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipSuitSkillGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8a54 & 1) == 0) {
    DAT_123c8a54 = DAT_123c8a54 | 1;
    _DAT_123c8a6c = &DAT_123c8a5c;
    DAT_123c8a70 = &DAT_123c8a5c;
    DAT_123c8a5c = 0;
    FUN_100d83d0("CEquipSuitSkillGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b110);
  }
  return DAT_123c8a58;
}



/* --- CEquipSuitSkillGroupInfo::GetManagers_11572a90 @ 11572a90 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillGroupInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""CEquipSuitSkillGroupInfo""
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""CEquipSuitSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillGroupInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""CEquipSuitSkillGroupInfo""
     ""CEquipSuitSkillInfo::GetManagers""
     ""CEquipSuitSkillInfo"" */

void __thiscall CEquipSuitSkillGroupInfo__GetManagers_11572a90(int param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  byte *local_18;
  int local_14;
  undefined **local_10;
  byte *local_c;
  undefined1 local_5;
  
  local_24 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_11573370(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 8) = param_1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 0xc) = param_1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  local_1c = 0;
  if (*param_2 != 0) {
    local_c = param_2 + 9;
    do {
      iVar3 = *(int *)(local_c + -8);
      local_20 = local_c + -8;
      piVar7 = (int *)0x0;
      local_34 = (int *)0x0;
      local_38 = 0;
      local_30 = (int *)0x0;
      local_10 = &PTR_FUN_11de1860;
      local_40 = iVar3;
      local_14 = iVar3;
      if ((DAT_123c8a54 & 1) == 0) {
        DAT_123c8a54 = DAT_123c8a54 | 1;
        FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7b110);
      }
      puVar2 = (undefined *)*DAT_123c8a58;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_10,"CEquipSuitSkillGroupInfo",0),
         puVar2 == (undefined *)0x0)) {
        if ((DAT_123c8ad8 & 1) == 0) {
          DAT_123c8ae0 = 0;
          DAT_123c8af0 = 0;
          uRam123c8af4 = 0;
          _DAT_123c8af8 = 0;
          DAT_123c8afc = 0;
          DAT_123c8ad8 = DAT_123c8ad8 | 1;
          DAT_123c8ae4 = 0;
          _DAT_123c8ae8 = 0;
          _DAT_123c8aec = 0;
          _DAT_123c8adc = &PTR_FUN_11de1870;
          DAT_123c8b00 = _DAT_11de9ae0;
          DAT_123c8b04 = _UNK_11de9ae4;
          uRam123c8b08 = _UNK_11de9ae8;
          DAT_123c8b0c = _UNK_11de9aec;
          DAT_123c8b10 = 1;
          FUN_11a8911f(&LAB_11ca2650);
        }
        puVar2 = &DAT_123c8adc;
      }
      local_10 = &PTR_FUN_11da54a8;
      if ((iVar3 != -1) &&
         ((((iVar3 != 0 || (*(int *)(puVar2 + 0x30) == 0)) && (*(int *)(puVar2 + 0x28) != 0)) &&
          ((iVar3 = iVar3 - *(int *)(puVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar2 + 0x24))
           ))))) {
        iVar6 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / *(int *)(puVar2 + 0x28)) * 4);
        if ((iVar6 != 0) && (*(int *)(iVar6 + (iVar3 % *(int *)(puVar2 + 0x28)) * 4) != 0)) {
          iVar6 = 0;
          iVar3 = 0;
          if (*local_c != 0) {
            local_18 = local_c + 1;
            do {
              iVar3 = *(int *)local_18;
              local_10 = &PTR_FUN_11de1868;
              local_2c = iVar3;
              if ((DAT_123c8a34 & 1) == 0) {
                DAT_123c8a34 = DAT_123c8a34 | 1;
                FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
                FUN_11a8911f(&LAB_11c7b0e0);
              }
              puVar4 = (undefined4 *)*DAT_123c8a38;
              if ((puVar4 == (undefined4 *)0x0) &&
                 (puVar4 = (undefined4 *)FUN_11679e10(&local_10,"CEquipSuitSkillInfo",0),
                 puVar4 == (undefined4 *)0x0)) {
                if ((DAT_123c8a9c & 1) == 0) {
                  DAT_123c8aa4 = 0;
                  DAT_123c8ab4 = 0;
                  DAT_123c8ab8 = 0;
                  _DAT_123c8abc = 0;
                  DAT_123c8ac0 = 0;
                  DAT_123c8a9c = DAT_123c8a9c | 1;
                  DAT_123c8aa0 = &PTR_FUN_11de18bc;
                  DAT_123c8ac4 = _DAT_11de9ae0;
                  DAT_123c8ac8 = _UNK_11de9ae4;
                  uRam123c8acc = _UNK_11de9ae8;
                  DAT_123c8ad0 = _UNK_11de9aec;
                  DAT_123c8ad4 = 1;
                  DAT_123c8aa8 = puVar4;
                  _DAT_123c8aac = puVar4;
                  _DAT_123c8ab0 = puVar4;
                  FUN_11a8911f(&LAB_11ca26b0);
                }
                puVar4 = &DAT_123c8aa0;
              }
              local_10 = &PTR_FUN_11da54a8;
              if (((iVar3 != -1) && (((iVar3 != 0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0)))) &&
                 ((iVar5 = iVar3 - puVar4[0xc], -1 < iVar5 && (iVar5 < (int)puVar4[9])))) {
                iVar1 = *(int *)(puVar4[8] + (iVar5 / (int)puVar4[10]) * 4);
                if ((iVar1 != 0) &&
                   ((iVar5 = *(int *)(iVar1 + (iVar5 % (int)puVar4[10]) * 4), iVar5 != 0 &&
                    (*(int *)(iVar5 + 0x18) == local_14)))) {
                  local_28 = CONCAT31(local_28._1_3_,local_20[iVar6 + 0x2d9] != 0);
                  if (piVar7 == local_30) {
                    FUN_11573450(piVar7,&local_2c,&local_5,1,1);
                    local_14 = local_40;
                    piVar7 = local_34;
                  }
                  else {
                    *piVar7 = iVar3;
                    piVar7[1] = local_28;
                    local_34 = piVar7 + 2;
                    piVar7 = local_34;
                  }
                }
              }
              iVar6 = iVar6 + 1;
              local_18 = local_18 + 4;
              iVar3 = local_38;
            } while (iVar6 < (int)(uint)*local_c);
          }
          iVar6 = *(int *)(local_c + -4);
          local_3c = iVar6;
          piVar7 = (int *)FUN_11570e20(&local_40);
          *piVar7 = local_14;
          piVar7[1] = iVar6;
          FUN_115717e0(&local_38);
          if (iVar3 != 0) {
            FUN_10c3d5d0(iVar3);
          }
        }
      }
      local_1c = local_1c + 1;
      local_c = local_c + 0x391;
    } while (local_1c < (int)(uint)*param_2);
  }
  return;
}



/* --- CEquipSuitSkillGroupInfo::GetManagers_1172a750 @ 1172a750 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillGroupInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""CEquipSuitSkillGroupInfo""

/* [RE-AUTO c3]
   id: CEquipSuitSkillGroupInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""CEquipSuitSkillGroupInfo"" */

undefined4 __fastcall CEquipSuitSkillGroupInfo__GetManagers_1172a750(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_8;
  
  piVar3 = *(int **)(param_1 + 0x24);
  uVar5 = 0xffffffff;
  if (piVar3 != *(int **)(param_1 + 0x28)) {
    while (*piVar3 != 2) {
      piVar3 = piVar3 + 8;
      if (piVar3 == *(int **)(param_1 + 0x28)) {
        return 0xffffffff;
      }
    }
    local_8 = &PTR_FUN_11de1860;
    iVar6 = *(int *)piVar3[1];
    if ((DAT_123c8a54 & 1) == 0) {
      DAT_123c8a54 = DAT_123c8a54 | 1;
      FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7b110);
    }
    puVar4 = (undefined *)*DAT_123c8a58;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_8,"CEquipSuitSkillGroupInfo",0),
       puVar4 == (undefined *)0x0)) {
      if ((DAT_123c8ad8 & 1) == 0) {
        DAT_123c8ad8 = DAT_123c8ad8 | 1;
        FUN_109a8080();
        FUN_11a8911f(&LAB_11ca8e50);
      }
      puVar4 = &DAT_123c8adc;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar6 != -1) &&
        (((iVar6 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
         (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) &&
       ((iVar6 = iVar6 - *(int *)(puVar4 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(puVar4 + 0x24)))))
    {
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / iVar1) * 4);
      if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + (iVar6 % iVar1) * 4), piVar3 != (int *)0x0)) {
        uVar5 = (**(code **)(*piVar3 + 0x18))();
      }
    }
  }
  return uVar5;
}



/* --- CEquipSuitSkillGroupInfo::GetManagers_1172a8f0 @ 1172a8f0 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillGroupInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""CEquipSuitSkillGroupInfo""
//   ""CEquipPassiveSkillGroupInfo::GetManagers""
//   ""CEquipPassiveSkillGroupInfo""

/* [RE-AUTO c3]
   id: CEquipSuitSkillGroupInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""CEquipSuitSkillGroupInfo""
     ""CEquipPassiveSkillGroupInfo::GetManagers""
     ""CEquipPassiveSkillGroupInfo"" */

void __fastcall CEquipSuitSkillGroupInfo__GetManagers_1172a8f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined **local_8;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != *(int **)(param_1 + 0x28)) {
    do {
      if (piVar2[4] == 1) {
        local_8 = &PTR_FUN_11de1860;
        if ((DAT_123c8a54 & 1) == 0) {
          DAT_123c8a54 = DAT_123c8a54 | 1;
          FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7b110);
        }
        if (*DAT_123c8a58 == 0) {
          iVar1 = FUN_11679e10(&local_8,"CEquipSuitSkillGroupInfo",0);
          if ((iVar1 == 0) && ((DAT_123c8ad8 & 1) == 0)) {
            DAT_123c8ad8 = DAT_123c8ad8 | 1;
            FUN_109a8080();
            FUN_11a8911f(&LAB_11ca8e50);
          }
        }
      }
      if (*piVar2 == 1) {
        local_8 = &PTR_FUN_11dbffc8;
        if ((DAT_123be514 & 1) == 0) {
          DAT_123be514 = DAT_123be514 | 1;
          FUN_102500e0("CEquipPassiveSkillGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f650);
        }
        if (*DAT_123be518 == 0) {
          iVar1 = FUN_11679e10(&local_8,"CEquipPassiveSkillGroupInfo",0);
          if ((iVar1 == 0) && ((DAT_123be440 & 1) == 0)) {
            DAT_123be440 = DAT_123be440 | 1;
            FUN_1051d130();
            puVar3 = &LAB_11ca8df0;
LAB_1172aa8c:
            FUN_11a8911f(puVar3);
          }
        }
      }
      else if (*piVar2 == 2) {
        local_8 = &PTR_FUN_11de1860;
        if ((DAT_123c8a54 & 1) == 0) {
          DAT_123c8a54 = DAT_123c8a54 | 1;
          FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7b110);
        }
        if (*DAT_123c8a58 == 0) {
          iVar1 = FUN_11679e10(&local_8,"CEquipSuitSkillGroupInfo",0);
          if ((iVar1 == 0) && ((DAT_123c8ad8 & 1) == 0)) {
            DAT_123c8ad8 = DAT_123c8ad8 | 1;
            FUN_109a8080();
            puVar3 = &LAB_11ca8e50;
            goto LAB_1172aa8c;
          }
        }
      }
      piVar2 = piVar2 + 8;
    } while (piVar2 != *(int **)(param_1 + 0x28));
  }
  return;
}



