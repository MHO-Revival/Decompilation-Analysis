/* ===== FUN_11826f60 @ 11826f60  size=85 ===== */
// calls: CLevelCatExtRewardCfgInfo::FindInfoByKey
// strings:
//   "CLevelCatExtRewardCfgInfo"

/* [RE-AUTO c0]
   calls: CLevelCatExtRewardCfgInfo::GetManagers
   strings:
     ""CLevelCatExtRewardCfgInfo"" */

undefined4 FUN_11826f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CLevelCatExtRewardCfgInfo__FindInfoByKey(0,"CLevelCatExtRewardCfgInfo",0);
  iVar3 = param_1 / 100000 - *(int *)(iVar1 + 0x24);
  if (((-1 < iVar3) && (iVar3 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + iVar3 * 4) != 0)) {
    uVar2 = FUN_11826c90(param_1);
    return uVar2;
  }
  return 0;
}



/* ===== FUN_11826fc0 @ 11826fc0  size=32 ===== */
// calls: CLevelCatExtRewardCfgInfo::FindInfoByKey
// strings:
//   "CLevelCatExtRewardCfgInfo"

/* [RE-AUTO c0]
   calls: CLevelCatExtRewardCfgInfo::GetManagers
   strings:
     ""CLevelCatExtRewardCfgInfo"" */

void FUN_11826fc0(undefined4 param_1)

{
  CLevelCatExtRewardCfgInfo__FindInfoByKey(0,"CLevelCatExtRewardCfgInfo",0);
  FUN_11826d40(param_1);
  return;
}



/* ===== FUN_11827070 @ 11827070  size=52 ===== */
// strings:
//   "CLevelRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLevelRewardInfo"" */

undefined4 FUN_11827070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1097c5c0(0,"CLevelRewardInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLeagueRewardSchedule::GetManagers @ 11844120  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueRewardSchedule::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueRewardSchedule::GetManagers
   strings:
     ""CLeagueRewardSchedule::GetManagers"" */

undefined4 * CLeagueRewardSchedule__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4ef64;
  if (param_3 == 0) {
    if ((DAT_12398160 & 1) == 0) {
      DAT_12398160 = DAT_12398160 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRewardSchedule::GetManagers");
      FUN_11a8911f(&LAB_11cad280);
    }
    if ((undefined4 *)*DAT_12398144 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_12398144;
    }
  }
  puVar1 = (undefined4 *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1239820c & 1) == 0) {
      DAT_1239820c = DAT_1239820c | 1;
      FUN_11845690();
      FUN_11a8911f(&LAB_11cad1c0);
    }
    puVar1 = &DAT_123981d4;
  }
  return puVar1;
}



/* ===== FUN_11845ea0 @ 11845ea0  size=52 ===== */
// calls: CLeagueRewardSchedule::GetManagers
// strings:
//   "CLeagueRewardSchedule"

/* [RE-AUTO c0]
   calls: CLeagueRewardSchedule::GetManagers
   strings:
     ""CLeagueRewardSchedule"" */

undefined4 FUN_11845ea0(int param_1)

{
  int iVar1;
  
  iVar1 = CLeagueRewardSchedule__GetManagers(0,"CLeagueRewardSchedule",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLeagueRewardSchedule::GetManagers_11845f00 @ 11845f00  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CLeagueRewardSchedule::GetManagers"

/* [RE-AUTO c3]
   id: CLeagueRewardSchedule::GetManagers
   strings:
     ""CLeagueRewardSchedule::GetManagers"" */

undefined4 CLeagueRewardSchedule__GetManagers_11845f00(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12398160 & 1) == 0) {
      DAT_12398160 = DAT_12398160 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRewardSchedule::GetManagers");
      FUN_11a8911f(&LAB_11cad280);
    }
    return *DAT_12398144;
  }
  return 0;
}



