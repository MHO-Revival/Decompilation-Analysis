/* ===== FUN_109f58d0 @ 109f58d0  size=158 ===== */
// calls: CCommerceBoatInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CCommerceBoatInfo"

/* [RE-AUTO c0]
   calls: CCommerceBoatInfo::GetManagers
   strings:
     ""CCommerceBoatInfo"" */

undefined4 FUN_109f58d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de5758;
  puVar2 = (undefined4 *)CCommerceBoatInfo__GetInfoManagerSingleton();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CCommerceBoatInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c926c & 1) == 0) {
        DAT_123c926c = DAT_123c926c | 1;
        FUN_109fb5c0();
        FUN_11a8911f(&LAB_11c7d8d0);
      }
      puVar2 = &DAT_123c9270;
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



/* ===== FUN_109f5a80 @ 109f5a80  size=158 ===== */
// calls: CCommerceInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CCommerceInfo"

/* [RE-AUTO c0]
   calls: CCommerceInfo::GetManagers
   strings:
     ""CCommerceInfo"" */

undefined4 FUN_109f5a80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de5760;
  puVar2 = (undefined4 *)CCommerceInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CCommerceInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c92a8 & 1) == 0) {
        DAT_123c92a8 = DAT_123c92a8 | 1;
        FUN_109fb670();
        FUN_11a8911f(&LAB_11c7d870);
      }
      puVar2 = &DAT_123c92ac;
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



/* ===== FUN_109f6970 @ 109f6970  size=1816 ===== */
// calls: CCommerceBoatInfo::ProcessBoatEntries
// strings:
//   "bossTime"
//   "currentBoss"
//   "bossNum"
//   "loginTimes"
//   "transportNum"
//   "selfPlayerID"
//   "selectTransportShipdatas"
//   "mh.view.HunterTeamBattle.Data.HunterGroupShipEntryVo"
//   "shipID"
//   "isUnlock"
//   "hunterShipName"
//   "hunterGroupShipIcon"
//   "goldType"
//   "goldNum"
//   "requireItemCounts"
//   "tagType"
//   "currentItemCounts"
//   "shipDesc"
//   "guildID"
//   "itemName"

/* [RE-AUTO c0]
   src: view.H, Data.H
   strings:
     ""bossTime""
     ""currentBoss""
     ""bossNum""
     ""loginTimes""
     ""transportNum""
     ""selfPlayerID""
     ""selectTransportShipdatas""
     ""mh.view.HunterTeamBattle.Data.HunterGroupShipEntryVo""
     ""shipID""
     ""isUnlock"" */

void FUN_109f6970(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  undefined8 uVar8;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int *piStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  int *local_c8;
  int *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int *piStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int aiStack_88 [3];
  undefined1 auStack_7c [4];
  undefined8 uStack_78;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined8 *puStack_64;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_f4;
  if (in_stack_00000014 != 1) goto LAB_109f7071;
  local_c8 = (int *)0x0;
  local_c4 = (int *)in_stack_00000010[1];
  local_bc = in_stack_00000010[3];
  local_c0 = in_stack_00000010[2];
  local_b8 = in_stack_00000010[4];
  if (((uint)local_c4 >> 6 & 1) != 0) {
    local_c8 = (int *)*in_stack_00000010;
    (**(code **)(*local_c8 + 4))(&local_c8,local_c0);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) {
    piVar4 = (int *)(**(code **)(*piVar4 + 0xb4))();
    if ((piVar4 != (int *)0x0) && (piVar10 = (int *)piVar4[0xaaf], piVar10 != (int *)0x0)) {
      uVar8 = (**(code **)(*piVar4 + 0xc0))();
      iVar5 = FUN_11174260(uVar8);
      uStack_78 = (double)iVar5 + (double)(&DAT_11de9c60)[-(iVar5 >> 0x1f)];
      iVar5 = FUN_11399020();
      if (iVar5 != 0) {
        iVar5 = (**(code **)(*piVar10 + 0xc))();
        if (iVar5 != 0) {
          iStack_98 = *(int *)(iVar5 + 8);
          uStack_94 = *(undefined4 *)(iVar5 + 0xc);
          FUN_104d1550("bossTime",0xffffffff);
          uVar8 = FUN_111f8d20();
          uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar7 = (undefined4)uVar8;
          uStack_f4 = uVar11;
          FUN_10a19840(uVar8);
          FUN_1171eba0(uVar7,unaff_ESI);
          cVar2 = FUN_1171ebf0();
          if (cVar2 != '\0') {
            puVar9 = auStack_68;
            FUN_1171eba0(puVar9);
            uVar6 = FUN_109f5b20();
            FUN_10a142d0(auStack_7c,uVar6);
            if ((puStack_58 != auStack_6c) && (puStack_58 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_58);
            }
            FUN_1171eba0(auStack_6c);
            uVar6 = FUN_109f5b50();
            FUN_10a142d0(&stack0xffffff08,uVar6);
            if ((puStack_5c != auStack_70) && (puStack_5c != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_5c);
            }
            FUN_1171eba0(auStack_70);
            uVar6 = FUN_109f5b80();
            FUN_10a142d0(&uStack_ac,uVar6);
            if ((iStack_60 != (int)&uStack_78 + 4) && (iStack_60 != 0)) {
              FUN_10c3d5d0(iStack_60);
            }
            FUN_1171eba0((int)&uStack_78 + 4);
            uVar6 = FUN_109f5bb0();
            FUN_10a142d0(&iStack_a0,uVar6);
            if ((puStack_64 != &uStack_78) && (puStack_64 != (undefined8 *)0x0)) {
              FUN_10c3d5d0(puStack_64);
            }
            cVar2 = FUN_10a141f0(aiStack_88,&stack0xffffff00,uVar7,puVar9);
            if (cVar2 != '\0') {
              iVar5 = iStack_48 + iStack_44 * 0x3c + iStack_40 * 0xe10;
              cVar2 = FUN_10a141f0(&uStack_78,&iStack_a0,uVar7,uVar11);
              if (cVar2 == '\0') {
                cVar2 = FUN_10a141f0(&iStack_a0,&iStack_90,uVar7,uVar11);
                if (cVar2 == '\0') goto LAB_109f6d05;
                FUN_104d1550("currentBoss",2);
                aiStack_88[0] = ((iStack_8c * 0x3c + iStack_90 * 0xe10) - iVar5) + aiStack_88[0];
              }
              else {
                FUN_104d1550("currentBoss",1);
                aiStack_88[0] = ((iStack_9c * 0x3c + iStack_a0 * 0xe10) - iVar5) + iStack_98;
              }
              FUN_104d1550("bossTime",aiStack_88[0]);
              FUN_104d1550("bossNum",2);
            }
          }
LAB_109f6d05:
          uVar7 = FUN_11497fc0();
          FUN_104d1550("loginTimes",uVar7);
          uVar7 = FUN_114981c0();
          FUN_104d1550("transportNum",uVar7);
          FUN_104d14d0("selfPlayerID");
          local_c0 = 0;
          local_bc = 0;
          FUN_11a98a70(&local_c0);
          FUN_104d12b0("selectTransportShipdatas",&local_c4);
          CCommerceBoatInfo__ProcessBoatEntries(&stack0xffffff00);
          uStack_f0 = 0;
          if (iStack_e8 - iStack_ec >> 2 != 0) {
            do {
              uVar1 = uStack_f0;
              piVar10 = (int *)0x0;
              piStack_e0 = (int *)0x0;
              uStack_dc = 0;
              FUN_11a98de0(&piStack_e0,"mh.view.HunterTeamBattle.Data.HunterGroupShipEntryVo",0,0);
              piVar4 = (int *)(uVar1 * 4);
              iVar5 = FUN_1080af40();
              FUN_104d1550("shipID",*(undefined4 *)(*piVar4 + 0x10));
              uVar3 = FUN_111755e0(*(undefined4 *)(*piVar4 + 0x10));
              FUN_104d15e0("isUnlock",uVar3);
              FUN_104d1670("hunterShipName",*(undefined4 *)(*piVar10 + 0x28));
              FUN_104d1550("hunterGroupShipIcon",(int)piVar4 + 1);
              FUN_104d1550("goldType",*(undefined4 *)(*piVar10 + 0x68));
              FUN_104d1550("goldNum",*(undefined4 *)(*piVar10 + 0x6c));
              FUN_104d1550("requireItemCounts",*(undefined4 *)(*piVar10 + 100));
              FUN_104d1550("tagType",*(undefined4 *)(*piVar10 + 0x60));
              FUN_104d1550("currentItemCounts",0);
              FUN_104d1670("shipDesc",*(undefined4 *)(*piVar10 + 0x58));
              FUN_104d14d0("guildID");
              if (iVar5 != 0) {
                FUN_104d1790("itemName",iVar5 + 0x14);
                FUN_104d1790("sTagIcon",iVar5 + 0x18);
              }
              FUN_104d1550("itemTypeID",*(undefined4 *)(*piVar10 + 0x60));
              FUN_104d1550(&DAT_11dcc18c,0xb);
              FUN_104d15e0("bindState",1);
              FUN_104d15e0("bPointType",1);
              (**(code **)(*local_c4 + 0x3c))(local_bc,&uStack_f4);
              if ((uStack_dc >> 6 & 1) != 0) {
                (**(code **)(*piStack_e0 + 8))(&piStack_e0,uStack_d8);
              }
            } while (uStack_f0 < (uint)(iStack_e8 - iStack_ec >> 2));
          }
          if (iStack_ec != 0) {
            FUN_10c3d5d0(iStack_ec);
          }
          if ((uStack_ac >> 6 & 1) != 0) {
            (**(code **)(*piStack_b0 + 8))(&piStack_b0,uStack_a8);
            piStack_b0 = (int *)0x0;
          }
          uStack_ac = 0;
        }
      }
    }
  }
  if (((uint)local_c4 >> 6 & 1) != 0) {
    (**(code **)(*local_c8 + 8))(&local_c8,local_c0);
  }
LAB_109f7071:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f7090 @ 109f7090  size=2611 ===== */
// calls: _localtime64_s, CPet::SetName
// strings:
//   "simpleShipArray"
//   "mh.view.HunterTeamBattle.Data.SimplePlayerShipVo"
//   "playerName"
//   "playerID"
//   "playerShipIconIndex"
//   "shipStatus"
//   "guildName"
//   "enemyOrSelf"
//   "currentValue"
//   "selfGuildPlayer"

/* [RE-AUTO c0]
   src: view.H
   calls: _localtime64_s
   strings:
     ""simpleShipArray""
     ""mh.view.HunterTeamBattle.Data.SimplePlayerShipVo""
     ""playerName""
     ""playerID""
     ""playerShipIconIndex""
     ""shipStatus""
     ""guildName""
     ""enemyOrSelf""
     ""currentValue""
     ""selfGuildPlayer"" */

void FUN_109f7090(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int *unaff_EBX;
  int **ppiVar6;
  int *unaff_EDI;
  undefined8 uVar7;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 uVar8;
  uint *puVar9;
  int *piVar10;
  int **ppiStack_178;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_15c [4];
  int *piStack_158;
  uint uStack_154;
  int **ppiStack_150;
  int *piStack_14c;
  int *piStack_148;
  uint uStack_144;
  int **ppiStack_138;
  int **ppiStack_134;
  int **ppiStack_130;
  int *piStack_12c;
  int *local_128;
  uint local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int **ppiStack_10c;
  byte bStack_108;
  undefined4 uStack_104;
  int *local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int *local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  int *piStack_e0;
  undefined4 uStack_d8;
  int *piStack_c8;
  int *piStack_c4;
  undefined2 auStack_c0 [2];
  undefined2 auStack_bc [2];
  uint uStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  int **ppiStack_a4;
  int **ppiStack_a0;
  undefined2 *puStack_9c;
  undefined2 *puStack_98;
  uint *puStack_94;
  uint *puStack_90;
  int ***pppiStack_8c;
  uint uStack_84;
  uint **ppuStack_80;
  uint **ppuStack_7c;
  uint *puStack_74;
  uint *apuStack_70 [2];
  int iStack_68;
  uint **ppuStack_5c;
  undefined1 auStack_58 [16];
  undefined1 *puStack_48;
  undefined8 uStack_44;
  tm tStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_15c;
  if (in_stack_00000014 == 2) {
    local_100 = (int *)0x0;
    local_fc = in_stack_00000010[1];
    local_f4 = in_stack_00000010[3];
    local_f8 = in_stack_00000010[2];
    local_f0 = (int *)in_stack_00000010[4];
    if ((local_fc >> 6 & 1) != 0) {
      local_100 = (int *)*in_stack_00000010;
      (**(code **)(*local_100 + 4))();
    }
    local_124 = in_stack_00000010[7];
    local_120 = in_stack_00000010[8];
    local_11c = *(undefined8 *)(in_stack_00000010 + 9);
    local_128 = (int *)0x0;
    if ((local_124 >> 6 & 1) != 0) {
      local_128 = (int *)in_stack_00000010[6];
      (**(code **)(*local_128 + 4))();
    }
    uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44);
    if (((DAT_1202e818 != 0) &&
        (uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44),
        *(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
       uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44), piVar3 != (int *)0x0)) {
      piStack_12c = (int *)(**(code **)(*piVar3 + 0xb4))();
      uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44);
      if ((piStack_12c != (int *)0x0) &&
         (piVar3 = (int *)piStack_12c[0xaaf], piStack_14c = piVar3,
         uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44), piVar3 != (int *)0x0)) {
        iVar2 = FUN_11399020();
        if (iVar2 != 0) {
          piStack_c8 = (int *)0x0;
          piStack_c4 = (int *)0x0;
          FUN_11a98a70();
          ppiStack_178 = (int **)0x109f71d1;
          FUN_104d12b0();
          iVar2 = (**(code **)(*piVar3 + 0xc))();
          uVar8 = *(undefined4 *)(iVar2 + 8);
          ppiVar6 = *(int ***)(iVar2 + 0xc);
          ppiStack_134 = ppiVar6;
          uStack_114 = uVar8;
          uStack_44 = FUN_111f8d20();
          ppiStack_178 = (int **)0x109f7212;
          _localtime64_s(&tStack_3c,&uStack_44);
          uStack_110 = 0;
          iVar2 = (**(code **)(*piStack_12c + 0x28))();
          if (iVar2 != 0) {
            ppiVar6 = (int **)0x0;
            do {
              local_f0 = (int *)0x0;
              uStack_ec = 0;
              ppiStack_178 = ppiVar6;
              (*(code *)(*ppiStack_130)[0xc])(local_128);
              if (((byte)local_f8 & 0x8f) == 5) {
                uVar7 = CONCAT44(local_f0,local_f4);
              }
              else {
                uVar7 = 0;
              }
              puStack_74 = &uStack_84;
              local_11c._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
              uVar8 = local_11c._4_4_;
              local_11c._0_4_ = (undefined4)uVar7;
              uStack_84 = uStack_84 & 0xffffff00;
              uVar1 = (undefined4)local_11c;
              local_11c = uVar7;
              apuStack_70[0] = puStack_74;
              piVar3 = (int *)FUN_11174610(uVar1,uVar8,puStack_74);
              if (piVar3 == (int *)0x0) {
                if ((ppuStack_5c != apuStack_70) && (ppuStack_5c != (uint **)0x0)) {
                  FUN_10c3d5d0();
                }
                if ((uStack_e8._4_4_ >> 6 & 1) != 0) {
                  (**(code **)(*(int *)uStack_e8 + 8))();
                }
                goto LAB_109f79d2;
              }
              piStack_158 = (int *)0x0;
              iVar2 = piVar3[1] - *piVar3 >> 0x1f;
              if ((piVar3[1] - *piVar3) / 0x38 + iVar2 != iVar2) {
                ppiStack_150 = (int **)0x0;
                do {
                  ppiVar6 = ppiStack_150;
                  iVar12 = 0;
                  pcVar11 = "mh.view.HunterTeamBattle.Data.SimplePlayerShipVo";
                  ppiStack_178 = &piStack_148;
                  piStack_148 = (int *)0x0;
                  uStack_144 = 0;
                  FUN_11a98de0();
                  iVar2 = *(int *)((int)ppiVar6 + *piVar3 + 4);
                  iVar4 = FUN_11174260(*(undefined4 *)((int)ppiVar6 + *piVar3));
                  uStack_e8 = (double)iVar4 + (double)(&DAT_11de9c60)[-(iVar4 >> 0x1f)];
                  iVar4 = *(int *)((int)ppiVar6 + *piVar3 + 0x30);
                  CPet__SetName((int)unaff_EDI + *piVar3 + 8);
                  puStack_94 = &uStack_b4;
                  uStack_b4 = uStack_b4 & 0xffff0000;
                  puStack_90 = puStack_94;
                  FUN_100e5b60(&uStack_b4);
                  FUN_104d1700("playerName",puStack_94);
                  if ((puStack_94 != &uStack_b8) && (puStack_94 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_94);
                  }
                  if (pcVar11 != (char *)0x0) {
                    FUN_10c3da30(pcVar11);
                  }
                  FUN_104d14d0("playerID");
                  FUN_104d1440("playerShipIconIndex",*(undefined4 *)(iVar12 + 0x28 + *piVar3));
                  FUN_104d1550("shipStatus",(iVar4 << 0x1d) >> 0x1d);
                  CPet__SetName(ppuStack_7c);
                  puStack_9c = auStack_bc;
                  auStack_bc[0] = 0;
                  puStack_98 = puStack_9c;
                  FUN_100e5b60(auStack_bc);
                  FUN_104d1700("guildName",puStack_9c);
                  if ((puStack_9c != auStack_c0) && (puStack_9c != (undefined2 *)0x0)) {
                    FUN_10c3d5d0(puStack_9c);
                  }
                  if (iVar2 != 0) {
                    FUN_10c3da30(iVar2);
                  }
                  if ((ppiStack_138 == ppiStack_130) && (piStack_158 == piStack_12c)) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 1;
                  }
                  FUN_104d1550("enemyOrSelf",uVar8);
                  ppiVar6 = ppiStack_178;
                  FUN_104d1440("currentValue",
                               iStack_68 - *(int *)((int)ppiStack_178 + *piVar3 + 0x2c));
                  (**(code **)(*local_f0 + 0x3c))((int *)uStack_e8,&stack0xfffffe90);
                  if ((uStack_144 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_148 + 8))();
                  }
                  ppiStack_150 = ppiVar6 + 0xe;
                  piStack_158 = (int *)((int)piStack_158 + 1);
                  ppiVar6 = ppiStack_10c;
                } while (piStack_158 < (int *)((piVar3[1] - *piVar3) / 0x38));
              }
              if ((ppuStack_5c != apuStack_70) && (ppuStack_5c != (uint **)0x0)) {
                FUN_10c3d5d0();
              }
              if ((uStack_e8._4_4_ >> 6 & 1) != 0) {
                (**(code **)(*(int *)uStack_e8 + 8))();
              }
              ppiVar6 = (int **)((int)ppiVar6 + 1);
              ppiStack_10c = ppiVar6;
              ppiVar5 = (int **)(**(code **)(*local_128 + 0x28))();
            } while (ppiVar6 < ppiVar5);
            uVar8 = local_11c._4_4_;
            ppiVar6 = ppiStack_138;
          }
          uStack_b8 = 0;
          uStack_b4 = 0;
          ppiStack_178 = (int **)0x109f75ff;
          FUN_11a98a70();
          ppiStack_178 = (int **)(uint)((bStack_108 & 0x8f) == 10);
          (*(code *)(*ppiStack_10c)[5])(uStack_104,"selfGuildPlayer",auStack_bc);
          iVar2 = FUN_11398f30();
          if (iVar2 != 0) {
            FUN_11398f30();
            puStack_48 = auStack_58;
            uStack_44._0_4_ = puStack_48;
            FUN_100b62c0();
            ppiStack_178 = ppiVar6;
            iVar2 = FUN_11174610(uVar8);
            if (iVar2 != 0) {
              ppiStack_178 = (int **)0x109f7693;
              ppiStack_150 = (int **)FUN_11174610();
              uStack_154 = 0;
              piVar3 = *ppiStack_150;
              iVar2 = (int)ppiStack_150[1] - (int)piVar3 >> 0x1f;
              if (((int)ppiStack_150[1] - (int)piVar3) / 0x38 + iVar2 != iVar2) {
                iVar2 = 0;
                do {
                  iVar4 = *(int *)(iVar2 + 0x30 + (int)piVar3);
                  ppiStack_178 = &piStack_148;
                  piStack_148 = (int *)0x0;
                  uStack_144 = 0;
                  FUN_11a98de0();
                  iVar12 = FUN_11174260(*(undefined4 *)(iVar2 + *unaff_EBX),
                                        *(undefined4 *)(iVar2 + 4 + *unaff_EBX));
                  piVar3 = (int *)0x0;
                  uStack_e8 = (double)iVar12 + (double)(&DAT_11de9c60)[-(iVar12 >> 0x1f)];
                  CPet__SetName(*unaff_EDI + 8 + iVar2);
                  puStack_94 = &uStack_b4;
                  uStack_b4 = uStack_b4 & 0xffff0000;
                  puVar9 = &uStack_b4;
                  puStack_90 = puStack_94;
                  FUN_100e5b60();
                  FUN_104d1700("playerName",puStack_94);
                  if ((puStack_94 != &uStack_b8) && (puStack_94 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_94);
                  }
                  if (ppiStack_178 != (int **)0x0) {
                    FUN_10c3da30(ppiStack_178);
                  }
                  FUN_104d14d0("playerID");
                  FUN_104d1440("playerShipIconIndex",*(undefined4 *)(iVar2 + 0x28 + *piVar3));
                  FUN_104d1550("shipStatus",(iVar4 << 0x1d) >> 0x1d);
                  iVar4 = FUN_11398f30();
                  ppuStack_80 = &puStack_90;
                  ppuStack_7c = ppuStack_80;
                  FUN_100b62c0(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x20));
                  piVar10 = (int *)0x0;
                  CPet__SetName(uStack_84);
                  ppiStack_a4 = &piStack_c4;
                  piStack_c4 = (int *)((uint)piStack_c4 & 0xffff0000);
                  ppiStack_a0 = ppiStack_a4;
                  FUN_100e5b60(&piStack_c4);
                  FUN_104d1700("guildName",ppiStack_a4);
                  if ((ppiStack_a4 != &piStack_c8) && (ppiStack_a4 != (int **)0x0)) {
                    FUN_10c3d5d0(ppiStack_a4);
                  }
                  if (puVar9 != (uint *)0x0) {
                    FUN_10c3da30(puVar9);
                  }
                  if ((pppiStack_8c != &ppiStack_a0) && (pppiStack_8c != (int ***)0x0)) {
                    FUN_10c3d5d0(pppiStack_8c);
                  }
                  FUN_104d1550("enemyOrSelf",0);
                  FUN_104d1440("currentValue",
                               (int)apuStack_70[0] - *(int *)(iVar2 + 0x2c + *piVar10));
                  (**(code **)(*piStack_e0 + 0x3c))(uStack_d8,&ppiStack_178);
                  if ((uStack_144 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_148 + 8))();
                  }
                  iVar2 = iVar2 + 0x38;
                  uStack_154 = uStack_154 + 1;
                  piVar3 = (int *)*piVar10;
                } while (uStack_154 < (uint)((piVar10[1] - *piVar10) / 0x38));
              }
            }
            uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44);
            if (((undefined1 *)uStack_44 != auStack_58) &&
               (uStack_44 = CONCAT44(uStack_44._4_4_,(undefined1 *)uStack_44),
               (undefined1 *)uStack_44 != (undefined1 *)0x0)) {
              FUN_10c3d5d0();
            }
          }
          if ((uStack_ac >> 6 & 1) != 0) {
            (**(code **)(*piStack_b0 + 8))();
            piStack_b0 = (int *)0x0;
          }
          uStack_ac = 0;
