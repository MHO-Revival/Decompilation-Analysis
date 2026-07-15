/* ===== FUN_11599830 @ 11599830  size=164 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

void FUN_11599830(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_1166c4b0();
  cVar2 = FUN_116c5290();
  if (cVar2 == '\0') {
    FUN_1166c4b0();
    cVar2 = FUN_116c51f0();
    if (cVar2 == '\0') {
      FUN_1166c4b0();
      FUN_116c5260();
    }
  }
  iVar3 = FUN_1166c400();
  iVar3 = iVar3 + 1;
  FUN_1166c4b0();
  iVar4 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
      *param_2 = *(undefined4 *)(iVar3 + 0xac);
    }
  }
  return;
}



/* ===== FUN_115998e0 @ 115998e0  size=177 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

void FUN_115998e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_1166c4b0();
  cVar2 = FUN_116c5290();
  if (cVar2 == '\0') {
    FUN_1166c4b0();
    cVar2 = FUN_116c51f0();
    if (cVar2 == '\0') {
      FUN_1166c4b0();
      FUN_116c5260();
    }
  }
  iVar3 = FUN_1166c400();
  iVar3 = iVar3 + 1;
  FUN_1166c4b0();
  iVar4 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
      *param_3 = *(undefined4 *)(iVar3 + 0xb8);
      *param_2 = *(undefined4 *)(iVar3 + 0xb4);
    }
  }
  return;
}



/* ===== FUN_115999a0 @ 115999a0  size=199 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

void FUN_115999a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_1166c4b0();
  cVar2 = FUN_116c5290();
  if (cVar2 == '\0') {
    FUN_1166c4b0();
    cVar2 = FUN_116c51f0();
    if (cVar2 == '\0') {
      FUN_1166c4b0();
      FUN_116c5260();
    }
  }
  iVar3 = FUN_1166c400();
  iVar3 = iVar3 + 1;
  FUN_1166c4b0();
  iVar4 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
      *param_2 = *(undefined4 *)(iVar3 + 0xa4);
      *param_3 = *(undefined4 *)(iVar3 + 0xa8);
      *param_4 = *(undefined4 *)(iVar3 + 0xbc);
      *param_5 = *(undefined4 *)(iVar3 + 0xc0);
    }
  }
  return;
}



/* ===== FUN_11599a70 @ 11599a70  size=226 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* WARNING: Removing unreachable block (ram,0x11599add) */
/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

int FUN_11599a70(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_1166c4b0();
  cVar2 = FUN_116c5290();
  if (cVar2 == '\0') {
    FUN_1166c4b0();
    cVar2 = FUN_116c51f0();
    if (cVar2 == '\0') {
      FUN_1166c4b0();
      FUN_116c5260();
    }
  }
  iVar3 = FUN_1166c400();
  iVar3 = iVar3 + 1;
  FUN_1166c4b0();
  iVar4 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if ((iVar3 == -1) ||
     (((iVar3 == 0 && (*(int *)(iVar4 + 0x30) != 0)) || (iVar1 = *(int *)(iVar4 + 0x28), iVar1 == 0)
      ))) {
    return 0;
  }
  iVar3 = iVar3 - *(int *)(iVar4 + 0x30);
  if ((-1 < iVar3) && (iVar3 < *(int *)(iVar4 + 0x24))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4);
      goto LAB_11599b15;
    }
  }
  iVar3 = 0;
LAB_11599b15:
  iVar4 = 0;
  if (iVar3 != 0) {
    if (0 < param_2) {
      iVar3 = *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb0);
      if (100 < iVar3) {
        iVar3 = 100;
      }
      return iVar3;
    }
    iVar4 = *(int *)(iVar3 + 0xb0);
  }
  if (100 < iVar4) {
    iVar4 = 100;
  }
  return iVar4;
}



/* ===== FUN_11599ce0 @ 11599ce0  size=78 ===== */
// calls: CEquipQuickLevelUpInfo::GetInfoManager
// strings:
//   "CEquipQuickLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo"" */

undefined4 FUN_11599ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipQuickLevelUpInfo__GetInfoManager(0,"CEquipQuickLevelUpInfo",0);
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



/* ===== FUN_11599df0 @ 11599df0  size=78 ===== */
// calls: CItemDecomposeInfo::GetInfoMgrByName
// strings:
//   "CItemDecomposeInfo"

/* [RE-AUTO c0]
   calls: CItemDecomposeInfo::GetManagers
   strings:
     ""CItemDecomposeInfo"" */

undefined4 FUN_11599df0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CItemDecomposeInfo__GetInfoMgrByName(0,"CItemDecomposeInfo",0);
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



/* ===== CEquipEnforceArmor::GetManagers @ 115bf220  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CEquipEnforceArmor::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceArmor::GetManagers
   strings:
     ""CEquipEnforceArmor::GetManagers"" */

undefined * CEquipEnforceArmor__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30ab4;
  if (param_3 == 0) {
    if ((DAT_122df5cc & 1) == 0) {
      DAT_122df5cc = DAT_122df5cc | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceArmor::GetManagers");
      FUN_11a8911f(&LAB_11ca4430);
    }
    if ((undefined *)*DAT_122df5b0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df5b0;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df77c & 1) == 0) {
      DAT_122df77c = DAT_122df77c | 1;
      FUN_115c06b0();
      FUN_11a8911f(&LAB_11ca3f50);
    }
    puVar1 = &DAT_122df744;
  }
  return puVar1;
}



/* ===== CEquipEnforceJewelry::GetManagers @ 115bf2c0  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CEquipEnforceJewelry::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceJewelry::GetManagers
   strings:
     ""CEquipEnforceJewelry::GetManagers"" */

undefined * CEquipEnforceJewelry__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30b3c;
  if (param_3 == 0) {
    if ((DAT_122df5ec & 1) == 0) {
      DAT_122df5ec = DAT_122df5ec | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceJewelry::GetManagers");
      FUN_11a8911f(&LAB_11ca4460);
    }
    if ((undefined *)*DAT_122df5d0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df5d0;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df7b8 & 1) == 0) {
      DAT_122df7b8 = DAT_122df7b8 | 1;
      FUN_115c0710();
      FUN_11a8911f(&LAB_11ca4010);
    }
    puVar1 = &DAT_122df780;
  }
  return puVar1;
}



/* ===== CEquipEnforceWeapon::GetManagers @ 115bf400  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CEquipEnforceWeapon::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceWeapon::GetManagers
   strings:
     ""CEquipEnforceWeapon::GetManagers"" */

undefined * CEquipEnforceWeapon__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30bcc;
  if (param_3 == 0) {
    if ((DAT_122df60c & 1) == 0) {
      DAT_122df60c = DAT_122df60c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceWeapon::GetManagers");
      FUN_11a8911f(&LAB_11ca44c0);
    }
    if ((undefined *)*DAT_122df5f0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df5f0;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df7f4 & 1) == 0) {
      DAT_122df7f4 = DAT_122df7f4 | 1;
      FUN_115c07d0();
      FUN_11a8911f(&LAB_11ca40d0);
    }
    puVar1 = &DAT_122df7bc;
  }
  return puVar1;
}



/* ===== FUN_115c2610 @ 115c2610  size=229 ===== */
// calls: CEquipQuickLevelUpInfo::GetInfoManager
// strings:
//   "CEquipQuickLevelUpInfo"
//   "Equip"
//   "Level"

/* [RE-AUTO c0]
   calls: CEquipQuickLevelUpInfo::GetManagers
   strings:
     ""CEquipQuickLevelUpInfo""
     ""Equip""
     ""Level"" */

uint FUN_115c2610(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = CEquipQuickLevelUpInfo__GetInfoManager(0,"CEquipQuickLevelUpInfo",0);
  uVar2 = uVar1;
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(uVar1 + 0x30) == 0)) &&
       (iVar3 = *(int *)(uVar1 + 0x28), iVar3 != 0)))) &&
     ((uVar2 = param_1 - *(int *)(uVar1 + 0x30), -1 < (int)uVar2 &&
      ((int)uVar2 < *(int *)(uVar1 + 0x24))))) {
    iVar4 = (int)uVar2 % iVar3;
    iVar3 = *(int *)(*(int *)(uVar1 + 0x20) + ((int)uVar2 / iVar3) * 4);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = 0;
      if (*(int *)(iVar3 + iVar4 * 4) != 0) {
        uVar2 = FUN_1183e200(param_3);
        if ((char)uVar2 != '\0') {
          iVar3 = FUN_1052bdd0(param_2);
          uVar2 = 0;
          if (iVar3 != 0) {
            uVar2 = FUN_116c4620(param_1);
            if ((char)uVar2 != '\0') {
              FUN_1183e240(param_3);
              FUN_100f3610();
              FUN_100f4440(&DAT_11dbabc0,0);
              FUN_100f4440("Equip",param_2);
              FUN_100f4440("Level",param_3);
              FUN_115c3010();
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0xc);
            }
          }
          return uVar2 & 0xffffff00;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



/* ===== FUN_115c3960 @ 115c3960  size=163 ===== */
// calls: CEquipEnforceWeapon::GetManagers
// strings:
//   "CEquipEnforceWeapon"

/* [RE-AUTO c0]
   calls: CEquipEnforceWeapon::GetManagers
   strings:
     ""CEquipEnforceWeapon"" */

undefined4 FUN_115c3960(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  param_3 = param_2 * 100 + param_3;
  cVar2 = FUN_116c5290();
  if ((cVar2 != '\0') || (cVar2 = FUN_116c5250(), cVar2 != '\0')) {
    iVar4 = CEquipEnforceWeapon__GetManagers(0,"CEquipEnforceWeapon",0);
    if (((param_3 != -1) &&
        (((param_3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
         (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
       ((param_3 = param_3 - *(int *)(iVar4 + 0x30), -1 < param_3 &&
        (param_3 < *(int *)(iVar4 + 0x24))))) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_3 / iVar1) * 4);
      if (iVar4 != 0) {
        return *(undefined4 *)(iVar4 + (param_3 % iVar1) * 4);
      }
    }
    return 0;
  }
  cVar2 = FUN_116c51f0();
  if (cVar2 != '\0') {
    uVar3 = FUN_115c3b80(param_3);
    return uVar3;
  }
  cVar2 = FUN_116c5260();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_115c3bd0(param_3);
  return uVar3;
}



/* ===== FUN_115c3a90 @ 115c3a90  size=153 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

undefined4 FUN_115c3a90(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  FUN_1166c4b0();
  cVar2 = FUN_116c5290();
  if (cVar2 == '\0') {
    FUN_1166c4b0();
    cVar2 = FUN_116c51f0();
    if (cVar2 == '\0') {
      FUN_1166c4b0();
      FUN_116c5260();
    }
  }
  iVar3 = FUN_1166c400();
  iVar3 = iVar3 + 1;
  FUN_1166c4b0();
  iVar4 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if (iVar4 != 0) {
      return *(undefined4 *)(iVar4 + (iVar3 % iVar1) * 4);
    }
  }
  return 0;
}



/* ===== FUN_115c3b80 @ 115c3b80  size=78 ===== */
// calls: CEquipEnforceArmor::GetManagers
// strings:
//   "CEquipEnforceArmor"

/* [RE-AUTO c0]
   calls: CEquipEnforceArmor::GetManagers
   strings:
     ""CEquipEnforceArmor"" */

undefined4 FUN_115c3b80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceArmor__GetManagers(0,"CEquipEnforceArmor",0);
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



/* ===== FUN_115c3bd0 @ 115c3bd0  size=78 ===== */
// calls: CEquipEnforceJewelry::GetManagers
// strings:
//   "CEquipEnforceJewelry"

/* [RE-AUTO c0]
   calls: CEquipEnforceJewelry::GetManagers
   strings:
     ""CEquipEnforceJewelry"" */

undefined4 FUN_115c3bd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceJewelry__GetManagers(0,"CEquipEnforceJewelry",0);
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



/* ===== FUN_115c3c20 @ 115c3c20  size=78 ===== */
// calls: CEquipEnforceTransferInfo::GetInfoManager
// strings:
//   "CEquipEnforceTransferInfo"

/* [RE-AUTO c0]
   calls: CEquipEnforceTransferInfo::GetManagers
   strings:
     ""CEquipEnforceTransferInfo"" */

undefined4 FUN_115c3c20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceTransferInfo__GetInfoManager(0,"CEquipEnforceTransferInfo",0);
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



/* ===== FUN_115c3c70 @ 115c3c70  size=78 ===== */
// calls: CEquipEnforceWeapon::GetManagers
// strings:
//   "CEquipEnforceWeapon"

/* [RE-AUTO c0]
   calls: CEquipEnforceWeapon::GetManagers
   strings:
     ""CEquipEnforceWeapon"" */

undefined4 FUN_115c3c70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceWeapon__GetManagers(0,"CEquipEnforceWeapon",0);
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



/* ===== FUN_115c3cc0 @ 115c3cc0  size=127 ===== */
// calls: CEquipQuenchRuleInfo::GetInfoManager
// strings:
//   "CEquipQuenchRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo"" */

undefined4 FUN_115c3cc0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_1166c4b0();
  if (param_2 <= *(int *)(iVar2 + 0x290)) {
    iVar2 = FUN_1166c4b0();
    iVar2 = *(int *)(iVar2 + 0x28c);
    iVar3 = CEquipQuenchRuleInfo__GetInfoManager(0,"CEquipQuenchRuleInfo",0);
    if (((iVar2 != -1) &&
        (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
       ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4) != 0)) {
        uVar4 = FUN_11830c10(param_2);
        return uVar4;
      }
    }
  }
  return 0;
}



/* ===== FUN_115c3d40 @ 115c3d40  size=78 ===== */
// calls: CEquipQuenchRuleInfo::GetInfoManager
// strings:
//   "CEquipQuenchRuleInfo"

/* [RE-AUTO c0]
   calls: CEquipQuenchRuleInfo::GetManagers
   strings:
     ""CEquipQuenchRuleInfo"" */

undefined4 FUN_115c3d40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipQuenchRuleInfo__GetInfoManager(0,"CEquipQuenchRuleInfo",0);
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



/* ===== CEquipEnforceArmor::GetManagers_115c4180 @ 115c4180  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CEquipEnforceArmor::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceArmor::GetManagers
   strings:
     ""CEquipEnforceArmor::GetManagers"" */

undefined4 CEquipEnforceArmor__GetManagers_115c4180(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df5cc & 1) == 0) {
      DAT_122df5cc = DAT_122df5cc | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceArmor::GetManagers");
      FUN_11a8911f(&LAB_11ca4430);
    }
    return *DAT_122df5b0;
  }
  return 0;
}



/* ===== CEquipEnforceJewelry::GetManagers_115c41d0 @ 115c41d0  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CEquipEnforceJewelry::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceJewelry::GetManagers
   strings:
     ""CEquipEnforceJewelry::GetManagers"" */

undefined4 CEquipEnforceJewelry__GetManagers_115c41d0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df5ec & 1) == 0) {
      DAT_122df5ec = DAT_122df5ec | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceJewelry::GetManagers");
      FUN_11a8911f(&LAB_11ca4460);
    }
    return *DAT_122df5d0;
  }
  return 0;
}



/* ===== CEquipEnforceWeapon::GetManagers_115c4270 @ 115c4270  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CEquipEnforceWeapon::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceWeapon::GetManagers
   strings:
     ""CEquipEnforceWeapon::GetManagers"" */

undefined4 CEquipEnforceWeapon__GetManagers_115c4270(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df60c & 1) == 0) {
      DAT_122df60c = DAT_122df60c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceWeapon::GetManagers");
      FUN_11a8911f(&LAB_11ca44c0);
    }
    return *DAT_122df5f0;
  }
  return 0;
}



/* ===== FUN_1160b030 @ 1160b030  size=9829 ===== */
// strings:
//   "ACTIVITY_ID"
//   "ACTIVITY_NAME"
//   "ACTIVITY_NOTE"
//   "ACTIVITY_TYPE"
//   "ACTIVITY_TIME"
//   "ACTIVITY_RULE"
//   "ACTIVITY_ICON"
//   "ACTIVITY_BUBBLE"
//   "ACTIVITY_BUBBLEINTERVAL"
//   "ACTIVITY_SERIAL"
//   "ACTIVITY_URL"
//   "START_DATE"
//   "STOP_DATE"
//   "SHOW_DATE"
//   "ACTIVITY_PERIOD"
//   "ACTIVITY_PHASES"
//   "ACTIVITY_PARAMS"
//   "iParam1"
//   "iParam2"
//   "iParam3"

/* [RE-AUTO c0]
   strings:
     ""ACTIVITY_ID""
     ""ACTIVITY_NAME""
     ""ACTIVITY_NOTE""
     ""ACTIVITY_TYPE""
     ""ACTIVITY_TIME""
     ""ACTIVITY_RULE""
     ""ACTIVITY_ICON""
     ""ACTIVITY_BUBBLE""
     ""ACTIVITY_BUBBLEINTERVAL""
     ""ACTIVITY_SERIAL"" */

