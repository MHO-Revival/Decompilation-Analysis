/* ===== FUN_1092ba00 @ 1092ba00  size=443 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "playerName"
//   "playerFaction"
//   "playerLevel"
//   "selfID"

/* [RE-AUTO c0]
   strings:
     ""playerName""
     ""playerFaction""
     ""playerLevel""
     ""selfID"" */

void FUN_1092ba00(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_stack_00000010;
  undefined1 auStack_44 [4];
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_44;
  uVar2 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
  if ((uVar2 == 3) || (uVar6 = 0xdeadbeaf, uVar2 == 4)) {
    uVar6 = *(undefined4 *)(in_stack_00000010 + 8);
  }
  local_3c = *(uint *)(in_stack_00000010 + 0x1c);
  local_34 = *(undefined4 *)(in_stack_00000010 + 0x24);
  local_38 = *(undefined4 *)(in_stack_00000010 + 0x20);
  local_30 = *(undefined4 *)(in_stack_00000010 + 0x28);
  local_40 = (int *)0x0;
  if ((local_3c >> 6 & 1) != 0) {
    local_40 = *(int **)(in_stack_00000010 + 0x18);
    (**(code **)(*local_40 + 4))(&local_40,local_38);
  }
  piVar5 = (int *)0x0;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     ((piVar5 = (int *)(**(code **)(*piVar1 + 0x7c))(uVar6), piVar5 != (int *)0x0 &&
      (iVar3 = (**(code **)(*piVar5 + 0xa8))(), iVar3 != 0)))) {
    piVar5 = (int *)0x0;
  }
  iVar3 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0 &&
      (iVar4 = (**(code **)(*piVar1 + 0xb4))(), iVar4 != 0)))) {
    iVar3 = iVar4;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xb8))();
    puStack_14 = auStack_24;
    auStack_24[0] = 0;
    puStack_10 = puStack_14;
    FUN_100e5aa0(puStack_14);
    FUN_104d1670("playerName",puStack_14);
    if ((puStack_14 != auStack_28) && (puStack_14 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_14);
    }
    uVar6 = (**(code **)(*piVar5 + 0x44))();
    FUN_104d1550("playerFaction",uVar6);
    uVar6 = CPlayer__GetHuntRankOrCount();
    FUN_104d1550("playerLevel",uVar6);
    if (iVar3 != 0) {
      FUN_104d1440("selfID",*(undefined4 *)(iVar3 + 4));
    }
  }
  if ((local_3c >> 6 & 1) != 0) {
    (**(code **)(*local_40 + 8))(&local_40,local_38);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1092be80 @ 1092be80  size=945 ===== */
// calls: CPet::SetName, CPlayer::GetHuntRankOrCount
// strings:
//   "selectedBoxID"
//   "playerNetID"
//   "playerName"
//   "playerFaction"
//   "playerLevel"
//   "selfID"
//   "boxIndex"
//   "boxName"

/* [RE-AUTO c0]
   strings:
     ""selectedBoxID""
     ""playerNetID""
     ""playerName""
     ""playerFaction""
     ""playerLevel""
     ""selfID""
     ""boxIndex""
     ""boxName"" */

void FUN_1092be80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int unaff_EBX;
  uint *puVar7;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  int *local_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  int **ppiStack_34;
  int **ppiStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_7c;
  local_78 = param_2;
  local_48 = (int *)0x0;
  local_44 = (int *)param_4[1];
  local_3c = param_4[3];
  local_40 = param_4[2];
  local_38 = param_4[4];
  if (((uint)local_44 >> 6 & 1) != 0) {
    local_48 = (int *)*param_4;
    (**(code **)(*local_48 + 4))(&local_48,local_40);
  }
  if (((byte)param_4[7] & 0x8f) == 6) {
    if (((uint)param_4[7] >> 6 & 1) == 0) {
      local_6c = (int *)param_4[8];
    }
    else {
      local_6c = *(int **)param_4[8];
    }
  }
  else {
    local_6c = (int *)&DAT_11d9d32b;
  }
  if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
    iStack_68 = param_4[0xe];
  }
  else {
    iStack_68 = -0x21524151;
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) {
    iStack_64 = (**(code **)(*piVar2 + 0xb4))();
    if (((iStack_64 != 0) && (*(int *)(iStack_64 + 0xc) != 0)) &&
       (iVar3 = *(int *)(*(int *)(iStack_64 + 0xc) + 0xb4), iVar3 != 0)) {
      puVar7 = (uint *)0x0;
      puStack_2c = (uint *)(*(int *)(iVar3 + 0x88) - *(int *)(iVar3 + 0x84) >> 3);
      if (puStack_2c != (uint *)0x0) {
        puStack_28 = (uint *)(iVar3 + 0x80);
        do {
          puVar1 = (undefined4 *)FUN_111b3930(puVar7);
          if (puVar1 != (undefined4 *)0x0) {
            piVar2 = (int *)FUN_1092b9b0();
            if (piVar2 != (int *)0x0) {
              iVar3 = (**(code **)(*piVar2 + 0x44))();
              if (iVar3 == iStack_68) {
                uStack_60 = 0;
                uStack_5c = 0;
                FUN_11a98de0(&uStack_60,local_6c,0,0);
                FUN_104d1550("selectedBoxID",puVar1[1]);
                FUN_104d1550("playerNetID",*puVar1);
                CPet__SetName(&DAT_11d9d32b);
                puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0xb8))();
                puVar6 = &DAT_11d9d32b;
                if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                  puVar6 = (undefined1 *)*puVar4;
                }
                CPet__SetName(puVar6);
                puStack_2c = &local_3c;
                local_3c = local_3c & 0xffffff00;
                puStack_28 = puStack_2c;
                FUN_100e5aa0(puStack_2c);
                FUN_104d1670("playerName",puStack_2c);
                if ((puStack_2c != &local_40) && (puStack_2c != (uint *)0x0)) {
                  FUN_10c3d5d0(puStack_2c);
                }
                FUN_104d1550("playerFaction",0);
                uVar5 = CPlayer__GetHuntRankOrCount();
                FUN_104d1550("playerLevel",uVar5);
                FUN_104d1440("selfID",*(undefined4 *)(unaff_EBX + 4));
                uVar5 = 0xffffffff;
                if (*(int *)(*(int *)(unaff_EBX + 0xc) + 0x7c) != 0) {
                  uVar5 = FUN_1092c240();
                }
                FUN_104d1550("boxIndex",uVar5);
                CPet__SetName(&DAT_11d9d32b);
                iVar3 = FUN_108f2ca0(puVar1[1]);
                if (iVar3 != 0) {
                  puVar6 = &DAT_11d9d32b;
                  if (*(undefined1 **)(iVar3 + 0x14) != (undefined1 *)0x0) {
                    puVar6 = *(undefined1 **)(iVar3 + 0x14);
                  }
                  CPet__SetName(puVar6);
                }
                ppiStack_34 = &local_44;
                local_44 = (int *)((uint)local_44 & 0xffffff00);
                ppiStack_30 = ppiStack_34;
                FUN_100e5aa0(ppiStack_34);
                FUN_104d1670("boxName",ppiStack_34);
                if ((ppiStack_34 != &local_48) && (ppiStack_34 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_34);
                }
                (**(code **)(*local_6c + 0x3c))(iStack_64,&stack0xffffff7c);
                FUN_100e5670();
                FUN_100e5670();
                FUN_104d7c10();
              }
            }
          }
          puVar7 = (uint *)((int)puVar7 + 1);
        } while (puVar7 < puStack_2c);
      }
    }
  }
  if (((uint)local_44 >> 6 & 1) != 0) {
    (**(code **)(*local_48 + 8))(&local_48,local_40);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1093d680 @ 1093d680  size=1741 ===== */
// strings:
//   "InitModel"
//   "InitModelEx"
//   "InitCreateModel"
//   "CreateClan"
//   "CloseCreateUI"
//   "CloseBTM"
//   "AddBTMember"
//   "HasClan"
//   "EnterQT"
//   "CheckBTName"
//   "RenameBTName"
//   "RemoveMember"
//   "ChangeLeader"
//   "ModifyNote"
//   "MsgBoxClanInviteOk"
//   "MsgBoxClanInviteCancel"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""InitModelEx""
     ""InitCreateModel""
     ""CreateClan""
     ""CloseCreateUI""
     ""CloseBTM""
     ""AddBTMember""
     ""HasClan""
     ""EnterQT""
     ""CheckBTName"" */

void __fastcall FUN_1093d680(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  code *pcStack_144;
  char *pcStack_140;
  code **ppcStack_13c;
  code ***pppcStack_138;
  code *pcStack_134;
  code **ppcStack_130;
  code ***pppcStack_12c;
  undefined4 ***pppuStack_128;
  code **ppcStack_124;
  code **ppcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  code ***pppcStack_110;
  undefined4 ***pppuStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  code ***pppcStack_fc;
  code ***pppcStack_f8;
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
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
  undefined4 ***pppuStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  undefined4 ***pppuStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  undefined4 ***pppuStack_6c;
  code ***pppcStack_68;
  undefined4 ***pppuStack_64;
  undefined4 ***pppuStack_60;
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
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x1093d6b4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1093e560;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1093d6c5;
  FUN_10940240();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1093d6db;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd5f03;
  pppcStack_40 = (code ***)0x11dd5ef8;
  pppcStack_44 = (code ***)0x1093d6fb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_1093e5f0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1093d70c;
  FUN_10940240();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined4 ***)0x1093d722;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddb9eb;
  pppuStack_50 = (undefined4 ***)0x11ddb9dc;
  pppuStack_54 = (undefined4 ***)0x1093d742;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)FUN_1093e840;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1093d753;
  FUN_10940240();
  if (((undefined4 ****)pppcStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppcStack_40 != (undefined4 ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppuStack_60 = (undefined4 ***)0x1093d769;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppuStack_54;
  pppcStack_5c = (code ***)0x11ddba8e;
  pppuStack_60 = (undefined4 ***)0x11ddba84;
  pppuStack_64 = (undefined4 ***)0x1093d789;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppuStack_64 = (undefined4 ***)FUN_1093f650;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppuStack_6c = (undefined4 ***)0x1093d79a;
  FUN_10940240();
  if (((undefined4 ****)pppuStack_50 != &pppuStack_64) &&
     ((undefined4 ****)pppuStack_50 != (undefined4 ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    pppcStack_70 = (code ***)0x1093d7b0;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppuStack_64;
  pppuStack_6c = (undefined4 ***)0x11ddba9d;
  pppcStack_70 = (code ***)0x11ddba90;
  pppcStack_74 = (code ***)0x1093d7d0;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)&LAB_1093f610;
  pppcStack_78 = (code ***)&pppuStack_6c;
  pppuStack_7c = (undefined4 ***)0x1093d7e1;
  FUN_10940240();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pppcStack_80 = (code ***)0x1093d7f7;
    FUN_10c3d5d0();
  }
  pppuStack_64 = &pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11ddba74;
  pppcStack_80 = (code ***)0x11ddba6c;
  pppcStack_84 = (code ***)0x1093d817;
  pppuStack_60 = pppuStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)&LAB_1093eb70;
  pppuStack_88 = &pppuStack_7c;
  pppcStack_8c = (code ***)0x1093d828;
  FUN_10940240();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x1093d83e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11ddba83;
  pppcStack_90 = (code ***)0x11ddba78;
  pppcStack_94 = (code ***)0x1093d85e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_1093eef0;
  pppuStack_98 = &pppcStack_8c;
  pppcStack_9c = (code ***)0x1093d86f;
  FUN_10940240();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppuStack_a0 = (undefined4 ***)0x1093d885;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11ddbabb;
  pppuStack_a0 = (undefined4 ***)0x11ddbab4;
  pppuStack_a4 = (undefined4 ***)0x1093d8a5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppuStack_a4 = (undefined4 ***)FUN_1093f080;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x1093d8b6;
  FUN_10940240();
  if (((undefined4 ****)pppcStack_90 != &pppuStack_a4) &&
     ((undefined4 ****)pppcStack_90 != (undefined4 ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x1093d8cc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppuStack_a4;
  pppcStack_ac = (code ***)0x11ddbac3;
  pppcStack_b0 = (code ***)0x11ddbabc;
  pppcStack_b4 = (code ***)0x1093d8ec;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_1093ff60;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppuStack_bc = (undefined4 ***)0x1093d8fd;
  FUN_10940240();
  if (((code ****)pppuStack_a0 != &pppcStack_b4) && ((code ****)pppuStack_a0 != (code ****)0x0)) {
    pppuStack_bc = pppuStack_a0;
    pppcStack_c0 = (code ***)0x1093d913;
    FUN_10c3d5d0();
  }
  pppuStack_a4 = &pppcStack_b4;
  pppuStack_bc = (undefined4 ***)&DAT_11ddbaa6;
  pppcStack_c0 = (code ***)&DAT_11ddbaa0;
  pppcStack_c4 = (code ***)0x1093d933;
  pppuStack_a0 = pppuStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)&LAB_10940100;
  pppcStack_c8 = (code ***)&pppuStack_bc;
  pppcStack_cc = (code ***)0x1093d944;
  FUN_10940240();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x1093d95a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11ddbab3;
  pppcStack_d0 = (code ***)0x11ddbaa8;
  pppcStack_d4 = (code ***)0x1093d97a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_1093ebb0;
  pppuStack_d8 = &pppcStack_cc;
  pppcStack_dc = (code ***)0x1093d98b;
  FUN_10940240();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x1093d9a1;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11ddba10;
  pppcStack_e0 = (code ***)0x11ddba04;
  pppcStack_e4 = (code ***)0x1093d9c1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_1093ed40;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x1093d9d2;
  FUN_10940240();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppuStack_f0 = (undefined4 ***)0x1093d9e8;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11ddba20;
  pppuStack_f0 = (undefined4 ***)0x11ddba14;
  pppuStack_f4 = (undefined4 ***)0x1093da08;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppuStack_f4 = (undefined4 ***)FUN_1093f120;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x1093da19;
  FUN_10940240();
  if (((undefined4 ****)pppcStack_e0 != &pppuStack_f4) &&
     ((undefined4 ****)pppcStack_e0 != (undefined4 ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x1093da2f;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppuStack_f4;
  pppcStack_fc = (code ***)0x11ddb9f8;
  pppcStack_100 = (code ***)0x11ddb9ec;
  pppcStack_104 = (code ***)0x1093da4f;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_1093f230;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppuStack_10c = (undefined4 ***)0x1093da60;
  FUN_10940240();
  if (((code ****)pppuStack_f0 != &pppcStack_104) && ((code ****)pppuStack_f0 != (code ****)0x0)) {
    pppuStack_10c = pppuStack_f0;
    pppcStack_110 = (code ***)0x1093da76;
    FUN_10c3d5d0();
  }
  pppuStack_f4 = &pppcStack_104;
  pppuStack_10c = (undefined4 ***)&DAT_11ddba02;
  pppcStack_110 = (code ***)&DAT_11ddb9fc;
  pppcStack_114 = (code ***)0x1093da96;
  pppuStack_f0 = pppuStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)&LAB_1093f340;
  pppcStack_118 = (code ***)&pppuStack_10c;
  pppcStack_11c = (code ***)0x1093daa7;
  FUN_10940240();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    ppcStack_120 = (code **)0x1093dabd;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11ddba56;
  ppcStack_120 = (code **)0x11ddba4c;
  ppcStack_124 = (code **)0x1093dadd;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  ppcStack_124 = (code **)FUN_1093f3b0;
  pppuStack_128 = &pppcStack_11c;
  pppcStack_12c = (code ***)0x1093daee;
  FUN_10940240();
  if ((pppcStack_110 != &ppcStack_124) && (pppcStack_110 != (code ***)0x0)) {
    pppcStack_12c = pppcStack_110;
    ppcStack_130 = (code **)0x1093db04;
    FUN_10c3d5d0();
  }
  pppcStack_114 = &ppcStack_124;
  pppcStack_12c = (code ***)0x11ddba6a;
  ppcStack_130 = (code **)0x11ddba58;
  pcStack_134 = (code *)0x1093db24;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pcStack_134 = FUN_1093fe10;
  pppcStack_138 = (code ***)&pppcStack_12c;
  ppcStack_13c = (code **)0x1093db35;
  FUN_10940240();
  if ((ppcStack_120 != &pcStack_134) && (ppcStack_120 != (code **)0x0)) {
    ppcStack_13c = ppcStack_120;
    pcStack_140 = (char *)0x1093db4b;
    FUN_10c3d5d0();
  }
  ppcStack_124 = &pcStack_134;
  ppcStack_13c = (code **)0x11ddba3a;
  pcStack_140 = "MsgBoxClanInviteCancel";
  pcStack_144 = (code *)0x1093db6b;
  ppcStack_120 = ppcStack_124;
  FUN_100b62c0();
  pcStack_144 = FUN_1093fe60;
  FUN_10940240(&ppcStack_13c);
  if ((ppcStack_130 != &pcStack_144) && (ppcStack_130 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_130);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109405d0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_10940620();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_10940670();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_109406c0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_03);
      FUN_10d17870();
      FUN_10940710();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_04);
      FUN_10d17870();
      FUN_10940760();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_05);
      FUN_10d17870();
      FUN_109407b0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_06);
      FUN_10d17870();
      FUN_10940800();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_07);
      FUN_10d17870();
      FUN_10940850();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1093e680 @ 1093e680  size=444 ===== */
// calls: CPet::SetName
// strings:
//   "strClanName"

/* [RE-AUTO c0]
   strings:
     ""strClanName"" */

void FUN_1093e680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iStack_44;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_44;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 1) {
    local_40 = (int *)0x0;
    local_3c = param_4[1];
    local_34 = param_4[3];
    local_38 = param_4[2];
    local_30 = param_4[4];
    if ((local_3c >> 6 & 1) != 0) {
      local_40 = (int *)*param_4;
      (**(code **)(*local_40 + 4))(&local_40,local_38);
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar2 != 0) && (*(int **)(iVar2 + 0x2adc) != (int *)0x0)) {
        iVar2 = (**(code **)(**(int **)(iVar2 + 0x2adc) + 0x14))(auStack_24);
        CPet__SetName(*(undefined4 *)(iVar2 + 0x14));
        if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_18);
        }
        puStack_1c = auStack_2c;
        auStack_2c[0] = 0;
        puStack_18 = puStack_1c;
        FUN_100e5aa0(puStack_1c);
        FUN_104d1670("strClanName",puStack_1c);
        if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_10);
        }
        if (((uint)param_1[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
          *param_1 = 0;
        }
        param_1[1] = 2;
        *(undefined1 *)(param_1 + 2) = 1;
        if (iStack_44 != 0) {
          FUN_10c3da30(iStack_44);
        }
      }
    }
    if ((local_3c >> 6 & 1) != 0) {
      (**(code **)(*local_40 + 8))(&local_40,local_38);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1093faf0 @ 1093faf0  size=497 ===== */
// calls: CMessageParmDescInfo::GetManager, CInfoManager::FindByName
// strings:
//   "g_refuseClanRequest"
//   "CMessageParmDescInfo"
//   "BattleTeam.MsgBoxClanInviteCancel"
//   "BattleTeam.MsgBoxClanInviteOk"

/* [RE-AUTO c0]
   calls: CMessageParmDescInfo::GetManagers
   strings:
     ""g_refuseClanRequest""
     ""CMessageParmDescInfo""
     ""BattleTeam.MsgBoxClanInviteCancel""
     ""BattleTeam.MsgBoxClanInviteOk"" */

void __thiscall FUN_1093faf0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **ppuStack_24;
  undefined **ppuStack_20;
  undefined1 auStack_1c [24];
  
  iVar3 = DAT_1202e818;
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  piVar2 = (int *)(**(code **)(**(int **)(iVar3 + 0x2c) + 0x54))("g_refuseClanRequest");
  iVar3 = (**(code **)(*piVar2 + 8))();
  if (iVar3 == 0) {
    FUN_1112d520();
    ppuStack_24 = &PTR_FUN_11da5400;
    puVar4 = (undefined4 *)CMessageParmDescInfo__GetManager();
    puVar4 = (undefined4 *)*puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)CInfoManager__FindByName(&ppuStack_24,"CMessageParmDescInfo",0);
      if (puVar4 == (undefined4 *)0x0) {
        if ((DAT_123bdb54 & 1) == 0) {
          DAT_123bdb54 = DAT_123bdb54 | 1;
          FUN_10252f40();
          FUN_11a8911f(&LAB_11c6e570);
        }
        puVar4 = &DAT_123bdacc;
      }
    }
    ppuStack_24 = &PTR_FUN_11da54a8;
    iVar3 = puVar4[10];
    if (((iVar3 != 0) && (iVar5 = 0x2a - puVar4[0xc], -1 < iVar5)) && (iVar5 < (int)puVar4[9])) {
      iVar1 = *(int *)(puVar4[8] + (iVar5 / iVar3) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % iVar3) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x70);
      }
    }
    ppuStack_20 = &PTR_FUN_11da5400;
    puVar4 = (undefined4 *)CMessageParmDescInfo__GetManager();
    puVar4 = (undefined4 *)*puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)CInfoManager__FindByName(&ppuStack_20,"CMessageParmDescInfo",0);
      if (puVar4 == (undefined4 *)0x0) {
        if ((DAT_123bdb54 & 1) == 0) {
          DAT_123bdb54 = DAT_123bdb54 | 1;
          FUN_10252f40();
          FUN_11a8911f(&LAB_11c6e570);
        }
        puVar4 = &DAT_123bdacc;
      }
    }
    ppuStack_20 = &PTR_FUN_11da54a8;
    iVar3 = puVar4[10];
    if (((iVar3 != 0) && (iVar5 = 6 - puVar4[0xc], -1 < iVar5)) && (iVar5 < (int)puVar4[9])) {
      iVar1 = *(int *)(puVar4[8] + (iVar5 / iVar3) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % iVar3) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x70);
      }
    }
    FUN_1112d7a0(0x1ff1,"BattleTeam.MsgBoxClanInviteOk","BattleTeam.MsgBoxClanInviteCancel",
                 auStack_1c,0,0);
    FUN_1112d550();
  }
  else if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
          (piVar2 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 0xb4))();
    if (iVar3 != 0) {
      FUN_11c65590(iVar3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),0);
      return;
    }
  }
  return;
}



