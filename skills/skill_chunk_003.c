/* ===== FUN_10511bb0 @ 10511bb0  size=106 ===== */
// strings:
//   "GetPetWaitSkillData"
//   "ReqWaitSkillNewNtf"
//   "IsLastBattlePetStateNormal"

/* [RE-AUTO c0]
   strings:
     ""GetPetWaitSkillData""
     ""ReqWaitSkillNewNtf""
     ""IsLastBattlePetStateNormal"" */

void FUN_10511bb0(void)

{
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 1) {
    FUN_104f42b0(in_stack_00000010);
    FUN_104d13b0("GetPetWaitSkillData",FUN_10518600);
    FUN_104d13b0("ReqWaitSkillNewNtf",FUN_10518b00);
    FUN_104d13b0("IsLastBattlePetStateNormal",FUN_10518bf0);
  }
  return;
}



/* ===== FUN_10511fc0 @ 10511fc0  size=80 ===== */
// strings:
//   "OpenBattlePetSkillPanel"

/* [RE-AUTO c0]
   strings:
     ""OpenBattlePetSkillPanel"" */

void __fastcall FUN_10511fc0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_1050a550(0x2d);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x180) == 5)) {
    (**(code **)(*DAT_123bcdb0 + 0x18))
              (DAT_123bcdb8,0,"OpenBattlePetSkillPanel",0,0,((byte)DAT_123bcdb4 & 0x8f) == 10);
  }
  return;
}



/* ===== FUN_10512480 @ 10512480  size=240 ===== */
// strings:
//   "RefreshPetLearnedSkills"
//   "ShowAsEnviroment"

/* [RE-AUTO c0]
   strings:
     ""RefreshPetLearnedSkills""
     ""ShowAsEnviroment"" */

void __fastcall FUN_10512480(int param_1)