void __fastcall FUN_1160b030(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 local_dd4 [4];
  undefined1 auStack_dd0 [3];
  undefined2 local_dcd;
  undefined1 local_dcb;
  undefined1 local_dca;
  char local_dc9;
  undefined1 local_dc8 [3];
  undefined1 local_dc5;
  undefined1 local_dc4;
  byte bStack_dc3;
  undefined4 uStack_dc2;
  int *piStack_dbe;
  undefined1 auStack_dba [9];
  char local_db1;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined1 local_dab [2];
  undefined1 local_da9 [15];
  undefined1 local_d9a [2];
  undefined1 local_d98 [71];
  undefined1 local_d51 [13];
  undefined1 local_d44 [3];
  undefined1 local_d41 [17];
  undefined1 local_d30 [24];
  undefined1 auStack_d18 [71];
  undefined1 local_cd1 [13];
  undefined4 local_cc4;
  undefined1 local_cbd [4];
  undefined1 local_cb9 [4];
  undefined1 local_cb5 [29];
  undefined1 auStack_c98 [128];
  byte local_c18;
  undefined4 auStack_c17 [39];
  undefined1 local_b78 [456];
  undefined4 local_9b0 [2];
  char *local_9a8;
  undefined4 local_9a0 [2];
  char *local_998;
  undefined4 local_990 [2];
  char *local_988;
  undefined4 local_980 [2];
  undefined1 *local_978;
  undefined4 local_970 [2];
  char *local_968;
  undefined4 auStack_960 [2];
  char *pcStack_958;
  undefined4 local_950 [2];
  char *local_948;
  undefined4 auStack_940 [2];
  char *pcStack_938;
  int aiStack_930 [2];
  undefined4 auStack_928 [2];
  char *pcStack_920;
  undefined4 local_918 [2];
  char *local_910;
  undefined4 auStack_908 [2];
  char *pcStack_900;
  undefined4 local_8f8 [2];
  char *local_8f0;
  undefined4 auStack_8e8 [2];
  char *pcStack_8e0;
  undefined4 local_8d8 [2];
  char *local_8d0;
  undefined4 auStack_8c8 [2];
  char *pcStack_8c0;
  undefined4 local_8b8 [2];
  char *local_8b0;
  undefined4 auStack_8a8 [2];
  char *pcStack_8a0;
  undefined4 local_898 [2];
  char *local_890;
  undefined4 auStack_888 [2];
  char *pcStack_880;
  undefined4 local_878 [2];
  char *local_870;
  undefined4 auStack_868 [2];
  char *pcStack_860;
  undefined4 local_858 [2];
  char *local_850;
  undefined4 auStack_848 [2];
  char *pcStack_840;
  undefined4 local_838 [2];
  undefined1 *local_830;
  undefined4 auStack_828 [2];
  char *pcStack_820;
  undefined4 local_818 [2];
  char *local_810;
  undefined4 auStack_808 [2];
  char *pcStack_800;
  undefined4 local_7f8 [2];
  char *local_7f0;
  undefined4 auStack_7e8 [2];
  char *pcStack_7e0;
  undefined4 local_7d8 [2];
  undefined *local_7d0;
  undefined4 auStack_7c8 [2];
  char *pcStack_7c0;
  undefined4 local_7b8 [2];
  char *local_7b0;
  undefined4 auStack_7a8 [2];
  char *pcStack_7a0;
  undefined4 local_798 [2];
  char *local_790;
  undefined4 auStack_788 [2];
  char *pcStack_780;
  undefined4 local_778 [2];
  char *local_770;
  undefined4 auStack_768 [2];
  char *pcStack_760;
  undefined4 local_758 [2];
  char *local_750;
  undefined4 auStack_748 [2];
  char *pcStack_740;
  undefined4 local_738 [2];
  char *local_730;
  undefined4 auStack_728 [2];
  char *pcStack_720;
  undefined4 local_718 [2];
  char *local_710;
  undefined4 auStack_708 [2];
  char *pcStack_700;
  undefined4 local_6f8 [2];
  char *local_6f0;
  undefined4 auStack_6e8 [2];
  char *pcStack_6e0;
  undefined4 local_6d8 [2];
  char *local_6d0;
  undefined4 auStack_6c8 [2];
  char *pcStack_6c0;
  undefined4 local_6b8 [2];
  char *local_6b0;
  undefined4 auStack_6a8 [2];
  char *pcStack_6a0;
  undefined4 local_698 [2];
  char *local_690;
  undefined4 auStack_688 [2];
  char *pcStack_680;
  undefined4 local_678 [2];
  char *local_670;
  undefined4 auStack_668 [2];
  char *pcStack_660;
  undefined4 local_658 [2];
  char *local_650;
  undefined4 auStack_648 [2];
  char *pcStack_640;
  undefined4 local_638 [2];
  char *local_630;
  undefined4 auStack_628 [2];
  char *pcStack_620;
  undefined4 local_618 [2];
  char *local_610;
  undefined4 auStack_608 [2];
  char *pcStack_600;
  undefined4 local_5f8 [2];
  char *local_5f0;
  undefined4 auStack_5e8 [2];
  char *pcStack_5e0;
  undefined4 local_5d8 [2];
  char *local_5d0;
  undefined4 auStack_5c8 [2];
  char *pcStack_5c0;
  undefined4 local_5b8 [2];
  undefined *local_5b0;
  undefined4 auStack_5a8 [2];
  char *pcStack_5a0;
  undefined4 local_598 [2];
  char *local_590;
  undefined4 auStack_588 [2];
  char *pcStack_580;
  undefined4 local_578 [2];
  char *local_570;
  undefined4 auStack_568 [2];
  char *pcStack_560;
  undefined4 local_558 [2];
  char *local_550;
  undefined4 auStack_548 [2];
  char *pcStack_540;
  undefined4 local_538 [2];
  char *local_530;
  undefined4 auStack_528 [2];
  char *pcStack_520;
  undefined4 local_518 [2];
  char *local_510;
  undefined4 auStack_508 [2];
  char *pcStack_500;
  undefined4 local_4f8 [2];
  char *local_4f0;
  undefined4 auStack_4e8 [2];
  char *pcStack_4e0;
  undefined4 local_4d8 [2];
  char *local_4d0;
  undefined4 auStack_4c8 [2];
  char *pcStack_4c0;
  undefined4 local_4b8 [2];
  char *local_4b0;
  undefined4 auStack_4a8 [2];
  char *pcStack_4a0;
  undefined4 local_498 [2];
  char *local_490;
  undefined4 auStack_488 [2];
  char *pcStack_480;
  undefined4 local_478 [2];
  char *local_470;
  undefined4 auStack_468 [2];
  char *pcStack_460;
  undefined4 local_458 [2];
  char *local_450;
  undefined4 local_448 [2];
  char *local_440;
  undefined4 local_438 [2];
  char *local_430;
  undefined4 local_428 [2];
  char *local_420;
  undefined4 local_418 [2];
  char *local_410;
  undefined4 local_408 [2];
  char *local_400;
  undefined4 local_3f8 [2];
  undefined *local_3f0;
  undefined4 local_3e8 [2];
  char *local_3e0;
  undefined4 local_3d8 [2];
  char *local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  undefined4 local_3b8 [2];
  char *local_3b0;
  undefined4 local_3a8 [2];
  char *local_3a0;
  undefined4 local_398 [2];
  char *local_390;
  undefined4 local_388 [2];
  char *local_380;
  undefined4 local_378 [2];
  char *local_370;
  undefined4 local_368 [2];
  char *local_360;
  undefined4 local_358 [2];
  undefined1 *local_350;
  undefined4 local_348 [2];
  char *local_340;
  undefined4 local_338 [2];
  char *local_330;
  undefined4 local_328 [2];
  char *local_320;
  undefined4 local_318 [2];
  char *local_310;
  undefined4 local_308 [2];
  char *local_300;
  undefined4 local_2f8 [2];
  char *local_2f0;
  undefined4 local_2e8 [2];
  char *local_2e0;
  undefined4 local_2d8 [2];
  char *local_2d0;
  undefined4 local_2c8 [2];
  int *local_2c0;
  undefined4 local_2bc;
  int local_2b8 [2];
  int *local_2b0;
  undefined4 local_2ac;
  int local_2a8 [4];
  int local_298;
  int local_294;
  int local_290 [2];
  undefined *local_288;
  int local_280 [2];
  undefined *local_278;
  undefined8 local_270;
  int local_268;
  int local_264;
  int local_260;
  ulonglong local_25c;
  int *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  uint local_244;
  int local_240;
  int local_23c [2];
  int *local_234;
  undefined4 local_230;
  int local_22c;
  int local_228;
  int local_224 [2];
  int *local_21c;
  undefined4 local_218;
  undefined4 local_214 [2];
  int *local_20c;
  undefined4 local_208;
  int *local_204;
  int local_200;
  int local_1fc [2];
  int *local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  int *local_1e8;
  int local_1e4 [2];
  char *local_1dc;
  int *local_1d4;
  int *local_1d0;
  int *local_1cc;
  int local_1c8 [2];
  int *local_1c0;
  undefined4 local_1bc;
  int *local_1b8;
  int *local_1b4;
  char local_1ad;
  undefined4 local_1ac;
  undefined1 local_12b [55];
  undefined4 local_f4 [31];
  char local_77 [33];
  char local_56 [36];
  undefined1 local_32;
  undefined1 local_31 [4];
  undefined1 local_2d [5];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_244 = 0;
  local_1b4 = param_1;
  (**(code **)(*param_1 + 8))();
  iVar7 = FUN_1145b350();
  if (iVar7 == 0) goto LAB_1160b0b2;
  local_1c0 = DAT_11d9b548;
  local_1bc = DAT_11d9b54c;
  local_1c8[0] = 0;
  cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_ID",local_1c8);
  if (cVar6 == '\0') {
    FUN_10a2eb80();
  }
  else {
    cVar6 = FUN_1158d840(param_1 + 8);
    FUN_10a2eb80();
    piVar12 = local_1b4;
    param_1 = local_1b4;
    if (cVar6 != '\0') {
      FUN_11607a40("ACTIVITY_NAME",local_1b4[0x14] + 0xd);
      FUN_11607a40("ACTIVITY_NOTE",piVar12[0x14] + 0x2d);
      puVar3 = (undefined1 *)piVar12[0x14];
      local_1c8[0] = 0;
      *puVar3 = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_TYPE",local_1c8);
      if (cVar6 != '\0') {
        FUN_11607cd0(puVar3);
      }
      FUN_10a2eb80();
      FUN_116079c0("ACTIVITY_TIME",piVar12[0x14] + 0x4d);
      FUN_11607ac0("ACTIVITY_RULE",piVar12[0x14] + 0x14d);
      FUN_116079c0("ACTIVITY_ICON",piVar12[0x14] + 0x94d);
      FUN_11607b40("ACTIVITY_BUBBLE",piVar12[0x14] + 0xa4d);
      iVar7 = piVar12[0x14];
      local_1c8[0] = 0;
      *(undefined4 *)(iVar7 + 0xacd) = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_BUBBLEINTERVAL",local_1c8);
      if (cVar6 != '\0') {
        FUN_10a2f6d0((undefined4 *)(iVar7 + 0xacd));
      }
      FUN_10a2eb80();
      iVar7 = piVar12[0x14];
      local_1c8[0] = 0;
      *(undefined1 *)(iVar7 + 0xad1) = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_SERIAL",local_1c8);
      if (cVar6 != '\0') {
        FUN_11607d70((undefined1 *)(iVar7 + 0xad1));
      }
      FUN_10a2eb80();
      FUN_11607ac0("ACTIVITY_URL",piVar12[0x14] + 0x54d);
      puVar1 = (uint *)(piVar12 + 0xe);
      local_234 = DAT_11d9b548;
      local_230 = DAT_11d9b54c;
      local_23c[0] = 0;
      *puVar1 = 0xffffffff;
      piVar12[0xf] = -1;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("START_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(puVar1);
      }
      puVar2 = (uint *)(piVar12 + 0x10);
      *(uint *)(piVar12[0x14] + 1) = *puVar1;
      *puVar2 = 0xffffffff;
      piVar12[0x11] = -1;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("STOP_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(puVar2);
      }
      piVar9 = piVar12 + 0x12;
      *(uint *)(piVar12[0x14] + 5) = *puVar2;
      *piVar9 = -1;
      piVar12[0x13] = -1;
      cVar6 = (**(code **)(*(int *)local_1b4[2] + 0x18))("SHOW_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(piVar9);
      }
      *(int *)(local_1b4[0x14] + 9) = *piVar9;
      uVar13 = piVar12[0xf];
      if ((*puVar1 & uVar13) != 0xffffffff) {
        uVar4 = piVar12[0x11];
        if ((((*puVar2 & uVar4) != 0xffffffff) && ((int)uVar4 <= (int)uVar13)) &&
           (((int)uVar4 < (int)uVar13 || (*puVar2 < *puVar1)))) {
          FUN_10a2eb80();
          param_1 = local_1b4;
          goto LAB_1160b0ab;
        }
      }
      FUN_10a2eb80();
      param_1 = local_1b4;
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1e8 = (int *)0x0;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)local_1b4[2] + 0x18))("ACTIVITY_PERIOD",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
      }
      else {
        if (local_1fc[0] == 0xc) {
          if (local_1f4 != (int *)0x0) {
            local_1f4[1] = local_1f4[1] + 1;
            local_1e8 = local_1f4;
            piVar12 = local_1f4;
          }
          local_1ad = '\x01';
        }
        else {
          local_1ad = '\0';
        }
        FUN_10a2eb80();
        if ((local_1ad != '\0') &&
           (cVar6 = (**(code **)(*piVar12 + 0x10))(&local_1ec,&local_200), cVar6 != '\0')) {
          local_1c0 = DAT_11d9b548;
          local_1bc = DAT_11d9b54c;
          local_1c8[0] = 0;
          if ((DAT_122e0084 & 1) == 0) {
            DAT_122e0084 = DAT_122e0084 | 1;
            DAT_122e0080 = 5;
          }
          if (local_1ec < local_200) {
            while (cVar6 = (**(code **)(*piVar12 + 0x14))(local_1ec,local_1c8), cVar6 != '\0') {
              if (local_1c8[0] == 0xc) {
                local_1cc = (int *)0x0;
                if (local_1c0 != (int *)0x0) {
                  local_1c0[1] = local_1c0[1] + 1;
                  local_1cc = local_1c0;
                }
                piVar9 = local_1cc;
                if ((int)(uint)*(byte *)(param_1[0x14] + 0x11393) < DAT_122e0080) {
                  FUN_103d5460();
                  local_1e4[0] = 0xb;
                  local_1dc = "Type";
                  cVar6 = FUN_11607600(local_1e4,&local_1ac);
                  FUN_10a2eb80();
                  if (cVar6 != '\0') {
                    local_280[0] = 0xb;
                    local_278 = &DAT_11d33d6c;
                    iVar7 = FUN_11607940(local_280,(int)&local_1ac + 1);
                    FUN_10a2eb80();
                    if (iVar7 != 0) {
                      local_290[0] = 0xb;
                      local_288 = &DAT_11dbb648;
                      iVar7 = FUN_116077c0(local_290,local_12b);
                      FUN_10a2eb80();
                      param_1 = local_1b4;
                      if (iVar7 != 0) {
                        puVar11 = &local_1ac;
                        puVar14 = (undefined4 *)
                                  (local_1b4[0x14] + 0x11394 +
                                  (uint)*(byte *)(local_1b4[0x14] + 0x11393) * 0x181);
                        for (iVar7 = 0x60; iVar7 != 0; iVar7 = iVar7 + -1) {
                          *puVar14 = *puVar11;
                          puVar11 = puVar11 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
                        *(char *)(local_1b4[0x14] + 0x11393) =
                             *(char *)(local_1b4[0x14] + 0x11393) + '\x01';
                        FUN_10a2efb0();
                        piVar12 = local_1e8;
                        goto LAB_1160b649;
                      }
                    }
                    FUN_10a2efb0();
                    break;
                  }
                }
                if ((piVar9 != (int *)0x0) && (piVar9[1] = piVar9[1] + -1, piVar9[1] < 1)) {
                  (**(code **)*piVar9)(1);
                }
                break;
              }
LAB_1160b649:
              local_1ec = local_1ec + 1;
              if (local_200 <= local_1ec) break;
            }
          }
          FUN_10a2eb80();
          param_1 = local_1b4;
        }
        if ((piVar12 != (int *)0x0) && (piVar12[1] = piVar12[1] + -1, piVar12[1] < 1)) {
          (**(code **)*piVar12)(1);
        }
      }
      piVar12 = param_1 + 0xb;
      piVar9 = (int *)param_1[0xb];
      while (piVar9 != piVar12) {
        piVar5 = (int *)*piVar9;
        FUN_10c3d5d0(piVar9);
        piVar9 = piVar5;
      }
      *piVar12 = (int)piVar12;
      param_1[0xc] = (int)piVar12;
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_PHASES",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
      }
      else {
        if (local_1fc[0] == 0xc) {
          if (local_1f4 != (int *)0x0) {
            local_1f4[1] = local_1f4[1] + 1;
            piVar12 = local_1f4;
          }
          local_1ad = '\x01';
        }
        else {
          local_1ad = '\0';
        }
        FUN_10a2eb80();
        if (local_1ad == '\0') {
          if (piVar12 != (int *)0x0) goto LAB_1160b8ba;
        }
        else if (piVar12 != (int *)0x0) {
          local_20c = DAT_11d9b548;
          local_21c = DAT_11d9b548;
          local_208 = DAT_11d9b54c;
          local_218 = DAT_11d9b54c;
          local_214[0] = 0;
          local_224[0] = 0;
          cVar6 = (**(code **)(*piVar12 + 0x1c))(local_214,local_224);
          if (cVar6 != '\0') {
            local_254 = (int *)((uint)local_254 & 0xffffff00);
            local_25c = 0;
            cVar6 = FUN_11607d70(&local_254);
            if ((cVar6 != '\0') && (cVar6 = FUN_10a2ebd0(&local_270), cVar6 != '\0')) {
              local_25c = (ulonglong)(int)local_270;
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0x18);
            }
            FUN_10a2eb80();
            FUN_10a2eb80();
            piVar12[1] = piVar12[1] + -1;
            if (piVar12[1] < 1) {
              (**(code **)*piVar12)(1);
            }
            goto LAB_1160b0ab;
          }
          FUN_10a2eb80();
          FUN_10a2eb80();
LAB_1160b8ba:
          piVar12[1] = piVar12[1] + -1;
          if (piVar12[1] < 1) {
            (**(code **)*piVar12)(1);
          }
        }
      }
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_PARAMS",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
        goto LAB_1160be38;
      }
      if (local_1fc[0] == 0xc) {
        if (local_1f4 != (int *)0x0) {
          local_1f4[1] = local_1f4[1] + 1;
          piVar12 = local_1f4;
        }
        local_1ad = '\x01';
      }
      else {
        local_1ad = '\0';
      }
      FUN_10a2eb80();
      if (local_1ad == '\0') {
LAB_1160be23:
        if (piVar12 == (int *)0x0) goto LAB_1160be38;
      }
      else {
        iVar7 = param_1[0x14];
        local_1c0 = DAT_11d9b548;
        local_1bc = DAT_11d9b54c;
        local_1e4[0] = 0xb;
        local_1dc = "iParam1";
        local_1c8[0] = 0;
        cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
        if (cVar6 == '\0') {
          FUN_10a2eb80();
          local_1ad = '\0';
        }
        else {
          local_1ad = FUN_10a2f6d0(iVar7 + 0x11b19);
          FUN_10a2eb80();
        }
        FUN_10a2eb80();
        if (local_1ad != '\0') {
          local_1c0 = DAT_11d9b548;
          local_1bc = DAT_11d9b54c;
          local_1e4[0] = 0xb;
          local_1dc = "iParam2";
          local_1c8[0] = 0;
          cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
          if (cVar6 == '\0') {
            FUN_10a2eb80();
            local_1ad = '\0';
          }
          else {
            local_1ad = FUN_10a2f6d0(iVar7 + 0x11b1d);
            FUN_10a2eb80();
          }
          FUN_10a2eb80();
          if (local_1ad != '\0') {
            local_1c0 = DAT_11d9b548;
            local_1bc = DAT_11d9b54c;
            local_1e4[0] = 0xb;
            local_1dc = "iParam3";
            local_1c8[0] = 0;
            cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
            if (cVar6 == '\0') {
              FUN_10a2eb80();
              local_1ad = '\0';
            }
            else {
              local_1ad = FUN_10a2f6d0(iVar7 + 0x11b21);
              FUN_10a2eb80();
            }
            FUN_10a2eb80();
            if (local_1ad != '\0') {
              local_1c0 = DAT_11d9b548;
              local_1bc = DAT_11d9b54c;
              local_1e4[0] = 0xb;
              local_1dc = "iParam4";
              local_1c8[0] = 0;
              cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
              if (cVar6 == '\0') {
                FUN_10a2eb80();
                local_1ad = '\0';
              }
              else {
                local_1ad = FUN_10a2f6d0(iVar7 + 0x11b25);
                FUN_10a2eb80();
              }
              FUN_10a2eb80();
              if (local_1ad != '\0') {
                local_1c0 = DAT_11d9b548;
                local_1bc = DAT_11d9b54c;
                local_1e4[0] = 0xb;
                local_1dc = "iParam5";
                local_1c8[0] = 0;
                cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                if (cVar6 == '\0') {
                  FUN_10a2eb80();
                  local_1ad = '\0';
                }
                else {
                  local_1ad = FUN_10a2f6d0(iVar7 + 0x11b29);
                  FUN_10a2eb80();
                }
                FUN_10a2eb80();
                if (local_1ad != '\0') {
                  local_1c0 = DAT_11d9b548;
                  local_1bc = DAT_11d9b54c;
                  local_1e4[0] = 0xb;
                  local_1dc = "iParam6";
                  local_1c8[0] = 0;
                  cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                  if (cVar6 == '\0') {
                    FUN_10a2eb80();
                    local_1ad = '\0';
                  }
                  else {
                    local_1ad = FUN_10a2f6d0(iVar7 + 0x11b2d);
                    FUN_10a2eb80();
                  }
                  FUN_10a2eb80();
                  if (local_1ad != '\0') {
                    local_1c0 = DAT_11d9b548;
                    local_1bc = DAT_11d9b54c;
                    local_1e4[0] = 0xb;
                    local_1dc = "szStr1";
                    local_1c8[0] = 0;
                    cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                    if (cVar6 == '\0') {
                      FUN_10a2eb80();
                      local_1e8 = (int *)0x0;
                    }
                    else {
                      uVar8 = (**(code **)(*piVar12 + 4))(iVar7 + 0x11b31,0x80,0,0);
                      local_1e8 = (int *)FUN_10a2eb30(uVar8);
                      FUN_10a2eb80();
                    }
                    FUN_10a2eb80();
                    if (local_1e8 != (int *)0x0) {
                      local_1c0 = DAT_11d9b548;
                      local_1bc = DAT_11d9b54c;
                      local_1e4[0] = 0xb;
                      local_1dc = "szStr2";
                      local_1c8[0] = 0;
                      cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                      if (cVar6 == '\0') {
                        FUN_10a2eb80();
                        iVar7 = 0;
                      }
                      else {
                        uVar8 = (**(code **)(*piVar12 + 4))(iVar7 + 0x11bb1,0x80,0,0);
                        iVar7 = FUN_10a2eb30(uVar8);
                        FUN_10a2eb80();
                      }
                      FUN_10a2eb80();
                      if (iVar7 != 0) goto LAB_1160be23;
                    }
                  }
                }
              }
            }
          }
        }
      }
      piVar12[1] = piVar12[1] + -1;
      if (piVar12[1] < 1) {
        (**(code **)*piVar12)(1);
      }