/* ===== CLeagueRoundSchedule::GetManagers_11846750 @ 11846750  size=1709 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueInfo"
//   "CLeagueRoundSchedule"
//   "CLeagueRoundSchedule::GetManagers"
//   "CLeagueRewardSchedule::GetManagers"
//   "CLeagueRewardSchedule"
//   "StcMbrNameSvr<class CInfoManager>::GetSingletonName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRoundSchedule::GetManagers
   strings:
     ""CLeagueInfo""
     ""CLeagueRoundSchedule""
     ""CLeagueRoundSchedule::GetManagers""
     ""CLeagueRewardSchedule::GetManagers""
     ""CLeagueRewardSchedule""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __fastcall CLeagueRoundSchedule__GetManagers_11846750(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined4 local_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int local_24;
  undefined1 local_20;
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  FUN_104eec00(0,"CLeagueInfo",0);
  puStack_2c = &local_34;
  local_24 = 0;
  local_34 = 0;
  puStack_30 = (undefined4 *)0x0;
  local_20 = local_5;
  puStack_28 = puStack_2c;
  piVar2 = (int *)FUN_108fa510(0,"CLeagueRoundSchedule",0);
  local_14 = (**(code **)(*piVar2 + 0x28))();
  local_10 = 0;
  if (0 < local_14) {
    do {
      iVar6 = local_10;
      local_c = &PTR_FUN_11dd7740;
      if ((DAT_123bfc68 & 1) == 0) {
        DAT_123bfc68 = DAT_123bfc68 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRoundSchedule::GetManagers");
        FUN_11a8911f(&LAB_11c767c0);
      }
      puVar3 = (undefined4 *)*DAT_123bfc4c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)CInfoManager__FindByName(&local_c,"CLeagueRoundSchedule",0),
         puVar3 == (undefined4 *)0x0)) {
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
          DAT_123bfb8c = puVar3;
          _DAT_123bfb90 = puVar3;
          _DAT_123bfb94 = puVar3;
          FUN_11a8911f(&LAB_11cad220);
        }
        puVar3 = &DAT_123bfb84;
      }
      if ((iVar6 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar6)) {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        ppuVar11 = *(undefined ***)(puVar3[5] + iVar6 * 4);
      }
      local_c = ppuVar11;
      if ((ppuVar11 != (undefined **)0x0) &&
         (puVar4 = (undefined *)(**(code **)(*param_1 + 0x18))(), ppuVar11[5] == puVar4)) {
        puVar3 = &local_34;
        if (puStack_30 != (undefined4 *)0x0) {
          puVar8 = puStack_30;
          do {
            if ((int)puVar8[4] < (int)ppuVar11[6]) {
              puVar9 = (undefined4 *)puVar8[3];
            }
            else {
              puVar9 = (undefined4 *)puVar8[2];
              puVar3 = puVar8;
            }
            puVar8 = puVar9;
          } while (puVar9 != (undefined4 *)0x0);
          if ((puVar3 != &local_34) && ((int)puVar3[4] <= (int)ppuVar11[6])) goto LAB_11846948;
        }
        FUN_10a1a390(param_1 + 0x14);
        FUN_10a1a3c0(param_1 + 0x20);
        FUN_10467580(local_1c,ppuVar11 + 6);
        piVar2 = (int *)param_1[0x2d];
        if (piVar2 == (int *)param_1[0x2e]) {
          FUN_11847150(piVar2,&local_c,&local_5,1,1);
        }
        else {
          *piVar2 = (int)ppuVar11;
          param_1[0x2d] = param_1[0x2d] + 4;
        }
      }
LAB_11846948:
      local_10 = local_10 + 1;
    } while (local_10 < local_14);
  }
  iVar6 = param_1[0x2d];
  iVar10 = param_1[0x2c];
  local_10 = iVar6;
  if (iVar10 != iVar6) {
    iVar7 = 0;
    local_14 = iVar6 - iVar10 >> 2;
    for (iVar5 = local_14; iVar5 != 1; iVar5 = iVar5 >> 1) {
      iVar7 = iVar7 + 1;
    }
    FUN_118447c0(iVar10,iVar6,0,iVar7 * 2,FUN_11847310);
    if (local_14 < 0x11) {
      FUN_11844630(iVar10,iVar6,0,FUN_11847310);
    }
    else {
      FUN_11844630(iVar10,iVar10 + 0x40,0,FUN_11847310);
      FUN_11845110(iVar10 + 0x40,local_10,0,FUN_11847310);
    }
  }
  iVar10 = 0;
  iVar6 = param_1[0x2d] - param_1[0x2c] >> 2;
  if (iVar6 != 1 && -1 < iVar6 + -1) {
    do {
      FUN_10a1a360(*(int *)(param_1[0x2c] + iVar10 * 4 + 4) + 0x50);
      FUN_10a1a390(*(int *)(param_1[0x2c] + iVar10 * 4 + 4) + 0x50);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (param_1[0x2d] - param_1[0x2c] >> 2) + -1);
  }
  puVar3 = puStack_30;
  if (local_24 != 0) {
    while (puVar3 != (undefined4 *)0x0) {
      FUN_10463ae0(puVar3[3]);
      puVar8 = (undefined4 *)puVar3[2];
      FUN_10c3d5d0(puVar3);
      puVar3 = puVar8;
    }
  }
  local_c = &PTR_FUN_11d4ef64;
  if ((DAT_12398160 & 1) == 0) {
    DAT_12398160 = DAT_12398160 | 1;
    StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRewardSchedule::GetManagers");
    FUN_11a8911f(&LAB_11cad280);
  }
  piVar2 = (int *)*DAT_12398144;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)CInfoManager__FindByName(&local_c,"CLeagueRewardSchedule",0),
     piVar2 == (int *)0x0)) {
    if ((DAT_1239820c & 1) == 0) {
      DAT_123981d8 = 0;
      DAT_123981e8 = 0;
      DAT_123981ec = 0;
      _DAT_123981f0 = 0;
      uRam123981f4 = 0;
      DAT_1239820c = DAT_1239820c | 1;
      DAT_123981d4 = &PTR_FUN_11d4efa8;
      _DAT_123981f8 = _DAT_11de9ae0;
      uRam123981fc = _UNK_11de9ae4;
      uRam12398200 = _UNK_11de9ae8;
      uRam12398204 = _UNK_11de9aec;
      DAT_12398208 = 1;
      DAT_123981dc = piVar2;
      _DAT_123981e0 = piVar2;
      _DAT_123981e4 = piVar2;
      FUN_11a8911f(&LAB_11cad1c0);
    }
    piVar2 = (int *)&DAT_123981d4;
  }
  local_c = &PTR_FUN_11da54a8;
  local_10 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < local_10) {
    do {
      local_c = &PTR_FUN_11d4ef64;
      if ((DAT_12398160 & 1) == 0) {
        DAT_12398160 = DAT_12398160 | 1;
        _DAT_12398158 = &DAT_12398148;
        DAT_1239815c = &DAT_12398148;
        DAT_12398148 = 0;
        FUN_100d9260("CLeagueRewardSchedule::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_12398144 = (undefined4 *)FUN_100dfd90(DAT_1239815c);
        if (DAT_12398144 == (undefined4 *)0x0) {
          DAT_12398144 = (undefined4 *)FUN_100dde50(4);
          *DAT_12398144 = 0;
          FUN_100dfdc0(DAT_1239815c,DAT_12398144);
        }
        FUN_11a8911f(&LAB_11cad280);
      }
      piVar2 = (int *)*DAT_12398144;
      if ((piVar2 == (int *)0x0) &&
         (piVar2 = (int *)CInfoManager__FindByName(&local_c,"CLeagueRewardSchedule",0),
         piVar2 == (int *)0x0)) {
        if ((DAT_1239820c & 1) == 0) {
          DAT_123981d8 = 0;
          DAT_123981e8 = 0;
          DAT_123981ec = 0;
          _DAT_123981f0 = 0;
          uRam123981f4 = 0;
          DAT_1239820c = DAT_1239820c | 1;
          DAT_123981d4 = &PTR_FUN_11d4efa8;
          _DAT_123981f8 = _DAT_11de9ae0;
          uRam123981fc = _UNK_11de9ae4;
          uRam12398200 = _UNK_11de9ae8;
          uRam12398204 = _UNK_11de9aec;
          DAT_12398208 = 1;
          DAT_123981dc = piVar2;
          _DAT_123981e0 = piVar2;
          _DAT_123981e4 = piVar2;
          FUN_11a8911f(&LAB_11cad1c0);
        }
        piVar2 = (int *)&DAT_123981d4;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar6 < 0) || (piVar2[6] - piVar2[5] >> 2 <= iVar6)) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(piVar2[5] + iVar6 * 4);
      }
      local_14 = iVar10;
      if (((iVar10 != 0) && (*(int *)(iVar10 + 0x14) == param_1[5])) &&
         (cVar1 = FUN_118b2170(param_1[6]), cVar1 != '\0')) {
        if ((param_1[5] != 4) && (cVar1 = FUN_10a1a390(param_1 + 0x14), cVar1 != '\0')) {
          FUN_10a1a3c0(param_1 + 0x20);
        }
        piVar2 = (int *)param_1[0x30];
        if (piVar2 == (int *)param_1[0x31]) {
          FUN_11847030(piVar2,&local_14,&local_5,1,1);
        }
        else {
          *piVar2 = iVar10;
          param_1[0x30] = param_1[0x30] + 4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_10);
  }
  if (param_1[5] != 4) {
    local_10 = param_1[0x30];
    iVar6 = param_1[0x2f];
    if (iVar6 != local_10) {
      iVar10 = 0;
      iVar5 = local_10 - iVar6 >> 2;
      for (iVar7 = iVar5; iVar7 != 1; iVar7 = iVar7 >> 1) {
        iVar10 = iVar10 + 1;
      }
      FUN_118446d0(iVar6,local_10,0,iVar10 * 2,FUN_118472f0);
      if (iVar5 < 0x11) {
        FUN_11844590(iVar6,local_10,0,FUN_118472f0);
      }
      else {
        FUN_11844590(iVar6,iVar6 + 0x40,0,FUN_118472f0);
        FUN_118450a0(iVar6 + 0x40,local_10,0,FUN_118472f0);
      }
    }
    iVar10 = 0;
    iVar6 = param_1[0x30] - param_1[0x2f] >> 2;
    if (iVar6 != 1 && -1 < iVar6 + -1) {
      do {
        FUN_10a1a360(*(int *)(param_1[0x2f] + iVar10 * 4 + 4) + 0x40);
        FUN_10a1a390(*(int *)(param_1[0x2f] + iVar10 * 4 + 4) + 0x40);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (param_1[0x30] - param_1[0x2f] >> 2) + -1);
    }
  }
  return;
}



/* ===== FUN_11848010 @ 11848010  size=64 ===== */
// strings:
//   "FirstLoginAddExp"

