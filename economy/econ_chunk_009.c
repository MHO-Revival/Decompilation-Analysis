/* ===== FUN_1095c0d0 @ 1095c0d0  size=158 ===== */
// calls: CLevelEnSubGroupRewardInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CLevelEnSubGroupRewardInfo"

/* [RE-AUTO c0]
   calls: CLevelEnSubGroupRewardInfo::GetManagers
   strings:
     ""CLevelEnSubGroupRewardInfo"" */

undefined4 FUN_1095c0d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddd42c;
  puVar2 = (undefined4 *)CLevelEnSubGroupRewardInfo__GetInfoManagerSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CLevelEnSubGroupRewardInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c00ac & 1) == 0) {
        DAT_123c00ac = DAT_123c00ac | 1;
        FUN_1095ed20();
        FUN_11a8911f(&LAB_11c79400);
      }
      puVar3 = &DAT_123c003c;
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



/* ===== FUN_1095c240 @ 1095c240  size=158 ===== */
// calls: CLevelAppraiseRewardBoxInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CLevelAppraiseRewardBoxInfo"

/* [RE-AUTO c0]
   calls: CLevelAppraiseRewardBoxInfo::GetManagers
   strings:
     ""CLevelAppraiseRewardBoxInfo"" */

undefined4 FUN_1095c240(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddd434;
  puVar2 = (undefined4 *)CLevelAppraiseRewardBoxInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CLevelAppraiseRewardBoxInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c0038 & 1) == 0) {
        DAT_123c0038 = DAT_123c0038 | 1;
        FUN_1095edc0();
        FUN_11a8911f(&LAB_11c79340);
      }
      puVar3 = &DAT_123c0074;
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



/* ===== FUN_10972de0 @ 10972de0  size=272 ===== */
// strings:
//   "_GetCurrentWeaponMelodyList"
//   "_ChooseMelody"
//   "_GetEnforceMelodyList"
//   "_GetTuneNameByID"
//   "weaponID"

/* [RE-AUTO c0]
   strings:
     ""_GetCurrentWeaponMelodyList""
     ""_ChooseMelody""
     ""_GetEnforceMelodyList""
     ""_GetTuneNameByID""
     ""weaponID"" */

void FUN_10972de0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_104d13b0("_GetCurrentWeaponMelodyList",FUN_10972f00);
  FUN_104d13b0("_ChooseMelody",FUN_109732f0);
  FUN_104d13b0("_GetEnforceMelodyList",FUN_10973350);
  FUN_104d13b0("_GetTuneNameByID",FUN_10973450);
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))();
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x444))();
      FUN_104d1550("weaponID",uVar2);
    }
  }
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10974d90 @ 10974d90  size=5957 ===== */
// calls: CMHLevelInfo::CheckLevelProgressThreshold, CPet::SetName
// strings:
//   "LEVELENTRUST_DETAILVO_CLASSNAME"
//   "nLevelID"
//   "strLevelModeName"
//   "strTargetDesc"
//   "strBossName"
//   "strTargetArea"
//   "strEntrustContent"
//   "strEntrustManName"
//   "nHireNpcItemId"
//   "nHireNpcGoodId"
//   "needLev"
//   "bNeedHRLev"
//   "nLevelMode"
//   "nLimitTime"
//   "mLimitMember"
//   "mLimitMemberMax"
//   "needItemId"
//   "needItemCount"
//   "needHunterLev"
//   "nCurrentHunterLev"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""LEVELENTRUST_DETAILVO_CLASSNAME""
     ""nLevelID""
     ""strLevelModeName""
     ""strTargetDesc""
     ""strBossName""
     ""strTargetArea""
     ""strEntrustContent""
     ""strEntrustManName""
     ""nHireNpcItemId""
     ""nHireNpcGoodId"" */

