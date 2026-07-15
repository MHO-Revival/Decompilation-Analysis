/* ===== FUN_104db710 @ 104db710  size=38876 ===== */
// calls: __alloca_probe, CNpcAtdGroupInfo::FindGroupId, memset, _localtime64_s, GrantActivityReward, CActivityMgr::GetActivityState
// strings:
//   "npcID"
//   "npcName"
//   u"<NoTalkInfo>"
//   "npcHello"
//   "GroupId"
//   "valueNpcProgressMax"
//   "valueNpcProgress"
//   "frienddegree"
//   "friendshipdescription"
//   "ITEM_CLASS_NAME"
//   "funcType"
//   "funcParam"
//   "funcParam2"
//   "funcTalkId"
//   "funcNpcId"
//   "funcTitle"
//   "ManufactureLearn"
//   "%s[%d]"
//   "_CatTreasure"
//   "Sale[%d]"
// <decompile failed/virtualized>

/* ===== FUN_104f71e0 @ 104f71e0  size=1624 ===== */
// strings:
//   "C2AS_GetPeriod"
//   "C2AS_GetCamp"
//   "C2AS_GetActivityData"
//   "C2AS_SignUp"
//   "C2AS_RequestGuildInfo"
//   "C2AS_GetTask"
//   "C2AS_CanAcceptTask"
//   "C2AS_FetchPersonAward"
//   "C2AS_FetchGuildAward"
//   "C2AS_FetchCampAward"
//   "C2AS_EnterWinnerLevel"
//   "C2AS_IsSecretQuest"
//   "C2AS_IsSecretQuestTime"
//   "C2AS_AcceptDoubleReward"
//   "C2AS_GetCurrentLevelTicket"
//   "C2AS_GetTaskSummaryData"
//   "C2AS_AcceptTask"
//   "C2AS_SubmitTask"
//   "C2AS_GiveUpTask"
//   "C2AS_RefreshTasks"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetPeriod""
     ""C2AS_GetCamp""
     ""C2AS_GetActivityData""
     ""C2AS_SignUp""
     ""C2AS_RequestGuildInfo""
     ""C2AS_GetTask""
     ""C2AS_CanAcceptTask""
     ""C2AS_FetchPersonAward""
     ""C2AS_FetchGuildAward""
     ""C2AS_FetchCampAward"" */