LAB_109f79d2:
          if (((uint)piStack_c4 >> 6 & 1) != 0) {
            (**(code **)(*piStack_c8 + 8))();
            piStack_c8 = (int *)0x0;
          }
          piStack_c4 = (int *)0x0;
        }
      }
    }
    if ((local_124 >> 6 & 1) != 0) {
      (**(code **)(*local_128 + 8))();
      local_128 = (int *)0x0;
    }
    local_124 = 0;
    if ((local_fc >> 6 & 1) != 0) {
      (**(code **)(*local_100 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f7ad0 @ 109f7ad0  size=862 ===== */
// calls: CPet::SetName, memmove
// strings:
//   "mh.view.HunterTeamBattle.Data.SimplePlayerShipVo"
//   "playerName"
//   "playerID"
//   "playerShipIconIndex"
//   "shipStatus"
//   "guildID"
//   "guildName"
//   "enemyOrSelf"
//   "currentValue"

/* WARNING: Removing unreachable block (ram,0x109f7de9) */
/* [RE-AUTO c0]
   src: view.H
   calls: memmove
   strings:
     ""mh.view.HunterTeamBattle.Data.SimplePlayerShipVo""
     ""playerName""
     ""playerID""
     ""playerShipIconIndex""
     ""shipStatus""
     ""guildID""
     ""guildName""
     ""enemyOrSelf""
     ""currentValue"" */

void FUN_109f7ad0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,int param_5
                 )

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iStack_b4;
  int **ppiStack_b0;
  char *pcStack_ac;
  undefined8 uStack_a8;
  undefined1 auStack_94 [4];
  int *local_90;
  uint uStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  int iStack_74;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_94;
  local_90 = param_2;
  if (param_5 == 1) {
    local_70 = (int *)0x0;
    local_6c = param_4[1];
    local_64 = param_4[3];
    local_68 = param_4[2];
    local_60 = (double)CONCAT44(local_60._4_4_,param_4[4]);
    if ((local_6c >> 6 & 1) != 0) {
      local_70 = (int *)*param_4;
      uStack_a8._0_4_ = &local_70;
      pcStack_ac = (char *)0x109f7b3e;
      uStack_a8._4_4_ = local_68;
      (**(code **)(*local_70 + 4))();
    }
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8);
    if (((DAT_1202e818 != 0) &&
        (uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8), *(int *)(DAT_1202e818 + 0xd0) != 0
        )) && (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),
              uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8), piVar1 != (int *)0x0)) {
      uStack_a8._4_4_ = 0x109f7b6f;
      iVar3 = (**(code **)(*piVar1 + 0xb4))();
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8);
      if ((iVar3 != 0) &&
         (piVar1 = *(int **)(iVar3 + 0x2abc), piStack_50 = piVar1,
         uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8), piVar1 != (int *)0x0)) {
        uStack_a8._4_4_ = 0x109f7b90;
        iVar3 = (**(code **)(*piVar1 + 0xc))();
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8);
        if (iVar3 != 0) {
          uStack_54 = *(undefined4 *)(iVar3 + 8);
          uStack_4c = *(undefined4 *)(iVar3 + 0xc);
          piVar5 = piVar1 + 0x3f;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(int **)uStack_a8);
          if (piVar5 != (int *)0x0) {
            uStack_a8._4_4_ = 0x109f7bb7;
            uStack_a8 = FUN_111f8d20();
            pcStack_ac = (char *)0x109f7bc2;
            FUN_10a19840();
            uStack_8c = 0;
            iVar3 = piVar1[0x40] - *piVar5 >> 0x1f;
            if ((piVar1[0x40] - *piVar5) / 0x104 + iVar3 != iVar3) {
              iVar3 = 0;
              do {
                uStack_a8._4_4_ = 0;
                uStack_a8._0_4_ = (int **)0x0;
                pcStack_ac = "mh.view.HunterTeamBattle.Data.SimplePlayerShipVo";
                ppiStack_b0 = &piStack_88;
                piStack_88 = (int *)0x0;
                uStack_84 = 0;
                iStack_b4 = 0x109f7c0b;
                FUN_11a98de0();
                iStack_b4 = *(int *)(iVar3 + 8 + *piVar5);
                iVar4 = FUN_11174260(*(undefined4 *)(iVar3 + 4 + *piVar5));
                pcStack_ac = (char *)0x0;
                local_60 = (double)iVar4 + (double)(&DAT_11de9c60)[-(iVar4 >> 0x1f)];
                iVar4 = *(int *)(iVar3 + 0x60 + *piVar5);
                CPet__SetName(*piVar5 + 0x40 + iVar3);
                FUN_104d1790("playerName",&ppiStack_b0);
                if (ppiStack_b0 != (int **)0x0) {
                  FUN_10c3da30(ppiStack_b0);
                }
                FUN_104d14d0("playerID");
                FUN_104d1440("playerShipIconIndex",*(undefined4 *)(iVar3 + *piVar5));
                FUN_104d1550("shipStatus",(iVar4 << 0x1d) >> 0x1d);
                FUN_104d14d0("guildID");
                ppiStack_b0 = (int **)0x0;
                CPet__SetName(*piVar5 + 0x20 + iVar3);
                FUN_104d1790("guildName",&iStack_b4);
                if (iStack_b4 != 0) {
                  FUN_10c3da30(iStack_b4);
                }
                if ((iStack_74 == *(int *)(iVar3 + 0x18 + *piVar5)) &&
                   (local_6c == *(uint *)(iVar3 + 0x1c + *piVar5))) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = 1;
                }
                FUN_104d1550("enemyOrSelf",uVar6);
                iVar4 = 0;
                uVar2 = *(uint *)(iVar3 + 0xc + *piVar5);
                if (uVar2 < local_60._0_4_) {
                  iVar4 = local_60._0_4_ - uVar2;
                }
                FUN_104d1440("currentValue",iVar4);
                (**(code **)(*local_90 + 0x3c))(piStack_88,&uStack_a8);
                if ((uStack_84 >> 6 & 1) != 0) {
                  uStack_a8._0_4_ = &piStack_88;
                  uStack_a8._4_4_ = uStack_80;
                  pcStack_ac = (char *)0x109f7db0;
                  (**(code **)(*piStack_88 + 8))();
                }
                iVar3 = iVar3 + 0x104;
                uStack_8c = uStack_8c + 1;
              } while (uStack_8c < (uint)((piVar1[0x40] - *piVar5) / 0x104));
            }
            if (*piVar5 != piVar1[0x40]) {
              piVar1[0x40] = *piVar5;
            }
          }
        }
      }
    }
    if ((local_6c >> 6 & 1) != 0) {
      uStack_a8._0_4_ = &local_70;
      uStack_a8._4_4_ = local_68;
      pcStack_ac = (char *)0x109f7e17;
      (**(code **)(*local_70 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109f8330 @ 109f8330  size=609 ===== */
// calls: CPet::SetName
// strings:
//   "guildSimpleInfoArray"
//   "mh.view.HunterTeamBattle.Data.SearchGuildNameVo"
//   "guildName"
//   "guildID"

/* WARNING: Removing unreachable block (ram,0x109f8463) */
/* WARNING: Removing unreachable block (ram,0x109f846c) */
/* WARNING: Removing unreachable block (ram,0x109f847e) */
/* WARNING: Removing unreachable block (ram,0x109f8487) */
/* WARNING: Removing unreachable block (ram,0x109f8501) */
/* WARNING: Removing unreachable block (ram,0x109f8505) */
/* [RE-AUTO c0]
   src: view.H
   strings:
     ""guildSimpleInfoArray""
     ""mh.view.HunterTeamBattle.Data.SearchGuildNameVo""
     ""guildName""
     ""guildID"" */

void FUN_109f8330(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  uint uStack_58;
  int iStack_54;
  int *piStack_50;
  uint uStack_4c;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (in_stack_00000014 == 1) {
    local_38 = (int *)0x0;
    local_34 = in_stack_00000010[1];
    local_2c = in_stack_00000010[3];
    local_30 = in_stack_00000010[2];
    local_28 = in_stack_00000010[4];
    if ((local_34 >> 6 & 1) != 0) {
      local_38 = (int *)*in_stack_00000010;
      (**(code **)(*local_38 + 4))(&local_38);
    }
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
       (((iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0 &&
         (iVar3 = *(int *)(iVar3 + 0x2abc), iVar3 != 0)) &&
        (iStack_54 = FUN_11398f30(), iStack_54 != 0)))) {
      piStack_50 = (int *)0x0;
      uStack_4c = 0;
      FUN_11a98a70();
      FUN_104d12b0("guildSimpleInfoArray",&iStack_54);
      uStack_58 = 0;
      iVar4 = *(int *)(iVar3 + 0x10c) - *(int *)(iVar3 + 0x108);
      iVar2 = iVar4 >> 0x1f;
      if (iVar4 / 0x29 + iVar2 != iVar2) {
        do {
          CPet__SetName();
          uStack_58 = uStack_58 + 1;
        } while (uStack_58 < (uint)((*(int *)(iVar3 + 0x10c) - *(int *)(iVar3 + 0x108)) / 0x29));
      }
      if ((uStack_4c >> 6 & 1) != 0) {
        (**(code **)(*piStack_50 + 8))(&piStack_50);
        piStack_50 = (int *)0x0;
      }
      uStack_4c = 0;
    }
    if ((local_34 >> 6 & 1) != 0) {
      (**(code **)(*local_38 + 8))(&local_38);
    }
  }
  return;
}



/* ===== FUN_10a8cb00 @ 10a8cb00  size=1106 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "PlayTime"
//   "timesOfAction"
//   "timesOfActionSucceed"
//   "timeOfActionFailed"
//   "ActionMistake"
//   "ActionAccuracy"
//   "timesOfAttack"
//   "timesOfAttackSucceed"
//   "timeOfAttackFailed"
//   "timesOfDamaged"
//   "sumOfDamageTaken"
//   "sumOfStaminaConsume"
//   "timesOfDead"
//   "timesOfLowHP"
//   "timesOfLowSta"
//   "attackTime"
//   "Frequency_Action"
//   "Frequency_Attack"
//   "Frequency_Damaged"
//   "Frequency_Dead"

/* [RE-AUTO c0]
   strings:
     ""PlayTime""
     ""timesOfAction""
     ""timesOfActionSucceed""
     ""timeOfActionFailed""
     ""ActionMistake""
     ""ActionAccuracy""
     ""timesOfAttack""
     ""timesOfAttackSucceed""
     ""timeOfAttackFailed""
     ""timesOfDamaged"" */

void __fastcall FUN_10a8cb00(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  double in_XMM0_Qa;
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  int *local_1c [2];
  int local_14;
  int local_10;
  char *local_c;
  char *local_8;
  
  (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
  FUN_11a894ef();
  fVar6 = (float)in_XMM0_Qa * DAT_11de98b0 - *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 100) = fVar6;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))("PlayTime",fVar6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x48);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))("timesOfAction",*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("timesOfActionSucceed",(float)*(int *)(param_1 + 4) - (float)*(int *)(param_1 + 8));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))
            ("timeOfActionFailed",*(undefined4 *)(param_1 + 8));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("ActionMistake",(float)*(int *)(param_1 + 8) / (float)*(int *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("ActionAccuracy",
             DAT_11de9918 - (float)*(int *)(param_1 + 8) / (float)*(int *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))("timesOfAttack",*(undefined4 *)(param_1 + 0x14))
  ;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))
            ("timesOfAttackSucceed",*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))
            ("timeOfAttackFailed",*(undefined4 *)(param_1 + 0x1c));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))
            ("timesOfDamaged",*(undefined4 *)(param_1 + 0x48));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("sumOfDamageTaken",*(undefined4 *)(param_1 + 0x44));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("sumOfStaminaConsume",*(undefined4 *)(param_1 + 0x30));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))("timesOfDead",*(undefined4 *)(param_1 + 0x50));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))("timesOfLowHP",*(undefined4 *)(param_1 + 0x60));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x104))("timesOfLowSta",*(undefined4 *)(param_1 + 0x58))
  ;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))("attackTime",*(undefined4 *)(param_1 + 0x3c));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_Action",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_Attack",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 0x14));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_Damaged",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 0x48));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_Dead",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 0x50));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_LowHP",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 0x60));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xf4))
            ("Frequency_LowSta",*(float *)(param_1 + 100) / (float)*(int *)(param_1 + 0x58));
  local_24 = local_34;
  iVar5 = 0;
  local_34[0] = 0;
  local_20 = local_24;
  iVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x2c))();
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x30))(iVar5,&local_8,&local_c);
      pcVar1 = local_8;
      do {
        pcVar4 = pcVar1;
        pcVar1 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      FUN_100d9260(local_8,pcVar4);
      FUN_100d9260(&DAT_11dbaa1c,&DAT_11dbaa1d);
      pcVar1 = local_c;
      do {
        pcVar4 = pcVar1;
        pcVar1 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      FUN_100d9260(local_c,pcVar4);
      FUN_100d9260(&DAT_11d9d720,&DAT_11d9d721);
      iVar5 = iVar5 + 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x2c))();
    } while (iVar5 < iVar2);
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xa8) + 100))(param_1 + 0x8c);
  if (piVar3 != (int *)0x0) {
    CInfoRecord__GetModelString(local_20);
    local_10 = 4;
    (**(code **)(*piVar3 + 4))(9,local_1c);
    if ((local_10 == 5) && (local_1c[0] != (int *)0x0)) {
      (**(code **)(*local_1c[0] + 8))();
    }
    piVar3 = (int *)(local_14 + -0xc);
    if ((-1 < *piVar3) && (iVar2 = FUN_10c3dad0(piVar3), iVar2 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_14 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  return;
}



/* ===== FUN_10b5bdc0 @ 10b5bdc0  size=420 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "SubmitHornMessage"
//   "SubmitLogMessage"
//   "InitChatData"
//   "CopyChatData"
//   "chatSwapIndex"
//   "chatDelLabel"
//   "chatEditLabel"
//   "chatAddLabel"
//   "HornNumDialogOK"
//   "HornNumDialogCancel"

/* [RE-AUTO c0]
   strings:
     ""SubmitHornMessage""
     ""SubmitLogMessage""
     ""InitChatData""
     ""CopyChatData""
     ""chatSwapIndex""
     ""chatDelLabel""
     ""chatEditLabel""
     ""chatAddLabel""
     ""HornNumDialogOK""
     ""HornNumDialogCancel"" */

undefined4 * __fastcall FUN_10b5bdc0(undefined4 *param_1)

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
  undefined4 extraout_ECX_08;
  
  *param_1 = &PTR_FUN_11cc79cc;
  param_1[6] = param_1 + 2;
  param_1[7] = param_1 + 2;
  *(undefined1 *)param_1[6] = 0;
  param_1[0xc] = param_1 + 8;
  param_1[0xd] = param_1 + 8;
  *(undefined1 *)param_1[0xc] = 0;
  param_1[0x12] = param_1 + 0xe;
  param_1[0x13] = param_1 + 0xe;
  *(undefined1 *)param_1[0x12] = 0;
  param_1[0x18] = param_1 + 0x14;
  param_1[0x19] = param_1 + 0x14;
  *(undefined1 *)param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString
            ("SubmitHornMessage",extraout_ECX,CGmChatCommand__HandleGiveItemCommand);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SubmitLogMessage",extraout_ECX_00,FUN_10b5c840);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("InitChatData",extraout_ECX_01,FUN_10b5cf10);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("CopyChatData",extraout_ECX_02,FUN_10b5cde0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("chatSwapIndex",extraout_ECX_03,FUN_10b5cf60);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("chatDelLabel",extraout_ECX_04,FUN_10b5cfc0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("chatEditLabel",extraout_ECX_05,FUN_10b5d010);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("chatAddLabel",extraout_ECX_06,FUN_10b5d1e0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("HornNumDialogOK",extraout_ECX_07,FUN_10b5d3f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("HornNumDialogCancel",extraout_ECX_08,&LAB_10b5d450);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10c308c0 @ 10c308c0  size=874 ===== */
// strings:
//   "shooterId"
//   "weaponId"
//   "projectileId"
//   "damage"
//   "minRadius"
//   "radius"
//   "soundRadius"
//   "minPhysRadius"
//   "physRadius"
//   "angle"
//   "pressure"
//   "hole_size"
//   "shakeMinR"
//   "shakeMaxR"
//   "shakeScale"
//   "shakeRnd"
//   "effect_class"
//   "friendlyfire"
//   "effect"
//   "effect_name"

/* [RE-AUTO c0]
   strings:
     ""shooterId""
     ""weaponId""
     ""projectileId""
     ""damage""
     ""minRadius""
     ""radius""
     ""soundRadius""
     ""minPhysRadius""
     ""physRadius""
     ""angle"" */

void __thiscall FUN_10c308c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int local_8;
  
  (**(code **)(*param_2 + 0x44))("shooterId",param_1,0x656964);
  (**(code **)(*param_2 + 0x44))("weaponId",param_1 + 4,0x656964);
  (**(code **)(*param_2 + 0x44))("projectileId",param_1 + 8,0x656964);
  (**(code **)(*param_2 + 0x70))("damage",param_1 + 0x10,0x646d67);
  (**(code **)(*param_2 + 0x68))(&DAT_11ddf6e4,param_1 + 0x14,0x77726c64);
  (**(code **)(*param_2 + 0x68))(&DAT_11cbc860,param_1 + 0x20,0x64697231);
  (**(code **)(*param_2 + 0x70))("minRadius",param_1 + 0x2c,0x68526164);
  (**(code **)(*param_2 + 0x70))("radius",param_1 + 0x30,0x68526164);
  (**(code **)(*param_2 + 0x70))("soundRadius",param_1 + 0x34,0x68526164);
  (**(code **)(*param_2 + 0x70))("minPhysRadius",param_1 + 0x38,0x68526164);
  (**(code **)(*param_2 + 0x70))("physRadius",param_1 + 0x3c,0x68526164);
  (**(code **)(*param_2 + 0x70))("angle",param_1 + 0x40,0x68416e67);
  (**(code **)(*param_2 + 0x70))("pressure",param_1 + 0x44,0x68507273);
  (**(code **)(*param_2 + 0x70))("hole_size",param_1 + 0x48,0x6848537a);
  (**(code **)(*param_2 + 0x54))(&DAT_11dca14c,param_1 + 0x5c,0x68547970);
  (**(code **)(*param_2 + 0x70))("shakeMinR",param_1 + 0x88,0x68526164);
  (**(code **)(*param_2 + 0x70))("shakeMaxR",param_1 + 0x8c,0x68526164);
  (**(code **)(*param_2 + 0x70))("shakeScale",param_1 + 0x90,0x6848537a);
  (**(code **)(*param_2 + 0x70))("shakeRnd",param_1 + 0x94,0x6848537a);
  FUN_10a7d250("effect_class",param_1 + 0x54,0);
  (**(code **)(*param_2 + 0x54))("friendlyfire",param_1 + 0x84,0x73706563);
  puVar1 = (undefined4 *)(param_1 + 0x50);
  cVar2 = (**(code **)(*param_2 + 0x18))("effect",*(int *)(*(int *)(param_1 + 0x50) + -8) != 0);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x20))();
    if (cVar2 == '\0') {
      FUN_10a7d250("effect_name",puVar1,0);
    }
    else {
      FUN_10a7d250("effect_name",puVar1,0);
      uVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))(*puVar1,&DAT_11d9d32b,1,1);
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
    }
    (**(code **)(*param_2 + 0x70))("effect_scale",param_1 + 0x58,0x68455363);
    (**(code **)(*param_2 + 0x70))("maxblurdistance",param_1 + 0x80,0x696969);
    (**(code **)(*param_2 + 0x1c))();
  }
  local_8._1_3_ = (uint3)((uint)param_1 >> 8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(float *)(param_1 + 0x98) == DAT_11de9890) {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  cVar2 = (**(code **)(*param_2 + 0x18))("flashbang",local_8);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x70))("blindAmount",param_1 + 0x98,0x68455363);
    (**(code **)(*param_2 + 0x70))("flashbangScale",param_1 + 0x9c,0x68455363);
    (**(code **)(*param_2 + 0x1c))();
  }
  local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(param_1 + 0x60));
  cVar2 = (**(code **)(*param_2 + 0x18))("impact",local_8);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x20))();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    (**(code **)(*param_2 + 0x68))("impact_normal",param_1 + 100,0x64697231);
    (**(code **)(*param_2 + 0x68))("impact_velocity",param_1 + 0x70,0x7050566c);
    (**(code **)(*param_2 + 0x44))("impact_targetId",param_1 + 0x7c,0x656964);
    (**(code **)(*param_2 + 0x1c))();
  }
  return;
}