/* [RE-AUTO c0]
   strings:
     ""FirstLoginAddExp"" */

void __fastcall FUN_11848010(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d4f068;
  local_c = local_10;
  FUN_100b62c0("FirstLoginAddExp","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_118514b0 @ 118514b0  size=78 ===== */
// calls: CEquipEnchaseRuleInfo::FindInfoByKey
// strings:
//   "CEquipEnchaseRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipEnchaseRuleInfo::GetManagers
   strings:
     ""CEquipEnchaseRuleInfo"" */

undefined4 FUN_118514b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnchaseRuleInfo__FindInfoByKey(0,"CEquipEnchaseRuleInfo",0);
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



/* ===== FUN_11851500 @ 11851500  size=78 ===== */
// calls: CEquipEnforceRuleInfo::FindInfoByKey
// strings:
//   "CEquipEnforceRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipEnforceRuleInfo::GetManagers
   strings:
     ""CEquipEnforceRuleInfo"" */

undefined4 FUN_11851500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceRuleInfo__FindInfoByKey(0,"CEquipEnforceRuleInfo",0);
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



/* ===== FUN_11852330 @ 11852330  size=93 ===== */
// calls: CEquipEnchaseRuleInfo::FindInfoByKey
// strings:
//   "CEquipEnchaseRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipEnchaseRuleInfo::GetManagers
   strings:
     ""CEquipEnchaseRuleInfo"" */

undefined4 __fastcall FUN_11852330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar2 = CEquipEnchaseRuleInfo__FindInfoByKey(0,"CEquipEnchaseRuleInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      uVar3 = FUN_11852170();
      return uVar3;
    }
  }
  return 0;
}



/* ===== FUN_11852450 @ 11852450  size=86 ===== */
// calls: CEquipEnforceRuleInfo::FindInfoByKey
// strings:
//   "CEquipEnforceRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipEnforceRuleInfo::GetManagers
   strings:
     ""CEquipEnforceRuleInfo"" */

undefined4 __fastcall FUN_11852450(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = CEquipEnforceRuleInfo__FindInfoByKey(0,"CEquipEnforceRuleInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      uVar3 = FUN_11852390();
      return uVar3;
    }
  }
  return 0;
}



/* ===== FUN_11854570 @ 11854570  size=302 ===== */
// calls: CEquipRandBaseItemRuleInfo::FindInfoByKey, CWeaponWakeUpRandRuleInfo::FindInfoByKey, CEquipEnforceRuleInfo::FindInfoByKey
// strings:
//   "CEquipRandBaseItemRuleInfo"
//   "CWeaponWakeUpRandRuleInfo"
//   "CEquipEnforceRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipRandBaseItemRuleInfo::GetManagers, CWeaponWakeUpRandRuleInfo::GetManagers,
   CEquipEnforceRuleInfo::GetManagers
   strings:
     ""CEquipRandBaseItemRuleInfo""
     ""CWeaponWakeUpRandRuleInfo""
     ""CEquipEnforceRuleInfo"" */

void __fastcall FUN_11854570(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = CEquipRandBaseItemRuleInfo__FindInfoByKey(0,"CEquipRandBaseItemRuleInfo",0);
  if ((iVar3 == -1) ||
     ((((iVar3 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)) ||
      ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3))))))
  {
LAB_118545be:
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_118545be;
    iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
  }
  if ((0 < *(int *)(param_1 + 0x24)) && (iVar3 == 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = CWeaponWakeUpRandRuleInfo__FindInfoByKey(0,"CWeaponWakeUpRandRuleInfo",0);
  if (((iVar3 == -1) ||
      (((iVar3 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)))) ||
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))) {
LAB_11854617:
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_11854617;
    iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
  }
  if ((0 < *(int *)(param_1 + 0x28)) && (iVar3 == 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar2 = CEquipEnforceRuleInfo__FindInfoByKey(0,"CEquipEnforceRuleInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
      goto LAB_1185466e;
    }
  }
  iVar3 = 0;
LAB_1185466e:
  if (((*(int *)(param_1 + 0x2c) < 1) || (iVar3 != 0)) &&
     ((iVar3 = FUN_11851550(*(undefined4 *)(param_1 + 0x34)), *(int *)(param_1 + 0x34) < 1 ||
      (iVar3 != 0)))) {
    FUN_118514b0(*(undefined4 *)(param_1 + 0x30));
  }
  return;
}