LAB_1160be38:
      piVar12 = (int *)0x0;
      local_2b0 = DAT_11d9b548;
      local_2ac = DAT_11d9b54c;
      local_1e8 = (int *)0x0;
      local_2b8[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_DATA",local_2b8);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
        param_1[9] = 1;
        FUN_11a89daa();
        return;
      }
      if (local_2b8[0] == 0xc) {
        if (local_2b0 != (int *)0x0) {
          local_2b0[1] = local_2b0[1] + 1;
          local_1e8 = local_2b0;
          piVar12 = local_2b0;
        }
        local_1ad = '\x01';
      }
      else {
        local_1ad = '\0';
      }
      FUN_10a2eb80();
      if ((local_1ad != '\0') &&
         (cVar6 = (**(code **)(*piVar12 + 0x10))(&local_1ec,&local_200), cVar6 != '\0')) {
        local_254 = DAT_11d9b548;
        local_250 = DAT_11d9b54c;
        local_25c = local_25c & 0xffffffff00000000;
        if ((DAT_122e0084 & 2) == 0) {
          DAT_122e0084 = DAT_122e0084 | 2;
          DAT_122e0088 = 0x40;
        }
        while( true ) {
          if ((local_200 <= local_1ec) ||
             (cVar6 = (**(code **)(*piVar12 + 0x14))(local_1ec,&local_25c), cVar6 == '\0'))
          goto LAB_1160e092;
          if ((int)local_25c != 0xc) goto LAB_1160d785;
          local_1b8 = (int *)0x0;
          if (local_254 != (int *)0x0) {
            local_254[1] = local_254[1] + 1;
            local_1b8 = local_254;
          }
          piVar9 = local_1b8;
          if (DAT_122e0088 <= (int)(uint)*(byte *)(param_1[0x14] + 0xad2)) break;
          FUN_103d5050();
          local_dd4[0] = (undefined1)local_1ec;
          local_2c0 = DAT_11d9b548;
          local_2bc = DAT_11d9b54c;
          local_dd4[2] = 1;
          local_980[0] = 0xb;
          local_978 = &DAT_11dbabc0;
          local_2c8[0] = 0;
          cVar6 = (**(code **)(*piVar9 + 0xc))(local_980,local_2c8);
          if (cVar6 == '\0') {
            FUN_10a2eb80();
            cVar6 = '\0';
          }
          else {
            cVar6 = FUN_11607d70(local_dd4 + 1);
            FUN_10a2eb80();
          }
          FUN_10a2eb80();
          if (cVar6 == '\0') goto LAB_1160e081;
          local_9a0[0] = 0xb;
          local_998 = "InitState";
          local_dd4[2] = FUN_11607750(local_9a0,1);
          FUN_10a2eb80();
          if (local_dd4[1] == '\0') {
            piVar9[1] = piVar9[1] + -1;
            param_1 = local_1b4;
            if (0 < piVar9[1]) goto LAB_1160d785;
            (**(code **)*piVar9)(1);
            local_1ec = local_1ec + 1;
            param_1 = local_1b4;
            piVar12 = local_1e8;
          }
          else {
            if (local_dd4[1] == '\x10') {
              local_2f8[0] = 0xb;
              local_2f0 = "szUrl";
              FUN_116078c0(local_2f8,local_dd4 + 3);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == ' ') {
              local_818[0] = 0xb;
              local_810 = "szLabel";
              FUN_11607840(local_818,local_dd4 + 3);
              FUN_10a2eb80();
              local_318[0] = 0xb;
              local_310 = "iCondParam1";
              FUN_10a2f4b0(local_318,&local_db1);
              FUN_10a2eb80();
              local_678[0] = 0xb;
              local_670 = "iCondParam2";
              FUN_10a2f4b0(local_678,(int)&local_db0 + 3);
              FUN_10a2eb80();
              local_338[0] = 0xb;
              local_330 = "szScript";
              FUN_11607840(local_338,local_da9);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'D') {
              local_8f8[0] = 0xb;
              local_8f0 = "szLabel";
              FUN_11607840(local_8f8,local_dd4 + 3);
              FUN_10a2eb80();
              piVar12 = &local_db0;
              local_db1 = '\0';
              uVar13 = 1;
              do {
                local_1cc = piVar12;
                FUN_100f6650(local_28,0x20,"%s%lu","iCondParam",uVar13);
                local_358[0] = 0xb;
                local_350 = local_28;
                cVar6 = FUN_10a2f4b0(local_358,piVar12);
                FUN_10a2eb80();
                if (cVar6 == '\0') break;
                uVar13 = uVar13 + 1;
                local_db1 = local_db1 + '\x01';
                piVar12 = local_1cc + 1;
                local_1cc = piVar12;
              } while (uVar13 < 0x21);
              local_698[0] = 0xb;
              local_690 = "szScript";
              FUN_11607840(local_698,local_d30);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'E') {
              local_378[0] = 0xb;
              local_370 = "szLabel";
              FUN_11607840(local_378,local_dd4 + 3);
              FUN_10a2eb80();
              piVar12 = &local_db0;
              local_db1 = '\0';
              uVar13 = 1;
              do {
                local_1cc = piVar12;
                FUN_100f6650(local_28,0x20,"%s%lu","iCondParam",uVar13);
                local_838[0] = 0xb;
                local_830 = local_28;
                cVar6 = FUN_10a2f4b0(local_838,piVar12);
                FUN_10a2eb80();
                if (cVar6 == '\0') break;
                uVar13 = uVar13 + 1;
                local_db1 = local_db1 + '\x01';
                piVar12 = local_1cc + 1;
                local_1cc = piVar12;
              } while (uVar13 < 0x21);
              local_398[0] = 0xb;
              local_390 = "szScript";
              FUN_11607840(local_398,local_d30);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'F') {
              FUN_103d3f30();
              local_6b8[0] = 0xb;
              local_6b0 = "iParam1";
              FUN_10a2f4b0(local_6b8,local_b78);
              FUN_10a2eb80();
              FUN_10a2de90();
              local_3b8[0] = 0xb;
              local_3b0 = "HuntTasks";
              cVar6 = (**(code **)(*piVar9 + 0xc))(local_3b8,local_2a8);
              FUN_10a2eb80();
              if ((cVar6 != '\0') && (local_2a8[0] == 0xc)) {
                local_1cc = (int *)0x0;
                cVar6 = FUN_11607540(&local_1cc);
                piVar12 = local_1cc;
                if (cVar6 != '\0') {
                  local_228 = 0;
                  local_240 = 0;
                  cVar6 = (**(code **)(*local_1cc + 0x10))(&local_228,&local_240);
                  if (cVar6 != '\0') {
                    FUN_10a2de90();
                    if ((DAT_122e0084 & 4) == 0) {
                      DAT_122e0084 = DAT_122e0084 | 4;
                      DAT_122e008c = 3;
                    }
                    if (local_228 < local_240) {
                      do {
                        cVar6 = (**(code **)(*piVar12 + 0x14))(local_228,local_290);
                        if (cVar6 == '\0') break;
                        if (local_290[0] == 0xc) {
                          local_1d4 = (int *)0x0;
                          cVar6 = FUN_11607540(&local_1d4);
                          if ((cVar6 != '\0') && ((int)(stack0xfffff22f & 0xff) < DAT_122e008c)) {
                            FUN_103d37f0();
                            piVar12 = local_1d4;
                            local_990[0] = 0xb;
                            local_988 = "HuntNum";
                            cVar6 = FUN_116076e0(local_990,local_31);
                            FUN_10a2eb80();
                            if (cVar6 != '\0') {
                              local_3d8[0] = 0xb;
                              local_3d0 = "CounterID";
                              cVar6 = FUN_11607600(local_3d8,local_2d);
                              FUN_10a2eb80();
                              if (cVar6 != '\0') {
                                FUN_10a2de90();
                                local_6d8[0] = 0xb;
                                local_6d0 = "NeedIntenseFighting";
                                cVar6 = (**(code **)(*piVar12 + 0xc))(local_6d8,local_214);
                                FUN_10a2eb80();
                                if (cVar6 != '\0') {
                                  local_32 = FUN_1160add0(0);
                                  local_3f8[0] = 0xb;
                                  local_3f0 = &DAT_11dbe644;
                                  iVar7 = FUN_11607940(local_3f8,local_f4);
                                  FUN_10a2eb80();
                                  if (iVar7 != 0) {
                                    FUN_10a2de90();
                                    local_858[0] = 0xb;
                                    local_850 = "LevelTitleTag";
                                    cVar6 = (**(code **)(*piVar12 + 0xc))(local_858,local_224);
                                    FUN_10a2eb80();
                                    if ((cVar6 != '\0') && (local_224[0] == 0xc)) {
                                      local_1d0 = (int *)0x0;
                                      cVar6 = FUN_11607540(&local_1d0);
                                      if ((cVar6 != '\0') &&
                                         (cVar6 = (**(code **)(*local_1d0 + 0x10))
                                                            (&local_294,&local_260), cVar6 != '\0'))
                                      {
                                        if ((local_294 < local_260) && (0 < local_294)) {
                                          pcVar10 = local_56 + local_294 * 4;
                                          iVar7 = local_294;
                                          do {
                                            piVar12 = local_1d4;
                                            if ((8 < iVar7) ||
                                               (cVar6 = FUN_10a2f530(iVar7,pcVar10),
                                               piVar12 = local_1d4, cVar6 == '\0')) break;
                                            local_56[3] = local_56[3] + '\x01';
                                            iVar7 = iVar7 + 1;
                                            pcVar10 = pcVar10 + 4;
                                          } while (iVar7 < local_260);
                                        }
                                        FUN_10a2de90();
                                        local_418[0] = 0xb;
                                        local_410 = "BossId";
                                        cVar6 = (**(code **)(*piVar12 + 0xc))(local_418,local_1fc);
                                        FUN_10a2eb80();
                                        if ((cVar6 != '\0') && (local_1fc[0] == 0xc)) {
                                          local_204 = (int *)0x0;
                                          cVar6 = FUN_11607540(&local_204);
                                          if ((cVar6 != '\0') &&
                                             (cVar6 = (**(code **)(*local_204 + 0x10))
                                                                (&local_298,&local_264),
                                             cVar6 != '\0')) {
                                            if ((local_298 < local_264) && (0 < local_298)) {
                                              pcVar10 = local_77 + local_298 * 4;
                                              iVar7 = local_298;
                                              do {
                                                if ((8 < iVar7) ||
                                                   (cVar6 = FUN_10a2f530(iVar7,pcVar10),
                                                   cVar6 == '\0')) break;
                                                local_77[3] = local_77[3] + '\x01';
                                                iVar7 = iVar7 + 1;
                                                pcVar10 = pcVar10 + 4;
                                              } while (iVar7 < local_264);
                                            }
                                            puVar11 = local_f4;
                                            puVar14 = (undefined4 *)
                                                      (auStack_dd0 + (stack0xfffff22f & 0xff) * 200)
                                            ;
                                            for (iVar7 = 0x32; iVar7 != 0; iVar7 = iVar7 + -1) {
                                              *puVar14 = *puVar11;
                                              puVar11 = puVar11 + 1;
                                              puVar14 = puVar14 + 1;
                                            }
                                            stack0xfffff22f =
                                                 CONCAT31(auStack_dd0,local_dd4[3] + '\x01');
                                            FUN_10a2efb0();
                                            FUN_10a2eb80();
                                            FUN_10a2efb0();
                                            FUN_10a2eb80();
                                            FUN_10a2eb80();
                                            FUN_10a2efb0();
                                            piVar12 = local_1cc;
                                            goto LAB_1160c921;
                                          }
                                          FUN_10a2efb0();
                                        }
                                        FUN_10a2eb80();
                                      }
                                      FUN_10a2efb0();
                                    }
                                    FUN_10a2eb80();
                                  }
                                }
                                FUN_10a2eb80();
                              }
                            }
                          }
                          FUN_10a2efb0();
                          break;
                        }
LAB_1160c921:
                        local_228 = local_228 + 1;
                      } while (local_228 < local_240);
                    }
                    FUN_10a2eb80();
                  }
                }
                FUN_10a2efb0();
              }
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '!') {
              local_6f8[0] = 0xb;
              local_6f0 = "szLabel";
              FUN_11607840(local_6f8,local_dd4 + 3);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '\"') {
              local_438[0] = 0xb;
              local_430 = "szLabel";
              FUN_11607840(local_438,local_dd4 + 3);
              FUN_10a2eb80();
              local_918[0] = 0xb;
              local_910 = "szUrl";
              FUN_116078c0(local_918,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '#') {
              local_458[0] = 0xb;
              local_450 = "szLabel";
              FUN_11607840(local_458,local_dd4 + 3);
              FUN_10a2eb80();
              local_718[0] = 0xb;
              local_710 = "szUrl";
              FUN_116078c0(local_718,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '$') {
              local_478[0] = 0xb;
              local_470 = "szLabel";
              FUN_11607840(local_478,local_dd4 + 3);
              FUN_10a2eb80();
              local_878[0] = 0xb;
              local_870 = "dwTaskID";
              FUN_116076e0(local_878,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '%') {
              local_498[0] = 0xb;
              local_490 = "szLabel";
              FUN_11607840(local_498,local_dd4 + 3);
              FUN_10a2eb80();
              local_738[0] = 0xb;
              local_730 = "dwLevelID";
              FUN_116076e0(local_738,&local_db1);
              FUN_10a2eb80();
              local_4b8[0] = 0xb;
              local_4b0 = "bEnterMode";
              FUN_11607600(local_4b8,(int)&local_db0 + 3);
              FUN_10a2eb80();
              local_970[0] = 0xb;
              local_968 = "bDataID";
              FUN_11607600(local_970,&local_dac);
              FUN_10a2eb80();
              local_4d8[0] = 0xb;
              local_4d0 = "szCondition";
              FUN_11607940(local_4d8,local_dab);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '@') {
              local_758[0] = 0xb;
              local_750 = "iParam1";
              FUN_10a2f4b0(local_758,local_dd4 + 3);
              FUN_10a2eb80();
              local_4f8[0] = 0xb;
              local_4f0 = "iParam2";
              FUN_10a2f4b0(local_4f8,&local_dcd);
              FUN_10a2eb80();
              local_898[0] = 0xb;
              local_890 = "iParam3";
              FUN_10a2f4b0(local_898,&local_dc9);
              FUN_10a2eb80();
              local_518[0] = 0xb;
              local_510 = "iParam4";
              FUN_10a2f4b0(local_518,&local_dc5);
              FUN_10a2eb80();
              local_778[0] = 0xb;
              local_770 = "szParam5";
              FUN_11607940(local_778,(int)&uStack_dc2 + 1);
              FUN_10a2eb80();
              local_538[0] = 0xb;
              local_530 = "szParam6";
              FUN_11607940(local_538,local_d41);
              FUN_10a2eb80();
              local_2d8[0] = 0xb;
              local_2d0 = "iParam7";
              FUN_10a2f4b0(local_2d8,(int)&local_cc4 + 3);
              FUN_10a2eb80();
              local_558[0] = 0xb;
              local_550 = "iParam8";
              FUN_10a2f4b0(local_558,local_cbd);
              FUN_10a2eb80();
              local_798[0] = 0xb;
              local_790 = "iParam9";
              FUN_10a2f4b0(local_798,local_cb9);
              FUN_10a2eb80();
              local_578[0] = 0xb;
              local_570 = "szParam10";
              FUN_11607940(local_578,local_cb5);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'A') {
              local_8b8[0] = 0xb;
              local_8b0 = "szGroups";
              FUN_11607940(local_8b8,local_dd4 + 3);
              FUN_10a2eb80();
              local_598[0] = 0xb;
              local_590 = "szSubGroups";
              FUN_11607940(local_598,local_d51);
              FUN_10a2eb80();
              local_7b8[0] = 0xb;
              local_7b0 = "szLevels";
              FUN_116077c0(local_7b8,local_cd1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'B') {
              local_5b8[0] = 0xb;
              local_5b0 = &DAT_11d33ef0;
              FUN_11607600(local_5b8,local_dd4 + 3);
              FUN_10a2eb80();
              local_9b0[0] = 0xb;
              local_9a8 = "szPages";
              FUN_116077c0(local_9b0,auStack_dd0);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'C') {
              FUN_103d2160();
              local_5d8[0] = 0xb;
              local_5d0 = "bControlType";
              FUN_11607600(local_5d8,local_dd4 + 3);
              FUN_10a2eb80();
              local_7d8[0] = 0xb;
              local_7d0 = &DAT_11dd3e38;
              FUN_10a2f4b0(local_7d8,auStack_dd0);
              FUN_10a2eb80();
              local_5f8[0] = 0xb;
              local_5f0 = "iDateType";
              FUN_10a2f4b0(local_5f8,(int)&local_dcd + 1);
              FUN_10a2eb80();
              local_8d8[0] = 0xb;
              local_8d0 = "iDateInterval";
              FUN_10a2f4b0(local_8d8,local_dc8);
              FUN_10a2eb80();
              local_618[0] = 0xb;
              local_610 = "szDateDays";
              FUN_11607940(local_618,&local_dc4);
              FUN_10a2eb80();
              local_7f8[0] = 0xb;
              local_7f0 = "szDateTime";
              FUN_11607940(local_7f8,local_d44);
              FUN_10a2eb80();
              FUN_10a2de90();
              uVar13 = local_244;
              local_638[0] = 0xb;
              local_270 = 0;
              local_244 = local_244 | 1;
              local_630 = "begin_date";
              cVar6 = (**(code **)(*piVar9 + 0xc))(local_638,local_280);
              if ((cVar6 != '\0') && (local_280[0] != 0)) {
                FUN_10a2ebd0(&local_270);
              }
              local_244 = uVar13 & 0xfffffffe;
              FUN_10a2eb80();
              local_cc4 = (int)local_270;
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] != '0') goto LAB_1160d774;
            FUN_103d2ca0();
            local_950[0] = 0xb;
            local_948 = "dwItemID";
            FUN_116076e0(local_950,local_dd4 + 3);
            FUN_10a2eb80();
            local_658[0] = 0xb;
            local_650 = "nItemCount";
            FUN_11607670(local_658,&local_dcd);
            FUN_10a2eb80();
            local_2e8[0] = 0xb;
            local_2e0 = "bBindType";
            FUN_11607600(local_2e8,&local_dcb);
            FUN_10a2eb80();
            local_308[0] = 0xb;
            local_300 = "bOpenType";
            FUN_11607600(local_308,&local_dca);
            FUN_10a2eb80();
            local_328[0] = 0xb;
            local_320 = "chColumn";
            FUN_11607590(local_328,&local_dc9);
            FUN_10a2eb80();
            local_348[0] = 0xb;
            local_340 = "dwFlags";
            FUN_116076e0(local_348,local_dc8);
            FUN_10a2eb80();
            local_368[0] = 0xb;
            local_360 = "bCondType";
            FUN_11607600(local_368,&local_dc4);
            FUN_10a2eb80();
            local_388[0] = 0xb;
            local_380 = "nGetCountMax";
            FUN_11607670(local_388,local_d9a);
            FUN_10a2eb80();
            local_3a8[0] = 0xb;
            local_3a0 = "szDesc";
            FUN_11607940(local_3a8,local_d98);
            FUN_10a2eb80();
            FUN_10a2de90();
            local_3c8[0] = 0xb;
            local_3c0 = "ItemRewards";
            cVar6 = (**(code **)(*piVar9 + 0xc))(local_3c8,local_1c8);
            FUN_10a2eb80();
            if ((cVar6 != '\0') && (local_1c8[0] == 0xc)) {
              local_1cc = (int *)0x0;
              cVar6 = FUN_11607540(&local_1cc);
              piVar12 = local_1cc;
              if ((cVar6 != '\0') &&
                 (cVar6 = (**(code **)(*local_1cc + 0x10))(&local_22c,&local_268), cVar6 != '\0')) {
                FUN_10a2de90();
                if ((DAT_122e0084 & 8) == 0) {
                  DAT_122e0084 = DAT_122e0084 | 8;
                  DAT_122e0090 = 10;
                }
                if (local_22c < local_268) {
                  do {
                    cVar6 = (**(code **)(*piVar12 + 0x14))(local_22c,local_1e4);
                    if (cVar6 == '\0') break;
                    if (local_1e4[0] == 0xc) {
                      local_1d0 = (int *)0x0;
                      cVar6 = FUN_11607540(&local_1d0);
                      if ((cVar6 != '\0') && ((int)(uint)local_c18 < DAT_122e0090)) {
                        FUN_103d2940();
                        local_3e8[0] = 0xb;
                        local_3e0 = "dwItemID";
                        cVar6 = FUN_116076e0(local_3e8,&local_24c);
                        FUN_10a2eb80();
                        if (cVar6 != '\0') {
                          local_408[0] = 0xb;
                          local_400 = "nItemCount";
                          cVar6 = FUN_11607670(local_408,&local_248);
                          FUN_10a2eb80();
                          if (cVar6 != '\0') {
                            local_428[0] = 0xb;
                            local_420 = "bBindType";
                            cVar6 = FUN_11607600(local_428,(int)&local_248 + 2);
                            FUN_10a2eb80();
                            if (cVar6 != '\0') {
                              local_448[0] = 0xb;
                              local_440 = "chColumn";
                              cVar6 = FUN_11607590(local_448,(int)&local_248 + 3);
                              FUN_10a2eb80();
                              if (cVar6 != '\0') {
                                auStack_c17[(uint)local_c18 * 2] = local_24c;
                                auStack_c17[(uint)local_c18 * 2 + 1] = local_248;
                                local_c18 = local_c18 + 1;
                                FUN_10a2efb0();
                                piVar12 = local_1cc;
                                goto LAB_1160d59a;
                              }
                            }
                          }
                        }
                      }
                      FUN_10a2efb0();
                      break;
                    }
LAB_1160d59a:
                    local_22c = local_22c + 1;
                  } while (local_22c < local_268);
                }
                FUN_10a2eb80();
              }
              FUN_10a2efb0();
            }
            FUN_10a2eb80();
            if ((stack0xfffff22f != 0) &&
               ((iVar7 = FUN_10254130(stack0xfffff22f), iVar7 == 0 ||
                ((((local_dc9 == '\0' && (*(int *)(iVar7 + 0x50) != 0)) &&
                  (*(int *)(iVar7 + 0x50) < (int)local_dcd)) ||
                 ((*(int *)(iVar7 + 0x48) != 0 && (*(int *)(iVar7 + 0x48) < (int)local_dcd))))))))
            goto LAB_1160d774;
            iVar7 = 0;
            if (local_c18 != 0) {
              do {
                FUN_10254130(auStack_c17[iVar7 * 2]);
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)(uint)local_c18);
            }
            switch(local_dc4) {
            case 1:
              auStack_4a8[0] = 0xb;
              pcStack_4a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_4a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_4c8[0] = 0xb;
              pcStack_4c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_4c8,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_10254130(uStack_dc2);
              goto joined_r0x1160dce7;
            case 2:
              auStack_4e8[0] = 0xb;
              pcStack_4e0 = "iCondParam1";
              cVar6 = FUN_1160ace0(auStack_4e8,aiStack_930);
              FUN_10a2eb80();
              auStack_508[0] = 0xb;
              if (cVar6 != '\0') {
                uStack_dc2 = aiStack_930[0];
              }
              pcStack_500 = "iCondParam2";
              cVar6 = FUN_1160ace0(auStack_508,&local_234);
              FUN_10a2eb80();
              if (cVar6 != '\0') {
                piStack_dbe = local_234;
              }
              goto LAB_1160c0fe;
            case 3:
              auStack_528[0] = 0xb;
              pcStack_520 = "iCondParam1";
              FUN_10a2f4b0(auStack_528,&uStack_dc2);
              FUN_10a2eb80();
              auStack_548[0] = 0xb;
              pcStack_540 = "iCondParam2";
              FUN_10a2f4b0(auStack_548,&piStack_dbe);
              FUN_10a2eb80();
              if (((0 < uStack_dc2) && (-1 < (int)piStack_dbe)) && ((int)piStack_dbe < 4))
              goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 4:
              auStack_568[0] = 0xb;
              pcStack_560 = "iCondParam1";
              FUN_10a2f4b0(auStack_568,&uStack_dc2);
              FUN_10a2eb80();
              auStack_588[0] = 0xb;
              pcStack_580 = "iCondParam2";
              FUN_10a2f4b0(auStack_588,&piStack_dbe);
              FUN_10a2eb80();
              if ((uStack_dc2 < 0) || ((int)piStack_dbe < 0)) goto LAB_1160d774;
              bVar16 = SBORROW4(uStack_dc2,(int)piStack_dbe);
              iVar7 = uStack_dc2 - (int)piStack_dbe;
              bVar15 = iVar7 == 0;
              goto LAB_1160d76e;
            case 5:
              auStack_668[0] = 0xb;
              pcStack_660 = "bCondId";
              FUN_11607600(auStack_668,&bStack_dc3);
              FUN_10a2eb80();
              auStack_688[0] = 0xb;
              pcStack_680 = "iCondParam1";
              FUN_10a2f4b0(auStack_688,&uStack_dc2);
              FUN_10a2eb80();
              auStack_6a8[0] = 0xb;
              pcStack_6a0 = "iCondParam2";
              FUN_10a2f4b0(auStack_6a8,&piStack_dbe);
              FUN_10a2eb80();
              if ((0 < (int)piStack_dbe) && (local_200 <= (int)(uint)bStack_dc3)) goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 6:
              auStack_728[0] = 0xb;
              pcStack_720 = "bCondId";
              FUN_11607600(auStack_728,&bStack_dc3);
              FUN_10a2eb80();
              auStack_748[0] = 0xb;
              pcStack_740 = "iCondParam1";
              FUN_10a2f4b0(auStack_748,&uStack_dc2);
              FUN_10a2eb80();
              auStack_768[0] = 0xb;
              pcStack_760 = "iCondParam2";
              FUN_10a2f4b0(auStack_768,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_10254130(uStack_dc2);
joined_r0x1160dce7:
              if ((iVar7 != 0) && (0 < (int)piStack_dbe)) {
                piVar12 = *(int **)(iVar7 + 0x48);
                if (piVar12 != (int *)0x0) {
                  bVar16 = SBORROW4((int)piStack_dbe,(int)piVar12);
                  iVar7 = (int)piStack_dbe - (int)piVar12;
                  bVar15 = piStack_dbe == piVar12;
LAB_1160d76e:
                  if (!bVar15 && bVar16 == iVar7 < 0) goto LAB_1160d774;
                }
                goto LAB_1160c0fe;
              }
              goto LAB_1160d774;
            case 7:
              auStack_788[0] = 0xb;
              pcStack_780 = "szCondParam";
              FUN_11607840(auStack_788,auStack_dba);
              break;
            case 8:
              auStack_7e8[0] = 0xb;
              pcStack_7e0 = "bCondId";
              FUN_11607600(auStack_7e8,&bStack_dc3);
              FUN_10a2eb80();
              auStack_808[0] = 0xb;
              pcStack_800 = "iCondParam1";
              FUN_10a2f4b0(auStack_808,&uStack_dc2);
              FUN_10a2eb80();
              auStack_828[0] = 0xb;
              pcStack_820 = "iCondParam2";
              FUN_10a2f4b0(auStack_828,&piStack_dbe);
              break;
            case 9:
              auStack_848[0] = 0xb;
              pcStack_840 = "iCondParam1";
              FUN_10a2f4b0(auStack_848,&uStack_dc2);
              FUN_10a2eb80();
              auStack_868[0] = 0xb;
              pcStack_860 = "iCondParam2";
              FUN_10a2f4b0(auStack_868,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_114dc750(uStack_dc2);
              if (iVar7 != 0) {
LAB_1160dc27:
                if (0 < (int)piStack_dbe) goto LAB_1160c0fe;
              }
              goto LAB_1160d774;
            case 10:
              auStack_888[0] = 0xb;
              pcStack_880 = "szCondParam";
              FUN_11607840(auStack_888,auStack_dba);
              FUN_10a2eb80();
              auStack_8a8[0] = 0xb;
              pcStack_8a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_8a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_8c8[0] = 0xb;
              pcStack_8c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_8c8,&piStack_dbe);
              break;
            case 0xb:
              auStack_468[0] = 0xb;
              pcStack_460 = "szCondArg1";
              FUN_11607940(auStack_468,auStack_d18);
              FUN_10a2eb80();
              auStack_488[0] = 0xb;
              pcStack_480 = "szCondArg2";
              FUN_11607940(auStack_488,auStack_c98);
              break;
            case 0xc:
              auStack_8e8[0] = 0xb;
              pcStack_8e0 = "iCondParam1";
              FUN_10a2f4b0(auStack_8e8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_908[0] = 0xb;
              pcStack_900 = "iCondParam2";
              FUN_10a2f4b0(auStack_908,&piStack_dbe);
              break;
            case 0xd:
              auStack_928[0] = 0xb;
              pcStack_920 = "iCondParam1";
              FUN_10a2f4b0(auStack_928,&uStack_dc2);
              FUN_10a2eb80();
              auStack_940[0] = 0xb;
              pcStack_938 = "iCondParam2";
              FUN_10a2f4b0(auStack_940,&piStack_dbe);
              FUN_10a2eb80();
              auStack_960[0] = 0xb;
              pcStack_958 = "bCondId";
              FUN_11607600(auStack_960,&bStack_dc3);
              FUN_10a2eb80();
              iVar7 = FUN_107ca5b0(uStack_dc2);
              if ((iVar7 != 0) && (iVar7 = FUN_116b8a70(piStack_dbe), iVar7 != 0))
              goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 0xe:
              auStack_6c8[0] = 0xb;
              pcStack_6c0 = "bCondId";
              FUN_11607600(auStack_6c8,&bStack_dc3);
              FUN_10a2eb80();
              auStack_6e8[0] = 0xb;
              pcStack_6e0 = "iCondParam1";
              FUN_10a2f4b0(auStack_6e8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_708[0] = 0xb;
              pcStack_700 = "iCondParam2";
              FUN_10a2f4b0(auStack_708,&piStack_dbe);
              FUN_10a2eb80();
              if (0 < uStack_dc2) goto LAB_1160dc27;
              goto LAB_1160d774;
            case 0xf:
              auStack_5a8[0] = 0xb;
              pcStack_5a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_5a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_5c8[0] = 0xb;
              pcStack_5c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_5c8,&piStack_dbe);
              FUN_10a2eb80();
              auStack_5e8[0] = 0xb;
              pcStack_5e0 = "bCondId";
              FUN_11607600(auStack_5e8,&bStack_dc3);
              FUN_10a2eb80();
              if (((-1 < uStack_dc2) && (-1 < (int)piStack_dbe)) && (bStack_dc3 != 0))
              goto LAB_1160c0fe;
LAB_1160d774:
              FUN_10a2efb0();
              param_1 = local_1b4;
              goto LAB_1160d785;
            case 0x10:
              auStack_608[0] = 0xb;
              pcStack_600 = "iCondParam1";
              FUN_10a2f4b0(auStack_608,&uStack_dc2);
              break;
            case 0x11:
              auStack_7a8[0] = 0xb;
              pcStack_7a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_7a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_7c8[0] = 0xb;
              pcStack_7c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_7c8,&piStack_dbe);
              break;
            case 0x12:
              auStack_628[0] = 0xb;
              pcStack_620 = "iCondParam1";
              FUN_10a2f4b0(auStack_628,&uStack_dc2);
              FUN_10a2eb80();
              auStack_648[0] = 0xb;
              pcStack_640 = "iCondParam2";
              FUN_10a2f4b0(auStack_648,&piStack_dbe);
              break;
            default:
              goto LAB_1160c0fe;
            }
LAB_1160c0f9:
            FUN_10a2eb80();
LAB_1160c0fe:
            param_1 = local_1b4;
            puVar11 = (undefined4 *)local_dd4;
            puVar14 = (undefined4 *)
                      (local_1b4[0x14] + 0xad3 + (uint)*(byte *)(local_1b4[0x14] + 0xad2) * 0x423);
            for (iVar7 = 0x108; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined2 *)puVar14 = *(undefined2 *)puVar11;
            *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar11 + 2);
            *(char *)(local_1b4[0x14] + 0xad2) = *(char *)(local_1b4[0x14] + 0xad2) + '\x01';
            local_1b8[1] = local_1b8[1] + -1;
            if (local_1b8[1] < 1) {
              (**(code **)*local_1b8)(1);
              local_1ec = local_1ec + 1;
              piVar12 = local_1e8;
            }
            else {
LAB_1160d785:
              local_1ec = local_1ec + 1;
              piVar12 = local_1e8;
            }
          }
        }
        if (local_1b8 != (int *)0x0) {
LAB_1160e081:
          piVar9[1] = piVar9[1] + -1;
          if (piVar9[1] < 1) {
            (**(code **)*piVar9)(1);
          }
        }
LAB_1160e092:
        FUN_10a2eb80();
        param_1 = local_1b4;
      }
      if ((piVar12 != (int *)0x0) && (piVar12[1] = piVar12[1] + -1, piVar12[1] < 1)) {
        (**(code **)*piVar12)(1);
      }
      param_1[9] = 1;
      FUN_11a89daa();
      return;
    }
  }