/* ===== FUN_10e06bf0 @ 10e06bf0  size=3473 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "r_FriendColor"
//   "r_Team1Color"
//   "r_Team2Color"
//   "r_NeutralColor"
//   "r_HostileColor"
//   "r_UseTeamColor"
//   "e_NamePad_PVP_Team"
//   "r_NP_StarsCnt"
//   "r_NP_StarsFlag"

/* [RE-AUTO c0]
   strings:
     ""r_FriendColor""
     ""r_Team1Color""
     ""r_Team2Color""
     ""r_NeutralColor""
     ""r_HostileColor""
     ""r_UseTeamColor""
     ""e_NamePad_PVP_Team""
     ""r_NP_StarsCnt""
     ""r_NP_StarsFlag"" */

void __thiscall FUN_10e06bf0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  int local_b0;
  undefined1 *local_ac;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined1 *local_94;
  undefined2 local_90 [16];
  undefined2 *local_70;
  undefined2 *local_6c;
  undefined2 local_68 [16];
  undefined2 *local_48;
  undefined2 *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  local_40 = param_1;
  if ((DAT_12031274 & 1) == 0) {
    DAT_12031274 = DAT_12031274 | 1;
    DAT_12031270 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_NamePadDebug");
  }
  piVar9 = param_2;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
    return;
  }
  piVar4 = (int *)(**(code **)(*param_2 + 800))();
  local_1c = piVar4;
  if (piVar4 == (int *)0x0) {
LAB_10e0720c:
    local_8 = 0xffd2dce0;
  }
  else {
    (**(code **)(*piVar4 + 0xa8))();
    cVar2 = (**(code **)(*piVar9 + 0x1c8))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar9 + 0x1c4))();
      if (cVar2 == '\0') {
        iVar6 = (**(code **)(*piVar4 + 0xa8))();
        if (iVar6 != 1) goto LAB_10e0720c;
        iVar6 = FUN_113a23b0();
        if (*(int *)(iVar6 + 0x20) == 3) {
          local_8 = 0xff8eca24;
        }
        else {
          local_8 = 0xff0000ff;
        }
      }
      else {
        local_c = (int *)0x0;
        local_3c = 0;
        local_20 = 0;
        local_10 = 0;
        local_2c = 0;
        local_34 = 0;
        local_18 = (int *)0x0;
        local_38 = 0;
        local_28 = -1;
        local_14 = (undefined4 *)0xffffffff;
        param_2 = (int *)FUN_10f19240();
        if (param_2 != (int *)0x0) {
          local_c = (int *)0x1f;
          iVar6 = FUN_113995e0(&local_c);
          if (((iVar6 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
             (piVar5 = *(int **)(*(int *)(param_1 + 0x14) + 4), piVar5 != (int *)0x0)) {
            (**(code **)(*piVar5 + 100))(0);
          }
          local_18 = param_2 + 0x116;
          cVar2 = FUN_104f37a0();
          if (cVar2 != '\0') {
            local_3c = FUN_1025b060();
          }
          sVar3 = FUN_108e1140();
          local_c = (int *)(int)sVar3;
          if ((param_2[0xac0] != 0) && (iVar6 = CPlayer__GetHuntRankOrCount(), 0x27 < iVar6)) {
            local_20 = FUN_1025b060();
          }
          local_24 = (undefined4 *)0x0;
          local_30 = 0;
          FUN_11399320(&local_24,&local_30);
          if (local_24 == (undefined4 *)0x0) {
            local_24 = (undefined4 *)-local_30;
          }
          local_10 = CPlayer__GetHuntRankOrCount();
          sVar3 = FUN_108e1140();
          local_18 = (int *)(int)sVar3;
          sVar3 = FUN_108e1140();
          local_2c = (int)sVar3;
          sVar3 = FUN_108e1140();
          local_34 = (int)sVar3;
          if (local_24 != (undefined4 *)0xffffffff) {
            local_20 = 0;
          }
          if (0 < (int)local_24) {
            local_28 = local_30;
            local_14 = local_24;
          }
          if ((*(char *)(DAT_1202e818 + 0x209) == '\0') &&
             ((iVar6 = FUN_104f9560(), iVar6 == 2 || (iVar6 == 3)))) {
            local_38 = FUN_1025b060();
          }
          iVar6 = (**(code **)(*DAT_12031270 + 8))();
          if (iVar6 == 1) {
            local_20 = 2;
            local_28 = 3;
            local_14 = (undefined4 *)0x3;
            local_3c = 1;
            local_38 = 1;
            local_34 = 1;
            local_2c = 1;
            local_18 = (int *)0x1;
            local_c = (int *)0x1;
          }
        }
        iVar6 = (**(code **)(*piVar4 + 0xa8))();
        if (iVar6 == 0xb) {
          local_10 = 0;
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x2c))(local_3c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x34))(local_20);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x44))(local_10);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x40))(local_34);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x3c))(local_2c);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x48))(local_18);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x4c))(local_38);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x50))(local_28);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x54))(local_14);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x30))(local_c);
        iVar6 = FUN_1140dd10();
        if ((iVar6 == 0x11) || (cVar2 = FUN_1140e140(), cVar2 != '\0')) {
          local_c = (int *)FUN_10b4df50();
          if ((DAT_12031274 & 2) == 0) {
            DAT_12031274 = DAT_12031274 | 2;
            DAT_12031278 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_Team1Color");
          }
          if ((DAT_12031274 & 4) == 0) {
            DAT_12031274 = DAT_12031274 | 4;
            DAT_1203127c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_Team2Color");
          }
          if ((DAT_12031274 & 8) == 0) {
            DAT_12031274 = DAT_12031274 | 8;
            DAT_12031280 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_NeutralColor");
          }
          if ((DAT_12031274 & 0x10) == 0) {
            DAT_12031274 = DAT_12031274 | 0x10;
            DAT_12031284 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_FriendColor");
          }
          if ((DAT_12031274 & 0x20) == 0) {
            DAT_12031274 = DAT_12031274 | 0x20;
            DAT_12031288 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_HostileColor");
          }
          param_2 = (int *)0xffffffff;
          if ((DAT_12031274 & 0x40) == 0) {
            DAT_12031274 = DAT_12031274 | 0x40;
            DAT_1203128c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                            ("r_UseTeamColor");
          }
          iVar6 = (**(code **)(*DAT_1203128c + 8))();
          if (iVar6 == 0) {
            if ((local_c == (int *)0x0) ||
               (cVar2 = FUN_10a63700(piVar9), piVar5 = DAT_12031288, cVar2 == '\0')) {
              piVar5 = DAT_12031284;
            }
          }
          else {
            iVar6 = FUN_10a636e0();
            piVar5 = DAT_12031278;
            if ((iVar6 != 1) && (piVar5 = DAT_1203127c, iVar6 != 2)) {
              piVar5 = DAT_12031280;
            }
          }
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0xffffffff;
          }
          else {
            piVar5 = (int *)(**(code **)(*piVar5 + 8))();
            param_2 = piVar5;
          }
          local_8._0_2_ = CONCAT11((char)((uint)piVar5 >> 8),(char)((uint)piVar5 >> 0x10));
          local_8 = CONCAT13((char)((uint)param_2 >> 0x18),
                             CONCAT12((char)param_2,(undefined2)local_8));
        }
        else {
          local_8 = 0xffd2dce0;
          local_c = (int *)FUN_10a60b80();
          if (((local_c != (int *)0x0) && (iVar6 = FUN_10b4df50(), iVar6 != 0)) &&
             (iVar6 = FUN_10f19240(), iVar6 != 0)) {
            local_14 = (undefined4 *)(**(code **)(**(int **)(iVar6 + 0x2d5c) + 0x10))();
            param_2 = (int *)*local_14;
            if (param_2 != (int *)local_14[1]) {
              do {
                iVar6 = *param_2;
                (**(code **)(*local_c + 0xb8))();
                cVar2 = FUN_100e5810(iVar6 + 0x10);
                if (cVar2 != '\0') {
                  if (-1 < (char)DAT_12031274) {
                    DAT_12031274 = DAT_12031274 | 0x80;
                    DAT_12031290 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                                    ("r_FriendColor");
                  }
                  if (DAT_12031290 == (int *)0x0) {
                    uVar8 = 0xffffffff;
                  }
                  else {
                    uVar8 = (**(code **)(*DAT_12031290 + 8))();
                  }
                  local_8._0_2_ = CONCAT11((char)((uint)uVar8 >> 8),(char)((uint)uVar8 >> 0x10));
                  local_8 = CONCAT13((char)((uint)uVar8 >> 0x18),
                                     CONCAT12((char)uVar8,(undefined2)local_8));
                  piVar4 = local_1c;
                  break;
                }
                param_2 = param_2 + 1;
                piVar4 = local_1c;
              } while (param_2 != (int *)local_14[1]);
            }
          }
        }
      }
    }
    else {
      local_8 = 0xff9cd0ee;
    }
  }
  iVar6 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))();
  if ((iVar6 == 1) && (cVar2 = FUN_1140e140(), cVar2 == '\0')) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar6 = FUN_1025b060();
    iVar7 = FUN_1134b990();
    param_2 = (int *)(float)iVar7;
    cVar2 = (**(code **)(*local_1c + 0x180))();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x88))
              ((float)iVar6 / (float)param_2,1,cVar2 != '\0');
    cVar2 = (**(code **)(*piVar9 + 0x228))();
    if (cVar2 != '\0') {
      if ((DAT_12031274 & 0x100) == 0) {
        DAT_12031274 = DAT_12031274 | 0x100;
        DAT_12031294 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                        ("e_NamePad_PVP_Team");
      }
      if (DAT_12031294 != (int *)0x0) {
        iVar6 = *DAT_12031294;
        uVar8 = FUN_10a636e0();
        (**(code **)(iVar6 + 0x14))(uVar8);
      }
    }
    iVar6 = **(int **)(*(int *)(param_1 + 0x14) + 4);
    uVar8 = (**(code **)(*local_1c + 0x44))();
    (**(code **)(iVar6 + 0x28))(uVar8);
  }
  else {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x28))(0xff);
    cVar2 = (**(code **)(*piVar9 + 0x228))();
    if (cVar2 != '\0') {
      if ((DAT_12031274 & 0x200) == 0) {
        DAT_12031274 = DAT_12031274 | 0x200;
        DAT_12031298 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                        ("e_NamePad_PVP_Team");
      }
      if (DAT_12031298 != (int *)0x0) {
        (**(code **)(*DAT_12031298 + 0x14))(0xff);
      }
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x88))(0x3f800000,0,0);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x10))(&local_8);
  (**(code **)(*piVar9 + 0x64c))(&local_c,local_68);
  iVar6 = FUN_100e5c10();
  FUN_10c99130(*(undefined4 *)(iVar6 + 0x24));
  if ((local_44 != local_68) && (local_44 != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_44);
  }
  FUN_100e5670();
  (**(code **)(*piVar9 + 0x650))(&local_14,local_68);
  iVar6 = FUN_100e5c10();
  FUN_10c99130(*(undefined4 *)(iVar6 + 0x24));
  if ((local_44 != local_68) && (local_44 != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_44);
  }
  FUN_100e5670();
  piVar4 = local_c;
  if ((local_c[-2] != 0) && (cVar2 = (**(code **)(*piVar9 + 0x1c4))(), cVar2 == '\0')) {
    FUN_10e07b60(&DAT_11d9d724);
    FUN_10e07c70(piVar4,piVar4[-2]);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 8))(1,param_2);
  FUN_109ba100();
  FUN_109ba100();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x18))(&local_8);
  cVar2 = (**(code **)(*piVar9 + 0x1c4))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*piVar9 + 0x1cc))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar9 + 0x1c8))();
      if (cVar2 != '\0') {
        iVar7 = FUN_113f0e50();
        FUN_10b4df50();
        iVar12 = FUN_10f19240();
        iVar6 = **(int **)(*(int *)(param_1 + 0x14) + 4);
        if (iVar7 != iVar12) {
          (**(code **)(iVar6 + 0x8c))(9);
          return;
        }
        (**(code **)(iVar6 + 0x8c))(8);
        return;
      }
      cVar2 = (**(code **)(*piVar9 + 0x1d4))();
      if (cVar2 == '\0') {
        uVar8 = 0x1c;
      }
      else {
        uVar8 = 4;
      }
    }
    else {
      uVar8 = 0x10;
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x8c))(uVar8);
    return;
  }
  piVar9 = (int *)FUN_10f19240();
  if (piVar9 == (int *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*piVar9 + 0x280))();
  if (cVar2 == '\0') {
    uVar8 = 2;
  }
  else {
    uVar8 = 1;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x8c))(uVar8);
  (**(code **)(*piVar9 + 0x3ac))(local_a8);
  uVar8 = FUN_1025b060();
  local_70 = local_90;
  local_90[0] = 0;
  local_6c = local_70;
  iVar6 = FUN_11442b60(uVar8);
  local_10 = 0;
  if (iVar6 == 0) {
    FUN_100e5ff0(&DAT_11d9d57c);
  }
  else {
    puVar10 = (undefined2 *)FUN_100e5c10(local_d0);
    if (puVar10 != local_90) {
      FUN_100e61d0(*(undefined4 *)(puVar10 + 0x12),*(undefined4 *)(puVar10 + 0x10));
    }
    if ((local_ac != local_d0) && (local_ac != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_ac);
    }
    local_10 = *(int *)(iVar6 + 0x94);
  }
  param_2 = (int *)0x0;
  if ((int *)piVar9[0xaaf] != (int *)0x0) {
    param_2 = (int *)(**(code **)(*(int *)piVar9[0xaaf] + 0x1c))();
  }
  local_c = (int *)0x0;
  iVar7 = (**(code **)(*piVar9 + 0x4e8))();
  if ((iVar7 != 0) && (iVar7 = (**(code **)(*piVar9 + 0x4e8))(), iVar7 != 0)) {
    local_c = (int *)FUN_1141f8e0();
  }
  if ((int *)piVar9[0xaaf] != (int *)0x0) {
    param_2 = (int *)(**(code **)(*(int *)piVar9[0xaaf] + 0x27c))();
  }
  iVar7 = (**(code **)(*DAT_12031270 + 8))();
  if (iVar7 != 0) {
    FUN_100e5ff0(&DAT_11cec810);
    local_10 = 1;
    local_c = (int *)0xb4;
    FUN_100e0410(&DAT_11cec81c);
    param_2 = (int *)0x1;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x38))(local_c);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x14))(local_6c);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x58))(local_10);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x5c))(param_2);
  if (local_10 == 1) {
    param_2 = (int *)0xff2ff4ff;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x18))(&param_2);
  }
  else if ((local_10 == 10) && (iVar6 != 0)) {
    if ((*(int *)(iVar6 + 0xd8) - *(int *)(iVar6 + 0xd4) & 0xfffffffcU) == 0x10) {
      puVar1 = *(undefined1 **)(iVar6 + 0xd4);
      param_2._0_2_ = CONCAT11(puVar1[4],*puVar1);
      param_2._0_3_ = CONCAT12(puVar1[8],param_2._0_2_);
      param_2 = (int *)CONCAT13(puVar1[0xc],param_2._0_3_);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x94))(param_2);
    }
    if ((*(int *)(iVar6 + 0xe4) - *(int *)(iVar6 + 0xe0) & 0xfffffffcU) == 0x10) {
      puVar1 = *(undefined1 **)(iVar6 + 0xe0);
      param_2._0_2_ = CONCAT11(puVar1[4],*puVar1);
      param_2._0_3_ = CONCAT12(puVar1[8],param_2._0_2_);
      param_2 = (int *)CONCAT13(puVar1[0xc],param_2._0_3_);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x98))(param_2);
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x9c))(*(undefined4 *)(iVar6 + 0xec));
  }
  if ((local_6c != local_90) && (local_6c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_6c);
  }
  local_48 = local_68;
  local_68[0] = 0;
  local_44 = local_48;
  if (local_94 == local_98) {
    FUN_100e5ff0(&DAT_11d9d57c);
  }
  else {
    FUN_10e07b00(local_a8,local_68);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x1c))(local_44);
  iVar6 = 0;
  if ((DAT_12031274 & 0x400) == 0) {
    DAT_12031274 = DAT_12031274 | 0x400;
    DAT_1203129c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_NP_StarsCnt");
  }
  if (DAT_1203129c != (int *)0x0) {
    iVar6 = (**(code **)(*DAT_1203129c + 8))();
    if ((DAT_12031274 & 0x800) == 0) {
      DAT_12031274 = DAT_12031274 | 0x800;
      DAT_120312a0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_NP_StarsFlag");
    }
    uVar11 = (**(code **)(*DAT_120312a0 + 8))();
    param_2 = (int *)uVar11;
    if (iVar6 != 0) goto LAB_10e07892;
  }
  FUN_11399950(local_c0);
  uVar11 = 0;
  if (local_b0 - (int)local_ac != 0) {
    iVar7 = 0;
    param_2 = (int *)(((local_b0 - (int)local_ac) + 1) / 2);
    if (0 < (int)param_2) {
      uVar13 = 1;
      do {
        if (local_ac[iVar7 * 2] == '2') {
          uVar11 = uVar11 | uVar13;
LAB_10e07864:
          iVar6 = iVar6 + 1;
        }
        else if (local_ac[iVar7 * 2] == '1') goto LAB_10e07864;
        iVar7 = iVar7 + 1;
        uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
        param_1 = local_40;
      } while (iVar7 < (int)param_2);
    }
  }
  if ((local_ac != local_c0) && (local_ac != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_ac);
  }
