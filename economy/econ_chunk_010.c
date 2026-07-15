/* ===== FUN_1099a1f0 @ 1099a1f0  size=624 ===== */
// calls: data::QuenchBillMo
// strings:
//   "iCostMoney"
//   "iCurrentMoney"
//   "iMaterialA"
//   "iMaterialACount"

/* [RE-AUTO c0]
   calls: data::QuenchBillMo
   strings:
     ""iCostMoney""
     ""iCurrentMoney""
     ""iMaterialA""
     ""iMaterialACount"" */

void FUN_1099a1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  char cStack_51;
  undefined4 uStack_50;
  undefined4 local_4c;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [40];
  
  local_40 = (int *)0x0;
  local_3c = param_4[1];
  local_34 = param_4[3];
  local_38 = param_4[2];
  local_30 = param_4[4];
  if ((local_3c >> 6 & 1) != 0) {
    local_40 = (int *)*param_4;
    (**(code **)(*local_40 + 4))(&local_40,local_38);
  }
  if (((param_4[7] & 0x8f) == 3) || (uVar8 = 0xdeadbeaf, (param_4[7] & 0x8f) == 4)) {
    uVar8 = param_4[8];
  }
  if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
    local_4c = param_4[0xe];
  }
  else {
    local_4c = 0xdeadbeaf;
  }
  if (((byte)param_4[0x13] & 0x8f) == 2) {
    cVar6 = *(char *)(param_4 + 0x14);
  }
  else {
    cVar6 = '\0';
  }
  uStack_50 = CONCAT13(cVar6,(undefined3)uStack_50);
  if (((param_4[0x19] & 0x8f) == 3) || (uVar7 = 0xdeadbeaf, (param_4[0x19] & 0x8f) == 4)) {
    uVar7 = param_4[0x1a];
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar3 != 0) {
      iVar3 = FUN_113f9bb0(uVar8,local_4c);
      if (iVar3 != 0) {
        cVar2 = FUN_116698a0();
        if (cVar2 != '\0') {
          iVar4 = FUN_115c3cc0(iVar3,(uint)*(ushort *)(iVar3 + 0x1f8) + (uint)(cVar6 != '\0'));
          if ((iVar4 != 0) && (uVar7 < 10)) {
            data__QuenchBillMo(param_2);
            iVar4 = FUN_1025b060();
            iVar5 = FUN_1025b060();
            if (cStack_51 == '\0') {
              FUN_104d1550("iCurrentMoney",iVar5 + iVar4);
              FUN_104d1550("iCostMoney",0);
              FUN_104d1550("iMaterialA",*(undefined4 *)(uStack_50 + 0x80));
              uVar8 = *(undefined4 *)(iVar3 + 0x214);
            }
            else {
              FUN_104d1550("iCostMoney",*(undefined4 *)(uStack_50 + 0x58 + uVar7 * 4));
              FUN_104d1550("iCurrentMoney",iVar5 + iVar4);
              FUN_104d1550("iMaterialA",*(undefined4 *)(uStack_50 + 8 + uVar7 * 4));
              uVar8 = *(undefined4 *)(uStack_50 + 0x30 + uVar7 * 4);
            }
            FUN_104d1550("iMaterialACount",uVar8);
            FUN_104d12b0(&DAT_11de0b50,auStack_2c);
            FUN_10999c80();
          }
        }
      }
    }
  }
  if ((local_3c >> 6 & 1) != 0) {
    (**(code **)(*local_40 + 8))(&local_40,local_38);
  }
  return;
}



/* ===== data::QuenchEffectMo_1099afa0 @ 1099afa0  size=1106 ===== */
// strings:
//   "mh.data::QuenchEffectMo"
//   "iPoint"
//   "mh.data::QuenchEffectPropertyMo"
//   "iType"
//   "iValue"
//   "strName"
//   "arrProperty"

/* [RE-AUTO c3]
   id: data::QuenchEffectMo
   strings:
     ""mh.data::QuenchEffectMo""
     ""iPoint""
     ""mh.data::QuenchEffectPropertyMo""
     ""iType""
     ""iValue""
     ""strName""
     ""arrProperty"" */

void data__QuenchEffectMo_1099afa0
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte unaff_BL;
  int *unaff_ESI;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_a4;
  undefined4 local_a0;
  int local_9c;
  int *local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int *local_88;
  undefined1 auStack_84 [4];
  int *piStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_5c [8];
  int iStack_54;
  int *piStack_4c;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  undefined1 auStack_2c [16];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_a4;
  local_9c = param_2;
  local_98 = (int *)0x0;
  local_94 = param_4[1];
  local_8c = param_4[3];
  local_90 = param_4[2];
  local_88 = (int *)param_4[4];
  if ((local_94 >> 6 & 1) != 0) {
    local_98 = (int *)*param_4;
    (**(code **)(*local_98 + 4))(&local_98,local_90);
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_a0 = param_4[8];
  }
  else {
    local_a0 = 0xdeadbeaf;
  }
  if (((param_4[0xd] & 0x8f) == 3) || (uVar6 = 0xdeadbeaf, (param_4[0xd] & 0x8f) == 4)) {
    uVar6 = param_4[0xe];
  }
  if (((byte)param_4[0x13] & 0x8f) == 2) {
    uStack_a4 = CONCAT13(*(undefined1 *)(param_4 + 0x14),(undefined3)uStack_a4);
  }
  else {
    uStack_a4 = uStack_a4 & 0xffffff;
  }
  if (((param_4[0x19] & 0x8f) == 3) || ((param_4[0x19] & 0x8f) == 4)) {
    iVar7 = param_4[0x1a];
  }
  else {
    iVar7 = -0x21524151;
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
     (piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))(), piVar3 != (int *)0x0)) {
    if (uStack_a4._3_1_ == '\0') {
      iVar5 = (**(code **)(*piVar3 + 0x56c))();
      piVar3 = (int *)(iVar5 + 0x16cc);
      iVar5 = 2;
      iVar4 = local_9c;
      do {
        if ((piVar3[-1] != 0) && (iVar5 + -2 == iVar7)) {
          iVar4 = piVar3[-1];
        }
        if ((*piVar3 != 0) && (iVar5 + -1 == iVar7)) {
          iVar4 = *piVar3;
        }
        if ((piVar3[1] != 0) && (iVar5 == iVar7)) {
          iVar4 = piVar3[1];
        }
        if ((piVar3[2] != 0) && (iVar5 + 1 == iVar7)) {
          iVar4 = piVar3[2];
        }
        if ((piVar3[3] != 0) && (iVar5 + 2 == iVar7)) {
          iVar4 = piVar3[3];
        }
        if ((piVar3[4] != 0) && (iVar5 + 3 == iVar7)) {
          iVar4 = piVar3[4];
        }
        piVar3 = piVar3 + 6;
        iVar1 = iVar5 + 4;
        iVar5 = iVar5 + 6;
        param_2 = local_9c;
      } while (iVar1 < 0x18);
    }
    else {
      iVar4 = FUN_113f9bb0(local_a0,uVar6);
    }
    if (((iVar4 != 0) && (cVar2 = FUN_116698a0(), cVar2 != '\0')) &&
       (iVar7 = FUN_115c3cc0(iVar4,*(undefined2 *)(iVar4 + 0x1f8)), iVar7 != 0)) {
      piStack_48 = (int *)0x0;
      uStack_44 = 0;
      iStack_30 = param_2;
      if (param_2 != 0) {
        FUN_11a98de0(&piStack_48,"mh.data::QuenchEffectMo",0,0);
      }
      FUN_104d1550("iPoint",0);
      piStack_80 = (int *)0x0;
      uStack_7c = 0;
      FUN_11a98a70(&piStack_80);
      piVar3 = (int *)(iVar7 + 0xb0);
      uStack_a4 = 10;
      do {
        if (0 < *piVar3) {
          local_a0 = FUN_1046c7c0(*piVar3);
          piStack_6c = (int *)0x0;
          uStack_68 = 0;
          iStack_54 = param_2;
          if (param_2 != 0) {
            FUN_11a98de0(&piStack_6c,"mh.data::QuenchEffectPropertyMo",0,0);
          }
          FUN_104d1550("iType",*piVar3);
          uVar6 = FUN_1166d9a0(*piVar3);
          FUN_104d1550("iValue",uVar6);
          if (uStack_a4 != 0) {
            puStack_1c = auStack_2c;
            auStack_2c[0] = 0;
            puStack_18 = puStack_1c;
            FUN_100e5aa0(puStack_1c);
            FUN_104d1670("strName",puStack_1c);
            if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_18);
            }
          }
          (**(code **)(*local_88 + 0x3c))(piStack_80,auStack_70);
          iStack_54 = 0;
          if ((uStack_68 >> 6 & 1) != 0) {
            (**(code **)(*piStack_6c + 8))(&piStack_6c,uStack_64);
          }
        }
        piVar3 = piVar3 + 4;
        uStack_a4 = uStack_a4 - 1;
      } while (uStack_a4 != 0);
      (**(code **)(*piStack_4c + 0x14))
                (uStack_44,"arrProperty",auStack_84,((byte)piStack_48 & 0x8f) == 10);
      (**(code **)(*unaff_ESI + 0x14))(uStack_a4,&DAT_11de0b60,auStack_5c,(unaff_BL & 0x8f) == 10);
      if ((uStack_7c >> 6 & 1) != 0) {
        (**(code **)(*piStack_80 + 8))(&piStack_80,uStack_78);
        piStack_80 = (int *)0x0;
      }
      uStack_7c = 0;
      iStack_30 = 0;
      if ((uStack_44 >> 6 & 1) != 0) {
        (**(code **)(*piStack_48 + 8))(&piStack_48,uStack_40);
      }
    }
  }
  if ((local_94 >> 6 & 1) != 0) {
    (**(code **)(*local_98 + 8))(&local_98,local_90);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1099e840 @ 1099e840  size=334 ===== */
// strings:
//   "_getMatchNodeList"
//   "_reqMatchNodeList"
//   "_reqMatchDetailDecs"
//   "_reqMatchStartMatch"
//   "_reqMatchQuickJoinTeam"
//   "_reqSaveCheckFlag"
//   "_canShowMsg"
//   "_reqMatchPlayerHornors"
//   "_reqMatchLevelInfo"
//   "_reqMatchRankRewardInfo"
//   "_getMatchRankReward"

/* [RE-AUTO c0]
   strings:
     ""_getMatchNodeList""
     ""_reqMatchNodeList""
     ""_reqMatchDetailDecs""
     ""_reqMatchStartMatch""
     ""_reqMatchQuickJoinTeam""
     ""_reqSaveCheckFlag""
     ""_canShowMsg""
     ""_reqMatchPlayerHornors""
     ""_reqMatchLevelInfo""
     ""_reqMatchRankRewardInfo"" */

void FUN_1099e840(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) &&
     (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("_getMatchNodeList",FUN_1099e990);
    FUN_104d13b0("_reqMatchNodeList",FUN_1099f570);
    FUN_104d13b0("_reqMatchDetailDecs",FUN_1099f610);
    FUN_104d13b0("_reqMatchStartMatch",FUN_109a0220);
    FUN_104d13b0("_reqMatchQuickJoinTeam",FUN_109a0300);
    FUN_104d13b0("_reqSaveCheckFlag",FUN_109a03f0);
    FUN_104d13b0("_canShowMsg",FUN_109a0530);
    FUN_104d13b0("_reqMatchPlayerHornors",FUN_1099f9b0);
    FUN_104d13b0("_reqMatchLevelInfo",FUN_1099fb50);
    FUN_104d13b0("_reqMatchRankRewardInfo",FUN_109a0760);
    FUN_104d13b0("_getMatchRankReward",FUN_109a0c90);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_1099fb50 @ 1099fb50  size=1731 ===== */
// strings:
//   "strGradeName"
//   "strClassName"
//   "strShowName"
//   "nSuccRate"
//   "nWinNum"
//   "nLoseNum"
//   "nTotalNum"
//   "nCurScore"
//   "nRemainScore"
//   "nRemainRewardCount"
//   "nLimitRewardCount"
//   "nLevelPicName"
//   "nMatchRank"

/* [RE-AUTO c0]
   strings:
     ""strGradeName""
     ""strClassName""
     ""strShowName""
     ""nSuccRate""
     ""nWinNum""
     ""nLoseNum""
     ""nTotalNum""
     ""nCurScore""
     ""nRemainScore""
     ""nRemainRewardCount"" */

void FUN_1099fb50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_64 [4];
  int *local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  int *piStack_20;
  int *piStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_64;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 4) {
    local_5c = param_4[1];
    local_58 = param_4[2];
    local_54 = param_4[3];
    local_50 = param_4[4];
    local_60 = (int *)0x0;
    if ((local_5c >> 6 & 1) == 0) {
      uVar4 = param_4[2];
    }
    else {
      local_60 = (int *)*param_4;
      (**(code **)(*local_60 + 4))(&local_60,param_4[2]);
      uVar4 = local_58;
    }
    if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
      fStack_40 = (float)param_4[8];
    }
    else {
      fStack_40 = -6.259818e+18;
    }
    if (((param_4[0x13] & 0x8f) == 3) || ((param_4[0x13] & 0x8f) == 4)) {
      iStack_44 = param_4[0x14];
    }
    else {
      iStack_44 = -0x21524151;
    }
    if ((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) ||
       (piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))(), uVar4 = local_58, piVar1 == (int *)0x0)) {
      if ((local_5c >> 6 & 1) != 0) {
        (**(code **)(*local_60 + 8))(&local_60,uVar4);
        FUN_11a89daa();
        return;
      }
      goto LAB_109a01cf;
    }
    iStack_38 = -1;
    iStack_34 = -1;
    iStack_3c = FUN_107d7930(iStack_44);
    if ((iStack_3c != 0) && (iVar2 = (**(code **)(*piVar1 + 0x388))(), iVar2 != 0)) {
      (**(code **)(*piVar1 + 0x388))(iStack_44);
      iVar3 = FUN_1156c6b0();
      iVar2 = *(int *)(*(int *)(iStack_3c + 0x24) + 0x68);
      if ((iVar2 == 7) || ((iVar2 == 8 || (iVar2 == 9)))) {
        if (iVar3 == 0) {
          iStack_38 = 0;
        }
        else {
          iStack_38 = FUN_1156c660(5);
        }
        iStack_34 = *(int *)(*(int *)(iStack_3c + 0x24) + 0x6c);
        iStack_38 = iStack_34 - iStack_38;
      }
    }
    if (fStack_40 == 1.4013e-45) {
      FUN_104d1670("strGradeName",&DAT_11d9d32b);
      FUN_104d1670("strClassName",&DAT_11d9d32b);
      FUN_104d1670("strShowName",&DAT_11d9d32b);
      FUN_104d1550("nSuccRate",0);
      FUN_104d1550("nWinNum",0);
      FUN_104d1550("nLoseNum",0);
      FUN_104d1550("nTotalNum",0);
      FUN_104d1550("nCurScore",0);
      FUN_104d1550("nRemainScore",0);
      FUN_104d1550("nRemainRewardCount",iStack_38);
      FUN_104d1550("nLimitRewardCount",iStack_34);
      FUN_104d1670("nLevelPicName",&DAT_11d9d32b);
      FUN_104d1550("nMatchRank",0xffffffff);
    }
    else if (fStack_40 == 2.8026e-45) {
      FUN_104d1670("strGradeName",&DAT_11d9d32b);
      FUN_104d1670("strClassName",&DAT_11d9d32b);
      FUN_104d1670("strShowName",&DAT_11d9d32b);
      FUN_104d1550("nSuccRate",0);
      FUN_104d1550("nWinNum",0);
      FUN_104d1550("nLoseNum",0);
      FUN_104d1550("nTotalNum",0);
      FUN_104d1550("nCurScore",0);
      FUN_104d1550("nRemainScore",0);
      FUN_104d1670("nLevelPicName",&DAT_11d9d32b);
      FUN_104d1550("nRemainRewardCount",iStack_38);
      FUN_104d1550("nLimitRewardCount",iStack_34);
      FUN_104d1550("nMatchRank",0xffffffff);
    }
    else if ((fStack_40 != 4.2039e-45) && (fStack_40 == 5.60519e-45)) {
      fStack_40 = 0.0;
      iStack_3c = 0;
      uStack_2c = 0;
      iStack_30 = 0;
      iVar2 = (**(code **)(*piVar1 + 0x4e4))();
      if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0x24), 0 < iVar3)) {
        iStack_3c = *(int *)(iVar2 + 0x1c);
        uStack_2c = *(undefined4 *)(iVar2 + 0x20);
        fStack_40 = (float)iStack_3c / (float)iVar3;
        iStack_30 = iVar3;
      }
      iVar2 = (**(code **)(*piVar1 + 0x4e4))();
      iStack_44 = *(int *)(iVar2 + 0xc);
      iVar2 = FUN_115b73e0(iStack_44);
      FUN_115b7350();
      iStack_28 = (iStack_44 / 100 + 1) * 100 - iStack_44;
      if (iVar2 != 0) {
        iVar2 = FUN_100e5b40(auStack_24);
        FUN_104d1670("strGradeName",*(undefined4 *)(iVar2 + 0x14));
        if ((piStack_14 != &iStack_28) && (piStack_14 != (int *)0x0)) {
          FUN_10c3d5d0(piStack_14);
        }
        iVar2 = FUN_100e5b40(&iStack_28);
        FUN_104d1670("strClassName",*(undefined4 *)(iVar2 + 0x14));
        if ((puStack_18 != &uStack_2c) && (puStack_18 != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_18);
        }
        iVar2 = FUN_100e5b40(&uStack_2c);
        FUN_104d1670("strShowName",*(undefined4 *)(iVar2 + 0x14));
        if ((piStack_1c != &iStack_30) && (piStack_1c != (int *)0x0)) {
          FUN_10c3d5d0(piStack_1c);
        }
        FUN_104d14d0("nSuccRate");
        FUN_104d1550("nWinNum",uStack_48);
        FUN_104d1550("nLoseNum",iStack_38);
        FUN_104d1550("nTotalNum",iStack_3c);
        FUN_104d1550("nCurScore",local_50);
        FUN_104d1550("nRemainScore",iStack_34);
        FUN_104d1550("nRemainRewardCount",iStack_44);
        FUN_104d1550("nLimitRewardCount",fStack_40);
        iVar2 = FUN_100e5b40(&iStack_30);
        FUN_104d1670("nLevelPicName",*(undefined4 *)(iVar2 + 0x14));
        if ((piStack_20 != &iStack_34) && (piStack_20 != (int *)0x0)) {
          FUN_10c3d5d0(piStack_20);
        }
        FUN_104d1550("nMatchRank",0xffffffff);
      }
    }
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
    }
  }
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 1;
LAB_109a01cf:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109a0760 @ 109a0760  size=1316 ===== */
// strings:
//   "MATCH_ENTRY_REWARD_ITEM_CLASSNAME"
//   "nLevel"
//   "nMedal"
//   "nItemId"
//   "nCountItem"
//   "arrItem"

/* [RE-AUTO c0]
   strings:
     ""MATCH_ENTRY_REWARD_ITEM_CLASSNAME""
     ""nLevel""
     ""nMedal""
     ""nItemId""
     ""nCountItem""
     ""arrItem"" */