LAB_1160b0ab:
  (**(code **)(*param_1 + 8))();
LAB_1160b0b2:
  FUN_11a89daa();
  return;
}



/* ===== FUN_116b9a90 @ 116b9a90  size=2645 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"Entry_ID"
//   u"Entry_Point"
//   u"Position_X"
//   u"Position_Y"
//   u"Level_ID"
//   u"FromLevelID"
//   u"FromTriggerName"
//   u"TaskShowCondition"
//   u"TabID"
//   u"TabName"
//   u"IsSpecReward"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Entry_ID""
     "u"Entry_Point""
     "u"Position_X""
     "u"Position_Y""
     "u"Level_ID""
     "u"FromLevelID""
     "u"FromTriggerName""
     "u"TaskShowCondition""
     "u"TabID""
     "u"TabName"" */

void __thiscall FUN_116b9a90(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_4a9;
  undefined4 local_4a8;
  undefined2 local_4a4 [16];
  undefined2 *local_484;
  undefined2 *local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined1 local_470 [20];
  undefined1 *local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined1 local_43c [16];
  undefined4 local_42c;
  undefined1 *local_428;
  int local_424;
  undefined4 *local_420;
  undefined4 *local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 *local_410;
  undefined1 local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1238b3b4 & 1) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 1;
    FUN_100f67b0(L"Entry_ID");
  }
  if ((DAT_1238b3b4 & 2) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238b3b0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b3b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b3b0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x20))(&DAT_1238b3b8);
    *(undefined4 *)(param_1 + 0x10) = uVar6;
  }
  FUN_116b7cd0();
  if ((DAT_1238b3b4 & 4) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 4;
    FUN_100f67b0(L"Entry_Point");
  }
  if ((DAT_1238b3b4 & 8) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 8;
    iVar2 = FUN_100e1cb0(DAT_1238b3c8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b3cc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b3c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_44c = (**(code **)(*param_2 + 0x20))(&DAT_1238b3cc);
  }
  if ((DAT_1238b3b4 & 0x10) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x10;
    FUN_100f67b0(L"Position_X");
  }
  if ((DAT_1238b3b4 & 0x20) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_1238b3dc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b3e0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b3dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_448 = (**(code **)(*param_2 + 0x20))(&DAT_1238b3e0);
  }
  if ((DAT_1238b3b4 & 0x40) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x40;
    FUN_100f67b0(L"Position_Y");
  }
  if (-1 < (char)DAT_1238b3b4) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_1238b3f0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b3f4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b3f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_444 = (**(code **)(*param_2 + 0x20))(&DAT_1238b3f4);
  }
  uVar6 = 0;
  local_4a8 = 0;
  if ((DAT_1238b3b4 & 0x100) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x100;
    FUN_100f67b0(L"Level_ID");
  }
  if ((DAT_1238b3b4 & 0x200) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_1238b404);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b408);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b404);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x20))(&DAT_1238b408);
    local_4a8 = uVar6;
  }
  if (local_420 == local_41c) {
    FUN_10463c40(local_420,&local_4a8,&local_4a9,1,1);
  }
  else {
    *local_420 = uVar6;
    local_420 = local_420 + 1;
  }
  if ((DAT_1238b3b4 & 0x400) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x400;
    FUN_100f67b0(L"FromLevelID");
  }
  if ((DAT_1238b3b4 & 0x800) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_1238b418);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b41c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b418);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_440 = (**(code **)(*param_2 + 0x20))(&DAT_1238b41c);
  }
  if ((DAT_1238b3b4 & 0x1000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x1000;
    FUN_100f67b0(L"FromTriggerName");
  }
  if ((DAT_1238b3b4 & 0x2000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_1238b42c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b430);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b42c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_43c,&DAT_1238b430);
  }
  if ((DAT_1238b3b4 & 0x4000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x4000;
    FUN_100f67b0(L"TaskShowCondition");
  }
  if ((DAT_1238b3b4 & 0x8000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_1238b440);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b444);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b440);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_418 = (**(code **)(*param_2 + 0x20))(&DAT_1238b444);
  }
  if ((DAT_1238b3b4 & 0x10000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x10000;
    FUN_100f67b0(L"TabID");
  }
  if ((DAT_1238b3b4 & 0x20000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_1238b454);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b458);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b454);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_414 = (**(code **)(*param_2 + 0x20))(&DAT_1238b458);
  }
  if ((DAT_1238b3b4 & 0x40000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x40000;
    FUN_100f67b0(L"TabName");
  }
  if ((DAT_1238b3b4 & 0x80000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_1238b468);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b46c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238b468);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_484 = local_4a4;
    local_4a4[0] = 0;
    local_480 = local_484;
    (**(code **)(*param_2 + 0x28))(local_4a4,&DAT_1238b46c);
    puVar3 = (undefined4 *)FUN_100e5530(&local_4a8,local_480);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_480 != local_4a4) && (local_480 != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_480);
    }
  }
  iVar2 = 0;
  if ((DAT_1238b3b4 & 0x100000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x100000;
    FUN_100f67b0(L"IsSpecReward");
  }
  if ((DAT_1238b3b4 & 0x200000) == 0) {
    DAT_1238b3b4 = DAT_1238b3b4 | 0x200000;
    iVar4 = FUN_100e1cb0(DAT_1238b47c);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238b480);
  if (cVar1 == '\0') {
    local_408 = '\0';
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_1238b47c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1238b480);
  }
  local_40c = iVar2 == 1;
  FUN_116b4bf0(&local_44c,&local_44c);
  FUN_116b8360();
  FUN_116b7d90();
  local_47c = local_44c;
  local_474 = local_440;
  local_478 = uVar6;
  FUN_100d83d0(local_428,local_42c);
  local_458 = local_418;
  local_454 = local_414;
  puVar5 = &DAT_11d9d32b;
  if (local_410 != (undefined1 *)0x0) {
    puVar5 = local_410;
  }
  CPet__SetName(puVar5);
  FUN_116bcd70(&local_47c);
  FUN_100e5670();
  if ((local_45c != local_470) && (local_45c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_45c);
  }
  FUN_100e5670();
  if (local_424 != 0) {
    FUN_10c3d5d0(local_424);
  }
  if ((local_428 != local_43c) && (local_428 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_428);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_116c49e0 @ 116c49e0  size=78 ===== */
// calls: CEquipLevelUpInfo::GetInfoManager
// strings:
//   "CEquipLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo"" */

undefined4 FUN_116c49e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipLevelUpInfo__GetInfoManager(0,"CEquipLevelUpInfo",0);
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



/* ===== CEquipEnforceBreak::GetManagers_116c4a30 @ 116c4a30  size=404 ===== */
// calls: CEquipEnforceBreak::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CEquipEnforceBreak"
//   "CEquipEnforceBreak::GetManagers"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipEnforceBreak::GetManagers
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak""
     ""CEquipEnforceBreak::GetManagers"" */

int CEquipEnforceBreak__GetManagers_116c4a30(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
  if ((param_1 != (undefined **)0xffffffff) &&
     ((((param_1 != (undefined **)0x0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar2 + 0x28), iVar5 != 0)) &&
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 &&
       (iVar3 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar5) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar5) * 4), iVar2 != 0)) {
      iVar6 = *(int *)(iVar2 + 200);
      if (iVar6 == 3) {
        return (int)param_1;
      }
      if (2 < iVar6) {
        return 0;
      }
    }
  }
  iVar5 = (int)param_1 + 1;
  iVar2 = FUN_114072a0(iVar5);
  do {
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 200) == iVar6 + 1) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      param_1 = &PTR_FUN_11d24abc;
      if ((DAT_1218f860 & 1) == 0) {
        DAT_1218f860 = DAT_1218f860 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceBreak::GetManagers");
        FUN_11a8911f(&LAB_11c9c460);
      }
      puVar4 = (undefined *)*DAT_1218f844;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)CInfoManager__FindByName(&param_1,"CEquipEnforceBreak",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1218f8a8 & 1) == 0) {
          DAT_1218f874 = 0;
          DAT_1218f884 = 0;
          uRam1218f888 = 0;
          _DAT_1218f88c = 0;
          DAT_1218f890 = 0;
          DAT_1218f8a8 = DAT_1218f8a8 | 1;
          _DAT_1218f870 = &PTR_FUN_11d24af8;
          DAT_1218f894 = _DAT_11de9ae0;
          DAT_1218f898 = _UNK_11de9ae4;
          uRam1218f89c = _UNK_11de9ae8;
          DAT_1218f8a0 = _UNK_11de9aec;
          DAT_1218f8a4 = 1;
          DAT_1218f878 = puVar4;
          _DAT_1218f87c = puVar4;
          _DAT_1218f880 = puVar4;
          FUN_11a8911f(&LAB_11ca7a10);
        }
        puVar4 = &DAT_1218f870;
      }
      if (iVar5 == -1) {
        return 0;
      }
      if ((iVar5 == 0) && (*(int *)(puVar4 + 0x30) != 0)) {
        return 0;
      }
      iVar2 = *(int *)(puVar4 + 0x28);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar5 - *(int *)(puVar4 + 0x30);
      if ((-1 < iVar3) && (iVar3 < *(int *)(puVar4 + 0x24))) break;
