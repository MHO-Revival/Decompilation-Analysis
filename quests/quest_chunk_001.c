/* ===== FUN_107f43c0 @ 107f43c0  size=244 ===== */
// strings:
//   "strChapterName"
//   "nChapterID"
//   "bOpen"
//   "FillBorderBlack_FadeInTime"
//   "FillBorderBlack_Active"

/* [RE-AUTO c0]
   strings:
     ""strChapterName""
     ""nChapterID""
     ""bOpen""
     ""FillBorderBlack_FadeInTime""
     ""FillBorderBlack_Active"" */

void __thiscall FUN_107f43c0(int param_1)

{
  undefined4 *in_stack_00000010;
  int *piStack_38;
  char *pcStack_34;
  int **ppiStack_30;
  undefined4 uStack_2c;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  uStack_2c = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  local_18 = uStack_2c;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    ppiStack_30 = &local_20;
    pcStack_34 = (char *)0x107f440d;
    (**(code **)(*local_20 + 4))();
  }
  uStack_2c = *(undefined4 *)(param_1 + 0x7c);
  ppiStack_30 = (int **)0x11dcabcc;
  pcStack_34 = (char *)0x107f4423;
  FUN_104d1670();
  pcStack_34 = *(char **)(param_1 + 0x80);
  piStack_38 = (int *)0x11dca794;
  FUN_104d1550();
  FUN_104d15e0("bOpen",*(undefined1 *)(param_1 + 100));
  uStack_2c = 0;
  ppiStack_30 = (int **)0x3f800000;
  pcStack_34 = "FillBorderBlack_FadeInTime";
  piStack_38 = (int *)0x107f4470;
  (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x2b4))();
  piStack_38 = (int *)0x0;
  (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x2b4))("FillBorderBlack_Active",0x3f800000);
  if (((uint)pcStack_34 >> 6 & 1) != 0) {
    (**(code **)(*piStack_38 + 8))(&piStack_38,ppiStack_30);
  }
  return;
}



/* ===== FUN_107f4b10 @ 107f4b10  size=2020 ===== */
// strings:
//   "TASK_QUEST_VO_NAME"
//   "nQuestID"
//   "nQuestStatus"
//   "nQuestLevel"
//   "strQuestName"
//   "nQuestType"
//   "lefttime"
//   "timeout"
//   "subTaskArr"
//   "nTargetID4"
//   "nOpType"
//   "nTargetID1"
//   "nTargetID2"
//   "nTargetID3"
//   "nTargetID5"
//   "strTarget1"
//   "strTarget2"
//   "strTarget3"
//   "strTarget4"
//   "strTarget5"

/* [RE-AUTO c0]
   strings:
     ""TASK_QUEST_VO_NAME""
     ""nQuestID""
     ""nQuestStatus""
     ""nQuestLevel""
     ""strQuestName""
     ""nQuestType""
     ""lefttime""
     ""timeout""
     ""subTaskArr""
     ""nTargetID4"" */

void FUN_107f4b10(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int iVar5;
  int *unaff_EBX;
  int *piVar6;
  uint unaff_ESI;
  int *piVar7;
  int *unaff_EDI;
  undefined4 *in_stack_00000010;
  undefined1 *puStack_d8;
  int *piStack_d4;
  char *pcStack_d0;
  int **ppiStack_cc;
  char *pcStack_c8;
  int **ppiStack_c4;
  int **ppiStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  char *pcStack_b4;
  int **ppiStack_b0;
  int *piStack_ac;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  int *piStack_94;
  int **ppiStack_90;
  int *piStack_8c;
  int *piStack_88;
  uint uStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *local_78;
  uint local_74;
  int *local_70;
  uint local_6c;
  int *local_68;
  int iStack_64;
  int aiStack_60 [2];
  int iStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [16];
  int **ppiStack_28;
  int **ppiStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_9c;
  local_78 = (int *)0x0;
  local_74 = in_stack_00000010[1];
  local_6c = in_stack_00000010[3];
  piStack_ac = (int *)in_stack_00000010[2];
  local_68 = (int *)in_stack_00000010[4];
  local_70 = piStack_ac;
  if ((local_74 >> 6 & 1) != 0) {
    local_78 = (int *)*in_stack_00000010;
    ppiStack_b0 = &local_78;
    pcStack_b4 = (char *)0x107f4b70;
    (**(code **)(*local_78 + 4))();
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
    piVar7 = (int *)in_stack_00000010[8];
  }
  else {
    piVar7 = (int *)0xdeadbeaf;
  }
  ppiStack_b0 = (int **)&uStack_40;
  uStack_40 = 0;
  piStack_3c = (int *)0x0;
  piStack_48 = (int *)CONCAT31(piStack_48._1_3_,((byte)DAT_123bcebc & 0x8f) == 10);
  piStack_ac = piStack_48;
  pcStack_b4 = "TASK_QUEST_VO_NAME";
  uStack_b8 = DAT_123bcec0;
  piStack_bc = (int *)0x107f4bd4;
  piStack_7c = piVar7;
  cVar1 = (**(code **)(*DAT_123bceb8 + 0x10))();
  piVar6 = (int *)0x0;
  if (((cVar1 != '\0') && (((byte)piStack_4c & 0x8f) == 6)) &&
     (piVar6 = piStack_48, ((uint)piStack_4c >> 6 & 1) != 0)) {
    piVar6 = (int *)*piStack_48;
  }
  ppiStack_c0 = (int **)0x107f4c01;
  piStack_bc = piVar7;
  FUN_104d8d20();
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 == (int *)0x0))
  goto LAB_107f5296;
  piStack_bc = (int *)0x107f4c35;
  iVar2 = (**(code **)(*piVar7 + 0xb4))();
  if ((iVar2 == 0) || (piVar7 = *(int **)(iVar2 + 0x2ab0), piVar7 == (int *)0x0)) goto LAB_107f5296;
  piStack_bc = piStack_8c;
  ppiStack_c0 = (int **)0x107f4c56;
  (**(code **)(*piVar7 + 100))();
  ppiStack_c0 = ppiStack_90;
  ppiStack_c4 = (int **)0x107f4c61;
  iVar2 = (**(code **)(*piVar7 + 0x50))();
  if (iVar2 == 0) goto LAB_107f5296;
  piStack_bc = (int *)0x0;
  ppiStack_c0 = (int **)&DAT_11dca874;
  ppiStack_c4 = (int **)0x107f4c7d;
  FUN_104d1550();
  ppiStack_c4 = *(int ***)(*(int *)(iVar2 + 8) + 4);
  pcStack_c8 = "nQuestID";
  ppiStack_cc = (int **)0x107f4c93;
  FUN_104d1550();
  ppiStack_cc = *(int ***)(iVar2 + 0x14);
  pcStack_d0 = "nQuestStatus";
  piStack_d4 = (int *)0x107f4ca6;
  FUN_104d1550();
  piStack_bc = &iStack_58;
  ppiStack_c0 = (int **)0x107f4cb5;
  FUN_114f4840();
  ppiStack_c0 = (int **)0x107f4cbc;
  puVar3 = (undefined4 *)FUN_117c1280();
  ppiStack_c0 = (int **)*puVar3;
  ppiStack_c4 = (int **)0x11dcaccc;
  pcStack_c8 = (char *)0x107f4cce;
  FUN_104d1550();
  ppiStack_c0 = (int **)auStack_38;
  auStack_38[0] = 0;
  ppiStack_c4 = (int **)0x107f4cfa;
  ppiStack_28 = ppiStack_c0;
  ppiStack_24 = ppiStack_c0;
  FUN_100e5aa0();
  ppiStack_c4 = ppiStack_28;
  pcStack_c8 = "strQuestName";
  ppiStack_cc = (int **)0x107f4d11;
  FUN_104d1670();
  if ((ppiStack_28 != &piStack_3c) && (ppiStack_28 != (int **)0x0)) {
    ppiStack_c4 = ppiStack_28;
    pcStack_c8 = (char *)0x107f4d30;
    FUN_10c3d5d0();
  }
  ppiStack_c4 = (int **)0x107f4d3a;
  ppiStack_c4 = (int **)FUN_114f4f20();
  pcStack_c8 = "nQuestType";
  ppiStack_cc = (int **)0x107f4d4b;
  FUN_104d1550();
  ppiStack_c4 = (int **)0x107f4d55;
  ppiVar4 = (int **)FUN_114f4860();
  ppiStack_c4 = (int **)0x0;
  if (0 < (int)ppiVar4) {
    ppiStack_c4 = ppiVar4;
  }
  pcStack_c8 = "lefttime";
  ppiStack_cc = (int **)0x107f4d6d;
  FUN_104d1550();
  ppiStack_cc = *(int ***)(*(int *)(iVar2 + 8) + 0x5c);
  pcStack_d0 = "timeout";
  piStack_d4 = (int *)0x107f4d83;
  FUN_104d1550();
  local_78 = (int *)0x0;
  ppiStack_c4 = &local_78;
  local_74 = 0;
  ppiStack_b0 = (int **)0x0;
  piStack_ac = (int *)0x0;
  pcStack_c8 = (char *)0x107f4db2;
  FUN_11a98a70();
  pcStack_c8 = (char *)(uint)(((byte)ppiStack_90 & 0x8f) == 10);
  ppiStack_cc = &piStack_7c;
  pcStack_d0 = "subTaskArr";
  piStack_d4 = piStack_8c;
  puStack_d8 = (undefined1 *)0x107f4ddb;
  (**(code **)(*piStack_94 + 0x14))();
  if (*(int *)(iVar2 + 0x14) == 4) {
    puStack_d8 = (undefined1 *)0x0;
    FUN_11a98de0(&ppiStack_c4,piVar6,0);
    FUN_104d1550("nTargetID4",*(undefined4 *)(*(int *)(*(int *)(iVar2 + 8) + 0x34) + 0x14));
    FUN_104d1550("nOpType",0xd);
    iVar5 = FUN_114f4f20();
    if ((iVar5 == 0x400) && (*(int *)(*(int *)(iVar2 + 8) + 0x38) != 0)) {
LAB_107f51f8:
      iVar2 = FUN_100e5b40(aiStack_60);
      piVar7 = *(int **)(iVar2 + 0x14);
    }
    else {
      piStack_50 = aiStack_60;
      aiStack_60[0]._0_1_ = 0;
      piStack_4c = piStack_50;
      FUN_100e5aa0(piStack_50);
      piVar7 = piStack_50;
    }
    FUN_104d1670("strTarget4",piVar7);
    if ((piStack_50 != &iStack_64) && (piStack_50 != (int *)0x0)) {
      FUN_10c3d5d0(piStack_50);
    }
    (**(code **)(*unaff_EBX + 0x3c))(uStack_98,&puStack_d8);
  }
  else {
    puStack_d8 = &DAT_11d9d32b;
    cVar1 = FUN_100e57c0();
    if (cVar1 == '\0') {
      FUN_11a98de0(&pcStack_c8,piVar6,0,0);
      FUN_104d1550("nOpType",0x1f);
      goto LAB_107f51f8;
    }
    piStack_54 = (int *)0x0;
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)0x0;
    FUN_107fa640();
    piVar7 = piStack_54;
    if (piStack_54 == piStack_50) {
LAB_107f5057:
      FUN_104f9a70();
    }
    else {
      do {
        FUN_11a98de0(&pcStack_c8,piVar6,0,0);
        if ((piVar7[0x3a] == 3) && (piVar7[0x34] != 4)) {
          if (piVar7[6] < piVar7[7]) {
            FUN_104d1550("nTargetID1",*piVar7);
            FUN_104d1550("nTargetID2",piVar7[1]);
            FUN_104d1550("nTargetID3",piVar7[2]);
            FUN_104d1550("nTargetID4",piVar7[3]);
            FUN_104d1550("nTargetID5",piVar7[4]);
            FUN_104d1670("strTarget1",piVar7[0xd]);
            FUN_104d1670("strTarget2",piVar7[0x13]);
            FUN_104d1670("strTarget3",piVar7[0x19]);
            FUN_104d1670("strTarget4",piVar7[0x1f]);
            FUN_104d1670("strTarget5",piVar7[0x25]);
            FUN_104d1550("nOpType",piVar7[5]);
            FUN_104d1550("nCurCount",piVar7[6]);
            FUN_104d1550("nMaxCount",piVar7[7]);
            FUN_104d1550("nQuestType",piVar7[0x38]);
            FUN_104d1550(&DAT_11dca838,piVar7[0x39]);
            (*(code *)(*ppiStack_90)[0xf])(piStack_88,&pcStack_c8);
            goto LAB_107f5057;
          }
        }
        else {
          FUN_104d1550("nTargetID1",*piVar7);
          FUN_104d1550("nTargetID2",piVar7[1]);
          FUN_104d1550("nTargetID3",piVar7[2]);
          FUN_104d1550("nTargetID4",piVar7[3]);
          FUN_104d1550("nTargetID5",piVar7[4]);
          FUN_104d1670("strTarget1",piVar7[0xd]);
          FUN_104d1670("strTarget2",piVar7[0x13]);
          FUN_104d1670("strTarget3",piVar7[0x19]);
          FUN_104d1670("strTarget4",piVar7[0x1f]);
          FUN_104d1670("strTarget5",piVar7[0x25]);
          FUN_104d1550("nOpType",piVar7[5]);
          FUN_104d1550("nCurCount",piVar7[6]);
          FUN_104d1550("nMaxCount",piVar7[7]);
          FUN_104d1550("nQuestType",piVar7[0x38]);
          FUN_104d1550(&DAT_11dca838,piVar7[0x39]);
          (*(code *)(*ppiStack_90)[0xf])(piStack_88,&pcStack_c8);
        }
        piVar7 = piVar7 + 0x3b;
      } while (piVar7 != piStack_50);
      FUN_104f9a70();
    }
  }
  if ((unaff_ESI >> 6 & 1) != 0) {
    ppiStack_c0 = (int **)&stack0xffffff58;
    ppiStack_c4 = (int **)0x107f5269;
    piStack_bc = unaff_EBX;
    (**(code **)(*unaff_EDI + 8))();
  }
  if ((local_6c >> 6 & 1) != 0) {
    ppiStack_c0 = &local_70;
    piStack_bc = local_68;
    ppiStack_c4 = (int **)0x107f5296;
    (**(code **)(*local_70 + 8))();
  }
LAB_107f5296:
  if (((uint)piStack_4c >> 6 & 1) != 0) {
    ppiStack_c0 = &piStack_50;
    piStack_bc = piStack_48;
    ppiStack_c4 = (int **)0x107f52b3;
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  piStack_4c = (int *)0x0;
  if ((uStack_84 >> 6 & 1) != 0) {
    ppiStack_c0 = &piStack_88;
    piStack_bc = piStack_80;
    ppiStack_c4 = (int **)0x107f52e0;
    (**(code **)(*piStack_88 + 8))();
  }
  ppiStack_b0 = (int **)0x107f52f1;
  FUN_11a89daa();
  return;
}



/* ===== FUN_107f90b0 @ 107f90b0  size=4410 ===== */
// calls: CSuperCraftConsumeInfo::GetRecordById, CSkillLevelMap::Insert, CMaterialTagDescInfo::GetManager, CInfoManager::FindByName, memcpy
// strings:
//   "weaponRecastDatas"
//   "TASK_QUEST_VO_NAME"
//   "subTaskArr"
//   "nItemLevel"
//   "nTargetID1"
//   "strTarget1"
//   "rareType"
//   "nCurCount"
//   "nMaxCount"
//   "CMaterialTagDescInfo"
//   "mh_sharemem_addrinfo"
//   u"<Error When GetUnicodeString>"
//   "isPointMaterial"
//   "nQuestID"
//   "nQuestStatus"
//   "nQuestLevel"
//   "strQuestName"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""weaponRecastDatas""
     ""TASK_QUEST_VO_NAME""
     ""subTaskArr""
     ""nItemLevel""
     ""nTargetID1""
     ""strTarget1""
     ""rareType""
     ""nCurCount""
     ""nMaxCount""
     ""CMaterialTagDescInfo"" */

void FUN_107f90b0(int *param_1)

