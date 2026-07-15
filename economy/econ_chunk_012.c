/* ===== FUN_109f1210 @ 109f1210  size=641 ===== */
// strings:
//   "mh.view.GuideBook.ChapterItemVo"
//   "chapterID"
//   "chapterName"
//   "isOpen"
//   "isNew"
//   "isCanGetReward"
//   "chapterArr"

/* [RE-AUTO c0]
   strings:
     ""mh.view.GuideBook.ChapterItemVo""
     ""chapterID""
     ""chapterName""
     ""isOpen""
     ""isNew""
     ""isCanGetReward""
     ""chapterArr"" */

void FUN_109f1210(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *piStack_74;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_44 [4];
  int *piStack_40;
  uint uStack_3c;
  uint auStack_38 [4];
  uint *puStack_28;
  uint *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_74;
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
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
       ((iVar4 = (**(code **)(*piVar1 + 0xb4))(), iVar4 != 0 &&
        (iVar4 = *(int *)(iVar4 + 0x2b28), iVar4 != 0)))) {
      piStack_40 = (int *)0x0;
      uStack_3c = 0;
      FUN_11a98a70(&piStack_40);
      puVar2 = *(undefined4 **)(iVar4 + 0x14);
      for (puVar5 = *(undefined4 **)(iVar4 + 0x10); puVar5 != puVar2; puVar5 = puVar5 + 0xf) {
        iVar4 = FUN_11539d40();
        if (iVar4 != 0) {
          piStack_5c = (int *)0x0;
          piStack_58 = (int *)0x0;
          FUN_11a98de0(&piStack_5c,"mh.view.GuideBook.ChapterItemVo",0,0);
          FUN_104d1550("chapterID",*puVar5);
          FUN_11539d40();
          puStack_28 = auStack_38;
          auStack_38[0] = auStack_38[0] & 0xffffff00;
          puStack_24 = puStack_28;
          FUN_100e5aa0(puStack_28);
          FUN_104d1670("chapterName",puStack_28);
          if ((puStack_28 != &uStack_3c) && (puStack_28 != (uint *)0x0)) {
            FUN_10c3d5d0(puStack_28);
          }
          FUN_104d15e0("isOpen",*(undefined1 *)((int)puVar5 + 0xd));
          FUN_104d15e0("isNew",*(char *)((int)puVar5 + 0xf) == '\0');
          uVar3 = FUN_1153a0a0();
          FUN_104d15e0("isCanGetReward",uVar3);
          (**(code **)(*piStack_58 + 0x3c))(uStack_50,&local_70);
          if (((uint)piStack_58 >> 6 & 1) != 0) {
            (**(code **)(*piStack_5c + 8))(&piStack_5c,uStack_54);
          }
        }
      }
      (**(code **)(*piStack_74 + 0x14))
                (local_6c,"chapterArr",auStack_44,((byte)local_70 & 0x8f) == 10);
      if ((uStack_3c >> 6 & 1) != 0) {
        (**(code **)(*piStack_40 + 8))(&piStack_40,auStack_38[0]);
        piStack_40 = (int *)0x0;
      }
      uStack_3c = 0;
    }
    if ((local_6c >> 6 & 1) != 0) {
      (**(code **)(*local_70 + 8))(&local_70,local_68);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f14a0 @ 109f14a0  size=1794 ===== */
// strings:
//   "mh.view.GuideBook.TextDescriptionVo"
//   "introductionArr"
//   "curProgress"
//   "isWeaponChapter"
//   "isHasChooseWeapon"
//   "finishActionCount"
//   "actionCount"
//   "mh.view.GuideBook.TaskItemVo"
//   "detailDes"
//   "curCompleteNum"
//   "needCompleteNum"
//   "taskArr"
//   "mh.view.GuideBook.RewardItemVo"
//   "getCondition"
//   "rewardID"
//   "rewardCount"
//   "isHasGetReward"
//   "finishCount"
//   "rewardArr"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""mh.view.GuideBook.TextDescriptionVo""
     ""introductionArr""
     ""curProgress""
     ""isWeaponChapter""
     ""isHasChooseWeapon""
     ""finishActionCount""
     ""actionCount""
     ""mh.view.GuideBook.TaskItemVo""
     ""detailDes""
     ""curCompleteNum"" */

void FUN_109f14a0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int ******unaff_EBX;
  int *******pppppppiVar6;
  byte unaff_SI;
  int ******ppppppiVar7;
  int *unaff_EDI;
  float10 fVar8;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *******pppppppiStack_118;
  char *pcStack_114;
  int *******pppppppiStack_110;
  int *****pppppiStack_10c;
  int *****pppppiStack_108;
  int ******ppppppiStack_104;
  int *****pppppiStack_100;
  int ******ppppppiStack_fc;
  int *******pppppppiStack_f8;
  int ******ppppppiStack_f4;
  uint *puStack_f0;
  int ****ppppiStack_ec;
  char *pcStack_e8;
  int ******ppppppiStack_e4;
  int ******ppppppiStack_e0;
  int *******pppppppiStack_dc;
  int ****ppppiStack_cc;
  uint uStack_c8;
  int *****pppppiStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *******local_ac;
  int *****local_a8;
  int *local_a4;
  int *******local_a0;
  char *local_9c;
  undefined4 local_98;
  int ****ppppiStack_8c;
  int *****pppppiStack_88;
  uint uStack_84;
  int *******pppppppiStack_80;
  int *****pppppiStack_70;
  uint uStack_6c;
  int *******pppppppiStack_68;
  int ******ppppppiStack_64;
  undefined2 auStack_60 [2];
  int ******ppppppiStack_5c;
  int ******ppppppiStack_58;
  uint uStack_54;
  int *******pppppppiStack_50;
  undefined2 auStack_4c [2];
  undefined2 auStack_48 [2];
  int *******pppppppiStack_44;
  int *******pppppppiStack_40;
  int *****pppppiStack_3c;
  undefined2 *puStack_28;
  undefined2 *puStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppppiStack_cc;
  if (in_stack_00000014 == 2) {
    local_a4 = (int *)in_stack_00000010[1];
    local_9c = (char *)in_stack_00000010[3];
    local_a0 = (int *******)in_stack_00000010[2];
    local_98 = in_stack_00000010[4];
    local_a8 = (int *****)0x0;
    if (((uint)local_a4 >> 6 & 1) != 0) {
      local_a8 = (int *****)*in_stack_00000010;
      ppppppiStack_e0 = &local_a8;
      ppppppiStack_e4 = (int ******)0x109f150a;
      pppppppiStack_dc = local_a0;
      (*(code *)(*local_a8)[1])();
    }
    if (((in_stack_00000010[7] & 0x8f) == 3) ||
       (pppppppiVar6 = (int *******)0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
      pppppppiVar6 = (int *******)in_stack_00000010[8];
    }
    local_ac = pppppppiVar6;
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      pppppppiStack_dc = (int *******)0x109f1559;
      iVar3 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar3 != 0) &&
         (ppppiStack_8c = *(int *****)(iVar3 + 0x2b28), ppppiStack_8c != (int ****)0x0)) {
        ppppppiStack_e0 = (int ******)0x109f157b;
        pppppppiStack_dc = pppppppiVar6;
        ppppiStack_cc = (int ****)FUN_1146e630();
        if (ppppiStack_cc != (int ****)0x0) {
          pppppppiStack_dc = (int *******)0x109f1590;
          iVar3 = FUN_11539d40();
          if (iVar3 != 0) {
            pppppppiStack_dc = (int *******)0x109f159f;
            iVar3 = FUN_11539d40();
            ppppppiStack_58 = (int ******)0x0;
            pppppppiStack_dc = &ppppppiStack_58;
            uStack_54 = 0;
            ppppppiStack_e0 = (int ******)0x109f15c6;
            FUN_11a98a70();
            iVar4 = *(int *)(iVar3 + 0x2c);
            for (iVar3 = *(int *)(iVar3 + 0x28); iVar3 != iVar4; iVar3 = iVar3 + 4) {
              ppppppiStack_e0 = (int ******)0x0;
              ppppppiStack_e4 = (int ******)0x0;
              pcStack_e8 = "mh.view.GuideBook.TextDescriptionVo";
              ppppiStack_ec = (int ****)&ppppiStack_cc;
              ppppiStack_cc = (int ****)0x0;
              uStack_c8 = 0;
              puStack_f0 = (uint *)0x109f15f9;
              FUN_11a98de0();
              puStack_28 = auStack_48;
              auStack_48[0] = 0;
              puStack_f0 = (uint *)auStack_48;
              ppppppiStack_f4 = (int ******)0x109f1627;
              puStack_24 = puStack_28;
              FUN_100e5b60();
              ppppppiStack_f4 = (int ******)puStack_28;
              pppppppiStack_f8 = (int *******)&DAT_11dccd64;
              ppppppiStack_fc = (int ******)0x109f163e;
              FUN_104d1700();
              if ((puStack_28 != auStack_4c) && (puStack_28 != (undefined2 *)0x0)) {
                ppppppiStack_f4 = (int ******)puStack_28;
                pppppppiStack_f8 = (int *******)0x109f165d;
                FUN_10c3d5d0();
              }
              ppppppiStack_f4 = (int ******)&ppppppiStack_e0;
              pppppppiStack_f8 = pppppppiStack_68;
              ppppppiStack_fc = (int ******)0x109f1678;
              (*(code *)(*pppppiStack_70)[0xf])();
              if ((uStack_c8 >> 6 & 1) != 0) {
                ppppppiStack_e4 = (int ******)&ppppiStack_cc;
                ppppppiStack_e0 = (int ******)pppppiStack_c4;
                pcStack_e8 = (char *)0x109f1695;
                (*(code *)(*ppppiStack_cc)[2])();
              }
            }
            ppppppiStack_e0 = (int ******)(uint)(((byte)local_a8 & 0x8f) == 10);
            ppppppiStack_e4 = (int ******)&ppppppiStack_5c;
            pcStack_e8 = "introductionArr";
            puStack_f0 = (uint *)0x109f16cc;
            ppppiStack_ec = (int ****)local_a4;
            (*(code *)(*local_ac)[5])();
            ppppppiVar7 = ppppppiStack_e0;
            puStack_f0 = (uint *)0x11de55b4;
            ppppppiStack_f4 = (int ******)0x109f16ff;
            FUN_104d14d0();
            puStack_f0 = (uint *)0x109f1707;
            iVar3 = FUN_1170a680();
            puStack_f0 = (uint *)(uint)(iStack_c0 == *(int *)(iVar3 + 0x3c));
            ppppppiStack_f4 = (int ******)0x11de5580;
            pppppppiStack_f8 = (int *******)0x109f1725;
            FUN_104d15e0();
            pppppppiStack_f8 = (int *******)(uint)(local_a0[2] != (int ******)0x0);
            ppppppiStack_fc = (int ******)0x11de5590;
            pppppiStack_100 = (int *****)0x109f1744;
            FUN_104d15e0();
            pppppiStack_100 = ppppppiVar7[1];
            ppppppiStack_104 = (int ******)0x11de5560;
            pppppiStack_108 = (int *****)0x109f1757;
            FUN_104d1550();
            pppppiStack_108 = (int *****)((int)ppppppiVar7[7] - (int)ppppppiVar7[6] >> 2);
            pppppiStack_10c = (int *****)0x11de5574;
            pppppppiStack_110 = (int *******)0x109f1771;
            FUN_104d1550();
            uStack_84 = 0;
            puStack_f0 = &uStack_84;
            pppppppiStack_80 = (int *******)0x0;
            ppppppiStack_f4 = (int ******)0x109f1790;
            FUN_11a98a70();
            ppppppiStack_f4 = (int ******)&ppppppiStack_58;
            pppppppiStack_f8 = (int *******)0x109f179f;
            FUN_109f0c40();
            ppppppiVar7 = ppppppiStack_5c;
            if (ppppppiStack_5c != ppppppiStack_58) {
              do {
                pppppppiStack_f8 = (int *******)0x0;
                ppppppiStack_fc = (int ******)0x0;
                pppppiStack_100 = (int *****)0x11de54a8;
                ppppppiStack_104 = (int ******)&ppppppiStack_e4;
                ppppppiStack_e4 = (int ******)0x0;
                ppppppiStack_e0 = (int ******)0x0;
                pppppiStack_108 = (int *****)0x109f17da;
                FUN_11a98de0();
                pppppppiStack_40 = (int *******)auStack_60;
                auStack_60[0] = 0;
                pppppiStack_108 = (int *****)auStack_60;
                pppppiStack_10c = (int *****)0x109f180e;
                pppppiStack_3c = (int *****)pppppppiStack_40;
                FUN_100e5b60();
                pppppiStack_10c = (int *****)pppppppiStack_40;
                pppppppiStack_110 = (int *******)&DAT_11dbac80;
                pcStack_114 = (char *)0x109f1825;
                FUN_104d1700();
                if ((pppppppiStack_40 != &ppppppiStack_64) && (pppppppiStack_40 != (int *******)0x0)
                   ) {
                  pppppiStack_10c = (int *****)pppppppiStack_40;
                  pppppppiStack_110 = (int *******)0x109f1844;
                  FUN_10c3d5d0();
                }
                pppppppiStack_44 = &ppppppiStack_64;
                ppppppiStack_64._0_2_ = 0;
                pppppiStack_10c = (int *****)&ppppppiStack_64;
                pppppppiStack_110 = (int *******)0x109f187b;
                pppppppiStack_40 = pppppppiStack_44;
                FUN_100e5b60();
                pppppppiStack_110 = pppppppiStack_44;
                pcStack_114 = "detailDes";
                pppppppiStack_118 = (int *******)0x109f1892;
                FUN_104d1700();
                if (((int ********)pppppppiStack_44 != &pppppppiStack_68) &&
                   (pppppppiStack_44 != (int *******)0x0)) {
                  pppppppiStack_110 = pppppppiStack_44;
                  pcStack_114 = (char *)0x109f18b1;
                  FUN_10c3d5d0();
                }
                pppppppiStack_110 = (int *******)(*ppppppiVar7)[8];
                pcStack_114 = "curCompleteNum";
                pppppppiStack_118 = (int *******)0x109f18c9;
                FUN_104d1550();
                pppppppiStack_118 = (int *******)(*ppppppiVar7)[6][10];
                FUN_104d1550("needCompleteNum");
                pppppppiStack_110 = &ppppppiStack_fc;
                pcStack_114 = local_9c;
                pppppppiStack_118 = (int *******)0x109f18f6;
                (**(code **)(*local_a4 + 0x3c))();
                if (((uint)ppppppiStack_e0 >> 6 & 1) != 0) {
                  ppppppiStack_fc = (int ******)&ppppppiStack_e4;
                  pppppppiStack_f8 = pppppppiStack_dc;
                  pppppiStack_100 = (int *****)0x109f1913;
                  (*(code *)(*ppppppiStack_e4)[2])();
                }
                ppppppiVar7 = ppppppiVar7 + 1;
              } while (ppppppiVar7 != ppppppiStack_58);
            }
            pppppppiStack_f8 = (int *******)(uint)(((byte)iStack_c0 & 0x8f) == 10);
            ppppppiStack_fc = (int ******)&ppppiStack_8c;
            pppppiStack_100 = (int *****)0x11de553c;
            ppppppiStack_104 = (int ******)uStack_bc;
            pppppiStack_108 = (int *****)0x109f194c;
            (*(code *)(*pppppiStack_c4)[5])();
            pppppiStack_108 = (int *****)&uStack_b4;
            uStack_b4 = 0;
            uStack_b0 = 0;
            pppppiStack_10c = (int *****)0x109f1968;
            FUN_11a98a70();
            pppppiStack_10c = (int *****)0x109f196f;
            iVar3 = FUN_11539d40();
            iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 3;
            pppppppiStack_118 = (int *******)unaff_EBX;
            if (0 < iVar3) {
              pppppppiVar6 = (int *******)0x0;
              do {
                pppppiStack_10c = (int *****)0x0;
                pppppppiStack_110 = (int *******)0x0;
                pcStack_114 = "mh.view.GuideBook.RewardItemVo";
                pppppppiStack_118 = (int *******)&pppppppiStack_f8;
                pppppppiStack_f8 = (int *******)0x0;
                ppppppiStack_f4 = (int ******)0x0;
                FUN_11a98de0();
                ppppiStack_ec = (int ****)((int)pppppppiVar6 + 1);
                fVar8 = (float10)FUN_11539f30(ppppiStack_ec);
                FUN_104d14d0("getCondition");
                FUN_11539d40(pppppppiVar6);
                iVar4 = FUN_1180a860();
                FUN_104d1550("rewardID",*(undefined4 *)(iVar4 + 4));
                FUN_104d1550("rewardCount",1);
                uVar2 = FUN_11539960(pppppppiVar6);
                FUN_104d15e0("isHasGetReward",uVar2);
                FUN_11539d40(pppppppiVar6);
                puVar5 = (undefined4 *)FUN_1180a860();
                FUN_104d1550("finishCount",*puVar5);
                (**(code **)(*unaff_EDI + 0x3c))((int ******)(float)fVar8,&pppppppiStack_118);
                if (((uint)ppppppiStack_f4 >> 6 & 1) != 0) {
                  pppppppiStack_110 = (int *******)&pppppppiStack_f8;
                  pppppiStack_10c = (int *****)puStack_f0;
                  pcStack_114 = (char *)0x109f1a89;
                  (*(code *)(*pppppppiStack_f8)[2])();
                }
                pppppppiVar6 = pppppppiStack_dc;
                pppppppiStack_118 = (int *******)(float)fVar8;
              } while ((int)pppppppiStack_dc + 1 <= iVar3);
            }
            pppppiStack_10c = (int *****)(uint)((unaff_SI & 0x8f) == 10);
            pppppppiStack_110 = (int *******)auStack_b8;
            pcStack_114 = "rewardArr";
            (**(code **)(*unaff_EDI + 0x14))();
            if ((uStack_84 >> 6 & 1) != 0) {
              ppppppiStack_e0 = &pppppiStack_88;
              pppppppiStack_dc = pppppppiStack_80;
              ppppppiStack_e4 = (int ******)0x109f1ade;
              (*(code *)(*pppppiStack_88)[2])();
              pppppiStack_88 = (int *****)0x0;
            }
            uStack_84 = 0;
            if (pppppppiStack_40 != (int *******)0x0) {
              pppppppiStack_dc = pppppppiStack_40;
              ppppppiStack_e0 = (int ******)0x109f1aff;
              FUN_10c3d5d0();
            }
            if ((uStack_6c >> 6 & 1) != 0) {
              ppppppiStack_e0 = &pppppiStack_70;
              pppppppiStack_dc = pppppppiStack_68;
              ppppppiStack_e4 = (int ******)0x109f1b1f;
              (*(code *)(*pppppiStack_70)[2])();
              pppppiStack_70 = (int *****)0x0;
            }
            uStack_6c = 0;
            if ((uStack_54 >> 6 & 1) != 0) {
              ppppppiStack_e0 = (int ******)&ppppppiStack_58;
              pppppppiStack_dc = pppppppiStack_50;
              ppppppiStack_e4 = (int ******)0x109f1b58;
              (*(code *)(*ppppppiStack_58)[2])();
              ppppppiStack_58 = (int ******)0x0;
            }
            uStack_54 = 0;
          }
        }
      }
    }
    if (((uint)local_a4 >> 6 & 1) != 0) {
      ppppppiStack_e0 = &local_a8;
      pppppppiStack_dc = local_a0;
      ppppppiStack_e4 = (int ******)0x109f1b8b;
      (*(code *)(*local_a8)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f3df0 @ 109f3df0  size=2502 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPet::SetName
// strings:
//   "roleLevel"
//   "roleHunterStarLv"
//   "sourceRare"
//   "itemLevel"
//   "ItemRank"
//   "sourceItemName"
//   "bPointType"
//   "destArrayLength"
//   "destEquipArray"
//   "equipID"
//   "equipName"
//   "equipRare"
//   "playerUseLevelMin"
//   "playerUseLevelMax"
//   "equipCounts"
//   "upgradeMoney"
//   "currentMoney"
//   "enforceRequirement"
//   "hunterstarRequirement"
//   "rankDownLevel"

/* [RE-AUTO c0]
   strings:
     ""roleLevel""
     ""roleHunterStarLv""
     ""sourceRare""
     ""itemLevel""
     ""ItemRank""
     ""sourceItemName""
     ""bPointType""
     ""destArrayLength""
     ""destEquipArray""
     ""equipID"" */

void FUN_109f3df0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 unaff_EBX;
  undefined4 uVar7;
  int iVar8;
  byte unaff_SI;
  undefined4 *puVar9;
  int *unaff_EDI;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uStack_234;
  int *piStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  int *piStack_220;
  int iStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int *piStack_210;
  int iStack_20c;
  int *piStack_1f4;
  byte bStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  int *piStack_1e4;
  int *local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int iStack_1c4;
  undefined **ppuStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1a4;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 *local_18c;
  int *piStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_118;
  uint uStack_114;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  int iStack_d0;
  undefined1 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [16];
  undefined1 *puStack_48;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_234;
  local_18c = param_1;
  local_1a4 = param_2;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 3) {
    local_1dc = param_4[1];
    local_1d4 = param_4[3];
    local_1d8 = param_4[2];
    local_1d0 = param_4[4];
    local_1e0 = (int *)0x0;
    if ((local_1dc >> 6 & 1) != 0) {
      local_1e0 = (int *)*param_4;
      (**(code **)(*local_1e0 + 4))(&local_1e0,local_1d8);
    }
    if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
      uStack_228 = param_4[8];
    }
    else {
      uStack_228 = 0xdeadbeaf;
    }
    if (((param_4[0xd] & 0x8f) == 3) || (uVar7 = 0xdeadbeaf, (param_4[0xd] & 0x8f) == 4)) {
      uVar7 = param_4[0xe];
    }
    if ((((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
          (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) &&
         ((piVar2 = (int *)(**(code **)(*piVar2 + 0xb4))(), piStack_220 = piVar2,
          piVar2 != (int *)0x0 && (iStack_218 = piVar2[0xb47], iStack_218 != 0)))) &&
        ((piVar3 = (int *)FUN_113f9bb0(uStack_228,uVar7), piStack_230 = piVar3, piVar3 != (int *)0x0
         && ((cVar1 = FUN_116698c0(), cVar1 != '\0' &&
             (iStack_224 = FUN_116734c0(), iStack_224 != 0)))))) &&
       (iStack_1e8 = *(int *)(iStack_224 + 0x1c0), iStack_1e8 != 0)) {
      uVar7 = CPlayer__GetHuntRankOrCount();
      FUN_104d1550("roleLevel",uVar7);
      uStack_228 = 0;
      iStack_21c = 0;
      iVar4 = (**(code **)(*piVar2 + 0x46c))();
      if (iVar4 != 0) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x46c))();
        uStack_228 = (**(code **)(*piVar2 + 0x18))();
        iVar4 = FUN_1025b060();
        iStack_21c = FUN_1025b060();
        iStack_21c = iStack_21c + iVar4;
      }
      FUN_104d1550("roleHunterStarLv",uStack_228);
      uVar7 = (**(code **)(*piVar3 + 0x2c))();
      FUN_104d1550("sourceRare",uVar7);
      uVar7 = (**(code **)(*piVar3 + 0x18))();
      FUN_104d1550("itemLevel",uVar7);
      uVar7 = FUN_11669840();
      FUN_104d1550("ItemRank",uVar7);
      iVar4 = FUN_100e5b40(auStack_28);
      FUN_104d1670("sourceItemName",*(undefined4 *)(iVar4 + 0x14));
      if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_18);
      }
      FUN_104d15e0("bPointType",1);
      puVar12 = &uStack_fc;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_214 = CONCAT31(uStack_214._1_3_,((byte)local_1e0 & 0x8f) == 10);
      uVar13 = local_1dc;
      uVar7 = uStack_214;
      cVar1 = (**(code **)(*piStack_1e4 + 0x10))(local_1dc,"destArrayLength",puVar12,uStack_214);
      if (cVar1 != '\0') {
        uStack_144 = 0;
        uStack_140 = 0;
        iStack_224 = CONCAT31(iStack_224._1_3_,(bStack_1f0 & 0x8f) == 10);
        iVar4 = iStack_224;
        cVar1 = (**(code **)(*piStack_1f4 + 0x10))(uStack_1ec,"destEquipArray",&uStack_144);
        if (cVar1 != '\0') {
          ppuStack_1c0 = &PTR_FUN_11dd2bf4;
          iStack_1bc = 0;
          iStack_1b8 = 0;
          iVar8 = *(int *)(iStack_20c + 0x1c);
          uStack_1b4 = 0;
          if (iVar8 != *(int *)(iStack_20c + 0x20)) {
            do {
              FUN_10891d30();
              uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
              FUN_10855a60(*(undefined4 *)(iVar8 + 0x90));
              iVar5 = FUN_117e1b00(*(undefined4 *)(iVar8 + 0x90));
              if (uVar13 != 0) {
                uStack_104 = *(undefined4 *)(iVar8 + 0x94);
                unaff_EBX = *(undefined4 *)(iVar8 + 0x90);
                uStack_100 = *(uint *)(iVar8 + 0x88);
                uStack_fc = unaff_EBX;
                uStack_f8 = (**(code **)(*piStack_210 + 0x18))();
                uStack_f0 = 0;
                uStack_e4 = *(undefined4 *)(uVar13 + 0x4c);
                if (iVar5 != 0) {
                  uStack_e0 = *(undefined4 *)(iVar5 + 0x98);
                }
                uStack_b4 = *(undefined4 *)(uVar13 + 0x40);
                uStack_bc = *(int *)(iVar4 + 0x20) != 0;
                uStack_b0 = puVar12[0x6d];
                iVar11 = iVar4;
                if ((!(bool)uStack_bc) && (iVar5 != 0)) {
                  uStack_bc = FUN_115c4fb0(uVar7,iVar4,*(undefined4 *)(iVar5 + 0x8c),iVar5 + 4);
                  iVar11 = iVar4;
                }
                uStack_e0 = FUN_113fa380(unaff_EBX);
                puStack_dc = *(undefined4 **)(iVar8 + 0x8c);
                puVar6 = &DAT_11d9d32b;
                if (*(undefined1 **)(iVar11 + 0x14) != (undefined1 *)0x0) {
                  puVar6 = *(undefined1 **)(iVar11 + 0x14);
                }
                iVar4 = iVar11;
                CPet__SetName(puVar6);
                uStack_d8 = *(undefined4 *)(iVar8 + 0x9c);
                uStack_b0 = *(undefined4 *)(iVar8 + 0xa0);
                uStack_ac = *(undefined4 *)(iVar8 + 0xa4);
                uStack_a8 = *(undefined4 *)(iVar8 + 0xa8);
                puStack_dc = puVar12;
                iStack_d0 = FUN_11669840();
                iStack_d0 = iStack_d0 - *(int *)(iVar8 + 0x9c);
                puVar9 = *(undefined4 **)(iVar8 + 4);
                if (iStack_d0 < *(int *)(iVar11 + 0xc0)) {
                  iStack_d0 = *(int *)(iVar11 + 0xc0);
                }
                if (puVar9 != *(undefined4 **)(iVar8 + 8)) {
                  do {
                    iVar5 = FUN_113fa380(*puVar9);
                    if (iVar5 < (int)puVar9[1]) {
LAB_109f4342:
                      uStack_100 = uStack_100 & 0xffffff00;
                    }
                    else {
                      bVar10 = (char)uStack_100 == '\0';
                      uStack_100 = CONCAT31(uStack_100._1_3_,1);
                      if (bVar10) goto LAB_109f4342;
                    }
                    FUN_10891ed0(*puVar9,puVar9[1],iVar5);
                    puVar9 = puVar9 + 2;
                  } while (puVar9 != *(undefined4 **)(iVar8 + 8));
                }
                FUN_108920d0(auStack_110);
              }
              FUN_10891e60();
              iVar8 = iVar8 + 0xb0;
            } while (iVar8 != *(int *)(iStack_20c + 0x20));
          }
          if (((uStack_118 & 0x8f) == 3) || (uStack_234 = 0xdeadbeaf, (uStack_118 & 0x8f) == 4)) {
            uStack_234 = uStack_114;
          }
          uVar13 = 0;
          if (iStack_1bc != iStack_1b8) {
            iVar4 = iStack_1bc + 0x5c;
            do {
              iStack_1c4 = iVar4;
              if (uStack_234 <= uVar13) break;
              uStack_22c = 0;
              uStack_228 = 0;
              cVar1 = (**(code **)(*piStack_154 + 0x30))(uStack_14c,uVar13,&uStack_22c);
              if (cVar1 != '\0') {
                FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iVar4 + -0x4c));
                FUN_104d1550("equipID",*(undefined4 *)(iVar4 + -0x50));
                iVar8 = FUN_100e5b40(auStack_58);
                FUN_104d1670("equipName",*(undefined4 *)(iVar8 + 0x14));
                if ((puStack_48 != auStack_5c) && (puStack_48 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_48);
                }
                FUN_104d1550("equipRare",*(undefined4 *)(iVar4 + -0x38));
                FUN_104d1550("itemLevel",*(undefined4 *)(iVar4 + -0x34));
                FUN_104d1550("playerUseLevelMin",*(undefined4 *)(iVar4 + -8));
                FUN_104d1550("playerUseLevelMax",*(undefined4 *)(iVar4 + -4));
                FUN_104d1550("equipCounts",*(undefined4 *)(iVar4 + -0x30));
                FUN_104d1550("upgradeMoney",*(undefined4 *)(iVar4 + -0x2c));
                FUN_104d1550("currentMoney",*(undefined4 *)(iVar4 + -0x28));
                FUN_104d1550("enforceRequirement",*(undefined4 *)(iVar4 + -0x58));
                FUN_104d1550("hunterstarRequirement",*(undefined4 *)(iVar4 + -0x54));
                FUN_104d1550("rankDownLevel",*(undefined4 *)(iVar4 + -0x24));
                FUN_104d1550("enforceDownLevel",*(undefined4 *)(iVar4 + -0x20));
                FUN_104d1550("newRankLevel",*(undefined4 *)(iVar4 + -0x1c));
                FUN_104d15e0("bBindState",*(undefined1 *)(iVar4 + -0x10));
                FUN_104d1550("enforceLevel",*(undefined4 *)(iVar4 + -0x44));
                FUN_104d1550("breakLevel",*(undefined4 *)(iVar4 + -0x40));
                FUN_104d15e0("canBreak",*(undefined1 *)(iVar4 + -0x3c));
                FUN_104d1550("enforceRuleID",*(undefined4 *)(iVar4 + -0xc));
                FUN_104d1550("nCraftCreditID",*(undefined4 *)(iVar4 + 4));
                uVar7 = FUN_113fa380(*(undefined4 *)(iVar4 + 4));
                FUN_104d1550("nOwnCraftCredit",uVar7);
                FUN_104d1550("nCraftCreditMax",*(undefined4 *)(iVar4 + 8));
                FUN_104d1550("nCraftMoney",*(undefined4 *)(iVar4 + 0xc));
                puStack_1a0 = (undefined4 *)0x0;
                uStack_19c = 0;
                iStack_1bc = CONCAT31(iStack_1bc._1_3_,(unaff_SI & 0x8f) == 10);
                cVar1 = (**(code **)(*unaff_EDI + 0x10))
                                  (unaff_EBX,"arrayMaterialData",&puStack_1a0,iStack_1bc);
                if (cVar1 != '\0') {
                  FUN_10460ef0();
                  FUN_10460ef0();
                  iVar4 = FUN_117e1b00(*(undefined4 *)(iVar4 + -0x50));
                  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580(0x18);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x18);
                }
                FUN_104d15e0("equipHasEnoughMaterial",0);
                FUN_104d7c10();
              }
              FUN_104d7c10();
              iStack_1c4 = iVar4 + 0x88;
              iVar8 = iVar4 + 0x2c;
              iVar4 = iStack_1c4;
            } while (iVar8 != iStack_1b8);
          }
          ppuStack_1c0 = &PTR_FUN_11dd2bf4;
          FUN_108923c0();
        }
        FUN_104d7c10();
      }
      puVar12 = puStack_1a0;
      if (((uint)puStack_1a0[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*puStack_1a0 + 8))(puStack_1a0,puStack_1a0[2]);
        *puVar12 = 0;
      }
      puVar12[1] = 2;
      *(undefined1 *)(puVar12 + 2) = 1;
      FUN_104d7c10();
    }
    if ((local_1dc >> 6 & 1) != 0) {
      (**(code **)(*local_1e0 + 8))(&local_1e0,local_1d8);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f85a0 @ 109f85a0  size=1453 ===== */
// calls: CPet::SetName
// strings:
//   "isSameGuild"
//   "isAttack"
//   "shipStatus"
//   "guildName"
//   "captainName"
//   "captainGuild"
//   "playerID"
//   "textFinishTimes"
//   "textTimeReamain"
//   "textLevelName"
//   "monsterIcon"
//   "textLevelCharLevel"
//   "levelID"
//   "occupyHunterText"
//   "occupyTime"
//   "occupyPlayer1"
//   "occupyPlayer2"
//   "occupyPlayer3"
//   "occupyPlayer4"
//   "shipName"

/* [RE-AUTO c0]
   strings:
     ""isSameGuild""
     ""isAttack""
     ""shipStatus""
     ""guildName""
     ""captainName""
     ""captainGuild""
     ""playerID""
     ""textFinishTimes""
     ""textTimeReamain""
     ""textLevelName"" */

void FUN_109f85a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined1 auStack_f4 [8];
  undefined1 auStack_ec [4];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined1 auStack_90 [8];
  int iStack_88;
  byte *pbStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_f4;
  local_9c = CONCAT44(local_9c._4_4_,param_2);
  if (((((param_5 == 3) && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      ((piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0 &&
       (iVar5 = (**(code **)(*piVar2 + 0xb4))(), iVar5 != 0)))) &&
     (iStack_c8 = *(int *)(iVar5 + 0x2abc), iStack_c8 != 0)) {
    FUN_104f4330(param_4);
    if (((byte)*(undefined4 *)(param_4 + 0x1c) & 0x8f) == 5) {
      local_9c = *(undefined8 *)(param_4 + 0x20);
    }
    else {
      local_9c = 0;
    }
    uVar12 = FUN_11174330(local_9c);
    uStack_ac = (undefined4)((ulonglong)uVar12 >> 0x20);
    uStack_b4 = (undefined4)uVar12;
    uVar9 = *(uint *)(param_4 + 0x34) & 0x8f;
    if ((uVar9 == 3) || (uVar9 == 4)) {
      uStack_d0 = *(undefined4 *)(param_4 + 0x38);
    }
    else {
      uStack_d0 = 0xdeadbeaf;
    }
    iVar5 = FUN_11398f30();
    if (iVar5 != 0) {
      iVar5 = FUN_11398f30();
      puStack_80 = auStack_90;
      uVar16 = *(undefined4 *)(iVar5 + 0x20);
      uVar14 = *(undefined4 *)(iVar5 + 0x24);
      puStack_7c = puStack_80;
      FUN_100b62c0();
      iVar5 = FUN_111741a0(uStack_b0,iStack_a8,uVar14,uVar16);
      if ((iVar5 != 0) && (iStack_a8 = FUN_107d7930(*(undefined4 *)(iVar5 + 0x10)), iStack_a8 != 0))
      {
        uStack_a0 = *(undefined4 *)(iStack_a8 + 0x78);
        iVar6 = FUN_117e7460(1);
        if (iVar6 != 0) {
          uStack_a4 = *(undefined4 *)(iVar6 + 4);
          lVar13 = FUN_111f8d20();
          FUN_10a19840();
          uVar16 = (undefined4)((ulonglong)lVar13 >> 0x20);
          uVar9 = *(uint *)(iVar5 + 0x60);
          pbVar10 = (byte *)(iVar5 + 0x20);
          pbVar7 = pbStack_84;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_109f8746:
              uVar8 = -(uint)bVar11 | 1;
              goto LAB_109f874b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_109f8746;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_109f874b:
          if (uVar8 == 0) {
            lVar13 = lVar13 << 0x20;
          }
          else {
            lVar13 = CONCAT44((int)lVar13,1);
          }
          FUN_104d1550("isSameGuild",lVar13,uVar16);
          pbVar10 = (byte *)(iVar5 + 100);
          pbVar7 = pbStack_84;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_109f8791:
              uVar8 = -(uint)bVar11 | 1;
              goto LAB_109f8796;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_109f8791;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar8 = 0;
LAB_109f8796:
          FUN_104d1550("isAttack",uVar8 != 0,uVar16);
          FUN_104d1550("shipStatus",(int)(uVar9 << 0x1d) >> 0x1d);
          FUN_104d1670("guildName",pbStack_84);
          uStack_d0 = 0;
          CPet__SetName(iVar5 + 0x40);
          FUN_104d1790("captainName",&uStack_d4);
          FUN_100e5670();
          uStack_d4 = 0;
          CPet__SetName(iVar5 + 0x20);
          FUN_104d1790("captainGuild",&uStack_d8);
          FUN_100e5670();
          FUN_104d14d0("playerID");
          FUN_104d1440("textFinishTimes",uVar9 >> 3 & 0x1fff);
          FUN_104d1440("textTimeReamain",(*(int *)(iVar5 + 0xc) - iStack_88) + 0x4b0);
          FUN_104d1790("textLevelName",iStack_b8 + 0x1c);
          FUN_104d1550("monsterIcon",uStack_b0);
          FUN_104d1550("textLevelCharLevel",uStack_b4);
          FUN_104d1440("levelID",*(undefined4 *)(iVar5 + 0x10));
          uStack_d8 = 0;
          CPet__SetName(iVar5 + 100);
          FUN_104d1790("occupyHunterText",&uStack_dc);
          FUN_100e5670();
          FUN_104d1440("occupyTime",*(undefined4 *)(iVar5 + 0x14));
          uStack_dc = 0;
          CPet__SetName(iVar5 + 0x84);
          FUN_104d1790("occupyPlayer1",&uStack_e0);
          FUN_100e5670();
          uStack_e0 = 0;
          CPet__SetName(iVar5 + 0xa4);
          FUN_104d1790("occupyPlayer2",&uStack_e4);
          FUN_100e5670();
          uStack_e4 = 0;
          CPet__SetName(iVar5 + 0xc4);
          FUN_104d1790("occupyPlayer3",&uStack_e8);
          FUN_100e5670();
          uStack_e8 = 0;
          CPet__SetName(iVar5 + 0xe4);
          FUN_104d1790("occupyPlayer4",auStack_ec);
          FUN_100e5670();
          iStack_c4 = FUN_109f58d0(uStack_e8);
          if (iStack_c4 != 0) {
            uVar16 = *(undefined4 *)(iStack_c4 + 0x28);
            uStack_a4 = *(undefined4 *)(iStack_c4 + 0x74);
            uVar14 = *(undefined4 *)(iStack_c4 + 0x78);
            uVar3 = *(undefined4 *)(iStack_c4 + 0x7c);
            uVar4 = *(undefined4 *)(iStack_c4 + 0x70);
            pcVar15 = "shipName";
            FUN_104d1670();
            FUN_104d1550("shipId",*(undefined4 *)(iStack_c4 + 0x10),pcVar15,uVar16);
            FUN_104d1550("delicateRewardId",uVar14);
            FUN_104d1550("delicateRewardNum",uVar3);
            FUN_104d1550("normalRewardID",uVar4);
            FUN_104d1550("normalRewardNum",uStack_a4);
            iVar5 = iStack_c4;
            FUN_104d1550("materialNum",*(undefined4 *)(iStack_c4 + 100));
            FUN_104d1550("materialTagType",*(undefined4 *)(iVar5 + 0x60));
          }
        }
      }
      if ((puStack_7c != auStack_90) && (puStack_7c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_7c);
      }
    }
    if ((uStack_bc >> 6 & 1) != 0) {
      (**(code **)(*piStack_c0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109fbd40 @ 109fbd40  size=467 ===== */
// strings:
//   "ReqCurTabData"
//   "ReqResearch"
//   "ReqRefresh"
//   "AS2C_GetCurTabData"
//   "AS2C_GetResearchData"
//   "AS2C_GetLotteryItemListByMonsterType"

/* [RE-AUTO c0]
   strings:
     ""ReqCurTabData""
     ""ReqResearch""
     ""ReqRefresh""
     ""AS2C_GetCurTabData""
     ""AS2C_GetResearchData""
     ""AS2C_GetLotteryItemListByMonsterType"" */

void FUN_109fbd40(void)

{
  code *pcStack_84;
  char *pcStack_80;
  code **ppcStack_7c;
  code ***pppcStack_78;
  code *pcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  undefined4 ***pppuStack_68;
  code **ppcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  undefined4 ***pppuStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  undefined4 ***pppuStack_34;
  undefined4 ***pppuStack_30;
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
  pppuStack_30 = (undefined4 ***)0x11de6100;
  pppuStack_34 = (undefined4 ***)0x109fbd74;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)FUN_109fbf30;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109fbd85;
  FUN_109fd5c0();
  if (((undefined4 ****)pppcStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppcStack_20 != (undefined4 ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109fbd9b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppuStack_34;
  pppcStack_3c = (code ***)0x11de60db;
  pppcStack_40 = (code ***)0x11de60d0;
  pppcStack_44 = (code ***)0x109fbdbb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109fc040;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppuStack_4c = (undefined4 ***)0x109fbdcc;
  FUN_109fd5c0();
  if (((code ****)pppuStack_30 != &pppcStack_44) && ((code ****)pppuStack_30 != (code ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    pppcStack_50 = (code ***)0x109fbde2;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppcStack_44;
  pppuStack_4c = (undefined4 ***)0x11de60e6;
  pppcStack_50 = (code ***)0x11de60dc;
  pppcStack_54 = (code ***)0x109fbe02;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)&LAB_109fc550;
  pppcStack_58 = (code ***)&pppuStack_4c;
  pppcStack_5c = (code ***)0x109fbe13;
  FUN_109fd5c0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109fbe29;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de62aa;
  ppcStack_60 = (code **)0x11de6298;
  ppcStack_64 = (code **)0x109fbe49;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_109fc6a0;
  pppuStack_68 = &pppcStack_5c;
  pppcStack_6c = (code ***)0x109fbe5a;
  FUN_109fd5c0();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109fbe70;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11de62c0;
  ppcStack_70 = (code **)0x11de62ac;
  pcStack_74 = (code *)0x109fbe90;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109fc7b0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x109fbea1;
  FUN_109fd5c0();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x109fbeb7;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11de628c;
  pcStack_80 = "AS2C_GetLotteryItemListByMonsterType";
  pcStack_84 = (code *)0x109fbed7;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109fc880;
  FUN_109fd5c0(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109fde80 @ 109fde80  size=325 ===== */
// strings:
//   "ReqCurTabData"
//   "ReqReward"
//   "ReqExchangePhyCard"
//   "ReqExchangeData"

/* [RE-AUTO c0]
   strings:
     ""ReqCurTabData""
     ""ReqReward""
     ""ReqExchangePhyCard""
     ""ReqExchangeData"" */

void FUN_109fde80(void)

{
  code *pcStack_64;
  char *pcStack_60;
  code **ppcStack_5c;
  code ***pppcStack_58;
  code *pcStack_54;
  code **ppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code **ppcStack_44;
  code **ppcStack_40;
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
  pppcStack_30 = (code ***)0x11de6100;
  pppcStack_34 = (code ***)0x109fdeb4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109fdfe0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109fdec5;
  FUN_109fee50();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x109fdedb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de63f9;
  ppcStack_40 = (code **)0x11de63f0;
  ppcStack_44 = (code **)0x109fdefb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  ppcStack_44 = (code **)FUN_109fec60;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109fdf0c;
  FUN_109fee50();
  if ((pppcStack_30 != &ppcStack_44) && (pppcStack_30 != (code ***)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x109fdf22;
    FUN_10c3d5d0();
  }
  pppcStack_34 = &ppcStack_44;
  pppcStack_4c = (code ***)0x11de640e;
  ppcStack_50 = (code **)0x11de63fc;
  pcStack_54 = (code *)0x109fdf42;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_109feb30;
  pppcStack_58 = (code ***)&pppcStack_4c;
  ppcStack_5c = (code **)0x109fdf53;
  FUN_109fee50();
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    ppcStack_5c = ppcStack_40;
    pcStack_60 = (char *)0x109fdf69;
    FUN_10c3d5d0();
  }
  ppcStack_44 = &pcStack_54;
  ppcStack_5c = (code **)0x11de63df;
  pcStack_60 = "ReqExchangeData";
  pcStack_64 = (code *)0x109fdf89;
  ppcStack_40 = ppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_109fe5d0;
  FUN_109fee50(&ppcStack_5c);
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_50);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109fdfe0 @ 109fdfe0  size=1508 ===== */
// calls: CIllustrateBookInfo::CollectByCategory
// strings:
//   "curSeriesNum"
//   "curCardType"
//   "cardGroupImageUrl"
//   "arrSeries"
//   "arrCardEntry"
//   "mh.view.MonsterCard.vo.MonsterCardEntryVo"
//   "imageUrl"
//   "monsterId"
//   "monsterName"
//   "arrRewards"
//   "mh.model.inventory.vo.BaseItemVo"
//   "count"

/* [RE-AUTO c0]
   strings:
     ""curSeriesNum""
     ""curCardType""
     ""cardGroupImageUrl""
     ""arrSeries""
     ""arrCardEntry""
     ""mh.view.MonsterCard.vo.MonsterCardEntryVo""
     ""imageUrl""
     ""monsterId""
     ""monsterName""
     ""arrRewards"" */

void FUN_109fdfe0(void)

{
  int *piVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *****pppppiVar7;
  uint uVar8;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int ****ppppiStack_e0;
  int ****ppppiStack_dc;
  int ****local_cc;
  int ***pppiStack_c8;
  uint uStack_c4;
  int ****ppppiStack_c0;
  int ****local_b0;
  int ****ppppiStack_ac;
  int iStack_a8;
  int *piStack_a4;
  int ***local_a0;
  uint local_9c;
  int ****local_98;
  undefined4 local_94;
  undefined4 local_90;
  int ***pppiStack_84;
  int ***pppiStack_80;
  uint uStack_7c;
  int ****ppppiStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ****ppppiStack_60;
  int *piStack_54;
  int ***pppiStack_50;
  uint uStack_4c;
  int ****ppppiStack_48;
  int **ppiStack_38;
  undefined2 auStack_34 [10];
  int ***pppiStack_20;
  int ***pppiStack_14;
  int ***pppiStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_cc;
  if (in_stack_00000014 == 1) {
    local_a0 = (int ***)0x0;
    local_9c = in_stack_00000010[1];
    local_94 = in_stack_00000010[3];
    ppppiStack_dc = (int ****)in_stack_00000010[2];
    local_90 = in_stack_00000010[4];
    local_98 = ppppiStack_dc;
    if ((local_9c >> 6 & 1) != 0) {
      local_a0 = (int ***)*in_stack_00000010;
      ppppiStack_e0 = &local_a0;
      (*(code *)(*local_a0)[1])();
    }
    ppppiStack_dc = (int ****)&local_cc;
    local_cc = (int ****)0x0;
    ppppiStack_e0 = (int ****)0x11de63e0;
    local_b0 = (int ****)0x0;
    FUN_104d4800();
    FUN_104d4800("curCardType",&local_b0);
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      ppppiStack_dc = (int ****)0x109fe0b5;
      iVar4 = (**(code **)(*piVar1 + 0xb4))();
      ppppiVar2 = local_cc;
      if ((iVar4 != 0) &&
         (pppiStack_84 = *(int ****)(iVar4 + 0x2b1c), (int ****)pppiStack_84 != (int ****)0x0)) {
        ppppiStack_dc = local_cc;
        ppppiStack_e0 = (int ****)0x109fe0d9;
        iVar4 = FUN_109c5b50();
        if (iVar4 != 0) {
          ppppiStack_dc = (int ****)0x109fe0ef;
          iVar5 = FUN_109c5630();
          if (iVar5 != 0) {
            ppppiStack_dc = local_b0;
            ppppiStack_e0 = (int ****)0x109fe102;
            ppppiStack_e0 = (int ****)FUN_11809ce0();
            local_cc = (int ****)FUN_109fdca0();
            if ((int *****)local_cc != (int *****)0x0) {
              ppppiStack_e0 = (int ****)&ppppiStack_ac;
              ppppiStack_dc = (int ****)0x1;
              ppppiStack_ac = (int ****)0x0;
              iStack_a8 = 0;
              piStack_a4 = (int *)0x0;
              CIllustrateBookInfo__CollectByCategory(ppppiVar2);
              FUN_104d1790("cardGroupImageUrl",iVar4 + 0x1c);
              uStack_74 = 0;
              uStack_70 = 0;
              FUN_11a98a70(&uStack_74);
              FUN_104d12b0("arrSeries",&ppppiStack_78);
              iVar4 = FUN_109d4570();
              pppppiVar7 = (int *****)0x0;
              if (0 < iVar4) {
                do {
                  ppppiStack_e0 = (int ****)0x109fe19c;
                  ppppiStack_dc = (int ****)pppppiVar7;
                  iVar5 = FUN_109fdd40();
                  if (iVar5 == 0) goto LAB_109fe552;
                  if (*(int *)(iVar5 + 0x44) != 0) {
                    ppppiStack_dc = (int ****)auStack_34;
                    ppppiStack_e0 = (int ****)0x109fe1bd;
                    iVar5 = FUN_100e5b40();
                    ppppiStack_e0 = (int ****)&local_cc;
                    uStack_c4 = *(uint *)(iVar5 + 0x14);
                    local_cc = (int ****)0x0;
                    pppiStack_c8 = (int ***)&DAT_00000006;
                    (**(code **)(*piStack_6c + 0x3c))(uStack_64);
                    FUN_104d7c10();
                    if ((pppiStack_20 != (int ***)auStack_34) && (pppiStack_20 != (int ***)0x0)) {
                      ppppiStack_dc = (int ****)pppiStack_20;
                      ppppiStack_e0 = (int ****)0x109fe20b;
                      FUN_10c3d5d0();
                    }
                  }
                  pppppiVar7 = (int *****)((int)pppppiVar7 + 1);
                } while ((int)pppppiVar7 < iVar4);
              }
              ppppiStack_dc = &pppiStack_80;
              pppiStack_80 = (int ***)0x0;
              uStack_7c = 0;
              ppppiStack_e0 = (int ****)0x109fe22f;
              FUN_11a98a70();
              ppppiStack_e0 = &pppiStack_84;
              FUN_104d12b0("arrCardEntry");
              uVar8 = 0;
              if (iStack_a8 - (int)ppppiStack_ac >> 2 != 0) {
                do {
                  ppppiVar2 = (int ****)ppppiStack_ac[uVar8];
                  if (ppppiVar2 == (int ****)0x0) goto LAB_109fe521;
                  ppppiStack_dc = (int ****)0x0;
                  ppppiStack_e0 = (int ****)0x0;
                  pppiStack_c8 = (int ***)0x0;
                  uStack_c4 = 0;
                  FUN_11a98de0(&pppiStack_c8,"mh.view.MonsterCard.vo.MonsterCardEntryVo");
                  FUN_104d1790("imageUrl",ppppiVar2 + 0x18);
                  FUN_104d1550("monsterId",ppppiVar2[4]);
                  FUN_104d1790("monsterName",ppppiVar2 + 5);
                  uVar6 = FUN_11537410(ppppiVar2[4],ppppiStack_c0);
                  FUN_104d1550(&DAT_11dbdc0c,uVar6);
                  (*(code *)(*local_98)[0xf])(local_90,&ppppiStack_e0);
                  if ((uStack_c4 >> 6 & 1) != 0) {
                    ppppiStack_e0 = &pppiStack_c8;
                    ppppiStack_dc = ppppiStack_c0;
                    (*(code *)(*pppiStack_c8)[2])();
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < (uint)(iStack_a8 - (int)ppppiStack_ac >> 2));
              }
              ppppiStack_dc = &pppiStack_50;
              pppiStack_50 = (int ***)0x0;
              uStack_4c = 0;
              ppppiStack_e0 = (int ****)0x109fe35c;
              FUN_11a98a70();
              ppppiStack_e0 = (int ****)(uint)(((byte)local_a0 & 0x8f) == 10);
              (**(code **)(*piStack_a4 + 0x14))(local_9c,"arrRewards",&piStack_54);
              uVar8 = 0;
              if ((int)local_cc[6] - (int)local_cc[5] >> 3 != 0) {
                do {
                  ppppiVar3 = local_cc;
                  ppppiStack_dc = (int ****)0x0;
                  ppppiStack_e0 = (int ****)0x0;
                  pppiStack_c8 = (int ***)0x0;
                  uStack_c4 = 0;
                  FUN_11a98de0(&pppiStack_c8,"mh.model.inventory.vo.BaseItemVo");
                  ppppiVar2 = (int ****)(ppppiVar3[5] + uVar8 * 2);
                  FUN_104d1550(&DAT_11dbb0b4,ppppiVar3[5][uVar8 * 2]);
                  FUN_104d1550("count",ppppiVar2[1]);
                  iVar4 = FUN_10540d00(*ppppiVar2);
                  if (iVar4 == 0) {
                    if ((uStack_c4 >> 6 & 1) != 0) {
                      ppppiStack_e0 = &pppiStack_c8;
                      ppppiStack_dc = ppppiStack_c0;
                      (*(code *)(*pppiStack_c8)[2])();
                    }
                    break;
                  }
                  pppiStack_14 = (int ***)auStack_34;
                  auStack_34[0] = 0;
                  ppppiStack_dc = (int ****)auStack_34;
                  ppppiStack_e0 = (int ****)0x109fe432;
                  pppiStack_10 = pppiStack_14;
                  FUN_100e5b60();
                  ppppiStack_e0 = (int ****)pppiStack_14;
                  FUN_104d1700(&DAT_11dbac80);
                  if ((pppiStack_14 != &ppiStack_38) && ((int ****)pppiStack_14 != (int ****)0x0)) {
                    ppppiStack_e0 = (int ****)pppiStack_14;
                    FUN_10c3d5d0();
                  }
                  ppppiStack_e0 = (int ****)&local_cc;
                  (**(code **)(*piStack_54 + 0x3c))(uStack_4c);
                  if ((uStack_c4 >> 6 & 1) != 0) {
                    ppppiStack_e0 = &pppiStack_c8;
                    ppppiStack_dc = ppppiStack_c0;
                    (*(code *)(*pppiStack_c8)[2])();
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < (uint)((int)local_cc[6] - (int)local_cc[5] >> 3));
              }
              if ((uStack_4c >> 6 & 1) != 0) {
                ppppiStack_e0 = &pppiStack_50;
                ppppiStack_dc = ppppiStack_48;
                (*(code *)(*pppiStack_50)[2])();
                pppiStack_50 = (int ***)0x0;
              }
              uStack_4c = 0;
LAB_109fe521:
              if ((uStack_7c >> 6 & 1) != 0) {
                ppppiStack_e0 = &pppiStack_80;
                ppppiStack_dc = ppppiStack_78;
                (*(code *)(*pppiStack_80)[2])();
                pppiStack_80 = (int ***)0x0;
              }
              uStack_7c = 0;
LAB_109fe552:
              if ((uStack_64 >> 6 & 1) != 0) {
                ppppiStack_e0 = &pppiStack_68;
                ppppiStack_dc = ppppiStack_60;
                (*(code *)(*pppiStack_68)[2])();
                pppiStack_68 = (int ***)0x0;
              }
              uStack_64 = 0;
              if ((int *****)ppppiStack_ac != (int *****)0x0) {
                ppppiStack_e0 = (int ****)0x109fe58d;
                ppppiStack_dc = ppppiStack_ac;
                FUN_10c3d5d0();
              }
            }
          }
        }
      }
    }
    if ((local_9c >> 6 & 1) != 0) {
      ppppiStack_e0 = &local_a0;
      ppppiStack_dc = local_98;
      (*(code *)(*local_a0)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109fe5d0 @ 109fe5d0  size=1361 ===== */
// strings:
//   "curSeriesNum"
//   "curCardType"
//   "arrExchangeCostItem"
//   "arrExchangeCostItemOwnNum"
//   "mh.model.inventory.vo.BaseItemVo"
//   "count"
//   "arrExchangeGainItem"
//   "ownCreditNum"
//   "costNum"
//   "seriesName"
//   "cardTypeName"
//   "imageUrl"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""curSeriesNum""
     ""curCardType""
     ""arrExchangeCostItem""
     ""arrExchangeCostItemOwnNum""
     ""mh.model.inventory.vo.BaseItemVo""
     ""count""
     ""arrExchangeGainItem""
     ""ownCreditNum""
     ""costNum""
     ""seriesName"" */

void FUN_109fe5d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int ****ppppiVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int ****ppppiStack_c4;
  uint uVar7;
  int ****local_b4;
  int ***pppiStack_b0;
  uint uStack_ac;
  int ****ppppiStack_a8;
  undefined4 uStack_9c;
  int iStack_98;
  int ****local_94;
  int *local_90;
  uint local_8c;
  int ****local_88;
  undefined4 local_84;
  undefined4 local_80;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  int *piStack_64;
  int ****ppppiStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_54 [4];
  int ***pppiStack_50;
  uint uStack_4c;
  int ****ppppiStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int ****ppppiStack_30;
  
  if (in_stack_00000014 == 1) {
    local_90 = (int *)0x0;
    local_8c = in_stack_00000010[1];
    local_84 = in_stack_00000010[3];
    ppppiStack_c4 = (int ****)in_stack_00000010[2];
    local_80 = in_stack_00000010[4];
    local_88 = ppppiStack_c4;
    if ((local_8c >> 6 & 1) != 0) {
      local_90 = (int *)*in_stack_00000010;
      (**(code **)(*local_90 + 4))(&local_90);
    }
    ppppiStack_c4 = (int ****)&local_b4;
    local_b4 = (int ****)0x0;
    local_94 = (int ****)0x0;
    FUN_104d4800("curSeriesNum");
    FUN_104d4800("curCardType",&local_94);
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) {
      ppppiStack_c4 = (int ****)0x109fe694;
      piStack_70 = (int *)(**(code **)(*piVar2 + 0xb4))();
      if (piStack_70 != (int *)0x0) {
        ppppiStack_c4 = local_b4;
        iStack_74 = FUN_109c5b50();
        ppppiVar3 = local_94;
        if (iStack_74 != 0) {
          ppppiStack_c4 = (int ****)0x109fe6c5;
          iStack_6c = FUN_109c5630();
          if (iStack_6c != 0) {
            ppppiStack_c4 = ppppiVar3;
            uVar4 = FUN_11809c70();
            iVar5 = FUN_109fdca0(uVar4);
            if (iVar5 != 0) {
              ppppiStack_c4 = &pppiStack_50;
              pppiStack_50 = (int ***)0x0;
              uStack_4c = 0;
              FUN_11a98a70();
              FUN_104d12b0("arrExchangeCostItem",auStack_54);
              iStack_98 = piStack_70[0xb47];
              if (iStack_98 != 0) {
                ppppiStack_c4 = &pppiStack_68;
                pppiStack_68 = (int ***)0x0;
                piStack_64 = (int *)0x0;
                FUN_11a98a70();
                FUN_104d12b0("arrExchangeCostItemOwnNum",&iStack_6c);
                uVar7 = 0;
                if (*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 3 != 0) {
                  do {
                    local_b4 = (int ****)0x0;
                    pppiStack_b0 = (int ***)0x0;
                    FUN_11a98de0(&local_b4,"mh.model.inventory.vo.BaseItemVo",0,0);
                    puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x14) + uVar7 * 8);
                    FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(*(int *)(iVar5 + 0x14) + uVar7 * 8));
                    FUN_104d1550("count",puVar1[1]);
                    iVar6 = FUN_10540d00(*puVar1);
                    if (iVar6 == 0) {
                      FUN_104d7c10();
                      goto LAB_109fea6d;
                    }
                    FUN_104d1790(&DAT_11dbac80,iVar6 + 0x14);
                    (**(code **)(*piStack_64 + 0x3c))(uStack_5c,&ppppiStack_c4);
                    piStack_38 = (int *)FUN_113fa380(*puVar1);
                    uStack_40 = 0;
                    uStack_3c = 4;
                    (*(code *)(*local_88)[0xf])(local_80,&uStack_40);
                    FUN_104d7c10();
                    FUN_104d7c10();
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (uint)(*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 3));
                }
                uStack_3c = 0;
                piStack_38 = (int *)0x0;
                FUN_11a98a70(&uStack_3c);
                FUN_104d12b0("arrExchangeGainItem",&uStack_40);
                uVar4 = FUN_11809ca0(uStack_9c);
                iStack_98 = FUN_109fdca0(uVar4);
                if (iStack_98 != 0) {
                  uVar7 = 0;
                  if (*(int *)(iStack_98 + 0x18) - *(int *)(iStack_98 + 0x14) >> 3 != 0) {
                    do {
                      iVar5 = iStack_98;
                      ppppiStack_c4 = (int ****)0x0;
                      pppiStack_b0 = (int ***)0x0;
                      uStack_ac = 0;
                      FUN_11a98de0(&pppiStack_b0,"mh.model.inventory.vo.BaseItemVo",0);
                      puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x14) + uVar7 * 8);
                      FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(*(int *)(iVar5 + 0x14) + uVar7 * 8)
                                  );
                      FUN_104d1550("count",puVar1[1]);
                      iVar5 = FUN_10540d00(*puVar1);
                      if (iVar5 == 0) {
                        if ((uStack_ac >> 6 & 1) != 0) {
                          ppppiStack_c4 = ppppiStack_a8;
                          (*(code *)(*pppiStack_b0)[2])(&pppiStack_b0);
                        }
                        goto LAB_109fea2e;
                      }
                      ppppiStack_c4 = (int ****)(iVar5 + 0x14);
                      FUN_104d1790(&DAT_11dbac80);
                      ppppiStack_c4 = &pppiStack_b0;
                      (**(code **)(*piStack_38 + 0x3c))(ppppiStack_30);
                      if ((uStack_ac >> 6 & 1) != 0) {
                        ppppiStack_c4 = ppppiStack_a8;
                        (*(code *)(*pppiStack_b0)[2])(&pppiStack_b0);
                      }
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < (uint)(*(int *)(iStack_98 + 0x18) - *(int *)(iStack_98 + 0x14)
                                           >> 3));
                  }
                  ppppiStack_c4 = (int ****)0x1;
                  uVar4 = (**(code **)(*piStack_70 + 0x244))();
                  FUN_104d1550("ownCreditNum",uVar4);
                  FUN_104d1550("costNum",*(undefined4 *)(iStack_78 + 0x48));
                  FUN_104d1790("seriesName",iStack_78 + 0x18);
                  FUN_104d1790("cardTypeName",piStack_70 + 5);
                  FUN_104d1790("imageUrl",iStack_78 + 0x1c);
                }
LAB_109fea2e:
                if ((uStack_34 >> 6 & 1) != 0) {
                  ppppiStack_c4 = ppppiStack_30;
                  (**(code **)(*piStack_38 + 8))(&piStack_38);
                  piStack_38 = (int *)0x0;
                }
                uStack_34 = 0;
LAB_109fea6d:
                if (((uint)piStack_64 >> 6 & 1) != 0) {
                  ppppiStack_c4 = ppppiStack_60;
                  (*(code *)(*pppiStack_68)[2])(&pppiStack_68);
                  pppiStack_68 = (int ***)0x0;
                }
                piStack_64 = (int *)0x0;
              }
              if ((uStack_4c >> 6 & 1) != 0) {
                ppppiStack_c4 = ppppiStack_48;
                (*(code *)(*pppiStack_50)[2])(&pppiStack_50);
                pppiStack_50 = (int ***)0x0;
              }
              uStack_4c = 0;
            }
          }
        }
      }
    }
    if ((local_8c >> 6 & 1) != 0) {
      ppppiStack_c4 = local_88;
      (**(code **)(*local_90 + 8))(&local_90);
    }
  }
  return;
}



/* ===== FUN_10a03930 @ 10a03930  size=158 ===== */
// calls: CPlayerVIPLevelUpInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CPlayerVIPLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerVIPLevelUpInfo::GetManagers
   strings:
     ""CPlayerVIPLevelUpInfo"" */

undefined4 FUN_10a03930(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddaaec;
  puVar2 = (undefined4 *)CPlayerVIPLevelUpInfo__GetManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CPlayerVIPLevelUpInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bff44 & 1) == 0) {
        DAT_123bff44 = DAT_123bff44 | 1;
        FUN_1093aa30();
        FUN_11a8911f(&LAB_11c78000);
      }
      puVar2 = &DAT_123bff0c;
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



/* ===== FUN_10b5f4f0 @ 10b5f4f0  size=324 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "RequireCraftMaterialId"
//   "EquipTypeSelcted"
//   "EquipSubTypeSelcted"
//   "ForgePagePre"
//   "ForgePageNext"
//   "OnStartForge"
//   "OnForgeClose"
//   "ForgeChk"
//   "RefreshForgeView"

/* [RE-AUTO c0]
   strings:
     ""RequireCraftMaterialId""
     ""EquipTypeSelcted""
     ""EquipSubTypeSelcted""
     ""ForgePagePre""
     ""ForgePageNext""
     ""OnStartForge""
     ""OnForgeClose""
     ""ForgeChk""
     ""RefreshForgeView"" */

undefined4 * __fastcall FUN_10b5f4f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  
  *param_1 = &PTR_FUN_11cc7b84;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString("RequireCraftMaterialId",extraout_ECX,FUN_10b5f680);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("EquipTypeSelcted",extraout_ECX_00,FUN_10b5f840);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("EquipSubTypeSelcted",extraout_ECX_01,&DAT_10b5f880);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("ForgePagePre",extraout_ECX_02,&DAT_10b5f890);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("ForgePageNext",extraout_ECX_03,&DAT_10b5f8a0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnStartForge",extraout_ECX_04,FUN_10b5f8b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnForgeClose",extraout_ECX_05,&DAT_10b5f900);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("ForgeChk",extraout_ECX_06,&DAT_10b5f910);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("RefreshForgeView",extraout_ECX_07,&DAT_10b5f920);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10b5f680 @ 10b5f680  size=445 ===== */
// strings:
//   "CCraftInfo"

/* [RE-AUTO c0]
   strings:
     ""CCraftInfo"" */

void FUN_10b5f680(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_14;
  undefined1 local_13;
  int local_10;
  undefined1 local_c;
  undefined1 local_5;
  
  iVar6 = *(int *)(param_2 + 8);
  if (iVar6 < 1) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  piVar2 = (int *)FUN_11162d90();
  if (piVar2 != (int *)0x0) {
    param_2 = (**(code **)(*piVar2 + 0x18))(iVar6);
    iVar3 = FUN_10d17440();
    if (iVar3 != 0) {
      FUN_10d17440();
      iVar3 = FUN_10d17870();
      if (iVar3 != 0) {
        FUN_10d17440();
        piVar4 = (int *)FUN_10d17870();
        (**(code **)(*piVar4 + 4))(0x10b,&param_2);
      }
    }
  }
  local_5 = (**(code **)(*piVar2 + 0x1c))(iVar6);
  param_2 = param_2 & 0xffffff;
  iVar3 = FUN_108041a0(0,"CCraftInfo",0);
  if ((((iVar6 == -1) || (iVar5 = *(int *)(iVar3 + 0x28), iVar5 == 0)) ||
      (iVar6 = iVar6 - *(int *)(iVar3 + 0x30), iVar6 < 0)) || (*(int *)(iVar3 + 0x24) <= iVar6)) {
LAB_10b5f79f:
    iVar6 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar6 / iVar5) * 4);
    if (iVar3 == 0) goto LAB_10b5f79f;
    iVar6 = *(int *)(iVar3 + (iVar6 % iVar5) * 4);
    if ((iVar6 != 0) && (iVar1 != 0)) {
      iVar3 = FUN_1025b060();
      if ((iVar3 < *(int *)(iVar6 + 0x80)) &&
         (iVar3 = FUN_1025b060(), iVar3 < *(int *)(iVar6 + 0x80))) {
        iVar3 = FUN_1025b060();
        iVar5 = FUN_1025b060();
        if (iVar5 + iVar3 < *(int *)(iVar6 + 0x80)) goto LAB_10b5f7a1;
      }
      local_13 = 1;
      goto LAB_10b5f7a4;
    }
  }
LAB_10b5f7a1:
  local_13 = param_2._3_1_;
LAB_10b5f7a4:
  local_10 = 0;
  local_14 = local_5;
  local_c = 0;
  if ((iVar1 == 0) || (iVar6 == 0)) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_113f9300(3,*(undefined4 *)(iVar6 + 0x5c),0);
    iVar1 = FUN_113f9300(0,*(undefined4 *)(iVar6 + 0x5c),0);
    local_10 = local_10 + iVar1;
    iVar1 = FUN_113f9300(2,*(undefined4 *)(iVar6 + 0x5c),0);
    local_10 = local_10 + iVar1;
    iVar6 = FUN_113f9300(10,*(undefined4 *)(iVar6 + 0x5c),0);
    local_10 = local_10 + iVar6;
  }
  FUN_10d17440();
  piVar2 = (int *)FUN_10d17870();
  (**(code **)(*piVar2 + 4))(0x3d,&local_14);
  return;
}



/* ===== FUN_10b611b0 @ 10b611b0  size=849 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPlayerLevelUpInfo::GetInfoManager, CPet::SetName
// strings:
//   "CPlayerLevelUpInfo"
//   "CExplimitInfo"

/* [RE-AUTO c0]
   strings:
     ""CPlayerLevelUpInfo""
     ""CExplimitInfo"" */

void FUN_10b611b0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = CPlayer__GetHuntRankOrCount();
  iVar4 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar4 + 0x28), iVar5 != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar5) * 4);
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + (iVar3 % iVar5) * 4);
      goto LAB_10b61231;
    }
  }
  iVar3 = 0;
