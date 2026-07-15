/* ===== FUN_1089aa10 @ 1089aa10  size=597 ===== */
// strings:
//   "RequestRewardInfo"
//   "SetDailyReward"
//   "FetchPrize"
//   "SetQuest"
//   "requestServerQuestInfo"
//   "SetQuestInfo"
//   "initTextField"

/* [RE-AUTO c0]
   strings:
     ""RequestRewardInfo""
     ""SetDailyReward""
     ""FetchPrize""
     ""SetQuest""
     ""requestServerQuestInfo""
     ""SetQuestInfo""
     ""initTextField"" */

void __thiscall FUN_1089aa10(int param_1)

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
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  local_64 = in_stack_00000010[7];
  local_5c = in_stack_00000010[9];
  local_60 = in_stack_00000010[8];
  local_58 = in_stack_00000010[10];
  local_68 = (int *)0x0;
  if ((local_64 >> 6 & 1) != 0) {
    local_68 = (int *)in_stack_00000010[6];
    (**(code **)(*local_68 + 4))(&local_68,local_60);
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
  FUN_104d13b0("RequestRewardInfo",FUN_1089c930);
  FUN_104d13b0("SetDailyReward",FUN_1089ad50);
  FUN_104d13b0("FetchPrize",FUN_1089c870);
  FUN_104d13b0("SetQuest",FUN_1089b5f0);
  FUN_104d13b0("requestServerQuestInfo",&LAB_1089c970);
  FUN_104d13b0("SetQuestInfo",FUN_1089c040);
  FUN_104d13b0("initTextField",FUN_1089c240);
  *(undefined4 *)(param_1 + 0x38) = 0;
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
  if ((local_64 >> 6 & 1) != 0) {
    (**(code **)(*local_68 + 8))(&local_68,local_60);
    local_68 = (int *)0x0;
  }
  local_64 = 0;
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_1089ad50 @ 1089ad50  size=2194 ===== */
// calls: CPet::SetName
// strings:
//   "rewardItemArray"
//   "REWARD_ITEM_MODEL"
//   "RewardState"
//   "rewardIndex"
//   "contributeValue"
//   "ItemID"
//   "contributeTitle"
//   "todayPart1"
//   "todayPart2"
//   "todayPart3"
//   "todayContribute"
//   "todayRestLevelUp"
//   "maxContribute"
//   "addOilText"
//   "finishText"
//   "hunterHonor"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""rewardItemArray""
     ""REWARD_ITEM_MODEL""
     ""RewardState""
     ""rewardIndex""
     ""contributeValue""
     ""ItemID""
     ""contributeTitle""
     ""todayPart1""
     ""todayPart2""
     ""todayPart3"" */

void FUN_1089ad50(int ****param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int ****ppppiVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int ***pppiVar7;
  uint unaff_EDI;
  int ****ppppiVar8;
  int *****pppppiVar9;
  int *****pppppiStack_ec;
  int *****pppppiStack_e8;
  int ****ppppiStack_e4;
  int *piVar10;
  uint uVar11;
  int **ppiStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int ****appppiStack_c8 [2];
  int ***local_c0;
  int ****local_bc;
  int ****local_b8;
  int local_b4;
  int local_b0;
  int **ppiStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int ***pppiStack_90;
  uint uStack_8c;
  int ****ppppiStack_88;
  undefined1 auStack_84 [16];
  int ****ppppiStack_74;
  int ****ppppiStack_70;
  int ***pppiStack_6c;
  int ***pppiStack_68;
  int ***pppiStack_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  int ****ppppiStack_58;
  int ****ppppiStack_54;
  int ****ppppiStack_50;
  int *****pppppiStack_4c;
  int *****pppppiStack_48;
  int *****pppppiStack_44;
  int *****pppppiStack_40;
  int *****pppppiStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppiStack_d4;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    ppppiStack_e4 = (int ****)param_1[2];
    pppppiStack_e8 = (int *****)param_1;
    pppppiStack_ec = (int *****)0x1089ad88;
    (*(code *)(**param_1)[2])();
    *param_1 = (int ***)0x0;
  }
  param_1[1] = (int ***)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  local_c0 = (int ***)0x0;
  local_bc = (int ****)param_4[1];
  local_b4 = param_4[3];
  ppppiStack_e4 = (int ****)param_4[2];
  local_b0 = param_4[4];
  local_b8 = ppppiStack_e4;
  if (((uint)local_bc >> 6 & 1) != 0) {
    local_c0 = (int ***)*param_4;
    pppppiStack_e8 = (int *****)&local_c0;
    pppppiStack_ec = (int *****)0x1089add9;
    (*(code *)(*local_c0)[1])();
  }
  iVar6 = 0;
  ppiStack_a8 = (int **)0x0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar10 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar10 != (int *)0x0)) {
    ppppiStack_e4 = (int ****)0x1089ae24;
    iStack_d0 = (**(code **)(*piVar10 + 0xb4))();
    iStack_9c = iStack_d0;
    if ((iStack_d0 != 0) &&
       (piVar10 = *(int **)(iStack_d0 + 0x2ad0), iVar6 = iStack_d0, piVar10 != (int *)0x0)) {
      pppppiStack_e8 = &ppppiStack_50;
      ppppiStack_50 = (int ****)0x0;
      pppppiStack_4c = (int *****)0x0;
      appppiStack_c8[0] = (int ****)CONCAT31(appppiStack_c8[0]._1_3_,((byte)local_bc & 0x8f) == 10);
      ppppiStack_e4 = appppiStack_c8[0];
      pppppiStack_ec = (int *****)0x11dd370c;
      cVar1 = (*(code *)(*local_c0)[4])(local_b8);
      if (cVar1 != '\0') {
        pppppiStack_e8 = (int *****)&pppiStack_90;
        pppiStack_90 = (int ***)0x0;
        uStack_8c = 0;
        appppiStack_c8[0] =
             (int ****)CONCAT31(appppiStack_c8[0]._1_3_,((byte)local_bc & 0x8f) == 10);
        ppppiStack_e4 = appppiStack_c8[0];
        pppppiStack_ec = (int *****)0x11dd36f8;
        cVar1 = (*(code *)(*local_c0)[4])(local_b8);
        if ((cVar1 != '\0') && (((byte)uStack_8c & 0x8f) == 6)) {
          appppiStack_c8[0] = ppppiStack_88;
          if ((uStack_8c >> 6 & 1) != 0) {
            appppiStack_c8[0] = (int ****)*ppppiStack_88;
          }
          ppppiStack_e4 = (int ****)&ppppiStack_74;
          pppppiStack_e8 = (int *****)0x1089af06;
          (**(code **)(*piVar10 + 0x3c))();
          ppppiVar8 = ppppiStack_70;
          ppppiVar3 = ppppiStack_74;
          if (ppppiStack_74 != ppppiStack_70) {
            do {
              pppiVar7 = *ppppiVar3;
              if (pppiVar7 != (int ***)0x0) {
                ppppiStack_e4 = (int ****)0x0;
                pppppiStack_e8 = (int *****)0x0;
                pppppiStack_ec = (int *****)appppiStack_c8[0];
                pppiStack_68 = (int ***)0x0;
                pppiStack_64 = (int ***)0x0;
                FUN_11a98de0(&pppiStack_68);
                ppiStack_d4 = pppiVar7[4];
                FUN_104d1550("RewardState",ppiStack_d4);
                FUN_104d1550("rewardIndex",pppiVar7[1][1]);
                ppiStack_a8 = pppiVar7[1];
                puVar2 = (undefined4 *)FUN_11348ac0(&pppppiStack_48,1);
                local_b0 = FUN_11a13a00(*puVar2);
                if (((int ******)pppppiStack_38 != &pppppiStack_4c) &&
                   (pppppiStack_38 != (int *****)0x0)) {
                  FUN_10c3d5d0(pppppiStack_38);
                }
                if (local_b4 != 0) {
                  puVar2 = (undefined4 *)(local_b4 + 0x10);
                  FUN_10461ba0(puVar2);
                  FUN_104d1550("contributeValue",*puVar2);
                  if ((local_b0 != 0) && (*(int *)(local_b0 + 8) != 0)) {
                    FUN_104d1550("ItemID",*(undefined4 *)(*(int *)(local_b0 + 8) + 0x10));
                    FUN_1089c170();
                    (*(code *)(*pppiStack_6c)[0xf])(pppiStack_64,auStack_84);
                  }
                }
                FUN_104d7c10();
                ppppiVar8 = ppppiStack_70;
              }
              ppppiVar3 = ppppiVar3 + 1;
            } while (ppppiVar3 != ppppiVar8);
          }
          if (ppppiStack_74 != (int ****)0x0) {
            ppppiStack_e4 = ppppiStack_74;
            pppppiStack_e8 = (int *****)0x1089b074;
            FUN_10c3d5d0();
          }
        }
        if ((uStack_8c >> 6 & 1) != 0) {
          pppppiStack_e8 = (int *****)&pppiStack_90;
          ppppiStack_e4 = ppppiStack_88;
          pppppiStack_ec = (int *****)0x1089b095;
          (*(code *)(*pppiStack_90)[2])();
        }
      }
      iVar6 = iStack_d0;
      if (((uint)pppppiStack_4c >> 6 & 1) != 0) {
        pppppiStack_e8 = &ppppiStack_50;
        ppppiStack_e4 = (int ****)pppppiStack_48;
        pppppiStack_ec = (int *****)0x1089b0be;
        (*(code *)(*ppppiStack_50)[2])();
        iVar6 = iStack_d0;
      }
    }
  }
  ppppiStack_e4 = (int ****)&DAT_11d9d32b;
  iStack_d0 = 0;
  pppppiStack_e8 = (int *****)0x1089b0d8;
  CPet__SetName();
  pppppiStack_e8 = (int *****)0x0;
  pppppiStack_ec = (int *****)0x13b6;
  FUN_1024ebe0(&ppiStack_d4,appppiStack_c8);
  ppppiStack_54 = (int ****)((uint)ppppiStack_54 & 0xffffff00);
  pppppiStack_e8 = &ppppiStack_54;
  pppppiStack_ec = (int *****)0x1089b119;
  pppppiStack_44 = pppppiStack_e8;
  pppppiStack_40 = pppppiStack_e8;
  FUN_100e5aa0();
  pppppiStack_ec = pppppiStack_44;
  FUN_104d1670("contributeTitle");
  if ((pppppiStack_44 != &ppppiStack_58) && (pppppiStack_44 != (int *****)0x0)) {
    pppppiStack_ec = pppppiStack_44;
    FUN_10c3d5d0();
  }
  pppppiStack_ec = (int *****)0x0;
  FUN_1024ebe0(&stack0xffffff28,&uStack_cc,0x13b7);
  ppppiStack_58 = (int ****)((uint)ppppiStack_58 & 0xffffff00);
  pppppiStack_ec = &ppppiStack_58;
  pppppiStack_48 = pppppiStack_ec;
  pppppiStack_44 = pppppiStack_ec;
  FUN_100e5aa0();
  FUN_104d1670("todayPart1",pppppiStack_48);
  if ((pppppiStack_48 != &ppppiStack_5c) && (pppppiStack_48 != (int *****)0x0)) {
    FUN_10c3d5d0(pppppiStack_48);
  }
  FUN_1024ebe0(&stack0xffffff24,&iStack_d0,0x13b8,0);
  ppppiStack_5c = (int ****)((uint)ppppiStack_5c & 0xffffff00);
  pppppiVar9 = &ppppiStack_5c;
  pppppiStack_4c = pppppiVar9;
  pppppiStack_48 = pppppiVar9;
  FUN_100e5aa0();
  FUN_104d1670("todayPart2",pppppiStack_4c);
  if ((pppppiStack_4c != &ppppiStack_60) && (pppppiStack_4c != (int *****)0x0)) {
    FUN_10c3d5d0(pppppiStack_4c);
  }
  FUN_1024ebe0(&stack0xffffff20,&ppiStack_d4,0x13b9,0);
  ppppiStack_60 = (int ****)((uint)ppppiStack_60 & 0xffffff00);
  ppppiStack_50 = (int ****)&ppppiStack_60;
  pppppiStack_4c = (int *****)ppppiStack_50;
  FUN_100e5aa0(ppppiStack_50);
  FUN_104d1670("todayPart3",ppppiStack_50);
  if ((ppppiStack_50 != &pppiStack_64) && (ppppiStack_50 != (int ****)0x0)) {
    FUN_10c3d5d0(ppppiStack_50);
  }
  uVar11 = 0x1e;
  if (iVar6 != 0) {
    uVar11 = FUN_1025b060();
  }
  FUN_104d1550("todayContribute",uVar11);
  uVar4 = 0;
  piVar10 = (int *)(unaff_EDI & 0xffffff);
  uVar5 = (uint)((int)local_b8 + (3 - (int)local_bc)) >> 2;
  pppiVar7 = (int ***)0x0;
  ppppiVar8 = (int ****)0x0;
  if (local_b8 < local_bc) {
    uVar5 = 0;
  }
  ppppiVar3 = local_bc;
  if (uVar5 != 0) {
    do {
      pppiVar7 = *ppppiVar3;
      if (((int)uVar11 < (int)pppiVar7) && ((char)((uint)piVar10 >> 0x18) == '\0')) {
        piVar10 = (int *)CONCAT13(1,(int3)piVar10);
        ppppiVar8 = (int ****)((int)pppiVar7 - uVar11);
      }
      uVar4 = uVar4 + 1;
      ppppiVar3 = ppppiVar3 + 1;
    } while (uVar4 != uVar5);
  }
  if (param_2 != 0) {
    pppiStack_64 = (int ***)0x0;
    ppppiStack_60 = (int ****)0x3;
    ppppiStack_5c = ppppiVar8;
    (*(code *)(*ppiStack_d4)[5])
              (uStack_cc,"todayRestLevelUp",&pppiStack_64,((byte)iStack_d0 & 0x8f) == 10);
    if (((uint)ppppiStack_70 >> 6 & 1) != 0) {
      (*(code *)(*ppppiStack_74)[2])(&ppppiStack_74,pppiStack_6c);
    }
    ppppiStack_74 = (int ****)0x0;
    ppppiStack_70 = (int ****)0x3;
    pppiStack_6c = pppiVar7;
    (*(code *)(*ppppiStack_e4)[5])
              (uVar11,"maxContribute",&ppppiStack_74,((byte)piVar10 & 0x8f) == 10);
    if (((uint)ppppiStack_60 >> 6 & 1) != 0) {
      (*(code *)(*pppiStack_64)[2])(&pppiStack_64,ppppiStack_5c);
    }
  }
  FUN_1024ebe0(&ppppiStack_e4,&stack0xffffff28,0x13ba,0);
  pppiStack_64 = (int ***)((uint)pppiStack_64 & 0xffffff00);
  ppppiStack_54 = &pppiStack_64;
  ppppiStack_50 = ppppiStack_54;
  FUN_100e5aa0(ppppiStack_54);
  FUN_104d1670("addOilText",ppppiStack_54);
  if ((ppppiStack_54 != &pppiStack_68) && (ppppiStack_54 != (int ****)0x0)) {
    FUN_10c3d5d0(ppppiStack_54);
  }
  FUN_1024ebe0(&pppppiStack_e8,&stack0xffffff24,0x13bb,0);
  pppiStack_68 = (int ***)((uint)pppiStack_68 & 0xffffff00);
  ppppiStack_58 = &pppiStack_68;
  ppppiStack_54 = ppppiStack_58;
  FUN_100e5aa0(ppppiStack_58);
  FUN_104d1670("finishText",ppppiStack_58);
  if ((ppppiStack_58 != &pppiStack_6c) && (ppppiStack_58 != (int ****)0x0)) {
    FUN_10c3d5d0(ppppiStack_58);
  }
  FUN_1024ebe0(&pppppiStack_ec,&stack0xffffff20,0x13bc,0);
  pppiStack_6c = (int ***)((uint)pppiStack_6c & 0xffffff00);
  ppppiStack_5c = &pppiStack_6c;
  ppppiStack_58 = ppppiStack_5c;
  FUN_100e5aa0(ppppiStack_5c);
  FUN_104d1670("hunterHonor",ppppiStack_5c);
  if (((int *****)ppppiStack_5c != &ppppiStack_70) && (ppppiStack_5c != (int ****)0x0)) {
    FUN_10c3d5d0(ppppiStack_5c);
  }
  if (pppppiVar9 != (int *****)0x0) {
    FUN_10c3da30(pppppiVar9);
  }
  if (appppiStack_c8[0] != (int ****)0x0) {
    FUN_10c3d5d0(appppiStack_c8[0]);
  }
  if ((uVar11 >> 6 & 1) != 0) {
    (**(code **)(*piVar10 + 8))(&stack0xffffff20,unaff_EBX);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1089c170 @ 1089c170  size=194 ===== */
// calls: CPet::SetName
// strings:
//   "RewardStateString"

/* [RE-AUTO c0]
   strings:
     ""RewardStateString"" */

void FUN_1089c170(void)

{
  int in_stack_00000010;
  undefined4 uVar1;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  CPet__SetName(&DAT_11d9d32b);
  if (in_stack_00000010 == 0) {
    uVar1 = 0x13b3;
  }
  else if (in_stack_00000010 == 1) {
    uVar1 = 0x13b4;
  }
  else {
    if (in_stack_00000010 != 2) goto LAB_1089c1d1;
    uVar1 = 0x13b5;
  }
  FUN_1024ebe0(&local_28,local_2c,uVar1,0);
LAB_1089c1d1:
  local_14 = local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  FUN_104d1670("RewardStateString",local_10);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  if (local_28 != 0) {
    FUN_10c3da30(local_28);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1089c9b0 @ 1089c9b0  size=1548 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "STATIC_DailyScheduleRewardItemData"
//   "rewardItemArray"
//   "itemID"
//   "itemName"
//   "itemCounts"
//   "packItemName"
//   "boundMoneyPrice"
//   "moneyPrice"

/* [RE-AUTO c0]
   strings:
     ""STATIC_DailyScheduleRewardItemData""
     ""rewardItemArray""
     ""itemID""
     ""itemName""
     ""itemCounts""
     ""packItemName""
     ""boundMoneyPrice""
     ""moneyPrice"" */

void FUN_1089c9b0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  float unaff_EDI;
  int iVar7;
  float fVar8;
  undefined4 *in_stack_00000010;
  undefined4 *puVar9;
  float fStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  int *piStack_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  int *local_1b8;
  uint local_1b4;
  int *local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  int *local_1a0;
  uint local_19c;
  int *local_198;
  uint local_194;
  undefined4 *local_190 [2];
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  uint uStack_17c;
  int *piStack_178;
  undefined4 uStack_170;
  int *piStack_168;
  uint uStack_164;
  uint auStack_160 [2];
  int **ppiStack_158;
  int **ppiStack_154;
  uint *puStack_150;
  uint *puStack_14c;
  int iStack_138;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&fStack_1d4;
  local_1a0 = (int *)0x0;
  local_19c = in_stack_00000010[1];
  local_194 = in_stack_00000010[3];
  local_198 = (int *)in_stack_00000010[2];
  local_190[0] = (undefined4 *)in_stack_00000010[4];
  if ((local_19c >> 6 & 1) != 0) {
    local_1a0 = (int *)*in_stack_00000010;
    (**(code **)(*local_1a0 + 4))(&local_1a0,local_198);
  }
  local_1b4 = in_stack_00000010[7];
  local_1b0 = (int *)in_stack_00000010[8];
  local_1ac = in_stack_00000010[9];
  local_1a8 = in_stack_00000010[10];
  local_1b8 = (int *)0x0;
  if ((local_1b4 >> 6 & 1) != 0) {
    local_1b8 = (int *)in_stack_00000010[6];
    (**(code **)(*local_1b8 + 4))(&local_1b8,in_stack_00000010[8]);
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
    piStack_1c8 = (int *)in_stack_00000010[0xe];
  }
  else {
    piStack_1c8 = (int *)0xdeadbeaf;
  }
  if (((in_stack_00000010[0x13] & 0x8f) == 3) || ((in_stack_00000010[0x13] & 0x8f) == 4)) {
    uStack_1c0 = in_stack_00000010[0x14];
  }
  else {
    uStack_1c0 = 0xdeadbeaf;
  }
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_1cc = CONCAT31(uStack_1cc._1_3_,((byte)local_19c & 0x8f) == 10);
  iStack_1d0 = 0;
  cVar2 = (**(code **)(*local_1a0 + 0x10))
                    (local_198,"STATIC_DailyScheduleRewardItemData",&uStack_188,uStack_1cc);
  if ((cVar2 != '\0') && (((byte)local_194 & 0x8f) == 6)) {
    piStack_168 = (int *)0x0;
    uStack_164 = 0;
    cVar2 = (**(code **)(*piStack_1c8 + 0x10))
                      (uStack_1c0,"rewardItemArray",&piStack_168,((byte)uStack_1c4 & 0x8f) == 10);
    if (cVar2 != '\0') {
      if (((byte)local_194 & 0x8f) == 6) {
        puVar9 = local_190[0];
        if ((local_194 >> 6 & 1) != 0) {
          puVar9 = (undefined4 *)*local_190[0];
        }
      }
      else {
        puVar9 = (undefined4 *)&DAT_11d9d32b;
      }
      fStack_1d4 = (float)FUN_10254130(unaff_EBX);
      if ((fStack_1d4 != 0.0) && (*(int *)((int)fStack_1d4 + 0x34) == 1)) {
        iVar3 = *(int *)((int)fStack_1d4 + 0x164);
        uStack_1cc = 0;
        iVar5 = *(int *)((int)fStack_1d4 + 0x168) - iVar3;
        iVar7 = iVar5 >> 0x1f;
        if (iVar5 / 0x114 + iVar7 != iVar7) {
          iVar7 = 0;
          do {
            FUN_1052f520(iVar7 + iVar3);
            if (iStack_138 != 0xbc9) {
              FUN_10540e00();
              break;
            }
            FUN_10540e00();
            iVar7 = iVar7 + 0x114;
            uStack_1cc = uStack_1cc + 1;
            iVar3 = *(int *)((int)fStack_1d4 + 0x164);
          } while (uStack_1cc < (uint)((*(int *)((int)fStack_1d4 + 0x168) - iVar3) / 0x114));
        }
      }
      fStack_1d4 = (float)FUN_1052c520(unaff_EDI);
      if ((fStack_1d4 != 0.0) &&
         (unaff_EDI = *(float *)((int)fStack_1d4 + 0x24),
         unaff_EDI != *(float *)((int)fStack_1d4 + 0x28))) {
        do {
          iVar3 = FUN_1052c6a0(*(undefined4 *)((int)unaff_EDI + 4));
          if ((iVar3 != 0) &&
             (puVar6 = *(undefined4 **)(iVar3 + 0x18), puVar6 != *(undefined4 **)(iVar3 + 0x1c))) {
            do {
              piStack_180 = (int *)0x0;
              uStack_17c = 0;
              FUN_11a98de0(&piStack_180,puVar9,0,0);
              FUN_104d1440("itemID",*puVar6);
              iVar7 = FUN_10254130(*puVar6);
              if (iVar7 != 0) {
                puStack_150 = auStack_160;
                auStack_160[0] = auStack_160[0] & 0xffffff00;
                puStack_14c = puStack_150;
                FUN_100e5aa0(puStack_150);
                FUN_104d1670("itemName",puStack_150);
                if ((puStack_14c != auStack_160) && (puStack_14c != (uint *)0x0)) {
                  FUN_10c3d5d0(puStack_14c);
                }
              }
              FUN_104d1440("itemCounts",puVar6[3]);
              (**(code **)(*piStack_178 + 0x3c))(uStack_170,local_190);
              if ((uStack_17c >> 6 & 1) != 0) {
                (**(code **)(*piStack_180 + 8))(&piStack_180,piStack_178);
              }
              puVar6 = puVar6 + 9;
            } while (puVar6 != *(undefined4 **)(iVar3 + 0x1c));
          }
          unaff_EDI = (float)((int)unaff_EDI + 0x14);
        } while (unaff_EDI != *(float *)((int)fStack_1d4 + 0x28));
      }
    }
    if ((uStack_164 >> 6 & 1) != 0) {
      (**(code **)(*piStack_168 + 8))(&piStack_168,auStack_160[0]);
    }
  }
  iVar3 = FUN_10254130(unaff_EBX);
  if (iVar3 != 0) {
    ppiStack_158 = &piStack_168;
    piStack_168 = (int *)((uint)piStack_168 & 0xffffff00);
    ppiStack_154 = ppiStack_158;
    FUN_100e5aa0(ppiStack_158);
    FUN_104d1670("packItemName",ppiStack_158);
    if ((ppiStack_154 != &piStack_168) && (ppiStack_154 != (int **)0x0)) {
      FUN_10c3d5d0(ppiStack_154);
    }
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0)) {
    uVar4 = CPlayer__GetHuntRankOrCount(&fStack_1d4,&stack0xfffffe20,&stack0xfffffe28);
    FUN_11863d90(uVar4);
    iStack_1d0 = FUN_1089a6a0(iStack_1d0);
    if (iStack_1d0 != 0) {
      iVar3 = FUN_11a13970();
      fVar8 = (float)iVar3 * fStack_1d4;
      iVar3 = FUN_11a13bb0();
      FUN_104d1550("boundMoneyPrice",(int)fVar8);
      FUN_104d1550("moneyPrice",(int)((float)iVar3 * unaff_EDI));
      FUN_11a139c0();
      FUN_104d14d0(&DAT_11dbfbc8);
    }
  }
  if ((local_194 >> 6 & 1) != 0) {
    (**(code **)(*local_198 + 8))(&local_198,local_190[0]);
    local_198 = (int *)0x0;
  }
  local_194 = 0;
  if ((uStack_1c4 >> 6 & 1) != 0) {
    (**(code **)(*piStack_1c8 + 8))(&piStack_1c8,uStack_1c0);
    piStack_1c8 = (int *)0x0;
  }
  uStack_1c4 = 0;
  if ((local_1ac >> 6 & 1) != 0) {
    (**(code **)(*local_1b0 + 8))(&local_1b0,local_1a8);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a3110 @ 108a3110  size=2433 ===== */
// strings:
//   "SwapInventoryItem"
//   "SwapInventoryItems"
//   "SplitInventoryItem"
//   "TidyInventoryItem"
//   "ClickInventoryItem"
//   "DiscardInventoryItem"
//   "ExpandInventoryItem"
//   "MoveInventoryItem"
//   "MsgBoxEnchantOk"
//   "GetExpandCostData"
//   "GetItemData"
//   "ClickTaskItemUse"
//   "requestEnchantForPetEquip"
//   "GetSupplyPlanList"
//   "GetItemInSupplyPlan"
//   "RenameSupplyPlan"
//   "UnlockSupplyPlan"
//   "SaveInventoryToSupplyPlan"
//   "ChangeCurrentSupplyPlan"
//   "LoadInventoryFromSupplyPlan"

/* [RE-AUTO c0]
   strings:
     ""SwapInventoryItem""
     ""SwapInventoryItems""
     ""SplitInventoryItem""
     ""TidyInventoryItem""
     ""ClickInventoryItem""
     ""DiscardInventoryItem""
     ""ExpandInventoryItem""
     ""MoveInventoryItem""
     ""MsgBoxEnchantOk""
     ""GetExpandCostData"" */

void __fastcall FUN_108a3110(code ****param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  code *pcStack_230;
  char *pcStack_22c;
  code **ppcStack_228;
  undefined4 ***pppuStack_224;
  code *pcStack_220;
  code **ppcStack_21c;
  code ***pppcStack_218;
  undefined4 ***pppuStack_214;
  code ***pppcStack_210;
  code **ppcStack_20c;
  char *pcStack_208;
  code ***pppcStack_204;
  code ***pppcStack_200;
  code ***pppcStack_1fc;
  code *pcStack_1f8;
  char *pcStack_1f4;
  undefined4 ***pppuStack_1f0;
  code ***pppcStack_1ec;
  code ***pppcStack_1e8;
  code *pcStack_1e4;
  char *pcStack_1e0;
  undefined4 ***pppuStack_1dc;
  code ***pppcStack_1d8;
  undefined4 ***pppuStack_1d4;
  char *pcStack_1d0;
  code ***pppcStack_1cc;
  code ***pppcStack_1c8;
  undefined4 ***pppuStack_1c4;
  undefined4 ***pppuStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  code ***pppcStack_1b0;
  code ***pppcStack_1ac;
  code ***pppcStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  code ***pppcStack_19c;
  code ***pppcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
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
  undefined4 ***pppuStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  code ***pppcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  undefined4 ***pppuStack_fc;
  code ***pppcStack_f8;
  code ***pppcStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  undefined4 ***pppuStack_e8;
  undefined4 ***pppuStack_e4;
  undefined4 ***pppuStack_e0;
  code ***pppcStack_dc;
  undefined4 ***pppuStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  char *pcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code *pcStack_bc;
  char *pcStack_b8;
  code ***pppcStack_b4;
  undefined4 ***pppuStack_b0;
  code ***pppcStack_ac;
  code *pcStack_a8;
  char *pcStack_a4;
  code ***pppcStack_a0;
  undefined4 ***pppuStack_9c;
  code ***pppcStack_98;
  undefined1 *puStack_94;
  char *pcStack_90;
  code ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code *pcStack_80;
  char *pcStack_7c;
  code ***pppcStack_78;
  undefined4 ***pppuStack_74;
  code ***pppcStack_70;
  code *pcStack_6c;
  char *pcStack_68;
  undefined4 ***pppuStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code *pcStack_58;
  char *pcStack_54;
  undefined4 ***pppuStack_50;
  undefined4 ***pppuStack_4c;
  undefined4 ***pppuStack_48;
  char *pcStack_44;
  code ***pppcStack_40;
  char **ppcStack_3c;
  code ***pppcStack_38;
  undefined4 ***pppuStack_34;
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
  pcStack_30 = "SwapInventoryItem";
  pppuStack_34 = (undefined4 ***)0x108a3144;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)FUN_108a3ee0;
  ppcStack_3c = &pcStack_2c;
  pppcStack_40 = (code ***)0x108a315f;
  pppcStack_38 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppcStack_40 = local_24[0];
    pcStack_44 = (char *)0x108a3175;
    FUN_10c3d5d0();
  }
  local_24[0] = (code ***)&pppcStack_38;
  pppcStack_40 = (code ***)0x11dd3f56;
  pcStack_44 = "SwapInventoryItems";
  pppuStack_48 = (undefined4 ***)0x108a3195;
  FUN_100b62c0();
  pppuStack_48 = (undefined4 ***)FUN_108a4420;
  pppuStack_4c = &pppcStack_40;
  pppuStack_50 = (undefined4 ***)0x108a31a6;
  FUN_108a8be0();
  if (((undefined4 ****)pppuStack_34 != &pppuStack_48) &&
     ((undefined4 ****)pppuStack_34 != (undefined4 ****)0x0)) {
    pppuStack_50 = pppuStack_34;
    pcStack_54 = (char *)0x108a31bc;
    FUN_10c3d5d0();
  }
  pppcStack_38 = (code ***)&pppuStack_48;
  pppuStack_50 = (undefined4 ***)0x11dd3f6a;
  pcStack_54 = "SplitInventoryItem";
  pcStack_58 = (code *)0x108a31dc;
  pppuStack_34 = (undefined4 ***)pppcStack_38;
  FUN_100b62c0();
  pcStack_58 = FUN_108a4ab0;
  pppcStack_60 = (code ***)&pppuStack_50;
  pppuStack_64 = (undefined4 ***)0x108a31f7;
  pppcStack_5c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppuStack_48 != &pppcStack_5c) && ((code ****)pppuStack_48 != (code ****)0x0)) {
    pppuStack_64 = pppuStack_48;
    pcStack_68 = (char *)0x108a320d;
    FUN_10c3d5d0();
  }
  pppuStack_4c = &pppcStack_5c;
  pppuStack_64 = (undefined4 ***)0x11dd3f7d;
  pcStack_68 = "TidyInventoryItem";
  pcStack_6c = (code *)0x108a322d;
  pppuStack_48 = pppuStack_4c;
  FUN_100b62c0();
  pcStack_6c = FUN_108a4d80;
  pppuStack_74 = &pppuStack_64;
  pppcStack_78 = (code ***)0x108a3248;
  pppcStack_70 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_5c != &pppcStack_70) && ((code ****)pppcStack_5c != (code ****)0x0)) {
    pppcStack_78 = pppcStack_5c;
    pcStack_7c = (char *)0x108a325e;
    FUN_10c3d5d0();
  }
  pppcStack_60 = (code ***)&pppcStack_70;
  pppcStack_78 = (code ***)0x11dd3f92;
  pcStack_7c = "ClickInventoryItem";
  pcStack_80 = (code *)0x108a327e;
  pppcStack_5c = pppcStack_60;
  FUN_100b62c0();
  pcStack_80 = FUN_108a5550;
  pppuStack_88 = &pppcStack_78;
  pppcStack_8c = (code ***)0x108a3299;
  pppcStack_84 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pcStack_90 = (char *)0x108a32af;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppcStack_8c = (code ***)0x11dd3fa8;
  pcStack_90 = "DiscardInventoryItem";
  puStack_94 = (undefined1 *)0x108a32cf;
  pppcStack_70 = (code ***)pppuStack_74;
  FUN_100b62c0();
  puStack_94 = &LAB_108a57e0;
  pppuStack_9c = &pppcStack_8c;
  pppcStack_a0 = (code ***)0x108a32ea;
  pppcStack_98 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_84 != &pppcStack_98) && ((code ****)pppcStack_84 != (code ****)0x0)) {
    pppcStack_a0 = pppcStack_84;
    pcStack_a4 = (char *)0x108a3300;
    FUN_10c3d5d0();
  }
  pppuStack_88 = &pppcStack_98;
  pppcStack_a0 = (code ***)0x11dd3e97;
  pcStack_a4 = "ExpandInventoryItem";
  pcStack_a8 = (code *)0x108a3320;
  pppcStack_84 = (code ***)pppuStack_88;
  FUN_100b62c0();
  pcStack_a8 = FUN_108a5850;
  pppuStack_b0 = &pppcStack_a0;
  pppcStack_b4 = (code ***)0x108a333b;
  pppcStack_ac = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_98 != &pppcStack_ac) && ((code ****)pppcStack_98 != (code ****)0x0)) {
    pppcStack_b4 = pppcStack_98;
    pcStack_b8 = (char *)0x108a3351;
    FUN_10c3d5d0();
  }
  pppuStack_9c = &pppcStack_ac;
  pppcStack_b4 = (code ***)0x11dd3ea9;
  pcStack_b8 = "MoveInventoryItem";
  pcStack_bc = (code *)0x108a3371;
  pppcStack_98 = (code ***)pppuStack_9c;
  FUN_100b62c0();
  pcStack_bc = FUN_108a5890;
  pppcStack_c4 = (code ***)&pppcStack_b4;
  pppcStack_c8 = (code ***)0x108a338c;
  pppcStack_c0 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_ac != &pppcStack_c0) && ((code ****)pppcStack_ac != (code ****)0x0)) {
    pppcStack_c8 = pppcStack_ac;
    pcStack_cc = (char *)0x108a33a2;
    FUN_10c3d5d0();
  }
  pppuStack_b0 = &pppcStack_c0;
  pppcStack_c8 = (code ***)0x11dd3ebb;
  pcStack_cc = "MsgBoxEnchantOk";
  pppcStack_d0 = (code ***)0x108a33c2;
  pppcStack_ac = (code ***)pppuStack_b0;
  FUN_100b62c0();
  pppcStack_d0 = (code ***)&LAB_108a5710;
  pppuStack_d8 = &pppcStack_c8;
  pppcStack_dc = (code ***)0x108a33dd;
  pppcStack_d4 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppuStack_e0 = (undefined4 ***)0x108a33f3;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd3ecd;
  pppuStack_e0 = (undefined4 ***)0x11dd3ebc;
  pppuStack_e4 = (undefined4 ***)0x108a3413;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppuStack_e4 = (undefined4 ***)FUN_108a7660;
  pppuStack_e8 = &pppcStack_dc;
  pppcStack_ec = (code ***)0x108a3424;
  FUN_108a8be0();
  if (((undefined4 ****)pppcStack_d0 != &pppuStack_e4) &&
     ((undefined4 ****)pppcStack_d0 != (undefined4 ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x108a343a;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppuStack_e4;
  pppcStack_ec = (code ***)0x11dd3edb;
  pppcStack_f0 = (code ***)0x11dd3ed0;
  pppcStack_f4 = (code ***)0x108a345a;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_108a6bb0;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppuStack_fc = (undefined4 ***)0x108a346b;
  FUN_108a8be0();
  if (((code ****)pppuStack_e0 != &pppcStack_f4) && ((code ****)pppuStack_e0 != (code ****)0x0)) {
    pppuStack_fc = pppuStack_e0;
    pppcStack_100 = (code ***)0x108a3481;
    FUN_10c3d5d0();
  }
  pppuStack_e4 = &pppcStack_f4;
  pppuStack_fc = (undefined4 ***)0x11dd3eec;
  pppcStack_100 = (code ***)0x11dd3edc;
  pppcStack_104 = (code ***)0x108a34a1;
  pppuStack_e0 = pppuStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)&LAB_108a3ab0;
  pppcStack_108 = (code ***)&pppuStack_fc;
  pppcStack_10c = (code ***)0x108a34b2;
  FUN_108a8be0();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x108a34c8;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd3f09;
  pppcStack_110 = (code ***)0x11dd3ef0;
  pppcStack_114 = (code ***)0x108a34e8;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_108a3b40;
  pppuStack_118 = &pppcStack_10c;
  pppcStack_11c = (code ***)0x108a34f9;
  FUN_108a8be0();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x108a350f;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd3f1d;
  pppcStack_120 = (code ***)0x11dd3f0c;
  pppcStack_124 = (code ***)0x108a352f;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)data__SupplyPlanMo_108a7990;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x108a3540;
  FUN_108a8be0();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x108a3556;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd4073;
  pppcStack_130 = (code ***)0x11dd4060;
  pppcStack_134 = (code ***)0x108a3576;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_108a7c50;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x108a3587;
  FUN_108a8be0();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x108a359d;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dd4084;
  pppcStack_140 = (code ***)0x11dd4074;
  pppcStack_144 = (code ***)0x108a35bd;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_108a8030;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x108a35ce;
  FUN_108a8be0();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x108a35e4;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dd4098;
  pppcStack_150 = (code ***)0x11dd4088;
  pppcStack_154 = (code ***)0x108a3604;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_108a8160;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x108a3615;
  FUN_108a8be0();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x108a362b;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dd40b5;
  pppcStack_160 = (code ***)0x11dd409c;
  pppcStack_164 = (code ***)0x108a364b;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_108a81d0;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x108a365c;
  FUN_108a8be0();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x108a3672;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dd40cf;
  pppcStack_170 = (code ***)0x11dd40b8;
  pppcStack_174 = (code ***)0x108a3692;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_108a8240;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x108a36a3;
  FUN_108a8be0();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    pppcStack_180 = (code ***)0x108a36b9;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11dd40eb;
  pppcStack_180 = (code ***)0x11dd40d0;
  pppcStack_184 = (code ***)0x108a36d9;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)FUN_108a82b0;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x108a36ea;
  FUN_108a8be0();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x108a3700;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11dbf5ee;
  pppcStack_190 = (code ***)0x11dbf5e0;
  pppcStack_194 = (code ***)0x108a3720;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_108a63f0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  pppcStack_19c = (code ***)0x108a3731;
  FUN_108a8be0();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x108a3747;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11dd40fe;
  pppcStack_1a0 = (code ***)0x11dd40ec;
  pppcStack_1a4 = (code ***)0x108a3767;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_108a69d0;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x108a3778;
  FUN_108a8be0();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppcStack_1b0 = (code ***)0x108a378e;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11dd4113;
  pppcStack_1b0 = (code ***)0x11dd4100;
  pppcStack_1b4 = (code ***)0x108a37ae;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppcStack_1b4 = (code ***)FUN_108a67f0;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x108a37bf;
  FUN_108a8be0();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pppuStack_1c0 = (undefined4 ***)0x108a37d5;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dd3fc6;
  pppuStack_1c0 = (undefined4 ***)0x11dd3fac;
  pppuStack_1c4 = (undefined4 ***)0x108a37f5;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppuStack_1c4 = (undefined4 ***)FUN_108a6950;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppcStack_1cc = (code ***)0x108a3806;
  FUN_108a8be0();
  if (((undefined4 ****)pppcStack_1b0 != &pppuStack_1c4) &&
     ((undefined4 ****)pppcStack_1b0 != (undefined4 ****)0x0)) {
    pppcStack_1cc = pppcStack_1b0;
    pcStack_1d0 = (char *)0x108a381c;
    FUN_10c3d5d0();
  }
  pppcStack_1b4 = (code ***)&pppuStack_1c4;
  pppcStack_1cc = (code ***)0x11dd3fd8;
  pcStack_1d0 = "GetSkillItemInfo";
  pppuStack_1d4 = (undefined4 ***)0x108a383c;
  pppcStack_1b0 = pppcStack_1b4;
  FUN_100b62c0();
  pppuStack_1d4 = (undefined4 ***)FUN_108a86a0;
  pppcStack_1d8 = (code ***)&pppcStack_1cc;
  pppuStack_1dc = (undefined4 ***)0x108a384d;
  FUN_108a8be0();
  if (((undefined4 ****)pppuStack_1c0 != &pppuStack_1d4) &&
     ((undefined4 ****)pppuStack_1c0 != (undefined4 ****)0x0)) {
    pppuStack_1dc = pppuStack_1c0;
    pcStack_1e0 = (char *)0x108a3863;
    FUN_10c3d5d0();
  }
  pppuStack_1c4 = &pppuStack_1d4;
  pppuStack_1dc = (undefined4 ***)0x11dd3ff5;
  pcStack_1e0 = "UnionItemRespondOkHandler";
  pcStack_1e4 = (code *)0x108a3883;
  pppuStack_1c0 = pppuStack_1c4;
  FUN_100b62c0();
  pcStack_1e4 = FUN_108a4a30;
  pppcStack_1ec = (code ***)&pppuStack_1dc;
  pppuStack_1f0 = (undefined4 ***)0x108a389e;
  pppcStack_1e8 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppuStack_1d4 != &pppcStack_1e8) && ((code ****)pppuStack_1d4 != (code ****)0x0))
  {
    pppuStack_1f0 = pppuStack_1d4;
    pcStack_1f4 = (char *)0x108a38b4;
    FUN_10c3d5d0();
  }
  pppcStack_1d8 = (code ***)&pppcStack_1e8;
  pppuStack_1f0 = (undefined4 ***)0x11dd4016;
  pcStack_1f4 = "UnionGuildItemRespondOkHandler";
  pcStack_1f8 = (code *)0x108a38d4;
  pppuStack_1d4 = (undefined4 ***)pppcStack_1d8;
  FUN_100b62c0();
  pcStack_1f8 = FUN_108a48a0;
  pppcStack_200 = (code ***)&pppuStack_1f0;
  pppcStack_204 = (code ***)0x108a38ef;
  pppcStack_1fc = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_1e8 != &pppcStack_1fc) && ((code ****)pppcStack_1e8 != (code ****)0x0))
  {
    pppcStack_204 = pppcStack_1e8;
    pcStack_208 = (char *)0x108a3905;
    FUN_10c3d5d0();
  }
  pppcStack_1ec = (code ***)&pppcStack_1fc;
  pppcStack_204 = (code ***)0x11dd4025;
  pcStack_208 = "UnEquipALL_OK";
  ppcStack_20c = (code **)0x108a3925;
  pppcStack_1e8 = pppcStack_1ec;
  FUN_100b62c0();
  ppcStack_20c = (code **)&LAB_108a67a0;
  pppuStack_214 = &pppcStack_204;
  pppcStack_218 = (code ***)0x108a3940;
  pppcStack_210 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_1fc != &pppcStack_210) && ((code ****)pppcStack_1fc != (code ****)0x0))
  {
    pppcStack_218 = pppcStack_1fc;
    ppcStack_21c = (code **)0x108a3956;
    FUN_10c3d5d0();
  }
  pppcStack_200 = (code ***)&pppcStack_210;
  pppcStack_218 = (code ***)0x11dd4033;
  ppcStack_21c = (code **)0x11dd4028;
  pcStack_220 = (code *)0x108a3976;
  pppcStack_1fc = pppcStack_200;
  FUN_100b62c0();
  pcStack_220 = FUN_108a8320;
  pppuStack_224 = &pppcStack_218;
  ppcStack_228 = (code **)0x108a3987;
  FUN_108a8be0();
  if ((ppcStack_20c != &pcStack_220) && (ppcStack_20c != (code **)0x0)) {
    ppcStack_228 = ppcStack_20c;
    pcStack_22c = (char *)0x108a399d;
    FUN_10c3d5d0();
  }
  pppcStack_210 = (code ***)&pcStack_220;
  ppcStack_228 = (code **)0x11dd404c;
  pcStack_22c = "CanItemUseInCurrentLevel";
  pcStack_230 = (code *)0x108a39bd;
  ppcStack_20c = (code **)pppcStack_210;
  FUN_100b62c0();
  pcStack_230 = FUN_108a3cd0;
  FUN_108a8be0(&ppcStack_228);
  if ((ppcStack_21c != &pcStack_230) && (ppcStack_21c != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_21c);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_108ab560();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_108ab5b0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_108ab600();
    }
  }
  param_1[10] = (code ***)0xffffffff;
  param_1[9] = (code ***)0xffffffff;
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a55e0 @ 108a55e0  size=296 ===== */
// strings:
//   "MsgBoxEnchantOk"

