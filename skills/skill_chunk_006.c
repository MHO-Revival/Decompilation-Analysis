/* ===== FUN_10970c70 @ 10970c70  size=158 ===== */
// calls: CPetMonsterSkillInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   calls: CPetMonsterSkillInfo::GetManagers
   strings:
     ""CPetMonsterSkillInfo"" */

undefined4 FUN_10970c70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dde0d4;
  puVar2 = (undefined4 *)CPetMonsterSkillInfo__GetInfoMgrSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CPetMonsterSkillInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c87a0 & 1) == 0) {
        DAT_123c87a0 = DAT_123c87a0 | 1;
        FUN_10972180();
        FUN_11a8911f(&LAB_11c79bf0);
      }
      puVar3 = &DAT_123c87a4;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10971020 @ 10971020  size=141 ===== */
// strings:
//   "GetPetMonsterSkillData"

/* [RE-AUTO c0]
   strings:
     ""GetPetMonsterSkillData"" */

void FUN_10971020(void)

{
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    FUN_104d13b0("GetPetMonsterSkillData",FUN_10971170);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10971170 @ 10971170  size=913 ===== */
// strings:
//   "PET_MONSTER_SKILL_VO_CLASSNAME"
//   "nSkillIndex"
//   "nSkillID"
//   "strSkillName"
//   "bEnabled"
//   "skillList"

/* WARNING: Removing unreachable block (ram,0x109713fc) */
/* [RE-AUTO c0]
   strings:
     ""PET_MONSTER_SKILL_VO_CLASSNAME""
     ""nSkillIndex""
     ""nSkillID""
     ""strSkillName""
     ""bEnabled""
     ""skillList"" */

void FUN_10971170(uint **param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  uint **ppuVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  uint *puVar7;
  uint uVar8;
  uint *puStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  uint **ppuStack_b8;
  uint *puStack_b4;
  uint *local_a4 [2];
  int iStack_9c;
  int *piStack_8c;
  int *piStack_88;
  undefined4 uStack_80;
  uint **local_7c;
  uint *puStack_78;
  uint uStack_74;
  uint *apuStack_70 [5];
  uint *puStack_5c;
  uint *puStack_58;
  uint uStack_54;
  uint *puStack_50;
  int *piStack_48;
  byte bStack_44;
  uint *puStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)local_a4;
  local_7c = param_1;
  local_a4[0] = param_4;
  if ((((param_1 != (uint **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (uint *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      puStack_b4 = param_1[2];
      ppuStack_b8 = param_1;
      piStack_bc = (int *)0x109711e0;
      (**(code **)(**param_1 + 8))();
      *param_1 = (uint *)0x0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = (uint *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_b4 = (uint *)0x1097120a;
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if (iVar3 != 0) {
      puStack_b4 = (uint *)0x10971219;
      iVar3 = FUN_11399470();
      if (((iVar3 != 0) && (iStack_9c = iVar3 + -8, iStack_9c != 0)) && (param_5 != 0)) {
        puStack_b4 = local_a4[0];
        ppuStack_b8 = (uint **)0x10971244;
        FUN_104f4330();
        ppuStack_b8 = &puStack_5c;
        puStack_5c = (uint *)0x0;
        puStack_58 = (uint *)0x0;
        local_7c = (uint **)0x0;
        puStack_78 = (uint *)0x0;
        piStack_bc = (int *)0x10971270;
        FUN_11a98a70();
        puStack_c0 = &uStack_80;
        piStack_bc = (int *)CONCAT31((int3)((uint)unaff_EBX >> 8),(bStack_44 & 0x8f) == 10);
        piStack_c4 = (int *)0x11dde08c;
        puStack_c8 = puStack_40;
        cVar2 = (**(code **)(*piStack_48 + 0x10))();
        if ((cVar2 == '\0') || (((byte)piStack_8c & 0x8f) != 6)) {
          piVar6 = (int *)0x0;
        }
        else if (((uint)piStack_8c >> 6 & 1) == 0) {
          piStack_bc = piStack_88;
          piVar6 = piStack_88;
        }
        else {
          piStack_bc = (int *)*piStack_88;
          piVar6 = piStack_bc;
        }
        puVar7 = &uStack_3c;
        iVar3 = 1;
        uStack_74 = puStack_b4[7];
        do {
          uVar8 = 0;
          FUN_11a98de0(&stack0xffffff50,piVar6,0,0);
          FUN_104d1550("nSkillIndex",iVar3);
          (**(code **)(*piStack_c4 + 0x1c))(&puStack_c8,iVar3);
          FUN_104d1550("nSkillID",uVar8);
          if (0 < (int)uVar8) {
            *puVar7 = uVar8;
            uVar4 = FUN_1182e200(uVar8,0);
            iVar5 = FUN_10970c70(uVar4);
            if (iVar5 != 0) {
              iVar5 = FUN_100e5b40(&uStack_54);
              FUN_104d1670("strSkillName",*(undefined4 *)(iVar5 + 0x14));
              if ((puStack_40 != &uStack_54) && (puStack_40 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_40);
              }
            }
            iVar5 = (**(code **)(*piStack_8c + 0x1c))(uVar8);
            FUN_104d15e0("bEnabled",iVar5 == 0);
          }
          (**(code **)(*piStack_88 + 0x3c))(uStack_80,&puStack_c8);
          iVar3 = iVar3 + 1;
          puVar7 = puVar7 + 1;
          piVar6 = piStack_bc;
        } while (iVar3 < 6);
        (**(code **)(*puStack_58 + 0x14))
                  (puStack_50,"skillList",apuStack_70,((byte)uStack_54 & 0x8f) == 10);
        ppuVar1 = local_7c;
        if (((uint)local_7c[1] >> 6 & 1) != 0) {
          puStack_b4 = local_7c[2];
          ppuStack_b8 = local_7c;
          piStack_bc = (int *)0x10971464;
          (**(code **)(**local_7c + 8))();
          *ppuVar1 = (uint *)0x0;
        }
        ppuVar1[1] = (uint *)0x2;
        *(undefined1 *)(ppuVar1 + 2) = 1;
        if ((uStack_74 >> 6 & 1) != 0) {
          ppuStack_b8 = &puStack_78;
          puStack_b4 = apuStack_70[0];
          piStack_bc = (int *)0x10971492;
          (**(code **)(*puStack_78 + 8))();
          puStack_78 = (uint *)0x0;
        }
        uStack_74 = 0;
        if ((uStack_54 >> 6 & 1) != 0) {
          ppuStack_b8 = &puStack_58;
          puStack_b4 = puStack_50;
          piStack_bc = (int *)0x109714bf;
          (**(code **)(*puStack_58 + 8))();
          puStack_58 = (uint *)0x0;
        }
        uStack_54 = 0;
        if ((uStack_3c >> 6 & 1) != 0) {
          ppuStack_b8 = &puStack_40;
          puStack_b4 = puStack_38;
          piStack_bc = (int *)0x109714ec;
          (**(code **)(*puStack_40 + 8))();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109a4960 @ 109a4960  size=158 ===== */
// calls: CEquipSuitSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CEquipSuitSkillInfo"

/* [RE-AUTO c0]
   calls: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillInfo"" */

undefined4 FUN_109a4960(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de1868;
  puVar2 = (undefined4 *)CEquipSuitSkillInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CEquipSuitSkillInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c8a9c & 1) == 0) {
        DAT_123c8a9c = DAT_123c8a9c | 1;
        FUN_109a7fe0();
        FUN_11a8911f(&LAB_11c7b280);
      }
      puVar2 = &DAT_123c8aa0;
    }
  }
  if (((param_1 != -1) && (((param_1 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
     ((param_1 = param_1 - puVar2[0xc], -1 < param_1 && (param_1 < (int)puVar2[9])))) {
    iVar1 = *(int *)(puVar2[8] + (param_1 / (int)puVar2[10]) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % (int)puVar2[10]) * 4);
    }
  }
  return 0;
}



/* ===== FUN_109a4ae0 @ 109a4ae0  size=158 ===== */
// calls: CEquipSuitSkillGroupInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CEquipSuitSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipSuitSkillGroupInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo"" */

undefined4 FUN_109a4ae0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de1860;
  puVar2 = (undefined4 *)CEquipSuitSkillGroupInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CEquipSuitSkillGroupInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c8ad8 & 1) == 0) {
        DAT_123c8ad8 = DAT_123c8ad8 | 1;
        FUN_109a8080();
        FUN_11a8911f(&LAB_11c7b220);
      }
      puVar3 = &DAT_123c8adc;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_109a4c60 @ 109a4c60  size=467 ===== */
// strings:
//   "C2AS_GetCurrentSkillGroupId"
//   "C2AS_GetSkillGroupData"
//   "C2AS_ActiveSkill"
//   "C2AS_EditSkills"
//   "C2AS_GetResetItemId"
//   "C2AS_GetResetRecoveryCount"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetCurrentSkillGroupId""
     ""C2AS_GetSkillGroupData""
     ""C2AS_ActiveSkill""
     ""C2AS_EditSkills""
     ""C2AS_GetResetItemId""
     ""C2AS_GetResetRecoveryCount"" */

void FUN_109a4c60(void)

{
  code *pcStack_84;
  char *pcStack_80;
  code **ppcStack_7c;
  code ***pppcStack_78;
  code *pcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code **ppcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de15d4;
  pppcStack_34 = (code ***)0x109a4c94;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109a4e50;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109a4ca5;
  FUN_109a6730();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109a4cbb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de1512;
  pppcStack_40 = (code ***)0x11de14fc;
  pppcStack_44 = (code ***)0x109a4cdb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109a4ef0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109a4cec;
  FUN_109a6730();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109a4d02;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de1524;
  pppcStack_50 = (code ***)0x11de1514;
  pppcStack_54 = (code ***)0x109a4d22;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109a5f40;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109a4d33;
  FUN_109a6730();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109a4d49;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de1537;
  ppcStack_60 = (code **)0x11de1528;
  ppcStack_64 = (code **)0x109a4d69;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_109a61f0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109a4d7a;
  FUN_109a6730();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109a4d90;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11de154b;
  ppcStack_70 = (code **)0x11de1538;
  pcStack_74 = (code *)0x109a4db0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109a6380;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x109a4dc1;
  FUN_109a6730();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x109a4dd7;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11de14d2;
  pcStack_80 = "C2AS_GetResetRecoveryCount";
  pcStack_84 = (code *)0x109a4df7;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109a63c0;
  FUN_109a6730(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109a4ef0 @ 109a4ef0  size=4116 ===== */
// calls: CEquipSuitSkillInfo::GetSuitSkillTotal, ComputeSuitSkillLevel, CMaterialTagDescInfo::GetManager, CInfoManager::FindByName, CPet::SetName, sprintf
// strings:
//   "mh.view.SuitSkill.Data.SuitSkillGroupData"
//   "GroupId"
//   "GroupName"
//   "ResetCount"
//   "SkillTypeDatas"
//   "mh.view.SuitSkill.Data.SuitSkillTypeData"
//   "TypeName"
//   "CurrentCostLimit"
//   "MaxCostLimit"
//   "SkillDatas"
//   "mh.view.SuitSkill.Data.SuitSkillData"
//   "SkillName"
//   "SkillDesc"
//   "PassiveGroupName"
//   "PassiveGroupPoint"
//   "SkillId"
//   "SkillType"
//   "PassiveGroup"
//   "CostLimitAdd"
//   "IsNotOpen"

/* WARNING: Removing unreachable block (ram,0x109a5b9f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CMaterialTagDescInfo::GetManagers, sprintf
   strings:
     ""mh.view.SuitSkill.Data.SuitSkillGroupData""
     ""GroupId""
     ""GroupName""
     ""ResetCount""
     ""SkillTypeDatas""
     ""mh.view.SuitSkill.Data.SuitSkillTypeData""
     ""TypeName""
     ""CurrentCostLimit""
     ""MaxCostLimit""
     ""SkillDatas"" */

void FUN_109a4ef0(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int *piVar9;
  int unaff_EBX;
  int ***pppiVar10;
  int **ppiVar11;
  undefined4 *unaff_ESI;
  int ****ppppiVar12;
  int *unaff_EDI;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int ***pppiStack_198;
  int **ppiStack_194;
  int iStack_188;
  int ***pppiStack_184;
  undefined **ppuStack_174;
  int *piStack_170;
  int ***pppiStack_16c;
  int *piStack_168;
  int **ppiStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  int *piStack_158;
  int *piStack_154;
  int ***apppiStack_150 [2];
  undefined4 *puStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  int *piStack_130;
  undefined4 uStack_128;
  int *piStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_10c [4];
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *piStack_f0;
  uint uStack_ec;
  int ***pppiStack_e8;
  int *piStack_e4;
  int ***pppiStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  int **ppiStack_cc;
  int aiStack_c8 [3];
  int ***pppiStack_bc;
  int ***pppiStack_b8;
  int ***pppiStack_b4;
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  uint uStack_94;
  uint auStack_90 [3];
  int *piStack_84;
  int *piStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  undefined2 *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  int *piStack_68;
  uint uStack_64;
  int **ppiStack_60;
  int **ppiStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  undefined1 auStack_50 [16];
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  char acStack_2c [32];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppuStack_174;
  local_160 = in_stack_00000018;
  if ((DAT_123c8a74 & 1) == 0) {
    DAT_123c8a74 = DAT_123c8a74 | 1;
    DAT_123c8a80 = 0;
    pppiStack_184 = (int ***)&LAB_11c7b140;
    _DAT_123c8a84 = 0;
    _DAT_123c8a88 = 0;
    FUN_11a8911f();
  }
  if (in_stack_00000014 == 1) {
    uVar3 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      ppppiVar12 = *(int *****)(in_stack_00000010 + 8);
    }
    else {
      ppppiVar12 = (int ****)0xdeadbeaf;
    }
    pppiStack_184 = (int ***)ppppiVar12;
    pppiStack_16c = (int ***)ppppiVar12;
    ppiStack_164 = (int **)FUN_109a4ae0();
    if ((((ppiStack_164 != (int **)0x0) && (DAT_1202e818 != 0)) &&
        (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) {
      pppiStack_184 = (int ***)0x109a4fc7;
      iVar4 = (**(code **)(*piVar9 + 0xb4))();
      if ((iVar4 != 0) &&
         (pppiStack_bc = *(int ****)(iVar4 + 0x260d8), (int ****)pppiStack_bc != (int ****)0x0)) {
        piStack_168 = *(int **)(iVar4 + 0x2cd4);
        pppiStack_184 = (int ***)ppppiVar12;
        piStack_130 = (int *)FUN_115728e0();
        if (piStack_130 == (int *)0x0) {
          _DAT_123c8a78 = ppppiVar12;
          iVar4 = FUN_11759f80();
          piStack_130 = (int *)&DAT_123c8a78;
          DAT_123c8a7c = *(undefined4 *)(iVar4 + 0x38);
        }
        piVar9 = piStack_130;
        ppiStack_194 = ppiStack_164;
        pppiStack_198 = (int ***)0x109a5030;
        FUN_11a98de0();
        pppiStack_198 = (int ***)ppppiVar12;
        FUN_104d1550("GroupId");
        FUN_104d1790("GroupName",unaff_EBX + 0x14);
        FUN_104d1550("ResetCount",piVar9[1]);
        ppiStack_cc = (int **)0x0;
        pppiStack_198 = &ppiStack_cc;
        aiStack_c8[0] = 0;
        FUN_11a98a70();
        FUN_104d12b0("SkillTypeDatas",&pppiStack_d0);
        piStack_154 = (int *)FUN_118243b0();
        puVar7 = (undefined4 *)*piStack_154;
        puStack_148 = puVar7;
        if (puVar7 != (undefined4 *)piStack_154[1]) {
          do {
            piStack_140 = (int *)0x0;
            uStack_13c = 0;
            puStack_148 = puVar7;
            FUN_11a98de0(&piStack_140,"mh.view.SuitSkill.Data.SuitSkillTypeData",0,0);
            (*(code *)(*pppiStack_e0)[0xf])(ppiStack_d8,apppiStack_150);
            FUN_104d1550(&DAT_11dbabc0,*puVar7);
            ppiStack_60 = &piStack_80;
            piStack_80 = (int *)((uint)piStack_80 & 0xffff0000);
            ppiStack_5c = ppiStack_60;
            FUN_100e5b60(&piStack_80);
            FUN_104d1700("TypeName",ppiStack_60);
            if ((ppiStack_60 != &piStack_84) && (ppiStack_60 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_60);
            }
            uVar5 = CEquipSuitSkillInfo__GetSuitSkillTotal(ppppiVar12,*puVar7);
            FUN_104d1550("CurrentCostLimit",uVar5);
            FUN_104d1550("MaxCostLimit",puVar7[3]);
            ppiStack_194 = (int **)0x0;
            FUN_11a98a70(&ppiStack_194);
            (**(code **)(*piStack_168 + 0x14))
                      (local_160,"SkillDatas",&pppiStack_198,((byte)ppiStack_164 & 0x8f) == 10);
            apppiStack_150[0] = (int ***)puVar7[4];
            if ((int ****)apppiStack_150[0] != (int ****)puVar7[5]) {
              do {
                pppiVar10 = (int ***)*apppiStack_150[0];
                uVar5 = 0;
                piStack_40 = (int *)0x0;
                uStack_3c = 0;
                FUN_11a98de0(&piStack_40,"mh.view.SuitSkill.Data.SuitSkillData",0,0);
                (**(code **)(*unaff_EDI + 0x3c))(unaff_EBX,auStack_50);
                iVar4 = FUN_1050ebc0(pppiVar10[10]);
                if ((iVar4 != 0) && (iVar4 = ComputeSuitSkillLevel(pppiVar10[0xc]), iVar4 != 0)) {
                  FUN_104d1670("SkillName",*(undefined4 *)(iVar4 + 0x18));
                  ppppiStack_b0 = &pppiStack_d0;
                  pppiStack_d0 = (int ***)((uint)pppiStack_d0 & 0xffff0000);
                  ppppiStack_ac = ppppiStack_b0;
                  FUN_100e5b60(&pppiStack_d0);
                  FUN_104d1700("SkillDesc",ppppiStack_b0);
                  if ((ppppiStack_b0 != &pppiStack_d4) && (ppppiStack_b0 != (int ****)0x0)) {
                    FUN_10c3d5d0(ppppiStack_b0);
                  }
                  pppiStack_b4 = (int ***)&pppiStack_d4;
                  pppiStack_d4 = (int ***)((uint)pppiStack_d4 & 0xffff0000);
                  ppppiStack_b0 = (int ****)pppiStack_b4;
                  FUN_100e5b60(&pppiStack_d4);
                  FUN_104d1700("PassiveGroupName",pppiStack_b4);
                  if ((pppiStack_b4 != &ppiStack_d8) && ((int ****)pppiStack_b4 != (int ****)0x0)) {
                    FUN_10c3d5d0(pppiStack_b4);
                  }
                  FUN_104d1550("PassiveGroupPoint",*(undefined4 *)(iVar4 + 0x24));
                }
                FUN_104d1550("SkillId",pppiVar10[4]);
                FUN_104d1550("SkillType",pppiVar10[7]);
                FUN_104d1550("PassiveGroup",pppiVar10[10]);
                FUN_104d1550(&DAT_11de16c8,pppiVar10[8]);
                FUN_104d1550("CostLimitAdd",pppiVar10[9]);
                FUN_104d15e0("IsNotOpen",*(undefined1 *)(pppiVar10 + 0xd));
                cVar1 = FUN_11572a20(uVar5,pppiVar10[4]);
                uStack_144 = CONCAT31(uStack_144._1_3_,cVar1);
                FUN_104d15e0("IsActive",uStack_144);
                pppiStack_16c = (int ***)((uint)pppiStack_16c & 0xffffff00);
                if (cVar1 == '\0') {
                  uVar2 = FUN_109a6400(pppiVar10);
                  pppiStack_16c = (int ***)CONCAT31(pppiStack_16c._1_3_,uVar2);
                }
                FUN_104d15e0("CanActive",pppiStack_16c);
                FUN_104d1550("ActiveMoney",pppiVar10[0xf]);
                FUN_104d1550("AddResetCount",pppiVar10[0xe]);
                FUN_104d1550("ClientTitleId",pppiVar10[0x3a]);
                pppiStack_b8 = &ppiStack_d8;
                ppiStack_d8 = (int **)((uint)ppiStack_d8 & 0xffff0000);
                pppiStack_b4 = pppiStack_b8;
                FUN_100e5b60(&ppiStack_d8);
                FUN_104d1700("ClientTitleName",pppiStack_b8);
                if ((pppiStack_b8 != &ppiStack_dc) && ((int ****)pppiStack_b8 != (int ****)0x0)) {
                  FUN_10c3d5d0(pppiStack_b8);
                }
                FUN_104d1550("ClientPageId",pppiVar10[0x3c]);
                pppiStack_bc = &ppiStack_dc;
                ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffff0000);
                pppiStack_b8 = pppiStack_bc;
                FUN_100e5b60(&ppiStack_dc);
                FUN_104d1700("ClientPageName",pppiStack_bc);
                if (((int ****)pppiStack_bc != &pppiStack_e0) &&
                   ((int ****)pppiStack_bc != (int ****)0x0)) {
                  FUN_10c3d5d0(pppiStack_bc);
                }
                auStack_90[0] = 0;
                auStack_90[1] = 0;
                FUN_11a98a70(auStack_90);
                (**(code **)(*puStack_6c + 0x14))
                          (uStack_64,"ActiveItemDatas",&uStack_94,((byte)piStack_68 & 0x8f) == 10);
                uStack_15c = 0;
                piStack_158 = (int *)0x0;
                FUN_11a98a70(&uStack_15c);
                (**(code **)(*piStack_80 + 0x14))
                          (ppiStack_78,"ActiveCommonMaterialDatas",&local_160,
                           ((byte)ppiStack_7c & 0x8f) == 10);
                pppiVar10 = pppiVar10 + 0x10;
                iStack_188 = 6;
                do {
                  if (*pppiVar10 != (int **)0x0) {
                    pppiStack_b8 = (int ***)0x0;
                    pppiStack_b4 = (int ***)0x0;
                    FUN_11a98de0(&pppiStack_b8,"mh.view.SuitSkill.Data.ActiveItemData",0,0);
                    (*(code *)(*ppiStack_78)[0xf])(puStack_70,aiStack_c8);
                    FUN_104d1550("ItemId",*pppiVar10);
                    FUN_104d1550("Count",pppiVar10[6]);
                    piStack_170 = (int *)((uint)piStack_170 & 0xffffff00);
                    iVar4 = FUN_10254130(*pppiVar10);
                    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) &&
                       (iVar6 = FUN_112d6f00(*(int *)(iVar4 + 0x104)), iVar6 != 0)) {
                      uVar2 = piStack_170._0_1_;
                      if (*(int *)(iVar6 + 0x28) == *(int *)(iVar4 + 0x10)) {
                        uVar2 = 1;
                      }
                      piStack_170 = (int *)CONCAT31(piStack_170._1_3_,uVar2);
                    }
                    FUN_104d15e0("CanRapidBuy",piStack_170);
                    if (((uint)pppiStack_b4 >> 6 & 1) != 0) {
                      (*(code *)(*pppiStack_b8)[2])(&pppiStack_b8,ppppiStack_b0);
                    }
                  }
                  if (pppiVar10[0xc] != (int **)0x0) {
                    pppiStack_b8 = (int ***)0x0;
                    pppiStack_b4 = (int ***)0x0;
                    FUN_11a98de0(&pppiStack_b8,"mh.view.SuitSkill.Data.ActiveCommonMaterialData",0,0
                                );
                    (**(code **)(*piStack_130 + 0x3c))(uStack_128,aiStack_c8);
                    FUN_104d1550(&DAT_11dbabc0,pppiVar10[0xc]);
                    FUN_104d1550("Count",pppiVar10[0x12]);
                    FUN_104d1550("CoinId",pppiVar10[0x18]);
                    FUN_104d1550("CoinValue",pppiVar10[0x24]);
                    FUN_104d1550("CoinLimit",pppiVar10[0x1e]);
                    ppiVar11 = pppiVar10[0xc];
                    puVar7 = (undefined4 *)CMaterialTagDescInfo__GetManager();
                    puVar8 = (undefined *)*puVar7;
                    if ((puVar8 == (undefined *)0x0) &&
                       (puVar8 = (undefined *)
                                 CInfoManager__FindByName(&ppuStack_174,"CMaterialTagDescInfo",0),
                       puVar8 == (undefined *)0x0)) {
                      if ((DAT_123bf160 & 1) == 0) {
                        DAT_123bf160 = DAT_123bf160 | 1;
                        FUN_1080a2e0();
                        FUN_11a8911f(&LAB_11c719a0);
                      }
                      puVar8 = &DAT_123bf184;
                    }
                    ppuStack_174 = &PTR_FUN_11da54a8;
                    if ((((ppiVar11 == (int **)0xffffffff) ||
                         ((ppiVar11 == (int **)0x0 && (*(int *)(puVar8 + 0x30) != 0)))) ||
                        (*(int *)(puVar8 + 0x28) == 0)) ||
                       ((iVar4 = (int)ppiVar11 - *(int *)(puVar8 + 0x30), iVar4 < 0 ||
                        (*(int *)(puVar8 + 0x24) <= iVar4)))) {
LAB_109a58d1:
                      iVar4 = 0;
                    }
                    else {
                      iVar6 = *(int *)(*(int *)(puVar8 + 0x20) +
                                      (iVar4 / *(int *)(puVar8 + 0x28)) * 4);
                      if (iVar6 == 0) goto LAB_109a58d1;
                      iVar4 = *(int *)(iVar6 + (iVar4 % *(int *)(puVar8 + 0x28)) * 4);
                    }
                    if (iVar4 != 0) {
                      puStack_70 = auStack_90;
                      auStack_90[0] = auStack_90[0] & 0xffff0000;
                      puStack_6c = puStack_70;
                      FUN_100e5b60(auStack_90);
                      FUN_104d1700(&DAT_11da7300,puStack_70);
                      if ((puStack_70 != &uStack_94) && (puStack_70 != (uint *)0x0)) {
                        FUN_10c3d5d0(puStack_70);
                      }
                      puStack_74 = (undefined2 *)&uStack_94;
                      uStack_94._0_2_ = 0;
                      puStack_70 = (uint *)puStack_74;
                      FUN_100e5b60(&uStack_94);
                      FUN_104d1700(&DAT_11dbe64c,puStack_74);
                      if ((puStack_6c != auStack_90) && (puStack_6c != (uint *)0x0)) {
                        FUN_10c3d5d0(puStack_6c);
                      }
                    }
                    if (((uint)pppiStack_b4 >> 6 & 1) != 0) {
                      (*(code *)(*pppiStack_b8)[2])(&pppiStack_b8,ppppiStack_b0);
                    }
                  }
                  pppiVar10 = pppiVar10 + 1;
                  iStack_188 = iStack_188 + -1;
                } while (iStack_188 != 0);
                if (((uint)piStack_11c >> 6 & 1) != 0) {
                  (**(code **)(*piStack_120 + 8))(&piStack_120,uStack_118);
                  piStack_120 = (int *)0x0;
                }
                piStack_11c = (int *)0x0;
                if ((uStack_64 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_68 + 8))(&piStack_68,ppiStack_60);
                  piStack_68 = (int *)0x0;
                }
                uStack_64 = 0;
                if ((uStack_3c >> 6 & 1) != 0) {
                  (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
                }
                apppiStack_150[0] = apppiStack_150[0] + 1;
                puVar7 = puStack_148;
                ppppiVar12 = (int ****)pppiStack_184;
              } while ((int ****)apppiStack_150[0] != (int ****)puStack_148[5]);
            }
            if (((uint)pppiStack_16c >> 6 & 1) != 0) {
              (**(code **)(*piStack_170 + 8))(&piStack_170,piStack_168);
              piStack_170 = (int *)0x0;
            }
            pppiStack_16c = (int ***)0x0;
            if ((uStack_13c >> 6 & 1) != 0) {
              (**(code **)(*piStack_140 + 8))(&piStack_140,uStack_138);
            }
            puVar7 = puVar7 + 7;
            puStack_148 = puVar7;
          } while (puVar7 != (undefined4 *)piStack_154[1]);
        }
        uStack_108 = 0;
        uStack_104 = 0;
        FUN_11a98a70(&uStack_108);
        (**(code **)(*(int *)*unaff_ESI + 0x14))
                  (unaff_ESI[2],"EquipSkillList",auStack_10c,((byte)unaff_ESI[1] & 0x8f) == 10);
        piVar9 = piStack_158;
        iVar4 = piStack_158[2];
        if (iVar4 != piStack_158[3]) {
          do {
            if (*(char *)(iVar4 + 4) != '\0') {
              pppiStack_184 = (int ***)0x0;
              (**(code **)(*piStack_11c + 0x3c))(uStack_114,&pppiStack_184);
            }
            iVar4 = iVar4 + 8;
          } while (iVar4 != piVar9[3]);
        }
        uVar5 = FUN_118228b0();
        piVar9 = (int *)FUN_10856c80(uVar5);
        piStack_170 = piVar9;
        if (piVar9 != (int *)0x0) {
          pppiStack_58 = &ppiStack_78;
          ppiStack_78 = (int **)((uint)ppiStack_78 & 0xffff0000);
          pppiStack_184 = &ppiStack_78;
          pppiStack_54 = pppiStack_58;
          FUN_100e5b60();
          ppiVar11 = ppiStack_164;
          FUN_104d1700();
          if ((pppiStack_58 != &ppiStack_7c) && (pppiStack_58 != (int ***)0x0)) {
            FUN_10c3d5d0();
          }
          FUN_11572960();
          ppiStack_194 = (int **)0x109a5c5f;
          FUN_104d1550();
          pppiStack_e0 = (int ***)0x0;
          ppiStack_dc = (int **)0x0;
          FUN_11a98a70();
          ppiStack_194 = &piStack_e4;
          pppiStack_198 = (int ***)0x11de17cc;
          (**(code **)(**ppiVar11 + 0x14))(ppiVar11[2]);
          ppiStack_164 = (int **)piVar9[9];
          if (ppiStack_164 != (int **)piVar9[10]) {
            ppiVar11 = ppiStack_164 + 6;
            piVar9 = piStack_170;
            do {
              if ((((*ppiStack_164 == (int *)0x1) &&
                   (piVar9 = piStack_170, 1 < (uint)((int)ppiVar11[-4] - (int)ppiVar11[-5] >> 2)))
                  && (ppiVar11[-2] == (int *)0x1)) &&
                 (1 < (uint)((int)*ppiVar11 - (int)ppiVar11[-1] >> 2))) {
                pppiStack_184 = (int ***)0x0;
                piStack_158 = (int *)0x0;
                piStack_154 = (int *)0x0;
                ppiStack_194 = (int **)0x109a5d21;
                FUN_11a98de0();
                ppiStack_194 = &piStack_168;
                pppiStack_198 = pppiStack_e0;
                (*(code *)(*pppiStack_e8)[0xf])();
                FUN_104d1550("NeedActiveSkillCount",ppiVar11[-1][1]);
                iVar4 = *ppiVar11[-5];
                piStack_154 = (int *)ppiVar11[-5][1];
                FUN_104d1550("PassiveSkillGroupId",iVar4);
                iVar4 = FUN_1050ebc0(iVar4);
                if (iVar4 != 0) {
                  pppiStack_16c = (int ***)0x0;
                  pppiStack_184 = (int ***)&DAT_11d9d32b;
                  if (*(int *****)(iVar4 + 0x2c) != (int ****)0x0) {
                    pppiStack_184 = (int ***)*(int *****)(iVar4 + 0x2c);
                  }
                  CPet__SetName();
                  ppiStack_194 = (int **)0x109a5db3;
                  sprintf(acStack_2c,"+%d");
                  pppiStack_16c = (int ***)0x0;
                  CPet__SetName();
                  FUN_100e5ed0();
                  if (ppuStack_174 != (undefined **)0x0) {
                    ppiStack_194 = (int **)0x109a5deb;
                    FUN_10c3da30();
                  }
                  ppiStack_194 = (int **)0x11dd90c8;
                  pppiStack_198 = (int ***)0x109a5e03;
                  FUN_104d1790();
                  if ((int ****)pppiStack_16c != (int ****)0x0) {
                    pppiStack_184 = pppiStack_16c;
                    FUN_10c3da30();
                  }
                }
                piVar9 = piStack_170;
                if (((uint)piStack_154 >> 6 & 1) != 0) {
                  pppiStack_184 = apppiStack_150[0];
                  (**(code **)(*piStack_158 + 8))();
                  piVar9 = piStack_170;
                }
              }
              ppiStack_164 = ppiStack_164 + 8;
              ppiVar11 = ppiVar11 + 8;
            } while (ppiStack_164 != (int **)piVar9[10]);
          }
          if (((uint)pppiStack_d4 >> 6 & 1) != 0) {
            pppiStack_184 = pppiStack_d0;
            (*(code *)(*ppiStack_d8)[2])();
            ppiStack_d8 = (int **)0x0;
          }
          pppiStack_d4 = (int ***)0x0;
        }
        if ((uStack_ec >> 6 & 1) != 0) {
          pppiStack_184 = pppiStack_e8;
          (**(code **)(*piStack_f0 + 8))();
          piStack_f0 = (int *)0x0;
        }
        uStack_ec = 0;
        if (((uint)pppiStack_b4 >> 6 & 1) != 0) {
          pppiStack_184 = (int ***)ppppiStack_b0;
          (*(code *)(*pppiStack_b8)[2])();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109ef110 @ 109ef110  size=1547 ===== */
// strings:
//   "mh.model.equip.EquipPassiveSkillData"
//   "passiveSkillGroupID"
//   "passiveSkillValue"
//   "passiveSkillName"
//   "arrayPassiveSkillData"

/* [RE-AUTO c0]
   strings:
     ""mh.model.equip.EquipPassiveSkillData""
     ""passiveSkillGroupID""
     ""passiveSkillValue""
     ""passiveSkillName""
     ""arrayPassiveSkillData"" */

void FUN_109ef110(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int **ppiVar8;
  undefined4 local_d4;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  int *piStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  byte bStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  uint uStack_94;
  int *piStack_90;
  undefined4 uStack_88;
  int *piStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [12];
  undefined4 *puStack_64;
  int *piStack_60;
  undefined4 *local_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_48 [2];
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_30;
  undefined1 auStack_2c [16];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_d4;
  local_d4 = param_2;
  local_5c = param_6;
  if (((uint)param_6[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_6 + 8))(param_6,param_6[2]);
    *param_6 = 0;
  }
  param_6[1] = 2;
  *(undefined1 *)(param_6 + 2) = 0;
  if (param_5 != 6) goto LAB_109ef704;
  uVar2 = *(uint *)(param_4 + 4) & 0x8f;
  if ((uVar2 == 3) || (uVar2 == 4)) {
    local_d0 = *(undefined4 *)(param_4 + 8);
  }
  else {
    local_d0 = 0xdeadbeaf;
  }
  uVar2 = *(uint *)(param_4 + 0x34) & 0x8f;
  if ((uVar2 == 3) || (uVar2 == 4)) {
    iStack_cc = *(int *)(param_4 + 0x38);
  }
  else {
    iStack_cc = -0x21524151;
  }
  uVar2 = *(uint *)(param_4 + 0x4c) & 0x8f;
  if ((uVar2 == 3) || (uVar2 == 4)) {
    iStack_c8 = *(int *)(param_4 + 0x50);
  }
  else {
    iStack_c8 = -0x21524151;
  }
  uStack_a4 = *(uint *)(param_4 + 100);
  uStack_9c = *(undefined4 *)(param_4 + 0x6c);
  uStack_a0 = *(undefined4 *)(param_4 + 0x68);
  piStack_98 = *(int **)(param_4 + 0x70);
  piStack_a8 = (int *)0x0;
  if ((uStack_a4 >> 6 & 1) != 0) {
    piStack_a8 = *(int **)(param_4 + 0x60);
    (**(code **)(*piStack_a8 + 4))(&piStack_a8,uStack_a0);
  }
  uStack_bc = *(uint *)(param_4 + 0x7c);
  uStack_b4 = *(undefined4 *)(param_4 + 0x84);
  uStack_b8 = *(undefined4 *)(param_4 + 0x80);
  piStack_b0 = *(int **)(param_4 + 0x88);
  piStack_c0 = (int *)0x0;
  if ((uStack_bc >> 6 & 1) != 0) {
    piStack_c0 = *(int **)(param_4 + 0x78);
    (**(code **)(*piStack_c0 + 4))(&piStack_c0,uStack_b8);
  }
  iVar4 = iStack_cc;
  if (iStack_cc == -1) {
LAB_109ef300:
    iVar4 = FUN_10855a60(local_d0);
    iStack_c8 = iVar4;
    if (iVar4 != 0) {
      ppiVar8 = &piStack_40;
      piStack_40 = (int *)0x0;
      uStack_3c = 0;
      FUN_11a98a70(ppiVar8);
      local_5c = (undefined4 *)0x0;
      piStack_58 = (int *)0x0;
      FUN_11a98a70(&local_5c);
      puStack_30 = *(undefined4 **)(iVar4 + 0x19c);
      puVar5 = *(undefined4 **)(iVar4 + 0x198);
      if (puVar5 != puStack_30) {
        do {
          iVar4 = FUN_1050ebc0(*puVar5);
          if (iVar4 != 0) {
            iVar3 = *(int *)(iVar4 + 0x24);
            puStack_1c = auStack_2c;
            puStack_18 = puStack_1c;
            FUN_100b62c0(*(undefined4 *)(iVar4 + 0x28),iVar3);
            local_d4 = puVar5[1];
            pcVar7 = "mh.model.equip.EquipPassiveSkillData";
            uStack_a0 = 0;
            uStack_9c = 0;
            FUN_11a98de0(&uStack_a0,"mh.model.equip.EquipPassiveSkillData",0,0);
            FUN_104d1550("passiveSkillGroupID",*(undefined4 *)(iVar4 + 0x10));
            FUN_104d1550("passiveSkillValue",iVar3 + (int)ppiVar8);
            FUN_104d1670("passiveSkillName",puStack_30);
            piVar6 = piStack_58;
            (**(code **)(*piStack_60 + 0x3c))(piStack_58,&piStack_b0);
            uStack_a0 = 0;
            uStack_9c = 0;
            FUN_11a98de0(&uStack_a0,"mh.model.equip.EquipPassiveSkillData",0,0);
            FUN_104d1550("passiveSkillGroupID",*(undefined4 *)(iVar4 + 0x10));
            FUN_104d1550("passiveSkillValue",(char *)((int)piVar6 + (int)pcVar7));
            FUN_104d1670("passiveSkillName",auStack_48[0]);
            (**(code **)(*piStack_90 + 0x3c))(uStack_88,&piStack_b0);
            if ((uStack_7c >> 6 & 1) != 0) {
              (**(code **)(*piStack_80 + 8))(&piStack_80,uStack_78);
              piStack_80 = (int *)0x0;
            }
            uStack_7c = 0;
            if ((uStack_94 >> 6 & 1) != 0) {
              (**(code **)(*piStack_98 + 8))(&piStack_98,piStack_90);
              piStack_98 = (int *)0x0;
            }
            uStack_94 = 0;
            if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_18);
            }
          }
          puVar5 = puVar5 + 3;
          param_6 = puStack_64;
        } while (puVar5 != puStack_30);
      }
      (**(code **)(*piStack_b0 + 0x14))
                (piStack_a8,"arrayPassiveSkillData",auStack_48,(bStack_ac & 0x8f) == 10);
      (**(code **)(*unaff_EBX + 0x14))
                (local_d0,"arrayPassiveSkillData",auStack_70,((byte)local_d4 & 0x8f) == 10);
      if (((uint)param_6[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*param_6 + 8))(param_6,param_6[2]);
        *param_6 = 0;
      }
      param_6[1] = 2;
      *(undefined1 *)(param_6 + 2) = 1;
      if ((uStack_54 >> 6 & 1) != 0) {
        (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
        piStack_58 = (int *)0x0;
      }
      uStack_54 = 0;
      if ((uStack_3c >> 6 & 1) != 0) {
        (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
        piStack_40 = (int *)0x0;
      }
      uStack_3c = 0;
    }
  }
  else if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
            (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) &&
           ((iVar3 = (**(code **)(*piVar6 + 0xb4))(), iVar3 != 0 && (*(int *)(iVar3 + 0x2d1c) != 0))
           )) && ((iVar4 = FUN_113f9bb0(iVar4,iStack_c8), iVar4 != 0 &&
                  (cVar1 = FUN_116698c0(), cVar1 != '\0')))) {
    local_d0 = FUN_11669730();
    FUN_11673530();
    goto LAB_109ef300;
  }
  if ((uStack_bc >> 6 & 1) != 0) {
    (**(code **)(*piStack_c0 + 8))(&piStack_c0,uStack_b8);
    piStack_c0 = (int *)0x0;
  }
  uStack_bc = 0;
  if ((uStack_a4 >> 6 & 1) != 0) {
    (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
  }
LAB_109ef704:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f4f80 @ 109f4f80  size=1455 ===== */
// strings:
//   "mh.model.equip.EquipPassiveSkillData"
//   "passiveSkillGroupID"
//   "passiveSkillValue"
//   "passiveSkillName"
//   "arrayPassiveSkillData"

/* [RE-AUTO c0]
   strings:
     ""mh.model.equip.EquipPassiveSkillData""
     ""passiveSkillGroupID""
     ""passiveSkillValue""
     ""passiveSkillName""
     ""arrayPassiveSkillData"" */

void FUN_109f4f80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 )

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piStack_cc;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 *local_c0;
  undefined4 *puStack_bc;
  undefined4 *local_b8;
  undefined4 uStack_b4;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_50;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_cc;
  local_b8 = param_1;
  local_c0 = param_2;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 6) {
    uVar3 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      local_c8 = *(undefined4 *)(param_4 + 8);
    }
    else {
      local_c8 = 0xdeadbeaf;
    }
    uVar3 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      puStack_bc = *(undefined4 **)(param_4 + 0x20);
    }
    else {
      puStack_bc = (undefined4 *)0xdeadbeaf;
    }
    uVar3 = *(uint *)(param_4 + 0x34) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      piStack_cc = *(int **)(param_4 + 0x38);
    }
    else {
      piStack_cc = (int *)0xdeadbeaf;
    }
    uVar3 = *(uint *)(param_4 + 0x4c) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      uStack_b4 = *(undefined4 *)(param_4 + 0x50);
    }
    else {
      uStack_b4 = 0xdeadbeaf;
    }
    piStack_74 = *(int **)(param_4 + 100);
    uStack_6c = *(undefined4 *)(param_4 + 0x6c);
    uStack_70 = *(undefined4 *)(param_4 + 0x68);
    uStack_68 = *(undefined4 *)(param_4 + 0x70);
    piStack_78 = (int *)0x0;
    if (((uint)piStack_74 >> 6 & 1) != 0) {
      piStack_78 = *(int **)(param_4 + 0x60);
      (**(code **)(*piStack_78 + 4))(&piStack_78,uStack_70);
    }
    uStack_94 = *(uint *)(param_4 + 0x7c);
    uStack_8c = *(undefined4 *)(param_4 + 0x84);
    uStack_90 = *(undefined4 *)(param_4 + 0x80);
    uStack_88 = *(undefined4 *)(param_4 + 0x88);
    piStack_98 = (int *)0x0;
    if ((uStack_94 >> 6 & 1) != 0) {
      piStack_98 = *(int **)(param_4 + 0x78);
      (**(code **)(*piStack_98 + 4))(&piStack_98,uStack_90);
    }
    if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
        ((iVar4 = (**(code **)(*piVar1 + 0xb4))(), iVar4 != 0 && (*(int *)(iVar4 + 0x2d1c) != 0))))
       && ((iVar4 = FUN_113f9bb0(local_c8,puStack_bc), iVar4 != 0 &&
           (cVar2 = FUN_116698c0(), cVar2 != '\0')))) {
      local_c8 = FUN_11673530();
      puVar5 = (undefined4 *)FUN_116734c0();
      puStack_bc = puVar5;
      if ((((puVar5 != (undefined4 *)0x0) && (iStack_7c = FUN_10855a60(piStack_cc), iStack_7c != 0))
          && (puVar5 + 0x66 != (int *)0x0)) && (iStack_c4 = iStack_7c + 0x198, iStack_c4 != 0)) {
        uStack_40 = 0;
        uStack_3c = 0;
        FUN_11a98a70(&uStack_40);
        puStack_60 = (undefined4 *)puVar5[0x67];
        puVar5 = (undefined4 *)puVar5[0x66];
        if (puVar5 != puStack_60) {
          do {
            iVar4 = FUN_1050ebc0(*puVar5);
            if (iVar4 != 0) {
              puVar8 = auStack_28;
              FUN_108199e0(puVar8);
              iVar7 = 0;
              local_b8 = (undefined4 *)0x0;
              uStack_b4 = 0;
              FUN_11a98de0(&local_b8,"mh.model.equip.EquipPassiveSkillData",0,0);
              FUN_104d1550("passiveSkillGroupID",*(undefined4 *)(iVar4 + 0x10));
              FUN_104d1550("passiveSkillValue",iVar7 + (int)puVar8);
              FUN_104d1670("passiveSkillName",auStack_28[0]);
              (**(code **)(*piStack_58 + 0x3c))(uStack_50,&local_c8);
              FUN_104d7c10();
              if ((puStack_14 != auStack_28) && (puStack_14 != (undefined4 *)0x0)) {
                FUN_10c3d5d0(puStack_14);
              }
            }
            puVar5 = puVar5 + 3;
            param_1 = puStack_bc;
          } while (puVar5 != puStack_60);
        }
        FUN_104d12b0("arrayPassiveSkillData",auStack_44);
        uStack_5c = 0;
        puVar5 = &uStack_5c;
        piStack_58 = (int *)0x0;
        FUN_11a98a70(puVar5);
        piVar1 = (int *)piStack_cc[1];
        piVar6 = (int *)*piStack_cc;
        piStack_cc = piVar1;
        for (; piVar6 != piVar1; piVar6 = piVar6 + 3) {
          iVar4 = FUN_1050ebc0(*piVar6);
          if (iVar4 != 0) {
            FUN_108199e0(&uStack_2c);
            iVar7 = 0;
            puStack_bc = (undefined4 *)0x0;
            local_b8 = (undefined4 *)0x0;
            FUN_11a98de0(&puStack_bc,"mh.model.equip.EquipPassiveSkillData",0,0);
            FUN_104d1550("passiveSkillGroupID",*(undefined4 *)(iVar4 + 0x10));
            FUN_104d1550("passiveSkillValue",iVar7 + (int)puVar5);
            FUN_104d1670("passiveSkillName",uStack_2c);
            (**(code **)(*piStack_74 + 0x3c))(uStack_6c,&piStack_cc);
            FUN_104d7c10();
            if ((puStack_18 != &uStack_2c) && (puStack_18 != (undefined4 *)0x0)) {
              FUN_10c3d5d0(puStack_18);
            }
          }
          param_1 = local_c0;
        }
        FUN_104d12b0("arrayPassiveSkillData",&puStack_60);
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
          *param_1 = 0;
        }
        param_1[1] = 2;
        *(undefined1 *)(param_1 + 2) = 1;
        FUN_104d7c10();
        FUN_104d7c10();
      }
    }
    if ((uStack_94 >> 6 & 1) != 0) {
      (**(code **)(*piStack_98 + 8))(&piStack_98,uStack_90);
      piStack_98 = (int *)0x0;
    }
    uStack_94 = 0;
    if (((uint)piStack_74 >> 6 & 1) != 0) {
      (**(code **)(*piStack_78 + 8))(&piStack_78,uStack_70);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f5c90 @ 109f5c90  size=1745 ===== */
// strings:
//   "C2AS_GetBoLaiDaoDatas"
//   "C2AS_GetSeaSandDatas"
//   "C2AS_GetGuildPlayerDataByGuildID"
//   "C2AS_ExecuteLevelMatch"
//   "C2AS_GetShipRequireData"
//   "AS2C_Transport"
//   "C2AS_GetGuildDetails"
//   "C2AS_GetAllGuildSail"
//   "C2AS_GetPlayerLevelData"
//   "C2AS_GetGuildCommerceBuffData"
//   "C2AS_GetCacheGuildIdArray"
//   "ExecuteLevelMatch"
//   "CanSelectShip"
//   "AS2C_GetDynamicShipData"
//   "RequestSetViewGuild"
//   "ReqAllCommerce"
//   "ReqSeaSandData"
//   "ReqHunterDetails"
//   "ReqAllGuildSail"
//   "ReqSetSelectCommerce"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetBoLaiDaoDatas""
     ""C2AS_GetSeaSandDatas""
     ""C2AS_GetGuildPlayerDataByGuildID""
     ""C2AS_ExecuteLevelMatch""
     ""C2AS_GetShipRequireData""
     ""AS2C_Transport""
     ""C2AS_GetGuildDetails""
     ""C2AS_GetAllGuildSail""
     ""C2AS_GetPlayerLevelData""
     ""C2AS_GetGuildCommerceBuffData"" */

void FUN_109f5c90(void)

{
  code *pcStack_1a4;
  char *pcStack_1a0;
  code **ppcStack_19c;
  code ***pppcStack_198;
  code *pcStack_194;
  code **ppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code **ppcStack_184;
  code **ppcStack_180;
  code ***pppcStack_17c;
  code ***pppcStack_178;
  code ***pppcStack_174;
  code ***pppcStack_170;
  code ***pppcStack_16c;
  undefined4 ***pppuStack_168;
  code ***pppcStack_164;
  code ***pppcStack_160;
  code ***pppcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  undefined4 ***pppuStack_14c;
  code ***pppcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  undefined4 ***pppuStack_138;
  undefined4 ***pppuStack_134;
  undefined4 ***pppuStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  undefined4 ***pppuStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code ***pppcStack_108;
  undefined4 ***pppuStack_104;
  undefined4 ***pppuStack_100;
  code ***pppcStack_fc;
  code ***pppcStack_f8;
  code ***pppcStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  undefined4 ***pppuStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  undefined4 ***pppuStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  undefined4 ***pppuStack_64;
  undefined4 ***pppuStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de5a44;
  pppcStack_34 = (code ***)0x109f5cc4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109f6380;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109f5cd5;
  FUN_109f9a10();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109f5ceb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de5a04;
  pppcStack_40 = (code ***)0x11de59f0;
  pppcStack_44 = (code ***)0x109f5d0b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109f6970;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109f5d1c;
  FUN_109f9a10();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109f5d32;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de5a28;
  pppcStack_50 = (code ***)0x11de5a08;
  pppcStack_54 = (code ***)0x109f5d52;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109f7090;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109f5d63;
  FUN_109f9a10();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppuStack_60 = (undefined4 ***)0x109f5d79;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de3e56;
  pppuStack_60 = (undefined4 ***)0x11de3e40;
  pppuStack_64 = (undefined4 ***)0x109f5d99;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppuStack_64 = (undefined4 ***)FUN_109f7e30;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109f5daa;
  FUN_109f9a10();
  if (((undefined4 ****)pppcStack_50 != &pppuStack_64) &&
     ((undefined4 ****)pppcStack_50 != (undefined4 ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109f5dc0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppuStack_64;
  pppcStack_6c = (code ***)0x11de59df;
  pppcStack_70 = (code ***)0x11de59c8;
  pppcStack_74 = (code ***)0x109f5de0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109f7eb0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppuStack_7c = (undefined4 ***)0x109f5df1;
  FUN_109f9a10();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pppcStack_80 = (code ***)0x109f5e07;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11de59ee;
  pppcStack_80 = (code ***)0x11de59e0;
  pppcStack_84 = (code ***)0x109f5e27;
  pppuStack_60 = pppuStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)&DAT_109f7ea0;
  pppcStack_88 = (code ***)&pppuStack_7c;
  pppcStack_8c = (code ***)0x109f5e38;
  FUN_109f9a10();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109f5e4e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11de59ac;
  pppcStack_90 = (code ***)0x11de5998;
  pppcStack_94 = (code ***)0x109f5e6e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109f8280;
  pppuStack_98 = &pppcStack_8c;
  pppcStack_9c = (code ***)0x109f5e7f;
  FUN_109f9a10();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x109f5e95;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de59c4;
  pppcStack_a0 = (code ***)0x11de59b0;
  pppcStack_a4 = (code ***)0x109f5eb5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_109f8330;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109f5ec6;
  FUN_109f9a10();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x109f5edc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11de5cf3;
  pppcStack_b0 = (code ***)0x11de5cdc;
  pppcStack_b4 = (code ***)0x109f5efc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)AirshipOccupyView__BuildLevelInfoVO;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x109f5f0d;
  FUN_109f9a10();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x109f5f23;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11de5d11;
  pppcStack_c0 = (code ***)0x11de5cf4;
  pppcStack_c4 = (code ***)0x109f5f43;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_109f6650;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x109f5f54;
  FUN_109f9a10();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x109f5f6a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11de5cc5;
  pppcStack_d0 = (code ***)0x11de5cac;
  pppcStack_d4 = (code ***)0x109f5f8a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_109f9720;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x109f5f9b;
  FUN_109f9a10();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x109f5fb1;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11de5cd9;
  pppcStack_e0 = (code ***)0x11de5cc8;
  pppcStack_e4 = (code ***)0x109f5fd1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_109f8b50;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x109f5fe2;
  FUN_109f9a10();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x109f5ff8;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11de5c91;
  pppcStack_f0 = (code ***)0x11de5c84;
  pppcStack_f4 = (code ***)0x109f6018;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_109f9870;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x109f6029;
  FUN_109f9a10();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppuStack_100 = (undefined4 ***)0x109f603f;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11de5cab;
  pppuStack_100 = (undefined4 ***)0x11de5c94;
  pppuStack_104 = (undefined4 ***)0x109f605f;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppuStack_104 = (undefined4 ***)FUN_109f7ad0;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x109f6070;
  FUN_109f9a10();
  if (((undefined4 ****)pppcStack_f0 != &pppuStack_104) &&
     ((undefined4 ****)pppcStack_f0 != (undefined4 ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x109f6086;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppuStack_104;
  pppcStack_10c = (code ***)0x11de5c73;
  pppcStack_110 = (code ***)0x11de5c60;
  pppcStack_114 = (code ***)0x109f60a6;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_109f9530;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppuStack_11c = (undefined4 ***)0x109f60b7;
  FUN_109f9a10();
  if (((code ****)pppuStack_100 != &pppcStack_114) && ((code ****)pppuStack_100 != (code ****)0x0))
  {
    pppuStack_11c = pppuStack_100;
    pppcStack_120 = (code ***)0x109f60cd;
    FUN_10c3d5d0();
  }
  pppuStack_104 = &pppcStack_114;
  pppuStack_11c = (undefined4 ***)0x11de5c82;
  pppcStack_120 = (code ***)0x11de5c74;
  pppcStack_124 = (code ***)0x109f60ed;
  pppuStack_100 = pppuStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)&LAB_109f8d60;
  pppcStack_128 = (code ***)&pppuStack_11c;
  pppcStack_12c = (code ***)0x109f60fe;
  FUN_109f9a10();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppuStack_130 = (undefined4 ***)0x109f6114;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11de5c4a;
  pppuStack_130 = (undefined4 ***)0x11de5c3c;
  pppuStack_134 = (undefined4 ***)0x109f6134;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppuStack_134 = (undefined4 ***)FUN_109f8db0;
  pppuStack_138 = &pppcStack_12c;
  pppcStack_13c = (code ***)0x109f6145;
  FUN_109f9a10();
  if (((undefined4 ****)pppcStack_120 != &pppuStack_134) &&
     ((undefined4 ****)pppcStack_120 != (undefined4 ****)0x0)) {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x109f615b;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppuStack_134;
  pppcStack_13c = (code ***)0x11de5c5c;
  pppcStack_140 = (code ***)0x11de5c4c;
  pppcStack_144 = (code ***)0x109f617b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_109f8e20;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppuStack_14c = (undefined4 ***)0x109f618c;
  FUN_109f9a10();
  if (((code ****)pppuStack_130 != &pppcStack_144) && ((code ****)pppuStack_130 != (code ****)0x0))
  {
    pppuStack_14c = pppuStack_130;
    pppcStack_150 = (code ***)0x109f61a2;
    FUN_10c3d5d0();
  }
  pppuStack_134 = &pppcStack_144;
  pppuStack_14c = (undefined4 ***)0x11de5c23;
  pppcStack_150 = (code ***)0x11de5c14;
  pppcStack_154 = (code ***)0x109f61c2;
  pppuStack_130 = pppuStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)&LAB_109f8ec0;
  pppcStack_158 = (code ***)&pppuStack_14c;
  pppcStack_15c = (code ***)0x109f61d3;
  FUN_109f9a10();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x109f61e9;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11de5c38;
  pppcStack_160 = (code ***)0x11de5c24;
  pppcStack_164 = (code ***)0x109f6209;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_109f8cf0;
  pppuStack_168 = &pppcStack_15c;
  pppcStack_16c = (code ***)0x109f621a;
  FUN_109f9a10();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x109f6230;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11de5c02;
  pppcStack_170 = (code ***)0x11de5bf0;
  pppcStack_174 = (code ***)0x109f6250;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_109f8f10;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x109f6261;
  FUN_109f9a10();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    ppcStack_180 = (code **)0x109f6277;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11de5c10;
  ppcStack_180 = (code **)0x11de5c04;
  ppcStack_184 = (code **)0x109f6297;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  ppcStack_184 = (code **)FUN_109f8fc0;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x109f62a8;
  FUN_109f9a10();
  if ((pppcStack_170 != &ppcStack_184) && (pppcStack_170 != (code ***)0x0)) {
    pppcStack_18c = pppcStack_170;
    ppcStack_190 = (code **)0x109f62be;
    FUN_10c3d5d0();
  }
  pppcStack_174 = &ppcStack_184;
  pppcStack_18c = (code ***)0x11de5bd3;
  ppcStack_190 = (code **)0x11de5bc4;
  pcStack_194 = (code *)0x109f62de;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pcStack_194 = FUN_109f92b0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  ppcStack_19c = (code **)0x109f62ef;
  FUN_109f9a10();
  if ((ppcStack_180 != &pcStack_194) && (ppcStack_180 != (code **)0x0)) {
    ppcStack_19c = ppcStack_180;
    pcStack_1a0 = (char *)0x109f6305;
    FUN_10c3d5d0();
  }
  ppcStack_184 = &pcStack_194;
  ppcStack_19c = (code **)0x11de5bec;
  pcStack_1a0 = "ReqGuildAllShipByGuildID";
  pcStack_1a4 = (code *)0x109f6325;
  ppcStack_180 = ppcStack_184;
  FUN_100b62c0();
  pcStack_1a4 = FUN_109f9330;
  FUN_109f9a10(&ppcStack_19c);
  if ((ppcStack_190 != &pcStack_1a4) && (ppcStack_190 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_190);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f6650 @ 109f6650  size=794 ===== */
// calls: _localtime64_s, CCommerceInfo::BuildAvailableGoodsList
// strings:
//   "bufferIconArray"
//   "mh.view.HunterTeamBattle.Data.BufferIconVo"
//   "deadlineTime"
//   "iconIndex"
//   "isOwned"
//   "commerceName"
//   "buffDes"

/* [RE-AUTO c0]
   src: view.H
   calls: _localtime64_s
   strings:
     ""bufferIconArray""
     ""mh.view.HunterTeamBattle.Data.BufferIconVo""
     ""deadlineTime""
     ""iconIndex""
     ""isOwned""
     ""commerceName""
     ""buffDes"" */

void FUN_109f6650(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_44;
  tm tStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_9c;
  if (in_stack_00000014 == 1) {
    local_70 = (int *)0x0;
    local_6c = in_stack_00000010[1];
    local_64 = in_stack_00000010[3];
    local_68 = in_stack_00000010[2];
    local_60 = in_stack_00000010[4];
    if ((local_6c >> 6 & 1) != 0) {
      local_70 = (int *)*in_stack_00000010;
      (**(code **)(*local_70 + 4))(&local_70,local_68);
    }
    uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44);
    if (((DAT_1202e818 != 0) &&
        (uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44),
        *(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
       uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0xb4))();
      uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44);
      if (iVar2 != 0) {
        iVar3 = FUN_11398f30();
        uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44);
        if ((iVar3 != 0) &&
           (uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44),
           *(int *)(iVar2 + 0x2abc) != 0)) {
          piStack_58 = (int *)0x0;
          uStack_54 = 0;
          FUN_11a98a70(&piStack_58);
          FUN_104d12b0("bufferIconArray",auStack_5c);
          uStack_44 = FUN_111f8d20();
          _localtime64_s(&tStack_3c,&uStack_44);
          iStack_9c = 0;
          iStack_98 = 0;
          iStack_94 = 0;
          CCommerceInfo__BuildAvailableGoodsList(&iStack_9c);
          uStack_8c = 0;
          iVar2 = iStack_94 - iStack_98 >> 0x1f;
          if ((iStack_94 - iStack_98) / 0xc + iVar2 != iVar2) {
            iStack_9c = 0;
            do {
              iVar2 = iStack_9c;
              piStack_88 = (int *)0x0;
              uStack_84 = 0;
              FUN_11a98de0(&piStack_88,"mh.view.HunterTeamBattle.Data.BufferIconVo",0,0);
              iVar2 = FUN_109f5a80(*(undefined4 *)(iVar2 + unaff_EDI));
              if (iVar2 == 0) {
LAB_109f68db:
                if ((uStack_84 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
                }
                break;
              }
              iVar3 = FUN_104fd710(*(undefined4 *)(iVar2 + 0x60));
              if (iVar3 == 0) goto LAB_109f68db;
              FUN_104d1550("deadlineTime",*(int *)(iStack_9c + 8 + iStack_98) - uStack_44._4_4_);
              FUN_104d1550("iconIndex",*(undefined4 *)(iStack_9c + iStack_98));
              FUN_104d15e0("isOwned",*(undefined1 *)(iStack_9c + 4 + iStack_98));
              FUN_104d1670("commerceName",*(undefined4 *)(iVar2 + 0x28));
              FUN_104d1790("buffDes",iVar3 + 0x3ac);
              (**(code **)(*piStack_58 + 0x3c))(uStack_50,&piStack_88);
              FUN_104d7c10();
              uStack_8c = uStack_8c + 1;
              iStack_9c = iStack_9c + 0xc;
            } while (uStack_8c < (uint)((iStack_94 - iStack_98) / 0xc));
          }
          if (iStack_98 != 0) {
            FUN_10c3d5d0(iStack_98);
          }
          if ((uStack_54 >> 6 & 1) != 0) {
            (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
            piStack_58 = (int *)0x0;
          }
          uStack_54 = 0;
        }
      }
    }
    if ((local_6c >> 6 & 1) != 0) {
      (**(code **)(*local_70 + 8))(&local_70,local_68);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f7eb0 @ 109f7eb0  size=961 ===== */
// calls: CPet::SetName
// strings:
//   "shipName"
//   "shipDes"
//   "bufferDes"
//   "requireDes"
//   "indexIcon"
//   "shipID"
//   "chosenShipId"
//   "chosenShipName"
//   "isAuthority"
//   "rankInfoArray"
//   "mh.view.HunterTeamBattle.Data.RankVo"
//   "hunterGroupName"
//   "currentValue"
//   "commerceID"
//   "isLock"
//   "guildID"

/* [RE-AUTO c0]
   src: view.H
   strings:
     ""shipName""
     ""shipDes""
     ""bufferDes""
     ""requireDes""
     ""indexIcon""
     ""shipID""
     ""chosenShipId""
     ""chosenShipName""
     ""isAuthority""
     ""rankInfoArray"" */

void FUN_109f7eb0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar7;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  char *pcStack_88;
  char *pcStack_84;
  int **ppiStack_80;
  int iStack_7c;
  int aiStack_5c [2];
  undefined1 auStack_54 [4];
  int *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *piStack_3c;
  undefined4 uStack_34;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (in_stack_00000014 == 2) {
    local_50 = (int *)0x0;
    local_4c = in_stack_00000010[1];
    local_44 = in_stack_00000010[3];
    iStack_7c = in_stack_00000010[2];
    local_40 = in_stack_00000010[4];
    local_48 = iStack_7c;
    if ((local_4c >> 6 & 1) != 0) {
      local_50 = (int *)*in_stack_00000010;
      ppiStack_80 = &local_50;
      pcStack_84 = (char *)0x109f7f06;
      (**(code **)(*local_50 + 4))();
    }
    if (((in_stack_00000010[7] & 0x8f) == 3) ||
       (uVar7 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
      uVar7 = in_stack_00000010[8];
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iStack_7c = 0x109f7f51;
      iVar2 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 0x2abc), piVar1 != (int *)0x0)) {
        iStack_7c = 0x109f7f72;
        iVar2 = FUN_11398f30();
        if (iVar2 != 0) {
          ppiStack_80 = (int **)aiStack_5c;
          pcStack_84 = (char *)0x109f7f8d;
          iStack_7c = uVar7;
          FUN_11175060();
          pcStack_88 = (char *)0x109f7f93;
          pcStack_84 = (char *)uVar7;
          iVar3 = FUN_109f5a80();
          if (iVar3 != 0) {
            iStack_7c = *(undefined4 *)(iVar2 + 0x1d8);
            ppiStack_80 = (int **)0x109f7fab;
            iVar4 = FUN_109f5a80();
            if (iVar4 != 0) {
              iStack_7c = *(undefined4 *)(iVar3 + 0x60);
              ppiStack_80 = (int **)0x109f7fc2;
              iVar5 = FUN_104fd710();
              if (iVar5 != 0) {
                iStack_7c = *(undefined4 *)(iVar3 + 0x28);
                ppiStack_80 = (int **)0x11de5f74;
                pcStack_84 = (char *)0x109f7fe7;
                FUN_104d1670();
                pcStack_84 = *(char **)(iVar3 + 0x58);
                pcStack_88 = "shipDes";
                FUN_104d1670();
                FUN_104d1790("bufferDes",iVar5 + 0x3ac);
                FUN_104d1550("requireDes",*(undefined4 *)(iVar3 + 0x5c));
                FUN_104d1670("indexIcon",*(undefined4 *)(iVar3 + 0x40));
                FUN_104d1550("shipID",uVar7);
                FUN_104d1440("chosenShipId",*(undefined4 *)(iVar2 + 0x1d8));
                FUN_104d1670("chosenShipName",*(undefined4 *)(iVar4 + 0x28));
                ppiStack_80 = (int **)0x109f808e;
                iStack_7c = uVar7;
                uVar6 = (**(code **)(*piVar1 + 0x210))();
                ppiStack_80 = (int **)(uVar6 & 0xff);
                pcStack_84 = "isAuthority";
                pcStack_88 = (char *)0x109f80a2;
                FUN_104d15e0();
                uStack_24 = 0;
                ppiStack_80 = (int **)&uStack_24;
                uStack_20 = 0;
                pcStack_84 = (char *)0x109f80c1;
                FUN_11a98a70();
                pcStack_84 = auStack_28;
                pcStack_88 = "rankInfoArray";
                FUN_104d12b0();
                iVar2 = (int)piVar1 - iVar4 >> 0x1f;
                if (((int)piVar1 - iVar4) / 0x36 + iVar2 != iVar2) {
                  iVar2 = 0;
                  uVar6 = 0;
                  do {
                    pcStack_84 = (char *)0x0;
                    pcStack_88 = (char *)0x0;
                    local_40 = 0;
                    piStack_3c = (int *)0x0;
                    FUN_11a98de0(&local_40,"mh.view.HunterTeamBattle.Data.RankVo");
                    FUN_104d1550(&DAT_11dda898,(int)*(char *)(unaff_ESI + 0x35 + iVar2));
                    pcStack_84 = (char *)0x0;
                    CPet__SetName(unaff_ESI + 0xc + iVar2);
                    FUN_104d1790("hunterGroupName",&pcStack_88);
                    FUN_100e5670();
                    FUN_104d1440("currentValue",*(undefined4 *)(unaff_EDI + 4 + iVar2));
                    FUN_104d1440("commerceID",*(undefined4 *)(unaff_EDI + iVar2));
                    FUN_104d15e0("isLock",*(int *)(unaff_EDI + 4 + iVar2) != 0);
                    FUN_104d14d0("guildID");
                    (**(code **)(*piStack_3c + 0x3c))(uStack_34,auStack_54);
                    FUN_104d7c10();
                    uVar6 = uVar6 + 1;
                    iVar2 = iVar2 + 0x36;
                  } while (uVar6 < (uint)(((int)piVar1 - iVar4) / 0x36));
                }
                pcStack_84 = (char *)0x109f823a;
                FUN_104d7c10();
              }
            }
          }
          if (aiStack_5c[0] != 0) {
            iStack_7c = aiStack_5c[0];
            ppiStack_80 = (int **)0x109f8248;
            FUN_10c3d5d0();
          }
        }
      }
    }
    if ((local_4c >> 6 & 1) != 0) {
      ppiStack_80 = &local_50;
      iStack_7c = local_48;
      pcStack_84 = (char *)0x109f8268;
      (**(code **)(*local_50 + 8))();
    }
  }
  return;
}



/* ===== FUN_10a18d70 @ 10a18d70  size=280 ===== */
// calls: memset
// strings:
//   "Count=%d,Average=%d"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""Count=%d,Average=%d"" */

void __fastcall FUN_10a18d70(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_108[0] = '\0';
  memset(local_108 + 1,0,0xff);
  if (*param_1 == '\0') {
    uVar8 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x14);
  }
  uVar2 = FUN_10a18ed0();
  FUN_100b4300(local_108,"Count=%d,Average=%d",uVar8,uVar2);
  pcVar4 = local_108;
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  FUN_100d83d0(local_108,pcVar6);
  uVar9 = 0;
  iVar3 = FUN_10a18d60();
  if (iVar3 != 0) {
    do {
      uVar5 = *(uint *)(param_1 + 0x14);
      uVar7 = uVar9;
      if (uVar5 <= uVar9) {
        uVar7 = *(uint *)(param_1 + 4);
      }
      if ((*param_1 != '\0') && (uVar7 = uVar7 + *(int *)(param_1 + 4) + 1, uVar5 <= uVar7)) {
        uVar7 = uVar7 - uVar5;
      }
      FUN_100b4300(local_108,&DAT_11de8b40,*(undefined4 *)(*(int *)(param_1 + 8) + uVar7 * 4));
      pcVar4 = local_108;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_100d9260(local_108,local_108 + ((int)pcVar4 - (int)(local_108 + 1)));
      uVar9 = uVar9 + 1;
      uVar5 = FUN_10a18d60();
    } while (uVar9 < uVar5);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10a21390 @ 10a21390  size=47 ===== */
// calls: exception, _CxxThrowException
// strings:
//   "buffer overflow"

/* [RE-AUTO c0]
   calls: exception, _CxxThrowException
   strings:
     ""buffer overflow"" */

void FUN_10a21390(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  local_8 = "buffer overflow";
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = &PTR_FUN_11de8e8c;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_11df166c);
}



/* ===== FUN_10a21a90 @ 10a21a90  size=47 ===== */
// calls: exception, _CxxThrowException
// strings:
//   "buffer overflow"

/* [RE-AUTO c0]
   calls: exception, _CxxThrowException
   strings:
     ""buffer overflow"" */

void FUN_10a21a90(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  local_8 = "buffer overflow";
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = &PTR_FUN_11de8e8c;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_11df166c);
}



/* ===== FUN_10a42e30 @ 10a42e30  size=973 ===== */
// calls: memset
// strings:
//   "buffer error"
//   "stream error"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""buffer error""
     ""stream error"" */

uint FUN_10a42e30(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
     || (4 < param_2)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)PTR_s_stream_error_11d9b3e0;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) goto LAB_10a43039;
  iVar2 = puVar1[8];
  *puVar1 = param_1;
  puVar1[8] = param_2;
  if (puVar1[1] == 0x2a) {
    if (puVar1[6] == 2) {
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0x1f;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0x8b;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 8;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      if (puVar1[0x1f] == 9) {
        uVar3 = 2;
      }
      else if (((int)puVar1[0x20] < 2) && (1 < (int)puVar1[0x1f])) {
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
      *(undefined1 *)(puVar1[5] + puVar1[2]) = uVar3;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0xff;
      puVar1[5] = puVar1[5] + 1;
      puVar1[1] = 0x71;
      param_1[0xc] = 0;
    }
    else {
      puVar1[1] = 0x71;
      FUN_10a42db0();
      if (puVar1[0x19] != 0) {
        FUN_10a42db0();
        FUN_10a42db0();
      }
      param_1[0xc] = 1;
    }
  }
  if (puVar1[5] == 0) {
    if (((param_1[1] == 0) && ((int)param_2 <= iVar2)) && (param_2 != 4)) goto LAB_10a43039;
LAB_10a43029:
    if (puVar1[1] == 0x29a) {
      if (param_1[1] != 0) {
LAB_10a43039:
        param_1[6] = (int)PTR_s_buffer_error_11d9b3ec;
        return 0xfffffffb;
      }
LAB_10a43051:
      if ((puVar1[0x1b] != 0) || ((param_2 != 0 && (puVar1[1] != 0x29a)))) goto LAB_10a4306a;
    }
    else {
      if (param_1[1] == 0) goto LAB_10a43051;
LAB_10a4306a:
      iVar2 = (*(code *)(&PTR_FUN_11d9b5d0)[puVar1[0x1f] * 3])(puVar1,param_2);
      if ((iVar2 == 2) || (iVar2 == 3)) {
        puVar1[1] = 0x29a;
      }
      if ((iVar2 == 0) || (iVar2 == 2)) {
        if (param_1[4] != 0) {
          return 0;
        }
        puVar1[8] = 0xffffffff;
        return 0;
      }
      if (iVar2 == 1) {
        if (param_2 == 1) {
          FUN_10a45340();
        }
        else {
          FUN_10a45290(0,0);
          if (param_2 == 3) {
            *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
            memset((void *)puVar1[0xf],0,puVar1[0x11] * 2 - 2);
          }
        }
        FUN_10a42de0();
        if (param_1[4] == 0) goto LAB_10a4300c;
      }
    }
    if (param_2 == 4) {
      if ((int)puVar1[6] < 1) {
        return 1;
      }
      if (puVar1[6] == 2) {
        *(char *)(puVar1[5] + puVar1[2]) = (char)param_1[0xc];
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x31);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x32);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x33);
        puVar1[5] = puVar1[5] + 1;
        *(char *)(puVar1[5] + puVar1[2]) = (char)param_1[2];
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 9);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 10);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0xb);
        puVar1[5] = puVar1[5] + 1;
      }
      else {
        FUN_10a42db0();
        FUN_10a42db0();
      }
      FUN_10a42de0();
      if (0 < (int)puVar1[6]) {
        puVar1[6] = -puVar1[6];
      }
      return (uint)(puVar1[5] == 0);
    }
  }
  else {
    FUN_10a42de0();
    if (param_1[4] != 0) goto LAB_10a43029;
LAB_10a4300c:
    puVar1[8] = 0xffffffff;
  }
  return 0;
}