/* ===== FUN_118b27a0 @ 118b27a0  size=34 ===== */
// strings:
//   "CLeagueInfo"
//   "CLeagueRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLeagueInfo""
     ""CLeagueRewardInfo"" */

void FUN_118b27a0(void)

{
  FUN_104eec00(0,"CLeagueInfo",0);
  FUN_109500a0(0,"CLeagueRewardInfo",0);
  return;
}



/* ===== FUN_118e6fc0 @ 118e6fc0  size=52 ===== */
// calls: CAdditionLevelRewardInfo::GetInfoManager
// strings:
//   "CAdditionLevelRewardInfo"

/* [RE-AUTO c0]
   calls: CAdditionLevelRewardInfo::GetManagers
   strings:
     ""CAdditionLevelRewardInfo"" */

undefined4 FUN_118e6fc0(int param_1)

{
  int iVar1;
  
  iVar1 = CAdditionLevelRewardInfo__GetInfoManager(0,"CAdditionLevelRewardInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_118f3ff0 @ 118f3ff0  size=132 ===== */
// strings:
//   u"LevelUp"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"LevelUp"" */

undefined * __thiscall FUN_118f3ff0(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239e21c & 1) == 0) {
    DAT_1239e21c = DAT_1239e21c | 1;
    FUN_100f67b0(L"LevelUp");
    _DAT_1239e1fc = 0x5f;
    _DAT_1239e204 = 0;
    _DAT_1239e208 = 0;
    _DAT_1239e20c = 0;
    _DAT_1239e210 = 0;
    _DAT_1239e214 = 0;
    _DAT_1239e218 = 0;
    _DAT_1239e200 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239e1fc;
}



/* ===== FUN_118f4640 @ 118f4640  size=132 ===== */
// strings:
//   u"VIPLevelUp"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"VIPLevelUp"" */

undefined * __thiscall FUN_118f4640(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239e248 & 1) == 0) {
    DAT_1239e248 = DAT_1239e248 | 1;
    FUN_100f67b0(L"VIPLevelUp");
    _DAT_1239e228 = 0x60;
    _DAT_1239e230 = 0;
    _DAT_1239e234 = 0;
    _DAT_1239e238 = 0;
    _DAT_1239e23c = 0;
    _DAT_1239e240 = 0;
    _DAT_1239e244 = 0;
    _DAT_1239e22c = param_1;
  }
  *param_2 = 1;
  return &DAT_1239e228;
}



/* ===== FUN_1190ae70 @ 1190ae70  size=52 ===== */
// strings:
//   "CGuildLevelUpInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildLevelUpInfo"" */