LAB_10e07892:
  if (6 < iVar6) {
    iVar6 = 7;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x24))(iVar6,uVar11);
  if ((local_44 != local_68) && (local_44 != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_44);
  }
  if ((local_94 != local_a8) && (local_94 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_94);
    return;
  }
  return;
}



/* ===== FUN_10e4bce0 @ 10e4bce0  size=504 ===== */
// strings:
//   "GetGuildInfo"
//   "Success"
//   "HallModelName"
//   "RecruitingModelName"
//   "ResourcingModelName"
//   "TradingModelName"
//   "TrainingModelName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""GetGuildInfo""
     ""Success""
     ""HallModelName""
     ""RecruitingModelName""
     ""ResourcingModelName""
     ""TradingModelName""
     ""TrainingModelName"" */

void FUN_10e4bce0(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_12036870 & 1) == 0) {
    DAT_12036870 = DAT_12036870 | 1;
    _DAT_12036840 = "GetGuildInfo";
    _DAT_12036844 = 0;
    _DAT_12036848 = &DAT_11d9d32b;
    _DAT_1203684c = 0;
    DAT_12036850 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12036854,auStack_8,"GetGuildInfo",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_12036868 = &DAT_11df7728;
    _DAT_12036858 = 0;
    uRam1203685c = 0;
    uRam12036860 = 0;
    uRam12036864 = 0;
    FUN_11a8911f(&LAB_11c8de60);
  }
  if ((DAT_12036870 & 2) == 0) {
    DAT_12036870 = DAT_12036870 | 2;
    _DAT_12036878 = "Success";
    uRam1203687c = 0;
    _DAT_12036880 = &DAT_11d9d32b;
    uRam12036884 = 6;
    _DAT_12036888 = "HallModelName";
    uRam1203688c = 0;
    puRam12036890 = &DAT_11d9d32b;
    uRam12036894 = 5;
    _DAT_12036898 = "RecruitingModelName";
    uRam1203689c = 0;
    puRam120368a0 = &DAT_11d9d32b;
    uRam120368a4 = 5;
    _DAT_120368a8 = "ResourcingModelName";
    uRam120368ac = 0;
    puRam120368b0 = &DAT_11d9d32b;
    uRam120368b4 = 5;
    _DAT_120368b8 = "TradingModelName";
    uRam120368bc = 0;
    puRam120368c0 = &DAT_11d9d32b;
    uRam120368c4 = 5;
    _DAT_120368c8 = "TrainingModelName";
    uRam120368cc = 0;
    puRam120368d0 = &DAT_11d9d32b;
    uRam120368d4 = 5;
    _DAT_120368d8 = 0;
    uRam120368dc = 0;
    uRam120368e0 = 0;
    uRam120368e4 = 0;
  }
  *param_1 = &DAT_12036840;
  param_1[1] = &DAT_12036878;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e5cc70 @ 10e5cc70  size=617 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "OnEvent"