void FUN_10974d90(undefined4 param_1,undefined1 ***param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  short *psVar10;
  char *pcVar11;
  undefined8 uVar12;
  int **ppiStack_2a4;
  int *piStack_2a0;
  char *pcStack_29c;
  char **ppcStack_298;
  int *piStack_294;
  char **ppcStack_290;
  int **ppiStack_28c;
  int ***pppiStack_288;
  int **ppiStack_284;
  int **ppiStack_280;
  char **ppcStack_27c;
  int *piStack_278;
  char *pcStack_274;
  int **ppiStack_270;
  int **ppiStack_26c;
  char **ppcStack_268;
  int *piStack_264;
  char *pcStack_260;
  int **ppiStack_25c;
  int *piStack_258;
  char *pcStack_254;
  int *piStack_250;
  int *piStack_24c;
  int *piStack_248;
  int *piStack_244;
  int iStack_240;
  int *piStack_23c;
  uint uStack_238;
  char *pcStack_234;
  char *pcStack_230;
  int iStack_22c;
  char *pcStack_228;
  int *piStack_224;
  char *pcStack_220;
  int *piStack_21c;
  int *piStack_218;
  char *pcStack_214;
  char *pcStack_210;
  int *piStack_20c;
  int *piStack_208;
  int *piStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  int *piStack_1f8;
  char *pcStack_1f4;
  char **ppcStack_1f0;
  int *piStack_1ec;
  undefined1 **ppuStack_1e8;
  undefined1 **ppuStack_1e4;
  undefined1 **ppuStack_1e0;
  undefined1 **ppuStack_1dc;
  undefined1 ***pppuStack_1d8;
  undefined1 ***pppuStack_1d4;
  undefined1 ***pppuStack_1d0;
  undefined1 ***pppuStack_1cc;
  undefined1 *puStack_1c8;
  undefined4 *puStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  char *pcStack_1b4;
  int **ppiStack_1b0;
  int *piStack_1ac;
  char *apcStack_19c [2];
  undefined4 uStack_194;
  undefined1 auStack_18c [4];
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *piStack_17c;
  int iStack_178;
  char *local_174;
  int iStack_16c;
  int *local_168;
  int *local_164;
  int *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int *piStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_12c [4];
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int **ppiStack_11c;
  int **ppiStack_118;
  uint uStack_114;
  int **ppiStack_110;
  undefined4 uStack_108;
  int *piStack_104;
  int *piStack_100;
  undefined1 ***local_fc;
  int iStack_f8;
  char *pcStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  uint uStack_e4;
  int iStack_e0;
  int **ppiStack_d8;
  int **ppiStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b0 [20];
  char acStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [8];
  char *pcStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 **ppuStack_68;
  undefined1 **ppuStack_64;
  undefined1 **ppuStack_60;
  undefined1 **ppuStack_5c;
  undefined1 ***pppuStack_58;
  undefined1 ***pppuStack_54;
  undefined1 ***pppuStack_50;
  undefined1 ***pppuStack_4c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)apcStack_19c;
  local_fc = param_2;
  if (param_5 != 3) goto LAB_109764cb;
  local_164 = (int *)param_4[1];
  local_15c = param_4[3];
  piStack_1ac = (int *)param_4[2];
  local_158 = param_4[4];
  local_168 = (int *)0x0;
  local_160 = piStack_1ac;
  if (((uint)local_164 >> 6 & 1) != 0) {
    local_168 = (int *)*param_4;
    ppiStack_1b0 = &local_168;
    pcStack_1b4 = (char *)0x10974e01;
    (**(code **)(*local_168 + 4))();
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_174 = (char *)param_4[8];
  }
  else {
    local_174 = (char *)0xdeadbeaf;
  }
  if (((byte)param_4[0xd] & 0x8f) == 2) {
    piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,*(undefined1 *)(param_4 + 0xe));
  }
  else {
    piStack_17c = (int *)((uint)piStack_17c._1_3_ << 8);
  }
  piStack_1ac = (int *)0x10974e54;
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((((piVar3 != (int *)0x0) && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) {
    piStack_1ac = (int *)0x10974e8f;
    iStack_178 = (**(code **)(*piVar5 + 0xb4))();
    if ((iStack_178 != 0) && (iStack_16c = *(int *)(iStack_178 + 0x2d1c), iStack_16c != 0)) {
      *(undefined1 *)(DAT_123bbae8 + 0x20) = 0;
      piStack_1ac = (int *)0x10974ec3;
      FUN_108f61f0();
      piStack_1ac = (int *)auStack_b0;
      ppiStack_1b0 = (int **)piStack_17c;
      pcStack_1b4 = local_174;
      uStack_1bc = 0x10974ed9;
      piStack_1b8 = piVar3;
      FUN_1130cd50();
      ppiStack_1b0 = (int **)&uStack_c8;
      uStack_c8 = 0;
      uStack_c4 = 0;
      piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,((byte)local_164 & 0x8f) == 10);
      piStack_1ac = piStack_17c;
      pcStack_1b4 = "LEVELENTRUST_DETAILVO_CLASSNAME";
      piStack_1b8 = local_160;
      uStack_1bc = 0x10974f24;
      cVar1 = (**(code **)(*local_168 + 0x10))();
      puStack_1c4 = (undefined4 *)0x0;
      if ((cVar1 != '\0') &&
         ((((byte)ppiStack_d4 & 0x8f) == 6 &&
          (puStack_1c4 = puStack_d0, ((uint)ppiStack_d4 >> 6 & 1) != 0)))) {
        puStack_1c4 = (undefined4 *)*puStack_d0;
      }
      uStack_1bc = 0;
      uStack_1c0 = 0;
      puStack_1c8 = &stack0xfffffe58;
      pppuStack_1cc = (undefined1 ***)0x10974f75;
      FUN_11a98de0();
      pppuStack_1cc = (undefined1 ***)uStack_194;
      pppuStack_1d0 = (undefined1 ***)0x11dd8dc4;
      pppuStack_1d4 = (undefined1 ***)0x10974f89;
      FUN_104d1550();
      ppuStack_60 = (undefined1 **)((uint)ppuStack_60 & 0xffffff00);
      pppuStack_1cc = &ppuStack_60;
      pppuStack_1d0 = (undefined1 ***)0x10974fb6;
      pppuStack_50 = pppuStack_1cc;
      pppuStack_4c = pppuStack_1cc;
      FUN_100e5aa0();
      pppuStack_1d0 = pppuStack_50;
      pppuStack_1d4 = (undefined1 ***)&DAT_11dbac80;
      pppuStack_1d8 = (undefined1 ***)0x10974fcd;
      FUN_104d1670();
      if ((pppuStack_50 != &ppuStack_64) && (pppuStack_50 != (undefined1 ***)0x0)) {
        pppuStack_1d0 = pppuStack_50;
        pppuStack_1d4 = (undefined1 ***)0x10974fec;
        FUN_10c3d5d0();
      }
      pppuStack_1d0 = &ppuStack_64;
      ppuStack_64 = (undefined1 **)((uint)ppuStack_64 & 0xffffff00);
      pppuStack_1d4 = (undefined1 ***)0x10975019;
      pppuStack_54 = pppuStack_1d0;
      pppuStack_50 = pppuStack_1d0;
      FUN_100e5aa0();
      pppuStack_1d4 = pppuStack_54;
      pppuStack_1d8 = (undefined1 ***)0x11dde3e0;
      ppuStack_1dc = (undefined1 **)0x10975030;
      FUN_104d1670();
      if ((pppuStack_54 != &ppuStack_68) && (pppuStack_54 != (undefined1 ***)0x0)) {
        pppuStack_1d4 = pppuStack_54;
        pppuStack_1d8 = (undefined1 ***)0x1097504f;
        FUN_10c3d5d0();
      }
      pppuStack_1d4 = &ppuStack_68;
      ppuStack_68 = (undefined1 **)((uint)ppuStack_68 & 0xffffff00);
      pppuStack_1d8 = (undefined1 ***)0x1097507c;
      pppuStack_58 = pppuStack_1d4;
      pppuStack_54 = pppuStack_1d4;
      FUN_100e5aa0();
      pppuStack_1d8 = pppuStack_58;
      ppuStack_1dc = (undefined1 **)0x11dd9688;
      ppuStack_1e0 = (undefined1 **)0x10975093;
      FUN_104d1670();
      if ((pppuStack_58 != (undefined1 ***)auStack_6c) && (pppuStack_58 != (undefined1 ***)0x0)) {
        pppuStack_1d8 = pppuStack_58;
        ppuStack_1dc = (undefined1 **)0x109750b2;
        FUN_10c3d5d0();
      }
      pppuStack_1d8 = (undefined1 ***)auStack_6c;
      auStack_6c[0] = 0;
      ppuStack_1dc = (undefined1 **)0x109750df;
      ppuStack_5c = (undefined1 **)pppuStack_1d8;
      pppuStack_58 = pppuStack_1d8;
      FUN_100e5aa0();
      ppuStack_1dc = ppuStack_5c;
      ppuStack_1e0 = (undefined1 **)0x11dde3d4;
      ppuStack_1e4 = (undefined1 **)0x109750f6;
      FUN_104d1670();
      if ((ppuStack_5c != (undefined1 **)auStack_70) && (ppuStack_5c != (undefined1 **)0x0)) {
        ppuStack_1dc = ppuStack_5c;
        ppuStack_1e0 = (undefined1 **)0x10975115;
        FUN_10c3d5d0();
      }
      ppuStack_1dc = (undefined1 **)auStack_70;
      auStack_70[0] = 0;
      ppuStack_1e0 = (undefined1 **)0x10975142;
      ppuStack_60 = ppuStack_1dc;
      ppuStack_5c = ppuStack_1dc;
      FUN_100e5aa0();
      ppuStack_1e0 = ppuStack_60;
      ppuStack_1e4 = (undefined1 **)0x11dde3c4;
      ppuStack_1e8 = (undefined1 **)0x10975159;
      FUN_104d1670();
      if ((ppuStack_60 != (undefined1 **)auStack_74) && (ppuStack_60 != (undefined1 **)0x0)) {
        ppuStack_1e0 = ppuStack_60;
        ppuStack_1e4 = (undefined1 **)0x10975178;
        FUN_10c3d5d0();
      }
      ppuStack_1e0 = (undefined1 **)auStack_74;
      auStack_74[0] = 0;
      ppuStack_1e4 = (undefined1 **)0x109751a5;
      ppuStack_64 = ppuStack_1e0;
      ppuStack_60 = ppuStack_1e0;
      FUN_100e5aa0();
      ppuStack_1e4 = ppuStack_64;
      ppuStack_1e8 = (undefined1 **)0x11dde3b0;
      piStack_1ec = (int *)0x109751bc;
      FUN_104d1670();
      if ((ppuStack_64 != (undefined1 **)auStack_78) && (ppuStack_64 != (undefined1 **)0x0)) {
        ppuStack_1e4 = ppuStack_64;
        ppuStack_1e8 = (undefined1 **)0x109751db;
        FUN_10c3d5d0();
      }
      ppuStack_1e4 = (undefined1 **)auStack_78;
      auStack_78[0] = 0;
      ppuStack_1e8 = (undefined1 **)0x10975208;
      ppuStack_68 = ppuStack_1e4;
      ppuStack_64 = ppuStack_1e4;
      FUN_100e5aa0();
      ppuStack_1e8 = ppuStack_68;
      piStack_1ec = (int *)0x11dde41c;
      ppcStack_1f0 = (char **)0x1097521f;
      FUN_104d1670();
      if ((ppuStack_68 != &puStack_7c) && (ppuStack_68 != (undefined1 **)0x0)) {
        ppuStack_1e8 = ppuStack_68;
        piStack_1ec = (int *)0x1097523e;
        FUN_10c3d5d0();
      }
      ppuStack_1e8 = (undefined1 **)0x10975246;
      iVar4 = FUN_1181d450();
      ppuStack_1e8 = *(undefined1 ***)(iVar4 + 0x78);
      piStack_1ec = (int *)0x11dde40c;
      ppcStack_1f0 = (char **)0x10975259;
      FUN_104d1550();
      ppcStack_1f0 = (char **)0x1097525e;
      iVar4 = FUN_1181d450();
      ppcStack_1f0 = *(char ***)(iVar4 + 0x74);
      pcStack_1f4 = "nHireNpcGoodId";
      piStack_1f8 = (int *)0x10975271;
      FUN_104d1550();
      ppuStack_1e8 = (undefined1 **)0x1;
      piStack_1ec = (int *)0x10975282;
      iVar4 = FUN_1130bb80();
      if (iVar4 == 0) {
        piStack_1ec = (int *)0xe;
        ppcStack_1f0 = (char **)0x109752ab;
        iVar4 = FUN_1130bb80();
        if (iVar4 != 0) {
          ppcStack_1f0 = *(char ***)(iVar4 + 4);
          pcStack_1f4 = "needLev";
          piStack_1f8 = (int *)0x109752c2;
          FUN_104d1550();
          pcStack_1f4 = (char *)0x1;
          goto LAB_109752c4;
        }
      }
      else {
        piStack_1ec = *(int **)(iVar4 + 4);
        ppcStack_1f0 = (char **)0x11dde3f4;
        pcStack_1f4 = "j";
        FUN_104d1550();
        pcStack_1f4 = (char *)0x0;
LAB_109752c4:
        piStack_1f8 = (int *)0x11dde5a0;
        pcStack_1fc = (char *)0x109752d4;
        FUN_104d15e0();
      }
      ppcStack_1f0 = (char **)0x0;
      pcStack_1f4 = (char *)0x109752e5;
      pcStack_1f4 = (char *)FUN_1130cb50();
      piStack_1f8 = (int *)0x11dde594;
      pcStack_1fc = (char *)0x109752f6;
      FUN_104d1550();
      pcStack_1f4 = (char *)0x2;
      piStack_1f8 = (int *)0x10975307;
      piStack_1f8 = (int *)FUN_1130cb50();
      pcStack_1fc = "nLimitTime";
      pcStack_200 = (char *)0x10975318;
      FUN_104d1550();
      piStack_1f8 = (int *)&DAT_00000008;
      pcStack_1fc = (char *)0x10975329;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        pcStack_1fc = *(char **)(iVar4 + 4);
        pcStack_200 = "mLimitMember";
        piStack_204 = (int *)0x10975342;
        FUN_104d1550();
        piStack_204 = *(int **)(iVar4 + 8);
        piStack_208 = (int *)0x11dde574;
        piStack_20c = (int *)0x10975355;
        FUN_104d1550();
      }
      pcStack_1fc = (char *)0x3;
      pcStack_200 = (char *)0x10975366;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        pcStack_200 = *(char **)(iVar4 + 4);
        piStack_204 = (int *)0x11dde5e0;
        piStack_208 = (int *)0x1097537f;
        FUN_104d1550();
        piStack_208 = *(int **)(iVar4 + 8);
        piStack_20c = (int *)0x11dde5d0;
        pcStack_210 = (char *)0x10975392;
        FUN_104d1550();
      }
      pcStack_200 = (char *)0x2;
      piStack_204 = (int *)0x109753a3;
      iVar4 = FUN_1130bb80();
      if ((iVar4 != 0) && (piStack_204 = *(int **)(iVar4 + 4), 0 < (int)piStack_204)) {
        piStack_208 = (int *)0x11dde5e0;
        piStack_20c = (int *)0x109753c1;
        FUN_104d1550();
        piStack_20c = *(int **)(iVar4 + 8);
        pcStack_210 = "needItemCount";
        pcStack_214 = (char *)0x109753d4;
        FUN_104d1550();
      }
      piStack_204 = (int *)&DAT_00000005;
      piStack_208 = (int *)0x109753e5;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        piStack_208 = *(int **)(iVar4 + 4);
        piStack_20c = (int *)0x11dde5c0;
        pcStack_210 = (char *)0x109753fc;
        FUN_104d1550();
        piStack_208 = (int *)0x10975409;
        piVar5 = (int *)(**(code **)(*piVar3 + 0x46c))();
        piStack_208 = (int *)0x10975410;
        piStack_208 = (int *)(**(code **)(*piVar5 + 0x18))();
        piStack_20c = (int *)0x11dde5ac;
        pcStack_210 = (char *)0x10975421;
        FUN_104d1550();
      }
      piStack_208 = (int *)&DAT_00000004;
      piStack_20c = (int *)0x10975432;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        piStack_20c = *(int **)(iVar4 + 4);
        pcStack_210 = "needGuildLev";
        pcStack_214 = (char *)0x10975449;
        FUN_104d1550();
        piStack_20c = (int *)0x10975457;
        iVar4 = (**(code **)(*(int *)piVar3[0xaaf] + 0xc))();
        piStack_20c = *(int **)(iVar4 + 0x44);
        pcStack_210 = "nCurrentGuildLev";
        pcStack_214 = (char *)0x1097546a;
        FUN_104d1550();
      }
      piStack_20c = (int *)0xd;
      pcStack_210 = (char *)0x1097547b;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        pcStack_210 = *(char **)(iVar4 + 4);
        pcStack_214 = "needGoldenHunterLev";
        piStack_218 = (int *)0x10975492;
        FUN_104d1550();
        pcStack_210 = (char *)0x1097549f;
        (**(code **)(*piVar3 + 0x46c))();
        pcStack_210 = (char *)0x109754a6;
        pcStack_210 = (char *)FUN_114dfc10();
        pcStack_214 = "nCurrentGoldernLev";
        piStack_218 = (int *)0x109754b7;
        FUN_104d1550();
      }
      pcStack_210 = (char *)0x9;
      pcStack_214 = (char *)0x109754c8;
      iVar4 = FUN_1130bb80();
      if (iVar4 == 0) {
        pcStack_214 = (char *)0x0;
        piStack_218 = (int *)0x11dde564;
        piStack_21c = (int *)0x10975585;
        FUN_104d15e0();
        piStack_21c = (int *)&DAT_11d9d32b;
        pcStack_220 = "strNeedQuest";
        piStack_224 = (int *)0x1097559a;
        FUN_104d1670();
      }
      else {
        pcStack_214 = *(char **)(iVar4 + 4);
        piStack_218 = (int *)0x109754da;
        ppuStack_1e4 = (undefined1 **)FUN_104d8d20();
        if (ppuStack_1e4 != (undefined1 **)0x0) {
          pcStack_214 = *(char **)(iVar4 + 4);
          piStack_218 = (int *)0x109754f7;
          piStack_218 = (int *)(**(code **)(*(int *)piVar3[0xaac] + 0x50))();
          if (piStack_218 == (int *)0x0) {
            piStack_218 = *(int **)(iVar4 + 4);
            piStack_21c = (int *)0x1097550b;
            piStack_218 = (int *)(**(code **)(*(int *)piVar3[0xaac] + 0x60))();
            if ((char)piStack_218 != '\0') goto LAB_1097550f;
          }
          else {
LAB_1097550f:
            piStack_218 = (int *)CONCAT31((int3)((uint)piStack_218 >> 8),1);
          }
          piStack_21c = (int *)0x11dde564;
          pcStack_220 = (char *)0x10975522;
          FUN_104d15e0();
          piStack_218 = (int *)auStack_94;
          piStack_21c = (int *)0x1097553c;
          iVar4 = FUN_100e5b40();
          piStack_21c = *(int **)(iVar4 + 0x14);
          pcStack_220 = "strNeedQuest";
          piStack_224 = (int *)0x1097554f;
          FUN_104d1670();
          if ((puStack_7c != auStack_90) && (puStack_7c != (undefined1 *)0x0)) {
            pcStack_214 = puStack_7c;
            piStack_218 = (int *)0x1097556e;
            FUN_10c3d5d0();
          }
        }
      }
      pcStack_214 = (char *)0x6;
      piStack_218 = (int *)0x109755ab;
      iVar4 = FUN_1130bb80();
      if (iVar4 == 0) {
        piStack_218 = (int *)0x0;
        piStack_21c = (int *)0x11dde558;
        pcStack_220 = (char *)0x1097569f;
        FUN_104d15e0();
        pcStack_220 = "";
        piStack_224 = (int *)0x11dde54c;
        pcStack_228 = (char *)0x109756b4;
        FUN_104d1670();
      }
      else {
        piStack_218 = *(int **)(iVar4 + 4);
        piStack_21c = (int *)0x109755bd;
        ppuStack_1e8 = (undefined1 **)FUN_104d86c0();
        if (ppuStack_1e8 != (undefined1 **)0x0) {
          piStack_218 = *(int **)(iVar4 + 4);
          piStack_21c = (int *)0x109755d9;
          (**(code **)(*piVar3 + 0x46c))();
          piStack_21c = (int *)0x109755e0;
          uVar6 = FUN_114e0340();
          piStack_21c = (int *)(uVar6 & 0xff);
          pcStack_220 = "bCardStatus";
          piStack_224 = (int *)0x109755f4;
          FUN_104d15e0();
          piStack_21c = (int *)auStack_98;
          pcStack_220 = (char *)0x1097560b;
          iVar4 = FUN_100e5b40();
          pcStack_220 = *(char **)(iVar4 + 0x14);
          piStack_224 = (int *)0x11dde54c;
          pcStack_228 = (char *)0x1097561e;
          FUN_104d1670();
          if ((pcStack_88 != acStack_9c) && (pcStack_88 != (char *)0x0)) {
            pcStack_220 = pcStack_88;
            piStack_224 = (int *)0x1097563d;
            FUN_10c3d5d0();
          }
          pcStack_220 = acStack_9c;
          piStack_224 = (int *)0x1097564f;
          FUN_117f69d0();
          piStack_224 = (int *)0x10975656;
          iVar4 = FUN_100e5b40();
          piStack_224 = *(int **)(iVar4 + 0x14);
          pcStack_228 = "strNeedCardDes";
          iStack_22c = 0x10975669;
          FUN_104d1670();
          if ((puStack_80 != auStack_94) && (puStack_80 != (undefined1 *)0x0)) {
            piStack_218 = (int *)puStack_80;
            piStack_21c = (int *)0x10975688;
            FUN_10c3d5d0();
          }
        }
      }
      piStack_218 = (int *)&DAT_00000007;
      piStack_21c = (int *)0x109756c5;
      piStack_21c = (int *)FUN_1130cb50();
      pcStack_220 = "nCurrentPlaytime";
      piStack_224 = (int *)0x109756d6;
      FUN_104d1550();
      piStack_21c = (int *)0x3;
      pcStack_220 = (char *)0x109756e7;
      pcStack_220 = (char *)FUN_1130cb50();
      piStack_224 = (int *)0x11dde68c;
      pcStack_228 = (char *)0x109756f8;
      FUN_104d1550();
      pcStack_220 = (char *)0x4;
      piStack_224 = (int *)0x10975709;
      piStack_224 = (int *)FUN_1130cb50();
      pcStack_228 = "nLimitEnterType";
      iStack_22c = 0x1097571a;
      FUN_104d1550();
      piStack_224 = (int *)&DAT_00000009;
      pcStack_228 = (char *)0x1097572b;
      iVar4 = FUN_1130cb50();
      pcStack_228 = (char *)0x5;
      iStack_22c = 0x1097573b;
      iStack_22c = FUN_1130cb50();
      iStack_22c = iVar4 + iStack_22c;
      pcStack_230 = "nLimitEnterCount";
      pcStack_234 = (char *)0x1097574e;
      FUN_104d1550();
      iStack_22c = 6;
      pcStack_230 = (char *)0x1097575f;
      pcStack_230 = (char *)FUN_1130cb50();
      pcStack_234 = "nLimitEnterCountExt";
      uStack_238 = 0x10975770;
      FUN_104d1550();
      uStack_238 = iStack_e0;
      piStack_23c = (int *)0x11dde6d0;
      iStack_240 = 0x10975787;
      FUN_104d1550();
      pcStack_230 = (char *)0x10975795;
      pcStack_230 = (char *)FUN_1025b060();
      pcStack_234 = "playerMoney";
      uStack_238 = 0x109757a6;
      FUN_104d1550();
      pcStack_230 = (char *)0x109757b4;
      pcStack_230 = (char *)FUN_1025b060();
      pcStack_234 = "playerBoundMoney";
      uStack_238 = 0x109757c5;
      FUN_104d1550();
      uStack_238 = uStack_108;
      piStack_23c = (int *)0x11dde6b0;
      iStack_240 = 0x109757dc;
      FUN_104d15e0();
      iStack_240 = CONCAT13(piStack_104._0_1_,uStack_108._1_3_);
      piStack_244 = (int *)0x11dde614;
      piStack_248 = (int *)0x109757f3;
      FUN_104d15e0();
      pcStack_230 = (char *)0xf6d39;
      pcStack_234 = (char *)0x10975805;
      iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
      iVar4 = 0;
      if (iVar7 != 0) {
        pcStack_234 = (char *)0xf6d39;
        uStack_238 = 0x10975816;
        (**(code **)(*(int *)piVar3[4] + 0x1c))();
        uStack_238 = 0x1097581d;
        iVar7 = FUN_1141bcc0();
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
      }
      pcStack_234 = (char *)0x10975827;
      iVar7 = FUN_1184c850();
      pcStack_234 = *(char **)(iVar7 + 0x30);
      uStack_238 = 0x10975832;
      iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
      if (iVar7 != 0) {
        uStack_238 = 0x1097583d;
        iVar7 = FUN_1141bcc0();
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
      }
      uStack_238 = 0x10975847;
      iVar7 = FUN_1184c850();
      uStack_238 = *(uint *)(iVar7 + 0x34);
      piStack_23c = (int *)0x10975852;
      iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
      if (iVar7 != 0) {
        piStack_23c = (int *)0x1097585d;
        iVar7 = FUN_1141bcc0();
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
      }
      piStack_23c = (int *)0x10975867;
      iVar7 = FUN_1184c850();
      piStack_23c = *(int **)(iVar7 + 0x38);
      iStack_240 = 0x10975872;
      iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
      iStack_240 = iVar4;
      if (iVar7 != 0) {
        iStack_240 = 0x1097587d;
        iVar7 = FUN_1141bcc0();
        iStack_240 = iVar4;
        if (iVar4 <= iVar7) {
          iStack_240 = iVar7;
        }
      }
      piStack_244 = (int *)0x11dde608;
      piStack_248 = (int *)0x10975893;
      FUN_104d1550();
      iStack_240 = 8;
      piStack_244 = (int *)0x109758a4;
      piStack_244 = (int *)FUN_1130cb50();
      piStack_248 = (int *)0x11dde5f8;
      piStack_24c = (int *)0x109758b5;
      FUN_104d1550();
      piStack_244 = (int *)0x109758bd;
      uVar12 = FUN_111f8d20();
      piVar5 = piStack_20c;
      pppuStack_1cc = (undefined1 ***)((ulonglong)uVar12 >> 0x20);
      piStack_244 = (int *)uVar12;
      piStack_248 = piStack_20c;
      piStack_24c = (int *)0x109758d1;
      (**(code **)(*piVar3 + 0x390))();
      piStack_24c = (int *)0x109758d8;
      uVar2 = CMHLevelInfo__CheckLevelProgressThreshold();
      piStack_24c = piVar5;
      piStack_250 = (int *)0x109758e2;
      piStack_21c._0_1_ = uVar2;
      pcVar8 = (char *)FUN_107d7930();
      if ((pcVar8 != (char *)0x0) && (*(int *)(pcVar8 + 0x14) == 0x4b2)) {
        piStack_21c._0_1_ = 0;
      }
      piStack_24c._0_1_ = piStack_21c._0_1_;
      piStack_24c._1_3_ = piStack_21c._1_3_;
      piStack_250 = (int *)0x11dde5ec;
      pcStack_254 = (char *)0x10975918;
      pcStack_210 = pcVar8;
      FUN_104d15e0();
      if (pcVar8 == (char *)0x0) {
        piStack_24c = (int *)0x0;
        piStack_250 = (int *)0x11dde654;
        pcStack_254 = "j";
        FUN_104d1550();
        pcStack_254 = (char *)0x0;
      }
      else {
        piStack_24c = *(int **)(pcVar8 + 0x27c);
        piStack_250 = (int *)0x11dde654;
        pcStack_254 = (char *)0x10975935;
        FUN_104d1550();
        pcStack_254 = *(char **)(pcVar8 + 0x280);
      }
      piStack_258 = (int *)0x11dde644;
      ppiStack_25c = (int **)0x1097595b;
      FUN_104d1550();
      piVar3 = piStack_218;
      piStack_21c = (int *)((uint)piStack_21c._1_3_ << 8);
      piStack_24c = (int *)0x1097596e;
      iVar4 = FUN_112e5470();
      if (iVar4 != 0) {
        piStack_24c = (int *)0x10975979;
        pppuStack_1d8 = (undefined1 ***)FUN_112ea0c0();
        iVar4 = (int)*pppuStack_1d8;
        if ((undefined1 **)iVar4 != pppuStack_1d8[1]) {
          do {
            piStack_24c = (int *)0x1097598e;
            piStack_24c = (int *)(**(code **)(*piVar3 + 0xb8))();
            piStack_250 = (int *)0x10975996;
            FUN_112e9980();
            piStack_250 = (int *)0x1097599d;
            cVar1 = FUN_100e5870();
            if (cVar1 != '\0') {
              piStack_24c = (int *)0x109759b6;
              uVar2 = FUN_112e9940();
              piStack_21c = (int *)CONCAT31(piStack_21c._1_3_,uVar2);
              break;
            }
            iVar4 = iVar4 + 0x2c;
          } while ((undefined1 **)iVar4 != pppuStack_1d8[1]);
        }
      }
      piStack_24c = piStack_21c;
      piStack_250 = (int *)0x11dde634;
      pcStack_254 = (char *)0x109759ce;
      FUN_104d15e0();
      piStack_24c = (int *)&DAT_0000000c;
      piStack_250 = (int *)0x109759df;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        piStack_250 = *(int **)(iVar4 + 4);
        pcStack_254 = "nTicketCount";
        piStack_258 = (int *)0x109759f6;
        FUN_104d1550();
      }
      piStack_250 = (int *)0x109759fe;
      iVar4 = FUN_116bd200();
      piStack_250 = *(int **)(iVar4 + 0x3c);
      pcStack_254 = (char *)0x10975a0a;
      pcStack_254 = (char *)FUN_113fa380();
      piStack_258 = (int *)0x11dde7a4;
      ppiStack_25c = (int **)0x10975a1b;
      FUN_104d1550();
      uStack_188 = 0;
      pcStack_254 = (char *)&uStack_188;
      uStack_184 = 0;
      piStack_258 = (int *)0x10975a43;
      FUN_11a98a70();
      piVar5 = piStack_104;
      if (piStack_104 != piStack_100) {
        do {
          ppiStack_25c = (int **)0x10975a6a;
          piStack_258 = piVar5;
          FUN_109764f0();
          ppiStack_25c = (int **)0x0;
          pcStack_260 = (char *)0x0;
          piStack_264 = (int *)0x0;
          ppcStack_268 = &pcStack_f0;
          pcStack_f0 = (char *)0x0;
          piStack_ec = (int *)0x0;
          ppiStack_26c = (int **)0x10975a95;
          FUN_11a98de0();
          ppiStack_26c = &piStack_e8;
          piStack_e8 = (int *)((uint)piStack_e8 & 0xffffff00);
          ppiStack_270 = (int **)0x10975abc;
          ppiStack_d8 = ppiStack_26c;
          ppiStack_d4 = ppiStack_26c;
          FUN_100e5aa0();
          ppiStack_270 = ppiStack_d8;
          pcStack_274 = "strDesc";
          piStack_278 = (int *)0x10975ad6;
          FUN_104d1670();
          if ((ppiStack_d8 != &piStack_ec) && (ppiStack_d8 != (int **)0x0)) {
            ppiStack_270 = ppiStack_d8;
            pcStack_274 = (char *)0x10975af5;
            FUN_10c3d5d0();
          }
          ppiStack_270 = (int **)pcStack_214;
          pcStack_274 = "nType";
          piStack_278 = (int *)0x10975b0f;
          FUN_104d1550();
          ppiStack_270 = &piStack_104;
          pcStack_274 = apcStack_19c[0];
          piStack_278 = (int *)0x10975b2d;
          (**(code **)(_DAT_00000000 + 0x3c))();
          if (((uint)piStack_e8 >> 6 & 1) != 0) {
            ppiStack_25c = &piStack_ec;
            piStack_258 = (int *)uStack_e4;
            pcStack_260 = (char *)0x10975b56;
            (**(code **)(*piStack_ec + 8))();
            piStack_ec = (int *)0x0;
          }
          piStack_e8 = (int *)0x0;
          if (piStack_1ec != (int *)0x0) {
            piStack_258 = piStack_1ec;
            ppiStack_25c = (int **)0x10975b7a;
            FUN_10c3da30();
          }
          if (piStack_1f8 != (int *)0x0) {
            piStack_258 = piStack_1f8;
            ppiStack_25c = (int **)0x10975b8b;
            FUN_10c3d5d0();
          }
          piVar5 = piVar5 + 5;
        } while (piVar5 != piStack_100);
      }
      piStack_258 = (int *)(uint)(((byte)iStack_240 & 0x8f) == 10);
      ppiStack_25c = (int **)auStack_18c;
      pcStack_260 = "appraiseArr";
      piStack_264 = piStack_23c;
      ppcStack_268 = (char **)0x10975bca;
      (**(code **)(*piStack_244 + 0x14))();
      ppcStack_268 = &pcStack_1b4;
      pcStack_1b4 = (char *)0x0;
      ppiStack_1b0 = (int **)0x0;
      ppiStack_26c = (int **)0x10975bef;
      FUN_11a98a70();
      piVar5 = local_164;
      if (local_164 != local_160) {
        do {
          ppiStack_26c = &piStack_e8;
          iStack_e0 = *piVar5;
          piStack_e8 = (int *)0x0;
          uStack_e4 = 3;
          ppiStack_270 = ppiStack_1b0;
          pcStack_274 = (char *)0x10975c3a;
          (**(code **)(*piStack_1b8 + 0x3c))();
          if ((uStack_e4 >> 6 & 1) != 0) {
            ppiStack_270 = &piStack_e8;
            ppiStack_26c = (int **)iStack_e0;
            pcStack_274 = (char *)0x10975c63;
            (**(code **)(*piStack_e8 + 8))();
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != local_160);
      }
      ppiStack_26c = (int **)(uint)(((byte)pcStack_254 & 0x8f) == 10);
      ppiStack_270 = &piStack_1b8;
      pcStack_274 = "bossArr";
      piStack_278 = piStack_250;
      ppcStack_27c = (char **)0x10975c9b;
      (**(code **)(*piStack_258 + 0x14))();
      ppcStack_27c = &pcStack_200;
      pcStack_200 = (char *)0x0;
      pcStack_1fc = (char *)0x0;
      ppiStack_280 = (int **)0x10975cba;
      FUN_11a98a70();
      ppiStack_280 = &piStack_1ec;
      piStack_1ec = (int *)0x0;
      ppuStack_1e8 = (undefined1 **)0x0;
      ppiStack_284 = (int **)0x10975cdf;
      FUN_11a98a70();
      piVar5 = piStack_124;
      if (piStack_124 != piStack_120) {
        do {
          ppiStack_284 = &piStack_100;
          iStack_f8 = *piVar5;
          piStack_100 = (int *)0x0;
          local_fc = (undefined1 ***)0x3;
          pppiStack_288 = (int ***)pcStack_200;
          ppiStack_28c = (int **)0x10975d2a;
          (**(code **)(*piStack_208 + 0x3c))();
          ppiStack_28c = &piStack_120;
          piStack_120 = (int *)0x0;
          ppiStack_11c = (int **)0x2;
          ppiStack_118 = (int **)((uint)ppiStack_118 & 0xffffff00);
          ppcStack_290 = ppcStack_1f0;
          piStack_294 = (int *)0x10975d63;
          (**(code **)(*piStack_1f8 + 0x3c))();
          if ((uStack_114 >> 6 & 1) != 0) {
            pppiStack_288 = &ppiStack_118;
            ppiStack_284 = ppiStack_110;
            ppiStack_28c = (int **)0x10975d8c;
            (*(code *)(*ppiStack_118)[2])();
            ppiStack_118 = (int **)0x0;
          }
          uStack_114 = 0;
          if (((uint)local_fc >> 6 & 1) != 0) {
            pppiStack_288 = (int ***)&piStack_100;
            ppiStack_284 = (int **)iStack_f8;
            ppiStack_28c = (int **)0x10975dcb;
            (**(code **)(*piStack_100 + 8))();
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != piStack_120);
      }
      if (piStack_248 != (int *)0x0) {
        piVar5 = (int *)piStack_248[0x23];
        pcVar11 = (char *)0x0;
        pcVar8 = (char *)((uint)(piStack_248[0x24] + (3 - (int)piVar5)) >> 2);
        if ((int *)piStack_248[0x24] < piVar5) {
          pcVar8 = (char *)0x0;
        }
        piVar3 = piStack_250;
        pcStack_210 = pcVar8;
        if (pcVar8 != (char *)0x0) {
          do {
            ppiStack_284 = &piStack_100;
            iStack_f8 = *piVar5;
            piStack_100 = (int *)0x0;
            local_fc = (undefined1 ***)0x3;
            pppiStack_288 = (int ***)pcStack_200;
            ppiStack_28c = (int **)0x10975e57;
            (**(code **)(*piStack_208 + 0x3c))();
            ppiStack_28c = &piStack_120;
            piStack_120 = (int *)0x0;
            ppiStack_11c = (int **)0x2;
            ppiStack_118 = (int **)CONCAT31(ppiStack_118._1_3_,1);
            ppcStack_290 = ppcStack_1f0;
            piStack_294 = (int *)0x10975e90;
            (**(code **)(*piStack_1f8 + 0x3c))();
            if ((uStack_114 >> 6 & 1) != 0) {
              pppiStack_288 = &ppiStack_118;
              ppiStack_284 = ppiStack_110;
              ppiStack_28c = (int **)0x10975eb9;
              (*(code *)(*ppiStack_118)[2])();
              ppiStack_118 = (int **)0x0;
            }
            uStack_114 = 0;
            if (((uint)local_fc >> 6 & 1) != 0) {
              pppiStack_288 = (int ***)&piStack_100;
              ppiStack_284 = (int **)iStack_f8;
              ppiStack_28c = (int **)0x10975ef8;
              (**(code **)(*piStack_100 + 8))();
            }
            pcVar11 = pcVar11 + 1;
            piVar5 = piVar5 + 1;
            piVar3 = piStack_250;
            param_2 = pppuStack_1d4;
          } while (pcVar11 != pcVar8);
        }
      }
      piVar5 = piStack_248;
      ppiStack_284 = (int **)(uint)(((byte)ppiStack_26c & 0x8f) == 10);
      pppiStack_288 = (int ***)&piStack_208;
      ppiStack_28c = (int **)0x11dde784;
      ppcStack_290 = ppcStack_268;
      piStack_294 = (int *)0x10975f3c;
      (*(code *)(*ppiStack_270)[5])();
      piStack_294 = (int *)(uint)(((byte)ppcStack_27c & 0x8f) == 10);
      ppcStack_298 = &pcStack_200;
      pcStack_29c = "isFirstRewardArr";
      piStack_2a0 = piStack_278;
      ppiStack_2a4 = (int **)0x10975f68;
      (*(code *)(*ppiStack_280)[5])();
      ppiStack_2a4 = (int **)0x10975f6d;
      iVar4 = FUN_116bd200();
      ppiStack_270 = *(int ***)(iVar4 + 0x40);
      if (param_2 != (undefined1 ***)0x0) {
        piStack_120 = (int *)0x0;
        ppiStack_11c = (int **)0x3;
        ppiStack_2a4 = (int **)(uint)(((byte)ppiStack_28c & 0x8f) == 10);
        ppiStack_118 = ppiStack_270;
        (**(code **)(*ppcStack_290 + 0x14))(pppiStack_288,"materialTicketID",&piStack_120);
        if (((uint)ppiStack_11c >> 6 & 1) != 0) {
          ppiStack_2a4 = ppiStack_118;
          (**(code **)(*piStack_120 + 8))(&piStack_120);
        }
      }
      ppiStack_2a4 = ppiStack_270;
      uVar9 = FUN_113fa380();
      if (param_2 != (undefined1 ***)0x0) {
        piStack_13c = (int *)0x0;
        uStack_138 = 4;
        uStack_134 = uVar9;
        (**(code **)(*piStack_294 + 0x14))
                  (ppiStack_28c,"materialTicketNum",&piStack_13c,((byte)ppcStack_290 & 0x8f) == 10);
        if ((uStack_138 >> 6 & 1) != 0) {
          (**(code **)(*piStack_13c + 8))(&piStack_13c,uStack_134);
          piStack_13c = (int *)0x0;
        }
        uStack_138 = 0;
      }
      if (((piVar5 != (int *)0x0) && (piVar5[0x97] != 0)) &&
         (cVar1 = (**(code **)(*piVar3 + 0x394))(), cVar1 == '\0')) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x3a4))();
        uVar6 = (**(code **)(*piVar3 + 0xa4))();
        if ((uVar6 < 2) && (param_2 != (undefined1 ***)0x0)) {
          piStack_24c = (int *)0x0;
          piStack_248 = (int *)0x2;
          piStack_244 = (int *)CONCAT31(piStack_244._1_3_,1);
          (**(code **)(*piStack_294 + 0x14))
                    (ppiStack_28c,"IsShowMaterialTicket",&piStack_24c,
                     ((byte)ppcStack_290 & 0x8f) == 10);
          if (((uint)piStack_248 >> 6 & 1) != 0) {
            (**(code **)(*piStack_24c + 8))(&piStack_24c,piStack_244);
            piStack_24c = (int *)0x0;
          }
          piStack_248 = (int *)0x0;
        }
      }
      if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         ((piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0 &&
          ((iVar4 = (**(code **)(*piVar3 + 0xb4))(), iVar4 != 0 && (*(int *)(iVar4 + 0x2e34) != 0)))
          ))) {
        psVar10 = (short *)FUN_11218270(ppiStack_270);
        if (psVar10 == (short *)0x0) {
          FUN_104d15e0("bIsFastestPass",0);
        }
        else {
          if (param_2 != (undefined1 ***)0x0) {
            piStack_128 = (int *)0x0;
            piStack_124 = (int *)0x2;
            piStack_120 = (int *)CONCAT31(piStack_120._1_3_,1);
            (**(code **)(*ppcStack_298 + 0x14))
                      (ppcStack_290,"bIsFastestPass",&piStack_128,((byte)piStack_294 & 0x8f) == 10);
            if (((uint)piStack_124 >> 6 & 1) != 0) {
              (**(code **)(*piStack_128 + 8))(&piStack_128,piStack_120);
            }
          }
          if (param_2 != (undefined1 ***)0x0) {
            piStack_128 = (int *)0x0;
            piStack_124 = (int *)0x3;
            piStack_120 = (int *)(int)*psVar10;
            (**(code **)(*ppcStack_298 + 0x14))
                      (ppcStack_290,"nFastestPassTime",&piStack_128,((byte)piStack_294 & 0x8f) == 10
                      );
            if (((uint)piStack_124 >> 6 & 1) != 0) {
              (**(code **)(*piStack_128 + 8))(&piStack_128,piStack_120);
            }
          }
          piStack_278 = (int *)0x0;
          CPet__SetName(psVar10 + 4);
          ppiStack_11c = (int **)auStack_12c;
          auStack_12c[0] = 0;
          ppiStack_118 = ppiStack_11c;
          FUN_100e5aa0(ppiStack_11c);
          FUN_104d1670("strFastestPassName",ppiStack_11c);
          if ((ppiStack_110 != &piStack_124) && (ppiStack_110 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_110);
          }
          if (pcStack_274 != (char *)0x0) {
            FUN_10c3da30(pcStack_274);
          }
        }
      }
      (**(code **)(*piStack_264 + 0x14))
                (ppiStack_25c,"infoData",&piStack_294,((byte)pcStack_260 & 0x8f) == 10);
      if (((uint)pcStack_220 >> 6 & 1) != 0) {
        (**(code **)(*piStack_224 + 8))(&piStack_224,piStack_21c);
        piStack_224 = (int *)0x0;
      }
      pcStack_220 = (char *)0x0;
      if ((uStack_238 >> 6 & 1) != 0) {
        (**(code **)(*piStack_23c + 8))(&piStack_23c,pcStack_234);
        piStack_23c = (int *)0x0;
      }
      uStack_238 = 0;
      if (((uint)pcStack_200 >> 6 & 1) != 0) {
        (**(code **)(*piStack_204 + 8))(&piStack_204,pcStack_1fc);
        piStack_204 = (int *)0x0;
      }
      pcStack_200 = (char *)0x0;
      if (((uint)ppuStack_1e8 >> 6 & 1) != 0) {
        (**(code **)(*piStack_1ec + 8))(&piStack_1ec,ppuStack_1e4);
        piStack_1ec = (int *)0x0;
      }
      ppuStack_1e8 = (undefined1 **)0x0;
      if (((uint)piStack_2a0 >> 6 & 1) != 0) {
        (*(code *)(*ppiStack_2a4)[2])(&ppiStack_2a4,pcStack_29c);
        ppiStack_2a4 = (int **)0x0;
      }
      piStack_2a0 = (int *)0x0;
      if (((uint)pppuStack_1d0 >> 6 & 1) != 0) {
        (*(code *)(*pppuStack_1d4)[2])(&pppuStack_1d4,pppuStack_1cc);
        pppuStack_1d4 = (undefined1 ***)0x0;
      }
      pppuStack_1d0 = (undefined1 ***)0x0;
      FUN_108f62b0();
    }
  }
  if (((uint)local_164 >> 6 & 1) != 0) {
    ppiStack_1b0 = &local_168;
    piStack_1ac = local_160;
    pcStack_1b4 = (char *)0x109764cb;
    (**(code **)(*local_168 + 8))();
  }
