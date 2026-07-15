/* ===== FUN_118a60f0 @ 118a60f0  size=216 ===== */
// strings:
//   "Quest"
//   "QuestExec"
//   "CharLevel"
//   "NpcAtdLevel"
//   "HunterStarLevel"
//   "GuildLevel"
//   "CharSex"
//   "ItemCount"

/* [RE-AUTO c0]
   strings:
     ""Quest""
     ""QuestExec""
     ""CharLevel""
     ""NpcAtdLevel""
     ""HunterStarLevel""
     ""GuildLevel""
     ""CharSex""
     ""ItemCount"" */

undefined4 FUN_118a60f0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_100fd0c0(param_1,"Quest");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"QuestExec");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"CharLevel");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"NpcAtdLevel");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"HunterStarLevel");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"GuildLevel");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"CharSex");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"ItemCount");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  return 0;
}



/* ===== FUN_118a8e90 @ 118a8e90  size=101 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

bool __thiscall FUN_118a8e90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar2 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0 &&
        (*(int *)(iVar2 + 0x20) == *(int *)(param_1 + 0x10))))) goto LAB_118a8ee9;
  }
  iVar2 = 0;
LAB_118a8ee9:
  return iVar2 != 0;
}



/* ===== FUN_118a8f10 @ 118a8f10  size=52 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

undefined4 FUN_118a8f10(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_118a8f90 @ 118a8f90  size=94 ===== */
// calls: CGuildTaskInfo::GetManager
// strings:
//   "CGuildTaskInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskInfo::GetManagers
   strings:
     ""CGuildTaskInfo"" */

int __thiscall FUN_118a8f90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildTaskInfo__GetManager(0,"CGuildTaskInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar2 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0 &&
        (*(int *)(iVar2 + 0x20) == *(int *)(param_1 + 0x10))))) {
      return iVar2;
    }
  }
  return 0;
}



/* ===== FUN_1190a480 @ 1190a480  size=52 ===== */
// calls: CGuildTitleInfo::GetInfoManager
// strings:
//   "CGuildTitleInfo"

/* [RE-AUTO c0]
   calls: CGuildTitleInfo::GetManagers
   strings:
     ""CGuildTitleInfo"" */

