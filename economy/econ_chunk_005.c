/* ===== FUN_10845600 @ 10845600  size=823 ===== */
// strings:
//   "currencyGuildValue"
//   "currencyFarmValue"
//   "currencyClanMoney"
//   "currencyClanMoneyPvp"
//   "currencyCatMoney"
//   "currencyPvpMoney"
//   "shopLibType"
//   "nextResetTime"
//   "currentTime"
//   "resetBindCredit"
//   "resetCredit"

/* [RE-AUTO c0]
   strings:
     ""currencyGuildValue""
     ""currencyFarmValue""
     ""currencyClanMoney""
     ""currencyClanMoneyPvp""
     ""currencyCatMoney""
     ""currencyPvpMoney""
     ""shopLibType""
     ""nextResetTime""
     ""currentTime""
     ""resetBindCredit"" */

void __fastcall FUN_10845600(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  iVar5 = 0;
  local_c = param_2;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 != 0)) {
    iVar5 = iVar2;
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0 ||
      ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0))))))
  {
    local_18 = 0;
  }
  else {
    local_18 = FUN_114b7530(1);
  }
  if ((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) ||
     ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0)))) {
    local_14 = (ulonglong)(uint)local_14;
  }
  else {
    uVar3 = FUN_114b7530(2);
    local_14 = CONCAT44(uVar3,(uint)local_14);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0 ||
      ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0))))))
  {
    local_20 = 0;
  }
  else {
    local_20 = FUN_114b7530(3);
  }
  if ((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) ||
     ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0)))) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_114b7530(4);
  }
  if (((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
     ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0 ||
      ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0))))))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_114b7530(5);
  }
  if ((((DAT_1202e818 == 0) || (*(int *)(DAT_1202e818 + 0xd0) == 0)) ||
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 == (int *)0x0)) ||
     ((iVar2 = (**(code **)(*piVar1 + 0xb4))(), iVar2 == 0 || (*(int *)(iVar2 + 0x2afc) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_114b7530(6);
  }
  FUN_104d1550("currencyGuildValue",local_14._4_4_);
  FUN_104d1550("currencyFarmValue",local_18);
  FUN_104d1550("currencyClanMoney",local_20);
  FUN_104d1550("currencyClanMoneyPvp",local_28);
  FUN_104d1550("currencyCatMoney",uVar3);
  FUN_104d1550("currencyPvpMoney",uVar4);
  uVar3 = DAT_1200acdc;
  if (param_4 == '\0') {
    uVar3 = *(undefined4 *)*param_3;
  }
  local_20 = *(undefined4 *)(iVar5 + 0x2afc);
  uVar4 = 0;
  _param_4 = 0;
  local_14 = 0;
  local_28 = 0;
  iVar5 = FUN_114b7910(uVar3);
  if (iVar5 == 0) {
    uVar3 = (uint)local_14;
  }
  else {
    local_18 = FUN_11721b50();
    uVar6 = FUN_11182210(uVar3);
    local_14 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),(uint)local_14);
    local_2c = 0;
    local_28 = 0;
    uVar3 = FUN_114b7650(&local_2c);
    FUN_11720a30(uVar3);
    _param_4 = local_28;
    local_28 = local_2c;
    uVar4 = local_18;
    uVar3 = (int)uVar6;
  }
  FUN_104d1550("shopLibType",uVar4);
  FUN_104d1550("nextResetTime",uVar3);
  uVar6 = FUN_111f8d20();
  local_20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_104d1550("currentTime",(int)uVar6);
  FUN_104d1550("resetBindCredit",_param_4);
  FUN_104d1550("resetCredit",local_28);
  return;
}



/* ===== FUN_10848370 @ 10848370  size=88 ===== */
// calls: CCurrencyInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CCurrencyInfo"

/* [RE-AUTO c0]
   calls: CCurrencyInfo::GetManagers
   strings:
     ""CCurrencyInfo"" */

undefined4 * FUN_10848370(void)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcefd4;
  puVar1 = (undefined4 *)CCurrencyInfo__GetManager();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CCurrencyInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bf3b4 & 1) == 0) {
        DAT_123bf3b4 = DAT_123bf3b4 | 1;
        FUN_10848b50();
        FUN_11a8911f(&LAB_11c726d0);
      }
      puVar1 = &DAT_123bf3f0;
    }
  }
  return puVar1;
}



/* ===== FUN_108570a0 @ 108570a0  size=4890 ===== */
// strings:
//   "Suite_Tipsdate"
//   "MHUI_WriteSystemLogInfoFromAs3"
//   "global_tipsUpdate"
//   "global_registerMHLogInfo"
//   "global_registerGetAttribute"
//   "global_registerGetStaticData"
//   "GetPetSkillItemInfo"
//   "GetPetSkillItemLimit"
//   "global_registerMessageString"
//   "global_GetUIOpenInfo"
//   "global_getEquipAdditionalInfo"
//   "MHUI_SetItemIconCursor"
//   "MHUI_SetItemIconCursorByName"
//   "MHUI_SetCursorType"
//   "MHUI_SetEquipPassiveSkillTips"
//   "MHUI_SetEquipRandPassiveSkillTips"
//   "MHUI_SetEquipRandPassiveSkillTipsByColGrid"
//   "MHUI_SetEquipAwakeningTips"
//   "MHUI_RegisteGetMessageResponsor"
//   "MHUI_RegisteCommonFunction"

/* [RE-AUTO c0]
   strings:
     ""Suite_Tipsdate""
     ""MHUI_WriteSystemLogInfoFromAs3""
     ""global_tipsUpdate""
     ""global_registerMHLogInfo""
     ""global_registerGetAttribute""
     ""global_registerGetStaticData""
     ""GetPetSkillItemInfo""
     ""GetPetSkillItemLimit""
     ""global_registerMessageString""
     ""global_GetUIOpenInfo"" */