undefined4 FUN_1190ae70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_108b8120(0,"CGuildLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119167f0 @ 119167f0  size=52 ===== */
// calls: CEquipLevelUpInfo::GetInfoManager
// strings:
//   "CEquipLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo"" */

undefined4 FUN_119167f0(int param_1)

{
  int iVar1;
  
  iVar1 = CEquipLevelUpInfo__GetInfoManager(0,"CEquipLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11916850 @ 11916850  size=52 ===== */
// calls: CEquipQuickLevelUpInfo::GetInfoManager
// strings:
//   "CEquipQuickLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo"" */

undefined4 FUN_11916850(int param_1)

{
  int iVar1;
  
  iVar1 = CEquipQuickLevelUpInfo__GetInfoManager(0,"CEquipQuickLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1191c470 @ 1191c470  size=52 ===== */
// calls: CEquipEnforceTransferInfo::GetInfoManager
// strings:
//   "CEquipEnforceTransferInfo"

/* [RE-AUTO c0]
   calls: CEquipEnforceTransferInfo::GetManagers
   strings:
     ""CEquipEnforceTransferInfo"" */

undefined4 FUN_1191c470(int param_1)

{
  int iVar1;
  
  iVar1 = CEquipEnforceTransferInfo__GetInfoManager(0,"CEquipEnforceTransferInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1191c4d0 @ 1191c4d0  size=52 ===== */
// calls: CEquipQuenchRuleInfo::GetInfoManager
// strings:
//   "CEquipQuenchRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo"" */

undefined4 FUN_1191c4d0(int param_1)

{
  int iVar1;
  
  iVar1 = CEquipQuenchRuleInfo__GetInfoManager(0,"CEquipQuenchRuleInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1191c5c0 @ 1191c5c0  size=132 ===== */
// strings:
//   u"enforcetransfer"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"enforcetransfer"" */

undefined * __thiscall FUN_1191c5c0(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239f104 & 1) == 0) {
    DAT_1239f104 = DAT_1239f104 | 1;
    FUN_100f67b0(L"enforcetransfer");
    _DAT_1239f0e4 = 0x9e;
    _DAT_1239f0ec = 0;
    _DAT_1239f0f0 = 0;
    _DAT_1239f0f4 = 0;
    _DAT_1239f0f8 = 0;
    _DAT_1239f0fc = 0;
    _DAT_1239f100 = 0;
    _DAT_1239f0e8 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239f0e4;
}



/* ===== FUN_1195c4b0 @ 1195c4b0  size=132 ===== */
// strings:
//   u"RankReward"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"RankReward"" */

undefined * __thiscall FUN_1195c4b0(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a08b8 & 1) == 0) {
    DAT_123a08b8 = DAT_123a08b8 | 1;
    FUN_100f67b0(L"RankReward");
    _DAT_123a0898 = 0x113;
    _DAT_123a08a0 = 0;
    _DAT_123a08a4 = 0;
    _DAT_123a08a8 = 0;
    _DAT_123a08ac = 0;
    _DAT_123a08b0 = 0;
    _DAT_123a08b4 = 0;
    _DAT_123a089c = param_1;
  }
  *param_2 = 1;
  return &DAT_123a0898;
}



/* ===== FUN_11970b00 @ 11970b00  size=52 ===== */
// calls: CFinalGuildMatchRewardInfo::GetInfoManager
// strings:
//   "CFinalGuildMatchRewardInfo"

/* [RE-AUTO c0]
   calls: CFinalGuildMatchRewardInfo::GetManagers
   strings:
     ""CFinalGuildMatchRewardInfo"" */

undefined4 FUN_11970b00(int param_1)

{
  int iVar1;
  
  iVar1 = CFinalGuildMatchRewardInfo__GetInfoManager(0,"CFinalGuildMatchRewardInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11970b60 @ 11970b60  size=52 ===== */
// calls: CGuildMatchRewardInfo::GetInfoManager
// strings:
//   "CGuildMatchRewardInfo"

/* [RE-AUTO c0]
   calls: CGuildMatchRewardInfo::GetManagers
   strings:
     ""CGuildMatchRewardInfo"" */

undefined4 FUN_11970b60(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildMatchRewardInfo__GetInfoManager(0,"CGuildMatchRewardInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119753f0 @ 119753f0  size=52 ===== */
// strings:
//   "CEquipUpgradeInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipUpgradeInfo"" */

undefined4 FUN_119753f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10804460(0,"CEquipUpgradeInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1197dfd0 @ 1197dfd0  size=52 ===== */
// calls: CItemDecomposeInfo::GetInfoMgrByName
// strings:
//   "CItemDecomposeInfo"

/* [RE-AUTO c0]
   calls: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo"" */

undefined4 FUN_1197dfd0(int param_1)

{
  int iVar1;
  
  iVar1 = CItemDecomposeInfo__GetInfoMgrByName(0,"CItemDecomposeInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119869a0 @ 119869a0  size=145 ===== */
// calls: CPlayerLvAppraisalRewardInfo::FindInfoByKey
// strings:
//   "CPlayerLvAppraisalRewardInfo"

/* [RE-AUTO c0]
   calls: CPlayerLvAppraisalRewardInfo::GetManagers
   strings:
     ""CPlayerLvAppraisalRewardInfo"" */

int * FUN_119869a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = CPlayerLvAppraisalRewardInfo__FindInfoByKey(0,"CPlayerLvAppraisalRewardInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      piVar3 = *(int **)(iVar2 + 0x14);
      piVar4 = (int *)(iVar2 + 0x14);
      if (piVar3 != piVar4) {
        do {
          if (piVar3[2] == param_2) break;
          piVar3 = (int *)*piVar3;
        } while (piVar3 != piVar4);
        if (piVar3 != piVar4) {
          for (piVar4 = (int *)piVar3[3]; piVar4 != piVar3 + 3; piVar4 = (int *)*piVar4) {
            if (param_3 <= piVar4[2]) {
              return piVar4 + 3;
            }
          }
        }
      }
    }
  }
  return (int *)0x0;
}



/* ===== FUN_11986bb0 @ 11986bb0  size=78 ===== */
// calls: CPlayerLvAppraisalRewardInfo::FindInfoByKey
// strings:
//   "CPlayerLvAppraisalRewardInfo"

/* [RE-AUTO c0]
   calls: CPlayerLvAppraisalRewardInfo::GetManagers
   strings:
     ""CPlayerLvAppraisalRewardInfo"" */

undefined4 FUN_11986bb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPlayerLvAppraisalRewardInfo__FindInfoByKey(0,"CPlayerLvAppraisalRewardInfo",0);
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



/* ===== FUN_119a08b0 @ 119a08b0  size=52 ===== */
// strings:
//   "CLeagueRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLeagueRewardInfo"" */

undefined4 FUN_119a08b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109500a0(0,"CLeagueRewardInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLeagueRewardSchedule::GetManagers_119a1880 @ 119a1880  size=297 ===== */
// calls: CLeagueRewardSchedule::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLeagueRewardSchedule"
//   "CLeagueRewardSchedule::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRewardSchedule::GetManagers
   calls: CLeagueRewardSchedule::GetManagers
   strings:
     ""CLeagueRewardSchedule""
     ""CLeagueRewardSchedule::GetManagers"" */

void CLeagueRewardSchedule__GetManagers_119a1880(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)CLeagueRewardSchedule__GetManagers(0,"CLeagueRewardSchedule",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d4ef64;
      if ((DAT_12398160 & 1) == 0) {
        DAT_12398160 = DAT_12398160 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLeagueRewardSchedule::GetManagers");
        FUN_11a8911f(&LAB_11cad280);
      }
      puVar4 = (undefined4 *)*DAT_12398144;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)CInfoManager__FindByName(&param_1,"CLeagueRewardSchedule",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_1239820c & 1) == 0) {
          DAT_123981d8 = 0;
          DAT_123981e8 = 0;
          DAT_123981ec = 0;
          _DAT_123981f0 = 0;
          uRam123981f4 = 0;
          DAT_1239820c = DAT_1239820c | 1;
          DAT_123981d4 = &PTR_FUN_11d4efa8;
          _DAT_123981f8 = _DAT_11de9ae0;
          uRam123981fc = _UNK_11de9ae4;
          uRam12398200 = _UNK_11de9ae8;
          uRam12398204 = _UNK_11de9aec;
          DAT_12398208 = 1;
          DAT_123981dc = puVar4;
          _DAT_123981e0 = puVar4;
          _DAT_123981e4 = puVar4;
          FUN_11a8911f(&LAB_11cb3e40);
        }
        puVar4 = &DAT_123981d4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        FUN_118b27a0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* ===== CLegendUpgrade::GetManagers_119cd000 @ 119cd000  size=1047 ===== */
// calls: CLegendUpgrade::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLegendUpgrade"
//   "CLegendUpgrade::GetManagers"
//   "CLegendPearlItemInfo::GetManagers"
//   "CLegendPearlItemInfo"
//   "CItemBaseInfo::GetManagers"
//   "CItemBaseInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLegendUpgrade::GetManagers
   calls: CLegendUpgrade::GetManagers
   strings:
     ""CLegendUpgrade""
     ""CLegendUpgrade::GetManagers""
     ""CLegendPearlItemInfo::GetManagers""
     ""CLegendPearlItemInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void CLegendUpgrade__GetManagers_119cd000(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_14;
  undefined **local_c;
  undefined **local_8;
  
  piVar2 = (int *)CLegendUpgrade__GetManagers(0,"CLegendUpgrade",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  local_14 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d4a848;
      if ((DAT_123945dc & 1) == 0) {
        DAT_123945dc = DAT_123945dc | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendUpgrade::GetManagers");
        FUN_11a8911f(&LAB_11cab2f0);
      }
      puVar4 = (undefined *)*DAT_123945c0;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)CInfoManager__FindByName(&local_8,"CLegendUpgrade",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123947a4 & 1) == 0) {
          DAT_12394770 = 0;
          DAT_12394780 = 0;
          DAT_12394784 = 0;
          _DAT_12394788 = 0;
          uRam1239478c = 0;
          DAT_123947a4 = DAT_123947a4 | 1;
          _DAT_1239476c = &PTR_FUN_11d4a86c;
          _DAT_12394790 = _DAT_11de9ae0;
          uRam12394794 = _UNK_11de9ae4;
          uRam12394798 = _UNK_11de9ae8;
          uRam1239479c = _UNK_11de9aec;
          DAT_123947a0 = 1;
          DAT_12394774 = puVar4;
          _DAT_12394778 = puVar4;
          _DAT_1239477c = puVar4;
          FUN_11a8911f(&LAB_11cb4bc0);
        }
        puVar4 = &DAT_1239476c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < local_14) && (local_14 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2))
          && (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + local_14 * 4), iVar1 != 0)) &&
         (iVar7 = *(int *)(iVar1 + 0x1c), iVar7 != *(int *)(iVar1 + 0x20))) {
        do {
          local_c = &PTR_FUN_11dd0998;
          if ((DAT_123bf864 & 1) == 0) {
            DAT_123bf864 = DAT_123bf864 | 1;
            StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendPearlItemInfo::GetManagers")
            ;
            FUN_11a8911f(&LAB_11c72e60);
          }
          if (((*DAT_123bf868 == 0) &&
              (iVar5 = CInfoManager__FindByName(&local_c,"CLegendPearlItemInfo",0), iVar5 == 0)) &&
             ((DAT_123bf690 & 1) == 0)) {
            DAT_123bf65c = 0;
            DAT_123bf66c = 0;
            uRam123bf670 = 0;
            _DAT_123bf674 = 0;
            DAT_123bf678 = 0;
            DAT_123bf690 = DAT_123bf690 | 1;
            _DAT_123bf658 = &PTR_FUN_11dd0888;
            DAT_123bf67c = _DAT_11de9ae0;
            DAT_123bf680 = _UNK_11de9ae4;
            uRam123bf684 = _UNK_11de9ae8;
            DAT_123bf688 = _UNK_11de9aec;
            DAT_123bf68c = 1;
            DAT_123bf660 = iVar5;
            _DAT_123bf664 = iVar5;
            _DAT_123bf668 = iVar5;
            FUN_11a8911f(&LAB_11cb4b00);
          }
          local_c = &PTR_FUN_11da54a8;
          FUN_117e4e60(iVar1);
          local_c = &PTR_FUN_11dd0998;
          if ((DAT_123bf864 & 1) == 0) {
            DAT_123bf864 = DAT_123bf864 | 1;
            StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendPearlItemInfo::GetManagers")
            ;
            FUN_11a8911f(&LAB_11c72e60);
          }
          if (((*DAT_123bf868 == 0) &&
              (iVar5 = CInfoManager__FindByName(&local_c,"CLegendPearlItemInfo",0), iVar5 == 0)) &&
             ((DAT_123bf690 & 1) == 0)) {
            DAT_123bf65c = 0;
            DAT_123bf66c = 0;
            uRam123bf670 = 0;
            _DAT_123bf674 = 0;
            DAT_123bf678 = 0;
            DAT_123bf690 = DAT_123bf690 | 1;
            DAT_123bf660 = 0;
            _DAT_123bf664 = 0;
            _DAT_123bf668 = 0;
            _DAT_123bf658 = &PTR_FUN_11dd0888;
            DAT_123bf67c = _DAT_11de9ae0;
            DAT_123bf680 = _UNK_11de9ae4;
            uRam123bf684 = _UNK_11de9ae8;
            DAT_123bf688 = _UNK_11de9aec;
            DAT_123bf68c = 1;
            FUN_11a8911f(&LAB_11cb4b00);
          }
          uVar6 = 0;
          if (*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4) >> 3 != 0) {
            do {
              local_c = &PTR_FUN_11da5518;
              if ((DAT_123bdbfc & 1) == 0) {
                DAT_123bdbfc = DAT_123bdbfc | 1;
                StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CItemBaseInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6e610);
              }
              if (((*DAT_123bdba0 == 0) &&
                  (iVar5 = CInfoManager__FindByName(&local_c,"CItemBaseInfo",0), iVar5 == 0)) &&
                 ((DAT_123bdc00 & 1) == 0)) {
                DAT_123bdbc4 = 0;
                DAT_123bdbd4 = 0;
                DAT_123bdbd8 = 0;
                _DAT_123bdbdc = 0;
                DAT_123bdbe0 = 0;
                DAT_123bdc00 = DAT_123bdc00 | 1;
                DAT_123bdbc8 = 0;
                _DAT_123bdbcc = 0;
                _DAT_123bdbd0 = 0;
                DAT_123bdbc0 = &PTR_FUN_11da5520;
                DAT_123bdbe4 = _DAT_11de9ae0;
                DAT_123bdbe8 = _UNK_11de9ae4;
                uRam123bdbec = _UNK_11de9ae8;
                DAT_123bdbf0 = _UNK_11de9aec;
                DAT_123bdbf4 = 1;
                FUN_11a8911f(&LAB_11cb4aa0);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < (uint)(*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4) >> 3));
          }
          iVar7 = iVar7 + 0xb0;
        } while (iVar7 != *(int *)(iVar1 + 0x20));
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar3);
  }
  return;
}



/* ===== FUN_11a2c0b0 @ 11a2c0b0  size=3244 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"layer"
//   u"name"
//   u"modelGroupID"
//   u"time"
//   u"delayStartTime"
//   u"isTriggerStart"
//   u"bindGlod"
//   u"unBingGold"
//   u"dropItemGroupID"
//   u"addPlayerBuffID"
//   u"addBossBuffID"
//   u"IsHaveReward"
//   u"ResouceID"
//   u"MonsterID"
//   u"MonsterNum"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"layer""
     "u"name""
     "u"modelGroupID""
     "u"time""
     "u"delayStartTime""
     "u"isTriggerStart""
     "u"bindGlod""
     "u"unBingGold""
     "u"dropItemGroupID""
     "u"addPlayerBuffID"" */

void __thiscall FUN_11a2c0b0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8d70 & 1) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 1;
    FUN_100f67b0(L"layer");
  }
  if ((DAT_123a8d70 & 2) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8d6c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d74);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8d6c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d74);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123a8d70 & 4) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 4;
    FUN_100f67b0(L"name");
  }
  if ((DAT_123a8d70 & 8) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a8d84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d88);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8d84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123a8d88);
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
  if ((DAT_123a8d70 & 0x10) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x10;
    FUN_100f67b0(L"modelGroupID");
  }
  if ((DAT_123a8d70 & 0x20) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a8d98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8d9c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8d98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8d9c);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  if ((DAT_123a8d70 & 0x40) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x40;
    FUN_100f67b0(L"time");
  }
  if (-1 < (char)DAT_123a8d70) {
    DAT_123a8d70 = DAT_123a8d70 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a8dac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8db0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8dac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8db0);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
  }
  if ((DAT_123a8d70 & 0x100) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x100;
    FUN_100f67b0(L"delayStartTime");
  }
  if ((DAT_123a8d70 & 0x200) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a8dc0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8dc4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8dc0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8dc4);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  if ((DAT_123a8d70 & 0x400) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x400;
    FUN_100f67b0(L"isTriggerStart");
  }
  if ((DAT_123a8d70 & 0x800) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a8dd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8dd8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8dd4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a8dd8);
    *(bool *)(param_1 + 0x24) = iVar2 != 0;
  }
  if ((DAT_123a8d70 & 0x1000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x1000;
    FUN_100f67b0(L"bindGlod");
  }
  if ((DAT_123a8d70 & 0x2000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a8de8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8dec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8de8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8dec);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  if ((DAT_123a8d70 & 0x4000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x4000;
    FUN_100f67b0(L"unBingGold");
  }
  if ((DAT_123a8d70 & 0x8000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a8dfc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e00);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8dfc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e00);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  if ((DAT_123a8d70 & 0x10000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x10000;
    FUN_100f67b0(&DAT_11d6f09c);
  }
  if ((DAT_123a8d70 & 0x20000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a8e10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e14);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e10);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e14);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  if ((DAT_123a8d70 & 0x40000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x40000;
    FUN_100f67b0(L"dropItemGroupID");
  }
  if ((DAT_123a8d70 & 0x80000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a8e24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e28);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e24);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e28);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
  }
  if ((DAT_123a8d70 & 0x100000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x100000;
    FUN_100f67b0(L"addPlayerBuffID");
  }
  if ((DAT_123a8d70 & 0x200000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a8e38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e3c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e38);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e3c);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  if ((DAT_123a8d70 & 0x400000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x400000;
    FUN_100f67b0(L"addBossBuffID");
  }
  if ((DAT_123a8d70 & 0x800000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a8e4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e50);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e4c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e50);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  if ((DAT_123a8d70 & 0x1000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x1000000;
    FUN_100f67b0(L"IsHaveReward");
  }
  if ((DAT_123a8d70 & 0x2000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a8e60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e64);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e60);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e64);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
  }
  if ((DAT_123a8d70 & 0x4000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x4000000;
    FUN_100f67b0(L"ResouceID");
  }
  if ((DAT_123a8d70 & 0x8000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a8e74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e78);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e74);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e78);
    *(undefined4 *)(param_1 + 0x44) = uVar4;
  }
  if ((DAT_123a8d70 & 0x10000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x10000000;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_123a8d70 & 0x20000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a8e88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8e8c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e88);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8e8c);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
  }
  if ((DAT_123a8d70 & 0x40000000) == 0) {
    DAT_123a8d70 = DAT_123a8d70 | 0x40000000;
    FUN_100f67b0(L"MonsterNum");
  }
  if (-1 < (int)DAT_123a8d70) {
    DAT_123a8d70 = DAT_123a8d70 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a8e9c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8ea0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8e9c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a8ea0);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a33fe0 @ 11a33fe0  size=2156 ===== */
// calls: memset
// strings:
//   u"ActivityId"
//   u"LevelId"
//   u"LevelType"
//   u"ExpCoefficient"
//   u"BoundGoldCoefficient"
//   u"GoldCoefficient"
//   u"RegularRewardCoefficient"
//   u"RandomRewardCoefficient"
//   u"MonsterBasicMaterialCoefficient"
//   u"MonsterPartBrokenCoefficient"
//   u"CaptureMaterialCoefficient"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ActivityId""
     "u"LevelId""
     "u"LevelType""
     "u"ExpCoefficient""
     "u"BoundGoldCoefficient""
     "u"GoldCoefficient""
     "u"RegularRewardCoefficient""
     "u"RandomRewardCoefficient""
     "u"MonsterBasicMaterialCoefficient""
     "u"MonsterPartBrokenCoefficient"" */

void __thiscall FUN_11a33fe0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a957c & 1) == 0) {
    DAT_123a957c = DAT_123a957c | 1;
    FUN_100f67b0(L"ActivityId");
  }
  if ((DAT_123a957c & 2) == 0) {
    DAT_123a957c = DAT_123a957c | 2;
    iVar2 = FUN_100e1cb0(DAT_123a9578);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9580);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9578);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9580);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a957c & 4) == 0) {
    DAT_123a957c = DAT_123a957c | 4;
    FUN_100f67b0(L"LevelId");
  }
  if ((DAT_123a957c & 8) == 0) {
    DAT_123a957c = DAT_123a957c | 8;
    iVar2 = FUN_100e1cb0(DAT_123a9590);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9594);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9590);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9594);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a957c & 0x10) == 0) {
    DAT_123a957c = DAT_123a957c | 0x10;
    FUN_100f67b0(L"LevelType");
  }
  if ((DAT_123a957c & 0x20) == 0) {
    DAT_123a957c = DAT_123a957c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a95a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a95a8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a95a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a95a8);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a957c & 0x40) == 0) {
    DAT_123a957c = DAT_123a957c | 0x40;
    FUN_100f67b0(L"ExpCoefficient");
  }
  if (-1 < (char)DAT_123a957c) {
    DAT_123a957c = DAT_123a957c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a95b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a95bc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a95b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a95bc);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a957c & 0x100) == 0) {
    DAT_123a957c = DAT_123a957c | 0x100;
    FUN_100f67b0(L"BoundGoldCoefficient");
  }
  if ((DAT_123a957c & 0x200) == 0) {
    DAT_123a957c = DAT_123a957c | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a95cc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a95d0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a95cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a95d0);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((DAT_123a957c & 0x400) == 0) {
    DAT_123a957c = DAT_123a957c | 0x400;
    FUN_100f67b0(L"GoldCoefficient");
  }
  if ((DAT_123a957c & 0x800) == 0) {
    DAT_123a957c = DAT_123a957c | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a95e0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a95e4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a95e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a95e4);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if ((DAT_123a957c & 0x1000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x1000;
    FUN_100f67b0(L"RegularRewardCoefficient");
  }
  if ((DAT_123a957c & 0x2000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a95f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a95f8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a95f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a95f8);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  if ((DAT_123a957c & 0x4000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x4000;
    FUN_100f67b0(L"RandomRewardCoefficient");
  }
  if ((DAT_123a957c & 0x8000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a9608);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a960c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9608);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a960c);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  if ((DAT_123a957c & 0x10000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x10000;
    FUN_100f67b0(L"MonsterBasicMaterialCoefficient");
  }
  if ((DAT_123a957c & 0x20000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a961c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9620);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a961c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9620);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((DAT_123a957c & 0x40000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x40000;
    FUN_100f67b0(L"MonsterPartBrokenCoefficient");
  }
  if ((DAT_123a957c & 0x80000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a9630);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9634);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9630);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9634);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  if ((DAT_123a957c & 0x100000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x100000;
    FUN_100f67b0(L"CaptureMaterialCoefficient");
  }
  if ((DAT_123a957c & 0x200000) == 0) {
    DAT_123a957c = DAT_123a957c | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a9644);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9648);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9644);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9648);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a3c0f0 @ 11a3c0f0  size=487 ===== */