void __fastcall FUN_104f71e0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *puStack_174;
  char *pcStack_170;
  undefined1 **ppuStack_16c;
  code ***pppcStack_168;
  undefined1 *puStack_164;
  undefined1 **ppuStack_160;
  undefined1 ***pppuStack_15c;
  code ***pppcStack_158;
  undefined1 **ppuStack_154;
  undefined1 **ppuStack_150;
  code ***pppcStack_14c;
  code ***pppcStack_148;
  undefined1 ***pppuStack_144;
  undefined1 ***pppuStack_140;
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
  code ***pppcStack_d8;
  code ***pppcStack_d4;
  code ***pppcStack_d0;
  undefined4 ***pppuStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  code ***pppcStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
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
  pppcStack_30 = (code ***)0x11dbe24c;
  pppcStack_34 = (code ***)0x104f7214;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_104f7850;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x104f7225;
  FUN_104f9970();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x104f723b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dbe248;
  pppcStack_40 = (code ***)0x11dbe23c;
  pppcStack_44 = (code ***)0x104f725b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_104f7890;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x104f726c;
  FUN_104f9970();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined4 ***)0x104f7282;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dbe2e8;
  pppuStack_50 = (undefined4 ***)0x11dbe2d4;
  pppuStack_54 = (undefined4 ***)0x104f72a2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)FUN_104f7900;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x104f72b3;
  FUN_104f9970();
  if (((undefined4 ****)pppcStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppcStack_40 != (undefined4 ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x104f72c9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppuStack_54;
  pppcStack_5c = (code ***)0x11dbe2d3;
  pppcStack_60 = (code ***)0x11dbe2c8;
  pppcStack_64 = (code ***)0x104f72e9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_104f8240;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppuStack_6c = (undefined4 ***)0x104f72fa;
  FUN_104f9970();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    pppcStack_70 = (code ***)0x104f7310;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_6c = (undefined4 ***)0x11dbe2c5;
  pppcStack_70 = (code ***)0x11dbe2b0;
  pppcStack_74 = (code ***)0x104f7330;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)&LAB_104f83c0;
  pppcStack_78 = (code ***)&pppuStack_6c;
  pppcStack_7c = (code ***)0x104f7341;
  FUN_104f9970();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x104f7357;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dbe2ac;
  pppcStack_80 = (code ***)0x11dbe2a0;
  pppcStack_84 = (code ***)0x104f7377;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_104f8400;
  pppuStack_88 = &pppcStack_7c;
  pppcStack_8c = (code ***)0x104f7388;
  FUN_104f9970();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x104f739e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dbe342;
  pppcStack_90 = (code ***)0x11dbe330;
  pppcStack_94 = (code ***)0x104f73be;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_104f8460;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x104f73cf;
  FUN_104f9970();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x104f73e5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11dbe32d;
  pppcStack_a0 = (code ***)0x11dbe318;
  pppcStack_a4 = (code ***)0x104f7405;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_104f8540;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x104f7416;
  FUN_104f9970();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppuStack_b0 = (undefined4 ***)0x104f742c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11dbe314;
  pppuStack_b0 = (undefined4 ***)0x11dbe300;
  pppuStack_b4 = (undefined4 ***)0x104f744c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppuStack_b4 = (undefined4 ***)FUN_104f86b0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x104f745d;
  FUN_104f9970();
  if (((undefined4 ****)pppcStack_a0 != &pppuStack_b4) &&
     ((undefined4 ****)pppcStack_a0 != (undefined4 ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x104f7473;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppuStack_b4;
  pppcStack_bc = (code ***)0x11dbe2ff;
  pppcStack_c0 = (code ***)0x11dbe2ec;
  pppcStack_c4 = (code ***)0x104f7493;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_104f87f0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppuStack_cc = (undefined4 ***)0x104f74a4;
  FUN_104f9970();
  if (((code ****)pppuStack_b0 != &pppcStack_c4) && ((code ****)pppuStack_b0 != (code ****)0x0)) {
    pppuStack_cc = pppuStack_b0;
    pppcStack_d0 = (code ***)0x104f74ba;
    FUN_10c3d5d0();
  }
  pppuStack_b4 = &pppcStack_c4;
  pppuStack_cc = (undefined4 ***)0x11dbe39d;
  pppcStack_d0 = (code ***)0x11dbe388;
  pppcStack_d4 = (code ***)0x104f74da;
  pppuStack_b0 = pppuStack_b4;
  FUN_100b62c0();
  pppcStack_d4 = (code ***)&LAB_104f8930;
  pppcStack_d8 = (code ***)&pppuStack_cc;
  pppcStack_dc = (code ***)0x104f74eb;
  FUN_104f9970();
  if (((code ****)pppcStack_c0 != &pppcStack_d4) && ((code ****)pppcStack_c0 != (code ****)0x0)) {
    pppcStack_dc = pppcStack_c0;
    pppuStack_e0 = (undefined4 ***)0x104f7501;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = (code ***)&pppcStack_d4;
  pppcStack_dc = (code ***)0x11dbe386;
  pppuStack_e0 = (undefined4 ***)0x11dbe374;
  pppuStack_e4 = (undefined4 ***)0x104f7521;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pppuStack_e4 = (undefined4 ***)FUN_104f89b0;
  pppuStack_e8 = &pppcStack_dc;
  pppcStack_ec = (code ***)0x104f7532;
  FUN_104f9970();
  if (((undefined4 ****)pppcStack_d0 != &pppuStack_e4) &&
     ((undefined4 ****)pppcStack_d0 != (undefined4 ****)0x0)) {
    pppcStack_ec = pppcStack_d0;
    pppcStack_f0 = (code ***)0x104f7548;
    FUN_10c3d5d0();
  }
  pppcStack_d4 = (code ***)&pppuStack_e4;
  pppcStack_ec = (code ***)0x11dbe372;
  pppcStack_f0 = (code ***)0x11dbe35c;
  pppcStack_f4 = (code ***)0x104f7568;
  pppcStack_d0 = pppcStack_d4;
  FUN_100b62c0();
  pppcStack_f4 = (code ***)FUN_104f8a80;
  pppcStack_f8 = (code ***)&pppcStack_ec;
  pppuStack_fc = (undefined4 ***)0x104f7579;
  FUN_104f9970();
  if (((code ****)pppuStack_e0 != &pppcStack_f4) && ((code ****)pppuStack_e0 != (code ****)0x0)) {
    pppuStack_fc = pppuStack_e0;
    pppcStack_100 = (code ***)0x104f758f;
    FUN_10c3d5d0();
  }
  pppuStack_e4 = &pppcStack_f4;
  pppuStack_fc = (undefined4 ***)0x11dbe35b;
  pppcStack_100 = (code ***)0x11dbe344;
  pppcStack_104 = (code ***)0x104f75af;
  pppuStack_e0 = pppuStack_e4;
  FUN_100b62c0();
  pppcStack_104 = (code ***)&LAB_104f8b40;
  pppcStack_108 = (code ***)&pppuStack_fc;
  pppcStack_10c = (code ***)0x104f75c0;
  FUN_104f9970();
  if (((code ****)pppcStack_f0 != &pppcStack_104) && ((code ****)pppcStack_f0 != (code ****)0x0)) {
    pppcStack_10c = pppcStack_f0;
    pppcStack_110 = (code ***)0x104f75d6;
    FUN_10c3d5d0();
  }
  pppcStack_f4 = (code ***)&pppcStack_104;
  pppcStack_10c = (code ***)0x11dbe3f2;
  pppcStack_110 = (code ***)0x11dbe3d8;
  pppcStack_114 = (code ***)0x104f75f6;
  pppcStack_f0 = pppcStack_f4;
  FUN_100b62c0();
  pppcStack_114 = (code ***)FUN_104f8b60;
  pppuStack_118 = &pppcStack_10c;
  pppcStack_11c = (code ***)0x104f7607;
  FUN_104f9970();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pppcStack_120 = (code ***)0x104f761d;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dbe3d7;
  pppcStack_120 = (code ***)0x11dbe3c0;
  pppcStack_124 = (code ***)0x104f763d;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  pppcStack_124 = (code ***)FUN_104f8c00;
  pppcStack_128 = (code ***)&pppcStack_11c;
  pppcStack_12c = (code ***)0x104f764e;
  FUN_104f9970();
  if (((code ****)pppcStack_110 != &pppcStack_124) && ((code ****)pppcStack_110 != (code ****)0x0))
  {
    pppcStack_12c = pppcStack_110;
    pppcStack_130 = (code ***)0x104f7664;
    FUN_10c3d5d0();
  }
  pppcStack_114 = (code ***)&pppcStack_124;
  pppcStack_12c = (code ***)0x11dbe3bf;
  pppcStack_130 = (code ***)0x11dbe3b0;
  pppcStack_134 = (code ***)0x104f7684;
  pppcStack_110 = pppcStack_114;
  FUN_100b62c0();
  pppcStack_134 = (code ***)FUN_104f9350;
  pppcStack_138 = (code ***)&pppcStack_12c;
  pppcStack_13c = (code ***)0x104f7695;
  FUN_104f9970();
  if (((code ****)pppcStack_120 != &pppcStack_134) && ((code ****)pppcStack_120 != (code ****)0x0))
  {
    pppcStack_13c = pppcStack_120;
    pppuStack_140 = (undefined1 ***)0x104f76ab;
    FUN_10c3d5d0();
  }
  pppcStack_124 = (code ***)&pppcStack_134;
  pppcStack_13c = (code ***)0x11dbe3af;
  pppuStack_140 = (undefined1 ***)0x11dbe3a0;
  pppuStack_144 = (undefined1 ***)0x104f76cb;
  pppcStack_120 = pppcStack_124;
  FUN_100b62c0();
  pppuStack_144 = (undefined1 ***)FUN_104f93b0;
  pppcStack_148 = (code ***)&pppcStack_13c;
  pppcStack_14c = (code ***)0x104f76dc;
  FUN_104f9970();
  if (((undefined1 ****)pppcStack_130 != &pppuStack_144) &&
     ((undefined1 ****)pppcStack_130 != (undefined1 ****)0x0)) {
    pppcStack_14c = pppcStack_130;
    ppuStack_150 = (undefined1 **)0x104f76f2;
    FUN_10c3d5d0();
  }
  pppcStack_134 = (code ***)&pppuStack_144;
  pppcStack_14c = (code ***)0x11dbe43f;
  ppuStack_150 = (undefined1 **)0x11dbe430;
  ppuStack_154 = (undefined1 **)0x104f7712;
  pppcStack_130 = pppcStack_134;
  FUN_100b62c0();
  ppuStack_154 = (undefined1 **)FUN_104f9410;
  pppcStack_158 = (code ***)&pppcStack_14c;
  pppuStack_15c = (undefined1 ***)0x104f7723;
  FUN_104f9970();
  if ((pppuStack_140 != &ppuStack_154) && (pppuStack_140 != (undefined1 ***)0x0)) {
    pppuStack_15c = pppuStack_140;
    ppuStack_160 = (undefined1 **)0x104f7739;
    FUN_10c3d5d0();
  }
  pppuStack_144 = &ppuStack_154;
  pppuStack_15c = (undefined1 ***)0x11dbe42d;
  ppuStack_160 = (undefined1 **)0x11dbe41c;
  puStack_164 = (undefined1 *)0x104f7759;
  pppuStack_140 = pppuStack_144;
  FUN_100b62c0();
  puStack_164 = &LAB_104f9470;
  pppcStack_168 = (code ***)&pppuStack_15c;
  ppuStack_16c = (undefined1 **)0x104f776a;
  FUN_104f9970();
  if ((ppuStack_150 != &puStack_164) && (ppuStack_150 != (undefined1 **)0x0)) {
    ppuStack_16c = ppuStack_150;
    pcStack_170 = (char *)0x104f7780;
    FUN_10c3d5d0();
  }
  ppuStack_154 = &puStack_164;
  ppuStack_16c = (undefined1 **)0x11dbe418;
  pcStack_170 = "C2AS_GetExtraSubmitCount";
  puStack_174 = (undefined1 *)0x104f77a0;
  ppuStack_150 = ppuStack_154;
  FUN_100b62c0();
  puStack_174 = &LAB_104f94b0;
  FUN_104f9970(&ppuStack_16c);
  if ((ppuStack_160 != &puStack_174) && (ppuStack_160 != (undefined1 **)0x0)) {
    FUN_10c3d5d0(ppuStack_160);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_104f9cc0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_104f9d10();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_104fd9e0 @ 104fd9e0  size=3072 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPet::SetName
// strings:
//   "_refreshSlotState"
//   "_PlayEatCuisineRequest"
//   "_EatCuisineRequest"
//   "_PlayCuisineResultRequest"
//   "_onGetRoleMoney"
//   "_unlockCatFood"
//   "CAT_FOOD_ITEM_INFO"
//   "CAT_FOOD_REQUIREMENT_ITEM"
//   "CAT_FOOD_BUFFER_ITEM"
//   "arrayCatFoodData"
//   "itemID"
//   "itemName"
//   "itemDesc"
//   "costMoney"
//   "foodLevel"
//   "cookName"
//   "cookType"
//   "cookLevel"
//   "iconPath"
//   "isActivity"

/* WARNING: Removing unreachable block (ram,0x104fe19a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""_refreshSlotState""
     ""_PlayEatCuisineRequest""
     ""_EatCuisineRequest""
     ""_PlayCuisineResultRequest""
     ""_onGetRoleMoney""
     ""_unlockCatFood""
     ""CAT_FOOD_ITEM_INFO""
     ""CAT_FOOD_REQUIREMENT_ITEM""
     ""CAT_FOOD_BUFFER_ITEM""
     ""arrayCatFoodData"" */

void FUN_104fd9e0(void)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *unaff_EBX;
  byte unaff_SI;
  uint uVar13;
  uint uVar14;
  int *unaff_EDI;
  undefined4 *in_stack_00000010;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char *pcStack_198;
  code *pcStack_194;
  undefined4 uStack_190;
  int *piStack_18c;
  int *piStack_188;
  code *pcStack_184;
  undefined4 uStack_180;
  code *pcStack_17c;
  int **ppiStack_178;
  code *pcStack_174;
  uint uStack_164;
  int *piStack_160;
  byte bStack_15c;
  undefined4 uStack_158;
  int *local_150;
  uint local_14c;
  int *local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint uStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 *puStack_120;
  int *piStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  char acStack_100 [4];
  int *piStack_fc;
  uint uStack_f8;
  undefined4 local_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 *puStack_e0;
  int iStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  int iStack_8c;
  undefined1 auStack_88 [16];
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_164;
  local_150 = (int *)0x0;
  local_14c = in_stack_00000010[1];
  local_144 = in_stack_00000010[3];
  pcStack_174 = (code *)in_stack_00000010[2];
  local_140 = in_stack_00000010[4];
  local_148 = (int *)pcStack_174;
  if ((local_14c >> 6 & 1) != 0) {
    local_150 = (int *)*in_stack_00000010;
    ppiStack_178 = &local_150;
    pcStack_17c = (code *)0x104fda40;
    (**(code **)(*local_150 + 4))();
  }
  if (((in_stack_00000010[7] & 0x8f) == 3) || ((in_stack_00000010[7] & 0x8f) == 4)) {
    local_f4 = in_stack_00000010[8];
  }
  else {
    local_f4 = 0xdeadbeaf;
  }
  pcStack_174 = FUN_104fe5e0;
  ppiStack_178 = (int **)0x11dbeb80;
  pcStack_17c = (code *)0x104fda78;
  FUN_104d13b0();
  pcStack_17c = FUN_104fe710;
  uStack_180 = "_PlayEatCuisineRequest";
  pcStack_184 = (code *)0x104fda8d;
  FUN_104d13b0();
  pcStack_184 = FUN_104fe650;
  piStack_188 = (int *)0x11dbeb54;
  piStack_18c = (int *)0x104fdaa2;
  FUN_104d13b0();
  piStack_18c = (int *)&LAB_104fe830;
  uStack_190 = "_PlayCuisineResultRequest";
  pcStack_194 = (code *)0x104fdab7;
  FUN_104d13b0();
  pcStack_194 = FUN_104fe880;
  pcStack_198 = "_onGetRoleMoney";
  FUN_104d13b0();
  FUN_104d13b0("_unlockCatFood",FUN_104fea80);
  ppiStack_178 = &piStack_a0;
  piStack_a0 = (int *)0x0;
  uStack_9c = 0;
  uStack_164 = CONCAT31(uStack_164._1_3_,((byte)local_14c & 0x8f) == 10);
  pcStack_174 = (code *)uStack_164;
  piStack_160._0_2_ = (ushort)piStack_160 & 0xff;
  pcStack_17c = (code *)0x11dbebb0;
  uStack_180 = (char *)local_148;
  piStack_160 = (int *)(uint)(ushort)piStack_160;
  uStack_104 = 0;
  pcStack_184 = (code *)0x104fdb41;
  cVar1 = (**(code **)(*local_150 + 0x10))();
  if ((cVar1 != '\0') && (((byte)uStack_ac & 0x8f) == 6)) {
    piStack_114 = piStack_a8;
    if ((uStack_ac >> 6 & 1) != 0) {
      piStack_114 = (int *)*piStack_a8;
    }
    unaff_EDI = (int *)CONCAT13((char)((uint)unaff_EDI >> 0x18),CONCAT12(1,(short)unaff_EDI));
  }
  piStack_188 = &iStack_d8;
  iStack_d8 = 0;
  piStack_d4 = (int *)0x0;
  pcStack_174 = (code *)CONCAT31(pcStack_174._1_3_,(bStack_15c & 0x8f) == 10);
  uStack_110 = 0;
  pcStack_184 = pcStack_174;
  piStack_18c = (int *)0x11dbeb94;
  uStack_190 = (char *)uStack_158;
  pcStack_194 = (code *)0x104fdbbf;
  cVar1 = (**(code **)(*piStack_160 + 0x10))();
  if ((cVar1 != '\0') && (((byte)uStack_e4 & 0x8f) == 6)) {
    if ((uStack_e4 >> 6 & 1) != 0) {
      puStack_e0 = (undefined4 *)*puStack_e0;
    }
    uStack_180._0_2_ = CONCAT11(1,(undefined1)uStack_180);
    puStack_120 = puStack_e0;
  }
  pcStack_198 = acStack_100;
  acStack_100[0] = '\0';
  acStack_100[1] = '\0';
  acStack_100[2] = '\0';
  acStack_100[3] = '\0';
  piStack_fc = (int *)0x0;
  pcStack_184 = (code *)CONCAT31(pcStack_184._1_3_,(unaff_SI & 0x8f) == 10);
  uStack_128 = 0;
  pcStack_194 = pcStack_184;
  pcVar19 = "CAT_FOOD_BUFFER_ITEM";
  cVar1 = (**(code **)(*unaff_EDI + 0x10))();
  if ((cVar1 != '\0') && (((byte)uStack_10c & 0x8f) == 6)) {
    puStack_138 = puStack_108;
    if ((uStack_10c >> 6 & 1) != 0) {
      puStack_138 = (undefined4 *)*puStack_108;
    }
    uStack_190 = (char *)CONCAT13(1,(undefined3)uStack_190);
  }
  pcStack_184 = (code *)0x0;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) &&
     (pcVar3 = (code *)(**(code **)(*piVar4 + 0xb4))(), pcStack_184 = (code *)0x0,
     pcVar3 != (code *)0x0)) {
    pcStack_184 = pcVar3;
  }
  pcVar3 = pcStack_184;
  if (((uStack_190._3_1_ != '\0') && (uStack_190._2_1_ != '\0')) && (uStack_190._1_1_ != '\0')) {
    piStack_78 = (int *)0x0;
    piStack_74 = (int *)0x0;
    pcStack_194 = (code *)CONCAT31(pcStack_194._1_3_,((byte)pcStack_17c & 0x8f) == 10);
    cVar1 = (**(code **)(*(int *)uStack_180 + 0x10))
                      (ppiStack_178,"arrayCatFoodData",&piStack_78,pcStack_194);
    if (cVar1 != '\0') {
      piStack_d4 = (int *)FUN_104fd5a0();
      pcStack_194 = (code *)0x0;
      if (0 < (int)piStack_d4) {
        do {
          piVar4 = (int *)FUN_104fd510(pcStack_194);
          piStack_18c = piVar4;
          if (((((piVar4 != (int *)0x0) && (piVar4[0x20] == iStack_124)) &&
               (((piVar4[0x26] == 0 ||
                 (iVar5 = CPlayer__GetHuntRankOrCount(), piVar4[0x26] <= iVar5)) &&
                (((piVar4[0x27] == 0 || (*(int **)(pcVar3 + 0x2ab0) == (int *)0x0)) ||
                 (cVar1 = (**(code **)(**(int **)(pcVar3 + 0x2ab0) + 0x60))(piVar4[0x27]),
                 cVar1 != '\0')))))) &&
              (((piVar4[0x28] == 0 || (iVar5 = (**(code **)(*(int *)pcVar3 + 0x46c))(), iVar5 == 0))
               || (cVar1 = FUN_114e0340(piVar4[0x28]), cVar1 != '\0')))) &&
             (((piVar4[0x29] == 0 || (*(int **)(pcVar3 + 0x2acc) == (int *)0x0)) ||
              (cVar1 = (**(code **)(**(int **)(pcVar3 + 0x2acc) + 0x3c))(piVar4[0x29]),
              cVar1 != '\0')))) {
            iVar5 = 0;
            uStack_164 = 0;
            piVar15 = piStack_134;
            FUN_11a98de0(&stack0xfffffe98,piStack_134,0,0);
            uVar6 = (**(code **)(*piVar4 + 0x18))();
            FUN_104d1550("itemID",uVar6);
            FUN_104d1790("itemName",piVar4 + 5);
            FUN_104d1790("itemDesc",piVar4 + 6);
            FUN_104d1550("costMoney",piVar4[0x1e]);
            FUN_104d1550("foodLevel",piVar4[0x22]);
            FUN_104d1790("cookName",piVar4 + 7);
            FUN_104d1550("cookType",piVar4[0x23]);
            FUN_104d1550("cookLevel",piVar4[0x21]);
            FUN_104d1670("iconPath",piVar4[0x1d]);
            FUN_104d15e0("isActivity",piVar4[0x29] != 0);
            FUN_104d15e0("FreeInBattle",(char)piVar4[0x25] != '\0');
            if ((pcVar3 != (code *)0x0) && (*(int *)(pcVar3 + 0x2d60) != 0)) {
              cVar1 = FUN_118047d0();
              if (cVar1 == '\0') {
                puStack_138 = (undefined4 *)CONCAT31(puStack_138._1_3_,1);
                uStack_13c = uStack_13c & 0xffffff00;
              }
              else {
                iVar7 = **(int **)(pcVar3 + 0x2d60);
                uVar6 = (**(code **)(*(int *)pcVar19 + 0x18))();
                uVar2 = (**(code **)(iVar7 + 0x38))(uVar6);
                iVar7 = **(int **)(pcStack_198 + 0x2d60);
                uStack_13c._0_1_ = uVar2;
                uVar6 = (**(code **)(*unaff_EBX + 0x18))();
                piVar4 = (int *)pcVar19;
                uVar2 = (**(code **)(iVar7 + 0x54))(uVar6);
                uStack_13c = CONCAT31(uStack_13c._1_3_,uVar2);
                pcVar19 = (char *)piVar4;
              }
              FUN_104d15e0("catFoodUnlock",puStack_138);
              FUN_104d15e0("itemNew",uStack_13c);
            }
            puVar18 = &uStack_c8;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_ec = CONCAT31(uStack_ec._1_3_,((byte)pcStack_174 & 0x8f) == 10);
            pcVar16 = "arrayMaterial";
            cVar1 = (*(code *)(*ppiStack_178)[4])(unaff_EDI,"arrayMaterial",puVar18,uStack_ec);
            if (cVar1 != '\0') {
              FUN_104fec80(piVar4 + 8);
              piVar12 = piStack_a4;
              if (piStack_a4 != piStack_a0) {
                do {
                  unaff_EDI = (int *)0x0;
                  FUN_11a98de0(&stack0xfffffe90,local_150,0,0);
                  FUN_104d1550("itemID",*piVar12);
                  iVar7 = FUN_10254130(*piVar12);
                  puVar18 = (undefined4 *)0x0;
                  CPet__SetName(&DAT_11d9d32b);
                  piVar4 = piVar15;
                  if (iVar7 != 0) {
                    puVar11 = &DAT_11d9d32b;
                    if (*(undefined1 **)(iVar7 + 0x14) != (undefined1 *)0x0) {
                      puVar11 = *(undefined1 **)(iVar7 + 0x14);
                    }
                    CPet__SetName(puVar11);
                    piVar4 = piVar15;
                  }
                  FUN_104d1550("requireCounts",piVar12[1]);
                  auStack_88[0] = 0;
                  piStack_78 = (int *)auStack_88;
                  piStack_74 = piStack_78;
                  FUN_100e5aa0(piStack_78);
                  FUN_104d1670("itemName",piStack_78);
                  if ((piStack_78 != &iStack_8c) && (piStack_78 != (int *)0x0)) {
                    FUN_10c3d5d0(piStack_78);
                  }
                  iVar7 = 0;
                  if (pcVar16 != (char *)0x0) {
                    iVar8 = FUN_113f9300(0,*piVar12,0);
                    iVar9 = FUN_113f9300(2,*piVar12,0);
                    iVar7 = FUN_113f9300(10,*piVar12,0);
                    iVar7 = iVar8 + iVar9 + iVar7;
                  }
                  FUN_104d1550("currentCounts",iVar7);
                  (**(code **)(*piStack_f0 + 0x3c))(uStack_e8,&piStack_188);
                  if (iVar5 != 0) {
                    FUN_10c3da30(iVar5);
                  }
                  piVar12 = piVar12 + 2;
                  piVar15 = piVar4;
                } while (piVar12 != piStack_a0);
              }
              if (piStack_a4 != (int *)0x0) {
                FUN_10c3d5d0(piStack_a4);
              }
            }
            uStack_c0 = 0;
            uStack_bc = 0;
            piStack_134 = (int *)CONCAT31(piStack_134._1_3_,((byte)pcStack_184 & 0x8f) == 10);
            pcVar16 = "arrayBuffer";
            piVar15 = (int *)uStack_180;
            cVar1 = (**(code **)(*piStack_188 + 0x10))
                              (uStack_180,"arrayBuffer",&uStack_c0,piStack_134);
            if (cVar1 != '\0') {
              FUN_10461b50(piVar4 + 0xb);
              uVar13 = (int)(local_14c - (int)local_150) >> 2;
              uVar14 = 0;
              piVar12 = local_150;
              uVar17 = uVar13;
              if (uVar13 != 0) {
                do {
                  if (piVar12[uVar14] != 0) {
                    uStack_180 = (char *)0x0;
                    pcStack_17c = (code *)0x0;
                    FUN_11a98de0(&uStack_180,0,0,0);
                    uVar6 = 0;
                    CPet__SetName(&DAT_11d9d32b);
                    puStack_108 = (undefined4 *)
                                  FUN_104fd710(*(undefined4 *)(uStack_164 + uVar14 * 4));
                    uVar13 = uVar17;
                    if (puStack_108 != (undefined4 *)0x0) {
                      FUN_104d1670("bufferName",puStack_108[10],piVar15,pcVar16,uVar6);
                      FUN_104d1790("bufferDesc",puStack_108 + 0xeb);
                      FUN_104d15e0("valid",0);
                      FUN_104d1550("bufferID",local_150[uVar14]);
                      uVar13 = uVar17;
                      if (uVar14 < (uint)(((piVar4[0x15] - piVar4[0x13] >> 2) * 0x20 - piVar4[0x14])
                                         + piVar4[0x16])) {
                        puVar10 = (undefined4 *)FUN_104b4290(&iStack_8c,uVar14);
                        FUN_104d15e0("bufferMustGet",(*(uint *)*puVar10 & puVar10[1]) != 0);
                        uVar13 = uVar17;
                      }
                      (**(code **)(*piStack_d0 + 0x3c))(uStack_c8,&uStack_180);
                    }
                    if (puVar18 != (undefined4 *)0x0) {
                      FUN_10c3da30(puVar18);
                    }
                    piVar12 = local_150;
                    uVar17 = uVar13;
                    if (((uint)pcStack_17c >> 6 & 1) != 0) {
                      (**(code **)(*(int *)uStack_180 + 8))(&uStack_180,ppiStack_178);
                      piVar12 = local_150;
                      uVar17 = uVar13;
                    }
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar13);
              }
              if (piVar12 != (int *)0x0) {
                FUN_10c3d5d0(piVar12);
              }
            }
            (**(code **)(*piStack_a8 + 0x3c))(piStack_a0,&pcStack_198);
            if ((uStack_9c >> 6 & 1) != 0) {
              (**(code **)(*piStack_a0 + 8))(&piStack_a0,uStack_98);
              piStack_a0 = (int *)0x0;
            }
            uStack_9c = 0;
            if ((uStack_b4 >> 6 & 1) != 0) {
              (**(code **)(*piStack_b8 + 8))(&piStack_b8,uStack_b0);
              piStack_b8 = (int *)0x0;
            }
            uStack_b4 = 0;
            pcVar3 = pcStack_184;
            if ((uStack_164 >> 6 & 1) != 0) {
              (**(code **)(_DAT_00000000 + 8))(&stack0xfffffe98,piStack_160);
              pcVar3 = pcStack_184;
            }
          }
          pcStack_194 = (code *)((int)pcStack_194 + 1);
        } while ((int)pcStack_194 < (int)piStack_d4);
      }
    }
    if (((uint)piStack_74 >> 6 & 1) != 0) {
      (**(code **)(*piStack_78 + 8))(&piStack_78,uStack_70);
    }
  }
  pcStack_194 = (code *)0x0;
  CPet__SetName(&DAT_11d9d32b);
  if (pcStack_198 != (char *)0x0) {
    FUN_10c3da30(pcStack_198);
  }
  if ((uStack_110 >> 6 & 1) != 0) {
    (**(code **)(*piStack_114 + 8))(&piStack_114,uStack_10c);
    piStack_114 = (int *)0x0;
  }
  uStack_110 = 0;
  if ((uStack_f8 >> 6 & 1) != 0) {
    (**(code **)(*piStack_fc + 8))(&piStack_fc,local_f4);
    piStack_fc = (int *)0x0;
  }
  uStack_f8 = 0;
  if (((uint)piStack_d0 >> 6 & 1) != 0) {
    (**(code **)(*piStack_d4 + 8))(&piStack_d4,uStack_cc);
    piStack_d4 = (int *)0x0;
  }
  piStack_d0 = (int *)0x0;
  if (((uint)uStack_180 >> 6 & 1) != 0) {
    (**(code **)(*(int *)pcStack_184 + 8))(&pcStack_184,pcStack_17c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1050ed80 @ 1050ed80  size=158 ===== */
// calls: CEquipEnchantInfo::GetInfoMgr, CInfoManager::FindByName
// strings:
//   "CEquipEnchantInfo"

/* [RE-AUTO c0]
   calls: CEquipEnchantInfo::GetManagers
   strings:
     ""CEquipEnchantInfo"" */

undefined4 FUN_1050ed80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbffd0;
  puVar2 = (undefined4 *)CEquipEnchantInfo__GetInfoMgr();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CEquipEnchantInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be47c & 1) == 0) {
        DAT_123be47c = DAT_123be47c | 1;
        FUN_1051d1d0();
        FUN_11a8911f(&LAB_11c6f860);
      }
      puVar3 = &DAT_123be480;
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



/* ===== FUN_1050f390 @ 1050f390  size=4610 ===== */
// strings:
//   "InitModel"
//   "InitSkillModel"
//   "WidgetShowFunction"
//   "WidgetHideFunction"
//   "InitMyPetListModel"
//   "ClosePetList"
//   "DoRefreshMode"
//   "onPetNamelicked"
//   "OnPetChangeName"
//   "OnPetChangeNameError"
//   "OnPetChangeDeclaration"
//   "OnPetFluteSkill"
//   "OnPetNormalSkill"
//   "OnFire"
//   "OnFollow"
//   "OnGetBack"
//   "OnPack"
//   "OnCancel"
//   "CloseUI"
//   "SkillLearnNew"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""InitSkillModel""
     ""WidgetShowFunction""
     ""WidgetHideFunction""
     ""InitMyPetListModel""
     ""ClosePetList""
     ""DoRefreshMode""
     ""onPetNamelicked""
     ""OnPetChangeName""
     ""OnPetChangeNameError"" */

void __fastcall FUN_1050f390(code ****param_1)

{
  int iVar1;
  code ***pppcVar2;
  code *pcStack_420;
  undefined4 uStack_41c;
  char *pcStack_418;
  code ***pppcStack_414;
  code ***pppcStack_410;
  code **ppcStack_40c;
  undefined4 uStack_408;
  char *pcStack_404;
  code ***pppcStack_400;
  code ***pppcStack_3fc;
  code ***pppcStack_3f8;
  undefined4 uStack_3f4;
  char *pcStack_3f0;
  code ***pppcStack_3ec;
  code ***pppcStack_3e8;
  code ***pppcStack_3e4;
  undefined4 uStack_3e0;
  char *pcStack_3dc;
  code ***pppcStack_3d8;
  code ***pppcStack_3d4;
  code ***pppcStack_3d0;
  undefined4 uStack_3cc;
  char *pcStack_3c8;
  code ***pppcStack_3c4;
  code ***pppcStack_3c0;
  code ***pppcStack_3bc;
  undefined4 uStack_3b8;
  char *pcStack_3b4;
  code ***pppcStack_3b0;
  code ***pppcStack_3ac;
  code ***pppcStack_3a8;
  undefined4 uStack_3a4;
  char *pcStack_3a0;
  code ***pppcStack_39c;
  code ***pppcStack_398;
  code ***pppcStack_394;
  undefined4 uStack_390;
  char *pcStack_38c;
  code ***pppcStack_388;
  code ***pppcStack_384;
  code ***pppcStack_380;
  undefined4 uStack_37c;
  char *pcStack_378;
  code ***pppcStack_374;
  code ***pppcStack_370;
  code ***pppcStack_36c;
  undefined4 uStack_368;
  char *pcStack_364;
  code ***pppcStack_360;
  code ***pppcStack_35c;
  code ***pppcStack_358;
  undefined4 uStack_354;
  char *pcStack_350;
  code ***pppcStack_34c;
  code ***pppcStack_348;
  code ***pppcStack_344;
  undefined4 uStack_340;
  char *pcStack_33c;
  code ***pppcStack_338;
  code ***pppcStack_334;
  code ***pppcStack_330;
  undefined4 uStack_32c;
  char *pcStack_328;
  code ***pppcStack_324;
  code ***pppcStack_320;
  code ***pppcStack_31c;
  code *pcStack_318;
  char *pcStack_314;
  code ***pppcStack_310;
  code ***pppcStack_30c;
  code ***pppcStack_308;
  code *pcStack_304;
  char *pcStack_300;
  undefined4 ***pppuStack_2fc;
  code ***pppcStack_2f8;
  code ***pppcStack_2f4;
  undefined4 uStack_2f0;
  char *pcStack_2ec;
  code ***pppcStack_2e8;
  code ***pppcStack_2e4;
  undefined4 ***pppuStack_2e0;
  undefined4 uStack_2dc;
  char *pcStack_2d8;
  code ***pppcStack_2d4;
  code ***pppcStack_2d0;
  code ***pppcStack_2cc;
  undefined4 uStack_2c8;
  char *pcStack_2c4;
  code ***pppcStack_2c0;
  code ***pppcStack_2bc;
  code ***pppcStack_2b8;
  undefined4 uStack_2b4;
  char *pcStack_2b0;
  code ***pppcStack_2ac;
  code ***pppcStack_2a8;
  code ***pppcStack_2a4;
  undefined4 uStack_2a0;
  char *pcStack_29c;
  code ***pppcStack_298;
  code ***pppcStack_294;
  code ***pppcStack_290;
  undefined4 uStack_28c;
  char *pcStack_288;
  code ***pppcStack_284;
  code ***pppcStack_280;
  code ***pppcStack_27c;
  undefined4 uStack_278;
  char *pcStack_274;
  code ***pppcStack_270;
  code ***pppcStack_26c;
  code ***pppcStack_268;
  undefined4 uStack_264;
  char *pcStack_260;
  code ***pppcStack_25c;
  code ***pppcStack_258;
  code ***pppcStack_254;
  undefined4 uStack_250;
  char *pcStack_24c;
  code ***pppcStack_248;
  code ***pppcStack_244;
  code ***pppcStack_240;
  undefined4 uStack_23c;
  char *pcStack_238;
  code ***pppcStack_234;
  code ***pppcStack_230;
  code ***pppcStack_22c;
  undefined4 uStack_228;
  char *pcStack_224;
  code ***pppcStack_220;
  code ***pppcStack_21c;
  code ***pppcStack_218;
  undefined4 uStack_214;
  char *pcStack_210;
  undefined4 ***pppuStack_20c;
  code ***pppcStack_208;
  code ***pppcStack_204;
  undefined4 uStack_200;
  char *pcStack_1fc;
  code ***pppcStack_1f8;
  code ***pppcStack_1f4;
  undefined4 ***pppuStack_1f0;
  undefined4 uStack_1ec;
  char *pcStack_1e8;
  code ***pppcStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  undefined4 uStack_1d8;
  char *pcStack_1d4;
  code ***pppcStack_1d0;
  code ***pppcStack_1cc;
  code ***pppcStack_1c8;
  undefined4 uStack_1c4;
  char *pcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  undefined4 ***pppuStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  undefined4 uStack_19c;
  char *pcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  undefined4 ***pppuStack_18c;
  undefined4 uStack_188;
  undefined *puStack_184;
  code ***pppcStack_180;
  code ***pppcStack_17c;
  code ***pppcStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  code ***pppcStack_164;
  undefined4 uStack_160;
  char *pcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  undefined4 uStack_14c;
  char *pcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  undefined4 uStack_138;
  char *pcStack_134;
  undefined4 ***pppuStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  undefined4 uStack_124;
  char *pcStack_120;
  code ***pppcStack_11c;
  undefined4 ***pppuStack_118;
  undefined4 ***pppuStack_114;
  undefined4 uStack_110;
  char *pcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  undefined4 uStack_fc;
  char *pcStack_f8;
  undefined4 ***pppuStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  undefined4 uStack_e8;
  char *pcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  undefined4 ***pppuStack_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined4 uStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  undefined4 ***pppuStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  undefined4 ***pppuStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  code ***pppcStack_38;
  undefined4 uStack_34;
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
  pcStack_30 = "InitModel";
  uStack_34 = 0x1050f3c4;
  FUN_100b62c0();
  uStack_34 = 0;
  pppcStack_38 = (code ***)FUN_10511480;
  pppcStack_3c = (code ***)&pcStack_2c;
  pppcStack_40 = (code ***)0x1050f3d7;
  FUN_10519910();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppcStack_40 = local_24[0];
    pcStack_44 = (char *)0x1050f3ed;
    FUN_10c3d5d0();
  }
  local_24[0] = (code ***)&pppcStack_38;
  pppcStack_40 = (code ***)0x11dbf3e6;
  pcStack_44 = "InitSkillModel";
  uStack_48 = 0x1050f40d;
  FUN_100b62c0();
  uStack_48 = 0;
  pppcStack_4c = (code ***)FUN_10511bb0;
  pppcStack_50 = (code ***)&pppcStack_40;
  pppcStack_54 = (code ***)0x1050f420;
  FUN_10519910();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x1050f436;
    FUN_10c3d5d0();
  }
  pppcStack_3c = (code ***)&pppcStack_4c;
  pppcStack_54 = (code ***)0x11dbf3d6;
  pcStack_58 = "WidgetShowFunction";
  uStack_5c = 0x1050f456;
  pppcStack_38 = pppcStack_3c;
  FUN_100b62c0();
  uStack_5c = 0;
  pppcStack_60 = (code ***)FUN_10517a10;
  pppcStack_64 = (code ***)&pppcStack_54;
  pppcStack_68 = (code ***)0x1050f469;
  FUN_10519910();
  if (((code ****)pppcStack_4c != &pppcStack_60) && ((code ****)pppcStack_4c != (code ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x1050f47f;
    FUN_10c3d5d0();
  }
  pppcStack_50 = (code ***)&pppcStack_60;
  pppcStack_68 = (code ***)0x11dbf3c2;
  pcStack_6c = "WidgetHideFunction";
  uStack_70 = 0x1050f49f;
  pppcStack_4c = pppcStack_50;
  FUN_100b62c0();
  uStack_70 = 0;
  pppuStack_74 = (undefined4 ***)FUN_10517aa0;
  pppcStack_78 = (code ***)&pppcStack_68;
  pppcStack_7c = (code ***)0x1050f4b2;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_60 != &pppuStack_74) &&
     ((undefined4 ****)pppcStack_60 != (undefined4 ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pcStack_80 = (char *)0x1050f4c8;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppuStack_74;
  pppcStack_7c = (code ***)0x11dbf3ae;
  pcStack_80 = "InitMyPetListModel";
  uStack_84 = 0x1050f4e8;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  uStack_84 = 0;
  pppcStack_88 = (code ***)FUN_10511c20;
  pppcStack_8c = (code ***)&pppcStack_7c;
  pppuStack_90 = (undefined4 ***)0x1050f4fb;
  FUN_10519910();
  if (((code ****)pppuStack_74 != &pppcStack_88) && ((code ****)pppuStack_74 != (code ****)0x0)) {
    pppuStack_90 = pppuStack_74;
    pcStack_94 = (char *)0x1050f511;
    FUN_10c3d5d0();
  }
  pppcStack_78 = (code ***)&pppcStack_88;
  pppuStack_90 = (undefined4 ***)0x11dbf424;
  pcStack_94 = "ClosePetList";
  uStack_98 = 0x1050f531;
  pppuStack_74 = (undefined4 ***)pppcStack_78;
  FUN_100b62c0();
  uStack_98 = 0;
  pppcStack_9c = (code ***)&LAB_10511c50;
  pppcStack_a0 = (code ***)&pppuStack_90;
  pppcStack_a4 = (code ***)0x1050f544;
  FUN_10519910();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x1050f55a;
    FUN_10c3d5d0();
  }
  pppcStack_8c = (code ***)&pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dbf415;
  pcStack_a8 = "DoRefreshMode";
  uStack_ac = 0x1050f57a;
  pppcStack_88 = pppcStack_8c;
  FUN_100b62c0();
  uStack_ac = 0;
  pppcStack_b0 = (code ***)FUN_10512010;
  pppcStack_b4 = (code ***)&pppcStack_a4;
  pppcStack_b8 = (code ***)0x1050f58d;
  FUN_10519910();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x1050f5a3;
    FUN_10c3d5d0();
  }
  pppcStack_a0 = (code ***)&pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dbf407;
  pcStack_bc = "onPetNamelicked";
  uStack_c0 = 0x1050f5c3;
  pppcStack_9c = pppcStack_a0;
  FUN_100b62c0();
  uStack_c0 = 0;
  pppcStack_c4 = (code ***)FUN_10515350;
  pppcStack_c8 = (code ***)&pppcStack_b8;
  pppcStack_cc = (code ***)0x1050f5d6;
  FUN_10519910();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pcStack_d0 = (char *)0x1050f5ec;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dbf3f7;
  pcStack_d0 = "OnPetChangeName";
  uStack_d4 = 0x1050f60c;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  uStack_d4 = 0;
  pppuStack_d8 = (undefined4 ***)FUN_10515400;
  pppcStack_dc = (code ***)&pppcStack_cc;
  pppcStack_e0 = (code ***)0x1050f61f;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_c4 != &pppuStack_d8) &&
     ((undefined4 ****)pppcStack_c4 != (undefined4 ****)0x0)) {
    pppcStack_e0 = pppcStack_c4;
    pcStack_e4 = (char *)0x1050f635;
    FUN_10c3d5d0();
  }
  pppcStack_c8 = (code ***)&pppuStack_d8;
  pppcStack_e0 = (code ***)0x11dbf478;
  pcStack_e4 = "OnPetChangeNameError";
  uStack_e8 = 0x1050f655;
  pppcStack_c4 = pppcStack_c8;
  FUN_100b62c0();
  uStack_e8 = 0;
  pppcStack_ec = (code ***)FUN_10515580;
  pppcStack_f0 = (code ***)&pppcStack_e0;
  pppuStack_f4 = (undefined4 ***)0x1050f668;
  FUN_10519910();
  if (((code ****)pppuStack_d8 != &pppcStack_ec) && ((code ****)pppuStack_d8 != (code ****)0x0)) {
    pppuStack_f4 = pppuStack_d8;
    pcStack_f8 = (char *)0x1050f67e;
    FUN_10c3d5d0();
  }
  pppcStack_dc = (code ***)&pppcStack_ec;
  pppuStack_f4 = (undefined4 ***)0x11dbf462;
  pcStack_f8 = "OnPetChangeDeclaration";
  uStack_fc = 0x1050f69e;
  pppuStack_d8 = (undefined4 ***)pppcStack_dc;
  FUN_100b62c0();
  uStack_fc = 0;
  pppcStack_100 = (code ***)&DAT_105155d0;
  pppcStack_104 = (code ***)&pppuStack_f4;
  pppcStack_108 = (code ***)0x1050f6b1;
  FUN_10519910();
  if (((code ****)pppcStack_ec != &pppcStack_100) && ((code ****)pppcStack_ec != (code ****)0x0)) {
    pppcStack_108 = pppcStack_ec;
    pcStack_10c = (char *)0x1050f6c7;
    FUN_10c3d5d0();
  }
  pppcStack_f0 = (code ***)&pppcStack_100;
  pppcStack_108 = (code ***)0x11dbf44b;
  pcStack_10c = "OnPetFluteSkill";
  uStack_110 = 0x1050f6e7;
  pppcStack_ec = pppcStack_f0;
  FUN_100b62c0();
  uStack_110 = 0;
  pppuStack_114 = (undefined4 ***)FUN_10515680;
  pppuStack_118 = &pppcStack_108;
  pppcStack_11c = (code ***)0x1050f6fa;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_100 != &pppuStack_114) &&
     ((undefined4 ****)pppcStack_100 != (undefined4 ****)0x0)) {
    pppcStack_11c = pppcStack_100;
    pcStack_120 = (char *)0x1050f710;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppuStack_114;
  pppcStack_11c = (code ***)0x11dbf438;
  pcStack_120 = "OnPetNormalSkill";
  uStack_124 = 0x1050f730;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  uStack_124 = 0;
  pppcStack_128 = (code ***)FUN_105156e0;
  pppcStack_12c = (code ***)&pppcStack_11c;
  pppuStack_130 = (undefined4 ***)0x1050f743;
  FUN_10519910();
  if (((code ****)pppuStack_114 != &pppcStack_128) && ((code ****)pppuStack_114 != (code ****)0x0))
  {
    pppuStack_130 = pppuStack_114;
    pcStack_134 = (char *)0x1050f759;
    FUN_10c3d5d0();
  }
  pppuStack_118 = &pppcStack_128;
  pppuStack_130 = (undefined4 ***)0x11dbf4a2;
  pcStack_134 = "OnFire";
  uStack_138 = 0x1050f779;
  pppuStack_114 = pppuStack_118;
  FUN_100b62c0();
  uStack_138 = 0;
  pppcStack_13c = (code ***)&DAT_10515740;
  pppcStack_140 = (code ***)&pppuStack_130;
  pppcStack_144 = (code ***)0x1050f78c;
  FUN_10519910();
  if (((code ****)pppcStack_128 != &pppcStack_13c) && ((code ****)pppcStack_128 != (code ****)0x0))
  {
    pppcStack_144 = pppcStack_128;
    pcStack_148 = (char *)0x1050f7a2;
    FUN_10c3d5d0();
  }
  pppcStack_12c = (code ***)&pppcStack_13c;
  pppcStack_144 = (code ***)0x11dbf498;
  pcStack_148 = "OnFollow";
  uStack_14c = 0x1050f7c2;
  pppcStack_128 = pppcStack_12c;
  FUN_100b62c0();
  uStack_14c = 0;
  pppcStack_150 = (code ***)FUN_10515750;
  pppcStack_154 = (code ***)&pppcStack_144;
  pppcStack_158 = (code ***)0x1050f7d5;
  FUN_10519910();
  if (((code ****)pppcStack_13c != &pppcStack_150) && ((code ****)pppcStack_13c != (code ****)0x0))
  {
    pppcStack_158 = pppcStack_13c;
    pcStack_15c = (char *)0x1050f7eb;
    FUN_10c3d5d0();
  }
  pppcStack_140 = (code ***)&pppcStack_150;
  pppcStack_158 = (code ***)0x11dbf48d;
  pcStack_15c = "OnGetBack";
  uStack_160 = 0x1050f80b;
  pppcStack_13c = pppcStack_140;
  FUN_100b62c0();
  uStack_160 = 0;
  pppcStack_164 = (code ***)FUN_10515b50;
  pppcStack_168 = (code ***)&pppcStack_158;
  pppcStack_16c = (code ***)0x1050f81e;
  FUN_10519910();
  if (((code ****)pppcStack_150 != &pppcStack_164) && ((code ****)pppcStack_150 != (code ****)0x0))
  {
    pppcStack_16c = pppcStack_150;
    pcStack_170 = (char *)0x1050f834;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppcStack_164;
  pppcStack_16c = (code ***)0x11dbf482;
  pcStack_170 = "OnPack";
  uStack_174 = 0x1050f854;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  uStack_174 = 0;
  pppcStack_178 = (code ***)FUN_10515bc0;
  pppcStack_17c = (code ***)&pppcStack_16c;
  pppcStack_180 = (code ***)0x1050f867;
  FUN_10519910();
  if (((code ****)pppcStack_164 != &pppcStack_178) && ((code ****)pppcStack_164 != (code ****)0x0))
  {
    pppcStack_180 = pppcStack_164;
    puStack_184 = (undefined *)0x1050f87d;
    FUN_10c3d5d0();
  }
  pppcStack_168 = (code ***)&pppcStack_178;
  pppcStack_180 = (code ***)&DAT_11dbf4cc;
  puStack_184 = &DAT_11dbf4c8;
  uStack_188 = 0x1050f89d;
  pppcStack_164 = pppcStack_168;
  FUN_100b62c0();
  uStack_188 = 0;
  pppuStack_18c = (undefined4 ***)FUN_10515dd0;
  pppcStack_190 = (code ***)&pppcStack_180;
  pppcStack_194 = (code ***)0x1050f8b0;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_178 != &pppuStack_18c) &&
     ((undefined4 ****)pppcStack_178 != (undefined4 ****)0x0)) {
    pppcStack_194 = pppcStack_178;
    pcStack_198 = (char *)0x1050f8c6;
    FUN_10c3d5d0();
  }
  pppcStack_17c = (code ***)&pppuStack_18c;
  pppcStack_194 = (code ***)0x11dbf4c4;
  pcStack_198 = "OnCancel";
  uStack_19c = 0x1050f8e6;
  pppcStack_178 = pppcStack_17c;
  FUN_100b62c0();
  uStack_19c = 0;
  pppcStack_1a0 = (code ***)FUN_10516110;
  pppcStack_1a4 = (code ***)&pppcStack_194;
  pppuStack_1a8 = (undefined4 ***)0x1050f8f9;
  FUN_10519910();
  if (((code ****)pppuStack_18c != &pppcStack_1a0) && ((code ****)pppuStack_18c != (code ****)0x0))
  {
    pppuStack_1a8 = pppuStack_18c;
    pcStack_1ac = (char *)0x1050f90f;
    FUN_10c3d5d0();
  }
  pppcStack_190 = (code ***)&pppcStack_1a0;
  pppuStack_1a8 = (undefined4 ***)0x11dbf4bb;
  pcStack_1ac = "CloseUI";
  uStack_1b0 = 0x1050f92f;
  pppuStack_18c = (undefined4 ***)pppcStack_190;
  FUN_100b62c0();
  uStack_1b0 = 0;
  pppcStack_1b4 = (code ***)&LAB_105163b0;
  pppcStack_1b8 = (code ***)&pppuStack_1a8;
  pppcStack_1bc = (code ***)0x1050f942;
  FUN_10519910();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pcStack_1c0 = (char *)0x1050f958;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dbf4b1;
  pcStack_1c0 = "SkillLearnNew";
  uStack_1c4 = 0x1050f978;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  uStack_1c4 = 0;
  pppcStack_1c8 = (code ***)FUN_105162f0;
  pppcStack_1cc = (code ***)&pppcStack_1bc;
  pppcStack_1d0 = (code ***)0x1050f98b;
  FUN_10519910();
  if (((code ****)pppcStack_1b4 != &pppcStack_1c8) && ((code ****)pppcStack_1b4 != (code ****)0x0))
  {
    pppcStack_1d0 = pppcStack_1b4;
    pcStack_1d4 = (char *)0x1050f9a1;
    FUN_10c3d5d0();
  }
  pppcStack_1b8 = (code ***)&pppcStack_1c8;
  pppcStack_1d0 = (code ***)0x11dbf523;
  pcStack_1d4 = "BuffLevelup";
  uStack_1d8 = 0x1050f9c1;
  pppcStack_1b4 = pppcStack_1b8;
  FUN_100b62c0();
  uStack_1d8 = 0;
  pppcStack_1dc = (code ***)FUN_105177c0;
  pppcStack_1e0 = (code ***)&pppcStack_1d0;
  pppcStack_1e4 = (code ***)0x1050f9d4;
  FUN_10519910();
  if (((code ****)pppcStack_1c8 != &pppcStack_1dc) && ((code ****)pppcStack_1c8 != (code ****)0x0))
  {
    pppcStack_1e4 = pppcStack_1c8;
    pcStack_1e8 = (char *)0x1050f9ea;
    FUN_10c3d5d0();
  }
  pppcStack_1cc = (code ***)&pppcStack_1dc;
  pppcStack_1e4 = (code ***)0x11dbf515;
  pcStack_1e8 = "TalentLevelup";
  uStack_1ec = 0x1050fa0a;
  pppcStack_1c8 = pppcStack_1cc;
  FUN_100b62c0();
  uStack_1ec = 0;
  pppuStack_1f0 = (undefined4 ***)FUN_105179b0;
  pppcStack_1f4 = (code ***)&pppcStack_1e4;
  pppcStack_1f8 = (code ***)0x1050fa1d;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_1dc != &pppuStack_1f0) &&
     ((undefined4 ****)pppcStack_1dc != (undefined4 ****)0x0)) {
    pppcStack_1f8 = pppcStack_1dc;
    pcStack_1fc = (char *)0x1050fa33;
    FUN_10c3d5d0();
  }
  pppcStack_1e0 = (code ***)&pppuStack_1f0;
  pppcStack_1f8 = (code ***)0x11dbf504;
  pcStack_1fc = "OnPetSkillUnEquipped";
  uStack_200 = 0x1050fa53;
  pppcStack_1dc = pppcStack_1e0;
  FUN_100b62c0();
  uStack_200 = 0;
  pppcStack_204 = (code ***)FUN_105157c0;
  pppcStack_208 = (code ***)&pppcStack_1f8;
  pppuStack_20c = (undefined4 ***)0x1050fa66;
  FUN_10519910();
  if (((code ****)pppuStack_1f0 != &pppcStack_204) && ((code ****)pppuStack_1f0 != (code ****)0x0))
  {
    pppuStack_20c = pppuStack_1f0;
    pcStack_210 = (char *)0x1050fa7c;
    FUN_10c3d5d0();
  }
  pppcStack_1f4 = (code ***)&pppcStack_204;
  pppuStack_20c = (undefined4 ***)0x11dbf4ec;
  pcStack_210 = "RefreshPetAvatarAndEquipSlot";
  uStack_214 = 0x1050fa9c;
  pppuStack_1f0 = (undefined4 ***)pppcStack_1f4;
  FUN_100b62c0();
  uStack_214 = 0;
  pppcStack_218 = (code ***)&DAT_10515850;
  pppcStack_21c = (code ***)&pppuStack_20c;
  pppcStack_220 = (code ***)0x1050faaf;
  FUN_10519910();
  if (((code ****)pppcStack_204 != &pppcStack_218) && ((code ****)pppcStack_204 != (code ****)0x0))
  {
    pppcStack_220 = pppcStack_204;
    pcStack_224 = (char *)0x1050fac5;
    FUN_10c3d5d0();
  }
  pppcStack_208 = (code ***)&pppcStack_218;
  pppcStack_220 = (code ***)0x11dbf56f;
  pcStack_224 = "OnPetEquipClick";
  uStack_228 = 0x1050fae5;
  pppcStack_204 = pppcStack_208;
  FUN_100b62c0();
  uStack_228 = 0;
  pppcStack_22c = (code ***)FUN_105155e0;
  pppcStack_230 = (code ***)&pppcStack_220;
  pppcStack_234 = (code ***)0x1050faf8;
  FUN_10519910();
  if (((code ****)pppcStack_218 != &pppcStack_22c) && ((code ****)pppcStack_218 != (code ****)0x0))
  {
    pppcStack_234 = pppcStack_218;
    pcStack_238 = (char *)0x1050fb0e;
    FUN_10c3d5d0();
  }
  pppcStack_21c = (code ***)&pppcStack_22c;
  pppcStack_234 = (code ***)0x11dbf55c;
  pcStack_238 = "PetSwapInventoryItem";
  uStack_23c = 0x1050fb2e;
  pppcStack_218 = pppcStack_21c;
  FUN_100b62c0();
  uStack_23c = 0;
  pppcStack_240 = (code ***)FUN_10516530;
  pppcStack_244 = (code ***)&pppcStack_234;
  pppcStack_248 = (code ***)0x1050fb41;
  FUN_10519910();
  if (((code ****)pppcStack_22c != &pppcStack_240) && ((code ****)pppcStack_22c != (code ****)0x0))
  {
    pppcStack_248 = pppcStack_22c;
    pcStack_24c = (char *)0x1050fb57;
    FUN_10c3d5d0();
  }
  pppcStack_230 = (code ***)&pppcStack_240;
  pppcStack_248 = (code ***)0x11dbf544;
  pcStack_24c = "GetPetDetailInfo";
  uStack_250 = 0x1050fb77;
  pppcStack_22c = pppcStack_230;
  FUN_100b62c0();
  uStack_250 = 0;
  pppcStack_254 = (code ***)FUN_105169e0;
  pppcStack_258 = (code ***)&pppcStack_248;
  pppcStack_25c = (code ***)0x1050fb8a;
  FUN_10519910();
  if (((code ****)pppcStack_240 != &pppcStack_254) && ((code ****)pppcStack_240 != (code ****)0x0))
  {
    pppcStack_25c = pppcStack_240;
    pcStack_260 = (char *)0x1050fba0;
    FUN_10c3d5d0();
  }
  pppcStack_244 = (code ***)&pppcStack_254;
  pppcStack_25c = (code ***)0x11dbf530;
  pcStack_260 = "TakeoffEquip";
  uStack_264 = 0x1050fbc0;
  pppcStack_240 = pppcStack_244;
  FUN_100b62c0();
  uStack_264 = 0;
  pppcStack_268 = (code ***)FUN_105165d0;
  pppcStack_26c = (code ***)&pppcStack_25c;
  pppcStack_270 = (code ***)0x1050fbd3;
  FUN_10519910();
  if (((code ****)pppcStack_254 != &pppcStack_268) && ((code ****)pppcStack_254 != (code ****)0x0))
  {
    pppcStack_270 = pppcStack_254;
    pcStack_274 = (char *)0x1050fbe9;
    FUN_10c3d5d0();
  }
  pppcStack_258 = (code ***)&pppcStack_268;
  pppcStack_270 = (code ***)0x11dbf5b2;
  pcStack_274 = "OnPetSkill";
  uStack_278 = 0x1050fc09;
  pppcStack_254 = pppcStack_258;
  FUN_100b62c0();
  uStack_278 = 0;
  pppcStack_27c = (code ***)FUN_10516160;
  pppcStack_280 = (code ***)&pppcStack_270;
  pppcStack_284 = (code ***)0x1050fc1c;
  FUN_10519910();
  if (((code ****)pppcStack_268 != &pppcStack_27c) && ((code ****)pppcStack_268 != (code ****)0x0))
  {
    pppcStack_284 = pppcStack_268;
    pcStack_288 = (char *)0x1050fc32;
    FUN_10c3d5d0();
  }
  pppcStack_26c = (code ***)&pppcStack_27c;
  pppcStack_284 = (code ***)0x11dbf5a6;
  pcStack_288 = "SetAvatarFrameData";
  uStack_28c = 0x1050fc52;
  pppcStack_268 = pppcStack_26c;
  FUN_100b62c0();
  uStack_28c = 0;
  pppcStack_290 = (code ***)FUN_10516d50;
  pppcStack_294 = (code ***)&pppcStack_284;
  pppcStack_298 = (code ***)0x1050fc65;
  FUN_10519910();
  if (((code ****)pppcStack_27c != &pppcStack_290) && ((code ****)pppcStack_27c != (code ****)0x0))
  {
    pppcStack_298 = pppcStack_27c;
    pcStack_29c = (char *)0x1050fc7b;
    FUN_10c3d5d0();
  }
  pppcStack_280 = (code ***)&pppcStack_290;
  pppcStack_298 = (code ***)0x11dbf592;
  pcStack_29c = "GetPetNameSelected";
  uStack_2a0 = 0x1050fc9b;
  pppcStack_27c = pppcStack_280;
  FUN_100b62c0();
  uStack_2a0 = 0;
  pppcStack_2a4 = (code ***)FUN_10517820;
  pppcStack_2a8 = (code ***)&pppcStack_298;
  pppcStack_2ac = (code ***)0x1050fcae;
  FUN_10519910();
  if (((code ****)pppcStack_290 != &pppcStack_2a4) && ((code ****)pppcStack_290 != (code ****)0x0))
  {
    pppcStack_2ac = pppcStack_290;
    pcStack_2b0 = (char *)0x1050fcc4;
    FUN_10c3d5d0();
  }
  pppcStack_294 = (code ***)&pppcStack_2a4;
  pppcStack_2ac = (code ***)0x11dbf57c;
  pcStack_2b0 = "GetSuiteInfo";
  uStack_2b4 = 0x1050fce4;
  pppcStack_290 = pppcStack_294;
  FUN_100b62c0();
  uStack_2b4 = 0;
  pppcStack_2b8 = (code ***)FUN_10516f90;
  pppcStack_2bc = (code ***)&pppcStack_2ac;
  pppcStack_2c0 = (code ***)0x1050fcf7;
  FUN_10519910();
  if (((code ****)pppcStack_2a4 != &pppcStack_2b8) && ((code ****)pppcStack_2a4 != (code ****)0x0))
  {
    pppcStack_2c0 = pppcStack_2a4;
    pcStack_2c4 = (char *)0x1050fd0d;
    FUN_10c3d5d0();
  }
  pppcStack_2a8 = (code ***)&pppcStack_2b8;
  pppcStack_2c0 = (code ***)0x11dbf5ee;
  pcStack_2c4 = "GetEnchantInfo";
  uStack_2c8 = 0x1050fd2d;
  pppcStack_2a4 = pppcStack_2a8;
  FUN_100b62c0();
  uStack_2c8 = 0;
  pppcStack_2cc = (code ***)FUN_10517530;
  pppcStack_2d0 = (code ***)&pppcStack_2c0;
  pppcStack_2d4 = (code ***)0x1050fd40;
  FUN_10519910();
  if (((code ****)pppcStack_2b8 != &pppcStack_2cc) && ((code ****)pppcStack_2b8 != (code ****)0x0))
  {
    pppcStack_2d4 = pppcStack_2b8;
    pcStack_2d8 = (char *)0x1050fd56;
    FUN_10c3d5d0();
  }
  pppcStack_2bc = (code ***)&pppcStack_2cc;
  pppcStack_2d4 = (code ***)0x11dbf5de;
  pcStack_2d8 = "onQuickBuy";
  uStack_2dc = 0x1050fd76;
  pppcStack_2b8 = pppcStack_2bc;
  FUN_100b62c0();
  uStack_2dc = 0;
  pppuStack_2e0 = (undefined4 ***)FUN_10515c10;
  pppcStack_2e4 = (code ***)&pppcStack_2d4;
  pppcStack_2e8 = (code ***)0x1050fd89;
  FUN_10519910();
  if (((undefined4 ****)pppcStack_2cc != &pppuStack_2e0) &&
     ((undefined4 ****)pppcStack_2cc != (undefined4 ****)0x0)) {
    pppcStack_2e8 = pppcStack_2cc;
    pcStack_2ec = (char *)0x1050fd9f;
    FUN_10c3d5d0();
  }
  pppcStack_2d0 = (code ***)&pppuStack_2e0;
  pppcStack_2e8 = (code ***)0x11dbf5d2;
  pcStack_2ec = "ClickSkillSlot";
  uStack_2f0 = 0x1050fdbf;
  pppcStack_2cc = pppcStack_2d0;
  FUN_100b62c0();
  uStack_2f0 = 0;
  pppcStack_2f4 = (code ***)FUN_105172c0;
  pppcStack_2f8 = (code ***)&pppcStack_2e8;
  pppuStack_2fc = (undefined4 ***)0x1050fdd2;
  FUN_10519910();
  if (((code ****)pppuStack_2e0 != &pppcStack_2f4) && ((code ****)pppuStack_2e0 != (code ****)0x0))
  {
    pppuStack_2fc = pppuStack_2e0;
    pcStack_300 = (char *)0x1050fde8;
    FUN_10c3d5d0();
  }
  pppcStack_2e4 = (code ***)&pppcStack_2f4;
  pppuStack_2fc = (undefined4 ***)0x11dbf5c3;
  pcStack_300 = "MsgBoxFirePetOk";
  pcStack_304 = (code *)0x1050fe08;
  pppuStack_2e0 = (undefined4 ***)pppcStack_2e4;
  FUN_100b62c0();
  pcStack_304 = FUN_105176f0;
  pppcStack_30c = (code ***)&pppuStack_2fc;
  pppcStack_310 = (code ***)0x1050fe23;
  pppcStack_308 = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_2f4 != &pppcStack_308) && ((code ****)pppcStack_2f4 != (code ****)0x0))
  {
    pppcStack_310 = pppcStack_2f4;
    pcStack_314 = (char *)0x1050fe39;
    FUN_10c3d5d0();
  }
  pppcStack_2f8 = (code ***)&pppcStack_308;
  pppcStack_310 = (code ***)0x11dbf633;
  pcStack_314 = "MsgBoxFirePetCancel";
  pcStack_318 = (code *)0x1050fe59;
  pppcStack_2f4 = pppcStack_2f8;
  FUN_100b62c0();
  pcStack_318 = FUN_10517740;
  pppcStack_320 = (code ***)&pppcStack_310;
  pppcStack_324 = (code ***)0x1050fe74;
  pppcStack_31c = (code ***)param_1;
  FUN_104d0ee0();
  if (((code ****)pppcStack_308 != &pppcStack_31c) && ((code ****)pppcStack_308 != (code ****)0x0))
  {
    pppcStack_324 = pppcStack_308;
    pcStack_328 = (char *)0x1050fe8a;
    FUN_10c3d5d0();
  }
  pppcStack_30c = (code ***)&pppcStack_31c;
  pppcStack_324 = (code ***)0x11dbf61e;
  pcStack_328 = "UnlockPetSkill";
  uStack_32c = 0x1050feaa;
  pppcStack_308 = pppcStack_30c;
  FUN_100b62c0();
  uStack_32c = 0;
  pppcStack_330 = (code ***)FUN_10511d60;
  pppcStack_334 = (code ***)&pppcStack_324;
  pppcStack_338 = (code ***)0x1050febd;
  FUN_10519910();
  if (((code ****)pppcStack_31c != &pppcStack_330) && ((code ****)pppcStack_31c != (code ****)0x0))
  {
    pppcStack_338 = pppcStack_31c;
    pcStack_33c = (char *)0x1050fed3;
    FUN_10c3d5d0();
  }
  pppcStack_320 = (code ***)&pppcStack_330;
  pppcStack_338 = (code ***)0x11dbf60c;
  pcStack_33c = "RefreshPetUI";
  uStack_340 = 0x1050fef3;
  pppcStack_31c = pppcStack_320;
  FUN_100b62c0();
  uStack_340 = 0;
  pppcStack_344 = (code ***)FUN_10511fc0;
  pppcStack_348 = (code ***)&pppcStack_338;
  pppcStack_34c = (code ***)0x1050ff06;
  FUN_10519910();
  if (((code ****)pppcStack_330 != &pppcStack_344) && ((code ****)pppcStack_330 != (code ****)0x0))
  {
    pppcStack_34c = pppcStack_330;
    pcStack_350 = (char *)0x1050ff1c;
    FUN_10c3d5d0();
  }
  pppcStack_334 = (code ***)&pppcStack_344;
  pppcStack_34c = (code ***)0x11dbf5fe;
  pcStack_350 = "OnSetAssistant";
  uStack_354 = 0x1050ff3c;
  pppcStack_330 = pppcStack_334;
  FUN_100b62c0();
  uStack_354 = 0;
  pppcStack_358 = (code ***)FUN_10517ae0;
  pppcStack_35c = (code ***)&pppcStack_34c;
  pppcStack_360 = (code ***)0x1050ff4f;
  FUN_10519910();
  if (((code ****)pppcStack_344 != &pppcStack_358) && ((code ****)pppcStack_344 != (code ****)0x0))
  {
    pppcStack_360 = pppcStack_344;
    pcStack_364 = (char *)0x1050ff65;
    FUN_10c3d5d0();
  }
  pppcStack_348 = (code ***)&pppcStack_358;
  pppcStack_360 = (code ***)0x11dbf686;
  pcStack_364 = "OnGetAssistantBack";
  uStack_368 = 0x1050ff85;
  pppcStack_344 = pppcStack_348;
  FUN_100b62c0();
  uStack_368 = 0;
  pppcStack_36c = (code ***)FUN_10517b50;
  pppcStack_370 = (code ***)&pppcStack_360;
  pppcStack_374 = (code ***)0x1050ff98;
  FUN_10519910();
  if (((code ****)pppcStack_358 != &pppcStack_36c) && ((code ****)pppcStack_358 != (code ****)0x0))
  {
    pppcStack_374 = pppcStack_358;
    pcStack_378 = (char *)0x1050ffae;
    FUN_10c3d5d0();
  }
  pppcStack_35c = (code ***)&pppcStack_36c;
  pppcStack_374 = (code ***)0x11dbf671;
  pcStack_378 = "OnPetWaitSkillLevelUp";
  uStack_37c = 0x1050ffce;
  pppcStack_358 = pppcStack_35c;
  FUN_100b62c0();
  uStack_37c = 0;
  pppcStack_380 = (code ***)FUN_10517bc0;
  pppcStack_384 = (code ***)&pppcStack_374;
  pppcStack_388 = (code ***)0x1050ffe1;
  FUN_10519910();
  if (((code ****)pppcStack_36c != &pppcStack_380) && ((code ****)pppcStack_36c != (code ****)0x0))
  {
    pppcStack_388 = pppcStack_36c;
    pcStack_38c = (char *)0x1050fff7;
    FUN_10c3d5d0();
  }
  pppcStack_370 = (code ***)&pppcStack_380;
  pppcStack_388 = (code ***)0x11dbf659;
  pcStack_38c = "OnPetSkillLevelUp";
  uStack_390 = 0x10510017;
  pppcStack_36c = pppcStack_370;
  FUN_100b62c0();
  uStack_390 = 0;
  pppcStack_394 = (code ***)FUN_10517e60;
  pppcStack_398 = (code ***)&pppcStack_388;
  pppcStack_39c = (code ***)0x1051002a;
  FUN_10519910();
  if (((code ****)pppcStack_380 != &pppcStack_394) && ((code ****)pppcStack_380 != (code ****)0x0))
  {
    pppcStack_39c = pppcStack_380;
    pcStack_3a0 = (char *)0x10510040;
    FUN_10c3d5d0();
  }
  pppcStack_384 = (code ***)&pppcStack_394;
  pppcStack_39c = (code ***)0x11dbf644;
  pcStack_3a0 = "OnTempSkillApply";
  uStack_3a4 = 0x10510060;
  pppcStack_380 = pppcStack_384;
  FUN_100b62c0();
  uStack_3a4 = 0;
  pppcStack_3a8 = (code ***)FUN_10518010;
  pppcStack_3ac = (code ***)&pppcStack_39c;
  pppcStack_3b0 = (code ***)0x10510073;
  FUN_10519910();
  if (((code ****)pppcStack_394 != &pppcStack_3a8) && ((code ****)pppcStack_394 != (code ****)0x0))
  {
    pppcStack_3b0 = pppcStack_394;
    pcStack_3b4 = (char *)0x10510089;
    FUN_10c3d5d0();
  }
  pppcStack_398 = (code ***)&pppcStack_3a8;
  pppcStack_3b0 = (code ***)0x11dbf6d1;
  pcStack_3b4 = "OnTempSkillDelete";
  uStack_3b8 = 0x105100a9;
  pppcStack_394 = pppcStack_398;
  FUN_100b62c0();
  uStack_3b8 = 0;
  pppcStack_3bc = (code ***)FUN_105180d0;
  pppcStack_3c0 = (code ***)&pppcStack_3b0;
  pppcStack_3c4 = (code ***)0x105100bc;
  FUN_10519910();
  if (((code ****)pppcStack_3a8 != &pppcStack_3bc) && ((code ****)pppcStack_3a8 != (code ****)0x0))
  {
    pppcStack_3c4 = pppcStack_3a8;
    pcStack_3c8 = (char *)0x105100d2;
    FUN_10c3d5d0();
  }
  pppcStack_3ac = (code ***)&pppcStack_3bc;
  pppcStack_3c4 = (code ***)0x11dbf6be;
  pcStack_3c8 = "OnTempSkillAdd";
  uStack_3cc = 0x105100f2;
  pppcStack_3a8 = pppcStack_3ac;
  FUN_100b62c0();
  uStack_3cc = 0;
  pppcStack_3d0 = (code ***)FUN_10518160;
  pppcStack_3d4 = (code ***)&pppcStack_3c4;
  pppcStack_3d8 = (code ***)0x10510105;
  FUN_10519910();
  if (((code ****)pppcStack_3bc != &pppcStack_3d0) && ((code ****)pppcStack_3bc != (code ****)0x0))
  {
    pppcStack_3d8 = pppcStack_3bc;
    pcStack_3dc = (char *)0x1051011b;
    FUN_10c3d5d0();
  }
  pppcStack_3c0 = (code ***)&pppcStack_3d0;
  pppcStack_3d8 = (code ***)0x11dbf6ac;
  pcStack_3dc = "OnTempSkillClear";
  uStack_3e0 = 0x1051013b;
  pppcStack_3bc = pppcStack_3c0;
  FUN_100b62c0();
  uStack_3e0 = 0;
  pppcStack_3e4 = (code ***)FUN_105181e0;
  pppcStack_3e8 = (code ***)&pppcStack_3d8;
  pppcStack_3ec = (code ***)0x1051014e;
  FUN_10519910();
  if (((code ****)pppcStack_3d0 != &pppcStack_3e4) && ((code ****)pppcStack_3d0 != (code ****)0x0))
  {
    pppcStack_3ec = pppcStack_3d0;
    pcStack_3f0 = (char *)0x10510164;
    FUN_10c3d5d0();
  }
  pppcStack_3d4 = (code ***)&pppcStack_3e4;
  pppcStack_3ec = (code ***)0x11dbf69a;
  pcStack_3f0 = "CheckSkillBookInfo";
  uStack_3f4 = 0x10510184;
  pppcStack_3d0 = pppcStack_3d4;
  FUN_100b62c0();
  uStack_3f4 = 0;
  pppcStack_3f8 = (code ***)FUN_10518e60;
  pppcStack_3fc = (code ***)&pppcStack_3ec;
  pppcStack_400 = (code ***)0x10510197;
  FUN_10519910();
  if (((code ****)pppcStack_3e4 != &pppcStack_3f8) && ((code ****)pppcStack_3e4 != (code ****)0x0))
  {
    pppcStack_400 = pppcStack_3e4;
    pcStack_404 = (char *)0x105101ad;
    FUN_10c3d5d0();
  }
  pppcStack_3e8 = (code ***)&pppcStack_3f8;
  pppcStack_400 = (code ***)0x11dbf715;
  pcStack_404 = "IsShowCheckBoxMsg";
  uStack_408 = 0x105101cd;
  pppcStack_3e4 = pppcStack_3e8;
  FUN_100b62c0();
  uStack_408 = 0;
  ppcStack_40c = (code **)FUN_105193a0;
  pppcStack_410 = (code ***)&pppcStack_400;
  pppcStack_414 = (code ***)0x105101e0;
  FUN_10519910();
  if ((pppcStack_3f8 != &ppcStack_40c) && (pppcStack_3f8 != (code ***)0x0)) {
    pppcStack_414 = pppcStack_3f8;
    pcStack_418 = (char *)0x105101f6;
    FUN_10c3d5d0();
  }
  pppcStack_3fc = &ppcStack_40c;
  pppcStack_414 = (code ***)0x11dbf702;
  pcStack_418 = "SetShowCheckBoxCfg";
  uStack_41c = 0x10510216;
  pppcStack_3f8 = pppcStack_3fc;
  FUN_100b62c0();
  uStack_41c = 0;
  pcStack_420 = FUN_10519500;
  FUN_10519910(&pppcStack_414);
  if ((ppcStack_40c != &pcStack_420) && (ppcStack_40c != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_40c);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512150,0);
      FUN_10d17870();
      FUN_1051d740();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_105122d0,0);
      FUN_10d17870();
      FUN_1051d790();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512310,0);
      FUN_10d17870();
      FUN_1051d7e0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512480,0);
      FUN_10d17870();
      FUN_1051d830();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,&DAT_10512570,0);
      FUN_10d17870();
      FUN_1051d880();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512580,0);
      FUN_10d17870();
      FUN_1051d8d0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512730,0);
      FUN_10d17870();
      FUN_1051d920();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_105127a0,0);
      FUN_10d17870();
      FUN_1051d970();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_105127d0,0);
      FUN_10d17870();
      FUN_1051d9c0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512810,0);
      FUN_10d17870();
      FUN_1051da10();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512a20,0);
      FUN_10d17870();
      FUN_1051da60();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_105129d0,0);
      FUN_10d17870();
      FUN_1051dab0();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10512b10,0);
      FUN_10d17870();
      FUN_1051db00();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,FUN_10519640,0);
      FUN_10d17870();
      FUN_1051db50();
    }
  }
  pppcVar2 = (code ***)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("gfx_draw_only");
  param_1[100] = pppcVar2;
  pppcVar2 = (code ***)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("gfx_draw");
  param_1[0x65] = pppcVar2;
  if ((DAT_123bcde4 >> 6 & 1) != 0) {
    (**(code **)(*DAT_123bcde0 + 8))(&DAT_123bcde0,DAT_123bcde8);
    DAT_123bcde0 = (int *)0x0;
  }
  DAT_123bcde4 = 1;
  FUN_11a89daa();
  return;
}