{
  char *pcVar1;
  int ***pppiVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int ****ppppiVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *****pppppiVar13;
  undefined *puVar14;
  void *pvVar15;
  undefined4 *puVar16;
  int *****pppppiVar17;
  int ****ppppiVar18;
  undefined4 *puVar19;
  int ****ppppiVar20;
  undefined4 *puVar21;
  char *_Src;
  int *piVar22;
  undefined4 uVar23;
  int *****pppppiVar24;
  undefined4 uVar25;
  undefined4 **ppuVar26;
  int **ppiVar27;
  int *****pppppiStack_1b0;
  int *****pppppiStack_1ac;
  char *pcVar28;
  int *****pppppiStack_1a0;
  uint local_19c;
  int *local_198;
  undefined1 auStack_194 [8];
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  int iStack_17c;
  int *piStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_164;
  undefined4 *puStack_160;
  int *piStack_15c;
  undefined4 *puStack_158;
  int iStack_154;
  int iStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int *****pppppiStack_144;
  int *****pppppiStack_140;
  int *****local_13c;
  int iStack_138;
  undefined1 uStack_134;
  undefined1 auStack_130 [4];
  int *piStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int iStack_120;
  undefined1 auStack_11c [4];
  int *piStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  int *piStack_10c;
  int iStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int *piStack_dc;
  int *piStack_d8;
  uint uStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 *apuStack_c8 [2];
  int iStack_c0;
  int *piStack_b4;
  int *piStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int ****ppppiStack_9c;
  int *****local_98;
  undefined4 local_94;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  int *piStack_64;
  int *piStack_60;
  uint uStack_5c;
  int iStack_58;
  int **ppiStack_50;
  int **ppiStack_4c;
  undefined2 auStack_44 [16];
  undefined2 *puStack_24;
  undefined2 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&pppppiStack_1a0;
  pppppiStack_1b0 = (int *****)&local_98;
  local_98 = (int *****)0x0;
  local_94 = 0;
  local_13c = (int *****)CONCAT31(local_13c._1_3_,((byte)DAT_123bcebc & 0x8f) == 10);
  pppppiStack_1ac = local_13c;
  local_198 = (int *)0x0;
  (**(code **)(*DAT_123bceb8 + 0x10))(DAT_123bcec0,"weaponRecastDatas");
  uVar5 = uStack_a4 & 0x8f;
  if (((uVar5 == 8) || (uVar5 == 9)) || (uVar5 == 10)) {
    (**(code **)(*piStack_a8 + 0x44))(uStack_a0,0,0xffffffff);
    (**(code **)(*param_1 + 0x370))(8);
    ppppiStack_14c = (int ****)FUN_1159a350();
    if ((ppppiStack_14c != (int ****)0x0) && (iStack_154 = param_1[0xb47], iStack_154 != 0)) {
      piStack_118 = (int *)0x0;
      uStack_114 = 0;
      iStack_150 = CONCAT31(iStack_150._1_3_,((byte)DAT_123bcebc & 0x8f) == 10);
      piStack_d8 = (int *)0x0;
      uStack_d4 = 0;
      puStack_158 = (undefined4 *)0x0;
      cVar4 = (**(code **)(*DAT_123bceb8 + 0x10))
                        (DAT_123bcec0,"TASK_QUEST_VO_NAME",&piStack_d8,iStack_150);
      if ((cVar4 != '\0') && (((byte)uStack_d4 & 0x8f) == 6)) {
        if ((uStack_d4 >> 6 & 1) == 0) {
          puStack_158 = puStack_d0;
        }
        else {
          puStack_158 = (undefined4 *)*puStack_d0;
        }
      }
      iStack_150 = 0;
      if (0 < (int)*ppppiStack_14c) {
        do {
          piStack_15c = (int *)&DAT_00000004;
          uStack_90 = *(ulonglong *)(ppppiStack_14c + iStack_150 * 3 + 1);
          pppiVar2 = ppppiStack_14c[iStack_150 * 3 + 3];
          FUN_11a98de0(&piStack_118,puStack_158,0,0);
          uStack_100 = 0;
          iStack_fc = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          FUN_11a98a70(&uStack_100);
          local_98 = (int *****)CONCAT31(local_98._1_3_,((byte)puStack_128 & 0x8f) == 10);
          pppppiVar17 = local_98;
          (**(code **)(*piStack_12c + 0x14))(puStack_124,"subTaskArr",&iStack_104);
          FUN_104d1550("nItemLevel",pppiVar2);
          piVar22 = piStack_b4;
          uStack_d4 = FUN_1052c9e0(piStack_b4);
          iVar6 = CSuperCraftConsumeInfo__GetRecordById(*(undefined4 *)(uStack_d4 + 0x18));
          if (iVar6 != 0) {
            iStack_fc = FUN_1183d500(0);
            if (iStack_fc == 0) {
              if ((uStack_174 >> 6 & 1) != 0) {
                (**(code **)(*piStack_178 + 8))(&piStack_178,uStack_170);
                piStack_178 = (int *)0x0;
              }
              uStack_174 = 0;
              if ((uStack_ec >> 6 & 1) != 0) {
                (**(code **)(*piStack_f0 + 8))(&piStack_f0,uStack_e8);
                piStack_f0 = (int *)0x0;
              }
              uStack_ec = 0;
              break;
            }
            pppppiStack_140 = &ppppiStack_148;
            iStack_138 = 0;
            pcVar28 = (char *)0x0;
            piVar22 = (int *)(iStack_fc + 0x14);
            ppppiStack_148 = (int ****)0x0;
            pppppiStack_144 = (int *****)0x0;
            uStack_134 = uStack_188._3_1_;
            local_13c = pppppiStack_140;
            do {
              if (*piVar22 == 0) break;
              FUN_11a98de0(&piStack_178,puStack_158,0,0);
              iVar6 = FUN_10254130(*piVar22);
              if (iVar6 != 0) {
                FUN_104d1550("nTargetID1",*piVar22);
                piStack_60 = (int *)((uint)piStack_60 & 0xffffff00);
                ppiStack_50 = &piStack_60;
                ppiStack_4c = ppiStack_50;
                FUN_100e5aa0(ppiStack_50);
                FUN_104d1670("strTarget1",ppiStack_50);
                if ((ppiStack_50 != &piStack_64) && (ppiStack_50 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_50);
                }
                FUN_104d1550("rareType",*(undefined4 *)(iVar6 + 0x4c));
                iVar7 = FUN_113fa680(*piVar22,0,1);
                iVar8 = FUN_113fa680(*piVar22,1,1);
                iVar6 = piVar22[6];
                FUN_104d1550("nCurCount",iVar7 + iVar8);
                FUN_104d1550("nMaxCount",iVar6);
                if ((piStack_178 != (int *)&DAT_00000004) || (iVar7 + iVar8 < iVar6)) {
                  piStack_178 = (int *)0x0;
                }
                (**(code **)(*piStack_10c + 0x3c))(iStack_104,auStack_194);
                piVar9 = (int *)FUN_107e00f0(&iStack_88,piVar22);
                if ((uint *)*piVar9 == &uStack_174) {
                  piVar9 = (int *)FUN_104ef0a0(piVar22);
                  *piVar9 = piVar22[6];
                }
                else {
                  piVar9 = (int *)FUN_104ef0a0(piVar22);
                  iVar6 = *piVar9;
                  piVar9 = (int *)FUN_104ef0a0(piVar22);
                  *piVar9 = iVar6 + 1;
                }
              }
              piVar22 = piVar22 + 1;
              pcVar28 = pcVar28 + 1;
            } while ((int)pcVar28 < 6);
            iStack_f8 = 0;
            do {
              iVar6 = iStack_f8;
              if (*(int *)(iStack_fc + 0x44 + iStack_f8 * 4) == 0) break;
              iVar8 = 0;
              ppiVar27 = &piStack_178;
              puVar19 = puStack_158;
              FUN_11a98de0(ppiVar27,puStack_158,0,0);
              puStack_d0 = (undefined4 *)0x0;
              uStack_cc = 0;
              iVar7 = piStack_10c[iVar6 + 0x11];
              iStack_104 = piStack_10c[iVar6 + 0x17];
              ppuVar26 = &puStack_d0;
              apuStack_c8[0] = (undefined4 *)0x0;
              iStack_18c = iVar7;
              FUN_113faa10(iVar7,ppuVar26,0x1e);
              local_13c = (int *****)0x0;
              pppppiStack_140 = &ppppiStack_14c;
              iStack_138 = CONCAT31(iStack_138._1_3_,(char)((uint)pcVar28 >> 0x18));
              ppppiStack_14c = (int ****)0x0;
              ppppiStack_148 = (int ****)0x0;
              pppppiStack_144 = &ppppiStack_14c;
              piVar22 = piStack_dc;
              if (piStack_dc != piStack_d8) {
                do {
                  iVar6 = FUN_11669730();
                  ppppiVar20 = (int ****)&ppppiStack_14c;
                  ppppiVar10 = ppppiStack_148;
                  ppppiVar18 = ppppiVar20;
                  if (ppppiStack_148 != (int ****)0x0) {
                    do {
                      if ((int)ppppiVar10[4] < iVar6) {
                        ppppiVar18 = (int ****)ppppiVar10[3];
                      }
                      else {
                        ppppiVar18 = (int ****)ppppiVar10[2];
                        ppppiVar20 = ppppiVar10;
                      }
                      ppppiVar10 = ppppiVar18;
                    } while (ppppiVar18 != (int ****)0x0);
                    ppppiVar18 = ppppiVar20;
                    if (((int *****)ppppiVar20 != &ppppiStack_14c) &&
                       (ppppiVar18 = (int ****)&ppppiStack_14c, (int)ppppiVar20[4] <= iVar6)) {
                      ppppiVar18 = ppppiVar20;
                    }
                  }
                  ppppiVar10 = (int ****)&ppppiStack_14c;
                  ppppiVar20 = ppppiStack_148;
                  if ((int *****)ppppiVar18 == &ppppiStack_14c) {
                    while (ppppiVar20 != (int ****)0x0) {
                      if ((int)ppppiVar20[4] < iVar6) {
                        ppppiVar20 = (int ****)ppppiVar20[3];
                      }
                      else {
                        ppppiVar10 = ppppiVar20;
                        ppppiVar20 = (int ****)ppppiVar20[2];
                      }
                    }
                    if (((int *****)ppppiVar10 == &ppppiStack_14c) ||
                       (puVar19 = (undefined4 *)((uint)puVar19 | 1), iVar6 < (int)ppppiVar10[4])) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if (((uint)puVar19 & 1) != 0) {
                      puVar19 = (undefined4 *)((uint)puVar19 & 0xfffffffe);
                    }
                    if (bVar3) {
                      uStack_84 = 0;
                      iStack_88 = iVar6;
                      CSkillLevelMap__Insert(&ppppiStack_9c,ppppiVar10,&iStack_88);
                      ppppiVar10 = ppppiStack_9c;
                    }
                    ppppiVar10[5] = (int ***)0x1;
                  }
                  piVar22 = piVar22 + 3;
                } while (piVar22 != piStack_d8);
              }
              local_19c = 0;
              pppppiVar17 = pppppiStack_144;
              if (pppppiStack_144 != &ppppiStack_14c) {
                do {
                  pppppiVar13 = (int *****)pppppiVar17[4];
                  uVar25 = 0;
                  pppppiVar24 = pppppiVar13;
                  pppppiStack_1a0 = pppppiVar13;
                  uVar11 = FUN_113fa680(pppppiVar13,0,1);
                  iVar8 = 1;
                  uVar23 = 1;
                  ppppiVar20 = pppppiVar17[4];
                  iVar6 = FUN_113fa680(ppppiVar20,1,1,pppppiVar24,uVar25,uVar11);
                  iVar8 = FUN_10540d00(pppppiVar13,ppppiVar20,uVar23,iVar8 + iVar6);
                  if (iVar8 != 0) {
                    puVar21 = &uStack_164;
                    puVar12 = puStack_160;
                    puVar16 = puVar21;
                    if (puStack_160 != (undefined4 *)0x0) {
                      do {
                        if ((int)puVar12[4] < (int)pppppiStack_1a0) {
                          puVar16 = (undefined4 *)puVar12[3];
                        }
                        else {
                          puVar16 = (undefined4 *)puVar12[2];
                          puVar21 = puVar12;
                        }
                        puVar12 = puVar16;
                      } while (puVar16 != (undefined4 *)0x0);
                      puVar16 = puVar21;
                      if ((puVar21 != &uStack_164) &&
                         (puVar16 = &uStack_164, (int)puVar21[4] <= (int)pppppiStack_1a0)) {
                        puVar16 = puVar21;
                      }
                    }
                    puVar12 = &uStack_164;
                    puVar21 = puStack_160;
                    if (puVar16 == &uStack_164) {
                      cVar4 = FUN_116c0720();
                      if (cVar4 == '\0') {
                        iVar6 = FUN_116c04a0(local_198);
                      }
                      else {
                        iVar6 = FUN_116c0400();
                      }
                      local_19c = local_19c + (int)piVar22 * iVar6;
                    }
                    else {
                      while (puVar21 != (undefined4 *)0x0) {
                        if ((int)puVar21[4] < (int)pppppiStack_1a0) {
                          puVar21 = (undefined4 *)puVar21[3];
                        }
                        else {
                          puVar12 = puVar21;
                          puVar21 = (undefined4 *)puVar21[2];
                        }
                      }
                      if ((puVar12 == &uStack_164) ||
                         (puVar19 = (undefined4 *)((uint)puVar19 | 2),
                         (int)pppppiStack_1a0 < (int)puVar12[4])) {
                        bVar3 = true;
                      }
                      else {
                        bVar3 = false;
                      }
                      if (((uint)puVar19 & 2) != 0) {
                        puVar19 = (undefined4 *)((uint)puVar19 & 0xfffffffd);
                      }
                      if (bVar3) {
                        uStack_90 = ZEXT48(pppppiStack_1a0);
                        CSkillLevelMap__Insert(&puStack_d0,puVar12,&uStack_90);
                        puVar12 = puStack_d0;
                      }
                      if ((int)puVar12[5] < (int)piVar22) {
                        puVar12 = &uStack_164;
                        puVar21 = puStack_160;
                        while (puVar21 != (undefined4 *)0x0) {
                          if ((int)puVar21[4] < (int)pppppiStack_1a0) {
                            puVar21 = (undefined4 *)puVar21[3];
                          }
                          else {
                            puVar12 = puVar21;
                            puVar21 = (undefined4 *)puVar21[2];
                          }
                        }
                        if ((puVar12 == &uStack_164) ||
                           (puVar19 = (undefined4 *)((uint)puVar19 | 4),
                           (int)pppppiStack_1a0 < (int)puVar12[4])) {
                          bVar3 = true;
                        }
                        else {
                          bVar3 = false;
                        }
                        if (((uint)puVar19 & 4) != 0) {
                          puVar19 = (undefined4 *)((uint)puVar19 & 0xfffffffb);
                        }
                        if (bVar3) {
                          local_98 = pppppiStack_1a0;
                          local_94 = 0;
                          CSkillLevelMap__Insert(apuStack_c8,puVar12,&local_98);
                          puVar12 = apuStack_c8[0];
                        }
                        iVar6 = FUN_116c04a0(local_198);
                        local_19c = local_19c + iVar6 * ((int)piVar22 - puVar12[5]);
                      }
                    }
                  }
                  pppppiVar13 = (int *****)pppppiVar17[3];
                  if (pppppiVar13 == (int *****)0x0) {
                    pppppiVar13 = (int *****)pppppiVar17[1];
                    if (pppppiVar17 == (int *****)pppppiVar13[3]) {
                      do {
                        pppppiVar17 = pppppiVar13;
                        pppppiVar13 = (int *****)pppppiVar17[1];
                      } while (pppppiVar17 == (int *****)pppppiVar13[3]);
                    }
                    if ((int *****)pppppiVar17[3] != pppppiVar13) {
                      pppppiVar17 = pppppiVar13;
                    }
                  }
                  else {
                    for (pppppiVar24 = (int *****)pppppiVar13[2]; pppppiVar17 = pppppiVar13,
                        pppppiVar24 != (int *****)0x0; pppppiVar24 = (int *****)pppppiVar24[2]) {
                      pppppiVar13 = pppppiVar24;
                    }
                  }
                } while (pppppiVar17 != &ppppiStack_14c);
              }
              puVar19 = (undefined4 *)
                        CMaterialTagDescInfo__GetManager
                                  (iVar7,ppuVar26,&PTR_FUN_11dcb114,ppiVar27,puVar19,iVar8);
              puVar14 = (undefined *)*puVar19;
              if ((puVar14 == (undefined *)0x0) &&
                 (puVar14 = (undefined *)
                            CInfoManager__FindByName(&pppppiStack_1b0,"CMaterialTagDescInfo",0),
                 puVar14 == (undefined *)0x0)) {
                if ((DAT_123bf160 & 1) == 0) {
                  DAT_123bf188 = 0;
                  DAT_123bf198 = 0;
                  uRam123bf19c = 0;
                  _DAT_123bf1a0 = 0;
                  DAT_123bf1a4 = 0;
                  DAT_123bf160 = DAT_123bf160 | 1;
                  _DAT_123bf184 = &PTR_FUN_11dcb140;
                  DAT_123bf1a8 = _DAT_11de9ae0;
                  DAT_123bf1ac = _UNK_11de9ae4;
                  uRam123bf1b0 = _UNK_11de9ae8;
                  DAT_123bf1b4 = _UNK_11de9aec;
                  DAT_123bf1b8 = 1;
                  DAT_123bf18c = puVar14;
                  _DAT_123bf190 = puVar14;
                  _DAT_123bf194 = puVar14;
                  FUN_11a8911f(&LAB_11c719a0);
                }
                puVar14 = &DAT_123bf184;
              }
              pppppiStack_1b0 = (int *****)&PTR_FUN_11da54a8;
              if ((iStack_17c == -1) ||
                 ((((iStack_17c == 0 && (*(int *)(puVar14 + 0x30) != 0)) ||
                   (iVar6 = *(int *)(puVar14 + 0x28), iVar6 == 0)) ||
                  ((iVar7 = iStack_17c - *(int *)(puVar14 + 0x30), iVar7 < 0 ||
                   (*(int *)(puVar14 + 0x24) <= iVar7)))))) {
LAB_107f9a3d:
                iVar6 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(puVar14 + 0x20) + (iVar7 / iVar6) * 4);
                if (iVar8 == 0) goto LAB_107f9a3d;
                iVar6 = *(int *)(iVar8 + (iVar7 % iVar6) * 4);
              }
              if (iVar6 != 0) {
                if (pppppiStack_1ac != (int *****)0x0) {
                  iStack_58 = iStack_17c;
                  piStack_60 = (int *)0x0;
                  uStack_5c = 3;
                  (**(code **)(*piStack_178 + 0x14))
                            (uStack_170,"nTargetID1",&piStack_60,((byte)uStack_174 & 0x8f) == 10);
                  if ((uStack_5c >> 6 & 1) != 0) {
                    (**(code **)(*piStack_60 + 8))(&piStack_60,iStack_58);
                  }
                }
                puStack_24 = auStack_44;
                auStack_44[0] = 0;
                _Src = "";
                if (*(char **)(iVar6 + 0x14) != (char *)0x0) {
                  _Src = *(char **)(iVar6 + 0x14);
                }
                ppiStack_50 = &piStack_60;
                pcVar1 = _Src;
                do {
                  pcVar28 = pcVar1;
                  pcVar1 = pcVar28 + 1;
                } while (*pcVar28 != '\0');
                pppppiStack_1b0 = (int *****)(pcVar28 + -(int)_Src);
                pcVar1 = (char *)((int)pppppiStack_1b0 + 1);
                ppiStack_4c = ppiStack_50;
                puStack_20 = puStack_24;
                if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_100b73e0();
                }
                if ((char *)0x10 < pcVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(pcVar1);
                }
                if (pcVar28 != _Src) {
                  pvVar15 = memcpy(ppiStack_50,_Src,(size_t)pppppiStack_1b0);
                  ppiStack_50 = (int **)((int)pvVar15 + (int)pppppiStack_1b0);
                }
                *(char *)ppiStack_50 = '\0';
                cVar4 = FUN_100ecfd0(ppiStack_4c,(int)ppiStack_50 - (int)ppiStack_4c,auStack_44,4);
                if (cVar4 == '\0') {
                  FUN_100e61d0(L"<Error When GetUnicodeString>",L"");
                }
                if ((ppiStack_4c != &piStack_60) && (ppiStack_4c != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_4c);
                }
                pppppiVar17 = pppppiStack_1ac;
                if ((pppppiStack_1ac != (int *****)0x0) && (puStack_20 != (undefined2 *)0x0)) {
                  pppppiStack_1a0 = (int *****)0x0;
                  local_19c = 0;
                  FUN_11a98e20(&pppppiStack_1a0,puStack_20);
                  (**(code **)(*piStack_180 + 0x14))
                            (piStack_178,"strTarget1",&stack0xfffffe58,
                             ((byte)iStack_17c & 0x8f) == 10);
                  if ((local_19c >> 6 & 1) != 0) {
                    (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
                  }
                }
                if ((puStack_20 != auStack_44) && (puStack_20 != (undefined2 *)0x0)) {
                  FUN_10c3d5d0(puStack_20);
                }
                piVar22 = piStack_180;
                if (pppppiVar17 != (int *****)0x0) {
                  pppppiStack_1a0 = (int *****)0x0;
                  local_19c = 3;
                  local_198 = piStack_180;
                  (**(code **)(*piStack_178 + 0x14))
                            (uStack_170,"nCurCount",&pppppiStack_1a0,((byte)uStack_174 & 0x8f) == 10
                            );
                  if ((local_19c >> 6 & 1) != 0) {
                    (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
                  }
                  if (pppppiVar17 != (int *****)0x0) {
                    local_198 = piStack_f4;
                    pppppiStack_1a0 = (int *****)0x0;
                    local_19c = 3;
                    (**(code **)(*piStack_178 + 0x14))
                              (uStack_170,"nMaxCount",&pppppiStack_1a0,
                               ((byte)uStack_174 & 0x8f) == 10);
                    if ((local_19c >> 6 & 1) != 0) {
                      (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
                    }
                  }
                }
                if ((piStack_15c != (int *)&DAT_00000004) || ((int)piVar22 < (int)piStack_f4)) {
                  piStack_15c = (int *)0x0;
                }
                if (pppppiVar17 != (int *****)0x0) {
                  pppppiStack_1a0 = (int *****)0x0;
                  local_19c = 2;
                  local_198 = (int *)CONCAT31(local_198._1_3_,1);
                  (**(code **)(*piStack_178 + 0x14))
                            (uStack_170,"isPointMaterial",&pppppiStack_1a0,
                             ((byte)uStack_174 & 0x8f) == 10);
                  if ((local_19c >> 6 & 1) != 0) {
                    (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
                  }
                }
                (**(code **)(*piStack_f0 + 0x3c))(uStack_e8,&piStack_178);
              }
              piVar22 = piStack_12c;
              if (iStack_120 != 0) {
                while (piVar22 != (int *)0x0) {
                  FUN_10463900(piVar22[3]);
                  piVar9 = (int *)piVar22[2];
                  FUN_10c3d5d0(piVar22);
                  piVar22 = piVar9;
                }
                puStack_128 = auStack_130;
                piStack_12c = (int *)0x0;
                iStack_120 = 0;
                puStack_124 = puStack_128;
              }
              if (iStack_c0 != 0) {
                FUN_10c3d5d0(iStack_c0);
              }
              iStack_f8 = iStack_f8 + 1;
            } while (iStack_f8 < 6);
            pppppiVar17 = pppppiStack_144;
            if (iStack_138 != 0) {
              while (pppppiVar17 != (int *****)0x0) {
                FUN_10463900(pppppiVar17[3]);
                pppppiVar13 = (int *****)pppppiVar17[2];
                FUN_10c3d5d0(pppppiVar17);
                pppppiVar17 = pppppiVar13;
              }
            }
            pppppiVar17 = pppppiStack_1ac;
            piVar22 = (int *)uStack_90;
          }
          if (pppppiVar17 != (int *****)0x0) {
            pppppiStack_1a0 = (int *****)0x0;
            local_19c = 3;
            local_198 = piVar22;
            (**(code **)(*piStack_118 + 0x14))
                      (uStack_110,"nQuestID",&pppppiStack_1a0,((byte)uStack_114 & 0x8f) == 10);
            if ((local_19c >> 6 & 1) != 0) {
              (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
            }
            if (pppppiVar17 != (int *****)0x0) {
              local_198 = piStack_15c;
              pppppiStack_1a0 = (int *****)0x0;
              local_19c = 3;
              (**(code **)(*piStack_118 + 0x14))
                        (uStack_110,"nQuestStatus",&pppppiStack_1a0,((byte)uStack_114 & 0x8f) == 10)
              ;
              if ((local_19c >> 6 & 1) != 0) {
                (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
              }
              if (pppppiVar17 != (int *****)0x0) {
                local_198 = uStack_90._4_4_;
                pppppiStack_1a0 = (int *****)0x0;
                local_19c = 3;
                (**(code **)(*piStack_118 + 0x14))
                          (uStack_110,"nQuestLevel",&pppppiStack_1a0,((byte)uStack_114 & 0x8f) == 10
                          );
                if ((local_19c >> 6 & 1) != 0) {
                  (*(code *)(*pppppiStack_1a0)[2])(&pppppiStack_1a0,local_198);
                }
              }
            }
          }
          ppiStack_50 = &piStack_60;
          piStack_60 = (int *)((uint)piStack_60 & 0xffffff00);
          ppiStack_4c = ppiStack_50;
          FUN_100e5aa0(ppiStack_50);
          FUN_104d1670("strQuestName",ppiStack_50);
          if ((ppiStack_50 != &piStack_64) && (ppiStack_50 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_50);
          }
          (**(code **)(*piStack_ac + 0x3c))(uStack_a4,auStack_11c);
          if ((uStack_174 >> 6 & 1) != 0) {
            (**(code **)(*piStack_178 + 8))(&piStack_178,uStack_170);
            piStack_178 = (int *)0x0;
          }
          uStack_174 = 0;
          if ((uStack_ec >> 6 & 1) != 0) {
            (**(code **)(*piStack_f0 + 8))(&piStack_f0,uStack_e8);
          }
          iStack_150 = iStack_150 + 1;
        } while (iStack_150 < (int)*ppppiStack_14c);
      }
      if ((uStack_d4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_d8 + 8))(&piStack_d8,puStack_d0);
        piStack_d8 = (int *)0x0;
      }
      uStack_d4 = 0;
      if ((uStack_114 >> 6 & 1) != 0) {
        (**(code **)(*piStack_118 + 8))(&piStack_118,uStack_110);
      }
    }
  }
  if ((uStack_a4 >> 6 & 1) != 0) {
    (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108131b0 @ 108131b0  size=224 ===== */
// strings:
//   "g_refuseTradeRequest"
//   "TradeRespondCancelHandler"
//   "TradeRespondOkHandler"

/* [RE-AUTO c0]
   strings:
     ""g_refuseTradeRequest""
     ""TradeRespondCancelHandler""
     ""TradeRespondOkHandler"" */

void FUN_108131b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  char *pcStack_24;
  
  pcStack_24 = (char *)0x108131d3;
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iVar1 != 0) {
    if ((DAT_123c73f4 & 1) == 0) {
      DAT_123c73f4 = DAT_123c73f4 | 1;
      pcStack_24 = "g_refuseTradeRequest";
      uStack_28 = 0x10813203;
      DAT_123c73f8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    }
    pcStack_24 = (char *)0x10813218;
    iVar2 = (**(code **)(*DAT_123c73f8 + 8))();
    if (iVar2 == 0) {
      pcStack_24 = (char *)0x10813244;
      FUN_1112d520();
      pcStack_24 = (char *)0x0;
      uStack_28 = 0;
      FUN_1112d990(*param_1,0);
      uVar3 = FUN_1024e9b0(param_1 + 1,6);
      FUN_1112d7d0(0x1f4a,"TradeRespondOkHandler","TradeRespondCancelHandler",&uStack_28,uVar3);
      FUN_1112d550();
    }
    else if (*(int *)(iVar1 + 0x260dc) != 0) {
      pcStack_24 = (char *)0x0;
      uStack_28 = 0;
      FUN_1130eb90(*param_1);
      return;
    }
  }
  return;
}



/* ===== FUN_1081c610 @ 1081c610  size=734 ===== */
// strings:
//   "EmbedJewel_IsPlayerOpenEmbedUIFirstTime"
//   "EmbedJewel_putEquipIntoSlot"
//   "EmbedJewel_checkPutEquipIntoSlot"
//   "EmbedJewel_requestEquipEmbedJewel"
//   "EmbedJewel_requestEquipEmbedJewelByArray"
//   "NewEmbedJewel_requestEquipEmbedJewelByArray"
//   "EmbedJewel_checkEquipEmbedJewel"
//   "EmbedJewel_checkEquipEmbedJewelByArray"
//   "EmbedJewel_RemoveGem"
//   "NewEmbedJewel_RemoveGem"
//   "EmbedJewel_putJewelIntoSlot"

/* [RE-AUTO c0]
   strings:
     ""EmbedJewel_IsPlayerOpenEmbedUIFirstTime""
     ""EmbedJewel_putEquipIntoSlot""
     ""EmbedJewel_checkPutEquipIntoSlot""
     ""EmbedJewel_requestEquipEmbedJewel""
     ""EmbedJewel_requestEquipEmbedJewelByArray""
     ""NewEmbedJewel_requestEquipEmbedJewelByArray""
     ""EmbedJewel_checkEquipEmbedJewel""
     ""EmbedJewel_checkEquipEmbedJewelByArray""
     ""EmbedJewel_RemoveGem""
     ""NewEmbedJewel_RemoveGem"" */

void FUN_1081c610(void)

{
  undefined4 *in_stack_00000010;
  int *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_68 = (int *)0x0;
  local_64 = in_stack_00000010[1];
  local_5c = in_stack_00000010[3];
  local_60 = in_stack_00000010[2];
  local_58 = in_stack_00000010[4];
  if ((local_64 >> 6 & 1) != 0) {
    local_68 = (int *)*in_stack_00000010;
    (**(code **)(*local_68 + 4))(&local_68,local_60);
  }
  local_1c = in_stack_00000010[7];
  local_14 = in_stack_00000010[9];
  local_18 = in_stack_00000010[8];
  local_10 = in_stack_00000010[10];
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)in_stack_00000010[6];
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  uStack_34 = in_stack_00000010[0xd];
  uStack_2c = in_stack_00000010[0xf];
  uStack_30 = in_stack_00000010[0xe];
  uStack_28 = in_stack_00000010[0x10];
  piStack_38 = (int *)0x0;
  if ((uStack_34 >> 6 & 1) != 0) {
    piStack_38 = (int *)in_stack_00000010[0xc];
    (**(code **)(*piStack_38 + 4))(&piStack_38,uStack_30);
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
  FUN_104d13b0("EmbedJewel_IsPlayerOpenEmbedUIFirstTime",FUN_1081e0e0);
  FUN_104d13b0("EmbedJewel_putEquipIntoSlot",FUN_1081ca10);
  FUN_104d13b0("EmbedJewel_checkPutEquipIntoSlot",FUN_1081c950);
  FUN_104d13b0("EmbedJewel_requestEquipEmbedJewel",FUN_1081dbe0);
  FUN_104d13b0("EmbedJewel_requestEquipEmbedJewelByArray",FUN_1081d640);
  FUN_104d13b0("NewEmbedJewel_requestEquipEmbedJewelByArray",FUN_1081d910);
  FUN_104d13b0("EmbedJewel_checkEquipEmbedJewel",FUN_1081d2d0);
  FUN_104d13b0("EmbedJewel_checkEquipEmbedJewelByArray",FUN_1081cf80);
  FUN_104d13b0("EmbedJewel_RemoveGem",FUN_1081df60);
  FUN_104d13b0("NewEmbedJewel_RemoveGem",FUN_1081e020);
  FUN_104d13b0("EmbedJewel_putJewelIntoSlot",FUN_1081bf20);
  FUN_104d13b0("EmbedJewel_putJewelIntoSlot",FUN_1081bf20);
  FUN_104d13b0("EmbedJewel_putJewelIntoSlot",FUN_1081bf20);
  FUN_104d13b0("EmbedJewel_putJewelIntoSlot",FUN_1081bf20);
  if ((uStack_4c >> 6 & 1) != 0) {
    (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
    piStack_50 = (int *)0x0;
  }
  uStack_4c = 0;
  if ((uStack_34 >> 6 & 1) != 0) {
    (**(code **)(*piStack_38 + 8))(&piStack_38,uStack_30);
    piStack_38 = (int *)0x0;
  }
  uStack_34 = 0;
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
    local_20 = (int *)0x0;
  }
  local_1c = 0;
  if ((local_64 >> 6 & 1) != 0) {
    (**(code **)(*local_68 + 8))(&local_68,local_60);
  }
  return;
}



/* ===== FUN_10835cb0 @ 10835cb0  size=3593 ===== */
// calls: sprintf
// strings:
//   "sys_show_damage_number"
//   "cl_MHFCCameraPitchControlByMouseZ"
//   "g_firstAtkRotEnable"
//   "r_Fullscreen"
//   "cl_ShowLocalPlayerNamePad"
//   "g_otherAtkRotEnable"
//   "pl_autoHolster"
//   "g_iCommonResetCameraType"
//   "g_iGunAimControlType"
//   "cl_ShowLocalPlayerTitle"
//   "r_ShowHrLevel"
//   "cl_invertMouse"
//   "cl_iEnableBothKeyAndPad"
//   "cl_iEnablePadHeadIcon"
//   "cl_fXICameraMoveHValue"
//   "cl_fXICameraMoveVValue"
//   "cl_fXIStickAimCameraMoveHValue"
//   "cl_fXIStickAimCameraMoveVValue"
//   "g_fGamepadMouseMoveSpeed"
//   "g_Gamepad_Feedback"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""sys_show_damage_number""
     ""cl_MHFCCameraPitchControlByMouseZ""
     ""g_firstAtkRotEnable""
     ""r_Fullscreen""
     ""cl_ShowLocalPlayerNamePad""
     ""g_otherAtkRotEnable""
     ""pl_autoHolster""
     ""g_iCommonResetCameraType""
     ""g_iGunAimControlType""
     ""cl_ShowLocalPlayerTitle"" */

void FUN_10835cb0(int **param_1,int param_2,int param_3,float param_4,int param_5)

{
  int **ppiVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfStack_268;
  int *piStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  char *pcStack_254;
  int **ppiStack_250;
  float fStack_24c;
  float fStack_248;
  char *pcStack_244;
  char *pcStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  char *pcStack_224;
  char *pcStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  char *pcStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  char *pcStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  char *pcStack_1f4;
  char *pcStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  int **ppiStack_1a0;
  int *piStack_19c;
  uint uStack_18c;
  int *piStack_188;
  uint uStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_164;
  char acStack_160 [8];
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_148;
  float fStack_138;
  undefined4 uStack_130;
  char acStack_124 [4];
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  int **local_e0;
  int *piStack_d0;
  uint uStack_cc;
  int *piStack_c8;
  int *piStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_18c;
  local_e0 = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0.0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_19c = param_1[2];
      ppiStack_1a0 = param_1;
      pcStack_1a4 = (char *)0x10835d1e;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar7 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_19c = (int *)0x11dcdf00;
    ppiStack_1a0 = (int **)0x10835d41;
    piVar5 = (int *)(**(code **)(**(int **)(iVar7 + 0x2c) + 0x54))();
    ppiStack_1a0 = (int **)0x10835d48;
    uVar6 = (**(code **)(*piVar5 + 8))();
    ppiStack_1a0 = (int **)0x11dcdedc;
    pcStack_1a4 = (char *)0x10835d5d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a4 = (char *)0x10835d64;
    uStack_110 = (**(code **)(*piVar5 + 8))();
    pcStack_1a4 = "g_firstAtkRotEnable";
    pcStack_1a8 = (char *)0x10835d7e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a8 = (char *)0x10835d85;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1a8 = "r_Fullscreen";
    pcStack_1ac = (char *)0x10835d9f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ac = (char *)0x10835da6;
    DAT_123bb9f4 = (**(code **)(*piVar5 + 8))();
    pcStack_1ac = "cl_ShowLocalPlayerNamePad";
    pcStack_1b0 = (char *)0x10835dbd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b0 = (char *)0x10835dc4;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1b0 = "g_otherAtkRotEnable";
    pcStack_1b4 = (char *)0x10835dde;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b4 = (char *)0x10835de5;
    uStack_f0 = (**(code **)(*piVar5 + 8))();
    pcStack_1b4 = "pl_autoHolster";
    pcStack_1b8 = (char *)0x10835dff;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b8 = (char *)0x10835e06;
    uStack_f8 = (**(code **)(*piVar5 + 8))();
    pcStack_1b8 = "g_iCommonResetCameraType";
    pcStack_1bc = (char *)0x10835e20;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1bc = (char *)0x10835e27;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1bc = "g_iGunAimControlType";
    pcStack_1c0 = (char *)0x10835e3e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c0 = (char *)0x10835e45;
    uStack_154 = (**(code **)(*piVar5 + 8))();
    pcStack_1c0 = "cl_ShowLocalPlayerTitle";
    pcStack_1c4 = (char *)0x10835e5c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c4 = (char *)0x10835e63;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1c4 = "r_ShowHrLevel";
    pcStack_1c8 = (char *)0x10835e7d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c8 = (char *)0x10835e84;
    uStack_114 = (**(code **)(*piVar5 + 8))();
    pcStack_1c8 = "cl_invertMouse";
    pcStack_1cc = (char *)0x10835e9e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1cc = (char *)0x10835ea5;
    uStack_164 = (**(code **)(*piVar5 + 8))();
    pcStack_1cc = "cl_iEnableBothKeyAndPad";
    piStack_188 = (int *)0x0;
    pcStack_1d0 = (char *)0x10835ec4;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d0 = "cl_iEnableBothKeyAndPad";
      pcStack_1d4 = (char *)0x10835eda;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d4 = (char *)0x10835ee1;
      uStack_18c = (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d0 = "cl_iEnablePadHeadIcon";
    pcStack_1d4 = (char *)0x10835f00;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d4 = "cl_iEnablePadHeadIcon";
      pcStack_1d8 = (char *)0x10835f16;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d8 = (char *)0x10835f1d;
      (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d4 = "cl_fXICameraMoveHValue";
    pcStack_1d8 = (char *)0x10835f34;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1d8 = (char *)0x10835f3b;
    uStack_130 = (**(code **)(*piVar5 + 8))();
    pcStack_1d8 = "cl_fXICameraMoveVValue";
    pcStack_1dc = (char *)0x10835f55;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1dc = (char *)0x10835f5c;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1dc = "cl_fXIStickAimCameraMoveHValue";
    pcStack_1e0 = (char *)0x10835f73;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e0 = (char *)0x10835f7a;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1e0 = "cl_fXIStickAimCameraMoveVValue";
    pcStack_1e4 = (char *)0x10835f94;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e4 = (char *)0x10835f9b;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1e4 = "g_fGamepadMouseMoveSpeed";
    pcStack_1e8 = (char *)0x10835fb2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e8 = (char *)0x10835fbb;
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_1e8 = "g_Gamepad_Feedback";
    fStack_138 = (float)fVar9;
    pcStack_1ec = (char *)0x10835fd4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ec = (char *)0x10835fdb;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1ec = "g_DInputKeyboard";
    pcStack_1ac = (char *)0x0;
    pcStack_1f0 = (char *)0x10835ffd;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f0 = "g_DInputKeyboard";
      pcStack_1f4 = (char *)0x10836013;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f4 = (char *)0x1083601a;
      pcStack_1b0 = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f0 = "g_UseEmbeddedIME";
    pcStack_1b8 = (char *)0x0;
    pcStack_1f4 = (char *)0x10836039;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f4 = "g_UseEmbeddedIME";
      pcStack_1f8 = (char *)0x1083604f;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f8 = (char *)0x10836056;
      pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f4 = "g_refuseTeamInvite";
    pcStack_1f8 = (char *)0x1083606d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1f8 = (char *)0x10836074;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1f8 = "g_FriendRemind";
    pcStack_1fc = (char *)0x1083608e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1fc = (char *)0x10836095;
    pcStack_1b4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_1fc = "g_refuseTradeRequest";
    pcStack_200 = (char *)0x108360ac;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_200 = (char *)0x108360b3;
    uStack_148 = (**(code **)(*piVar5 + 8))();
    pcStack_200 = "g_refuseTeamRequest";
    pcStack_204 = (char *)0x108360cd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_204 = (char *)0x108360d4;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_204 = "g_GuilderRemind";
    pcStack_208 = (char *)0x108360ee;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_208 = (char *)0x108360f5;
    uStack_120 = (**(code **)(*piVar5 + 8))();
    pcStack_208 = "g_OtherGuildName";
    pcStack_20c = (char *)0x1083610f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_20c = (char *)0x10836116;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_20c = "g_selfGuildName";
    pcStack_210 = (char *)0x10836130;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_210 = (char *)0x10836137;
    pcStack_1c4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_210 = "e_ChatDialogRendering";
    pcStack_214 = (char *)0x1083614e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_214 = (char *)0x10836155;
    pcStack_1c0 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_214 = "g_refuseGuildRequest";
    pcStack_218 = (char *)0x1083616c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_218 = (char *)0x10836173;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_218 = "g_refuseClanRequest";
    pcStack_21c = (char *)0x1083618a;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_21c = (char *)0x10836191;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_21c = "cl_ShowPlayerNamePadMode";
    pcStack_220 = (char *)0x108361a8;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_220 = (char *)0x108361af;
    piStack_180 = (int *)(**(code **)(*piVar5 + 8))();
    pcStack_220 = "cl_ShowHeroNamePadMode";
    pcStack_224 = (char *)0x108361c9;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_224 = (char *)0x108361d0;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_224 = "cl_ShowPlayerPetName";
    pcStack_228 = (char *)0x108361e7;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_228 = (char *)0x108361ee;
    fStack_138 = (float)(**(code **)(*piVar5 + 8))();
    pcStack_228 = "cl_ShowHeroPetName";
    pcStack_22c = (char *)0x10836208;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_22c = (char *)0x1083620f;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_22c = "cl_ShowBossDeadGlow";
    pcStack_230 = (char *)0x10836226;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_230 = (char *)0x1083622d;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_230 = "g_NPCName_hide";
    pcStack_234 = (char *)0x10836244;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_234 = (char *)0x1083624b;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_234 = "cl_TaskTraceMode";
    pcStack_238 = (char *)0x10836262;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_238 = (char *)0x10836269;
    pcStack_1ac = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_238 = "g_hideEmoji";
    pcStack_23c = (char *)0x10836283;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_23c = (char *)0x1083628a;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_23c = "r_HideC2PlaeyerEffect";
    pcStack_240 = (char *)0x108362a4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_240 = (char *)0x108362ab;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_240 = "r_HideSelfPlaeyerEffect";
    pcStack_244 = (char *)0x108362c2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_244 = (char *)0x108362c9;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_244 = "cl_iHideBreakEffect";
    fStack_248 = 5.182273e-29;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    fStack_248 = 5.182277e-29;
    pcStack_21c = (char *)(**(code **)(*piVar5 + 8))();
    fStack_248 = param_4;
    fStack_24c = 5.1822875e-29;
    FUN_104f4330();
    ppiStack_250 = &piStack_180;
    piStack_180 = (int *)0x0;
    uStack_17c = 0;
    pcStack_1c4 = (char *)CONCAT31(pcStack_1c4._1_3_,((byte)uStack_154 & 0x8f) == 10);
    fStack_24c = (float)pcStack_1c4;
    pcStack_254 = "SWITCH_CLASS_NAME";
    uStack_258 = uStack_150;
    uStack_25c = 0x10836351;
    cVar2 = (**(code **)(*piStack_158 + 0x10))();
    piStack_264 = (int *)0x0;
    if (((cVar2 != '\0') && (((byte)uStack_18c & 0x8f) == 6)) &&
       (piStack_264 = piStack_188, (uStack_18c >> 6 & 1) != 0)) {
      piStack_264 = (int *)*piStack_188;
    }
    uStack_25c = 0;
    uStack_260 = 0;
    pfStack_268 = &fStack_248;
    fStack_248 = 0.0;
    pcStack_244 = (char *)0x0;
    FUN_11a98de0();
    FUN_104d1550("isShowDamageNum",uVar6);
    FUN_104d1550("isMouseWheelControlCamera",pcStack_1d8);
    FUN_104d1550("isCamereFollowAction",pcStack_1d0);
    FUN_104d15e0("isWindowsMode",DAT_123bb9f4 == 0);
    FUN_104d1550("isShowSelf",pcStack_1c8);
    FUN_104d1550("unisCamereFollowAction",pcStack_1a8);
    FUN_104d1550("g_iCommonResetCameraType",pcStack_21c);
    FUN_104d1550("autoHolster",pcStack_1ac);
    if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x2c) != 0)) {
      iVar8 = 1;
      iVar7 = DAT_1202e818;
      do {
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2c) != 0)) {
          sprintf(acStack_160,"g_Gamepad_WeaponType_%d",iVar8);
          piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))(acStack_160);
          uVar6 = (**(code **)(*piVar5 + 8))();
          sprintf(acStack_124,"weapon_type_%d",iVar8);
          FUN_104d1550(acStack_124,uVar6);
          iVar7 = DAT_1202e818;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xd);
    }
    FUN_104d1550("g_playerTitleType",pcStack_214);
    FUN_104d1550("g_otherPlayerTitleType",pcStack_1cc);
    FUN_104d1550("g_hideSelfCat",pcStack_20c);
    FUN_104d1550("g_hideOtherCat",uStack_17c);
    FUN_104d1550("gamePad_cameraReversal",pcStack_204);
    FUN_104d1550("gamePad_disableMouse",pcStack_228);
    FUN_104d1550("gamePad_HeadIcon",pcStack_230);
    FUN_104d1550("gamePad_cameraHorizon",pcStack_1c4);
    FUN_104d1550("gamePad_cameraVertical",pcStack_1fc);
    FUN_104d1550("gamePad_foucsHorizon",pcStack_1a4);
    FUN_104d1550("gamePad_fouceVertical",pcStack_1f4);
    FUN_104d14d0("gamePad_mouseSpeed");
    FUN_104d1550("gamePad_Shake",pcStack_1ec);
    FUN_104d1550("g_useKeyboardCapable",pcStack_22c);
    FUN_104d1550("g_useInputPadCapable",pcStack_234);
    FUN_104d1550("g_refuseTeamInvite",piStack_180);
    FUN_104d1550("g_FriendRemind",pcStack_224);
    FUN_104d1550("g_refuseTradeRequest",pcStack_1b4);
    FUN_104d1550("g_refuseTeamRequest",pcStack_1dc);
    FUN_104d1550("g_GuilderRemind",uStack_184);
    FUN_104d1550("g_OtherGuildName",pcStack_1d4);
    FUN_104d1550("g_selfGuildName",pcStack_220);
    FUN_104d1550("g_popChat",pcStack_218);
    FUN_104d1550("g_refuseGuildRequest",pcStack_210);
    FUN_104d1550("g_refuseClanRequest",pcStack_208);
    FUN_104d1550("gunAim_ControlType",pcStack_200);
    FUN_104d1550("hideCapture",pcStack_1f8);
    FUN_104d1550("hideNpc",pcStack_1f0);
    FUN_104d1550("hideEmoji",pcStack_1e8);
    FUN_104d1550("taskTraceMode",pcStack_1e0);
    FUN_104d1550("hidetrailother",pcStack_23c);
    FUN_104d1550("hidetrailself",pcStack_238);
    FUN_104d1550("hideBreakEffect",pcStack_240);
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_244 = (char *)(float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouse");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel_v");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_248 = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseV");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_MHFpsRotSpeed");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_24c = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseJ");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_invertMouse");
    uVar6 = (**(code **)(*piVar5 + 8))();
    FUN_104d1550("i_mouse_accel_v_reverse",uVar6);
    (**(code **)(*piStack_188 + 0x14))
              (piStack_180,"switchVO",&pfStack_268,((byte)uStack_184 & 0x8f) == 10);
    FUN_113f3640();
    iVar7 = FUN_1115abd0();
    if (iVar7 == 0) {
      FUN_104d15e0("hidefashion",1);
      FUN_104d15e0("hidetaojian",1);
      uVar6 = 1;
    }
    else {
      piVar5 = (int *)(iVar7 + 0x25ddc);
      uVar3 = (**(code **)(*piVar5 + 4))();
      uStack_260 = CONCAT31(uStack_260._1_3_,uVar3);
      uVar4 = (**(code **)(*piVar5 + 0xc))();
      uStack_258 = CONCAT31(uStack_258._1_3_,uVar4);
      DAT_123bb9f1 = (**(code **)(*piVar5 + 0x14))();
      uStack_25c = CONCAT31(uStack_25c._1_3_,DAT_123bb9f1);
      DAT_123bb96b = uVar4;
      DAT_123bb9f0 = uVar3;
      FUN_104d15e0("hidefashion",uStack_260);
      FUN_104d15e0("hidetaojian",uStack_258);
      uVar6 = uStack_25c;
    }
    FUN_104d15e0("hidehelmet",uVar6);
    FUN_104d15e0("hidetitle",pcStack_1e0 == (char *)0x0);
    FUN_104d15e0("hideHRLevel",pcStack_1d8 == (char *)0x0);
    ppiVar1 = local_e0;
    if (((uint)local_e0[1] >> 6 & 1) != 0) {
      piStack_19c = local_e0[2];
      ppiStack_1a0 = local_e0;
      pcStack_1a4 = (char *)0x108369fe;
      (**(code **)(**local_e0 + 8))();
      *ppiVar1 = (int *)0x0;
    }
    ppiVar1[1] = (int *)0x2;
    *(undefined1 *)(ppiVar1 + 2) = 1;
    if ((uStack_184 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_188;
      piStack_19c = piStack_180;
      pcStack_1a4 = (char *)0x10836a2c;
      (**(code **)(*piStack_188 + 8))();
      piStack_188 = (int *)0x0;
    }
    uStack_184 = 0;
    if ((uStack_cc >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_d0;
      piStack_19c = piStack_c8;
      pcStack_1a4 = (char *)0x10836a65;
      (**(code **)(*piStack_d0 + 8))();
      piStack_d0 = (int *)0x0;
    }
    uStack_cc = 0;
    if ((uStack_a4 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_a8;
      piStack_19c = piStack_a0;
      pcStack_1a4 = (char *)0x10836aa4;
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10836b50 @ 10836b50  size=1346 ===== */
// strings:
//   "g_refuseTeamInvite"
//   "g_FriendRemind"
//   "r_HideSelfPlaeyerEffect"
//   "r_HideC2PlaeyerEffect"
//   "g_refuseClanRequest"
//   "g_refuseGuildRequest"
//   "g_refuseTradeRequest"
//   "g_refuseTeamRequest"
//   "g_GuilderRemind"
//   "cl_ShowPlayerNamePadMode"
//   "cl_ShowHeroNamePadMode"
//   "cl_ShowPlayerPetName"
//   "cl_ShowHeroPetName"
//   "cl_ShowBossDeadGlow"
//   "g_NPCName_hide"
//   "g_hideEmoji"
//   "cl_TaskTraceMode"
//   "g_DInputKeyboard"
//   "g_UseEmbeddedIME"
//   "cl_iHideBreakEffect"

/* [RE-AUTO c0]
   strings:
     ""g_refuseTeamInvite""
     ""g_FriendRemind""
     ""r_HideSelfPlaeyerEffect""
     ""r_HideC2PlaeyerEffect""
     ""g_refuseClanRequest""
     ""g_refuseGuildRequest""
     ""g_refuseTradeRequest""
     ""g_refuseTeamRequest""
     ""g_GuilderRemind""
     ""cl_ShowPlayerNamePadMode"" */

void FUN_10836b50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  
  uVar1 = *(undefined1 *)(param_3 + 0x28);
  uVar2 = *(undefined1 *)(param_3 + 0x38);
  uVar3 = *(undefined1 *)(param_3 + 0x48);
  uVar18 = *(undefined4 *)(param_3 + 0x58);
  uVar19 = *(undefined4 *)(param_3 + 0x68);
  uVar4 = *(undefined1 *)(param_3 + 0x78);
  cVar5 = *(char *)(param_3 + 0x88);
  uVar6 = *(undefined1 *)(param_3 + 0x98);
  uVar7 = *(undefined1 *)(param_3 + 8);
  uVar8 = *(undefined1 *)(param_3 + 0x18);
  uVar9 = *(undefined1 *)(param_3 + 0x138);
  uVar10 = *(undefined1 *)(param_3 + 0xa8);
  cVar11 = *(char *)(param_3 + 0xb8);
  cVar12 = *(char *)(param_3 + 200);
  cVar13 = *(char *)(param_3 + 0xd8);
  iVar23 = *(int *)(param_3 + 0xe8);
  uVar14 = *(undefined1 *)(param_3 + 0xf8);
  uVar15 = *(undefined1 *)(param_3 + 0x108);
  uVar16 = *(undefined1 *)(param_3 + 0x118);
  uVar17 = *(undefined1 *)(param_3 + 0x128);
  param_3 = (uint)*(byte *)(param_3 + 0x148);
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamInvite");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar7);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_FriendRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar8);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideSelfPlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar9);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideC2PlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar17);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseClanRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar10);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseGuildRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar6);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTradeRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar1);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar2);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_GuilderRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar19);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar18);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar11 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar5 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowBossDeadGlow");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar12 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_NPCName_hide");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar13 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_hideEmoji");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar16);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  bVar24 = false;
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_TaskTraceMode");
  if (piVar21 != (int *)0x0) {
    iVar22 = (**(code **)(*piVar21 + 8))();
    bVar24 = iVar22 != iVar23;
    (**(code **)(*piVar21 + 0x14))(iVar23);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_DInputKeyboard");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar14);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_UseEmbeddedIME");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar15);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_iHideBreakEffect");
  uVar20 = param_3;
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(param_3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0xb4))();
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x3b0))();
    FUN_11167fd0(uVar20 == 0);
    piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_ChatDialogRendering");
    if (piVar21 != (int *)0x0) {
      (**(code **)(*piVar21 + 0x14))(uVar4);
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
    }
    if ((bVar24) && (iVar23 = FUN_10d17440(), iVar23 != 0)) {
      FUN_10d17440();
      iVar23 = FUN_10d17870();
      if (iVar23 != 0) {
        FUN_10d17440();
        piVar21 = (int *)FUN_10d17870();
        (**(code **)(*piVar21 + 4))(0x231,(int)&param_3 + 3);
      }
    }
  }
  return;
}