{
  char cVar1;
  int *piStack_60;
  char **ppcStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0x2d;
  uStack_30 = 0x10512499;
  cVar1 = FUN_1050a550();
  if (cVar1 == '\0') {
    uStack_30 = 0x7b;
    uStack_34 = 0x1051255a;
    cVar1 = FUN_1050a550();
    if (cVar1 != '\0') {
      uStack_34 = *(undefined4 *)(param_1 + 0x24);
      uStack_3c = 0x10512569;
      FUN_10510ff0();
    }
  }
  else {
    uStack_30 = *(undefined4 *)(param_1 + 0x24);
    uStack_3c = 0x105124ae;
    FUN_10514a90();
    uStack_3c = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    uStack_40 = 0;
    uStack_44 = 0;
    pcStack_48 = "RefreshPetLearnedSkills";
    uStack_4c = 0;
    uStack_50 = DAT_123bcdb8;
    uStack_54 = 0x105124dd;
    (**(code **)(*DAT_123bcdb0 + 0x18))();
    uStack_40 = *(undefined4 *)(param_1 + 0x180);
    pcStack_48 = (char *)0x0;
    uStack_44 = 3;
    uStack_54 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
    uStack_58 = 1;
    ppcStack_5c = &pcStack_48;
    piStack_60 = (int *)0x11dbf890;
    (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,0);
    if (((uint)ppcStack_5c >> 6 & 1) != 0) {
      (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
      return;
    }
  }
  return;
}



/* ===== FUN_10512580 @ 10512580  size=418 ===== */
// calls: CPetPanelUI::BuildEquippedSkillLists
// strings:
//   "HideAllSkillEffects"
//   "PlayNewSkillEffect"

/* [RE-AUTO c0]
   strings:
     ""HideAllSkillEffects""
     ""PlayNewSkillEffect"" */

void __thiscall FUN_10512580(int param_1,int param_2)

{
  char cVar1;
  int *unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_1c [4];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_78;
  uStack_84 = 0x2d;
  uStack_88 = 0x105125a5;
  cVar1 = FUN_1050a550();
  if (cVar1 != '\0') {
    uStack_88 = *(undefined4 *)(param_1 + 0x24);
    puStack_8c = (undefined4 *)0x105125b7;
    CPetPanelUI__BuildEquippedSkillLists();
    puStack_8c = *(undefined4 **)(param_1 + 0x24);
    uStack_98 = 0x105125c4;
    FUN_10514a90();
    puStack_8c = (undefined4 *)0x0;
    uStack_88 = 0;
    if (*(char *)(param_2 + 0xc) == '\0') {
      uStack_98 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
      uStack_9c = 0;
      uStack_a0 = 0;
      pcStack_a4 = "HideAllSkillEffects";
      (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,&puStack_8c);
    }
    else {
      uStack_6c = *(undefined4 *)(param_1 + 0x34);
      uStack_54 = *(undefined4 *)(param_1 + 0x38);
      uStack_3c = *(undefined4 *)(param_2 + 8);
      uStack_74 = 0;
      uStack_5c = 0;
      uStack_44 = 0;
      uStack_70 = 3;
      uStack_98 = (uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
      uStack_9c = 0;
      uStack_a0 = 0;
      pcStack_a4 = "HideAllSkillEffects";
      uStack_58 = 3;
      uStack_40 = 3;
      (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,&puStack_8c);
      (**(code **)(*DAT_123bcdb0 + 0x18))
                (DAT_123bcdb8,&pcStack_a4,"PlayNewSkillEffect",&puStack_8c,3,
                 ((byte)DAT_123bcdb4 & 0x8f) == 10);
      iVar4 = 2;
      puVar2 = auStack_1c;
      do {
        puVar3 = puVar2 + -6;
        if (((uint)puVar2[-5] >> 6 & 1) != 0) {
          uStack_88 = puVar2[-4];
          uStack_90 = 0x105126ae;
          puStack_8c = puVar3;
          (**(code **)(*(int *)*puVar3 + 8))();
          *puVar3 = 0;
        }
        iVar4 = iVar4 + -1;
        puVar2[-5] = 0;
        puVar2 = puVar3;
      } while (-1 < iVar4);
    }
    if ((uStack_78 >> 6 & 1) != 0) {
      puStack_8c = (undefined4 *)&stack0xffffff84;
      uStack_88 = uStack_74;
      uStack_90 = 0x1051270f;
      (**(code **)(*unaff_ESI + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_105130a0 @ 105130a0  size=1861 ===== */
// calls: CPetSkillInfo::BuildSkillListByCategory
// strings:
//   "_PetSkills"
//   "PetSkillItemVO_CLASS_NAME"
//   "strSkillName"
//   "subskills"
//   "bAssemble"
//   "skillPoint"
//   "skilllevel"
//   "SkillID"
//   "SkillIcon"
//   "skilleffect"
//   "quality"
//   "aptitude"
//   "intimate"
//   "skillsubtype"

/* [RE-AUTO c0]
   strings:
     ""_PetSkills""
     ""PetSkillItemVO_CLASS_NAME""
     ""strSkillName""
     ""subskills""
     ""bAssemble""
     ""skillPoint""
     ""skilllevel""
     ""SkillID""
     ""SkillIcon""
     ""skilleffect"" */

void __thiscall FUN_105130a0(uint param_1,int param_2,int **param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int unaff_ESI;
  int iVar7;
  int *piStack_120;
  uint *puStack_11c;
  int *piStack_118;
  char *pcStack_114;
  uint *puStack_110;
  int ***pppiStack_10c;
  int ***pppiStack_108;
  int **ppiStack_104;
  int **ppiStack_100;
  int **ppiStack_fc;
  int **ppiStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  int **ppiStack_ec;
  uint uStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  int **ppiStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  int *piStack_d0;
  int **ppiStack_cc;
  int *piStack_bc;
  uint uStack_b8;
  int **ppiStack_b4;
  undefined4 local_a0;
  int *piStack_9c;
  uint local_98;
  int **ppiStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  uint uStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  int **ppiStack_74;
  undefined4 local_70;
  int *local_6c;
  int **ppiStack_68;
  int **appiStack_64 [4];
  int ***pppiStack_54;
  int ***pppiStack_50;
  int *piStack_48;
  int local_40;
  undefined4 local_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_bc;
  local_40 = 0;
  local_3c = 0;
  ppiStack_cc = (int **)(uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  piStack_d0 = &local_40;
  local_70 = 0;
  local_6c = (int *)0x0;
  pcStack_d4 = "_PetSkills";
  uStack_d8 = DAT_123bcdb8;
  local_a0 = 0;
  ppiStack_dc = (int **)0x10513125;
  local_98 = param_1;
  (**(code **)(*DAT_123bcdb0 + 0x10))();
  ppiStack_dc = (int **)0xffffffff;
  uStack_e0 = 0;
  piStack_e4 = piStack_48;
  uStack_e8 = 0x1051313c;
  (*(code *)(*pppiStack_50)[0x11])();
  ppiStack_ec = &piStack_8c;
  uStack_b8 = CONCAT31(uStack_b8._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
  uStack_e8 = uStack_b8;
  pcStack_f0 = "PetSkillItemVO_CLASS_NAME";
  uStack_f4 = DAT_123bcdb8;
  ppiStack_f8 = (int **)0x1051316e;
  cVar3 = (**(code **)(*DAT_123bcdb0 + 0x10))();
  if ((cVar3 != '\0') && (((byte)local_98 & 0x8f) == 6)) {
    if ((local_98 >> 6 & 1) == 0) {
      ppiStack_cc = ppiStack_94;
    }
    else {
      ppiStack_cc = (int **)*ppiStack_94;
    }
  }
  ppiStack_f8 = (int **)0x105131a1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iVar4 != 0) {
    ppiStack_fc = param_3;
    ppiStack_100 = *(int ***)(param_1 + 0x38);
    ppiStack_104 = *(int ***)(param_1 + 0x34);
    pppiStack_108 = (int ***)0x105131c0;
    ppiStack_f8 = (int **)(param_1 + 0x14c);
    CPetSkillInfo__BuildSkillListByCategory();
    piVar6 = *(int **)(param_1 + 0x14c);
    piStack_bc = (int *)0x0;
    uStack_b8 = 0;
    piVar1 = *(int **)(unaff_ESI + 0x150);
    piStack_e4 = (int *)0x0;
    uStack_e0 = 0;
    piStack_84 = (int *)0x0;
    uStack_80 = 0;
    while (piVar6 != piVar1) {
      ppiStack_104 = &piStack_bc;
      ppiStack_f8 = (int **)0x0;
      ppiStack_fc = (int **)0x0;
      pppiStack_108 = (int ***)0x10513219;
      ppiStack_100 = ppiStack_cc;
      FUN_11a98de0();
      pppiStack_108 = appiStack_64;
      appiStack_64[0] = (int **)((uint)appiStack_64[0] & 0xffffff00);
      pppiStack_10c = (int ***)0x1051323e;
      pppiStack_54 = pppiStack_108;
      pppiStack_50 = pppiStack_108;
      FUN_100e5aa0();
      pppiStack_10c = pppiStack_54;
      puStack_110 = (uint *)0x11dbf9ac;
      pcStack_114 = (char *)0x10513255;
      FUN_104d1670();
      if ((pppiStack_54 != &ppiStack_68) && (pppiStack_54 != (int ***)0x0)) {
        pppiStack_10c = pppiStack_54;
        puStack_110 = (uint *)0x10513274;
        FUN_10c3d5d0();
      }
      pppiStack_10c = (int ***)(uint)(((byte)ppiStack_cc & 0x8f) == 10);
      puStack_110 = &local_98;
      pcStack_114 = "subskills";
      puStack_11c = (uint *)0x105132a0;
      piStack_118 = piVar1;
      (**(code **)(*piStack_d0 + 0x10))();
      iVar4 = piVar6[3];
      piVar2 = piVar6;
      for (iVar7 = piVar6[2]; iVar7 != iVar4; iVar7 = iVar7 + 0x2c) {
        puStack_11c = (uint *)0x0;
        piStack_120 = (int *)0x0;
        FUN_11a98de0(&pppiStack_108,pcStack_f0);
        ppiStack_78 = &piStack_88;
        piStack_88 = (int *)((uint)piStack_88 & 0xffffff00);
        ppiStack_74 = ppiStack_78;
        FUN_100e5aa0(ppiStack_78);
        FUN_104d1670("strSkillName",ppiStack_78);
        if ((ppiStack_78 != &piStack_8c) && (ppiStack_78 != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_78);
        }
        if (param_2 != 0) {
          piStack_84 = (int *)CONCAT31(piStack_84._1_3_,*(undefined1 *)(iVar7 + 0x14));
          piStack_8c = (int *)0x0;
          piStack_88 = (int *)0x2;
          (**(code **)(*puStack_11c + 0x14))
                    (pcStack_114,"bAssemble",&piStack_8c,((byte)piStack_118 & 0x8f) == 10);
          if (((uint)piStack_88 >> 6 & 1) != 0) {
            (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
          }
        }
        if (param_2 != 0) {
          piStack_8c = (int *)0x0;
          piStack_88 = (int *)0x3;
          piStack_84 = *(int **)(iVar7 + 0x10);
          (**(code **)(*puStack_11c + 0x14))
                    (pcStack_114,"skillPoint",&piStack_8c,((byte)piStack_118 & 0x8f) == 10);
          if (((uint)piStack_88 >> 6 & 1) != 0) {
            (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
          }
        }
        if (param_2 != 0) {
          piStack_8c = (int *)0x0;
          piStack_88 = (int *)0x3;
          piStack_84 = *(int **)(iVar7 + 8);
          (**(code **)(*puStack_11c + 0x14))
                    (pcStack_114,"skilllevel",&piStack_8c,((byte)piStack_118 & 0x8f) == 10);
          if (((uint)piStack_88 >> 6 & 1) != 0) {
            (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
          }
        }
        if (param_2 != 0) {
          piStack_8c = (int *)0x0;
          piStack_88 = (int *)0x3;
          piStack_84 = *(int **)(iVar7 + 0xc);
          (**(code **)(*puStack_11c + 0x14))
                    (pcStack_114,"SkillID",&piStack_8c,((byte)piStack_118 & 0x8f) == 10);
          if (((uint)piStack_88 >> 6 & 1) != 0) {
            (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
          }
        }
        puVar5 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar7 + 4) != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(iVar7 + 4);
        }
        FUN_104d1670("SkillIcon",puVar5);
        piStack_8c = (int *)((uint)piStack_8c & 0xffffff00);
        ppiStack_7c = &piStack_8c;
        ppiStack_78 = ppiStack_7c;
        FUN_100e5aa0(ppiStack_7c);
        FUN_104d1670("skilleffect",ppiStack_7c);
        if ((ppiStack_7c != &piStack_90) && (ppiStack_7c != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_7c);
        }
        if (param_2 != 0) {
          piStack_90 = (int *)0x0;
          piStack_8c = (int *)0x3;
          piStack_88 = *(int **)(iVar7 + 0x20);
          (**(code **)(*piStack_120 + 0x14))
                    (piStack_118,"quality",&piStack_90,((byte)puStack_11c & 0x8f) == 10);
          if (((uint)piStack_8c >> 6 & 1) != 0) {
            (**(code **)(*piStack_90 + 8))(&piStack_90,piStack_88);
          }
        }
        if (param_2 != 0) {
          piStack_90 = (int *)0x0;
          piStack_8c = (int *)0x3;
          piStack_88 = *(int **)(iVar7 + 0x24);
          (**(code **)(*piStack_120 + 0x14))
                    (piStack_118,"aptitude",&piStack_90,((byte)puStack_11c & 0x8f) == 10);
          if (((uint)piStack_8c >> 6 & 1) != 0) {
            (**(code **)(*piStack_90 + 8))(&piStack_90,piStack_88);
          }
        }
        FUN_104d1550("intimate",*(undefined4 *)(iVar7 + 0x1c));
        FUN_104d1550("skillsubtype",*(undefined4 *)(iVar7 + 0x28));
        (**(code **)(*piVar6 + 0x3c))(uStack_b8,&piStack_120);
        piVar2 = piStack_e4;
      }
      puStack_11c = &uStack_e0;
      piStack_120 = piStack_88;
      (**(code **)(*piStack_90 + 0x3c))();
      piVar6 = piVar2 + 5;
    }
    if ((uStack_80 >> 6 & 1) != 0) {
      ppiStack_fc = &piStack_84;
      ppiStack_100 = (int **)0x1051371e;
      ppiStack_f8 = ppiStack_7c;
      (**(code **)(*piStack_84 + 8))();
      piStack_84 = (int *)0x0;
    }
    uStack_80 = 0;
    if ((uStack_e0 >> 6 & 1) != 0) {
      ppiStack_f8 = ppiStack_dc;
      ppiStack_fc = &piStack_e4;
      ppiStack_100 = (int **)0x1051374b;
      (**(code **)(*piStack_e4 + 8))();
      piStack_e4 = (int *)0x0;
    }
    uStack_e0 = 0;
    if ((uStack_b8 >> 6 & 1) != 0) {
      ppiStack_fc = &piStack_bc;
      ppiStack_f8 = ppiStack_b4;
      ppiStack_100 = (int **)0x10513778;
      (**(code **)(*piStack_bc + 8))();
    }
  }
  if ((local_98 >> 6 & 1) != 0) {
    ppiStack_fc = &piStack_9c;
    ppiStack_f8 = ppiStack_94;
    ppiStack_100 = (int **)0x10513795;
    (**(code **)(*piStack_9c + 8))();
    piStack_9c = (int *)0x0;
  }
  local_98 = 0;
  if (((uint)ppiStack_68 >> 6 & 1) != 0) {
    ppiStack_fc = &local_6c;
    ppiStack_f8 = appiStack_64[0];
    ppiStack_100 = (int **)0x105137ce;
    (**(code **)(*local_6c + 8))();
  }
  ppiStack_ec = (int **)0x105137df;
  FUN_11a89daa();
  return;
}



/* ===== FUN_105145c0 @ 105145c0  size=1226 ===== */
// strings:
//   "strName"
//   "petType"
//   "status"
//   "otherStatus"
//   "level"
//   "petindex"
//   "petid"
//   "intelligence"
//   "proficientcy"
//   "character"
//   "quality"
//   "exp_max"
//   "intimacy"
//   "intimacyvalue"
//   "fluteskillEquipped"
//   "fluteskilltotal"
//   "normalskillEquipped"
//   "normalskilltotal"
//   "skillpointleft"
//   "petcolordescription"

/* [RE-AUTO c0]
   strings:
     ""strName""
     ""petType""
     ""status""
     ""otherStatus""
     ""level""
     ""petindex""
     ""petid""
     ""intelligence""
     ""proficientcy""
     ""character"" */

void __thiscall
FUN_105145c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_5 != 0) {
    local_3c = (int *)0x0;
    local_38 = 0;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    local_120 = 0;
    local_114 = 0;
    local_e8 = 0;
    local_44 = 0;
    FUN_112f64e0(param_3,param_2,&local_12c);
    if (local_12c != 0) {
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("strName",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_104d1550("petType",local_ec);
      FUN_104d1550("status",local_11c);
      FUN_104d1550("otherStatus",local_118);
      FUN_104d1550("level",local_110);
      FUN_104d1550("petindex",local_128);
      FUN_104d1550("petid",local_12c);
      FUN_104d1550(&DAT_11dbfba0,local_124);
      FUN_104d1550("intelligence",local_fc);
      FUN_104d1550("proficientcy",local_f0);
      FUN_104d1550("character",local_f4);
      FUN_104d1550("quality",local_f8);
      FUN_104d1550(&DAT_11dbfbc8,local_10c);
      FUN_104d1550("exp_max",local_108);
      FUN_104d1550("intimacy",local_104);
      FUN_104d1550("intimacyvalue",local_100);
      FUN_104d1550("fluteskillEquipped",local_5c);
      FUN_104d1550("fluteskilltotal",local_58);
      FUN_104d1550("normalskillEquipped",local_54);
      FUN_104d1550("normalskilltotal",local_50);
      FUN_104d1550("skillpointleft",local_60);
      local_20[0] = 0;
      local_10 = local_20;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("petcolordescription",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_104d1550("traintime",local_48);
      FUN_104d1550("maxLevel",local_40);
      if (local_ec == 0) {
        FUN_104d1550("fightwill",local_c0);
        FUN_104d1550("fightwill_max",local_bc);
        FUN_104d1550("attacktype",local_c4);
        FUN_104d1550("attacktrend",local_c8);
        FUN_104d1550("attack",local_d4);
        FUN_104d1550("attack_max",local_d0);
        FUN_104d1550(&DAT_11dbfc90,local_e4);
        FUN_104d1550("hp_max",local_e0);
        FUN_104d1550("defense",local_dc);
        FUN_104d1550("defense_max",local_d8);
        FUN_104d1550("fireattack",local_98);
        FUN_104d1550("waterattack",local_94);
        FUN_104d1550("thunderattack",local_8c);
        FUN_104d1550("iceattack",local_90);
        FUN_104d1550("dragonattack",local_88);
        FUN_104d1550("poisonattack",local_84);
        FUN_104d1550("sleepyattack",local_80);
        FUN_104d1550("paralysisattack",local_7c);
        FUN_104d1550("fireendure",local_74);
        FUN_104d1550("waterendure",local_70);
        FUN_104d1550("thunderendure",local_64);
        FUN_104d1550("iceendure",local_6c);
        FUN_104d1550("dragonendure",local_68);
        FUN_104d1550("lucklevel",local_cc);
      }
    }
    FUN_1050f1c0();
    if ((local_38 >> 6 & 1) != 0) {
      (**(code **)(*local_3c + 8))(&local_3c,local_34);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10514a90 @ 10514a90  size=2182 ===== */
// calls: CPetStarInfo::FindByKey3
// strings:
//   "_PetInfo"
//   "strName"
//   "petType"
//   "status"
//   "otherStatus"
//   "level"
//   "petindex"
//   "petid"
//   "intelligence"
//   "proficientcy"
//   "character"
//   "quality"
//   "exp_max"
//   "intimacy"
//   "intimacyvalue"
//   "fluteskillEquipped"
//   "fluteskilltotal"
//   "normalskillEquipped"
//   "normalskilltotal"
//   "petcolordescription"

/* [RE-AUTO c0]
   strings:
     ""_PetInfo""
     ""strName""
     ""petType""
     ""status""
     ""otherStatus""
     ""level""
     ""petindex""
     ""petid""
     ""intelligence""
     ""proficientcy"" */

void __thiscall FUN_10514a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiStack_fc;
  int **ppiStack_f8;
  int iStack_f4;
  char *pcStack_f0;
  undefined1 *puStack_ec;
  int **ppiStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  int **ppiStack_dc;
  int *piStack_cc;
  uint local_c8;
  int *local_c4;
  uint uStack_c0;
  int **ppiStack_bc;
  int *piStack_ac;
  uint uStack_a8;
  int **ppiStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int *piStack_94;
  uint uStack_90;
  int **ppiStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *piStack_4c;
  int *piStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [12];
  int **ppiStack_34;
  int **ppiStack_30;
  int **ppiStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_cc;
  local_c8 = 0;
  local_c4 = (int *)0x0;
  local_78 = 0;
  local_74 = 0;
  ppiStack_dc = (int **)0x10514ada;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  ppiVar3 = (int **)(param_1 + 0x44);
  uStack_e0 = *(uint *)(param_1 + 0x38);
  piStack_e4 = *(int **)(param_1 + 0x34);
  ppiStack_e8 = (int **)0x10514aeb;
  ppiStack_dc = ppiVar3;
  FUN_112f64e0();
  ppiStack_e8 = (int **)(uint)(((byte)DAT_123bcdb4 & 0x8f) == 10);
  puStack_ec = &stack0xffffff2c;
  pcStack_f0 = "_PetInfo";
  iStack_f4 = DAT_123bcdb8;
  ppiStack_f8 = (int **)0x10514b19;
  (**(code **)(*DAT_123bcdb0 + 0x10))();
  if (*ppiVar3 != (int *)0x0) {
    ppiStack_f8 = (int **)auStack_40;
    auStack_40[0] = 0;
    ppiStack_fc = (int **)0x10514b48;
    ppiStack_30 = ppiStack_f8;
    ppiStack_2c = ppiStack_f8;
    FUN_100e5aa0();
    ppiStack_fc = ppiStack_30;
    FUN_104d1670("strName");
    if ((ppiStack_30 != (int **)auStack_44) && (ppiStack_30 != (int **)0x0)) {
      ppiStack_fc = ppiStack_30;
      FUN_10c3d5d0();
    }
    ppiStack_fc = *(int ***)(param_1 + 0x84);
    FUN_104d1550("petType");
    FUN_104d1550("status",*(undefined4 *)(param_1 + 0x54));
    FUN_104d1550("otherStatus",*(undefined4 *)(param_1 + 0x58));
    FUN_104d1550("level",*(undefined4 *)(param_1 + 0x60));
    FUN_104d1550("petindex",*(undefined4 *)(param_1 + 0x48));
    FUN_104d1550("petid",*ppiVar3);
    FUN_104d1550(&DAT_11dbfba0,*(undefined4 *)(param_1 + 0x4c));
    FUN_104d1550("intelligence",*(undefined4 *)(param_1 + 0x74));
    ppiStack_fc = *(int ***)(param_1 + 0x80);
    FUN_104d1550("proficientcy");
    FUN_104d1550("character",*(undefined4 *)(param_1 + 0x7c));
    FUN_104d1550("quality",*(undefined4 *)(param_1 + 0x78));
    FUN_104d1550(&DAT_11dbfbc8,*(undefined4 *)(param_1 + 100));
    FUN_104d1550("exp_max",*(undefined4 *)(param_1 + 0x68));
    FUN_104d1550("intimacy",*(undefined4 *)(param_1 + 0x6c));
    FUN_104d1550("intimacyvalue",*(undefined4 *)(param_1 + 0x70));
    FUN_104d1550("fluteskillEquipped",*(undefined4 *)(param_1 + 0x114));
    ppiStack_fc = *(int ***)(param_1 + 0x118);
    FUN_104d1550("fluteskilltotal");
    FUN_104d1550("normalskillEquipped",*(undefined4 *)(param_1 + 0x11c));
    FUN_104d1550("normalskilltotal",*(undefined4 *)(param_1 + 0x120));
    auStack_44[0] = 0;
    ppiStack_fc = (int **)auStack_44;
    ppiStack_34 = ppiStack_fc;
    ppiStack_30 = ppiStack_fc;
    FUN_100e5aa0();
    FUN_104d1670("petcolordescription",ppiStack_34);
    if ((ppiStack_34 != &piStack_48) && (ppiStack_34 != (int **)0x0)) {
      FUN_10c3d5d0(ppiStack_34);
    }
    FUN_104d1550("skillpointleft",*(undefined4 *)(param_1 + 0x110));
    FUN_104d1550("renamenum",*(undefined4 *)(param_1 + 0x124));
    FUN_104d1550("traintime",*(undefined4 *)(param_1 + 0x128));
    FUN_104d1550("maxLevel",*(undefined4 *)(param_1 + 0x130));
    if (*(int *)(param_1 + 0x84) == 0) {
      FUN_104d1550("fightwill",*(undefined4 *)(param_1 + 0xb0));
      FUN_104d1550("fightwill_max",*(undefined4 *)(param_1 + 0xb4));
      FUN_104d1550("attacktype",*(undefined4 *)(param_1 + 0xac));
      FUN_104d1550("attacktrend",*(undefined4 *)(param_1 + 0xa8));
      FUN_104d1550("attack",*(undefined4 *)(param_1 + 0x9c));
      FUN_104d1550("attack_max",*(undefined4 *)(param_1 + 0xa0));
      FUN_104d1550(&DAT_11dbfc90,*(undefined4 *)(param_1 + 0x8c));
      FUN_104d1550("hp_max",*(undefined4 *)(param_1 + 0x90));
      FUN_104d1550("defense",*(undefined4 *)(param_1 + 0x94));
      FUN_104d1550("defense_max",*(undefined4 *)(param_1 + 0x98));
      FUN_104d1550("fireattack",*(undefined4 *)(param_1 + 0xd8));
      FUN_104d1550("waterattack",*(undefined4 *)(param_1 + 0xdc));
      FUN_104d1550("thunderattack",*(undefined4 *)(param_1 + 0xe4));
      FUN_104d1550("iceattack",*(undefined4 *)(param_1 + 0xe0));
      FUN_104d1550("dragonattack",*(undefined4 *)(param_1 + 0xe8));
      FUN_104d1550("poisonattack",*(undefined4 *)(param_1 + 0xec));
      FUN_104d1550("sleepyattack",*(undefined4 *)(param_1 + 0xf0));
      FUN_104d1550("paralysisattack",*(undefined4 *)(param_1 + 0xf4));
      FUN_104d1550("fireendure",*(undefined4 *)(param_1 + 0xfc));
      FUN_104d1550("waterendure",*(undefined4 *)(param_1 + 0x100));
      FUN_104d1550("thunderendure",*(undefined4 *)(param_1 + 0x10c));
      FUN_104d1550("iceendure",*(undefined4 *)(param_1 + 0x104));
      FUN_104d1550("dragonendure",*(undefined4 *)(param_1 + 0x108));
      FUN_104d1550("lucklevel",*(undefined4 *)(param_1 + 0xa4));
    }
    piStack_cc = (int *)0x0;
    local_c8 = 0;
    iVar2 = CPetStarInfo__FindByKey3
                      (*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x7c));
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0xa0);
      if ((local_c8 >> 6 & 1) != 0) {
        (**(code **)(*piStack_cc + 8))(&piStack_cc,local_c4);
        piStack_cc = (int *)0x0;
      }
      local_c8 = 3;
      local_c4 = piVar1;
      (**(code **)(*DAT_123bcdb0 + 0x18))
                (DAT_123bcdb8,0,"setMaxNumInitialtiveItem",&piStack_cc,1,
                 ((byte)DAT_123bcdb4 & 0x8f) == 10);
      ppiStack_e8 = *(int ***)(iVar2 + 0xa4);
      if ((uStack_e0 >> 6 & 1) != 0) {
        (**(code **)(*piStack_e4 + 8))(&piStack_e4,ppiStack_dc);
        piStack_e4 = (int *)0x0;
      }
      ppiStack_dc = ppiStack_e8;
      uStack_e0 = 3;
      (**(code **)(*DAT_123bcdb0 + 0x18))
                (DAT_123bcdb8,0,"setMaxNumPassiveItem",&piStack_e4,1,
                 ((byte)DAT_123bcdb4 & 0x8f) == 10);
      iVar2 = *(int *)(iVar2 + 0xac) + *(int *)(iVar2 + 0xa8);
      if (((uint)ppiStack_f8 >> 6 & 1) != 0) {
        (*(code *)(*ppiStack_fc)[2])(&ppiStack_fc,iStack_f4);
        ppiStack_fc = (int **)0x0;
      }
      ppiStack_f8 = (int **)0x3;
      iStack_f4 = iVar2;
      (**(code **)(*DAT_123bcdb0 + 0x18))
                (DAT_123bcdb8,0,"setMaxNumAssistItem",&ppiStack_fc,1,
                 ((byte)DAT_123bcdb4 & 0x8f) == 10);
    }
    (**(code **)(*DAT_123bcdb0 + 0x18))
              (DAT_123bcdb8,0,"RefreshPetDetailInfo",0,0,((byte)DAT_123bcdb4 & 0x8f) == 10);
    piStack_94 = *(int **)(param_1 + 0x34);
    uStack_7c = *(undefined4 *)(param_1 + 0x38);
    uStack_9c = 0;
    uStack_84 = 0;
    piStack_cc = (int *)0x0;
    local_c8 = 0;
    uStack_98 = 3;
    uStack_80 = 3;
    (**(code **)(*DAT_123bcdb0 + 0x18))
              (DAT_123bcdb8,&piStack_cc,"ResetSrollListIndex",&uStack_9c,2,
               ((byte)DAT_123bcdb4 & 0x8f) == 10);
    FUN_10515860(param_4);
    if ((uStack_a8 >> 6 & 1) != 0) {
      ppiStack_fc = &piStack_ac;
      ppiStack_f8 = ppiStack_a4;
      (**(code **)(*piStack_ac + 8))();
      piStack_ac = (int *)0x0;
    }
    uStack_a8 = 0;
    iVar2 = 1;
    ppiVar3 = &piStack_4c;
    do {
      ppiVar4 = ppiVar3 + -6;
      if (((uint)ppiVar3[-5] >> 6 & 1) != 0) {
        ppiStack_f8 = (int **)ppiVar3[-4];
        ppiStack_fc = ppiVar4;
        (**(code **)(**ppiVar4 + 8))();
        *ppiVar4 = (int *)0x0;
      }
      iVar2 = iVar2 + -1;
      ppiVar3[-5] = (int *)0x0;
      ppiVar3 = ppiVar4;
    } while (-1 < iVar2);
    if ((uStack_c0 >> 6 & 1) != 0) {
      ppiStack_fc = &local_c4;
      ppiStack_f8 = ppiStack_bc;
      (**(code **)(*local_c4 + 8))();
      local_c4 = (int *)0x0;
    }
    uStack_c0 = 0;
  }
  if ((uStack_90 >> 6 & 1) != 0) {
    ppiStack_fc = &piStack_94;
    ppiStack_f8 = ppiStack_8c;
    (**(code **)(*piStack_94 + 8))();
    piStack_94 = (int *)0x0;
  }
  uStack_90 = 0;
  if ((uStack_e0 >> 6 & 1) != 0) {
    ppiStack_fc = &piStack_e4;
    ppiStack_f8 = ppiStack_dc;
    (**(code **)(*piStack_e4 + 8))();
  }
  puStack_ec = (undefined1 *)0x10515310;
  FUN_11a89daa();
  return;
}



/* ===== FUN_105164f0 @ 105164f0  size=64 ===== */
// strings:
//   "OpenBattlePetSkillPanel"

/* [RE-AUTO c0]
   strings:
     ""OpenBattlePetSkillPanel"" */

void FUN_105164f0(void)

{
  uint uVar1;
  
  uVar1 = DAT_123bcdb4 & 0x8f;
  if (((uVar1 == 8) || (uVar1 == 9)) || (uVar1 == 10)) {
    (**(code **)(*DAT_123bcdb0 + 0x18))(DAT_123bcdb8,0,"OpenBattlePetSkillPanel",0,0,uVar1 == 10);
  }
  return;
}



/* ===== FUN_10518600 @ 10518600  size=1273 ===== */
// strings:
//   "Pet_Skill_Vo_Class_NAME"
//   "SkillIcon"
//   "strSkillName"
//   "skilllevel"
//   "SkillID"
//   "skilltype"
//   "learntime"
//   "aptitude"
//   "quality"
//   "skillPoint"
//   "intimate"
//   "skilleffect"
//   "bAddNew"
//   "bAdvanced"
//   "bFixed"
//   "nCurSkillLv"
//   "nMaxSkillLv"
//   "skillNoticeList"
//   "nLastPetIndex"

/* [RE-AUTO c0]
   strings:
     ""Pet_Skill_Vo_Class_NAME""
     ""SkillIcon""
     ""strSkillName""
     ""skilllevel""
     ""SkillID""
     ""skilltype""
     ""learntime""
     ""aptitude""
     ""quality""
     ""skillPoint"" */

void FUN_10518600(int *****param_1,undefined4 param_2,undefined4 param_3,int ****param_4,int param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcStack_e0;
  int **ppiStack_dc;
  int ***pppiStack_d8;
  int *piStack_d4;
  int ****ppppiStack_d0;
  char *pcStack_cc;
  int **ppiStack_c8;
  int *piStack_c4;
  int ****ppppiStack_c0;
  int ***pppiStack_bc;
  undefined1 auStack_ac [4];
  char *pcStack_a8;
  int ***pppiStack_a4;
  int aiStack_a0 [2];
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  int ***pppiStack_88;
  int *piStack_80;
  int iStack_7c;
  int ***pppiStack_78;
  uint uStack_74;
  int ***pppiStack_70;
  int ***pppiStack_64;
  int ***pppiStack_60;
  int *piStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  undefined1 auStack_50 [8];
  int *piStack_48;
  int ****ppppiStack_44;
  int ****ppppiStack_40;
  int ***pppiStack_3c;
  int ***pppiStack_38;
  int ****local_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_ac;
  local_28 = (int ****)param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    pppiStack_bc = (int ***)param_1[2];
    ppppiStack_c0 = (int ****)param_1;
    piStack_c4 = (int *)0x10518642;
    (*(code *)(**param_1)[2])();
    *param_1 = (int ****)0x0;
  }
  param_1[1] = (int ****)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 != 0) {
    pppiStack_bc = (int ***)0x10518676;
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar2 != 0) &&
       (ppppiStack_44 = *(int *****)(iVar2 + 0x2cd8), (int *****)ppppiStack_44 != (int *****)0x0)) {
      pppiStack_bc = (int ***)0x10518695;
      iStack_7c = (*(code *)(*ppppiStack_44)[0x15])();
      if (iStack_7c != 0) {
        pppiStack_bc = (int ***)param_4;
        ppppiStack_c0 = (int ****)0x105186ab;
        FUN_104f4330();
        ppppiStack_c0 = &pppiStack_64;
        pppiStack_64 = (int ***)0x0;
        pppiStack_60 = (int ***)0x0;
        iStack_7c = 0;
        pppiStack_78 = (int ***)0x0;
        piStack_c4 = (int *)0x105186d7;
        FUN_11a98a70();
        ppiStack_c8 = &piStack_80;
        uStack_94 = 0;
        piStack_c4 = (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)ppppiStack_44 & 0x8f) == 10
                                    );
        pcStack_cc = "Pet_Skill_Vo_Class_NAME";
        ppppiStack_d0 = ppppiStack_40;
        piStack_d4 = (int *)0x1051870f;
        cVar1 = (**(code **)(*piStack_48 + 0x10))();
        if (((cVar1 != '\0') && (((byte)uStack_8c & 0x8f) == 6)) &&
           (pppiStack_a4 = pppiStack_88, (uStack_8c >> 6 & 1) != 0)) {
          pppiStack_a4 = (int ***)*pppiStack_88;
        }
        piStack_d4 = aiStack_a0;
        aiStack_a0[0] = 0;
        aiStack_a0[1] = 0;
        piStack_98 = (int *)0x0;
        pppiStack_d8 = (int ***)0x1051875a;
        FUN_112f5ef0();
        uVar4 = 0;
        if (aiStack_a0[0] - (int)pppiStack_a4 >> 3 != 0) {
          do {
            ppiStack_c8 = pppiStack_a4[uVar4 * 2 + 1];
            pppiStack_d8 = (int ***)pppiStack_a4[uVar4 * 2];
            ppiStack_dc = (int **)0x10518781;
            iVar2 = FUN_1050ef40();
            if (iVar2 != 0) {
              pppiStack_d8 = (int ***)0x0;
              ppiStack_dc = (int **)0x0;
              pcStack_e0 = pcStack_a8;
              piStack_c4 = (int *)0x0;
              ppppiStack_c0 = (int ****)0x0;
              FUN_11a98de0(&piStack_c4);
              FUN_104d1670("SkillIcon",*(undefined4 *)(iVar2 + 0x40));
              auStack_50[0] = 0;
              ppppiStack_40 = (int ****)auStack_50;
              pppiStack_3c = (int ***)ppppiStack_40;
              FUN_100e5aa0(ppppiStack_40);
              FUN_104d1670("strSkillName",ppppiStack_40);
              if ((ppppiStack_40 != &pppiStack_54) && (ppppiStack_40 != (int ****)0x0)) {
                FUN_10c3d5d0(ppppiStack_40);
              }
              FUN_104d1550("skilllevel",*(undefined4 *)(iVar2 + 0x14));
              FUN_104d1550("SkillID",*(undefined4 *)(iVar2 + 0x10));
              FUN_104d1550("skilltype",*(undefined4 *)(iVar2 + 0x58));
              FUN_104d1550("learntime",*(undefined4 *)(iVar2 + 0x94));
              FUN_104d1550("aptitude",*(undefined4 *)(iVar2 + 0x6c));
              FUN_104d1550("quality",*(undefined4 *)(iVar2 + 0x70));
              FUN_104d1550("skillPoint",*(undefined4 *)(iVar2 + 100));
              FUN_104d1550("intimate",*(undefined4 *)(iVar2 + 0x68));
              pppiStack_54 = (int ***)((uint)pppiStack_54 & 0xffffff00);
              ppppiStack_44 = &pppiStack_54;
              ppppiStack_40 = ppppiStack_44;
              FUN_100e5aa0(ppppiStack_44);
              FUN_104d1670("skilleffect",ppppiStack_44);
              if ((ppppiStack_44 != &pppiStack_58) && ((int *****)ppppiStack_44 != (int *****)0x0))
              {
                FUN_10c3d5d0(ppppiStack_44);
              }
              FUN_104d15e0("bAddNew",pcStack_e0);
              FUN_104d15e0("bAdvanced",*(undefined1 *)(iVar2 + 0x54));
              FUN_104d15e0("bFixed",0);
              FUN_104d1550("nCurSkillLv",*(undefined4 *)(iVar2 + 0x14));
              uVar3 = (*(code *)(*pppiStack_78)[0x2e])(*(undefined4 *)(iVar2 + 0x10));
              FUN_104d1550("nMaxSkillLv",uVar3);
              (**(code **)(*piStack_98 + 0x3c))(uStack_90,&pcStack_e0);
              if (((uint)ppppiStack_c0 >> 6 & 1) != 0) {
                ppiStack_dc = &piStack_c4;
                pppiStack_d8 = pppiStack_bc;
                pcStack_e0 = (char *)0x105189ca;
                (**(code **)(*piStack_c4 + 8))();
              }
            }
            uVar4 = uVar4 + 1;
            param_1 = (int *****)ppppiStack_44;
          } while (uVar4 < (uint)(aiStack_a0[0] - (int)pppiStack_a4 >> 3));
        }
        pppiStack_d8 = (int ***)(uint)(((byte)pppiStack_58 & 0x8f) == 10);
        ppiStack_dc = (int **)&iStack_7c;
        pcStack_e0 = "skillNoticeList";
        (**(code **)(*piStack_5c + 0x14))(pppiStack_54);
        uVar3 = FUN_112fb100();
        FUN_104d1550("nLastPetIndex",uVar3);
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          pppiStack_bc = (int ***)param_1[2];
          piStack_c4 = (int *)0x10518a48;
          ppppiStack_c0 = (int ****)param_1;
          (*(code *)(**param_1)[2])();
          *param_1 = (int ****)0x0;
        }
        param_1[1] = (int ****)0x2;
        *(undefined1 *)(param_1 + 2) = 1;
        if ((int ****)pppiStack_88 != (int ****)0x0) {
          pppiStack_bc = pppiStack_88;
          ppppiStack_c0 = (int ****)0x10518a67;
          FUN_10c3d5d0();
        }
        if ((uStack_74 >> 6 & 1) != 0) {
          ppppiStack_c0 = &pppiStack_78;
          pppiStack_bc = pppiStack_70;
          piStack_c4 = (int *)0x10518a87;
          (*(code *)(*pppiStack_78)[2])();
          pppiStack_78 = (int ***)0x0;
        }
        uStack_74 = 0;
        if (((uint)piStack_5c >> 6 & 1) != 0) {
          ppppiStack_c0 = &pppiStack_60;
          pppiStack_bc = pppiStack_58;
          piStack_c4 = (int *)0x10518ab4;
          (*(code *)(*pppiStack_60)[2])();
          pppiStack_60 = (int ***)0x0;
        }
        piStack_5c = (int *)0x0;
        if (((uint)pppiStack_3c >> 6 & 1) != 0) {
          ppppiStack_c0 = (int ****)&ppppiStack_40;
          pppiStack_bc = pppiStack_38;
          piStack_c4 = (int *)0x10518ae4;
          (*(code *)(*ppppiStack_40)[2])();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10531e90 @ 10531e90  size=1576 ===== */
// calls: CPet::SetName
// strings:
//   "equipName"
//   "itemID"
//   "bufferID"
//   "bufferName"

/* [RE-AUTO c0]
   strings:
     ""equipName""
     ""itemID""
     ""bufferID""
     ""bufferName"" */

void FUN_10531e90(void)

{
  int *****pppppiVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *****pppppiVar8;
  int in_stack_00000010;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  int *****pppppiStack_b8;
  int *****pppppiStack_b4;
  int ****ppppiStack_b0;
  undefined1 *puStack_ac;
  uint ***pppuStack_a8;
  int **ppiStack_a4;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint **local_88;
  uint local_84;
  int **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint **ppuStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  undefined4 uStack_64;
  int ***pppiStack_60;
  int ***pppiStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  int **ppiStack_50;
  int ****ppppiStack_4c;
  int ****ppppiStack_48;
  int ****ppppiStack_44;
  int ****ppppiStack_40;
  undefined4 uStack_3c;
  int ****ppppiStack_38;
  uint ****ppppuStack_34;
  uint ****ppppuStack_30;
  int *****pppppiStack_24;
  int *****pppppiStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_94;
  if (((byte)*(uint *)(in_stack_00000010 + 4) & 0x8f) == 6) {
    if ((*(uint *)(in_stack_00000010 + 4) >> 6 & 1) == 0) {
      puVar7 = *(undefined1 **)(in_stack_00000010 + 8);
    }
    else {
      puVar7 = (undefined1 *)**(undefined4 **)(in_stack_00000010 + 8);
    }
  }
  else {
    puVar7 = &DAT_11d9d32b;
  }
  local_84 = *(uint *)(in_stack_00000010 + 0x1c);
  local_7c = *(undefined4 *)(in_stack_00000010 + 0x24);
  ppiStack_a4 = *(int ***)(in_stack_00000010 + 0x20);
  local_78 = *(undefined4 *)(in_stack_00000010 + 0x28);
  local_88 = (uint **)0x0;
  local_80 = ppiStack_a4;
  if ((local_84 >> 6 & 1) != 0) {
    local_88 = *(uint ***)(in_stack_00000010 + 0x18);
    pppuStack_a8 = &local_88;
    puStack_ac = (undefined1 *)0x10531f18;
    (*(code *)(*local_88)[1])();
  }
  uVar3 = *(uint *)(in_stack_00000010 + 0x34) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    local_94 = *(int *)(in_stack_00000010 + 0x38);
  }
  else {
    local_94 = -0x21524151;
  }
  uVar3 = *(uint *)(in_stack_00000010 + 0x4c) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    iStack_90 = *(int *)(in_stack_00000010 + 0x50);
  }
  else {
    iStack_90 = -0x21524151;
  }
  ppiStack_6c = *(int ***)(in_stack_00000010 + 100);
  uStack_64 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  ppiStack_a4 = *(int ***)(in_stack_00000010 + 0x68);
  pppiStack_60 = *(int ****)(in_stack_00000010 + 0x70);
  ppuStack_70 = (uint **)0x0;
  ppiStack_68 = ppiStack_a4;
  if (((uint)ppiStack_6c >> 6 & 1) != 0) {
    ppuStack_70 = *(uint ***)(in_stack_00000010 + 0x60);
    pppuStack_a8 = &ppuStack_70;
    puStack_ac = (undefined1 *)0x10531f9c;
    (*(code *)(*ppuStack_70)[1])();
  }
  ppiStack_a4 = (int **)0x10531fa9;
  piVar4 = (int *)FUN_107cb630();
  if (piVar4 != (int *)0x0) {
    ppiStack_a4 = (int **)0x10531fba;
    cVar2 = FUN_116698a0();
    if (cVar2 != '\0') {
      ppiStack_a4 = (int **)0x10531fc9;
      FUN_1166dfb0();
      if (puVar7 != (undefined1 *)0x0) {
        ppiStack_a4 = (int **)0x0;
        pppuStack_a8 = (uint ***)0x0;
        ppppiStack_b0 = &pppiStack_58;
        pppiStack_58 = (int ***)0x0;
        pppiStack_54 = (int ***)0x0;
        pppppiStack_b4 = (int *****)0x10531ff2;
        puStack_ac = puVar7;
        FUN_11a98de0();
        pppppiVar1 = (int *****)piVar4[0x6b];
        pppppiStack_b4 = (int *****)0x10532003;
        pppppiStack_b4 = (int *****)(**(code **)(*piVar4 + 0x14))();
        ppiStack_a4 = (int **)0x0;
        pppppiStack_b8 = (int *****)0x10532015;
        CPet__SetName();
        pppppiStack_b8 = (int *****)&pppiStack_54;
        pppiStack_54 = (int ***)((uint)pppiStack_54 & 0xffffff00);
        ppppiStack_bc = (int ****)0x10532030;
        ppppiStack_44 = (int ****)pppppiStack_b8;
        ppppiStack_40 = (int ****)pppppiStack_b8;
        FUN_100e5aa0();
        ppppiStack_bc = ppppiStack_44;
        ppppiStack_c0 = (int ****)0x11dc14b4;
        FUN_104d1670();
        if ((ppppiStack_44 != &pppiStack_58) && ((int *****)ppppiStack_44 != (int *****)0x0)) {
          ppppiStack_bc = ppppiStack_44;
          ppppiStack_c0 = (int ****)0x1053205d;
          FUN_10c3d5d0();
        }
        if (puStack_ac != (undefined1 *)0x0) {
          ppppiStack_bc = (int ****)puStack_ac;
          ppppiStack_c0 = (int ****)0x1053206e;
          FUN_10c3da30();
        }
        ppppiStack_bc = (int ****)0x10532078;
        ppppiStack_bc = (int ****)(**(code **)(*piVar4 + 0x14))();
        puStack_ac = (undefined1 *)0x0;
        ppppiStack_c0 = (int ****)0x1053208a;
        CPet__SetName();
        ppppiStack_c0 = &pppiStack_5c;
        pppiStack_5c = (int ***)((uint)pppiStack_5c & 0xffffff00);
        ppppiStack_4c = ppppiStack_c0;
        ppppiStack_48 = ppppiStack_c0;
        FUN_100e5aa0();
        FUN_104d1670("equipName",ppppiStack_4c);
        if ((ppppiStack_4c != &pppiStack_60) && ((int *****)ppppiStack_4c != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_4c);
        }
        if ((uint *****)pppppiStack_b4 != (uint *****)0x0) {
          FUN_10c3da30(pppppiStack_b4);
        }
        cVar2 = FUN_1166e250();
        if (cVar2 == '\0') {
          uVar5 = FUN_11669730();
        }
        else {
          uVar5 = FUN_1166dc70();
        }
        FUN_104d1550("itemID",uVar5);
        uVar5 = FUN_1166e040(ppppiStack_b0);
        FUN_104d1550("bufferID",uVar5);
        FUN_1166c4b0(pppppiStack_b4);
        iVar6 = FUN_116c4f30();
        if (iVar6 == 0) {
          ppppiStack_bc = (int ****)0x0;
          CPet__SetName(&DAT_11d9d32b);
          FUN_1024ebe0(&ppppiStack_c0,&pppppiStack_b8,0x159d,0);
          ppiStack_6c = (int **)((uint)ppiStack_6c & 0xffffff00);
          pppiStack_5c = &ppiStack_6c;
          pppiStack_58 = pppiStack_5c;
          FUN_100e5aa0(pppiStack_5c);
          FUN_104d1670("bufferName",pppiStack_5c);
          if ((pppiStack_58 != &ppiStack_6c) && ((int ****)pppiStack_58 != (int ****)0x0)) {
            FUN_10c3d5d0(pppiStack_58);
          }
          if ((int *****)ppppiStack_c0 != (int *****)0x0) {
            FUN_10c3da30(ppppiStack_c0);
          }
        }
        else {
          pppiStack_58 = &ppiStack_68;
          ppiStack_68 = (int **)((uint)ppiStack_68 & 0xffffff00);
          pppiStack_54 = pppiStack_58;
          FUN_100e5aa0(pppiStack_58);
          FUN_104d1670("bufferName",pppiStack_58);
          if ((pppiStack_58 != &ppiStack_6c) && ((int ****)pppiStack_58 != (int ****)0x0)) {
            FUN_10c3d5d0(pppiStack_58);
          }
        }
        (*(code *)(*pppppiStack_b4)[0xf])(puStack_ac,&local_84);
        uVar5 = FUN_11669730();
        local_94 = FUN_1052bdd0(uVar5);
        if (local_94 != 0) {
          ppiStack_a4 = (int **)0x1053225f;
          uStack_8c = FUN_11669730();
          if (iStack_90 + 1 < 4) {
            ppiStack_a4 = (int **)0x0;
            pppuStack_a8 = (uint ***)0x0;
            ppppiStack_b0 = (int ****)&ppppiStack_40;
            ppppiStack_40 = (int ****)0x0;
            uStack_3c = 0;
            pppppiStack_b4 = (int *****)0x10532292;
            puStack_ac = puVar7;
            FUN_11a98de0();
            pppppiStack_b4 = (int *****)&ppppuStack_34;
            ppppuStack_34 = (uint ****)((uint)ppppuStack_34 & 0xffffff00);
            pppppiStack_b8 = (int *****)0x105322b9;
            pppppiStack_24 = pppppiStack_b4;
            pppppiStack_20 = pppppiStack_b4;
            FUN_100e5aa0();
            pppppiStack_b8 = pppppiStack_24;
            ppppiStack_bc = (int ****)0x11dc14b4;
            ppppiStack_c0 = (int ****)0x105322d0;
            FUN_104d1670();
            if ((pppppiStack_24 != &ppppiStack_38) &&
               ((uint *****)pppppiStack_24 != (uint *****)0x0)) {
              pppppiStack_b8 = pppppiStack_24;
              ppppiStack_bc = (int ****)0x105322ef;
              FUN_10c3d5d0();
            }
            ppppiStack_bc = (int ****)0x11dbebf0;
            ppppiStack_c0 = (int ****)0x10532306;
            pppppiStack_b8 = pppppiVar1;
            FUN_104d1550();
            pppppiVar8 = (int *****)((int)ppiStack_a4 + 1);
            ppppiStack_bc = (int ****)0x10532316;
            pppppiStack_b8 = pppppiVar8;
            ppppiStack_bc = (int ****)FUN_1166e040();
            ppppiStack_c0 = (int ****)0x11dbed04;
            FUN_104d1550();
            ppppiStack_c0 = (int ****)0x10532332;
            ppppiStack_bc = (int ****)pppppiVar8;
            FUN_1166c4b0();
            ppppiStack_c0 = (int ****)0x10532339;
            iVar6 = FUN_116c4f30();
            if (iVar6 == 0) {
              ppppiStack_c0 = (int ****)&DAT_11d9d32b;
              puStack_ac = (undefined1 *)0x0;
              CPet__SetName();
              FUN_1024ebe0(&ppppiStack_b0,&puStack_ac,0x159d,0);
              ppppiStack_44 = (int ****)((uint)ppppiStack_44 & 0xffffff00);
              ppppuStack_34 = (uint ****)&ppppiStack_44;
              ppppuStack_30 = ppppuStack_34;
              FUN_100e5aa0(ppppuStack_34);
              FUN_104d1670("bufferName",ppppuStack_34);
              if (((int *****)ppppuStack_34 != &ppppiStack_48) &&
                 ((int *****)ppppuStack_34 != (int *****)0x0)) {
                FUN_10c3d5d0(ppppuStack_34);
              }
              FUN_100e5670();
            }
            else {
              ppppiStack_c0 = (int ****)&ppppiStack_40;
              iVar6 = FUN_100e5b40();
              FUN_104d1670("bufferName",*(undefined4 *)(iVar6 + 0x14));
              if (((int *****)ppppuStack_30 != &ppppiStack_44) &&
                 ((int *****)ppppuStack_30 != (int *****)0x0)) {
                FUN_10c3d5d0(ppppuStack_30);
              }
            }
            (*(code *)(*pppuStack_a8)[0xf])(pppppiVar1,&pppiStack_60);
            FUN_104d7c10();
          }
        }
        if (((uint)pppiStack_54 >> 6 & 1) != 0) {
          pppuStack_a8 = (uint ***)&pppiStack_58;
          ppiStack_a4 = ppiStack_50;
          puStack_ac = (undefined1 *)0x10532459;
          (*(code *)(*pppiStack_58)[2])();
        }
      }
    }
  }
  if (((uint)ppiStack_6c >> 6 & 1) != 0) {
    pppuStack_a8 = &ppuStack_70;
    ppiStack_a4 = ppiStack_68;
    puStack_ac = (undefined1 *)0x10532476;
    (*(code *)(*ppuStack_70)[2])();
    ppuStack_70 = (uint **)0x0;
  }
  ppiStack_6c = (int **)0x0;
  if ((local_84 >> 6 & 1) != 0) {
    pppuStack_a8 = &local_88;
    ppiStack_a4 = local_80;
    puStack_ac = (undefined1 *)0x105324a3;
    (*(code *)(*local_88)[2])();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_107cc1d0 @ 107cc1d0  size=2655 ===== */
// calls: CEquipLevelUpInfo::LookupMap0x108ByKey
// strings:
//   "weaponSlash_Red"
//   "weaponSlash_Orange"
//   "weaponSlash_Yellow"
//   "weaponSlash_Green"
//   "weaponSlash_Blue"
//   "weaponSlash_White"
//   "weaponSlash_Purple"
//   "weaponSlash_Copper"
//   "weaponSlash_Silver"
//   "weaponSlash_Gold"
//   "attackValue"
//   "attackWaterValue"
//   "attackFireValue"
//   "attackThunderValue"
//   "attackDragonValue"
//   "attackIceValue"
//   "defendValue"
//   "healthValue"
//   "knowingLevel"
//   "initSlotCounts"

/* [RE-AUTO c0]
   strings:
     ""weaponSlash_Red""
     ""weaponSlash_Orange""
     ""weaponSlash_Yellow""
     ""weaponSlash_Green""
     ""weaponSlash_Blue""
     ""weaponSlash_White""
     ""weaponSlash_Purple""
     ""weaponSlash_Copper""
     ""weaponSlash_Silver""
     ""weaponSlash_Gold"" */

void __fastcall
FUN_107cc1d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,int param_8,char param_9,int param_10)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  local_5c = 0;
  iVar6 = iVar5;
  local_4c = param_2;
  local_48 = param_1;
  if (param_8 == 0x5e) {
    if ((param_10 != 0) && (cVar2 = FUN_116698a0(), cVar2 != '\0')) {
      iVar6 = FUN_11669250();
      iVar6 = FUN_1052bdd0(*(undefined4 *)(iVar6 + 0x10));
    }
  }
  else {
    iVar3 = FUN_10254130(param_5);
    if (((iVar3 != 0) && (iVar6 = iVar3, *(int *)(iVar3 + 0x34) != 2)) &&
       (iVar6 = iVar5, *(int *)(iVar3 + 0x34) == 4)) {
      local_5c = FUN_107cb110(param_5);
    }
  }
  iVar5 = 0;
  local_50 = 0;
  local_1c = 0;
  local_20 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54 = 0;
  local_60 = 0;
  local_64 = 0;
  local_58 = 0;
  local_68 = 0;
  iVar3 = local_54;
  if (iVar6 == 0) goto LAB_107cc48c;
  if (param_8 == 0x32) {
    local_54 = FUN_115c4760(iVar6,param_6);
    local_64 = *(undefined4 *)(iVar6 + 0x124);
    local_58 = *(int *)(iVar6 + 0x160);
    uVar4 = FUN_116c4ea0(0);
    FUN_104d1550("weaponSlash_Red",uVar4);
    uVar4 = FUN_116c4ea0(1);
    FUN_104d1550("weaponSlash_Orange",uVar4);
    uVar4 = FUN_116c4ea0(2);
    FUN_104d1550("weaponSlash_Yellow",uVar4);
    uVar4 = FUN_116c4ea0(3);
    FUN_104d1550("weaponSlash_Green",uVar4);
    uVar4 = FUN_116c4ea0(4);
    FUN_104d1550("weaponSlash_Blue",uVar4);
    uVar4 = FUN_116c4ea0(5);
    FUN_104d1550("weaponSlash_White",uVar4);
    uVar4 = FUN_116c4ea0(6);
    FUN_104d1550("weaponSlash_Purple",uVar4);
    uVar4 = FUN_116c4ea0(7);
    FUN_104d1550("weaponSlash_Copper",uVar4);
    uVar4 = FUN_116c4ea0(8);
    FUN_104d1550("weaponSlash_Silver",uVar4);
    uVar4 = FUN_116c4ea0(9);
    FUN_104d1550("weaponSlash_Gold",uVar4);
  }
  else {
    local_60 = FUN_107cb630();
    if ((local_60 == 0) || (cVar2 = FUN_116698a0(), iVar3 = local_60, cVar2 == '\0')) {
      iVar3 = 0;
    }
    local_54 = 0;
    if (iVar3 != 0) {
      local_54 = FUN_1166ded0();
    }
    if (param_8 == 0xe) {
      if (param_9 == '\0') {
        iVar3 = FUN_117b5220(*(undefined4 *)(iVar6 + 0x114),param_6);
        if (iVar3 == 0) goto LAB_107cc477;
        local_54 = *(int *)(iVar3 + 0xd4) + local_54;
      }
    }
    else if (param_8 == 0x3f) {
      if ((param_9 == '\0') &&
         (iVar3 = CEquipLevelUpInfo__LookupMap0x108ByKey(*(undefined4 *)(iVar6 + 0x11c),param_7),
         iVar3 != 0)) {
        local_54 = *(int *)(iVar3 + 0xe8) + local_54;
      }
    }
    else {
LAB_107cc477:
      local_54 = 0;
    }
  }
  local_60 = *(int *)(iVar6 + 300);
  iVar3 = local_60;
  if (local_54 < local_60) {
    iVar3 = local_54;
  }
LAB_107cc48c:
  local_54 = iVar3;
  local_74 = (int *)0x0;
  local_70 = (int *)0x0;
  local_6c = 0;
  if ((param_10 == 0) || (cVar2 = FUN_116698a0(), cVar2 == '\0')) {
    if (iVar6 != 0) {
      FUN_11405420(param_7,iVar6,&local_74);
      FUN_11406f90(iVar6,&local_74);
      if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
        local_1c = local_74[2];
        local_20 = local_74[3];
        local_8 = local_74[4];
        local_c = local_74[5];
        local_10 = local_74[6];
        iVar3 = local_74[1];
        iVar5 = *local_74;
        local_14 = local_74[7];
        local_18 = local_74[8];
        local_38 = local_74[9];
        local_3c = local_74[10];
        local_40 = local_74[0xb];
        local_24 = local_74[0xc];
        local_28 = local_74[0xd];
        local_2c = local_74[0xe];
        local_30 = local_74[0xf];
        local_34 = local_74[0x10];
        local_44 = local_74[0x11];
        local_50 = iVar3;
      }
      else {
        iVar3 = 0;
      }
      if (local_74 != local_70) {
        local_70 = local_74;
      }
      FUN_114074a0(iVar6,1,param_6,&local_74);
      FUN_11406f90(iVar6,&local_74);
      if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
        local_1c = local_1c + local_74[2];
        local_20 = local_20 + local_74[3];
        local_8 = local_8 + local_74[4];
        local_c = local_c + local_74[5];
        local_10 = local_10 + local_74[6];
        local_14 = local_14 + local_74[7];
        local_18 = local_18 + local_74[8];
        local_38 = local_38 + local_74[9];
        local_3c = local_3c + local_74[10];
        local_40 = local_40 + local_74[0xb];
        local_24 = local_24 + local_74[0xc];
        iVar3 = iVar3 + local_74[1];
        iVar5 = iVar5 + *local_74;
        local_28 = local_28 + local_74[0xd];
        local_2c = local_2c + local_74[0xe];
        local_30 = local_30 + local_74[0xf];
        local_34 = local_34 + local_74[0x10];
        local_44 = local_44 + local_74[0x11];
        local_50 = iVar3;
      }
      if (local_74 != local_70) {
        local_70 = local_74;
      }
      FUN_114073f0(iVar6,param_7,&local_74);
      FUN_11406f90(iVar6,&local_74);
      if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
        local_1c = local_1c + local_74[2];
        local_20 = local_20 + local_74[3];
        local_8 = local_8 + local_74[4];
        local_c = local_c + local_74[5];
        local_10 = local_10 + local_74[6];
        local_14 = local_14 + local_74[7];
        local_18 = local_18 + local_74[8];
        local_38 = local_38 + local_74[9];
        local_3c = local_3c + local_74[10];
        local_40 = local_40 + local_74[0xb];
        local_24 = local_24 + local_74[0xc];
        local_50 = iVar3 + local_74[1];
        iVar5 = iVar5 + *local_74;
        local_28 = local_28 + local_74[0xd];
        local_2c = local_2c + local_74[0xe];
        local_30 = local_30 + local_74[0xf];
        local_34 = local_34 + local_74[0x10];
        local_44 = local_44 + local_74[0x11];
      }
      if (local_74 != local_70) {
        local_70 = local_74;
      }
    }
  }
  else {
    FUN_11405c10(param_10,&local_74);
    FUN_11407030(param_10,&local_74);
    if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
      local_1c = local_74[2];
      local_20 = local_74[3];
      local_8 = local_74[4];
      local_c = local_74[5];
      local_10 = local_74[6];
      iVar6 = local_74[1];
      iVar5 = *local_74;
      local_14 = local_74[7];
      local_18 = local_74[8];
      local_38 = local_74[9];
      local_3c = local_74[10];
      local_40 = local_74[0xb];
      local_24 = local_74[0xc];
      local_28 = local_74[0xd];
      local_2c = local_74[0xe];
      local_30 = local_74[0xf];
      local_34 = local_74[0x10];
      local_44 = local_74[0x11];
      local_50 = iVar6;
    }
    else {
      iVar6 = 0;
    }
    if (local_74 != local_70) {
      local_70 = local_74;
    }
    FUN_114074f0(param_10,&local_74);
    FUN_11407030(param_10,&local_74);
    if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
      local_1c = local_1c + local_74[2];
      local_20 = local_20 + local_74[3];
      local_8 = local_8 + local_74[4];
      local_c = local_c + local_74[5];
      local_10 = local_10 + local_74[6];
      local_14 = local_14 + local_74[7];
      local_18 = local_18 + local_74[8];
      local_38 = local_38 + local_74[9];
      local_3c = local_3c + local_74[10];
      local_40 = local_40 + local_74[0xb];
      local_24 = local_24 + local_74[0xc];
      iVar6 = iVar6 + local_74[1];
      iVar5 = iVar5 + *local_74;
      local_28 = local_28 + local_74[0xd];
      local_2c = local_2c + local_74[0xe];
      local_30 = local_30 + local_74[0xf];
      local_34 = local_34 + local_74[0x10];
      local_44 = local_44 + local_74[0x11];
      local_50 = iVar6;
    }
    if (local_74 != local_70) {
      local_70 = local_74;
    }
    FUN_11407430(param_10,&local_74);
    FUN_11407030(param_10,&local_74);
    if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
      local_1c = local_1c + local_74[2];
      local_20 = local_20 + local_74[3];
      local_8 = local_8 + local_74[4];
      local_c = local_c + local_74[5];
      local_10 = local_10 + local_74[6];
      local_14 = local_14 + local_74[7];
      local_18 = local_18 + local_74[8];
      local_38 = local_38 + local_74[9];
      local_3c = local_3c + local_74[10];
      local_40 = local_40 + local_74[0xb];
      local_24 = local_24 + local_74[0xc];
      local_50 = iVar6 + local_74[1];
      iVar5 = iVar5 + *local_74;
      local_28 = local_28 + local_74[0xd];
      local_2c = local_2c + local_74[0xe];
      local_30 = local_30 + local_74[0xf];
      local_34 = local_34 + local_74[0x10];
      local_44 = local_44 + local_74[0x11];
    }
    if (local_74 != local_70) {
      local_70 = local_74;
    }
  }
  if (local_5c != 0) {
    FUN_107cb1d0();
    if (((int)local_70 - (int)local_74 & 0xfffffffcU) == 0x48) {
      local_50 = local_50 + local_74[1];
      local_1c = local_1c + local_74[2];
      local_20 = local_20 + local_74[3];
      local_8 = local_8 + local_74[4];
      local_c = local_c + local_74[5];
      local_10 = local_10 + local_74[6];
      local_14 = local_14 + local_74[7];
      local_18 = local_18 + local_74[8];
      local_38 = local_38 + local_74[9];
      local_3c = local_3c + local_74[10];
      local_40 = local_40 + local_74[0xb];
      local_24 = local_24 + local_74[0xc];
      iVar5 = iVar5 + *local_74;
      local_28 = local_28 + local_74[0xd];
      local_2c = local_2c + local_74[0xe];
      local_30 = local_30 + local_74[0xf];
      local_34 = local_34 + local_74[0x10];
      local_44 = local_44 + local_74[0x11];
    }
    if (local_74 != local_70) {
      local_70 = local_74;
    }
  }
  FUN_104d1550("attackValue",iVar5);
  FUN_104d1550("attackWaterValue",local_8);
  FUN_104d1550("attackFireValue",local_c);
  FUN_104d1550("attackThunderValue",local_10);
  FUN_104d1550("attackDragonValue",local_14);
  FUN_104d1550("attackIceValue",local_18);
  FUN_104d1550("defendValue",local_50);
  FUN_104d1550("healthValue",local_1c);
  FUN_104d1550("knowingLevel",local_20);
  FUN_104d1550("initSlotCounts",local_54);
  FUN_104d1550("maxSlotCounts",local_60);
  FUN_104d1550("resWaterValue",local_24);
  FUN_104d1550("resFireValue",local_28);
  FUN_104d1550("resThunderValue",local_2c);
  FUN_104d1550("resDragonValue",local_30);
  FUN_104d1550("resIceValue",local_34);
  FUN_104d1550("poisonValue",local_38);
  FUN_104d1550("sleepValue",local_3c);
  FUN_104d1550("hocusValue",local_40);
  FUN_104d1550("DynamiteValue",local_44);
  FUN_104d1550("slotCount",local_64);
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
      ((iVar6 = (**(code **)(*piVar1 + 0xb4))(), iVar6 != 0 && (param_9 != '\0')))) &&
     ((param_3 == 3 || (param_3 == 8)))) {
    iVar6 = FUN_113509f0(2);
    FUN_104d1550("weaponCurrentSlashDIF",iVar6 - local_58);
    local_58 = iVar6;
    local_68 = FUN_113509f0(4);
  }
  FUN_104d1550("weaponCurrentSlash",local_58);
  FUN_104d1550("weaponCurrentSlashBuffer",local_68);
  if (local_74 != (int *)0x0) {
    FUN_10c3d5d0(local_74);
  }
  return;
}