undefined4 FUN_1190a480(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildTitleInfo__GetInfoManager(0,"CGuildTitleInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1190c0c0 @ 1190c0c0  size=52 ===== */
// calls: CGuildTaskGroupInfo::GetInfoManager
// strings:
//   "CGuildTaskGroupInfo"

/* [RE-AUTO c0]
   calls: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo"" */

undefined4 FUN_1190c0c0(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildTaskGroupInfo__GetInfoManager(0,"CGuildTaskGroupInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1190d950 @ 1190d950  size=52 ===== */
// calls: CGuildQuestLevelInfo::GetInfoMgrByName
// strings:
//   "CGuildQuestLevelInfo"

/* [RE-AUTO c0]
   calls: CGuildQuestLevelInfo::GetManagers
   strings:
     ""CGuildQuestLevelInfo"" */

undefined4 FUN_1190d950(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildQuestLevelInfo__GetInfoMgrByName(0,"CGuildQuestLevelInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1190d9b0 @ 1190d9b0  size=52 ===== */
// calls: CGuildQuestPrizeInfo::GetInfoManager
// strings:
//   "CGuildQuestPrizeInfo"

/* [RE-AUTO c0]
   calls: CGuildQuestPrizeInfo::GetManagers
   strings:
     ""CGuildQuestPrizeInfo"" */

undefined4 FUN_1190d9b0(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildQuestPrizeInfo__GetInfoManager(0,"CGuildQuestPrizeInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119101d0 @ 119101d0  size=52 ===== */
// calls: CGuildResourceInstituteInfo::GetInfoMgrByName
// strings:
//   "CGuildResourceInstituteInfo"

/* [RE-AUTO c0]
   calls: CGuildResourceInstituteInfo::GetManagers
   strings:
     ""CGuildResourceInstituteInfo"" */

undefined4 FUN_119101d0(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildResourceInstituteInfo__GetInfoMgrByName(0,"CGuildResourceInstituteInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11910230 @ 11910230  size=52 ===== */
// calls: CGuildTradeInstituteInfo::GetInfoManager
// strings:
//   "CGuildTradeInstituteInfo"

/* [RE-AUTO c0]
   calls: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo"" */

undefined4 FUN_11910230(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildTradeInstituteInfo__GetInfoManager(0,"CGuildTradeInstituteInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11925260 @ 11925260  size=132 ===== */
// strings:
//   u"FriendlyInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"FriendlyInfo"" */

undefined * __thiscall FUN_11925260(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239f4c4 & 1) == 0) {
    DAT_1239f4c4 = DAT_1239f4c4 | 1;
    FUN_100f67b0(L"FriendlyInfo");
    _DAT_1239f4a4 = 0xb3;
    _DAT_1239f4ac = 1;
    _DAT_1239f4b0 = 0;
    _DAT_1239f4b4 = 0;
    _DAT_1239f4b8 = 0;
    _DAT_1239f4bc = 0;
    _DAT_1239f4c0 = 0;
    _DAT_1239f4a8 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239f4a4;
}



/* ===== FUN_1194c640 @ 1194c640  size=52 ===== */
// calls: CClanLevelInfo::GetInfoManager
// strings:
//   "CClanLevelInfo"

/* [RE-AUTO c0]
   calls: CClanLevelInfo::GetManagers
   strings:
     ""CClanLevelInfo"" */

undefined4 FUN_1194c640(int param_1)

{
  int iVar1;
  
  iVar1 = CClanLevelInfo__GetInfoManager(0,"CClanLevelInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11965830 @ 11965830  size=52 ===== */
// calls: CGuildRandCommodityInfo::GetInfoManager
// strings:
//   "CGuildRandCommodityInfo"

/* [RE-AUTO c0]
   calls: CGuildRandCommodityInfo::GetManagers
   strings:
     ""CGuildRandCommodityInfo"" */

undefined4 FUN_11965830(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildRandCommodityInfo__GetInfoManager(0,"CGuildRandCommodityInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1196c160 @ 1196c160  size=132 ===== */
// strings:
//   "ChatTab"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""ChatTab"" */

undefined * __thiscall FUN_1196c160(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a0e24 & 1) == 0) {
    DAT_123a0e24 = DAT_123a0e24 | 1;
    FUN_1024f010("ChatTab");
    _DAT_123a0e04 = 0x129;
    _DAT_123a0e0c = 1;
    _DAT_123a0e10 = 0;
    _DAT_123a0e14 = 0;
    _DAT_123a0e18 = 0;
    _DAT_123a0e1c = 0;
    _DAT_123a0e20 = 0;
    _DAT_123a0e08 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a0e04;
}



/* ===== FUN_1196c250 @ 1196c250  size=1070 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"TabName"
//   u"ChatTab"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"TabName""
     "u"ChatTab"" */

void __thiscall FUN_1196c250(int param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 local_4b4 [4];
  undefined2 local_4b0 [8];
  undefined1 local_4a0 [16];
  undefined2 *local_490;
  undefined2 *local_48c;
  char local_488;
  undefined1 local_487 [1023];
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a0e2c & 1) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a0e2c & 2) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 2;
    iVar3 = FUN_100e1cb0(DAT_123a0e28);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a0e30);
  if (cVar2 == '\0') {
    local_488 = cVar2;
    memset(local_487,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a0e28);
    FUN_100ea3b0(&local_488,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_488,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a0e30);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a0e2c & 4) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 4;
    FUN_100f67b0(L"TabName");
  }
  if ((DAT_123a0e2c & 8) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 8;
    iVar3 = FUN_100e1cb0(DAT_123a0e40);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a0e44);
  if (cVar2 == '\0') {
    local_488 = cVar2;
    memset(local_487,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a0e40);
    FUN_100ea3b0(&local_488,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_488,1);
  }
  else {
    local_490 = local_4b0;
    local_4b0[0] = 0;
    local_48c = local_490;
    (**(code **)(*param_2 + 0x28))(local_4b0,&DAT_123a0e44);
    puVar5 = (undefined4 *)FUN_100e5530(local_4b4,local_48c);
    puVar7 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)*puVar5;
    }
    CPet__SetName(puVar7);
    FUN_100e5670();
    if ((local_48c != local_4b0) && (local_48c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123a0e2c & 0x10) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 0x10;
    FUN_100f67b0(L"ChatTab");
  }
  if ((DAT_123a0e2c & 0x20) == 0) {
    DAT_123a0e2c = DAT_123a0e2c | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a0e54);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a0e58);
  if (cVar2 != '\0') {
    if (DAT_123a0e68 == 0) {
      uVar8 = 4;
      DAT_123a0e68 = 0;
      do {
        puVar5 = (undefined4 *)(&UNK_11d63c8c + uVar8);
        uVar8 = uVar8 + 4;
        DAT_123a0e68 = DAT_123a0e68 | 1 << ((byte)*puVar5 & 0x1f);
      } while (uVar8 < 0x38);
      if (DAT_123a0e68 == 0) {
        DAT_123a0e68 = 0xffffffff;
      }
    }
    if ((DAT_123a0e2c & 0x40) == 0) {
      DAT_123a0e2c = DAT_123a0e2c | 0x40;
      DAT_123a0e7c = &DAT_123a0e6c;
      DAT_123a0e80 = &DAT_123a0e6c;
      DAT_123a0e6c = 0;
      FUN_11a8911f(&LAB_11cb2d90);
    }
    if (DAT_123a0e80 == DAT_123a0e7c) {
      local_88[0] = '\0';
      memset(local_88 + 1,0,0x7f);
      uVar8 = 4;
      do {
        FUN_100ea370(local_88,&DAT_11d24f44,*(undefined4 *)(&UNK_11d63c8c + uVar8));
        pcVar6 = local_88;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_100d9260(local_88,local_88 + ((int)pcVar6 - (int)(local_88 + 1)));
        uVar8 = uVar8 + 4;
      } while (uVar8 < 0x38);
    }
    local_490 = (undefined2 *)local_4a0;
    local_4a0[0] = 0;
    local_48c = local_490;
    (**(code **)(*param_2 + 0x24))(local_4a0,&DAT_123a0e58);
    puVar1 = DAT_123a0e80;
    iVar3 = FUN_100e1c50(DAT_123a0e54);
    FUN_1196bc50(param_1 + 0x18,local_48c,DAT_123a0e68,10,*(undefined4 *)(iVar3 + 0x14),puVar1);
    if ((local_48c != (undefined2 *)local_4a0) && (local_48c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
    FUN_11a89daa();
    return;
  }
  local_488 = cVar2;
  memset(local_487,0,0x3ff);
  iVar3 = FUN_100e1c50(DAT_123a0e54);
  FUN_100ea3b0(&local_488,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
  FUN_100ee330(&local_488,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_1196ea50 @ 1196ea50  size=52 ===== */
// calls: CGuildMatchAgainstInfo::GetInfoManager
// strings:
//   "CGuildMatchAgainstInfo"

/* [RE-AUTO c0]
   calls: CGuildMatchAgainstInfo::GetManagers
   strings:
     ""CGuildMatchAgainstInfo"" */

undefined4 FUN_1196ea50(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildMatchAgainstInfo__GetInfoManager(0,"CGuildMatchAgainstInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11983470 @ 11983470  size=132 ===== */
// strings:
//   u"GuildTips"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"GuildTips"" */

undefined * __thiscall FUN_11983470(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a1740 & 1) == 0) {
    DAT_123a1740 = DAT_123a1740 | 1;
    FUN_100f67b0(L"GuildTips");
    _DAT_123a1720 = 0x14c;
    _DAT_123a1728 = 0;
    _DAT_123a172c = 0;
    _DAT_123a1730 = 0;
    _DAT_123a1734 = 0;
    _DAT_123a1738 = 0;
    _DAT_123a173c = 0;
    _DAT_123a1724 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a1720;
}



/* ===== CLeagueDetail::GetManagers @ 1199e640  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueDetail::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueDetail::GetManagers
   strings:
     ""CLeagueDetail::GetManagers"" */

undefined * CLeagueDetail__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d667b4;
  if (param_3 == 0) {
    if ((DAT_123a2040 & 1) == 0) {
      DAT_123a2040 = DAT_123a2040 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueDetail::GetManagers");
      FUN_11a8911f(&LAB_11cb4020);
    }
    if ((undefined *)*DAT_123a2024 != (undefined *)0x0) {
      return (undefined *)*DAT_123a2024;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a21e4 & 1) == 0) {
      DAT_123a21e4 = DAT_123a21e4 | 1;
      FUN_1199ecf0();
      FUN_11a8911f(&LAB_11cb3d20);
    }
    puVar1 = &DAT_123a21ac;
  }
  return puVar1;
}



/* ===== FUN_119a0850 @ 119a0850  size=52 ===== */
// calls: CLeagueDetail::GetManagers
// strings:
//   "CLeagueDetail"

/* [RE-AUTO c0]
   calls: CLeagueDetail::GetManagers
   strings:
     ""CLeagueDetail"" */

undefined4 FUN_119a0850(int param_1)

{
  int iVar1;
  
  iVar1 = CLeagueDetail__GetManagers(0,"CLeagueDetail",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLeagueDetail::GetManagers_119a0d90 @ 119a0d90  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CLeagueDetail::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueDetail::GetManagers
   strings:
     ""CLeagueDetail::GetManagers"" */

undefined4 CLeagueDetail__GetManagers_119a0d90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a2040 & 1) == 0) {
      DAT_123a2040 = DAT_123a2040 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueDetail::GetManagers");
      FUN_11a8911f(&LAB_11cb4020);
    }
    return *DAT_123a2024;
  }
  return 0;
}



/* ===== CLeagueDetail::GetManagers_119a13c0 @ 119a13c0  size=297 ===== */
// calls: CLeagueDetail::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueDetail"
//   "CLeagueDetail::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueDetail::GetManagers
   calls: CLeagueDetail::GetManagers
   strings:
     ""CLeagueDetail""
     ""CLeagueDetail::GetManagers"" */

void CLeagueDetail__GetManagers_119a13c0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CLeagueDetail__GetManagers(0,"CLeagueDetail",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d667b4;
      if ((DAT_123a2040 & 1) == 0) {
        DAT_123a2040 = DAT_123a2040 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueDetail::GetManagers");
        FUN_11a8911f(&LAB_11cb4020);
      }
      puVar4 = (undefined *)*DAT_123a2024;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)CInfoManager__FindByName(&param_1,"CLeagueDetail",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123a21e4 & 1) == 0) {
          DAT_123a21b0 = 0;
          DAT_123a21c0 = 0;
          DAT_123a21c4 = 0;
          _DAT_123a21c8 = 0;
          DAT_123a21cc = 0;
          DAT_123a21e4 = DAT_123a21e4 | 1;
          _DAT_123a21ac = &PTR_FUN_11d667e8;
          DAT_123a21d0 = _DAT_11de9ae0;
          DAT_123a21d4 = _UNK_11de9ae4;
          uRam123a21d8 = _UNK_11de9ae8;
          DAT_123a21dc = _UNK_11de9aec;
          DAT_123a21e0 = 1;
          DAT_123a21b4 = puVar4;
          _DAT_123a21b8 = puVar4;
          _DAT_123a21bc = puVar4;
          FUN_11a8911f(&LAB_11cb3d20);
        }
        puVar4 = &DAT_123a21ac;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a6cdb0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* ===== CLeagueSchedule::GetManagers_119a1620 @ 119a1620  size=297 ===== */
// calls: CLeagueSchedule::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName, CLeagueRoundSchedule::BuildRoundAndRewardLists
// strings:
//   "CLeagueSchedule"
//   "CLeagueSchedule::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueSchedule::GetManagers
   calls: CLeagueSchedule::GetManagers, CLeagueRoundSchedule::GetManagers_11846750
   strings:
     ""CLeagueSchedule""
     ""CLeagueSchedule::GetManagers"" */

void CLeagueSchedule__GetManagers_119a1620(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CLeagueSchedule__GetManagers(0,"CLeagueSchedule",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d4ee98;
      if ((DAT_1239808c & 1) == 0) {
        DAT_1239808c = DAT_1239808c | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueSchedule::GetManagers");
        FUN_11a8911f(&LAB_11cad100);
      }
      puVar4 = (undefined *)*DAT_12398070;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)CInfoManager__FindByName(&param_1,"CLeagueSchedule",0),
         puVar4 == (undefined *)0x0)) {
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
          DAT_12398110 = puVar4;
          _DAT_12398114 = puVar4;
          _DAT_12398118 = puVar4;
          FUN_11a8911f(&LAB_11cb3f00);
        }
        puVar4 = &DAT_12398108;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CLeagueRoundSchedule__BuildRoundAndRewardLists(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* ===== CLeagueRoundSchedule::GetManagers_119a1750 @ 119a1750  size=297 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName, CMHLevelInfo::ApplyLeagueScheduleDetail
// strings:
//   "CLeagueRoundSchedule"
//   "CLeagueRoundSchedule::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRoundSchedule::GetManagers
   strings:
     ""CLeagueRoundSchedule""
     ""CLeagueRoundSchedule::GetManagers"" */

void CLeagueRoundSchedule__GetManagers_119a1750(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_108fa510(0,"CLeagueRoundSchedule",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd7740;
      if ((DAT_123bfc68 & 1) == 0) {
        DAT_123bfc68 = DAT_123bfc68 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRoundSchedule::GetManagers");
        FUN_11a8911f(&LAB_11c767c0);
      }
      puVar4 = (undefined4 *)*DAT_123bfc4c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)CInfoManager__FindByName(&param_1,"CLeagueRoundSchedule",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bfb80 & 1) == 0) {
          DAT_123bfb88 = 0;
          DAT_123bfb98 = 0;
          DAT_123bfb9c = 0;
          _DAT_123bfba0 = 0;
          uRam123bfba4 = 0;
          DAT_123bfb80 = DAT_123bfb80 | 1;
          DAT_123bfb84 = &PTR_FUN_11dd7758;
          _DAT_123bfba8 = _DAT_11de9ae0;
          uRam123bfbac = _UNK_11de9ae4;
          uRam123bfbb0 = _UNK_11de9ae8;
          uRam123bfbb4 = _UNK_11de9aec;
          DAT_123bfbb8 = 1;
          DAT_123bfb8c = puVar4;
          _DAT_123bfb90 = puVar4;
          _DAT_123bfb94 = puVar4;
          FUN_11a8911f(&LAB_11cb3ea0);
        }
        puVar4 = &DAT_123bfb84;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CMHLevelInfo__ApplyLeagueScheduleDetail(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* ===== FUN_119d09b0 @ 119d09b0  size=50 ===== */
// strings:
//   u"GuildWar"

/* [RE-AUTO c0]
   strings:
     "u"GuildWar"" */

void FUN_119d09b0(undefined4 *param_1)

{
  if ((DAT_123a3580 & 1) == 0) {
    DAT_123a3580 = DAT_123a3580 | 1;
    FUN_100f67b0(L"GuildWar");
  }
  *param_1 = DAT_123a357c;
  return;
}



/* ===== FUN_119d0a40 @ 119d0a40  size=132 ===== */
// strings:
//   u"CommerceBoat"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"CommerceBoat"" */

undefined * __thiscall FUN_119d0a40(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a35a4 & 1) == 0) {
    DAT_123a35a4 = DAT_123a35a4 | 1;
    FUN_100f67b0(L"CommerceBoat");
    _DAT_123a3584 = 0x1d7;
    _DAT_123a358c = 0;
    _DAT_123a3590 = 0;
    _DAT_123a3594 = 0;
    _DAT_123a3598 = 0;
    _DAT_123a359c = 0;
    _DAT_123a35a0 = 0;
    _DAT_123a3588 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a3584;
}



/* ===== FUN_119d0f80 @ 119d0f80  size=50 ===== */
// strings:
//   u"GuildWar"

/* [RE-AUTO c0]
   strings:
     "u"GuildWar"" */

void FUN_119d0f80(undefined4 *param_1)

{
  if ((DAT_123a35ac & 1) == 0) {
    DAT_123a35ac = DAT_123a35ac | 1;
    FUN_100f67b0(L"GuildWar");
  }
  *param_1 = DAT_123a35a8;
  return;
}



/* ===== FUN_119d1050 @ 119d1050  size=132 ===== */
// strings:
//   u"Commerce"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"Commerce"" */

undefined * __thiscall FUN_119d1050(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a35d0 & 1) == 0) {
    DAT_123a35d0 = DAT_123a35d0 | 1;
    FUN_100f67b0(L"Commerce");
    _DAT_123a35b0 = 0x1d8;
    _DAT_123a35b8 = 0;
    _DAT_123a35bc = 0;
    _DAT_123a35c0 = 0;
    _DAT_123a35c4 = 0;
    _DAT_123a35c8 = 0;
    _DAT_123a35cc = 0;
    _DAT_123a35b4 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a35b0;
}



/* ===== FUN_119d1b50 @ 119d1b50  size=50 ===== */
// strings:
//   u"GuildWar"

/* [RE-AUTO c0]
   strings:
     "u"GuildWar"" */

void FUN_119d1b50(undefined4 *param_1)

{
  if ((DAT_123a35f8 & 1) == 0) {
    DAT_123a35f8 = DAT_123a35f8 | 1;
    FUN_100f67b0(L"GuildWar");
  }
  *param_1 = DAT_123a35f4;
  return;
}



/* ===== FUN_119d1d50 @ 119d1d50  size=132 ===== */
// strings:
//   u"CommerceGrabTime"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"CommerceGrabTime"" */

undefined * __thiscall FUN_119d1d50(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a361c & 1) == 0) {
    DAT_123a361c = DAT_123a361c | 1;
    FUN_100f67b0(L"CommerceGrabTime");
    _DAT_123a35fc = 0x1d9;
    _DAT_123a3604 = 0;
    _DAT_123a3608 = 0;
    _DAT_123a360c = 0;
    _DAT_123a3610 = 0;
    _DAT_123a3614 = 0;
    _DAT_123a3618 = 0;
    _DAT_123a3600 = param_1;
  }
  *param_2 = 1;
  return &DAT_123a35fc;
}



/* ===== FUN_11a03200 @ 11a03200  size=6162 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"Name"
//   u"Note"
//   u"Description"
//   u"Group"
//   u"GuildLevel"
//   u"GuildRepute"
//   u"GuildArena"
//   u"GuildPlot"
//   u"PreTasks"
//   u"ContentsType"
//   u"ContentId"
//   u"ContentType"
//   u"ContentArg1"
//   u"ContentArg2"
//   u"ContentArg3"
//   u"ContentArg4"
//   u"ContentArg5"
//   u"GuildExpPrize"
//   u"GuildFundPrize"
//   u"GuildReputePrize"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Name""
     "u"Note""
     "u"Description""
     "u"Group""
     "u"GuildLevel""
     "u"GuildRepute""
     "u"GuildArena""
     "u"GuildPlot""
     "u"PreTasks""
     "u"ContentsType"" */

void __thiscall FUN_11a03200(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_469;
  int local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined2 local_448 [8];
  undefined1 local_438 [16];
  undefined2 *local_428;
  undefined2 *local_424;
  undefined1 local_420 [16];
  undefined1 *local_410;
  undefined1 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a6654 & 1) == 0) {
    DAT_123a6654 = DAT_123a6654 | 1;
    FUN_100f67b0(&DAT_11d4a0a4);
  }
  if ((DAT_123a6654 & 2) == 0) {
    DAT_123a6654 = DAT_123a6654 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a6650);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6658);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6650);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a6658);
    *(undefined4 *)(param_1 + 0x10) = uVar7;
  }
  if ((DAT_123a6654 & 4) == 0) {
    DAT_123a6654 = DAT_123a6654 | 4;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123a6654 & 8) == 0) {
    DAT_123a6654 = DAT_123a6654 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a6668);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a666c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6668);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = local_448;
    local_448[0] = 0;
    local_424 = local_428;
    (**(code **)(*param_2 + 0x28))(local_448,&DAT_123a666c);
    puVar4 = (undefined4 *)FUN_100e5530(&local_468,local_424);
    puVar6 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar6);
    FUN_100e5670();
    if ((local_424 != local_448) && (local_424 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
  }
  if ((DAT_123a6654 & 0x10) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x10;
    FUN_100f67b0(L"Note");
  }
  if ((DAT_123a6654 & 0x20) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a667c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6680);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a667c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = local_448;
    local_448[0] = 0;
    local_424 = local_428;
    (**(code **)(*param_2 + 0x28))(local_448,&DAT_123a6680);
    puVar4 = (undefined4 *)FUN_100e5530(&local_468,local_424);
    puVar6 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar6);
    FUN_100e5670();
    if ((local_424 != local_448) && (local_424 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
  }
  if ((DAT_123a6654 & 0x40) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x40;
    FUN_100f67b0(L"Description");
  }
  if (-1 < (char)DAT_123a6654) {
    DAT_123a6654 = DAT_123a6654 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a6690);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6694);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6690);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = local_448;
    local_448[0] = 0;
    local_424 = local_428;
    (**(code **)(*param_2 + 0x28))(local_448,&DAT_123a6694);
    puVar4 = (undefined4 *)FUN_100e5530(&local_468,local_424);
    puVar6 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar6);
    FUN_100e5670();
    if ((local_424 != local_448) && (local_424 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
  }
  if ((DAT_123a6654 & 0x100) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x100;
    FUN_100f67b0(L"Group");
  }
  if ((DAT_123a6654 & 0x200) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a66a4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a66a8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a66a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a66a8);
    *(undefined4 *)(param_1 + 0x20) = uVar7;
  }
  if ((DAT_123a6654 & 0x400) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x400;
    FUN_100f67b0(L"GuildLevel");
  }
  if ((DAT_123a6654 & 0x800) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a66b8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a66bc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a66b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a66bc);
    *(undefined4 *)(param_1 + 0x24) = uVar7;
  }
  if ((DAT_123a6654 & 0x1000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x1000;
    FUN_100f67b0(L"GuildRepute");
  }
  if ((DAT_123a6654 & 0x2000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a66cc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a66d0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a66cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a66d0);
    *(undefined4 *)(param_1 + 0x28) = uVar7;
  }
  if ((DAT_123a6654 & 0x4000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x4000;
    FUN_100f67b0(L"GuildArena");
  }
  if ((DAT_123a6654 & 0x8000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a66e0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a66e4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a66e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a66e4);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
  }
  if ((DAT_123a6654 & 0x10000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x10000;
    FUN_100f67b0(L"GuildPlot");
  }
  if ((DAT_123a6654 & 0x20000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a66f4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a66f8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a66f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a66f8);
    *(undefined4 *)(param_1 + 0x30) = uVar7;
  }
  if ((DAT_123a6654 & 0x40000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x40000;
    FUN_100f67b0(L"PreTasks");
  }
  if ((DAT_123a6654 & 0x80000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a6708);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a670c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6708);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_428 = (undefined2 *)local_438;
    local_438[0] = 0;
    local_424 = local_428;
    (**(code **)(*param_2 + 0x24))(local_438,&DAT_123a670c);
    FUN_1162bea0(param_1 + 0x34,local_438);
    if ((local_424 != (undefined2 *)local_438) && (local_424 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_424);
    }
  }
  uVar7 = 0;
  if ((DAT_123a6654 & 0x100000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x100000;
    FUN_100f67b0(L"ContentsType");
  }
  if ((DAT_123a6654 & 0x200000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a671c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6720);
  if (cVar2 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a671c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a6720);
  }
  uVar5 = DAT_123a6654;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  if ((uVar5 & 0x400000) == 0) {
    DAT_123a6654 = uVar5 | 0x400000;
    FUN_100f67b0(L"ContentId");
    uVar5 = DAT_123a6654;
  }
  if ((uVar5 & 0x800000) == 0) {
    DAT_123a6654 = uVar5 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a6730);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6734);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6730);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_464 = (**(code **)(*param_2 + 0x20))(&DAT_123a6734);
  }
  if ((DAT_123a6654 & 0x1000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x1000000;
    FUN_100f67b0(L"ContentType");
  }
  if ((DAT_123a6654 & 0x2000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x2000000;
    iVar3 = FUN_100e1cb0(DAT_123a6744);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6748);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6744);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_460 = (**(code **)(*param_2 + 0x20))(&DAT_123a6748);
  }
  if ((DAT_123a6654 & 0x4000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x4000000;
    FUN_100f67b0(L"ContentArg1");
  }
  if ((DAT_123a6654 & 0x8000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_123a6758);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a675c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6758);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_45c = (**(code **)(*param_2 + 0x20))(&DAT_123a675c);
  }
  if ((DAT_123a6654 & 0x10000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x10000000;
    FUN_100f67b0(L"ContentArg2");
  }
  if ((DAT_123a6654 & 0x20000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x20000000;
    iVar3 = FUN_100e1cb0(DAT_123a676c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6770);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a676c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_458 = (**(code **)(*param_2 + 0x20))(&DAT_123a6770);
  }
  if ((DAT_123a6654 & 0x40000000) == 0) {
    DAT_123a6654 = DAT_123a6654 | 0x40000000;
    FUN_100f67b0(L"ContentArg3");
  }
  if (-1 < (int)DAT_123a6654) {
    DAT_123a6654 = DAT_123a6654 | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_123a6780);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6784);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6780);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_454 = (**(code **)(*param_2 + 0x20))(&DAT_123a6784);
  }
  if ((DAT_123a6798 & 1) == 0) {
    DAT_123a6798 = DAT_123a6798 | 1;
    FUN_100f67b0(L"ContentArg4");
  }
  if ((DAT_123a6798 & 2) == 0) {
    DAT_123a6798 = DAT_123a6798 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a6794);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a679c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6794);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_450 = (**(code **)(*param_2 + 0x20))(&DAT_123a679c);
  }
  if ((DAT_123a6798 & 4) == 0) {
    DAT_123a6798 = DAT_123a6798 | 4;
    FUN_100f67b0(L"ContentArg5");
  }
  if ((DAT_123a6798 & 8) == 0) {
    DAT_123a6798 = DAT_123a6798 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a67ac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a67b0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a67ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_44c = (**(code **)(*param_2 + 0x20))(&DAT_123a67b0);
  }
  local_468 = FUN_11a02e50(&local_464);
  if (local_468 != 0) {
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 == *(int **)(param_1 + 0x4c)) {
      FUN_11a04c30(piVar1,&local_468,&local_469,1,1);
    }
    else {
      *piVar1 = local_468;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
    }
  }
  if ((DAT_123a6798 & 0x10) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x10;
    FUN_100f67b0(L"GuildExpPrize");
  }
  if ((DAT_123a6798 & 0x20) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123a67c0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a67c4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a67c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a67c4);
    *(undefined4 *)(param_1 + 0x50) = uVar7;
  }
  if ((DAT_123a6798 & 0x40) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x40;
    FUN_100f67b0(L"GuildFundPrize");
  }
  if (-1 < (char)DAT_123a6798) {
    DAT_123a6798 = DAT_123a6798 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_123a67d4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a67d8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a67d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a67d8);
    *(undefined4 *)(param_1 + 0x54) = uVar7;
  }
  if ((DAT_123a6798 & 0x100) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x100;
    FUN_100f67b0(L"GuildReputePrize");
  }
  if ((DAT_123a6798 & 0x200) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x200;
    iVar3 = FUN_100e1cb0(DAT_123a67e8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a67ec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a67e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a67ec);
    *(undefined4 *)(param_1 + 0x58) = uVar7;
  }
  if ((DAT_123a6798 & 0x400) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x400;
    FUN_100f67b0(L"GuildArenaPrize");
  }
  if ((DAT_123a6798 & 0x800) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x800;
    iVar3 = FUN_100e1cb0(DAT_123a67fc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6800);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a67fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a6800);
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
  }
  if ((DAT_123a6798 & 0x1000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x1000;
    FUN_100f67b0(L"GoldPrize");
  }
  if ((DAT_123a6798 & 0x2000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x2000;
    iVar3 = FUN_100e1cb0(DAT_123a6810);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6814);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6810);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a6814);
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
  }
  local_410 = local_420;
  local_420[0] = 0;
  local_40c = local_410;
  if ((DAT_123a6798 & 0x4000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x4000;
    FUN_100f67b0(L"ItemsPrize1");
  }
  if ((DAT_123a6798 & 0x8000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x8000;
    iVar3 = FUN_100e1cb0(DAT_123a6824);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6828);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6824);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a6828);
  }
  FUN_11a030e0(local_420);
  if (local_40c != local_410) {
    *local_40c = 0;
    local_410 = local_40c;
  }
  if ((DAT_123a6798 & 0x10000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x10000;
    FUN_100f67b0(L"ItemsPrize2");
  }
  if ((DAT_123a6798 & 0x20000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x20000;
    iVar3 = FUN_100e1cb0(DAT_123a6838);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a683c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6838);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a683c);
  }
  FUN_11a030e0(local_420);
  if (local_40c != local_410) {
    *local_40c = 0;
    local_410 = local_40c;
  }
  if ((DAT_123a6798 & 0x40000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x40000;
    FUN_100f67b0(L"ItemsPrize3");
  }
  if ((DAT_123a6798 & 0x80000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x80000;
    iVar3 = FUN_100e1cb0(DAT_123a684c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6850);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a684c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a6850);
  }
  FUN_11a030e0(local_420);
  if (local_40c != local_410) {
    *local_40c = 0;
    local_410 = local_40c;
  }
  if ((DAT_123a6798 & 0x100000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x100000;
    FUN_100f67b0(L"ItemsPrize4");
  }
  if ((DAT_123a6798 & 0x200000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x200000;
    iVar3 = FUN_100e1cb0(DAT_123a6860);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6864);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6860);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a6864);
  }
  FUN_11a030e0(local_420);
  if (local_40c != local_410) {
    *local_40c = 0;
    local_410 = local_40c;
  }
  if ((DAT_123a6798 & 0x400000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x400000;
    FUN_100f67b0(L"ItemsPrize5");
  }
  if ((DAT_123a6798 & 0x800000) == 0) {
    DAT_123a6798 = DAT_123a6798 | 0x800000;
    iVar3 = FUN_100e1cb0(DAT_123a6874);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a6878);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a6874);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a6878);
  }
  FUN_11a030e0(local_420);
  if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a15280 @ 11a15280  size=1412 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"indexId"