/* ===== FUN_10a4ca80 @ 10a4ca80  size=1246 ===== */
// strings:
//   "sound"
//   "footstep"
//   "foley"
//   "groundEffect"
//   "swimmingStroke"
//   "footstep_impulse"
//   "ForceFeedback"
//   "leftHand"
//   "rightHand"
//   "DeathReactionEnd"
//   "ReactionOnCollision"
//   "ForbidReactions"
//   "RagdollStart"
//   "StartFire"
//   "StopFire"
//   "ShootGrenade"
//   "MeleeHit"
//   "slide"
//   "falldown"
//   "jumpup"

/* [RE-AUTO c0]
   strings:
     ""sound""
     ""footstep""
     ""foley""
     ""groundEffect""
     ""swimmingStroke""
     ""footstep_impulse""
     ""ForceFeedback""
     ""leftHand""
     ""rightHand""
     ""DeathReactionEnd"" */

void __fastcall FUN_10a4ca80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x49) == '\0') {
    (**(code **)(*(int *)*DAT_1202e818 + 0x298))();
    uVar1 = FUN_10a76aa0("sound");
    *param_1 = uVar1;
    uVar1 = FUN_10a76aa0("footstep");
    param_1[1] = uVar1;
    uVar1 = FUN_10a76aa0("foley");
    param_1[2] = uVar1;
    uVar1 = FUN_10a76aa0("groundEffect");
    param_1[3] = uVar1;
    uVar1 = FUN_10a76aa0("swimmingStroke");
    param_1[4] = uVar1;
    uVar1 = FUN_10a76aa0("footstep_impulse");
    param_1[5] = uVar1;
    uVar1 = FUN_10a76aa0("ForceFeedback");
    param_1[6] = uVar1;
    uVar1 = FUN_10a76aa0("leftHand");
    param_1[8] = uVar1;
    uVar1 = FUN_10a76aa0("rightHand");
    param_1[9] = uVar1;
    uVar1 = FUN_10a76aa0("DeathReactionEnd");
    param_1[10] = uVar1;
    uVar1 = FUN_10a76aa0("ReactionOnCollision");
    param_1[0xb] = uVar1;
    uVar1 = FUN_10a76aa0("ForbidReactions");
    param_1[0xc] = uVar1;
    uVar1 = FUN_10a76aa0("RagdollStart");
    param_1[0xd] = uVar1;
    uVar1 = FUN_10a76aa0(&DAT_11cbd71c);
    param_1[0xe] = uVar1;
    uVar1 = FUN_10a76aa0("StartFire");
    param_1[0xf] = uVar1;
    uVar1 = FUN_10a76aa0("StopFire");
    param_1[0x10] = uVar1;
    uVar1 = FUN_10a76aa0("ShootGrenade");
    param_1[0x11] = uVar1;
    uVar1 = FUN_10a76aa0("MeleeHit");
    param_1[0x12] = uVar1;
    uVar1 = FUN_10a76aa0("slide");
    param_1[0x13] = uVar1;
    uVar1 = FUN_10a76aa0(&DAT_11cbd760);
    param_1[0x14] = uVar1;
    uVar1 = FUN_10a76aa0("falldown");
    param_1[0x15] = uVar1;
    uVar1 = FUN_10a76aa0("jumpup");
    param_1[0x16] = uVar1;
    uVar1 = FUN_10a76aa0("jumpdown");
    param_1[0x17] = uVar1;
    uVar1 = FUN_10a76aa0("takeoff");
    param_1[0x18] = uVar1;
    uVar1 = FUN_10a76aa0("landing");
    param_1[0x19] = uVar1;
    uVar1 = FUN_10a76aa0("ragep");
    param_1[0x1a] = uVar1;
    uVar1 = FUN_10a76aa0("raged");
    param_1[0x1b] = uVar1;
    uVar1 = FUN_10a76aa0("ragen");
    param_1[0x1c] = uVar1;
    uVar1 = FUN_10a76aa0("rageg");
    param_1[0x1d] = uVar1;
    uVar1 = FUN_10a76aa0("ragec");
    param_1[0x1e] = uVar1;
    uVar1 = FUN_10a76aa0("mh_footstep_mst_s");
    param_1[0x1f] = uVar1;
    uVar1 = FUN_10a76aa0("mh_footstep_mst_m");
    param_1[0x20] = uVar1;
    uVar1 = FUN_10a76aa0("mh_footstep_mst_l");
    param_1[0x21] = uVar1;
    uVar1 = FUN_10a76aa0("mh_slide_mst_s");
    param_1[0x22] = uVar1;
    uVar1 = FUN_10a76aa0("mh_slide_mst_m");
    param_1[0x23] = uVar1;
    uVar1 = FUN_10a76aa0("mh_slide_mst_l");
    param_1[0x24] = uVar1;
    uVar1 = FUN_10a76aa0("mh_roll_mst_s");
    param_1[0x25] = uVar1;
    uVar1 = FUN_10a76aa0("mh_roll_mst_m");
    param_1[0x26] = uVar1;
    uVar1 = FUN_10a76aa0("mh_roll_mst_l");
    param_1[0x27] = uVar1;
    uVar1 = FUN_10a76aa0("mh_falldown_mst_s");
    param_1[0x28] = uVar1;
    uVar1 = FUN_10a76aa0("mh_falldown_mst_m");
    param_1[0x29] = uVar1;
    uVar1 = FUN_10a76aa0("mh_falldown_mst_l");
    param_1[0x2a] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpup_mst_s");
    param_1[0x2b] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpup_mst_m");
    param_1[0x2c] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpup_mst_l");
    param_1[0x2d] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpdown_mst_s");
    param_1[0x2e] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpdown_mst_m");
    param_1[0x2f] = uVar1;
    uVar1 = FUN_10a76aa0("mh_jumpdown_mst_l");
    param_1[0x30] = uVar1;
    uVar1 = FUN_10a76aa0("mh_takeoff_mst_s");
    param_1[0x31] = uVar1;
    uVar1 = FUN_10a76aa0("mh_takeoff_mst_m");
    param_1[0x32] = uVar1;
    uVar1 = FUN_10a76aa0("mh_takeoff_mst_l");
    param_1[0x33] = uVar1;
    uVar1 = FUN_10a76aa0("mh_landing_mst_s");
    param_1[0x34] = uVar1;
    uVar1 = FUN_10a76aa0("mh_landing_mst_m");
    param_1[0x35] = uVar1;
    uVar1 = FUN_10a76aa0("mh_landing_mst_l");
    param_1[0x36] = uVar1;
    uVar1 = FUN_10a76aa0("mh_swing_mst_s");
    param_1[0x37] = uVar1;
    uVar1 = FUN_10a76aa0("mh_swing_mst_m");
    param_1[0x38] = uVar1;
    uVar1 = FUN_10a76aa0("mh_swing_mst_l");
    param_1[0x39] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergein_mst_s");
    param_1[0x3a] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergein_mst_m");
    param_1[0x3b] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergein_mst_l");
    param_1[0x3c] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergeout_mst_s");
    param_1[0x3d] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergeout_mst_m");
    param_1[0x3e] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submergeout_mst_l");
    param_1[0x3f] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submove_mst_s");
    param_1[0x40] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submove_mst_m");
    param_1[0x41] = uVar1;
    uVar1 = FUN_10a76aa0("mh_submove_mst_l");
    param_1[0x42] = uVar1;
    uVar1 = FUN_10a76aa0("mh_glide_mst_s");
    param_1[0x43] = uVar1;
    uVar1 = FUN_10a76aa0("mh_glide_mst_m");
    param_1[0x44] = uVar1;
    uVar1 = FUN_10a76aa0("mh_glide_mst_l");
    param_1[0x45] = uVar1;
    uVar1 = FUN_10a76aa0("mh_hitground_mst_s");
    param_1[0x46] = uVar1;
    uVar1 = FUN_10a76aa0("mh_hitground_mst_m");
    param_1[0x47] = uVar1;
    uVar1 = FUN_10a76aa0("mh_hitground_mst_l");
    param_1[0x48] = uVar1;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



/* ===== FUN_10a51180 @ 10a51180  size=438 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "PropertiesInstance.NPCSkillFile"
//   "Skill"
//   ".AISetting.Skill"
//   "PropertyCustom"

/* [RE-AUTO c0]
   strings:
     ""PropertiesInstance.NPCSkillFile""
     ""Skill""
     "".AISetting.Skill""
     ""PropertyCustom"" */

void __thiscall FUN_10a51180(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 local_20 [12];
  int *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar2 = false;
  bVar1 = false;
  local_14 = (int *)0x0;
  (**(code **)(*param_2 + 0xb0))(param_1,0);
  (**(code **)(*param_2 + 0xbc))(param_1);
  local_14 = *(int **)(param_1 + 0xc);
  piVar5 = (int *)(**(code **)(*local_14 + 0x150))(2);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x38))();
    if (iVar6 != 0) {
      cVar4 = FUN_10a68e20("PropertiesInstance.NPCSkillFile",&local_8);
      if (cVar4 == '\0') {
        cVar4 = FUN_10a68a90("Skill",&local_8);
        if (cVar4 == '\0') {
          bVar2 = true;
          bVar1 = true;
          uVar7 = CInfoRecord__GetModelString("PropertyCustom",".AISetting.Skill");
          puVar8 = (undefined4 *)FUN_10a4b980(&local_c,uVar7);
          cVar4 = FUN_10a68e20(*puVar8,&local_8);
          if (cVar4 == '\0') goto LAB_10a5122e;
        }
      }
      bVar3 = true;
      goto LAB_10a51232;
    }
  }