/* ===== CSkillVideo::GetManagers @ 107cd340  size=115 ===== */
// strings:
//   "CSkillVideo::GetManagers"
//   "StcMbrNameSvr<class CInfoManager>::GetSingletonName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSkillVideo::GetManagers
   strings:
     ""CSkillVideo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSkillVideo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bec68 & 1) == 0) {
    DAT_123bec68 = DAT_123bec68 | 1;
    _DAT_123bec60 = &DAT_123bec50;
    DAT_123bec64 = &DAT_123bec50;
    DAT_123bec50 = 0;
    FUN_100d83d0("CSkillVideo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70720);
  }
  return DAT_123bec4c;
}



/* ===== FUN_107cd4f0 @ 107cd4f0  size=158 ===== */
// calls: CNewSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   calls: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo"" */

undefined4 FUN_107cd4f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8590;
  puVar2 = (undefined4 *)CNewSkillInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CNewSkillInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123be988 & 1) == 0) {
        DAT_123be988 = DAT_123be988 | 1;
        FUN_107d58f0();
        FUN_11a8911f(&LAB_11c70810);
      }
      puVar2 = &DAT_123be9c4;
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



/* ===== FUN_107cd660 @ 107cd660  size=158 ===== */
// calls: CRageInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CRageInfo"