LAB_10b61231:
  FUN_105439e0();
  cVar2 = FUN_1139a7e0();
  if (cVar2 == '\0') {
    local_44 = FUN_1025b060();
    local_40[0] = *(undefined4 *)(iVar3 + 0x14);
    local_38 = FUN_1025b060();
    local_30 = 0;
    local_38 = FUN_1025b060();
    local_34 = FUN_1025b060();
  }
  else {
    cVar2 = FUN_11399090(&local_44,local_40);
    if (cVar2 == '\0') {
      local_44 = 0;
      local_40[0] = 1;
    }
    local_30 = 1;
    local_38 = 0;
    local_34 = 0;
    iVar4 = FUN_11399ac0(local_24);
    if ((0 < iVar4) && (iVar4 = FUN_107d7930(iVar4), iVar4 != 0)) {
      puVar8 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar4 + 0x1c) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(iVar4 + 0x1c);
      }
      CPet__SetName(puVar8);
    }
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = FUN_1025b060();
  local_30 = FUN_1139a7e0();
  local_30 = local_30 & 0xff;
  iVar4 = CPlayer__GetHuntRankOrCount();
  iVar5 = FUN_108dea50(0,"CExplimitInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar5 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar5 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / *(int *)(iVar5 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar4 = *(int *)(iVar1 + (iVar4 % *(int *)(iVar5 + 0x28)) * 4), iVar4 != 0 &&
        (*(int *)(iVar4 + 0x14) != 0)))) {
      local_2c = *(undefined4 *)(iVar4 + 0x1c);
      local_28 = *(undefined4 *)(iVar4 + 0x18);
    }
  }
  uVar6 = FUN_113974a0(&local_8,&local_c);
  iVar4 = FUN_116bd200();
  local_14 = *(undefined4 *)(iVar4 + 0x30);
  local_1c = local_8;
  local_18 = local_c;
  local_10 = uVar6;
  FUN_10d17440();
  piVar7 = (int *)FUN_10d17870();
  (**(code **)(*piVar7 + 4))(0x87,&local_44);
  FUN_10546720();
  local_7c = FUN_1025b060();
  local_78 = *(undefined4 *)(iVar3 + 0x14);
  local_70 = FUN_1025b060();
  cVar2 = FUN_1139a680();
  local_68 = (uint)(cVar2 == '\0');
  local_70 = FUN_1025b060();
  local_6c = FUN_1025b060();
  local_64 = 0;
  local_60 = 0;
  local_5c = FUN_1025b060();
  iVar3 = CPlayer__GetHuntRankOrCount();
  iVar4 = FUN_108dea50(0,"CExplimitInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar4 + 0x28), iVar5 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar5) * 4);
    if ((iVar4 != 0) &&
       ((iVar3 = *(int *)(iVar4 + (iVar3 % iVar5) * 4), iVar3 != 0 && (*(int *)(iVar3 + 0x14) != 0))
       )) {
      local_64 = *(undefined4 *)(iVar3 + 0x1c);
      local_60 = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  uVar6 = FUN_113974a0(&local_8,&local_c);
  iVar3 = FUN_116bd200();
  local_4c = *(undefined4 *)(iVar3 + 0x30);
  local_54 = local_8;
  local_50 = local_c;
  local_48 = uVar6;
  FUN_10d17440();
  piVar7 = (int *)FUN_10d17870();
  (**(code **)(*piVar7 + 4))(0x252,&local_7c);
  FUN_100e5670();
  FUN_100e5670();
  return;
}



/* ===== FUN_10b61860 @ 10b61860  size=727 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPlayerLevelUpInfo::GetInfoManager, CPet::SetName
// strings:
//   "CPlayerLevelUpInfo"

/* [RE-AUTO c0]
   strings:
     ""CPlayerLevelUpInfo"" */

void FUN_10b61860(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iVar3 != 0) {
    iVar3 = CPlayer__GetHuntRankOrCount();
    iVar4 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
         (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
        ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))))
       ) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
      if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
        FUN_105439e0();
        cVar2 = FUN_1139a7e0();
        if (cVar2 == '\0') {
          local_44 = FUN_1025b060();
          local_40 = *(undefined4 *)(iVar3 + 0x14);
          local_3c = 1000;
          local_38 = FUN_1025b060();
          local_34 = FUN_1025b060();
          local_30 = 0;
        }
        else {
          cVar2 = FUN_11399090(&local_44,&local_40);
          if (cVar2 == '\0') {
            local_44 = 0;
            local_40 = 1;
          }
          local_30 = 1;
          local_38 = 0;
          local_34 = 0;
          local_24 = FUN_1025b060();
          iVar4 = FUN_11399ac0(local_24);
          if ((0 < iVar4) && (iVar4 = FUN_107d7930(iVar4), iVar4 != 0)) {
            puVar7 = &DAT_11d9d32b;
            if (*(undefined1 **)(iVar4 + 0x1c) != (undefined1 *)0x0) {
              puVar7 = *(undefined1 **)(iVar4 + 0x1c);
            }
            CPet__SetName(puVar7);
          }
        }
        local_2c = 0;
        local_28 = 0;
        local_30 = FUN_1139a7e0();
        local_30 = local_30 & 0xff;
        uVar5 = CPlayer__GetHuntRankOrCount();
        iVar4 = FUN_108d1810(uVar5);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
          local_28 = *(undefined4 *)(iVar4 + 0x18);
          local_2c = *(undefined4 *)(iVar4 + 0x1c);
        }
        uVar5 = FUN_113974a0(&local_8,&local_c);
        iVar4 = FUN_116bd200();
        local_14 = *(undefined4 *)(iVar4 + 0x30);
        local_1c = local_8;
        local_18 = local_c;
        local_10 = uVar5;
        FUN_10d17440();
        piVar6 = (int *)FUN_10d17870();
        (**(code **)(*piVar6 + 4))(0x87,&local_44);
        FUN_10546720();
        local_7c = FUN_1025b060();
        local_78 = *(undefined4 *)(iVar3 + 0x14);
        local_74 = 1000;
        local_70 = FUN_1025b060();
        local_6c = FUN_1025b060();
        local_64 = 0;
        local_60 = 0;
        cVar2 = FUN_1139a680();
        local_68 = (uint)(cVar2 == '\0');
        uVar5 = CPlayer__GetHuntRankOrCount();
        iVar3 = FUN_108d1810(uVar5);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
          local_60 = *(undefined4 *)(iVar3 + 0x18);
          local_64 = *(undefined4 *)(iVar3 + 0x1c);
        }
        uVar5 = FUN_113974a0(&local_8,&local_c);
        iVar3 = FUN_116bd200();
        local_4c = *(undefined4 *)(iVar3 + 0x30);
        local_54 = local_8;
        local_50 = local_c;
        local_48 = uVar5;
        FUN_10d17440();
        piVar6 = (int *)FUN_10d17870();
        (**(code **)(*piVar6 + 4))(0x252,&local_7c);
        FUN_100e5670();
        FUN_100e5670();
      }
    }
  }
  return;
}