void __fastcall FUN_108570a0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  code *pcStack_454;
  char *pcStack_450;
  code **ppcStack_44c;
  code ***pppcStack_448;
  code *pcStack_444;
  code **ppcStack_440;
  code ***pppcStack_43c;
  code ***pppcStack_438;
  code **ppcStack_434;
  code **ppcStack_430;
  code ***pppcStack_42c;
  code ***pppcStack_428;
  code ***pppcStack_424;
  code ***pppcStack_420;
  code ***pppcStack_41c;
  code ***pppcStack_418;
  code ***pppcStack_414;
  code ***pppcStack_410;
  code ***pppcStack_40c;
  code ***pppcStack_408;
  code ***pppcStack_404;
  code ***pppcStack_400;
  code ***pppcStack_3fc;
  code ***pppcStack_3f8;
  code ***pppcStack_3f4;
  code ***pppcStack_3f0;
  code ***pppcStack_3ec;
  code ***pppcStack_3e8;
  code ***pppcStack_3e4;
  code ***pppcStack_3e0;
  code ***pppcStack_3dc;
  code ***pppcStack_3d8;
  code ***pppcStack_3d4;
  code ***pppcStack_3d0;
  code ***pppcStack_3cc;
  code ***pppcStack_3c8;
  code ***pppcStack_3c4;
  code ***pppcStack_3c0;
  code ***pppcStack_3bc;
  code ***pppcStack_3b8;
  code ***pppcStack_3b4;
  code ***pppcStack_3b0;
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
  code ***pppcStack_338;
  code ***pppcStack_334;
  code ***pppcStack_330;
  code ***pppcStack_32c;
  code ***pppcStack_328;
  code ***pppcStack_324;
  code ***pppcStack_320;
  code ***pppcStack_31c;
  code ***pppcStack_318;
  code ***pppcStack_314;
  code ***pppcStack_310;
  code ***pppcStack_30c;
  code ***pppcStack_308;
  code ***pppcStack_304;
  code ***pppcStack_300;
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
  pppcStack_30 = (code ***)0x11dd0cb0;
  pppcStack_34 = (code ***)0x108570d4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10859000;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x108570e5;
  FUN_10866f40();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x108570fb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd0cae;
  pppcStack_40 = (code ***)0x11dd0c90;
  pppcStack_44 = (code ***)0x1085711b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_108596d0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1085712c;
  FUN_10866f40();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10857142;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd0de1;
  pppcStack_50 = (code ***)0x11dd0dd0;
  pppcStack_54 = (code ***)0x10857162;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10859750;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10857173;
  FUN_10866f40();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10857189;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd0dcc;
  pppcStack_60 = (code ***)0x11dd0db4;
  pppcStack_64 = (code ***)0x108571a9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_1085ef20;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x108571ba;
  FUN_10866f40();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x108571d0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd0db3;
  pppcStack_70 = (code ***)0x11dd0d98;
  pppcStack_74 = (code ***)0x108571f0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_1085f340;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10857201;
  FUN_10866f40();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x10857217;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd0d94;
  pppcStack_80 = (code ***)0x11dd0d78;
  pppcStack_84 = (code ***)0x10857237;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_1085f6d0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10857248;
  FUN_10866f40();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x1085725e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dd0d77;
  pppcStack_90 = (code ***)0x11dd0d64;
  pppcStack_94 = (code ***)0x1085727e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_10858e30;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1085728f;
  FUN_10866f40();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x108572a5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dd0d60;
  pppcStack_a0 = (code ***)0x11dd0d4c;
  pppcStack_a4 = (code ***)0x108572c5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_10858f30;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x108572d6;
  FUN_10866f40();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppcStack_b0 = (code ***)0x108572ec;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dd0d48;
  pppcStack_b0 = (code ***)0x11dd0d2c;
  pppcStack_b4 = (code ***)0x1085730c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)FUN_1085efb0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x1085731d;
  FUN_10866f40();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x10857333;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11dd0d28;
  pppcStack_c0 = (code ***)0x11dd0d14;
  pppcStack_c4 = (code ***)0x10857353;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_1085f040;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppcStack_cc = (code ***)0x10857364;
  FUN_10866f40();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pppcStack_d0 = (code ***)0x1085737a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd0ed9;
  pppcStack_d0 = (code ***)0x11dd0ebc;
  pppcStack_d4 = (code ***)0x1085739a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)FUN_1085c900;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x108573ab;
  FUN_10866f40();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppcStack_e0 = (code ***)0x108573c1;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dd0eba;
  pppcStack_e0 = (code ***)0x11dd0ea4;
  pppcStack_e4 = (code ***)0x108573e1;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppcStack_e4 = (code ***)FUN_10859e40;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  pppcStack_ec = (code ***)0x108573f2;
  FUN_10866f40();
  if (((code ****)pppcStack_d0 != &pppcStack_e4) && ((code ****)pppcStack_d0 != (code ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x10857408;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppcStack_e4;
  pppcStack_ec = (code ***)0x11dd0ea0;
  pppcStack_f0 = (code ***)0x11dd0e84;
  pppcStack_f4 = (code ***)0x10857428;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_10859e70;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppcStack_fc = (code ***)0x10857439;
  FUN_10866f40();
  if (((code ****)pppcStack_e0 != &pppcStack_f4) && ((code ****)pppcStack_e0 != (code ****)0x0)) {
    pppcStack_fc = pppcStack_e0;
    pppcStack_100 = (code ***)0x1085744f;
    FUN_10c3d5d0();
  }
  pppcStack_e4 = (code ***)&pppcStack_f4;
  pppcStack_fc = (code ***)0x11dd0e82;
  pppcStack_100 = (code ***)0x11dd0e70;
  pppcStack_104 = (code ***)0x1085746f;
  pppcStack_e0 = pppcStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)FUN_10859f20;
  pppcStack_108 = (code ***)&pppcStack_fc;
  pppcStack_10c = (code ***)0x10857480;
  FUN_10866f40();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x10857496;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dd0e6d;
  pppcStack_110 = (code ***)0x11dd0e50;
  pppcStack_114 = (code ***)0x108574b6;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_1085bcb0;
  pppcStack_118 = (code ***)&pppcStack_10c;
  pppcStack_11c = (code ***)0x108574c7;
  FUN_10866f40();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x108574dd;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd0e4d;
  pppcStack_120 = (code ***)0x11dd0e2c;
  pppcStack_124 = (code ***)0x108574fd;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_1085ab40;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x1085750e;
  FUN_10866f40();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x10857524;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dd0e2a;
  pppcStack_130 = (code ***)0x11dd0e00;
  pppcStack_134 = (code ***)0x10857544;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_1085b470;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x10857555;
  FUN_10866f40();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppcStack_140 = (code ***)0x1085756b;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dd0dfe;
  pppcStack_140 = (code ***)0x11dd0de4;
  pppcStack_144 = (code ***)0x1085758b;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppcStack_144 = (code ***)FUN_1085a3c0;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x1085759c;
  FUN_10866f40();
  if (((code ****)pppcStack_130 != &pppcStack_144) && ((code ****)pppcStack_130 != (code ****)0x0))
  {
    pppcStack_14c = pppcStack_130;
    pppcStack_150 = (code ***)0x108575b2;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppcStack_144;
  pppcStack_14c = (code ***)0x11dd0fc3;
  pppcStack_150 = (code ***)0x11dd0fa4;
  pppcStack_154 = (code ***)0x108575d2;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  pppcStack_154 = (code ***)FUN_1085c1b0;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppcStack_15c = (code ***)0x108575e3;
  FUN_10866f40();
  if (((code ****)pppcStack_140 != &pppcStack_154) && ((code ****)pppcStack_140 != (code ****)0x0))
  {
    pppcStack_15c = pppcStack_140;
    pppcStack_160 = (code ***)0x108575f9;
    FUN_10c3d5d0();
  }
  pppcStack_144 = (code ***)&pppcStack_154;
  pppcStack_15c = (code ***)0x11dd0fa2;
  pppcStack_160 = (code ***)0x11dd0f88;
  pppcStack_164 = (code ***)0x10857619;
  pppcStack_140 = pppcStack_144;
  FUN_100b62c0();
  pppcStack_164 = (code ***)FUN_1085f9b0;
  pppcStack_168 = (code ***)&pppcStack_15c;
  pppcStack_16c = (code ***)0x1085762a;
  FUN_10866f40();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pppcStack_170 = (code ***)0x10857640;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dd0f84;
  pppcStack_170 = (code ***)0x11dd0f64;
  pppcStack_174 = (code ***)0x10857660;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  pppcStack_174 = (code ***)FUN_1085c240;
  pppcStack_178 = (code ***)&pppcStack_16c;
  pppcStack_17c = (code ***)0x10857671;
  FUN_10866f40();
  if (((code ****)pppcStack_160 != &pppcStack_174) && ((code ****)pppcStack_160 != (code ****)0x0))
  {
    pppcStack_17c = pppcStack_160;
    pppcStack_180 = (code ***)0x10857687;
    FUN_10c3d5d0();
  }
  pppcStack_164 = (code ***)&pppcStack_174;
  pppcStack_17c = (code ***)0x11dd0f63;
  pppcStack_180 = (code ***)0x11dd0f40;
  pppcStack_184 = (code ***)0x108576a7;
  pppcStack_160 = pppcStack_164;
  FUN_100b62c0();
  pppcStack_184 = (code ***)FUN_1085f760;
  pppcStack_188 = (code ***)&pppcStack_17c;
  pppcStack_18c = (code ***)0x108576b8;
  FUN_10866f40();
  if (((code ****)pppcStack_170 != &pppcStack_184) && ((code ****)pppcStack_170 != (code ****)0x0))
  {
    pppcStack_18c = pppcStack_170;
    pppcStack_190 = (code ***)0x108576ce;
    FUN_10c3d5d0();
  }
  pppcStack_174 = (code ***)&pppcStack_184;
  pppcStack_18c = (code ***)0x11dd0f3c;
  pppcStack_190 = (code ***)0x11dd0f20;
  pppcStack_194 = (code ***)0x108576ee;
  pppcStack_170 = pppcStack_174;
  FUN_100b62c0();
  pppcStack_194 = (code ***)FUN_1085c2d0;
  pppcStack_198 = (code ***)&pppcStack_18c;
  pppcStack_19c = (code ***)0x108576ff;
  FUN_10866f40();
  if (((code ****)pppcStack_180 != &pppcStack_194) && ((code ****)pppcStack_180 != (code ****)0x0))
  {
    pppcStack_19c = pppcStack_180;
    pppcStack_1a0 = (code ***)0x10857715;
    FUN_10c3d5d0();
  }
  pppcStack_184 = (code ***)&pppcStack_194;
  pppcStack_19c = (code ***)0x11dd0f1e;
  pppcStack_1a0 = (code ***)0x11dd0f0c;
  pppcStack_1a4 = (code ***)0x10857735;
  pppcStack_180 = pppcStack_184;
  FUN_100b62c0();
  pppcStack_1a4 = (code ***)FUN_1085f860;
  pppcStack_1a8 = (code ***)&pppcStack_19c;
  pppcStack_1ac = (code ***)0x10857746;
  FUN_10866f40();
  if (((code ****)pppcStack_190 != &pppcStack_1a4) && ((code ****)pppcStack_190 != (code ****)0x0))
  {
    pppcStack_1ac = pppcStack_190;
    pppcStack_1b0 = (code ***)0x1085775c;
    FUN_10c3d5d0();
  }
  pppcStack_194 = (code ***)&pppcStack_1a4;
  pppcStack_1ac = (code ***)0x11dd0f09;
  pppcStack_1b0 = (code ***)0x11dd0ef8;
  pppcStack_1b4 = (code ***)0x1085777c;
  pppcStack_190 = pppcStack_194;
  FUN_100b62c0();
  pppcStack_1b4 = (code ***)FUN_1085f970;
  pppcStack_1b8 = (code ***)&pppcStack_1ac;
  pppcStack_1bc = (code ***)0x1085778d;
  FUN_10866f40();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pppcStack_1c0 = (code ***)0x108577a3;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dd0ef7;
  pppcStack_1c0 = (code ***)0x11dd0edc;
  pppcStack_1c4 = (code ***)0x108577c3;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  pppcStack_1c4 = (code ***)FUN_1085fcd0;
  pppcStack_1c8 = (code ***)&pppcStack_1bc;
  pppcStack_1cc = (code ***)0x108577d4;
  FUN_10866f40();
  if (((code ****)pppcStack_1b0 != &pppcStack_1c4) && ((code ****)pppcStack_1b0 != (code ****)0x0))
  {
    pppcStack_1cc = pppcStack_1b0;
    pppcStack_1d0 = (code ***)0x108577ea;
    FUN_10c3d5d0();
  }
  pppcStack_1b4 = (code ***)&pppcStack_1c4;
  pppcStack_1cc = (code ***)0x11dd10b6;
  pppcStack_1d0 = (code ***)0x11dd109c;
  pppcStack_1d4 = (code ***)0x1085780a;
  pppcStack_1b0 = pppcStack_1b4;
  FUN_100b62c0();
  pppcStack_1d4 = (code ***)FUN_1085fd30;
  pppcStack_1d8 = (code ***)&pppcStack_1cc;
  pppcStack_1dc = (code ***)0x1085781b;
  FUN_10866f40();
  if (((code ****)pppcStack_1c0 != &pppcStack_1d4) && ((code ****)pppcStack_1c0 != (code ****)0x0))
  {
    pppcStack_1dc = pppcStack_1c0;
    pppcStack_1e0 = (code ***)0x10857831;
    FUN_10c3d5d0();
  }
  pppcStack_1c4 = (code ***)&pppcStack_1d4;
  pppcStack_1dc = (code ***)0x11dd1098;
  pppcStack_1e0 = (code ***)0x11dd107c;
  pppcStack_1e4 = (code ***)0x10857851;
  pppcStack_1c0 = pppcStack_1c4;
  FUN_100b62c0();
  pppcStack_1e4 = (code ***)FUN_10860b90;
  pppcStack_1e8 = (code ***)&pppcStack_1dc;
  pppcStack_1ec = (code ***)0x10857862;
  FUN_10866f40();
  if (((code ****)pppcStack_1d0 != &pppcStack_1e4) && ((code ****)pppcStack_1d0 != (code ****)0x0))
  {
    pppcStack_1ec = pppcStack_1d0;
    pppcStack_1f0 = (code ***)0x10857878;
    FUN_10c3d5d0();
  }
  pppcStack_1d4 = (code ***)&pppcStack_1e4;
  pppcStack_1ec = (code ***)0x11dd107b;
  pppcStack_1f0 = (code ***)0x11dd1060;
  pppcStack_1f4 = (code ***)0x10857898;
  pppcStack_1d0 = pppcStack_1d4;
  FUN_100b62c0();
  pppcStack_1f4 = (code ***)FUN_10860df0;
  pppcStack_1f8 = (code ***)&pppcStack_1ec;
  pppcStack_1fc = (code ***)0x108578a9;
  FUN_10866f40();
  if (((code ****)pppcStack_1e0 != &pppcStack_1f4) && ((code ****)pppcStack_1e0 != (code ****)0x0))
  {
    pppcStack_1fc = pppcStack_1e0;
    pppcStack_200 = (code ***)0x108578bf;
    FUN_10c3d5d0();
  }
  pppcStack_1e4 = (code ***)&pppcStack_1f4;
  pppcStack_1fc = (code ***)0x11dd105d;
  pppcStack_200 = (code ***)0x11dd103c;
  pppcStack_204 = (code ***)0x108578df;
  pppcStack_1e0 = pppcStack_1e4;
  FUN_100b62c0();
  pppcStack_204 = (code ***)FUN_10860e70;
  pppcStack_208 = (code ***)&pppcStack_1fc;
  pppcStack_20c = (code ***)0x108578f0;
  FUN_10866f40();
  if (((code ****)pppcStack_1f0 != &pppcStack_204) && ((code ****)pppcStack_1f0 != (code ****)0x0))
  {
    pppcStack_20c = pppcStack_1f0;
    pppcStack_210 = (code ***)0x10857906;
    FUN_10c3d5d0();
  }
  pppcStack_1f4 = (code ***)&pppcStack_204;
  pppcStack_20c = (code ***)0x11dd103a;
  pppcStack_210 = (code ***)0x11dd101c;
  pppcStack_214 = (code ***)0x10857926;
  pppcStack_1f0 = pppcStack_1f4;
  FUN_100b62c0();
  pppcStack_214 = (code ***)FUN_10860ef0;
  pppcStack_218 = (code ***)&pppcStack_20c;
  pppcStack_21c = (code ***)0x10857937;
  FUN_10866f40();
  if (((code ****)pppcStack_200 != &pppcStack_214) && ((code ****)pppcStack_200 != (code ****)0x0))
  {
    pppcStack_21c = pppcStack_200;
    pppcStack_220 = (code ***)0x1085794d;
    FUN_10c3d5d0();
  }
  pppcStack_204 = (code ***)&pppcStack_214;
  pppcStack_21c = (code ***)0x11dd1018;
  pppcStack_220 = (code ***)0x11dd0ff4;
  pppcStack_224 = (code ***)0x1085796d;
  pppcStack_200 = pppcStack_204;
  FUN_100b62c0();
  pppcStack_224 = (code ***)FUN_10860f80;
  pppcStack_228 = (code ***)&pppcStack_21c;
  pppcStack_22c = (code ***)0x1085797e;
  FUN_10866f40();
  if (((code ****)pppcStack_210 != &pppcStack_224) && ((code ****)pppcStack_210 != (code ****)0x0))
  {
    pppcStack_22c = pppcStack_210;
    pppcStack_230 = (code ***)0x10857994;
    FUN_10c3d5d0();
  }
  pppcStack_214 = (code ***)&pppcStack_224;
  pppcStack_22c = (code ***)0x11dd0ff2;
  pppcStack_230 = (code ***)0x11dd0fdc;
  pppcStack_234 = (code ***)0x108579b4;
  pppcStack_210 = pppcStack_214;
  FUN_100b62c0();
  pppcStack_234 = (code ***)FUN_10861010;
  pppcStack_238 = (code ***)&pppcStack_22c;
  pppcStack_23c = (code ***)0x108579c5;
  FUN_10866f40();
  if (((code ****)pppcStack_220 != &pppcStack_234) && ((code ****)pppcStack_220 != (code ****)0x0))
  {
    pppcStack_23c = pppcStack_220;
    pppcStack_240 = (code ***)0x108579db;
    FUN_10c3d5d0();
  }
  pppcStack_224 = (code ***)&pppcStack_234;
  pppcStack_23c = (code ***)0x11dd0fda;
  pppcStack_240 = (code ***)0x11dd0fc4;
  pppcStack_244 = (code ***)0x108579fb;
  pppcStack_220 = pppcStack_224;
  FUN_100b62c0();
  pppcStack_244 = (code ***)FUN_108620a0;
  pppcStack_248 = (code ***)&pppcStack_23c;
  pppcStack_24c = (code ***)0x10857a0c;
  FUN_10866f40();
  if (((code ****)pppcStack_230 != &pppcStack_244) && ((code ****)pppcStack_230 != (code ****)0x0))
  {
    pppcStack_24c = pppcStack_230;
    pppcStack_250 = (code ***)0x10857a22;
    FUN_10c3d5d0();
  }
  pppcStack_234 = (code ***)&pppcStack_244;
  pppcStack_24c = (code ***)0x11dd1177;
  pppcStack_250 = (code ***)0x11dd1164;
  pppcStack_254 = (code ***)0x10857a42;
  pppcStack_230 = pppcStack_234;
  FUN_100b62c0();
  pppcStack_254 = (code ***)FUN_10861ff0;
  pppcStack_258 = (code ***)&pppcStack_24c;
  pppcStack_25c = (code ***)0x10857a53;
  FUN_10866f40();
  if (((code ****)pppcStack_240 != &pppcStack_254) && ((code ****)pppcStack_240 != (code ****)0x0))
  {
    pppcStack_25c = pppcStack_240;
    pppcStack_260 = (code ***)0x10857a69;
    FUN_10c3d5d0();
  }
  pppcStack_244 = (code ***)&pppcStack_254;
  pppcStack_25c = (code ***)0x11dd1163;
  pppcStack_260 = (code ***)0x11dd114c;
  pppcStack_264 = (code ***)0x10857a89;
  pppcStack_240 = pppcStack_244;
  FUN_100b62c0();
  pppcStack_264 = (code ***)FUN_10862070;
  pppcStack_268 = (code ***)&pppcStack_25c;
  pppcStack_26c = (code ***)0x10857a9a;
  FUN_10866f40();
  if (((code ****)pppcStack_250 != &pppcStack_264) && ((code ****)pppcStack_250 != (code ****)0x0))
  {
    pppcStack_26c = pppcStack_250;
    pppcStack_270 = (code ***)0x10857ab0;
    FUN_10c3d5d0();
  }
  pppcStack_254 = (code ***)&pppcStack_264;
  pppcStack_26c = (code ***)0x11dd1148;
  pppcStack_270 = (code ***)0x11dd1130;
  pppcStack_274 = (code ***)0x10857ad0;
  pppcStack_250 = pppcStack_254;
  FUN_100b62c0();
  pppcStack_274 = (code ***)FUN_10863ca0;
  pppcStack_278 = (code ***)&pppcStack_26c;
  pppcStack_27c = (code ***)0x10857ae1;
  FUN_10866f40();
  if (((code ****)pppcStack_260 != &pppcStack_274) && ((code ****)pppcStack_260 != (code ****)0x0))
  {
    pppcStack_27c = pppcStack_260;
    pppcStack_280 = (code ***)0x10857af7;
    FUN_10c3d5d0();
  }
  pppcStack_264 = (code ***)&pppcStack_274;
  pppcStack_27c = (code ***)0x11dd112c;
  pppcStack_280 = (code ***)0x11dd1118;
  pppcStack_284 = (code ***)0x10857b17;
  pppcStack_260 = pppcStack_264;
  FUN_100b62c0();
  pppcStack_284 = (code ***)FUN_10860160;
  pppcStack_288 = (code ***)&pppcStack_27c;
  pppcStack_28c = (code ***)0x10857b28;
  FUN_10866f40();
  if (((code ****)pppcStack_270 != &pppcStack_284) && ((code ****)pppcStack_270 != (code ****)0x0))
  {
    pppcStack_28c = pppcStack_270;
    pppcStack_290 = (code ***)0x10857b3e;
    FUN_10c3d5d0();
  }
  pppcStack_274 = (code ***)&pppcStack_284;
  pppcStack_28c = (code ***)0x11dd1116;
  pppcStack_290 = (code ***)0x11dd1108;
  pppcStack_294 = (code ***)0x10857b5e;
  pppcStack_270 = pppcStack_274;
  FUN_100b62c0();
  pppcStack_294 = (code ***)FUN_10858af0;
  pppcStack_298 = (code ***)&pppcStack_28c;
  pppcStack_29c = (code ***)0x10857b6f;
  FUN_10866f40();
  if (((code ****)pppcStack_280 != &pppcStack_294) && ((code ****)pppcStack_280 != (code ****)0x0))
  {
    pppcStack_29c = pppcStack_280;
    pppcStack_2a0 = (code ***)0x10857b85;
    FUN_10c3d5d0();
  }
  pppcStack_284 = (code ***)&pppcStack_294;
  pppcStack_29c = (code ***)0x11dd1105;
  pppcStack_2a0 = (code ***)0x11dd10f0;
  pppcStack_2a4 = (code ***)0x10857ba5;
  pppcStack_280 = pppcStack_284;
  FUN_100b62c0();
  pppcStack_2a4 = (code ***)FUN_108583c0;
  pppcStack_2a8 = (code ***)&pppcStack_29c;
  pppcStack_2ac = (code ***)0x10857bb6;
  FUN_10866f40();
  if (((code ****)pppcStack_290 != &pppcStack_2a4) && ((code ****)pppcStack_290 != (code ****)0x0))
  {
    pppcStack_2ac = pppcStack_290;
    pppcStack_2b0 = (code ***)0x10857bcc;
    FUN_10c3d5d0();
  }
  pppcStack_294 = (code ***)&pppcStack_2a4;
  pppcStack_2ac = (code ***)0x11dd10ed;
  pppcStack_2b0 = (code ***)0x11dd10d8;
  pppcStack_2b4 = (code ***)0x10857bec;
  pppcStack_290 = pppcStack_294;
  FUN_100b62c0();
  pppcStack_2b4 = (code ***)FUN_1085fd90;
  pppcStack_2b8 = (code ***)&pppcStack_2ac;
  pppcStack_2bc = (code ***)0x10857bfd;
  FUN_10866f40();
  if (((code ****)pppcStack_2a0 != &pppcStack_2b4) && ((code ****)pppcStack_2a0 != (code ****)0x0))
  {
    pppcStack_2bc = pppcStack_2a0;
    pppcStack_2c0 = (code ***)0x10857c13;
    FUN_10c3d5d0();
  }
  pppcStack_2a4 = (code ***)&pppcStack_2b4;
  pppcStack_2bc = (code ***)0x11dd10d4;
  pppcStack_2c0 = (code ***)0x11dd10b8;
  pppcStack_2c4 = (code ***)0x10857c33;
  pppcStack_2a0 = pppcStack_2a4;
  FUN_100b62c0();
  pppcStack_2c4 = (code ***)FUN_1085ff00;
  pppcStack_2c8 = (code ***)&pppcStack_2bc;
  pppcStack_2cc = (code ***)0x10857c44;
  FUN_10866f40();
  if (((code ****)pppcStack_2b0 != &pppcStack_2c4) && ((code ****)pppcStack_2b0 != (code ****)0x0))
  {
    pppcStack_2cc = pppcStack_2b0;
    pppcStack_2d0 = (code ***)0x10857c5a;
    FUN_10c3d5d0();
  }
  pppcStack_2b4 = (code ***)&pppcStack_2c4;
  pppcStack_2cc = (code ***)0x11dd123e;
  pppcStack_2d0 = (code ***)0x11dd122c;
  pppcStack_2d4 = (code ***)0x10857c7a;
  pppcStack_2b0 = pppcStack_2b4;
  FUN_100b62c0();
  pppcStack_2d4 = (code ***)FUN_108604d0;
  pppcStack_2d8 = (code ***)&pppcStack_2cc;
  pppcStack_2dc = (code ***)0x10857c8b;
  FUN_10866f40();
  if (((code ****)pppcStack_2c0 != &pppcStack_2d4) && ((code ****)pppcStack_2c0 != (code ****)0x0))
  {
    pppcStack_2dc = pppcStack_2c0;
    pppcStack_2e0 = (code ***)0x10857ca1;
    FUN_10c3d5d0();
  }
  pppcStack_2c4 = (code ***)&pppcStack_2d4;
  pppcStack_2dc = (code ***)0x11dd122a;
  pppcStack_2e0 = (code ***)0x11dd1218;
  pppcStack_2e4 = (code ***)0x10857cc1;
  pppcStack_2c0 = pppcStack_2c4;
  FUN_100b62c0();
  pppcStack_2e4 = (code ***)FUN_10860530;
  pppcStack_2e8 = (code ***)&pppcStack_2dc;
  pppcStack_2ec = (code ***)0x10857cd2;
  FUN_10866f40();
  if (((code ****)pppcStack_2d0 != &pppcStack_2e4) && ((code ****)pppcStack_2d0 != (code ****)0x0))
  {
    pppcStack_2ec = pppcStack_2d0;
    pppcStack_2f0 = (code ***)0x10857ce8;
    FUN_10c3d5d0();
  }
  pppcStack_2d4 = (code ***)&pppcStack_2e4;
  pppcStack_2ec = (code ***)0x11dd1214;
  pppcStack_2f0 = (code ***)0x11dd11f4;
  pppcStack_2f4 = (code ***)0x10857d08;
  pppcStack_2d0 = pppcStack_2d4;
  FUN_100b62c0();
  pppcStack_2f4 = (code ***)FUN_108606b0;
  pppcStack_2f8 = (code ***)&pppcStack_2ec;
  pppcStack_2fc = (code ***)0x10857d19;
  FUN_10866f40();
  if (((code ****)pppcStack_2e0 != &pppcStack_2f4) && ((code ****)pppcStack_2e0 != (code ****)0x0))
  {
    pppcStack_2fc = pppcStack_2e0;
    pppcStack_300 = (code ***)0x10857d2f;
    FUN_10c3d5d0();
  }
  pppcStack_2e4 = (code ***)&pppcStack_2f4;
  pppcStack_2fc = (code ***)0x11dd11f2;
  pppcStack_300 = (code ***)0x11dd11d4;
  pppcStack_304 = (code ***)0x10857d4f;
  pppcStack_2e0 = pppcStack_2e4;
  FUN_100b62c0();
  pppcStack_304 = (code ***)FUN_108606f0;
  pppcStack_308 = (code ***)&pppcStack_2fc;
  pppcStack_30c = (code ***)0x10857d60;
  FUN_10866f40();
  if (((code ****)pppcStack_2f0 != &pppcStack_304) && ((code ****)pppcStack_2f0 != (code ****)0x0))
  {
    pppcStack_30c = pppcStack_2f0;
    pppcStack_310 = (code ***)0x10857d76;
    FUN_10c3d5d0();
  }
  pppcStack_2f4 = (code ***)&pppcStack_304;
  pppcStack_30c = (code ***)0x11dd11d1;
  pppcStack_310 = (code ***)0x11dd11c4;
  pppcStack_314 = (code ***)0x10857d96;
  pppcStack_2f0 = pppcStack_2f4;
  FUN_100b62c0();
  pppcStack_314 = (code ***)FUN_108626b0;
  pppcStack_318 = (code ***)&pppcStack_30c;
  pppcStack_31c = (code ***)0x10857da7;
  FUN_10866f40();
  if (((code ****)pppcStack_300 != &pppcStack_314) && ((code ****)pppcStack_300 != (code ****)0x0))
  {
    pppcStack_31c = pppcStack_300;
    pppcStack_320 = (code ***)0x10857dbd;
    FUN_10c3d5d0();
  }
  pppcStack_304 = (code ***)&pppcStack_314;
  pppcStack_31c = (code ***)0x11dd11c2;
  pppcStack_320 = (code ***)0x11dd11ac;
  pppcStack_324 = (code ***)0x10857ddd;
  pppcStack_300 = pppcStack_304;
  FUN_100b62c0();
  pppcStack_324 = (code ***)FUN_10862710;
  pppcStack_328 = (code ***)&pppcStack_31c;
  pppcStack_32c = (code ***)0x10857dee;
  FUN_10866f40();
  if (((code ****)pppcStack_310 != &pppcStack_324) && ((code ****)pppcStack_310 != (code ****)0x0))
  {
    pppcStack_32c = pppcStack_310;
    pppcStack_330 = (code ***)0x10857e04;
    FUN_10c3d5d0();
  }
  pppcStack_314 = (code ***)&pppcStack_324;
  pppcStack_32c = (code ***)0x11dd11a9;
  pppcStack_330 = (code ***)0x11dd1190;
  pppcStack_334 = (code ***)0x10857e24;
  pppcStack_310 = pppcStack_314;
  FUN_100b62c0();
  pppcStack_334 = (code ***)FUN_10863600;
  pppcStack_338 = (code ***)&pppcStack_32c;
  pppcStack_33c = (code ***)0x10857e35;
  FUN_10866f40();
  if (((code ****)pppcStack_320 != &pppcStack_334) && ((code ****)pppcStack_320 != (code ****)0x0))
  {
    pppcStack_33c = pppcStack_320;
    pppcStack_340 = (code ***)0x10857e4b;
    FUN_10c3d5d0();
  }
  pppcStack_324 = (code ***)&pppcStack_334;
  pppcStack_33c = (code ***)0x11dd118f;
  pppcStack_340 = (code ***)0x11dd1178;
  pppcStack_344 = (code ***)0x10857e6b;
  pppcStack_320 = pppcStack_324;
  FUN_100b62c0();
  pppcStack_344 = (code ***)FUN_108636b0;
  pppcStack_348 = (code ***)&pppcStack_33c;
  pppcStack_34c = (code ***)0x10857e7c;
  FUN_10866f40();
  if (((code ****)pppcStack_330 != &pppcStack_344) && ((code ****)pppcStack_330 != (code ****)0x0))
  {
    pppcStack_34c = pppcStack_330;
    pppcStack_350 = (code ***)0x10857e92;
    FUN_10c3d5d0();
  }
  pppcStack_334 = (code ***)&pppcStack_344;
  pppcStack_34c = (code ***)0x11dd1303;
  pppcStack_350 = (code ***)0x11dd12f0;
  pppcStack_354 = (code ***)0x10857eb2;
  pppcStack_330 = pppcStack_334;
  FUN_100b62c0();
  pppcStack_354 = (code ***)FUN_108639e0;
  pppcStack_358 = (code ***)&pppcStack_34c;
  pppcStack_35c = (code ***)0x10857ec3;
  FUN_10866f40();
  if (((code ****)pppcStack_340 != &pppcStack_354) && ((code ****)pppcStack_340 != (code ****)0x0))
  {
    pppcStack_35c = pppcStack_340;
    pppcStack_360 = (code ***)0x10857ed9;
    FUN_10c3d5d0();
  }
  pppcStack_344 = (code ***)&pppcStack_354;
  pppcStack_35c = (code ***)0x11dd12ef;
  pppcStack_360 = (code ***)0x11dd12d4;
  pppcStack_364 = (code ***)0x10857ef9;
  pppcStack_340 = pppcStack_344;
  FUN_100b62c0();
  pppcStack_364 = (code ***)FUN_10863bc0;
  pppcStack_368 = (code ***)&pppcStack_35c;
  pppcStack_36c = (code ***)0x10857f0a;
  FUN_10866f40();
  if (((code ****)pppcStack_350 != &pppcStack_364) && ((code ****)pppcStack_350 != (code ****)0x0))
  {
    pppcStack_36c = pppcStack_350;
    pppcStack_370 = (code ***)0x10857f20;
    FUN_10c3d5d0();
  }
  pppcStack_354 = (code ***)&pppcStack_364;
  pppcStack_36c = (code ***)0x11dd12d3;
  pppcStack_370 = (code ***)0x11dd12b8;
  pppcStack_374 = (code ***)0x10857f40;
  pppcStack_350 = pppcStack_354;
  FUN_100b62c0();
  pppcStack_374 = (code ***)FUN_10864210;
  pppcStack_378 = (code ***)&pppcStack_36c;
  pppcStack_37c = (code ***)0x10857f51;
  FUN_10866f40();
  if (((code ****)pppcStack_360 != &pppcStack_374) && ((code ****)pppcStack_360 != (code ****)0x0))
  {
    pppcStack_37c = pppcStack_360;
    pppcStack_380 = (code ***)0x10857f67;
    FUN_10c3d5d0();
  }
  pppcStack_364 = (code ***)&pppcStack_374;
  pppcStack_37c = (code ***)0x11dd12b5;
  pppcStack_380 = (code ***)0x11dd12a0;
  pppcStack_384 = (code ***)0x10857f87;
  pppcStack_360 = pppcStack_364;
  FUN_100b62c0();
  pppcStack_384 = (code ***)FUN_10864360;
  pppcStack_388 = (code ***)&pppcStack_37c;
  pppcStack_38c = (code ***)0x10857f98;
  FUN_10866f40();
  if (((code ****)pppcStack_370 != &pppcStack_384) && ((code ****)pppcStack_370 != (code ****)0x0))
  {
    pppcStack_38c = pppcStack_370;
    pppcStack_390 = (code ***)0x10857fae;
    FUN_10c3d5d0();
  }
  pppcStack_374 = (code ***)&pppcStack_384;
  pppcStack_38c = (code ***)0x11dd129e;
  pppcStack_390 = (code ***)0x11dd1288;
  pppcStack_394 = (code ***)0x10857fce;
  pppcStack_370 = pppcStack_374;
  FUN_100b62c0();
  pppcStack_394 = (code ***)FUN_10864530;
  pppcStack_398 = (code ***)&pppcStack_38c;
  pppcStack_39c = (code ***)0x10857fdf;
  FUN_10866f40();
  if (((code ****)pppcStack_380 != &pppcStack_394) && ((code ****)pppcStack_380 != (code ****)0x0))
  {
    pppcStack_39c = pppcStack_380;
    pppcStack_3a0 = (code ***)0x10857ff5;
    FUN_10c3d5d0();
  }
  pppcStack_384 = (code ***)&pppcStack_394;
  pppcStack_39c = (code ***)0x11dd1287;
  pppcStack_3a0 = (code ***)0x11dd1274;
  pppcStack_3a4 = (code ***)0x10858015;
  pppcStack_380 = pppcStack_384;
  FUN_100b62c0();
  pppcStack_3a4 = (code ***)FUN_108645f0;
  pppcStack_3a8 = (code ***)&pppcStack_39c;
  pppcStack_3ac = (code ***)0x10858026;
  FUN_10866f40();
  if (((code ****)pppcStack_390 != &pppcStack_3a4) && ((code ****)pppcStack_390 != (code ****)0x0))
  {
    pppcStack_3ac = pppcStack_390;
    pppcStack_3b0 = (code ***)0x1085803c;
    FUN_10c3d5d0();
  }
  pppcStack_394 = (code ***)&pppcStack_3a4;
  pppcStack_3ac = (code ***)0x11dd1270;
  pppcStack_3b0 = (code ***)0x11dd125c;
  pppcStack_3b4 = (code ***)0x1085805c;
  pppcStack_390 = pppcStack_394;
  FUN_100b62c0();
  pppcStack_3b4 = (code ***)FUN_10864a10;
  pppcStack_3b8 = (code ***)&pppcStack_3ac;
  pppcStack_3bc = (code ***)0x1085806d;
  FUN_10866f40();
  if (((code ****)pppcStack_3a0 != &pppcStack_3b4) && ((code ****)pppcStack_3a0 != (code ****)0x0))
  {
    pppcStack_3bc = pppcStack_3a0;
    pppcStack_3c0 = (code ***)0x10858083;
    FUN_10c3d5d0();
  }
  pppcStack_3a4 = (code ***)&pppcStack_3b4;
  pppcStack_3bc = (code ***)0x11dd1258;
  pppcStack_3c0 = (code ***)0x11dd1240;
  pppcStack_3c4 = (code ***)0x108580a3;
  pppcStack_3a0 = pppcStack_3a4;
  FUN_100b62c0();
  pppcStack_3c4 = (code ***)FUN_10865c50;
  pppcStack_3c8 = (code ***)&pppcStack_3bc;
  pppcStack_3cc = (code ***)0x108580b4;
  FUN_10866f40();
  if (((code ****)pppcStack_3b0 != &pppcStack_3c4) && ((code ****)pppcStack_3b0 != (code ****)0x0))
  {
    pppcStack_3cc = pppcStack_3b0;
    pppcStack_3d0 = (code ***)0x108580ca;
    FUN_10c3d5d0();
  }
  pppcStack_3b4 = (code ***)&pppcStack_3c4;
  pppcStack_3cc = (code ***)0x11dd13f9;
  pppcStack_3d0 = (code ***)0x11dd13e4;
  pppcStack_3d4 = (code ***)0x108580ea;
  pppcStack_3b0 = pppcStack_3b4;
  FUN_100b62c0();
  pppcStack_3d4 = (code ***)FUN_10864a80;
  pppcStack_3d8 = (code ***)&pppcStack_3cc;
  pppcStack_3dc = (code ***)0x108580fb;
  FUN_10866f40();
  if (((code ****)pppcStack_3c0 != &pppcStack_3d4) && ((code ****)pppcStack_3c0 != (code ****)0x0))
  {
    pppcStack_3dc = pppcStack_3c0;
    pppcStack_3e0 = (code ***)0x10858111;
    FUN_10c3d5d0();
  }
  pppcStack_3c4 = (code ***)&pppcStack_3d4;
  pppcStack_3dc = (code ***)0x11dd13e1;
  pppcStack_3e0 = (code ***)0x11dd13c8;
  pppcStack_3e4 = (code ***)0x10858131;
  pppcStack_3c0 = pppcStack_3c4;
  FUN_100b62c0();
  pppcStack_3e4 = (code ***)FUN_10864b80;
  pppcStack_3e8 = (code ***)&pppcStack_3dc;
  pppcStack_3ec = (code ***)0x10858142;
  FUN_10866f40();
  if (((code ****)pppcStack_3d0 != &pppcStack_3e4) && ((code ****)pppcStack_3d0 != (code ****)0x0))
  {
    pppcStack_3ec = pppcStack_3d0;
    pppcStack_3f0 = (code ***)0x10858158;
    FUN_10c3d5d0();
  }
  pppcStack_3d4 = (code ***)&pppcStack_3e4;
  pppcStack_3ec = (code ***)0x11dd13c4;
  pppcStack_3f0 = (code ***)0x11dd13ac;
  pppcStack_3f4 = (code ***)0x10858178;
  pppcStack_3d0 = pppcStack_3d4;
  FUN_100b62c0();
  pppcStack_3f4 = (code ***)FUN_10866450;
  pppcStack_3f8 = (code ***)&pppcStack_3ec;
  pppcStack_3fc = (code ***)0x10858189;
  FUN_10866f40();
  if (((code ****)pppcStack_3e0 != &pppcStack_3f4) && ((code ****)pppcStack_3e0 != (code ****)0x0))
  {
    pppcStack_3fc = pppcStack_3e0;
    pppcStack_400 = (code ***)0x1085819f;
    FUN_10c3d5d0();
  }
  pppcStack_3e4 = (code ***)&pppcStack_3f4;
  pppcStack_3fc = (code ***)0x11dd13a9;
  pppcStack_400 = (code ***)0x11dd137c;
  pppcStack_404 = (code ***)0x108581bf;
  pppcStack_3e0 = pppcStack_3e4;
  FUN_100b62c0();
  pppcStack_404 = (code ***)FUN_10866710;
  pppcStack_408 = (code ***)&pppcStack_3fc;
  pppcStack_40c = (code ***)0x108581d0;
  FUN_10866f40();
  if (((code ****)pppcStack_3f0 != &pppcStack_404) && ((code ****)pppcStack_3f0 != (code ****)0x0))
  {
    pppcStack_40c = pppcStack_3f0;
    pppcStack_410 = (code ***)0x108581e6;
    FUN_10c3d5d0();
  }
  pppcStack_3f4 = (code ***)&pppcStack_404;
  pppcStack_40c = (code ***)0x11dd137a;
  pppcStack_410 = (code ***)0x11dd1358;
  pppcStack_414 = (code ***)0x10858206;
  pppcStack_3f0 = pppcStack_3f4;
  FUN_100b62c0();
  pppcStack_414 = (code ***)FUN_10863ab0;
  pppcStack_418 = (code ***)&pppcStack_40c;
  pppcStack_41c = (code ***)0x10858217;
  FUN_10866f40();
  if (((code ****)pppcStack_400 != &pppcStack_414) && ((code ****)pppcStack_400 != (code ****)0x0))
  {
    pppcStack_41c = pppcStack_400;
    pppcStack_420 = (code ***)0x1085822d;
    FUN_10c3d5d0();
  }
  pppcStack_404 = (code ***)&pppcStack_414;
  pppcStack_41c = (code ***)0x11dd1355;
  pppcStack_420 = (code ***)0x11dd1340;
  pppcStack_424 = (code ***)0x1085824d;
  pppcStack_400 = pppcStack_404;
  FUN_100b62c0();
  pppcStack_424 = (code ***)FUN_108669c0;
  pppcStack_428 = (code ***)&pppcStack_41c;
  pppcStack_42c = (code ***)0x1085825e;
  FUN_10866f40();
  if (((code ****)pppcStack_410 != &pppcStack_424) && ((code ****)pppcStack_410 != (code ****)0x0))
  {
    pppcStack_42c = pppcStack_410;
    ppcStack_430 = (code **)0x10858274;
    FUN_10c3d5d0();
  }
  pppcStack_414 = (code ***)&pppcStack_424;
  pppcStack_42c = (code ***)0x11dd133f;
  ppcStack_430 = (code **)0x11dd1328;
  ppcStack_434 = (code **)0x10858294;
  pppcStack_410 = pppcStack_414;
  FUN_100b62c0();
  ppcStack_434 = (code **)FUN_10864bc0;
  pppcStack_438 = (code ***)&pppcStack_42c;
  pppcStack_43c = (code ***)0x108582a5;
  FUN_10866f40();
  if ((pppcStack_420 != &ppcStack_434) && (pppcStack_420 != (code ***)0x0)) {
    pppcStack_43c = pppcStack_420;
    ppcStack_440 = (code **)0x108582bb;
    FUN_10c3d5d0();
  }
  pppcStack_424 = &ppcStack_434;
  pppcStack_43c = (code ***)0x11dd1325;
  ppcStack_440 = (code **)0x11dd1304;
  pcStack_444 = (code *)0x108582db;
  pppcStack_420 = pppcStack_424;
  FUN_100b62c0();
  pcStack_444 = FUN_10865b80;
  pppcStack_448 = (code ***)&pppcStack_43c;
  ppcStack_44c = (code **)0x108582ec;
  FUN_10866f40();
  if ((ppcStack_430 != &pcStack_444) && (ppcStack_430 != (code **)0x0)) {
    ppcStack_44c = ppcStack_430;
    pcStack_450 = (char *)0x10858302;
    FUN_10c3d5d0();
  }
  ppcStack_434 = &pcStack_444;
  ppcStack_44c = (code **)0x11dd1486;
  pcStack_450 = "MHUI_GetEquilSkillBuffInfo";
  pcStack_454 = (code *)0x10858322;
  ppcStack_430 = ppcStack_434;
  FUN_100b62c0();
  pcStack_454 = FUN_10866ba0;
  FUN_10866f40(&ppcStack_44c);
  if ((ppcStack_440 != &pcStack_454) && (ppcStack_440 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_440);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10874100();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_10874150();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1085c900 @ 1085c900  size=7508 ===== */
// calls: memset, CPet::SetName
// strings:
//   "collumn"
//   "m_nEnforceLevel"
//   "m_nBreakLevel"
//   "m_nOtherEquipPos"
//   "instanceChannelType"
//   "itemEnforceRuleID"
//   "m_bIsLocal"
//   "instanceChannel"
//   "m_bCanBreak"
//   "%s + %d  "
//   "%s %d  "
//   "jewelEmpty"
//   "%d*%d-"
//   "%d*%d"

/* WARNING: Removing unreachable block (ram,0x1085e43a) */
/* WARNING: Removing unreachable block (ram,0x1085e428) */
/* WARNING: Removing unreachable block (ram,0x1085e446) */
/* WARNING: Removing unreachable block (ram,0x1085e45a) */
/* WARNING: Removing unreachable block (ram,0x1085dbbf) */
/* WARNING: Removing unreachable block (ram,0x1085dbc5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: memset
   strings:
     ""collumn""
     ""m_nEnforceLevel""
     ""m_nBreakLevel""
     ""m_nOtherEquipPos""
     ""instanceChannelType""
     ""itemEnforceRuleID""
     ""m_bIsLocal""
     ""instanceChannel""
     ""m_bCanBreak""
     ""%s + %d  "" */

void __thiscall
FUN_1085c900(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            int param_6)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  int iVar4;
  uint **ppuVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int unaff_ESI;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  undefined *puVar20;
  char cVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined4 uStack_878;
  uint *puStack_874;
  undefined1 *puStack_870;
  undefined1 *puStack_86c;
  uint *puStack_868;
  undefined1 *puStack_864;
  int iStack_860;
  undefined4 *puStack_85c;
  int *piStack_858;
  int *piStack_854;
  undefined4 uStack_850;
  uint uStack_84c;
  int iStack_848;
  int *piStack_844;
  int *piStack_840;
  uint **ppuStack_83c;
  uint **ppuStack_838;
  uint **ppuStack_834;
  uint *puStack_830;
  uint **ppuStack_82c;
  uint **ppuStack_828;
  undefined4 uStack_810;
  uint local_80c;
  uint local_808;
  uint *local_804;
  uint *puStack_800;
  uint *puStack_7fc;
  uint uStack_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  undefined1 auStack_7e8 [3];
  char local_7e5;
  int local_7e4;
  undefined4 local_7e0;
  int local_7dc;
  int iStack_7d8;
  int *local_7c8;
  uint local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  uint *puStack_7b0;
  undefined4 uStack_7ac;
  uint uStack_7a8;
  uint uStack_7a4;
  uint *puStack_7a0;
  uint *puStack_79c;
  uint *puStack_798;
  uint *puStack_794;
  uint *puStack_790;
  undefined4 uStack_78c;
  int *piStack_788;
  uint **ppuStack_784;
  uint **ppuStack_780;
  uint **ppuStack_77c;
  undefined4 uStack_778;
  int *piStack_770;
  uint uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  int *local_758;
  uint local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined1 auStack_744 [4];
  undefined1 auStack_740 [12];
  undefined4 *puStack_734;
  undefined4 *puStack_730;
  undefined4 *puStack_72c;
  undefined1 auStack_728 [16];
  undefined1 auStack_718 [4];
  undefined1 *puStack_714;
  undefined1 auStack_710 [120];
  undefined1 auStack_698 [4];
  undefined1 auStack_694 [124];
  undefined1 auStack_618 [4];
  undefined1 auStack_614 [124];
  undefined1 auStack_598 [4];
  uint *apuStack_594 [7];
  undefined1 auStack_578 [4];
  uint *apuStack_574 [7];
  undefined1 auStack_558 [4];
  uint *apuStack_554 [110];
  char acStack_39c [4];
  char acStack_398 [104];
  int iStack_330;
  int iStack_1a8;
  undefined1 auStack_1a4 [8];
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [4];
  undefined1 auStack_194 [4];
  undefined1 auStack_190 [4];
  char acStack_18c [4];
  undefined4 uStack_188;
  undefined4 auStack_184 [22];
  int iStack_12c;
  undefined1 uStack_128;
  undefined1 auStack_124 [108];
  undefined1 uStack_b8;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  uint uStack_af;
  uint uStack_ab;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined1 uStack_9c;
  undefined4 uStack_9b;
  undefined2 uStack_97;
  undefined1 uStack_95;
  uint *local_30;
  undefined8 local_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_810;
  local_7f4 = param_1;
  if (param_6 != 6) goto LAB_1085e602;
  local_7c4 = param_5[1];
  local_7bc = param_5[3];
  local_7c0 = param_5[2];
  local_7b8 = param_5[4];
  local_7e0 = 0;
  local_7ec = 0;
  local_30 = (uint *)0x0;
  local_7e4 = 0;
  local_7dc = 0;
  local_808 = local_808 & 0xffffff00;
  uStack_810 = uStack_810 & 0xffffff;
  local_7f0 = 0;
  local_7e5 = '\0';
  local_28 = 0;
  local_804 = (uint *)0x0;
  local_80c = 0;
  local_7c8 = (int *)0x0;
  if ((local_7c4 >> 6 & 1) != 0) {
    local_7c8 = (int *)*param_5;
    (**(code **)(*local_7c8 + 4))();
  }
  local_754 = param_5[7];
  local_74c = param_5[9];
  local_750 = param_5[8];
  local_748 = param_5[10];
  local_758 = (int *)0x0;
  if ((local_754 >> 6 & 1) != 0) {
    local_758 = (int *)param_5[6];
    (**(code **)(*local_758 + 4))();
  }
  if (((param_5[0x19] & 0x8f) == 3) || ((param_5[0x19] & 0x8f) == 4)) {
    uStack_7f8 = param_5[0x1a];
  }
  else {
    uStack_7f8 = 0xdeadbeaf;
  }
  if (((byte)param_5[0x1f] & 0x8f) == 2) {
    puStack_800 = (uint *)CONCAT31(puStack_800._1_3_,*(undefined1 *)(param_5 + 0x20));
  }
  else {
    puStack_800 = (uint *)((uint)puStack_800._1_3_ << 8);
  }
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107ccc30();
  FUN_107cccb0();
  FUN_107cccb0();
  FUN_107cccb0();
  FUN_107ccd30();
  ppuStack_77c = (uint **)param_5[0xf];
  ppuStack_784 = (uint **)param_5[0xd];
  ppuStack_780 = (uint **)param_5[0xe];
  uStack_778 = param_5[0x10];
  piStack_788 = (int *)0x0;
  if (((uint)ppuStack_784 >> 6 & 1) != 0) {
    piStack_788 = (int *)param_5[0xc];
    (**(code **)(*piStack_788 + 4))();
  }
  uStack_76c = param_5[0x13];
  uStack_764 = param_5[0x15];
  uStack_768 = param_5[0x14];
  uStack_760 = param_5[0x16];
  piStack_770 = (int *)0x0;
  if ((uStack_76c >> 6 & 1) != 0) {
    piStack_770 = (int *)param_5[0x12];
    (**(code **)(*piStack_770 + 4))();
  }
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 != (int *)0x0)) &&
     (iStack_7d8 = (**(code **)(*piVar7 + 0xb4))(), iStack_7d8 != 0)) {
    if (uStack_810._3_1_ == '\0') {
      if ((DAT_1202e818 == 0) || (puStack_7fc = (uint *)FUN_10858a70(), puStack_7fc == (uint *)0x0))
      {
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_11a89daa();
        return;
      }
    }
    else {
      puStack_7fc = (uint *)FUN_113f9bb0();
    }
    if (local_7e5 == '\0') {
LAB_1085ccbe:
      if (puStack_7fc == (uint *)0x0) goto LAB_1085ccc2;
    }
    else {
      if (DAT_1202e818 != 0) {
        ppuStack_828 = (uint **)0x1085ccb8;
        puStack_7fc = (uint *)FUN_10858670();
        goto LAB_1085ccbe;
      }
LAB_1085ccc2:
      puStack_7fc = (uint *)FUN_10861ef0();
    }
    puVar18 = puStack_7fc;
    ppuStack_828 = (uint **)0x1085ccea;
    memset(auStack_710,0,0x5ec);
    iStack_330 = local_7e4;
    iStack_12c = local_7dc;
    uStack_128 = (undefined1)local_808;
    puVar3 = (uint *)FUN_10254130();
    puVar14 = (uint *)0x0;
    if (puVar3 != (uint *)0x0) {
      puVar14 = puVar3;
    }
    local_804 = (uint *)0x0;
    if ((puVar14 != (uint *)0x0) && (local_804 = (uint *)0x0, puVar14[0xd] == 2)) {
      local_804 = puVar14;
    }
    if ((puVar18 == (uint *)0x0) || (cVar1 = FUN_116698a0(), cVar1 == '\0')) {
      if (local_804 == (uint *)0x0) goto LAB_1085e4ef;
      local_7ec = local_80c;
      if (local_80c == 0) {
        local_7ec = local_804[0x4c];
      }
      local_7f0 = local_804[0x49];
      iVar4 = 0;
      puVar18 = puStack_7fc;
      if (0 < (int)local_7f0) {
        do {
          puStack_800 = (uint *)0x0;
          ppuStack_828 = &puStack_800;
          ppuStack_82c = (uint **)0x1085d1ee;
          FUN_1024ebe0();
          local_80c = 0;
          CPet__SetName();
          uVar16 = local_80c;
          if (iVar4 == 0) {
            puStack_730 = (undefined4 *)auStack_740;
            auStack_740[0] = 0;
            puStack_72c = puStack_730;
            FUN_100e5aa0();
            ppuStack_828 = (uint **)&puStack_714;
            ppuStack_82c = (uint **)0x1085d24f;
            FUN_100ebf60();
            if ((puStack_730 != (undefined4 *)auStack_744) && (puStack_730 != (undefined4 *)0x0)) {
              FUN_10c3d5d0();
            }
            ppuStack_828 = apuStack_594;
LAB_1085d380:
            ppuStack_82c = (uint **)0x1085d388;
            FUN_100ebf60();
          }
          else {
            if (iVar4 == 1) {
              puStack_730 = (undefined4 *)auStack_740;
              auStack_740[0] = 0;
              puStack_72c = puStack_730;
              FUN_100e5aa0();
              ppuStack_828 = (uint **)auStack_694;
              ppuStack_82c = (uint **)0x1085d2cd;
              FUN_100ebf60();
              if ((puStack_730 != (undefined4 *)auStack_744) && (puStack_730 != (undefined4 *)0x0))
              {
                FUN_10c3d5d0();
              }
              ppuStack_828 = apuStack_574;
              goto LAB_1085d380;
            }
            if (iVar4 == 2) {
              puStack_730 = (undefined4 *)auStack_740;
              auStack_740[0] = 0;
              puStack_72c = puStack_730;
              FUN_100e5aa0();
              ppuStack_828 = (uint **)auStack_614;
              ppuStack_82c = (uint **)0x1085d34c;
              FUN_100ebf60();
              if ((puStack_730 != (undefined4 *)auStack_744) && (puStack_730 != (undefined4 *)0x0))
              {
                FUN_10c3d5d0();
              }
              ppuStack_828 = apuStack_554;
              goto LAB_1085d380;
            }
          }
          if (uVar16 != 0) {
            FUN_10c3da30();
          }
          if (puStack_800 != (uint *)0x0) {
            FUN_10c3da30();
          }
          iVar4 = iVar4 + 1;
          puVar18 = puStack_7fc;
        } while (iVar4 < (int)local_7f0);
      }
LAB_1085d3b8:
      puStack_794 = (uint *)0x0;
      puStack_790 = (uint *)0x0;
      uStack_78c = 0;
      uStack_7ac = 0;
      uStack_7a8 = 0;
      uStack_7a4 = 0;
      puStack_7a0 = (uint *)0x0;
      puStack_79c = (uint *)0x0;
      puStack_798 = (uint *)0x0;
      if ((puVar18 == (uint *)0x0) || (cVar1 = FUN_116698a0(), cVar1 == '\0')) {
        puVar14 = local_30;
        ppuStack_828 = (uint **)local_7ec;
        ppuStack_82c = (uint **)0x1085d470;
        FUN_114072f0();
        puVar18 = local_804;
        ppuStack_82c = (uint **)&uStack_7ac;
        puStack_830 = local_804;
        ppuStack_834 = (uint **)0x1085d47f;
        FUN_11406f90();
        ppuStack_834 = &puStack_7a0;
        ppuStack_838 = (uint **)puVar14;
        ppuStack_83c = (uint **)local_7dc;
        piStack_840 = (int *)0x1085d491;
        FUN_11407190();
        FUN_11406f90();
      }
      else {
        FUN_11407380();
        ppuStack_82c = (uint **)0x1085d431;
        ppuStack_828 = (uint **)puVar18;
        FUN_11407030();
        ppuStack_82c = &puStack_7a0;
        ppuStack_834 = (uint **)0x1085d43f;
        puStack_830 = puVar18;
        FUN_11407220();
        ppuStack_834 = &puStack_7a0;
        ppuStack_83c = (uint **)0x1085d44d;
        ppuStack_838 = (uint **)puVar18;
        FUN_11407030();
        puVar18 = local_804;
      }
      ppuStack_828 = &puStack_7a0;
      ppuStack_82c = (uint **)0x1085d4b4;
      FUN_10461b50();
      ppuStack_838 = &puStack_7b0;
      ppuStack_83c = (uint **)0x1085d4c6;
      FUN_10461b50();
      ppuStack_83c = &puStack_79c;
      uStack_84c = 0x1085d4da;
      FUN_1085e670();
      piStack_858 = &local_7dc;
      puStack_85c = (undefined4 *)0x1085d4e9;
      FUN_10461b50();
      puStack_85c = &local_7bc;
      iStack_860 = param_3;
      puStack_864 = (undefined1 *)0x1085d4fa;
      FUN_1085fbb0();
      puStack_870 = auStack_7e8;
      FUN_10461b50();
      FUN_1085fbb0();
      uStack_850 = 0;
      CPet__SetName();
      uVar11 = local_7f4;
      for (uVar16 = uStack_7f8; uVar16 != uVar11; uVar16 = uVar16 + 4) {
        FUN_100e5ed0();
        puVar18 = puStack_868;
      }
      puStack_794 = &uStack_7a4;
      uStack_7a4 = uStack_7a4 & 0xffffff00;
      puStack_790 = puStack_794;
      FUN_100e5aa0();
      FUN_105ff470();
      if ((puStack_794 != &uStack_7a8) && (puStack_794 != (uint *)0x0)) {
        FUN_10c3d5d0();
      }
      uStack_878._3_1_ = (char)((uint)param_3 >> 0x18);
      if (puVar18[0xf] == 5) {
        puStack_86c = (undefined1 *)FUN_108563c0();
        if (0 < iStack_860) {
          if (puStack_86c == (undefined1 *)0x0) goto LAB_1085e488;
          puStack_86c = (undefined1 *)FUN_117d2ed0();
        }
        if (puStack_86c == (undefined1 *)0x0) goto LAB_1085e488;
        ppuStack_83c = (uint **)0x0;
        ppuStack_838 = (uint **)0x0;
        ppuStack_834 = (uint **)0x0;
        puStack_874 = (uint *)0x0;
        do {
          iStack_860 = FUN_117d2d50();
          iVar4 = FUN_10254130();
          iVar15 = FUN_10856130();
          if ((iVar4 != 0) && (iVar15 != 0)) {
            FUN_10534960();
          }
          puStack_874 = (uint *)((int)puStack_874 + 1);
        } while ((int)puStack_874 < 0xf);
        puStack_874 = (uint *)0x0;
        iVar4 = (**(code **)(*piStack_840 + 0x294))();
        if (iVar4 == 5) {
          puStack_874 = (uint *)FUN_11399c60();
        }
        puVar8 = &uStack_188;
        iVar4 = 0xe;
        do {
          iVar4 = iVar4 + -1;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = puVar8 + 4;
        } while (-1 < iVar4);
        piStack_844 = (int *)0x0;
        ppuVar5 = ppuStack_838;
        if ((((puStack_874 != (uint *)0x0) && (puStack_864 != (undefined1 *)0x0)) &&
            (iStack_848 == 3)) &&
           ((uStack_878._3_1_ != '\0' &&
            (piVar7 = (int *)(**(code **)(*puStack_874 + 0x40))(&uStack_188), ppuVar5 = ppuStack_838
            , piStack_844 = piVar7, 0 < (int)piVar7)))) {
          piVar19 = &uStack_188;
          do {
            puVar8 = (undefined4 *)0x0;
            puStack_85c = (undefined4 *)((int)ppuVar5 - (int)ppuStack_83c >> 2);
            if (puStack_85c != (undefined4 *)0x0) {
              do {
                if ((uint *)*piVar19 == ppuStack_83c[(int)puVar8]) goto LAB_1085d76c;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              } while (puVar8 < puStack_85c);
            }
            if (ppuVar5 == ppuStack_834) {
              piStack_854 = piVar7;
              FUN_1053b850(ppuVar5,piVar19,&puStack_870);
              ppuVar5 = ppuStack_838;
            }
            else {
              *ppuVar5 = (uint *)*piVar19;
              ppuStack_838 = ppuVar5 + 1;
              ppuVar5 = ppuStack_838;
            }
LAB_1085d76c:
            piVar19 = piVar19 + 4;
            piVar7 = (int *)((int)piVar7 + -1);
          } while (piVar7 != (int *)0x0);
        }
        puStack_7a0 = &uStack_7a8;
        puStack_798 = (uint *)0x0;
        piStack_854 = (int *)((int)ppuVar5 - (int)ppuStack_83c >> 2);
        puStack_794 = (uint *)CONCAT31(puStack_794._1_3_,puStack_870._0_1_);
        uStack_7a8 = 0;
        uStack_7a4 = 0;
        piStack_840 = (int *)0x0;
        puStack_79c = puStack_7a0;
        if (piStack_854 != (int *)0x0) {
          do {
            puVar18 = ppuStack_83c[(int)piStack_840];
            puStack_868 = puVar18;
            puStack_864 = (undefined1 *)FUN_117d2ee0();
            iVar4 = FUN_10254130();
            puStack_85c = (undefined4 *)FUN_10856130();
            if ((puStack_874 != (uint *)0x0) && (puStack_85c != (undefined4 *)0x0)) {
              if (0 < (int)piStack_840) {
                FUN_100eb9a0();
              }
              ppuStack_780 = &puStack_790;
              puStack_790 = (uint *)((uint)puStack_790 & 0xffffff00);
              ppuStack_77c = ppuStack_780;
              ppuVar5 = ppuStack_780;
              FUN_100e5aa0();
              uVar23 = CONCAT44(ppuVar5,ppuStack_780);
              FUN_100eb9a0();
              if ((ppuStack_784 != &puStack_798) && (ppuStack_784 != (uint **)0x0)) {
                FUN_10c3d5d0(ppuStack_784);
              }
              puVar22 = &DAT_11d9dcd4;
              FUN_100eb9a0();
              uStack_9b = 0;
              uStack_97 = 0;
              uStack_95 = 0;
              uStack_9c = 0;
              uVar9 = (**(code **)(uStack_7a4 + 0x18))();
              FUN_100ec3b0(&uStack_9c,8,&DAT_11d9e0b4,uVar9);
              FUN_100eb9a0();
              FUN_100eb9a0(&DAT_11d9dcd4);
              uVar23 = CONCAT26((short)((ulonglong)uVar23 >> 0x30),(uint6)(uint)uVar23);
              if ((((puStack_874 == (uint *)0x0) || (iVar4 == 0)) ||
                  (puStack_85c != (undefined4 *)0x3)) || ((char)((uint)puVar22 >> 0x18) == '\0')) {
                puVar14 = puVar18;
                cVar1 = FUN_117d2cd0();
                cVar21 = (char)((uint)puVar14 >> 0x18);
                if (cVar1 == '\0') {
                  cVar1 = FUN_117d2c60(puVar18);
                  if (cVar1 == '\0') {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = 2;
                  }
                }
                else {
                  uVar9 = 1;
                }
              }
              else {
                puVar14 = puVar18;
                iVar4 = (**(code **)(*puStack_874 + 200))();
                cVar21 = (char)((uint)puVar14 >> 0x18);
                if (iVar4 < 1) {
                  iVar4 = (**(code **)(*puStack_874 + 0xcc))(puVar18);
                  if (iVar4 == 1) {
                    uVar9 = 2;
                  }
                  else {
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = 1;
                }
              }
              FUN_100ec3b0(&stack0xfffff778,2,&DAT_11d9e0b4,uVar9);
              FUN_100eb9a0(&stack0xfffff778);
              puVar20 = &DAT_11d9dcd4;
              FUN_100eb9a0();
              cVar1 = (char)((uint)puVar20 >> 0x18);
              iVar15 = -1;
              iVar4 = iVar15;
              if (((puStack_874 == (uint *)0x0) || ((int)((ulonglong)uVar23 >> 0x20) == 0)) ||
                 ((puStack_868 != (uint *)0x3 || ((cVar21 == '\0' || ((int)puStack_864 < 1)))))) {
LAB_1085da53:
                iVar15 = FUN_117d2d70(iStack_860);
              }
              else {
                piVar7 = &iStack_1a8;
                iVar4 = (int)uVar23;
                puStack_86c = puStack_864;
                do {
                  if (iVar4 == *piVar7) {
                    iVar15 = (**(code **)(*puStack_874 + 0x30))(*piVar7);
                    iVar4 = (int)uVar23;
                  }
                  cVar1 = (char)((uint)puVar20 >> 0x18);
                  piVar7 = piVar7 + 4;
                  puStack_86c = puStack_86c + -1;
                } while (puStack_86c != (undefined1 *)0x0);
                puStack_86c = (undefined1 *)0x0;
                iVar4 = iVar15;
                if (iVar15 == -1) goto LAB_1085da53;
              }
              uStack_b8 = 0;
              uStack_b7 = 0;
              uStack_b3 = 0;
              uStack_b1 = 0;
              if (iVar15 < 1) {
                iVar15 = 0;
              }
              FUN_100ec3b0(&uStack_b8,8,&DAT_11d9e0b4,iVar15);
              FUN_100eb9a0(&uStack_b8);
              FUN_100eb9a0(&DAT_11d9dcd4);
              uStack_af = uStack_af & 0xffffff;
              uStack_ab = 0;
              uStack_a7 = 0;
              uStack_a5 = 0;
              if ((((puStack_874 == (uint *)0x0) || (puVar22 == (undefined *)0x0)) ||
                  (puStack_870 != (undefined1 *)0x3)) || (cVar1 == '\0')) {
                uVar9 = FUN_117d2f20();
                FUN_100ec3b0(&uStack_b0,8,&DAT_11d9e0b4,uVar9);
              }
              else {
                uVar9 = (**(code **)(*puStack_874 + 200))();
                FUN_100ec3b0(&uStack_b0,8,&DAT_11d9e0b4,uVar9);
              }
              FUN_100eb9a0(&uStack_b0);
              FUN_100eb9a0(&DAT_11d9dcd4);
              uStack_b0 = 0;
              uStack_af = 0;
              uStack_ab = uStack_ab & 0xff000000;
              uVar9 = FUN_117d2d90(iVar4);
              FUN_100ec3b0((int)&uStack_b7 + 3,8,&DAT_11d9e0b4,uVar9);
              FUN_100eb9a0((int)&uStack_b7 + 3);
            }
            piStack_840 = (int *)((int)piStack_840 + 1);
          } while (piStack_840 < piStack_854);
        }
        ppuVar5 = ppuStack_83c;
        FUN_1086c640();
        if (ppuVar5 == (uint **)0x0) goto LAB_1085e488;
        goto LAB_1085e480;
      }
      if (puVar18[0xf] == 10) {
        puVar10 = (undefined1 *)FUN_10856580();
        if (0 < iStack_860) {
          puStack_86c = puVar10;
          if (puVar10 == (undefined1 *)0x0) goto LAB_1085e488;
          puVar10 = (undefined1 *)FUN_117d3fc0();
        }
        puStack_86c = puVar10;
        if (puVar10 != (undefined1 *)0x0) {
          uStack_188._0_1_ = 0;
          memset((void *)((int)&uStack_188 + 1),0,0x7f);
          FUN_100ec3b0(&uStack_188,0x80,"%d*%d-",*(undefined4 *)(puVar10 + 0x18));
          FUN_10871980();
          FUN_100ec3b0(&uStack_188,0x80,"%d*%d-",*(undefined4 *)(puVar10 + 0x1c));
          FUN_10871980();
          FUN_100ec3b0(&uStack_188,0x80,"%d*%d-",*(undefined4 *)(puVar10 + 0x20));
          FUN_10871980();
          FUN_100ec3b0(&uStack_188,0x80,"%d*%d",*(undefined4 *)(puVar10 + 0x24));
          FUN_10871980();
          FUN_10871980();
          ppuStack_83c = (uint **)0x0;
          ppuStack_838 = (uint **)0x0;
          ppuStack_834 = (uint **)0x0;
          puStack_874 = (uint *)0x0;
          do {
            iStack_860 = FUN_117d4070();
            iVar4 = FUN_10254130();
            iVar15 = FUN_10856130();
            if ((iVar4 != 0) && (iVar15 != 0)) {
              FUN_10534960();
            }
            puStack_874 = (uint *)((int)puStack_874 + 1);
          } while ((int)puStack_874 < 5);
          piVar7 = (int *)FUN_11399c60();
          piStack_844 = piVar7;
          if (((piVar7 != (int *)0x0) && (puStack_864 != (undefined1 *)0x0)) &&
             ((iStack_848 == 3 && (uStack_878._3_1_ != '\0')))) {
            puStack_874 = (uint *)0x2a;
            ppuVar5 = ppuStack_83c;
            do {
              uVar16 = 0;
              uVar11 = (int)ppuStack_838 - (int)ppuVar5 >> 2;
              if (uVar11 != 0) {
                do {
                  if (puStack_874 == ppuVar5[uVar16]) goto LAB_1085de7a;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar11);
              }
              iVar4 = (**(code **)(*piVar7 + 0x30))();
              ppuVar5 = ppuStack_83c;
              if (0 < iVar4) {
                FUN_10534960();
                ppuVar5 = ppuStack_83c;
              }
LAB_1085de7a:
              puStack_874 = (uint *)((int)puStack_874 + 1);
            } while ((int)puStack_874 < 0x2f);
          }
          uVar16 = 0;
          uStack_84c = (int)ppuStack_838 - (int)ppuStack_83c >> 2;
          if (uStack_84c != 0) {
            do {
              puVar18 = ppuStack_83c[uVar16];
              puStack_874 = (uint *)FUN_10254130();
              puStack_85c = (undefined4 *)FUN_10856130();
              if ((puStack_874 != (uint *)0x0) && (puStack_85c != (undefined4 *)0x0)) {
                if (0 < (int)uVar16) {
                  FUN_10871980();
                }
                ppuStack_780 = &puStack_790;
                puStack_790 = (uint *)((uint)puStack_790 & 0xffffff00);
                ppuStack_77c = ppuStack_780;
                FUN_100e5aa0();
                cVar1 = (char)((uint)ppuStack_780 >> 0x18);
                FUN_100eb9a0();
                if ((ppuStack_784 != &puStack_798) && (ppuStack_784 != (uint **)0x0)) {
                  FUN_10c3d5d0(ppuStack_784);
                }
                FUN_100eb9a0(&DAT_11dbaa20);
                uVar9 = (**(code **)(uStack_7a4 + 0x18))();
                FUN_100ec3b0(auStack_194,0x80,&DAT_11dd17d4,uVar9);
                FUN_100eb9a0(auStack_194);
                if ((((piStack_854 == (int *)0x0) || (puStack_874 == (uint *)0x0)) ||
                    (piStack_858 != (int *)0x3)) ||
                   (((cVar1 == '\0' || (4 < (int)puVar18 - 0x2aU)) ||
                    (iVar4 = (**(code **)(*piStack_854 + 0x30))(puVar18), iVar4 == -1)))) {
                  iVar4 = FUN_117d4050(uVar16);
                }
                if (iVar4 < 1) {
                  iVar4 = 0;
                }
                FUN_100ec3b0(auStack_198,0x80,&DAT_11d9e0b4,iVar4);
                FUN_100eb9a0(auStack_198);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uStack_84c);
          }
          FUN_100eb9a0();
          puVar10 = (undefined1 *)0x0;
          puStack_86c = (undefined1 *)0x0;
          iVar4 = 0;
LAB_1085e040:
          iVar15 = iVar4 + 1;
          puStack_864 = (undefined1 *)FUN_117d3fd0();
          if (0 < iVar4) {
            iVar6 = 0x200;
            pcVar12 = acStack_39c;
            do {
              if (*pcVar12 == '\0') {
                if (iVar6 != 0) {
                  iVar6 = -iVar6;
                  puStack_868 = (uint *)(0x200 - (iVar6 + 0x200));
                  puVar10 = auStack_19c + iVar6;
                  if (puStack_868 == (uint *)0x0) goto LAB_1085e0d9;
                  iVar6 = iVar6 + 0x7fffffff + (int)puStack_868;
                  iVar17 = (int)&DAT_11d9dcd4 - (int)puVar10;
                  goto LAB_1085e0b0;
                }
                break;
              }
              pcVar12 = pcVar12 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          goto LAB_1085e0e5;
        }
      }
      goto LAB_1085e488;
    }
    if (local_804 != (uint *)0x0) {
      uVar16 = local_804[0x50];
      uVar11 = local_804[0x51];
      local_7ec = FUN_1166c190();
      iVar4 = FUN_1166c160();
      if (0 < iVar4) {
        iStack_330 = FUN_1166c160();
        local_7dc = FUN_1166c400();
        local_7e4 = iStack_330;
        iStack_12c = local_7dc;
        uStack_128 = 0;
        if ((local_7dc < (int)uVar16) && (uStack_128 = 0, (int)uVar11 <= iStack_330)) {
          uStack_128 = 1;
        }
      }
      puVar18 = puStack_7fc;
      local_80c = FUN_1166ded0();
      local_7f0 = 0;
      if (local_80c != 0) {
        do {
          ppuVar5 = (uint **)FUN_1166def0();
          ppuStack_828 = (uint **)0x1085ce10;
          FUN_100b5f70();
          ppuStack_82c = (uint **)0x1085ce16;
          ppuStack_828 = ppuVar5;
          iVar4 = FUN_10254130();
          if (iVar4 == 0) {
            puStack_800 = (uint *)0x0;
            ppuStack_828 = &puStack_800;
            ppuStack_82c = (uint **)0x1085cfa6;
            FUN_1024ebe0();
            local_808 = 0;
            CPet__SetName();
            uVar16 = local_7f4;
            if (local_7f4 == 0) {
              puStack_734 = (undefined4 *)auStack_744;
              auStack_744[0] = 0;
              puStack_730 = puStack_734;
              FUN_100e5aa0();
              ppuStack_82c = (uint **)auStack_718;
              ppuStack_828 = (uint **)0x80;
              puStack_830 = (uint *)0x1085d007;
              FUN_100ebf60();
              if ((puStack_734 != &local_748) && (puStack_734 != (undefined4 *)0x0)) {
                ppuStack_828 = (uint **)0x1085d026;
                FUN_10c3d5d0();
              }
              ppuStack_82c = (uint **)auStack_598;
LAB_1085d144:
              ppuStack_828 = (uint **)&DAT_00000020;
              puStack_830 = (uint *)0x1085d14d;
              FUN_100ebf60();
            }
            else {
              if (local_7f4 == 1) {
                puStack_734 = (undefined4 *)auStack_744;
                auStack_744[0] = 0;
                puStack_730 = puStack_734;
                FUN_100e5aa0();
                ppuStack_82c = (uint **)auStack_698;
                ppuStack_828 = (uint **)0x80;
                puStack_830 = (uint *)0x1085d088;
                FUN_100ebf60();
                if ((puStack_734 != &local_748) && (puStack_734 != (undefined4 *)0x0)) {
                  ppuStack_828 = (uint **)0x1085d0a7;
                  FUN_10c3d5d0();
                }
                ppuStack_82c = (uint **)auStack_578;
                goto LAB_1085d144;
              }
              if (local_7f4 == 2) {
                puStack_734 = (undefined4 *)auStack_744;
                auStack_744[0] = 0;
                puStack_730 = puStack_734;
                FUN_100e5aa0();
                ppuStack_82c = (uint **)auStack_618;
                ppuStack_828 = (uint **)0x80;
                puStack_830 = (uint *)0x1085d10d;
                FUN_100ebf60();
                if ((puStack_734 != &local_748) && (puStack_734 != (undefined4 *)0x0)) {
                  ppuStack_828 = (uint **)0x1085d12c;
                  FUN_10c3d5d0();
                }
                ppuStack_82c = (uint **)auStack_558;
                goto LAB_1085d144;
              }
            }
            FUN_100e5670();
            FUN_100e5670();
          }
          else {
            iVar15 = *(int *)(iVar4 + 0x198);
            if (iVar15 != *(int *)(iVar4 + 0x19c)) {
              do {
                iVar6 = FUN_1050ebc0();
                if (iVar6 != 0) {
                  FUN_108199e0();
                  auStack_124[0] = 0;
                  ppuStack_82c = (uint **)auStack_124;
                  if (*(int *)(iVar15 + 4) < 0) {
                    ppuStack_828 = (uint **)0x11dcc540;
                  }
                  else {
                    ppuStack_828 = (uint **)0x11dcc534;
                  }
                  puStack_830 = (uint *)0x1085ce82;
                  FUN_1083ded0();
                  FUN_100e5f90();
                  if ((puStack_72c != (undefined4 *)auStack_740) &&
                     (puStack_72c != (undefined4 *)0x0)) {
                    FUN_10c3d5d0();
                  }
                }
                iVar15 = iVar15 + 8;
              } while (iVar15 != *(int *)(iVar4 + 0x19c));
            }
            uVar16 = local_7f0;
            if (local_7f0 == 0) {
              ppuStack_828 = (uint **)0x1085cee8;
              FUN_100ebf60();
              ppuStack_828 = (uint **)0x1085cf00;
              FUN_100ebf60();
            }
            else if (local_7f0 == 1) {
              ppuStack_828 = (uint **)0x1085cf26;
              FUN_100ebf60();
              ppuStack_828 = (uint **)0x1085cf3e;
              FUN_100ebf60();
            }
            else if (local_7f0 == 2) {
              ppuStack_828 = (uint **)0x1085cf68;
              FUN_100ebf60();
              ppuStack_828 = (uint **)0x1085cf80;
              FUN_100ebf60();
            }
          }
          if ((puStack_714 != auStack_728) && (puStack_714 != (undefined1 *)0x0)) {
            FUN_10c3d5d0();
          }
          local_7f0 = uVar16 + 1;
          puVar18 = puStack_7fc;
        } while (local_7f0 < local_80c);
      }
      goto LAB_1085d3b8;
    }
    goto LAB_1085e4ef;
  }
  goto LAB_1085e528;
  while( true ) {
    iVar6 = iVar6 + -1;
    *puVar10 = puVar10[iVar17];
    puVar10 = puVar10 + 1;
    puStack_868 = (uint *)((int)puStack_868 + -1);
    if (puStack_868 == (uint *)0x0) break;
LAB_1085e0b0:
    if ((iVar6 == 0) || (puVar10[iVar17] == '\0')) {
      if (puStack_868 != (uint *)0x0) goto LAB_1085e0da;
      break;
    }
  }
LAB_1085e0d9:
  puVar10 = puVar10 + -1;
LAB_1085e0da:
  *puVar10 = 0;
  puVar10 = puStack_870;
LAB_1085e0e5:
  if (iVar4 == 3) {
    puVar10 = puStack_864;
  }
  puVar13 = puStack_864;
  if ((int)puStack_864 < 1) {
    puVar13 = (undefined1 *)0x0;
  }
  puStack_870 = puVar10;
  FUN_100ec3b0(auStack_190,0x80,&DAT_11d9e0b4,puVar13);
  pcVar12 = acStack_398;
  iVar4 = 0x200;
  do {
    if (*pcVar12 == '\0') {
      if (iVar4 != 0) {
        iVar4 = -iVar4;
        puStack_864 = (undefined1 *)(0x200 - (iVar4 + 0x200));
        puVar10 = auStack_198 + iVar4;
        if (puStack_864 == (undefined1 *)0x0) goto LAB_1085e189;
        puVar13 = puStack_864 + iVar4 + 0x7fffffff;
        iVar4 = -(int)puVar10;
        goto LAB_1085e160;
      }
      break;
    }
    pcVar12 = pcVar12 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
LAB_1085e191:
  iVar4 = iVar15;
  if (3 < iVar15) goto code_r0x1085e19e;
  goto LAB_1085e040;
  while( true ) {
    puVar13 = puVar13 + -1;
    *puVar10 = puVar10[(int)(acStack_18c + iVar4)];
    puVar10 = puVar10 + 1;
    puStack_864 = puStack_864 + -1;
    if (puStack_864 == (undefined1 *)0x0) break;
LAB_1085e160:
    if ((puVar13 == (undefined1 *)0x0) || (puVar10[(int)(acStack_18c + iVar4)] == '\0')) {
      if (puStack_864 != (undefined1 *)0x0) goto LAB_1085e18a;
      break;
    }
  }
LAB_1085e189:
  puVar10 = puVar10 + -1;
LAB_1085e18a:
  *puVar10 = 0;
  puVar10 = puStack_86c;
  goto LAB_1085e191;
code_r0x1085e19e:
  iVar4 = 0x200;
  pcVar12 = acStack_398;
  do {
    if (*pcVar12 == '\0') {
      if (iVar4 != 0) {
        iVar4 = -iVar4;
        puStack_864 = (undefined1 *)(0x200 - (iVar4 + 0x200));
        puVar10 = auStack_198 + iVar4;
        if (puStack_864 == (undefined1 *)0x0) goto LAB_1085e219;
        puVar13 = puStack_864 + iVar4 + 0x7fffffff;
        iVar4 = (int)&DAT_11dbc798 - (int)puVar10;
        goto LAB_1085e1f0;
      }
      break;
    }
    pcVar12 = pcVar12 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  goto LAB_1085e21d;
  while( true ) {
    puVar13 = puVar13 + -1;
    *puVar10 = puVar10[iVar4];
    puVar10 = puVar10 + 1;
    puStack_864 = puStack_864 + -1;
    if (puStack_864 == (undefined1 *)0x0) break;
LAB_1085e1f0:
    if ((puVar13 == (undefined1 *)0x0) || (puVar10[iVar4] == '\0')) {
      if (puStack_864 != (undefined1 *)0x0) goto LAB_1085e21a;
      break;
    }
  }
LAB_1085e219:
  puVar10 = puVar10 + -1;
LAB_1085e21a:
  *puVar10 = 0;
LAB_1085e21d:
  uStack_878 = 0;
  iVar4 = 0;
  do {
    iVar15 = FUN_117d4030();
    FUN_117d4010(iVar4);
    if ((iVar15 != 0) && (iStack_860 = FUN_10856130(), iStack_860 != 0)) {
      ppuStack_784 = &puStack_794;
      puStack_794 = (uint *)((uint)puStack_794 & 0xffffff00);
      ppuStack_780 = ppuStack_784;
      FUN_100e5aa0();
      FUN_100ea370(auStack_190,ppuStack_784);
      if ((ppuStack_784 != &puStack_798) && (ppuStack_784 != (uint **)0x0)) {
        FUN_10c3d5d0(ppuStack_784);
      }
      FUN_100eb9a0(auStack_190);
      FUN_100eb9a0(&DAT_11dbaa20);
      FUN_100ec3b0(auStack_198,0x80,&DAT_11d9e0b4,iVar15);
      FUN_100eb9a0(auStack_198);
      FUN_100eb9a0(&DAT_11dbaa20);
      uVar2 = (**(code **)(*(int *)piStack_858[5] + 0x58))(puStack_874[0xd]);
      FUN_100ec3b0(auStack_1a4,0x80,&DAT_11d9e0b4,uVar2);
      FUN_100eb9a0(auStack_1a4);
      if (0 < uStack_878) {
        FUN_100eb9a0();
      }
      uStack_878 = uStack_878 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  FUN_100eb9a0();
  cVar1 = (**(code **)(**(int **)(iStack_848 + 0x10) + 0x30))(0xc6adcd);
  if ((piStack_854 == (int *)0x3) && (cVar1 != '\0')) {
    puVar10 = &DAT_11d9e064;
  }
  else {
    puVar10 = &DAT_11d9e074;
  }
  FUN_100eb9a0(puVar10);
  FUN_100eb9a0(&DAT_11dbc798);
  FUN_100eb9a0(&DAT_11d9e074);
  if (ppuStack_83c != (uint **)0x0) {
LAB_1085e480:
    FUN_10c3d5d0();
  }
LAB_1085e488:
  if (piStack_858 != (int *)0x0) {
    FUN_10c3da30();
  }
  if (local_808 != 0) {
    FUN_10c3d5d0();
  }
  if (unaff_ESI != 0) {
    FUN_10c3d5d0();
  }
  puVar18 = puStack_7fc;
  FUN_10874fe0(uStack_7f8,puStack_7fc);
  if (puVar18 != (uint *)0x0) {
    FUN_10c3d5d0();
  }
LAB_1085e4ef:
  iVar4 = FUN_10d17440();
  if (iVar4 != 0) {
    FUN_10d17440();
    iVar4 = FUN_10d17870();
    if (iVar4 != 0) {
      FUN_10d17440();
      piVar7 = (int *)FUN_10d17870();
      (**(code **)(*piVar7 + 4))();
    }
  }
LAB_1085e528:
  if ((uStack_76c >> 6 & 1) != 0) {
    (**(code **)(*piStack_770 + 8))();
    piStack_770 = (int *)0x0;
  }
  uStack_76c = 0;
  if (((uint)ppuStack_784 >> 6 & 1) != 0) {
    (**(code **)(*piStack_788 + 8))();
    piStack_788 = (int *)0x0;
  }
  ppuStack_784 = (uint **)0x0;
  if ((local_754 >> 6 & 1) != 0) {
    (**(code **)(*local_758 + 8))();
    local_758 = (int *)0x0;
  }
  local_754 = 0;
  if ((local_7c4 >> 6 & 1) != 0) {
    (**(code **)(*local_7c8 + 8))();
  }
LAB_1085e602:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10860b90 @ 10860b90  size=605 ===== */
// strings:
//   "m_nFactItemLevel"
//   "m_nFactRank"
//   "m_nRareType"
//   "m_nTransmogrifyItemId"
//   "m_nQuenchLevel"

/* [RE-AUTO c0]
   strings:
     ""m_nFactItemLevel""
     ""m_nFactRank""
     ""m_nRareType""
     ""m_nTransmogrifyItemId""
     ""m_nQuenchLevel"" */

void FUN_10860b90(void)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int in_stack_00000010;
  char local_39;
  undefined4 local_28;
  undefined4 uStack_24;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((byte)*(undefined4 *)(in_stack_00000010 + 0x34) & 0x8f) == 2) {
    cVar2 = *(char *)(in_stack_00000010 + 0x38);
  }
  else {
    cVar2 = '\0';
  }
  if (((byte)*(undefined4 *)(in_stack_00000010 + 100) & 0x8f) == 2) {
    local_39 = *(char *)(in_stack_00000010 + 0x68);
  }
  else {
    local_39 = '\0';
  }
  if (((byte)*(undefined4 *)(in_stack_00000010 + 0x7c) & 0x8f) == 5) {
    uVar6 = *(undefined8 *)(in_stack_00000010 + 0x80);
  }
  else {
    uVar6 = 0;
  }
  local_1c = *(uint *)(in_stack_00000010 + 0xac);
  local_14 = *(undefined4 *)(in_stack_00000010 + 0xb4);
  local_18 = *(undefined4 *)(in_stack_00000010 + 0xb0);
  local_10 = *(undefined4 *)(in_stack_00000010 + 0xb8);
  local_20 = (int *)0x0;
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = *(int **)(in_stack_00000010 + 0xa8);
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  if (((byte)*(undefined4 *)(in_stack_00000010 + 0xc4) & 0x8f) == 2) {
    uVar1 = *(undefined1 *)(in_stack_00000010 + 200);
  }
  else {
    uVar1 = 0;
  }
  if (cVar2 == '\0') {
    if (DAT_1202e818 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_10858a70();
    }
  }
  else {
    piVar3 = (int *)FUN_107cb630();
  }
  if (local_39 != '\0') {
    if (DAT_1202e818 == 0) goto LAB_10860dc7;
    uStack_24 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_28 = (undefined4)uVar6;
    piVar3 = (int *)FUN_10858670(local_28,uStack_24,uVar1);
  }
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    uVar5 = FUN_11669840();
    FUN_104d1550("m_nFactItemLevel",uVar4);
    FUN_104d1550("m_nFactRank",uVar5);
    uVar4 = (**(code **)(*piVar3 + 0x2c))();
    FUN_104d1550("m_nRareType",uVar4);
    cVar2 = FUN_116698a0();
    if (cVar2 != '\0') {
      FUN_104d1440("m_nTransmogrifyItemId",piVar3[0x7d]);
      FUN_104d1550("m_nQuenchLevel",(short)piVar3[0x7e]);
    }
  }
LAB_10860dc7:
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10876b30 @ 10876b30  size=134 ===== */
// calls: CCraftInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CCraftInfo"

/* [RE-AUTO c0]
   calls: CCraftInfo::GetManagers
   strings:
     ""CCraftInfo"" */

undefined4 FUN_10876b30(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcaec4;
  puVar1 = (undefined4 *)CCraftInfo__GetInfoManagerSingleton();
  puVar1 = (undefined4 *)*puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,"CCraftInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bf0e0 & 1) == 0) {
        DAT_123bf0e0 = DAT_123bf0e0 | 1;
        FUN_10806120();
        FUN_11a8911f(&LAB_11c71730);
      }
      puVar1 = &DAT_123bf070;
    }
  }
  if ((-1 < param_1) && (param_1 < (int)(puVar1[6] - puVar1[5]) >> 2)) {
    return *(undefined4 *)(puVar1[5] + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_10876bc0 @ 10876bc0  size=109 ===== */
// calls: CCraftInfo::GetInfoManagerSingleton, CInfoManager::FindByName
// strings:
//   "CCraftInfo"

/* [RE-AUTO c0]
   calls: CCraftInfo::GetManagers
   strings:
     ""CCraftInfo"" */

void FUN_10876bc0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcaec4;
  puVar1 = (undefined4 *)CCraftInfo__GetInfoManagerSingleton();
  piVar2 = (int *)*puVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)CInfoManager__FindByName(&local_8,"CCraftInfo",0);
    if (piVar2 == (int *)0x0) {
      if ((DAT_123bf0e0 & 1) == 0) {
        DAT_123bf0e0 = DAT_123bf0e0 | 1;
        FUN_10806120();
        FUN_11a8911f(&LAB_11c71730);
      }
      piVar2 = &DAT_123bf070;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  return;
}



/* ===== FUN_10878e40 @ 10878e40  size=221 ===== */
// strings:
//   "_getActivateTalentData"
//   "_getTalentSkillData"
//   "_activateWeaponTalentSkill"
//   "_unactivateWeaponTalentSkill"
//   "_upgradeWeaponTalentSkill"

/* [RE-AUTO c0]
   strings:
     ""_getActivateTalentData""
     ""_getTalentSkillData""
     ""_activateWeaponTalentSkill""
     ""_unactivateWeaponTalentSkill""
     ""_upgradeWeaponTalentSkill"" */

void FUN_10878e40(void)

{
  undefined4 *in_stack_00000010;
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
  FUN_104d13b0("_getActivateTalentData",FUN_10878f20);
  FUN_104d13b0("_getTalentSkillData",FUN_10878f40);
  FUN_104d13b0("_activateWeaponTalentSkill",FUN_10878f60);
  FUN_104d13b0("_unactivateWeaponTalentSkill",FUN_10879000);
  FUN_104d13b0("_upgradeWeaponTalentSkill",FUN_108790b0);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10879150 @ 10879150  size=3175 ===== */
// calls: CTalentActiveInfo::BuildActiveTalentList
// strings:
//   "status"
//   "currentLevel"
//   "maxLevel"
//   "talentID"
//   "talentIndex"
//   "unlockLevel"
//   "strTalentTips"
//   "unlockNew"
//   "satisfyLevelUp"
//   "activateSkill"
//   "talentIcon"
//   "talentName"
//   "weaponType"
//   "roleBindMoney"
//   "roleMoney"
//   "arrayLevelupInfo"
//   "levelupValue"
//   "levelupCost"
//   "levelupDesc"
//   "levelLimit"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""status""
     ""currentLevel""
     ""maxLevel""
     ""talentID""
     ""talentIndex""
     ""unlockLevel""
     ""strTalentTips""
     ""unlockNew""
     ""satisfyLevelUp""
     ""activateSkill"" */

void __fastcall
FUN_10879150(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,char param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_ESI;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  int *piStack_144;
  undefined4 uStack_140;
  int *piStack_13c;
  int **ppiStack_138;
  undefined4 *puStack_134;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puStack_124;
  undefined4 uStack_120;
  undefined4 uStack_118;
  int *piStack_10c;
  int **local_108;
  int *piStack_100;
  int iStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined1 *puStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  uint uStack_c4;
  undefined4 *puStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  uint uStack_88;
  int *piStack_84;
  int *local_80;
  uint local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  int *local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int **ppiStack_64;
  int **ppiStack_60;
  int **appiStack_5c [3];
  int ***pppiStack_50;
  int ***pppiStack_4c;
  int ***pppiStack_48;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&puStack_124;
  local_80 = (int *)0x0;
  local_7c = param_4[1];
  local_74 = param_4[3];
  local_78 = (undefined4 *)param_4[2];
  local_70 = (int *)param_4[4];
  if ((local_7c >> 6 & 1) != 0) {
    local_80 = (int *)*param_4;
    ppiStack_138 = &local_80;
    piStack_13c = (int *)0x108791c4;
    puStack_134 = local_78;
    (**(code **)(*local_80 + 4))();
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_108 = (int **)param_4[8];
  }
  else {
    local_108 = (int **)0xdeadbeaf;
  }
  uStack_c4 = param_4[0xd];
  uStack_bc = param_4[0xf];
  puStack_c0 = (undefined4 *)param_4[0xe];
  piStack_b8 = (int *)param_4[0x10];
  piStack_c8 = (int *)0x0;
  if ((uStack_c4 >> 6 & 1) != 0) {
    piStack_c8 = (int *)param_4[0xc];
    ppiStack_138 = &piStack_c8;
    piStack_13c = (int *)0x10879225;
    puStack_134 = puStack_c0;
    (**(code **)(*piStack_c8 + 4))();
  }
  if (((byte)param_4[0x13] & 0x8f) == 6) {
    if (((uint)param_4[0x13] >> 6 & 1) == 0) {
      puStack_f8 = (undefined4 *)param_4[0x14];
    }
    else {
      puStack_f8 = *(undefined4 **)param_4[0x14];
    }
  }
  else {
    puStack_f8 = (undefined4 *)&DAT_11d9d32b;
  }
  if (((byte)param_4[0x19] & 0x8f) == 6) {
    if (((uint)param_4[0x19] >> 6 & 1) == 0) {
      puStack_f4 = (undefined4 *)param_4[0x1a];
    }
    else {
      puStack_f4 = *(undefined4 **)param_4[0x1a];
    }
  }
  else {
    puStack_f4 = (undefined4 *)&DAT_11d9d32b;
  }
  if (((byte)param_4[0x1f] & 0x8f) == 6) {
    if (((uint)param_4[0x1f] >> 6 & 1) == 0) {
      puStack_f0 = (undefined1 *)param_4[0x20];
    }
    else {
      puStack_f0 = *(undefined1 **)param_4[0x20];
    }
  }
  else {
    puStack_f0 = &DAT_11d9d32b;
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) {
    puStack_134 = (undefined4 *)0x108792f2;
    iVar5 = (**(code **)(*piVar8 + 0xb4))();
    if (iVar5 != 0) {
      puStack_134 = (undefined4 *)0x10879307;
      uStack_94 = FUN_1025b060();
      puStack_134 = (undefined4 *)0x10879319;
      piStack_8c = (int *)FUN_1025b060();
      piStack_84 = *(int **)(iVar5 + 0x260e0);
      if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) {
        puStack_134 = (undefined4 *)0x1087935f;
        iVar5 = (**(code **)(*piVar8 + 0xb4))();
        if (iVar5 != 0) {
          puStack_134 = (undefined4 *)0x1087936f;
          iStack_fc = (**(code **)(**(int **)(iVar5 + 0x14) + 4))();
          if (iStack_fc != 0) {
            puStack_134 = &uStack_e0;
            ppiStack_138 = local_108;
            uStack_e0 = 0;
            iStack_dc = 0;
            uStack_d8 = 0;
            if (param_6 == '\0') {
              piStack_13c = (int *)0x108793b2;
              FUN_112b3ac0();
            }
            else {
              piStack_13c = (int *)0x108793ab;
              CTalentActiveInfo__BuildActiveTalentList();
            }
            if (piStack_e8 != piStack_e4) {
              piVar8 = piStack_e8 + 2;
              do {
                piStack_13c = (int *)0x0;
                uStack_140 = (undefined1 *)0x0;
                piStack_144 = piStack_100;
                piVar12 = (int *)0x0;
                puStack_124 = (undefined4 *)0x0;
                piStack_10c = piVar8;
                FUN_11a98de0();
                FUN_104d1550("status",piVar8[-1]);
                FUN_104d1550("currentLevel",*piVar8);
                FUN_104d1550("maxLevel",piVar8[1]);
                FUN_104d1550("talentID",piVar8[2]);
                FUN_104d1550("talentIndex",piVar8[3]);
                FUN_104d1550("unlockLevel",piVar8[7]);
                ppiStack_60 = &local_80;
                local_80 = (int *)((uint)local_80 & 0xffff0000);
                appiStack_5c[0] = ppiStack_60;
                FUN_100e5b60(&local_80);
                FUN_104d1700("strTalentTips",ppiStack_60);
                if ((ppiStack_60 != &piStack_84) && (ppiStack_60 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_60);
                }
                puVar3 = uStack_140;
                if (param_6 != '\0') {
                  uStack_140 = (undefined1 *)((uint)uStack_140 & 0xffffff);
                  puVar3 = uStack_140;
                  uStack_140._3_1_ = 0;
                  if (DAT_123bd050 != DAT_123bd054) {
                    piVar6 = DAT_123bd050;
                    do {
                      if (*piVar6 == piVar8[3]) {
                        uStack_140._3_1_ = 1;
                        goto LAB_10879503;
                      }
                      piVar6 = piVar6 + 1;
                    } while (piVar6 != DAT_123bd054);
                    uStack_140._3_1_ = 0;
                  }
LAB_10879503:
                  if (param_2 != 0) {
                    piStack_84 = (int *)0x0;
                    local_80 = (int *)0x2;
                    local_7c = CONCAT31(local_7c._1_3_,uStack_140._3_1_);
                    uStack_140 = puVar3;
                    (**(code **)(*piStack_13c + 0x14))
                              (puStack_134,"unlockNew",&piStack_84,((byte)ppiStack_138 & 0x8f) == 10
                              );
                    puVar3 = uStack_140;
                    if (((uint)local_80 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_84 + 8))(&piStack_84,local_7c);
                      puVar3 = uStack_140;
                    }
                  }
                }
                uStack_140 = puVar3;
                if (param_2 != 0) {
                  local_7c = CONCAT31(local_7c._1_3_,(char)piVar8[4]);
                  piStack_84 = (int *)0x0;
                  local_80 = (int *)0x2;
                  (**(code **)(*piStack_13c + 0x14))
                            (puStack_134,"satisfyLevelUp",&piStack_84,
                             ((byte)ppiStack_138 & 0x8f) == 10);
                  if (((uint)local_80 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_84 + 8))(&piStack_84,local_7c);
                  }
                  if (param_2 != 0) {
                    local_7c = CONCAT31(local_7c._1_3_,param_6);
                    piStack_84 = (int *)0x0;
                    local_80 = (int *)0x2;
                    (**(code **)(*piStack_13c + 0x14))
                              (puStack_134,"activateSkill",&piStack_84,
                               ((byte)ppiStack_138 & 0x8f) == 10);
                    if (((uint)local_80 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_84 + 8))(&piStack_84,local_7c);
                    }
                  }
                }
                pppiStack_4c = appiStack_5c;
                appiStack_5c[0] = (int **)((uint)appiStack_5c[0] & 0xffffff00);
                pppiStack_48 = pppiStack_4c;
                FUN_100e5aa0(pppiStack_4c);
                FUN_104d1670("talentIcon",pppiStack_4c);
                if ((pppiStack_4c != &ppiStack_60) && (pppiStack_4c != (int ***)0x0)) {
                  FUN_10c3d5d0(pppiStack_4c);
                }
                pppiStack_50 = &ppiStack_60;
                ppiStack_60 = (int **)((uint)ppiStack_60 & 0xffffff00);
                pppiStack_4c = pppiStack_50;
                FUN_100e5aa0(pppiStack_50);
                FUN_104d1670("talentName",pppiStack_50);
                if ((pppiStack_50 != &ppiStack_64) && (pppiStack_50 != (int ***)0x0)) {
                  FUN_10c3d5d0(pppiStack_50);
                }
                if (param_2 != 0) {
                  piStack_8c = (int *)0x0;
                  uStack_88 = 3;
                  piStack_84 = unaff_ESI;
                  (**(code **)(*piStack_144 + 0x14))
                            (piStack_13c,"weaponType",&piStack_8c,((byte)uStack_140 & 0x8f) == 10);
                  if ((uStack_88 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
                  }
                  if (param_2 != 0) {
                    piStack_84 = piStack_b0;
                    piStack_8c = (int *)0x0;
                    uStack_88 = 3;
                    (**(code **)(*piStack_144 + 0x14))
                              (piStack_13c,"roleBindMoney",&piStack_8c,
                               ((byte)uStack_140 & 0x8f) == 10);
                    if ((uStack_88 >> 6 & 1) != 0) {
                      (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
                    }
                    if (param_2 != 0) {
                      piStack_84 = piStack_b8;
                      piStack_8c = (int *)0x0;
                      uStack_88 = 3;
                      (**(code **)(*piStack_144 + 0x14))
                                (piStack_13c,"roleMoney",&piStack_8c,((byte)uStack_140 & 0x8f) == 10
                                );
                      if ((uStack_88 >> 6 & 1) != 0) {
                        (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
                      }
                    }
                  }
                }
                piVar6 = piVar8;
                if ((0 < piVar8[2]) &&
                   (iVar5 = FUN_108765a0(piVar8[2]), piVar6 = piVar12, iStack_ac = iVar5, iVar5 != 0
                   )) {
                  piStack_8c = (int *)0x0;
                  uStack_88 = 0;
                  uStack_b4 = CONCAT31(uStack_b4._1_3_,((byte)uStack_140 & 0x8f) == 10);
                  cVar4 = (**(code **)(*piStack_144 + 0x10))
                                    (piStack_13c,"arrayLevelupInfo",&piStack_8c,uStack_b4);
                  if (cVar4 != '\0') {
                    puStack_f8 = (undefined4 *)0x0;
                    puStack_f4 = (undefined4 *)0x0;
                    puStack_f0 = (undefined1 *)0x0;
                    FUN_112b3940(iVar5,&puStack_f8);
                    if (puStack_f4 != puStack_f8) {
                      puVar9 = puStack_f8 + 4;
                      do {
                        piStack_d4 = (int *)0x0;
                        uStack_d0 = 0;
                        puStack_124 = puVar9;
                        FUN_11a98de0(&piStack_d4,uStack_118,0,0);
                        FUN_104d1550("levelupValue",puVar9[-3]);
                        FUN_104d1550("levelupCost",puVar9[-2]);
                        appiStack_5c[0] = (int **)((uint)appiStack_5c[0] & 0xffffff00);
                        pppiStack_4c = appiStack_5c;
                        pppiStack_48 = pppiStack_4c;
                        FUN_100e5aa0(pppiStack_4c);
                        FUN_104d1670("levelupDesc",pppiStack_4c);
                        if ((pppiStack_4c != &ppiStack_60) && (pppiStack_4c != (int ***)0x0)) {
                          FUN_10c3d5d0(pppiStack_4c);
                        }
                        FUN_104d1550("levelLimit",puVar9[-1]);
                        local_78 = (undefined4 *)0x0;
                        local_74 = 0;
                        uStack_d0 = CONCAT31(uStack_d0._1_3_,((byte)piStack_e4 & 0x8f) == 10);
                        cVar4 = (**(code **)(*piStack_e8 + 0x10))
                                          (uStack_e0,"arrayLevelupMaterialItem",&local_78,uStack_d0)
                        ;
                        puVar11 = puVar9;
                        if (cVar4 != '\0') {
                          puStack_134 = (undefined4 *)0x0;
                          puVar11 = (undefined4 *)0x0;
                          unaff_ESI = (int *)0x0;
                          FUN_112b3e60(uStack_d0,puVar9[-3],&puStack_134);
                          if (puStack_134 != (undefined4 *)0x0) {
                            puVar9 = puStack_134 + 1;
                            do {
                              local_70 = (int *)0x0;
                              uStack_6c = 0;
                              FUN_11a98de0(&local_70,ppiStack_138,0,0);
                              FUN_104d1550("itemID",*puVar9);
                              FUN_104d1550("itemCounts",puVar9[1]);
                              if (iStack_dc != 0) {
                                uVar7 = FUN_113fa380(*puVar9);
                                FUN_104d1550("currentItemCounts",uVar7);
                              }
                              (**(code **)(*piStack_98 + 0x3c))(uStack_90,&local_80);
                              if ((uStack_6c >> 6 & 1) != 0) {
                                (**(code **)(*local_70 + 8))(&local_70,uStack_68);
                              }
                              puVar1 = puStack_134;
                              bVar10 = puVar9 != (undefined4 *)&DAT_fffffff8;
                              puVar9 = puVar9 + 3;
                            } while (bVar10);
                            if (puStack_134 != (undefined4 *)0x0) {
                              do {
                                puVar11 = puVar11 + -3;
                                (**(code **)*puVar11)(0);
                              } while (puVar11 != puVar1);
                            }
                          }
                          puVar11 = (undefined4 *)&stack0xfffffed8;
                          if (puStack_134 != (undefined4 *)0x0) {
                            FUN_10c3d5d0(puStack_134);
                          }
                        }
                        (**(code **)(*piStack_b0 + 0x3c))(uStack_a8,&puStack_f8);
                        if (((uint)ppiStack_60 >> 6 & 1) != 0) {
                          (*(code *)(*ppiStack_64)[2])(&ppiStack_64,appiStack_5c[0]);
                          ppiStack_64 = (int **)0x0;
                        }
                        ppiStack_60 = (int **)0x0;
                        if ((uStack_d0 >> 6 & 1) != 0) {
                          (**(code **)(*piStack_d4 + 8))(&piStack_d4,uStack_cc);
                        }
                        puVar2 = puStack_f8;
                        puVar9 = puVar11 + 5;
                        puStack_124 = puVar9;
                        puVar1 = puStack_f4;
                      } while (puVar11 + 1 != puStack_f4);
                      while (puVar1 != puVar2) {
                        (**(code **)puVar1[-5])(0);
                        puVar1 = puVar1 + -5;
                      }
                    }
                    if (puStack_f8 != (undefined4 *)0x0) {
                      FUN_10c3d5d0(puStack_f8);
                    }
                  }
                  if ((uStack_88 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_8c + 8))(&piStack_8c,piStack_84);
                  }
                }
                (**(code **)(*piStack_ec + 0x3c))(piStack_e4,&piStack_144);
                if (((uint)puStack_124 >> 6 & 1) != 0) {
                  uStack_140 = &stack0xfffffed8;
                  piStack_13c = (int *)uStack_120;
                  piStack_144 = (int *)0x10879d13;
                  (**(code **)(_DAT_00000000 + 8))();
                }
                piVar8 = piVar6 + 0xb;
                piStack_10c = piVar8;
              } while (piVar6 + 9 != piStack_e4);
            }
            if ((param_6 != '\0') && (DAT_123bd050 != DAT_123bd054)) {
              DAT_123bd054 = DAT_123bd050;
            }
            piStack_13c = (int *)0x10879d4f;
            FUN_1087d380();
          }
        }
      }
    }
  }
  if ((uStack_c4 >> 6 & 1) != 0) {
    ppiStack_138 = &piStack_c8;
    puStack_134 = puStack_c0;
    piStack_13c = (int *)0x10879d6c;
    (**(code **)(*piStack_c8 + 8))();
    piStack_c8 = (int *)0x0;
  }
  uStack_c4 = 0;
  if ((local_7c >> 6 & 1) != 0) {
    ppiStack_138 = &local_80;
    puStack_134 = local_78;
    piStack_13c = (int *)0x10879da5;
    (**(code **)(*local_80 + 8))();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1087c070 @ 1087c070  size=1948 ===== */
// calls: CWeaponDerive::GetManagers, CInfoManager::FindByName
// strings:
//   "SKILL_VIDEO_WEAPON_DERIVE_VO_CLASSNAME"
//   "SKILL_VIDEO_WEAPON_DERIVE_DATA_VO_CLASSNAME"
//   "CWeaponDerive"
//   "weaponID"
//   "isForge"
//   "isAcquired"
//   "parentNodeID"
//   "weaponArr"

/* [RE-AUTO c0]
   calls: CWeaponDerive::GetManagers
   strings:
     ""SKILL_VIDEO_WEAPON_DERIVE_VO_CLASSNAME""
     ""SKILL_VIDEO_WEAPON_DERIVE_DATA_VO_CLASSNAME""
     ""CWeaponDerive""
     ""weaponID""
     ""isForge""
     ""isAcquired""
     ""parentNodeID""
     ""weaponArr"" */

void FUN_1087c070(undefined4 param_1,int **param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int iVar8;
  char *pcVar9;
  int ***pppiVar10;
  uint uVar11;
  int **ppiStack_14c;
  uint uStack_148;
  char *pcStack_144;
  undefined1 *puStack_140;
  int iStack_13c;
  uint uStack_138;
  char *pcStack_134;
  int ***pppiStack_130;
  uint uStack_12c;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int **ppiStack_114;
  int iStack_110;
  undefined **ppuStack_10c;
  int *piStack_108;
  uint uStack_104;
  int **local_100;
  int iStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  uint local_f0;
  int iStack_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [12];
  int *piStack_c8;
  int *piStack_c4;
  int **ppiStack_c0;
  int *piStack_bc;
  undefined1 auStack_b8 [4];
  uint uStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  int **ppiStack_a8;
  undefined4 uStack_a4;
  int *piStack_98;
  int *piStack_94;
  int **ppiStack_90;
  undefined4 uStack_8c;
  int *piStack_80;
  uint uStack_7c;
  int **ppiStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_11c;
  local_100 = param_2;
  local_e8 = (int *)0x0;
  local_e4 = (int *)param_4[1];
  local_dc = param_4[3];
  uStack_12c = param_4[2];
  local_d8 = param_4[4];
  local_e0 = uStack_12c;
  if (((uint)local_e4 >> 6 & 1) != 0) {
    local_e8 = (int *)*param_4;
    pppiStack_130 = (int ***)&local_e8;
    pcStack_134 = (char *)0x1087c0d2;
    (**(code **)(*local_e8 + 4))();
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_f0 = param_4[8];
  }
  else {
    local_f0 = 0xdeadbeaf;
  }
  uStack_74 = param_4[0xd];
  uStack_70 = param_4[0xe];
  iStack_6c = param_4[0xf];
  iStack_68 = param_4[0x10];
  ppiStack_78 = (int **)0x0;
  if ((uStack_74 >> 6 & 1) != 0) {
    ppiStack_78 = (int **)param_4[0xc];
    pppiStack_130 = &ppiStack_78;
    uStack_12c = param_4[0xe];
    pcStack_134 = (char *)0x1087c152;
    (*(code *)(*ppiStack_78)[1])();
  }
  pppiStack_130 = &ppiStack_a8;
  ppiStack_a8 = (int **)0x0;
  uStack_a4 = 0;
  uStack_11c = CONCAT31(uStack_11c._1_3_,((byte)local_e4 & 0x8f) == 10);
  piStack_f8 = (int *)0x0;
  uStack_12c = uStack_11c;
  piStack_f4 = (int *)0x0;
  pcStack_134 = "SKILL_VIDEO_WEAPON_DERIVE_VO_CLASSNAME";
  iStack_13c = 0x1087c1ab;
  uStack_138 = local_e0;
  cVar2 = (**(code **)(*local_e8 + 0x10))();
  if ((cVar2 != '\0') && (((byte)uStack_b4 & 0x8f) == 6)) {
    if ((uStack_b4 >> 6 & 1) == 0) {
      piStack_108 = piStack_b0;
    }
    else {
      piStack_108 = (int *)*piStack_b0;
    }
  }
  puStack_140 = auStack_b8;
  uStack_12c = CONCAT31(uStack_12c._1_3_,((byte)piStack_f4 & 0x8f) == 10);
  iStack_13c = uStack_12c;
  pcStack_144 = "SKILL_VIDEO_WEAPON_DERIVE_DATA_VO_CLASSNAME";
  uStack_148 = local_f0;
  ppiStack_14c = (int **)0x1087c20c;
  cVar2 = (**(code **)(*piStack_f8 + 0x10))();
  if ((cVar2 != '\0') && (((byte)piStack_c4 & 0x8f) == 6)) {
    if (((uint)piStack_c4 >> 6 & 1) == 0) {
      ppiStack_114 = ppiStack_c0;
    }
    else {
      ppiStack_114 = (int **)*ppiStack_c0;
    }
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 != (int *)0x0)) {
    ppiStack_14c = (int **)0x1087c271;
    iVar4 = (**(code **)(*piVar5 + 0xb4))();
    if (iVar4 != 0) {
      local_f0 = *(uint *)(iVar4 + 0x2d1c);
      piVar5 = (int *)FUN_1087ea90();
      ppiStack_14c = (int **)0x1087c293;
      iStack_13c = (**(code **)(*piVar5 + 0x28))();
      ppiStack_14c = (int **)0x1087c29c;
      local_e4 = (int *)FUN_10876bc0();
      switch(iStack_110) {
      case 1:
        uVar11 = 3;
        break;
      case 2:
      case 0xc:
        uVar11 = 0;
        break;
      case 3:
        uVar11 = 7;
        break;
      case 4:
        uVar11 = 1;
        break;
      case 5:
        uVar11 = 6;
        break;
      case 6:
        uVar11 = 4;
        break;
      case 7:
        uVar11 = 2;
        break;
      case 8:
        uVar11 = 9;
        break;
      case 9:
        uVar11 = 8;
        break;
      case 10:
        uVar11 = 5;
        break;
      default:
        uVar11 = local_f0;
      }
      iStack_ec = 0;
      if (0 < iStack_13c) {
        do {
          iVar4 = iStack_ec;
          ppuStack_10c = &PTR_FUN_11dd261c;
          ppiStack_14c = (int **)0x1087c31d;
          puVar6 = (undefined4 *)CWeaponDerive__GetManagers();
          ppiVar7 = (int **)*puVar6;
          if ((ppiVar7 == (int **)0x0) &&
             (ppiStack_14c = ppiVar7,
             ppiVar7 = (int **)CInfoManager__FindByName(&ppuStack_10c,"CWeaponDerive"),
             ppiVar7 == (int **)0x0)) {
            if ((DAT_123c782c & 1) == 0) {
              DAT_123c782c = DAT_123c782c | 1;
              ppiStack_14c = (int **)0x1087c352;
              FUN_1087f200();
              ppiStack_14c = (int **)&LAB_11c73da0;
              FUN_11a8911f();
            }
            ppiVar7 = (int **)&DAT_123c7830;
          }
          ppuStack_10c = &PTR_FUN_11da54a8;
          if ((iVar4 < 0) || ((int)ppiVar7[6] - (int)ppiVar7[5] >> 2 <= iVar4)) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)ppiVar7[5][iVar4];
          }
          local_e8 = piVar5;
          if (piVar5[5] == iStack_110) {
            ppiStack_14c = &piStack_80;
            piStack_80 = (int *)0x0;
            uStack_7c = 0;
            FUN_11a98a70();
            iStack_6c = piVar5[7];
            iStack_68 = piVar5[8];
            iStack_64 = piVar5[9];
            iStack_60 = piVar5[10];
            iStack_5c = piVar5[0xb];
            iStack_58 = piVar5[0xc];
            iStack_54 = piVar5[0xd];
            iStack_50 = piVar5[0xe];
            iStack_4c = piVar5[0xf];
            iStack_48 = piVar5[0x10];
            iStack_44 = piVar5[0x11];
            iStack_40 = piVar5[0x12];
            iStack_3c = piVar5[0x13];
            iStack_38 = piVar5[0x14];
            iStack_34 = piVar5[0x15];
            pppiVar10 = (int ***)0x0;
            do {
              local_e4 = (int *)0x0;
              local_e0 = 0;
              FUN_11a98de0(&local_e4,uStack_118,0,0);
              pcVar1 = (char *)(&uStack_7c)[(int)pppiVar10];
              if (pcStack_134 != (char *)0x0) {
                ppiStack_14c = (int **)0x0;
                uStack_148 = 3;
                pcStack_144 = pcVar1;
                (**(code **)(*piStack_f4 + 0x14))
                          (iStack_ec,"weaponID",&ppiStack_14c,((byte)local_f0 & 0x8f) == 10);
                if ((uStack_148 >> 6 & 1) != 0) {
                  (*(code *)(*ppiStack_14c)[2])(&ppiStack_14c,pcStack_144);
                }
              }
              pcVar9 = pcStack_134;
              if (pcVar1 != (char *)0x0) {
                iVar4 = 0;
                if (0 < (int)piStack_f8) {
                  do {
                    iVar8 = FUN_10876b30(iVar4);
                    if (((uVar11 == 0) || (*(uint *)(iVar8 + 0x4c) == uVar11)) &&
                       (*(char **)(iVar8 + 0x5c) == pcVar1)) {
                      if (pcStack_134 != (char *)0x0) {
                        ppiStack_14c = (int **)0x0;
                        uStack_148 = 2;
                        pcStack_144 = (char *)CONCAT31(pcStack_144._1_3_,1);
                        (**(code **)(*piStack_f4 + 0x14))
                                  (iStack_ec,"isForge",&ppiStack_14c,((byte)local_f0 & 0x8f) == 10);
                        if ((uStack_148 >> 6 & 1) != 0) {
                          (*(code *)(*ppiStack_14c)[2])(&ppiStack_14c,pcStack_144);
                        }
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < (int)piStack_f8);
                }
                uVar3 = FUN_113fb0e0(pcVar1);
                pcVar9 = pcStack_134;
                pppiVar10 = pppiStack_130;
                if (pcStack_134 != (char *)0x0) {
                  pcStack_144 = (char *)CONCAT31(pcStack_144._1_3_,uVar3);
                  ppiStack_14c = (int **)0x0;
                  uStack_148 = 2;
                  (**(code **)(*piStack_f4 + 0x14))
                            (iStack_ec,"isAcquired",&ppiStack_14c,((byte)local_f0 & 0x8f) == 10);
                  pppiVar10 = pppiStack_130;
                  if ((uStack_148 >> 6 & 1) != 0) {
                    (*(code *)(*ppiStack_14c)[2])(&ppiStack_14c,pcStack_144);
                    pppiVar10 = pppiStack_130;
                  }
                }
              }
              (**(code **)(*piStack_94 + 0x3c))(uStack_8c,&piStack_f4);
              if ((local_e0 >> 6 & 1) != 0) {
                (**(code **)(*local_e4 + 8))(&local_e4,local_dc);
              }
              pppiVar10 = (int ***)((int)pppiVar10 + 1);
            } while ((int)pppiVar10 < 0xf);
            uStack_b4 = 0;
            piStack_b0 = (int *)0x0;
            FUN_11a98de0(&uStack_b4,uStack_11c,0,0);
            if (pcVar9 != (char *)0x0) {
              ppiStack_14c = (int **)0x0;
              uStack_148 = 3;
              pcStack_144 = *(char **)(iStack_fc + 0x18);
              (**(code **)(*piStack_c4 + 0x14))
                        (piStack_bc,"parentNodeID",&ppiStack_14c,((byte)ppiStack_c0 & 0x8f) == 10);
              if ((uStack_148 >> 6 & 1) != 0) {
                (*(code *)(*ppiStack_14c)[2])(&ppiStack_14c,pcStack_144);
              }
            }
            (**(code **)(*piStack_c4 + 0x14))
                      (piStack_bc,"weaponArr",&piStack_94,((byte)ppiStack_c0 & 0x8f) == 10);
            (**(code **)(*piStack_bc + 0x3c))(uStack_b4,auStack_d4);
            if ((uStack_ac >> 6 & 1) != 0) {
              ppiStack_14c = ppiStack_a8;
              (**(code **)(*piStack_b0 + 8))(&piStack_b0);
              piStack_b0 = (int *)0x0;
            }
            uStack_ac = 0;
            if ((uStack_7c >> 6 & 1) != 0) {
              ppiStack_14c = ppiStack_78;
              (**(code **)(*piStack_80 + 8))(&piStack_80);
            }
          }
          iStack_ec = iStack_ec + 1;
        } while (iStack_ec < iStack_13c);
      }
    }
  }
  if (((uint)piStack_c4 >> 6 & 1) != 0) {
    ppiStack_14c = ppiStack_c0;
    (**(code **)(*piStack_c8 + 8))(&piStack_c8);
    piStack_c8 = (int *)0x0;
  }
  piStack_c4 = (int *)0x0;
  if (((uint)piStack_94 >> 6 & 1) != 0) {
    ppiStack_14c = ppiStack_90;
    (**(code **)(*piStack_98 + 8))(&piStack_98);
    piStack_98 = (int *)0x0;
  }
  piStack_94 = (int *)0x0;
  if ((uStack_104 >> 6 & 1) != 0) {
    ppiStack_14c = local_100;
    (**(code **)(*piStack_108 + 8))(&piStack_108);
  }
  puStack_140 = (undefined1 *)0x1087c84f;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1088c9c0 @ 1088c9c0  size=488 ===== */
// strings:
//   "_checkEquipUpgrade"
//   "_requestEquipUpgrade"
//   "_canEquipUpgrade"
//   "_requestPutItemIn"
//   "_requestEquipUpgradeInfo"
//   "_requrestAttributeData"
//   "_openEquipShow"
//   "_checkItemBindStateChange"
//   "_getLeveRange"
//   "GetNewEquipDeriveLevel"
//   "CheckSlotChange"

/* [RE-AUTO c0]
   strings:
     ""_checkEquipUpgrade""
     ""_requestEquipUpgrade""
     ""_canEquipUpgrade""
     ""_requestPutItemIn""
     ""_requestEquipUpgradeInfo""
     ""_requrestAttributeData""
     ""_openEquipShow""
     ""_checkItemBindStateChange""
     ""_getLeveRange""
     ""GetNewEquipDeriveLevel"" */

void FUN_1088c9c0(void)

{
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined1 auStack_44 [4];
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 **ppuStack_14;
  undefined4 **ppuStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_44;
  if (in_stack_00000014 == 1) {
    local_40 = (int *)0x0;
    local_3c = in_stack_00000010[1];
    local_34 = in_stack_00000010[3];
    local_38 = in_stack_00000010[2];
    local_30 = in_stack_00000010[4];
    if ((local_3c >> 6 & 1) != 0) {
      local_40 = (int *)*in_stack_00000010;
      (**(code **)(*local_40 + 4))(&local_40,local_38);
    }
    FUN_104d13b0("_checkEquipUpgrade",FUN_1088d230);
    FUN_104d13b0("_requestEquipUpgrade",FUN_1088d770);
    FUN_104d13b0("_canEquipUpgrade",FUN_1088cbb0);
    FUN_104d13b0("_requestPutItemIn",FUN_1088dc50);
    FUN_104d13b0("_requestEquipUpgradeInfo",FUN_1088e010);
    FUN_104d13b0("_requrestAttributeData",FUN_1088e550);
    FUN_104d13b0("_openEquipShow",FUN_1088e940);
    FUN_104d13b0("_checkItemBindStateChange",FUN_1088ff50);
    FUN_104d13b0("_getLeveRange",FUN_10891b00);
    ppuStack_14 = &puStack_24;
    ppuStack_10 = ppuStack_14;
    FUN_100b62c0("GetNewEquipDeriveLevel","");
    FUN_10892510(auStack_2c,FUN_108912a0);
    if ((puStack_20 != &local_34) && (puStack_20 != (undefined4 *)0x0)) {
      FUN_10c3d5d0(puStack_20);
    }
    puStack_24 = &local_34;
    puStack_20 = puStack_24;
    FUN_100b62c0("CheckSlotChange","");
    FUN_10892510(&local_3c,FUN_108913c0);
    if ((ppuStack_10 != &puStack_24) && (ppuStack_10 != (undefined4 **)0x0)) {
      FUN_10c3d5d0(ppuStack_10);
    }
    if ((local_3c >> 6 & 1) != 0) {
      (**(code **)(*local_40 + 8))(&local_40,local_38);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1088e010 @ 1088e010  size=1337 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "isWeapon"
//   "roleLevel"
//   "srcEquipEnforceLv"
//   "awakeningLevel"
//   "roleHunterStarLv"
//   "hasWakeup"
//   "sourceRare"
//   "itemLevel"
//   "ItemRank"
//   "sourceItemName"
//   "bPointType"
//   "destArrayLength"
//   "destEquipArray"

/* [RE-AUTO c0]
   strings:
     ""isWeapon""
     ""roleLevel""
     ""srcEquipEnforceLv""
     ""awakeningLevel""
     ""roleHunterStarLv""
     ""hasWakeup""
     ""sourceRare""
     ""itemLevel""
     ""ItemRank""
     ""sourceItemName"" */

void FUN_1088e010(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined **ppuStack_ac;
  undefined4 uStack_9c;
  undefined1 local_95;
  int *local_94;
  int local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  int *piStack_84;
  int *local_80;
  uint local_7c;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  undefined **ppuStack_58;
  undefined1 auStack_4c [8];
  int aiStack_44 [6];
  undefined1 auStack_2c [4];
  undefined *apuStack_28 [4];
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_9c;
  local_94 = param_2;
  local_95 = 0;
  if (param_5 != 5) goto LAB_1088e506;
  local_7c = param_4[1];
  local_74 = param_4[3];
  local_78 = (undefined **)param_4[2];
  local_70 = param_4[4];
  local_80 = (int *)0x0;
  if ((local_7c >> 6 & 1) != 0) {
    local_80 = (int *)*param_4;
    ppuStack_ac = local_78;
    (**(code **)(*local_80 + 4))(&local_80);
  }
  if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
    local_90 = param_4[8];
  }
  else {
    local_90 = -0x21524151;
  }
  if (((param_4[0xd] & 0x8f) == 3) ||
     (ppuVar8 = (undefined **)0xdeadbeaf, (param_4[0xd] & 0x8f) == 4)) {
    ppuVar8 = (undefined **)param_4[0xe];
  }
  if (((param_4[0x13] & 0x8f) == 3) || ((param_4[0x13] & 0x8f) == 4)) {
    uStack_8c = param_4[0x14];
  }
  else {
    uStack_8c = 0xdeadbeaf;
  }
  if (((param_4[0x19] & 0x8f) == 3) || ((param_4[0x19] & 0x8f) == 4)) {
    uStack_64 = param_4[0x1a];
  }
  else {
    uStack_64 = 0xdeadbeaf;
  }
  piStack_68 = (int *)0x0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    ppuStack_ac = (undefined **)0x1088e135;
    piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))();
    piStack_68 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      piStack_68 = piVar3;
    }
  }
  piVar3 = piStack_68;
  aiStack_44[0] = piStack_68[0xb47];
  if ((aiStack_44[0] != 0) &&
     (ppuStack_ac = ppuVar8, piVar4 = (int *)FUN_113f9bb0(local_90), piVar4 != (int *)0x0)) {
    ppuStack_ac = (undefined **)0x1088e16d;
    iVar5 = FUN_11669250();
    ppuStack_ac = *(undefined ***)(iVar5 + 0x10);
    local_90 = FUN_1052bdd0();
    uStack_5c = 0;
    if (local_90 != 0) {
      if (piVar4[0x6c] == 0) {
LAB_1088e1a0:
        uStack_88 = uStack_88 & 0xffffff00;
      }
      else {
        uStack_88 = CONCAT31(uStack_88._1_3_,1);
        if (piVar4[0x6b] == 0) goto LAB_1088e1a0;
      }
      ppuStack_ac = (undefined **)0x1088e1ac;
      uVar6 = FUN_116c5290();
      ppuStack_ac = (undefined **)(uVar6 & 0xff);
      FUN_104d15e0("isWeapon");
      ppuStack_ac = (undefined **)0x1088e1d0;
      ppuStack_ac = (undefined **)CPlayer__GetHuntRankOrCount();
      FUN_104d1550("roleLevel");
      ppuStack_ac = (undefined **)0x1088e1ed;
      ppuStack_ac = (undefined **)FUN_1166c160();
      FUN_104d1550("srcEquipEnforceLv");
      FUN_104d1440("awakeningLevel",piVar4[0x6b]);
      ppuStack_58 = (undefined **)0x0;
      iStack_60 = 0;
      ppuStack_ac = (undefined **)0x1088e235;
      iVar5 = (**(code **)(*piVar3 + 0x46c))();
      if (iVar5 != 0) {
        ppuStack_ac = (undefined **)0x1088e243;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x46c))();
        ppuStack_ac = (undefined **)0x1088e24a;
        ppuStack_58 = (undefined **)(**(code **)(*piVar3 + 0x18))();
        ppuStack_ac = (undefined **)0x1088e259;
        iVar5 = FUN_1025b060();
        ppuStack_ac = (undefined **)0x1088e26a;
        iStack_60 = FUN_1025b060();
        iStack_60 = iStack_60 + iVar5;
      }
      ppuStack_ac = ppuStack_58;
      FUN_104d1550("roleHunterStarLv");
      FUN_104d15e0("hasWakeup",uStack_88);
      FUN_104d1550("sourceRare",*(undefined4 *)(local_90 + 0x4c));
      ppuStack_ac = (undefined **)0x1088e2bd;
      ppuStack_ac = (undefined **)(**(code **)(*piVar4 + 0x18))();
      FUN_104d1550("itemLevel");
      ppuStack_ac = (undefined **)0x1088e2d8;
      ppuStack_ac = (undefined **)FUN_11669840();
      FUN_104d1550("ItemRank");
      ppuStack_ac = apuStack_28;
      iVar5 = FUN_100e5b40();
      FUN_104d1670("sourceItemName",*(undefined4 *)(iVar5 + 0x14));
      if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_18);
      }
      cVar2 = FUN_10891270();
      if (((cVar2 == '\0') || (local_90 != 0x3f)) && (local_90 != 0x32)) {
        FUN_104d15e0("bPointType",0);
      }
      else {
        FUN_104d15e0("bPointType",1);
        iStack_60 = CONCAT31(iStack_60._1_3_,1);
      }
      piVar3 = aiStack_44;
      aiStack_44[0] = 0;
      aiStack_44[1] = 0;
      uStack_9c = CONCAT13(1,(undefined3)uStack_9c);
      uStack_8c = CONCAT31(uStack_8c._1_3_,((byte)local_80 & 0x8f) == 10);
      uVar9 = uStack_8c;
      cVar2 = (**(code **)(*piStack_84 + 0x10))(local_7c,"destArrayLength",piVar3,uStack_8c);
      if (cVar2 != '\0') {
        aiStack_44[2] = 0;
        aiStack_44[3] = 0;
        uStack_9c = CONCAT31(uStack_9c._1_3_,((byte)local_90 & 0x8f) == 10);
        cVar2 = (**(code **)(*local_94 + 0x10))(uStack_8c,"destEquipArray",aiStack_44 + 2,uStack_9c)
        ;
        piVar1 = local_80;
        if (cVar2 != '\0') {
          ppuStack_ac = (undefined **)piVar4[0xe];
          local_78 = &PTR_FUN_11dd2bf4;
          local_74 = 0;
          local_70 = 0;
          uStack_6c = 0;
          uVar7 = (**(code **)(*piVar4 + 0x18))(piVar4,&ppuStack_ac,local_80,uStack_88);
          uVar7 = FUN_11669840(uVar7);
          uVar7 = FUN_1166c400(uVar7);
          uVar7 = FUN_1166c160(uVar7);
          FUN_1088f6f0(piVar3,piStack_68,piStack_84,uStack_8c,uVar7);
          FUN_1088eca0(auStack_4c,&uStack_64,&local_78,piVar4,uVar9,piVar1,uStack_88);
          local_78 = &PTR_FUN_11dd2bf4;
          FUN_108923c0();
        }
        FUN_104d7c10();
      }
      FUN_104d7c10();
    }
  }
  if ((local_7c >> 6 & 1) != 0) {
    ppuStack_ac = local_78;
    (**(code **)(*local_80 + 8))(&local_80);
  }
LAB_1088e506:
  if (((uint)param_1[1] >> 6 & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = local_95;
  }
  else {
    ppuStack_ac = (undefined **)param_1[2];
    (**(code **)(*(int *)*param_1 + 8))(param_1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = local_95;
  }
  param_1[1] = 2;
  FUN_11a89daa();
  return;
}



/* ===== FUN_1088eca0 @ 1088eca0  size=1121 ===== */
// strings:
//   "equipID"
//   "equipName"
//   "equipRare"
//   "itemLevel"
//   "playerUseLevelMin"
//   "playerUseLevelMax"
//   "equipCounts"
//   "upgradeMoney"
//   "currentMoney"
//   "needUnboundGold"
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
     ""equipID""
     ""equipName""
     ""equipRare""
     ""itemLevel""
     ""playerUseLevelMin""
     ""playerUseLevelMax""
     ""equipCounts""
     ""upgradeMoney""
     ""currentMoney""
     ""needUnboundGold"" */

void FUN_1088eca0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 char param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 uVar9;
  int *local_88;
  uint local_84;
  undefined4 local_80;
  int local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_64 = param_1;
  local_6c = param_4;
  uVar4 = *(uint *)(param_2 + 4) & 0x8f;
  local_4c = param_3;
  if ((uVar4 == 3) || (uVar4 == 4)) {
    local_50 = *(uint *)(param_2 + 8);
  }
  else {
    local_50 = 0xdeadbeaf;
  }
  uVar4 = 0;
  local_48 = 0;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     ((local_70 = (**(code **)(*piVar1 + 0xb4))(), local_70 != 0 &&
      (local_44 = *(int *)(param_3 + 4), local_44 != *(int *)(local_4c + 8))))) {
    do {
      if (local_50 <= uVar4) break;
      local_40 = (int *)0x0;
      local_3c = 0;
      cVar3 = (**(code **)(*(int *)*local_64 + 0x30))(local_64[2],uVar4,&local_40);
      iVar8 = local_44;
      if (cVar3 != '\0') {
        FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(local_44 + 0x10));
        FUN_104d1550("equipID",*(undefined4 *)(iVar8 + 0xc));
        local_24[0] = 0;
        local_14 = local_24;
        local_10 = local_14;
        FUN_100e5aa0(local_14);
        FUN_104d1670("equipName",local_10);
        if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_10);
        }
        FUN_104d1550("equipRare",*(undefined4 *)(iVar8 + 0x24));
        FUN_104d1550("itemLevel",*(undefined4 *)(iVar8 + 0x28));
        FUN_104d1550("playerUseLevelMin",*(undefined4 *)(iVar8 + 0x54));
        FUN_104d1550("playerUseLevelMax",*(undefined4 *)(iVar8 + 0x58));
        FUN_104d1550("equipCounts",*(undefined4 *)(iVar8 + 0x2c));
        FUN_104d1550("upgradeMoney",*(undefined4 *)(iVar8 + 0x30));
        FUN_104d1550("currentMoney",*(undefined4 *)(iVar8 + 0x34));
        FUN_104d15e0("needUnboundGold",*(undefined1 *)(iVar8 + 0x6c));
        FUN_104d1550("enforceRequirement",*(undefined4 *)(iVar8 + 4));
        FUN_104d1550("hunterstarRequirement",*(undefined4 *)(iVar8 + 8));
        FUN_104d1550("rankDownLevel",*(undefined4 *)(iVar8 + 0x38));
        FUN_104d1550("enforceDownLevel",*(undefined4 *)(iVar8 + 0x3c));
        FUN_104d1550("newRankLevel",*(undefined4 *)(iVar8 + 0x40));
        FUN_104d15e0("bBindState",*(undefined1 *)(iVar8 + 0x4c));
        FUN_104d1550("enforceLevel",*(undefined4 *)(iVar8 + 0x18));
        FUN_104d1550("breakLevel",*(undefined4 *)(iVar8 + 0x1c));
        FUN_104d15e0("canBreak",*(undefined1 *)(iVar8 + 0x20));
        FUN_104d1550("enforceRuleID",*(undefined4 *)(iVar8 + 0x50));
        FUN_104d1550("nCraftCreditID",*(undefined4 *)(iVar8 + 0x60));
        uVar5 = FUN_113fa380(*(undefined4 *)(iVar8 + 0x60));
        FUN_104d1550("nOwnCraftCredit",uVar5);
        FUN_104d1550("nCraftCreditMax",*(undefined4 *)(iVar8 + 100));
        FUN_104d1550("nCraftMoney",*(undefined4 *)(iVar8 + 0x68));
        local_88 = (int *)0x0;
        local_84 = 0;
        local_60 = CONCAT31(local_60._1_3_,((byte)local_3c & 0x8f) == 10);
        cVar3 = (**(code **)(*local_40 + 0x10))(local_38,"arrayMaterialData",&local_88,local_60);
        if (cVar3 == '\0') {
LAB_1088eff3:
          if (param_6 == '\0') goto LAB_1088f088;
          uVar9 = 0;
        }
        else {
          if (param_6 != '\0') {
            FUN_108910e0(&local_40,&local_88,local_6c,param_5,*(undefined4 *)(iVar8 + 0xc),param_7);
            goto LAB_1088eff3;
          }
          local_68 = (**(code **)(*local_88 + 0x28))(local_80);
          uVar4 = 0;
          FUN_10892240(iVar8 + 0x7c);
          puVar7 = local_5c;
          if (local_5c != local_58) {
            do {
              puVar6 = local_58;
              puVar2 = local_5c;
              if (local_68 <= uVar4) break;
              FUN_1088f110(&local_88,uVar4,puVar7);
              puVar7 = puVar7 + 6;
              uVar4 = uVar4 + 1;
              puVar6 = local_58;
              puVar2 = local_5c;
            } while (puVar7 != local_58);
            do {
              puVar6 = puVar6 + -6;
              (**(code **)*puVar6)(0);
            } while (puVar6 != puVar2);
          }
          uVar4 = local_48;
          iVar8 = local_44;
          if (local_5c != (undefined4 *)0x0) {
            FUN_10c3d5d0(local_5c);
            uVar4 = local_48;
            iVar8 = local_44;
          }
LAB_1088f088:
          uVar9 = *(undefined1 *)(iVar8 + 0x14);
        }
        FUN_104d15e0("equipHasEnoughMaterial",uVar9);
        if ((local_84 >> 6 & 1) != 0) {
          (**(code **)(*local_88 + 8))(&local_88,local_80);
        }
      }
      uVar4 = uVar4 + 1;
      local_48 = uVar4;
      if ((local_3c >> 6 & 1) != 0) {
        (**(code **)(*local_40 + 8))(&local_40,local_38);
      }
      local_44 = iVar8 + 0x88;
    } while (local_44 != *(int *)(local_4c + 8));
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10891950 @ 10891950  size=431 ===== */
// strings:
//   "strUpgradeItemName"

