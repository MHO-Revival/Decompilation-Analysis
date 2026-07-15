/* ===== FUN_108cce00 @ 108cce00  size=597 ===== */
// strings:
//   "_requestBuyBackItem"
//   "_requestBuyItem"
//   "_requestNpcSales"
//   "_requestSoldList"
//   "_requestSellItem"
//   "_requestGetBuyStackCounts"
//   "CurrentBindMoney"
//   "CurrentUnbindMoney"
//   "strPetShopTitle"

/* [RE-AUTO c0]
   strings:
     ""_requestBuyBackItem""
     ""_requestBuyItem""
     ""_requestNpcSales""
     ""_requestSoldList""
     ""_requestSellItem""
     ""_requestGetBuyStackCounts""
     ""CurrentBindMoney""
     ""CurrentUnbindMoney""
     ""strPetShopTitle"" */

void FUN_108cce00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte unaff_BL;
  int *unaff_ESI;
  undefined4 uStack_4c;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [8];
  int iStack_2c;
  int *local_28;
  uint local_24;
  undefined4 uStack_20;
  int **ppiStack_18;
  int **ppiStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_4c;
  local_44 = param_4[1];
  local_3c = param_4[3];
  local_40 = param_4[2];
  local_38 = param_4[4];
  local_48 = (int *)0x0;
  if ((local_44 >> 6 & 1) != 0) {
    local_48 = (int *)*param_4;
    (**(code **)(*local_48 + 4))(&local_48,local_40);
  }
  DAT_123bbab1 = param_5 == 2;
  if (param_2 != 0) {
    local_28 = (int *)0x0;
    local_24 = 0;
    FUN_11a98b50(&local_28,&PTR_PTR_1201fa00,&DAT_108cd060);
    (**(code **)(*unaff_ESI + 0x14))
              (uStack_4c,"_requestBuyBackItem",auStack_34,(unaff_BL & 0x8f) == 10);
    if ((local_24 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 8))(&local_28,uStack_20);
    }
  }
  FUN_104d13b0("_requestBuyItem",FUN_108cd070);
  FUN_104d13b0("_requestNpcSales",FUN_108cd400);
  FUN_104d13b0("_requestSoldList",FUN_108ce7d0);
  FUN_104d13b0("_requestSellItem",FUN_108cef10);
  FUN_104d13b0("_requestGetBuyStackCounts",FUN_108cfa10);
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar2 != 0) {
      uVar3 = FUN_1025b060();
      uVar4 = FUN_1025b060();
      FUN_119eb0b0(&iStack_2c,0x1f);
      FUN_104d1550("CurrentBindMoney",uVar4);
      FUN_104d1550("CurrentUnbindMoney",uVar3);
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      ppiStack_18 = &local_28;
      ppiStack_14 = ppiStack_18;
      FUN_100e5aa0(ppiStack_18);
      FUN_104d1670("strPetShopTitle",ppiStack_18);
      if ((ppiStack_14 != &local_28) && (ppiStack_14 != (int **)0x0)) {
        FUN_10c3d5d0(ppiStack_14);
      }
      if (iStack_2c != 0) {
        FUN_10c3da30(iStack_2c);
      }
    }
  }
  if ((local_44 >> 6 & 1) != 0) {
    (**(code **)(*local_48 + 8))(&local_48,local_40);
  }
  FUN_11a89daa();
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



/* ===== FUN_108f72f0 @ 108f72f0  size=1268 ===== */
// calls: CPet::SetName
// strings:
//   "LEVELENTRUST_MEMBERVO_CLASSNAME"
//   "netId"
//   "starLevel"
//   "weapon"
//   "state"
//   "selHuntPacket"
//   "bIsLeader"
//   "teammemberInfoArr"

/* [RE-AUTO c0]
   strings:
     ""LEVELENTRUST_MEMBERVO_CLASSNAME""
     ""netId""
     ""starLevel""
     ""weapon""
     ""state""
     ""selHuntPacket""
     ""bIsLeader""
     ""teammemberInfoArr"" */

