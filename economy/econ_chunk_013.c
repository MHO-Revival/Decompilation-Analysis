/* ===== FUN_1139dcb0 @ 1139dcb0  size=243 ===== */
// calls: CPlayerLevelUpInfo::GetInfoManager
// strings:
//   "CPlayerLevelUpInfo"

/* [RE-AUTO c0]
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo"" */

undefined4 FUN_1139dcb0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = CPlayerLevelUpInfo__GetInfoManager(0,"CPlayerLevelUpInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar1 + 0x28), iVar3 != 0)) &&
      ((iVar2 = param_1 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))))
     ) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
    if ((iVar1 != 0) &&
       ((iVar1 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar1 != 0 &&
        (param_2 < *(int *)(iVar1 + 0x14))))) {
      iVar3 = FUN_1046c7c0(1);
      iVar3 = *(int *)(iVar3 + 0xd0);
      if (iVar3 <= param_1) {
        return 0xffffffff;
      }
      if (param_2 + param_3 < *(int *)(iVar1 + 0x14)) {
        *param_4 = param_1;
        *param_5 = param_2 + param_3;
      }
      else {
        param_3 = (param_2 - *(int *)(iVar1 + 0x14)) + param_3;
        *param_5 = 0;
        *param_4 = param_1 + 1;
        if (param_1 + 1 < iVar3) {
          while( true ) {
            iVar1 = FUN_10b629d0(*param_4);
            if (iVar1 == 0) {
              return 0xffffffff;
            }
            iVar1 = *(int *)(iVar1 + 0x14);
            if (param_3 < iVar1) break;
            *param_4 = *param_4 + 1;
            param_3 = param_3 - iVar1;
            if (iVar3 <= *param_4) {
              return 0;
            }
          }
          *param_5 = param_3;
          return 0;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== CEquipEnforceBreak::GetManagers @ 11404e20  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CEquipEnforceBreak::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak::GetManagers"" */

undefined * CEquipEnforceBreak__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d24abc;
  if (param_3 == 0) {
    if ((DAT_1218f860 & 1) == 0) {
      DAT_1218f860 = DAT_1218f860 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceBreak::GetManagers");
      FUN_11a8911f(&LAB_11c9c460);
    }
    if ((undefined *)*DAT_1218f844 != (undefined *)0x0) {
      return (undefined *)*DAT_1218f844;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1218f8a8 & 1) == 0) {
      DAT_1218f8a8 = DAT_1218f8a8 | 1;
      FUN_11405090();
      FUN_11a8911f(&LAB_11c9c3a0);
    }
    puVar1 = &DAT_1218f870;
  }
  return puVar1;
}



/* ===== FUN_114072a0 @ 114072a0  size=78 ===== */
// calls: CEquipEnforceBreak::GetManagers
// strings:
//   "CEquipEnforceBreak"

/* [RE-AUTO c0]
   calls: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak"" */

undefined4 FUN_114072a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipEnforceBreak__GetManagers(0,"CEquipEnforceBreak",0);
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



/* ===== CEquipEnforceBreak::GetManagers_114075c0 @ 114075c0  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CEquipEnforceBreak::GetManagers"

/* [RE-AUTO c3]
   id: CEquipEnforceBreak::GetManagers
   strings:
     ""CEquipEnforceBreak::GetManagers"" */

undefined4 CEquipEnforceBreak__GetManagers_114075c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1218f860 & 1) == 0) {
      DAT_1218f860 = DAT_1218f860 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CEquipEnforceBreak::GetManagers");
      FUN_11a8911f(&LAB_11c9c460);
    }
    return *DAT_1218f844;
  }
  return 0;
}



/* ===== FUN_11413d50 @ 11413d50  size=109 ===== */
// strings:
//   "CSoulStoneLevelUpInfo"

/* [RE-AUTO c0]
   strings:
     ""CSoulStoneLevelUpInfo"" */