LAB_10a5122e:
  bVar3 = false;
LAB_10a51232:
  if (bVar1) {
    piVar5 = (int *)(local_c + -0xc);
    if (-1 < *piVar5) {
      iVar6 = FUN_10c3dad0(piVar5);
      if (iVar6 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
        FUN_10c3d900(piVar5);
      }
    }
  }
  if (bVar2) {
    piVar5 = (int *)(local_10 + -0xc);
    if (-1 < *piVar5) {
      iVar6 = FUN_10c3dad0(piVar5);
      if (iVar6 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
        FUN_10c3d900(piVar5);
      }
    }
  }
  if (bVar3) {
    if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x58);
    }
    FUN_11070f80(local_8);
    iVar6 = FUN_11071b90();
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x58);
    }
    uVar7 = FUN_110785d0(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
  }
  (**(code **)(**(int **)(param_1 + 0x135c) + 0x40))();
  FUN_10a5ca10();
  puVar9 = (undefined8 *)(**(code **)(*local_14 + 200))(local_20);
  *(undefined8 *)(param_1 + 0x149c) = *puVar9;
  *(undefined4 *)(param_1 + 0x14a4) = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)(param_1 + 0x14a8) = *puVar9;
  *(undefined4 *)(param_1 + 0x14b0) = *(undefined4 *)(puVar9 + 1);
  return;
}