LAB_116c4bb1:
      iVar2 = 0;
    }
    iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar3 / iVar2) * 4);
    if (iVar1 == 0) goto LAB_116c4bb1;
    iVar2 = *(int *)(iVar1 + (iVar3 % iVar2) * 4);
  } while( true );
}



/* ===== FUN_116d3ab0 @ 116d3ab0  size=24299 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"Title"
//   u"ForgeEnabled"
//   u"SupplyBoxEnabled"
//   u"Mail"
//   u"Auction"
//   u"Enhance"
//   u"RankUp"
//   u"ManufactureLearn"
//   u"Storage"
//   u"Found"
//   u"WeaponWake"
//   u"EquipEmbed"
//   u"SearchHunterGroup"
//   u"QuestHunterGroup"
//   u"CreateHunterGroup"
//   u"HunterGroupEditIcon"
//   u"HunterGroupSalary"
//   u"HunterGroupEditBaseName"
//   u"HunterGroupLeagueStart"
//   u"HunterGroupLeagueStartPK"
// <decompile failed/virtualized>

/* ===== FUN_116ebd80 @ 116ebd80  size=64 ===== */
// strings:
//   "OpenEnforceDiamond"

/* [RE-AUTO c0]
   strings:
     ""OpenEnforceDiamond"" */