LAB_109764cb:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10976e80 @ 10976e80  size=158 ===== */
// calls: CLevelRewardInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CLevelRewardInfo"

/* [RE-AUTO c0]
   calls: CLevelRewardInfo::GetManagers
   strings:
     ""CLevelRewardInfo"" */

undefined4 FUN_10976e80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dde838;
  puVar2 = (undefined4 *)CLevelRewardInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CLevelRewardInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c0430 & 1) == 0) {
        DAT_123c0430 = DAT_123c0430 | 1;
        FUN_1097cce0();
        FUN_11a8911f(&LAB_11c7a040);
      }
      puVar3 = &DAT_123c03bc;
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



/* ===== FUN_109772d0 @ 109772d0  size=1189 ===== */
// strings:
//   "_openDetailInfoView"
//   "InstanceSelect_getHubPageInfo"
//   "InstanceSelect_QuickStartInstance"
//   "InstanceSelect_QuickMatchInstance"
//   "InstanceSelect_PreSelectInstance"
//   "InstanceSelect_RequireInstanceRewardShow"
//   "InstanceSelect_GetInstanceReward"
//   "InstanceSelect_getSpecHubInfo"
//   "InstanceSelect_UnlockEliteLevel"
//   "InstanceSelect_GetEliteUnlockInfo"
//   "InstanceSelect_getLevelGroupLimit"

/* [RE-AUTO c0]
   strings:
     ""_openDetailInfoView""
     ""InstanceSelect_getHubPageInfo""
     ""InstanceSelect_QuickStartInstance""
     ""InstanceSelect_QuickMatchInstance""
     ""InstanceSelect_PreSelectInstance""
     ""InstanceSelect_RequireInstanceRewardShow""
     ""InstanceSelect_GetInstanceReward""
     ""InstanceSelect_getSpecHubInfo""
     ""InstanceSelect_UnlockEliteLevel""
     ""InstanceSelect_GetEliteUnlockInfo"" */

void FUN_109772d0(void)