//   "playerNetID"
//   "playerFactionID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""OnEvent""
     ""playerNetID""
     ""playerFactionID"" */

void FUN_10e5cc70(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_12037460 & 1) == 0) {
    DAT_12037460 = DAT_12037460 | 1;
    _DAT_12037400 = "enable";
    _DAT_12037404 = 0;
    _DAT_12037408 = &DAT_11d9d32b;
    _DAT_1203740c = 0;
    _DAT_12037410 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12037414,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037418 = "disable";
    _DAT_1203741c = 0;
    _DAT_12037420 = &DAT_11d9d32b;
    _DAT_12037424 = 0;
    _DAT_12037428 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203742c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_12037440 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12037430 = "triggerOnce";
    _DAT_12037434 = 0;
    _DAT_12037438 = &DAT_11d9d32b;
    _DAT_1203743c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12037444,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    DAT_12037458 = &DAT_11df7728;
    _DAT_12037448 = 0;
    uRam1203744c = 0;
    uRam12037450 = 0;
    uRam12037454 = 0;
    FUN_11a8911f(&LAB_11c8e500);
  }
  if ((DAT_12037460 & 2) == 0) {
    DAT_12037460 = DAT_12037460 | 2;
    _DAT_12037468 = "OnEvent";
    uRam1203746c = 0;
    _DAT_12037470 = &DAT_11d9d32b;
    uRam12037474 = 1;
    _DAT_12037478 = "playerNetID";
    uRam1203747c = 0;
    puRam12037480 = &DAT_11d9d32b;
    uRam12037484 = 1;
    _DAT_12037488 = "playerFactionID";
    uRam1203748c = 0;
    puRam12037490 = &DAT_11d9d32b;
    uRam12037494 = 1;
    _DAT_12037498 = 0;
    uRam1203749c = 0;
    uRam120374a0 = 0;
    uRam120374a4 = 0;
  }
  *param_1 = &DAT_12037400;
  param_1[1] = &DAT_12037468;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e90480 @ 10e90480  size=418 ===== */
// strings:
//   "playerNetID"
//   "faction"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""playerNetID""
     ""faction"" */

void FUN_10e90480(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12039620 & 1) == 0) {
    DAT_12039620 = DAT_12039620 | 1;
    _DAT_120395d8 = &DAT_11ced080;
    _DAT_120395dc = 0;
    _DAT_120395e0 = &DAT_11d9d32b;
    _DAT_120395e4 = 0;
    _DAT_120395e8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120395ec,&uStack_8,&DAT_11ced080,0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_12039600 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120395f0 = "playerNetID";
    _DAT_120395f4 = 0;
    _DAT_120395f8 = &DAT_11d9d32b;
    _DAT_120395fc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039604,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12039618 = &DAT_11df7728;
    _DAT_12039608 = 0;
    uRam1203960c = 0;
    uRam12039610 = 0;
    uRam12039614 = 0;
    FUN_11a8911f(&LAB_11c8f450);
  }
  if ((DAT_12039620 & 2) == 0) {
    DAT_12039620 = DAT_12039620 | 2;
    _DAT_12039624 = "faction";
    uRam12039628 = 0;
    puRam1203962c = &DAT_11d9d32b;
    _DAT_12039630 = 1;
    _DAT_12039634 = 0;
    uRam12039638 = 0;
    uRam1203963c = 0;
    uRam12039640 = 0;
  }
  *param_1 = &DAT_120395d8;
  param_1[1] = &DAT_12039624;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_1103d2d0 @ 1103d2d0  size=2000 ===== */
// strings:
//   "QueryBattleStatus"
//   "GetNumLightsActivated"
//   "IsMountedWeaponUsableWithTarget"
//   "IsPlayer"
//   "entityId"
//   "GetPlayerLevel"
//   "PromptPlayerLevelTooLow"
//   "requiredLevel"
//   "LevelCtrlSwitchToNewLevel"
//   "levelname"
//   "TeleportToLevel"
//   "levelid"
//   "RegionJumpTriggerHandle"
//   "TriggerName"
//   "RegionJumpNearbyHandle"
//   "Enable"
//   "SyncPlayerAvatar"
//   "id,PlayerIndex"
//   "FreeRopeAttachment"
//   "SyncPlayerAvatarById"

/* [RE-AUTO c0]
   strings:
     ""QueryBattleStatus""
     ""GetNumLightsActivated""
     ""IsMountedWeaponUsableWithTarget""
     ""IsPlayer""
     ""entityId""
     ""GetPlayerLevel""
     ""PromptPlayerLevelTooLow""
     ""requiredLevel""
     ""LevelCtrlSwitchToNewLevel""
     ""levelname"" */

void __fastcall FUN_1103d2d0(int param_1)

{
  char *local_40;
  char *local_3c;
  int local_38;
  code *local_34;
  undefined4 uStack_30;
  int iStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  int *local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 uStack_10;
  int iStack_c;
  code *pcStack_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103ab80;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "QueryBattleStatus";
    local_3c = "";
    local_20 = FUN_1103e690;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103ac10;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "GetNumLightsActivated";
    local_3c = "";
    local_20 = FUN_1103e690;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  local_14 = (code *)&LAB_1103ac90;
  pcStack_8 = FUN_1103e9d0;
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_3c = "";
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "IsMountedWeaponUsableWithTarget";
    local_34 = (code *)&LAB_1103ac90;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1103e9d0;
    iStack_2c = param_1;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b1d0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "IsPlayer";
    local_3c = "entityId";
    local_20 = FUN_1103e730;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103d1c0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "GetPlayerLevel";
    local_3c = "entityId";
    local_20 = FUN_1103e730;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103d290;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "PromptPlayerLevelTooLow";
    local_3c = "requiredLevel";
    local_20 = FUN_1103e6b0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b290;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "LevelCtrlSwitchToNewLevel";
    local_3c = "levelname";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b330;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "TeleportToLevel";
    local_3c = "levelid";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b690;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "RegionJumpTriggerHandle";
    local_3c = "TriggerName";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b740;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "RegionJumpNearbyHandle";
    local_3c = "Enable";
    local_20 = FUN_1103e940;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b880;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "SyncPlayerAvatar";
    local_3c = "id,PlayerIndex";
    local_20 = FUN_1103e780;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b8f0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "FreeRopeAttachment";
    local_3c = "id";
    local_20 = FUN_1103e730;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b930;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "SyncPlayerAvatarById";
    local_3c = "ProxyId,PlayerId";
    local_20 = FUN_1103e800;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103bb00;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "SyncPlayerPos";
    local_3c = "pos";
    local_20 = FUN_1103e920;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b9a0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "SyncPetAvatar";
    local_3c = "id,index,nTrainingType,nPetID";
    local_20 = FUN_1103e7e0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103ba40;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "ShowInteractIcon";
    local_3c = "show";
    local_20 = FUN_1103e940;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b400;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "TeleportToFarm";
    local_3c = "";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b4e0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "LeaveFarm";
    local_3c = "";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b570;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "EnterGuildCamp";
    local_3c = "";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103b5e0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "LeaveGuildCamp";
    local_3c = "";
    local_20 = FUN_1103e6f0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103d020;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "HideWeapon";
    local_3c = "id,hide";
    local_20 = FUN_1103e8c0;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  local_14 = FUN_1103ba90;
  pcStack_8 = FUN_1103e9d0;
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_3c = "";
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "UpdateSoundAreaOcclusion";
    local_34 = FUN_1103ba90;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_1103e9d0;
    iStack_2c = param_1;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &iStack_c;
    pcStack_8 = FUN_1103d150;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    iStack_2c = 0;
    local_40 = "SendEventToGameObject";
    local_3c = "entityId, event";
    local_20 = FUN_1103e860;
    local_18 = 8;
    iStack_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  return;
}



/* ===== FUN_11043df0 @ 11043df0  size=1201 ===== */
// strings:
//   "TextMessageCenter"
//   "TextMessageConsole"
//   "TextMessageError"
//   "TextMessageInfo"
//   "TextMessageServer"
//   "ChatToTarget"
//   "ChatToTeam"
//   "ChatToAll"
//   "TextMessageToAll"
//   "TextMessageToAllRemote"
//   "TextMessageToClient"
//   "MO_DEACTIVATED"
//   "MO_COMPLETED"
//   "MO_FAILED"
//   "MO_ACTIVATED"

/* [RE-AUTO c0]
   strings:
     ""TextMessageCenter""
     ""TextMessageConsole""
     ""TextMessageError""
     ""TextMessageInfo""
     ""TextMessageServer""
     ""ChatToTarget""
     ""ChatToTeam""
     ""ChatToAll""
     ""TextMessageToAll""
     ""TextMessageToAllRemote"" */

void __fastcall FUN_11043df0(int param_1)

{
  int local_14;
  int *local_10;
  
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageCenter",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageConsole",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageError",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageInfo",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageServer",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("ChatToTarget",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("ChatToTeam",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("ChatToAll",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageToAll",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_47800400;
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageToAllRemote",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("TextMessageToClient",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("MO_DEACTIVATED",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("MO_COMPLETED",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("MO_FAILED",&local_14);
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x70))("MO_ACTIVATED",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
      return;
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  return;
}



/* ===== FUN_110fa850 @ 110fa850  size=703 ===== */
// strings:
//   "RayWorldIntersection(Game)"
//   "Properties"
//   "bNoFriendlyFire"

/* [RE-AUTO c0]
   strings:
     ""RayWorldIntersection(Game)""
     ""Properties""
     ""bNoFriendlyFire"" */

void __thiscall FUN_110fa850(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_174 [48];
  undefined1 local_144 [12];
  float local_138;
  float local_134;
  float local_130;
  undefined1 local_80 [4];
  int local_7c;
  undefined1 local_40 [40];
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  int *local_8;
  
  if ((((param_1[0x12d] != 0) && (piVar4 = (int *)FUN_10cbb820(), piVar4 != (int *)0x0)) &&
      (cVar3 = (**(code **)(*piVar4 + 0x1c4))(), fVar2 = DAT_11de9890, cVar3 != '\0')) &&
     ((*(char *)(DAT_1202e818 + 0x16d) == '\0' &&
      (fVar1 = (float)param_1[0x138], param_1[0x138] = (int)(fVar1 - (float)param_2),
      fVar1 - (float)param_2 <= fVar2)))) {
    param_1[0x138] = 0x3e19999a;
    piVar5 = (int *)(**(code **)(*piVar4 + 0x198))();
    if (piVar5 != (int *)0x0) {
      FUN_10a6fd70();
      (**(code **)(*piVar5 + 8))(local_174);
      (**(code **)(*param_1 + 0x378))(0);
      uVar6 = FUN_11095290(param_1,local_40,10);
      local_18 = local_138 * DAT_11ceb528;
      local_14 = local_134 * DAT_11ceb528;
      local_10 = local_130 * DAT_11ceb528;
      iVar7 = FUN_10a798b0(local_144,&local_18,0x11f,0x40f,0,local_80,1,local_40,uVar6,0,0,
                           "RayWorldIntersection(Game)",0,4);
      if (((iVar7 != 0) && (local_7c != 0)) &&
         ((piVar5 = (int *)(**(code **)(*DAT_1202f454 + 0x5c))(local_7c), piVar5 != (int *)0x0 &&
          (param_2 = (int *)(**(code **)(*piVar5 + 4))(), param_2 != (int *)0x0)))) {
        local_8 = (int *)(**(code **)(*piVar5 + 0x134))();
        piVar4 = (int *)piVar4[3];
        local_c = piVar4;
        if (((piVar4 == (int *)0x0) || (local_8 == (int *)0x0)) || (param_2 == (int *)param_1[2])) {
          iVar7 = FUN_10a77a10();
          if (iVar7 != 0) {
            param_2 = (int *)0x0;
            cVar3 = FUN_10a68ce0("Properties",&param_2);
            piVar4 = param_2;
            if (((cVar3 != '\0') &&
                (cVar3 = FUN_10a68900("bNoFriendlyFire",&param_2), cVar3 != '\0')) &&
               (param_2 != (int *)0x0)) {
              (**(code **)(*param_1 + 0x378))(1);
              (**(code **)(param_1[0xd3] + 0x34))();
            }
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0xc))();
            }
          }
        }
        else {
          piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          piVar5 = (int *)(**(code **)(*piVar5 + 0x80))();
          piVar5 = (int *)(**(code **)(*piVar5 + 0x30))(param_2);
          if (piVar5 == (int *)0x0) {
            iVar7 = *local_8;
            uVar6 = (**(code **)(*local_c + 0x134))(0);
            cVar3 = (**(code **)(iVar7 + 0x94))(uVar6);
            if (cVar3 == '\0') {
              (**(code **)(*param_1 + 0x378))(1);
              (**(code **)(param_1[0xd3] + 0x34))();
              return;
            }
          }
          else {
            cVar3 = (**(code **)(*piVar5 + 0xf4))(piVar4);
            if (cVar3 != '\0') {
              (**(code **)(*param_1 + 0x378))(1);
              (**(code **)(param_1[0xd3] + 0x34))();
              return;
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_11106330 @ 11106330  size=340 ===== */
// strings:
//   "Properties"
//   "bNoFriendlyFire"

/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""bNoFriendlyFire"" */

bool FUN_11106330(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  int local_8;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == (int *)0x0) {
      return false;
    }
    iVar2 = (**(code **)(*param_1 + 0x134))();
    if (iVar2 != 0) {
      piVar5 = *(int **)(param_3 + 0xc);
      piVar3 = (int *)(**(code **)(*param_1 + 0x134))();
      iVar2 = *piVar3;
      uVar4 = (**(code **)(*piVar5 + 0x134))(0);
      cVar1 = (**(code **)(iVar2 + 0x94))(uVar4);
      return cVar1 == '\0';
    }
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  param_2 = (int *)0x0;
  piVar3 = (int *)(**(code **)(*param_1 + 0x150))(2);
  piVar5 = (int *)0x0;
  if (((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 0x38))(), iVar2 == 0)) ||
     (cVar1 = FUN_10a68ce0("Properties",&param_2), piVar5 = param_2, cVar1 == '\0')) {
    bVar6 = false;
  }
  else {
    local_8 = 0;
    cVar1 = FUN_10a68900("bNoFriendlyFire",&local_8);
    if ((cVar1 == '\0') || (local_8 == 0)) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))();
      }
      iVar2 = (**(code **)(*param_1 + 4))();
      if (iVar2 == 0) {
        return false;
      }
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x80))();
      iVar2 = *piVar5;
      uVar4 = (**(code **)(*param_1 + 4))();
      piVar5 = (int *)(**(code **)(iVar2 + 0x30))(uVar4);
      if (piVar5 == (int *)0x0) {
        return false;
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        return false;
      }
      cVar1 = (**(code **)(*piVar5 + 0xf4))(*(int *)(param_3 + 0xc));
      if (cVar1 == '\0') {
        return false;
      }
      return true;
    }
    bVar6 = true;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  return bVar6;
}



