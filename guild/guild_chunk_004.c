/* ===== FUN_108e1f60 @ 108e1f60  size=250 ===== */
// strings:
//   "InitModel"
//   "QueryFriendInfo"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""QueryFriendInfo"" */

void __fastcall FUN_108e1f60(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char acStack_44 [4];
  char *pcStack_40;
  char *pcStack_3c;
  char **ppcStack_38;
  char acStack_34 [4];
  char *pcStack_30;
  char *pcStack_2c;
  undefined4 *local_24;
  char *pcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pcStack_30 = "InitModel";
  acStack_34[0] = -0x6c;
  acStack_34[1] = '\x1f';
  acStack_34[2] = -0x72;
  acStack_34[3] = '\x10';
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pcStack_3c = (char *)0x108e1fa1;
  FUN_108e89c0();
  if ((pcStack_20 != acStack_34) && (pcStack_20 != (char *)0x0)) {
    pcStack_3c = pcStack_20;
    pcStack_40 = (char *)0x108e1fb7;
    FUN_10c3d5d0();
  }
  local_24 = (undefined4 *)acStack_34;
  pcStack_3c = "";
  pcStack_40 = "QueryFriendInfo";
  acStack_44[0] = -0x29;
  acStack_44[1] = '\x1f';
  acStack_44[2] = -0x72;
  acStack_44[3] = '\x10';
  pcStack_20 = (char *)local_24;
  FUN_100b62c0();
  FUN_108e88f0(&pcStack_3c);
  if ((pcStack_30 != acStack_44) && (pcStack_30 != (char *)0x0)) {
    FUN_10c3d5d0(pcStack_30);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_108ee190();
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_108ee1e0(param_1,extraout_ECX_00);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e25d0 @ 108e25d0  size=1492 ===== */
// calls: CPet::SetName
// strings:
//   "FRIEND_FARM_CLASS_NAME"
//   "netId"
//   "isOnline"
//   "farmPoint"
//   "intimate"
//   "collectionNum"
//   "FirendFarmList"
//   "nRemainGatherCnt"

/* [RE-AUTO c0]
   strings:
     ""FRIEND_FARM_CLASS_NAME""
     ""netId""
     ""isOnline""
     ""farmPoint""
     ""intimate""
     ""collectionNum""
     ""FirendFarmList""
     ""nRemainGatherCnt"" */

void FUN_108e25d0(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 unaff_EBX;
  int *piVar5;
  undefined4 unaff_EDI;
  int iStack_1f0;
  undefined1 *puStack_1ec;
  int iStack_1e8;
  int *piStack_1e4;
  code *pcStack_1e0;
  undefined4 uStack_1dc;
  uint *puStack_1d8;
  int *piStack_1d4;
  char *pcStack_1d0;
  undefined1 auStack_1cc [4];
  undefined1 *puStack_1c8;
  undefined4 *puStack_1c4;
  int **ppiStack_1c0;
  int *piStack_1bc;
  undefined1 auStack_1ac [3];
  int *piStack_1a9;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  int **ppiStack_18c;
  int iStack_188;
  undefined1 auStack_184 [8];
  int *piStack_17c;
  byte bStack_178;
  int *piStack_174;
  int *piStack_170;
  uint uStack_16c;
  int *piStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int *piStack_158;
  uint uStack_154;
  int *piStack_150;
  int iStack_148;
  int iStack_144;
  int **local_13c;
  int *piStack_138;
  uint uStack_134;
  int *piStack_130;
  undefined1 auStack_12c [12];
  int iStack_120;
  undefined1 auStack_11c [4];
  undefined1 *puStack_118;
  undefined1 auStack_10c [4];
  int aiStack_108 [3];
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  int *piStack_f4;
  int aiStack_f0 [5];
  int *piStack_dc;
  undefined4 uStack_d4;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_1ac;
  local_13c = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_1bc = param_1[2];
      ppiStack_1c0 = param_1;
      puStack_1c4 = (undefined4 *)0x108e263b;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar1 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_1bc = (int *)0x108e2665;
    piStack_1a0 = (int *)(**(code **)(**(int **)(*(int *)(iVar1 + 0xd0) + 0x90) + 0xb4))();
    if ((piStack_1a0 != (int *)0x0) && (iStack_19c = piStack_1a0[0xb57], iStack_19c != 0)) {
      piStack_1bc = param_4;
      ppiStack_1c0 = (int **)0x108e268d;
      FUN_104f4330();
      puStack_fc = auStack_10c;
      auStack_10c[0] = 0;
      if (((byte)param_4[7] & 0x8f) == 6) {
        puStack_1c4 = (undefined4 *)param_4[8];
        if (((uint)param_4[7] >> 6 & 1) != 0) {
          puStack_1c4 = (undefined4 *)*puStack_1c4;
        }
      }
      else {
        puStack_1c4 = (undefined4 *)&DAT_11d9d32b;
      }
      ppiStack_1c0 = &piStack_1a9;
      puStack_1c8 = (undefined1 *)0x108e26de;
      puStack_f8 = puStack_fc;
      FUN_100b5f70();
      puStack_1c8 = (undefined1 *)0x108e26f1;
      FUN_108ef130();
      if ((puStack_118 != auStack_12c) && (puStack_118 != (undefined1 *)0x0)) {
        puStack_1c8 = puStack_118;
        auStack_1cc = (undefined1  [4])0x108e270d;
        FUN_10c3d5d0();
      }
      auStack_1cc = (undefined1  [4])&uStack_164;
      uStack_164 = 0;
      uStack_160 = 0;
      puStack_1c8 = (undefined1 *)CONCAT31((int3)((uint)unaff_EBX >> 8),(bStack_178 & 0x8f) == 10);
      uStack_1a4 = 0;
      pcStack_1d0 = "FRIEND_FARM_CLASS_NAME";
      piStack_1d4 = piStack_174;
      puStack_1d8 = (uint *)0x108e2755;
      (**(code **)(*piStack_17c + 0x10))();
      puStack_1d8 = &uStack_154;
      uStack_154 = 0;
      piStack_150 = (int *)0x0;
      uStack_1dc = 0x108e279f;
      FUN_11a98a70();
      uStack_1dc = 0x108e27a8;
      uStack_1dc = (**(code **)(*piStack_1bc + 0x10))();
      pcStack_1e0 = (code *)0x108e27b2;
      FUN_104e8ee0();
      pcStack_1e0 = FUN_108e1e20;
      piStack_1e4 = (int *)0x108e27c4;
      FUN_10822ec0();
      pcStack_1e0 = (code *)0x108e27cc;
      iVar1 = FUN_117c7e70();
      piStack_1e4 = (int *)&DAT_11d9d32b;
      if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
        piStack_1e4 = *(int **)(iVar1 + 0x30);
      }
      pcStack_1e0 = (code *)(auStack_1cc + 3);
      iStack_1e8 = 0x108e27eb;
      FUN_100b5f70();
      iStack_1e8 = 1;
      puStack_1ec = auStack_11c;
      iStack_1f0 = 0;
      FUN_115ba930(0,0,0,1);
      uStack_d4 = FUN_108e2400();
      piStack_dc = *(int **)(iStack_1e8 + 0x2d78);
      piStack_1e4 = &iStack_120;
      FUN_108ecb30(uStack_1dc,&piStack_1e4);
      pcVar4 = pcStack_1e0;
      piVar5 = piStack_1e4;
      if ((code *)piStack_1e4 != pcStack_1e0) {
        do {
          iVar1 = *piVar5;
          if ((iVar1 != 0) &&
             (((iStack_144 == iStack_148 ||
               (iVar2 = FUN_10254970(iStack_144,0), pcVar4 = pcStack_1e0, iVar2 != -1)) &&
              (*(int *)(iVar1 + 0x44) == *(int *)(iStack_1f0 + 0x2d78))))) {
            puStack_1d8 = (uint *)0x0;
            piStack_1d4 = (int *)0x0;
            FUN_11a98de0(&puStack_1d8,iStack_1e8,0,0);
            FUN_104d1550("netId",*(undefined4 *)(iVar1 + 0x28));
            FUN_104d14d0(&DAT_11dccb84);
            CPet__SetName(*(undefined4 *)(iVar1 + 0x24));
            piStack_174 = (int *)auStack_184;
            auStack_184[0] = 0;
            piStack_170 = piStack_174;
            FUN_100e5aa0(piStack_174);
            FUN_104d1670(&DAT_11dbac80,piStack_174);
            if ((piStack_174 != &iStack_188) && (piStack_174 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_174);
            }
            FUN_104d1550(&DAT_11dccf88,*(undefined4 *)(iVar1 + 0x2c));
            if (*(int *)(iVar1 + 0x34) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_1025b060();
            }
            FUN_104d1550(&DAT_11dccf8c,uVar3);
            FUN_104d15e0("isOnline",*(undefined1 *)(iVar1 + 0x38));
            FUN_104d1550("farmPoint",*(undefined4 *)(iVar1 + 0x4c));
            FUN_104d1440("intimate",*(undefined4 *)(iVar1 + 0x48));
            FUN_104d1550("collectionNum",*(undefined4 *)(iVar1 + 0x50));
            (**(code **)(*piStack_1a0 + 0x3c))(uStack_198,&iStack_1f0);
            FUN_100e5670();
            FUN_104d7c10();
            pcVar4 = pcStack_1e0;
          }
          piVar5 = piVar5 + 1;
          param_1 = ppiStack_18c;
        } while ((code *)piVar5 != pcVar4);
      }
      (*(code *)(*ppiStack_1c0)[5])
                (unaff_EDI,"FirendFarmList",&iStack_188,((byte)piStack_1bc & 0x8f) == 10);
      iVar1 = FUN_1025b060();
      iVar1 = 10 - iVar1;
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      FUN_104d1550("nRemainGatherCnt",iVar1);
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        (**(code **)(**param_1 + 8))(param_1,param_1[2]);
        *param_1 = (int *)0x0;
      }
      param_1[1] = (int *)0x2;
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_115baa00();
      if ((piStack_dc != aiStack_f0) && (piStack_dc != (int *)0x0)) {
        piStack_1bc = piStack_dc;
        ppiStack_1c0 = (int **)0x108e2ad3;
        FUN_10c3d5d0();
      }
      if (piStack_194 != (int *)0x0) {
        piStack_1bc = piStack_194;
        ppiStack_1c0 = (int **)0x108e2ae4;
        FUN_10c3d5d0();
      }
      if ((uStack_134 >> 6 & 1) != 0) {
        ppiStack_1c0 = &piStack_138;
        piStack_1bc = piStack_130;
        puStack_1c4 = (undefined4 *)0x108e2b10;
        (**(code **)(*piStack_138 + 8))();
        piStack_138 = (int *)0x0;
      }
      uStack_134 = 0;
      if ((uStack_154 >> 6 & 1) != 0) {
        ppiStack_1c0 = &piStack_158;
        piStack_1bc = piStack_150;
        puStack_1c4 = (undefined4 *)0x108e2b43;
        (**(code **)(*piStack_158 + 8))();
        piStack_158 = (int *)0x0;
      }
      uStack_154 = 0;
      if ((piStack_f4 != aiStack_108) && (piStack_f4 != (int *)0x0)) {
        piStack_1bc = piStack_f4;
        ppiStack_1c0 = (int **)0x108e2b6f;
        FUN_10c3d5d0();
      }
      if ((uStack_16c >> 6 & 1) != 0) {
        ppiStack_1c0 = &piStack_170;
        piStack_1bc = piStack_168;
        puStack_1c4 = (undefined4 *)0x108e2b8f;
        (**(code **)(*piStack_170 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e3340 @ 108e3340  size=936 ===== */
// calls: CPet::SetName
// strings:
//   "farmPoint"
//   "farmExp"
//   "bFriendGatherBonus"
//   "bSkipCutScene"
//   "g_ShowFarmPet"
//   "bFarmPetVisible"
//   "ownerID"
//   "friendName"
//   "friendFarmPoint"
//   "friendRemainGatherCnt"

/* [RE-AUTO c0]
   strings:
     ""farmPoint""
     ""farmExp""
     ""bFriendGatherBonus""
     ""bSkipCutScene""
     ""g_ShowFarmPet""
     ""bFarmPetVisible""
     ""ownerID""
     ""friendName""
     ""friendFarmPoint""
     ""friendRemainGatherCnt"" */

void FUN_108e3340(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  longlong lVar7;
  int local_64;
  undefined4 uStack_60;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 auStack_34 [8];
  undefined1 **ppuStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_64;
  local_64 = param_4;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     ((param_4 == 0 || (param_5 == 0)))) goto LAB_108e36d6;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  iVar5 = DAT_1202e818;
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(iVar5 + 0xd0) + 0x90) + 0xb4))();
  if (((piVar2 == (int *)0x0) ||
      (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))(), cVar1 == '\0')) ||
     (*(int *)(DAT_1202e818 + 0xd0) == 0)) goto LAB_108e36d6;
  uStack_60 = (**(code **)(*(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0x140) + 4))();
  FUN_104f4330(local_64);
  FUN_104d1550("farmPoint",*(undefined4 *)(local_64 + 0x14));
  uVar3 = FUN_1025b060();
  FUN_104d1550("farmExp",uVar3);
  FUN_104d15e0("bFriendGatherBonus",*(undefined1 *)(local_64 + 0xe8));
  FUN_104d15e0("bSkipCutScene",*(undefined1 *)(local_64 + 0xe9));
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_ShowFarmPet");
  if ((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 8))(), iVar5 == 0)) {
    bVar6 = false;
  }
  else {
    iVar5 = (**(code **)(*piVar4 + 8))();
    bVar6 = iVar5 != 0;
  }
  FUN_104d15e0("bFarmPetVisible",bVar6);
  FUN_104d14d0("ownerID");
  lVar7 = (**(code **)(*piVar2 + 0xc0))();
  if (lVar7 == CONCAT44(DAT_123bbacc,DAT_123bbac8)) {
LAB_108e36a7:
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    piVar2 = (int *)piVar2[0xb57];
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_1025b060();
      FUN_104d1550("farmPoint",uVar3);
      iVar5 = (**(code **)(*piVar2 + 0x74))(DAT_123bbac8,DAT_123bbacc);
      if (iVar5 == 0) {
        if (DAT_123bbac8 == 0 && DAT_123bbacc == 0) {
          FUN_117c7e70(auStack_34);
          iVar5 = FUN_100e5b40();
          FUN_100b5f70(*(undefined4 *)(iVar5 + 0x14),&stack0xffffff93);
          if ((ppuStack_2c != &puStack_40) && (ppuStack_2c != (undefined1 **)0x0)) {
            FUN_10c3d5d0(ppuStack_2c);
          }
          uVar3 = FUN_108e2400();
          FUN_104d1550("friendFarmPoint",uVar3);
          FUN_104d1670("friendName",uStack_44);
          if ((puStack_38 != auStack_4c) && (puStack_38 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_38);
          }
        }
      }
      else {
        CPet__SetName(*(undefined4 *)(iVar5 + 0x24));
        puStack_40 = auStack_50;
        auStack_50[0] = 0;
        puStack_3c = puStack_40;
        FUN_100e5aa0(puStack_40);
        FUN_104d1670("friendName",puStack_40);
        if ((puStack_40 != auStack_54) && (puStack_40 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_40);
        }
        FUN_104d1550("friendFarmPoint",*(undefined4 *)(iVar5 + 0x4c));
        FUN_100e5670();
      }
      FUN_104d1440("friendRemainGatherCnt",*(undefined4 *)(unaff_EDI + 0xe4));
      goto LAB_108e36a7;
    }
  }
  FUN_104d7c10();
LAB_108e36d6:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108f2f20 @ 108f2f20  size=134 ===== */
// calls: CLeagueInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CLeagueInfo"

/* [RE-AUTO c0]
   calls: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo"" */

undefined4 FUN_108f2f20(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbdd78;
  puVar1 = (undefined4 *)CLeagueInfo__GetManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CLeagueInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bde54 & 1) == 0) {
        DAT_123bde54 = DAT_123bde54 | 1;
        FUN_104f04b0();
        FUN_11a8911f(&LAB_11c6ec40);
      }
      puVar1 = &DAT_123bde1c;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_108f2fb0 @ 108f2fb0  size=109 ===== */
// calls: CLeagueInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CLeagueInfo"

/* [RE-AUTO c0]
   calls: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo"" */

void FUN_108f2fb0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbdd78;
  puVar1 = (undefined4 *)CLeagueInfo__GetManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CLeagueInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123bde54 & 1) == 0) {
        DAT_123bde54 = DAT_123bde54 | 1;
        FUN_104f04b0();
        FUN_11a8911f(&LAB_11c6ec40);
      }
      piVar2 = &DAT_123bde1c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== CLeagueRoundSchedule::GetManagers @ 108f3050  size=115 ===== */