/* ===== FUN_10b629d0 @ 10b629d0  size=78 ===== */
// calls: CPlayerLevelUpInfo::GetInfoManager
// strings:
//   "CPlayerLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo"" */

undefined4 FUN_10b629d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10b74240 @ 10b74240  size=151 ===== */
// calls: memset
// strings:
//   "&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&ext="
//   "&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&qt=levelUp&ext="
//   "tgbang"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&ext=""
     
   ""&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&qt=levelUp&ext=""
     ""tgbang"" */

void FUN_10b74240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,char param_14)

{
  char *pcVar1;
  undefined1 local_828;
  undefined1 local_827 [2083];
  
  local_828 = 0;
  memset(local_827,0,0x822);
  if (param_14 == '\0') {
    pcVar1 = 
    "&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&ext=";
  }
  else {
    pcVar1 = 
    "&daid=45&game=mho&uin=%u&world=%u%02u&roleid=%llu&level=%d&role=%s&sex=%d&jobid=1&qt=levelUp&ext="
    ;
  }
  FUN_100ec3b0(&local_828,0x823,pcVar1,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
               param_13);
  FUN_10b73f00(param_1,"tgbang",&local_828,0x1000201,param_2,param_3,0,param_4,param_5);
  return;
}



/* ===== FUN_10d1d7f0 @ 10d1d7f0  size=5746 ===== */
// strings:
//   "MH_INVALID_ID"
//   "eResourceQuality_Default"
//   "eResourceQuality_Normal"
//   "eResourceQuality_Rich"
//   "eLootType_Mine"
//   "eLootType_Herb"
//   "eLootType_Insect"
//   "eLootType_Fish"
//   "eLootType_Mushroom"
//   "eLootType_Honey"
//   "eLootType_Stone"
//   "eLootType_Shit"
//   "eLootType_Remain"
//   "eLootType_Body"
//   "eLootType_BrokenPart"
//   "eLootType_Bone"
//   "eLootType_Egg"
//   "eLootType_Web"
//   "eLootType_Other"
//   "E_EVTTYPE_BG_ENTITY_ENTER"