void __fastcall FUN_11413d50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[9] = param_1[9] + 1;
  iVar4 = param_1[9];
  iVar3 = FUN_10529a40(0,"CSoulStoneLevelUpInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + (iVar4 % *(int *)(iVar3 + 0x28)) * 4), iVar4 != 0)
       ) {
      piVar1 = param_1 + 10;
      *piVar1 = *piVar1 + *(int *)(iVar4 + 0x18);
      if (*piVar1 < 0) {
        param_1[10] = 0x7fffffff;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x11413db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}



/* ===== FUN_11416be0 @ 11416be0  size=426 ===== */
// strings:
//   "CLevelRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLevelRewardInfo"" */

undefined4 __thiscall FUN_11416be0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_20;
  int iStack_1c;
  undefined4 ***apppuStack_18 [3];
  int local_c;
  int local_8;
  
  piVar3 = param_3;
  if (param_2[0x24] == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x5f;
  piVar2 = (int *)*piVar7;
  while (piVar2 != piVar7) {
    piVar1 = (int *)*piVar2;
    FUN_10c3d5d0(piVar2);
    piVar2 = piVar1;
  }
  *piVar7 = (int)piVar7;
  param_1[0x60] = (int)piVar7;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x56] = *param_3;
  local_c = 0;
  local_8 = 0;
  iVar4 = (**(code **)(*param_2 + 0x6c))();
  iVar5 = FUN_1097c5c0(0,"CLevelRewardInfo",0);
  if ((iVar4 != -1) &&
     ((((iVar4 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
      ((iVar4 = iVar4 - *(int *)(iVar5 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar5 + 0x24)))))))
  {
    iVar6 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / *(int *)(iVar5 + 0x28)) * 4);
    if ((iVar6 != 0) && (iVar5 = *(int *)(iVar6 + (iVar4 % *(int *)(iVar5 + 0x28)) * 4), iVar5 != 0)
       ) {
      local_c = *(int *)(iVar5 + 0x40);
      local_8 = *(int *)(iVar5 + 0x44);
    }
  }
  iVar5 = param_3[6];
  if (iVar5 == -1) {
    iVar5 = FUN_1140dd10();
  }
  param_1[0x57] = iVar5;
  iVar5 = param_3[7];
  if (iVar5 < 1) {
    iVar5 = FUN_1140dce0();
  }
  param_1[0x58] = iVar5;
  iVar5 = param_3[8];
  if (iVar5 < 1) {
    if (param_2[0x1e] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2[0x1e] + 0x38);
    }
  }
  param_1[0x59] = iVar5;
  iVar5 = param_3[10];
  param_1[0x6a] = iVar5;
  if (iVar5 == 0) {
    param_1[0x5c] = 0;
  }
  else {
    param_1[0x5c] = *(int *)(iVar5 + 0xa0);
  }
  iVar5 = FUN_11717340(param_1[0x56]);
  param_1[0x5a] = iVar5;
  if (iVar5 != 0) {
    param_1[0x5b] = *(int *)(iVar5 + 0x10);
  }
  (**(code **)(*param_1 + 0xcc))(param_3[0x2e],param_3[0x2f]);
  FUN_117bba20();
  switch(param_1[0x56]) {
  case 0:
    iVar5 = param_3[0x20];
    param_1[0x6c] = iVar5;
    iVar4 = param_3[0x21];
    param_1[0x6d] = iVar4;
    param_1[0x6e] = param_3[0x22];
    param_1[0x6f] = param_3[0x23];
    param_1[0x70] = param_3[0x24];
    iVar6 = -1;
    if (iVar5 == -1) {
      if (iVar4 != -1) {
        iVar6 = func_0x11421200(iVar4);
      }
    }
    else {
      iVar6 = FUN_11421250(iVar5);
    }
    iVar5 = FUN_114168a0(iVar6 + 1);
    if (iVar5 != 0) {
      param_1[0x5a] = iVar5 + 0x18;
      param_1[0x5b] = *(int *)(iVar5 + 0x28);
    }
    param_1[0x5c] = param_3[0x26];
    if (param_3[0x27] != 0) {
      FUN_116d2790(param_3[0x27]);
    }
    param_1[0x62] = param_3[0x28];
    param_1[100] = param_3[0x29];
    param_1[0x65] = param_3[0x2a];
    param_1[0x66] = param_3[0x2b];
    param_1[0x67] = param_3[0x2c];
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
    if (param_3[0xb] == 0) goto LAB_11416eb6;
    param_1[0x6b] = param_3[0xb];
    iVar5 = FUN_11416510();
    param_1[100] = iVar5;
    param_1[0x65] = iVar5;
    iVar5 = FUN_11416510();
    param_1[0x66] = iVar5;
    param_1[0x67] = iVar5;
    FUN_116d2790(param_1[0x6b] + 0x68);
    param_1[0x62] = param_1[0x6b] + 0x74;
    break;
  case 10:
  case 0xb:
  case 0xe:
    piVar7 = (int *)0x0;
    if (param_3[1] == 0) {
      if (param_3[2] < 1) {
        if ((param_1[0x56] != 0xb) || ((undefined4 *)param_3[9] == (undefined4 *)0x0))
        goto LAB_11416eb6;
        param_2 = (int *)**(int **)param_3[9];
        goto code_r0x11416ede;
      }
      param_2 = (int *)FUN_107d7df0(param_3[2]);
      if (param_2 == (int *)0x0) goto LAB_11416eb6;
      piVar7 = (int *)0x0;
code_r0x11416eed:
      iVar5 = 0;
    }
    else {
      piVar7 = (int *)(**(code **)(*(int *)param_2[0x24] + 0x7c))(param_3[1]);
      if (((piVar7 == (int *)0x0) || (iVar5 = (**(code **)(*piVar7 + 0xa8))(), iVar5 != 1)) ||
         (iVar5 = (**(code **)(*piVar7 + 0xa8))(), iVar5 != 1)) goto LAB_11416eb6;
      param_2 = (int *)FUN_113a23b0();
code_r0x11416ede:
      if (param_2 == (int *)0x0) goto LAB_11416eb6;
      if (piVar7 == (int *)0x0) goto code_r0x11416eed;
      iVar5 = piVar7[1];
    }
    param_1[0x68] = iVar5;
    param_1[0x69] = *(int *)((int)param_2 + 0x14);
    param_3 = (int *)param_3[3];
    if ((int)param_3 < 1) {
      if (piVar7 == (int *)0x0) {
        param_3 = (int *)param_1[0x59];
      }
      else {
        param_3 = (int *)FUN_1025b060();
      }
    }
    if ((*(int *)((int)param_2 + 0x20) == 1) || (*(int *)((int)param_2 + 0x20) == 6)) {
      local_8 = local_c;
    }
    iVar5 = param_1[0x56];
    if (iVar5 == 10) {
      func_0x117befd0();
      FUN_11680b10(local_8,param_3,&local_20);
      if ((undefined4 ****)apppuStack_18[0] == apppuStack_18) goto LAB_11416eb6;
      param_1[0x5c] = *(int *)((int)param_2 + 0x938);
      iVar5 = (int)param_2 + 0x91c;
code_r0x11417089:
      param_1[0x62] = iVar5;
    }
    else {
      if (iVar5 == 0xb) {
        if (piVar3[9] == 0) goto LAB_11416eb6;
        func_0x117befd0();
        FUN_117bbe70(local_8,param_3,&local_20);
        if ((undefined4 ****)apppuStack_18[0] == apppuStack_18) goto LAB_11416eb6;
        if ((piVar3[0x17] != piVar3[0x16]) && (piVar3 + 0x12 != param_1 + 0x71)) {
          FUN_100d83d0(piVar3[0x17],piVar3[0x16]);
        }
        param_1[0x5c] = *(int *)(piVar3[9] + 0xc);
        if (*(int *)(piVar3[9] + 8) != 0) {
          param_1[0x5b] = *(int *)(piVar3[9] + 8);
        }
        iVar5 = piVar3[9] + 0x1c;
        goto code_r0x11417089;
      }
      if ((iVar5 != 0xe) || (local_c = FUN_116815a0(piVar3[0x11]), local_c == 0)) {
LAB_11416eb6:
        FUN_117bbd60();
        return 0;
      }
      func_0x117befd0();
      FUN_11680b30(piVar3[0x11],param_1 + 0x57,param_3,&local_20);
      if ((undefined4 ****)apppuStack_18[0] == apppuStack_18) goto LAB_11416eb6;
      if ((int *)(local_c + 0x18) != param_1 + 0x71) {
        FUN_100d83d0(*(undefined4 *)(local_c + 0x2c),*(undefined4 *)(local_c + 0x28));
      }
      param_1[0x5c] = *(int *)(local_c + 0x30);
      param_1[0x5b] = *(int *)(local_c + 0x34);
      param_1[0x5d] = *(int *)(local_c + 0x38);
    }
    param_1[100] = local_20;
    param_1[0x65] = local_20;
    param_1[0x66] = iStack_1c;
    param_1[0x67] = iStack_1c;
    FUN_116d2790(apppuStack_18);
    break;
  case 0xf:
    param_1[100] = 1;
    param_1[0x65] = 1;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    if (0.0 < (float)param_3[0x26]) {
      param_1[0x5c] = param_3[0x26];
    }
    if (0 < param_3[0x25]) {
      param_1[0x5b] = param_3[0x25];
    }
    FUN_116d2790(&DAT_1238d008);
    param_1[0x62] = 0;
    break;
  default:
    goto LAB_11416eb6;
  }
  if ((piVar3[0x17] != piVar3[0x16]) && (piVar3 + 0x12 != param_1 + 0x71)) {
    FUN_100d83d0(piVar3[0x17],piVar3[0x16]);
  }
  if (piVar3[0x25] != 0) {
    param_1[0x5b] = piVar3[0x25];
  }
  if (0.0 < (float)piVar3[0x26]) {
    param_1[0x5c] = piVar3[0x26];
  }
  if (piVar3[0x27] != 0) {
    FUN_116d2790(piVar3[0x27]);
  }
  if (piVar3[0x28] != 0) {
    param_1[0x62] = piVar3[0x28];
  }
  if (0 < piVar3[0x2a]) {
    param_1[100] = piVar3[0x29];
    param_1[0x65] = piVar3[0x2a];
  }
  if (0 < piVar3[0x2c]) {
    param_1[0x66] = piVar3[0x2b];
    param_1[0x67] = piVar3[0x2c];
  }
  iVar5 = param_1[0x6b];
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 99) = *(undefined1 *)(iVar5 + 0x3c);
    param_1[0x5d] = *(int *)(iVar5 + 0x80);
  }
  (**(code **)(*param_1 + 0x1f0))();
  FUN_117bbd60();
  return 1;
}



/* ===== FUN_114242e0 @ 114242e0  size=181 ===== */
// strings:
//   "CEquipEnchantInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipEnchantInfo"" */

void FUN_114242e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x3c))();
  if ((((iVar2 != 0) && (iVar3 = FUN_1051c3f0(0,"CEquipEnchantInfo",0), iVar2 != -1)) &&
      ((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)))) &&
     (((*(int *)(iVar3 + 0x28) != 0 && (iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2)) &&
      (iVar2 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
    if (((iVar1 != 0) &&
        (iVar2 = *(int *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x34) != 0)) {
      iVar3 = 0;
      if (*(int *)(iVar2 + 0x30) != 0) {
        iVar3 = (**(code **)(*param_1 + 0x40))();
        uVar4 = FUN_10a136c0();
        if ((uint)(*(int *)(iVar2 + 0x30) + iVar3) <= uVar4) {
          return;
        }
        iVar3 = (*(int *)(iVar2 + 0x30) - uVar4) + iVar3;
      }
      uVar5 = FUN_115d5b10(*(undefined4 *)(iVar2 + 0x34),1,iVar3 * 1000);
      *(undefined4 *)(param_2 + 0xc) = uVar5;
    }
  }
  return;
}



/* ===== CLevelBoxRewardInfo::GetManagers @ 1144d4c0  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CLevelBoxRewardInfo::GetManagers"

/* [RE-AUTO c3]
   id: CLevelBoxRewardInfo::GetManagers
   strings:
     ""CLevelBoxRewardInfo::GetManagers"" */

undefined * CLevelBoxRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d26ed0;
  if (param_3 == 0) {
    if ((DAT_122dde80 & 1) == 0) {
      DAT_122dde80 = DAT_122dde80 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CLevelBoxRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d900);
    }
    if ((undefined *)*DAT_122dde64 != (undefined *)0x0) {
      return (undefined *)*DAT_122dde64;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122ddec4 & 1) == 0) {
      DAT_122ddec4 = DAT_122ddec4 | 1;
      FUN_1144dcb0();
      FUN_11a8911f(&LAB_11c9d8a0);
    }
    puVar1 = &DAT_122dde8c;
  }
  return puVar1;
}



/* ===== FUN_1144f290 @ 1144f290  size=78 ===== */
// calls: CLevelBoxRewardInfo::GetManagers
// strings:
//   "CLevelBoxRewardInfo"

/* [RE-AUTO c0]
   calls: CLevelBoxRewardInfo::GetManagers
   strings:
     ""CLevelBoxRewardInfo"" */