{
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int *piStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (in_stack_00000014 == 6) {
    local_98 = (int *)0x0;
    local_94 = in_stack_00000010[1];
    local_8c = in_stack_00000010[3];
    local_90 = in_stack_00000010[2];
    local_88 = in_stack_00000010[4];
    if ((local_94 >> 6 & 1) != 0) {
      local_98 = (int *)*in_stack_00000010;
      (**(code **)(*local_98 + 4))(&local_98,local_90);
    }
    local_34 = in_stack_00000010[7];
    local_2c = in_stack_00000010[9];
    local_30 = in_stack_00000010[8];
    local_28 = in_stack_00000010[10];
    local_38 = (int *)0x0;
    if ((local_34 >> 6 & 1) != 0) {
      local_38 = (int *)in_stack_00000010[6];
      (**(code **)(*local_38 + 4))(&local_38,local_30);
    }
    uStack_1c = in_stack_00000010[0xd];
    uStack_14 = in_stack_00000010[0xf];
    uStack_18 = in_stack_00000010[0xe];
    uStack_10 = in_stack_00000010[0x10];
    piStack_20 = (int *)0x0;
    if ((uStack_1c >> 6 & 1) != 0) {
      piStack_20 = (int *)in_stack_00000010[0xc];
      (**(code **)(*piStack_20 + 4))(&piStack_20,uStack_18);
    }
    uStack_4c = in_stack_00000010[0x13];
    uStack_44 = in_stack_00000010[0x15];
    uStack_48 = in_stack_00000010[0x14];
    uStack_40 = in_stack_00000010[0x16];
    piStack_50 = (int *)0x0;
    if ((uStack_4c >> 6 & 1) != 0) {
      piStack_50 = (int *)in_stack_00000010[0x12];
      (**(code **)(*piStack_50 + 4))(&piStack_50,uStack_48);
    }
    uStack_7c = in_stack_00000010[0x19];
    uStack_74 = in_stack_00000010[0x1b];
    uStack_78 = in_stack_00000010[0x1a];
    uStack_70 = in_stack_00000010[0x1c];
    piStack_80 = (int *)0x0;
    if ((uStack_7c >> 6 & 1) != 0) {
      piStack_80 = (int *)in_stack_00000010[0x18];
      (**(code **)(*piStack_80 + 4))(&piStack_80,uStack_78);
    }
    uStack_64 = in_stack_00000010[0x1f];
    uStack_5c = in_stack_00000010[0x21];
    uStack_60 = in_stack_00000010[0x20];
    uStack_58 = in_stack_00000010[0x22];
    piStack_68 = (int *)0x0;
    if ((uStack_64 >> 6 & 1) != 0) {
      piStack_68 = (int *)in_stack_00000010[0x1e];
      (**(code **)(*piStack_68 + 4))(&piStack_68,uStack_60);
    }
    FUN_104d13b0("_openDetailInfoView",&DAT_10977780);
    FUN_104d13b0("InstanceSelect_getHubPageInfo",FUN_109777a0);
    FUN_104d13b0("InstanceSelect_QuickStartInstance",FUN_10979020);
    FUN_104d13b0("InstanceSelect_QuickMatchInstance",FUN_109790a0);
    FUN_104d13b0("InstanceSelect_PreSelectInstance",FUN_10979100);
    FUN_104d13b0("InstanceSelect_RequireInstanceRewardShow",FUN_1097a150);
    FUN_104d13b0("InstanceSelect_GetInstanceReward",FUN_1097a410);
    FUN_104d13b0("InstanceSelect_getSpecHubInfo",FUN_10977e30);
    FUN_104d13b0("InstanceSelect_getSpecHubInfo",FUN_10977e30);
    FUN_104d13b0("InstanceSelect_UnlockEliteLevel",FUN_109793b0);
    FUN_104d13b0("InstanceSelect_GetEliteUnlockInfo",FUN_10979840);
    FUN_104d13b0("InstanceSelect_getSpecHubInfo",FUN_10977e30);
    FUN_104d13b0("InstanceSelect_UnlockEliteLevel",FUN_109793b0);
    FUN_104d13b0("InstanceSelect_GetEliteUnlockInfo",FUN_10979840);
    FUN_104d13b0("InstanceSelect_getSpecHubInfo",FUN_10977e30);
    FUN_104d13b0("InstanceSelect_getLevelGroupLimit",FUN_10979ea0);
    FUN_104d13b0("InstanceSelect_UnlockEliteLevel",FUN_109793b0);
    FUN_104d13b0("InstanceSelect_GetEliteUnlockInfo",FUN_10979840);
    FUN_104d13b0("InstanceSelect_getSpecHubInfo",FUN_10977e30);
    FUN_104d13b0("InstanceSelect_getLevelGroupLimit",FUN_10979ea0);
    FUN_104d13b0("InstanceSelect_UnlockEliteLevel",FUN_109793b0);
    FUN_104d13b0("InstanceSelect_GetEliteUnlockInfo",FUN_10979840);
    if ((uStack_64 >> 6 & 1) != 0) {
      (**(code **)(*piStack_68 + 8))(&piStack_68,uStack_60);
      piStack_68 = (int *)0x0;
    }
    uStack_64 = 0;
    if ((uStack_7c >> 6 & 1) != 0) {
      (**(code **)(*piStack_80 + 8))(&piStack_80,uStack_78);
      piStack_80 = (int *)0x0;
    }
    uStack_7c = 0;
    if ((uStack_4c >> 6 & 1) != 0) {
      (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
      piStack_50 = (int *)0x0;
    }
    uStack_4c = 0;
    if ((uStack_1c >> 6 & 1) != 0) {
      (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
      piStack_20 = (int *)0x0;
    }
    uStack_1c = 0;
    if ((local_34 >> 6 & 1) != 0) {
      (**(code **)(*local_38 + 8))(&local_38,local_30);
      local_38 = (int *)0x0;
    }
    local_34 = 0;
    if ((local_94 >> 6 & 1) != 0) {
      (**(code **)(*local_98 + 8))(&local_98,local_90);
    }
  }
  return;
}



/* ===== FUN_10977e30 @ 10977e30  size=4566 ===== */
// calls: CMHLevelInfo::CollectHubEntryConfigs, CMHLevelInfo::CollectHubRaidConfigs, CMHLevelInfo::CollectHubKingQuests, CMHLevelInfo::CollectHubLetterQuests, CMHLevelInfo::CollectHubPageStarLevelQuests, CPet::SetName
// strings:
//   "isHasAdvantage"
//   "levelID"
//   "levelMod"
//   "levelShowType"
//   "levelLockType"
//   "levelPointIndex"
//   "isReward"
//   "isStarHunt"
//   "hasWarning"
//   "levelIconName"
//   "levelDifficultType"
//   "isValidLevel"
//   "appraisal"
//   "bDoubleReward"
//   "bIsRed"
//   "nFinishedStory"
//   "maxLimited"
//   "SubPageID"
//   "isElite"
//   "strSubPageTitle"

/* [RE-AUTO c0]
   strings:
     ""isHasAdvantage""
     ""levelID""
     ""levelMod""
     ""levelShowType""
     ""levelLockType""
     ""levelPointIndex""
     ""isReward""
     ""isStarHunt""
     ""hasWarning""
     ""levelIconName"" */

void FUN_10977e30(int ******param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int ******ppppppiVar4;
  int iVar5;
  int *****pppppiVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *piVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int ***unaff_EBX;
  int ******ppppppiVar12;
  undefined4 *puVar13;
  byte unaff_SI;
  int *******pppppppiVar14;
  int *unaff_EDI;
  bool bVar15;
  int *****pppppiStack_1ec;
  int ******ppppppiStack_1e8;
  int *****pppppiStack_1e4;
  int ***pppiStack_1e0;
  int ******ppppppiStack_1dc;
  int *****pppppiStack_1d8;
  int *****pppppiStack_1d4;
  int *****pppppiStack_1d0;
  int *****pppppiStack_1cc;
  int *****pppppiStack_1c8;
  int *****pppppiStack_1c4;
  int *****pppppiStack_1c0;
  int *****pppppiStack_1bc;
  int *****pppppiStack_1b8;
  int ******ppppppiStack_1b4;
  int *piStack_1a4;
  int *****local_1a0;
  int *local_19c;
  undefined1 *puStack_198;
  int *piStack_194;
  int *****pppppiStack_190;
  int *piStack_18c;
  int ******ppppppiStack_188;
  undefined4 uStack_184;
  int *****pppppiStack_174;
  int ****local_170;
  int *****local_16c;
  undefined4 *puStack_168;
  int ******ppppppiStack_164;
  int ******ppppppiStack_160;
  undefined4 uStack_15c;
  int *****pppppiStack_158;
  undefined4 uStack_154;
  int *****local_150;
  undefined4 uStack_14c;
  int *piStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  undefined8 uStack_118;
  int ****local_110;
  uint local_10c;
  int ******local_108;
  undefined4 local_104;
  int local_100;
  int iStack_fc;
  int ****ppppiStack_e8;
  int *****pppppiStack_dc;
  undefined1 auStack_d4 [32];
  int ***pppiStack_b4;
  undefined1 auStack_b0 [4];
  int ***pppiStack_ac;
  uint uStack_a8;
  int ****ppppiStack_a4;
  int ****ppppiStack_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  undefined1 auStack_94 [4];
  int ****ppppiStack_90;
  int *****pppppiStack_8c;
  int *****pppppiStack_88;
  int *****pppppiStack_84;
  int ****ppppiStack_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_1a4;
  local_150 = (int *****)param_1;
  local_170 = (int ****)0x0;
  if (param_5 == 7) {
    uVar3 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      local_1a0 = *(int ******)(param_4 + 8);
    }
    else {
      local_1a0 = (int *****)0xdeadbeaf;
    }
    uVar3 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar3 == 3) || (ppppppiVar12 = (int ******)0xdeadbeaf, uVar3 == 4)) {
      ppppppiVar12 = *(int *******)(param_4 + 0x20);
    }
    uVar3 = *(uint *)(param_4 + 0x34) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      local_19c = *(int **)(param_4 + 0x38);
    }
    else {
      local_19c = (int *)0xdeadbeaf;
    }
    local_104 = *(undefined4 *)(param_4 + 0x54);
    local_108 = *(int *******)(param_4 + 0x50);
    local_110 = (int ****)0x0;
    local_10c = *(uint *)(param_4 + 0x4c);
    local_100 = *(int *)(param_4 + 0x58);
    if ((local_10c >> 6 & 1) != 0) {
      local_110 = *(int *****)(param_4 + 0x48);
      pppppiStack_1b8 = &local_110;
      pppppiStack_1bc = (int *****)0x10977f19;
      ppppppiStack_1b4 = local_108;
      (*(code *)(*local_110)[1])();
    }
    if (((byte)*(uint *)(param_4 + 100) & 0x8f) == 6) {
      if ((*(uint *)(param_4 + 100) >> 6 & 1) == 0) {
        local_16c = *(int ******)(param_4 + 0x68);
      }
      else {
        local_16c = (int *****)**(undefined4 **)(param_4 + 0x68);
      }
    }
    else {
      local_16c = (int *****)&DAT_11d9d32b;
    }
    if (((byte)*(uint *)(param_4 + 0x7c) & 0x8f) == 6) {
      if ((*(uint *)(param_4 + 0x7c) >> 6 & 1) == 0) {
        puStack_198 = *(undefined1 **)(param_4 + 0x80);
      }
      else {
        puStack_198 = (undefined1 *)**(undefined4 **)(param_4 + 0x80);
      }
    }
    else {
      puStack_198 = &DAT_11d9d32b;
    }
    if (((byte)*(uint *)(param_4 + 0x94) & 0x8f) == 6) {
      puStack_168 = *(undefined4 **)(param_4 + 0x98);
      if ((*(uint *)(param_4 + 0x94) >> 6 & 1) != 0) {
        puStack_168 = (undefined4 *)*puStack_168;
      }
    }
    else {
      puStack_168 = (undefined4 *)&DAT_11d9d32b;
    }
    if ((int ******)local_16c != (int ******)0x0) {
      pppppiStack_158 = (int *****)0x0;
      if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) {
        ppppppiStack_1b4 = (int ******)0x10977fe8;
        ppppppiVar4 = (int ******)(**(code **)(*piVar9 + 0xb4))();
        pppppiStack_158 = (int *****)(int ******)0x0;
        if (ppppppiVar4 != (int ******)0x0) {
          pppppiStack_158 = (int *****)ppppppiVar4;
        }
      }
      pppppiVar6 = pppppiStack_158;
      pppppiStack_174 = (int *****)0x0;
      ppppppiStack_164 = (int ******)0x0;
      ppppppiStack_160 = (int ******)0x0;
      uStack_15c = 0;
      if ((int ******)pppppiStack_158 != (int ******)0x0) {
        if (local_19c == (int *)0x1) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x10978024;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          CMHLevelInfo__CollectHubEntryConfigs();
        }
        else if (local_19c == (int *)&DAT_00000004) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x1097803b;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          CMHLevelInfo__CollectHubRaidConfigs();
        }
        else if (local_19c == (int *)0x2) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x10978052;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          CMHLevelInfo__CollectHubKingQuests();
        }
        else if (local_19c == (int *)0x3) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x10978069;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          CMHLevelInfo__CollectHubLetterQuests();
        }
        else if (local_19c == (int *)&DAT_00000005) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x10978080;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          CMHLevelInfo__CollectHubPageStarLevelQuests();
        }
        else if (local_19c == (int *)&DAT_00000007) {
          ppppppiStack_1b4 = (int ******)&ppppppiStack_164;
          pppppiStack_1bc = local_1a0;
          pppppiStack_1c4 = (int *****)0x10978097;
          pppppiStack_1c0 = pppppiStack_158;
          pppppiStack_1b8 = (int *****)ppppppiVar12;
          FUN_1130bcd0();
        }
        pppppiStack_174 = (int *****)pppppiVar6[0xae0];
      }
      ppppiStack_e8 = pppppiVar6[0xac3];
      uStack_118 = 0;
      pppppppiVar11 = (int *******)ppppppiStack_164;
      pppppppiVar7 = (int *******)ppppppiStack_160;
      if (ppppppiStack_164 != ppppppiStack_160) {
        pppppiStack_dc = (int *****)(ppppppiVar12 + (int)local_1a0 * 0x19);
        uStack_14c = 0;
        uStack_154 = 0;
        pppppppiVar14 = (int *******)ppppppiStack_164;
        do {
          ppppppiStack_1b4 = (int ******)0x0;
          pppppiStack_1b8 = (int *****)0x0;
          pppppiStack_1bc = local_16c;
          pppppiStack_1c0 = (int *****)&pppppiStack_190;
          pppppiStack_190 = (int *****)0x0;
          piStack_18c = (int *)0x0;
          pppppiStack_1c4 = (int *****)0x10978114;
          FUN_11a98de0();
          puVar13 = puStack_168;
          if (puStack_168[0xaca] != 0) {
            pppppiStack_1c4 = (int *****)*pppppppiVar14;
            pppppiStack_1c8 = (int *****)0x10978129;
            uVar3 = FUN_1146eb00();
            pppppiStack_1c8 = (int *****)(uVar3 & 0xff);
            pppppiStack_1cc = (int *****)0x11ddecb8;
            pppppiStack_1d0 = (int *****)0x1097813d;
            FUN_104d15e0();
          }
          pppppiStack_1c4 = (int *****)*pppppppiVar14;
          pppppiStack_1c8 = (int *****)0x11dd7d18;
          pppppiStack_1cc = (int *****)0x10978152;
          FUN_104d1550();
          pppppiStack_1cc = (int *****)pppppppiVar14[1];
          pppppiStack_1d0 = (int *****)0x11ddecac;
          pppppiStack_1d4 = (int *****)0x10978165;
          FUN_104d1550();
          pppppiStack_1d4 = (int *****)pppppppiVar14[0xd];
          pppppiStack_1d8 = (int *****)0x11dded0c;
          ppppppiStack_1dc = (int ******)0x10978178;
          FUN_104d1550();
          ppppppiStack_1dc = pppppppiVar14[0xc];
          pppiStack_1e0 = (int ***)0x11ddecfc;
          pppppiStack_1e4 = (int *****)0x1097818b;
          FUN_104d1550();
          pppppiStack_1e4 = (int *****)pppppppiVar14[2];
          ppppppiStack_1e8 = (int ******)0x11ddecec;
          pppppiStack_1ec = (int *****)0x1097819e;
          FUN_104d1550();
          pppppiStack_1ec = (int *****)pppppppiVar14[4];
          FUN_104d1550(&DAT_11ddece4);
          FUN_104d1550(&DAT_11ddee40,pppppppiVar14[5]);
          FUN_104d15e0("isReward",*(undefined1 *)(pppppppiVar14 + 7));
          pppppiStack_1c4 = (int *****)*pppppppiVar14;
          pppppiStack_1c8 = (int *****)0x109781e3;
          local_100 = FUN_107d7930();
          if (local_100 != 0) {
            pppppiStack_1c4 = (int *****)(uint)*(byte *)(local_100 + 0x2b1);
            pppppiStack_1c8 = (int *****)0x11ddee34;
            pppppiStack_1cc = (int *****)0x10978209;
            FUN_104d15e0();
          }
          pppppiStack_1c4 = (int *****)(uint)*(byte *)((int)pppppppiVar14 + 0x1d);
          pppppiStack_1c8 = (int *****)0x11dd7d70;
          pppppiStack_1cc = (int *****)0x10978221;
          FUN_104d15e0();
          auStack_38[0] = 0;
          pppppiStack_1c4 = (int *****)auStack_38;
          pppppiStack_1c8 = (int *****)0x1097824a;
          puStack_28 = (undefined1 *)pppppiStack_1c4;
          puStack_24 = (undefined1 *)pppppiStack_1c4;
          FUN_100e5aa0();
          pppppiStack_1c8 = (int *****)puStack_28;
          pppppiStack_1cc = (int *****)0x11ddee24;
          pppppiStack_1d0 = (int *****)0x10978261;
          FUN_104d1670();
          if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
            pppppiStack_1c8 = (int *****)puStack_28;
            pppppiStack_1cc = (int *****)0x10978280;
            FUN_10c3d5d0();
          }
          pppppiStack_1c8 = (int *****)pppppppiVar14[6];
          pppppiStack_1cc = (int *****)0x11ddee10;
          pppppiStack_1d0 = (int *****)0x10978296;
          FUN_104d1550();
          pppppiStack_1d0 = (int *****)(uint)*(byte *)(pppppppiVar14 + 0xb);
          pppppiStack_1d4 = (int *****)0x11ddee68;
          pppppiStack_1d8 = (int *****)0x109782ab;
          FUN_104d15e0();
          pppppiStack_1d8 = (int *****)pppppppiVar14[0x1a];
          ppppppiStack_1dc = (int ******)0x11dd7d64;
          pppiStack_1e0 = (int ***)0x109782be;
          FUN_104d1550();
          if (iStack_fc != 0) {
            pppppiStack_1c8 = (int *****)*pppppppiVar14;
            pppppiStack_1cc = (int *****)0x109782d5;
            uVar3 = FUN_115312e0();
            pppppiStack_1cc = (int *****)(uVar3 & 0xff);
            pppppiStack_1d0 = (int *****)0x11dd7d38;
            pppppiStack_1d4 = (int *****)0x109782e9;
            FUN_104d15e0();
            pppppiStack_1cc = (int *****)0x109782f7;
            iVar5 = FUN_1025b060();
            pppppiStack_1cc = (int *****)(uint)(iVar5 == 1);
            pppppiStack_1d0 = (int *****)0x11dd7d30;
            pppppiStack_1d4 = (int *****)0x10978311;
            FUN_104d15e0();
          }
          pppppiStack_1c8 = (int *****)0x10978320;
          FUN_108f61f0();
          pppppiStack_1c8 = (int *****)auStack_d4;
          pppppiStack_1cc = (int *****)(uint)*(byte *)((int)pppppppiVar14 + 0x1d);
          pppppiStack_1d0 = (int *****)*pppppppiVar14;
          pppppiStack_1d4 = (int *****)puVar13;
          pppppiStack_1d8 = (int *****)0x10978335;
          FUN_1130cd50();
          pppppiStack_1c8 = (int *****)0x8;
          pppppiStack_1cc = (int *****)0x10978346;
          pppppiStack_1cc = (int *****)FUN_1130cb50();
          pppppiStack_1d0 = (int *****)0x11dde5f8;
          pppppiStack_1d4 = (int *****)0x10978357;
          FUN_104d1550();
          pppppiStack_1cc = (int *****)0x8;
          pppppiStack_1d0 = (int *****)0x10978368;
          iVar5 = FUN_1130bb80();
          if (iVar5 != 0) {
            pppppiStack_1d0 = *(int ******)(iVar5 + 8);
            pppppiStack_1d4 = (int *****)0x11ddee5c;
            pppppiStack_1d8 = (int *****)0x1097837f;
            FUN_104d1550();
          }
          pppppiStack_1d0 = (int *****)pppppppiVar14[0x1b];
          pppppiStack_1d4 = (int *****)0x11ddee50;
          pppppiStack_1d8 = (int *****)0x10978395;
          FUN_104d1550();
          pppppiStack_1d8 = (int *****)(uint)*(byte *)(pppppppiVar14 + 0x1c);
          ppppppiStack_1dc = (int ******)0x11ddee48;
          pppiStack_1e0 = (int ***)0x109783aa;
          FUN_104d15e0();
          ppiStack_4c = &piStack_6c;
          piStack_6c = (int *)((uint)piStack_6c & 0xffff0000);
          pppppiStack_1d0 = (int *****)&piStack_6c;
          pppppiStack_1d4 = (int *****)0x109783dc;
          ppiStack_48 = ppiStack_4c;
          FUN_100e5b60();
          pppppiStack_1d4 = (int *****)ppiStack_4c;
          pppppiStack_1d8 = (int *****)0x11ddedb0;
          ppppppiStack_1dc = (int ******)0x109783f3;
          FUN_104d1700();
          if ((ppiStack_4c != &piStack_70) && (ppiStack_4c != (int **)0x0)) {
            pppppiStack_1d4 = (int *****)ppiStack_4c;
            pppppiStack_1d8 = (int *****)0x10978412;
            FUN_10c3d5d0();
          }
          pppppiStack_1d4 = (int *****)pppppppiVar14[0x1b];
          pppppiStack_1d8 = (int *****)0x11ddeda4;
          ppppppiStack_1dc = (int ******)0x10978428;
          FUN_104d1550();
          if ((pppppppiVar14[0xc] == (int ******)0x0) &&
             ((int ******)pppppiStack_190 != *pppppppiVar14)) {
            ppppppiVar12 = pppppppiVar14[0x1f];
            if (((int)local_16c <= (int)ppppppiVar12) &&
               (((int)local_16c < (int)ppppppiVar12 || (pppppiStack_174 < pppppppiVar14[0x1e])))) {
              pppppiStack_190 = (int *****)*pppppppiVar14;
              pppppiStack_174 = (int *****)pppppppiVar14[0x1e];
              local_16c = (int *****)ppppppiVar12;
            }
          }
          if ((int *******)ppppppiStack_188 != (int *******)0x0) {
            pppppiStack_1d4 = (int *****)*pppppppiVar14;
            pppppiStack_1d8 = (int *****)0x1097846b;
            iVar5 = FUN_10976e80();
            pppppiStack_1bc = (int *****)0x0;
            if (iVar5 != 0) {
              pppppiStack_1d4 = (int *****)0x0;
              pppppiStack_1d8 = (int *****)0x10978480;
              FUN_11827020();
              pppppiStack_1d8 = (int *****)0x10978487;
              pppppiStack_1bc = (int *****)FUN_10976ff0();
            }
            pppppiVar6 = pppppiStack_1bc;
            if ((int ******)pppppiStack_1bc != (int ******)0x0) {
              pppppiStack_1d8 = (int *****)&piStack_70;
              piStack_70 = (int *)0x0;
              piStack_6c = (int *)0x0;
              local_10c = CONCAT31(local_10c._1_3_,(unaff_SI & 0x8f) == 10);
              pppppiStack_1d4 = (int *****)local_10c;
              ppppppiStack_1dc = (int ******)0x11dded90;
              pppppiStack_1e4 = (int *****)0x109784e3;
              pppiStack_1e0 = unaff_EBX;
              cVar1 = (**(code **)(*unaff_EDI + 0x10))();
              if ((cVar1 != '\0') &&
                 (pppppiVar6 = (int *****)pppppiVar6[5], pppppiVar6 != (int *****)pppppiStack_1bc[6]
                 )) {
                do {
                  pppppiStack_1d4 = (int *****)0x0;
                  pppppiStack_1d8 = (int *****)0x0;
                  ppppppiStack_1dc = ppppppiStack_188;
                  pppiStack_1e0 = &ppiStack_48;
                  ppiStack_48 = (int **)0x0;
                  uStack_44 = 0;
                  pppppiStack_1e4 = (int *****)0x1097852d;
                  FUN_11a98de0();
                  pppppiStack_1e4 = (int *****)*pppppppiVar14;
                  ppppppiStack_1e8 = (int ******)0x11dd7d18;
                  pppppiStack_1ec = (int *****)0x10978542;
                  FUN_104d1550();
                  pppppiStack_1ec = (int *****)*pppppiVar6;
                  FUN_104d1550("MaterialID");
                  FUN_104d1550("minCounts",pppppiVar6[1]);
                  FUN_104d1550("maxCounts",pppppiVar6[2]);
                  FUN_104d1550("bindType",pppppiVar6[3]);
                  pppppiStack_1e4 = (int *****)&piStack_58;
                  ppppppiStack_1e8 = (int ******)ppppiStack_78;
                  pppppiStack_1ec = (int *****)0x109785b7;
                  (*(code *)(*ppppiStack_80)[0xf])();
                  if ((uStack_44 >> 6 & 1) != 0) {
                    pppppiStack_1d8 = (int *****)&ppiStack_48;
                    pppppiStack_1d4 = (int *****)uStack_40;
                    ppppppiStack_1dc = (int ******)0x109785e0;
                    (*(code *)(*ppiStack_48)[2])();
                  }
                  pppppiVar6 = pppppiVar6 + 6;
                } while (pppppiVar6 != (int *****)pppppiStack_1bc[6]);
              }
              if (((uint)piStack_6c >> 6 & 1) != 0) {
                pppppiStack_1d8 = (int *****)&piStack_70;
                pppppiStack_1d4 = (int *****)piStack_68;
                ppppppiStack_1dc = (int ******)0x10978619;
                (**(code **)(*piStack_70 + 8))();
              }
            }
          }
          pppppiStack_1d8 = (int *****)&puStack_168;
          puStack_168 = (undefined4 *)0x0;
          ppppppiStack_164 = (int ******)0x0;
          uStack_118 = CONCAT71(uStack_118._1_7_,(unaff_SI & 0x8f) == 10);
          pppppiStack_1d4 = (int *****)(uint)uStack_118;
          ppppppiStack_1dc = (int ******)0x11ddede0;
          pppppiStack_1e4 = (int *****)0x1097865c;
          pppiStack_1e0 = unaff_EBX;
          cVar1 = (**(code **)(*unaff_EDI + 0x10))();
          if (((cVar1 != '\0') && (piStack_1a4 != (int *)0x0)) &&
             (ppppppiVar12 = pppppppiVar14[0x14], pppppiVar6 = pppppiStack_1c8, piVar9 = piStack_1a4
             , ppppppiVar12 != pppppppiVar14[0x15])) {
            do {
              if (pppppiVar6 != (int *****)0x0) {
                ppppppiStack_1e8 = (int ******)0x10978690;
                pppppiStack_1e4 = (int *****)ppppppiVar12;
                uVar2 = (**(code **)(*piVar9 + 0x48))();
                ppppppiStack_1e8 = (int ******)0x0;
                pppppiStack_1ec = (int *****)0x0;
                uStack_118 = CONCAT71(uStack_118._1_7_,uVar2);
                uStack_5c = 0;
                piStack_58 = (int *)0x0;
                FUN_11a98de0(&uStack_5c,pppppiStack_1cc);
                FUN_104d1550("unlockType",*ppppppiVar12);
                FUN_104d1550("unlockParam1",ppppppiVar12[1]);
                FUN_104d1550("unlockParam2",ppppppiVar12[2]);
                FUN_104d15e0("unlock",uStack_128);
                pppppiStack_1d8 = (int *****)0x0;
                CPet__SetName(&DAT_11d9d32b);
                ppppppiStack_1e8 = (int ******)0x0;
                CPet__SetName(&DAT_11d9d32b);
                FUN_10979420(ppppppiVar12);
                ppppiStack_9c = (int ****)((uint)ppppiStack_9c & 0xffffff00);
                pppppiStack_8c = &ppppiStack_9c;
                pppppiStack_88 = pppppiStack_8c;
                FUN_100e5aa0(pppppiStack_8c);
                FUN_104d1670("nameString",pppppiStack_8c);
                if ((pppppiStack_8c != &ppppiStack_a0) &&
                   ((int ******)pppppiStack_8c != (int ******)0x0)) {
                  FUN_10c3d5d0(pppppiStack_8c);
                }
                ppppiStack_90 = (int ****)&ppppiStack_a0;
                ppppiStack_a0 = (int ****)((uint)ppppiStack_a0 & 0xffffff00);
                pppppiStack_8c = (int *****)ppppiStack_90;
                FUN_100e5aa0(ppppiStack_90);
                FUN_104d1670("extraInfoString",ppppiStack_90);
                if (((int *****)ppppiStack_90 != &ppppiStack_a4) &&
                   ((int *****)ppppiStack_90 != (int *****)0x0)) {
                  FUN_10c3d5d0(ppppiStack_90);
                }
                (**(code **)(*local_19c + 0x3c))(piStack_194,&ppppiStack_7c);
                if (pppppiStack_1d0 != (int *****)0x0) {
                  pppppiStack_1e4 = pppppiStack_1d0;
                  ppppppiStack_1e8 = (int ******)0x10978848;
                  FUN_10c3da30();
                }
                if (pppppiStack_1c4 != (int *****)0x0) {
                  pppppiStack_1e4 = pppppiStack_1c4;
                  ppppppiStack_1e8 = (int ******)0x10978859;
                  FUN_10c3da30();
                }
                pppppiVar6 = pppppiStack_1c8;
                piVar9 = piStack_1a4;
                if ((uStack_54 >> 6 & 1) != 0) {
                  ppppppiStack_1e8 = (int ******)&piStack_58;
                  pppppiStack_1e4 = (int *****)uStack_50;
                  pppppiStack_1ec = (int *****)0x10978885;
                  (**(code **)(*piStack_58 + 8))();
                  pppppiVar6 = pppppiStack_1c8;
                  piVar9 = piStack_1a4;
                }
              }
              ppppppiVar12 = ppppppiVar12 + 6;
            } while (ppppppiVar12 != pppppppiVar14[0x15]);
          }
          pppppiStack_1e4 = (int *****)local_10c;
          ppppppiStack_1e8 = (int ******)0x109788a5;
          iVar5 = FUN_10976cc0();
          ppppppiStack_1e8 = (int ******)&ppppppiStack_160;
          ppppppiStack_160 = (int ******)0x0;
          uStack_15c = 0;
          uStack_124 = CONCAT31(uStack_124._1_3_,((byte)pppppiStack_1bc & 0x8f) == 10);
          pppppiStack_1e4 = (int *****)uStack_124;
          pppppiStack_1ec = (int *****)0x11ddedc0;
          cVar1 = (*(code *)(*pppppiStack_1c0)[4])(pppppiStack_1b8);
          if ((((cVar1 != '\0') && (iVar5 != 0)) &&
              (ppppppiVar12 = (int ******)FUN_116b8be0(pppppppiVar14[0x1b]),
              ppppppiStack_1dc = ppppppiVar12, ppppppiVar12 != (int ******)0x0)) &&
             (((int *******)ppppppiStack_1b4 != (int *******)0x0 &&
              (puVar13 = ppppppiVar12[4], pppppiVar6 = pppppiStack_1d8,
              pppppppiVar11 = (int *******)ppppppiStack_1b4, (int *****)puVar13 != ppppppiVar12[5]))
             )) {
            do {
              if (pppppiVar6 != (int *****)0x0) {
                cVar1 = (*(code *)(*pppppppiVar11)[0x12])(puVar13);
                uStack_124 = CONCAT31(uStack_124._1_3_,cVar1);
                if (((pppiStack_1e0[3] != (int **)0x1) && (pppiStack_1e0[3] != (int **)0x0)) &&
                   (cVar1 == '\0')) goto LAB_10978ed2;
                piStack_6c = (int *)0x0;
                piStack_68 = (int *)0x0;
                FUN_11a98de0(&piStack_6c,ppppppiStack_1dc,0,0);
                FUN_104d1550("unlockType",*puVar13);
                FUN_104d1550("unlockParam1",puVar13[1]);
                FUN_104d1550("unlockParam2",puVar13[2]);
                FUN_104d15e0("unlock",piStack_134);
                CPet__SetName(&DAT_11d9d32b);
                pppppiStack_1ec = (int *****)0x0;
                CPet__SetName(&DAT_11d9d32b);
                FUN_10979420(puVar13);
                pppiStack_ac = (int ***)((uint)pppiStack_ac & 0xffffff00);
                ppppiStack_9c = &pppiStack_ac;
                ppppiStack_98 = ppppiStack_9c;
                FUN_100e5aa0(ppppiStack_9c);
                FUN_104d1670("nameString",ppppiStack_9c);
                if ((ppppiStack_9c != (int ****)auStack_b0) &&
                   ((int *****)ppppiStack_9c != (int *****)0x0)) {
                  FUN_10c3d5d0(ppppiStack_9c);
                }
                ppppiStack_a0 = (int ****)auStack_b0;
                auStack_b0[0] = 0;
                ppppiStack_9c = ppppiStack_a0;
                FUN_100e5aa0(ppppiStack_a0);
                FUN_104d1670("extraInfoString",ppppiStack_a0);
                if ((ppppiStack_a0 != &pppiStack_b4) && ((int *****)ppppiStack_a0 != (int *****)0x0)
                   ) {
                  FUN_10c3d5d0(ppppiStack_a0);
                }
                (**(code **)(*piStack_194 + 0x3c))(piStack_18c,&pppppiStack_8c);
                if (pppppiStack_1d4 != (int *****)0x0) {
                  FUN_10c3da30(pppppiStack_1d4);
                }
                if (pppiStack_1e0 != (int ***)0x0) {
                  FUN_10c3da30(pppiStack_1e0);
                }
                ppppppiVar12 = ppppppiStack_1dc;
                pppppiVar6 = pppppiStack_1d8;
                pppppppiVar11 = (int *******)ppppppiStack_1b4;
                if ((uStack_64 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_68 + 8))(&piStack_68,uStack_60);
                  ppppppiVar12 = ppppppiStack_1dc;
                  pppppiVar6 = pppppiStack_1d8;
                  pppppppiVar11 = (int *******)ppppppiStack_1b4;
                }
              }
              puVar13 = puVar13 + 6;
            } while ((int *****)puVar13 != ppppppiVar12[5]);
          }
          pppppppiVar7 = (int *******)pppppppiVar14[0xf];
          pppppppiVar11 = pppppppiVar14 + 0xe;
          ppppppiVar12 = (int ******)0x0;
          pppppppiVar10 = pppppppiVar11;
          if (pppppppiVar7 == (int *******)0x0) {
LAB_10978baf:
            if (pppppppiVar10 != pppppppiVar11) {
              ppppppiVar12 = pppppppiVar10[5];
            }
          }
          else {
            do {
              if ((int)pppppppiVar7[4] < 1) {
                pppppppiVar8 = (int *******)pppppppiVar7[3];
              }
              else {
                pppppppiVar8 = (int *******)pppppppiVar7[2];
                pppppppiVar10 = pppppppiVar7;
              }
              pppppppiVar7 = pppppppiVar8;
            } while (pppppppiVar8 != (int *******)0x0);
            if (pppppppiVar10 != pppppppiVar11) {
              if (1 < (int)pppppppiVar10[4]) {
                pppppppiVar10 = pppppppiVar11;
              }
              goto LAB_10978baf;
            }
          }
          if (param_2 != 0) {
            ppppiStack_90 = (int ****)0x0;
            pppppiStack_8c = (int *****)0x3;
            pppppiStack_88 = (int *****)ppppppiVar12;
            (*(code *)(*pppppiStack_1d0)[5])
                      (pppppiStack_1c8,"warningTimeRest",&ppppiStack_90,
                       ((byte)pppppiStack_1cc & 0x8f) == 10);
            if (((uint)pppppiStack_8c >> 6 & 1) != 0) {
              (*(code *)(*ppppiStack_90)[2])(&ppppiStack_90,pppppiStack_88);
            }
          }
          ppppiStack_80 = (int ****)&ppppiStack_90;
          ppppiStack_90 = (int ****)((uint)ppppiStack_90 & 0xffffff00);
          ppppiStack_7c = ppppiStack_80;
          FUN_100e5aa0(ppppiStack_80);
          FUN_104d1670("LevelName",ppppiStack_80);
          if ((ppppiStack_80 != (int ****)auStack_94) &&
             ((int *****)ppppiStack_80 != (int *****)0x0)) {
            FUN_10c3d5d0(ppppiStack_80);
          }
          pppppiStack_84 = (int *****)auStack_94;
          auStack_94[0] = 0;
          ppppiStack_80 = (int ****)pppppiStack_84;
          FUN_100e5aa0(pppppiStack_84);
          FUN_104d1670("LevelShowName",pppppiStack_84);
          if ((pppppiStack_84 != &ppppiStack_98) && (pppppiStack_84 != (int *****)0x0)) {
            FUN_10c3d5d0(pppppiStack_84);
          }
          pppppiStack_88 = &ppppiStack_98;
          ppppiStack_98 = (int ****)((uint)ppppiStack_98 & 0xffffff00);
          pppppiStack_84 = pppppiStack_88;
          FUN_100e5aa0(pppppiStack_88);
          bVar15 = (int ******)pppppiStack_88 != (int ******)0x0;
          if ((pppppiStack_88 != &ppppiStack_9c) && ((int ******)pppppiStack_88 != (int ******)0x0))
          {
            FUN_10c3d5d0(pppppiStack_88);
          }
          if (bVar15) {
            ppppiStack_7c = (int ****)&ppppiStack_9c;
            ppppiStack_9c = (int ****)((uint)ppppiStack_9c & 0xffff0000);
            ppppiStack_78 = ppppiStack_7c;
            FUN_100e5b60(&ppppiStack_9c);
            FUN_104d1700("BossName",ppppiStack_7c);
            if (((int *****)ppppiStack_78 != &ppppiStack_9c) &&
               ((int *****)ppppiStack_78 != (int *****)0x0)) {
              FUN_10c3d5d0(ppppiStack_78);
            }
          }
          uStack_124 = 0;
          uStack_120 = 0;
          ppppppiStack_164 =
               (int ******)CONCAT31(ppppppiStack_164._1_3_,((byte)pppppiStack_1d8 & 0x8f) == 10);
          cVar1 = (**(code **)((int)*ppppppiStack_1dc + 0x10))
                            (pppppiStack_1d4,"arrayNextLevelIndex",&uStack_124,ppppppiStack_164);
          if ((cVar1 != '\0') &&
             (ppppppiVar12 = pppppppiVar14[0x17], ppppppiVar12 != pppppppiVar14[0x18])) {
            do {
              ppppiStack_a4 = (int ****)*ppppppiVar12;
              pppiStack_ac = (int ***)0x0;
              uStack_a8 = 3;
              (**(code **)(*piStack_134 + 0x3c))(uStack_12c,&pppiStack_ac);
              if ((uStack_a8 >> 6 & 1) != 0) {
                (*(code *)(*pppiStack_ac)[2])(&pppiStack_ac,ppppiStack_a4);
              }
              ppppppiVar12 = ppppppiVar12 + 1;
            } while (ppppppiVar12 != pppppppiVar14[0x18]);
          }
          (*(code *)(*local_16c)[0xf])(ppppppiStack_164,&pppppiStack_1ec);
          if (((uint)uStack_118 >> 6 & 1) != 0) {
            (**(code **)(*piStack_11c + 8))(&piStack_11c,uStack_118._4_4_);
            piStack_11c = (int *)0x0;
          }
          uStack_118 = uStack_118 & 0xffffffff00000000;