void FUN_109a0760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  byte unaff_DI;
  int iVar6;
  int **ppiVar7;
  undefined4 uStack_ac;
  int *local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *piStack_94;
  int *piStack_8c;
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 *puStack_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int *piStack_28;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 1) {
    local_a8 = (int *)0x0;
    local_a4 = param_4[1];
    local_9c = param_4[3];
    local_a0 = param_4[2];
    local_98 = param_4[4];
    if ((local_a4 >> 6 & 1) != 0) {
      local_a8 = (int *)*param_4;
      (**(code **)(*local_a8 + 4))(&local_a8,local_a0);
    }
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
       ((piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))(), piVar3 != (int *)0x0 &&
        (iVar4 = (**(code **)(*piVar3 + 0x4e4))(), iVar4 != 0)))) {
      iStack_3c = FUN_115b7100(*(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x10));
      if (iStack_3c != 0) {
        ppiVar7 = &piStack_58;
        piStack_58 = (int *)0x0;
        uStack_54 = 0;
        piStack_8c = (int *)CONCAT31(piStack_8c._1_3_,((byte)local_a4 & 0x8f) == 10);
        uStack_ac = 0;
        piVar3 = piStack_8c;
        cVar2 = (**(code **)(*local_a8 + 0x10))
                          (local_a0,"MATCH_ENTRY_REWARD_ITEM_CLASSNAME",ppiVar7);
        if (((cVar2 != '\0') && (((byte)uStack_64 & 0x8f) == 6)) &&
           (piVar3 = piStack_60, (uStack_64 >> 6 & 1) != 0)) {
          piVar3 = (int *)*piStack_60;
        }
        uStack_48 = 0;
        uStack_44 = 0;
        FUN_11a98a70(&uStack_48);
        puVar1 = puStack_50;
        FUN_104d1550("nLevel",*puStack_50);
        FUN_104d1550("nMedal",puVar1[1]);
        piVar5 = puVar1 + 7;
        iVar4 = 5;
        do {
          if ((0 < piVar5[-5]) && (0 < *piVar5)) {
            local_9c = 0;
            local_98 = 0;
            FUN_11a98de0(&local_9c,ppiVar7,0,0);
            FUN_104d1550("nItemId",piVar5[-5]);
            FUN_104d1550("nCountItem",*piVar5);
            (**(code **)(*piStack_5c + 0x3c))(uStack_54,&uStack_ac);
            FUN_104d7c10();
          }
          piVar5 = piVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        (**(code **)(*piVar3 + 0x14))(unaff_ESI,"arrItem",auStack_4c,(unaff_DI & 0x8f) == 10);
        if ((uStack_34 >> 6 & 1) != 0) {
          (**(code **)(*piStack_38 + 8))(&piStack_38,uStack_30);
          piStack_38 = (int *)0x0;
        }
        uStack_34 = 0;
        if ((uStack_54 >> 6 & 1) != 0) {
          (**(code **)(*piStack_58 + 8))(&piStack_58,puStack_50);
          piStack_58 = (int *)0x0;
        }
        uStack_54 = 0;
        if ((local_a4 >> 6 & 1) != 0) {
          (**(code **)(*local_a8 + 8))(&local_a8,local_a0);
        }
        goto LAB_109a0c57;
      }
      iVar4 = FUN_1099e490(*(int *)(iVar4 + 0x30) / 100 + 2);
      if (iVar4 != 0) {
        ppiVar7 = &piStack_20;
        piStack_20 = (int *)0x0;
        uStack_1c = 0;
        piStack_8c = (int *)CONCAT31(piStack_8c._1_3_,((byte)local_a4 & 0x8f) == 10);
        uStack_ac = 0;
        piVar3 = piStack_8c;
        cVar2 = (**(code **)(*local_a8 + 0x10))
                          (local_a0,"MATCH_ENTRY_REWARD_ITEM_CLASSNAME",ppiVar7);
        if (((cVar2 != '\0') && (((byte)uStack_2c & 0x8f) == 6)) &&
           (piVar3 = piStack_28, (uStack_2c >> 6 & 1) != 0)) {
          piVar3 = (int *)*piStack_28;
        }
        uStack_80 = 0;
        uStack_7c = 0;
        FUN_11a98a70(&uStack_80);
        FUN_104d1550("nLevel",*(undefined4 *)(iVar4 + 0x34));
        FUN_104d1550("nMedal",*(undefined4 *)(iVar4 + 0x38));
        iVar6 = 5;
        piVar5 = (int *)(iVar4 + 0x50);
        do {
          if ((0 < piVar5[-5]) && (0 < *piVar5)) {
            local_9c = 0;
            local_98 = 0;
            FUN_11a98de0(&local_9c,ppiVar7,0,0);
            FUN_104d1550("nItemId",piVar5[-5]);
            FUN_104d1550("nCountItem",*piVar5);
            (**(code **)(*piStack_94 + 0x3c))(piStack_8c,&uStack_ac);
            FUN_104d7c10();
          }
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        (**(code **)(*piVar3 + 0x14))(unaff_ESI,"arrItem",auStack_84,(unaff_DI & 0x8f) == 10);
        if ((uStack_6c >> 6 & 1) != 0) {
          (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
          piStack_70 = (int *)0x0;
        }
        uStack_6c = 0;
        if ((uStack_1c >> 6 & 1) != 0) {
          (**(code **)(*piStack_20 + 8))(&piStack_20,uStack_18);
        }
      }
    }
    if ((local_a4 >> 6 & 1) != 0) {
      (**(code **)(*local_a8 + 8))(&local_a8,local_a0);
      return;
    }
  }
  else {
LAB_109a0c57:
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* ===== FUN_109a2a10 @ 109a2a10  size=167 ===== */
// strings:
//   "GetExchangeData"
//   "ReqExchangeReward"

/* [RE-AUTO c0]
   strings:
     ""GetExchangeData""
     ""ReqExchangeReward"" */

void FUN_109a2a10(void)

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
    FUN_104d13b0("GetExchangeData",FUN_109a2ac0);
    FUN_104d13b0("ReqExchangeReward",FUN_109a3300);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== data::QCoinRewardMo @ 109a36c0  size=51 ===== */
// strings:
//   "mh.data::QCoinRewardMo"

/* [RE-AUTO c3]
   id: data::QCoinRewardMo
   strings:
     ""mh.data::QCoinRewardMo"" */

undefined4 * __thiscall data__QCoinRewardMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::QCoinRewardMo",0,0);
  }
  return param_1;
}



/* ===== FUN_109a38a0 @ 109a38a0  size=467 ===== */
// strings:
//   "InitModel"
//   "IsActivityOpen"
//   "IsActivityRewardOpen"
//   "FetchActivityUserData"
//   "DrawReward"
//   "HasRewardUnDrawed"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""IsActivityOpen""
     ""IsActivityRewardOpen""
     ""FetchActivityUserData""
     ""DrawReward""
     ""HasRewardUnDrawed"" */

void FUN_109a38a0(void)

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
  pppcStack_34 = (code ***)0x109a38d4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109a43f0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109a38e5;
  FUN_109a46d0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109a38fb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de13fa;
  pppcStack_40 = (code ***)0x11de13ec;
  pppcStack_44 = (code ***)0x109a391b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109a3a80;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109a392c;
  FUN_109a46d0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109a3942;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de1410;
  pppcStack_50 = (code ***)0x11de13fc;
  pppcStack_54 = (code ***)0x109a3962;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109a3b80;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109a3973;
  FUN_109a46d0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109a3989;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de13a5;
  ppcStack_60 = (code **)0x11de1390;
  ppcStack_64 = (code **)0x109a39a9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_109a3d00;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109a39ba;
  FUN_109a46d0();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109a39d0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11ddfb3a;
  ppcStack_70 = (code **)0x11ddfb30;
  pcStack_74 = (code *)0x109a39f0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109a3c80;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x109a3a01;
  FUN_109a46d0();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x109a3a17;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11de13b9;
  pcStack_80 = "HasRewardUnDrawed";
  pcStack_84 = (code *)0x109a3a37;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109a4120;
  FUN_109a46d0(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109a3d00 @ 109a3d00  size=1048 ===== */
// calls: CActivityMgr::GetActivityState, data::QCoinRewardMo, CPet::SetName
// strings:
//   "strName"
//   "iNeedScore"
//   "iEntryId"
//   "iItemId"
//   "bCanDraw"
//   "bIsDraw"
//   "exchangeRate"
//   "arrayReward"
//   "point"

/* [RE-AUTO c0]
   calls: data::QCoinRewardMo
   strings:
     ""strName""
     ""iNeedScore""
     ""iEntryId""
     ""iItemId""
     ""bCanDraw""
     ""bIsDraw""
     ""exchangeRate""
     ""arrayReward""
     ""point"" */

void FUN_109a3d00(undefined4 param_1,int **param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int *unaff_EBX;
  int *unaff_ESI;
  int **unaff_EDI;
  int *piVar8;
  undefined1 *puStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  int iStack_cc;
  int **ppiStack_c8;
  int iStack_c4;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 *local_a8;
  int *local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int iStack_84;
  int *piStack_80;
  uint uStack_7c;
  int iStack_78;
  undefined1 auStack_70 [8];
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  undefined1 auStack_5c [16];
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int aiStack_40 [13];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_b4;
  local_9c = param_4[1];
  local_94 = param_4[3];
  local_90 = param_4[4];
  local_a8 = param_2;
  local_a0 = (int *)0x0;
  iStack_c4 = param_4[2];
  local_98 = iStack_c4;
  if ((local_9c >> 6 & 1) != 0) {
    local_a0 = (int *)*param_4;
    ppiStack_c8 = &local_a0;
    iStack_cc = 0x109a3d64;
    (**(code **)(*local_a0 + 4))();
  }
  iStack_c4 = 0x109a3d69;
  iStack_b4 = FUN_109a4440();
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) {
    iStack_c4 = 0x109a3d9f;
    iVar3 = (**(code **)(*piVar5 + 0xb4))();
    if ((iVar3 != 0) && (iStack_64 = *(int *)(iVar3 + 0x2acc), iStack_64 != 0)) {
      iStack_c4 = 0x109a3dc0;
      iVar4 = FUN_109a4400();
      if (iVar4 != 0) {
        iStack_c4 = iStack_b4;
        ppiStack_c8 = (int **)0x109a3dd5;
        iStack_84 = CActivityMgr__GetActivityState();
        if (iStack_84 != 0) {
          iStack_c4 = iStack_b4;
          ppiStack_c8 = (int **)0x109a3dec;
          iVar4 = FUN_1122b9d0();
          iStack_68 = iVar4;
          if (iVar4 != 0) {
            iStack_b4 = iVar3 + 0x458;
            iStack_c4 = 1;
            ppiStack_c8 = &piStack_60;
            iStack_cc = 0x109a3e12;
            piVar5 = (int *)FUN_11348ac0();
            bVar2 = *piVar5 < DAT_120e8240;
            iStack_cc = 0x109a3e26;
            FUN_104fd340();
            iStack_cc = 1;
            if (bVar2) {
              piStack_d0 = &iStack_68;
              uStack_d4 = 0x109a3e7f;
              piVar5 = (int *)FUN_11348ac0();
              iStack_c4 = *piVar5;
              uStack_d4 = 0x109a3e8e;
              FUN_104fd340();
              unaff_EDI = param_2;
            }
            else {
              piStack_d0 = aiStack_40;
              uStack_d4 = 0x109a3e3d;
              piVar5 = (int *)FUN_11348ac0();
              uStack_d4 = 0x13d;
              iVar3 = *piVar5;
              puStack_d8 = auStack_70;
              piVar5 = (int *)FUN_11348ac0();
              iStack_cc = *piVar5 + iVar3;
              FUN_104fd340();
              FUN_104fd340();
            }
            piVar5 = &local_98;
            local_98 = 0;
            local_94 = 0;
            FUN_11a98a70(piVar5);
            iVar3 = 0;
            if (*(char *)(iVar4 + 0xad2) != '\0') {
              piVar8 = (int *)(iVar4 + 0xae9);
              do {
                if (*(char *)((int)piVar8 + -0x15) == '0') {
                  data__QCoinRewardMo(unaff_EDI);
                  uVar7 = (int)piVar8 + 0x26;
                  piStack_d0 = (int *)0x0;
                  CPet__SetName();
                  unaff_EDI = (int **)auStack_5c;
                  auStack_5c[0] = 0;
                  puStack_4c = unaff_EDI;
                  puStack_48 = unaff_EDI;
                  FUN_100e5aa0();
                  FUN_104d1670("strName",puStack_4c);
                  if (((int **)puStack_4c != &piStack_60) && ((int **)puStack_4c != (int **)0x0)) {
                    FUN_10c3d5d0(puStack_4c);
                  }
                  if (puStack_d8 != (undefined1 *)0x0) {
                    FUN_10c3da30(puStack_d8);
                  }
                  iVar4 = piVar8[-1];
                  iVar1 = *piVar8;
                  FUN_104d1550("iNeedScore",iVar4 + iVar1);
                  FUN_104d1550("iEntryId",*(undefined1 *)((int)piVar8 + -0x16));
                  FUN_104d1550("iItemId",*(undefined4 *)((int)piVar8 + -0x13));
                  FUN_104d15e0("bCanDraw",iVar4 + iVar1 <= (int)piVar5);
                  uStack_d4 = 0;
                  uVar6 = FUN_109a4440(*(undefined1 *)(iStack_ac + 5),
                                       *(undefined1 *)((int)piVar8 + -0x16),&uStack_d4);
                  FUN_11513b40(uVar6);
                  if ((uVar7 == 0) ||
                     (piVar5 = (int *)CONCAT31((int3)((uint)piVar5 >> 8),1),
                     uVar7 < (uint)(int)(short)piVar8[9])) {
                    piVar5 = (int *)((uint)piVar5 & 0xffffff00);
                  }
                  FUN_104d15e0("bIsDraw",piVar5);
                  (**(code **)(*unaff_EBX + 0x3c))(uStack_b0,&local_98);
                  FUN_104d1550("exchangeRate",*(undefined1 *)((int)piVar8 + -5));
                  FUN_109a3700();
                }
                iVar3 = iVar3 + 1;
                piVar8 = (int *)((int)piVar8 + 0x423);
              } while (iVar3 < (int)(uint)*(byte *)(iStack_84 + 0xad2));
            }
            uVar7 = (uint)(((byte)unaff_EBX & 0x8f) == 10);
            (**(code **)(*unaff_ESI + 0x14))(iStack_b4,"arrayReward",&local_9c,uVar7);
            FUN_104d1550("point",uVar7);
            if ((uStack_7c >> 6 & 1) != 0) {
              ppiStack_c8 = &piStack_80;
              iStack_c4 = iStack_78;
              iStack_cc = 0x109a40d4;
              (**(code **)(*piStack_80 + 8))();
              piStack_80 = (int *)0x0;
            }
            uStack_7c = 0;
          }
        }
      }
    }
  }
  if ((local_9c >> 6 & 1) != 0) {
    ppiStack_c8 = &local_a0;
    iStack_c4 = local_98;
    iStack_cc = 0x109a4101;
    (**(code **)(*local_a0 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109a4530 @ 109a4530  size=229 ===== */
// strings:
//   "QCoinReward"

/* [RE-AUTO c0]
   strings:
     ""QCoinReward"" */

undefined4 FUN_109a4530(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar2 + 0xb4))(), iVar4 != 0)) {
    iVar8 = iVar4;
  }
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x260fc) != 0)) {
    iVar8 = FUN_1122ba70();
    iVar8 = *(int *)(iVar8 + 8);
    iVar4 = FUN_1122ba70();
    if (iVar8 != iVar4) {
      do {
        pcVar7 = "QCoinReward";
        pbVar5 = (byte *)(*(int *)(iVar8 + 0x14) + 0x2d);
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_109a45c0:
            uVar6 = -(uint)bVar9 | 1;
            goto LAB_109a45c5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_109a45c0;
          pbVar5 = pbVar5 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_109a45c5:
        if (uVar6 == 0) {
          return *(undefined4 *)(iVar8 + 0x10);
        }
        iVar4 = *(int *)(iVar8 + 0xc);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar8 + 4);
          if (iVar8 == *(int *)(iVar4 + 0xc)) {
            do {
              iVar8 = iVar4;
              iVar4 = *(int *)(iVar8 + 4);
            } while (iVar8 == *(int *)(iVar4 + 0xc));
          }
          if (*(int *)(iVar8 + 0xc) != iVar4) {
            iVar8 = iVar4;
          }
        }
        else {
          for (iVar3 = *(int *)(iVar4 + 8); iVar8 = iVar4, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8))
          {
            iVar4 = iVar3;
          }
        }
        iVar4 = FUN_1122ba70();
      } while (iVar8 != iVar4);
    }
  }
  return 0;
}



/* ===== data::RewardItemMo @ 109a88b0  size=51 ===== */
// strings:
//   "mh.data::RewardItemMo"

/* [RE-AUTO c3]
   id: data::RewardItemMo
   strings:
     ""mh.data::RewardItemMo"" */

undefined4 * __thiscall data__RewardItemMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::RewardItemMo",0,0);
  }
  return param_1;
}



/* ===== FUN_109a8b00 @ 109a8b00  size=28 ===== */
// strings:
//   "iRewardID"

/* [RE-AUTO c0]
   strings:
     ""iRewardID"" */

void FUN_109a8b00(undefined4 param_1)

{
  FUN_104d1550("iRewardID",param_1);
  return;
}



/* ===== FUN_109a8b20 @ 109a8b20  size=28 ===== */
// strings:
//   "iRewardCount"

/* [RE-AUTO c0]
   strings:
     ""iRewardCount"" */

void FUN_109a8b20(undefined4 param_1)

{
  FUN_104d1550("iRewardCount",param_1);
  return;
}



/* ===== FUN_109a8bf0 @ 109a8bf0  size=1035 ===== */
// strings:
//   "InitModel"
//   "FetchActivityData"
//   "DrawReward"
//   "LightenStar"
//   "AnswerQuestion"
//   "RequestQuestion"
//   "GetQuestion"
//   "ResetDivination"
//   "FetchQuestData"
//   "AcceptTask"
//   "GiveUpTask"
//   "SubmitTask"
//   "RefreshTask"
//   "BuyDivination"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""FetchActivityData""
     ""DrawReward""
     ""LightenStar""
     ""AnswerQuestion""
     ""RequestQuestion""
     ""GetQuestion""
     ""ResetDivination""
     ""FetchQuestData""
     ""AcceptTask"" */

void FUN_109a8bf0(void)