/* ===== FUN_10a54e40 @ 10a54e40  size=4457 ===== */
// strings:
//   "stance"
//   "stanceId"
//   "normalSpeed"
//   "maxSpeed"
//   "walkSpeed"
//   "runSpeed"
//   "playbackRunSpeed"
//   "customStrafeMultiplier"
//   "customBackwardsMultiplier"
//   "sprintSpeed"
//   "heightCollider"
//   "heightPivot"
//   "modelOffset"
//   "viewOffset"
//   "leanLeftViewOffset"
//   "leanRightViewOffset"
//   "weaponOffset"
//   "leanLeftWeaponOffset"
//   "leanRightWeaponOffset"
//   "useCapsule"

/* [RE-AUTO c0]
   strings:
     ""stance""
     ""stanceId""
     ""normalSpeed""
     ""maxSpeed""
     ""walkSpeed""
     ""runSpeed""
     ""playbackRunSpeed""
     ""customStrafeMultiplier""
     ""customBackwardsMultiplier""
     ""sprintSpeed"" */

void __thiscall FUN_10a54e40(int *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_11c [8];
  int local_114;
  int *local_110;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  undefined1 local_e4 [12];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  char local_54 [32];
  undefined1 local_34;
  undefined1 local_30 [12];
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  int *local_c;
  char local_5;
  
  local_c = (int *)0x0;
  local_10 = param_1;
  cVar4 = FUN_10a68ce0("stance",&local_c);
  piVar3 = local_c;
  if (cVar4 != '\0') {
    (**(code **)(*local_c + 0x48))(local_11c);
    cVar4 = (**(code **)(*piVar3 + 0x4c))(local_11c);
    piVar7 = local_110;
    while (cVar4 != '\0') {
      local_110 = piVar7;
      if (local_114 == 6) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 8))();
        }
        local_24 = 4;
        cVar4 = (**(code **)(*piVar7 + 0x20))("stanceId",&local_24,0);
        if ((cVar4 == '\0') || (local_24 != 4)) {
          local_5 = '\0';
          if (local_24 == 6) {
            cVar4 = local_5;
            if (local_20 != (int *)0x0) {
              (**(code **)(*local_20 + 0xc))();
              cVar4 = local_5;
            }
          }
          else {
            cVar4 = '\0';
            if ((local_24 == 7) && (local_20 != (int *)0x0)) {
              (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
              cVar4 = local_5;
            }
          }
        }
        else {
          local_14 = (int)(float)local_20;
          cVar4 = '\x01';
        }
        local_20 = (int *)0x0;
        local_24 = 0;
        if (cVar4 != '\0') {
          FUN_10a70050();
          (**(code **)(*piVar7 + 0x30))();
          FUN_10a68f50("normalSpeed",local_74);
          FUN_10a68f50("maxSpeed",local_70);
          FUN_10a68f50("walkSpeed",local_6c);
          FUN_10a68f50("runSpeed",local_68);
          FUN_10a68f50("playbackRunSpeed",local_58);
          FUN_10a68f50("customStrafeMultiplier",local_60);
          FUN_10a68f50("customBackwardsMultiplier",local_5c);
          FUN_10a68f50("sprintSpeed",local_64);
          FUN_10a68f50("heightCollider",local_f0);
          FUN_10a68f50("heightPivot",local_ec);
          FUN_10a69050(&DAT_11cbc874,local_e4);
          FUN_10a69050("modelOffset",local_30);
          FUN_10a69050("viewOffset",&local_d8);
          local_b8 = local_d0;
          local_c4 = local_d0;
          local_c0 = local_d8;
          local_cc = local_d8;
          FUN_10a69050("leanLeftViewOffset",&local_cc);
          FUN_10a69050("leanRightViewOffset",&local_c0);
          FUN_10a69050("weaponOffset",&local_98);
          local_78 = local_90;
          local_84 = local_90;
          local_80 = local_98;
          uStack_7c = uStack_94;
          local_8c = local_98;
          uStack_88 = uStack_94;
          FUN_10a69050("leanLeftWeaponOffset",&local_8c);
          FUN_10a69050("leanRightWeaponOffset",&local_80);
          FUN_10a690f0("useCapsule",&local_e8);
          FUN_10a690f0("bZMove",&local_e7);
          FUN_10a690f0("bAnimLevel",local_e6);
          cVar4 = FUN_10a68fd0(&DAT_11dbac80,&local_c);
          piVar6 = local_c;
          if (cVar4 != '\0') {
            piVar8 = local_c;
            do {
              iVar5 = *piVar8;
              piVar8 = (int *)((int)piVar8 + 1);
              (local_58 + (3 - (int)piVar6))[(int)piVar8] = (char)iVar5;
            } while ((char)iVar5 != '\0');
          }
          (**(code **)(*piVar7 + 0x34))();
          local_34 = 1;
          (**(code **)(*param_1 + 0x5f8))(local_14,local_f0);
        }
        (**(code **)(*piVar7 + 0xc))();
      }
      cVar4 = (**(code **)(*piVar3 + 0x4c))(local_11c);
      piVar7 = local_110;
    }
    (**(code **)(*piVar3 + 0x50))(local_11c);
    FUN_10a720a0();
  }
  iVar5 = (**(code **)(*param_1 + 0x4e0))();
  if (iVar5 == 0) goto LAB_10a55f95;
  FUN_10a68a10("maxGrabMass",iVar5);
  FUN_10a68a10("maxGrabVolume",iVar5 + 4);
  FUN_10a68da0("nanoSuitActive",iVar5 + 8);
  param_2 = (int *)0x0;
  cVar4 = FUN_10a68bb0("lookAtSimpleHeadBone",&param_2);
  pcVar2 = (char *)param_2;
  if (cVar4 != '\0') {
    if (param_2 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      pcVar1 = (char *)((int)param_2 + 1);
      do {
        cVar4 = *(char *)param_2;
        param_2 = (int *)((int)param_2 + 1);
      } while (cVar4 != '\0');
      iVar9 = (int)param_2 - (int)pcVar1;
      param_2 = (int *)pcVar1;
    }
    FUN_1083ab70(pcVar2,iVar9);
  }
  cVar4 = FUN_10a68a10("aimFOV",iVar5 + 0x5c);
  if (cVar4 != '\0') {
    *(float *)(iVar5 + 0x5c) = *(float *)(iVar5 + 0x5c) * DAT_11de98c0;
  }
  cVar4 = FUN_10a68a10("lookFOV",iVar5 + 0x54);
  if (cVar4 != '\0') {
    *(float *)(iVar5 + 0x54) = *(float *)(iVar5 + 0x54) * DAT_11de98c0;
  }
  cVar4 = FUN_10a68a10("lookInVehicleFOV",iVar5 + 0x58);
  piVar7 = local_10;
  if (cVar4 == '\0') {
    *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar5 + 0x54);
  }
  else {
    *(float *)(iVar5 + 0x58) = *(float *)(iVar5 + 0x58) * DAT_11de98c0;
  }
  local_c = (int *)0x0;
  piVar6 = (int *)(**(code **)(*(int *)local_10[3] + 0x150))(2);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x38))();
  }
  cVar4 = FUN_10a68ea0("PropertyCustom.Common",&local_c);
  if (cVar4 == '\0') {
    piVar7 = (int *)(**(code **)(*(int *)piVar7[3] + 0x150))(2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x38))();
    }
    cVar4 = FUN_10a68ce0("Properties",&local_c);
    if (cVar4 != '\0') goto LAB_10a552fe;
  }
  else {
LAB_10a552fe:
    param_2 = (int *)0x0;
    cVar4 = FUN_10a68ce0("CharacterSounds",&param_2);
    piVar7 = param_2;
    if (cVar4 != '\0') {
      (**(code **)(*param_2 + 0x30))();
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("footstepEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("remoteFootstepEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("foleyEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      FUN_10a690f0("bFootstepGearEffect",iVar5 + 0x7c);
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("footstepIndGearAudioSignal_Walk",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("footstepIndGearAudioSignal_Run",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("slideEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("rollEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("falldownEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("jumpupEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("jumpdownEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("takeoffEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("landingEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("ragepEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("ragedEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("ragenEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("ragegEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("ragecEffect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_footstep_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_footstep_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_footstep_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_slide_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_slide_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_slide_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_roll_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_roll_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_roll_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_falldown_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_falldown_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_falldown_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpup_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpup_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpup_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpdown_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpdown_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_jumpdown_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_takeoff_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_takeoff_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_takeoff_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_landing_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_landing_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_landing_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_swing_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_swing_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_swing_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergein_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergein_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergein_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergeout_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergeout_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submergeout_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submove_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submove_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_submove_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_glide_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_glide_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_glide_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_hitground_mst_s_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_hitground_mst_m_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && (*(char *)param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      param_2 = (int *)0x0;
      cVar4 = FUN_10a68fd0("mh_hitground_mst_l_Effect",&param_2);
      if (((cVar4 != '\0') && (param_2 != (int *)0x0)) && ((char)*param_2 != '\0')) {
        FUN_1083ac30(param_2);
      }
      (**(code **)(*piVar7 + 0x34))();
    }
    param_2 = (int *)((uint)param_2 & 0xffffff);
    cVar4 = FUN_10a68da0("enableswimming",(int)&param_2 + 3);
    piVar6 = local_10;
    if (cVar4 != '\0') {
      *(undefined1 *)(local_10 + 0x532) = param_2._3_1_;
      FUN_10a68a10("waterlevel",local_10 + 0x533);
      FUN_10a68a10("groundbottom",piVar6 + 0x534);
    }
    *(undefined1 *)((int)piVar6 + 0x5b) = 0;
    FUN_10a68da0("IgnoreShadowProxy",(undefined1 *)((int)piVar6 + 0x5b));
    cVar4 = (**(code **)(*piVar6 + 0x1d4))();
    if (cVar4 != '\0') {
      FUN_10a68da0("enablescar",piVar6 + 0x535);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0xc))();
  }
LAB_10a55f95:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  return;
}



/* ===== FUN_10a63ae0 @ 10a63ae0  size=1331 ===== */
// strings:
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* [RE-AUTO c0]
   strings:
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

undefined1 __thiscall FUN_10a63ae0(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 local_48;
  int *local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_14 = param_1;
  if (((int *)param_1[3] == (int *)0x0) ||
     (piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2), piVar3 == (int *)0x0)) {
    piVar3 = (int *)0x0;
  }
  else {
    local_8 = (int *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = local_8;
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))();
      (**(code **)(*DAT_1201ff00 + 0x88))(param_1,&DAT_11cbee18,0,0,1,0,0);
      local_38 = 0;
      local_18 = 0;
      local_2c = 0;
      local_24 = param_3;
      local_44 = (int *)0x0;
      local_40 = 0;
      local_34 = 0;
      local_28 = 0x3f800000;
      local_48 = 1;
      iVar4 = FUN_11111ec0(*(undefined4 *)(param_2 + 0x14));
      if (iVar4 != 0) {
        FUN_10a79cc0(&param_3,*(undefined4 *)(param_2 + 0x2c),&DAT_11cbc0f0);
        piVar3 = param_3;
        cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(param_3,0);
        if (cVar2 == '\0') {
          local_44 = *(int **)(param_2 + 0x2c);
        }
        else {
          local_44 = piVar3;
        }
        (**(code **)(*DAT_1201ff00 + 0x88))(param_1,*(undefined4 *)(iVar4 + 4),0,1,1,0,&local_48);
        piVar5 = piVar3 + -3;
        if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - piVar3[-1]);
          FUN_10c3d900(piVar5);
        }
      }
      FUN_10a60b80();
      piVar3 = local_8;
      if (((int *)param_1[3] != (int *)0x0) &&
         (iVar4 = (**(code **)(*(int *)param_1[3] + 0x1b8))(0), piVar3 = local_8, iVar4 != 0)) {
        piVar3 = (int *)(**(code **)(*param_1 + 400))();
        param_3 = piVar3;
        local_10 = (undefined4 *)FUN_11111ec0(*(undefined4 *)(param_2 + 0x14));
        if (local_10 != (undefined4 *)0x0) {
          local_c = local_10 + 1;
          param_2 = 0;
          cVar2 = FUN_10a67670(local_c,&DAT_11d9d32b);
          if (cVar2 != '\0') {
            piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
            param_2 = (**(code **)(*piVar5 + 0xc))(*local_c);
          }
          local_10 = local_10 + 2;
          local_c = (undefined4 *)0x0;
          cVar2 = FUN_10a67670(local_10,&DAT_11d9d32b);
          if (cVar2 == '\0') {
            iVar4 = 0;
          }
          else {
            piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
            iVar4 = (**(code **)(*piVar5 + 0xc))(*local_10);
            local_c = (undefined4 *)iVar4;
          }
          if (param_2 != 0) {
            if (iVar4 == 0) {
              iVar4 = (**(code **)(*piVar3 + 0xc0))(param_2,0);
              if (iVar4 == 0) goto LAB_10a63e0b;
            }
            else {
              iVar4 = (**(code **)(*piVar3 + 0xc0))();
              if (iVar4 != 0) {
                uVar6 = (**(code **)(*piVar3 + 0xc0))(param_2,0);
                piVar3 = (int *)(**(code **)(*DAT_1201ff00 + 0x54))(uVar6);
                iVar4 = *piVar3;
                uVar6 = (**(code **)(*param_3 + 0xc0))(local_c,0);
                (**(code **)(iVar4 + 0x110))(uVar6);
                piVar3 = param_3;
              }
              puVar1 = local_c;
              iVar4 = (**(code **)(*piVar3 + 0xc0))(local_c,0);
              if (iVar4 != 0) {
                uVar6 = (**(code **)(*piVar3 + 0xc0))(puVar1,0);
                piVar3 = (int *)(**(code **)(*DAT_1201ff00 + 0x54))(uVar6);
                iVar4 = *piVar3;
                uVar6 = (**(code **)(*param_3 + 0xc0))(param_2,0);
                (**(code **)(iVar4 + 0x10c))(uVar6);
                piVar3 = param_3;
              }
            }
            uVar6 = (**(code **)(*piVar3 + 0xc0))(param_2,0);
            (**(code **)(*DAT_1201ff00 + 0x54))(uVar6);
            iVar4 = *DAT_1202f458;
            uVar6 = (**(code **)(*param_3 + 0xc0))(param_2,0,1);
            (**(code **)(iVar4 + 0x90))(param_1,uVar6);
            (**(code **)(*param_1 + 0x184))(1,1);
          }
        }
LAB_10a63e0b:
        iVar4 = FUN_10a60b80();
        if (iVar4 != 0) {
          if (*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0) {
            (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))();
          }
          piVar5 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
          piVar3 = local_8;
          if (piVar5 == (int *)0x0) goto LAB_10a63ffd;
          param_3 = (int *)(**(code **)(*piVar5 + 0x58))();
          if (param_3 != (int *)0x0) {
            iVar4 = (**(code **)(*param_3 + 0x24))();
            piVar3 = param_3;
            iVar9 = 0;
            if (0 < iVar4) {
              do {
                piVar5 = (int *)(**(code **)(*piVar3 + 0x1c))(iVar9);
                if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 0x18))(), iVar7 != 2))
                {
                  (**(code **)(*piVar5 + 0x44))(0);
                  (**(code **)(*piVar5 + 0x4c))(0);
                  (**(code **)(*piVar5 + 0x54))(0);
                }
                iVar9 = iVar9 + 1;
                param_1 = local_14;
              } while (iVar9 < iVar4);
            }
            piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
            if (((piVar3 != (int *)0x0) &&
                (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("weapon_item_attachment"),
               piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x44))(1);
            }
            piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
            if (((piVar3 != (int *)0x0) &&
                (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("melee_arrow_item"),
               piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x44))(1);
            }
            piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
            if (((piVar3 != (int *)0x0) &&
                (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("melee_arrow_secrect"),
               piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x44))(1);
            }
            piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
            if (((piVar3 != (int *)0x0) &&
                (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("bow_rage01_A"), piVar3 != (int *)0x0)
               ) {
              (**(code **)(*piVar3 + 0x44))(1);
            }
            piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
            if (((piVar3 != (int *)0x0) &&
                (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) &&
               (piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("bow_rage01_B"), piVar3 != (int *)0x0)
               ) {
              (**(code **)(*piVar3 + 0x44))(1);
            }
            FUN_10f7f340(param_1[3]);
            FUN_10f96b10(param_1[3]);
          }
        }
        uVar8 = 1;
        piVar3 = local_8;
        goto LAB_10a63fff;
      }
    }
  }
LAB_10a63ffd:
  uVar8 = 0;
LAB_10a63fff:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  return uVar8;
}



/* ===== FUN_10a958d0 @ 10a958d0  size=177 ===== */
// strings:
//   "CurState"
//   "TemptGasBuffCheck"

/* [RE-AUTO c0]
   strings:
     ""CurState""
     ""TemptGasBuffCheck"" */

void __fastcall FUN_10a958d0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *local_8;
  
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[2]);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x128))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x24))();
    (**(code **)(*piVar2 + 0x38))(&local_8);
    uVar3 = (**(code **)(*piVar1 + 0x48))();
    uVar3 = FUN_104789d0(uVar3);
    param_1[9] = uVar3;
    if (local_8 != (undefined4 *)0x0) {
      piVar1 = local_8 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_8)(1);
      }
    }
    if (param_1[9] != 0) {
      uVar3 = FUN_113168d0("CurState");
      uVar3 = FUN_1046dc60(uVar3);
      param_1[10] = uVar3;
      uVar3 = FUN_113168d0("TemptGasBuffCheck");
      uVar3 = FUN_1046dc60(uVar3);
      param_1[0xb] = uVar3;
    }
  }
  return;
}