LAB_10978ed2:
          if (((uint)local_170 >> 6 & 1) != 0) {
            (*(code *)(*pppppiStack_174)[2])(&pppppiStack_174,local_16c);
            pppppiStack_174 = (int *****)0x0;
          }
          local_170 = (int ****)0x0;
          if (((uint)ppppppiStack_188 >> 6 & 1) != 0) {
            (**(code **)(*piStack_18c + 8))(&piStack_18c,uStack_184);
            piStack_18c = (int *)0x0;
          }
          ppppppiStack_188 = (int ******)0x0;
          FUN_108f62b0();
          if (((uint)piStack_18c >> 6 & 1) != 0) {
            pppppiStack_1b8 = (int *****)&pppppiStack_190;
            ppppppiStack_1b4 = ppppppiStack_188;
            pppppiStack_1bc = (int *****)0x10978f67;
            (*(code *)(*pppppiStack_190)[2])();
          }
          pppppppiVar14 = pppppppiVar14 + 0x20;
          pppppppiVar11 = (int *******)ppppppiStack_164;
          pppppppiVar7 = (int *******)ppppppiStack_160;
        } while (pppppppiVar14 != (int *******)ppppppiStack_160);
      }
      for (; ppppppiVar12 = ppppppiStack_164, pppppppiVar7 != (int *******)ppppppiStack_164;
          pppppppiVar7 = pppppppiVar7 + -0x20) {
        ppppppiStack_1b4 = (int ******)0x10978f8a;
        ppppppiStack_164 = (int ******)pppppppiVar11;
        FUN_1097da70();
        pppppppiVar11 = (int *******)ppppppiStack_164;
        ppppppiStack_164 = ppppppiVar12;
      }
      ppppppiStack_164 = (int ******)pppppppiVar11;
      if (pppppppiVar11 != (int *******)0x0) {
        pppppiStack_1b8 = (int *****)0x10978f9c;
        ppppppiStack_1b4 = (int ******)pppppppiVar11;
        FUN_10c3d5d0();
      }
    }
    if ((local_10c >> 6 & 1) != 0) {
      pppppiStack_1b8 = &local_110;
      ppppppiStack_1b4 = local_108;
      pppppiStack_1bc = (int *****)0x10978fc8;
      (*(code *)(*local_110)[2])();
    }
  }
  pppppiVar6 = local_150;
  if (((uint)local_150[1] >> 6 & 1) == 0) {
    local_150[2] = local_170;
  }
  else {
    ppppppiStack_1b4 = (int ******)local_150[2];
    pppppiStack_1bc = (int *****)0x10978fe5;
    pppppiStack_1b8 = local_150;
    (*(code *)(**local_150)[2])();
    *pppppiVar6 = (int ****)0x0;
    pppppiVar6[2] = local_170;
  }
  pppppiVar6[1] = (int ****)0x3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1097a150 @ 1097a150  size=696 ===== */
// strings:
//   "hubId"
//   "chapterInfo"
//   "numReward"
//   "rewardId"
//   "titleInfo"
//   "stateReward"

/* [RE-AUTO c0]
   strings:
     ""hubId""
     ""chapterInfo""
     ""numReward""
     ""rewardId""
     ""titleInfo""
     ""stateReward"" */

void FUN_1097a150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [16];
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_54;
  local_28 = param_2;
  if (param_5 == 1) {
    local_48 = (int *)0x0;
    local_44 = param_4[1];
    local_3c = param_4[3];
    local_40 = param_4[2];
    local_38 = param_4[4];
    if ((local_44 >> 6 & 1) != 0) {
      local_48 = (int *)*param_4;
      (**(code **)(*local_48 + 4))(&local_48,local_40);
    }
    local_2c = 0;
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
       (iVar1 = (**(code **)(*piVar3 + 0xb4))(), local_2c = 0, iVar1 != 0)) {
      local_2c = iVar1;
    }
    iStack_54 = 0;
    iStack_50 = -5;
    if (local_2c != 0) {
      iVar1 = 0;
      iStack_4c = 0;
      iVar2 = FUN_10976b80();
      if (0 < iVar2) {
        do {
          piVar3 = (int *)FUN_10976af0(iVar1);
          if (piVar3 != (int *)0x0) {
            iVar1 = 0;
            do {
              iVar2 = FUN_116b8a70(iVar1);
              if (iVar2 != 0) {
                uVar4 = (**(code **)(*piVar3 + 0x18))(*(undefined4 *)(iVar2 + 4),&iStack_54);
                iStack_50 = FUN_1130c880(local_2c,uVar4);
                if ((0 < iStack_54) && (iStack_50 != 1)) {
                  uVar4 = (**(code **)(*piVar3 + 0x18))();
                  FUN_104d1550("hubId",uVar4);
                  FUN_104d1550("chapterInfo",*(undefined4 *)(iVar2 + 4));
                  FUN_104d1550("numReward",1);
                  FUN_104d1550("rewardId",iStack_54);
                  auStack_24[0] = 0;
                  puStack_14 = (undefined4 *)auStack_24;
                  puStack_10 = puStack_14;
                  FUN_100e5aa0(puStack_14);
                  FUN_104d1670("titleInfo",puStack_14);
                  if ((puStack_14 != &local_28) && (puStack_14 != (undefined4 *)0x0)) {
                    FUN_10c3d5d0(puStack_14);
                  }
                  iVar2 = iStack_54;
                  if (iStack_54 == -1) {
                    FUN_104d1550("stateReward",0);
                  }
                  else {
                    FUN_104d1550("stateReward",1);
                  }
                  break;
                }
              }
              iVar1 = iVar1 + 1;
              iVar2 = iStack_50;
            } while (iVar1 < 0x20);
            if ((0 < iStack_54) && (iVar1 = iStack_4c, iVar2 != 1)) break;
          }
          iVar1 = iStack_4c + 1;
          iStack_4c = iVar1;
          iVar2 = FUN_10976b80();
        } while (iVar1 < iVar2);
      }
      iVar2 = FUN_10976b80();
      if (iVar2 <= iVar1) {
        FUN_104d1550("hubId",iVar1);
        FUN_104d1550("chapterInfo",0xffffffff);
        FUN_104d1550("numReward",1);
        FUN_104d1550("rewardId",0xffffffff);
        FUN_104d1550("stateReward",2);
      }
    }
    if ((local_44 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 8))(&local_48,local_40);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1097c720 @ 1097c720  size=88 ===== */
// calls: CLevelRegularRewardInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CLevelRegularRewardInfo"

/* [RE-AUTO c0]
   calls: CLevelRegularRewardInfo::GetManagers
   strings:
     ""CLevelRegularRewardInfo"" */

undefined * FUN_1097c720(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dde830;
  puVar1 = (undefined4 *)CLevelRegularRewardInfo__GetManager();
  puVar2 = (undefined *)*puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)CInfoManager__FindByName(&local_8,"CLevelRegularRewardInfo",0);
    if (puVar2 == (undefined *)0x0) {
      if ((DAT_123c03f4 & 1) == 0) {
        DAT_123c03f4 = DAT_123c03f4 | 1;
        FUN_1097cd80();
        FUN_11a8911f(&LAB_11c79fe0);
      }
      puVar2 = &DAT_123c03f8;
    }
  }
  return puVar2;
}



/* ===== FUN_1097fd80 @ 1097fd80  size=1572 ===== */
// strings:
//   "ITEM_VO_CLASSNAME"
//   "itemList"
//   "count"
//   "asset"
//   "collumn"
//   "isBind"
//   "m_nBindType"
//   "m_nFactItemLevel"
//   "m_nTransmogrifyItemId"
//   "m_bCanQuench"
//   "m_nMaxQuenchLevel"
//   "m_nQuenchLevel"

/* [RE-AUTO c0]
   strings:
     ""ITEM_VO_CLASSNAME""
     ""itemList""
     ""count""
     ""asset""
     ""collumn""
     ""isBind""
     ""m_nBindType""
     ""m_nFactItemLevel""
     ""m_nTransmogrifyItemId""
     ""m_bCanQuench"" */

