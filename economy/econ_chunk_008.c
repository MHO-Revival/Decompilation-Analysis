/* ===== FUN_108fc780 @ 108fc780  size=294 ===== */
// strings:
//   "GetConsectiveLoginGiftItemList"
//   "GetOnlineTimeGiftItemList"
//   "GetNewerUpgradeGiftItemList"
//   "ReqGetGift"
//   "GetCanFetchedGiftPackNum"
//   "GetGroupInfoData"
//   "GetGiftPackData"
//   "GetOnlineGiftTimeData"

/* [RE-AUTO c0]
   strings:
     ""GetConsectiveLoginGiftItemList""
     ""GetOnlineTimeGiftItemList""
     ""GetNewerUpgradeGiftItemList""
     ""ReqGetGift""
     ""GetCanFetchedGiftPackNum""
     ""GetGroupInfoData""
     ""GetGiftPackData""
     ""GetOnlineGiftTimeData"" */

void FUN_108fc780(void)

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
    FUN_104d13b0("GetConsectiveLoginGiftItemList",FUN_108fdb10);
    FUN_104d13b0("GetOnlineTimeGiftItemList",FUN_108fdf30);
    FUN_104d13b0("GetNewerUpgradeGiftItemList",FUN_108fe3b0);
    FUN_104d13b0("ReqGetGift",FUN_108fe7d0);
    FUN_104d13b0("GetCanFetchedGiftPackNum",FUN_108fd970);
    FUN_104d13b0("GetGroupInfoData",FUN_108fc8b0);
    FUN_104d13b0("GetGiftPackData",FUN_108fccc0);
    FUN_104d13b0("GetOnlineGiftTimeData",FUN_108fd700);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_108fccc0 @ 108fccc0  size=2588 ===== */
// calls: _time64, CPlayer::GetHuntRankOrCount
// strings:
//   "CONSECTIVE_LOGIN_ITEM_CLASSNAME"
//   "ONLINE_TIME_ITEM_CLASSNAME"
//   "NEWER_UPGRADE_ITEM_CLASSNAME"
//   "WEAPON_ITEM_CLASSNAME"
//   "nOnlineTime"
//   "boundGold"
//   "unboundGold"
//   "state"
//   "totalTime"
//   "SUB_ITEM_CLASSNAME"
//   "itemID"
//   "itemCnt"
//   "itemIconPathName"
//   "subItemList"
//   "giftListArray"

/* WARNING: Removing unreachable block (ram,0x108fcf21) */
/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""CONSECTIVE_LOGIN_ITEM_CLASSNAME""
     ""ONLINE_TIME_ITEM_CLASSNAME""
     ""NEWER_UPGRADE_ITEM_CLASSNAME""
     ""WEAPON_ITEM_CLASSNAME""
     ""nOnlineTime""
     ""boundGold""
     ""unboundGold""
     ""state""
     ""totalTime""
     ""SUB_ITEM_CLASSNAME"" */

void FUN_108fccc0(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  int *piVar7;
  int *piVar8;
  int *unaff_ESI;
  int iVar9;
  bool bVar10;
  __time64_t _Var11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  int *piVar18;
  byte bVar19;
  char *pcVar20;
  int **ppiVar21;
  int *piStack_15c;
  int **ppiStack_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  int **ppiStack_148;
  int *piStack_144;
  int *apiStack_134 [2];
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int iStack_11c;
  uint uStack_118;
  int *piStack_114;
  int iStack_110;
  int iStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f4 [4];
  int aiStack_f0 [2];
  int *piStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int *piStack_c8;
  uint uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  undefined4 uStack_b0;
  int **local_ac;
  int aiStack_a8 [4];
  int *piStack_98;
  uint uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [3];
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  int aiStack_40 [5];
  int *piStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)apiStack_134;
  local_ac = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_144 = param_1[2];
      ppiStack_148 = param_1;
      piStack_14c = (int *)0x108fcd2e;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar9 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_144 = (int *)0x108fcd58;
    iStack_d8 = (**(code **)(**(int **)(*(int *)(iVar9 + 0xd0) + 0x90) + 0xb4))();
    if ((iStack_d8 != 0) && (iStack_d4 = *(int *)(iStack_d8 + 0x2ac8), iStack_d4 != 0)) {
      piStack_144 = (int *)0x108fcd7d;
      FUN_1150ef20();
      piStack_144 = (int *)0x108fcd84;
      aiStack_a8[0] = FUN_11510230();
      if (aiStack_a8[0] != 0) {
        piStack_144 = param_4;
        ppiStack_148 = (int **)0x108fcd9d;
        FUN_104f4330();
        if (((param_4[7] & 0x8fU) == 3) || ((param_4[7] & 0x8fU) == 4)) {
          iStack_110 = param_4[8];
        }
        else {
          iStack_110 = -0x21524151;
        }
        if (((param_4[0xd] & 0x8fU) == 3) || ((param_4[0xd] & 0x8fU) == 4)) {
          iStack_d0 = param_4[0xe];
        }
        else {
          iStack_d0 = -0x21524151;
        }
        if (((param_4[0x13] & 0x8fU) == 3) || ((param_4[0x13] & 0x8fU) == 4)) {
          iStack_d4 = param_4[0x14];
        }
        else {
          iStack_d4 = -0x21524151;
        }
        piStack_14c = &iStack_10c;
        bVar10 = ((byte)piStack_128 & 0x8f) == 10;
        iStack_10c = 0;
        piStack_108 = (int *)0x0;
        ppiStack_148._1_3_ = (undefined3)((uint)unaff_EBX >> 8);
        apiStack_134[0] = (int *)0x0;
        piStack_150 = (int *)0x11dd8088;
        piStack_154 = piStack_124;
        ppiStack_158 = (int **)0x108fce4c;
        ppiStack_148._0_1_ = bVar10;
        cVar2 = (**(code **)(*piStack_12c + 0x10))();
        if ((cVar2 != '\0') && (((byte)uStack_118 & 0x8f) == 6)) {
          if ((uStack_118 >> 6 & 1) == 0) {
            piStack_144 = piStack_114;
          }
          else {
            piStack_144 = (int *)*piStack_114;
          }
        }
        piStack_15c = &iStack_11c;
        ppiStack_148 = (int **)CONCAT31(ppiStack_148._1_3_,bVar10 == true);
        ppiStack_158 = ppiStack_148;
        cVar2 = (**(code **)(*unaff_ESI + 0x10))(apiStack_134[0],"ONLINE_TIME_ITEM_CLASSNAME");
        if ((cVar2 != '\0') && (((byte)piStack_128 & 0x8f) == 6)) {
          if (((uint)piStack_128 >> 6 & 1) == 0) {
            piStack_150 = piStack_124;
          }
          else {
            piStack_150 = (int *)*piStack_124;
          }
        }
        ppiVar21 = &piStack_12c;
        ppiStack_158 = (int **)CONCAT31(ppiStack_158._1_3_,((byte)ppiStack_148 & 0x8f) == 10);
        pcVar20 = "NEWER_UPGRADE_ITEM_CLASSNAME";
        piVar18 = piStack_144;
        cVar2 = (**(code **)(*piStack_14c + 0x10))
                          (piStack_144,"NEWER_UPGRADE_ITEM_CLASSNAME",ppiVar21,ppiStack_158);
        piVar13 = (int *)0x0;
        if ((cVar2 != '\0') && (bVar10 == true)) {
          piVar13 = apiStack_134[0];
        }
        puVar4 = &stack0xfffffec4;
        piVar15 = piStack_154;
        cVar2 = (**(code **)(*piStack_15c + 0x10))
                          (piStack_154,"WEAPON_ITEM_CLASSNAME",puVar4,
                           ((byte)ppiStack_158 & 0x8f) == 10);
        piVar7 = (int *)0x0;
        if (((cVar2 != '\0') && (((byte)ppiStack_148 & 0x8f) == 6)) &&
           (piVar7 = piStack_144, ((uint)ppiStack_148 >> 6 & 1) != 0)) {
          piVar7 = (int *)*piStack_144;
        }
        puStack_74 = auStack_84;
        auStack_84[0]._0_1_ = 0;
        switch(piStack_150) {
        case (int *)0x1:
          piVar7 = piVar18;
          break;
        case (int *)0x2:
          piVar7 = (int *)pcVar20;
          break;
        default:
          piVar7 = piVar13;
          break;
        case (int *)0x4:
        }
        puStack_70 = puStack_74;
        FUN_100e0410(piVar7);
        _Var11 = _time64((__time64_t *)0x0);
        FUN_104d1550("nOnlineTime",
                     ((*(int *)(iStack_11c + 0x3c) - *(int *)(iStack_11c + 0x40)) + (int)_Var11) *
                     1000);
        uStack_e0 = 0;
        puVar14 = &uStack_e0;
        uStack_dc = 0;
        FUN_11a98a70(puVar14);
        iVar9 = 0;
        iVar17 = 0;
        iVar3 = FUN_108fc5a0();
        bVar19 = (byte)pcVar20;
        if (0 < iVar3) {
          do {
            puVar4 = (undefined1 *)FUN_108fc510(iVar9);
            if (((puVar4 != (undefined1 *)0x0) && (iVar9 = *(int *)(puVar4 + 0x2c), iVar9 != 0)) &&
               ((iVar3 = FUN_11511390(*(undefined4 *)(iVar9 + 0x10)), iVar3 != 0 &&
                (((int **)*(int *)(iVar3 + 0x2c) == ppiStack_158 &&
                 (*(int *)(iVar3 + 4) == iStack_11c)))))) {
              piVar13 = (int *)0x0;
              FUN_11a98de0(&stack0xfffffec4,uStack_78,0);
              FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar3 + 0x2c));
              FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar9 + 4));
              iVar5 = FUN_100e5b40(auStack_84);
              FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar5 + 0x14));
              if ((puStack_74 != &uStack_88) && (puStack_74 != (undefined4 *)0x0)) {
                FUN_10c3d5d0(puStack_74);
              }
              uVar6 = FUN_117faa00();
              FUN_104d1550("boundGold",uVar6);
              uVar6 = FUN_117fac50();
              FUN_104d1550("unboundGold",uVar6);
              FUN_104d1790(&DAT_11dc9d98,iVar9 + 0xc);
              iVar9 = (**(code **)(*apiStack_134[0] + 0x20))(*(undefined4 *)(iVar9 + 4));
              if (iVar9 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)(iVar9 + 0xc);
              }
              FUN_104d1550("state",uVar6);
              if (*(int *)(iVar3 + 0x2c) == 2) {
                iVar9 = FUN_117fac90();
                FUN_104d1550("totalTime",iVar9 * 1000);
              }
              else if (*(int *)(iVar3 + 0x2c) == 1) {
                uStack_8c = 0;
                uStack_88 = 0;
                FUN_11a98a70(&uStack_8c);
                piStack_c0 = (int *)0x0;
                uStack_bc = 0;
                uVar12 = (uint)(((byte)puVar14 & 0x8f) == 10);
                (**(code **)(*piVar13 + 0x10))(piVar7,"SUB_ITEM_CLASSNAME",&piStack_c0,uVar12);
                uVar6 = CPlayer__GetHuntRankOrCount();
                FUN_117fab10(&iStack_11c,uVar6);
                piVar13 = piStack_120;
                piVar8 = piStack_124;
                if (piStack_124 != piStack_120) {
                  do {
                    iVar9 = *piVar8;
                    if (((iVar9 != 0) && (piVar1 = *(int **)(iVar9 + 4), piVar1 != (int *)0x0)) &&
                       (piVar1[0xd] == 1)) {
                      uVar6 = (**(code **)(*piVar1 + 0x18))();
                      iVar3 = FUN_10540d00(uVar6);
                      if (iVar3 == 0) {
                        if (piStack_124 != (int *)0x0) {
                          FUN_10c3d5d0(piStack_124);
                        }
                        FUN_104d7c10();
                        FUN_104d7c10();
                        FUN_104d7c10();
                        goto LAB_108fd5f4;
                      }
                      aiStack_f0[0] = 0;
                      aiStack_f0[1] = 0;
                      FUN_11a98de0(aiStack_f0,uVar12,0,0);
                      if (*(int **)(iVar9 + 4) == (int *)0x0) {
                        FUN_104d1550("itemID",0);
                      }
                      else {
                        uVar6 = (**(code **)(**(int **)(iVar9 + 4) + 0x18))();
                        FUN_104d1550("itemID",uVar6);
                        FUN_104d1550("itemCnt",*(undefined4 *)(iVar9 + 8));
                        FUN_104d1670("itemIconPathName",*(undefined4 *)(*(int *)(iVar9 + 4) + 0xb4))
                        ;
                      }
                      (**(code **)(*piStack_b8 + 0x3c))(uStack_b0,&piStack_100);
                      FUN_104d7c10();
                      piVar13 = piStack_120;
                    }
                    piVar8 = piVar8 + 1;
                  } while (piVar8 != piVar13);
                }
                FUN_104d12b0("subItemList",aiStack_a8);
                if (piStack_124 != (int *)0x0) {
                  FUN_10c3d5d0(piStack_124);
                }
                FUN_104d7c10();
                FUN_104d7c10();
              }
              uVar6 = CPlayer__GetHuntRankOrCount();
              FUN_117fab10(&uStack_e0,uVar6);
              piVar13 = piStack_e8;
              if (piStack_e8 != piStack_e4) {
                do {
                  iVar9 = *piVar13;
                  if ((iVar9 == 0) || (*(int **)(iVar9 + 4) == (int *)0x0)) {
                    FUN_104d1550("itemID",0);
                  }
                  else {
                    uVar6 = (**(code **)(**(int **)(iVar9 + 4) + 0x18))();
                    FUN_104d1550("itemID",uVar6);
                    FUN_104d1550("itemCnt",*(undefined4 *)(iVar9 + 8));
                    FUN_104d1670("itemIconPathName",*(undefined4 *)(*(int *)(iVar9 + 4) + 0xb4));
                  }
                  piVar13 = piVar13 + 1;
                } while (piVar13 != piStack_e4);
              }
              (**(code **)(*piStack_104 + 0x3c))(uStack_fc,&piStack_15c);
              if (aiStack_f0[0] != 0) {
                FUN_10c3d5d0(aiStack_f0[0]);
              }
              FUN_104d7c10();
            }
            iVar9 = iVar17 + 1;
            iVar3 = FUN_108fc5a0();
            bVar19 = (byte)pcVar20;
            iVar17 = iVar9;
          } while (iVar9 < iVar3);
        }
        bVar16 = (byte)iVar17;
        piStack_114 = (int *)0x0;
        iStack_110 = 0;
        piStack_15c = (int *)CONCAT31(piStack_15c._1_3_,(bVar19 & 0x8f) == 10);
        cVar2 = (**(code **)(*piVar18 + 0x10))(ppiVar21,"giftListArray",&piStack_114,piStack_15c);
        if (((cVar2 != '\0') && (((byte)piStack_120 & 0x8f) == 9)) &&
           (piVar13 = (int *)(**(code **)(*piStack_124 + 0x28))(iStack_11c), piStack_128 < piVar13))
        {
          (**(code **)(*piStack_124 + 0x34))(iStack_11c,piStack_128,auStack_f4);
        }
        (**(code **)(*piVar15 + 0x14))(puVar4,"giftListArray",&piStack_124,(bVar16 & 0x8f) == 10);
        ppiVar21 = local_ac;
        if (((uint)local_ac[1] >> 6 & 1) != 0) {
          piStack_144 = local_ac[2];
          ppiStack_148 = local_ac;
          piStack_14c = (int *)0x108fd5b3;
          (**(code **)(**local_ac + 8))();
          *ppiVar21 = (int *)0x0;
        }
        ppiVar21[1] = (int *)0x2;
        *(undefined1 *)(ppiVar21 + 2) = 1;
        if ((uStack_c4 >> 6 & 1) != 0) {
          ppiStack_148 = &piStack_c8;
          piStack_144 = piStack_c0;
          piStack_14c = (int *)0x108fd5e4;
          (**(code **)(*piStack_c8 + 8))();
          piStack_c8 = (int *)0x0;
        }
        uStack_c4 = 0;
LAB_108fd5f4:
        if ((uStack_94 >> 6 & 1) != 0) {
          ppiStack_148 = &piStack_98;
          piStack_144 = piStack_90;
          piStack_14c = (int *)0x108fd61d;
          (**(code **)(*piStack_98 + 8))();
          piStack_98 = (int *)0x0;
        }
        uStack_94 = 0;
        if ((piStack_2c != aiStack_40) && (piStack_2c != (int *)0x0)) {
          piStack_144 = piStack_2c;
          ppiStack_148 = (int **)0x108fd64f;
          FUN_10c3d5d0();
        }
        if (((uint)piStack_104 >> 6 & 1) != 0) {
          ppiStack_148 = &piStack_108;
          piStack_144 = piStack_100;
          piStack_14c = (int *)0x108fd66f;
          (**(code **)(*piStack_108 + 8))();
          piStack_108 = (int *)0x0;
        }
        piStack_104 = (int *)0x0;
        if (((uint)piStack_124 >> 6 & 1) != 0) {
          ppiStack_148 = &piStack_128;
          piStack_144 = piStack_120;
          piStack_14c = (int *)0x108fd69c;
          (**(code **)(*piStack_128 + 8))();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108fe3b0 @ 108fe3b0  size=1056 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "NEWER_UPGRADE_ITEM_CLASSNAME"
//   "boundGold"
//   "unboundGold"
//   "itemID"
//   "itemCnt"
//   "itemIconPathName"
//   "state"
//   "newPlayerGiftList"

/* [RE-AUTO c0]
   strings:
     ""NEWER_UPGRADE_ITEM_CLASSNAME""
     ""boundGold""
     ""unboundGold""
     ""itemID""
     ""itemCnt""
     ""itemIconPathName""
     ""state""
     ""newPlayerGiftList"" */

void FUN_108fe3b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_d8;
  undefined1 *puStack_d4;
  char *pcStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int iStack_c4;
  undefined4 uStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *apiStack_a8 [2];
  undefined4 *puStack_a0;
  undefined4 *local_88;
  int iStack_84;
  int iStack_80;
  int aiStack_5c [3];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  int *piStack_44;
  byte bStack_40;
  undefined1 *puStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_b4;
  local_88 = param_1;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      iStack_c4 = param_1[2];
      puStack_c8 = param_1;
      piStack_cc = (int *)0x108fe41b;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    iVar1 = DAT_1202e818;
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_c4 = 0x108fe445;
    iStack_84 = (**(code **)(**(int **)(*(int *)(iVar1 + 0xd0) + 0x90) + 0xb4))();
    if ((iStack_84 != 0) &&
       (apiStack_a8[0] = *(int **)(iStack_84 + 0x2ac8), apiStack_a8[0] != (int *)0x0)) {
      iStack_c4 = 0x108fe46a;
      FUN_1150ef20();
      iStack_c4 = 0x108fe471;
      iVar1 = FUN_11510240();
      if (iVar1 != 0) {
        iStack_c4 = 0x108fe482;
        FUN_1150ef20();
        iStack_c4 = 0x108fe489;
        iStack_80 = FUN_11510230();
        if (iStack_80 != 0) {
          iStack_c4 = param_4;
          puStack_c8 = (undefined4 *)0x108fe4a2;
          FUN_104f4330();
          piStack_cc = aiStack_5c;
          aiStack_5c[0] = 0;
          aiStack_5c[1] = 0;
          uStack_b4 = CONCAT31(uStack_b4._1_3_,(bStack_40 & 0x8f) == 10);
          piStack_b0 = (int *)0x0;
          puStack_c8 = (undefined4 *)uStack_b4;
          pcStack_d0 = "NEWER_UPGRADE_ITEM_CLASSNAME";
          puStack_d4 = puStack_3c;
          piStack_d8 = (int *)0x108fe4f0;
          (**(code **)(*piStack_44 + 0x10))();
          piStack_d8 = &iStack_84;
          iStack_84 = 0;
          iStack_80 = 0;
          FUN_11a98a70();
          puVar4 = (undefined4 *)0x0;
          puStack_c8 = (undefined4 *)0x0;
          iVar1 = FUN_108fc5a0();
          if (0 < iVar1) {
            do {
              iVar1 = FUN_108fc510(puVar4);
              if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x2c), iVar1 != 0)) &&
                  (iVar2 = FUN_11511390(*(undefined4 *)(iVar1 + 0x10)), iVar2 != 0)) &&
                 (*(int *)(iVar2 + 0x2c) == 3)) {
                piVar7 = (int *)0x0;
                uStack_b4 = 0;
                FUN_11a98de0(&stack0xffffff48,iStack_c4,0);
                FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar2 + 0x2c));
                piVar6 = piStack_cc;
                FUN_104d1550(&DAT_11dbb0b4,piStack_cc[1]);
                iVar2 = FUN_100e5b40(auStack_4c);
                FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar2 + 0x14));
                if ((puStack_3c != auStack_50) && (puStack_3c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_3c);
                }
                uVar3 = FUN_117faa00();
                FUN_104d1550("boundGold",uVar3);
                uVar3 = FUN_117fac50();
                FUN_104d1550("unboundGold",uVar3);
                uVar3 = CPlayer__GetHuntRankOrCount();
                FUN_117fab10(apiStack_a8,uVar3);
                piVar5 = piStack_b0;
                if (piStack_b0 != piStack_ac) {
                  do {
                    iVar2 = *piVar5;
                    if ((iVar2 == 0) || (*(int **)(iVar2 + 4) == (int *)0x0)) {
                      FUN_104d1550("itemID",0);
                    }
                    else {
                      uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x18))();
                      FUN_104d1550("itemID",uVar3);
                      FUN_104d1550("itemCnt",*(undefined4 *)(iVar2 + 8));
                      FUN_104d1670("itemIconPathName",*(undefined4 *)(*(int *)(iVar2 + 4) + 0xb4));
                    }
                    piVar5 = piVar5 + 1;
                    piVar6 = piStack_d8;
                  } while (piVar5 != piStack_ac);
                }
                iVar2 = (**(code **)(*piVar7 + 0x20))(piVar6[1]);
                if (iVar2 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(undefined4 *)(iVar2 + 0xc);
                }
                FUN_104d1550("state",uVar3);
                (**(code **)(*apiStack_a8[0] + 0x3c))(puStack_a0,&piStack_d8);
                if (iVar1 != 0) {
                  FUN_10c3d5d0(iVar1);
                }
                FUN_104d7c10();
              }
              puVar4 = (undefined4 *)((int)puStack_c8 + 1);
              puStack_c8 = puVar4;
              iVar1 = FUN_108fc5a0();
              param_1 = puStack_a0;
            } while ((int)puVar4 < iVar1);
          }
          FUN_104d12b0("newPlayerGiftList",&local_88);
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
            *param_1 = 0;
          }
          param_1[1] = 2;
          *(undefined1 *)(param_1 + 2) = 1;
          FUN_104d7c10();
          FUN_104d7c10();
          FUN_104d7c10();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109082d0 @ 109082d0  size=651 ===== */