undefined4 FUN_1144f290(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CLevelBoxRewardInfo__GetManagers(0,"CLevelBoxRewardInfo",0);
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



/* ===== FUN_1145f060 @ 1145f060  size=87 ===== */
// calls: CGuildBuildingLevelUpInfo::GetInfoManager
// strings:
//   "CGuildBuildingLevelUpInfo"

/* [RE-AUTO c0]
   calls: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo"" */

undefined4 FUN_1145f060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_1 * 100 + param_2;
  iVar2 = CGuildBuildingLevelUpInfo__GetInfoManager(0,"CGuildBuildingLevelUpInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1145f0c0 @ 1145f0c0  size=78 ===== */
// calls: CGuildBuildingLevelUpInfo::GetInfoManager
// strings:
//   "CGuildBuildingLevelUpInfo"

/* [RE-AUTO c0]
   calls: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo"" */

undefined4 FUN_1145f0c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGuildBuildingLevelUpInfo__GetInfoManager(0,"CGuildBuildingLevelUpInfo",0);
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



/* ===== FUN_1145f110 @ 1145f110  size=52 ===== */
// calls: CGuildBuildingLevelUpInfo::GetInfoManager
// strings:
//   "CGuildBuildingLevelUpInfo"

/* [RE-AUTO c0]
   calls: CGuildBuildingLevelUpInfo::GetManagers
   strings:
     ""CGuildBuildingLevelUpInfo"" */

undefined4 FUN_1145f110(int param_1)

{
  int iVar1;
  
  iVar1 = CGuildBuildingLevelUpInfo__GetInfoManager(0,"CGuildBuildingLevelUpInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_114aa550 @ 114aa550  size=144 ===== */
// strings:
//   "CGuildLevelUpInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildLevelUpInfo"" */

undefined4 __thiscall FUN_114aa550(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = param_2;
  if (param_2 < 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  local_8 = param_1;
  iVar2 = FUN_108b8120(0,"CGuildLevelUpInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      iVar4 = FUN_108ada90(*(undefined4 *)(param_1 + 0x44));
      local_8 = *(int *)(iVar4 + 0x14);
      piVar3 = &local_8;
      if (iVar5 <= *(int *)(iVar4 + 0x14)) {
        piVar3 = &param_2;
      }
      iVar5 = *piVar3;
    }
  }
  *(int *)(param_1 + 0x48) = iVar5;
  return 1;
}



/* ===== FUN_114cf6b0 @ 114cf6b0  size=386 ===== */
// strings:
//   "CLevelEnGroupInfo"
//   "CLevelEnGroupRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLevelEnGroupInfo""
     ""CLevelEnGroupRewardInfo"" */

undefined4 __thiscall FUN_114cf6b0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_78 [100];
  int local_14 [4];
  
  local_14[3] = param_1;
  iVar2 = FUN_104ee100(0,"CLevelEnGroupInfo",0);
  if (((param_2 == -1) ||
      (((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 == 0)))) ||
     ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))) {
LAB_114cf707:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if (iVar2 == 0) goto LAB_114cf707;
    iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4);
  }
  iVar4 = FUN_108fa370(0,"CLevelEnGroupRewardInfo",0);
  if (((param_2 == -1) || ((param_2 == 0 && (*(int *)(iVar4 + 0x30) != 0)))) ||
     ((iVar3 = *(int *)(iVar4 + 0x28), param_1 = local_14[3], iVar3 == 0 ||
      ((param_2 = param_2 - *(int *)(iVar4 + 0x30), param_2 < 0 ||
       (*(int *)(iVar4 + 0x24) <= param_2)))))) {
LAB_114cf755:
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_2 / iVar3) * 4);
    if (iVar4 == 0) goto LAB_114cf755;
    iVar4 = *(int *)(iVar4 + (param_2 % iVar3) * 4);
  }
  if (((iVar2 == 0) || (iVar4 == 0)) ||
     (puVar5 = (undefined4 *)FUN_117e9080(param_3), puVar5 == (undefined4 *)0x0)) {
    return 2;
  }
  FUN_11499ca0();
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  cVar1 = FUN_115223e0(local_14,puVar5[2]);
  if (cVar1 != '\0') {
    FUN_1141c6c0(local_14);
    FUN_1149a960(puVar5[2],puVar5[3]);
    iVar2 = FUN_113f7ed0(local_78);
    if (iVar2 == 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x228))(puVar5[1],*puVar5);
      if (cVar1 == '\0') {
        uVar6 = 7;
      }
      else {
        uVar6 = 0;
      }
      goto LAB_114cf801;
    }
  }
  uVar6 = 6;
LAB_114cf801:
  if (local_14[0] != 0) {
    FUN_10c3d5d0(local_14[0]);
  }
  FUN_1149a140();
  return uVar6;
}



/* ===== FUN_114cf840 @ 114cf840  size=491 ===== */
// calls: memcpy
// strings:
//   "CLevelEnSubGroupInfo"
//   "CLevelEnSubGroupRewardInfo"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""CLevelEnSubGroupInfo""
     ""CLevelEnSubGroupRewardInfo"" */

undefined4 FUN_114cf840(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_9c;
  void **ppvStack_98;
  undefined1 *puStack_94;
  undefined1 local_84 [100];
  void *local_20;
  void *local_1c;
  undefined4 local_18;
  void *local_10;
  int local_c;
  undefined4 *local_8;
  
  puStack_94 = (undefined1 *)0x0;
  ppvStack_98 = (void **)0x11dbd378;
  uStack_9c = 0;
  iVar2 = FUN_104edfa0();
  pvVar5 = param_1;
  if ((param_1 == (void *)0xffffffff) ||
     ((((param_1 == (void *)0x0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 == 0)) ||
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), iVar3 < 0 ||
       (*(int *)(iVar2 + 0x24) <= iVar3)))))) {
LAB_114cf898:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if (iVar2 == 0) goto LAB_114cf898;
    iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4);
  }
  puStack_94 = (undefined1 *)0x0;
  ppvStack_98 = (void **)0x11ddd204;
  uStack_9c = 0;
  iVar4 = FUN_1095e830();
  if ((((pvVar5 != (void *)0xffffffff) && ((pvVar5 != (void *)0x0 || (*(int *)(iVar4 + 0x30) == 0)))
       ) && (iVar3 = *(int *)(iVar4 + 0x28), iVar3 != 0)) &&
     ((iVar7 = (int)pvVar5 - *(int *)(iVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar4 + 0x24)))
     )) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / iVar3) * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + (iVar7 % iVar3) * 4);
      goto LAB_114cf8e2;
    }
  }
  iVar4 = 0;
LAB_114cf8e2:
  if ((iVar2 == 0) || (iVar4 == 0)) {
    return 2;
  }
  puStack_94 = (undefined1 *)0x114cf8fa;
  FUN_11499ca0();
  uVar6 = 0;
  if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4 != 0) {
    local_c = 0;
    do {
      ppvStack_98 = &local_20;
      puVar8 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + local_c);
      local_20 = (void *)0x0;
      local_1c = (void *)0x0;
      local_18 = 0;
      puStack_94 = (undefined1 *)*puVar8;
      uStack_9c = 0x114cf937;
      cVar1 = FUN_115223e0();
      if (cVar1 == '\0') {
        if (local_20 != (void *)0x0) {
          puStack_94 = local_20;
          ppvStack_98 = (void **)0x114cfa03;
          FUN_10c3d5d0();
        }
        goto LAB_114cf9de;
      }
      local_8 = &uStack_9c;
      FUN_1141c640((int)local_1c - (int)local_20 >> 2,(int)&param_1 + 3);
      param_1 = local_1c;
      pvVar5 = (void *)*local_8;
      local_10 = local_20;
      if (local_1c != local_20) {
        pvVar5 = memcpy(pvVar5,local_20,(int)local_1c - (int)local_20);
        pvVar5 = (void *)(((int)param_1 - (int)local_10) + (int)pvVar5);
      }
      local_8[1] = pvVar5;
      FUN_1149a960(*puVar8,puVar8[1]);
      if (local_20 != (void *)0x0) {
        puStack_94 = local_20;
        ppvStack_98 = (void **)0x114cf9a7;
        FUN_10c3d5d0();
      }
      uVar6 = uVar6 + 1;
      local_c = local_c + 0x10;
    } while (uVar6 < (uint)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4));
  }
  puStack_94 = local_84;
  ppvStack_98 = (void **)0x114cf9da;
  iVar2 = FUN_113f7ed0();
  if (iVar2 == 0) {
    puStack_94 = (undefined1 *)0x114cfa12;
    FUN_1149a140();
    return 0;
  }
LAB_114cf9de:
  puStack_94 = (undefined1 *)0x114cf9eb;
  FUN_1149a140();
  return 6;
}



/* ===== FUN_114cfa30 @ 114cfa30  size=350 ===== */
// strings:
//   "CLevelEnGroupInfo"
//   "CLevelEnGroupRewardInfo"

/* [RE-AUTO c0]
   strings:
     ""CLevelEnGroupInfo""
     ""CLevelEnGroupRewardInfo"" */