void FUN_108f72f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int *piVar5;
  uint uVar6;
  int unaff_EDI;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 uStack_d0;
  undefined4 *puStack_bc;
  int *local_b8;
  uint uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 auStack_98 [4];
  uint auStack_94 [5];
  int *piStack_80;
  uint uStack_7c;
  int *piStack_78;
  uint uStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  byte abStack_54 [4];
  uint auStack_50 [3];
  int *piStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  undefined4 uStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&puStack_bc;
  local_a4 = param_2;
  local_b8 = param_4;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint **)uStack_d0);
  if (0 < param_5) {
    uStack_d0._4_4_ = (int *)0x108f733e;
    iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    piVar5 = (int *)0x0;
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
      uStack_d0._4_4_ = (int *)0x108f7368;
      piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))();
      if (piVar3 != (int *)0x0) {
        piVar5 = piVar3;
      }
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint **)uStack_d0);
    if (((iVar2 != 0) &&
        (uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint **)uStack_d0), piVar5 != (int *)0x0)) &&
       (uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint **)uStack_d0), piVar5[0xaaf] != 0)) {
      uStack_d0._4_4_ = (int *)0x108f739a;
      uStack_d0 = (**(code **)(*piVar5 + 0xc0))();
      piVar3 = (int *)FUN_114a0a10();
      piStack_44 = piVar3;
      if (piVar3 != (int *)0x0) {
        uStack_d0._4_4_ = local_b8;
        uStack_d0._0_4_ = (uint **)0x108f73c4;
        FUN_104f4330();
        puVar10 = &uStack_64;
        uStack_64 = 0;
        piStack_60 = (int *)0x0;
        puStack_bc = (undefined4 *)CONCAT31(puStack_bc._1_3_,((byte)puStack_40 & 0x8f) == 10);
        uStack_ac = 0;
        uStack_d0._0_4_ = (uint **)puStack_bc;
        cVar1 = (**(code **)(*piStack_44 + 0x10))
                          (puStack_3c,"LEVELENTRUST_MEMBERVO_CLASSNAME",puVar10);
        if (((cVar1 != '\0') && (((byte)uStack_70 & 0x8f) == 6)) &&
           (puStack_bc = puStack_6c, (uStack_70 >> 6 & 1) != 0)) {
          puStack_bc = (undefined4 *)*puStack_6c;
        }
        auStack_94[0] = 0;
        auStack_94[1] = 0;
        FUN_11a98a70(auStack_94);
        piVar5 = (int *)(**(code **)(*piVar5 + 0x3a4))();
        uStack_d0._0_4_ = (uint **)0x0;
        iVar2 = piVar3[0x14] - piVar3[0x13] >> 0x1f;
        uStack_d0._4_4_ = piVar5;
        if ((piVar3[0x14] - piVar3[0x13]) / 0x30 + iVar2 != iVar2) {
          do {
            piVar9 = (int *)0x0;
            local_b8 = (int *)0x0;
            uStack_b4 = 0;
            FUN_11a98de0(&local_b8,unaff_EBX,0);
            uStack_70 = piVar3[0x13] + (int)puVar10;
            uVar4 = FUN_1149e560();
            FUN_104d1550(&DAT_11dbb0b4,uVar4);
            uVar4 = FUN_1149e7b0();
            CPet__SetName(uVar4);
            puStack_40 = auStack_50;
            auStack_50[0] = auStack_50[0] & 0xffffff00;
            puStack_3c = puStack_40;
            FUN_100e5aa0(puStack_40);
            FUN_104d1670(&DAT_11dbac80,puStack_40);
            if ((puStack_40 != (uint *)abStack_54) && (puStack_40 != (uint *)0x0)) {
              FUN_10c3d5d0(puStack_40);
            }
            if ((piVar5 != (int *)0x0) && ((char)piVar5[0x32] != '\0')) {
              auStack_94[0] = (**(code **)(*piVar5 + 0xa4))();
              uVar6 = 0;
              if (auStack_94[0] != 0) {
                do {
                  iVar2 = *piVar5;
                  piVar5 = piVar9;
                  piVar3 = (int *)(**(code **)(iVar2 + 0xb8))(uVar6);
                  piVar9 = piVar5;
                  if (piVar3 != (int *)0x0) {
                    uVar7 = (**(code **)(*piVar3 + 4))();
                    uStack_b4 = (uint)((ulonglong)uVar7 >> 0x20);
                    lVar8 = FUN_1149e560();
                    piVar9 = piVar5;
                    if (lVar8 == CONCAT44(uStack_b4,(int)uVar7)) {
                      uVar4 = (**(code **)(*piVar3 + 0xc))();
                      FUN_104d1550("netId",uVar4);
                      iVar2 = (**(code **)(*piVar3 + 0x80))();
                      FUN_104d1670("starLevel",*(undefined4 *)(iVar2 + 0x14));
                      uVar4 = (**(code **)(*piVar3 + 0x30))();
                      FUN_104d1440(&DAT_11dccf88,uVar4);
                      uVar4 = (**(code **)(*piVar3 + 0x38))();
                      FUN_104d1440("weapon",uVar4);
                      piVar9 = piVar5;
                      uVar4 = (**(code **)(*piVar5 + 4))();
                      FUN_104d1440(&DAT_11dd7eac,uVar4);
                    }
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < auStack_94[0]);
              }
            }
            FUN_104d15e0("state",0);
            FUN_104d1550("selHuntPacket",0xffffffff);
            FUN_104d15e0("bIsLeader",0);
            (**(code **)(*piStack_b0 + 0x3c))(uStack_a8,&uStack_d0);
            if (unaff_EDI != 0) {
              FUN_10c3da30(unaff_EDI);
            }
            if ((uStack_b4 >> 6 & 1) != 0) {
              (**(code **)(*local_b8 + 8))(&local_b8,piStack_b0);
            }
            uStack_d0._0_4_ = (uint **)((int)(uint **)uStack_d0 + 1);
            piVar3 = piStack_5c;
          } while ((uint **)uStack_d0 < (int **)((piStack_5c[0x14] - piStack_5c[0x13]) / 0x30));
        }
        (**(code **)(*piStack_58 + 0x14))
                  (auStack_50[0],"teammemberInfoArr",auStack_98,(abStack_54[0] & 0x8f) == 10);
        if ((uStack_7c >> 6 & 1) != 0) {
          uStack_d0._0_4_ = (uint **)&piStack_80;
          uStack_d0._4_4_ = piStack_78;
          (**(code **)(*piStack_80 + 8))();
          piStack_80 = (int *)0x0;
        }
        uStack_7c = 0;
        if (((uint)piStack_5c >> 6 & 1) != 0) {
          uStack_d0._0_4_ = (uint **)&piStack_60;
          uStack_d0._4_4_ = piStack_58;
          (**(code **)(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        piStack_5c = (int *)0x0;
        if (((uint)puStack_3c >> 6 & 1) != 0) {
          uStack_d0._0_4_ = &puStack_40;
          uStack_d0._4_4_ = (int *)uStack_38;
          (**(code **)(*puStack_40 + 8))();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108f77f0 @ 108f77f0  size=1125 ===== */
// strings:
//   "LEVELENTRUST_MEMBERVO_CLASSNAME"
//   "starLevel"
//   "weapon"
//   "hrLevel"
//   "state"
//   "bOfficer"
//   "selHuntPacket"
//   "bIsLeader"
//   "remainWarning"
//   "teammemberInfoArr"

/* [RE-AUTO c0]
   strings:
     ""LEVELENTRUST_MEMBERVO_CLASSNAME""
     ""starLevel""
     ""weapon""
     ""hrLevel""
     ""state""
     ""bOfficer""
     ""selHuntPacket""
     ""bIsLeader""
     ""remainWarning""
     ""teammemberInfoArr"" */

void __thiscall FUN_108f77f0(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *****pppppiVar5;
  undefined4 uVar6;
  int ****ppppiVar7;
  int unaff_EDI;
  int *****in_stack_00000010;
  int in_stack_00000014;
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  char *pcStack_b8;
  undefined4 *puStack_b4;
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  int ****local_9c;
  int ****ppppiStack_98;
  undefined4 local_94;
  uint uStack_88;
  int ****ppppiStack_84;
  undefined4 uStack_7c;
  int ***pppiStack_78;
  uint uStack_74;
  int ****ppppiStack_70;
  byte bStack_6c;
  undefined4 uStack_68;
  int ****ppppiStack_60;
  int *piStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  int ****ppppiStack_50;
  undefined1 auStack_4c [12];
  int ****ppppiStack_40;
  int ****ppppiStack_3c;
  int ****ppppiStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_9c;
  local_9c = (int ****)in_stack_00000010;
  local_94 = param_1;
  if (((in_stack_00000014 == 1) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) {
    ppppiStack_ac = (int ****)0x108f784e;
    iVar3 = (**(code **)(*piVar4 + 0xb4))();
    ppppiStack_ac = (int ****)0x108f7855;
    piVar4 = (int *)FUN_107cb5c0();
    if ((iVar3 != 0) && (piVar4 != (int *)0x0)) {
      ppppiStack_ac = (int ****)0x108f786e;
      pppppiVar5 = (int *****)FUN_112e5470();
      ppppiStack_ac = local_9c;
      ppppiStack_b0 = (int ****)0x108f7881;
      ppppiStack_98 = (int ****)pppppiVar5;
      FUN_104f4330();
      puStack_b4 = &uStack_7c;
      uStack_7c = 0;
      pppiStack_78 = (int ***)0x0;
      ppppiStack_60 = (int ****)CONCAT31(ppppiStack_60._1_3_,((byte)pppiStack_58 & 0x8f) == 10);
      ppppiStack_b0 = ppppiStack_60;
      pcStack_b8 = "LEVELENTRUST_MEMBERVO_CLASSNAME";
      pppiStack_bc = pppiStack_54;
      pppiStack_c0 = (int ***)0x108f78c8;
      cVar1 = (**(code **)(*piStack_5c + 0x10))();
      if ((cVar1 != '\0') && (((byte)uStack_88 & 0x8f) == 6)) {
        if ((uStack_88 >> 6 & 1) == 0) {
          ppppiStack_b0 = ppppiStack_84;
        }
        else {
          ppppiStack_b0 = (int ****)*ppppiStack_84;
          pppppiVar5 = (int *****)ppppiStack_ac;
        }
      }
      pppiStack_54 = (int ***)0x0;
      ppppiStack_50 = (int ****)0x0;
      *(undefined1 *)(unaff_EDI + 0x20) = 0;
      pppiStack_c0 = (int ***)&pppiStack_54;
      FUN_11a98a70();
      if (pppppiVar5 != (int *****)0x0) {
        ppppiStack_b0 = (int ****)FUN_112ea0c0();
        ppppiVar7 = (int ****)*ppppiStack_b0;
        if (ppppiVar7 != (int ****)ppppiStack_b0[1]) {
          do {
            iVar3 = 0;
            FUN_11a98de0(&stack0xffffff58,puStack_b4,0);
            uVar6 = FUN_112e9990();
            FUN_104d1440(&DAT_11dbb0b4,uVar6);
            FUN_112e9980();
            ppppiStack_3c = (int ****)auStack_4c;
            auStack_4c[0] = 0;
            ppppiStack_38 = ppppiStack_3c;
            FUN_100e5aa0(ppppiStack_3c);
            FUN_104d1670(&DAT_11dbac80,ppppiStack_3c);
            if (((int *****)ppppiStack_3c != &ppppiStack_50) &&
               ((int *****)ppppiStack_3c != (int *****)0x0)) {
              FUN_10c3d5d0(ppppiStack_3c);
            }
            FUN_112e99b0();
            ppppiStack_40 = (int ****)&ppppiStack_50;
            ppppiStack_50 = (int ****)((uint)ppppiStack_50 & 0xffffff00);
            ppppiStack_3c = ppppiStack_40;
            FUN_100e5aa0(ppppiStack_40);
            FUN_104d1670("starLevel",ppppiStack_40);
            if ((ppppiStack_40 != &pppiStack_54) && ((int *****)ppppiStack_40 != (int *****)0x0)) {
              FUN_10c3d5d0(ppppiStack_40);
            }
            uVar6 = FUN_112e9970();
            FUN_104d1550(&DAT_11dccf88,uVar6);
            uVar6 = FUN_112e99d0();
            FUN_104d1550("weapon",uVar6);
            uVar6 = FUN_112e9950();
            FUN_104d1550(&DAT_11dd7eac,uVar6);
            uVar6 = FUN_112e9960();
            FUN_104d1550("hrLevel",uVar6);
            uVar2 = FUN_112e99c0();
            FUN_104d15e0("state",uVar2);
            uVar2 = FUN_112e99a0();
            FUN_104d15e0("bOfficer",uVar2);
            uVar6 = FUN_112e9930();
            FUN_104d1550("selHuntPacket",uVar6);
            FUN_104d15e0("bIsLeader",0);
            cVar1 = FUN_112e99a0();
            if (cVar1 != '\0') {
              uVar6 = (**(code **)(*piVar4 + 0xb8))();
              FUN_112e9980(uVar6);
              cVar1 = FUN_100e5870();
              if (cVar1 != '\0') {
                *(undefined1 *)(iVar3 + 0x20) = 1;
              }
            }
            (*(code *)(*ppppiStack_70)[0xf])(uStack_68,&pppiStack_c0);
            FUN_104d7c10();
            ppppiVar7 = ppppiVar7 + 0xb;
          } while (ppppiVar7 != (int ****)ppppiStack_b0[1]);
        }
      }
      (**(code **)(*piVar4 + 0x390))();
      uVar6 = FUN_115768f0();
      FUN_104d1550("remainWarning",uVar6);
      (*(code *)(*ppppiStack_70)[5])
                (uStack_68,"teammemberInfoArr",&pppiStack_58,(bStack_6c & 0x8f) == 10);
      if (((uint)ppppiStack_3c >> 6 & 1) != 0) {
        ppppiStack_b0 = (int ****)&ppppiStack_40;
        ppppiStack_ac = ppppiStack_38;
        puStack_b4 = (undefined4 *)0x108f7be4;
        (*(code *)(*ppppiStack_40)[2])();
        ppppiStack_40 = (int ****)0x0;
      }
      ppppiStack_3c = (int ****)0x0;
      if ((uStack_74 >> 6 & 1) != 0) {
        ppppiStack_b0 = &pppiStack_78;
        ppppiStack_ac = ppppiStack_70;
        puStack_b4 = (undefined4 *)0x108f7c11;
        (*(code *)(*pppiStack_78)[2])();
        pppiStack_78 = (int ***)0x0;
      }
      uStack_74 = 0;
      if (((uint)pppiStack_54 >> 6 & 1) != 0) {
        ppppiStack_b0 = &pppiStack_58;
        ppppiStack_ac = ppppiStack_50;
        puStack_b4 = (undefined4 *)0x108f7c3e;
        (*(code *)(*pppiStack_58)[2])();
      }
    }
  }
  FUN_11a89daa();
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



/* ===== FUN_10907130 @ 10907130  size=175 ===== */
// strings:
//   "RequestPaidBox"
//   "UpdateItemData"

/* [RE-AUTO c0]
   strings:
     ""RequestPaidBox""
     ""UpdateItemData"" */

void FUN_10907130(void)

{
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
  pcStack_30 = "RequestPaidBox";
  acStack_34[0] = 'd';
  acStack_34[1] = 'q';
  acStack_34[2] = -0x70;
  acStack_34[3] = '\x10';
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pcStack_3c = (char *)0x10907171;
  FUN_10907740();
  if ((pcStack_20 != acStack_34) && (pcStack_20 != (char *)0x0)) {
    pcStack_3c = pcStack_20;
    pcStack_40 = (char *)0x10907187;
    FUN_10c3d5d0();
  }
  local_24 = (undefined4 *)acStack_34;
  pcStack_3c = "";
  pcStack_40 = "UpdateItemData";
  acStack_44[0] = -0x59;
  acStack_44[1] = 'q';
  acStack_44[2] = -0x70;
  acStack_44[3] = '\x10';
  pcStack_20 = (char *)local_24;
  FUN_100b62c0();
  FUN_10907810(&pcStack_3c);
  if ((pcStack_30 != acStack_44) && (pcStack_30 != (char *)0x0)) {
    FUN_10c3d5d0(pcStack_30);
  }
  FUN_11a89daa();
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



/* ===== FUN_10913600 @ 10913600  size=3691 ===== */
// calls: CPet::SetName, sprintf, CActivityHuntInfo::GetActiveHuntActivity
// strings:
//   "ENTRYDATAVO_CLASSNAME"
//   "LEVELDATAVO_CLASSNAME"
//   "ENTRY_TAB_CLASSNAME"
//   "nTabId"
//   "strTabName"
//   "nTaskShowCondition"
//   "nEntryPointID"
//   "nBelongTabId"
//   "sMHFeaturesMgr"
//   "nLevelID"
//   "nDiffLev"
//   "nDailyEnterCnt"
//   "nDailyTotalMaxEnterCnt"
//   "nState"
//   "nNeedLev"
//   "strNeedQuest"
//   "strNeedOtherLevel"
//   "nRecord"
//   "nProposeLev"
//   "nProposePlayerNum"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""ENTRYDATAVO_CLASSNAME""
     ""LEVELDATAVO_CLASSNAME""
     ""ENTRY_TAB_CLASSNAME""
     ""nTabId""
     ""strTabName""
     ""nTaskShowCondition""
     ""nEntryPointID""
     ""nBelongTabId""
     ""sMHFeaturesMgr""
     ""nLevelID"" */

void FUN_10913600(undefined4 param_1,int *******param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int ******ppppppiVar1;
  bool bVar2;
  char cVar3;
  int *****pppppiVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *****pppppiVar9;
  uint uVar10;
  int ****ppppiVar11;
  int *****pppppiVar12;
  int *****unaff_EBX;
  int *******pppppppiVar13;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  bool bVar14;
  int ******ppppppiStack_248;
  undefined4 *puStack_244;
  int ****ppppiStack_240;
  int ******ppppppiStack_23c;
  int *****pppppiStack_238;
  int *****pppppiStack_234;
  int ******ppppppiStack_230;
  char *pcStack_22c;
  int ******ppppppiStack_228;
  int ******ppppppiStack_224;
  int ****ppppiStack_220;
  undefined4 *puStack_21c;
  char *pcStack_218;
  undefined4 uStack_214;
  undefined1 *puStack_210;
  int ****ppppiStack_20c;
  char *pcStack_208;
  char *pcStack_204;
  int *****pppppiStack_200;
  uint uStack_1fc;
  int ******ppppppiStack_1f8;
  char *pcStack_1f4;
  int ****ppppiStack_1f0;
  int ******ppppppiStack_1ec;
  undefined1 auStack_1dc [8];
  int ******ppppppiStack_1d4;
  int *piStack_1d0;
  int ****ppppiStack_1cc;
  char *pcStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  char *pcStack_1b8;
  int iStack_1b4;
  int ***local_1b0;
  char *local_1ac;
  int ******local_1a8;
  int *****local_1a4;
  undefined4 local_1a0;
  int ***apppiStack_19c [2];
  undefined4 uStack_194;
  int ******ppppppiStack_190;
  int ****ppppiStack_18c;
  int ****ppppiStack_188;
  int *piStack_184;
  int *****pppppiStack_180;
  int *****pppppiStack_17c;
  undefined1 auStack_178 [4];
  int *****pppppiStack_174;
  int ****ppppiStack_170;
  undefined4 uStack_16c;
  int ****ppppiStack_168;
  int *****pppppiStack_164;
  int ******ppppppiStack_160;
  int *****pppppiStack_15c;
  int ****ppppiStack_158;
  int *****pppppiStack_154;
  int ******ppppppiStack_150;
  int ******ppppppiStack_14c;
  int ******ppppppiStack_148;
  int *****pppppiStack_144;
  int ******ppppppiStack_140;
  int ******local_13c;
  undefined4 uStack_138;
  int ******ppppppiStack_134;
  int ******ppppppiStack_130;
  int ****ppppiStack_124;
  int ****appppiStack_120 [4];
  int *****pppppiStack_110;
  int *****pppppiStack_10c;
  int ***pppiStack_108;
  undefined4 *puStack_104;
  int ******ppppppiStack_100;
  int ***pppiStack_f0;
  uint uStack_ec;
  int ******ppppppiStack_e8;
  int iStack_e4;
  int iStack_e0;
  int ******ppppppiStack_d4;
  int iStack_d0;
  int *****pppppiStack_c4;
  int iStack_c0;
  int iStack_bc;
  char cStack_b8;
  undefined1 auStack_a4 [8];
  char acStack_9c [144];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_1dc;
  local_13c = (int ******)param_2;
  if (param_5 == 1) {
    local_1b0 = (int ***)0x0;
    local_1ac = (char *)param_4[1];
    local_1a4 = (int *****)param_4[3];
    ppppppiStack_1ec = (int ******)param_4[2];
    local_1a0 = param_4[4];
    local_1a8 = ppppppiStack_1ec;
    if (((uint)local_1ac >> 6 & 1) != 0) {
      local_1b0 = (int ***)*param_4;
      ppppiStack_1f0 = &local_1b0;
      pcStack_1f4 = (char *)0x10913671;
      (*(code *)(*local_1b0)[1])();
    }
    ppppppiStack_1ec = (int ******)0x1091368a;
    ppppiStack_1cc =
         (int ****)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if ((int *****)ppppiStack_1cc != (int *****)0x0) {
      ppppppiStack_1ec = (int ******)*ppppiStack_1cc[0xb4b];
      ppppiStack_1f0 = (int ****)0x109136a3;
      pppppiVar4 = (int *****)FUN_10912db0();
      if (pppppiVar4 == (int *****)0x0) {
        piStack_184 = (int *)((uint)piStack_184 & 0xffffff00);
        ppppppiStack_1ec = (int ******)&ppppppiStack_190;
        ppppppiStack_190 = (int ******)0xa6;
        ppppiStack_1f0 = (int ****)0x109136ca;
        ppppiStack_18c = (int ****)pppppiVar4;
        ppppiStack_188 = (int ****)pppppiVar4;
        FUN_104ef270();
      }
      else {
        ppppiStack_1f0 = (int ****)&ppppiStack_158;
        ppppiStack_158 = (int ****)0x0;
        pppppiStack_154 = (int *****)0x0;
        ppppppiStack_1d4 =
             (int ******)CONCAT31(ppppppiStack_1d4._1_3_,((byte)local_1ac & 0x8f) == 10);
        pppppiStack_180 = (int *****)0x0;
        ppppppiStack_1ec = ppppppiStack_1d4;
        pcStack_1f4 = "ENTRYDATAVO_CLASSNAME";
        ppppppiStack_1f8 = local_1a8;
        uStack_1fc = 0x10913720;
        cVar3 = (*(code *)(*local_1b0)[4])();
        if ((cVar3 != '\0') && (((byte)pppppiStack_164 & 0x8f) == 6)) {
          if (((uint)pppppiStack_164 >> 6 & 1) == 0) {
            ppppppiStack_190 = ppppppiStack_160;
          }
          else {
            ppppppiStack_190 = (int ******)*ppppppiStack_160;
          }
        }
        pppppiStack_200 = &ppppiStack_168;
        bVar14 = ((byte)piStack_1bc & 0x8f) == 10;
        ppppiStack_18c = (int ****)0x0;
        uStack_1fc = CONCAT31((int3)((uint)unaff_ESI >> 8),bVar14);
        pcStack_204 = "LEVELDATAVO_CLASSNAME";
        pcStack_208 = pcStack_1b8;
        ppppiStack_20c = (int ****)0x10913789;
        cVar3 = (**(code **)(*piStack_1c0 + 0x10))();
        if ((cVar3 != '\0') && (((byte)pppppiStack_174 & 0x8f) == 6)) {
          if (((uint)pppppiStack_174 >> 6 & 1) == 0) {
            apppiStack_19c[0] = (int ***)ppppiStack_170;
          }
          else {
            apppiStack_19c[0] = *ppppiStack_170;
          }
        }
        puStack_210 = auStack_178;
        uStack_194 = 0;
        pcStack_1f4 = (char *)CONCAT31(pcStack_1f4._1_3_,((byte)ppppiStack_1cc & 0x8f) == 10);
        ppppiStack_20c = (int ****)pcStack_1f4;
        uStack_214 = "ENTRY_TAB_CLASSNAME";
        pcStack_218 = pcStack_1c8;
        puStack_21c = (undefined4 *)0x109137f2;
        cVar3 = (**(code **)(*piStack_1d0 + 0x10))();
        if (((cVar3 != '\0') && (((byte)piStack_184 & 0x8f) == 6)) &&
           (local_1a4 = pppppiStack_180, ((uint)piStack_184 >> 6 & 1) != 0)) {
          local_1a4 = (int *****)*pppppiStack_180;
        }
        puStack_21c = &uStack_138;
        uStack_138 = 0;
        ppppppiStack_134 = (int ******)0x0;
        ppppiStack_220 = (int ****)0x10913842;
        FUN_11a98a70();
        ppppiStack_220 = (int ****)&ppppiStack_124;
        ppppiStack_124 = (int ****)0x0;
        appppiStack_120[0] = (int ****)0x0;
        ppppppiStack_224 = (int ******)0x10913867;
        FUN_11a98a70();
        ppppiStack_1cc = pppppiVar4[7];
        pppppiVar4 = pppppiVar4 + 5;
        pcStack_1c8 = (char *)0x0;
        piStack_1c4 = (int *)0x0;
        piStack_1c0 = (int *)0x0;
        ppppiStack_20c = (int ****)pppppiVar4;
        if ((int *****)ppppiStack_1cc != pppppiVar4) {
          do {
            pppppiVar12 = (int *****)ppppiStack_1cc;
            ppppppiStack_224 = (int ******)(ppppiStack_1cc + 5);
            ppppppiStack_228 = (int ******)0x109138a5;
            FUN_10914470();
            if (cStack_b8 == '\0') {
              uVar5 = 0;
              uVar10 = (int)piStack_1c4 - (int)pcStack_1c8 >> 2;
              uStack_214 = (char *)CONCAT13(1,(undefined3)uStack_214);
              if (uVar10 != 0) {
                do {
                  pppppiVar4 = (int *****)ppppiStack_20c;
                  if (*(int *)(pcStack_1c8 + uVar5 * 4) == iStack_c0) {
                    bVar2 = false;
                    goto LAB_109138f6;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar10);
              }
              bVar2 = true;
LAB_109138f6:
              if (bVar2) {
                if (piStack_1c4 == piStack_1c0) {
                  ppppppiStack_224 = (int ******)0x1;
                  ppppppiStack_228 = (int ******)0x1;
                  pcStack_22c = (char *)((int)&uStack_214 + 3);
                  ppppppiStack_230 = (int ******)&iStack_c0;
                  pppppiStack_234 = (int *****)piStack_1c4;
                  pppppiStack_238 = (int *****)0x10913932;
                  FUN_10463c40();
                }
                else {
                  *piStack_1c4 = iStack_c0;
                  piStack_1c4 = piStack_1c4 + 1;
                }
                ppppppiStack_224 = (int ******)0x0;
                ppppppiStack_228 = (int ******)0x0;
                pcStack_22c = local_1ac;
                ppppppiStack_230 = &pppppiStack_200;
                pppppiStack_200 = (int *****)0x0;
                uStack_1fc = 0;
                pppppiStack_234 = (int *****)0x10913956;
                FUN_11a98de0();
                pppppiStack_234 = (int *****)iStack_d0;
                pppppiStack_238 = (int *****)0x11dd9580;
                ppppppiStack_23c = (int ******)0x1091396d;
                FUN_104d1550();
                appppiStack_120[0] = (int ****)((uint)appppiStack_120[0] & 0xffffff00);
                pppppiStack_234 = appppiStack_120;
                pppppiStack_238 = (int *****)0x1091399a;
                pppppiStack_110 = pppppiStack_234;
                pppppiStack_10c = pppppiStack_234;
                FUN_100e5aa0();
                pppppiStack_238 = pppppiStack_110;
                ppppppiStack_23c = (int ******)0x11dd9574;
                ppppiStack_240 = (int ****)0x109139b1;
                FUN_104d1670();
                if ((pppppiStack_110 != &ppppiStack_124) &&
                   ((int ******)pppppiStack_110 != (int ******)0x0)) {
                  pppppiStack_238 = pppppiStack_110;
                  ppppppiStack_23c = (int ******)0x109139d0;
                  FUN_10c3d5d0();
                }
                pppppiStack_238 = (int *****)&uStack_214;
                ppppppiStack_23c = ppppppiStack_134;
                ppppiStack_240 = (int ****)0x109139eb;
                (*(code *)(*local_13c)[0xf])();
                if ((uStack_1fc >> 6 & 1) != 0) {
                  ppppppiStack_228 = &pppppiStack_200;
                  ppppppiStack_224 = ppppppiStack_1f8;
                  pcStack_22c = (char *)0x10913a08;
                  (*(code *)(*pppppiStack_200)[2])();
                }
              }
              pppppiStack_164 = pppppiStack_c4;
              if ((int)pppppiStack_c4 < 1) {
LAB_10913a5e:
                ppppppiStack_224 = (int ******)0x0;
                ppppppiStack_228 = (int ******)0x0;
                pcStack_22c = pcStack_1b8;
                ppppppiStack_230 = (int ******)&local_1a8;
                local_1a8 = (int ******)0x0;
                local_1a4 = (int *****)0x0;
                pppppiStack_234 = (int *****)0x10913a8b;
                FUN_11a98de0();
                pppppiStack_234 = pppppiStack_174;
                pppppiStack_238 = (int *****)0x11dd9598;
                ppppppiStack_23c = (int ******)0x10913aa2;
                FUN_104d1550();
                ppppppiStack_23c = (int ******)pppiStack_108;
                ppppiStack_240 = (int ****)0x11dd9588;
                puStack_244 = (undefined4 *)0x10913abc;
                FUN_104d1550();
                puStack_244 = puStack_104;
                ppppppiStack_248 = (int ******)&DAT_11dd94b8;
                FUN_104d1550();
                FUN_104d1550(&DAT_11dd94b0,ppppppiStack_100);
                FUN_104d1550("nBelongTabId",iStack_d0);
                ppppiStack_170 = (int ****)0x0;
                pppppiStack_234 = &ppppiStack_170;
                uStack_16c = 0;
                pppppiStack_238 = (int *****)0x10913b32;
                FUN_11a98a70();
                pppppiStack_17c = (int *****)0x0;
                if (iStack_e0 - iStack_e4 >> 2 != 0) {
                  do {
                    ppppppiVar1 = *(int *******)(iStack_e4 + (int)pppppiStack_17c * 4);
                    ppppppiStack_23c = (int ******)0x10913b70;
                    pppppiStack_238 = (int *****)ppppppiVar1;
                    pppppiStack_180 = (int *****)ppppppiVar1;
                    pppppiVar4 = (int *****)FUN_107d7930();
                    ppppiStack_158 = (int ****)pppppiVar4;
                    if (pppppiVar4 != (int *****)0x0) {
                      pppppiStack_238 = (int *****)((uint)pppppiVar4[2] | (uint)pppppiVar4[3]);
                      if (pppppiStack_238 != (int *****)0x0) {
                        if ((DAT_123c0edc & 1) == 0) {
                          DAT_123c0edc = DAT_123c0edc | 1;
                          DAT_123c0ee0 = 0;
                          ppppppiStack_23c = (int ******)&DAT_123c0ee0;
                          ppppiStack_240 = (int ****)0x10913bbc;
                          FUN_100fa120();
                          ppppiStack_240 = (int ****)&DAT_11c6e1f0;
                          puStack_244 = (undefined4 *)0x10913bc6;
                          FUN_11a8911f();
                        }
                        if (((int ****)(*(uint *)(DAT_123c0ee0 + 8) & (uint)pppppiVar4[2]) !=
                             pppppiVar4[2]) ||
                           ((int ****)(*(uint *)(DAT_123c0ee0 + 0xc) & (uint)pppppiVar4[3]) !=
                            pppppiVar4[3])) goto LAB_10914149;
                      }
                      pppppiStack_238 = (int *****)0x0;
                      ppppppiStack_23c = (int ******)0x0;
                      ppppiStack_240 = (int ****)pcStack_1c8;
                      puStack_244 = &uStack_214;
                      uStack_214 = (char *)0x0;
                      puStack_210 = (undefined1 *)0x0;
                      ppppppiStack_248 = (int ******)0x10913c10;
                      FUN_11a98de0();
                      ppppppiStack_248 = ppppppiVar1;
                      FUN_104d1550("nLevelID");
                      FUN_104d1550("nDiffLev",pppppiVar4[0xc]);
                      pppppiStack_234 = (int *****)pppppiVar4[9][0x1b];
                      pppppppiVar13 = (int *******)((int)pppppiVar4[9][0x1c] + (int)pppppiStack_234)
                      ;
                      ppppppiStack_1d4 = (int ******)pppppppiVar13;
                      if (0 < (int)pppppppiVar13) {
                        ppppppiStack_248 = (int ******)0x10913c5e;
                        iVar6 = (**(code **)((int)*ppppppiStack_228 + 0x388))();
                        if (iVar6 != 0) {
                          ppppppiStack_248 = ppppppiStack_190;
                          (**(code **)((int)*ppppppiStack_228 + 0x388))();
                          pcStack_22c = (char *)FUN_1156c6b0();
                          if (pcStack_22c != (char *)0x0) {
                            ppppppiStack_248 = (int ******)0x3;
                            iVar6 = FUN_1156c660();
                            iVar6 = (int)pppppiStack_238 - iVar6;
                            iVar7 = FUN_1156c660(4);
                            ppppppiStack_23c = (int ******)(iVar7 + iVar6);
                            iVar6 = FUN_1156c660(3);
                            pppppppiVar13 = (int *******)((int)ppppppiStack_1d4 - iVar6);
                          }
                        }
                      }
                      ppppppiStack_248 = (int ******)pppppiStack_234;
                      FUN_104d1550("nDailyEnterCnt");
                      FUN_104d1550("nDailyTotalMaxEnterCnt",pppppppiVar13);
                      ppppppiVar1 = ppppppiStack_190;
                      ppppppiStack_248 = ppppppiStack_190;
                      uVar8 = FUN_10914e90(pppppiVar4[0x10]);
                      FUN_104d1550("nState",uVar8);
                      FUN_104d1550("nNeedLev",0);
                      FUN_10914d40(apppiStack_19c,pppppiVar4 + 0x10);
                      ppppppiStack_134 = &pppppiStack_144;
                      pppppiStack_144 = (int *****)((uint)pppppiStack_144 & 0xffffff00);
                      ppppppiStack_130 = ppppppiStack_134;
                      FUN_100e5aa0(ppppppiStack_134);
                      FUN_104d1670("strNeedQuest",ppppppiStack_134);
                      if (((int *******)ppppppiStack_134 != &ppppppiStack_148) &&
                         ((int *******)ppppppiStack_134 != (int *******)0x0)) {
                        FUN_10c3d5d0(ppppppiStack_134);
                      }
                      if ((int *******)local_1a8 != (int *******)0x0) {
                        FUN_10c3da30(local_1a8);
                      }
                      local_1a8 = (int ******)0x0;
                      ppppppiStack_248 = (int ******)0x0;
                      CPet__SetName(&DAT_11d9d32b);
                      iVar6 = FUN_117e7460(7);
                      if (iVar6 != 0) {
                        FUN_10914db0(iVar6);
                      }
                      ppppppiStack_140 = (int ******)&ppppppiStack_150;
                      ppppppiStack_150 = (int ******)((uint)ppppppiStack_150 & 0xffffff00);
                      local_13c = ppppppiStack_140;
                      FUN_100e5aa0(ppppppiStack_140);
                      FUN_104d1670("strNeedOtherLevel",ppppppiStack_140);
                      if ((ppppppiStack_140 != &pppppiStack_154) &&
                         ((int *******)ppppppiStack_140 != (int *******)0x0)) {
                        FUN_10c3d5d0(ppppppiStack_140);
                      }
                      if ((ppppppiStack_248[0xae2] == (int *****)0x0) ||
                         (iVar6 = FUN_114cd4a0(ppppppiVar1), iVar6 == 0)) {
                        iVar6 = 0;
                      }
                      FUN_104d1550("nRecord",iVar6);
                      FUN_104d1550("nProposeLev",pppppiVar4[0x1a]);
                      FUN_104d1550("nProposePlayerNum",pppppiVar4[0x1b]);
                      pppppiStack_154 = (int *****)((uint)pppppiStack_154 & 0xffffff00);
                      pppppiStack_144 = (int *****)&pppppiStack_154;
                      ppppppiStack_140 = (int ******)pppppiStack_144;
                      FUN_100e5aa0(pppppiStack_144);
                      FUN_104d1670("strProposeWeapon",pppppiStack_144);
                      if ((pppppiStack_144 != &ppppiStack_158) &&
                         ((int ******)pppppiStack_144 != (int ******)0x0)) {
                        FUN_10c3d5d0(pppppiStack_144);
                      }
                      uVar8 = FUN_117388f0(ppppppiVar1,0);
                      ppppiVar11 = (int ****)&DAT_11d9d32b;
                      if (pppppiVar4[0x1d] != (int ****)0x0) {
                        ppppiVar11 = pppppiVar4[0x1d];
                      }
                      FUN_104d1670("strTargetDesc",ppppiVar11);
                      pppppppiVar13 = (int *******)FUN_117380d0(uVar8);
                      ppppppiStack_1f8 = (int ******)pppppppiVar13;
                      if (((pppppppiVar13 != (int *******)0x0) &&
                          (pppppppiVar13[7] != pppppppiVar13[8])) &&
                         (uVar5 = 0, iVar6 = (int)pppppppiVar13[8] - (int)pppppppiVar13[7] >> 0x1f,
                         ((int)pppppppiVar13[8] - (int)pppppppiVar13[7]) / 0x54 + iVar6 != iVar6)) {
                        iVar6 = 0;
                        do {
                          pppppiVar4 = (int *****)ppppiStack_18c;
                          if (0x1a3 < iVar6) break;
                          uVar5 = uVar5 + 1;
                          sprintf(acStack_9c,"%s%d","strOtherTarget",uVar5);
                          FUN_10914570((int)pppppppiVar13[7] + iVar6);
                          ppppppiStack_14c = &pppppiStack_15c;
                          pppppiStack_15c = (int *****)((uint)pppppiStack_15c & 0xffffff00);
                          ppppppiStack_148 = ppppppiStack_14c;
                          FUN_100e5aa0(ppppppiStack_14c);
                          FUN_104d1670(auStack_a4,ppppppiStack_14c);
                          if (((int *******)ppppppiStack_14c != &ppppppiStack_160) &&
                             ((int *******)ppppppiStack_14c != (int *******)0x0)) {
                            FUN_10c3d5d0(ppppppiStack_14c);
                          }
                          FUN_11736f30();
                          iVar6 = iVar6 + 0x54;
                          pppppiVar4 = (int *****)ppppiStack_18c;
                        } while (uVar5 < (uint)(((int)pppppppiVar13[8] - (int)pppppppiVar13[7]) /
                                               0x54));
                      }
                      (*(code *)(*local_1a8)[0xf])(local_1a0,&ppppppiStack_248);
                      if (iStack_1b4 == 0) {
                        ppppiVar11 = (int ****)&DAT_11d9d32b;
                        if (pppppiVar4[0x1d] != (int ****)0x0) {
                          ppppiVar11 = pppppiVar4[0x1d];
                        }
                        FUN_104d1670("strUIShowBossName",ppppiVar11);
                      }
                      else {
                        ppppppiStack_150 = (int ******)&ppppppiStack_160;
                        ppppppiStack_160 = (int ******)((uint)ppppppiStack_160 & 0xffffff00);
                        ppppppiStack_14c = ppppppiStack_150;
                        FUN_100e5aa0(ppppppiStack_150);
                        FUN_104d1670("strUIShowBossName",ppppppiStack_150);
                        if ((ppppppiStack_150 != &pppppiStack_164) &&
                           ((int *******)ppppppiStack_150 != (int *******)0x0)) {
                          FUN_10c3d5d0(ppppppiStack_150);
                        }
                      }
                      ppppiVar11 = (int ****)&DAT_11d9d32b;
                      if (pppppiVar4[0x18] != (int ****)0x0) {
                        ppppiVar11 = pppppiVar4[0x18];
                      }
                      FUN_104d1670("strDesc",ppppiVar11);
                      FUN_104d1550("nUIShowBossID",pppppiVar4[0x1e]);
                      if (ppppppiStack_224 != (int ******)0x0) {
                        pppppiStack_238 = (int *****)ppppppiStack_224;
                        ppppppiStack_23c = (int ******)0x10914129;
                        FUN_10c3da30();
                      }
                      if (((uint)puStack_210 >> 6 & 1) != 0) {
                        ppppppiStack_23c = (int ******)&uStack_214;
                        pppppiStack_238 = (int *****)ppppiStack_20c;
                        ppppiStack_240 = (int ****)0x10914149;
                        (**(code **)(*(int *)uStack_214 + 8))();
                      }
                    }
LAB_10914149:
                    pppppiStack_17c = (int *****)((int)pppppiStack_17c + 1);
                    pppppiVar12 = unaff_EBX;
                    pppppiVar4 = (int *****)ppppiStack_220;
                  } while (pppppiStack_17c < (int ******)(iStack_e0 - iStack_e4 >> 2));
                }
                pppppiStack_238 = (int *****)(uint)(((byte)pcStack_1b8 & 0x8f) == 10);
                ppppppiStack_23c = &pppppiStack_174;
                ppppiStack_240 = (int ****)0x11dd95e8;
                puStack_244 = (undefined4 *)iStack_1b4;
                ppppppiStack_248 = (int ******)0x109141b1;
                (**(code **)(*piStack_1bc + 0x14))();
                ppppppiStack_248 = (int ******)pppppiStack_17c;
                iVar6 = (**(code **)(*piStack_184 + 0x28))();
                if (iVar6 != 0) {
                  ppppppiStack_224 = (int ******)&local_1a8;
                  ppppppiStack_228 = (int ******)uStack_138;
                  pcStack_22c = (char *)0x109141e0;
                  (*(code *)(*ppppppiStack_140)[0xf])();
                }
                if (((uint)pppppiStack_15c >> 6 & 1) != 0) {
                  ppppppiStack_228 = (int ******)&ppppppiStack_160;
                  ppppppiStack_224 = (int ******)ppppiStack_158;
                  pcStack_22c = (char *)0x10914209;
                  (*(code *)(*ppppppiStack_160)[2])();
                  ppppppiStack_160 = (int ******)0x0;
                }
                pppppiStack_15c = (int *****)0x0;
                if (((uint)local_1a4 >> 6 & 1) != 0) {
                  ppppppiStack_228 = (int ******)&local_1a8;
                  ppppppiStack_224 = (int ******)local_1a0;
                  pcStack_22c = (char *)0x1091423f;
                  (*(code *)(*local_1a8)[2])();
                  local_1a8 = (int ******)0x0;
                }
                local_1a4 = (int *****)0x0;
              }
              else if (*(int **)(pcStack_204 + 0x2ab0) != (int *)0x0) {
                ppppppiStack_224 = (int ******)pppppiStack_c4;
                ppppppiStack_228 = (int ******)0x10913a32;
                iVar6 = (**(code **)(**(int **)(pcStack_204 + 0x2ab0) + 0x50))();
                if (iVar6 == 0) {
                  ppppppiStack_224 = (int ******)0x10913a42;
                  FUN_10914520();
                }
                else {
                  if (*(int *)(iVar6 + 0x14) == 1) goto LAB_10913a5e;
                  ppppppiStack_224 = (int ******)0x10913a59;
                  FUN_10914520();
                }
                goto LAB_109142a1;
              }
              if (iStack_bc != 0) {
                ppppppiStack_224 = (int ******)iStack_bc;
                ppppppiStack_228 = (int ******)0x10914260;
                FUN_10c3da30();
              }
              iStack_bc = 0;
              if (iStack_d0 != 0) {
                ppppppiStack_224 = (int ******)iStack_d0;
                ppppppiStack_228 = (int ******)0x1091427f;
                FUN_10c3d5d0();
              }
              if (((int *******)ppppppiStack_d4 != &ppppppiStack_e8) &&
                 ((int *******)ppppppiStack_d4 != (int *******)0x0)) {
                ppppppiStack_224 = ppppppiStack_d4;
                ppppppiStack_228 = (int ******)0x1091429e;
                FUN_10c3d5d0();
              }
            }
            else {
              ppppppiStack_224 = (int ******)0x109138bb;
              FUN_10914520();
            }
LAB_109142a1:
            ppppiStack_1cc = pppppiVar12[3];
            if ((int *****)ppppiStack_1cc == (int *****)0x0) {
              pppppiVar9 = (int *****)pppppiVar12[1];
              if (pppppiVar12 == (int *****)pppppiVar9[3]) {
                do {
                  pppppiVar12 = pppppiVar9;
                  pppppiVar9 = (int *****)pppppiVar12[1];
                } while (pppppiVar12 == (int *****)pppppiVar9[3]);
              }
              ppppiStack_1cc = (int ****)pppppiVar12;
              if ((int *****)pppppiVar12[3] != pppppiVar9) {
                ppppiStack_1cc = (int ****)pppppiVar9;
              }
            }
            else {
              for (pppppiVar12 = (int *****)ppppiStack_1cc[2]; pppppiVar12 != (int *****)0x0;
                  pppppiVar12 = (int *****)pppppiVar12[2]) {
                ppppiStack_1cc = (int ****)pppppiVar12;
              }
            }
          } while ((int *****)ppppiStack_1cc != pppppiVar4);
        }
        ppppppiStack_224 = (int ******)(uint)(bVar14 == true);
        ppppppiStack_228 = (int ******)&ppppppiStack_140;
        pcStack_22c = "instanceEntryPointInfo";
        pppppiStack_234 = (int *****)0x1091431a;
        (**(code **)(*unaff_EDI + 0x14))();
        pppppiStack_234 = (int *****)(uint)(((byte)pcStack_1f4 & 0x8f) == 10);
        pppppiStack_238 = (int *****)&uStack_138;
        ppppppiStack_23c = (int ******)0x11dd9608;
        ppppiStack_240 = ppppiStack_1f0;
        puStack_244 = (undefined4 *)0x10914346;
        (*(code *)(*ppppppiStack_1f8)[5])();
        puStack_244 = (undefined4 *)0x10914355;
        puStack_244 = (undefined4 *)CActivityHuntInfo__GetActiveHuntActivity();
        ppppppiStack_248 = (int ******)0x11dd95f8;
        FUN_104d1550();
        if ((int *******)ppppppiStack_190 != (int *******)0x0) {
          ppppppiStack_1ec = ppppppiStack_190;
          ppppiStack_1f0 = (int ****)0x10914377;
          FUN_10c3d5d0();
        }
        if ((uStack_ec >> 6 & 1) != 0) {
          ppppiStack_1f0 = &pppiStack_f0;
          ppppppiStack_1ec = ppppppiStack_e8;
          pcStack_1f4 = (char *)0x109143a3;
          (*(code *)(*pppiStack_f0)[2])();
          pppiStack_f0 = (int ***)0x0;
        }
        uStack_ec = 0;
        if (((uint)puStack_104 >> 6 & 1) != 0) {
          ppppiStack_1f0 = &pppiStack_108;
          ppppppiStack_1ec = ppppppiStack_100;
          pcStack_1f4 = (char *)0x109143e2;
          (*(code *)(*pppiStack_108)[2])();
          pppiStack_108 = (int ***)0x0;
        }
        puStack_104 = (undefined4 *)0x0;
        if (((uint)pppppiStack_154 >> 6 & 1) != 0) {
          ppppiStack_1f0 = (int ****)&ppppiStack_158;
          ppppppiStack_1ec = ppppppiStack_150;
          pcStack_1f4 = (char *)0x10914421;
          (*(code *)(*ppppiStack_158)[2])();
          ppppiStack_158 = (int ****)0x0;
        }
        pppppiStack_154 = (int *****)0x0;
      }
    }
    if (((uint)local_1ac >> 6 & 1) != 0) {
      ppppiStack_1f0 = &local_1b0;
      ppppppiStack_1ec = local_1a8;
      pcStack_1f4 = (char *)0x10914454;
      (*(code *)(*local_1b0)[2])();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10914690 @ 10914690  size=1663 ===== */
// calls: CPet::SetName, sprintf
// strings:
//   "nTaskShowCondition"
//   "nEntryPointID"
//   "strUIShowBossName"
//   "strDesc"
//   "nUIShowBossID"
//   "nLevelID"
//   "nDiffLev"
//   "nState"
//   "nNeedLev"
//   "strNeedQuest"
//   "strNeedOtherLevel"
//   "nRecord"
//   "nProposeLev"
//   "nProposePlayerNum"
//   "strProposeWeapon"
//   "strTargetDesc"
//   "strOtherTarget"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""nTaskShowCondition""
     ""nEntryPointID""
     ""strUIShowBossName""
     ""strDesc""
     ""nUIShowBossID""
     ""nLevelID""
     ""nDiffLev""
     ""nState""
     ""nNeedLev""
     ""strNeedQuest"" */

void FUN_10914690(undefined4 param_1,int ***param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int **ppiVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iStack_dc;
  int *local_d8;
  uint local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int iStack_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  undefined4 local_b4;
  int **local_b0;
  int **ppiStack_ac;
  int **ppiStack_a8;
  int **ppiStack_a4;
  int iStack_a0;
  int ***local_9c;
  int ***apppiStack_98 [4];
  undefined4 ***pppuStack_88;
  undefined4 ***apppuStack_84 [4];
  undefined4 ***pppuStack_74;
  undefined4 ***pppuStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [20];
  undefined1 *puStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int iStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_dc;
  local_9c = param_2;
  if (param_5 == 3) {
    uVar2 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar2 == 3) || (iVar10 = -0x21524151, uVar2 == 4)) {
      iVar10 = *(int *)(param_4 + 8);
    }
    local_bc = *(int **)(param_4 + 0x1c);
    local_b4 = *(undefined4 *)(param_4 + 0x24);
    local_b8 = *(int **)(param_4 + 0x20);
    local_b0 = *(int ***)(param_4 + 0x28);
    local_c0 = (int *)0x0;
    if (((uint)local_bc >> 6 & 1) != 0) {
      local_c0 = *(int **)(param_4 + 0x18);
      (**(code **)(*local_c0 + 4))(&local_c0,local_b8);
    }
    local_d4 = *(uint *)(param_4 + 0x34);
    local_cc = *(int *)(param_4 + 0x3c);
    local_d0 = *(undefined4 *)(param_4 + 0x38);
    local_c8 = *(undefined4 *)(param_4 + 0x40);
    local_d8 = (int *)0x0;
    if ((local_d4 >> 6 & 1) != 0) {
      local_d8 = *(int **)(param_4 + 0x30);
      (**(code **)(*local_d8 + 4))(&local_d8,local_d0);
    }
    iStack_a0 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    if (iStack_a0 != 0) {
      iVar3 = FUN_10912db0(**(undefined4 **)(iStack_a0 + 0x2d2c));
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + 0x1c);
        iStack_dc = iVar3 + 0x14;
        if (iVar9 != iStack_dc) {
          do {
            FUN_10914470(iVar9 + 0x14);
            uVar2 = 0;
            uVar7 = iStack_3c - iStack_40 >> 2;
            if (uVar7 != 0) {
              do {
                if (*(int *)(iStack_40 + uVar2 * 4) == iVar10) {
                  FUN_104d1550("nTaskShowCondition",uStack_34);
                  FUN_104d1550("nEntryPointID",uStack_68);
                  if (iStack_2c != 0) {
                    FUN_10c3da30(iStack_2c);
                  }
                  iStack_2c = 0;
                  if (iStack_40 != 0) {
                    FUN_10c3d5d0(iStack_40);
                  }
                  if ((puStack_44 != auStack_58) && (puStack_44 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_44);
                  }
                  goto LAB_10914909;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < uVar7);
            }
            if (iStack_2c != 0) {
              FUN_10c3da30(iStack_2c);
            }
            iStack_2c = 0;
            if (iStack_40 != 0) {
              FUN_10c3d5d0(iStack_40);
            }
            if ((puStack_44 != auStack_58) && (puStack_44 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_44);
            }
            iVar3 = *(int *)(iVar9 + 0xc);
            if (iVar3 == 0) {
              iVar3 = *(int *)(iVar9 + 4);
              if (iVar9 == *(int *)(iVar3 + 0xc)) {
                do {
                  iVar9 = iVar3;
                  iVar3 = *(int *)(iVar9 + 4);
                } while (iVar9 == *(int *)(iVar3 + 0xc));
              }
              if (*(int *)(iVar9 + 0xc) != iVar3) {
                iVar9 = iVar3;
              }
            }
            else {
              for (iVar1 = *(int *)(iVar3 + 8); iVar9 = iVar3, iVar1 != 0;
                  iVar1 = *(int *)(iVar1 + 8)) {
                iVar3 = iVar1;
              }
            }
          } while (iVar9 != iStack_dc);
        }
      }
LAB_10914909:
      ppiVar4 = (int **)FUN_107d7930(iVar10);
      ppiStack_a4 = ppiVar4;
      if (ppiVar4 != (int **)0x0) {
        pppuStack_88 = apppiStack_98;
        apppiStack_98[0] = (int ***)((uint)apppiStack_98[0] & 0xffffff00);
        apppuStack_84[0] = pppuStack_88;
        FUN_100e5aa0(pppuStack_88);
        FUN_104d1670("strUIShowBossName",pppuStack_88);
        if (((int ****)pppuStack_88 != &local_9c) && ((int ****)pppuStack_88 != (int ****)0x0)) {
          FUN_10c3d5d0(pppuStack_88);
        }
        piVar8 = (int *)&DAT_11d9d32b;
        if (ppiVar4[0x18] != (int *)0x0) {
          piVar8 = ppiVar4[0x18];
        }
        FUN_104d1670("strDesc",piVar8);
        FUN_104d1550("nUIShowBossID",ppiVar4[0x1e]);
        FUN_104d1550("nLevelID",iVar10);
        FUN_104d1550("nDiffLev",ppiVar4[0xc]);
        piVar8 = ppiVar4[0x10];
        uVar5 = FUN_10914e90(piVar8,iVar10);
        FUN_104d1550("nState",uVar5);
        FUN_104d1550("nNeedLev",0);
        FUN_10914d40(&stack0xffffff18,ppiVar4 + 0x10);
        local_9c = &ppiStack_ac;
        ppiStack_ac = (int **)((uint)ppiStack_ac & 0xffffff00);
        apppiStack_98[0] = local_9c;
        FUN_100e5aa0(local_9c);
        FUN_104d1670("strNeedQuest",local_9c);
        if ((local_9c != &local_b0) && (local_9c != (int ***)0x0)) {
          FUN_10c3d5d0(local_9c);
        }
        if (piVar8 != (int *)0x0) {
          FUN_10c3da30(piVar8);
        }
        CPet__SetName(&DAT_11d9d32b);
        iVar3 = FUN_117e7460(7);
        if (iVar3 != 0) {
          FUN_10914db0(iVar3);
        }
        ppiStack_a8 = &local_b8;
        local_b8 = (int *)((uint)local_b8 & 0xffffff00);
        ppiStack_a4 = ppiStack_a8;
        FUN_100e5aa0(ppiStack_a8);
        FUN_104d1670("strNeedOtherLevel",ppiStack_a8);
        if ((ppiStack_a8 != &local_bc) && (ppiStack_a8 != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_a8);
        }
        if ((*(int *)(iStack_c4 + 0x2b88) == 0) || (iVar3 = FUN_114cd4a0(iVar10), iVar3 == 0)) {
          iVar3 = 0;
        }
        FUN_104d1550("nRecord",iVar3);
        FUN_104d1550("nProposeLev",ppiVar4[0x1a]);
        FUN_104d1550("nProposePlayerNum",ppiVar4[0x1b]);
        local_bc = (int *)((uint)local_bc & 0xffffff00);
        ppiStack_ac = &local_bc;
        ppiStack_a8 = ppiStack_ac;
        FUN_100e5aa0(ppiStack_ac);
        FUN_104d1670("strProposeWeapon",ppiStack_ac);
        if ((ppiStack_ac != &local_c0) && (ppiStack_ac != (int **)0x0)) {
          FUN_10c3d5d0(ppiStack_ac);
        }
        uVar5 = FUN_117388f0(iVar10,0);
        puVar6 = &DAT_11d9d32b;
        if (*(undefined1 **)(local_cc + 0x74) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(local_cc + 0x74);
        }
        FUN_104d1670("strTargetDesc",puVar6);
        iVar10 = FUN_117380d0(uVar5);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) != *(int *)(iVar10 + 0x20))) &&
           (iVar9 = *(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c), uVar2 = 0,
           iVar3 = iVar9 >> 0x1f, iVar9 / 0x54 + iVar3 != iVar3)) {
          iVar3 = 0;
          do {
            if (0x1a3 < iVar3) break;
            uVar2 = uVar2 + 1;
            sprintf((char *)apppiStack_98,"%s%d","strOtherTarget",uVar2);
            FUN_10914570(*(int *)(iVar10 + 0x1c) + iVar3);
            pppuStack_74 = apppuStack_84;
            apppuStack_84[0] = (undefined4 ***)((uint)apppuStack_84[0] & 0xffffff00);
            pppuStack_70 = pppuStack_74;
            FUN_100e5aa0(pppuStack_74);
            FUN_104d1670(&iStack_a0,pppuStack_74);
            if (((undefined4 ****)pppuStack_74 != &pppuStack_88) &&
               ((undefined4 ****)pppuStack_74 != (undefined4 ****)0x0)) {
              FUN_10c3d5d0(pppuStack_74);
            }
            FUN_11736f30();
            iVar3 = iVar3 + 0x54;
          } while (uVar2 < (uint)((*(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c)) / 0x54));
        }
        if (iStack_dc != 0) {
          FUN_10c3da30(iStack_dc);
        }
      }
    }
    if ((local_d4 >> 6 & 1) != 0) {
      (**(code **)(*local_d8 + 8))(&local_d8,local_d0);
      local_d8 = (int *)0x0;
    }
    local_d4 = 0;
    if (((uint)local_bc >> 6 & 1) != 0) {
      (**(code **)(*local_c0 + 8))(&local_c0,local_b8);
    }
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



/* ===== FUN_10947d90 @ 10947d90  size=776 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "_requestHunterRoadData"
//   "_requestHunterRoadMapData"
//   "_requestHunterRoadGetGift"
//   "_requestHunterRoadContribution"
//   "LEVEL_FILTER_CONDITION_CLASS"
//   "maxValue"
//   "minValue"
//   "groupID"
//   "localPlayerLevel"

/* WARNING: Removing unreachable block (ram,0x1094807d) */
/* [RE-AUTO c0]
   strings:
     ""_requestHunterRoadData""
     ""_requestHunterRoadMapData""
     ""_requestHunterRoadGetGift""
     ""_requestHunterRoadContribution""
     ""LEVEL_FILTER_CONDITION_CLASS""
     ""maxValue""
     ""minValue""
     ""groupID""
     ""localPlayerLevel"" */

void FUN_10947d90(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_stack_00000010;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piStack_70;
  int *local_68;
  uint local_64;
  int *local_60;
  uint local_5c;
  undefined4 local_58 [2];
  int *local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  int *piStack_30;
  uint uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_68 = (int *)0x0;
  local_64 = in_stack_00000010[1];
  local_5c = in_stack_00000010[3];
  local_60 = (int *)in_stack_00000010[2];
  local_58[0] = in_stack_00000010[4];
  if ((local_64 >> 6 & 1) != 0) {
    local_68 = (int *)*in_stack_00000010;
    (**(code **)(*local_68 + 4))(&local_68,local_60);
  }
  local_4c = in_stack_00000010[7];
  local_44 = in_stack_00000010[9];
  local_48 = (int *)in_stack_00000010[8];
  local_40 = in_stack_00000010[10];
  local_50 = (int *)0x0;
  if ((local_4c >> 6 & 1) != 0) {
    local_50 = (int *)in_stack_00000010[6];
    (**(code **)(*local_50 + 4))(&local_50,local_48);
  }
  FUN_104d13b0("_requestHunterRoadData",CSpoorTaskUIModel__BuildEventList);
  FUN_104d13b0("_requestHunterRoadMapData",FUN_10948890);
  FUN_104d13b0("_requestHunterRoadGetGift",FUN_10948ae0);
  FUN_104d13b0("_requestHunterRoadContribution",CSpoorTaskUIModel__BuildRewardList);
  uStack_20 = 0;
  uStack_1c = 0;
  cVar1 = (**(code **)(*local_68 + 0x10))
                    (local_60,"LEVEL_FILTER_CONDITION_CLASS",&uStack_20,
                     ((byte)local_64 & 0x8f) == 10);
  if ((cVar1 != '\0') && (((byte)uStack_2c & 0x8f) == 6)) {
    puVar8 = puStack_28;
    if ((uStack_2c >> 6 & 1) != 0) {
      puVar8 = (undefined4 *)*puStack_28;
    }
    iVar2 = FUN_10947530();
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_109474a0(iVar5);
        if (piVar3 != (int *)0x0) {
          local_48 = (int *)0x0;
          local_44 = 0;
          FUN_11a98de0(&local_48,puVar8,0,0);
          iVar6 = piVar3[5];
          FUN_104d1550("maxValue",piVar3[6]);
          iVar7 = piVar3[6];
          FUN_104d1550("minValue",piVar3[5]);
          uVar4 = (**(code **)(*piVar3 + 0x18))();
          FUN_104d1550("groupID",uVar4);
          (**(code **)(*piStack_70 + 0x3c))(local_68,local_58);
          if ((local_44 >> 6 & 1) != 0) {
            (**(code **)(*local_48 + 8))(&local_48,local_40,iVar6,iVar7);
            local_48 = (int *)0x0;
          }
          local_44 = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar3 + 0xb4))(), iVar2 != 0)) {
    uVar4 = CPlayer__GetHuntRankOrCount();
    FUN_104d1550("localPlayerLevel",uVar4);
  }
  if ((uStack_2c >> 6 & 1) != 0) {
    (**(code **)(*piStack_30 + 8))(&piStack_30,puStack_28);
    piStack_30 = (int *)0x0;
  }
  uStack_2c = 0;
  if ((local_5c >> 6 & 1) != 0) {
    (**(code **)(*local_60 + 8))(&local_60,local_58[0]);
  }
  return;
}



