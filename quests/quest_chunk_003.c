/* ===== FUN_1095c390 @ 1095c390  size=538 ===== */
// strings:
//   "GetTreasuresBoxData"
//   "GetTreasuresShopData"
//   "GetEntrustMoney"
//   "GetMedalTreasuresData"
//   "RequestGetAllTreasures"
//   "RequestTreasuresExchange"
//   "RequestGetMedalTreasures"

/* [RE-AUTO c0]
   strings:
     ""GetTreasuresBoxData""
     ""GetTreasuresShopData""
     ""GetEntrustMoney""
     ""GetMedalTreasuresData""
     ""RequestGetAllTreasures""
     ""RequestTreasuresExchange""
     ""RequestGetMedalTreasures"" */

void FUN_1095c390(void)

{
  code *pcStack_94;
  char *pcStack_90;
  code **ppcStack_8c;
  code ***pppcStack_88;
  code *pcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code **ppcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
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
  pppcStack_30 = (code ***)0x11ddd220;
  pppcStack_34 = (code ***)0x1095c3c4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_1095c5c0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x1095c3d5;
  FUN_1095d720();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x1095c3eb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddd248;
  pppuStack_40 = (undefined4 ***)0x11ddd234;
  pppuStack_44 = (undefined4 ***)0x1095c40b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_1095c8d0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1095c41c;
  FUN_1095d720();
  if (((undefined4 ****)pppcStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppcStack_30 != (undefined4 ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1095c432;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppuStack_44;
  pppcStack_4c = (code ***)0x11ddd2a7;
  pppcStack_50 = (code ***)0x11ddd298;
  pppcStack_54 = (code ***)0x1095c452;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_1095cc50;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppuStack_5c = (undefined4 ***)0x1095c463;
  FUN_1095d720();
  if (((code ****)pppuStack_40 != &pppcStack_54) && ((code ****)pppuStack_40 != (code ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x1095c479;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppcStack_54;
  pppuStack_5c = (undefined4 ***)0x11ddd2bd;
  pppcStack_60 = (code ***)0x11ddd2a8;
  pppcStack_64 = (code ***)0x1095c499;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&LAB_1095d020;
  pppcStack_68 = (code ***)&pppuStack_5c;
  pppcStack_6c = (code ***)0x1095c4aa;
  FUN_1095d720();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x1095c4c0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11ddd27a;
  ppcStack_70 = (code **)0x11ddd264;
  ppcStack_74 = (code **)0x1095c4e0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  ppcStack_74 = (code **)FUN_1095cd20;
  pppuStack_78 = &pppcStack_6c;
  pppcStack_7c = (code ***)0x1095c4f1;
  FUN_1095d660();
  if ((pppcStack_60 != &ppcStack_74) && (pppcStack_60 != (code ***)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x1095c507;
    FUN_10c3d5d0();
  }
  pppcStack_64 = &ppcStack_74;
  pppcStack_7c = (code ***)0x11ddd294;
  ppcStack_80 = (code **)0x11ddd27c;
  pcStack_84 = (code *)0x1095c527;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_1095cde0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  ppcStack_8c = (code **)0x1095c538;
  FUN_1095d660();
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    ppcStack_8c = ppcStack_70;
    pcStack_90 = (char *)0x1095c54e;
    FUN_10c3d5d0();
  }
  ppcStack_74 = &pcStack_84;
  ppcStack_8c = (code **)0x11ddd3a4;
  pcStack_90 = "RequestGetMedalTreasures";
  pcStack_94 = (code *)0x1095c56e;
  ppcStack_70 = ppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_1095d530;
  FUN_1095d660(&ppcStack_8c);
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1095cc50 @ 1095cc50  size=207 ===== */
// strings:
//   "nEntrustMoney1Num"
//   "nEntrustMoney2Num"

/* [RE-AUTO c0]
   strings:
     ""nEntrustMoney1Num""
     ""nEntrustMoney2Num"" */

void FUN_1095cc50(void)

{
  int iVar1;
  undefined4 uVar2;
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
  iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (iVar1 != 0) {
    uVar2 = FUN_1025b060();
    FUN_104d1550("nEntrustMoney1Num",uVar2);
    uVar2 = FUN_1025b060();
    FUN_104d1550("nEntrustMoney2Num",uVar2);
  }
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10985230 @ 10985230  size=964 ===== */
// strings:
//   "GetPvpBattleListData"
//   "GetSelEntrustDetailData"
//   "GetLevelInstanceGoData"
//   "GetHunterBoxData"
//   "GetAvalidActionPoint"
//   "AcceptPvpBattleTask"
//   "SelHuntPacket"
//   "PvpBattleReady"
//   "RequestPvpBattleList"
//   "GiveUpPvpBattleTask"
//   "ReqOpenPvpBattleGoView"
//   "ReqPvpBattleTrackData"
//   "ReqOpenPvpBattleInfoByTrack"

/* [RE-AUTO c0]
   strings:
     ""GetPvpBattleListData""
     ""GetSelEntrustDetailData""
     ""GetLevelInstanceGoData""
     ""GetHunterBoxData""
     ""GetAvalidActionPoint""
     ""AcceptPvpBattleTask""
     ""SelHuntPacket""
     ""PvpBattleReady""
     ""RequestPvpBattleList""
     ""GiveUpPvpBattleTask"" */

void FUN_10985230(void)

{
  code *pcStack_f4;
  char *pcStack_f0;
  code **ppcStack_ec;
  code ***pppcStack_e8;
  code *pcStack_e4;
  code **ppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  code **ppcStack_d4;
  code **ppcStack_d0;
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
  pppcStack_30 = (code ***)0x11ddf700;
  pppcStack_34 = (code ***)0x10985264;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_10985850;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10985275;
  FUN_10987d10();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1098528b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddf6ff;
  pppcStack_40 = (code ***)0x11ddf6e8;
  pppcStack_44 = (code ***)0x109852ab;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)LevelEntrustDetailVO__BuildByGroup;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109852bc;
  FUN_10987d10();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109852d2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd794a;
  pppcStack_50 = (code ***)0x11dd7934;
  pppcStack_54 = (code ***)0x109852f2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10987380;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10985303;
  FUN_10987d10();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10985319;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd7930;
  pppcStack_60 = (code ***)0x11dd7920;
  pppcStack_64 = (code ***)0x10985339;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_10986db0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1098534a;
  FUN_10987d10();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10985360;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11dd7978;
  pppcStack_70 = (code ***)0x11dd7964;
  pppcStack_74 = (code ***)0x10985380;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10986d30;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10985391;
  FUN_10987d10();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109853a7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11ddf81f;
  pppcStack_80 = (code ***)0x11ddf80c;
  pppcStack_84 = (code ***)0x109853c7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10985650;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109853d8;
  FUN_10987c50();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppuStack_90 = (undefined4 ***)0x109853ee;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dd7aad;
  pppuStack_90 = (undefined4 ***)0x11dd7aa0;
  pppuStack_94 = (undefined4 ***)0x1098540e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppuStack_94 = (undefined4 ***)FUN_10985790;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1098541f;
  FUN_10987c50();
  if (((undefined4 ****)pppcStack_80 != &pppuStack_94) &&
     ((undefined4 ****)pppcStack_80 != (undefined4 ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x10985435;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppuStack_94;
  pppcStack_9c = (code ***)0x11ddf80a;
  pppcStack_a0 = (code ***)0x11ddf7fc;
  pppcStack_a4 = (code ***)0x10985455;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_109857e0;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppuStack_ac = (undefined4 ***)0x10985466;
  FUN_10987c50();
  if (((code ****)pppuStack_90 != &pppcStack_a4) && ((code ****)pppuStack_90 != (code ****)0x0)) {
    pppuStack_ac = pppuStack_90;
    pppcStack_b0 = (code ***)0x1098547c;
    FUN_10c3d5d0();
  }
  pppuStack_94 = &pppcStack_a4;
  pppuStack_ac = (undefined4 ***)0x11ddf7f8;
  pppcStack_b0 = (code ***)0x11ddf7e4;
  pppcStack_b4 = (code ***)0x1098549c;
  pppuStack_90 = pppuStack_94;
  FUN_100b62c0();
  pppcStack_b4 = (code ***)&LAB_10985610;
  pppcStack_b8 = (code ***)&pppuStack_ac;
  pppcStack_bc = (code ***)0x109854ad;
  FUN_10987c50();
  if (((code ****)pppcStack_a0 != &pppcStack_b4) && ((code ****)pppcStack_a0 != (code ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppcStack_c0 = (code ***)0x109854c3;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppcStack_b4;
  pppcStack_bc = (code ***)0x11ddf7e3;
  pppcStack_c0 = (code ***)0x11ddf7d0;
  pppcStack_c4 = (code ***)0x109854e3;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppcStack_c4 = (code ***)FUN_109856b0;
  pppuStack_c8 = &pppcStack_bc;
  pppcStack_cc = (code ***)0x109854f4;
  FUN_10987c50();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    ppcStack_d0 = (code **)0x1098550a;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11ddf87e;
  ppcStack_d0 = (code **)0x11ddf868;
  ppcStack_d4 = (code **)0x1098552a;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  ppcStack_d4 = (code **)FUN_10985700;
  pppcStack_d8 = (code ***)&pppcStack_cc;
  pppcStack_dc = (code ***)0x1098553b;
  FUN_10987c50();
  if ((pppcStack_c0 != &ppcStack_d4) && (pppcStack_c0 != (code ***)0x0)) {
    pppcStack_dc = pppcStack_c0;
    ppcStack_e0 = (code **)0x10985551;
    FUN_10c3d5d0();
  }
  pppcStack_c4 = &ppcStack_d4;
  pppcStack_dc = (code ***)0x11ddf865;
  ppcStack_e0 = (code **)0x11ddf850;
  pcStack_e4 = (code *)0x10985571;
  pppcStack_c0 = pppcStack_c4;
  FUN_100b62c0();
  pcStack_e4 = FUN_10987760;
  pppcStack_e8 = (code ***)&pppcStack_dc;
  ppcStack_ec = (code **)0x10985582;
  FUN_10987c50();
  if ((ppcStack_d0 != &pcStack_e4) && (ppcStack_d0 != (code **)0x0)) {
    ppcStack_ec = ppcStack_d0;
    pcStack_f0 = (char *)0x10985598;
    FUN_10c3d5d0();
  }
  ppcStack_d4 = &pcStack_e4;
  ppcStack_ec = (code **)0x11ddf84f;
  pcStack_f0 = "ReqOpenPvpBattleInfoByTrack";
  pcStack_f4 = (code *)0x109855b8;
  ppcStack_d0 = ppcStack_d4;
  FUN_100b62c0();
  pcStack_f4 = FUN_10987b10;
  FUN_10987c50(&ppcStack_ec);
  if ((ppcStack_e0 != &pcStack_f4) && (ppcStack_e0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_e0);
  }
  FUN_11a89daa();
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



/* ===== FUN_10987380 @ 10987380  size=938 ===== */
// strings:
//   "LEVELENTRUST_MEMBERVO_CLASSNAME"
//   "starLevel"
//   "weapon"
//   "state"
//   "selHuntPacket"
//   "bIsLeader"
//   "remainWarning"
//   "teammemberInfoArr"

/* [RE-AUTO c0]
   strings:
     ""LEVELENTRUST_MEMBERVO_CLASSNAME""
     ""starLevel""
     ""weapon""
     ""state""
     ""selHuntPacket""
     ""bIsLeader""
     ""remainWarning""
     ""teammemberInfoArr"" */

void FUN_10987380(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  undefined4 *****in_stack_00000010;
  int in_stack_00000014;
  char *pcStack_b8;
  uint uStack_b4;
  undefined4 *puStack_b0;
  undefined4 ****ppppuStack_ac;
  char *pcStack_a8;
  int *piStack_a4;
  undefined4 ****ppppuStack_a0;
  undefined4 ****ppppuStack_9c;
  undefined1 auStack_8c [4];
  char acStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 ***pppuStack_70;
  uint uStack_6c;
  undefined4 ****ppppuStack_68;
  undefined4 *puStack_64;
  int iStack_5c;
  undefined4 ***pppuStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ****ppppuStack_50;
  undefined1 auStack_4c [8];
  int *piStack_44;
  undefined4 ****ppppuStack_40;
  undefined4 ****ppppuStack_3c;
  undefined4 ****ppppuStack_38;
  int iStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_8c;
  if (((in_stack_00000014 == 1) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    ppppuStack_9c = (undefined4 ****)0x109873d6;
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    ppppuStack_9c = (undefined4 *****)0x109873dd;
    iStack_28 = FUN_107cb5c0();
    if ((iVar3 != 0) && (iStack_28 != 0)) {
      ppppuStack_9c = (undefined4 ****)0x109873f8;
      iVar3 = FUN_112e5470();
      ppppuStack_9c = in_stack_00000010;
      ppppuStack_a0 = (undefined4 ****)0x10987404;
      FUN_104f4330();
      piStack_a4 = &iStack_5c;
      iStack_5c = 0;
      pppuStack_58 = (undefined4 ****)0x0;
      ppppuStack_a0 =
           (undefined4 ****)
           CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)ppppuStack_40 & 0x8f) == 10);
      pcStack_a8 = "LEVELENTRUST_MEMBERVO_CLASSNAME";
      ppppuStack_ac = ppppuStack_3c;
      puStack_b0 = (undefined4 *)0x10987445;
      cVar2 = (**(code **)(*piStack_44 + 0x10))();
      puVar5 = (undefined4 *)0x0;
      if ((cVar2 != '\0') &&
         ((((byte)ppppuStack_68 & 0x8f) == 6 &&
          (puVar5 = puStack_64, ((uint)ppppuStack_68 >> 6 & 1) != 0)))) {
        puVar5 = (undefined4 *)*puStack_64;
      }
      puStack_b0 = &uStack_84;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_b4 = 0x10987488;
      FUN_11a98a70();
      if (iVar3 != 0) {
        uStack_b4 = 0x10987497;
        piStack_a4 = (int *)FUN_112ea0c0();
        iVar3 = *piStack_a4;
        if (iVar3 != piStack_a4[1]) {
          do {
            uStack_b4 = 0;
            pcStack_b8 = (char *)0x0;
            ppppuStack_a0 = (undefined4 *****)0x0;
            ppppuStack_9c = (undefined4 *****)0x0;
            FUN_11a98de0(&ppppuStack_a0,puVar5);
            uVar4 = FUN_112e9990();
            FUN_104d1440(&DAT_11dbb0b4,uVar4);
            FUN_112e9980();
            ppppuStack_3c = (undefined4 ****)auStack_4c;
            auStack_4c[0] = 0;
            ppppuStack_38 = ppppuStack_3c;
            FUN_100e5aa0(ppppuStack_3c);
            FUN_104d1670(&DAT_11dbac80,ppppuStack_3c);
            if (((undefined4 *****)ppppuStack_3c != &ppppuStack_50) &&
               ((undefined4 *****)ppppuStack_3c != (undefined4 *****)0x0)) {
              FUN_10c3d5d0(ppppuStack_3c);
            }
            FUN_112e99b0();
            ppppuStack_40 = &ppppuStack_50;
            ppppuStack_50 = (undefined4 ****)((uint)ppppuStack_50 & 0xffffff00);
            ppppuStack_3c = ppppuStack_40;
            FUN_100e5aa0(ppppuStack_40);
            FUN_104d1670("starLevel",ppppuStack_40);
            if ((ppppuStack_40 != &pppuStack_54) &&
               ((undefined4 *****)ppppuStack_40 != (undefined4 *****)0x0)) {
              FUN_10c3d5d0(ppppuStack_40);
            }
            uVar4 = FUN_112e9970();
            FUN_104d1550(&DAT_11dccf88,uVar4);
            uVar4 = FUN_112e99d0();
            FUN_104d1550("weapon",uVar4);
            uVar4 = FUN_112e9950();
            FUN_104d1550(&DAT_11dd7eac,uVar4);
            FUN_104d15e0("state",0);
            FUN_104d1550("selHuntPacket",0xffffffff);
            FUN_104d15e0("bIsLeader",0);
            (*(code *)(*ppppuStack_a0)[0xf])(unaff_EDI,&pcStack_b8);
            FUN_104d7c10();
            iVar3 = iVar3 + 0x2c;
          } while (iVar3 != piStack_a4[1]);
        }
      }
      uStack_b4 = 0x10987658;
      (*(code *)(*ppppuStack_40)[0xe4])();
      uStack_b4 = 0x1098765f;
      uStack_b4 = FUN_115768f0();
      pcStack_b8 = "remainWarning";
      FUN_104d1550();
      uStack_b4 = (uint)(((byte)pppuStack_54 & 0x8f) == 10);
      pcStack_b8 = acStack_88;
      (*(code *)(*pppuStack_58)[5])(ppppuStack_50,"teammemberInfoArr");
      if ((uStack_6c >> 6 & 1) != 0) {
        ppppuStack_a0 = &pppuStack_70;
        ppppuStack_9c = ppppuStack_68;
        piStack_a4 = (int *)0x109876b9;
        (*(code *)(*pppuStack_70)[2])();
        pppuStack_70 = (undefined4 ****)0x0;
      }
      uStack_6c = 0;
      if (((uint)pppuStack_54 >> 6 & 1) != 0) {
        ppppuStack_a0 = &pppuStack_58;
        ppppuStack_9c = ppppuStack_50;
        piStack_a4 = (int *)0x109876e6;
        (*(code *)(*pppuStack_58)[2])();
        pppuStack_58 = (undefined4 ****)0x0;
      }
      pppuStack_54 = (undefined4 ****)0x0;
      if (((uint)ppppuStack_3c >> 6 & 1) != 0) {
        ppppuStack_a0 = &ppppuStack_40;
        ppppuStack_9c = ppppuStack_38;
        piStack_a4 = (int *)0x10987713;
        (*(code *)(*ppppuStack_40)[2])();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109895d0 @ 109895d0  size=108 ===== */
// strings:
//   "RequestCoachLoginMatch"

/* [RE-AUTO c0]
   strings:
     ""RequestCoachLoginMatch"" */

void FUN_109895d0(void)

{
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined1 local_24 [4];
  undefined4 *puStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = local_24;
  local_10 = local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "RequestCoachLoginMatch";
  uStack_34 = 0x10989604;
  FUN_100b62c0();
  FUN_10989740(&pcStack_2c);
  if ((puStack_20 != &uStack_34) && (puStack_20 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puStack_20);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10991240 @ 10991240  size=268 ===== */
// strings:
//   "_openEquipShow"
//   "_requestEquipColorList"
//   "_requestEquipItemColor"
//   "_checkEquipItemColor"
//   "_buyEquipItemColor"
//   "_getItemCount"
//   "_getMoneyCount"
//   "_getItemMartID"

/* [RE-AUTO c0]
   strings:
     ""_openEquipShow""
     ""_requestEquipColorList""
     ""_requestEquipItemColor""
     ""_checkEquipItemColor""
     ""_buyEquipItemColor""
     ""_getItemCount""
     ""_getMoneyCount""
     ""_getItemMartID"" */

void FUN_10991240(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) &&
     (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("_openEquipShow",FUN_10991360);
    FUN_104d13b0("_requestEquipColorList",FUN_109913f0);
    FUN_104d13b0("_requestEquipItemColor",FUN_10991810);
    FUN_104d13b0("_checkEquipItemColor",FUN_10991980);
    FUN_104d13b0("_buyEquipItemColor",FUN_10991b20);
    FUN_104d13b0("_getItemCount",FUN_10991bd0);
    FUN_104d13b0("_getMoneyCount",FUN_10991c90);
    FUN_104d13b0("_getItemMartID",FUN_10991db0);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_109aa610 @ 109aa610  size=270 ===== */
// strings:
//   "questionTitle"

/* [RE-AUTO c0]
   strings:
     ""questionTitle"" */

void FUN_109aa610(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_stack_00000010;
  int in_stack_00000014;
  int *local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_24 [20];
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_40;
  if (in_stack_00000014 == 2) {
    FUN_104f4330(in_stack_00000010);
    uVar2 = *(uint *)(in_stack_00000010 + 0x1c) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      uVar4 = *(undefined4 *)(in_stack_00000010 + 0x20);
    }
    else {
      uVar4 = 0xdeadbeaf;
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 0xb4))();
      if (iVar3 != 0) {
        iVar3 = FUN_109a8650(uVar4);
        if (iVar3 != 0) {
          iVar3 = FUN_100e5b40(auStack_24);
          FUN_104d1670("questionTitle",*(undefined4 *)(iVar3 + 0x14));
          if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_10);
          }
        }
        FUN_104d7c10();
        FUN_11a89daa();
        return;
      }
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      (**(code **)(*local_40 + 8))(&local_40,uStack_38);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109b4ca0 @ 109b4ca0  size=751 ===== */
// strings:
//   "InitModel"
//   "requestPutItemIn"
//   "requestEquipRecastInfo"
//   "requrestAttributeData"
//   "requestEquipRecast"
//   "setDestEquipData"
//   "requestEquipShow"
//   "canEquipRecast"
//   "Dispose"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""requestPutItemIn""
     ""requestEquipRecastInfo""
     ""requrestAttributeData""
     ""requestEquipRecast""
     ""setDestEquipData""
     ""requestEquipShow""
     ""canEquipRecast""
     ""Dispose"" */

void FUN_109b4ca0(void)

{
  code *pcStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  undefined4 ***pppuStack_b8;
  code *pcStack_b4;
  code **ppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
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
  pppcStack_34 = (code ***)0x109b4cd4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109b4fa0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109b4ce5;
  FUN_109b77f0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109b4cfb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de2344;
  pppcStack_40 = (code ***)0x11de2334;
  pppcStack_44 = (code ***)0x109b4d1b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109b4fb0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109b4d2c;
  FUN_109b77f0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109b4d42;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de22de;
  pppcStack_50 = (code ***)0x11de22c8;
  pppcStack_54 = (code ***)0x109b4d62;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)EquipRecastModel__BuildSourceInfo;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109b4d73;
  FUN_109b77f0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109b4d89;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de22f5;
  pppcStack_60 = (code ***)0x11de22e0;
  pppcStack_64 = (code ***)0x109b4da9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109b6580;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109b4dba;
  FUN_109b77f0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109b4dd0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de230a;
  pppcStack_70 = (code ***)0x11de22f8;
  pppcStack_74 = (code ***)0x109b4df0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109b6ff0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109b4e01;
  FUN_109b77f0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppuStack_80 = (undefined4 ***)0x109b4e17;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de231c;
  pppuStack_80 = (undefined4 ***)0x11de230c;
  pppuStack_84 = (undefined4 ***)0x109b4e37;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppuStack_84 = (undefined4 ***)FUN_109b56c0;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109b4e48;
  FUN_109b77f0();
  if (((undefined4 ****)pppcStack_70 != &pppuStack_84) &&
     ((undefined4 ****)pppcStack_70 != (undefined4 ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109b4e5e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppuStack_84;
  pppcStack_8c = (code ***)0x11de23a4;
  pppcStack_90 = (code ***)0x11de2394;
  pppcStack_94 = (code ***)0x109b4e7e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109b7540;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppuStack_9c = (undefined4 ***)0x109b4e8f;
  FUN_109b77f0();
  if (((code ****)pppuStack_80 != &pppcStack_94) && ((code ****)pppuStack_80 != (code ****)0x0)) {
    pppuStack_9c = pppuStack_80;
    ppcStack_a0 = (code **)0x109b4ea5;
    FUN_10c3d5d0();
  }
  pppuStack_84 = &pppcStack_94;
  pppuStack_9c = (undefined4 ***)0x11de23b6;
  ppcStack_a0 = (code **)0x11de23a8;
  ppcStack_a4 = (code **)0x109b4ec5;
  pppuStack_80 = pppuStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)&LAB_109b6bd0;
  pppcStack_a8 = (code ***)&pppuStack_9c;
  pppcStack_ac = (code ***)0x109b4ed6;
  FUN_109b77f0();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppcStack_b0 = (code **)0x109b4eec;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)&DAT_11dcc4fe;
  ppcStack_b0 = (code **)&DAT_11dcc4f8;
  pcStack_b4 = (code *)0x109b4f0c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_109b49f0;
  pppuStack_b8 = &pppcStack_ac;
  ppcStack_bc = (code **)0x109b4f1d;
  FUN_109b77f0();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x109b4f33;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11dcc4bf;
  pcStack_c0 = "Dispose";
  pcStack_c4 = (code *)0x109b4f53;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  pcStack_c4 = FUN_109b4990;
  FUN_109b77f0(&ppcStack_bc);
  if ((ppcStack_b0 != &pcStack_c4) && (ppcStack_b0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_b0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109bf940 @ 109bf940  size=538 ===== */
// strings:
//   "InitModel"
//   "requestPutItemIn"
//   "requestRemoveBindItemInfo"
//   "canItemRomoveBind"
//   "requestItemRomoveBind"
//   "Dispose"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""requestPutItemIn""
     ""requestRemoveBindItemInfo""
     ""canItemRomoveBind""
     ""requestItemRomoveBind""
     ""Dispose"" */

void FUN_109bf940(void)

{
  code *pcStack_94;
  char *pcStack_90;
  code **ppcStack_8c;
  code ***pppcStack_88;
  code *pcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code **ppcStack_74;
  code **ppcStack_70;
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
  pppcStack_34 = (code ***)0x109bf974;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109bfb70;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109bf985;
  FUN_109c0400();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109bf99b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de2344;
  pppcStack_40 = (code ***)0x11de2334;
  pppcStack_44 = (code ***)0x109bf9bb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109bfb80;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109bf9cc;
  FUN_109c0400();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109bf9e2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de2bfd;
  pppcStack_50 = (code ***)0x11de2be4;
  pppcStack_54 = (code ***)0x109bfa02;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109bfd90;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109bfa13;
  FUN_109c0400();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109bfa29;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de2be1;
  pppcStack_60 = (code ***)0x11de2bd0;
  pppcStack_64 = (code ***)0x109bfa49;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109c0220;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109bfa5a;
  FUN_109c0400();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109bfa70;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de2bcd;
  ppcStack_70 = (code **)0x11de2bb8;
  ppcStack_74 = (code **)0x109bfa90;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  ppcStack_74 = (code **)FUN_109c02a0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109bfaa1;
  FUN_109c0400();
  if ((pppcStack_60 != &ppcStack_74) && (pppcStack_60 != (code ***)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x109bfab7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = &ppcStack_74;
  pppcStack_7c = (code ***)&DAT_11dcc4fe;
  ppcStack_80 = (code **)&DAT_11dcc4f8;
  pcStack_84 = (code *)0x109bfad7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109bf690;
  pppcStack_88 = (code ***)&pppcStack_7c;
  ppcStack_8c = (code **)0x109bfae8;
  FUN_109c0400();
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    ppcStack_8c = ppcStack_70;
    pcStack_90 = (char *)0x109bfafe;
    FUN_10c3d5d0();
  }
  ppcStack_74 = &pcStack_84;
  ppcStack_8c = (code **)0x11dcc4bf;
  pcStack_90 = "Dispose";
  pcStack_94 = (code *)0x109bfb1e;
  ppcStack_70 = ppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_109bf630;
  FUN_109c0400(&ppcStack_8c);
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109da010 @ 109da010  size=647 ===== */
// calls: CPet::SetName
// strings:
//   "arrTaskData"
//   "mh.view.NewOperationActivity.Data.ActivityDetailData"
//   "EntryId"
//   "taskState"
//   "taskDesc"

/* [RE-AUTO c0]
   strings:
     ""arrTaskData""
     ""mh.view.NewOperationActivity.Data.ActivityDetailData""
     ""EntryId""
     ""taskState""
     ""taskDesc"" */

void FUN_109da010(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_84 [4];
  int iStack_80;
  int iStack_7c;
  int local_78;
  undefined4 local_74;
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int *piStack_60;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_34 [4];
  int **ppiStack_30;
  int **ppiStack_2c;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_84;
  local_74 = param_3;
  local_78 = param_4;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0)) {
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    FUN_11a98a70(&piStack_50);
    (**(code **)(*(int *)*param_2 + 0x14))
              (param_2[2],"arrTaskData",auStack_54,((byte)param_2[1] & 0x8f) == 10);
    iStack_80 = 0;
    if (*(char *)(local_78 + 0xad2) != '\0') {
      puVar5 = (undefined1 *)(local_78 + 0xaf6);
      do {
        if (puVar5[-0x22] == ' ') {
          piStack_70 = (int *)0x0;
          uStack_6c = 0;
          FUN_11a98de0(&piStack_70,"mh.view.NewOperationActivity.Data.ActivityDetailData",0,0);
          (**(code **)(*piStack_60 + 0x3c))(uStack_58,&iStack_80);
          FUN_104d1550("EntryId",puVar5[-0x23]);
          iVar3 = 0;
          piStack_70 = (int *)CONCAT31(piStack_70._1_3_,*puVar5);
          if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
             ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0 &&
              (iVar4 = (**(code **)(*piVar1 + 0xb4))(), iVar4 != 0)))) {
            iVar3 = iVar4;
          }
          if (((*(int *)(iVar3 + 0x2acc) == 0) ||
              (cVar2 = FUN_11513b40(*unaff_ESI,*(undefined1 *)((int)unaff_ESI + 5),piStack_70,
                                    &uStack_6c), cVar2 == '\0')) || (uStack_6c == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          FUN_104d1550("taskState",uVar6);
          CPet__SetName(puVar5 + -0x20);
          ppiStack_30 = &piStack_50;
          piStack_50 = (int *)((uint)piStack_50 & 0xffff0000);
          ppiStack_2c = ppiStack_30;
          FUN_100e5b60(&piStack_50);
          FUN_104d1700("taskDesc",ppiStack_30);
          if ((puStack_10 != auStack_34) && (puStack_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_10);
          }
          if (iStack_7c != 0) {
            FUN_10c3da30(iStack_7c);
          }
          if ((uStack_6c >> 6 & 1) != 0) {
            (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
          }
        }
        iStack_80 = iStack_80 + 1;
        puVar5 = puVar5 + 0x423;
      } while (iStack_80 < (int)(uint)*(byte *)(local_78 + 0xad2));
    }
    if ((uStack_4c >> 6 & 1) != 0) {
      (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
    }
  }
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



/* ===== FUN_109ed990 @ 109ed990  size=183 ===== */
// strings:
//   "InitModel"
//   "C2AS_RequestLegendPearlAttribute"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""C2AS_RequestLegendPearlAttribute"" */

void FUN_109ed990(void)

{
  code *pcStack_44;
  char *pcStack_40;
  code **ppcStack_3c;
  char **ppcStack_38;
  code *pcStack_34;
  code **ppcStack_30;
  char *pcStack_2c;
  code **local_24;
  code **ppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  ppcStack_30 = (code **)0x11dbd57c;
  pcStack_34 = (code *)0x109ed9c4;
  FUN_100b62c0();
  pcStack_34 = LegendPearlModel__RegisterHandlers;
  ppcStack_38 = &pcStack_2c;
  ppcStack_3c = (code **)0x109ed9d5;
  FUN_109f0080();
  if ((ppcStack_20 != &pcStack_34) && (ppcStack_20 != (code **)0x0)) {
    ppcStack_3c = ppcStack_20;
    pcStack_40 = (char *)0x109ed9eb;
    FUN_10c3d5d0();
  }
  local_24 = &pcStack_34;
  ppcStack_3c = (code **)0x11de534c;
  pcStack_40 = "C2AS_RequestLegendPearlAttribute";
  pcStack_44 = (code *)0x109eda0b;
  ppcStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = BuildEquipPassiveSkillDataVO_A;
  FUN_109f0080(&ppcStack_3c);
  if ((ppcStack_30 != &pcStack_44) && (ppcStack_30 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_30);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109ffdc0 @ 109ffdc0  size=325 ===== */
// strings:
//   "C2AS_GetCountDown"
//   "AS2C_RequestLuckyShop"
//   "C2AS_GetCommodityData"
//   "AS2C_RequestBuy"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetCountDown""
     ""AS2C_RequestLuckyShop""
     ""C2AS_GetCommodityData""
     ""AS2C_RequestBuy"" */

void FUN_109ffdc0(void)

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
  pppcStack_30 = (code ***)0x11de6654;
  pppcStack_34 = (code ***)0x109ffdf4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109fff20;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109ffe05;
  FUN_10a00510();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x109ffe1b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de667d;
  ppcStack_40 = (code **)0x11de6668;
  ppcStack_44 = (code **)0x109ffe3b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  ppcStack_44 = (code **)FUN_109fffd0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109ffe4c;
  FUN_10a00510();
  if ((pppcStack_30 != &ppcStack_44) && (pppcStack_30 != (code ***)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x109ffe62;
    FUN_10c3d5d0();
  }
  pppcStack_34 = &ppcStack_44;
  pppcStack_4c = (code ***)0x11de6641;
  ppcStack_50 = (code **)0x11de662c;
  pcStack_54 = (code *)0x109ffe82;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_10a00060;
  pppcStack_58 = (code ***)&pppcStack_4c;
  ppcStack_5c = (code **)0x109ffe93;
  FUN_10a00510();
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    ppcStack_5c = ppcStack_40;
    pcStack_60 = (char *)0x109ffea9;
    FUN_10c3d5d0();
  }
  ppcStack_44 = &pcStack_54;
  ppcStack_5c = (code **)0x11de6653;
  pcStack_60 = "AS2C_RequestBuy";
  pcStack_64 = (code *)0x109ffec9;
  ppcStack_40 = ppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_10a002a0;
  FUN_10a00510(&ppcStack_5c);
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_50);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10b5e6c0 @ 10b5e6c0  size=164 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "GetStaticItemData"
//   "ItemIcon_RequestItemInfo"
//   "global_getItemData"
//   "global_getEquipAdditionalInfo"

/* [RE-AUTO c0]
   strings:
     ""GetStaticItemData""
     ""ItemIcon_RequestItemInfo""
     ""global_getItemData""
     ""global_getEquipAdditionalInfo"" */

undefined4 * __fastcall FUN_10b5e6c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  
  *param_1 = &PTR_FUN_11cc7aa4;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString("GetStaticItemData",extraout_ECX,FUN_10b5dbc0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("ItemIcon_RequestItemInfo",extraout_ECX_00,FUN_10b5dcb0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("global_getItemData",extraout_ECX_01,FUN_10b5dd90);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("global_getEquipAdditionalInfo",extraout_ECX_02,FUN_10b5dec0);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10b5eed0 @ 10b5eed0  size=149 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "onSendSystemMsgByIDFromUI"
//   "requestDialogCreate"
//   "SpecialQuitGame"

/* [RE-AUTO c0]
   strings:
     ""onSendSystemMsgByIDFromUI""
     ""requestDialogCreate""
     ""SpecialQuitGame"" */

undefined4 * __fastcall FUN_10b5eed0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  *param_1 = &PTR_FUN_11cc7b14;
  uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = uVar2;
  FUN_10b5f280(param_1,FUN_10b5f000);
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("onSendSystemMsgByIDFromUI",extraout_ECX,FUN_10b5e900);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("requestDialogCreate",extraout_ECX_00,FUN_10b5ea90);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SpecialQuitGame",extraout_ECX_01,FUN_10b5ee80);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10b660a0 @ 10b660a0  size=324 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "SystemBar_PlayerPropertyUI"
//   "SystemBar_ShowQuestUI"
//   "SystemBar_ShowInventoryUI"
//   "SystemBar_ShowSysConfigUI"
//   "SystemBar_ShowT"
//   "SystemBar_ShowO"
//   "SystemBar_ShowK"
//   "SystemBar_ShowH"
//   "SystemBar_ShowM"

/* [RE-AUTO c0]
   strings:
     ""SystemBar_PlayerPropertyUI""
     ""SystemBar_ShowQuestUI""
     ""SystemBar_ShowInventoryUI""
     ""SystemBar_ShowSysConfigUI""
     ""SystemBar_ShowT""
     ""SystemBar_ShowO""
     ""SystemBar_ShowK""
     ""SystemBar_ShowH""
     ""SystemBar_ShowM"" */

undefined4 * __fastcall FUN_10b660a0(undefined4 *param_1)

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
  
  *param_1 = &PTR_FUN_11cc8130;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString("SystemBar_PlayerPropertyUI",extraout_ECX,FUN_10b66230);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowQuestUI",extraout_ECX_00,FUN_10b66270);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowInventoryUI",extraout_ECX_01,FUN_10b662b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowSysConfigUI",extraout_ECX_02,FUN_10b66430);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowT",extraout_ECX_03,FUN_10b66370);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowO",extraout_ECX_04,FUN_10b663b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowK",extraout_ECX_05,FUN_10b663f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowH",extraout_ECX_06,FUN_10b662f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowM",extraout_ECX_07,FUN_10b66330);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10bc3b80 @ 10bc3b80  size=547 ===== */
// strings:
//   "no_vehicle_exit"
//   "cutscene"
//   "cutscene_no_player"
//   "no_map_open"
//   "no_objectives_open"
//   "no_connectivity"
//   "teleport"
//   "UpView"

/* [RE-AUTO c0]
   strings:
     ""no_vehicle_exit""
     ""cutscene""
     ""cutscene_no_player""
     ""no_map_open""
     ""no_objectives_open""
     ""no_connectivity""
     ""teleport""
     ""UpView"" */

void __fastcall FUN_10bc3b80(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_10bc3db0();
  FUN_10bc3e90();
  FUN_10bc4050();
  FUN_10bc4120();
  FUN_10bc42c0();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("no_vehicle_exit",1);
  *(int **)(param_1 + 0x570) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x1e4);
  FUN_10bc4660();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("cutscene",1);
  *(int **)(param_1 + 0x578) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0xb0);
  (**(code **)(**(int **)(param_1 + 0x578) + 0xc))(param_1 + 0x2c);
  (**(code **)(**(int **)(param_1 + 0x578) + 0xc))(param_1 + 0x30);
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("cutscene_no_player",0);
  *(int **)(param_1 + 0x57c) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x334);
  (**(code **)(**(int **)(param_1 + 0x57c) + 0xc))(param_1 + 0x21c);
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  uVar2 = (**(code **)(*piVar1 + 0x54))("no_map_open",1);
  *(undefined4 *)(param_1 + 0x580) = uVar2;
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("no_objectives_open",1);
  *(int **)(param_1 + 0x584) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x39c);
  FUN_10bc4870();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("no_connectivity",0);
  *(int **)(param_1 + 0x58c) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x39c);
  FUN_10bc4960();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("teleport",1);
  *(int **)(param_1 + 0x598) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x1e4);
  (**(code **)(**(int **)(param_1 + 0x598) + 0xc))(param_1 + 0x1e8);
  FUN_10bc4aa0();
  FUN_10bc4b70();
  FUN_10bc4ca0();
  FUN_10bc4ec0();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("UpView",1);
  *(int **)(param_1 + 0x5a8) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x3a4);
  return;
}



/* ===== FUN_10bc4830 @ 10bc4830  size=57 ===== */
// strings:
//   "no_objectives_open"

/* [RE-AUTO c0]
   strings:
     ""no_objectives_open"" */

void __fastcall FUN_10bc4830(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("no_objectives_open",1);
  *(int **)(param_1 + 0x584) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0x39c);
  return;
}



/* ===== FUN_10be86b0 @ 10be86b0  size=1071 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "RequestedMoveAnim"
//   "MoveSpeedMultiplier"
//   "Steer_Enabled"

/* [RE-AUTO c0]
   strings:
     ""RequestedMoveAnim""
     ""MoveSpeedMultiplier""
     ""Steer_Enabled"" */

void __thiscall FUN_10be86b0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined8 uVar8;
  undefined1 local_268 [4];
  undefined1 local_264 [76];
  undefined1 local_218 [4];
  undefined1 local_214 [212];
  undefined4 local_140;
  int local_13c;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  char local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  char local_cc;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar1 + 0x288))();
  if (iVar3 == 0) {
    return;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x180))();
  iVar3 = param_2;
  if (cVar2 != '\0') {
    return;
  }
  if ((*(uint *)(param_2 + 0x133) & 4) == 0) {
    if ((*(uint *)(param_2 + 0x133) & 2) == 0) goto LAB_10be8a0b;
    FUN_10bebab0(param_2);
    CInfoRecord__GetModelString(local_214);
    puVar4 = (undefined8 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x94))();
    uVar8 = *puVar4;
    local_c = *(float *)(puVar4 + 1);
    local_14._0_4_ = (float)uVar8;
    local_14._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_20 = CONCAT44(local_e8 - local_14._4_4_,local_ec - (float)local_14);
    local_18 = local_e4 - local_c;
    local_14 = uVar8;
    iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
    if (local_110 == iVar5) {
      uVar7 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    }
    else {
      uVar7 = (**(code **)(**(int **)m_pThis_exref + 0x2b0))(local_110);
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x534))(uVar7);
    FUN_10de9e40(*(undefined4 *)(param_1 + 0x48),local_218);
    cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x180))();
    if ((cVar2 == '\0') && (iVar5 = FUN_109835e0(&DAT_11d9d32b), iVar5 != 0)) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x288))();
      (**(code **)(**(int **)(iVar5 + 0x14) + 0x10))(local_10c,local_108);
      fVar6 = local_18;
      uVar8 = local_20;
      if (local_cc != '\x01') {
        uVar7 = extraout_ECX_01;
        if (local_cc == '\0') {
          cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0xb8))(local_8);
          uVar7 = extraout_ECX_02;
          uVar8 = local_20;
          fVar6 = local_18;
          goto joined_r0x10be8990;
        }
        goto LAB_10be89cb;
      }
      goto LAB_10be89b3;
    }
  }
  else {
    FUN_10a6fb20();
    FUN_10a672e0(iVar3);
    CInfoRecord__GetModelString(local_264);
    puVar4 = (undefined8 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x94))();
    uVar8 = *puVar4;
    local_18 = *(float *)(puVar4 + 1);
    local_20._0_4_ = (float)uVar8;
    local_20._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_14 = CONCAT44(local_fc - local_20._4_4_,local_100 - (float)local_20);
    local_c = local_f8 - local_18;
    local_20 = uVar8;
    iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
    if (local_13c == iVar5) {
      local_140 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    }
    else {
      local_140 = (**(code **)(**(int **)m_pThis_exref + 0x2b0))(local_13c);
    }
    FUN_10de9de0(*(undefined4 *)(param_1 + 0x48),local_268,0);
    iVar5 = FUN_109835e0(&DAT_11d9d32b);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 0x288))();
      (**(code **)(**(int **)(iVar5 + 0x14) + 0x10))(local_d8,local_d4);
      fVar6 = local_c;
      local_d0 = local_e4;
      uVar8 = local_14;
      if (local_e0 == '\x01') {
LAB_10be89b3:
        (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(local_8,local_d0,uVar8,fVar6,0);
        uVar7 = extraout_ECX_03;
        iVar3 = param_2;
      }
      else {
        uVar7 = extraout_ECX;
        if (local_e0 == '\0') {
          cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0xb8))(local_8);
          uVar7 = extraout_ECX_00;
          local_d0 = local_e4;
          uVar8 = local_14;
          fVar6 = local_c;
joined_r0x10be8990:
          if (cVar2 == '\0') goto LAB_10be89b3;
        }
      }