/* [RE-AUTO c0]
   strings:
     ""MsgBoxEnchantOk"" */

void __thiscall
FUN_108a55e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_2 != 0) {
    iVar1 = FUN_113f9bb0(param_3,param_4);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_113f9bb0(param_5,param_6);
      if (piVar2 != (int *)0x0) {
        uVar6 = 0;
        iVar3 = FUN_11671b50();
        iVar1 = *(int *)(iVar3 + 0x164);
        iVar5 = *(int *)(iVar3 + 0x168) - iVar1;
        iVar3 = iVar5 >> 0x1f;
        if ((iVar5 / 0x114 + iVar3 != iVar3) && (*(int *)(iVar1 + 4) == 0xbbc)) {
          uVar6 = *(undefined4 *)(iVar1 + 0xf8);
        }
        iVar1 = FUN_1050ed80(uVar6);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          *(undefined4 *)(param_1 + 0x30) = param_4;
          *(undefined4 *)(param_1 + 0x34) = param_5;
          *(undefined4 *)(param_1 + 0x38) = param_6;
          FUN_1112d520();
          uVar6 = 0x1fde;
          iVar3 = (**(code **)(*piVar2 + 0x3c))();
          if (iVar3 != 0) {
            uVar6 = 0x1fdf;
          }
          uVar4 = FUN_1050ea70(iVar1 + 0x38,0x2a);
          FUN_1112d7d0(uVar6,"MsgBoxEnchantOk",&DAT_11d9d32b,&stack0xffffffd8,uVar4);
          FUN_1112d550();
        }
      }
    }
  }
  return;
}