void FUN_1097fd80(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int **ppiVar10;
  int iStack_d4;
  uint uStack_d0;
  int *piStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_6c;
  int *piStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_4c;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  uint uStack_38;
  int iStack_34;
  int *piStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint auStack_18 [5];
  
  auStack_18[3] = DAT_11e11390 ^ (uint)&iStack_d4;
  local_6c = param_1;
  local_8c = param_2;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 2) {
    local_88 = (int *)0x0;
    local_84 = param_4[1];
    local_7c = param_4[3];
    local_80 = param_4[2];
    local_78 = param_4[4];
    if ((local_84 >> 6 & 1) != 0) {
      local_88 = (int *)*param_4;
      (**(code **)(*local_88 + 4))(&local_88,local_80);
    }
    uStack_b4 = param_4[9];
    uStack_bc = param_4[7];
    uStack_b8 = param_4[8];
    uStack_b0 = param_4[10];
    piStack_c0 = (int *)0x0;
    if ((uStack_bc >> 6 & 1) != 0) {
      piStack_c0 = (int *)param_4[6];
      (**(code **)(*piStack_c0 + 4))(&piStack_c0,uStack_b8);
    }
    if (((byte)uStack_bc & 0x8f) == 9) {
      piStack_48 = (int *)0x0;
      uStack_44 = 0;
      FUN_11a98a70(&piStack_48);
      local_6c = (undefined4 *)0x0;
      piStack_68 = (int *)0x0;
      uStack_d0 = CONCAT31(uStack_d0._1_3_,((byte)local_88 & 0x8f) == 10);
      uStack_c8 = 0;
      (**(code **)(*local_8c + 0x10))(local_84,"ITEM_VO_CLASSNAME",&local_6c,uStack_d0);
      iStack_d4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if (iStack_d4 != 0) {
        auStack_18[0] = 0;
        auStack_18[1] = 2;
        auStack_18[2] = 10;
        piStack_cc = (int *)0x0;
        do {
          uVar8 = auStack_18[(int)piStack_cc];
          uStack_d0 = uVar8;
          uStack_4c = FUN_113f92a0(uVar8);
          uStack_c8 = 0;
          if (uStack_4c != 0) {
            do {
              piVar3 = (int *)FUN_113f9bb0(uVar8,uStack_c8);
              if (piVar3 != (int *)0x0) {
                iVar4 = FUN_11669250();
                uVar9 = 0;
                iVar5 = (**(code **)(*piStack_c0 + 0x28))(uStack_b8);
                uVar8 = uStack_d0;
                if (iVar5 != 0) {
                  do {
                    ppiVar10 = &piStack_30;
                    piStack_30 = (int *)0x0;
                    uStack_2c = 0;
                    uVar8 = uStack_b8;
                    (**(code **)(*piStack_c0 + 0x30))(uStack_b8,uVar9,ppiVar10);
                    if (((uStack_38 & 0x8f) == 3) || (iVar5 = -0x21524151, (uStack_38 & 0x8f) == 4))
                    {
                      iVar5 = iStack_34;
                    }
                    if (iVar5 == *(int *)(iVar4 + 0x10)) {
                      uStack_b4 = 0;
                      uStack_b0 = 0;
                      FUN_11a98de0(&uStack_b4,uStack_d0,0,0);
                      FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar4 + 0x10));
                      uVar7 = (**(code **)(*piVar3 + 0xc))();
                      FUN_104d1440("count",uVar7);
                      FUN_104d1670("asset",*(undefined4 *)(iVar4 + 0xb4));
                      uVar9 = uVar8;
                      FUN_104d1550("collumn",uVar8);
                      FUN_104d1440(&DAT_11dbfe78,ppiVar10);
                      FUN_104d15e0("isBind",piVar3[8] != 0);
                      uVar7 = FUN_116693d0();
                      FUN_104d1550("m_nBindType",uVar7);
                      uVar7 = (**(code **)(*piVar3 + 0x18))();
                      FUN_104d1550("m_nFactItemLevel",uVar7);
                      cVar2 = FUN_116698a0();
                      if (cVar2 != '\0') {
                        FUN_104d1440("m_nTransmogrifyItemId",piVar3[0x7d]);
                        uVar7 = FUN_11669730();
                        iVar4 = FUN_1052bdd0(uVar7);
                        if (iVar4 != 0) {
                          FUN_104d15e0("m_bCanQuench",*(int *)(iVar4 + 0x28c) != 0);
                          FUN_104d1550("m_nMaxQuenchLevel",*(undefined4 *)(iVar4 + 0x290));
                          uVar8 = uVar9;
                          FUN_104d1550("m_nQuenchLevel",(short)piVar3[0x7e]);
                        }
                      }
                      (**(code **)(*piStack_64 + 0x3c))(uStack_5c,&uStack_c4);
                      if ((uStack_a4 >> 6 & 1) != 0) {
                        (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
                        piStack_a8 = (int *)0x0;
                      }
                      uStack_a4 = 0;
                      if ((uStack_2c >> 6 & 1) != 0) {
                        (**(code **)(*piStack_30 + 8))(&piStack_30,uStack_28);
                      }
                      break;
                    }
                    if ((uStack_38 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_3c + 8))(&piStack_3c,iStack_34);
                    }
                    uVar9 = uVar9 + 1;
                    uVar6 = (**(code **)(*piStack_cc + 0x28))(uStack_c4);
                    uVar8 = uStack_d0;
                  } while (uVar9 < uVar6);
                }
              }
              uStack_c8 = uStack_c8 + 1;
            } while (uStack_c8 < uStack_4c);
          }
          piStack_cc = (int *)((int)piStack_cc + 1);
        } while ((int)piStack_cc < 3);
        (**(code **)(*local_88 + 0x14))
                  (local_80,"itemList",&piStack_48,((byte)local_84 & 0x8f) == 10);
        puVar1 = local_6c;
        if (((uint)local_6c[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*local_6c + 8))(local_6c,local_6c[2]);
          *puVar1 = 0;
        }
        puVar1[1] = 2;
        *(undefined1 *)(puVar1 + 2) = 1;
      }
      if (((uint)piStack_64 >> 6 & 1) != 0) {
        (**(code **)(*piStack_68 + 8))(&piStack_68,uStack_60);
        piStack_68 = (int *)0x0;
      }
      piStack_64 = (int *)0x0;
      if ((uStack_44 >> 6 & 1) != 0) {
        (**(code **)(*piStack_48 + 8))(&piStack_48,uStack_40);
        piStack_48 = (int *)0x0;
      }
      uStack_44 = 0;
    }
    if ((uStack_bc >> 6 & 1) != 0) {
      (**(code **)(*piStack_c0 + 8))(&piStack_c0,uStack_b8);
      piStack_c0 = (int *)0x0;
    }
    uStack_bc = 0;
    if ((local_84 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 8))(&local_88,local_80);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109803b0 @ 109803b0  size=1488 ===== */
// strings:
//   "ITEM_VO_CLASSNAME"
//   "count"
//   "asset"
//   "collumn"
//   "m_typeNormal"
//   "m_typeSub"
//   "isBind"
//   "m_nBindType"
//   "m_nFactItemLevel"
//   "m_nTransmogrifyItemId"
//   "m_bCanQuench"
//   "m_nMaxQuenchLevel"
//   "m_nQuenchLevel"
//   "m_nRareType"
//   "itemList"

/* [RE-AUTO c0]
   strings:
     ""ITEM_VO_CLASSNAME""
     ""count""
     ""asset""
     ""collumn""
     ""m_typeNormal""
     ""m_typeSub""
     ""isBind""
     ""m_nBindType""
     ""m_nFactItemLevel""
     ""m_nTransmogrifyItemId"" */

void FUN_109803b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *unaff_EDI;
  bool bVar7;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  int iStack_7c;
  int iStack_78;
  int *piStack_74;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  undefined4 *local_58;
  uint uStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  undefined4 *puStack_3c;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  uint auStack_18 [5];
  
  auStack_18[3] = DAT_11e11390 ^ (uint)&iStack_ac;
  local_58 = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 5) {
    local_70 = (int *)0x0;
    local_6c = param_4[1];
    local_64 = param_4[3];
    local_68 = param_4[2];
    local_60 = (int *)param_4[4];
    if ((local_6c >> 6 & 1) != 0) {
      local_70 = (int *)*param_4;
      (**(code **)(*local_70 + 4))(&local_70,local_68);
    }
    if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
      iStack_78 = param_4[8];
    }
    else {
      iStack_78 = -0x21524151;
    }
    if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
      piStack_74 = (int *)param_4[0xe];
    }
    else {
      piStack_74 = (int *)0xdeadbeaf;
    }
    if (((param_4[0x13] & 0x8f) == 3) || ((param_4[0x13] & 0x8f) == 4)) {
      iStack_a0 = param_4[0x14];
    }
    else {
      iStack_a0 = -0x21524151;
    }
    if (((param_4[0x19] & 0x8f) == 3) || ((param_4[0x19] & 0x8f) == 4)) {
      iStack_7c = param_4[0x1a];
    }
    else {
      iStack_7c = -0x21524151;
    }
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    FUN_11a98a70(&piStack_50);
    uStack_34 = 0;
    piStack_30 = (int *)0x0;
    iStack_ac = CONCAT31(iStack_ac._1_3_,((byte)local_70 & 0x8f) == 10);
    iStack_a8 = 0;
    cVar2 = (**(code **)(*piStack_74 + 0x10))(local_6c,"ITEM_VO_CLASSNAME",&uStack_34,iStack_ac);
    if (((cVar2 != '\0') && (((byte)uStack_40 & 0x8f) == 6)) &&
       (unaff_EDI = puStack_3c, (uStack_40 >> 6 & 1) != 0)) {
      unaff_EDI = (undefined4 *)*puStack_3c;
    }
    iStack_ac = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if (iStack_ac != 0) {
      auStack_18[0] = 0;
      auStack_18[1] = 2;
      auStack_18[2] = 10;
      iStack_a8 = 0;
      do {
        uVar6 = auStack_18[iStack_a8];
        uStack_54 = uVar6;
        uStack_34 = FUN_113f92a0(uVar6);
        uStack_9c = 0;
        if (uStack_34 != 0) {
          do {
            piVar3 = (int *)FUN_113f9bb0(uVar6,uStack_9c);
            if (((piVar3 != (int *)0x0) &&
                ((iVar4 = FUN_11669250(), iStack_78 < 0 || (iStack_78 == *(int *)(iVar4 + 0x34)))))
               && (((int)piStack_74 < 0 || (piStack_74 == *(int **)(iVar4 + 0x38))))) {
              if (iStack_7c == -1) {
                if (-1 < iStack_a0) {
                  bVar7 = iStack_a0 == *(int *)(iVar4 + 0x3c);
                  goto LAB_10980659;
                }
              }
              else if (((-1 < iStack_a0) && (iStack_a0 != *(int *)(iVar4 + 0x3c))) &&
                      (-1 < iStack_7c)) {
                bVar7 = iStack_7c == *(int *)(iVar4 + 0x3c);
LAB_10980659:
                if (!bVar7) goto LAB_10980863;
              }
              piStack_98 = (int *)0x0;
              uStack_94 = 0;
              FUN_11a98de0(&piStack_98,uStack_a4,0,0);
              FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar4 + 0x10));
              uVar5 = (**(code **)(*piVar3 + 0xc))();
              FUN_104d1440("count",uVar5);
              FUN_104d1670("asset",*(undefined4 *)(iVar4 + 0xb4));
              FUN_104d1550("collumn",auStack_28[(int)unaff_EDI]);
              FUN_104d1440(&DAT_11dbfe78,iStack_ac);
              FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar4 + 0x34));
              FUN_104d1550("m_typeNormal",*(undefined4 *)(iVar4 + 0x38));
              FUN_104d1550("m_typeSub",*(undefined4 *)(iVar4 + 0x3c));
              FUN_104d15e0("isBind",piVar3[8] != 0);
              uVar5 = FUN_116693d0();
              FUN_104d1550("m_nBindType",uVar5);
              uVar5 = (**(code **)(*piVar3 + 0x18))();
              FUN_104d1550("m_nFactItemLevel",uVar5);
              uVar5 = *(undefined4 *)(iVar4 + 0x4c);
              cVar2 = FUN_116698a0();
              if (cVar2 != '\0') {
                FUN_104d1440("m_nTransmogrifyItemId",piVar3[0x7d]);
                uVar5 = FUN_11669730();
                iVar4 = FUN_1052bdd0(uVar5);
                if (iVar4 != 0) {
                  FUN_104d15e0("m_bCanQuench",*(int *)(iVar4 + 0x28c) != 0);
                  FUN_104d1550("m_nMaxQuenchLevel",*(undefined4 *)(iVar4 + 0x290));
                  FUN_104d1550("m_nQuenchLevel",(short)piVar3[0x7e]);
                }
                uVar5 = (**(code **)(*piVar3 + 0x2c))();
              }
              FUN_104d1550("m_nRareType",uVar5);
              (**(code **)(*local_60 + 0x3c))(local_58,&iStack_a8);
              if ((uStack_94 >> 6 & 1) != 0) {
                (**(code **)(*piStack_98 + 8))(&piStack_98,uStack_90);
              }
            }