/* ===== FUN_111743d0 @ 111743d0  size=52 ===== */
// strings:
//   "CCommerceBoatInfo"

/* [RE-AUTO c0]
   strings:
     ""CCommerceBoatInfo"" */

undefined4 FUN_111743d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109faf70(0,"CCommerceBoatInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11174440 @ 11174440  size=52 ===== */
// strings:
//   "CCommerceInfo"

/* [RE-AUTO c0]
   strings:
     ""CCommerceInfo"" */

undefined4 FUN_11174440(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109fb200(0,"CCommerceInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11175b20 @ 11175b20  size=266 ===== */
// strings:
//   "CGuildMatchInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildMatchInfo"" */

void __thiscall FUN_11175b20(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar3 = FUN_109445a0(0,"CGuildMatchInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar3 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_2 / iVar1) * 4);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(iVar3 + (param_2 % iVar1) * 4);
      goto LAB_11175b73;
    }
  }
  uVar4 = 0;
LAB_11175b73:
  *(undefined4 *)(param_1 + 0x114) = uVar4;
  *(int *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_4;
  local_18 = 0xe76;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = param_3;
  local_8 = param_4;
  if (*(int *)(param_1 + 4) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(&local_18);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(iVar3 + 0x98) + 0x14))(&local_18);
    }
    iVar3 = FUN_113f3640();
    if (*(int *)(iVar3 + 0x4c) != 0) {
      iVar3 = FUN_113f3640();
      (**(code **)(**(int **)(iVar3 + 0x4c) + 0x14))(&local_18);
    }
  }
  if (param_3 == 1) {
    FUN_11172ef0();
    FUN_11172e60();
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_1149f860();
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_11443140();
    }
  }
  return;
}



/* ===== FUN_111765f0 @ 111765f0  size=108 ===== */
// strings:
//   "CGuildMatchInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildMatchInfo"" */

void __thiscall FUN_111765f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_109445a0(0,"CGuildMatchInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
      goto LAB_1117663f;
    }
  }
  uVar3 = 0;
LAB_1117663f:
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_4;
  return;
}



/* ===== FUN_111e3320 @ 111e3320  size=78 ===== */
// calls: CChatTabInfo::GetManager
// strings:
//   "CChatTabInfo"

/* [RE-AUTO c0]
   calls: CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo"" */

undefined4 FUN_111e3320(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CChatTabInfo__GetManager(0,"CChatTabInfo",0);
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



/* ===== FUN_111e3370 @ 111e3370  size=52 ===== */
// calls: CChatTabInfo::GetManager
// strings:
//   "CChatTabInfo"

/* [RE-AUTO c0]
   calls: CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo"" */

undefined4 FUN_111e3370(int param_1)

{
  int iVar1;
  
  iVar1 = CChatTabInfo__GetManager(0,"CChatTabInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_111f2d90 @ 111f2d90  size=78 ===== */
// calls: CGuildQuestPrizeInfo::GetInfoManager
// strings:
//   "CGuildQuestPrizeInfo"

/* [RE-AUTO c0]
   calls: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo"" */

undefined4 FUN_111f2d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildQuestPrizeInfo__GetInfoManager(0,"CGuildQuestPrizeInfo",0);
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



/* ===== FUN_111f2de0 @ 111f2de0  size=78 ===== */
// calls: CGuildRandCommodityInfo::GetInfoManager
// strings:
//   "CGuildRandCommodityInfo"

/* [RE-AUTO c0]
   calls: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo"" */

undefined4 FUN_111f2de0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildRandCommodityInfo__GetInfoManager(0,"CGuildRandCommodityInfo",0);
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



/* ===== FUN_111f2e40 @ 111f2e40  size=78 ===== */
// calls: CGuildTaskGroupInfo::GetInfoManager
// strings:
//   "CGuildTaskGroupInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo"" */

undefined4 FUN_111f2e40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTaskGroupInfo__GetInfoManager(0,"CGuildTaskGroupInfo",0);
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



/* ===== FUN_111f2e90 @ 111f2e90  size=78 ===== */
// calls: CGuildTaskLibInfo::GetInfoManager
// strings:
//   "CGuildTaskLibInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskLibInfo::GetManagers
   strings:
     ""CGuildTaskLibInfo"" */

undefined4 FUN_111f2e90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTaskLibInfo__GetInfoManager(0,"CGuildTaskLibInfo",0);
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



/* ===== FUN_11260f90 @ 11260f90  size=398 ===== */
// strings:
//   "your don't have guild yet"

/* [RE-AUTO c0]
   strings:
     ""your don't have guild yet"" */

void FUN_11260f90(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    iVar2 = FUN_11398f30();
    if (iVar2 == 0) {
      local_28 = local_38;
      local_24 = local_28;
      FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
      local_10 = local_20;
      local_c = local_10;
      FUN_100b62c0("your don\'t have guild yet","");
      FUN_111e09b0();
      FUN_1115cba0(8,local_20,local_38,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      puVar6 = local_38;
      puVar4 = local_24;
    }
    else {
      local_10 = local_20;
      local_c = local_10;
      FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
      FUN_11398f30();
      pcVar3 = (char *)FUN_114a75c0();
      local_28 = local_38;
      pcVar1 = pcVar3;
      do {
        pcVar5 = pcVar1;
        pcVar1 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      local_24 = local_28;
      FUN_100b62c0(pcVar3,pcVar5);
      FUN_111e09b0();
      FUN_1115cba0(8,local_38,local_20,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_24);
      }
      puVar6 = local_20;
      puVar4 = local_c;
    }
    if ((puVar4 != puVar6) && (puVar4 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puVar4);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1145e690 @ 1145e690  size=112 ===== */
// calls: CGuildCommodityUnlockInfo::FindInfoByKey
// strings:
//   "CGuildCommodityUnlockInfo"

/* [RE-AUTO c0]
   calls: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo"" */

undefined4 FUN_1145e690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CGuildCommodityUnlockInfo__FindInfoByKey(0,"CGuildCommodityUnlockInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar1 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar1 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (param_2 / iVar2) * 4);
    if ((iVar1 != 0) &&
       ((iVar1 = *(int *)(iVar1 + (param_2 % iVar2) * 4), iVar1 != 0 &&
        (*(int *)(iVar1 + 0x18) <= (int)(uint)*(byte *)(param_1 + 0x223))))) {
      iVar2 = FUN_114a8610();
      if (*(int *)(iVar1 + 0x1c) <= iVar2) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_1145eed0 @ 1145eed0  size=24 ===== */
// calls: CGuildCommodityUnlockInfo::FindInfoByKey
// strings:
//   "CGuildCommodityUnlockInfo"

/* [RE-AUTO c0]
   calls: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo"" */

void FUN_1145eed0(void)

{
  int *piVar1;
  
  piVar1 = (int *)CGuildCommodityUnlockInfo__FindInfoByKey(0,"CGuildCommodityUnlockInfo",0);
                    /* WARNING: Could not recover jumptable at 0x1145eee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))();
  return;
}



/* ===== FUN_1145f170 @ 1145f170  size=78 ===== */
// calls: CGuildCommodityUnlockInfo::FindInfoByKey
// strings:
//   "CGuildCommodityUnlockInfo"

/* [RE-AUTO c0]
   calls: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo"" */

undefined4 FUN_1145f170(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildCommodityUnlockInfo__FindInfoByKey(0,"CGuildCommodityUnlockInfo",0);
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



/* ===== FUN_1145f1c0 @ 1145f1c0  size=78 ===== */
// calls: CGuildCommodityUnlockInfo::FindInfoByKey
// strings:
//   "CGuildCommodityUnlockInfo"

/* [RE-AUTO c0]
   calls: CGuildCommodityUnlockInfo::GetManagers
   strings:
     ""CGuildCommodityUnlockInfo"" */

undefined4 FUN_1145f1c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildCommodityUnlockInfo__FindInfoByKey(0,"CGuildCommodityUnlockInfo",0);
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



/* ===== FUN_114891e0 @ 114891e0  size=256 ===== */
// calls: CQualifierMatchInfo::GetInfoManager, CEliminateMatchInfo::GetInfoManager
// strings:
//   "CGuildMatchInfo"
//   "CQualifierMatchInfo"
//   "CEliminateMatchInfo"

/* [RE-AUTO c0]
   calls: CQualifierMatchInfo::GetManagers, CEliminateMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo""
     ""CQualifierMatchInfo""
     ""CEliminateMatchInfo"" */

void __thiscall FUN_114891e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_109445a0(0,"CGuildMatchInfo",0);
  if (((param_2 == -1) ||
      (((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)))) ||
     ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))) {
LAB_11489231:
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_11489231;
    uVar4 = *(undefined4 *)(iVar2 + (iVar3 % iVar1) * 4);
  }
  *param_1 = uVar4;
  iVar2 = CQualifierMatchInfo__GetInfoManager(0,"CQualifierMatchInfo",0);
  if (((param_2 == -1) || ((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)))) ||
     ((iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0 ||
      ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))))
     ) {
LAB_1148927b:
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_1148927b;
    uVar4 = *(undefined4 *)(iVar2 + (iVar3 % iVar1) * 4);
  }
  param_1[1] = uVar4;
  iVar2 = CEliminateMatchInfo__GetInfoManager(0,"CEliminateMatchInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) &&
      ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + (iVar3 % iVar1) * 4);
      goto LAB_114892c8;
    }
  }
  uVar4 = 0;
LAB_114892c8:
  param_1[2] = uVar4;
  FUN_114896e0(param_2,param_3,param_4);
  return;
}



/* ===== FUN_114896e0 @ 114896e0  size=363 ===== */
// calls: CQualifierMatchInfo::GetInfoManager, CEliminateMatchInfo::GetInfoManager
// strings:
//   "CGuildMatchInfo"
//   "CQualifierMatchInfo"
//   "CEliminateMatchInfo"

/* [RE-AUTO c0]
   calls: CQualifierMatchInfo::GetManagers, CEliminateMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo""
     ""CQualifierMatchInfo""
     ""CEliminateMatchInfo"" */

void __thiscall FUN_114896e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    iVar2 = FUN_109445a0(0,"CGuildMatchInfo",0);
    if (((param_2 == -1) ||
        (((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
         (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)))) ||
       ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3))))
    {
LAB_11489736:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
      if (iVar2 == 0) goto LAB_11489736;
      iVar2 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
    }
    *param_1 = iVar2;
  }
  if (param_1[1] == 0) {
    iVar2 = CQualifierMatchInfo__GetInfoManager(0,"CQualifierMatchInfo",0);
    if (((param_2 == -1) || ((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)))) ||
       ((iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0 ||
        ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))
        ))) {
LAB_11489786:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
      if (iVar2 == 0) goto LAB_11489786;
      iVar2 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
    }
    param_1[1] = iVar2;
  }
  if (param_1[2] != 0) goto LAB_114897dc;
  iVar2 = CEliminateMatchInfo__GetInfoManager(0,"CEliminateMatchInfo",0);
  if ((param_2 == -1) ||
     ((((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)) ||
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), param_2 < 0 ||
       (*(int *)(iVar2 + 0x24) <= param_2)))))) {
LAB_114897d7:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_114897d7;
    iVar2 = *(int *)(iVar2 + (param_2 % iVar1) * 4);
  }
  param_1[2] = iVar2;
LAB_114897dc:
  iVar2 = param_1[1];
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[0xc] = param_3;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x14);
    param_1[7] = 0;
    param_1[6] = param_4 + (iVar1 * 0x10 - iVar3) * 4;
    iVar1 = *(int *)(iVar2 + 0x18);
    iVar2 = *(int *)(iVar2 + 0x14);
    param_1[9] = 0;
    param_1[8] = param_4 + (iVar1 + iVar2) * 0x3c;
  }
  if (param_1[2] != 0) {
    iVar2 = *(int *)(param_1[2] + 0x18);
    param_1[0xb] = 0;
    param_1[10] = param_4 + iVar2 * 0x3c;
  }
  return;
}



/* ===== FUN_114a6a70 @ 114a6a70  size=183 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

undefined4 __thiscall FUN_114a6a70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar4 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar5 = param_2 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar4 != 0) &&
       (((iVar4 = *(int *)(iVar4 + (iVar5 % iVar1) * 4), iVar4 != 0 &&
         (cVar3 = FUN_114a73a0(param_2), cVar3 == '\0')) &&
        ((*(int *)(iVar4 + 0x24) <= *(int *)(param_1 + 0x44) &&
         (((*(int *)(iVar4 + 0x28) <= *(int *)(param_1 + 0x4c) &&
           (*(int *)(iVar4 + 0x2c) <= *(int *)(param_1 + 0x54))) &&
          (*(int *)(iVar4 + 0x30) <= *(int *)(param_1 + 0x68))))))))) {
      puVar6 = *(undefined4 **)(iVar4 + 0x34);
      puVar2 = *(undefined4 **)(iVar4 + 0x38);
      while( true ) {
        if (puVar6 == puVar2) {
          return 1;
        }
        cVar3 = FUN_114a9700(*puVar6);
        if (cVar3 == '\0') break;
        puVar6 = puVar6 + 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_114a8660 @ 114a8660  size=78 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

undefined4 FUN_114a8660(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
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



/* ===== FUN_114a9ad0 @ 114a9ad0  size=519 ===== */
// calls: CGuildTaskLibInfo::GetInfoManager, CGuildTaskGroupInfo::GetInfoManager, CGuildTaskInfo::GetManager, CGuildTaskInfo::ValidateGuildTaskState
// strings:
//   "CGuildTaskLibInfo"
//   "CGuildTaskGroupInfo"
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskLibInfo::GetManagers, CGuildTaskGroupInfo::GetManagers,
   CGuildTaskInfo::GetManagers, CGuildTaskInfo::GetManagers_114a97b0
   strings:
     ""CGuildTaskLibInfo""
     ""CGuildTaskGroupInfo""
     ""CGuildTaskInfo"" */