// calls: memset
// strings:
//   u"RankId"
//   u"RewardId"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"RankId""
     "u"RewardId"" */

void __thiscall FUN_11a3c0f0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_410;
  undefined1 local_409;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a9f48 & 1) == 0) {
    DAT_123a9f48 = DAT_123a9f48 | 1;
    FUN_100f67b0(L"RankId");
  }
  if ((DAT_123a9f48 & 2) == 0) {
    DAT_123a9f48 = DAT_123a9f48 | 2;
    iVar3 = FUN_100e1cb0(DAT_123a9f44);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a9f4c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a9f44);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a9f4c);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  uVar4 = 0;
  local_410 = 0;
  if ((DAT_123a9f48 & 4) == 0) {
    DAT_123a9f48 = DAT_123a9f48 | 4;
    FUN_100f67b0(L"RewardId");
  }
  if ((DAT_123a9f48 & 8) == 0) {
    DAT_123a9f48 = DAT_123a9f48 | 8;
    iVar3 = FUN_100e1cb0(DAT_123a9f5c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123a9f60);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123a9f5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a9f60);
    local_410 = uVar4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 != *(undefined4 **)(param_1 + 0x20)) {
    *puVar1 = uVar4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    FUN_11a89daa();
    return;
  }
  FUN_10463c40(puVar1,&local_410,&local_409,1,1);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a5b1e0 @ 11a5b1e0  size=78 ===== */
