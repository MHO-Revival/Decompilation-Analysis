/* ===== FUN_108d97c0 @ 108d97c0  size=5009 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "PROPERTY_VO_CLASSNAME"
//   "curhp"
//   "endure"
//   "curendure"
//   "level"
//   "netID"
//   "hrLevel"
//   "hrPoint"
//   "Attack"
//   "lucklevel"
//   "luckattack"
//   "water"
//   "thunder"
//   "dragon"
//   "defense"
//   "watertolerance"
//   "firetolerance"
//   "thundertolerance"
//   "dragontolerance"
//   "icetolerance"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""PROPERTY_VO_CLASSNAME""
     ""curhp""
     ""endure""
     ""curendure""
     ""level""
     ""netID""
     ""hrLevel""
     ""hrPoint""
     ""Attack""
     ""lucklevel"" */

void __thiscall
FUN_108d97c0(int ****param_1,undefined4 param_2,int param_3,undefined4 param_4,int ****param_5,
            int param_6)

{
  int ******ppppppiVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  uint uVar11;
  int ****ppppiStack_20c;
  int *******pppppppiStack_208;
  int ******ppppppiStack_204;
  uint *puStack_200;
  int ******ppppppiStack_1fc;
  int *piStack_1f8;
  int *******pppppppiStack_1f4;
  int ****ppppiStack_1f0;
  char *pcStack_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int *******pppppppiStack_1e0;
  char *******pppppppcStack_1dc;
  int *******pppppppiStack_1d8;
  char *******pppppppcStack_1d4;
  undefined4 *******pppppppuStack_1d0;
  undefined4 *******pppppppuStack_1cc;
  int ******ppppppiStack_1c8;
  int *******pppppppiStack_1c4;
  int *******pppppppiStack_1c0;
  int ******ppppppiStack_1bc;
  int *****pppppiStack_1b8;
  int ******ppppppiStack_1b4;
  int ******ppppppiStack_1b0;
  int *****pppppiStack_1ac;
  int ****ppppiStack_1a8;
  int *****pppppiStack_1a4;
  int *****pppppiStack_1a0;
  int ****ppppiStack_19c;
  int ***pppiStack_198;
  int ****ppppiStack_194;
  int ****ppppiStack_190;
  int ***pppiStack_18c;
  int **ppiStack_188;
  int ****ppppiStack_184;
  char ****ppppcStack_180;
  int **ppiStack_17c;
  int *piStack_178;
  int ****ppppiStack_174;
  int ****ppppiStack_170;
  int *piStack_16c;
  char *pcStack_168;
  int *piStack_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ****ppppiStack_158;
  int ***pppiStack_154;
  int ****ppppiStack_150;
  int *****pppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ****ppppiStack_134;
  int ****local_130 [2];
  int ***pppiStack_128;
  uint uStack_124;
  int ****ppppiStack_120;
  int ***pppiStack_118;
  uint uStack_114;
  int *****pppppiStack_110;
  int *****pppppiStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int ***pppiStack_f8;
  uint uStack_f4;
  int ****ppppiStack_f0;
  int *piStack_e0;
  byte bStack_dc;
  int ***local_d8;
  uint uStack_d4;
  int ****ppppiStack_d0;
  int ****ppppiStack_c0;
  int ***pppiStack_b8;
  uint uStack_b4;
  int ****ppppiStack_b0;
  int ***pppiStack_a0;
  uint uStack_9c;
  int ****ppppiStack_98;
  int *piStack_84;
  int ***pppiStack_80;
  uint uStack_7c;
  int ****ppppiStack_78;
  int *piStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ****ppppiStack_60;
  int **ppiStack_5c;
  int *piStack_58;
  int ***pppiStack_50;
  uint uStack_4c;
  int ****ppppiStack_48;
  int ***apppiStack_40 [2];
  int ***pppiStack_38;
  uint uStack_34;
  int ****ppppiStack_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppppiStack_134;
  local_130[0] = param_1;
  if ((((param_3 != 0) && (param_5 != (int ****)0x0)) && (param_6 != 0)) && (1 < param_6)) {
    ppppiStack_144 = param_5;
    ppppiStack_148 = (int ****)0x108d9815;
    FUN_104f4330();
    if ((((uint)param_5[7] & 0x8f) == 3) || (((uint)param_5[7] & 0x8f) == 4)) {
      ppppiStack_c0 = (int ****)param_5[8];
    }
    else {
      ppppiStack_c0 = (int ****)0xdeadbeaf;
    }
    ppppiStack_148 = (int ****)0x108d9843;
    piVar4 = (int *)FUN_107cb5c0();
    piStack_84 = piVar4;
    if (((piVar4 != (int *)0x0) && (local_130[0][0xc] != (int ***)0x0)) &&
       (local_130[0][0xd] != (int ***)0x0)) {
      ppppiStack_148 = &pppiStack_50;
      pppiStack_50 = (int ***)0x0;
      ppppiStack_134 = (int ****)CONCAT31(ppppiStack_134._1_3_,((byte)uStack_d4 & 0x8f) == 10);
      uStack_4c = 0;
      ppppiStack_144 = ppppiStack_134;
      pppppiStack_14c = (int *****)0x11dd65a4;
      ppppiStack_150 = ppppiStack_d0;
      pppiStack_154 = (int ***)0x108d98ac;
      cVar3 = (*(code *)(*local_d8)[4])();
      piStack_16c = (int *)0x0;
      if (((cVar3 != '\0') && (((byte)ppiStack_5c & 0x8f) == 6)) &&
         (piStack_16c = piStack_58, ((uint)ppiStack_5c >> 6 & 1) != 0)) {
        piStack_16c = (int *)*piStack_58;
      }
      pppiStack_154 = (int ***)0x0;
      ppppiStack_158 = (int ****)0x0;
      ppppiStack_160 = (int ****)&stack0xfffffec8;
      ppppiStack_134 = (int ****)0x0;
      uStack_108 = 0;
      uStack_104 = 0;
      piStack_164 = (int *)0x108d990d;
      ppppiStack_15c = (int ****)piStack_16c;
      FUN_11a98de0();
      piStack_164 = (int *)0x0;
      pcStack_168 = (char *)0x0;
      ppppiStack_170 = &pppiStack_118;
      ppppiStack_174 = (int ****)0x108d991e;
      FUN_11a98de0();
      ppppiStack_174 = (int ****)0x108d992b;
      ppppiStack_174 = (int ****)FUN_1134b990();
      piStack_178 = (int *)&DAT_11dbfc90;
      ppiStack_17c = (int **)0x108d993c;
      FUN_104d1550();
      ppppiStack_174 = (int ****)0x108d994a;
      ppppiStack_174 = (int ****)FUN_1025b060();
      piStack_178 = (int *)0x11dd62f4;
      ppiStack_17c = (int **)0x108d995b;
      FUN_104d1550();
      ppppiStack_174 = (int ****)0x108d9965;
      ppppiStack_174 = (int ****)FUN_1134bbf0();
      piStack_178 = (int *)0x11dd62fc;
      ppiStack_17c = (int **)0x108d9976;
      FUN_104d1550();
      ppppiStack_174 = (int ****)0x108d9980;
      fVar10 = (float10)FUN_10268110();
      piStack_164 = (int *)(float)fVar10;
      ppppiStack_174 = (int ****)0x11dd6304;
      piStack_178 = (int *)0x108d999d;
      FUN_104d14d0();
      ppppiStack_174 = (int ****)0x108d99a7;
      ppppiStack_174 = (int ****)CPlayer__GetHuntRankOrCount();
      piStack_178 = (int *)0x11dbf940;
      ppiStack_17c = (int **)0x108d99b8;
      FUN_104d1550();
      ppppiStack_174 = &pppiStack_68;
      piStack_178 = (int *)0x108d99cd;
      (**(code **)(*piVar4 + 0xb8))();
      piStack_178 = (int *)0x108d99d4;
      iVar5 = FUN_100e5b40();
      piStack_178 = *(int **)(iVar5 + 0x14);
      ppiStack_17c = (int **)&DAT_11dbac80;
      ppppcStack_180 = (char ****)0x108d99e7;
      FUN_104d1670();
      if ((piStack_58 != &iStack_6c) && (piStack_58 != (int *)0x0)) {
        piStack_178 = piStack_58;
        ppiStack_17c = (int **)0x108d9a06;
        FUN_10c3d5d0();
      }
      piStack_178 = (int *)0x108d9a14;
      piStack_178 = (int *)FUN_1025b060();
      ppiStack_17c = (int **)&DAT_11dbfba0;
      ppppcStack_180 = (char ****)0x108d9a25;
      FUN_104d1550();
      ppppcStack_180 = (char ****)piVar4[1];
      ppppiStack_184 = (int ****)0x11dd646c;
      ppiStack_188 = (int **)0x108d9a38;
      FUN_104d1440();
      piStack_178 = (int *)0x108d9a46;
      piStack_178 = (int *)FUN_1025b060();
      ppiStack_17c = (int **)0x11dd6474;
      ppppcStack_180 = (char ****)0x108d9a57;
      FUN_104d1550();
      piStack_178 = (int *)0x108d9a65;
      piStack_178 = (int *)FUN_1025b060();
      ppiStack_17c = (int **)0x11dd647c;
      ppppcStack_180 = (char ****)0x108d9a76;
      FUN_104d1550();
      piStack_178 = (int *)0x108d9a80;
      piStack_178 = (int *)FUN_1134b990();
      ppiStack_17c = (int **)&DAT_11dbfc90;
      ppppcStack_180 = (char ****)0x108d9a91;
      FUN_104d1550();
      piStack_178 = (int *)0x108d9a9f;
      piStack_178 = (int *)FUN_1025b060();
      ppiStack_17c = (int **)0x11dd62f4;
      ppppcStack_180 = (char ****)0x108d9ab0;
      FUN_104d1550();
      piStack_178 = (int *)0x108d9aba;
      piStack_178 = (int *)FUN_1134bbf0();
      ppiStack_17c = (int **)0x11dd62fc;
      ppppcStack_180 = (char ****)0x108d9acb;
      FUN_104d1550();
      piStack_178 = (int *)0x108d9ad5;
      fVar10 = (float10)FUN_10268110();
      pcStack_168 = (char *)(float)fVar10;
      piStack_178 = (int *)0x11dd6304;
      ppiStack_17c = (int **)0x108d9af2;
      FUN_104d14d0();
      piStack_178 = (int *)0x108d9afc;
      piStack_178 = (int *)CPlayer__GetHuntRankOrCount();
      ppiStack_17c = (int **)0x11dbf940;
      ppppcStack_180 = (char ****)0x108d9b0d;
      FUN_104d1550();
      piStack_178 = &iStack_6c;
      ppiStack_17c = (int **)0x108d9b22;
      (**(code **)(*piVar4 + 0xb8))();
      ppiStack_17c = (int **)0x108d9b29;
      iVar5 = FUN_100e5b40();
      ppiStack_17c = *(int ***)(iVar5 + 0x14);
      ppppcStack_180 = (char ****)&DAT_11dbac80;
      ppppiStack_184 = (int ****)0x108d9b3c;
      FUN_104d1670();
      if ((ppiStack_5c != &piStack_70) && (ppiStack_5c != (int **)0x0)) {
        ppiStack_17c = ppiStack_5c;
        ppppcStack_180 = (char ****)0x108d9b5b;
        FUN_10c3d5d0();
      }
      ppiStack_17c = (int **)0x108d9b69;
      ppiStack_17c = (int **)FUN_1025b060();
      ppppcStack_180 = (char ****)&DAT_11dbfba0;
      ppppiStack_184 = (int ****)0x108d9b7a;
      FUN_104d1550();
      ppppiStack_184 = (int ****)piVar4[1];
      ppiStack_188 = (int **)0x11dd646c;
      pppiStack_18c = (int ***)0x108d9b8d;
      FUN_104d1440();
      ppiStack_17c = (int **)0x108d9b9b;
      ppiStack_17c = (int **)FUN_1025b060();
      ppppcStack_180 = (char ****)0x11dd6474;
      ppppiStack_184 = (int ****)0x108d9bac;
      FUN_104d1550();
      ppiStack_17c = (int **)0x108d9bba;
      ppiStack_17c = (int **)FUN_1025b060();
      ppppcStack_180 = (char ****)0x11dd647c;
      ppppiStack_184 = (int ****)0x108d9bcb;
      FUN_104d1550();
      pcVar2 = pcStack_168;
      ppiStack_17c = &piStack_16c;
      piStack_16c = (int *)0xce;
      ppppcStack_180 = (char ****)0x108d9be7;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppcStack_180 = (char ****)*puVar6;
      ppppiStack_184 = (int ****)0x11dd6310;
      ppiStack_188 = (int **)0x108d9bf9;
      FUN_104d1550();
      ppppcStack_180 = (char ****)&ppppiStack_170;
      ppppiStack_170 = (int ****)0xce;
      ppppiStack_184 = (int ****)0x108d9c11;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppiStack_184 = (int ****)*puVar6;
      ppiStack_188 = (int **)0x11dd6310;
      pppiStack_18c = (int ***)0x108d9c23;
      FUN_104d1550();
      ppppiStack_184 = (int ****)&ppppiStack_174;
      ppppiStack_174 = (int ****)0x20;
      ppiStack_188 = (int **)0x108d9c3b;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppiStack_188 = (int **)*puVar6;
      pppiStack_18c = (int ***)0x11dbfd48;
      ppppiStack_190 = (int ****)0x108d9c4d;
      FUN_104d1550();
      ppiStack_188 = &piStack_178;
      piStack_178 = (int *)&DAT_00000020;
      pppiStack_18c = (int ***)0x108d9c65;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppiStack_18c = (int ***)*puVar6;
      ppppiStack_190 = (int ****)0x11dbfd48;
      ppppiStack_194 = (int ****)0x108d9c77;
      FUN_104d1550();
      pppiStack_18c = &ppiStack_17c;
      ppiStack_17c = (int **)0x21;
      ppppiStack_190 = (int ****)0x108d9c8f;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppiStack_190 = (int ****)*puVar6;
      ppppiStack_194 = (int ****)0x11dd6330;
      pppiStack_198 = (int ***)0x108d9ca1;
      FUN_104d1550();
      ppppiStack_190 = (int ****)&ppppcStack_180;
      ppppcStack_180 = (char ****)&DAT_00000021;
      ppppiStack_194 = (int ****)0x108d9cb9;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppiStack_194 = (int ****)*puVar6;
      pppiStack_198 = (int ***)0x11dd6330;
      ppppiStack_19c = (int ****)0x108d9ccb;
      FUN_104d1550();
      ppppiStack_194 = (int ****)&ppppiStack_184;
      ppppiStack_184 = (int ****)0x26;
      pppiStack_198 = (int ***)0x108d9ce3;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppiStack_198 = (int ***)*puVar6;
      ppppiStack_19c = (int ****)0x11dd62b4;
      pppppiStack_1a0 = (int *****)0x108d9cf5;
      FUN_104d1550();
      pppiStack_198 = &ppiStack_188;
      ppiStack_188 = (int **)&DAT_00000026;
      ppppiStack_19c = (int ****)0x108d9d0d;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppiStack_19c = (int ****)*puVar6;
      pppppiStack_1a0 = (int *****)0x11dd62b4;
      pppppiStack_1a4 = (int *****)0x108d9d1f;
      FUN_104d1550();
      ppppiStack_19c = &pppiStack_18c;
      pppiStack_18c = (int ***)0x27;
      pppppiStack_1a0 = (int *****)0x108d9d37;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppiStack_1a0 = (int *****)*puVar6;
      pppppiStack_1a4 = (int *****)&DAT_11dd633c;
      ppppiStack_1a8 = (int ****)0x108d9d49;
      FUN_104d1550();
      pppppiStack_1a0 = &ppppiStack_190;
      ppppiStack_190 = (int ****)0x27;
      pppppiStack_1a4 = (int *****)0x108d9d61;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppiStack_1a4 = (int *****)*puVar6;
      ppppiStack_1a8 = (int ****)&DAT_11dd633c;
      pppppiStack_1ac = (int *****)0x108d9d73;
      FUN_104d1550();
      pppppiStack_1a4 = &ppppiStack_194;
      ppppiStack_194 = (int ****)0x28;
      ppppiStack_1a8 = (int ****)0x108d9d8b;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppiStack_1a8 = (int ****)*puVar6;
      pppppiStack_1ac = (int *****)0x11dd62bc;
      ppppppiStack_1b0 = (int ******)0x108d9d9d;
      FUN_104d1550();
      ppppiStack_1a8 = &pppiStack_198;
      pppiStack_198 = (int ***)0x28;
      pppppiStack_1ac = (int *****)0x108d9db5;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppiStack_1ac = (int *****)*puVar6;
      ppppppiStack_1b0 = (int ******)0x11dd62bc;
      ppppppiStack_1b4 = (int ******)0x108d9dc7;
      FUN_104d1550();
      pppppiStack_1ac = &ppppiStack_19c;
      ppppiStack_19c = (int ****)0x29;
      ppppppiStack_1b0 = (int ******)0x108d9ddf;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppppiStack_1b0 = (int ******)*puVar6;
      ppppppiStack_1b4 = (int ******)0x11dd62c8;
      pppppiStack_1b8 = (int *****)0x108d9df1;
      FUN_104d1550();
      ppppppiStack_1b0 = &pppppiStack_1a0;
      pppppiStack_1a0 = (int *****)0x29;
      ppppppiStack_1b4 = (int ******)0x108d9e09;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppppiStack_1b4 = (int ******)*puVar6;
      pppppiStack_1b8 = (int *****)0x11dd62c8;
      ppppppiStack_1bc = (undefined4 ******)0x108d9e1b;
      FUN_104d1550();
      ppppppiStack_1b4 = &pppppiStack_1a4;
      pppppiStack_1a4 = (int *****)0x2a;
      pppppiStack_1b8 = (int *****)0x108d9e33;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppiStack_1b8 = (int *****)*puVar6;
      ppppppiStack_1bc = (int ******)&DAT_11dd62c4;
      pppppppiStack_1c0 = (int *******)0x108d9e45;
      FUN_104d1550();
      pppppiStack_1b8 = &ppppiStack_1a8;
      ppppiStack_1a8 = (int ****)0x2a;
      ppppppiStack_1bc = (undefined4 ******)0x108d9e5d;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppppiStack_1bc = (int ******)*puVar6;
      pppppppiStack_1c0 = (int *******)&DAT_11dd62c4;
      pppppppiStack_1c4 = (int *******)0x108d9e6f;
      FUN_104d1550();
      ppppppiStack_1bc = &pppppiStack_1ac;
      pppppiStack_1ac = (int *****)0x1f;
      pppppppiStack_1c0 = (int *******)0x108d9e87;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1c0 = (int *******)*puVar6;
      pppppppiStack_1c4 = (int *******)0x11dbfccc;
      ppppppiStack_1c8 = (int ******)0x108d9e99;
      FUN_104d1550();
      pppppppiStack_1c0 = &ppppppiStack_1b0;
      ppppppiStack_1b0 = (int ******)0x1f;
      pppppppiStack_1c4 = (int *******)0x108d9eb1;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1c4 = (int *******)*puVar6;
      ppppppiStack_1c8 = (int ******)0x11dbfccc;
      pppppppuStack_1cc = (undefined4 *******)0x108d9ec3;
      FUN_104d1550();
      pppppppiStack_1c4 = &ppppppiStack_1b4;
      ppppppiStack_1b4 = (int ******)0x2f;
      ppppppiStack_1c8 = (int ******)0x108d9edb;
      puVar6 = (undefined4 *)FUN_108deff0();
      ppppppiStack_1c8 = (int ******)*puVar6;
      pppppppuStack_1cc = (undefined4 *******)0x11dd6428;
      pppppppuStack_1d0 = (undefined4 *******)0x108d9eed;
      FUN_104d1550();
      ppppppiStack_1c8 = &pppppiStack_1b8;
      pppppiStack_1b8 = (int *****)0x2f;
      pppppppuStack_1cc = (undefined4 *******)0x108d9f05;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppuStack_1cc = (undefined4 *******)*puVar6;
      pppppppuStack_1d0 = (undefined4 *******)0x11dd6428;
      pppppppcStack_1d4 = (char *******)0x108d9f17;
      FUN_104d1550();
      pppppppuStack_1cc = &ppppppiStack_1bc;
      ppppppiStack_1bc = (undefined4 ******)0x30;
      pppppppuStack_1d0 = (undefined4 *******)0x108d9f2f;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppuStack_1d0 = (undefined4 *******)*puVar6;
      pppppppcStack_1d4 = (char *******)0x11dd6418;
      pppppppiStack_1d8 = (int *******)0x108d9f41;
      FUN_104d1550();
      pppppppuStack_1d0 = &pppppppiStack_1c0;
      pppppppiStack_1c0 = (int *******)0x30;
      pppppppcStack_1d4 = (char *******)0x108d9f59;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppcStack_1d4 = (char *******)*puVar6;
      pppppppiStack_1d8 = (int *******)0x11dd6418;
      pppppppcStack_1dc = (char *******)0x108d9f6b;
      FUN_104d1550();
      pppppppcStack_1d4 = (char *******)&pppppppiStack_1c4;
      pppppppiStack_1c4 = (int *******)0x31;
      pppppppiStack_1d8 = (int *******)0x108d9f83;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1d8 = (int *******)*puVar6;
      pppppppcStack_1dc = (char *******)0x11dd6438;
      pppppppiStack_1e0 = (int *******)0x108d9f95;
      FUN_104d1550();
      pppppppiStack_1d8 = &ppppppiStack_1c8;
      ppppppiStack_1c8 = (int ******)0x31;
      pppppppcStack_1dc = (char *******)0x108d9fad;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppcStack_1dc = (char *******)*puVar6;
      pppppppiStack_1e0 = (int *******)0x11dd6438;
      pppppppiStack_1e4 = (int *******)0x108d9fbf;
      FUN_104d1550();
      pppppppcStack_1dc = (char *******)&pppppppuStack_1cc;
      pppppppuStack_1cc = (undefined4 *******)0x32;
      pppppppiStack_1e0 = (int *******)0x108d9fd7;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1e0 = (int *******)*puVar6;
      pppppppiStack_1e4 = (int *******)0x11dd644c;
      pppppppiStack_1e8 = (int *******)0x108d9fe9;
      FUN_104d1550();
      pppppppiStack_1e0 = (int *******)&pppppppuStack_1d0;
      pppppppuStack_1d0 = (undefined4 *******)0x32;
      pppppppiStack_1e4 = (int *******)0x108da001;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1e4 = (int *******)*puVar6;
      pppppppiStack_1e8 = (int *******)0x11dd644c;
      pcStack_1ec = (char *)0x108da013;
      FUN_104d1550();
      pppppppiStack_1e4 = (int *******)&pppppppcStack_1d4;
      pppppppcStack_1d4 = (char *******)0x33;
      pppppppiStack_1e8 = (int *******)0x108da02b;
      puVar6 = (undefined4 *)FUN_108deff0();
      pppppppiStack_1e8 = (int *******)*puVar6;
      pcStack_1ec = "icetolerance";
      ppppiStack_1f0 = (int ****)0x108da03d;
      FUN_104d1550();
      pppppppiStack_1e8 = (int *******)&pppppppiStack_1d8;
      pppppppiStack_1d8 = (int *******)0x33;
      pcStack_1ec = (char *)0x108da055;
      puVar6 = (undefined4 *)FUN_108deff0();
      pcStack_1ec = (char *)*puVar6;
      ppppiStack_1f0 = (int ****)0x11dd645c;
      pppppppiStack_1f4 = (int *******)0x108da067;
      FUN_104d1550();
      pppppppiStack_1f4 = (int *******)(uint)(*(byte *)(*(int *)(pcVar2 + 0x30) + 0x78) & 1);
      piStack_1f8 = (int *)0x11dd6358;
      ppppppiStack_1fc = (int ******)0x108da083;
      FUN_104d15e0();
      ppppppiStack_1fc =
           (int ******)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 1) & 1);
      puStack_200 = (uint *)0x11dd6374;
      ppppppiStack_204 = (int ******)0x108da0a1;
      FUN_104d15e0();
      ppppppiStack_204 =
           (int ******)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 2) & 1);
      pppppppiStack_208 = (int *******)0x11dd6390;
      ppppiStack_20c = (int ****)0x108da0c0;
      FUN_104d15e0();
      ppppiStack_20c = (int ****)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 3) & 1);
      FUN_104d15e0("weaponAttackContainsDragon");
      FUN_104d15e0("weaponAttackContainsIce",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 4) & 1);
      FUN_104d15e0("weaponAttackContainsPoison",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 6) & 1);
      FUN_104d15e0("weaponAttackContainsSleep",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 7) & 1);
      pcStack_1ec = (char *)(uint)((byte)((uint)*(undefined4 *)(*(int *)(pcVar2 + 0x30) + 0x78) >> 8
                                         ) & 1);
      ppppiStack_1f0 = (int ****)0x11dd64fc;
      pppppppiStack_1f4 = (int *******)0x108da15e;
      FUN_104d15e0();
      pppppppiStack_1f4 = (int *******)(uint)(*(byte *)(*(int *)(pcVar2 + 0x34) + 0x78) & 1);
      piStack_1f8 = (int *)0x11dd6358;
      ppppppiStack_1fc = (int ******)0x108da17a;
      FUN_104d15e0();
      ppppppiStack_1fc =
           (int ******)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 1) & 1);
      puStack_200 = (uint *)0x11dd6374;
      ppppppiStack_204 = (int ******)0x108da198;
      FUN_104d15e0();
      ppppppiStack_204 =
           (int ******)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 2) & 1);
      pppppppiStack_208 = (int *******)0x11dd6390;
      ppppiStack_20c = (int ****)0x108da1b7;
      FUN_104d15e0();
      ppppiStack_20c = (int ****)(uint)((byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 3) & 1);
      FUN_104d15e0("weaponAttackContainsDragon");
      FUN_104d15e0("weaponAttackContainsIce",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 4) & 1);
      FUN_104d15e0("weaponAttackContainsPoison",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 6) & 1);
      FUN_104d15e0("weaponAttackContainsSleep",
                   (byte)(*(uint *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 7) & 1);
      pcStack_1ec = (char *)(uint)((byte)((uint)*(undefined4 *)(*(int *)(pcVar2 + 0x34) + 0x78) >> 8
                                         ) & 1);
      ppppiStack_1f0 = (int ****)0x11dd64fc;
      pppppppiStack_1f4 = (int *******)0x108da25b;
      FUN_104d15e0();
      pppppppiStack_1f4 = (int *******)&pppppppuStack_1d0;
      piStack_1f8 = (int *)0x11dd65bc;
      ppppppiStack_1fc = (int ******)0x108da26e;
      FUN_104d12b0();
      ppppppiStack_1fc = &pppppiStack_1a0;
      puStack_200 = (uint *)0x11dd65d0;
      ppppppiStack_204 = (int ******)0x108da284;
      FUN_104d12b0();
      ppppiStack_1f0 = &pppiStack_128;
      pppiStack_128 = (int ***)0x0;
      uStack_124 = 0;
      ppppiStack_184 = (int ****)0x0;
      pppppppcStack_1dc =
           (char *******)CONCAT31(pppppppcStack_1dc._1_3_,((byte)ppiStack_17c & 0x8f) == 10);
      pcStack_1ec = (char *)pppppppcStack_1dc;
      pppppppiStack_1f4 = (int *******)0x11dd65e0;
      piStack_1f8 = piStack_178;
      ppppppiStack_1fc = (int ******)0x108da2db;
      cVar3 = (*(code *)(*ppppcStack_180)[4])();
      if ((cVar3 != '\0') && (((byte)ppppiStack_134 & 0x8f) == 6)) {
        if (((uint)ppppiStack_134 >> 6 & 1) == 0) {
          ppppiStack_194 = local_130[0];
        }
        else {
          ppppiStack_194 = (int ****)*local_130[0];
        }
      }
      ppppppiStack_1fc = (int ******)&ppppiStack_170;
      ppppiStack_170 = (int ****)0x0;
      piStack_16c = (int *)0x0;
      puStack_200 = (uint *)0x108da331;
      FUN_11a98a70();
      puStack_200 = &uStack_124;
      uStack_124 = 0;
      ppppiStack_120 = (int ****)0x0;
      ppppppiStack_204 = (int ******)0x108da356;
      FUN_11a98a70();
      iVar5 = *(int *)(pcVar2 + 0x34);
      iVar8 = *(int *)(iVar5 + 0x48);
      pcStack_1ec = (char *)(iVar5 + 0x18);
      pppppppiStack_1f4 = (int *******)0x0;
      iVar7 = *(int *)(iVar5 + 0x4c) - iVar8;
      iVar5 = iVar7 >> 0x1f;
      if (iVar7 / 0x14 + iVar5 != iVar5) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar8 + 4 + iVar5) != 0) {
            ppppppiStack_204 = (int ******)0x0;
            pppppppiStack_208 = (int *******)0x0;
            ppppiStack_20c = ppppiStack_19c;
            pppppppuStack_1d0 = (undefined4 *******)0x0;
            pppppppuStack_1cc = (undefined4 *******)0x0;
            FUN_11a98de0(&pppppppuStack_1d0);
            FUN_104d1670("skillName",*(undefined4 *)(*(int *)(iVar8 + 4 + iVar5) + 0x18));
            FUN_104d1550("needPoint",*(undefined4 *)(*(int *)(iVar8 + 4 + iVar5) + 0x24));
            FUN_104d1790("skillEffect",*(int *)(iVar8 + 4 + iVar5) + 0x1c);
            FUN_104d15e0("bIsActivation",1);
            FUN_104d15e0("bCanBeLighten",*(undefined1 *)(iVar8 + 8 + iVar5));
            (*(code *)(*ppiStack_188)[0xf])(ppppcStack_180,&pppppppiStack_1e0);
            FUN_104d7c10();
          }
          pppppppiStack_1f4 = (int *******)((int)pppppppiStack_1f4 + 1);
          iVar5 = iVar5 + 0x14;
          iVar8 = *(int *)((int)pcStack_1ec + 0x30);
        } while (pppppppiStack_1f4 < (uint)((*(int *)((int)pcStack_1ec + 0x34) - iVar8) / 0x14));
      }
      iVar5 = *(int *)((int)pcStack_1ec + 0x48);
      pppppppiStack_1f4 = (int *******)0x0;
      iVar7 = *(int *)((int)pcStack_1ec + 0x4c) - iVar5;
      iVar8 = iVar7 >> 0x1f;
      if (iVar7 / 0x14 + iVar8 != iVar8) {
        iVar8 = 0;
        do {
          if (*(int *)(iVar5 + 4 + iVar8) != 0) {
            ppppppiStack_204 = (int ******)0x0;
            pppppppiStack_208 = (int *******)0x0;
            ppppiStack_20c = ppppiStack_19c;
            pppppppuStack_1d0 = (undefined4 *******)0x0;
            pppppppuStack_1cc = (undefined4 *******)0x0;
            FUN_11a98de0(&pppppppuStack_1d0);
            FUN_104d1670("skillName",*(undefined4 *)(*(int *)(iVar5 + 4 + iVar8) + 0x18));
            FUN_104d1550("needPoint",*(undefined4 *)(*(int *)(iVar5 + 4 + iVar8) + 0x24));
            FUN_104d1790("skillEffect",*(int *)(iVar5 + 4 + iVar8) + 0x1c);
            FUN_104d15e0("bIsActivation",1);
            FUN_104d15e0("bCanBeLighten",*(undefined1 *)(iVar5 + 8 + iVar8));
            (*(code *)(*ppiStack_188)[0xf])(ppppcStack_180,&pppppppiStack_1e0);
            if (((uint)pppppppuStack_1cc >> 6 & 1) != 0) {
              pppppppiStack_208 = (int *******)&pppppppuStack_1d0;
              ppppppiStack_204 = ppppppiStack_1c8;
              ppppiStack_20c = (int ****)0x108da585;
              (*(code *)(*pppppppuStack_1d0)[2])();
            }
          }
          pppppppiStack_1f4 = (int *******)((int)pppppppiStack_1f4 + 1);
          iVar8 = iVar8 + 0x14;
          iVar5 = *(int *)((int)pcStack_1ec + 0x48);
        } while (pppppppiStack_1f4 < (uint)((*(int *)((int)pcStack_1ec + 0x4c) - iVar5) / 0x14));
      }
      ppppppiStack_204 = (int ******)(uint)(((byte)ppppiStack_194 & 0x8f) == 10);
      pppppppiStack_208 = (int *******)&piStack_178;
      ppppiStack_20c = (int ****)0x11dd6604;
      (*(code *)(*pppiStack_198)[5])(ppppiStack_190);
      uVar11 = puStack_200[0xc];
      iVar9 = uVar11 + 0x18;
      FUN_108df100();
      FUN_108df100(uVar11 + 0x30);
      ppppppiVar1 = ppppppiStack_204;
      piVar4 = (int *)((int)ppppppiStack_204 + 0x30);
      FUN_108de8d0(uVar11 + 0x48);
      FUN_108de8d0(uVar11 + 0x54);
      FUN_108de8d0(uVar11 + 0x60);
      FUN_108de8d0(piVar4);
      iVar5 = *piVar4;
      uVar11 = 0;
      iVar7 = *(int *)((int)ppppppiVar1 + 0x34) - iVar5;
      iVar8 = iVar7 >> 0x1f;
      if (iVar7 / 0x14 + iVar8 != iVar8) {
        iVar8 = 0;
        do {
          if (*(int *)(iVar5 + 4 + iVar8) != 0) {
            piStack_1f8 = (int *)0x0;
            pppppppiStack_1f4 = (int *******)0x0;
            FUN_11a98de0(&piStack_1f8,pppppppiStack_1c4,0,0);
            FUN_104d1670("skillName",*(undefined4 *)(*(int *)(iVar5 + 4 + iVar8) + 0x18));
            FUN_104d1550("needPoint",*(undefined4 *)(*(int *)(iVar5 + 4 + iVar8) + 0x24));
            pppppiStack_110 = local_130;
            local_130[0] = (int ****)((uint)local_130[0] & 0xffff0000);
            pppppiStack_10c = pppppiStack_110;
            FUN_100e5b60(local_130);
            FUN_104d1700("skillEffect",pppppiStack_110);
            if ((pppppiStack_110 != &ppppiStack_134) && (pppppiStack_110 != (int *****)0x0)) {
              FUN_10c3d5d0(pppppiStack_110);
            }
            FUN_104d15e0("bIsActivation",1);
            (**(code **)(*piStack_164 + 0x3c))(ppppiStack_15c,&ppppiStack_20c);
            if (((uint)pppppppiStack_1f4 >> 6 & 1) != 0) {
              (**(code **)(*piStack_1f8 + 8))(&piStack_1f8,ppppiStack_1f0);
            }
          }
          uVar11 = uVar11 + 1;
          iVar8 = iVar8 + 0x14;
          iVar5 = *(int *)(iVar9 + 0x30);
        } while (uVar11 < (uint)((*(int *)(iVar9 + 0x34) - iVar5) / 0x14));
      }
      (*(code *)(*pppppppiStack_1c0)[5])
                (pppppiStack_1b8,"originalSkills",&ppppiStack_150,
                 ((byte)ppppppiStack_1bc & 0x8f) == 10);
      pppiStack_198 = (int ***)0x0;
      ppppiStack_194 = (int ****)0x0;
      cVar3 = (*(code *)(*pppppppuStack_1d0)[4])
                        (ppppppiStack_1c8,"ITEM_VO_CLASSNAME",&pppiStack_198,
                         ((byte)pppppppuStack_1cc & 0x8f) == 10);
      if ((cVar3 != '\0') && (((byte)uStack_9c & 0x8f) == 6)) {
        if ((uStack_9c >> 6 & 1) == 0) {
          local_130[0] = ppppiStack_98;
        }
        else {
          local_130[0] = (int ****)*ppppiStack_98;
        }
      }
      if (piStack_84[0x9838] != 0) {
        ppppiStack_144 = &pppiStack_38;
        pppiStack_38 = (int ***)0x0;
        uStack_34 = 0;
        ppppiStack_148 = (int ****)0x108da88b;
        FUN_11a98a70();
        ppppiStack_148 = ppppiStack_c0;
        pppppiStack_14c = (int *****)0x108da89d;
        iVar5 = FUN_11592a80();
        if (iVar5 != 0) {
          puVar6 = (undefined4 *)(iVar5 + 0x2c);
          iVar5 = 10;
          do {
            pppppiStack_14c = (int *****)0x0;
            ppppiStack_150 = (int ****)0x0;
            ppppiStack_158 = &pppiStack_118;
            pppiStack_118 = (int ***)0x0;
            uStack_114 = 0;
            ppppiStack_15c = (int ****)0x108da8d4;
            pppiStack_154 = (int ***)0x0;
            FUN_11a98de0();
            ppppiStack_15c = (int ****)puVar6[-1];
            ppppiStack_160 = (int ****)&DAT_11dbb0b4;
            piStack_164 = (int *)0x108da8e7;
            FUN_104d1550();
            piStack_164 = (int *)*puVar6;
            pcStack_168 = "collumn";
            piStack_16c = (int *)0x108da8f9;
            FUN_104d1550();
            piStack_16c = (int *)puVar6[1];
            ppppiStack_170 = (int ****)&DAT_11dbfe78;
            ppppiStack_174 = (int ****)0x108da90c;
            FUN_104d1440();
            ppppiStack_15c = &pppiStack_128;
            ppppiStack_160 = ppppiStack_48;
            piStack_164 = (int *)0x108da927;
            (*(code *)(*pppiStack_50)[0xf])();
            if ((uStack_114 >> 6 & 1) != 0) {
              ppppiStack_150 = &pppiStack_118;
              pppppiStack_14c = pppppiStack_110;
              pppiStack_154 = (int ***)0x108da944;
              (*(code *)(*pppiStack_118)[2])();
            }
            puVar6 = puVar6 + 0x12;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pppppiStack_14c = (int *****)(uint)((bStack_dc & 0x8f) == 10);
        ppppiStack_150 = apppiStack_40;
        pppiStack_154 = (int ***)0x11dd66a4;
        ppppiStack_158 = (int ****)local_d8;
        ppppiStack_15c = (int ****)0x108da97a;
        (**(code **)(*piStack_e0 + 0x14))();
        if ((uStack_34 >> 6 & 1) != 0) {
          ppppiStack_148 = &pppiStack_38;
          ppppiStack_144 = ppppiStack_30;
          pppppiStack_14c = (int *****)0x108da9a3;
          (*(code *)(*pppiStack_38)[2])();
        }
      }
      if ((uStack_9c >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_a0;
        pppppiStack_14c = (int *****)0x108da9ce;
        ppppiStack_144 = ppppiStack_98;
        (*(code *)(*pppiStack_a0)[2])();
        pppiStack_a0 = (int ***)0x0;
      }
      uStack_9c = 0;
      if ((uStack_64 >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_68;
        ppppiStack_144 = ppppiStack_60;
        pppppiStack_14c = (int *****)0x108daa0d;
        (*(code *)(*pppiStack_68)[2])();
        pppiStack_68 = (int ***)0x0;
      }
      uStack_64 = 0;
      if ((uStack_b4 >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_b8;
        ppppiStack_144 = ppppiStack_b0;
        pppppiStack_14c = (int *****)0x108daa4c;
        (*(code *)(*pppiStack_b8)[2])();
        pppiStack_b8 = (int ***)0x0;
      }
      uStack_b4 = 0;
      if ((uStack_7c >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_80;
        ppppiStack_144 = ppppiStack_78;
        pppppiStack_14c = (int *****)0x108daa8b;
        (*(code *)(*pppiStack_80)[2])();
        pppiStack_80 = (int ***)0x0;
      }
      uStack_7c = 0;
      if ((uStack_f4 >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_f8;
        ppppiStack_144 = ppppiStack_f0;
        pppppiStack_14c = (int *****)0x108daabe;
        (*(code *)(*pppiStack_f8)[2])();
        pppiStack_f8 = (int ***)0x0;
      }
      uStack_f4 = 0;
      if ((uStack_124 >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_128;
        ppppiStack_144 = ppppiStack_120;
        pppppiStack_14c = (int *****)0x108daaeb;
        (*(code *)(*pppiStack_128)[2])();
        pppiStack_128 = (int ***)0x0;
      }
      uStack_124 = 0;
      if ((uStack_4c >> 6 & 1) != 0) {
        ppppiStack_148 = &pppiStack_50;
        ppppiStack_144 = ppppiStack_48;
        pppppiStack_14c = (int *****)0x108dab24;
        (*(code *)(*pppiStack_50)[2])();
      }
    }
    if ((uStack_d4 >> 6 & 1) != 0) {
      ppppiStack_148 = &local_d8;
      ppppiStack_144 = ppppiStack_d0;
      pppppiStack_14c = (int *****)0x108dab41;
      (*(code *)(*local_d8)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e2bb0 @ 108e2bb0  size=1924 ===== */
// calls: CPet::SetName, _time64
// strings:
//   "CP_VO_CLASSNAME"
//   "level"
//   "maxLevel"
//   "canCollect"
//   "totalTime"
//   "petSkillList"
//   "cpList"
//   "PLANT_VO_CLASSNAME"
//   "seedID"
//   "state"
//   "itemIconPathName"
//   "plantList"

/* WARNING: Removing unreachable block (ram,0x108e2f6f) */
/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""CP_VO_CLASSNAME""
     ""level""
     ""maxLevel""
     ""canCollect""
     ""totalTime""
     ""petSkillList""
     ""cpList""
     ""PLANT_VO_CLASSNAME""
     ""seedID""
     ""state"" */

void FUN_108e2bb0(undefined4 *****param_1,int param_2,int param_3,int param_4,int param_5)

{
  int ****ppppiVar1;
  char cVar2;
  int iVar3;
  int *****pppppiVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  int *piVar10;
  __time64_t _Var11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *puStack_104;
  int ***pppiStack_100;
  char *pcStack_fc;
  undefined4 *puStack_f8;
  int *piStack_f4;
  int ****ppppiStack_f0;
  undefined4 ****ppppuStack_ec;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  undefined1 *puStack_c8;
  undefined4 uStack_c4;
  int *piStack_bc;
  byte bStack_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  int *piStack_98;
  int iStack_94;
  int ***pppiStack_90;
  int *piStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int ***pppiStack_78;
  int ***pppiStack_74;
  undefined4 ****appppuStack_70 [2];
  int aiStack_68 [2];
  int ****ppppiStack_60;
  int ****local_5c;
  int ***pppiStack_58;
  uint uStack_54;
  undefined4 ****ppppuStack_50;
  undefined4 **ppuStack_44;
  int ***pppiStack_40;
  uint uStack_3c;
  undefined4 ****ppppuStack_38;
  undefined4 ***pppuStack_30;
  undefined4 ***pppuStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_dc;
  local_5c = (int ****)param_1;
  if ((((param_1 != (undefined4 *****)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppppuStack_ec = param_1[2];
      ppppiStack_f0 = (int ****)param_1;
      piStack_f4 = (int *)0x108e2c1e;
      (*(code *)(**param_1)[2])();
      *param_1 = (undefined4 ****)0x0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = (undefined4 ****)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppppuStack_ec = (int *****)0x108e2c48;
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if (iVar3 != 0) {
      iStack_94 = iVar3 + 0x25c98;
      ppppuStack_ec = (undefined4 ****)param_4;
      ppppiStack_f0 = (int ****)0x108e2c63;
      FUN_104f4330();
      ppppiStack_f0 = (int ****)&local_5c;
      local_5c = (int ****)0x0;
      pppiStack_58 = (int ***)0x0;
      piStack_f4 = (int *)0x108e2c88;
      FUN_11a98a70();
      puStack_f8 = &uStack_80;
      uStack_80 = 0;
      uStack_7c = 0;
      piStack_f4 = (int *)CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)iStack_94 & 0x8f) == 10);
      pcStack_fc = "CP_VO_CLASSNAME";
      pppiStack_100 = pppiStack_90;
      puStack_104 = (undefined1 *)0x108e2ccd;
      cVar2 = (**(code **)(*piStack_98 + 0x10))();
      if ((cVar2 == '\0') || (((byte)piStack_8c & 0x8f) != 6)) {
        pppppiVar4 = (int *****)0x0;
      }
      else {
        pppppiVar4 = (int *****)ppppuStack_88;
        ppppiStack_f0 = ppppuStack_88;
        if (((uint)piStack_8c >> 6 & 1) != 0) {
          pppppiVar4 = (int *****)*ppppuStack_88;
          ppppiStack_f0 = (int ****)pppppiVar4;
        }
      }
      iVar3 = 0;
      ppppuStack_ec = (int *****)0x80;
      piVar9 = piStack_ac + 0xb;
      do {
        puStack_104 = (undefined1 *)0x0;
        FUN_11a98de0(&stack0xffffff18,pppppiVar4);
        uVar5 = FUN_11420f50(0,iVar3,(short)*piVar9);
        iVar6 = FUN_108e15c0(uVar5);
        if (iVar6 != 0) {
          puStack_b0 = (undefined1 *)0x0;
          puStack_104 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar6 + 0x50) != (undefined1 *)0x0) {
            puStack_104 = *(undefined1 **)(iVar6 + 0x50);
          }
          CPet__SetName();
          pppuStack_30 = &pppiStack_40;
          pppiStack_40 = (int ***)((uint)pppiStack_40 & 0xffffff00);
          pppuStack_2c = pppuStack_30;
          FUN_100e5aa0();
          FUN_104d1670(&DAT_11dbac80,pppuStack_30);
          if ((pppuStack_30 != &ppuStack_44) && ((int ****)pppuStack_30 != (int ****)0x0)) {
            FUN_10c3d5d0(pppuStack_30);
          }
          FUN_104d1550(&DAT_11dca14c,iVar3);
          FUN_104d1550("level",(short)*piVar9);
          iVar6 = FUN_117c7e70();
          FUN_104d1550("maxLevel",*(undefined4 *)(iVar6 + (int)piStack_f4));
          uVar5 = FUN_11420f50(0,iVar3,(short)*piVar9);
          pcStack_fc = (char *)FUN_108e1450(uVar5);
          if (pcStack_fc == (char *)0x0) {
            FUN_104d15e0("canCollect");
            FUN_104d1550("totalTime",0);
          }
          else {
            _Var11 = _time64((__time64_t *)0x0);
            piStack_bc = (int *)_Var11;
            if (((*(short *)((int)piVar9 + 2) == 0) && (piVar9[1] != 0)) &&
               ((uint)((int)piStack_bc - piVar9[1]) / 0x3c < *(uint *)(pcStack_fc + 0x1c))) {
              uVar15 = 0;
            }
            else {
              uVar15 = 1;
            }
            FUN_104d15e0("canCollect",uVar15);
            FUN_104d1550("totalTime",
                         (piVar9[1] + *(int *)(pcStack_fc + 0x1c) * 0x3c) - (int)piStack_bc);
          }
          uStack_d8 = 0;
          uStack_d4 = 0;
          FUN_11a98a70(&uStack_d8);
          (**(code **)(*piStack_f4 + 0x14))
                    (ppppuStack_ec,"petSkillList",auStack_dc,((byte)ppppiStack_f0 & 0x8f) == 10);
          (**(code **)(*piStack_8c + 0x3c))(uStack_84,&puStack_104);
          if (((uint)piStack_cc >> 6 & 1) != 0) {
            puStack_104 = puStack_c8;
            (**(code **)(*piStack_d0 + 8))();
            piStack_d0 = (int *)0x0;
          }
          piStack_cc = (int *)0x0;
          if (puStack_b0 != (undefined1 *)0x0) {
            puStack_104 = puStack_b0;
            FUN_10c3da30();
          }
        }
        iVar3 = iVar3 + 1;
        ppppuStack_ec = ppppuStack_ec + 1;
        piVar9 = piVar9 + 5;
        pppppiVar4 = (int *****)ppppiStack_f0;
      } while ((int)ppppuStack_ec < 0x98);
      puStack_104 = (undefined1 *)(uint)((auStack_a4[0] & 0x8f) == 10);
      (**(code **)(*piStack_a8 + 0x14))(uStack_a0,"cpList");
      piVar9 = aiStack_68;
      aiStack_68[0] = 0;
      aiStack_68[1] = 0;
      FUN_11a98a70(piVar9);
      puVar12 = auStack_a4;
      puStack_104 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)CONCAT31(puStack_c8._1_3_,(bStack_b8 & 0x8f) == 10);
      puVar13 = puStack_c8;
      cVar2 = (**(code **)(*piStack_bc + 0x10))(uStack_b4,"PLANT_VO_CLASSNAME",puVar12,puStack_c8);
      piVar10 = (int *)0x0;
      if (((cVar2 != '\0') && (((byte)puStack_b0 & 0x8f) == 6)) &&
         (piVar10 = piStack_ac, piVar9 = piStack_ac, ((uint)puStack_b0 >> 6 & 1) != 0)) {
        piVar10 = (int *)*piStack_ac;
        piVar9 = (int *)*piStack_ac;
      }
      iVar3 = 0;
      piVar7 = piStack_d0 + 0x2f;
      do {
        puStack_104 = (undefined1 *)piVar7[2];
        piStack_f4 = (int *)0x0;
        ppppiStack_f0 = (int ****)0x0;
        FUN_11a98de0(&piStack_f4,piVar10,0,0);
        puVar14 = puVar13;
        FUN_104d1440("seedID",puVar13);
        FUN_104d15e0("state",puVar12);
        iVar6 = FUN_10254130(puVar13);
        if (iVar6 == 0) {
          FUN_104d1550("seedID",0);
          puVar13 = puVar14;
          piVar10 = piVar9;
        }
        else {
          ppppiStack_60 = (int ****)appppuStack_70;
          appppuStack_70[0] = (undefined4 ****)((uint)appppuStack_70[0] & 0xffffff00);
          local_5c = ppppiStack_60;
          FUN_100e5aa0(ppppiStack_60);
          FUN_104d1670(&DAT_11dbac80,ppppiStack_60);
          if ((ppppiStack_60 != &pppiStack_74) &&
             ((undefined4 *****)ppppiStack_60 != (undefined4 *****)0x0)) {
            FUN_10c3d5d0(ppppiStack_60);
          }
          FUN_104d1670("itemIconPathName",*(undefined4 *)(iVar6 + 0xb4));
          puVar13 = puVar14;
          piVar10 = piVar9;
        }
        iVar8 = FUN_114219c0(0,iVar3);
        FUN_104d1550(&DAT_11dca154,iVar8);
        FUN_104d1550("totalTime",iVar8);
        if ((iVar6 == 0) || (0 < iVar8)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        FUN_104d15e0("canCollect",uVar5);
        (*(code *)(*pppiStack_90)[0xf])(ppppuStack_88,&stack0xfffffef8);
        if (((uint)ppppiStack_f0 >> 6 & 1) != 0) {
          (**(code **)(*piStack_f4 + 8))(&piStack_f4,ppppuStack_ec);
        }
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 3;
        piVar9 = piVar10;
      } while (iVar3 < 3);
      (**(code **)(*piStack_cc + 0x14))
                (uStack_c4,"plantList",&uStack_7c,((byte)puStack_c8 & 0x8f) == 10);
      ppppiVar1 = local_5c;
      if (((uint)local_5c[1] >> 6 & 1) != 0) {
        ppppuStack_ec = (undefined4 ****)local_5c[2];
        ppppiStack_f0 = local_5c;
        piStack_f4 = (int *)0x108e3246;
        (*(code *)(**local_5c)[2])();
        *ppppiVar1 = (int ***)0x0;
      }
      ppppiVar1[1] = (int ***)0x2;
      *(undefined1 *)(ppppiVar1 + 2) = 1;
      if ((uStack_3c >> 6 & 1) != 0) {
        ppppiStack_f0 = &pppiStack_40;
        ppppuStack_ec = ppppuStack_38;
        piStack_f4 = (int *)0x108e3280;
        (*(code *)(*pppiStack_40)[2])();
        pppiStack_40 = (int ***)0x0;
      }
      uStack_3c = 0;
      if (((uint)pppiStack_74 >> 6 & 1) != 0) {
        ppppiStack_f0 = &pppiStack_78;
        ppppuStack_ec = appppuStack_70[0];
        piStack_f4 = (int *)0x108e32b3;
        (*(code *)(*pppiStack_78)[2])();
        pppiStack_78 = (int ***)0x0;
      }
      pppiStack_74 = (int ***)0x0;
      if ((uStack_54 >> 6 & 1) != 0) {
        ppppiStack_f0 = &pppiStack_58;
        ppppuStack_ec = ppppuStack_50;
        piStack_f4 = (int *)0x108e32ec;
        (*(code *)(*pppiStack_58)[2])();
        pppiStack_58 = (int ***)0x0;
      }
      uStack_54 = 0;
      if (((uint)piStack_8c >> 6 & 1) != 0) {
        ppppiStack_f0 = &pppiStack_90;
        ppppuStack_ec = ppppuStack_88;
        piStack_f4 = (int *)0x108e331f;
        (*(code *)(*pppiStack_90)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e7830 @ 108e7830  size=1278 ===== */
// strings:
//   "strName"
//   "petType"
//   "status"
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
//   "traintime"

/* [RE-AUTO c0]
   strings:
     ""strName""
     ""petType""
     ""status""
     ""level""
     ""petindex""
     ""petid""
     ""intelligence""
     ""proficientcy""
     ""character""
     ""quality"" */

void __fastcall FUN_108e7830(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
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
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
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
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = param_2;
  local_24 = param_1;
  if (param_4 == 0) goto LAB_108e7d1d;
  local_44 = (int *)0x0;
  local_40 = 0;
  if ((*(int *)(DAT_1202e818 + 0xd0) == 0) ||
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_108e78bd:
    local_128 = 0;
    local_11c = 0;
    local_f0 = 0;
    local_4c = 0;
    FUN_112f64e0(local_28,local_24,&local_134);
    if (local_134 != 0) {
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("strName",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_104d1550("petType",local_f4);
      FUN_104d1550("status",local_124);
      FUN_104d1550("level",local_118);
      FUN_104d1550("petindex",local_130);
      FUN_104d1550("petid",local_134);
      FUN_104d1550(&DAT_11dbfba0,local_12c);
      FUN_104d1550("intelligence",local_104);
      FUN_104d1550("proficientcy",local_f8);
      FUN_104d1550("character",local_fc);
      FUN_104d1550("quality",local_100);
      FUN_104d1550(&DAT_11dbfbc8,local_114);
      FUN_104d1550("exp_max",local_110);
      FUN_104d1550("intimacy",local_10c);
      FUN_104d1550("intimacyvalue",local_108);
      FUN_104d1550("fluteskillEquipped",local_64);
      FUN_104d1550("fluteskilltotal",local_60);
      FUN_104d1550("normalskillEquipped",local_5c);
      FUN_104d1550("normalskilltotal",local_58);
      FUN_104d1550("skillpointleft",local_68);
      local_20[0] = 0;
      local_10 = local_20;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("petcolordescription",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_104d1550("traintime",local_50);
      if (local_f4 == 0) {
        FUN_104d1550("fightwill",local_c8);
        FUN_104d1550("fightwill_max",local_c4);
        FUN_104d1550("attacktype",local_cc);
        FUN_104d1550("attacktrend",local_d0);
        FUN_104d1550("attack",local_dc);
        FUN_104d1550("attack_max",local_d8);
        FUN_104d1550(&DAT_11dbfc90,local_ec);
        FUN_104d1550("hp_max",local_e8);
        FUN_104d1550("defense",local_e4);
        FUN_104d1550("defense_max",local_e0);
        FUN_104d1550("fireattack",local_a0);
        FUN_104d1550("waterattack",local_9c);
        FUN_104d1550("thunderattack",local_94);
        FUN_104d1550("iceattack",local_98);
        FUN_104d1550("dragonattack",local_90);
        FUN_104d1550("poisonattack",local_8c);
        FUN_104d1550("sleepyattack",local_88);
        FUN_104d1550("paralysisattack",local_84);
        FUN_104d1550("fireendure",local_7c);
        FUN_104d1550("waterendure",local_78);
        FUN_104d1550("thunderendure",local_6c);
        FUN_104d1550("iceendure",local_74);
        FUN_104d1550("dragonendure",local_70);
        FUN_104d1550("lucklevel",local_d4);
      }
    }
    FUN_1050f1c0();
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar2 == 0) goto LAB_108e78bd;
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x2cd8) + 0x54))();
    if (iVar2 != 0) goto LAB_108e78bd;
  }
  if ((local_40 >> 6 & 1) != 0) {
    (**(code **)(*local_44 + 8))(&local_44,local_3c);
  }
LAB_108e7d1d:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108fb670 @ 108fb670  size=1158 ===== */
// calls: memcpy
// strings:
//   "_getCatCuisineResultInfo"
//   "_hideWindow"
//   "arrayBuffer"
//   "mh.model.CatFood.CatFoodBufferData"
//   "bufferName"
//   "bufferDesc"
//   "bufferID"
//   "catCuisineName"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""_getCatCuisineResultInfo""
     ""_hideWindow""
     ""arrayBuffer""
     ""mh.model.CatFood.CatFoodBufferData""
     ""bufferName""
     ""bufferDesc""
     ""bufferID""
     ""catCuisineName"" */

void FUN_108fb670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int **_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  size_t sVar7;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_104;
  int *piVar10;
  int *piStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  int *local_d8;
  uint local_d4;
  code *local_d0;
  undefined4 local_cc;
  void *local_c8;
  int iStack_bc;
  void *pvStack_b8;
  undefined1 auStack_90 [12];
  void *pvStack_84;
  void *pvStack_80;
  int *piStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  int iStack_64;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_f4;
  local_d4 = param_4[1];
  local_cc = param_4[3];
  uStack_104 = (code *)param_4[2];
  local_c8 = (void *)param_4[4];
  local_ec = param_2;
  local_d8 = (int *)0x0;
  local_d0 = uStack_104;
  if ((local_d4 >> 6 & 1) != 0) {
    local_d8 = (int *)*param_4;
    (**(code **)(*local_d8 + 4))();
  }
  uStack_104 = FUN_108fbb00;
  FUN_104d13b0();
  FUN_104d13b0("_hideWindow",&LAB_108fbbc0);
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar10 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar10 != (int *)0x0)) {
    uStack_104 = (code *)0x108fb733;
    iVar2 = (**(code **)(*piVar10 + 0xb4))();
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x2d60) != (int *)0x0)) {
      uStack_104 = (code *)0x108fb750;
      iVar3 = (**(code **)(**(int **)(iVar2 + 0x2d60) + 0x10))();
      uStack_104 = (code *)0x108fb761;
      iStack_bc = iVar3;
      (**(code **)(**(int **)(iVar2 + 0x2d60) + 0x14))();
      uStack_104 = (code *)0x108fb76e;
      uVar4 = (**(code **)(**(int **)(iVar2 + 0x2d60) + 0x18))();
      uStack_104 = (code *)0x108fb77e;
      (**(code **)(**(int **)(iVar2 + 0x2d60) + 0x1c))();
      if (0 < iVar3) {
        uStack_104 = (code *)0x108fb792;
        FUN_10a04620();
        uStack_104 = (code *)(uVar4 & 0xff);
        FUN_10a04770(iVar3);
        _Src = ppiStack_68;
        sVar7 = iStack_64 - (int)ppiStack_68;
        puVar5 = (undefined4 *)((int)sVar7 >> 2);
        FUN_10463080(puVar5,&stack0xffffff07);
        puVar8 = unaff_ESI;
        if (ppiStack_6c != _Src) {
          pvVar6 = memcpy(unaff_ESI,_Src,sVar7);
          puVar8 = (undefined4 *)(sVar7 + (int)pvVar6);
        }
        sVar7 = uStack_78 - (int)piStack_7c;
        iVar2 = (int)sVar7 >> 2;
        FUN_10463080(iVar2,(int)&uStack_104 + 3);
        puVar9 = puVar8;
        if (pvStack_80 != pvStack_84) {
          pvVar6 = memcpy(pvStack_b8,pvStack_84,sVar7);
          pvVar6 = (void *)(sVar7 + (int)pvVar6);
          if (pvStack_b8 != pvVar6) {
            uVar4 = (int)pvVar6 - (int)pvStack_b8 >> 2;
            puVar9 = unaff_EDI;
            if ((uint)((int)unaff_ESI - (int)puVar8 >> 2) < uVar4) {
              FUN_108fc100(puVar8,pvStack_b8,pvVar6,uVar4);
            }
            else {
              FUN_108fc000(puVar8,pvStack_b8,pvVar6,uVar4,&stack0xfffffef7);
            }
          }
        }
        local_d4 = 0;
        local_d0 = (code *)0x0;
        piVar10 = (int *)CONCAT31((int3)((uint)puVar8 >> 8),((byte)uStack_f0 & 0x8f) == 10);
        cVar1 = (**(code **)(*piStack_f4 + 0x10))(local_ec,"arrayBuffer",&local_d4,piVar10);
        pvVar6 = pvStack_b8;
        puVar8 = puVar5;
        if (cVar1 != '\0') {
          for (; pvVar6 = local_c8, local_c8 = pvVar6, puVar8 != puVar9; puVar8 = puVar8 + 1) {
            iVar3 = FUN_104fd710(*puVar8);
            if (iVar3 != 0) {
              piStack_7c = (int *)0x0;
              uStack_78 = 0;
              FUN_11a98de0(&piStack_7c,"mh.model.CatFood.CatFoodBufferData",0,0);
              FUN_104d1670("bufferName",*(undefined4 *)(iVar3 + 0x28));
              puStack_50 = &uStack_70;
              uStack_70._0_2_ = 0;
              puStack_4c = puStack_50;
              FUN_100e5b60(&uStack_70);
              FUN_104d1700("bufferDesc",puStack_50);
              if ((puStack_50 != &uStack_74) && (puStack_50 != (undefined4 *)0x0)) {
                FUN_10c3d5d0(puStack_50);
              }
              FUN_104d1550("bufferID",iVar2);
              (**(code **)(*piVar10 + 0x3c))(uStack_f0,auStack_90);
              if ((uStack_78 >> 6 & 1) != 0) {
                (**(code **)(*piStack_7c + 8))(&piStack_7c,uStack_74);
              }
            }
          }
        }
        iVar2 = FUN_108d15f0(uStack_e8);
        if (iVar2 != 0) {
          ppiStack_6c = &piStack_7c;
          piStack_7c = (int *)((uint)piStack_7c & 0xffffff00);
          ppiStack_68 = ppiStack_6c;
          FUN_100e5aa0(ppiStack_6c);
          FUN_104d1670("catCuisineName",ppiStack_6c);
          if ((ppiStack_68 != &piStack_7c) && (ppiStack_68 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_68);
          }
        }
        if ((uStack_e0 >> 6 & 1) != 0) {
          (**(code **)(*piStack_e4 + 8))(&piStack_e4,uStack_dc);
          piStack_e4 = (int *)0x0;
        }
        uStack_e0 = 0;
        if (pvVar6 != (void *)0x0) {
          FUN_10c3d5d0(pvVar6);
        }
        if (puVar5 != (undefined4 *)0x0) {
          FUN_10c3d5d0(puVar5);
        }
        FUN_10a046e0();
      }
    }
  }
  if ((local_d4 >> 6 & 1) != 0) {
    uStack_104 = local_d0;
    (**(code **)(*local_d8 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10911230 @ 10911230  size=254 ===== */
// strings:
//   "InitModel"
//   "InitWeaponTalentTips"
//   "InitWeaponTalentProfoundSkillTips"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""InitWeaponTalentTips""
     ""InitWeaponTalentProfoundSkillTips"" */

void FUN_10911230(void)

{
  code *pcStack_54;
  char *pcStack_50;
  code **ppcStack_4c;
  code ***pppcStack_48;
  code *pcStack_44;
  code **ppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code **ppcStack_34;
  code **ppcStack_30;
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
  ppcStack_30 = (code **)0x11dbd57c;
  ppcStack_34 = (code **)0x10911264;
  FUN_100b62c0();
  ppcStack_34 = (code **)FUN_10911340;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10911275;
  FUN_10912af0();
  if ((pppcStack_20 != &ppcStack_34) && (pppcStack_20 != (code ***)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x1091128b;
    FUN_10c3d5d0();
  }
  local_24 = &ppcStack_34;
  pppcStack_3c = (code ***)0x11dd8fe0;
  ppcStack_40 = (code **)0x11dd8fcc;
  pcStack_44 = (code *)0x109112ab;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = FUN_10912240;
  pppcStack_48 = (code ***)&pppcStack_3c;
  ppcStack_4c = (code **)0x109112bc;
  FUN_10912af0();
  if ((ppcStack_30 != &pcStack_44) && (ppcStack_30 != (code **)0x0)) {
    ppcStack_4c = ppcStack_30;
    pcStack_50 = (char *)0x109112d2;
    FUN_10c3d5d0();
  }
  ppcStack_34 = &pcStack_44;
  ppcStack_4c = (code **)0x11dd9035;
  pcStack_50 = "InitWeaponTalentProfoundSkillTips";
  pcStack_54 = (code *)0x109112f2;
  ppcStack_30 = ppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_109122a0;
  FUN_10912af0(&ppcStack_4c);
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_40);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10911340 @ 10911340  size=319 ===== */
// strings:
//   "_SaveWeaponTalentData"
//   "_SaveProfoundSkillData"
//   "_GetWeaponTalentAndProfoundSkillData"
//   "_UnlockTalent"
//   "_RequestServerTalentInfo"
//   "_isInBattleGroundAs3"
//   "currentWeaponType"

/* [RE-AUTO c0]
   strings:
     ""_SaveWeaponTalentData""
     ""_SaveProfoundSkillData""
     ""_GetWeaponTalentAndProfoundSkillData""
     ""_UnlockTalent""
     ""_RequestServerTalentInfo""
     ""_isInBattleGroundAs3""
     ""currentWeaponType"" */

void FUN_10911340(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("_SaveWeaponTalentData",FUN_10911480);
    FUN_104d13b0("_SaveProfoundSkillData",FUN_10911540);
    FUN_104d13b0("_GetWeaponTalentAndProfoundSkillData",FUN_10911660);
    FUN_104d13b0("_UnlockTalent",FUN_10911d00);
    FUN_104d13b0("_RequestServerTalentInfo",&LAB_10912960);
    FUN_104d13b0("_isInBattleGroundAs3",FUN_10912a00);
    piVar5 = (int *)0x0;
    uVar4 = 7;
    if ((DAT_1202e818 != 0) &&
       ((*(int *)(DAT_1202e818 + 0xd0) != 0 &&
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)))) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))();
      if (piVar1 != (int *)0x0) {
        piVar5 = piVar1;
      }
    }
    uVar2 = 0;
    if (piVar5 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar5 + 0x444))();
    }
    iVar3 = FUN_10254130(uVar2);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(iVar3 + 0x3c);
    }
    FUN_104d1550("currentWeaponType",uVar4);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_10911660 @ 10911660  size=1687 ===== */
// calls: CNewSkillInfo::BuildSkillDisplayList
// strings:
//   "talentInfo"
//   "style1Name"
//   "commonStyleName"
//   "style2Name"
//   "weaponName"
//   "masterValue"
//   "arrayProfound"
//   "STATIC_WEAPON_TALENT_PROFOUND"
//   "arrayStyles"
//   "STATIC_WEAPON_TALENT_DATA"
//   "STATIC_WEAPON_TALENT_STYLE_DATA"
//   "arrayWeaponTalentData"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""talentInfo""
     ""style1Name""
     ""commonStyleName""
     ""style2Name""
     ""weaponName""
     ""masterValue""
     ""arrayProfound""
     ""STATIC_WEAPON_TALENT_PROFOUND""
     ""arrayStyles""
     ""STATIC_WEAPON_TALENT_DATA"" */

void FUN_10911660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 unaff_EDI;
  uint uVar9;
  byte bVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int *piStack_13c;
  undefined4 *puStack_138;
  int iStack_134;
  undefined4 uStack_124;
  uint uStack_120;
  int *piStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  int *piStack_10c;
  byte bStack_108;
  int *piStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int *piStack_ec;
  uint uStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  int *piStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [8];
  int *piStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [8];
  int *piStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  int *piStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int *piStack_68;
  int *piStack_64;
  int *piStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [64];
  
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    iStack_134 = param_1[2];
    puStack_138 = param_1;
    piStack_13c = (int *)0x10911687;
    (**(code **)(*(int *)*param_1 + 8))();
    *param_1 = 0;
  }
  iVar3 = DAT_1202e818;
  param_1[1] = 3;
  param_1[2] = 0;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x58) != 0)) && (*(int *)(iVar3 + 0xd0) != 0)) &&
     (piVar8 = *(int **)(*(int *)(iVar3 + 0xd0) + 0x90), piVar8 != (int *)0x0)) {
    iStack_134 = 0x109116d6;
    iVar3 = (**(code **)(*piVar8 + 0xb4))();
    if (iVar3 != 0) {
      iStack_134 = 0x109116e6;
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x14) + 4))();
      if (iVar3 != 0) {
        iStack_134 = param_4;
        puStack_138 = (undefined4 *)0x109116fd;
        FUN_104f4330();
        uVar4 = *(uint *)(param_4 + 0x1c) & 0x8f;
        if ((uVar4 == 3) || (uVar4 == 4)) {
          piVar8 = *(int **)(param_4 + 0x20);
        }
        else {
          piVar8 = (int *)0xdeadbeaf;
        }
        puStack_138 = (undefined4 *)0x10911725;
        FUN_112efed0();
        puStack_138 = &uStack_54;
        piStack_13c = piVar8;
        uVar4 = CNewSkillInfo__BuildSkillDisplayList();
        puVar12 = &stack0xfffffed4;
        uVar13 = CONCAT31((int3)((uint)unaff_EDI >> 8),(bStack_108 & 0x8f) == 10);
        pcVar11 = "talentInfo";
        piVar8 = piStack_104;
        uStack_110 = uVar4;
        cVar2 = (**(code **)(*piStack_10c + 0x10))(piStack_104,"talentInfo",puVar12,uVar13);
        if (cVar2 != '\0') {
          FUN_104d1790("style1Name",auStack_50);
          FUN_104d1790("commonStyleName",auStack_4c);
          FUN_104d1790("style2Name",auStack_48);
          FUN_104d1790("weaponName",auStack_44);
          uVar5 = FUN_112f0580();
          FUN_104d1550("masterValue",uVar5);
          piStack_84 = (int *)0x0;
          uStack_80 = 0;
          uVar9 = CONCAT31((int3)((uint)uVar13 >> 8),((byte)puStack_138 & 0x8f) == 10);
          uVar4 = uVar9;
          cVar2 = (**(code **)(*piStack_13c + 0x10))(iStack_134,"arrayProfound",&piStack_84,uVar9);
          bVar10 = (byte)pcVar11;
          if (cVar2 != '\0') {
            uStack_114 = 0;
            uStack_110 = 0;
            cVar2 = (**(code **)(_DAT_00000000 + 0x10))
                              (uStack_124,"STATIC_WEAPON_TALENT_PROFOUND",&uStack_114,
                               uVar9 & 0xffffff00);
            bVar10 = (byte)pcVar11;
            if ((cVar2 != '\0') && (((byte)uStack_120 & 0x8f) == 6)) {
              piVar6 = piStack_11c;
              if ((uStack_120 >> 6 & 1) != 0) {
                piVar6 = (int *)*piStack_11c;
              }
              iVar3 = iStack_7c;
              if (iStack_7c != iStack_78) {
                do {
                  FUN_10911e00(piVar6,auStack_a4);
                  bVar10 = (byte)pcVar11;
                  iVar3 = iVar3 + 0x4c;
                } while (iVar3 != iStack_78);
              }
            }
            FUN_104d7c10();
          }
          uStack_c4 = 0;
          uStack_c0 = 0;
          cVar2 = (**(code **)(*piVar8 + 0x10))
                            (puVar12,"arrayStyles",&uStack_c4,(bVar10 & 0x8f) == 10);
          if (cVar2 != '\0') {
            piStack_104 = (int *)0x0;
            uStack_100 = 0;
            uVar4 = CONCAT31((int3)(uVar4 >> 8),((byte)uStack_118 & 0x8f) == 10);
            cVar2 = (**(code **)(*piStack_11c + 0x10))
                              (uStack_114,"STATIC_WEAPON_TALENT_DATA",&piStack_104,uVar4);
            piVar8 = (int *)0x0;
            if (((cVar2 != '\0') && (((byte)uStack_110 & 0x8f) == 6)) &&
               (piVar8 = piStack_10c, (uStack_110 >> 6 & 1) != 0)) {
              piVar8 = (int *)*piStack_10c;
            }
            uStack_fc = 0;
            uStack_f8 = 0;
            cVar2 = (**(code **)(_DAT_00000000 + 0x10))
                              (uStack_124,"STATIC_WEAPON_TALENT_STYLE_DATA",&uStack_fc,
                               uVar4 & 0xffffff00);
            if ((cVar2 != '\0') && (((byte)uStack_e8 & 0x8f) == 6)) {
              puVar7 = puStack_e4;
              if ((uStack_e8 >> 6 & 1) != 0) {
                puVar7 = (undefined4 *)*puStack_e4;
              }
              if (piStack_68 != piStack_64) {
                piVar6 = piStack_68 + 2;
                do {
                  piStack_cc = (int *)0x0;
                  uStack_c8 = 0;
                  FUN_11a98de0(&piStack_cc,puVar7,0,0);
                  uStack_ac = 0;
                  uStack_a8 = 0;
                  uStack_e0 = CONCAT31(uStack_e0._1_3_,((byte)uStack_d8 & 0x8f) == 10);
                  cVar2 = (**(code **)(*piStack_dc + 0x10))
                                    (piStack_d4,"arrayWeaponTalentData",&uStack_ac,uStack_e0);
                  if ((cVar2 != '\0') && (iVar3 = piVar6[-1], iVar3 != *piVar6)) {
                    do {
                      piStack_5c = (int *)0x0;
                      uStack_58 = 0;
                      if (piVar8 != (int *)0x0) {
                        FUN_10912030(piVar8,auStack_bc);
                      }
                      if ((uStack_58 >> 6 & 1) != 0) {
                        (**(code **)(*piStack_5c + 8))(&piStack_5c,uStack_54);
                      }
                      iVar3 = iVar3 + 0x3c;
                    } while (iVar3 != *piVar6);
                  }
                  (**(code **)(*piStack_d4 + 0x3c))(piStack_cc,&piStack_ec);
                  if ((uStack_98 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_9c + 8))(&piStack_9c,uStack_94);
                    piStack_9c = (int *)0x0;
                  }
                  uStack_98 = 0;
                  if ((uStack_c8 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_cc + 8))(&piStack_cc,uStack_c4);
                  }
                  piVar1 = piVar6 + 2;
                  piVar6 = piVar6 + 4;
                } while (piVar1 != piStack_64);
              }
            }
            if ((uStack_e8 >> 6 & 1) != 0) {
              (**(code **)(*piStack_ec + 8))(&piStack_ec,puStack_e4);
              piStack_ec = (int *)0x0;
            }
            uStack_e8 = 0;
            if ((uStack_100 >> 6 & 1) != 0) {
              (**(code **)(*piStack_104 + 8))(&piStack_104,uStack_fc);
            }
          }
          if ((uStack_b0 >> 6 & 1) != 0) {
            (**(code **)(*piStack_b4 + 8))(&piStack_b4,uStack_ac);
            piStack_b4 = (int *)0x0;
          }
          uStack_b0 = 0;
          uVar4 = uStack_120;
          if ((uStack_80 >> 6 & 1) != 0) {
            (**(code **)(*piStack_84 + 8))(&piStack_84,iStack_7c);
          }
        }
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
          *param_1 = 0;
        }
        param_1[1] = 3;
        param_1[2] = uVar4;
        if (((uint)puStack_138 >> 6 & 1) != 0) {
          (**(code **)(*piStack_13c + 8))(&piStack_13c,iStack_134);
          piStack_13c = (int *)0x0;
        }
        puStack_138 = (undefined4 *)0x0;
        FUN_112f0210();
        if ((uStack_118 >> 6 & 1) != 0) {
          (**(code **)(*piStack_11c + 8))(&piStack_11c,uStack_114);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10911e00 @ 10911e00  size=554 ===== */
// strings:
//   "SkillID"
//   "WeaponType"
//   "PlayerLevel"
//   "HunterRank"
//   "SkillIndex"
//   "Card1ID"
//   "Card2ID"
//   "Card3ID"
//   "Status"
//   "SkillName"
//   "TipsDesc"

/* [RE-AUTO c0]
   strings:
     ""SkillID""
     ""WeaponType""
     ""PlayerLevel""
     ""HunterRank""
     ""SkillIndex""
     ""Card1ID""
     ""Card2ID""
     ""Card3ID""
     ""Status""
     ""SkillName"" */

void __fastcall FUN_10911e00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *extraout_ECX;
  undefined1 *puVar3;
  int iVar4;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_3c = (int *)0x0;
  local_38 = 0;
  FUN_11a98de0(&local_3c,param_3,0,0);
  FUN_104d1550("SkillID",*(undefined4 *)(param_2 + 4));
  FUN_104d1550("WeaponType",*(undefined4 *)(param_2 + 0x10));
  FUN_104d1550("PlayerLevel",*(undefined4 *)(param_2 + 0x14));
  FUN_104d1550("HunterRank",*(undefined4 *)(param_2 + 0x18));
  FUN_104d1550("SkillIndex",*(undefined4 *)(param_2 + 0x20));
  FUN_104d1550("Card1ID",*(undefined4 *)(param_2 + 0x24));
  FUN_104d1550("Card2ID",*(undefined4 *)(param_2 + 0x28));
  FUN_104d1550("Card3ID",*(undefined4 *)(param_2 + 0x2c));
  FUN_104d1550("Status",*(undefined4 *)(param_2 + 0x48));
  local_20[0] = 0;
  local_10 = local_20;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("SkillName",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670(&DAT_11dbe64c,local_c);
  puVar3 = local_20;
  if ((local_c != puVar3) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
    puVar3 = extraout_ECX;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  iVar2 = FUN_107d45b0(puVar3);
  if ((iVar4 != -1) &&
     ((((iVar4 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("TipsDesc",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
  }
  (**(code **)(*(int *)*param_4 + 0x3c))(param_4[2],&local_3c);
  if ((local_38 >> 6 & 1) != 0) {
    (**(code **)(*local_3c + 8))(&local_3c,local_34);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10912030 @ 10912030  size=518 ===== */
// strings:
//   "skillID"
//   "weaponType"
//   "playerLevel"
//   "hunterStarLevel"
//   "SkillIndex"
//   "cardID1"
//   "cardID2"
//   "cardID3"
//   "skillStatus"
//   "skillName"
//   "iconPath"
//   "skillTips"
//   "schoolsType"
//   "masterValue"

/* [RE-AUTO c0]
   strings:
     ""skillID""
     ""weaponType""
     ""playerLevel""
     ""hunterStarLevel""
     ""SkillIndex""
     ""cardID1""
     ""cardID2""
     ""cardID3""
     ""skillStatus""
     ""skillName"" */

void __fastcall FUN_10912030(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_3c = (int *)0x0;
  local_38 = 0;
  FUN_11a98de0(&local_3c,param_3,0,0);
  FUN_104d1550("skillID",*(undefined4 *)(param_2 + 4));
  FUN_104d1550("weaponType",*(undefined4 *)(param_2 + 8));
  FUN_104d1550("playerLevel",*(undefined4 *)(param_2 + 0x18));
  FUN_104d1550("hunterStarLevel",*(undefined4 *)(param_2 + 0x1c));
  FUN_104d1550("SkillIndex",*(undefined4 *)(param_2 + 0xc));
  FUN_104d1550("cardID1",*(undefined4 *)(param_2 + 0x20));
  FUN_104d1550("cardID2",*(undefined4 *)(param_2 + 0x24));
  FUN_104d1550("cardID3",*(undefined4 *)(param_2 + 0x28));
  FUN_104d1550("skillStatus",*(undefined4 *)(param_2 + 0x38));
  local_20[0] = 0;
  local_10 = local_20;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("skillName",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("iconPath",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("skillTips",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_104d1550("schoolsType",*(undefined4 *)(param_2 + 0x10));
  FUN_104d1550("masterValue",*(undefined4 *)(param_2 + 0x14));
  (**(code **)(*(int *)*param_4 + 0x3c))(param_4[2],&local_3c);
  if ((local_38 >> 6 & 1) != 0) {
    (**(code **)(*local_3c + 8))(&local_3c,local_34);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10912240 @ 10912240  size=93 ===== */
// strings:
//   "_WeaponTalentTipsGetInfo"

/* [RE-AUTO c0]
   strings:
     ""_WeaponTalentTipsGetInfo"" */

void FUN_10912240(void)

{
  int *in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    piStack_24 = in_stack_00000010;
    FUN_104f4330();
    FUN_104d13b0("_WeaponTalentTipsGetInfo",FUN_10912300);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_109122a0 @ 109122a0  size=93 ===== */
// strings:
//   "_WeaponTalentProfoundTipsGetInfo"

/* [RE-AUTO c0]
   strings:
     ""_WeaponTalentProfoundTipsGetInfo"" */

void FUN_109122a0(void)

{
  int *in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    piStack_24 = in_stack_00000010;
    FUN_104f4330();
    FUN_104d13b0("_WeaponTalentProfoundTipsGetInfo",FUN_10912490);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_109125d0 @ 109125d0  size=911 ===== */
// calls: CPlayer::GetHuntRankOrCount, IsCardIdCollected
// strings:
//   "m_strTalentName"
//   "m_strWeaponType"
//   "m_nPlayerLevel"
//   "m_nCurrentPlayerLevel"
//   "m_nHunterRank"
//   "m_nCurrentHunterRank"
//   "m_nCard1Lv"
//   "m_bHasCard1"
//   "m_nCard2Lv"
//   "m_bHasCard2"
//   "m_nCard3Lv"
//   "m_bHasCard3"
//   "m_strSkillTips"
//   "m_strCard1Name"
//   "m_strCard2Name"
//   "m_strCard3Name"

/* [RE-AUTO c0]
   strings:
     ""m_strTalentName""
     ""m_strWeaponType""
     ""m_nPlayerLevel""
     ""m_nCurrentPlayerLevel""
     ""m_nHunterRank""
     ""m_nCurrentHunterRank""
     ""m_nCard1Lv""
     ""m_bHasCard1""
     ""m_nCard2Lv""
     ""m_bHasCard2"" */

void FUN_109125d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar2 != 0) {
      local_34 = CPlayer__GetHuntRankOrCount();
      if (*(int **)(iVar2 + 0x2d10) != (int *)0x0) {
        local_38 = (**(code **)(**(int **)(iVar2 + 0x2d10) + 0x18))();
        iVar2 = IsCardIdCollected(*(undefined4 *)(param_1 + 0x14));
        bVar5 = iVar2 == 2;
        iVar2 = IsCardIdCollected(*(undefined4 *)(param_1 + 0x1c));
        bVar6 = iVar2 == 2;
        iVar2 = IsCardIdCollected(*(undefined4 *)(param_1 + 0x24));
        bVar7 = iVar2 == 2;
      }
    }
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("m_strTalentName",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  FUN_100e5aa0(local_10);
  FUN_104d1670("m_strWeaponType",local_c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_104d1550("m_nPlayerLevel",*(undefined4 *)(param_1 + 0xc));
  FUN_104d1550("m_nCurrentPlayerLevel",local_34);
  FUN_104d1550("m_nHunterRank",*(undefined4 *)(param_1 + 0x10));
  FUN_104d1550("m_nCurrentHunterRank",local_38);
  FUN_104d1550("m_nCard1Lv",*(undefined4 *)(param_1 + 0x18));
  FUN_104d15e0("m_bHasCard1",bVar5);
  FUN_104d1550("m_nCard2Lv",*(undefined4 *)(param_1 + 0x20));
  FUN_104d15e0("m_bHasCard2",bVar6);
  FUN_104d1550("m_nCard3Lv",*(undefined4 *)(param_1 + 0x28));
  FUN_104d15e0("m_bHasCard3",bVar7);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = FUN_107d45b0();
  if ((iVar2 != -1) &&
     ((((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
      ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar4 != 0) && (*(int *)(iVar4 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4) != 0)) {
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      FUN_100e5aa0(local_10);
      FUN_104d1670("m_strSkillTips",local_c);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
  }
  iVar2 = FUN_11a88b20(*(undefined4 *)(param_1 + 0x14),0);
  iVar3 = FUN_11a88b20(*(undefined4 *)(param_1 + 0x1c),0);
  iVar4 = FUN_11a88b20(*(undefined4 *)(param_1 + 0x24),0);
  if (iVar2 != 0) {
    local_10 = local_20;
    local_20[0] = 0;
    local_c = local_10;
    FUN_100e5aa0(local_10);
    FUN_104d1670("m_strCard1Name",local_c);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  if (iVar3 != 0) {
    local_10 = local_20;
    local_20[0] = 0;
    local_c = local_10;
    FUN_100e5aa0(local_10);
    FUN_104d1670("m_strCard2Name",local_c);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  if (iVar4 != 0) {
    local_10 = local_20;
    local_20[0] = 0;
    local_c = local_10;
    FUN_100e5aa0(local_10);
    FUN_104d1670("m_strCard3Name",local_c);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091a010 @ 1091a010  size=134 ===== */
// calls: CGuildSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CGuildSkillInfo"

/* [RE-AUTO c0]
   calls: CGuildSkillInfo::GetManagers
   strings:
     ""CGuildSkillInfo"" */

undefined4 FUN_1091a010(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd9db8;
  puVar1 = (undefined4 *)CGuildSkillInfo__GetInfoManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CGuildSkillInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123c8254 & 1) == 0) {
        DAT_123c8254 = DAT_123c8254 | 1;
        FUN_1091e8a0();
        FUN_11a8911f(&LAB_11c77740);
      }
      puVar1 = &DAT_123c8258;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1091a0a0 @ 1091a0a0  size=109 ===== */
// calls: CGuildSkillInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CGuildSkillInfo"

/* [RE-AUTO c0]
   calls: CGuildSkillInfo::GetManagers
   strings:
     ""CGuildSkillInfo"" */

void FUN_1091a0a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd9db8;
  puVar1 = (undefined4 *)CGuildSkillInfo__GetInfoManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CGuildSkillInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123c8254 & 1) == 0) {
        DAT_123c8254 = DAT_123c8254 | 1;
        FUN_1091e8a0();
        FUN_11a8911f(&LAB_11c77740);
      }
      piVar2 = &DAT_123c8258;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_1091b5a0 @ 1091b5a0  size=1581 ===== */
// strings:
//   "SkillViewDataArray"
//   "SKILL_VIEW_CLASS_NAME"
//   "mh_sharemem_addrinfo"
//   "itemName"
//   "level"
//   "tuition"
//   "trainingLevel"
//   "guildfund"
//   "SkillViewUpdate"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""SkillViewDataArray""
     ""SKILL_VIEW_CLASS_NAME""
     ""mh_sharemem_addrinfo""
     ""itemName""
     ""level""
     ""tuition""
     ""trainingLevel""
     ""guildfund""
     ""SkillViewUpdate"" */

void FUN_1091b5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int *unaff_EBX;
  byte unaff_SI;
  int *unaff_EDI;
  int *piVar8;
  uint *puVar9;
  int *piStack_138;
  char *pcStack_134;
  uint **ppuStack_130;
  int *piStack_12c;
  int iStack_11c;
  int *piStack_118;
  uint uStack_114;
  uint *local_110;
  uint local_10c;
  int *local_108;
  int local_104;
  undefined4 local_100;
  int iStack_f4;
  int *piStack_e8;
  uint *puStack_e0;
  uint uStack_dc;
  uint *puStack_d8;
  uint uStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int aiStack_c4 [3];
  uint *puStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  uint *puStack_a4;
  uint *puStack_a0;
  uint uStack_9c;
  int *piStack_98;
  int **ppiStack_8c;
  int **ppiStack_88;
  uint **ppuStack_84;
  uint **ppuStack_80;
  undefined1 auStack_7c [12];
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [12];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 **ppuStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_11c;
  local_10c = param_4[1];
  local_104 = param_4[3];
  local_108 = (int *)param_4[2];
  local_100 = param_4[4];
  local_110 = (uint *)0x0;
  if ((local_10c >> 6 & 1) != 0) {
    local_110 = (uint *)*param_4;
    ppuStack_130 = &local_110;
    pcStack_134 = (char *)0x1091b600;
    piStack_12c = local_108;
    (**(code **)(*local_110 + 4))();
  }
  _DAT_123bbb20 = param_2;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) {
    piStack_12c = (int *)0x1091b637;
    iVar4 = (**(code **)(*piVar8 + 0xb4))();
    if (iVar4 != 0) {
      piStack_12c = (int *)0x1091b64a;
      iStack_f4 = (**(code **)(**(int **)(iVar4 + 0x2abc) + 0xc))();
      ppuStack_130 = &puStack_d8;
      puStack_d8 = (uint *)0x0;
      uStack_d4 = 0;
      piStack_12c = (int *)(uint)(((byte)local_10c & 0x8f) == 10);
      pcStack_134 = "SkillViewDataArray";
      piStack_138 = local_108;
      (**(code **)(*local_110 + 0x10))();
      (**(code **)(*piStack_e8 + 0x2c))(puStack_e0,0);
      piStack_d0 = (int *)0x0;
      uStack_cc = 0;
      piStack_12c = (int *)CONCAT31(piStack_12c._1_3_,(unaff_SI & 0x8f) == 10);
      ppuStack_130 = (uint **)0x0;
      cVar3 = (**(code **)(*unaff_EDI + 0x10))
                        (unaff_EBX,"SKILL_VIEW_CLASS_NAME",&piStack_d0,piStack_12c);
      puVar9 = puStack_e0;
      if (((cVar3 != '\0') && (((byte)uStack_dc & 0x8f) == 6)) &&
         (puVar9 = puStack_d8, (uStack_dc >> 6 & 1) != 0)) {
        puVar9 = (uint *)*puStack_d8;
      }
      if (iStack_11c != 0) {
        FUN_114a9180();
        FUN_114a90b0(&piStack_b0);
        piVar8 = piStack_b0;
        if (piStack_b0 != piStack_ac) {
          do {
            puVar1 = (undefined4 *)*piVar8;
            piStack_118 = (int *)0x0;
            uStack_114 = 0;
            FUN_11a98de0(&piStack_118,puVar9,0,0);
            FUN_104d1550(&DAT_11dbb0b4,*puVar1);
            iVar4 = FUN_1145f260(*puVar1,puVar1[1]);
            auStack_5c[0] = 0;
            puStack_4c = auStack_5c;
            pcVar7 = *(char **)(iVar4 + 0x1c);
            puStack_a4 = &uStack_b4;
            pcVar2 = "";
            pcVar6 = "";
            if (pcVar7 != (char *)0x0) {
              pcVar2 = pcVar7;
              pcVar6 = pcVar7;
            }
            do {
              pcVar7 = pcVar2;
              pcVar2 = pcVar7 + 1;
            } while (*pcVar7 != '\0');
            iStack_f4 = iVar4;
            puStack_a0 = puStack_a4;
            puStack_48 = puStack_4c;
            FUN_100b62c0(pcVar6,pcVar7);
            ppuStack_84 = &puStack_a4;
            puStack_a4 = (uint *)((uint)puStack_a4 & 0xffff0000);
            ppuStack_80 = ppuStack_84;
            cVar3 = FUN_100ecfd0(piStack_a8,(int)piStack_ac - (int)piStack_a8,&puStack_a4,4);
            if (cVar3 != '\0') {
              FUN_100ed090(&puStack_a4,auStack_64,3);
            }
            if ((ppuStack_80 != &puStack_a4) && (ppuStack_80 != (uint **)0x0)) {
              FUN_10c3d5d0(ppuStack_80);
            }
            if ((piStack_a8 != aiStack_c4 + 2) && (piStack_a8 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_a8);
            }
            FUN_104d1670("itemName",puStack_50);
            puStack_6c = auStack_7c;
            auStack_7c[0] = 0;
            pcVar7 = "";
            if (*(char **)(iVar4 + 0x20) != (char *)0x0) {
              pcVar7 = *(char **)(iVar4 + 0x20);
            }
            piStack_ac = aiStack_c4 + 2;
            pcVar2 = pcVar7;
            do {
              pcVar6 = pcVar2;
              pcVar2 = pcVar6 + 1;
            } while (*pcVar6 != '\0');
            piStack_a8 = piStack_ac;
            puStack_68 = puStack_6c;
            FUN_100b62c0(pcVar7,pcVar6);
            ppiStack_8c = &piStack_ac;
            piStack_ac = (int *)((uint)piStack_ac & 0xffff0000);
            ppiStack_88 = ppiStack_8c;
            cVar3 = FUN_100ecfd0(piStack_b0,uStack_b4 - (int)piStack_b0,&piStack_ac,4);
            if (cVar3 != '\0') {
              FUN_100ed090(&piStack_ac,&ppuStack_84,3);
            }
            if ((ppiStack_88 != &piStack_ac) && (ppiStack_88 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_88);
            }
            if ((piStack_b0 != aiStack_c4) && (piStack_b0 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_b0);
            }
            FUN_104d1670(&DAT_11dd9b00,uStack_70);
            iVar4 = local_104;
            FUN_104d1550("level",*(undefined4 *)(local_104 + 0x18));
            FUN_104d1550("tuition",*(undefined4 *)(iVar4 + 0x28));
            FUN_104d1550("trainingLevel",*(undefined4 *)(iVar4 + 0x24));
            (**(code **)(*unaff_EBX + 0x3c))(piStack_118,&piStack_138);
            if ((puStack_50 != auStack_64) && (puStack_50 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_50);
            }
            if ((ppuStack_38 != &puStack_4c) && (ppuStack_38 != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_38);
            }
            if ((uStack_114 >> 6 & 1) != 0) {
              (**(code **)(*piStack_118 + 8))(&piStack_118,local_110);
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piStack_ac);
        }
        if (piStack_b0 != (int *)0x0) {
          FUN_10c3d5d0(piStack_b0);
        }
      }
      uVar5 = FUN_114a8610();
      FUN_104d1550("guildfund",uVar5);
      uStack_c8 = 0;
      aiStack_c4[0] = 3;
      aiStack_c4[1] = 0;
      (**(code **)(*piStack_138 + 0x18))
                (ppuStack_130,0,"SkillViewUpdate",&uStack_c8,1,((byte)pcStack_134 & 0x8f) == 10);
      if ((uStack_9c >> 6 & 1) != 0) {
        ppuStack_130 = &puStack_a0;
        piStack_12c = piStack_98;
        pcStack_134 = (char *)0x1091bb29;
        (**(code **)(*puStack_a0 + 8))();
        puStack_a0 = (uint *)0x0;
      }
      uStack_9c = 0;
      if ((uStack_b4 >> 6 & 1) != 0) {
        ppuStack_130 = &puStack_b8;
        piStack_12c = piStack_b0;
        pcStack_134 = (char *)0x1091bb5c;
        (**(code **)(*puStack_b8 + 8))();
        puStack_b8 = (uint *)0x0;
      }
      uStack_b4 = 0;
      if ((uStack_d4 >> 6 & 1) != 0) {
        ppuStack_130 = &puStack_d8;
        piStack_12c = piStack_d0;
        pcStack_134 = (char *)0x1091bb89;
        (**(code **)(*puStack_d8 + 8))();
        puStack_d8 = (uint *)0x0;
      }
      uStack_d4 = 0;
    }
  }
  if ((local_10c >> 6 & 1) != 0) {
    ppuStack_130 = &local_110;
    piStack_12c = local_108;
    pcStack_134 = (char *)0x1091bbb6;
    (**(code **)(*local_110 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091bc50 @ 1091bc50  size=1630 ===== */
// calls: memcpy
// strings:
//   "SkillDataArray"
//   "SKILL_CLASS_NAME"
//   "mh_sharemem_addrinfo"
//   "itemName"
//   "level"
//   "tuition"
//   "trainingLevel"
//   "guildfund"
//   "SkillCandidateUpdate"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""SkillDataArray""
     ""SKILL_CLASS_NAME""
     ""mh_sharemem_addrinfo""
     ""itemName""
     ""level""
     ""tuition""
     ""trainingLevel""
     ""guildfund""
     ""SkillCandidateUpdate"" */

void FUN_1091bc50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int *unaff_EBX;
  uint *puVar10;
  size_t _Size;
  uint *puVar11;
  int **ppiVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uStack_130;
  byte abStack_11c [4];
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  int *local_108;
  uint local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int *piStack_e8;
  int iStack_e0;
  int *piStack_d8;
  uint *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 *puStack_c0;
  int *piStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [8];
  int iStack_a4;
  uint *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined1 **ppuStack_7c;
  undefined1 **ppuStack_78;
  undefined4 **ppuStack_74;
  undefined4 **ppuStack_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  undefined1 **ppuStack_44;
  undefined1 **ppuStack_40;
  undefined1 auStack_3c [20];
  undefined1 *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)abStack_11c;
  local_104 = param_4[1];
  local_fc = param_4[3];
  local_100 = (undefined4 *)param_4[2];
  local_f8 = param_4[4];
  local_108 = (int *)0x0;
  if ((local_104 >> 6 & 1) != 0) {
    local_108 = (int *)*param_4;
    (**(code **)(*local_108 + 4))();
  }
  _DAT_123bbb20 = param_2;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar5 + 0xb4))(), iVar4 != 0)) {
    uStack_114 = (**(code **)(**(int **)(iVar4 + 0x2abc) + 0xc))();
    piStack_d8 = (int *)0x0;
    puStack_d4 = (uint *)0x0;
    uVar7 = (uint)(((byte)local_104 & 0x8f) == 10);
    puVar15 = local_100;
    (**(code **)(*local_108 + 0x10))(local_100,"SkillDataArray");
    uVar14 = 0;
    (**(code **)(*piStack_e8 + 0x2c))(iStack_e0,0);
    if (uVar7 != 0) {
      FUN_114a9180();
      piStack_b8 = (int *)0x0;
      uStack_b4 = 0;
      uStack_130 = CONCAT31((int3)((uint)&piStack_d8 >> 8),(abStack_11c[0] & 0x8f) == 10);
      cVar3 = (**(code **)(*unaff_EBX + 0x10))(uStack_118,"SKILL_CLASS_NAME",&piStack_b8,uStack_130)
      ;
      if (((cVar3 != '\0') && (((byte)uStack_c4 & 0x8f) == 6)) &&
         (puVar15 = puStack_c0, (uStack_c4 >> 6 & 1) != 0)) {
        puVar15 = (undefined4 *)*puStack_c0;
      }
      piVar5 = (int *)FUN_11174390();
      FUN_1091dda0(piVar5[1] - *piVar5 >> 2,&stack0xfffffecf);
      puVar11 = puStack_a0;
      pvVar6 = (void *)*piVar5;
      puVar10 = puVar11;
      iVar4 = iStack_e0;
      if ((void *)piVar5[1] != pvVar6) {
        _Size = piVar5[1] - (int)pvVar6;
        pvVar6 = memcpy(puStack_a0,pvVar6,_Size);
        puStack_d4 = (uint *)((int)pvVar6 + _Size);
        iVar4 = iStack_e0;
        if (puVar11 != puStack_d4) {
          do {
            puVar1 = (undefined4 *)*puVar11;
            ppiVar12 = &local_108;
            iVar13 = 0;
            local_108 = (int *)0x0;
            local_104 = 0;
            FUN_11a98de0(ppiVar12,0,0,0);
            FUN_104d1550(&DAT_11dbb0b4,*puVar1);
            iVar4 = FUN_1145f260(*puVar1,puVar1[1]);
            puStack_54 = auStack_64;
            auStack_64[0] = 0;
            pcVar9 = *(char **)(iVar4 + 0x1c);
            piStack_94 = &iStack_a4;
            pcVar2 = "";
            pcVar8 = "";
            if (pcVar9 != (char *)0x0) {
              pcVar2 = pcVar9;
              pcVar8 = pcVar9;
            }
            do {
              pcVar9 = pcVar2;
              pcVar2 = pcVar9 + 1;
            } while (*pcVar9 != '\0');
            piStack_90 = piStack_94;
            puStack_50 = puStack_54;
            FUN_100b62c0(pcVar8,pcVar9);
            ppuStack_74 = &piStack_94;
            piStack_94 = (int *)((uint)piStack_94 & 0xffff0000);
            ppuStack_70 = ppuStack_74;
            cVar3 = FUN_100ecfd0(puStack_98,(int)puStack_9c - (int)puStack_98,&piStack_94,4);
            if (cVar3 != '\0') {
              FUN_100ed090(&piStack_94,auStack_6c,3);
            }
            if ((ppuStack_70 != &piStack_94) && (ppuStack_70 != (int **)0x0)) {
              FUN_10c3d5d0(ppuStack_70);
            }
            if ((puStack_98 != auStack_ac) && (puStack_98 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_98);
            }
            FUN_104d1670("itemName",uStack_58);
            ppuStack_44 = &puStack_54;
            puStack_54 = (undefined1 *)((uint)puStack_54 & 0xffffff00);
            pcVar9 = "";
            if (*(char **)(iVar13 + 0x20) != (char *)0x0) {
              pcVar9 = *(char **)(iVar13 + 0x20);
            }
            puStack_9c = auStack_ac;
            pcVar2 = pcVar9;
            do {
              pcVar8 = pcVar2;
              pcVar2 = pcVar8 + 1;
            } while (*pcVar8 != '\0');
            puStack_98 = puStack_9c;
            ppuStack_40 = ppuStack_44;
            FUN_100b62c0(pcVar9,pcVar8);
            ppuStack_7c = &puStack_9c;
            puStack_9c = (undefined1 *)((uint)puStack_9c & 0xffff0000);
            ppuStack_78 = ppuStack_7c;
            cVar3 = FUN_100ecfd0(puStack_a0,iStack_a4 - (int)puStack_a0,&puStack_9c,4);
            if (cVar3 != '\0') {
              FUN_100ed090(&puStack_9c,auStack_5c,3);
            }
            if ((ppuStack_78 != &puStack_9c) && (ppuStack_78 != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_78);
            }
            if ((puStack_a0 != &uStack_b4) && (puStack_a0 != (uint *)0x0)) {
              FUN_10c3d5d0(puStack_a0);
            }
            FUN_104d1670(&DAT_11dd9b00,uStack_48);
            FUN_104d1550("level",ppiVar12[6]);
            FUN_104d1550("tuition",ppiVar12[10]);
            FUN_104d1550("trainingLevel",ppiVar12[9]);
            (**(code **)(*piStack_110 + 0x3c))(local_108,&stack0xfffffed8);
            if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_28);
            }
            if ((ppuStack_40 != &puStack_54) && (ppuStack_40 != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_40);
            }
            if ((local_104 >> 6 & 1) != 0) {
              (**(code **)(*local_108 + 8))(&local_108,local_100);
            }
            puVar11 = puVar11 + 1;
            puVar10 = puStack_a0;
          } while (puVar11 != puStack_d4);
        }
      }
      if (puVar10 != (uint *)0x0) {
        FUN_10c3d5d0(puVar10,iVar4,uVar14,puVar15);
      }
      if ((uStack_b4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_b8 + 8))(&piStack_b8,uStack_b0);
      }
    }
    uVar14 = FUN_114a8610();
    FUN_104d1550("guildfund",uVar14);
    FUN_104d1550("trainingLevel",*(undefined1 *)(uVar7 + 0x224));
    uStack_d0 = 0;
    uStack_cc = 3;
    uStack_c8 = 0;
    (**(code **)(*unaff_EBX + 0x18))
              (uStack_118,0,"SkillCandidateUpdate",&uStack_d0,1,(abStack_11c[0] & 0x8f) == 10);
    if ((uStack_b4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_b8 + 8))();
      piStack_b8 = (int *)0x0;
    }
    uStack_b4 = 0;
    if (((uint)puStack_d4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_d8 + 8))();
      piStack_d8 = (int *)0x0;
    }
    puStack_d4 = (uint *)0x0;
  }
  if ((local_104 >> 6 & 1) != 0) {
    (**(code **)(*local_108 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091cec0 @ 1091cec0  size=1964 ===== */
// calls: CGuildBuildingLevelUpInfo::FindInfoByTypeLevel
// strings:
//   "currentLevel"
//   "SKILL_VIEW_CLASS_NAME"
//   "currentSkillUnlock"
//   "nextSkilUnlock"
//   "mh_sharemem_addrinfo"
//   "itemName"
//   "level"
//   "tuition"
//   "trainingLevel"
//   "CurrentGuildLevel"
//   "CurrentGuildFund"
//   "addTeamMember"
//   "addGoldMax"
//   "addStorehouse"
//   "nextLevel"
//   "guildLevel"
//   "goldNeed"
//   "nextTeamMember"
//   "nextGoldMax"
//   "nextStorehouse"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""currentLevel""
     ""SKILL_VIEW_CLASS_NAME""
     ""currentSkillUnlock""
     ""nextSkilUnlock""
     ""mh_sharemem_addrinfo""
     ""itemName""
     ""level""
     ""tuition""
     ""trainingLevel""
     ""CurrentGuildLevel"" */

void FUN_1091cec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_EBX;
  int *piVar7;
  byte unaff_SI;
  int *unaff_EDI;
  int *piVar8;
  byte bVar9;
  int *piStack_10c;
  int *local_108;
  char *local_104;
  undefined4 local_100;
  char *local_fc;
  undefined4 local_f8;
  int *piStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  uint uStack_bc;
  int aiStack_b8 [4];
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int *piStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  uint uStack_7c;
  int *piStack_78;
  int iStack_74;
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  int *piStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 **ppuStack_2c;
  undefined1 **ppuStack_28;
  undefined1 auStack_24 [20];
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_10c;
  local_108 = (int *)0x0;
  local_104 = (char *)param_4[1];
  local_fc = (char *)param_4[3];
  local_100 = param_4[2];
  local_f8 = param_4[4];
  if (((uint)local_104 >> 6 & 1) != 0) {
    local_108 = (int *)*param_4;
    (**(code **)(*local_108 + 4))(&local_108,local_100);
  }
  _DAT_123bbb20 = param_2;
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_f0 = param_4[8];
  }
  else {
    local_f0 = -0x21524151;
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar8 + 0xb4))(), iVar2 != 0)) {
    piVar8 = *(int **)(iVar2 + 0x2abc);
    piStack_78 = piVar8;
    iVar2 = (**(code **)(*piVar8 + 0xc))();
    iStack_e0 = iVar2;
    cVar1 = (**(code **)(*piVar8 + 8))();
    if (cVar1 != '\0') {
      piVar8 = (int *)0x0;
      switch(local_f0) {
      case 2:
        piVar8 = (int *)(uint)*(byte *)(iVar2 + 0x221);
        break;
      case 3:
        piVar8 = (int *)(uint)*(byte *)(iVar2 + 0x222);
        break;
      case 4:
        piVar8 = (int *)(uint)*(byte *)(iVar2 + 0x223);
        break;
      case 5:
        piVar8 = (int *)(uint)*(byte *)(iVar2 + 0x224);
      }
      piVar7 = (int *)((int)piVar8 + 1);
      if (&DAT_00000005 < piVar7) {
        piVar7 = (int *)&DAT_00000005;
      }
      piStack_e8 = piVar7;
      FUN_104d1550("currentLevel",piVar8);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x1;
      }
      piStack_dc = piVar8;
      if (local_f0 == 5) {
        piStack_70 = (int *)0x0;
        uStack_6c = 0;
        uStack_ec = CONCAT31(uStack_ec._1_3_,((byte)local_104 & 0x8f) == 10);
        uStack_e4 = 0;
        uVar4 = local_100;
        cVar1 = (**(code **)(*local_108 + 0x10))
                          (local_100,"SKILL_VIEW_CLASS_NAME",&piStack_70,uStack_ec);
        if (((cVar1 != '\0') && (((byte)uStack_7c & 0x8f) == 6)) &&
           (piStack_f4 = piStack_78, (uStack_7c >> 6 & 1) != 0)) {
          piStack_f4 = (int *)*piStack_78;
        }
        bVar9 = (unaff_SI & 0x8f) == 10;
        aiStack_b8[0] = 0;
        aiStack_b8[1] = 0;
        piVar7 = aiStack_b8;
        (**(code **)(*unaff_EDI + 0x10))(unaff_EBX,"currentSkillUnlock",piVar7,bVar9);
        (**(code **)(*piStack_c8 + 0x2c))(piStack_c0,0);
        aiStack_b8[0] = 0;
        aiStack_b8[1] = 0;
        (**(code **)(*piVar7 + 0x10))(uVar4,"nextSkilUnlock",aiStack_b8,(bVar9 & 0x8f) == 10);
        (**(code **)(*piStack_c8 + 0x2c))(piStack_c0,0);
        iVar2 = 0;
        iStack_74 = FUN_1091a0a0();
        if (0 < iStack_74) {
          do {
            iVar3 = FUN_1091a010(iVar2);
            piVar8 = piStack_dc;
            if (iVar3 != 0) {
              piStack_c0 = (int *)0x0;
              uStack_bc = 0;
              FUN_11a98de0(&piStack_c0,uStack_e4,0,0);
              FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar3 + 0x14));
              puStack_3c = auStack_4c;
              auStack_4c[0] = 0;
              pcVar6 = "";
              if (*(char **)(iVar3 + 0x1c) != (char *)0x0) {
                pcVar6 = *(char **)(iVar3 + 0x1c);
              }
              puStack_54 = auStack_64;
              local_fc = pcVar6 + 1;
              pcVar5 = pcVar6;
              do {
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              puStack_50 = puStack_54;
              puStack_38 = puStack_3c;
              FUN_100b62c0(pcVar6,pcVar6 + ((int)pcVar5 - (int)local_fc));
              FUN_1091ee80();
              if ((puStack_58 != &uStack_6c) && (puStack_58 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_58);
              }
              FUN_104d1670("itemName",uStack_40);
              ppuStack_2c = &puStack_3c;
              puStack_3c = (undefined1 *)((uint)puStack_3c & 0xffffff00);
              pcVar6 = "";
              if (*(char **)(iVar3 + 0x20) != (char *)0x0) {
                pcVar6 = *(char **)(iVar3 + 0x20);
              }
              puStack_5c = &uStack_6c;
              local_104 = pcVar6 + 1;
              pcVar5 = pcVar6;
              do {
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              puStack_58 = puStack_5c;
              ppuStack_28 = ppuStack_2c;
              FUN_100b62c0(pcVar6,pcVar6 + ((int)pcVar5 - (int)local_104));
              FUN_1091ee80();
              if ((piStack_60 != &iStack_74) && (piStack_60 != (int *)0x0)) {
                FUN_10c3d5d0(piStack_60);
              }
              FUN_104d1670(&DAT_11dd9b00,uStack_30);
              FUN_104d1550("level",*(undefined4 *)(iVar3 + 0x18));
              FUN_104d1550("tuition",*(undefined4 *)(iVar3 + 0x28));
              FUN_104d1550("trainingLevel",*(undefined4 *)(iVar3 + 0x24));
              piVar8 = piStack_dc;
              piVar7 = piStack_a8;
              uVar4 = uStack_a0;
              if ((piStack_dc == *(int **)(iVar3 + 0x24)) ||
                 (piVar7 = piStack_90, uVar4 = uStack_88, piStack_e8 == *(int **)(iVar3 + 0x24))) {
                (**(code **)(*piVar7 + 0x3c))(uVar4,&piStack_c0);
              }
              if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_10);
              }
              if ((ppuStack_28 != &puStack_3c) && (ppuStack_28 != (undefined1 **)0x0)) {
                FUN_10c3d5d0(ppuStack_28);
              }
              if ((uStack_bc >> 6 & 1) != 0) {
                (**(code **)(*piStack_c0 + 8))(&piStack_c0,aiStack_b8[0]);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iStack_74);
        }
        if ((uStack_8c >> 6 & 1) != 0) {
          (**(code **)(*piStack_90 + 8))(&piStack_90,uStack_88);
          piStack_90 = (int *)0x0;
        }
        uStack_8c = 0;
        if ((uStack_a4 >> 6 & 1) != 0) {
          (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
          piStack_a8 = (int *)0x0;
        }
        uStack_a4 = 0;
        piVar7 = piStack_e8;
        if ((uStack_6c >> 6 & 1) != 0) {
          (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
          piVar7 = piStack_e8;
        }
      }
      iVar2 = CGuildBuildingLevelUpInfo__FindInfoByTypeLevel(local_f0,piVar8);
      FUN_104d1550("CurrentGuildLevel",*(undefined4 *)(iStack_e0 + 0x44));
      uVar4 = FUN_114a8610();
      FUN_104d1550("CurrentGuildFund",uVar4);
      if (iVar2 != 0) {
        FUN_104d1550("addTeamMember",*(undefined4 *)(iVar2 + 0x24));
        FUN_104d1550("addGoldMax",*(undefined4 *)(iVar2 + 0x28));
        FUN_104d1550("addStorehouse",*(undefined4 *)(iVar2 + 0x2c));
        iVar2 = CGuildBuildingLevelUpInfo__FindInfoByTypeLevel(local_f0,piVar7);
        if (iVar2 == 0) {
          FUN_104d1550("nextLevel",9);
        }
        else {
          FUN_104d1550("guildLevel",*(undefined4 *)(iVar2 + 0x1c));
          FUN_104d1550("goldNeed",*(undefined4 *)(iVar2 + 0x20));
          FUN_104d1550("nextLevel",piVar7);
          FUN_104d1550("nextTeamMember",*(undefined4 *)(iVar2 + 0x24));
          FUN_104d1550("nextGoldMax",*(undefined4 *)(iVar2 + 0x28));
          FUN_104d1550("nextStorehouse",*(undefined4 *)(iVar2 + 0x2c));
        }
        piStack_d8 = (int *)0x0;
        uStack_d4 = 3;
        uStack_d0 = 0;
        (**(code **)(*piStack_78 + 0x14))();
        FUN_114b0f80(0x400);
        cVar1 = FUN_114f7010();
        if (cVar1 != '\0') {
          if (((uint)piStack_d8 >> 6 & 1) != 0) {
            (**(code **)(*piStack_dc + 8))(&piStack_dc,uStack_d4);
            piStack_dc = (int *)0x0;
          }
          piStack_d8 = (int *)0x3;
          uStack_d4 = 1;
        }
        (**(code **)(*piStack_10c + 0x18))
                  (local_104,0,"levelMessageUpdate",&piStack_dc,1,((byte)local_108 & 0x8f) == 10);
        if ((uStack_d4 >> 6 & 1) != 0) {
          (**(code **)(*piStack_d8 + 8))(&piStack_d8,uStack_d0);
          piStack_d8 = (int *)0x0;
        }
        uStack_d4 = 0;
      }
    }
  }
  if (((uint)local_104 >> 6 & 1) != 0) {
    (**(code **)(*local_108 + 8))(&local_108,local_100);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10929bf0 @ 10929bf0  size=673 ===== */
// strings:
//   "totalIconPlayTime"
//   "totalIconCountsPlayTime"
//   "averageIconPlayTime"
//   "scoreToScoreTransformDelay"
//   "scoreToScoreTransformCounts"
//   "baseScoreTransformTotalTime"
//   "baseScoreTransformCounts"
//   "billScoreTransformTotalTime"
//   "billScoreTransformCounts"
//   "mvpScoreTransformTotalTime"
//   "mvpScoreTransformCounts"
//   "zeroScoreDelayTime"
//   "testDataFlag"
//   "achieveScoreTransformCounts"
//   "achieveScoreAverageTime"
//   "iconFirstPlayDelayTime"

/* [RE-AUTO c0]
   strings:
     ""totalIconPlayTime""
     ""totalIconCountsPlayTime""
     ""averageIconPlayTime""
     ""scoreToScoreTransformDelay""
     ""scoreToScoreTransformCounts""
     ""baseScoreTransformTotalTime""
     ""baseScoreTransformCounts""
     ""billScoreTransformTotalTime""
     ""billScoreTransformCounts""
     ""mvpScoreTransformTotalTime"" */

void FUN_10929bf0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_117423e0();
  uVar1 = FUN_11742530();
  FUN_117423e0();
  uVar2 = FUN_11742520();
  FUN_117423e0();
  uVar3 = FUN_11742390();
  FUN_117423e0();
  uVar4 = FUN_11742510();
  FUN_117423e0();
  uVar5 = FUN_11742500();
  FUN_117423e0();
  uVar6 = FUN_117423b0();
  FUN_117423e0();
  uVar7 = FUN_117423a0();
  FUN_117423e0();
  uVar8 = FUN_117423d0();
  FUN_117423e0();
  uVar9 = FUN_117423c0();
  FUN_117423e0();
  uVar10 = FUN_11742450();
  FUN_117423e0();
  uVar11 = FUN_11742440();
  FUN_117423e0();
  uVar12 = FUN_11742540();
  FUN_117423e0();
  uVar13 = FUN_11742380();
  FUN_117423e0();
  uVar14 = FUN_11742370();
  FUN_117423e0();
  uVar15 = FUN_11742420();
  FUN_104d1550("totalIconPlayTime",uVar1);
  FUN_104d1550("totalIconCountsPlayTime",uVar2);
  FUN_104d1550("averageIconPlayTime",uVar3);
  FUN_104d1550("scoreToScoreTransformDelay",uVar4);
  FUN_104d1550("scoreToScoreTransformCounts",uVar5);
  FUN_104d1550("baseScoreTransformTotalTime",uVar6);
  FUN_104d1550("baseScoreTransformCounts",uVar7);
  FUN_104d1550("billScoreTransformTotalTime",uVar8);
  FUN_104d1550("billScoreTransformCounts",uVar9);
  FUN_104d1550("mvpScoreTransformTotalTime",uVar10);
  FUN_104d1550("mvpScoreTransformCounts",uVar11);
  FUN_104d1550("zeroScoreDelayTime",uVar12);
  FUN_104d15e0("testDataFlag",DAT_123bbb3c);
  FUN_104d1550("achieveScoreTransformCounts",uVar13);
  FUN_104d1550("achieveScoreAverageTime",uVar14);
  FUN_104d1550("iconFirstPlayDelayTime",uVar15);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1093de10 @ 1093de10  size=1864 ===== */
// calls: CPet::SetName
// strings:
//   "_memberArray"
//   "_teamInfo"
//   "BTMemberVo_CLASS_NAME"
//   "strName"
//   "nLevel"
//   "nHRLevel"
//   "strNote"
//   "bIsLeader"
//   "index"
//   "bOnline"
//   "dayleft"
//   "nScore"
//   "IsSelf"
//   "BTMemberNum"
//   "BTMemberOnlineNum"
//   "BTName"
//   "BTScore"
//   "averageMemberLevel"
//   "BTPvpEffectiveness"
//   "BTPersonalScore"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""_memberArray""
     ""_teamInfo""
     ""BTMemberVo_CLASS_NAME""
     ""strName""
     ""nLevel""
     ""nHRLevel""
     ""strNote""
     ""bIsLeader""
     ""index""
     ""bOnline"" */

void FUN_1093de10(void)

{
  int ***pppiVar1;
  char cVar2;
  undefined1 uVar3;
  int *****pppppiVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int ******unaff_EBX;
  int ****ppppiVar9;
  uint unaff_ESI;
  int *unaff_EDI;
  undefined8 uVar10;
  int **ppiVar11;
  int *****pppppiStack_128;
  int ******ppppppiStack_124;
  int ******ppppppiStack_120;
  int ******ppppppiStack_11c;
  int *****pppppiStack_118;
  int ******ppppppiStack_114;
  int **ppiStack_110;
  char *pcStack_10c;
  int *****pppppiStack_108;
  int ******ppppppiStack_104;
  int **ppiStack_100;
  char *pcStack_fc;
  int ****ppppiStack_f8;
  uint uStack_f4;
  int ******ppppppiStack_f0;
  int iStack_ec;
  int **ppiStack_e8;
  int **ppiStack_e4;
  int ******ppppppiStack_e0;
  uint uStack_dc;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined4 local_bc;
  int ****ppppiStack_b8;
  uint uStack_b4;
  int ******ppppppiStack_b0;
  int *****local_a0;
  int *****local_9c;
  int ****appppiStack_98 [2];
  int ****ppppiStack_90;
  int ******ppppppiStack_8c;
  int ******ppppppiStack_88;
  int *****pppppiStack_84;
  int *****local_80;
  int ******local_7c;
  int ******ppppppiStack_78;
  int *piStack_74;
  int *****pppppiStack_70;
  int *****pppppiStack_6c;
  int ******ppppppiStack_64;
  undefined4 local_58;
  undefined4 local_54;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_cc;
  uStack_dc = (uint)(((byte)DAT_123bd264 & 0x8f) == 10);
  ppppppiStack_e0 = &local_80;
  local_a0 = (int *****)0x0;
  local_9c = (int *****)0x0;
  local_80 = (int *****)0x0;
  local_7c = (int ******)0x0;
  local_58 = 0;
  local_54 = 0;
  local_c0 = 0;
  local_bc = 0;
  ppiStack_e4 = (int **)0x11ddba3c;
  ppiStack_e8 = DAT_123bd268;
  iStack_ec = 0x1093dea8;
  (**(code **)(*DAT_123bd260 + 0x10))();
  iStack_ec = 0;
  ppppppiStack_f0 = ppppppiStack_88;
  uStack_f4 = 0x1093deb7;
  (*(code *)(*ppppiStack_90)[0xb])();
  uStack_f4 = (uint)(((byte)DAT_123bd264 & 0x8f) == 10);
  ppppiStack_f8 = (int ****)&ppppiStack_b8;
  pcStack_fc = "_teamInfo";
  ppiStack_100 = DAT_123bd268;
  ppppppiStack_104 = (int ******)0x1093dee5;
  (**(code **)(*DAT_123bd260 + 0x10))();
  pppppiStack_108 = (int *****)&local_80;
  ppppppiStack_f0 = (int ******)CONCAT31(ppppppiStack_f0._1_3_,((byte)DAT_123bd264 & 0x8f) == 10);
  ppppppiStack_104 = ppppppiStack_f0;
  pcStack_10c = "BTMemberVo_CLASS_NAME";
  ppiStack_110 = DAT_123bd268;
  ppppppiStack_114 = (int ******)0x1093df1a;
  cVar2 = (**(code **)(*DAT_123bd260 + 0x10))();
  if ((cVar2 != '\0') && (((byte)ppppppiStack_8c & 0x8f) == 6)) {
    ppppppiStack_e0 = ppppppiStack_88;
    if (((uint)ppppppiStack_8c >> 6 & 1) != 0) {
      ppppppiStack_e0 = (int ******)*ppppppiStack_88;
    }
    if ((((ppppppiStack_e0 != (int ******)0x0) && (DAT_1202e818 != 0)) &&
        (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) {
      ppppppiStack_114 = (int ******)0x1093df86;
      ppiStack_100 = (int **)(**(code **)(*piVar5 + 0xb4))();
      if ((ppiStack_100 != (int **)0x0) &&
         (piStack_74 = ppiStack_100[0xab7], piStack_74 != (int *)0x0)) {
        ppppppiStack_114 = (int ******)0x1093dfae;
        pppppiVar4 = (int *****)(**(code **)(*piStack_74 + 0xc))();
        local_9c = pppppiVar4;
        if (pppppiVar4 != (int *****)0x0) {
          ppppppiStack_114 = (int ******)0x1093dfc3;
          piVar5 = (int *)FUN_115024d0();
          ppppiVar9 = (int ****)*piVar5;
          appppiStack_98[0] = (int ****)piVar5[1];
          if (ppppiVar9 != appppiStack_98[0]) {
            do {
              pppiVar1 = *ppppiVar9;
              ppppppiStack_120 = (int ******)&ppppiStack_f8;
              ppppppiStack_114 = (int ******)0x0;
              pppppiStack_118 = (int *****)0x0;
              ppppppiStack_11c = ppppppiStack_e0;
              ppppppiStack_124 = (int ******)0x1093dff2;
              FUN_11a98de0();
              ppppppiStack_124 = (int ******)pppiVar1[6];
              pppppiStack_70 = (int *****)&local_80;
              pppppiStack_128 = (int *****)pppiVar1[7];
              pppppiStack_6c = pppppiStack_70;
              FUN_100b62c0();
              ppppppiStack_11c = (int ******)0x0;
              CPet__SetName(piStack_74);
              if (((int *******)ppppppiStack_78 != &ppppppiStack_8c) &&
                 (ppppppiStack_78 != (int ******)0x0)) {
                FUN_10c3d5d0(ppppppiStack_78);
              }
              ppiVar11 = pppiVar1[0xf];
              local_7c = (int ******)&ppppppiStack_8c;
              ppppppiStack_78 = local_7c;
              FUN_100b62c0(pppiVar1[0x10]);
              ppppppiStack_120 = (int ******)0x0;
              CPet__SetName(local_80);
              if ((pppppiStack_84 != appppiStack_98) && (pppppiStack_84 != (int *****)0x0)) {
                FUN_10c3d5d0(pppppiStack_84);
              }
              ppiStack_e8 = pppiVar1[8];
              ppiStack_e4 = pppiVar1[9];
              ppppppiStack_88 = (int ******)appppiStack_98;
              appppiStack_98[0] = (int ****)((uint)appppiStack_98[0] & 0xffffff00);
              pppppiStack_84 = (int *****)ppppppiStack_88;
              FUN_100e5aa0(ppppppiStack_88);
              FUN_104d1670("strName",ppppppiStack_88);
              if ((ppppppiStack_88 != &local_9c) && (ppppppiStack_88 != (int ******)0x0)) {
                FUN_10c3d5d0(ppppppiStack_88);
              }
              uVar6 = (*(code *)(*pppiVar1)[2])();
              FUN_104d1550("nLevel",uVar6);
              uVar6 = (*(code *)(*pppiVar1)[8])();
              FUN_104d1550("nHRLevel",uVar6);
              local_9c = (int *****)((uint)local_9c & 0xffffff00);
              ppppppiStack_8c = &local_9c;
              ppppppiStack_88 = ppppppiStack_8c;
              FUN_100e5aa0(ppppppiStack_8c);
              FUN_104d1670("strNote",ppppppiStack_8c);
              if ((ppppppiStack_8c != &local_a0) && (ppppppiStack_8c != (int ******)0x0)) {
                FUN_10c3d5d0(ppppppiStack_8c);
              }
              uVar3 = FUN_115b6e70();
              FUN_104d15e0("bIsLeader",uVar3);
              FUN_104d14d0("index");
              uVar6 = (*(code *)(*pppiVar1)[5])();
              FUN_104d1550(&DAT_11ddbb80,uVar6);
              uVar3 = (*(code *)(*pppiVar1)[4])();
              FUN_104d15e0("bOnline",uVar3);
              uVar6 = (*(code *)(*pppiVar1)[6])();
              FUN_104d1550("dayleft",uVar6);
              uVar6 = (*(code *)(*pppiVar1)[3])();
              FUN_104d1550("nScore",uVar6);
              (*(code *)(*ppiVar11)[0x30])();
              uVar10 = (*(code *)(*ppiVar11)[0x30])();
              if (ppppppiStack_f0 == (int ******)uVar10) {
                pcStack_10c = (char *)CONCAT31(pcStack_10c._1_3_,1);
                if (iStack_ec != (int)((ulonglong)uVar10 >> 0x20)) goto LAB_1093e278;
              }
              else {
LAB_1093e278:
                pcStack_10c = (char *)((uint)pcStack_10c & 0xffffff00);
              }
              FUN_104d15e0("IsSelf",pcStack_10c);
              (*(code *)(*ppiStack_e8)[0xf])(ppppppiStack_e0,&pppppiStack_128);
              if (pcStack_fc != (char *)0x0) {
                ppppppiStack_114 = (int ******)pcStack_fc;
                pppppiStack_118 = (int *****)0x1093e2b4;
                FUN_10c3da30();
              }
              if (ppppppiStack_104 != (int ******)0x0) {
                ppppppiStack_114 = ppppppiStack_104;
                pppppiStack_118 = (int *****)0x1093e2c5;
                FUN_10c3da30();
              }
              ppppiVar9 = ppppiVar9 + 1;
              pppppiVar4 = local_9c;
            } while (ppppiVar9 != appppiStack_98[0]);
          }
          ppppppiStack_114 = &pppppiStack_70;
          pppppiStack_118 = (int *****)0x1093e2ed;
          iVar7 = (**(code **)(*piStack_74 + 0x14))();
          pppppiStack_108 = (int *****)0x0;
          pppppiStack_118 = *(int ******)(iVar7 + 0x14);
          ppppppiStack_11c = (int ******)0x1093e301;
          CPet__SetName();
          if (((int *******)ppppppiStack_64 != &ppppppiStack_78) &&
             (ppppppiStack_64 != (int ******)0x0)) {
            ppppppiStack_11c = ppppppiStack_64;
            ppppppiStack_120 = (int ******)0x1093e31d;
            FUN_10c3d5d0();
          }
          ppppppiStack_120 = (int ******)&ppppppiStack_78;
          ppppppiStack_11c = (int ******)0x134;
          ppppppiStack_124 = (int ******)0x1093e33c;
          puVar8 = (undefined4 *)FUN_11348ac0();
          uVar6 = *puVar8;
          if (((int *******)ppppppiStack_64 != &ppppppiStack_78) &&
             (ppppppiStack_64 != (int ******)0x0)) {
            ppppppiStack_124 = ppppppiStack_64;
            pppppiStack_128 = (int *****)0x1093e35a;
            FUN_10c3d5d0();
          }
          ppppppiStack_124 = (int ******)0x1093e364;
          ppppppiStack_124 = (int ******)FUN_115022e0();
          pppppiStack_128 = (int *****)0x11ddbae8;
          FUN_104d1550();
          ppppppiStack_124 = (int ******)0x1093e37f;
          ppppppiStack_124 = (int ******)(*(code *)(*pppppiVar4)[5])();
          pppppiStack_128 = (int *****)0x11ddbac4;
          FUN_104d1550();
          local_80 = (int *****)((uint)local_80 & 0xffffff00);
          ppppppiStack_124 = &local_80;
          pppppiStack_128 = (int *****)0x1093e3ba;
          pppppiStack_70 = (int *****)ppppppiStack_124;
          pppppiStack_6c = (int *****)ppppppiStack_124;
          FUN_100e5aa0();
          pppppiStack_128 = pppppiStack_70;
          FUN_104d1670("BTName");
          if (((int ******)pppppiStack_70 != &pppppiStack_84) && (pppppiStack_70 != (int *****)0x0))
          {
            pppppiStack_128 = pppppiStack_70;
            FUN_10c3d5d0();
          }
          pppppiStack_128 = (int *****)pppppiVar4[0x22];
          FUN_104d1550("BTScore");
          pppppiStack_128 = (int *****)0x1093e413;
          pppppiStack_128 = (int *****)(*(code *)(*pppppiVar4)[7])();
          FUN_104d1550("averageMemberLevel");
          FUN_104d1550("BTPvpEffectiveness",pppppiVar4[0x2b]);
          FUN_104d1550("BTPersonalScore",uVar6);
          FUN_104d1550("BTPveScore",pppppiVar4[0x26]);
          FUN_104d1550("BTPvpScore",pppppiVar4[0x2a]);
          if (ppppppiStack_104 != (int ******)0x0) {
            ppppppiStack_114 = ppppppiStack_104;
            pppppiStack_118 = (int *****)0x1093e488;
            FUN_10c3da30();
          }
        }
      }
    }
  }
  if ((uStack_f4 >> 6 & 1) != 0) {
    pppppiStack_118 = &ppppiStack_f8;
    ppppppiStack_114 = ppppppiStack_f0;
    ppppppiStack_11c = (int ******)0x1093e4a8;
    (*(code *)(*ppppiStack_f8)[2])();
    ppppiStack_f8 = (int ****)0x0;
  }
  uStack_f4 = 0;
  if (((uint)ppppppiStack_8c >> 6 & 1) != 0) {
    pppppiStack_118 = &ppppiStack_90;
    ppppppiStack_114 = ppppppiStack_88;
    ppppppiStack_11c = (int ******)0x1093e4e1;
    (*(code *)(*ppppiStack_90)[2])();
    ppppiStack_90 = (int ****)0x0;
  }
  ppppppiStack_8c = (int ******)0x0;
  if ((uStack_b4 >> 6 & 1) != 0) {
    pppppiStack_118 = &ppppiStack_b8;
    ppppppiStack_114 = ppppppiStack_b0;
    ppppppiStack_11c = (int ******)0x1093e514;
    (*(code *)(*ppppiStack_b8)[2])();
    ppppiStack_b8 = (int ****)0x0;
  }
  uStack_b4 = 0;
  if ((unaff_ESI >> 6 & 1) != 0) {
    pppppiStack_118 = (int *****)&stack0xffffff28;
    ppppppiStack_11c = (int ******)0x1093e541;
    ppppppiStack_114 = unaff_EBX;
    (**(code **)(*unaff_EDI + 8))();
  }
  pppppiStack_108 = (int *****)0x1093e552;
  FUN_11a89daa();
  return;
}



/* ===== FUN_109568f0 @ 109568f0  size=273 ===== */
// strings:
//   "_getLocalPlayerNetID"
//   "_getCommonGroupPlayerHealth"
//   "_getCommonGroupPlayerLevel"
//   "_getCommonGroupInfo"
//   "_getCommonGroupBufferInfo"
//   "_getCommonGroupPlayerInfo"
//   "_getCommonBatchExecBuffCmd"

/* [RE-AUTO c0]
   strings:
     ""_getLocalPlayerNetID""
     ""_getCommonGroupPlayerHealth""
     ""_getCommonGroupPlayerLevel""
     ""_getCommonGroupInfo""
     ""_getCommonGroupBufferInfo""
     ""_getCommonGroupPlayerInfo""
     ""_getCommonBatchExecBuffCmd"" */

void FUN_109568f0(void)

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
    FUN_104d13b0("_getLocalPlayerNetID",&DAT_10956b20);
    FUN_104d13b0("_getCommonGroupPlayerHealth",&DAT_10956b30);
    FUN_104d13b0("_getCommonGroupPlayerLevel",&DAT_10956b40);
    FUN_104d13b0("_getCommonGroupInfo",FUN_10956b50);
    FUN_104d13b0("_getCommonGroupBufferInfo",&DAT_109571e0);
    FUN_104d13b0("_getCommonGroupPlayerInfo",FUN_109571f0);
    FUN_104d13b0("_getCommonBatchExecBuffCmd",FUN_109572a0);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_109572a0 @ 109572a0  size=1810 ===== */
// strings:
//   "TEAM_MEMBER_BUFFER_DATA_CLASSNAME"
//   "_strName"
//   "_nType"
//   "_nTime"
//   "_nTotalTime"
//   "_tipString"
//   "_strIcon"
//   "_nStackCount"
//   "_nNetID"
//   "_nIconUpdateTimeFlag"
//   "_nTeamBuffActType"
//   "_nbufTriggerCount"
//   "BatchBuffList"

/* [RE-AUTO c0]
   strings:
     ""TEAM_MEMBER_BUFFER_DATA_CLASSNAME""
     ""_strName""
     ""_nType""
     ""_nTime""
     ""_nTotalTime""
     ""_tipString""
     ""_strIcon""
     ""_nStackCount""
     ""_nNetID""
     ""_nIconUpdateTimeFlag"" */

void FUN_109572a0(int **param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 unaff_EBX;
  byte unaff_SI;
  int *unaff_EDI;
  int *piVar2;
  uint *puStack_5f0;
  int **ppiStack_5ec;
  int *piStack_5e8;
  char *pcStack_5e4;
  int **ppiStack_5e0;
  int *piStack_5dc;
  undefined1 auStack_5cc [4];
  undefined1 auStack_5c8 [4];
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  int *piStack_5ac;
  int *piStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  int *piStack_598;
  uint uStack_594;
  int *piStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  int *piStack_580;
  uint uStack_57c;
  int *piStack_578;
  int *piStack_564;
  int *local_560;
  uint local_55c;
  int *local_558;
  int *local_554;
  int *local_550;
  undefined1 auStack_54c [4];
  int *piStack_548;
  uint uStack_544;
  int *piStack_540;
  undefined1 auStack_4cc [1024];
  undefined1 auStack_cc [128];
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_5cc;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    piStack_5dc = param_1[2];
    ppiStack_5e0 = param_1;
    pcStack_5e4 = (char *)0x109572d8;
    (**(code **)(**param_1 + 8))();
    *param_1 = (int *)0x0;
  }
  param_1[1] = (int *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  local_560 = (int *)0x0;
  local_55c = param_4[1];
  local_554 = (int *)param_4[3];
  piStack_5dc = (int *)param_4[2];
  local_550 = (int *)param_4[4];
  local_558 = piStack_5dc;
  if ((local_55c >> 6 & 1) != 0) {
    local_560 = (int *)*param_4;
    ppiStack_5e0 = &local_560;
    pcStack_5e4 = (char *)0x10957332;
    (**(code **)(*local_560 + 4))();
  }
  uStack_594 = param_4[7];
  uStack_58c = param_4[9];
  piStack_5dc = (int *)param_4[8];
  uStack_588 = param_4[10];
  piStack_598 = (int *)0x0;
  piStack_590 = piStack_5dc;
  if ((uStack_594 >> 6 & 1) != 0) {
    piStack_598 = (int *)param_4[6];
    ppiStack_5e0 = &piStack_598;
    pcStack_5e4 = (char *)0x10957370;
    (**(code **)(*piStack_598 + 4))();
  }
  piStack_5dc = (int *)0x10957375;
  FUN_11183d00();
  piStack_5dc = (int *)0x1095737c;
  cVar1 = FUN_11183de0();
  if (cVar1 == '\0') {
    ppiStack_5e0 = &piStack_548;
    piStack_548 = (int *)0x0;
    uStack_544 = 0;
    piStack_564 = (int *)CONCAT31(piStack_564._1_3_,((byte)uStack_594 & 0x8f) == 10);
    piStack_5dc = piStack_564;
    pcStack_5e4 = "TEAM_MEMBER_BUFFER_DATA_CLASSNAME";
    piStack_5e8 = piStack_590;
    ppiStack_5ec = (int **)0x109573cc;
    cVar1 = (**(code **)(*piStack_598 + 0x10))();
    piVar2 = (int *)0x0;
    if (((cVar1 != '\0') && (((byte)local_554 & 0x8f) == 6)) &&
       (piVar2 = local_550, ((uint)local_554 >> 6 & 1) != 0)) {
      piVar2 = (int *)*local_550;
    }
    ppiStack_5ec = &piStack_590;
    piStack_590 = (int *)0x0;
    uStack_58c = 0;
    puStack_5f0 = (uint *)0x10957418;
    FUN_11a98a70();
    puStack_5f0 = (uint *)0x1095741d;
    FUN_11183d00();
    puStack_5f0 = (uint *)0x10957424;
    cVar1 = FUN_11183de0();
    while (cVar1 == '\0') {
      puStack_5f0 = &uStack_544;
      uStack_5c4 = 0;
      uStack_5c0 = 0;
      FUN_11183d00();
      FUN_11183ce0();
      FUN_11a98de0(auStack_5c8,piVar2,0,0);
      FUN_104d1670("_strName",auStack_54c);
      if (param_2 != 0) {
        piStack_5e8 = local_558;
        puStack_5f0 = (uint *)0x0;
        ppiStack_5ec = (int **)0x3;
        (**(code **)(*unaff_EDI + 0x14))
                  (unaff_EBX,&DAT_11dcca44,&puStack_5f0,(unaff_SI & 0x8f) == 10);
        if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
          (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
        }
        if (param_2 != 0) {
          piStack_5e8 = local_550;
          puStack_5f0 = (uint *)0x0;
          ppiStack_5ec = (int **)0x3;
          (**(code **)(*unaff_EDI + 0x14))(unaff_EBX,"_nType",&puStack_5f0,(unaff_SI & 0x8f) == 10);
          if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
            (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
          }
          if (param_2 != 0) {
            piStack_5e8 = local_554;
            puStack_5f0 = (uint *)0x0;
            ppiStack_5ec = (int **)0x3;
            (**(code **)(*unaff_EDI + 0x14))
                      (unaff_EBX,"_nTime",&puStack_5f0,(unaff_SI & 0x8f) == 10);
            if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
              (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
            }
            if (param_2 != 0) {
              piStack_5e8 = local_554;
              puStack_5f0 = (uint *)0x0;
              ppiStack_5ec = (int **)0x3;
              (**(code **)(*unaff_EDI + 0x14))
                        (unaff_EBX,"_nTotalTime",&puStack_5f0,(unaff_SI & 0x8f) == 10);
              if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
                (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
              }
            }
          }
        }
      }
      FUN_104d1670("_tipString",auStack_4cc);
      FUN_104d1670("_strIcon",auStack_cc);
      if (param_2 != 0) {
        piStack_5e8 = piStack_4c;
        puStack_5f0 = (uint *)0x0;
        ppiStack_5ec = (int **)0x3;
        (**(code **)(*unaff_EDI + 0x14))
                  (unaff_EBX,"_nStackCount",&puStack_5f0,(unaff_SI & 0x8f) == 10);
        if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
          (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
        }
        if (param_2 != 0) {
          piStack_5e8 = piStack_48;
          puStack_5f0 = (uint *)0x0;
          ppiStack_5ec = (int **)0x3;
          (**(code **)(*unaff_EDI + 0x14))(unaff_EBX,"_nNetID",&puStack_5f0,(unaff_SI & 0x8f) == 10)
          ;
          if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
            (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
          }
          if (param_2 != 0) {
            piStack_5e8 = piStack_44;
            puStack_5f0 = (uint *)0x0;
            ppiStack_5ec = (int **)0x3;
            (**(code **)(*unaff_EDI + 0x14))
                      (unaff_EBX,"_nIconUpdateTimeFlag",&puStack_5f0,(unaff_SI & 0x8f) == 10);
            if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
              (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
            }
            if (param_2 != 0) {
              piStack_5e8 = piStack_40;
              puStack_5f0 = (uint *)0x0;
              ppiStack_5ec = (int **)0x3;
              (**(code **)(*unaff_EDI + 0x14))
                        (unaff_EBX,"_nTeamBuffActType",&puStack_5f0,(unaff_SI & 0x8f) == 10);
              if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
                (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
              }
              if (param_2 != 0) {
                piStack_5e8 = piStack_3c;
                puStack_5f0 = (uint *)0x0;
                ppiStack_5ec = (int **)0x3;
                (**(code **)(*unaff_EDI + 0x14))
                          (unaff_EBX,"_nbufTriggerCount",&puStack_5f0,(unaff_SI & 0x8f) == 10);
                if (((uint)ppiStack_5ec >> 6 & 1) != 0) {
                  (**(code **)(*puStack_5f0 + 8))(&puStack_5f0,piStack_5e8);
                }
              }
            }
          }
        }
      }
      (**(code **)(*piStack_5a8 + 0x3c))(uStack_5a0,&stack0xfffffa28);
      FUN_11183d00();
      FUN_11183df0();
      if (((uint)piStack_5dc >> 6 & 1) != 0) {
        (*(code *)(*ppiStack_5e0)[2])(&ppiStack_5e0,unaff_EDI);
      }
      FUN_11183d00();
      cVar1 = FUN_11183de0();
    }
    puStack_5f0 = (uint *)(uint)(((byte)piStack_5a8 & 0x8f) == 10);
    (**(code **)(*piStack_5ac + 0x14))(uStack_5a4,"BatchBuffList",&uStack_594);
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_5dc = param_1[2];
      ppiStack_5e0 = param_1;
      pcStack_5e4 = (char *)0x109578e9;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 1;
    if ((uStack_57c >> 6 & 1) != 0) {
      ppiStack_5e0 = &piStack_580;
      piStack_5dc = piStack_578;
      pcStack_5e4 = (char *)0x10957917;
      (**(code **)(*piStack_580 + 8))();
      piStack_580 = (int *)0x0;
    }
    uStack_57c = 0;
    if ((uStack_544 >> 6 & 1) != 0) {
      ppiStack_5e0 = &piStack_548;
      piStack_5dc = piStack_540;
      pcStack_5e4 = (char *)0x10957950;
      (**(code **)(*piStack_548 + 8))();
    }
  }
  if ((uStack_594 >> 6 & 1) != 0) {
    ppiStack_5e0 = &piStack_598;
    piStack_5dc = piStack_590;
    pcStack_5e4 = (char *)0x1095796d;
    (**(code **)(*piStack_598 + 8))();
    piStack_598 = (int *)0x0;
  }
  uStack_594 = 0;
  if ((local_55c >> 6 & 1) != 0) {
    ppiStack_5e0 = &local_560;
    piStack_5dc = local_558;
    pcStack_5e4 = (char *)0x1095799d;
    (**(code **)(*local_560 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10958830 @ 10958830  size=1987 ===== */
// calls: CEquipHiddenSkillCondOpenInfo::GetInfoManagerInstance, CPet::SetName, CCharmFoundCostInfo::GetInfoManagerInstance
// strings:
//   "PASSIVESKILL_VO_CLASSNAME"
//   "strCharmName"
//   "bIsHidden"
//   "nVisibleMoney"
//   "strName"
//   "ACTIVATE_VO_CLASSNAME"
//   "nType"
//   "activateInfoList"
//   "passiveSkillList"
//   "strItemIconPathName"
//   "nRakeType"
//   "nItemID"
//   "nItemNowBindCount"
//   "nItemNowUnbindCount"
//   "nItemNowCount"
//   "nItemNeedCount"

/* [RE-AUTO c0]
   strings:
     ""PASSIVESKILL_VO_CLASSNAME""
     ""strCharmName""
     ""bIsHidden""
     ""nVisibleMoney""
     ""strName""
     ""ACTIVATE_VO_CLASSNAME""
     ""nType""
     ""activateInfoList""
     ""passiveSkillList""
     ""strItemIconPathName"" */

void FUN_10958830(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  char *pcVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  byte unaff_DI;
  int *piStack_164;
  int iVar12;
  char *pcStack_15c;
  undefined8 *puStack_158;
  int iStack_154;
  int *piStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  int *piStack_144;
  int iStack_138;
  undefined4 *apuStack_134 [3];
  undefined4 *local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined1 auStack_118 [8];
  int *piStack_110;
  int *piStack_10c;
  int local_108;
  undefined4 uStack_104;
  int *piStack_f0;
  int *piStack_ec;
  undefined4 *local_e8;
  undefined4 uStack_e4;
  undefined4 auStack_e0 [7];
  int aiStack_c4 [5];
  undefined4 uStack_b0;
  int *piStack_ac;
  int iStack_a8;
  uint uStack_a4;
  undefined4 *puStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  int iStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  int aiStack_68 [3];
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&iStack_138;
  local_e8 = param_1;
  local_128 = param_4;
  local_108 = param_2;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (undefined4 *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_144 = (int *)param_1[2];
      puStack_148 = param_1;
      puStack_14c = (undefined4 *)0x109588a2;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (2 < param_5) {
      piStack_144 = (int *)0x109588d8;
      iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if ((iVar3 != 0) && (iStack_120 = *(int *)(iVar3 + 0x2d1c), iStack_120 != 0)) {
        if (((local_128[1] & 0x8f) == 3) || ((local_128[1] & 0x8f) == 4)) {
          uStack_124 = local_128[2];
        }
        else {
          uStack_124 = 0xdeadbeaf;
        }
        if (((local_128[7] & 0x8f) == 3) ||
           (puVar9 = (undefined4 *)0xdeadbeaf, (local_128[7] & 0x8f) == 4)) {
          puVar9 = (undefined4 *)local_128[8];
        }
        piStack_144 = local_128 + 0xc;
        puStack_148 = (undefined4 *)0x10958942;
        FUN_104f4330();
        puStack_14c = local_128;
        piStack_150 = (int *)0x10958950;
        puStack_148 = puVar9;
        iVar3 = FUN_113f9bb0();
        iStack_138 = iVar3;
        if (iVar3 != 0) {
          piStack_150 = (int *)0x10958965;
          cVar2 = FUN_116698a0();
          if (cVar2 != '\0') {
            piStack_150 = (int *)0x10958974;
            cVar2 = FUN_1166e120();
            if (cVar2 != '\0') {
              piStack_150 = aiStack_c4;
              aiStack_c4[0] = 0;
              aiStack_c4[1] = 0;
              iStack_154 = 0x109589a1;
              FUN_11a98a70();
              puStack_158 = &uStack_98;
              uStack_98 = 0;
              iStack_138 = CONCAT31(iStack_138._1_3_,((byte)piStack_10c & 0x8f) == 10);
              uStack_124 = 0;
              iStack_154 = iStack_138;
              pcStack_15c = "PASSIVESKILL_VO_CLASSNAME";
              iVar12 = local_108;
              cVar2 = (**(code **)(*piStack_110 + 0x10))(local_108);
              if (((cVar2 != '\0') && (((byte)uStack_a4 & 0x8f) == 6)) &&
                 (apuStack_134[0] = puStack_a0, (uStack_a4 >> 6 & 1) != 0)) {
                apuStack_134[0] = (undefined4 *)*puStack_a0;
              }
              FUN_11669250();
              piStack_164 = aiStack_68;
              iVar4 = FUN_100e5b40();
              FUN_104d1670("strCharmName",*(undefined4 *)(iVar4 + 0x14));
              if ((puStack_58 != auStack_6c) && (puStack_58 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_58);
              }
              iVar4 = iVar3 + 0x1bc;
              FUN_10867910(iVar4);
              puStack_14c = (undefined4 *)0x0;
              apuStack_134[0] = (undefined4 *)(((int)local_e8 - (int)piStack_ec) / 0x1c);
              piVar10 = piStack_ec;
              if (apuStack_134[0] != (undefined4 *)0x0) {
                do {
                  local_108 = 0;
                  uStack_104 = 0;
                  piStack_150 = piVar10;
                  FUN_11a98de0(&local_108,unaff_ESI,0,0);
                  iVar3 = *piVar10;
                  uStack_a4 = piVar10[1];
                  puStack_a0 = (undefined4 *)piVar10[2];
                  iStack_9c = piVar10[3];
                  iStack_90 = piVar10[6];
                  uStack_98 = *(undefined8 *)(piVar10 + 4);
                  iStack_a8 = iVar3;
                  FUN_104d15e0("bIsHidden",iVar3 == 1);
                  if (iVar3 == 1) {
                    iVar3 = piStack_164[0x7b];
                    uVar5 = (**(code **)(*piStack_164 + 0x2c))();
                    uVar5 = (**(code **)(*piStack_164 + 0x18))(uVar5);
                    iVar6 = CEquipHiddenSkillCondOpenInfo__GetInfoManagerInstance(pcStack_15c,uVar5)
                    ;
                    FUN_104d1550("nVisibleMoney",iVar6 - iVar3);
                  }
                  iVar3 = FUN_1050ebc0(puStack_a0);
                  if (iVar3 == 0) {
                    (**(code **)(*piStack_f0 + 0x3c))(local_e8,auStack_118);
                  }
                  else {
                    iStack_154 = 0;
                    CPet__SetName(&DAT_11d9d32b);
                    iVar3 = FUN_108199e0(auStack_6c);
                    uVar1 = uStack_a4;
                    uVar5 = *(undefined4 *)(iVar3 + 0x14);
                    uVar7 = FUN_1024e8a0(uStack_a4,2);
                    uVar5 = FUN_1024e9b0(uVar5,0x2a,extraout_ECX,uVar7);
                    FUN_1024e720(&pcStack_15c,((int)uVar1 < 0) + 0x13a5,uVar5);
                    if ((puStack_5c != auStack_70) && (puStack_5c != (undefined1 *)0x0)) {
                      FUN_10c3d5d0(puStack_5c);
                    }
                    pcVar8 = "";
                    if (pcStack_15c != (char *)0x0) {
                      pcVar8 = pcStack_15c;
                    }
                    FUN_104d1670("strName",pcVar8);
                    uStack_88 = 0;
                    uStack_84 = 0;
                    FUN_11a98a70(&uStack_88);
                    uStack_e4 = 0;
                    auStack_e0[0] = 0;
                    local_128 = (undefined4 *)CONCAT31(local_128._1_3_,(unaff_DI & 0x8f) == 10);
                    iStack_154 = 0;
                    cVar2 = (**(code **)(*piStack_144 + 0x10))
                                      (unaff_ESI,"ACTIVATE_VO_CLASSNAME",&uStack_e4,local_128);
                    if ((cVar2 != '\0') && (((byte)piStack_f0 & 0x8f) == 6)) {
                      if (((uint)piStack_f0 >> 6 & 1) == 0) {
                        piStack_164 = piStack_ec;
                      }
                      else {
                        piStack_164 = (int *)*piStack_ec;
                      }
                    }
                    iVar3 = FUN_10856700(uStack_b0);
                    if (((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x2c), iVar3 != 0)) &&
                       (puVar11 = *(undefined8 **)(iVar3 + 0x10), puStack_158 = puVar11,
                       puVar11 != *(undefined8 **)(iVar3 + 0x14))) {
                      do {
                        uStack_84 = 0;
                        uStack_80 = 0;
                        puStack_158 = puVar11;
                        FUN_11a98de0(&uStack_84,piStack_164,0,0);
                        piVar10 = *(int **)puVar11;
                        uVar5 = (**(code **)(*piVar10 + 0x10))();
                        FUN_104d1550("nType",uVar5);
                        uVar5 = (**(code **)(*piVar10 + 0x10))(piVar10);
                        FUN_10958500((int)&uStack_98 + 4,uVar5);
                        (**(code **)(*piStack_ac + 0x3c))(uStack_a4,(int)&uStack_98 + 4);
                        FUN_104d7c10();
                        puVar11 = (undefined8 *)((int)puStack_158 + 4);
                        puStack_158 = puVar11;
                      } while (puVar11 != *(undefined8 **)(iVar3 + 0x14));
                    }
                    FUN_104d12b0("activateInfoList",&iStack_9c);
                    (**(code **)(*piStack_10c + 0x3c))(uStack_104,apuStack_134);
                    FUN_104d7c10();
                    FUN_104d7c10();
                    FUN_100e5670();
                  }
                  FUN_104d7c10();
                  puStack_14c = (undefined4 *)((int)puStack_14c + 1);
                  piStack_150 = piStack_150 + 7;
                  iVar3 = iStack_154;
                  piVar10 = piStack_150;
                } while (puStack_14c < apuStack_134[0]);
              }
              FUN_104d12b0("passiveSkillList",auStack_e0);
              iVar3 = CCharmFoundCostInfo__GetInfoManagerInstance(iVar3);
              if (iVar3 != 0) {
                iVar3 = *(int *)(iVar3 + 0x28);
                piStack_150 = (int *)0x0;
                iStack_154 = iVar3;
                apuStack_134[0] = (undefined4 *)FUN_10254130(iVar3);
                if (apuStack_134[0] != (undefined4 *)0x0) {
                  uVar5 = 0;
                  FUN_113f9300(10,iVar3,0);
                  FUN_113f9300(2,iVar12,0);
                  FUN_113f9300(0,uVar5,0);
                  puVar11 = puStack_158;
                  FUN_104d1670("strItemIconPathName",*(undefined4 *)((int)puStack_158 + 0xb4));
                  FUN_104d1550("nRakeType",*(undefined4 *)((int)puVar11 + 0x4c));
                  iVar3 = iStack_154;
                }
                FUN_104d1550("nItemID",iVar3);
                uVar5 = FUN_113fa680(iVar3,1,1);
                uVar7 = FUN_113fa680(iVar12,0,1);
                FUN_104d1550("nItemNowBindCount",uVar5);
                FUN_104d1550("nItemNowUnbindCount",uVar7);
                FUN_104d1550("nItemNowCount",iVar4);
                FUN_104d1550("nItemNeedCount",puStack_158);
              }
              if (((uint)piStack_110[1] >> 6 & 1) != 0) {
                (**(code **)(*(int *)*piStack_110 + 8))(piStack_110,piStack_110[2]);
                *piStack_110 = 0;
              }
              piStack_110[1] = 2;
              *(undefined1 *)(piStack_110 + 2) = 1;
              if (piStack_ec != (int *)0x0) {
                FUN_10c3d5d0(piStack_ec);
              }
              FUN_104d7c10();
              FUN_104d7c10();
            }
          }
        }
        piStack_150 = (int *)0x10958fdf;
        FUN_104d7c10();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1096b9a0 @ 1096b9a0  size=1577 ===== */
// strings:
//   "QTE_DATAVO_CLASSNAME"
//   "ACTION_DATAVO_CLASSNAME"
//   "action"
//   "status"
//   "delay"
//   "started"
//   "description"
//   "qteData"
//   "skillName"

/* [RE-AUTO c0]
   strings:
     ""QTE_DATAVO_CLASSNAME""
     ""ACTION_DATAVO_CLASSNAME""
     ""action""
     ""status""
     ""delay""
     ""started""
     ""description""
     ""qteData""
     ""skillName"" */

void FUN_1096b9a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  int *local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int *local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  int *piStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  uint uStack_7c;
  uint uStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint uStack_60;
  int *piStack_5c;
  uint uStack_58;
  undefined8 uStack_54;
  undefined2 auStack_4c [2];
  undefined2 auStack_48 [8];
  undefined1 auStack_38 [12];
  undefined2 *puStack_2c;
  undefined2 *puStack_28;
  undefined2 *puStack_24;
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_e4;
  if (param_5 == 1) {
    local_d8 = (int *)0x0;
    local_cc = param_4[3];
    local_d4 = param_4[1];
    local_d0 = param_4[2];
    local_c8 = param_4[4];
    if ((local_d4 >> 6 & 1) != 0) {
      local_d8 = (int *)*param_4;
      (**(code **)(*local_d8 + 4))(&local_d8,local_d0);
    }
    local_c0 = (int *)0x0;
    local_bc = 0;
    local_e4 = (int *)CONCAT31(local_e4._1_3_,((byte)local_d4 & 0x8f) == 10);
    local_dc = 0;
    (**(code **)(*local_d8 + 0x10))(local_d0,"QTE_DATAVO_CLASSNAME",&local_c0,local_e4);
    (**(code **)(*unaff_EBX + 0x10))
              (uStack_e0,"ACTION_DATAVO_CLASSNAME",&local_d0,((byte)local_e4 & 0x8f) == 10);
    uStack_a0 = 0;
    uStack_9c = 0;
    FUN_11a98a70(&uStack_a0);
    piVar2 = (int *)FUN_10ea7ad0();
    piStack_b0 = piVar2;
    iStack_88 = FUN_10ea7ae0();
    if (iStack_88 != 0) {
      if ((piVar2 != (int *)0x0) && (piVar4 = (int *)*piVar2, local_e4 = piVar4, piVar4 != piVar2))
      {
        do {
          uVar6 = 0;
          piVar5 = (int *)0x0;
          piStack_a8 = (int *)0x0;
          uStack_a4 = 0;
          local_e4 = piVar4;
          FUN_11a98de0(&piStack_a8,local_dc,0,0);
          uStack_78 = 0;
          piStack_74 = (int *)0x0;
          FUN_11a98a70(&uStack_78);
          piStack_98 = piVar4 + 0x17;
          piVar1 = piVar4;
          for (piVar2 = (int *)piVar4[0x17]; piVar2 != piVar4 + 0x17; piVar2 = (int *)*piVar2) {
            puStack_64 = (uint *)0x0;
            uStack_60 = 0;
            FUN_11a98de0(&puStack_64,uVar6,0,0);
            puVar3 = &DAT_11d9d32b;
            if ((undefined1 *)piVar2[3] != (undefined1 *)0x0) {
              puVar3 = (undefined1 *)piVar2[3];
            }
            FUN_104d1670("action",puVar3);
            FUN_104d1550("status",piVar2[4]);
            if (param_2 != 0) {
              uStack_54 = (double)(float)piVar2[2];
              piStack_5c = (int *)0x0;
              uStack_58 = 5;
              (**(code **)(*piStack_74 + 0x14))
                        (uStack_6c,"delay",&piStack_5c,((byte)uStack_70 & 0x8f) == 10);
              if ((uStack_58 >> 6 & 1) != 0) {
                (**(code **)(*piStack_5c + 8))(&piStack_5c,(undefined4)uStack_54);
              }
            }
            FUN_104d15e0(&DAT_11dddcfc,(char)piVar2[6] == '\0');
            (**(code **)(*piStack_8c + 0x3c))(uStack_84,&piStack_74);
            if ((uStack_60 >> 6 & 1) != 0) {
              (**(code **)(*puStack_64 + 8))(&puStack_64,piStack_5c);
            }
            piVar1 = piVar5;
          }
          puStack_2c = auStack_4c;
          auStack_4c[0] = 0;
          puStack_28 = puStack_2c;
          FUN_100e5b60(auStack_4c);
          FUN_104d1700(&DAT_11dddd44,puStack_2c);
          if ((puStack_2c != (undefined2 *)((int)&uStack_54 + 4)) &&
             (puStack_2c != (undefined2 *)0x0)) {
            FUN_10c3d5d0(puStack_2c);
          }
          (**(code **)(*local_c0 + 0x14))
                    (uStack_b8,&DAT_11dddd3c,&piStack_80,((byte)local_bc & 0x8f) == 10);
          FUN_104d1550(&DAT_11dca14c,piVar1[5]);
          FUN_104d1550("status",piVar1[2]);
          FUN_104d15e0("started",(char)piVar1[0x1d]);
          uStack_78 = uStack_78 & 0xffffff00;
          puStack_68 = &uStack_78;
          puStack_64 = puStack_68;
          FUN_100e5aa0(puStack_68);
          FUN_104d1670("description",puStack_68);
          if ((puStack_68 != &uStack_7c) && (puStack_68 != (uint *)0x0)) {
            FUN_10c3d5d0(puStack_68);
          }
          (**(code **)(*piStack_ac + 0x3c))(uStack_a4,&local_d4);
          if (((uint)puStack_64 >> 6 & 1) != 0) {
            (**(code **)(*puStack_68 + 8))(&puStack_68,uStack_60);
            puStack_68 = (uint *)0x0;
          }
          puStack_64 = (uint *)0x0;
          if ((uStack_a4 >> 6 & 1) != 0) {
            (**(code **)(*piStack_a8 + 8))(&piStack_a8,uStack_a0);
          }
          piVar4 = (int *)*piVar1;
          local_e4 = piVar4;
        } while (piVar4 != piStack_8c);
      }
      (**(code **)(*local_d8 + 0x14))(local_d0,"qteData",&piStack_80,((byte)local_d4 & 0x8f) == 10);
      puStack_28 = auStack_48;
      auStack_48[0] = 0;
      puStack_24 = puStack_28;
      FUN_100e5b60(auStack_48);
      FUN_104d1700("skillName",puStack_28);
      if ((puStack_14 != auStack_38) && (puStack_14 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_14);
      }
    }
    if ((uStack_7c >> 6 & 1) != 0) {
      (**(code **)(*piStack_80 + 8))(&piStack_80,uStack_78);
      piStack_80 = (int *)0x0;
    }
    uStack_7c = 0;
    if ((local_bc >> 6 & 1) != 0) {
      (**(code **)(*local_c0 + 8))(&local_c0,uStack_b8);
      local_c0 = (int *)0x0;
    }
    local_bc = 0;
    if ((local_d4 >> 6 & 1) != 0) {
      (**(code **)(*local_d8 + 8))(&local_d8,local_d0);
    }
  }
  FUN_11a89daa();
  return;
}