/* ===== FUN_10a9ff40 @ 10a9ff40  size=178 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

undefined4 __fastcall FUN_10a9ff40(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = **(int **)m_pThis_exref;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar1 + 0x144))(uVar3);
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("MHBuffArea");
    if (piVar4 != (int *)0x0) {
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_104968c0(0,&local_c);
      piVar2 = *(int **)(param_1 + 0x2c);
      local_8 = 0;
      if (((1 < (uint)(piVar2[1] - *piVar2 >> 2)) &&
          (4 < (int)(piVar2[4] - piVar2[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar2[3] + 4))) {
        FUN_10493d50(*(int *)(piVar2[3] + 4),&local_8);
        FUN_1025bfc0();
      }
      (**(code **)(*piVar4 + 0x74))(local_8,local_c);
      return 2;
    }
  }
  return 1;
}



/* ===== FUN_10aa0000 @ 10aa0000  size=258 ===== */
// strings:
//   "CBuffAreaPorcess"
//   "BuffIDBBName"

/* [RE-AUTO c0]
   strings:
     ""CBuffAreaPorcess""
     ""BuffIDBBName"" */

void FUN_10aa0000(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0(&DAT_11cc0668,&DAT_11cc066c);
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CBuffAreaPorcess","");
  FUN_1048b080(local_1c,local_34,0,3,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("BuffIDBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CBuffAreaPorcess","");
  FUN_1048b080(local_34,local_1c,1,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}



/* ===== FUN_10aa0190 @ 10aa0190  size=107 ===== */
// strings:
//   "MHBuffArea"

/* [RE-AUTO c0]
   strings:
     ""MHBuffArea"" */

undefined4 __fastcall FUN_10aa0190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_10496940(0,&local_8);
  iVar1 = **(int **)m_pThis_exref;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0x144))(uVar2);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("MHBuffArea");
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x84))(local_8);
      return 2;
    }
  }
  return 1;
}