// strings:
//   "_PvpRoomAgreement"
//   "_IsInPvpLevel"
//   "_IsInPvmLevel"
//   "_getLocalPlayerNetID"
//   "_getGodLuckName"
//   "_getPvpPlayerHealth"
//   "_getPvpPlayerLevel"
//   "_getCurrentPvpTeamInfo"
//   "_getCurrentPvpBufferInfo"
//   "_getPlayerFactionByID"
//   "_getPvpPlayerInfo"
//   "_isStrengthSpecialID"
//   "_getSpecialUIDesc"
//   "enforceSpecialTime"
//   "rateXBegin"
//   "rateXEnd"
//   "rateYBegin"
//   "rateYEnd"

/* [RE-AUTO c0]
   strings:
     ""_PvpRoomAgreement""
     ""_IsInPvpLevel""
     ""_IsInPvmLevel""
     ""_getLocalPlayerNetID""
     ""_getGodLuckName""
     ""_getPvpPlayerHealth""
     ""_getPvpPlayerLevel""
     ""_getCurrentPvpTeamInfo""
     ""_getCurrentPvpBufferInfo""
     ""_getPlayerFactionByID"" */

void FUN_109082d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint unaff_EBX;
  int *unaff_ESI;
  int in_stack_00000010;
  undefined4 uStack_54;
  int *piStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  int *piStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    FUN_104f4330(in_stack_00000010);
    FUN_104f4330(in_stack_00000010 + 0x18);
    FUN_104f4330(in_stack_00000010 + 0x30);
    FUN_104d13b0("_PvpRoomAgreement",FUN_10908560);
    FUN_104d13b0("_IsInPvpLevel",FUN_109085d0);
    FUN_104d13b0("_IsInPvmLevel",FUN_10908670);
    FUN_104d13b0("_getLocalPlayerNetID",FUN_10908710);
    FUN_104d13b0("_getGodLuckName",FUN_109087d0);
    FUN_104d13b0("_getPvpPlayerHealth",FUN_10908ab0);
    FUN_104d13b0("_getPvpPlayerLevel",FUN_10908b90);
    FUN_104d13b0("_getCurrentPvpTeamInfo",FUN_10908c40);
    FUN_104d13b0("_getCurrentPvpBufferInfo",&DAT_10908f00);
    FUN_104d13b0("_getPlayerFactionByID",FUN_10909320);
    FUN_104d13b0("_getPvpPlayerInfo",FUN_10908f10);
    FUN_104d13b0("_isStrengthSpecialID",FUN_109091e0);
    FUN_104d13b0("_getSpecialUIDesc",FUN_109093c0);
    FUN_117423e0();
    uVar1 = FUN_117424f0();
    FUN_104d1550("enforceSpecialTime",uVar1);
    FUN_117423e0();
    uVar1 = FUN_117424a0();
    FUN_117423e0();
    uVar2 = FUN_117424b0();
    FUN_117423e0();
    uVar3 = FUN_117424c0();
    FUN_117423e0();
    uVar4 = FUN_117424d0();
    FUN_104d1550("rateXBegin",uVar1);
    FUN_104d1550("rateXEnd",uVar2);
    FUN_104d1550("rateYBegin",uVar3);
    FUN_104d1550("rateYEnd",uVar4);
    if ((uStack_40 >> 6 & 1) != 0) {
      (**(code **)(*piStack_44 + 8))(&piStack_44,uStack_3c);
      piStack_44 = (int *)0x0;
    }
    uStack_40 = 0;
    if ((uStack_28 >> 6 & 1) != 0) {
      (**(code **)(*piStack_2c + 8))(&piStack_2c,uStack_24);
      piStack_2c = (int *)0x0;
    }
    uStack_28 = 0;
    if ((unaff_EBX >> 6 & 1) != 0) {
      (**(code **)(*unaff_ESI + 8))(&stack0xffffffa4,uStack_54);
    }
  }
  return;
}



/* ===== FUN_1090bea0 @ 1090bea0  size=234 ===== */
// strings:
//   "GetRankTitleList"
//   "ReqRankDataList"
//   "UpdateRankDataList"
//   "FetchReward"
//   "UpdateRapidHuntDataList"
//   "UpdateRapidHuntAwardData"
//   "FetchHuntRapidHuntReward"

/* [RE-AUTO c0]
   strings:
     ""GetRankTitleList""
     ""ReqRankDataList""
     ""UpdateRankDataList""
     ""FetchReward""
     ""UpdateRapidHuntDataList""
     ""UpdateRapidHuntAwardData""
     ""FetchHuntRapidHuntReward"" */