LAB_10be89cb:
      iVar5 = **(int **)(param_1 + 0x48);
      FUN_10a4bb60(&local_8,uVar7);
      (**(code **)(iVar5 + 0xd8))();
      iVar5 = FUN_109835e0();
      if (iVar5 == 0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x334))(1);
      }
    }
  }
  FUN_104f6f60();
LAB_10be8a0b:
  iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))();
  if (iVar5 != 0) {
    uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0xc) + 4))();
    iVar5 = FUN_104753a0(uVar7);
    if ((iVar5 != 0) && (iVar5 != -0x60)) {
      FUN_113168d0(iVar3 + 0xd);
      uVar7 = FUN_113168d0("RequestedMoveAnim",&local_2c);
      FUN_1046dc90(uVar7);
      FUN_1025bc60(local_2c,&local_8);
      uVar7 = FUN_113168d0("MoveSpeedMultiplier",&local_28);
      FUN_1046dc90(uVar7);
      FUN_1025bcc0(local_28,iVar3 + 400);
      param_2 = CONCAT13(1,(undefined3)param_2);
      uVar7 = FUN_113168d0("Steer_Enabled",&local_24);
      FUN_1046dc90(uVar7);
      FUN_1025be30(local_24,(int)&param_2 + 3);
    }
  }
  return;
}