void __fastcall FUN_116ebd80(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d41958;
  local_c = local_10;
  FUN_100b62c0("OpenEnforceDiamond","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_1177c850 @ 1177c850  size=4146 ===== */
// strings:
//   "EquipRandPassiveSkillActivateActionDef"
//   "EquipFoundTimesCheckDef"
//   "EquipCharTitleCheckDef"
//   "EquipSkillsPointAllCheckDef"
//   "EquipStarCardCheckDef"
//   "EquipSkillPointCheckDef"
//   "EquipNoneCheckDef"
//   "EquipStarLevelCheckDef"
//   "GameObjDef"
//   "EquipRandPassiveSkillActivateSetDef"
//   "DragonItemDef"
//   "DragonDef"
//   "EquipDef"
//   "GiftBagItemDef"
//   "GiftBagDef"
//   "GiftBagActionDef"
//   "GiftBagGroupDef"
//   "GiftItem"
//   "GiftBagCharLevelCheckDef"
//   "GiftBagHRLevelCheckDef"

/* [RE-AUTO c0]
   strings:
     ""EquipRandPassiveSkillActivateActionDef""
     ""EquipFoundTimesCheckDef""
     ""EquipCharTitleCheckDef""
     ""EquipSkillsPointAllCheckDef""
     ""EquipStarCardCheckDef""
     ""EquipSkillPointCheckDef""
     ""EquipNoneCheckDef""
     ""EquipStarLevelCheckDef""
     ""GameObjDef""
     ""EquipRandPassiveSkillActivateSetDef"" */

undefined4 FUN_1177c850(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_100fd0c0(param_1,"EquipRandPassiveSkillActivateActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipFoundTimesCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipCharTitleCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipSkillsPointAllCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipStarCardCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipSkillPointCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipNoneCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipStarLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GameObjDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipRandPassiveSkillActivateSetDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x1c);
  }
  cVar1 = FUN_100fd0c0(param_1,"DragonItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"DragonDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x40);
  }
  cVar1 = FUN_100fd0c0(param_1,"EquipDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x30);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGroupDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc4);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftItem");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagCharLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagHRLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagVipLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagOnlineTimeCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagConsectiveDaysCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagAcceptMutexCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGoldPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagItemPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGroupCharLevelCheckRngDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGroupHRLevelCheckRngDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGroupDRFTCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagGroupAllRFTCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"GiftBagHuntCreditPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"ItemNumRateDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"FixedItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x20);
  }
  cVar1 = FUN_100fd0c0(param_1,"RandomItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"RandomItemGroupDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"ItemDecomposeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidHuntItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"MasterAward");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidHuntActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidHuntGoldPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidHuntItemsPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"AttendAwardDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidAwardDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  cVar1 = FUN_100fd0c0(param_1,"MasterAwardDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"RapidHuntDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x18);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SchedulePrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x2c);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleGoldPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleExpPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleItemsPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleGoldShowDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"ScheduleItemsShowDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x4c);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastFoodDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastImageDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x84);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastSocialActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x38);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastSoulStoneLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastSoulStoneStageCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastSoulStoneSkillLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastSoulStoneSkillLevelsCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastShouHunCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SoulBeastLieHunCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakWordDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x18);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x30);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakWordExecDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakVoiceExecDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakAddBuffContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakAddBuffGroupContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakAddBuffGeneContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakUseSkillContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakUseItemContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakUseItemGroupContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x18);
  }
  cVar1 = FUN_100fd0c0(param_1,"SpeakChangeStateContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskItemDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"PreTaskDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x138);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskActionDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x20);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskEventFilterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskSeriesDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskChapterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x38);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGroupDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskLibDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x48);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCharLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCharSexCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHRLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHRCardCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskMerLvCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskPreTaskCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCharTitleCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskWarteamLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcAtdCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcOrgCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskManufactureLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskManufactureDegreeCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskActivityCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskTeamCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskTeamLevelCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskTeamSexCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskMerCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskWarteamCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskItemCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAcceptMutexCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCompleteMutexCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskRepeatCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAloneCheckDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGoldPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskExpPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskMerExpPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHuntSoulPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskContributionPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcAtdPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmExpPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskItemPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskItemsPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskItemReclaimDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGuildPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x10);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskSpoorPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHRPointPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHuntCreditPrizeDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGroupMutexDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGuildCelebrationScoreDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(8);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHunterContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAccSuitSkillUnlockContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAccExpressionLearnContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAccWeaponTrialContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskSoulStoneLevelContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGatherContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x2c);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskSubmitContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x2c);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskTalkContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskUseSkillContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskUseItemContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskMonsterPartBrokenContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskMonsterAbnormalContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskLocateContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCaptureContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskLevelFinishContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x3c);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHunterStarStarUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskHunterStarFinishCardContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcAtdLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcOrgLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskNpcAtdGiveGiftContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskPetLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskPetTrainingContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskPetEmploymentContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x20);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskAttackContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x2c);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskManufactureLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmLevelUpAnyContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmGatherContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x2c);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmGatherAnyContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmPetLevelUpContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskFarmPetLevelUpAnyContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskCommonContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x34);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskLocationFilterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskWeaponFilterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskPetFilterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(4);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskBuffFilterDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskGuildLevelContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  cVar1 = FUN_100fd0c0(param_1,"TaskStatisticsContentDef");
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x28);
  }
  return 0;
}



/* ===== FUN_1177efb0 @ 1177efb0  size=37 ===== */
// strings:
//   "ItemDecomposeDef"

/* [RE-AUTO c0]
   strings:
     ""ItemDecomposeDef"" */

int FUN_1177efb0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("ItemDecomposeDef","");
  return param_1;
}



/* ===== FUN_1177fb20 @ 1177fb20  size=37 ===== */
// strings:
//   "TaskFarmLevelUpAnyContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmLevelUpAnyContentDef"" */

int FUN_1177fb20(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmLevelUpAnyContentDef","");
  return param_1;
}



/* ===== FUN_1177fb50 @ 1177fb50  size=37 ===== */
// strings:
//   "TaskFarmLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmLevelUpContentDef"" */

int FUN_1177fb50(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_1177fb80 @ 1177fb80  size=37 ===== */
// strings:
//   "TaskFarmPetLevelUpAnyContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmPetLevelUpAnyContentDef"" */

int FUN_1177fb80(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmPetLevelUpAnyContentDef","");
  return param_1;
}



/* ===== FUN_1177fbb0 @ 1177fbb0  size=37 ===== */
// strings:
//   "TaskFarmPetLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmPetLevelUpContentDef"" */

int FUN_1177fbb0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmPetLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_1177ffa0 @ 1177ffa0  size=37 ===== */
// strings:
//   "TaskLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskLevelUpContentDef"" */

int FUN_1177ffa0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11780090 @ 11780090  size=37 ===== */
// strings:
//   "TaskManufactureLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskManufactureLevelUpContentDef"" */

int FUN_11780090(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskManufactureLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11780210 @ 11780210  size=37 ===== */
// strings:
//   "TaskNpcAtdLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskNpcAtdLevelUpContentDef"" */

int FUN_11780210(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskNpcAtdLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_117802a0 @ 117802a0  size=37 ===== */
// strings:
//   "TaskNpcOrgLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskNpcOrgLevelUpContentDef"" */

int FUN_117802a0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskNpcOrgLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11780330 @ 11780330  size=37 ===== */
// strings:
//   "TaskPetLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetLevelUpContentDef"" */

int FUN_11780330(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11780c90 @ 11780c90  size=37 ===== */
// strings:
//   "ItemDecomposeDef"

/* [RE-AUTO c0]
   strings:
     ""ItemDecomposeDef"" */

int FUN_11780c90(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("ItemDecomposeDef","");
  return param_1;
}



/* ===== FUN_11781800 @ 11781800  size=37 ===== */
// strings:
//   "TaskFarmLevelUpAnyContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmLevelUpAnyContentDef"" */

int FUN_11781800(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmLevelUpAnyContentDef","");
  return param_1;
}



/* ===== FUN_11781830 @ 11781830  size=37 ===== */
// strings:
//   "TaskFarmLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmLevelUpContentDef"" */

int FUN_11781830(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11781860 @ 11781860  size=37 ===== */
// strings:
//   "TaskFarmPetLevelUpAnyContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmPetLevelUpAnyContentDef"" */

int FUN_11781860(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmPetLevelUpAnyContentDef","");
  return param_1;
}



/* ===== FUN_11781890 @ 11781890  size=37 ===== */
// strings:
//   "TaskFarmPetLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskFarmPetLevelUpContentDef"" */

int FUN_11781890(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskFarmPetLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11781c80 @ 11781c80  size=37 ===== */
// strings:
//   "TaskLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskLevelUpContentDef"" */

int FUN_11781c80(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11781d70 @ 11781d70  size=37 ===== */
// strings:
//   "TaskManufactureLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskManufactureLevelUpContentDef"" */

int FUN_11781d70(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskManufactureLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11781ef0 @ 11781ef0  size=37 ===== */
// strings:
//   "TaskNpcAtdLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskNpcAtdLevelUpContentDef"" */

int FUN_11781ef0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskNpcAtdLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11781f80 @ 11781f80  size=37 ===== */
// strings:
//   "TaskNpcOrgLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskNpcOrgLevelUpContentDef"" */

int FUN_11781f80(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskNpcOrgLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11782010 @ 11782010  size=37 ===== */
// strings:
//   "TaskPetLevelUpContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskPetLevelUpContentDef"" */

int FUN_11782010(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskPetLevelUpContentDef","");
  return param_1;
}



/* ===== FUN_11783760 @ 11783760  size=239 ===== */
// strings:
//   "AcceptChecks"
//   "Foods"
//   "Images"
//   "EvolveRule"
//   "LevelUpRule"
//   "SocialActions"

/* [RE-AUTO c0]
   strings:
     ""AcceptChecks""
     ""Foods""
     ""Images""
     ""EvolveRule""
     ""LevelUpRule""
     ""SocialActions"" */

void __thiscall FUN_11783760(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_117827c0(param_2);
  iVar1 = FUN_118a6e60(param_2,"AcceptChecks");
  if (iVar1 != 0) {
    FUN_11768560(iVar1,param_1 + 0x10);
  }
  iVar1 = FUN_118a6e60(param_2,"Foods");
  if (iVar1 != 0) {
    FUN_117686e0(iVar1,param_1 + 0x1c);
  }
  iVar1 = FUN_118a6e60(param_2,"Images");
  if (iVar1 != 0) {
    FUN_117687a0(iVar1,param_1 + 0x28);
  }
  iVar1 = FUN_118a6e60(param_2,"EvolveRule");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x34);
  }
  iVar1 = FUN_118a6e60(param_2,"LevelUpRule");
  if (iVar1 != 0) {
    FUN_118a68a0(iVar1,param_1 + 0x38);
  }
  iVar1 = FUN_118a6e60(param_2,"SocialActions");
  if (iVar1 != 0) {
    FUN_117689e0(iVar1,param_1 + 0x3c);
  }
  iVar1 = FUN_118a6e60(param_2,&DAT_11de09d4);
  if (iVar1 != 0) {
    FUN_118a6dc0(iVar1,param_1 + 0x48);
  }
  return;
}



/* ===== FUN_117b1d30 @ 117b1d30  size=85 ===== */
// calls: CPlayerLevelUpInfo::GetInfoManager
// strings:
//   "CPlayerLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo"" */

undefined4 FUN_117b1d30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      return *(undefined4 *)(iVar2 + 0x2c);
    }
  }
  return 0;
}



/* ===== FUN_117b1da0 @ 117b1da0  size=52 ===== */
// calls: CPlayerLevelUpInfo::GetInfoManager
// strings:
//   "CPlayerLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo"" */

undefined4 FUN_117b1da0(int param_1)

{
  int iVar1;
  
  iVar1 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_117b6d70 @ 117b6d70  size=144 ===== */
// calls: CEquipLevelUpInfo::GetInfoManager
// strings:
//   "CEquipLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo"" */

undefined4 FUN_117b6d70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = CEquipLevelUpInfo__GetInfoManager(0,"CEquipLevelUpInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar1 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (param_1 / iVar2) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (param_1 % iVar2) * 4), iVar1 != 0)) {
      iVar2 = *(int *)(iVar1 + 0xf0);
      iVar1 = iVar1 + 0xec;
      iVar4 = iVar1;
      if (iVar2 != 0) {
        do {
          if (*(int *)(iVar2 + 0x10) < param_2) {
            iVar3 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar3 = *(int *)(iVar2 + 8);
            iVar4 = iVar2;
          }
          iVar2 = iVar3;
        } while (iVar3 != 0);
        if (iVar4 == iVar1) {
          return 0;
        }
        if (param_2 < *(int *)(iVar4 + 0x10)) {
          iVar4 = iVar1;
        }
      }
      if (iVar4 != iVar1) {
        return *(undefined4 *)(iVar4 + 0x14);
      }
    }
  }
  return 0;
}



/* ===== FUN_117b6e00 @ 117b6e00  size=144 ===== */
// calls: CEquipLevelUpInfo::GetInfoManager
// strings:
//   "CEquipLevelUpInfo"

/* [RE-AUTO c0]
   calls: CEquipLevelUpInfo::GetManagers
   strings:
     ""CEquipLevelUpInfo"" */

undefined4 FUN_117b6e00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = CEquipLevelUpInfo__GetInfoManager(0,"CEquipLevelUpInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar1 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (param_1 / iVar2) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (param_1 % iVar2) * 4), iVar1 != 0)) {
      iVar2 = *(int *)(iVar1 + 0x108);
      iVar1 = iVar1 + 0x104;
      iVar4 = iVar1;
      if (iVar2 != 0) {
        do {
          if (*(int *)(iVar2 + 0x10) < param_2) {
            iVar3 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar3 = *(int *)(iVar2 + 8);
            iVar4 = iVar2;
          }
          iVar2 = iVar3;
        } while (iVar3 != 0);
        if (iVar4 == iVar1) {
          return 0;
        }
        if (param_2 < *(int *)(iVar4 + 0x10)) {
          iVar4 = iVar1;
        }
      }
      if (iVar4 != iVar1) {
        return *(undefined4 *)(iVar4 + 0x14);
      }
    }
  }
  return 0;
}



/* ===== FUN_117b8f50 @ 117b8f50  size=52 ===== */
// calls: CSoulBeastLevelUpInfo::GetInfoManager
// strings:
//   "CSoulBeastLevelUpInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo"" */

undefined4 FUN_117b8f50(int param_1)

{
  int iVar1;
  
  iVar1 = CSoulBeastLevelUpInfo__GetInfoManager(0,"CSoulBeastLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLegendUpgrade::GetManagers @ 117e2fe0  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLegendUpgrade::GetManagers"

/* [RE-AUTO c3]
   id: CLegendUpgrade::GetManagers
   strings:
     ""CLegendUpgrade::GetManagers"" */

undefined * CLegendUpgrade__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4a848;
  if (param_3 == 0) {
    if ((DAT_123945dc & 1) == 0) {
      DAT_123945dc = DAT_123945dc | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendUpgrade::GetManagers");
      FUN_11a8911f(&LAB_11cab2f0);
    }
    if ((undefined *)*DAT_123945c0 != (undefined *)0x0) {
      return (undefined *)*DAT_123945c0;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123947a4 & 1) == 0) {
      DAT_123947a4 = DAT_123947a4 | 1;
      FUN_117e33d0();
      FUN_11a8911f(&LAB_11cab290);
    }
    puVar1 = &DAT_1239476c;
  }
  return puVar1;
}



/* ===== FUN_117e3a10 @ 117e3a10  size=52 ===== */
// calls: CLegendUpgrade::GetManagers
// strings:
//   "CLegendUpgrade"

/* [RE-AUTO c0]
   calls: CLegendUpgrade::GetManagers
   strings:
     ""CLegendUpgrade"" */

undefined4 FUN_117e3a10(int param_1)

{
  int iVar1;
  
  iVar1 = CLegendUpgrade__GetManagers(0,"CLegendUpgrade",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== CLegendUpgrade::GetManagers_117e3ae0 @ 117e3ae0  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CLegendUpgrade::GetManagers"

/* [RE-AUTO c3]
   id: CLegendUpgrade::GetManagers
   strings:
     ""CLegendUpgrade::GetManagers"" */

undefined4 CLegendUpgrade__GetManagers_117e3ae0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123945dc & 1) == 0) {
      DAT_123945dc = DAT_123945dc | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendUpgrade::GetManagers");
      FUN_11a8911f(&LAB_11cab2f0);
    }
    return *DAT_123945c0;
  }
  return 0;
}



/* ===== CLegendUpgrade::GetManagers_117e3be0 @ 117e3be0  size=382 ===== */
// calls: CLegendUpgrade::GetManagers, StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLegendPearlItemInfo"
//   "CLegendUpgrade"
//   "CLegendUpgrade::GetManagers"

/* [RE-AUTO c3]
   id: CLegendUpgrade::GetManagers
   calls: CLegendUpgrade::GetManagers
   strings:
     ""CLegendPearlItemInfo""
     ""CLegendUpgrade""
     ""CLegendUpgrade::GetManagers"" */

undefined4 CLegendUpgrade__GetManagers_117e3be0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined **local_8;
  
  iVar1 = FUN_108702f0(0,"CLegendPearlItemInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar1 + 0x28), iVar4 != 0)))) &&
     ((iVar2 = param_1 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar4) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (iVar2 % iVar4) * 4), iVar1 != 0)) {
      iVar1 = *(int *)(iVar1 + 0x1c0);
      piVar3 = (int *)CLegendUpgrade__GetManagers(0,"CLegendUpgrade",0);
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      iVar2 = 0;
      if (0 < iVar4) {
        do {
          local_8 = &PTR_FUN_11d4a848;
          if ((DAT_123945dc & 1) == 0) {
            DAT_123945dc = DAT_123945dc | 1;
            StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLegendUpgrade::GetManagers");
            FUN_11a8911f(&LAB_11cab2f0);
          }
          puVar5 = (undefined *)*DAT_123945c0;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)CInfoManager__FindByName(&local_8,"CLegendUpgrade",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_123947a4 & 1) == 0) {
              DAT_123947a4 = DAT_123947a4 | 1;
              FUN_117e33d0();
              FUN_11a8911f(&LAB_11cab290);
            }
            puVar5 = &DAT_1239476c;
          }
          local_8 = &PTR_FUN_11da54a8;
          if ((((-1 < iVar2) && (iVar2 < *(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2)) &&
              (*(int *)(*(int *)(puVar5 + 0x14) + iVar2 * 4) != 0)) &&
             (iVar6 = FUN_117e1b00(param_1), iVar6 != 0)) {
            if (iVar1 != 0) {
              return 0;
            }
            return 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      return 0;
    }
  }
  return 0;
}