/* ===== FUN_108a63f0 @ 108a63f0  size=932 ===== */
// strings:
//   "m_nEnchantTime"
//   "m_strEnchantDesc"

/* [RE-AUTO c0]
   strings:
     ""m_nEnchantTime""
     ""m_strEnchantDesc"" */

void FUN_108a63f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_8c [7];
  char cStack_85;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined8 uStack_78;
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_8c;
  local_80 = param_2;
  if (((param_5 != 8) ||
      (iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))(), iVar3 == 0)
      ) || (iStack_7c = *(int *)(iVar3 + 0x260e0), iStack_7c == 0)) goto LAB_108a65fb;
  uVar4 = *(uint *)(param_4 + 4) & 0x8f;
  if ((uVar4 == 3) || (uVar4 == 4)) {
    uStack_84 = *(undefined4 *)(param_4 + 8);
  }
  else {
    uStack_84 = 0xdeadbeaf;
  }
  uVar4 = *(uint *)(param_4 + 0x1c) & 0x8f;
  if ((uVar4 == 3) || (iVar3 = -0x21524151, uVar4 == 4)) {
    iVar3 = *(int *)(param_4 + 0x20);
  }
  FUN_104f4330(param_4 + 0x30);
  FUN_104f4330(param_4 + 0x48);
  FUN_104f4330(param_4 + 0x60);
  if (((byte)*(undefined4 *)(param_4 + 0x7c) & 0x8f) == 2) {
    cStack_85 = *(char *)(param_4 + 0x80);
  }
  else {
    cStack_85 = '\0';
  }
  if (((byte)*(undefined4 *)(param_4 + 0x94) & 0x8f) == 5) {
    uStack_78 = *(undefined8 *)(param_4 + 0x98);
  }
  else {
    uStack_78 = 0;
  }
  if (iVar3 == 6) {
    if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) &&
        ((iVar3 = (**(code **)(*piVar6 + 0xb4))(), iVar3 != 0 &&
         (*(int **)(iVar3 + 0x2cd8) != (int *)0x0)))) &&
       (iVar3 = (**(code **)(**(int **)(iVar3 + 0x2cd8) + 0x54))(), iVar3 != 0)) {
      uVar5 = FUN_112f5b90(uStack_84,*(undefined4 *)(DAT_123bb978 + 0x34));
      piVar6 = (int *)FUN_113f9bb0(6,uVar5);
      uVar1 = uStack_78;
      goto joined_r0x108a665e;
    }
  }
  else {
    if (((byte)uStack_3c & 0x8f) == 2) {
      piVar6 = (int *)FUN_113f9bb0(iVar3,uStack_84);
      uVar1 = uStack_78;
    }
    else {
      if (DAT_1202e818 == 0) goto LAB_108a6584;
      piVar6 = (int *)FUN_10858a70();
      uVar1 = uStack_78;
    }
joined_r0x108a665e:
    uStack_78 = uVar1;
    if (piVar6 != (int *)0x0) {
      if (cStack_85 == '\0') {
LAB_108a668b:
        if (piVar6 != (int *)0x0) {
          uVar5 = (**(code **)(*piVar6 + 0x3c))();
          iVar3 = FUN_1050ed80(uVar5);
          if (iVar3 != 0) {
            if (*(int *)(iVar3 + 0x30) == 0) {
              FUN_104d1550("m_nEnchantTime",0xffffffff);
            }
            else {
              iVar3 = FUN_10a136c0();
              iVar7 = (**(code **)(*piVar6 + 0x40))();
              FUN_104d1440("m_nEnchantTime",iVar3 - iVar7);
            }
            iVar3 = FUN_100e5b40(auStack_24);
            FUN_104d1670("m_strEnchantDesc",*(undefined4 *)(iVar3 + 0x14));
            if ((puStack_14 != auStack_28) && (puStack_14 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_14);
            }
            goto LAB_108a6762;
          }
        }
      }
      else if (DAT_1202e818 != 0) {
        uStack_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar5 = uStack_78._4_4_;
        uStack_78._0_4_ = (undefined4)uVar1;
        uVar2 = (undefined4)uStack_78;
        piVar6 = (int *)FUN_10858670(uVar2,uVar5,0);
        goto LAB_108a668b;
      }
      FUN_104d1550("m_nEnchantTime",0xffffffff);
      FUN_104d1670("m_strEnchantDesc",&DAT_11d9d32b);
LAB_108a6762:
      FUN_104d7c10();
      FUN_104d7c10();
      FUN_104d7c10();
      FUN_11a89daa();
      return;
    }
  }
LAB_108a6584:
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
  if ((uStack_6c >> 6 & 1) != 0) {
    (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
  }
LAB_108a65fb:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a69d0 @ 108a69d0  size=467 ===== */
// strings:
//   "m_nEnchantNeedLevMin"
//   "m_nEnchantNeedLevMax"
//   "m_nEnchantNeedBelong"
//   "m_nEnchantNeedType"
//   "m_nEnchantNeedSubType"
//   "m_nEnchantNeedQualityMin"
//   "m_nEnchantNeedRankMin"
//   "m_strEnchantItemDesc"

/* [RE-AUTO c0]
   strings:
     ""m_nEnchantNeedLevMin""
     ""m_nEnchantNeedLevMax""
     ""m_nEnchantNeedBelong""
     ""m_nEnchantNeedType""
     ""m_nEnchantNeedSubType""
     ""m_nEnchantNeedQualityMin""
     ""m_nEnchantNeedRankMin""
     ""m_strEnchantItemDesc"" */

void FUN_108a69d0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [20];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_44;
  if (in_stack_00000014 == 2) {
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x260e0) != 0)) {
      uVar3 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
      if ((uVar3 == 3) || (uVar5 = 0xdeadbeaf, uVar3 == 4)) {
        uVar5 = *(undefined4 *)(in_stack_00000010 + 8);
      }
      FUN_104f4330(in_stack_00000010 + 0x18);
      iVar2 = FUN_10254130(uVar5);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x34) == 1)) {
        iVar2 = FUN_10540d00(uVar5);
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 0x164);
          iVar4 = *(int *)(iVar2 + 0x168) - iVar1;
          iVar2 = iVar4 >> 0x1f;
          if ((iVar4 / 0x114 + iVar2 != iVar2) && (*(int *)(iVar1 + 4) == 0xbbc)) {
            iVar2 = FUN_1050ed80(*(undefined4 *)(iVar1 + 0xf8));
            if (iVar2 != 0) {
              FUN_104d1440("m_nEnchantNeedLevMin",*(undefined4 *)(iVar2 + 0x14));
              FUN_104d1440("m_nEnchantNeedLevMax",*(undefined4 *)(iVar2 + 0x18));
              FUN_104d1440("m_nEnchantNeedBelong",*(undefined4 *)(iVar2 + 0x1c));
              FUN_104d1440("m_nEnchantNeedType",*(undefined4 *)(iVar2 + 0x20));
              FUN_104d1440("m_nEnchantNeedSubType",*(undefined4 *)(iVar2 + 0x24));
              FUN_104d1440("m_nEnchantNeedQualityMin",*(undefined4 *)(iVar2 + 0x28));
              FUN_104d1440("m_nEnchantNeedRankMin",*(undefined4 *)(iVar2 + 0x2c));
              iVar2 = FUN_100e5b40(auStack_28);
              FUN_104d1670("m_strEnchantItemDesc",*(undefined4 *)(iVar2 + 0x14));
              if ((puStack_14 != auStack_28) && (puStack_14 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_14);
              }
            }
          }
        }
      }
      FUN_104d7c10();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a6bb0 @ 108a6bb0  size=2728 ===== */
// strings:
//   "ITEM_VO_CLASSNAME"
//   "collumn"
//   "m_strPhonetics"
//   "count"
//   "asset"
//   "m_nBindType"
//   "m_bMallItem"
//   "m_typeNormal"
//   "m_typeSub"
//   "m_bUseItem"
//   "m_bCanDecompose"
//   "m_nCDTime"
//   "m_nCDGroupTag"
//   "m_nUseTimes"
//   "m_nMaxUseTimes"
//   "m_nCDRemainTime"
//   "m_nRareType"
//   "isBind"
//   "m_nSellPrice"
//   "m_nExpireTime"

/* [RE-AUTO c0]
   strings:
     ""ITEM_VO_CLASSNAME""
     ""collumn""
     ""m_strPhonetics""
     ""count""
     ""asset""
     ""m_nBindType""
     ""m_bMallItem""
     ""m_typeNormal""
     ""m_typeSub""
     ""m_bUseItem"" */