/* [RE-AUTO c0]
   strings:
     ""MH_INVALID_ID""
     ""eResourceQuality_Default""
     ""eResourceQuality_Normal""
     ""eResourceQuality_Rich""
     ""eLootType_Mine""
     ""eLootType_Herb""
     ""eLootType_Insect""
     ""eLootType_Fish""
     ""eLootType_Mushroom""
     ""eLootType_Honey"" */

void __fastcall FUN_10d1d7f0(int param_1)

{
  int local_14;
  int *local_10;
  
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("MH_INVALID_ID",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Default",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Normal",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Rich",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Mine",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Herb",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Insect",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Fish",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Mushroom",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Honey",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Stone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Shit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41100000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Remain",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41200000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Body",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41300000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_BrokenPart",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Bone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Egg",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41880000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Web",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41900000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Other",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_42d00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_BG_ENTITY_ENTER",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_42d20000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_BG_ENTITY_LEAVE",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_447e4000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_PLAYER_GUIDE_UPDATE",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_44a2e000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_MONSTER_DEAD",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_None",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Meat",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Herb",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Fruit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Mushroom",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Mine",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Fish",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Insect",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Flower",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41100000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Honey",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41200000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Shell",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41300000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Sleep",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Water",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41500000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Escape",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41600000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Bone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41700000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Stool",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Enter",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41880000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Exit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41900000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Tail",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41980000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Other",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_EnterInstance",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_GMCommand",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LevelLoading",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LevelLoaded",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_SpawnLocalPlayer",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LeaveInstanceReq",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_PlayerDialogueRsp",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  FUN_10d1cc20("eMHGameEventID_ShowSystemConfig",8);
  FUN_10d1cc20("eMHGameEventID_AddCraft",9);
  FUN_10d1cc20("eMHGameEventID_BeginCraft",10);
  FUN_10d1cc20("eMHGameEventID_BeginLoot",0xb);
  FUN_10d1cc20("eMHGameEventID_Resetconnected",0xc);
  FUN_10d1cc20("eMHGameEventID_AutoLaunch",0xd);
  FUN_10d1cc20("eMHGameEventID_RoleListResponse",0xe);
  FUN_10d1cc20("eMHGameEventID_SelectRoleResponse",0xf);
  FUN_10d1cc20("eMHGameEventID_GotoMap",0x10);
  FUN_10d1cc20("eMHGameEventID_GotoMapResponse",0x11);
  FUN_10d1cc20("eMHGameEventID_MoveToDest",0x12);
  FUN_10d1cc20("eMHGameEventID_ChangeOrient",0x13);
  FUN_10d1cc20("eMHGameEventID_MainInstanceEnterAgree",0x14);
  FUN_10d1cc20("eMHGameEventID_MainInstanceSynOpt",0x15);
  FUN_10d1cc20("eMHGameEventID_MainInstanceEnter",0x16);
  FUN_10d1cc20("eMHGameEventID_FadingInStartNotify",0x17);
  FUN_10d1cc20("eMHGameEventID_InstanceClearingStart",0x18);
  FUN_10d1cc20("eMHGameEventID_InstanceClearingFinish",0x19);
  FUN_10d1cc20("eMHGameEventID_WebPageDownloadNotify",0x1a);
  FUN_10d1cc20("eMHGameEventID_KeyMapInputNotify",0x1b);
  FUN_10d1cc20("eMHGameEventID_NewCreateRoleRsp",0x1c);
  FUN_10d1cc20("eMHGameEventID_NewRoleListRsp",0x1d);
  FUN_10d1cc20("eMHGameEventID_NewDeleteRoleRsp",0x1e);
  FUN_10d1cc20("eMHGameEventID_NewSelecteRoleRsp",0x1f);
  FUN_10d1cc20("eMHGameEventID_FangchengmiTimeNotify",0x20);
  FUN_10d1cc20("eMHGameEventID_ChangeBullet",0x21);
  FUN_10d1cc20("eMHGameEventID_GameStageChanged",0x22);
  FUN_10d1cc20("eMHGameEventID_ChangeCharacterAvatar",0x23);
  FUN_10d1cc20("eMHGameEventID_SelectCharacter",0x24);
  FUN_10d1cc20("eMHGameEventID_DeleteRole",0x25);
  FUN_10d1cc20("eMHGameEventID_CreateRole",0x26);
  FUN_10d1cc20("eMHGameEventID_ResponeLineInfoRefresh",0x27);
  FUN_10d1cc20("eMHGameEventID_RoleShow",0x28);
  FUN_10d1cc20("eMHGameEventID_GuideStepStart",0x29);
  FUN_10d1cc20("eMHGameEventID_GuideStepStop",0x2a);
  FUN_10d1cc20("eMHGameEventID_UIGuideStepComplete",0x2b);
  FUN_10d1cc20("eMHGameEventID_ShowOrHideDialogIcon",0x2c);
  FUN_10d1cc20("eMHGameEventID_SplashMovieEsc",0x2d);
  FUN_10d1cc20("eMHGameEventID_RequestSelectLine",0x2e);
  FUN_10d1cc20("eMHGameEventID_RequestEntrustList",0x2f);
  FUN_10d1cc20("eMHGameEventID_AcceptEntrustTask",0x30);
  FUN_10d1cc20("eMHGameEventID_GiveUpEntrustTask",0x31);
  FUN_10d1cc20("eMHGameEventID_EntrustSelHuntBox",0x32);
  FUN_10d1cc20("eMHGameEventID_RequestAllEntrustList",0x33);
  FUN_10d1cc20("eMHGameEventID_MinimapRegionState",0x34);
  FUN_10d1cc20("eMHGameEventID_MinimapLinkState",0x35);
  FUN_10d1cc20("eMHGameEventID_MinimapPointState",0x36);
  FUN_10d1cc20("eMHGameEventID_RequestPaidBox",0x37);
  FUN_10d1cc20("eMHGameEventID_TutorialStart",0x38);
  FUN_10d1cc20("eMHGameEventID_TutorialActionExecuted",0x39);
  FUN_10d1cc20("eMHGameEventID_UIWidgetShow",0x3a);
  FUN_10d1cc20("eMHGameEventID_UIWidgetHide",0x3b);
  FUN_10d1cc20("eMHGameEventID_AirShipState",0x3c);
  FUN_10d1cc20("eMHGameEventID_PVPSelHuntBox",0x3d);
  FUN_10d1cc20("eMHGameEventID_PetShopAvatarView",0x3e);
  FUN_10d1cc20("eMHGameEventID_TrackViewEvent",0x3f);
  FUN_10d1cc20("eMHGameEventID_ChangeCharacterAvatarWithGreatFace",0x40);
  FUN_10d1cc20("eMHGameEventID_PvpOpenReadyPlayerInfoUI",0x41);
  FUN_10d1cc20("eMHGameEventID_TempPvpLineupReq",0x42);
  FUN_10d1cc20("eMHGameEventID_TempPvpQuitLineReq",0x43);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillActivated",0x44);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillUnactivated",0x45);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillUpgraded",0x46);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillSlotUnlock",0x47);
  FUN_10d1cc20("eMHGameEventID_FarmAdvGatherCutSceneEnd",0x48);
  FUN_10d1cc20("eMHGameEventID_OpenWeaponTutorialVideo",0x49);
  FUN_10d1cc20("eMHGameEventID_CloseWeaponTutorialVideo",0x4a);
  FUN_10d1cc20("eMHGameEventID_OpenWeaponTutorialClear",0x4b);
  FUN_10d1cc20("eMHGameEventID_CloseWeaponTutorialClear",0x4c);
  FUN_10d1cc20("eMHGameEventID_OpenCommonFunctionalList",0x4d);
  FUN_10d1cc20("eMHGameEventID_CloseCommonFunctionalList",0x4e);
  FUN_10d1cc20("eMHGameEventID_StartCommonFunctionByID",0x4f);
  FUN_10d1cc20("eMHGameEventID_NotifyFGTutorialVideoClosed",0x50);
  FUN_10d1cc20("eMHGameEventID_RequestOpenEquipShow",0x51);
  FUN_10d1cc20("eMHGameEventID_ShowEquipShowItemByEvent",0x52);
  FUN_10d1cc20("eMHGameEventID_FGNotifyUIShow_HideMouse",0x53);
  FUN_10d1cc20("eMHGameEventID_NotifyFGWidgetUnloaded",0x54);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestSimpleData",0x55);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestDetailInfo",0x56);
  FUN_10d1cc20("eMHGameEventID_MarqueenAddressUpdate",0x57);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestUniqueID",0x58);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseSimpleData",0x59);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseDetailInfo",0x5a);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseAcceptTask",0x5b);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponsePickupItem",0x5c);
  FUN_10d1cc20("eMHGameEventID_OnRoundSwfDownloadFinished",0x5d);
  FUN_10d1cc20("eMHGameEventID_OnChangeTownInstance",0x5e);
  FUN_10d1cc20("eMHGameEventID_OperationActivitySimpleDataReady",0x5f);
  FUN_10d1cc20("eMHGameEventID_OperationActivityDataExecRsp",0x60);
  FUN_10d1cc20("eMHGameEventID_OpenChargeInternalUrl",0x61);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationActData",0x62);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationItemCountsRefresh",99);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationItemCountsRefreshData",100);
  FUN_10d1cc20("eMHGameEventID_WeaponUnlockViewEnableSkillVideo",0x65);
  FUN_10d1cc20("eMHGameEventID_WeaponUnlockPrework",0x66);
  FUN_10d1cc20("eMHGameEventID_OperationActivityHasNewData",0x67);
  FUN_10d1cc20("eMHGameEventID_ExitWindowDelay",0x68);
  FUN_10d1cc20("eMHGameEventID_InstanceSelectQuickMatch",0x69);
  FUN_10d1cc20("eMHGameEventID_InstanceSelectHubEnterLevel",0x6a);
  FUN_10d1cc20("eMHGameEventID_InstanceCaptainSelectLevel",0x6b);
  FUN_10d1cc20("eMHGameEventID_InstanceSelect_UnlockEliteLevelID",0x6c);
  FUN_10d1cc20("eMHGameEventID_LevelUnlockNotify",0x6d);
  FUN_10d1cc20("eMHGameEventID_SelectTutorialWeapon",0x6e);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialStepUpdated",0x6f);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialClearAllShortcut",0x70);
  FUN_10d1cc20("eMHGameEventID_UpdateShortcutItem",0x71);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialUpdateUIWeaponType",0x72);
  FUN_10d1cc20("eMHGameEventID_SetTeachUIClickMode",0x73);
  FUN_10d1cc20("eMHGameEventID_TeachUIClickedEvent",0x74);
  FUN_10d1cc20("eMHGameEventID_LobbyChanged",0x75);
  FUN_10d1cc20("eMHGameEventID_VipLevelNotify",0x76);
  FUN_10d1cc20("eMHGameEventID_UIWidgetMinimize",0x77);
  FUN_10d1cc20("eMHGameEventID_UIWidgetMaximize",0x78);
  FUN_10d1cc20("eMHGameEventID_BeginChangeFace",0x79);
  FUN_10d1cc20("eMHGameEventID_EndChangeFace",0x7a);
  FUN_10d1cc20("eMHGameEventID_ChangeFaceResponse",0x7b);
  FUN_10d1cc20("eMHGameEventID_PlayerBeautyAcountInfoNotify",0x7c);
  FUN_10d1cc20("eMHGameEventID_MvMPetMonsterDeadNotify",0x7d);
  FUN_10d1cc20("eMHGameEventID_ReturnTownNotify",0x7e);
  FUN_10d1cc20("eMHGameEventID_ReturnChooseRoleNotify",0x7f);
  FUN_10d1cc20("eMHGameEventID_SaveNetworkSequenceNotify",0x80);
  FUN_10d1cc20("eMHGameEventID_OnLeaveCamp",0x81);
  FUN_10d1cc20("eMHGameEventID_OnLeaveJumpArea",0x82);
  FUN_10d1cc20("eMHGameEventID_OnLeaveFarm",0x83);
  FUN_10d1cc20("eMHGameEventID_OnEnterFarm",0x84);
  FUN_10d1cc20("eMHGameEventID_OnEnterCamp",0x85);
  return;
}