/* ===== FUN_10aa5760 @ 10aa5760  size=506 ===== */
// strings:
//   "CNpcSkillPlay"
//   "Duration"
//   "bWaitDodge"

/* [RE-AUTO c0]
   strings:
     ""CNpcSkillPlay""
     ""Duration""
     ""bWaitDodge"" */

void FUN_10aa5760(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("StateName","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_1c,local_34,0,1,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("Duration","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,1,2,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("bWaitCombo","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,2,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("bWaitDodge","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CNpcSkillPlay","");
  FUN_1048b080(local_34,local_1c,3,3,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}



/* ===== FUN_10aa5ed0 @ 10aa5ed0  size=258 ===== */
// strings:
//   "GroupId"
//   "CPetAddGroupBuff"

/* [RE-AUTO c0]
   strings:
     ""GroupId""
     ""CPetAddGroupBuff"" */

void FUN_10aa5ed0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("GroupId","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CPetAddGroupBuff","");
  FUN_1048b080(local_1c,local_34,0,5,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("InputBBName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CPetAddGroupBuff","");
  FUN_1048b080(local_34,local_1c,1,1,1);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}



/* ===== FUN_10aaa460 @ 10aaa460  size=247 ===== */
// calls: RegisterCombatBehaviorTreeNodes
// strings:
//   "g_BT_LoadAtStartup"
//   "g_BT_BuffLoad"
//   "g_BT_OptimizeMode"

/* [RE-AUTO c0]
   strings:
     ""g_BT_LoadAtStartup""
     ""g_BT_BuffLoad""
     ""g_BT_OptimizeMode"" */

void FUN_10aaa460(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_10478710();
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x144))(1);
    uVar2 = FUN_10a9b470(uVar2);
    FUN_10478720(uVar2);
  }
  if (DAT_12040e04 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    FUN_11317160(uVar2);
  }
  iVar1 = FUN_1048b080();
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x14c))();
    FUN_1048b090(uVar2);
  }
  iVar1 = FUN_10478780();
  *(undefined1 *)(iVar1 + 0x34) = 0;
  RegisterCombatBehaviorTreeNodes();
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_BT_LoadAtStartup");
  if (piVar3 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar3 + 8))();
    if (iVar1 != 0) {
      FUN_10aac650();
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_BT_BuffLoad");
  if (piVar3 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar3 + 8))();
    if (iVar1 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_BT_OptimizeMode");
      if (piVar3 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar3 + 8))();
        if ((iVar1 != 0) && (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
          FUN_10aaa7d0();
          return;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10ab9690 @ 10ab9690  size=170 ===== */
// strings:
//   "BuffID"
//   "Enable"

/* [RE-AUTO c0]
   strings:
     ""BuffID""
     ""Enable"" */

undefined1 __thiscall FUN_10ab9690(int param_1,int *param_2)

{
  float *pfVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 uVar7;
  bool bVar8;
  
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x20))();
  pbVar6 = &DAT_11cc19cc;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_10ab96c4:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_10ab96c9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_10ab96c4;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_10ab96c9:
  if (uVar4 == 0) {
    uVar5 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300);
    FUN_11316b10(uVar5);
    pfVar1 = (float *)(param_1 + 4);
    (**(code **)(*param_2 + 100))(&DAT_11dbb648,pfVar1);
    (**(code **)(*param_2 + 0x74))("BuffID",param_1 + 0x18);
    (**(code **)(*param_2 + 0x50))("Enable",param_1 + 0x1c);
    if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
      uVar7 = 1;
      goto LAB_10ab9726;
    }
  }
  uVar7 = 0;