/* [RE-AUTO c0]
   calls: CRageInfo::GetManagers
   strings:
     ""CRageInfo"" */

undefined4 FUN_107cd660(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8598;
  puVar2 = (undefined4 *)CRageInfo__GetInfoManagerSingleton();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CRageInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c7374 & 1) == 0) {
        DAT_123c7374 = DAT_123c7374 | 1;
        FUN_107d5990();
        FUN_11a8911f(&LAB_11c707b0);
      }
      puVar2 = &DAT_123c7378;
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



/* ===== FUN_107d45b0 @ 107d45b0  size=88 ===== */
// calls: CSkillVideo::GetManagers, CInfoManager::FindByName
// strings:
//   "CSkillVideo"

/* [RE-AUTO c0]
   calls: CSkillVideo::GetManagers
   strings:
     ""CSkillVideo"" */

undefined * FUN_107d45b0(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc85a0;
  puVar1 = (undefined4 *)CSkillVideo__GetManagers();
  puVar2 = (undefined *)*puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)CInfoManager__FindByName(&local_8,"CSkillVideo",0);
    if (puVar2 == (undefined *)0x0) {
      if ((DAT_123be9fc & 1) == 0) {
        DAT_123be9fc = DAT_123be9fc | 1;
        FUN_107d5890();
        FUN_11a8911f(&LAB_11c70870);
      }
      puVar2 = &DAT_123be98c;
    }
  }
  return puVar2;
}



/* ===== FUN_10813de0 @ 10813de0  size=1015 ===== */
// strings:
//   "RequestManufactureStudyViewData"
//   "ManufactureStudy"
//   "ManufactureStudyNextLevelSkill"
//   "ManufactureTreeListClick"
//   "ManufactureMake"
//   "ManufactureCancel"
//   "RequestManufactureMake"
//   "StopIntoneBar"
//   "RequestManufactureViewData"
//   "OnClose"
//   "CheckUnBind"
//   "C2AS_IsMaking"

/* [RE-AUTO c0]
   strings:
     ""RequestManufactureStudyViewData""
     ""ManufactureStudy""
     ""ManufactureStudyNextLevelSkill""
     ""ManufactureTreeListClick""
     ""ManufactureMake""
     ""ManufactureCancel""
     ""RequestManufactureMake""
     ""StopIntoneBar""
     ""RequestManufactureViewData""
     ""OnClose"" */