/* ===== FUN_10c01e40 @ 10c01e40  size=75 ===== */
// strings:
//   "RequestSpectatorTarget"

/* [RE-AUTO c0]
   strings:
     ""RequestSpectatorTarget"" */

void __thiscall FUN_10c01e40(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = param_2;
  cVar2 = (**(code **)(*param_2 + 0x1a4))();
  if ((cVar2 == '\x03') && (*(char *)(DAT_1202e818 + 0x16c) != '\0')) {
    param_2 = (int *)piVar1[2];
    FUN_10c0bc50(*(undefined4 *)(param_1 + 0x6c),"RequestSpectatorTarget",&param_2,&stack0x00000008)
    ;
  }
  return;
}



/* ===== FUN_10ca6410 @ 10ca6410  size=1490 ===== */
// strings:
//   "UIObjectives"
//   "ObjectiveAdded"
//   "Mission objective added"
//   "ObjectiveID"
//   "MissionID"
//   "ID of the mission"
//   "Name of the mission"
//   "Description of the mission"
//   "State"
//   "State of the objective"
//   "ObjectiveRemoved"
//   "Mission objective removed"
//   "ObjectivesReset"
//   "All mission objectives reset"
//   "ObjectiveStateChanged"
//   "Objective status changed"
//   "CUIObjectives"
//   "RequestObjectives"
//   "Request all mission objectives (force to call ObjectiveAdded for each objective)"