// strings:
//   "CLeagueRoundSchedule::GetManagers"
//   "StcMbrNameSvr<class CInfoManager>::GetSingletonName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRoundSchedule::GetManagers
   strings:
     ""CLeagueRoundSchedule::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLeagueRoundSchedule__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfc68 & 1) == 0) {
    DAT_123bfc68 = DAT_123bfc68 | 1;
    _DAT_123bfc60 = &DAT_123bfc50;
    DAT_123bfc64 = &DAT_123bfc50;
    DAT_123bfc50 = 0;
    FUN_100d83d0("CLeagueRoundSchedule::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c767c0);
  }
  return DAT_123bfc4c;
}



/* ===== FUN_108f30f0 @ 108f30f0  size=134 ===== */
// calls: CLeagueRoundSchedule::GetManagers, CInfoManager::FindByName
// strings:
//   "CLeagueRoundSchedule"

/* [RE-AUTO c0]
   calls: CLeagueRoundSchedule::GetManagers
   strings:
     ""CLeagueRoundSchedule"" */

undefined4 FUN_108f30f0(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd7740;
  puVar1 = (undefined4 *)CLeagueRoundSchedule__GetManagers();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CLeagueRoundSchedule",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bfb80 & 1) == 0) {
        DAT_123bfb80 = DAT_123bfb80 | 1;
        FUN_108fab70();
        FUN_11a8911f(&LAB_11c767f0);
      }
      puVar1 = &DAT_123bfb84;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_108f3180 @ 108f3180  size=109 ===== */
// calls: CLeagueRoundSchedule::GetManagers, CInfoManager::FindByName
// strings:
//   "CLeagueRoundSchedule"

/* [RE-AUTO c0]
   calls: CLeagueRoundSchedule::GetManagers
   strings:
     ""CLeagueRoundSchedule"" */

void FUN_108f3180(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd7740;
  puVar1 = (undefined4 *)CLeagueRoundSchedule__GetManagers();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CLeagueRoundSchedule",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123bfb80 & 1) == 0) {
        DAT_123bfb80 = DAT_123bfb80 | 1;
        FUN_108fab70();
        FUN_11a8911f(&LAB_11c767f0);
      }
      piVar2 = &DAT_123bfb84;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_108f32b0 @ 108f32b0  size=1461 ===== */
// strings:
//   "GetEntrustListData"
//   "GetLevelUnlockInfo"
//   "GetGroupUnlockInfo"
//   "UnlockInstance"
//   "UnlockSubGroup"
//   "UpdateGuildMemberData"
//   "GetLevelInstanceGoData"
//   "GetHunterBoxData"
//   "GetAvalidActionPoint"
//   "GetLocalPlayerIsCoach"
//   "SelHuntPacket"
//   "EntrustReady"
//   "RequestEntrustList"
//   "ReqOpenEntrustGoView"
//   "ReqOpenWeaponTrialGoView"
//   "ReqLevelTrackData"
//   "ReqOpenEntrustInfoByTrack"
//   "FetechGuildInstanceMemberData"
//   "RequestLeagueList"
//   "IsShowCountDown"

/* [RE-AUTO c0]
   strings:
     ""GetEntrustListData""
     ""GetLevelUnlockInfo""
     ""GetGroupUnlockInfo""
     ""UnlockInstance""
     ""UnlockSubGroup""
     ""UpdateGuildMemberData""
     ""GetLevelInstanceGoData""
     ""GetHunterBoxData""
     ""GetAvalidActionPoint""
     ""GetLocalPlayerIsCoach"" */

void FUN_108f32b0(void)