/* [RE-AUTO c0]
   strings:
     ""strUpgradeItemName"" */

void __fastcall
FUN_10891950(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            char param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_4 == 0xe) {
    iVar2 = FUN_1166c4b0();
    uVar1 = *(undefined4 *)(iVar2 + 0x114);
    uVar3 = FUN_11669840();
    iVar2 = FUN_117b5190(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_10891aeb;
    FUN_115c50c0(param_2,param_3,*(undefined4 *)(iVar2 + 0xb8),iVar2 + 0xc0);
    if (((param_6 == '\0') || (param_1 == 0)) || (param_7 == 0)) goto LAB_10891aeb;
    FUN_1166c4b0();
  }
  else if (param_4 == 0x3f) {
    iVar2 = FUN_1166c4b0();
    iVar2 = FUN_117b6d70(*(undefined4 *)(iVar2 + 0x11c),param_8);
    if (iVar2 == 0) goto LAB_10891aeb;
    FUN_115c50c0(param_2,param_3,*(undefined4 *)(iVar2 + 0xc0),iVar2 + 0xd4);
    if (((param_6 == '\0') || (param_1 == 0)) || (param_7 == 0)) goto LAB_10891aeb;
    FUN_1166c4b0();
  }
  else {
    if (param_4 != 0x32) goto LAB_10891aeb;
    iVar2 = FUN_1166c4b0();
    if (*(int *)(iVar2 + 0x218) == 0) goto LAB_10891aeb;
    iVar2 = FUN_11839c40(param_5);
    if (iVar2 != 0) {
      FUN_115c50c0(param_2,param_3,*(undefined4 *)(iVar2 + 0x8c),iVar2 + 4);
    }
    if (((param_6 == '\0') || (param_1 == 0)) || (param_7 == 0)) goto LAB_10891aeb;
    iVar2 = FUN_1052bdd0(param_5);
    if (iVar2 == 0) goto LAB_10891aeb;
  }
  iVar2 = FUN_100e5b40(local_20);
  FUN_104d1670("strUpgradeItemName",*(undefined4 *)(iVar2 + 0x14));
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
LAB_10891aeb:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10893f30 @ 10893f30  size=254 ===== */
// strings:
//   "InitModel"
//   "setPointMaterialData"
//   "requestForge"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""setPointMaterialData""
     ""requestForge"" */

void FUN_10893f30(void)

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
  ppcStack_34 = (code **)0x10893f64;
  FUN_100b62c0();
  ppcStack_34 = (code **)FUN_10894040;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10893f75;
  FUN_10895510();
  if ((pppcStack_20 != &ppcStack_34) && (pppcStack_20 != (code ***)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x10893f8b;
    FUN_10c3d5d0();
  }
  local_24 = &ppcStack_34;
  pppcStack_3c = (code ***)0x11dd2fe8;
  ppcStack_40 = (code **)0x11dd2fd4;
  pcStack_44 = (code *)0x10893fab;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = FUN_10894960;
  pppcStack_48 = (code ***)&pppcStack_3c;
  ppcStack_4c = (code **)0x10893fbc;
  FUN_10895510();
  if ((ppcStack_30 != &pcStack_44) && (ppcStack_30 != (code **)0x0)) {
    ppcStack_4c = ppcStack_30;
    pcStack_50 = (char *)0x10893fd2;
    FUN_10c3d5d0();
  }
  ppcStack_34 = &pcStack_44;
  ppcStack_4c = (code **)0x11dd3078;
  pcStack_50 = "requestForge";
  pcStack_54 = (code *)0x10893ff2;
  ppcStack_30 = ppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_10895220;
  FUN_10895510(&ppcStack_4c);
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_40);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10894040 @ 10894040  size=1977 ===== */
// calls: CCraftInfo::BuildCraftLists
// strings:
//   "forgeitemdataCacheList"
//   "FORGE_ITEM_DATA_CLASS"
//   "strSearchKeyword"
//   "canCraft"
//   "craftID"
//   "craftType"
//   "craftSubType"
//   "nLevelLimit"
//   "nMoney"
//   "nStarLimit"
//   "nDistanceType"
//   "nCraftCreditID"
//   "nOwnCraftCredit"
//   "nCraftCreditMax"
//   "nCraftMoney"
//   "MATERIAL_ITEM_DATA_CLASS"
//   "nNeedItemNum"
//   "materialIDArr"
//   "strItemIconName"
//   "strItemDescrbie"

/* [RE-AUTO c0]
   strings:
     ""forgeitemdataCacheList""
     ""FORGE_ITEM_DATA_CLASS""
     ""strSearchKeyword""
     ""canCraft""
     ""craftID""
     ""craftType""
     ""craftSubType""
     ""nLevelLimit""
     ""nMoney""
     ""nStarLimit"" */

void FUN_10894040(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *piStack_130;
  char *pcStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  int *piStack_11c;
  int **ppiStack_118;
  int *piStack_114;
  undefined1 auStack_104 [4];
  int *piStack_100;
  int *piStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int *piStack_e8;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  undefined4 local_d4;
  int *local_d0;
  undefined4 *puStack_c8;
  int *piStack_c4;
  int iStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  undefined1 auStack_84 [4];
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_104;
  if (in_stack_00000014 == 2) {
    local_e0 = (int *)0x0;
    local_d4 = in_stack_00000010[3];
    local_dc = in_stack_00000010[1];
    piStack_114 = (int *)in_stack_00000010[2];
    local_d0 = (int *)in_stack_00000010[4];
    local_d8 = piStack_114;
    if ((local_dc >> 6 & 1) != 0) {
      local_e0 = (int *)*in_stack_00000010;
      ppiStack_118 = &local_e0;
      piStack_11c = (int *)0x108940a9;
      (**(code **)(*local_e0 + 4))();
    }
    if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
      puVar8 = (undefined4 *)in_stack_00000010[8];
    }
    else {
      puVar8 = (undefined4 *)0xdeadbeaf;
    }
    piStack_98 = (int *)0x0;
    piStack_94 = (int *)0x0;
    ppiStack_118 = &piStack_98;
    piStack_100 = (int *)CONCAT31(piStack_100._1_3_,((byte)local_dc & 0x8f) == 10);
    piStack_114 = piStack_100;
    piStack_11c = (int *)0x11dd3054;
    uStack_124 = 0x1089410b;
    piStack_120 = local_d8;
    puStack_c8 = puVar8;
    cVar2 = (**(code **)(*local_e0 + 0x10))();
    if (cVar2 != '\0') {
      ppiStack_118 = &piStack_b8;
      piStack_b8 = (int *)0x0;
      uStack_b4 = 0;
      piStack_100 = (int *)CONCAT31(piStack_100._1_3_,((byte)local_dc & 0x8f) == 10);
      piStack_114 = piStack_100;
      piStack_11c = (int *)0x11dd303c;
      piStack_120 = local_d8;
      uStack_124 = 0x10894150;
      cVar2 = (**(code **)(*local_e0 + 0x10))();
      if ((cVar2 != '\0') && (((byte)uStack_b4 & 0x8f) == 6)) {
        if ((uStack_b4 >> 6 & 1) == 0) {
          piStack_c4 = piStack_b0;
        }
        else {
          piStack_c4 = (int *)*piStack_b0;
        }
        piStack_114 = (int *)0x10894188;
        iStack_7c = FUN_107cb5c0();
        if (iStack_7c == 0) {
LAB_108947c7:
          piStack_114 = (int *)0x108947d0;
          FUN_104d7c10();
          piStack_114 = (int *)0x108947d9;
          FUN_104d7c10();
          piStack_114 = (int *)0x108947e2;
          FUN_104d7c10();
          FUN_11a89daa();
          return;
        }
        piStack_114 = (int *)0x1089419e;
        piStack_100 = (int *)FUN_11162d90();
        if (piStack_100 == (int *)0x0) goto LAB_108947c7;
        piStack_114 = (int *)0x108941af;
        iStack_80 = FUN_10876bc0();
        iStack_c0 = 0;
        if (0 < iStack_80) {
          do {
            ppiStack_118 = (int **)0x108941cc;
            piStack_114 = (int *)iStack_c0;
            piVar4 = (int *)FUN_10876b30();
            piStack_bc = piVar4;
            if (piVar4 != (int *)0x0) {
              piStack_114 = (int *)0x108941e4;
              cVar2 = FUN_108496a0();
              if ((cVar2 != '\0') && (piVar4[0x11] != 2)) {
                if (piVar4[0x42] == piVar4[0x43]) {
LAB_10894243:
                  if (piVar4[0x45] == piVar4[0x46]) {
LAB_108942c2:
                    piStack_114 = (int *)0x0;
                    ppiStack_118 = (int **)0x0;
                    piStack_11c = piStack_c4;
                    piStack_120 = &iStack_f8;
                    iStack_f8 = 0;
                    uStack_f4 = 0;
                    uStack_124 = 0x108942e6;
                    FUN_11a98de0();
                    uStack_124 = 0x108942ed;
                    uStack_124 = (**(code **)(*piVar4 + 0x18))();
                    piStack_128 = (int *)0x108942f7;
                    uVar3 = FUN_1124f6a0();
                    piStack_128 = (int *)piVar4[0x10];
                    piStack_88 = (int *)CONCAT31(piStack_88._1_3_,uVar3);
                    pcStack_12c = "strSearchKeyword";
                    piStack_130 = (int *)0x10894311;
                    FUN_104d1670();
                    piStack_130 = piStack_88;
                    FUN_104d15e0("canCraft");
                    piStack_128 = (int *)0x10894332;
                    piStack_128 = (int *)(**(code **)(*piVar4 + 0x18))();
                    pcStack_12c = "craftID";
                    piStack_130 = (int *)0x10894343;
                    FUN_104d1550();
                    piStack_130 = (int *)piVar4[0x12];
                    FUN_104d1550("craftType");
                    FUN_104d1550("craftSubType",piVar4[0x13]);
                    FUN_104d1550(&DAT_11dbb0b4,piVar4[0x17]);
                    FUN_104d1550("nLevelLimit",piVar4[0x15]);
                    FUN_104d1550("nMoney",piVar4[0x20]);
                    FUN_104d1550("nStarLimit",piVar4[0x16]);
                    FUN_104d1550("nDistanceType",piVar4[0x14]);
                    piStack_128 = (int *)piVar4[0x21];
                    pcStack_12c = "nCraftCreditID";
                    piStack_130 = (int *)0x108943e4;
                    FUN_104d1550();
                    piStack_128 = (int *)piVar4[0x21];
                    pcStack_12c = (char *)0x108943ff;
                    pcStack_12c = (char *)FUN_113fa380();
                    piStack_130 = (int *)0x11dd2ed8;
                    FUN_104d1550();
                    FUN_104d1550("nCraftCreditMax",piVar4[0x22]);
                    FUN_104d1550("nCraftMoney",piVar4[0x23]);
                    uStack_70 = 0;
                    pcStack_12c = (char *)&uStack_70;
                    uStack_6c = 0;
                    piStack_130 = (int *)0x10894464;
                    FUN_11a98a70();
                    uStack_8c = 0;
                    piStack_88 = (int *)0x0;
                    piStack_94 = (int *)CONCAT31(piStack_94._1_3_,((byte)iStack_f8 & 0x8f) == 10);
                    piStack_130 = piStack_94;
                    cVar2 = (**(code **)(*piStack_fc + 0x10))
                                      (uStack_f4,"MATERIAL_ITEM_DATA_CLASS",&uStack_8c);
                    if ((cVar2 != '\0') && (((byte)piStack_98 & 0x8f) == 6)) {
                      piVar6 = piStack_94;
                      if (((uint)piStack_98 >> 6 & 1) != 0) {
                        piVar6 = (int *)*piStack_94;
                      }
                      puVar8 = (undefined4 *)piVar4[0x48];
                      puStack_c8 = (undefined4 *)piVar4[0x49];
                      piStack_128 = piVar6;
                      if (puVar8 != puStack_c8) {
                        do {
                          uStack_6c = 0;
                          uStack_68 = 0;
                          FUN_11a98de0(&uStack_6c,piVar6,0,0);
                          FUN_104d1550(&DAT_11dbb0b4,*puVar8);
                          FUN_104d1550("nNeedItemNum",puVar8[1]);
                          (**(code **)(*piStack_94 + 0x3c))(uStack_8c,&iStack_7c);
                          FUN_104d7c10();
                          puVar8 = puVar8 + 2;
                          piVar4 = piStack_e8;
                        } while (puVar8 != puStack_c8);
                      }
                    }
                    FUN_104d12b0("materialIDArr",auStack_84);
                    iVar5 = FUN_10254130(piVar4[0x17]);
                    if (iVar5 == 0) {
                      FUN_104d1670("strItemIconName",&DAT_11d9d32b);
                      FUN_104d1670("strItemDescrbie",&DAT_11d9d32b);
                      FUN_104d1670("strItemName",&DAT_11d9d32b);
                    }
                    else {
                      puStack_40 = auStack_50;
                      auStack_50[0] = 0;
                      puStack_3c = puStack_40;
                      FUN_100e5aa0(puStack_40);
                      FUN_104d1670("strItemIconName",*(undefined4 *)(iVar5 + 0xb4));
                      FUN_116bd4d0(auStack_54);
                      FUN_100e5aa0();
                      FUN_104d1670("strItemDescrbie",uStack_44);
                      auStack_74[0] = 0;
                      puStack_64 = auStack_74;
                      puStack_60 = puStack_64;
                      FUN_100e5aa0(puStack_64);
                      FUN_104d1670("strItemName",puStack_64);
                      if ((puStack_64 != auStack_78) && (puStack_64 != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(puStack_64);
                      }
                      if ((puStack_48 != auStack_5c) && (puStack_48 != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(puStack_48);
                      }
                    }
                    (**(code **)(*local_d0 + 0x3c))(puStack_c8,&piStack_130);
                    FUN_104d7c10();
                    FUN_104d7c10();
                    FUN_104d7c10();
                  }
                  else {
                    piStack_114 = (int *)0x10894256;
                    iVar5 = FUN_107cb5c0();
                    uVar7 = 0;
                    piStack_fc = *(int **)(iVar5 + 0x2b80);
                    if (piVar4[0x46] - piVar4[0x45] >> 2 != 0) {
                      do {
                        piStack_114 = *(int **)(piVar4[0x45] + uVar7 * 4);
                        ppiStack_118 = (int **)0x1089428e;
                        piStack_114 = (int *)FUN_107d7930();
                        if (piStack_114 != (int *)0x0) {
                          ppiStack_118 = (int **)0x108942a5;
                          cVar2 = (**(code **)(*piStack_fc + 0x2c))();
                          if (cVar2 != '\0') goto LAB_108942c2;
                        }
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < (uint)(piVar4[0x46] - piVar4[0x45] >> 2));
                    }
                  }
                }
                else {
                  uVar7 = 0;
                  if (piVar4[0x43] - piVar4[0x42] >> 2 != 0) {
                    do {
                      puVar1 = *(undefined4 **)(piVar4[0x42] + uVar7 * 4);
                      if ((puVar1 == (undefined4 *)0x0) || (puVar8 == puVar1)) goto LAB_10894243;
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < (uint)(piVar4[0x43] - piVar4[0x42] >> 2));
                  }
                }
              }
            }
            iStack_c0 = iStack_c0 + 1;
            puVar8 = puStack_c8;
          } while (iStack_c0 < iStack_80);
        }
        piStack_114 = (int *)0x10894745;
        CCraftInfo__BuildCraftLists();
      }
      if ((uStack_b4 >> 6 & 1) != 0) {
        ppiStack_118 = &piStack_b8;
        piStack_114 = piStack_b0;
        piStack_11c = (int *)0x10894763;
        (**(code **)(*piStack_b8 + 8))();
      }
    }
    if (((uint)piStack_94 >> 6 & 1) != 0) {
      ppiStack_118 = &piStack_98;
      piStack_114 = piStack_90;
      piStack_11c = (int *)0x10894783;
      (**(code **)(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    piStack_94 = (int *)0x0;
    if ((local_dc >> 6 & 1) != 0) {
      ppiStack_118 = &local_e0;
      piStack_114 = local_d8;
      piStack_11c = (int *)0x108947b0;
      (**(code **)(*local_e0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