/* [RE-AUTO c0]
   strings:
     ""UIObjectives""
     ""ObjectiveAdded""
     ""Mission objective added""
     ""ObjectiveID""
     ""MissionID""
     ""ID of the mission""
     ""Name of the mission""
     ""Description of the mission""
     ""State""
     ""State of the objective"" */

undefined4 * __fastcall FUN_10ca6410(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *local_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined1 local_30;
  char *local_2c;
  undefined1 *local_28;
  char *local_24;
  char *pcStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_10 = param_1 + 3;
  *param_1 = &PTR_FUN_11cddd38;
  *local_10 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = local_5;
  *(undefined1 *)local_10 = 0;
  param_1[4] = 0;
  param_1[5] = local_10;
  param_1[6] = local_10;
  param_1[7] = 0;
  puVar3 = param_1 + 9;
  *puVar3 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)puVar3 = 0;
  param_1[10] = 0;
  param_1[0xb] = puVar3;
  param_1[0xc] = puVar3;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = local_5;
  local_c = param_1;
  if (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x68))("UIObjectives",1);
    param_1[1] = uVar1;
    local_44 = "ObjectiveAdded";
    local_40 = "ObjectiveAdded";
    local_3c = "Mission objective added";
    local_38 = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_30 = 0;
    local_2c = "Array";
    local_28 = &DAT_11d9d32b;
    local_24 = "ObjectiveID";
    pcStack_20 = "MissionID";
    pcStack_1c = "ID of the mission";
    uStack_18 = 0;
    local_34 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_24 = "Name";
    pcStack_20 = "Name";
    pcStack_1c = "Name of the mission";
    uStack_18 = 0;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_34 + *(int *)(local_34 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_24 = "Desc";
    pcStack_20 = "Desc";
    pcStack_1c = "Description of the mission";
    uStack_18 = 0;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_34 + *(int *)(local_34 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_24 = "State";
    pcStack_20 = "State";
    pcStack_1c = "State of the objective";
    uStack_18 = 0;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_34 + *(int *)(local_34 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    piVar4 = (int *)param_1[1];
    local_14 = 0;
    puVar3 = (undefined4 *)FUN_10ca7610(&local_14);
    uVar1 = (**(code **)(*piVar4 + 0xc))(&local_44);
    *puVar3 = uVar1;
    if (*(int *)(local_34 + -4) != 0) {
      FUN_10c3d900(local_34 + -4);
    }
    local_44 = "ObjectiveRemoved";
    local_40 = "ObjectiveRemoved";
    local_3c = "Mission objective removed";
    local_38 = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_30 = 0;
    local_2c = "Array";
    local_28 = &DAT_11d9d32b;
    local_24 = "ObjectiveID";
    pcStack_20 = "MissionID";
    pcStack_1c = "ID of the mission";
    uStack_18 = 0;
    local_34 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_14 = 1;
    piVar4 = (int *)local_c[1];
    puVar3 = (undefined4 *)FUN_10ca7610(&local_14);
    uVar1 = (**(code **)(*piVar4 + 0xc))(&local_44);
    *puVar3 = uVar1;
    if (*(int *)(local_34 + -4) != 0) {
      FUN_10c3d900(local_34 + -4);
    }
    local_44 = "ObjectivesReset";
    local_40 = "ObjectivesReset";
    local_3c = "All mission objectives reset";
    local_38 = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_30 = 0;
    local_2c = "Array";
    local_28 = &DAT_11d9d32b;
    piVar4 = (int *)local_c[1];
    local_14 = 2;
    local_34 = DAT_1202f1cc;
    puVar3 = (undefined4 *)FUN_10ca7610(&local_14);
    uVar1 = (**(code **)(*piVar4 + 0xc))(&local_44);
    *puVar3 = uVar1;
    if (*(int *)(local_34 + -4) != 0) {
      FUN_10c3d900(local_34 + -4);
    }
    local_44 = "ObjectiveStateChanged";
    local_40 = "ObjectiveStateChanged";
    local_3c = "Objective status changed";
    local_38 = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_30 = 0;
    local_2c = "Array";
    local_28 = &DAT_11d9d32b;
    local_24 = "ObjectiveID";
    pcStack_20 = "MissionID";
    pcStack_1c = "ID of the mission";
    uStack_18 = 0;
    local_34 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_24 = "State";
    pcStack_20 = "State";
    pcStack_1c = "State of the objective";
    uStack_18 = 0;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_34 + *(int *)(local_34 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_24;
        puVar2[1] = pcStack_20;
        puVar2[2] = pcStack_1c;
        puVar2[3] = uStack_18;
      }
    }
    local_14 = 3;
    piVar4 = (int *)local_c[1];
    puVar3 = (undefined4 *)FUN_10ca7610(&local_14);
    uVar1 = (**(code **)(*piVar4 + 0xc))(&local_44);
    *puVar3 = uVar1;
    if (*(int *)(local_34 + -4) != 0) {
      FUN_10c3d900(local_34 + -4);
    }
    piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x68))("UIObjectives",0);
    param_1 = local_c;
    local_c[2] = piVar4;
    (**(code **)(*piVar4 + 0x10))(local_c,"CUIObjectives");
    local_44 = "RequestObjectives";
    local_40 = "RequestObjectives";
    local_3c = "Request all mission objectives (force to call ObjectiveAdded for each objective)";
    local_38 = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_30 = 0;
    local_2c = "Array";
    local_28 = &DAT_11d9d32b;
    local_34 = DAT_1202f1cc;
    local_14 = (**(code **)(*(int *)param_1[2] + 0xc))(&local_44);
    puVar3 = (undefined4 *)FUN_10ca7400(&local_14);
    *puVar3 = FUN_10ca71d0;
    if (*(int *)(local_34 + -4) != 0) {
      FUN_10c3d900(local_34 + -4);
    }
  }
  FUN_10ca6e10();
  return param_1;
}