/* ===== FUN_10d25f60 @ 10d25f60  size=347 ===== */
// strings:
//   "CraftID"

/* [RE-AUTO c0]
   strings:
     ""CraftID"" */

void __thiscall FUN_10d25f60(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x100);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x108), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("CraftID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),9,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d260c0 @ 10d260c0  size=436 ===== */
// strings:
//   "CraftID"
//   "Discount"

/* [RE-AUTO c0]
   strings:
     ""CraftID""
     ""Discount"" */

void __thiscall FUN_10d260c0(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x11c);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x124), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("CraftID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[1];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("Discount",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),10,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d2d660 @ 10d2d660  size=780 ===== */
// strings:
//   "m_nItemID"
//   "m_nItemColumn"
//   "m_nItemGrid"
//   "m_nEnforceRule"
//   "m_nEnforceLevel"
//   "m_nBufferID"

/* [RE-AUTO c0]
   strings:
     ""m_nItemID""
     ""m_nItemColumn""
     ""m_nItemGrid""
     ""m_nEnforceRule""
     ""m_nEnforceLevel""
     ""m_nBufferID"" */

void __thiscall FUN_10d2d660(int param_1,int *param_2)

{
  int *piVar1;
  int local_28;
  int *local_24;
  int local_18;
  int *local_14;
  int local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x8fc);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x904), (int *)*piVar1 != piVar1)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_14 = (int *)(float)*param_2;
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nItemID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[1];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nItemColumn",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[2];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nItemGrid",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[3];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nEnforceRule",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[4];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nEnforceLevel",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[5];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nBufferID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_28 = 6;
    local_24 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_18 = 1;
    local_14 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(local_8 + 0x58),0x52,&local_18,&local_28);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)0x0;
    local_18 = 0;
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10e357c0 @ 10e357c0  size=1024 ===== */
// strings:
//   "enable"
//   "playerNetId"
//   "addExp"
//   "addBindGold"
//   "addUnBindGold"
//   "OrdinaryDropItem"
//   "OrdinaryDropItemCount"
//   "Result"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""playerNetId""
     ""addExp""
     ""addBindGold""
     ""addUnBindGold""
     ""OrdinaryDropItem""
     ""OrdinaryDropItemCount""
     ""Result"" */