/* ===== FUN_10899850 @ 10899850  size=342 ===== */
// strings:
//   "g_refuseTeamInvite"
//   "g_refuseTeamRequest"
//   "MsgBoxRespondCancelHandler"
//   "MsgBoxRespondOkHandler"

/* [RE-AUTO c0]
   strings:
     ""g_refuseTeamInvite""
     ""g_refuseTeamRequest""
     ""MsgBoxRespondCancelHandler""
     ""MsgBoxRespondOkHandler"" */

void FUN_10899850(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x260dc) != 0)) {
    iVar1 = param_1[1];
    uStack_28 = *param_1;
    if ((iVar1 == 0x1f49) || ((iVar1 == 0x204e || (iVar1 == 0x205c)))) {
      piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_refuseTeamInvite");
      iVar3 = (**(code **)(*piVar2 + 8))();
      if (iVar3 != 0) goto LAB_108998cc;
    }
    if ((iVar1 == 0x1f44) || (iVar1 == 0x204f)) {
      piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_refuseTeamRequest");
      iVar3 = (**(code **)(*piVar2 + 8))();
      if (iVar3 != 0) {
LAB_108998cc:
        FUN_1130eb90(uStack_28,0,0);
        return;
      }
    }
    FUN_1112d520();
    FUN_1112d990(uStack_28,0,0,0);
    uStack_2c = 0;
    iVar3 = FUN_1024e9b0(param_1 + 2,param_1[10]);
    FUN_10899d20(&stack0xffffffc8);
    FUN_1112d6d0(iVar1,"MsgBoxRespondOkHandler","MsgBoxRespondCancelHandler",&uStack_2c,
                 &stack0xffffffc8);
    if (iVar3 != 0) {
      FUN_10c3d5d0(iVar3);
    }
    FUN_1112d550();
  }
  return;
}