LAB_10ab9726:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar7;
}



/* ===== FUN_10ab97c0 @ 10ab97c0  size=158 ===== */
// strings:
//   "SkillEffect"
//   "SkillEffectName"

/* [RE-AUTO c0]
   strings:
     ""SkillEffect""
     ""SkillEffectName"" */

undefined1 __thiscall FUN_10ab97c0(int param_1,int *param_2)

{
  float *pfVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x20))();
  pcVar6 = "SkillEffect";
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) {
LAB_10ab97f4:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_10ab97f9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < (byte)pcVar6[1];
    if (bVar2 != pcVar6[1]) goto LAB_10ab97f4;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_10ab97f9:
  if (uVar4 == 0) {
    uVar5 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300);
    FUN_11316b10(uVar5);
    pfVar1 = (float *)(param_1 + 4);
    (**(code **)(*param_2 + 100))(&DAT_11dbb648,pfVar1);
    uVar5 = (**(code **)(*param_2 + 0x7c))("SkillEffectName");
    FUN_11316b10(uVar5);
    if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
      uVar7 = 1;
      goto LAB_10ab984a;
    }
  }
  uVar7 = 0;
LAB_10ab984a:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar7;
}



/* ===== FUN_10ab9cd0 @ 10ab9cd0  size=242 ===== */
// strings:
//   "SkillRotate"
//   "EventName"
//   "EnableLeftMaxAngle"
//   "EnableRightMaxAngle"
//   "LeftMaxAngle"
//   "RightMaxAngle"
//   "AdditionalAngle"

/* [RE-AUTO c0]
   strings:
     ""SkillRotate""
     ""EventName""
     ""EnableLeftMaxAngle""
     ""EnableRightMaxAngle""
     ""LeftMaxAngle""
     ""RightMaxAngle""
     ""AdditionalAngle"" */

undefined1 __thiscall FUN_10ab9cd0(int param_1,int *param_2)