void __fastcall FUN_10813de0(code ****param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_104;
  char *pcStack_100;
  code **ppcStack_fc;
  undefined4 ***pppuStack_f8;
  code *pcStack_f4;
  code **ppcStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  code **ppcStack_e4;
  code **ppcStack_e0;
  undefined4 ***pppuStack_dc;
  undefined4 ***pppuStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  code ***pppcStack_c4;
  undefined4 ***pppuStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined1 *puStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  undefined4 ***pppuStack_a0;
  code ***pppcStack_9c;
  undefined1 *puStack_98;
  char *pcStack_94;
  code ***pppcStack_90;
  undefined4 ***pppuStack_8c;
  code ***pppcStack_88;
  code *pcStack_84;
  char *pcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code *pcStack_70;
  char *pcStack_6c;
  code ***pppcStack_68;
  undefined4 ***pppuStack_64;
  code ***pppcStack_60;
  code *pcStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  undefined4 ***pppuStack_50;
  code ***pppcStack_4c;
  code *pcStack_48;
  char *pcStack_44;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  code ***pppcStack_38;
  code *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined4 ***local_24 [4];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)local_24;
  local_10 = (undefined1 *)local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "RequestManufactureStudyViewData";
  pcStack_34 = (code *)0x10813e14;
  FUN_100b62c0();
  pcStack_34 = FUN_10814230;
  pppuStack_3c = (undefined4 ***)&pcStack_2c;
  pppuStack_40 = (undefined4 ***)0x10813e2f;
  pppcStack_38 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppuStack_40 = local_24[0];
    pcStack_44 = (char *)0x10813e45;
    FUN_10c3d5d0();
  }
  local_24[0] = &pppcStack_38;
  pppuStack_40 = (undefined4 ***)0x11dcbb10;
  pcStack_44 = "ManufactureStudy";
  pcStack_48 = (code *)0x10813e65;
  FUN_100b62c0();
  pcStack_48 = FUN_10814270;
  pppuStack_50 = &pppuStack_40;
  pppcStack_54 = (code ***)0x10813e80;
  pppcStack_4c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x10813e96;
    FUN_10c3d5d0();
  }
  pppuStack_3c = &pppcStack_4c;
  pppcStack_54 = (code ***)0x11dcbb32;
  pcStack_58 = "ManufactureStudyNextLevelSkill";
  pcStack_5c = (code *)0x10813eb6;
  pppcStack_38 = (code ***)pppuStack_3c;
  FUN_100b62c0();
  pcStack_5c = FUN_108142b0;
  pppuStack_64 = &pppcStack_54;
  pppcStack_68 = (code ***)0x10813ed1;
  pppcStack_60 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_4c != &pppcStack_60) && ((code ****)pppcStack_4c != (code ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x10813ee7;
    FUN_10c3d5d0();
  }
  pppuStack_50 = &pppcStack_60;
  pppcStack_68 = (code ***)0x11dcbbf4;
  pcStack_6c = "ManufactureTreeListClick";
  pcStack_70 = (code *)0x10813f07;
  pppcStack_4c = (code ***)pppuStack_50;
  FUN_100b62c0();
  pcStack_70 = FUN_10814b20;
  pppuStack_78 = &pppcStack_68;
  pppcStack_7c = (code ***)0x10813f22;
  pppcStack_74 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pcStack_80 = (char *)0x10813f38;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppcStack_7c = (code ***)0x11dcbc07;
  pcStack_80 = "ManufactureMake";
  pcStack_84 = (code *)0x10813f58;
  pppcStack_60 = (code ***)pppuStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_10814b70;
  pppuStack_8c = &pppcStack_7c;
  pppcStack_90 = (code ***)0x10813f73;
  pppcStack_88 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_74 != &pppcStack_88) && ((code ****)pppcStack_74 != (code ****)0x0)) {
    pppcStack_90 = pppcStack_74;
    pcStack_94 = (char *)0x10813f89;
    FUN_10c3d5d0();
  }
  pppuStack_78 = &pppcStack_88;
  pppcStack_90 = (code ***)0x11dcbbc1;
  pcStack_94 = "ManufactureCancel";
  puStack_98 = (undefined1 *)0x10813fa9;
  pppcStack_74 = (code ***)pppuStack_78;
  FUN_100b62c0();
  puStack_98 = &LAB_10814c70;
  pppuStack_a0 = &pppcStack_90;
  pppcStack_a4 = (code ***)0x10813fc4;
  pppcStack_9c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x10813fda;
    FUN_10c3d5d0();
  }
  pppuStack_8c = &pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dcbbda;
  pcStack_a8 = "RequestManufactureMake";
  puStack_ac = (undefined1 *)0x10813ffa;
  pppcStack_88 = (code ***)pppuStack_8c;
  FUN_100b62c0();
  puStack_ac = &LAB_10814c20;
  pppcStack_b4 = (code ***)&pppcStack_a4;
  pppcStack_b8 = (code ***)0x10814015;
  pppcStack_b0 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x1081402b;
    FUN_10c3d5d0();
  }
  pppuStack_a0 = &pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dcbb91;
  pcStack_bc = "StopIntoneBar";
  pppuStack_c0 = (undefined4 ***)0x1081404b;
  pppcStack_9c = (code ***)pppuStack_a0;
  FUN_100b62c0();
  pppuStack_c0 = (undefined4 ***)FUN_10814cb0;
  pppuStack_c8 = &pppcStack_b8;
  pppcStack_cc = (code ***)0x10814066;
  pppcStack_c4 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x1081407c;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dcbbae;
  pppcStack_d0 = (code ***)0x11dcbb94;
  pppcStack_d4 = (code ***)0x1081409c;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_108142f0;
  pppuStack_d8 = &pppcStack_cc;
  pppuStack_dc = (undefined4 ***)0x108140ad;
  FUN_10815080();
  if (((code ****)pppuStack_c0 != &pppcStack_d4) && ((code ****)pppuStack_c0 != (code ****)0x0)) {
    pppuStack_dc = pppuStack_c0;
    ppcStack_e0 = (code **)0x108140c3;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppuStack_dc = (undefined4 ***)0x11dc1127;
  ppcStack_e0 = (code **)0x11dc1120;
  ppcStack_e4 = (code **)0x108140e3;
  pppuStack_c0 = (undefined4 ***)pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e8 = (code ***)&pppuStack_dc;
  pppcStack_ec = (code ***)0x108140f0;
  FUN_10814fb0();
  if ((pppcStack_d0 != &ppcStack_e4) && (pppcStack_d0 != (code ***)0x0)) {
    pppcStack_ec = pppcStack_d0;
    ppcStack_f0 = (code **)0x10814106;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = &ppcStack_e4;
  pppcStack_ec = (code ***)0x11dcbb73;
  ppcStack_f0 = (code **)0x11dcbb68;
  pcStack_f4 = (code *)0x10814126;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pcStack_f4 = FUN_108141f0;
  pppuStack_f8 = &pppcStack_ec;
  ppcStack_fc = (code **)0x10814137;
  FUN_10815080();
  if ((ppcStack_e0 != &pcStack_f4) && (ppcStack_e0 != (code **)0x0)) {
    ppcStack_fc = ppcStack_e0;
    pcStack_100 = (char *)0x1081414d;
    FUN_10c3d5d0();
  }
  ppcStack_e4 = &pcStack_f4;
  ppcStack_fc = (code **)0x11dcbb81;
  pcStack_100 = "C2AS_IsMaking";
  pcStack_104 = (code *)0x1081416d;
  ppcStack_e0 = ppcStack_e4;
  FUN_100b62c0();
  pcStack_104 = FUN_10814e60;
  FUN_10815080(&ppcStack_fc);
  if ((ppcStack_f0 != &pcStack_104) && (ppcStack_f0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_f0);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_108163a0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1081adf0 @ 1081adf0  size=1414 ===== */
// calls: floor
// strings:
//   "attackValue"
//   "attackWaterValue"
//   "attackFireValue"
//   "attackThunderValue"
//   "attackDragonValue"
//   "attackIceValue"
//   "attackDefendValue"
//   "attackHealthValue"
//   "currentSlashValue"
//   "passiveSkillLength"
//   "arrayPassiveSkillData"
//   "passiveSkillGroupID"
//   "passiveSkillValue"
//   "passiveSkillName"

/* [RE-AUTO c0]
   calls: floor
   strings:
     ""attackValue""
     ""attackWaterValue""
     ""attackFireValue""
     ""attackThunderValue""
     ""attackDragonValue""
     ""attackIceValue""
     ""attackDefendValue""
     ""attackHealthValue""
     ""currentSlashValue""
     ""passiveSkillLength"" */

void __thiscall
FUN_1081adf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_f4;
  double local_e4;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int *piStack_cc;
  uint local_c8;
  undefined4 local_c4;
  int iStack_b4;
  int iStack_b0;
  int *piStack_ac;
  uint uStack_a8;
  int *piStack_94;
  uint uStack_90;
  uint uStack_8c;
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)&uStack_f4;
  local_e4 = (double)CONCAT44(local_e4._4_4_,param_1);
  local_c8 = 0;
  local_c4 = 0;
  if (param_5 == '\0') {
    param_2 = param_2 + 0x48;
  }
  else {
    param_2 = param_2 + 0x30;
  }
  FUN_104f42b0(param_2);
  iVar4 = FUN_1052bdd0();
  iStack_d4 = iVar4;
  if (iVar4 != 0) {
    uStack_f4 = (double)(*(float *)(iVar4 + 0x1a4) * 0.0) + DAT_11de9968;
    dVar7 = floor(uStack_f4);
    uStack_d8 = (int)dVar7 + *(int *)(iVar4 + 400);
    uStack_f4 = (double)(*(float *)(iVar4 + 0x1a8) * 0.0) + DAT_11de9968;
    dVar7 = floor(uStack_f4);
    iStack_b4 = (int)dVar7 + *(int *)(iVar4 + 0x194);
    uStack_f4 = (double)(*(float *)(iVar4 + 0x1ac) * 0.0) + DAT_11de9968;
    dVar7 = floor(uStack_f4);
    iStack_b0 = (int)dVar7 + *(int *)(iVar4 + 0x198);
    uStack_f4 = (double)(*(float *)(iVar4 + 0x1b0) * 0.0) + DAT_11de9968;
    dVar7 = floor(uStack_f4);
    iStack_d0 = (int)dVar7 + *(int *)(iVar4 + 0x19c);
    uStack_f4 = (double)(*(float *)(iVar4 + 0x1b4) * 0.0) + DAT_11de9968;
    dVar7 = floor(uStack_f4);
    uStack_f4._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
    uStack_f4 = (double)CONCAT44(uStack_f4._4_4_,*(undefined4 *)(iVar4 + 0x160));
    iVar1 = *(int *)(iVar4 + 0x1a0);
    local_e4 = (double)(*(float *)(iVar4 + 0x154) * 0.0) + DAT_11de9968;
    dVar8 = floor(local_e4);
    iVar2 = *(int *)(iVar4 + 0x150);
    local_e4 = (double)(*(float *)(iVar4 + 0x15c) * 0.0) + DAT_11de9968;
    floor(local_e4);
    local_e4 = (double)(*(float *)(iStack_d4 + 0x14c) * 0.0) + DAT_11de9968;
    local_e4 = floor(local_e4);
    FUN_104d1550("attackValue",(int)local_e4 + *(int *)(iStack_d4 + 0x148));
    FUN_104d1550("attackWaterValue",uStack_d8);
    FUN_104d1550("attackFireValue",iStack_b4);
    FUN_104d1550("attackThunderValue",iStack_b0);
    FUN_104d1550("attackDragonValue",iStack_d0);
    FUN_104d1550("attackIceValue",(int)dVar7 + iVar1);
    FUN_104d1550("attackDefendValue",(int)dVar8 + iVar2);
    FUN_104d1550();
    FUN_104d1550("currentSlashValue",(undefined4)uStack_f4);
    piStack_94 = (int *)0x0;
    uStack_90 = 0;
    uStack_f4 = (double)CONCAT71(uStack_f4._1_7_,((byte)local_c8 & 0x8f) == 10);
    cVar3 = (**(code **)(*piStack_cc + 0x10))
                      (local_c4,"passiveSkillLength",&piStack_94,SUB84(uStack_f4,0));
    if (cVar3 != '\0') {
      piStack_7c = (int *)0x0;
      uStack_78 = 0;
      uStack_f4 = (double)CONCAT71(uStack_f4._1_7_,((byte)local_c8 & 0x8f) == 10);
      cVar3 = (**(code **)(*piStack_cc + 0x10))
                        (local_c4,"arrayPassiveSkillData",&piStack_7c,SUB84(uStack_f4,0));
      if (cVar3 != '\0') {
        if (((uStack_90 & 0x8f) == 3) || (uStack_d8 = 0xdeadbeaf, (uStack_90 & 0x8f) == 4)) {
          uStack_d8 = uStack_8c;
        }
        uVar6 = 0;
        puVar5 = *(undefined4 **)(iStack_d4 + 0x21c);
        if (puVar5 != *(undefined4 **)(iStack_d4 + 0x220)) {
          do {
            iStack_d0 = puVar5[1];
            uStack_f4 = (double)CONCAT44(uStack_f4._4_4_,*puVar5);
            if (uStack_d8 <= uVar6) break;
            piStack_ac = (int *)0x0;
            uStack_a8 = 0;
            cVar3 = (**(code **)(*piStack_7c + 0x30))(uStack_74,uVar6,&piStack_ac);
            if (cVar3 != '\0') {
              iVar4 = FUN_1050ebc0();
              if (iVar4 != 0) {
                FUN_104d1550("passiveSkillGroupID");
                FUN_104d1550("passiveSkillValue",iStack_d0);
                puStack_50 = auStack_60;
                puStack_4c = puStack_50;
                FUN_100b62c0();
                FUN_104d1670("passiveSkillName",uStack_54);
                if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0();
                }
              }
            }
            if ((uStack_a8 >> 6 & 1) != 0) {
              (**(code **)(*piStack_ac + 8))();
            }
            puVar5 = puVar5 + 2;
            uVar6 = uVar6 + 1;
          } while (puVar5 != *(undefined4 **)(iStack_d4 + 0x220));
        }
      }
      if ((uStack_78 >> 6 & 1) != 0) {
        (**(code **)(*piStack_7c + 8))(&piStack_7c,uStack_74);
      }
    }
    if ((uStack_90 >> 6 & 1) != 0) {
      (**(code **)(*piStack_94 + 8))(&piStack_94,uStack_8c);
    }
  }
  if ((local_c8 >> 6 & 1) != 0) {
    (**(code **)(*piStack_cc + 8))(&piStack_cc,local_c4);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082e040 @ 1082e040  size=134 ===== */
// calls: CEquipPassiveSkillGroupInfo::GetManagers, CInfoManager::FindByName
// strings:
//   "CEquipPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo"" */

undefined4 FUN_1082e040(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbffc8;
  puVar1 = (undefined4 *)CEquipPassiveSkillGroupInfo__GetManagers();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CEquipPassiveSkillGroupInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123be440 & 1) == 0) {
        DAT_123be440 = DAT_123be440 | 1;
        FUN_1051d130();
        FUN_11a8911f(&LAB_11c6f8c0);
      }
      puVar1 = &DAT_123be444;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1082e0d0 @ 1082e0d0  size=109 ===== */
// calls: CEquipPassiveSkillGroupInfo::GetManagers, CInfoManager::FindByName
// strings:
//   "CEquipPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipPassiveSkillGroupInfo"" */

void FUN_1082e0d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbffc8;
  puVar1 = (undefined4 *)CEquipPassiveSkillGroupInfo__GetManagers();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CEquipPassiveSkillGroupInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123be440 & 1) == 0) {
        DAT_123be440 = DAT_123be440 | 1;
        FUN_1051d130();
        FUN_11a8911f(&LAB_11c6f8c0);
      }
      piVar2 = &DAT_123be444;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_1082e430 @ 1082e430  size=231 ===== */
// strings:
//   "_getEquipSkillListData"
//   "_getEquipSkillDetailInfo"
//   "_getAllEquipSkillDetailInfo"
//   "_getOtherEquipSkillListData"
//   "_getEquipSkillCellDescData"

/* [RE-AUTO c0]
   strings:
     ""_getEquipSkillListData""
     ""_getEquipSkillDetailInfo""
     ""_getAllEquipSkillDetailInfo""
     ""_getOtherEquipSkillListData""
     ""_getEquipSkillCellDescData"" */

void FUN_1082e430(void)

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
    FUN_104d13b0("_getEquipSkillListData",FUN_1082e540);
    FUN_104d13b0("_getEquipSkillDetailInfo",FUN_1082fa70);
    FUN_104d13b0("_getAllEquipSkillDetailInfo",FUN_1082f3d0);
    FUN_104d13b0("_getOtherEquipSkillListData",FUN_1082f040);
    FUN_104d13b0("_getEquipSkillCellDescData",FUN_1082ffc0);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_1082e540 @ 1082e540  size=2439 ===== */
// calls: CSuitCfgInfo::GetSuitBySlot
// strings:
//   "EQUIPSKILL_CELLVO_CLASSNAME"
//   "typeName"
//   "param1"
//   "param1Extra"
//   "param2"
//   "param2Extra"
//   "param3"
//   "param3Extra"
//   "param4"
//   "param4Extra"
//   "param5"
//   "param5Extra"
//   "param6"
//   "param6Extra"
//   "param7"
//   "param7Extra"
//   "param8"
//   "param8Extra"
//   "param9"
//   "param9Extra"

/* [RE-AUTO c0]
   strings:
     ""EQUIPSKILL_CELLVO_CLASSNAME""
     ""typeName""
     ""param1""
     ""param1Extra""
     ""param2""
     ""param2Extra""
     ""param3""
     ""param3Extra""
     ""param4""
     ""param4Extra"" */