/* ===== FUN_105137f0 @ 105137f0  size=3375 ===== */
// calls: CPetSkillInfo::BuildSkillDetailList, CPetStarInfo::FindByKey3, CPetSkillInfo::HasNextLevelSkillInList, CPetSkillInfo::ExistsByIdInAltRegistry, memcpy
// strings:
//   "SetRequireItemId"
//   "_PetEquippedInitiativeSkills"
//   "_PetEquippedPassiveSkills"
//   "_PetEquippedAssistantSkills"
//   "_PetEquippedTemporarySkills"
//   "_SelfTalentSkill"
//   "_SelfBuff"
//   "PetSkillItemVO_CLASS_NAME"
//   "strSkillName"
//   "SkillIcon"
//   "bActive"
//   "skilllevel"
//   "bAssemble"
//   "SkillID"
//   "skilltype"
//   "skillPoint"
//   "skilleffect"
//   "quality"
//   "aptitude"
//   "intimate"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""SetRequireItemId""
     ""_PetEquippedInitiativeSkills""
     ""_PetEquippedPassiveSkills""
     ""_PetEquippedAssistantSkills""
     ""_PetEquippedTemporarySkills""
     ""_SelfTalentSkill""
     ""_SelfBuff""
     ""PetSkillItemVO_CLASS_NAME""
     ""strSkillName""
     ""SkillIcon"" */

