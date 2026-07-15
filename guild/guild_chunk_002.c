/* ===== FUN_107f0840 @ 107f0840  size=4011 ===== */
// strings:
//   "npc_friend_list"
//   "NPC_ATD_VO_CLASS_NAME"
//   "NPC_FRIENDLOCK_VO_CLASS_NAME"
//   "NPC_DETAIL_VO_CLASS_NAME"
//   "TASK_AWARD_CLASS_NAME"
//   "_giftList"
//   "_lockList"
//   "_detail"
//   "GroupId"
//   "GroupName"
//   "CurImpression"
//   "MaxImpression"
//   "degree"
//   "degreeName"
//   "bUnLock"
//   "degreeString"
//   "bSelected"
//   "degreddUnLockString"
//   "itemIconPathName"
//   "ItemID"

/* [RE-AUTO c0]
   strings:
     ""npc_friend_list""
     ""NPC_ATD_VO_CLASS_NAME""
     ""NPC_FRIENDLOCK_VO_CLASS_NAME""
     ""NPC_DETAIL_VO_CLASS_NAME""
     ""TASK_AWARD_CLASS_NAME""
     ""_giftList""
     ""_lockList""
     ""_detail""
     ""GroupId""
     ""GroupName"" */

void FUN_107f0840(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint ***pppuVar4;
  uint ***pppuVar5;
  undefined4 extraout_ECX;
  uint ****ppppuVar6;
  undefined4 *in_stack_00000010;
  uint ****ppppuVar7;
  undefined4 uVar8;
  uint *****pppppuVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint ****ppppuVar12;
  char *pcVar13;
  char *pcStack_208;
  uint ***pppuStack_204;
  uint ***pppuStack_200;
  uint ****ppppuStack_1fc;
  undefined4 *puStack_1f8;
  uint *puStack_1f4;
  int *piStack_1f0;
  char *pcStack_1ec;
  uint ****ppppuStack_1e8;
  uint ****ppppuStack_1e4;
  uint ****ppppuStack_1e0;
  uint ****ppppuStack_1dc;
  uint ****ppppuStack_1d8;
  uint ****ppppuStack_1d4;
  uint ****ppppuStack_1d0;
  char *pcStack_1cc;
  int **ppiStack_1c8;
  uint ****ppppuStack_1c4;
  uint ****ppppuStack_1b8;
  uint ****local_1b4;
  int iStack_1ac;
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  int *apiStack_1a0 [2];
  int *piStack_198;
  byte bStack_194;
  uint ***pppuStack_190;
  uint ****ppppuStack_18c;
  uint ****ppppuStack_188;
  int *piStack_184;
  int *local_180;
  char *local_17c;
  uint ***pppuStack_178;
  uint uStack_174;
  uint ****ppppuStack_170;
  int *local_168;
  uint *local_164;
  uint ****local_160;
  uint ****local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  uint ***pppuStack_150;
  uint uStack_14c;
  uint ****ppppuStack_148;
  uint uStack_144;
  uint *puStack_140;
  uint ***pppuStack_138;
  uint uStack_134;
  uint ****ppppuStack_130;
  undefined4 local_128;
  undefined4 local_124;
  uint ***pppuStack_120;
  undefined1 auStack_11c [4];
  undefined4 uStack_118;
  uint ****ppppuStack_114;
  uint ***pppuStack_110;
  uint ****ppppuStack_10c;
  uint ****ppppuStack_108;
  uint ***pppuStack_104;
  uint ****ppppuStack_100;
  uint ****ppppuStack_fc;
  int *local_f8;
  uint ****local_f4;
  uint ****ppppuStack_f0;
  uint ***pppuStack_ec;
  undefined1 auStack_e8 [4];
  uint ****ppppuStack_e4;
  uint ****ppppuStack_e0;
  uint ****ppppuStack_dc;
  uint ****ppppuStack_d8;
  uint ****ppppuStack_d4;
  uint ****ppppuStack_d0;
  uint ***pppuStack_c8;
  uint **ppuStack_c4;
  uint ***pppuStack_c0;
  uint uStack_bc;
  uint ****ppppuStack_b8;
  uint ***pppuStack_b4;
  uint ***pppuStack_b0;
  undefined1 auStack_ac [4];
  uint ***pppuStack_a8;
  uint uStack_a4;
  uint ****ppppuStack_a0;
  uint *puStack_9c;
  undefined1 *local_98;
  undefined4 local_94;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&ppppuStack_1b8;
  local_15c = (uint ****)in_stack_00000010[3];
  local_164 = (uint *)in_stack_00000010[1];
  ppppuStack_1c4 = (uint ****)in_stack_00000010[2];
  local_158 = in_stack_00000010[4];
  local_168 = (int *)0x0;
  local_160 = ppppuStack_1c4;
  if (((uint)local_164 >> 6 & 1) != 0) {
    local_168 = (int *)*in_stack_00000010;
    ppiStack_1c8 = &local_168;
    pcStack_1cc = (char *)0x107f08a0;
    (**(code **)(*local_168 + 4))();
  }
  local_98 = (undefined1 *)0x0;
  local_94 = 0;
  ppiStack_1c8 = (int **)&local_98;
  local_1b4 = (uint ****)CONCAT31(local_1b4._1_3_,((byte)local_164 & 0x8f) == 10);
  local_128 = 0;
  ppppuStack_1c4 = local_1b4;
  local_124 = 0;
  local_180 = (int *)0x0;
  local_17c = (char *)0x0;
  local_f8 = (int *)0x0;
  local_f4 = (uint ****)0x0;
  pcStack_1cc = "npc_friend_list";
  uStack_144 = 0;
  uStack_14c = 0;
  ppppuStack_1d4 = (uint ****)0x107f093b;
  ppppuStack_1d0 = local_160;
  cVar1 = (**(code **)(*local_168 + 0x10))();
  if (cVar1 != '\0') {
    ppppuStack_1d4 = (uint ****)0xffffffff;
    ppppuStack_1d8 = (uint ****)0x0;
    ppppuStack_1dc = ppppuStack_a0;
    ppppuStack_1e0 = (uint ****)0x107f095a;
    (*(code *)(*pppuStack_a8)[0x11])();
    ppppuStack_1e4 = (uint ****)&uStack_144;
    ppppuStack_1d0 = (uint ****)CONCAT31(ppppuStack_1d0._1_3_,((byte)local_180 & 0x8f) == 10);
    ppppuStack_1e0 = ppppuStack_1d0;
    ppppuStack_1e8 = (uint ****)0x11dca8d0;
    pcStack_1ec = local_17c;
    piStack_1f0 = (int *)0x107f098a;
    cVar1 = (**(code **)(*piStack_184 + 0x10))();
    if ((cVar1 != '\0') && (((byte)uStack_134 & 0x8f) == 6)) {
      if ((uStack_134 >> 6 & 1) == 0) {
        ppppuStack_114 = ppppuStack_130;
      }
      else {
        ppppuStack_114 = (uint ****)*ppppuStack_130;
      }
      ppppuStack_1d8 = &pppuStack_138;
      ppppuStack_1c4 = (uint ****)CONCAT31(ppppuStack_1c4._1_3_,((byte)uStack_174 & 0x8f) == 10);
      ppppuStack_1d4 = ppppuStack_1c4;
      ppppuStack_1dc = (uint ****)0x11dca9a0;
      ppppuStack_1e0 = ppppuStack_170;
      ppppuStack_1e4 = (uint ****)0x107f09f9;
      cVar1 = (*(code *)(*pppuStack_178)[4])();
      if ((cVar1 != '\0') && (((byte)uStack_144 & 0x8f) == 6)) {
        if ((uStack_144 >> 6 & 1) == 0) {
          local_164 = puStack_140;
        }
        else {
          local_164 = (uint *)*puStack_140;
        }
      }
      ppppuStack_1e8 = (uint ****)&ppppuStack_148;
      ppppuStack_1d4 = (uint ****)CONCAT31(ppppuStack_1d4._1_3_,((byte)piStack_184 & 0x8f) == 10);
      ppppuStack_1e4 = ppppuStack_1d4;
      pcStack_1ec = "NPC_DETAIL_VO_CLASS_NAME";
      piStack_1f0 = local_180;
      puStack_1f4 = (uint *)0x107f0a58;
      (*(code *)(*ppppuStack_188)[4])();
      puStack_1f8 = &local_158;
      ppppuStack_1e4 = (uint ****)CONCAT31(ppppuStack_1e4._1_3_,(bStack_194 & 0x8f) == 10);
      puStack_1f4 = (uint *)ppppuStack_1e4;
      ppppuStack_1fc = (uint ****)0x11dca7b8;
      pppuStack_200 = pppuStack_190;
      pppuStack_204 = (uint ***)0x107f0a88;
      cVar1 = (**(code **)(*piStack_198 + 0x10))();
      if ((cVar1 != '\0') && (((byte)local_164 & 0x8f) == 6)) {
        if (((uint)local_164 >> 6 & 1) == 0) {
          ppppuStack_18c = local_160;
        }
        else {
          ppppuStack_18c = (uint ****)*local_160;
        }
      }
      pppuStack_204 = (uint ***)0x107f0ad4;
      iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if ((iVar3 != 0) &&
         (local_1b4 = *(uint *****)(iVar3 + 0x2ac0), (uint *****)local_1b4 != (uint *****)0x0)) {
        ppppuStack_1d4 = (uint ****)&ppppuStack_e4;
        ppppuStack_e4 = (uint ****)0x0;
        ppppuStack_e0 = (uint ****)0x0;
        ppppuStack_dc = (uint ****)0x0;
        ppppuStack_1d8 = (uint ****)0x107f0b1e;
        FUN_11509b90();
        ppppuStack_1c4 = ppppuStack_e0;
        ppppuStack_10c = ppppuStack_e4;
        ppppuStack_d8 = (uint ****)0x0;
        ppppuStack_d4 = (uint ****)0x0;
        pppuStack_c0 = (uint ***)0x0;
        uStack_bc = 0;
        pppuStack_150 = (uint ***)0x0;
        uStack_14c = 0;
        if (ppppuStack_e4 != ppppuStack_e0) {
          do {
            ppppuVar7 = (uint ****)*ppppuStack_10c;
            ppppuStack_1d4 = (uint ****)*ppppuVar7;
            ppppuStack_1d8 = (uint ****)0x107f0b8d;
            iVar3 = FUN_104d88b0();
            ppppuStack_1d4 = (uint ****)*ppppuVar7;
            ppppuStack_1d8 = (uint ****)0x107f0b9b;
            ppppuStack_1b8 = (uint ****)FUN_104d8bb0();
            ppppuStack_1d4 = (uint ****)*ppppuVar7;
            ppppuStack_1d8 = (uint ****)0x107f0ba9;
            pppuStack_110 = (uint ***)FUN_104d8a30();
            if (((iVar3 != 0) && ((uint *****)ppppuStack_1b8 != (uint *****)0x0)) &&
               (*(int *)(iVar3 + 0x34) == DAT_123bb9a4)) {
              ppppuStack_1d4 = (uint ****)0x0;
              ppppuStack_1d8 = (uint ****)0x0;
              ppppuStack_1dc = ppppuStack_114;
              ppppuStack_1e0 = &pppuStack_190;
              ppppuStack_1e4 = (uint ****)0x107f0bf1;
              FUN_11a98de0();
              ppppuStack_1e8 = (uint ****)auStack_e8;
              puStack_9c = (uint *)CONCAT31(puStack_9c._1_3_,((byte)apiStack_1a0[1] & 0x8f) == 10);
              ppppuStack_1e4 = (uint ****)puStack_9c;
              pcStack_1ec = "_giftList";
              piStack_1f0 = piStack_198;
              puStack_1f4 = (uint *)0x107f0c25;
              (**(code **)(*apiStack_1a0[0] + 0x10))();
              puStack_1f4 = (uint *)0xffffffff;
              puStack_1f8 = (undefined4 *)0x0;
              ppppuStack_1fc = ppppuStack_f0;
              pppuStack_200 = (uint ***)0x107f0c3c;
              (**(code **)(*local_f8 + 0x44))();
              pppuStack_204 = (uint ***)&pppuStack_ec;
              pppuStack_b0 = (uint ***)
                             CONCAT31(pppuStack_b0._1_3_,((byte)ppppuStack_1b8 & 0x8f) == 10);
              pppuStack_200 = pppuStack_b0;
              pcStack_208 = "_lockList";
              (*(code *)(*ppppuVar7)[4])();
              ppppuVar12 = local_f4;
              (*(code *)(*ppppuStack_fc)[0x11])();
              pppuStack_c8 = (uint ***)
                             CONCAT31(pppuStack_c8._1_3_,((byte)ppppuStack_1d4 & 0x8f) == 10);
              ppppuVar6 = (uint ****)pppuStack_c8;
              pcVar13 = "_detail";
              (*(code *)(*ppppuStack_1d8)[4])(ppppuStack_1d0,"_detail",&piStack_198);
              FUN_104d1550("GroupId",ppppuVar12[0xb]);
              ppppuVar12 = &pppuStack_b0;
              iVar3 = FUN_100e5b40();
              FUN_104d1670("GroupName",*(undefined4 *)(iVar3 + 0x14));
              if ((ppppuStack_a0 != &pppuStack_b4) && ((uint *****)ppppuStack_a0 != (uint *****)0x0)
                 ) {
                FUN_10c3d5d0(ppppuStack_a0);
              }
              pppuVar4 = (uint ***)FUN_11730460(ppppuVar7[2]);
              pppuVar5 = ppppuVar6[1];
              if ((int)pppuVar4 < (int)ppppuVar6[1]) {
                pppuVar5 = pppuVar4;
              }
              FUN_104d1550("CurImpression",pppuVar5);
              FUN_104d1550("MaxImpression",pppuVar4);
              FUN_104d15e0(&DAT_11dca96c,0);
              FUN_104d1550("degree",ppppuVar6[2]);
              pppuVar5 = ppppuVar6[2];
              FUN_117302b0(auStack_e8,pppuVar5,&ppppuStack_b8);
              iVar3 = FUN_100e5b40();
              FUN_104d1670("degreeName",*(undefined4 *)(iVar3 + 0x14));
              if ((pppuStack_b0 != &ppuStack_c4) && ((uint ****)pppuStack_b0 != (uint ****)0x0)) {
                FUN_10c3d5d0(pppuStack_b0);
              }
              FUN_100e5670();
              pcVar13 = pcVar13 + 0x14;
              FUN_107ff6b0();
              FUN_10806f70(extraout_ECX);
              pppppuVar9 = (uint *****)local_160;
              if (local_160 != local_15c) {
                do {
                  FUN_107f17f0(pppppuVar9);
                  iVar3 = 0;
                  FUN_11a98de0(&local_17c,ppiStack_1c8,0,0);
                  ppppuVar7 = ppppuStack_100;
                  FUN_104d1550("degree",ppppuStack_100);
                  FUN_104d15e0("bUnLock",(int)ppppuVar7 <= *(int *)(pcVar13 + 8));
                  FUN_117302b0(apiStack_1a0,ppppuVar7);
                  ppppuStack_d4 = (uint ****)&ppppuStack_e4;
                  ppppuStack_e4 = (uint ****)((uint)ppppuStack_e4 & 0xffffff00);
                  ppppuStack_d0 = ppppuStack_d4;
                  FUN_100e5aa0(ppppuStack_d4);
                  FUN_104d1670("degreeString",ppppuStack_d4);
                  ppppuVar6 = ppppuVar12;
                  if ((ppppuStack_d4 != (uint ****)auStack_e8) &&
                     ((uint *****)ppppuStack_d4 != (uint *****)0x0)) {
                    FUN_10c3d5d0(ppppuStack_d4);
                    ppppuVar6 = ppppuVar12;
                  }
                  if (iStack_1ac != 0) {
                    FUN_10c3da30(iStack_1ac);
                  }
                  iStack_1ac = 0;
                  FUN_104d15e0("bSelected",(uint *****)ppppuVar7 == *(uint ******)(iVar3 + 8));
                  FUN_11730340(auStack_1a8,ppppuVar7);
                  ppppuStack_e0 = (uint ****)&ppppuStack_f0;
                  ppppuStack_f0 = (uint ****)((uint)ppppuStack_f0 & 0xffffff00);
                  ppppuStack_dc = ppppuStack_e0;
                  FUN_100e5aa0(ppppuStack_e0);
                  FUN_104d1670("degreddUnLockString",ppppuStack_e0);
                  if (((uint *****)ppppuStack_e0 != &local_f4) &&
                     ((uint *****)ppppuStack_e0 != (uint *****)0x0)) {
                    FUN_10c3d5d0(ppppuStack_e0);
                  }
                  if ((uint *****)local_1b4 != (uint *****)0x0) {
                    FUN_10c3da30(local_1b4);
                  }
                  local_1b4 = (uint ****)0x0;
                  (*(code *)(*local_15c)[0xf])(uStack_154,auStack_1a4);
                  FUN_107f1890();
                  pppppuVar9 = pppppuVar9 + 9;
                  ppppuVar12 = ppppuVar6;
                } while (pppppuVar9 != (uint *****)local_15c);
              }
              puStack_9c = (uint *)auStack_ac;
              puVar11 = (undefined4 *)&DAT_11dca9f8;
              local_98 = (undefined1 *)puStack_9c;
              FUN_100b62c0(&DAT_11dca9f8,&DAT_11dca9f9);
              cVar1 = FUN_100fd110(pppuVar5 + 5,&DAT_11d9d32b);
              if ((cVar1 != '\0') && ((uint ****)(pppuVar5 + 5) != &pppuStack_b4)) {
                FUN_100d83d0(pppuVar5[10],pppuVar5[9]);
              }
              FUN_104d1670(&DAT_11dbf768,ppppuStack_a0);
              (*(code *)(*pppuStack_120)[0xf])(uStack_118,&pcStack_208);
              if (((((byte)uStack_154 & 0x8f) == 9) && ((uint ****)pppuStack_190 != (uint ****)0x0))
                 && (pppuVar5 = (uint ***)pppuStack_190[5], pppuVar5 != (uint ***)pppuStack_190[6]))
              {
                do {
                  uVar10 = 0;
                  ppppuStack_d8 = (uint ****)0x0;
                  ppppuStack_d4 = (uint ****)0x0;
                  FUN_11a98de0(&ppppuStack_d8,ppppuStack_1dc,0,0);
                  uVar8 = *puVar11;
                  FUN_10254130(uVar8);
                  uVar2 = FUN_11509fa0(*ppppuVar6,uVar8);
                  ppppuStack_1b8 = (uint ****)CONCAT31(ppppuStack_1b8._1_3_,uVar2);
                  if (ppppuVar12 == (uint ****)0x0) {
                    FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                    FUN_104d1550("ItemID",0);
                    FUN_104d1550("slotid",uVar10);
                    FUN_104d1550(&DAT_11dbdc0c,0);
                    pppuVar4 = (uint ***)0x0;
                  }
                  else {
                    FUN_104d1670("itemIconPathName",ppppuVar12[0x2d]);
                    FUN_104d1550("ItemID",puVar11);
                    FUN_104d1550("slotid",uVar10);
                    FUN_104d1550(&DAT_11dbdc0c,0);
                    pppuVar4 = ppppuVar12[4];
                  }
                  FUN_104d1550(&DAT_11dca14c,pppuVar4);
                  FUN_104d15e0("IsUnLock",ppppuStack_1b8);
                  (*(code *)(*ppppuStack_170)[0xf])(local_168,&ppppuStack_f0);
                  if (((uint)ppppuStack_d4 >> 6 & 1) != 0) {
                    (*(code *)(*ppppuStack_d8)[2])(&ppppuStack_d8,ppppuStack_d0);
                  }
                  pppuVar5 = pppuVar5 + 4;
                } while (pppuVar5 != (uint ***)pppuStack_190[6]);
              }
              cVar1 = FUN_11509f90(*ppppuVar6,1);
              if (cVar1 == '\0') {
                uVar8 = 0;
              }
              else {
                uVar8 = puVar11[0xe];
              }
              FUN_104d1550(&DAT_11dca9f4,uVar8);
              iVar3 = 2;
              cVar1 = FUN_11509f90(*ppppuVar6);
              if (cVar1 == '\0') {
                pppppuVar9 = (uint *****)&DAT_11d9d32b;
                FUN_104d1670("bloodType");
              }
              else {
                pppppuVar9 = (uint *****)auStack_e8;
                auStack_e8[0] = 0;
                ppppuStack_d8 = (uint ****)pppppuVar9;
                ppppuStack_d4 = (uint ****)pppppuVar9;
                FUN_100e5aa0();
                FUN_104d1670("bloodType",ppppuStack_d8);
                if ((ppppuStack_d8 != &pppuStack_ec) &&
                   ((uint *****)ppppuStack_d8 != (uint *****)0x0)) {
                  FUN_10c3d5d0(ppppuStack_d8);
                }
              }
              cVar1 = FUN_11509f90(*ppppuVar6,3);
              if (cVar1 == '\0') {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(iVar3 + 0x40);
              }
              FUN_104d1550("bodyHeight",uVar8);
              cVar1 = FUN_11509f90(*ppppuVar6,4);
              if (cVar1 == '\0') {
                ppppuVar7 = (uint ****)0x0;
              }
              else {
                ppppuVar7 = pppppuVar9[0x11];
              }
              FUN_104d1550("weight",ppppuVar7);
              cVar1 = FUN_11509f90(*ppppuVar6,5);
              if (cVar1 == '\0') {
                FUN_104d1670("profession",&DAT_11d9d32b);
              }
              else {
                local_f4 = &pppuStack_104;
                pppuStack_104 = (uint ***)((uint)pppuStack_104 & 0xffffff00);
                ppppuStack_f0 = local_f4;
                FUN_100e5aa0(local_f4);
                FUN_104d1670("profession",local_f4);
                if (((uint *****)local_f4 != &ppppuStack_108) &&
                   ((uint *****)local_f4 != (uint *****)0x0)) {
                  FUN_10c3d5d0(local_f4);
                }
              }
              cVar1 = FUN_11509f90(*ppppuVar6,6);
              if (cVar1 == '\0') {
                FUN_104d1670("homeTown",&DAT_11d9d32b);
              }
              else {
                ppppuStack_100 = &pppuStack_110;
                pppuStack_110 = (uint ***)((uint)pppuStack_110 & 0xffffff00);
                ppppuStack_fc = ppppuStack_100;
                FUN_100e5aa0(ppppuStack_100);
                FUN_104d1670("homeTown",ppppuStack_100);
                if (((uint *****)ppppuStack_100 != &ppppuStack_114) &&
                   ((uint *****)ppppuStack_100 != (uint *****)0x0)) {
                  FUN_10c3d5d0(ppppuStack_100);
                }
              }
              cVar1 = FUN_11509f90(*ppppuVar6,7);
              if (cVar1 == '\0') {
                FUN_104d1670("description",&DAT_11d9d32b);
              }
              else {
                ppppuStack_10c = (uint ****)auStack_11c;
                auStack_11c[0] = 0;
                ppppuStack_108 = ppppuStack_10c;
                FUN_100e5aa0(ppppuStack_10c);
                FUN_104d1670("description",ppppuStack_10c);
                if ((ppppuStack_10c != &pppuStack_120) &&
                   ((uint *****)ppppuStack_10c != (uint *****)0x0)) {
                  FUN_10c3d5d0(ppppuStack_10c);
                }
              }
              if ((ppppuStack_f0 != &pppuStack_104) &&
                 ((uint *****)ppppuStack_f0 != (uint *****)0x0)) {
                FUN_10c3d5d0(ppppuStack_f0);
              }
              ppppuVar7 = ppppuStack_1b8;
              FUN_10808b60(local_1b4,ppppuStack_1b8,0,&stack0xfffffde3);
              if ((uint *****)ppppuVar7 != (uint *****)0x0) {
                ppppuStack_1d4 = ppppuVar7;
                ppppuStack_1d8 = (uint ****)0x107f15d8;
                FUN_10c3d5d0();
              }
            }
            ppppuStack_10c = ppppuStack_10c + 1;
          } while (ppppuStack_10c != ppppuStack_1c4);
        }
        if ((uStack_14c >> 6 & 1) != 0) {
          ppppuStack_1d4 = ppppuStack_148;
          ppppuStack_1d8 = &pppuStack_150;
          ppppuStack_1dc = (uint ****)0x107f1628;
          (*(code *)(*pppuStack_150)[2])();
          pppuStack_150 = (uint ***)0x0;
        }
        uStack_14c = 0;
        if ((uStack_bc >> 6 & 1) != 0) {
          ppppuStack_1d4 = ppppuStack_b8;
          ppppuStack_1d8 = &pppuStack_c0;
          ppppuStack_1dc = (uint ****)0x107f1667;
          (*(code *)(*pppuStack_c0)[2])();
          pppuStack_c0 = (uint ***)0x0;
        }
        uStack_bc = 0;
        if (((uint)ppppuStack_d4 >> 6 & 1) != 0) {
          ppppuStack_1d8 = (uint ****)&ppppuStack_d8;
          ppppuStack_1d4 = ppppuStack_d0;
          ppppuStack_1dc = (uint ****)0x107f16a6;
          (*(code *)(*ppppuStack_d8)[2])();
          ppppuStack_d8 = (uint ****)0x0;
        }
        ppppuStack_d4 = (uint ****)0x0;
        if ((uint *****)ppppuStack_e4 != (uint *****)0x0) {
          ppppuStack_1d4 = ppppuStack_e4;
          ppppuStack_1d8 = (uint ****)0x107f16cd;
          FUN_10c3d5d0();
        }
      }
    }
  }
  if (((uint)pppuStack_104 >> 6 & 1) != 0) {
    ppppuStack_1d8 = (uint ****)&ppppuStack_108;
    ppppuStack_1d4 = ppppuStack_100;
    ppppuStack_1dc = (uint ****)0x107f16f9;
    (*(code *)(*ppppuStack_108)[2])();
    ppppuStack_108 = (uint ****)0x0;
  }
  pppuStack_104 = (uint ***)0x0;
  if (((uint)ppppuStack_18c >> 6 & 1) != 0) {
    ppppuStack_1d8 = &pppuStack_190;
    ppppuStack_1d4 = ppppuStack_188;
    ppppuStack_1dc = (uint ****)0x107f172c;
    (*(code *)(*pppuStack_190)[2])();
    pppuStack_190 = (uint ***)0x0;
  }
  ppppuStack_18c = (uint ****)0x0;
  if ((uStack_134 >> 6 & 1) != 0) {
    ppppuStack_1d8 = &pppuStack_138;
    ppppuStack_1d4 = ppppuStack_130;
    ppppuStack_1dc = (uint ****)0x107f1765;
    (*(code *)(*pppuStack_138)[2])();
    pppuStack_138 = (uint ***)0x0;
  }
  uStack_134 = 0;
  if ((uStack_a4 >> 6 & 1) != 0) {
    ppppuStack_1d8 = &pppuStack_a8;
    ppppuStack_1d4 = ppppuStack_a0;
    ppppuStack_1dc = (uint ****)0x107f17a4;
    (*(code *)(*pppuStack_a8)[2])();
    pppuStack_a8 = (uint ***)0x0;
  }
  uStack_a4 = 0;
  if ((uStack_174 >> 6 & 1) != 0) {
    ppppuStack_1d8 = &pppuStack_178;
    ppppuStack_1d4 = ppppuStack_170;
    ppppuStack_1dc = (uint ****)0x107f17d7;
    (*(code *)(*pppuStack_178)[2])();
  }
  pcStack_1cc = (char *)0x107f17e7;
  FUN_11a89daa();
  return;
}