void FUN_1090bea0(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("GetRankTitleList",FUN_1090bfa0);
    FUN_104d13b0("ReqRankDataList",FUN_1090c460);
    FUN_104d13b0("UpdateRankDataList",FUN_1090cd20);
    FUN_104d13b0("FetchReward",FUN_1090d680);
    FUN_104d13b0("UpdateRapidHuntDataList",FUN_1090c690);
    FUN_104d13b0("UpdateRapidHuntAwardData",FUN_1090d730);
    FUN_104d13b0("FetchHuntRapidHuntReward",FUN_1090db70);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_1090cd20 @ 1090cd20  size=1961 ===== */
// strings:
//   "RANK_BASE_DATA_VO_CLASSNAME"
//   "nRank"
//   "strName"
//   "strGuildName"
//   "strClanName"
//   "nColumn1Data"
//   "nColumn2Data"
//   "nColumn1Type"
//   "nColumn2Type"
//   "nColumn1Unit"
//   "nColumn2Unit"
//   "nRewardItemID"
//   "strRewardItemName"
//   "bRewardFetched"
//   "strLevelName"
//   "arrDataList"
//   "nMyPostion"

/* [RE-AUTO c0]
   strings:
     ""RANK_BASE_DATA_VO_CLASSNAME""
     ""nRank""
     ""strName""
     ""strGuildName""
     ""strClanName""
     ""nColumn1Data""
     ""nColumn2Data""
     ""nColumn1Type""
     ""nColumn2Type""
     ""nColumn1Unit"" */

void FUN_1090cd20(uint **param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uint **unaff_ESI;
  int **ppiVar4;
  int *piVar5;
  uint unaff_EDI;
  undefined4 **ppuStack_1d8;
  uint **ppuStack_1d4;
  int **ppiStack_1d0;
  uint *puStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  int *piStack_1bc;
  undefined4 *puStack_1b8;
  uint uStack_1b4;
  char *pcStack_1b0;
  int ***pppiStack_1ac;
  undefined1 auStack_1a8 [4];
  uint *puStack_1a4;
  uint **ppuVar6;
  undefined1 auStack_194 [8];
  uint uStack_18c;
  int iStack_188;
  int *piStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  uint **local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  int *piStack_164;
  uint *puStack_160;
  uint uStack_15c;
  int *piStack_158;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int *piStack_144;
  uint uStack_140;
  uint *puStack_138;
  uint uStack_134;
  int *apiStack_130 [2];
  uint uStack_128;
  int *piStack_124;
  int **ppiStack_120;
  int **ppiStack_11c;
  uint *puStack_118;
  uint *puStack_114;
  int *apiStack_110 [2];
  uint *puStack_108;
  uint *puStack_104;
  undefined1 auStack_100 [4];
  int **ppiStack_fc;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined4 uStack_e8;
  int iStack_c4;
  int iStack_c0;
  int iStack_ac;
  int iStack_a8;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_194;
  local_178 = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    puStack_1a4 = param_1[2];
    auStack_1a8 = (undefined1  [4])param_1;
    pppiStack_1ac = (int ***)0x1090cd5f;
    (**(code **)(**param_1 + 8))();
    *param_1 = (uint *)0x0;
  }
  iVar3 = DAT_1202e818;
  param_1[1] = (uint *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  puStack_1a4 = (uint *)0x1090cd89;
  iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar3 != 0) && (iStack_16c = *(int *)(iVar3 + 0x2ad4), iStack_16c != 0)) {
    puStack_1a4 = (uint *)param_4;
    auStack_1a8 = (undefined1  [4])0x1090cdad;
    FUN_104f4330();
    pppiStack_1ac = &ppiStack_11c;
    ppiStack_11c = (int **)0x0;
    puStack_118 = (uint *)0x0;
    ppuVar6 = (uint **)CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)puStack_160 & 0x8f) == 10);
    uStack_174 = 0;
    pcStack_1b0 = "RANK_BASE_DATA_VO_CLASSNAME";
    uStack_1b4 = uStack_15c;
    puStack_1b8 = (undefined4 *)0x1090cdfb;
    auStack_1a8 = (undefined1  [4])ppuVar6;
    cVar2 = (**(code **)(*piStack_164 + 0x10))();
    if ((cVar2 != '\0') &&
       ((((byte)uStack_128 & 0x8f) == 6 && (piStack_184 = piStack_124, (uStack_128 >> 6 & 1) != 0)))
       ) {
      piStack_184 = (int *)*piStack_124;
    }
    puStack_1b8 = &uStack_14c;
    uStack_14c = 0;
    uStack_148 = 0;
    piStack_1bc = (int *)0x1090ce42;
    FUN_11a98a70();
    piVar5 = piStack_184;
    piStack_1bc = piStack_184 + 10;
    uStack_1c0 = 0x1090ce53;
    FUN_1090dec0();
    iStack_1c4 = piVar5[0xe] - piVar5[0xd] >> 5;
    iStack_1c8 = 0x1090ce6a;
    FUN_1090e9c0();
    ppiStack_1d0 = ppiStack_120;
    ppuStack_1d4 = (uint **)0x1090ce7f;
    puStack_1b8 = (undefined4 *)FUN_10910680();
    uStack_18c = 0;
    uStack_140 = ((int)piStack_164 - iStack_168) / 0xa0;
    piVar5 = piStack_164;
    if (uStack_140 != 0) {
      iStack_16c = (int)puStack_1b8 - (int)ppiStack_120 >> 5;
      ppiVar4 = ppiStack_120 + 5;
      do {
        puStack_1cc = (uint *)0x1090ceed;
        iStack_1c8 = iStack_168;
        iStack_188 = iStack_168;
        FUN_1090d4e0();
        puStack_1cc = (uint *)0x0;
        ppiStack_1d0 = (int **)0x0;
        ppuStack_1d8 = &puStack_1b8;
        puStack_1b8 = (undefined4 *)0x0;
        uStack_1b4 = 0;
        ppuStack_1d4 = ppuVar6;
        FUN_11a98de0();
        puStack_f0 = auStack_100;
        auStack_100[0] = 0;
        puStack_ec = puStack_f0;
        FUN_104d1550("nRank",uStack_e8);
        puStack_108 = &uStack_128;
        uStack_128 = uStack_128 & 0xffff0000;
        puStack_104 = puStack_108;
        cVar2 = FUN_100ecfd0(iStack_c0,iStack_c4 - iStack_c0,&uStack_128,4);
        if (cVar2 != '\0') {
          FUN_100ed090(&uStack_128,auStack_100,3);
        }
        if ((puStack_104 != &uStack_128) && (puStack_104 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_104);
        }
        FUN_104d1670("strName",puStack_ec);
        puStack_108 = &uStack_128;
        uStack_128 = uStack_128 & 0xffff0000;
        puStack_104 = puStack_108;
        cVar2 = FUN_100ecfd0(iStack_a8,iStack_ac - iStack_a8,&uStack_128,4);
        if (cVar2 != '\0') {
          FUN_100ed090(&uStack_128,auStack_100,3);
        }
        if ((puStack_104 != &uStack_128) && (puStack_104 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_104);
        }
        FUN_104d1670("strGuildName",puStack_ec);
        puStack_108 = &uStack_128;
        uStack_128 = uStack_128 & 0xffff0000;
        puStack_104 = puStack_108;
        cVar2 = FUN_100ecfd0(iStack_90,iStack_94 - iStack_90,&uStack_128,4);
        if (cVar2 != '\0') {
          FUN_100ed090(&uStack_128,auStack_100,3);
        }
        if ((puStack_104 != &uStack_128) && (puStack_104 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_104);
        }
        FUN_104d1670("strClanName",puStack_ec);
        FUN_104d1550("nColumn1Data",uStack_58);
        FUN_104d1550("nColumn2Data",uStack_54);
        iVar3 = FUN_1090b6c0(uStack_e8);
        if (iVar3 != 0) {
          FUN_104d1550("nColumn1Type",*(undefined4 *)(iVar3 + 0x14));
          FUN_104d1550("nColumn2Type",*(undefined4 *)(iVar3 + 0x18));
          FUN_104d1550("nColumn1Unit",*(undefined4 *)(iVar3 + 0x1c));
          FUN_104d1550("nColumn2Unit",*(undefined4 *)(iVar3 + 0x20));
        }
        if (unaff_EDI < uStack_180) {
          puStack_118 = &uStack_128;
          puStack_114 = puStack_118;
          FUN_100b62c0(*ppiVar4,ppiVar4[-1]);
          puStack_118 = (uint *)ppiVar4[1];
          puStack_114 = (uint *)CONCAT31(puStack_114._1_3_,*(undefined1 *)(ppiVar4 + 2));
          FUN_104d1550("nRewardItemID",puStack_118);
          FUN_109110b0();
          FUN_104d1670("strRewardItemName",uStack_f4);
          FUN_104d15e0("bRewardFetched",puStack_114);
          if ((ppiStack_11c != apiStack_130) && (ppiStack_11c != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_11c);
          }
        }
        else {
          FUN_104d1550("nRewardItemID",0);
        }
        iVar3 = FUN_107d7930(uStack_5c);
        if (iVar3 != 0) {
          ppiStack_120 = apiStack_130;
          apiStack_130[0] = (int *)((uint)apiStack_130[0] & 0xffffff00);
          ppiStack_11c = ppiStack_120;
          FUN_100e5aa0(ppiStack_120);
          FUN_104d1670("strLevelName",ppiStack_120);
          if ((ppiStack_11c != apiStack_130) && (ppiStack_11c != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_11c);
          }
        }
        (*(code *)(*local_178)[0xf])(uStack_170,&ppiStack_1d0);
        if ((ppiStack_fc != apiStack_110) && (ppiStack_fc != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_fc);
        }
        if (((uint)ppuStack_1d4 >> 6 & 1) != 0) {
          (*(code *)(*ppuStack_1d8)[2])(&ppuStack_1d8,ppiStack_1d0);
          ppuStack_1d8 = (undefined4 **)0x0;
        }
        ppuStack_1d4 = (uint **)0x0;
        FUN_1090d5b0();
        uStack_18c = unaff_EDI + 1;
        iStack_168 = iStack_188 + 0xa0;
        ppiVar4 = ppiVar4 + 8;
        param_1 = unaff_ESI;
        piVar5 = piStack_164;
        iStack_188 = iStack_168;
      } while (uStack_18c < uStack_140);
    }
    puStack_1cc = &uStack_15c;
    iStack_1c8 = CONCAT31((int3)((uint)unaff_ESI >> 8),((byte)uStack_180 & 0x8f) == 10);
    ppiStack_1d0 = (int **)0x11dd8cfc;
    ppuStack_1d4 = (uint **)uStack_17c;
    ppuStack_1d8 = (undefined4 **)0x1090d39b;
    (**(code **)(*piStack_184 + 0x14))();
    ppuStack_1d8 = *(undefined4 ***)(unaff_EDI + 0x24);
    FUN_104d1550("nMyPostion");
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppuStack_1d8 = (undefined4 **)param_1[2];
      (**(code **)(**param_1 + 8))(param_1);
      *param_1 = (uint *)0x0;
    }
    piVar1 = apiStack_130[0];
    ppuStack_1d8 = (undefined4 **)(auStack_1a8 + 3);
    param_1[1] = (uint *)0x2;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_10910ba0(iStack_1c8,apiStack_130[0],0);
    if (piVar1 != (int *)0x0) {
      puStack_1a4 = (uint *)piVar1;
      auStack_1a8 = (undefined1  [4])0x1090d409;
      FUN_10c3d5d0();
    }
    for (; piVar5 != piStack_144; piVar5 = piVar5 + -0x28) {
      puStack_1a4 = (uint *)0x1090d42d;
      FUN_1090d5b0();
    }
    if (piStack_144 != (int *)0x0) {
      puStack_1a4 = (uint *)piStack_144;
      auStack_1a8 = (undefined1  [4])0x1090d43b;
      FUN_10c3d5d0();
    }
    if ((uStack_134 >> 6 & 1) != 0) {
      auStack_1a8 = (undefined1  [4])&puStack_138;
      puStack_1a4 = (uint *)apiStack_130[0];
      pppiStack_1ac = (int ***)0x1090d45b;
      (**(code **)(*puStack_138 + 8))();
      puStack_138 = (uint *)0x0;
    }
    uStack_134 = 0;
    if (((uint)puStack_114 >> 6 & 1) != 0) {
      auStack_1a8 = (undefined1  [4])&puStack_118;
      puStack_1a4 = (uint *)apiStack_110[0];
      pppiStack_1ac = (int ***)0x1090d494;
      (**(code **)(*puStack_118 + 8))();
      puStack_118 = (uint *)0x0;
    }
    puStack_114 = (uint *)0x0;
    if ((uStack_15c >> 6 & 1) != 0) {
      auStack_1a8 = (undefined1  [4])&puStack_160;
      puStack_1a4 = (uint *)piStack_158;
      pppiStack_1ac = (int ***)0x1090d4c7;
      (**(code **)(*puStack_160 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1091a1f0 @ 1091a1f0  size=1081 ===== */
// strings:
//   "GetBuildUpData"
//   "LevelUpBuild"
//   "GetFundData"
//   "GetUnlockData"
//   "GetCandidateSkillData"
//   "GetSkillCandidateDataLoadData"
//   "GetSkillViewData"
//   "GetSkillViewDataLoadData"
//   "GetLeagueRegistrationViewData"
//   "UnlockItem"
//   "LearnSkill"
//   "ReqLeagueRegistration"
//   "GiveUpLeagueRegistration"
//   "sendGuildMatchSignUpList"

/* [RE-AUTO c0]
   strings:
     ""GetBuildUpData""
     ""LevelUpBuild""
     ""GetFundData""
     ""GetUnlockData""
     ""GetCandidateSkillData""
     ""GetSkillCandidateDataLoadData""
     ""GetSkillViewData""
     ""GetSkillViewDataLoadData""
     ""GetLeagueRegistrationViewData""
     ""UnlockItem"" */

void __fastcall FUN_1091a1f0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_104;
  char *pcStack_100;
  undefined1 **ppuStack_fc;
  undefined4 ***pppuStack_f8;
  undefined1 *puStack_f4;
  code **ppcStack_f0;
  undefined1 ***pppuStack_ec;
  code ***pppcStack_e8;
  undefined1 **ppuStack_e4;
  undefined1 **ppuStack_e0;
  undefined4 ***pppuStack_dc;
  code ***pppcStack_d8;
  undefined1 ***pppuStack_d4;
  undefined1 ***pppuStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  undefined4 ***pppuStack_c4;
  undefined4 ***pppuStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  code ***pppcStack_ac;
  undefined4 ***pppuStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  undefined4 ***pppuStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 ***pppuStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***pppuStack_50;
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
  pppcStack_30 = (code ***)0x11dd9928;
  pppcStack_34 = (code ***)0x1091a224;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1091cec0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1091a235;
  FUN_1091d8d0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1091a24b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd9964;
  pppcStack_40 = (code ***)0x11dd9958;
  pppcStack_44 = (code ***)0x1091a26b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1091cdf0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1091a27c;
  FUN_1091d8d0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined4 ***)0x1091a292;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd9957;
  pppuStack_50 = (undefined4 ***)0x11dd994c;
  pppuStack_54 = (undefined4 ***)0x1091a2b2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)FUN_1091c730;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1091a2c3;
  FUN_1091d8d0();
  if (((undefined4 ****)pppcStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppcStack_40 != (undefined4 ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x1091a2d9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppuStack_54;
  pppcStack_5c = (code ***)0x11dd9a3d;
  pppcStack_60 = (code ***)0x11dd9a30;
  pppcStack_64 = (code ***)0x1091a2f9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_1091c340;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppuStack_6c = (undefined4 ***)0x1091a30a;
  FUN_1091d8d0();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    pppuStack_70 = (undefined4 ***)0x1091a320;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_6c = (undefined4 ***)0x11dd9a2d;
  pppuStack_70 = (undefined4 ***)0x11dd9a18;
  pppuStack_74 = (undefined4 ***)0x1091a340;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  pppuStack_74 = (undefined4 ***)&LAB_1091c2c0;
  pppcStack_78 = (code ***)&pppuStack_6c;
  pppcStack_7c = (code ***)0x1091a351;
  FUN_1091d8d0();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x1091a367;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_7c = (code ***)0x11dd9a71;
  pppcStack_80 = (code ***)0x11dd9a54;
  pppcStack_84 = (code ***)0x1091a387;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_1091bc50;
  pppuStack_88 = &pppcStack_7c;
  pppuStack_8c = (undefined4 ***)0x1091a398;
  FUN_1091d8d0();
  if (((code ****)pppuStack_70 != &pppcStack_84) && ((code ****)pppuStack_70 != (code ****)0x0)) {
    pppuStack_8c = pppuStack_70;
    pppcStack_90 = (code ***)0x1091a3ae;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppuStack_8c = (undefined4 ***)0x11dd9a50;
  pppcStack_90 = (code ***)0x11dd9a40;
  pppcStack_94 = (code ***)0x1091a3ce;
  pppuStack_70 = pppuStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)&LAB_1091c300;
  pppcStack_98 = (code ***)&pppuStack_8c;
  pppcStack_9c = (code ***)0x1091a3df;
  FUN_1091d8d0();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x1091a3f5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dd9aac;
  pppcStack_a0 = (code ***)0x11dd9a94;
  pppcStack_a4 = (code ***)0x1091a415;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_1091b5a0;
  pppuStack_a8 = &pppcStack_9c;
  pppcStack_ac = (code ***)0x1091a426;
  FUN_1091d8d0();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x1091a43c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd9a91;
  pppcStack_b0 = (code ***)0x11dd9a74;
  pppcStack_b4 = (code ***)0x1091a45c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_1091a8a0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x1091a46d;
  FUN_1091d8d0();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppuStack_c0 = (undefined4 ***)0x1091a483;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd9ac6;
  pppuStack_c0 = (undefined4 ***)0x11dd9abc;
  pppuStack_c4 = (undefined4 ***)0x1091a4a3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppuStack_c4 = (undefined4 ***)FUN_1091a790;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x1091a4b4;
  FUN_1091d8d0();
  if (((undefined4 ****)pppcStack_b0 != &pppuStack_c4) &&
     ((undefined4 ****)pppcStack_b0 != (undefined4 ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppuStack_d0 = (undefined1 ***)0x1091a4ca;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppuStack_c4;
  pppcStack_cc = (code ***)0x11dd9aba;
  pppuStack_d0 = (undefined1 ***)0x11dd9ab0;
  pppuStack_d4 = (undefined1 ***)0x1091a4ea;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppuStack_d4 = (undefined1 ***)FUN_1091bbd0;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppuStack_dc = (undefined4 ***)0x1091a4fb;
  FUN_1091d8d0();
  if (((undefined1 ****)pppuStack_c0 != &pppuStack_d4) &&
     ((undefined1 ****)pppuStack_c0 != (undefined1 ****)0x0)) {
    pppuStack_dc = pppuStack_c0;
    ppuStack_e0 = (undefined1 **)0x1091a511;
    FUN_10c3d5d0();
  }
  pppuStack_c4 = &pppuStack_d4;
  pppuStack_dc = (undefined4 ***)0x11dd9999;
  ppuStack_e0 = (undefined1 **)0x11dd9984;
  ppuStack_e4 = (undefined1 **)0x1091a531;
  pppuStack_c0 = pppuStack_c4;
  FUN_100b62c0();
  ppuStack_e4 = (undefined1 **)&LAB_1091a800;
  pppcStack_e8 = (code ***)&pppuStack_dc;
  pppuStack_ec = (undefined1 ***)0x1091a542;
  FUN_1091d8d0();
  if ((pppuStack_d0 != &ppuStack_e4) && (pppuStack_d0 != (undefined1 ***)0x0)) {
    pppuStack_ec = pppuStack_d0;
    ppcStack_f0 = (code **)0x1091a558;
    FUN_10c3d5d0();
  }
  pppuStack_d4 = &ppuStack_e4;
  pppuStack_ec = (undefined1 ***)0x11dd9980;
  ppcStack_f0 = (code **)0x11dd9968;
  puStack_f4 = (undefined1 *)0x1091a578;
  pppuStack_d0 = pppuStack_d4;
  FUN_100b62c0();
  puStack_f4 = &LAB_1091a850;
  pppuStack_f8 = &pppuStack_ec;
  ppuStack_fc = (undefined1 **)0x1091a589;
  FUN_1091d8d0();
  if ((ppuStack_e0 != &puStack_f4) && (ppuStack_e0 != (undefined1 **)0x0)) {
    ppuStack_fc = ppuStack_e0;
    pcStack_100 = (char *)0x1091a59f;
    FUN_10c3d5d0();
  }
  ppuStack_e4 = &puStack_f4;
  ppuStack_fc = (undefined1 **)0x11dd99d0;
  pcStack_100 = "sendGuildMatchSignUpList";
  pcStack_104 = (code *)0x1091a5bf;
  ppuStack_e0 = ppuStack_e4;
  FUN_100b62c0();
  pcStack_104 = FUN_1091a730;
  FUN_1091d8d0(&ppuStack_fc);
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
      FUN_1091e9d0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1092d480 @ 1092d480  size=136 ===== */
// calls: CPlayerVIPLevelUpInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CPlayerVIPLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerVIPLevelUpInfo::GetManagers
   strings:
     ""CPlayerVIPLevelUpInfo"" */

undefined4 __fastcall FUN_1092d480(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddaaec;
  puVar1 = (undefined4 *)CPlayerVIPLevelUpInfo__GetManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CPlayerVIPLevelUpInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bff44 & 1) == 0) {
        DAT_123bff44 = DAT_123bff44 | 1;
        FUN_1093aa30();
        FUN_11a8911f(&LAB_11c78000);
      }
      puVar1 = &DAT_123bff0c;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1092d510 @ 1092d510  size=109 ===== */
// calls: CPlayerVIPLevelUpInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CPlayerVIPLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerVIPLevelUpInfo::GetManagers
   strings:
     ""CPlayerVIPLevelUpInfo"" */

void FUN_1092d510(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddaaec;
  puVar1 = (undefined4 *)CPlayerVIPLevelUpInfo__GetManager();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CPlayerVIPLevelUpInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123bff44 & 1) == 0) {
        DAT_123bff44 = DAT_123bff44 | 1;
        FUN_1093aa30();
        FUN_11a8911f(&LAB_11c78000);
      }
      piVar2 = &DAT_123bff0c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_1092d870 @ 1092d870  size=4689 ===== */
// strings:
//   "GoodsListReq"
//   "IsShowFlashSale"
//   "GetMartData"
//   "RequestBuy"
//   "GetSelItemGroupData"
//   "GetCurPrice"
//   "GetInitData"
//   "GetCharCreditData"
//   "FetchExtendVipData"
//   "FetchOpenVipData"
//   "RequestOpenVip"
//   "GetPurchaseItemData"
//   "onRefresh"
//   "AutoRefresh"
//   "onClickRecharge"
//   "RapidBuyVip"
//   "RequestWorldPay_Face"
//   "RequestWorldPay_Sex"
//   "C2AS_GetMartItemData"
//   "C2AS_OpenWeiXinWindow"

/* [RE-AUTO c0]
   strings:
     ""GoodsListReq""
     ""IsShowFlashSale""
     ""GetMartData""
     ""RequestBuy""
     ""GetSelItemGroupData""
     ""GetCurPrice""
     ""GetInitData""
     ""GetCharCreditData""
     ""FetchExtendVipData""
     ""FetchOpenVipData"" */

void __fastcall FUN_1092d870(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int iStack_3d8;
  code *pcStack_3d4;
  char *pcStack_3d0;
  code **ppcStack_3cc;
  code ***pppcStack_3c8;
  code *pcStack_3c4;
  char *pcStack_3c0;
  code ***pppcStack_3bc;
  code ***pppcStack_3b8;
  code **ppcStack_3b4;
  code **ppcStack_3b0;
  code ***pppcStack_3ac;
  code ***pppcStack_3a8;
  code ***pppcStack_3a4;
  code ***pppcStack_3a0;
  code ***pppcStack_39c;
  code ***pppcStack_398;
  code ***pppcStack_394;
  code ***pppcStack_390;
  code ***pppcStack_38c;
  code ***pppcStack_388;
  code ***pppcStack_384;
  code ***pppcStack_380;
  code ***pppcStack_37c;
  code ***pppcStack_378;
  code ***pppcStack_374;
  code ***pppcStack_370;
  code ***pppcStack_36c;
  code ***pppcStack_368;
  code ***pppcStack_364;
  code ***pppcStack_360;
  code ***pppcStack_35c;
  code ***pppcStack_358;
  code ***pppcStack_354;
  code ***pppcStack_350;
  code ***pppcStack_34c;
  code ***pppcStack_348;
  code ***pppcStack_344;
  code ***pppcStack_340;
  code ***pppcStack_33c;
  undefined4 ***pppuStack_338;
  code ***pppcStack_334;
  code ***pppcStack_330;
  code ***pppcStack_32c;
  code ***pppcStack_328;
  code ***pppcStack_324;
  code ***pppcStack_320;
  undefined4 ***pppuStack_31c;
  code ***pppcStack_318;
  code ***pppcStack_314;
  code ***pppcStack_310;
  code ***pppcStack_30c;
  code ***pppcStack_308;
  undefined4 ***pppuStack_304;
  undefined4 ***pppuStack_300;
  code ***pppcStack_2fc;
  code ***pppcStack_2f8;
  code ***pppcStack_2f4;
  code ***pppcStack_2f0;
  code ***pppcStack_2ec;
  code ***pppcStack_2e8;
  code ***pppcStack_2e4;
  code ***pppcStack_2e0;
  code ***pppcStack_2dc;
  code ***pppcStack_2d8;
  code ***pppcStack_2d4;
  code ***pppcStack_2d0;
  code ***pppcStack_2cc;
  code ***pppcStack_2c8;
  code ***pppcStack_2c4;
  code ***pppcStack_2c0;
  code ***pppcStack_2bc;
  code ***pppcStack_2b8;
  code ***pppcStack_2b4;
  code ***pppcStack_2b0;
  code ***pppcStack_2ac;
  code ***pppcStack_2a8;
  code ***pppcStack_2a4;
  code ***pppcStack_2a0;
  code ***pppcStack_29c;
  code ***pppcStack_298;
  code ***pppcStack_294;
  code ***pppcStack_290;
  code ***pppcStack_28c;
  code ***pppcStack_288;
  code ***pppcStack_284;
  code ***pppcStack_280;
  code ***pppcStack_27c;
  code ***pppcStack_278;
  code ***pppcStack_274;
  code ***pppcStack_270;
  code ***pppcStack_26c;
  code ***pppcStack_268;
  code ***pppcStack_264;
  code ***pppcStack_260;
  code ***pppcStack_25c;
  code ***pppcStack_258;
  code ***pppcStack_254;
  code ***pppcStack_250;
  code ***pppcStack_24c;
  code ***pppcStack_248;
  code ***pppcStack_244;
  code ***pppcStack_240;
  code ***pppcStack_23c;
  code ***pppcStack_238;
  code ***pppcStack_234;
  code ***pppcStack_230;
  code ***pppcStack_22c;
  code ***pppcStack_228;
  code ***pppcStack_224;
  code ***pppcStack_220;
  code ***pppcStack_21c;
  code ***pppcStack_218;
  code ***pppcStack_214;
  code ***pppcStack_210;
  code ***pppcStack_20c;
  code ***pppcStack_208;
  code ***pppcStack_204;
  code ***pppcStack_200;
  code ***pppcStack_1fc;
  code ***pppcStack_1f8;
  code ***pppcStack_1f4;
  code ***pppcStack_1f0;
  code ***pppcStack_1ec;
  code ***pppcStack_1e8;
  code ***pppcStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  code ***pppcStack_1d8;
  code ***pppcStack_1d4;
  code ***pppcStack_1d0;
  code ***pppcStack_1cc;
  code ***pppcStack_1c8;
  code ***pppcStack_1c4;
  code ***pppcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  code ***pppcStack_1b0;
  code ***pppcStack_1ac;
  code ***pppcStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  code ***pppcStack_19c;
  undefined4 ***pppuStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
  undefined4 ***pppuStack_17c;
  undefined4 ***pppuStack_178;
  code ***pppcStack_174;
  code ***pppcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  undefined4 ***pppuStack_164;
  undefined4 ***pppuStack_160;
  undefined4 ***pppuStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  code ***pppcStack_14c;
  undefined4 ***pppuStack_148;
  undefined4 ***pppuStack_144;
  undefined4 ***pppuStack_140;
  code ***pppcStack_13c;
  undefined4 ***pppuStack_138;
  code ***pppcStack_134;
  code ***pppcStack_130;
  undefined4 ***pppuStack_12c;
  undefined4 ***pppuStack_128;
  code ***pppcStack_124;
  code ***pppcStack_120;
  undefined4 ***pppuStack_11c;
  undefined4 ***pppuStack_118;
  undefined4 ***pppuStack_114;
  undefined4 ***pppuStack_110;
  undefined4 ***pppuStack_10c;
  code ***pppcStack_108;
  undefined4 ***pppuStack_104;
  undefined4 ***pppuStack_100;
  undefined4 ***pppuStack_fc;
  code ***pppcStack_f8;
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
  code ***pppcStack_ec;
  code ***pppcStack_e8;
  undefined4 ***pppuStack_e4;
  undefined4 ***pppuStack_e0;
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
  pppcStack_30 = (code ***)0x11ddb05c;
  pppcStack_34 = (code ***)0x1092d8a4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&LAB_1092f070;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1092d8b5;
  FUN_10935d40();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1092d8cb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddb07b;
  pppcStack_40 = (code ***)0x11ddb06c;
  pppcStack_44 = (code ***)0x1092d8eb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1092f4d0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x1092d8fc;
  FUN_10935d40();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1092d912;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddb0d3;
  pppcStack_50 = (code ***)0x11ddb0c8;
  pppcStack_54 = (code ***)0x1092d932;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1092f5b0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1092d943;
  FUN_10935d40();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x1092d959;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11ddb0de;
  pppcStack_60 = (code ***)0x11ddb0d4;
  pppcStack_64 = (code ***)0x1092d979;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10930a60;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1092d98a;
  FUN_10935d40();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x1092d9a0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)&DAT_11ddb0b3;
  pppcStack_70 = (code ***)&DAT_11ddb0ac;
  pppcStack_74 = (code ***)0x1092d9c0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10930720;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x1092d9d1;
  FUN_10935d40();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x1092d9e7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11ddb0c7;
  pppcStack_80 = (code ***)0x11ddb0b4;
  pppcStack_84 = (code ***)0x1092da07;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_1092f910;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x1092da18;
  FUN_10935d40();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x1092da2e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11ddb00b;
  pppcStack_90 = (code ***)0x11ddb000;
  pppcStack_94 = (code ***)0x1092da4e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_10930490;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1092da5f;
  FUN_10935d40();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x1092da75;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11ddb017;
  pppcStack_a0 = (code ***)0x11ddb00c;
  pppcStack_a4 = (code ***)0x1092da95;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_1092f0b0;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x1092daa6;
  FUN_10935d40();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x1092dabc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11ddafe9;
  pppcStack_b0 = (code ***)0x11ddafd8;
  pppcStack_b4 = (code ***)0x1092dadc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_1092f3b0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x1092daed;
  FUN_10935d40();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x1092db03;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11ddaffe;
  pppcStack_c0 = (code ***)0x11ddafec;
  pppcStack_c4 = (code ***)0x1092db23;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_1092eaf0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x1092db34;
  FUN_10935d40();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x1092db4a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11ddb048;
  pppcStack_d0 = (code ***)0x11ddb038;
  pppcStack_d4 = (code ***)0x1092db6a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_1092ec70;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x1092db7b;
  FUN_10935d40();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppuStack_e0 = (undefined4 ***)0x1092db91;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11ddb05a;
  pppuStack_e0 = (undefined4 ***)0x11ddb04c;
  pppuStack_e4 = (undefined4 ***)0x1092dbb1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppuStack_e4 = (undefined4 ***)FUN_1092ec00;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x1092dbc2;
  FUN_10935d40();
  if (((undefined4 ****)pppcStack_d0 != &pppuStack_e4) &&
     ((undefined4 ****)pppcStack_d0 != (undefined4 ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppuStack_f0 = (undefined4 ***)0x1092dbd8;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppuStack_e4;
  pppcStack_ec = (code ***)0x11ddb02b;
  pppuStack_f0 = (undefined4 ***)0x11ddb018;
  pppuStack_f4 = (undefined4 ***)0x1092dbf8;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppuStack_f4 = (undefined4 ***)FUN_1092fbb0;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppuStack_fc = (undefined4 ***)0x1092dc09;
  FUN_10935d40();
  if (((undefined4 ****)pppuStack_e0 != &pppuStack_f4) &&
     ((undefined4 ****)pppuStack_e0 != (undefined4 ****)0x0)) {
    pppuStack_fc = pppuStack_e0;
    pppuStack_100 = (undefined4 ***)0x1092dc1f;
    FUN_10c3d5d0();
  }
  pppuStack_e4 = &pppuStack_f4;
  pppuStack_fc = (undefined4 ***)0x11ddb035;
  pppuStack_100 = (undefined4 ***)0x11ddb02c;
  pppuStack_104 = (undefined4 ***)0x1092dc3f;
  pppuStack_e0 = pppuStack_e4;
  FUN_100b62c0();
  pppuStack_104 = (undefined4 ***)&LAB_109306a0;
  pppcStack_108 = (code ***)&pppuStack_fc;
  pppuStack_10c = (undefined4 ***)0x1092dc50;
  FUN_10935d40();
  if (((undefined4 ****)pppuStack_f0 != &pppuStack_104) &&
     ((undefined4 ****)pppuStack_f0 != (undefined4 ****)0x0)) {
    pppuStack_10c = pppuStack_f0;
    pppuStack_110 = (undefined4 ***)0x1092dc66;
    FUN_10c3d5d0();
  }
  pppuStack_f4 = &pppuStack_104;
  pppuStack_10c = (undefined4 ***)0x11ddb1cf;
  pppuStack_110 = (undefined4 ***)0x11ddb1c4;
  pppuStack_114 = (undefined4 ***)0x1092dc86;
  pppuStack_f0 = pppuStack_f4;
  FUN_100b62c0();
  pppuStack_114 = (undefined4 ***)&LAB_109306e0;
  pppuStack_118 = &pppuStack_10c;
  pppuStack_11c = (undefined4 ***)0x1092dc97;
  FUN_10935d40();
  if (((undefined4 ****)pppuStack_100 != &pppuStack_114) &&
     ((undefined4 ****)pppuStack_100 != (undefined4 ****)0x0)) {
    pppuStack_11c = pppuStack_100;
    pppcStack_120 = (code ***)0x1092dcad;
    FUN_10c3d5d0();
  }
  pppuStack_104 = &pppuStack_114;
  pppuStack_11c = (undefined4 ***)0x11ddb1df;
  pppcStack_120 = (code ***)0x11ddb1d0;
  pppcStack_124 = (code ***)0x1092dccd;
  pppuStack_100 = pppuStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)&LAB_1092f390;
  pppuStack_128 = &pppuStack_11c;
  pppuStack_12c = (undefined4 ***)0x1092dcde;
  FUN_10935d40();
  if (((code ****)pppuStack_110 != &pppcStack_124) && ((code ****)pppuStack_110 != (code ****)0x0))
  {
    pppuStack_12c = pppuStack_110;
    pppcStack_130 = (code ***)0x1092dcf4;
    FUN_10c3d5d0();
  }
  pppuStack_114 = &pppcStack_124;
  pppuStack_12c = (undefined4 ***)0x11ddb1ab;
  pppcStack_130 = (code ***)0x11ddb1a0;
  pppcStack_134 = (code ***)0x1092dd14;
  pppuStack_110 = pppuStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)&LAB_1092f3a0;
  pppuStack_138 = &pppuStack_12c;
  pppcStack_13c = (code ***)0x1092dd25;
  FUN_10935d40();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppuStack_140 = (undefined4 ***)0x1092dd3b;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11ddb1c0;
  pppuStack_140 = (undefined4 ***)0x11ddb1ac;
  pppuStack_144 = (undefined4 ***)0x1092dd5b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppuStack_144 = (undefined4 ***)FUN_10930bc0;
  pppuStack_148 = &pppcStack_13c;
  pppcStack_14c = (code ***)0x1092dd6c;
  FUN_10935d40();
  if (((undefined4 ****)pppcStack_130 != &pppuStack_144) &&
     ((undefined4 ****)pppcStack_130 != (undefined4 ****)0x0)) {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x1092dd82;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppuStack_144;
  pppcStack_14c = (code ***)0x11ddb223;
  pppcStack_150 = (code ***)0x11ddb210;
  pppcStack_154 = (code ***)0x1092dda2;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_10930cc0;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppuStack_15c = (undefined4 ***)0x1092ddb3;
  FUN_10935d40();
  if (((code ****)pppuStack_140 != &pppcStack_154) && ((code ****)pppuStack_140 != (code ****)0x0))
  {
    pppuStack_15c = pppuStack_140;
    pppuStack_160 = (undefined4 ***)0x1092ddc9;
    FUN_10c3d5d0();
  }
  pppuStack_144 = &pppcStack_154;
  pppuStack_15c = (undefined4 ***)0x11ddb238;
  pppuStack_160 = (undefined4 ***)0x11ddb224;
  pppuStack_164 = (undefined4 ***)0x1092dde9;
  pppuStack_140 = pppuStack_144;
  FUN_100b62c0();
  pppuStack_164 = (undefined4 ***)&LAB_109315f0;
  pppcStack_168 = (code ***)&pppuStack_15c;
  pppcStack_16c = (code ***)0x1092ddfa;
  FUN_10935d40();
  if (((undefined4 ****)pppcStack_150 != &pppuStack_164) &&
     ((undefined4 ****)pppcStack_150 != (undefined4 ****)0x0)) {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x1092de10;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppuStack_164;
  pppcStack_16c = (code ***)0x11ddb1f5;
  pppcStack_170 = (code ***)0x11ddb1e0;
  pppcStack_174 = (code ***)0x1092de30;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_109316e0;
  pppuStack_178 = &pppcStack_16c;
  pppuStack_17c = (undefined4 ***)0x1092de41;
  FUN_10935d40();
  if (((code ****)pppuStack_160 != &pppcStack_174) && ((code ****)pppuStack_160 != (code ****)0x0))
  {
    pppuStack_17c = pppuStack_160;
    pppcStack_180 = (code ***)0x1092de57;
    FUN_10c3d5d0();
  }
  pppuStack_164 = &pppcStack_174;
  pppuStack_17c = (undefined4 ***)0x11ddb20e;
  pppcStack_180 = (code ***)0x11ddb1f8;
  pppcStack_184 = (code ***)0x1092de77;
  pppuStack_160 = pppuStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)&LAB_10931730;
  pppcStack_188 = (code ***)&pppuStack_17c;
  pppcStack_18c = (code ***)0x1092de88;
  FUN_10935d40();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x1092de9e;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11ddb11f;
  pppcStack_190 = (code ***)0x11ddb10c;
  pppcStack_194 = (code ***)0x1092debe;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_10931750;
  pppuStack_198 = &pppcStack_18c;
  pppcStack_19c = (code ***)0x1092decf;
  FUN_10935d40();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x1092dee5;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11ddb136;
  pppcStack_1a0 = (code ***)0x11ddb120;
  pppcStack_1a4 = (code ***)0x1092df05;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_10931790;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x1092df16;
  FUN_10935d40();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppcStack_1b0 = (code ***)0x1092df2c;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11ddb0f5;
  pppcStack_1b0 = (code ***)0x11ddb0e0;
  pppcStack_1b4 = (code ***)0x1092df4c;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppcStack_1b4 = (code ***)FUN_10931830;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x1092df5d;
  FUN_10935d40();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pppcStack_1c0 = (code ***)0x1092df73;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11ddb109;
  pppcStack_1c0 = (code ***)0x11ddb0f8;
  pppcStack_1c4 = (code ***)0x1092df93;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppcStack_1c4 = (code ***)FUN_10931a90;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppcStack_1cc = (code ***)0x1092dfa4;
  FUN_10935d40();
  if (((code ****)pppcStack_1b0 != &pppcStack_1c4) && ((code ****)pppcStack_1b0 != (code ****)0x0))
  {
    pppcStack_1cc = pppcStack_1b0;
    pppcStack_1d0 = (code ***)0x1092dfba;
    FUN_10c3d5d0();
  }
  pppcStack_1b4 = (code ***)&pppcStack_1c4;
  pppcStack_1cc = (code ***)0x11ddb182;
  pppcStack_1d0 = (code ***)0x11ddb168;
  pppcStack_1d4 = (code ***)0x1092dfda;
  pppcStack_1b0 = pppcStack_1b4;
  FUN_100b62c0();
  pppcStack_1d4 = (code ***)FUN_10931b80;
  pppcStack_1d8 = (code ***)&pppcStack_1cc;
  pppcStack_1dc = (code ***)0x1092dfeb;
  FUN_10935d40();
  if (((code ****)pppcStack_1c0 != &pppcStack_1d4) && ((code ****)pppcStack_1c0 != (code ****)0x0))
  {
    pppcStack_1dc = pppcStack_1c0;
    pppcStack_1e0 = (code ***)0x1092e001;
    FUN_10c3d5d0();
  }
  pppcStack_1c4 = (code ***)&pppcStack_1d4;
  pppcStack_1dc = (code ***)0x11ddb19d;
  pppcStack_1e0 = (code ***)0x11ddb184;
  pppcStack_1e4 = (code ***)0x1092e021;
  pppcStack_1c0 = pppcStack_1c4;
  FUN_100b62c0();
  pppcStack_1e4 = (code ***)FUN_10931f20;
  pppcStack_1e8 = (code ***)&pppcStack_1dc;
  pppcStack_1ec = (code ***)0x1092e032;
  FUN_10935d40();
  if (((code ****)pppcStack_1d0 != &pppcStack_1e4) && ((code ****)pppcStack_1d0 != (code ****)0x0))
  {
    pppcStack_1ec = pppcStack_1d0;
    pppcStack_1f0 = (code ***)0x1092e048;
    FUN_10c3d5d0();
  }
  pppcStack_1d4 = (code ***)&pppcStack_1e4;
  pppcStack_1ec = (code ***)0x11ddb151;
  pppcStack_1f0 = (code ***)0x11ddb138;
  pppcStack_1f4 = (code ***)0x1092e068;
  pppcStack_1d0 = pppcStack_1d4;
  FUN_100b62c0();
  pppcStack_1f4 = (code ***)FUN_109328f0;
  pppcStack_1f8 = (code ***)&pppcStack_1ec;
  pppcStack_1fc = (code ***)0x1092e079;
  FUN_10935d40();
  if (((code ****)pppcStack_1e0 != &pppcStack_1f4) && ((code ****)pppcStack_1e0 != (code ****)0x0))
  {
    pppcStack_1fc = pppcStack_1e0;
    pppcStack_200 = (code ***)0x1092e08f;
    FUN_10c3d5d0();
  }
  pppcStack_1e4 = (code ***)&pppcStack_1f4;
  pppcStack_1fc = (code ***)0x11ddb166;
  pppcStack_200 = (code ***)0x11ddb154;
  pppcStack_204 = (code ***)0x1092e0af;
  pppcStack_1e0 = pppcStack_1e4;
  FUN_100b62c0();
  pppcStack_204 = (code ***)FUN_10932960;
  pppcStack_208 = (code ***)&pppcStack_1fc;
  pppcStack_20c = (code ***)0x1092e0c0;
  FUN_10935d40();
  if (((code ****)pppcStack_1f0 != &pppcStack_204) && ((code ****)pppcStack_1f0 != (code ****)0x0))
  {
    pppcStack_20c = pppcStack_1f0;
    pppcStack_210 = (code ***)0x1092e0d6;
    FUN_10c3d5d0();
  }
  pppcStack_1f4 = (code ***)&pppcStack_204;
  pppcStack_20c = (code ***)0x11ddb327;
  pppcStack_210 = (code ***)0x11ddb30c;
  pppcStack_214 = (code ***)0x1092e0f6;
  pppcStack_1f0 = pppcStack_1f4;
  FUN_100b62c0();
  pppcStack_214 = (code ***)FUN_109329d0;
  pppcStack_218 = (code ***)&pppcStack_20c;
  pppcStack_21c = (code ***)0x1092e107;
  FUN_10935d40();
  if (((code ****)pppcStack_200 != &pppcStack_214) && ((code ****)pppcStack_200 != (code ****)0x0))
  {
    pppcStack_21c = pppcStack_200;
    pppcStack_220 = (code ***)0x1092e11d;
    FUN_10c3d5d0();
  }
  pppcStack_204 = (code ***)&pppcStack_214;
  pppcStack_21c = (code ***)0x11ddb337;
  pppcStack_220 = (code ***)0x11ddb328;
  pppcStack_224 = (code ***)0x1092e13d;
  pppcStack_200 = pppcStack_204;
  FUN_100b62c0();
  pppcStack_224 = (code ***)FUN_10932d30;
  pppcStack_228 = (code ***)&pppcStack_21c;
  pppcStack_22c = (code ***)0x1092e14e;
  FUN_10935d40();
  if (((code ****)pppcStack_210 != &pppcStack_224) && ((code ****)pppcStack_210 != (code ****)0x0))
  {
    pppcStack_22c = pppcStack_210;
    pppcStack_230 = (code ***)0x1092e164;
    FUN_10c3d5d0();
  }
  pppcStack_214 = (code ***)&pppcStack_224;
  pppcStack_22c = (code ***)0x11ddb2f7;
  pppcStack_230 = (code ***)0x11ddb2e4;
  pppcStack_234 = (code ***)0x1092e184;
  pppcStack_210 = pppcStack_214;
  FUN_100b62c0();
  pppcStack_234 = (code ***)FUN_10932d90;
  pppcStack_238 = (code ***)&pppcStack_22c;
  pppcStack_23c = (code ***)0x1092e195;
  FUN_10935d40();
  if (((code ****)pppcStack_220 != &pppcStack_234) && ((code ****)pppcStack_220 != (code ****)0x0))
  {
    pppcStack_23c = pppcStack_220;
    pppcStack_240 = (code ***)0x1092e1ab;
    FUN_10c3d5d0();
  }
  pppcStack_224 = (code ***)&pppcStack_234;
  pppcStack_23c = (code ***)0x11ddb309;
  pppcStack_240 = (code ***)0x11ddb2f8;
  pppcStack_244 = (code ***)0x1092e1cb;
  pppcStack_220 = pppcStack_224;
  FUN_100b62c0();
  pppcStack_244 = (code ***)FUN_10932e70;
  pppcStack_248 = (code ***)&pppcStack_23c;
  pppcStack_24c = (code ***)0x1092e1dc;
  FUN_10935d40();
  if (((code ****)pppcStack_230 != &pppcStack_244) && ((code ****)pppcStack_230 != (code ****)0x0))
  {
    pppcStack_24c = pppcStack_230;
    pppcStack_250 = (code ***)0x1092e1f2;
    FUN_10c3d5d0();
  }
  pppcStack_234 = (code ***)&pppcStack_244;
  pppcStack_24c = (code ***)0x11ddb377;
  pppcStack_250 = (code ***)0x11ddb364;
  pppcStack_254 = (code ***)0x1092e212;
  pppcStack_230 = pppcStack_234;
  FUN_100b62c0();
  pppcStack_254 = (code ***)FUN_10932f60;
  pppcStack_258 = (code ***)&pppcStack_24c;
  pppcStack_25c = (code ***)0x1092e223;
  FUN_10935d40();
  if (((code ****)pppcStack_240 != &pppcStack_254) && ((code ****)pppcStack_240 != (code ****)0x0))
  {
    pppcStack_25c = pppcStack_240;
    pppcStack_260 = (code ***)0x1092e239;
    FUN_10c3d5d0();
  }
  pppcStack_244 = (code ***)&pppcStack_254;
  pppcStack_25c = (code ***)0x11ddb392;
  pppcStack_260 = (code ***)0x11ddb378;
  pppcStack_264 = (code ***)0x1092e259;
  pppcStack_240 = pppcStack_244;
  FUN_100b62c0();
  pppcStack_264 = (code ***)FUN_109333a0;
  pppcStack_268 = (code ***)&pppcStack_25c;
  pppcStack_26c = (code ***)0x1092e26a;
  FUN_10935d40();
  if (((code ****)pppcStack_250 != &pppcStack_264) && ((code ****)pppcStack_250 != (code ****)0x0))
  {
    pppcStack_26c = pppcStack_250;
    pppcStack_270 = (code ***)0x1092e280;
    FUN_10c3d5d0();
  }
  pppcStack_254 = (code ***)&pppcStack_264;
  pppcStack_26c = (code ***)0x11ddb350;
  pppcStack_270 = (code ***)0x11ddb338;
  pppcStack_274 = (code ***)0x1092e2a0;
  pppcStack_250 = pppcStack_254;
  FUN_100b62c0();
  pppcStack_274 = (code ***)FUN_10933790;
  pppcStack_278 = (code ***)&pppcStack_26c;
  pppcStack_27c = (code ***)0x1092e2b1;
  FUN_10935d40();
  if (((code ****)pppcStack_260 != &pppcStack_274) && ((code ****)pppcStack_260 != (code ****)0x0))
  {
    pppcStack_27c = pppcStack_260;
    pppcStack_280 = (code ***)0x1092e2c7;
    FUN_10c3d5d0();
  }
  pppcStack_264 = (code ***)&pppcStack_274;
  pppcStack_27c = (code ***)0x11ddb363;
  pppcStack_280 = (code ***)0x11ddb354;
  pppcStack_284 = (code ***)0x1092e2e7;
  pppcStack_260 = pppcStack_264;
  FUN_100b62c0();
  pppcStack_284 = (code ***)FUN_109337e0;
  pppcStack_288 = (code ***)&pppcStack_27c;
  pppcStack_28c = (code ***)0x1092e2f8;
  FUN_10935d40();
  if (((code ****)pppcStack_270 != &pppcStack_284) && ((code ****)pppcStack_270 != (code ****)0x0))
  {
    pppcStack_28c = pppcStack_270;
    pppcStack_290 = (code ***)0x1092e30e;
    FUN_10c3d5d0();
  }
  pppcStack_274 = (code ***)&pppcStack_284;
  pppcStack_28c = (code ***)0x11ddb27f;
  pppcStack_290 = (code ***)0x11ddb268;
  pppcStack_294 = (code ***)0x1092e32e;
  pppcStack_270 = pppcStack_274;
  FUN_100b62c0();
  pppcStack_294 = (code ***)FUN_109338e0;
  pppcStack_298 = (code ***)&pppcStack_28c;
  pppcStack_29c = (code ***)0x1092e33f;
  FUN_10935d40();
  if (((code ****)pppcStack_280 != &pppcStack_294) && ((code ****)pppcStack_280 != (code ****)0x0))
  {
    pppcStack_29c = pppcStack_280;
    pppcStack_2a0 = (code ***)0x1092e355;
    FUN_10c3d5d0();
  }
  pppcStack_284 = (code ***)&pppcStack_294;
  pppcStack_29c = (code ***)0x11ddb294;
  pppcStack_2a0 = (code ***)0x11ddb280;
  pppcStack_2a4 = (code ***)0x1092e375;
  pppcStack_280 = pppcStack_284;
  FUN_100b62c0();
  pppcStack_2a4 = (code ***)FUN_109339c0;
  pppcStack_2a8 = (code ***)&pppcStack_29c;
  pppcStack_2ac = (code ***)0x1092e386;
  FUN_10935d40();
  if (((code ****)pppcStack_290 != &pppcStack_2a4) && ((code ****)pppcStack_290 != (code ****)0x0))
  {
    pppcStack_2ac = pppcStack_290;
    pppcStack_2b0 = (code ***)0x1092e39c;
    FUN_10c3d5d0();
  }
  pppcStack_294 = (code ***)&pppcStack_2a4;
  pppcStack_2ac = (code ***)0x11ddb24d;
  pppcStack_2b0 = (code ***)0x11ddb23c;
  pppcStack_2b4 = (code ***)0x1092e3bc;
  pppcStack_290 = pppcStack_294;
  FUN_100b62c0();
  pppcStack_2b4 = (code ***)FUN_10933c90;
  pppcStack_2b8 = (code ***)&pppcStack_2ac;
  pppcStack_2bc = (code ***)0x1092e3cd;
  FUN_10935d40();
  if (((code ****)pppcStack_2a0 != &pppcStack_2b4) && ((code ****)pppcStack_2a0 != (code ****)0x0))
  {
    pppcStack_2bc = pppcStack_2a0;
    pppcStack_2c0 = (code ***)0x1092e3e3;
    FUN_10c3d5d0();
  }
  pppcStack_2a4 = (code ***)&pppcStack_2b4;
  pppcStack_2bc = (code ***)0x11ddb266;
  pppcStack_2c0 = (code ***)0x11ddb250;
  pppcStack_2c4 = (code ***)0x1092e403;
  pppcStack_2a0 = pppcStack_2a4;
  FUN_100b62c0();
  pppcStack_2c4 = (code ***)FUN_10933d00;
  pppcStack_2c8 = (code ***)&pppcStack_2bc;
  pppcStack_2cc = (code ***)0x1092e414;
  FUN_10935d40();
  if (((code ****)pppcStack_2b0 != &pppcStack_2c4) && ((code ****)pppcStack_2b0 != (code ****)0x0))
  {
    pppcStack_2cc = pppcStack_2b0;
    pppcStack_2d0 = (code ***)0x1092e42a;
    FUN_10c3d5d0();
  }
  pppcStack_2b4 = (code ***)&pppcStack_2c4;
  pppcStack_2cc = (code ***)0x11ddb2cf;
  pppcStack_2d0 = (code ***)0x11ddb2bc;
  pppcStack_2d4 = (code ***)0x1092e44a;
  pppcStack_2b0 = pppcStack_2b4;
  FUN_100b62c0();
  pppcStack_2d4 = (code ***)FUN_10933d70;
  pppcStack_2d8 = (code ***)&pppcStack_2cc;
  pppcStack_2dc = (code ***)0x1092e45b;
  FUN_10935d40();
  if (((code ****)pppcStack_2c0 != &pppcStack_2d4) && ((code ****)pppcStack_2c0 != (code ****)0x0))
  {
    pppcStack_2dc = pppcStack_2c0;
    pppcStack_2e0 = (code ***)0x1092e471;
    FUN_10c3d5d0();
  }
  pppcStack_2c4 = (code ***)&pppcStack_2d4;
  pppcStack_2dc = (code ***)0x11ddb2e1;
  pppcStack_2e0 = (code ***)0x11ddb2d0;
  pppcStack_2e4 = (code ***)0x1092e491;
  pppcStack_2c0 = pppcStack_2c4;
  FUN_100b62c0();
  pppcStack_2e4 = (code ***)FUN_10933de0;
  pppcStack_2e8 = (code ***)&pppcStack_2dc;
  pppcStack_2ec = (code ***)0x1092e4a2;
  FUN_10935d40();
  if (((code ****)pppcStack_2d0 != &pppcStack_2e4) && ((code ****)pppcStack_2d0 != (code ****)0x0))
  {
    pppcStack_2ec = pppcStack_2d0;
    pppcStack_2f0 = (code ***)0x1092e4b8;
    FUN_10c3d5d0();
  }
  pppcStack_2d4 = (code ***)&pppcStack_2e4;
  pppcStack_2ec = (code ***)&DAT_11ddb2a6;
  pppcStack_2f0 = (code ***)&DAT_11ddb298;
  pppcStack_2f4 = (code ***)0x1092e4d8;
  pppcStack_2d0 = pppcStack_2d4;
  FUN_100b62c0();
  pppcStack_2f4 = (code ***)FUN_10933e50;
  pppcStack_2f8 = (code ***)&pppcStack_2ec;
  pppcStack_2fc = (code ***)0x1092e4e9;
  FUN_10935d40();
  if (((code ****)pppcStack_2e0 != &pppcStack_2f4) && ((code ****)pppcStack_2e0 != (code ****)0x0))
  {
    pppcStack_2fc = pppcStack_2e0;
    pppuStack_300 = (undefined4 ***)0x1092e4ff;
    FUN_10c3d5d0();
  }
  pppcStack_2e4 = (code ***)&pppcStack_2f4;
  pppcStack_2fc = (code ***)0x11ddb2b9;
  pppuStack_300 = (undefined4 ***)0x11ddb2a8;
  pppuStack_304 = (undefined4 ***)0x1092e51f;
  pppcStack_2e0 = pppcStack_2e4;
  FUN_100b62c0();
  pppuStack_304 = (undefined4 ***)FUN_10933ec0;
  pppcStack_308 = (code ***)&pppcStack_2fc;
  pppcStack_30c = (code ***)0x1092e530;
  FUN_10935d40();
  if (((undefined4 ****)pppcStack_2f0 != &pppuStack_304) &&
     ((undefined4 ****)pppcStack_2f0 != (undefined4 ****)0x0)) {
    pppcStack_30c = pppcStack_2f0;
    pppcStack_310 = (code ***)0x1092e546;
    FUN_10c3d5d0();
  }
  pppcStack_2f4 = (code ***)&pppuStack_304;
  pppcStack_30c = (code ***)0x11ddb45c;
  pppcStack_310 = (code ***)0x11ddb44c;
  pppcStack_314 = (code ***)0x1092e566;
  pppcStack_2f0 = pppcStack_2f4;
  FUN_100b62c0();
  pppcStack_314 = (code ***)FUN_10933f30;
  pppcStack_318 = (code ***)&pppcStack_30c;
  pppuStack_31c = (undefined4 ***)0x1092e577;
  FUN_10935d40();
  if (((code ****)pppuStack_300 != &pppcStack_314) && ((code ****)pppuStack_300 != (code ****)0x0))
  {
    pppuStack_31c = pppuStack_300;
    pppcStack_320 = (code ***)0x1092e58d;
    FUN_10c3d5d0();
  }
  pppuStack_304 = &pppcStack_314;
  pppuStack_31c = (undefined4 ***)0x11ddb471;
  pppcStack_320 = (code ***)0x11ddb460;
  pppcStack_324 = (code ***)0x1092e5ad;
  pppuStack_300 = pppuStack_304;
  FUN_100b62c0();
  pppcStack_324 = (code ***)&LAB_10934030;
  pppcStack_328 = (code ***)&pppuStack_31c;
  pppcStack_32c = (code ***)0x1092e5be;
  FUN_10935d40();
  if (((code ****)pppcStack_310 != &pppcStack_324) && ((code ****)pppcStack_310 != (code ****)0x0))
  {
    pppcStack_32c = pppcStack_310;
    pppcStack_330 = (code ***)0x1092e5d4;
    FUN_10c3d5d0();
  }
  pppcStack_314 = (code ***)&pppcStack_324;
  pppcStack_32c = (code ***)0x11dc98ed;
  pppcStack_330 = (code ***)0x11dc98e0;
  pppcStack_334 = (code ***)0x1092e5f4;
  pppcStack_310 = pppcStack_314;
  FUN_100b62c0();
  pppcStack_334 = (code ***)FUN_10934050;
  pppuStack_338 = &pppcStack_32c;
  pppcStack_33c = (code ***)0x1092e605;
  FUN_10935d40();
  if (((code ****)pppcStack_320 != &pppcStack_334) && ((code ****)pppcStack_320 != (code ****)0x0))
  {
    pppcStack_33c = pppcStack_320;
    pppcStack_340 = (code ***)0x1092e61b;
    FUN_10c3d5d0();
  }
  pppcStack_324 = (code ***)&pppcStack_334;
  pppcStack_33c = (code ***)0x11dc98dd;
  pppcStack_340 = (code ***)0x11dc98c8;
  pppcStack_344 = (code ***)0x1092e63b;
  pppcStack_320 = pppcStack_324;
  FUN_100b62c0();
  pppcStack_344 = (code ***)FUN_10934180;
  pppcStack_348 = (code ***)&pppcStack_33c;
  pppcStack_34c = (code ***)0x1092e64c;
  FUN_10935d40();
  if (((code ****)pppcStack_330 != &pppcStack_344) && ((code ****)pppcStack_330 != (code ****)0x0))
  {
    pppcStack_34c = pppcStack_330;
    pppcStack_350 = (code ***)0x1092e662;
    FUN_10c3d5d0();
  }
  pppcStack_334 = (code ***)&pppcStack_344;
  pppcStack_34c = (code ***)0x11dc9920;
  pppcStack_350 = (code ***)0x11dc990c;
  pppcStack_354 = (code ***)0x1092e682;
  pppcStack_330 = pppcStack_334;
  FUN_100b62c0();
  pppcStack_354 = (code ***)FUN_10934270;
  pppcStack_358 = (code ***)&pppcStack_34c;
  pppcStack_35c = (code ***)0x1092e693;
  FUN_10935d40();
  if (((code ****)pppcStack_340 != &pppcStack_354) && ((code ****)pppcStack_340 != (code ****)0x0))
  {
    pppcStack_35c = pppcStack_340;
    pppcStack_360 = (code ***)0x1092e6a9;
    FUN_10c3d5d0();
  }
  pppcStack_344 = (code ***)&pppcStack_354;
  pppcStack_35c = (code ***)0x11ddb42d;
  pppcStack_360 = (code ***)0x11ddb414;
  pppcStack_364 = (code ***)0x1092e6c9;
  pppcStack_340 = pppcStack_344;
  FUN_100b62c0();
  pppcStack_364 = (code ***)FUN_10934ae0;
  pppcStack_368 = (code ***)&pppcStack_35c;
  pppcStack_36c = (code ***)0x1092e6da;
  FUN_10935d40();
  if (((code ****)pppcStack_350 != &pppcStack_364) && ((code ****)pppcStack_350 != (code ****)0x0))
  {
    pppcStack_36c = pppcStack_350;
    pppcStack_370 = (code ***)0x1092e6f0;
    FUN_10c3d5d0();
  }
  pppcStack_354 = (code ***)&pppcStack_364;
  pppcStack_36c = (code ***)0x11ddb44a;
  pppcStack_370 = (code ***)0x11ddb430;
  pppcStack_374 = (code ***)0x1092e710;
  pppcStack_350 = pppcStack_354;
  FUN_100b62c0();
  pppcStack_374 = (code ***)FUN_10934b80;
  pppcStack_378 = (code ***)&pppcStack_36c;
  pppcStack_37c = (code ***)0x1092e721;
  FUN_10935d40();
  if (((code ****)pppcStack_360 != &pppcStack_374) && ((code ****)pppcStack_360 != (code ****)0x0))
  {
    pppcStack_37c = pppcStack_360;
    pppcStack_380 = (code ***)0x1092e737;
    FUN_10c3d5d0();
  }
  pppcStack_364 = (code ***)&pppcStack_374;
  pppcStack_37c = (code ***)0x11ddb4bd;
  pppcStack_380 = (code ***)0x11ddb4a4;
  pppcStack_384 = (code ***)0x1092e757;
  pppcStack_360 = pppcStack_364;
  FUN_100b62c0();
  pppcStack_384 = (code ***)FUN_10935220;
  pppcStack_388 = (code ***)&pppcStack_37c;
  pppcStack_38c = (code ***)0x1092e768;
  FUN_10935d40();
  if (((code ****)pppcStack_370 != &pppcStack_384) && ((code ****)pppcStack_370 != (code ****)0x0))
  {
    pppcStack_38c = pppcStack_370;
    pppcStack_390 = (code ***)0x1092e77e;
    FUN_10c3d5d0();
  }
  pppcStack_374 = (code ***)&pppcStack_384;
  pppcStack_38c = (code ***)0x11ddb4d9;
  pppcStack_390 = (code ***)0x11ddb4c0;
  pppcStack_394 = (code ***)0x1092e79e;
  pppcStack_370 = pppcStack_374;
  FUN_100b62c0();
  pppcStack_394 = (code ***)FUN_109355a0;
  pppcStack_398 = (code ***)&pppcStack_38c;
  pppcStack_39c = (code ***)0x1092e7af;
  FUN_10935d40();
  if (((code ****)pppcStack_380 != &pppcStack_394) && ((code ****)pppcStack_380 != (code ****)0x0))
  {
    pppcStack_39c = pppcStack_380;
    pppcStack_3a0 = (code ***)0x1092e7c5;
    FUN_10c3d5d0();
  }
  pppcStack_384 = (code ***)&pppcStack_394;
  pppcStack_39c = (code ***)0x11ddb489;
  pppcStack_3a0 = (code ***)0x11ddb474;
  pppcStack_3a4 = (code ***)0x1092e7e5;
  pppcStack_380 = pppcStack_384;
  FUN_100b62c0();
  pppcStack_3a4 = (code ***)FUN_10935600;
  pppcStack_3a8 = (code ***)&pppcStack_39c;
  pppcStack_3ac = (code ***)0x1092e7f6;
  FUN_10935d40();
  if (((code ****)pppcStack_390 != &pppcStack_3a4) && ((code ****)pppcStack_390 != (code ****)0x0))
  {
    pppcStack_3ac = pppcStack_390;
    ppcStack_3b0 = (code **)0x1092e80c;
    FUN_10c3d5d0();
  }
  pppcStack_394 = (code ***)&pppcStack_3a4;
  pppcStack_3ac = (code ***)0x11ddb4a2;
  ppcStack_3b0 = (code **)0x11ddb48c;
  ppcStack_3b4 = (code **)0x1092e82c;
  pppcStack_390 = pppcStack_394;
  FUN_100b62c0();
  ppcStack_3b4 = (code **)FUN_10935960;
  pppcStack_3b8 = (code ***)&pppcStack_3ac;
  pppcStack_3bc = (code ***)0x1092e83d;
  FUN_10935d40();
  if ((pppcStack_3a0 != &ppcStack_3b4) && (pppcStack_3a0 != (code ***)0x0)) {
    pppcStack_3bc = pppcStack_3a0;
    pcStack_3c0 = (char *)0x1092e853;
    FUN_10c3d5d0();
  }
  pppcStack_3a4 = &ppcStack_3b4;
  pppcStack_3bc = (code ***)0x11ddb3ce;
  pcStack_3c0 = "AS2C_RequestRefreshNum";
  pcStack_3c4 = (code *)0x1092e873;
  pppcStack_3a0 = pppcStack_3a4;
  FUN_100b62c0();
  pcStack_3c4 = FUN_10935a00;
  pppcStack_3c8 = (code ***)&pppcStack_3bc;
  ppcStack_3cc = (code **)0x1092e884;
  FUN_10935d40();
  if ((ppcStack_3b0 != &pcStack_3c4) && (ppcStack_3b0 != (code **)0x0)) {
    ppcStack_3cc = ppcStack_3b0;
    pcStack_3d0 = (char *)0x1092e89a;
    FUN_10c3d5d0();
  }
  ppcStack_3b4 = &pcStack_3c4;
  ppcStack_3cc = (code **)0x11dc6cd6;
  pcStack_3d0 = "OpenMartVipPanelNotify";
  pcStack_3d4 = (code *)0x1092e8ba;
  ppcStack_3b0 = ppcStack_3b4;
  FUN_100b62c0();
  pcStack_3d4 = FUN_10930e20;
  iStack_3d8 = param_1;
  FUN_104d0ee0(&ppcStack_3cc);
  if ((pcStack_3c4 != (code *)&iStack_3d8) && (pcStack_3c4 != (code *)0x0)) {
    FUN_10c3d5d0(pcStack_3c4);
  }
  piVar1 = (int *)FUN_10d17440();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 != 0) {
      FUN_1093b340(param_1,extraout_ECX);
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_1093b390();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_1093b3e0();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_1093b430();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_03);
      FUN_10d17870();
      FUN_1093b480();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_04);
      FUN_10d17870();
      FUN_1093b4d0();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,extraout_ECX_05);
      FUN_10d17870();
      FUN_1093b520();
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_10c3da30(*(int *)(param_1 + 0xbc));
  }
  iVar2 = DAT_1202e818;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  piVar1 = *(int **)(iVar2 + 0x58);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_10934c20(&iStack_3d8);
    (**(code **)(*piVar1 + 0xfc))(*(undefined4 *)(iVar2 + 0x14),0);
    if ((pcStack_3c4 != (code *)&iStack_3d8) && (pcStack_3c4 != (code *)0x0)) {
      FUN_10c3d5d0(pcStack_3c4);
    }
  }
  FUN_109343e0();
  FUN_11a89daa();
  return;
}



/* ===== FUN_109480a0 @ 109480a0  size=2023 ===== */
// calls: CPet::SetName, _localtime64
// strings:
//   "eventID"
//   "eventName"
//   "spoorType"
//   "spoorTaskViewType"
//   "eventFinish"
//   "eventCurrent"
//   "eventRewardValue"
//   "eventConditionName"
//   "eventDesc"
//   "eventPic"
//   "taskComplete"
//   "spoorGroupID"
//   "finishDay"
//   "finishYear"
//   "finishMonth"
//   "hunterStarLevel"
//   "newClear"
//   "newDetailClear"

/* [RE-AUTO c0]
   calls: _localtime64
   strings:
     ""eventID""
     ""eventName""
     ""spoorType""
     ""spoorTaskViewType""
     ""eventFinish""
     ""eventCurrent""
     ""eventRewardValue""
     ""eventConditionName""
     ""eventDesc""
     ""eventPic"" */

void FUN_109480a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  tm *ptVar7;
  int unaff_EBX;
  int unaff_ESI;
  int iVar8;
  int *piStack_d8;
  undefined1 *puStack_d4;
  int **ppiStack_d0;
  int *piStack_cc;
  undefined4 uStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  int iStack_a4;
  undefined4 uStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined1 *puStack_78;
  undefined1 uStack_74;
  int *piStack_70;
  int iStack_6c;
  undefined4 uStack_64;
  int *local_60;
  uint local_5c;
  int *local_58;
  undefined4 local_54;
  int *local_50;
  int *piStack_4c;
  int *piStack_48;
  uint uStack_44;
  uint uStack_40;
  int **ppiStack_3c;
  int **ppiStack_38;
  int **ppiStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_bc;
  local_60 = (int *)0x0;
  local_5c = param_4[1];
  local_54 = param_4[3];
  local_58 = (int *)param_4[2];
  local_50 = (int *)param_4[4];
  if ((local_5c >> 6 & 1) != 0) {
    local_60 = (int *)*param_4;
    ppiStack_d0 = &local_60;
    puStack_d4 = (undefined1 *)0x10948100;
    piStack_cc = local_58;
    (**(code **)(*local_60 + 4))();
  }
  if (((byte)param_4[7] & 0x8f) == 6) {
    if (((uint)param_4[7] >> 6 & 1) == 0) {
      puStack_78 = (undefined1 *)param_4[8];
    }
    else {
      puStack_78 = *(undefined1 **)param_4[8];
    }
    if (puStack_78 == (undefined1 *)0x0) goto LAB_10948855;
  }
  else {
    puStack_78 = &DAT_11d9d32b;
  }
  piStack_cc = (int *)0x1094813b;
  uVar2 = FUN_10947810();
  piStack_b8 = (int *)0x0;
  piStack_cc = (int *)&DAT_11d9d32b;
  ppiStack_d0 = (int **)0x1094815a;
  uStack_40 = uVar2;
  CPet__SetName();
  ppiStack_d0 = (int **)&DAT_11d9d32b;
  piStack_90 = (int *)0x0;
  piStack_8c = (int *)0x0;
  iStack_6c = 0;
  piStack_b8 = (int *)0x0;
  puStack_d4 = (undefined1 *)0x10948188;
  CPet__SetName();
  puStack_d4 = &DAT_11d9d32b;
  uStack_9c = 0;
  piStack_d8 = (int *)0x1094819e;
  CPet__SetName();
  piStack_d8 = (int *)&DAT_11d9d32b;
  uStack_9c = 0;
  CPet__SetName();
  iVar8 = 0;
  uStack_74 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) {
    piStack_cc = (int *)0x109481e1;
    iVar3 = (**(code **)(*piVar4 + 0xb4))();
    if (iVar3 != 0) {
      iVar8 = iVar3;
    }
  }
  iStack_84 = *(int *)(iVar8 + 0x2ab0);
  iVar8 = *(int *)(iVar8 + 0x2d10);
  iStack_6c = iVar8;
  if ((iStack_84 != 0) && (piStack_70 = (int *)0x0, 0 < (int)uVar2)) {
    do {
      ppiStack_d0 = (int **)0x10948216;
      piStack_cc = piStack_70;
      piVar4 = (int *)FUN_10947780();
      if (piVar4 != (int *)0x0) {
        uStack_44 = piVar4[0xf];
        uStack_64 = 0;
        ppiStack_3c = (int **)piVar4[5];
        ppiStack_34 = (int **)piVar4[6];
        if ((ppiStack_34 == (int **)0x2) && (iVar8 != 0)) {
          iVar3 = 1;
          iVar5 = *(int *)(iVar8 + 0x10);
          if (iVar5 != *(int *)(iVar8 + 0x14)) {
            do {
              if (iVar3 == piVar4[7]) {
                uStack_64 = *(undefined4 *)(iVar5 + 4);
                break;
              }
              iVar5 = iVar5 + 8;
              iVar3 = iVar3 + 1;
            } while (iVar5 != *(int *)(iVar8 + 0x14));
          }
        }
        piStack_cc = (int *)piVar4[7];
        ppiStack_d0 = (int **)0x10948282;
        iStack_80 = (int)piStack_cc;
        uStack_bc = FUN_104d8d20();
        piStack_cc = (int *)0x10948290;
        iVar8 = (**(code **)(*piVar4 + 0x18))();
        piStack_cc = (int *)&DAT_11d9d32b;
        if ((int *)piVar4[8] != (int *)0x0) {
          piStack_cc = (int *)piVar4[8];
        }
        ppiStack_d0 = (int **)0x109482ad;
        iStack_7c = iVar8;
        CPet__SetName();
        if (unaff_EBX != 0) {
          ppiStack_d0 = (int **)0x109482c0;
          iStack_6c = FUN_117c2790();
          unaff_EBX = *(int *)(unaff_EBX + 0x2c);
          if (unaff_EBX != 0) {
            piStack_90 = (int *)0x0;
            piStack_8c = (int *)0x0;
            ppiStack_d0 = (int **)&DAT_11d9d32b;
            if (*(undefined1 **)(unaff_EBX + 8) != (undefined1 *)0x0) {
              ppiStack_d0 = (int **)*(undefined1 **)(unaff_EBX + 8);
            }
            puStack_d4 = (undefined1 *)0x109482fe;
            CPet__SetName();
            puStack_d4 = &DAT_11d9d32b;
            if (*(undefined1 **)(unaff_ESI + 0x14) != (undefined1 *)0x0) {
              puStack_d4 = *(undefined1 **)(unaff_ESI + 0x14);
            }
            piStack_d8 = (int *)0x10948319;
            CPet__SetName();
            piStack_d8 = piStack_8c;
            uVar1 = (**(code **)(*piStack_90 + 0x60))();
            iStack_84 = CONCAT31(iStack_84._1_3_,uVar1);
            piStack_4c = (int *)(**(code **)(*piStack_94 + 100))(piStack_90);
            iVar3 = (**(code **)(*piStack_98 + 0x50))(piStack_94);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) {
              iVar3 = FUN_1089e5e0();
              if (iVar3 != 0) {
                piStack_90 = *(int **)(iVar3 + 0x24);
                piStack_8c = (int *)0x0;
                if (ppiStack_3c != (int **)0x0) {
                  piStack_8c = piStack_90;
                }
              }
            }
            else {
              piVar6 = (int *)FUN_1161a1e0(0x20);
              iVar8 = iStack_80;
              if (piVar6 != (int *)0x0) {
                ppiStack_d0 = (int **)0x10948376;
                piStack_8c = (int *)(**(code **)(*piVar6 + 0x14))();
                ppiStack_d0 = (int **)0x10948381;
                piStack_90 = (int *)(**(code **)(*piVar6 + 0x18))();
                iVar8 = iStack_80;
              }
            }
          }
        }
        ppiStack_d0 = (int **)piVar4[0xe];
        puStack_d4 = (undefined1 *)0x10948395;
        CPet__SetName();
        puStack_d4 = (undefined1 *)0x0;
        piStack_d8 = (int *)0x0;
        piStack_b8 = (int *)0x0;
        piStack_b4 = (int *)0x0;
        FUN_11a98de0(&piStack_b8,iStack_80);
        FUN_104d1550("eventID",iVar8);
        uStack_40 = uStack_40 & 0xffffff00;
        puStack_30 = &uStack_40;
        puStack_2c = puStack_30;
        FUN_100e5aa0(puStack_30);
        FUN_104d1670("eventName",puStack_30);
        if ((puStack_30 != &uStack_44) && (puStack_30 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_30);
        }
        FUN_104d1550("spoorType",local_50);
        FUN_104d1550("spoorTaskViewType",local_60);
        FUN_104d1550("eventFinish",piStack_a8);
        FUN_104d1550("eventCurrent",iStack_a4);
        FUN_104d1550("eventRewardValue",iStack_84);
        uStack_44 = uStack_44 & 0xffffff00;
        ppiStack_34 = (int **)&uStack_44;
        puStack_30 = (uint *)ppiStack_34;
        FUN_100e5aa0(ppiStack_34);
        FUN_104d1670("eventConditionName",ppiStack_34);
        if ((ppiStack_34 != &piStack_48) && (ppiStack_34 != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_34);
        }
        ppiStack_38 = &piStack_48;
        piStack_48 = (int *)((uint)piStack_48 & 0xffffff00);
        ppiStack_34 = ppiStack_38;
        FUN_100e5aa0(ppiStack_38);
        FUN_104d1670("eventDesc",ppiStack_38);
        if ((ppiStack_38 != &piStack_4c) && (ppiStack_38 != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_38);
        }
        ppiStack_3c = &piStack_4c;
        piStack_4c = (int *)((uint)piStack_4c & 0xffffff00);
        ppiStack_38 = ppiStack_3c;
        FUN_100e5aa0(ppiStack_3c);
        FUN_104d1670("eventPic",ppiStack_3c);
        if ((ppiStack_3c != &local_50) && (ppiStack_3c != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_3c);
        }
        FUN_104d15e0("taskComplete",uStack_9c);
        FUN_104d1550("spoorGroupID",uStack_64);
        if (piStack_8c != (int *)0x0) {
          local_58 = piStack_8c;
          local_54 = 0;
          ptVar7 = _localtime64((__time64_t *)&local_58);
          FUN_104d1550("finishDay",ptVar7->tm_mday);
          FUN_104d1550("finishYear",ptVar7->tm_year);
          FUN_104d1550("finishMonth",ptVar7->tm_mon);
          FUN_104d1550("hunterStarLevel",piVar4[7]);
          iVar8 = iStack_a4;
        }
        uVar1 = 0;
        for (piVar4 = DAT_123bd2a8; piVar4 != DAT_123bd2ac; piVar4 = piVar4 + 1) {
          if (*piVar4 == iVar8) {
            uVar1 = 1;
            break;
          }
        }
        if (param_2 != 0) {
          local_50 = (int *)0x0;
          piStack_4c = (int *)0x2;
          piStack_48 = (int *)CONCAT31(piStack_48._1_3_,uVar1);
          (**(code **)(*piStack_d8 + 0x14))
                    (ppiStack_d0,"newClear",&local_50,((byte)puStack_d4 & 0x8f) == 10);
          if (((uint)piStack_4c >> 6 & 1) != 0) {
            (**(code **)(*local_50 + 8))(&local_50,piStack_48);
          }
          if (param_2 != 0) {
            local_50 = (int *)0x0;
            piStack_4c = (int *)0x2;
            piStack_48 = (int *)CONCAT31(piStack_48._1_3_,uVar1);
            (**(code **)(*piStack_d8 + 0x14))
                      (ppiStack_d0,"newDetailClear",&local_50,((byte)puStack_d4 & 0x8f) == 10);
            if (((uint)piStack_4c >> 6 & 1) != 0) {
              (**(code **)(*local_50 + 8))(&local_50,piStack_48);
            }
          }
        }
        (**(code **)(*piStack_88 + 0x3c))(iStack_80,&piStack_d8);
        iVar8 = iStack_6c;
        if ((uStack_ac >> 6 & 1) != 0) {
          ppiStack_d0 = &piStack_b0;
          piStack_cc = piStack_a8;
          puStack_d4 = (undefined1 *)0x109487de;
          (**(code **)(*piStack_b0 + 8))();
          iVar8 = iStack_6c;
        }
      }
      piStack_70 = (int *)((int)piStack_70 + 1);
    } while ((int)piStack_70 < (int)uStack_40);
  }
  if (DAT_123bd2a8 != DAT_123bd2ac) {
    DAT_123bd2ac = DAT_123bd2a8;
  }
  if (piStack_90 != (int *)0x0) {
    piStack_cc = piStack_90;
    ppiStack_d0 = (int **)0x1094881f;
    FUN_10c3da30();
  }
  if (piStack_94 != (int *)0x0) {
    piStack_cc = piStack_94;
    ppiStack_d0 = (int **)0x10948830;
    FUN_10c3da30();
  }
  if (piStack_b4 != (int *)0x0) {
    piStack_cc = piStack_b4;
    ppiStack_d0 = (int **)0x10948841;
    FUN_10c3da30();
  }
  if (piStack_b8 != (int *)0x0) {
    piStack_cc = piStack_b8;
    ppiStack_d0 = (int **)0x10948852;
    FUN_10c3da30();
  }