/* ===== FUN_10ca6e10 @ 10ca6e10  size=869 ===== */
// calls: CInfoRecord::GetModelString, memcpy
// strings:
//   "Libs/UI/Objectives_new.xml"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""Libs/UI/Objectives_new.xml"" */

void __fastcall FUN_10ca6e10(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  size_t _Size;
  char *local_30;
  char *local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  char *local_8;
  
  iVar6 = param_1 + 0x24;
  local_10 = iVar6;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10ca8c10(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x2c) = iVar6;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x30) = iVar6;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  CInfoRecord__GetModelString("Libs/UI/Objectives_new.xml");
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_18,local_24,0,1,0);
  if (local_18 != (int *)0x0) {
    iVar6 = 0;
    local_20 = 0;
    iVar2 = (**(code **)(*local_18 + 0xa0))();
    if (0 < iVar2) {
      do {
        (**(code **)(*local_18 + 0xa8))(&local_c,iVar6);
        iVar5 = 0;
        local_1c = 0;
        iVar2 = (**(code **)(*local_c + 0xa0))();
        if (0 < iVar2) {
          do {
            (**(code **)(*local_c + 0xa8))(&local_14,iVar5);
            pcVar3 = (char *)(**(code **)(*local_c + 0x20))();
            pcVar7 = &DAT_1201fc98;
            local_8 = &DAT_1201fc98;
            if (pcVar3 != (char *)0x0) {
              pcVar9 = pcVar3;
              do {
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              _Size = (int)pcVar9 - (int)(pcVar3 + 1);
              if (_Size != 0) {
                puVar4 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
                DAT_123be268 = DAT_123be268 + _Size + 0xd;
                *puVar4 = 1;
                pcVar7 = (char *)(puVar4 + 3);
                puVar4[1] = _Size;
                puVar4[2] = _Size;
                pcVar7[_Size] = '\0';
                local_8 = pcVar7;
                if (pcVar7 != pcVar3) {
                  memcpy(pcVar7,pcVar3,_Size);
                }
              }
            }
            piVar8 = (int *)(pcVar7 + -0xc);
            if ((*piVar8 < 2) && (*(int *)(local_8 + -8) + 1U <= *(uint *)(local_8 + -4))) {
              if (local_8 + *(int *)(local_8 + -8) != ".") {
                local_8[*(int *)(local_8 + -8)] = DAT_11d9f004;
              }
              *(int *)(local_8 + -8) = *(int *)(local_8 + -8) + 1;
              local_8[*(int *)(local_8 + -8)] = '\0';
            }
            else {
              FUN_10a4c8f0(local_8,*(undefined4 *)(local_8 + -8),&DAT_11d9f004,1);
              if ((-1 < *piVar8) && (iVar6 = FUN_10c3dad0(piVar8), iVar6 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar7 + -4));
                FUN_10c3d900(piVar8);
              }
            }
            pcVar7 = (char *)(**(code **)(*local_14 + 0x20))();
            if (pcVar7 == (char *)0x0) {
              iVar6 = 0;
            }
            else {
              pcVar3 = pcVar7;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              iVar6 = (int)pcVar3 - (int)(pcVar7 + 1);
            }
            FUN_10a4c990(pcVar7,iVar6);
            cVar1 = (**(code **)(*local_14 + 0x30))(0,local_28,&local_2c);
            if ((cVar1 == '\0') ||
               (cVar1 = (**(code **)(*local_14 + 0x30))(1,local_28,&local_30), pcVar7 = local_2c,
               cVar1 == '\0')) {
              pcVar7 = local_8;
              piVar8 = (int *)(local_8 + -0xc);
              if ((-1 < *piVar8) && (iVar6 = FUN_10c3dad0(piVar8), iVar6 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar7 + -4));
                FUN_10c3d900(piVar8);
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 4))();
              }
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 4))();
              }
              goto LAB_10ca70f5;
            }
            FUN_10ca7540(&local_8);
            if (pcVar7 == (char *)0x0) {
              iVar6 = 0;
            }
            else {
              pcVar3 = pcVar7;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              iVar6 = (int)pcVar3 - (int)(pcVar7 + 1);
            }
            FUN_1083ab70(pcVar7,iVar6);
            pcVar7 = local_30;
            FUN_10ca7540(&local_8);
            if (pcVar7 == (char *)0x0) {
              iVar6 = 0;
            }
            else {
              pcVar3 = pcVar7;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              iVar6 = (int)pcVar3 - (int)(pcVar7 + 1);
            }
            FUN_1083ab70(pcVar7,iVar6);
            pcVar7 = local_8;
            piVar8 = (int *)(local_8 + -0xc);
            if ((-1 < *piVar8) && (iVar6 = FUN_10c3dad0(piVar8), iVar6 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar7 + -4));
              FUN_10c3d900(piVar8);
            }
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 4))();
            }
            iVar5 = local_1c + 1;
            local_1c = iVar5;
            iVar2 = (**(code **)(*local_c + 0xa0))();
            iVar6 = local_20;
          } while (iVar5 < iVar2);
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 4))();
        }
        iVar6 = iVar6 + 1;
        local_20 = iVar6;
        iVar2 = (**(code **)(*local_18 + 0xa0))();
      } while (iVar6 < iVar2);
    }
LAB_10ca70f5:
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 4))();
    }
  }
  piVar8 = (int *)(local_24 + -0xc);
  if ((-1 < *piVar8) && (iVar6 = FUN_10c3dad0(piVar8), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
    FUN_10c3d900(piVar8);
  }
  return;
}



/* ===== FUN_10caa200 @ 10caa200  size=2982 ===== */
// strings:
//   "r_Width"
//   "r_Height"
//   "r_Fullscreen"
//   "s_MusicVolume"
//   "s_SFXVolume"
//   "sys_flash_video_soundvolume"
//   "cl_sensitivity"
//   "cl_invertMouse"
//   "cl_invertController"
//   "Settings"
//   "Triggered on graphic settings change"
//   "OnGraphicChanged"
//   "Resolution"
//   "Resolution ID"
//   "Screen X resolution"
//   "Screen Y resolution"
//   "FullScreen"
//   "Fullscreen"
//   "Triggered if sound volume changed"
//   "OnSoundChanged"

/* [RE-AUTO c0]
   strings:
     ""r_Width""
     ""r_Height""
     ""r_Fullscreen""
     ""s_MusicVolume""
     ""s_SFXVolume""
     ""sys_flash_video_soundvolume""
     ""cl_sensitivity""
     ""cl_invertMouse""
     ""cl_invertController""
     ""Settings"" */

undefined4 * __fastcall FUN_10caa200(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_38 [16];
  int local_28;
  undefined1 local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  puVar4 = param_1 + 0xe;
  param_1[1] = &PTR_FUN_11cdc4fc;
  *param_1 = &PTR_FUN_11cddf14;
  param_1[1] = &PTR_LAB_11cddf1c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xd] = 0;
  *puVar4 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar4 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = puVar4;
  param_1[0x11] = puVar4;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = local_5;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (*(int *)(DAT_1202e818 + 0xbc) != 0) {
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_Width");
    param_1[4] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_Height");
    param_1[5] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("r_Fullscreen");
    param_1[6] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("s_MusicVolume");
    param_1[7] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("s_SFXVolume");
    param_1[8] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("sys_flash_video_soundvolume");
    param_1[9] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_sensitivity");
    param_1[10] = uVar2;
    uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_invertMouse");
    param_1[0xb] = uVar2;
    iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_invertController");
    param_1[0xc] = iVar3;
    if (((((param_1[4] != 0) && (param_1[5] != 0)) && (param_1[6] != 0)) &&
        ((param_1[7] != 0 && (param_1[8] != 0)))) &&
       ((param_1[10] != 0 && ((param_1[0xb] != 0 && (iVar3 != 0)))))) {
      local_10 = (char *)0x400;
      local_c = 0x300;
      FUN_10caef80(&local_10);
      local_10 = (char *)0x500;
      local_c = 0x2d0;
      FUN_10caef80(&local_10);
      local_10 = (char *)0x500;
      local_c = 0x41a;
      FUN_10caef80(&local_10);
      local_10 = (char *)0x690;
      local_c = 0x41a;
      FUN_10caef80(&local_10);
      local_10 = (char *)0x780;
      local_c = 0x438;
      FUN_10caef80(&local_10);
      uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x68))("Settings",1);
      param_1[3] = uVar2;
      FUN_10c8de90("OnGraphicChanged","OnGraphicChanged","Triggered on graphic settings change",0,
                   "Array",&DAT_11d9d32b);
      local_18 = "Resolution";
      local_14 = "Resolution";
      local_10 = "Resolution ID";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "ResX";
      local_14 = "ResX";
      local_10 = "Screen X resolution";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "ResY";
      local_14 = "ResY";
      local_10 = "Screen Y resolution";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "FullScreen";
      local_14 = "FullScreen";
      local_10 = "Fullscreen";
      local_c = 1;
      FUN_10c91350(&local_18);
      piVar1 = (int *)param_1[3];
      local_c = 0;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("OnSoundChanged","OnSoundChanged","Triggered if sound volume changed",0,"Array",
                   &DAT_11d9d32b);
      local_18 = "Music";
      local_14 = "Music";
      local_10 = "Music volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "SFx";
      local_14 = "SFx";
      local_10 = "SFx volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "Video";
      local_14 = "Video";
      local_10 = "Video volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      piVar1 = (int *)param_1[3];
      local_c = 1;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("OnGameSettingsChanged","OnGameSettingsChanged",
                   "Triggered if game settings changed",0,"Array",&DAT_11d9d32b);
      local_18 = "MouseSensitivity";
      local_14 = "MouseSensitivity";
      local_10 = "Mouse Sensitivity";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "InvertMouse";
      local_14 = "InvertMouse";
      local_10 = "Invert Mouse";
      local_c = 1;
      FUN_10c91350(&local_18);
      local_18 = "InvertController";
      local_14 = "InvertController";
      local_10 = "Invert Controller";
      local_c = 1;
      FUN_10c91350(&local_18);
      piVar1 = (int *)param_1[3];
      local_c = 2;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("OnResolutions","OnResolutions","Triggered if resolutions were requested.",0,
                   "Array",&DAT_11d9d32b);
      piVar1 = (int *)param_1[3];
      local_24 = 1;
      local_20 = "Resolutions";
      local_1c = "UI array with all resolutions (x1,y1,x2,y2,...)";
      local_c = 3;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("OnResolutionItem","OnResolutionItem",
                   "Triggered once per each resolution if resolutions were requested.",0,"Array",
                   &DAT_11d9d32b);
      local_18 = "ResString";
      local_14 = "ResString";
      local_10 = "Resolution as string (X x Y)";
      local_c = 4;
      FUN_10c91350(&local_18);
      local_18 = "ID";
      local_14 = "ID";
      local_10 = "Resolution ID";
      local_c = 2;
      FUN_10c91350(&local_18);
      piVar1 = (int *)param_1[3];
      local_c = 4;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("OnLevelItem","OnLevelItem","Triggered once per level if levels were requested.",
                   0,"Array",&DAT_11d9d32b);
      local_18 = "LevelLabel";
      local_14 = "LevelLabel";
      local_10 = "@ui_<level> for localization";
      local_c = 4;
      FUN_10c91350(&local_18);
      local_18 = "LevelName";
      local_14 = "LevelName";
      local_10 = "name of the level";
      local_c = 4;
      FUN_10c91350(&local_18);
      piVar1 = (int *)param_1[3];
      local_c = 5;
      puVar4 = (undefined4 *)FUN_10cac470(&local_c);
      uVar2 = (**(code **)(*piVar1 + 0xc))(local_38);
      *puVar4 = uVar2;
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x68))("Settings",0);
      param_1[2] = uVar2;
      FUN_10c8de90("SetGraphics","SetGraphics","Call this to set graphic modes",0,"Array",
                   &DAT_11d9d32b);
      local_18 = "Resolution";
      local_14 = "Resolution";
      local_10 = "Resolution ID";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "Fullscreen";
      local_14 = "Fullscreen";
      local_10 = "Fullscreen (True/False)";
      local_c = 1;
      FUN_10c91350(&local_18);
      FUN_10cadf50(param_1[2],local_38,FUN_10cabe50,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("SetResolution","SetResolution","Call this to set resolution",0,"Array",
                   &DAT_11d9d32b);
      local_18 = "ResX";
      local_14 = "ResX";
      local_10 = "Screen X resolution";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "ResY";
      local_14 = "ResY";
      local_10 = "Screen Y resolution";
      local_c = 2;
      FUN_10c91350(&local_18);
      local_18 = "Fullscreen";
      local_14 = "Fullscreen";
      local_10 = "Fullscreen (True/False)";
      local_c = 1;
      FUN_10c91350(&local_18);
      FUN_10cadf50(param_1[2],local_38,FUN_10cabef0,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("SetSound","SetSound","Call this to set sound settings",0,"Array",&DAT_11d9d32b);
      local_18 = "Music";
      local_14 = "Music";
      local_10 = "Music volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "SFx";
      local_14 = "SFx";
      local_10 = "SFx volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "Video";
      local_14 = "Video";
      local_10 = "Video volume";
      local_c = 3;
      FUN_10c91350(&local_18);
      FUN_10cadf50(param_1[2],local_38,FUN_10cabf90,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("SetGameSettings","SetGameSettings","Call this to set game settings",0,"Array",
                   &DAT_11d9d32b);
      local_18 = "MouseSensitivity";
      local_14 = "MouseSensitivity";
      local_10 = "Mouse Sensitivity";
      local_c = 3;
      FUN_10c91350(&local_18);
      local_18 = "InvertMouse";
      local_14 = "InvertMouse";
      local_10 = "Invert Mouse";
      local_c = 1;
      FUN_10c91350(&local_18);
      local_18 = "InvertController";
      local_14 = "InvertController";
      local_10 = "Invert Controller";
      local_c = 1;
      FUN_10c91350(&local_18);
      FUN_10cadf50(param_1[2],local_38,FUN_10cac050,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("GetResolutionList","GetResolutionList",
                   "Execute this node will trigger the \"Events:Settings:OnResolutions\" node.",0,
                   "Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,&LAB_10cac100,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("GetCurrGraphics","GetCurrGraphics",
                   "Execute this node will trigger the \"Events:Settings:OnGraphicChanged\" node.",0
                   ,"Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,&LAB_10cac110,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("GetCurrSound","GetCurrSound",
                   "Execute this node will trigger the \"Events:Settings:OnSoundChanged\" node.",0,
                   "Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,&LAB_10cac120,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("GetCurrGameSettings","GetCurrGameSettings",
                   "Execute this node will trigger the \"Events:Settings:OnGameSettingsChanged\" node."
                   ,0,"Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,&LAB_10cac130,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("GetLevels","GetLevels",
                   "Execute this node will trigger the \"Events:Settings:OnLevelItem\" node once per level."
                   ,0,"Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,FUN_10cac140,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      FUN_10c8de90("LogoutUser","LogoutUser","Execute this node to save settings and logout user",0,
                   "Array",&DAT_11d9d32b);
      FUN_10cadf50(param_1[2],local_38,&LAB_10cac2e0,0);
      if (*(int *)(local_28 + -4) != 0) {
        FUN_10c3d900((int *)(local_28 + -4));
      }
      (**(code **)(*(int *)param_1[2] + 0x10))(param_1,"CUISettings");
      (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x5c))(param_1 + 1,"CUISettings");
    }
  }
  return param_1;
}