void __thiscall FUN_114cfa30(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_78 [100];
  int local_14 [4];
  
  local_14[3] = param_1;
  iVar2 = FUN_104ee100(0,"CLevelEnGroupInfo",0);
  if (((param_2 == -1) ||
      (((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 == 0)))) ||
     ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))) {
LAB_114cfa87:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if (iVar2 == 0) goto LAB_114cfa87;
    iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4);
  }
  iVar4 = FUN_108fa370(0,"CLevelEnGroupRewardInfo",0);
  if (((param_2 != -1) && ((param_2 != 0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
     ((iVar3 = *(int *)(iVar4 + 0x28), param_1 = local_14[3], iVar3 != 0 &&
      ((param_2 = param_2 - *(int *)(iVar4 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar4 + 0x24))))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_2 / iVar3) * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + (param_2 % iVar3) * 4);
      goto LAB_114cfad7;
    }
  }
  iVar4 = 0;
LAB_114cfad7:
  if (((iVar2 != 0) && (iVar4 != 0)) &&
     (puVar5 = (undefined4 *)FUN_117e9080(param_3), puVar5 != (undefined4 *)0x0)) {
    FUN_11499ca0();
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    cVar1 = FUN_115223e0(local_14,puVar5[2]);
    if (cVar1 != '\0') {
      FUN_1141c6c0(local_14);
      FUN_1149a960(puVar5[2],puVar5[3]);
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2d1c) + 0x44))(local_78,0x3d);
      if (iVar2 == 0) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x22c))(puVar5[1],*puVar5);
      }
    }
    if (local_14[0] != 0) {
      FUN_10c3d5d0(local_14[0]);
    }
    FUN_1149a140();
  }
  return;
}



/* ===== FUN_114cfb90 @ 114cfb90  size=476 ===== */
// calls: memcpy
// strings:
//   "CLevelEnSubGroupInfo"
//   "CLevelEnSubGroupRewardInfo"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""CLevelEnSubGroupInfo""
     ""CLevelEnSubGroupRewardInfo"" */

void FUN_114cfb90(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uStack_a4;
  void **ppvStack_a0;
  void *pvStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  void *local_84 [25];
  void *local_20;
  void *local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  uStack_94 = 0;
  pcStack_98 = "CLevelEnSubGroupInfo";
  pvStack_9c = (void *)0x0;
  ppvStack_a0 = (void **)0x114cfbad;
  iVar2 = FUN_104edfa0();
  pvVar6 = param_1;
  if ((param_1 == (void *)0xffffffff) ||
     ((((param_1 == (void *)0x0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 == 0)) ||
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), iVar3 < 0 ||
       (*(int *)(iVar2 + 0x24) <= iVar3)))))) {
LAB_114cfbe8:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if (iVar2 == 0) goto LAB_114cfbe8;
    iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4);
  }
  uStack_94 = 0;
  pcStack_98 = "CLevelEnSubGroupRewardInfo";
  pvStack_9c = (void *)0x0;
  ppvStack_a0 = (void **)0x114cfbf8;
  iVar4 = FUN_1095e830();
  if ((((pvVar6 != (void *)0xffffffff) && ((pvVar6 != (void *)0x0 || (*(int *)(iVar4 + 0x30) == 0)))
       ) && (iVar3 = *(int *)(iVar4 + 0x28), iVar3 != 0)) &&
     ((iVar5 = (int)pvVar6 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24)))
     )) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar3) * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + (iVar5 % iVar3) * 4);
      goto LAB_114cfc32;
    }
  }
  iVar4 = 0;
LAB_114cfc32:
  if ((iVar2 != 0) && (iVar4 != 0)) {
    uStack_94 = 1;
    pcStack_98 = pvVar6;
    pvStack_9c = (void *)0x114cfc4d;
    FUN_114cf620();
    pvStack_9c = (void *)0x114cfc55;
    FUN_11499ca0();
    uVar7 = 0;
    if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4 != 0) {
      local_c = 0;
      do {
        ppvStack_a0 = &local_20;
        puVar8 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + local_c);
        local_20 = (void *)0x0;
        local_1c = (void *)0x0;
        local_18 = 0;
        pvStack_9c = (void *)*puVar8;
        uStack_a4 = 0x114cfc95;
        cVar1 = FUN_115223e0();
        if (cVar1 == '\0') {
          if (local_20 != (void *)0x0) {
            pvStack_9c = local_20;
            ppvStack_a0 = (void **)0x114cfd58;
            FUN_10c3d5d0();
            pvStack_9c = (void *)0x114cfd63;
            FUN_1149a140();
            return;
          }
          goto LAB_114cfd3a;
        }
        local_8 = &uStack_a4;
        FUN_1141c640((int)local_1c - (int)local_20 >> 2,(int)&param_1 + 3);
        param_1 = local_1c;
        pvVar6 = (void *)*local_8;
        local_14 = local_20;
        if (local_1c != local_20) {
          pvVar6 = memcpy(pvVar6,local_20,(int)local_1c - (int)local_20);
          pvVar6 = (void *)(((int)param_1 - (int)local_14) + (int)pvVar6);
        }
        local_8[1] = pvVar6;
        FUN_1149a960(*puVar8,puVar8[1]);
        if (local_20 != (void *)0x0) {
          pvStack_9c = local_20;
          ppvStack_a0 = (void **)0x114cfd05;
          FUN_10c3d5d0();
        }
        uVar7 = uVar7 + 1;
        local_c = local_c + 0x10;
      } while (uVar7 < (uint)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4));
    }
    ppvStack_a0 = local_84;
    pvStack_9c = (void *)0x3d;
    uStack_a4 = 0x114cfd3a;
    (**(code **)(**(int **)(*(int *)(local_10 + 0x14) + 0x2d1c) + 0x44))();
LAB_114cfd3a:
    pvStack_9c = (void *)0x114cfd42;
    FUN_1149a140();
  }
  return;
}



/* ===== CSuperSeriesReward::GetManagers @ 114d1460  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CSuperSeriesReward::GetManagers"

/* [RE-AUTO c3]
   id: CSuperSeriesReward::GetManagers
   strings:
     ""CSuperSeriesReward::GetManagers"" */

undefined * CSuperSeriesReward__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2a5a8;
  if (param_3 == 0) {
    if ((DAT_122de5a0 & 1) == 0) {
      DAT_122de5a0 = DAT_122de5a0 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CSuperSeriesReward::GetManagers");
      FUN_11a8911f(&LAB_11c9f2e0);
    }
    if ((undefined *)*DAT_122de584 != (undefined *)0x0) {
      return (undefined *)*DAT_122de584;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de610 & 1) == 0) {
      DAT_122de610 = DAT_122de610 | 1;
      FUN_114d1970();
      FUN_11a8911f(&LAB_11c9f220);
    }
    puVar1 = &DAT_122de5d8;
  }
  return puVar1;
}



/* ===== FUN_114d23b0 @ 114d23b0  size=409 ===== */
// calls: CSuperSeriesReward::GetManagers
// strings:
//   "CSuperSeriesReward"
//   "CLevelSuperSequence"
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   calls: CSuperSeriesReward::GetManagers
   strings:
     ""CSuperSeriesReward""
     ""CLevelSuperSequence""
     ""CMHLevelModeInfo"" */