LAB_10948855:
  if ((local_5c >> 6 & 1) != 0) {
    ppiStack_d0 = &local_60;
    piStack_cc = local_58;
    puStack_d4 = (undefined1 *)0x10948872;
    (**(code **)(*local_60 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10948b40 @ 10948b40  size=582 ===== */
// strings:
//   "ItemID"
//   "isFetch"
//   "canFetch"
//   "contributeValue"
//   "rewardIndex"
//   "prizeID"
//   "currentSpoorValue"

/* [RE-AUTO c0]
   strings:
     ""ItemID""
     ""isFetch""
     ""canFetch""
     ""contributeValue""
     ""rewardIndex""
     ""prizeID""
     ""currentSpoorValue"" */

void FUN_10948b40(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int in_stack_00000010;
  undefined3 uVar7;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int *piStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) &&
     ((iVar2 = (**(code **)(*piVar4 + 0xb4))(), iVar2 != 0 && (*(int *)(iVar2 + 0x2ae4) != 0)))) {
    iVar2 = in_stack_00000010 + 0x18;
    FUN_104f4330(iVar2);
    in_stack_00000010 = in_stack_00000010 + 0x30;
    FUN_104f4330(in_stack_00000010);
    iVar3 = FUN_10923e00();
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        piVar4 = (int *)FUN_10923d70(iVar6);
        if (piVar4 != (int *)0x0) {
          piStack_58 = (int *)0x0;
          uStack_54 = 0;
          FUN_11a98de0(&piStack_58,unaff_EBX,0,0);
          FUN_104d1550("ItemID",piVar4[5]);
          uVar5 = (**(code **)(*piVar4 + 0x18))();
          FUN_11504d90(uVar5);
          uVar7 = (undefined3)((uint)iVar2 >> 8);
          uVar5 = (**(code **)(*piVar4 + 0x18))();
          uVar1 = FUN_11504c20(uVar5);
          iVar2 = CONCAT31(uVar7,uVar1);
          FUN_104d15e0("isFetch",in_stack_00000010);
          FUN_104d15e0("canFetch",iVar2);
          FUN_104d1550("contributeValue",piVar4[8]);
          FUN_104d1550("rewardIndex",iVar6);
          uVar5 = (**(code **)(*piVar4 + 0x18))();
          FUN_104d1550("prizeID",uVar5);
          (**(code **)(*piStack_40 + 0x3c))(uStack_38,&stack0xffffff90);
          if ((uStack_54 >> 6 & 1) != 0) {
            (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    uVar5 = FUN_11504d20();
    FUN_104d1550("currentSpoorValue",uVar5);
    if ((uStack_3c >> 6 & 1) != 0) {
      (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
      piStack_40 = (int *)0x0;
    }
    uStack_3c = 0;
    if ((uStack_24 >> 6 & 1) != 0) {
      (**(code **)(*piStack_28 + 8))(&piStack_28,uStack_20);
    }
  }
  return;
}



/* ===== FUN_10948d90 @ 10948d90  size=1196 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "rewardItemArray"
//   "itemID"
//   "itemName"
//   "itemCounts"
//   "packItemName"
//   "boundMoneyPrice"
//   "moneyPrice"

/* [RE-AUTO c0]
   strings:
     ""rewardItemArray""
     ""itemID""
     ""itemName""
     ""itemCounts""
     ""packItemName""
     ""boundMoneyPrice""
     ""moneyPrice"" */

void FUN_10948d90(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 *in_stack_00000010;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 *puStack_90;
  undefined4 local_8c;
  int *local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *piStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_58;
  uint uStack_54;
  int *piStack_50;
  undefined4 uStack_48;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  int **ppiStack_30;
  int **ppiStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&fStack_9c;
  local_88 = (int *)0x0;
  local_84 = in_stack_00000010[1];
  local_7c = in_stack_00000010[3];
  local_80 = in_stack_00000010[2];
  local_78 = in_stack_00000010[4];
  if ((local_84 >> 6 & 1) != 0) {
    local_88 = (int *)*in_stack_00000010;
    (**(code **)(*local_88 + 4))(&local_88,local_80);
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) ||
     (uVar5 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
    uVar5 = in_stack_00000010[8];
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
    local_8c = in_stack_00000010[0xe];
  }
  else {
    local_8c = 0xdeadbeaf;
  }
  uStack_6c = in_stack_00000010[0x13];
  uStack_64 = in_stack_00000010[0x15];
  puStack_68 = (undefined4 *)in_stack_00000010[0x14];
  uStack_60 = in_stack_00000010[0x16];
  piStack_70 = (int *)0x0;
  if ((uStack_6c >> 6 & 1) != 0) {
    piStack_70 = (int *)in_stack_00000010[0x12];
    (**(code **)(*piStack_70 + 4))(&piStack_70,puStack_68);
  }
  fStack_98 = (float)FUN_10540d00(uVar5);
  if (fStack_98 != 0.0) {
    if (((byte)uStack_6c & 0x8f) == 6) {
      uVar5 = FUN_116c0450();
      piStack_40 = (int *)0x0;
      uStack_3c = 0;
      fStack_9c = (float)CONCAT31(fStack_9c._1_3_,((byte)local_84 & 0x8f) == 10);
      cVar2 = (**(code **)(*local_88 + 0x10))(local_80,"rewardItemArray",&piStack_40,fStack_9c);
      if (cVar2 != '\0') {
        if (((byte)uStack_6c & 0x8f) == 6) {
          if ((uStack_6c >> 6 & 1) == 0) {
            puStack_90 = puStack_68;
          }
          else {
            puStack_90 = (undefined4 *)*puStack_68;
          }
        }
        else {
          puStack_90 = (undefined4 *)&DAT_11d9d32b;
        }
        fStack_94 = (float)FUN_1052c520(uVar5);
        if ((fStack_94 != 0.0) &&
           (fStack_9c = *(float *)((int)fStack_94 + 0x24),
           fStack_9c != *(float *)((int)fStack_94 + 0x28))) {
          do {
            iVar3 = FUN_1052c6a0(*(undefined4 *)((int)fStack_9c + 4));
            if ((iVar3 != 0) &&
               (puVar6 = *(undefined4 **)(iVar3 + 0x18), puVar6 != *(undefined4 **)(iVar3 + 0x1c)))
            {
              do {
                piStack_58 = (int *)0x0;
                uStack_54 = 0;
                FUN_11a98de0(&piStack_58,puStack_90,0,0);
                FUN_104d1440("itemID",*puVar6);
                iVar4 = FUN_10254130(*puVar6);
                if (iVar4 != 0) {
                  puStack_24 = auStack_34;
                  auStack_34[0] = 0;
                  puStack_20 = puStack_24;
                  FUN_100e5aa0(puStack_24);
                  FUN_104d1670("itemName",puStack_24);
                  if ((puStack_20 != auStack_34) && (puStack_20 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_20);
                  }
                }
                FUN_104d1440("itemCounts",puVar6[2]);
                (**(code **)(*piStack_50 + 0x3c))(uStack_48,&puStack_68);
                if ((uStack_54 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_58 + 8))(&piStack_58,piStack_50);
                }
                puVar6 = puVar6 + 9;
              } while (puVar6 != *(undefined4 **)(iVar3 + 0x1c));
            }
            fStack_9c = (float)((int)fStack_9c + 0x14);
          } while (fStack_9c != *(float *)((int)fStack_94 + 0x28));
        }
      }
      if ((uStack_3c >> 6 & 1) != 0) {
        (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
      }
    }
    ppiStack_30 = &piStack_40;
    piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
    ppiStack_2c = ppiStack_30;
    FUN_100e5aa0(ppiStack_30);
    FUN_104d1670("packItemName",ppiStack_30);
    if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
      FUN_10c3d5d0(ppiStack_2c);
    }
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
       (iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0)) {
      uVar5 = FUN_11861070();
      iVar3 = FUN_10947a30(uVar5);
      if (iVar3 == 0) {
        fStack_98 = DAT_11de9918;
        fStack_9c = DAT_11de9918;
      }
      else {
        uVar5 = CPlayer__GetHuntRankOrCount();
        fVar7 = (float10)FUN_11860ff0(uVar5);
        fStack_98 = (float)fVar7;
        uVar5 = CPlayer__GetHuntRankOrCount();
        fVar7 = (float10)FUN_11861030(uVar5);
        fStack_98 = fStack_94;
        fStack_9c = (float)fVar7;
      }
      iVar3 = FUN_109478c0(local_8c);
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 0x1c);
        FUN_104d1550("boundMoneyPrice",(int)((float)*(int *)(iVar3 + 0x18) * fStack_98));
        FUN_104d1550("moneyPrice",(int)((float)iVar4 * fStack_9c));
      }
    }
  }
  if ((uStack_6c >> 6 & 1) != 0) {
    (**(code **)(*piStack_70 + 8))(&piStack_70,puStack_68);
    piStack_70 = (int *)0x0;
  }
  uStack_6c = 0;
  if ((local_84 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 8))(&local_88,local_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1094c980 @ 1094c980  size=158 ===== */
// calls: CLeagueRewardInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CLeagueRewardInfo"

/* [RE-AUTO c0]
   calls: CLeagueRewardInfo::GetManagers
   strings:
     ""CLeagueRewardInfo"" */

undefined4 FUN_1094c980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddc718;
  puVar2 = (undefined4 *)CLeagueRewardInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CLeagueRewardInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c000c & 1) == 0) {
        DAT_123c000c = DAT_123c000c | 1;
        FUN_109503c0();
        FUN_11a8911f(&LAB_11c78ac0);
      }
      puVar3 = &DAT_123bffd4;
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



/* ===== FUN_1094caf0 @ 1094caf0  size=488 ===== */
// strings:
//   "InitModel"
//   "doSearch"
//   "GetInfo"
//   "GetMyReward"
//   "GetTeamMates"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""doSearch""
     ""GetInfo""
     ""GetMyReward""
     ""GetTeamMates"" */

void __fastcall FUN_1094caf0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
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
  pppcStack_34 = (code ***)0x1094cb24;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1094ccf0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1094cb35;
  FUN_1094f470();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1094cb4b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddc6cc;
  pppcStack_40 = (code ***)0x11ddc6c4;
  pppcStack_44 = (code ***)0x1094cb6b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1094cde0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1094cb7c;
  FUN_1094f470();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x1094cb92;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddc6d7;
  ppcStack_50 = (code **)0x11ddc6d0;
  ppcStack_54 = (code **)0x1094cbb2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  ppcStack_54 = (code **)FUN_1094cf10;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1094cbc3;
  FUN_1094f470();
  if ((pppcStack_40 != &ppcStack_54) && (pppcStack_40 != (code ***)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x1094cbd9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = &ppcStack_54;
  pppcStack_5c = (code ***)0x11ddc6b3;
  ppcStack_60 = (code **)0x11ddc6a8;
  pcStack_64 = (code *)0x1094cbf9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_1094eae0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  ppcStack_6c = (code **)0x1094cc0a;
  FUN_1094f470();
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    ppcStack_6c = ppcStack_50;
    pcStack_70 = (char *)0x1094cc20;
    FUN_10c3d5d0();
  }
  ppcStack_54 = &pcStack_64;
  ppcStack_6c = (code **)0x11ddc6c0;
  pcStack_70 = "GetTeamMates";
  pcStack_74 = (code *)0x1094cc40;
  ppcStack_50 = ppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_1094e900;
  FUN_1094f470(&ppcStack_6c);
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
      FUN_10950590();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_109505e0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1094ccf0 @ 1094ccf0  size=226 ===== */
// strings:
//   "GetRankTitleList"
//   "ReqRankDataList"
//   "UpdateRankDataList"
//   "FetchReward"
//   "ReqRankTitleList"
//   "ReqTeamMatesList"

/* [RE-AUTO c0]
   strings:
     ""GetRankTitleList""
     ""ReqRankDataList""
     ""UpdateRankDataList""
     ""FetchReward""
     ""ReqRankTitleList""
     ""ReqTeamMatesList"" */

void FUN_1094ccf0(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) &&
     (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("GetRankTitleList",FUN_1094d0f0);
    FUN_104d13b0("ReqRankDataList",FUN_1094dcb0);
    FUN_104d13b0("UpdateRankDataList",FUN_1094ddf0);
    FUN_104d13b0("FetchReward",FUN_1094e840);
    FUN_104d13b0("ReqRankTitleList",&LAB_1094ea90);
    FUN_104d13b0("ReqTeamMatesList",FUN_1094ebe0);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_1094ddf0 @ 1094ddf0  size=2460 ===== */
// strings:
//   "RANK_BASE_DATA_VO_CLASSNAME"
//   "nRank"
//   "strName"
//   "strGuildName"
//   "nColumn1Data"
//   "nColumn2Data"
//   "nColumn1Type"
//   "nColumn2Type"
//   "nRewardItemID"
//   "strRewardItemName"
//   "bRewardFetched"
//   "arrDataList"
//   "nMyPostion"
//   "bGetReward"
//   "strStartTimeStr"
//   "strMyRewardStr"

/* [RE-AUTO c0]
   strings:
     ""RANK_BASE_DATA_VO_CLASSNAME""
     ""nRank""
     ""strName""
     ""strGuildName""
     ""nColumn1Data""
     ""nColumn2Data""
     ""nColumn1Type""
     ""nColumn2Type""
     ""nRewardItemID""
     ""strRewardItemName"" */

void FUN_1094ddf0(int **param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int *piVar6;
  bool bVar7;
  int *piStack_230;
  uint uStack_22c;
  undefined4 uStack_228;
  int *piStack_224;
  undefined4 *puStack_220;
  uint uStack_21c;
  char *pcStack_218;
  undefined4 *puStack_214;
  int **ppiStack_210;
  int *piStack_20c;
  undefined4 uStack_1fc;
  int **ppiStack_1f8;
  int *piStack_1e4;
  byte bStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int **local_1d4;
  int iStack_1cc;
  undefined4 uStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  int *piStack_1b0;
  int *piStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  int *piStack_178;
  uint uStack_174;
  uint uStack_170;
  int iStack_16c;
  uint *puStack_168;
  uint *puStack_164;
  uint *puStack_160;
  undefined1 auStack_15c [12];
  uint **ppuStack_150;
  uint **ppuStack_14c;
  uint **appuStack_148 [3];
  undefined4 ***pppuStack_13c;
  undefined4 ***pppuStack_138;
  undefined4 ***pppuStack_134;
  undefined1 auStack_12c [16];
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 auStack_114 [16];
  undefined1 **ppuStack_104;
  undefined1 *puStack_100;
  undefined1 auStack_fc [16];
  int iStack_ec;
  undefined1 *puStack_e8;
  int iStack_c4;
  int iStack_c0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_58;
  undefined4 uStack_50;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_1fc;
  local_1d4 = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    piStack_20c = param_1[2];
    ppiStack_210 = param_1;
    puStack_214 = (undefined4 *)0x1094de2f;
    (**(code **)(**param_1 + 8))();
    *param_1 = (int *)0x0;
  }
  iVar5 = DAT_1202e818;
  param_1[1] = (int *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  piStack_20c = (int *)0x1094de59;
  iStack_17c = (**(code **)(**(int **)(*(int *)(iVar5 + 0xd0) + 0x90) + 0xb4))();
  if ((iStack_17c != 0) && (iStack_1cc = *(int *)(iStack_17c + 0x2ad4), iStack_1cc != 0)) {
    piStack_20c = (int *)param_4;
    ppiStack_210 = (int **)0x1094de84;
    FUN_104f4330();
    uVar4 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar4 == 3) || (uVar4 == 4)) {
      uStack_1fc = *(int *)(param_4 + 0x20);
    }
    else {
      uStack_1fc = -0x21524151;
    }
    uVar4 = *(uint *)(param_4 + 0x34) & 0x8f;
    if ((uVar4 == 3) || (uVar4 == 4)) {
      uStack_1c8 = *(undefined4 *)(param_4 + 0x38);
    }
    else {
      uStack_1c8 = 0xdeadbeaf;
    }
    puStack_214 = &uStack_1a4;
    uStack_1a4 = 0;
    piStack_1a0 = (int *)0x0;
    ppiStack_1f8 = (int **)CONCAT31(ppiStack_1f8._1_3_,((byte)piStack_1c0 & 0x8f) == 10);
    local_1d4 = (int **)0x0;
    ppiStack_210 = ppiStack_1f8;
    pcStack_218 = "RANK_BASE_DATA_VO_CLASSNAME";
    uStack_21c = uStack_1bc;
    puStack_220 = (undefined4 *)0x1094df0f;
    cVar3 = (**(code **)(*piStack_1c4 + 0x10))();
    if (((cVar3 != '\0') && (((byte)piStack_1b0 & 0x8f) == 6)) &&
       (piStack_1e4 = piStack_1ac, ((uint)piStack_1b0 >> 6 & 1) != 0)) {
      piStack_1e4 = (int *)*piStack_1ac;
    }
    puStack_220 = &uStack_18c;
    uStack_18c = 0;
    uStack_188 = 0;
    piStack_224 = (int *)0x1094df59;
    FUN_11a98a70();
    piVar6 = piStack_1e4;
    piStack_224 = piStack_1e4 + 10;
    uStack_228 = 0x1094df6d;
    FUN_1090dec0();
    uStack_22c = piVar6[0xe] - piVar6[0xd] >> 5;
    piStack_230 = (int *)0x1094df84;
    uStack_228 = extraout_ECX;
    FUN_1090e9c0();
    uStack_1c8 = FUN_10910680(uStack_180);
    pcStack_218 = (char *)((int)(uStack_1a8 - (int)piStack_1ac) / 0xa0);
    uVar4 = uStack_1a8;
    piVar6 = piStack_1ac;
    if (pcStack_218 != (char *)0x0) {
      do {
        piStack_230 = piVar6;
        FUN_1090d4e0();
        pcStack_218 = (char *)0x0;
        puStack_214 = (undefined4 *)0x0;
        FUN_11a98de0(&pcStack_218,ppiStack_1f8,0,0);
        pppuStack_138 = appuStack_148;
        appuStack_148[0] = (uint **)((uint)appuStack_148[0] & 0xffffff00);
        pppuStack_134 = pppuStack_138;
        FUN_104d1550("nRank",puStack_e8);
        puStack_168 = &uStack_188;
        uStack_188 = uStack_188 & 0xffff0000;
        puStack_164 = puStack_168;
        cVar3 = FUN_100ecfd0(iStack_c0,iStack_c4 - iStack_c0,&uStack_188,4);
        if (cVar3 != '\0') {
          FUN_100ed090(&uStack_188,appuStack_148,3);
        }
        if ((puStack_164 != &uStack_188) && (puStack_164 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_164);
        }
        FUN_104d1670("strName",pppuStack_134);
        puStack_168 = &uStack_188;
        uStack_188 = uStack_188 & 0xffff0000;
        puStack_164 = puStack_168;
        cVar3 = FUN_100ecfd0(iStack_a8,iStack_ac - iStack_a8,&uStack_188,4);
        if (cVar3 != '\0') {
          FUN_100ed090(&uStack_188,appuStack_148,3);
        }
        if ((puStack_164 != &uStack_188) && (puStack_164 != (uint *)0x0)) {
          FUN_10c3d5d0(puStack_164);
        }
        FUN_104d1670("strGuildName",pppuStack_134);
        FUN_104d1550("nColumn1Data",uStack_58);
        FUN_104d1550("nColumn2Data",uStack_50);
        iVar5 = FUN_1090b6c0(puStack_e8);
        if (iVar5 != 0) {
          FUN_104d1550("nColumn1Type",*(undefined4 *)(iVar5 + 0x14));
          FUN_104d1550("nColumn2Type",*(undefined4 *)(iVar5 + 0x18));
        }
        if (uStack_1fc == 0) {
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          iStack_17c = 0;
          puStack_168 = (uint *)0x0;
          piStack_178 = (int *)0x0;
          uStack_174 = 0;
          uStack_170 = 0;
          iStack_16c = 0;
          iVar5 = FUN_1094ed10(&uStack_188);
          if (iVar5 < 1) {
            FUN_104d1550("nRewardItemID",0);
            FUN_104d1670("strRewardItemName",&DAT_11d9d32b);
            FUN_104d15e0("bRewardFetched",1);
          }
          else {
            FUN_1094efe0();
            ppuStack_150 = &puStack_160;
            puStack_160 = (uint *)((uint)puStack_160 & 0xffffff00);
            ppuStack_14c = ppuStack_150;
            FUN_10950a00();
            FUN_104d1550("nRewardItemID",1);
            FUN_104d1670("strRewardItemName",ppuStack_14c);
            FUN_104d15e0("bRewardFetched",0);
            if ((ppuStack_14c != &puStack_160) && (ppuStack_14c != (uint **)0x0)) {
              FUN_10c3d5d0(ppuStack_14c);
            }
            if ((ppuStack_104 != &puStack_118) && (ppuStack_104 != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_104);
            }
          }
          if (uStack_170 != 0) {
            FUN_10c3d5d0(uStack_170);
          }
        }
        else {
          FUN_104d1550("nRewardItemID",0);
          FUN_104d1670("strRewardItemName",&DAT_11d9d32b);
          FUN_104d15e0("bRewardFetched",1);
        }
        (**(code **)(*piStack_1b0 + 0x3c))(uStack_1a8,&uStack_228);
        if ((pppuStack_13c != &ppuStack_150) && (pppuStack_13c != (uint ***)0x0)) {
          FUN_10c3d5d0(pppuStack_13c);
        }
        if ((uStack_22c >> 6 & 1) != 0) {
          (**(code **)(*piStack_230 + 8))(&piStack_230,uStack_228);
          piStack_230 = (int *)0x0;
        }
        uStack_22c = 0;
        FUN_1090d5b0();
        pcStack_218 = pcStack_218 + -1;
        piVar6 = piVar6 + 0x28;
      } while (pcStack_218 != (char *)0x0);
      pcStack_218 = (char *)0x0;
      param_1 = ppiStack_1f8;
      uVar4 = uStack_1a8;
    }
    ppiStack_1f8 = (int **)CONCAT31(ppiStack_1f8._1_3_,(bStack_1e0 & 0x8f) == 10);
    piStack_230 = (int *)ppiStack_1f8;
    (**(code **)(*piStack_1e4 + 0x14))(uStack_1dc,"arrDataList",&uStack_19c);
    FUN_104d1550("nMyPostion",*(undefined4 *)(unaff_EBX + 0x24));
    iVar5 = FUN_111fab80();
    if (iVar5 == 0) {
      bVar7 = false;
    }
    else {
      bVar7 = (*(uint *)(iVar5 + 0x7c) & 1 << ((byte)uStack_22c & 0x1f)) != 0;
    }
    FUN_104d15e0("bGetReward",bVar7);
    FUN_1094eeb0();
    puStack_11c = auStack_12c;
    puStack_164 = &uStack_184;
    uStack_184 = uStack_184 & 0xffff0000;
    auStack_12c[0] = 0;
    puStack_160 = puStack_164;
    puStack_118 = puStack_11c;
    cVar3 = FUN_100ecfd0(puStack_e8,iStack_ec - (int)puStack_e8,&uStack_184,4);
    if (cVar3 != '\0') {
      FUN_100ed090(&uStack_184,auStack_12c,3);
    }
    if ((puStack_160 != &uStack_184) && (puStack_160 != (uint *)0x0)) {
      FUN_10c3d5d0(puStack_160);
    }
    FUN_104d1670("strStartTimeStr",puStack_118);
    uStack_184 = 0;
    uStack_180 = 0;
    iStack_17c = 0;
    piStack_178 = (int *)0x0;
    puStack_164 = (uint *)0x0;
    uStack_174 = 0;
    uStack_170 = 0;
    iStack_16c = 0;
    puStack_168 = (uint *)0x0;
    iVar5 = FUN_1094ed10(&uStack_184);
    if (0 < iVar5) {
      FUN_1094efe0();
      ppuStack_14c = (uint **)auStack_15c;
      auStack_15c[0] = 0;
      appuStack_148[0] = ppuStack_14c;
      FUN_10950a00();
      FUN_104d1670("strMyRewardStr",appuStack_148[0]);
      if ((appuStack_148[0] != (uint **)auStack_15c) && (appuStack_148[0] != (uint **)0x0)) {
        FUN_10c3d5d0(appuStack_148[0]);
      }
      if ((puStack_100 != auStack_114) && (puStack_100 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_100);
      }
    }
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(**param_1 + 8))(param_1,param_1[2]);
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (iStack_16c != 0) {
      FUN_10c3d5d0(iStack_16c);
    }
    if ((puStack_118 != auStack_12c) && (puStack_118 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_118);
    }
    if ((puStack_e8 != auStack_fc) && (puStack_e8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_e8);
    }
    FUN_10910ba0(uStack_1d8,uStack_190,0,(int)&uStack_1fc + 3);
    uVar2 = uStack_188;
    if (uStack_190 != 0) {
      piStack_20c = (int *)uStack_190;
      ppiStack_210 = (int **)0x1094e6c1;
      FUN_10c3d5d0();
      uVar2 = uStack_188;
    }
    for (; uVar1 = uStack_188, uVar4 != uStack_188; uVar4 = uVar4 - 0xa0) {
      piStack_20c = (int *)0x1094e6dd;
      uStack_188 = uVar2;
      FUN_1090d5b0();
      uVar2 = uStack_188;
      uStack_188 = uVar1;
    }
    if (uStack_188 != 0) {
      piStack_20c = (int *)uStack_188;
      ppiStack_210 = (int **)0x1094e6eb;
      uStack_188 = uVar2;
      FUN_10c3d5d0();
      uVar2 = uStack_188;
    }
    uStack_188 = uVar2;
    if ((uStack_174 >> 6 & 1) != 0) {
      ppiStack_210 = &piStack_178;
      piStack_20c = (int *)uStack_170;
      puStack_214 = (undefined4 *)0x1094e717;
      (**(code **)(*piStack_178 + 8))();
      piStack_178 = (int *)0x0;
    }
    uStack_174 = 0;
    if ((uStack_19c >> 6 & 1) != 0) {
      ppiStack_210 = &piStack_1a0;
      piStack_20c = (int *)uStack_198;
      puStack_214 = (undefined4 *)0x1094e74a;
      (**(code **)(*piStack_1a0 + 8))();
      piStack_1a0 = (int *)0x0;
    }
    uStack_19c = 0;
    if ((uStack_1bc >> 6 & 1) != 0) {
      ppiStack_210 = &piStack_1c0;
      piStack_20c = (int *)uStack_1b8;
      puStack_214 = (undefined4 *)0x1094e777;
      (**(code **)(*piStack_1c0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109544b0 @ 109544b0  size=1609 ===== */
// calls: CVipCutOffInfo::GetVipCutOffIndex, CPet::SetName
// strings:
//   "nCurLevel"
//   "nCurLayer"
//   "nMaxLevel"
//   "nMaxLayer"
//   "nNextMoney"
//   "nPreNextMoney"
//   "nNextProbability"
//   "nCurWakeTimes"
//   "nMaxWakeTimes"
//   "nWakeCostMoney"
//   "nVipNeedLevel"
//   "bIsVip"
//   "nOnSaleNum"
//   "nOnSaleNumMax"
//   "strEquipName"
//   "strName"
//   "strDesc"
//   "nWakeAttr"
//   "strNextName"
//   "strNextDesc"

/* [RE-AUTO c0]
   strings:
     ""nCurLevel""
     ""nCurLayer""
     ""nMaxLevel""
     ""nMaxLayer""
     ""nNextMoney""
     ""nPreNextMoney""
     ""nNextProbability""
     ""nCurWakeTimes""
     ""nMaxWakeTimes""
     ""nWakeCostMoney"" */

void FUN_109544b0(int ***param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  char cVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  int ***pppiVar9;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  int iStack_98;
  char *pcStack_94;
  int **ppiStack_90;
  int ***pppiStack_8c;
  int **ppiStack_88;
  undefined4 uStack_84;
  int ***pppiStack_80;
  int **ppiStack_7c;
  int *piStack_6c;
  char acStack_68 [4];
  int iStack_64;
  int iStack_60;
  int *local_5c;
  int *piStack_58;
  char *pcStack_54;
  int *piStack_50;
  int **ppiStack_48;
  undefined4 uStack_44;
  int **ppiStack_34;
  int *apiStack_30 [4];
  int ***pppiStack_20;
  int **ppiStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_6c;
  local_5c = param_2;
  if ((((param_1 == (int ***)0x0) || (param_2 == (int *)0x0)) || (param_3 == 0)) ||
     ((param_4 == 0 || (param_5 == 0)))) goto LAB_10954ae7;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    ppiStack_7c = param_1[2];
    pppiStack_80 = param_1;
    uStack_84 = 0x10954516;
    (*(code *)(**param_1)[2])();
    *param_1 = (int **)0x0;
  }
  param_1[1] = (int **)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 < 3) goto LAB_10954ae7;
  ppiStack_7c = (int **)0x10954549;
  apiStack_30[0] = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((apiStack_30[0] == (int *)0x0) || (iStack_64 = apiStack_30[0][0xb47], iStack_64 == 0))
  goto LAB_10954ae7;
  ppiStack_7c = (int **)0x10954571;
  ppiStack_34 = (int **)(**(code **)(*apiStack_30[0] + 0x370))();
  if (ppiStack_34 == (int **)0x0) goto LAB_10954ae7;
  uVar8 = *(uint *)(param_4 + 4) & 0x8f;
  if ((uVar8 == 3) || (uVar8 == 4)) {
    piStack_6c = *(int **)(param_4 + 8);
  }
  else {
    piStack_6c = (int *)0xdeadbeaf;
  }
  uVar8 = *(uint *)(param_4 + 0x1c) & 0x8f;
  if ((uVar8 == 3) || (pppiVar9 = (int ***)0xdeadbeaf, uVar8 == 4)) {
    pppiVar9 = *(int ****)(param_4 + 0x20);
  }
  ppiStack_7c = (int **)(param_4 + 0x30);
  pppiStack_80 = (int ***)0x109545c8;
  FUN_104f4330();
  ppiStack_88 = (int **)0x109545d6;
  uStack_84 = unaff_EBX;
  pppiStack_80 = pppiVar9;
  ppiVar3 = (int **)FUN_113f9bb0();
  ppiStack_34 = ppiVar3;
  if (ppiVar3 != (int **)0x0) {
    ppiStack_88 = (int **)0x109545eb;
    cVar2 = FUN_116698a0();
    if (cVar2 != '\0') {
      piStack_6c = ppiVar3[0x6b];
      ppiStack_88 = (int **)0x1095460e;
      ppiStack_88 = (int **)FUN_1166dfb0();
      if (ppiStack_88 != (int **)0x0) {
        pppiStack_8c = (int ***)0x1095461c;
        iVar4 = FUN_10856b00();
        if (iVar4 != 0) {
          if (piStack_6c != *(int **)(iVar4 + 0x18)) {
            ppiStack_88 = (int **)piStack_6c;
            pppiStack_8c = (int ***)0x1095463e;
            iVar4 = FUN_117441a0();
            if (iVar4 == 0) goto LAB_10954ade;
          }
          ppiStack_88 = (int **)((int)&uStack_44 + 3);
          pppiStack_8c = &ppiStack_48;
          pcStack_94 = (char *)0x10954662;
          ppiStack_90 = ppiVar3;
          iVar4 = FUN_1159a4a0();
          if (iVar4 != 0) {
            pcStack_94 = (char *)uStack_84;
            iStack_98 = 0x10954671;
            pcStack_54 = (char *)FUN_11744280();
          }
          iStack_98 = 3;
          uStack_9c = 0x10954685;
          pcStack_94 = pcStack_54;
          uVar5 = FUN_1159a210();
          uStack_9c = 3;
          iStack_a0 = 0x10954690;
          piStack_58 = (int *)FUN_11599ec0();
          iStack_a0 = 3;
          iStack_a4 = 0x1095469d;
          pcStack_54 = (char *)FUN_11599e40();
          iStack_a4 = 3;
          iStack_a8 = 0x109546aa;
          ppiStack_90 = (int **)CVipCutOffInfo__GetVipCutOffIndex();
          iStack_a8 = iStack_98;
          uVar6 = FUN_117442d0();
          FUN_104d1550("nCurLevel",ppiStack_90);
          FUN_104d1550("nCurLayer",uStack_9c);
          FUN_104d1550("nMaxLevel",*(undefined4 *)(iStack_98 + 0x18));
          FUN_104d1550("nMaxLayer",*(undefined4 *)(iStack_98 + 0x1c));
          FUN_104d1550("nNextMoney",uVar5);
          FUN_104d1550("nPreNextMoney",piStack_6c);
          FUN_104d1550("nNextProbability",uVar6);
          piVar1 = piStack_58;
          FUN_104d1550("nCurWakeTimes",piStack_58[0x6e]);
          FUN_104d1550("nMaxWakeTimes",*(undefined4 *)(iStack_98 + 0x78));
          uVar5 = FUN_1166dfb0(piVar1[0x6b] + -1);
          iVar4 = FUN_117441f0(uVar5);
          if (iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(iVar4 + 0x7c);
          }
          FUN_104d1550("nWakeCostMoney",uVar5);
          uStack_9c = uStack_9c & 0xffffff00;
          FUN_104d1550("nVipNeedLevel",pcStack_94);
          if ((*(int *)(iStack_60 + 11000) != 0) && (cVar2 = FUN_11549b10(10), cVar2 != '\0')) {
            iVar4 = FUN_1025b060();
            uVar7 = (undefined1)uStack_9c;
            if ((int)pcStack_94 <= iVar4) {
              uVar7 = 1;
            }
            uStack_9c = CONCAT31(uStack_9c._1_3_,uVar7);
          }
          FUN_104d15e0("bIsVip",uStack_9c);
          FUN_104d1550("nOnSaleNum",iStack_64);
          FUN_104d1550("nOnSaleNumMax",local_5c);
          uVar5 = (**(code **)(*piVar1 + 0x14))();
          uStack_9c = 0;
          CPet__SetName(uVar5);
          ppiStack_48 = &piStack_58;
          piStack_58 = (int *)((uint)piStack_58 & 0xffffff00);
          uStack_44 = ppiStack_48;
          FUN_100e5aa0(ppiStack_48);
          FUN_104d1670("strEquipName",ppiStack_48);
          if ((ppiStack_48 != &local_5c) && (ppiStack_48 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_48);
          }
          FUN_100e5670();
          FUN_1166c4b0(iStack_98);
          iStack_a0 = FUN_116c4f30();
          if (iStack_a0 == 0) {
            FUN_104d1550("nWakeAttr",0xffffffff);
            if (uStack_9c == 0) {
              FUN_1166c4b0(1);
              iVar4 = FUN_116c4f30();
              if (iVar4 != 0) {
                FUN_104d1550("nWakeAttr",*(undefined4 *)(iVar4 + 0xb4));
              }
            }
            iStack_a4 = 0;
            CPet__SetName(&DAT_11d9d32b);
            FUN_1024ebe0(&iStack_a8,&piStack_6c,0x159d,0);
            FUN_104d1790("strName",&iStack_a8);
            FUN_100e5670();
          }
          else {
            iVar4 = FUN_100e5b40(&iStack_60);
            FUN_104d1670("strName",*(undefined4 *)(iVar4 + 0x14));
            if ((piStack_50 != &iStack_64) && (piStack_50 != (int *)0x0)) {
              FUN_10c3d5d0(piStack_50);
            }
            iVar4 = FUN_100e5b40(&iStack_64);
            FUN_104d1670("strDesc",*(undefined4 *)(iVar4 + 0x14));
            if ((pcStack_54 != acStack_68) && (pcStack_54 != (char *)0x0)) {
              FUN_10c3d5d0(pcStack_54);
            }
            FUN_104d1550("nWakeAttr",*(undefined4 *)(iStack_a8 + 0xb4));
          }
          FUN_1166c4b0(iStack_a4 + 1);
          iVar4 = FUN_116c4f30();
          if (iVar4 != 0) {
            ppiStack_88 = apiStack_30;
            pppiStack_8c = (int ***)0x10954a4a;
            iVar4 = FUN_100e5b40();
            pppiStack_8c = *(int ****)(iVar4 + 0x14);
            ppiStack_90 = (int **)0x11ddcb64;
            pcStack_94 = (char *)0x10954a5d;
            FUN_104d1670();
            if ((pppiStack_20 != &ppiStack_34) && (pppiStack_20 != (int ***)0x0)) {
              pppiStack_8c = pppiStack_20;
              ppiStack_90 = (int **)0x10954a76;
              FUN_10c3d5d0();
            }
            pppiStack_8c = &ppiStack_34;
            ppiStack_90 = (int **)0x10954a89;
            iVar4 = FUN_100e5b40();
            ppiStack_90 = *(int ***)(iVar4 + 0x14);
            pcStack_94 = "strNextDesc";
            iStack_98 = 0x10954a9c;
            FUN_104d1670();
            if ((ppiStack_1c != apiStack_30) && (ppiStack_1c != (int **)0x0)) {
              ppiStack_88 = ppiStack_1c;
              pppiStack_8c = (int ***)0x10954ab5;
              FUN_10c3d5d0();
            }
          }
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            ppiStack_88 = param_1[2];
            pppiStack_8c = param_1;
            ppiStack_90 = (int **)0x10954acd;
            (*(code *)(**param_1)[2])();
            *param_1 = (int **)0x0;
          }
          param_1[1] = (int **)0x2;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
    }
  }
LAB_10954ade:
  ppiStack_88 = (int **)0x10954ae7;
  FUN_104d7c10();
LAB_10954ae7:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10954b00 @ 10954b00  size=583 ===== */
// strings:
//   "nMaxWakePoint"
//   "nCurWakePoint"
//   "nCurWakeTimes"
//   "nMaxWakeTimes"
//   "nWakeCostMoney"
//   "collumn"

/* [RE-AUTO c0]
   strings:
     ""nMaxWakePoint""
     ""nCurWakePoint""
     ""nCurWakeTimes""
     ""nMaxWakeTimes""
     ""nWakeCostMoney""
     ""collumn"" */

void FUN_10954b00(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_2c;
  undefined4 auStack_28 [9];
  
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2d20) != 0)) {
        FUN_11464510();
        FUN_1166c4b0();
        cVar1 = FUN_116c5290();
        if (cVar1 != '\0') {
          FUN_104f4330(param_4);
          iVar3 = FUN_10953ad0();
          if (iVar3 != 0) {
            FUN_104d1550("nMaxWakePoint",*(undefined4 *)(iVar3 + 0x14));
            uVar4 = FUN_1025b060();
            FUN_104d1550("nCurWakePoint",uVar4);
          }
          FUN_11464510();
          uVar4 = FUN_1166dfb0();
          iVar3 = FUN_10856b00(uVar4);
          if (iVar3 != 0) {
            iVar5 = FUN_11464510();
            FUN_104d1550("nCurWakeTimes",*(undefined4 *)(iVar5 + 0x1b8));
            FUN_104d1550("nMaxWakeTimes",*(undefined4 *)(iVar3 + 0x78));
            iVar3 = FUN_11464510();
            iVar3 = FUN_117441f0(uVar4,*(int *)(iVar3 + 0x1ac) + -1);
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + 0x7c);
            }
            FUN_104d1550("nWakeCostMoney",uVar4);
          }
          if (*(int *)(iVar2 + 0x2d1c) != 0) {
            FUN_11464510(&uStack_2c,auStack_28);
            uVar6 = FUN_11669710();
            FUN_113f9c70(uVar6);
          }
          FUN_104d1550("collumn",uStack_2c);
          FUN_104d1550(&DAT_11dbfe78,auStack_28[0]);
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
            *param_1 = 0;
          }
          param_1[1] = 2;
          *(undefined1 *)(param_1 + 2) = 1;
          FUN_104d7c10();
        }
      }
    }
  }
  return;
}