/* ===== FUN_107f2330 @ 107f2330  size=4857 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "task_awardList"
//   "TASK_AWARD_CLASS_NAME"
//   "itemIconPathName"
//   "slotid"
//   "ItemID"
//   "limit"
//   "task_selectawardList"
//   "other_info"
//   "taskName"
//   "taskLevel"
//   "taskid"
//   "tasktype"
//   "cantGiveup"
//   "queststatus"
//   "bTeam"
//   "bRepeat"
//   "gold_bind"
//   "TaskContent"
//   "bTrace"
//   "farm_actuarialpoint"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""task_awardList""
     ""TASK_AWARD_CLASS_NAME""
     ""itemIconPathName""
     ""slotid""
     ""ItemID""
     ""limit""
     ""task_selectawardList""
     ""other_info""
     ""taskName""
     ""taskLevel"" */

void __thiscall
FUN_107f2330(int param_1,undefined4 param_2,int ****param_3,undefined4 param_4,int param_5,
            int param_6,int *****param_7)

{
  int ****ppppiVar1;
  int **ppiVar2;
  int ****ppppiVar3;
  char cVar4;
  uint uVar5;
  int ****ppppiVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int ****unaff_EBX;
  int ****ppppiVar11;
  byte unaff_SI;
  int *unaff_EDI;
  char *pcVar12;
  int *****pppppiVar13;
  int ***pppiVar14;
  int *****pppppiStack_180;
  int *****pppppiStack_17c;
  int ****ppppiStack_178;
  int *****pppppiStack_174;
  int *****pppppiStack_170;
  int *****pppppiStack_16c;
  int ****ppppiStack_168;
  int ***pppiStack_164;
  int ****ppppiStack_160;
  int *****pppppiStack_15c;
  char *pcStack_158;
  int **ppiStack_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ****ppppiStack_140;
  int ****ppppiStack_13c;
  int ****ppppiStack_138;
  int *****pppppiStack_134;
  int ****ppppiStack_130;
  int ****ppppiStack_12c;
  int *****pppppiStack_128;
  int ****ppppiStack_124;
  int ****ppppiStack_114;
  int ****ppppiStack_110;
  int ****ppppiStack_108;
  int *piStack_104;
  int *piStack_100;
  int *****local_fc;
  int *piStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int ****ppppiStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  int ****local_e0;
  uint local_dc;
  int ****ppppiStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  int *****apppppiStack_cc [2];
  int ****local_c4;
  int local_c0;
  int ****local_bc;
  int ****local_b8;
  int *local_b4;
  int ****ppppiStack_b0;
  int **ppiStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int ****local_88;
  int ****local_84;
  int ****ppppiStack_80;
  uint uStack_7c;
  int ***pppiStack_78;
  int ****ppppiStack_74;
  int *****local_70;
  int *****local_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****local_58;
  int ****local_54;
  int ****ppppiStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppppiStack_114;
  local_fc = param_7;
  local_c0 = param_1;
  if (param_6 != 2) goto LAB_107f3612;
  uVar5 = *(uint *)(param_5 + 4) & 0x8f;
  if ((uVar5 == 3) || (uVar5 == 4)) {
    local_c4 = *(int *****)(param_5 + 8);
  }
  else {
    local_c4 = (int ****)0xdeadbeaf;
  }
  ppppiStack_124 = (int ****)(param_5 + 0x18);
  local_b8 = (int ****)0x0;
  ppppiVar11 = (int ****)0x0;
  local_b4 = (int *)0x0;
  local_88 = (int ****)0x0;
  local_84 = (int ****)0x0;
  local_e0 = (int ****)0x0;
  local_dc = 0;
  local_70 = (int *****)0x0;
  local_6c = (int *****)0x0;
  local_58 = (int ****)0x0;
  local_54 = (int ****)0x0;
  local_bc = (int ****)0x0;
  pppppiStack_128 = (int *****)0x107f2402;
  FUN_104f42b0();
  ppppiVar1 = *(int *****)(param_1 + 0x3c);
  *(int *****)(param_1 + 0x38) = local_c4;
  if (0 < (int)ppppiVar1) {
    *(int *****)(param_1 + 0x38) = ppppiVar1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    ppppiStack_110 = ppppiVar1;
    if (((uint)local_fc[1] >> 6 & 1) != 0) {
      ppppiStack_124 = local_fc[2];
      pppppiStack_128 = local_fc;
      ppppiStack_12c = (int ****)0x107f2433;
      (*(code *)(**local_fc)[2])();
      *local_fc = (int ****)0x0;
    }
    local_fc[1] = (int ****)0x3;
    local_fc[2] = ppppiStack_110;
    local_c4 = *(int *****)(param_1 + 0x38);
  }
  ppppiVar1 = ppppiStack_130;
  if ((*(int *)(param_1 + 0x38) != -1) && (DAT_123bb99c != (int *)0x0)) {
    pppppiStack_128 = (int *****)0x107f246e;
    ppppiStack_124 = local_c4;
    ppppiVar6 = (int ****)(**(code **)(*DAT_123bb99c + 0x50))();
    pppppiStack_128 = (int *****)0x107f247f;
    ppppiStack_114 = ppppiVar6;
    FUN_114e79d0();
    pppppiStack_128 = (int *****)0x107f2486;
    iVar7 = FUN_114f16f0();
    ppppiVar1 = ppppiStack_130;
    ppppiVar3 = ppppiStack_b0;
    if (iVar7 != 0) {
      ppppiStack_124 = local_c4;
      pppppiStack_128 = (int *****)0x107f249f;
      ppppiVar11 = (int ****)FUN_114f3be0();
      local_bc = ppppiVar11;
      ppppiVar1 = ppppiStack_130;
      ppppiVar3 = ppppiStack_b0;
      ppppiVar6 = ppppiVar11;
    }
    ppppiStack_130 = ppppiVar3;
    ppppiStack_b0 = ppppiStack_130;
    if ((ppppiVar6 != (int ****)0x0) && (((uint)local_b4 & 0x8f) != 1)) {
      pppppiStack_128 = &local_88;
      uVar5 = (uint)ppppiStack_108 >> 8;
      ppppiStack_108 = (int ****)CONCAT31((int3)uVar5,((uint)local_b4 & 0x8f) == 10);
      ppppiStack_124 = ppppiStack_108;
      ppppiStack_12c = (int ****)0x11dca784;
      pppppiStack_134 = (int *****)0x107f24e8;
      cVar4 = (*(code *)(*local_b8)[4])();
      ppppiVar1 = ppppiStack_130;
      if (cVar4 != '\0') {
        ppppiStack_124 = (int ****)0xffffffff;
        pppppiStack_128 = (int *****)0x0;
        ppppiStack_12c = ppppiStack_80;
        ppppiStack_130 = (int ****)0x107f2507;
        (*(code *)(*local_88)[0x11])();
        pppppiStack_134 = (int *****)&uStack_4c;
        uStack_4c = 0;
        uStack_48 = 0;
        ppppiStack_114 = (int ****)CONCAT31(ppppiStack_114._1_3_,((byte)local_c0 & 0x8f) == 10);
        ppppiStack_130 = ppppiStack_114;
        ppppiStack_138 = (int ****)0x11dca7b8;
        ppppiStack_13c = local_bc;
        ppppiStack_140 = (int ****)0x107f254d;
        cVar4 = (*(code *)(*local_c4)[4])();
        if ((cVar4 != '\0') && (((byte)local_58 & 0x8f) == 6)) {
          unaff_EBX = local_54;
          if (((uint)local_58 >> 6 & 1) != 0) {
            unaff_EBX = (int ****)*local_54;
          }
          ppppiStack_144 = ppppiVar11 + 0x13;
          local_bc = (int ****)0x0;
          ppppiStack_140 = (int ****)0x1f;
          local_b8 = (int ****)0x0;
          ppppiStack_148 = (int ****)0x107f25a7;
          iVar7 = FUN_10804900();
          if (iVar7 != 0) {
            ppppiStack_140 = (int ****)(iVar7 + 4);
            ppppiStack_144 = (int ****)0x107f25bf;
            FUN_107ff120();
            pcVar12 = (char *)0x0;
            ppppiStack_124 = ppppiStack_114;
            pcVar10 = (char *)((uint)((int)ppppiStack_110 + (3 - (int)ppppiStack_114)) >> 2);
            if (ppppiStack_110 < ppppiStack_114) {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 != (char *)0x0) {
              do {
                local_e0 = (int ****)*ppppiStack_124;
                ppppiStack_140 = (int ****)0x0;
                ppppiStack_144 = (int ****)0x0;
                pppppiStack_128 = (int *****)local_e0[1];
                pppppiStack_14c = &local_bc;
                pppppiStack_150 = (int *****)0x107f260a;
                ppppiStack_148 = unaff_EBX;
                FUN_11a98de0();
                if (ppppiStack_138 == (int ****)0x0) {
                  pppppiStack_150 = (int *****)&DAT_11d9d32b;
                  ppiStack_154 = (int **)0x11dbdbd0;
                  pcStack_158 = (char *)0x107f26ae;
                  FUN_104d1670();
                  pcStack_158 = (char *)0xa;
                  pppppiStack_15c = (int *****)0x11dbdc1c;
                  ppppiStack_160 = (int ****)0x107f26c3;
                  FUN_104d1550();
                  ppppiStack_160 = (int ****)0x0;
                  pppiStack_164 = (int ***)0x11dbdbe4;
                  ppppiStack_168 = (int ****)0x107f26d8;
                  FUN_104d1550();
                  ppppiStack_168 = (int ****)0x0;
                  pppppiStack_16c = (int *****)&DAT_11dbdc0c;
                  pppppiStack_170 = (int *****)0x107f26ed;
                  FUN_104d1550();
                }
                else {
                  pppppiStack_150 = (int *****)ppppiStack_138[0x2d];
                  ppiStack_154 = (int **)0x11dbdbd0;
                  pcStack_158 = (char *)0x107f262f;
                  FUN_104d1670();
                  pppppiStack_15c = (int *****)0x11dbdc1c;
                  ppppiStack_160 = (int ****)0x107f2643;
                  pcStack_158 = pcVar12;
                  FUN_104d1550();
                  pppppiStack_150 = (int *****)0x107f2652;
                  pppppiStack_150 = (int *****)(**(code **)(*(int *)piStack_f0[1] + 0x18))();
                  ppiStack_154 = (int **)0x11dbdbe4;
                  pcStack_158 = (char *)0x107f2666;
                  FUN_104d1550();
                  pcStack_158 = (char *)piStack_f0[2];
                  pppppiStack_15c = (int *****)&DAT_11dbdc0c;
                  ppppiStack_160 = (int ****)0x107f2680;
                  FUN_104d1550();
                  ppppiStack_160 = (int ****)ppppiStack_138[4];
                  pppiStack_164 = (int ***)&DAT_11dca14c;
                  ppppiStack_168 = (int ****)0x107f269a;
                  FUN_104d1550();
                }
                pppppiStack_150 = (int *****)apppppiStack_cc;
                ppiStack_154 = ppiStack_ac;
                pcStack_158 = (char *)0x107f270b;
                (**(code **)(*local_b4 + 0x3c))();
                pcVar12 = pcVar12 + 1;
                ppppiStack_124 = ppppiStack_124 + 1;
                ppppiVar11 = ppppiStack_d8;
              } while (pcVar12 != pcVar10);
            }
            if (ppppiStack_114 != (int ****)0x0) {
              ppppiStack_140 = ppppiStack_114;
              ppppiStack_144 = (int ****)0x107f2731;
              FUN_10c3d5d0();
            }
          }
          ppppiStack_140 = (int ****)0x107f2740;
          FUN_104d7c10();
        }
        ppppiStack_144 = (int ****)&ppppiStack_74;
        ppppiStack_124 = (int ****)CONCAT31(ppppiStack_124._1_3_,((byte)uStack_d0 & 0x8f) == 10);
        ppppiStack_140 = ppppiStack_124;
        ppppiStack_148 = (int ****)0x11dca764;
        pppppiStack_14c = apppppiStack_cc[0];
        pppppiStack_150 = (int *****)0x107f2770;
        cVar4 = (**(code **)(*piStack_d4 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_150 = (int *****)param_3;
          ppiStack_154 = (int **)0x107f2784;
          FUN_107f18e0();
        }
        ppiStack_154 = &local_b4;
        pppppiStack_134 = (int *****)CONCAT31(pppppiStack_134._1_3_,((byte)local_e0 & 0x8f) == 10);
        pppppiStack_150 = pppppiStack_134;
        pcStack_158 = "task_selectawardList";
        pppppiStack_15c = (int *****)local_dc;
        ppppiStack_160 = (int ****)0x107f27b7;
        cVar4 = (**(code **)(*piStack_e4 + 0x10))();
        if (cVar4 != '\0') {
          ppppiStack_160 = (int ****)0xffffffff;
          pppiStack_164 = (int ***)0x0;
          ppppiStack_168 = local_bc;
          pppppiStack_16c = (int *****)0x107f27d6;
          (*(code *)(*local_c4)[0x11])();
          pppppiStack_170 = (int *****)&local_70;
          local_70 = (int *****)0x0;
          local_6c = (int *****)0x0;
          pppppiStack_150 = (int *****)CONCAT31(pppppiStack_150._1_3_,((byte)local_fc & 0x8f) == 10)
          ;
          pppppiStack_16c = pppppiStack_150;
          pppppiStack_174 = (int *****)0x11dca7b8;
          ppppiStack_178 = (int ****)piStack_f8;
          pppppiStack_17c = (int *****)0x107f281c;
          cVar4 = (**(code **)(*piStack_100 + 0x10))();
          if ((cVar4 != '\0') && (((byte)uStack_7c & 0x8f) == 6)) {
            if ((uStack_7c >> 6 & 1) != 0) {
              pppiStack_78 = (int ***)*pppiStack_78;
            }
            pppppiStack_180 = (int *****)(ppppiVar11 + 0x47);
            pppppiStack_17c = (int *****)0x1e;
            piStack_f8 = (int *)0x0;
            piStack_f4 = (int *)0x0;
            ppppiStack_160 = (int ****)pppiStack_78;
            FUN_10804880(&pppppiStack_150);
            iVar7 = 0;
            ppiStack_154 = (int **)((int)pppppiStack_14c - (int)pppppiStack_150 >> 2);
            pppppiStack_17c = pppppiStack_150;
            if (0 < (int)ppiStack_154) {
              do {
                pppiStack_164 = pppppiStack_17c[iVar7][1];
                if (pppiStack_164 != (int ***)0x0) {
                  ppiVar2 = pppiStack_164[1];
                  pppppiStack_17c = (int *****)0x0;
                  pppppiStack_180 = (int *****)0x0;
                  FUN_11a98de0(&piStack_f8,ppppiStack_160);
                  if (ppiVar2 == (int **)0x0) {
                    FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                    FUN_104d1550("slotid",10);
                    FUN_104d1550("ItemID",0);
                    FUN_104d1550(&DAT_11dbdc0c,0);
                  }
                  else {
                    FUN_104d1670("itemIconPathName",ppiVar2[0x2d]);
                    FUN_104d1550("slotid",iVar7);
                    uVar8 = (*(code *)(*ppiVar2)[6])();
                    FUN_104d1550("ItemID",uVar8);
                    FUN_104d1550(&DAT_11dbdc0c,pppppiStack_174[2]);
                    FUN_104d1550(&DAT_11dca14c,ppiVar2[4]);
                  }
                  (**(code **)(*piStack_f0 + 0x3c))(uStack_e8,&ppppiStack_108);
                  pppppiStack_17c = pppppiStack_150;
                }
                iVar7 = iVar7 + 1;
                ppppiVar11 = ppppiStack_114;
              } while (iVar7 < (int)ppiStack_154);
            }
            if (pppppiStack_17c != (int *****)0x0) {
              pppppiStack_180 = (int *****)0x107f29d3;
              FUN_10c3d5d0();
            }
            pppppiStack_17c = (int *****)0x107f29e2;
            FUN_104d7c10();
          }
          pppppiStack_17c = (int *****)0x107f29ee;
          FUN_104d7c10();
        }
        pppiStack_164 = (int ***)&stack0xfffffee4;
        ppppiStack_144 = (int ****)CONCAT31(ppppiStack_144._1_3_,((byte)piStack_f0 & 0x8f) == 10);
        ppppiStack_160 = ppppiStack_144;
        ppppiStack_168 = (int ****)0x11dca758;
        pppppiStack_16c = (int *****)ppppiStack_ec;
        pppppiStack_170 = (int *****)0x107f2a1b;
        cVar4 = (**(code **)(*piStack_f4 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_170 = &ppppiStack_74;
          pppppiStack_174 = (int *****)0x107f2a33;
          iVar7 = FUN_100e5b40();
          pppppiStack_174 = *(int ******)(iVar7 + 0x14);
          ppppiStack_178 = (int ****)0x11dca5f8;
          pppppiStack_17c = (int *****)0x107f2a46;
          FUN_104d1670();
          if ((ppppiStack_64 != &pppiStack_78) && (ppppiStack_64 != (int ****)0x0)) {
            pppppiStack_174 = (int *****)ppppiStack_64;
            ppppiStack_178 = (int ****)0x107f2a65;
            FUN_10c3d5d0();
          }
          ppppiVar1 = ppppiStack_160;
          if (ppppiStack_160 == (int ****)0x0) {
            ppppiStack_178 = ppppiVar11 + 8;
            pppppiStack_174 = (int *****)0x1;
            pppppiStack_17c = (int *****)0x107f2a92;
            iVar7 = FUN_10804e80();
            if (iVar7 == 0) {
              ppppiStack_178 = (int ****)0x0;
            }
            else {
              ppppiStack_178 = (int ****)**(undefined4 **)(iVar7 + 4);
            }
          }
          else {
            pppppiStack_174 = (int *****)&pcStack_158;
            ppppiStack_178 = (int ****)0x107f2a7c;
            FUN_114f4840();
            ppppiStack_178 = (int ****)0x107f2a83;
            puVar9 = (undefined4 *)FUN_117c1280();
            ppppiStack_178 = (int ****)*puVar9;
          }
          pppppiStack_17c = (int *****)0x11dca778;
          pppppiStack_180 = (int *****)0x107f2ab2;
          FUN_104d1550();
          ppppiStack_178 = (int ****)&uStack_7c;
          pppppiStack_17c = (int *****)0x107f2ac5;
          iVar7 = FUN_100e5b40();
          pppppiStack_17c = *(int ******)(iVar7 + 0x14);
          pppppiStack_180 = (int *****)0x11dca5f8;
          FUN_104d1670();
          if ((local_6c != &ppppiStack_80) && (local_6c != (int *****)0x0)) {
            pppppiStack_17c = local_6c;
            pppppiStack_180 = (int *****)0x107f2af7;
            FUN_10c3d5d0();
          }
          pppppiStack_17c = (int *****)ppppiVar11[1];
          pppppiStack_180 = (int *****)0x11dcaa80;
          FUN_104d1550();
          FUN_104d1550("tasktype",ppppiVar11[4]);
          FUN_104d15e0("cantGiveup",*(undefined1 *)(ppppiVar11 + 7));
          if (ppppiVar1 == (int ****)0x0) {
            pppppiStack_17c = (int *****)0x0;
          }
          else {
            pppppiStack_17c = (int *****)ppppiVar1[5];
          }
          pppppiStack_180 = (int *****)0x11dca76c;
          FUN_104d1550();
          pppppiStack_17c = (int *****)0x107f2b61;
          iVar7 = FUN_10804c90();
          if ((iVar7 == 0) || (**(int **)(iVar7 + 4) < 2)) {
            pppppiStack_17c = (int *****)0x0;
          }
          else {
            pppppiStack_17c = (int *****)0x1;
          }
          pppppiStack_180 = (int *****)0x11dca808;
          FUN_104d15e0();
          pppppiStack_17c = (int *****)(uint)(*(char *)(ppppiVar11 + 0x20) != '\0');
          pppppiStack_180 = (int *****)0x11dca830;
          FUN_104d15e0();
          pppppiStack_180 = (int *****)(ppppiVar11 + 0x13);
          pppppiStack_17c = (int *****)0x19;
          pppiStack_164 = (int ***)FUN_10804cd0();
          ppppiStack_114 = (int ****)0x0;
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_17c = (int *****)0x0;
            pppppiStack_180 = (int *****)&DAT_11dbfbc8;
            FUN_104d1550();
          }
          else {
            ppppiStack_160 = (int ****)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_17c = (int *****)0x0;
              pppppiStack_180 = &ppppiStack_160;
              uVar8 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)pppiStack_164 + 4),0,0);
              FUN_1185f2e0(uVar8);
              FUN_104d1550(&DAT_11dbfbc8,
                           (int)((float)*(int *)((int)pppiStack_164 + 8) * (float)ppppiStack_160));
            }
          }
          pppppiStack_180 = (int *****)(ppppiVar11 + 0x13);
          pppppiStack_17c = (int *****)0x18;
          pppiStack_164 = (int ***)FUN_10804940();
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_17c = (int *****)0x0;
            pppppiStack_180 = (int *****)&DAT_11dc0944;
            FUN_104d1550();
            iVar7 = 0;
          }
          else {
            ppppiStack_160 = (int ****)0x0;
            ppiStack_154 = (int **)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_17c = (int *****)0x0;
              pppppiStack_180 = (int *****)0x0;
              uVar8 = CPlayer__GetHuntRankOrCount
                                (*(undefined4 *)((int)pppiStack_164 + 4),&ppiStack_154,
                                 &ppppiStack_160);
              FUN_1185f2e0(uVar8);
            }
            pppppiStack_17c =
                 (int *****)(int)((float)*(int *)((int)pppiStack_164 + 8) * (float)ppppiStack_160);
            pppppiStack_180 = (int *****)&DAT_11dc0944;
            FUN_104d1550();
            iVar7 = (int)((float)*(int *)((int)pppiStack_164 + 0xc) * (float)ppiStack_154);
          }
          FUN_104d1550("gold_bind",iVar7);
          pppppiStack_17c = &ppppiStack_80;
          pppppiStack_180 = (int *****)0x107f2d10;
          iVar7 = FUN_100e5b40();
          pppppiStack_180 = *(int ******)(iVar7 + 0x14);
          FUN_104d1670("TaskContent");
          if ((local_70 != &local_84) && (local_70 != (int *****)0x0)) {
            pppppiStack_180 = local_70;
            FUN_10c3d5d0();
          }
          if (pppppiStack_16c == (int *****)0x0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = (int *****)(uint)*(byte *)(pppppiStack_16c + 7);
          }
          FUN_104d15e0("bTrace");
          pppppiStack_180 = (int *****)0x107f2d71;
          pppiStack_164 = (int ***)FUN_10804980();
          pppppiVar13 = (int *****)unaff_EBX;
          if (pppiStack_164 == (int ***)0x0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_16c = (int *****)0x0;
            if (unaff_EBX[0x13] != (int ***)0x0) {
              pppppiStack_180 = (int *****)&pppppiStack_16c;
              uVar8 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)pppiStack_164 + 4),0,0,0);
              FUN_1185f2e0(uVar8);
              pppppiVar13 = pppppiStack_16c;
            }
            pppppiStack_180 =
                 (int *****)(int)((float)*(int *)((int)pppiStack_164 + 8) * (float)pppppiVar13);
          }
          FUN_104d1550("farm_actuarialpoint");
          pppppiStack_180 = (int *****)0x21;
          pppppiStack_16c = (int *****)FUN_108049c0(ppppiVar11 + 0x13);
          if (pppppiStack_16c == (int *****)0x0) {
            pppppiStack_180 = (int *****)0x0;
            FUN_104d1550("hunter_contribution");
            FUN_104d1550("hunter_fund",0);
            pppiVar14 = (int ***)0x0;
          }
          else {
            pppppiStack_180 = (int *****)pppppiStack_16c[1];
            FUN_104d1550("hunter_contribution");
            FUN_104d1550("hunter_fund",pppppiStack_16c[3]);
            pppiVar14 = (int ***)pppppiStack_16c[2];
          }
          FUN_104d1550("hunter_exp",pppiVar14);
          pppppiStack_180 = (int *****)0x24;
          iVar7 = FUN_10804d10(ppppiVar11 + 0x13);
          if (iVar7 == 0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = *(int ******)(iVar7 + 4);
          }
          FUN_104d1550("huntingCredit");
          pppppiStack_180 = (int *****)0x107f2e95;
          iVar7 = FUN_10804a00();
          if (iVar7 == 0) {
            pppppiStack_180 = (int *****)0x0;
          }
          else {
            pppppiStack_180 = *(int ******)(iVar7 + 8);
          }
          FUN_104d1550("npcfriendvalue");
          pppppiStack_180 = (int *****)(uint)*(byte *)(unaff_EBX + 0x11);
          FUN_104d15e0("autotrak");
          FUN_104d15e0("shoqwCurQuestLevel",*(undefined *)((int)unaff_EBX + 0x45));
          FUN_104d15e0("bShare",*(undefined1 *)((int)ppppiVar11 + 0x81));
          unaff_EBX = (int ****)pppppiVar13;
        }
        pppppiStack_174 = &local_bc;
        pppppiStack_15c =
             (int *****)CONCAT31(pppppiStack_15c._1_3_,((byte)piStack_100 & 0x8f) == 10);
        pppppiStack_170 = pppppiStack_15c;
        ppppiStack_178 = (int ****)0x11dca89c;
        pppppiStack_17c = local_fc;
        pppppiStack_180 = (int *****)0x107f2f2e;
        cVar4 = (**(code **)(*piStack_104 + 0x10))();
        if (cVar4 != '\0') {
          pppppiStack_180 = (int *****)0xffffffff;
          (*(code *)(*apppppiStack_cc[0])[0x11])(local_c4,0);
          ppppiStack_108 = (int ****)0x0;
          piStack_104 = (int *)0x0;
          ppppiStack_178 = (int ****)CONCAT31(ppppiStack_178._1_3_,(unaff_SI & 0x8f) == 10);
          pppppiStack_170 = (int *****)0x0;
          pppppiStack_16c = (int *****)0x0;
          ppppiStack_168 = (int ****)0x0;
          cVar4 = (**(code **)(*unaff_EDI + 0x10))
                            (unaff_EBX,"TASK_TARGET_VO_NAME",&ppppiStack_108,ppppiStack_178);
          if ((cVar4 != '\0') && (((byte)ppppiStack_114 & 0x8f) == 6)) {
            ppppiStack_138 = ppppiStack_110;
            if (((uint)ppppiStack_114 >> 6 & 1) != 0) {
              ppppiStack_138 = (int ****)*ppppiStack_110;
            }
            cVar4 = FUN_100e57c0(&DAT_11d9d32b);
            if (cVar4 == '\0') {
              if (ppppiVar11 == (int ****)0x0) goto LAB_107f34ea;
              uStack_a0 = 0;
              uStack_9c = 0;
              FUN_11a98de0(&uStack_a0,ppppiStack_138,0,0);
              FUN_104d1790("strTarget4",unaff_EBX);
              FUN_104d1550("nOpType",0x1f);
              (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&ppppiStack_b0);
            }
            else {
              FUN_107fa640();
              ppppiVar1 = ppppiStack_138;
              pppppiStack_170 = (int *****)0x0;
              pppppiStack_16c = (int *****)0x0;
              pppppiVar13 = pppppiStack_180;
              if (pppppiStack_180 != pppppiStack_17c) {
                do {
                  FUN_11a98de0(&pppppiStack_170,ppppiVar1,0,0);
                  FUN_104d1550("nQuestType",pppppiVar13[0x38]);
                  if ((pppppiVar13[0x3a] == (int ****)0x3) && (pppppiVar13[0x34] != (int ****)0x4))
                  {
                    if (pppppiVar13[6] == pppppiVar13[7]) {
                      FUN_104d1550("nTargetID1",*pppppiVar13);
                      FUN_104d1550("nTargetID2",pppppiVar13[1]);
                      FUN_104d1550("nTargetID3",pppppiVar13[2]);
                      FUN_104d1550("nTargetID4",pppppiVar13[3]);
                      FUN_104d1550("nTargetID5",pppppiVar13[4]);
                      FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                      FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                      FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                      FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                      FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                      FUN_104d1550("nOpType",pppppiVar13[5]);
                      FUN_104d1550("nCurCount",pppppiVar13[6]);
                      FUN_104d1550("nMaxCount",pppppiVar13[7]);
                      FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                      FUN_104d1550(&DAT_11dca874,0);
                    }
                    else if ((int)pppppiVar13[6] < (int)pppppiVar13[7]) {
                      FUN_104d1550("nTargetID1",*pppppiVar13);
                      FUN_104d1550("nTargetID2",pppppiVar13[1]);
                      FUN_104d1550("nTargetID3",pppppiVar13[2]);
                      FUN_104d1550("nTargetID4",pppppiVar13[3]);
                      FUN_104d1550("nTargetID5",pppppiVar13[4]);
                      FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                      FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                      FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                      FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                      FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                      FUN_104d1550("nOpType",pppppiVar13[5]);
                      FUN_104d1550("nCurCount",pppppiVar13[6]);
                      FUN_104d1550("nMaxCount",pppppiVar13[7]);
                      FUN_104d1550("nQuestType",pppppiVar13[0x38]);
                      FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                      FUN_104d1550(&DAT_11dca874,0);
                      (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&pppppiStack_180);
                      break;
                    }
                  }
                  FUN_104d1550("nTargetID1",*pppppiVar13);
                  FUN_104d1550("nTargetID2",pppppiVar13[1]);
                  FUN_104d1550("nTargetID3",pppppiVar13[2]);
                  FUN_104d1550("nTargetID4",pppppiVar13[3]);
                  FUN_104d1550("nTargetID5",pppppiVar13[4]);
                  FUN_104d1670("strTarget1",pppppiVar13[0xd]);
                  FUN_104d1670("strTarget2",pppppiVar13[0x13]);
                  FUN_104d1670("strTarget3",pppppiVar13[0x19]);
                  FUN_104d1670("strTarget4",pppppiVar13[0x1f]);
                  FUN_104d1670("strTarget5",pppppiVar13[0x25]);
                  FUN_104d1550("nOpType",pppppiVar13[5]);
                  FUN_104d1550("nCurCount",pppppiVar13[6]);
                  FUN_104d1550("nMaxCount",pppppiVar13[7]);
                  FUN_104d1550(&DAT_11dca838,pppppiVar13[0x39]);
                  FUN_104d1550(&DAT_11dca874,0);
                  (**(code **)(*piStack_f8 + 0x3c))(piStack_f0,&pppppiStack_180);
                  pppppiVar13 = pppppiVar13 + 0x3b;
                } while (pppppiVar13 != pppppiStack_17c);
              }
            }
            FUN_104d7c10();
          }
LAB_107f34ea:
          FUN_104d7c10();
          FUN_104f9a70();
        }
        pppppiStack_180 = (int *****)0x107f350b;
        FUN_104d7c10();
        ppppiVar1 = ppppiStack_130;
      }
    }
  }
  ppppiStack_130 = ppppiVar1;
  if (((uint)local_54 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_58;
    ppppiStack_124 = ppppiStack_50;
    ppppiStack_12c = (int ****)0x107f3534;
    (*(code *)(*local_58)[2])();
    local_58 = (int ****)0x0;
  }
  local_54 = (int ****)0x0;
  if (((uint)local_6c >> 6 & 1) != 0) {
    pppppiStack_128 = (int *****)&local_70;
    ppppiStack_124 = ppppiStack_68;
    ppppiStack_12c = (int ****)0x107f3573;
    (*(code *)(*local_70)[2])();
    local_70 = (int *****)0x0;
  }
  local_6c = (int *****)0x0;
  if ((local_dc >> 6 & 1) != 0) {
    pppppiStack_128 = &local_e0;
    ppppiStack_124 = ppppiStack_d8;
    ppppiStack_12c = (int ****)0x107f35a6;
    (*(code *)(*local_e0)[2])();
    local_e0 = (int ****)0x0;
  }
  local_dc = 0;
  if (((uint)local_84 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_88;
    ppppiStack_124 = ppppiStack_80;
    ppppiStack_12c = (int ****)0x107f35df;
    (*(code *)(*local_88)[2])();
    local_88 = (int ****)0x0;
  }
  local_84 = (int ****)0x0;
  if (((uint)local_b4 >> 6 & 1) != 0) {
    pppppiStack_128 = &local_b8;
    ppppiStack_124 = ppppiStack_b0;
    ppppiStack_12c = (int ****)0x107f3612;
    (*(code *)(*local_b8)[2])();
  }
LAB_107f3612:
  FUN_11a89daa();
  return;
}



/* ===== FUN_107f4680 @ 107f4680  size=1025 ===== */
// strings:
//   "NPCORG_VO_CLASS_NAME"
//   "OrgID"
//   "OrgName"
//   "NextLevelUnLockContent"
//   "NpcAtdInGroupsStage"
//   "OrgFriendValue"
//   "OrgFriendValueMax"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   strings:
     ""NPCORG_VO_CLASS_NAME""
     ""OrgID""
     ""OrgName""
     ""NextLevelUnLockContent""
     ""NpcAtdInGroupsStage""
     ""OrgFriendValue""
     ""OrgFriendValueMax"" */

void FUN_107f4680(void)

{
  int ******ppppppiVar1;
  int iVar2;
  undefined4 uVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  undefined4 *in_stack_00000010;
  undefined1 *puVar6;
  char *pcStack_b4;
  int **ppiStack_b0;
  int *******pppppppiStack_ac;
  int *******pppppppiStack_9c;
  int iStack_98;
  char *pcStack_94;
  int *piStack_90;
  uint uStack_8c;
  int *******pppppppiStack_88;
  int *local_78;
  uint local_74;
  int *******local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_60;
  uint local_5c;
  int *******local_58;
  undefined4 local_54;
  undefined4 local_50;
  int *piStack_48;
  int ******ppppppiStack_44;
  int *******apppppppiStack_40 [2];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int *******pppppppiStack_30;
  int *******pppppppiStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&pppppppiStack_9c;
  local_78 = (int *)0x0;
  local_6c = in_stack_00000010[3];
  local_74 = in_stack_00000010[1];
  local_70 = (int *******)in_stack_00000010[2];
  local_68 = in_stack_00000010[4];
  if ((local_74 >> 6 & 1) != 0) {
    local_78 = (int *)*in_stack_00000010;
    ppiStack_b0 = &local_78;
    pcStack_b4 = (char *)0x107f46df;
    pppppppiStack_ac = local_70;
    (**(code **)(*local_78 + 4))();
  }
  if (((byte)local_74 & 0x8f) == 9) {
    local_54 = in_stack_00000010[9];
    local_5c = in_stack_00000010[7];
    pppppppiStack_ac = (int *******)in_stack_00000010[8];
    local_50 = in_stack_00000010[10];
    local_60 = (int *)0x0;
    local_58 = pppppppiStack_ac;
    if ((local_5c >> 6 & 1) != 0) {
      local_60 = (int *)in_stack_00000010[6];
      ppiStack_b0 = &local_60;
      pcStack_b4 = (char *)0x107f4737;
      (**(code **)(*local_60 + 4))();
    }
    piStack_48 = (int *)0x0;
    ppppppiStack_44 = (int ******)0x0;
    piStack_90 = (int *)0x0;
    ppiStack_b0 = &piStack_48;
    pppppppiStack_9c = (int *******)CONCAT31(pppppppiStack_9c._1_3_,((byte)local_5c & 0x8f) == 10);
    uStack_8c = 0;
    pppppppiStack_ac = pppppppiStack_9c;
    pcStack_b4 = "NPCORG_VO_CLASS_NAME";
    pcStack_94 = (char *)0x0;
    (**(code **)(*local_60 + 0x10))(local_58);
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar2 != 0) && (iStack_98 = 0, *(int *)(iVar2 + 0x2ac0) != 0)) {
      pppppppiStack_ac = (int *******)&pppppppiStack_30;
      ppiStack_b0 = (int **)0x107f47fd;
      FUN_11509d20();
      pppppppiVar4 = pppppppiStack_2c;
      pppppppiVar5 = pppppppiStack_30;
      if (pppppppiStack_30 != pppppppiStack_2c) {
        do {
          ppppppiVar1 = *pppppppiVar5;
          if (ppppppiVar1 != (int ******)0x0) {
            if (iStack_98 == 0) {
              DAT_123bb9a4 = ppppppiVar1[3][5];
            }
            pppppppiStack_ac = (int *******)0x0;
            ppiStack_b0 = (int **)0x0;
            pcStack_b4 = pcStack_94;
            FUN_11a98de0(&piStack_90);
            FUN_104d1550("OrgID",ppppppiVar1[3][5]);
            puVar6 = auStack_34;
            auStack_34[0] = 0;
            puStack_24 = puVar6;
            puStack_20 = puVar6;
            FUN_100e5aa0();
            FUN_104d1670("OrgName",puStack_24);
            if ((puStack_24 != auStack_38) && (puStack_24 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_24);
            }
            FUN_1172eb20(&ppiStack_b0,(int)ppppppiVar1[2] + 1);
            pppppppiStack_30 = (int *******)apppppppiStack_40;
            apppppppiStack_40[0] = (int *******)((uint)apppppppiStack_40[0] & 0xffffff00);
            pppppppiStack_2c = pppppppiStack_30;
            FUN_100e5aa0(pppppppiStack_30);
            FUN_104d1670("NextLevelUnLockContent",pppppppiStack_30);
            if ((pppppppiStack_30 != &ppppppiStack_44) && (pppppppiStack_30 != (int *******)0x0)) {
              FUN_10c3d5d0(pppppppiStack_30);
            }
            if (puVar6 != (undefined1 *)0x0) {
              FUN_10c3da30(puVar6);
            }
            FUN_104d1550("NpcAtdInGroupsStage",ppppppiVar1[2]);
            FUN_104d1550("OrgFriendValue",ppppppiVar1[1]);
            uVar3 = FUN_1172eac0(ppppppiVar1[2]);
            FUN_104d1550("OrgFriendValueMax",uVar3);
            (*(code *)(*pppppppiStack_9c)[0xf])(pcStack_94,&pcStack_b4);
            iStack_98 = iStack_98 + 1;
            pppppppiVar4 = pppppppiStack_2c;
          }
          pppppppiVar5 = pppppppiVar5 + 1;
        } while (pppppppiVar5 != pppppppiVar4);
      }
      if (pppppppiStack_30 != (int *******)0x0) {
        pppppppiStack_ac = pppppppiStack_30;
        ppiStack_b0 = (int **)0x107f49bf;
        FUN_10c3d5d0();
      }
    }
    if ((uStack_8c >> 6 & 1) != 0) {
      ppiStack_b0 = &piStack_90;
      pppppppiStack_ac = pppppppiStack_88;
      pcStack_b4 = (char *)0x107f49df;
      (**(code **)(*piStack_90 + 8))();
      piStack_90 = (int *)0x0;
    }
    uStack_8c = 0;
    if (((uint)ppppppiStack_44 >> 6 & 1) != 0) {
      ppiStack_b0 = &piStack_48;
      pppppppiStack_ac = apppppppiStack_40[0];
      pcStack_b4 = (char *)0x107f4a0c;
      (**(code **)(*piStack_48 + 8))();
      piStack_48 = (int *)0x0;
    }
    ppppppiStack_44 = (int ******)0x0;
    if ((local_5c >> 6 & 1) != 0) {
      ppiStack_b0 = &local_60;
      pppppppiStack_ac = local_58;
      pcStack_b4 = (char *)0x107f4a39;
      (**(code **)(*local_60 + 8))();
      local_60 = (int *)0x0;
    }
    local_5c = 0;
  }
  if ((local_74 >> 6 & 1) != 0) {
    ppiStack_b0 = &local_78;
    pcStack_b4 = (char *)0x107f4a6a;
    pppppppiStack_ac = local_70;
    (**(code **)(*local_78 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1081f440 @ 1081f440  size=270 ===== */
// strings:
//   "InitModel"
//   "ReadMail"
//   "ReadGift"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""ReadMail""
     ""ReadGift"" */

void FUN_1081f440(void)

{
  undefined1 **extraout_ECX;
  undefined1 auStack_5c [4];
  code *pcStack_58;
  char *pcStack_54;
  undefined1 **ppuStack_50;
  undefined4 ***pppuStack_4c;
  undefined1 *puStack_48;
  code *pcStack_44;
  char *pcStack_40;
  undefined1 ***pppuStack_3c;
  char **ppcStack_38;
  undefined1 **ppuStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined1 ***local_24;
  undefined1 ***pppuStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pcStack_30 = "InitModel";
  ppuStack_34 = (undefined1 **)0x1081f474;
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined1 ***)0x1081f481;
  ppuStack_34 = extraout_ECX;
  FUN_10821e10();
  if ((pppuStack_20 != &ppuStack_34) && (pppuStack_20 != (undefined1 ***)0x0)) {
    pppuStack_3c = pppuStack_20;
    pcStack_40 = (char *)0x1081f497;
    FUN_10c3d5d0();
  }
  local_24 = &ppuStack_34;
  pppuStack_3c = (undefined1 ***)0x11dcc8bc;
  pcStack_40 = "ReadMail";
  pcStack_44 = (code *)0x1081f4b7;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = FUN_10820250;
  pppuStack_4c = &pppuStack_3c;
  ppuStack_50 = (undefined1 **)0x1081f4d2;
  FUN_104d0ee0();
  if ((ppuStack_34 != &puStack_48) && (ppuStack_34 != (undefined1 **)0x0)) {
    ppuStack_50 = ppuStack_34;
    pcStack_54 = (char *)0x1081f4e8;
    FUN_10c3d5d0();
  }
  ppcStack_38 = &puStack_48;
  ppuStack_50 = (undefined1 **)0x11dcc8c8;
  pcStack_54 = "ReadGift";
  pcStack_58 = (code *)0x1081f508;
  ppuStack_34 = ppcStack_38;
  FUN_100b62c0();
  pcStack_58 = FUN_108202b0;
  FUN_104d0ee0(&ppuStack_50);
  if ((puStack_48 != auStack_5c) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1081f560 @ 1081f560  size=444 ===== */
// strings:
//   "_getMailInBoxData"
//   "SendMail"
//   "DeleteMail"
//   "ForceDeleteMail"
//   "ExtractItem"
//   "GroupExtractItem"
//   "ReturnBackMail"
//   "ReqMailList"
//   "_refreshMailDetail"
//   "GetFriendNameData"
//   "ReqUnReadMailNum"
//   "AfterCloseWidget"
//   "GetExtractData"
//   "SendHunterGroupMail"
//   "IsHaveHunterGroupRight"

/* [RE-AUTO c0]
   strings:
     ""_getMailInBoxData""
     ""SendMail""
     ""DeleteMail""
     ""ForceDeleteMail""
     ""ExtractItem""
     ""GroupExtractItem""
     ""ReturnBackMail""
     ""ReqMailList""
     ""_refreshMailDetail""
     ""GetFriendNameData"" */

void FUN_1081f560(void)

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
    FUN_104d13b0("_getMailInBoxData",FUN_10820820);
    FUN_104d13b0("SendMail",FUN_1081f930);
    FUN_104d13b0("DeleteMail",FUN_10820310);
    FUN_104d13b0("ForceDeleteMail",FUN_108204b0);
    FUN_104d13b0("ExtractItem",FUN_10820520);
    FUN_104d13b0("GroupExtractItem",FUN_108205d0);
    FUN_104d13b0("ReturnBackMail",FUN_108207b0);
    FUN_104d13b0("ReqMailList",FUN_10821b40);
    FUN_104d13b0("_refreshMailDetail",FUN_10821390);
    FUN_104d13b0("GetFriendNameData",FUN_10820e60);
    FUN_104d13b0("ReqUnReadMailNum",&LAB_10821ba0);
    FUN_104d13b0("AfterCloseWidget",&LAB_10821bd0);
    FUN_104d13b0("GetExtractData",FUN_10821c00);
    FUN_104d13b0("SendHunterGroupMail",FUN_1081ff90);
    FUN_104d13b0("IsHaveHunterGroupRight",FUN_108201a0);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10820820 @ 10820820  size=1544 ===== */
// calls: _i64toa, CPet::SetName
// strings:
//   "MAIL_INBOX_DATA_CLASSNAME"
//   "allMailNum"
//   "inBoxMailData"
//   "MAIL_DATA_VO_CLASSNAME"
//   "_strID"
//   "_bRead"
//   "_nType"
//   "_nSource"
//   "_strTitle"
//   "_strSender"
//   "_nRemainTime"
//   "_bHasAccessories"
//   "_nItemID"
//   "_nItemCnt"
//   "_strItemIconPathName"
//   "MailDataArr"

/* [RE-AUTO c0]
   calls: _i64toa
   strings:
     ""MAIL_INBOX_DATA_CLASSNAME""
     ""allMailNum""
     ""inBoxMailData""
     ""MAIL_DATA_VO_CLASSNAME""
     ""_strID""
     ""_bRead""
     ""_nType""
     ""_nSource""
     ""_strTitle""
     ""_strSender"" */

void FUN_10820820(int ******param_1,int param_2,int param_3,int *****param_4,int param_5)

{
  int ****ppppiVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_EBX;
  int *****pppppiVar5;
  int ****ppppiStack_1bc;
  char *pcStack_1b8;
  uint ***pppuStack_1b4;
  int ****ppppiStack_1b0;
  int ****ppppiStack_1ac;
  undefined4 *puStack_1a8;
  char *pcStack_1a4;
  uint *puStack_1a0;
  char *pcStack_19c;
  int iStack_198;
  int ***pppiStack_194;
  int *piStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int *piStack_184;
  char *pcStack_180;
  int *piStack_17c;
  int *****pppppiStack_178;
  int ****ppppiStack_174;
  uint **ppuStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int *piStack_144;
  int ****ppppiStack_140;
  int *piStack_13c;
  int ****ppppiStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  uint uStack_124;
  int ****ppppiStack_120;
  int *****pppppiStack_110;
  uint uStack_10c;
  int ****ppppiStack_108;
  int *piStack_104;
  int iStack_fc;
  int ****ppppiStack_f8;
  int *piStack_f4;
  int ****ppppiStack_f0;
  int ****appppiStack_ec [2];
  int ***pppiStack_e4;
  int **ppiStack_e0;
  char acStack_dc [8];
  int *****local_d4;
  int ****ppppiStack_d0;
  uint uStack_cc;
  int ****ppppiStack_c8;
  int ****ppppiStack_b4;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppuStack_164;
  local_d4 = (int *****)param_1;
  if ((((param_1 != (int ******)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *****)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppppiStack_174 = (int ****)param_1[2];
      pppppiStack_178 = (int *****)param_1;
      piStack_17c = (int *)0x1082088e;
      (*(code *)(**param_1)[2])();
      *param_1 = (int *****)0x0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = (int *****)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppppiStack_174 = (int ****)0x108208b8;
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar3 != 0) && (iStack_160 = *(int *)(iVar3 + 0x2ac4), iStack_160 != 0)) {
      ppppiStack_174 = (int ****)param_4;
      pppppiStack_178 = (int *****)0x108208dc;
      FUN_104f4330();
      piStack_17c = &iStack_fc;
      iStack_fc = 0;
      ppppiStack_f8 = (int ****)0x0;
      pppppiStack_178 =
           (int *****)CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)ppppiStack_140 & 0x8f) == 10);
      pcStack_180 = "MAIL_INBOX_DATA_CLASSNAME";
      piStack_184 = piStack_13c;
      uStack_188 = 0x1082091b;
      cVar2 = (**(code **)(*piStack_144 + 0x10))();
      piStack_190 = (int *)0x0;
      if ((cVar2 != '\0') &&
         ((((byte)ppppiStack_108 & 0x8f) == 6 &&
          (piStack_190 = piStack_104, ((uint)ppppiStack_108 >> 6 & 1) != 0)))) {
        piStack_190 = (int *)*piStack_104;
      }
      uStack_188 = 0;
      uStack_18c = 0;
      pppiStack_194 = (int ***)&pppiStack_e4;
      pppiStack_e4 = (int ***)0x0;
      ppiStack_e0 = (int **)0x0;
      iStack_198 = 0x10820972;
      FUN_11a98de0();
      iStack_198 = piStack_184[0x20];
      pcStack_19c = "allMailNum";
      puStack_1a0 = (uint *)0x1082098f;
      FUN_104d1550();
      puStack_1a0 = (uint *)&piStack_f4;
      pcStack_1a4 = "inBoxMailData";
      puStack_1a8 = (undefined4 *)0x108209a5;
      FUN_104d12b0();
      pcStack_19c = (char *)&uStack_134;
      uStack_134 = 0;
      uStack_130 = 0;
      pcStack_180 = (char *)0x0;
      uStack_188 = CONCAT31(uStack_188._1_3_,((byte)iStack_160 & 0x8f) == 10);
      iStack_198 = uStack_188;
      puStack_1a0 = (uint *)0x11dcca54;
      pcStack_1a4 = (char *)uStack_15c;
      puStack_1a8 = (undefined4 *)0x108209ed;
      cVar2 = (*(code *)(*ppuStack_164)[4])();
      if (((cVar2 != '\0') && (((byte)ppppiStack_140 & 0x8f) == 6)) &&
         (piStack_190 = piStack_13c, ((uint)ppppiStack_140 >> 6 & 1) != 0)) {
        piStack_190 = (int *)*piStack_13c;
      }
      puStack_1a8 = &uStack_15c;
      uStack_15c = 0;
      uStack_158 = 0;
      ppppiStack_1ac = (int ****)0x10820a2e;
      FUN_11a98a70();
      ppppiStack_1ac = (int ****)appppiStack_ec;
      ppppiStack_1b0 = (int ****)0x10820a3d;
      FUN_114fd740();
      pppppiVar5 = (int *****)ppppiStack_f0;
      if (ppppiStack_f0 != appppiStack_ec[0]) {
        do {
          ppppiVar1 = *pppppiVar5;
          if (ppppiVar1 != (int ****)0x0) {
            ppppiStack_1b0 = (int ****)0x0;
            pppuStack_1b4 = (uint ***)0x0;
            pcStack_1b8 = (char *)iStack_198;
            ppppiStack_1bc = &pppiStack_194;
            pppiStack_194 = (int ***)0x0;
            piStack_190 = (int *)0x0;
            FUN_11a98de0();
            uStack_12c = *(ulonglong *)ppppiVar1;
            _i64toa(*(longlong *)ppppiVar1,acStack_dc,10);
            pcVar4 = acStack_dc;
            pppiStack_e4 = (int ***)&piStack_f4;
            ppiStack_e0 = &piStack_f4;
            do {
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            FUN_100b62c0();
            FUN_104d1670();
            FUN_104d14d0(&DAT_11dcca44);
            FUN_104d15e0();
            FUN_104d1550("_nType",*(undefined1 *)((int)ppppiVar1 + 9));
            FUN_104d1550("_nSource",*(undefined1 *)(ppppiVar1 + 2));
            pcStack_1b8 = (char *)0x0;
            CPet__SetName();
            FUN_104d1790("_strTitle");
            pcStack_1b8 = (char *)0x0;
            CPet__SetName();
            FUN_104d1790("_strSender",&ppppiStack_1bc);
            FUN_104d1440("_nRemainTime",ppppiVar1[4]);
            FUN_104d15e0("_bHasAccessories",ppppiVar1[5] != (int ***)0xffffffff);
            FUN_104d1440("_nItemID",ppppiVar1[0x21]);
            FUN_104d1550("_nItemCnt",*(undefined1 *)(ppppiVar1 + 0x22));
            iVar3 = FUN_10254130(ppppiVar1[0x21]);
            if (iVar3 != 0) {
              FUN_104d1670("_strItemIconPathName",*(undefined4 *)(iVar3 + 0xb4));
            }
            (**(code **)(*piStack_184 + 0x3c))(piStack_17c,&pppuStack_1b4);
            if (pcStack_19c != (char *)0x0) {
              ppppiStack_1b0 = (int ****)pcStack_19c;
              pppuStack_1b4 = (uint ***)0x10820c63;
              FUN_10c3da30();
            }
            if (puStack_1a0 != (uint *)0x0) {
              ppppiStack_1b0 = (int ****)puStack_1a0;
              pppuStack_1b4 = (uint ***)0x10820c74;
              FUN_10c3da30();
            }
            if ((ppppiStack_d0 != &pppiStack_e4) && ((int *****)ppppiStack_d0 != (int *****)0x0)) {
              ppppiStack_1b0 = ppppiStack_d0;
              pppuStack_1b4 = (uint ***)0x10820c93;
              FUN_10c3d5d0();
            }
            if (((uint)piStack_190 >> 6 & 1) != 0) {
              pppuStack_1b4 = (uint ***)&pppiStack_194;
              ppppiStack_1b0 = (int ****)uStack_18c;
              pcStack_1b8 = (char *)0x10820cb3;
              (*(code *)(*pppiStack_194)[2])();
            }
          }
          pppppiVar5 = pppppiVar5 + 1;
          param_1 = (int ******)pppppiStack_110;
        } while (pppppiVar5 != (int *****)appppiStack_ec[0]);
      }
      ppppiStack_1b0 = (int ****)(uint)(((byte)pppppiStack_178 & 0x8f) == 10);
      pppuStack_1b4 = &ppuStack_164;
      pcStack_1b8 = "MailDataArr";
      ppppiStack_1bc = ppppiStack_174;
      (**(code **)(*piStack_17c + 0x14))();
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        ppppiStack_174 = (int ****)param_1[2];
        piStack_17c = (int *)0x10820d08;
        pppppiStack_178 = (int *****)param_1;
        (*(code *)(**param_1)[2])();
        *param_1 = (int *****)0x0;
      }
      param_1[1] = (int *****)0x2;
      *(undefined1 *)(param_1 + 2) = 1;
      if ((int *****)ppppiStack_b4 != (int *****)0x0) {
        ppppiStack_174 = ppppiStack_b4;
        pppppiStack_178 = (int *****)0x10820d2a;
        FUN_10c3d5d0();
      }
      if ((uStack_124 >> 6 & 1) != 0) {
        pppppiStack_178 = (int *****)((int)&uStack_12c + 4);
        ppppiStack_174 = ppppiStack_120;
        piStack_17c = (int *)0x10820d4a;
        (**(code **)(*uStack_12c._4_4_ + 8))();
        uStack_12c = uStack_12c & 0xffffffff;
      }
      uStack_124 = 0;
      if ((uStack_10c >> 6 & 1) != 0) {
        pppppiStack_178 = (int *****)&pppppiStack_110;
        ppppiStack_174 = ppppiStack_108;
        piStack_17c = (int *)0x10820d77;
        (*(code *)(*pppppiStack_110)[2])();
        pppppiStack_110 = (int *****)0x0;
      }
      uStack_10c = 0;
      if ((uStack_cc >> 6 & 1) != 0) {
        pppppiStack_178 = &ppppiStack_d0;
        ppppiStack_174 = ppppiStack_c8;
        piStack_17c = (int *)0x10820db0;
        (*(code *)(*ppppiStack_d0)[2])();
        ppppiStack_d0 = (int ****)0x0;
      }
      uStack_cc = 0;
      if (((uint)piStack_f4 >> 6 & 1) != 0) {
        pppppiStack_178 = &ppppiStack_f8;
        ppppiStack_174 = ppppiStack_f0;
        piStack_17c = (int *)0x10820de6;
        (*(code *)(*ppppiStack_f8)[2])();
        ppppiStack_f8 = (int ****)0x0;
      }
      piStack_f4 = (int *)0x0;
      if (((uint)piStack_13c >> 6 & 1) != 0) {
        pppppiStack_178 = &ppppiStack_140;
        ppppiStack_174 = ppppiStack_138;
        piStack_17c = (int *)0x10820e13;
        (*(code *)(*ppppiStack_140)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10820e60 @ 10820e60  size=1313 ===== */
// calls: CPet::SetName
// strings:
//   "FRIEND_NAME_CLASS_NAME"
//   "addtime"
//   "FriendNameList"

/* [RE-AUTO c0]
   strings:
     ""FRIEND_NAME_CLASS_NAME""
     ""addtime""
     ""FriendNameList"" */

void FUN_10820e60(undefined4 *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined3 unaff_EBX;
  undefined1 *puVar9;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  bool bVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined3 uStack_e4;
  int iStack_e0;
  undefined1 auStack_dc [3];
  undefined1 auStack_d9 [5];
  undefined4 uStack_d4;
  int local_d0;
  undefined4 *local_cc;
  int iStack_c8;
  int iStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  uint uStack_9c;
  int iStack_98;
  int *piStack_94;
  byte bStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_e4;
  local_cc = param_1;
  local_d0 = param_2;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    iVar7 = DAT_1202e818;
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_bc = (**(code **)(**(int **)(*(int *)(iVar7 + 0xd0) + 0x90) + 0xb4))();
    if ((iStack_bc != 0) && (iStack_e0 = *(int *)(iStack_bc + 0x2d5c), iStack_e0 != 0)) {
      piVar8 = param_4;
      FUN_104f4330();
      puStack_30 = auStack_40;
      auStack_40[0] = 0;
      if (((byte)param_4[7] & 0x8f) == 6) {
        puVar4 = (undefined4 *)param_4[8];
        if (((uint)param_4[7] >> 6 & 1) != 0) {
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        puVar4 = (undefined4 *)&DAT_11d9d32b;
      }
      puVar14 = auStack_d9;
      puStack_2c = puStack_30;
      FUN_100b5f70(puVar4,puVar14);
      FUN_108241e0();
      if ((puStack_50 != auStack_64) && (puStack_50 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_50);
      }
      bVar10 = (bStack_90 & 0x8f) == 10;
      piStack_ac = (int *)0x0;
      uStack_a8 = 0;
      iStack_e0 = 0;
      piVar13 = (int *)CONCAT31(uStack_e4,bVar10);
      cVar3 = (**(code **)(*piStack_94 + 0x10))(uStack_8c,"FRIEND_NAME_CLASS_NAME",&piStack_ac);
      if (((cVar3 != '\0') && (((byte)piStack_b8 & 0x8f) == 6)) &&
         (unaff_EDI = puStack_b4, ((uint)piStack_b8 >> 6 & 1) != 0)) {
        unaff_EDI = (undefined4 *)*puStack_b4;
      }
      uStack_d4 = 0;
      local_d0 = 0;
      FUN_11a98a70(&uStack_d4);
      uVar5 = (**(code **)(*piVar13 + 0x10))();
      FUN_104e8ee0(uVar5);
      FUN_10822ec0(FUN_10820e30);
      puVar9 = puStack_4c;
      for (piVar13 = unaff_ESI; piVar13 != (int *)CONCAT13(bVar10,unaff_EBX); piVar13 = piVar13 + 1)
      {
        iVar7 = *piVar13;
        if ((iVar7 != 0) &&
           ((puVar9 == puStack_50 || (iVar6 = FUN_10254970(puVar9,0), iVar6 != -1)))) {
          puVar4 = &uStack_7c;
          uStack_7c = 0;
          uStack_78 = 0;
          FUN_11a98de0(puVar4,puVar14,0,0);
          uVar5 = 0;
          CPet__SetName(*(undefined4 *)(iVar7 + 0x24));
          puStack_4c = auStack_5c;
          auStack_5c[0] = 0;
          puStack_48 = puStack_4c;
          FUN_100e5aa0(puStack_4c);
          FUN_104d1670(&DAT_11dbac80,puStack_4c);
          if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_4c);
          }
          FUN_104d14d0(&DAT_11dccb84);
          uVar11 = FUN_111f8d20();
          iVar6 = (int)((ulonglong)uVar11 >> 0x20);
          uVar1 = *(uint *)(iVar7 + 0xc0);
          uVar2 = (uint)((uint)uVar11 < uVar1);
          iVar7 = iVar6 - ((int)uVar1 >> 0x1f);
          iStack_98 = iVar7 - uVar2;
          if ((iStack_98 < 0) ||
             ((iStack_98 == 0 || SBORROW4(iVar6,(int)uVar1 >> 0x1f) != SBORROW4(iVar7,uVar2) &&
              ((uint)uVar11 - uVar1 < 0x3f481)))) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          FUN_104d15e0("addtime",CONCAT31((int3)uVar5,uVar12));
          (**(code **)(*piVar8 + 0x3c))(unaff_ESI,&piStack_94);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_10c3da30(puVar4);
          }
          FUN_104d7c10();
          puVar9 = puStack_4c;
        }
        param_1 = unaff_EDI;
      }
      (**(code **)(*piStack_ac + 0x14))
                (uStack_a4,"FriendNameList",auStack_dc,((byte)uStack_a8 & 0x8f) == 10);
      uStack_a4 = 0;
      piStack_a0 = (int *)0x0;
      uStack_9c = 0;
      iStack_98 = 0;
      uStack_a4 = FUN_1025b060();
      piStack_a0 = (int *)FUN_1025b060();
      uStack_9c = FUN_1025b060();
      iStack_98 = FUN_1025b060();
      iVar7 = FUN_10d17440();
      if (iVar7 != 0) {
        FUN_10d17440();
        iVar7 = FUN_10d17870();
        if (iVar7 != 0) {
          FUN_10d17440();
          piVar8 = (int *)FUN_10d17870();
          (**(code **)(*piVar8 + 4))(0x1a,auStack_70);
        }
      }
      if (((uint)param_1[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
        *param_1 = 0;
      }
      param_1[1] = 2;
      *(undefined1 *)(param_1 + 2) = 1;
      if (iStack_c8 != 0) {
        FUN_10c3d5d0(iStack_c8);
      }
      if (((uint)puStack_b4 >> 6 & 1) != 0) {
        (**(code **)(*piStack_b8 + 8))(&piStack_b8,uStack_b0);
        piStack_b8 = (int *)0x0;
      }
      puStack_b4 = (undefined4 *)0x0;
      if ((uStack_9c >> 6 & 1) != 0) {
        (**(code **)(*piStack_a0 + 8))(&piStack_a0,iStack_98);
        piStack_a0 = (int *)0x0;
      }
      uStack_9c = 0;
      if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_28);
      }
      if ((uStack_84 >> 6 & 1) != 0) {
        (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10821390 @ 10821390  size=1957 ===== */
// calls: CPet::SetName
// strings:
//   "MAIL_READER_DATA_CLASSNAME"
//   "MAIL_EXTRACT_ITEM_DATA_CLASSNAME"
//   "_count"
//   "_ullItemId"
//   "_index"
//   "_itemIconPathName"
//   "_strItemName"
//   "nMailID"
//   "itemList"
//   "goldIndex"
//   "boundGold"
//   "boundGoldIndex"
//   "credit"
//   "creditIndex"
//   "source"
//   "strSender"
//   "strTitle"
//   "strContent"
//   "mailReaderData"

/* WARNING: Removing unreachable block (ram,0x108219d3) */
/* [RE-AUTO c0]
   strings:
     ""MAIL_READER_DATA_CLASSNAME""
     ""MAIL_EXTRACT_ITEM_DATA_CLASSNAME""
     ""_count""
     ""_ullItemId""
     ""_index""
     ""_itemIconPathName""
     ""_strItemName""
     ""nMailID""
     ""itemList""
     ""goldIndex"" */

void FUN_10821390(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int **ppiVar9;
  int *piVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcStack_fc;
  int **ppiStack_f8;
  int **ppiStack_f4;
  int **ppiStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int **ppiStack_d0;
  undefined1 auStack_cc [4];
  int *piStack_c8;
  uint uStack_c4;
  int *local_c0;
  uint local_bc;
  int **local_b8;
  uint local_b4;
  undefined4 *local_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  int **ppiStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  undefined4 uStack_94;
  undefined2 auStack_90 [2];
  int *piStack_8c;
  undefined2 auStack_88 [2];
  int *piStack_84;
  undefined4 uStack_80;
  int *apiStack_7c [2];
  int *piStack_74;
  int **ppiStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  int **ppiStack_64;
  int **local_60;
  int **ppiStack_5c;
  undefined1 auStack_58 [36];
  undefined1 *puStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppiStack_e4;
  local_60 = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    ppiStack_f4 = (int **)param_1[2];
    ppiStack_f8 = param_1;
    pcStack_fc = (char *)0x108213cf;
    (**(code **)(**param_1 + 8))();
    *param_1 = (int *)0x0;
  }
  param_1[1] = (int *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  local_c0 = (int *)0x0;
  local_bc = param_4[1];
  local_b4 = param_4[3];
  ppiStack_f4 = (int **)param_4[2];
  local_b0 = (undefined4 *)param_4[4];
  local_b8 = ppiStack_f4;
  if ((local_bc >> 6 & 1) != 0) {
    local_c0 = (int *)*param_4;
    ppiStack_f8 = &local_c0;
    pcStack_fc = (char *)0x10821420;
    (**(code **)(*local_c0 + 4))();
  }
  ppiStack_f4 = (int **)0x10821439;
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar3 != 0) && (iStack_e0 = *(int *)(iVar3 + 0x2ac4), iStack_e0 != 0)) {
    ppiStack_f8 = &piStack_a8;
    piStack_a8 = (int *)0x0;
    uStack_a4 = 0;
    ppiStack_e4 = (int **)CONCAT31(ppiStack_e4._1_3_,((byte)local_bc & 0x8f) == 10);
    ppiStack_f4 = ppiStack_e4;
    pcStack_fc = "MAIL_READER_DATA_CLASSNAME";
    cVar2 = (**(code **)(*local_c0 + 0x10))(local_b8);
    if ((cVar2 == '\0') || (((byte)local_b4 & 0x8f) != 6)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = local_b0;
      if ((local_b4 >> 6 & 1) != 0) {
        puVar4 = (undefined4 *)*local_b0;
      }
    }
    uVar12 = 0;
    piVar10 = (int *)&stack0xffffff18;
    ppiStack_e4 = (int **)0x0;
    FUN_11a98de0(piVar10,puVar4,0);
    ppiVar9 = apiStack_7c;
    FUN_114fd740(ppiVar9);
    piVar6 = uStack_80;
    if (uStack_80 != apiStack_7c[0]) {
LAB_10821500:
      piVar1 = (int *)*piVar6;
      if (((piVar1 == (int *)0x0) || (*piVar1 != iRam00000078)) || (piVar1[1] != iRam0000007c))
      goto LAB_10821519;
      piStack_74 = (int *)0x0;
      ppiStack_70 = (int **)0x0;
      iVar3 = CONCAT31((int3)((uint)uVar12 >> 8),((byte)iStack_e0 & 0x8f) == 10);
      iVar13 = 0;
      cVar2 = (*(code *)(*ppiStack_e4)[4])
                        (uStack_dc,"MAIL_EXTRACT_ITEM_DATA_CLASSNAME",auStack_cc,iVar3);
      if (((cVar2 != '\0') && (((byte)piStack_d8 & 0x8f) == 6)) &&
         (piVar10 = piStack_d4, ((uint)piStack_d8 >> 6 & 1) != 0)) {
        piVar10 = (int *)*piStack_d4;
      }
      uStack_ac = 0;
      piStack_a8 = (int *)0x0;
      FUN_11a98a70(&uStack_ac);
      bVar11 = (byte)puVar4;
      uVar8 = 0;
      if (piVar1[0x2a] - piVar1[0x29] >> 5 != 0) {
        iVar7 = 0;
        do {
          piStack_c8 = (int *)0x0;
          uStack_c4 = 0;
          FUN_11a98de0(&piStack_c8,ppiVar9,0,0);
          FUN_104d1550(&DAT_11dccb08,*(undefined4 *)(iVar7 + 0x14 + piVar1[0x29]));
          FUN_104d1550("_count",*(undefined2 *)(iVar7 + 0x10 + piVar1[0x29]));
          FUN_104d14d0("_ullItemId");
          FUN_104d1550("_index",*(undefined2 *)(iVar7 + 2 + piVar1[0x29]));
          iVar5 = FUN_10254130(*(undefined4 *)(iVar7 + 0x14 + piVar1[0x29]));
          if (iVar5 != 0) {
            FUN_104d1670("_itemIconPathName",*(undefined4 *)(iVar5 + 0xb4));
            ppiStack_6c = apiStack_7c;
            apiStack_7c[0] = (int *)((uint)apiStack_7c[0] & 0xffffff00);
            ppiStack_68 = ppiStack_6c;
            FUN_100e5aa0(ppiStack_6c);
            FUN_104d1670("_strItemName",ppiStack_6c);
            if ((ppiStack_68 != apiStack_7c) && (ppiStack_68 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_68);
            }
          }
          (**(code **)(*local_c0 + 0x3c))(local_b8,&piStack_d8);
          if ((uStack_c4 >> 6 & 1) != 0) {
            (**(code **)(*piStack_c8 + 8))(&piStack_c8,local_c0,iVar5);
          }
          bVar11 = (byte)puVar4;
          iVar7 = iVar7 + 0x20;
          uVar8 = uVar8 + 1;
          param_1 = ppiStack_98;
        } while (uVar8 < (uint)(piVar1[0x2a] - piVar1[0x29] >> 5));
      }
      FUN_104d14d0("nMailID");
      (**(code **)(*piVar10 + 0x14))(iVar3,"itemList",&local_b0,(bVar11 & 0x8f) == 10);
      FUN_104d1440(&DAT_11dc0944,piVar1[0x23]);
      FUN_104d1440("goldIndex",piVar1[0x24]);
      FUN_104d1440("boundGold",piVar1[0x27]);
      FUN_104d1440("boundGoldIndex",piVar1[0x28]);
      FUN_104d1440("credit",piVar1[0x25]);
      FUN_104d1440("creditIndex",piVar1[0x26]);
      FUN_104d1550("source",(char)piVar1[2]);
      CPet__SetName(piVar1[0xb]);
      local_60 = (int **)&uStack_80;
      uStack_80 = (int *)((uint)uStack_80._2_2_ << 0x10);
      ppiStack_5c = local_60;
      FUN_100e5b60(&uStack_80);
      FUN_104d1700("strSender",local_60);
      if ((local_60 != &piStack_84) && (local_60 != (int **)0x0)) {
        FUN_10c3d5d0(local_60);
      }
      CPet__SetName(piVar1[0x17]);
      ppiStack_68 = (int **)auStack_88;
      auStack_88[0] = 0;
      ppiStack_64 = ppiStack_68;
      FUN_100e5b60(auStack_88);
      FUN_104d1700("strTitle",ppiStack_68);
      if ((ppiStack_68 != &piStack_8c) && (ppiStack_68 != (int **)0x0)) {
        FUN_10c3d5d0(ppiStack_68);
      }
      CPet__SetName(piVar1[0x1d]);
      ppiStack_70 = (int **)auStack_90;
      auStack_90[0] = 0;
      ppiStack_6c = ppiStack_70;
      FUN_100e5b60(auStack_90);
      FUN_104d1700("strContent",ppiStack_70);
      if ((puStack_34 != auStack_58) && (puStack_34 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_34);
      }
      if (iVar13 != 0) {
        FUN_10c3da30(iVar13);
      }
      if (iVar3 != 0) {
        FUN_10c3da30(iVar3);
      }
      if (((uint)ppiStack_98 >> 6 & 1) != 0) {
        (**(code **)(*piStack_9c + 8))(&piStack_9c,uStack_94);
        piStack_9c = (int *)0x0;
      }
      ppiStack_98 = (int **)0x0;
      if (((uint)ppiStack_70 >> 6 & 1) != 0) {
        (**(code **)(*piStack_74 + 8))(&piStack_74,ppiStack_6c);
      }
    }
LAB_10821a46:
    (*(code *)(*ppiStack_e4)[5])
              (uStack_dc,"mailReaderData",&pcStack_fc,((byte)iStack_e0 & 0x8f) == 10);
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppiStack_f4 = (int **)param_1[2];
      pcStack_fc = (char *)0x10821a84;
      ppiStack_f8 = param_1;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (ppiStack_5c != (int **)0x0) {
      ppiStack_f4 = ppiStack_5c;
      ppiStack_f8 = (int **)0x10821aa6;
      FUN_10c3d5d0();
    }
    if (((uint)piStack_d4 >> 6 & 1) != 0) {
      ppiStack_f8 = &piStack_d8;
      ppiStack_f4 = ppiStack_d0;
      pcStack_fc = (char *)0x10821ac6;
      (**(code **)(*piStack_d8 + 8))();
      piStack_d8 = (int *)0x0;
    }
    piStack_d4 = (int *)0x0;
    if ((uStack_a4 >> 6 & 1) != 0) {
      ppiStack_f8 = &piStack_a8;
      ppiStack_f4 = ppiStack_a0;
      pcStack_fc = (char *)0x10821af3;
      (**(code **)(*piStack_a8 + 8))();
      piStack_a8 = (int *)0x0;
    }
    uStack_a4 = 0;
  }
  if ((local_bc >> 6 & 1) != 0) {
    ppiStack_f8 = &local_c0;
    ppiStack_f4 = local_b8;
    pcStack_fc = (char *)0x10821b20;
    (**(code **)(*local_c0 + 8))();
  }
  FUN_11a89daa();
  return;
LAB_10821519:
  piVar6 = piVar6 + 1;
  if (piVar6 == apiStack_7c[0]) goto LAB_10821a46;
  goto LAB_10821500;
}



/* ===== FUN_108259e0 @ 108259e0  size=1148 ===== */
// strings:
//   "InitModel"
//   "GetFriendDetailInfoByID"
//   "CreateNewGroup"
//   "ChangeGroupName"
//   "ChangeFriendGroup"
//   "ChangeFriendToBackList"
//   "AddNewFriend"
//   "DelFriendByID"
//   "DelFriendGroupByID"
//   "QueryAllInfo"
//   "DelPlayerFromBlacklist"
//   "DelPasserbyPlayer"
//   "SetMood"
//   "OnAcceptFriendApply"
//   "OnRejectFriendApply"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""GetFriendDetailInfoByID""
     ""CreateNewGroup""
     ""ChangeGroupName""
     ""ChangeFriendGroup""
     ""ChangeFriendToBackList""
     ""AddNewFriend""
     ""DelFriendByID""
     ""DelFriendGroupByID""
     ""QueryAllInfo"" */

void __fastcall FUN_108259e0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
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
  undefined4 ***pppuStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  undefined4 ***pppuStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  undefined4 ***pppuStack_a4;
  undefined4 ***pppuStack_a0;
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
  undefined4 ***pppuStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10825a14;
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined4 ***)0x10825a21;
  FUN_10828120();
  if (((code ****)pppuStack_20 != &pppcStack_34) && ((code ****)pppuStack_20 != (code ****)0x0)) {
    pppuStack_3c = pppuStack_20;
    pppcStack_40 = (code ***)0x10825a37;
    FUN_10c3d5d0();
  }
  local_24 = &pppcStack_34;
  pppuStack_3c = (undefined4 ***)0x11dcce27;
  pppcStack_40 = (code ***)0x11dcce10;
  pppcStack_44 = (code ***)0x10825a57;
  pppuStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)&LAB_10827730;
  pppuStack_48 = &pppuStack_3c;
  pppcStack_4c = (code ***)0x10825a68;
  FUN_10828060();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10825a7e;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dcce36;
  pppcStack_50 = (code ***)0x11dcce28;
  pppcStack_54 = (code ***)0x10825a9e;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10827750;
  pppuStack_58 = &pppcStack_4c;
  pppcStack_5c = (code ***)0x10825aaf;
  FUN_10828060();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10825ac5;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dccdfb;
  pppcStack_60 = (code ***)0x11dccdec;
  pppcStack_64 = (code ***)0x10825ae5;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10827880;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10825af6;
  FUN_10828060();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10825b0c;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dcce0d;
  pppcStack_70 = (code ***)0x11dccdfc;
  pppcStack_74 = (code ***)0x10825b2c;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10827970;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10825b3d;
  FUN_10828060();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10825b53;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dccec6;
  pppcStack_80 = (code ***)0x11dcceb0;
  pppcStack_84 = (code ***)0x10825b73;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_108279d0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10825b84;
  FUN_10828060();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x10825b9a;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dcced4;
  pppcStack_90 = (code ***)0x11dccec8;
  pppcStack_94 = (code ***)0x10825bba;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_10827ac0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x10825bcb;
  FUN_10828060();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppuStack_a0 = (undefined4 ***)0x10825be1;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dcce99;
  pppuStack_a0 = (undefined4 ***)0x11dcce8c;
  pppuStack_a4 = (undefined4 ***)0x10825c01;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppuStack_a4 = (undefined4 ***)FUN_10827bc0;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x10825c12;
  FUN_10828060();
  if (((undefined4 ****)pppcStack_90 != &pppuStack_a4) &&
     ((undefined4 ****)pppcStack_90 != (undefined4 ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x10825c28;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppuStack_a4;
  pppcStack_ac = (code ***)0x11dcceae;
  pppcStack_b0 = (code ***)0x11dcce9c;
  pppcStack_b4 = (code ***)0x10825c48;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_10827840;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppuStack_bc = (undefined4 ***)0x10825c59;
  FUN_10828060();
  if (((code ****)pppuStack_a0 != &pppcStack_b4) && ((code ****)pppuStack_a0 != (code ****)0x0)) {
    pppuStack_bc = pppuStack_a0;
    pppcStack_c0 = (code ***)0x10825c6f;
    FUN_10c3d5d0();
  }
  pppuStack_a4 = &pppcStack_b4;
  pppuStack_bc = (undefined4 ***)0x11dcce70;
  pppcStack_c0 = (code ***)0x11dcce64;
  pppcStack_c4 = (code ***)0x10825c8f;
  pppuStack_a0 = pppuStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)&LAB_10827c20;
  pppcStack_c8 = (code ***)&pppuStack_bc;
  pppcStack_cc = (code ***)0x10825ca0;
  FUN_10828060();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x10825cb6;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dcce8a;
  pppcStack_d0 = (code ***)0x11dcce74;
  pppcStack_d4 = (code ***)0x10825cd6;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_10827c50;
  pppuStack_d8 = &pppcStack_cc;
  pppcStack_dc = (code ***)0x10825ce7;
  FUN_10828060();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x10825cfd;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dcce59;
  pppcStack_e0 = (code ***)0x11dcce48;
  pppcStack_e4 = (code ***)0x10825d1d;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_10827cb0;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x10825d2e;
  FUN_10828060();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    ppcStack_f0 = (code **)0x10825d44;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dcce63;
  ppcStack_f0 = (code **)0x11dcce5c;
  ppcStack_f4 = (code **)0x10825d64;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  ppcStack_f4 = (code **)FUN_10827d10;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x10825d75;
  FUN_10828060();
  if ((pppcStack_e0 != &ppcStack_f4) && (pppcStack_e0 != (code ***)0x0)) {
    pppcStack_fc = pppcStack_e0;
    ppcStack_100 = (code **)0x10825d8b;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = &ppcStack_f4;
  pppcStack_fc = (code ***)0x11dccf4f;
  ppcStack_100 = (code **)0x11dccf3c;
  pcStack_104 = (code *)0x10825dab;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pcStack_104 = FUN_10827dc0;
  pppcStack_108 = (code ***)&pppcStack_fc;
  ppcStack_10c = (code **)0x10825dbc;
  FUN_10828060();
  if ((ppcStack_f0 != &pcStack_104) && (ppcStack_f0 != (code **)0x0)) {
    ppcStack_10c = ppcStack_f0;
    pcStack_110 = (char *)0x10825dd2;
    FUN_10c3d5d0();
  }
  ppcStack_f4 = &pcStack_104;
  ppcStack_10c = (code **)0x11dccf63;
  pcStack_110 = "OnRejectFriendApply";
  pcStack_114 = (code *)0x10825df2;
  ppcStack_f0 = ppcStack_f4;
  FUN_100b62c0();
  pcStack_114 = FUN_10827eb0;
  FUN_10828060(&ppcStack_10c);
  if ((ppcStack_100 != &pcStack_114) && (ppcStack_100 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_100);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10828930();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10825e70 @ 10825e70  size=93 ===== */
// strings:
//   "g_FriendRemind"

/* [RE-AUTO c0]
   strings:
     ""g_FriendRemind"" */

void __thiscall FUN_10825e70(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_FriendRemind",param_1);
  iVar2 = (**(code **)(*piVar1 + 8))();
  if (iVar2 != 0) {
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar3 = FUN_1024e9b0(param_2,6);
      FUN_1112f070(0xc30,uVar3);
      return;
    }
    uVar3 = FUN_1024e9b0(param_2,6);
    FUN_1112f070(0xc31,uVar3);
  }
  return;
}



/* ===== FUN_10825ed0 @ 10825ed0  size=141 ===== */
// strings:
//   "_getFriendListData"

/* [RE-AUTO c0]
   strings:
     ""_getFriendListData"" */

void FUN_10825ed0(void)

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
    FUN_104d13b0("_getFriendListData",FUN_10825f60);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10825f60 @ 10825f60  size=6083 ===== */
// calls: CPet::SetName, memcpy
// strings:
//   "isInTown"
//   "GROUP_CLASS_NAME"
//   "FRIEND_CLASS_NAME"
//   "netId"
//   "worldServerId"
//   "bCrossServer"
//   "StrServer"
//   "HRLevel"
//   "intimate"
//   "groupType"
//   "groupId"
//   "isOnline"
//   "strMood"
//   "lineID"
//   "guildName"
//   "nTeamID"
//   "strHunterStar"
//   "clanName"
//   "groupDataList"
//   "defaultFriendList"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""isInTown""
     ""GROUP_CLASS_NAME""
     ""FRIEND_CLASS_NAME""
     ""netId""
     ""worldServerId""
     ""bCrossServer""
     ""StrServer""
     ""HRLevel""
     ""intimate""
     ""groupType"" */

void FUN_10825f60(int *******param_1,int param_2,int param_3,int *******param_4,int param_5)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *******pppppppiVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  int *******pppppppiVar11;
  int ******extraout_ECX;
  int ******extraout_ECX_00;
  size_t sVar12;
  int ******ppppppiVar13;
  int iStack_334;
  undefined *puStack_330;
  int ******ppppppiStack_32c;
  uint uStack_328;
  int *****pppppiStack_324;
  uint *puStack_320;
  int *****pppppiStack_31c;
  char *pcStack_318;
  int ******ppppppiStack_314;
  int ******ppppppiStack_310;
  int ******ppppppiStack_30c;
  int ******ppppppiStack_308;
  int iStack_304;
  uint uStack_300;
  int *******pppppppiVar14;
  undefined4 uVar15;
  int ******ppppppiVar16;
  int *****pppppiStack_2ec;
  uint **ppuStack_2e8;
  int ******ppppppiStack_2e4;
  int ******ppppppiStack_2e0;
  int ******ppppppiStack_2dc;
  int ****ppppiStack_2d8;
  int *****pppppiStack_2d4;
  int ******ppppppiStack_2d0;
  int ******ppppppiStack_2cc;
  int ******ppppppiStack_2c8;
  int ******ppppppiStack_2c4;
  int *****pppppiStack_2c0;
  int *****pppppiStack_2bc;
  int ****ppppiStack_2b8;
  int ******ppppppiStack_2b4;
  char *pcVar17;
  int ******ppppppiStack_294;
  int ******ppppppiStack_28c;
  int *****pppppiStack_288;
  int ******ppppppiStack_284;
  int ******ppppppiStack_280;
  int *****pppppiStack_27c;
  int ******ppppppiStack_278;
  int ****ppppiStack_268;
  int *****pppppiStack_264;
  int ******ppppppiStack_260;
  int *piStack_25c;
  int ****ppppiStack_258;
  int ******ppppppiStack_254;
  int ******ppppppiStack_250;
  int ******ppppppiStack_24c;
  int ******ppppppiStack_248;
  int ******ppppppiStack_244;
  int ****ppppiStack_240;
  int *****pppppiStack_23c;
  int ******ppppppiStack_238;
  char *pcStack_234;
  int *****pppppiStack_230;
  int ****ppppiStack_22c;
  int ******ppppppiStack_228;
  int ******ppppppiStack_224;
  int ******ppppppiStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  int *****pppppiStack_214;
  int ****ppppiStack_210;
  uint *puStack_20c;
  int *piStack_208;
  int ****ppppiStack_204;
  char *pcStack_200;
  int **ppiStack_1fc;
  int ******ppppppiStack_1f8;
  int ******ppppppiStack_1f4;
  int *apiStack_1e4 [2];
  int *****pppppiStack_1dc;
  int *piStack_1d4;
  int *****pppppiStack_1cc;
  int ******ppppppiStack_1c8;
  int ******ppppppiStack_1c4;
  uint uStack_1c0;
  int *****pppppiStack_1bc;
  int ******ppppppiStack_1b8;
  int ******ppppppiStack_1b4;
  int ******ppppppiStack_1b0;
  int ****ppppiStack_1ac;
  int ******ppppppiStack_1a8;
  int ******ppppppiStack_1a4;
  int ******ppppppiStack_1a0;
  undefined8 uStack_19c;
  int ****ppppiStack_194;
  int ******ppppppiStack_190;
  int *****pppppiStack_18c;
  int *piStack_188;
  uint uStack_184;
  int ****ppppiStack_180;
  int ******ppppppiStack_17c;
  undefined4 uStack_178;
  int *piStack_174;
  int *****pppppiStack_170;
  int *****pppppiStack_16c;
  int ******ppppppiStack_168;
  int *****pppppiStack_164;
  int *****pppppiStack_160;
  undefined8 uStack_15c;
  uint uStack_154;
  int ******ppppppiStack_150;
  int ******ppppppiStack_14c;
  int *piStack_148;
  int *****pppppiStack_140;
  int ******ppppppiStack_13c;
  int ******appppppiStack_138 [5];
  int ******ppppppiStack_124;
  undefined4 uStack_120;
  int ******ppppppiStack_11c;
  int *****pppppiStack_118;
  int *****pppppiStack_114;
  int ******ppppppiStack_110;
  undefined1 auStack_10c [8];
  int ******ppppppiStack_104;
  int ******ppppppiStack_100;
  int ******local_fc;
  int *****pppppiStack_f8;
  uint uStack_f4;
  int ******ppppppiStack_f0;
  int ******ppppppiStack_dc;
  undefined1 auStack_d8 [8];
  int *****pppppiStack_d0;
  uint uStack_cc;
  int ******ppppppiStack_c8;
  int ******ppppppiStack_c4;
  int *****pppppiStack_b8;
  int ****ppppiStack_b4;
  int ******ppppppiStack_b0;
  undefined1 auStack_ac [12];
  int *****pppppiStack_a0;
  int ******ppppppiStack_9c;
  int ******appppppiStack_98 [2];
  undefined1 auStack_90 [12];
  int ******ppppppiStack_84;
  int ***pppiStack_80;
  int ***pppiStack_7c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)apiStack_1e4;
  local_fc = (int ******)param_1;
  if ((((param_1 != (int *******)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *******)0x0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      ppppppiStack_1f4 = param_1[2];
      ppppppiStack_1f8 = (int ******)param_1;
      ppiStack_1fc = (int **)0x10825fce;
      (*(code *)(**param_1)[2])();
      *param_1 = (int ******)0x0;
    }
    iVar4 = DAT_1202e818;
    param_1[1] = (int ******)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    ppppppiStack_1f4 = (int ******)0x10825ff8;
    iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xd0) + 0x90) + 0xb4))();
    if ((iVar4 != 0) &&
       (ppppppiVar13 = *(int *******)(iVar4 + 0x2d5c), pppppiStack_1bc = (int *****)ppppppiVar13,
       ppppppiVar13 != (int ******)0x0)) {
      ppppppiStack_1f4 = (int ******)param_4;
      ppppppiStack_1f8 = (int ******)0x1082601c;
      FUN_104f4330();
      apiStack_1e4[0] = (int *)CONCAT31(apiStack_1e4[0]._1_3_,1);
      if (*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0) {
        ppppppiStack_1f8 = (int ******)0x1082603a;
        uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
        apiStack_1e4[0] = (int *)CONCAT31(apiStack_1e4[0]._1_3_,uVar2);
      }
      ppppppiStack_1f8 = (int ******)apiStack_1e4[0];
      ppiStack_1fc = (int **)0x11dcbc60;
      pcStack_200 = (char *)0x10826052;
      FUN_104d15e0();
      ppiStack_1fc = &piStack_174;
      piStack_174 = (int *)0x0;
      pppppiStack_170 = (int *****)0x0;
      ppppppiStack_1b8 = (int ******)0x0;
      ppppppiStack_1c4 =
           (int ******)CONCAT31(ppppppiStack_1c4._1_3_,((byte)ppppppiStack_1b0 & 0x8f) == 10);
      ppppppiStack_1f8 = ppppppiStack_1c4;
      pcStack_200 = "GROUP_CLASS_NAME";
      ppppiStack_204 = ppppiStack_1ac;
      piStack_208 = (int *)0x108260a1;
      cVar3 = (*(code *)(*ppppppiStack_1b4)[4])();
      ppppppiStack_220 = (int ******)(int *******)0x0;
      if (((cVar3 != '\0') && (((byte)ppppiStack_180 & 0x8f) == 6)) &&
         (ppppppiStack_220 = ppppppiStack_17c, ppppppiStack_1c8 = ppppppiStack_17c,
         ((uint)ppppiStack_180 >> 6 & 1) != 0)) {
        ppppppiStack_1c8 = (int ******)*ppppppiStack_17c;
        ppppppiStack_220 = ppppppiStack_1c8;
      }
      puStack_20c = &uStack_184;
      pppppiStack_1cc = (int *****)0x0;
      piStack_1d4 = (int *)CONCAT31(piStack_1d4._1_3_,((byte)uStack_1c0 & 0x8f) == 10);
      piStack_208 = piStack_1d4;
      ppppiStack_210 = (int ****)0x11dccf04;
      pppppiStack_214 = pppppiStack_1bc;
      uStack_218 = 0x1082610d;
      cVar3 = (*(code *)(*ppppppiStack_1c4)[4])();
      if (((cVar3 != '\0') && (((byte)ppppppiStack_190 & 0x8f) == 6)) &&
         (pppppiStack_1dc = pppppiStack_18c, ((uint)ppppppiStack_190 >> 6 & 1) != 0)) {
        pppppiStack_1dc = (int *****)*pppppiStack_18c;
      }
      uStack_218 = 0;
      uStack_21c = 0;
      ppppppiStack_224 = (int ******)&ppppppiStack_17c;
      ppppppiStack_17c = (int ******)0x0;
      uStack_178 = 0;
      ppppppiStack_228 = (int ******)0x10826162;
      FUN_11a98de0();
      ppppppiStack_228 = (int ******)&ppppppiStack_104;
      ppppppiStack_104 = (int ******)0x0;
      ppppppiStack_100 = (int ******)0x0;
      ppppiStack_22c = (int ****)0x10826187;
      FUN_11a98a70();
      ppppiStack_22c = (int ****)0x1082618e;
      ppppiStack_22c = (int ****)(*(code *)(*ppppppiVar13)[4])();
      pppppiStack_230 = (int *****)0x10826198;
      FUN_104e8ee0();
      ppppppiVar13 = ppppppiStack_1b4;
      pppppiStack_230 = (int *****)FUN_108e1e20;
      pcStack_234 = (char *)0x108261ac;
      FUN_10822ec0();
      pppppppiVar7 = (int *******)ppppppiStack_1b8;
      if (ppppppiStack_1b8 != ppppppiVar13) {
        do {
          ppppppiVar13 = *pppppppiVar7;
          if ((ppppppiVar13 != (int ******)0x0) && (ppppppiVar13[0x21] == (int *****)0x0)) {
            pppppiStack_230 = (int *****)0x0;
            pcStack_234 = (char *)0x0;
            ppppppiStack_238 = ppppppiStack_1f4;
            pppppiStack_23c = (int *****)&pppppiStack_214;
            pppppiStack_214 = (int *****)0x0;
            ppppiStack_210 = (int ****)0x0;
            ppppiStack_240 = (int ****)0x108261fb;
            FUN_11a98de0();
            ppppiStack_240 = (int ****)ppppppiVar13[10];
            ppppppiStack_244 = (int ******)0x11dcced8;
            ppppppiStack_248 = (int ******)0x1082620e;
            FUN_104d1550();
            ppppppiStack_248 = (int ******)&DAT_11dccb84;
            ppppppiStack_24c = (int ******)0x10826223;
            FUN_104d14d0();
            ppppiStack_240 = (int ****)ppppppiVar13[0x11];
            ppppppiStack_244 = (int ******)0x11dccee0;
            ppppppiStack_248 = (int ******)0x10826239;
            FUN_104d1550();
            ppppppiStack_248 = (int ******)0x10826241;
            uVar5 = FUN_107cd150();
            ppppppiStack_248 = (int ******)(uVar5 & 0xff);
            ppppppiStack_24c = (int ******)0x11dccf94;
            ppppppiStack_250 = (int ******)0x10826255;
            FUN_104d15e0();
            ppppppiStack_250 = (int ******)&DAT_11d9d32b;
            ppppppiStack_254 = (int ******)0x11dccfa4;
            ppppiStack_258 = (int ****)0x1082626a;
            FUN_104d1670();
            ppppppiStack_228 = (int ******)0x0;
            ppppiStack_240 = (int ****)ppppppiVar13[9];
            ppppppiStack_244 = (int ******)0x10826281;
            CPet__SetName();
            ppppppiStack_244 = (int ******)auStack_d8;
            auStack_d8[0] = 0;
            ppppppiStack_248 = (int ******)0x108262a8;
            ppppppiStack_c8 = ppppppiStack_244;
            ppppppiStack_c4 = ppppppiStack_244;
            FUN_100e5aa0();
            ppppppiStack_248 = ppppppiStack_c8;
            ppppppiStack_24c = (int ******)&DAT_11dbac80;
            ppppppiStack_250 = (int ******)0x108262bf;
            FUN_104d1670();
            if (((int *******)ppppppiStack_c8 != &ppppppiStack_dc) &&
               ((int *******)ppppppiStack_c8 != (int *******)0x0)) {
              ppppppiStack_248 = ppppppiStack_c8;
              ppppppiStack_24c = (int ******)0x108262de;
              FUN_10c3d5d0();
            }
            ppppppiStack_248 = (int ******)ppppppiVar13[0xb];
            ppppppiStack_24c = (int ******)&DAT_11dccf88;
            ppppppiStack_250 = (int ******)0x108262f4;
            FUN_104d1550();
            ppppppiStack_250 = (int ******)ppppppiVar13[0x10];
            ppppppiStack_254 = (int ******)0x11d9d9d4;
            ppppiStack_258 = (int ****)0x10826307;
            FUN_104d1550();
            if (ppppppiVar13[0xd] == (int *****)0x0) {
              ppppppiStack_248 = (int ******)0x0;
            }
            else {
              ppppppiStack_248 = (int ******)0x10826320;
              ppppppiStack_248 = (int ******)FUN_1025b060();
            }
            ppppppiStack_24c = (int ******)&DAT_11dccf8c;
            ppppppiStack_250 = (int ******)0x10826331;
            FUN_104d1550();
            ppppppiStack_250 = (int ******)ppppppiVar13[0x12];
            ppppppiStack_254 = (int ******)0x11dbfa18;
            ppppiStack_258 = (int ****)0x10826344;
            FUN_104d1440();
            ppppiStack_258 = (int ****)0x0;
            piStack_25c = (int *)0x11dca6d0;
            ppppppiStack_260 = (int ******)0x10826356;
            FUN_104d1550();
            ppppppiStack_248 = (int ******)0x0;
            if (ppppppiVar13[0x21] != (int *****)0x0) {
              ppppppiStack_248 = (int ******)(uint)*(byte *)(ppppppiVar13[0x21] + 1);
            }
            ppppppiStack_24c = (int ******)0x11dccf74;
            ppppppiStack_250 = (int ******)0x10826378;
            FUN_104d1550();
            ppppppiStack_250 = (int ******)(uint)*(byte *)(ppppppiVar13 + 0xe);
            ppppppiStack_254 = (int ******)0x11dccf7c;
            ppppiStack_258 = (int ****)0x1082638d;
            FUN_104d15e0();
            ppppiStack_258 = (int ****)ppppppiVar13[0x1a];
            piStack_25c = (int *)0x11dccf64;
            ppppppiStack_260 = (int ******)0x108263a0;
            FUN_104d1670();
            ppppppiStack_260 = (int ******)ppppppiVar13[0xf];
            pppppiStack_264 = (int *****)0x11dccf6c;
            ppppiStack_268 = (int ****)0x108263b3;
            FUN_104d1550();
            pppiStack_80 = (int ***)auStack_90;
            auStack_90[0] = 0;
            ppppiStack_268 = (int ****)0x108263da;
            pppiStack_7c = pppiStack_80;
            FUN_10829c60();
            ppppiStack_268 = (int ****)pppiStack_7c;
            FUN_104d1670();
            ppppppiStack_278 = (int ******)0x10826407;
            FUN_104d1550();
            ppppppiStack_278 = (int ******)ppppppiVar13[0x29];
            pppppiStack_27c = (int *****)0x11dccff0;
            ppppppiStack_280 = (int ******)0x1082641d;
            FUN_104d1670();
            ppppppiStack_9c = (int ******)auStack_ac;
            auStack_ac[0] = 0;
            ppppppiStack_280 = (int ******)0x10826447;
            appppppiStack_98[0] = ppppppiStack_9c;
            FUN_10829c60();
            ppppppiStack_280 = appppppiStack_98[0];
            ppppppiStack_284 = (int ******)0x11dcd000;
            pppppiStack_288 = (int *****)0x1082645e;
            FUN_104d1670();
            ppppppiStack_248 = (int ******)&ppppiStack_22c;
            ppppppiStack_24c = ppppppiStack_11c;
            ppppppiStack_250 = (int ******)0x10826479;
            (*(code *)(*ppppppiStack_124)[0xf])();
            if ((pppppiStack_a0 != &ppppiStack_b4) &&
               ((int ******)pppppiStack_a0 != (int ******)0x0)) {
              ppppppiStack_250 = (int ******)pppppiStack_a0;
              ppppppiStack_254 = (int ******)0x10826495;
              FUN_10c3d5d0();
            }
            if (((int *******)ppppppiStack_84 != appppppiStack_98) &&
               ((int *******)ppppppiStack_84 != (int *******)0x0)) {
              ppppppiStack_250 = ppppppiStack_84;
              ppppppiStack_254 = (int ******)0x108264b4;
              FUN_10c3d5d0();
            }
            if ((int *******)ppppppiStack_238 != (int *******)0x0) {
              ppppppiStack_250 = ppppppiStack_238;
              ppppppiStack_254 = (int ******)0x108264c5;
              FUN_10c3da30();
            }
            ppppppiStack_250 = (int ******)0x108264d1;
            FUN_104d7c10();
          }
          pppppppiVar7 = pppppppiVar7 + 1;
        } while (pppppppiVar7 != (int *******)ppppppiStack_1b4);
      }
      pppppiStack_230 = (int *****)0x0;
      pcStack_234 = "groupId";
      ppppppiStack_238 = (int ******)0x108264f3;
      FUN_104d1550();
      ppppppiStack_238 = (int ******)0x0;
      pppppiStack_23c = (int *****)0x11dca6d0;
      ppppiStack_240 = (int ****)0x10826508;
      FUN_104d1550();
      pppppiStack_230 = (int *****)(uint)(((byte)ppppppiStack_190 & 0x8f) == 10);
      pcStack_234 = auStack_10c;
      ppppppiStack_238 = (int ******)0x11dccfcc;
      pppppiStack_23c = pppppiStack_18c;
      ppppiStack_240 = (int ****)0x10826540;
      (*(code *)(*ppppiStack_194)[5])();
      ppppiStack_240 = (int ****)(uint)(((byte)ppppppiStack_1f8 & 0x8f) == 10);
      ppppppiStack_244 = (int ******)&ppppppiStack_1a4;
      ppppppiStack_248 = (int ******)0x11dccfdc;
      ppppppiStack_24c = ppppppiStack_1f4;
      ppppppiStack_250 = (int ******)0x1082656c;
      (*(code *)(*ppiStack_1fc)[5])();
      ppppppiStack_250 = (int ******)0x0;
      ppppppiStack_254 = (int ******)0x0;
      ppppiStack_258 = ppppiStack_210;
      piStack_25c = (int *)&uStack_19c;
      uStack_19c = 0;
      ppppppiStack_260 = (int ******)0x10826599;
      FUN_11a98de0();
      ppppppiStack_260 = (int ******)&ppppppiStack_124;
      ppppppiStack_124 = (int ******)0x0;
      uStack_120 = 0;
      pppppiStack_264 = (int *****)0x108265be;
      FUN_11a98a70();
      pppppiStack_264 = (int *****)0x108265c7;
      piVar6 = (int *)(*(code *)(*ppppiStack_22c)[6])();
      ppppiStack_268 = (int ****)(piVar6[1] - *piVar6 >> 2);
      pppppiStack_264 = (int *****)extraout_ECX;
      FUN_104eafd0();
      pvVar9 = (void *)*piVar6;
      pppppppiVar7 = (int *******)uStack_19c;
      if ((void *)piVar6[1] != pvVar9) {
        sVar12 = piVar6[1] - (int)pvVar9;
        ppppppiStack_278 = (int ******)0x10826603;
        pvVar9 = memcpy((int *******)uStack_19c,pvVar9,sVar12);
        pppppppiVar7 = (int *******)(sVar12 + (int)pvVar9);
      }
      ppppppiStack_254 = (int ******)pppppppiVar7;
      FUN_10828760();
      pppppppiVar11 = (int *******)uStack_19c;
      if ((int *******)uStack_19c != pppppppiVar7) {
        do {
          ppppppiVar13 = *pppppppiVar11;
          if (ppppppiVar13 != (int ******)0x0) {
            ppppppiStack_278 = (int ******)&ppppppiStack_250;
            ppppppiStack_250 = (int ******)0x0;
            ppppppiStack_24c = (int ******)0x0;
            pppppiStack_27c = (int *****)0x1082665e;
            FUN_11a98de0();
            pppppiStack_27c = ppppppiVar13[10];
            ppppppiStack_280 = (int ******)0x11dcced8;
            ppppppiStack_284 = (int ******)0x10826671;
            FUN_104d1550();
            ppppppiStack_284 = (int ******)&DAT_11dccb84;
            pppppiStack_288 = (int *****)0x10826686;
            FUN_104d14d0();
            pppppiStack_27c = ppppppiVar13[0x11];
            ppppppiStack_280 = (int ******)0x11dccee0;
            ppppppiStack_284 = (int ******)0x1082669c;
            FUN_104d1550();
            ppppiStack_268 = (int ****)ppppppiVar13[0x11];
            if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
               (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 == (int *)0x0)) {
LAB_108266e1:
              ppppppiStack_248 = (int ******)((uint)ppppppiStack_248 & 0xffffff00);
            }
            else {
              pppppiStack_27c = (int *****)0x108266cc;
              iVar4 = (**(code **)(*piVar6 + 0xb4))();
              if (iVar4 == 0) goto LAB_108266e1;
              ppppppiStack_248 =
                   (int ******)
                   CONCAT31(ppppppiStack_248._1_3_,
                            *(int ******)(iVar4 + 0x2d78) != (int *****)ppppiStack_268);
            }
            pppppiStack_27c = (int *****)ppppppiStack_248;
            ppppppiStack_280 = (int ******)0x11dccf94;
            ppppppiStack_284 = (int ******)0x108266fa;
            FUN_104d15e0();
            ppppppiStack_284 = (int ******)&DAT_11d9d32b;
            pppppiStack_288 = (int *****)0x11dccfa4;
            ppppppiStack_28c = (int ******)0x1082670f;
            FUN_104d1670();
            ppppiStack_268 = (int ****)0x0;
            pppppiStack_27c = ppppppiVar13[9];
            ppppppiStack_280 = (int ******)0x10826726;
            CPet__SetName();
            ppppppiStack_280 = &pppppiStack_114;
            pppppiStack_114 = (int *****)((uint)pppppiStack_114 & 0xffffff00);
            ppppppiStack_284 = (int ******)0x1082674d;
            ppppppiStack_104 = ppppppiStack_280;
            ppppppiStack_100 = ppppppiStack_280;
            FUN_100e5aa0();
            ppppppiStack_284 = ppppppiStack_104;
            pppppiStack_288 = (int *****)&DAT_11dbac80;
            ppppppiStack_28c = (int ******)0x10826764;
            FUN_104d1670();
            if ((ppppppiStack_104 != &pppppiStack_118) &&
               ((int *******)ppppppiStack_104 != (int *******)0x0)) {
              ppppppiStack_284 = ppppppiStack_104;
              pppppiStack_288 = (int *****)0x10826783;
              FUN_10c3d5d0();
            }
            ppppppiStack_284 = (int ******)ppppppiVar13[0xb];
            pppppiStack_288 = (int *****)&DAT_11dccf88;
            ppppppiStack_28c = (int ******)0x10826799;
            FUN_104d1550();
            ppppppiStack_28c = (int ******)ppppppiVar13[0x10];
            FUN_104d1550();
            if (ppppppiVar13[0xd] == (int *****)0x0) {
              ppppppiStack_284 = (int ******)0x0;
            }
            else {
              ppppppiStack_284 = (int ******)0x108267c5;
              ppppppiStack_284 = (int ******)FUN_1025b060();
            }
            pppppiStack_288 = (int *****)&DAT_11dccf8c;
            ppppppiStack_28c = (int ******)0x108267d6;
            FUN_104d1550();
            ppppppiStack_28c = (int ******)0x0;
            FUN_104d1550();
            FUN_104d1550();
            FUN_104d15e0();
            FUN_104d1550();
            ppppppiStack_284 = (int ******)&ppppiStack_268;
            pppppiStack_288 = pppppiStack_140;
            ppppppiStack_28c = (int ******)0x1082683d;
            (**(code **)(*piStack_148 + 0x3c))();
            if ((int *****)ppppiStack_258 != (int *****)0x0) {
              FUN_10c3da30();
            }
            pppppppiVar7 = (int *******)ppppppiStack_254;
            if (((uint)ppppppiStack_24c >> 6 & 1) != 0) {
              (*(code *)(*ppppppiStack_250)[2])();
              pppppppiVar7 = (int *******)ppppppiStack_254;
            }
          }
          pppppppiVar11 = pppppppiVar11 + 1;
        } while (pppppppiVar11 != pppppppiVar7);
      }
      FUN_104d1550();
      ppppppiStack_278 = (int ******)0x11dca6d0;
      pppppiStack_27c = (int *****)0x108268a4;
      FUN_104d1550();
      piVar6 = (int *)(uint)(((byte)ppppppiStack_1b4 & 0x8f) == 10);
      ppppppiStack_278 = ppppppiStack_1b0;
      pppppiStack_27c = (int *****)0x108268dc;
      (*(code *)(*ppppppiStack_1b8)[5])();
      pppppiStack_27c = (int *****)(uint)(((byte)pcStack_234 & 0x8f) == 10);
      ppppppiStack_280 = (int ******)&ppppppiStack_1c8;
      ppppppiStack_284 = (int ******)0x11dccfb0;
      pppppiStack_288 = pppppiStack_230;
      ppppppiStack_28c = (int ******)0x10826908;
      (**(code **)((int)*ppppppiStack_238 + 0x14))();
      ppppppiStack_294 = ppppppiStack_24c;
      ppppppiStack_28c = (int ******)0x0;
      pppppiStack_230 = (int *****)0x0;
      ppppiStack_22c = (int ****)0x0;
      FUN_11a98de0();
      ppppppiStack_1a0 = (int ******)0x0;
      uStack_19c = uStack_19c & 0xffffffff00000000;
      FUN_11a98a70();
      puVar8 = (undefined4 *)(*(code *)(*ppppiStack_268)[5])();
      FUN_10828380();
      pvVar9 = (void *)*puVar8;
      pppppppiVar7 = (int *******)ppppppiStack_190;
      if ((void *)puVar8[1] != pvVar9) {
        sVar12 = (int)puVar8[1] - (int)pvVar9;
        ppppppiStack_2b4 = (int ******)0x10826996;
        pvVar9 = memcpy(ppppppiStack_190,pvVar9,sVar12);
        pppppppiVar7 = (int *******)(sVar12 + (int)pvVar9);
      }
      FUN_108287d0();
      for (pppppppiVar11 = (int *******)ppppppiStack_190; pppppppiVar11 != pppppppiVar7;
          pppppppiVar11 = pppppppiVar11 + 1) {
        ppppppiVar13 = *pppppppiVar11;
        if (ppppppiVar13 != (int ******)0x0) {
          ppppppiStack_2b4 = (int ******)&ppppppiStack_28c;
          ppppppiStack_28c = (int ******)0x0;
          pppppiStack_288 = (int *****)0x0;
          ppppiStack_2b8 = (int ****)0x108269f1;
          FUN_11a98de0();
          ppppiStack_2b8 = (int ****)ppppppiVar13[10];
          pppppiStack_2bc = (int *****)0x11dcced8;
          pppppiStack_2c0 = (int *****)0x10826a04;
          FUN_104d1550();
          uStack_15c = *(ulonglong *)(ppppppiVar13 + 2);
          pppppiStack_164 = (int *****)0x0;
          pppppiStack_160 = (int *****)0x5;
          ppppiStack_2b8 = (int ****)(uint)(((byte)&pppppiStack_230 & 0x8f) == 10);
          pppppiStack_2bc = (int *****)&pppppiStack_164;
          pppppiStack_2c0 = (int *****)&DAT_11dccb84;
          ppppppiStack_2c8 = (int ******)0x10826a57;
          ppppppiStack_2c4 = ppppppiStack_294;
          (*(code *)ppppppiStack_1a0[5])();
          if (((uint)pppppiStack_170 >> 6 & 1) != 0) {
            ppppppiStack_2cc = (int ******)&piStack_174;
            ppppppiStack_2c8 = (int ******)pppppiStack_16c;
            ppppppiStack_2d0 = (int ******)0x10826a80;
            (**(code **)(*piStack_174 + 8))();
          }
          ppppppiStack_2c8 = (int ******)ppppppiVar13[0x11];
          ppppppiStack_2cc = (int ******)0x11dccee0;
          ppppppiStack_2d0 = (int ******)0x10826a93;
          FUN_104d1550();
          ppppppiStack_2b4 = (int ******)ppppppiVar13[0x11];
          if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
             (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) {
LAB_10826ad8:
            ppppppiStack_294 = (int ******)((uint)ppppppiStack_294 & 0xffffff00);
          }
          else {
            ppppppiStack_2c8 = (int ******)0x10826ac3;
            iVar4 = (**(code **)(*piVar1 + 0xb4))();
            if (iVar4 == 0) goto LAB_10826ad8;
            uVar5 = (uint)ppppppiStack_294 >> 8;
            ppppppiStack_294 =
                 (int ******)
                 CONCAT31((int3)uVar5,*(int *******)(iVar4 + 0x2d78) != ppppppiStack_2b4);
          }
          ppppppiStack_2c8 = ppppppiStack_294;
          ppppppiStack_2cc = (int ******)0x11dccf94;
          ppppppiStack_2d0 = (int ******)0x10826af1;
          FUN_104d15e0();
          ppppppiStack_2d0 = (int ******)&DAT_11d9d32b;
          pppppiStack_2d4 = (int *****)0x11dccfa4;
          ppppiStack_2d8 = (int ****)0x10826b06;
          FUN_104d1670();
          ppppppiStack_2b4 = (int ******)0x0;
          ppppppiStack_2c8 = (int ******)ppppppiVar13[9];
          ppppppiStack_2cc = (int ******)0x10826b1d;
          CPet__SetName();
          ppppppiStack_2cc = &pppppiStack_160;
          pppppiStack_160 = (int *****)((uint)pppppiStack_160 & 0xffffff00);
          ppppppiStack_2d0 = (int ******)0x10826b44;
          ppppppiStack_150 = ppppppiStack_2cc;
          ppppppiStack_14c = ppppppiStack_2cc;
          FUN_100e5aa0();
          ppppppiStack_2d0 = ppppppiStack_150;
          pppppiStack_2d4 = (int *****)&DAT_11dbac80;
          ppppiStack_2d8 = (int ****)0x10826b5b;
          FUN_104d1670();
          if ((ppppppiStack_150 != &pppppiStack_164) &&
             ((int *******)ppppppiStack_150 != (int *******)0x0)) {
            ppppppiStack_2d0 = ppppppiStack_150;
            pppppiStack_2d4 = (int *****)0x10826b7a;
            FUN_10c3d5d0();
          }
          ppppppiStack_2d0 = (int ******)ppppppiVar13[0xb];
          pppppiStack_2d4 = (int *****)&DAT_11dccf88;
          ppppiStack_2d8 = (int ****)0x10826b90;
          FUN_104d1550();
          ppppiStack_2d8 = (int ****)ppppppiVar13[0x10];
          ppppppiStack_2dc = (int ******)0x11d9d9d4;
          ppppppiStack_2e0 = (int ******)0x10826ba3;
          FUN_104d1550();
          if (ppppppiVar13[0xd] == (int *****)0x0) {
            ppppppiStack_2d0 = (int ******)0x0;
          }
          else {
            ppppppiStack_2d0 = (int ******)0x10826bbc;
            ppppppiStack_2d0 = (int ******)FUN_1025b060();
          }
          pppppiStack_2d4 = (int *****)&DAT_11dccf8c;
          ppppiStack_2d8 = (int ****)0x10826bcd;
          FUN_104d1550();
          ppppiStack_2d8 = (int ****)0x0;
          ppppppiStack_2dc = (int ******)0x11dca6d0;
          ppppppiStack_2e0 = (int ******)0x10826bdf;
          FUN_104d1550();
          ppppppiStack_2e0 = (int ******)0xffffffff;
          ppppppiStack_2e4 = (int ******)0x11dccf74;
          ppuStack_2e8 = (uint **)0x10826bf1;
          FUN_104d1550();
          ppuStack_2e8 = (uint **)(uint)*(byte *)(ppppppiVar13 + 0xe);
          pppppiStack_2ec = (int *****)0x11dccf7c;
          FUN_104d15e0();
          FUN_104d1550();
          ppppppiStack_2d0 = (int ******)&ppppppiStack_2b4;
          pppppiStack_2d4 = pppppiStack_1cc;
          ppppiStack_2d8 = (int ****)0x10826c34;
          (**(code **)(*piStack_1d4 + 0x3c))();
          if ((int *******)ppppppiStack_294 != (int *******)0x0) {
            FUN_10c3da30();
          }
          if (((uint)pppppiStack_288 >> 6 & 1) != 0) {
            (*(code *)(*ppppppiStack_28c)[2])();
          }
        }
      }
      uStack_154 = 0;
      ppppppiStack_150 = (int ******)0x3;
      ppppppiStack_14c = (int ******)0xffffffff;
      uVar5 = (uint)(((byte)ppppppiStack_248 & 0x8f) == 10);
      pcVar17 = "groupId";
      ppppiStack_2b8 = (int ****)0x10826cbe;
      ppppppiStack_2b4 = ppppppiStack_244;
      (*(code *)(*ppppppiStack_24c)[5])();
      if (((uint)pppppiStack_160 >> 6 & 1) != 0) {
        pppppiStack_2bc = (int *****)&pppppiStack_164;
        ppppiStack_2b8 = (int ****)(undefined4)uStack_15c;
        pppppiStack_2c0 = (int *****)0x10826ce7;
        (*(code *)(*pppppiStack_164)[2])();
      }
      pppppiStack_164 = (int *****)0x0;
      pppppiStack_160 = (int *****)0x3;
      uStack_15c = CONCAT44(uStack_15c._4_4_,2);
      ppppiStack_2b8 = (int ****)(uint)(((byte)ppppiStack_258 & 0x8f) == 10);
      pppppiStack_2bc = (int *****)&pppppiStack_164;
      pppppiStack_2c0 = (int *****)0x11dca6d0;
      ppppppiStack_2c4 = ppppppiStack_254;
      ppppppiStack_2c8 = (int ******)0x10826d34;
      (**(code **)(*piStack_25c + 0x14))();
      if (((uint)pppppiStack_170 >> 6 & 1) != 0) {
        ppppppiStack_2cc = (int ******)&piStack_174;
        ppppppiStack_2c8 = (int ******)pppppiStack_16c;
        ppppppiStack_2d0 = (int ******)0x10826d5d;
        (**(code **)(*piStack_174 + 8))();
      }
      ppppppiStack_2c8 = (int ******)(uint)(((byte)ppppiStack_268 & 0x8f) == 10);
      ppppppiStack_2cc = &pppppiStack_1cc;
      ppppppiStack_2d0 = (int ******)0x11dccfcc;
      pppppiStack_2d4 = pppppiStack_264;
      ppppiStack_2d8 = (int ****)0x10826d89;
      (**(code **)(*piVar6 + 0x14))();
      ppppiStack_2d8 = (int ****)(uint)(((byte)pppppppiVar7 & 0x8f) == 10);
      ppppppiStack_2dc = &pppppiStack_27c;
      ppppppiStack_2e0 = (int ******)0x11dccfbc;
      ppppppiStack_2e4 = ppppppiStack_28c;
      ppuStack_2e8 = (uint **)0x10826db2;
      (*(code *)(*ppppppiStack_294)[5])();
      ppuStack_2e8 = &puStack_20c;
      puStack_20c = (uint *)0x0;
      piStack_208 = (int *)0x0;
      pppppiStack_2ec = (int *****)0x10826dd7;
      FUN_11a98a70();
      pppppiStack_2ec = (int *****)0x10826de0;
      puVar8 = (undefined4 *)(*(code *)(*ppppppiStack_2b4)[7])();
      pppppiStack_2ec = (int *****)extraout_ECX_00;
      FUN_10828460();
      pvVar9 = (void *)*puVar8;
      uStack_300 = uVar5;
      if ((void *)puVar8[1] != pvVar9) {
        sVar12 = (int)puVar8[1] - (int)pvVar9;
        uStack_300 = 0x10826e16;
        pvVar9 = memcpy(ppppppiStack_13c,pvVar9,sVar12);
        pppppppiVar11 = (int *******)(sVar12 + (int)pvVar9);
        ppppppiStack_2dc = ppppppiStack_13c;
        ppppppiStack_2e0 = (int ******)pppppppiVar11;
        uStack_300 = uVar5;
        if ((int *******)ppppppiStack_13c != pppppppiVar11) {
          do {
            ppppppiVar13 = (int ******)*ppppppiStack_2dc;
            pppppiStack_2c0 = (int *****)ppppppiVar13;
            if (ppppppiVar13 != (int ******)0x0) {
              ppppppiVar16 = (int ******)0x0;
              uVar15 = 0;
              uStack_300 = (int)&uStack_15c + 4;
              uStack_15c = uStack_15c & 0xffffffff;
              uStack_154 = 0;
              iStack_304 = 0x10826e72;
              pppppppiVar14 = (int *******)ppppppiStack_2b4;
              FUN_11a98de0();
              iStack_304 = (int)&uStack_19c + 4;
              uStack_19c = uStack_19c & 0xffffffff;
              ppppiStack_194 = (int ****)0x0;
              ppppppiStack_308 = (int ******)0x10826e97;
              FUN_11a98a70();
              pppppppiVar11 = pppppppiVar7;
              if (pppppppiVar7 != (int *******)ppppppiStack_28c) {
                do {
                  ppppppiVar13 = *pppppppiVar11;
                  if (((ppppppiVar13 != (int ******)0x0) && (ppppppiVar13[0x21] != (int *****)0x0))
                     && (*(char *)(ppppppiVar13[0x21] + 1) == *(char *)(pppppiStack_2d4 + 1))) {
                    ppppppiStack_308 = (int ******)0x0;
                    ppppppiStack_30c = (int ******)0x0;
                    ppppppiStack_310 = ppppppiStack_2cc;
                    ppppppiStack_314 = &pppppiStack_2ec;
                    pppppiStack_2ec = (int *****)0x0;
                    ppuStack_2e8 = (uint **)0x0;
                    pcStack_318 = (char *)0x10826efc;
                    FUN_11a98de0();
                    pppppiStack_324 = (int *****)ppppppiVar16;
                    pppppiStack_18c = ppppppiVar13[10];
                    ppppiStack_194 = (int ****)0x0;
                    ppppppiStack_190 = (int ******)0x3;
                    pcStack_318 = (char *)(uint)(((byte)uVar15 & 0x8f) == 10);
                    pppppiStack_31c = &ppppiStack_194;
                    puStack_320 = (uint *)0x11dcced8;
                    uStack_328 = 0x10826f48;
                    ppppppiVar16 = (int ******)pppppiStack_324;
                    (*(code *)(*pppppppiVar14)[5])();
                    if (((uint)ppppppiStack_1a0 >> 6 & 1) != 0) {
                      ppppppiStack_32c = (int ******)&ppppppiStack_1a4;
                      uStack_328 = (uint)(int *******)uStack_19c;
                      puStack_330 = (undefined *)0x10826f71;
                      (*(code *)(*ppppppiStack_1a4)[2])();
                    }
                    uStack_19c = *(ulonglong *)(ppppppiVar13 + 2);
                    ppppppiStack_1a4 = (int ******)0x0;
                    ppppppiStack_1a0 = (int ******)&DAT_00000005;
                    uStack_328 = (uint)(((byte)ppppppiStack_308 & 0x8f) == 10);
                    ppppppiStack_32c = (int ******)&ppppppiStack_1a4;
                    puStack_330 = &DAT_11dccb84;
                    iStack_334 = iStack_304;
                    (**(code **)((int)*ppppppiStack_30c + 0x14))();
                    if (((uint)ppppppiStack_1b0 >> 6 & 1) != 0) {
                      (*(code *)(*ppppppiStack_1b4)[2])(&ppppppiStack_1b4,ppppiStack_1ac);
                    }
                    ppppiStack_1ac = (int ****)ppppppiVar13[0x11];
                    ppppppiStack_1b4 = (int ******)0x0;
                    ppppppiStack_1b0 = (int ******)0x3;
                    (*(code *)(*pppppiStack_31c)[5])
                              (ppppppiStack_314,"worldServerId",&ppppppiStack_1b4,
                               ((byte)pcStack_318 & 0x8f) == 10);
                    if ((uStack_1c0 >> 6 & 1) != 0) {
                      (*(code *)(*ppppppiStack_1c4)[2])(&ppppppiStack_1c4,pppppiStack_1bc);
                    }
                    ppppppiStack_310 = (int ******)0x0;
                    CPet__SetName(ppppppiVar13[9]);
                    ppppppiStack_1b8 = (int ******)&ppppppiStack_1c8;
                    ppppppiStack_1c8 = (int ******)((uint)ppppppiStack_1c8 & 0xffffff00);
                    ppppppiStack_1b4 = ppppppiStack_1b8;
                    FUN_100e5aa0(ppppppiStack_1b8);
                    FUN_104d1670(&DAT_11dbac80,ppppppiStack_1b8);
                    if ((ppppppiStack_1b8 != &pppppiStack_1cc) &&
                       ((int *******)ppppppiStack_1b8 != (int *******)0x0)) {
                      FUN_10c3d5d0(ppppppiStack_1b8);
                    }
                    FUN_104d1550(&DAT_11dccf88,ppppppiVar13[0xb]);
                    FUN_104d1550("HRLevel",ppppppiVar13[0x10]);
                    if (ppppppiVar13[0xd] == (int *****)0x0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = FUN_1025b060();
                    }
                    FUN_104d1550(&DAT_11dccf8c,uVar10);
                    FUN_104d1440("intimate",ppppppiVar13[0x12]);
                    FUN_104d1550("groupType",0);
                    uVar2 = 0;
                    if (ppppppiVar13[0x21] != (int *****)0x0) {
                      uVar2 = *(undefined1 *)(ppppppiVar13[0x21] + 1);
                    }
                    FUN_104d1550("groupId",uVar2);
                    FUN_104d15e0("isOnline",*(undefined1 *)(ppppppiVar13 + 0xe));
                    FUN_104d1550("lineID",ppppppiVar13[0xf]);
                    FUN_104d1670("strMood",ppppppiVar13[0x1a]);
                    ppiStack_1fc = (int **)((uint)ppiStack_1fc & 0xffffff00);
                    FUN_10829c60();
                    FUN_104d1670("guildName",&ppiStack_1fc);
                    FUN_104d1550("nTeamID",ppppppiVar13[0x22]);
                    FUN_104d1670("strHunterStar",ppppppiVar13[0x29]);
                    pppppiStack_170 = &ppppiStack_180;
                    ppppiStack_180 = (int ****)((uint)ppppiStack_180 & 0xffffff00);
                    pppppiStack_16c = pppppiStack_170;
                    FUN_10829c60();
                    FUN_104d1670("clanName",pppppiStack_16c);
                    (**(code **)(*apiStack_1e4[0] + 0x3c))(pppppiStack_1dc,&iStack_334);
                    if (((int *******)ppppppiStack_124 != appppppiStack_138) &&
                       ((int *******)ppppppiStack_124 != (int *******)0x0)) {
                      ppppppiStack_308 = ppppppiStack_124;
                      ppppppiStack_30c = (int ******)0x10827287;
                      FUN_10c3d5d0();
                    }
                    if (((int *******)ppppppiStack_1a0 != &ppppppiStack_1b4) &&
                       ((int *******)ppppppiStack_1a0 != (int *******)0x0)) {
                      ppppppiStack_308 = ppppppiStack_1a0;
                      ppppppiStack_30c = (int ******)0x108272a6;
                      FUN_10c3d5d0();
                    }
                    if ((int *******)ppppppiStack_2d0 != (int *******)0x0) {
                      ppppppiStack_308 = ppppppiStack_2d0;
                      ppppppiStack_30c = (int ******)0x108272b7;
                      FUN_10c3da30();
                    }
                    if (((uint)ppuStack_2e8 >> 6 & 1) != 0) {
                      ppppppiStack_30c = &pppppiStack_2ec;
                      ppppppiStack_308 = ppppppiStack_2e4;
                      ppppppiStack_310 = (int ******)0x108272d7;
                      (*(code *)(*pppppiStack_2ec)[2])();
                    }
                  }
                  pppppppiVar11 = pppppppiVar11 + 1;
                  ppppppiVar13 = (int ******)pppppiStack_2d4;
                } while (pppppppiVar11 != (int *******)ppppppiStack_28c);
              }
              ppppppiStack_308 = (int ******)ppppppiVar13[7];
              ppppppiStack_2d0 = (int ******)0x0;
              ppppppiStack_30c = (int ******)0x108272fc;
              CPet__SetName();
              ppppppiStack_30c = (int ******)&ppppppiStack_1b8;
              ppppppiStack_1b8 = (int ******)((uint)ppppppiStack_1b8 & 0xffffff00);
              ppppppiStack_310 = (int ******)0x10827323;
              ppppppiStack_1a8 = ppppppiStack_30c;
              ppppppiStack_1a4 = ppppppiStack_30c;
              FUN_100e5aa0();
              ppppppiStack_310 = ppppppiStack_1a8;
              ppppppiStack_314 = (int ******)0x11dca5ec;
              pcStack_318 = (char *)0x1082733d;
              FUN_104d1670();
              if ((ppppppiStack_1a8 != &pppppiStack_1bc) &&
                 ((int *******)ppppppiStack_1a8 != (int *******)0x0)) {
                ppppppiStack_310 = ppppppiStack_1a8;
                ppppppiStack_314 = (int ******)0x1082735c;
                FUN_10c3d5d0();
              }
              ppppppiStack_310 = (int ******)(uint)*(byte *)(ppppppiVar13 + 1);
              ppppppiStack_314 = (int ******)0x11dccf74;
              pcStack_318 = (char *)0x10827377;
              FUN_104d1550();
              pcStack_318 = (char *)0x1;
              pppppiStack_31c = (int *****)0x11dca6d0;
              puStack_320 = (uint *)0x1082738c;
              FUN_104d1550();
              ppppppiStack_310 = (int ******)(uint)(((byte)pppppiStack_170 & 0x8f) == 10);
              ppppppiStack_314 = (int ******)&ppppppiStack_1a4;
              pcStack_318 = "groupDataList";
              pppppiStack_31c = pppppiStack_16c;
              puStack_320 = (uint *)0x108273c4;
              (**(code **)(*piStack_174 + 0x14))();
              puStack_320 = &uStack_184;
              pppppiStack_324 = pppppiStack_23c;
              uStack_328 = 0x108273df;
              (*(code *)(*ppppppiStack_244)[0xf])();
              if ((int ******)pppppiStack_2bc != (int ******)0x0) {
                FUN_10c3da30();
              }
              if ((uStack_184 >> 6 & 1) != 0) {
                (**(code **)(*piStack_188 + 8))();
                piStack_188 = (int *)0x0;
              }
              uStack_184 = 0;
              pppppppiVar11 = (int *******)ppppppiStack_2e0;
              if ((uStack_154 >> 6 & 1) != 0) {
                (**(code **)(*uStack_15c._4_4_ + 8))();
                pppppppiVar11 = (int *******)ppppppiStack_2e0;
              }
            }
            ppppppiStack_2dc = ppppppiStack_2dc + 1;
            uStack_300 = uVar5;
          } while ((int *******)ppppppiStack_2dc != pppppppiVar11);
        }
      }
      ppppppiVar13 = ppppppiStack_13c;
      iStack_304 = 0x108274a2;
      (**(code **)(*(int *)pcVar17 + 0x14))();
      ppppppiVar16 = local_fc;
      if (((uint)local_fc[1] >> 6 & 1) != 0) {
        ppppppiStack_1f4 = (int ******)local_fc[2];
        ppppppiStack_1f8 = local_fc;
        ppiStack_1fc = (int **)0x108274be;
        (*(code *)(**local_fc)[2])();
        *ppppppiVar16 = (int *****)0x0;
      }
      ppppppiVar16[1] = (int *****)0x2;
      *(undefined1 *)(ppppppiVar16 + 2) = 1;
      if ((int *******)ppppppiVar13 != (int *******)0x0) {
        ppppppiStack_1f4 = ppppppiVar13;
        ppppppiStack_1f8 = (int ******)0x108274d9;
        FUN_10c3d5d0();
      }
      if (((uint)pppppiStack_114 >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_118;
        ppppppiStack_1f4 = ppppppiStack_110;
        ppiStack_1fc = (int **)0x10827505;
        (*(code *)(*pppppiStack_118)[2])();
        pppppiStack_118 = (int *****)0x0;
      }
      pppppiStack_114 = (int *****)0x0;
      if ((int *******)ppppppiStack_dc != (int *******)0x0) {
        ppppppiStack_1f4 = ppppppiStack_dc;
        ppppppiStack_1f8 = (int ******)0x1082752c;
        FUN_10c3d5d0();
      }
      if ((uStack_f4 >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_f8;
        ppppppiStack_1f4 = ppppppiStack_f0;
        ppiStack_1fc = (int **)0x10827558;
        (*(code *)(*pppppiStack_f8)[2])();
        pppppiStack_f8 = (int *****)0x0;
      }
      uStack_f4 = 0;
      if (((uint)ppppiStack_194 >> 6 & 1) != 0) {
        ppppppiStack_1f8 = (int ******)((int)&uStack_19c + 4);
        ppppppiStack_1f4 = ppppppiStack_190;
        ppiStack_1fc = (int **)0x1082758b;
        (**(code **)(*uStack_19c._4_4_ + 8))();
        uStack_19c = uStack_19c & 0xffffffff;
      }
      ppppiStack_194 = (int ****)0x0;
      if ((int *******)ppppppiStack_124 != (int *******)0x0) {
        ppppppiStack_1f4 = ppppppiStack_124;
        ppppppiStack_1f8 = (int ******)0x108275ac;
        FUN_10c3d5d0();
      }
      if (((uint)ppppiStack_b4 >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_b8;
        ppppppiStack_1f4 = ppppppiStack_b0;
        ppiStack_1fc = (int **)0x108275d8;
        (*(code *)(*pppppiStack_b8)[2])();
        pppppiStack_b8 = (int *****)0x0;
      }
      ppppiStack_b4 = (int ****)0x0;
      if (((uint)ppppppiStack_13c >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_140;
        ppppppiStack_1f4 = appppppiStack_138[0];
        ppiStack_1fc = (int **)0x10827617;
        (*(code *)(*pppppiStack_140)[2])();
        pppppiStack_140 = (int *****)0x0;
      }
      ppppppiStack_13c = (int ******)0x0;
      if ((int *******)ppppppiStack_17c != (int *******)0x0) {
        ppppppiStack_1f4 = ppppppiStack_17c;
        ppppppiStack_1f8 = (int ******)0x1082763b;
        FUN_10c3d5d0();
      }
      if ((uStack_cc >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_d0;
        ppppppiStack_1f4 = ppppppiStack_c8;
        ppiStack_1fc = (int **)0x10827667;
        (*(code *)(*pppppiStack_d0)[2])();
        pppppiStack_d0 = (int *****)0x0;
      }
      uStack_cc = 0;
      if ((uStack_154 >> 6 & 1) != 0) {
        ppppppiStack_1f8 = (int ******)((int)&uStack_15c + 4);
        ppppppiStack_1f4 = ppppppiStack_150;
        ppiStack_1fc = (int **)0x108276a6;
        (**(code **)(*uStack_15c._4_4_ + 8))();
        uStack_15c = uStack_15c & 0xffffffff;
      }
      uStack_154 = 0;
      if (((uint)pppppiStack_16c >> 6 & 1) != 0) {
        ppppppiStack_1f8 = &pppppiStack_170;
        ppppppiStack_1f4 = ppppppiStack_168;
        ppiStack_1fc = (int **)0x108276e5;
        (*(code *)(*pppppiStack_170)[2])();
        pppppiStack_170 = (int *****)0x0;
      }
      pppppiStack_16c = (int *****)0x0;
      if (((uint)ppppiStack_1ac >> 6 & 1) != 0) {
        ppppppiStack_1f8 = (int ******)&ppppppiStack_1b0;
        ppppppiStack_1f4 = ppppppiStack_1a8;
        ppiStack_1fc = (int **)0x10827718;
        (*(code *)(*ppppppiStack_1b0)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10834d00 @ 10834d00  size=951 ===== */
// calls: CInfoRecord::GetModelString, memset
// strings:
//   "sys_show_damage_number"
//   "g_selfGuildName"
//   "cl_ShowLocalPlayerNamePad"
//   "cl_MHFCCameraPitchControlByMouseZ"
//   "g_firstAtkRotEnable"
//   "g_otherAtkRotEnable"
//   "g_iCommonResetCameraType"
//   "cl_ShowBossDeadGlow"
//   "cl_TaskTraceMode"
//   "pl_autoHolster"
//   "g_npc_language"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""sys_show_damage_number""
     ""g_selfGuildName""
     ""cl_ShowLocalPlayerNamePad""
     ""cl_MHFCCameraPitchControlByMouseZ""
     ""g_firstAtkRotEnable""
     ""g_otherAtkRotEnable""
     ""g_iCommonResetCameraType""
     ""cl_ShowBossDeadGlow""
     ""cl_TaskTraceMode""
     ""pl_autoHolster"" */

void FUN_10834d00(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_1a4;
  undefined4 local_1a0;
  char local_19c [404];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(param_3 + 8);
  CInfoRecord__GetModelString(&DAT_11d9e074);
  if (iVar3 == 1) {
    FUN_1083ab70(&DAT_11d9e064,1);
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("sys_show_damage_number");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_selfGuildName");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowLocalPlayerNamePad");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))
                              ("cl_MHFCCameraPitchControlByMouseZ");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_firstAtkRotEnable");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_otherAtkRotEnable");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_iCommonResetCameraType");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowBossDeadGlow");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_TaskTraceMode");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("pl_autoHolster");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_npc_language");
    if (piVar1 == (int *)0x0) goto LAB_10834ffa;
    uVar5 = 2;
  }
  else {
    FUN_1083ab70(&DAT_11d9e074,1);
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("sys_show_damage_number");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_selfGuildName");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowLocalPlayerNamePad");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))
                              ("cl_MHFCCameraPitchControlByMouseZ");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_firstAtkRotEnable");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_otherAtkRotEnable");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_iCommonResetCameraType");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowBossDeadGlow");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_TaskTraceMode");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(1);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("pl_autoHolster");
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0);
    }
    piVar1 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_npc_language");
    if (piVar1 == (int *)0x0) goto LAB_10834ffa;
    uVar5 = 1;
  }
  (**(code **)(*piVar1 + 0x14))(uVar5);
LAB_10834ffa:
  memset(local_19c,0,0x191);
  pcVar2 = local_19c;
  local_1a0 = 8;
  iVar3 = 0x191;
  iVar4 = local_1a4 - (int)pcVar2;
  while ((iVar3 != -0x7ffffe6d && (pcVar2[iVar4] != '\0'))) {
    *pcVar2 = pcVar2[iVar4];
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
LAB_1083504f:
      pcVar2 = pcVar2 + -1;
LAB_10835050:
      *pcVar2 = '\0';
      FUN_113f3640(&local_1a0);
      FUN_111ac240();
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
      piVar1 = (int *)(local_1a4 + -0xc);
      if ((-1 < *piVar1) && (iVar3 = FUN_10c3dad0(piVar1), iVar3 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1a4 + -4));
        FUN_10c3d900(piVar1);
      }
      FUN_11a89daa();
      return;
    }
  }
  if (iVar3 != 0) goto LAB_10835050;
  goto LAB_1083504f;
}