void __fastcall FUN_105137f0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 *puVar9;
  int *local_168;
  uint local_164;
  undefined4 local_160;
  int *local_150;
  uint local_14c;
  undefined4 local_148;
  int *local_138;
  uint local_134;
  undefined4 *local_130;
  uint local_11c;
  int *local_118;
  uint local_114;
  undefined4 local_110;
  int *local_100;
  uint local_fc;
  undefined4 local_f8;
  int *local_e8;
  uint local_e4;
  undefined4 local_e0;
  int *local_d0;
  uint local_cc;
  undefined4 local_c8;
  int *local_b8;
  uint local_b4;
  undefined4 local_b0;
  int *local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  int local_64;
  undefined4 *local_60;
  uint local_5c;
  int *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 *local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 local_24 [12];
  undefined4 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_150 = (int *)0x0;
  local_14c = 0;
  local_d0 = (int *)0x0;
  local_cc = 0;
  local_b8 = (int *)0x0;
  local_b4 = 0;
  local_118 = (int *)0x0;
  local_114 = 0;
  local_e8 = (int *)0x0;
  local_e4 = 0;
  local_100 = (int *)0x0;
  local_fc = 0;
  local_168 = (int *)0x0;
  local_164 = 0;
  local_a0 = (int *)0x0;
  local_9c = 0;
  iVar3 = FUN_116a6a70();
  uVar4 = *(undefined4 *)(iVar3 + 0xf8);
  if ((local_9c >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 8))(&local_a0,local_98);
    local_a0 = (int *)0x0;
  }
  local_9c = 3;
  local_98 = uVar4;
  (**(code **)(*DAT_123bcdb0 + 0x18))
            (DAT_123bcdb8,&local_168,"SetRequireItemId",&local_a0,1,
             ((byte)DAT_123bcdb4 & 0x8f) == 10);
  local_138 = (int *)0x0;
  local_134 = 0;
  local_60 = (undefined4 *)0x0;
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetEquippedInitiativeSkills",&local_d0,((byte)DAT_123bcdb4 & 0x8f) == 10
            );
  (**(code **)(*local_d0 + 0x44))(local_c8,0,0xffffffff);
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetEquippedPassiveSkills",&local_150,((byte)DAT_123bcdb4 & 0x8f) == 10);
  (**(code **)(*local_150 + 0x44))(local_148,0,0xffffffff);
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetEquippedAssistantSkills",&local_b8,((byte)DAT_123bcdb4 & 0x8f) == 10)
  ;
  (**(code **)(*local_b8 + 0x44))(local_b0,0,0xffffffff);
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_PetEquippedTemporarySkills",&local_118,((byte)DAT_123bcdb4 & 0x8f) == 10
            );
  (**(code **)(*local_118 + 0x44))(local_110,0,0xffffffff);
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_SelfTalentSkill",&local_e8,((byte)DAT_123bcdb4 & 0x8f) == 10);
  (**(code **)(*DAT_123bcdb0 + 0x10))
            (DAT_123bcdb8,"_SelfBuff",&local_100,((byte)DAT_123bcdb4 & 0x8f) == 10);
  local_40 = (undefined4 *)CONCAT31(local_40._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
  cVar1 = (**(code **)(*DAT_123bcdb0 + 0x10))
                    (DAT_123bcdb8,"PetSkillItemVO_CLASS_NAME",&local_138,local_40);
  if ((cVar1 != '\0') && (((byte)local_134 & 0x8f) == 6)) {
    if ((local_134 >> 6 & 1) == 0) {
      local_60 = local_130;
    }
    else {
      local_60 = (undefined4 *)*local_130;
    }
  }
  local_64 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (local_64 != 0) {
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_74 = 0;
    local_68 = (undefined1 *)0x0;
    FUN_112f7a50(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),&local_84);
    FUN_112f7990(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),&local_74);
    local_14 = local_24;
    local_24[0] = 0;
    local_10 = local_14;
    FUN_100e5aa0(local_14);
    FUN_104d1670("strSkillName",local_10);
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_10);
    }
    puVar7 = &DAT_11d9d32b;
    if (local_78 != (undefined1 *)0x0) {
      puVar7 = local_78;
    }
    FUN_104d1670("SkillIcon",puVar7);
    FUN_104d15e0("bActive",local_80);
    FUN_104d1550("skilllevel",local_7c);
    local_24[0] = 0;
    local_14 = local_24;
    local_10 = local_14;
    FUN_100e5aa0(local_14);
    FUN_104d1670("strSkillName",local_10);
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_10);
    }
    puVar7 = &DAT_11d9d32b;
    if (local_68 != (undefined1 *)0x0) {
      puVar7 = local_68;
    }
    FUN_104d1670("SkillIcon",puVar7);
    FUN_104d15e0("bActive",local_70);
    FUN_104d1550("skilllevel",local_6c);
    CPetSkillInfo__BuildSkillDetailList
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               (int *)(param_1 + 0x140));
    local_40 = *(undefined4 **)(param_1 + 0x144);
    puVar9 = *(undefined4 **)(param_1 + 0x140);
    local_58 = (int *)0x0;
    local_54 = 0;
    if (puVar9 != local_40) {
      do {
        FUN_11a98de0(&local_58,local_60,0,0);
        local_5c = FUN_1050ef40(puVar9[3]);
        if ((local_5c != 0) &&
           (iVar3 = CPetStarInfo__FindByKey3
                              (puVar9[0xc],puVar9[0xb],*(undefined4 *)(local_5c + 0x44)), iVar3 != 0
           )) {
          local_14 = local_24;
          local_24[0] = 0;
          local_10 = local_14;
          FUN_100e5aa0(local_14);
          FUN_104d1670("strSkillName",local_10);
          if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_10);
          }
          FUN_104d15e0("bAssemble",1);
          puVar7 = &DAT_11d9d32b;
          if ((undefined1 *)puVar9[1] != (undefined1 *)0x0) {
            puVar7 = (undefined1 *)puVar9[1];
          }
          FUN_104d1670("SkillIcon",puVar7);
          FUN_104d1550("skilllevel",puVar9[2]);
          FUN_104d1550("SkillID",puVar9[3]);
          FUN_104d1550("skilltype",puVar9[4]);
          FUN_104d1550("skillPoint",puVar9[8]);
          local_24[0] = 0;
          local_14 = local_24;
          local_10 = local_14;
          FUN_100e5aa0(local_14);
          FUN_104d1670("skilleffect",local_10);
          if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_10);
          }
          FUN_104d1550("quality",puVar9[0xb]);
          FUN_104d1550("aptitude",puVar9[0xc]);
          FUN_104d1550("intimate",puVar9[10]);
          FUN_104d1550("curpercent",puVar9[5]);
          FUN_104d1550("maxpercent",puVar9[6]);
          FUN_104d1550("learntime",puVar9[7]);
          FUN_104d1550(&DAT_11dbfae0,puVar9[0xd]);
          uVar2 = CPetSkillInfo__HasNextLevelSkillInList
                            (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                             puVar9[3]);
          FUN_104d15e0("bCanLevelUp",uVar2);
          FUN_104d15e0("bAdvanced",*(undefined1 *)(local_5c + 0x54));
          uVar2 = CPetSkillInfo__ExistsByIdInAltRegistry(*(undefined4 *)(local_5c + 0x24));
          FUN_104d15e0("bFixed",uVar2);
          FUN_104d1550("nCurSkillLv",puVar9[2]);
          uVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0xb8))(puVar9[3]);
          FUN_104d1550("nMaxSkillLv",uVar4);
          iVar3 = puVar9[4];
          piVar8 = local_150;
          uVar4 = local_148;
          if (((iVar3 != 7) && (piVar8 = local_d0, uVar4 = local_c8, iVar3 != 6)) &&
             (piVar8 = local_b8, uVar4 = local_b0, iVar3 != 8)) {
            if (iVar3 != 9) goto LAB_10513f85;
            FUN_104d1550(&DAT_11dbfae0,1);
            piVar8 = local_b8;
            uVar4 = local_b0;
          }
          (**(code **)(*piVar8 + 0x3c))(uVar4,&local_58);
        }