void FUN_1082e540(undefined4 ***param_1,int param_2,int param_3,undefined4 **param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 **ppuVar6;
  undefined4 ***extraout_ECX;
  undefined4 ***pppuVar7;
  undefined4 ***extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 **ppuVar8;
  uint uVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  undefined4 uStack_174;
  undefined4 ***pppuStack_170;
  undefined4 *puStack_16c;
  undefined4 *puStack_168;
  undefined4 **ppuStack_164;
  undefined4 ***pppuStack_160;
  undefined4 *puStack_15c;
  undefined4 ***pppuStack_158;
  undefined4 **ppuStack_154;
  undefined1 auStack_148 [8];
  int *piStack_140;
  uint uStack_13c;
  undefined4 *puStack_138;
  undefined4 ***pppuStack_134;
  undefined4 **local_130;
  undefined4 **ppuStack_12c;
  undefined4 **ppuStack_128;
  int *piStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  int iStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 **ppuStack_e8;
  uint uStack_e4;
  undefined4 **ppuStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d4;
  undefined4 **ppuStack_d0;
  uint uStack_cc;
  undefined4 **ppuStack_c8;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined4 ***local_b4;
  undefined8 uStack_b0;
  undefined4 **ppuStack_a8;
  undefined4 **ppuStack_a4;
  undefined4 **appuStack_a0 [6];
  undefined4 uStack_88;
  int iStack_7c;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)auStack_148;
  local_b4 = param_1;
  local_130 = param_4;
  if ((((param_1 != (undefined4 ***)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (undefined4 **)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppuStack_154 = param_1[2];
      pppuStack_158 = param_1;
      puStack_15c = (undefined4 *)0x1082e5b1;
      (*(code *)(**param_1)[2])();
      *param_1 = (undefined4 **)0x0;
    }
    iVar5 = DAT_1202e818;
    param_1[1] = (undefined4 **)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppuStack_154 = (undefined4 **)0x1082e5dd;
    iVar5 = (**(code **)(**(int **)(*(int *)(iVar5 + 0xd0) + 0x90) + 0xb4))();
    iStack_108 = iVar5;
    if (iVar5 != 0) {
      ppuStack_154 = local_130;
      pppuStack_158 = (undefined4 ***)0x1082e5fb;
      FUN_104f4330();
      puStack_15c = &uStack_d4;
      uStack_d4 = 0;
      ppuStack_d0 = (undefined4 **)0x0;
      pppuStack_134 = (undefined4 ***)CONCAT31(pppuStack_134._1_3_,((byte)ppuStack_a8 & 0x8f) == 10)
      ;
      uStack_100 = 0;
      pppuStack_158 = pppuStack_134;
      pppuStack_160 = (undefined4 ***)0x11dcd68c;
      ppuStack_164 = ppuStack_a4;
      puStack_168 = (undefined4 *)0x1082e652;
      cVar3 = (**(code **)((int)*uStack_b0._4_4_ + 0x10))();
      if (((cVar3 != '\0') && (((byte)ppuStack_e0 & 0x8f) == 6)) &&
         (puStack_110 = puStack_dc, ((uint)ppuStack_e0 >> 6 & 1) != 0)) {
        puStack_110 = (undefined4 *)*puStack_dc;
      }
      puStack_168 = &uStack_fc;
      uStack_fc = 0;
      uStack_f8 = 0;
      puStack_16c = (undefined4 *)0x1082e699;
      FUN_11a98a70();
      ppuVar8 = *(undefined4 ***)(*(int *)(iVar5 + 0x2d20) + 0x3c);
      ppuStack_c8 = (undefined4 **)(*(int *)(iVar5 + 0x2d20) + 0x34);
      if (ppuVar8 != ppuStack_c8) {
        do {
          puStack_16c = ppuVar8[4];
          pppuStack_170 = (undefined4 ***)0x1082e6bc;
          iStack_118 = FUN_1050ebc0();
          if (iStack_118 != 0) {
            puStack_16c = (undefined4 *)0x0;
            pppuStack_170 = (undefined4 ***)0x0;
            uStack_174 = (char *)uStack_114;
            ppiVar11 = &piStack_140;
            piStack_140 = (int *)0x0;
            uStack_13c = 0;
            FUN_11a98de0();
            ppuStack_154 = (undefined4 **)ppuStack_128[4];
            FUN_104d1550(&DAT_11dbb0b4,ppuStack_154);
            ppuStack_a8 = &puStack_b8;
            puVar10 = ppuStack_128[9];
            ppuStack_a4 = ppuStack_a8;
            FUN_100b62c0(ppuStack_128[10]);
            FUN_104d1670("typeName",uStack_b0._4_4_);
            if ((uStack_b0._4_4_ != &piStack_c0) && (uStack_b0._4_4_ != (int **)0x0)) {
              FUN_10c3d5d0(uStack_b0._4_4_);
            }
            pppuStack_170 = (undefined4 ***)0x0;
            puStack_16c = (undefined4 *)0x0;
            puStack_168 = (undefined4 *)0x0;
            ppuStack_164 = (undefined4 **)0x0;
            uStack_174._0_3_ = (uint3)(ushort)uStack_174;
            FUN_108304f0(0,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param1",pppuStack_170);
            FUN_104d1550("param1Extra",puStack_16c);
            FUN_108304f0(1,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param2",pppuStack_170);
            FUN_104d1550("param2Extra",puStack_16c);
            FUN_108304f0(3,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param3",pppuStack_170);
            FUN_104d1550("param3Extra",puStack_16c);
            FUN_108304f0(2,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param4",pppuStack_170);
            FUN_104d1550("param4Extra",puStack_16c);
            FUN_108304f0(4,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param5",pppuStack_170);
            FUN_104d1550("param5Extra",puStack_16c);
            FUN_108304f0(5,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param6",pppuStack_170);
            FUN_104d1550("param6Extra",puStack_16c);
            FUN_10830580(&puStack_16c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param7",pppuStack_170);
            FUN_104d1550("param7Extra",puStack_16c);
            FUN_108304f0(9,puStack_15c,&puStack_168,&ppuStack_164,(int)&uStack_174 + 2);
            FUN_104d1550("param8",pppuStack_170);
            FUN_104d1550("param8Extra",puStack_16c);
            pppuVar7 = (undefined4 ***)0x0;
            if ((puStack_138[0xb48] != 0) &&
               (piStack_11c = (int *)CSuitCfgInfo__GetSuitBySlot(9), pppuVar7 = extraout_ECX,
               piStack_11c != (int *)0x0)) {
              pppuStack_160 = (undefined4 ***)piStack_11c[0x6f];
              pppuStack_134 = (undefined4 ***)0x0;
              pppuVar7 = (undefined4 ***)(piStack_11c[0x70] - (int)pppuStack_160);
              if ((int)pppuVar7 / 0x1c + ((int)pppuVar7 >> 0x1f) != (int)pppuVar7 >> 0x1f) {
                uStack_13c = 0;
                do {
                  puVar1 = (undefined4 *)(uStack_13c + (int)pppuStack_160);
                  piStack_c0 = (int *)*puVar1;
                  uStack_bc = puVar1[1];
                  puStack_b8 = (undefined4 *)puVar1[2];
                  local_b4 = (undefined4 ***)puVar1[3];
                  uStack_b0 = *(undefined8 *)(uStack_13c + 0x10 + (int)pppuStack_160);
                  ppuStack_a8 = *(undefined4 ***)(uStack_13c + 0x18 + (int)pppuStack_160);
                  if ((puStack_b8 == puStack_15c) &&
                     (cVar3 = FUN_11465310(piStack_11c,&piStack_c0), cVar3 != '\0')) {
                    pppuStack_160 = local_b4;
                    pppuStack_170 = local_b4;
                    puStack_16c = (undefined4 *)0x0;
                    FUN_104d1550("param8",local_b4);
                    FUN_104d1550("param8Extra",0);
                    if (pppuStack_160 != (undefined4 ***)0x0) {
                      puStack_168 = (undefined4 *)((int)puStack_168 + (int)pppuStack_160);
                      uStack_174._0_3_ = CONCAT12(1,(ushort)uStack_174);
                      pppuVar7 = extraout_ECX_00;
                      break;
                    }
                  }
                  uStack_13c = uStack_13c + 0x1c;
                  pppuVar7 = (undefined4 ***)((int)pppuStack_134 + 1);
                  pppuStack_160 = (undefined4 ***)piStack_11c[0x6f];
                  pppuStack_134 = pppuVar7;
                } while (pppuVar7 <
                         (undefined4 ***)((piStack_11c[0x70] - (int)pppuStack_160) / 0x1c));
              }
            }
            FUN_108306b0(&puStack_16c,&puStack_168,pppuVar7,(int)&uStack_174 + 2);
            FUN_104d1550("param9",pppuStack_170);
            FUN_104d1550("param9Extra",puStack_16c);
            FUN_104d1550("total",puStack_168);
            FUN_104d1550("toralExtra",ppuStack_164);
            uStack_174 = (char *)((uint)uStack_174 & 0xffffff);
            FUN_108308c0(local_130 + 0xc);
            FUN_10831590(extraout_ECX_01);
            ppuStack_164 = ppuStack_12c;
            if (ppuStack_12c == ppuStack_128) {
LAB_1082ecf4:
              FUN_104d1670("skillExplain",&DAT_11d9d32b);
            }
            else {
              do {
                FUN_1082eed0(ppuStack_164);
                iVar5 = (int)puStack_16c + (int)pppuStack_170;
                if (iVar5 < 1) {
                  if (((-1 < iVar5) || (-1 < iStack_7c)) || (iStack_7c < iVar5)) goto LAB_1082ec5c;
LAB_1082ec2a:
                  puVar10 = (undefined4 *)0x1000000;
                  FUN_104d1670("skillExplain",uStack_88);
LAB_1082ec63:
                  if (piStack_140[0xb48] == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar4 = FUN_11463b10(appuStack_a0);
                    uStack_e4 = CONCAT31(uStack_e4._1_3_,uVar4);
                    uVar9 = uStack_e4;
                  }
                  FUN_104d15e0("bCanBeLighten",uVar9);
                  if (((0 < (int)puStack_16c + (int)pppuStack_170) && (0 < iStack_7c)) &&
                     (iStack_7c <= (int)puStack_16c + (int)pppuStack_170)) {
                    FUN_1082efd0();
                    break;
                  }
                }
                else {
                  if ((0 < iStack_7c) && (iStack_7c <= iVar5)) goto LAB_1082ec2a;
LAB_1082ec5c:
                  if ((char)((uint)puVar10 >> 0x18) != '\0') goto LAB_1082ec63;
                }
                FUN_1082efd0();
                ppuStack_164 = ppuStack_164 + 0x14;
              } while (ppuStack_164 != ppuStack_128);
              if ((char)((uint)ppiVar11 >> 0x18) == '\0') goto LAB_1082ecf4;
            }
            if ((char)((uint)ppiVar11 >> 0x10) != '\0') {
              (**(code **)(*piStack_11c + 0x3c))(uStack_114,&puStack_15c);
            }
            FUN_10831f50(ppuStack_128,ppuStack_12c,0,&stack0xfffffe8b);
            if (puStack_110 != (undefined4 *)0x0) {
              puStack_16c = puStack_110;
              pppuStack_170 = (undefined4 ***)0x1082ed54;
              FUN_10c3d5d0();
            }
            if ((uStack_13c >> 6 & 1) != 0) {
              pppuStack_170 = (undefined4 ***)&piStack_140;
              puStack_16c = puStack_138;
              uStack_174 = (char *)0x1082ed74;
              (**(code **)(*piStack_140 + 8))();
            }
          }
          ppuVar6 = (undefined4 **)ppuVar8[3];
          if (ppuVar6 == (undefined4 **)0x0) {
            ppuVar6 = (undefined4 **)ppuVar8[1];
            if (ppuVar8 == (undefined4 **)ppuVar6[3]) {
              do {
                ppuVar8 = ppuVar6;
                ppuVar6 = (undefined4 **)ppuVar8[1];
              } while (ppuVar8 == (undefined4 **)ppuVar6[3]);
            }
            if ((undefined4 **)ppuVar8[3] != ppuVar6) {
              ppuVar8 = ppuVar6;
            }
          }
          else {
            for (ppuVar2 = (undefined4 **)ppuVar6[2]; ppuVar8 = ppuVar6,
                ppuVar2 != (undefined4 **)0x0; ppuVar2 = (undefined4 **)ppuVar2[2]) {
              ppuVar6 = ppuVar2;
            }
          }
        } while (ppuVar8 != ppuStack_c8);
      }
      puStack_16c = (undefined4 *)(uint)(((byte)uStack_bc & 0x8f) == 10);
      pppuStack_170 = (undefined4 ***)&uStack_100;
      uStack_174 = "equipSkillArr";
      (**(code **)(*piStack_c0 + 0x14))(puStack_b8);
      pppuVar7 = local_b4;
      if (((uint)local_b4[1] >> 6 & 1) != 0) {
        ppuStack_154 = local_b4[2];
        pppuStack_158 = local_b4;
        puStack_15c = (undefined4 *)0x1082ee0d;
        (*(code *)(**local_b4)[2])();
        *pppuVar7 = (undefined4 **)0x0;
      }
      pppuVar7[1] = (undefined4 **)0x2;
      *(undefined1 *)(pppuVar7 + 2) = 1;
      if ((uStack_e4 >> 6 & 1) != 0) {
        pppuStack_158 = &ppuStack_e8;
        ppuStack_154 = ppuStack_e0;
        puStack_15c = (undefined4 *)0x1082ee3b;
        (*(code *)(*ppuStack_e8)[2])();
        ppuStack_e8 = (undefined4 **)0x0;
      }
      uStack_e4 = 0;
      if ((uStack_cc >> 6 & 1) != 0) {
        pppuStack_158 = &ppuStack_d0;
        ppuStack_154 = ppuStack_c8;
        puStack_15c = (undefined4 *)0x1082ee74;
        (*(code *)(*ppuStack_d0)[2])();
        ppuStack_d0 = (undefined4 **)0x0;
      }
      uStack_cc = 0;
      if (((uint)ppuStack_a4 >> 6 & 1) != 0) {
        pppuStack_158 = &ppuStack_a8;
        ppuStack_154 = appuStack_a0[0];
        puStack_15c = (undefined4 *)0x1082eeb3;
        (*(code *)(*ppuStack_a8)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082f040 @ 1082f040  size=908 ===== */
// strings:
//   "EQUIPSKILL_CELL_DESC_CLASS_NAME"
//   "needPoint"
//   "skillName"
//   "skillEffect"
//   "bCanBeLighten"
//   "skillType"
//   "otherEquipSkillArr"

/* WARNING: Removing unreachable block (ram,0x1082f2c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   strings:
     ""EQUIPSKILL_CELL_DESC_CLASS_NAME""
     ""needPoint""
     ""skillName""
     ""skillEffect""
     ""bCanBeLighten""
     ""skillType""
     ""otherEquipSkillArr"" */

void FUN_1082f040(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  int *piStack_c0;
  char *pcStack_bc;
  int **ppiStack_b8;
  int *piStack_b4;
  undefined1 auStack_a4 [4];
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int **ppiStack_90;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  int **local_7c;
  int *piStack_78;
  uint uStack_74;
  int *piStack_70;
  undefined4 uStack_64;
  int *piStack_60;
  uint uStack_5c;
  int *piStack_58;
  int *piStack_54;
  byte bStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int local_44;
  int *local_40;
  uint uStack_3c;
  int *piStack_38;
  int *piStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_a4;
  local_7c = param_1;
  local_44 = param_2;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_b4 = param_1[2];
      ppiStack_b8 = param_1;
      pcStack_bc = (char *)0x1082f0af;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    piStack_b4 = param_4;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppiStack_b8 = (int **)0x1082f0ca;
    FUN_104f4330();
    ppiStack_b8 = (int **)0x1082f0e3;
    piVar1 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if (piVar1 != (int *)0x0) {
      ppiStack_b8 = &piStack_60;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      piStack_a0 = (int *)CONCAT31(piStack_a0._1_3_,((byte)uStack_3c & 0x8f) == 10);
      uStack_9c = 0;
      piStack_b4 = piStack_a0;
      pcStack_bc = "EQUIPSKILL_CELL_DESC_CLASS_NAME";
      piStack_c0 = piStack_38;
      (**(code **)(*local_40 + 0x10))();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x56c))();
      uStack_88 = 0;
      uStack_84 = 0;
      piStack_58 = piVar1;
      FUN_11a98a70();
      iVar2 = 0;
      if (0 < piVar1[0x5ed]) {
        piVar1 = piVar1 + 0x5ee;
        do {
          piStack_b4 = (int *)FUN_11522920(*piVar1,piVar1[0x80]);
          if (piStack_b4 != (int *)0x0) {
            FUN_11a98de0(&stack0xffffff54,unaff_EDI,0,0);
            FUN_104d1550("needPoint",uStack_64);
            FUN_104d1670("skillName",piStack_70);
            piStack_38 = (int *)auStack_48;
            auStack_48[0] = 0;
            piStack_34 = piStack_38;
            FUN_100e5aa0(piStack_38);
            FUN_104d1670("skillEffect",piStack_38);
            if ((piStack_38 != &iStack_4c) && (piStack_38 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_38);
            }
            FUN_104d15e0("bCanBeLighten",0 < piVar1[0x100]);
            FUN_104d1550("skillType",0);
            (**(code **)(*piStack_a0 + 0x3c))(uStack_98,&piStack_c0);
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 1;
          param_1 = ppiStack_90;
        } while (iVar2 < *(int *)(uStack_5c + 0x17b4));
      }
      (**(code **)(*piStack_54 + 0x14))
                (iStack_4c,"otherEquipSkillArr",auStack_8c,(bStack_50 & 0x8f) == 10);
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        piStack_b4 = param_1[2];
        pcStack_bc = (char *)0x1082f32f;
        ppiStack_b8 = param_1;
        (**(code **)(**param_1 + 8))();
        *param_1 = (int *)0x0;
      }
      param_1[1] = (int *)0x2;
      *(undefined1 *)(param_1 + 2) = 1;
      if ((uStack_74 >> 6 & 1) != 0) {
        ppiStack_b8 = &piStack_78;
        piStack_b4 = piStack_70;
        pcStack_bc = (char *)0x1082f35d;
        (**(code **)(*piStack_78 + 8))();
        piStack_78 = (int *)0x0;
      }
      uStack_74 = 0;
      if ((uStack_5c >> 6 & 1) != 0) {
        ppiStack_b8 = &piStack_60;
        piStack_b4 = piStack_58;
        pcStack_bc = (char *)0x1082f38a;
        (**(code **)(*piStack_60 + 8))();
        piStack_60 = (int *)0x0;
      }
      uStack_5c = 0;
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      ppiStack_b8 = &local_40;
      piStack_b4 = piStack_38;
      pcStack_bc = (char *)0x1082f3b7;
      (**(code **)(*local_40 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082f3d0 @ 1082f3d0  size=1676 ===== */
// strings:
//   "EQUIPSKILL_DETAILCELL_CLASS_NAME"
//   "totalPoint"
//   "needPoint"
//   "skillName"
//   "skillEffect"
//   "groupID"
//   "bCanBeLighten"
//   "allSkillDetailList"

/* [RE-AUTO c0]
   strings:
     ""EQUIPSKILL_DETAILCELL_CLASS_NAME""
     ""totalPoint""
     ""needPoint""
     ""skillName""
     ""skillEffect""
     ""groupID""
     ""bCanBeLighten""
     ""allSkillDetailList"" */

void FUN_1082f3d0(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_1c8;
  int *piStack_1c4;
  char *pcStack_1c0;
  undefined4 *puStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 **ppuStack_1ac;
  int *piStack_1a8;
  char *pcStack_1a4;
  int **ppiStack_1a0;
  int **ppiStack_19c;
  int *piStack_198;
  int **ppiStack_194;
  int *piStack_190;
  int *piStack_18c;
  int **ppiStack_188;
  int *piStack_184;
  int *piStack_174;
  uint uStack_170;
  int *piStack_16c;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  undefined4 uStack_158;
  int *piStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *piStack_148;
  uint uStack_144;
  int *piStack_140;
  undefined4 uStack_12c;
  int **ppiStack_11c;
  int iStack_10c;
  int **local_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  undefined4 uStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  undefined1 *puStack_c4;
  undefined1 *apuStack_c0 [7];
  undefined4 uStack_a4;
  undefined4 uStack_98;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_174;
  local_104 = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_184 = param_1[2];
      ppiStack_188 = param_1;
      piStack_18c = (int *)0x1082f43b;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_184 = (int *)0x1082f465;
    iStack_10c = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if (iStack_10c != 0) {
      piStack_184 = param_4;
      ppiStack_188 = (int **)0x1082f47e;
      FUN_104f4330();
      ppiStack_188 = (int **)(param_4 + 6);
      piStack_18c = (int *)0x1082f48b;
      FUN_104f4330();
      if (((byte)uStack_144 & 0x8f) == 9) {
        piStack_184 = piStack_140;
        ppiStack_188 = (int **)0x1082f4a9;
        iVar3 = (**(code **)(*piStack_148 + 0x28))();
        if (iVar3 != 0) {
          ppiStack_188 = &piStack_100;
          piStack_100 = (int *)0x0;
          piStack_fc = (int *)0x0;
          piStack_174 = (int *)CONCAT31(piStack_174._1_3_,((byte)piStack_cc & 0x8f) == 10);
          uStack_170 = 0;
          piStack_184 = piStack_174;
          piStack_18c = (int *)0x11dcd878;
          piStack_190 = piStack_c8;
          ppiStack_194 = (int **)0x1082f508;
          (**(code **)(*piStack_d0 + 0x10))();
          ppiStack_194 = &piStack_f8;
          piStack_f8 = (int *)0x0;
          piStack_f4 = (int *)0x0;
          piStack_198 = (int *)0x1082f558;
          FUN_11a98a70();
          puVar6 = (undefined1 *)0x0;
          piStack_198 = piStack_154;
          ppiStack_19c = (int **)0x1082f56b;
          iVar3 = (**(code **)(*piStack_15c + 0x28))();
          if (iVar3 != 0) {
            do {
              ppiStack_19c = &piStack_148;
              piStack_148 = (int *)0x0;
              uStack_144 = 0;
              pcStack_1a4 = (char *)uStack_158;
              piStack_1a8 = (int *)0x1082f596;
              ppiStack_1a0 = (int **)puVar6;
              (**(code **)(*piStack_160 + 0x30))();
              ppuStack_1ac = &puStack_c4;
              puStack_c4 = (undefined1 *)0x0;
              apuStack_c0[0] = (undefined1 *)0x0;
              uStack_12c = CONCAT31(uStack_12c._1_3_,((byte)uStack_150 & 0x8f) == 10);
              piStack_1a8 = (int *)uStack_12c;
              uStack_1b0 = &DAT_11dbb0b4;
              uStack_1b4 = uStack_14c;
              uStack_1b8 = 0x1082f5da;
              (**(code **)(*piStack_154 + 0x10))();
              if ((((uint)piStack_d0 & 0x8f) == 3) ||
                 (piVar5 = (int *)0xdeadbeaf, ((uint)piStack_d0 & 0x8f) == 4)) {
                piVar5 = piStack_cc;
              }
              puStack_1bc = &uStack_ec;
              uStack_ec = 0;
              piStack_e8 = (int *)0x0;
              uStack_144 = CONCAT31(uStack_144._1_3_,((byte)piStack_160 & 0x8f) == 10);
              uStack_1b8 = uStack_144;
              pcStack_1c0 = "totalPoint";
              piStack_1c4 = piStack_15c;
              piStack_1c8 = (int *)0x1082f644;
              piStack_1a8 = piVar5;
              (**(code **)(*piStack_164 + 0x10))();
              if ((((uint)piStack_f8 & 0x8f) == 3) || (((uint)piStack_f8 & 0x8f) == 4)) {
                piStack_1a8 = piStack_f4;
              }
              else {
                piStack_1a8 = (int *)0xdeadbeaf;
              }
              piStack_1c8 = piVar5;
              iVar3 = FUN_1050ebc0();
              if (iVar3 != 0) {
                piStack_1c8 = (int *)(iVar3 + 0x30);
                FUN_108308c0();
                piVar1 = piStack_c8;
                piVar7 = piStack_cc;
                for (piVar5 = piStack_cc; piStack_cc = piVar7, piVar5 != piVar1;
                    piVar5 = piVar5 + 0x14) {
                  FUN_1082eed0(piVar5);
                  uVar8 = 0;
                  ppuStack_1ac = (undefined1 **)0x0;
                  piStack_1a8 = (int *)0x0;
                  FUN_11a98de0(&ppuStack_1ac,puStack_1bc,0,0);
                  FUN_104d1550("totalPoint",pcStack_1c0);
                  FUN_104d1550("needPoint",uStack_98);
                  FUN_104d1670("skillName",uStack_a4);
                  auStack_d4[0] = 0;
                  puStack_c4 = auStack_d4;
                  apuStack_c0[0] = puStack_c4;
                  FUN_100e5aa0(puStack_c4);
                  FUN_104d1670("skillEffect",puStack_c4);
                  if ((puStack_c4 != auStack_d8) && (puStack_c4 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_c4);
                  }
                  FUN_104d1550("groupID",uVar8);
                  if (piStack_16c[0xb48] == 0) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    uVar2 = FUN_11463b10(apuStack_c0);
                    piStack_174 = (int *)CONCAT31(piStack_174._1_3_,uVar2);
                    piVar7 = piStack_174;
                  }
                  FUN_104d15e0("bCanBeLighten",piVar7);
                  (**(code **)(*piStack_148 + 0x3c))(piStack_140,&pcStack_1c0);
                  if (((uint)piStack_1c4 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_1c8 + 8))(&piStack_1c8,pcStack_1c0);
                    piStack_1c8 = (int *)0x0;
                  }
                  piStack_1c4 = (int *)0x0;
                  FUN_1082efd0();
                  piVar7 = piStack_cc;
                }
                FUN_10831f50(piVar1,piVar7,0,(int)&uStack_1b0 + 3);
                puVar6 = uStack_1b0;
                if (piVar7 != (int *)0x0) {
                  FUN_10c3d5d0();
                  puVar6 = uStack_1b0;
                }
              }
              if (((uint)piStack_f8 >> 6 & 1) != 0) {
                piStack_1c8 = piStack_f4;
                (**(code **)(*piStack_fc + 8))(&piStack_fc);
                piStack_fc = (int *)0x0;
              }
              piStack_f8 = (int *)0x0;
              if (((uint)piStack_e0 >> 6 & 1) != 0) {
                piStack_1c8 = piStack_dc;
                (**(code **)(*piStack_e4 + 8))(&piStack_e4);
                piStack_e4 = (int *)0x0;
              }
              piStack_e0 = (int *)0x0;
              if ((uStack_170 >> 6 & 1) != 0) {
                piStack_1c8 = piStack_16c;
                (**(code **)(*piStack_174 + 8))(&piStack_174);
              }
              puVar6 = puVar6 + 1;
              piStack_1c8 = piStack_184;
              uStack_1b0 = puVar6;
              puVar4 = (undefined1 *)(**(code **)(*piStack_18c + 0x28))();
              param_1 = ppiStack_11c;
            } while (puVar6 < puVar4);
          }
          ppiStack_19c = (int **)(uint)(((byte)piStack_e4 & 0x8f) == 10);
          ppiStack_1a0 = &piStack_100;
          pcStack_1a4 = "allSkillDetailList";
          piStack_1a8 = piStack_e0;
          ppuStack_1ac = (undefined1 **)0x1082f955;
          (**(code **)(*piStack_e8 + 0x14))();
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            piStack_184 = param_1[2];
            piStack_18c = (int *)0x1082f96a;
            ppiStack_188 = param_1;
            (**(code **)(**param_1 + 8))();
            *param_1 = (int *)0x0;
          }
          param_1[1] = (int *)0x2;
          *(undefined1 *)(param_1 + 2) = 1;
          if (((uint)piStack_e4 >> 6 & 1) != 0) {
            ppiStack_188 = &piStack_e8;
            piStack_184 = piStack_e0;
            piStack_18c = (int *)0x1082f9a4;
            (**(code **)(*piStack_e8 + 8))();
            piStack_e8 = (int *)0x0;
          }
          piStack_e4 = (int *)0x0;
          if (((uint)piStack_fc >> 6 & 1) != 0) {
            ppiStack_188 = &piStack_100;
            piStack_184 = piStack_f8;
            piStack_18c = (int *)0x1082f9e3;
            (**(code **)(*piStack_100 + 8))();
            piStack_100 = (int *)0x0;
          }
          piStack_fc = (int *)0x0;
        }
      }
      if ((uStack_144 >> 6 & 1) != 0) {
        ppiStack_188 = &piStack_148;
        piStack_184 = piStack_140;
        piStack_18c = (int *)0x1082fa16;
        (**(code **)(*piStack_148 + 8))();
        piStack_148 = (int *)0x0;
      }
      uStack_144 = 0;
      if (((uint)piStack_cc >> 6 & 1) != 0) {
        ppiStack_188 = &piStack_d0;
        piStack_184 = piStack_c8;
        piStack_18c = (int *)0x1082fa4f;
        (**(code **)(*piStack_d0 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1082fa70 @ 1082fa70  size=1340 ===== */
// strings:
//   "EQUIPSKILL_DETAIL_CLASS_NAME"
//   "EQUIPSKILL_DETAILCELL_CLASS_NAME"
//   "explain"
//   "needPoint"
//   "skillName"
//   "skillEffect"
//   "dataArr"
//   "equipSkillDetailInfo"

/* WARNING: Removing unreachable block (ram,0x1082fdf8) */
/* [RE-AUTO c0]
   strings:
     ""EQUIPSKILL_DETAIL_CLASS_NAME""
     ""EQUIPSKILL_DETAILCELL_CLASS_NAME""
     ""explain""
     ""needPoint""
     ""skillName""
     ""skillEffect""
     ""dataArr""
     ""equipSkillDetailInfo"" */

void FUN_1082fa70(int **param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piStack_134;
  int **ppiStack_130;
  int *piStack_12c;
  undefined4 uVar11;
  int *piStack_11c;
  uint uStack_118;
  undefined4 *puStack_114;
  undefined4 uStack_110;
  int local_10c;
  int *piStack_108;
  uint uStack_104;
  int *piStack_100;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_dc;
  int *local_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int **ppiStack_c0;
  int **ppiStack_bc;
  undefined1 auStack_b4 [8];
  int aiStack_ac [3];
  undefined1 *puStack_a0;
  int *piStack_9c;
  int *piStack_98;
  uint uStack_94;
  int *piStack_90;
  int **local_7c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_11c;
  local_7c = param_1;
  local_10c = param_2;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_12c = param_1[2];
      ppiStack_130 = param_1;
      piStack_134 = (int *)0x1082fae2;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    piStack_12c = (int *)param_4;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppiStack_130 = (int **)0x1082fafd;
    FUN_104f4330();
    uVar4 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar4 == 3) || (uVar4 == 4)) {
      puStack_114 = *(undefined4 **)(param_4 + 0x20);
    }
    else {
      puStack_114 = (undefined4 *)0xdeadbeaf;
    }
    piStack_134 = &local_10c;
    local_10c = 0;
    piStack_108 = (int *)0x0;
    uVar11 = CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)local_d8 & 0x8f) == 10);
    ppiStack_130 = (int **)uVar11;
    cVar3 = (**(code **)(*piStack_dc + 0x10))();
    puVar7 = (undefined4 *)0x0;
    if (((cVar3 != '\0') && (((byte)uStack_118 & 0x8f) == 6)) &&
       (puVar7 = puStack_114, (uStack_118 >> 6 & 1) != 0)) {
      puVar7 = (undefined4 *)*puStack_114;
    }
    ppiStack_130 = (int **)0x0;
    piStack_12c = (int *)CONCAT31(piStack_12c._1_3_,((byte)piStack_e8 & 0x8f) == 10);
    (**(code **)(*piStack_ec + 0x10))();
    puStack_114 = (undefined4 *)0x0;
    uStack_110 = 0;
    FUN_11a98de0(&puStack_114,puVar7);
    uStack_cc = 0;
    uStack_c8 = 0;
    iVar5 = FUN_1082e0d0();
    iVar8 = 0;
    if (0 < iVar5) {
LAB_1082fc30:
      iVar6 = FUN_1082e040(iVar8);
      if ((iVar6 == 0) || (*(int ***)(iVar6 + 0x10) != &piStack_11c)) goto LAB_1082fc48;
      piStack_9c = aiStack_ac;
      uVar10 = *(undefined4 *)(iVar6 + 0x28);
      piStack_98 = piStack_9c;
      FUN_100b62c0(uVar10,*(undefined4 *)(iVar6 + 0x24));
      FUN_104d1670(&DAT_11dbac80,puStack_a0);
      if ((puStack_a0 != auStack_b4) && (puStack_a0 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_a0);
      }
      FUN_104d1670("explain",&DAT_11d9d32b);
      FUN_11a98a70(&piStack_d4);
      FUN_108308c0(iVar6 + 0x30);
      piVar2 = piStack_e4;
      piVar1 = piStack_e8;
      for (piVar9 = piStack_e8; piStack_e8 = piVar1, piVar9 != piVar2; piVar9 = piVar9 + 0x14) {
        FUN_1082eed0(piVar9);
        piStack_108 = (int *)0x0;
        uStack_104 = 0;
        FUN_11a98de0(&piStack_108,uVar10,0,0);
        FUN_104d1550("needPoint",uStack_94);
        FUN_104d1670("skillName",puStack_a0);
        piStack_d0 = (int *)((uint)piStack_d0 & 0xffffff00);
        ppiStack_c0 = &piStack_d0;
        ppiStack_bc = ppiStack_c0;
        FUN_100e5aa0(ppiStack_c0);
        FUN_104d1670("skillEffect",ppiStack_c0);
        if ((ppiStack_c0 != &piStack_d4) && (ppiStack_c0 != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_c0);
        }
        (**(code **)(*piStack_f4 + 0x3c))(piStack_ec,&piStack_11c);
        uVar11 = 0;
        FUN_1082efd0();
        piVar1 = piStack_e8;
        param_1 = ppiStack_c0;
      }
      FUN_10831f50(piStack_e4,piVar1,0,&stack0xfffffeab);
      if (piVar1 != (int *)0x0) {
        FUN_10c3d5d0(piVar1);
      }
    }
LAB_1082fe6c:
    (**(code **)(*unaff_ESI + 0x14))(piStack_11c,"dataArr",&uStack_cc,(char)uVar11 == '\n');
    (**(code **)(*piStack_11c + 0x14))
              (puStack_114,"equipSkillDetailInfo",&piStack_134,((byte)uStack_118 & 0x8f) == 10);
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_12c = param_1[2];
      piStack_134 = (int *)0x1082fed6;
      ppiStack_130 = param_1;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 1;
    if ((uStack_94 >> 6 & 1) != 0) {
      ppiStack_130 = &piStack_98;
      piStack_12c = piStack_90;
      piStack_134 = (int *)0x1082ff10;
      (**(code **)(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    uStack_94 = 0;
    if (((uint)piStack_ec >> 6 & 1) != 0) {
      ppiStack_130 = &piStack_f0;
      piStack_12c = piStack_e8;
      piStack_134 = (int *)0x1082ff43;
      (**(code **)(*piStack_f0 + 8))();
      piStack_f0 = (int *)0x0;
    }
    piStack_ec = (int *)0x0;
    if ((uStack_104 >> 6 & 1) != 0) {
      ppiStack_130 = &piStack_108;
      piStack_12c = piStack_100;
      piStack_134 = (int *)0x1082ff70;
      (**(code **)(*piStack_108 + 8))();
      piStack_108 = (int *)0x0;
    }
    uStack_104 = 0;
    if (((uint)piStack_d4 >> 6 & 1) != 0) {
      ppiStack_130 = &local_d8;
      piStack_12c = piStack_d0;
      piStack_134 = (int *)0x1082ff9d;
      (**(code **)(*local_d8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
LAB_1082fc48:
  iVar8 = iVar8 + 1;
  if (iVar5 <= iVar8) goto LAB_1082fe6c;
  goto LAB_1082fc30;
}



/* ===== FUN_1082ffc0 @ 1082ffc0  size=1323 ===== */
// strings:
//   "EQUIPSKILL_CELL_DESC_CLASS_NAME"
//   "totalPoint"
//   "needPoint"
//   "skillName"
//   "skillEffect"
//   "skillType"
//   "bCanBeLighten"
//   "skillGroupName"
//   "suitName"
//   "allSkillDetailList"

/* WARNING: Removing unreachable block (ram,0x108303e7) */
/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""EQUIPSKILL_CELL_DESC_CLASS_NAME""
     ""totalPoint""
     ""needPoint""
     ""skillName""
     ""skillEffect""
     ""skillType""
     ""bCanBeLighten""
     ""skillGroupName""
     ""suitName""
     ""allSkillDetailList"" */

void FUN_1082ffc0(int **param_1,int param_2,int param_3,undefined4 *******param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 *******pppppppuStack_c4;
  char *pcStack_c0;
  undefined4 *puStack_bc;
  int **ppiStack_b8;
  undefined4 *******pppppppuStack_b4;
  int iStack_a4;
  undefined4 *******local_a0;
  int *piStack_9c;
  undefined4 uStack_94;
  int **ppiStack_8c;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_78;
  int **local_74;
  int *piStack_70;
  uint uStack_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 uStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 *******pppppppuStack_50;
  undefined1 auStack_4c [8];
  int *piStack_44;
  int *piStack_40;
  undefined4 *******pppppppuStack_3c;
  undefined4 *******pppppppuStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_a4;
  local_74 = param_1;
  local_a0 = param_4;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (undefined4 *******)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      pppppppuStack_b4 = (undefined4 *******)param_1[2];
      ppiStack_b8 = param_1;
      puStack_bc = (undefined4 *)0x1083002f;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar2 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    pppppppuStack_b4 = (undefined4 *******)0x10830059;
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 0xd0) + 0x90) + 0xb4))();
    iStack_78 = iVar2;
    if (iVar2 != 0) {
      pppppppuStack_b4 = local_a0;
      ppiStack_b8 = (int **)0x10830074;
      FUN_104f4330();
      puStack_bc = &uStack_5c;
      uStack_5c = 0;
      piStack_58 = (int *)0x0;
      iStack_a4 = CONCAT31(iStack_a4._1_3_,((byte)piStack_40 & 0x8f) == 10);
      local_a0 = (undefined4 *******)0x0;
      ppiStack_b8 = (int **)iStack_a4;
      pcStack_c0 = "EQUIPSKILL_CELL_DESC_CLASS_NAME";
      pppppppuStack_c4 = pppppppuStack_3c;
      (**(code **)(*piStack_44 + 0x10))();
      uStack_84 = 0;
      uStack_80 = 0;
      FUN_11a98a70(&uStack_84);
      ppiStack_b8 = *(int ***)(iVar2 + 0x2d20);
      if (ppiStack_b8 != (int **)0x0) {
        piVar5 = ppiStack_b8[0x19];
        if (piVar5 != ppiStack_b8[0x1a]) {
          do {
            iVar2 = piVar5[1];
            if (iVar2 != 0) {
              FUN_11a98de0(&stack0xffffff50,pppppppuStack_b4,0,0);
              FUN_104d1550("totalPoint",0);
              FUN_104d1550("needPoint",*(undefined4 *)(iVar2 + 0x24));
              FUN_104d1670("skillName",*(undefined4 *)(iVar2 + 0x18));
              auStack_4c[0] = 0;
              pppppppuStack_3c = (undefined4 *******)auStack_4c;
              pppppppuStack_38 = pppppppuStack_3c;
              FUN_100e5aa0(pppppppuStack_3c);
              FUN_104d1670("skillEffect",pppppppuStack_3c);
              if (((undefined4 ********)pppppppuStack_3c != &pppppppuStack_50) &&
                 (pppppppuStack_3c != (undefined4 *******)0x0)) {
                FUN_10c3d5d0(pppppppuStack_3c);
              }
              FUN_104d1550("skillType",piVar5[4]);
              if (*(int *)(iStack_a4 + 0x2d20) == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = FUN_11463b10(iVar2);
              }
              FUN_104d15e0("bCanBeLighten",uVar1);
              (**(code **)(*piStack_9c + 0x3c))(uStack_94,&pppppppuStack_c4);
              FUN_104d7c10();
            }
            piVar5 = piVar5 + 5;
          } while (piVar5 != ppiStack_b8[0x1a]);
        }
        piVar5 = ppiStack_b8[0x1f];
        ppiVar4 = ppiStack_b8;
        param_1 = ppiStack_8c;
        if (piVar5 != ppiStack_b8[0x20]) {
          do {
            iVar2 = piVar5[1];
            if (iVar2 != 0) {
              FUN_11a98de0(&stack0xffffff50,pppppppuStack_b4,0,0);
              FUN_104d1550("totalPoint",0);
              FUN_104d1550("needPoint",*(undefined4 *)(iVar2 + 0x24));
              FUN_104d1670("skillName",*(undefined4 *)(iVar2 + 0x18));
              auStack_4c[0] = 0;
              pppppppuStack_3c = (undefined4 *******)auStack_4c;
              pppppppuStack_38 = pppppppuStack_3c;
              FUN_100e5aa0(pppppppuStack_3c);
              FUN_104d1670("skillEffect",pppppppuStack_3c);
              if (((undefined4 ********)pppppppuStack_3c != &pppppppuStack_50) &&
                 (pppppppuStack_3c != (undefined4 *******)0x0)) {
                FUN_10c3d5d0(pppppppuStack_3c);
              }
              FUN_104d1550("skillType",piVar5[4]);
              iVar3 = FUN_1050ebc0(*piVar5);
              if (iVar3 != 0) {
                FUN_104d1790("skillGroupName",iVar3 + 0x2c);
              }
              iVar3 = FUN_1082e210(piVar5[3]);
              if (iVar3 != 0) {
                FUN_104d1790("suitName",iVar3 + 0x14);
              }
              if (*(int *)(iStack_a4 + 0x2d20) == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = FUN_11463b10(iVar2);
              }
              FUN_104d15e0("bCanBeLighten",uVar1);
              (**(code **)(*piStack_9c + 0x3c))(uStack_94,&pppppppuStack_c4);
              ppiVar4 = ppiStack_b8;
            }
            piVar5 = piVar5 + 5;
            param_1 = ppiStack_8c;
          } while (piVar5 != ppiVar4[0x20]);
        }
      }
      (**(code **)(*piStack_58 + 0x14))
                (pppppppuStack_50,"allSkillDetailList",auStack_88,((byte)uStack_54 & 0x8f) == 10);
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        pppppppuStack_b4 = (undefined4 *******)param_1[2];
        puStack_bc = (undefined4 *)0x10830451;
        ppiStack_b8 = param_1;
        (**(code **)(**param_1 + 8))();
        *param_1 = (int *)0x0;
      }
      param_1[1] = (int *)0x2;
      *(undefined1 *)(param_1 + 2) = 1;
      if ((uStack_6c >> 6 & 1) != 0) {
        ppiStack_b8 = &piStack_70;
        pppppppuStack_b4 = pppppppuStack_68;
        puStack_bc = (undefined4 *)0x1083047f;
        (**(code **)(*piStack_70 + 8))();
        piStack_70 = (int *)0x0;
      }
      uStack_6c = 0;
      if ((uStack_54 >> 6 & 1) != 0) {
        ppiStack_b8 = &piStack_58;
        pppppppuStack_b4 = pppppppuStack_50;
        puStack_bc = (undefined4 *)0x108304ac;
        (**(code **)(*piStack_58 + 8))();
        piStack_58 = (int *)0x0;
      }
      uStack_54 = 0;
      if (((uint)pppppppuStack_3c >> 6 & 1) != 0) {
        ppiStack_b8 = &piStack_40;
        pppppppuStack_b4 = pppppppuStack_38;
        puStack_bc = (undefined4 *)0x108304d9;
        (**(code **)(*piStack_40 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10838870 @ 10838870  size=3128 ===== */
// strings:
//   "KEYMAPSETTING_CLASS_NAME"
//   "melee1key"
//   "melee2key"
//   "moveleft"
//   "moveright"
//   "moveforward"
//   "moveback"
//   "dodge"
//   "holster"
//   "rage_1"
//   "rage_2"
//   "rage_3"
//   "defense"
//   "reload"
//   "creep"
//   "focus"
//   "interact"
//   "ui_mode"
//   "bulletf1"
//   "bulletf2"

/* [RE-AUTO c0]
   strings:
     ""KEYMAPSETTING_CLASS_NAME""
     ""melee1key""
     ""melee2key""
     ""moveleft""
     ""moveright""
     ""moveforward""
     ""moveback""
     ""dodge""
     ""holster""
     ""rage_1"" */

void FUN_10838870(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  int iStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  uint uStack_68;
  undefined4 auStack_64 [4];
  int *piStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_24;
  byte local_20;
  undefined4 uStack_1c;
  
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      iStack_cc = param_1[2];
      puStack_d0 = param_1;
      puStack_d4 = (undefined4 *)0x108388c9;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    iStack_cc = param_4;
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_d0 = (undefined4 *)0x108388e7;
    FUN_104f4330();
    puStack_d4 = &uStack_3c;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_40 = CONCAT31(uStack_40._1_3_,(local_20 & 0x8f) == 10);
    puStack_d0 = (undefined4 *)uStack_40;
    pcStack_d8 = "KEYMAPSETTING_CLASS_NAME";
    uStack_dc = uStack_1c;
    uStack_e0 = 0x1083893e;
    cVar1 = (**(code **)(*piStack_24 + 0x10))();
    piStack_e8 = (int *)0x0;
    if (((cVar1 != '\0') && (((byte)uStack_48 & 0x8f) == 6)) &&
       (piStack_e8 = piStack_44, (uStack_48 >> 6 & 1) != 0)) {
      piStack_e8 = (int *)*piStack_44;
    }
    uStack_e0 = 0;
    uStack_e4 = 0;
    piStack_ec = &iStack_cc;
    iStack_cc = 0;
    FUN_11a98de0();
    uVar2 = FUN_10839d50();
    FUN_104d1670("melee1key",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("melee2key",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("moveleft",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("moveright",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("moveforward",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("moveback",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("dodge",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("holster",uVar2);
    uVar2 = FUN_10839e50();
    FUN_104d1670("rage_1",uVar2);
    uVar2 = FUN_10839e50();
    FUN_104d1670("rage_2",uVar2);
    uVar2 = FUN_10839e50();
    FUN_104d1670("rage_3",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("defense",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("reload",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670(&DAT_11dce988,uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("creep",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670(&DAT_11dce978,uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("focus",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("interact",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_mode",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("bulletf1",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("bulletf2",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("bulletf3",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("bulletf4",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("bulletf5",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_1",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_2",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_3",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_4",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_5",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_6",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_7",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_8",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_9",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("MhItem_0",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_playerproperty",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_social",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_inventoryuishortcut",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_taskuishortcut",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_equipSkill",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_manufacture",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_start_pause",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_enter",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_hunterRoad",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_Skillvideo",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("crouch",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_ActionPanel",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_WeaponTalent",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_petlist",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_RankingList",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_guild",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_HunterBook",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_clan",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_Mart",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_systemconfig",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_f8",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_f9",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_callQuickSpeak",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_callQuickSpeakConfig",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_PrivateChat",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_WorldMap",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_Illustrate",uVar2);
    uVar2 = FUN_10839d50();
    FUN_104d1670("ui_Wardrobe",uVar2);
    uStack_8c = 0xffffffff;
    uStack_68 = 0xffffffff;
    piStack_6c = (int *)0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_84 = 0xffffffff;
    uStack_ac = 0xffffffff;
    auStack_64[0] = 0xffffffff;
    uStack_a4 = 0xffffffff;
    uStack_7c = 0xffffffff;
    uStack_9c = 0xffffffff;
    uStack_70 = 0xffffffff;
    uStack_94 = 0xffffffff;
    uStack_74 = 0xffffffff;
    uStack_bc = 0xffffffff;
    uStack_b8 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_a8 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    uStack_98 = 0xffffffff;
    uStack_90 = 0xffffffff;
    uStack_88 = 0xffffffff;
    uStack_80 = 0xffffffff;
    uStack_78 = 0xffffffff;
    piVar3 = (int *)FUN_108342e0();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x14))
                (&uStack_8c,&uStack_68,&piStack_6c,&uStack_b4,&uStack_84,&uStack_ac,auStack_64,
                 &uStack_a4,&uStack_7c,&uStack_9c,&uStack_70,&uStack_94,&uStack_74,&stack0xffffff40,
                 &uStack_bc,&uStack_b8,&uStack_b0,&uStack_a8,&uStack_a0,&uStack_98,&uStack_90,
                 &uStack_88,&uStack_80,&uStack_78);
    }
    FUN_104d1550("nData12",uStack_8c);
    FUN_104d1550("nData15",uStack_68);
    FUN_104d1550("nData14",piStack_6c);
    FUN_104d1550("nData13",uStack_b4);
    FUN_104d1550("nData52",uStack_84);
    FUN_104d1550("nData50",uStack_ac);
    FUN_104d1550("nData53",auStack_64[0]);
    FUN_104d1550("nData51",uStack_a4);
    FUN_104d1550("nData56",uStack_7c);
    FUN_104d1550("nData54",uStack_9c);
    FUN_104d1550("nData57",uStack_70);
    FUN_104d1550("nData55",uStack_94);
    FUN_104d1550("nData3",uStack_74);
    FUN_104d1550("nData2",0xffffffff);
    FUN_104d1550("nData1",uStack_bc);
    FUN_104d1550("nData0",uStack_b8);
    FUN_104d1550("nData4",uStack_b0);
    FUN_104d1550("nData5",uStack_a8);
    FUN_104d1550("nData6",uStack_a0);
    FUN_104d1550("nData7",uStack_98);
    FUN_104d1550("nData8",uStack_90);
    FUN_104d1550("nData9",uStack_88);
    FUN_104d1550("nData10",uStack_80);
    FUN_104d1550("nData11",uStack_78);
    (**(code **)(*piStack_44 + 0x14))
              (uStack_3c,"keyMapVo",&uStack_dc,((byte)uStack_40 & 0x8f) == 10);
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (((uint)piStack_e8 >> 6 & 1) != 0) {
      (**(code **)(*piStack_ec + 8))(&piStack_ec,uStack_e4);
      piStack_ec = (int *)0x0;
    }
    piStack_e8 = (int *)0x0;
    if ((uStack_68 >> 6 & 1) != 0) {
      (**(code **)(*piStack_6c + 8))(&piStack_6c,auStack_64[0]);
      piStack_6c = (int *)0x0;
    }
    uStack_68 = 0;
    if ((uStack_50 >> 6 & 1) != 0) {
      (**(code **)(*piStack_54 + 8))(&piStack_54,uStack_4c);
    }
  }
  return;
}



/* ===== FUN_10856700 @ 10856700  size=158 ===== */
// calls: CEquipRandPassiveSkillActivateSetInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CEquipRandPassiveSkillActivateSetInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillActivateSetInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo"" */

undefined4 FUN_10856700(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd0490;
  puVar2 = (undefined4 *)CEquipRandPassiveSkillActivateSetInfo__GetInfoMgrSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)
             CInfoManager__FindByName(&local_8,"CEquipRandPassiveSkillActivateSetInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123bf564 & 1) == 0) {
        DAT_123bf564 = DAT_123bf564 | 1;
        FUN_108732f0();
        FUN_11a8911f(&LAB_11c734f0);
      }
      puVar3 = &DAT_123bf568;
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



/* ===== FUN_10858e30 @ 10858e30  size=256 ===== */
// strings:
//   "skillPoint"
//   "intimate"
//   "quality"
//   "skilltype"

/* [RE-AUTO c0]
   strings:
     ""skillPoint""
     ""intimate""
     ""quality""
     ""skilltype"" */

void FUN_10858e30(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
  if ((uVar1 == 3) || (uVar3 = 0xdeadbeaf, uVar1 == 4)) {
    uVar3 = *(undefined4 *)(in_stack_00000010 + 8);
  }
  local_1c = *(uint *)(in_stack_00000010 + 0x1c);
  local_14 = *(undefined4 *)(in_stack_00000010 + 0x24);
  local_18 = *(undefined4 *)(in_stack_00000010 + 0x20);
  local_10 = *(undefined4 *)(in_stack_00000010 + 0x28);
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = *(int **)(in_stack_00000010 + 0x18);
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  iVar2 = FUN_10540d00(uVar3);
  if (iVar2 != 0) {
    uVar3 = FUN_116c05c0();
    iVar2 = FUN_1050ef40(uVar3);
    if (iVar2 != 0) {
      FUN_104d1550("skillPoint",*(undefined4 *)(iVar2 + 100));
      FUN_104d1550("intimate",*(undefined4 *)(iVar2 + 0x68));
      FUN_104d1550("quality",*(undefined4 *)(iVar2 + 0x70));
      FUN_104d1550("skilltype",*(undefined4 *)(iVar2 + 0x58));
    }
  }
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1085ab40 @ 1085ab40  size=2342 ===== */
// calls: CPet::SetName, CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance
// strings:
//   "randPassiveSkillTitle"
//   "charmFoundTimes"
//   "PASSIVESKILL_VO_CLASSNAME"
//   "arrayRandPassiveSkillDesc"
//   "bIsHidden"
//   "nVisibleMoney"
//   "strName"
//   "ACTIVATE_VO_CLASSNAME"
//   "nType"
//   "activateInfoList"

/* [RE-AUTO c0]
   strings:
     ""randPassiveSkillTitle""
     ""charmFoundTimes""
     ""PASSIVESKILL_VO_CLASSNAME""
     ""arrayRandPassiveSkillDesc""
     ""bIsHidden""
     ""nVisibleMoney""
     ""strName""
     ""ACTIVATE_VO_CLASSNAME""
     ""nType""
     ""activateInfoList"" */

void FUN_1085ab40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  undefined1 *puVar7;
  byte unaff_DI;
  int **ppiVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcStack_198;
  undefined1 *puStack_194;
  int *piStack_190;
  int *piStack_18c;
  int *piStack_188;
  uint *puStack_184;
  char *pcStack_180;
  int *piStack_17c;
  int *piStack_178;
  char *pcStack_174;
  int *piStack_170;
  int *piStack_16c;
  int **ppiStack_168;
  int *piStack_164;
  int *piVar11;
  undefined4 uStack_158;
  int *piStack_154;
  int *local_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  int *piStack_144;
  undefined4 local_140;
  int *piStack_13c;
  int *local_138;
  undefined4 *local_134;
  int *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [12];
  undefined8 uStack_118;
  int *local_110;
  int *local_10c;
  int *local_108;
  undefined4 local_104;
  undefined4 local_100;
  int *piStack_fc;
  int *piStack_f8;
  uint uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 auStack_e8 [3];
  undefined1 auStack_dc [8];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_bc [20];
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  undefined8 uStack_8c;
  uint uStack_84;
  uint auStack_80 [4];
  uint *puStack_70;
  uint *puStack_6c;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&uStack_158;
  local_140 = param_2;
  if (param_5 != 9) goto LAB_1085b450;
  uVar3 = *(uint *)(param_4 + 4) & 0x8f;
  if ((uVar3 == 3) || (ppiVar8 = (int **)0xdeadbeaf, uVar3 == 4)) {
    ppiVar8 = *(int ***)(param_4 + 8);
  }
  uVar3 = *(uint *)(param_4 + 0x1c) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    local_150 = *(int **)(param_4 + 0x20);
  }
  else {
    local_150 = (int *)0xdeadbeaf;
  }
  local_134 = *(undefined4 **)(param_4 + 0x34);
  local_12c = *(undefined4 *)(param_4 + 0x3c);
  piStack_164 = *(int **)(param_4 + 0x38);
  local_128 = *(undefined4 *)(param_4 + 0x40);
  local_138 = (int *)0x0;
  local_130 = piStack_164;
  if (((uint)local_134 >> 6 & 1) != 0) {
    local_138 = *(int **)(param_4 + 0x30);
    ppiStack_168 = &local_138;
    piStack_16c = (int *)0x1085abeb;
    (**(code **)(*local_138 + 4))();
  }
  local_10c = *(int **)(param_4 + 0x4c);
  local_104 = *(undefined4 *)(param_4 + 0x54);
  piStack_164 = *(int **)(param_4 + 0x50);
  local_100 = *(undefined4 *)(param_4 + 0x58);
  local_110 = (int *)0x0;
  local_108 = piStack_164;
  if (((uint)local_10c >> 6 & 1) != 0) {
    local_110 = *(int **)(param_4 + 0x48);
    ppiStack_168 = &local_110;
    piStack_16c = (int *)0x1085ac29;
    (**(code **)(*local_110 + 4))();
  }
  uStack_f4 = *(uint *)(param_4 + 100);
  uStack_ec = *(undefined4 *)(param_4 + 0x6c);
  piStack_164 = *(int **)(param_4 + 0x68);
  auStack_e8[0] = *(undefined4 *)(param_4 + 0x70);
  piStack_f8 = (int *)0x0;
  piStack_f0 = piStack_164;
  if ((uStack_f4 >> 6 & 1) != 0) {
    piStack_f8 = *(int **)(param_4 + 0x60);
    ppiStack_168 = &piStack_f8;
    piStack_16c = (int *)0x1085ac67;
    (**(code **)(*piStack_f8 + 4))();
  }
  if (((byte)*(undefined4 *)(param_4 + 0x7c) & 0x8f) == 2) {
    uStack_14c = (int *)CONCAT13(*(undefined1 *)(param_4 + 0x80),(undefined3)uStack_14c);
  }
  else {
    uStack_14c = (int *)((uint)uStack_14c & 0xffffff);
  }
  if (((byte)*(undefined4 *)(param_4 + 0x94) & 0x8f) == 5) {
    uStack_118 = *(ulonglong *)(param_4 + 0x98);
  }
  else {
    uStack_118 = 0;
  }
  uVar3 = *(uint *)(param_4 + 0xac) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    piStack_144 = *(int **)(param_4 + 0xb0);
  }
  else {
    piStack_144 = (int *)0xdeadbeaf;
  }
  if (((byte)*(undefined4 *)(param_4 + 0xc4) & 0x8f) == 2) {
    piStack_13c = (int *)CONCAT31(piStack_13c._1_3_,*(undefined1 *)(param_4 + 200));
  }
  else {
    piStack_13c = (int *)((uint)piStack_13c._1_3_ << 8);
  }
  piStack_164 = (int *)0x1085ad04;
  iVar4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2d1c) != 0)) {
    if ((((byte)local_10c & 0x8f) == 2) && ((char)local_108 != '\0')) {
      piStack_164 = local_150;
      piStack_16c = (int *)0x1085ad35;
      ppiStack_168 = ppiVar8;
      piVar5 = (int *)FUN_113f9bb0();
    }
    else if (DAT_1202e818 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piStack_164 = (int *)0x1085ad63;
      piVar5 = (int *)FUN_10858a70();
    }
    if (uStack_14c._3_1_ != '\0') {
      if (DAT_1202e818 == 0) goto LAB_1085b3d9;
      piStack_164 = piStack_13c;
      ppiStack_168 = uStack_118._4_4_;
      piStack_16c = (int *)uStack_118;
      piStack_170 = (int *)0x1085ad92;
      piVar5 = (int *)FUN_10858670();
    }
    if (piVar5 != (int *)0x0) {
      piStack_164 = (int *)0x1085ada3;
      cVar2 = FUN_116698a0();
      if (cVar2 != '\0') {
        piStack_164 = (int *)0x1085adb2;
        cVar2 = FUN_1166e120();
        if (cVar2 != '\0') {
          local_150 = (int *)CONCAT31(local_150._1_3_,((byte)local_134 & 0x8f) == 10);
          piStack_164 = local_150;
          ppiStack_168 = (int **)0x11dd1550;
          piStack_16c = local_130;
          piStack_170 = (int *)0x1085ade2;
          cVar2 = (**(code **)(*local_138 + 0xc))();
          if (cVar2 != '\0') {
            piStack_170 = (int *)&DAT_11d9d32b;
            piStack_154 = (int *)0x0;
            pcStack_174 = "j";
            CPet__SetName();
            pcStack_174 = (char *)0x0;
            piStack_178 = (int *)0x13a4;
            piStack_17c = &local_128;
            pcStack_180 = (char *)&uStack_158;
            puStack_184 = (uint *)0x1085ae12;
            FUN_1024ebe0();
            puStack_184 = &uStack_158;
            piStack_188 = (int *)0x11dd1550;
            piStack_18c = (int *)0x1085ae2b;
            FUN_104d1790();
            pcStack_174 = (char *)0x1085ae37;
            FUN_100e5670();
          }
          piVar11 = (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)local_140 & 0x8f) == 10);
          pcStack_174 = "charmFoundTimes";
          piStack_178 = piStack_13c;
          piStack_17c = (int *)0x1085ae65;
          piStack_170 = piVar11;
          cVar2 = (**(code **)(*piStack_144 + 0xc))();
          if (cVar2 != '\0') {
            piStack_17c = (int *)piVar5[0x7b];
            pcStack_180 = "charmFoundTimes";
            puStack_184 = (undefined4 *)0x1085ae7f;
            FUN_104d1550();
          }
          piStack_17c = &uStack_c8;
          uStack_c8 = 0;
          uStack_c4 = 0;
          pcStack_180 = (char *)0x1085aea7;
          FUN_11a98a70();
          puStack_184 = &uStack_84;
          uStack_84 = 0;
          auStack_80[0] = 0;
          piStack_16c = (int *)CONCAT31(piStack_16c._1_3_,((byte)local_150 & 0x8f) == 10);
          local_138 = (int *)0x0;
          pcStack_180 = (char *)piStack_16c;
          piStack_188 = (int *)0x11dd1524;
          piStack_18c = uStack_14c;
          piStack_190 = (int *)0x1085aef5;
          cVar2 = (**(code **)(*piStack_154 + 0x10))();
          if (((cVar2 != '\0') && (((byte)uStack_90 & 0x8f) == 6)) &&
             (puStack_148 = (undefined4 *)uStack_8c, (uStack_90 >> 6 & 1) != 0)) {
            puStack_148 = (undefined4 *)*(undefined4 *)uStack_8c;
          }
          puStack_194 = auStack_dc;
          piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,(unaff_DI & 0x8f) == 10);
          piStack_190 = piStack_17c;
          pcStack_198 = "arrayRandPassiveSkillDesc";
          cVar2 = (**(code **)(*piStack_164 + 0x10))();
          if (cVar2 != '\0') {
            FUN_10867910(piVar5 + 0x6f);
            piStack_178 = (int *)0x0;
            piStack_154 = (int *)((int)(uStack_f4 - (int)piStack_f8) / 0x1c);
            if (piStack_154 != (int *)0x0) {
              piStack_18c = piStack_f8;
              do {
                uStack_118 = uStack_118 & 0xffffffff;
                local_110 = (int *)0x0;
                FUN_11a98de0((int)&uStack_118 + 4,uStack_158,0,0);
                iVar4 = *piVar11;
                iStack_98 = piVar11[1];
                iStack_94 = piVar11[2];
                uStack_90 = piVar11[3];
                uStack_8c = *(undefined8 *)(piVar11 + 4);
                uStack_84 = piVar11[6];
                iStack_9c = iVar4;
                FUN_104d15e0("bIsHidden",iVar4 == 1);
                if (iVar4 == 1) {
                  uVar6 = (**(code **)(*piVar5 + 0x2c))();
                  uVar6 = (**(code **)(*piVar5 + 0x18))(uVar6);
                  uVar6 = CEquipHiddenSkillCondOpenInfo__GetInfoManagerInstance(piStack_188,uVar6);
                  FUN_104d1550("nVisibleMoney",uVar6);
                }
                iVar4 = FUN_1050ebc0(iStack_94);
                if (iVar4 == 0) {
                  (**(code **)(*piStack_fc + 0x3c))(uStack_f4,auStack_124);
                }
                else {
                  puStack_194 = (undefined1 *)0x0;
                  CPet__SetName(&DAT_11d9d32b);
                  puStack_194 = (undefined1 *)((iStack_94 < 0) + 0x13a5);
                  puVar7 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar4 + 0x2c) != (undefined1 *)0x0) {
                    puVar7 = *(undefined1 **)(iVar4 + 0x2c);
                  }
                  uVar6 = FUN_1024e8a0(iStack_94,2);
                  uVar6 = FUN_1024e9b0(puVar7,0x2a,extraout_ECX,uVar6);
                  FUN_1024e720(&pcStack_198,puStack_194,uVar6);
                  auStack_80[0] = auStack_80[0] & 0xffffff00;
                  puStack_70 = auStack_80;
                  puStack_6c = puStack_70;
                  FUN_100e5aa0(puStack_70);
                  FUN_104d1670("strName",puStack_70);
                  if ((puStack_70 != &uStack_84) && (puStack_70 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_70);
                  }
                  puVar10 = &uStack_d4;
                  uStack_d4 = 0;
                  uStack_d0 = 0;
                  FUN_11a98a70(puVar10);
                  piStack_f0 = (int *)0x0;
                  uStack_ec = 0;
                  local_134 = (undefined4 *)
                              CONCAT31(local_134._1_3_,((byte)piStack_18c & 0x8f) == 10);
                  piStack_178 = (int *)0x0;
                  puVar9 = local_134;
                  cVar2 = (**(code **)(*piStack_190 + 0x10))
                                    (piStack_188,"ACTIVATE_VO_CLASSNAME",&piStack_f0);
                  if (((cVar2 != '\0') && (((byte)piStack_fc & 0x8f) == 6)) &&
                     (piStack_188 = piStack_f8, ((uint)piStack_fc >> 6 & 1) != 0)) {
                    piStack_188 = (int *)*piStack_f8;
                  }
                  iVar4 = FUN_10856700(uStack_a4);
                  if (((iVar4 != 0) &&
                      (puStack_148 = *(undefined4 **)(iVar4 + 0x2c),
                      puStack_148 != (undefined4 *)0x0)) &&
                     (iVar4 = puStack_148[4], iVar4 != puStack_148[5])) {
                    do {
                      iStack_98 = 0;
                      iStack_94 = 0;
                      FUN_11a98de0(&iStack_98,piStack_188,0,0);
                      piVar1 = (int *)*puVar9;
                      uVar6 = (**(code **)(*piVar1 + 0x10))();
                      FUN_104d1550("nType",uVar6);
                      uVar6 = (**(code **)(*piVar1 + 0x10))(piVar1);
                      FUN_1085a0c0(piVar5,puVar10,auStack_a8,uVar6);
                      (**(code **)(*local_10c + 0x3c))(local_104,auStack_bc);
                      FUN_104d7c10();
                      iVar4 = iVar4 + 4;
                    } while (iVar4 != puStack_148[5]);
                  }
                  FUN_104d12b0("activateInfoList",auStack_e8);
                  (**(code **)(*(int *)uStack_118 + 0x3c))(local_110,&local_140);
                  FUN_104d7c10();
                  FUN_104d7c10();
                  FUN_100e5670();
                }
                FUN_104d7c10();
                piStack_18c = piStack_18c + 7;
                piStack_178 = (int *)((int)piStack_178 + 1);
              } while (piStack_178 < piStack_154);
            }
            if (piStack_f8 != (int *)0x0) {
              FUN_10c3d5d0(piStack_f8);
            }
          }
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
          pcStack_198 = (char *)0x1085b3d3;
          FUN_11a89daa();
          return;
        }
      }
    }
  }
LAB_1085b3d9:
  if ((uStack_f4 >> 6 & 1) != 0) {
    ppiStack_168 = &piStack_f8;
    piStack_164 = piStack_f0;
    piStack_16c = (int *)0x1085b3f6;
    (**(code **)(*piStack_f8 + 8))();
    piStack_f8 = (int *)0x0;
  }
  uStack_f4 = 0;
  if (((uint)local_10c >> 6 & 1) != 0) {
    ppiStack_168 = &local_110;
    piStack_164 = local_108;
    piStack_16c = (int *)0x1085b423;
    (**(code **)(*local_110 + 8))();
    local_110 = (int *)0x0;
  }
  local_10c = (int *)0x0;
  if (((uint)local_134 >> 6 & 1) != 0) {
    ppiStack_168 = &local_138;
    piStack_164 = local_130;
    piStack_16c = (int *)0x1085b450;
    (**(code **)(*local_138 + 8))();
  }
LAB_1085b450:
  FUN_11a89daa();
  return;
}