{
  float *pfVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x20))();
  pcVar6 = "SkillRotate";
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) {
LAB_10ab9d04:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_10ab9d09;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < (byte)pcVar6[1];
    if (bVar2 != pcVar6[1]) goto LAB_10ab9d04;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_10ab9d09:
  if (uVar4 == 0) {
    uVar5 = (**(code **)(*param_2 + 0x7c))("EventName");
    FUN_11316b10(uVar5);
    pfVar1 = (float *)(param_1 + 4);
    (**(code **)(*param_2 + 100))(&DAT_11dbb648,pfVar1);
    (**(code **)(*param_2 + 0x50))("NeedRotate",param_1 + 0x28);
    (**(code **)(*param_2 + 0x50))("EnableLeftMaxAngle",param_1 + 0x29);
    (**(code **)(*param_2 + 0x50))("EnableRightMaxAngle",param_1 + 0x2a);
    (**(code **)(*param_2 + 100))("LeftMaxAngle",param_1 + 0x18);
    (**(code **)(*param_2 + 100))("RightMaxAngle",param_1 + 0x1c);
    (**(code **)(*param_2 + 100))("AdditionalAngle",param_1 + 0x20);
    if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
      uVar7 = 1;
      goto LAB_10ab9dae;
    }
  }
  uVar7 = 0;
LAB_10ab9dae:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar7;
}



/* ===== FUN_10b2b510 @ 10b2b510  size=1148 ===== */
// calls: CInfoRecord::GetModelString, memcpy
// strings:
//   "/Libs/BuffEffects.xml"
//   "BuffEffects"
//   "EffectsTMConfig"
//   "bodysize"
//   "attachment"
//   "Position"
//   "Angle"
//   "Scale"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""/Libs/BuffEffects.xml""
     ""BuffEffects""
     ""EffectsTMConfig""
     ""bodysize""
     ""attachment""
     ""Position""
     ""Angle""
     ""Scale"" */

void FUN_10b2b510(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  size_t _Size;
  bool bVar14;
  int local_a0 [17];
  undefined1 *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  int *local_38;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  CInfoRecord__GetModelString();
  piVar10 = (int *)(local_2c + -0xc);
  local_38 = piVar10;
  if (*piVar10 < 0) {
    local_14 = &DAT_1201fc98;
  }
  else {
    local_14 = local_2c;
    FUN_10c3dab0();
  }
  FUN_10a4c990();
  puVar9 = local_14;
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))();
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0xac))();
    piVar10 = local_10;
    if (local_10 == (int *)0x0) {
      pcVar11 = "BuffEffects";
      pbVar3 = (byte *)(**(code **)(*local_8 + 0x20))();
      do {
        bVar1 = *pbVar3;
        bVar14 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_10b2b5e0:
          uVar4 = -(uint)bVar14 | 1;
          goto LAB_10b2b5e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar14 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_10b2b5e0;
        pbVar3 = pbVar3 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10b2b5e5:
      piVar10 = local_10;
      if (uVar4 == 0) {
        if (local_8 != (int *)0x0) {
          (**(code **)*local_8)();
        }
        piVar10 = local_8;
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
          piVar10 = local_8;
        }
      }
    }
    local_10 = piVar10;
    uVar4 = (**(code **)(*local_10 + 0xa0))();
    uVar12 = 0;
    local_1c = uVar4;
    if (uVar4 != 0) {
      do {
        (**(code **)(*local_10 + 0xa8))();
        local_30 = -1;
        local_34 = 0xffffffff;
        (**(code **)(*local_18 + 0x74))();
        (**(code **)(*local_18 + 0x74))();
        if (((local_30 != -1) && (local_34 < 0x16)) &&
           (piVar10 = (int *)(**(code **)(*local_20 + 0x14))(), piVar10 != (int *)0x0)) {
          (**(code **)(*piVar10 + 8))();
        }
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 4))();
        }
        uVar12 = uVar12 + 1;
        puVar9 = local_14;
      } while (uVar12 < uVar4);
    }
    (**(code **)(*local_8 + 0xac))();
    if (local_24 != (int *)0x0) {
      local_3c = (**(code **)(*local_24 + 0xa0))();
      local_1c = 0;
      if (local_3c != 0) {
        do {
          (**(code **)(*local_24 + 0xa8))();
          local_28 = 0;
          (**(code **)(*local_c + 0x74))();
          pcVar5 = (char *)(**(code **)(*local_c + 0x7c))();
          pcVar11 = &DAT_1201fc98;
          if (pcVar5 != (char *)0x0) {
            pcVar13 = pcVar5;
            do {
              cVar2 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar2 != '\0');
            _Size = (int)pcVar13 - (int)(pcVar5 + 1);
            if (_Size != 0) {
              puVar6 = (undefined4 *)FUN_10c3d780();
              DAT_123be268 = DAT_123be268 + _Size + 0xd;
              *puVar6 = 1;
              pcVar11 = (char *)(puVar6 + 3);
              puVar6[1] = _Size;
              puVar6[2] = _Size;
              pcVar11[_Size] = '\0';
              if (pcVar11 != pcVar5) {
                memcpy(pcVar11,pcVar5,_Size);
              }
            }
          }
          if (((*(int *)(pcVar11 + -8) != 0) && (local_28 < 8)) && (0 < local_28)) {
            (**(code **)(*local_c + 0x58))();
            (**(code **)(*local_c + 0x5c))();
            (**(code **)(*local_c + 100))();
            if (*(int *)(pcVar11 + -0xc) < 0) {
              pcVar5 = &DAT_1201fc98;
            }
            else {
              pcVar5 = pcVar11;
              FUN_10c3dab0(pcVar11 + -0xc,pcVar11);
            }
            piVar10 = (int *)FUN_10b2eea0(local_a0,pcVar5);
            if (*(int *)(*piVar10 + -0xc) < 0) {
              local_5c = &DAT_1201fc98;
            }
            else {
              local_5c = (undefined1 *)*piVar10;
              FUN_10c3dab0();
            }
            local_40 = piVar10[7];
            local_58 = piVar10[1];
            iStack_54 = piVar10[2];
            iStack_50 = piVar10[3];
            iStack_4c = piVar10[4];
            local_48 = *(undefined8 *)(piVar10 + 5);
            FUN_10b312e0();
            puVar9 = local_5c;
            if ((-1 < *(int *)(local_5c + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar9 + -4));
              FUN_10c3d900();
            }
            iVar7 = local_a0[0];
            if ((-1 < *(int *)(local_a0[0] + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar7 + -4));
              FUN_10c3d900();
            }
          }
          if ((-1 < *(int *)(pcVar11 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar11 + -4));
            FUN_10c3d900();
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 4))();
          }
          local_1c = local_1c + 1;
          puVar9 = local_14;
        } while (local_1c < local_3c);
      }
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 4))();
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 4))();
    }
    piVar10 = local_38;
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 4))();
      piVar10 = local_38;
    }
  }
  if ((-1 < *(int *)(puVar9 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar9 + -4));
    FUN_10c3d900();
  }
  if ((-1 < *piVar10) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar10[2]);
    FUN_10c3d900();
  }
  return;
}



/* ===== FUN_10b348e0 @ 10b348e0  size=1229 ===== */
// calls: CInfoRecord::GetModelString, memcpy
// strings:
//   "/Libs/BuffEffects.xml"
//   "BuffEffects"
//   "EffectsTMConfig"
//   "bodysize"
//   "attachment"
//   "Position"
//   "Angle"
//   "Scale"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""/Libs/BuffEffects.xml""
     ""BuffEffects""
     ""EffectsTMConfig""
     ""bodysize""
     ""attachment""
     ""Position""
     ""Angle""
     ""Scale"" */

void __fastcall FUN_10b348e0(int *param_1)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  size_t _Size;
  bool bVar16;
  int local_a0 [17];
  undefined1 *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  int *local_38;
  undefined1 *local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  if ((char)param_1[0x1d] == '\0') {
    local_28 = param_1;
    (**(code **)(*param_1 + 0xc))();
    (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
    CInfoRecord__GetModelString();
    piVar13 = (int *)(local_34 + -0xc);
    local_38 = piVar13;
    if (*piVar13 < 0) {
      local_1c = &DAT_1201fc98;
    }
    else {
      local_1c = local_34;
      FUN_10c3dab0();
    }
    FUN_10a4c990();
    puVar12 = local_1c;
    (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))();
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0xac))();
      piVar13 = local_10;
      if (local_10 == (int *)0x0) {
        pcVar14 = "BuffEffects";
        pbVar4 = (byte *)(**(code **)(*local_8 + 0x20))();
        do {
          bVar1 = *pbVar4;
          bVar16 = bVar1 < (byte)*pcVar14;
          if (bVar1 != *pcVar14) {
LAB_10b349c0:
            uVar5 = -(uint)bVar16 | 1;
            goto LAB_10b349c5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar16 = bVar1 < (byte)pcVar14[1];
          if (bVar1 != pcVar14[1]) goto LAB_10b349c0;
          pbVar4 = pbVar4 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10b349c5:
        piVar13 = local_10;
        if (uVar5 == 0) {
          if (local_8 != (int *)0x0) {
            (**(code **)*local_8)();
          }
          piVar13 = local_8;
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 4))();
            piVar13 = local_8;
          }
        }
      }
      local_10 = piVar13;
      uVar5 = (**(code **)(*local_10 + 0xa0))();
      piVar13 = local_28;
      local_18 = uVar5;
      if (uVar5 != 0) {
        uVar11 = 0;
        do {
          (**(code **)(*local_10 + 0xa8))();
          local_20 = 0xffffffff;
          local_30 = 0xffffffff;
          (**(code **)(*local_14 + 0x74))();
          (**(code **)(*local_14 + 0x74))();
          if (((local_30 < 0x16) && (pcVar3 = (code *)piVar13[local_30 + 7], pcVar3 != (code *)0x0))
             && (puVar6 = (undefined4 *)(*pcVar3)(), uVar5 = local_18, puVar6 != (undefined4 *)0x0))
          {
            iVar7 = (**(code **)(*piVar13 + 4))();
            if (iVar7 != 0) {
              FUN_10c3d5d0();
            }
            if (local_14 != (int *)0x0) {
              (**(code **)*local_14)();
            }
            (**(code **)*puVar6)();
            puVar8 = (undefined4 *)FUN_10b34f00();
            *puVar8 = puVar6;
            uVar5 = local_18;
          }
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 4))();
          }
          uVar11 = uVar11 + 1;
          puVar12 = local_1c;
        } while (uVar11 < uVar5);
      }
      (**(code **)(*local_8 + 0xac))();
      if (local_24 != (int *)0x0) {
        local_3c = (**(code **)(*local_24 + 0xa0))();
        local_18 = 0;
        if (local_3c != 0) {
          do {
            (**(code **)(*local_24 + 0xa8))();
            local_2c = 0;
            (**(code **)(*local_c + 0x74))();
            pcVar9 = (char *)(**(code **)(*local_c + 0x7c))();
            pcVar14 = &DAT_1201fc98;
            if (pcVar9 != (char *)0x0) {
              pcVar15 = pcVar9;
              do {
                cVar2 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar2 != '\0');
              _Size = (int)pcVar15 - (int)(pcVar9 + 1);
              if (_Size != 0) {
                puVar6 = (undefined4 *)FUN_10c3d780();
                DAT_123be268 = DAT_123be268 + _Size + 0xd;
                *puVar6 = 1;
                pcVar14 = (char *)(puVar6 + 3);
                puVar6[1] = _Size;
                puVar6[2] = _Size;
                pcVar14[_Size] = '\0';
                if (pcVar14 != pcVar9) {
                  memcpy(pcVar14,pcVar9,_Size);
                }
              }
            }
            if (((*(int *)(pcVar14 + -8) != 0) && (local_2c < 8)) && (0 < local_2c)) {
              (**(code **)(*local_c + 0x58))();
              (**(code **)(*local_c + 0x5c))();
              (**(code **)(*local_c + 100))();
              if (*(int *)(pcVar14 + -0xc) < 0) {
                pcVar9 = &DAT_1201fc98;
              }
              else {
                pcVar9 = pcVar14;
                FUN_10c3dab0(pcVar14 + -0xc,pcVar14);
              }
              piVar13 = (int *)FUN_10b2eea0(local_a0,pcVar9);
              if (*(int *)(*piVar13 + -0xc) < 0) {
                local_5c = &DAT_1201fc98;
              }
              else {
                local_5c = (undefined1 *)*piVar13;
                FUN_10c3dab0();
              }
              local_40 = piVar13[7];
              local_58 = piVar13[1];
              iStack_54 = piVar13[2];
              iStack_50 = piVar13[3];
              iStack_4c = piVar13[4];
              local_48 = *(undefined8 *)(piVar13 + 5);
              FUN_10b312e0();
              puVar12 = local_5c;
              if ((-1 < *(int *)(local_5c + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar12 + -4));
                FUN_10c3d900();
              }
              iVar7 = local_a0[0];
              if ((-1 < *(int *)(local_a0[0] + -0xc)) && (iVar10 = FUN_10c3dad0(), iVar10 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar7 + -4));
                FUN_10c3d900();
              }
            }
            if ((-1 < *(int *)(pcVar14 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar14 + -4));
              FUN_10c3d900();
            }
            if (local_c != (int *)0x0) {
              (**(code **)(*local_c + 4))();
            }
            local_18 = local_18 + 1;
            puVar12 = local_1c;
          } while (local_18 < local_3c);
        }
      }
      *(undefined1 *)(local_28 + 0x1d) = 1;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 4))();
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
      piVar13 = local_38;
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
        piVar13 = local_38;
      }
    }
    if ((-1 < *(int *)(puVar12 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar12 + -4));
      FUN_10c3d900();
    }
    if ((-1 < *piVar13) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar13[2]);
      FUN_10c3d900();
    }
  }
  return;
}



/* ===== FUN_10b57fe0 @ 10b57fe0  size=462 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "/Libs/common/commercializeWeapon.xml"
//   "weaponID"
//   "strState"
//   "strAGEventName"
//   "effectID"

/* WARNING: Removing unreachable block (ram,0x10b580c8) */
/* WARNING: Removing unreachable block (ram,0x10b58429) */
/* [RE-AUTO c0]
   strings:
     ""/Libs/common/commercializeWeapon.xml""
     ""weaponID""
     ""strState""
     ""strAGEventName""
     ""effectID"" */

undefined1 FUN_10b57fe0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  int *piVar6;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  int *local_2c;
  undefined1 *local_28;
  undefined1 *local_24 [5];
  undefined1 *local_10;
  
  uVar2 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  CInfoRecord__GetModelString(uVar2);
  piVar4 = (int *)(local_30 + -0xc);
  if (*piVar4 < 0) {
    local_10 = &DAT_1201fc98;
  }
  else {
    local_10 = local_30;
    FUN_10c3dab0(piVar4);
  }
  FUN_10a4c990("/Libs/common/commercializeWeapon.xml",0x24);
  puVar1 = local_10;
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_2c,local_10,0,1,0);
  if (local_2c == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(*local_2c + 0xa0))();
    local_48 = 0;
    if (0 < iVar3) {
      local_28 = &DAT_1201fc98;
      local_24[0] = &DAT_1201fc98;
      local_38 = 0;
      local_3c = 0;
      local_34 = 0;
      piVar4 = (int *)(**(code **)(*local_2c + 0xa8))(&local_4c,0);
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)();
      }
      piVar4 = (int *)*piVar4;
      if (local_4c != (int *)0x0) {
        (**(code **)(*local_4c + 4))();
      }
      (**(code **)(*piVar4 + 0x74))("weaponID",&local_38);
      (**(code **)(*piVar4 + 0x48))("strState",&local_28);
      (**(code **)(*piVar4 + 0x48))("strAGEventName",local_24);
      (**(code **)(*piVar4 + 0x74))(&DAT_11dca14c,&local_3c);
      (**(code **)(*piVar4 + 0x74))("effectID",&local_34);
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(200);
    }
    uVar5 = 1;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))();
    }
  }
  piVar6 = (int *)(puVar1 + -0xc);
  if ((-1 < *piVar6) && (iVar3 = FUN_10c3dad0(piVar6), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
    FUN_10c3d900(piVar6);
  }
  if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_30 + -4));
    FUN_10c3d900(piVar4);
  }
  return uVar5;
}