uint __thiscall FUN_114d23b0(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = CSuperSeriesReward__GetManagers(0,"CSuperSeriesReward",0);
  uVar3 = uVar1;
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(uVar1 + 0x30) == 0)) &&
       (iVar4 = *(int *)(uVar1 + 0x28), iVar4 != 0)))) &&
     ((uVar2 = param_2 - *(int *)(uVar1 + 0x30), uVar3 = uVar2, -1 < (int)uVar2 &&
      ((int)uVar2 < *(int *)(uVar1 + 0x24))))) {
    uVar3 = (int)uVar2 / iVar4;
    iVar5 = *(int *)(*(int *)(uVar1 + 0x20) + uVar3 * 4);
    if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + ((int)uVar2 % iVar4) * 4), iVar4 != 0)) {
      param_3[4] = *(undefined4 *)(iVar4 + 0x1c);
      *param_3 = *(undefined4 *)(iVar4 + 0x14);
      param_3[3] = 0;
      param_3[1] = *(undefined4 *)(iVar4 + 0x18);
      if (param_2 == 0) {
        iVar4 = param_1[3];
      }
      else {
        iVar4 = param_1[5];
      }
      param_3[2] = iVar4;
      iVar4 = (**(code **)(*param_1 + 0x30))(0);
      uVar1 = FUN_109ed220(0,"CLevelSuperSequence",0);
      uVar3 = uVar1;
      if (((iVar4 != -1) && ((iVar4 != 0 || (*(int *)(uVar1 + 0x30) == 0)))) &&
         ((*(int *)(uVar1 + 0x28) != 0 &&
          ((iVar4 = iVar4 - *(int *)(uVar1 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(uVar1 + 0x24))))
          ))) {
        uVar3 = iVar4 / *(int *)(uVar1 + 0x28);
        iVar5 = *(int *)(*(int *)(uVar1 + 0x20) + uVar3 * 4);
        if ((iVar5 != 0) &&
           (iVar4 = *(int *)(iVar5 + (iVar4 % *(int *)(uVar1 + 0x28)) * 4), iVar4 != 0)) {
          uVar1 = FUN_109dd690(0,"CMHLevelModeInfo",0);
          uVar3 = uVar1;
          if (((*(int *)(uVar1 + 0x28) != 0) &&
              (uVar3 = 0x36 - *(int *)(uVar1 + 0x30), -1 < (int)uVar3)) &&
             ((int)uVar3 < *(int *)(uVar1 + 0x24))) {
            iVar5 = (int)uVar3 % *(int *)(uVar1 + 0x28);
            uVar3 = *(uint *)(*(int *)(uVar1 + 0x20) + ((int)uVar3 / *(int *)(uVar1 + 0x28)) * 4);
            if ((uVar3 != 0) && (*(int *)(uVar3 + iVar5 * 4) != 0)) {
              iVar5 = (**(code **)(*(int *)param_1[1] + 0x388))();
              uVar3 = 0;
              if (iVar5 != 0) {
                iVar5 = FUN_1156c6b0(*(undefined4 *)(iVar4 + 0x2c));
                iVar4 = 0;
                if (iVar5 != 0) {
                  iVar4 = param_3[2];
                  iVar5 = FUN_1156c660(3);
                  iVar5 = iVar5 - iVar4;
                  if (iVar5 < 0) {
                    iVar5 = 0;
                  }
                  param_3[3] = iVar5;
                  iVar4 = param_3[4] - iVar4;
                  if (iVar4 < (int)param_3[3]) {
                    param_3[3] = iVar4;
                  }
                }
                return CONCAT31((int3)((uint)iVar4 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* ===== CSuperSeriesReward::GetManagers_114d2780 @ 114d2780  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CSuperSeriesReward::GetManagers"

/* [RE-AUTO c3]
   id: CSuperSeriesReward::GetManagers
   strings:
     ""CSuperSeriesReward::GetManagers"" */

undefined4 CSuperSeriesReward__GetManagers_114d2780(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de5a0 & 1) == 0) {
      DAT_122de5a0 = DAT_122de5a0 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CSuperSeriesReward::GetManagers");
      FUN_11a8911f(&LAB_11c9f2e0);
    }
    return *DAT_122de584;
  }
  return 0;
}



/* ===== FUN_114d2ba0 @ 114d2ba0  size=409 ===== */
// calls: CSuperSeriesReward::GetManagers
// strings:
//   "CSuperSeriesReward"
//   "CLevelSuperSequence"
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   calls: CSuperSeriesReward::GetManagers
   strings:
     ""CSuperSeriesReward""
     ""CLevelSuperSequence""
     ""CMHLevelModeInfo"" */

uint __thiscall FUN_114d2ba0(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = CSuperSeriesReward__GetManagers(0,"CSuperSeriesReward",0);
  uVar3 = uVar1;
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(uVar1 + 0x30) == 0)) &&
       (iVar4 = *(int *)(uVar1 + 0x28), iVar4 != 0)))) &&
     ((uVar2 = param_2 - *(int *)(uVar1 + 0x30), uVar3 = uVar2, -1 < (int)uVar2 &&
      ((int)uVar2 < *(int *)(uVar1 + 0x24))))) {
    uVar3 = (int)uVar2 / iVar4;
    iVar5 = *(int *)(*(int *)(uVar1 + 0x20) + uVar3 * 4);
    if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + ((int)uVar2 % iVar4) * 4), iVar4 != 0)) {
      param_3[4] = *(undefined4 *)(iVar4 + 0x28);
      *param_3 = *(undefined4 *)(iVar4 + 0x20);
      param_3[3] = 0;
      param_3[1] = *(undefined4 *)(iVar4 + 0x24);
      if (param_2 == 0) {
        iVar4 = param_1[4];
      }
      else {
        iVar4 = param_1[6];
      }
      param_3[2] = iVar4;
      iVar4 = (**(code **)(*param_1 + 0x30))(0);
      uVar1 = FUN_109ed220(0,"CLevelSuperSequence",0);
      uVar3 = uVar1;
      if (((iVar4 != -1) && ((iVar4 != 0 || (*(int *)(uVar1 + 0x30) == 0)))) &&
         ((*(int *)(uVar1 + 0x28) != 0 &&
          ((iVar4 = iVar4 - *(int *)(uVar1 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(uVar1 + 0x24))))
          ))) {
        uVar3 = iVar4 / *(int *)(uVar1 + 0x28);
        iVar5 = *(int *)(*(int *)(uVar1 + 0x20) + uVar3 * 4);
        if ((iVar5 != 0) &&
           (iVar4 = *(int *)(iVar5 + (iVar4 % *(int *)(uVar1 + 0x28)) * 4), iVar4 != 0)) {
          uVar1 = FUN_109dd690(0,"CMHLevelModeInfo",0);
          uVar3 = uVar1;
          if (((*(int *)(uVar1 + 0x28) != 0) &&
              (uVar3 = 0x36 - *(int *)(uVar1 + 0x30), -1 < (int)uVar3)) &&
             ((int)uVar3 < *(int *)(uVar1 + 0x24))) {
            iVar5 = (int)uVar3 % *(int *)(uVar1 + 0x28);
            uVar3 = *(uint *)(*(int *)(uVar1 + 0x20) + ((int)uVar3 / *(int *)(uVar1 + 0x28)) * 4);
            if ((uVar3 != 0) && (*(int *)(uVar3 + iVar5 * 4) != 0)) {
              iVar5 = (**(code **)(*(int *)param_1[1] + 0x388))();
              uVar3 = 0;
              if (iVar5 != 0) {
                iVar5 = FUN_1156c6b0(*(undefined4 *)(iVar4 + 0x2c));
                iVar4 = 0;
                if (iVar5 != 0) {
                  iVar4 = param_3[2];
                  iVar5 = FUN_1156c660(2);
                  iVar5 = iVar5 - iVar4;
                  if (iVar5 < 0) {
                    iVar5 = 0;
                  }
                  param_3[3] = iVar5;
                  iVar4 = param_3[4] - iVar4;
                  if (iVar4 < (int)param_3[3]) {
                    param_3[3] = iVar4;
                  }
                }
                return CONCAT31((int3)((uint)iVar4 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* ===== FUN_114d2d40 @ 114d2d40  size=78 ===== */
// calls: CSuperSeriesReward::GetManagers
// strings:
//   "CSuperSeriesReward"

/* [RE-AUTO c0]
   calls: CSuperSeriesReward::GetManagers
   strings:
     ""CSuperSeriesReward"" */

undefined4 FUN_114d2d40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSuperSeriesReward__GetManagers(0,"CSuperSeriesReward",0);
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



/* ===== FUN_11534200 @ 11534200  size=87 ===== */
// calls: CSoulBeastLevelUpInfo::GetInfoManager
// strings:
//   "CSoulBeastLevelUpInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo"" */

undefined4 FUN_11534200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_1 * 100 + param_2;
  iVar2 = CSoulBeastLevelUpInfo__GetInfoManager(0,"CSoulBeastLevelUpInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11534260 @ 11534260  size=78 ===== */
// calls: CSoulBeastLevelUpInfo::GetInfoManager
// strings:
//   "CSoulBeastLevelUpInfo"

/* [RE-AUTO c0]
   calls: CSoulBeastLevelUpInfo::GetManagers
   strings:
     ""CSoulBeastLevelUpInfo"" */

undefined4 FUN_11534260(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSoulBeastLevelUpInfo__GetInfoManager(0,"CSoulBeastLevelUpInfo",0);
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



/* ===== CSRLMaterialLotteryInfo::GetManagers @ 1153b3e0  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CSRLMaterialLotteryInfo::GetManagers"

/* [RE-AUTO c3]
   id: CSRLMaterialLotteryInfo::GetManagers
   strings:
     ""CSRLMaterialLotteryInfo::GetManagers"" */

undefined * CSRLMaterialLotteryInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c994;
  if (param_3 == 0) {
    if ((DAT_122dec80 & 1) == 0) {
      DAT_122dec80 = DAT_122dec80 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CSRLMaterialLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca18a0);
    }
    if ((undefined *)*DAT_122dec64 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec64;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dede4 & 1) == 0) {
      DAT_122dede4 = DAT_122dede4 | 1;
      FUN_1153c1c0();
      FUN_11a8911f(&LAB_11ca16f0);
    }
    puVar1 = &DAT_122dedac;
  }
  return puVar1;
}



/* ===== FUN_1153ec20 @ 1153ec20  size=78 ===== */
// calls: CSRLItemLotteryInfo::FindInfoByKey
// strings:
//   "CSRLItemLotteryInfo"

/* [RE-AUTO c0]
   calls: CSRLItemLotteryInfo::GetManagers
   strings:
     ""CSRLItemLotteryInfo"" */

undefined4 FUN_1153ec20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSRLItemLotteryInfo__FindInfoByKey(0,"CSRLItemLotteryInfo",0);
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



/* ===== FUN_1153ecc0 @ 1153ecc0  size=78 ===== */
// calls: CSRLMaterialLotteryInfo::GetManagers
// strings:
//   "CSRLMaterialLotteryInfo"

/* [RE-AUTO c0]
   calls: CSRLMaterialLotteryInfo::GetManagers
   strings:
     ""CSRLMaterialLotteryInfo"" */

undefined4 FUN_1153ecc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSRLMaterialLotteryInfo__GetManagers(0,"CSRLMaterialLotteryInfo",0);
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



/* ===== FUN_1158dc80 @ 1158dc80  size=11340 ===== */
// strings:
//   "kOperationActivityBoardType_NoBoard"
//   "kOperationActivityBoardType_Marqueen"
//   "kOperationActivityBoardType_Buttons"
//   "kOperationActivityBoardType_Items"
//   "kOperationActivityBoardType_LevelEnter"
//   "kOperationActivityBoardType_LevelFinish"
//   "kOperationActivityBoardType_LoginGift"
//   "kOperationActivityBoardType_FirstBuyVip"
//   "kOperationActivityBoardType_Exchange"
//   "kOperationActivityBoardType_Note"
//   "kOperationActivityBoardType_Achievement"
//   "kOperationActivityBoardType_OnlineTime"
//   "kOperationActivityBoardType_LevelUp"
//   "kOperationActivityBoardType_Compensate"
//   "kOperationActivityBoardType_NewRealmWelfare"
//   "kOperationActivityBoardType_NewAchievement"
//   "kOperationActivityBoardType_SingleButton"
//   "kOperationActivityBoardType_IntoChaos"
//   "kOperationActivityBoardType_MultiLevelEnter"
//   "kOperationActivityBoardType_QiXi"

/* [RE-AUTO c0]
   strings:
     ""kOperationActivityBoardType_NoBoard""
     ""kOperationActivityBoardType_Marqueen""
     ""kOperationActivityBoardType_Buttons""
     ""kOperationActivityBoardType_Items""
     ""kOperationActivityBoardType_LevelEnter""
     ""kOperationActivityBoardType_LevelFinish""
     ""kOperationActivityBoardType_LoginGift""
     ""kOperationActivityBoardType_FirstBuyVip""
     ""kOperationActivityBoardType_Exchange""
     ""kOperationActivityBoardType_Note"" */

bool FUN_1158dc80(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 local_24 [2];
  char *local_1c;
  undefined4 local_14 [2];
  code *local_c;
  
  local_24[0] = 3;
  local_1c = (char *)0x0;
  local_14[0] = 0xb;
  local_c = (code *)0x11d2e240;
  cVar1 = (**(code **)(*param_2 + 8))(local_14,local_24);
  FUN_10a2eb80();
  FUN_10a2eb80();
  if (cVar1 != '\0') {
    local_14[0] = 3;
    local_c = (code *)0x1;
    local_24[0] = 0xb;
    local_1c = "kOperationActivityBoardType_Marqueen";
    cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
    FUN_10a2eb80();
    FUN_10a2eb80();
    if (cVar1 != '\0') {
      local_14[0] = 3;
      local_c = (code *)0x2;
      local_24[0] = 0xb;
      local_1c = "kOperationActivityBoardType_Buttons";
      cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
      FUN_10a2eb80();
      FUN_10a2eb80();
      if (cVar1 != '\0') {
        local_14[0] = 3;
        local_c = (code *)0x3;
        local_24[0] = 0xb;
        local_1c = "kOperationActivityBoardType_Items";
        cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
        FUN_10a2eb80();
        FUN_10a2eb80();
        if (cVar1 != '\0') {
          local_14[0] = 3;
          local_c = (code *)0x65;
          local_24[0] = 0xb;
          local_1c = "kOperationActivityBoardType_LevelEnter";
          cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
          FUN_10a2eb80();
          FUN_10a2eb80();
          if (cVar1 != '\0') {
            local_14[0] = 3;
            local_c = (code *)0x66;
            local_24[0] = 0xb;
            local_1c = "kOperationActivityBoardType_LevelFinish";
            cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
            FUN_10a2eb80();
            FUN_10a2eb80();
            if (cVar1 != '\0') {
              local_14[0] = 3;
              local_c = (code *)0x67;
              local_24[0] = 0xb;
              local_1c = "kOperationActivityBoardType_LoginGift";
              cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
              FUN_10a2eb80();
              FUN_10a2eb80();
              if (cVar1 != '\0') {
                local_14[0] = 3;
                local_c = (code *)0x68;
                local_24[0] = 0xb;
                local_1c = "kOperationActivityBoardType_FirstBuyVip";
                cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                FUN_10a2eb80();
                FUN_10a2eb80();
                if (cVar1 != '\0') {
                  local_14[0] = 3;
                  local_c = (code *)0x69;
                  local_24[0] = 0xb;
                  local_1c = "kOperationActivityBoardType_Exchange";
                  cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                  FUN_10a2eb80();
                  FUN_10a2eb80();
                  if (cVar1 != '\0') {
                    local_14[0] = 3;
                    local_c = (code *)0x6a;
                    local_24[0] = 0xb;
                    local_1c = "kOperationActivityBoardType_Note";
                    cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                    FUN_10a2eb80();
                    FUN_10a2eb80();
                    if (cVar1 != '\0') {
                      local_14[0] = 3;
                      local_c = (code *)0x6b;
                      local_24[0] = 0xb;
                      local_1c = "kOperationActivityBoardType_Achievement";
                      cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                      FUN_10a2eb80();
                      FUN_10a2eb80();
                      if (cVar1 != '\0') {
                        local_14[0] = 3;
                        local_c = (code *)0x6c;
                        local_24[0] = 0xb;
                        local_1c = "kOperationActivityBoardType_OnlineTime";
                        cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                        FUN_10a2eb80();
                        FUN_10a2eb80();
                        if (cVar1 != '\0') {
                          local_14[0] = 3;
                          local_c = (code *)0x6d;
                          local_24[0] = 0xb;
                          local_1c = "kOperationActivityBoardType_LevelUp";
                          cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                          FUN_10a2eb80();
                          FUN_10a2eb80();
                          if (cVar1 != '\0') {
                            local_14[0] = 3;
                            local_c = (code *)0x6e;
                            local_24[0] = 0xb;
                            local_1c = "kOperationActivityBoardType_Compensate";
                            cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                            FUN_10a2eb80();
                            FUN_10a2eb80();
                            if (cVar1 != '\0') {
                              local_14[0] = 3;
                              local_c = (code *)0x6f;
                              local_24[0] = 0xb;
                              local_1c = "kOperationActivityBoardType_NewRealmWelfare";
                              cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                              FUN_10a2eb80();
                              FUN_10a2eb80();
                              if (cVar1 != '\0') {
                                local_14[0] = 3;
                                local_c = (code *)0x70;
                                local_24[0] = 0xb;
                                local_1c = "kOperationActivityBoardType_NewAchievement";
                                cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                FUN_10a2eb80();
                                FUN_10a2eb80();
                                if (cVar1 != '\0') {
                                  local_14[0] = 3;
                                  local_c = (code *)0x71;
                                  local_24[0] = 0xb;
                                  local_1c = "kOperationActivityBoardType_SingleButton";
                                  cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                  FUN_10a2eb80();
                                  FUN_10a2eb80();
                                  if (cVar1 != '\0') {
                                    local_14[0] = 3;
                                    local_c = (code *)0x72;
                                    local_24[0] = 0xb;
                                    local_1c = "kOperationActivityBoardType_IntoChaos";
                                    cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                    FUN_10a2eb80();
                                    FUN_10a2eb80();
                                    if (cVar1 != '\0') {
                                      local_14[0] = 3;
                                      local_c = (code *)0x73;
                                      local_24[0] = 0xb;
                                      local_1c = "kOperationActivityBoardType_MultiLevelEnter";
                                      cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                      FUN_10a2eb80();
                                      FUN_10a2eb80();
                                      if (cVar1 != '\0') {
                                        local_14[0] = 3;
                                        local_c = (code *)0x74;
                                        local_24[0] = 0xb;
                                        local_1c = "kOperationActivityBoardType_QiXi";
                                        cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                        FUN_10a2eb80();
                                        FUN_10a2eb80();
                                        if (cVar1 != '\0') {
                                          local_14[0] = 3;
                                          local_c = (code *)0x75;
                                          local_24[0] = 0xb;
                                          local_1c = "kOperationActivityBoardType_Divination";
                                          cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                          FUN_10a2eb80();
                                          FUN_10a2eb80();
                                          if (cVar1 != '\0') {
                                            local_14[0] = 3;
                                            local_c = (code *)0x76;
                                            local_24[0] = 0xb;
                                            local_1c = "kOperationActivityBoardType_Exchanges";
                                            cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14);
                                            FUN_10a2eb80();
                                            FUN_10a2eb80();
                                            if (cVar1 != '\0') {
                                              local_14[0] = 3;
                                              local_c = (code *)0x77;
                                              local_24[0] = 0xb;
                                              local_1c = "kOperationActivityBoardType_TaskChain";
                                              cVar1 = (**(code **)(*param_2 + 8))(local_24,local_14)
                                              ;
                                              FUN_10a2eb80();
                                              FUN_10a2eb80();
                                              if (cVar1 != '\0') {
                                                local_14[0] = 3;
                                                local_c = (code *)0x78;
                                                local_24[0] = 0xb;
                                                local_1c = "kOperationActivityBoardType_Investment";
                                                cVar1 = (**(code **)(*param_2 + 8))
                                                                  (local_24,local_14);
                                                FUN_10a2eb80();
                                                FUN_10a2eb80();
                                                if (cVar1 != '\0') {
                                                  local_14[0] = 3;
                                                  local_c = (code *)0x79;
                                                  local_24[0] = 0xb;
                                                  local_1c = 
                                                  "kOperationActivityBoardType_EquipUpgrade";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7a;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_ThunderDragon";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7b;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_OpenView";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7c;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_NianShou";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7d;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kOperationActivityBoardType_QiLing";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x7e;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kOperationActivityBoardType_AprilFool";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7f;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_LabourDay";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xa;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_TunDragon";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xb;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_DragonFestival";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xc;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_DragonFestivalTwo";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xd;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_FashionActivity";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xe;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_FightingHunting";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xf;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_WeekActivity";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x10;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_SilverDragon";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x11;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kOperationActivityBoardType_QA";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x12;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kOperationActivityBoardType_QiXiFestival";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x13;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_StraightAstudent";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x14;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_Investment_3nd";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x15;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_SuperHunter";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x16;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_FuLiCuHuoYue";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x17;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_DoubleShiYi";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x18;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_BrokenDragon_One";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x19;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_BrokenDragon_Two";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1a;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_ValentineDay";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1b;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_Lighting";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1c;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_JieDragon";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1d;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "KOperationActivityBoardType_NewAprilFool";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1e;
                                                    local_24[0] = 0xb;
                                                    local_1c = "KOperationActivityBoardType_Spring";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1f;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kOperationActivityBoardType_NewLabourDay";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x20;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_WorldCup";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x22;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_DailyActivity";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x23;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_JurassicWorld";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x21;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_HuntingTeamBattle";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x24;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_SummerMemorial";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x25;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_MidAutumn";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x26;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_WeaponHunting";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x27;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_MonsterCard";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x28;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_PlatinumSinglesDay";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x29;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_ThinksGivingII";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2a;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kOperationActivityBoardType_XmasII";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x2b;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kOperationActivityBoardType_NewYearStore";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2c;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_LoginCumulated";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2d;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kOperationActivityBoardType_DailyConsumption";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x10;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataType_Marqueen";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x20;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityDataType_ButtonScript";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x21;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataType_ButtonCharge";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x22;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataType_ButtonInternalWeb";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x23;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataType_ButtonExternalWeb";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x24;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataType_ButtonAcceptTask";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x25;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataType_ButtonEnterLevel";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x30;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataType_Item";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x40;
                                                      local_24[0] = 0xb;
                                                      local_1c = "kScriptActivityDataType_Param";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x41;
                                                        local_24[0] = 0xb;
                                                        local_1c = 
                                                  "kScriptActivityDataType_LevelHidden";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x42;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataType_HubHidden";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x43;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityDataType_LevelControl";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x44;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataType_Script";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x45;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityDataType_ScriptAttachParam";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x46;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataType_Hunt";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x0;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityDataItemCondType_None";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_ExchangeItem";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_Time";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x3;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_OnlineTime";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x4;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_CharLevel";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x5;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_LevelFinish";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x6;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_GetItem";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x7;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_EntryFinish";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x8;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_Login";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x9;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_Achievement";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xa;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_Script";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xb;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_ExchangeItems";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xc;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_HuntSoul";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xd;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_LevelHub";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xe;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_LevelsFinish";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0xf;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_QQBi";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x10;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_Zodiac";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x11;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_DataCounter";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x12;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemCondType_TaskSubmit";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityItemOpenType_Auto";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x2;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityItemOpenType_Manual";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x1;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemFlag_SendByMail";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemFlag_OnlyInTown";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x4;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityDataItemFlag_SendByScript";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x0;
                                                    local_24[0] = 0xb;
                                                    local_1c = "eEnterMode_Normal";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = "eEnterMode_Match";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x1;
                                                        local_24[0] = 0xb;
                                                        local_1c = 
                                                  "kScriptActivityDataState_Enabled";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kScriptActivityDataState_Disabled";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "kScriptActivityLevelControlType_Page";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x2;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityLevelControlType_Group";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x3;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityLevelControlType_SubGroup";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x4;
                                                    local_24[0] = 0xb;
                                                    local_1c = 
                                                  "kScriptActivityLevelControlType_Level";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x0;
                                                    local_24[0] = 0xb;
                                                    local_1c = "EOperationActivityPeriodType_None";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = "EOperationActivityPeriodType_Day";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x2;
                                                        local_24[0] = 0xb;
                                                        local_1c = 
                                                  "EOperationActivityPeriodType_Week";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x3;
                                                    local_24[0] = 0xb;
                                                    local_1c = "EOperationActivityPeriodType_Month";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x4;
                                                      local_24[0] = 0xb;
                                                      local_1c = 
                                                  "EOperationActivityPeriodType_Week_DailyStartByThreeOClock"
                                                  ;
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x0;
                                                    local_24[0] = 0xb;
                                                    local_1c = "Item_SysGenBind_Type_None";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = "Item_SysGenBind_Type_UseBind";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x2;
                                                        local_24[0] = 0xb;
                                                        local_1c = "Item_SysGenBind_Type_GainBind";
                                                        cVar1 = (**(code **)(*param_2 + 8))
                                                                          (local_24,local_14);
                                                        FUN_10a2eb80();
                                                        FUN_10a2eb80();
                                                        if (cVar1 != '\0') {
                                                          local_14[0] = 3;
                                                          local_c = (code *)0x3;
                                                          local_24[0] = 0xb;
                                                          local_1c = "Item_SysGenBind_Type_Default";
                                                          cVar1 = (**(code **)(*param_2 + 8))
                                                                            (local_24,local_14);
                                                          FUN_10a2eb80();
                                                          FUN_10a2eb80();
                                                          if (cVar1 != '\0') {
                                                            local_14[0] = 3;
                                                            local_c = (code *)0x1;
                                                            local_24[0] = 0xb;
                                                            local_1c = "PARAMINFOITEMNUM";
                                                            cVar1 = (**(code **)(*param_2 + 8))
                                                                              (local_24,local_14);
                                                            FUN_10a2eb80();
                                                            FUN_10a2eb80();
                                                            if (cVar1 != '\0') {
                                                              local_14[0] = 3;
                                                              local_c = (code *)0x2;
                                                              local_24[0] = 0xb;
                                                              local_1c = "PARAMINFOBIGNUM";
                                                              cVar1 = (**(code **)(*param_2 + 8))
                                                                                (local_24,local_14);
                                                              FUN_10a2eb80();
                                                              FUN_10a2eb80();
                                                              if (cVar1 != '\0') {
                                                                local_14[0] = 3;
                                                                local_c = (code *)0x6;
                                                                local_24[0] = 0xb;
                                                                local_1c = "PARAMINFOPLAYER";
                                                                cVar1 = (**(code **)(*param_2 + 8))
                                                                                  (local_24,local_14
                                                                                  );
                                                                FUN_10a2eb80();
                                                                FUN_10a2eb80();
                                                                if (cVar1 != '\0') {
                                                                  local_14[0] = 3;
                                                                  local_c = (code *)0xa;
                                                                  local_24[0] = 0xb;
                                                                  local_1c = "PARAMINFOITEM";
                                                                  cVar1 = (**(code **)(*param_2 + 8)
                                                                          )(local_24,local_14);
                                                                  FUN_10a2eb80();
                                                                  FUN_10a2eb80();
                                                                  if (cVar1 != '\0') {
                                                                    local_14[0] = 3;
                                                                    local_c = (code *)0x2a;
                                                                    local_24[0] = 0xb;
                                                                    local_1c = "PARAMSTRING";
                                                                    cVar1 = (**(code **)(*param_2 +
                                                                                        8))(local_24
                                                  ,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x0;
                                                    local_24[0] = 0xb;
                                                    local_1c = "kOnlineTimeType_Daily";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = "kOnlineTimeType_Weekly";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x2;
                                                        local_24[0] = 0xb;
                                                        local_1c = "kOnlineTimeType_Monthly";
                                                        cVar1 = (**(code **)(*param_2 + 8))
                                                                          (local_24,local_14);
                                                        FUN_10a2eb80();
                                                        FUN_10a2eb80();
                                                        if (cVar1 != '\0') {
                                                          local_14[0] = 3;
                                                          local_c = (code *)0x3;
                                                          local_24[0] = 0xb;
                                                          local_1c = "kOnlineTimeType_SelfDefine";
                                                          cVar1 = (**(code **)(*param_2 + 8))
                                                                            (local_24,local_14);
                                                          FUN_10a2eb80();
                                                          FUN_10a2eb80();
                                                          if (cVar1 != '\0') {
                                                            local_14[0] = 3;
                                                            local_c = (code *)0xffffffff;
                                                            local_24[0] = 0xb;
                                                            local_1c = "enItemColumn_None";
                                                            cVar1 = (**(code **)(*param_2 + 8))
                                                                              (local_24,local_14);
                                                            FUN_10a2eb80();
                                                            FUN_10a2eb80();
                                                            if (cVar1 != '\0') {
                                                              local_14[0] = 3;
                                                              local_c = (code *)0x0;
                                                              local_24[0] = 0xb;
                                                              local_1c = "enItemColumn_Main";
                                                              cVar1 = (**(code **)(*param_2 + 8))
                                                                                (local_24,local_14);
                                                              FUN_10a2eb80();
                                                              FUN_10a2eb80();
                                                              if (cVar1 != '\0') {
                                                                local_14[0] = 3;
                                                                local_c = (code *)0x1;
                                                                local_24[0] = 0xb;
                                                                local_1c = "enItemColumn_Mall";
                                                                cVar1 = (**(code **)(*param_2 + 8))
                                                                                  (local_24,local_14
                                                                                  );
                                                                FUN_10a2eb80();
                                                                FUN_10a2eb80();
                                                                if (cVar1 != '\0') {
                                                                  local_14[0] = 3;
                                                                  local_c = (code *)0x2;
                                                                  local_24[0] = 0xb;
                                                                  local_1c = "enItemColumn_Store";
                                                                  cVar1 = (**(code **)(*param_2 + 8)
                                                                          )(local_24,local_14);
                                                                  FUN_10a2eb80();
                                                                  FUN_10a2eb80();
                                                                  if (cVar1 != '\0') {
                                                                    local_14[0] = 3;
                                                                    local_c = (code *)0xa;
                                                                    local_24[0] = 0xb;
                                                                    local_1c = 
                                                  "enItemColumn_MaterialStore";
                                                  cVar1 = (**(code **)(*param_2 + 8))
                                                                    (local_24,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x3;
                                                    local_24[0] = 0xb;
                                                    local_1c = "enItemColumn_RoleEquip";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x5;
                                                      local_24[0] = 0xb;
                                                      local_1c = "enItemColumn_Quest";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 3;
                                                        local_c = (code *)0x6;
                                                        local_24[0] = 0xb;
                                                        local_1c = "enItemColumn_PetEquip";
                                                        cVar1 = (**(code **)(*param_2 + 8))
                                                                          (local_24,local_14);
                                                        FUN_10a2eb80();
                                                        FUN_10a2eb80();
                                                        if (cVar1 != '\0') {
                                                          local_14[0] = 3;
                                                          local_c = (code *)0x7;
                                                          local_24[0] = 0xb;
                                                          local_1c = "enItemColumn_Farm";
                                                          cVar1 = (**(code **)(*param_2 + 8))
                                                                            (local_24,local_14);
                                                          FUN_10a2eb80();
                                                          FUN_10a2eb80();
                                                          if (cVar1 != '\0') {
                                                            local_14[0] = 3;
                                                            local_c = (code *)0x8;
                                                            local_24[0] = 0xb;
                                                            local_1c = "enItemColumn_RoleEquip2";
                                                            cVar1 = (**(code **)(*param_2 + 8))
                                                                              (local_24,local_14);
                                                            FUN_10a2eb80();
                                                            FUN_10a2eb80();
                                                            if (cVar1 != '\0') {
                                                              local_14[0] = 3;
                                                              local_c = (code *)0x9;
                                                              local_24[0] = 0xb;
                                                              local_1c = "enItemColumn_Level";
                                                              cVar1 = (**(code **)(*param_2 + 8))
                                                                                (local_24,local_14);
                                                              FUN_10a2eb80();
                                                              FUN_10a2eb80();
                                                              if (cVar1 != '\0') {
                                                                local_14[0] = 3;
                                                                local_c = (code *)0x0;
                                                                local_24[0] = 0xb;
                                                                local_1c = "EChatArea_Self";
                                                                cVar1 = (**(code **)(*param_2 + 8))
                                                                                  (local_24,local_14
                                                                                  );
                                                                FUN_10a2eb80();
                                                                FUN_10a2eb80();
                                                                if (cVar1 != '\0') {
                                                                  local_14[0] = 3;
                                                                  local_c = (code *)0x1;
                                                                  local_24[0] = 0xb;
                                                                  local_1c = "EChatArea_All";
                                                                  cVar1 = (**(code **)(*param_2 + 8)
                                                                          )(local_24,local_14);
                                                                  FUN_10a2eb80();
                                                                  FUN_10a2eb80();
                                                                  if (cVar1 != '\0') {
                                                                    local_14[0] = 3;
                                                                    local_c = (code *)0x2;
                                                                    local_24[0] = 0xb;
                                                                    local_1c = "EChatArea_NearBy";
                                                                    cVar1 = (**(code **)(*param_2 +
                                                                                        8))(local_24
                                                  ,local_14);
                                                  FUN_10a2eb80();
                                                  FUN_10a2eb80();
                                                  if (cVar1 != '\0') {
                                                    local_14[0] = 3;
                                                    local_c = (code *)0x3;
                                                    local_24[0] = 0xb;
                                                    local_1c = "EChatArea_BattleGround";
                                                    cVar1 = (**(code **)(*param_2 + 8))
                                                                      (local_24,local_14);
                                                    FUN_10a2eb80();
                                                    FUN_10a2eb80();
                                                    if (cVar1 != '\0') {
                                                      local_14[0] = 3;
                                                      local_c = (code *)0x1;
                                                      local_24[0] = 0xb;
                                                      local_1c = "CALLBACK_RESULT_REMOVE";
                                                      cVar1 = (**(code **)(*param_2 + 8))
                                                                        (local_24,local_14);
                                                      FUN_10a2eb80();
                                                      FUN_10a2eb80();
                                                      if (cVar1 != '\0') {
                                                        local_14[0] = 0xf;
                                                        local_c = FUN_11590d60;
                                                        local_24[0] = 0xb;
                                                        local_1c = "GetActivityVar";
                                                        cVar1 = (**(code **)(*param_2 + 8))
                                                                          (local_24,local_14);
                                                        FUN_10a2eb80();
                                                        FUN_10a2eb80();
                                                        if (cVar1 != '\0') {
                                                          local_14[0] = 0xf;
                                                          local_c = FUN_11590ea0;
                                                          local_24[0] = 0xb;
                                                          local_1c = "RegisterClock";
                                                          cVar1 = (**(code **)(*param_2 + 8))
                                                                            (local_24,local_14);
                                                          FUN_10a2eb80();
                                                          FUN_10a2eb80();
                                                          if (cVar1 != '\0') {
                                                            local_14[0] = 0xf;
                                                            local_c = FUN_11590f40;
                                                            local_24[0] = 0xb;
                                                            local_1c = "RegisterGlobalEvent";
                                                            cVar1 = (**(code **)(*param_2 + 8))
                                                                              (local_24,local_14);
                                                            FUN_10a2eb80();
                                                            FUN_10a2eb80();
                                                            if (cVar1 != '\0') {
                                                              local_14[0] = 0xf;
                                                              local_c = FUN_11590fe0;
                                                              local_24[0] = 0xb;
                                                              local_1c = "SetGlobalToken";
                                                              cVar1 = (**(code **)(*param_2 + 8))
                                                                                (local_24,local_14);
                                                              FUN_10a2eb80();
                                                              FUN_10a2eb80();
                                                              if (cVar1 != '\0') {
                                                                local_14[0] = 0xf;
                                                                local_c = FUN_11590e00;
                                                                local_24[0] = 0xb;
                                                                local_1c = "GetGlobalToken";
                                                                cVar1 = (**(code **)(*param_2 + 8))
                                                                                  (local_24,local_14
                                                                                  );
                                                                FUN_10a2eb80();
                                                                FUN_10a2eb80();
                                                                return cVar1 != '\0';
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
    }
  }
  return false;
}