LAB_10980863:
            uStack_9c = uStack_9c + 1;
            uVar6 = uStack_54;
          } while (uStack_9c < uStack_34);
        }
        iStack_a8 = iStack_a8 + 1;
      } while (iStack_a8 < 3);
      (**(code **)(*local_70 + 0x14))(local_68,"itemList",&piStack_50,((byte)local_6c & 0x8f) == 10)
      ;
      puVar1 = local_58;
      if (((uint)local_58[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*local_58 + 8))(local_58,local_58[2]);
        *puVar1 = 0;
      }
      puVar1[1] = 2;
      *(undefined1 *)(puVar1 + 2) = 1;
    }
    if ((uStack_2c >> 6 & 1) != 0) {
      (**(code **)(*piStack_30 + 8))(&piStack_30,auStack_28[0]);
      piStack_30 = (int *)0x0;
    }
    uStack_2c = 0;
    if ((uStack_4c >> 6 & 1) != 0) {
      (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
      piStack_50 = (int *)0x0;
    }
    uStack_4c = 0;
    if ((local_6c >> 6 & 1) != 0) {
      (**(code **)(*local_70 + 8))(&local_70,local_68);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109814c0 @ 109814c0  size=2297 ===== */
// calls: CPet::SetName
// strings:
//   "mh.model.Ipvp.IpvpSettlementData"
//   "RedTeamScore"
//   "BlueTeamScore"
//   "PlayerLevel"
//   "PlayerName"
//   "Score"
//   "CatCar"
//   "mh.model.inventory.vo.BaseItemVo"
//   "count"
//   "Items"
//   "IpvpScoreCurrent"
//   "IpvpPowerCurrent"
//   "LeagueType"
//   "LeagueScoreChange"
//   "LeaguePowerChange"
//   "LeagueSelfScoreChange"
//   "LeagueCoinCurrent"
//   "LeagueCoinChange"
//   "LeaguePlayerFaction"
//   "LeagueModelMod"

/* WARNING: Removing unreachable block (ram,0x10981c25) */
/* [RE-AUTO c0]
   strings:
     ""mh.model.Ipvp.IpvpSettlementData""
     ""RedTeamScore""
     ""BlueTeamScore""
     ""PlayerLevel""
     ""PlayerName""
     ""Score""
     ""CatCar""
     ""mh.model.inventory.vo.BaseItemVo""
     ""count""
     ""Items"" */

void __thiscall FUN_109814c0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  int unaff_EDI;
  int *in_stack_00000018;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_f8;
  int iStack_f4;
  int iStack_f0;
  int *local_ec;
  int *piStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int *piStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  int **ppiStack_a4;
  int **ppiStack_a0;
  int iStack_9c;
  uint **ppuStack_98;
  undefined8 uStack_94;
  int ***pppiStack_8c;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_62;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&uStack_f8;
  local_ec = in_stack_00000018;
  local_cc = param_3;
  local_d4 = param_1;
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
      ((iStack_f4 = (**(code **)(*piVar1 + 0xb4))(), iStack_f4 != 0 &&
       (*(int *)(iStack_f4 + 0xc) != 0)))) &&
     (iStack_e0 = *(int *)(*(int *)(iStack_f4 + 0xc) + 0xb4), iStack_e0 != 0)) {
    iStack_f0 = *(int *)(iStack_e0 + 0xc);
    FUN_114c1210();
    piStack_e8 = (int *)0x0;
    if (0 < (*(int *)(iStack_f0 + 100) - *(int *)(iStack_f0 + 0x60)) / 0x430) {
      iVar4 = 0;
      iStack_d8 = *(int *)(iStack_f4 + 4);
      iVar7 = *(int *)(iStack_f0 + 0x60);
      do {
        iStack_e4 = iVar7;
        if (*(int *)(iStack_e4 + 4) == iStack_d8) {
          piStack_e8 = (int *)(iVar4 + 1);
          break;
        }
        iStack_d0 = iStack_e4 + 0x430;
        iVar4 = iVar4 + 1;
        iVar7 = iStack_d0;
        iStack_dc = iVar4;
      } while (iVar4 < (*(int *)(iStack_f0 + 100) - *(int *)(iStack_f0 + 0x60)) / 0x430);
      iVar7 = 0;
      pcVar6 = "mh.model.Ipvp.IpvpSettlementData";
      piVar1 = in_stack_00000018;
      FUN_11a98de0();
      FUN_104d15e0(&DAT_11da7668,*(undefined1 *)(iStack_e4 + 0x20));
      FUN_104d1550("RedTeamScore",*(undefined4 *)(unaff_EDI + 0x54));
      FUN_104d1550("BlueTeamScore",*(undefined4 *)(unaff_EDI + 0x58));
      FUN_104d1550("PlayerLevel",*(undefined4 *)(iStack_f4 + 0x408));
      CPet__SetName(iStack_f4 + 8);
      ppiStack_a4 = &piStack_b4;
      piStack_b4 = (int *)((uint)piStack_b4 & 0xffffff00);
      ppiStack_a0 = ppiStack_a4;
      FUN_100e5aa0(ppiStack_a4);
      FUN_104d1670("PlayerName",ppiStack_a4);
      if ((ppiStack_a4 != &piStack_b8) && (ppiStack_a4 != (int **)0x0)) {
        FUN_10c3d5d0(ppiStack_a4);
      }
      if (iVar7 != 0) {
        FUN_10c3da30(iVar7);
      }
      FUN_104d1550("Score",*(undefined4 *)(unaff_ESI + 0x40c));
      FUN_104d1550("CatCar",*(undefined4 *)(unaff_ESI + 0x414));
      FUN_104d1550(&DAT_11d9da08,0);
      iStack_e0 = 0;
      iStack_dc = 0;
      iStack_d8 = 0;
      FUN_114584c0(*(undefined4 *)(pcVar6 + 4));
      FUN_114549e0(&iStack_e4);
      FUN_11454bc0();
      iStack_d8 = 0;
      local_d4 = 0;
      FUN_11a98a70(&iStack_d8);
      piVar5 = local_ec;
      if (local_ec != piStack_e8) {
        do {
          in_stack_00000018 = piVar1;
          piStack_c4 = (int *)0x0;
          uStack_c0 = 0;
          FUN_11a98de0(&piStack_c4,"mh.model.inventory.vo.BaseItemVo",0,0);
          FUN_104d1440(&DAT_11dbb0b4,*piVar5);
          FUN_104d1440("count",piVar5[1]);
          (**(code **)(*local_ec + 0x3c))(iStack_e4,&local_d4);
          if ((uStack_c0 >> 6 & 1) != 0) {
            (**(code **)(*piStack_c4 + 8))(&piStack_c4,uStack_bc);
          }
          piVar5 = piVar5 + 4;
          piVar1 = in_stack_00000018;
        } while (piVar5 != piStack_e8);
      }
      piVar1 = (int *)(uint)(((byte)in_stack_00000018[1] & 0x8f) == 10);
      (**(code **)(*(int *)*in_stack_00000018 + 0x14))(in_stack_00000018[2],"Items",&iStack_dc);
      iVar7 = FUN_11398c50();
      if (iVar7 != 0) {
        FUN_11502b10(&piStack_b4);
        FUN_104d1550("IpvpScoreCurrent",uStack_6c);
        FUN_104d1550("IpvpPowerCurrent",uStack_68);
      }
      local_d4 = piVar1[0x9880];
      iStack_d0 = piVar1[0x9881];
      local_cc = piVar1[0x9882];
      iStack_c8 = piVar1[0x9883];
      pppiStack_8c = (int ***)CONCAT22(pppiStack_8c._2_2_,(short)piVar1[0x988a]);
      ppiStack_a4 = (int **)piVar1[0x9884];
      ppiStack_a0 = (int **)piVar1[0x9885];
      iStack_9c = piVar1[0x9886];
      ppuStack_98 = (uint **)piVar1[0x9887];
      uStack_94 = *(undefined8 *)(piVar1 + 0x9888);
      FUN_112fddf0();
      iVar7 = local_d4;
      FUN_104d1550("LeagueType",local_d4);
      FUN_104d1550("LeagueScoreChange",iStack_d0);
      FUN_104d1550("LeaguePowerChange",local_cc);
      iVar4 = iStack_c8;
      FUN_104d1550("LeagueSelfScoreChange",iStack_c8);
      uVar2 = FUN_1025b060();
      FUN_104d1550("LeagueCoinCurrent",uVar2);
      FUN_104d1550("LeagueCoinChange",iVar4);
      uVar2 = (**(code **)(*piVar1 + 0x44))();
      FUN_104d1550("LeaguePlayerFaction",uVar2);
      if (iVar7 == 4) {
        iVar7 = (**(code **)(*piVar1 + 0x4e4))();
        iVar7 = *(int *)(iVar7 + 0xc);
        iVar3 = FUN_115b73e0(iVar7);
        uStack_bc = FUN_115b73e0(iVar7 - iVar4);
        if ((iVar3 != 0) && (uStack_bc != 0)) {
          local_d4 = FUN_115b7350();
          iStack_d0 = iStack_dc / 100 + 1;
          iVar7 = iStack_e0 / 100 + 1;
          iStack_e0 = (iStack_dc / 100 + 1) * 100 - iStack_dc;
          piVar1 = &local_d4;
          if (iStack_d0 <= local_d4) {
            piVar1 = &iStack_d0;
          }
          iVar4 = *piVar1;
          iStack_d8 = CONCAT31(iStack_d8._1_3_,iVar4 == local_d4);
          if (iVar7 == iVar4) {
            piStack_e8 = (int *)0x1;
          }
          else if (iVar4 < iVar7) {
            piStack_e8 = (int *)0x3;
          }
          else {
            piStack_e8 = (int *)0x0;
            if (iVar7 < iVar4) {
              piStack_e8 = (int *)0x2;
            }
          }
          iStack_f4 = 0;
          CPet__SetName(&DAT_11d9d32b);
          FUN_104d1550("LeagueModelMod",uStack_6c);
          FUN_104d1550("LeagueWinScore",iStack_f4 - iStack_62);
          FUN_104d1550("LeagueRewardScore",iStack_62);
          FUN_104d1550("LeagueCurSelRankScore",iStack_e0);
          FUN_104d15e0("LeagueSelfMaxScore",iStack_dc);
          uStack_94 = CONCAT44(&ppiStack_a4,&ppiStack_a4);
          ppiStack_a4 = (int **)((uint)ppiStack_a4 & 0xffffff00);
          FUN_100e5aa0(&ppiStack_a4);
          FUN_104d1670("LeagueSelfStartRankPic",(uint **)uStack_94);
          if (((uint **)uStack_94 != &puStack_a8) && ((uint **)uStack_94 != (uint **)0x0)) {
            FUN_10c3d5d0((uint **)uStack_94);
          }
          ppuStack_98 = &puStack_a8;
          uStack_94 = CONCAT44(uStack_94._4_4_,ppuStack_98);
          puStack_a8 = (uint *)((uint)puStack_a8 & 0xffffff00);
          FUN_100e5aa0(ppuStack_98);
          FUN_104d1670("LeagueSelfEndRankPic",ppuStack_98);
          if ((ppuStack_98 != &puStack_ac) && (ppuStack_98 != (uint **)0x0)) {
            FUN_10c3d5d0(ppuStack_98);
          }
          FUN_104d1550("LeagueRangeUpperState",iStack_f4);
          if ((char)iStack_e4 == '\0') {
            FUN_100e5ed0(iStack_f0 + 0x94);
            uStack_f8 = 0;
            CPet__SetName(&DAT_11d9dcd4);
            FUN_100e5ed0(&stack0xffffff04);
            FUN_100e5ed0(unaff_ESI + 0x98);
            FUN_104d1550("LeagueSelfNextRemainScore",unaff_ESI);
            uStack_bc = uStack_bc & 0xffffff00;
            puStack_ac = &uStack_bc;
            puStack_a8 = puStack_ac;
            FUN_100e5aa0(puStack_ac);
            FUN_104d1670("LeagueSelfRank",puStack_ac);
            if ((pppiStack_8c != &ppiStack_a0) && (pppiStack_8c != (int ***)0x0)) {
              FUN_10c3d5d0(pppiStack_8c);
            }
          }
          else {
            FUN_104d1550("LeagueSelfNextRemainScore",0);
            FUN_104d1790("LeagueSelfRank",iStack_f0 + 0x9c);
          }
          if (iStack_f4 != 0) {
            FUN_10c3da30(iStack_f4);
          }
        }
      }
      else {
        FUN_104d1550("LeagueModelMod",0);
        FUN_104d1550("LeagueWinScore",0);
        FUN_104d1550("LeagueRewardScore",0);
        FUN_104d1550("LeagueCurSelRankScore",0);
        FUN_104d15e0("LeagueSelfMaxScore",0);
        FUN_104d1550("LeagueSelfNextRemainScore",0);
        FUN_104d1670("LeagueSelfRank",&DAT_11d9d32b);
        FUN_104d1670("LeagueSelfStartRankPic",&DAT_11d9d32b);
        FUN_104d1670("LeagueSelfEndRankPic",&DAT_11d9d32b);
        FUN_104d1550("LeagueRangeUpperState",0);
      }
      if (((uint)piStack_b4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_b8 + 8))(&piStack_b8,uStack_b0);
        piStack_b8 = (int *)0x0;
      }
      piStack_b4 = (int *)0x0;
      if (iStack_c8 != 0) {
        FUN_10c3d5d0(iStack_c8);
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109863d0 @ 109863d0  size=2398 ===== */
// strings:
//   "LEVELENTRUST_DETAILVO_CLASSNAME"
//   "nGroupID"
//   "nSubGroupID"
//   "nLevelID"
//   "bIsAccept"
//   "curEntrustCount"
//   "medalBaijinDesc"
//   "medaljinDesc"
//   "medalYinDesc"
//   "medalTongDesc"
//   "nLevelRecord"
//   "titleName"
//   "maxEntrustCount"
//   "strTargetArea"
//   "nLimitTime"
//   "needItemId"
//   "needItemCount"
//   "nRewardUnBindGold"
//   "nRewardBindGold"
//   "nRewardExp"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""LEVELENTRUST_DETAILVO_CLASSNAME""
     ""nGroupID""
     ""nSubGroupID""
     ""nLevelID""
     ""bIsAccept""
     ""curEntrustCount""
     ""medalBaijinDesc""
     ""medaljinDesc""
     ""medalYinDesc""
     ""medalTongDesc"" */

void FUN_109863d0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int ****ppppiVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int in_stack_00000010;
  int in_stack_00000014;
  int *****pppppiVar12;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int ****ppppiStack_128;
  char *pcStack_124;
  int ****ppppiStack_120;
  int ****ppppiStack_11c;
  uint local_10c;
  int ****local_108;
  int ****ppppiStack_104;
  int ***pppiStack_100;
  uint uStack_fc;
  int ****ppppiStack_f8;
  int *piStack_ec;
  byte bStack_e8;
  int iStack_e4;
  int ***pppiStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  int ***local_c8;
  int ***local_c4;
  int ****local_c0;
  int ***local_bc;
  int ***local_b8;
  int ****ppppiStack_b4;
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  int ****ppppiStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int **ppiStack_90;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_10c;
  if (in_stack_00000014 != 4) goto LAB_10986d17;
  uVar3 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
  if ((uVar3 == 3) || (uVar3 == 4)) {
    local_108 = *(int *****)(in_stack_00000010 + 8);
  }
  else {
    local_108 = (int ****)0xdeadbeaf;
  }
  uVar3 = *(uint *)(in_stack_00000010 + 0x1c) & 0x8f;
  if ((uVar3 == 3) || (iVar10 = -0x21524151, uVar3 == 4)) {
    iVar10 = *(int *)(in_stack_00000010 + 0x20);
  }
  uVar3 = *(uint *)(in_stack_00000010 + 0x34) & 0x8f;
  if ((uVar3 == 3) || (uVar11 = 0xdeadbeaf, uVar3 == 4)) {
    uVar11 = *(uint *)(in_stack_00000010 + 0x38);
  }
  local_c4 = *(int ****)(in_stack_00000010 + 0x4c);
  local_c0 = *(int *****)(in_stack_00000010 + 0x50);
  local_bc = *(int ****)(in_stack_00000010 + 0x54);
  local_b8 = *(int ****)(in_stack_00000010 + 0x58);
  local_c8 = (int ***)0x0;
  local_10c = uVar11;
  if (((uint)local_c4 >> 6 & 1) != 0) {
    local_c8 = *(int ****)(in_stack_00000010 + 0x48);
    ppppiStack_11c = *(int *****)(in_stack_00000010 + 0x50);
    ppppiStack_120 = &local_c8;
    pcStack_124 = (char *)0x10986498;
    (*(code *)(*local_c8)[1])();
  }
  ppppiStack_11c = (int ****)0x109864b1;
  iStack_e4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iStack_e4 != 0) {
    if ((((int *****)local_108 == (int *****)0x0) && (iVar10 == 0)) && (uVar11 == 0)) {
      piVar1 = *(int **)(iStack_e4 + 0x2b9c);
      if (piVar1 != (int *)0x0) {
        ppppiStack_120 = (int ****)0x109864de;
        ppppiStack_11c = (int ****)iVar10;
        piVar4 = (int *)(**(code **)(*piVar1 + 0x28))();
        if (piVar4 == (int *)0x0) {
          local_108 = (int ****)piVar1[0x12];
          iVar10 = piVar1[0x13];
          uVar11 = piVar1[0x14];
        }
        else {
          local_108 = (int ****)*piVar4;
          iVar10 = piVar4[1];
          uVar11 = piVar4[2];
        }
        local_10c = uVar11;
        if ((((int *****)local_108 != (int *****)0x0) || (iVar10 != 0)) || (uVar11 != 0))
        goto LAB_1098653a;
      }
      ppppiStack_11c = &pppiStack_e0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      pppiStack_e0 = (int ***)0x4b;
      uStack_dc = 0;
      ppppiStack_120 = (int ****)0x10986532;
      FUN_104ef270();
    }
    else {
LAB_1098653a:
      ppppiStack_120 = (int ****)&ppppiStack_b0;
      ppppiStack_b0 = (int ****)0x0;
      ppppiStack_ac = (int ****)0x0;
      ppppiStack_104 = (int ****)CONCAT31(ppppiStack_104._1_3_,((byte)local_c4 & 0x8f) == 10);
      ppppiStack_11c = ppppiStack_104;
      pcStack_124 = "LEVELENTRUST_DETAILVO_CLASSNAME";
      ppppiStack_128 = local_c0;
      uStack_12c = 0x10986577;
      cVar2 = (*(code *)(*local_c8)[4])();
      if ((cVar2 == '\0') || (((byte)local_bc & 0x8f) != 6)) {
        ppppiVar5 = (int ****)0x0;
      }
      else {
        ppppiVar5 = (int ****)local_b8;
        if (((uint)local_bc >> 6 & 1) != 0) {
          ppppiVar5 = (int ****)*local_b8;
        }
      }
      uStack_12c = 0;
      iStack_130 = 0;
      local_10c = 0;
      FUN_11a98de0(&stack0xfffffef0);
      FUN_104d1550("nGroupID",ppppiStack_128);
      FUN_104d1550("nSubGroupID",iVar10);
      FUN_104d1550("nLevelID",uVar11);
      pcStack_124 = (char *)((uint)pcStack_124 & 0xffffff00);
      if (((int ****)ppppiStack_104[0xae7] != (int ****)0x0) &&
         (iVar6 = (*(code *)(*ppppiStack_104[0xae7])[10])(0), iVar6 != 0)) {
        uVar8 = pcStack_124._0_1_;
        if (*(uint *)(iVar6 + 8) == uVar11) {
          uVar8 = 1;
        }
        pcStack_124 = (char *)CONCAT31(pcStack_124._1_3_,uVar8);
      }
      FUN_104d15e0("bIsAccept",pcStack_124);
      pppppiVar12 = (int *****)ppppiStack_128;
      uVar7 = (*(code *)(*ppppiStack_104[0xae6])[10])();
      FUN_104d1550("curEntrustCount",uVar7);
      iVar10 = FUN_104d83d0(iVar10);
      if (iVar10 != 0) {
        FUN_10987e90(&iStack_130);
        ppppiStack_b0 = (int ****)&local_c0;
        local_c0 = (int ****)((uint)local_c0 & 0xffffff00);
        ppppiStack_ac = ppppiStack_b0;
        FUN_100e5aa0(ppppiStack_b0);
        FUN_104d1670(&DAT_11dbac80,ppppiStack_b0);
        if ((ppppiStack_a8 != &local_bc) && ((int *****)ppppiStack_a8 != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_a8);
        }
      }
      iVar10 = FUN_107d7930(uVar11);
      if (((iVar10 != 0) && (iVar6 = FUN_116ae4c0(), iVar6 != 0)) &&
         (iStack_130 = FUN_1175b200(1), iStack_130 != 0)) {
        ppppiStack_ac = &local_bc;
        piStack_a4 = (int *)0x0;
        uStack_a0 = 0;
        local_bc = (int ***)((uint)local_bc & 0xffffff00);
        ppppiStack_a8 = ppppiStack_ac;
        FUN_100e5aa0(ppppiStack_ac);
        FUN_104d1670("medalBaijinDesc",ppppiStack_ac);
        if (((int *****)ppppiStack_ac != &local_c0) && ((int *****)ppppiStack_ac != (int *****)0x0))
        {
          FUN_10c3d5d0(ppppiStack_ac);
        }
        ppppiStack_b0 = (int ****)&local_c0;
        local_c0 = (int ****)((uint)local_c0 & 0xffffff00);
        ppppiStack_ac = ppppiStack_b0;
        FUN_100e5aa0(ppppiStack_b0);
        FUN_104d1670("medaljinDesc",ppppiStack_b0);
        if ((ppppiStack_b0 != &local_c4) && ((int *****)ppppiStack_b0 != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_b0);
        }
        ppppiStack_b4 = &local_c4;
        local_c4 = (int ***)((uint)local_c4 & 0xffffff00);
        ppppiStack_b0 = ppppiStack_b4;
        FUN_100e5aa0(ppppiStack_b4);
        FUN_104d1670("medalYinDesc",ppppiStack_b4);
        if ((ppppiStack_b4 != &local_c8) && ((int *****)ppppiStack_b4 != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_b4);
        }
        local_b8 = (int ***)&local_c8;
        local_c8 = (int ***)((uint)local_c8 & 0xffffff00);
        ppppiStack_b4 = (int ****)local_b8;
        FUN_100e5aa0(local_b8);
        FUN_104d1670("medalTongDesc",local_b8);
        if ((ppppiStack_a8 != &local_bc) && ((int *****)ppppiStack_a8 != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_a8);
        }
        if ((uStack_a0 >> 6 & 1) != 0) {
          (**(code **)(*piStack_a4 + 8))(&piStack_a4,ppppiStack_9c);
        }
      }
      if (((int ****)local_108[0xae2] == (int ****)0x0) ||
         (iVar6 = FUN_114cd4a0(uVar11), iVar6 == 0)) {
        iVar6 = 0;
      }
      FUN_104d1550("nLevelRecord",iVar6);
      iStack_130 = FUN_104d8540(uStack_12c);
      if (iStack_130 != 0) {
        ppppiStack_ac = &local_bc;
        local_bc = (int ***)((uint)local_bc & 0xffffff00);
        ppppiStack_a8 = ppppiStack_ac;
        FUN_100e5aa0(ppppiStack_ac);
        FUN_104d1670("titleName",ppppiStack_ac);
        if (((int *****)ppppiStack_ac != &local_c0) && ((int *****)ppppiStack_ac != (int *****)0x0))
        {
          FUN_10c3d5d0(ppppiStack_ac);
        }
        iVar6 = (**(code **)(**(int **)(local_10c + 0x2b98) + 0x20))(iStack_130,ppppiVar5[0xc]);
        FUN_104d1440("maxEntrustCount",(int)pppppiVar12[0xb] + iVar6);
      }
      if ((iVar10 != 0) && (*(int *)(iVar10 + 0x24) != 0)) {
        if (*(int *)(iVar10 + 0x18) != 0) {
          iVar6 = FUN_100e5b40(&piStack_a4);
          FUN_104d1670("strTargetArea",*(undefined4 *)(iVar6 + 0x14));
          if ((ppiStack_90 != &piStack_a4) && (ppiStack_90 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_90);
          }
        }
        FUN_104d1550("nLimitTime",*(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x40));
        iVar10 = FUN_116ae260(3);
        if (iVar10 != 0) {
          FUN_104d1550("needItemId",*(undefined4 *)(iVar10 + 4));
          FUN_104d1550("needItemCount",*(undefined4 *)(iVar10 + 8));
        }
      }
      FUN_104d1550("nRewardUnBindGold",0);
      FUN_104d1550("nRewardBindGold",0);
      FUN_104d1550("nRewardExp",0);
      iVar10 = FUN_117380d0(uVar11);
      if (iVar10 != 0) {
        local_bc = (int ***)0x0;
        local_b8 = (int ***)0x0;
        FUN_11a98a70(&local_bc);
        iVar9 = *(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c);
        local_108 = (int ****)0x0;
        iVar6 = iVar9 >> 0x1f;
        ppppiStack_104 = (int ****)0x0;
        uStack_134 = 0;
        if (iVar9 / 0x54 + iVar6 != iVar6) {
          iVar6 = 0;
          do {
            FUN_10914570(*(int *)(iVar10 + 0x1c) + iVar6);
            ppppiStack_9c = (int ****)&ppppiStack_ac;
            ppppiStack_ac = (int ****)((uint)ppppiStack_ac & 0xffffff00);
            ppppiStack_98 = ppppiStack_9c;
            FUN_100e5aa0(ppppiStack_9c);
            ppppiVar5 = ppppiStack_9c;
            if ((local_10c >> 6 & 1) != 0) {
              (**(code **)(_DAT_00000000 + 8))(&stack0xfffffef0,local_108);
            }
            local_10c = 6;
            local_108 = ppppiVar5;
            if (((int *****)ppppiStack_9c != &ppppiStack_b0) &&
               ((int *****)ppppiStack_9c != (int *****)0x0)) {
              FUN_10c3d5d0(ppppiStack_9c);
            }
            (*(code *)(*local_c8)[0xf])(local_c0,&stack0xfffffef0);
            FUN_11736f30();
            iVar6 = iVar6 + 0x54;
            uStack_134 = uStack_134 + 1;
          } while (uStack_134 < (uint)((*(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c)) / 0x54));
        }
        (*(code *)(*ppppiStack_128)[5])
                  (ppppiStack_120,"strOtherTargetArr",&local_c0,((byte)pcStack_124 & 0x8f) == 10);
        if (((uint)pppiStack_100 >> 6 & 1) != 0) {
          (*(code *)(*ppppiStack_104)[2])(&ppppiStack_104,uStack_fc);
          ppppiStack_104 = (int ****)0x0;
        }
        pppiStack_100 = (int ***)0x0;
        if (((uint)local_b8 >> 6 & 1) != 0) {
          (*(code *)(*local_bc)[2])(&local_bc,ppppiStack_b4);
        }
      }
      (**(code **)(*piStack_ec + 0x14))
                (iStack_e4,"detailEntrustData",&pcStack_124,(bStack_e8 & 0x8f) == 10);
      if ((uStack_fc >> 6 & 1) != 0) {
        ppppiStack_120 = &pppiStack_100;
        ppppiStack_11c = ppppiStack_f8;
        pcStack_124 = (char *)0x10986cbd;
        (*(code *)(*pppiStack_100)[2])();
        pppiStack_100 = (int ***)0x0;
      }
      uStack_fc = 0;
      if (((uint)ppppiStack_ac >> 6 & 1) != 0) {
        ppppiStack_120 = (int ****)&ppppiStack_b0;
        ppppiStack_11c = ppppiStack_a8;
        pcStack_124 = (char *)0x10986cea;
        (*(code *)(*ppppiStack_b0)[2])();
        ppppiStack_b0 = (int ****)0x0;
      }
      ppppiStack_ac = (int ****)0x0;
    }
  }
  if (((uint)local_c4 >> 6 & 1) != 0) {
    ppppiStack_120 = &local_c8;
    ppppiStack_11c = local_c0;
    pcStack_124 = (char *)0x10986d17;
    (*(code *)(*local_c8)[2])();
  }
LAB_10986d17:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109899f0 @ 109899f0  size=609 ===== */
// strings:
//   "InitModel"
//   "FetchActivityData"
//   "FetchStaticData"
//   "FetchPlayerData"
//   "DeliverItem"
//   "DrawReward"
//   "DrawFinalReward"
//   "IsPrizeDrawn"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""FetchActivityData""
     ""FetchStaticData""
     ""FetchPlayerData""
     ""DeliverItem""
     ""DrawReward""
     ""DrawFinalReward""
     ""IsPrizeDrawn"" */

void FUN_109899f0(void)

{
  code *pcStack_a4;
  char *pcStack_a0;
  code **ppcStack_9c;
  code ***pppcStack_98;
  code *pcStack_94;
  code **ppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code **ppcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10989a24;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_1098ab20;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10989a35;
  FUN_1098ad10();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x10989a4b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddfbb1;
  pppuStack_40 = (undefined4 ***)0x11ddfba0;
  pppuStack_44 = (undefined4 ***)0x10989a6b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_1098a0f0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x10989a7c;
  FUN_1098ad10();
  if (((undefined4 ****)pppcStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppcStack_30 != (undefined4 ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10989a92;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppuStack_44;
  pppcStack_4c = (code ***)0x11ddfb9f;
  pppcStack_50 = (code ***)0x11ddfb90;
  pppcStack_54 = (code ***)0x10989ab2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1098aa00;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppuStack_5c = (undefined4 ***)0x10989ac3;
  FUN_1098ad10();
  if (((code ****)pppuStack_40 != &pppcStack_54) && ((code ****)pppuStack_40 != (code ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x10989ad9;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppcStack_54;
  pppuStack_5c = (undefined4 ***)0x11ddfb8f;
  pppcStack_60 = (code ***)0x11ddfb80;
  pppcStack_64 = (code ***)0x10989af9;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&DAT_10989f60;
  pppcStack_68 = (code ***)&pppuStack_5c;
  pppcStack_6c = (code ***)0x10989b0a;
  FUN_1098ad10();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10989b20;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11ddfb47;
  pppcStack_70 = (code ***)0x11ddfb3c;
  pppcStack_74 = (code ***)0x10989b40;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10989e00;
  pppuStack_78 = &pppcStack_6c;
  pppcStack_7c = (code ***)0x10989b51;
  FUN_1098ad10();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x10989b67;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11ddfb3a;
  ppcStack_80 = (code **)0x11ddfb30;
  ppcStack_84 = (code **)0x10989b87;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_84 = (code **)FUN_10989d80;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10989b98;
  FUN_1098ad10();
  if ((pppcStack_70 != &ppcStack_84) && (pppcStack_70 != (code ***)0x0)) {
    pppcStack_8c = pppcStack_70;
    ppcStack_90 = (code **)0x10989bae;
    FUN_10c3d5d0();
  }
  pppcStack_74 = &ppcStack_84;
  pppcStack_8c = (code ***)0x11ddfb2f;
  ppcStack_90 = (code **)0x11ddfb20;
  pcStack_94 = (code *)0x10989bce;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_10989c60;
  pppcStack_98 = (code ***)&pppcStack_8c;
  ppcStack_9c = (code **)0x10989bdf;
  FUN_1098ad10();
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    ppcStack_9c = ppcStack_80;
    pcStack_a0 = (char *)0x10989bf5;
    FUN_10c3d5d0();
  }
  ppcStack_84 = &pcStack_94;
  ppcStack_9c = (code **)0x11ddfb1c;
  pcStack_a0 = "IsPrizeDrawn";
  pcStack_a4 = (code *)0x10989c15;
  ppcStack_80 = ppcStack_84;
  FUN_100b62c0();
  pcStack_a4 = FUN_10989f70;
  FUN_1098ad10(&ppcStack_9c);
  if ((ppcStack_90 != &pcStack_a4) && (ppcStack_90 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_90);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1098bd60 @ 1098bd60  size=1035 ===== */
// strings:
//   "C2AS_GetStarStoneData"
//   "C2AS_FeedFragments"
//   "C2AS_FeedCheck"
//   "C2AS_GetAttributeByLevel"
//   "C2AS_GetRepairMoney"
//   "C2AS_RepairStone"
//   "C2AS_GetStarStoneMaxLevelExp"
//   "C2AS_GetStarFragmentAttribute"
//   "C2AS_EnchaseLights"
//   "C2AS_EnchaseCheck"
//   "C2AS_GetCurrentWeaponAttribute"
//   "C2AS_GetStarLightData"
//   "C2AS_GetStarLightSlotUnlockCondition"
//   "C2AS_GetStarLightAvailableList"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetStarStoneData""
     ""C2AS_FeedFragments""
     ""C2AS_FeedCheck""
     ""C2AS_GetAttributeByLevel""
     ""C2AS_GetRepairMoney""
     ""C2AS_RepairStone""
     ""C2AS_GetStarStoneMaxLevelExp""
     ""C2AS_GetStarFragmentAttribute""
     ""C2AS_EnchaseLights""
     ""C2AS_EnchaseCheck"" */

void FUN_1098bd60(void)

{
  code *pcStack_104;
  char *pcStack_100;
  code **ppcStack_fc;
  code ***pppcStack_f8;
  code *pcStack_f4;
  code **ppcStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  code **ppcStack_e4;
  code **ppcStack_e0;
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
  pppcStack_30 = (code ***)0x11ddfdb8;
  pppcStack_34 = (code ***)0x1098bd94;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1098c180;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1098bda5;
  FUN_1098d860();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1098bdbb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddfdb6;
  pppcStack_40 = (code ***)0x11ddfda4;
  pppcStack_44 = (code ***)0x1098bddb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1098c730;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1098bdec;
  FUN_1098d860();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1098be02;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddff72;
  pppcStack_50 = (code ***)0x11ddff64;
  pppcStack_54 = (code ***)0x1098be22;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1098c900;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1098be33;
  FUN_1098d860();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppuStack_60 = (undefined4 ***)0x1098be49;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11ddff60;
  pppuStack_60 = (undefined4 ***)0x11ddff48;
  pppuStack_64 = (undefined4 ***)0x1098be69;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppuStack_64 = (undefined4 ***)FUN_1098cba0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1098be7a;
  FUN_1098d860();
  if (((undefined4 ****)pppcStack_50 != &pppuStack_64) &&
     ((undefined4 ****)pppcStack_50 != (undefined4 ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x1098be90;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppuStack_64;
  pppcStack_6c = (code ***)0x11ddff47;
  pppcStack_70 = (code ***)0x11ddff34;
  pppcStack_74 = (code ***)0x1098beb0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_1098cc20;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppuStack_7c = (undefined4 ***)0x1098bec1;
  FUN_1098d860();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pppcStack_80 = (code ***)0x1098bed7;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11ddff30;
  pppcStack_80 = (code ***)0x11ddff20;
  pppcStack_84 = (code ***)0x1098bef7;
  pppuStack_60 = pppuStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)&LAB_1098cc90;
  pppcStack_88 = (code ***)&pppuStack_7c;
  pppcStack_8c = (code ***)0x1098bf08;
  FUN_1098d860();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x1098bf1e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11ddffd8;
  pppcStack_90 = (code ***)0x11ddffbc;
  pppcStack_94 = (code ***)0x1098bf3e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_1098ccd0;
  pppuStack_98 = &pppcStack_8c;
  pppcStack_9c = (code ***)0x1098bf4f;
  FUN_1098d860();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x1098bf65;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11ddffb9;
  pppcStack_a0 = (code ***)0x11ddff9c;
  pppcStack_a4 = (code ***)0x1098bf85;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_1098cd40;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x1098bf96;
  FUN_1098d860();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x1098bfac;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11ddff9a;
  pppcStack_b0 = (code ***)0x11ddff88;
  pppcStack_b4 = (code ***)0x1098bfcc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_1098cde0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x1098bfdd;
  FUN_1098d860();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x1098bff3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11ddff85;
  pppcStack_c0 = (code ***)0x11ddff74;
  pppcStack_c4 = (code ***)0x1098c013;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_1098d0e0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x1098c024;
  FUN_1098d860();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x1098c03a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11ddfeea;
  pppcStack_d0 = (code ***)0x11ddfecc;
  pppcStack_d4 = (code ***)0x1098c05a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_1098d310;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x1098c06b;
  FUN_1098d860();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    ppcStack_e0 = (code **)0x1098c081;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11ddfec9;
  ppcStack_e0 = (code **)0x11ddfeb4;
  ppcStack_e4 = (code **)0x1098c0a1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  ppcStack_e4 = (code **)FUN_1098d400;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x1098c0b2;
  FUN_1098d860();
  if ((pppcStack_d0 != &ppcStack_e4) && (pppcStack_d0 != (code ***)0x0)) {
    pppcStack_ec = pppcStack_d0;
    ppcStack_f0 = (code **)0x1098c0c8;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = &ppcStack_e4;
  pppcStack_ec = (code ***)0x11ddfeb0;
  ppcStack_f0 = (code **)0x11ddfe8c;
  pcStack_f4 = (code *)0x1098c0e8;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pcStack_f4 = FUN_1098d4d0;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  ppcStack_fc = (code **)0x1098c0f9;
  FUN_1098d860();
  if ((ppcStack_e0 != &pcStack_f4) && (ppcStack_e0 != (code **)0x0)) {
    ppcStack_fc = ppcStack_e0;
    pcStack_100 = (char *)0x1098c10f;
    FUN_10c3d5d0();
  }
  ppcStack_e4 = &pcStack_f4;
  ppcStack_fc = (code **)0x11ddfe8a;
  pcStack_100 = "C2AS_GetStarLightAvailableList";
  pcStack_104 = (code *)0x1098c12f;
  ppcStack_e0 = ppcStack_e4;
  FUN_100b62c0();
  pcStack_104 = FUN_1098d540;
  FUN_1098d860(&ppcStack_fc);
  if ((ppcStack_f0 != &pcStack_104) && (ppcStack_f0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_f0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1098c900 @ 1098c900  size=636 ===== */
// strings:
//   "mh.view.StarStone.Data.FeedResultData"
//   "count"
//   "FeedExp_Water"
//   "FeedExp_Fire"
//   "FeedExp_Thunder"
//   "FeedExp_Dragon"
//   "FeedExp_Ice"
//   "CostMoney"

/* [RE-AUTO c0]
   strings:
     ""mh.view.StarStone.Data.FeedResultData""
     ""count""
     ""FeedExp_Water""
     ""FeedExp_Fire""
     ""FeedExp_Thunder""
     ""FeedExp_Dragon""
     ""FeedExp_Ice""
     ""CostMoney"" */

void FUN_1098c900(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_EBX;
  int *unaff_ESI;
  uint uVar5;
  int *unaff_EDI;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int *piStack_bc;
  undefined4 uStack_b8;
  char *pcStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  int *piStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined1 auStack_6c [20];
  undefined4 uStack_58;
  undefined1 auStack_38 [52];
  
  uStack_ac = 0;
  uStack_b0 = 0;
  pcStack_b4 = "mh.view.StarStone.Data.FeedResultData";
  uStack_b8 = in_stack_00000018;
  piStack_bc = (int *)0x1098c926;
  FUN_11a98de0();
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piStack_bc = (int *)0x1098c957;
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (((iVar2 != 0) && (iStack_84 = *(int *)(iVar2 + 0x26118), iStack_84 != 0)) &&
       (in_stack_00000014 == 1)) {
      piStack_bc = in_stack_00000010;
      FUN_104f4330();
      if (((byte)unaff_EBX & 0x8f) == 9) {
        iVar2 = (**(code **)(*unaff_ESI + 0x28))(piStack_9c);
        if (iVar2 != 0) {
          FUN_1098c8c0();
          uVar5 = 0;
          iVar2 = (**(code **)(*unaff_ESI + 0x28))(piStack_9c);
          if (iVar2 != 0) {
            do {
              uStack_88 = 0;
              iStack_84 = 0;
              (**(code **)(*unaff_EDI + 0x30))(unaff_EBX,uVar5,&uStack_88);
              uStack_b8 = 0;
              FUN_104d4800(&DAT_11dbb0b4,&uStack_b8);
              piStack_bc = (int *)0x0;
              FUN_104d4800("count",&piStack_bc);
              FUN_1163d700(uStack_b8,piStack_bc);
              if ((uStack_98 >> 6 & 1) != 0) {
                (**(code **)(*piStack_9c + 8))(&piStack_9c,uStack_94);
              }
              uVar5 = uVar5 + 1;
              uVar3 = (**(code **)(*piStack_bc + 0x28))(pcStack_b4);
            } while (uVar5 < uVar3);
          }
          FUN_1098bc10();
          (**(code **)(*piStack_8c + 0xc))(auStack_38,auStack_6c);
          uVar4 = FUN_1163d760(1);
          FUN_104d1550("FeedExp_Water",uVar4);
          uVar4 = FUN_1163d760(0);
          FUN_104d1550("FeedExp_Fire",uVar4);
          uVar4 = FUN_1163d760(2);
          FUN_104d1550("FeedExp_Thunder",uVar4);
          uVar4 = FUN_1163d760(3);
          FUN_104d1550("FeedExp_Dragon",uVar4);
          uVar4 = FUN_1163d760(4);
          FUN_104d1550("FeedExp_Ice",uVar4);
          FUN_104d1550("CostMoney",uStack_58);
          FUN_1098e260();
          FUN_1098e310();
          FUN_1098e260();
        }
      }
      if ((unaff_EBX >> 6 & 1) != 0) {
        (**(code **)(*unaff_ESI + 8))(&stack0xffffff5c,piStack_9c);
      }
    }
  }
  return;
}



/* ===== FUN_10992310 @ 10992310  size=231 ===== */
// strings:
//   "GetFireworksData"
//   "ReqFireworks"
//   "GetExchangeData"
//   "ReqExchangeReward"
//   "C2AS_IsActivityOpen"

/* [RE-AUTO c0]
   strings:
     ""GetFireworksData""
     ""ReqFireworks""
     ""GetExchangeData""
     ""ReqExchangeReward""
     ""C2AS_IsActivityOpen"" */

void FUN_10992310(void)

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
    FUN_104d13b0("GetFireworksData",FUN_10992460);
    FUN_104d13b0("ReqFireworks",FUN_10992720);
    FUN_104d13b0("GetExchangeData",FUN_10992800);
    FUN_104d13b0("ReqExchangeReward",FUN_10993020);
    FUN_104d13b0("C2AS_IsActivityOpen",FUN_109930a0);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== data::QuenchEffectPropertyMo @ 10999ab0  size=51 ===== */
// strings:
//   "mh.data::QuenchEffectPropertyMo"

/* [RE-AUTO c3]
   id: data::QuenchEffectPropertyMo
   strings:
     ""mh.data::QuenchEffectPropertyMo"" */

undefined4 * __thiscall data__QuenchEffectPropertyMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::QuenchEffectPropertyMo",0,0);
  }
  return param_1;
}



/* ===== data::QuenchEffectMo @ 10999b80  size=51 ===== */
// strings:
//   "mh.data::QuenchEffectMo"

/* [RE-AUTO c3]
   id: data::QuenchEffectMo
   strings:
     ""mh.data::QuenchEffectMo"" */

undefined4 * __thiscall data__QuenchEffectMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::QuenchEffectMo",0,0);
  }
  return param_1;
}



/* ===== data::QuenchBillMo @ 10999c40  size=51 ===== */
// strings:
//   "mh.data::QuenchBillMo"

/* [RE-AUTO c3]
   id: data::QuenchBillMo
   strings:
     ""mh.data::QuenchBillMo"" */

undefined4 * __thiscall data__QuenchBillMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::QuenchBillMo",0,0);
  }
  return param_1;
}



/* ===== FUN_10999cb0 @ 10999cb0  size=28 ===== */
// strings:
//   "iCostMoney"

/* [RE-AUTO c0]
   strings:
     ""iCostMoney"" */

void FUN_10999cb0(undefined4 param_1)

{
  FUN_104d1550("iCostMoney",param_1);
  return;
}



/* ===== FUN_10999e20 @ 10999e20  size=609 ===== */
// strings:
//   "InitModel"
//   "CanQuenchEquip"
//   "GetQuenchEquipCost"
//   "GetQuenchEquipEffect"
//   "GetQuenchEquipCompareEffect"
//   "ReqEquipQuench"
//   "RollBackEquipQuench"
//   "GetTipsData"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""CanQuenchEquip""
     ""GetQuenchEquipCost""
     ""GetQuenchEquipEffect""
     ""GetQuenchEquipCompareEffect""
     ""ReqEquipQuench""
     ""RollBackEquipQuench""
     ""GetTipsData"" */

void FUN_10999e20(void)

{
  code *pcStack_a4;
  char *pcStack_a0;
  code **ppcStack_9c;
  code ***pppcStack_98;
  code *pcStack_94;
  code **ppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code **ppcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10999e54;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_1099a090;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10999e65;
  FUN_1099b4c0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x10999e7b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de0be2;
  pppcStack_40 = (code ***)0x11de0bd4;
  pppcStack_44 = (code ***)0x10999e9b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1099a0a0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x10999eac;
  FUN_1099b4c0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10999ec2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de0bf6;
  pppcStack_50 = (code ***)0x11de0be4;
  pppcStack_54 = (code ***)0x10999ee2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1099a1f0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10999ef3;
  FUN_1099b4c0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10999f09;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de0b7c;
  pppcStack_60 = (code ***)0x11de0b68;
  pppcStack_64 = (code ***)0x10999f29;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_1099a460;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10999f3a;
  FUN_1099b4c0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10999f50;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de0b9b;
  pppcStack_70 = (code ***)0x11de0b80;
  pppcStack_74 = (code ***)0x10999f70;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_1099a7b0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10999f81;
  FUN_1099b4c0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x10999f97;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de0baa;
  ppcStack_80 = (code **)0x11de0b9c;
  ppcStack_84 = (code **)0x10999fb7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_84 = (code **)FUN_1099ab40;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10999fc8;
  FUN_1099b4c0();
  if ((pppcStack_70 != &ppcStack_84) && (pppcStack_70 != (code ***)0x0)) {
    pppcStack_8c = pppcStack_70;
    ppcStack_90 = (code **)0x10999fde;
    FUN_10c3d5d0();
  }
  pppcStack_74 = &ppcStack_84;
  pppcStack_8c = (code ***)0x11de0bbf;
  ppcStack_90 = (code **)0x11de0bac;
  pcStack_94 = (code *)0x10999ffe;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_1099ae30;
  pppcStack_98 = (code ***)&pppcStack_8c;
  ppcStack_9c = (code **)0x1099a00f;
  FUN_1099b4c0();
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    ppcStack_9c = ppcStack_80;
    pcStack_a0 = (char *)0x1099a025;
    FUN_10c3d5d0();
  }
  ppcStack_84 = &pcStack_94;
  ppcStack_9c = (code **)0x11de0b4f;
  pcStack_a0 = "GetTipsData";
  pcStack_a4 = (code *)0x1099a045;
  ppcStack_80 = ppcStack_84;
  FUN_100b62c0();
  pcStack_a4 = data__QuenchEffectMo_1099afa0;
  FUN_1099b4c0(&ppcStack_9c);
  if ((ppcStack_90 != &pcStack_a4) && (ppcStack_90 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_90);
  }
  FUN_11a89daa();
  return;
}