/* ===== FUN_1089a840 @ 1089a840  size=442 ===== */
// strings:
//   "InitModel"
//   "QuestInfoTipsData"
//   "CollectTipsData"
//   "OnOpenDailyScheduleByQuestID"
//   "OnOpenDailySchedule"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""QuestInfoTipsData""
     ""CollectTipsData""
     ""OnOpenDailyScheduleByQuestID""
     ""OnOpenDailySchedule"" */

void __fastcall FUN_1089a840(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_74;
  char *pcStack_70;
  code **ppcStack_6c;
  code ***pppcStack_68;
  code *pcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code **ppcStack_54;
  code **ppcStack_50;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x1089a874;
  FUN_100b62c0();
  pppcStack_34 = (code ***)CDailyRewardUI__RegisterHandlers;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1089a885;
  FUN_1089d120();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1089a89b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd35b5;
  pppcStack_40 = (code ***)0x11dd35a4;
  pppcStack_44 = (code ***)0x1089a8bb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1089cfc0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1089a8cc;
  FUN_1089d120();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x1089a8e2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd36bf;
  ppcStack_50 = (code **)0x11dd36b0;
  ppcStack_54 = (code **)0x1089a902;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  ppcStack_54 = (code **)CDailyRewardUI__BuildDailyScheduleRewardItemData;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1089a913;
  FUN_1089d120();
  if ((pppcStack_40 != &ppcStack_54) && (pppcStack_40 != (code ***)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x1089a929;
    FUN_10c3d5d0();
  }
  pppcStack_44 = &ppcStack_54;
  pppcStack_5c = (code ***)0x11dd36ac;
  ppcStack_60 = (code **)0x11dd3690;
  pcStack_64 = (code *)0x1089a949;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_1089acd0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  ppcStack_6c = (code **)0x1089a95a;
  FUN_1089d120();
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    ppcStack_6c = ppcStack_50;
    pcStack_70 = (char *)0x1089a970;
    FUN_10c3d5d0();
  }
  ppcStack_54 = &pcStack_64;
  ppcStack_6c = (code **)0x11dd368f;
  pcStack_70 = "OnOpenDailySchedule";
  pcStack_74 = (code *)0x1089a990;
  ppcStack_50 = ppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_1089ac70;
  FUN_1089d120(&ppcStack_6c);
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_60);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_1089ea60();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1089b5f0 @ 1089b5f0  size=1305 ===== */
// calls: CPet::SetName
// strings:
//   "DAILY_SCHEDULE_QUEST_SIMPLE_DATA"
//   "questDataArray"
//   "questName"
//   "priority"
//   "bgPath"
//   "bgPath2"
//   "questCounts"
//   "questFinishCounts"
//   "questType"
//   "commentLevel"
//   "questID"
//   "roleLevelRequire"
//   "roleHSLevelRequire"

/* [RE-AUTO c0]
   strings:
     ""DAILY_SCHEDULE_QUEST_SIMPLE_DATA""
     ""questDataArray""
     ""questName""
     ""priority""
     ""bgPath""
     ""bgPath2""
     ""questCounts""
     ""questFinishCounts""
     ""questType""
     ""commentLevel"" */