void FUN_108a6bb0(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  float10 fVar11;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int ***pppiVar12;
  int **ppiStack_144;
  int ***pppiStack_140;
  char **ppcStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  char *pcStack_130;
  int ***pppiStack_12c;
  int ***pppiStack_128;
  int ***pppiStack_124;
  int ***pppiStack_120;
  char *pcStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  int ***pppiStack_110;
  undefined4 *puStack_10c;
  undefined1 auStack_fc [4];
  undefined4 uStack_f8;
  int ***pppiStack_f4;
  undefined4 *puStack_ec;
  int ***pppiStack_e8;
  undefined1 auStack_e4 [4];
  int ***pppiStack_e0;
  undefined4 uStack_dc;
  int iStack_d0;
  int **ppiStack_cc;
  int **ppiStack_c8;
  uint uStack_c4;
  undefined4 *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int **ppiStack_b4;
  int **ppiStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  int *piStack_98;
  int ***pppiStack_94;
  int ***pppiStack_90;
  int ***pppiStack_8c;
  undefined4 *apuStack_88 [5];
  undefined4 **ppuStack_74;
  char acStack_70 [4];
  char acStack_6c [12];
  int **ppiStack_60;
  int **ppiStack_5c;
  int **ppiStack_58;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_fc;
  if (in_stack_00000014 == 2) {
    puStack_10c = (undefined4 *)0x108a6bf6;
    piStack_98 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((piStack_98 != (int *)0x0) && (iStack_d0 = piStack_98[0x9838], iStack_d0 != 0)) {
      puStack_10c = in_stack_00000010;
      pppiStack_110 = (int ***)0x108a6c1e;
      FUN_104f4330();
      if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
        ppppiVar10 = (int ****)in_stack_00000010[8];
      }
      else {
        ppppiVar10 = (int ****)0xdeadbeaf;
      }
      pppiStack_110 = &ppiStack_cc;
      ppiStack_cc = (int **)0x0;
      ppiStack_c8 = (int **)0x0;
      ppiStack_b4 = (int **)0x0;
      ppiStack_b0 = (int **)0x0;
      piStack_114 = (int *)0x108a6c6a;
      pppiStack_e0 = (int ***)ppppiVar10;
      FUN_11a98a70();
      puStack_118 = &uStack_b8;
      uStack_dc = 0;
      pppiStack_e8 = (int ***)CONCAT31(pppiStack_e8._1_3_,((byte)pppiStack_94 & 0x8f) == 10);
      piStack_114 = (int *)pppiStack_e8;
      pcStack_11c = "ITEM_VO_CLASSNAME";
      pppiStack_120 = pppiStack_90;
      pppiStack_124 = (int ***)0x108a6ca2;
      cVar2 = (**(code **)(*piStack_98 + 0x10))();
      if (((cVar2 != '\0') && (((byte)uStack_c4 & 0x8f) == 6)) &&
         (puStack_ec = puStack_c0, (uStack_c4 >> 6 & 1) != 0)) {
        puStack_ec = (undefined4 *)*puStack_c0;
      }
      pppiStack_128 = (int ***)0x108a6ccf;
      pppiStack_124 = (int ***)ppppiVar10;
      pppiStack_e8 = (int ***)FUN_113f92a0();
      pppiStack_f4 = (int ***)0x0;
      if ((int ****)pppiStack_e8 != (int ****)0x0) {
        do {
          ppppiVar9 = (int ****)pppiStack_f4;
          pcStack_130 = "j";
          pppiStack_12c = (int ***)ppppiVar10;
          pppiStack_128 = pppiStack_f4;
          piVar3 = (int *)FUN_113f9bb0();
          pcStack_130 = (char *)0x0;
          uStack_134 = 0;
          uStack_138 = uStack_f8;
          pcStack_11c = (char *)0x0;
          ppcStack_13c = &pcStack_11c;
          puStack_118 = (undefined4 *)0x0;
          pppiStack_140 = (int ***)0x108a6d16;
          FUN_11a98de0();
          if (piVar3 == (int *)0x0) {
            pppiStack_140 = (int ***)&DAT_11d9d32b;
            ppiStack_144 = (int **)&DAT_11dbac80;
            FUN_104d1670();
            FUN_104d1550(&DAT_11dbb0b4,0);
            FUN_104d1550("count",0);
            FUN_104d1550(&DAT_11dca14c,0);
            FUN_104d1670("asset",&DAT_11d9d32b);
            ppppiVar10 = (int ****)pppiStack_110;
            FUN_104d1550("collumn",pppiStack_110);
            FUN_104d1440(&DAT_11dbfe78,ppppiVar9);
          }
          else {
            pppiStack_140 = pppiStack_110;
            ppiStack_144 = (int **)0x11dbfe24;
            FUN_104d1550();
            FUN_104d1440(&DAT_11dbfe78,ppppiVar9);
            pppiStack_140 = (int ***)0x108a6d4d;
            FUN_11669250();
            pppiStack_140 = (int ***)acStack_70;
            acStack_70[0] = '\0';
            ppiStack_144 = (int **)0x108a6d73;
            ppiStack_60 = (int **)pppiStack_140;
            ppiStack_5c = (int **)pppiStack_140;
            FUN_100e5aa0();
            ppiStack_144 = ppiStack_60;
            FUN_104d1670(&DAT_11dbac80);
            ppiStack_144 = (int **)0x108a6d94;
            iVar4 = FUN_11669250();
            ppiStack_144 = *(int ***)(iVar4 + 0x2c);
            FUN_104d1670("m_strPhonetics");
            ppiStack_144 = (int **)0x108a6db1;
            ppiStack_144 = (int **)FUN_11669730();
            FUN_104d1550(&DAT_11dbb0b4);
            ppiStack_144 = (int **)0x108a6dcc;
            ppiStack_144 = (int **)(**(code **)(*piVar3 + 0xc))();
            FUN_104d1440("count");
            ppiStack_144 = (int **)0x108a6de7;
            ppiStack_144 = (int **)FUN_11669780();
            FUN_104d1550(&DAT_11dca14c);
            ppiStack_144 = (int **)0x108a6e02;
            iVar4 = FUN_11669250();
            ppiStack_144 = *(int ***)(iVar4 + 0xb4);
            FUN_104d1670("asset");
            ppiStack_144 = (int **)0x108a6e22;
            ppiStack_144 = (int **)FUN_116693d0();
            FUN_104d1550("m_nBindType");
            ppiStack_144 = (int **)0x108a6e3d;
            iVar4 = FUN_11669250();
            ppiStack_144 = (int **)(uint)*(byte *)(iVar4 + 0x68);
            FUN_104d15e0("m_bMallItem");
            ppiStack_144 = (int **)0x108a6e5c;
            iVar4 = FUN_11669250();
            ppiStack_144 = *(int ***)(iVar4 + 0x38);
            FUN_104d1550("m_typeNormal");
            ppiStack_144 = (int **)0x108a6e79;
            iVar4 = FUN_11669250();
            ppiStack_144 = *(int ***)(iVar4 + 0x3c);
            FUN_104d1550("m_typeSub");
            FUN_104d15e0("m_bUseItem",0);
            ppiStack_144 = (int **)0x108a6ea8;
            cVar2 = FUN_116698a0();
            if (cVar2 == '\0') {
              ppiStack_144 = (int **)0x108a6ec5;
              iVar4 = FUN_11669250();
              ppiStack_144 = (int **)(uint)(*(int *)(iVar4 + 0x9c) != 0);
            }
            else {
              ppiStack_144 = (int **)0x108a6eb3;
              iVar4 = (**(code **)(*piVar3 + 0x28))();
              ppiStack_cc = (int **)CONCAT31(ppiStack_cc._1_3_,iVar4 != 0);
              ppiStack_144 = ppiStack_cc;
            }
            FUN_104d15e0("m_bCanDecompose");
            ppiStack_144 = (int **)0x108a6eed;
            cVar2 = FUN_11669930();
            if (cVar2 != '\0') {
              ppiStack_144 = (int **)0x108a6efc;
              iVar4 = FUN_11671b30();
              if (iVar4 != 0) {
                ppiStack_144 = (int **)0x1;
                FUN_104d15e0("m_bUseItem");
              }
              ppiStack_144 = (int **)0x108a6f1c;
              ppiStack_144 = (int **)FUN_11671aa0();
              FUN_104d1550("m_nCDTime");
              ppiStack_144 = (int **)0x108a6f37;
              ppiStack_144 = (int **)FUN_11671a80();
              FUN_104d1550("m_nCDGroupTag");
              ppiStack_144 = (int **)0x108a6f52;
              ppiStack_144 = (int **)FUN_11671c00();
              FUN_104d1550("m_nUseTimes");
              ppiStack_144 = (int **)0x108a6f6d;
              ppiStack_144 = (int **)FUN_11671b30();
              FUN_104d1550("m_nMaxUseTimes");
              ppiStack_144 = (int **)0x108a6f92;
              ppiStack_144 = (int **)FUN_11671a80();
              uVar5 = FUN_1154bc80();
              FUN_104d1550("m_nCDRemainTime",uVar5);
            }
            ppiStack_144 = (int **)0x108a6fb5;
            ppiStack_144 = (int **)(**(code **)(*piVar3 + 0x2c))();
            FUN_104d1550("m_nRareType");
            FUN_104d15e0("isBind",piVar3[8] != 0);
            ppiStack_144 = (int **)0x108a6feb;
            FUN_11669880();
            ppiStack_144 = (int **)0x108a6ff0;
            ppiStack_144 = (int **)FUN_11a897a0();
            FUN_104d1550("m_nSellPrice");
            ppiStack_144 = (int **)0x108a700b;
            ppiStack_144 = (int **)FUN_11669350();
            FUN_104d1440("m_nExpireTime");
            ppiStack_144 = (int **)0x108a7026;
            uVar6 = FUN_11668f60();
            ppiStack_144 = (int **)(uVar6 & 0xff);
            FUN_104d15e0("m_bCanDestroy");
            ppiStack_144 = (int **)0x108a7044;
            iVar4 = FUN_11669250();
            ppiStack_144 = *(int ***)(iVar4 + 0xfc);
            FUN_104d1550("m_nRequire_Sex");
            ppiStack_144 = (int **)0x0;
            uVar5 = FUN_11669730();
            uVar5 = FUN_113f9d20(uVar5);
            uVar7 = FUN_11669730(1);
            uVar7 = FUN_113f9d20(uVar7);
            FUN_104d1550("m_nCanUseTimesInBS",uVar5);
            FUN_104d1550("m_nCanUseTimesInDB",uVar7);
            pppiVar12 = pppiStack_128;
            cVar2 = FUN_116698a0();
            if ((cVar2 == '\0') && (cVar2 = FUN_11669950(), cVar2 == '\0')) {
              FUN_104d1550("m_nEnchantTime",0xffffffff);
              FUN_104d1670("m_strEnchantDesc",&DAT_11d9d32b);
            }
            else {
              uVar5 = (*(code *)(*pppiVar12)[0xf])();
              pppiStack_128 = (int ***)FUN_1050ed80(uVar5);
              if ((int ****)pppiStack_128 != (int ****)0x0) {
                if ((int ***)pppiStack_128[0xc] == (int ***)0x0) {
                  FUN_104d1550("m_nEnchantTime",0xffffffff);
                }
                else {
                  iVar4 = FUN_10a136c0();
                  iVar8 = (*(code *)(*pppiVar12)[0x10])();
                  FUN_104d1440("m_nEnchantTime",iVar4 - iVar8);
                }
                ppiStack_5c = (int **)acStack_6c;
                acStack_6c[0] = '\0';
                ppiStack_58 = ppiStack_5c;
                FUN_100e5aa0(ppiStack_5c);
                FUN_104d1670("m_strEnchantDesc",ppiStack_5c);
                if ((ppiStack_58 != (int **)acStack_6c) && (ppiStack_58 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_58);
                }
              }
              uVar5 = FUN_11669730();
              iVar4 = FUN_1052bdd0(uVar5);
              if (iVar4 != 0) {
                FUN_104d15e0("m_bCanQuench",*(int *)(iVar4 + 0x28c) != 0);
                FUN_104d15e0("m_bCanReQuench",*(undefined1 *)(iVar4 + 0x294));
                FUN_104d1550("m_nMaxQuenchLevel",*(undefined4 *)(iVar4 + 0x290));
                FUN_104d1550("m_nQuenchLevel",*(undefined2 *)(pppiVar12 + 0x7e));
              }
            }
            cVar2 = FUN_116698a0();
            if (cVar2 != '\0') {
              FUN_104d1550("m_nTransmogrifyItemId",pppiVar12[0x7d]);
            }
            fVar11 = (float10)FUN_11669880();
            pppiStack_128 = (int ***)(float)fVar11;
            FUN_104d14d0("m_fSellPriceFact");
            fVar11 = (float10)FUN_11669280();
            pppiStack_128 = (int ***)(float)fVar11;
            FUN_104d14d0("m_fBuyPriceFact");
            FUN_104d15e0("m_bIsLocal",1);
            uVar5 = (*(code *)(*pppiVar12)[6])();
            FUN_104d1550("m_nFactItemLevel",uVar5);
            uVar5 = FUN_11669840();
            FUN_104d1550("m_nFactRank",uVar5);
            iVar4 = FUN_11669250();
            FUN_104d15e0("m_bCheckDelOnLeaveBattle",*(undefined1 *)(iVar4 + 0xc4));
            iVar4 = FUN_11669730();
            pppiStack_128 = (int ***)(iVar4 >> 0x1f);
            iVar8 = FUN_116a6a70();
            if ((*(int *)(iVar8 + 0x100) == iVar4) &&
               ((int ****)(*(int *)(iVar8 + 0x100) >> 0x1f) == (int ****)pppiStack_128)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              pppiStack_90 = &ppiStack_b0;
              ppiStack_b0 = (int **)((uint)ppiStack_b0 & 0xffff0000);
              pppiStack_8c = pppiStack_90;
              cVar2 = FUN_108a8910(&uStack_bc);
LAB_108a7371:
              if (cVar2 == '\0') {
                FUN_104d15e0("m_bSkillItem",1);
                FUN_104d1550("m_nSkillCount",0);
                FUN_104d1550("m_nSkillCDTime",0);
                FUN_104d1670("m_strSkillName",&DAT_11d9d32b);
                pppiVar12 = (int ***)0x0;
              }
              else {
                FUN_104d15e0("m_bSkillItem",puStack_c0);
                FUN_104d1550("m_nSkillCount",uStack_bc);
                FUN_104d1550("m_nSkillCDTime",uStack_b8);
                FUN_104d1700("m_strSkillName",pppiStack_90);
                pppiVar12 = pppiStack_8c;
              }
              FUN_104d1550("m_nSkillId",pppiVar12);
              if ((pppiStack_90 != &ppiStack_b4) && (pppiStack_90 != (int ***)0x0)) {
                FUN_10c3d5d0(pppiStack_90);
              }
            }
            else {
              uVar5 = FUN_11669730();
              iVar4 = FUN_108a8a30(uVar5);
              if (0 < iVar4) {
                pppiStack_94 = &ppiStack_b4;
                ppiStack_b4 = (int **)((uint)ppiStack_b4 & 0xffff0000);
                pppiStack_90 = pppiStack_94;
                uVar5 = FUN_11669730();
                uVar5 = FUN_108a8a30(uVar5);
                cVar2 = FUN_108a89a0(&uStack_c4,uVar5);
                goto LAB_108a7371;
              }
            }
            ppppiVar9 = (int ****)pppiStack_124;
            ppppiVar10 = (int ****)pppiStack_128;
            if ((ppuStack_74 != apuStack_88) && (ppuStack_74 != (undefined4 **)0x0)) {
              FUN_10c3d5d0(ppuStack_74);
              ppppiVar9 = (int ****)pppiStack_124;
              ppppiVar10 = (int ****)pppiStack_128;
            }
          }
          (**(code **)(*piStack_114 + 0x3c))(puStack_10c,&ppiStack_144);
          if (((uint)pppiStack_110 >> 6 & 1) != 0) {
            pppiStack_12c = (int ***)&piStack_114;
            pppiStack_128 = (int ***)puStack_10c;
            pcStack_130 = (char *)0x108a7504;
            (**(code **)(*piStack_114 + 8))();
          }
          pppiStack_f4 = (int ***)((int)ppppiVar9 + 1);
        } while (pppiStack_f4 < pppiStack_e8);
      }
      pppiStack_128 = (int ***)(uint)(((byte)puStack_a8 & 0x8f) == 10);
      pppiStack_12c = (int ***)auStack_e4;
      pcStack_130 = "itemList";
      uStack_134 = uStack_a4;
      uStack_138 = 0x108a753f;
      (**(code **)(*piStack_ac + 0x14))();
      if (((uint)piStack_ac >> 6 & 1) != 0) {
        pppiStack_110 = &ppiStack_b0;
        puStack_10c = puStack_a8;
        piStack_114 = (int *)0x108a755c;
        (*(code *)(*ppiStack_b0)[2])();
        ppiStack_b0 = (int **)0x0;
      }
      piStack_ac = (int *)0x0;
      if ((uStack_c4 >> 6 & 1) != 0) {
        pppiStack_110 = &ppiStack_c8;
        puStack_10c = puStack_c0;
        piStack_114 = (int *)0x108a7589;
        (*(code *)(*ppiStack_c8)[2])();
        ppiStack_c8 = (int **)0x0;
      }
      uStack_c4 = 0;
      if (((uint)pppiStack_8c >> 6 & 1) != 0) {
        pppiStack_110 = (int ***)&pppiStack_90;
        puStack_10c = apuStack_88[0];
        piStack_114 = (int *)0x108a75b9;
        (*(code *)(*pppiStack_90)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ada90 @ 108ada90  size=158 ===== */
// calls: CGuildLevelUpInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CGuildLevelUpInfo"

/* [RE-AUTO c0]
   calls: CGuildLevelUpInfo::GetManagers
   strings:
     ""CGuildLevelUpInfo"" */

undefined4 FUN_108ada90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd4ee0;
  puVar2 = (undefined4 *)CGuildLevelUpInfo__GetInfoManagerSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CGuildLevelUpInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123bfa8c & 1) == 0) {
        DAT_123bfa8c = DAT_123bfa8c | 1;
        FUN_108b88f0();
        FUN_11a8911f(&LAB_11c751e0);
      }
      puVar3 = &DAT_123bfa54;
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



/* ===== FUN_108bbea0 @ 108bbea0  size=1929 ===== */
// calls: CPet::SetName
// strings:
//   "BASE_CARD_DATA"
//   "branchCardArray"
//   "overViewData"
//   "branchLevel"
//   "branchIcon"
//   "hunterStarLevel"
//   "branchPoints"
//   "branchTotalPoint"
//   "saying"
//   "dailyRefreshRecords"
//   "upgradeLevelScore"
//   "branchCardState"
//   "upgradeLevelCardName"
//   "starLevelDetailArray"

/* [RE-AUTO c0]
   strings:
     ""BASE_CARD_DATA""
     ""branchCardArray""
     ""overViewData""
     ""branchLevel""
     ""branchIcon""
     ""hunterStarLevel""
     ""branchPoints""
     ""branchTotalPoint""
     ""saying""
     ""dailyRefreshRecords"" */

void FUN_108bbea0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 unaff_ESI;
  int iVar7;
  uint *puVar8;
  byte unaff_DI;
  undefined4 *in_stack_00000010;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piStack_ec;
  char *pcStack_e8;
  int **ppiStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  uint uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  int *piStack_b4;
  uint uStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  undefined4 auStack_9c [3];
  undefined4 uStack_90;
  int *piStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  uint uStack_78;
  int *piStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint auStack_64 [6];
  uint *puStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint *puStack_40;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_cc;
  piStack_dc = (int *)&DAT_11d9d32b;
  local_b8 = 0;
  piStack_e0 = (int *)0x108bbed9;
  CPet__SetName();
  uStack_b0 = in_stack_00000010[1];
  iStack_a8 = in_stack_00000010[3];
  piStack_e0 = (int *)in_stack_00000010[2];
  piStack_a4 = (int *)in_stack_00000010[4];
  uStack_90 = 1;
  uStack_70 = 0x1e;
  uStack_c0 = 100;
  piStack_b4 = (int *)0x0;
  piStack_ac = piStack_e0;
  if ((uStack_b0 >> 6 & 1) != 0) {
    piStack_b4 = (int *)*in_stack_00000010;
    ppiStack_e4 = &piStack_b4;
    pcStack_e8 = (char *)0x108bbf2e;
    (**(code **)(*piStack_b4 + 4))();
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
    iVar7 = in_stack_00000010[0xe];
  }
  else {
    iVar7 = -0x21524151;
  }
  iVar5 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar9 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar9 != (int *)0x0)) {
    piStack_e0 = (int *)0x108bbf77;
    iVar3 = (**(code **)(*piVar9 + 0xb4))();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = iVar3;
    }
  }
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0x2d10);
  }
  uStack_6c = 0;
  ppiStack_e4 = (int **)&uStack_6c;
  uStack_68 = 0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,((byte)uStack_b0 & 0x8f) == 10);
  piStack_e0 = (int *)uStack_c8;
  pcStack_e8 = "BASE_CARD_DATA";
  piStack_ec = piStack_ac;
  cVar1 = (**(code **)(*piStack_b4 + 0x10))();
  if ((cVar1 != '\0') && (((byte)uStack_78 & 0x8f) == 6)) {
    piStack_dc = piStack_74;
    if ((uStack_78 >> 6 & 1) != 0) {
      piStack_dc = (int *)*piStack_74;
    }
    puStack_4c = (uint *)0x0;
    unaff_DI = ((byte)uStack_c0 & 0x8f) == 10;
    puStack_48 = (uint *)0x0;
    cVar1 = (**(code **)(*piStack_c4 + 0x10))(iStack_bc,"branchCardArray",&puStack_4c,unaff_DI);
    if (cVar1 != '\0') {
      FUN_108bdc90(iVar7,1,piStack_dc,iVar3,&puStack_4c,1);
      FUN_108bdc90(iVar7,2,piStack_dc,iVar3,&puStack_4c,1);
      FUN_108bdc90(iVar7,3,piStack_dc,iVar3,&puStack_4c,1);
    }
    if (((uint)puStack_48 >> 6 & 1) != 0) {
      (**(code **)(*puStack_4c + 8))(&puStack_4c,puStack_44);
    }
  }
  puVar12 = &DAT_11d9d32b;
  uStack_c8 = 0;
  CPet__SetName();
  puVar11 = &DAT_11d9d32b;
  piStack_e0 = (int *)0x0;
  CPet__SetName();
  piStack_e0 = (int *)FUN_108ba340(iVar7);
  if (piStack_e0 != (int *)0x0) {
    CPet__SetName(*(undefined4 *)((int)piStack_e0 + 0x40));
    puVar6 = &DAT_11d9d32b;
    if (ppiStack_e4[0x11] != (int *)0x0) {
      puVar6 = (undefined1 *)ppiStack_e4[0x11];
    }
    CPet__SetName(puVar6);
    puVar6 = &DAT_11d9d32b;
    if (*(undefined1 **)(pcStack_e8 + 0x90) != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(pcStack_e8 + 0x90);
    }
    CPet__SetName(puVar6);
  }
  if (iVar3 != 0) {
    iStack_a8 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) >> 3;
  }
  piStack_b4 = (int *)0x0;
  piStack_e0 = (int *)0x0;
  piStack_a4 = (int *)0x0;
  uStack_a0 = 0;
  piStack_dc = (int *)0x0;
  uStack_b0 = CONCAT31(uStack_b0._1_3_,((byte)uStack_c8 & 0x8f) == 10);
  piVar9 = piStack_c4;
  uVar10 = uStack_b0;
  cVar1 = (**(code **)(*piStack_cc + 0x10))(piStack_c4,"overViewData",&piStack_a4);
  if (cVar1 != '\0') {
    if (iVar7 == 0) {
      iVar5 = FUN_108bab00(local_b8);
      if (iVar5 != 0) {
        piStack_ec = *(int **)(iVar5 + 0x14);
        puVar12 = *(undefined1 **)(iVar5 + 0x18);
        if (iVar3 != 0) {
          piStack_c4 = (int *)FUN_114e0080();
        }
      }
    }
    else {
      iStack_bc = FUN_108bac70(iVar7);
      if (iStack_bc != 0) {
        uVar4 = 0;
        if (iVar3 != 0) {
          iVar5 = FUN_114dfc50(iVar7);
          if (iVar5 == 0) {
            uVar4 = 0;
          }
          else {
            uStack_c0 = *(uint *)(iVar5 + 0xc);
            piStack_c4 = *(int **)(iVar5 + 0x18);
            FUN_104d1550("branchLevel",uStack_c0);
            uVar4 = uStack_c0;
          }
        }
        piStack_ec = (int *)FUN_11859a80(uVar4);
      }
    }
    puStack_44 = auStack_64;
    auStack_64[0]._0_2_ = 0;
    puStack_40 = puStack_44;
    FUN_100e5b60(auStack_64);
    FUN_104d1700("branchIcon",puStack_44);
    if ((puStack_44 != &uStack_68) && (puStack_44 != (uint *)0x0)) {
      FUN_10c3d5d0(puStack_44);
    }
    FUN_104d1550("hunterStarLevel",iStack_bc);
    cVar1 = FUN_108bde10(auStack_9c,&piStack_ec);
    if (cVar1 != '\0') {
      FUN_104d1550("branchPoints",auStack_9c[0]);
      FUN_104d1550("branchTotalPoint",piStack_ec);
    }
    puStack_48 = &uStack_68;
    uStack_68 = uStack_68 & 0xffff0000;
    puStack_44 = puStack_48;
    FUN_100e5b60(&uStack_68);
    FUN_104d1700("saying",puStack_48);
    if ((puStack_48 != &uStack_6c) && (puStack_48 != (uint *)0x0)) {
      FUN_10c3d5d0(puStack_48);
    }
    FUN_104d1550("dailyRefreshRecords",piStack_cc);
    FUN_104d1550("upgradeLevelScore",puVar11);
    if (iVar7 == 0) {
      if (((int)uVar10 < 1) || (iVar7 = FUN_11a88b20(uVar10,1), iVar7 == 0)) {
        puVar6 = &DAT_11d9d32b;
      }
      else {
        puVar6 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar7 + 0x14) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(iVar7 + 0x14);
        }
      }
      CPet__SetName(puVar6);
    }
    puVar12 = (undefined1 *)((uint)puVar12 & 0xffffff00);
    if (iVar3 != 0) {
      uVar2 = FUN_114e0340(uVar10);
      puVar12 = (undefined1 *)CONCAT31((int3)((uint)puVar12 >> 8),uVar2);
    }
    FUN_104d15e0("branchCardState",puVar12);
    puStack_4c = &uStack_6c;
    uStack_6c = uStack_6c & 0xffff0000;
    puStack_48 = puStack_4c;
    FUN_100e5b60(&uStack_6c);
    FUN_104d1700("upgradeLevelCardName",puStack_4c);
    if ((puStack_40 != auStack_64) && (puStack_40 != (uint *)0x0)) {
      FUN_10c3d5d0(puStack_40);
    }
  }
  uStack_7c = 0;
  uStack_78 = 0;
  iStack_bc = CONCAT31(iStack_bc._1_3_,(unaff_DI & 0x8f) == 10);
  cVar1 = (**(code **)(*piStack_dc + 0x10))(unaff_ESI,"starLevelDetailArray",&uStack_7c,iStack_bc);
  if (((cVar1 != '\0') && (iVar3 != 0)) &&
     (puVar8 = *(uint **)(iVar3 + 0x10), puVar8 != *(uint **)(iVar3 + 0x14))) {
    do {
      uStack_6c = *puVar8;
      piStack_74 = (int *)0x0;
      uStack_70 = 3;
      (**(code **)(*piStack_8c + 0x3c))(uStack_84,&piStack_74);
      if ((uStack_70 >> 6 & 1) != 0) {
        (**(code **)(*piStack_74 + 8))(&piStack_74,uStack_6c);
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != *(uint **)(iVar3 + 0x14));
  }
  if ((uStack_88 >> 6 & 1) != 0) {
    (**(code **)(*piStack_8c + 8))(&piStack_8c,uStack_84);
    piStack_8c = (int *)0x0;
  }
  uStack_88 = 0;
  if ((uStack_c0 >> 6 & 1) != 0) {
    (**(code **)(*piStack_c4 + 8))(&piStack_c4,iStack_bc);
    piStack_c4 = (int *)0x0;
  }
  uStack_c0 = 0;
  if (piVar9 != (int *)0x0) {
    FUN_10c3da30(piVar9);
  }
  if (puVar12 != (undefined1 *)0x0) {
    FUN_10c3da30(puVar12);
  }
  if ((uStack_a0 >> 6 & 1) != 0) {
    (**(code **)(*piStack_a4 + 8))(&piStack_a4,auStack_9c[0]);
    piStack_a4 = (int *)0x0;
  }
  uStack_a0 = 0;
  if (((uint)pcStack_e8 >> 6 & 1) != 0) {
    (**(code **)(*piStack_ec + 8))(&piStack_ec,ppiStack_e4);
    piStack_ec = (int *)0x0;
  }
  pcStack_e8 = (char *)0x0;
  if (puVar11 != (undefined1 *)0x0) {
    FUN_10c3da30(puVar11);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108bc6a0 @ 108bc6a0  size=1484 ===== */
// calls: CPet::SetName
// strings:
//   "statisticArray"
//   "statisticClass"
//   "showType"
//   "context"
//   "checkState"
//   "title"
//   "cardID"
//   "currentValue"
//   "targetValue"
//   "cardAwardPoint"
//   "rewardItemID"
//   "achieveID"
//   "canFetch"
//   "hasFetched"

/* [RE-AUTO c0]
   strings:
     ""statisticArray""
     ""statisticClass""
     ""showType""
     ""context""
     ""checkState""
     ""title""
     ""cardID""
     ""currentValue""
     ""targetValue""
     ""cardAwardPoint"" */

void FUN_108bc6a0(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 *in_stack_00000010;
  char *pcVar12;
  undefined1 *puStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char *pcStack_e0;
  int *piStack_dc;
  int **ppiStack_d8;
  char *pcStack_d4;
  uint uStack_bc;
  int *piStack_b8;
  byte bStack_b4;
  char *apcStack_b0 [2];
  int *local_a8;
  uint local_a4;
  char *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined1 auStack_64 [4];
  int *piStack_60;
  uint uStack_5c;
  int *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_58 = (int *)0x0;
  local_54 = in_stack_00000010[1];
  local_4c = in_stack_00000010[3];
  pcStack_d4 = (char *)in_stack_00000010[2];
  local_48 = in_stack_00000010[4];
  local_50 = pcStack_d4;
  if ((local_54 >> 6 & 1) != 0) {
    local_58 = (int *)*in_stack_00000010;
    ppiStack_d8 = &local_58;
    piStack_dc = (int *)0x108bc6f8;
    (**(code **)(*local_58 + 4))();
  }
  local_a4 = in_stack_00000010[7];
  local_9c = in_stack_00000010[9];
  pcStack_d4 = (char *)in_stack_00000010[8];
  local_98 = in_stack_00000010[10];
  local_a8 = (int *)0x0;
  local_a0 = pcStack_d4;
  if ((local_a4 >> 6 & 1) != 0) {
    local_a8 = (int *)in_stack_00000010[6];
    ppiStack_d8 = &local_a8;
    piStack_dc = (int *)0x108bc736;
    (**(code **)(*local_a8 + 4))();
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) ||
     (uVar10 = 0xdeadbeaf, (in_stack_00000010[0xd] & 0x8f) == 4)) {
    uVar10 = in_stack_00000010[0xe];
  }
  if (((in_stack_00000010[0x19] & 0x8f) == 3) ||
     (uVar9 = 0xdeadbeaf, (in_stack_00000010[0x19] & 0x8f) == 4)) {
    uVar9 = in_stack_00000010[0x1a];
  }
  uStack_7c = uVar9;
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 == (int *)0x0))
  goto LAB_108bcc72;
  pcStack_d4 = (char *)0x108bc79f;
  piVar4 = (int *)(**(code **)(*piVar4 + 0xb4))();
  piStack_78 = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_108bcc72;
  ppiStack_d8 = (int **)0x108bc7b3;
  pcStack_d4 = (char *)uVar10;
  iVar5 = FUN_108ba340();
  if (iVar5 == 0) goto LAB_108bcc72;
  uStack_88 = 0x23;
  iStack_90 = 1;
  uStack_8c = 0;
  pcStack_84 = (char *)((uint)pcStack_84 & 0xffffff00);
  puStack_80 = (undefined1 *)((uint)puStack_80 & 0xffffff00);
  ppiStack_d8 = (int **)0x108bc7e6;
  pcStack_d4 = (char *)uVar9;
  iVar5 = FUN_108ba0a0();
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 8) != 0 || *(int *)(iVar5 + 0xc) != 0) {
      uStack_bc = *(uint *)(iVar5 + 0xc);
      uVar1 = *(uint *)(iVar5 + 8);
      pcStack_d4 = (char *)0x108bc80d;
      uVar11 = FUN_100ed750();
      if ((((uint)uVar11 & uVar1) != uVar1) ||
         (piVar4 = piStack_78, ((uint)((ulonglong)uVar11 >> 0x20) & uStack_bc) != uStack_bc))
      goto LAB_108bcc0b;
    }
    uStack_88 = *(undefined4 *)(iVar5 + 0x80);
    pcStack_d4 = *(char **)(iVar5 + 0xac);
    iStack_90 = *(int *)(iVar5 + 0x98);
    uStack_8c = pcStack_d4;
    if (iStack_90 == 0) {
      ppiStack_d8 = (int **)0x108bc851;
      piStack_b8 = (int *)FUN_108bae10();
      if (piStack_b8 != (int *)0x0) {
        iStack_90 = piStack_b8[10];
        pcStack_d4 = (char *)0x108bc86d;
        iVar6 = (**(code **)(*piVar4 + 0x46c))();
        if ((iVar6 != 0) && (piVar4[0xac6] != 0)) {
          pcStack_d4 = (char *)piStack_b8[8];
          ppiStack_d8 = (int **)0x108bc88b;
          (**(code **)(*piVar4 + 0x46c))();
          ppiStack_d8 = (int **)0x108bc892;
          iVar6 = FUN_114e00a0();
          if (piStack_b8[9] <= iVar6) {
            pcStack_d4 = (char *)uStack_8c;
            ppiStack_d8 = (int **)0x108bc8aa;
            cVar2 = FUN_115350b0();
            if (cVar2 == '\0') {
              pcStack_84 = (char *)CONCAT31(pcStack_84._1_3_,1);
            }
            else {
              puStack_80 = (undefined1 *)CONCAT31(puStack_80._1_3_,1);
            }
          }
        }
      }
    }
    ppiStack_d8 = (int **)&uStack_20;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_bc = CONCAT31(uStack_bc._1_3_,((byte)local_a4 & 0x8f) == 10);
    pcStack_d4 = (char *)uStack_bc;
    piStack_dc = (int *)0x11dd5540;
    pcStack_e0 = local_a0;
    uStack_e4 = 0x108bc900;
    cVar2 = (**(code **)(*local_a8 + 0x10))();
    if (cVar2 != '\0') {
      uStack_e8 = (char *)&local_50;
      local_50 = 0;
      local_4c = 0;
      uStack_e4 = CONCAT31((int3)((uint)unaff_ESI >> 8),(bStack_b4 & 0x8f) == 10);
      pcStack_ec = "statisticClass";
      pcStack_f0 = apcStack_b0[0];
      puStack_f4 = (undefined1 *)0x108bc94e;
      cVar2 = (**(code **)(*piStack_b8 + 0x10))();
      if (((cVar2 != '\0') && (((byte)uStack_5c & 0x8f) == 6)) &&
         (iStack_94 = piVar4[0xb44], iStack_94 != 0)) {
        piStack_dc = local_58;
        if ((uStack_5c >> 6 & 1) != 0) {
          piStack_dc = (int *)*local_58;
        }
        piVar4 = *(int **)(iVar5 + 0x8c);
        if (piVar4 != *(int **)(iVar5 + 0x90)) {
          do {
            if ((char)piVar4[7] == '\0') {
              puStack_f4 = (undefined1 *)0x108bc9b6;
              puStack_f4 = (undefined1 *)FUN_117f6a70();
              FUN_104d1550("showType");
              pcStack_d4 = (char *)0x0;
              puStack_f4 = &DAT_11d9d32b;
              CPet__SetName();
              uVar1 = uStack_e4;
              piStack_dc = (int *)((uint)piStack_dc & 0xffffff00);
              uStack_e4 = CONCAT13(1,(undefined3)uStack_e4);
              switch(*piVar4) {
              case 1:
                iVar6 = FUN_104d8d20(piVar4[1]);
                if (iVar6 != 0) {
                  puVar7 = *(undefined1 **)(*(int *)(iVar6 + 0x2c) + 8);
code_r0x108bca0e:
                  puVar8 = &DAT_11d9d32b;
                  if (puVar7 != (undefined1 *)0x0) {
                    puVar8 = puVar7;
                  }
                  CPet__SetName(puVar8);
                }
                break;
              case 2:
                iVar6 = FUN_107d7930(piVar4[1]);
                if (iVar6 != 0) {
                  puVar7 = *(undefined1 **)(iVar6 + 0x1c);
                  goto code_r0x108bca0e;
                }
                break;
              case 3:
                iVar6 = FUN_11a88b20(piVar4[1],1);
                if (iVar6 != 0) {
                  puVar7 = *(undefined1 **)(iVar6 + 0x14);
                  goto code_r0x108bca0e;
                }
                break;
              case 4:
                uStack_e4 = uVar1 & 0xffffff;
              }
              pcVar12 = local_a0;
              FUN_114dfa30();
              if (*piVar4 != 4) {
                uVar3 = FUN_111ebbf0(local_a0,piVar4);
                pcStack_e0 = (char *)CONCAT31(pcStack_e0._1_3_,uVar3);
              }
              if (uStack_e8._3_1_ != '\0') {
                local_98 = 0;
                iStack_94 = 0;
                FUN_11a98de0(&local_98,uStack_e4,0,0);
                uStack_e4 = 0;
                CPet__SetName(&DAT_11d9d32b);
                pcStack_ec = (char *)0x0;
                CPet__SetName(&DAT_11d9d32b);
                FUN_1024ebe0(&pcStack_f0,auStack_64,0x17ee,0);
                FUN_108bfae0(&pcStack_ec,&puStack_f4);
                FUN_104d1790("context",&pcStack_ec);
                FUN_104d15e0("checkState",pcVar12);
                cVar2 = (char)pcVar12;
                uVar10 = FUN_117f69e0();
                FUN_104d1790("title",uVar10);
                if (*piVar4 == 3) {
                  FUN_104d1440("cardID",piVar4[1]);
                }
                else {
                  FUN_104d1550("cardID",0);
                }
                iVar6 = 0;
                if (cVar2 != '\0') {
                  iVar6 = piVar4[5];
                }
                FUN_104d1550("currentValue",iVar6);
                FUN_104d1440("targetValue",piVar4[5]);
                (**(code **)(*piStack_60 + 0x3c))(local_58,apcStack_b0);
                FUN_100e5670();
                FUN_100e5670();
                FUN_104d7c10();
              }
              FUN_100e5670();
            }
            piVar4 = piVar4 + 8;
          } while (piVar4 != *(int **)(iVar5 + 0x90));
        }
      }
      puStack_f4 = (undefined1 *)0x108bcbff;
      FUN_104d7c10();
    }
    uStack_e4 = 0x108bcc0b;
    FUN_104d7c10();
  }