/* ===== FUN_1180a8a0 @ 1180a8a0  size=9301 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"OpenCondition"
//   u"Name"
//   u"Instruction0"
//   u"Instruction1"
//   u"Instruction2"
//   u"Instruction3"
//   u"Instruction4"
//   u"Instruction5"
//   u"Instruction6"
//   u"Instruction7"
//   u"Instruction8"
//   u"Instruction9"
//   u"FinishCount1"
//   u"RewardId1"
//   u"FinishCount2"
//   u"RewardId2"
//   u"FinishCount3"
//   u"RewardId3"
//   u"FinishCount4"
//   u"RewardId4"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"OpenCondition""
     "u"Name""
     "u"Instruction0""
     "u"Instruction1""
     "u"Instruction2""
     "u"Instruction3""
     "u"Instruction4""
     "u"Instruction5""
     "u"Instruction6""
     "u"Instruction7"" */

void __thiscall FUN_1180a8a0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_440;
  int local_43c;
  undefined1 local_438 [7];
  undefined1 local_431;
  uint local_430;
  wchar_t awStack_42c [2];
  wchar_t awStack_428 [2];
  wchar_t awStack_424 [2];
  wchar_t local_420 [4];
  undefined2 local_418 [4];
  uint *local_410;
  uint *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_12395f18 & 1) == 0) {
    DAT_12395f18 = DAT_12395f18 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_12395f18 & 2) == 0) {
    DAT_12395f18 = DAT_12395f18 | 2;
    iVar2 = FUN_100e1cb0(DAT_12395f14);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f1c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12395f14);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12395f1c);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_12395f18 & 4) == 0) {
    DAT_12395f18 = DAT_12395f18 | 4;
    FUN_100f67b0(L"OpenCondition");
  }
  if ((DAT_12395f18 & 8) == 0) {
    DAT_12395f18 = DAT_12395f18 | 8;
    iVar2 = FUN_100e1cb0(DAT_12395f2c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f30);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12395f2c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12395f30);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_12395f18 & 0x10) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x10;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_12395f18 & 0x20) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12395f40);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f44);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12395f40);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = &local_430;
    local_430 = local_430 & 0xffff0000;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395f44);
    puVar4 = (undefined4 *)FUN_100e5530(local_438,local_40c);
    puVar6 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar6);
    FUN_100e5670();
    if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  FUN_100e5570();
  if ((DAT_12395f18 & 0x40) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x40;
    DAT_12395f54 = -1;
    local_40c = &local_430;
    local_410 = (uint *)local_418;
    local_430._0_2_ = u_Instruction0_11d4c8e4[0];
    local_430._2_2_ = u_Instruction0_11d4c8e4[1];
    awStack_42c[0] = u_Instruction0_11d4c8e4[2];
    awStack_42c[1] = u_Instruction0_11d4c8e4[3];
    awStack_428[0] = u_Instruction0_11d4c8e4[4];
    awStack_428[1] = u_Instruction0_11d4c8e4[5];
    awStack_424[0] = u_Instruction0_11d4c8e4[6];
    awStack_424[1] = u_Instruction0_11d4c8e4[7];
    local_420[0] = u_Instruction0_11d4c8e4[8];
    local_420[1] = u_Instruction0_11d4c8e4[9];
    local_420[2] = u_Instruction0_11d4c8e4[10];
    local_420[3] = u_Instruction0_11d4c8e4[0xb];
    local_418[0] = 0;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_12395f54) {
      DAT_12395f54 = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if (-1 < (char)DAT_12395f18) {
    DAT_12395f18 = DAT_12395f18 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12395f54);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f58);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12395f54);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = &local_430;
    local_430 = local_430 & 0xffff0000;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395f58);
    puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
    puVar6 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar6);
    FUN_100e5670();
    if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  cVar1 = FUN_100e57c0(&DAT_11d9d32b);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == *(int *)(param_1 + 0x30)) {
      FUN_108717e0(iVar2,local_438,&local_431,1,1);
    }
    else {
      if (iVar2 != 0) {
        FUN_100e5580(local_438);
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    }
    if ((DAT_12395f18 & 0x100) == 0) {
      DAT_12395f18 = DAT_12395f18 | 0x100;
      DAT_12395f68 = -1;
      local_40c = &local_430;
      local_410 = (uint *)local_418;
      local_430._0_2_ = u_Instruction1_11d4c900[0];
      local_430._2_2_ = u_Instruction1_11d4c900[1];
      awStack_42c[0] = u_Instruction1_11d4c900[2];
      awStack_42c[1] = u_Instruction1_11d4c900[3];
      awStack_428[0] = u_Instruction1_11d4c900[4];
      awStack_428[1] = u_Instruction1_11d4c900[5];
      awStack_424[0] = u_Instruction1_11d4c900[6];
      awStack_424[1] = u_Instruction1_11d4c900[7];
      local_420[0] = u_Instruction1_11d4c900[8];
      local_420[1] = u_Instruction1_11d4c900[9];
      local_420[2] = u_Instruction1_11d4c900[10];
      local_420[3] = u_Instruction1_11d4c900[0xb];
      local_418[0] = 0;
      iVar2 = FUN_100e1bf0(&local_430);
      if (iVar2 == -1) {
        iVar2 = FUN_100e1c30(&local_430);
      }
      if (iVar2 != DAT_12395f68) {
        DAT_12395f68 = iVar2;
      }
      if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
        FUN_10c3d5d0(local_40c);
      }
    }
    if ((DAT_12395f18 & 0x200) == 0) {
      DAT_12395f18 = DAT_12395f18 | 0x200;
      iVar2 = FUN_100e1cb0(DAT_12395f68);
      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f6c);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar2 = FUN_100e1c50(DAT_12395f68);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_410 = &local_430;
      local_430 = local_430 & 0xffff0000;
      local_40c = local_410;
      (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395f6c);
      puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
      puVar6 = &DAT_11d9d32b;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)*puVar4;
      }
      CPet__SetName(puVar6);
      FUN_100e5670();
      if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
        FUN_10c3d5d0(local_40c);
      }
    }
    cVar1 = FUN_100e57c0(&DAT_11d9d32b);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0x2c);
      if (iVar2 == *(int *)(param_1 + 0x30)) {
        FUN_108717e0(iVar2,local_438,&local_431,1,1);
      }
      else {
        if (iVar2 != 0) {
          FUN_100e5580(local_438);
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
      }
      if ((DAT_12395f18 & 0x400) == 0) {
        DAT_12395f18 = DAT_12395f18 | 0x400;
        DAT_12395f7c = -1;
        local_40c = &local_430;
        local_410 = (uint *)local_418;
        local_430._0_2_ = u_Instruction2_11d4c91c[0];
        local_430._2_2_ = u_Instruction2_11d4c91c[1];
        awStack_42c[0] = u_Instruction2_11d4c91c[2];
        awStack_42c[1] = u_Instruction2_11d4c91c[3];
        awStack_428[0] = u_Instruction2_11d4c91c[4];
        awStack_428[1] = u_Instruction2_11d4c91c[5];
        awStack_424[0] = u_Instruction2_11d4c91c[6];
        awStack_424[1] = u_Instruction2_11d4c91c[7];
        local_420[0] = u_Instruction2_11d4c91c[8];
        local_420[1] = u_Instruction2_11d4c91c[9];
        local_420[2] = u_Instruction2_11d4c91c[10];
        local_420[3] = u_Instruction2_11d4c91c[0xb];
        local_418[0] = 0;
        iVar2 = FUN_100e1bf0(&local_430);
        if (iVar2 == -1) {
          iVar2 = FUN_100e1c30(&local_430);
        }
        if (iVar2 != DAT_12395f7c) {
          DAT_12395f7c = iVar2;
        }
        if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_12395f18 & 0x800) == 0) {
        DAT_12395f18 = DAT_12395f18 | 0x800;
        iVar2 = FUN_100e1cb0(DAT_12395f7c);
        FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
      }
      cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f80);
      if (cVar1 == '\0') {
        local_408 = cVar1;
        memset(local_407,0,0x3ff);
        iVar2 = FUN_100e1c50(DAT_12395f7c);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        local_410 = &local_430;
        local_430 = local_430 & 0xffff0000;
        local_40c = local_410;
        (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395f80);
        puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
        puVar6 = &DAT_11d9d32b;
        if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)*puVar4;
        }
        CPet__SetName(puVar6);
        FUN_100e5670();
        if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      cVar1 = FUN_100e57c0(&DAT_11d9d32b);
      if (cVar1 == '\0') {
        iVar2 = *(int *)(param_1 + 0x2c);
        if (iVar2 == *(int *)(param_1 + 0x30)) {
          FUN_108717e0(iVar2,local_438,&local_431,1,1);
        }
        else {
          if (iVar2 != 0) {
            FUN_100e5580(local_438);
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
        }
        if ((DAT_12395f18 & 0x1000) == 0) {
          DAT_12395f18 = DAT_12395f18 | 0x1000;
          DAT_12395f90 = -1;
          local_40c = &local_430;
          local_410 = (uint *)local_418;
          local_430._0_2_ = u_Instruction3_11d4c938[0];
          local_430._2_2_ = u_Instruction3_11d4c938[1];
          awStack_42c[0] = u_Instruction3_11d4c938[2];
          awStack_42c[1] = u_Instruction3_11d4c938[3];
          awStack_428[0] = u_Instruction3_11d4c938[4];
          awStack_428[1] = u_Instruction3_11d4c938[5];
          awStack_424[0] = u_Instruction3_11d4c938[6];
          awStack_424[1] = u_Instruction3_11d4c938[7];
          local_420[0] = u_Instruction3_11d4c938[8];
          local_420[1] = u_Instruction3_11d4c938[9];
          local_420[2] = u_Instruction3_11d4c938[10];
          local_420[3] = u_Instruction3_11d4c938[0xb];
          local_418[0] = 0;
          iVar2 = FUN_100e1bf0(&local_430);
          if (iVar2 == -1) {
            iVar2 = FUN_100e1c30(&local_430);
          }
          if (iVar2 != DAT_12395f90) {
            DAT_12395f90 = iVar2;
          }
          if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
            FUN_10c3d5d0(local_40c);
          }
        }
        if ((DAT_12395f18 & 0x2000) == 0) {
          DAT_12395f18 = DAT_12395f18 | 0x2000;
          iVar2 = FUN_100e1cb0(DAT_12395f90);
          FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
        }
        cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395f94);
        if (cVar1 == '\0') {
          local_408 = cVar1;
          memset(local_407,0,0x3ff);
          iVar2 = FUN_100e1c50(DAT_12395f90);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
          FUN_100ee330(&local_408,1);
        }
        else {
          local_410 = &local_430;
          local_430 = local_430 & 0xffff0000;
          local_40c = local_410;
          (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395f94);
          puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
          puVar6 = &DAT_11d9d32b;
          if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
            puVar6 = (undefined1 *)*puVar4;
          }
          CPet__SetName(puVar6);
          FUN_100e5670();
          if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
            FUN_10c3d5d0(local_40c);
          }
        }
        cVar1 = FUN_100e57c0(&DAT_11d9d32b);
        if (cVar1 == '\0') {
          iVar2 = *(int *)(param_1 + 0x2c);
          if (iVar2 == *(int *)(param_1 + 0x30)) {
            FUN_108717e0(iVar2,local_438,&local_431,1,1);
          }
          else {
            if (iVar2 != 0) {
              FUN_100e5580(local_438);
            }
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
          }
          if ((DAT_12395f18 & 0x4000) == 0) {
            DAT_12395f18 = DAT_12395f18 | 0x4000;
            FUN_100f67b0(L"Instruction4");
          }
          if ((DAT_12395f18 & 0x8000) == 0) {
            DAT_12395f18 = DAT_12395f18 | 0x8000;
            iVar2 = FUN_100e1cb0(DAT_12395fa4);
            FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
          }
          cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395fa8);
          if (cVar1 == '\0') {
            local_408 = cVar1;
            memset(local_407,0,0x3ff);
            iVar2 = FUN_100e1c50(DAT_12395fa4);
            FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
            FUN_100ee330(&local_408,1);
          }
          else {
            local_410 = &local_430;
            local_430 = local_430 & 0xffff0000;
            local_40c = local_410;
            (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395fa8);
            puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
            puVar6 = &DAT_11d9d32b;
            if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
              puVar6 = (undefined1 *)*puVar4;
            }
            CPet__SetName(puVar6);
            FUN_100e5670();
            if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
              FUN_10c3d5d0(local_40c);
            }
          }
          cVar1 = FUN_100e57c0(&DAT_11d9d32b);
          if (cVar1 == '\0') {
            iVar2 = *(int *)(param_1 + 0x2c);
            if (iVar2 == *(int *)(param_1 + 0x30)) {
              FUN_108717e0(iVar2,local_438,&local_431,1,1);
            }
            else {
              if (iVar2 != 0) {
                FUN_100e5580(local_438);
              }
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
            }
            if ((DAT_12395f18 & 0x10000) == 0) {
              DAT_12395f18 = DAT_12395f18 | 0x10000;
              FUN_100f67b0(L"Instruction5");
            }
            if ((DAT_12395f18 & 0x20000) == 0) {
              DAT_12395f18 = DAT_12395f18 | 0x20000;
              iVar2 = FUN_100e1cb0(DAT_12395fb8);
              FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
            }
            cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395fbc);
            if (cVar1 == '\0') {
              local_408 = cVar1;
              memset(local_407,0,0x3ff);
              iVar2 = FUN_100e1c50(DAT_12395fb8);
              FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
              FUN_100ee330(&local_408,1);
            }
            else {
              local_410 = &local_430;
              local_430 = local_430 & 0xffff0000;
              local_40c = local_410;
              (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395fbc);
              puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
              puVar6 = &DAT_11d9d32b;
              if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                puVar6 = (undefined1 *)*puVar4;
              }
              CPet__SetName(puVar6);
              FUN_100e5670();
              if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
                FUN_10c3d5d0(local_40c);
              }
            }
            cVar1 = FUN_100e57c0(&DAT_11d9d32b);
            if (cVar1 == '\0') {
              iVar2 = *(int *)(param_1 + 0x2c);
              if (iVar2 == *(int *)(param_1 + 0x30)) {
                FUN_108717e0(iVar2,local_438,&local_431,1,1);
              }
              else {
                if (iVar2 != 0) {
                  FUN_100e5580(local_438);
                }
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
              }
              if ((DAT_12395f18 & 0x40000) == 0) {
                DAT_12395f18 = DAT_12395f18 | 0x40000;
                FUN_100f67b0(L"Instruction6");
              }
              if ((DAT_12395f18 & 0x80000) == 0) {
                DAT_12395f18 = DAT_12395f18 | 0x80000;
                iVar2 = FUN_100e1cb0(DAT_12395fcc);
                FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
              }
              cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395fd0);
              if (cVar1 == '\0') {
                local_408 = cVar1;
                memset(local_407,0,0x3ff);
                iVar2 = FUN_100e1c50(DAT_12395fcc);
                FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
                FUN_100ee330(&local_408,1);
              }
              else {
                local_410 = &local_430;
                local_430 = local_430 & 0xffff0000;
                local_40c = local_410;
                (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395fd0);
                puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
                puVar6 = &DAT_11d9d32b;
                if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                  puVar6 = (undefined1 *)*puVar4;
                }
                CPet__SetName(puVar6);
                FUN_100e5670();
                if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
                  FUN_10c3d5d0(local_40c);
                }
              }
              cVar1 = FUN_100e57c0(&DAT_11d9d32b);
              if (cVar1 == '\0') {
                iVar2 = *(int *)(param_1 + 0x2c);
                if (iVar2 == *(int *)(param_1 + 0x30)) {
                  FUN_108717e0(iVar2,local_438,&local_431,1,1);
                }
                else {
                  if (iVar2 != 0) {
                    FUN_100e5580(local_438);
                  }
                  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
                }
                if ((DAT_12395f18 & 0x100000) == 0) {
                  DAT_12395f18 = DAT_12395f18 | 0x100000;
                  FUN_100f67b0(L"Instruction7");
                }
                if ((DAT_12395f18 & 0x200000) == 0) {
                  DAT_12395f18 = DAT_12395f18 | 0x200000;
                  iVar2 = FUN_100e1cb0(DAT_12395fe0);
                  FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
                }
                cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395fe4);
                if (cVar1 == '\0') {
                  local_408 = cVar1;
                  memset(local_407,0,0x3ff);
                  iVar2 = FUN_100e1c50(DAT_12395fe0);
                  FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
                  FUN_100ee330(&local_408,1);
                }
                else {
                  local_410 = &local_430;
                  local_430 = local_430 & 0xffff0000;
                  local_40c = local_410;
                  (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395fe4);
                  puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
                  puVar6 = &DAT_11d9d32b;
                  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                    puVar6 = (undefined1 *)*puVar4;
                  }
                  CPet__SetName(puVar6);
                  FUN_100e5670();
                  if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
                    FUN_10c3d5d0(local_40c);
                  }
                }
                cVar1 = FUN_100e57c0(&DAT_11d9d32b);
                if (cVar1 == '\0') {
                  iVar2 = *(int *)(param_1 + 0x2c);
                  if (iVar2 == *(int *)(param_1 + 0x30)) {
                    FUN_108717e0(iVar2,local_438,&local_431,1,1);
                  }
                  else {
                    if (iVar2 != 0) {
                      FUN_100e5580(local_438);
                    }
                    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
                  }
                  if ((DAT_12395f18 & 0x400000) == 0) {
                    DAT_12395f18 = DAT_12395f18 | 0x400000;
                    FUN_100f67b0(L"Instruction8");
                  }
                  if ((DAT_12395f18 & 0x800000) == 0) {
                    DAT_12395f18 = DAT_12395f18 | 0x800000;
                    iVar2 = FUN_100e1cb0(DAT_12395ff4);
                    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
                  }
                  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12395ff8);
                  if (cVar1 == '\0') {
                    local_408 = cVar1;
                    memset(local_407,0,0x3ff);
                    iVar2 = FUN_100e1c50(DAT_12395ff4);
                    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
                    FUN_100ee330(&local_408,1);
                  }
                  else {
                    local_410 = &local_430;
                    local_430 = local_430 & 0xffff0000;
                    local_40c = local_410;
                    (**(code **)(*param_2 + 0x28))(&local_430,&DAT_12395ff8);
                    puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
                    puVar6 = &DAT_11d9d32b;
                    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                      puVar6 = (undefined1 *)*puVar4;
                    }
                    CPet__SetName(puVar6);
                    FUN_100e5670();
                    if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
                      FUN_10c3d5d0(local_40c);
                    }
                  }
                  cVar1 = FUN_100e57c0(&DAT_11d9d32b);
                  if (cVar1 == '\0') {
                    iVar2 = *(int *)(param_1 + 0x2c);
                    if (iVar2 == *(int *)(param_1 + 0x30)) {
                      FUN_108717e0(iVar2,local_438,&local_431,1,1);
                    }
                    else {
                      if (iVar2 != 0) {
                        FUN_100e5580(local_438);
                      }
                      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
                    }
                    if ((DAT_12395f18 & 0x1000000) == 0) {
                      DAT_12395f18 = DAT_12395f18 | 0x1000000;
                      FUN_100f67b0(L"Instruction9");
                    }
                    if ((DAT_12395f18 & 0x2000000) == 0) {
                      DAT_12395f18 = DAT_12395f18 | 0x2000000;
                      iVar2 = FUN_100e1cb0(DAT_12396008);
                      FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
                    }
                    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239600c);
                    if (cVar1 == '\0') {
                      local_408 = cVar1;
                      memset(local_407,0,0x3ff);
                      iVar2 = FUN_100e1c50(DAT_12396008);
                      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
                      FUN_100ee330(&local_408,1);
                    }
                    else {
                      local_410 = &local_430;
                      local_430 = local_430 & 0xffff0000;
                      local_40c = local_410;
                      (**(code **)(*param_2 + 0x28))(&local_430,&DAT_1239600c);
                      puVar4 = (undefined4 *)FUN_100e5530(&local_43c,local_40c);
                      puVar6 = &DAT_11d9d32b;
                      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
                        puVar6 = (undefined1 *)*puVar4;
                      }
                      CPet__SetName(puVar6);
                      FUN_100e5670();
                      if ((local_40c != &local_430) && (local_40c != (uint *)0x0)) {
                        FUN_10c3d5d0(local_40c);
                      }
                    }
                    cVar1 = FUN_100e57c0(&DAT_11d9d32b);
                    if (cVar1 == '\0') {
                      iVar2 = *(int *)(param_1 + 0x2c);
                      if (iVar2 == *(int *)(param_1 + 0x30)) {
                        FUN_108717e0(iVar2,local_438,&local_431,1,1);
                      }
                      else {
                        if (iVar2 != 0) {
                          FUN_100e5580(local_438);
                        }
                        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_100e5670();
  }
  else {
    FUN_100e5670();
  }
  if ((DAT_12395f18 & 0x4000000) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x4000000;
    FUN_100f67b0(L"FinishCount1");
  }
  if ((DAT_12395f18 & 0x8000000) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_1239601c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396020);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239601c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_440 = (**(code **)(*param_2 + 0x20))(&DAT_12396020);
  }
  if ((DAT_12395f18 & 0x10000000) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x10000000;
    FUN_100f67b0(L"RewardId1");
  }
  if ((DAT_12395f18 & 0x20000000) == 0) {
    DAT_12395f18 = DAT_12395f18 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12396030);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396034);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12396030);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_43c = (**(code **)(*param_2 + 0x20))(&DAT_12396034);
  }
  iVar2 = local_43c;
  if (local_43c != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
      FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
    }
    else {
      *puVar4 = local_440;
      puVar4[1] = local_43c;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
    }
    if ((DAT_12395f18 & 0x40000000) == 0) {
      DAT_12395f18 = DAT_12395f18 | 0x40000000;
      FUN_100f67b0(L"FinishCount2");
    }
    if (-1 < (int)DAT_12395f18) {
      DAT_12395f18 = DAT_12395f18 | 0x80000000;
      iVar5 = FUN_100e1cb0(DAT_12396044);
      FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396048);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar5 = FUN_100e1c50(DAT_12396044);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      local_440 = (**(code **)(*param_2 + 0x20))(&DAT_12396048);
    }
    if ((DAT_1239605c & 1) == 0) {
      DAT_1239605c = DAT_1239605c | 1;
      FUN_100f67b0(L"RewardId2");
    }
    if ((DAT_1239605c & 2) == 0) {
      DAT_1239605c = DAT_1239605c | 2;
      iVar5 = FUN_100e1cb0(DAT_12396058);
      FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
    }
    cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396060);
    if (cVar1 == '\0') {
      local_408 = cVar1;
      memset(local_407,0,0x3ff);
      iVar5 = FUN_100e1c50(DAT_12396058);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396060);
      local_43c = iVar2;
    }
    if (iVar2 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
        FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
      }
      else {
        *puVar4 = local_440;
        puVar4[1] = iVar2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
      }
      if ((DAT_1239605c & 4) == 0) {
        DAT_1239605c = DAT_1239605c | 4;
        FUN_100f67b0(L"FinishCount3");
      }
      if ((DAT_1239605c & 8) == 0) {
        DAT_1239605c = DAT_1239605c | 8;
        iVar5 = FUN_100e1cb0(DAT_12396070);
        FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
      }
      cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396074);
      if (cVar1 == '\0') {
        local_408 = cVar1;
        memset(local_407,0,0x3ff);
        iVar5 = FUN_100e1c50(DAT_12396070);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        local_440 = (**(code **)(*param_2 + 0x20))(&DAT_12396074);
      }
      if ((DAT_1239605c & 0x10) == 0) {
        DAT_1239605c = DAT_1239605c | 0x10;
        FUN_100f67b0(L"RewardId3");
      }
      if ((DAT_1239605c & 0x20) == 0) {
        DAT_1239605c = DAT_1239605c | 0x20;
        iVar5 = FUN_100e1cb0(DAT_12396084);
        FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
      }
      cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396088);
      if (cVar1 == '\0') {
        local_408 = cVar1;
        memset(local_407,0,0x3ff);
        iVar5 = FUN_100e1c50(DAT_12396084);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396088);
        local_43c = iVar2;
      }
      if (iVar2 != 0) {
        puVar4 = *(undefined4 **)(param_1 + 0x20);
        if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
          FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
        }
        else {
          *puVar4 = local_440;
          puVar4[1] = iVar2;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
        }
        if ((DAT_1239605c & 0x40) == 0) {
          DAT_1239605c = DAT_1239605c | 0x40;
          FUN_100f67b0(L"FinishCount4");
        }
        if (-1 < (char)DAT_1239605c) {
          DAT_1239605c = DAT_1239605c | 0x80;
          iVar5 = FUN_100e1cb0(DAT_12396098);
          FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
        }
        cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239609c);
        if (cVar1 == '\0') {
          local_408 = cVar1;
          memset(local_407,0,0x3ff);
          iVar5 = FUN_100e1c50(DAT_12396098);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
          FUN_100ee330(&local_408,1);
        }
        else {
          local_440 = (**(code **)(*param_2 + 0x20))(&DAT_1239609c);
        }
        if ((DAT_1239605c & 0x100) == 0) {
          DAT_1239605c = DAT_1239605c | 0x100;
          FUN_100f67b0(L"RewardId4");
        }
        if ((DAT_1239605c & 0x200) == 0) {
          DAT_1239605c = DAT_1239605c | 0x200;
          iVar5 = FUN_100e1cb0(DAT_123960ac);
          FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
        }
        cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123960b0);
        if (cVar1 == '\0') {
          local_408 = cVar1;
          memset(local_407,0,0x3ff);
          iVar5 = FUN_100e1c50(DAT_123960ac);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
          FUN_100ee330(&local_408,1);
        }
        else {
          iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123960b0);
          local_43c = iVar2;
        }
        if (iVar2 != 0) {
          puVar4 = *(undefined4 **)(param_1 + 0x20);
          if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
            FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
          }
          else {
            *puVar4 = local_440;
            puVar4[1] = iVar2;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
          }
          if ((DAT_1239605c & 0x400) == 0) {
            DAT_1239605c = DAT_1239605c | 0x400;
            FUN_100f67b0(L"FinishCount5");
          }
          if ((DAT_1239605c & 0x800) == 0) {
            DAT_1239605c = DAT_1239605c | 0x800;
            iVar5 = FUN_100e1cb0(DAT_123960c0);
            FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
          }
          cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123960c4);
          if (cVar1 == '\0') {
            local_408 = cVar1;
            memset(local_407,0,0x3ff);
            iVar5 = FUN_100e1c50(DAT_123960c0);
            FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
            FUN_100ee330(&local_408,1);
          }
          else {
            local_440 = (**(code **)(*param_2 + 0x20))(&DAT_123960c4);
          }
          if ((DAT_1239605c & 0x1000) == 0) {
            DAT_1239605c = DAT_1239605c | 0x1000;
            FUN_100f67b0(L"RewardId5");
          }
          if ((DAT_1239605c & 0x2000) == 0) {
            DAT_1239605c = DAT_1239605c | 0x2000;
            iVar5 = FUN_100e1cb0(DAT_123960d4);
            FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
          }
          cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123960d8);
          if (cVar1 == '\0') {
            local_408 = cVar1;
            memset(local_407,0,0x3ff);
            iVar5 = FUN_100e1c50(DAT_123960d4);
            FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
            FUN_100ee330(&local_408,1);
          }
          else {
            iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123960d8);
            local_43c = iVar2;
          }
          if (iVar2 != 0) {
            puVar4 = *(undefined4 **)(param_1 + 0x20);
            if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
              FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
            }
            else {
              *puVar4 = local_440;
              puVar4[1] = iVar2;
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
            }
            if ((DAT_1239605c & 0x4000) == 0) {
              DAT_1239605c = DAT_1239605c | 0x4000;
              FUN_100f67b0(L"FinishCount6");
            }
            if ((DAT_1239605c & 0x8000) == 0) {
              DAT_1239605c = DAT_1239605c | 0x8000;
              iVar5 = FUN_100e1cb0(DAT_123960e8);
              FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
            }
            cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123960ec);
            if (cVar1 == '\0') {
              local_408 = cVar1;
              memset(local_407,0,0x3ff);
              iVar5 = FUN_100e1c50(DAT_123960e8);
              FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
              FUN_100ee330(&local_408,1);
            }
            else {
              local_440 = (**(code **)(*param_2 + 0x20))(&DAT_123960ec);
            }
            if ((DAT_1239605c & 0x10000) == 0) {
              DAT_1239605c = DAT_1239605c | 0x10000;
              FUN_100f67b0(L"RewardId6");
            }
            if ((DAT_1239605c & 0x20000) == 0) {
              DAT_1239605c = DAT_1239605c | 0x20000;
              iVar5 = FUN_100e1cb0(DAT_123960fc);
              FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
            }
            cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396100);
            if (cVar1 == '\0') {
              local_408 = cVar1;
              memset(local_407,0,0x3ff);
              iVar5 = FUN_100e1c50(DAT_123960fc);
              FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
              FUN_100ee330(&local_408,1);
            }
            else {
              iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396100);
              local_43c = iVar2;
            }
            if (iVar2 != 0) {
              puVar4 = *(undefined4 **)(param_1 + 0x20);
              if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
                FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
              }
              else {
                *puVar4 = local_440;
                puVar4[1] = iVar2;
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
              }
              if ((DAT_1239605c & 0x40000) == 0) {
                DAT_1239605c = DAT_1239605c | 0x40000;
                FUN_100f67b0(L"FinishCount7");
              }
              if ((DAT_1239605c & 0x80000) == 0) {
                DAT_1239605c = DAT_1239605c | 0x80000;
                iVar5 = FUN_100e1cb0(DAT_12396110);
                FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
              }
              cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396114);
              if (cVar1 == '\0') {
                local_408 = cVar1;
                memset(local_407,0,0x3ff);
                iVar5 = FUN_100e1c50(DAT_12396110);
                FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                FUN_100ee330(&local_408,1);
              }
              else {
                local_440 = (**(code **)(*param_2 + 0x20))(&DAT_12396114);
              }
              if ((DAT_1239605c & 0x100000) == 0) {
                DAT_1239605c = DAT_1239605c | 0x100000;
                FUN_100f67b0(L"RewardId7");
              }
              if ((DAT_1239605c & 0x200000) == 0) {
                DAT_1239605c = DAT_1239605c | 0x200000;
                iVar5 = FUN_100e1cb0(DAT_12396124);
                FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
              }
              cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396128);
              if (cVar1 == '\0') {
                local_408 = cVar1;
                memset(local_407,0,0x3ff);
                iVar5 = FUN_100e1c50(DAT_12396124);
                FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                FUN_100ee330(&local_408,1);
              }
              else {
                iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396128);
                local_43c = iVar2;
              }
              if (iVar2 != 0) {
                puVar4 = *(undefined4 **)(param_1 + 0x20);
                if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
                  FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
                }
                else {
                  *puVar4 = local_440;
                  puVar4[1] = iVar2;
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
                }
                if ((DAT_1239605c & 0x400000) == 0) {
                  DAT_1239605c = DAT_1239605c | 0x400000;
                  FUN_100f67b0(L"FinishCount8");
                }
                if ((DAT_1239605c & 0x800000) == 0) {
                  DAT_1239605c = DAT_1239605c | 0x800000;
                  iVar5 = FUN_100e1cb0(DAT_12396138);
                  FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
                }
                cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239613c);
                if (cVar1 == '\0') {
                  local_408 = cVar1;
                  memset(local_407,0,0x3ff);
                  iVar5 = FUN_100e1c50(DAT_12396138);
                  FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                  FUN_100ee330(&local_408,1);
                }
                else {
                  local_440 = (**(code **)(*param_2 + 0x20))(&DAT_1239613c);
                }
                if ((DAT_1239605c & 0x1000000) == 0) {
                  DAT_1239605c = DAT_1239605c | 0x1000000;
                  FUN_100f67b0(L"RewardId8");
                }
                if ((DAT_1239605c & 0x2000000) == 0) {
                  DAT_1239605c = DAT_1239605c | 0x2000000;
                  iVar5 = FUN_100e1cb0(DAT_1239614c);
                  FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
                }
                cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396150);
                if (cVar1 == '\0') {
                  local_408 = cVar1;
                  memset(local_407,0,0x3ff);
                  iVar5 = FUN_100e1c50(DAT_1239614c);
                  FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                  FUN_100ee330(&local_408,1);
                }
                else {
                  iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396150);
                  local_43c = iVar2;
                }
                if (iVar2 != 0) {
                  puVar4 = *(undefined4 **)(param_1 + 0x20);
                  if (puVar4 == *(undefined4 **)(param_1 + 0x24)) {
                    FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
                  }
                  else {
                    *puVar4 = local_440;
                    puVar4[1] = iVar2;
                    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
                  }
                  if ((DAT_1239605c & 0x4000000) == 0) {
                    DAT_1239605c = DAT_1239605c | 0x4000000;
                    FUN_100f67b0(L"FinishCount9");
                  }
                  if ((DAT_1239605c & 0x8000000) == 0) {
                    DAT_1239605c = DAT_1239605c | 0x8000000;
                    iVar5 = FUN_100e1cb0(DAT_12396160);
                    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
                  }
                  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396164);
                  if (cVar1 == '\0') {
                    local_408 = cVar1;
                    memset(local_407,0,0x3ff);
                    iVar5 = FUN_100e1c50(DAT_12396160);
                    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                    FUN_100ee330(&local_408,1);
                  }
                  else {
                    local_440 = (**(code **)(*param_2 + 0x20))(&DAT_12396164);
                  }
                  if ((DAT_1239605c & 0x10000000) == 0) {
                    DAT_1239605c = DAT_1239605c | 0x10000000;
                    FUN_100f67b0(L"RewardId9");
                  }
                  if ((DAT_1239605c & 0x20000000) == 0) {
                    DAT_1239605c = DAT_1239605c | 0x20000000;
                    iVar5 = FUN_100e1cb0(DAT_12396174);
                    FUN_10a30020(*(undefined4 *)(iVar5 + 0x24));
                  }
                  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12396178);
                  if (cVar1 == '\0') {
                    local_408 = cVar1;
                    memset(local_407,0,0x3ff);
                    iVar5 = FUN_100e1c50(DAT_12396174);
                    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar5 + 0x14));
                    FUN_100ee330(&local_408,1);
                  }
                  else {
                    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_12396178);
                    local_43c = iVar2;
                  }
                  if (iVar2 != 0) {
                    puVar4 = *(undefined4 **)(param_1 + 0x20);
                    if (puVar4 != *(undefined4 **)(param_1 + 0x24)) {
                      puVar4[1] = iVar2;
                      *puVar4 = local_440;
                      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 8;
                      FUN_11a89daa();
                      return;
                    }
                    FUN_1180cdd0(puVar4,&local_440,&local_431,1,1);
                  }
                }
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