/* ===== FUN_109582f0 @ 109582f0  size=273 ===== */
// strings:
//   "GetCharmFoundData"
//   "ReqCharmFound"
//   "CheckCharmFound"
//   "RefreshMoneyData"
//   "ReqItemDecompose"
//   "GetItemDecomposeResultData"
//   "CheckBindStateAfterCharmFound"

/* [RE-AUTO c0]
   strings:
     ""GetCharmFoundData""
     ""ReqCharmFound""
     ""CheckCharmFound""
     ""RefreshMoneyData""
     ""ReqItemDecompose""
     ""GetItemDecomposeResultData""
     ""CheckBindStateAfterCharmFound"" */

void FUN_109582f0(void)

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
    FUN_104d13b0("GetCharmFoundData",FUN_10958830);
    FUN_104d13b0("ReqCharmFound",FUN_10959180);
    FUN_104d13b0("CheckCharmFound",FUN_10959000);
    FUN_104d13b0("RefreshMoneyData",FUN_109592a0);
    FUN_104d13b0("ReqItemDecompose",FUN_10959520);
    FUN_104d13b0("GetItemDecomposeResultData",FUN_10959760);
    FUN_104d13b0("CheckBindStateAfterCharmFound",FUN_10959ec0);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10959760 @ 10959760  size=1884 ===== */