void FUN_1089b5f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int *unaff_ESI;
  int unaff_EDI;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  int *local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  uint uStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined4 *puStack_44;
  undefined4 *apuStack_40 [13];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&puStack_d4;
  local_b4 = param_2;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  local_b0 = (int *)0x0;
  local_a4 = param_4[3];
  local_ac = param_4[1];
  local_a8 = param_4[2];
  local_a0 = param_4[4];
  if ((local_ac >> 6 & 1) != 0) {
    local_b0 = (int *)*param_4;
    (**(code **)(*local_b0 + 4))(&local_b0,local_a8);
  }
  uStack_80 = 0;
  uStack_7c = 0;
  puVar14 = &uStack_80;
  uStack_c4 = CONCAT31(uStack_c4._1_3_,((byte)local_ac & 0x8f) == 10);
  pcVar13 = "DAILY_SCHEDULE_QUEST_SIMPLE_DATA";
  uVar12 = local_a8;
  cVar3 = (**(code **)(*local_b0 + 0x10))
                    (local_a8,"DAILY_SCHEDULE_QUEST_SIMPLE_DATA",puVar14,uStack_c4);
  if ((cVar3 != '\0') && (((byte)uStack_8c & 0x8f) == 6)) {
    if ((uStack_8c >> 6 & 1) == 0) {
      puStack_d4 = puStack_88;
    }
    else {
      puStack_d4 = (undefined4 *)*puStack_88;
    }
    piStack_60 = (int *)0x0;
    uStack_5c = 0;
    cVar3 = (**(code **)(*piStack_c0 + 0x10))
                      (uStack_b8,"questDataArray",&piStack_60,((byte)uStack_bc & 0x8f) == 10);
    if (((cVar3 != '\0') && (iVar4 = FUN_107cb5c0(), iVar4 != 0)) &&
       (piVar1 = *(int **)(iVar4 + 0x2ab0), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xa0))(&piStack_6c);
      piVar10 = piStack_6c;
      if (piStack_6c != piStack_68) {
        do {
          piVar2 = (int *)*piVar10;
          if (piVar2 != (int *)0x0) {
            uStack_d0 = (**(code **)(*piVar2 + 0x18))();
            uStack_cc = 0;
            uStack_c8 = 0;
            uVar5 = (**(code **)(*piVar1 + 0x50))(uStack_d0);
            iVar4 = (**(code **)(*unaff_ESI + 100))(puStack_d4);
            if (unaff_EDI == 0) {
              if ((piVar2[0xb] != 0) && (iVar8 = FUN_1089e5e0(), iVar8 != 0)) {
                uStack_c8 = *(undefined4 *)(iVar8 + 0x24);
                uStack_cc = 0;
                if (iVar4 != 0) {
                  uStack_cc = uStack_c8;
                }
              }
            }
            else if ((*(int *)(unaff_EDI + 0x18) != 0) &&
                    (piVar6 = (int *)FUN_1161a1e0(0x20), piVar6 != (int *)0x0)) {
              uStack_cc = (**(code **)(*piVar6 + 0x14))();
              uStack_c8 = (**(code **)(*piVar6 + 0x18))();
            }
            unaff_ESI = (int *)piVar2[0xb];
            if ((unaff_ESI != (int *)0x0) && ((char)unaff_ESI[0x4b] == '\0')) {
              iStack_70 = unaff_ESI[0x3a];
              puVar11 = &DAT_11d9d32b;
              unaff_EDI = 0;
              CPet__SetName(&DAT_11d9d32b);
              puVar7 = (undefined4 *)FUN_117c1280(apuStack_40);
              uStack_80 = *puVar7;
              puVar7 = (undefined4 *)FUN_117c1330(auStack_4c);
              uStack_80 = *puVar7;
              puVar7 = (undefined4 *)puVar14[0x37];
              puVar9 = &DAT_11d9d32b;
              if ((undefined1 *)puVar14[2] != (undefined1 *)0x0) {
                puVar9 = (undefined1 *)puVar14[2];
              }
              CPet__SetName(puVar9);
              uStack_b8 = 0;
              local_b4 = 0;
              FUN_11a98de0(&uStack_b8,uVar5,0,0);
              puStack_44 = (undefined4 *)auStack_54;
              auStack_54[0] = 0;
              apuStack_40[0] = puStack_44;
              FUN_100e5aa0(puStack_44);
              FUN_104d1670("questName",puStack_44);
              puVar14 = puVar7;
              if ((puStack_44 != &uStack_58) && (puStack_44 != (undefined4 *)0x0)) {
                FUN_10c3d5d0(puStack_44);
                puVar14 = puVar7;
              }
              iVar4 = FUN_1089a580();
              if (iVar4 != 0) {
                FUN_104d1550("priority",*(undefined4 *)(iVar4 + 0x18));
                FUN_104d1670("bgPath",*(undefined4 *)(iVar4 + 0x34));
                FUN_104d1670("bgPath2",*(undefined4 *)(iVar4 + 0x4c));
              }
              FUN_104d1550("questCounts",uVar12);
              FUN_104d1550("questFinishCounts",pcVar13);
              FUN_104d1550("questType",uStack_94);
              FUN_104d1550("commentLevel",puVar9);
              FUN_104d1550("questID",puVar11);
              FUN_104d1550("roleLevelRequire",uStack_9c);
              FUN_104d1550("roleHSLevelRequire",uStack_98);
              (**(code **)(*piStack_84 + 0x3c))(uStack_7c,&uStack_cc);
              FUN_104d7c10();
              FUN_100e5670();
            }
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piStack_68);
      }
      if (piStack_6c != (int *)0x0) {
        FUN_10c3d5d0(piStack_6c);
      }
    }
    if ((uStack_5c >> 6 & 1) != 0) {
      (**(code **)(*piStack_60 + 8))(&piStack_60,uStack_58);
    }
  }
  if ((uStack_8c >> 6 & 1) != 0) {
    (**(code **)(*piStack_90 + 8))(&piStack_90,puStack_88);
    piStack_90 = (int *)0x0;
  }
  uStack_8c = 0;
  if ((uStack_bc >> 6 & 1) != 0) {
    (**(code **)(*piStack_c0 + 8))(&piStack_c0,uStack_b8);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1089bb10 @ 1089bb10  size=1321 ===== */
// calls: CPet::SetName
// strings:
//   "questName"
//   "commentLevel"
//   "todayQuestTimes"
//   "acceptQuestLevel"
//   "openTime"
//   "contribute"
//   "npcName"
//   "description"
//   "expAward"
//   "moneyAward"
//   "questClass"

/* [RE-AUTO c0]
   strings:
     ""questName""
     ""commentLevel""
     ""todayQuestTimes""
     ""acceptQuestLevel""
     ""openTime""
     ""contribute""
     ""npcName""
     ""description""
     ""expAward""
     ""moneyAward"" */

void FUN_1089bb10(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  iVar1 = FUN_104d8d20(param_1);
  local_54 = 0;
  local_28 = 0;
  local_24 = iVar1;
  CPet__SetName(&DAT_11d9d32b);
  local_4c = 0;
  local_44 = 0;
  local_48 = 0;
  local_30 = 0;
  CPet__SetName(&DAT_11d9d32b);
  local_2c = 0;
  CPet__SetName(&DAT_11d9d32b);
  local_34 = 0;
  CPet__SetName(&DAT_11d9d32b);
  local_40 = 0;
  CPet__SetName(&DAT_11d9d32b);
  local_3c = 0;
  CPet__SetName(&DAT_11d9d32b);
  local_38 = 0;
  CPet__SetName(&DAT_11d9d32b);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x38) != 0) {
        puVar7 = *(undefined1 **)(*(int *)(iVar1 + 0x38) + 0x1c);
        puVar6 = &DAT_11d9d32b;
        if (puVar7 != (undefined1 *)0x0) {
          puVar6 = puVar7;
        }
        CPet__SetName(puVar6);
      }
      local_54 = FUN_117c2650();
      puVar7 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar1 + 8) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(iVar1 + 8);
      }
      CPet__SetName(puVar7);
      puVar7 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar1 + 0x14) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(iVar1 + 0x14);
      }
      CPet__SetName(puVar7);
      puVar7 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar1 + 0xc) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(iVar1 + 0xc);
      }
      CPet__SetName(puVar7);
      local_4c = *(undefined4 *)(iVar1 + 0xdc);
      piVar2 = (int *)FUN_117c1280(local_5c);
      iVar1 = *piVar2;
      local_24 = iVar1;
      if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
          (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) &&
         ((iVar3 = (**(code **)(*piVar2 + 0xb4))(), iVar3 != 0 &&
          (piVar2 = *(int **)(iVar3 + 0x2ab0), iVar1 = local_24, piVar2 != (int *)0x0)))) {
        local_58 = (**(code **)(*piVar2 + 100))(local_50);
        iVar1 = (**(code **)(*piVar2 + 0x50))(local_50);
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
          iVar3 = FUN_1089e5e0();
          iVar1 = local_24;
          if (iVar3 != 0) {
            local_48 = *(undefined4 *)(iVar3 + 0x24);
            local_44 = 0;
            if (local_58 != 0) {
              local_44 = local_48;
            }
          }
        }
        else {
          piVar2 = (int *)FUN_1161a1e0(0x20);
          iVar1 = local_24;
          if (piVar2 != (int *)0x0) {
            local_44 = (**(code **)(*piVar2 + 0x14))();
            local_48 = (**(code **)(*piVar2 + 0x18))();
            iVar1 = local_24;
          }
        }
      }
      if (0 < iVar1) {
        uVar4 = FUN_1024e8a0(iVar1,1);
        FUN_1024ebe0(&local_40,&local_58,0x17f4,1,uVar4);
      }
    }
    uVar4 = FUN_1024e8a0(local_54,1);
    FUN_1024ebe0(&local_3c,&local_58,0x13c8,1,uVar4);
    uVar4 = FUN_1024e8a0(local_48,1);
    uVar5 = FUN_1024e8a0(local_44,1);
    FUN_1024ebe0(&local_38,&local_58,0x13c9,2,uVar5,uVar4);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("questName",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_104d1550("commentLevel",local_4c);
  local_20[0] = 0;
  local_10 = local_20;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("todayQuestTimes",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("acceptQuestLevel",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_104d1670("openTime",&DAT_11d9d32b);
  local_20[0] = 0;
  local_10 = local_20;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("contribute",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("npcName",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("description",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670(&DAT_11dc08e0,local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_104d1550("expAward",1);
  FUN_104d1550("moneyAward",2);
  FUN_104d1550("questClass",2);
  if (local_38 != 0) {
    FUN_10c3da30(local_38);
  }
  if (local_3c != 0) {
    FUN_10c3da30(local_3c);
  }
  if (local_40 != 0) {
    FUN_10c3da30(local_40);
  }
  if (local_34 != 0) {
    FUN_10c3da30(local_34);
  }
  if (local_2c != 0) {
    FUN_10c3da30(local_2c);
  }
  if (local_30 != 0) {
    FUN_10c3da30(local_30);
  }
  if (local_28 != 0) {
    FUN_10c3da30(local_28);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1089ef80 @ 1089ef80  size=1143 ===== */
// calls: CPet::SetName
// strings:
//   "QuitGameQuestDataClass"
//   "arrayQuestData"
//   "questName"
//   "contribution"
//   "maxValue"
//   "currentValue"
//   "questID"
//   "textNotify"

/* [RE-AUTO c0]
   strings:
     ""QuitGameQuestDataClass""
     ""arrayQuestData""
     ""questName""
     ""contribution""
     ""maxValue""
     ""currentValue""
     ""questID""
     ""textNotify"" */

void FUN_1089ef80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  int **ppiStack_d0;
  undefined1 *puStack_cc;
  char *pcStack_c8;
  undefined4 *puStack_c4;
  int **ppiStack_c0;
  int **ppiStack_bc;
  int *piVar9;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int *piStack_8c;
  int *local_88;
  uint local_84;
  uint local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_48;
  int *piStack_40;
  int *piStack_3c;
  uint uStack_38;
  int **ppiStack_34;
  int **ppiStack_2c;
  int **ppiStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_ac;
  local_84 = param_4[1];
  local_7c = (int *)param_4[3];
  ppiStack_bc = (int **)param_4[2];
  local_78 = param_4[4];
  local_90 = param_2;
  local_88 = (int *)0x0;
  local_80 = (uint)ppiStack_bc;
  if ((local_84 >> 6 & 1) != 0) {
    local_88 = (int *)*param_4;
    ppiStack_c0 = &local_88;
    puStack_c4 = (undefined4 *)0x1089efe4;
    (**(code **)(*local_88 + 4))();
  }
  ppiStack_bc = (int **)&DAT_11d9d32b;
  local_ac = 0;
  ppiStack_c0 = (int **)0x1089effa;
  CPet__SetName();
  ppiStack_c0 = (int **)0x0;
  puStack_c4 = (undefined4 *)0x13af;
  pcStack_c8 = (char *)&local_90;
  puStack_cc = &stack0xffffff50;
  ppiStack_d0 = (int **)0x1089f010;
  FUN_1024ebe0();
  puStack_c4 = &uStack_74;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,((byte)local_88 & 0x8f) == 10);
  ppiStack_c0 = (int **)uStack_a8;
  pcStack_c8 = "QuitGameQuestDataClass";
  puStack_cc = (undefined1 *)local_84;
  ppiStack_d0 = (int **)0x1089f050;
  cVar4 = (**(code **)(*piStack_8c + 0x10))();
  if ((cVar4 != '\0') && (((byte)local_80 & 0x8f) == 6)) {
    piVar9 = local_7c;
    if ((local_80 >> 6 & 1) != 0) {
      piVar9 = (int *)*local_7c;
    }
    piStack_3c = (int *)0x0;
    uStack_38 = 0;
    ppiStack_d0 = (int **)CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)uStack_98 & 0x8f) == 10);
    cVar4 = (**(code **)(*piStack_9c + 0x10))(uStack_94,"arrayQuestData",&piStack_3c);
    if (cVar4 != '\0') {
      ppiStack_d0 = (int **)0x1089f0d6;
      iVar5 = FUN_107cb5c0();
      if ((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 0x2ab0), piVar1 != (int *)0x0)) {
        ppiStack_d0 = &piStack_60;
        (**(code **)(*piVar1 + 0xa0))();
        piVar8 = piStack_60;
        if (piStack_60 != piStack_5c) {
          do {
            piVar2 = (int *)*piVar8;
            if (piVar2 != (int *)0x0) {
              ppiStack_d0 = (int **)0x1089f121;
              uStack_a8 = (**(code **)(*piVar2 + 0x18))();
              ppiStack_d0 = (int **)&DAT_11d9d32b;
              local_ac = 0;
              ppiStack_bc = (int **)0x0;
              CPet__SetName();
              uStack_a4 = FUN_117c2650();
              uStack_70 = (**(code **)(*piVar9 + 0x50))(local_ac);
              iStack_64 = (*(code *)(*ppiStack_bc)[0x19])(0);
              if ((iStack_68 == 0) || (*(int *)(iStack_68 + 0x18) == 0)) {
                uVar7 = 0;
                if (piVar2[0xb] != 0) {
                  ppiStack_d0 = (int **)0x1089f3dd;
                  iVar5 = FUN_1089e5e0();
                  if (iVar5 != 0) {
                    uVar7 = 0;
                    if (iStack_64 != 0) {
                      uVar7 = *(undefined4 *)(iVar5 + 0x24);
                    }
                  }
                }
              }
              else {
                ppiStack_d0 = (int **)0x20;
                piVar6 = (int *)FUN_1161a1e0();
                uVar7 = local_ac;
                if (piVar6 != (int *)0x0) {
                  ppiStack_d0 = (int **)0x1089f1a1;
                  local_ac = (**(code **)(*piVar6 + 0x14))();
                  ppiStack_d0 = (int **)0x1089f1ac;
                  (**(code **)(*piVar6 + 0x18))();
                  uVar7 = local_ac;
                }
              }
              if (piVar2[0xb] != 0) {
                ppiVar3 = *(int ***)(piVar2[0xb] + 8);
                ppiStack_d0 = (int **)&DAT_11d9d32b;
                if (ppiVar3 != (int **)0x0) {
                  ppiStack_d0 = ppiVar3;
                }
                CPet__SetName();
                uStack_58 = 0;
                uStack_54 = 0;
                FUN_11a98de0(&uStack_58,ppiStack_bc,0,0);
                FUN_104d1790("questName",&ppiStack_d0);
                FUN_104d1550("contribution",piVar1);
                FUN_104d1550("maxValue",puStack_c4);
                FUN_104d1550("currentValue",uVar7);
                FUN_104d1550("questID",ppiStack_bc);
                (**(code **)(*piStack_50 + 0x3c))(uStack_48,&iStack_68);
                FUN_104d7c10();
              }
              if (ppiStack_bc != (int **)0x0) {
                ppiStack_d0 = ppiStack_bc;
                FUN_10c3da30();
              }
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piStack_5c);
        }
        if (piStack_60 != (int *)0x0) {
          FUN_10c3d5d0();
        }
      }
    }
    if ((uStack_38 >> 6 & 1) != 0) {
      ppiStack_d0 = ppiStack_34;
      (**(code **)(*piStack_3c + 8))(&piStack_3c);
    }
  }
  ppiStack_d0 = &piStack_3c;
  piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
  ppiStack_2c = ppiStack_d0;
  ppiStack_28 = ppiStack_d0;
  FUN_100e5aa0();
  FUN_104d1670("textNotify",ppiStack_2c);
  if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
    FUN_10c3d5d0(ppiStack_2c);
  }
  if ((local_84 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 8))(&local_88,local_80);
    local_88 = (int *)0x0;
  }
  local_84 = 0;
  if (puStack_c4 != (undefined4 *)0x0) {
    FUN_10c3da30(puStack_c4);
  }
  if (((uint)piStack_9c >> 6 & 1) != 0) {
    (**(code **)(*piStack_a0 + 8))(&piStack_a0,uStack_98);
  }
  pcStack_c8 = (char *)0x1089f3c4;
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ae290 @ 108ae290  size=1499 ===== */
// strings:
//   "CMHUI_HunterGroup"
//   "AddGuilderRight"
//   "ReqJoinGroup"
//   "QuitHunterGroup"
//   "NoteSetting"
//   "CanImpeachLeader"
//   "HasImpeachMoney"
//   "ImpeachLeader"
//   "OnGetMembers"
//   "RemoveUselessFormat"
//   "AS2C_RequestRecordData"
//   "AS2C_GetRecordData"
//   "_getSearchGroupList"
//   "_getReqJoinGroupList"
//   "_getGroupMemberList"
//   "_getGuildTitleList"
//   "ImpeachMoney"

/* [RE-AUTO c0]
   strings:
     ""CMHUI_HunterGroup""
     ""AddGuilderRight""
     ""ReqJoinGroup""
     ""QuitHunterGroup""
     ""NoteSetting""
     ""CanImpeachLeader""
     ""HasImpeachMoney""
     ""ImpeachLeader""
     ""OnGetMembers""
     ""RemoveUselessFormat"" */

void __thiscall
FUN_108ae290(char *param_1,int *param_2,code *****param_3,undefined4 param_4,code *****param_5,
            int param_6)

{
  int iVar1;
  code *pcStack_108;
  undefined4 uStack_104;
  char *pcStack_100;
  code ****ppppcStack_fc;
  code ****ppppcStack_f8;
  code **ppcStack_f4;
  undefined4 uStack_f0;
  char *pcStack_ec;
  undefined4 ****ppppuStack_e8;
  code ****ppppcStack_e4;
  code ***pppcStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  code ****ppppcStack_d4;
  code ****ppppcStack_d0;
  code ****ppppcStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  code ****ppppcStack_c0;
  code ****ppppcStack_bc;
  code ****ppppcStack_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  code ****ppppcStack_ac;
  char ****ppppcStack_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 uStack_a0;
  char *pcStack_9c;
  code ****ppppcStack_98;
  code ****ppppcStack_94;
  code ****ppppcStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  code ****ppppcStack_84;
  code ****ppppcStack_80;
  code ****ppppcStack_7c;
  undefined4 uStack_78;
  char *pcStack_74;
  code ****ppppcStack_70;
  code ****ppppcStack_6c;
  code ****ppppcStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  code ****ppppcStack_58;
  code ****ppppcStack_54;
  code ****local_44;
  code ****local_40;
  uint uStack_3c;
  code ****ppppcStack_38;
  undefined1 auStack_34 [4];
  code ****ppppcStack_30;
  code ****appppcStack_2c [4];
  char ****ppppcStack_1c;
  char ****ppppcStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_44;
  local_44 = (code ****)param_3;
  if (param_6 == 1) {
    if (*(int **)(param_1 + 0x24) != param_2) {
      if (*(int **)(param_1 + 0x24) != (int *)0x0) goto LAB_108ae857;
      ppppcStack_54 = (code ****)0x108ae2d4;
      FUN_108ae220();
      if (param_2 != (int *)0x0) {
        *(int **)(param_1 + 0x24) = param_2;
        ppppcStack_58 = (code ****)(param_1 + 0x20);
        ppppcStack_54 = (code ****)0x11dd4670;
        pcStack_5c = (char *)0x108ae2ee;
        (**(code **)(*param_2 + 0xe8))();
      }
    }
    ppppcStack_54 = (code ****)param_5;
    ppppcStack_58 = (code ****)0x108ae2f8;
    FUN_104f4330();
    ppppcStack_58 = (code ****)param_5;
    pcStack_5c = (char *)0x108ae301;
    FUN_104f42b0();
    ppppcStack_1c = (char ****)appppcStack_2c;
    pcStack_5c = "";
    pcStack_60 = "AddGuilderRight";
    uStack_64 = 0x108ae31e;
    ppppcStack_18 = ppppcStack_1c;
    FUN_100b62c0();
    uStack_64 = 0;
    ppppcStack_68 = (code ****)FUN_108aeef0;
    ppppcStack_6c = (code ****)auStack_34;
    ppppcStack_70 = (code ****)0x108ae331;
    FUN_108b6f80();
    if (((code *****)appppcStack_2c[0] != &local_40) &&
       ((code *****)appppcStack_2c[0] != (code *****)0x0)) {
      ppppcStack_70 = appppcStack_2c[0];
      pcStack_74 = (char *)0x108ae347;
      FUN_10c3d5d0();
    }
    ppppcStack_30 = (code ****)&local_40;
    ppppcStack_70 = (code ****)0x11dd46a0;
    pcStack_74 = "ReqJoinGroup";
    uStack_78 = 0x108ae367;
    appppcStack_2c[0] = ppppcStack_30;
    FUN_100b62c0();
    uStack_78 = 0;
    ppppcStack_7c = (code ****)FUN_108afe10;
    ppppcStack_80 = (code ****)&stack0xffffffb8;
    ppppcStack_84 = (code ****)0x108ae37a;
    FUN_108b6f80();
    if (((code *****)local_40 != &ppppcStack_54) && ((code *****)local_40 != (code *****)0x0)) {
      ppppcStack_84 = local_40;
      pcStack_88 = (char *)0x108ae390;
      FUN_10c3d5d0();
    }
    local_44 = (code ****)&ppppcStack_54;
    ppppcStack_84 = (code ****)0x11dd46b3;
    pcStack_88 = "QuitHunterGroup";
    uStack_8c = 0x108ae3b0;
    local_40 = local_44;
    FUN_100b62c0();
    uStack_8c = 0;
    ppppcStack_90 = (code ****)FUN_108afd90;
    ppppcStack_94 = (code ****)&pcStack_5c;
    ppppcStack_98 = (code ****)0x108ae3c3;
    FUN_108b6f80();
    if (((code *****)ppppcStack_54 != &ppppcStack_68) &&
       ((code *****)ppppcStack_54 != (code *****)0x0)) {
      ppppcStack_98 = ppppcStack_54;
      pcStack_9c = (char *)0x108ae3d9;
      FUN_10c3d5d0();
    }
    ppppcStack_58 = (code ****)&ppppcStack_68;
    ppppcStack_98 = (code ****)0x11dd46bf;
    pcStack_9c = "NoteSetting";
    uStack_a0 = 0x108ae3f9;
    ppppcStack_54 = ppppcStack_58;
    FUN_100b62c0();
    uStack_a0 = 0;
    ppppuStack_a4 = (undefined4 ****)FUN_108afbf0;
    ppppcStack_a8 = (char ****)&ppppcStack_70;
    ppppcStack_ac = (code ****)0x108ae40c;
    FUN_108b6f80();
    if (((code *****)ppppcStack_68 != &ppppcStack_7c) &&
       ((code *****)ppppcStack_68 != (code *****)0x0)) {
      ppppcStack_ac = ppppcStack_68;
      pcStack_b0 = (char *)0x108ae422;
      FUN_10c3d5d0();
    }
    ppppcStack_6c = (code ****)&ppppcStack_7c;
    ppppcStack_ac = (code ****)0x11dd46d0;
    pcStack_b0 = "CanImpeachLeader";
    uStack_b4 = 0x108ae442;
    ppppcStack_68 = ppppcStack_6c;
    FUN_100b62c0();
    uStack_b4 = 0;
    ppppcStack_b8 = (code ****)FUN_108b67c0;
    ppppcStack_bc = (code ****)&ppppcStack_84;
    ppppcStack_c0 = (code ****)0x108ae455;
    FUN_108b6f80();
    if (((code *****)ppppcStack_7c != &ppppcStack_90) &&
       ((code *****)ppppcStack_7c != (code *****)0x0)) {
      ppppcStack_c0 = ppppcStack_7c;
      pcStack_c4 = (char *)0x108ae46b;
      FUN_10c3d5d0();
    }
    ppppcStack_80 = (code ****)&ppppcStack_90;
    ppppcStack_c0 = (code ****)0x11dd45a7;
    pcStack_c4 = "HasImpeachMoney";
    uStack_c8 = 0x108ae48b;
    ppppcStack_7c = ppppcStack_80;
    FUN_100b62c0();
    uStack_c8 = 0;
    ppppcStack_cc = (code ****)FUN_108b6890;
    ppppcStack_d0 = (code ****)&ppppcStack_98;
    ppppcStack_d4 = (code ****)0x108ae49e;
    FUN_108b6f80();
    if (((undefined4 *****)ppppcStack_90 != &ppppuStack_a4) &&
       ((undefined4 *****)ppppcStack_90 != (undefined4 *****)0x0)) {
      ppppcStack_d4 = ppppcStack_90;
      pcStack_d8 = (char *)0x108ae4b4;
      FUN_10c3d5d0();
    }
    ppppcStack_94 = (code ****)&ppppuStack_a4;
    ppppcStack_d4 = (code ****)0x11dd45b5;
    pcStack_d8 = "ImpeachLeader";
    uStack_dc = 0x108ae4d4;
    ppppcStack_90 = ppppcStack_94;
    FUN_100b62c0();
    uStack_dc = 0;
    pppcStack_e0 = (code ***)&LAB_108b6930;
    ppppcStack_e4 = (code ****)&ppppcStack_ac;
    ppppuStack_e8 = (undefined4 ****)0x108ae4e7;
    FUN_108b6f80();
    if (((code *****)ppppuStack_a4 != &ppppcStack_b8) &&
       ((code *****)ppppuStack_a4 != (code *****)0x0)) {
      ppppuStack_e8 = ppppuStack_a4;
      pcStack_ec = (char *)0x108ae4fd;
      FUN_10c3d5d0();
    }
    ppppcStack_a8 = (char ****)&ppppcStack_b8;
    ppppuStack_e8 = (undefined4 ****)0x11dd45c4;
    pcStack_ec = "OnGetMembers";
    uStack_f0 = 0x108ae51d;
    ppppuStack_a4 = (undefined4 ****)ppppcStack_a8;
    FUN_100b62c0();
    uStack_f0 = 0;
    ppcStack_f4 = (code **)FUN_108b38a0;
    ppppcStack_f8 = (code ****)&ppppcStack_c0;
    ppppcStack_fc = (code ****)0x108ae530;
    FUN_108b6f80();
    if (((code *****)ppppcStack_b8 != &ppppcStack_cc) &&
       ((code *****)ppppcStack_b8 != (code *****)0x0)) {
      ppppcStack_fc = ppppcStack_b8;
      pcStack_100 = (char *)0x108ae546;
      FUN_10c3d5d0();
    }
    ppppcStack_bc = (code ****)&ppppcStack_cc;
    ppppcStack_fc = (code ****)0x11dd45db;
    pcStack_100 = "RemoveUselessFormat";
    uStack_104 = 0x108ae566;
    ppppcStack_b8 = ppppcStack_bc;
    FUN_100b62c0();
    uStack_104 = 0;
    pcStack_108 = FUN_108afa40;
    FUN_108b6f80(&ppppcStack_d4);
    if ((ppppcStack_cc != &pppcStack_e0) && (ppppcStack_cc != (code ****)0x0)) {
      FUN_10c3d5d0(ppppcStack_cc);
    }
    ppppcStack_d0 = &pppcStack_e0;
    ppppcStack_cc = ppppcStack_d0;
    FUN_100b62c0("AS2C_RequestRecordData","");
    FUN_108b6f80(&ppppuStack_e8,FUN_108b6a00,0);
    if ((pppcStack_e0 != &ppcStack_f4) && (pppcStack_e0 != (code ***)0x0)) {
      FUN_10c3d5d0(pppcStack_e0);
    }
    ppppcStack_e4 = (code ****)&ppcStack_f4;
    pppcStack_e0 = (code ***)ppppcStack_e4;
    FUN_100b62c0("AS2C_GetRecordData","");
    FUN_108b6f80(&ppppcStack_fc,FUN_108b6aa0,0);
    if ((ppcStack_f4 != &pcStack_108) && (ppcStack_f4 != (code **)0x0)) {
      FUN_10c3d5d0(ppcStack_f4);
    }
    FUN_104d13b0("_getSearchGroupList",FUN_108b07d0);
    FUN_104d13b0("_getReqJoinGroupList",FUN_108aefc0);
    FUN_104d13b0("_getGroupMemberList",FUN_108aee10);
    FUN_104d13b0("_getGuildTitleList",FUN_108ae900);
    iVar1 = FUN_11720120();
    FUN_104d1550("ImpeachMoney",*(undefined4 *)(iVar1 + 0xac));
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b4790,0);
        FUN_10d17870();
        FUN_108b8c90();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b41e0,0);
        FUN_10d17870();
        FUN_108b8ce0();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b3300,0);
        FUN_10d17870();
        FUN_108b8d30();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b2820,0);
        FUN_10d17870();
        FUN_108b8d80();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b2440,0);
        FUN_10d17870();
        FUN_108b8dd0();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108ae990,0);
        FUN_10d17870();
        FUN_108b8e20();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b4770,0);
        FUN_10d17870();
        FUN_108b8e70();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      ppppcStack_54 = (code ****)0x108ae814;
      FUN_10d17440();
      ppppcStack_54 = (code ****)0x108ae81b;
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        ppppcStack_54 = (code ****)0x0;
        ppppcStack_58 = (code ****)FUN_108b1080;
        pcStack_60 = (char *)0x108ae82c;
        pcStack_5c = param_1;
        FUN_10d17440();
        pcStack_60 = (char *)0x108ae833;
        FUN_10d17870();
        pcStack_60 = (char *)0x108ae83a;
        FUN_108b8ec0();
      }
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      ppppcStack_58 = (code ****)&local_40;
      ppppcStack_54 = ppppcStack_38;
      pcStack_5c = (char *)0x108ae857;
      (*(code *)(*local_40)[2])();
    }
  }