void __thiscall FUN_114a9ad0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  undefined1 local_28 [24];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (*param_2 == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x168) = 1;
  iVar6 = *(int *)(param_2 + 1);
  local_8 = param_1;
  iVar2 = CGuildTaskLibInfo__GetInfoManager(0,"CGuildTaskLibInfo",0);
  if (((iVar6 == -1) ||
      (((iVar6 == 0 && (*(int *)(iVar2 + 0x30) != 0)) || (*(int *)(iVar2 + 0x28) == 0)))) ||
     ((iVar6 = iVar6 - *(int *)(iVar2 + 0x30), iVar6 < 0 || (*(int *)(iVar2 + 0x24) <= iVar6)))) {
LAB_114a9b3a:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar6 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 == 0) goto LAB_114a9b3a;
    uVar3 = *(undefined4 *)(iVar1 + (iVar6 % *(int *)(iVar2 + 0x28)) * 4);
  }
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  iVar6 = *(int *)(param_2 + 5);
  iVar2 = CGuildTaskGroupInfo__GetInfoManager(0,"CGuildTaskGroupInfo",0);
  if (((iVar6 != -1) && ((iVar6 != 0 || (*(int *)(iVar2 + 0x30) == 0)))) &&
     ((*(int *)(iVar2 + 0x28) != 0 &&
      ((iVar6 = iVar6 - *(int *)(iVar2 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar2 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar6 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + (iVar6 % *(int *)(iVar2 + 0x28)) * 4);
      goto LAB_114a9b8d;
    }
  }
  iVar6 = 0;
LAB_114a9b8d:
  iVar2 = *(int *)(param_1 + 0x160);
  *(int *)(param_1 + 0x164) = iVar6;
  if ((iVar2 != 0) && (iVar6 != 0)) {
    local_10 = *(undefined4 *)(param_2 + 9);
    local_c = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    uVar4 = FUN_10a142d0(local_28,iVar2 + 0x28,&local_10);
    FUN_10a14530(uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0xd);
    local_c = 0x40;
    piVar5 = &local_c;
    if (*(int *)(param_2 + 0x11) < 0x40) {
      piVar5 = (int *)(param_2 + 0x11);
    }
    local_c = *piVar5;
    if (0 < local_c) {
      psVar7 = (short *)(param_2 + 0x15);
      do {
        iVar2 = (int)*psVar7;
        iVar6 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
        if ((iVar2 != -1) &&
           ((((iVar2 != 0 || (*(int *)(iVar6 + 0x30) == 0)) &&
             (iVar1 = *(int *)(iVar6 + 0x28), param_1 = local_8, iVar1 != 0)) &&
            ((iVar2 = iVar2 - *(int *)(iVar6 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar6 + 0x24))
             ))))) {
          iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar2 / iVar1) * 4);
          if ((iVar6 != 0) && (*(int *)(iVar6 + (iVar2 % iVar1) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x14);
          }
        }
        psVar7 = (short *)((int)psVar7 + 7);
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
    }
    iVar6 = *(int *)(param_1 + 0x114);
    while (iVar6 != param_1 + 0x10c) {
      FUN_11617700(param_2);
      iVar2 = *(int *)(iVar6 + 0xc);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar6 + 4);
        if (iVar6 == *(int *)(iVar2 + 0xc)) {
          do {
            iVar6 = iVar2;
            iVar2 = *(int *)(iVar6 + 4);
          } while (iVar6 == *(int *)(iVar2 + 0xc));
        }
        if (*(int *)(iVar6 + 0xc) != iVar2) {
          iVar6 = iVar2;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar2 + 8); iVar6 = iVar2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar2 = iVar1;
        }
      }
    }
    CGuildTaskInfo__ValidateGuildTaskState(param_2);
  }
  return;
}



/* ===== FUN_114f7270 @ 114f7270  size=94 ===== */
// calls: CGuildTitleInfo::GetInfoManager
// strings:
//   "CGuildTitleInfo"

/* [RE-AUTO c0]
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo"" */

undefined4 __fastcall FUN_114f7270(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = CGuildTitleInfo__GetInfoManager(0,"CGuildTitleInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)
       ) {
      return *(undefined4 *)(iVar3 + 0x18);
    }
  }
  iVar3 = FUN_11720120();
  return *(undefined4 *)(iVar3 + 0xa0);
}



/* ===== FUN_114f74f0 @ 114f74f0  size=78 ===== */
// calls: CGuildTitleInfo::GetInfoManager
// strings:
//   "CGuildTitleInfo"

/* [RE-AUTO c0]
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo"" */

undefined4 FUN_114f74f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTitleInfo__GetInfoManager(0,"CGuildTitleInfo",0);
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



/* ===== FUN_114f7a70 @ 114f7a70  size=226 ===== */
// calls: CGuildTitleInfo::GetInfoManager
// strings:
//   "CGuildTitleInfo"

/* [RE-AUTO c0]
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo"" */

void __fastcall FUN_114f7a70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = CGuildTitleInfo__GetInfoManager(0,"CGuildTitleInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)
       ) {
      FUN_100e5580(iVar3 + 0x14);
      iVar3 = FUN_100e5a30(local_20);
      if (iVar3 != param_1 + 8) {
        FUN_100d83d0(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x10));
      }
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      FUN_100e5670();
      FUN_11a89daa();
      return;
    }
  }
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  FUN_11a89daa();
  return;
}



/* ===== FUN_115b7980 @ 115b7980  size=326 ===== */
// strings:
//   "CPersonalParagraphInfo"
//   "CLeagueInfo"

/* [RE-AUTO c0]
   strings:
     ""CPersonalParagraphInfo""
     ""CLeagueInfo"" */

void __fastcall FUN_115b7980(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_40;
  uint local_3c;
  undefined1 local_38 [48];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar5 = param_1[3];
  piVar2 = (int *)FUN_109a1fa0(0,"CPersonalParagraphInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (iVar3 <= iVar5 / 100 + 1) {
    (**(code **)*param_1)();
  }
  if ((0 < param_1[9]) && ((*(byte *)(param_1 + 10) & 1) == 0)) {
    iVar3 = FUN_104eec00(0,"CLeagueInfo",0);
    iVar5 = *(int *)(iVar3 + 0x28);
    if ((iVar5 != 0) &&
       ((iVar4 = 4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar5) * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar4 % iVar5) * 4) != 0)) {
        FUN_10a19f00(local_38);
        iVar5 = FUN_11842650(local_38);
        if (iVar5 != 0) {
          cVar1 = FUN_11846180(local_38);
          if (cVar1 != '\0') {
            iVar5 = FUN_115b73e0(param_1[3]);
            if (iVar5 != 0) {
              cVar1 = FUN_115b7ae0();
              if (cVar1 == '\0') {
                param_1[10] = param_1[10] | 1;
                local_3c = local_3c & 0xffffff00;
                local_40 = local_40 & 0xffffff00;
                FUN_115b7040(*(undefined4 *)(iVar5 + 0x68),&local_3c,&local_40);
                (**(code **)(*param_1 + 8))(param_1[3],local_3c,local_40,iVar5);
                FUN_11a89daa();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_115d00c0 @ 115d00c0  size=78 ===== */
// calls: CFactionInfo::GetInfoManager
// strings:
//   "CFactionInfo"

/* [RE-AUTO c0]
   calls: CFactionInfo::GetManagers
   strings:
     ""CFactionInfo"" */

undefined4 FUN_115d00c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CFactionInfo__GetInfoManager(0,"CFactionInfo",0);
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



/* ===== FUN_116173a0 @ 116173a0  size=108 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

void __thiscall FUN_116173a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_11d34210;
  param_1[1] = param_2;
  param_1[2] = 1;
  iVar2 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
      goto LAB_11617402;
    }
  }
  uVar3 = 0;
LAB_11617402:
  param_1[4] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x28);
}



/* ===== FUN_11617b20 @ 11617b20  size=116 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

int * __thiscall FUN_11617b20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  iVar2 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      param_1[1] = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
      param_1[2] = param_3;
      return param_1;
    }
  }
  param_1[1] = 0;
  param_1[2] = param_3;
  return param_1;
}



/* ===== FUN_11629520 @ 11629520  size=112 ===== */
// calls: CGuildTitleInfo::GetInfoManager
// strings:
//   "CGuildTitleInfo"

/* [RE-AUTO c0]
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo"" */

void __fastcall FUN_11629520(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  param_1[2] = *(int *)param_1[5];
  iVar2 = CGuildTitleInfo__GetInfoManager(0,"CGuildTitleInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)
       ) {
      param_1[3] = *(int *)(iVar3 + 0x18);
      return;
    }
  }
  iVar3 = FUN_11720120();
  param_1[3] = *(int *)(iVar3 + 0xa0);
  return;
}



/* ===== FUN_1171c640 @ 1171c640  size=52 ===== */
// strings:
//   "CGuildMatchInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildMatchInfo"" */

undefined4 FUN_1171c640(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109445a0(0,"CGuildMatchInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1171e080 @ 1171e080  size=48 ===== */
// strings:
//   "GuildWar"

/* [RE-AUTO c0]
   strings:
     ""GuildWar"" */

void FUN_1171e080(undefined4 *param_1)

{
  if ((DAT_1238f794 & 1) == 0) {
    DAT_1238f794 = DAT_1238f794 | 1;
    FUN_1024f010("GuildWar");
  }
  *param_1 = DAT_1238f790;
  return;
}



/* ===== FUN_1171e0b0 @ 1171e0b0  size=48 ===== */
// strings:
//   "GuildWarConst"

/* [RE-AUTO c0]
   strings:
     ""GuildWarConst"" */

void FUN_1171e0b0(undefined4 *param_1)

{
  if ((DAT_1238f79c & 1) == 0) {
    DAT_1238f79c = DAT_1238f79c | 1;
    FUN_1024f010("GuildWarConst");
  }
  *param_1 = DAT_1238f798;
  return;
}



/* ===== FUN_1171e0e0 @ 1171e0e0  size=186 ===== */
// strings:
//   "RanCommerceCount"

/* [RE-AUTO c0]
   strings:
     ""RanCommerceCount"" */

void __fastcall FUN_1171e0e0(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  *param_1 = &PTR_FUN_11d439e0;
  param_1[0x1d] = param_1 + 0x19;
  param_1[0x1e] = param_1 + 0x19;
  *(undefined1 *)param_1[0x1d] = 0;
  param_1[0x23] = param_1 + 0x1f;
  param_1[0x24] = param_1 + 0x1f;
  *(undefined1 *)param_1[0x23] = 0;
  param_1[0x29] = param_1 + 0x25;
  param_1[0x2a] = param_1 + 0x25;
  *(undefined1 *)param_1[0x29] = 0;
  param_1[0x2f] = param_1 + 0x2b;
  param_1[0x30] = param_1 + 0x2b;
  *(undefined1 *)param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = param_1 + 0x34;
  param_1[0x39] = param_1 + 0x34;
  *(undefined1 *)param_1[0x38] = 0;
  local_10 = local_20;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  local_c = local_10;
  FUN_100b62c0("RanCommerceCount","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_1171ed30 @ 1171ed30  size=48 ===== */
// strings:
//   "Guild"

/* [RE-AUTO c0]
   strings:
     ""Guild"" */

void FUN_1171ed30(undefined4 *param_1)

{
  if ((DAT_1238f8a0 & 1) == 0) {
    DAT_1238f8a0 = DAT_1238f8a0 | 1;
    FUN_1024f010("Guild");
  }
  *param_1 = DAT_1238f89c;
  return;
}



/* ===== FUN_117341a0 @ 117341a0  size=48 ===== */
// strings:
//   "GuildMatch"

/* [RE-AUTO c0]
   strings:
     ""GuildMatch"" */

void FUN_117341a0(undefined4 *param_1)

{
  if ((DAT_12390104 & 1) == 0) {
    DAT_12390104 = DAT_12390104 | 1;
    FUN_1024f010("GuildMatch");
  }
  *param_1 = DAT_12390100;
  return;
}



/* ===== FUN_1177f430 @ 1177f430  size=37 ===== */
// strings:
//   "SoulBeastSocialActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSocialActionDef"" */

int FUN_1177f430(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSocialActionDef","");
  return param_1;
}



/* ===== FUN_1177fc70 @ 1177fc70  size=37 ===== */
// strings:
//   "TaskGuildCelebrationScoreDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildCelebrationScoreDef"" */

int FUN_1177fc70(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildCelebrationScoreDef","");
  return param_1;
}



/* ===== FUN_1177fca0 @ 1177fca0  size=37 ===== */
// strings:
//   "TaskGuildLevelContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildLevelContentDef"" */

int FUN_1177fca0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildLevelContentDef","");
  return param_1;
}



/* ===== FUN_1177fcd0 @ 1177fcd0  size=37 ===== */
// strings:
//   "TaskGuildPrizeDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildPrizeDef"" */

int FUN_1177fcd0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildPrizeDef","");
  return param_1;
}



/* ===== FUN_11781110 @ 11781110  size=37 ===== */
// strings:
//   "SoulBeastSocialActionDef"

/* [RE-AUTO c0]
   strings:
     ""SoulBeastSocialActionDef"" */

int FUN_11781110(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("SoulBeastSocialActionDef","");
  return param_1;
}



/* ===== FUN_11781950 @ 11781950  size=37 ===== */
// strings:
//   "TaskGuildCelebrationScoreDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildCelebrationScoreDef"" */

int FUN_11781950(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildCelebrationScoreDef","");
  return param_1;
}



/* ===== FUN_11781980 @ 11781980  size=37 ===== */
// strings:
//   "TaskGuildLevelContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildLevelContentDef"" */

int FUN_11781980(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildLevelContentDef","");
  return param_1;
}



/* ===== FUN_117819b0 @ 117819b0  size=37 ===== */
// strings:
//   "TaskGuildPrizeDef"

/* [RE-AUTO c0]
   strings:
     ""TaskGuildPrizeDef"" */

int FUN_117819b0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskGuildPrizeDef","");
  return param_1;
}



/* ===== FUN_11784c80 @ 11784c80  size=84 ===== */
// calls: TaskBuffFilterDef::Load
// strings:
//   "Count"
//   "IsFriend"

/* [RE-AUTO c0]
   strings:
     ""Count""
     ""IsFriend"" */

void __thiscall FUN_11784c80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TaskBuffFilterDef__Load(param_2);
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x20);
  }
  iVar1 = FUN_118a6e60(param_2,"IsFriend");
  if (iVar1 != 0) {
    FUN_118a6e00(iVar1,param_1 + 0x24);
  }
  return;
}



/* ===== FUN_11784ce0 @ 11784ce0  size=115 ===== */
// calls: TaskBuffFilterDef::Load
// strings:
//   "ColletionPoint"
//   "Count"
//   "IsFriend"

/* [RE-AUTO c0]
   strings:
     ""ColletionPoint""
     ""Count""
     ""IsFriend"" */

void __thiscall FUN_11784ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TaskBuffFilterDef__Load(param_2);
  iVar1 = FUN_118a6e60(param_2,"ColletionPoint");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x20);
  }
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x24);
  }
  iVar1 = FUN_118a6e60(param_2,"IsFriend");
  if (iVar1 != 0) {
    FUN_118a6e00(iVar1,param_1 + 0x28);
  }
  return;
}



/* ===== FUN_117854b0 @ 117854b0  size=239 ===== */
// calls: TaskBuffFilterDef::Load
// strings:
//   "Level"
//   "Group"
//   "Appraisal"
//   "Count"
//   "IsOfficer"
//   "GuildersCount"

/* [RE-AUTO c0]
   strings:
     ""Level""
     ""Group""
     ""Appraisal""
     ""Count""
     ""IsOfficer""
     ""GuildersCount"" */

void __thiscall FUN_117854b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TaskBuffFilterDef__Load(param_2);
  iVar1 = FUN_118a6e60(param_2,"Level");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x20);
  }
  iVar1 = FUN_118a6e60(param_2,"Group");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x24);
  }
  iVar1 = FUN_118a6e60(param_2,"Appraisal");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x28);
  }
  iVar1 = FUN_118a6e60(param_2,"Count");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x2c);
  }
  iVar1 = FUN_118a6e60(param_2,&DAT_11dbb648);
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x30);
  }
  iVar1 = FUN_118a6e60(param_2,"IsOfficer");
  if (iVar1 != 0) {
    FUN_118a6e00(iVar1,param_1 + 0x34);
  }
  iVar1 = FUN_118a6e60(param_2,"GuildersCount");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x38);
  }
  return;
}