// strings:
//   "DECOMPOSE_ITEM_VO_CLASSNANE"
//   "count"
//   "asset"
//   "m_nBindType"
//   "m_nRareType"
//   "itemBagList"
//   "itemStoreList"
//   "itemMailList"
//   "bIsBonus"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""DECOMPOSE_ITEM_VO_CLASSNANE""
     ""count""
     ""asset""
     ""m_nBindType""
     ""m_nRareType""
     ""itemBagList""
     ""itemStoreList""
     ""itemMailList""
     ""bIsBonus"" */

void FUN_10959760(int **param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int ***pppiVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 unaff_EDI;
  undefined1 *puVar9;
  char *pcVar10;
  uint *puVar11;
  int ***pppiStack_114;
  uint *puStack_110;
  char *pcStack_10c;
  undefined1 *puStack_108;
  int *piStack_104;
  uint uStack_100;
  char *pcStack_fc;
  undefined1 *puStack_f8;
  int ***pppiStack_f4;
  undefined1 *puStack_f0;
  int **ppiStack_ec;
  int **ppiStack_e8;
  int *piStack_e4;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  byte bStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a0;
  int *piStack_9c;
  uint uStack_98;
  int *piStack_94;
  uint local_90;
  undefined4 auStack_8c [5];
  int iStack_78;
  int *piStack_70;
  int *piStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_5c [8];
  int *piStack_54;
  int **ppiStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [8];
  int *piStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int *piStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_e4 = param_1[2];
      ppiStack_e8 = param_1;
      ppiStack_ec = (int **)0x109597ba;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      piStack_e4 = (int *)param_4;
      ppiStack_e8 = (int **)0x109597e1;
      FUN_104f4330();
      ppiStack_e8 = (int **)0x109597fa;
      piVar5 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if (piVar5 != (int *)0x0) {
        ppiStack_e8 = (int **)0x1095980e;
        iStack_b0 = (**(code **)(*piVar5 + 0x370))();
        if ((iStack_b0 != 0) && (piVar5[0xb47] != 0)) {
          ppiStack_e8 = &piStack_24;
          piStack_24 = (int *)0x0;
          uStack_20 = 0;
          piStack_6c = (int *)0x0;
          uStack_68 = 0;
          piStack_54 = (int *)0x0;
          ppiStack_50 = (int **)0x0;
          piStack_3c = (int *)0x0;
          uStack_38 = 0;
          ppiStack_ec = (int **)0x1095988b;
          FUN_11a98a70();
          ppiStack_ec = &piStack_70;
          puStack_f0 = (undefined1 *)0x10959897;
          FUN_11a98a70();
          puStack_f0 = auStack_5c;
          pppiStack_f4 = (int ***)0x109598a6;
          FUN_11a98a70();
          puStack_f8 = auStack_48;
          pppiStack_f4 = (int ***)CONCAT31((int3)((uint)unaff_EDI >> 8),
                                           ((byte)piStack_9c & 0x8f) == 10);
          pcStack_fc = "DECOMPOSE_ITEM_VO_CLASSNANE";
          uStack_100 = uStack_98;
          piStack_104 = (int *)0x109598de;
          cVar4 = (**(code **)(*piStack_a0 + 0x10))();
          if ((cVar4 != '\0') &&
             ((((byte)piStack_54 & 0x8f) == 6 &&
              (ppiStack_ec = ppiStack_50, ((uint)piStack_54 >> 6 & 1) != 0)))) {
            ppiStack_ec = (int **)*ppiStack_50;
          }
          piStack_104 = piStack_cc + 0x16;
          uStack_b4 = 0;
          puStack_108 = (undefined1 *)0x10959932;
          FUN_1095a3e0();
          puVar2 = puStack_f0;
          uVar7 = 0;
          puVar9 = (undefined1 *)(-iStack_c0 >> 2);
          puStack_f8 = puVar9;
          if (puVar9 != (undefined1 *)0x0) {
            do {
              puVar1 = *(undefined4 **)(iStack_c0 + uVar7 * 4);
              if (puVar1 != (undefined4 *)0x0) {
                puStack_108 = (undefined1 *)*puVar1;
                pcStack_10c = (char *)0x10959965;
                pppiStack_f4 = (int ***)FUN_10254130();
                puVar9 = puStack_f8;
                if (pppiStack_f4 != (int ***)0x0) {
                  pppiStack_114 = &ppiStack_ec;
                  puStack_108 = (undefined1 *)0x0;
                  pcStack_10c = (char *)0x0;
                  puStack_110 = (uint *)puVar2;
                  ppiStack_ec = (int **)0x0;
                  ppiStack_e8 = (int **)0x0;
                  FUN_11a98de0();
                  FUN_104d1440(&DAT_11dbb0b4,*puVar1);
                  FUN_104d1440("count",puVar1[1]);
                  FUN_104d1670("asset",piStack_104[0x2d]);
                  FUN_104d1440("m_nBindType",puVar1[2]);
                  FUN_104d1550("m_nRareType",piStack_104[0x13]);
                  (**(code **)(*piStack_54 + 0x3c))(uStack_4c,&pcStack_fc);
                  FUN_104d7c10();
                  puVar9 = puStack_f8;
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < puVar9);
          }
          puStack_108 = auStack_44;
          pcStack_10c = "itemBagList";
          puStack_110 = (uint *)0x10959a52;
          FUN_104d12b0();
          uStack_98 = 0;
          puStack_108 = (undefined1 *)(iStack_d0 + 100);
          piStack_94 = (int *)0x0;
          local_90 = 0;
          pcStack_10c = (char *)0x10959a7e;
          FUN_1095a3e0();
          pppiVar3 = pppiStack_f4;
          pcVar8 = (char *)0x0;
          pcVar10 = (char *)((int)(uStack_98 - (int)piStack_9c) >> 2);
          piVar5 = piStack_9c;
          pcStack_fc = pcVar10;
          if (pcVar10 != (char *)0x0) {
            do {
              puVar1 = (undefined4 *)piVar5[(int)pcVar8];
              if (puVar1 != (undefined4 *)0x0) {
                pcStack_10c = (char *)*puVar1;
                puStack_110 = (uint *)0x10959ab2;
                puStack_f8 = (undefined1 *)FUN_10254130();
                pcVar10 = pcStack_fc;
                piVar5 = piStack_9c;
                if (puStack_f8 != (undefined1 *)0x0) {
                  pcStack_10c = (char *)0x0;
                  puStack_110 = (uint *)0x0;
                  pppiStack_114 = pppiVar3;
                  puStack_f0 = (undefined1 *)0x0;
                  ppiStack_ec = (int **)0x0;
                  FUN_11a98de0(&puStack_f0);
                  FUN_104d1440(&DAT_11dbb0b4,*puVar1);
                  FUN_104d1440("count",puVar1[1]);
                  FUN_104d1670("asset",*(undefined4 *)((int)puStack_108 + 0xb4));
                  FUN_104d1440("m_nBindType",puVar1[2]);
                  FUN_104d1550("m_nRareType",*(undefined4 *)((int)puStack_108 + 0x4c));
                  (**(code **)(*piStack_a0 + 0x3c))(uStack_98,&uStack_100);
                  FUN_104d7c10();
                  pcVar10 = pcStack_fc;
                  piVar5 = piStack_9c;
                }
              }
              pcVar8 = pcVar8 + 1;
            } while (pcVar8 < pcVar10);
          }
          pcStack_10c = (char *)(uint)(((byte)uStack_b4 & 0x8f) == 10);
          puStack_110 = &local_90;
          pppiStack_114 = (int ***)0x11ddd050;
          (**(code **)(_DAT_00000000 + 0x14))(iStack_b0);
          iVar6 = (int)piStack_e4 + 0x70;
          FUN_1095a3e0();
          puVar2 = puStack_108;
          puVar9 = (undefined1 *)0x0;
          puVar11 = (uint *)(-(int)piStack_e4 >> 2);
          piVar5 = piStack_e4;
          puStack_110 = puVar11;
          if (puVar11 != (uint *)0x0) {
            do {
              puVar1 = *(undefined4 **)((int)piVar5 + (int)puVar9 * 4);
              if ((puVar1 != (undefined4 *)0x0) &&
                 (pcStack_10c = (char *)FUN_10254130(*puVar1), puVar11 = puStack_110,
                 piVar5 = piStack_e4, pcStack_10c != (char *)0x0)) {
                piStack_104 = (int *)0x0;
                uStack_100 = 0;
                FUN_11a98de0(&piStack_104,puVar2,0,0);
                FUN_104d1440(&DAT_11dbb0b4,*puVar1);
                FUN_104d1440("count",puVar1[1]);
                FUN_104d1670("asset",*(undefined4 *)(iVar6 + 0xb4));
                FUN_104d1440("m_nBindType",puVar1[2]);
                FUN_104d1550("m_nRareType",*(undefined4 *)(iVar6 + 0x4c));
                (**(code **)(*piStack_9c + 0x3c))(piStack_94,&pppiStack_114);
                puVar11 = puStack_110;
                piVar5 = piStack_e4;
                if ((uStack_100 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_104 + 8))(&piStack_104,pcStack_fc);
                  puVar11 = puStack_110;
                  piVar5 = piStack_e4;
                }
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 < puVar11);
          }
          (**(code **)(*piStack_cc + 0x14))
                    (uStack_c4,"itemMailList",auStack_8c,(bStack_c8 & 0x8f) == 10);
          (**(code **)(_DAT_00000000 + 0x14))(uStack_d4,"bIsBonus",&uStack_b4,0);
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            ppiStack_e8 = (int **)param_1[2];
            puStack_f0 = (undefined1 *)0x10959d67;
            ppiStack_ec = param_1;
            (**(code **)(**param_1 + 8))();
            *param_1 = (int *)0x0;
          }
          param_1[1] = (int *)0x2;
          *(undefined1 *)(param_1 + 2) = 1;
          if (iStack_ac != 0) {
            ppiStack_e8 = (int **)iStack_ac;
            ppiStack_ec = (int **)0x10959d86;
            FUN_10c3d5d0();
          }
          if (iStack_78 != 0) {
            ppiStack_e8 = (int **)iStack_78;
            ppiStack_ec = (int **)0x10959d97;
            FUN_10c3d5d0();
          }
          if (piStack_a0 != (int *)0x0) {
            ppiStack_e8 = (int **)piStack_a0;
            ppiStack_ec = (int **)0x10959da8;
            FUN_10c3d5d0();
          }
          if ((uStack_38 >> 6 & 1) != 0) {
            ppiStack_ec = &piStack_3c;
            ppiStack_e8 = (int **)uStack_34;
            puStack_f0 = (undefined1 *)0x10959dd4;
            (**(code **)(*piStack_3c + 8))();
            piStack_3c = (int *)0x0;
          }
          uStack_38 = 0;
          if (((uint)ppiStack_50 >> 6 & 1) != 0) {
            ppiStack_ec = &piStack_54;
            ppiStack_e8 = (int **)uStack_4c;
            puStack_f0 = (undefined1 *)0x10959e13;
            (**(code **)(*piStack_54 + 8))();
            piStack_54 = (int *)0x0;
          }
          ppiStack_50 = (int **)0x0;
          if ((uStack_68 >> 6 & 1) != 0) {
            ppiStack_ec = &piStack_6c;
            ppiStack_e8 = (int **)uStack_64;
            puStack_f0 = (undefined1 *)0x10959e49;
            (**(code **)(*piStack_6c + 8))();
            piStack_6c = (int *)0x0;
          }
          uStack_68 = 0;
          if ((uStack_20 >> 6 & 1) != 0) {
            ppiStack_ec = &piStack_24;
            ppiStack_e8 = (int **)uStack_1c;
            puStack_f0 = (undefined1 *)0x10959e82;
            (**(code **)(*piStack_24 + 8))();
            piStack_24 = (int *)0x0;
          }
          uStack_20 = 0;
        }
      }
      if ((local_90 >> 6 & 1) != 0) {
        ppiStack_ec = &piStack_94;
        ppiStack_e8 = (int **)auStack_8c[0];
        puStack_f0 = (undefined1 *)0x10959eb5;
        (**(code **)(*piStack_94 + 8))();
      }
    }
  }
  return;
}