LAB_108ae857:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b0970 @ 108b0970  size=1793 ===== */
// strings:
//   "InitModel"
//   "CheckGroupName"
//   "RenameGroup"
//   "GetGuildName"
//   "RefreshGuildDetail"
//   "UpdataState"
//   "UpdataSelf"
//   "UpdataTitleRights"
//   "SubmitCreateHunterGroup"
//   "CreateCondition"
//   "InviteJoinHunterGroup"
//   "HandlerRequestJoin"
//   "AssignmentGroupLeaderTo"
//   "RemoveHunterGroupMember"
//   "EditMemberRights"
//   "EditMemberUpDownRights"
//   "TitleSetting"
//   "UpGuildLevel"
//   "EditIcon"
//   "TakeWage"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""CheckGroupName""
     ""RenameGroup""
     ""GetGuildName""
     ""RefreshGuildDetail""
     ""UpdataState""
     ""UpdataSelf""
     ""UpdataTitleRights""
     ""SubmitCreateHunterGroup""
     ""CreateCondition"" */

void FUN_108b0970(void)

{
  code *pcStack_204;
  undefined4 uStack_200;
  char *pcStack_1fc;
  code ***pppcStack_1f8;
  code ***pppcStack_1f4;
  code **ppcStack_1f0;
  undefined4 uStack_1ec;
  char *pcStack_1e8;
  undefined4 ***pppuStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  undefined4 uStack_1d8;
  char *pcStack_1d4;
  code ***pppcStack_1d0;
  undefined4 ***pppuStack_1cc;
  undefined4 ***pppuStack_1c8;
  undefined4 uStack_1c4;
  char *pcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  undefined4 ***pppuStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  undefined4 uStack_19c;
  char *pcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  undefined4 ***pppuStack_18c;
  undefined4 uStack_188;
  char *pcStack_184;
  undefined4 ***pppuStack_180;
  code ***pppcStack_17c;
  code ***pppcStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  undefined4 ***pppuStack_164;
  undefined4 uStack_160;
  char *pcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  undefined4 uStack_14c;
  char *pcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  undefined4 uStack_138;
  char *pcStack_134;
  code ***pppcStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  undefined4 uStack_124;
  char *pcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  undefined4 uStack_110;
  char *pcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  undefined4 uStack_fc;
  char *pcStack_f8;
  code ***pppcStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  undefined4 uStack_e8;
  char *pcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined4 uStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 ***pppuStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  undefined4 ***pppuStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  code ***pppcStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  code ***local_24 [4];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)local_24;
  local_10 = (undefined1 *)local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "InitModel";
  uStack_34 = 0x108b09a4;
  FUN_100b62c0();
  uStack_34 = 0;
  pppcStack_38 = (code ***)FUN_108ae290;
  pppcStack_3c = (code ***)&pcStack_2c;
  pppcStack_40 = (code ***)0x108b09b7;
  FUN_108b6f80();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppcStack_40 = local_24[0];
    pcStack_44 = (char *)0x108b09cd;
    FUN_10c3d5d0();
  }
  local_24[0] = (code ***)&pppcStack_38;
  pppcStack_40 = (code ***)0x11dd48ae;
  pcStack_44 = "CheckGroupName";
  uStack_48 = 0x108b09ed;
  FUN_100b62c0();
  uStack_48 = 0;
  pppcStack_4c = (code ***)FUN_108b5bb0;
  pppcStack_50 = (code ***)&pppcStack_40;
  pppcStack_54 = (code ***)0x108b0a00;
  FUN_108b6f80();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x108b0a16;
    FUN_10c3d5d0();
  }
  pppcStack_3c = (code ***)&pppcStack_4c;
  pppcStack_54 = (code ***)0x11dd48bb;
  pcStack_58 = "RenameGroup";
  uStack_5c = 0x108b0a36;
  pppcStack_38 = pppcStack_3c;
  FUN_100b62c0();
  uStack_5c = 0;
  pppuStack_60 = (undefined4 ***)FUN_108b5e60;
  pppcStack_64 = (code ***)&pppcStack_54;
  pppcStack_68 = (code ***)0x108b0a49;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_4c != &pppuStack_60) &&
     ((undefined4 ****)pppcStack_4c != (undefined4 ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x108b0a5f;
    FUN_10c3d5d0();
  }
  pppcStack_50 = (code ***)&pppuStack_60;
  pppcStack_68 = (code ***)0x11dd48c8;
  pcStack_6c = "GetGuildName";
  uStack_70 = 0x108b0a7f;
  pppcStack_4c = pppcStack_50;
  FUN_100b62c0();
  uStack_70 = 0;
  pppcStack_74 = (code ***)FUN_108b5d50;
  pppcStack_78 = (code ***)&pppcStack_68;
  pppuStack_7c = (undefined4 ***)0x108b0a92;
  FUN_108b6f80();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pcStack_80 = (char *)0x108b0aa8;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11dd48de;
  pcStack_80 = "RefreshGuildDetail";
  uStack_84 = 0x108b0ac8;
  pppuStack_60 = (undefined4 ***)pppcStack_64;
  FUN_100b62c0();
  uStack_84 = 0;
  pppcStack_88 = (code ***)&LAB_108b5fc0;
  pppcStack_8c = (code ***)&pppuStack_7c;
  pppcStack_90 = (code ***)0x108b0adb;
  FUN_108b6f80();
  if (((code ****)pppcStack_74 != &pppcStack_88) && ((code ****)pppcStack_74 != (code ****)0x0)) {
    pppcStack_90 = pppcStack_74;
    pcStack_94 = (char *)0x108b0af1;
    FUN_10c3d5d0();
  }
  pppcStack_78 = (code ***)&pppcStack_88;
  pppcStack_90 = (code ***)0x11dd48eb;
  pcStack_94 = "UpdataState";
  uStack_98 = 0x108b0b11;
  pppcStack_74 = pppcStack_78;
  FUN_100b62c0();
  uStack_98 = 0;
  pppcStack_9c = (code ***)FUN_108b5550;
  pppcStack_a0 = (code ***)&pppcStack_90;
  pppcStack_a4 = (code ***)0x108b0b24;
  FUN_108b6f80();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x108b0b3a;
    FUN_10c3d5d0();
  }
  pppcStack_8c = (code ***)&pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dd47da;
  pcStack_a8 = "UpdataSelf";
  uStack_ac = 0x108b0b5a;
  pppcStack_88 = pppcStack_8c;
  FUN_100b62c0();
  uStack_ac = 0;
  pppcStack_b0 = (code ***)FUN_108b52e0;
  pppcStack_b4 = (code ***)&pppcStack_a4;
  pppcStack_b8 = (code ***)0x108b0b6d;
  FUN_108b6f80();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x108b0b83;
    FUN_10c3d5d0();
  }
  pppcStack_a0 = (code ***)&pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dd47ed;
  pcStack_bc = "UpdataTitleRights";
  uStack_c0 = 0x108b0ba3;
  pppcStack_9c = pppcStack_a0;
  FUN_100b62c0();
  uStack_c0 = 0;
  pppcStack_c4 = (code ***)FUN_108b5090;
  pppcStack_c8 = (code ***)&pppcStack_b8;
  pppcStack_cc = (code ***)0x108b0bb6;
  FUN_108b6f80();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pcStack_d0 = (char *)0x108b0bcc;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd4807;
  pcStack_d0 = "SubmitCreateHunterGroup";
  uStack_d4 = 0x108b0bec;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  uStack_d4 = 0;
  pppcStack_d8 = (code ***)FUN_108b6430;
  pppcStack_dc = (code ***)&pppcStack_cc;
  pppcStack_e0 = (code ***)0x108b0bff;
  FUN_108b6f80();
  if (((code ****)pppcStack_c4 != &pppcStack_d8) && ((code ****)pppcStack_c4 != (code ****)0x0)) {
    pppcStack_e0 = pppcStack_c4;
    pcStack_e4 = (char *)0x108b0c15;
    FUN_10c3d5d0();
  }
  pppcStack_c8 = (code ***)&pppcStack_d8;
  pppcStack_e0 = (code ***)0x11dd4817;
  pcStack_e4 = "CreateCondition";
  uStack_e8 = 0x108b0c35;
  pppcStack_c4 = pppcStack_c8;
  FUN_100b62c0();
  uStack_e8 = 0;
  pppcStack_ec = (code ***)FUN_108b5770;
  pppcStack_f0 = (code ***)&pppcStack_e0;
  pppcStack_f4 = (code ***)0x108b0c48;
  FUN_108b6f80();
  if (((code ****)pppcStack_d8 != &pppcStack_ec) && ((code ****)pppcStack_d8 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d8;
    pcStack_f8 = (char *)0x108b0c5e;
    FUN_10c3d5d0();
  }
  pppcStack_dc = (code ***)&pppcStack_ec;
  pppcStack_f4 = (code ***)0x11dd482d;
  pcStack_f8 = "InviteJoinHunterGroup";
  uStack_fc = 0x108b0c7e;
  pppcStack_d8 = pppcStack_dc;
  FUN_100b62c0();
  uStack_fc = 0;
  pppcStack_100 = (code ***)FUN_108b6010;
  pppcStack_104 = (code ***)&pppcStack_f4;
  pppcStack_108 = (code ***)0x108b0c91;
  FUN_108b6f80();
  if (((code ****)pppcStack_ec != &pppcStack_100) && ((code ****)pppcStack_ec != (code ****)0x0)) {
    pppcStack_108 = pppcStack_ec;
    pcStack_10c = (char *)0x108b0ca7;
    FUN_10c3d5d0();
  }
  pppcStack_f0 = (code ***)&pppcStack_100;
  pppcStack_108 = (code ***)0x11dd4842;
  pcStack_10c = "HandlerRequestJoin";
  uStack_110 = 0x108b0cc7;
  pppcStack_ec = pppcStack_f0;
  FUN_100b62c0();
  uStack_110 = 0;
  pppcStack_114 = (code ***)FUN_108b6310;
  pppcStack_118 = (code ***)&pppcStack_108;
  pppcStack_11c = (code ***)0x108b0cda;
  FUN_108b6f80();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pcStack_120 = (char *)0x108b0cf0;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd485b;
  pcStack_120 = "AssignmentGroupLeaderTo";
  uStack_124 = 0x108b0d10;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  uStack_124 = 0;
  pppcStack_128 = (code ***)FUN_108b61b0;
  pppcStack_12c = (code ***)&pppcStack_11c;
  pppcStack_130 = (code ***)0x108b0d23;
  FUN_108b6f80();
  if (((code ****)pppcStack_114 != &pppcStack_128) && ((code ****)pppcStack_114 != (code ****)0x0))
  {
    pppcStack_130 = pppcStack_114;
    pcStack_134 = (char *)0x108b0d39;
    FUN_10c3d5d0();
  }
  pppcStack_118 = (code ***)&pppcStack_128;
  pppcStack_130 = (code ***)0x11dd4873;
  pcStack_134 = "RemoveHunterGroupMember";
  uStack_138 = 0x108b0d59;
  pppcStack_114 = pppcStack_118;
  FUN_100b62c0();
  uStack_138 = 0;
  pppcStack_13c = (code ***)FUN_108b6260;
  pppcStack_140 = (code ***)&pppcStack_130;
  pppcStack_144 = (code ***)0x108b0d6c;
  FUN_108b6f80();
  if (((code ****)pppcStack_128 != &pppcStack_13c) && ((code ****)pppcStack_128 != (code ****)0x0))
  {
    pppcStack_144 = pppcStack_128;
    pcStack_148 = (char *)0x108b0d82;
    FUN_10c3d5d0();
  }
  pppcStack_12c = (code ***)&pppcStack_13c;
  pppcStack_144 = (code ***)0x11dd495c;
  pcStack_148 = "EditMemberRights";
  uStack_14c = 0x108b0da2;
  pppcStack_128 = pppcStack_12c;
  FUN_100b62c0();
  uStack_14c = 0;
  pppcStack_150 = (code ***)FUN_108b4e10;
  pppcStack_154 = (code ***)&pppcStack_144;
  pppcStack_158 = (code ***)0x108b0db5;
  FUN_108b6f80();
  if (((code ****)pppcStack_13c != &pppcStack_150) && ((code ****)pppcStack_13c != (code ****)0x0))
  {
    pppcStack_158 = pppcStack_13c;
    pcStack_15c = (char *)0x108b0dcb;
    FUN_10c3d5d0();
  }
  pppcStack_140 = (code ***)&pppcStack_150;
  pppcStack_158 = (code ***)0x11dd4976;
  pcStack_15c = "EditMemberUpDownRights";
  uStack_160 = 0x108b0deb;
  pppcStack_13c = pppcStack_140;
  FUN_100b62c0();
  uStack_160 = 0;
  pppuStack_164 = (undefined4 ***)FUN_108b4f90;
  pppcStack_168 = (code ***)&pppcStack_158;
  pppcStack_16c = (code ***)0x108b0dfe;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_150 != &pppuStack_164) &&
     ((undefined4 ****)pppcStack_150 != (undefined4 ****)0x0)) {
    pppcStack_16c = pppcStack_150;
    pcStack_170 = (char *)0x108b0e14;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppuStack_164;
  pppcStack_16c = (code ***)0x11dd4984;
  pcStack_170 = "TitleSetting";
  uStack_174 = 0x108b0e34;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  uStack_174 = 0;
  pppcStack_178 = (code ***)FUN_108b0070;
  pppcStack_17c = (code ***)&pppcStack_16c;
  pppuStack_180 = (undefined4 ***)0x108b0e47;
  FUN_108b6f80();
  if (((code ****)pppuStack_164 != &pppcStack_178) && ((code ****)pppuStack_164 != (code ****)0x0))
  {
    pppuStack_180 = pppuStack_164;
    pcStack_184 = (char *)0x108b0e5d;
    FUN_10c3d5d0();
  }
  pppcStack_168 = (code ***)&pppcStack_178;
  pppuStack_180 = (undefined4 ***)0x11dd4994;
  pcStack_184 = "UpGuildLevel";
  uStack_188 = 0x108b0e7d;
  pppuStack_164 = (undefined4 ***)pppcStack_168;
  FUN_100b62c0();
  uStack_188 = 0;
  pppuStack_18c = (undefined4 ***)&LAB_108b05f0;
  pppcStack_190 = (code ***)&pppuStack_180;
  pppcStack_194 = (code ***)0x108b0e90;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_178 != &pppuStack_18c) &&
     ((undefined4 ****)pppcStack_178 != (undefined4 ****)0x0)) {
    pppcStack_194 = pppcStack_178;
    pcStack_198 = (char *)0x108b0ea6;
    FUN_10c3d5d0();
  }
  pppcStack_17c = (code ***)&pppuStack_18c;
  pppcStack_194 = (code ***)0x11dd49a0;
  pcStack_198 = "EditIcon";
  uStack_19c = 0x108b0ec6;
  pppcStack_178 = pppcStack_17c;
  FUN_100b62c0();
  uStack_19c = 0;
  pppcStack_1a0 = (code ***)FUN_108b0640;
  pppcStack_1a4 = (code ***)&pppcStack_194;
  pppuStack_1a8 = (undefined4 ***)0x108b0ed9;
  FUN_108b6f80();
  if (((code ****)pppuStack_18c != &pppcStack_1a0) && ((code ****)pppuStack_18c != (code ****)0x0))
  {
    pppuStack_1a8 = pppuStack_18c;
    pcStack_1ac = (char *)0x108b0eef;
    FUN_10c3d5d0();
  }
  pppcStack_190 = (code ***)&pppcStack_1a0;
  pppuStack_1a8 = (undefined4 ***)0x11dd49ac;
  pcStack_1ac = "TakeWage";
  uStack_1b0 = 0x108b0f0f;
  pppuStack_18c = (undefined4 ***)pppcStack_190;
  FUN_100b62c0();
  uStack_1b0 = 0;
  pppcStack_1b4 = (code ***)&LAB_108b0780;
  pppcStack_1b8 = (code ***)&pppuStack_1a8;
  pppcStack_1bc = (code ***)0x108b0f22;
  FUN_108b6f80();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pcStack_1c0 = (char *)0x108b0f38;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dd49bc;
  pcStack_1c0 = "EditBaseName";
  uStack_1c4 = 0x108b0f58;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  uStack_1c4 = 0;
  pppuStack_1c8 = (undefined4 ***)FUN_108b06b0;
  pppuStack_1cc = &pppcStack_1bc;
  pppcStack_1d0 = (code ***)0x108b0f6b;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_1b4 != &pppuStack_1c8) &&
     ((undefined4 ****)pppcStack_1b4 != (undefined4 ****)0x0)) {
    pppcStack_1d0 = pppcStack_1b4;
    pcStack_1d4 = (char *)0x108b0f81;
    FUN_10c3d5d0();
  }
  pppcStack_1b8 = (code ***)&pppuStack_1c8;
  pppcStack_1d0 = (code ***)0x11dd49ca;
  pcStack_1d4 = "ResetRight";
  uStack_1d8 = 0x108b0fa1;
  pppcStack_1b4 = pppcStack_1b8;
  FUN_100b62c0();
  uStack_1d8 = 0;
  pppcStack_1dc = (code ***)FUN_108b5020;
  pppcStack_1e0 = (code ***)&pppcStack_1d0;
  pppuStack_1e4 = (undefined4 ***)0x108b0fb4;
  FUN_108b6f80();
  if (((code ****)pppuStack_1c8 != &pppcStack_1dc) && ((code ****)pppuStack_1c8 != (code ****)0x0))
  {
    pppuStack_1e4 = pppuStack_1c8;
    pcStack_1e8 = (char *)0x108b0fca;
    FUN_10c3d5d0();
  }
  pppuStack_1cc = &pppcStack_1dc;
  pppuStack_1e4 = (undefined4 ***)0x11dd48f8;
  pcStack_1e8 = "DisBandGuild";
  uStack_1ec = 0x108b0fea;
  pppuStack_1c8 = pppuStack_1cc;
  FUN_100b62c0();
  uStack_1ec = 0;
  ppcStack_1f0 = (code **)&LAB_108b4dc0;
  pppcStack_1f4 = (code ***)&pppuStack_1e4;
  pppcStack_1f8 = (code ***)0x108b0ffd;
  FUN_108b6f80();
  if ((pppcStack_1dc != &ppcStack_1f0) && (pppcStack_1dc != (code ***)0x0)) {
    pppcStack_1f8 = pppcStack_1dc;
    pcStack_1fc = (char *)0x108b1013;
    FUN_10c3d5d0();
  }
  pppcStack_1e0 = &ppcStack_1f0;
  pppcStack_1f8 = (code ***)0x11dd4906;
  pcStack_1fc = "BanGuilder";
  uStack_200 = 0x108b1033;
  pppcStack_1dc = pppcStack_1e0;
  FUN_100b62c0();
  uStack_200 = 0;
  pcStack_204 = FUN_108b6970;
  FUN_108b6f80(&pppcStack_1f8);
  if ((ppcStack_1f0 != &pcStack_204) && (ppcStack_1f0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_1f0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b41e0 @ 108b41e0  size=1414 ===== */
// strings:
//   "reqJoinGroupArray"
//   "REQUESTJOINHG_CLASS_NAME"
//   "memberName"
//   "level"
//   "message"
//   "hunterStar"
//   "UpdataREQUESTJOINHG"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""reqJoinGroupArray""
     ""REQUESTJOINHG_CLASS_NAME""
     ""memberName""
     ""level""
     ""message""
     ""hunterStar""
     ""UpdataREQUESTJOINHG"" */

void __fastcall FUN_108b41e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  byte unaff_SI;
  int *piVar4;
  int *unaff_EDI;
  int **ppiVar5;
  undefined4 *puVar6;
  int *piStack_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  int *piStack_e8;
  uint uStack_e4;
  int *piStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  uint uStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  int *piStack_88;
  int aiStack_84 [3];
  int **ppiStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int **ppiStack_64;
  int **ppiStack_60;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  undefined1 **ppuStack_3c;
  undefined1 **ppuStack_38;
  undefined1 auStack_34 [20];
  undefined1 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_104;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar3 + 0xb4))(), iVar2 != 0)) {
    (**(code **)(**(int **)(iVar2 + 0x2abc) + 0xc))(aiStack_84 + 2);
    FUN_114a8030();
    piStack_f8 = *(int **)(param_1 + 0x34);
    piStack_100 = *(int **)(param_1 + 0x2c);
    piStack_fc = *(int **)(param_1 + 0x30);
    uStack_f4 = *(undefined4 *)(param_1 + 0x38);
    piStack_104 = (int *)0x0;
    if (((uint)piStack_100 >> 6 & 1) != 0) {
      piStack_104 = *(int **)(param_1 + 0x28);
      (**(code **)(*piStack_104 + 4))(&piStack_104,piStack_fc);
    }
    uStack_ec = 0;
    piStack_e8 = (int *)0x0;
    (**(code **)(*piStack_104 + 0x10))
              (piStack_fc,"reqJoinGroupArray",&uStack_ec,((byte)piStack_100 & 0x8f) == 10);
    (**(code **)(*piStack_fc + 0x2c))(uStack_f4,0);
    if ((*(int **)(param_1 + 0x24) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(), iVar2 != 0)) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
      iVar2 = (**(code **)(*piVar3 + 0x108))();
      if (iVar2 != 0) {
        ppiVar5 = &piStack_b0;
        piStack_b0 = (int *)0x0;
        uStack_ac = 0;
        puStack_b4 = (undefined4 *)CONCAT31(puStack_b4._1_3_,((byte)piStack_fc & 0x8f) == 10);
        piStack_104 = (int *)0x0;
        piVar3 = piStack_f8;
        puVar6 = puStack_b4;
        cVar1 = (**(code **)(*piStack_100 + 0x10))
                          (piStack_f8,"REQUESTJOINHG_CLASS_NAME",ppiVar5,puStack_b4);
        if ((cVar1 == '\0') || (((byte)uStack_bc & 0x8f) != 6)) {
          puStack_b8 = (undefined4 *)0x0;
        }
        else {
          puVar6 = puStack_b8;
          if ((uStack_bc >> 6 & 1) != 0) {
            puStack_b8 = (undefined4 *)*puStack_b8;
            puVar6 = puStack_b8;
          }
        }
        piVar4 = piStack_8c;
        if (piStack_8c != piStack_88) {
          do {
            iVar2 = *piVar4;
            piStack_e0 = (int *)0x0;
            uStack_dc = 0;
            FUN_11a98de0(&piStack_e0,puStack_b8,0,0);
            puStack_4c = auStack_5c;
            auStack_5c[0] = 0;
            ppiStack_64 = &piStack_74;
            ppiStack_60 = ppiStack_64;
            puStack_48 = puStack_4c;
            FUN_100b62c0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x1c));
            FUN_108b9da0();
            if ((piStack_68 != aiStack_84 + 2) && (piStack_68 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_68);
            }
            FUN_104d1670("memberName",uStack_50);
            FUN_104d1550("level",*(undefined4 *)(iVar2 + 0x40));
            puStack_4c = (undefined1 *)((uint)puStack_4c & 0xffffff00);
            ppuStack_3c = &puStack_4c;
            piStack_6c = aiStack_84 + 2;
            piStack_68 = piStack_6c;
            ppuStack_38 = ppuStack_3c;
            FUN_100b62c0(*(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x6c));
            FUN_108b9da0();
            if ((piStack_70 != aiStack_84) && (piStack_70 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_70);
            }
            FUN_104d1670("message",uStack_40);
            piStack_74 = aiStack_84;
            piStack_70 = piStack_74;
            FUN_100b62c0(*(undefined4 *)(iVar2 + 0x58),*(undefined4 *)(iVar2 + 0x54));
            FUN_104d1670("hunterStar",ppiStack_78);
            if ((ppiStack_78 != &piStack_8c) && (ppiStack_78 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_78);
            }
            FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar2 + 8));
            (**(code **)(*piVar3 + 0x3c))(ppiVar5,&stack0xfffffef8);
            if ((puStack_20 != auStack_34) && (puStack_20 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_20);
            }
            if ((ppuStack_38 != &puStack_4c) && (ppuStack_38 != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_38);
            }
            puStack_b8 = puVar6;
            if ((uStack_dc >> 6 & 1) != 0) {
              (**(code **)(*piStack_e0 + 8))(&piStack_e0,uStack_d8);
              puStack_b8 = puVar6;
            }
            piVar4 = piVar4 + 1;
            puVar6 = puStack_b8;
          } while (piVar4 != piStack_88);
        }
        aiStack_84[1] = 0;
        aiStack_84[2] = 0;
        uStack_a8 = 0;
        uStack_a4 = 3;
        uStack_a0 = 1;
        (**(code **)(*unaff_EDI + 0x18))
                  (unaff_EBX,aiStack_84 + 1,"UpdataREQUESTJOINHG",&uStack_a8,1,
                   (unaff_SI & 0x8f) == 10);
        if ((uStack_94 >> 6 & 1) != 0) {
          (**(code **)(*piStack_98 + 8))(&piStack_98,uStack_90);
          piStack_98 = (int *)0x0;
        }
        uStack_94 = 0;
        if (((uint)piStack_6c >> 6 & 1) != 0) {
          (**(code **)(*piStack_70 + 8))(&piStack_70,piStack_68);
          piStack_70 = (int *)0x0;
        }
        piStack_6c = (int *)0x0;
        if ((uStack_ac >> 6 & 1) != 0) {
          (**(code **)(*piStack_b0 + 8))(&piStack_b0,uStack_a8);
          piStack_b0 = (int *)0x0;
        }
        uStack_ac = 0;
      }
    }
    if ((uStack_e4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_e8 + 8))(&piStack_e8,piStack_e0);
      piStack_e8 = (int *)0x0;
    }
    uStack_e4 = 0;
    if (((uint)piStack_fc >> 6 & 1) != 0) {
      (**(code **)(*piStack_100 + 8))(&piStack_100,piStack_f8);
      piStack_100 = (int *)0x0;
    }
    piStack_fc = (int *)0x0;
    if (aiStack_84[2] != 0) {
      FUN_10c3d5d0(aiStack_84[2]);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ca7e0 @ 108ca7e0  size=2883 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "other_info"
//   "taskName"
//   "taskLevel"
//   "queststatus"
//   "bTeam"
//   "bRepeat"
//   "gold_bind"
//   "farm_actuarialpoint"
//   "hunter_exp"
//   "hunter_fund"
//   "hunter_contribution"
//   "npcfriendvalue"
//   "TaskContent"
//   "limit"
//   "task_awardList"
//   "TASK_AWARD_CLASS_NAME"
//   "itemIconPathName"
//   "slotid"
//   "ItemID"
//   "task_targets"

/* [RE-AUTO c0]
   strings:
     ""other_info""
     ""taskName""
     ""taskLevel""
     ""queststatus""
     ""bTeam""
     ""bRepeat""
     ""gold_bind""
     ""farm_actuarialpoint""
     ""hunter_exp""
     ""hunter_fund"" */

void __fastcall FUN_108ca7e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int **extraout_ECX;
  int **ppiVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *local_e0;
  uint local_dc;
  undefined4 local_d8;
  int *local_c8;
  uint local_c4;
  undefined4 local_c0;
  int *local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_94;
  int *local_90;
  uint local_8c;
  float *local_88;
  int *local_78;
  uint local_74;
  undefined4 local_70;
  float *local_6c;
  float *local_68;
  int *local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  float *local_30;
  float local_2c;
  int *local_28;
  uint local_24;
  undefined4 *local_20;
  int **local_18;
  int **local_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_94 = param_2;
  local_44 = param_1;
  if (0 < DAT_123bbaac) {
    local_60 = (int *)0x0;
    local_5c = 0;
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    local_c8 = (int *)0x0;
    local_c4 = 0;
    local_b0 = (int *)0x0;
    local_ac = 0;
    local_e0 = (int *)0x0;
    local_dc = 0;
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"other_info",&local_60,local_34);
    if (cVar2 != '\0') {
      local_18 = &local_28;
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("taskName",local_14);
      ppiVar5 = &local_28;
      if ((local_14 != ppiVar5) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
        ppiVar5 = extraout_ECX;
      }
      FUN_104d8d20(*(undefined4 *)(param_2 + 4),ppiVar5,&local_38);
      puVar3 = (undefined4 *)FUN_117c1280();
      FUN_104d1550("taskLevel",*puVar3);
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_18 = &local_28;
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("taskName",local_14);
      if ((local_14 != &local_28) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
      }
      local_34 = *(undefined4 **)(param_2 + 4);
      iVar4 = (**(code **)(*DAT_123bbab4 + 0x50))(local_34);
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*DAT_123bbab4 + 0x60))(local_34);
        uVar6 = -(uint)(cVar2 != '\0') & 10;
      }
      else {
        uVar6 = *(uint *)(iVar4 + 0x14);
      }
      FUN_104d1550("queststatus",uVar6);
      iVar4 = FUN_10804c90();
      if ((iVar4 == 0) || (**(int **)(iVar4 + 4) < 2)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      FUN_104d15e0("bTeam",uVar9);
      FUN_104d15e0("bRepeat",*(char *)(param_2 + 0x80) != '\0');
      local_2c = (float)FUN_10804cd0(param_2 + 0x4c,0x19);
      local_34 = (undefined4 *)0x0;
      if (local_2c == 0.0) {
        FUN_104d1550(&DAT_11dbfbc8,0);
      }
      else {
        local_30 = (float *)0x0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)local_2c + 4),0,0,&local_30,0);
          FUN_1185f2e0(uVar9);
          FUN_104d1550(&DAT_11dbfbc8,(int)((float)*(int *)((int)local_2c + 8) * (float)local_30));
        }
      }
      local_40 = FUN_10804940(param_2 + 0x4c,0x18);
      if (local_40 == 0) {
        FUN_104d1550(&DAT_11dc0944,0);
        iVar4 = 0;
      }
      else {
        local_30 = (float *)0x0;
        local_2c = 0.0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)(local_40 + 4),&local_2c,&local_30,0,0)
          ;
          FUN_1185f2e0(uVar9);
        }
        FUN_104d1550(&DAT_11dc0944,(int)((float)*(int *)(local_40 + 8) * (float)local_30));
        iVar4 = (int)((float)*(int *)(local_40 + 0xc) * local_2c);
      }
      FUN_104d1550("gold_bind",iVar4);
      local_40 = FUN_10804980();
      if (local_40 == 0) {
        iVar4 = 0;
      }
      else {
        local_2c = 0.0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)(local_40 + 4),0,0,0,&local_2c);
          FUN_1185f2e0(uVar9);
          local_34 = (undefined4 *)local_2c;
        }
        iVar4 = (int)((float)*(int *)(local_40 + 8) * (float)local_34);
      }
      FUN_104d1550("farm_actuarialpoint",iVar4);
      local_34 = (undefined4 *)FUN_108049c0(param_2 + 0x4c,0x21);
      if (local_34 == (undefined4 *)0x0) {
        FUN_104d1550("hunter_exp",0);
        uVar9 = 0;
      }
      else {
        FUN_104d1550("hunter_exp",*(undefined4 *)((int)local_34 + 8));
        uVar9 = *(undefined4 *)((int)local_34 + 0xc);
      }
      FUN_104d1550("hunter_fund",uVar9);
      iVar4 = FUN_108049c0(param_2 + 0x4c,0x21);
      if (iVar4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar4 + 4);
      }
      FUN_104d1550("hunter_contribution",uVar9);
      iVar4 = FUN_10804a00();
      if (iVar4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar4 + 8);
      }
      FUN_104d1550("npcfriendvalue",uVar9);
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_18 = &local_28;
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("TaskContent",local_14);
      if ((local_14 != &local_28) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
      }
    }
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"limit",&local_e0,local_34);
    if (cVar2 != '\0') {
      FUN_108cb330(param_3);
    }
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"task_awardList",&local_c8,local_34);
    if (cVar2 != '\0') {
      (**(code **)(*local_c8 + 0x44))(local_c0,0,0xffffffff);
      local_28 = (int *)0x0;
      local_24 = 0;
      local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
      cVar2 = (**(code **)(*(int *)*param_1 + 0x10))
                        (param_1[2],"TASK_AWARD_CLASS_NAME",&local_28,local_34);
      if ((cVar2 != '\0') && (((byte)local_24 & 0x8f) == 6)) {
        local_34 = local_20;
        if ((local_24 >> 6 & 1) != 0) {
          local_34 = (undefined4 *)*local_20;
        }
        local_90 = (int *)0x0;
        local_8c = 0;
        iVar4 = FUN_10804900(param_2 + 0x4c,0x1f);
        if (iVar4 != 0) {
          FUN_107ff120(iVar4 + 4);
          uVar8 = 0;
          local_30 = local_6c;
          uVar6 = (uint)((int)local_68 + (3 - (int)local_6c)) >> 2;
          if (local_68 < local_6c) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              local_2c = *local_30;
              local_40 = *(int *)((int)local_2c + 4);
              FUN_11a98de0(&local_90,local_34,0,0);
              if (local_40 == 0) {
                FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                FUN_104d1550("slotid",10);
                FUN_104d1550("ItemID",0);
                FUN_104d1550(&DAT_11dbdc0c,0);
              }
              else {
                FUN_104d1670("itemIconPathName",*(undefined4 *)(local_40 + 0xb4));
                FUN_104d1550("slotid",uVar8);
                uVar9 = (**(code **)(**(int **)((int)local_2c + 4) + 0x18))();
                FUN_104d1550("ItemID",uVar9);
                FUN_104d1550(&DAT_11dbdc0c,*(undefined4 *)((int)local_2c + 8));
                FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(local_40 + 0x10));
              }
              (**(code **)(*local_c8 + 0x3c))(local_c0,&local_90);
              uVar8 = uVar8 + 1;
              local_30 = local_30 + 1;
              param_1 = local_44;
            } while (uVar8 != uVar6);
          }
          if (local_6c != (float *)0x0) {
            FUN_10c3d5d0(local_6c);
          }
        }
        if ((local_8c >> 6 & 1) != 0) {
          (**(code **)(*local_90 + 8))(&local_90,local_88);
        }
      }
      if ((local_24 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 8))(&local_28,local_20);
      }
    }
    local_44 = (undefined4 *)CONCAT31(local_44._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"task_targets",&local_b0,local_44);
    if (cVar2 != '\0') {
      (**(code **)(*local_b0 + 0x44))(local_a8,0,0xffffffff);
      puVar3 = (undefined4 *)0x0;
      local_90 = (int *)0x0;
      local_8c = 0;
      local_3c = (undefined4 *)0x0;
      local_44 = (undefined4 *)CONCAT31(local_44._1_3_,((byte)param_1[1] & 0x8f) == 10);
      local_38 = (undefined4 *)0x0;
      local_34 = (undefined4 *)0x0;
      cVar2 = (**(code **)(*(int *)*param_1 + 0x10))
                        (param_1[2],"TASK_TARGET_VO_NAME",&local_90,local_44);
      iVar4 = local_94;
      puVar7 = local_3c;
      if ((cVar2 != '\0') && (((byte)local_8c & 0x8f) == 6)) {
        local_30 = local_88;
        if ((local_8c >> 6 & 1) != 0) {
          local_30 = (float *)*local_88;
        }
        cVar2 = FUN_100e57c0(&DAT_11d9d32b);
        if (cVar2 == '\0') {
          puVar7 = local_3c;
          if (iVar4 != 0) {
            local_28 = (int *)0x0;
            local_24 = 0;
            FUN_11a98de0(&local_28,local_30,0,0);
            FUN_104d1790("strTarget4",iVar4 + 0x14);
            FUN_104d1550("nOpType",0x1f);
            (**(code **)(*local_b0 + 0x3c))(local_a8,&local_28);
            FUN_104d7c10();
            puVar7 = local_3c;
          }
        }
        else {
          FUN_107fa640();
          puVar3 = local_38;
          local_78 = (int *)0x0;
          local_74 = 0;
          if (local_3c != local_38) {
            puVar7 = local_3c + 2;
            do {
              FUN_11a98de0(&local_78,local_30,0,0);
              FUN_104d1550("nTargetID1",puVar7[-2]);
              FUN_104d1550("nTargetID2",puVar7[-1]);
              FUN_104d1550("nTargetID3",*puVar7);
              FUN_104d1550("nTargetID4",puVar7[1]);
              FUN_104d1550("nTargetID5",puVar7[2]);
              FUN_104d1670("strTarget1",puVar7[0xb]);
              FUN_104d1670("strTarget2",puVar7[0x11]);
              FUN_104d1670("strTarget3",puVar7[0x17]);
              FUN_104d1670("strTarget4",puVar7[0x1d]);
              FUN_104d1670("strTarget5",puVar7[0x23]);
              FUN_104d1550("nOpType",puVar7[3]);
              FUN_104d1550("nCurCount",puVar7[4]);
              FUN_104d1550("nMaxCount",puVar7[5]);
              FUN_104d1550("nQuestType",puVar7[0x36]);
              FUN_104d1550(&DAT_11dca874,0);
              (**(code **)(*local_b0 + 0x3c))(local_a8,&local_78);
              puVar1 = puVar7 + 0x39;
              puVar7 = puVar7 + 0x3b;
            } while (puVar1 != puVar3);
          }
          puVar7 = local_3c;
          if ((local_74 >> 6 & 1) != 0) {
            (**(code **)(*local_78 + 8))(&local_78,local_70);
          }
        }
      }
      if ((local_8c >> 6 & 1) != 0) {
        (**(code **)(*local_90 + 8))(&local_90,local_88);
        local_90 = (int *)0x0;
      }
      local_8c = 0;
      for (; puVar3 != puVar7; puVar3 = puVar3 + -0x3b) {
        FUN_104f9f50();
      }
      if (puVar7 != (undefined4 *)0x0) {
        FUN_10c3d5d0(puVar7);
      }
    }
    if ((local_dc >> 6 & 1) != 0) {
      (**(code **)(*local_e0 + 8))(&local_e0,local_d8);
      local_e0 = (int *)0x0;
    }
    local_dc = 0;
    if ((local_ac >> 6 & 1) != 0) {
      (**(code **)(*local_b0 + 8))(&local_b0,local_a8);
      local_b0 = (int *)0x0;
    }
    local_ac = 0;
    if ((local_c4 >> 6 & 1) != 0) {
      (**(code **)(*local_c8 + 8))(&local_c8,local_c0);
      local_c8 = (int *)0x0;
    }
    local_c4 = 0;
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108cb6f0 @ 108cb6f0  size=1823 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "compledaily"
//   "completecount"
//   "totalcount"
//   "refresh_tasks_list"
//   "TASK_TASKDATA_CLASS_NAME"
//   "quest_id"
//   "level"
//   "questStatus"
//   "taskName"
//   "groupName"
//   "curStage"
//   "totalStage"
//   "groupType"
//   "group_id"
//   "bTracked"
//   "starLevel"
//   "Image"
//   "AwardNum"