/* ===== FUN_10940ee0 @ 10940ee0  size=884 ===== */
// strings:
//   "GetMatchDetail"
//   "GetGuildPreMaryByPage"
//   "StartGameLeagueReq"
//   "StartGameLeaguePairReq"
//   "xGetRoomBySignId"
//   "SendGuildMatchQualifierResultList"
//   "sendGuildMatchPairList"
//   "LeagueRespondOkHandler"
//   "LeagueRespondCancelHandler"

/* [RE-AUTO c0]
   strings:
     ""GetMatchDetail""
     ""GetGuildPreMaryByPage""
     ""StartGameLeagueReq""
     ""StartGameLeaguePairReq""
     ""xGetRoomBySignId""
     ""SendGuildMatchQualifierResultList""
     ""sendGuildMatchPairList""
     ""LeagueRespondOkHandler""
     ""LeagueRespondCancelHandler"" */

void __fastcall FUN_10940ee0(undefined4 ****param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 ***pppuStack_bc;
  undefined1 *puStack_b8;
  char *pcStack_b4;
  undefined4 ***pppuStack_b0;
  code ***pppcStack_ac;
  undefined4 ***pppuStack_a8;
  undefined1 *puStack_a4;
  char *pcStack_a0;
  undefined4 ***pppuStack_9c;
  code ***pppcStack_98;
  undefined4 ***pppuStack_94;
  char *pcStack_90;
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
  pppcStack_30 = (code ***)0x11ddbf14;
  pppcStack_34 = (code ***)0x10940f14;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109420b0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10940f25;
  FUN_10942ca0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x10940f3b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddbf39;
  pppcStack_40 = (code ***)0x11ddbf24;
  pppcStack_44 = (code ***)0x10940f5b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10941ab0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x10940f6c;
  FUN_10942ca0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10940f82;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddbefa;
  pppcStack_50 = (code ***)0x11ddbee8;
  pppcStack_54 = (code ***)0x10940fa2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109419a0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10940fb3;
  FUN_10942ca0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10940fc9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11ddbf12;
  pppcStack_60 = (code ***)0x11ddbefc;
  pppcStack_64 = (code ***)0x10940fe9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109418e0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10940ffa;
  FUN_10942ca0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10941010;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11ddbe28;
  pppcStack_70 = (code ***)0x11ddbe18;
  pppcStack_74 = (code ***)0x10941030;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10941830;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10941041;
  FUN_10942ca0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppuStack_80 = (undefined4 ***)0x10941057;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11ddbe4d;
  pppuStack_80 = (undefined4 ***)0x11ddbe2c;
  pppuStack_84 = (undefined4 ***)0x10941077;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppuStack_84 = (undefined4 ***)FUN_109417c0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10941088;
  FUN_10942ca0();
  if (((undefined4 ****)pppcStack_70 != &pppuStack_84) &&
     ((undefined4 ****)pppcStack_70 != (undefined4 ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pcStack_90 = (char *)0x1094109e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppuStack_84;
  pppcStack_8c = (code ***)0x11ddbdfe;
  pcStack_90 = "sendGuildMatchPairList";
  pppuStack_94 = (undefined4 ***)0x109410be;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)FUN_10941760;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppuStack_9c = (undefined4 ***)0x109410cf;
  FUN_10942ca0();
  if (((undefined4 ****)pppuStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppuStack_80 != (undefined4 ****)0x0)) {
    pppuStack_9c = pppuStack_80;
    pcStack_a0 = (char *)0x109410e5;
    FUN_10c3d5d0();
  }
  pppuStack_84 = &pppuStack_94;
  pppuStack_9c = (undefined4 ***)0x11ddbe16;
  pcStack_a0 = "LeagueRespondOkHandler";
  puStack_a4 = (undefined1 *)0x10941105;
  pppuStack_80 = pppuStack_84;
  FUN_100b62c0();
  puStack_a4 = &LAB_10942b10;
  pppcStack_ac = (code ***)&pppuStack_9c;
  pppuStack_b0 = (undefined4 ***)0x10941120;
  pppuStack_a8 = param_1;
  FUN_104d0ee0();
  if (((undefined4 ****)pppuStack_94 != &pppuStack_a8) &&
     ((undefined4 ****)pppuStack_94 != (undefined4 ****)0x0)) {
    pppuStack_b0 = pppuStack_94;
    pcStack_b4 = (char *)0x10941136;
    FUN_10c3d5d0();
  }
  pppcStack_98 = (code ***)&pppuStack_a8;
  pppuStack_b0 = (undefined4 ***)0x11ddbea2;
  pcStack_b4 = "LeagueRespondCancelHandler";
  puStack_b8 = (undefined1 *)0x10941156;
  pppuStack_94 = (undefined4 ***)pppcStack_98;
  FUN_100b62c0();
  puStack_b8 = &LAB_10942b60;
  pppuStack_bc = param_1;
  FUN_104d0ee0(&pppuStack_b0);
  if (((undefined4 ****)pppuStack_a8 != &pppuStack_bc) &&
     ((undefined4 ****)pppuStack_a8 != (undefined4 ****)0x0)) {
    FUN_10c3d5d0(pppuStack_a8);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10943290();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_109432e0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_10943330();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_02);
      FUN_10d17870();
      FUN_10943380();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10941ab0 @ 10941ab0  size=1523 ===== */
// strings:
//   "GuildPremaryArray"
//   "GUILDPREMARY_CLASS_NAME"
//   "strName"
//   "bestScore"
//   "strGuildName"
//   "isSelf"

/* [RE-AUTO c0]
   strings:
     ""GuildPremaryArray""
     ""GUILDPREMARY_CLASS_NAME""
     ""strName""
     ""bestScore""
     ""strGuildName""
     ""isSelf"" */

void FUN_10941ab0(void)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  undefined1 *puVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar10;
  int *unaff_EDI;
  undefined8 uVar11;
  undefined4 *in_stack_00000010;
  int *piStack_16c;
  undefined1 auStack_15c [4];
  int *piStack_158;
  int *local_150;
  int *local_14c;
  int *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int *piStack_130;
  undefined4 uStack_128;
  int *piStack_120;
  uint uStack_11c;
  int *piStack_118;
  int *piStack_10c;
  int *piStack_108;
  uint uStack_104;
  int *piStack_100;
  undefined1 auStack_fc [8];
  int aiStack_f4 [2];
  int iStack_ec;
  undefined1 *puStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *apiStack_cc [2];
  int **ppiStack_c4;
  int **ppiStack_c0;
  int **ppiStack_bc;
  int **ppiStack_b8;
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  undefined1 auStack_a4 [4];
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 **ppuStack_8c;
  undefined1 **ppuStack_88;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_15c;
  local_14c = (int *)in_stack_00000010[1];
  local_144 = in_stack_00000010[3];
  local_148 = (int *)in_stack_00000010[2];
  local_140 = in_stack_00000010[4];
  local_150 = (int *)0x0;
  if (((uint)local_14c >> 6 & 1) != 0) {
    local_150 = (int *)*in_stack_00000010;
    piStack_16c = local_148;
    (**(code **)(*local_150 + 4))(&local_150);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piStack_16c = (int *)0x10941b41;
    puVar5 = (undefined1 *)(**(code **)(*piVar1 + 0xb4))();
    puStack_e8 = puVar5;
    if ((puVar5 != (undefined1 *)0x0) && (piVar1 = *(int **)(puVar5 + 0x2abc), piVar1 != (int *)0x0)
       ) {
      piStack_16c = (int *)0x10941b67;
      (**(code **)(*piVar1 + 0xc))();
      piStack_16c = (int *)0xd;
      FUN_11c65620(puVar5);
      piStack_120 = (int *)0x0;
      uStack_11c = 0;
      piStack_16c = (int *)(uint)(((byte)local_14c & 0x8f) == 10);
      (**(code **)(*local_150 + 0x10))(local_148,"GuildPremaryArray",&piStack_120);
      (**(code **)(*piStack_130 + 0x2c))(uStack_128,0);
      piStack_120 = (int *)0x0;
      uStack_11c = 0;
      piStack_16c = (int *)0x0;
      (**(code **)(*unaff_EDI + 0x10))
                (unaff_EBX,"GUILDPREMARY_CLASS_NAME",&piStack_120,((byte)unaff_ESI & 0x8f) == 10);
      FUN_10942d70(piVar1 + 10);
      iVar10 = ((int)piStack_e0 - (int)piStack_e4) / 0x58;
      piVar6 = piStack_e4;
      iStack_ec = iVar10;
      piVar1 = piStack_e4;
      piVar2 = piStack_e0;
      if (0 < iVar10) {
        do {
          piStack_16c = piVar6;
          piStack_158 = piVar6;
          FUN_1149def0();
          uStack_13c = 0;
          uStack_138 = 0;
          FUN_11a98de0(&uStack_13c,piStack_158,0,0);
          puStack_9c = auStack_ac;
          auStack_ac[0] = 0;
          puStack_98 = puStack_9c;
          pcVar7 = (char *)FUN_1149e590();
          piStack_dc = &iStack_ec;
          pcVar3 = pcVar7;
          do {
            pcVar9 = pcVar3;
            pcVar3 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          piStack_d8 = piStack_dc;
          FUN_100b62c0(pcVar7,pcVar9);
          ppiStack_bc = &piStack_dc;
          piStack_dc = (int *)((uint)piStack_dc & 0xffff0000);
          ppiStack_b8 = ppiStack_bc;
          cVar4 = FUN_100ecfd0(piStack_e0,(int)piStack_e4 - (int)piStack_e0,&piStack_dc,4);
          if (cVar4 != '\0') {
            FUN_100ed090(&piStack_dc,auStack_b4,3);
          }
          if ((ppiStack_b8 != &piStack_dc) && (ppiStack_b8 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_b8);
          }
          if ((piStack_e0 != aiStack_f4) && (piStack_e0 != (int *)0x0)) {
            FUN_10c3d5d0(piStack_e0);
          }
          FUN_104d1670("strName",puStack_a0);
          uVar8 = FUN_1149e540();
          FUN_104d1550("bestScore",uVar8);
          uVar8 = FUN_1149e550();
          FUN_104d1550(&DAT_11dca154,uVar8);
          puStack_9c = (undefined1 *)((uint)puStack_9c & 0xffffff00);
          ppuStack_8c = &puStack_9c;
          ppuStack_88 = ppuStack_8c;
          pcVar7 = (char *)FUN_1149e580();
          piStack_e4 = aiStack_f4;
          pcVar3 = pcVar7;
          do {
            pcVar9 = pcVar3;
            pcVar3 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          piStack_e0 = piStack_e4;
          FUN_100b62c0(pcVar7,pcVar9);
          ppiStack_c4 = &piStack_e4;
          piStack_e4 = (int *)((uint)piStack_e4 & 0xffff0000);
          ppiStack_c0 = ppiStack_c4;
          cVar4 = FUN_100ecfd0(puStack_e8,iStack_ec - (int)puStack_e8,&piStack_e4,4);
          if (cVar4 != '\0') {
            FUN_100ed090(&piStack_e4,auStack_a4,3);
          }
          if ((ppiStack_c0 != &piStack_e4) && (ppiStack_c0 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_c0);
          }
          if ((puStack_e8 != auStack_fc) && (puStack_e8 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_e8);
          }
          FUN_104d1670("strGuildName",uStack_90);
          uVar11 = (**(code **)(*piStack_10c + 0xc0))();
          cVar4 = FUN_1149e820(uVar11);
          if (cVar4 != '\0') {
            FUN_104d1550("isSelf",1);
          }
          (**(code **)(*local_14c + 0x3c))(local_144,&stack0xfffffe9c);
          if ((puStack_a0 != auStack_b4) && (puStack_a0 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_a0);
          }
          if ((ppiStack_b8 != apiStack_cc) && (ppiStack_b8 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_b8);
          }
          if (((uint)unaff_EDI >> 6 & 1) != 0) {
            (**(code **)(*piStack_16c + 8))(&piStack_16c,unaff_ESI);
            piStack_16c = (int *)0x0;
          }
          unaff_EDI = (int *)0x0;
          FUN_1149e1f0();
          piStack_158 = piStack_158 + 0x16;
          iVar10 = iVar10 + -1;
          piVar6 = piStack_158;
          piVar1 = piStack_e4;
          piVar2 = piStack_e0;
        } while (iVar10 != 0);
      }
      for (; piVar6 = piStack_e4, piVar2 != piStack_e4; piVar2 = piVar2 + -0x16) {
        piStack_16c = (int *)0x1094200a;
        piStack_e4 = piVar1;
        FUN_1149e1f0();
        piVar1 = piStack_e4;
        piStack_e4 = piVar6;
      }
      if (piStack_e4 != (int *)0x0) {
        piStack_16c = piStack_e4;
        piStack_e4 = piVar1;
        FUN_10c3d5d0();
        piVar1 = piStack_e4;
      }
      piStack_e4 = piVar1;
      if ((uStack_104 >> 6 & 1) != 0) {
        piStack_16c = piStack_100;
        (**(code **)(*piStack_108 + 8))(&piStack_108);
        piStack_108 = (int *)0x0;
      }
      uStack_104 = 0;
      if ((uStack_11c >> 6 & 1) != 0) {
        piStack_16c = piStack_118;
        (**(code **)(*piStack_120 + 8))(&piStack_120);
        piStack_120 = (int *)0x0;
      }
      uStack_11c = 0;
    }
  }
  if (((uint)local_14c >> 6 & 1) != 0) {
    piStack_16c = local_148;
    (**(code **)(*local_150 + 8))(&local_150);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109420b0 @ 109420b0  size=2264 ===== */
// strings:
//   "GuildMathTeamArray"
//   "GUILDMathTeam_CLASS_NAME"
//   "MatchStateNow"
//   "MathState"
//   "m_SignID1"
//   "m_SignID2"
//   "teamName1"
//   "teamName2"
//   "teamWin1"
//   "teamWin2"
//   "isPlaying"

/* [RE-AUTO c0]
   strings:
     ""GuildMathTeamArray""
     ""GUILDMathTeam_CLASS_NAME""
     ""MatchStateNow""
     ""MathState""
     ""m_SignID1""
     ""m_SignID2""
     ""teamName1""
     ""teamName2""
     ""teamWin1""
     ""teamWin2"" */

void FUN_109420b0(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint unaff_ESI;
  int *unaff_EDI;
  undefined4 *in_stack_00000010;
  char *pcVar7;
  int *piVar8;
  int *piStack_104;
  uint uStack_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  uint uStack_e4;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  byte bStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  int *local_b0;
  uint local_ac;
  int *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint uStack_9c;
  int *piStack_98;
  uint uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  int *piStack_7c;
  int *piStack_78;
  uint uStack_74;
  int *piStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  uint *puStack_64;
  uint *puStack_60;
  undefined1 auStack_5c [8];
  undefined4 *puStack_54;
  uint **ppuStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 auStack_44 [12];
  undefined1 **ppuStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&uStack_f8;
  local_ac = in_stack_00000010[1];
  local_a4 = in_stack_00000010[3];
  local_a8 = (int *)in_stack_00000010[2];
  local_a0 = in_stack_00000010[4];
  local_b0 = (int *)0x0;
  if ((local_ac >> 6 & 1) != 0) {
    local_b0 = (int *)*in_stack_00000010;
    piStack_104 = local_a8;
    (**(code **)(*local_b0 + 4))(&local_b0);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) {
    piStack_104 = (int *)0x10942142;
    iVar4 = (**(code **)(*piVar8 + 0xb4))();
    if (iVar4 != 0) {
      piStack_f4 = *(int **)(iVar4 + 0x2abc);
      piStack_104 = (int *)0x1094215d;
      (**(code **)(*piStack_f4 + 0xc))();
      piStack_104 = (int *)0xd;
      FUN_11c65620(iVar4);
      piStack_98 = (int *)0x0;
      uStack_94 = 0;
      piStack_104 = (int *)(uint)(((byte)local_ac & 0x8f) == 10);
      piVar8 = local_a8;
      (**(code **)(*local_b0 + 0x10))(local_a8,"GuildMathTeamArray",&piStack_98);
      (**(code **)(*local_a8 + 0x2c))(local_a0,0);
      piStack_90 = (int *)0x0;
      uStack_8c = 0;
      iVar4 = CONCAT31((int3)((uint)piVar8 >> 8),(bStack_c4 & 0x8f) == 10);
      uStack_dc = 0;
      cVar2 = (**(code **)(*piStack_c8 + 0x10))(piStack_c0,"GUILDMathTeam_CLASS_NAME",&piStack_90);
      if (((cVar2 != '\0') && (((byte)uStack_9c & 0x8f) == 6)) &&
         (piStack_ec = piStack_98, (uStack_9c >> 6 & 1) != 0)) {
        piStack_ec = (int *)*piStack_98;
      }
      piVar8 = *(int **)(iVar4 + 0x120);
      FUN_104d1550("MatchStateNow",piVar8);
      FUN_104d1550("MathState",*(undefined4 *)(iVar4 + 0x11c));
      if (piVar8 < &DAT_00000007) {
        iStack_80 = piStack_f4[0xd];
        if ((int)piVar8 < 5) {
          piStack_e8 = (int *)&DAT_00000004;
          do {
            piStack_104 = piStack_e8;
            piStack_7c = (int *)FUN_1149fca0();
            if (piStack_7c == (int *)0x0) break;
            iVar4 = *piStack_7c;
            uStack_f8 = 0;
            if (piStack_7c[1] - iVar4 >> 4 != 0) {
              uStack_e4 = 0;
              do {
                puVar1 = (undefined4 *)(iVar4 + uStack_e4);
                piStack_104 = (int *)*puVar1;
                uStack_bc = puVar1[1];
                uStack_b8 = puVar1[2];
                piStack_b4 = (int *)puVar1[3];
                piStack_c0 = piStack_104;
                uStack_f0 = FUN_114a0990();
                iVar4 = FUN_114a0990(piStack_c0);
                piStack_e8 = (int *)0x0;
                uStack_e4 = 0;
                FUN_11a98de0(&piStack_e8,uStack_cc,0,0);
                FUN_104d1440("m_SignID1",iStack_d8);
                FUN_104d1440("m_SignID2",iStack_d4);
                puStack_4c = auStack_5c;
                auStack_5c[0] = 0;
                puStack_48 = puStack_4c;
                if (piStack_104 != (int *)0x0) {
                  pcVar5 = (char *)FUN_1149e590();
                  puStack_34 = auStack_44;
                  piStack_104 = (int *)(pcVar5 + 1);
                  pcVar7 = pcVar5;
                  do {
                    cVar2 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar2 != '\0');
                  puStack_30 = puStack_34;
                  FUN_100b62c0(pcVar5,pcVar5 + ((int)pcVar7 - (int)piStack_104));
                  FUN_10943850();
                  if ((ppuStack_38 != &puStack_4c) && (ppuStack_38 != (undefined1 **)0x0)) {
                    FUN_10c3d5d0(ppuStack_38);
                  }
                  FUN_104d1670("teamName1",ppuStack_50);
                  if (iStack_d8 == iStack_d0) {
                    FUN_104d15e0("teamWin1",1);
                  }
                }
                uStack_74 = uStack_74 & 0xffffff00;
                puStack_64 = &uStack_74;
                puStack_60 = puStack_64;
                if (iVar4 != 0) {
                  pcVar5 = (char *)FUN_1149e590();
                  puStack_34 = auStack_44;
                  pcVar7 = pcVar5;
                  do {
                    pcVar6 = pcVar7;
                    pcVar7 = pcVar6 + 1;
                  } while (*pcVar6 != '\0');
                  puStack_30 = puStack_34;
                  FUN_100b62c0(pcVar5,pcVar6);
                  FUN_10943850();
                  if ((ppuStack_38 != &puStack_4c) && (ppuStack_38 != (undefined1 **)0x0)) {
                    FUN_10c3d5d0(ppuStack_38);
                  }
                  FUN_104d1670("teamName2",uStack_68);
                  if (iStack_d4 == iStack_d0) {
                    FUN_104d15e0("teamWin2",1);
                  }
                }
                uVar3 = FUN_11175670(&iStack_d8);
                FUN_104d15e0("isPlaying",uVar3);
                (**(code **)(*piStack_b4 + 0x3c))(local_ac,&stack0xffffff04);
                if ((piStack_6c != &iStack_80) && (piStack_6c != (int *)0x0)) {
                  FUN_10c3d5d0(piStack_6c);
                }
                if ((puStack_54 != &uStack_68) && (puStack_54 != (undefined4 *)0x0)) {
                  FUN_10c3d5d0(puStack_54);
                }
                if (((uint)unaff_EDI >> 6 & 1) != 0) {
                  (**(code **)(*piStack_104 + 8))(&piStack_104,unaff_ESI);
                  piStack_104 = (int *)0x0;
                }
                unaff_EDI = (int *)0x0;
                FUN_1149edb0();
                uStack_f8 = uStack_f8 + 1;
                uStack_e4 = uStack_e4 + 0x10;
                iVar4 = *piStack_7c;
              } while (uStack_f8 < (uint)(piStack_7c[1] - iVar4 >> 4));
            }
            piStack_e8 = (int *)((int)piStack_e8 + -1);
          } while (0 < (int)piStack_e8);
        }
        else {
          piStack_104 = piVar8;
          piStack_ec = (int *)FUN_1149fca0();
          if (piStack_ec != (int *)0x0) {
            iVar4 = *piStack_ec;
            uStack_e4 = 0;
            if (piStack_ec[1] - iVar4 >> 4 != 0) {
              uStack_f8 = 0;
              do {
                puVar1 = (undefined4 *)(iVar4 + uStack_f8);
                piStack_104 = (int *)*puVar1;
                uStack_bc = puVar1[1];
                uStack_b8 = puVar1[2];
                piStack_b4 = (int *)puVar1[3];
                piStack_c0 = piStack_104;
                piStack_ec = (int *)FUN_114a0990();
                iVar4 = FUN_114a0990(piStack_c0);
                piStack_e8 = (int *)0x0;
                uStack_e4 = 0;
                FUN_11a98de0(&piStack_e8,uStack_cc,0,0);
                FUN_104d1440("m_SignID1",iStack_d8);
                FUN_104d1440("m_SignID2",iStack_d4);
                if (unaff_EDI != (int *)0x0) {
                  puStack_64 = &uStack_74;
                  uStack_74 = uStack_74 & 0xffffff00;
                  puStack_60 = puStack_64;
                  pcVar5 = (char *)FUN_1149e590();
                  puStack_4c = auStack_5c;
                  pcVar7 = pcVar5;
                  do {
                    pcVar6 = pcVar7;
                    pcVar7 = pcVar6 + 1;
                  } while (*pcVar6 != '\0');
                  puStack_48 = puStack_4c;
                  FUN_100b62c0(pcVar5,pcVar6);
                  FUN_10943850();
                  if ((ppuStack_50 != &puStack_64) && (ppuStack_50 != (uint **)0x0)) {
                    FUN_10c3d5d0(ppuStack_50);
                  }
                  FUN_104d1670("teamName1",uStack_68);
                  if ((puStack_60 != &uStack_74) && (puStack_60 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_60);
                  }
                }
                if (iVar4 != 0) {
                  puStack_64 = &uStack_74;
                  uStack_74 = uStack_74 & 0xffffff00;
                  puStack_60 = puStack_64;
                  pcVar5 = (char *)FUN_1149e590();
                  puStack_4c = auStack_5c;
                  pcVar7 = pcVar5;
                  do {
                    pcVar6 = pcVar7;
                    pcVar7 = pcVar6 + 1;
                  } while (*pcVar6 != '\0');
                  puStack_48 = puStack_4c;
                  FUN_100b62c0(pcVar5,pcVar6);
                  FUN_10943850();
                  if ((ppuStack_50 != &puStack_64) && (ppuStack_50 != (uint **)0x0)) {
                    FUN_10c3d5d0(ppuStack_50);
                  }
                  FUN_104d1670("teamName2",uStack_68);
                  if ((puStack_60 != &uStack_74) && (puStack_60 != (uint *)0x0)) {
                    FUN_10c3d5d0(puStack_60);
                  }
                }
                if ((unaff_EDI == (int *)0x0) || (iStack_d8 != iStack_d0)) {
                  if ((iVar4 != 0) && (iStack_d4 == iStack_d0)) {
                    pcVar7 = "teamWin2";
                    goto LAB_10942506;
                  }
                }
                else {
                  pcVar7 = "teamWin1";
LAB_10942506:
                  FUN_104d15e0(pcVar7,1);
                }
                (**(code **)(*local_b0 + 0x3c))(local_a8,&uStack_f8);
                if ((unaff_ESI >> 6 & 1) != 0) {
                  (**(code **)(*unaff_EDI + 8))(&stack0xffffff00,uStack_f8);
                  unaff_EDI = (int *)0x0;
                }
                unaff_ESI = 0;
                FUN_1149edb0();
                uStack_e4 = uStack_e4 + 1;
                uStack_f8 = uStack_f8 + 0x10;
                iVar4 = *piStack_ec;
              } while (uStack_e4 < (uint)(piStack_ec[1] - iVar4 >> 4));
            }
          }
        }
      }
      if ((uStack_74 >> 6 & 1) != 0) {
        piStack_104 = piStack_70;
        (**(code **)(*piStack_78 + 8))(&piStack_78);
        piStack_78 = (int *)0x0;
      }
      uStack_74 = 0;
      if ((uStack_94 >> 6 & 1) != 0) {
        piStack_104 = piStack_90;
        (**(code **)(*piStack_98 + 8))(&piStack_98);
        piStack_98 = (int *)0x0;
      }
      uStack_94 = 0;
    }
  }
  if ((local_ac >> 6 & 1) != 0) {
    piStack_104 = local_a8;
    (**(code **)(*local_b0 + 8))(&local_b0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10942a00 @ 10942a00  size=270 ===== */
// strings:
//   "LeagueRespondCancelHandler"
//   "LeagueRespondOkHandler"

/* [RE-AUTO c0]
   strings:
     ""LeagueRespondCancelHandler""
     ""LeagueRespondOkHandler"" */

void FUN_10942a00(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0x10942a24;
  piVar1 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (piVar1 != (int *)0x0) {
    uStack_24 = 0x10942a38;
    piVar2 = (int *)(**(code **)(*piVar1 + 0x3a4))();
    if (piVar2 != (int *)0x0) {
      uStack_24 = 0x10942a4b;
      FUN_1112d520();
      uStack_24 = 0;
      uStack_28 = 0;
      FUN_1112d990(*param_1,0);
      iVar3 = (**(code **)(*piVar2 + 0x88))();
      if (iVar3 != 0) {
        piVar4 = (int *)(**(code **)(*piVar2 + 0x88))();
        iVar3 = piVar1[1];
        iVar5 = (**(code **)(*piVar4 + 0xc))();
        if (iVar5 == iVar3) {
          iVar3 = FUN_107cb5c0();
          if (iVar3 != 0) {
            (**(code **)(**(int **)(iVar3 + 0x2abc) + 0xc))();
            FUN_111764b0(1,1);
            FUN_1112d550();
            return;
          }
        }
        else {
          piVar1 = (int *)(**(code **)(*piVar2 + 0x88))();
          puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
          puVar8 = &DAT_11d9d32b;
          if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)*puVar6;
          }
          uVar7 = FUN_1024e9b0(puVar8,6);
          FUN_1112d7d0(0x1ff6,"LeagueRespondOkHandler","LeagueRespondCancelHandler",&uStack_28,uVar7
                      );
        }
      }
      FUN_1112d550();
    }
  }
  return;
}



/* ===== FUN_10944610 @ 10944610  size=158 ===== */
// calls: CGuildMatchInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CGuildMatchInfo"

/* [RE-AUTO c0]
   calls: CGuildMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo"" */

undefined4 FUN_10944610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddbd50;
  puVar2 = (undefined4 *)CGuildMatchInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CGuildMatchInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bff70 & 1) == 0) {
        DAT_123bff70 = DAT_123bff70 | 1;
        FUN_109439a0();
        FUN_11a8911f(&LAB_11c78470);
      }
      puVar2 = &DAT_123bff9c;
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



/* ===== FUN_10946980 @ 10946980  size=1552 ===== */
// calls: CPet::SetName
// strings:
//   "GIFT_BOX_READER_DATA_CLASSNAME"
//   "MAIL_EXTRACT_ITEM_DATA_CLASSNAME"
//   "_count"
//   "_index"
//   "_itemIconPathName"
//   "nGiftID"
//   "itemList"
//   "goldIndex"
//   "source"
//   "strSender"
//   "strTitle"
//   "strContent"

/* [RE-AUTO c0]
   strings:
     ""GIFT_BOX_READER_DATA_CLASSNAME""
     ""MAIL_EXTRACT_ITEM_DATA_CLASSNAME""
     ""_count""
     ""_index""
     ""_itemIconPathName""
     ""nGiftID""
     ""itemList""
     ""goldIndex""
     ""source""
     ""strSender"" */

void FUN_10946980(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte unaff_BL;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  int iVar6;
  uint uVar7;
  int iStack_b4;
  int iStack_b0;
  undefined4 *local_ac;
  int *local_a8;
  uint local_a4;
  undefined4 local_a0;
  int *local_9c;
  undefined4 *local_98;
  undefined4 uStack_94;
  int *piStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined2 auStack_6c [2];
  undefined2 auStack_68 [2];
  undefined2 auStack_64 [2];
  undefined2 auStack_60 [2];
  int *piStack_5c;
  int *piStack_58;
  int *piStack_50;
  int *piStack_4c;
  undefined2 *puStack_48;
  undefined2 *puStack_44;
  undefined2 *puStack_40;
  undefined2 *puStack_3c;
  undefined1 auStack_38 [36];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_b4;
  local_ac = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  local_a8 = (int *)0x0;
  local_a4 = param_4[1];
  local_9c = (int *)param_4[3];
  local_a0 = param_4[2];
  local_98 = (undefined4 *)param_4[4];
  if ((local_a4 >> 6 & 1) != 0) {
    local_a8 = (int *)*param_4;
    (**(code **)(*local_a8 + 4))(&local_a8,local_a0);
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar3 != 0) && (iStack_b4 = *(int *)(iVar3 + 0x2ac4), iStack_b4 != 0)) {
    piStack_90 = (int *)0x0;
    uStack_8c = 0;
    (**(code **)(*local_a8 + 0x10))
              (local_a0,"GIFT_BOX_READER_DATA_CLASSNAME",&piStack_90,((byte)local_a4 & 0x8f) == 10);
    FUN_114fd740(auStack_6c);
    piVar5 = piStack_5c;
    if (piStack_5c != piStack_58) {
LAB_10946a95:
      piVar1 = (int *)*piVar5;
      if (((piVar1 == (int *)0x0) || (*piVar1 != *(int *)(iStack_b4 + 0x78))) ||
         (piVar1[1] != *(int *)(iStack_b4 + 0x7c))) goto LAB_10946aae;
      piStack_50 = (int *)0x0;
      piStack_4c = (int *)0x0;
      iStack_b4 = CONCAT31(iStack_b4._1_3_,((byte)local_a4 & 0x8f) == 10);
      iStack_b0 = 0;
      iVar3 = iStack_b4;
      cVar2 = (**(code **)(*local_a8 + 0x10))
                        (local_a0,"MAIL_EXTRACT_ITEM_DATA_CLASSNAME",&piStack_90,iStack_b4);
      if (((cVar2 != '\0') && (((byte)local_9c & 0x8f) == 6)) &&
         (unaff_EDI = local_98, ((uint)local_9c >> 6 & 1) != 0)) {
        unaff_EDI = (undefined4 *)*local_98;
      }
      uStack_88 = 0;
      uStack_84 = 0;
      FUN_11a98a70(&uStack_88);
      uVar7 = 0;
      if (piVar1[0x2a] - piVar1[0x29] >> 5 != 0) {
        iVar6 = 0;
        do {
          piStack_4c = (int *)0x0;
          puStack_48 = (undefined2 *)0x0;
          FUN_11a98de0(&piStack_4c,iVar3,0,0);
          FUN_104d1550(&DAT_11dccb08,*(undefined4 *)(iVar6 + 0x14 + piVar1[0x29]));
          FUN_104d1550("_count",*(undefined2 *)(iVar6 + 0x10 + piVar1[0x29]));
          FUN_104d1550("_index",*(undefined2 *)(iVar6 + 2 + piVar1[0x29]));
          iVar4 = FUN_10254130(*(undefined4 *)(iVar6 + 0x14 + piVar1[0x29]));
          if (iVar4 != 0) {
            FUN_104d1670("_itemIconPathName",*(undefined4 *)(iVar4 + 0xb4));
          }
          (**(code **)(*local_9c + 0x3c))(uStack_94,&piStack_5c);
          if (((uint)puStack_48 >> 6 & 1) != 0) {
            (**(code **)(*piStack_4c + 8))(&piStack_4c,puStack_44);
          }
          iVar6 = iVar6 + 0x20;
          uVar7 = uVar7 + 1;
          param_1 = unaff_EDI;
        } while (uVar7 < (uint)(piVar1[0x2a] - piVar1[0x29] >> 5));
      }
      FUN_104d14d0("nGiftID");
      (**(code **)(*unaff_ESI + 0x14))(iStack_b4,"itemList",&uStack_8c,(unaff_BL & 0x8f) == 10);
      FUN_104d1440(&DAT_11dc0944,piVar1[0x23]);
      FUN_104d1440("goldIndex",piVar1[0x24]);
      FUN_104d1550("source",(char)piVar1[2]);
      CPet__SetName(piVar1[0xb]);
      puStack_40 = auStack_60;
      auStack_60[0] = 0;
      puStack_3c = puStack_40;
      FUN_100e5b60(auStack_60);
      FUN_104d1700("strSender",puStack_40);
      if ((puStack_40 != auStack_64) && (puStack_40 != (undefined2 *)0x0)) {
        FUN_10c3d5d0(puStack_40);
      }
      CPet__SetName(piVar1[0x17]);
      puStack_48 = auStack_68;
      auStack_68[0] = 0;
      puStack_44 = puStack_48;
      FUN_100e5b60(auStack_68);
      FUN_104d1700("strTitle",puStack_48);
      if ((puStack_48 != auStack_6c) && (puStack_48 != (undefined2 *)0x0)) {
        FUN_10c3d5d0(puStack_48);
      }
      CPet__SetName(piVar1[0x1d]);
      piStack_50 = &uStack_70;
      uStack_70 = (uint)uStack_70._2_2_ << 0x10;
      piStack_4c = piStack_50;
      FUN_100e5b60(&uStack_70);
      FUN_104d1700("strContent",piStack_50);
      if ((puStack_14 != auStack_38) && (puStack_14 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_14);
      }
      if (iStack_b0 != 0) {
        FUN_10c3da30(iStack_b0);
      }
      if (local_ac != (undefined4 *)0x0) {
        FUN_10c3da30(local_ac);
      }
      if (iStack_b4 != 0) {
        FUN_10c3da30(iStack_b4);
      }
      if ((uStack_74 >> 6 & 1) != 0) {
        (**(code **)(*piStack_78 + 8))(&piStack_78,uStack_70);
        piStack_78 = (int *)0x0;
      }
      uStack_74 = 0;
      if (((uint)piStack_4c >> 6 & 1) != 0) {
        (**(code **)(*piStack_50 + 8))(&piStack_50,puStack_48);
      }
    }
LAB_10946efa:
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (piStack_5c != (int *)0x0) {
      FUN_10c3d5d0(piStack_5c);
    }
    if ((uStack_8c >> 6 & 1) != 0) {
      (**(code **)(*piStack_90 + 8))(&piStack_90,uStack_88);
      piStack_90 = (int *)0x0;
    }
    uStack_8c = 0;
  }
  if ((local_a4 >> 6 & 1) != 0) {
    (**(code **)(*local_a8 + 8))(&local_a8,local_a0);
  }
  FUN_11a89daa();
  return;
LAB_10946aae:
  piVar5 = piVar5 + 1;
  if (piVar5 == piStack_58) goto LAB_10946efa;
  goto LAB_10946a95;
}



/* ===== FUN_10956f40 @ 10956f40  size=657 ===== */
// calls: atoi, CAvatarInfo::ResolveRecordById, CPlayer::GetHuntRankOrCount
// strings:
//   "weaponType"
//   "memberLevel"
//   "memberHRLevel"
//   "memberName"
//   "memberTotalHP"
//   "memberCurrentHP"
//   "memberState"
//   "memberNetID"
//   "Watched"
//   "membterFaction"
//   "serverID"
//   "subTeamID"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""weaponType""
     ""memberLevel""
     ""memberHRLevel""
     ""memberName""
     ""memberTotalHP""
     ""memberCurrentHP""
     ""memberState""
     ""memberNetID""
     ""Watched""
     ""membterFaction"" */

void __fastcall FUN_10956f40(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_c0;
  int local_bc;
  undefined1 local_b8 [68];
  char *local_74;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*param_2 + 0x294))();
  FUN_10520070();
  (**(code **)(*param_2 + 0x1bc))(local_b8,0,0);
  iVar4 = atoi(local_74);
  iVar4 = CAvatarInfo__ResolveRecordById(iVar4);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x14) + -0x1e;
  }
  uVar5 = CPlayer__GetHuntRankOrCount();
  (**(code **)(*param_2 + 0xb8))();
  uVar6 = FUN_1025b060();
  uVar7 = FUN_1134b990();
  local_c0 = 0;
  if (param_2[3] != 0) {
    cVar2 = FUN_1140e140();
    if (cVar2 != '\0') {
      local_c0 = (**(code **)(*param_2 + 0x44))();
    }
  }
  local_bc = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar8 = (**(code **)(*piVar1 + 0xb4))();
    iVar4 = param_2[1];
    local_bc = -1;
    iVar9 = -1;
    if (iVar8 != 0) {
      iVar9 = FUN_112e5540(iVar4);
      local_bc = FUN_112e5600(iVar4);
    }
    local_bc = local_bc + iVar9 * 4;
  }
  FUN_104d1550("weaponType",iVar3);
  FUN_104d1550("memberLevel",uVar5);
  uVar5 = FUN_1025b060();
  FUN_104d1550("memberHRLevel",uVar5);
  local_14 = local_24;
  local_24[0] = 0;
  local_10 = local_14;
  FUN_100e5aa0(local_14);
  FUN_104d1670("memberName",local_10);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  FUN_104d1550("memberTotalHP",uVar7);
  FUN_104d1550("memberCurrentHP",uVar6);
  FUN_104d1550("memberState",0);
  FUN_104d1440("memberNetID",param_2[1]);
  FUN_104d15e0("Watched",0);
  FUN_104d1550("membterFaction",local_c0);
  FUN_104d1440("serverID",param_2[0xb5e]);
  FUN_104d1550("subTeamID",local_bc);
  FUN_10516930();
  FUN_11a89daa();
  return;
}