//   u"FriendlyLev"
//   u"DownFriendly"
//   u"TopFriendly"
//   u"name"
//   u"desc"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"indexId""
     "u"FriendlyLev""
     "u"DownFriendly""
     "u"TopFriendly""
     "u"name""
     "u"desc"" */

void __thiscall FUN_11a15280(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a77a8 & 1) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 1;
    FUN_100f67b0(L"indexId");
  }
  if ((DAT_123a77a8 & 2) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a77a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a77ac);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a77a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a77ac);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a77a8 & 4) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 4;
    FUN_100f67b0(L"FriendlyLev");
  }
  if ((DAT_123a77a8 & 8) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a77bc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a77c0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a77bc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a77c0);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a77a8 & 0x10) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x10;
    FUN_100f67b0(L"DownFriendly");
  }
  if ((DAT_123a77a8 & 0x20) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a77d0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a77d4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a77d0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a77d4);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a77a8 & 0x40) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x40;
    FUN_100f67b0(L"TopFriendly");
  }
  if (-1 < (char)DAT_123a77a8) {
    DAT_123a77a8 = DAT_123a77a8 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a77e4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a77e8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a77e4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a77e8);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a77a8 & 0x100) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x100;
    FUN_100f67b0(L"name");
  }
  if ((DAT_123a77a8 & 0x200) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a77f8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a77fc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a77f8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123a77fc);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a77a8 & 0x400) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x400;
    FUN_100f67b0(L"desc");
  }
  if ((DAT_123a77a8 & 0x800) == 0) {
    DAT_123a77a8 = DAT_123a77a8 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a780c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7810);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a780c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  local_410 = local_430;
  local_430[0] = 0;
  local_40c = local_410;
  (**(code **)(*param_2 + 0x28))(local_430,&DAT_123a7810);
  puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
  puVar5 = &DAT_11d9d32b;
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*puVar4;
  }
  CPet__SetName(puVar5);
  FUN_100e5670();
  if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a6afa0 @ 11a6afa0  size=78 ===== */