LAB_10513f85:
        puVar9 = puVar9 + 0xf;
      } while (puVar9 != local_40);
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       ((piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0 &&
        ((iVar3 = (**(code **)(*piVar8 + 0xb4))(), iVar3 != 0 &&
         (iVar3 = (**(code **)(**(int **)(iVar3 + 0x2cd8) + 0x58))(*(undefined4 *)(param_1 + 0x38)),
         iVar3 != 0)))))) {
      iVar3 = *(int *)(iVar3 + 0xc);
      FUN_1051aba0(*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) >> 3,extraout_ECX);
      puVar9 = local_18;
      pvVar5 = *(void **)(iVar3 + 0x10);
      puVar6 = local_18;
      if (*(void **)(iVar3 + 0x14) != pvVar5) {
        local_40 = (undefined4 *)((int)*(void **)(iVar3 + 0x14) - (int)pvVar5);
        pvVar5 = memcpy(local_18,pvVar5,(size_t)local_40);
        puVar6 = (undefined4 *)((int)pvVar5 + (int)local_40);
      }
      local_5c = 0;
      local_11c = (int)puVar6 - (int)puVar9 >> 3;
      puVar6 = puVar9;
      if (local_11c != 0) {
        do {
          local_40 = puVar9;
          iVar3 = FUN_1050ef40(*puVar9);
          if (iVar3 != 0) {
            FUN_11a98de0(&local_58,local_60,0,0);
            local_2c = local_3c;
            local_3c[0] = 0;
            local_28 = local_2c;
            FUN_100e5aa0(local_2c);
            FUN_104d1670("strSkillName",local_28);
            if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_28);
            }
            FUN_104d15e0("bAssemble",1);
            FUN_104d1670("SkillIcon",*(undefined4 *)(iVar3 + 0x40));
            FUN_104d1550("skilllevel",*(undefined4 *)(iVar3 + 0x14));
            FUN_104d1550("SkillID",*(undefined4 *)(iVar3 + 0x10));
            FUN_104d1550("skilltype",*(undefined4 *)(iVar3 + 0x58));
            FUN_104d1550("skillPoint",*(undefined4 *)(iVar3 + 100));
            local_3c[0] = 0;
            local_2c = local_3c;
            local_28 = local_2c;
            FUN_100e5aa0(local_2c);
            FUN_104d1670("skilleffect",local_28);
            if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_28);
            }
            FUN_104d1550("quality",*(undefined4 *)(iVar3 + 0x70));
            FUN_104d1550("aptitude",*(undefined4 *)(iVar3 + 0x6c));
            FUN_104d1550("intimate",*(undefined4 *)(iVar3 + 0x68));
            FUN_104d1550(&DAT_11dbfae0,local_5c);
            uVar2 = FUN_112f5190(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                                 *(undefined4 *)(iVar3 + 0x10));
            FUN_104d15e0("bCanLevelUp",uVar2);
            FUN_104d15e0("bAdvanced",*(undefined1 *)(iVar3 + 0x54));
            FUN_104d15e0("bFixed",0);
            FUN_104d1550("nCurSkillLv",*(undefined4 *)(iVar3 + 0x14));
            uVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0xb8))(*(undefined4 *)(iVar3 + 0x10));
            FUN_104d1550("nMaxSkillLv",uVar4);
            (**(code **)(*local_118 + 0x3c))(local_110,&local_58);
          }
          local_5c = local_5c + 1;
          puVar9 = local_40 + 2;
          puVar6 = local_18;
          local_40 = puVar9;
        } while (local_5c < local_11c);
      }
      (**(code **)(*DAT_123bcdb0 + 0x18))
                (DAT_123bcdb8,0,"RefreshPetEquippedSkills",0,0,((byte)DAT_123bcdb4 & 0x8f) == 10);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_10c3d5d0(puVar6);
      }
    }
    if ((local_54 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 8))(&local_58,local_50);
      local_58 = (int *)0x0;
    }
    local_54 = 0;
    if (local_68 != (undefined1 *)0x0) {
      FUN_10c3da30(local_68);
    }
    local_68 = (undefined1 *)0x0;
    if (local_74 != 0) {
      FUN_10c3da30(local_74);
    }
    local_74 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_10c3da30(local_78);
    }
    local_78 = (undefined1 *)0x0;
    if (local_84 != 0) {
      FUN_10c3da30(local_84);
    }
    local_84 = 0;
  }
  if ((local_134 >> 6 & 1) != 0) {
    (**(code **)(*local_138 + 8))(&local_138,local_130);
    local_138 = (int *)0x0;
  }
  local_134 = 0;
  if ((local_9c >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 8))(&local_a0,local_98);
    local_a0 = (int *)0x0;
  }
  local_9c = 0;
  if ((local_164 >> 6 & 1) != 0) {
    (**(code **)(*local_168 + 8))(&local_168,local_160);
    local_168 = (int *)0x0;
  }
  local_164 = 0;
  if ((local_fc >> 6 & 1) != 0) {
    (**(code **)(*local_100 + 8))(&local_100,local_f8);
    local_100 = (int *)0x0;
  }
  local_fc = 0;
  if ((local_e4 >> 6 & 1) != 0) {
    (**(code **)(*local_e8 + 8))(&local_e8,local_e0);
    local_e8 = (int *)0x0;
  }
  local_e4 = 0;
  if ((local_114 >> 6 & 1) != 0) {
    (**(code **)(*local_118 + 8))(&local_118,local_110);
    local_118 = (int *)0x0;
  }
  local_114 = 0;
  if ((local_b4 >> 6 & 1) != 0) {
    (**(code **)(*local_b8 + 8))(&local_b8,local_b0);
    local_b8 = (int *)0x0;
  }
  local_b4 = 0;
  if ((local_cc >> 6 & 1) != 0) {
    (**(code **)(*local_d0 + 8))(&local_d0,local_c8);
    local_d0 = (int *)0x0;
  }
  local_cc = 0;
  if ((local_14c >> 6 & 1) != 0) {
    (**(code **)(*local_150 + 8))(&local_150,local_148);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10517530 @ 10517530  size=438 ===== */
// strings:
//   "m_strEnchantDesc"

/* [RE-AUTO c0]
   strings:
     ""m_strEnchantDesc"" */

void __thiscall
FUN_10517530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iStack_64;
  undefined4 local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_2c [20];
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_64;
  local_60 = param_3;
  local_5c = param_1;
  if ((((param_6 == 4) &&
       (iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))(), iVar1 != 0
       )) && (*(int *)(iVar1 + 0x260e0) != 0)) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar2 = *(uint *)(param_5 + 4) & 0x8f;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    if ((uVar2 == 3) || (uVar5 = 0xdeadbeaf, uVar2 == 4)) {
      uVar5 = *(undefined4 *)(param_5 + 8);
    }
    FUN_104f42b0(param_5 + 0x18);
    FUN_104f42b0(param_5 + 0x30);
    uVar2 = *(uint *)(param_5 + 0x4c) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      iVar1 = *(int *)(param_5 + 0x50);
    }
    else {
      iVar1 = -0x21524151;
    }
    iVar3 = (**(code **)(**(int **)(iStack_64 + 0x30) + 0x54))();
    if (iVar3 != 0) {
      if (iVar1 == 6) {
        uVar5 = FUN_112f5b90(uVar5,*(undefined4 *)(DAT_123bb978 + 0x34));
        piVar4 = (int *)FUN_113f9bb0(6,uVar5);
      }
      else {
        piVar4 = (int *)FUN_113f9bb0(iVar1,uVar5);
      }
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*piVar4 + 0x3c))();
        iVar1 = FUN_1050ed80(uVar5);
        if (iVar1 == 0) {
          FUN_104d1670("m_strEnchantDesc",&DAT_11d9d32b);
        }
        else {
          iVar1 = FUN_100e5b40(auStack_2c);
          FUN_104d1670("m_strEnchantDesc",*(undefined4 *)(iVar1 + 0x14));
          if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_18);
          }
        }
      }
    }
    FUN_104d7c10();
    FUN_104d7c10();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10520930 @ 10520930  size=158 ===== */
// calls: CSoulStoneLevelUpInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CSoulStoneLevelUpInfo"

/* [RE-AUTO c0]
   calls: CSoulStoneLevelUpInfo::GetManagers
   strings:
     ""CSoulStoneLevelUpInfo"" */

undefined4 FUN_10520930(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0144;
  puVar2 = (undefined4 *)CSoulStoneLevelUpInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CSoulStoneLevelUpInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c7310 & 1) == 0) {
        DAT_123c7310 = DAT_123c7310 | 1;
        FUN_1052a410();
        FUN_11a8911f(&LAB_11c6fb80);
      }
      puVar3 = &DAT_123c7314;
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



/* ===== FUN_1052dd30 @ 1052dd30  size=1337 ===== */
// strings:
//   "_refreshEquipRankupDropDownData"
//   "_refreshEquipUpgradeDropDownData"
//   "_refreshEquipBreakLevelDropDownData"
//   "_refreshEquipWakeLevelDropDownData"
//   "_updateEquipShowContent"
//   "itemColumn"
//   "itemGrid"
//   "selectItemID"
//   "widgetIDOpen"

/* [RE-AUTO c0]
   strings:
     ""_refreshEquipRankupDropDownData""
     ""_refreshEquipUpgradeDropDownData""
     ""_refreshEquipBreakLevelDropDownData""
     ""_refreshEquipWakeLevelDropDownData""
     ""_updateEquipShowContent""
     ""itemColumn""
     ""itemGrid""
     ""selectItemID""
     ""widgetIDOpen"" */