/* ===== FUN_10968af0 @ 10968af0  size=88 ===== */
// calls: CGuildTipsInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CGuildTipsInfo"

/* [RE-AUTO c0]
   calls: CGuildTipsInfo::GetManagers
   strings:
     ""CGuildTipsInfo"" */

undefined * FUN_10968af0(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ddd67c;
  puVar1 = (undefined4 *)CGuildTipsInfo__GetManager();
  puVar2 = (undefined *)*puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)CInfoManager__FindByName(&local_8,"CGuildTipsInfo",0);
    if (puVar2 == (undefined *)0x0) {
      if ((DAT_123c0174 & 1) == 0) {
        DAT_123c0174 = DAT_123c0174 | 1;
        FUN_10969b10();
        FUN_11a8911f(&LAB_11c797a0);
      }
      puVar2 = &DAT_123c0228;
    }
  }
  return puVar2;
}



/* ===== FUN_1096e6d0 @ 1096e6d0  size=927 ===== */
// strings:
//   "PLAYER_CLASS_NAME"
//   "nNetID"
//   "strName"
//   "bFriend"
//   "playerList"

/* [RE-AUTO c0]
   strings:
     ""PLAYER_CLASS_NAME""
     ""nNetID""
     ""strName""
     ""bFriend""
     ""playerList"" */