void FUN_10e357c0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_120341a8 & 1) == 0) {
    DAT_120341a8 = DAT_120341a8 | 1;
    _DAT_120340e8 = "enable";
    _DAT_120340ec = 0;
    _DAT_120340f0 = &DAT_11d9d32b;
    _DAT_120340f4 = 0;
    _DAT_120340f8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120340fc,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12034110 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034100 = "playerNetId";
    _DAT_12034104 = 0;
    _DAT_12034108 = &DAT_11d9d32b;
    _DAT_1203410c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12034114,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12034128 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034118 = "addExp";
    _DAT_1203411c = 0;
    _DAT_12034120 = &DAT_11d9d32b;
    _DAT_12034124 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203412c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12034130 = "addBindGold";
    _DAT_12034140 = &DAT_11df7669;
    _DAT_12034134 = 0;
    _DAT_12034138 = &DAT_11d9d32b;
    _DAT_1203413c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12034144,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12034158 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034148 = "addUnBindGold";
    _DAT_1203414c = 0;
    _DAT_12034150 = &DAT_11d9d32b;
    _DAT_12034154 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203415c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12034170 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034160 = "OrdinaryDropItem";
    _DAT_12034164 = 0;
    _DAT_12034168 = &DAT_11d9d32b;
    _DAT_1203416c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12034174,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12034178 = "OrdinaryDropItemCount";
    _DAT_1203417c = 0;
    DAT_12034188 = &DAT_11df7669;
    _DAT_12034180 = &DAT_11d9d32b;
    _DAT_12034184 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203418c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120341a0 = &DAT_11df7728;
    _DAT_12034190 = 0;
    uRam12034194 = 0;
    uRam12034198 = 0;
    uRam1203419c = 0;
    FUN_11a8911f(&LAB_11c8ce90);
  }
  if ((DAT_120341a8 & 2) == 0) {
    DAT_120341a8 = DAT_120341a8 | 2;
    _DAT_120341ac = "Result";
    uRam120341b0 = 0;
    puRam120341b4 = &DAT_11d9d32b;
    _DAT_120341b8 = 6;
    _DAT_120341bc = 0;
    uRam120341c0 = 0;
    uRam120341c4 = 0;
    uRam120341c8 = 0;
  }
  *param_1 = &DAT_120340e8;
  param_1[1] = &DAT_120341ac;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e35bc0 @ 10e35bc0  size=418 ===== */