LAB_108bcc0b:
  pcStack_d4 = (char *)uStack_88;
  ppiStack_d8 = (int **)0x11dd54a4;
  piStack_dc = (int *)0x108bcc1f;
  FUN_104d1550();
  piStack_dc = (int *)iStack_90;
  pcStack_e0 = "rewardItemID";
  uStack_e4 = 0x108bcc33;
  FUN_104d1550();
  uStack_e4 = uStack_8c;
  uStack_e8 = "achieveID";
  pcStack_ec = (char *)0x108bcc47;
  FUN_104d1550();
  pcStack_ec = pcStack_84;
  pcStack_f0 = "canFetch";
  puStack_f4 = (undefined1 *)0x108bcc5b;
  FUN_104d15e0();
  puStack_f4 = puStack_80;
  FUN_104d15e0("hasFetched");
LAB_108bcc72:
  if ((local_a4 >> 6 & 1) != 0) {
    ppiStack_d8 = &local_a8;
    pcStack_d4 = local_a0;
    piStack_dc = (int *)0x108bcc8f;
    (**(code **)(*local_a8 + 8))();
    local_a8 = (int *)0x0;
  }
  local_a4 = 0;
  if ((local_54 >> 6 & 1) != 0) {
    ppiStack_d8 = &local_58;
    pcStack_d4 = (char *)local_50;
    piStack_dc = (int *)0x108bccbf;
    (**(code **)(*local_58 + 8))();
  }
  return;
}



/* ===== FUN_108d1ef0 @ 108d1ef0  size=2820 ===== */
// strings:
//   "InitModelEx"
//   "InitModel"
//   "IsNormalLevelMax"
//   "TitleCarry"
//   "HideTitle"
//   "TitleProperty_OK"
//   "ReChargeVIP"
//   "StartVIP"
//   "ReChargeGrownup"
//   "ReChargeEarning"
//   "DeleteEquipPlan"
//   "SaveEquipPlan"
//   "StartPreviewEquip"
//   "StopPreviewEquip"
//   "GetEquipPreviewDeltaData"
//   "UblockPlanSlot"
//   "GetEquipPlans"
//   "EquipPlan"
//   "EditEquipPlan"
//   "DeleteEquipSlot"

/* [RE-AUTO c0]
   strings:
     ""InitModelEx""
     ""InitModel""
     ""IsNormalLevelMax""
     ""TitleCarry""
     ""HideTitle""
     ""TitleProperty_OK""
     ""ReChargeVIP""
     ""StartVIP""
     ""ReChargeGrownup""
     ""ReChargeEarning"" */