/* ===== FUN_10cf6f50 @ 10cf6f50  size=4074 ===== */
// strings:
//   "TargetPos"
//   "RequestedMoveAnim"
//   "TargetType"
//   "Entity"
//   "MoveSpeedByAnim"
//   "Steer_RollByMove"
//   "Steer_ConsiderVelocity"
//   "Steer_UseProceduralSpeed"
//   "Steer_FormationTarget"
//   "Steer_Enabled"
//   "Steer_TimeoutStuckChecking"
//   "Steer_FlyMode"
//   "DisableMovePhy"
//   "RotateSpeedByMove"
//   "RotateReachedTimeScale"
//   "Steer_2DLength"
//   "Steer_Offset"
//   "MaxMoveSpeed"
//   "MaxRotateSpeed"
//   "MoveSpeedMultiplier"

/* [RE-AUTO c0]
   strings:
     ""TargetPos""
     ""RequestedMoveAnim""
     ""TargetType""
     ""Entity""
     ""MoveSpeedByAnim""
     ""Steer_RollByMove""
     ""Steer_ConsiderVelocity""
     ""Steer_UseProceduralSpeed""
     ""Steer_FormationTarget""
     ""Steer_Enabled"" */

void __thiscall FUN_10cf6f50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_10;
  undefined8 local_c;
  
  FUN_10cf6ef0(param_2);
  local_20 = local_30;
  *param_1 = &PTR_FUN_11ce0de0;
  puVar1 = param_1 + 4;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_1c = local_20;
  FUN_100b62c0("TargetPos","");
  local_10 = 0;
  local_c = 0;
  FUN_10cf1af0(local_30);
  *(ulonglong *)(param_1 + 0xc) = CONCAT44((int)local_c,(int)local_c);
  param_1[7] = &PTR_FUN_11ce0dc8;
  param_1[0xe] = local_10;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("TargetID","");
  FUN_10cf1af0(local_30);
  param_1[0xf] = &PTR_FUN_11ce0dcc;
  param_1[0x14] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("RequestedMoveAnim","");
  FUN_113168d0(&DAT_11ce0e14);
  FUN_10cf1af0(local_30);
  param_1[0x15] = &PTR_FUN_11ce0dd0;
  param_1[0x1a] = param_2;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("TargetType","");
  FUN_113168d0("Entity");
  FUN_10cf1af0(local_30);
  param_1[0x1b] = &PTR_FUN_11ce0dd0;
  param_1[0x20] = param_2;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("MoveSpeedByAnim","");
  FUN_10cf1af0(local_30);
  param_1[0x21] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_RollByMove","");
  FUN_10cf1af0(local_30);
  param_1[0x27] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0(&DAT_11ce0e54,&DAT_11ce0e5b);
  FUN_10cf1af0(local_30);
  param_1[0x2d] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_ConsiderVelocity","");
  FUN_10cf1af0(local_30);
  param_1[0x33] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_UseProceduralSpeed","");
  FUN_10cf1af0(local_30);
  param_1[0x39] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_FormationTarget","");
  FUN_10cf1af0(local_30);
  param_1[0x3f] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_Enabled","");
  FUN_10cf1af0(local_30);
  param_1[0x45] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_TimeoutStuckChecking","");
  FUN_10cf1af0(local_30);
  param_1[0x4b] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_FlyMode","");
  FUN_10cf1af0(local_30);
  param_1[0x51] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x56) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("DisableMovePhy","");
  FUN_10cf1af0(local_30);
  param_1[0x57] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  param_1[0x5d] = 0x3f000000;
  param_1[0x5e] = 0x3f000000;
  local_1c = local_20;
  FUN_100b62c0("RotateSpeedByMove","");
  FUN_10cf1af0(local_30);
  param_1[0x5f] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 100) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("RotateReachedTimeScale","");
  FUN_10cf1af0(local_30);
  param_1[0x65] = &PTR_FUN_11ce0dd8;
  param_1[0x6a] = 0x3f000000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_2DLength","");
  FUN_10cf1af0(local_30);
  param_1[0x6b] = &PTR_FUN_11ce0dd4;
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_Offset","");
  local_10 = 0;
  FUN_10cf1af0(local_30);
  *(ulonglong *)(param_1 + 0x76) = CONCAT44((int)local_c,(int)local_c);
  param_1[0x71] = &PTR_FUN_11ce0dc8;
  param_1[0x78] = local_10;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("MaxMoveSpeed","");
  FUN_10cf1af0(local_30);
  param_1[0x79] = &PTR_FUN_11ce0dd8;
  param_1[0x7e] = &DAT_40800000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("MaxRotateSpeed","");
  FUN_10cf1af0(local_30);
  param_1[0x7f] = &PTR_FUN_11ce0dd8;
  param_1[0x84] = 0x43340000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("MoveSpeedMultiplier","");
  FUN_10cf1af0(local_30);
  param_1[0x85] = &PTR_FUN_11ce0dd8;
  param_1[0x8a] = 0x3f800000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_MaxForce","");
  FUN_10cf1af0(local_30);
  param_1[0x8b] = &PTR_FUN_11ce0dd8;
  param_1[0x90] = 0x40000000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_AvoidanceRadius","");
  FUN_10cf1af0(local_30);
  param_1[0x91] = &PTR_FUN_11ce0dd8;
  param_1[0x96] = 0x3f800000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_TravelAngleToRollRatio","");
  FUN_10cf1af0(local_30);
  param_1[0x97] = &PTR_FUN_11ce0dd8;
  param_1[0x9c] = 0x3f19999a;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_MaxTravelAngle","");
  FUN_10cf1af0(local_30);
  param_1[0x9d] = &PTR_FUN_11ce0dd8;
  param_1[0xa2] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("Steer_MaxRollAngle","");
  FUN_10cf1af0(local_30);
  param_1[0xa3] = &PTR_FUN_11ce0dd8;
  param_1[0xa8] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("MinYawTurnAngle","");
  FUN_10cf1af0(local_30);
  param_1[0xa9] = &PTR_FUN_11ce0dd8;
  param_1[0xae] = 0x42700000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  *(undefined1 *)((int)param_1 + 0x2bd) = 0;
  local_1c = local_20;
  FUN_100b62c0("FlyingAltitude","");
  FUN_10cf1af0(local_30);
  param_1[0xb0] = &PTR_FUN_11ce0dd8;
  param_1[0xb5] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("PitchRotateSpeed","");
  FUN_10cf1af0(local_30);
  param_1[0xb6] = &PTR_FUN_11ce0dd8;
  param_1[0xbb] = 0x42fa0000;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("RollRotateSpeed","");
  FUN_10cf1af0(local_30);
  param_1[0xbc] = &PTR_FUN_11ce0dd8;
  param_1[0xc1] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("FacingMethod","");
  FUN_10cf1af0(local_30);
  param_1[0xc2] = &PTR_FUN_11ce0ddc;
  param_1[199] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  local_1c = local_20;
  FUN_100b62c0("FacingOffset","");
  FUN_10cf1af0(local_30);
  param_1[200] = &PTR_FUN_11ce0dd8;
  param_1[0xcd] = 0;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  param_1[0xce] = 2;
  local_20 = local_30;
  param_1[0xcf] = 1;
  param_1[0xd0] = 0;
  param_1[0xd1] = 1;
  param_1[0xd2] = 0x40000000;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xf1] = 0;
  *(undefined1 *)(param_1 + 0xf2) = 1;
  param_1[0xf3] = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  local_1c = local_20;
  FUN_100b62c0("Steer_MoveSpeedSmoothTime","");
  FUN_10cf1af0(local_30);
  param_1[0xf7] = &PTR_FUN_11ce0dd8;
  param_1[0xfc] = 0x3d23d70a;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  local_1c = local_20;
  FUN_100b62c0("Steer_TurnSpeedSmoothTime","");
  FUN_10cf1af0(local_30);
  param_1[0xff] = &PTR_FUN_11ce0dd8;
  param_1[0x104] = 0x3ecccccd;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  local_20 = local_30;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  local_1c = local_20;
  FUN_100b62c0("Steer_StrafeSmoothTime","");
  FUN_10cf1af0(local_30);
  param_1[0x109] = &PTR_FUN_11ce0dd8;
  param_1[0x10e] = 0x3dcccccd;
  FUN_10cf1b80(puVar1);
  if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_1c);
  }
  *(undefined1 *)(param_1 + 0x115) = 1;
  param_1[0x116] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined1 *)(param_1 + 0x11c) = 1;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  FUN_10cf28c0();
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x44);
}



/* ===== FUN_10db7800 @ 10db7800  size=429 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "Steer_Enabled"
//   "RequestedMoveAnim"
//   "MoveSpeedMultiplier"

/* [RE-AUTO c0]
   strings:
     ""Steer_Enabled""
     ""RequestedMoveAnim""
     ""MoveSpeedMultiplier"" */