{
  code *pcStack_164;
  char *pcStack_160;
  undefined1 **ppuStack_15c;
  code ***pppcStack_158;
  undefined1 *puStack_154;
  code **ppcStack_150;
  undefined1 ***pppuStack_14c;
  code ***pppcStack_148;
  undefined1 **ppuStack_144;
  undefined1 **ppuStack_140;
  code ***pppcStack_13c;
  code ***pppcStack_138;
  undefined1 ***pppuStack_134;
  undefined1 ***pppuStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
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
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
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
  pppcStack_30 = (code ***)0x11dd79e0;
  pppcStack_34 = (code ***)0x108f32e4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)CLevelEntrustUI__BuildEntrustListVO;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x108f32f5;
  FUN_108f84a0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x108f330b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd79de;
  pppcStack_40 = (code ***)0x11dd79cc;
  pppcStack_44 = (code ***)0x108f332b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_108f63e0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x108f333c;
  FUN_108f84a0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x108f3352;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd78f6;
  pppcStack_50 = (code ***)0x11dd78e4;
  pppcStack_54 = (code ***)0x108f3372;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_108f6610;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x108f3383;
  FUN_108f84a0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x108f3399;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd78e2;
  pppcStack_60 = (code ***)0x11dd78d4;
  pppcStack_64 = (code ***)0x108f33b9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_108f6840;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x108f33ca;
  FUN_108f84a0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x108f33e0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd791e;
  pppcStack_70 = (code ***)0x11dd7910;
  pppcStack_74 = (code ***)0x108f3400;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_108f68b0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x108f3411;
  FUN_108f84a0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x108f3427;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd790d;
  pppcStack_80 = (code ***)0x11dd78f8;
  pppcStack_84 = (code ***)0x108f3447;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_108f6f70;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x108f3458;
  FUN_108f84a0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x108f346e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dd794a;
  pppcStack_90 = (code ***)0x11dd7934;
  pppcStack_94 = (code ***)0x108f348e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_108f77f0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x108f349f;
  FUN_108f84a0();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x108f34b5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dd7930;
  pppcStack_a0 = (code ***)0x11dd7920;
  pppcStack_a4 = (code ***)0x108f34d5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_108f69a0;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x108f34e6;
  FUN_108f84a0();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x108f34fc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd7978;
  pppcStack_b0 = (code ***)0x11dd7964;
  pppcStack_b4 = (code ***)0x108f351c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_108f6920;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x108f352d;
  FUN_108f84a0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x108f3543;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd7961;
  pppcStack_c0 = (code ***)0x11dd794c;
  pppcStack_c4 = (code ***)0x108f3563;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_108f8110;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x108f3574;
  FUN_108f84a0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x108f358a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd7aad;
  pppcStack_d0 = (code ***)0x11dd7aa0;
  pppcStack_d4 = (code ***)0x108f35aa;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_108f3a00;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x108f35bb;
  FUN_108f83e0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x108f35d1;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd7a9c;
  pppcStack_e0 = (code ***)0x11dd7a90;
  pppcStack_e4 = (code ***)0x108f35f1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_108f3a50;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x108f3602;
  FUN_108f83e0();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x108f3618;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dc4136;
  pppcStack_f0 = (code ***)0x11dc4124;
  pppcStack_f4 = (code ***)0x108f3638;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_108f3880;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x108f3649;
  FUN_108f83e0();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x108f365f;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11dd7ae0;
  pppcStack_100 = (code ***)0x11dd7acc;
  pppcStack_104 = (code ***)0x108f367f;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_108f38e0;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x108f3690;
  FUN_108f83e0();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x108f36a6;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd7ac8;
  pppcStack_110 = (code ***)0x11dd7ab0;
  pppcStack_114 = (code ***)0x108f36c6;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_108f3970;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppcStack_11c = (code ***)0x108f36d7;
  FUN_108f83e0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x108f36ed;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd7b11;
  pppcStack_120 = (code ***)0x11dd7b00;
  pppcStack_124 = (code ***)0x108f370d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_108f7c90;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x108f371e;
  FUN_108f83e0();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppuStack_130 = (undefined1 ***)0x108f3734;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd7afd;
  pppuStack_130 = (undefined1 ***)0x11dd7ae4;
  pppuStack_134 = (undefined1 ***)0x108f3754;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppuStack_134 = (undefined1 ***)FUN_108f8040;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x108f3765;
  FUN_108f83e0();
  if (((undefined1 ****)pppcStack_120 != &pppuStack_134) &&
     ((undefined1 ****)pppcStack_120 != (undefined1 ****)0x0)) {
    pppcStack_13c = pppcStack_120;
    ppuStack_140 = (undefined1 **)0x108f377b;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppuStack_134;
  pppcStack_13c = (code ***)0x11dd7b45;
  ppuStack_140 = (undefined1 **)0x11dd7b28;
  ppuStack_144 = (undefined1 **)0x108f379b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  ppuStack_144 = (undefined1 **)FUN_108f72f0;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppuStack_14c = (undefined1 ***)0x108f37ac;
  FUN_108f84a0();
  if ((pppuStack_130 != &ppuStack_144) && (pppuStack_130 != (undefined1 ***)0x0)) {
    pppuStack_14c = pppuStack_130;
    ppcStack_150 = (code **)0x108f37c2;
    FUN_10c3d5d0();
  }
  pppuStack_134 = &ppuStack_144;
  pppuStack_14c = (undefined1 ***)0x11dd7b25;
  ppcStack_150 = (code **)0x11dd7b14;
  puStack_154 = (undefined1 *)0x108f37e2;
  pppuStack_130 = pppuStack_134;
  FUN_100b62c0();
  puStack_154 = &LAB_108f80d0;
  pppcStack_158 = (code ***)&pppuStack_14c;
  ppuStack_15c = (undefined1 **)0x108f37f3;
  FUN_108f83e0();
  if ((ppuStack_140 != &puStack_154) && (ppuStack_140 != (undefined1 **)0x0)) {
    ppuStack_15c = ppuStack_140;
    pcStack_160 = (char *)0x108f3809;
    FUN_10c3d5d0();
  }
  ppuStack_144 = &puStack_154;
  ppuStack_15c = (undefined1 **)0x11dd7a13;
  pcStack_160 = "IsShowCountDown";
  pcStack_164 = (code *)0x108f3829;
  ppuStack_140 = ppuStack_144;
  FUN_100b62c0();
  pcStack_164 = FUN_108f8250;
  FUN_108f84a0(&ppuStack_15c);
  if ((ppcStack_150 != &pcStack_164) && (ppcStack_150 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_150);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108f6f70 @ 108f6f70  size=881 ===== */
// calls: CMHLevelSystem::GetCurrentContext
// strings:
//   "GUILDINSTANCE_MEMBERVO_CLASS_CLASSNAME"
//   "bIsInTeam"
//   "bIsInCamp"
//   "guildmemberInfoArr"

/* [RE-AUTO c0]
   strings:
     ""GUILDINSTANCE_MEMBERVO_CLASS_CLASSNAME""
     ""bIsInTeam""
     ""bIsInCamp""
     ""guildmemberInfoArr"" */

void FUN_108f6f70(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  uint uVar11;
  undefined4 *puStack_a4;
  int *piVar12;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_2c;
  byte bStack_28;
  undefined4 uStack_24;
  
  if (((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
      (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) &&
     (0 < in_stack_00000014)) {
    iVar3 = (**(code **)(*piVar4 + 0xb4))();
    piVar4 = (int *)FUN_107cb5c0();
    if (((iVar3 != 0) && (piVar4 != (int *)0x0)) && (piVar4[0xaaf] != 0)) {
      uVar9 = (**(code **)(*piVar4 + 0xc0))();
      iVar3 = FUN_114a0a10(uVar9);
      if (iVar3 != 0) {
        puStack_a4 = in_stack_00000010;
        FUN_104f4330();
        uStack_44 = 0;
        uStack_40 = 0;
        piVar12 = (int *)CONCAT31((int3)((uint)unaff_EDI >> 8),(bStack_28 & 0x8f) == 10);
        cVar1 = (**(code **)(*piStack_2c + 0x10))
                          (uStack_24,"GUILDINSTANCE_MEMBERVO_CLASS_CLASSNAME",&uStack_44);
        if (((cVar1 != '\0') && (((byte)uStack_50 & 0x8f) == 6)) &&
           (puStack_a4 = puStack_4c, (uStack_50 >> 6 & 1) != 0)) {
          puStack_a4 = (undefined4 *)*puStack_4c;
        }
        uStack_6c = 0;
        uStack_68 = 0;
        FUN_11a98a70(&uStack_6c);
        piVar4 = (int *)(**(code **)(*piVar4 + 0x3a4))();
        uVar11 = 0;
        iVar3 = (int)(puStack_a4[0x14] - puStack_a4[0x13]) >> 0x1f;
        if ((int)(puStack_a4[0x14] - puStack_a4[0x13]) / 0x30 + iVar3 != iVar3) {
          do {
            uStack_88 = 0;
            uStack_84 = 0;
            FUN_11a98de0(&uStack_88,piVar12,0,0);
            puStack_a4 = (undefined4 *)(puStack_a4[0x13] + uVar11);
            uVar5 = FUN_1149e560();
            FUN_104d1550(&DAT_11dbb0b4,uVar5);
            if ((piVar4 == (int *)0x0) || ((char)piVar4[0x32] == '\0')) {
              FUN_104d15e0("bIsInTeam",0);
              iVar3 = **(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
              uVar9 = FUN_1149e560();
              iVar3 = (**(code **)(iVar3 + 0x84))(uVar9);
              if ((iVar3 != 0) && (*(int **)(iVar3 + 0xc) != (int *)0x0)) {
                uVar2 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x170))();
                FUN_104d15e0("bIsInCamp",uVar2);
              }
            }
            else {
              uVar6 = (**(code **)(*piVar4 + 0xa4))();
              uVar8 = 0;
              if (uVar6 != 0) {
                do {
                  piVar4 = (int *)(**(code **)(*piVar4 + 0xb8))(uVar8);
                  if (piVar4 != (int *)0x0) {
                    uVar9 = (**(code **)(*piVar4 + 4))();
                    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
                    lVar10 = FUN_1149e560();
                    if (lVar10 == CONCAT44(uVar5,(int)uVar9)) {
                      FUN_104d15e0("bIsInTeam",1);
                      iVar3 = CMHLevelSystem__GetCurrentContext();
                      iVar3 = *(int *)(iVar3 + 0x44);
                      iVar7 = (**(code **)(*piVar4 + 0x48))();
                      FUN_104d15e0("bIsInCamp",iVar7 == iVar3);
                    }
                  }
                  uVar8 = uVar8 + 1;
                  piVar4 = piVar12;
                } while (uVar8 < uVar6);
              }
            }
            (**(code **)(*piStack_80 + 0x3c))(uStack_78,&stack0xffffff68);
            FUN_104d7c10();
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)((int)(puStack_a4[0x14] - puStack_a4[0x13]) / 0x30));
        }
        FUN_104d12b0("guildmemberInfoArr",auStack_70);
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_104d7c10();
      }
    }
  }
  return;
}



/* ===== FUN_10900850 @ 10900850  size=1745 ===== */
// strings:
//   "GetTeamFiltrationData"
//   "RefreshTeamInfo"
//   "SearchOtherTeam"
//   "SearchTeamChangePage"
//   "LookOtherTeamInfo"
//   "CreateTeamReq"
//   "JoinTeamReq"
//   "ReqQuitTeam"
//   "ReqChangeLeader"
//   "ReqKickMember"
//   "SetTeamOptionReq"
//   "InviteTeam"
//   "QuickJoinTeamReq"
//   "ReqSearchByName"
//   "onTeamTypeEight"
//   "onTeamTypeTwelve"
//   "onTeamTypeSixTeen"
//   "GetTeamMemberList"
//   "RaidInviteTeam"
//   "RaidTeamRequest"

/* [RE-AUTO c0]
   strings:
     ""GetTeamFiltrationData""
     ""RefreshTeamInfo""
     ""SearchOtherTeam""
     ""SearchTeamChangePage""
     ""LookOtherTeamInfo""
     ""CreateTeamReq""
     ""JoinTeamReq""
     ""ReqQuitTeam""
     ""ReqChangeLeader""
     ""ReqKickMember"" */

void FUN_10900850(void)

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
  code ***pppcStack_168;
  code ***pppcStack_164;
  code ***pppcStack_160;
  code ***pppcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  code ***pppcStack_14c;
  code ***pppcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  code ***pppcStack_138;
  code ***pppcStack_134;
  code ***pppcStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
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
  undefined4 ***pppuStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  undefined4 ***pppuStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  undefined4 ***pppuStack_84;
  undefined4 ***pppuStack_80;
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
  pppcStack_30 = (code ***)0x11dd82dc;
  pppcStack_34 = (code ***)0x10900884;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109011d0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10900895;
  FUN_10904960();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109008ab;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd83db;
  pppcStack_40 = (code ***)0x11dd83cc;
  pppcStack_44 = (code ***)0x109008cb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10901db0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109008dc;
  FUN_10904960();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109008f2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd83cb;
  pppcStack_50 = (code ***)0x11dd83bc;
  pppcStack_54 = (code ***)0x10900912;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10901fd0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10900923;
  FUN_10904960();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10900939;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd8404;
  pppcStack_60 = (code ***)0x11dd83f0;
  pppcStack_64 = (code ***)0x10900959;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109020b0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1090096a;
  FUN_10904960();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10900980;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd83ed;
  pppcStack_70 = (code ***)0x11dd83dc;
  pppcStack_74 = (code ***)0x109009a0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109026e0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109009b1;
  FUN_10904960();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppuStack_80 = (undefined4 ***)0x109009c7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd8421;
  pppuStack_80 = (undefined4 ***)0x11dd8414;
  pppuStack_84 = (undefined4 ***)0x109009e7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppuStack_84 = (undefined4 ***)FUN_109027e0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109009f8;
  FUN_10904960();
  if (((undefined4 ****)pppcStack_70 != &pppuStack_84) &&
     ((undefined4 ****)pppcStack_70 != (undefined4 ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x10900a0e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppuStack_84;
  pppcStack_8c = (code ***)0x11dd8413;
  pppcStack_90 = (code ***)0x11dd8408;
  pppcStack_94 = (code ***)0x10900a2e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_10902bf0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppuStack_9c = (undefined4 ***)0x10900a3f;
  FUN_10904960();
  if (((code ****)pppuStack_80 != &pppcStack_94) && ((code ****)pppuStack_80 != (code ****)0x0)) {
    pppuStack_9c = pppuStack_80;
    pppcStack_a0 = (code ***)0x10900a55;
    FUN_10c3d5d0();
  }
  pppuStack_84 = &pppcStack_94;
  pppuStack_9c = (undefined4 ***)0x11dd843f;
  pppcStack_a0 = (code ***)0x11dd8434;
  pppcStack_a4 = (code ***)0x10900a75;
  pppuStack_80 = pppuStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)&LAB_10902eb0;
  pppcStack_a8 = (code ***)&pppuStack_9c;
  pppcStack_ac = (code ***)0x10900a86;
  FUN_10904960();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x10900a9c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd8433;
  pppcStack_b0 = (code ***)0x11dd8424;
  pppcStack_b4 = (code ***)0x10900abc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_10903e90;
  pppuStack_b8 = &pppcStack_ac;
  pppcStack_bc = (code ***)0x10900acd;
  FUN_10904960();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x10900ae3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd8351;
  pppcStack_c0 = (code ***)0x11dd8344;
  pppcStack_c4 = (code ***)0x10900b03;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_10902ee0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x10900b14;
  FUN_10904960();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x10900b2a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd8340;
  pppcStack_d0 = (code ***)0x11dd8330;
  pppcStack_d4 = (code ***)0x10900b4a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_10904030;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x10900b5b;
  FUN_10904960();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x10900b71;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd8372;
  pppcStack_e0 = (code ***)0x11dd8368;
  pppcStack_e4 = (code ***)0x10900b91;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_10902d50;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x10900ba2;
  FUN_10904960();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x10900bb8;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dd8364;
  pppcStack_f0 = (code ***)0x11dd8354;
  pppcStack_f4 = (code ***)0x10900bd8;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_109043f0;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x10900be9;
  FUN_10904960();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x10900bff;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11dd8393;
  pppcStack_100 = (code ***)0x11dd8384;
  pppcStack_104 = (code ***)0x10900c1f;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_10901e80;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x10900c30;
  FUN_10904960();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x10900c46;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd8383;
  pppcStack_110 = (code ***)0x11dd8374;
  pppcStack_114 = (code ***)0x10900c66;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_10904480;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppcStack_11c = (code ***)0x10900c77;
  FUN_10904960();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x10900c8d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd83b8;
  pppcStack_120 = (code ***)0x11dd83a8;
  pppcStack_124 = (code ***)0x10900cad;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_10904540;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x10900cbe;
  FUN_10904960();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x10900cd4;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd83a5;
  pppcStack_130 = (code ***)0x11dd8394;
  pppcStack_134 = (code ***)0x10900cf4;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_10904600;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x10900d05;
  FUN_10904960();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x10900d1b;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dd84bd;
  pppcStack_140 = (code ***)0x11dd84ac;
  pppcStack_144 = (code ***)0x10900d3b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_109038a0;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x10900d4c;
  FUN_10904960();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x10900d62;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dd84aa;
  pppcStack_150 = (code ***)0x11dd849c;
  pppcStack_154 = (code ***)0x10900d82;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_10900f70;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x10900d93;
  FUN_10904960();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x10900da9;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dd84e7;
  pppcStack_160 = (code ***)0x11dd84d8;
  pppcStack_164 = (code ***)0x10900dc9;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_10901080;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x10900dda;
  FUN_10904960();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x10900df0;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dd84d6;
  pppcStack_170 = (code ***)0x11dd84c0;
  pppcStack_174 = (code ***)0x10900e10;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_10902120;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x10900e21;
  FUN_10904960();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    ppcStack_180 = (code **)0x10900e37;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11dd850b;
  ppcStack_180 = (code **)0x11dd84fc;
  ppcStack_184 = (code **)0x10900e57;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  ppcStack_184 = (code **)FUN_10902f40;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x10900e68;
  FUN_10904960();
  if ((pppcStack_170 != &ppcStack_184) && (pppcStack_170 != (code ***)0x0)) {
    pppcStack_18c = pppcStack_170;
    ppcStack_190 = (code **)0x10900e7e;
    FUN_10c3d5d0();
  }
  pppcStack_174 = &ppcStack_184;
  pppcStack_18c = (code ***)0x11dd84f9;
  ppcStack_190 = (code **)0x11dd84e8;
  pcStack_194 = (code *)0x10900e9e;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pcStack_194 = FUN_109046f0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  ppcStack_19c = (code **)0x10900eaf;
  FUN_10904960();
  if ((ppcStack_180 != &pcStack_194) && (ppcStack_180 != (code **)0x0)) {
    ppcStack_19c = ppcStack_180;
    pcStack_1a0 = (char *)0x10900ec5;
    FUN_10c3d5d0();
  }
  ppcStack_184 = &pcStack_194;
  ppcStack_19c = (code **)0x11dd8528;
  pcStack_1a0 = "GetNetID";
  pcStack_1a4 = (code *)0x10900ee5;
  ppcStack_180 = ppcStack_184;
  FUN_100b62c0();
  pcStack_1a4 = FUN_10904830;
  FUN_10904960(&ppcStack_19c);
  if ((ppcStack_190 != &pcStack_1a4) && (ppcStack_190 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_190);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109094c0 @ 109094c0  size=283 ===== */
// strings:
//   "_getPlayerFactionByID"
//   "_IsInPvpLevel"
//   "restTimeGameOverFlash"
//   "scorePvp1stStage"
//   "scorePvp2ndStage"
//   "realStartWithoutReadyGo"

/* [RE-AUTO c0]
   strings:
     ""_getPlayerFactionByID""
     ""_IsInPvpLevel""
     ""restTimeGameOverFlash""
     ""scorePvp1stStage""
     ""scorePvp2ndStage""
     ""realStartWithoutReadyGo"" */

void FUN_109094c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  FUN_104d13b0("_getPlayerFactionByID",FUN_10909320);
  FUN_104d13b0("_IsInPvpLevel",FUN_109085d0);
  FUN_117423e0();
  uVar1 = FUN_11742460();
  FUN_104d1550("restTimeGameOverFlash",uVar1);
  FUN_117423e0();
  uVar1 = FUN_11742350();
  FUN_117423e0();
  uVar2 = FUN_11742360();
  FUN_104d1550("scorePvp1stStage",uVar1);
  FUN_104d1550("scorePvp2ndStage",uVar2);
  FUN_104d15e0("realStartWithoutReadyGo",DAT_123bbab2);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10912f00 @ 10912f00  size=1106 ===== */
// strings:
//   "GetInstanceEnterData"
//   "GetSpecLevelData"
//   "IsCrossRegion"
//   "GetCrossRegionRoomID"
//   "GetGuildMathSignUP"
//   "IsBattleWatch"
//   "LevelTeamMatch"
//   "LevelTeamMatchByEntrust"
//   "ReqSpecLevelData"
//   "ReqStopMatch"
//   "IsLocalBattleMap"
//   "GetCurLevelID"
//   "GetCurLevelMode"
//   "IsCrossServerPlayer"
//   "IsBattleLevelCanTrade"

/* [RE-AUTO c0]
   strings:
     ""GetInstanceEnterData""
     ""GetSpecLevelData""
     ""IsCrossRegion""
     ""GetCrossRegionRoomID""
     ""GetGuildMathSignUP""
     ""IsBattleWatch""
     ""LevelTeamMatch""
     ""LevelTeamMatchByEntrust""
     ""ReqSpecLevelData""
     ""ReqStopMatch"" */

void FUN_10912f00(void)

{
  code *pcStack_114;
  char *pcStack_110;
  code **ppcStack_10c;
  code ***pppcStack_108;
  code *pcStack_104;
  code **ppcStack_100;
  code ***pppcStack_fc;
  code ***pppcStack_f8;
  code **ppcStack_f4;
  code **ppcStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  code ***pppcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code ***pppcStack_cc;
  undefined4 ***pppuStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined4 ***pppuStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
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
  pppcStack_30 = (code ***)0x11dd944c;
  pppcStack_34 = (code ***)0x10912f34;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10913600;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10912f45;
  FUN_109156a0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x10912f5b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd9448;
  pppcStack_40 = (code ***)0x11dd9438;
  pppcStack_44 = (code ***)0x10912f7b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10914690;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x10912f8c;
  FUN_109156a0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10912fa2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd9489;
  pppcStack_50 = (code ***)0x11dd947c;
  pppcStack_54 = (code ***)0x10912fc2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10913400;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10912fd3;
  FUN_109156a0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10912fe9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd9478;
  pppcStack_60 = (code ***)0x11dd9464;
  pppcStack_64 = (code ***)0x10913009;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10913480;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1091301a;
  FUN_109156a0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10913030;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd94ae;
  pppcStack_70 = (code ***)0x11dd949c;
  pppcStack_74 = (code ***)0x10913050;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10913370;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10913061;
  FUN_109156a0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10913077;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd9499;
  pppcStack_80 = (code ***)0x11dd948c;
  pppcStack_84 = (code ***)0x10913097;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109134d0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109130a8;
  FUN_109156a0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppuStack_90 = (undefined4 ***)0x109130be;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dd93b6;
  pppuStack_90 = (undefined4 ***)0x11dd93a8;
  pppuStack_94 = (undefined4 ***)0x109130de;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)FUN_10914f90;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109130ef;
  FUN_109155e0();
  if (((undefined4 ****)pppcStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppcStack_80 != (undefined4 ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x10913105;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppuStack_94;
  pppcStack_9c = (code ***)0x11dd93a7;
  pppcStack_a0 = (code ***)0x11dd9390;
  pppcStack_a4 = (code ***)0x10913125;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10915240;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppuStack_ac = (undefined4 ***)0x10913136;
  FUN_109155e0();
  if (((code ****)pppuStack_90 != &pppcStack_a4) && ((code ****)pppuStack_90 != (code ****)0x0)) {
    pppuStack_ac = pppuStack_90;
    pppcStack_b0 = (code ***)0x1091314c;
    FUN_10c3d5d0();
  }
  pppuStack_94 = &pppcStack_a4;
  pppuStack_ac = (undefined4 ***)0x11dd93d8;
  pppcStack_b0 = (code ***)0x11dd93c8;
  pppcStack_b4 = (code ***)0x1091316c;
  pppuStack_90 = pppuStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)&LAB_109154b0;
  pppcStack_b8 = (code ***)&pppuStack_ac;
  pppcStack_bc = (code ***)0x1091317d;
  FUN_109156a0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x10913193;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd93c4;
  pppcStack_c0 = (code ***)0x11dd93b8;
  pppcStack_c4 = (code ***)0x109131b3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_109154d0;
  pppuStack_c8 = &pppcStack_bc;
  pppcStack_cc = (code ***)0x109131c4;
  FUN_109156a0();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x109131da;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd93fc;
  pppcStack_d0 = (code ***)0x11dd93ec;
  pppcStack_d4 = (code ***)0x109131fa;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_10913580;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x1091320b;
  FUN_109156a0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x10913221;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd93e9;
  pppcStack_e0 = (code ***)0x11dd93dc;
  pppcStack_e4 = (code ***)0x10913241;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_109152e0;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x10913252;
  FUN_109156a0();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    ppcStack_f0 = (code **)0x10913268;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dd9423;
  ppcStack_f0 = (code **)0x11dd9414;
  ppcStack_f4 = (code **)0x10913288;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  ppcStack_f4 = (code **)FUN_10915340;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x10913299;
  FUN_109156a0();
  if ((pppcStack_e0 != &ppcStack_f4) && (pppcStack_e0 != (code ***)0x0)) {
    pppcStack_fc = pppcStack_e0;
    ppcStack_100 = (code **)0x109132af;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = &ppcStack_f4;
  pppcStack_fc = (code ***)0x11dd9413;
  ppcStack_100 = (code **)0x11dd9400;
  pcStack_104 = (code *)0x109132cf;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pcStack_104 = FUN_109153b0;
  pppcStack_108 = (code ***)&pppcStack_fc;
  ppcStack_10c = (code **)0x109132e0;
  FUN_109156a0();
  if ((ppcStack_f0 != &pcStack_104) && (ppcStack_f0 != (code **)0x0)) {
    ppcStack_10c = ppcStack_f0;
    pcStack_110 = (char *)0x109132f6;
    FUN_10c3d5d0();
  }
  ppcStack_f4 = &pcStack_104;
  ppcStack_10c = (code **)0x11dd9545;
  pcStack_110 = "IsBattleLevelCanTrade";
  pcStack_114 = (code *)0x10913316;
  ppcStack_f0 = ppcStack_f4;
  FUN_100b62c0();
  pcStack_114 = FUN_10915440;
  FUN_109156a0(&ppcStack_10c);
  if ((ppcStack_100 != &pcStack_114) && (ppcStack_100 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_100);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091a630 @ 1091a630  size=248 ===== */
// strings:
//   "sendGuildMatchSignUpListNft"

/* [RE-AUTO c0]
   strings:
     ""sendGuildMatchSignUpListNft"" */

void FUN_1091a630(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if ((iVar2 != 0) && (*param_1 == 1)) {
      uStack_14 = DAT_123bd1f4;
      uStack_10 = DAT_123bd1f8;
      piStack_20 = (int *)0x0;
      uStack_1c = DAT_123bd1ec;
      uStack_18 = DAT_123bd1f0;
      if ((DAT_123bd1ec >> 6 & 1) != 0) {
        piStack_20 = DAT_123bd1e8;
        (**(code **)(*DAT_123bd1e8 + 4))(&piStack_20,DAT_123bd1f0);
      }
      if ((uStack_1c & 0x8f) != 1) {
        (**(code **)(*piStack_20 + 0x18))
                  (uStack_18,0,"sendGuildMatchSignUpListNft",0,0,(uStack_1c & 0x8f) == 10);
      }
      if ((uStack_1c >> 6 & 1) != 0) {
        (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
      }
    }
  }
  return;
}



/* ===== FUN_1091a8a0 @ 1091a8a0  size=3146 ===== */
// calls: memcpy
// strings:
//   "registered"
//   "GuildLREGDataArray"
//   "GuildLREG_CLASS_NAME"
//   "teamName"
//   "isSelf"
//   "memberNameStr"
//   "memberRoleId"
//   "GuildLeagueSignUpAgree"
//   "updataLeagueRegistrationViewUpdata"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""registered""
     ""GuildLREGDataArray""
     ""GuildLREG_CLASS_NAME""
     ""teamName""
     ""isSelf""
     ""memberNameStr""
     ""memberRoleId""
     ""GuildLeagueSignUpAgree""
     ""updataLeagueRegistrationViewUpdata"" */

void FUN_1091a8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int ****ppppiVar1;
  int *****pppppiVar2;
  char *pcVar3;
  char cVar4;
  char *_Src;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int **unaff_EBX;
  uint uVar9;
  byte unaff_SI;
  size_t sVar10;
  int *unaff_EDI;
  undefined *puVar11;
  int *****pppppiVar12;
  uint uVar13;
  int **ppiStack_200;
  int ****ppppiStack_1fc;
  int ****ppppiStack_1f8;
  uint uStack_1f4;
  int ****ppppiStack_1f0;
  int ****ppppiStack_1ec;
  int *piStack_1e8;
  char *pcStack_1e4;
  int ****ppppiStack_1e0;
  int ***pppiStack_1dc;
  int *piStack_1d8;
  undefined4 uStack_1d4;
  int ****ppppiStack_1d0;
  char *pcStack_1cc;
  int ****ppppiStack_1c8;
  int ****ppppiStack_1c4;
  int *****pppppiVar14;
  int iVar15;
  char *apcStack_1b4 [2];
  undefined4 local_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_198;
  int ****ppppiStack_194;
  int ***local_190;
  uint local_18c;
  int ****local_188;
  undefined4 local_184;
  int ***local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int *piStack_170;
  int ***pppiStack_168;
  uint uStack_164;
  int ****ppppiStack_160;
  int *piStack_158;
  int ***pppiStack_150;
  uint uStack_14c;
  int ****ppppiStack_148;
  int iStack_144;
  int *piStack_140;
  uint uStack_13c;
  int ****ppppiStack_138;
  uint uStack_134;
  int ****ppppiStack_130;
  undefined4 uStack_12c;
  int *piStack_120;
  uint uStack_11c;
  int ***pppiStack_118;
  int ****ppppiStack_114;
  int ****ppppiStack_110;
  uint uStack_10c;
  int ****appppiStack_108 [2];
  int ***pppiStack_100;
  uint uStack_fc;
  int ****ppppiStack_f8;
  int ****ppppiStack_f4;
  int ***pppiStack_f0;
  int ***pppiStack_ec;
  int ***pppiStack_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  int ****ppppiStack_dc;
  int ***pppiStack_d8;
  int ***pppiStack_d4;
  undefined2 auStack_d0 [4];
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  undefined2 *puStack_bc;
  undefined2 *puStack_b0;
  undefined2 *puStack_ac;
  undefined2 **ppuStack_90;
  undefined2 **ppuStack_8c;
  int ***pppiStack_88;
  int ***pppiStack_80;
  int ***pppiStack_7c;
  int ***pppiStack_78;
  undefined1 auStack_74 [16];
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)apcStack_1b4;
  local_18c = param_4[1];
  local_184 = param_4[3];
  local_188 = (int ****)param_4[2];
  local_180 = (int ***)param_4[4];
  local_1ac = param_2;
  local_190 = (int ***)0x0;
  if ((local_18c >> 6 & 1) != 0) {
    local_190 = (int ***)*param_4;
    ppppiStack_1c8 = &local_190;
    pcStack_1cc = (char *)0x1091a904;
    ppppiStack_1c4 = local_188;
    (*(code *)(*local_190)[1])();
  }
  _DAT_123bbb20 = param_2;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) {
    ppppiStack_1c4 = (int ****)0x1091a93b;
    piStack_120 = (int *)(**(code **)(*piVar6 + 0xb4))();
    if (piStack_120 != (int *)0x0) {
      piVar6 = (int *)piStack_120[0xaaf];
      ppppiStack_1c4 = (int ****)0x1091a95b;
      piStack_170 = piVar6;
      (**(code **)(*piVar6 + 0xc))();
      ppppiStack_1c4 = (int ****)0x0;
      ppppiStack_1c8 = (int ****)0x11dd99e8;
      pcStack_1cc = (char *)0x1091a96d;
      FUN_104d1550();
      ppppiStack_138 = (int ****)0x0;
      uStack_134 = 0;
      ppppiStack_1c4 = (int ****)(uint)(((byte)local_18c & 0x8f) == 10);
      ppppiStack_1c8 = (int ****)&ppppiStack_138;
      pcStack_1cc = "GuildLREGDataArray";
      ppppiStack_1d0 = local_188;
      uStack_1d4 = 0x1091a9b2;
      (*(code *)(*local_190)[4])();
      uStack_1d4 = 0;
      piStack_1d8 = piStack_140;
      pppiStack_1dc = (int ***)0x1091a9c7;
      (*(code *)(*ppppiStack_148)[0xb])();
      ppppiStack_1e0 = (int ****)&ppppiStack_130;
      ppppiStack_130 = (int ****)0x0;
      uStack_12c = 0;
      local_184 = 0;
      local_190 = (int ***)CONCAT31(local_190._1_3_,((byte)uStack_1a4 & 0x8f) == 10);
      pppiStack_1dc = local_190;
      pcStack_1e4 = "GuildLREG_CLASS_NAME";
      piStack_1e8 = piStack_1a0;
      ppppiStack_1ec = (int ****)0x1091aa13;
      cVar4 = (**(code **)(*piStack_1a8 + 0x10))();
      pppppiVar12 = (int *****)0x0;
      if (((cVar4 != '\0') && (((byte)uStack_13c & 0x8f) == 6)) &&
         (pppppiVar12 = (int *****)ppppiStack_138, ppppiStack_194 = ppppiStack_138,
         (uStack_13c >> 6 & 1) != 0)) {
        ppppiStack_194 = (int ****)*ppppiStack_138;
        pppppiVar12 = (int *****)ppppiStack_194;
      }
      iStack_144 = (((int *)piVar6[0xe])[1] - *(int *)piVar6[0xe]) / 0x58;
      piStack_1a0 = (int *)0x0;
      if (0 < iStack_144) {
        do {
          ppppiStack_1f0 = (int ****)0x1091aa7e;
          ppppiStack_1ec = (int ****)piStack_1a0;
          pppiStack_1dc = (int ***)FUN_114a0a90();
          ppppiStack_1f0 = (int ****)(pppiStack_1dc + 0x13);
          uStack_1f4 = 0x1091aa94;
          FUN_1091d6c0();
          uStack_1f4 = 0;
          ppppiStack_1f8 = (int ****)0x0;
          ppiStack_200 = &piStack_1d8;
          piStack_1d8 = (int *)0x0;
          uStack_1d4 = 0;
          ppppiStack_1fc = (int ****)pppppiVar12;
          FUN_11a98de0();
          pppiStack_d8 = (int ***)&pppiStack_e8;
          pppiStack_e8 = (int ***)((uint)pppiStack_e8 & 0xffffff00);
          pppiStack_d4 = pppiStack_d8;
          _Src = (char *)FUN_1149e590();
          pppiStack_f0 = (int ***)&pppiStack_100;
          pcVar3 = _Src;
          do {
            apcStack_1b4[0] = pcVar3;
            pcVar3 = apcStack_1b4[0] + 1;
          } while (*apcStack_1b4[0] != '\0');
          sVar10 = (int)apcStack_1b4[0] - (int)_Src;
          uStack_1f4 = sVar10 + 1;
          pppiStack_ec = pppiStack_f0;
          if (sVar10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_100b73e0();
          }
          if (0x10 < uStack_1f4) {
            pppiStack_f0 = (int ***)FUN_100b6d60();
            pppiStack_100 = (int ***)(uStack_1f4 + (int)pppiStack_f0);
          }
          pppiStack_ec = pppiStack_f0;
          if (apcStack_1b4[0] != _Src) {
            pvVar5 = memcpy(pppiStack_f0,_Src,sVar10);
            pppiStack_f0 = (int ***)(sVar10 + (int)pvVar5);
          }
          puStack_b0 = auStack_d0;
          auStack_d0[0] = 0;
          puStack_ac = puStack_b0;
          *(undefined1 *)pppiStack_f0 = 0;
          cVar4 = FUN_100ecfd0(pppiStack_ec,(int)pppiStack_f0 - (int)pppiStack_ec);
          if (cVar4 != '\0') {
            FUN_100ed090(auStack_d0);
          }
          if ((puStack_ac != auStack_d0) && (puStack_ac != (undefined2 *)0x0)) {
            FUN_10c3d5d0();
          }
          if (((int ****)pppiStack_ec != &pppiStack_100) &&
             ((int ****)pppiStack_ec != (int ****)0x0)) {
            FUN_10c3d5d0();
          }
          FUN_104d1670();
          (*(code *)(*ppppiStack_160)[0x30])();
          cVar4 = FUN_1149e820();
          if (cVar4 != '\0') {
            FUN_104d1550("isSelf",1);
          }
          pppppiVar12 = (int *****)ppppiStack_110;
          iVar15 = 1;
          if (ppppiStack_114 != ppppiStack_110) {
            pppppiVar14 = (int *****)(ppppiStack_114 + 10);
            do {
              pppiStack_88 = (int ***)pppppiVar14[-10];
              ppppiStack_1fc = pppppiVar14[-1];
              pppiStack_80 = (int ***)pppppiVar14[-8];
              pppiStack_7c = (int ***)pppppiVar14[-7];
              pppiStack_78 = (int ***)pppppiVar14[-6];
              puStack_64 = auStack_74;
              ppppiStack_1f8 = *pppppiVar14;
              sVar10 = (int)ppppiStack_1fc - (int)ppppiStack_1f8;
              puStack_60 = puStack_64;
              if (sVar10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_100b73e0();
              }
              if (0x10 < sVar10 + 1) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(sVar10 + 1);
              }
              if (ppppiStack_1fc != ppppiStack_1f8) {
                pvVar5 = memcpy(puStack_64,ppppiStack_1f8,sVar10);
                puStack_64 = (undefined1 *)(sVar10 + (int)pvVar5);
              }
              pppiStack_c8 = (int ***)&pppiStack_d8;
              *puStack_64 = 0;
              pppiStack_d8 = (int ***)((uint)pppiStack_d8 & 0xffffff00);
              pppiStack_c4 = pppiStack_c8;
              ppppiStack_1fc = (int ****)FUN_1149e7b0();
              ppppiStack_f8 = (int ****)appppiStack_108;
              pppppiVar2 = (int *****)ppppiStack_1fc;
              do {
                ppppiStack_1f8 = (int ****)pppppiVar2;
                pppppiVar2 = (int *****)((int)ppppiStack_1f8 + 1);
              } while (*(char *)ppppiStack_1f8 != '\0');
              sVar10 = (int)ppppiStack_1f8 - (int)ppppiStack_1fc;
              ppppiStack_f4 = ppppiStack_f8;
              if (sVar10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_100b73e0();
              }
              if (0x10 < sVar10 + 1) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(sVar10 + 1);
              }
              if (ppppiStack_1f8 != ppppiStack_1fc) {
                pvVar5 = memcpy(ppppiStack_f8,ppppiStack_1fc,sVar10);
                ppppiStack_f8 = (int ****)(sVar10 + (int)pvVar5);
              }
              ppuStack_90 = &puStack_b0;
              puStack_b0 = (undefined2 *)((uint)puStack_b0 & 0xffff0000);
              ppuStack_8c = ppuStack_90;
              *(undefined1 *)ppppiStack_f8 = 0;
              cVar4 = FUN_100ecfd0(ppppiStack_f4,(int)ppppiStack_f8 - (int)ppppiStack_f4,&puStack_b0
                                   ,4);
              if (cVar4 != '\0') {
                FUN_100ed090(&puStack_b0,&pppiStack_d8,3);
              }
              if ((ppuStack_8c != &puStack_b0) && (ppuStack_8c != (undefined2 **)0x0)) {
                FUN_10c3d5d0(ppuStack_8c);
              }
              if (((int *****)ppppiStack_f4 != appppiStack_108) &&
                 ((int *****)ppppiStack_f4 != (int *****)0x0)) {
                FUN_10c3d5d0(ppppiStack_f4);
              }
              if (iVar15 == 1) {
                puVar11 = &DAT_11dd9b54;
LAB_1091aeea:
                FUN_104d1670(puVar11,pppiStack_c4);
              }
              else {
                if (iVar15 == 2) {
                  puVar11 = &DAT_11dd9b64;
                  goto LAB_1091aeea;
                }
                if (iVar15 == 3) {
                  puVar11 = &DAT_11dd9b60;
                  goto LAB_1091aeea;
                }
                if (iVar15 == 4) {
                  puVar11 = &DAT_11dd9b78;
                  goto LAB_1091aeea;
                }
              }
              iVar15 = iVar15 + 1;
              if (((int ****)pppiStack_c4 != &pppiStack_d8) &&
                 ((int ****)pppiStack_c4 != (int ****)0x0)) {
                FUN_10c3d5d0(pppiStack_c4);
              }
              FUN_1149e250();
              pppppiVar2 = pppppiVar14 + 2;
              pppppiVar14 = pppppiVar14 + 0xc;
            } while (pppppiVar2 != pppppiVar12);
          }
          ppppiVar1 = ppppiStack_114;
          unaff_SI = (byte)iVar15;
          (*(code *)(*local_180)[0xf])(uStack_178,&ppppiStack_1f0);
          if ((puStack_bc != auStack_d0) && (puStack_bc != (undefined2 *)0x0)) {
            ppppiStack_1ec = (int ****)puStack_bc;
            ppppiStack_1f0 = (int ****)0x1091af77;
            FUN_10c3d5d0();
          }
          if (((uint)pcStack_1cc >> 6 & 1) != 0) {
            ppppiStack_1f0 = (int ****)&ppppiStack_1d0;
            ppppiStack_1ec = ppppiStack_1c8;
            uStack_1f4 = 0x1091af97;
            (*(code *)(*ppppiStack_1d0)[2])();
            ppppiStack_1d0 = (int ****)0x0;
          }
          pcStack_1cc = (char *)0x0;
          for (; pppppiVar12 != (int *****)ppppiVar1; pppppiVar12 = pppppiVar12 + -0xc) {
            ppppiStack_1ec = (int ****)0x1091afba;
            FUN_1149e250();
          }
          if ((int *****)ppppiVar1 != (int *****)0x0) {
            ppppiStack_1ec = ppppiVar1;
            ppppiStack_1f0 = (int ****)0x1091afc8;
            FUN_10c3d5d0();
          }
          piStack_1a0 = (int *)((int)piStack_1a0 + 1);
          pppppiVar12 = (int *****)ppppiStack_194;
        } while ((int)piStack_1a0 < iStack_144);
      }
      ppppiStack_1ec = (int ****)0x1091b019;
      piVar6 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if (piVar6 != (int *)0x0) {
        ppppiStack_1c4 = (int ****)0x1091b02b;
        piVar6 = (int *)(**(code **)(*piVar6 + 0x3a4))();
        ppppiStack_1c8 = &pppiStack_150;
        pppiStack_150 = (int ***)0x0;
        uStack_14c = 0;
        ppppiStack_1c4 = (int ****)(uint)(((byte)local_18c & 0x8f) == 10);
        pcStack_1cc = "memberNameStr";
        ppppiStack_1d0 = local_188;
        uStack_1d4 = 0x1091b06a;
        (*(code *)(*local_190)[4])();
        uStack_1d4 = 0;
        piStack_1d8 = piStack_158;
        pppiStack_1dc = (int ***)0x1091b079;
        (*(code *)(*ppppiStack_160)[0xb])();
        local_180 = (int ***)0x0;
        uStack_17c = 0;
        pppiStack_1dc = (int ***)(uint)(((byte)uStack_1a4 & 0x8f) == 10);
        ppppiStack_1e0 = &local_180;
        pcStack_1e4 = "memberRoleId";
        piStack_1e8 = piStack_1a0;
        ppppiStack_1ec = (int ****)0x1091b0b2;
        (**(code **)(*piStack_1a8 + 0x10))();
        ppppiStack_1ec = (int ****)0x0;
        ppppiStack_1f0 = local_188;
        uStack_1f4 = 0x1091b0c1;
        (*(code *)(*local_190)[0xb])();
        ppppiStack_130 = (int ****)0x0;
        uStack_12c = 0;
        uStack_1f4 = (uint)((unaff_SI & 0x8f) == 10);
        ppppiStack_1f8 = (int ****)&ppppiStack_130;
        ppppiStack_1fc = (int ****)0x11dd9b7c;
        ppiStack_200 = unaff_EBX;
        (**(code **)(*unaff_EDI + 0x10))();
        uVar13 = 0;
        pppppiVar12 = (int *****)ppppiStack_138;
        (**(code **)(*piStack_140 + 0x2c))();
        if (((piVar6 != (int *)0x0) && ((char)piVar6[0x32] != '\0')) &&
           (iVar15 = (**(code **)(*piVar6 + 0xa4))(), iVar15 != 0)) {
          uVar9 = 0;
          do {
            piVar7 = (int *)(**(code **)(*piVar6 + 0xb8))(uVar9);
            uStack_10c = 0;
            appppiStack_108[0] = (int ****)0x0;
            (**(code **)(*piVar7 + 0x28))();
            ppppiStack_e4 = (int ****)&ppppiStack_f4;
            ppppiStack_f4 = (int ****)((uint)ppppiStack_f4 & 0xffffff00);
            ppppiStack_e0 = ppppiStack_e4;
            FUN_100e5aa0(ppppiStack_e4);
            ppppiVar1 = ppppiStack_e4;
            pppppiVar14 = (int *****)ppppiStack_e4;
            if ((uStack_10c >> 6 & 1) != 0) {
              (*(code *)(*ppppiStack_110)[2])(&ppppiStack_110,appppiStack_108[0]);
              ppppiStack_110 = (int ****)0x0;
            }
            appppiStack_108[0] = ppppiVar1;
            uStack_10c = 6;
            if (((int *****)ppppiStack_e4 != &ppppiStack_f8) &&
               ((int *****)ppppiStack_e4 != (int *****)0x0)) {
              FUN_10c3d5d0(ppppiStack_e4);
            }
            ppppiStack_1f8 = (int ****)0x0;
            uStack_1f4 = 0;
            pppppiVar14 = (int *****)(**(code **)(*piVar7 + 0xc))();
            if ((uStack_1f4 >> 6 & 1) != 0) {
              (*(code *)(*ppppiStack_1f8)[2])(&ppppiStack_1f8,ppppiStack_1f0);
              ppppiStack_1f8 = (int ****)0x0;
            }
            uStack_1f4 = 4;
            ppppiStack_1f0 = (int ****)pppppiVar14;
            (**(code **)(*piStack_1a0 + 0x3c))(uStack_198,&ppppiStack_110);
            (*(code *)(*ppppiVar1)[0xf])(unaff_EBX,&ppiStack_200);
            if ((uVar13 >> 6 & 1) != 0) {
              (*(code *)(*pppppiVar12)[2])(&stack0xfffffdf8,ppiStack_200);
              pppppiVar12 = (int *****)0x0;
            }
            uVar13 = 0;
            if ((uStack_11c >> 6 & 1) != 0) {
              (**(code **)(*piStack_120 + 8))(&piStack_120,pppiStack_118);
            }
            uVar9 = uVar9 + 1;
            uVar8 = (**(code **)(*piVar6 + 0xa4))();
          } while (uVar9 < uVar8);
        }
        piVar6 = (int *)(**(code **)(*piVar6 + 0x88))();
        (**(code **)(*piVar6 + 0x28))();
        ppppiStack_e0 = &pppiStack_f0;
        pppiStack_f0 = (int ***)((uint)pppiStack_f0 & 0xffffff00);
        ppppiStack_dc = ppppiStack_e0;
        FUN_100e5aa0(ppppiStack_e0);
        FUN_104d1670("teamName",ppppiStack_e0);
        if (((int *****)ppppiStack_e0 != &ppppiStack_f4) &&
           ((int *****)ppppiStack_e0 != (int *****)0x0)) {
          FUN_10c3d5d0(ppppiStack_e0);
        }
        uStack_134 = 0;
        ppppiStack_130 = (int ****)0x3;
        uStack_12c = 0;
        (*(code *)(*pppiStack_1dc)[6])
                  (uStack_1d4,0,"updataLeagueRegistrationViewUpdata",&uStack_134,1,
                   ((byte)piStack_1d8 & 0x8f) == 10);
        if (((uint)ppppiStack_e4 >> 6 & 1) != 0) {
          ppppiStack_1c8 = &pppiStack_e8;
          ppppiStack_1c4 = ppppiStack_e0;
          pcStack_1cc = (char *)0x1091b3cc;
          (*(code *)(*pppiStack_e8)[2])();
          pppiStack_e8 = (int ***)0x0;
        }
        ppppiStack_e4 = (int ****)0x0;
        if ((uStack_fc >> 6 & 1) != 0) {
          ppppiStack_1c8 = &pppiStack_100;
          ppppiStack_1c4 = ppppiStack_f8;
          pcStack_1cc = (char *)0x1091b40b;
          (*(code *)(*pppiStack_100)[2])();
          pppiStack_100 = (int ***)0x0;
        }
        uStack_fc = 0;
        if ((uStack_164 >> 6 & 1) != 0) {
          ppppiStack_1c8 = &pppiStack_168;
          ppppiStack_1c4 = ppppiStack_160;
          pcStack_1cc = (char *)0x1091b43e;
          (*(code *)(*pppiStack_168)[2])();
          pppiStack_168 = (int ***)0x0;
        }
        uStack_164 = 0;
        if ((uStack_14c >> 6 & 1) != 0) {
          ppppiStack_1c8 = &pppiStack_150;
          ppppiStack_1c4 = ppppiStack_148;
          pcStack_1cc = (char *)0x1091b46b;
          (*(code *)(*pppiStack_150)[2])();
          pppiStack_150 = (int ***)0x0;
        }
        uStack_14c = 0;
      }
      if (((uint)ppppiStack_114 >> 6 & 1) != 0) {
        ppppiStack_1c8 = &pppiStack_118;
        ppppiStack_1c4 = ppppiStack_110;
        pcStack_1cc = (char *)0x1091b4a4;
        (*(code *)(*pppiStack_118)[2])();
        pppiStack_118 = (int ***)0x0;
      }
      ppppiStack_114 = (int ****)0x0;
      if ((uStack_134 >> 6 & 1) != 0) {
        ppppiStack_1c8 = (int ****)&ppppiStack_138;
        ppppiStack_1c4 = ppppiStack_130;
        pcStack_1cc = (char *)0x1091b4e3;
        (*(code *)(*ppppiStack_138)[2])();
        ppppiStack_138 = (int ****)0x0;
      }
      uStack_134 = 0;
    }
  }
  if ((local_18c >> 6 & 1) != 0) {
    ppppiStack_1c8 = &local_190;
    ppppiStack_1c4 = local_188;
    pcStack_1cc = (char *)0x1091b516;
    (*(code *)(*local_190)[2])();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091c340 @ 1091c340  size=1007 ===== */
// calls: CGuildBuildingLevelUpInfo::GetMaxLevelForBuilding
// strings:
//   "UnlockDataArray"
//   "Unlock_CLASS_NAME"
//   "nUnlockID"
//   "itemID"
//   "itemName"
//   "itemIcon"
//   "lockState"
//   "lockFund"
//   "lockLevel"
//   "guildfund"
//   "UnlockUpdate"

/* WARNING: Removing unreachable block (ram,0x1091c5e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""UnlockDataArray""
     ""Unlock_CLASS_NAME""
     ""nUnlockID""
     ""itemID""
     ""itemName""
     ""itemIcon""
     ""lockState""
     ""lockFund""
     ""lockLevel""
     ""guildfund"" */

void FUN_1091c340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  byte unaff_SI;
  int *unaff_EDI;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  byte bVar9;
  uint uVar10;
  int **ppiVar11;
  int *local_88;
  uint local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *piStack_68;
  uint uStack_64;
  undefined4 *puStack_60;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  local_84 = param_4[1];
  local_7c = param_4[3];
  local_80 = (int *)param_4[2];
  local_78 = param_4[4];
  local_88 = (int *)0x0;
  if ((local_84 >> 6 & 1) != 0) {
    local_88 = (int *)*param_4;
    (**(code **)(*local_88 + 4))(&local_88,local_80);
  }
  _DAT_123bbb20 = param_2;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar8 + 0xb4))(), iVar2 != 0)) {
    (**(code **)(**(int **)(iVar2 + 0x2abc) + 0xc))();
    ppiVar11 = &piStack_58;
    piStack_58 = (int *)0x0;
    uStack_54 = 0;
    piVar8 = local_80;
    (**(code **)(*local_88 + 0x10))
              (local_80,"UnlockDataArray",ppiVar11,((byte)local_84 & 0x8f) == 10);
    puVar7 = (undefined4 *)0x0;
    puVar6 = puStack_60;
    (**(code **)(*piStack_68 + 0x2c))(puStack_60,0);
    piStack_58 = (int *)0x0;
    uStack_54 = 0;
    uVar10 = (uint)((unaff_SI & 0x8f) == 10);
    cVar1 = (**(code **)(*unaff_EDI + 0x10))(unaff_EBX,"Unlock_CLASS_NAME",&piStack_58,uVar10);
    if (((cVar1 != '\0') && (((byte)uStack_64 & 0x8f) == 6)) &&
       (puVar7 = puStack_60, (uStack_64 >> 6 & 1) != 0)) {
      puVar7 = (undefined4 *)*puStack_60;
    }
    iStack_4c = FUN_1145eed0();
    bVar9 = (byte)uVar10;
    iVar2 = 1;
    if (0 < iStack_4c) {
      do {
        iVar3 = FUN_1145f170(iVar2);
        iVar5 = iVar3;
        FUN_11a98de0(&stack0xffffff68,puVar7,0,0);
        FUN_104d1550("nUnlockID",iVar2);
        FUN_104d1550("itemID",*(undefined4 *)(iVar3 + 0x14));
        FUN_104d1550("itemName",0);
        FUN_104d1550("itemIcon",0);
        cVar1 = FUN_1145fa30(unaff_EBX,iVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_1145e690(puVar6,iVar2);
          if (cVar1 != '\0') {
            uVar4 = 2;
            goto LAB_1091c58a;
          }
          if (*(int *)(iVar3 + 0x18) <= (int)(uint)*(byte *)((int)puVar6 + 0x223)) {
            uVar4 = 4;
            goto LAB_1091c58a;
          }
          uVar4 = 3;
          iVar3 = CGuildBuildingLevelUpInfo__GetMaxLevelForBuilding(4);
          if (*(int *)(iVar5 + 0x18) <= iVar3) goto LAB_1091c58a;
        }
        else {
          uVar4 = 1;
LAB_1091c58a:
          FUN_104d1550("lockState",uVar4);
          FUN_104d1550("lockFund",*(undefined4 *)(iVar5 + 0x1c));
          FUN_104d1550("lockLevel",*(undefined4 *)(iVar5 + 0x18));
          (**(code **)(*local_80 + 0x3c))(local_78,&stack0xffffff68);
        }
        bVar9 = (byte)uVar10;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iStack_4c);
    }
    uVar4 = FUN_114a8610();
    FUN_104d1550("guildfund",uVar4);
    uStack_48 = 0;
    uStack_44 = 3;
    piStack_40 = (int *)0x0;
    (**(code **)(*piVar8 + 0x18))(ppiVar11,0,"UnlockUpdate",&uStack_48,1,(bVar9 & 0x8f) == 10);
    if ((uStack_1c >> 6 & 1) != 0) {
      (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
      piStack_20 = (int *)0x0;
    }
    uStack_1c = 0;
    if ((uStack_3c >> 6 & 1) != 0) {
      (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
      piStack_40 = (int *)0x0;
    }
    uStack_3c = 0;
    if ((uStack_54 >> 6 & 1) != 0) {
      (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
      piStack_58 = (int *)0x0;
    }
    uStack_54 = 0;
  }
  if ((local_84 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 8))(&local_88,local_80);
  }
  return;
}



/* ===== FUN_1091f090 @ 1091f090  size=108 ===== */
// strings:
//   "GetGuildTaskData"

/* [RE-AUTO c0]
   strings:
     ""GetGuildTaskData"" */

void FUN_1091f090(void)

{
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined1 local_24 [4];
  undefined4 *puStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = local_24;
  local_10 = local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "GetGuildTaskData";
  uStack_34 = 0x1091f0c4;
  FUN_100b62c0();
  FUN_10922d70(&pcStack_2c);
  if ((puStack_20 != &uStack_34) && (puStack_20 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puStack_20);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091f100 @ 1091f100  size=6858 ===== */
// calls: _time64, CPlayer::GetHuntRankOrCount
// strings:
//   "guildTaskArray"
//   "GUILDTASK_CLASS_NAME"
//   "bGuildTask"
//   "remainTime"
//   "quest_id"
//   "questStatus"
//   "taskName"
//   "description"
//   "curCount"
//   "maxCount"
//   "curStage"
//   "totalStage"
//   "groupType"
//   "group_id"
//   "bTracked"
//   "canShared"
//   "other_info"
//   "farm_actuarialpoint"
//   "gold_bind"
//   "hunter_exp"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""guildTaskArray""
     ""GUILDTASK_CLASS_NAME""
     ""bGuildTask""
     ""remainTime""
     ""quest_id""
     ""questStatus""
     ""taskName""
     ""description""
     ""curCount""
     ""maxCount"" */

void FUN_1091f100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int ***pppiVar1;
  int *****pppppiVar2;
  int ****ppppiVar3;
  int *******pppppppiVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int **extraout_ECX;
  int *******pppppppiVar14;
  int *piVar15;
  undefined4 unaff_ESI;
  uint uVar16;
  int *******pppppppiVar17;
  int unaff_EDI;
  int ******ppppppiVar18;
  int *******pppppppiStack_208;
  int *******pppppppiStack_204;
  int *******pppppppiStack_200;
  int ***pppiStack_1fc;
  int **ppiVar19;
  int *******pppppppiStack_1f0;
  int *******pppppppiStack_1ec;
  int *******pppppppiStack_1e8;
  int ******ppppppiStack_1e4;
  int *******pppppppiStack_1e0;
  int **ppiStack_1dc;
  int ****ppppiStack_1d8;
  int *******pppppppiStack_1d4;
  int *******pppppppiStack_1d0;
  int ******ppppppiStack_1cc;
  int *******pppppppiStack_1c8;
  char *pcStack_1c4;
  int *******pppppppiStack_1c0;
  int *******pppppppiStack_1bc;
  int *piStack_1ac;
  int ******ppppppiStack_1a8;
  int *******pppppppiStack_1a4;
  int *piStack_1a0;
  int *******pppppppiStack_19c;
  int *******pppppppiStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int *******pppppppiStack_188;
  int ******ppppppiStack_184;
  int ******ppppppiStack_180;
  int ******local_17c;
  int ******ppppppiStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  int *piStack_16c;
  int *******pppppppiStack_168;
  int *piStack_164;
  int *piStack_160;
  int **ppiStack_15c;
  int ******local_158;
  uint local_154;
  int *******local_150;
  undefined4 local_14c;
  uint local_148;
  int ******ppppppiStack_144;
  uint uStack_140;
  int *piStack_13c;
  int *piStack_138;
  int *******pppppppiStack_130;
  int ******ppppppiStack_124;
  int *piStack_120;
  int ******appppppiStack_118 [2];
  int *piStack_110;
  int *******pppppppiStack_108;
  int ******ppppppiStack_100;
  uint uStack_fc;
  int *******pppppppiStack_f8;
  int *piStack_f4;
  undefined4 uStack_ec;
  uint uStack_e4;
  int ******ppppppiStack_e0;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int ****ppppiStack_d0;
  int *****pppppiStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int ******ppppppiStack_c0;
  uint uStack_bc;
  int *******pppppppiStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_a8;
  int *******pppppppiStack_a4;
  int *******pppppppiStack_a0;
  undefined4 uStack_9c;
  int ******ppppppiStack_98;
  undefined4 *puStack_94;
  int *******pppppppiStack_90;
  undefined4 uStack_8c;
  int ******ppppppiStack_88;
  int ***pppiStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  int ***pppiStack_70;
  int ***pppiStack_6c;
  int **ppiStack_68;
  int **appiStack_64 [2];
  int ***pppiStack_5c;
  int ***pppiStack_58;
  int **ppiStack_50;
  int ******appppppiStack_4c [4];
  int ***pppiStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_1ac;
  local_154 = param_4[1];
  local_14c = param_4[3];
  local_150 = (int *******)param_4[2];
  local_148 = param_4[4];
  local_158 = (int ******)0x0;
  if ((local_154 >> 6 & 1) != 0) {
    local_158 = (int ******)*param_4;
    pppppppiStack_1c0 = &local_158;
    pcStack_1c4 = (char *)0x1091f160;
    pppppppiStack_1bc = local_150;
    (*(code *)(*local_158)[1])();
  }
  _DAT_123bbb28 = param_2;
  local_17c = (int ******)0x0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar15 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar15 != (int *)0x0)) {
    pppppppiStack_1bc = (int *******)0x1091f19d;
    iVar6 = (**(code **)(*piVar15 + 0xb4))();
    if ((iVar6 != 0) && (piStack_120 = *(int **)(iVar6 + 0x2abc), piStack_120 != (int *)0x0)) {
      pppppppiStack_1bc = (int *******)0x1091f1bf;
      iVar6 = (**(code **)(*piStack_120 + 0xc))();
      if (iVar6 != 0) {
        ppppppiStack_100 = (int ******)0x0;
        uStack_fc = 0;
        pppppppiStack_1bc = (int *******)(uint)(((byte)local_154 & 0x8f) == 10);
        pppppppiStack_1c0 = &ppppppiStack_100;
        pcStack_1c4 = "guildTaskArray";
        pppppppiStack_1c8 = local_150;
        ppppppiStack_1cc = (int ******)0x1091f20b;
        (*(code *)(*local_158)[4])();
        ppppppiStack_1cc = (int ******)0x0;
        pppppppiStack_1d0 = pppppppiStack_108;
        pppppppiStack_1d4 = (int *******)0x1091f220;
        (**(code **)(*piStack_110 + 0x2c))();
        ppppiStack_1d8 = (int ****)&uStack_d8;
        uStack_d8 = 0;
        uStack_d4 = 0;
        pppppppiStack_1bc =
             (int *******)CONCAT31(pppppppiStack_1bc._1_3_,((byte)piStack_16c & 0x8f) == 10);
        uStack_174 = 0;
        pppppppiStack_1d4 = pppppppiStack_1bc;
        ppiStack_1dc = (int **)0x11dd9e5c;
        pppppppiStack_1e0 = pppppppiStack_168;
        ppppppiStack_1e4 = (int ******)0x1091f26e;
        cVar5 = (**(code **)(*piStack_170 + 0x10))();
        if ((cVar5 != '\0') && (((byte)uStack_e4 & 0x8f) == 6)) {
          if ((uStack_e4 >> 6 & 1) == 0) {
            ppppppiStack_184 = ppppppiStack_e0;
          }
          else {
            ppppppiStack_184 = (int ******)*ppppppiStack_e0;
          }
        }
        ppppppiStack_1e4 = &pppppiStack_cc;
        pppppppiStack_1e8 = (int *******)0x1091f2ae;
        FUN_114a9220();
        ppppiStack_1d8 = ppppiStack_d0;
        if ((int *****)ppppiStack_d0 != pppppiStack_cc) {
          do {
            pppiVar1 = *ppppiStack_1d8;
            pppppppiStack_1e8 = (int *******)0x0;
            pppppppiStack_1ec = (int *******)0x0;
            pppppppiStack_1f0 = pppppppiStack_188;
            pppppppiVar14 = (int *******)pppiVar1[4];
            ppppppiStack_1cc = (int ******)0x0;
            pppppppiStack_1c8 = (int *******)0x0;
            pppppppiStack_1d4 = pppppppiVar14;
            FUN_11a98de0();
            pppiStack_1fc = (int ***)0x11dd9e8c;
            pppppppiStack_200 = (int *******)0x1091f305;
            FUN_104d15e0();
            pppppppiStack_1e0 = (int *******)FUN_111743b0();
            if (pppppppiStack_1e0 != (int *******)0x0) {
              if (DAT_123bbcc8 == 0 && DAT_123bbccc == 0) {
                pppiStack_1fc = (int ***)0x1091f333;
                _time64((__time64_t *)0x0);
              }
              pppiStack_1fc = (int ***)&DAT_11dd9e84;
              pppppppiStack_200 = (int *******)0x1091f349;
              FUN_104d1550();
              (*(code *)(*pppppppiStack_1e0)[0xe])();
              pppiStack_1fc = (int ***)0x11dd70f0;
              pppppppiStack_200 = (int *******)0x1091f366;
              FUN_104d1550();
            }
            pppiStack_1fc = (int ***)0x11dca658;
            pppppppiStack_200 = (int *******)0x1091f37c;
            FUN_104d1550();
            pppppppiStack_200 = (int *******)pppiVar1[2];
            pppppppiStack_204 = (int *******)0x11dca64c;
            pppppppiStack_208 = (int *******)0x1091f38f;
            FUN_104d1550();
            auStack_7c[0] = 0;
            ppiVar19 = (int **)auStack_7c;
            pppiStack_1fc = (int ***)0x1091f3b8;
            pppiStack_6c = (int ***)ppiVar19;
            ppiStack_68 = ppiVar19;
            FUN_100e5aa0();
            pppiStack_1fc = pppiStack_6c;
            pppppppiStack_200 = (int *******)0x11dca5f8;
            pppppppiStack_204 = (int *******)0x1091f3cf;
            FUN_104d1670();
            if ((pppiStack_6c != (int ***)auStack_80) && (pppiStack_6c != (int ***)0x0)) {
              pppiStack_1fc = pppiStack_6c;
              pppppppiStack_200 = (int *******)0x1091f3ee;
              FUN_10c3d5d0();
            }
            pppiStack_1fc = (int ***)auStack_80;
            auStack_80[0] = 0;
            pppppppiStack_200 = (int *******)0x1091f41a;
            pppiStack_70 = pppiStack_1fc;
            pppiStack_6c = pppiStack_1fc;
            FUN_100e5aa0();
            pppppppiStack_200 = (int *******)pppiStack_70;
            pppppppiStack_204 = (int *******)0x11dcaa28;
            pppppppiStack_208 = (int *******)0x1091f431;
            FUN_104d1670();
            if (((int ****)pppiStack_70 != &pppiStack_84) && (pppiStack_70 != (int ***)0x0)) {
              pppppppiStack_200 = (int *******)pppiStack_70;
              pppppppiStack_204 = (int *******)0x1091f450;
              FUN_10c3d5d0();
            }
            pppppppiStack_200 = &ppppppiStack_180;
            pppppppiStack_204 = (int *******)0x1091f460;
            (*(code *)(*pppiVar1[3])[1])();
            if (ppppppiStack_184 != ppppppiStack_180) {
              pppppiVar2 = *ppppppiStack_184;
              pppppppiStack_204 = (int *******)0x1091f476;
              pppppppiStack_204 = (int *******)(*(code *)(*pppppiVar2)[3])();
              pppppppiStack_208 = (int *******)0x11dd9ea4;
              FUN_104d1550();
              pppppppiStack_204 = (int *******)0x1091f491;
              pppppppiStack_204 = (int *******)(*(code *)(*pppppiVar2)[4])();
              pppppppiStack_208 = (int *******)0x11dd9e98;
              FUN_104d1550();
              pppppppiVar14 = pppppppiStack_1f0;
            }
            pppppppiStack_204 = (int *******)0x1;
            pppppppiStack_208 = (int *******)0x11dca610;
            FUN_104d1550();
            FUN_104d1550("totalStage",1);
            FUN_104d1550("groupType",pppiVar1[2]);
            FUN_104d1550("group_id",1);
            FUN_104d15e0("bTracked",1);
            FUN_104d15e0("canShared",1);
            pppppppiStack_208 = (int *******)&pppppppiStack_1c0;
            pppppppiStack_1c0 = (int *******)0x0;
            pppppppiStack_1bc = (int *******)0x0;
            piStack_16c = (int *)CONCAT31(piStack_16c._1_3_,((byte)ppppppiStack_1e4 & 0x8f) == 10);
            pppppppiStack_204 = (int *******)piStack_16c;
            cVar5 = (**(code **)((int)*pppppppiStack_1e8 + 0x10))(pppppppiStack_1e0,"other_info");
            if (cVar5 != '\0') {
              (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
              FUN_104d1550("farm_actuarialpoint",0);
              FUN_104d1550(&DAT_11dbfbc8,pppppppiVar14[0x14]);
              FUN_104d1550(&DAT_11dc0944,pppppppiVar14[0x1b]);
              FUN_104d1550("gold_bind",0);
              FUN_104d1550("hunter_exp",pppppppiVar14[0x14]);
              FUN_104d1550("hunter_fund",pppppppiVar14[0x15]);
              FUN_104d1550("hunter_contribution",0);
              FUN_104d1550("npcfriendvalue",0);
              FUN_104d1550("queststatus",0);
            }
            piStack_170 = (int *)0x0;
            piStack_16c = (int *)0x0;
            ppiStack_1dc = (int **)CONCAT31(ppiStack_1dc._1_3_,
                                            ((byte)&ppppppiStack_1cc & 0x8f) == 10);
            cVar5 = (*(code *)(*ppiVar19)[4])
                              (pppppppiStack_1f0,"task_awardList",&piStack_170,ppiStack_1dc);
            if (cVar5 != '\0') {
              (*(code *)(*ppppppiStack_180)[0x11])(ppppppiStack_178,0,0xffffffff);
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_190 = CONCAT31(uStack_190._1_3_,((byte)pppppppiStack_1c8 & 0x8f) == 10);
              cVar5 = (*(code *)(*ppppppiStack_1cc)[4])
                                (pcStack_1c4,"TASK_AWARD_CLASS_NAME",&uStack_b4,uStack_190);
              if ((cVar5 != '\0') && (((byte)pppppppiStack_a4 & 0x8f) == 6)) {
                pppppppiStack_1c8 = pppppppiStack_a0;
                if (((uint)pppppppiStack_a4 >> 6 & 1) != 0) {
                  pppppppiStack_1c8 = (int *******)*pppppppiStack_a0;
                }
                ppppppiStack_c0 = (int ******)0x0;
                uStack_bc = 0;
                FUN_10922c70(pppppppiVar14 + 0x18);
                if (pppppppiVar14 != (int *******)0x0) {
                  uVar16 = 0;
                  uVar12 = (uint)((int)pppppppiStack_198 + (3 - (int)pppppppiStack_19c)) >> 2;
                  if (pppppppiStack_198 < pppppppiStack_19c) {
                    uVar12 = 0;
                  }
                  pppppppiVar14 = pppppppiStack_19c;
                  if (uVar12 != 0) {
                    do {
                      ppppppiVar18 = *pppppppiVar14;
                      pppppppiStack_1ec = (int *******)FUN_10254130(*ppppppiVar18);
                      FUN_11a98de0(&piStack_c4,ppppppiStack_1cc,0,0);
                      if (pppiStack_1fc == (int ***)0x0) {
                        FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                        FUN_104d1550("slotid",10);
                        FUN_104d1550("ItemID",0);
                        FUN_104d1550(&DAT_11dbdc0c,0);
                      }
                      else {
                        FUN_104d1670("itemIconPathName",pppiStack_1fc[0x2d]);
                        FUN_104d1550("slotid",uVar16);
                        FUN_104d1550("ItemID",*ppppppiVar18);
                        FUN_104d1550(&DAT_11dbdc0c,ppppppiVar18[1]);
                        FUN_104d1550(&DAT_11dca14c,pppiStack_1fc[4]);
                      }
                      (**(code **)(*piStack_194 + 0x3c))(uStack_18c,&uStack_d4);
                      uVar16 = uVar16 + 1;
                      pppppppiVar14 = pppppppiVar14 + 1;
                    } while (uVar16 != uVar12);
                  }
                }
                if (pppppppiStack_19c != (int *******)0x0) {
                  FUN_10c3d5d0(pppppppiStack_19c);
                }
                FUN_104d7c10();
              }
              if (((uint)pppppppiStack_a4 >> 6 & 1) != 0) {
                (**(code **)(*piStack_a8 + 8))(&piStack_a8,pppppppiStack_a0);
              }
            }
            (*(code *)(*pppppppiStack_168)[0xf])(piStack_160,&pppppppiStack_208);
            if ((uStack_140 >> 6 & 1) != 0) {
              pppppppiStack_1ec = &ppppppiStack_144;
              pppppppiStack_1e8 = (int *******)piStack_13c;
              pppppppiStack_1f0 = (int *******)0x1091f925;
              (*(code *)(*ppppppiStack_144)[2])();
              ppppppiStack_144 = (int ******)0x0;
            }
            uStack_140 = 0;
            if (((uint)piStack_1a0 >> 6 & 1) != 0) {
              pppppppiStack_1ec = (int *******)&pppppppiStack_1a4;
              pppppppiStack_1e8 = pppppppiStack_19c;
              pppppppiStack_1f0 = (int *******)0x1091f958;
              (*(code *)(*pppppppiStack_1a4)[2])();
              pppppppiStack_1a4 = (int *******)0x0;
            }
            piStack_1a0 = (int *)0x0;
            if (pppppppiStack_168 != (int *******)0x0) {
              pppppppiStack_1e8 = pppppppiStack_168;
              pppppppiStack_1ec = (int *******)0x1091f976;
              FUN_10c3d5d0();
            }
            if (((uint)pppppppiStack_1c8 >> 6 & 1) != 0) {
              pppppppiStack_1ec = &ppppppiStack_1cc;
              pppppppiStack_1e8 = (int *******)pcStack_1c4;
              pppppppiStack_1f0 = (int *******)0x1091f996;
              (*(code *)(*ppppppiStack_1cc)[2])();
            }
            ppppiStack_1d8 = ppppiStack_1d8 + 1;
          } while ((int *****)ppppiStack_1d8 != pppppiStack_cc);
        }
        ppiStack_15c = (int **)0x0;
        local_158 = (int ******)0x0;
        local_154 = 0;
        pppppppiStack_1e8 = (int *******)0x1091f9d4;
        FUN_113f3640();
        pppppppiStack_1e8 = (int *******)0x1091f9db;
        iVar6 = FUN_1115abd0();
        if ((iVar6 != 0) &&
           (piVar15 = *(int **)(iVar6 + 0x2ab0), piStack_160 = piVar15, piVar15 != (int *)0x0)) {
          pppppppiStack_1c0 = appppppiStack_118;
          pppppppiStack_1bc = (int *******)0x5f7;
          pcStack_1c4 = (char *)0x1091fa09;
          pcStack_1c4 = (char *)(**(code **)(*piVar15 + 0x48))();
          pppppppiStack_1c8 = (int *******)0x1091fa16;
          FUN_10804b60();
          if (ppppppiStack_124 != (int ******)0x0) {
            pppppppiStack_1c8 = (int *******)ppppppiStack_124;
            ppppppiStack_1cc = (int ******)0x1091fa27;
            FUN_10c3d5d0();
          }
          piVar13 = piStack_13c;
          if (piStack_13c != piStack_138) {
            do {
              iVar6 = *piVar13;
              if ((iVar6 != 0) && (*(int *)(*(int *)(iVar6 + 8) + 0x10) == 0x80)) {
                pppppppiStack_1c8 = (int *******)0x0;
                ppppppiStack_1cc = (int ******)0x0;
                pppppppiStack_1d0 = pppppppiStack_168;
                pppppppiStack_1d4 = &ppppppiStack_184;
                ppppppiStack_184 = (int ******)0x0;
                ppppppiStack_180 = (int ******)0x0;
                ppppiStack_1d8 = (int ****)0x1091fa80;
                FUN_11a98de0();
                ppppiStack_1d8 = *(int *****)(*(int *)(iVar6 + 8) + 4);
                ppiStack_1dc = (int **)0x11dca658;
                pppppppiStack_1e0 = (int *******)0x1091fa96;
                FUN_104d1550();
                ppppiStack_1d8 = &pppiStack_84;
                ppiStack_1dc = (int **)0x1091faa8;
                FUN_114f4840();
                ppiStack_1dc = (int **)0x1091faaf;
                puVar7 = (undefined4 *)FUN_117c1280();
                ppiStack_1dc = (int **)*puVar7;
                pppppppiStack_1e0 = (int *******)0x11dbf940;
                ppppppiStack_1e4 = (int ******)0x1091fac1;
                FUN_104d1550();
                ppppppiStack_1e4 = *(int *******)(iVar6 + 0x14);
                pppppppiStack_1e8 = (int *******)0x11dca64c;
                pppppppiStack_1ec = (int *******)0x1091fad4;
                FUN_104d1550();
                ppiStack_1dc = (int **)auStack_78;
                auStack_78[0] = 0;
                pppppppiStack_1e0 = (int *******)0x1091fb00;
                ppiStack_68 = ppiStack_1dc;
                appiStack_64[0] = ppiStack_1dc;
                FUN_100e5aa0();
                pppppppiStack_1e0 = (int *******)ppiStack_68;
                ppppppiStack_1e4 = (int ******)0x11dca5f8;
                pppppppiStack_1e8 = (int *******)0x1091fb17;
                FUN_104d1670();
                if ((ppiStack_68 != (int **)auStack_7c) && (ppiStack_68 != (int **)0x0)) {
                  pppppppiStack_1e0 = (int *******)ppiStack_68;
                  ppppppiStack_1e4 = (int ******)0x1091fb36;
                  FUN_10c3d5d0();
                }
                pppppppiStack_1e0 = (int *******)0x1091fb40;
                FUN_114f4840();
                pppppppiStack_1e0 = (int *******)0x1091fb47;
                iVar8 = FUN_117c1760();
                if (iVar8 != 0) {
                  pppppppiStack_1e0 = (int *******)0x1091fb52;
                  FUN_114f4840();
                  pppppppiStack_1e0 = (int *******)0x1091fb59;
                  FUN_117c1760();
                }
                pppppppiStack_1e0 = appppppiStack_4c;
                ppppppiStack_1e4 = (int ******)0x1091fb71;
                iVar8 = FUN_100e5b40();
                ppppppiStack_1e4 = *(int *******)(iVar8 + 0x14);
                pppppppiStack_1e8 = (int *******)0x11dca5ec;
                pppppppiStack_1ec = (int *******)0x1091fb84;
                FUN_104d1670();
                if ((pppiStack_3c != &ppiStack_50) && (pppiStack_3c != (int ***)0x0)) {
                  ppppppiStack_1e4 = (int ******)pppiStack_3c;
                  pppppppiStack_1e8 = (int *******)0x1091fba3;
                  FUN_10c3d5d0();
                }
                ppppppiStack_1e4 = (int ******)0x1;
                pppppppiStack_1e8 = (int *******)0x11dca610;
                pppppppiStack_1ec = (int *******)0x1091fbb8;
                FUN_104d1550();
                pppppppiStack_1ec = (int *******)0x1;
                pppppppiStack_1f0 = (int *******)0x11dca604;
                FUN_104d1550();
                ppppppiStack_1e4 = *(int *******)(*(int *)(iVar6 + 8) + 0x10);
                if ((((ppppppiStack_1e4 == (int ******)0x10) ||
                     (ppppppiStack_1e4 == (int ******)0x20)) ||
                    (ppppppiStack_1e4 == (int ******)0x40)) ||
                   (ppppppiStack_1e4 == (int ******)0x80)) {
                  ppppppiStack_1e4 = (int ******)0x10;
                }
                pppppppiStack_1e8 = (int *******)0x11dca6d0;
                pppppppiStack_1ec = (int *******)0x1091fbff;
                FUN_104d1550();
                pppppppiStack_1ec = *(int ********)(*(int *)(iVar6 + 8) + 4);
                pppppppiStack_1f0 = (int *******)0x11dca6c4;
                FUN_104d1550();
                pppiStack_1fc = (int ***)0x1091fc2a;
                FUN_104d15e0();
                pppiStack_1fc = (int ***)(uint)*(byte *)(*(int *)(iVar6 + 8) + 0x81);
                pppppppiStack_200 = (int *******)0x11dca6dc;
                pppppppiStack_204 = (int *******)0x1091fc45;
                FUN_104d15e0();
                ppppiVar3 = *(int *****)(*(int *)(iVar6 + 8) + 4);
                pppppppiVar14 = pppppppiStack_1f0;
                ppppiStack_d0 = ppppiVar3;
                if (0 < (int)ppppiVar3) {
                  pppppppiStack_1e8 = (int *******)0x1091fc65;
                  ppppppiStack_1e4 = (int ******)ppppiVar3;
                  pppppppiVar9 = (int *******)(**(code **)(*piVar15 + 0x50))();
                  pppppppiStack_1e8 = (int *******)0x1091fc77;
                  local_150 = pppppppiVar9;
                  FUN_114e79d0();
                  pppppppiStack_1e8 = (int *******)0x1091fc7e;
                  iVar6 = FUN_114f16f0();
                  pppppppiVar17 = pppppppiStack_1a4;
                  pppppppiVar14 = pppppppiStack_1f0;
                  pppppppiVar4 = pppppppiStack_198;
                  pppppppiVar10 = pppppppiVar9;
                  if (iVar6 != 0) {
                    pppppppiStack_1e8 = (int *******)0x1091fc98;
                    ppppppiStack_1e4 = (int ******)ppppiVar3;
                    pppppppiVar17 = (int *******)FUN_114f3be0();
                    pppppppiVar14 = pppppppiStack_1f0;
                    pppppppiVar4 = pppppppiStack_198;
                    pppppppiVar10 = pppppppiVar17;
                  }
                  pppppppiStack_1f0 = pppppppiVar4;
                  pppppppiStack_1a4 = pppppppiVar17;
                  pppppppiStack_198 = pppppppiStack_1f0;
                  if (pppppppiVar10 != (int *******)0x0) {
                    pppppppiStack_1e8 = (int *******)&pppppppiStack_1c8;
                    pppppppiStack_1c8 = (int *******)0x0;
                    pcStack_1c4 = (char *)0x0;
                    uVar12 = (uint)ppppppiStack_144 >> 8;
                    ppppppiStack_144 =
                         (int ******)CONCAT31((int3)uVar12,((byte)pppppppiStack_19c & 0x8f) == 10);
                    ppppppiStack_1e4 = ppppppiStack_144;
                    pppppppiStack_1ec = (int *******)0x11dca758;
                    cVar5 = (**(code **)(*piStack_1a0 + 0x10))();
                    if (cVar5 != '\0') {
                      FUN_100e5b40();
                      pppiStack_1fc = (int ***)0x11dca5f8;
                      pppppppiStack_200 = (int *******)0x1091fd16;
                      FUN_104d1670();
                      pppiStack_1fc = appiStack_64;
                      if (((int ***)ppiStack_50 != pppiStack_1fc) && (ppiStack_50 != (int **)0x0)) {
                        pppiStack_1fc = (int ***)0x1091fd35;
                        FUN_10c3d5d0();
                        pppiStack_1fc = (int ***)extraout_ECX;
                      }
                      pppppppiStack_200 = *(int ********)(unaff_EDI + 4);
                      pppppppiStack_204 = (int *******)0x1091fd4d;
                      FUN_104d8d20();
                      pppiStack_1fc = (int ***)0x1091fd57;
                      puVar7 = (undefined4 *)FUN_117c1280();
                      pppiStack_1fc = (int ***)*puVar7;
                      pppppppiStack_200 = (int *******)0x11dca778;
                      pppppppiStack_204 = (int *******)0x1091fd69;
                      FUN_104d1550();
                      pppiStack_1fc = &ppiStack_68;
                      pppppppiStack_200 = (int *******)0x1091fd7c;
                      iVar6 = FUN_100e5b40();
                      pppppppiStack_200 = *(int ********)(iVar6 + 0x14);
                      pppppppiStack_204 = (int *******)0x11dca5f8;
                      pppppppiStack_208 = (int *******)0x1091fd8f;
                      FUN_104d1670();
                      if (((int ****)pppiStack_58 != &pppiStack_6c) &&
                         (pppiStack_58 != (int ***)0x0)) {
                        pppppppiStack_200 = (int *******)pppiStack_58;
                        pppppppiStack_204 = (int *******)0x1091fdae;
                        FUN_10c3d5d0();
                      }
                      if (pppppppiVar9 == (int *******)0x0) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_200 = (int *******)pppppppiVar9[5];
                      }
                      pppppppiStack_204 = (int *******)0x11dca76c;
                      pppppppiStack_208 = (int *******)0x1091fdcc;
                      FUN_104d1550();
                      pppppppiVar14 = pppppppiStack_1c0;
                      pppppppiStack_200 = (int *******)0x1091fdde;
                      iVar6 = FUN_10804c90();
                      if ((iVar6 == 0) || (**(int **)(iVar6 + 4) < 2)) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_200 = (int *******)0x1;
                      }
                      pppppppiStack_204 = (int *******)0x11dca808;
                      pppppppiStack_208 = (int *******)0x1091fe00;
                      FUN_104d15e0();
                      pppppppiStack_200 =
                           (int *******)(uint)(*(char *)(pppppppiVar14 + 0x20) != '\0');
                      pppppppiStack_204 = (int *******)0x11dca830;
                      pppppppiStack_208 = (int *******)0x1091fe22;
                      FUN_104d15e0();
                      pppppppiStack_200 = (int *******)0x1091fe3e;
                      iVar6 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))
                                        ();
                      pppppppiVar14 = pppppppiVar14 + 0x13;
                      pppppppiStack_200 = (int *******)0x1091fe4a;
                      pppppppiStack_1c8 = (int *******)FUN_10804980();
                      if (pppppppiStack_1c8 == (int *******)0x0) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_1f0 = (int *******)0x0;
                        if (iVar6 != 0) {
                          pppppppiStack_200 = (int *******)&pppppppiStack_1f0;
                          pppppppiStack_204 = (int *******)0x0;
                          pppppppiStack_208 = (int *******)0x0;
                          uVar11 = CPlayer__GetHuntRankOrCount(pppppppiStack_1c8[1],0);
                          FUN_1185f2e0(uVar11);
                        }
                        pppppppiStack_200 =
                             (int *******)
                             (int)((float)(int)pppppppiStack_1c8[2] * (float)pppppppiStack_1f0);
                      }
                      pppppppiStack_204 = (int *******)0x11dca81c;
                      pppppppiStack_208 = (int *******)0x1091feb0;
                      FUN_104d1550();
                      pppppppiStack_200 = (int *******)0x19;
                      pppppppiStack_208 = (int *******)0x1091febb;
                      pppppppiStack_204 = pppppppiVar14;
                      pppppppiStack_1c8 = (int *******)FUN_10804cd0();
                      if (pppppppiStack_1c8 == (int *******)0x0) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_1f0 = (int *******)0x0;
                        if (iVar6 != 0) {
                          pppppppiStack_200 = (int *******)0x0;
                          pppppppiStack_204 = (int *******)&pppppppiStack_1f0;
                          pppppppiStack_208 = (int *******)0x0;
                          uVar11 = CPlayer__GetHuntRankOrCount(pppppppiStack_1c8[1],0);
                          FUN_1185f2e0(uVar11);
                        }
                        pppppppiStack_200 =
                             (int *******)
                             (int)((float)(int)pppppppiStack_1c8[2] * (float)pppppppiStack_1f0);
                      }
                      pppppppiStack_204 = (int *******)&DAT_11dbfbc8;
                      pppppppiStack_208 = (int *******)0x1091ff24;
                      FUN_104d1550();
                      pppppppiStack_200 = (int *******)0x18;
                      pppppppiStack_208 = (int *******)0x1091ff2f;
                      pppppppiStack_204 = pppppppiVar14;
                      pppppppiStack_1ec = (int *******)FUN_10804940();
                      if (pppppppiStack_1ec == (int *******)0x0) {
                        pppppppiStack_200 = (int *******)0x0;
                        pppppppiStack_204 = (int *******)&DAT_11dc0944;
                        pppppppiStack_208 = (int *******)0x1091ffce;
                        FUN_104d1550();
                        pppppppiStack_208 = (int *******)0x0;
                      }
                      else {
                        pcStack_1c4 = (char *)0x0;
                        pppppppiStack_1f0 = (int *******)0x0;
                        if (iVar6 != 0) {
                          pppppppiStack_200 = (int *******)0x0;
                          pppppppiStack_204 = (int *******)0x0;
                          pppppppiStack_208 = (int *******)&pppppppiStack_1f0;
                          uVar11 = CPlayer__GetHuntRankOrCount(pppppppiStack_1ec[1],&pcStack_1c4);
                          FUN_1185f2e0(uVar11);
                        }
                        pppppppiStack_200 =
                             (int *******)
                             (int)((float)(int)pppppppiStack_1ec[2] * (float)pppppppiStack_1f0);
                        pppppppiStack_204 = (int *******)&DAT_11dc0944;
                        pppppppiStack_208 = (int *******)0x1091ffa3;
                        FUN_104d1550();
                        pppppppiStack_208 =
                             (int *******)
                             (int)((float)(int)pppppppiStack_1ec[3] * (float)pcStack_1c4);
                      }
                      FUN_104d1550("gold_bind");
                      pppppppiStack_200 = (int *******)0x21;
                      pppppppiStack_208 = (int *******)0x1091ffeb;
                      pppppppiStack_204 = pppppppiVar14;
                      iVar6 = FUN_108049c0();
                      if (iVar6 == 0) {
                        pppppppiStack_200 = (int *******)0x0;
                        pppppppiStack_204 = (int *******)0x11dca7d0;
                        pppppppiStack_208 = (int *******)0x10920018;
                        FUN_104d1550();
                        pppppppiStack_208 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_200 = *(int ********)(iVar6 + 8);
                        pppppppiStack_204 = (int *******)0x11dca7d0;
                        pppppppiStack_208 = (int *******)0x10920007;
                        FUN_104d1550();
                        pppppppiStack_208 = *(int ********)(iVar6 + 0xc);
                      }
                      FUN_104d1550("hunter_fund");
                      pppppppiStack_200 = (int *******)0x21;
                      pppppppiStack_208 = (int *******)0x10920035;
                      pppppppiStack_204 = pppppppiVar14;
                      iVar6 = FUN_108049c0();
                      if (iVar6 == 0) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_200 = *(int ********)(iVar6 + 4);
                      }
                      pppppppiStack_204 = (int *******)0x11dca7e8;
                      pppppppiStack_208 = (int *******)0x10920053;
                      FUN_104d1550();
                      pppppppiStack_200 = (int *******)0x1092005d;
                      iVar6 = FUN_10804a00();
                      if (iVar6 == 0) {
                        pppppppiStack_200 = (int *******)0x0;
                      }
                      else {
                        pppppppiStack_200 = *(int ********)(iVar6 + 8);
                      }
                      pppppppiStack_204 = (int *******)0x11dca87c;
                      pppppppiStack_208 = (int *******)0x10920078;
                      FUN_104d1550();
                      pppppppiVar17 = pppppppiStack_1c0;
                      pppppppiStack_200 = (int *******)&pppiStack_6c;
                      pppppppiStack_204 = (int *******)0x1092008f;
                      iVar6 = FUN_100e5b40();
                      pppppppiStack_204 = *(int ********)(iVar6 + 0x14);
                      pppppppiStack_208 = (int *******)0x11dca8ac;
                      FUN_104d1670();
                      if (((int ****)pppiStack_5c != &pppiStack_70) &&
                         (pppiStack_5c != (int ***)0x0)) {
                        pppppppiStack_204 = (int *******)pppiStack_5c;
                        pppppppiStack_208 = (int *******)0x109200c1;
                        FUN_10c3d5d0();
                      }
                      pppppppiStack_204 = (int *******)(uint)(piStack_16c != (int *)0x0);
                      pppppppiStack_208 = (int *******)0x11dca76c;
                      FUN_104d1550();
                    }
                    pppppppiStack_b8 = (int *******)0x0;
                    uStack_b4 = 0;
                    local_158 = (int ******)
                                CONCAT31(local_158._1_3_,((byte)piStack_1ac & 0x8f) == 10);
                    pppiStack_1fc = (int ***)0x11dca784;
                    pppppppiStack_200 = (int *******)ppppppiStack_1a8;
                    pppppppiStack_204 = (int *******)0x10920133;
                    cVar5 = (**(code **)(*piVar13 + 0x10))();
                    if (cVar5 != '\0') {
                      pppppppiStack_204 = (int *******)0xffffffff;
                      pppppppiStack_208 = (int *******)0x0;
                      (**(code **)(*piStack_c8 + 0x44))(ppppppiStack_c0);
                      piStack_13c = (int *)0x0;
                      piStack_138 = (int *)0x0;
                      appppppiStack_118[0] =
                           (int ******)
                           CONCAT31(appppppiStack_118[0]._1_3_,((byte)ppppppiStack_1a8 & 0x8f) == 10
                                   );
                      pppppppiVar14 = pppppppiStack_1a4;
                      cVar5 = (**(code **)(*piStack_1ac + 0x10))
                                        (pppppppiStack_1a4,"TASK_AWARD_CLASS_NAME",&piStack_13c,
                                         appppppiStack_118[0]);
                      if ((cVar5 != '\0') && (((byte)local_148 & 0x8f) == 6)) {
                        ppppppiVar18 = ppppppiStack_144;
                        if ((local_148 >> 6 & 1) != 0) {
                          ppppppiVar18 = (int ******)*ppppppiStack_144;
                        }
                        uStack_bc = 0;
                        pppppppiStack_b8 = (int *******)0x0;
                        iVar6 = FUN_10804900(pppppppiVar17 + 0x13,0x1f);
                        if (iVar6 != 0) {
                          FUN_107ff120(iVar6 + 4);
                          pppppppiVar17 = (int *******)0x0;
                          ppppppiStack_1e4 = local_17c;
                          pppppppiStack_1e8 =
                               (int *******)
                               ((uint)((int)ppppppiStack_178 + (3 - (int)local_17c)) >> 2);
                          if (ppppppiStack_178 < local_17c) {
                            pppppppiStack_1e8 = (int *******)0x0;
                          }
                          if (pppppppiStack_1e8 != (int *******)0x0) {
                            do {
                              pppppiVar2 = *ppppppiStack_1e4;
                              FUN_11a98de0(&uStack_bc,ppppppiVar18,0,0);
                              if (pppppppiVar14 == (int *******)0x0) {
                                FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                                FUN_104d1550("slotid",10);
                                FUN_104d1550("ItemID",0);
                                FUN_104d1550(&DAT_11dbdc0c,0);
                              }
                              else {
                                FUN_104d1670("itemIconPathName",pppppppiVar14[0x2d]);
                                FUN_104d1550("slotid",pppppppiVar17);
                                uVar11 = (*(code *)(*pppppiVar2[1])[6])();
                                FUN_104d1550("ItemID",uVar11);
                                FUN_104d1550(&DAT_11dbdc0c,pppppiVar2[2]);
                                FUN_104d1550(&DAT_11dca14c,pppppppiVar14[4]);
                              }
                              (**(code **)(*piStack_f4 + 0x3c))(uStack_ec,&pppppiStack_cc);
                              pppppppiVar17 = (int *******)((int)pppppppiVar17 + 1);
                              ppppppiStack_1e4 = ppppppiStack_1e4 + 1;
                            } while (pppppppiVar17 != pppppppiStack_1e8);
                          }
                          pppppppiVar17 = pppppppiStack_1e0;
                          if (local_17c != (int ******)0x0) {
                            FUN_10c3d5d0(local_17c);
                            pppppppiVar17 = pppppppiStack_1e0;
                          }
                        }
                        FUN_104d7c10();
                      }
                      FUN_104d7c10();
                    }
                    pppppppiStack_208 = &ppppppiStack_88;
                    ppppppiStack_88 = (int ******)0x0;
                    pppiStack_84 = (int ***)0x0;
                    piStack_110 = (int *)CONCAT31(piStack_110._1_3_,
                                                  ((byte)pppppppiStack_1bc & 0x8f) == 10);
                    pppppppiStack_204 = (int *******)piStack_110;
                    cVar5 = (*(code *)(*pppppppiStack_1c0)[4])(unaff_EDI,"task_targets");
                    if (cVar5 != '\0') {
                      (*(code *)(*ppppppiStack_98)[0x11])(pppppppiStack_90,0,0xffffffff);
                      uStack_8c = 0;
                      ppppppiStack_88 = (int ******)0x0;
                      pppppppiStack_130 =
                           (int *******)
                           CONCAT31(pppppppiStack_130._1_3_,((byte)unaff_EDI & 0x8f) == 10);
                      piStack_1a0 = (int *)0x0;
                      pppppppiStack_19c = (int *******)0x0;
                      pppppppiStack_198 = (int *******)0x0;
                      cVar5 = (*(code *)(*pppppppiStack_1bc)[4])
                                        (unaff_ESI,"TASK_TARGET_VO_NAME",&uStack_8c,
                                         pppppppiStack_130);
                      if ((cVar5 != '\0') && (((byte)ppppppiStack_98 & 0x8f) == 6)) {
                        puVar7 = puStack_94;
                        if (((uint)ppppppiStack_98 >> 6 & 1) != 0) {
                          puVar7 = (undefined4 *)*puStack_94;
                        }
                        cVar5 = FUN_100e57c0(&DAT_11d9d32b);
                        if (cVar5 == '\0') {
                          if (pppppppiStack_1f0 == (int *******)0x0) goto LAB_109209df;
                          ppiStack_15c = (int **)0x0;
                          local_158 = (int ******)0x0;
                          FUN_11a98de0(&ppiStack_15c,puVar7,0,0);
                          FUN_104d1790("strTarget4",pppppppiVar17 + 5);
                          FUN_104d1550("nOpType",0x1f);
                          (**(code **)(*piStack_c4 + 0x3c))(uStack_bc,&piStack_16c);
                        }
                        else {
                          FUN_10920c00();
                          pppppiStack_cc = (int *****)0x0;
                          piStack_c8 = (int *)0x0;
                          piVar15 = piVar13;
                          if (piVar13 != piStack_1ac) {
                            do {
                              FUN_11a98de0(&pppppiStack_cc,puVar7,0,0);
                              if ((piVar15[0x3a] == 3) && (piVar15[0x34] != 4)) {
                                if (piVar15[6] == piVar15[7]) {
                                  FUN_104d1550("nTargetID1",*piVar15);
                                  FUN_104d1550("nTargetID2",piVar15[1]);
                                  FUN_104d1550("nTargetID3",piVar15[2]);
                                  FUN_104d1550("nTargetID4",piVar15[3]);
                                  FUN_104d1550("nTargetID5",piVar15[4]);
                                  FUN_104d1670("strTarget1",piVar15[0xd]);
                                  FUN_104d1670("strTarget2",piVar15[0x13]);
                                  FUN_104d1670("strTarget3",piVar15[0x19]);
                                  FUN_104d1670("strTarget4",piVar15[0x1f]);
                                  FUN_104d1670("strTarget5",piVar15[0x25]);
                                  FUN_104d1550("nOpType",piVar15[5]);
                                  FUN_104d1550("nCurCount",piVar15[6]);
                                  FUN_104d1550("nMaxCount",piVar15[7]);
                                  FUN_104d1550(&DAT_11dca874,0);
                                }
                                else if (piVar15[6] < piVar15[7]) {
                                  FUN_104d1550("nTargetID1",*piVar15);
                                  FUN_104d1550("nTargetID2",piVar15[1]);
                                  FUN_104d1550("nTargetID3",piVar15[2]);
                                  FUN_104d1550("nTargetID4",piVar15[3]);
                                  FUN_104d1550("nTargetID5",piVar15[4]);
                                  FUN_104d1670("strTarget1",piVar15[0xd]);
                                  FUN_104d1670("strTarget2",piVar15[0x13]);
                                  FUN_104d1670("strTarget3",piVar15[0x19]);
                                  FUN_104d1670("strTarget4",piVar15[0x1f]);
                                  FUN_104d1670("strTarget5",piVar15[0x25]);
                                  FUN_104d1550("nOpType",piVar15[5]);
                                  FUN_104d1550("nCurCount",piVar15[6]);
                                  FUN_104d1550("nMaxCount",piVar15[7]);
                                  FUN_104d1550(&DAT_11dca874,0);
                                  (**(code **)(*piStack_c4 + 0x3c))(uStack_bc,auStack_dc);
                                  break;
                                }
                              }
                              FUN_104d1550("nTargetID1",*piVar15);
                              FUN_104d1550("nTargetID2",piVar15[1]);
                              FUN_104d1550("nTargetID3",piVar15[2]);
                              FUN_104d1550("nTargetID4",piVar15[3]);
                              FUN_104d1550("nTargetID5",piVar15[4]);
                              FUN_104d1670("strTarget1",piVar15[0xd]);
                              FUN_104d1670("strTarget2",piVar15[0x13]);
                              FUN_104d1670("strTarget3",piVar15[0x19]);
                              FUN_104d1670("strTarget4",piVar15[0x1f]);
                              FUN_104d1670("strTarget5",piVar15[0x25]);
                              FUN_104d1550("nOpType",piVar15[5]);
                              FUN_104d1550("nCurCount",piVar15[6]);
                              FUN_104d1550("nMaxCount",piVar15[7]);
                              FUN_104d1550(&DAT_11dca874,0);
                              (**(code **)(*piStack_c4 + 0x3c))(uStack_bc,auStack_dc);
                              piVar15 = piVar15 + 0x3b;
                            } while (piVar15 != piStack_1ac);
                          }
                        }
                        FUN_104d7c10();
                      }
LAB_109209df:
                      FUN_104d7c10();
                      FUN_104f9a70();
                    }
                    (*(code *)(*local_158)[0xf])(local_150,&pppppppiStack_1d0);
                    FUN_104d7c10();
                    FUN_104d7c10();
                    FUN_104d7c10();
                    FUN_104d7c10();
                    piVar15 = piStack_16c;
                    goto LAB_10920a3e;
                  }
                }
                pppppppiStack_1f0 = pppppppiVar14;
                ppppppiStack_1e4 = (int ******)0x10920bc5;
                FUN_104d7c10();
                goto LAB_10920ae2;
              }
LAB_10920a3e:
              piVar13 = piVar13 + 1;
            } while (piVar13 != piStack_138);
          }
          pppppppiStack_a4 = (int *******)0x0;
          pppppppiStack_a0 = (int *******)0x3;
          uStack_9c = 0;
          pppppppiStack_1c8 = (int *******)(uint)(((byte)piStack_160 & 0x8f) == 10);
          ppppppiStack_1cc = (int ******)0x1;
          pppppppiStack_1d0 = (int *******)&pppppppiStack_a4;
          pppppppiStack_1d4 = (int *******)0x11dd9eb0;
          ppppiStack_1d8 = (int ****)0x0;
          ppiStack_1dc = ppiStack_15c;
          pppppppiStack_1e0 = (int *******)0x10920aa3;
          (**(code **)(*piStack_164 + 0x18))();
          if (((uint)puStack_94 >> 6 & 1) != 0) {
            pppppppiStack_1c0 = &ppppppiStack_98;
            pppppppiStack_1bc = pppppppiStack_90;
            pcStack_1c4 = (char *)0x10920acc;
            (*(code *)(*ppppppiStack_98)[2])();
            ppppppiStack_98 = (int ******)0x0;
          }
          puStack_94 = (undefined4 *)0x0;
LAB_10920ae2:
          if (pppppppiStack_130 != (int *******)0x0) {
            pppppppiStack_1bc = pppppppiStack_130;
            pppppppiStack_1c0 = (int *******)0x10920af3;
            FUN_10c3d5d0();
          }
        }
        if (pppppppiStack_a4 != (int *******)0x0) {
          pppppppiStack_1bc = pppppppiStack_a4;
          pppppppiStack_1c0 = (int *******)0x10920b07;
          FUN_10c3d5d0();
        }
        if ((uStack_bc >> 6 & 1) != 0) {
          pppppppiStack_1c0 = &ppppppiStack_c0;
          pppppppiStack_1bc = pppppppiStack_b8;
          pcStack_1c4 = (char *)0x10920b33;
          (*(code *)(*ppppppiStack_c0)[2])();
          ppppppiStack_c0 = (int ******)0x0;
        }
        uStack_bc = 0;
        if ((uStack_fc >> 6 & 1) != 0) {
          pppppppiStack_1c0 = &ppppppiStack_100;
          pppppppiStack_1bc = pppppppiStack_f8;
          pcStack_1c4 = (char *)0x10920b72;
          (*(code *)(*ppppppiStack_100)[2])();
          ppppppiStack_100 = (int ******)0x0;
        }
        uStack_fc = 0;
      }
    }
  }
  if ((local_154 >> 6 & 1) != 0) {
    pppppppiStack_1c0 = &local_158;
    pppppppiStack_1bc = local_150;
    pcStack_1c4 = (char *)0x10920ba5;
    (*(code *)(*local_158)[2])();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10924360 @ 10924360  size=596 ===== */
// strings:
//   "GetSystemShortcutData"
//   "ProcessSystemWidget"
//   "ReqCatTicketData"
//   "ReqFetchHuntCredit"
//   "GetHuntCreditData"
//   "GetKeyString"
//   "ReqBuyExpLimit"
//   "IsItemHasUnuseEffect"
//   "nActionBarGiftPackVisible"
//   "nActionBarBangBangVisible"
//   "nActionBarOperationActivityVisible"
//   "nActionBarExchangeVisible"
//   "nActionBarMailVisible"

/* [RE-AUTO c0]
   strings:
     ""GetSystemShortcutData""
     ""ProcessSystemWidget""
     ""ReqCatTicketData""
     ""ReqFetchHuntCredit""
     ""GetHuntCreditData""
     ""GetKeyString""
     ""ReqBuyExpLimit""
     ""IsItemHasUnuseEffect""
     ""nActionBarGiftPackVisible""
     ""nActionBarBangBangVisible"" */

void FUN_10924360(void)

{
  int iVar1;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined **ppuStack_5c;
  code *pcStack_58;
  undefined ***pppuStack_54;
  char *pcStack_50;
  code *pcStack_4c;
  int **ppiStack_48;
  code *pcStack_44;
  undefined **ppuStack_38;
  code *pcStack_34;
  undefined1 auStack_2c [12];
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    pcStack_44 = (code *)in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    local_18 = pcStack_44;
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      ppiStack_48 = &local_20;
      pcStack_4c = (code *)0x109243b7;
      (**(code **)(*local_20 + 4))();
    }
    pcStack_44 = FUN_10924af0;
    ppiStack_48 = (int **)0x11dda144;
    pcStack_4c = (code *)0x109243cf;
    FUN_104d13b0();
    pcStack_4c = FUN_10924ee0;
    pcStack_50 = "ProcessSystemWidget";
    pppuStack_54 = (undefined ***)0x109243e4;
    FUN_104d13b0();
    pppuStack_54 = (undefined ***)FUN_10925180;
    pcStack_58 = (code *)0x11dda174;
    ppuStack_5c = (undefined **)0x109243f9;
    FUN_104d13b0();
    ppuStack_5c = (undefined **)FUN_109253f0;
    FUN_104d13b0("ReqFetchHuntCredit");
    FUN_104d13b0("GetHuntCreditData",FUN_10925200);
    FUN_104d13b0("GetKeyString",FUN_109255e0);
    FUN_104d13b0("ReqBuyExpLimit",FUN_109256e0);
    FUN_104d13b0("IsItemHasUnuseEffect",FUN_10925f70);
    pcStack_44 = (code *)0x1092446a;
    iVar1 = FUN_11727ff0();
    pcStack_44 = *(code **)(iVar1 + 0x3c);
    ppiStack_48 = (int **)0x11dda074;
    pcStack_4c = (code *)0x1092447d;
    FUN_104d1550();
    pcStack_4c = (code *)0x10924482;
    iVar1 = FUN_11727ff0();
    pcStack_4c = *(code **)(iVar1 + 0x40);
    pcStack_50 = "nActionBarBangBangVisible";
    pppuStack_54 = (undefined ***)0x10924495;
    FUN_104d1550();
    pppuStack_54 = (undefined ***)0x1092449a;
    iVar1 = FUN_11727ff0();
    pppuStack_54 = *(undefined ****)(iVar1 + 0x44);
    pcStack_58 = (code *)0x11dda0a8;
    ppuStack_5c = (undefined **)0x109244ad;
    FUN_104d1550();
    ppuStack_5c = (undefined **)0x109244b2;
    iVar1 = FUN_11727ff0();
    ppuStack_5c = *(undefined ***)(iVar1 + 0x48);
    FUN_104d1550("nActionBarExchangeVisible");
    iVar1 = FUN_11727ff0();
    FUN_104d1550("nActionBarMailVisible",*(undefined4 *)(iVar1 + 0x4c));
    pcStack_44 = (code *)0x109244f9;
    iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if (iVar1 != 0) {
      pcStack_4c = (code *)0x1;
      pcStack_44 = (code *)0x0;
      ppiStack_48 = (int **)0x0;
      pppuStack_54 = &ppuStack_38;
      pcStack_50 = (char *)0xffffffff;
      pcStack_58 = (code *)0xffffffff;
      ppuStack_5c = (undefined **)0xffffffff;
      ppuStack_38 = &PTR_FUN_11dda304;
      pcStack_34 = FUN_10925ab0;
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))(auStack_2c,0x9c8);
      ppuStack_5c = &PTR_FUN_11dda304;
      pcStack_58 = FUN_10925ab0;
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x1c))
                (&pcStack_50,0x9c9,0xffffffff,0xffffffff,&ppuStack_5c,0xffffffff,1,0,0);
    }
    if ((local_1c >> 6 & 1) != 0) {
      ppiStack_48 = &local_20;
      pcStack_44 = (code *)local_18;
      pcStack_4c = (code *)0x109245ac;
      (**(code **)(*local_20 + 8))();
    }
  }
  return;
}