// calls: CLeagueDetail::GetManagers
// strings:
//   "CLeagueDetail"

/* [RE-AUTO c0]
   calls: CLeagueDetail::GetManagers
   strings:
     ""CLeagueDetail"" */

undefined4 FUN_11a6afa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CLeagueDetail__GetManagers(0,"CLeagueDetail",0);
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



/* ===== FUN_11a6b000 @ 11a6b000  size=78 ===== */
// calls: CLeagueSchedule::GetManagers
// strings:
//   "CLeagueSchedule"

/* [RE-AUTO c0]
   calls: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule"" */

undefined4 FUN_11a6b000(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CLeagueSchedule__GetManagers(0,"CLeagueSchedule",0);
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



/* ===== FUN_11a6c4f0 @ 11a6c4f0  size=78 ===== */
// strings:
//   "CLeagueRoundSchedule"

/* [RE-AUTO c0]
   strings:
     ""CLeagueRoundSchedule"" */

undefined4 FUN_11a6c4f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_108fa510(0,"CLeagueRoundSchedule",0);
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



/* ===== FUN_11a6cdb0 @ 11a6cdb0  size=20 ===== */
// strings:
//   "CLeagueRoundSchedule"

/* [RE-AUTO c0]
   strings:
     ""CLeagueRoundSchedule"" */

void FUN_11a6cdb0(void)

{
  FUN_108fa510(0,"CLeagueRoundSchedule",0);
  return;
}



/* ===== FUN_11a74910 @ 11a74910  size=2130 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"LeagueType"
//   u"LevelID"
//   u"PicturePath"
//   u"PictureDesc"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"LeagueType""
     "u"LevelID""
     "u"PicturePath""
     "u"PictureDesc"" */

void __thiscall FUN_11a74910(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123acf64 & 1) == 0) {
    DAT_123acf64 = DAT_123acf64 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123acf64 & 2) == 0) {
    DAT_123acf64 = DAT_123acf64 | 2;
    iVar2 = FUN_100e1cb0(DAT_123acf60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acf68);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acf60);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123acf68);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123acf64 & 4) == 0) {
    DAT_123acf64 = DAT_123acf64 | 4;
    FUN_100f67b0(L"LeagueType");
  }
  if ((DAT_123acf64 & 8) == 0) {
    DAT_123acf64 = DAT_123acf64 | 8;
    iVar2 = FUN_100e1cb0(DAT_123acf78);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acf7c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acf78);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123acf7c);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123acf64 & 0x10) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x10;
    FUN_100f67b0(L"LevelID");
  }
  if ((DAT_123acf64 & 0x20) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123acf8c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acf90);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acf8c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123acf90);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123acf64 & 0x40) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x40;
    FUN_100f67b0(&DAT_11d72fb8);
  }
  if (-1 < (char)DAT_123acf64) {
    DAT_123acf64 = DAT_123acf64 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123acfa0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acfa4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acfa0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123acfa4);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123acf64 & 0x100) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x100;
    FUN_100f67b0(&DAT_11d72fc4);
  }
  if ((DAT_123acf64 & 0x200) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123acfb4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acfb8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acfb4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123acfb8);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123acf64 & 0x400) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x400;
    FUN_100f67b0(&DAT_11d72fd0);
  }
  if ((DAT_123acf64 & 0x800) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123acfc8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acfcc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acfc8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123acfcc);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123acf64 & 0x1000) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x1000;
    FUN_100f67b0(L"PicturePath");
  }
  if ((DAT_123acf64 & 0x2000) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123acfdc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acfe0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acfdc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123acfe0);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123acf64 & 0x4000) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x4000;
    FUN_100f67b0(L"PictureDesc");
  }
  if ((DAT_123acf64 & 0x8000) == 0) {
    DAT_123acf64 = DAT_123acf64 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123acff0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123acff4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123acff0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  local_410 = local_430;
  local_430[0] = 0;
  local_40c = local_410;
  (**(code **)(*param_2 + 0x28))(local_430,&DAT_123acff4);
  puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
  puVar5 = &DAT_11d9d32b;
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*puVar4;
  }
  CPet__SetName(puVar5);
  FUN_100e5670();
  if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