{
  undefined1 *puStack_104;
  char *pcStack_100;
  undefined1 **ppuStack_fc;
  code ***pppcStack_f8;
  undefined1 *puStack_f4;
  undefined1 **ppuStack_f0;
  undefined1 ***pppuStack_ec;
  code ***pppcStack_e8;
  undefined1 **ppuStack_e4;
  undefined1 **ppuStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  undefined1 ***pppuStack_d4;
  undefined1 ***pppuStack_d0;
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
  undefined4 ***pppuStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  undefined4 ***pppuStack_84;
  undefined4 ***pppuStack_80;
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
  pppcStack_34 = (code ***)0x109a8c24;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109aa730;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109a8c35;
  FUN_109aaf40();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109a8c4b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddfbb1;
  pppcStack_40 = (code ***)0x11ddfba0;
  pppcStack_44 = (code ***)0x109a8c6b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)data__RewardItemMo_109a9190;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109a8c7c;
  FUN_109aaf40();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109a8c92;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddfb3a;
  pppcStack_50 = (code ***)0x11ddfb30;
  pppcStack_54 = (code ***)0x109a8cb2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109aa450;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109a8cc3;
  FUN_109aaf40();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppuStack_60 = (undefined4 ***)0x109a8cd9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de1a8b;
  pppuStack_60 = (undefined4 ***)0x11de1a80;
  pppuStack_64 = (undefined4 ***)0x109a8cf9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppuStack_64 = (undefined4 ***)FUN_109aa4d0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109a8d0a;
  FUN_109aaf40();
  if (((undefined4 ****)pppcStack_50 != &pppuStack_64) &&
     ((undefined4 ****)pppcStack_50 != (undefined4 ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109a8d20;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppuStack_64;
  pppcStack_6c = (code ***)0x11de1a9a;
  pppcStack_70 = (code ***)0x11de1a8c;
  pppcStack_74 = (code ***)0x109a8d40;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109aa550;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppuStack_7c = (undefined4 ***)0x109a8d51;
  FUN_109aaf40();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pppuStack_80 = (undefined4 ***)0x109a8d67;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11de1aab;
  pppuStack_80 = (undefined4 ***)0x11de1a9c;
  pppuStack_84 = (undefined4 ***)0x109a8d87;
  pppuStack_60 = pppuStack_64;
  FUN_100b62c0();
  pppuStack_84 = (undefined4 ***)&LAB_109aa5d0;
  pppcStack_88 = (code ***)&pppuStack_7c;
  pppcStack_8c = (code ***)0x109a8d98;
  FUN_109aaf40();
  if (((undefined4 ****)pppcStack_70 != &pppuStack_84) &&
     ((undefined4 ****)pppcStack_70 != (undefined4 ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109a8dae;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppuStack_84;
  pppcStack_8c = (code ***)0x11de1ab7;
  pppcStack_90 = (code ***)0x11de1aac;
  pppcStack_94 = (code ***)0x109a8dce;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109aa610;
  pppuStack_98 = &pppcStack_8c;
  pppuStack_9c = (undefined4 ***)0x109a8ddf;
  FUN_109aaf40();
  if (((code ****)pppuStack_80 != &pppcStack_94) && ((code ****)pppuStack_80 != (code ****)0x0)) {
    pppuStack_9c = pppuStack_80;
    pppcStack_a0 = (code ***)0x109a8df5;
    FUN_10c3d5d0();
  }
  pppuStack_84 = &pppcStack_94;
  pppuStack_9c = (undefined4 ***)0x11de1a57;
  pppcStack_a0 = (code ***)0x11de1a48;
  pppcStack_a4 = (code ***)0x109a8e15;
  pppuStack_80 = pppuStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)&LAB_109aa740;
  pppcStack_a8 = (code ***)&pppuStack_9c;
  pppcStack_ac = (code ***)0x109a8e26;
  FUN_109aaf40();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x109a8e3c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dca43e;
  pppcStack_b0 = (code ***)0x11dca430;
  pppcStack_b4 = (code ***)0x109a8e5c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)data__AstrolabeTaskMo_109a9a90;
  pppuStack_b8 = &pppcStack_ac;
  pppcStack_bc = (code ***)0x109a8e6d;
  FUN_109aaf40();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x109a8e83;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dc54ba;
  pppcStack_c0 = (code ***)0x11dc54b0;
  pppcStack_c4 = (code ***)0x109a8ea3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_109a9040;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x109a8eb4;
  FUN_109aaf40();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppuStack_d0 = (undefined1 ***)0x109a8eca;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11de1a62;
  pppuStack_d0 = (undefined1 ***)0x11de1a58;
  pppuStack_d4 = (undefined1 ***)0x109a8eea;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppuStack_d4 = (undefined1 ***)FUN_109a90b0;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x109a8efb;
  FUN_109aaf40();
  if (((undefined1 ****)pppcStack_c0 != &pppuStack_d4) &&
     ((undefined1 ****)pppcStack_c0 != (undefined1 ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    ppuStack_e0 = (undefined1 **)0x109a8f11;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppuStack_d4;
  pppcStack_dc = (code ***)0x11dc5456;
  ppuStack_e0 = (undefined1 **)0x11dc544c;
  ppuStack_e4 = (undefined1 **)0x109a8f31;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  ppuStack_e4 = (undefined1 **)FUN_109a9120;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppuStack_ec = (undefined1 ***)0x109a8f42;
  FUN_109aaf40();
  if ((pppuStack_d0 != &ppuStack_e4) && (pppuStack_d0 != (undefined1 ***)0x0)) {
    pppuStack_ec = pppuStack_d0;
    ppuStack_f0 = (undefined1 **)0x109a8f58;
    FUN_10c3d5d0();
  }
  pppuStack_d4 = &ppuStack_e4;
  pppuStack_ec = (undefined1 ***)0x11de1a6f;
  ppuStack_f0 = (undefined1 **)0x11de1a64;
  puStack_f4 = (undefined1 *)0x109a8f78;
  pppuStack_d0 = pppuStack_d4;
  FUN_100b62c0();
  puStack_f4 = &LAB_109a9000;
  pppcStack_f8 = (code ***)&pppuStack_ec;
  ppuStack_fc = (undefined1 **)0x109a8f89;
  FUN_109aaf40();
  if ((ppuStack_e0 != &puStack_f4) && (ppuStack_e0 != (undefined1 **)0x0)) {
    ppuStack_fc = ppuStack_e0;
    pcStack_100 = (char *)0x109a8f9f;
    FUN_10c3d5d0();
  }
  ppuStack_e4 = &puStack_f4;
  ppuStack_fc = (undefined1 **)0x11de1a7d;
  pcStack_100 = "BuyDivination";
  puStack_104 = (undefined1 *)0x109a8fbf;
  ppuStack_e0 = ppuStack_e4;
  FUN_100b62c0();
  puStack_104 = &LAB_109aa780;
  FUN_109aaf40(&ppuStack_fc);
  if ((ppuStack_f0 != &puStack_104) && (ppuStack_f0 != (undefined1 **)0x0)) {
    FUN_10c3d5d0(ppuStack_f0);
  }
  FUN_11a89daa();
  return;
}



/* ===== data::RewardItemMo_109a9190 @ 109a9190  size=2291 ===== */
// calls: CActivityMgr::GetActivityState, CPet::SetName
// strings:
//   "activeStar"
//   "startDateYear"
//   "startDateMonth"
//   "startDateDay"
//   "endDateYear"
//   "endDateMonth"
//   "endDateDay"
//   "rewardID"
//   "rewardCount"
//   "entryID"
//   "entryState"
//   "entryClaimed"
//   "entryOpened"
//   "specificMaterialID"
//   "specificMaterialCount"
//   "randomMaterialID"
//   "randomMaterialCount"
//   "remainTime"
//   "maxTime"
//   "canResetTime"

/* WARNING: Removing unreachable block (ram,0x109a9503) */
/* WARNING: Removing unreachable block (ram,0x109a950a) */
/* WARNING: Removing unreachable block (ram,0x109a951d) */
/* [RE-AUTO c3]
   id: data::RewardItemMo
   strings:
     ""activeStar""
     ""startDateYear""
     ""startDateMonth""
     ""startDateDay""
     ""endDateYear""
     ""endDateMonth""
     ""endDateDay""
     ""rewardID""
     ""rewardCount""
     ""entryID"" */

void data__RewardItemMo_109a9190
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  int iVar6;
  byte unaff_DI;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 local_114;
  int iStack_110;
  int *piStack_10c;
  int *local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [8];
  int *piStack_a4;
  int *piStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  int *piStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_11c;
  local_104 = param_4[1];
  local_fc = param_4[3];
  local_f8 = param_4[4];
  local_114 = param_2;
  local_108 = (int *)0x0;
  local_100 = param_4[2];
  if ((local_104 >> 6 & 1) != 0) {
    local_108 = (int *)*param_4;
    (**(code **)(*local_108 + 4))(&local_108,local_100);
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) &&
     ((iStack_118 = (**(code **)(*piVar9 + 0xb4))(), iStack_118 != 0 &&
      (iStack_ec = *(int *)(iStack_118 + 0x2b08), iStack_ec != 0)))) {
    piStack_a0 = (int *)0x0;
    puStack_9c = (undefined4 *)0x0;
    FUN_11a98a70(&piStack_a0);
    iStack_110 = 0;
    iVar7 = 0;
    do {
      bVar1 = true;
      iVar5 = 0;
      do {
        puVar2 = (undefined4 *)FUN_1152edc0(iVar7 + iVar5);
        if ((puVar2 == (undefined4 *)0x0) || (puVar2[1] != 1)) {
          bVar1 = false;
        }
        else {
          uStack_84 = *puVar2;
          piStack_8c = (int *)0x0;
          uStack_88 = 3;
          (**(code **)(*piStack_a4 + 0x3c))(puStack_9c,&piStack_8c);
          if ((uStack_88 >> 6 & 1) != 0) {
            (**(code **)(*piStack_8c + 8))(&piStack_8c,uStack_84);
            piStack_8c = (int *)0x0;
          }
          uStack_88 = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      if (bVar1) {
        iStack_110 = iStack_110 + 1;
      }
      iVar7 = iVar7 + 5;
    } while (iVar7 < 0x38);
    (**(code **)(*piStack_10c + 0x14))
              (local_104,"activeStar",&piStack_a4,((byte)local_108 & 0x8f) == 10);
    iStack_e4 = *(int *)(iStack_118 + 0x2acc);
    if (iStack_e4 != 0) {
      iVar7 = 0;
      if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
          (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) &&
         (iVar5 = (**(code **)(*piVar9 + 0xb4))(), iVar5 != 0)) {
        iVar7 = iVar5;
      }
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x260fc) != 0)) {
        uVar3 = FUN_109aa800();
        iStack_e8 = CActivityMgr__GetActivityState(uVar3);
        if (iStack_e8 != 0) {
          uVar3 = FUN_109aa800();
          iVar7 = FUN_1122b9d0(uVar3);
          iStack_110 = iVar7;
          if (iVar7 != 0) {
            piVar9 = (int *)0x0;
            FUN_10a19840(*(undefined4 *)(iVar7 + 1));
            uVar8 = 0;
            FUN_10a19840(*(undefined4 *)(iVar7 + 5));
            FUN_104d1550("startDateYear",iStack_64 + 0x76c);
            FUN_104d1550("startDateMonth",iStack_68 + 1);
            FUN_104d1550("startDateDay",uStack_6c);
            FUN_104d1550("endDateYear",iStack_34 + 0x76c);
            FUN_104d1550("endDateMonth",iStack_38 + 1);
            FUN_104d1550("endDateDay",uStack_3c);
            iVar5 = 0;
            if (*(char *)(iVar7 + 0xad2) != '\0') {
              iVar6 = iVar7 + 0xb0d;
              iVar4 = 0;
              iVar5 = 0;
              do {
                if ((*(char *)(iVar6 + -0x39) == '0') && (*(char *)(iVar6 + -0x2a) == '\x10')) {
                  unaff_DI = 0;
                  if (iVar5 == 0) {
                    iVar5 = iVar4;
                  }
                  uVar3 = FUN_109aa800(*(undefined1 *)(local_f8 + 5),*(undefined1 *)(iVar6 + -0x3a),
                                       &stack0xfffffed8);
                  FUN_11513b40(uVar3);
                }
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 0x423;
                iVar7 = unaff_EBX;
              } while (iVar4 < (int)(uint)*(byte *)(unaff_EBX + 0xad2));
            }
            if ((iVar5 < (int)(uint)*(byte *)(iVar7 + 0xad2)) &&
               (iVar7 = iVar7 + iVar5 * 0x423, *(char *)(iVar7 + 0xae3) == '\x10')) {
              FUN_104d1440("rewardID",*(undefined4 *)(iVar7 + 0xad6));
              FUN_104d1550("rewardCount",(int)*(short *)(iVar7 + 0xada));
              FUN_104d1550("entryID",*(undefined1 *)(iVar7 + 0xad3));
              uVar3 = FUN_109aa800(*(undefined1 *)(local_f8 + 5),*(undefined1 *)(iVar7 + 0xad3),
                                   &stack0xfffffedc);
              FUN_11513b40(uVar3);
              if ((uVar8 == 0) || (uVar3 = 1, uVar8 < (uint)(int)*(short *)(iVar7 + 0xb0d))) {
                uVar3 = 0;
              }
              FUN_104d1550("entryState",*(undefined1 *)(iVar7 + 0xad5));
              FUN_104d15e0("entryClaimed",uVar3);
              FUN_104d15e0("entryOpened",*(int *)(iVar7 + 0xae5) <= (int)piVar9);
              iVar7 = 0;
            }
            else {
              FUN_104d1550("rewardID",0);
              FUN_104d1550("rewardCount",0);
              FUN_104d1550("entryID",0);
              FUN_104d1550("entryState",0);
              FUN_104d15e0("entryClaimed",0);
              FUN_104d15e0("entryOpened",0);
              iVar7 = unaff_ESI;
            }
            iVar5 = FUN_11806ee0();
            FUN_104d1550("specificMaterialID",*(undefined4 *)(iVar5 + 0x38));
            iVar5 = FUN_11806ee0();
            FUN_104d1550("specificMaterialCount",*(undefined4 *)(iVar5 + 0x3c));
            iVar5 = FUN_11806ee0();
            FUN_104d1550("randomMaterialID",*(undefined4 *)(iVar5 + 0x30));
            iVar5 = FUN_11806ee0();
            FUN_104d1550("randomMaterialCount",*(undefined4 *)(iVar5 + 0x34));
            uVar3 = FUN_1152ec90();
            FUN_104d1550("remainTime",uVar3);
            iVar5 = FUN_11806ee0();
            FUN_104d1550("maxTime",*(undefined4 *)(iVar5 + 0x40));
            iVar5 = FUN_1152eca0();
            iVar4 = FUN_1152f030();
            FUN_104d1550("canResetTime",iVar5 - iVar4);
            iVar5 = FUN_11806ee0();
            FUN_104d1550("cosumeCredit",*(undefined4 *)(iVar5 + 0x68));
            uStack_d8 = 0;
            uStack_d4 = 0;
            FUN_11a98a70(&uStack_d8);
            (**(code **)(*piVar9 + 0x14))(iVar7,"rewardArray",&uStack_dc,(unaff_DI & 0x8f) == 10);
            iVar7 = iStack_110;
            piStack_10c = (int *)0x0;
            if (*(char *)(iStack_110 + 0xad2) != '\0') {
              iVar5 = iStack_110 + 0xb0d;
              do {
                if ((*(char *)(iVar5 + -0x39) == '0') && (*(char *)(iVar5 + -0x2a) != '\x10')) {
                  iStack_ec = 0;
                  uVar8 = (uint)*(byte *)(iStack_e8 + 5);
                  iVar4 = FUN_109aa800(uVar8,*(undefined1 *)(iVar5 + -0x3a),&iStack_ec);
                  FUN_11513b40();
                  uVar3 = FUN_109aa800(*(undefined1 *)(local_f8 + 5),*(undefined1 *)(iVar5 + -0x28),
                                       &stack0xfffffedc);
                  FUN_11513b40(uVar3);
                  local_100 = 0;
                  uStack_dc = CONCAT31(uStack_dc._1_3_,*(uint *)(iVar5 + -0x24) <= uVar8);
                  local_fc = 0;
                  iStack_e8 = unaff_ESI;
                  if (unaff_ESI != 0) {
                    FUN_11a98de0(&local_100,"mh.data::RewardItemMo",0,0);
                  }
                  FUN_104d1550("iItemId",*(undefined1 *)(iVar5 + -0x3a));
                  FUN_104d1550("iItemDataId",*(undefined4 *)(iVar5 + -0x37));
                  FUN_104d1550("iItemCount",(int)*(short *)(iVar5 + -0x33));
                  FUN_104d15e0("bClaimed",iVar4);
                  FUN_104d15e0("bEnabled",uStack_dc);
                  CPet__SetName(iVar5 + 2);
                  puStack_9c = (undefined4 *)auStack_ac;
                  auStack_ac[0] = 0;
                  puStack_98 = puStack_9c;
                  FUN_100e5aa0(puStack_9c);
                  FUN_104d1670("strItemName",puStack_9c);
                  if ((puStack_9c != &uStack_b0) && (puStack_9c != (undefined4 *)0x0)) {
                    FUN_10c3d5d0(puStack_9c);
                  }
                  if (iVar4 != 0) {
                    FUN_10c3da30(iVar4);
                  }
                  (**(code **)(*piStack_e0 + 0x3c))(uStack_d8,&local_108);
                  FUN_109a88f0();
                }
                piStack_10c = (int *)((int)piStack_10c + 1);
                iVar5 = iVar5 + 0x423;
              } while ((int)piStack_10c < (int)(uint)*(byte *)(iVar7 + 0xad2));
            }
            if ((uStack_b4 >> 6 & 1) != 0) {
              (**(code **)(*piStack_b8 + 8))(&piStack_b8,uStack_b0);
              piStack_b8 = (int *)0x0;
            }
            uStack_b4 = 0;
          }
        }
      }
    }
    if (((uint)puStack_9c >> 6 & 1) != 0) {
      (**(code **)(*piStack_a0 + 8))(&piStack_a0,puStack_98);
      piStack_a0 = (int *)0x0;
    }
    puStack_9c = (undefined4 *)0x0;
  }
  if ((local_104 >> 6 & 1) != 0) {
    (**(code **)(*local_108 + 8))(&local_108,local_100);
  }
  FUN_11a89daa();
  return;
}



/* ===== data::AstrolabeTaskMo_109a9a90 @ 109a9a90  size=2496 ===== */
// calls: CActivityMgr::GetActivityState, _time64
// strings:
//   "finishTaskCount"
//   "refreshTaskCount"
//   "maxTaskCount"
//   "buyCount"
//   "consumeCount"
//   "taskArray"
//   "TASK_TARGET_VO_NAME"
//   "mh.data::AstrolabeTaskMo"
//   "iTaskId"
//   "strName"
//   "iRewardID"
//   "iRewardCount"
//   "bCanAccept"
//   "bCanSubmit"
//   "arrTargets"
//   "nTargetID1"
//   "nTargetID2"
//   "nTargetID3"
//   "nTargetID4"
//   "nTargetID5"

/* [RE-AUTO c3]
   id: data::AstrolabeTaskMo
   calls: _time64
   strings:
     ""finishTaskCount""
     ""refreshTaskCount""
     ""maxTaskCount""
     ""buyCount""
     ""consumeCount""
     ""taskArray""
     ""TASK_TARGET_VO_NAME""
     ""mh.data::AstrolabeTaskMo""
     ""iTaskId""
     ""strName"" */

void data__AstrolabeTaskMo_109a9a90
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int local_ec;
  int *piStack_e8;
  uint uStack_e4;
  ulonglong uStack_e0;
  int *piStack_d8;
  int iStack_d4;
  int *local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [8];
  int *piStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_fc;
  local_cc = param_4[1];
  local_c4 = param_4[3];
  local_c8 = param_4[2];
  local_c0 = param_4[4];
  local_ec = param_2;
  local_d0 = (int *)0x0;
  if ((local_cc >> 6 & 1) != 0) {
    local_d0 = (int *)*param_4;
    (**(code **)(*local_d0 + 4))(&local_d0,local_c8);
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar12 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar12 != (int *)0x0)) &&
     ((iStack_80 = (**(code **)(*piVar12 + 0xb4))(), iStack_80 != 0 &&
      (iStack_d4 = *(int *)(iStack_80 + 0x2b08), iStack_d4 != 0)))) {
    uVar5 = FUN_1152ecb0();
    FUN_104d1550("finishTaskCount",uVar5);
    iVar6 = FUN_11806ee0();
    iVar6 = *(int *)(iVar6 + 0x6c);
    iVar7 = FUN_1152ef60();
    FUN_104d1550("refreshTaskCount",iVar6 - iVar7);
    uVar5 = FUN_1152ed00();
    FUN_104d1550("maxTaskCount",uVar5);
    if ((*(int *)(iStack_80 + 0x2acc) != 0) &&
       (piStack_f8 = (int *)FUN_109aa7c0(), piStack_f8 != (int *)0x0)) {
      uVar5 = FUN_109aa800();
      iVar6 = CActivityMgr__GetActivityState(uVar5);
      if (iVar6 != 0) {
        uVar5 = FUN_109aa800();
        piStack_f8 = (int *)FUN_1122b9d0(uVar5);
        if (piStack_f8 != (int *)0x0) {
          bVar9 = 0x29;
          iStack_ac = 0;
          iStack_a8 = 0;
          uStack_a4 = 0;
          uStack_fc = CONCAT31(uStack_fc._1_3_,0x29);
          do {
            piStack_e8 = (int *)0x0;
            uVar5 = FUN_109aa800(*(undefined1 *)(iVar6 + 5),uStack_fc,&piStack_e8);
            FUN_11513b40(uVar5);
            FUN_101092e0(&piStack_f8);
            iVar7 = local_ec;
            bVar9 = bVar9 + 1;
            uStack_fc = CONCAT31(uStack_fc._1_3_,bVar9);
          } while (bVar9 < 0x30);
          uVar10 = iStack_a8 - iStack_ac >> 2;
          uStack_e4 = uVar10;
          if (6 < uVar10) {
            uStack_e0 = _time64((__time64_t *)0x0);
            uStack_f4 = 0;
            piStack_f8 = *(int **)((int)piStack_f8 + 1);
            iVar6 = FUN_10a13c30(&piStack_f8,&uStack_e0,0x2a30);
            piVar12 = (int *)0x0;
            piStack_e8 = (int *)0x0;
            iVar8 = 0;
            if (0 < (int)uVar10) {
              do {
                if ((iVar6 != iVar8) && (*(uint *)(iStack_ac + iVar8 * 4) / 1000 == 0)) {
                  piVar12 = (int *)((int)piVar12 + 1);
                }
                iVar8 = iVar8 + 1;
                iVar7 = local_ec;
                piStack_e8 = piVar12;
              } while (iVar8 < (int)uVar10);
            }
            iVar6 = 0;
            piStack_f8 = (int *)0x0;
            uVar3 = uStack_e0 >> 0x20;
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            uStack_fc = 1000;
            if (1 < (int)uVar10) {
              piStack_f8 = (int *)0x0;
              iVar7 = 0;
              do {
                iVar8 = iVar6 * 4;
                iVar2 = iVar6 * 4;
                iVar6 = iVar6 + 2;
                piStack_f8 = (int *)((int)piStack_f8 + *(uint *)(iStack_ac + iVar8) % 1000);
                iVar7 = iVar7 + *(uint *)(iStack_ac + 4 + iVar2) % 1000;
              } while (iVar6 < (int)(uVar10 - 1));
              uStack_e0 = CONCAT44((int)uVar3,iVar7);
              iVar7 = local_ec;
              uVar10 = uStack_e4;
            }
            if (iVar6 < (int)uVar10) {
              uVar10 = *(uint *)(iStack_ac + iVar6 * 4) % 1000;
            }
            else {
              uVar10 = 0;
            }
            iVar6 = (int)piStack_e8 + ((-(int)piStack_f8 - (int)uStack_e0) - uVar10);
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            FUN_104d1550("buyCount",iVar6);
            iVar6 = FUN_11806ee0();
            iVar6 = *(int *)(iVar6 + 0x78);
            iVar8 = FUN_11806ee0();
            FUN_104d1550("consumeCount",*(int *)(iVar8 + 0x74) + iVar6);
            iStack_b8 = 0;
            iStack_b4 = 0;
            piStack_b0 = (int *)0x0;
            FUN_1152ef70(&iStack_b8);
            uStack_44 = 0;
            piStack_40 = (int *)0x0;
            FUN_11a98a70(&uStack_44);
            (**(code **)(*piStack_d8 + 0x14))
                      (local_d0,"taskArray",auStack_48,((byte)iStack_d4 & 0x8f) == 10);
            iStack_88 = 0;
            uStack_84 = 0;
            uStack_fc = CONCAT31(uStack_fc._1_3_,((byte)uStack_e4 & 0x8f) == 10);
            cVar4 = (**(code **)(*piStack_e8 + 0x10))
                              ((int)uStack_e0,"TASK_TARGET_VO_NAME",&iStack_88,uStack_fc);
            if ((cVar4 != '\0') && (((byte)uStack_6c & 0x8f) == 6)) {
              if ((uStack_6c >> 6 & 1) == 0) {
                piStack_f8 = piStack_68;
              }
              else {
                piStack_f8 = (int *)*piStack_68;
              }
              uVar10 = 0;
              uStack_e0 = uStack_e0 & 0xffffffff00000000;
              if (iStack_b4 - iStack_b8 >> 2 != 0) {
                do {
                  iVar6 = *(int *)(iStack_b8 + uVar10 * 4);
                  if (iVar6 != 0) {
                    piStack_a0 = (int *)0x0;
                    uStack_9c = 0;
                    iStack_88 = iVar7;
                    if (iVar7 != 0) {
                      FUN_11a98de0(&piStack_a0,"mh.data::AstrolabeTaskMo",0,0);
                    }
                    (**(code **)(*piStack_40 + 0x3c))(auStack_38[0],&piStack_a0);
                    FUN_104d1550("iTaskId",*(undefined4 *)(iVar6 + 0x10));
                    if (*(int *)(iVar6 + 0x2c) != 0) {
                      puStack_20 = auStack_30;
                      auStack_30[0] = 0;
                      puStack_1c = puStack_20;
                      FUN_100e5aa0(puStack_20);
                      FUN_104d1670("strName",puStack_20);
                      if ((puStack_1c != auStack_30) && (puStack_1c != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(puStack_1c);
                      }
                    }
                    FUN_1152ef10(*(undefined4 *)(iVar6 + 0x10));
                    iVar7 = FUN_109a87e0();
                    if (iVar7 != 0) {
                      FUN_104d1550("iRewardID",*(undefined4 *)(iVar7 + 0x18));
                      FUN_104d1550("iRewardCount",*(undefined4 *)(iVar7 + 0x1c));
                    }
                    piVar12 = *(int **)(iStack_8c + 0x2ab0);
                    if (piVar12 != (int *)0x0) {
                      cVar4 = (**(code **)(*piVar12 + 0x4c))(*(undefined4 *)(iVar6 + 0x10));
                      uStack_f4 = CONCAT31(uStack_f4._1_3_,cVar4 == '\0');
                      FUN_104d15e0("bCanAccept",uStack_f4);
                      iVar6 = (**(code **)(*piVar12 + 0x50))(*(undefined4 *)(iVar6 + 0x10));
                      if (iVar6 != 0) {
                        FUN_104d15e0("bCanSubmit",*(int *)(iVar6 + 0x14) == 4);
                      }
                    }
                    iStack_88 = 0;
                    uStack_84 = 0;
                    iStack_80 = 0;
                    FUN_107fa640();
                    uStack_64 = 0;
                    uStack_60 = 0;
                    FUN_11a98a70(&uStack_64);
                    (**(code **)(*piStack_b0 + 0x14))
                              (iStack_a8,"arrTargets",&piStack_68,((byte)iStack_ac & 0x8f) == 10);
                    puVar11 = puStack_78;
                    if (puStack_7c != puStack_78) {
                      puVar13 = puStack_7c + 2;
                      do {
                        piStack_28 = (int *)0x0;
                        uStack_24 = 0;
                        FUN_11a98de0(&piStack_28,piStack_f8,0,0);
                        (**(code **)(*piStack_68 + 0x3c))(uStack_60,auStack_38);
                        FUN_104d1550("nTargetID1",puVar13[-2]);
                        FUN_104d1550("nTargetID2",puVar13[-1]);
                        FUN_104d1550("nTargetID3",*puVar13);
                        FUN_104d1550("nTargetID4",puVar13[1]);
                        FUN_104d1550("nTargetID5",puVar13[2]);
                        FUN_104d1670("strTarget1",puVar13[0xb]);
                        FUN_104d1670("strTarget2",puVar13[0x11]);
                        FUN_104d1670("strTarget3",puVar13[0x17]);
                        FUN_104d1670("strTarget4",puVar13[0x1d]);
                        FUN_104d1670("strTarget5",puVar13[0x23]);
                        FUN_104d1550(&DAT_11dca838,puVar13[0x37]);
                        FUN_104d1550("nOpType",puVar13[3]);
                        FUN_104d1550("nCurCount",puVar13[4]);
                        FUN_104d1550("nMaxCount",puVar13[5]);
                        if ((uStack_24 >> 6 & 1) != 0) {
                          (**(code **)(*piStack_28 + 8))(&piStack_28,puStack_20);
                        }
                        puVar1 = puVar13 + 0x39;
                        puVar13 = puVar13 + 0x3b;
                      } while (puVar1 != puVar11);
                    }
                    puVar13 = puStack_7c;
                    if ((uStack_54 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
                      piStack_58 = (int *)0x0;
                    }
                    uStack_54 = 0;
                    for (; puVar11 != puVar13; puVar11 = puVar11 + -0x3b) {
                      FUN_104f9f50();
                    }
                    if (puVar13 != (undefined4 *)0x0) {
                      FUN_10c3d5d0(puVar13);
                    }
                    iStack_88 = 0;
                    iVar7 = local_ec;
                    if ((uStack_9c >> 6 & 1) != 0) {
                      (**(code **)(*piStack_a0 + 8))(&piStack_a0,uStack_98);
                      iVar7 = local_ec;
                    }
                  }
                  uVar10 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar10);
                } while (uVar10 < (uint)(iStack_b4 - iStack_b8 >> 2));
              }
            }
            if ((uStack_6c >> 6 & 1) != 0) {
              (**(code **)(*piStack_70 + 8))(&piStack_70,piStack_68);
              piStack_70 = (int *)0x0;
            }
            uStack_6c = 0;
            if ((uStack_3c >> 6 & 1) != 0) {
              (**(code **)(*piStack_40 + 8))(&piStack_40,auStack_38[0]);
              piStack_40 = (int *)0x0;
            }
            uStack_3c = 0;
            if (iStack_b8 != 0) {
              FUN_10c3d5d0(iStack_b8);
            }
          }
          if (iStack_ac != 0) {
            FUN_10c3d5d0(iStack_ac);
          }
        }
      }
    }
  }
  if ((local_cc >> 6 & 1) != 0) {
    (**(code **)(*local_d0 + 8))(&local_d0,local_c8);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109aca80 @ 109aca80  size=5894 ===== */
// calls: CMHLevelInfo::CheckLevelProgressThreshold, CMHLevelSystem::GetCurrentContext, CLevelRegularRewardInfo::GetManager, CInfoManager::FindByName
// strings:
//   "WEAPONTRIAL_DETAILVO_CLASSNAME"
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

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   calls: CLevelRegularRewardInfo::GetManagers
   strings:
     ""WEAPONTRIAL_DETAILVO_CLASSNAME""
     ""nLevelID""
     ""strLevelModeName""
     ""strTargetDesc""
     ""strBossName""
     ""strTargetArea""
     ""strEntrustContent""
     ""strEntrustManName""
     ""nHireNpcItemId""
     ""nHireNpcGoodId"" */

void FUN_109aca80(undefined4 param_1,int **param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int **ppiVar11;
  undefined8 uVar12;
  int **ppiStack_2b8;
  uint uStack_2b4;
  int **ppiStack_2b0;
  int ***pppiStack_2ac;
  int **ppiStack_2a8;
  int **ppiStack_2a4;
  int ***pppiStack_2a0;
  int ***pppiStack_29c;
  int *piStack_298;
  char *pcStack_294;
  int **ppiStack_290;
  int **ppiStack_28c;
  int *piStack_288;
  char *pcStack_284;
  int **ppiStack_280;
  int **ppiStack_27c;
  int **ppiStack_278;
  int ***pppiStack_274;
  int **ppiStack_270;
  int *piStack_26c;
  int **ppiStack_268;
  int **ppiStack_264;
  int **ppiStack_260;
  int *piStack_25c;
  int *piStack_258;
  char *pcStack_254;
  char *pcStack_250;
  undefined4 uStack_24c;
  int *piStack_248;
  int *piStack_244;
  int **ppiStack_240;
  int *piStack_23c;
  char *pcStack_238;
  int *piStack_234;
  int *piStack_230;
  int *piStack_22c;
  int *piStack_228;
  char *pcStack_224;
  int *piStack_220;
  char *pcStack_21c;
  int *piStack_218;
  char *pcStack_214;
  char *pcStack_210;
  char *pcStack_20c;
  int *piStack_208;
  int *piStack_204;
  int *piStack_200;
  char *pcStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  int **ppiStack_1e8;
  int **ppiStack_1e4;
  int **ppiStack_1e0;
  int **ppiStack_1dc;
  int *piStack_1d8;
  undefined4 *puStack_1d4;
  int **ppiStack_1d0;
  undefined4 uStack_1cc;
  int *piStack_1c8;
  char *pcStack_1c4;
  int **ppiStack_1c0;
  undefined1 *puStack_1bc;
  int iStack_1ac;
  int *piStack_1a8;
  int iStack_1a4;
  int **ppiStack_1a0;
  int aiStack_190 [3];
  int *piStack_184;
  int **local_17c;
  int *local_178;
  uint local_174;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_13c;
  undefined4 *puStack_138;
  int *piStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  int *piStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_100 [8];
  int iStack_f8;
  undefined4 uStack_f4;
  int iStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  int **ppiStack_d4;
  int **ppiStack_d0;
  undefined1 auStack_c8 [20];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  undefined1 *puStack_94;
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  int **ppiStack_54;
  int **ppiStack_50;
  int **ppiStack_4c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_1ac;
  local_17c = param_2;
  if (param_5 != 4) goto LAB_109ae175;
  local_174 = param_4[1];
  local_16c = param_4[3];
  puStack_1bc = (undefined1 *)param_4[2];
  local_168 = param_4[4];
  local_178 = (int *)0x0;
  local_170 = (int)puStack_1bc;
  if ((local_174 >> 6 & 1) != 0) {
    local_178 = (int *)*param_4;
    ppiStack_1c0 = &local_178;
    pcStack_1c4 = (char *)0x109acaee;
    (**(code **)(*local_178 + 4))();
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    aiStack_190[2] = param_4[8];
  }
  else {
    aiStack_190[2] = 0xdeadbeaf;
  }
  if (((byte)param_4[0xd] & 0x8f) == 2) {
    iStack_1a4 = CONCAT31(iStack_1a4._1_3_,*(undefined1 *)(param_4 + 0xe));
  }
  else {
    iStack_1a4 = (uint)iStack_1a4._1_3_ << 8;
  }
  if (((param_4[0x13] & 0x8f) == 3) || ((param_4[0x13] & 0x8f) == 4)) {
    piStack_1a8 = (int *)param_4[0x14];
  }
  else {
    piStack_1a8 = (int *)0xdeadbeaf;
  }
  puStack_1bc = (undefined1 *)0x109acb64;
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  piStack_184 = piVar3;
  if (piVar3 != (int *)0x0) {
    *(undefined1 *)(DAT_123bbae8 + 0x20) = 0;
    puStack_1bc = (undefined1 *)0x109acb88;
    FUN_108f61f0();
    puStack_1bc = auStack_c8;
    ppiStack_1c0 = (int **)iStack_1a4;
    pcStack_1c4 = (char *)aiStack_190[2];
    uStack_1cc = 0x109acb9e;
    piStack_1c8 = piVar3;
    FUN_1130cd50();
    ppiStack_1c0 = &piStack_130;
    piStack_130 = (int *)0x0;
    uStack_12c = 0;
    iStack_1ac = CONCAT31(iStack_1ac._1_3_,((byte)local_174 & 0x8f) == 10);
    puStack_1bc = (undefined1 *)iStack_1ac;
    pcStack_1c4 = "WEAPONTRIAL_DETAILVO_CLASSNAME";
    piStack_1c8 = (int *)local_170;
    uStack_1cc = 0x109acbe9;
    cVar1 = (**(code **)(*local_178 + 0x10))();
    puStack_1d4 = (undefined4 *)0x0;
    if (((cVar1 != '\0') && (((byte)uStack_13c & 0x8f) == 6)) &&
       (puStack_1d4 = puStack_138, (uStack_13c >> 6 & 1) != 0)) {
      puStack_1d4 = (undefined4 *)*puStack_138;
    }
    uStack_1cc = 0;
    ppiStack_1d0 = (int **)0x0;
    piStack_1d8 = (int *)&stack0xfffffe50;
    iStack_1ac = 0;
    ppiStack_1dc = (int **)0x109acc3a;
    FUN_11a98de0();
    ppiStack_1dc = (int **)piStack_1a8;
    ppiStack_1e0 = (int **)0x11dd8dc4;
    ppiStack_1e4 = (int **)0x109acc4e;
    FUN_104d1550();
    piStack_60 = (int *)((uint)piStack_60 & 0xffffff00);
    ppiStack_1dc = &piStack_60;
    ppiStack_1e0 = (int **)0x109acc7b;
    ppiStack_50 = ppiStack_1dc;
    ppiStack_4c = ppiStack_1dc;
    FUN_100e5aa0();
    ppiStack_1e0 = ppiStack_50;
    ppiStack_1e4 = (int **)&DAT_11dbac80;
    ppiStack_1e8 = (int **)0x109acc92;
    FUN_104d1670();
    if ((ppiStack_50 != &piStack_64) && (ppiStack_50 != (int **)0x0)) {
      ppiStack_1e0 = ppiStack_50;
      ppiStack_1e4 = (int **)0x109accb1;
      FUN_10c3d5d0();
    }
    ppiStack_1e0 = &piStack_64;
    piStack_64 = (int *)((uint)piStack_64 & 0xffffff00);
    ppiStack_1e4 = (int **)0x109accde;
    ppiStack_54 = ppiStack_1e0;
    ppiStack_50 = ppiStack_1e0;
    FUN_100e5aa0();
    ppiStack_1e4 = ppiStack_54;
    ppiStack_1e8 = (int **)0x11dde3e0;
    piStack_1ec = (int *)0x109accf5;
    FUN_104d1670();
    if ((ppiStack_54 != &piStack_68) && (ppiStack_54 != (int **)0x0)) {
      ppiStack_1e4 = ppiStack_54;
      ppiStack_1e8 = (int **)0x109acd14;
      FUN_10c3d5d0();
    }
    ppiStack_1e4 = &piStack_68;
    piStack_68 = (int *)((uint)piStack_68 & 0xffffff00);
    ppiStack_1e8 = (int **)0x109acd41;
    ppiStack_58 = ppiStack_1e4;
    ppiStack_54 = ppiStack_1e4;
    FUN_100e5aa0();
    ppiStack_1e8 = ppiStack_58;
    piStack_1ec = (int *)0x11dd9688;
    piStack_1f0 = (int *)0x109acd58;
    FUN_104d1670();
    if ((ppiStack_58 != (int **)auStack_6c) && (ppiStack_58 != (int **)0x0)) {
      ppiStack_1e8 = ppiStack_58;
      piStack_1ec = (int *)0x109acd77;
      FUN_10c3d5d0();
    }
    ppiStack_1e8 = (int **)auStack_6c;
    auStack_6c[0] = 0;
    piStack_1ec = (int *)0x109acda4;
    piStack_5c = (int *)ppiStack_1e8;
    ppiStack_58 = ppiStack_1e8;
    FUN_100e5aa0();
    piStack_1ec = piStack_5c;
    piStack_1f0 = (int *)0x11dde3d4;
    piStack_1f4 = (int *)0x109acdbb;
    FUN_104d1670();
    if ((piStack_5c != (int *)auStack_70) && (piStack_5c != (int *)0x0)) {
      piStack_1ec = piStack_5c;
      piStack_1f0 = (int *)0x109acdda;
      FUN_10c3d5d0();
    }
    piStack_1ec = (int *)auStack_70;
    auStack_70[0] = 0;
    piStack_1f0 = (int *)0x109ace07;
    piStack_60 = piStack_1ec;
    piStack_5c = piStack_1ec;
    FUN_100e5aa0();
    piStack_1f0 = piStack_60;
    piStack_1f4 = (int *)0x11dde3c4;
    piStack_1f8 = (int *)0x109ace1e;
    FUN_104d1670();
    if ((piStack_60 != (int *)auStack_74) && (piStack_60 != (int *)0x0)) {
      piStack_1f0 = piStack_60;
      piStack_1f4 = (int *)0x109ace3d;
      FUN_10c3d5d0();
    }
    piStack_1f0 = (int *)auStack_74;
    auStack_74[0] = 0;
    piStack_1f4 = (int *)0x109ace6a;
    piStack_64 = piStack_1f0;
    piStack_60 = piStack_1f0;
    FUN_100e5aa0();
    piStack_1f4 = piStack_64;
    piStack_1f8 = (int *)0x11dde3b0;
    pcStack_1fc = (char *)0x109ace81;
    FUN_104d1670();
    if ((piStack_64 != (int *)auStack_78) && (piStack_64 != (int *)0x0)) {
      piStack_1f4 = piStack_64;
      piStack_1f8 = (int *)0x109acea0;
      FUN_10c3d5d0();
    }
    piStack_1f4 = (int *)auStack_78;
    auStack_78[0] = 0;
    piStack_1f8 = (int *)0x109acecd;
    piStack_68 = piStack_1f4;
    piStack_64 = piStack_1f4;
    FUN_100e5aa0();
    piStack_1f8 = piStack_68;
    pcStack_1fc = "strEntrustManName";
    piStack_200 = (int *)0x109acee4;
    FUN_104d1670();
    if ((piStack_68 != &iStack_7c) && (piStack_68 != (int *)0x0)) {
      piStack_1f8 = piStack_68;
      pcStack_1fc = (char *)0x109acf03;
      FUN_10c3d5d0();
    }
    piStack_1f8 = (int *)0x109acf0b;
    iVar4 = FUN_1181d450();
    piStack_1f8 = *(int **)(iVar4 + 0x78);
    pcStack_1fc = "nHireNpcItemId";
    piStack_200 = (int *)0x109acf1e;
    FUN_104d1550();
    piStack_200 = (int *)0x109acf23;
    iVar4 = FUN_1181d450();
    piStack_200 = *(int **)(iVar4 + 0x74);
    piStack_204 = (int *)0x11dde3fc;
    piStack_208 = (int *)0x109acf36;
    FUN_104d1550();
    piStack_1f8 = (int *)0x1;
    pcStack_1fc = (char *)0x109acf47;
    iVar4 = FUN_1130bb80();
    if (iVar4 == 0) {
      pcStack_1fc = (char *)0xe;
      piStack_200 = (int *)0x109acf70;
      iVar4 = FUN_1130bb80();
      if (iVar4 != 0) {
        piStack_200 = *(int **)(iVar4 + 4);
        piStack_204 = (int *)0x11dde3f4;
        piStack_208 = (int *)0x109acf87;
        FUN_104d1550();
        piStack_204 = (int *)0x1;
        goto LAB_109acf89;
      }
    }
    else {
      pcStack_1fc = *(char **)(iVar4 + 4);
      piStack_200 = (int *)0x11dde3f4;
      piStack_204 = (int *)0x109acf5e;
      FUN_104d1550();
      piStack_204 = (int *)0x0;
LAB_109acf89:
      piStack_208 = (int *)0x11dde5a0;
      pcStack_20c = (char *)0x109acf99;
      FUN_104d15e0();
    }
    piStack_200 = (int *)0x0;
    piStack_204 = (int *)0x109acfaa;
    piStack_204 = (int *)FUN_1130cb50();
    piStack_208 = (int *)0x11dde594;
    pcStack_20c = (char *)0x109acfbb;
    FUN_104d1550();
    piStack_204 = (int *)0x2;
    piStack_208 = (int *)0x109acfcc;
    piStack_208 = (int *)FUN_1130cb50();
    pcStack_20c = "nLimitTime";
    pcStack_210 = (char *)0x109acfdd;
    FUN_104d1550();
    piStack_208 = (int *)&DAT_00000008;
    pcStack_20c = (char *)0x109acfee;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      pcStack_20c = *(char **)(iVar4 + 4);
      pcStack_210 = "mLimitMember";
      pcStack_214 = (char *)0x109ad007;
      FUN_104d1550();
      pcStack_214 = *(char **)(iVar4 + 8);
      piStack_218 = (int *)0x11dde574;
      pcStack_21c = (char *)0x109ad01a;
      FUN_104d1550();
    }
    pcStack_20c = (char *)0x3;
    pcStack_210 = (char *)0x109ad02b;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      pcStack_210 = *(char **)(iVar4 + 4);
      pcStack_214 = "needItemId";
      piStack_218 = (int *)0x109ad044;
      FUN_104d1550();
      piStack_218 = *(int **)(iVar4 + 8);
      pcStack_21c = "needItemCount";
      piStack_220 = (int *)0x109ad057;
      FUN_104d1550();
    }
    pcStack_210 = (char *)0x2;
    pcStack_214 = (char *)0x109ad068;
    iVar4 = FUN_1130bb80();
    if ((iVar4 != 0) && (pcStack_214 = *(char **)(iVar4 + 4), 0 < (int)pcStack_214)) {
      piStack_218 = (int *)0x11dde5e0;
      pcStack_21c = (char *)0x109ad086;
      FUN_104d1550();
      pcStack_21c = *(char **)(iVar4 + 8);
      piStack_220 = (int *)0x11dde5d0;
      pcStack_224 = (char *)0x109ad099;
      FUN_104d1550();
    }
    pcStack_214 = (char *)0x5;
    piStack_218 = (int *)0x109ad0aa;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      piStack_218 = *(int **)(iVar4 + 4);
      pcStack_21c = "needHunterLev";
      piStack_220 = (int *)0x109ad0c1;
      FUN_104d1550();
      piStack_218 = (int *)0x109ad0ce;
      piVar5 = (int *)(**(code **)(*piVar3 + 0x46c))();
      piStack_218 = (int *)0x109ad0d5;
      piStack_218 = (int *)(**(code **)(*piVar5 + 0x18))();
      pcStack_21c = "nCurrentHunterLev";
      piStack_220 = (int *)0x109ad0e6;
      FUN_104d1550();
    }
    piStack_218 = (int *)&DAT_00000004;
    pcStack_21c = (char *)0x109ad0f7;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      pcStack_21c = *(char **)(iVar4 + 4);
      piStack_220 = (int *)0x11dde52c;
      pcStack_224 = (char *)0x109ad10e;
      FUN_104d1550();
      pcStack_21c = (char *)0x109ad11c;
      iVar4 = (**(code **)(*(int *)piVar3[0xaaf] + 0xc))();
      pcStack_21c = *(char **)(iVar4 + 0x44);
      piStack_220 = (int *)0x11dde518;
      pcStack_224 = (char *)0x109ad12f;
      FUN_104d1550();
    }
    pcStack_21c = (char *)0xd;
    piStack_220 = (int *)0x109ad140;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      piStack_220 = *(int **)(iVar4 + 4);
      pcStack_224 = "needGoldenHunterLev";
      piStack_228 = (int *)0x109ad157;
      FUN_104d1550();
      piStack_220 = (int *)0x109ad164;
      (**(code **)(*piVar3 + 0x46c))();
      piStack_220 = (int *)0x109ad16b;
      piStack_220 = (int *)FUN_114dfc10();
      pcStack_224 = "nCurrentGoldernLev";
      piStack_228 = (int *)0x109ad17c;
      FUN_104d1550();
    }
    piStack_220 = (int *)&DAT_00000009;
    pcStack_224 = (char *)0x109ad18d;
    iVar4 = FUN_1130bb80();
    if (iVar4 == 0) {
      pcStack_224 = (char *)0x0;
      piStack_228 = (int *)0x11dde564;
      piStack_22c = (int *)0x109ad264;
      FUN_104d15e0();
      piStack_22c = (int *)&DAT_11d9d32b;
      piStack_230 = (int *)0x11dd962c;
      piStack_234 = (int *)0x109ad279;
      FUN_104d1670();
    }
    else {
      pcStack_224 = *(char **)(iVar4 + 4);
      piStack_228 = (int *)0x109ad19f;
      pcStack_214 = (char *)FUN_104d8d20();
      if (pcStack_214 != (char *)0x0) {
        pcStack_224 = *(char **)(iVar4 + 4);
        piStack_228 = (int *)0x109ad1bc;
        piStack_228 = (int *)(**(code **)(*(int *)piVar3[0xaac] + 0x50))();
        if (piStack_228 == (int *)0x0) {
          piStack_228 = *(int **)(iVar4 + 4);
          piStack_22c = (int *)0x109ad1d0;
          piStack_228 = (int *)(**(code **)(*(int *)piVar3[0xaac] + 0x60))();
          if ((char)piStack_228 != '\0') goto LAB_109ad1d4;
        }
        else {
LAB_109ad1d4:
          piStack_228 = (int *)CONCAT31((int3)((uint)piStack_228 >> 8),1);
        }
        piStack_22c = (int *)0x11dde564;
        piStack_230 = (int *)0x109ad1e7;
        FUN_104d15e0();
        piStack_228 = (int *)auStack_ac;
        auStack_ac[0] = 0;
        piStack_22c = (int *)0x109ad217;
        piStack_9c = piStack_228;
        piStack_98 = piStack_228;
        FUN_100e5aa0();
        piStack_22c = piStack_9c;
        piStack_230 = (int *)0x11dd962c;
        piStack_234 = (int *)0x109ad22e;
        FUN_104d1670();
        if ((puStack_94 != auStack_a8) && (puStack_94 != (undefined1 *)0x0)) {
          pcStack_224 = puStack_94;
          piStack_228 = (int *)0x109ad24d;
          FUN_10c3d5d0();
        }
      }
    }
    pcStack_224 = (char *)0x6;
    piStack_228 = (int *)0x109ad28a;
    iVar4 = FUN_1130bb80();
    if (iVar4 == 0) {
      piStack_228 = (int *)0x0;
      piStack_22c = (int *)0x11dde558;
      piStack_230 = (int *)0x109ad3b2;
      FUN_104d15e0();
      piStack_230 = (int *)&DAT_11d9d32b;
      piStack_234 = (int *)0x11dde54c;
      pcStack_238 = (char *)0x109ad3c7;
      FUN_104d1670();
    }
    else {
      piStack_228 = *(int **)(iVar4 + 4);
      piStack_22c = (int *)0x109ad29c;
      piStack_218 = (int *)FUN_104d86c0();
      if (piStack_218 != (int *)0x0) {
        piStack_228 = *(int **)(iVar4 + 4);
        piStack_22c = (int *)0x109ad2b8;
        (**(code **)(*piVar3 + 0x46c))();
        piStack_22c = (int *)0x109ad2bf;
        uVar6 = FUN_114e0340();
        piStack_22c = (int *)(uVar6 & 0xff);
        piStack_230 = (int *)0x11dde558;
        piStack_234 = (int *)0x109ad2d3;
        FUN_104d15e0();
        piStack_22c = (int *)auStack_b0;
        auStack_b0[0] = 0;
        piStack_230 = (int *)0x109ad300;
        piStack_a0 = piStack_22c;
        piStack_9c = piStack_22c;
        FUN_100e5aa0();
        piStack_230 = piStack_a0;
        piStack_234 = (int *)0x11dde54c;
        pcStack_238 = (char *)0x109ad317;
        FUN_104d1670();
        if ((piStack_a0 != (int *)auStack_b4) && (piStack_a0 != (int *)0x0)) {
          piStack_230 = piStack_a0;
          piStack_234 = (int *)0x109ad336;
          FUN_10c3d5d0();
        }
        piStack_230 = (int *)0x109ad340;
        FUN_117f69d0();
        piStack_230 = (int *)auStack_b4;
        auStack_b4[0] = 0;
        piStack_234 = (int *)0x109ad365;
        piStack_a4 = piStack_230;
        piStack_a0 = piStack_230;
        FUN_100e5aa0();
        piStack_234 = piStack_a4;
        pcStack_238 = "strNeedCardDes";
        piStack_23c = (int *)0x109ad37c;
        FUN_104d1670();
        if ((piStack_98 != (int *)auStack_ac) && (piStack_98 != (int *)0x0)) {
          piStack_228 = piStack_98;
          piStack_22c = (int *)0x109ad39b;
          FUN_10c3d5d0();
        }
      }
    }
    piStack_228 = (int *)0x7;
    piStack_22c = (int *)0x109ad3d8;
    piStack_22c = (int *)FUN_1130cb50();
    piStack_230 = (int *)0x11dde69c;
    piStack_234 = (int *)0x109ad3e9;
    FUN_104d1550();
    piStack_22c = (int *)0x3;
    piStack_230 = (int *)0x109ad3fa;
    piStack_230 = (int *)FUN_1130cb50();
    piStack_234 = (int *)0x11dde68c;
    pcStack_238 = (char *)0x109ad40b;
    FUN_104d1550();
    piStack_230 = (int *)&DAT_00000004;
    piStack_234 = (int *)0x109ad41c;
    piStack_234 = (int *)FUN_1130cb50();
    pcStack_238 = "nLimitEnterType";
    piStack_23c = (int *)0x109ad42d;
    FUN_104d1550();
    piStack_234 = (int *)&DAT_00000005;
    pcStack_238 = (char *)0x109ad43e;
    pcStack_238 = (char *)FUN_1130cb50();
    piStack_23c = (int *)0x11dde668;
    ppiStack_240 = (int **)0x109ad44f;
    FUN_104d1550();
    pcStack_238 = (char *)0x6;
    piStack_23c = (int *)0x109ad460;
    piStack_23c = (int *)FUN_1130cb50();
    ppiStack_240 = (int **)0x11dde6e0;
    piStack_244 = (int *)0x109ad471;
    FUN_104d1550();
    piStack_244 = (int *)uStack_f4;
    piStack_248 = (int *)0x11dde6d0;
    uStack_24c = 0x109ad488;
    FUN_104d1550();
    piStack_23c = (int *)0x109ad496;
    piStack_23c = (int *)FUN_1025b060();
    ppiStack_240 = (int **)0x11dc0840;
    piStack_244 = (int *)0x109ad4a7;
    FUN_104d1550();
    piStack_23c = (int *)0x109ad4b5;
    piStack_23c = (int *)FUN_1025b060();
    ppiStack_240 = (int **)0x11dde6bc;
    piStack_244 = (int *)0x109ad4c6;
    FUN_104d1550();
    piStack_244 = (int *)uStack_11c;
    piStack_248 = (int *)0x11dde6b0;
    uStack_24c = 0x109ad4dd;
    FUN_104d15e0();
    uStack_24c = CONCAT13((undefined1)iStack_118,uStack_11c._1_3_);
    pcStack_250 = "bCanQuickLineup";
    pcStack_254 = (char *)0x109ad4f4;
    FUN_104d15e0();
    piStack_23c = (int *)0xf6d39;
    ppiStack_240 = (int **)0x109ad506;
    iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
    iVar4 = 0;
    if (iVar7 != 0) {
      ppiStack_240 = (int **)0xf6d39;
      piStack_244 = (int *)0x109ad517;
      (**(code **)(*(int *)piVar3[4] + 0x1c))();
      piStack_244 = (int *)0x109ad51e;
      iVar7 = FUN_1141bcc0();
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
    }
    ppiStack_240 = (int **)0x109ad528;
    iVar7 = FUN_1184c850();
    ppiStack_240 = *(int ***)(iVar7 + 0x30);
    piStack_244 = (int *)0x109ad533;
    iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
    if (iVar7 != 0) {
      piStack_244 = (int *)0x109ad53e;
      iVar7 = FUN_1141bcc0();
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
    }
    piStack_244 = (int *)0x109ad548;
    iVar7 = FUN_1184c850();
    piStack_244 = *(int **)(iVar7 + 0x34);
    piStack_248 = (int *)0x109ad553;
    iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
    if (iVar7 != 0) {
      piStack_248 = (int *)0x109ad55e;
      iVar7 = FUN_1141bcc0();
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
    }
    piStack_248 = (int *)0x109ad568;
    iVar7 = FUN_1184c850();
    piStack_248 = *(int **)(iVar7 + 0x38);
    uStack_24c = 0x109ad573;
    iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
    if (iVar7 != 0) {
      uStack_24c = 0x109ad57e;
      iVar7 = FUN_1141bcc0();
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
    }
    uStack_24c = 0x109ad588;
    iVar7 = FUN_1184c850();
    uStack_24c = *(undefined4 *)(iVar7 + 0x40);
    pcStack_250 = (char *)0x109ad593;
    iVar7 = (**(code **)(*(int *)piVar3[4] + 0x1c))();
    pcStack_250 = (char *)iVar4;
    if (iVar7 != 0) {
      pcStack_250 = (char *)0x109ad59e;
      iVar7 = FUN_1141bcc0();
      pcStack_250 = (char *)iVar4;
      if (iVar4 <= iVar7) {
        pcStack_250 = (char *)iVar7;
      }
    }
    pcStack_254 = "bMatchCD";
    piStack_258 = (int *)0x109ad5b4;
    FUN_104d1550();
    pcStack_250 = (char *)0x8;
    pcStack_254 = (char *)0x109ad5c5;
    pcStack_254 = (char *)FUN_1130cb50();
    piStack_258 = (int *)0x11dde5f8;
    piStack_25c = (int *)0x109ad5d6;
    FUN_104d1550();
    pcStack_254 = (char *)0x109ad5de;
    uVar12 = FUN_111f8d20();
    piVar5 = piStack_220;
    uStack_164 = (undefined4)((ulonglong)uVar12 >> 0x20);
    pcStack_254 = (char *)uVar12;
    piStack_258 = piStack_220;
    piStack_25c = (int *)0x109ad5f5;
    (**(code **)(*piVar3 + 0x390))();
    piStack_25c = (int *)0x109ad5fc;
    uVar2 = CMHLevelInfo__CheckLevelProgressThreshold();
    piStack_25c = piVar5;
    piStack_244 = (int *)CONCAT31(piStack_244._1_3_,uVar2);
    ppiStack_260 = (int **)0x109ad606;
    iVar4 = FUN_107d7930();
    if (iVar4 != 0) {
      uVar2 = piStack_244._0_1_;
      if (*(int *)(iVar4 + 0x14) == 0x4b2) {
        uVar2 = 0;
      }
      piStack_244 = (int *)CONCAT31(piStack_244._1_3_,uVar2);
    }
    piStack_25c = piStack_244;
    ppiStack_260 = (int **)0x11dde5ec;
    ppiStack_264 = (int **)0x109ad63f;
    local_170 = iVar4;
    FUN_104d15e0();
    if (iVar4 == 0) {
      piStack_25c = (int *)0x0;
      ppiStack_260 = (int **)0x11dde654;
      ppiStack_264 = (int **)0x109ad670;
      FUN_104d1550();
      ppiStack_264 = (int **)0x0;
    }
    else {
      piStack_25c = *(int **)(iVar4 + 0x27c);
      ppiStack_260 = (int **)0x11dde654;
      ppiStack_264 = (int **)0x109ad65c;
      FUN_104d1550();
      ppiStack_264 = *(int ***)(iVar4 + 0x280);
    }
    ppiStack_268 = (int **)0x11dde644;
    piStack_26c = (int *)0x109ad682;
    FUN_104d1550();
    piStack_25c = (int *)0xc;
    ppiStack_260 = (int **)0x109ad693;
    iVar4 = FUN_1130bb80();
    if (iVar4 != 0) {
      ppiStack_260 = *(int ***)(iVar4 + 4);
      ppiStack_264 = (int **)0x11dde624;
      ppiStack_268 = (int **)0x109ad6aa;
      FUN_104d1550();
    }
    ppiStack_260 = (int **)0x109ad6ba;
    iVar4 = FUN_11545c70();
    ppiStack_260 = (int **)0x109ad6c3;
    iVar7 = FUN_11545bc0();
    ppiStack_260 = (int **)(iVar4 + iVar7);
    ppiStack_264 = (int **)0x11dde7a4;
    ppiStack_268 = (int **)0x109ad6d6;
    FUN_104d1550();
    aiStack_190[1] = 0;
    ppiStack_260 = (int **)(aiStack_190 + 1);
    aiStack_190[2] = 0;
    ppiStack_264 = (int **)0x109ad6fe;
    FUN_11a98a70();
    iVar4 = iStack_118;
    if (iStack_118 != iStack_114) {
      do {
        ppiStack_268 = (int **)0x109ad71f;
        ppiStack_264 = (int **)iVar4;
        FUN_109764f0();
        ppiStack_268 = (int **)0x0;
        piStack_26c = (int *)0x0;
        ppiStack_270 = (int **)0x0;
        pppiStack_274 = (int ***)&iStack_ec;
        iStack_ec = 0;
        piStack_e8 = (int *)0x0;
        ppiStack_278 = (int **)0x109ad74a;
        FUN_11a98de0();
        ppiStack_278 = &piStack_e4;
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_27c = (int **)0x109ad774;
        ppiStack_d4 = ppiStack_278;
        ppiStack_d0 = ppiStack_278;
        FUN_100e5aa0();
        ppiStack_27c = ppiStack_d4;
        ppiStack_280 = (int **)0x11dd707c;
        pcStack_284 = (char *)0x109ad78e;
        FUN_104d1670();
        if ((ppiStack_d4 != &piStack_e8) && (ppiStack_d4 != (int **)0x0)) {
          ppiStack_27c = ppiStack_d4;
          ppiStack_280 = (int **)0x109ad7ad;
          FUN_10c3d5d0();
        }
        ppiStack_27c = (int **)iStack_114;
        ppiStack_280 = (int **)0x11dd1610;
        pcStack_284 = (char *)0x109ad7ca;
        FUN_104d1550();
        ppiStack_27c = (int **)auStack_100;
        ppiStack_280 = ppiStack_1a0;
        pcStack_284 = (char *)0x109ad7e8;
        (**(code **)(*piStack_1a8 + 0x3c))();
        if (((uint)piStack_e4 >> 6 & 1) != 0) {
          ppiStack_268 = &piStack_e8;
          ppiStack_264 = (int **)uStack_e0;
          piStack_26c = (int *)0x109ad811;
          (**(code **)(*piStack_e8 + 8))();
          piStack_e8 = (int *)0x0;
        }
        piStack_e4 = (int *)0x0;
        if (iStack_ec != 0) {
          ppiStack_264 = (int **)iStack_ec;
          ppiStack_268 = (int **)0x109ad838;
          FUN_10c3da30();
        }
        if (iStack_f8 != 0) {
          ppiStack_264 = (int **)iStack_f8;
          ppiStack_268 = (int **)0x109ad84c;
          FUN_10c3d5d0();
        }
        iVar4 = iVar4 + 0x14;
      } while (iVar4 != iStack_114);
    }
    ppiStack_264 = (int **)(uint)(((byte)piStack_244 & 0x8f) == 10);
    ppiStack_268 = (int **)aiStack_190;
    piStack_26c = (int *)0x11dde798;
    ppiStack_270 = ppiStack_240;
    pppiStack_274 = (int ***)0x109ad88b;
    (**(code **)(*piStack_248 + 0x14))();
    piVar3 = piStack_23c;
    ppiVar11 = (int **)0x0;
    piStack_25c = (int *)0x0;
    ppiStack_264 = (int **)0x0;
    pppiStack_274 = (int ***)0x109ad8a3;
    iVar4 = (**(code **)(*piStack_23c + 0x4ec))();
    if ((iVar4 != 0) && ((int)ppiStack_260 - 1U < 0xd)) {
      pppiStack_274 = (int ***)ppiStack_260;
      ppiStack_278 = (int **)0x109ad8be;
      (**(code **)(*piVar3 + 0x4ec))();
      ppiStack_278 = (int **)0x109ad8c5;
      ppiVar11 = (int **)FUN_11577260();
      ppiStack_278 = ppiStack_264;
      ppiStack_27c = (int **)0x109ad8d9;
      ppiStack_260 = ppiVar11;
      (**(code **)(*piVar3 + 0x4ec))();
      ppiStack_27c = (int **)0x109ad8e0;
      ppiStack_264 = (int **)FUN_11577280();
    }
    ppiStack_278 = (int **)0x11de1df8;
    ppiStack_27c = (int **)0x109ad8f5;
    pppiStack_274 = (int ***)ppiVar11;
    FUN_104d1550();
    ppiStack_27c = ppiStack_264;
    ppiStack_280 = (int **)0x11de1e10;
    pcStack_284 = (char *)0x109ad909;
    FUN_104d1550();
    ppiStack_1d0 = (int **)0x0;
    pppiStack_274 = &ppiStack_1d0;
    uStack_1cc = 0;
    ppiStack_278 = (int **)0x109ad931;
    FUN_11a98a70();
    ppiStack_278 = &piStack_204;
    piStack_204 = (int *)0x0;
    piStack_200 = (int *)0x0;
    ppiStack_27c = (int **)0x109ad94d;
    FUN_11a98a70();
    if (0 < (int)ppiVar11) {
      ppiStack_27c = ppiStack_268;
      pcStack_284 = (char *)0x109ad95f;
      ppiStack_280 = ppiVar11;
      pcStack_284 = (char *)FUN_118a0370();
      piStack_288 = (int *)0x109ad965;
      iVar4 = FUN_109ac510();
      if (iVar4 != 0) {
        ppiStack_27c = (int **)0x109ad977;
        piVar5 = (int *)FUN_118a0350();
        puVar9 = (undefined4 *)*piVar5;
        ppiVar11 = ppiStack_264;
        piStack_26c = piVar5;
        if (puVar9 != (undefined4 *)piVar5[1]) {
          do {
            uStack_e0 = *puVar9;
            ppiStack_27c = &piStack_e8;
            piStack_e8 = (int *)0x0;
            piStack_e4 = (int *)0x3;
            ppiStack_280 = ppiStack_1d0;
            pcStack_284 = (char *)0x109ad9ca;
            (**(code **)(*piStack_1d8 + 0x3c))();
            if (((uint)piStack_e4 >> 6 & 1) != 0) {
              ppiStack_280 = &piStack_e8;
              ppiStack_27c = (int **)uStack_e0;
              pcStack_284 = (char *)0x109ad9f3;
              (**(code **)(*piStack_e8 + 8))();
            }
            puVar9 = puVar9 + 1;
            piVar3 = piStack_244;
            ppiVar11 = ppiStack_264;
          } while (puVar9 != (undefined4 *)piVar5[1]);
        }
      }
    }
    ppiStack_27c = (int **)0x109ada08;
    iVar4 = CMHLevelSystem__GetCurrentContext();
    ppiStack_240 = *(int ***)(iVar4 + 0xb8);
    if ((int)ppiVar11 < (int)ppiStack_240) {
      ppiStack_27c = ppiStack_268;
      ppiStack_280 = (int **)((int)ppiVar11 + 1);
      pcStack_284 = (char *)0x109ada27;
      pcStack_284 = (char *)FUN_118a0370();
      piStack_288 = (int *)0x109ada2d;
      iVar4 = FUN_109ac510();
      if (iVar4 != 0) {
        ppiStack_27c = (int **)0x109ada3f;
        piVar5 = (int *)FUN_118a0350();
        puVar9 = (undefined4 *)*piVar5;
        ppiVar11 = ppiStack_264;
        piStack_26c = piVar5;
        if (puVar9 != (undefined4 *)piVar5[1]) {
          do {
            uStack_e0 = *puVar9;
            ppiStack_27c = &piStack_e8;
            piStack_e8 = (int *)0x0;
            piStack_e4 = (int *)0x3;
            ppiStack_280 = (int **)piStack_200;
            pcStack_284 = (char *)0x109ada84;
            (**(code **)(*piStack_208 + 0x3c))();
            if (((uint)piStack_e4 >> 6 & 1) != 0) {
              ppiStack_280 = &piStack_e8;
              ppiStack_27c = (int **)uStack_e0;
              pcStack_284 = (char *)0x109adaad;
              (**(code **)(*piStack_e8 + 8))();
            }
            puVar9 = puVar9 + 1;
            piVar3 = piStack_244;
            ppiVar11 = ppiStack_264;
          } while (puVar9 != (undefined4 *)piVar5[1]);
        }
      }
    }
    ppiStack_27c = (int **)(uint)(((byte)piStack_25c & 0x8f) == 10);
    ppiStack_280 = &piStack_1d8;
    pcStack_284 = "preBossArr";
    piStack_288 = piStack_258;
    ppiStack_28c = (int **)0x109adae9;
    (*(code *)(*ppiStack_260)[5])();
    ppiStack_28c = (int **)(uint)(((byte)piStack_26c & 0x8f) == 10);
    ppiStack_290 = &piStack_218;
    pcStack_294 = "curBossArr";
    piStack_298 = (int *)ppiStack_268;
    pppiStack_29c = (int ***)0x109adb12;
    (*(code *)(*ppiStack_270)[5])();
    pppiStack_29c = &ppiStack_240;
    ppiStack_240 = (int **)0x0;
    piStack_23c = (int *)0x0;
    pppiStack_2a0 = (int ***)0x109adb2e;
    FUN_11a98a70();
    pppiStack_2a0 = &ppiStack_1e4;
    ppiStack_1e4 = (int **)0x0;
    ppiStack_1e0 = (int **)0x0;
    ppiStack_2a4 = (int **)0x109adb53;
    FUN_11a98a70();
    ppiStack_2a4 = ppiStack_270;
    ppiStack_2a8 = (int **)0x109adb5c;
    ppiStack_290 = (int **)FUN_10976e80();
    if (ppiStack_290 != (int **)0x0) {
      if (0 < (int)ppiVar11) {
        ppiStack_2a8 = (int **)0x109adb7b;
        ppiStack_2a4 = ppiVar11;
        piStack_298 = (int *)FUN_11827020();
        pppiStack_2ac = (int ***)0x109adb85;
        iVar4 = FUN_1097c720();
        if (((pcStack_294 != (char *)0xffffffff) &&
            (((pcStack_294 != (char *)0x0 || (*(int *)(iVar4 + 0x30) == 0)) &&
             (*(int *)(iVar4 + 0x28) != 0)))) &&
           ((iVar7 = (int)pcStack_294 - *(int *)(iVar4 + 0x30), -1 < iVar7 &&
            (iVar7 < *(int *)(iVar4 + 0x24))))) {
          iVar8 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / *(int *)(iVar4 + 0x28)) * 4);
          if ((iVar8 != 0) &&
             ((pcStack_294 = *(char **)(iVar8 + (iVar7 % *(int *)(iVar4 + 0x28)) * 4),
              pcStack_294 != (char *)0x0 &&
              (iVar4 = *(int *)(pcStack_294 + 0x14),
              iVar7 = *(int *)(pcStack_294 + 0x18) - iVar4 >> 0x1f, ppiVar11 = ppiStack_28c,
              (*(int *)(pcStack_294 + 0x18) - iVar4) / 0x18 + iVar7 != iVar7)))) {
            iVar7 = 0;
            uVar6 = 0;
            do {
              if (*(char *)(iVar4 + 0x14 + iVar7) == '\0') {
                ppiStack_2a4 = *(int ***)(iVar4 + iVar7);
                ppiStack_2a8 = (int **)0x109adc17;
                iVar8 = FUN_10254130();
                if (iVar8 != 0) {
                  ppiStack_2a4 = &piStack_110;
                  uStack_108 = *(undefined4 *)(iVar4 + iVar7);
                  piStack_110 = (int *)0x0;
                  uStack_10c = 3;
                  ppiStack_2a8 = ppiStack_240;
                  pppiStack_2ac = (int ***)0x109adc53;
                  (**(code **)(*piStack_248 + 0x3c))();
                  if ((uStack_10c >> 6 & 1) != 0) {
                    ppiStack_2a8 = &piStack_110;
                    ppiStack_2a4 = (int **)uStack_108;
                    pppiStack_2ac = (int ***)0x109adc7c;
                    (**(code **)(*piStack_110 + 8))();
                  }
                }
              }
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0x18;
              iVar4 = *(int *)(pcStack_294 + 0x14);
              param_2 = ppiStack_264;
              piVar3 = piStack_26c;
              ppiVar11 = ppiStack_28c;
            } while (uVar6 < (uint)((*(int *)(pcStack_294 + 0x18) - iVar4) / 0x18));
          }
        }
      }
      if ((int)ppiVar11 < (int)ppiStack_268) {
        ppiStack_2a4 = (int **)((int)ppiVar11 + 1);
        ppiStack_2a8 = (int **)0x109adcc8;
        iVar4 = FUN_11827020();
        pppiStack_274 = (int ***)&PTR_FUN_11dde830;
        ppiStack_2a8 = (int **)0x109adcd7;
        puVar9 = (undefined4 *)CLevelRegularRewardInfo__GetManager();
        ppiStack_2a4 = (int **)*puVar9;
        if (ppiStack_2a4 == (int **)0x0) {
          pppiStack_2ac = &ppiStack_270;
          ppiStack_2a8 = (int **)0x11dde9c0;
          ppiStack_2b0 = (int **)0x109adced;
          ppiStack_2a4 = (int **)CInfoManager__FindByName();
          if (ppiStack_2a4 == (int **)0x0) {
            if ((DAT_123c03f4 & 1) == 0) {
              DAT_123c03f4 = DAT_123c03f4 | 1;
              ppiStack_2a4 = (int **)0x109add0c;
              FUN_1097cd80();
              ppiStack_2a4 = (int **)&LAB_11c79fe0;
              ppiStack_2a8 = (int **)0x109add16;
              FUN_11a8911f();
            }
            ppiStack_2a4 = (int **)&DAT_123c03f8;
          }
        }
        ppiStack_270 = (int **)&PTR_FUN_11da54a8;
        if ((iVar4 != -1) &&
           ((((iVar4 != 0 || (*(int *)((int)ppiStack_2a4 + 0x30) == 0)) &&
             (*(int *)((int)ppiStack_2a4 + 0x28) != 0)) &&
            ((iVar4 = iVar4 - *(int *)((int)ppiStack_2a4 + 0x30), -1 < iVar4 &&
             (iVar4 < *(int *)((int)ppiStack_2a4 + 0x24))))))) {
          iVar7 = *(int *)(*(int *)((int)ppiStack_2a4 + 0x20) +
                          (iVar4 / *(int *)((int)ppiStack_2a4 + 0x28)) * 4);
          if ((iVar7 != 0) &&
             ((ppiStack_268 = *(int ***)(iVar7 + (iVar4 % *(int *)((int)ppiStack_2a4 + 0x28)) * 4),
              ppiStack_268 != (int **)0x0 &&
              (iVar4 = (int)ppiStack_268[5], iVar7 = (int)ppiStack_268[6] - iVar4 >> 0x1f,
              ((int)ppiStack_268[6] - iVar4) / 0x18 + iVar7 != iVar7)))) {
            iVar7 = 0;
            uVar6 = 0;
            do {
              if (*(char *)(iVar4 + 0x14 + iVar7) == '\0') {
                ppiStack_2a4 = *(int ***)(iVar4 + iVar7);
                ppiStack_2a8 = (int **)0x109addb3;
                iVar8 = FUN_10254130();
                if (iVar8 != 0) {
                  ppiStack_2a4 = &piStack_110;
                  uStack_108 = *(undefined4 *)(iVar4 + iVar7);
                  piStack_110 = (int *)0x0;
                  uStack_10c = 3;
                  ppiStack_2a8 = ppiStack_1e0;
                  pppiStack_2ac = (int ***)0x109addf9;
                  (**(code **)((int)*ppiStack_1e8 + 0x3c))();
                  if ((uStack_10c >> 6 & 1) != 0) {
                    ppiStack_2a8 = &piStack_110;
                    ppiStack_2a4 = (int **)uStack_108;
                    pppiStack_2ac = (int ***)0x109ade22;
                    (**(code **)(*piStack_110 + 8))();
                  }
                }
              }
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0x18;
              iVar4 = (int)ppiStack_268[5];
              param_2 = ppiStack_264;
              piVar3 = piStack_26c;
            } while (uVar6 < (uint)(((int)ppiStack_268[6] - iVar4) / 0x18));
          }
        }
      }
    }
    ppiStack_2a4 = (int **)(uint)(((byte)pcStack_284 & 0x8f) == 10);
    ppiStack_2a8 = &piStack_248;
    pppiStack_2ac = (int ***)0x11de1db0;
    ppiStack_2b0 = ppiStack_280;
    uStack_2b4 = 0x109ade7c;
    (**(code **)(*piStack_288 + 0x14))();
    uStack_2b4 = (uint)(((byte)pcStack_294 & 0x8f) == 10);
    ppiStack_2b8 = &piStack_1f8;
    (**(code **)(*piStack_298 + 0x14))(ppiStack_290,"curRewardArr");
    iVar4 = FUN_116bd200();
    uVar10 = *(undefined4 *)(iVar4 + 0x40);
    if (param_2 != (int **)0x0) {
      piStack_130 = (int *)0x0;
      uStack_12c = 3;
      uStack_128 = uVar10;
      (*(code *)(*ppiStack_2a8)[5])
                (pppiStack_2a0,"materialTicketID",&piStack_130,((byte)ppiStack_2a4 & 0x8f) == 10);
      if ((uStack_12c >> 6 & 1) != 0) {
        (**(code **)(*piStack_130 + 8))(&piStack_130,uStack_128);
      }
    }
    if (piVar3[0xb47] != 0) {
      uVar10 = FUN_113fa380(uVar10);
      FUN_104d1440("materialTicketNum",uVar10);
    }
    if (((piStack_1d8 != (int *)0x0) && (piStack_1d8[0x97] != 0)) &&
       (cVar1 = (**(code **)(*piVar3 + 0x394))(), cVar1 == '\0')) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x3a4))();
      uVar6 = (**(code **)(*piVar3 + 0xa4))();
      if (uVar6 < 2) {
        FUN_104d15e0("IsShowMaterialTicket",1);
      }
    }
    (*(code *)(*ppiStack_280)[5])
              (ppiStack_278,"infoData",&ppiStack_2a8,((byte)ppiStack_27c & 0x8f) == 10);
    if (((uint)pcStack_214 >> 6 & 1) != 0) {
      (**(code **)(*piStack_218 + 8))(&piStack_218,pcStack_210);
      piStack_218 = (int *)0x0;
    }
    pcStack_214 = (char *)0x0;
    if (((uint)pppiStack_274 >> 6 & 1) != 0) {
      (*(code *)(*ppiStack_278)[2])(&ppiStack_278,ppiStack_270);
      ppiStack_278 = (int **)0x0;
    }
    pppiStack_274 = (int ***)0x0;
    if (((uint)piStack_25c >> 6 & 1) != 0) {
      (*(code *)(*ppiStack_260)[2])(&ppiStack_260,piStack_258);
      ppiStack_260 = (int **)0x0;
    }
    piStack_25c = (int *)0x0;
    if (((uint)piStack_22c >> 6 & 1) != 0) {
      (**(code **)(*piStack_230 + 8))(&piStack_230,piStack_228);
      piStack_230 = (int *)0x0;
    }
    piStack_22c = (int *)0x0;
    if (((uint)pcStack_1fc >> 6 & 1) != 0) {
      (**(code **)(*piStack_200 + 8))(&piStack_200,piStack_1f8);
      piStack_200 = (int *)0x0;
    }
    pcStack_1fc = (char *)0x0;
    if ((uStack_2b4 >> 6 & 1) != 0) {
      (*(code *)(*ppiStack_2b8)[2])(&ppiStack_2b8,ppiStack_2b0);
      ppiStack_2b8 = (int **)0x0;
    }
    uStack_2b4 = 0;
    if (((uint)piStack_244 >> 6 & 1) != 0) {
      (**(code **)(*piStack_248 + 8))(&piStack_248,ppiStack_240);
      piStack_248 = (int *)0x0;
    }
    piStack_244 = (int *)0x0;
    FUN_108f62b0();
  }
  if ((local_174 >> 6 & 1) != 0) {
    ppiStack_1c0 = &local_178;
    puStack_1bc = (undefined1 *)local_170;
    pcStack_1c4 = (char *)0x109ae175;
    (**(code **)(*local_178 + 8))();
  }