void FUN_1096e6d0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 *local_bc;
  int *piStack_b8;
  uint uStack_b4;
  undefined1 auStack_a4 [8];
  int iStack_9c;
  int *piStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  int *piStack_84;
  int *piStack_80;
  uint uStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [12];
  int iStack_68;
  undefined1 *puStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [4];
  undefined1 *puStack_4c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_cc;
  local_bc = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))();
    *param_1 = 0;
  }
  iVar4 = DAT_1202e818;
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar4 != 0) && (iStack_9c = *(int *)(iVar4 + 0x2d5c), iStack_9c != 0)) {
    FUN_104f4330();
    uVar1 = uStack_7c;
    iStack_9c = 0;
    piStack_98 = (int *)0x0;
    uStack_c4 = CONCAT31(uStack_c4._1_3_,((byte)piStack_80 & 0x8f) == 10);
    uStack_cc = 0;
    (**(code **)(*piStack_84 + 0x10))();
    uStack_cc = 0;
    uStack_c8 = 0;
    FUN_11a98a70();
    if ((DAT_1202e818 != 0) &&
       ((*(int *)(DAT_1202e818 + 0xd0) != 0 &&
        (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)))) {
      piVar9 = &iStack_68;
      (**(code **)(*piVar5 + 0xac))();
      cVar2 = FUN_113a58c0();
      while (cVar2 == '\0') {
        piVar5 = (int *)FUN_113a5930();
        if ((piVar5 != (int *)0x0) &&
           (piVar6 = (int *)(**(code **)(*piVar5 + 0xa8))(), piVar6 == (int *)0x0)) {
          piStack_84 = piVar6;
          piStack_80 = piVar6;
          FUN_11a98de0(&piStack_84,&iStack_9c,0,0);
          (**(code **)(*piVar5 + 0xb8))(auStack_50);
          iVar4 = FUN_100e5a30();
          FUN_100b5f70(*(undefined4 *)(iVar4 + 0x14),&stack0xffffff0f);
          bVar3 = (**(code **)(*unaff_ESI + 0x70))(auStack_74);
          uVar8 = (uint)bVar3;
          if ((puStack_64 != auStack_78) && (puStack_64 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_64);
          }
          if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_4c);
          }
          FUN_104d1440("nNetID",piVar5[1]);
          uVar7 = (**(code **)(*piVar5 + 0xb8))();
          FUN_104d1790("strName",uVar7);
          FUN_104d15e0("bFriend",uVar8);
          (**(code **)(*piVar9 + 0x3c))(uVar1,auStack_a4);
          FUN_104d7c10();
        }
        FUN_113a58d0();
        cVar2 = FUN_113a58c0();
        param_1 = unaff_EDI;
      }
      FUN_113a5790();
    }
    (**(code **)(*piStack_98 + 0x14))
              (uStack_90,"playerList",&stack0xffffff30,((byte)uStack_94 & 0x8f) == 10);
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 1;
    if ((uStack_b4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_b8 + 8))();
      piStack_b8 = (int *)0x0;
    }
    uStack_b4 = 0;
    if ((uStack_94 >> 6 & 1) != 0) {
      (**(code **)(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    uStack_94 = 0;
    if ((uStack_7c >> 6 & 1) != 0) {
      (**(code **)(*piStack_80 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1096eaa0 @ 1096eaa0  size=1250 ===== */
// calls: memcpy, CPet::SetName
// strings:
//   "FRIEND_CLASS_NAME"
//   "netId"
//   "intimate"
//   "groupId"
//   "isOnline"
//   "strMood"
//   "lineID"
//   "guildName"
//   "nTeamID"
//   "strHunterStar"
//   "playerList"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""FRIEND_CLASS_NAME""
     ""netId""
     ""intimate""
     ""groupId""
     ""isOnline""
     ""strMood""
     ""lineID""
     ""guildName""
     ""nTeamID""
     ""strHunterStar"" */

void FUN_1096eaa0(int **param_1,undefined4 param_2,undefined4 param_3,int **param_4)

{
  int **ppiVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  void *extraout_ECX;
  void *_Src;
  undefined4 unaff_EBX;
  undefined4 *unaff_EDI;
  int aiStack_e8 [2];
  uint *puStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  undefined4 *puStack_d4;
  int **ppiStack_d0;
  int **ppiStack_cc;
  int **local_bc;
  int *piStack_b8;
  undefined4 uStack_b0;
  uint uStack_a8;
  undefined4 *puStack_a4;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  int *piStack_98;
  uint uStack_94;
  int **ppiStack_90;
  int *piStack_80;
  uint uStack_7c;
  int **ppiStack_78;
  int iStack_74;
  undefined1 auStack_70 [8];
  int *piStack_68;
  int **local_64;
  int *piStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  int **ppiStack_4c;
  int **ppiStack_48;
  undefined1 auStack_44 [20];
  undefined1 *puStack_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_bc;
  local_bc = param_4;
  local_64 = param_1;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    ppiStack_cc = (int **)param_1[2];
    ppiStack_d0 = param_1;
    puStack_d4 = (undefined4 *)0x1096eae3;
    (**(code **)(**param_1 + 8))();
    *param_1 = (int *)0x0;
  }
  iVar4 = DAT_1202e818;
  param_1[1] = (int *)0x2;
  *(undefined1 *)(param_1 + 2) = 0;
  ppiStack_cc = (int **)0x1096eb0d;
  iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xd0) + 0x90) + 0xb4))();
  if ((iVar4 != 0) && (piVar8 = *(int **)(iVar4 + 0x2d5c), piVar8 != (int *)0x0)) {
    ppiStack_cc = local_bc;
    ppiStack_d0 = (int **)0x1096eb30;
    FUN_104f4330();
    puStack_d4 = &uStack_9c;
    uStack_9c = 0;
    piStack_98 = (int *)0x0;
    ppiStack_d0 = (int **)CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)piStack_60 & 0x8f) == 10);
    piStack_b8 = (int *)0x0;
    piStack_d8 = (int *)0x11dccf04;
    piStack_dc = piStack_5c;
    puStack_e0 = (uint *)0x1096eb75;
    cVar2 = (*(code *)(*local_64)[4])();
    if ((cVar2 != '\0') &&
       ((((byte)uStack_a8 & 0x8f) == 6 && (unaff_EDI = puStack_a4, (uStack_a8 >> 6 & 1) != 0)))) {
      unaff_EDI = (undefined4 *)*puStack_a4;
    }
    puStack_e0 = &uStack_94;
    uStack_94 = 0;
    ppiStack_90 = (int **)0x0;
    aiStack_e8[1] = 0x1096ebbc;
    FUN_11a98a70();
    aiStack_e8[1] = 0x1096ebc3;
    piVar5 = (int *)(**(code **)(*piVar8 + 0x10))();
    aiStack_e8[0] = piVar5[1] - *piVar5 >> 2;
    FUN_104eaed0();
    _Src = (void *)*piVar5;
    piVar8 = piStack_68;
    if ((void *)piVar5[1] != _Src) {
      piStack_dc = (int *)(piVar5[1] - (int)_Src);
      pvVar6 = memcpy(piStack_68,_Src,(size_t)piStack_dc);
      _Src = extraout_ECX;
      piVar8 = (int *)((int)pvVar6 + (int)piStack_dc);
    }
    piStack_d8 = piVar8;
    FUN_1096f160(_Src);
    piVar5 = piStack_68;
    if (piStack_68 != piVar8) {
      do {
        iVar4 = *piVar5;
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x84) == 0)) {
          ppiStack_d0 = (int **)0x0;
          ppiStack_cc = (int **)0x0;
          FUN_11a98de0(&ppiStack_d0,puStack_d4,0,0);
          FUN_104d1550("netId",*(undefined4 *)(iVar4 + 0x28));
          FUN_104d14d0(&DAT_11dccb84);
          CPet__SetName(*(undefined4 *)(iVar4 + 0x24));
          piStack_60 = (int *)auStack_70;
          auStack_70[0] = 0;
          piStack_5c = piStack_60;
          FUN_100e5aa0(piStack_60);
          FUN_104d1670(&DAT_11dbac80,piStack_60);
          if ((piStack_60 != &iStack_74) && (piStack_60 != (int *)0x0)) {
            FUN_10c3d5d0(piStack_60);
          }
          FUN_104d1550(&DAT_11dccf88,*(undefined4 *)(iVar4 + 0x2c));
          if (*(int *)(iVar4 + 0x34) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_1025b060();
          }
          FUN_104d1550(&DAT_11dccf8c,uVar7);
          FUN_104d1440("intimate",*(undefined4 *)(iVar4 + 0x48));
          uVar3 = 0;
          if (*(int *)(iVar4 + 0x84) != 0) {
            uVar3 = *(undefined1 *)(*(int *)(iVar4 + 0x84) + 4);
          }
          FUN_104d1550("groupId",uVar3);
          FUN_104d15e0("isOnline",*(undefined1 *)(iVar4 + 0x38));
          FUN_104d1670("strMood",*(undefined4 *)(iVar4 + 0x68));
          FUN_104d1550("lineID",*(undefined4 *)(iVar4 + 0x3c));
          ppiStack_4c = &piStack_5c;
          piStack_5c = (int *)((uint)piStack_5c & 0xffffff00);
          ppiStack_48 = ppiStack_4c;
          FUN_1096f9f0();
          FUN_104d1670("guildName",ppiStack_48);
          FUN_104d1550("nTeamID",*(undefined4 *)(iVar4 + 0x88));
          FUN_104d1670("strHunterStar",*(undefined4 *)(iVar4 + 0xa4));
          (**(code **)(*piStack_b8 + 0x3c))(uStack_b0,aiStack_e8);
          if ((puStack_30 != auStack_44) && (puStack_30 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_30);
          }
          if (piStack_dc != (int *)0x0) {
            FUN_10c3da30(piStack_dc);
          }
          piVar8 = piStack_d8;
          if (((uint)ppiStack_cc >> 6 & 1) != 0) {
            (*(code *)(*ppiStack_d0)[2])(&ppiStack_d0,unaff_EDI);
            piVar8 = piStack_d8;
          }
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar8);
    }
    (**(code **)(*piStack_80 + 0x14))
              (ppiStack_78,"playerList",auStack_a0,((byte)uStack_7c & 0x8f) == 10);
    ppiVar1 = local_64;
    if (((uint)local_64[1] >> 6 & 1) != 0) {
      ppiStack_cc = (int **)local_64[2];
      ppiStack_d0 = local_64;
      puStack_d4 = (undefined4 *)0x1096eed7;
      (**(code **)(**local_64 + 8))();
      *ppiVar1 = (int *)0x0;
    }
    ppiVar1[1] = (int *)0x2;
    *(undefined1 *)(ppiVar1 + 2) = 1;
    if (ppiStack_48 != (int **)0x0) {
      ppiStack_cc = ppiStack_48;
      ppiStack_d0 = (int **)0x1096eef9;
      FUN_10c3d5d0();
    }
    if ((uStack_7c >> 6 & 1) != 0) {
      ppiStack_d0 = &piStack_80;
      ppiStack_cc = ppiStack_78;
      puStack_d4 = (undefined4 *)0x1096ef19;
      (**(code **)(*piStack_80 + 8))();
      piStack_80 = (int *)0x0;
    }
    uStack_7c = 0;
    if ((uStack_94 >> 6 & 1) != 0) {
      ppiStack_d0 = &piStack_98;
      ppiStack_cc = ppiStack_90;
      puStack_d4 = (undefined4 *)0x1096ef46;
      (**(code **)(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    uStack_94 = 0;
    if (((uint)piStack_5c >> 6 & 1) != 0) {
      ppiStack_d0 = &piStack_60;
      ppiStack_cc = ppiStack_58;
      puStack_d4 = (undefined4 *)0x1096ef73;
      (**(code **)(*piStack_60 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10974590 @ 10974590  size=929 ===== */
// calls: _time64
// strings:
//   "InitModel"
//   "SwitchViewMode"
//   "FetchInstaceData"
//   "FetchGuildConfigData"
//   "FetchGuildKnockoutRemainSeconds"
//   "FetchNormalKnockoutRemainSeconds"
//   "RecordNormalKnockoutStartTime"
//   "InstancePayMode"
//   "GetInstanceEnterMode"
//   "GetPunishPlayTimes"
//   "NotifyWindow"
//   "GetMonsterIcon"

/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""InitModel""
     ""SwitchViewMode""
     ""FetchInstaceData""
     ""FetchGuildConfigData""
     ""FetchGuildKnockoutRemainSeconds""
     ""FetchNormalKnockoutRemainSeconds""
     ""RecordNormalKnockoutStartTime""
     ""InstancePayMode""
     ""GetInstanceEnterMode""
     ""GetPunishPlayTimes"" */

void __fastcall FUN_10974590(int param_1)

{
  __time64_t _Var1;
  code *pcStack_e4;
  char *pcStack_e0;
  code **ppcStack_dc;
  code ***pppcStack_d8;
  code *pcStack_d4;
  code **ppcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code **ppcStack_c4;
  code **ppcStack_c0;
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
  pppcStack_34 = (code ***)0x109745c4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_10974940;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109745d5;
  FUN_10976910();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109745eb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dde3ae;
  pppcStack_40 = (code ***)0x11dde3a0;
  pppcStack_44 = (code ***)0x1097460b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10974c50;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x1097461c;
  FUN_10976910();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10974632;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dde39c;
  pppcStack_50 = (code ***)0x11dde38c;
  pppcStack_54 = (code ***)0x10974652;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)LevelEntrustDetailVO__Build;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10974663;
  FUN_10976910();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10974679;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dde388;
  pppcStack_60 = (code ***)0x11dde374;
  pppcStack_64 = (code ***)0x10974699;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10976560;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109746aa;
  FUN_10976910();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppuStack_70 = (undefined4 ***)0x109746c0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dde373;
  pppuStack_70 = (undefined4 ***)0x11dde354;
  pppuStack_74 = (undefined4 ***)0x109746e0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppuStack_74 = (undefined4 ***)FUN_10976740;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109746f1;
  FUN_10976910();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10974707;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_7c = (code ***)0x11dde498;
  pppcStack_80 = (code ***)0x11dde478;
  pppcStack_84 = (code ***)0x10974727;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109766d0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppuStack_8c = (undefined4 ***)0x10974738;
  FUN_10976910();
  if (((code ****)pppuStack_70 != &pppcStack_84) && ((code ****)pppuStack_70 != (code ****)0x0)) {
    pppuStack_8c = pppuStack_70;
    pppcStack_90 = (code ***)0x1097474e;
    FUN_10c3d5d0();
  }
  pppuStack_74 = &pppcStack_84;
  pppuStack_8c = (undefined4 ***)0x11dde475;
  pppcStack_90 = (code ***)0x11dde458;
  pppcStack_94 = (code ***)0x1097476e;
  pppuStack_70 = pppuStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)&LAB_10976820;
  pppcStack_98 = (code ***)&pppuStack_8c;
  pppcStack_9c = (code ***)0x1097477f;
  FUN_10976910();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x10974795;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dde457;
  pppcStack_a0 = (code ***)0x11dde448;
  pppcStack_a4 = (code ***)0x109747b5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10974be0;
  pppuStack_a8 = &pppcStack_9c;
  pppcStack_ac = (code ***)0x109747c6;
  FUN_10976910();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x109747dc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dde444;
  pppcStack_b0 = (code ***)0x11dde430;
  pppcStack_b4 = (code ***)0x109747fc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_10974ae0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x1097480d;
  FUN_10976910();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    ppcStack_c0 = (code **)0x10974823;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dde4ee;
  ppcStack_c0 = (code **)0x11dde4dc;
  ppcStack_c4 = (code **)0x10974843;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  ppcStack_c4 = (code **)FUN_10974950;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x10974854;
  FUN_10976910();
  if ((pppcStack_b0 != &ppcStack_c4) && (pppcStack_b0 != (code ***)0x0)) {
    pppcStack_cc = pppcStack_b0;
    ppcStack_d0 = (code **)0x1097486a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = &ppcStack_c4;
  pppcStack_cc = (code ***)0x11dde4d8;
  ppcStack_d0 = (code **)0x11dde4cc;
  pcStack_d4 = (code *)0x1097488a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pcStack_d4 = FUN_10974d30;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  ppcStack_dc = (code **)0x1097489b;
  FUN_10976910();
  if ((ppcStack_c0 != &pcStack_d4) && (ppcStack_c0 != (code **)0x0)) {
    ppcStack_dc = ppcStack_c0;
    pcStack_e0 = (char *)0x109748b1;
    FUN_10c3d5d0();
  }
  ppcStack_c4 = &pcStack_d4;
  ppcStack_dc = (code **)0x11dde4ca;
  pcStack_e0 = "GetMonsterIcon";
  pcStack_e4 = (code *)0x109748d1;
  ppcStack_c0 = ppcStack_c4;
  FUN_100b62c0();
  pcStack_e4 = FUN_10974a30;
  FUN_10976910(&ppcStack_dc);
  if ((ppcStack_d0 != &pcStack_e4) && (ppcStack_d0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_d0);
  }
  _Var1 = CONCAT44(DAT_123bbccc,DAT_123bbcc8);
  if (DAT_123bbcc8 == 0 && DAT_123bbccc == 0) {
    _Var1 = _time64((__time64_t *)0x0);
  }
  *(__time64_t *)(param_1 + 0x20) = _Var1;
  FUN_11a89daa();
  return;
}



/* ===== FUN_10976560 @ 10976560  size=358 ===== */
// calls: _time64
// strings:
//   "guildQualifierInstance"
//   "guildKnockoutInstance"
//   "guildKnockoutRemainSeconds"

/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""guildQualifierInstance""
     ""guildKnockoutInstance""
     ""guildKnockoutRemainSeconds"" */

void FUN_10976560(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  __time64_t _Var4;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int iStack_2c;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 4) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    iVar1 = FUN_11734e90();
    FUN_104d1550("guildQualifierInstance",*(undefined4 *)(iVar1 + 0x80));
    iVar1 = FUN_11734e90();
    FUN_104d1550("guildKnockoutInstance",*(undefined4 *)(iVar1 + 0x84));
    if (((in_stack_00000010[7] & 0x8f) == 3) ||
       (uVar2 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
      uVar2 = in_stack_00000010[8];
    }
    if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
      iStack_2c = in_stack_00000010[0xe];
    }
    else {
      iStack_2c = -0x21524151;
    }
    if (((in_stack_00000010[0x13] & 0x8f) == 3) ||
       (uVar3 = 0xdeadbeaf, (in_stack_00000010[0x13] & 0x8f) == 4)) {
      uVar3 = in_stack_00000010[0x14];
    }
    iVar1 = FUN_10944610(uVar2);
    if (iVar1 != 0) {
      _Var4 = CONCAT44(DAT_123bbccc,DAT_123bbcc8);
      if (DAT_123bbcc8 == 0 && DAT_123bbccc == 0) {
        _Var4 = _time64((__time64_t *)0x0);
      }
      iVar1 = FUN_1171cda0(iStack_2c + 1,uVar3);
      FUN_104d1550("guildKnockoutRemainSeconds",iVar1 - (int)_Var4);
    }
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10981e80 @ 10981e80  size=226 ===== */
// strings:
//   "mh.model.Ipvp.IpvpAttackInfoPlayerData"
//   "Faction"

/* [RE-AUTO c0]
   strings:
     ""mh.model.Ipvp.IpvpAttackInfoPlayerData""
     ""Faction"" */

void FUN_10981e80(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  
  FUN_11a98de0(in_stack_00000018,"mh.model.Ipvp.IpvpAttackInfoPlayerData",0,0);
  if (in_stack_00000014 == 1) {
    uVar1 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar1 == 3) || (uVar4 = 0xdeadbeaf, uVar1 == 4)) {
      uVar4 = *(undefined4 *)(in_stack_00000010 + 8);
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar3 + 0xb4))();
      if ((iVar2 != 0) &&
         (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x7c))(uVar4);
        if (piVar3 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar3 + 0xa8))();
          if (iVar2 == 0) {
            uVar4 = (**(code **)(*piVar3 + 0xb8))();
            FUN_104d1790(&DAT_11da7300,uVar4);
            uVar4 = (**(code **)(*piVar3 + 0x44))();
            FUN_104d1550("Faction",uVar4);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10985850 @ 10985850  size=2929 ===== */
// calls: CLeagueInfo::CollectLeagueScheduleEntries
// strings:
//   "strTitleName"
//   "maxPvpBattleCount"
//   "curPvpBattleCount"
//   "nEntrustVipCnt"
//   "PVPBATTLE_LISTVO_CLASSNAME"
//   "PVPBATTLE_TASKVO_CLASSNAME"
//   "PVPBATTLE_NOTICEVO_CLASSNAME"
//   "iLeagueID"
//   "iCountLeague"
//   "iLeagueName"
//   "levelGroupID"
//   "levelID"
//   "levelName"
//   "leagueTasksArr"
//   "pvpBattleListArr"
//   "noticeLeagueID"
//   "noticeStartLeagueTime"
//   "noticeEndLeagueTime"
//   "noticePvpBattleRound"
//   "noticeLeagueName"

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   strings:
     ""strTitleName""
     ""maxPvpBattleCount""
     ""curPvpBattleCount""
     ""nEntrustVipCnt""
     ""PVPBATTLE_LISTVO_CLASSNAME""
     ""PVPBATTLE_TASKVO_CLASSNAME""
     ""PVPBATTLE_NOTICEVO_CLASSNAME""
     ""iLeagueID""
     ""iCountLeague""
     ""iLeagueName"" */

void FUN_10985850(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int **ppiVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  int **ppiVar13;
  char *pcStack_1c4;
  uint uStack_1c0;
  int *piStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  int *piStack_1ac;
  int **ppiStack_1a8;
  int *piStack_1a4;
  int *piStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  int *local_188;
  uint local_184;
  char *local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  char *pcStack_170;
  undefined4 uStack_16c;
  undefined4 *puStack_168;
  int iStack_164;
  int *piStack_160;
  uint uStack_15c;
  undefined4 *puStack_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  int *piStack_148;
  int iStack_144;
  char acStack_140 [4];
  uint uStack_13c;
  int *apiStack_138 [3];
  uint uStack_12c;
  char *pcStack_128;
  int *piStack_108;
  uint uStack_104;
  char *pcStack_100;
  int *piStack_cc;
  undefined2 auStack_c8 [2];
  int *piStack_c4;
  int *piStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  int **ppiStack_b0;
  int **ppiStack_ac;
  int **ppiStack_a8;
  int **ppiStack_a4;
  int **ppiStack_a0;
  undefined1 auStack_9c [4];
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int **ppiStack_74;
  int **ppiStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_194;
  if (param_5 == 1) {
    local_188 = (int *)0x0;
    local_184 = param_4[1];
    local_17c = param_4[3];
    piStack_1a4 = (int *)param_4[2];
    local_178 = param_4[4];
    local_180 = (char *)piStack_1a4;
    if ((local_184 >> 6 & 1) != 0) {
      local_188 = (int *)*param_4;
      ppiStack_1a8 = &local_188;
      piStack_1ac = (int *)0x109858ba;
      (**(code **)(*local_188 + 4))();
    }
    piStack_1a4 = (int *)0x109858d3;
    iStack_144 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((iStack_144 != 0) && (iVar11 = *(int *)(iStack_144 + 0x2b9c), iVar11 != 0)) {
      piStack_1a4 = (int *)0x109858f2;
      iStack_164 = FUN_107cb5c0();
      piStack_1a4 = *(int **)(iVar11 + 0x14);
      iStack_164 = iStack_164 + 0x261d0;
      ppiStack_1a8 = (int **)0x10985903;
      iVar4 = FUN_104d8540();
      if (iVar4 != 0) {
        piStack_1a4 = (int *)auStack_28;
        auStack_28[0] = 0;
        ppiStack_1a8 = (int **)0x10985936;
        puStack_18 = (undefined1 *)piStack_1a4;
        puStack_14 = (undefined1 *)piStack_1a4;
        FUN_100e5aa0();
        ppiStack_1a8 = (int **)puStack_18;
        piStack_1ac = (int *)0x11dd79f4;
        pcStack_1b0 = (char *)0x1098594d;
        FUN_104d1670();
        if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
          ppiStack_1a8 = (int **)puStack_18;
          piStack_1ac = (int *)0x1098596c;
          FUN_10c3d5d0();
        }
        ppiStack_1a8 = *(int ***)(iVar4 + 0x30);
        piStack_1ac = *(int **)(iVar11 + 0x14);
        pcStack_1b0 = (char *)0x10985984;
        iVar5 = (**(code **)(*(int *)piStack_148[0xae6] + 0x20))();
        pcStack_1b0 = (char *)(*(int *)(iVar4 + 0x2c) + iVar5);
        pcStack_1b4 = "maxPvpBattleCount";
        pcStack_1b8 = (char *)0x1098599a;
        FUN_104d1440();
        piVar2 = piStack_150;
        pcStack_1b0 = *(char **)(iVar11 + 0x14);
        pcStack_1b4 = (char *)0x109859af;
        pcStack_1b4 = (char *)(**(code **)(*(int *)piStack_150[0xae6] + 0x28))();
        pcStack_1b8 = "curPvpBattleCount";
        piStack_1bc = (int *)0x109859c0;
        FUN_104d1550();
        pcStack_1b4 = (char *)0x0;
        if (piVar2[0xabe] != 0) {
          pcStack_1b4 = *(char **)(iVar11 + 0x14);
          pcStack_1b8 = (char *)0x109859d7;
          pcStack_1b4 = (char *)FUN_11548ea0();
        }
        pcStack_1b8 = "nEntrustVipCnt";
        piStack_1bc = (int *)0x109859e8;
        FUN_104d1550();
      }
      ppiStack_1a8 = apiStack_138 + 2;
      apiStack_138[2] = (int *)0x0;
      uStack_12c = 0;
      piStack_194 = (int *)CONCAT31(piStack_194._1_3_,((byte)local_184 & 0x8f) == 10);
      acStack_140[0] = '\0';
      acStack_140[1] = '\0';
      acStack_140[2] = '\0';
      acStack_140[3] = '\0';
      piStack_1a4 = piStack_194;
      piStack_1ac = (int *)0x11ddf768;
      pcStack_1b0 = local_180;
      pcStack_1b4 = (char *)0x10985a30;
      cVar3 = (**(code **)(*local_188 + 0x10))();
      if ((cVar3 != '\0') && (((byte)uStack_13c & 0x8f) == 6)) {
        if ((uStack_13c >> 6 & 1) == 0) {
          piStack_150 = apiStack_138[0];
        }
        else {
          piStack_150 = (int *)*apiStack_138[0];
        }
      }
      pcStack_1b8 = acStack_140;
      iStack_144 = 0;
      piStack_1a4 = (int *)CONCAT31(piStack_1a4._1_3_,((byte)piStack_194 & 0x8f) == 10);
      pcStack_1b4 = (char *)piStack_1a4;
      piStack_1bc = (int *)0x11ddf74c;
      uStack_1c0 = uStack_190;
      pcStack_1c4 = (char *)0x10985a90;
      cVar3 = (**(code **)(*unaff_EBX + 0x10))();
      if ((cVar3 != '\0') && (((byte)piStack_14c & 0x8f) == 6)) {
        if (((uint)piStack_14c >> 6 & 1) == 0) {
          piStack_154 = piStack_148;
        }
        else {
          piStack_154 = (int *)*piStack_148;
        }
      }
      ppiVar13 = &piStack_150;
      puStack_158 = (undefined4 *)0x0;
      pcStack_1b4 = (char *)CONCAT31(pcStack_1b4._1_3_,((byte)piStack_1a4 & 0x8f) == 10);
      pcStack_1c4 = pcStack_1b4;
      pcVar12 = "PVPBATTLE_NOTICEVO_CLASSNAME";
      iVar11 = unaff_EDI;
      cVar3 = (*(code *)(*ppiStack_1a8)[4])(unaff_EDI,"PVPBATTLE_NOTICEVO_CLASSNAME",ppiVar13);
      if ((cVar3 != '\0') && (((byte)uStack_15c & 0x8f) == 6)) {
        if ((uStack_15c >> 6 & 1) == 0) {
          puStack_168 = puStack_158;
        }
        else {
          puStack_168 = (undefined4 *)*puStack_158;
        }
      }
      apiStack_138[0] = (int *)0x0;
      apiStack_138[1] = (int *)0x0;
      FUN_11a98a70();
      local_17c = 0;
      iVar4 = unaff_EBX[2] - unaff_EBX[1] >> 0x1f;
      if ((unaff_EBX[2] - unaff_EBX[1]) / 0x14 + iVar4 != iVar4) {
        uStack_1c0 = 0;
        do {
          uVar8 = uStack_1c0;
          iVar9 = 0;
          ppiVar7 = &piStack_194;
          piStack_194 = (int *)0x0;
          uStack_190 = 0;
          FUN_11a98de0(ppiVar7,uStack_174,0,0);
          iVar4 = unaff_EBX[1];
          iVar5 = *(int *)(uVar8 + 0xc + iVar4);
          iVar6 = *(int *)(iVar11 + 8 + iVar4);
          piStack_154 = *(int **)(iVar11 + 4 + iVar4);
          FUN_104d1550("iLeagueID",piStack_154);
          FUN_104d1550("iCountLeague",iVar5 - iVar6 >> 2);
          iVar4 = FUN_108f2fb0();
          iVar5 = 0;
          if (0 < iVar4) {
            do {
              iVar6 = FUN_108f2f20(iVar5);
              if ((iVar6 != 0) && (*(int **)(iVar6 + 0x10) == piStack_154)) {
                ppiStack_74 = &piStack_84;
                piStack_84 = (int *)((uint)piStack_84 & 0xffffff00);
                ppiStack_70 = ppiStack_74;
                FUN_100e5aa0(ppiStack_74);
                FUN_104d1670("iLeagueName",ppiStack_74);
                if ((ppiStack_70 != &piStack_84) && (ppiStack_70 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_70);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
          uStack_6c = 0;
          uStack_68 = 0;
          FUN_11a98a70(&uStack_6c);
          iVar4 = 0;
          unaff_EBX = piStack_1ac;
          if (0 < iVar9) {
            do {
              piStack_88 = (int *)0x0;
              piStack_84 = (int *)0x0;
              FUN_11a98de0(&piStack_88,local_17c,0,0);
              uVar1 = *(undefined4 *)(*(int *)((int)ppiVar7 + unaff_EBX[1] + 8) + iVar4 * 4);
              FUN_108f61f0();
              FUN_1130cd50(unaff_ESI,uVar1,0,apiStack_138 + 2);
              if (param_2 != 0) {
                piStack_c0 = (int *)0x0;
                puStack_bc = (undefined1 *)0x3;
                iStack_164 = CONCAT31(iStack_164._1_3_,((byte)uStack_94 & 0x8f) == 10);
                puStack_b8 = (undefined1 *)0x0;
                (**(code **)(*piStack_98 + 0x14))(uStack_90,"levelGroupID",&piStack_c0,iStack_164);
                if (((uint)puStack_bc >> 6 & 1) != 0) {
                  (**(code **)(*piStack_c0 + 8))(&piStack_c0,puStack_b8);
                }
              }
              unaff_EBX = piStack_1bc;
              if (param_2 != 0) {
                piStack_c0 = (int *)0x0;
                puStack_bc = (undefined1 *)0x3;
                uStack_16c = CONCAT31(uStack_16c._1_3_,((byte)uStack_94 & 0x8f) == 10);
                puStack_b8 = (undefined1 *)
                             *(int ***)(*(int *)((int)ppiVar7 + piStack_1bc[1] + 8) + iVar4 * 4);
                (**(code **)(*piStack_98 + 0x14))(uStack_90,"levelID",&piStack_c0,uStack_16c);
                if (((uint)puStack_bc >> 6 & 1) != 0) {
                  (**(code **)(*piStack_c0 + 8))(&piStack_c0,puStack_b8);
                }
              }
              ppiStack_b0 = &piStack_c0;
              piStack_c0 = (int *)((uint)piStack_c0 & 0xffffff00);
              ppiStack_ac = ppiStack_b0;
              FUN_100e5aa0(ppiStack_b0);
              FUN_104d1670("levelName",ppiStack_b0);
              if ((ppiStack_b0 != &piStack_c4) && (ppiStack_b0 != (int **)0x0)) {
                FUN_10c3d5d0(ppiStack_b0);
              }
              (**(code **)(*piStack_84 + 0x3c))(uStack_7c,auStack_9c);
              FUN_108f62b0();
              if (((uint)piStack_84 >> 6 & 1) != 0) {
                (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar9);
          }
          (*(code *)(*ppiStack_1a8)[5])
                    (unaff_EDI,"leagueTasksArr",&ppiStack_70,((byte)piStack_1a4 & 0x8f) == 10);
          (**(code **)(*piStack_160 + 0x3c))(puStack_158,&pcStack_1b8);
          if ((uStack_58 >> 6 & 1) != 0) {
            (**(code **)(*piStack_5c + 8))(&piStack_5c,uStack_54);
            piStack_5c = (int *)0x0;
          }
          uStack_58 = 0;
          if ((uStack_190 >> 6 & 1) != 0) {
            (**(code **)(*piStack_194 + 8))(&piStack_194,uStack_18c);
          }
          local_17c = local_17c + 1;
          uStack_1c0 = uStack_1c0 + 0x14;
        } while (local_17c < (uint)((unaff_EBX[2] - unaff_EBX[1]) / 0x14));
      }
      pcStack_1c4 = (char *)CONCAT31(pcStack_1c4._1_3_,((byte)pcStack_1b8 & 0x8f) == 10);
      (**(code **)(*piStack_1bc + 0x14))(pcStack_1b4,"pvpBattleListArr",&uStack_13c,pcStack_1c4);
      pcStack_1b4 = (char *)0x0;
      pcStack_1b0 = (char *)0x0;
      piStack_1ac = (int *)0x0;
      CLeagueInfo__CollectLeagueScheduleEntries(&pcStack_1b4);
      apiStack_138[0] = (int *)0x0;
      apiStack_138[1] = (int *)0x0;
      FUN_11a98a70(apiStack_138);
      bVar10 = (byte)iVar11;
      uVar8 = 0;
      iVar4 = (int)pcStack_1b8 - (int)piStack_1bc >> 0x1f;
      if (((int)pcStack_1b8 - (int)piStack_1bc) / 0x18 + iVar4 != iVar4) {
        iVar4 = 0;
        do {
          piStack_1ac = (int *)0x0;
          ppiStack_1a8 = (int **)0x0;
          FUN_11a98de0(&piStack_1ac,local_184,0,0);
          FUN_104d1550("noticeLeagueID",*(undefined4 *)(pcVar12 + iVar4));
          ppiStack_a4 = &piStack_c4;
          piStack_c4._0_2_ = 0;
          ppiStack_a0 = ppiStack_a4;
          FUN_100e5b60(&piStack_c4);
          FUN_104d1700("noticeStartLeagueTime",ppiStack_a4);
          if ((ppiStack_a4 != (int **)auStack_c8) && (ppiStack_a4 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_a4);
          }
          ppiStack_a8 = (int **)auStack_c8;
          auStack_c8[0] = 0;
          ppiStack_a4 = ppiStack_a8;
          FUN_100e5b60(auStack_c8);
          FUN_104d1700("noticeEndLeagueTime",ppiStack_a8);
          if ((ppiStack_a8 != &piStack_cc) && (ppiStack_a8 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_a8);
          }
          FUN_104d1550("noticePvpBattleRound",*(undefined4 *)((int)apiStack_138 + iVar4 + 8));
          iVar5 = FUN_108f2fb0();
          iVar6 = 0;
          if (0 < iVar5) {
            do {
              iVar9 = FUN_108f2f20(iVar6);
              if ((iVar9 != 0) && (*(int *)(iVar9 + 0x10) == *(int *)((int)apiStack_138 + iVar4))) {
                puStack_bc = (undefined1 *)&piStack_cc;
                piStack_cc._0_1_ = 0;
                puStack_b8 = puStack_bc;
                FUN_100e5aa0(puStack_bc);
                FUN_104d1670("noticeLeagueName",puStack_bc);
                if (((int **)puStack_b8 != &piStack_cc) && ((int **)puStack_b8 != (int **)0x0)) {
                  FUN_10c3d5d0(puStack_b8);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar5);
          }
          (**(code **)(*piStack_154 + 0x3c))(piStack_14c,&pcStack_1c4);
          if (((uint)ppiStack_1a8 >> 6 & 1) != 0) {
            (**(code **)(*piStack_1ac + 8))(&piStack_1ac,piStack_1a4);
          }
          bVar10 = (byte)iVar11;
          iVar4 = iVar4 + 0x18;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)(((int)pcStack_1b8 - (int)piStack_1bc) / 0x18));
      }
      (*(code *)apiStack_138[0][5])(pcVar12,"pvpBattleNoticeArr",&uStack_13c,(bVar10 & 0x8f) == 10);
      if (((uint)piStack_148 >> 6 & 1) != 0) {
        (**(code **)(*piStack_14c + 8))(&piStack_14c,iStack_144);
        piStack_14c = (int *)0x0;
      }
      piStack_148 = (int *)0x0;
      FUN_104f1850(ppiVar13,pcVar12,0,&stack0xfffffe6b);
      if (pcStack_170 != (char *)0x0) {
        piStack_1a4 = (int *)pcStack_170;
        ppiStack_1a8 = (int **)0x10986321;
        FUN_10c3d5d0();
      }
      if ((uStack_104 >> 6 & 1) != 0) {
        ppiStack_1a8 = &piStack_108;
        piStack_1a4 = (int *)pcStack_100;
        piStack_1ac = (int *)0x1098634d;
        (**(code **)(*piStack_108 + 8))();
        piStack_108 = (int *)0x0;
      }
      uStack_104 = 0;
      if ((uStack_12c >> 6 & 1) != 0) {
        ppiStack_1a8 = apiStack_138 + 2;
        piStack_1a4 = (int *)pcStack_128;
        piStack_1ac = (int *)0x10986380;
        (**(code **)(*apiStack_138[2] + 8))();
        apiStack_138[2] = (int *)0x0;
      }
      uStack_12c = 0;
    }
    if ((local_184 >> 6 & 1) != 0) {
      ppiStack_1a8 = &local_188;
      piStack_1a4 = (int *)local_180;
      piStack_1ac = (int *)0x109863ad;
      (**(code **)(*local_188 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109af720 @ 109af720  size=513 ===== */
// strings:
//   "InitModel"
//   "GetChatMess"
//   "SetBlockList"
//   "GetBlockList"
//   "Clean"
//   "SwitchViewMode"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""GetChatMess""
     ""SetBlockList""
     ""GetBlockList""
     ""Clean""
     ""SwitchViewMode"" */

void __fastcall FUN_109af720(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_84;
  char *pcStack_80;
  undefined1 **ppuStack_7c;
  code ***pppcStack_78;
  undefined1 *puStack_74;
  code **ppcStack_70;
  undefined1 ***pppuStack_6c;
  code ***pppcStack_68;
  undefined1 **ppuStack_64;
  undefined1 **ppuStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  undefined1 ***pppuStack_54;
  undefined1 ***pppuStack_50;
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
  pppcStack_34 = (code ***)0x109af754;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109af940;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109af765;
  FUN_109b01d0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109af77b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de1f8b;
  pppcStack_40 = (code ***)0x11de1f80;
  pppcStack_44 = (code ***)0x109af79b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109af970;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109af7ac;
  FUN_109b01d0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined1 ***)0x109af7c2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd3388;
  pppuStack_50 = (undefined1 ***)0x11dd337c;
  pppuStack_54 = (undefined1 ***)0x109af7e2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined1 ***)FUN_109afb50;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109af7f3;
  FUN_109b01d0();
  if (((undefined1 ****)pppcStack_40 != &pppuStack_54) &&
     ((undefined1 ****)pppcStack_40 != (undefined1 ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppuStack_60 = (undefined1 **)0x109af809;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppuStack_54;
  pppcStack_5c = (code ***)0x11dd3378;
  ppuStack_60 = (undefined1 **)0x11dd336c;
  ppuStack_64 = (undefined1 **)0x109af829;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppuStack_64 = (undefined1 **)FUN_109afbe0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppuStack_6c = (undefined1 ***)0x109af83a;
  FUN_109b01d0();
  if ((pppuStack_50 != &ppuStack_64) && (pppuStack_50 != (undefined1 ***)0x0)) {
    pppuStack_6c = pppuStack_50;
    ppcStack_70 = (code **)0x109af850;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &ppuStack_64;
  pppuStack_6c = (undefined1 ***)0x11de1f91;
  ppcStack_70 = (code **)0x11de1f8c;
  puStack_74 = (undefined1 *)0x109af870;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  puStack_74 = &LAB_109afd00;
  pppcStack_78 = (code ***)&pppuStack_6c;
  ppuStack_7c = (undefined1 **)0x109af881;
  FUN_109b01d0();
  if ((ppuStack_60 != &puStack_74) && (ppuStack_60 != (undefined1 **)0x0)) {
    ppuStack_7c = ppuStack_60;
    pcStack_80 = (char *)0x109af897;
    FUN_10c3d5d0();
  }
  ppuStack_64 = &puStack_74;
  ppuStack_7c = (undefined1 **)0x11dde3ae;
  pcStack_80 = "SwitchViewMode";
  pcStack_84 = (code *)0x109af8b7;
  ppuStack_60 = ppuStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109afca0;
  FUN_109b01d0(&ppuStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109b07e0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109afd60 @ 109afd60  size=945 ===== */
// strings:
//   "chatArray"
//   "CHATMESS_CLASS_NAME"
//   "m_nSrcId"
//   "m_nSrcDBId"
//   "m_sSrcName"
//   "m_sMsg"
//   "m_bSrcSelf"
//   "m_nLineID"
//   "m_nVip"
//   "m_bVipCanUse"
//   "m_sGuildName"
//   "m_nLv"
//   "m_nHRLv"
//   "m_sStarlv"
//   "m_nHours"
//   "m_nMinutes"
//   "m_nSeconds"
//   "m_bIsOnline"
//   "m_nWorldSvrID"

/* [RE-AUTO c0]
   strings:
     ""chatArray""
     ""CHATMESS_CLASS_NAME""
     ""m_nSrcId""
     ""m_nSrcDBId""
     ""m_sSrcName""
     ""m_sMsg""
     ""m_bSrcSelf""
     ""m_nLineID""
     ""m_nVip""
     ""m_bVipCanUse"" */

void FUN_109afd60(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_EDI;
  int *piStack_80;
  char *pcStack_7c;
  undefined4 *puStack_78;
  uint uStack_74;
  int *piStack_70;
  char *pcStack_6c;
  int *piStack_68;
  uint uStack_64;
  undefined1 auStack_58 [4];
  uint uStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_20 [7];
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) {
    uStack_64 = 0x109afd9c;
    iVar2 = (**(code **)(*piVar4 + 0xb4))();
    if (iVar2 != 0) {
      aiStack_20[0] = 0;
      aiStack_20[1] = 0;
      uStack_64 = (uint)(((byte)DAT_123bd3f4 & 0x8f) == 10);
      piStack_68 = aiStack_20;
      pcStack_6c = "chatArray";
      piStack_70 = DAT_123bd3f8;
      uStack_74 = 0x109afde7;
      (**(code **)(*DAT_123bd3f0 + 0x10))();
      puStack_78 = &uStack_48;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_64 = CONCAT31(uStack_64._1_3_,((byte)DAT_123bd3f4 & 0x8f) == 10);
      uStack_74 = uStack_64;
      pcStack_7c = "CHATMESS_CLASS_NAME";
      piStack_80 = DAT_123bd3f8;
      cVar1 = (**(code **)(*DAT_123bd3f0 + 0x10))();
      piVar4 = (int *)0x0;
      if (((cVar1 != '\0') && (((byte)uStack_54 & 0x8f) == 6)) &&
         (piVar4 = piStack_50, (uStack_54 >> 6 & 1) != 0)) {
        piVar4 = (int *)*piStack_50;
      }
      piStack_70 = (int *)0x0;
      pcStack_6c = (char *)0x0;
      FUN_11a98de0(&piStack_70,piVar4,0,0);
      FUN_104d1550("m_nSrcId",*param_2);
      FUN_104d14d0("m_nSrcDBId");
      FUN_104d1670("m_sSrcName",param_2 + 4);
      FUN_104d1670("m_sMsg",param_2 + 0xc);
      FUN_104d15e0("m_bSrcSelf",*(undefined1 *)(param_2 + 0x8c));
      FUN_104d1550("m_nLineID",param_2[0x8d]);
      FUN_104d1550("m_nVip",param_2[0x8e]);
      FUN_104d15e0("m_bVipCanUse",*(undefined1 *)(param_2 + 0x90));
      FUN_104d1670("m_sGuildName",(int)param_2 + 0x241);
      FUN_104d1550("m_nLv",param_2[0x99]);
      FUN_104d1550("m_nHRLv",param_2[0x9a]);
      FUN_104d1670("m_sStarlv",param_2 + 0x9b);
      FUN_104d1550("m_nHours",param_2[0xa1]);
      FUN_104d1550("m_nMinutes",param_2[0xa2]);
      FUN_104d1550("m_nSeconds",param_2[0xa3]);
      FUN_104d15e0("m_bIsOnline",*(undefined1 *)(param_2 + 0xa4));
      iVar3 = param_2[0x8f];
      if (iVar3 == *(int *)(iVar2 + 0x2d78)) {
        iVar3 = 0;
      }
      FUN_104d1550("m_nWorldSvrID",iVar3);
      if (((byte)uStack_4c & 0x8f) != 1) {
        (**(code **)(*piStack_50 + 0x3c))(uStack_48,&piStack_80);
        (**(code **)(*DAT_123bd3f0 + 0x14))
                  (DAT_123bd3f8,"chatArray",auStack_58,((byte)DAT_123bd3f4 & 0x8f) == 10);
      }
      if (((uint)pcStack_7c >> 6 & 1) != 0) {
        (**(code **)(*piStack_80 + 8))(&piStack_80,puStack_78);
        piStack_80 = (int *)0x0;
      }
      pcStack_7c = (char *)0x0;
      if ((uStack_64 >> 6 & 1) != 0) {
        (**(code **)(*piStack_68 + 8))(&piStack_68,unaff_EDI);
        piStack_68 = (int *)0x0;
      }
      uStack_64 = 0;
      if ((uStack_4c >> 6 & 1) != 0) {
        (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
      }
    }
  }
  return;
}



/* ===== FUN_109b87d0 @ 109b87d0  size=513 ===== */
// strings:
//   "InitModel"
//   "GetPopChatString"
//   "GetPopChatUpdateIndex"
//   "GetFillThreadId"
//   "GetProcessThreadId"
//   "GetFrameId"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""GetPopChatString""
     ""GetPopChatUpdateIndex""
     ""GetFillThreadId""
     ""GetProcessThreadId""
     ""GetFrameId"" */

void __fastcall FUN_109b87d0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
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
  pppuStack_30 = (undefined4 ***)0x11dbd57c;
  pppuStack_34 = (undefined4 ***)0x109b8804;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)FUN_109b89f0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109b8815;
  FUN_109b9340();
  if (((undefined4 ****)pppcStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppcStack_20 != (undefined4 ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109b882b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppuStack_34;
  pppcStack_3c = (code ***)0x11de2570;
  pppcStack_40 = (code ***)0x11de2560;
  pppcStack_44 = (code ***)0x109b884b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109b8a50;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppuStack_4c = (undefined4 ***)0x109b885c;
  FUN_109b9340();
  if (((code ****)pppuStack_30 != &pppcStack_44) && ((code ****)pppuStack_30 != (code ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    pppcStack_50 = (code ***)0x109b8872;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppcStack_44;
  pppuStack_4c = (undefined4 ***)0x11de2589;
  pppcStack_50 = (code ***)0x11de2574;
  pppcStack_54 = (code ***)0x109b8892;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)&LAB_109b8fb0;
  pppcStack_58 = (code ***)&pppuStack_4c;
  pppcStack_5c = (code ***)0x109b88a3;
  FUN_109b9340();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109b88b9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de259b;
  ppcStack_60 = (code **)0x11de258c;
  ppcStack_64 = (code **)0x109b88d9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_109b9190;
  pppuStack_68 = &pppcStack_5c;
  pppcStack_6c = (code ***)0x109b88ea;
  FUN_109b9340();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109b8900;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11de25ae;
  ppcStack_70 = (code **)0x11de259c;
  pcStack_74 = (code *)0x109b8920;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109b9110;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x109b8931;
  FUN_109b9340();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x109b8947;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11de261a;
  pcStack_80 = "GetFrameId";
  pcStack_84 = (code *)0x109b8967;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109b9210;
  FUN_109b9340(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109b9bc0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109b8b70 @ 109b8b70  size=929 ===== */
// strings:
//   "POP_CHAT_DATA_CLASSNAME"
//   "strTXT"
//   "strChatBg"
//   "nPlayerId"
//   "bUpdateIcon"
//   "nWidth"
//   "nHeight"
//   "m_PopChatArray01"
//   "m_PopChatArray02"

/* [RE-AUTO c0]
   strings:
     ""POP_CHAT_DATA_CLASSNAME""
     ""strTXT""
     ""strChatBg""
     ""nPlayerId""
     ""bUpdateIcon""
     ""nWidth""
     ""nHeight""
     ""m_PopChatArray01""
     ""m_PopChatArray02"" */

void __thiscall FUN_109b8b70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int *local_78;
  int *local_74;
  undefined4 uStack_70;
  int *local_60;
  uint local_5c;
  undefined4 *local_58;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  int *local_30;
  uint local_2c;
  undefined4 local_28;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  local_60 = (int *)0x0;
  local_5c = 0;
  local_c = (undefined4 *)0x0;
  local_10 = CONCAT31(local_10._1_3_,((byte)DAT_123bd424 & 0x8f) == 10);
  local_14 = param_1;
  cVar3 = (**(code **)(*DAT_123bd420 + 0x10))
                    (DAT_123bd428,"POP_CHAT_DATA_CLASSNAME",&local_60,local_10);
  if (((cVar3 != '\0') && (((byte)local_5c & 0x8f) == 6)) &&
     (local_c = local_58, (local_5c >> 6 & 1) != 0)) {
    local_c = (undefined4 *)*local_58;
  }
  if ((param_2 == 0) ||
     (((uVar4 = DAT_123bd424 & 0x8f, uVar4 != 8 && (uVar4 != 9)) && (uVar4 != 10))))
  goto LAB_109b8eef;
  piVar1 = (int *)(param_1 + 0x38);
  if (*piVar1 != *(int *)(param_1 + 0x3c)) {
    uVar5 = FUN_109b9c80(*piVar1);
    FUN_109b9f50();
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
  }
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x10) != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x370))(piVar1);
  }
  iVar8 = *(int *)(param_1 + 0x3c) - *piVar1;
  iVar2 = iVar8 >> 0x1f;
  if (iVar8 / 0xc + iVar2 != iVar2) {
    (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x120))();
    local_48 = (int *)0x0;
    local_44 = 0;
    FUN_11a98a70(&local_48);
    iVar8 = *(int *)(param_1 + 0x3c) - *piVar1;
    iVar2 = iVar8 >> 0x1f;
    if (iVar8 / 0xc + iVar2 != iVar2) {
      local_10 = 0;
      uVar4 = 0;
      do {
        local_30 = (int *)0x0;
        local_2c = 0;
        FUN_11a98de0(&local_30,local_c,0,0);
        uVar6 = FUN_10c3f250();
        FUN_104d1700("strTXT",*(undefined4 *)(local_10 + 4 + *piVar1));
        FUN_104d1550("strChatBg",*(undefined4 *)(*piVar1 + 8));
        FUN_104d1440("nPlayerId",uVar6 >> 0x1e);
        FUN_104d15e0("bUpdateIcon",1);
        FUN_104d1550("nWidth",0xffffffff);
        FUN_104d1550("nHeight",0xffffffff);
        (**(code **)(*local_48 + 0x3c))(local_40,&local_30);
        if ((local_2c >> 6 & 1) != 0) {
          (**(code **)(*local_30 + 8))(&local_30,local_28);
        }
        uVar4 = uVar4 + 1;
        local_10 = local_10 + 0xc;
      } while (uVar4 < (uint)((*(int *)(param_1 + 0x3c) - *piVar1) / 0xc));
    }
    if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x10) != (int *)0x0)) {
      piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x608))();
      if (piVar7 == (int *)0x0) {
        local_78 = piVar7;
        local_74 = piVar7;
        cVar3 = (**(code **)(*DAT_123bd420 + 0x10))
                          (DAT_123bd428,"m_PopChatArray01",&local_78,
                           ((byte)DAT_123bd424 & 0x8f) == 10);
        if ((cVar3 != '\0') && (((byte)local_74 & 0x8f) == 9)) {
          (**(code **)(*local_78 + 0x2c))(uStack_70,0);
        }
        pcVar9 = "m_PopChatArray01";
      }
      else {
        if (piVar7 != (int *)0x1) goto LAB_109b8eab;
        local_78 = (int *)0x0;
        local_74 = (int *)0x0;
        cVar3 = (**(code **)(*DAT_123bd420 + 0x10))
                          (DAT_123bd428,"m_PopChatArray02",&local_78,
                           ((byte)DAT_123bd424 & 0x8f) == 10);
        if ((cVar3 != '\0') && (((byte)local_74 & 0x8f) == 9)) {
          (**(code **)(*local_78 + 0x2c))(uStack_70,0);
        }
        pcVar9 = "m_PopChatArray02";
      }
      FUN_104d12b0(pcVar9,&local_48);
      FUN_104d7c10();
    }
LAB_109b8eab:
    (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x124))();
    if ((local_44 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 8))(&local_48,local_40);
    }
  }
  *(int *)(local_14 + 0x28) = (*(int *)(param_1 + 0x3c) - *piVar1) / 0xc;
LAB_109b8eef:
  if ((local_5c >> 6 & 1) != 0) {
    (**(code **)(*local_60 + 8))(&local_60,local_58);
  }
  return;
}



/* ===== FUN_109deac0 @ 109deac0  size=994 ===== */
// calls: CMHLevelSystem::GetCurrentContext, CPlayer::GetHuntRankOrCount, CPet::SetName
// strings:
//   "redBound"
//   "blueBound"
//   "playerDamage"
//   "damagePercentage"
//   "useTime"
//   "playerScore"
//   "accumulateScore"
//   "damageScore"
//   "withOutInjuryScore"
//   "isRedFaction"
//   "speedScore"
//   "charLevel"
//   "charName"
//   "winScore"

/* [RE-AUTO c0]
   strings:
     ""redBound""
     ""blueBound""
     ""playerDamage""
     ""damagePercentage""
     ""useTime""
     ""playerScore""
     ""accumulateScore""
     ""damageScore""
     ""withOutInjuryScore""
     ""isRedFaction"" */

void __thiscall FUN_109deac0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 *in_stack_00000010;
  int iVar5;
  undefined4 uStack_84;
  int local_80;
  int *local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int iStack_5c;
  int *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint *puStack_3c;
  uint *apuStack_38 [3];
  undefined1 auStack_2c [8];
  uint **ppuStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_84;
  local_54 = in_stack_00000010[1];
  local_4c = in_stack_00000010[3];
  local_50 = in_stack_00000010[2];
  local_48 = in_stack_00000010[4];
  local_58 = (int *)0x0;
  local_80 = param_1;
  if ((local_54 >> 6 & 1) != 0) {
    local_58 = (int *)*in_stack_00000010;
    (**(code **)(*local_58 + 4))(&local_58,local_50);
  }
  local_74 = in_stack_00000010[7];
  local_6c = in_stack_00000010[9];
  local_70 = in_stack_00000010[8];
  local_68 = in_stack_00000010[10];
  local_78 = (int *)0x0;
  if ((local_74 >> 6 & 1) != 0) {
    local_78 = (int *)in_stack_00000010[6];
    (**(code **)(*local_78 + 4))(&local_78,local_70);
  }
  if (((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) ||
      ((piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))(), piVar1 == (int *)0x0 ||
       (*(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0xb4) == 0)))) ||
     (iStack_5c = FUN_114584c0(piVar1[1]), iStack_5c == 0)) goto LAB_109dee41;
  iVar2 = FUN_1025b060();
  FUN_104d1550("redBound",*(undefined4 *)(local_80 + 0x20));
  FUN_104d1550("blueBound",*(undefined4 *)(local_80 + 0x24));
  iVar5 = 1;
  uVar3 = FUN_114549f0();
  FUN_104d1550("playerDamage",uVar3);
  FUN_104d1550("damagePercentage",*(undefined4 *)(uStack_84 + 0x38));
  uVar3 = FUN_114549f0(4);
  FUN_104d1550("useTime",uVar3);
  FUN_104d1550("playerScore",*(undefined4 *)(unaff_EBX + 0x28));
  FUN_104d1550("accumulateScore",*(int *)(unaff_EBX + 0x28) + iVar2);
  FUN_104d1550("damageScore",*(undefined4 *)(unaff_EBX + 0x30));
  FUN_104d1550("withOutInjuryScore",*(undefined4 *)(unaff_EBX + 0x34));
  if (*(int *)(unaff_EBX + 0x20) == *(int *)(unaff_EBX + 0x24)) {
LAB_109ded32:
    iVar2 = *(int *)(unaff_EBX + 0x2c);
  }
  else {
    uStack_84 = CONCAT13(*(int *)(unaff_EBX + 0x24) <= *(int *)(unaff_EBX + 0x20),
                         (undefined3)uStack_84);
    iVar2 = (**(code **)(*piVar1 + 0x44))();
    FUN_104d15e0("isRedFaction",iVar2 == 1);
    if ((bool)uStack_84._3_1_ != (iVar2 == 1)) goto LAB_109ded32;
    iVar2 = CMHLevelSystem__GetCurrentContext();
    iVar2 = *(int *)(iVar2 + 0xd4);
    iVar4 = CMHLevelSystem__GetCurrentContext();
    iVar2 = *(int *)(unaff_EBX + 0x2c) - (*(int *)(iVar4 + 200) * iVar2) / 100;
  }
  FUN_104d1550("speedScore",iVar2);
  uVar3 = CPlayer__GetHuntRankOrCount();
  FUN_104d1550("charLevel",uVar3);
  iVar2 = FUN_109df730(auStack_2c);
  CPet__SetName(*(undefined4 *)(iVar2 + 0x14));
  puStack_3c = &local_4c;
  local_4c = local_4c & 0xffffff00;
  apuStack_38[0] = puStack_3c;
  FUN_100e5aa0(puStack_3c);
  FUN_104d1670("charName",puStack_3c);
  if ((puStack_3c != &local_50) && (puStack_3c != (uint *)0x0)) {
    FUN_10c3d5d0(puStack_3c);
  }
  if (iVar5 != 0) {
    FUN_10c3da30(iVar5);
  }
  if ((ppuStack_24 != apuStack_38) && (ppuStack_24 != (uint **)0x0)) {
    FUN_10c3d5d0(ppuStack_24);
  }
  iVar2 = CMHLevelSystem__GetCurrentContext();
  iVar2 = *(int *)(iVar2 + 0xd4);
  iVar5 = CMHLevelSystem__GetCurrentContext();
  FUN_104d1550("winScore",(*(int *)(iVar5 + 200) * iVar2) / 100);
LAB_109dee41:
  if ((local_74 >> 6 & 1) != 0) {
    (**(code **)(*local_78 + 8))(&local_78,local_70);
    local_78 = (int *)0x0;
  }
  local_74 = 0;
  if ((local_54 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 8))(&local_58,local_50);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e0950 @ 109e0950  size=2687 ===== */
// strings:
//   "GUILDER_INFO_DATA_NAME"
//   "GUILDER_ACTIVITY_TASK_DATA_NAME"
//   "nGuildScoreInWeek"
//   "nPlayerScoreTotal"
//   "nPlayerActivityInToday"
//   "nPlayerActivityMax"
//   "nGuildActivityInToday"
//   "nGuildActivityMax"
//   "taskId"
//   "nStar"
//   "strNameTask"
//   "nCountTask"
//   "nTotalCountTask"
//   "nScoreTask"
//   "nStatus"
//   "taskA"
//   "taskB"
//   "taskC"
//   "taskD"
//   "taskS"

/* [RE-AUTO c0]
   strings:
     ""GUILDER_INFO_DATA_NAME""
     ""GUILDER_ACTIVITY_TASK_DATA_NAME""
     ""nGuildScoreInWeek""
     ""nPlayerScoreTotal""
     ""nPlayerActivityInToday""
     ""nPlayerActivityMax""
     ""nGuildActivityInToday""
     ""nGuildActivityMax""
     ""taskId""
     ""nStar"" */

void __thiscall FUN_109e0950(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  undefined1 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uVar6;
  char *pcVar7;
  char *pcStack_17c;
  char *pcStack_178;
  undefined4 **ppuStack_174;
  undefined1 **ppuStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  undefined4 **ppuStack_164;
  undefined4 ***pppuStack_160;
  undefined4 **ppuStack_15c;
  undefined4 **ppuStack_158;
  undefined4 uStack_154;
  char *pcStack_150;
  undefined4 **ppuStack_14c;
  undefined4 **ppuStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  char *pcStack_134;
  undefined4 ***pppuStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined1 *local_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined1 uStack_f9;
  int *piStack_f8;
  int aiStack_f4 [3];
  undefined4 *apuStack_e8 [2];
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [4];
  undefined1 *puStack_94;
  undefined1 auStack_8c [4];
  undefined4 *apuStack_88 [3];
  undefined4 *puStack_7c;
  undefined1 *puStack_78;
  uint uStack_74;
  undefined4 *puStack_70;
  undefined1 auStack_6c [4];
  undefined4 **ppuStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_58;
  uint uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_10c;
  local_10c = in_stack_00000010;
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    puStack_11c = (undefined4 *)in_stack_00000018[2];
    puStack_120 = in_stack_00000018;
    piStack_124 = (int *)0x109e0991;
    (**(code **)(*(int *)*in_stack_00000018 + 8))();
    *in_stack_00000018 = 0;
  }
  in_stack_00000018[1] = 2;
  *(undefined1 *)(in_stack_00000018 + 2) = 0;
  if (in_stack_00000014 == 1) {
    if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
       (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 == (int *)0x0))
    goto LAB_109e13b8;
    puStack_11c = (undefined4 *)0x109e09dd;
    iVar2 = (**(code **)(*piVar5 + 0xb4))();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2abc) == 0)) goto LAB_109e13b8;
    puStack_11c = (undefined4 *)0x109e09fa;
    iVar3 = FUN_111743b0();
    if (iVar3 == 0) goto LAB_109e13b8;
    puStack_11c = (undefined4 *)0x109e0a09;
    aiStack_f4[0] = FUN_11399020();
    if (aiStack_f4[0] == 0) goto LAB_109e13b8;
    puStack_11c = (undefined4 *)0x109e0a1c;
    iStack_100 = FUN_11398f30();
    if ((iStack_100 == 0) || (piVar5 = *(int **)(iVar2 + 0x2ab0), piVar5 == (int *)0x0))
    goto LAB_109e13b8;
    puStack_11c = (undefined4 *)0x109e0a3b;
    uStack_74 = FUN_1145b350();
    if (uStack_74 == 0) goto LAB_109e13b8;
    puStack_11c = (undefined4 *)local_10c;
    puStack_120 = (undefined4 *)0x109e0a56;
    FUN_104f42b0();
    if ((((((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) == 1) &&
         (uVar4 = *(uint *)(param_1 + 0x2c) & 0x8f, uVar4 != 8)) && (uVar4 != 9)) && (uVar4 != 10))
    goto LAB_109e13b8;
    puStack_120 = &uStack_40;
    uStack_40 = 0;
    uStack_3c = 0;
    puStack_108 = (undefined4 *)
                  CONCAT31(puStack_108._1_3_,((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) == 10);
    local_10c = (undefined1 *)0x0;
    puStack_11c = puStack_108;
    piStack_124 = (int *)0x11de478c;
    puStack_128 = *(undefined4 **)(param_1 + 0x30);
    uStack_12c = 0x109e0ac9;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    if (((cVar1 != '\0') && (((byte)uStack_4c & 0x8f) == 6)) &&
       (puStack_11c = puStack_48, (uStack_4c >> 6 & 1) != 0)) {
      puStack_11c = (undefined4 *)*puStack_48;
    }
    pppuStack_130 = &ppuStack_68;
    ppuStack_68 = (undefined4 **)0x0;
    uStack_64 = 0;
    uStack_12c = CONCAT31((int3)((uint)unaff_ESI >> 8),
                          ((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) == 10);
    pcStack_134 = "GUILDER_ACTIVITY_TASK_DATA_NAME";
    uStack_138 = *(undefined4 *)(param_1 + 0x30);
    uStack_13c = 0x109e0b3f;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    if (((cVar1 != '\0') && (((byte)uStack_74 & 0x8f) == 6)) &&
       (puStack_128 = puStack_70, (uStack_74 >> 6 & 1) != 0)) {
      puStack_128 = (undefined4 *)*puStack_70;
    }
    uStack_13c = 0;
    uStack_140 = 0;
    uStack_144 = uStack_12c;
    ppuStack_148 = (undefined4 **)&stack0xfffffef0;
    local_10c = (undefined1 *)0x0;
    ppuStack_14c = (undefined4 **)0x109e0b8e;
    FUN_11a98de0();
    ppuStack_14c = pppuStack_130[0x70];
    pcStack_150 = "nGuildScoreInWeek";
    uStack_154 = 0x109e0ba8;
    FUN_104d1550();
    ppuStack_14c = (undefined4 **)0x109e0bb4;
    ppuStack_14c = (undefined4 **)(**(code **)(*piStack_124 + 0x18))();
    pcStack_150 = "nPlayerScoreTotal";
    uStack_154 = 0x109e0bc5;
    FUN_104d1550();
    ppuStack_14c = (undefined4 **)0x109e0bd1;
    ppuStack_14c = (undefined4 **)(**(code **)(*piStack_124 + 0x34))();
    pcStack_150 = "nPlayerActivityInToday";
    uStack_154 = 0x109e0be2;
    FUN_104d1550();
    uStack_154 = 1;
    ppuStack_158 = (undefined4 **)0x11de4778;
    ppuStack_15c = (undefined4 **)0x109e0bf4;
    FUN_104d1550();
    ppuStack_15c = pppuStack_130[0x75];
    pppuStack_160 = (undefined4 ***)0x11de4760;
    ppuStack_164 = (undefined4 **)0x109e0c0e;
    FUN_104d1550();
    ppuStack_164 = (undefined4 **)0x109e0c13;
    iVar2 = FUN_117d8be0();
    ppuStack_164 = *(undefined4 ***)(iVar2 + 0x9c);
    pcStack_168 = "nGuildActivityMax";
    pcStack_16c = (char *)0x109e0c29;
    FUN_104d1550();
    puStack_108 = (undefined4 *)0x0;
    ppuStack_158 = &puStack_108;
    uStack_104 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    ppuStack_14c = (undefined4 **)0x0;
    pcStack_150 = (char *)0x0;
    uStack_154 = uStack_138;
    aiStack_f4[1] = 0;
    aiStack_f4[2] = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    ppuStack_15c = (undefined4 **)0x109e0ca2;
    FUN_11a98de0();
    ppuStack_15c = (undefined4 **)0x109e0ca7;
    iVar2 = FUN_117d8be0();
    ppuStack_15c = *(undefined4 ***)(iVar2 + 0x30);
    pppuStack_160 = (undefined4 ***)0x109e0cb4;
    ppuStack_14c = ppuStack_15c;
    iVar2 = FUN_104d8d20();
    if (iVar2 != 0) {
      ppuStack_15c = ppuStack_14c;
      pppuStack_160 = (undefined4 ***)0x109e0cca;
      ppuStack_148 = (undefined4 **)(**(code **)(*piVar5 + 0x50))();
      pppuStack_160 = (undefined4 ***)pcStack_150;
      ppuStack_164 = (undefined4 **)0x11de3e88;
      pcStack_168 = (char *)0x109e0ce2;
      FUN_104d1550();
      pcStack_168 = (char *)0x1;
      pcStack_16c = "nStar";
      ppuStack_170 = (undefined1 **)0x109e0cf4;
      FUN_104d1550();
      pppuStack_160 = &ppuStack_68;
      ppuStack_164 = (undefined4 **)0x109e0d04;
      FUN_117d8be0();
      ppuStack_164 = (undefined4 **)0x109e0d0b;
      iVar2 = FUN_109df890();
      ppuStack_164 = *(undefined4 ***)(iVar2 + 0x14);
      pcStack_168 = "strNameTask";
      pcStack_16c = (char *)0x109e0d1e;
      FUN_104d1670();
      if ((puStack_58 != auStack_6c) && (puStack_58 != (undefined1 *)0x0)) {
        ppuStack_164 = (undefined4 **)puStack_58;
        pcStack_168 = (char *)0x109e0d3d;
        FUN_10c3d5d0();
      }
      ppuStack_164 = (undefined4 **)ppuStack_148[0x71];
      pcStack_168 = "nCountTask";
      pcStack_16c = (char *)0x109e0d5a;
      FUN_104d1550();
      pcStack_16c = (char *)0x109e0d5f;
      iVar2 = FUN_117d8be0();
      pcStack_16c = *(char **)(iVar2 + 0x40);
      ppuStack_170 = (undefined1 **)0x11de4718;
      ppuStack_174 = (undefined4 **)0x109e0d72;
      FUN_104d1550();
      ppuStack_174 = (undefined4 **)0x109e0d77;
      iVar2 = FUN_117d8be0();
      ppuStack_174 = *(undefined4 ***)(iVar2 + 0x50);
      pcStack_178 = "nScoreTask";
      pcStack_17c = (char *)0x109e0d8a;
      FUN_104d1550();
      if (ppuStack_14c == (undefined4 **)0x0) {
        ppuStack_164 = (undefined4 **)uStack_154;
        pcStack_168 = (char *)0x109e0da5;
        cVar1 = (**(code **)(*piVar5 + 0x60))();
        if (cVar1 == '\0') {
          ppuStack_164 = (undefined4 **)0xffffffff;
        }
        else {
          ppuStack_164 = (undefined4 **)0x4;
        }
      }
      else {
        ppuStack_164 = (undefined4 **)0x1;
      }
      pcStack_168 = "nStatus";
      pcStack_16c = (char *)0x109e0dbf;
      FUN_104d1550();
      ppuStack_164 = &puStack_120;
      pcStack_168 = "taskA";
      pcStack_16c = (char *)0x109e0dd5;
      FUN_104d12b0();
    }
    ppuStack_15c = (undefined4 **)0x0;
    pppuStack_160 = (undefined4 ***)0x0;
    ppuStack_164 = ppuStack_148;
    pcStack_168 = auStack_d0;
    pcStack_16c = (char *)0x109e0def;
    FUN_11a98de0();
    pcStack_16c = (char *)0x109e0df4;
    iVar2 = FUN_117d8be0();
    pcStack_16c = *(char **)(iVar2 + 0x34);
    ppuStack_170 = (undefined1 **)0x109e0e01;
    ppuStack_15c = (undefined4 **)pcStack_16c;
    iVar2 = FUN_104d8d20();
    if (iVar2 != 0) {
      pcStack_16c = (char *)ppuStack_15c;
      ppuStack_170 = (undefined1 **)0x109e0e17;
      ppuStack_158 = (undefined4 **)(**(code **)(*piVar5 + 0x50))();
      ppuStack_170 = (undefined1 **)pppuStack_160;
      ppuStack_174 = (undefined4 **)0x11de3e88;
      pcStack_178 = (char *)0x109e0e32;
      FUN_104d1550();
      pcStack_178 = (char *)0x2;
      pcStack_17c = "nStar";
      FUN_104d1550();
      ppuStack_170 = &puStack_78;
      ppuStack_174 = (undefined4 **)0x109e0e57;
      FUN_117d8be0();
      ppuStack_174 = (undefined4 **)0x109e0e5e;
      iVar2 = FUN_109df8c0();
      ppuStack_174 = *(undefined4 ***)(iVar2 + 0x14);
      pcStack_178 = "strNameTask";
      pcStack_17c = (char *)0x109e0e74;
      FUN_104d1670();
      if ((ppuStack_68 != &puStack_7c) && (ppuStack_68 != (undefined4 **)0x0)) {
        ppuStack_174 = ppuStack_68;
        pcStack_178 = (char *)0x109e0e93;
        FUN_10c3d5d0();
      }
      ppuStack_174 = (undefined4 **)ppuStack_158[0x72];
      pcStack_178 = "nCountTask";
      pcStack_17c = (char *)0x109e0eb3;
      FUN_104d1550();
      pcStack_17c = (char *)0x109e0eb8;
      iVar2 = FUN_117d8be0();
      pcStack_17c = *(char **)(iVar2 + 0x44);
      FUN_104d1550("nTotalCountTask");
      iVar2 = FUN_117d8be0();
      FUN_104d1550("nScoreTask",*(undefined4 *)(iVar2 + 0x54));
      if (ppuStack_15c == (undefined4 **)0x0) {
        ppuStack_174 = ppuStack_164;
        pcStack_178 = (char *)0x109e0f04;
        cVar1 = (**(code **)(*piVar5 + 0x60))();
        if (cVar1 == '\0') {
          ppuStack_174 = (undefined4 **)0xffffffff;
        }
        else {
          ppuStack_174 = (undefined4 **)0x4;
        }
      }
      else {
        ppuStack_174 = (undefined4 **)0x1;
      }
      pcStack_178 = "nStatus";
      pcStack_17c = (char *)0x109e0f21;
      FUN_104d1550();
      ppuStack_174 = apuStack_e8;
      pcStack_178 = "taskB";
      pcStack_17c = (char *)0x109e0f3a;
      FUN_104d12b0();
    }
    pcStack_16c = (char *)0x0;
    ppuStack_170 = (undefined1 **)0x0;
    ppuStack_174 = ppuStack_158;
    pcStack_178 = &stack0xfffffef0;
    pcStack_17c = (char *)0x109e0f51;
    FUN_11a98de0();
    pcStack_17c = (char *)0x109e0f56;
    iVar2 = FUN_117d8be0();
    pcStack_17c = *(char **)(iVar2 + 0x38);
    pcStack_16c = pcStack_17c;
    iVar2 = FUN_104d8d20();
    if (iVar2 != 0) {
      pcStack_17c = pcStack_16c;
      pcStack_168 = (char *)(**(code **)(*piVar5 + 0x50))();
      FUN_104d1550("taskId",ppuStack_170);
      FUN_104d1550("nStar",3);
      FUN_117d8be0(apuStack_88);
      iVar2 = FUN_109df8f0();
      FUN_104d1670("strNameTask",*(undefined4 *)(iVar2 + 0x14));
      if ((puStack_78 != auStack_8c) && (puStack_78 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_78);
      }
      FUN_104d1550("nCountTask",*(undefined4 *)(pcStack_168 + 0x1cc));
      iVar2 = FUN_117d8be0();
      FUN_104d1550("nTotalCountTask",*(undefined4 *)(iVar2 + 0x48));
      iVar2 = FUN_117d8be0();
      FUN_104d1550("nScoreTask",*(undefined4 *)(iVar2 + 0x58));
      if (pcStack_16c == (char *)0x0) {
        cVar1 = (**(code **)(*piVar5 + 0x60))(ppuStack_174);
        if (cVar1 == '\0') {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 4;
        }
      }
      else {
        uVar6 = 1;
      }
      FUN_104d1550("nStatus",uVar6);
      FUN_104d12b0("taskC",&puStack_128);
    }
    pcStack_17c = (char *)0x0;
    uVar6 = 0;
    pcVar7 = pcStack_168;
    FUN_11a98de0(&puStack_108,pcStack_168,0);
    iVar2 = FUN_117d8be0();
    pcStack_17c = *(char **)(iVar2 + 0x3c);
    iVar2 = FUN_104d8d20(pcStack_17c);
    if (iVar2 != 0) {
      pcStack_178 = (char *)(**(code **)(*piVar5 + 0x50))(pcStack_17c);
      FUN_104d1550("taskId",uVar6);
      FUN_104d1550("nStar",4);
      FUN_117d8be0(auStack_98);
      iVar2 = FUN_109df920();
      FUN_104d1670("strNameTask",*(undefined4 *)(iVar2 + 0x14));
      if ((apuStack_88[0] != &uStack_9c) && (apuStack_88[0] != (undefined4 *)0x0)) {
        FUN_10c3d5d0(apuStack_88[0]);
      }
      FUN_104d1550("nCountTask",*(undefined4 *)(pcStack_178 + 0x1d0));
      iVar2 = FUN_117d8be0();
      FUN_104d1550("nTotalCountTask",*(undefined4 *)(iVar2 + 0x4c));
      iVar2 = FUN_117d8be0();
      FUN_104d1550("nScoreTask",*(undefined4 *)(iVar2 + 0x5c));
      if (pcStack_17c == (char *)0x0) {
        cVar1 = (**(code **)(*piVar5 + 0x60))(pcVar7);
        if (cVar1 == '\0') {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 4;
        }
      }
      else {
        uVar6 = 1;
      }
      FUN_104d1550("nStatus",uVar6);
      FUN_104d12b0("taskD",&puStack_120);
    }
    pcStack_168 = (char *)0xffffffff;
    FUN_11a98de0(auStack_e0,pcStack_178,0,0);
    FUN_104d1550("taskId",99999);
    FUN_104d1550("nStar",0);
    FUN_117d8be0(auStack_a4);
    iVar2 = FUN_109df950();
    FUN_104d1670("strNameTask",*(undefined4 *)(iVar2 + 0x14));
    if ((puStack_94 != auStack_a8) && (puStack_94 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_94);
    }
    FUN_104d1550("nCountTask",0);
    FUN_104d1550("nTotalCountTask",0);
    FUN_104d1550("nScoreTask",0);
    cVar1 = FUN_114a93d0();
    if (((cVar1 == '\0') ||
        (cVar1 = (**(code **)(*piStack_f8 + 0x30))(0x494,2,&pcStack_17c), cVar1 == '\0')) ||
       ((int)pcStack_17c < 1)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    FUN_104d1550("nStatus",uVar6);
    FUN_104d12b0("taskS",aiStack_f4);
    FUN_104d12b0("guildInfoData",&ppuStack_174);
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
    FUN_104d7c10();
  }
  puStack_11c = (undefined4 *)0x109e1387;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    puStack_11c = (undefined4 *)0x109e1390;
    FUN_10d17440();
    puStack_11c = (undefined4 *)0x109e1397;
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      puStack_11c = (undefined4 *)0x109e13a0;
      FUN_10d17440();
      puStack_11c = (undefined4 *)0x109e13a7;
      piVar5 = (int *)FUN_10d17870();
      puStack_11c = (undefined4 *)&uStack_f9;
      puStack_120 = (undefined4 *)0x2a1;
      piStack_124 = (int *)0x109e13b8;
      (**(code **)(*piVar5 + 4))();
    }
  }
LAB_109e13b8:
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e13d0 @ 109e13d0  size=2025 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "GUILD_TASK_INFO_DATA_NAME"
//   "strName"
//   "taskId"
//   "nMoneyType"
//   "nMoneyCount"
//   "nTaskAddition"
//   "strTarget"
//   "bShowAccept"
//   "bEnableAccept"
//   "bShowGiveUp"
//   "bEnableGiveUp"
//   "bShowFinish"
//   "bEnableFinish"
//   "nTaskState"
//   "guildTaskInfoData"

/* WARNING: Removing unreachable block (ram,0x109e1930) */
/* WARNING: Removing unreachable block (ram,0x109e194f) */
/* WARNING: Removing unreachable block (ram,0x109e1a89) */
/* WARNING: Removing unreachable block (ram,0x109e1b2d) */
/* WARNING: Removing unreachable block (ram,0x109e1a99) */
/* WARNING: Removing unreachable block (ram,0x109e1ae3) */
/* WARNING: Removing unreachable block (ram,0x109e1b35) */
/* WARNING: Removing unreachable block (ram,0x109e1ae8) */
/* WARNING: Removing unreachable block (ram,0x109e1ab1) */
/* WARNING: Removing unreachable block (ram,0x109e1b18) */
/* WARNING: Removing unreachable block (ram,0x109e195a) */
/* WARNING: Removing unreachable block (ram,0x109e1a49) */
/* WARNING: Removing unreachable block (ram,0x109e196a) */
/* WARNING: Removing unreachable block (ram,0x109e19f5) */
/* WARNING: Removing unreachable block (ram,0x109e1a51) */
/* WARNING: Removing unreachable block (ram,0x109e19fa) */
/* WARNING: Removing unreachable block (ram,0x109e1982) */
/* WARNING: Removing unreachable block (ram,0x109e199f) */
/* WARNING: Removing unreachable block (ram,0x109e19a8) */
/* WARNING: Removing unreachable block (ram,0x109e19ad) */
/* WARNING: Removing unreachable block (ram,0x109e199b) */
/* WARNING: Removing unreachable block (ram,0x109e19af) */
/* [RE-AUTO c0]
   strings:
     ""GUILD_TASK_INFO_DATA_NAME""
     ""strName""
     ""taskId""
     ""nMoneyType""
     ""nMoneyCount""
     ""nTaskAddition""
     ""strTarget""
     ""bShowAccept""
     ""bEnableAccept""
     ""bShowGiveUp"" */

void __thiscall FUN_109e13d0(uint param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  int *piStack_b8;
  int iStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  float afStack_98 [2];
  int *apiStack_90 [2];
  int iStack_88;
  undefined4 *local_78;
  int iStack_70;
  uint local_64;
  undefined4 *puStack_60;
  int iStack_5c;
  int aiStack_58 [3];
  undefined4 **ppuStack_4c;
  undefined1 auStack_44 [20];
  undefined1 *puStack_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_a4;
  local_64 = param_1;
  if (in_stack_00000014 == 2) {
    local_78 = (undefined4 *)(param_1 + 0x28);
    iStack_b4 = in_stack_00000010;
    piStack_b8 = (int *)0x109e1412;
    FUN_104f42b0();
    uVar3 = *(uint *)(in_stack_00000010 + 0x1c) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      iVar8 = *(int *)(in_stack_00000010 + 0x20);
    }
    else {
      iVar8 = -0x21524151;
    }
    piStack_b8 = (int *)0x109e1433;
    iStack_70 = FUN_1145b350();
    if ((((iStack_70 != 0) && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iStack_b4 = 0x109e1470;
      puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0xb4))();
      puStack_60 = puVar4;
      if ((puVar4 != (undefined4 *)0x0) && (puVar4[0xaaf] != 0)) {
        iStack_b4 = 0x109e1491;
        iVar5 = FUN_111743b0();
        if (iVar5 != 0) {
          iStack_b4 = 0x109e14a0;
          iVar5 = FUN_11399020();
          if (iVar5 != 0) {
            iStack_b4 = 0x109e14af;
            iStack_5c = FUN_11398f30();
            if (((iStack_5c != 0) && (puVar4[0xaac] != 0)) &&
               ((((byte)*(undefined4 *)(local_64 + 0x2c) & 0x8f) != 1 ||
                (((uVar3 = local_78[1] & 0x8f, uVar3 == 8 || (uVar3 == 9)) || (uVar3 == 10)))))) {
              aiStack_58[0] = 0;
              piStack_b8 = aiStack_58;
              aiStack_58[1] = 0;
              iStack_88 = CONCAT31(iStack_88._1_3_,((byte)local_78[1] & 0x8f) == 10);
              iStack_b4 = iStack_88;
              pcStack_bc = "GUILD_TASK_INFO_DATA_NAME";
              uStack_c0 = local_78[2];
              uStack_c4 = 0x109e1530;
              cVar2 = (**(code **)(*(int *)*local_78 + 0x10))();
              if ((cVar2 == '\0') || (((byte)local_64 & 0x8f) != 6)) {
                puStack_cc = (undefined4 *)0x0;
              }
              else {
                puStack_cc = puStack_60;
                if ((local_64 >> 6 & 1) != 0) {
                  puStack_cc = (undefined4 *)*puStack_60;
                }
              }
              uStack_c4 = 0;
              uStack_c8 = 0;
              FUN_11a98de0(&stack0xffffff50);
              iVar5 = FUN_104d8d20(iVar8);
              if (iVar5 != 0) {
                uStack_9c = *(undefined4 *)(iVar5 + 0x2c);
                iVar6 = FUN_100e5b40(&iStack_5c);
                FUN_104d1670("strName",*(undefined4 *)(iVar6 + 0x14));
                if ((ppuStack_4c != &puStack_60) && (ppuStack_4c != (undefined4 **)0x0)) {
                  FUN_10c3d5d0(ppuStack_4c);
                }
                FUN_104d1550("taskId",iVar8);
                iStack_a4 = FUN_10804940(iStack_a0 + 0x4c,0x18);
                if (iStack_a4 == 0) {
                  FUN_104d1550("nMoneyCount",0);
                }
                else {
                  apiStack_90[0] = (int *)0x0;
                  afStack_98[0] = 0.0;
                  uVar7 = CPlayer__GetHuntRankOrCount
                                    (*(undefined4 *)(iStack_a4 + 4),afStack_98,apiStack_90,0);
                  FUN_1185f2e0(uVar7);
                  if ((0.0 < afStack_98[0]) && (0 < *(int *)(iStack_a4 + 0xc))) {
                    FUN_104d1550("nMoneyType",0);
                    FUN_104d14d0("nMoneyCount");
                  }
                  if ((0.0 < (float)apiStack_90[0]) && (0 < *(int *)(iStack_a4 + 8))) {
                    FUN_104d1550("nMoneyType",0);
                    FUN_104d14d0("nMoneyCount");
                  }
                }
                iVar6 = FUN_109e22e0();
                if (iVar6 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(undefined4 *)(iVar6 + 4);
                }
                FUN_104d1550("nTaskAddition",uVar7);
              }
              if (iVar8 == 99999) {
                FUN_117d8be0(&iStack_5c);
                iVar6 = FUN_109df950();
                FUN_104d1670("strName",*(undefined4 *)(iVar6 + 0x14));
                if ((ppuStack_4c != &puStack_60) && (ppuStack_4c != (undefined4 **)0x0)) {
                  FUN_10c3d5d0(ppuStack_4c);
                }
                FUN_104d1550("taskId",99999);
              }
              iStack_5c = 0;
              aiStack_58[0] = 0;
              aiStack_58[1] = 0;
              FUN_107fa640();
              iVar6 = aiStack_58[0] - iStack_5c >> 0x1f;
              if (((aiStack_58[0] - iStack_5c) / 0xec + iVar6 != iVar6) && (iVar5 != 0)) {
                FUN_104d1550(&DAT_11de486c,*(undefined4 *)(iStack_5c + 0x18));
                FUN_104d1550(&DAT_11de4830,*(undefined4 *)(iStack_5c + 0x1c));
                iVar5 = FUN_100e5b40(auStack_44);
                FUN_104d1670("strTarget",*(undefined4 *)(iVar5 + 0x14));
                if ((puStack_30 != auStack_44) && (puStack_30 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_30);
                }
              }
              iStack_a4 = -1;
              FUN_104d15e0("bShowAccept",0);
              FUN_104d15e0("bEnableAccept",0);
              FUN_104d15e0("bShowGiveUp",0);
              FUN_104d15e0("bEnableGiveUp",0);
              FUN_104d15e0("bShowFinish",0);
              FUN_104d15e0("bEnableFinish",0);
              cVar2 = FUN_114a93d0();
              if ((cVar2 != '\0') && (iVar8 == 99999)) {
                (**(code **)(*apiStack_90[0] + 0x30))(0x494,2,&iStack_a4);
              }
              (**(code **)(*apiStack_90[0] + 0x30))(0x494,2,&iStack_a4);
              FUN_104d1550("nTaskState",iStack_b4);
              FUN_104d12b0("guildTaskInfoData",&puStack_cc);
              FUN_105ec140();
              FUN_104f9a70();
              FUN_104d7c10();
              FUN_104d7c10();
            }
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