/* ===== FUN_10929840 @ 10929840  size=626 ===== */
// strings:
//   "InitModelPersonal"
//   "InitModelGroup"
//   "InitModelPvpHunterBox"
//   "InitModelPvpFactionPlayers"

/* [RE-AUTO c0]
   strings:
     ""InitModelPersonal""
     ""InitModelGroup""
     ""InitModelPvpHunterBox""
     ""InitModelPvpFactionPlayers"" */

void __fastcall FUN_10929840(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  code *pcStack_74;
  undefined *puStack_70;
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
  pppcStack_30 = (code ***)0x11dda4e0;
  pppcStack_34 = (code ***)0x10929874;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10929b60;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10929885;
  FUN_1092c420();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1092989b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dda502;
  pppcStack_40 = (code ***)0x11dda4f4;
  pppcStack_44 = (code ***)0x109298bb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10929ea0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109298cc;
  FUN_1092c420();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x109298e2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dda471;
  ppcStack_50 = (code **)0x11dda45c;
  ppcStack_54 = (code **)0x10929902;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  ppcStack_54 = (code **)FUN_1092ac90;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10929913;
  FUN_1092c420();
  if ((pppcStack_40 != &ppcStack_54) && (pppcStack_40 != (code ***)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x10929929;
    FUN_10c3d5d0();
  }
  pppcStack_44 = &ppcStack_54;
  pppcStack_5c = (code ***)0x11dda48e;
  ppcStack_60 = (code **)0x11dda474;
  pcStack_64 = (code *)0x10929949;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_1092b8f0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  ppcStack_6c = (code **)0x1092995a;
  FUN_1092c420();
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    ppcStack_6c = ppcStack_50;
    puStack_70 = (undefined *)0x10929970;
    FUN_10c3d5d0();
  }
  ppcStack_54 = &pcStack_64;
  ppcStack_6c = (code **)&DAT_11dda440;
  puStack_70 = &DAT_11dda434;
  pcStack_74 = (code *)0x10929990;
  ppcStack_50 = ppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_1092c2d0;
  FUN_1092c420(&ppcStack_6c);
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
      FUN_1092c7e0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_1092c830();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_1092c880();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_1092c8d0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_03);
      FUN_10d17870();
      FUN_1092c920();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1092b8f0 @ 1092b8f0  size=192 ===== */
// strings:
//   "_PvpFaction_setPlayerBaseInfo"
//   "_PvpFaction_getPlayerFaction"
//   "_PvpFaction_setBoxInfo"
//   "_PvpFaction_reselectHunterBox"
//   "_PvpFaction_setFactionInfo"

/* [RE-AUTO c0]
   strings:
     ""_PvpFaction_setPlayerBaseInfo""
     ""_PvpFaction_getPlayerFaction""
     ""_PvpFaction_setBoxInfo""
     ""_PvpFaction_reselectHunterBox""
     ""_PvpFaction_setFactionInfo"" */

void FUN_1092b8f0(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("_PvpFaction_setPlayerBaseInfo",FUN_1092ba00);
    FUN_104d13b0("_PvpFaction_getPlayerFaction",FUN_1092bbc0);
    FUN_104d13b0("_PvpFaction_setBoxInfo",FUN_1092bc60);
    FUN_104d13b0("_PvpFaction_reselectHunterBox",FUN_1092be30);
    FUN_104d13b0("_PvpFaction_setFactionInfo",FUN_1092be80);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