// strings:
//   "enable"
//   "rewardSstate"
//   "Result"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""rewardSstate""
     ""Result"" */

void FUN_10e35bc0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_120340c0 & 1) == 0) {
    DAT_120340c0 = DAT_120340c0 | 1;
    _DAT_12034078 = "enable";
    _DAT_1203407c = 0;
    _DAT_12034080 = &DAT_11d9d32b;
    _DAT_12034084 = 0;
    _DAT_12034088 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203408c,&uStack_8,"enable",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_120340a0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034090 = "rewardSstate";
    _DAT_12034094 = 0;
    _DAT_12034098 = &DAT_11d9d32b;
    _DAT_1203409c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120340a4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120340b8 = &DAT_11df7728;
    _DAT_120340a8 = 0;
    uRam120340ac = 0;
    uRam120340b0 = 0;
    uRam120340b4 = 0;
    FUN_11a8911f(&LAB_11c8cec0);
  }
  if ((DAT_120340c0 & 2) == 0) {
    DAT_120340c0 = DAT_120340c0 | 2;
    _DAT_120340c4 = "Result";
    uRam120340c8 = 0;
    puRam120340cc = &DAT_11d9d32b;
    _DAT_120340d0 = 6;
    _DAT_120340d4 = 0;
    uRam120340d8 = 0;
    uRam120340dc = 0;
    uRam120340e0 = 0;
  }
  *param_1 = &DAT_12034078;
  param_1[1] = &DAT_120340c4;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea2960 @ 10ea2960  size=833 ===== */
// strings:
//   "layer"
//   "modelGroupID"
//   "delayStartTime"
//   "rewardTime"
//   "rewardExp"
//   "rewardBindGold"
//   "rewardUnbindGold"
//   "rewardItemGroupID"
//   "addPlayerBuffID"
//   "addBossBuffID"
//   "isHaveReward"
//   "resouceID"
//   "monsterID"
//   "monsterNum"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""layer""
     ""modelGroupID""
     ""delayStartTime""
     ""rewardTime""
     ""rewardExp""
     ""rewardBindGold""
     ""rewardUnbindGold""
     ""rewardItemGroupID""
     ""addPlayerBuffID""
     ""addBossBuffID"" */

void FUN_10ea2960(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203a778 & 1) == 0) {
    DAT_1203a778 = DAT_1203a778 | 1;
    DAT_1203a758 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a748 = "layer";
    _DAT_1203a74c = 0;
    _DAT_1203a750 = &DAT_11d9d32b;
    _DAT_1203a754 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a75c,&uStack_8,"layer",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203a770 = &DAT_11df7728;
    _DAT_1203a760 = 0;
    uRam1203a764 = 0;
    uRam1203a768 = 0;
    uRam1203a76c = 0;
    FUN_11a8911f(&LAB_11c90080);
  }
  if ((DAT_1203a778 & 2) == 0) {
    DAT_1203a778 = DAT_1203a778 | 2;
    _DAT_1203a780 = "modelGroupID";
    uRam1203a784 = 0;
    _DAT_1203a788 = &DAT_11d9d32b;
    uRam1203a78c = 1;
    _DAT_1203a790 = &DAT_11dbac80;
    uRam1203a794 = 0;
    puRam1203a798 = &DAT_11d9d32b;
    uRam1203a79c = 5;
    _DAT_1203a7a0 = "delayStartTime";
    uRam1203a7a4 = 0;
    puRam1203a7a8 = &DAT_11d9d32b;
    uRam1203a7ac = 1;
    _DAT_1203a7b0 = "rewardTime";
    uRam1203a7b4 = 0;
    puRam1203a7b8 = &DAT_11d9d32b;
    uRam1203a7bc = 1;
    _DAT_1203a7c0 = "rewardExp";
    uRam1203a7c4 = 0;
    puRam1203a7c8 = &DAT_11d9d32b;
    uRam1203a7cc = 1;
    _DAT_1203a7d0 = "rewardBindGold";
    uRam1203a7d4 = 0;
    puRam1203a7d8 = &DAT_11d9d32b;
    uRam1203a7dc = 1;
    _DAT_1203a7e0 = "rewardUnbindGold";
    uRam1203a7e4 = 0;
    puRam1203a7e8 = &DAT_11d9d32b;
    uRam1203a7ec = 1;
    _DAT_1203a7f0 = "rewardItemGroupID";
    uRam1203a7f4 = 0;
    puRam1203a7f8 = &DAT_11d9d32b;
    uRam1203a7fc = 1;
    _DAT_1203a800 = "addPlayerBuffID";
    uRam1203a804 = 0;
    puRam1203a808 = &DAT_11d9d32b;
    uRam1203a80c = 1;
    _DAT_1203a810 = "addBossBuffID";
    uRam1203a814 = 0;
    puRam1203a818 = &DAT_11d9d32b;
    uRam1203a81c = 1;
    _DAT_1203a820 = "isHaveReward";
    uRam1203a824 = 0;
    puRam1203a828 = &DAT_11d9d32b;
    uRam1203a82c = 1;
    _DAT_1203a830 = "resouceID";
    uRam1203a834 = 0;
    puRam1203a838 = &DAT_11d9d32b;
    uRam1203a83c = 1;
    _DAT_1203a840 = "monsterID";
    uRam1203a844 = 0;
    puRam1203a848 = &DAT_11d9d32b;
    uRam1203a84c = 1;
    _DAT_1203a850 = "monsterNum";
    uRam1203a854 = 0;
    puRam1203a858 = &DAT_11d9d32b;
    uRam1203a85c = 1;
    _DAT_1203a860 = 0;
    uRam1203a864 = 0;
    uRam1203a868 = 0;
    uRam1203a86c = 0;
  }
  *param_1 = &DAT_1203a748;
  param_1[1] = &DAT_1203a780;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea2fc0 @ 10ea2fc0  size=904 ===== */
// strings:
//   "enable"
//   "playerNetId"
//   "addExp"
//   "addBindGold"
//   "addUnBindGold"
//   "OrdinaryItemGroupID"
//   "Result"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""playerNetId""
     ""addExp""
     ""addBindGold""
     ""addUnBindGold""
     ""OrdinaryItemGroupID""
     ""Result"" */

void FUN_10ea2fc0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203aaf0 & 1) == 0) {
    DAT_1203aaf0 = DAT_1203aaf0 | 1;
    _DAT_1203aa48 = "enable";
    _DAT_1203aa4c = 0;
    _DAT_1203aa50 = &DAT_11d9d32b;
    _DAT_1203aa54 = 0;
    _DAT_1203aa58 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203aa5c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_1203aa70 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203aa60 = "playerNetId";
    _DAT_1203aa64 = 0;
    _DAT_1203aa68 = &DAT_11d9d32b;
    _DAT_1203aa6c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203aa74,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_1203aa88 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203aa78 = "addExp";
    _DAT_1203aa7c = 0;
    _DAT_1203aa80 = &DAT_11d9d32b;
    _DAT_1203aa84 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203aa8c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_1203aa90 = "addBindGold";
    _DAT_1203aaa0 = &DAT_11df7669;
    _DAT_1203aa94 = 0;
    _DAT_1203aa98 = &DAT_11d9d32b;
    _DAT_1203aa9c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203aaa4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_1203aab8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203aaa8 = "addUnBindGold";
    _DAT_1203aaac = 0;
    _DAT_1203aab0 = &DAT_11d9d32b;
    _DAT_1203aab4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203aabc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203aad0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203aac0 = "OrdinaryItemGroupID";
    _DAT_1203aac4 = 0;
    _DAT_1203aac8 = &DAT_11d9d32b;
    _DAT_1203aacc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203aad4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203aae8 = &DAT_11df7728;
    _DAT_1203aad8 = 0;
    uRam1203aadc = 0;
    uRam1203aae0 = 0;
    uRam1203aae4 = 0;
    FUN_11a8911f(&LAB_11c900e0);
  }
  if ((DAT_1203aaf0 & 2) == 0) {
    DAT_1203aaf0 = DAT_1203aaf0 | 2;
    _DAT_1203aaf4 = "Result";
    uRam1203aaf8 = 0;
    puRam1203aafc = &DAT_11d9d32b;
    _DAT_1203ab00 = 6;
    _DAT_1203ab04 = 0;
    uRam1203ab08 = 0;
    uRam1203ab0c = 0;
    uRam1203ab10 = 0;
  }
  *param_1 = &DAT_1203aa48;
  param_1[1] = &DAT_1203aaf4;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10f99040 @ 10f99040  size=163 ===== */
// strings:
//   "aircraft"

/* [RE-AUTO c0]
   strings:
     ""aircraft"" */

void FUN_10f99040(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_4c [32];
  uint local_2c;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x1b8))(0);
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x58))();
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)(**(code **)(*piVar1 + 0x18))("aircraft");
        if (piVar1 != (int *)0x0) {
          piVar1 = (int *)(**(code **)(*piVar1 + 0x6c))();
          if (piVar1 != (int *)0x0) {
            FUN_10ab77b0(0,0);
            if (param_3 != '\0') {
              local_2c = local_2c | 2;
            }
            (**(code **)(*piVar1 + 0x1c))(param_2,local_4c);
          }
        }
      }
    }
  }
  piVar1 = (int *)(param_2 + -0xc);
  if (-1 < *piVar1) {
    iVar2 = FUN_10c3dad0(piVar1);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar1);
    }
  }
  return;
}



/* ===== FUN_110f82c0 @ 110f82c0  size=326 ===== */
// strings:
//   "Hovercraft"
//   "maxThrustersDamaged"
//   "collapsedFeetAngle"
//   "collapsedLegAngle"
//   "recoverTime"
//   "turret1"
//   "cannon"
//   "generator"
//   "platform_pos"

/* [RE-AUTO c0]
   strings:
     ""Hovercraft""
     ""maxThrustersDamaged""
     ""collapsedFeetAngle""
     ""collapsedLegAngle""
     ""recoverTime""
     ""turret1""
     ""cannon""
     ""generator""
     ""platform_pos"" */

undefined1 __thiscall FUN_110f82c0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined **local_14;
  int *local_10;
  int local_8;
  
  local_8 = param_1;
  FUN_110b8a00(&local_14,"Hovercraft");
  if ((local_10 == (int *)0x0) || (cVar1 = FUN_110de8f0(param_2,&local_14), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_110cad00("maxThrustersDamaged",param_1 + 0x4f8);
    FUN_110b8740("collapsedFeetAngle",param_1 + 0x500);
    FUN_110b8740("collapsedLegAngle",param_1 + 0x504);
    FUN_110b8740("recoverTime",param_1 + 0x508);
    FUN_10ab5d80(*(int *)(param_1 + 0x3dc) - *(int *)(param_1 + 0x3d8) >> 2);
    if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x3dc)) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x5c);
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xac))("turret1");
    *(undefined4 *)(param_1 + 0x520) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xac))("cannon");
    *(undefined4 *)(param_1 + 0x528) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xac))("generator");
    *(undefined4 *)(param_1 + 0x524) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 400))("platform_pos");
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x52c) = uVar2;
  }
  local_14 = &PTR_FUN_11d10dd4;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 4))();
  }
  return uVar3;
}