// calls: CPlayerLvRewardMiniGroupInfo::GetInfoManager
// strings:
//   "CPlayerLvRewardMiniGroupInfo"

/* [RE-AUTO c0]
   calls: CPlayerLvRewardMiniGroupInfo::GetManagers
   strings:
     ""CPlayerLvRewardMiniGroupInfo"" */

undefined4 FUN_11a5b1e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPlayerLvRewardMiniGroupInfo__GetInfoManager(0,"CPlayerLvRewardMiniGroupInfo",0);
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



/* ===== FUN_11a68990 @ 11a68990  size=1412 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"CurrencyID"
//   u"AttrID"
//   u"Name"
//   u"Icon"
//   u"Tips"
//   u"SPId"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"CurrencyID""
     "u"AttrID""
     "u"Name""
     "u"Icon""
     "u"Tips""
     "u"SPId"" */

void __thiscall FUN_11a68990(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123ac650 & 1) == 0) {
    DAT_123ac650 = DAT_123ac650 | 1;
    FUN_100f67b0(L"CurrencyID");
  }
  if ((DAT_123ac650 & 2) == 0) {
    DAT_123ac650 = DAT_123ac650 | 2;
    iVar2 = FUN_100e1cb0(DAT_123ac64c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac654);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac64c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123ac654);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123ac650 & 4) == 0) {
    DAT_123ac650 = DAT_123ac650 | 4;
    FUN_100f67b0(L"AttrID");
  }
  if ((DAT_123ac650 & 8) == 0) {
    DAT_123ac650 = DAT_123ac650 | 8;
    iVar2 = FUN_100e1cb0(DAT_123ac664);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac668);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac664);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123ac668);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_123ac650 & 0x10) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x10;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123ac650 & 0x20) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123ac678);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac67c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac678);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123ac67c);
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
  if ((DAT_123ac650 & 0x40) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x40;
    FUN_100f67b0(L"Icon");
  }
  if (-1 < (char)DAT_123ac650) {
    DAT_123ac650 = DAT_123ac650 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123ac68c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac690);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac68c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x1c,&DAT_123ac690);
  }
  if ((DAT_123ac650 & 0x100) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x100;
    FUN_100f67b0(L"Tips");
  }
  if ((DAT_123ac650 & 0x200) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123ac6a0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac6a4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac6a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123ac6a4);
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
  if ((DAT_123ac650 & 0x400) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x400;
    FUN_100f67b0(L"SPId");
  }
  if ((DAT_123ac650 & 0x800) == 0) {
    DAT_123ac650 = DAT_123ac650 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123ac6b4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac6b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac6b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123ac6b8);
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  FUN_11a89daa();
  return;
}