/* ===== FUN_117d6be0 @ 117d6be0  size=52 ===== */
// calls: CGuildTaskLibInfo::GetInfoManager
// strings:
//   "CGuildTaskLibInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskLibInfo::GetManagers
   strings:
     ""CGuildTaskLibInfo"" */

undefined4 FUN_117d6be0(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildTaskLibInfo__GetInfoManager(0,"CGuildTaskLibInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_117d6f40 @ 117d6f40  size=2427 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"Name"
//   u"Groups"
//   u"RefreshPeriod"
//   u"RefreshTime"
//   u"GuildLevel"
//   u"GuildRepute"
//   u"GuildArena"
//   u"GuildPlot"
//   u"PreTasks"
//   u"CompleteTasksCount"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Name""
     "u"Groups""
     "u"RefreshPeriod""
     "u"RefreshTime""
     "u"GuildLevel""
     "u"GuildRepute""
     "u"GuildArena""
     "u"GuildPlot""
     "u"PreTasks""
     "u"CompleteTasksCount"" */

void __thiscall FUN_117d6f40(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [8];
  undefined1 local_420 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_12393cc0 & 1) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 1;
    FUN_100f67b0(&DAT_11d4a0a4);
  }
  if ((DAT_12393cc0 & 2) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 2;
    iVar2 = FUN_100e1cb0(DAT_12393cbc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393cc4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393cbc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393cc4);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_12393cc0 & 4) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 4;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_12393cc0 & 8) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 8;
    iVar2 = FUN_100e1cb0(DAT_12393cd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393cd8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393cd4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_12393cd8);
    puVar3 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_12393cc0 & 0x10) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x10;
    FUN_100f67b0(L"Groups");
  }
  if ((DAT_12393cc0 & 0x20) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12393ce8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393cec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393ce8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (undefined2 *)local_420;
    local_420[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_12393cec);
    FUN_1162bea0(param_1 + 0x18,local_420);
    if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_12393cc0 & 0x40) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x40;
    FUN_100f67b0(L"RefreshPeriod");
  }
  if (-1 < (char)DAT_12393cc0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12393cfc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d00);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393cfc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d00);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
  }
  if ((DAT_12393cc0 & 0x100) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x100;
    FUN_100f67b0(L"RefreshTime");
  }
  if ((DAT_12393cc0 & 0x200) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12393d10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d14);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d10);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x28,&DAT_12393d14);
  }
  if ((DAT_12393cc0 & 0x400) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x400;
    FUN_100f67b0(L"GuildLevel");
  }
  if ((DAT_12393cc0 & 0x800) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12393d24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d28);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d24);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d28);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
  }
  if ((DAT_12393cc0 & 0x1000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x1000;
    FUN_100f67b0(L"GuildRepute");
  }
  if ((DAT_12393cc0 & 0x2000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12393d38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d3c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d38);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d3c);
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  if ((DAT_12393cc0 & 0x4000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x4000;
    FUN_100f67b0(L"GuildArena");
  }
  if ((DAT_12393cc0 & 0x8000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12393d4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d50);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d4c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d50);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  if ((DAT_12393cc0 & 0x10000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x10000;
    FUN_100f67b0(L"GuildPlot");
  }
  if ((DAT_12393cc0 & 0x20000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12393d60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d64);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d60);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d64);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  if ((DAT_12393cc0 & 0x40000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x40000;
    FUN_100f67b0(L"PreTasks");
  }
  if ((DAT_12393cc0 & 0x80000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12393d74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d78);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d74);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = (undefined2 *)local_420;
    local_420[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_12393d78);
    FUN_1162bea0(param_1 + 0x5c,local_420);
    if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_12393cc0 & 0x100000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x100000;
    FUN_100f67b0(L"CompleteTasksCount");
  }
  if ((DAT_12393cc0 & 0x200000) == 0) {
    DAT_12393cc0 = DAT_12393cc0 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12393d88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12393d8c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12393d88);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12393d8c);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  FUN_11a89daa();
  return;
}



/* ===== FUN_117d7b00 @ 117d7b00  size=48 ===== */
// strings:
//   "GuildCelebration"

/* [RE-AUTO c0]
   strings:
     ""GuildCelebration"" */

void FUN_117d7b00(undefined4 *param_1)

{
  if ((DAT_12393da8 & 1) == 0) {
    DAT_12393da8 = DAT_12393da8 | 1;
    FUN_1024f010("GuildCelebration");
  }
  *param_1 = DAT_12393da4;
  return;
}



/* ===== FUN_117f87a0 @ 117f87a0  size=64 ===== */
// strings:
//   "nMaxAccMailSendTimes"

/* [RE-AUTO c0]
   strings:
     ""nMaxAccMailSendTimes"" */

void __fastcall FUN_117f87a0(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d4b9b8;
  local_c = local_10;
  FUN_100b62c0("nMaxAccMailSendTimes","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== CLeagueSchedule::GetManagers @ 11840d90  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueSchedule::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule::GetManagers"" */

undefined * CLeagueSchedule__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4ee98;
  if (param_3 == 0) {
    if ((DAT_1239808c & 1) == 0) {
      DAT_1239808c = DAT_1239808c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueSchedule::GetManagers");
      FUN_11a8911f(&LAB_11cad100);
    }
    if ((undefined *)*DAT_12398070 != (undefined *)0x0) {
      return (undefined *)*DAT_12398070;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12398140 & 1) == 0) {
      DAT_12398140 = DAT_12398140 | 1;
      FUN_11841c20();
      FUN_11a8911f(&LAB_11cad040);
    }
    puVar1 = &DAT_12398108;
  }
  return puVar1;
}



/* ===== FUN_11842860 @ 11842860  size=52 ===== */
// calls: CLeagueSchedule::GetManagers
// strings:
//   "CLeagueSchedule"

/* [RE-AUTO c0]
   calls: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule"" */

undefined4 FUN_11842860(int param_1)

{
  int iVar1;
  
  iVar1 = CLeagueSchedule__GetManagers(0,"CLeagueSchedule",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_118428c0 @ 118428c0  size=52 ===== */
// calls: CLeagueScoreInfo::GetInfoManager
// strings:
//   "CLeagueScoreInfo"

/* [RE-AUTO c0]
   calls: CLeagueScoreInfo::GetManagers
   strings:
     ""CLeagueScoreInfo"" */

undefined4 FUN_118428c0(int param_1)

{
  int iVar1;
  
  iVar1 = CLeagueScoreInfo__GetInfoManager(0,"CLeagueScoreInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLeagueSchedule::GetManagers_11842920 @ 11842920  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CLeagueSchedule::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule::GetManagers"" */

undefined4 CLeagueSchedule__GetManagers_11842920(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239808c & 1) == 0) {
      DAT_1239808c = DAT_1239808c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueSchedule::GetManagers");
      FUN_11a8911f(&LAB_11cad100);
    }
    return *DAT_12398070;
  }
  return 0;
}



/* ===== CLeagueSchedule::GetManagers_11842f20 @ 11842f20  size=1317 ===== */
// calls: CLeagueSchedule::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueSchedule"
//   "CLeagueSchedule::GetManagers"
//   "CLeagueScoreInfo::GetManagers"
//   "CLeagueScoreInfo"
//   "StcMbrNameSvr<class CInfoManager>::GetSingletonName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueSchedule::GetManagers
   calls: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule""
     ""CLeagueSchedule::GetManagers""
     ""CLeagueScoreInfo::GetManagers""
     ""CLeagueScoreInfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __fastcall CLeagueSchedule__GetManagers_11842f20(int param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined4 local_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  int local_c;
  undefined1 local_5;
  
  puStack_2c = &local_34;
  local_24 = 0;
  local_34 = 0;
  puStack_30 = (undefined4 *)0x0;
  puStack_28 = puStack_2c;
  local_c = param_1;
  piVar2 = (int *)CLeagueSchedule__GetManagers(0,"CLeagueSchedule",0);
  local_14 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < local_14) {
    do {
      local_10 = &PTR_FUN_11d4ee98;
      if ((DAT_1239808c & 1) == 0) {
        DAT_1239808c = DAT_1239808c | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueSchedule::GetManagers");
        FUN_11a8911f(&LAB_11cad100);
      }
      puVar3 = (undefined *)*DAT_12398070;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)CInfoManager__FindByName(&local_10,"CLeagueSchedule",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_12398140 & 1) == 0) {
          DAT_1239810c = 0;
          DAT_1239811c = 0;
          DAT_12398120 = 0;
          _DAT_12398124 = 0;
          uRam12398128 = 0;
          DAT_12398140 = DAT_12398140 | 1;
          _DAT_12398108 = &PTR_FUN_11d4eed0;
          _DAT_1239812c = _DAT_11de9ae0;
          uRam12398130 = _UNK_11de9ae4;
          uRam12398134 = _UNK_11de9ae8;
          uRam12398138 = _UNK_11de9aec;
          DAT_1239813c = 1;
          DAT_12398110 = puVar3;
          _DAT_12398114 = puVar3;
          _DAT_12398118 = puVar3;
          FUN_11a8911f(&LAB_11cad040);
        }
        puVar3 = &DAT_12398108;
      }
      if ((iVar6 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar6)) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        ppuVar9 = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar6 * 4);
      }
      local_10 = ppuVar9;
      if ((ppuVar9 != (undefined **)0x0) && (ppuVar9[5] == *(undefined **)(local_c + 0x10))) {
        puVar4 = &local_34;
        if (puStack_30 != (undefined4 *)0x0) {
          puVar3 = ppuVar9[6];
          puVar7 = puStack_30;
          do {
            if ((int)puVar7[4] < (int)puVar3) {
              puVar8 = (undefined4 *)puVar7[3];
            }
            else {
              puVar8 = (undefined4 *)puVar7[2];
              puVar4 = puVar7;
            }
            puVar7 = puVar8;
          } while (puVar8 != (undefined4 *)0x0);
          if ((puVar4 != &local_34) && ((int)puVar4[4] <= (int)puVar3)) goto LAB_118430d8;
        }
        FUN_10467580(local_1c,ppuVar9 + 6);
        piVar2 = *(int **)(local_c + 0x1c);
        if (piVar2 == *(int **)(local_c + 0x20)) {
          FUN_11843750(piVar2,&local_10,&local_5,1,1);
        }
        else {
          *piVar2 = (int)ppuVar9;
          *(int *)(local_c + 0x1c) = *(int *)(local_c + 0x1c) + 4;
        }
      }
LAB_118430d8:
      iVar6 = iVar6 + 1;
      param_1 = local_c;
    } while (iVar6 < local_14);
  }
  ppuVar9 = *(undefined ***)(param_1 + 0x1c);
  ppuVar1 = *(undefined ***)(param_1 + 0x18);
  local_10 = ppuVar9;
  if (ppuVar1 != ppuVar9) {
    iVar6 = 0;
    local_14 = (int)ppuVar9 - (int)ppuVar1 >> 2;
    for (iVar5 = local_14; iVar5 != 1; iVar5 = iVar5 >> 1) {
      iVar6 = iVar6 + 1;
    }
    FUN_118412f0(ppuVar1,ppuVar9,0,iVar6 * 2,FUN_11843a60);
    if (local_14 < 0x11) {
      FUN_11841250(ppuVar1,ppuVar9,0,FUN_11843a60);
    }
    else {
      FUN_11841250(ppuVar1,ppuVar1 + 0x10,0,FUN_11843a60);
      FUN_118418b0(ppuVar1 + 0x10,local_10,0,FUN_11843a60);
    }
  }
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  if (iVar6 != 1 && -1 < iVar6 + -1) {
    do {
      FUN_10a1a330(*(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4 + 4) + 0x50);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2) + -1);
  }
  puVar4 = puStack_30;
  if (local_24 != 0) {
    while (puVar4 != (undefined4 *)0x0) {
      FUN_10463ae0(puVar4[3]);
      puVar7 = (undefined4 *)puVar4[2];
      FUN_10c3d5d0(puVar4);
      param_1 = local_c;
      puVar4 = puVar7;
    }
  }
  local_10 = &PTR_FUN_11d4ee10;
  if ((DAT_1239806c & 1) == 0) {
    DAT_1239806c = DAT_1239806c | 1;
    StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueScoreInfo::GetManagers");
    FUN_11a8911f(&LAB_11cad130);
  }
  piVar2 = (int *)*DAT_12398050;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)CInfoManager__FindByName(&local_10,"CLeagueScoreInfo",0), piVar2 == (int *)0x0
     )) {
    if ((DAT_12398104 & 1) == 0) {
      DAT_123980d0 = 0;
      DAT_123980e0 = 0;
      DAT_123980e4 = 0;
      _DAT_123980e8 = 0;
      uRam123980ec = 0;
      DAT_12398104 = DAT_12398104 | 1;
      DAT_123980cc = &PTR_FUN_11d4ee4c;
      _DAT_123980f0 = _DAT_11de9ae0;
      uRam123980f4 = _UNK_11de9ae4;
      uRam123980f8 = _UNK_11de9ae8;
      uRam123980fc = _UNK_11de9aec;
      DAT_12398100 = 1;
      DAT_123980d4 = piVar2;
      _DAT_123980d8 = piVar2;
      _DAT_123980dc = piVar2;
      FUN_11a8911f(&LAB_11cad0a0);
    }
    piVar2 = (int *)&DAT_123980cc;
  }
  local_10 = &PTR_FUN_11da54a8;
  iVar6 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      local_10 = &PTR_FUN_11d4ee10;
      if ((DAT_1239806c & 1) == 0) {
        DAT_1239806c = DAT_1239806c | 1;
        _DAT_12398064 = &DAT_12398054;
        DAT_12398068 = &DAT_12398054;
        DAT_12398054 = 0;
        FUN_100d9260("CLeagueScoreInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_12398050 = (undefined4 *)FUN_100dfd90(DAT_12398068);
        if (DAT_12398050 == (undefined4 *)0x0) {
          DAT_12398050 = (undefined4 *)FUN_100dde50(4);
          *DAT_12398050 = 0;
          FUN_100dfdc0(DAT_12398068,DAT_12398050);
        }
        FUN_11a8911f(&LAB_11cad130);
      }
      piVar2 = (int *)*DAT_12398050;
      if ((piVar2 == (int *)0x0) &&
         (piVar2 = (int *)CInfoManager__FindByName(&local_10,"CLeagueScoreInfo",0),
         piVar2 == (int *)0x0)) {
        if ((DAT_12398104 & 1) == 0) {
          DAT_123980d0 = 0;
          DAT_123980e0 = 0;
          DAT_123980e4 = 0;
          _DAT_123980e8 = 0;
          uRam123980ec = 0;
          DAT_12398104 = DAT_12398104 | 1;
          DAT_123980cc = &PTR_FUN_11d4ee4c;
          _DAT_123980f0 = _DAT_11de9ae0;
          uRam123980f4 = _UNK_11de9ae4;
          uRam123980f8 = _UNK_11de9ae8;
          uRam123980fc = _UNK_11de9aec;
          DAT_12398100 = 1;
          DAT_123980d4 = piVar2;
          _DAT_123980d8 = piVar2;
          _DAT_123980dc = piVar2;
          FUN_11a8911f(&LAB_11cad0a0);
        }
        piVar2 = (int *)&DAT_123980cc;
      }
      local_10 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (piVar2[6] - piVar2[5] >> 2 <= iVar5)) {
        local_14 = 0;
      }
      else {
        local_14 = *(int *)(piVar2[5] + iVar5 * 4);
      }
      if ((local_14 != 0) && (*(int *)(local_14 + 0x14) == *(int *)(param_1 + 0x10))) {
        piVar2 = *(int **)(param_1 + 0x28);
        if (piVar2 == *(int **)(param_1 + 0x2c)) {
          FUN_11843870(piVar2,&local_14,&local_5,1,1);
        }
        else {
          *piVar2 = local_14;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  return;
}