void __thiscall
FUN_1052dd30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint unaff_EBX;
  int *unaff_ESI;
  undefined4 uStack_54;
  int *local_50;
  uint local_4c;
  undefined4 uStack_48;
  byte bStack_40;
  char cStack_3c;
  int *local_38;
  uint local_34;
  undefined4 uStack_30;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  
  local_50 = (int *)0x0;
  local_4c = 0;
  local_38 = (int *)0x0;
  local_34 = 0;
  bVar1 = true;
  local_20 = (int *)0x0;
  local_1c = 0;
  if (param_6 == 3) {
    FUN_104f42b0(param_5);
    FUN_104f42b0(param_5 + 0x18);
    FUN_104f42b0(param_5 + 0x30);
    FUN_104d13b0("_refreshEquipRankupDropDownData",FUN_10531380);
    FUN_104d13b0("_refreshEquipUpgradeDropDownData",FUN_105315a0);
    FUN_104d13b0("_refreshEquipBreakLevelDropDownData",FUN_105319d0);
    FUN_104d13b0("_refreshEquipWakeLevelDropDownData",FUN_10531e90);
    FUN_104d13b0("_updateEquipShowContent",FUN_105324c0);
    FUN_104d1550("itemColumn",*(undefined4 *)(param_1 + 0x494));
    FUN_104d1550("itemGrid",*(undefined4 *)(param_1 + 0x498));
    FUN_104d1550("selectItemID",*(undefined4 *)(param_1 + 0x49c));
    bVar1 = false;
  }
  else if (param_6 == 2) {
    FUN_104f42b0(param_5);
    FUN_104f42b0(param_5 + 0x18);
  }
  else {
    if (param_6 != 1) goto LAB_1052e1ef;
    FUN_104f42b0(param_5);
    if ((unaff_EBX >> 6 & 1) != 0) {
      (**(code **)(*unaff_ESI + 8))(&stack0xffffffa4,uStack_54);
    }
  }
  cVar2 = '\0';
  if ((bStack_40 & 0x8f) == 2) {
    cVar2 = cStack_3c;
  }
  iVar3 = (cVar2 != '\0') + 1;
  *(int *)(param_1 + 0x438) = iVar3;
  if (((iVar3 == 1) || (iVar3 == 3)) &&
     (iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))(), iVar3 != 0))
  {
    uVar4 = FUN_1025b060();
    *(undefined4 *)(param_1 + 0x43c) = uVar4;
  }
  if (!bVar1) {
    FUN_104f42b0(&stack0xffffffa4);
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x440) = 1;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  if (*(int *)(param_1 + 0x4e0) != *(int *)(param_1 + 0x4d0)) {
    do {
      if (*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4d8) + -4) {
        if (*(int *)(param_1 + 0x4d4) != 0) {
          FUN_10c3d5d0(*(int *)(param_1 + 0x4d4));
        }
        piVar5 = (int *)(*(int *)(param_1 + 0x4dc) + 4);
        *(int **)(param_1 + 0x4dc) = piVar5;
        iVar3 = *piVar5;
        *(int *)(param_1 + 0x4d4) = iVar3;
        *(int *)(param_1 + 0x4d8) = iVar3 + 0x80;
        iVar3 = *(int *)(param_1 + 0x4d4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4d0) + 4;
      }
      *(int *)(param_1 + 0x4d0) = iVar3;
    } while (*(int *)(param_1 + 0x4e0) != *(int *)(param_1 + 0x4d0));
  }
  FUN_1052d8f0();
  cVar2 = FUN_1050a110(0x7c);
  if (cVar2 == '\0') {
    cVar2 = FUN_1050a110(0x8b);
    iVar3 = DAT_1202e818;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x48c) = 7;
      *(undefined4 *)(param_1 + 0x438) = 3;
      *(undefined4 *)(param_1 + 0x464) = 1;
      iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
      if (iVar3 != 0) {
        uVar4 = FUN_1025b060();
        *(undefined4 *)(param_1 + 0x43c) = uVar4;
      }
      uVar4 = *(undefined4 *)(DAT_123bbb78 + 0x20);
      if (*(int *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) == 0) {
        uVar6 = FUN_1052db00(*(int *)(param_1 + 0x48c));
        *(undefined4 *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) = uVar6;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) + 0x34) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) + 0x5c) = uVar4;
      goto LAB_1052e189;
    }
    cVar2 = FUN_1050a110(0xc1);
    if (cVar2 != '\0') goto LAB_1052dfdd;
    cVar2 = FUN_1050a110(0xd1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x48c) = 6;
      if (*(int *)(param_1 + 0x480) != 0) goto LAB_1052e189;
      iVar3 = 6;
      goto LAB_1052e014;
    }
    cVar2 = FUN_1050a110(0x1d);
    if ((cVar2 != '\0') || (cVar2 = FUN_1050a110(0xfb), cVar2 != '\0')) {
      *(undefined4 *)(param_1 + 0x48c) = 7;
      if (*(int *)(param_1 + 0x484) == 0) {
        uVar4 = FUN_1052db00(7);
        *(undefined4 *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) = uVar4;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) + 0x34) = 0;
      goto LAB_1052e189;
    }
  }
  else {
LAB_1052dfdd:
    if (*(int *)(param_1 + 0x438) == 1) {
      *(undefined4 *)(param_1 + 0x48c) = 0;
    }
    else if (*(int *)(param_1 + 0x438) == 2) {
      *(undefined4 *)(param_1 + 0x48c) = 2;
    }
    iVar3 = *(int *)(param_1 + 0x48c);
    if (*(int *)(param_1 + 0x468 + iVar3 * 4) == 0) {
LAB_1052e014:
      uVar4 = FUN_1052db00(iVar3);
      *(undefined4 *)(param_1 + 0x468 + *(int *)(param_1 + 0x48c) * 4) = uVar4;
    }
LAB_1052e189:
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (!bVar1) {
    FUN_104d1550("widgetIDOpen",*(undefined4 *)(param_1 + 0x490));
  }
  *(undefined4 *)(param_1 + 0x490) = 0xffffffff;
  if (*(int *)(param_1 + 0x48c) == 0) {
    iVar3 = *(int *)(param_1 + 0x468);
    cVar2 = FUN_1050a110(0xc1);
    *(bool *)(iVar3 + 0x5a) = cVar2 != '\0';
  }
  FUN_1052e650();
LAB_1052e1ef:
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
    local_20 = (int *)0x0;
  }
  local_1c = 0;
  if ((local_34 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 8))(&local_38,uStack_30);
    local_38 = (int *)0x0;
  }
  local_34 = 0;
  if ((local_4c >> 6 & 1) != 0) {
    (**(code **)(*local_50 + 8))(&local_50,uStack_48);
  }
  return;
}



/* ===== FUN_105319d0 @ 105319d0  size=1203 ===== */
// calls: CPet::SetName, CEquipEnforceBreak::GetManagers_116c4a30
// strings:
//   "equipName"
//   "itemID"
//   "breakLevel"
//   "enforceLevel"
//   "enforceruleid"

/* [RE-AUTO c0]
   strings:
     ""equipName""
     ""itemID""
     ""breakLevel""
     ""enforceLevel""
     ""enforceruleid"" */