/* [RE-AUTO c0]
   strings:
     ""compledaily""
     ""completecount""
     ""totalcount""
     ""refresh_tasks_list""
     ""TASK_TASKDATA_CLASS_NAME""
     ""quest_id""
     ""level""
     ""questStatus""
     ""taskName""
     ""groupName"" */

void FUN_108cb6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int **ppiVar7;
  int *piStack_e4;
  int iStack_e0;
  int *local_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b1 [9];
  int *piStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_94;
  int iStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [12];
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_5c [8];
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  int *piStack_48;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [3];
  int **ppiStack_2c;
  int **ppiStack_28;
  int **ppiStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_e4;
  local_dc = param_4;
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  CPlayer__GetHuntRankOrCount();
  piStack_50 = (int *)0x0;
  uStack_4c = 0;
  piStack_88 = (int *)0x0;
  uStack_84 = 0;
  piStack_70 = (int *)0x0;
  uStack_6c = 0;
  piStack_a8 = (int *)0x0;
  piStack_a4 = (int *)0x0;
  piStack_d8 = (int *)(**(code **)(*DAT_123bbab4 + 0xd8))();
  if (piStack_d8 != (int *)0x0) {
    ppiVar7 = apiStack_38;
    iStack_8c = 0;
    (**(code **)(*DAT_123bbab4 + 0xe4))();
    (**(code **)(*DAT_123bbab4 + 0xdc))(&piStack_d8);
    if ((piStack_40 != piStack_3c) && (iStack_94 = *piStack_40, iStack_94 != 0)) {
      if (local_dc != piStack_d8) {
        piVar6 = local_dc;
        do {
          if (*(int *)(*(int *)(*piVar6 + 0x2c) + 4) == *(int *)(*(int *)(iStack_94 + 8) + 4))
          goto LAB_108cb851;
          piVar6 = piVar6 + 1;
        } while (piVar6 != piStack_d8);
      }
      iVar3 = FUN_114f4840();
      if (piStack_d8 == piStack_d4) {
        FUN_108cc3e0(piStack_d8,&stack0xffffff18,auStack_b1,1,1);
      }
      else {
        *piStack_d8 = iVar3;
        piStack_d8 = piStack_d8 + 1;
      }
    }
LAB_108cb851:
    piStack_d0 = (int *)0x0;
    uStack_cc = 0;
    if (((int)piStack_d8 - (int)local_dc & 0xfffffffcU) == 0) {
      FUN_104f42b0(piStack_e4);
      cVar2 = (**(code **)(*piStack_d4 + 0x10))
                        (uStack_cc,"compledaily",auStack_7c,((byte)piStack_d0 & 0x8f) == 10);
      if (cVar2 != '\0') {
        FUN_104d1550("completecount",ppiVar7[5]);
        uVar4 = FUN_114e4950();
        FUN_104d1550("totalcount",uVar4);
      }
      cVar2 = (**(code **)(*piStack_e4 + 0x10))
                        (local_dc,"refresh_tasks_list",&piStack_a4,((byte)iStack_e0 & 0x8f) == 10);
      if (cVar2 != '\0') {
        (**(code **)(*piStack_88 + 0x44))(uStack_80,0,0xffffffff);
      }
    }
    else {
      FUN_104f42b0(piStack_e4);
      cVar2 = (**(code **)(*piStack_d4 + 0x10))
                        (uStack_cc,"compledaily",auStack_7c,((byte)piStack_d0 & 0x8f) == 10);
      if (cVar2 != '\0') {
        FUN_104d1550("completecount",ppiVar7[5]);
        uVar4 = FUN_114e4950();
        FUN_104d1550("totalcount",uVar4);
      }
      cVar2 = (**(code **)(*piStack_e4 + 0x10))
                        (local_dc,"refresh_tasks_list",&piStack_a4,((byte)iStack_e0 & 0x8f) == 10);
      if (cVar2 != '\0') {
        (**(code **)(*piStack_88 + 0x44))(uStack_80,0,0xffffffff);
        cVar2 = (**(code **)(*piStack_d4 + 0x10))
                          (uStack_cc,"TASK_TASKDATA_CLASS_NAME",auStack_5c,
                           ((byte)piStack_d0 & 0x8f) == 10);
        if ((cVar2 != '\0') && (((byte)uStack_4c & 0x8f) == 6)) {
          if ((uStack_4c >> 6 & 1) == 0) {
            piStack_d8 = piStack_48;
          }
          else {
            piStack_d8 = (int *)*piStack_48;
          }
          iVar3 = 0;
          local_dc = (int *)0x0;
          piStack_54 = piStack_d0;
          piVar6 = piStack_d4;
          if (piStack_d4 != piStack_d0) {
            do {
              piVar1 = *(int **)(*piVar6 + 0x2c);
              if (piVar1 != (int *)0x0) {
                if ((iVar3 == 0) && (DAT_123bba53 == '\0')) {
                  if (iStack_8c == 0) {
                    DAT_123bbaac = piVar1[1];
                    local_dc = piVar1;
                  }
                  else {
                    DAT_123bbaac = (*(int **)(iStack_8c + 8))[1];
                    local_dc = *(int **)(iStack_8c + 8);
                  }
                }
                else {
                  DAT_123bba53 = '\0';
                }
                iStack_e0 = iVar3 + 1;
                FUN_11a98de0(&piStack_a8,piStack_d8,0,0);
                FUN_104d1550("quest_id",piVar1[1]);
                FUN_104d8d20(piVar1[1],extraout_ECX,&piStack_3c);
                puVar5 = (undefined4 *)FUN_117c1280();
                FUN_104d1550("level",*puVar5);
                uVar4 = FUN_108cc140();
                FUN_104d1550("questStatus",uVar4);
                ppiStack_28 = apiStack_38;
                apiStack_38[0] = (int *)((uint)apiStack_38[0] & 0xffffff00);
                ppiStack_24 = ppiStack_28;
                FUN_100e5aa0(ppiStack_28);
                FUN_104d1670("taskName",ppiStack_28);
                if ((ppiStack_28 != &piStack_3c) && (ppiStack_28 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_28);
                }
                ppiStack_2c = &piStack_3c;
                piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
                ppiStack_28 = ppiStack_2c;
                FUN_100e5aa0(ppiStack_2c);
                FUN_104d1670("groupName",ppiStack_2c);
                if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_2c);
                }
                FUN_104d1550("curStage",1);
                FUN_104d1550("totalStage",1);
                FUN_104d1550("groupType",piVar1[4]);
                FUN_104d1550("group_id",piVar1[1]);
                FUN_104d15e0("bTracked",0);
                FUN_104d1550("starLevel",piVar1[0x4a]);
                FUN_104d1670("Image",piVar1[0x36]);
                uVar4 = FUN_108ca6f0();
                FUN_104d1550("AwardNum",uVar4);
                (**(code **)(*piStack_a4 + 0x3c))(uStack_9c,&uStack_c4);
                iVar3 = iStack_e0;
              }
              piVar6 = piVar6 + 1;
            } while (piVar6 != piStack_54);
            if (local_dc != (int *)0x0) {
              FUN_108ca7e0(param_2);
            }
          }
        }
      }
    }
    if ((uStack_c4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_c8 + 8))(&piStack_c8,uStack_c0);
      piStack_c8 = (int *)0x0;
    }
    uStack_c4 = 0;
    if (piStack_d4 != (int *)0x0) {
      FUN_10c3d5d0(piStack_d4);
    }
    if (apiStack_38[0] != (int *)0x0) {
      FUN_10c3d5d0(apiStack_38[0]);
    }
  }
  if (((uint)piStack_a4 >> 6 & 1) != 0) {
    (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
    piStack_a8 = (int *)0x0;
  }
  piStack_a4 = (int *)0x0;
  if ((uStack_6c >> 6 & 1) != 0) {
    (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
    piStack_70 = (int *)0x0;
  }
  uStack_6c = 0;
  if ((uStack_84 >> 6 & 1) != 0) {
    (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
    piStack_88 = (int *)0x0;
  }
  uStack_84 = 0;
  if ((uStack_4c >> 6 & 1) != 0) {
    (**(code **)(*piStack_50 + 8))(&piStack_50,piStack_48);
  }
  FUN_11a89daa();
  return;
}