void __thiscall FUN_10db7800(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  uVar1 = param_2;
  FUN_10dba240(param_1 + 0x1f3c);
  if (*(int *)(param_1 + 0xbc) != 0) {
    local_8 = *(undefined4 **)(*(int *)(param_1 + 0xbc) + 0x18);
    if (local_8 != (undefined4 *)0x0) {
      local_c = *local_8;
      uVar3 = FUN_11316bf0();
      CInfoRecord__GetModelString(uVar3);
      if ((*(uint *)(local_10 + -8) != 0) && (*(uint *)(local_10 + -8) < 0x100)) {
        FUN_100ebf60(uVar1 + 4,0x100,local_10);
        *(undefined4 *)(uVar1 + 0x184) = local_8[3];
      }
      piVar5 = (int *)(local_10 + -0xc);
      if (-1 < *piVar5) {
        iVar4 = FUN_10c3dad0(piVar5);
        if (iVar4 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
          FUN_10c3d900(piVar5);
        }
      }
    }
  }
  param_2 = param_2 & 0xffffff;
  if (*(int *)(param_1 + 0x1cdc) != 0) {
    uVar3 = FUN_113168d0("Steer_Enabled",&local_14);
    cVar2 = FUN_1046dc90(uVar3);
    if (cVar2 != '\0') {
      FUN_1025bef0(local_14,(int)&param_2 + 3);
      *(undefined1 *)(uVar1 + 0x165) = param_2._3_1_;
    }
    FUN_11316910();
    uVar3 = FUN_113168d0("RequestedMoveAnim",&local_18);
    FUN_1046dc90(uVar3);
    FUN_10497060(local_18,&local_8);
    piVar5 = (int *)FUN_113168d0(&DAT_11d9d32b);
    if (local_8 != (undefined4 *)*piVar5) {
      piVar5 = (int *)FUN_113168d0(&DAT_11dbab60);
      if (local_8 != (undefined4 *)*piVar5) {
        uVar3 = FUN_11317f30();
        FUN_100ebf60(uVar1 + 4,0x100,uVar3);
      }
    }
    uVar3 = FUN_113168d0("MoveSpeedMultiplier",&local_1c);
    FUN_1046dc90(uVar3);
    FUN_10264630(local_1c,&local_20);
    *(undefined4 *)(uVar1 + 0x184) = local_20;
  }
  return;
}



/* ===== FUN_10dceca0 @ 10dceca0  size=1305 ===== */
// calls: _CIatan2
// strings:
//   "m_request.velocity"
//   "ReqVelo"
//   "ReqVeloX"
//   "ReqVeloY"
//   "ReqVeloZ"
//   "ReqRotZ"
//   "detachLadder"
//   "jumped"
//   "m_velocity"
//   "m_jumped"

/* [RE-AUTO c0]
   calls: _CIatan2
   strings:
     ""m_request.velocity""
     ""ReqVelo""
     ""ReqVeloX""
     ""ReqVeloY""
     ""ReqVeloZ""
     ""ReqRotZ""
     ""detachLadder""
     ""jumped""
     ""m_velocity""
     ""m_jumped"" */

void __thiscall FUN_10dceca0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2[0x4d6] != 0) {
    *(undefined1 *)(param_1 + 0x420) = *(undefined1 *)(param_1 + 0x214);
    FUN_10dd5b50(param_1 + 0x4c);
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      fVar8 = *(float *)(param_1 + 0x254);
      fVar5 = *(float *)(param_1 + 600) * 0.0;
      fVar4 = *(float *)(param_1 + 0x260) * 0.0;
      fVar7 = (fVar5 - *(float *)(param_1 + 0x25c)) + fVar4;
      fVar4 = (fVar8 - fVar5) + fVar4;
      fVar6 = (*(float *)(param_1 + 0x25c) * 0.0 - fVar8 * 0.0) + *(float *)(param_1 + 0x260);
      fVar5 = *(float *)(param_1 + 600) * fVar4 - *(float *)(param_1 + 0x25c) * fVar6;
      fVar4 = *(float *)(param_1 + 0x25c) * fVar7 - fVar8 * fVar4;
      fVar8 = fVar8 * fVar6 - *(float *)(param_1 + 600) * fVar7;
      FUN_10e07de0("m_request.rotation * FORWARD_DIRECTION",fVar5 + 0.0 + fVar5,
                   fVar4 + DAT_11de9918 + fVar4,fVar8 + 0.0 + fVar8);
    }
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      FUN_10e07de0("m_request.velocity",(int)*(undefined8 *)(param_1 + 0x248),
                   (int)((ulonglong)*(undefined8 *)(param_1 + 0x248) >> 0x20),
                   *(undefined4 *)(param_1 + 0x250));
    }
    *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(*(int *)(param_1 + 8) + 0xd1);
    FUN_10da84c0("ReqVelo",
                 SQRT(*(float *)(param_1 + 0x248) * *(float *)(param_1 + 0x248) +
                      *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c) +
                      *(float *)(param_1 + 0x250) * *(float *)(param_1 + 0x250)));
    FUN_10da84c0("ReqVeloX",*(undefined4 *)(param_1 + 0x248));
    FUN_10da84c0("ReqVeloY",*(undefined4 *)(param_1 + 0x24c));
    FUN_10da84c0("ReqVeloZ",*(undefined4 *)(param_1 + 0x250));
    fVar3 = (float10)_CIatan2();
    FUN_10da84c0("ReqRotZ",(float)fVar3 * DAT_11de9a28);
    (**(code **)(*(int *)param_2[0x4d6] + 0x90))(param_1 + 0x244);
  }
  if (*(char *)(param_1 + 0x42c) != '\0') {
    (**(code **)(*param_2 + 0x120))("detachLadder",0,0);
  }
  if (*(char *)(param_1 + 0x474) != '\0') {
    (**(code **)(*param_2 + 0x120))("jumped",0,0);
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07de0("m_velocity",(int)*(undefined8 *)(param_1 + 0x430),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20),
                 *(undefined4 *)(param_1 + 0x438));
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07da0("m_jumped",(float)*(byte *)(param_1 + 0x440));
  }
  if ((*(char *)(param_1 + 0x440) != '\0') && (*(char *)((int)param_2 + 0x17a1) == '\0')) {
    param_2[0x5b5] = 0;
  }
  *(undefined8 *)(param_2 + 0x5a4) = *(undefined8 *)(param_1 + 0x430);
  param_2[0x5a6] = *(int *)(param_1 + 0x438);
  *(undefined1 *)((int)param_2 + 0x17a1) = *(undefined1 *)(param_1 + 0x440);
  param_2[0x5e5] = *(int *)(param_1 + 0x43c);
  param_2[0x5a7] = *(int *)(param_1 + 0x464);
  param_2[0x5a8] = *(int *)(param_1 + 0x468);
  param_2[0x5a9] = *(int *)(param_1 + 0x46c);
  param_2[0x5aa] = *(int *)(param_1 + 0x470);
  *(undefined8 *)(param_2 + 0x5ab) = *(undefined8 *)(param_1 + 0x248);
  param_2[0x5ad] = *(int *)(param_1 + 0x250);
  param_2[0x626] = *(int *)(param_1 + 0x450);
  param_2[0x627] = *(int *)(param_1 + 0x454);
  *(undefined8 *)(param_2 + 0x628) = *(undefined8 *)(param_1 + 0x458);
  param_2[0x62a] = *(int *)(param_1 + 0x460);
  *(undefined1 *)(param_2 + 0x5bb) = *(undefined1 *)(param_1 + 0x484);
  param_2[0x6dd] = *(int *)(param_1 + 0x480);
  if (*(char *)((int)param_2 + 0x1919) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if ((((*(float *)(iVar1 + 4) <= DAT_11cbf084) && (*(float *)(iVar1 + 0xc) <= 0.0)) ||
        (*(float *)(iVar1 + 200) <= DAT_11cbf084)) || ((*(byte *)(param_1 + 0x240) & 8) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_2 + 0x646) = uVar2;
  }
  if ((char)param_2[0x62b] != '\0') {
    if (((*(byte *)(param_1 + 0x240) & 8) != 0) &&
       (0.0 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
              *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
              *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14))) {
      *(undefined1 *)(param_2 + 0x646) = 1;
      return;
    }
    *(undefined1 *)(param_2 + 0x646) = 0;
  }
  return;
}



/* ===== FUN_10e3efd0 @ 10e3efd0  size=541 ===== */
// strings:
//   "Enable"
//   "playerNetID"
//   "taskID"
//   "taskState"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""playerNetID""
     ""taskID""
     ""taskState"" */

void FUN_10e3efd0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12035390 & 1) == 0) {
    DAT_12035390 = DAT_12035390 | 1;
    _DAT_12035330 = "Enable";
    _DAT_12035334 = 0;
    _DAT_12035338 = &DAT_11d9d32b;
    _DAT_1203533c = 0;
    _DAT_12035340 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12035344,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12035358 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12035348 = "playerNetID";
    _DAT_1203534c = 0;
    _DAT_12035350 = &DAT_11d9d32b;
    _DAT_12035354 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203535c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12035370 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12035360 = "taskID";
    _DAT_12035364 = 0;
    _DAT_12035368 = &DAT_11d9d32b;
    _DAT_1203536c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12035374,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12035388 = &DAT_11df7728;
    _DAT_12035378 = 0;
    uRam1203537c = 0;
    uRam12035380 = 0;
    uRam12035384 = 0;
    FUN_11a8911f(&LAB_11c8d420);
  }
  if ((DAT_12035390 & 2) == 0) {
    DAT_12035390 = DAT_12035390 | 2;
    _DAT_12035394 = "taskState";
    uRam12035398 = 0;
    puRam1203539c = &DAT_11d9d32b;
    _DAT_120353a0 = 1;
    _DAT_120353a4 = 0;
    uRam120353a8 = 0;
    uRam120353ac = 0;
    uRam120353b0 = 0;
  }
  *param_1 = &DAT_12035330;
  param_1[1] = &DAT_12035394;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e3f1f0 @ 10e3f1f0  size=661 ===== */
// strings:
//   "Enable"
//   "playerNetID"
//   "taskID"
//   "taskState"
//   "result"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""playerNetID""
     ""taskID""
     ""taskState""
     ""result"" */

void FUN_10e3f1f0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12035430 & 1) == 0) {
    DAT_12035430 = DAT_12035430 | 1;
    _DAT_120353b8 = "Enable";
    _DAT_120353bc = 0;
    _DAT_120353c0 = &DAT_11d9d32b;
    _DAT_120353c4 = 0;
    _DAT_120353c8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120353cc,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120353e0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120353d0 = "playerNetID";
    _DAT_120353d4 = 0;
    _DAT_120353d8 = &DAT_11d9d32b;
    _DAT_120353dc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120353e4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120353f8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120353e8 = "taskID";
    _DAT_120353ec = 0;
    _DAT_120353f0 = &DAT_11d9d32b;
    _DAT_120353f4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120353fc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    DAT_12035410 = &DAT_11df7669;
    _DAT_12035400 = "taskState";
    _DAT_12035404 = 0;
    _DAT_12035408 = &DAT_11d9d32b;
    _DAT_1203540c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12035414,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12035428 = &DAT_11df7728;
    _DAT_12035418 = 0;
    uRam1203541c = 0;
    uRam12035420 = 0;
    uRam12035424 = 0;
    FUN_11a8911f(&LAB_11c8d450);
  }
  if ((DAT_12035430 & 2) == 0) {
    DAT_12035430 = DAT_12035430 | 2;
    _DAT_12035434 = "result";
    uRam12035438 = 0;
    puRam1203543c = &DAT_11d9d32b;
    _DAT_12035440 = 1;
    _DAT_12035444 = 0;
    uRam12035448 = 0;
    uRam1203544c = 0;
    uRam12035450 = 0;
  }
  *param_1 = &DAT_120353b8;
  param_1[1] = &DAT_12035434;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ed1a20 @ 10ed1a20  size=1305 ===== */
// calls: _CIatan2
// strings:
//   "m_request.velocity"
//   "ReqVelo"
//   "ReqVeloX"
//   "ReqVeloY"
//   "ReqVeloZ"
//   "ReqRotZ"
//   "detachLadder"
//   "jumped"
//   "m_velocity"
//   "m_jumped"

/* [RE-AUTO c0]
   calls: _CIatan2
   strings:
     ""m_request.velocity""
     ""ReqVelo""
     ""ReqVeloX""
     ""ReqVeloY""
     ""ReqVeloZ""
     ""ReqRotZ""
     ""detachLadder""
     ""jumped""
     ""m_velocity""
     ""m_jumped"" */