void __fastcall FUN_108d1ef0(code ***param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  code *pcStack_268;
  char *pcStack_264;
  code **ppcStack_260;
  code ***pppcStack_25c;
  code *pcStack_258;
  code **ppcStack_254;
  code ***pppcStack_250;
  code ***pppcStack_24c;
  code **ppcStack_248;
  code **ppcStack_244;
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
  undefined4 ***pppuStack_1ec;
  code ***pppcStack_1e8;
  code ***pppcStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  code ***pppcStack_1d8;
  code ***pppcStack_1d4;
  char *pcStack_1d0;
  undefined4 ***pppuStack_1cc;
  code ***pppcStack_1c8;
  code ***pppcStack_1c4;
  char *pcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  undefined4 ***pppuStack_1b4;
  undefined4 ***pppuStack_1b0;
  code ***pppcStack_1ac;
  code ***pppcStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  code ***pppcStack_19c;
  code ***pppcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  code ***pppcStack_18c;
  code ***pppcStack_188;
  code ***pppcStack_184;
  code ***pppcStack_180;
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
  undefined4 ***pppuStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  undefined4 ***pppuStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  undefined4 ***local_24;
  undefined4 ***pppuStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dd5ef8;
  pppcStack_34 = (code ***)0x108d1f24;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_108d2d20;
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined4 ***)0x108d1f35;
  FUN_108dc300();
  if (((code ****)pppuStack_20 != &pppcStack_34) && ((code ****)pppuStack_20 != (code ****)0x0)) {
    pppuStack_3c = pppuStack_20;
    pppcStack_40 = (code ***)0x108d1f4b;
    FUN_10c3d5d0();
  }
  local_24 = &pppcStack_34;
  pppuStack_3c = (undefined4 ***)0x11dbd585;
  pppcStack_40 = (code ***)0x11dbd57c;
  pppcStack_44 = (code ***)0x108d1f6b;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)&DAT_108d2ec0;
  pppcStack_48 = (code ***)&pppuStack_3c;
  pppcStack_4c = (code ***)0x108d1f7c;
  FUN_108dc300();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x108d1f92;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd5fa4;
  pppcStack_50 = (code ***)0x11dd5f94;
  pppcStack_54 = (code ***)0x108d1fb2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_108d2ac0;
  pppuStack_58 = &pppcStack_4c;
  pppcStack_5c = (code ***)0x108d1fc3;
  FUN_108dc300();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x108d1fd9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd5fb2;
  pppcStack_60 = (code ***)0x11dd5fa8;
  pppcStack_64 = (code ***)0x108d1ff9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10a039d0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x108d200a;
  FUN_108dc300();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppuStack_70 = (undefined4 ***)0x108d2020;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd5fbd;
  pppuStack_70 = (undefined4 ***)0x11dd5fb4;
  pppuStack_74 = (undefined4 ***)0x108d2040;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppuStack_74 = (undefined4 ***)FUN_10a03a50;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x108d2051;
  FUN_108dc300();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x108d2067;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_7c = (code ***)0x11dd5fd0;
  pppcStack_80 = (code ***)0x11dd5fc0;
  pppcStack_84 = (code ***)0x108d2087;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10a03ac0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppuStack_8c = (undefined4 ***)0x108d2098;
  FUN_108dc300();
  if (((code ****)pppuStack_70 != &pppcStack_84) && ((code ****)pppuStack_70 != (code ****)0x0)) {
    pppuStack_8c = pppuStack_70;
    pppcStack_90 = (code ***)0x108d20ae;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppuStack_8c = (undefined4 ***)0x11dd5fdf;
  pppcStack_90 = (code ***)0x11dd5fd4;
  pppcStack_94 = (code ***)0x108d20ce;
  pppuStack_70 = pppuStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)&LAB_10a03b20;
  pppcStack_98 = (code ***)&pppuStack_8c;
  pppcStack_9c = (code ***)0x108d20df;
  FUN_108dc300();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x108d20f5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dd5fe8;
  pppcStack_a0 = (code ***)0x11dd5fe0;
  pppcStack_a4 = (code ***)0x108d2115;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10a03b50;
  pppuStack_a8 = &pppcStack_9c;
  pppcStack_ac = (code ***)0x108d2126;
  FUN_108dc300();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x108d213c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd5ffb;
  pppcStack_b0 = (code ***)0x11dd5fec;
  pppcStack_b4 = (code ***)0x108d215c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_10a03b90;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x108d216d;
  FUN_108dc300();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x108d2183;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd600b;
  pppcStack_c0 = (code ***)0x11dd5ffc;
  pppcStack_c4 = (code ***)0x108d21a3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_10a03bd0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x108d21b4;
  FUN_108dc300();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x108d21ca;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd5f13;
  pppcStack_d0 = (code ***)0x11dd5f04;
  pppcStack_d4 = (code ***)0x108d21ea;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_108dabb0;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x108d21fb;
  FUN_108dc300();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x108d2211;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd5f21;
  pppcStack_e0 = (code ***)0x11dd5f14;
  pppcStack_e4 = (code ***)0x108d2231;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_108db130;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x108d2242;
  FUN_108dc300();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x108d2258;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dd5f35;
  pppcStack_f0 = (code ***)0x11dd5f24;
  pppcStack_f4 = (code ***)0x108d2278;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_108d9710;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x108d2289;
  FUN_108dc300();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x108d229f;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11dd5f48;
  pppcStack_100 = (code ***)0x11dd5f38;
  pppcStack_104 = (code ***)0x108d22bf;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_108d9790;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x108d22d0;
  FUN_108dc300();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x108d22e6;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd5f64;
  pppcStack_110 = (code ***)0x11dd5f4c;
  pppcStack_114 = (code ***)0x108d2306;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_108d97c0;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppcStack_11c = (code ***)0x108d2317;
  FUN_108dc300();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x108d232d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd5f76;
  pppcStack_120 = (code ***)0x11dd5f68;
  pppcStack_124 = (code ***)0x108d234d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_108d9510;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x108d235e;
  FUN_108dc300();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x108d2374;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd5f85;
  pppcStack_130 = (code ***)0x11dd5f78;
  pppcStack_134 = (code ***)0x108d2394;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_108db2a0;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x108d23a5;
  FUN_108dc300();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x108d23bb;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dd5f91;
  pppcStack_140 = (code ***)0x11dd5f88;
  pppcStack_144 = (code ***)0x108d23db;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_108d9570;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x108d23ec;
  FUN_108dc300();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x108d2402;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dd60e1;
  pppcStack_150 = (code ***)0x11dd60d4;
  pppcStack_154 = (code ***)0x108d2422;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_108db020;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x108d2433;
  FUN_108dc300();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x108d2449;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dd60f3;
  pppcStack_160 = (code ***)0x11dd60e4;
  pppcStack_164 = (code ***)0x108d2469;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_108dad00;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x108d247a;
  FUN_108dc300();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x108d2490;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dd60fd;
  pppcStack_170 = (code ***)0x11dd60f4;
  pppcStack_174 = (code ***)0x108d24b0;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_108d3020;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x108d24c1;
  FUN_108dc300();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    pppcStack_180 = (code ***)0x108d24d7;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11dd610b;
  pppcStack_180 = (code ***)0x11dd6100;
  pppcStack_184 = (code ***)0x108d24f7;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)FUN_108d3140;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x108d2508;
  FUN_108dc300();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x108d251e;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11dd6117;
  pppcStack_190 = (code ***)0x11dd610c;
  pppcStack_194 = (code ***)0x108d253e;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_108d30b0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  pppcStack_19c = (code ***)0x108d254f;
  FUN_108dc300();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x108d2565;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11dd612b;
  pppcStack_1a0 = (code ***)0x11dd6118;
  pppcStack_1a4 = (code ***)0x108d2585;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_108d2ed0;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x108d2596;
  FUN_108dc300();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppuStack_1b0 = (undefined4 ***)0x108d25ac;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11dd6139;
  pppuStack_1b0 = (undefined4 ***)0x11dd612c;
  pppuStack_1b4 = (undefined4 ***)0x108d25cc;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppuStack_1b4 = (undefined4 ***)FUN_108daee0;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x108d25dd;
  FUN_108dc300();
  if (((undefined4 ****)pppcStack_1a0 != &pppuStack_1b4) &&
     ((undefined4 ****)pppcStack_1a0 != (undefined4 ****)0x0)) {
    pppcStack_1bc = pppcStack_1a0;
    pcStack_1c0 = (char *)0x108d25f3;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppuStack_1b4;
  pppcStack_1bc = (code ***)0x11dd6152;
  pcStack_1c0 = "ClearEditRangeNotMatch";
  pppcStack_1c4 = (code ***)0x108d2613;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppcStack_1c4 = (code ***)FUN_108dae00;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppuStack_1cc = (undefined4 ***)0x108d2624;
  FUN_108dc300();
  if (((code ****)pppuStack_1b0 != &pppcStack_1c4) && ((code ****)pppuStack_1b0 != (code ****)0x0))
  {
    pppuStack_1cc = pppuStack_1b0;
    pcStack_1d0 = (char *)0x108d263a;
    FUN_10c3d5d0();
  }
  pppuStack_1b4 = &pppcStack_1c4;
  pppuStack_1cc = (undefined4 ***)0x11dd601e;
  pcStack_1d0 = "RefreshPlayerMoney";
  pppcStack_1d4 = (code ***)0x108d265a;
  pppuStack_1b0 = pppuStack_1b4;
  FUN_100b62c0();
  pppcStack_1d4 = (code ***)FUN_108d2f90;
  pppcStack_1dc = (code ***)&pppuStack_1cc;
  pppcStack_1e0 = (code ***)0x108d2675;
  pppcStack_1d8 = param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_1c4 != &pppcStack_1d8) && ((code ****)pppcStack_1c4 != (code ****)0x0))
  {
    pppcStack_1e0 = pppcStack_1c4;
    pppcStack_1e4 = (code ***)0x108d268b;
    FUN_10c3d5d0();
  }
  pppcStack_1c8 = (code ***)&pppcStack_1d8;
  pppcStack_1e0 = (code ***)0x11dd6038;
  pppcStack_1e4 = (code ***)0x11dd6020;
  pppcStack_1e8 = (code ***)0x108d26ab;
  pppcStack_1c4 = pppcStack_1c8;
  FUN_100b62c0();
  pppcStack_1e8 = (code ***)FUN_108db550;
  pppuStack_1ec = &pppcStack_1e0;
  pppcStack_1f0 = (code ***)0x108d26bc;
  FUN_108dc300();
  if (((code ****)pppcStack_1d4 != &pppcStack_1e8) && ((code ****)pppcStack_1d4 != (code ****)0x0))
  {
    pppcStack_1f0 = pppcStack_1d4;
    pppcStack_1f4 = (code ***)0x108d26d2;
    FUN_10c3d5d0();
  }
  pppcStack_1d8 = (code ***)&pppcStack_1e8;
  pppcStack_1f0 = (code ***)0x11dd6055;
  pppcStack_1f4 = (code ***)0x11dd603c;
  pppcStack_1f8 = (code ***)0x108d26f2;
  pppcStack_1d4 = pppcStack_1d8;
  FUN_100b62c0();
  pppcStack_1f8 = (code ***)FUN_108db5b0;
  pppcStack_1fc = (code ***)&pppcStack_1f0;
  pppcStack_200 = (code ***)0x108d2703;
  FUN_108dc300();
  if (((code ****)pppcStack_1e4 != &pppcStack_1f8) && ((code ****)pppcStack_1e4 != (code ****)0x0))
  {
    pppcStack_200 = pppcStack_1e4;
    pppcStack_204 = (code ***)0x108d2719;
    FUN_10c3d5d0();
  }
  pppcStack_1e8 = (code ***)&pppcStack_1f8;
  pppcStack_200 = (code ***)0x11dd6074;
  pppcStack_204 = (code ***)0x11dd6058;
  pppcStack_208 = (code ***)0x108d2739;
  pppcStack_1e4 = pppcStack_1e8;
  FUN_100b62c0();
  pppcStack_208 = (code ***)FUN_108db620;
  pppcStack_20c = (code ***)&pppcStack_200;
  pppcStack_210 = (code ***)0x108d274a;
  FUN_108dc300();
  if (((code ****)pppcStack_1f4 != &pppcStack_208) && ((code ****)pppcStack_1f4 != (code ****)0x0))
  {
    pppcStack_210 = pppcStack_1f4;
    pppcStack_214 = (code ***)0x108d2760;
    FUN_10c3d5d0();
  }
  pppcStack_1f8 = (code ***)&pppcStack_208;
  pppcStack_210 = (code ***)0x11dd6093;
  pppcStack_214 = (code ***)0x11dd6078;
  pppcStack_218 = (code ***)0x108d2780;
  pppcStack_1f4 = pppcStack_1f8;
  FUN_100b62c0();
  pppcStack_218 = (code ***)FUN_108db6a0;
  pppcStack_21c = (code ***)&pppcStack_210;
  pppcStack_220 = (code ***)0x108d2791;
  FUN_108dc300();
  if (((code ****)pppcStack_204 != &pppcStack_218) && ((code ****)pppcStack_204 != (code ****)0x0))
  {
    pppcStack_220 = pppcStack_204;
    pppcStack_224 = (code ***)0x108d27a7;
    FUN_10c3d5d0();
  }
  pppcStack_208 = (code ***)&pppcStack_218;
  pppcStack_220 = (code ***)0x11dd60aa;
  pppcStack_224 = (code ***)0x11dd6094;
  pppcStack_228 = (code ***)0x108d27c7;
  pppcStack_204 = pppcStack_208;
  FUN_100b62c0();
  pppcStack_228 = (code ***)FUN_108db710;
  pppcStack_22c = (code ***)&pppcStack_220;
  pppcStack_230 = (code ***)0x108d27d8;
  FUN_108dc300();
  if (((code ****)pppcStack_214 != &pppcStack_228) && ((code ****)pppcStack_214 != (code ****)0x0))
  {
    pppcStack_230 = pppcStack_214;
    pppcStack_234 = (code ***)0x108d27ee;
    FUN_10c3d5d0();
  }
  pppcStack_218 = (code ***)&pppcStack_228;
  pppcStack_230 = (code ***)0x11dd60bd;
  pppcStack_234 = (code ***)0x11dd60ac;
  pppcStack_238 = (code ***)0x108d280e;
  pppcStack_214 = pppcStack_218;
  FUN_100b62c0();
  pppcStack_238 = (code ***)FUN_108dc080;
  pppcStack_23c = (code ***)&pppcStack_230;
  pppcStack_240 = (code ***)0x108d281f;
  FUN_108dc300();
  if (((code ****)pppcStack_224 != &pppcStack_238) && ((code ****)pppcStack_224 != (code ****)0x0))
  {
    pppcStack_240 = pppcStack_224;
    ppcStack_244 = (code **)0x108d2835;
    FUN_10c3d5d0();
  }
  pppcStack_228 = (code ***)&pppcStack_238;
  pppcStack_240 = (code ***)0x11dd60d1;
  ppcStack_244 = (code **)0x11dd60c0;
  ppcStack_248 = (code **)0x108d2855;
  pppcStack_224 = pppcStack_228;
  FUN_100b62c0();
  ppcStack_248 = (code **)FUN_108db7f0;
  pppcStack_24c = (code ***)&pppcStack_240;
  pppcStack_250 = (code ***)0x108d2866;
  FUN_108dc300();
  if ((pppcStack_234 != &ppcStack_248) && (pppcStack_234 != (code ***)0x0)) {
    pppcStack_250 = pppcStack_234;
    ppcStack_254 = (code **)0x108d287c;
    FUN_10c3d5d0();
  }
  pppcStack_238 = &ppcStack_248;
  pppcStack_250 = (code ***)0x11dd620d;
  ppcStack_254 = (code **)0x11dd61fc;
  pcStack_258 = (code *)0x108d289c;
  pppcStack_234 = pppcStack_238;
  FUN_100b62c0();
  pcStack_258 = FUN_108d2c00;
  pppcStack_25c = (code ***)&pppcStack_250;
  ppcStack_260 = (code **)0x108d28ad;
  FUN_108dc300();
  if ((ppcStack_244 != &pcStack_258) && (ppcStack_244 != (code **)0x0)) {
    ppcStack_260 = ppcStack_244;
    pcStack_264 = (char *)0x108d28c3;
    FUN_10c3d5d0();
  }
  ppcStack_248 = &pcStack_258;
  ppcStack_260 = (code **)0x11dd6224;
  pcStack_264 = "saveTitleShowSetting";
  pcStack_268 = (code *)0x108d28e3;
  ppcStack_244 = ppcStack_248;
  FUN_100b62c0();
  pcStack_268 = FUN_108d2b80;
  FUN_108dc300(&ppcStack_260);
  if ((ppcStack_254 != &pcStack_268) && (ppcStack_254 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_254);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_108dff80();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_108dffd0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_108e0020();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_108e0070();
    }
  }
  piVar2 = (int *)FUN_10d17440();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0xc))();
    if (iVar1 != 0) {
      FUN_108e00c0(param_1,extraout_ECX_03);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108d2d20 @ 108d2d20  size=402 ===== */
// strings:
//   "GetPlayerPropertyData"
//   "GetOtherPlayerPropertyData"
//   "GetPlayerTitleData"
//   "GetTitlePropertyListData"
//   "GetCurrencyData"
//   "GetCatFoodData"
//   "_checkEquipItemColor"
//   "_requestEquipItemColor"
//   "_checkOtherEquipItemColor"
//   "_requestOtherEquipItemColor"
//   "IsSelfHasBuffer"
//   "IsSelfHasBuffers"
//   "IsSelfHasBufferGene"

/* [RE-AUTO c0]
   strings:
     ""GetPlayerPropertyData""
     ""GetOtherPlayerPropertyData""
     ""GetPlayerTitleData""
     ""GetTitlePropertyListData""
     ""GetCurrencyData""
     ""GetCatFoodData""
     ""_checkEquipItemColor""
     ""_requestEquipItemColor""
     ""_checkOtherEquipItemColor""
     ""_requestOtherEquipItemColor"" */

void FUN_108d2d20(void)

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
    FUN_104d13b0("GetPlayerPropertyData",FUN_108d5ef0);
    FUN_104d13b0("GetOtherPlayerPropertyData",FUN_108d6ea0);
    FUN_104d13b0("GetPlayerTitleData",FUN_108d7da0);
    FUN_104d13b0("GetTitlePropertyListData",FUN_108d8370);
    FUN_104d13b0("GetCurrencyData",FUN_108d8660);
    FUN_104d13b0("GetCatFoodData",FUN_108d8b00);
    FUN_104d13b0("_checkEquipItemColor",FUN_108dba40);
    FUN_104d13b0("_requestEquipItemColor",FUN_108db8d0);
    FUN_104d13b0("_checkOtherEquipItemColor",FUN_108dbda0);
    FUN_104d13b0("_requestOtherEquipItemColor",FUN_108dbf30);
    FUN_104d13b0("IsSelfHasBuffer",FUN_108d5bb0);
    FUN_104d13b0("IsSelfHasBuffers",FUN_108d5d60);
    FUN_104d13b0("IsSelfHasBufferGene",FUN_108d5c70);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_108d6ea0 @ 108d6ea0  size=3826 ===== */
// calls: CPet::SetName
// strings:
//   "curhp"
//   "endure"
//   "curendure"
//   "Attack"
//   "level"
//   "defense"
//   "defendeffect"
//   "lucklevel"
//   "luckattack"
//   "water"
//   "thunder"
//   "dragon"
//   "poison"
//   "palsy"
//   "weaponAttackContainsWater"
//   "weaponAttackContainsFire"
//   "weaponAttackContainsThunder"
//   "weaponAttackContainsDragon"
//   "weaponAttackContainsIce"
//   "weaponAttackContainsPoison"

/* [RE-AUTO c0]
   strings:
     ""curhp""
     ""endure""
     ""curendure""
     ""Attack""
     ""level""
     ""defense""
     ""defendeffect""
     ""lucklevel""
     ""luckattack""
     ""water"" */

void FUN_108d6ea0(int *****param_1,int param_2,int param_3,int ****param_4,int param_5)

{
  int ****ppppiVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte unaff_BL;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *unaff_ESI;
  char *pcVar12;
  uint uVar13;
  undefined4 ****ppppuVar14;
  byte bVar15;
  char *pcVar16;
  undefined4 uVar17;
  char *pcStack_150;
  int *piStack_14c;
  char *pcStack_148;
  uint uStack_144;
  int *piStack_140;
  char *pcStack_13c;
  char *pcStack_138;
  undefined4 ***pppuStack_134;
  undefined4 ***pppuStack_130;
  int ****ppppiStack_12c;
  int ****ppppiStack_128;
  int ***pppiStack_124;
  char *pcStack_114;
  int ***local_110;
  uint uStack_10c;
  int ***pppiStack_108;
  undefined1 auStack_104 [4];
  int **ppiStack_100;
  int ***local_f4;
  int ***pppiStack_f0;
  int ****ppppiStack_ec;
  int ***pppiStack_e8;
  int aiStack_e4 [5];
  int ***pppiStack_d0;
  int ***pppiStack_c8;
  uint uStack_c4;
  int ***pppiStack_c0;
  uint **ppuStack_bc;
  uint **ppuStack_b8;
  int **ppiStack_b4;
  int ***pppiStack_b0;
  int ***pppiStack_ac;
  int ***pppiStack_a8;
  uint ***pppuStack_98;
  uint ***pppuStack_94;
  int ***pppiStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  int **ppiStack_84;
  int ***pppiStack_80;
  uint uStack_7c;
  int ***pppiStack_78;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int ***pppiStack_54;
  int ****local_50 [4];
  int ****ppppiStack_40;
  int ****ppppiStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&pcStack_114;
  local_50[0] = (int ****)param_1;
  local_f4 = (int ***)param_4;
  if ((((param_1 != (int *****)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int ****)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      pppiStack_124 = (int ***)param_1[2];
      ppppiStack_128 = (int ****)param_1;
      ppppiStack_12c = (int ****)0x108d6f13;
      (*(code *)(**param_1)[2])();
      *param_1 = (int ****)0x0;
    }
    param_1[1] = (int ****)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      ppppiStack_128 = (int ****)0x108d6f3b;
      pppiStack_124 = local_f4;
      FUN_104f4330();
      ppppiStack_128 = (int ****)0x108d6f54;
      piVar4 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if (piVar4 != (int *)0x0) {
        pppiStack_124 = (int ***)0x108d6f66;
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x56c))();
        pppiStack_124 = (int ***)*puVar5;
        ppppiStack_128 = (int ****)&DAT_11dbfc90;
        ppppiStack_12c = (int ****)0x108d6f7a;
        FUN_104d1550();
        ppppiStack_12c = (int ****)puVar5[1];
        pppuStack_130 = (undefined4 ***)0x11dd62f4;
        pppuStack_134 = (undefined4 ***)0x108d6f8d;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)puVar5[2];
        pcStack_138 = "endure";
        pcStack_13c = (char *)0x108d6fa0;
        FUN_104d1550();
        pcStack_13c = "curendure";
        piStack_140 = (int *)0x108d6fb8;
        FUN_104d14d0();
        pppiStack_124 = (int ***)puVar5[4];
        ppppiStack_128 = (int ****)0x11dd6310;
        ppppiStack_12c = (int ****)0x108d6fce;
        FUN_104d1550();
        ppppiStack_12c = (int ****)puVar5[5];
        pppuStack_130 = (undefined4 ***)0x11dbf940;
        pppuStack_134 = (undefined4 ***)0x108d6fe1;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)puVar5[6];
        pcStack_138 = "defense";
        pcStack_13c = (char *)0x108d6ff4;
        FUN_104d1550();
        pcStack_13c = "defendeffect";
        local_f4 = (int ***)((float)(int)puVar5[7] / DAT_11de9a20);
        piStack_140 = (int *)0x108d7045;
        FUN_104d14d0();
        pppiStack_124 = (int ***)&DAT_11dd6328;
        ppppiStack_128 = (int ****)0x108d7061;
        FUN_104d14d0();
        pppiStack_124 = (int ***)puVar5[8];
        ppppiStack_128 = (int ****)0x11dbfd48;
        ppppiStack_12c = (int ****)0x108d7077;
        FUN_104d1550();
        ppppiStack_12c = (int ****)puVar5[9];
        pppuStack_130 = (undefined4 ***)0x11dd6330;
        pppuStack_134 = (undefined4 ***)0x108d708a;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)puVar5[10];
        pcStack_138 = "fire";
        pcStack_13c = (char *)0x108d709d;
        FUN_104d1550();
        pcStack_13c = (char *)puVar5[0xb];
        piStack_140 = (int *)0x11dd62b4;
        uStack_144 = 0x108d70b0;
        FUN_104d1550();
        uStack_144 = puVar5[0xc];
        pcStack_148 = "thunder";
        piStack_14c = (int *)0x108d70c3;
        FUN_104d1550();
        piStack_14c = (int *)puVar5[0xd];
        pcStack_150 = "ice";
        FUN_104d1550();
        FUN_104d1550("dragon",puVar5[0xe]);
        FUN_104d1550("poison",puVar5[0xf]);
        pppiStack_124 = (int ***)puVar5[0x10];
        ppppiStack_128 = (int ****)&DAT_11dd62d8;
        ppppiStack_12c = (int ****)0x108d7112;
        FUN_104d1550();
        ppppiStack_12c = (int ****)puVar5[0x11];
        pppuStack_130 = (undefined4 ***)0x11dd62e0;
        pppuStack_134 = (undefined4 ***)0x108d7125;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)(uint)(*(byte *)(puVar5 + 0x5ec) & 1);
        pcStack_138 = "weaponAttackContainsWater";
        pcStack_13c = (char *)0x108d7141;
        FUN_104d15e0();
        pcStack_13c = (char *)(uint)((byte)((uint)puVar5[0x5ec] >> 1) & 1);
        piStack_140 = (int *)0x11dd6374;
        uStack_144 = 0x108d715f;
        FUN_104d15e0();
        uStack_144 = (uint)((byte)((uint)puVar5[0x5ec] >> 2) & 1);
        pcStack_148 = "weaponAttackContainsThunder";
        piStack_14c = (int *)0x108d717e;
        FUN_104d15e0();
        piStack_14c = (int *)(uint)((byte)((uint)puVar5[0x5ec] >> 3) & 1);
        pcStack_150 = "weaponAttackContainsDragon";
        FUN_104d15e0();
        FUN_104d15e0("weaponAttackContainsIce",(byte)((uint)puVar5[0x5ec] >> 4) & 1);
        FUN_104d15e0("weaponAttackContainsPoison",(byte)((uint)puVar5[0x5ec] >> 6) & 1);
        pppiStack_124 = (int ***)(uint)((byte)((uint)puVar5[0x5ec] >> 7) & 1);
        ppppiStack_128 = (int ****)0x11dd63fc;
        ppppiStack_12c = (int ****)0x108d71fd;
        FUN_104d15e0();
        ppppiStack_12c = (int ****)(uint)((byte)((uint)puVar5[0x5ec] >> 8) & 1);
        pppuStack_130 = (undefined4 ***)0x11dd64fc;
        pppuStack_134 = (undefined4 ***)0x108d721c;
        FUN_104d15e0();
        pppuStack_134 = (undefined4 ***)puVar5[0x12];
        pcStack_138 = "firetolerance";
        pcStack_13c = (char *)0x108d722f;
        FUN_104d1550();
        pcStack_13c = (char *)puVar5[0x13];
        piStack_140 = (int *)0x11dd6428;
        uStack_144 = 0x108d7242;
        FUN_104d1550();
        uStack_144 = puVar5[0x14];
        pcStack_148 = "thundertolerance";
        piStack_14c = (int *)0x108d7255;
        FUN_104d1550();
        piStack_14c = (int *)puVar5[0x15];
        pcStack_150 = "dragontolerance";
        FUN_104d1550();
        uVar17 = puVar5[0x16];
        pcVar16 = "icetolerance";
        FUN_104d1550("icetolerance",uVar17);
        FUN_104d1550("hrLevel",puVar5[0x5e0]);
        pppiStack_124 = (int ***)puVar5[0x5e1];
        ppppiStack_128 = (int ****)0x11dd647c;
        ppppiStack_12c = (int ****)0x108d72aa;
        FUN_104d1550();
        ppppiStack_12c = (int ****)puVar5[0x5e2];
        pppuStack_130 = (undefined4 ***)0x11dd5470;
        pppuStack_134 = (undefined4 ***)0x108d72c0;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)puVar5[0x5e3];
        pcStack_138 = "showLevel";
        pcStack_13c = (char *)0x108d72d6;
        FUN_104d1550();
        pppiStack_d0 = (int ***)0x0;
        pppiStack_124 = (int ***)(puVar5 + 0x17);
        ppppiStack_128 = (int ****)0x108d72ee;
        CPet__SetName();
        ppppiStack_128 = (int ****)local_50;
        local_50[0] = (int ****)((uint)local_50[0] & 0xffffff00);
        ppppiStack_12c = (int ****)0x108d7315;
        ppppiStack_40 = ppppiStack_128;
        ppppiStack_3c = ppppiStack_128;
        FUN_100e5aa0();
        ppppiStack_12c = ppppiStack_40;
        pppuStack_130 = (undefined4 ***)&DAT_11dbac80;
        pppuStack_134 = (undefined4 ***)0x108d732c;
        FUN_104d1670();
        if ((ppppiStack_40 != &pppiStack_54) && ((int *****)ppppiStack_40 != (int *****)0x0)) {
          ppppiStack_12c = ppppiStack_40;
          pppuStack_130 = (undefined4 ***)0x108d734b;
          FUN_10c3d5d0();
        }
        ppppiStack_12c = (int ****)puVar5[5];
        pppuStack_130 = (undefined4 ***)0x11dbf940;
        pppuStack_134 = (undefined4 ***)0x108d7361;
        FUN_104d1550();
        pppuStack_134 = (undefined4 ***)puVar5[0x57];
        pcStack_138 = "sex";
        pcStack_13c = (char *)0x108d7377;
        FUN_104d1550();
        pcStack_13c = (char *)puVar5[0x58];
        piStack_140 = (int *)0x11dd6538;
        uStack_144 = 0x108d738d;
        FUN_104d1550();
        uStack_144 = puVar5[0x59];
        pcStack_148 = "ammorLevel";
        piStack_14c = (int *)0x108d73a3;
        FUN_104d1550();
        ppuStack_b8 = (uint **)0x0;
        ppppiStack_12c = (int ****)&uStack_88;
        ppiStack_b4 = (int **)0x0;
        uStack_88 = 0;
        ppiStack_84 = (int **)0x0;
        pppuStack_130 = (undefined4 ***)0x108d73db;
        FUN_11a98a70();
        bVar15 = (byte)pcVar16;
        aiStack_e4[0] = 0;
        if (0 < (int)puVar5[0x5ca]) {
          puVar9 = puVar5 + 0x5cb;
          do {
            ppiStack_100 = (int **)*puVar9;
            if (((uint)ppuStack_b8 >> 6 & 1) != 0) {
              pppuStack_134 = &ppuStack_bc;
              pppuStack_130 = (undefined4 ***)ppiStack_b4;
              pcStack_138 = (char *)0x108d7415;
              (*(code *)(*ppuStack_bc)[2])();
              ppuStack_bc = (uint **)0x0;
            }
            pppuStack_130 = &ppuStack_bc;
            ppuStack_b8 = (uint **)0x3;
            ppiStack_b4 = ppiStack_100;
            pppuStack_134 = (undefined4 ***)ppiStack_84;
            pcStack_138 = (char *)0x108d7445;
            (**(code **)(*piStack_8c + 0x3c))();
            bVar15 = (byte)pcVar16;
            puVar9 = puVar9 + 1;
            aiStack_e4[0] = aiStack_e4[0] + 1;
          } while (aiStack_e4[0] < (int)puVar5[0x5ca]);
        }
        pppuStack_130 = (undefined4 ***)(uint)((unaff_BL & 0x8f) == 10);
        pppuStack_134 = (undefined4 ***)&piStack_8c;
        pcStack_138 = "starLevelDetailArray";
        pcStack_13c = pcStack_114;
        piStack_140 = (int *)0x108d7485;
        (**(code **)(*unaff_ESI + 0x14))();
        piStack_140 = aiStack_e4;
        aiStack_e4[0] = 0;
        aiStack_e4[1] = 0;
        uStack_144 = 0x108d74a1;
        FUN_11a98a70();
        if (*(char *)(puVar5 + 0x5e4) == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = puVar5[0x5e5];
        }
        ppppuVar14 = &pppuStack_130;
        FUN_104f4330();
        FUN_108d5a80(0,uVar10);
        FUN_104f4330(&pppuStack_134);
        FUN_108d5a80(1,puVar5[0x5e6]);
        FUN_104f4330(&pcStack_138);
        FUN_108d5a80(2,puVar5[0x5e7]);
        FUN_104f4330(&pcStack_13c);
        FUN_108d5a80(3,puVar5[0x5e8]);
        FUN_104f4330(&piStack_140);
        FUN_108d5a80(4,puVar5[0x5e9]);
        FUN_104f4330(&uStack_144);
        FUN_108d5a80(5,puVar5[0x5ea]);
        FUN_104f4330(&pcStack_148);
        FUN_108d5a80(6,puVar5[0x5eb]);
        pcVar16 = "privilegeDataList";
        uVar13 = uStack_144;
        (**(code **)(*piStack_14c + 0x14))
                  (uStack_144,"privilegeDataList",auStack_104,((byte)pcStack_148 & 0x8f) == 10);
        iVar6 = FUN_11442b60(puVar5[0x5df]);
        if (iVar6 == 0) {
          FUN_104d1670("strTitle",&DAT_11d9d32b);
        }
        else {
          FUN_104d1790("strTitle",iVar6 + 0x14);
        }
        aiStack_e4[0] = 0;
        aiStack_e4[1] = 0;
        piStack_140 = (int *)CONCAT31(piStack_140._1_3_,(bVar15 & 0x8f) == 10);
        piVar4 = piStack_140;
        cVar3 = (*(code *)(*ppppuVar14)[4])(uVar17,"ITEM_VO_CLASS_NAME",aiStack_e4);
        if (((cVar3 != '\0') && (((byte)pppiStack_f0 & 0x8f) == 6)) &&
           (ppppiStack_128 = ppppiStack_ec, ((uint)pppiStack_f0 >> 6 & 1) != 0)) {
          ppppiStack_128 = (int ****)*ppppiStack_ec;
        }
        uStack_c4 = 0;
        pppiStack_c0 = (int ***)0x0;
        FUN_11a98a70(&uStack_c4);
        pcStack_150 = (char *)0x0;
        iVar11 = 0;
        piStack_14c = (int *)0x0;
        iVar6 = -1;
        pcVar12 = (char *)(puVar5 + 0x67);
        do {
          if (*(int *)(pcVar12 + -0xc) != 0) {
            FUN_11a98de0(&pcStack_150,ppppiStack_12c,0,0);
            pcStack_148 = (char *)0x0;
            CPet__SetName(pcVar12 + -0x2c);
            pppiStack_b0 = (int ***)&pppiStack_c0;
            pcVar2 = pcVar12;
            do {
              pcVar8 = pcVar2;
              pcVar2 = pcVar8 + 1;
            } while (*pcVar8 != '\0');
            pppiStack_ac = pppiStack_b0;
            FUN_100b62c0(pcVar12,pcVar8);
            pcStack_150 = (char *)0x0;
            CPet__SetName(pcVar12 + 0x5c);
            FUN_104d1550("collumn",*(undefined4 *)(pcVar12 + -0x34));
            FUN_104d1550(&DAT_11dbfe78,*(undefined4 *)(pcVar12 + -0x30));
            pppuStack_94 = (uint ***)&ppiStack_b4;
            ppiStack_b4 = (int **)((uint)ppiStack_b4 & 0xffff0000);
            pppiStack_90 = (int ***)pppuStack_94;
            FUN_100e5b60(&ppiStack_b4);
            FUN_104d1700(&DAT_11dbac80,pppuStack_94);
            if ((pppuStack_94 != &ppuStack_b8) && ((int ****)pppuStack_94 != (int ****)0x0)) {
              FUN_10c3d5d0(pppuStack_94);
            }
            FUN_104d1550("count",*(undefined4 *)(pcVar12 + -8));
            FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(pcVar12 + -0xc));
            FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(pcVar12 + -4));
            FUN_104d1670("asset",ppuStack_bc);
            FUN_104d1550("m_nBindType",*(undefined4 *)(pcVar12 + 0x20));
            FUN_104d15e0("m_bMallItem",pcVar12[0x24]);
            FUN_104d15e0("m_bCanDecompose",pcVar12[0x25]);
            FUN_104d1550("m_typeNormal",*(undefined4 *)(pcVar12 + 0x28));
            FUN_104d1550("m_typeSub",*(undefined4 *)(pcVar12 + 0x2c));
            FUN_104d15e0("m_bUseItem",pcVar12[0x30]);
            FUN_104d1550("m_nRareType",*(undefined4 *)(pcVar12 + 0x34));
            FUN_104d1550("isBind",*(undefined4 *)(pcVar12 + 0x38));
            FUN_104d1550("m_nCDTime",*(undefined4 *)(pcVar12 + 0x3c));
            FUN_104d1550("m_nCDGroupTag",*(undefined4 *)(pcVar12 + 0x40));
            FUN_104d1550("m_nSellPrice",*(undefined4 *)(pcVar12 + 0x44));
            FUN_104d1550("m_nUseTimes",*(undefined4 *)(pcVar12 + 0x48));
            FUN_104d1550("m_nMaxUseTimes",*(undefined4 *)(pcVar12 + 0x4c));
            FUN_104d1550("m_nExpireTime",*(undefined4 *)(pcVar12 + 0x50));
            FUN_104d1550("m_bCanDestroy",*(undefined4 *)(pcVar12 + 0x54));
            FUN_104d1550("m_nEnchantTime",*(undefined4 *)(pcVar12 + 0x58));
            FUN_104d1550("m_bCanDestroy",*(undefined4 *)(pcVar12 + 0x54));
            pppuStack_98 = &ppuStack_b8;
            ppuStack_b8 = (uint **)((uint)ppuStack_b8 & 0xffff0000);
            pppuStack_94 = pppuStack_98;
            FUN_100e5b60(&ppuStack_b8);
            FUN_104d1700("m_strEnchantDesc",pppuStack_98);
            if ((pppuStack_98 != &ppuStack_bc) && ((int ****)pppuStack_98 != (int ****)0x0)) {
              FUN_10c3d5d0(pppuStack_98);
            }
            FUN_104d15e0("m_bIsLocal",0);
            FUN_104d1550("m_nOtherEquipPos",iVar11);
            FUN_104d1550("m_nTransmogrifyItemId",*(undefined4 *)(pcVar12 + 0x9c));
            iVar7 = FUN_1052bdd0(*(undefined4 *)(pcVar12 + -0xc));
            if (iVar7 != 0) {
              FUN_104d1550("m_nRequire_Sex",*(undefined4 *)(iVar7 + 0xfc));
            }
            FUN_104d1550("m_nQuenchLevel",*(undefined4 *)(pcVar12 + 0xa0));
            FUN_104d1550("m_nMaxQuenchLevel",*(undefined4 *)(pcVar12 + 0xa4));
            FUN_104d1550("m_bCanQuench",*(undefined4 *)(pcVar12 + 0xa8));
            FUN_104d1550("m_nColorIndex",*(undefined4 *)(pcVar12 + 0xac));
            if ((*(int *)(pcVar12 + -4) == 2) && (*(int *)(pcVar12 + 0x28) == 1)) {
              iVar6 = *(int *)(pcVar12 + 0x2c);
            }
            if (pppuStack_134 != (undefined4 ***)0x0) {
              FUN_10c3da30(pppuStack_134);
            }
            if (((int ****)pppuStack_98 != &pppiStack_ac) &&
               ((int ****)pppuStack_98 != (int ****)0x0)) {
              FUN_10c3d5d0(pppuStack_98);
            }
            if (pcStack_138 != (char *)0x0) {
              FUN_10c3da30(pcStack_138);
            }
          }
          (*(code *)(*pppiStack_c8)[0xf])(pppiStack_c0,&pcStack_150);
          bVar15 = (byte)uVar13;
          iVar11 = iVar11 + 1;
          pcVar12 = pcVar12 + 0xe4;
        } while (iVar11 < 0x18);
        if (iVar6 == 5) {
          FUN_104d15e0("weaponAttackContainsWater",0);
          FUN_104d15e0("weaponAttackContainsFire",0);
          FUN_104d15e0("weaponAttackContainsThunder",0);
          FUN_104d15e0("weaponAttackContainsDragon",0);
          FUN_104d15e0("weaponAttackContainsIce",0);
          FUN_104d15e0("weaponAttackContainsPoison",0);
          FUN_104d15e0("weaponAttackContainsSleep",0);
          FUN_104d15e0("weaponAttackContainsPalsy",0);
        }
        (**(code **)(*piVar4 + 0x14))
                  (pcVar16,"otherPlayerEquipList",&pppiStack_c8,(bVar15 & 0x8f) == 10);
        ppppiVar1 = local_50[0];
        if (((uint)local_50[0][1] >> 6 & 1) != 0) {
          pppiStack_124 = local_50[0][2];
          ppppiStack_128 = local_50[0];
          ppppiStack_12c = (int ****)0x108d7bfa;
          (*(code *)(**local_50[0])[2])();
          *ppppiVar1 = (int ***)0x0;
        }
        ppppiVar1[1] = (int ***)0x2;
        *(undefined1 *)(ppppiVar1 + 2) = 1;
        if (((uint)ppppiStack_ec >> 6 & 1) != 0) {
          ppppiStack_128 = &pppiStack_f0;
          pppiStack_124 = pppiStack_e8;
          ppppiStack_12c = (int ****)0x108d7c28;
          (*(code *)(*pppiStack_f0)[2])();
          pppiStack_f0 = (int ***)0x0;
        }
        ppppiStack_ec = (int ****)0x0;
        if ((uStack_64 >> 6 & 1) != 0) {
          ppppiStack_128 = &pppiStack_68;
          pppiStack_124 = pppiStack_60;
          ppppiStack_12c = (int ****)0x108d7c61;
          (*(code *)(*pppiStack_68)[2])();
          pppiStack_68 = (int ***)0x0;
        }
        uStack_64 = 0;
        if (((uint)pppuStack_94 >> 6 & 1) != 0) {
          ppppiStack_128 = (int ****)&pppuStack_98;
          pppiStack_124 = pppiStack_90;
          ppppiStack_12c = (int ****)0x108d7ca0;
          (*(code *)(*pppuStack_98)[2])();
          pppuStack_98 = (uint ***)0x0;
        }
        pppuStack_94 = (uint ***)0x0;
        if ((uStack_c4 >> 6 & 1) != 0) {
          ppppiStack_128 = &pppiStack_c8;
          pppiStack_124 = pppiStack_c0;
          ppppiStack_12c = (int ****)0x108d7cd3;
          (*(code *)(*pppiStack_c8)[2])();
          pppiStack_c8 = (int ***)0x0;
        }
        uStack_c4 = 0;
        if ((uStack_7c >> 6 & 1) != 0) {
          ppppiStack_128 = &pppiStack_80;
          pppiStack_124 = pppiStack_78;
          ppppiStack_12c = (int ****)0x108d7d0c;
          (*(code *)(*pppiStack_80)[2])();
          pppiStack_80 = (int ***)0x0;
        }
        uStack_7c = 0;
        if (((uint)pppiStack_ac >> 6 & 1) != 0) {
          ppppiStack_128 = &pppiStack_b0;
          pppiStack_124 = pppiStack_a8;
          ppppiStack_12c = (int ****)0x108d7d3f;
          (*(code *)(*pppiStack_b0)[2])();
          pppiStack_b0 = (int ***)0x0;
        }
        pppiStack_ac = (int ***)0x0;
        if ((int ****)pppiStack_d0 != (int ****)0x0) {
          pppiStack_124 = pppiStack_d0;
          ppppiStack_128 = (int ****)0x108d7d5d;
          FUN_10c3da30();
        }
      }
      if ((uStack_10c >> 6 & 1) != 0) {
        ppppiStack_128 = &local_110;
        pppiStack_124 = pppiStack_108;
        ppppiStack_12c = (int ****)0x108d7d7d;
        (*(code *)(*local_110)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108d8660 @ 108d8660  size=1179 ===== */
// strings:
//   "CURRENCY_VO_CLASSNAME"
//   "nCurrencyID"
//   "nAttrID"
//   "strIconPath"
//   "strName"
//   "strTips"
//   "nCount"
//   "nCountMax"
//   "nCount2"
//   "nCountMax2"
//   "MatchEntry"
//   "currencyList"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   strings:
     ""CURRENCY_VO_CLASSNAME""
     ""nCurrencyID""
     ""nAttrID""
     ""strIconPath""
     ""strName""
     ""strTips""
     ""nCount""
     ""nCountMax""
     ""nCount2""
     ""nCountMax2"" */

void FUN_108d8660(int **param_1,int param_2,int param_3,int *param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int **ppiVar7;
  undefined4 unaff_EDI;
  int **ppiVar8;
  char *pcStack_cc;
  int **ppiStack_c8;
  int *piStack_c4;
  int *local_b4;
  int iStack_b0;
  int *piStack_ac;
  undefined4 uStack_a4;
  int **ppiStack_a0;
  undefined1 auStack_9c [4];
  int iStack_98;
  undefined4 uStack_94;
  int **local_8c;
  int *piStack_88;
  uint uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  int *piStack_64;
  byte bStack_60;
  undefined4 auStack_5c [3];
  int *local_50;
  uint uStack_4c;
  int *piStack_48;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_b4;
  local_8c = param_1;
  local_b4 = param_4;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_c4 = param_1[2];
      ppiStack_c8 = param_1;
      pcStack_cc = (char *)0x108d86d0;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    if (param_5 != 0) {
      ppiStack_c8 = (int **)0x108d86f8;
      piStack_c4 = local_b4;
      FUN_104f4330();
      ppiStack_c8 = (int **)0x108d86fd;
      iStack_b0 = FUN_107cb5c0();
      if (iStack_b0 != 0) {
        ppiStack_c8 = &piStack_70;
        piStack_70 = (int *)0x0;
        uStack_6c = 0;
        local_b4 = (int *)CONCAT31(local_b4._1_3_,((byte)uStack_4c & 0x8f) == 10);
        piStack_ac = (int *)0x0;
        piStack_c4 = local_b4;
        pcStack_cc = "CURRENCY_VO_CLASSNAME";
        (**(code **)(*local_50 + 0x10))(piStack_48);
        iStack_98 = 0;
        uStack_94 = 0;
        FUN_11a98a70();
        ppiVar7 = (int **)0x0;
        ppiStack_c8 = (int **)0x0;
        piVar2 = (int *)FUN_10848370(extraout_ECX);
        iVar3 = (**(code **)(*piVar2 + 0x28))();
        uVar5 = extraout_ECX_00;
        if (0 < iVar3) {
          do {
            iVar4 = FUN_10848370(uVar5);
            iVar3 = extraout_ECX_01;
            if (((int)ppiVar7 < 0) ||
               (iVar3 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 2, iVar3 <= (int)ppiVar7)
               ) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + (int)ppiVar7 * 4);
            }
            if (iVar4 != 0) {
              ppiVar8 = (int **)0x0;
              FUN_11a98de0(&stack0xffffff44,unaff_EDI,0);
              FUN_104d1550("nCurrencyID",*(undefined4 *)(iVar4 + 0x10));
              FUN_104d1550("nAttrID",*(undefined4 *)(iVar4 + 0x14));
              FUN_104d1670("strIconPath",*(undefined4 *)(iVar4 + 0x30));
              FUN_104d1790("strName",iVar4 + 0x18);
              FUN_104d1790("strTips",iVar4 + 0x34);
              if (*(int *)(iVar4 + 0x10) == 3) {
                uVar5 = FUN_1025b060();
                FUN_104d1550("nCount",uVar5);
                uVar5 = FUN_1134c890();
                FUN_104d1550("nCountMax",uVar5);
                uVar5 = FUN_1025b060();
                FUN_104d1550("nCount2",uVar5);
                uVar5 = FUN_1134c8b0();
                ppiVar7 = ppiVar8;
LAB_108d896b:
                FUN_104d1550("nCountMax2",uVar5);
              }
              else {
                if (*(int *)(iVar4 + 0x10) == 4) {
                  iVar3 = FUN_117fa140();
                  uVar5 = *(undefined4 *)(iVar3 + 0xa4);
                  iVar3 = FUN_117fa140();
                  uStack_7c = *(undefined4 *)(iVar3 + 0xa0);
                  iStack_78 = (**(code **)(iStack_98 + 0x4e4))();
                  uVar6 = FUN_1025b060();
                  FUN_104d1550("nCount",uVar6);
                  FUN_104d1550("nCountMax",uVar5);
                  uVar5 = uStack_7c;
                  ppiVar7 = ppiVar8;
                  if (iStack_78 != 0) {
                    FUN_104d1550("nCount2",*(undefined4 *)(iStack_78 + 0x14));
                    uVar5 = uStack_7c;
                    ppiVar7 = ppiVar8;
                  }
                  goto LAB_108d896b;
                }
                FUN_11348ac0(auStack_5c,*(undefined4 *)(iVar4 + 0x14));
                FUN_104d1550("nCount",piStack_64);
                FUN_104fd340();
              }
              if (*(int *)(iVar4 + 0x10) == 4) {
                piVar2 = (int *)FUN_104d0280();
                cVar1 = (**(code **)(*piVar2 + 0x54))("MatchEntry");
                if (cVar1 != '\0') goto LAB_108d89e1;
              }
              else {
LAB_108d89e1:
                (**(code **)(*piStack_ac + 0x3c))(uStack_a4,&pcStack_cc);
              }
              FUN_104d7c10();
              iVar3 = extraout_ECX_02;
            }
            ppiVar7 = (int **)((int)ppiVar7 + 1);
            ppiStack_c8 = ppiVar7;
            piVar2 = (int *)FUN_10848370(iVar3);
            iVar3 = (**(code **)(*piVar2 + 0x28))();
            uVar5 = extraout_ECX_03;
            param_1 = ppiStack_a0;
          } while ((int)ppiVar7 < iVar3);
        }
        (**(code **)(*piStack_64 + 0x14))
                  (auStack_5c[0],"currencyList",auStack_9c,(bStack_60 & 0x8f) == 10);
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          piStack_c4 = param_1[2];
          pcStack_cc = (char *)0x108d8a5e;
          ppiStack_c8 = param_1;
          (**(code **)(**param_1 + 8))();
          *param_1 = (int *)0x0;
        }
        param_1[1] = (int *)0x2;
        *(undefined1 *)(param_1 + 2) = 1;
        if ((uStack_84 >> 6 & 1) != 0) {
          ppiStack_c8 = &piStack_88;
          piStack_c4 = piStack_80;
          pcStack_cc = (char *)0x108d8a8c;
          (**(code **)(*piStack_88 + 8))();
          piStack_88 = (int *)0x0;
        }
        uStack_84 = 0;
        if ((uStack_6c >> 6 & 1) != 0) {
          ppiStack_c8 = &piStack_70;
          piStack_c4 = piStack_68;
          pcStack_cc = (char *)0x108d8ab9;
          (**(code **)(*piStack_70 + 8))();
          piStack_70 = (int *)0x0;
        }
        uStack_6c = 0;
      }
      if ((uStack_4c >> 6 & 1) != 0) {
        ppiStack_c8 = &local_50;
        piStack_c4 = piStack_48;
        pcStack_cc = (char *)0x108d8ae6;
        (**(code **)(*local_50 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e20c0 @ 108e20c0  size=681 ===== */
// strings:
//   "GetFriendFarmListData"
//   "GetCollectPointListData"
//   "GetTrainListData"
//   "GetFarmData"
//   "GetSeedData"
//   "GetToolData"
//   "GetFLSettlementData"
//   "ReqFarmLocationUpgrade"
//   "ReqEnterFarm"
//   "ReqReturnHomeFarm"
//   "ReqAutoCollection"
//   "ReqSetPetToCollectionPoint"
//   "ReqSetPetToTrain"
//   "OpenSelectPetUI"
//   "OpenSelectToolUI"
//   "ReqPlant"
//   "GetFarmNoticeTipsData"
//   "ReqSetOutputLevel"
//   "ReqFarmLargeFacility"
//   "GetFarmCDData"

/* [RE-AUTO c0]
   strings:
     ""GetFriendFarmListData""
     ""GetCollectPointListData""
     ""GetTrainListData""
     ""GetFarmData""
     ""GetSeedData""
     ""GetToolData""
     ""GetFLSettlementData""
     ""ReqFarmLocationUpgrade""
     ""ReqEnterFarm""
     ""ReqReturnHomeFarm"" */

void FUN_108e20c0(void)

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
    FUN_104d13b0("GetFriendFarmListData",FUN_108e25d0);
    FUN_104d13b0("GetCollectPointListData",FUN_108e36f0);
    FUN_104d13b0("GetTrainListData",FUN_108e4680);
    FUN_104d13b0("GetFarmData",FUN_108e3340);
    FUN_104d13b0("GetSeedData",FUN_108e50d0);
    FUN_104d13b0("GetToolData",FUN_108e5e20);
    FUN_104d13b0("GetFLSettlementData",FUN_108e6190);
    FUN_104d13b0("ReqFarmLocationUpgrade",FUN_108e5760);
    FUN_104d13b0("ReqEnterFarm",FUN_108e5860);
    FUN_104d13b0("ReqReturnHomeFarm",FUN_108e57f0);
    FUN_104d13b0("ReqAutoCollection",FUN_108e58c0);
    FUN_104d13b0("ReqSetPetToCollectionPoint",FUN_108e5960);
    FUN_104d13b0("ReqSetPetToTrain",FUN_108e5a20);
    FUN_104d13b0("OpenSelectPetUI",FUN_108e5af0);
    FUN_104d13b0("OpenSelectToolUI",FUN_108e5c50);
    FUN_104d13b0("ReqPlant",FUN_108e5cb0);
    FUN_104d13b0("GetFarmNoticeTipsData",FUN_108e2bb0);
    FUN_104d13b0("ReqSetOutputLevel",FUN_108e5d20);
    FUN_104d13b0("ReqFarmLargeFacility",FUN_108e6460);
    FUN_104d13b0("GetFarmCDData",FUN_108e66f0);
    FUN_104d13b0("ReqFarmCDReduce",FUN_108e6d50);
    FUN_104d13b0("ReqSetCurrentEquipRackAvatar",FUN_108e6eb0);
    FUN_104d13b0("ReqGetCurrentEquipRackAvatar",FUN_108e7080);
    FUN_104d13b0("ReqGetEquipItemVoByItemID",FUN_108e7140);
    FUN_104d13b0("ReqRemoveCurrentEquipRackAvatar",FUN_108e7710);
    FUN_104d13b0("GetPetInfoData",FUN_108e7d30);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_108e36f0 @ 108e36f0  size=3863 ===== */
// calls: _time64, CPet::SetName, CPetSkillInfo::CollectSkillSummaryEntries
// strings:
//   "CP_VO_CLASSNAME"
//   "nUIMaxLevel"
//   "level"
//   "maxLevel"
//   "outputLevel"
//   "requiredPlayerLevel"
//   "curExp"
//   "maxExp"
//   "strDesc"
//   "upgradeCost"
//   "farmExpCost"
//   "canCollect"
//   "totalTime"
//   "MATERIAL_ITEM_VO_CLASS_NAME"
//   "ItemID"
//   "itemIconPathName"
//   "itemList"
//   "petID"
//   "petIndex"
//   "petName"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""CP_VO_CLASSNAME""
     ""nUIMaxLevel""
     ""level""
     ""maxLevel""
     ""outputLevel""
     ""requiredPlayerLevel""
     ""curExp""
     ""maxExp""
     ""strDesc""
     ""upgradeCost"" */

void FUN_108e36f0(int **param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *unaff_EDI;
  undefined4 *puVar11;
  int *piVar12;
  char *pcVar13;
  bool bVar14;
  longlong lVar15;
  __time64_t _Var16;
  char *pcVar17;
  int *piVar18;
  int *piVar19;
  byte bVar20;
  undefined4 uVar21;
  int iStack_2d8;
  int **ppiVar22;
  undefined4 *puStack_2c4;
  undefined1 *puStack_2c0;
  uint *puStack_2bc;
  int **ppiStack_2b8;
  int *piStack_2b4;
  int *piStack_2b0;
  char *pcStack_2ac;
  undefined4 *puStack_2a8;
  int *piStack_2a4;
  int **ppiStack_2a0;
  uint *puStack_29c;
  int *piVar23;
  uint uStack_28c;
  undefined4 uStack_288;
  int *piStack_284;
  int iStack_280;
  int *piStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  int *piStack_270;
  int *piStack_26c;
  undefined4 uStack_268;
  int *piStack_264;
  int *piStack_25c;
  int aiStack_258 [3];
  int iStack_24c;
  int *piStack_248;
  byte bStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  int *piStack_238;
  byte bStack_234;
  int *piStack_230;
  uint uStack_22c;
  uint *puStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int *piStack_218;
  int **ppiStack_214;
  uint *puStack_210;
  int *piStack_20c;
  uint uStack_208;
  int iStack_204;
  uint uStack_200;
  int iStack_1fc;
  uint uStack_1f8;
  int *piStack_1f4;
  bool bStack_1f0;
  undefined3 uStack_1ef;
  undefined4 uStack_1ec;
  int *piStack_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  int *piStack_1cc;
  int *piStack_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1ac;
  int iStack_1a4;
  int **local_194;
  int *piStack_190;
  uint uStack_18c;
  uint *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int *piStack_164;
  int *piStack_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined1 auStack_dc [24];
  uint uStack_c4;
  uint auStack_c0 [4];
  uint *puStack_b0;
  uint *puStack_ac;
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 auStack_84 [12];
  uint uStack_78;
  uint auStack_74 [2];
  uint auStack_6c [2];
  uint *puStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  int *piStack_54;
  uint uStack_50;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_28c;
  local_194 = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      puStack_29c = (uint *)param_1[2];
      ppiStack_2a0 = param_1;
      piStack_2a4 = (int *)0x108e375e;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_29c = (uint *)0x108e3788;
    piStack_238 = (int *)(**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if (piStack_238 != (int *)0x0) {
      puStack_29c = (uint *)0x108e37aa;
      cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))();
      if (((cVar2 != '\0') && (iVar3 = *(int *)(DAT_1202e818 + 0xd0), iVar3 != 0)) &&
         ((int *)piStack_238[0xb36] != (int *)0x0)) {
        puStack_29c = (uint *)0x108e37dc;
        iStack_23c = (**(code **)(*(int *)piStack_238[0xb36] + 0x54))();
        if (iStack_23c != 0) {
          puStack_29c = (uint *)0x108e37f7;
          iStack_24c = (**(code **)(*(int *)(iVar3 + 0x140) + 4))();
          puStack_29c = (uint *)param_4;
          ppiStack_2a0 = (int **)0x108e3805;
          FUN_104f4330();
          ppiStack_2a0 = &piStack_164;
          piStack_164 = (int *)0x0;
          piStack_160 = (int *)0x0;
          piStack_2a4 = (int *)0x108e382a;
          FUN_11a98a70();
          puStack_2a8 = &uStack_220;
          uStack_220 = 0;
          uStack_21c = 0;
          uStack_288 = 0;
          piStack_264 = (int *)CONCAT31(piStack_264._1_3_,(bStack_234 & 0x8f) == 10);
          piStack_2a4 = piStack_264;
          pcStack_2ac = "CP_VO_CLASSNAME";
          piStack_2b0 = piStack_230;
          piStack_2b4 = (int *)0x108e3876;
          cVar2 = (**(code **)(*piStack_238 + 0x10))();
          if ((cVar2 == '\0') || (((byte)uStack_22c & 0x8f) != 6)) {
            puStack_2bc = (uint *)0x0;
          }
          else {
            puStack_2bc = puStack_228;
            unaff_EDI = puStack_228;
            if ((uStack_22c >> 6 & 1) != 0) {
              unaff_EDI = (uint *)*puStack_228;
              puStack_2bc = unaff_EDI;
            }
          }
          iStack_204 = -0x2c - (int)piStack_264;
          uStack_278 = 0x80;
          puVar8 = (uint *)(piStack_264 + 0xb);
          do {
            piStack_2b4 = (int *)0x0;
            ppiStack_2b8 = (int **)0x0;
            puStack_2c0 = &stack0xfffffd70;
            piVar23 = (int *)0x0;
            uStack_28c = 0;
            puStack_2c4 = (undefined4 *)0x108e3901;
            puStack_29c = puVar8;
            FUN_11a98de0();
            puStack_2c4 = (undefined4 *)(uint)(ushort)*puVar8;
            puStack_2c4 = (undefined4 *)FUN_11420f50();
            iVar3 = FUN_108e15c0();
            if (iVar3 == 0) {
              puStack_2c4 = (undefined4 *)0x108e3928;
              FUN_104d7c10();
              puVar10 = puVar8;
            }
            else {
              puStack_2c4 = (undefined4 *)(iVar3 + 0x50);
              FUN_100e5580();
              auStack_6c[0] = auStack_6c[0] & 0xffffff00;
              puStack_5c = auStack_6c;
              puStack_58 = auStack_6c;
              FUN_100e5aa0();
              FUN_104d1670();
              if ((puStack_5c != auStack_74 + 1) && (puStack_5c != (uint *)0x0)) {
                FUN_10c3d5d0();
              }
              FUN_117c7e70();
              FUN_104d1550();
              FUN_104d1550();
              FUN_104d1550();
              FUN_117c7e70();
              FUN_104d1550("maxLevel");
              FUN_104d1550("outputLevel",(ushort)puVar8[3]);
              FUN_104d1550("requiredPlayerLevel",*(undefined4 *)(iVar3 + 0x58));
              FUN_104d1440("curExp",puVar8[-1]);
              FUN_104d1550("maxExp",*(undefined4 *)(iVar3 + 0x1c));
              FUN_100e5580();
              puVar10 = auStack_74;
              auStack_74[0] = auStack_74[0] & 0xffffff00;
              puStack_64 = puVar10;
              puStack_60 = puVar10;
              FUN_100e5aa0();
              FUN_104d1670();
              if ((puStack_64 != &uStack_78) && (puStack_64 != (uint *)0x0)) {
                FUN_10c3d5d0();
              }
              FUN_104d1550();
              FUN_104d1550();
              if ((DAT_123bbac8 == 0 && DAT_123bbacc == 0) ||
                 (lVar15 = (**(code **)(*piStack_270 + 0xc0))(),
                 lVar15 == CONCAT44(DAT_123bbacc,DAT_123bbac8))) {
                bVar14 = *(ushort *)((int)puVar8 + 2) == 0;
              }
              else {
                bVar14 = piStack_284[0x39] == 0;
              }
              FUN_104d15e0();
              FUN_11420f50();
              puStack_2c4 = (undefined4 *)FUN_108e1450();
              if (puStack_2c4 == (undefined4 *)0x0) {
                FUN_104d15e0();
                FUN_104d1550();
              }
              else {
                _Var16 = _time64((__time64_t *)0x0);
                puStack_2c4 = (undefined4 *)((puStack_2bc[1] + puStack_2c4[7] * 0x3c) - (int)_Var16)
                ;
                if ((bVar14) && ((int)puStack_2c4 < 1)) {
                  FUN_104d15e0();
                }
                FUN_104d1550();
              }
              ppiVar22 = &piStack_1e8;
              piStack_1e8 = (int *)0x0;
              uStack_1e4 = 0;
              uStack_208 = 0;
              iStack_204 = 0;
              FUN_11a98a70();
              puStack_2c4 = (undefined4 *)0x0;
              _bStack_1f0 = CONCAT31(uStack_1ef,((byte)uStack_268 & 0x8f) == 10);
              cVar2 = (**(code **)(*piStack_26c + 0x10))();
              if (((cVar2 != '\0') && (((byte)piStack_218 & 0x8f) == 6)) &&
                 (ppiVar22 = ppiStack_214, ((uint)piStack_218 >> 6 & 1) != 0)) {
                ppiVar22 = (int **)*ppiStack_214;
              }
              puVar11 = (undefined4 *)(iVar3 + 0x3c);
              iStack_2d8 = 5;
              do {
                uVar21 = puVar11[-5];
                local_194 = (int **)FUN_10254130(uVar21);
                if (local_194 != (int **)0x0) {
                  auStack_74[0] = 0;
                  auStack_74[1] = 0;
                  FUN_11a98de0(auStack_74,ppiVar22,0,0);
                  FUN_104d1550("ItemID",uVar21);
                  FUN_104d1550(&DAT_11dbdc0c,*puVar11);
                  FUN_104d1670("itemIconPathName",*(undefined4 *)(iStack_1a4 + 0xb4));
                  (**(code **)(*piStack_20c + 0x3c))(iStack_204,auStack_84);
                  FUN_104d7c10();
                }
                puVar11 = puVar11 + 1;
                iStack_2d8 = iStack_2d8 + -1;
              } while (iStack_2d8 != 0);
              FUN_104d12b0("itemList",&iStack_1fc);
              uVar9 = auStack_6c[0];
              FUN_104d1550("petID",auStack_6c[0]);
              if (0 < (int)uVar9) {
                uVar4 = FUN_112fb110(uVar9);
                FUN_104d1550("petIndex",uVar4);
                FUN_1050f190();
                uVar21 = uVar4;
                FUN_112f64e0(uVar4,uVar9,&puStack_180);
                puVar5 = &DAT_11d9d32b;
                if (puStack_180 != (undefined1 *)0x0) {
                  puVar5 = puStack_180;
                }
                CPet__SetName();
                puStack_90 = auStack_a0;
                auStack_a0[0] = 0;
                puStack_8c = puStack_90;
                FUN_100e5aa0(puStack_90);
                FUN_104d1670("petName",puStack_90);
                if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_90);
                }
                pcStack_2ac = (char *)0x0;
                puStack_2a8 = (undefined4 *)0x0;
                piStack_2a4 = (int *)0x0;
                CPetSkillInfo__CollectSkillSummaryEntries(uVar4,uVar9,&pcStack_2ac);
                piVar18 = aiStack_258;
                aiStack_258[0] = 0;
                aiStack_258[1] = 0;
                FUN_11a98a70(piVar18);
                uStack_1ec = 0;
                piStack_1e8 = (int *)0x0;
                piVar19 = (int *)0x0;
                uStack_1b8 = CONCAT31(uStack_1b8._1_3_,((byte)ppiStack_2a0 & 0x8f) == 10);
                pcVar17 = "PET_SKILL_VO_CLASS_NAME";
                cVar2 = (**(code **)(*piStack_2a4 + 0x10))
                                  (puStack_29c,"PET_SKILL_VO_CLASS_NAME",&uStack_1ec,uStack_1b8);
                bVar20 = (byte)puVar5;
                piVar12 = (int *)0x0;
                if (((cVar2 != '\0') && (((byte)uStack_1f8 & 0x8f) == 6)) &&
                   (piVar12 = piStack_1f4, piVar18 = piStack_1f4, (uStack_1f8 >> 6 & 1) != 0)) {
                  piVar12 = (int *)*piStack_1f4;
                  piVar18 = (int *)*piStack_1f4;
                }
                iVar6 = (int)auStack_6c - (iVar3 + 0x54);
                uVar9 = 0;
                iVar1 = iVar6 >> 0x1f;
                if (iVar6 / 0x14 + iVar1 != iVar1) {
                  do {
                    uStack_c4 = 0;
                    auStack_c0[0] = 0;
                    FUN_11a98de0(&uStack_c4,piVar12,0,0);
                    pcVar13 = (char *)((int)&piStack_20c + (int)(pcVar17 + iStack_280));
                    puVar7 = &DAT_11d9d32b;
                    if (*(undefined1 **)pcVar13 != (undefined1 *)0x0) {
                      puVar7 = *(undefined1 **)pcVar13;
                    }
                    CPet__SetName(puVar7);
                    uVar4 = *(undefined4 *)(pcVar13 + 4);
                    uStack_288 = *(undefined4 *)(pcVar13 + 0x10);
                    piVar23 = *(int **)(pcVar13 + 8);
                    uStack_28c = *(uint *)(pcVar13 + 0xc);
                    cVar2 = FUN_108e1e70();
                    piVar12 = piVar18;
                    if (cVar2 != '\0') {
                      puStack_b0 = auStack_c0;
                      auStack_c0[0] = auStack_c0[0] & 0xffffff00;
                      puStack_ac = puStack_b0;
                      FUN_100e5aa0(puStack_b0);
                      FUN_104d1670("strSkillName",puStack_b0);
                      if ((puStack_b0 != &uStack_c4) && (puStack_b0 != (uint *)0x0)) {
                        FUN_10c3d5d0(puStack_b0);
                      }
                      FUN_104d1550("skilllevel",unaff_EDI);
                      FUN_104d1550("SkillID",uVar4);
                      FUN_104d15e0("bAutoGather",piVar23 == (int *)&DAT_00000005);
                      (**(code **)(*piStack_284 + 0x3c))(piStack_27c,auStack_dc);
                      piVar12 = piVar18;
                    }
                    if (unaff_EDI != (uint *)0x0) {
                      FUN_10c3da30(unaff_EDI);
                    }
                    FUN_104d7c10();
                    bVar20 = (byte)puVar5;
                    uVar9 = uVar9 + 1;
                    piVar18 = piVar12;
                  } while (uVar9 < (uint)(((int)auStack_6c - (iVar3 + 0x54)) / 0x14));
                }
                iVar3 = CONCAT31((int3)((uint)ppiVar22 >> 8),(bVar20 & 0x8f) == 10);
                (**(code **)(*piVar19 + 0x14))(uVar21,"petSkillList",&piStack_26c);
                if ((uStack_208 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_20c + 8))(&piStack_20c,iStack_204);
                  piStack_20c = (int *)0x0;
                }
                uStack_208 = 0;
                if ((uStack_278 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_27c + 8))(&piStack_27c,uStack_274);
                  piStack_27c = (int *)0x0;
                }
                uStack_278 = 0;
                FUN_108ee830(0,&piStack_20c,0,&stack0xfffffd1b);
                if (&piStack_20c != (int **)0x0) {
                  FUN_10c3d5d0(&piStack_20c);
                }
                if (iVar3 != 0) {
                  FUN_10c3da30(iVar3);
                }
                FUN_1050f1c0();
              }
              (**(code **)(*piStack_1ac + 0x3c))(iStack_1a4,&puStack_2c4);
              if ((uStack_1e4 >> 6 & 1) != 0) {
                ppiStack_2b8 = &piStack_1e8;
                piStack_2b4 = (int *)uStack_1e0;
                puStack_2bc = (uint *)0x108e4246;
                (**(code **)(*piStack_1e8 + 8))();
                piStack_1e8 = (int *)0x0;
              }
              uStack_1e4 = 0;
              if ((uStack_1c4 >> 6 & 1) != 0) {
                ppiStack_2b8 = &piStack_1c8;
                piStack_2b4 = (int *)uStack_1c0;
                puStack_2bc = (uint *)0x108e4285;
                (**(code **)(*piStack_1c8 + 8))();
                piStack_1c8 = (int *)0x0;
              }
              uStack_1c4 = 0;
              if (iStack_24c != 0) {
                piStack_2b4 = (int *)iStack_24c;
                ppiStack_2b8 = (int **)0x108e42a9;
                FUN_10c3da30();
              }
              iStack_24c = 0;
              if (piStack_270 != (int *)0x0) {
                piStack_2b4 = piStack_270;
                ppiStack_2b8 = (int **)0x108e42c2;
                FUN_10c3da30();
              }
              piStack_270 = (int *)0x0;
              if ((uStack_28c >> 6 & 1) != 0) {
                ppiStack_2b8 = (int **)&stack0xfffffd70;
                piStack_2b4 = (int *)uStack_288;
                puStack_2bc = (uint *)0x108e42ea;
                (**(code **)(*piVar23 + 8))();
              }
            }
            puVar8 = puVar10 + 5;
            uStack_278 = uStack_278 + 4;
            puStack_2bc = unaff_EDI;
          } while ((int)uStack_278 < 0x98);
          piStack_2b4 = &uStack_178;
          ppiStack_2b8 = (int **)0x11dd6f88;
          puStack_2bc = (uint *)0x108e432a;
          puStack_29c = puVar8;
          FUN_104d12b0();
          ppiStack_2b8 = &piStack_230;
          uStack_268 = CONCAT31(uStack_268._1_3_,(bStack_244 & 0x8f) == 10);
          piStack_2b4 = (int *)uStack_268;
          puStack_2bc = (uint *)0x11dd6f50;
          puStack_2c0 = (undefined1 *)uStack_240;
          puStack_2c4 = (undefined4 *)0x108e435d;
          (**(code **)(*piStack_248 + 0x10))();
          puStack_2c4 = &uStack_1b8;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          FUN_11a98a70();
          iVar3 = 0;
          do {
            piStack_54 = (int *)0x0;
            uStack_50 = 0;
            FUN_11a98de0();
            FUN_104d15e0();
            (**(code **)(*piStack_1cc + 0x3c))();
            if ((uStack_50 >> 6 & 1) != 0) {
              (**(code **)(*piStack_54 + 8))();
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
          (**(code **)(*piStack_25c + 0x14))();
          uStack_17c = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_170 = 0;
          uStack_17c = FUN_1025b060();
          uStack_178 = FUN_1025b060();
          uStack_174 = FUN_1025b060();
          uStack_170 = FUN_1025b060();
          FUN_105e2530();
          ppiVar22 = local_194;
          if (((uint)local_194[1] >> 6 & 1) != 0) {
            puStack_29c = (uint *)local_194[2];
            ppiStack_2a0 = local_194;
            piStack_2a4 = (int *)0x108e4507;
            (**(code **)(**local_194 + 8))();
            *ppiVar22 = (int *)0x0;
          }
          ppiVar22[1] = (int *)0x2;
          *(undefined1 *)(ppiVar22 + 2) = 1;
          if ((uStack_18c >> 6 & 1) != 0) {
            ppiStack_2a0 = &piStack_190;
            puStack_29c = puStack_188;
            piStack_2a4 = (int *)0x108e4541;
            (**(code **)(*piStack_190 + 8))();
            piStack_190 = (int *)0x0;
          }
          uStack_18c = 0;
          if (((uint)ppiStack_214 >> 6 & 1) != 0) {
            ppiStack_2a0 = &piStack_218;
            puStack_29c = puStack_210;
            piStack_2a4 = (int *)0x108e4580;
            (**(code **)(*piStack_218 + 8))();
            piStack_218 = (int *)0x0;
          }
          ppiStack_214 = (int **)0x0;
          if ((uStack_15c >> 6 & 1) != 0) {
            ppiStack_2a0 = &piStack_160;
            puStack_29c = puStack_158;
            piStack_2a4 = (int *)0x108e45bf;
            (**(code **)(*piStack_160 + 8))();
            piStack_160 = (int *)0x0;
          }
          uStack_15c = 0;
          if ((uStack_22c >> 6 & 1) != 0) {
            ppiStack_2a0 = &piStack_230;
            puStack_29c = puStack_228;
            piStack_2a4 = (int *)0x108e45f2;
            (**(code **)(*piStack_230 + 8))();
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