LAB_109ae175:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109b5360 @ 109b5360  size=862 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "isWeapon"
//   "roleLevel"
//   "srcEquipEnforceLv"
//   "awakeningLevel"
//   "roleHunterStarLv"
//   "sourceRare"
//   "itemLevel"
//   "ItemRank"
//   "sourceItemName"
//   "destArrayLength"

/* [RE-AUTO c0]
   strings:
     ""isWeapon""
     ""roleLevel""
     ""srcEquipEnforceLv""
     ""awakeningLevel""
     ""roleHunterStarLv""
     ""sourceRare""
     ""itemLevel""
     ""ItemRank""
     ""sourceItemName""
     ""destArrayLength"" */

void FUN_109b5360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_9c;
  undefined4 local_98;
  int *piStack_94;
  int *local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int aiStack_74 [6];
  undefined1 auStack_5c [52];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_9c;
  local_98 = param_2;
  local_90 = (int *)0x0;
  local_8c = param_4[1];
  local_84 = param_4[3];
  local_88 = param_4[2];
  local_80 = param_4[4];
  if ((local_8c >> 6 & 1) != 0) {
    local_90 = (int *)*param_4;
    (**(code **)(*local_90 + 4))(&local_90,local_88);
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_9c = param_4[8];
  }
  else {
    local_9c = -0x21524151;
  }
  if (((param_4[0xd] & 0x8f) == 3) || (uVar6 = 0xdeadbeaf, (param_4[0xd] & 0x8f) == 4)) {
    uVar6 = param_4[0xe];
  }
  piVar7 = (int *)0x0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))();
    if (piVar3 != (int *)0x0) {
      piVar7 = piVar3;
    }
  }
  if (piVar7[0xb47] != 0) {
    piVar3 = (int *)FUN_113f9bb0(local_9c,uVar6);
    if (piVar3 != (int *)0x0) {
      iVar4 = FUN_11669250();
      local_9c = FUN_1052bdd0(*(undefined4 *)(iVar4 + 0x10));
      if (local_9c != 0) {
        uVar6 = FUN_11669730();
        aiStack_74[0] = FUN_1052c9e0(uVar6);
        if (aiStack_74[0] != 0) {
          uVar1 = FUN_116c5290();
          FUN_104d15e0("isWeapon",uVar1);
          uVar6 = CPlayer__GetHuntRankOrCount();
          FUN_104d1550("roleLevel",uVar6);
          uVar6 = FUN_1166c160();
          FUN_104d1550("srcEquipEnforceLv",uVar6);
          FUN_104d1440("awakeningLevel",piVar3[0x6b]);
          piStack_94 = (int *)0x0;
          iVar4 = (**(code **)(*piVar7 + 0x46c))();
          if (iVar4 != 0) {
            piVar7 = (int *)(**(code **)(*piVar7 + 0x46c))();
            piStack_94 = (int *)(**(code **)(*piVar7 + 0x18))();
            FUN_1025b060();
            FUN_1025b060();
          }
          uVar6 = local_98;
          FUN_104d1550("roleHunterStarLv",piStack_94);
          FUN_104d1550("sourceRare",*(undefined4 *)(local_9c + 0x4c));
          uVar5 = (**(code **)(*piVar3 + 0x18))();
          FUN_104d1550("itemLevel",uVar5);
          uVar5 = FUN_11669840();
          FUN_104d1550("ItemRank",uVar5);
          iVar4 = FUN_100e5b40(auStack_24);
          FUN_104d1670("sourceItemName",*(undefined4 *)(iVar4 + 0x14));
          if ((puStack_14 != auStack_28) && (puStack_14 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_14);
          }
          aiStack_74[0] = 0;
          aiStack_74[1] = 0;
          local_98 = CONCAT31(local_98._1_3_,((byte)local_90 & 0x8f) == 10);
          cVar2 = (**(code **)(*piStack_94 + 0x10))(local_8c,"destArrayLength",aiStack_74,local_98);
          if (cVar2 != '\0') {
            FUN_109b5990(uVar6,&stack0xffffff5c,local_88,piVar3);
          }
          FUN_104f4330(param_4 + 0x12);
          FUN_104f4330(param_4 + 0x18);
          FUN_109b6810(uVar6,auStack_5c,aiStack_74,piVar3);
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
        }
      }
    }
  }
  if ((local_8c >> 6 & 1) != 0) {
    (**(code **)(*local_90 + 8))(&local_90,local_88);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109b5990 @ 109b5990  size=1043 ===== */
// strings:
//   "destEquipArray"
//   "equipID"
//   "equipName"
//   "equipRare"
//   "itemLevel"
//   "playerUseLevelMin"
//   "playerUseLevelMax"
//   "equipCounts"
//   "recastMoney"
//   "currentMoney"
//   "enforceRequirement"
//   "hunterstarRequirement"
//   "rankDownLevel"
//   "enforceDownLevel"
//   "newRankLevel"
//   "bBindState"
//   "enforceLevel"
//   "breakLevel"
//   "canBreak"
//   "enforceRuleID"

/* [RE-AUTO c0]
   strings:
     ""destEquipArray""
     ""equipID""
     ""equipName""
     ""equipRare""
     ""itemLevel""
     ""playerUseLevelMin""
     ""playerUseLevelMax""
     ""equipCounts""
     ""recastMoney""
     ""currentMoney"" */

void FUN_109b5990(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_54;
  undefined4 local_50;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  int *local_24;
  uint local_20;
  undefined4 local_1c;
  int local_c;
  int local_8;
  
  local_3c = (int *)0x0;
  local_38 = 0;
  local_24 = (int *)0x0;
  local_20 = 0;
  iVar4 = FUN_11669250();
  iVar4 = FUN_1052bdd0(*(undefined4 *)(iVar4 + 0x10));
  local_8 = iVar4;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    local_c = (**(code **)(*piVar1 + 0xb4))();
    if ((local_c != 0) && (*(int *)(local_c + 0x2d1c) != 0)) {
      iVar5 = FUN_107ec870(*(undefined4 *)(param_3 + 0x18));
      if (iVar5 != 0) {
        iVar5 = FUN_1183d500(0);
        if (iVar5 != 0) {
          cVar3 = (**(code **)(*(int *)*param_2 + 0x10))
                            (param_2[2],"destEquipArray",&local_3c,((byte)param_2[1] & 0x8f) == 10);
          if ((cVar3 != '\0') && (((byte)local_38 & 0x8f) == 9)) {
            iVar6 = (**(code **)(*local_3c + 0x28))(local_34);
            if (iVar6 != 0) {
              cVar3 = (**(code **)(*local_3c + 0x30))(local_34,0,&local_24);
              if (cVar3 != '\0') {
                FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar4 + 0x10));
                FUN_104d1550("equipID",*(undefined4 *)(local_8 + 0x10));
                FUN_104d1790("equipName",param_3 + 0x28);
                uVar7 = (**(code **)(*param_4 + 0x2c))();
                FUN_104d1550("equipRare",uVar7);
                FUN_104d1550("itemLevel",*(undefined4 *)(local_8 + 0x40));
                FUN_104d1550("playerUseLevelMin",*(undefined4 *)(local_8 + 0x40));
                FUN_104d1550("playerUseLevelMax",500);
                FUN_104d1550("equipCounts",0);
                FUN_104d1550("recastMoney",*(undefined4 *)(iVar5 + 4));
                iVar4 = FUN_1025b060();
                iVar6 = FUN_1025b060();
                FUN_104d1550("currentMoney",iVar6 + iVar4);
                FUN_104d1550("enforceRequirement",0);
                FUN_104d1550("hunterstarRequirement",0);
                FUN_104d1550("rankDownLevel",0);
                FUN_104d1550("enforceDownLevel",0);
                FUN_104d1550("newRankLevel",0);
                FUN_104d15e0("bBindState",1);
                uVar7 = FUN_1166c160();
                FUN_104d1550("enforceLevel",uVar7);
                uVar7 = FUN_1166c400();
                FUN_104d1550("breakLevel",uVar7);
                uVar2 = (uint)param_4 >> 8;
                param_4 = (int *)((uint)param_4 & 0xffffff00);
                iVar4 = *(int *)(local_8 + 0x144);
                if (0 < iVar4) {
                  iVar6 = FUN_1166c160();
                  param_4 = (int *)CONCAT31((int3)uVar2,iVar4 <= iVar6);
                }
                FUN_104d15e0("canBreak",param_4);
                FUN_104d1550("enforceRuleID",0);
                FUN_104d1550("nCraftCreditID",*(undefined4 *)(iVar5 + 8));
                uVar7 = FUN_113fa380(*(undefined4 *)(iVar5 + 8));
                FUN_104d1550("nOwnCraftCredit",uVar7);
                FUN_104d1550("nCraftCreditMax",*(undefined4 *)(iVar5 + 0xc));
                FUN_104d1550("nCraftMoney",*(undefined4 *)(iVar5 + 0x10));
                FUN_104d15e0("equipHasEnoughMaterial",0);
                FUN_104d1790("newName",param_3 + 0x28);
                local_54 = 0;
                local_50 = 0;
                param_4 = (int *)CONCAT31(param_4._1_3_,((byte)local_20 & 0x8f) == 10);
                cVar3 = (**(code **)(*local_24 + 0x10))
                                  (local_1c,"arrayMaterialData",&local_54,param_4);
                if (cVar3 != '\0') {
                  FUN_109b5db0(param_1,&local_24,&local_54,iVar5);
                }
                FUN_104d7c10();
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_24 + 8))(&local_24,local_1c);
    local_24 = (int *)0x0;
  }
  local_20 = 0;
  if ((local_38 >> 6 & 1) != 0) {
    (**(code **)(*local_3c + 8))(&local_3c,local_34);
  }
  return;
}



/* ===== FUN_109bb850 @ 109bb850  size=822 ===== */
// strings:
//   "InitModel"
//   "FetchActivityData"
//   "FetchNodeData"
//   "FetchRankData"
//   "FetchBlockInfo"
//   "DrawReward"
//   "RequestDice"
//   "RequestRandomDice"
//   "RequestRankData"
//   "PayForBlock"
//   "GetCurrentRound"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""FetchActivityData""
     ""FetchNodeData""
     ""FetchRankData""
     ""FetchBlockInfo""
     ""DrawReward""
     ""RequestDice""
     ""RequestRandomDice""
     ""RequestRankData""
     ""PayForBlock"" */

void FUN_109bb850(void)

{
  code *pcStack_d4;
  char *pcStack_d0;
  undefined1 **ppuStack_cc;
  undefined4 ***pppuStack_c8;
  undefined1 *puStack_c4;
  code **ppcStack_c0;
  undefined1 ***pppuStack_bc;
  code ***pppcStack_b8;
  undefined1 **ppuStack_b4;
  undefined1 **ppuStack_b0;
  undefined4 ***pppuStack_ac;
  undefined4 ***pppuStack_a8;
  undefined1 ***pppuStack_a4;
  undefined1 ***pppuStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  undefined4 ***pppuStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
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
  pppcStack_34 = (code ***)0x109bb884;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109bcb30;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109bb895;
  FUN_109bd510();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109bb8ab;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddfbb1;
  pppcStack_40 = (code ***)0x11ddfba0;
  pppcStack_44 = (code ***)0x109bb8cb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109bc160;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109bb8dc;
  FUN_109bd510();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109bb8f2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de2b1d;
  pppcStack_50 = (code ***)0x11de2b10;
  pppcStack_54 = (code ***)0x109bb912;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109bbb90;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109bb923;
  FUN_109bd510();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109bb939;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de2aed;
  pppcStack_60 = (code ***)0x11de2ae0;
  pppcStack_64 = (code ***)0x109bb959;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)data__RankDataMo_109bbe80;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109bb96a;
  FUN_109bd510();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppuStack_70 = (undefined4 ***)0x109bb980;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de2ade;
  pppuStack_70 = (undefined4 ***)0x11de2ad0;
  pppuStack_74 = (undefined4 ***)0x109bb9a0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppuStack_74 = (undefined4 ***)FUN_109bc7b0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109bb9b1;
  FUN_109bd510();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109bb9c7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_7c = (code ***)0x11ddfb3a;
  pppcStack_80 = (code ***)0x11ddfb30;
  pppcStack_84 = (code ***)0x109bb9e7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109bc950;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppuStack_8c = (undefined4 ***)0x109bb9f8;
  FUN_109bd510();
  if (((code ****)pppuStack_70 != &pppcStack_84) && ((code ****)pppuStack_70 != (code ****)0x0)) {
    pppuStack_8c = pppuStack_70;
    pppuStack_90 = (undefined4 ***)0x109bba0e;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppuStack_8c = (undefined4 ***)0x11de2b0f;
  pppuStack_90 = (undefined4 ***)0x11de2b04;
  pppuStack_94 = (undefined4 ***)0x109bba2e;
  pppuStack_70 = pppuStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)&LAB_109bc9d0;
  pppcStack_98 = (code ***)&pppuStack_8c;
  pppcStack_9c = (code ***)0x109bba3f;
  FUN_109bd510();
  if (((undefined4 ****)pppcStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppcStack_80 != (undefined4 ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppuStack_a0 = (undefined1 ***)0x109bba55;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppuStack_94;
  pppcStack_9c = (code ***)0x11de2b01;
  pppuStack_a0 = (undefined1 ***)0x11de2af0;
  pppuStack_a4 = (undefined1 ***)0x109bba75;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppuStack_a4 = (undefined1 ***)FUN_109bca10;
  pppuStack_a8 = &pppcStack_9c;
  pppuStack_ac = (undefined4 ***)0x109bba86;
  FUN_109bd510();
  if (((undefined1 ****)pppuStack_90 != &pppuStack_a4) &&
     ((undefined1 ****)pppuStack_90 != (undefined1 ****)0x0)) {
    pppuStack_ac = pppuStack_90;
    ppuStack_b0 = (undefined1 **)0x109bba9c;
    FUN_10c3d5d0();
  }
  pppuStack_94 = &pppuStack_a4;
  pppuStack_ac = (undefined4 ***)0x11de2ab3;
  ppuStack_b0 = (undefined1 **)0x11de2aa4;
  ppuStack_b4 = (undefined1 **)0x109bbabc;
  pppuStack_90 = pppuStack_94;
  FUN_100b62c0();
  ppuStack_b4 = (undefined1 **)&LAB_109bbe30;
  pppcStack_b8 = (code ***)&pppuStack_ac;
  pppuStack_bc = (undefined1 ***)0x109bbacd;
  FUN_109bd510();
  if ((pppuStack_a0 != &ppuStack_b4) && (pppuStack_a0 != (undefined1 ***)0x0)) {
    pppuStack_bc = pppuStack_a0;
    ppcStack_c0 = (code **)0x109bbae3;
    FUN_10c3d5d0();
  }
  pppuStack_a4 = &ppuStack_b4;
  pppuStack_bc = (undefined1 ***)0x11de2aa3;
  ppcStack_c0 = (code **)0x11de2a98;
  puStack_c4 = (undefined1 *)0x109bbb03;
  pppuStack_a0 = pppuStack_a4;
  FUN_100b62c0();
  puStack_c4 = &LAB_109bca70;
  pppuStack_c8 = &pppuStack_bc;
  ppuStack_cc = (undefined1 **)0x109bbb14;
  FUN_109bd510();
  if ((ppuStack_b0 != &puStack_c4) && (ppuStack_b0 != (undefined1 **)0x0)) {
    ppuStack_cc = ppuStack_b0;
    pcStack_d0 = (char *)0x109bbb2a;
    FUN_10c3d5d0();
  }
  ppuStack_b4 = &puStack_c4;
  ppuStack_cc = (undefined1 **)0x11de2acf;
  pcStack_d0 = "GetCurrentRound";
  pcStack_d4 = (code *)0x109bbb4a;
  ppuStack_b0 = ppuStack_b4;
  FUN_100b62c0();
  pcStack_d4 = FUN_109bcab0;
  FUN_109bd510(&ppuStack_cc);
  if ((ppcStack_c0 != &pcStack_d4) && (ppcStack_c0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_c0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109bc160 @ 109bc160  size=1615 ===== */
// calls: CActivityMgr::GetActivityState, data::RewardItemMo, CPet::SetName
// strings:
//   "startDateYear"
//   "startDateMonth"
//   "startDateDay"
//   "endDateYear"
//   "endDateMonth"
//   "endDateDay"
//   "iItemId"
//   "iItemDataId"
//   "iItemCount"
//   "bClaimed"
//   "bEnabled"
//   "strItemName"
//   "rewardArray"
//   "currentNode"
//   "currentAccStep"
//   "currentRound"
//   "currentDice"
//   "roundReward"
//   "roundRewardArray"
//   "fixedTime"

/* [RE-AUTO c0]
   calls: data::RewardItemMo
   strings:
     ""startDateYear""
     ""startDateMonth""
     ""startDateDay""
     ""endDateYear""
     ""endDateMonth""
     ""endDateDay""
     ""iItemId""
     ""iItemDataId""
     ""iItemCount""
     ""bClaimed"" */

void FUN_109bc160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 unaff_EDI;
  int iVar7;
  int *piVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined1 auStack_11c [4];
  int iStack_118;
  undefined4 local_114;
  int *local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  int iStack_fc;
  int aiStack_f8 [3];
  int iStack_ec;
  int iStack_e8;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [12];
  int *piStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  int *piStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_11c;
  local_10c = param_4[1];
  local_104 = param_4[3];
  local_100 = param_4[4];
  local_114 = param_2;
  local_110 = (int *)0x0;
  local_108 = param_4[2];
  if ((local_10c >> 6 & 1) != 0) {
    local_110 = (int *)*param_4;
    (**(code **)(*local_110 + 4))(&local_110,local_108);
  }
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) &&
      ((iStack_118 = (**(code **)(*piVar8 + 0xb4))(), iStack_118 != 0 &&
       (*(int *)(iStack_118 + 0x2acc) != 0)))) && (iVar1 = FUN_109bcb40(), iVar1 != 0)) {
    uVar2 = FUN_109bcb80();
    iStack_e8 = CActivityMgr__GetActivityState(uVar2);
    if (iStack_e8 != 0) {
      uVar2 = FUN_109bcb80();
      iVar1 = FUN_1122b9d0(uVar2);
      aiStack_f8[0] = iVar1;
      if ((iVar1 != 0) && (iStack_ec = *(int *)(iStack_118 + 0x2b10), iStack_ec != 0)) {
        uVar10 = 0;
        piVar8 = *(int **)(iVar1 + 1);
        FUN_10a19840(piVar8,0);
        uVar2 = 0;
        FUN_10a19840(*(undefined4 *)(iVar1 + 5),0);
        FUN_104d1550("startDateYear",iStack_64 + 0x76c);
        FUN_104d1550("startDateMonth",iStack_68 + 1);
        FUN_104d1550("startDateDay",uStack_6c);
        FUN_104d1550("endDateYear",iStack_34 + 0x76c);
        FUN_104d1550("endDateMonth",iStack_38 + 1);
        FUN_104d1550("endDateDay",uStack_3c);
        puStack_b0 = (undefined1 *)0x0;
        uStack_ac = 0;
        FUN_11a98a70(&puStack_b0);
        iVar1 = 0;
        if (*(char *)(local_10c + 0xad2) != '\0') {
          puVar6 = (undefined1 *)(local_10c + 0xae5);
          do {
            if (puVar6[-0x11] == '0') {
              aiStack_f8[0] = 0;
              uVar3 = (uint)*(byte *)(iStack_fc + 5);
              uVar4 = FUN_109bcb80(uVar3,puVar6[-0x12],aiStack_f8);
              FUN_11513b40(uVar4);
              if (local_108 == 0) {
LAB_109bc3ac:
                local_104 = local_104 & 0xffffff00;
              }
              else {
                local_104 = CONCAT31(local_104._1_3_,1);
                if (local_108 < (uint)(int)*(short *)(puVar6 + 0x28)) goto LAB_109bc3ac;
              }
              local_100 = 0;
              uVar4 = FUN_109bcb80(*(undefined1 *)(local_10c + 5),*puVar6,&local_100);
              FUN_11513b40(uVar4);
              if ((1 < iVar1) && (*(int **)(puVar6 + 4) <= local_110)) {
                FUN_1151a5c0();
              }
              data__RewardItemMo(uVar3);
              FUN_104d1550("iItemId",puVar6[-0x12]);
              FUN_104d1550("iItemDataId",*(undefined4 *)(puVar6 + -0xf));
              FUN_104d1550("iItemCount",(int)*(short *)(puVar6 + -0xb));
              FUN_104d15e0("bClaimed",iStack_118);
              FUN_104d15e0("bEnabled",uVar10);
              unaff_EDI = 0;
              CPet__SetName(puVar6 + 0x2a);
              puStack_b4 = auStack_c4;
              auStack_c4[0] = 0;
              puStack_b0 = puStack_b4;
              FUN_100e5aa0(puStack_b4);
              FUN_104d1670("strItemName",puStack_b4);
              if ((puStack_b4 != auStack_c8) && (puStack_b4 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_b4);
              }
              FUN_100e5670();
              (**(code **)(*piStack_e0 + 0x3c))(uStack_d8,&iStack_118);
              FUN_109a88f0();
            }
            iVar1 = iVar1 + 1;
            puVar6 = puVar6 + 0x423;
          } while (iVar1 < (int)(uint)*(byte *)(local_10c + 0xad2));
        }
        FUN_104d12b0("rewardArray",&puStack_b4);
        iVar1 = FUN_1025b060();
        FUN_104d1550("currentNode",iVar1 + -1);
        uVar4 = FUN_1025b060();
        FUN_104d1550("currentAccStep",uVar4);
        uVar4 = FUN_1025b060();
        FUN_104d1550("currentRound",uVar4);
        iVar1 = FUN_11800150();
        uVar4 = FUN_113fa150(*(undefined4 *)(iVar1 + 0x30),0xffffffff);
        FUN_104d1550("currentDice",uVar4);
        iVar1 = FUN_11800150();
        FUN_104d1550("roundReward",*(undefined4 *)(iVar1 + 0x34));
        uStack_d4 = 0;
        uStack_d0 = 0;
        FUN_11a98a70(&uStack_d4);
        iVar1 = FUN_109bb530();
        bVar9 = (byte)uVar10;
        iVar7 = 0;
        if (0 < iVar1) {
          do {
            piVar5 = (int *)FUN_109bb4a0(iVar7);
            data__RewardItemMo(uVar2);
            FUN_104d1550("iItemId",piVar5[5]);
            uVar4 = (**(code **)(*piVar5 + 0x18))();
            FUN_104d1550("iItemCount",uVar4);
            (**(code **)(*piStack_dc + 0x3c))(uStack_d4,&iStack_fc);
            FUN_109a88f0();
            bVar9 = (byte)uVar10;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        (**(code **)(*piVar8 + 0x14))(unaff_EDI,"roundRewardArray",&uStack_d8,(bVar9 & 0x8f) == 10);
        iVar1 = FUN_1151a480();
        FUN_104d1550("fixedTime",iVar1 + 1);
        uVar2 = FUN_117ff580(iVar1 + 1);
        FUN_104d1550("needCredit",uVar2);
        if (((uint)puStack_b4 >> 6 & 1) != 0) {
          (**(code **)(*piStack_b8 + 8))(&piStack_b8,puStack_b0);
          piStack_b8 = (int *)0x0;
        }
        puStack_b4 = (undefined1 *)0x0;
        if ((uStack_9c >> 6 & 1) != 0) {
          (**(code **)(*piStack_a0 + 8))(&piStack_a0,uStack_98);
          piStack_a0 = (int *)0x0;
        }
        uStack_9c = 0;
      }
    }
  }
  if ((local_10c >> 6 & 1) != 0) {
    (**(code **)(*local_110 + 8))(&local_110,local_108);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109c0c00 @ 109c0c00  size=879 ===== */
// strings:
//   "InitModel"
//   "TowerLevelUp"
//   "TowerDefenseDestroy"
//   "TowerDefenseRecover"
//   "TowerDefenseEncourage"
//   "TowerDefenseDragonAtt"
//   "TowerDefenseFlying"
//   "TowerDefenseUpdate"
//   "TowerDefenseCommanderApply"
//   "TowerDefenseCommanderQuit"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""TowerLevelUp""
     ""TowerDefenseDestroy""
     ""TowerDefenseRecover""
     ""TowerDefenseEncourage""
     ""TowerDefenseDragonAtt""
     ""TowerDefenseFlying""
     ""TowerDefenseUpdate""
     ""TowerDefenseCommanderApply""
     ""TowerDefenseCommanderQuit"" */

void __fastcall FUN_109c0c00(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  code *pcStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  code ***pppcStack_b8;
  code *pcStack_b4;
  code **ppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x109c0c34;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109c0f80;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109c0c45;
  FUN_109c2e50();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109c0c5b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de2e68;
  pppcStack_40 = (code ***)0x11de2e5c;
  pppcStack_44 = (code ***)0x109c0c7b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109c1680;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109c0c8c;
  FUN_109c2e50();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109c0ca2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de2e5b;
  pppcStack_50 = (code ***)0x11de2e48;
  pppcStack_54 = (code ***)0x109c0cc2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109c1b30;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109c0cd3;
  FUN_109c2e50();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109c0ce9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de2e97;
  pppcStack_60 = (code ***)0x11de2e84;
  pppcStack_64 = (code ***)0x109c0d09;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109c1ad0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109c0d1a;
  FUN_109c2e50();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109c0d30;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de2e81;
  pppcStack_70 = (code ***)0x11de2e6c;
  pppcStack_74 = (code ***)0x109c0d50;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109c1a70;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109c0d61;
  FUN_109c2e50();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109c0d77;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de2e15;
  pppcStack_80 = (code ***)0x11de2e00;
  pppcStack_84 = (code ***)0x109c0d97;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109c1a10;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109c0da8;
  FUN_109c2e50();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109c0dbe;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11de2dfe;
  pppcStack_90 = (code ***)0x11de2dec;
  pppcStack_94 = (code ***)0x109c0dde;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109c19b0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109c0def;
  FUN_109c2e50();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x109c0e05;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de2e46;
  ppcStack_a0 = (code **)0x11de2e34;
  ppcStack_a4 = (code **)0x109c0e25;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)FUN_109c1d70;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109c0e36;
  FUN_109c2e50();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppcStack_b0 = (code **)0x109c0e4c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)0x11de2e32;
  ppcStack_b0 = (code **)0x11de2e18;
  pcStack_b4 = (code *)0x109c0e6c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_109c2540;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  ppcStack_bc = (code **)0x109c0e7d;
  FUN_109c2e50();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x109c0e93;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11de2dd9;
  pcStack_c0 = "TowerDefenseCommanderQuit";
  pcStack_c4 = (code *)0x109c0eb3;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  pcStack_c4 = FUN_109c25a0;
  FUN_109c2e50(&ppcStack_bc);
  if ((ppcStack_b0 != &pcStack_c4) && (ppcStack_b0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_b0);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109c47a0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_109c47f0();
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_109c4840(param_1,extraout_ECX_01);
    }
  }
  FUN_109c1590();
  FUN_11a89daa();
  return;
}



/* ===== FUN_109cf8a0 @ 109cf8a0  size=254 ===== */
// strings:
//   "C2AS_GetCostItemId"
//   "C2AS_GetUpgradeData"
//   "C2AS_UpgradeItem"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetCostItemId""
     ""C2AS_GetUpgradeData""
     ""C2AS_UpgradeItem"" */

void FUN_109cf8a0(void)

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
  ppcStack_30 = (code **)0x11de38a0;
  ppcStack_34 = (code **)0x109cf8d4;
  FUN_100b62c0();
  ppcStack_34 = (code **)FUN_109cfa30;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109cf8e5;
  FUN_109d04f0();
  if ((pppcStack_20 != &ppcStack_34) && (pppcStack_20 != (code ***)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x109cf8fb;
    FUN_10c3d5d0();
  }
  local_24 = &ppcStack_34;
  pppcStack_3c = (code ***)0x11de391b;
  ppcStack_40 = (code **)0x11de3908;
  pcStack_44 = (code *)0x109cf91b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = FUN_109cfa70;
  pppcStack_48 = (code ***)&pppcStack_3c;
  ppcStack_4c = (code **)0x109cf92c;
  FUN_109d04f0();
  if ((ppcStack_30 != &pcStack_44) && (ppcStack_30 != (code **)0x0)) {
    ppcStack_4c = ppcStack_30;
    pcStack_50 = (char *)0x109cf942;
    FUN_10c3d5d0();
  }
  ppcStack_34 = &pcStack_44;
  ppcStack_4c = (code **)0x11de3904;
  pcStack_50 = "C2AS_UpgradeItem";
  pcStack_54 = (code *)0x109cf962;
  ppcStack_30 = ppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_109d0130;
  FUN_109d04f0(&ppcStack_4c);
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_40);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109cfa70 @ 109cfa70  size=1473 ===== */
// calls: CEquipUpgrade::ApplyStepList
// strings:
//   "m_nFactItemLevel"
//   "collumn"
//   "mh.view.EquipQuickLevelUp.Data.EquipQuickLevelUp_UpgradeData"
//   "ItemId"
//   "ItemLevel"
//   "instanceChannelNumber"

/* [RE-AUTO c0]
   strings:
     ""m_nFactItemLevel""
     ""collumn""
     ""mh.view.EquipQuickLevelUp.Data.EquipQuickLevelUp_UpgradeData""
     ""ItemId""
     ""ItemLevel""
     ""instanceChannelNumber"" */

void __thiscall
FUN_109cfa70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_EBX;
  int *piVar9;
  int *unaff_ESI;
  int *piVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  int *piStack_238;
  int *piStack_234;
  char *pcStack_230;
  int *piStack_22c;
  undefined4 *puStack_228;
  undefined4 **ppuStack_224;
  undefined4 *local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 auStack_208 [3];
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  uint local_1ec;
  int local_1e8;
  int *local_1e4;
  int *local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int aiStack_1c8 [4];
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_19c [8];
  int aiStack_194 [6];
  int *piStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined1 auStack_144 [312];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_214;
  local_1f8 = param_3;
  local_1f4._0_4_ = param_7;
  if (param_6 == 1) {
    local_1f4._4_4_ = (int *)0x0;
    local_1e4 = (int *)param_5[3];
    local_1ec = param_5[1];
    local_1e8 = param_5[2];
    local_1e0 = (int *)param_5[4];
    if ((local_1ec >> 6 & 1) != 0) {
      local_1f4._4_4_ = (int *)*param_5;
      puStack_228 = (undefined4 *)((int)&local_1f4 + 4);
      piStack_22c = (int *)0x109cfae6;
      ppuStack_224 = (undefined4 **)local_1e8;
      (**(code **)(*local_1f4._4_4_ + 4))();
    }
    uVar4 = local_1ec & 0x8f;
    if (((uVar4 == 8) || (uVar4 == 9)) ||
       (uVar11 = CONCAT44(local_1f4._4_4_,(int)local_1f4), uVar4 == 10)) {
      ppuStack_224 = &local_214;
      local_214 = (undefined4 *)0x0;
      puStack_228 = (undefined4 *)&DAT_11dbb0b4;
      piStack_22c = (int *)0x109cfb27;
      FUN_104d4800();
      piStack_22c = &uStack_210;
      uStack_210 = 0;
      pcStack_230 = "m_nFactItemLevel";
      piStack_234 = (int *)0x109cfb42;
      FUN_104d4800();
      piStack_234 = auStack_208;
      auStack_208[0] = 0;
      piStack_238 = (int *)0x11dbfe24;
      FUN_104d4800();
      uStack_20c = 0;
      FUN_104d4800(&DAT_11dbfe78,&uStack_20c);
      ppuStack_224 = (undefined4 **)(int)local_1f4;
      puStack_228 = (undefined4 *)0x109cfb88;
      FUN_11a98a70();
      puStack_228 = (undefined4 *)0x109cfb94;
      FUN_115c15a0();
      puStack_228 = local_214;
      pcStack_230 = (char *)0x109cfba3;
      piStack_22c = unaff_EBX;
      pcStack_230 = (char *)FUN_109d03f0();
      piStack_234 = (int *)0x109cfbb0;
      cVar3 = FUN_115c2610();
      local_1f4 = CONCAT44(local_1f4._4_4_,(int)local_1f4);
      if (cVar3 != '\0') {
        piStack_234 = (int *)0x109cfbbd;
        iVar5 = FUN_107cb5c0();
        local_1f4 = CONCAT44(local_1f4._4_4_,(int)local_1f4);
        if (((iVar5 != 0) &&
            (local_1f4 = CONCAT44(local_1f4._4_4_,(int)local_1f4), *(int *)(iVar5 + 0x2d1c) != 0))
           && (iVar5 = *(int *)(iVar5 + 0x260e8),
              local_1f4 = CONCAT44(local_1f4._4_4_,(int)local_1f4), iVar5 != 0)) {
          piStack_234 = (int *)0xffffffff;
          piStack_238 = &iStack_1b4;
          uStack_1b8 = 0xffffffff;
          iStack_1b4 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          piVar6 = (int *)FUN_113f99c0(*(undefined4 *)(param_1 + 0x20),&uStack_1b8);
          if (piVar6 != (int *)0x0) {
            piStack_234 = (int *)0x109cfc3c;
            uStack_1b0 = FUN_11669710();
            piStack_234 = (int *)0x109cfc51;
            uStack_1a8 = (**(code **)(*piVar6 + 0xc))();
            uStack_178 = 0;
            uStack_170 = 0;
            piStack_238 = unaff_EBX;
            piStack_17c = unaff_ESI;
            piVar6 = (int *)FUN_113f9bb0();
            if (piVar6 != (int *)0x0) {
              piStack_234 = (int *)0x109cfca3;
              uStack_178 = FUN_11669710();
              piStack_234 = (int *)0x109cfcb8;
              uStack_170 = (**(code **)(*piVar6 + 0xc))();
              piStack_234 = (int *)0x109cfcc8;
              FUN_112bcac0();
              aiStack_1c8[0] = param_1 + 0x24;
              piStack_234 = (int *)0x109cfcd6;
              FUN_109d0610();
              local_1e8 = 0;
              local_1e4 = (int *)0x0;
              local_1e0 = (int *)0x0;
              uStack_1dc = 0;
              uStack_1d8 = 0;
              uStack_1d4 = 0;
              piStack_234 = (int *)0x109cfd0a;
              piStack_234 = (int *)FUN_115c4920();
              piStack_238 = (int *)0x109cfd17;
              FUN_109d0040();
              piStack_238 = aiStack_1c8;
              FUN_109d17f0();
              ppuStack_224 = (undefined4 **)iStack_1cc;
              piVar10 = (int *)0x0;
              if (iStack_1cc != aiStack_1c8[0]) {
                piVar9 = (int *)0x0;
                do {
                  ppuStack_224 = (undefined4 **)iStack_1cc;
                  FUN_109d07f0(iStack_1cc);
                  FUN_109d09f0();
                  for (piVar10 = unaff_ESI; piVar10 != piVar6; piVar10 = piVar10 + 1) {
                    if (piVar10 != unaff_ESI) {
                      iVar2 = *piVar10;
                      uStack_1d4 = *(undefined4 *)(iVar2 + 4);
                      uStack_1d8 = *(undefined4 *)(iVar2 + 8);
                      FUN_109d09b0(iVar2);
                      if (piVar10 == piVar6 + -1) {
                        if (local_1e4 != piVar9) {
                          piVar8 = local_1e4 + 2;
                          do {
                            if ((*(int *)(iVar2 + 4) == piVar8[-1]) &&
                               (*(int *)(iVar2 + 8) == *piVar8)) goto LAB_109cff89;
                            piVar1 = piVar8 + 1;
                            piVar8 = piVar8 + 3;
                          } while (piVar1 != piVar9);
                        }
                        FUN_11672970(iVar5);
                        pcStack_230 = (char *)FUN_11672350();
                        FUN_109cf680(0,1);
                        ppiVar13 = &piStack_238;
                        puVar12 = &uStack_1fc;
                        cVar3 = CEquipUpgrade__ApplyStepList
                                          (&iStack_1cc,aiStack_194,puVar12,ppiVar13,auStack_144);
                        if (cVar3 == '\0') {
                          (*(code *)(*ppiVar13)[0xe])();
                          FUN_109cf730();
                        }
                        else {
                          FUN_112bc9c0(ppiVar13);
                          FUN_109d0920(&local_214);
                          uVar11 = FUN_11669710();
                          uVar7 = FUN_109d1a20(uVar11);
                          FUN_109d1a60(uVar7);
                          FUN_109d16d0(auStack_19c,aiStack_194);
                          if (aiStack_194[0] != 0) {
                            FUN_10c3d5d0(aiStack_194[0]);
                          }
                          if (piStack_17c != (int *)0x0) {
                            FUN_10c3d5d0(piStack_17c);
                          }
                          uStack_1d4 = 0;
                          uStack_1d0 = 0;
                          FUN_11a98de0(&uStack_1d4,
                                       "mh.view.EquipQuickLevelUp.Data.EquipQuickLevelUp_UpgradeData"
                                       ,0,0);
                          (**(code **)(*(int *)*puVar12 + 0x3c))(puVar12[2],&local_1e4);
                          FUN_104d1550("ItemId",iVar5);
                          FUN_104d1550("ItemLevel",ppuStack_224);
                          uVar11 = FUN_11669710();
                          local_1f4 = uVar11;
                          FUN_104d14d0("instanceChannelNumber");
                          FUN_109d09b0(iVar2);
                          FUN_104d7c10();
                          FUN_109cf730();
                          piVar9 = local_1e0;
                        }
                      }
                    }
LAB_109cff89:
                  }
                  if (unaff_ESI != (int *)0x0) {
                    FUN_10c3d5d0(unaff_ESI);
                  }
                  iStack_1cc = (int)ppuStack_224 + 0xc;
                  piVar10 = local_1e4;
                  ppuStack_224 = (undefined4 **)iStack_1cc;
                } while (iStack_1cc != aiStack_1c8[0]);
              }
              FUN_109d0a60();
              FUN_109d1780();
              if (piVar10 != (int *)0x0) {
                piStack_238 = (int *)0x109cffd9;
                piStack_234 = piVar10;
                FUN_10c3d5d0();
              }
              if (local_1e8 != 0) {
                piStack_234 = (int *)local_1e8;
                piStack_238 = (int *)0x109cffea;
                FUN_10c3d5d0();
              }
            }
          }
        }
      }
      piStack_234 = (int *)0x109cfff9;
      FUN_115c1aa0();
      uVar11 = local_1f4;
    }
    local_1f4._4_4_ = (int *)((ulonglong)uVar11 >> 0x20);
    local_1f4._0_4_ = (int)uVar11;
    if ((local_1ec >> 6 & 1) != 0) {
      iVar5 = *local_1f4._4_4_;
      puStack_228 = (undefined4 *)((int)&local_1f4 + 4);
      piStack_22c = (int *)0x109d001a;
      ppuStack_224 = (undefined4 **)local_1e8;
      local_1f4 = uVar11;
      (**(code **)(iVar5 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