void __thiscall FUN_10ed1a20(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2[0x4d6] != 0) {
    *(undefined1 *)(param_1 + 0x420) = *(undefined1 *)(param_1 + 0x214);
    FUN_10dd5b50(param_1 + 0x4c);
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      fVar8 = *(float *)(param_1 + 0x254);
      fVar5 = *(float *)(param_1 + 600) * 0.0;
      fVar4 = *(float *)(param_1 + 0x260) * 0.0;
      fVar7 = (fVar5 - *(float *)(param_1 + 0x25c)) + fVar4;
      fVar4 = (fVar8 - fVar5) + fVar4;
      fVar6 = (*(float *)(param_1 + 0x25c) * 0.0 - fVar8 * 0.0) + *(float *)(param_1 + 0x260);
      fVar5 = *(float *)(param_1 + 600) * fVar4 - *(float *)(param_1 + 0x25c) * fVar6;
      fVar4 = *(float *)(param_1 + 0x25c) * fVar7 - fVar8 * fVar4;
      fVar8 = fVar8 * fVar6 - *(float *)(param_1 + 600) * fVar7;
      FUN_10e07de0("m_request.rotation * FORWARD_DIRECTION",fVar5 + 0.0 + fVar5,
                   fVar4 + DAT_11de9918 + fVar4,fVar8 + 0.0 + fVar8);
    }
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      FUN_10e07de0("m_request.velocity",(int)*(undefined8 *)(param_1 + 0x248),
                   (int)((ulonglong)*(undefined8 *)(param_1 + 0x248) >> 0x20),
                   *(undefined4 *)(param_1 + 0x250));
    }
    *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(*(int *)(param_1 + 8) + 0xd1);
    FUN_10ecc2c0("ReqVelo",
                 SQRT(*(float *)(param_1 + 0x248) * *(float *)(param_1 + 0x248) +
                      *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c) +
                      *(float *)(param_1 + 0x250) * *(float *)(param_1 + 0x250)));
    FUN_10ecc2c0("ReqVeloX",*(undefined4 *)(param_1 + 0x248));
    FUN_10ecc2c0("ReqVeloY",*(undefined4 *)(param_1 + 0x24c));
    FUN_10ecc2c0("ReqVeloZ",*(undefined4 *)(param_1 + 0x250));
    fVar3 = (float10)_CIatan2();
    FUN_10ecc2c0("ReqRotZ",(float)fVar3 * DAT_11de9a28);
    (**(code **)(*(int *)param_2[0x4d6] + 0x90))(param_1 + 0x244);
  }
  if (*(char *)(param_1 + 0x42c) != '\0') {
    (**(code **)(*param_2 + 0x120))("detachLadder",0,0);
  }
  if (*(char *)(param_1 + 0x474) != '\0') {
    (**(code **)(*param_2 + 0x120))("jumped",0,0);
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07de0("m_velocity",(int)*(undefined8 *)(param_1 + 0x430),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20),
                 *(undefined4 *)(param_1 + 0x438));
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07da0("m_jumped",(float)*(byte *)(param_1 + 0x440));
  }
  if ((*(char *)(param_1 + 0x440) != '\0') && (*(char *)((int)param_2 + 0x179d) == '\0')) {
    param_2[0x5b4] = 0;
  }
  *(undefined8 *)(param_2 + 0x5a6) = *(undefined8 *)(param_1 + 0x430);
  param_2[0x5a8] = *(int *)(param_1 + 0x438);
  *(undefined1 *)((int)param_2 + 0x179d) = *(undefined1 *)(param_1 + 0x440);
  param_2[0x5e4] = *(int *)(param_1 + 0x43c);
  param_2[0x5a9] = *(int *)(param_1 + 0x464);
  param_2[0x5aa] = *(int *)(param_1 + 0x468);
  param_2[0x5ab] = *(int *)(param_1 + 0x46c);
  param_2[0x5ac] = *(int *)(param_1 + 0x470);
  *(undefined8 *)(param_2 + 0x5ad) = *(undefined8 *)(param_1 + 0x248);
  param_2[0x5af] = *(int *)(param_1 + 0x250);
  param_2[0x625] = *(int *)(param_1 + 0x450);
  param_2[0x626] = *(int *)(param_1 + 0x454);
  *(undefined8 *)(param_2 + 0x627) = *(undefined8 *)(param_1 + 0x458);
  param_2[0x629] = *(int *)(param_1 + 0x460);
  *(undefined1 *)(param_2 + 0x5ba) = *(undefined1 *)(param_1 + 0x484);
  param_2[0x6dc] = *(int *)(param_1 + 0x480);
  if (*(char *)((int)param_2 + 0x1915) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if ((((*(float *)(iVar1 + 4) <= DAT_11cbf084) && (*(float *)(iVar1 + 0xc) <= 0.0)) ||
        (*(float *)(iVar1 + 200) <= DAT_11cbf084)) || ((*(byte *)(param_1 + 0x240) & 8) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_2 + 0x645) = uVar2;
  }
  if ((char)param_2[0x62a] != '\0') {
    if (((*(byte *)(param_1 + 0x240) & 8) != 0) &&
       (0.0 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
              *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
              *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14))) {
      *(undefined1 *)(param_2 + 0x645) = 1;
      return;
    }
    *(undefined1 *)(param_2 + 0x645) = 0;
  }
  return;
}



/* ===== FUN_10f15d00 @ 10f15d00  size=81 ===== */
// strings:
//   "QUEST_COMPLETE"

/* [RE-AUTO c0]
   strings:
     ""QUEST_COMPLETE"" */

void __fastcall FUN_10f15d00(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x228))();
  if (((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x790))(), iVar2 != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(), cVar1 != '\0')) {
    FUN_10fc3af0();
    FUN_10fd9450("QUEST_COMPLETE",0,FUN_10f96490,0);
  }
  return;
}



/* ===== FUN_10f15d60 @ 10f15d60  size=74 ===== */
// strings:
//   "QUEST_FAIL"

/* [RE-AUTO c0]
   strings:
     ""QUEST_FAIL"" */

void __fastcall FUN_10f15d60(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x228))();
  if (((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x790))(), iVar2 != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x228))(), cVar1 != '\0')) {
    FUN_10fd9450("QUEST_FAIL",0,FUN_10f96490,0);
  }
  return;
}



/* ===== FUN_10f414e0 @ 10f414e0  size=1305 ===== */
// calls: _CIatan2
// strings:
//   "m_request.velocity"
//   "ReqVelo"
//   "ReqVeloX"
//   "ReqVeloY"
//   "ReqVeloZ"
//   "ReqRotZ"
//   "detachLadder"
//   "jumped"
//   "m_velocity"
//   "m_jumped"

/* [RE-AUTO c0]
   calls: _CIatan2
   strings:
     ""m_request.velocity""
     ""ReqVelo""
     ""ReqVeloX""
     ""ReqVeloY""
     ""ReqVeloZ""
     ""ReqRotZ""
     ""detachLadder""
     ""jumped""
     ""m_velocity""
     ""m_jumped"" */

void __thiscall FUN_10f414e0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2[0x4d6] != 0) {
    *(undefined1 *)(param_1 + 0x420) = *(undefined1 *)(param_1 + 0x214);
    FUN_10dd5b50(param_1 + 0x4c);
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      fVar8 = *(float *)(param_1 + 0x254);
      fVar5 = *(float *)(param_1 + 600) * 0.0;
      fVar4 = *(float *)(param_1 + 0x260) * 0.0;
      fVar7 = (fVar5 - *(float *)(param_1 + 0x25c)) + fVar4;
      fVar4 = (fVar8 - fVar5) + fVar4;
      fVar6 = (*(float *)(param_1 + 0x25c) * 0.0 - fVar8 * 0.0) + *(float *)(param_1 + 0x260);
      fVar5 = *(float *)(param_1 + 600) * fVar4 - *(float *)(param_1 + 0x25c) * fVar6;
      fVar4 = *(float *)(param_1 + 0x25c) * fVar7 - fVar8 * fVar4;
      fVar8 = fVar8 * fVar6 - *(float *)(param_1 + 600) * fVar7;
      FUN_10e07de0("m_request.rotation * FORWARD_DIRECTION",fVar5 + 0.0 + fVar5,
                   fVar4 + DAT_11de9918 + fVar4,fVar8 + 0.0 + fVar8);
    }
    if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
      FUN_10e07de0("m_request.velocity",(int)*(undefined8 *)(param_1 + 0x248),
                   (int)((ulonglong)*(undefined8 *)(param_1 + 0x248) >> 0x20),
                   *(undefined4 *)(param_1 + 0x250));
    }
    *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(*(int *)(param_1 + 8) + 0xd5);
    FUN_10f1eb30("ReqVelo",
                 SQRT(*(float *)(param_1 + 0x248) * *(float *)(param_1 + 0x248) +
                      *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c) +
                      *(float *)(param_1 + 0x250) * *(float *)(param_1 + 0x250)));
    FUN_10f1eb30("ReqVeloX",*(undefined4 *)(param_1 + 0x248));
    FUN_10f1eb30("ReqVeloY",*(undefined4 *)(param_1 + 0x24c));
    FUN_10f1eb30("ReqVeloZ",*(undefined4 *)(param_1 + 0x250));
    fVar3 = (float10)_CIatan2();
    FUN_10f1eb30("ReqRotZ",(float)fVar3 * DAT_11de9a28);
    (**(code **)(*(int *)param_2[0x4d6] + 0x90))(param_1 + 0x244);
  }
  if (*(char *)(param_1 + 0x42c) != '\0') {
    (**(code **)(*param_2 + 0x120))("detachLadder",0,0);
  }
  if (*(char *)(param_1 + 0x474) != '\0') {
    (**(code **)(*param_2 + 0x120))("jumped",0,0);
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07de0("m_velocity",(int)*(undefined8 *)(param_1 + 0x430),
                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20),
                 *(undefined4 *)(param_1 + 0x438));
  }
  if (*(int *)(*(int *)(param_1 + 0x224) + 8) == DAT_120312a8) {
    FUN_10e07da0("m_jumped",(float)*(byte *)(param_1 + 0x440));
  }
  if ((*(char *)(param_1 + 0x440) != '\0') && (*(char *)((int)param_2 + 0x1851) == '\0')) {
    param_2[0x5e0] = 0;
  }
  *(undefined8 *)(param_2 + 0x5ce) = *(undefined8 *)(param_1 + 0x430);
  param_2[0x5d0] = *(int *)(param_1 + 0x438);
  *(undefined1 *)((int)param_2 + 0x1851) = *(undefined1 *)(param_1 + 0x440);
  param_2[0x611] = *(int *)(param_1 + 0x43c);
  param_2[0x5d1] = *(int *)(param_1 + 0x464);
  param_2[0x5d2] = *(int *)(param_1 + 0x468);
  param_2[0x5d3] = *(int *)(param_1 + 0x46c);
  param_2[0x5d4] = *(int *)(param_1 + 0x470);
  *(undefined8 *)(param_2 + 0x520) = *(undefined8 *)(param_1 + 0x248);
  param_2[0x522] = *(int *)(param_1 + 0x250);
  param_2[0x653] = *(int *)(param_1 + 0x450);
  param_2[0x654] = *(int *)(param_1 + 0x454);
  *(undefined8 *)(param_2 + 0x655) = *(undefined8 *)(param_1 + 0x458);
  param_2[0x657] = *(int *)(param_1 + 0x460);
  *(undefined1 *)(param_2 + 0x5e6) = *(undefined1 *)(param_1 + 0x484);
  param_2[0x74c] = *(int *)(param_1 + 0x480);
  if (*(char *)((int)param_2 + 0x19cd) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if ((((*(float *)(iVar1 + 4) <= DAT_11cbf084) && (*(float *)(iVar1 + 0xc) <= 0.0)) ||
        (*(float *)(iVar1 + 0xcc) <= DAT_11cbf084)) || ((*(byte *)(param_1 + 0x240) & 8) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_2 + 0x673) = uVar2;
  }
  if ((char)param_2[0x658] != '\0') {
    if (((*(byte *)(param_1 + 0x240) & 8) != 0) &&
       (0.0 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
              *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
              *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14))) {
      *(undefined1 *)(param_2 + 0x673) = 1;
      return;
    }
    *(undefined1 *)(param_2 + 0x673) = 0;
  }
  return;
}



/* ===== FUN_10f964d0 @ 10f964d0  size=344 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "QUEST_COMPLETE"
//   "NORMAL_IDLE"
//   "QuestComplete"
//   "PLLocomotion"
//   "HolsteredIdle"

/* [RE-AUTO c0]
   strings:
     ""QUEST_COMPLETE""
     ""NORMAL_IDLE""
     ""QuestComplete""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f964d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("QUEST_COMPLETE",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f964b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f964b0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f75060;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f75060;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fac080);
  FUN_10f56fa0("QuestComplete");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10f96650 @ 10f96650  size=330 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "QUEST_FAIL"
//   "NORMAL_IDLE"
//   "QuestFail"
//   "PLLocomotion"
//   "HolsteredIdle"

/* [RE-AUTO c0]
   strings:
     ""QUEST_FAIL""
     ""NORMAL_IDLE""
     ""QuestFail""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f96650(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("QUEST_FAIL",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f96630;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f96630;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f75060;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f75060;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f56fa0("QuestFail");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