/* ===== FUN_11164820 @ 11164820  size=171 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "Energy_Ability_PC.BUF.LevelUp"

/* [RE-AUTO c0]
   strings:
     ""Energy_Ability_PC.BUF.LevelUp"" */

undefined4 __thiscall
FUN_11164820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_11398e60();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_11398e60();
    local_10 = 0x42b40000;
    local_c = 0;
    local_8 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f000000;
    (**(code **)(*piVar3 + 0x74))("Energy_Ability_PC.BUF.LevelUp",0,&local_1c,&local_10,0x3f800000);
  }
  FUN_1139ab90(param_2,param_3,param_4);
  cVar1 = (**(code **)(*param_1 + 0x280))();
  if (cVar1 != '\0') {
    uVar4 = CPlayer__GetHuntRankOrCount(2);
    uVar4 = FUN_1024e8a0(uVar4);
    FUN_1112f070(0x4ce,uVar4);
  }
  return 0;
}



/* ===== FUN_111ff230 @ 111ff230  size=78 ===== */
// calls: CActivityLotteryInfo::GetInfoManager
// strings:
//   "CActivityLotteryInfo"

/* [RE-AUTO c0]
   calls: CActivityLotteryInfo::GetManagers
   strings:
     ""CActivityLotteryInfo"" */

undefined4 FUN_111ff230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CActivityLotteryInfo__GetInfoManager(0,"CActivityLotteryInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_111ffc70 @ 111ffc70  size=304 ===== */
// calls: CActivityLotteryInfo::GetInfoManager
// strings:
//   "CActivityLotteryInfo"

/* [RE-AUTO c0]
   calls: CActivityLotteryInfo::GetManagers
   strings:
     ""CActivityLotteryInfo"" */

void FUN_111ffc70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((char)param_1[1] != '\0') {
    iVar7 = *param_1;
    iVar4 = CActivityLotteryInfo__GetInfoManager(0,"CActivityLotteryInfo",0);
    if ((iVar7 != -1) &&
       ((((iVar7 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
         (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
        ((iVar7 = iVar7 - *(int *)(iVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar4 + 0x24))))))
       ) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / iVar1) * 4);
      if ((iVar4 != 0) &&
         ((iVar7 = *(int *)(iVar4 + (iVar7 % iVar1) * 4), iVar7 != 0 && (0 < *(int *)(iVar7 + 0x1c))
          ))) {
        local_10 = local_20;
        local_20[0] = 0;
        iVar4 = 0;
        local_c = local_10;
        if ((char)param_1[1] != '\0') {
          pcVar8 = (char *)((int)param_1 + 5);
          do {
            pcVar3 = pcVar8;
            if (0 < iVar4) {
              FUN_100d9260(&DAT_11d9dc4c,&DAT_11d9dc4d);
            }
            do {
              pcVar5 = pcVar3;
              pcVar3 = pcVar5 + 1;
            } while (*pcVar5 != '\0');
            FUN_100d9260(pcVar8,pcVar5);
            iVar4 = iVar4 + 1;
            pcVar8 = pcVar8 + 0x20;
          } while (iVar4 < (int)(uint)*(byte *)(param_1 + 1));
        }
        uVar2 = *(undefined4 *)(iVar7 + 0x1c);
        uVar6 = FUN_1024e9b0(local_c,0x2a);
        FUN_1112f070(uVar2,uVar6);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1124ed40 @ 1124ed40  size=429 ===== */
// calls: GetClientMessageChannel
// strings:
//   "Smith_crafting"

/* [RE-AUTO c0]
   strings:
     ""Smith_crafting"" */

void FUN_1124ed40(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_111e09b0();
  FUN_1124f8f0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  if (param_1[1] == 0) {
    FUN_113f3640();
    iVar1 = FUN_1115abd0();
    if (iVar1 != 0) {
      local_24 = 0;
      if ((*param_1 == 0) || (iVar1 = FUN_107ec240(*param_1), iVar1 == 0)) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_113fa380(*(undefined4 *)(iVar1 + 0x84));
      }
      iVar1 = GetClientMessageChannel();
      if (iVar1 != 0) {
        piVar2 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar2 + 4))(0x60,&local_24);
      }
      FUN_113f3640();
      iVar1 = FUN_1115abd0();
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_1143c770(), iVar1 != 0)) {
        FUN_113f3640(*(undefined4 *)(iVar1 + 0x20));
        piVar2 = (int *)FUN_1115abb0();
        if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0xa8))(), iVar1 == 1)) {
          piVar2 = (int *)FUN_113a23b0();
          iVar1 = (**(code **)(*piVar2 + 0x18))();
          if (iVar1 == 0x75a2) {
            FUN_100b5f70("Smith_crafting",&local_29);
            FUN_113a3b70(local_20);
            if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_c);
            }
          }
        }
      }
      local_28 = 0x3d;
      iVar1 = GetClientMessageChannel();
      if (iVar1 != 0) {
        piVar2 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar2 + 4))(0x11a,&local_28);
      }
    }
  }
  else {
    local_28 = 0x56;
    iVar1 = GetClientMessageChannel();
    if (iVar1 != 0) {
      piVar2 = (int *)GetClientMessageChannel();
      (**(code **)(*piVar2 + 4))(0x11a,&local_28);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1124fee0 @ 1124fee0  size=564 ===== */
// calls: strcpy_s, GetClientMessageChannel
// strings:
//   "CCraftInfo"
//   "CItemBaseInfo"
//   "test item"
//   "2.png"

/* [RE-AUTO c0]
   calls: strcpy_s
   strings:
     ""CCraftInfo""
     ""CItemBaseInfo""
     ""test item""
     ""2.png"" */

void FUN_1124fee0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int local_74;
  undefined1 local_70 [20];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)FUN_111e09f0();
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (iVar3 == 0) {
    FUN_11a89daa(0);
    return;
  }
  iVar4 = FUN_108041a0(0,"CCraftInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
      ((param_1 = param_1 - *(int *)(iVar4 + 0x30), -1 < param_1 &&
       (param_1 < *(int *)(iVar4 + 0x24))))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_1 / iVar1) * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + (param_1 % iVar1) * 4);
      goto LAB_1124ff60;
    }
  }
  iVar4 = 0;
LAB_1124ff60:
  local_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  iStack_c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(iVar4 + 0x120) != *(int *)(iVar4 + 0x124)) {
    piVar2 = *(int **)(iVar4 + 0x124);
    piVar8 = *(int **)(iVar4 + 0x120);
    local_74 = 0;
    pcVar7 = strcpy_s_exref;
    if (piVar8 != piVar2) {
      do {
        uVar5 = FUN_113fa380(*piVar8);
        iVar3 = *piVar8;
        iVar4 = FUN_102551f0(0,"CItemBaseInfo",0);
        if ((((iVar3 == -1) || ((iVar3 == 0 && (*(int *)(iVar4 + 0x30) != 0)))) ||
            (iVar1 = *(int *)(iVar4 + 0x28), pcVar7 = strcpy_s_exref, iVar1 == 0)) ||
           ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), iVar3 < 0 || (*(int *)(iVar4 + 0x24) <= iVar3))
           )) {
LAB_1125002a:
          iVar3 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
          if (iVar4 == 0) goto LAB_1125002a;
          iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4);
        }
        if (iVar3 == 0) {
          (*pcVar7)(&local_58,0x20,"test item");
          (*pcVar7)(&local_38,0x20,"2.png");
        }
        else {
          FUN_100e5b40(local_70);
          (*pcVar7)(&local_58,0x20,local_5c);
          (*pcVar7)(&local_38,0x20,*(undefined4 *)(iVar3 + 0xb4));
          if ((local_5c != local_70) && (local_5c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_5c);
          }
        }
        local_18 = piVar8[1];
        iStack_c = local_74;
        local_74 = local_74 + 1;
        iStack_10 = *piVar8;
        uStack_14 = uVar5;
        iVar3 = GetClientMessageChannel();
        if (iVar3 != 0) {
          piVar6 = (int *)GetClientMessageChannel();
          (**(code **)(*piVar6 + 4))(0x3c,&local_58);
        }
        piVar8 = piVar8 + 2;
        if (piVar8 == piVar2) {
          FUN_11a89daa();
          return;
        }
      } while( true );
    }
  }
  FUN_11a89daa(iVar3);
  return;
}



/* ===== FUN_112b79a0 @ 112b79a0  size=139 ===== */
// strings:
//   "Energy_Ability_PC.BUF.LevelUp"

/* [RE-AUTO c0]
   strings:
     ""Energy_Ability_PC.BUF.LevelUp"" */

void __fastcall FUN_112b79a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_113efca0();
  iVar1 = FUN_113ef730();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_113ef730();
    local_10 = 0x42b40000;
    local_c = 0;
    local_8 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f000000;
    (**(code **)(*piVar2 + 0x74))("Energy_Ability_PC.BUF.LevelUp",0,&local_1c,&local_10,0x3f800000);
  }
  (**(code **)(*param_1 + 0x1ac))(2,0,0);
  return;
}



/* ===== FUN_11356730 @ 11356730  size=5905 ===== */
// strings:
//   "CharLevel"
//   "CharExp"
//   "StarLevel"
//   "CharHP"
//   "CharMaxHP"
//   "CharStr"
//   "CharBst"
//   "CharLck"
//   "CharVgr"
//   "CharDefence"
//   "CharMoney"
//   "CharBoundMoney"
//   "CharCredit"
//   "CharBoundCredit"
//   "CharFatigue"
//   "CharMaxFatigue"
//   "ClaymoreExp"
//   "HammerExp"
//   "KatanaExp"
//   "DuelSwordExp"

/* [RE-AUTO c0]
   strings:
     ""CharLevel""
     ""CharExp""
     ""StarLevel""
     ""CharHP""
     ""CharMaxHP""
     ""CharStr""
     ""CharBst""
     ""CharLck""
     ""CharVgr""
     ""CharDefence"" */

undefined4 FUN_11356730(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_100ec310(param_1,"CharLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 8) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xc) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"StarLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharHP");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x14) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharMaxHP");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x18) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharStr");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharBst");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x20) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharLck");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x24) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharVgr");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x28) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharDefence");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x2c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharMoney");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x30) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharBoundMoney");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x34) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharCredit");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x38) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharBoundCredit");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x3c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharFatigue");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x40) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharMaxFatigue");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x44) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClaymoreExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x48) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HammerExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x4c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"KatanaExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x50) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"DuelSwordExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x54) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SwordExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x58) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SpearExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x5c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"GunExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x60) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"BowExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 100) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CrossbowExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x68) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FluteExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x6c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MaleFace");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x70) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MaleHair");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x74) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"EquipFoundDay");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x78) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"UnderClothes");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x7c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"Newbie");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x80) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharContribution");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x84) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharRemainsExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x88) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FarmOpenFlag");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x8c) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FarmExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x8e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FarmEvaluation");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x92) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LastResetTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x96) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SkinColor");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x9a) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HairColor");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x9e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"InnerColor");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xa2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FaceTattooIndex");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xa6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"EyeBall");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xaa) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FarmFriendGatherCount");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xae) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FaceTattooColor");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xb2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"EyeColor");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xb6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HideFashion");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xba) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HideSuite");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xbc) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HideHelm");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xbe) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharCatCredit");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xc0) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharReviveCredit");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xc4) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SystemUnlockData");
    if (iVar1 == 0) {
      *(int *)(param_3 + 200) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ExtDailyExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0xcc) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo1");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xd0) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo2");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xd2) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo3");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xd4) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo4");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xd6) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo5");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xd8) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo6");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xda) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo7");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xdc) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo8");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xde) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo9");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xe0) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo10");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xe2) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo11");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xe4) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo12");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xe6) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo13");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xe8) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo14");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xea) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo15");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xec) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo16");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xee) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo17");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xf0) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo18");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xf2) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo19");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xf4) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo20");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xf6) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo21");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xf8) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo22");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xfa) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo23");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xfc) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo24");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0xfe) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo25");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x100) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,&DAT_11d22cac);
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x102) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"EntrustMoney1");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x104) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"EntrustMoney2");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x108) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharmFoundTimes");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WeapSysUnlockFlag");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x110) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharRemainsDoubleExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x114) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ExtDailyDoubleExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x118) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x11c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPExp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x120) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPBaseEndTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x124) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPGrowthEndTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x128) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPProfitEndTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 300) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"BanChatEndTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x130) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPVASFrozen");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x134) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPBaseCanUse");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x136) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPGrowthCanUse");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x138) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPProfitCanUse");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x13a) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SystemUnlockExtData1");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x13c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"IsVIPBaseExpireNtf");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x140) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPBaseExpireLastNtfTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x142) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"VIPVASFrozenTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x146) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClanScore");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x14a) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClanScoreMax");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x14e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClanMoney");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x152) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharHRLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x156) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharHRPoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x15a) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClanMoneyPVP");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x15e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ClanLeaveTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x162) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo26");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x166) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo27");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x168) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo28");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x16a) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo29");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x16c) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo30");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x16e) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo31");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x170) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo32");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x172) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo33");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x174) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo34");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x176) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo35");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x178) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo36");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x17a) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo37");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x17c) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo38");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x17e) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo39");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x180) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo40");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x182) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo41");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x184) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo42");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x186) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo43");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x188) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo44");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x18a) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo45");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x18c) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo46");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x18e) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FacialInfo47");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 400) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"PersonalELO");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x192) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"PVPMoney");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x196) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharCatMoney");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x19a) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharCatMoneyWeek");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x19e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CharCatMoneyWeekMax");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1a2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HuntSoul");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1a6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WildHuntCamp");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1aa) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WildHuntPhase");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1ae) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WildHuntGuild");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1b2) = param_2;
      *(int *)(param_3 + 0x1b6) = param_2 >> 0x1f;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"TotalCredit");
    if (iVar1 == 0) {
      *(float *)(param_3 + 0x1ba) = (float)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"BattleCount");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1be) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"FirstLoginTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1c2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LastHuntSoul");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1c6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"TotalHRPoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1ca) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LikeHunterOfficer");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1ce) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"PetSkillMoral");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1d2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"PetSkillUpgradeMoral");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1d6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HuntingCreditExchange");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1da) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LevelShowType");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1de) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MonolopyRoundCount");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1e2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MonolopyActivity");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1e6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MonolopyCurGrid");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1ea) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"ShouHunPoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1ee) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LieHunPoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1f2) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MVPPoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1f6) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"XHunterScore");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1fa) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"MonolopyAccStep");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x1fe) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"XHunterHighScore");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x202) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SoulStoneLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x206) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WeeklyRefreshTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x20a) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"WeekMoneyGain");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x20e) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"SoulStoneAtkLevel");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x212) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"XHunterActivity");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x216) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"IsNewbie");
    if (iVar1 == 0) {
      *(undefined2 *)(param_3 + 0x21a) = (undefined2)param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"LevelHuntSoul");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x21c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"TaskHuntSoul");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x220) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"CampHuntSoul");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x224) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"HideWeaponBreakEffect");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x228) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"IllustratePoint");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x22c) = param_2;
      return 1;
    }
    iVar1 = FUN_100ec310(param_1,"GuildBanChatEndTime");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x230) = param_2;
      return 1;
    }
  }
  return 0;
}