void FUN_105319d0(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int in_stack_00000010;
  int **ppiVar5;
  int iVar6;
  int *piVar7;
  int *piStack_9c;
  int local_98;
  int *piStack_94;
  undefined1 *local_90;
  int *piStack_8c;
  int *local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_9c;
  if (((byte)*(uint *)(in_stack_00000010 + 4) & 0x8f) == 6) {
    if ((*(uint *)(in_stack_00000010 + 4) >> 6 & 1) == 0) {
      local_90 = *(undefined1 **)(in_stack_00000010 + 8);
    }
    else {
      local_90 = (undefined1 *)**(undefined4 **)(in_stack_00000010 + 8);
    }
  }
  else {
    local_90 = &DAT_11d9d32b;
  }
  local_84 = *(uint *)(in_stack_00000010 + 0x1c);
  local_7c = *(undefined4 *)(in_stack_00000010 + 0x24);
  local_80 = *(undefined4 *)(in_stack_00000010 + 0x20);
  local_78[0] = *(undefined4 *)(in_stack_00000010 + 0x28);
  local_88 = (int *)0x0;
  if ((local_84 >> 6 & 1) != 0) {
    local_88 = *(int **)(in_stack_00000010 + 0x18);
    (**(code **)(*local_88 + 4))(&local_88,local_80);
  }
  uVar2 = *(uint *)(in_stack_00000010 + 0x34) & 0x8f;
  if ((uVar2 == 3) || (uVar2 == 4)) {
    local_98 = *(int *)(in_stack_00000010 + 0x38);
  }
  else {
    local_98 = -0x21524151;
  }
  uStack_6c = *(uint *)(in_stack_00000010 + 100);
  uStack_64 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  uStack_68 = *(undefined4 *)(in_stack_00000010 + 0x68);
  piStack_60 = *(int **)(in_stack_00000010 + 0x70);
  piStack_70 = (int *)0x0;
  if ((uStack_6c >> 6 & 1) != 0) {
    piStack_70 = *(int **)(in_stack_00000010 + 0x60);
    (**(code **)(*piStack_70 + 4))(&piStack_70,uStack_68);
  }
  piVar3 = (int *)FUN_107cb630();
  if (((piVar3 != (int *)0x0) && (cVar1 = FUN_116698a0(), cVar1 != '\0')) &&
     (local_90 != (undefined1 *)0x0)) {
    iVar6 = 0;
    ppiVar5 = &piStack_58;
    piStack_58 = (int *)0x0;
    piStack_54 = (int *)0x0;
    FUN_11a98de0(ppiVar5,local_90,0,0);
    FUN_1166c400();
    uVar4 = (**(code **)(*piVar3 + 0x14))();
    piVar7 = (int *)0x0;
    CPet__SetName(uVar4);
    ppiStack_44 = &piStack_54;
    piStack_54 = (int *)((uint)piStack_54 & 0xffffff00);
    ppiStack_40 = ppiStack_44;
    FUN_100e5aa0(ppiStack_44);
    FUN_104d1670("equipName",ppiStack_44);
    if ((ppiStack_44 != &piStack_58) && (ppiStack_44 != (int **)0x0)) {
      FUN_10c3d5d0(ppiStack_44);
    }
    if (iVar6 != 0) {
      FUN_10c3da30(iVar6);
    }
    uVar4 = (**(code **)(*piVar3 + 0x14))();
    CPet__SetName(uVar4);
    ppiStack_4c = &piStack_5c;
    piStack_5c = (int *)((uint)piStack_5c & 0xffffff00);
    ppiStack_48 = ppiStack_4c;
    FUN_100e5aa0(ppiStack_4c);
    FUN_104d1670("equipName",ppiStack_4c);
    if ((ppiStack_4c != &piStack_60) && (ppiStack_4c != (int **)0x0)) {
      FUN_10c3d5d0(ppiStack_4c);
    }
    if (ppiVar5 != (int **)0x0) {
      FUN_10c3da30(ppiVar5);
    }
    cVar1 = FUN_1166e250();
    if (cVar1 == '\0') {
      uVar4 = FUN_11669730();
    }
    else {
      uVar4 = FUN_1166dc70();
    }
    FUN_104d1550("itemID",uVar4);
    uVar4 = FUN_1166c400();
    FUN_104d1550("breakLevel",uVar4);
    uVar4 = FUN_1166c160();
    FUN_104d1550("enforceLevel",uVar4);
    uVar4 = FUN_1166c190();
    FUN_104d1550("enforceruleid",uVar4);
    (**(code **)(*piVar7 + 0x3c))(unaff_EBX,local_78);
    uVar4 = FUN_11669730();
    iVar6 = FUN_1052bdd0(uVar4);
    FUN_1166c4b0();
    if ((iVar6 != 0) &&
       (piVar3 = (int *)CEquipEnforceBreak__GetManagers_116c4a30(piStack_94), piVar3 != piStack_94))
    {
      piStack_94 = (int *)(local_98 + 0x14);
      do {
        piStack_8c = (int *)FUN_11669730();
        ppiStack_40 = (int **)0x0;
        uStack_3c = 0;
        FUN_11a98de0(&ppiStack_40,local_90,0,0);
        puStack_24 = auStack_34;
        auStack_34[0] = 0;
        puStack_20 = puStack_24;
        FUN_100e5aa0(puStack_24);
        FUN_104d1670("equipName",puStack_24);
        if ((puStack_24 != auStack_38) && (puStack_24 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_24);
        }
        FUN_104d1550("itemID",unaff_EBX);
        FUN_104d1550("breakLevel",piVar3);
        (**(code **)(*piStack_9c + 0x3c))(piStack_94,&piStack_54);
        piVar7 = piVar3;
        if (((uint)piStack_58 >> 6 & 1) != 0) {
          (**(code **)(*piStack_5c + 8))(&piStack_5c,piStack_54);
        }
        piVar3 = (int *)CEquipEnforceBreak__GetManagers_116c4a30(piVar3);
      } while (piVar3 != piStack_8c);
    }
    if (((uint)piStack_54 >> 6 & 1) != 0) {
      (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50,piVar7);
    }
  }
  if ((uStack_6c >> 6 & 1) != 0) {
    (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
    piStack_70 = (int *)0x0;
  }
  uStack_6c = 0;
  if ((local_84 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 8))(&local_88,local_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_105ac060 @ 105ac060  size=15376 ===== */
// calls: _stricmp, strtol, memset, strtod, strtoul, CPet::SetName
// strings:
//   "EnterInstance"
//   "GMCommand"
//   "LevelLoading"
//   "LevelLoaded"
//   "SpawnLocalPlayer"
//   "LeaveInstanceReq"
//   "PlayerDialogueRsp"
//   "ShowSystemConfig"
//   "AddCraft"
//   "BeginCraft"
//   "BeginLoot"
//   "Resetconnected"
//   "AutoLaunch"
//   "RoleListResponse"
//   "SelectRoleResponse"
//   "GotoMap"
//   "GotoMapResponse"
//   "MoveToDest"
//   "ChangeOrient"
//   "MainInstanceEnterAgree"

/* [RE-AUTO c0]
   calls: _stricmp, strtol, memset, strtod, strtoul
   strings:
     ""EnterInstance""
     ""GMCommand""
     ""LevelLoading""
     ""LevelLoaded""
     ""SpawnLocalPlayer""
     ""LeaveInstanceReq""
     ""PlayerDialogueRsp""
     ""ShowSystemConfig""
     ""AddCraft""
     ""BeginCraft"" */

void __fastcall FUN_105ac060(int *param_1)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  double dVar8;
  undefined1 local_52d;
  undefined1 local_52c [8];
  undefined1 local_524;
  undefined1 local_523 [511];
  undefined1 local_324 [256];
  undefined1 local_224 [248];
  long local_12c;
  long local_128;
  ulong local_124;
  long local_120;
  ulong local_11c;
  long local_118;
  long local_114;
  ulong local_110;
  long local_10c;
  ulong local_108;
  ulong local_104;
  ulong local_100;
  long local_fc;
  long local_f8;
  int local_bc;
  undefined1 local_b8 [16];
  long local_a8;
  long local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  long local_9c;
  long local_94;
  long local_8c;
  long local_84;
  long local_7c;
  long local_74;
  long local_6c;
  long local_64;
  undefined1 local_5c;
  undefined1 local_5b;
  float local_3c;
  long local_38;
  long local_34;
  ulong local_30;
  long local_2c;
  long local_28;
  ulong uStack_24;
  long lStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 4))(), 1 < iVar1)) &&
     (pcVar2 = (char *)(**(code **)(*param_1 + 8))(1), pcVar2 != (char *)0x0)) {
    fVar3 = (float)_stricmp(pcVar2,"EnterInstance");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105dfdd0(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"GMCommand");
    if (iVar1 == 0) {
      local_524 = 0;
      memset(local_523,0,0x400);
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
        local_524 = lVar5 != 0;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        FUN_100ea440(local_523,uVar6);
      }
      FUN_105dfe20(&local_524);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"LevelLoading");
    if (iVar1 == 0) {
      FUN_105dfe60(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"LevelLoaded");
    if (iVar1 == 0) {
      FUN_105dfea0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SpawnLocalPlayer");
    if (iVar1 == 0) {
      FUN_105dfee0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"LeaveInstanceReq");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105dff20(&uStack_c);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"PlayerDialogueRsp");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_14 = (float)dVar8;
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_10 = (float)dVar8;
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105dff60(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"ShowSystemConfig");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = (float)((uint)uStack_c & 0xffff0000);
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_14 = (float)dVar8;
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_10 = (float)dVar8;
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c._0_2_ = CONCAT11(lVar5 != 0,(undefined1)uStack_c);
      }
      FUN_105dffa0(&fStack_14);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"AddCraft");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105dffe0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"BeginCraft");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0020(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"BeginLoot");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0060(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"Resetconnected");
    if (iVar1 == 0) {
      FUN_105e00a0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"AutoLaunch");
    if (iVar1 == 0) {
      FUN_10541070();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        FUN_105fe150(local_324,uVar6);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        FUN_105fe150(local_224,uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_124 = strtoul(pcVar2,(char **)0x0,0);
      }
      FUN_105e00f0(local_324);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"RoleListResponse");
    if (iVar1 == 0) {
      FUN_105e0130(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SelectRoleResponse");
    if (iVar1 == 0) {
      FUN_105e0170(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"GotoMap");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e01b0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"GotoMapResponse");
    if (iVar1 == 0) {
      FUN_105e01f0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MoveToDest");
    if (iVar1 == 0) {
      FUN_105e0230(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ChangeOrient");
    if (iVar1 == 0) {
      FUN_105e0270(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MainInstanceEnterAgree");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e02b0(&local_18);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MainInstanceSynOpt");
    if (iVar1 == 0) {
      FUN_10541130();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_1c = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e02f0(&fStack_1c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MainInstanceEnter");
    if (iVar1 == 0) {
      FUN_10541160();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_1c = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0330(&fStack_1c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"FadingInStartNotify");
    if (iVar1 == 0) {
      FUN_105e0370(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"InstanceClearingStart");
    if (iVar1 == 0) {
      FUN_105e03b0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"InstanceClearingFinish");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e03f0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"WebPageDownloadNotify");
    if (iVar1 == 0) {
      local_28 = 0;
      uStack_24 = 0;
      lStack_20 = 0;
      fStack_1c = 0.0;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        FUN_105fe360(&local_28,uVar6);
      }
      FUN_105e0440(&local_28);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"KeyMapInputNotify");
    if (iVar1 == 0) {
      local_28 = 0;
      uStack_24 = 0;
      lStack_20 = 0;
      fStack_1c = 0.0;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        FUN_105fe360(&local_28,uVar6);
      }
      FUN_105e0480(&local_28);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NewCreateRoleRsp");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e04c0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NewRoleListRsp");
    if (iVar1 == 0) {
      FUN_105e0500(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NewDeleteRoleRsp");
    if (iVar1 == 0) {
      FUN_105e0540(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NewSelecteRoleRsp");
    if (iVar1 == 0) {
      FUN_105e0580(&local_52d);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"FangchengmiTimeNotify");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e05c0(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"ChangeBullet");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0600(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"GameStageChanged");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0640(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ChangeCharacterAvatar");
    if (iVar1 == 0) {
      FUN_10541260();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_38 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_34 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_30 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_2c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_28 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        uStack_24 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lStack_20 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_1c = (float)strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0680(&local_38);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SelectCharacter");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e06c0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"DeleteRole");
    if (iVar1 == 0) {
      FUN_105e0700(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"CreateRole");
    if (iVar1 == 0) {
      FUN_105e0740(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ResponeLineInfoRefresh");
    if (iVar1 == 0) {
      FUN_105e0780(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"RoleShow");
    if (iVar1 == 0) {
      local_52d = 0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e07c0(&local_52d);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"GuideStepStart");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0800(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"GuideStepStop");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0840(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"UIGuideStepComplete");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_1050d530(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ShowOrHideDialogIcon");
    if (iVar1 == 0) {
      FUN_104d7d70();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
        fStack_1c = (float)CONCAT31(fStack_1c._1_3_,lVar5 != 0);
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
      }
      FUN_104ef2b0(&fStack_1c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SplashMovieEsc");
    if (iVar1 == 0) {
      FUN_105e0880(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"RequestSelectLine");
    if (iVar1 == 0) {
      FUN_105e08c0(&local_52d);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"RequestEntrustList");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0900(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"AcceptEntrustTask");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0940(&local_18);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"GiveUpEntrustTask");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0980(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"EntrustSelHuntBox");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e09c0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"RequestAllEntrustList");
    if (iVar1 == 0) {
      FUN_105e0a00(&local_52d);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"MinimapRegionState");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0a40(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MinimapLinkState");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0a80(&local_18);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"MinimapPointState");
    if (iVar1 == 0) {
      FUN_105413e0();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_1c = (float)dVar8;
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        dVar8 = strtod(pcVar2,(char **)0x0);
        local_18 = (float)dVar8;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        dVar8 = strtod(pcVar2,(char **)0x0);
        fStack_14 = (float)dVar8;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
      }
      FUN_105e0ac0(&fStack_1c);
      FUN_11a89daa();
      return;
    }
    uVar7 = _stricmp(pcVar2,"RequestPaidBox");
    if (uVar7 == 0) {
      uStack_c = (float)uVar7;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtoul(pcVar2,(char **)0x0,0);
      }
      FUN_105e0b00(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"TutorialStart");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0b40(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"TutorialActionExecuted");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0b80(&uStack_c);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"UIWidgetShow");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = (float)((uint)uStack_c & 0xffffff00);
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
      }
      FUN_105e0bc0(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"UIWidgetHide");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = (float)((uint)uStack_c & 0xffffff00);
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
      }
      FUN_105e0c00(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"AirShipState");
    if (fVar3 == 0.0) {
      local_3c = fVar3;
      memset(&local_bc,0,0x80);
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        FUN_104ef1c0(&local_bc,uVar6);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        dVar8 = strtod(pcVar2,(char **)0x0);
        local_3c = (float)dVar8;
      }
      FUN_105e0c50(&local_bc);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"PVPSelHuntBox");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0c90(&uStack_c);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"PetShopAvatarView");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0cd0(&fStack_10);
      FUN_11a89daa();
      return;
    }
    local_bc = _stricmp(pcVar2,"TrackViewEvent");
    if (local_bc == 0) {
      memset(local_b8,0,0x80);
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_bc = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        FUN_104ef1c0(local_b8,uVar6);
      }
      FUN_105e0d10(&local_bc);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ChangeCharacterAvatarWithGreatFace");
    if (iVar1 == 0) {
      FUN_105414d0();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_120 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_11c = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_118 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_114 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_110 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_10c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_108 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_104 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_100 = strtoul(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_fc = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_f8 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        (**(code **)(*param_1 + 8))(iVar4);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_3c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0d60(&local_120);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"PvpOpenReadyPlayerInfoUI");
    if (iVar1 == 0) {
      FUN_105e0da0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"TempPvpLineupReq");
    if (iVar1 == 0) {
      FUN_105e0de0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"TempPvpQuitLineReq");
    if (iVar1 == 0) {
      FUN_105e0e20(&local_52d);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"WeaponTalentSkillActivated");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = -NAN;
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0e60(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"WeaponTalentSkillUnactivated");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = -NAN;
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0ea0(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"WeaponTalentSkillUpgraded");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      fStack_14 = fVar3;
      fStack_10 = fVar3;
      uStack_c = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0ee0(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fVar3 = (float)_stricmp(pcVar2,"WeaponTalentSkillSlotUnlock");
    if (fVar3 == 0.0) {
      iVar1 = 2;
      uStack_c = -NAN;
      fStack_10 = fVar3;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0f20(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"FarmAdvGatherCutSceneEnd");
    if (iVar1 == 0) {
      FUN_105e0f60(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OpenWeaponTutorialVideo");
    if (iVar1 == 0) {
      FUN_105415f0();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        FUN_100ea440(local_52c,uVar6);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_12c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_128 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_124 = strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e0fa0(local_52c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"CloseWeaponTutorialVideo");
    if (iVar1 == 0) {
      FUN_105e0fe0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OpenWeaponTutorialClear");
    if (iVar1 == 0) {
      local_52d = 0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e1020(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"CloseWeaponTutorialClear");
    if (iVar1 == 0) {
      FUN_105e1060(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OpenCommonFunctionalList");
    if (iVar1 == 0) {
      FUN_10541660();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
        local_a8 = CONCAT31(local_a8._1_3_,lVar5 != 0);
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_a4 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_a0 = lVar5 != 0;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_9f = lVar5 != 0;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_9c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_94 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_8c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_84 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_7c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_74 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_6c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_64 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_5c = lVar5 != 0;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_5b = lVar5 != 0;
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        (**(code **)(*param_1 + 8))(iVar4);
      }
      FUN_105e10b0(&local_a8);
      FUN_105afc70();
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"CloseCommonFunctionalList");
    if (iVar1 == 0) {
      FUN_105e10f0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"StartCommonFunctionByID");
    if (iVar1 == 0) {
      uStack_c = (float)iVar1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1130(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NotifyFGTutorialVideoClosed");
    if (iVar1 == 0) {
      FUN_105e1170(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"RequestOpenEquipShow");
    if (iVar1 == 0) {
      FUN_10541790();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_1c = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        uStack_c = (float)CONCAT31(uStack_c._1_3_,lVar5 != 0);
      }
      FUN_105e11b0(&fStack_1c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ShowEquipShowItemByEvent");
    if (iVar1 == 0) {
      FUN_1052b660();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lStack_20 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_1c = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_1053bba0(&lStack_20);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"FGNotifyUIShow_HideMouse");
    if (iVar1 == 0) {
      local_52d = 0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e11f0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"NotifyFGWidgetUnloaded");
    if (iVar1 == 0) {
      uStack_c = -NAN;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1230(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ActivityRequestSimpleData");
    if (iVar1 == 0) {
      FUN_105e1270(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"ActivityRequestDetailInfo");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e12b0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"MarqueenAddressUpdate");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        CPet__SetName(uVar6);
      }
      FUN_105e12f0(&uStack_c);
      FUN_105afd30();
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ActivityRequestUniqueID");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1330(&local_18);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnResponseActivityResponseSimpleData");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar1);
        CPet__SetName(uVar6);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1370(&local_18);
      FUN_105afd50();
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnResponseActivityResponseDetailInfo");
    if (iVar1 == 0) {
      FUN_10541850();
      iVar4 = 2;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_a8 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = 3;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_a4 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_9c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_94 = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(iVar4);
        CPet__SetName(uVar6);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar4);
        local_8c = strtol(pcVar2,(char **)0x0,0);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        (**(code **)(*param_1 + 8))(iVar4);
        iVar4 = iVar4 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 4))();
      if (iVar4 < iVar1) {
        (**(code **)(*param_1 + 8))(iVar4);
      }
      FUN_105e13c0(&local_a8);
      FUN_105afd70();
      FUN_11a89daa();
      return;
    }
    fStack_14 = (float)_stricmp(pcVar2,"OnResponseActivityResponseAcceptTask");
    if (fStack_14 == 0.0) {
      iVar1 = 2;
      fStack_10 = fStack_14;
      uStack_c = fStack_14;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1400(&fStack_14);
      FUN_11a89daa();
      return;
    }
    fStack_14 = (float)_stricmp(pcVar2,"OnResponseActivityResponsePickupItem");
    if (fStack_14 == 0.0) {
      iVar1 = 2;
      fStack_10 = fStack_14;
      uStack_c = fStack_14;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1440(&fStack_14);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnRoundSwfDownloadFinished");
    if (iVar1 == 0) {
      FUN_105e1480(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"OnChangeTownInstance");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        uVar6 = (**(code **)(*param_1 + 8))(2);
        CPet__SetName(uVar6);
      }
      FUN_105e14c0(&uStack_c);
      FUN_105afdc0();
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OperationActivitySimpleDataReady");
    if (iVar1 == 0) {
      FUN_105e1500(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"OperationActivityDataExecRsp");
    if (uStack_c == 0.0) {
      iVar1 = 2;
      fStack_10 = uStack_c;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1540(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OpenChargeInternalUrl");
    if (iVar1 == 0) {
      FUN_105e1580(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"S2CUpdateOperationActData");
    if (iVar1 == 0) {
      FUN_105e15c0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"S2CUpdateOperationItemCountsRefresh");
    if (iVar1 == 0) {
      FUN_105e1600(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"S2CUpdateOperationItemCountsRefreshData");
    if (iVar1 == 0) {
      iVar1 = 2;
      local_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      uStack_c = 0.0;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        local_18 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1640(&local_18);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"WeaponUnlockViewEnableSkillVideo");
    if (iVar1 == 0) {
      local_52d = 0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e1680(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"WeaponUnlockPrework");
    if (iVar1 == 0) {
      FUN_105e16c0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OperationActivityHasNewData");
    if (iVar1 == 0) {
      FUN_105e1700(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ExitWindowDelay");
    if (iVar1 == 0) {
      local_52d = 1;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e1740(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"InstanceSelectQuickMatch");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1780(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"InstanceSelectHubEnterLevel");
    if (uStack_c == 0.0) {
      iVar1 = 2;
      fStack_10 = uStack_c;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e17c0(&fStack_10);
      FUN_11a89daa();
      return;
    }
    fStack_14 = (float)_stricmp(pcVar2,"InstanceCaptainSelectLevel");
    if (fStack_14 == 0.0) {
      iVar1 = 2;
      fStack_10 = (float)((uint)fStack_10 & 0xffffff00);
      uStack_c = fStack_14;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_14 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        fStack_10 = (float)CONCAT31(fStack_10._1_3_,lVar5 != 0);
        iVar1 = iVar1 + 1;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1800(&fStack_14);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"InstanceSelect_UnlockEliteLevelID");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1840(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"LevelUnlockNotify");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1880(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"SelectTutorialWeapon");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e18c0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"WeaponTutorialStepUpdated");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1900(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"WeaponTutorialClearAllShortcut");
    if (iVar1 == 0) {
      FUN_105e1940(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"UpdateShortcutItem");
    if (uStack_c == 0.0) {
      iVar1 = 2;
      fStack_10 = -NAN;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1980(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"WeaponTutorialUpdateUIWeaponType");
    if (iVar1 == 0) {
      uStack_c = -NAN;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e19c0(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SetTeachUIClickMode");
    if (iVar1 == 0) {
      local_52d = 0;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        local_52d = lVar5 != 0;
      }
      FUN_105e1a00(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"TeachUIClickedEvent");
    if (iVar1 == 0) {
      uStack_c = -NAN;
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1a40(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"LobbyChanged");
    if (iVar1 == 0) {
      iVar1 = 2;
      fStack_10 = -NAN;
      uStack_c = -NAN;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1a80(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"VipLevelNotify");
    if (iVar1 == 0) {
      FUN_105e1ac0(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"UIWidgetMinimize");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1b00(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"UIWidgetMaximize");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1b40(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"BeginChangeFace");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1b80(&uStack_c);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"EndChangeFace");
    if (iVar1 == 0) {
      FUN_105e1bc0(&local_52d);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"ChangeFaceResponse");
    if (uStack_c == 0.0) {
      iVar1 = (**(code **)(*param_1 + 4))();
      if (2 < iVar1) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1c00(&uStack_c);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"PlayerBeautyAcountInfoNotify");
    if (uStack_c == 0.0) {
      iVar1 = 2;
      fStack_10 = uStack_c;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        fStack_10 = (float)strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1c40(&fStack_10);
      FUN_11a89daa();
      return;
    }
    uStack_c = (float)_stricmp(pcVar2,"MvMPetMonsterDeadNotify");
    if (uStack_c == 0.0) {
      fStack_10._0_1_ = 0;
      iVar1 = 2;
      iVar4 = (**(code **)(*param_1 + 4))();
      if (2 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(2);
        lVar5 = strtol(pcVar2,(char **)0x0,0);
        iVar1 = 3;
        fStack_10._0_1_ = lVar5 != 0;
      }
      iVar4 = (**(code **)(*param_1 + 4))();
      if (iVar1 < iVar4) {
        pcVar2 = (char *)(**(code **)(*param_1 + 8))(iVar1);
        uStack_c = (float)strtol(pcVar2,(char **)0x0,0);
      }
      FUN_105e1c80(&fStack_10);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ReturnTownNotify");
    if (iVar1 == 0) {
      FUN_105e1cc0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"ReturnChooseRoleNotify");
    if (iVar1 == 0) {
      FUN_105e1d00(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"SaveNetworkSequenceNotify");
    if (iVar1 == 0) {
      FUN_105e1d40(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnLeaveCamp");
    if (iVar1 == 0) {
      FUN_105e1d80(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnLeaveJumpArea");
    if (iVar1 == 0) {
      FUN_105e1dc0(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnLeaveFarm");
    if (iVar1 == 0) {
      FUN_105e1e00(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnEnterFarm");
    if (iVar1 == 0) {
      FUN_105e1e40(&local_52d);
      FUN_11a89daa();
      return;
    }
    iVar1 = _stricmp(pcVar2,"OnEnterCamp");
    if (iVar1 == 0) {
      FUN_105e1e80(&local_52d);
    }
  }
  FUN_11a89daa();
  return;
}



