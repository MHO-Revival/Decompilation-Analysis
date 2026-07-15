/* ===== FUN_10b589a0 @ 10b589a0  size=58 ===== */
// strings:
//   "ClientSychedStorage"

/* [RE-AUTO c0]
   strings:
     ""ClientSychedStorage"" */

void __thiscall FUN_10b589a0(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x28))("ClientSychedStorage");
  (**(code **)(*param_2 + 0x18))(param_1,0x80,1);
  FUN_110a4a70(param_2);
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_10b6a6d0 @ 10b6a6d0  size=421 ===== */
// strings:
//   "CCodeCheckpointDebugMgr"
//   "FEATURE TESTER: Search for code checkpoints that have been encountered by substring"
//   "ft_debug_checkpoint_search"
//   "ft_debug_ccoverage"
//   "ft_debug_ccoverage_rate"
//   "ft_debug_ccoverage_maxlines"
//   "ft_debug_ccoverage_filter_maxcount"
//   "ft_debug_ccoverage_filter_mincount"
//   "CodeCheckpointList.txt"
//   "../USER"

/* [RE-AUTO c0]
   strings:
     ""CCodeCheckpointDebugMgr""
     ""FEATURE TESTER: Search for code checkpoints that have been encountered by substring""
     ""ft_debug_checkpoint_search""
     ""ft_debug_ccoverage""
     ""ft_debug_ccoverage_rate""
     ""ft_debug_ccoverage_maxlines""
     ""ft_debug_ccoverage_filter_maxcount""
     ""ft_debug_ccoverage_filter_mincount""
     ""CodeCheckpointList.txt""
     ""../USER"" */

undefined4 * __fastcall FUN_10b6a6d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *local_10;
  int *local_c;
  undefined1 local_5;
  
  pcVar4 = "CCodeCheckpointDebugMgr";
  if (param_1 == (undefined4 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  local_10 = param_1;
  FUN_10be6620(pcVar4);
  puVar1 = param_1 + 9;
  *param_1 = &PTR_FUN_11cc83fc;
  puVar2 = param_1 + 4;
  puVar3 = param_1 + 5;
  *puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = puVar1;
  param_1[0xc] = puVar1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = local_5;
  puVar1 = param_1 + 0xf;
  *puVar1 = puVar1;
  param_1[0x10] = puVar1;
  puVar1 = param_1 + 0x11;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x13] = 0;
  param_1 = param_1 + 6;
  *puVar2 = 0;
  *puVar3 = 0x3d4ccccd;
  local_10[7] = 0;
  *param_1 = 10;
  local_10[8] = 0;
  local_c = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x100))();
  (**(code **)(*local_c + 0x7c))
            ("ft_debug_checkpoint_search",FUN_10b6b9a0,2,
             "FEATURE TESTER: Search for code checkpoints that have been encountered by substring");
  piVar6 = local_c;
  (**(code **)(*local_c + 0x18))("ft_debug_ccoverage",puVar2,*puVar2,2,0,0,1);
  (**(code **)(*piVar6 + 0x1c))("ft_debug_ccoverage_rate",puVar3,*puVar3,2,0,0,1);
  (**(code **)(*piVar6 + 0x18))("ft_debug_ccoverage_maxlines",param_1,*param_1,2,0,0,1);
  puVar2 = local_10;
  (**(code **)(*piVar6 + 0x18))
            ("ft_debug_ccoverage_filter_maxcount",local_10 + 7,local_10[7],2,0,0,1);
  puVar1 = puVar2 + 8;
  (**(code **)(*piVar6 + 0x18))("ft_debug_ccoverage_filter_mincount",puVar1,*puVar1,2,0,0,1);
  FUN_10b700e0(&local_10,"../USER","CodeCheckpointList.txt");
  puVar1 = local_10;
  FUN_10b6ae80(local_10);
  piVar6 = puVar1 + -3;
  if (-1 < *piVar6) {
    iVar5 = FUN_10c3dad0(piVar6);
    if (iVar5 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - puVar1[-1]);
      FUN_10c3d900(piVar6);
    }
  }
  return puVar2;
}



/* ===== FUN_10b717f0 @ 10b717f0  size=415 ===== */
// strings:
//   "WeaponChargeInfo"
//   "StateQuitInfo"
//   "stateName"
//   "buffTrig"

/* [RE-AUTO c0]
   strings:
     ""WeaponChargeInfo""
     ""StateQuitInfo""
     ""stateName""
     ""buffTrig"" */

void __thiscall FUN_10b717f0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int *local_c;
  int *local_8;
  
  iVar2 = (**(code **)(*param_2 + 0xa0))();
  local_14 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_2 + 0xa8))(&local_8,local_14);
      uVar3 = (**(code **)(*local_8 + 0x20))();
      FUN_10f56fa0(uVar3);
      FUN_10f56fa0("WeaponChargeInfo");
      iVar4 = FUN_10f57110();
      iVar5 = FUN_10f57110();
      if (iVar5 == iVar4) {
        if (local_8 != (int *)0x0) {
          (**(code **)*local_8)(local_8,param_3,param_1 + 4);
        }
        FUN_10b71a80();
      }
      else {
        FUN_10f56fa0("StateQuitInfo");
        iVar4 = FUN_10f57110();
        iVar5 = FUN_10f57110();
        if (iVar5 == iVar4) {
          iVar4 = (**(code **)(*local_8 + 0xa0))();
          iVar5 = 0;
          if (0 < iVar4) {
            do {
              (**(code **)(*local_8 + 0xa8))(&local_c,iVar5);
              cVar1 = (**(code **)(*local_c + 0x80))("stateName");
              if (cVar1 != '\0') {
                uVar3 = (**(code **)(*local_c + 0x7c))("stateName");
                FUN_10f56fa0(uVar3);
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0xc);
              }
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 4))();
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
        }
        else {
          FUN_10f56fa0("buffTrig");
          iVar4 = FUN_10f57110();
          iVar5 = FUN_10f57110();
          if (iVar5 == iVar4) {
            if (local_8 != (int *)0x0) {
              (**(code **)*local_8)(local_8,param_3,param_1 + 0xc);
            }
            FUN_10b71a80();
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}



/* ===== FUN_10b72690 @ 10b72690  size=546 ===== */
// calls: atoi
// strings:
//   "weaponInfo"
//   "weaponID"
//   "chargeLevel"
//   "buffID"
//   "skillID"
//   "startInfo"
//   "loopInfo"
//   "endInfo"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""weaponInfo""
     ""weaponID""
     ""chargeLevel""
     ""buffID""
     ""skillID""
     ""startInfo""
     ""loopInfo""
     ""endInfo"" */

void __thiscall FUN_10b72690(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *local_8;
  
  uVar2 = (**(code **)(*param_2 + 0x20))();
  FUN_10f56fa0(uVar2);
  FUN_10f56fa0("weaponInfo");
  iVar3 = FUN_10f57110();
  iVar4 = FUN_10f57110();
  if (iVar4 == iVar3) {
    cVar1 = (**(code **)(*param_2 + 0x80))("weaponID");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("weaponID");
      FUN_10f56fa0(uVar2);
      pcVar5 = (char *)FUN_10f57110();
      iVar3 = atoi(pcVar5);
      *(int *)(param_1 + 4) = iVar3;
    }
    cVar1 = (**(code **)(*param_2 + 0x80))("chargeLevel");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("chargeLevel");
      FUN_10f56fa0(uVar2);
      pcVar5 = (char *)FUN_10f57110();
      iVar3 = atoi(pcVar5);
      *(int *)(param_1 + 8) = iVar3;
    }
    cVar1 = (**(code **)(*param_2 + 0x80))("buffID");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("buffID");
      FUN_10f56fa0(uVar2);
      pcVar5 = (char *)FUN_10f57110();
      iVar3 = atoi(pcVar5);
      *(int *)(param_1 + 0xc) = iVar3;
    }
    cVar1 = (**(code **)(*param_2 + 0x80))("skillID");
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x7c))("skillID");
      FUN_10f56fa0(uVar2);
      pcVar5 = (char *)FUN_10f57110();
      iVar3 = atoi(pcVar5);
      *(int *)(param_1 + 0x10) = iVar3;
    }
    iVar3 = (**(code **)(*param_2 + 0xa0))();
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*param_2 + 0xa8))(&local_8,iVar4);
        uVar2 = (**(code **)(*local_8 + 0x20))();
        FUN_10f56fa0(uVar2);
        FUN_10f56fa0("startInfo");
        iVar6 = FUN_10f57110();
        iVar7 = FUN_10f57110();
        if (iVar7 == iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x10);
        }
        FUN_10f56fa0("loopInfo");
        iVar6 = FUN_10f57110();
        iVar7 = FUN_10f57110();
        if (iVar7 == iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x10);
        }
        FUN_10f56fa0("endInfo");
        iVar6 = FUN_10f57110();
        iVar7 = FUN_10f57110();
        if (iVar7 == iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x10);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 4))();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}



/* ===== FUN_10b92350 @ 10b92350  size=320 ===== */
// strings:
//   "COMBAT_DragonheatFront"
//   "COMBAT_Rage02_FlamerFire"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_DragonheatFront""
     ""COMBAT_Rage02_FlamerFire"" */

void __fastcall FUN_10b92350(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float local_24;
  float fStack_20;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x60) + 0x30);
  if (piVar1 == (int *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(*(int *)piVar1[3] + 0x94))();
  fStack_20 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_20 = *(float *)(param_1 + 0x8c) - fStack_20;
  local_24 = (float)*puVar5;
  local_24 = *(float *)(param_1 + 0x88) - local_24;
  fVar9 = *(float *)(param_1 + 0x90) - *(float *)(puVar5 + 1);
  fVar9 = fStack_20 * fStack_20 + local_24 * local_24 + fVar9 * fVar9;
  if (DAT_11cbf070 < fVar9) {
    rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  }
  (**(code **)(*(int *)piVar1[3] + 0x94))();
  (**(code **)(*piVar1 + 0x790))();
  iVar6 = FUN_10fd05d0();
  if (iVar6 != 0) {
    FUN_10f56fa0("COMBAT_DragonheatFront");
    iVar7 = FUN_10f57110();
    iVar8 = FUN_10f57110();
    if (iVar7 == iVar8) goto LAB_10b9245e;
  }
  FUN_10f56fa0("COMBAT_Rage02_FlamerFire");
  iVar7 = FUN_10f57110();
  iVar8 = FUN_10f57110();
  if (iVar7 != iVar8) {
    return;
  }
LAB_10b9245e:
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(iVar6 + 0x218) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(iVar6 + 0x21c) = uVar2;
  *(undefined4 *)(iVar6 + 0x220) = uVar3;
  *(undefined4 *)(iVar6 + 0x224) = uVar4;
  FUN_10eff090(1,param_1 + 0x88,0x3f19999a,1);
  return;
}



/* ===== FUN_10bc8d60 @ 10bc8d60  size=1499 ===== */
// calls: memset, _snprintf, CInfoRecord::GetModelString, CLogicBuffArea::ReadPropertiesFromXml
// strings:
//   "CGameBuffArea_%08x"
//   "MHBuffArea"
//   "/Libs/EntityProperties/"
//   "Properties"

/* [RE-AUTO c0]
   calls: memset, _snprintf
   strings:
     ""CGameBuffArea_%08x""
     ""MHBuffArea""
     ""/Libs/EntityProperties/""
     ""Properties"" */

undefined4 __thiscall FUN_10bc8d60(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char local_390;
  undefined1 local_38f [259];
  char local_28c;
  undefined1 local_28b [259];
  undefined1 local_188 [24];
  int local_170;
  char *local_164;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_f0 [24];
  int *local_d8;
  char *local_cc;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *local_6c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  int local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined1 local_c [4];
  int *local_8;
  
  param_1[0x10] = (int)param_2;
  if (param_2 == (int *)0x0) goto LAB_10bc90e4;
  piVar6 = (int *)0x0;
  if (param_2[0x38] == 0) {
    if (*(char *)((int)DAT_1202e818 + 0x209) == '\0') {
      piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0xfc))(param_2[0x36],param_2[0x37]);
joined_r0x10bc9220:
      if (piVar6 == (int *)0x0) goto LAB_10bc90e4;
    }
    else {
      local_34 = param_2[0x36];
      local_30 = param_2[0x37];
      uVar4 = (**(code **)(*(int *)DAT_1202e818[0x14] + 0x8c))(&local_34);
      piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x2c))(uVar4);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0xfc))
                                  (*(undefined4 *)(param_1[0x10] + 0xd8),
                                   *(undefined4 *)(param_1[0x10] + 0xdc));
        goto joined_r0x10bc9220;
      }
    }
    iVar3 = (**(code **)(*piVar6 + 4))();
    param_1[0x11] = iVar3;
    (**(code **)(*piVar6 + 0x280))(param_1[0x10]);
    puVar2 = (undefined4 *)FUN_11414f00(param_1[0x10]);
    local_48 = *puVar2;
    local_44 = puVar2[1];
    local_40 = puVar2[2];
    (**(code **)(*piVar6 + 0x90))(&local_48,0);
    puVar2 = (undefined4 *)FUN_11414f40(param_1[0x10]);
    local_58 = *puVar2;
    local_54 = puVar2[1];
    local_50 = puVar2[2];
    local_4c = puVar2[3];
    (**(code **)(*piVar6 + 0xb0))(&local_58,0);
    (**(code **)(*param_2 + 0xdc))(param_1);
    CLogicBuffArea__ReadPropertiesFromXml(piVar6);
  }
  else if (param_2[0x38] == 4) {
    FUN_10a6f680();
    param_1[0x10] = (int)param_2;
    puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x28))();
    local_bc = *puVar1;
    local_b4 = *(undefined4 *)(puVar1 + 1);
    local_20 = local_b4;
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0x10] + 0x1c))();
    local_20 = 0x3f800000;
    local_b0 = *puVar2;
    uStack_ac = puVar2[1];
    uStack_a8 = puVar2[2];
    uStack_a4 = puVar2[3];
    local_98 = 0x3f800000;
    local_a0 = CONCAT44(DAT_11de9918,DAT_11de9918);
    local_390 = '\0';
    memset(local_38f,0,0x103);
    _snprintf(&local_390,0x104,"CGameBuffArea_%08x",*(undefined4 *)(param_1[0x10] + 4));
    local_cc = &local_390;
    piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
    local_d8 = (int *)(**(code **)(*piVar5 + 0xc))("MHBuffArea");
    local_90 = 2;
    local_94 = 0;
    uVar4 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
    CInfoRecord__GetModelString(uVar4);
    uVar4 = FUN_10a4b980(local_2c,local_c,"/Libs/EntityProperties/",
                         *(undefined4 *)(param_1[0x10] + 0xf8));
    FUN_10a4b980(&local_14,uVar4);
    FUN_104f6f60();
    (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_10,local_14,0,1,0);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xac))(&local_8,"Properties");
      if (local_8 != (int *)0x0) {
        piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[0xc] + 0x30))(0);
        local_18 = piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
        }
        iVar3 = (**(code **)(*local_d8 + 0x1c))();
        if (iVar3 != 0) {
          local_1c = (int *)0x0;
          FUN_10a68ce0("Properties",&local_1c);
          piVar6 = local_1c;
          (**(code **)(*piVar5 + 0x5c))(local_1c,1,0);
          piVar5 = local_18;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0xc))();
            piVar5 = local_18;
          }
        }
        FUN_11055070(&local_8,piVar5);
        local_6c = piVar5;
        if ((local_d8 == (int *)0x0) ||
           (piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x24))(local_f0,1),
           piVar6 == (int *)0x0)) {
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))();
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 4))();
          }
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 4))();
          }
          FUN_104f6f60();
          FUN_104f6f60();
          goto LAB_10bc90df;
        }
        iVar3 = (**(code **)(*piVar6 + 4))();
        param_1[0x11] = iVar3;
        (**(code **)(*param_2 + 0xdc))(param_1);
        CLogicBuffArea__ReadPropertiesFromXml(piVar6);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 4))();
        }
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
    }
    FUN_104f6f60();
    FUN_104f6f60();
    FUN_10a72180();
  }
  else {
    FUN_10a6f680();
    param_1[0x10] = (int)param_2;
    puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x28))();
    local_154 = *puVar1;
    local_14c = *(undefined4 *)(puVar1 + 1);
    local_20 = local_14c;
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0x10] + 0x1c))();
    local_20 = 0x3f800000;
    local_148 = *puVar2;
    uStack_144 = puVar2[1];
    uStack_140 = puVar2[2];
    uStack_13c = puVar2[3];
    local_130 = 0x3f800000;
    local_138 = CONCAT44(DAT_11de9918,DAT_11de9918);
    local_28c = '\0';
    memset(local_28b,0,0x103);
    _snprintf(&local_28c,0x104,"CGameBuffArea_%08x",*(undefined4 *)(param_1[0x10] + 4));
    local_164 = &local_28c;
    piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x20))();
    local_170 = (**(code **)(*piVar6 + 0xc))("MHBuffArea");
    local_128 = 2;
    local_12c = 0;
    if ((local_170 == 0) ||
       (piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x24))(local_188,1),
       piVar6 == (int *)0x0)) {
LAB_10bc90df:
      FUN_10a72180();
      goto LAB_10bc90e4;
    }
    iVar3 = (**(code **)(*piVar6 + 4))();
    param_1[0x11] = iVar3;
    FUN_10a72180();
  }
  if (piVar6 != (int *)0x0) {
    local_3c = (**(code **)(*(int *)param_1[0x10] + 0xd0))();
    iVar3 = *param_1;
    uVar4 = FUN_11414f40(param_1[0x10]);
    uVar4 = FUN_11414f00(param_1[0x10],uVar4);
    (**(code **)(iVar3 + 0xb0))(&local_3c,uVar4);
    (**(code **)(*piVar6 + 0x280))(param_2);
    piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
    (**(code **)(*piVar5 + 0x22c))(piVar6);
    return 1;
  }
LAB_10bc90e4:
  (**(code **)(*(int *)DAT_1202e818[0x14] + 0x40))(param_1[0x11],0);
  param_1[0x11] = -1;
  param_1[0x10] = 0;
  return 0;
}



/* ===== FUN_10bda3f0 @ 10bda3f0  size=4111 ===== */
// strings:
//   "cl_fov"
//   "cl_bob"
//   "cl_tpvDist"
//   "cl_tpvYaw"
//   "cl_nearPlane"
//   "cl_sprintShake"
//   "cl_sensitivityZeroG"
//   "cl_sensitivity"
//   "cl_invertMouse"
//   "cl_invertController"
//   "cl_crouchToggle"
//   "cl_fpBody"
//   "cl_sprintToggle"
//   "cl_sprintTime"
//   "cl_sprintRestingTime"
//   "i_staticfiresounds"
//   "i_soundeffects"
//   "i_lighteffects"
//   "i_particleeffects"
//   "i_offset_front"

/* [RE-AUTO c0]
   strings:
     ""cl_fov""
     ""cl_bob""
     ""cl_tpvDist""
     ""cl_tpvYaw""
     ""cl_nearPlane""
     ""cl_sprintShake""
     ""cl_sensitivityZeroG""
     ""cl_sensitivity""
     ""cl_invertMouse""
     ""cl_invertController"" */

void FUN_10bda3f0(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_1202e818 + 0x2c);
  (**(code **)(*piVar1 + 0x20))("cl_fov",1);
  (**(code **)(*piVar1 + 0x20))("cl_bob",1);
  (**(code **)(*piVar1 + 0x20))("cl_tpvDist",1);
  (**(code **)(*piVar1 + 0x20))("cl_tpvYaw",1);
  (**(code **)(*piVar1 + 0x20))("cl_nearPlane",1);
  (**(code **)(*piVar1 + 0x20))("cl_sprintShake",1);
  (**(code **)(*piVar1 + 0x20))("cl_sensitivityZeroG",1);
  (**(code **)(*piVar1 + 0x20))("cl_sensitivity",1);
  (**(code **)(*piVar1 + 0x20))("cl_invertMouse",1);
  (**(code **)(*piVar1 + 0x20))("cl_invertController",1);
  (**(code **)(*piVar1 + 0x20))("cl_crouchToggle",1);
  (**(code **)(*piVar1 + 0x20))("cl_fpBody",1);
  (**(code **)(*piVar1 + 0x20))("cl_sprintToggle",1);
  (**(code **)(*piVar1 + 0x20))("cl_sprintTime",1);
  (**(code **)(*piVar1 + 0x20))("cl_sprintRestingTime",1);
  (**(code **)(*piVar1 + 0x20))("i_staticfiresounds",1);
  (**(code **)(*piVar1 + 0x20))("i_soundeffects",1);
  (**(code **)(*piVar1 + 0x20))("i_lighteffects",1);
  (**(code **)(*piVar1 + 0x20))("i_particleeffects",1);
  (**(code **)(*piVar1 + 0x20))("i_offset_front",1);
  (**(code **)(*piVar1 + 0x20))("i_offset_up",1);
  (**(code **)(*piVar1 + 0x20))("i_offset_right",1);
  (**(code **)(*piVar1 + 0x20))("i_unlimitedammo",1);
  (**(code **)(*piVar1 + 0x20))("i_iceeffects",1);
  (**(code **)(*piVar1 + 0x20))("cl_strengthscale",1);
  (**(code **)(*piVar1 + 0x20))("cl_motionBlur",1);
  (**(code **)(*piVar1 + 0x20))("cl_sprintBlur",1);
  (**(code **)(*piVar1 + 0x20))("cl_hitShake",1);
  (**(code **)(*piVar1 + 0x20))("cl_hitBlur",1);
  (**(code **)(*piVar1 + 0x20))("cl_righthand",1);
  (**(code **)(*piVar1 + 0x20))("cl_screeneffects",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit_slide",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit_slidespeed",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit_offsetX",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit_offsetZ",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_orbit_distance",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_debug",1);
  (**(code **)(*piVar1 + 0x20))("pl_inputAccel",1);
  (**(code **)(*piVar1 + 0x20))("pl_disableInput",1);
  (**(code **)(*piVar1 + 0x20))("pl_disableInputLastFrame",1);
  (**(code **)(*piVar1 + 0x20))("ai_enableDirectorStats",1);
  (**(code **)(*piVar1 + 0x20))("ai_debug_movement",1);
  (**(code **)(*piVar1 + 0x20))("ai_steering_summingmethod",1);
  (**(code **)(*piVar1 + 0x20))("ai_steering_maxForce",1);
  (**(code **)(*piVar1 + 0x20))("ai_deadReckoning_smooth_enabled",1);
  (**(code **)(*piVar1 + 0x20))("ai_deadReckoning_syncAngularVelocity",1);
  (**(code **)(*piVar1 + 0x20))("ai_deadReckoning_smoothTime",1);
  (**(code **)(*piVar1 + 0x20))("ai_deadReckoning_enabled",1);
  (**(code **)(*piVar1 + 0x20))("ai_deadReckoning_method",1);
  (**(code **)(*piVar1 + 0x20))("ai_motionintegratemethod",1);
  (**(code **)(*piVar1 + 0x20))("ai_statesync_enabled",1);
  (**(code **)(*piVar1 + 0x20))("cl_actorsafemode",1);
  (**(code **)(*piVar1 + 0x20))("g_enableSpeedLean",1);
  (**(code **)(*piVar1 + 0x20))("pl_inputDelay",1);
  (**(code **)(*piVar1 + 0x20))("sy_fifo",1);
  (**(code **)(*piVar1 + 0x20))("mg_dmgCalOnSvr",1);
  (**(code **)(*piVar1 + 0x20))("int_zoomAmount",1);
  (**(code **)(*piVar1 + 0x20))("int_zoomInTime",1);
  (**(code **)(*piVar1 + 0x20))("int_moveZoomTime",1);
  (**(code **)(*piVar1 + 0x20))("int_zoomOutTime",1);
  (**(code **)(*piVar1 + 0x20))("aa_maxDist",1);
  (**(code **)(*piVar1 + 0x20))("hr_rotateFactor",1);
  (**(code **)(*piVar1 + 0x20))("hr_rotateTime",1);
  (**(code **)(*piVar1 + 0x20))("hr_dotAngle",1);
  (**(code **)(*piVar1 + 0x20))("hr_fovAmt",1);
  (**(code **)(*piVar1 + 0x20))("hr_fovTime",1);
  (**(code **)(*piVar1 + 0x20))("cl_debugFreezeShake",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenSteps",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenSensMin",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenSensMax",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenAngleMin",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenAngleMax",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenMouseMult",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenKeyMult",1);
  (**(code **)(*piVar1 + 0x20))("cl_frozenSoundDelta",1);
  (**(code **)(*piVar1 + 0x20))("g_frostDecay",1);
  (**(code **)(*piVar1 + 0x20))("g_stanceTransitionSpeed",1);
  (**(code **)(*piVar1 + 0x20))("g_playerHealthValue",1);
  (**(code **)(*piVar1 + 0x20))("g_pp_scale_income",1);
  (**(code **)(*piVar1 + 0x20))("g_pp_scale_price",1);
  (**(code **)(*piVar1 + 0x20))("g_radialBlur",1);
  (**(code **)(*piVar1 + 0x20))("g_PlayerFallAndPlay",1);
  (**(code **)(*piVar1 + 0x20))("g_fallAndPlayThreshold",1);
  (**(code **)(*piVar1 + 0x20))("g_inventoryNoLimits",1);
  (**(code **)(*piVar1 + 0x20))("g_enableAlternateIronSight",1);
  (**(code **)(*piVar1 + 0x20))("g_enableTracers",1);
  (**(code **)(*piVar1 + 0x20))("g_meleeWhileSprinting",1);
  (**(code **)(*piVar1 + 0x20))("g_timelimit",1);
  (**(code **)(*piVar1 + 0x20))("g_teamlock",1);
  (**(code **)(*piVar1 + 0x20))("g_roundlimit",1);
  (**(code **)(*piVar1 + 0x20))("g_preroundtime",1);
  (**(code **)(*piVar1 + 0x20))("g_suddendeathtime",1);
  (**(code **)(*piVar1 + 0x20))("g_roundtime",1);
  (**(code **)(*piVar1 + 0x20))("g_fraglimit",1);
  (**(code **)(*piVar1 + 0x20))("g_fraglead",1);
  (**(code **)(*piVar1 + 0x20))("g_debugNetPlayerInput",1);
  (**(code **)(*piVar1 + 0x20))("g_debug_fscommand",1);
  (**(code **)(*piVar1 + 0x20))("g_debugDirectMPMenu",1);
  (**(code **)(*piVar1 + 0x20))("g_skipIntro",1);
  (**(code **)(*piVar1 + 0x20))("g_resetActionmapOnStart",1);
  (**(code **)(*piVar1 + 0x20))("g_useProfile",1);
  (**(code **)(*piVar1 + 0x20))("g_startFirstTime",1);
  (**(code **)(*piVar1 + 0x20))("g_tk_punish",1);
  (**(code **)(*piVar1 + 0x20))("g_tk_punish_limit",1);
  (**(code **)(*piVar1 + 0x20))("g_detachCamera",1);
  (**(code **)(*piVar1 + 0x20))("g_debugCollisionDamage",1);
  (**(code **)(*piVar1 + 0x20))("g_debugHits",1);
  (**(code **)(*piVar1 + 0x20))("v_profileMovement",1);
  (**(code **)(*piVar1 + 0x20))("v_pa_surface",1);
  (**(code **)(*piVar1 + 0x20))("v_wind_minspeed",1);
  (**(code **)(*piVar1 + 0x20))("v_draw_suspension",1);
  (**(code **)(*piVar1 + 0x20))("v_draw_slip",1);
  (**(code **)(*piVar1 + 0x20))("v_invertPitchControl",1);
  (**(code **)(*piVar1 + 0x20))("v_sprintSpeed",1);
  (**(code **)(*piVar1 + 0x20))("v_rockBoats",1);
  (**(code **)(*piVar1 + 0x20))("v_debugMountedWeapon",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedMultSpeed",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedMultSpeedSprint",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedMultNormal",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedMultNormalSprint",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGUpDown",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGMaxSpeed",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedMaxSpeed",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSpeedModeEnergyConsumption",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGSwitchableGyro",1);
  (**(code **)(*piVar1 + 0x20))("v_zeroGEnableGBoots",1);
  (**(code **)(*piVar1 + 0x20))("v_dumpFriction",1);
  (**(code **)(*piVar1 + 0x20))("v_debugSounds",1);
  (**(code **)(*piVar1 + 0x20))("v_altitudeLimit",1);
  (**(code **)(*piVar1 + 0x20))("v_altitudeLimitLowerOffset",1);
  (**(code **)(*piVar1 + 0x20))("v_airControlSensivity",1);
  (**(code **)(*piVar1 + 0x20))("player_DrawIK",1);
  (**(code **)(*piVar1 + 0x20))("player_NoIK",1);
  (**(code **)(*piVar1 + 0x20))("g_enableIdleCheck",1);
  (**(code **)(*piVar1 + 0x20))("pl_debug_ladders",1);
  (**(code **)(*piVar1 + 0x20))("pl_debug_movement",1);
  (**(code **)(*piVar1 + 0x20))("pl_debug_filter",1);
  (**(code **)(*piVar1 + 0x20))("aln_debug_movement",1);
  (**(code **)(*piVar1 + 0x20))("aln_debug_filter",1);
  (**(code **)(*piVar1 + 0x20))("pl_AnimationTriggeredFootstepSounds",1);
  (**(code **)(*piVar1 + 0x20))("g_footstepSoundsFollowEntity",1);
  (**(code **)(*piVar1 + 0x20))("g_footstepSoundsDebug",1);
  (**(code **)(*piVar1 + 0x20))("g_footstepSoundMaxDistanceSq",1);
  (**(code **)(*piVar1 + 0x20))("g_showIdleStats",1);
  (**(code **)(*piVar1 + 0x20))("g_debugaimlook",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistSearchBox",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistMaxDistance",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistSnapDistance",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistVerticalScale",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistSingleCoeff",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistAutoCoeff",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistRestrictionTimeout",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_aspectCorrection",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_Curve_X",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_Curve_Z",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_Coeff_X",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_Coeff_Z",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_ZoomMode",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistAimEnabled",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistTriggerEnabled",1);
  (**(code **)(*piVar1 + 0x20))("hit_assistSingleplayerEnabled",1);
  (**(code **)(*piVar1 + 0x20))("hit_assistMultiplayerEnabled",1);
  (**(code **)(*piVar1 + 0x20))("i_debuggun_1",1);
  (**(code **)(*piVar1 + 0x20))("i_debuggun_2",1);
  (**(code **)(*piVar1 + 0x20))("tracer_min_distance",1);
  (**(code **)(*piVar1 + 0x20))("tracer_max_distance",1);
  (**(code **)(*piVar1 + 0x20))("tracer_min_scale",1);
  (**(code **)(*piVar1 + 0x20))("tracer_max_scale",1);
  (**(code **)(*piVar1 + 0x20))("tracer_max_count",1);
  (**(code **)(*piVar1 + 0x20))("tracer_player_radiusSqr",1);
  (**(code **)(*piVar1 + 0x20))("i_debug_projectiles",1);
  (**(code **)(*piVar1 + 0x20))("i_auto_turret_target",1);
  (**(code **)(*piVar1 + 0x20))("i_auto_turret_target_tacshells",1);
  (**(code **)(*piVar1 + 0x20))("i_debug_zoom_mods",1);
  (**(code **)(*piVar1 + 0x20))("i_debug_mp_flowgraph",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_map",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_mode",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_min_players",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_prefer_lan",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_prefer_favorites",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_prefer_mycountry",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_ping1_level",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_ping2_level",1);
  (**(code **)(*piVar1 + 0x20))("g_quickGame_debug",1);
  (**(code **)(*piVar1 + 0x20))("g_skip_tutorial",1);
  (**(code **)(*piVar1 + 0x20))("g_displayIgnoreList",1);
  (**(code **)(*piVar1 + 0x20))("g_buddyMessagesIngame",1);
  (**(code **)(*piVar1 + 0x20))("g_showPlayerState",1);
  (**(code **)(*piVar1 + 0x20))("g_battleDust_enable",1);
  (**(code **)(*piVar1 + 0x20))("g_battleDust_debug",1);
  (**(code **)(*piVar1 + 0x20))("g_battleDust_effect",1);
  (**(code **)(*piVar1 + 0x20))("g_iRegionJumpFadeTime",1);
  (**(code **)(*piVar1 + 0x20))("use_fifo",1);
  (**(code **)(*piVar1 + 0x20))("g_message_log",1);
  (**(code **)(*piVar1 + 0x20))("g_MHFC_DamageMode",1);
  (**(code **)(*piVar1 + 0x20))("g_PrintDamageLog",1);
  (**(code **)(*piVar1 + 0x20))("g_CELog_enable",1);
  (**(code **)(*piVar1 + 0x20))("g_NetLog_enable",1);
  (**(code **)(*piVar1 + 0x20))("g_monsterid_physpart",1);
  (**(code **)(*piVar1 + 0x20))("g_monsterid_skelpose",1);
  (**(code **)(*piVar1 + 0x20))("g_moveavatar_mode",1);
  (**(code **)(*piVar1 + 0x20))("g_playermove_log",1);
  (**(code **)(*piVar1 + 0x20))("g_npcmove_log",1);
  (**(code **)(*piVar1 + 0x20))("g_bUsePadInput",1);
  (**(code **)(*piVar1 + 0x20))("g_firstAtkRotEnable",1);
  (**(code **)(*piVar1 + 0x20))("g_otherAtkRotEnable",1);
  (**(code **)(*piVar1 + 0x20))("pl_autoHolster",1);
  (**(code **)(*piVar1 + 0x20))("pl_playerCanFly",1);
  (**(code **)(*piVar1 + 0x20))("pl_FlyMode",1);
  (**(code **)(*piVar1 + 0x20))("pl_Fly_Sync_Interval",1);
  (**(code **)(*piVar1 + 0x20))("g_proneNotUsableWeapon_FixType",1);
  (**(code **)(*piVar1 + 0x20))("g_proneAimAngleRestrict_Enable",1);
  (**(code **)(*piVar1 + 0x20))("sv_voting_timeout",1);
  (**(code **)(*piVar1 + 0x20))("sv_voting_cooldown",1);
  (**(code **)(*piVar1 + 0x20))("sv_voting_ratio",1);
  (**(code **)(*piVar1 + 0x20))("sv_voting_team_ratio",1);
  (**(code **)(*piVar1 + 0x20))("g_spectate_TeamOnly",1);
  (**(code **)(*piVar1 + 0x20))("g_claymore_limit",1);
  (**(code **)(*piVar1 + 0x20))("g_avmine_limit",1);
  (**(code **)(*piVar1 + 0x20))("g_debugMines",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistCrosshairSize",1);
  (**(code **)(*piVar1 + 0x20))("aim_assistCrosshairDebug",1);
  (**(code **)(*piVar1 + 0x20))("g_ColorGradingBlendTime",1);
  (**(code **)(*piVar1 + 0x20))("ctrl_input_smoothing",1);
  (**(code **)(*piVar1 + 0x20))("g_disable_throw",1);
  (**(code **)(*piVar1 + 0x20))("g_disable_pickup",1);
  (**(code **)(*piVar1 + 0x20))("g_disable_grab",1);
  (**(code **)(*piVar1 + 0x20))("g_tpview_enable",1);
  (**(code **)(*piVar1 + 0x20))("g_tpview_control",1);
  (**(code **)(*piVar1 + 0x20))("g_tpview_force_goc",1);
  (**(code **)(*piVar1 + 0x20))("autotest_enabled",0);
  (**(code **)(*piVar1 + 0x20))("autotest_state_setup",0);
  (**(code **)(*piVar1 + 0x20))("autotest_quit_when_done",0);
  (**(code **)(*piVar1 + 0x20))("designer_warning_enabled",0);
  (**(code **)(*piVar1 + 0x20))("g_show_fullscreen_info",1);
  (**(code **)(*piVar1 + 0x20))("g_show_crosshair",1);
  (**(code **)(*piVar1 + 0x20))("g_show_crosshair_tp",1);
  (**(code **)(*piVar1 + 0x20))("goc_enable",1);
  (**(code **)(*piVar1 + 0x20))("goc_targetx",1);
  (**(code **)(*piVar1 + 0x20))("goc_targety",1);
  (**(code **)(*piVar1 + 0x20))("goc_targetz",1);
  (**(code **)(*piVar1 + 0x20))("pl_nightvisionModeBinocular",1);
  (**(code **)(*piVar1 + 0x20))("g_muzzleFlashCull",1);
  (**(code **)(*piVar1 + 0x20))("g_muzzleFlashCullDistance",1);
  (**(code **)(*piVar1 + 0x20))("g_rejectEffectVisibilityCull",1);
  (**(code **)(*piVar1 + 0x20))("g_rejectEffectCullDistance",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_enable",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_useLuaDefaultFunctions",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_disable_ai",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_debug",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_disableRagdoll",1);
  (**(code **)(*piVar1 + 0x20))("g_hitDeathReactions_disableHitAnimatedCollisions",1);
  (**(code **)(*piVar1 + 0x20))("g_animatorDebug",1);
  (**(code **)(*piVar1 + 0x20))("p_EnableHitTest",1);
  (**(code **)(*piVar1 + 0x20))("g_minBloodEffectAngle",1);
  (**(code **)(*piVar1 + 0x20))("g_MonsterInfo",0);
  (**(code **)(*piVar1 + 0x20))("g_BT_OptimizeMode",1);
  (**(code **)(*piVar1 + 0x20))("g_EnableBTDebug",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_BuffLoad",1);
  (**(code **)(*piVar1 + 0x20))("g_MVM1v11",1);
  (**(code **)(*piVar1 + 0x20))("g_MVM3v31",1);
  (**(code **)(*piVar1 + 0x20))("g_MVM3v32",1);
  (**(code **)(*piVar1 + 0x20))("g_MVM3v33",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_LoadAtStartup",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_SkipBuildSerialize",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_BinarizeCatInCity",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_ShareInProcess",1);
  (**(code **)(*piVar1 + 0x20))("g_BT_OpenRunLog",1);
  (**(code **)(*piVar1 + 0x20))("g_preLoadSequence",1);
  (**(code **)(*piVar1 + 0x20))("g_ShowFarmPet",1);
  (**(code **)(*piVar1 + 0x20))("g_RandomDmgRst",1);
  (**(code **)(*piVar1 + 0x20))("g_displayfacialrecordinfo",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraMiddle",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraTarget",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraDiffTime",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraAdsorbSpeed",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraDefaultAdsorbSpeed",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraAdsorbSpeedAcc",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraDefaultAdsorbSpeedAcc",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraMaxAdsorbSpeed",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraMinAdsorbSpeed",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraPreviousMoveDirection",1);
  (**(code **)(*piVar1 + 0x20))("g_fCreateRoleCameraPreviousMoveTime",1);
  (**(code **)(*piVar1 + 0x20))("g_SDE",1);
  (**(code **)(*piVar1 + 0x20))("g_npcCameraParam",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_circle_speed",1);
  (**(code **)(*piVar1 + 0x20))("cl_MHFCCameraFreeMoveAccelerate",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_circle_mode",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_circle_radius",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_displayinfo",1);
  (**(code **)(*piVar1 + 0x20))("cl_cam_circle_speed",1);
  FUN_10bdb500(piVar1);
  return;
}



/* ===== FUN_10be99f0 @ 10be99f0  size=3227 ===== */
// calls: CSculptureInfo::FindByLibKeyAndAppend, memset, _snprintf
// strings:
//   "RayWorldIntersection(Game)"
//   "%s_%08x"
//   "EmCommon"
//   "nMonsterDifficulty"
//   "nMonsterSizeScale"
//   "NPCSkillFile"
//   "NpcAnimationName1"
//   "NpcAnimationName2"
//   "NpcAnimationName3"
//   "NpcAnimationName4"
//   "NpcAnimationName5"
//   "NpcAnimationName6"
//   "NpcAnimationName7"
//   "NpcAnimationName8"
//   "DeadPose"
//   "CanLemon"
//   "BTCtrlObject"
//   "LastState"
//   "OnConnect"
//   "State"

/* [RE-AUTO c0]
   calls: CSculptureInfo::GetManagers_10be6ef0, memset, _snprintf
   strings:
     ""RayWorldIntersection(Game)""
     ""%s_%08x""
     ""EmCommon""
     ""nMonsterDifficulty""
     ""nMonsterSizeScale""
     ""NPCSkillFile""
     ""NpcAnimationName1""
     ""NpcAnimationName2""
     ""NpcAnimationName3""
     ""NpcAnimationName4"" */

undefined4 __thiscall FUN_10be99f0(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char local_258;
  undefined1 local_257 [295];
  float local_130;
  int local_10c;
  int local_108;
  int *local_fc;
  char *local_f0;
  uint local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  uint local_ac;
  int *local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  char *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  int *local_28;
  undefined8 local_24;
  undefined8 local_1c;
  float local_14;
  int *local_10;
  char local_a;
  char local_9;
  int *local_8;
  
  param_1[0x10] = param_2;
  local_28 = param_1;
  if ((param_2 == 0) || (*(int *)(DAT_1202e818 + 0x50) == 0)) {
LAB_10be9f97:
    FUN_10be9720();
    return 0;
  }
  piVar7 = *(int **)(DAT_1202e818 + 0x50);
  local_9 = '\0';
  local_a = '\0';
  local_10 = piVar7;
  cVar2 = (**(code **)(*param_1 + 0x15c))();
  if (cVar2 != '\0') {
    local_9 = CSculptureInfo__FindByLibKeyAndAppend();
    cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x9c))();
    if (cVar2 != '\0') {
      FUN_113a23b0();
      iVar3 = FUN_11681360();
      local_a = *(char *)(iVar3 + 0x4b);
    }
  }
  iVar3 = FUN_113a2790();
  local_30 = (ulonglong)DAT_11de9918;
  local_24 = 0;
  if (iVar3 == 0) {
    piVar7 = (int *)(**(code **)(*piVar7 + 0xfc))();
    local_8 = piVar7;
    if (piVar7 == (int *)0x0) goto LAB_10be9f97;
    iVar3 = (**(code **)(*piVar7 + 4))();
    param_1[0x11] = iVar3;
    puVar5 = (undefined4 *)FUN_11414f00();
    local_3c = *puVar5;
    local_38 = puVar5[1];
    local_34 = puVar5[2];
    (**(code **)(*piVar7 + 0x90))();
    puVar5 = (undefined4 *)FUN_11414f40();
    local_7c = *puVar5;
    local_78 = puVar5[1];
    local_74 = puVar5[2];
    local_70 = puVar5[3];
    (**(code **)(*piVar7 + 0xb0))();
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 3)) {
      return 0;
    }
    FUN_10a6f680();
    puVar4 = (undefined8 *)FUN_11414f00();
    local_d8 = *(float *)(puVar4 + 1);
    local_e0 = *puVar4;
    local_14 = local_d8;
    cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
    if (cVar2 != '\0') {
      local_1c = local_e0;
      local_14 = local_d8 + (float)local_30;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0xc0000000;
      iVar3 = FUN_10a798b0();
      if (iVar3 != 0) {
        local_d8 = local_130;
      }
    }
    iVar3 = FUN_113a23b0();
    if (*(int *)(iVar3 + 0x20) == 3) {
      local_ac = (uint)(local_9 == '\0');
    }
    puVar5 = (undefined4 *)FUN_11414f40();
    local_14 = 1.0;
    local_d4 = *puVar5;
    uStack_d0 = puVar5[1];
    uStack_cc = puVar5[2];
    uStack_c8 = puVar5[3];
    local_bc = 0x3f800000;
    local_c4 = CONCAT44((int)local_30,(int)local_30);
    local_258 = '\0';
    memset(local_257,0,0x103);
    FUN_113a23b0();
    _snprintf(&local_258,0x104,"%s_%08x");
    piVar8 = (int *)param_1[0x10];
    local_f0 = &local_258;
    local_10c = piVar8[0x49a];
    local_108 = piVar8[0x49b];
    if (piVar8[0x102d] != 0) {
      local_e8 = local_e8 | 4;
    }
    iVar3 = (**(code **)(*piVar8 + 0xb4))();
    if ((iVar3 == 0) ||
       (pcVar6 = (char *)(**(code **)(*(int *)param_1[0x10] + 0xb4))(), *pcVar6 == '\0')) {
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      local_fc = (int *)(**(code **)(*piVar7 + 0xc))();
    }
    else {
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      iVar3 = *piVar7;
      (**(code **)(*(int *)param_1[0x10] + 0xb4))();
      local_fc = (int *)(**(code **)(iVar3 + 0xc))();
    }
    FUN_113a23b0();
    cVar2 = FUN_116817f0();
    if (cVar2 == '\0') {
      FUN_113a23b0();
      FUN_1083ac30();
    }
    piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x30))();
    (**(code **)(*piVar8 + 8))();
    iVar3 = (**(code **)(*local_fc + 0x1c))();
    if (iVar3 != 0) {
      local_8 = (int *)0x0;
      FUN_10a68ce0();
      piVar7 = local_8;
      (**(code **)(*piVar8 + 0x5c))();
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
    }
    local_8 = (int *)FUN_1025b060();
    FUN_10ab3590();
    iVar3 = FUN_10bec810();
    local_8 = (int *)((float)iVar3 / DAT_11de9a30);
    FUN_10bcceb0();
    iVar3 = FUN_113a23b0();
    if (*(int *)(iVar3 + 0x20) == 3) {
      iVar3 = FUN_11681360();
      if (*(int *)(iVar3 + 0xb0) != *(int *)(iVar3 + 0xac)) {
        iVar3 = FUN_11681360();
        local_8 = *(int **)(iVar3 + 0xb0);
        FUN_10ab3600();
      }
      iVar9 = FUN_11681360();
      iVar13 = *(int *)(iVar9 + 0xb8) - *(int *)(iVar9 + 0xb4);
      piVar7 = (int *)(iVar9 + 0xb4);
      iVar3 = iVar13 >> 0x1f;
      if (iVar13 / 0x18 + iVar3 != iVar3) {
        local_8 = *(int **)(*piVar7 + 0x14);
        FUN_10ab3600();
      }
      if (1 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x2c);
        FUN_10ab3600();
      }
      if (2 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x44);
        FUN_10ab3600();
      }
      if (3 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x5c);
        FUN_10ab3600();
      }
      if (4 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x74);
        FUN_10ab3600();
      }
      if (5 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x8c);
        FUN_10ab3600();
      }
      if (6 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0xa4);
        FUN_10ab3600();
      }
      if (7 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0xbc);
        FUN_10ab3600();
      }
    }
    local_8c = piVar8;
    if ((local_fc == (int *)0x0) ||
       (piVar7 = (int *)(**(code **)(*local_10 + 0x24))(), local_8 = piVar7, piVar7 == (int *)0x0))
    {
      (**(code **)(*piVar8 + 0xc))();
      FUN_10a72180();
      goto LAB_10be9f97;
    }
    iVar3 = (**(code **)(*piVar7 + 4))();
    param_1[0x11] = iVar3;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    (**(code **)(*piVar8 + 0xc))();
    FUN_10a72180();
  }
  local_44 = (**(code **)(*(int *)param_1[0x10] + 0xd0))();
  iVar3 = *param_1;
  FUN_11414f40();
  FUN_11414f00();
  (**(code **)(iVar3 + 0x154))();
  (**(code **)(*piVar7 + 0x280))();
  if (local_9 != '\0') goto LAB_10bea235;
  piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar8 = (int *)(**(code **)(*piVar8 + 0x68))();
  piVar8 = (int *)(**(code **)(*piVar8 + 0xc))();
  if (piVar8 == (int *)0x0) goto LAB_10bea235;
  cVar2 = (**(code **)(*piVar8 + 0x1d4))();
  if (cVar2 != '\0') {
    param_1[0x12] = (int)piVar8;
    piVar8[0x72c] = (int)param_1;
  }
  local_14 = 0.0;
  (**(code **)(*piVar8 + 0x88))(&DAT_11dd2990,0x3f800000);
  (**(code **)(*piVar8 + 0x308))(param_2);
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))();
    if (cVar2 != '\0') goto LAB_10bea197;
  }
  else {
LAB_10bea197:
    piVar10 = (int *)(**(code **)(*piVar8 + 0x68))();
    (**(code **)(*piVar10 + 4))();
  }
  iVar3 = (**(code **)(*param_1 + 0xc4))();
  if (*(int *)(iVar3 + 0x20) == 3) {
    FUN_10a5cbc0();
  }
  cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x180))();
  if (cVar2 != '\0') {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))();
    if (piVar7 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar7 + 0x4c))();
      if (iVar3 != 0) {
        piVar7 = (int *)(**(code **)(*piVar7 + 0x4c))();
        (**(code **)(*piVar7 + 0x38))();
        local_14 = 0.0;
        (**(code **)(*piVar8 + 0x88))("DeadPose",0x3f800000);
      }
    }
  }
LAB_10bea235:
  if (*(int *)(param_1[0x10] + 0x40b4) != 0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))();
    iVar3 = FUN_104753a0();
    if (iVar3 != 0) {
      param_2 = -1;
      FUN_113168d0();
      cVar2 = FUN_1046dc90();
      if (cVar2 != '\0') {
        FUN_1025bc30();
      }
    }
  }
  iVar3 = **(int **)m_pThis_exref;
  (**(code **)(*local_8 + 4))();
  piVar7 = (int *)(**(code **)(iVar3 + 0x144))();
  if (piVar7 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x18))();
    if (piVar7 != (int *)0x0) {
      iVar3 = FUN_113a23b0();
      if (*(int **)(iVar3 + 0x184) != (int *)(iVar3 + 0x184)) {
        local_10 = (int *)(**(code **)(*piVar7 + 0x98))();
        if (local_10 != (int *)0x0) {
          FUN_113a23b0();
          FUN_1046e370();
        }
      }
      FUN_113a2090();
      FUN_113168d0();
      (**(code **)(*piVar7 + 0x78))();
      piVar8 = (int *)FUN_113168d0(&DAT_11d9d32b);
      if (param_2 != *piVar8) {
        (**(code **)(*piVar7 + 0x78))("LastState",param_2);
      }
      FUN_113168d0("OnConnect");
      (**(code **)(*piVar7 + 0x78))("State",local_30._4_4_);
    }
  }
  piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar7 = local_8;
  (**(code **)(*piVar8 + 0x22c))();
  FUN_113a23b0();
  (**(code **)(*piVar7 + 0x2cc))();
  if (local_9 == '\0') {
    (**(code **)(*param_1 + 0x134))();
    if (*(int **)(param_1[0x10] + 0x125c) != (int *)0x0) {
      local_24 = (**(code **)(**(int **)(param_1[0x10] + 0x125c) + 8))();
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x8c))();
      if (iVar3 != -1) {
        piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))();
        if (piVar8 != (int *)0x0) {
          FUN_10b8ade0();
          local_5c = "Spawned";
          local_58 = 0;
          param_2 = *(int *)(param_1[0x10] + 4);
          local_54 = &param_2;
          (**(code **)(*piVar8 + 0x110))(local_60);
        }
      }
    }
    if (*(int **)(param_1[0x10] + 0x1260) != (int *)0x0) {
      local_24 = (**(code **)(**(int **)(param_1[0x10] + 0x1260) + 8))();
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x8c))();
      if (iVar3 != -1) {
        piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))();
        if (piVar8 != (int *)0x0) {
          FUN_10b8ade0();
          local_5c = "Spawned";
          local_58 = 0;
          param_2 = *(int *)(param_1[0x10] + 4);
          local_54 = &param_2;
          (**(code **)(*piVar8 + 0x110))(local_60);
        }
      }
    }
  }
  if (local_a != '\0') {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))();
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x1bc))();
    }
  }
  piVar7 = param_1 + 0x18;
  iVar3 = 0;
  if ((*(uint *)(param_1[0x18] + -4) & 0x7fffffff) != 0) {
    do {
      FUN_10be1ff0(*(undefined4 *)(*piVar7 + iVar3 * 8));
      iVar3 = iVar3 + 1;
      param_1 = local_28;
    } while (iVar3 < (int)(*(uint *)(*piVar7 + -4) & 0x7fffffff));
  }
  puVar11 = (uint *)(*piVar7 + -4);
  uVar14 = *puVar11;
  if ((int)uVar14 < 0) {
    bVar1 = *(byte *)(*piVar7 + uVar14 * 8);
    if (bVar1 == 0) {
      uVar12 = *(uint *)((uint)(puVar11 + uVar14 * 2 + 2) & 0xfffffffc);
    }
    else {
      uVar12 = (uint)bVar1;
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar12;
  }
  if (uVar14 != 0) {
    FUN_10bee7c0(0,0);
  }
  local_8 = param_1 + 0x19;
  param_2 = 0;
  if ((*(uint *)(param_1[0x19] + -4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      iVar9 = *local_8;
      local_10 = *(int **)(iVar3 + iVar9);
      local_28 = *(int **)(iVar3 + 0x20 + iVar9);
      local_30 = CONCAT44(*(undefined4 *)(iVar3 + 4 + iVar9),(float)local_30);
      iVar13 = (**(code **)(param_1[1] + 4))();
      if (iVar13 != 0) {
        local_3c = *(undefined4 *)(iVar3 + 0x14 + iVar9);
        local_38 = *(undefined4 *)(iVar3 + 0x18 + iVar9);
        local_34 = *(undefined4 *)(iVar3 + 0x1c + iVar9);
        local_1c = CONCAT44(*(undefined4 *)(iVar3 + 0xc + iVar9),*(undefined4 *)(iVar3 + 8 + iVar9))
        ;
        local_14 = *(float *)(iVar3 + 0x10 + iVar9);
        piVar7 = (int *)(**(code **)(param_1[1] + 4))();
        (**(code **)(*piVar7 + 0x1ec))(local_10,local_30._4_4_,&local_1c,&local_3c,local_28,1);
      }
      iVar3 = iVar3 + 0x24;
      param_2 = param_2 + 1;
    } while (param_2 < (int)(*(uint *)(*local_8 + -4) & 0x7fffffff));
  }
  iVar3 = *local_8;
  uVar14 = *(uint *)(iVar3 + -4);
  if ((int)uVar14 < 0) {
    iVar9 = (uVar14 & 0x7fffffff) + uVar14 * 8;
    bVar1 = *(byte *)(iVar3 + iVar9 * 4);
    if (bVar1 == 0) {
      uVar12 = *(uint *)(iVar3 + (iVar9 + 1) * 4 & 0xfffffffc);
    }
    else {
      uVar12 = (uint)bVar1;
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar12;
  }
  if (uVar14 != 0) {
    FUN_10beda70(iVar3);
    FUN_10bee900(0,0);
  }
  return 1;
}



/* ===== FUN_10beff70 @ 10beff70  size=1008 ===== */
// strings:
//   "PetActiveSkillID"
//   "NeedSummonAnim"
//   "SkillEntryAnim"
//   "SkillCastStartAnim"
//   "SkillCastLoopAnim"
//   "SkillAnim"
//   "SkillLeaveAnim"
//   "SkillCastTime"

/* [RE-AUTO c0]
   strings:
     ""PetActiveSkillID""
     ""NeedSummonAnim""
     ""SkillEntryAnim""
     ""SkillCastStartAnim""
     ""SkillCastLoopAnim""
     ""SkillAnim""
     ""SkillLeaveAnim""
     ""SkillCastTime"" */

undefined4 FUN_10beff70(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_50;
  undefined1 local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))(*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_104753a0();
  if (iVar3 != 0) {
    local_8 = 0xffffffff;
    uVar4 = FUN_113168d0("PetActiveSkillID",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bd00(local_8,iVar1 + 0xc);
    }
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    param_1 = CONCAT13(1,(undefined3)param_1);
    local_20 = 0;
    iVar3 = FUN_10bf1a20(*(undefined4 *)(iVar1 + 0xc));
    if (iVar3 != 0) {
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x24));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x88),*(undefined4 *)(iVar3 + 0x84));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x3c));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x58),*(undefined4 *)(iVar3 + 0x54));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x6c));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_20 = *(undefined4 *)(iVar3 + 0x8c);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      param_1 = param_1 & 0xffffff;
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    uVar4 = FUN_113168d0("NeedSummonAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025be30(local_8,(int)&param_1 + 3);
    }
    uVar4 = FUN_113168d0("SkillEntryAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_c);
    }
    uVar4 = FUN_113168d0("SkillCastStartAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_10);
    }
    uVar4 = FUN_113168d0("SkillCastLoopAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_14);
    }
    uVar4 = FUN_113168d0("SkillAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_18);
    }
    uVar4 = FUN_113168d0("SkillLeaveAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_1c);
    }
    uVar4 = FUN_113168d0("SkillCastTime",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bd00(local_8,&local_20);
    }
    local_50 = *(undefined4 *)(iVar1 + 0x10);
    local_84 = 0x938;
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_40 = 0;
    (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_84);
  }
  return 0;
}



/* ===== FUN_10bf1a20 @ 10bf1a20  size=78 ===== */
// calls: CPetSupportCatSkillInfo::FindInfoByKey
// strings:
//   "CPetSupportCatSkillInfo"

/* [RE-AUTO c0]
   calls: CPetSupportCatSkillInfo::GetManagers
   strings:
     ""CPetSupportCatSkillInfo"" */

undefined4 FUN_10bf1a20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSupportCatSkillInfo__FindInfoByKey(0,"CPetSupportCatSkillInfo",0);
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



/* ===== FUN_10bf31b0 @ 10bf31b0  size=478 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "/Libs/MHUI/XML/editorRageData.xml"
//   "skillid"

/* [RE-AUTO c0]
   strings:
     ""/Libs/MHUI/XML/editorRageData.xml""
     ""skillid"" */

void __thiscall FUN_10bf31b0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 local_50 [20];
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (local_20 = FUN_10f19240(), local_20 != 0)) {
    uVar3 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
    CInfoRecord__GetModelString(uVar3);
    pcVar1 = local_18;
    local_28 = local_38;
    pcVar2 = local_18;
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    local_24 = local_28;
    FUN_100b62c0(local_18,pcVar6);
    piVar7 = (int *)(pcVar1 + -0xc);
    if ((-1 < *piVar7) && (iVar4 = FUN_10c3dad0(piVar7), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar1 + -4));
      FUN_10c3d900(piVar7);
    }
    FUN_100f2140(local_50,local_38,"/Libs/MHUI/XML/editorRageData.xml");
    (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_c,local_3c,0,1,0);
    if (local_c != (int *)0x0) {
      local_18 = (char *)(**(code **)(*local_c + 0xa0))();
      piVar7 = (int *)0x0;
      iVar4 = 0;
      if (0 < (int)local_18) {
        do {
          local_8 = 0;
          local_14 = 0;
          local_10 = 0;
          piVar5 = (int *)(**(code **)(*local_c + 0xa8))(&local_1c,iVar4);
          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar5)();
          }
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 4))();
          }
          piVar7 = (int *)*piVar5;
          if (local_1c != (int *)0x0) {
            (**(code **)(*local_1c + 4))();
          }
          (**(code **)(*piVar7 + 0x74))(&DAT_11dca14c,&local_8);
          if (local_8 == param_2) {
            (**(code **)(*piVar7 + 0x74))(&DAT_11cd68d8,&local_14);
            (**(code **)(*piVar7 + 0x74))("skillid",&local_10);
            (**(code **)(**(int **)(local_20 + 0x14) + 8))(local_8,local_14,local_10);
            FUN_1141c890();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_18);
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))();
        }
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 4))();
      }
    }
    if ((local_3c != local_50) && (local_3c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_3c);
    }
    if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_24);
    }
  }
  return;
}



/* ===== FUN_10c30c30 @ 10c30c30  size=545 ===== */
// strings:
//   "shooterId"
//   "targetId"
//   "weaponId"
//   "projectileId"
//   "normal"
//   "aimed"
//   "armorHeating"
//   "weaponClass"
//   "penetrationCount"
//   "impulseScale"
//   "attackType"
//   "defenseResult"
//   "HitIndex"
//   "shooterSrvId"
//   "targetSrvId"
//   "weaponSrvId"
//   "projectileSrvId"
//   "skillID"
//   "skillSeq"

/* [RE-AUTO c0]
   strings:
     ""shooterId""
     ""targetId""
     ""weaponId""
     ""projectileId""
     ""normal""
     ""aimed""
     ""armorHeating""
     ""weaponClass""
     ""penetrationCount""
     ""impulseScale"" */

void __thiscall FUN_10c30c30(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))("shooterId",param_1,0x656964);
  (**(code **)(*param_2 + 0x44))("targetId",param_1 + 4,0x656964);
  (**(code **)(*param_2 + 0x44))("weaponId",param_1 + 8,0x656964);
  (**(code **)(*param_2 + 0x44))("projectileId",param_1 + 0xc,0x75693332);
  (**(code **)(*param_2 + 0x54))("partId",param_1 + 0x48,0x70617274);
  (**(code **)(*param_2 + 0x68))(&DAT_11ddf6e4,param_1 + 0x50,0x77726c64);
  (**(code **)(*param_2 + 0x68))(&DAT_11cbc860,param_1 + 0x68,0x64697231);
  (**(code **)(*param_2 + 0x68))("normal",param_1 + 0x74,0x64697231);
  (**(code **)(*param_2 + 0x54))("aimed",param_1 + 0xe8,0);
  (**(code **)(*param_2 + 0x70))("armorHeating",param_1 + 0xfc,0);
  (**(code **)(*param_2 + 0x48))("projectileClass",param_1 + 0xe0,0x75693136);
  (**(code **)(*param_2 + 0x48))("weaponClass",param_1 + 0xe2,0x75693136);
  (**(code **)(*param_2 + 0x54))("penetrationCount",param_1 + 0x100,0x756938);
  (**(code **)(*param_2 + 0x70))("impulseScale",param_1 + 0x108,0x696969);
  (**(code **)(*param_2 + 0x44))("attackType",param_1 + 0x4c,0);
  (**(code **)(*param_2 + 0x44))("hitType",param_1 + 0x118,0);
  (**(code **)(*param_2 + 0x54))("defenseResult",param_1 + 0x11c,0);
  (**(code **)(*param_2 + 0x54))("HitIndex",param_1 + 0x120,0);
  (**(code **)(*param_2 + 0x54))("shooterSrvId",param_1 + 0x124,0);
  (**(code **)(*param_2 + 0x54))("targetSrvId",param_1 + 0x128,0);
  (**(code **)(*param_2 + 0x54))("weaponSrvId",param_1 + 300,0);
  (**(code **)(*param_2 + 0x54))("projectileSrvId",param_1 + 0x130,0);
  (**(code **)(*param_2 + 0x54))("skillID",param_1 + 0x15c,0);
  (**(code **)(*param_2 + 0x50))("skillSeq",param_1 + 0x160,0);
  return;
}



/* ===== FUN_10c33050 @ 10c33050  size=96 ===== */
// strings:
//   "setfaction"
//   "ChangeMonster"
//   "g_playmonsterskill"

/* [RE-AUTO c0]
   strings:
     ""setfaction""
     ""ChangeMonster""
     ""g_playmonsterskill"" */

void FUN_10c33050(void)

{
  if (*(int **)(DAT_1202e818 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x7c))("setfaction",FUN_10c33970,0,0);
  }
  if (*(int **)(DAT_1202e818 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x7c))("ChangeMonster",FUN_10c362a0,0,0);
  }
  if (*(int **)(DAT_1202e818 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x7c))("g_playmonsterskill",FUN_10c36430,0,0);
  }
  return;
}



/* ===== FUN_10c330b0 @ 10c330b0  size=777 ===== */
// strings:
//   "notice"
//   "buyammo"
//   "g_debug_minimap"
//   "g_debug_teams"
//   "g_debug_objectives"
//   "debugmonsterskel"
//   "debugenablesvranimopt"
//   "debugmonsterphyspart"
//   "syscmd"
//   "setdmglog"
//   "GetMonstersAround"
//   "GetPlayersAround"
//   "farmpet"
//   "PetEquipChg"
//   "PetTalk"
//   "TestFirework"
//   "IterateNextFace"
//   "IteratePrevFace"
//   "IterateNextHair"
//   "IteratePrevHair"

/* [RE-AUTO c0]
   strings:
     ""notice""
     ""buyammo""
     ""g_debug_minimap""
     ""g_debug_teams""
     ""g_debug_objectives""
     ""debugmonsterskel""
     ""debugenablesvranimopt""
     ""debugmonsterphyspart""
     ""syscmd""
     ""setdmglog"" */

void FUN_10c330b0(int *param_1)

{
  (**(code **)(*param_1 + 0x80))("notice");
  (**(code **)(*param_1 + 0x80))(&DAT_11cd8b78);
  (**(code **)(*param_1 + 0x80))("buyammo");
  (**(code **)(*param_1 + 0x80))("g_debug_spawns");
  (**(code **)(*param_1 + 0x80))("g_debug_minimap");
  (**(code **)(*param_1 + 0x80))("g_debug_teams");
  (**(code **)(*param_1 + 0x80))("g_debug_objectives");
  (**(code **)(*param_1 + 0x80))("debugmonsterskel");
  (**(code **)(*param_1 + 0x80))("debugenablesvranimopt");
  (**(code **)(*param_1 + 0x80))("debugmonsterphyspart");
  (**(code **)(*param_1 + 0x80))("syscmd");
  (**(code **)(*param_1 + 0x80))(&DAT_11cd89ac);
  (**(code **)(*param_1 + 0x80))("setdmglog");
  (**(code **)(*param_1 + 0x80))("GetMonstersAround");
  (**(code **)(*param_1 + 0x80))("GetPlayersAround");
  (**(code **)(*param_1 + 0x80))("farmpet");
  (**(code **)(*param_1 + 0x80))("PetEquipChg");
  (**(code **)(*param_1 + 0x80))("PetTalk");
  (**(code **)(*param_1 + 0x80))("TestFirework");
  (**(code **)(*param_1 + 0x80))("IterateNextFace");
  (**(code **)(*param_1 + 0x80))("IteratePrevFace");
  (**(code **)(*param_1 + 0x80))("IterateNextHair");
  (**(code **)(*param_1 + 0x80))("IteratePrevHair");
  (**(code **)(*param_1 + 0x80))("ChangeMonster");
  (**(code **)(*param_1 + 0x80))("g_playmonsterskill");
  (**(code **)(*param_1 + 0x80))("addbuffP");
  (**(code **)(*param_1 + 0x80))("delbuffP");
  (**(code **)(*param_1 + 0x80))("getbuffP");
  (**(code **)(*param_1 + 0x80))("CtrlM");
  (**(code **)(*param_1 + 0x80))("ViewTeamPlayer");
  (**(code **)(*param_1 + 0x80))("ViewTeamPet");
  (**(code **)(*param_1 + 0x80))("ChangeArea");
  (**(code **)(*param_1 + 0x80))("SpawnItem");
  (**(code **)(*param_1 + 0x80))("PlayBuffFX");
  (**(code **)(*param_1 + 0x80))("PDAnim");
  (**(code **)(*param_1 + 0x80))("unloadui");
  (**(code **)(*param_1 + 0x80))("loadui");
  (**(code **)(*param_1 + 0x80))("g_firstAtkRotEnable");
  (**(code **)(*param_1 + 0x80))("g_otherAtkRotEnable");
  (**(code **)(*param_1 + 0x80))("setfaction");
  (**(code **)(*param_1 + 0x80))("uionly");
  (**(code **)(*param_1 + 0x80))("GotoLogin");
  (**(code **)(*param_1 + 0x80))("reloadui");
  (**(code **)(*param_1 + 0x80))("ReloadData");
  (**(code **)(*param_1 + 0x80))("buynpcshopitem");
  (**(code **)(*param_1 + 0x80))("sellnpcshopitem");
  (**(code **)(*param_1 + 0x80))("manuprod");
  (**(code **)(*param_1 + 0x80))("lmanuskl");
  (**(code **)(*param_1 + 0x80))("lmanuingd");
  (**(code **)(*param_1 + 0x80))("catcs");
  (**(code **)(*param_1 + 0x80))("warninglevel");
  return;
}



/* ===== FUN_10d0a9d0 @ 10d0a9d0  size=120 ===== */
// strings:
//   "Dithered"
//   "Prioritized"
//   "WeightedAverage"

/* [RE-AUTO c0]
   strings:
     ""Dithered""
     ""Prioritized""
     ""WeightedAverage"" */

int __thiscall FUN_10d0a9d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(int *)(param_2 + 0x10) = param_2;
  *(int *)(param_2 + 0x14) = param_2;
  if (iVar1 == 0) {
    FUN_100b62c0("WeightedAverage","");
    return param_2;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
      return param_2;
    }
    FUN_100b62c0("Dithered","");
    return param_2;
  }
  FUN_100b62c0("Prioritized","");
  return param_2;
}



/* ===== FUN_10d1a840 @ 10d1a840  size=1872 ===== */
// strings:
//   "MH_LETYPE_PLAYER"
//   "MH_LETYPE_MONSTER"
//   "MH_LETYPE_PROJECTILE"
//   "MH_LETYPE_COLLECTPOINT"
//   "MH_LETYPE_BUFFAREA"
//   "MH_LETYPE_ANIMOBJECT"
//   "MH_LETYPE_BTOBJECT"
//   "MH_LETYPE_PET"
//   "MH_LETYPE_VEHILCE"
//   "ePlayerGuideState_NotDone"
//   "ePlayerGuideState_Executing"
//   "ePlayerGuideState_Done"
//   "eLootType_MonsterSpecial"
//   "__tostring"
//   "GetEntityType"
//   "GetPlayerGuideStepState"
//   "SetPlayerGuideStepState"
//   "step, state"
//   "GetPlayerAttr"
//   "SetPlayerAttr"

/* [RE-AUTO c0]
   strings:
     ""MH_LETYPE_PLAYER""
     ""MH_LETYPE_MONSTER""
     ""MH_LETYPE_PROJECTILE""
     ""MH_LETYPE_COLLECTPOINT""
     ""MH_LETYPE_BUFFAREA""
     ""MH_LETYPE_ANIMOBJECT""
     ""MH_LETYPE_BTOBJECT""
     ""MH_LETYPE_PET""
     ""MH_LETYPE_VEHILCE""
     ""ePlayerGuideState_NotDone"" */

undefined4 * __thiscall FUN_10d1a840(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  code *local_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11ce238c;
  param_1[0x14] = param_2;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x16] = param_3;
  param_1[0x15] = piVar2;
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  param_1[0x13] = 1;
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_PLAYER",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_MONSTER",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_PROJECTILE",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_COLLECTPOINT",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_BUFFAREA",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_ANIMOBJECT",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_BTOBJECT",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_PET",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41100000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("MH_LETYPE_VEHILCE",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ePlayerGuideState_NotDone",&local_14);
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
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ePlayerGuideState_Executing",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_437f0000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ePlayerGuideState_Done",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41600000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("eLootType_MonsterSpecial",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b120;
    local_34 = 0;
    local_2c = 0;
    local_40 = "__tostring";
    local_3c = "";
    local_20 = FUN_10d1caa0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b1b0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "GetEntityType";
    local_3c = "";
    local_20 = FUN_10d1caa0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b2f0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "GetPlayerGuideStepState";
    local_3c = "step";
    local_20 = FUN_10d1cac0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b4f0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "SetPlayerGuideStepState";
    local_3c = "step, state";
    local_20 = FUN_10d1cb00;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1c0d0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "GetPlayerAttr";
    local_3c = "attr";
    local_20 = FUN_10d1cb60;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1bdd0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "SetPlayerAttr";
    local_3c = "attr, value";
    local_20 = FUN_10d1cb60;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b6e0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "RegisterPlayerEvent";
    local_3c = "EventID, entity, func, params";
    local_20 = FUN_10d1caa0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1b960;
    local_34 = 0;
    local_2c = 0;
    local_40 = "RegisterMonsterEvent";
    local_3c = "EventID, entity, func, params";
    local_20 = FUN_10d1caa0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &local_c;
    local_24 = param_1[0x13];
    local_8 = FUN_10d1bbe0;
    local_34 = 0;
    local_2c = 0;
    local_40 = "DeltaCharExp";
    local_3c = "exp";
    local_20 = FUN_10d1cac0;
    local_18 = 8;
    local_38 = puVar1;
    local_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  return param_1;
}



/* ===== FUN_10d2bb80 @ 10d2bb80  size=525 ===== */
// strings:
//   "m_nWeaponType"
//   "m_nSkillID"
//   "m_nSlotIndex"

/* [RE-AUTO c0]
   strings:
     ""m_nWeaponType""
     ""m_nSkillID""
     ""m_nSlotIndex"" */

void __thiscall FUN_10d2bb80(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x774);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x77c), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nWeaponType",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[1];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nSkillID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[2];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nSlotIndex",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),0x44,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d2bd90 @ 10d2bd90  size=525 ===== */
// strings:
//   "m_nWeaponType"
//   "m_nSkillID"
//   "m_nSlotIndex"

/* [RE-AUTO c0]
   strings:
     ""m_nWeaponType""
     ""m_nSkillID""
     ""m_nSlotIndex"" */

void __thiscall FUN_10d2bd90(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x790);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x798), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nWeaponType",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[1];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nSkillID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[2];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nSlotIndex",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),0x45,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d2bfa0 @ 10d2bfa0  size=525 ===== */
// strings:
//   "m_nWeaponType"
//   "m_nSkillID"
//   "m_nCurrentLevel"

/* [RE-AUTO c0]
   strings:
     ""m_nWeaponType""
     ""m_nSkillID""
     ""m_nCurrentLevel"" */

void __thiscall FUN_10d2bfa0(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x7ac);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x7b4), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nWeaponType",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[1];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nSkillID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[2];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("m_nCurrentLevel",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),0x46,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d52a09 @ 10d52a09  size=133 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_10d52a09(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined1 in_CF;
  byte bVar6;
  byte in_AF;
  bool bVar7;
  undefined1 in_ZF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined6 uVar11;
  undefined2 uVar12;
  int local_c;
  char *local_8;
  
  local_8 = (char *)0x10d52a26;
  bVar2 = FUN_123fe8bc();
  if ((bool)in_CF || (bool)in_ZF) {
    bVar6 = 0;
    bVar10 = 0;
    bVar9 = 0;
    bVar8 = (bVar2 & 4) == 0;
    bVar2 = POPCOUNT(bVar2 & 4) == '\0';
    if ((bool)bVar8) {
      local_8 = (char *)0x123ecd03;
      (**(code **)(*(int *)*DAT_1202e818 + 0x58))();
      local_8 = (char *)((uint)(in_NT & 1) * 0x4000 | (uint)(bVar10 & 1) * 0x800 |
                         (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                         (uint)(bVar9 & 1) * 0x80 | (uint)(bVar8 & 1) * 0x40 |
                         (uint)(in_AF & 1) * 0x10 | (uint)(bVar2 & 1) * 4 | (uint)(bVar6 & 1) |
                         (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                         (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
                    /* WARNING: Call to offcut address within same function */
      local_c = 0x123ecd09;
      cVar1 = func_0x123ecd0a();
      if (extraout_ECX_00 == 1) {
        local_c = 0x123ecd17;
        uVar5 = func_0xb6cc256f();
        pcVar4 = (char *)(uVar5 & 0xffffff08);
        *pcVar4 = *pcVar4 + (char)pcVar4;
        *(char *)(unaff_EBP + -0x18) = *(char *)(unaff_EBP + -0x18) + (char)unaff_EBX + cVar1 + '$';
        local_c = CONCAT22(local_c._2_2_,in_CS);
        uVar3 = FUN_10f59ff0();
        *(undefined1 *)(unaff_EBP + -1) = uVar3;
        FUN_123eb6a8();
        return;
      }
      FUN_1240151b();
      return;
    }
    local_8 = (char *)0x10d52a36;
    pcVar4 = (char *)FUN_1142c8c5();
    if ((bool)bVar8 || bVar10 != bVar9) {
      *pcVar4 = *pcVar4 + (char)pcVar4;
      *(undefined4 *)(unaff_EBX + 0x1ed4) = *(undefined4 *)(unaff_EDI + 0xe0);
      FUN_123e84cd();
      return;
    }
  }
  else {
    bVar8 = (bVar2 | 0x24) == 0;
    local_8 = (char *)(unaff_EBP + -0x60);
    pcVar4 = (char *)0x7c61c232;
  }
  LOCK();
  UNLOCK();
  local_c = (int)local_8;
  bVar7 = (bVar8 & 1) != 0;
  uVar12 = 0x10d5;
  local_8 = pcVar4 + -0x6a85d716;
  uVar11 = FUN_123fcde2();
  if (bVar7) {
    FUN_123e794e(CONCAT22(uVar12,in_ES));
    return;
  }
  bVar2 = (byte)uVar11;
  *(char *)uVar11 = *(char *)uVar11 + bVar2;
  bVar8 = (byte)((uint)extraout_ECX >> 8);
  cVar1 = bVar2 + bVar8;
  pcVar4 = (char *)CONCAT31((int3)((uint6)uVar11 >> 8),cVar1);
  local_c = CONCAT22((short)((uint)extraout_ECX >> 0x10),
                     CONCAT11(bVar8 + *(char *)((int)unaff_ESI + unaff_EBP * 8 + 0x4c481ff) +
                              CARRY1(bVar2,bVar8),(char)extraout_ECX));
  *pcVar4 = *pcVar4 + cVar1;
  *(char *)(unaff_EBP + 0x74840fc0) = *(char *)(unaff_EBP + 0x74840fc0) + cVar1;
  out(*unaff_ESI,(short)((uint6)uVar11 >> 0x20));
  *(int *)(unaff_EDI + 0x52) = (int)unaff_ESI + *(int *)(unaff_EDI + 0x52) + 4;
  if (local_c != 0) {
                    /* WARNING: Call to offcut address within same function */
    pcVar4 = (char *)func_0x10d5299f(&local_c);
    *pcVar4 = *pcVar4 + (char)pcVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10fd1df0();
}



/* ===== FUN_10d5d700 @ 10d5d700  size=579 ===== */
// calls: _stricmp, sprintf_s
// strings:
//   "condition_flag"
//   "max_entity_hit"
//   "max_part_hit"
//   "min_time_interval"
//   "ignore_skill"
//   "partbase_attack"
//   "attacker"
//   "[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."

/* [RE-AUTO c0]
   calls: _stricmp, sprintf_s
   strings:
     ""condition_flag""
     ""max_entity_hit""
     ""max_part_hit""
     ""min_time_interval""
     ""ignore_skill""
     ""partbase_attack""
     ""attacker""
     ""[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to
   avoid redundant hash code."" */

void __thiscall FUN_10d5d700(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  char *_Str2;
  char local_1e4 [48];
  uint local_1b4 [52];
  byte *local_e4 [51];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int *local_8;
  
  (**(code **)(*(int *)*param_2 + 0x74))("condition_flag",param_1);
  (**(code **)(*(int *)*param_2 + 0x74))("max_entity_hit",param_1 + 4);
  (**(code **)(*(int *)*param_2 + 0x74))("max_part_hit",param_1 + 8);
  (**(code **)(*(int *)*param_2 + 100))("min_time_interval",param_1 + 0xc);
  (**(code **)(*(int *)*param_2 + 0x74))("ignore_skill",param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)*param_2 + 0x50))("partbase_attack",(undefined1 *)(param_1 + 0x14));
  iVar1 = param_1 + 0x18;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10d5e600(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x24) = iVar1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((int *)*param_2 != (int *)0x0) {
    local_10 = (**(code **)(*(int *)*param_2 + 0xa0))();
    local_c = 0;
    if (0 < local_10) {
      do {
        (**(code **)(*(int *)*param_2 + 0xa8))(&local_8,local_c);
        if (local_8 != (int *)0x0) {
          _Str2 = "attacker";
          _Str1 = (char *)(**(code **)(*local_8 + 0x20))();
          iVar3 = _stricmp(_Str1,_Str2);
          if (iVar3 == 0) {
            FUN_10d56350();
            FUN_10d5dc70(&local_8);
            uVar8 = 0x4e67c6a7;
            bVar2 = *local_e4[0];
            pbVar5 = local_e4[0];
            while (bVar2 != 0) {
              pbVar5 = pbVar5 + 1;
              uVar8 = uVar8 ^ uVar8 * 0x20 + (uVar8 >> 2) + (int)(char)bVar2;
              bVar2 = *pbVar5;
            }
            iVar3 = *(int *)(param_1 + 0x1c);
            iVar6 = iVar1;
            if (iVar3 == 0) {
LAB_10d5d86d:
              if (iVar6 == iVar1) goto LAB_10d5d8cd;
              pbVar5 = local_e4[0];
              pbVar7 = *(byte **)(iVar6 + 0x14);
              do {
                bVar2 = *pbVar5;
                bVar9 = bVar2 < *pbVar7;
                if (bVar2 != *pbVar7) {
LAB_10d5d898:
                  uVar8 = -(uint)bVar9 | 1;
                  goto LAB_10d5d89d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar5[1];
                bVar9 = bVar2 < pbVar7[1];
                if (bVar2 != pbVar7[1]) goto LAB_10d5d898;
                pbVar5 = pbVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar2 != 0);
              uVar8 = 0;
LAB_10d5d89d:
              if (uVar8 != 0) {
                sprintf_s(local_1e4,0x100,
                          "[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."
                          ,local_e4[0],*(byte **)(iVar6 + 0x14));
                FUN_100ee330(local_1e4,1);
              }
            }
            else {
              do {
                if (*(uint *)(iVar3 + 0x10) < uVar8) {
                  iVar4 = *(int *)(iVar3 + 0xc);
                }
                else {
                  iVar4 = *(int *)(iVar3 + 8);
                  iVar6 = iVar3;
                }
                iVar3 = iVar4;
              } while (iVar4 != 0);
              if (iVar6 != iVar1) {
                if (uVar8 < *(uint *)(iVar6 + 0x10)) {
                  iVar6 = iVar1;
                }
                goto LAB_10d5d86d;
              }
LAB_10d5d8cd:
              local_1b4[0] = uVar8;
              FUN_10d56180(local_e4);
              FUN_10d5a3d0(local_18,local_1b4);
              FUN_10d56970();
            }
            FUN_10d56970();
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 4))();
            }
          }
          else if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 4))();
          }
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
  }
  return;
}



/* ===== FUN_10d5d950 @ 10d5d950  size=782 ===== */
// calls: _stricmp, sprintf_s
// strings:
//   "condition_flag"
//   "value"
//   "max_entity_hit"
//   "max_part_hit"
//   "min_time_interval"
//   "ignore_skill"
//   "partbase_attack"
//   "attacker"
//   "[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."

/* [RE-AUTO c0]
   calls: _stricmp, sprintf_s
   strings:
     ""condition_flag""
     ""value""
     ""max_entity_hit""
     ""max_part_hit""
     ""min_time_interval""
     ""ignore_skill""
     ""partbase_attack""
     ""attacker""
     ""[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to
   avoid redundant hash code."" */

void __thiscall FUN_10d5d950(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  char *_Str1;
  int iVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  char *_Str2;
  char local_1dc [48];
  uint local_1ac [52];
  byte *local_dc [51];
  undefined1 local_10 [8];
  int *local_8;
  
  cVar2 = (char)param_3;
  local_8 = param_2;
  if ((char)param_3 != '\0') {
    *param_1 = 0;
  }
  piVar4 = (int *)FUN_10ab25f0("condition_flag");
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x18))("value",&param_3), cVar3 != '\0')) {
    *param_1 = param_3;
  }
  if (cVar2 != '\0') {
    param_1[1] = 1;
  }
  piVar4 = (int *)FUN_10ab25f0("max_entity_hit");
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x18))("value",&param_3), cVar3 != '\0')) {
    param_1[1] = param_3;
  }
  if (cVar2 != '\0') {
    param_1[2] = 0;
  }
  piVar4 = (int *)FUN_10ab25f0("max_part_hit");
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x18))("value",&param_3), cVar3 != '\0')) {
    param_1[2] = param_3;
  }
  if (cVar2 != '\0') {
    param_1[3] = 0;
  }
  piVar4 = (int *)FUN_10ab25f0("min_time_interval");
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x1c))("value",param_1 + 3);
  }
  if (cVar2 != '\0') {
    param_1[4] = 0;
  }
  piVar4 = (int *)FUN_10ab25f0("ignore_skill");
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x18))("value",&param_3), cVar3 != '\0')) {
    param_1[4] = param_3;
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  piVar4 = (int *)FUN_10ab25f0("partbase_attack");
  if ((piVar4 != (int *)0x0) &&
     (cVar3 = (**(code **)(*piVar4 + 0x18))("value",&param_3), cVar3 != '\0')) {
    *(bool *)(param_1 + 5) = param_3 != 0;
  }
  if ((cVar2 != '\0') && (param_1[10] != 0)) {
    FUN_10d5e600(param_1[7]);
    param_1[8] = (int)(param_1 + 6);
    param_1[7] = 0;
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = 0;
  }
  if (param_2 != (int *)0x0) {
    local_8 = (int *)(**(code **)(*param_2 + 0x50))();
    param_3 = 0;
    if (0 < (int)local_8) {
      do {
        piVar4 = (int *)(**(code **)(*param_2 + 0x5c))(param_3);
        if (piVar4 != (int *)0x0) {
          _Str2 = "attacker";
          _Str1 = (char *)(**(code **)(*piVar4 + 0x74))();
          iVar5 = _stricmp(_Str1,_Str2);
          if (iVar5 == 0) {
            FUN_10d56350();
            FUN_10d57940(piVar4,1);
            uVar11 = 0x4e67c6a7;
            bVar1 = *local_dc[0];
            pbVar8 = local_dc[0];
            while (bVar1 != 0) {
              pbVar8 = pbVar8 + 1;
              uVar11 = uVar11 ^ uVar11 * 0x20 + (uVar11 >> 2) + (int)(char)bVar1;
              bVar1 = *pbVar8;
            }
            piVar6 = (int *)param_1[7];
            piVar4 = param_1 + 6;
            piVar9 = piVar4;
            if (piVar6 == (int *)0x0) {
LAB_10d5db9d:
              if (piVar9 == piVar4) goto LAB_10d5dc05;
              pbVar8 = local_dc[0];
              pbVar10 = (byte *)piVar9[5];
              do {
                bVar1 = *pbVar8;
                bVar12 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_10d5dbd0:
                  uVar11 = -(uint)bVar12 | 1;
                  goto LAB_10d5dbd5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar12 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_10d5dbd0;
                pbVar8 = pbVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              uVar11 = 0;
LAB_10d5dbd5:
              if (uVar11 != 0) {
                sprintf_s(local_1dc,0x100,
                          "[AttackerName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."
                          ,local_dc[0],(byte *)piVar9[5]);
                FUN_100ee330(local_1dc,1);
              }
            }
            else {
              do {
                if ((uint)piVar6[4] < uVar11) {
                  piVar7 = (int *)piVar6[3];
                }
                else {
                  piVar7 = (int *)piVar6[2];
                  piVar9 = piVar6;
                }
                piVar6 = piVar7;
              } while (piVar7 != (int *)0x0);
              if (piVar9 != piVar4) {
                if (uVar11 < (uint)piVar9[4]) {
                  piVar9 = piVar4;
                }
                goto LAB_10d5db9d;
              }
LAB_10d5dc05:
              local_1ac[0] = uVar11;
              FUN_10d56180(local_dc);
              FUN_10d5a3d0(local_10,local_1ac);
              FUN_10d56970();
            }
            FUN_10d56970();
          }
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)local_8);
    }
  }
  return;
}



/* ===== FUN_10db5920 @ 10db5920  size=271 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "Skill"
//   ".AISetting.Skill"
//   "PropertyCustom"

/* [RE-AUTO c0]
   strings:
     ""Skill""
     "".AISetting.Skill""
     ""PropertyCustom"" */

void __fastcall FUN_10db5920(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_10;
  undefined4 local_c;
  char local_5;
  
  bVar2 = false;
  bVar1 = false;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x1d00) + 0x150))(2);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 0x38))();
    if (iVar5 != 0) {
      cVar3 = FUN_10a68a90("Skill",&local_c);
      if (cVar3 == '\0') {
        bVar2 = true;
        bVar1 = true;
        uVar6 = CInfoRecord__GetModelString("PropertyCustom",".AISetting.Skill");
        puVar7 = (undefined4 *)FUN_10a4b980(&local_10,uVar6);
        cVar3 = FUN_10a68e20(*puVar7,&local_c);
        if (cVar3 == '\0') goto LAB_10db59a3;
      }
      local_5 = '\x01';
      goto LAB_10db59a7;
    }
  }
LAB_10db59a3:
  local_5 = '\0';
LAB_10db59a7:
  if (bVar1) {
    piVar4 = (int *)(local_10 + -0xc);
    if (-1 < *piVar4) {
      iVar5 = FUN_10c3dad0(piVar4);
      if (iVar5 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  if (bVar2) {
    if (-1 < iRamfffffff4) {
      iVar5 = FUN_10c3dad0(0xfffffff4);
      if (iVar5 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - iRamfffffffc);
        FUN_10c3d900(0xfffffff4);
      }
    }
  }
  if (local_5 != '\0') {
    FUN_110779b0(local_c,0);
  }
  return;
}



/* ===== FUN_10dcdd30 @ 10dcdd30  size=404 ===== */
// strings:
//   "SkillId"
//   "SkillChanged"

/* [RE-AUTO c0]
   strings:
     ""SkillId""
     ""SkillChanged"" */

undefined1 __thiscall FUN_10dcdd30(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_20;
  undefined1 local_10;
  undefined1 local_5;
  
  local_5 = 0;
  if (*(int *)(DAT_1202e818 + 0xd0) == 0) {
    return false;
  }
  iVar3 = (**(code **)(*param_1 + 0x7c))();
  piVar5 = *(int **)(DAT_1202e818 + 0xd0);
  uVar4 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x48))();
  (**(code **)(*piVar5 + 0xec))(uVar4);
  iVar3 = FUN_104789d0();
  if (iVar3 == 0) {
    return local_5;
  }
  if (param_1[0x10] < 0) {
    uVar4 = FUN_113168d0("SkillId");
    iVar3 = FUN_1046dc60(uVar4);
    param_1[0x10] = iVar3;
  }
  if (param_1[0x11] < 0) {
    uVar4 = FUN_113168d0("SkillChanged");
    iVar3 = FUN_1046dc60(uVar4);
    param_1[0x11] = iVar3;
  }
  bVar1 = true;
  piVar5 = param_1 + 0x10;
  uVar6 = 6;
  do {
    if (*piVar5 < 0) {
      bVar1 = false;
      break;
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar6 < 8);
  if (5 < param_2) {
    return bVar1;
  }
  if ((bVar1) && (uVar6 = param_1[0x10], uVar6 != 0xffffffff)) {
    FUN_1046ee70(uVar6);
    if (uVar6 < 1000000) {
      cVar2 = FUN_1025d5b0(uVar6);
    }
    else {
      cVar2 = FUN_1025b300(uVar6 - 1000000,param_2);
    }
    if ((cVar2 != '\0') && (uVar6 = param_1[0x11], uVar6 != 0xffffffff)) {
      FUN_1046ee70(uVar6);
      if (uVar6 < 1000000) {
        cVar2 = FUN_1025d690(uVar6);
      }
      else {
        cVar2 = FUN_1025b520(uVar6 - 1000000,1);
      }
      local_5 = 1;
      if (cVar2 != '\0') goto LAB_10dcde61;
    }
  }
  local_5 = 0;
LAB_10dcde61:
  local_50 = param_2;
  local_20 = param_1[2];
  local_54 = 0x93b;
  local_4c = 0xffffffff;
  local_10 = 0;
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_54);
  return local_5;
}



/* ===== FUN_10dcded0 @ 10dcded0  size=964 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "/Libs/PetMonsterSkillConfig.xml"
//   "PetMonsterSkillConfig"
//   "PetMonsters"
//   "MonsterID"
//   "First"
//   "Second"
//   "Third"
//   "Fourth"
//   "Fifth"
//   "SkillLearn"
//   "SkillID"
//   "Level"

/* [RE-AUTO c0]
   strings:
     ""/Libs/PetMonsterSkillConfig.xml""
     ""PetMonsterSkillConfig""
     ""PetMonsters""
     ""MonsterID""
     ""First""
     ""Second""
     ""Third""
     ""Fourth""
     ""Fifth""
     ""SkillLearn"" */

void __fastcall FUN_10dcded0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_34 = param_1;
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  local_30 = piVar2;
  uVar3 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  CInfoRecord__GetModelString(uVar3);
  local_3c = (int *)(local_24 + -0xc);
  if (*local_3c < 0) {
    local_18 = &DAT_1201fc98;
  }
  else {
    local_18 = local_24;
    FUN_10c3dab0(local_3c);
  }
  FUN_10a4c990("/Libs/PetMonsterSkillConfig.xml",0x1f);
  puVar8 = local_18;
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_1c,local_18,0,1,0);
  if (local_1c != (int *)0x0) {
    pcVar9 = "PetMonsterSkillConfig";
    pbVar4 = (byte *)(**(code **)(*local_1c + 0x20))();
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10dcdf87:
        uVar5 = -(uint)bVar10 | 1;
        goto LAB_10dcdf8c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10dcdf87;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10dcdf8c:
    if ((uVar5 == 0) && (piVar2 != (int *)0x0)) {
      iVar7 = 0;
      piVar2 = (int *)(**(code **)(*(int *)local_34[3] + 0x288))();
      if ((piVar2 != (int *)0x0) && (iVar6 = (**(code **)(*piVar2 + 0xa8))(), iVar6 == 1)) {
        iVar7 = FUN_113a23b0();
        iVar7 = *(int *)(iVar7 + 0x14);
      }
      (**(code **)(*local_1c + 0xac))(&local_10,"PetMonsters");
      if ((local_10 != (int *)0x0) && (iVar7 != 0)) {
        local_34 = (int *)(**(code **)(*local_10 + 0xa0))();
        iVar6 = 0;
        if (0 < (int)local_34) {
          do {
            (**(code **)(*local_10 + 0xa8))(&local_c,iVar6);
            if (local_c != (int *)0x0) {
              local_28 = 0;
              (**(code **)(*local_c + 0x74))("MonsterID",&local_28);
              if (local_28 == iVar7) {
                (**(code **)(*local_c + 0x74))("First",&local_8);
                piVar2 = local_30;
                (**(code **)(*local_30 + 0x18))(1,local_8);
                (**(code **)(*local_c + 0x74))("Second",&local_8);
                (**(code **)(*piVar2 + 0x18))(2,local_8);
                (**(code **)(*local_c + 0x74))("Third",&local_8);
                (**(code **)(*piVar2 + 0x18))(3,local_8);
                (**(code **)(*local_c + 0x74))("Fourth",&local_8);
                (**(code **)(*piVar2 + 0x18))(4,local_8);
                (**(code **)(*local_c + 0x74))("Fifth",&local_8);
                (**(code **)(*piVar2 + 0x18))(5,local_8);
                if (local_c != (int *)0x0) {
                  (**(code **)(*local_c + 4))();
                }
                break;
              }
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 4))();
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)local_34);
        }
      }
      piVar2 = (int *)(**(code **)(*local_1c + 0xac))(&local_38,"SkillLearn");
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)();
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
      local_10 = (int *)*piVar2;
      if (local_38 != (int *)0x0) {
        (**(code **)(*local_38 + 4))();
      }
      if (local_10 != (int *)0x0) {
        if (iVar7 != 0) {
          local_38 = (int *)(**(code **)(*local_10 + 0xa0))();
          iVar6 = 0;
          if (0 < (int)local_38) {
LAB_10dce153:
            (**(code **)(*local_10 + 0xa8))(&local_14,iVar6);
            if (local_14 == (int *)0x0) goto LAB_10dce190;
            local_2c = 0;
            (**(code **)(*local_14 + 0x74))("MonsterID",&local_2c);
            if (local_2c != iVar7) {
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 4))();
              }
              goto LAB_10dce190;
            }
            iVar7 = (**(code **)(*local_14 + 0xa0))();
            piVar2 = local_30;
            if (0 < iVar7) {
              iVar6 = 0;
              do {
                (**(code **)(*local_14 + 0xa8))(&local_20,iVar6);
                if (local_20 != (int *)0x0) {
                  local_44 = 0;
                  local_40 = 1;
                  (**(code **)(*local_20 + 0x74))("SkillID",&local_44);
                  (**(code **)(*local_20 + 0x74))("Level",&local_40);
                  (**(code **)(*piVar2 + 0x20))(&local_44);
                  if (local_20 != (int *)0x0) {
                    (**(code **)(*local_20 + 4))();
                  }
                }
                iVar6 = iVar6 + 1;
                puVar8 = local_18;
              } while (iVar6 < iVar7);
            }
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 4))();
            }
          }
        }
LAB_10dce222:
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
      }
    }
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))();
    }
  }
  if ((-1 < *(int *)(puVar8 + -0xc)) && (iVar7 = FUN_10c3dad0(puVar8 + -0xc), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar8 + -4));
    FUN_10c3d900(puVar8 + -0xc);
  }
  piVar2 = local_3c;
  if ((-1 < *local_3c) && (iVar7 = FUN_10c3dad0(local_3c), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar2[2]);
    FUN_10c3d900(piVar2);
  }
  return;
LAB_10dce190:
  iVar6 = iVar6 + 1;
  if ((int)local_38 <= iVar6) goto LAB_10dce222;
  goto LAB_10dce153;
}



/* ===== FUN_10e178a0 @ 10e178a0  size=587 ===== */
// strings:
//   "Enable"
//   "Disable"
//   "OnSubmit"
//   "SubmittedItemID"
//   "SubmittedItemCount"
//   "SubmittedBuffID"
//   "Submitter"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""OnSubmit""
     ""SubmittedItemID""
     ""SubmittedItemCount""
     ""SubmittedBuffID""
     ""Submitter"" */

void FUN_10e178a0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12032440 & 1) == 0) {
    DAT_12032440 = DAT_12032440 | 1;
    _DAT_12032408 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120323f8 = "Enable";
    _DAT_120323fc = 0;
    _DAT_12032400 = &DAT_11d9d32b;
    _DAT_12032404 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203240c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12032420 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12032410 = "Disable";
    _DAT_12032414 = 0;
    _DAT_12032418 = &DAT_11d9d32b;
    _DAT_1203241c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12032424,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12032438 = &DAT_11df7728;
    _DAT_12032428 = 0;
    uRam1203242c = 0;
    uRam12032430 = 0;
    uRam12032434 = 0;
    FUN_11a8911f(&LAB_11c8b840);
  }
  *param_1 = &DAT_120323f8;
  if ((DAT_12032440 & 2) == 0) {
    DAT_12032440 = DAT_12032440 | 2;
    _DAT_12032448 = "OnSubmit";
    uRam1203244c = 0;
    _DAT_12032450 = &DAT_11d9d32b;
    uRam12032454 = 6;
    _DAT_12032458 = "SubmittedItemID";
    uRam1203245c = 0;
    puRam12032460 = &DAT_11d9d32b;
    uRam12032464 = 1;
    _DAT_12032468 = "SubmittedItemCount";
    uRam1203246c = 0;
    puRam12032470 = &DAT_11d9d32b;
    uRam12032474 = 1;
    _DAT_12032478 = "SubmittedBuffID";
    uRam1203247c = 0;
    puRam12032480 = &DAT_11d9d32b;
    uRam12032484 = 1;
    _DAT_12032488 = "Submitter";
    uRam1203248c = 0;
    puRam12032490 = &DAT_11d9d32b;
    uRam12032494 = 1;
    _DAT_12032498 = 0;
    uRam1203249c = 0;
    uRam120324a0 = 0;
    uRam120324a4 = 0;
  }
  param_1[1] = &DAT_12032448;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff02f | 0x20;
  return;
}



/* ===== FUN_10e329a0 @ 10e329a0  size=907 ===== */
// strings:
//   "targetNetID"
//   "buffID"
//   "needPartName"
//   "partName"
//   "buffInstanceID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""targetNetID""
     ""buffID""
     ""needPartName""
     ""partName""
     ""buffInstanceID"" */

void FUN_10e329a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_6c [4];
  char *local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined1 local_54 [4];
  char *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *puStack_14;
  uint uStack_10;
  int *piStack_c;
  undefined1 local_5;
  
  if ((DAT_12033e90 & 1) == 0) {
    DAT_12033e90 = DAT_12033e90 | 1;
    _DAT_12033e00 = &DAT_11cef2b4;
    _DAT_12033e04 = 0;
    _DAT_12033e08 = &DAT_11d9d32b;
    _DAT_12033e0c = 0;
    _DAT_12033e10 = &DAT_11df7728;
    local_5 = 0;
    (*(code *)PTR_FUN_11df7734)(&DAT_12033e14,local_6c);
    (*(code *)PTR_FUN_11df772c)(local_6c);
    local_38 = "targetNetID";
    local_34 = 0;
    local_30 = &DAT_11d9d32b;
    local_28 = &DAT_11df7669;
    _DAT_12033e28 = &DAT_11df7669;
    local_2c = 0;
    local_24 = 0;
    _DAT_12033e18 = "targetNetID";
    _DAT_12033e1c = 0;
    _DAT_12033e20 = &DAT_11d9d32b;
    _DAT_12033e24 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033e2c,&local_24);
    (**(code **)(((uint)local_28 & 0xfffffffc) + 4))(&local_24);
    local_50 = "buffID";
    local_40 = &DAT_11df7669;
    _DAT_12033e40 = &DAT_11df7669;
    local_4c = 0;
    local_48 = &DAT_11d9d32b;
    local_44 = &DAT_11d9d32b;
    local_3c = 0xffffffff;
    _DAT_12033e30 = "buffID";
    _DAT_12033e34 = 0;
    _DAT_12033e38 = &DAT_11d9d32b;
    _DAT_12033e3c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033e44,&local_3c);
    (**(code **)(((uint)local_40 & 0xfffffffc) + 4))(&local_3c);
    local_68 = "needPartName";
    local_64 = 0;
    local_60 = &DAT_11d9d32b;
    local_5c = 0;
    local_54[0] = 0;
    _DAT_12033e48 = "needPartName";
    local_58 = &DAT_11df7709;
    _DAT_12033e58 = &DAT_11df7709;
    _DAT_12033e4c = 0;
    _DAT_12033e50 = &DAT_11d9d32b;
    _DAT_12033e54 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12033e5c,local_54);
    (**(code **)(((uint)local_58 & 0xfffffffc) + 4))(local_54);
    local_20 = "partName";
    local_1c = 0;
    local_18 = &DAT_11d9d32b;
    puStack_14 = &DAT_11d9d32b;
    piVar1 = (int *)FUN_10c3d780(0xe);
    DAT_123be268 = DAT_123be268 + 0xe;
    *piVar1 = 1;
    piStack_c = piVar1 + 3;
    piVar1[1] = 1;
    piVar1[2] = 1;
    *(undefined2 *)piStack_c = 0;
    uStack_10 = 0;
    if (*piVar1 < 0) {
      piStack_c = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar1);
    }
    uStack_10 = uStack_10 & 3 | 0x11df76e9;
    if (-1 < *piVar1) {
      iVar2 = FUN_10c3dad0(piVar1);
      if (iVar2 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - piVar1[2]);
        FUN_10c3d900(piVar1);
      }
    }
    _DAT_12033e60 = local_20;
    _DAT_12033e64 = local_1c;
    _DAT_12033e68 = local_18;
    _DAT_12033e6c = puStack_14;
    DAT_12033e70 = uStack_10;
    (**(code **)((uStack_10 & 0xfffffffc) + 0xc))(&DAT_12033e74,&piStack_c);
    (**(code **)((uStack_10 & 0xfffffffc) + 4))(&piStack_c);
    DAT_12033e88 = &DAT_11df7728;
    _DAT_12033e78 = 0;
    uRam12033e7c = 0;
    uRam12033e80 = 0;
    uRam12033e84 = 0;
    FUN_11a8911f(&LAB_11c8cb00);
  }
  if ((DAT_12033e90 & 2) == 0) {
    DAT_12033e90 = DAT_12033e90 | 2;
    _DAT_12033e94 = "buffInstanceID";
    uRam12033e98 = 0;
    puRam12033e9c = &DAT_11d9d32b;
    _DAT_12033ea0 = 1;
    _DAT_12033ea4 = 0;
    uRam12033ea8 = 0;
    uRam12033eac = 0;
    uRam12033eb0 = 0;
  }
  *param_1 = &DAT_12033e00;
  param_1[1] = &DAT_12033e94;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e33780 @ 10e33780  size=582 ===== */
// strings:
//   "targetNetID"
//   "buffID"
//   "Success"
//   "Failed"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""targetNetID""
     ""buffID""
     ""Success""
     ""Failed"" */

void FUN_10e33780(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12033f18 & 1) == 0) {
    DAT_12033f18 = DAT_12033f18 | 1;
    _DAT_12033eb8 = &DAT_11cef344;
    _DAT_12033ebc = 0;
    _DAT_12033ec0 = &DAT_11d9d32b;
    _DAT_12033ec4 = 0;
    _DAT_12033ec8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12033ecc,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12033ee0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12033ed0 = "targetNetID";
    _DAT_12033ed4 = 0;
    _DAT_12033ed8 = &DAT_11d9d32b;
    _DAT_12033edc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033ee4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12033ef8 = &DAT_11df7669;
    uStack_8 = 0xffffffff;
    _DAT_12033ee8 = "buffID";
    _DAT_12033eec = 0;
    _DAT_12033ef0 = &DAT_11d9d32b;
    _DAT_12033ef4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033efc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12033f10 = &DAT_11df7728;
    _DAT_12033f00 = 0;
    uRam12033f04 = 0;
    uRam12033f08 = 0;
    uRam12033f0c = 0;
    FUN_11a8911f(&LAB_11c8cbf0);
  }
  if ((DAT_12033f18 & 2) == 0) {
    DAT_12033f18 = DAT_12033f18 | 2;
    _DAT_12033f1c = "Success";
    uRam12033f20 = 0;
    puRam12033f24 = &DAT_11d9d32b;
    _DAT_12033f28 = 0;
    _DAT_12033f2c = "Failed";
    uRam12033f30 = 0;
    puRam12033f34 = &DAT_11d9d32b;
    uRam12033f38 = 0;
    _DAT_12033f3c = 0;
    uRam12033f40 = 0;
    uRam12033f44 = 0;
    uRam12033f48 = 0;
  }
  *param_1 = &DAT_12033eb8;
  param_1[1] = &DAT_12033f1c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e345a0 @ 10e345a0  size=668 ===== */
// strings:
//   "targetNetID"
//   "buffID"
//   "Success"
//   "Failed"
//   "buffCount"
//   "stackCount"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""targetNetID""
     ""buffID""
     ""Success""
     ""Failed""
     ""buffCount""
     ""stackCount"" */

void FUN_10e345a0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_12033fb0 & 1) == 0) {
    DAT_12033fb0 = DAT_12033fb0 | 1;
    _DAT_12033f50 = &DAT_11ced080;
    _DAT_12033f54 = 0;
    _DAT_12033f58 = &DAT_11d9d32b;
    _DAT_12033f5c = 0;
    _DAT_12033f60 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12033f64,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12033f78 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12033f68 = "targetNetID";
    _DAT_12033f6c = 0;
    _DAT_12033f70 = &DAT_11d9d32b;
    _DAT_12033f74 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033f7c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12033f90 = &DAT_11df7669;
    uStack_8 = 0xffffffff;
    _DAT_12033f80 = "buffID";
    _DAT_12033f84 = 0;
    _DAT_12033f88 = &DAT_11d9d32b;
    _DAT_12033f8c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12033f94,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12033fa8 = &DAT_11df7728;
    _DAT_12033f98 = 0;
    uRam12033f9c = 0;
    uRam12033fa0 = 0;
    uRam12033fa4 = 0;
    FUN_11a8911f(&LAB_11c8cd10);
  }
  if ((DAT_12033fb0 & 2) == 0) {
    DAT_12033fb0 = DAT_12033fb0 | 2;
    _DAT_12033fb8 = "Success";
    uRam12033fbc = 0;
    _DAT_12033fc0 = &DAT_11d9d32b;
    uRam12033fc4 = 0;
    _DAT_12033fc8 = "Failed";
    uRam12033fcc = 0;
    puRam12033fd0 = &DAT_11d9d32b;
    uRam12033fd4 = 0;
    _DAT_12033fd8 = "buffCount";
    uRam12033fdc = 0;
    puRam12033fe0 = &DAT_11d9d32b;
    uRam12033fe4 = 1;
    _DAT_12033fe8 = "stackCount";
    uRam12033fec = 0;
    puRam12033ff0 = &DAT_11d9d32b;
    uRam12033ff4 = 1;
    _DAT_12033ff8 = 0;
    uRam12033ffc = 0;
    uRam12034000 = 0;
    uRam12034004 = 0;
  }
  *param_1 = &DAT_12033f50;
  param_1[1] = &DAT_12033fb8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e47620 @ 10e47620  size=2459 ===== */
// strings:
//   "Root1"
//   "Root2"
//   "Root3"
//   "Root4"
//   "BuffCurrentValue"
//   "BuffMaxValue"
//   "ShowMonster"
//   "ShowArea1"
//   "ShowArea2"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Root1""
     ""Root2""
     ""Root3""
     ""Root4""
     ""BuffCurrentValue""
     ""BuffMaxValue""
     ""ShowMonster""
     ""ShowArea1""
     ""ShowArea2"" */

void FUN_10e47620(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120362b8 & 1) == 0) {
    DAT_120362b8 = DAT_120362b8 | 1;
    _DAT_120360d8 = &DAT_11cc0a98;
    _DAT_120360dc = 0;
    _DAT_120360e0 = &DAT_11d9d32b;
    _DAT_120360e4 = 0;
    _DAT_120360e8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120360ec,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120360f0 = "Hide";
    _DAT_120360f4 = 0;
    _DAT_120360f8 = &DAT_11d9d32b;
    _DAT_120360fc = 0;
    _DAT_12036100 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12036104,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12036118 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036108 = &DAT_11cf0ddc;
    _DAT_1203610c = 0;
    _DAT_12036110 = &DAT_11d9d32b;
    _DAT_12036114 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203611c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12036130 = &DAT_11df7669;
    _DAT_12036120 = &DAT_11cf0de4;
    _DAT_12036124 = 0;
    _DAT_12036128 = &DAT_11d9d32b;
    _DAT_1203612c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12036134,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036148 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036138 = &DAT_11cf0dec;
    _DAT_1203613c = 0;
    _DAT_12036140 = &DAT_11d9d32b;
    _DAT_12036144 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203614c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036160 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036150 = &DAT_11cf0df4;
    _DAT_12036154 = 0;
    _DAT_12036158 = &DAT_11d9d32b;
    _DAT_1203615c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12036164,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12036168 = "Root1";
    _DAT_1203616c = 0;
    _DAT_12036170 = &DAT_11d9d32b;
    _DAT_12036174 = 0;
    _DAT_12036178 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203617c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036190 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036180 = "Root2";
    _DAT_12036184 = 0;
    _DAT_12036188 = &DAT_11d9d32b;
    _DAT_1203618c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12036194,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120361a8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036198 = "Root3";
    _DAT_1203619c = 0;
    _DAT_120361a0 = &DAT_11d9d32b;
    _DAT_120361a4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120361ac,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120361c0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120361b0 = "Root4";
    _DAT_120361b4 = 0;
    _DAT_120361b8 = &DAT_11d9d32b;
    _DAT_120361bc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120361c4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120361d8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120361c8 = &DAT_11cf0e1c;
    _DAT_120361cc = 0;
    _DAT_120361d0 = &DAT_11d9d32b;
    _DAT_120361d4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120361dc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120361f0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120361e0 = &DAT_11cf0e24;
    _DAT_120361e4 = 0;
    _DAT_120361e8 = &DAT_11d9d32b;
    _DAT_120361ec = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120361f4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036208 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120361f8 = &DAT_11cf0e2c;
    _DAT_120361fc = 0;
    _DAT_12036200 = &DAT_11d9d32b;
    _DAT_12036204 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203620c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036220 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036210 = &DAT_11cf0e34;
    _DAT_12036214 = 0;
    _DAT_12036218 = &DAT_11d9d32b;
    _DAT_1203621c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12036224,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036238 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036228 = "BuffCurrentValue";
    _DAT_1203622c = 0;
    _DAT_12036230 = &DAT_11d9d32b;
    _DAT_12036234 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203623c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12036250 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12036240 = "BuffMaxValue";
    _DAT_12036244 = 0;
    _DAT_12036248 = &DAT_11d9d32b;
    _DAT_1203624c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12036254,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12036258 = "ShowMonster";
    _DAT_1203625c = 0;
    _DAT_12036268 = &DAT_11df7709;
    _DAT_12036260 = &DAT_11d9d32b;
    _DAT_12036264 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203626c,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    _DAT_12036280 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12036270 = "ShowArea1";
    _DAT_12036274 = 0;
    _DAT_12036278 = &DAT_11d9d32b;
    _DAT_1203627c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12036284,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    DAT_12036298 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12036288 = "ShowArea2";
    _DAT_1203628c = 0;
    _DAT_12036290 = &DAT_11d9d32b;
    _DAT_12036294 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203629c,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    DAT_120362b0 = &DAT_11df7728;
    _DAT_120362a0 = 0;
    uRam120362a4 = 0;
    uRam120362a8 = 0;
    uRam120362ac = 0;
    FUN_11a8911f(&LAB_11c8dd50);
  }
  if ((DAT_120362b8 & 2) == 0) {
    DAT_120362b8 = DAT_120362b8 | 2;
    _DAT_120362bc = &DAT_11cef134;
    uRam120362c0 = 0;
    puRam120362c4 = &DAT_11d9d32b;
    _DAT_120362c8 = 6;
    _DAT_120362cc = 0;
    uRam120362d0 = 0;
    uRam120362d4 = 0;
    uRam120362d8 = 0;
  }
  *param_1 = &DAT_120360d8;
  param_1[1] = &DAT_120362bc;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e5a420 @ 10e5a420  size=1391 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "isSpawnerEntityID"
//   "isCollectPointNetID"
//   "isPet"
//   "isItemID"
//   "isBuffID"
//   "OnEvent"
//   "spawnerEntityID"
//   "collectPointNetID"
//   "playerNetID"
//   "petNetID"
//   "itemID"
//   "buffID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""isSpawnerEntityID""
     ""isCollectPointNetID""
     ""isPet""
     ""isItemID""
     ""isBuffID""
     ""OnEvent""
     ""spawnerEntityID"" */

void FUN_10e5a420(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120376f8 & 1) == 0) {
    DAT_120376f8 = DAT_120376f8 | 1;
    _DAT_12037620 = "enable";
    _DAT_12037624 = 0;
    _DAT_12037628 = &DAT_11d9d32b;
    _DAT_1203762c = 0;
    _DAT_12037630 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12037634,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037638 = "disable";
    _DAT_1203763c = 0;
    _DAT_12037640 = &DAT_11d9d32b;
    _DAT_12037644 = 0;
    _DAT_12037648 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203764c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037660 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12037650 = "triggerOnce";
    _DAT_12037654 = 0;
    _DAT_12037658 = &DAT_11d9d32b;
    _DAT_1203765c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12037664,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0xffffffff;
    _DAT_12037668 = "isSpawnerEntityID";
    _DAT_12037678 = &DAT_11df76c9;
    _DAT_1203766c = 0;
    _DAT_12037670 = &DAT_11d9d32b;
    _DAT_12037674 = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_1203767c,&uStack_8);
    (*(code *)PTR_FUN_11df76cc)(&uStack_8);
    _DAT_12037690 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12037680 = "isCollectPointNetID";
    _DAT_12037684 = 0;
    _DAT_12037688 = &DAT_11d9d32b;
    _DAT_1203768c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12037694,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120376a8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12037698 = "isPet";
    _DAT_1203769c = 0;
    _DAT_120376a0 = &DAT_11d9d32b;
    _DAT_120376a4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376ac,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_120376b0 = "isItemID";
    _DAT_120376b4 = 0;
    _DAT_120376b8 = &DAT_11d9d32b;
    _DAT_120376bc = 0;
    _DAT_120376c0 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376c4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120376d8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120376c8 = "isBuffID";
    _DAT_120376cc = 0;
    _DAT_120376d0 = &DAT_11d9d32b;
    _DAT_120376d4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376dc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120376f0 = &DAT_11df7728;
    _DAT_120376e0 = 0;
    uRam120376e4 = 0;
    uRam120376e8 = 0;
    uRam120376ec = 0;
    FUN_11a8911f(&LAB_11c8e2c0);
  }
  if ((DAT_120376f8 & 2) == 0) {
    DAT_120376f8 = DAT_120376f8 | 2;
    _DAT_12037700 = "OnEvent";
    uRam12037704 = 0;
    _DAT_12037708 = &DAT_11d9d32b;
    uRam1203770c = 1;
    _DAT_12037710 = "spawnerEntityID";
    uRam12037714 = 0;
    puRam12037718 = &DAT_11d9d32b;
    uRam1203771c = 3;
    _DAT_12037720 = "collectPointNetID";
    uRam12037724 = 0;
    puRam12037728 = &DAT_11d9d32b;
    uRam1203772c = 1;
    _DAT_12037730 = "playerNetID";
    uRam12037734 = 0;
    puRam12037738 = &DAT_11d9d32b;
    uRam1203773c = 1;
    _DAT_12037740 = "petNetID";
    uRam12037744 = 0;
    puRam12037748 = &DAT_11d9d32b;
    uRam1203774c = 1;
    _DAT_12037750 = "itemID";
    uRam12037754 = 0;
    puRam12037758 = &DAT_11d9d32b;
    uRam1203775c = 1;
    _DAT_12037760 = "buffID";
    uRam12037764 = 0;
    puRam12037768 = &DAT_11d9d32b;
    uRam1203776c = 1;
    _DAT_12037770 = 0;
    uRam12037774 = 0;
    uRam12037778 = 0;
    uRam1203777c = 0;
  }
  *param_1 = &DAT_12037620;
  param_1[1] = &DAT_12037700;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e5b2d0 @ 10e5b2d0  size=816 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "monsterInfoID"
//   "buffID"
//   "OnEvent"
//   "monsterNetID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""monsterInfoID""
     ""buffID""
     ""OnEvent""
     ""monsterNetID"" */

void FUN_10e5b2d0(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_12037538 & 1) == 0) {
    DAT_12037538 = DAT_12037538 | 1;
    _DAT_120374a8 = "enable";
    _DAT_120374ac = 0;
    _DAT_120374b0 = &DAT_11d9d32b;
    _DAT_120374b4 = 0;
    _DAT_120374b8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120374bc,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120374c0 = "disable";
    _DAT_120374c4 = 0;
    _DAT_120374c8 = &DAT_11d9d32b;
    _DAT_120374cc = 0;
    _DAT_120374d0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120374d4,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120374e8 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_120374d8 = "triggerOnce";
    _DAT_120374dc = 0;
    _DAT_120374e0 = &DAT_11d9d32b;
    _DAT_120374e4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120374ec,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12037500 = &DAT_11df7669;
    _DAT_120374f0 = "monsterInfoID";
    _DAT_120374f4 = 0;
    _DAT_120374f8 = &DAT_11d9d32b;
    _DAT_120374fc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12037504,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12037518 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12037508 = "buffID";
    _DAT_1203750c = 0;
    _DAT_12037510 = &DAT_11d9d32b;
    _DAT_12037514 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203751c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_12037530 = &DAT_11df7728;
    _DAT_12037520 = 0;
    uRam12037524 = 0;
    uRam12037528 = 0;
    uRam1203752c = 0;
    FUN_11a8911f(&LAB_11c8e380);
  }
  if ((DAT_12037538 & 2) == 0) {
    DAT_12037538 = DAT_12037538 | 2;
    _DAT_1203753c = "OnEvent";
    uRam12037540 = 0;
    puRam12037544 = &DAT_11d9d32b;
    _DAT_12037548 = 1;
    _DAT_1203754c = "monsterNetID";
    uRam12037550 = 0;
    puRam12037554 = &DAT_11d9d32b;
    uRam12037558 = 1;
    _DAT_1203755c = 0;
    uRam12037560 = 0;
    uRam12037564 = 0;
    uRam12037568 = 0;
  }
  *param_1 = &DAT_120374a8;
  param_1[1] = &DAT_1203753c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e741a0 @ 10e741a0  size=1511 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "logicEntityNetID"
//   "isSpawnerEntityID"
//   "isCollectPointNetID"
//   "isPet"
//   "isItemID"
//   "isBuffID"
//   "OnEvent"
//   "spawnerEntityID"
//   "collectPointNetID"
//   "playerNetID"
//   "petNetID"
//   "itemID"
//   "buffID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""logicEntityNetID""
     ""isSpawnerEntityID""
     ""isCollectPointNetID""
     ""isPet""
     ""isItemID""
     ""isBuffID""
     ""OnEvent"" */

void FUN_10e741a0(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120383e0 & 1) == 0) {
    DAT_120383e0 = DAT_120383e0 | 1;
    _DAT_120382f0 = "enable";
    _DAT_120382f4 = 0;
    _DAT_120382f8 = &DAT_11d9d32b;
    _DAT_120382fc = 0;
    _DAT_12038300 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12038304,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038308 = "disable";
    _DAT_1203830c = 0;
    _DAT_12038310 = &DAT_11d9d32b;
    _DAT_12038314 = 0;
    _DAT_12038318 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203831c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038330 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12038320 = "triggerOnce";
    _DAT_12038324 = 0;
    _DAT_12038328 = &DAT_11d9d32b;
    _DAT_1203832c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12038334,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12038348 = &DAT_11df7669;
    _DAT_12038338 = "logicEntityNetID";
    _DAT_1203833c = 0;
    _DAT_12038340 = &DAT_11d9d32b;
    _DAT_12038344 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203834c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12038360 = &DAT_11df76c9;
    uStack_8 = 0xffffffff;
    _DAT_12038350 = "isSpawnerEntityID";
    _DAT_12038354 = 0;
    _DAT_12038358 = &DAT_11d9d32b;
    _DAT_1203835c = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_12038364,&uStack_8);
    (*(code *)PTR_FUN_11df76cc)(&uStack_8);
    _DAT_12038378 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12038368 = "isCollectPointNetID";
    _DAT_1203836c = 0;
    _DAT_12038370 = &DAT_11d9d32b;
    _DAT_12038374 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203837c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12038380 = "isPet";
    _DAT_12038384 = 0;
    _DAT_12038388 = &DAT_11d9d32b;
    _DAT_1203838c = &DAT_11d9d32b;
    _DAT_12038390 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_12038394,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120383a8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12038398 = "isItemID";
    _DAT_1203839c = 0;
    _DAT_120383a0 = &DAT_11d9d32b;
    _DAT_120383a4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120383ac,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120383c0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120383b0 = "isBuffID";
    _DAT_120383b4 = 0;
    _DAT_120383b8 = &DAT_11d9d32b;
    _DAT_120383bc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120383c4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120383d8 = &DAT_11df7728;
    _DAT_120383c8 = 0;
    uRam120383cc = 0;
    uRam120383d0 = 0;
    uRam120383d4 = 0;
    FUN_11a8911f(&LAB_11c8e830);
  }
  if ((DAT_120383e0 & 2) == 0) {
    DAT_120383e0 = DAT_120383e0 | 2;
    _DAT_120383e8 = "OnEvent";
    uRam120383ec = 0;
    _DAT_120383f0 = &DAT_11d9d32b;
    uRam120383f4 = 1;
    _DAT_120383f8 = "spawnerEntityID";
    uRam120383fc = 0;
    puRam12038400 = &DAT_11d9d32b;
    uRam12038404 = 3;
    _DAT_12038408 = "collectPointNetID";
    uRam1203840c = 0;
    puRam12038410 = &DAT_11d9d32b;
    uRam12038414 = 1;
    _DAT_12038418 = "playerNetID";
    uRam1203841c = 0;
    puRam12038420 = &DAT_11d9d32b;
    uRam12038424 = 1;
    _DAT_12038428 = "petNetID";
    uRam1203842c = 0;
    puRam12038430 = &DAT_11d9d32b;
    uRam12038434 = 1;
    _DAT_12038438 = "itemID";
    uRam1203843c = 0;
    puRam12038440 = &DAT_11d9d32b;
    uRam12038444 = 1;
    _DAT_12038448 = "buffID";
    uRam1203844c = 0;
    puRam12038450 = &DAT_11d9d32b;
    uRam12038454 = 1;
    _DAT_12038458 = 0;
    uRam1203845c = 0;
    uRam12038460 = 0;
    uRam12038464 = 0;
  }
  *param_1 = &DAT_120382f0;
  param_1[1] = &DAT_120383e8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea1ab0 @ 10ea1ab0  size=1284 ===== */
// strings:
//   "modelGroupID"
//   "moduleType"
//   "useItemID"
//   "useItemNum"
//   "targetMonsterID"
//   "killMonsterCount"
//   "monsterPartName"
//   "monsterBreakLev"
//   "monsterStateAbnormal"
//   "spawnGroupID"
//   "msgID"
//   "targMsgID"
//   "monsterBuff1"
//   "monsterBuff2"
//   "monsterBuff3"
//   "logic"
//   "targetMonsterID2"
//   "killTargetMonsterCount2"
//   "monsterPartName2"
//   "monsterBreakLev2"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""modelGroupID""
     ""moduleType""
     ""useItemID""
     ""useItemNum""
     ""targetMonsterID""
     ""killMonsterCount""
     ""monsterPartName""
     ""monsterBreakLev""
     ""monsterStateAbnormal""
     ""spawnGroupID"" */

void FUN_10ea1ab0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203a8a0 & 1) == 0) {
    DAT_1203a8a0 = DAT_1203a8a0 | 1;
    DAT_1203a880 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a870 = "modelGroupID";
    _DAT_1203a874 = 0;
    _DAT_1203a878 = &DAT_11d9d32b;
    _DAT_1203a87c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a884,&uStack_8,"modelGroupID",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203a898 = &DAT_11df7728;
    _DAT_1203a888 = 0;
    uRam1203a88c = 0;
    uRam1203a890 = 0;
    uRam1203a894 = 0;
    FUN_11a8911f(&LAB_11c8ffc0);
  }
  if ((DAT_1203a8a0 & 2) == 0) {
    DAT_1203a8a0 = DAT_1203a8a0 | 2;
    _DAT_1203a8a8 = "moduleType";
    uRam1203a8ac = 0;
    _DAT_1203a8b0 = &DAT_11d9d32b;
    uRam1203a8b4 = 1;
    _DAT_1203a8b8 = "useItemID";
    uRam1203a8bc = 0;
    puRam1203a8c0 = &DAT_11d9d32b;
    uRam1203a8c4 = 1;
    _DAT_1203a8c8 = "useItemNum";
    uRam1203a8cc = 0;
    puRam1203a8d0 = &DAT_11d9d32b;
    uRam1203a8d4 = 1;
    _DAT_1203a8d8 = "targetMonsterID";
    uRam1203a8dc = 0;
    puRam1203a8e0 = &DAT_11d9d32b;
    uRam1203a8e4 = 1;
    _DAT_1203a8e8 = "killMonsterCount";
    uRam1203a8ec = 0;
    puRam1203a8f0 = &DAT_11d9d32b;
    uRam1203a8f4 = 1;
    _DAT_1203a8f8 = "monsterPartName";
    uRam1203a8fc = 0;
    puRam1203a900 = &DAT_11d9d32b;
    uRam1203a904 = 5;
    _DAT_1203a908 = "monsterBreakLev";
    uRam1203a90c = 0;
    puRam1203a910 = &DAT_11d9d32b;
    uRam1203a914 = 1;
    _DAT_1203a918 = "monsterStateAbnormal";
    uRam1203a91c = 0;
    puRam1203a920 = &DAT_11d9d32b;
    uRam1203a924 = 1;
    _DAT_1203a928 = "spawnGroupID";
    uRam1203a92c = 0;
    puRam1203a930 = &DAT_11d9d32b;
    uRam1203a934 = 1;
    _DAT_1203a938 = "msgID";
    uRam1203a93c = 0;
    puRam1203a940 = &DAT_11d9d32b;
    uRam1203a944 = 1;
    _DAT_1203a948 = "targMsgID";
    uRam1203a94c = 0;
    puRam1203a950 = &DAT_11d9d32b;
    uRam1203a954 = 1;
    _DAT_1203a958 = "monsterBuff1";
    uRam1203a95c = 0;
    puRam1203a960 = &DAT_11d9d32b;
    uRam1203a964 = 1;
    _DAT_1203a968 = "monsterBuff2";
    uRam1203a96c = 0;
    puRam1203a970 = &DAT_11d9d32b;
    uRam1203a974 = 1;
    _DAT_1203a978 = "monsterBuff3";
    uRam1203a97c = 0;
    puRam1203a980 = &DAT_11d9d32b;
    uRam1203a984 = 1;
    _DAT_1203a988 = "logic";
    uRam1203a98c = 0;
    puRam1203a990 = &DAT_11d9d32b;
    uRam1203a994 = 1;
    _DAT_1203a998 = "targetMonsterID2";
    uRam1203a99c = 0;
    puRam1203a9a0 = &DAT_11d9d32b;
    uRam1203a9a4 = 1;
    _DAT_1203a9a8 = "killTargetMonsterCount2";
    uRam1203a9ac = 0;
    puRam1203a9b0 = &DAT_11d9d32b;
    uRam1203a9b4 = 1;
    _DAT_1203a9b8 = "monsterPartName2";
    uRam1203a9bc = 0;
    puRam1203a9c0 = &DAT_11d9d32b;
    uRam1203a9c4 = 5;
    _DAT_1203a9c8 = "monsterBreakLev2";
    uRam1203a9cc = 0;
    puRam1203a9d0 = &DAT_11d9d32b;
    uRam1203a9d4 = 1;
    _DAT_1203a9d8 = "targMsgID2";
    uRam1203a9dc = 0;
    puRam1203a9e0 = &DAT_11d9d32b;
    uRam1203a9e4 = 1;
    _DAT_1203a9e8 = "wrongHitCheck";
    uRam1203a9ec = 0;
    puRam1203a9f0 = &DAT_11d9d32b;
    uRam1203a9f4 = 1;
    _DAT_1203a9f8 = "time1";
    uRam1203a9fc = 0;
    puRam1203aa00 = &DAT_11d9d32b;
    uRam1203aa04 = 1;
    _DAT_1203aa08 = "time2";
    uRam1203aa0c = 0;
    puRam1203aa10 = &DAT_11d9d32b;
    uRam1203aa14 = 1;
    _DAT_1203aa18 = "time3";
    uRam1203aa1c = 0;
    puRam1203aa20 = &DAT_11d9d32b;
    uRam1203aa24 = 1;
    _DAT_1203aa28 = "alertMsgID";
    uRam1203aa2c = 0;
    puRam1203aa30 = &DAT_11d9d32b;
    uRam1203aa34 = 1;
    _DAT_1203aa38 = 0;
    uRam1203aa3c = 0;
    uRam1203aa40 = 0;
    uRam1203aa44 = 0;
  }
  *param_1 = &DAT_1203a870;
  param_1[1] = &DAT_1203a8a8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea6a20 @ 10ea6a20  size=129 ===== */
// strings:
//   "SkillResID"
//   "SkillID"
//   "Level"

/* [RE-AUTO c0]
   strings:
     ""SkillResID""
     ""SkillID""
     ""Level"" */

undefined1 __thiscall FUN_10ea6a20(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = (**(code **)(*param_2 + 0x74))("SkillResID",param_1);
  if (cVar2 == '\0') {
    *param_1 = -1;
  }
  piVar1 = param_1 + 1;
  cVar2 = (**(code **)(*param_2 + 0x74))("SkillID",piVar1);
  if (cVar2 == '\0') {
    *piVar1 = -1;
  }
  cVar2 = (**(code **)(*param_2 + 0x74))("Level",param_1 + 2);
  if (cVar2 == '\0') {
    param_1[2] = -1;
  }
  if ((*param_1 < 1) && (*piVar1 < 1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar3;
}



/* ===== FUN_10ea6b30 @ 10ea6b30  size=1944 ===== */
// calls: memcpy, memmove
// strings:
//   "State"
//   "Holstered"
//   "UnHolstered"
//   "Special"
//   "States"
//   "QTEStartStates"
//   "HitSkillID"
//   "HitSkills"
//   "CannotHitSkills"
//   "SkillResID"
//   "SkillID"
//   "Level"
//   "StartEffects"
//   "EffectID"
//   "MonsterBTEvent"
//   "FailedExceptState"
//   "FailedExceptStates"
//   "Actions"

/* WARNING: Removing unreachable block (ram,0x10ea73f1) */
/* WARNING: Removing unreachable block (ram,0x10ea73fc) */
/* [RE-AUTO c0]
   calls: memcpy, memmove
   strings:
     ""State""
     ""Holstered""
     ""UnHolstered""
     ""Special""
     ""States""
     ""QTEStartStates""
     ""HitSkillID""
     ""HitSkills""
     ""CannotHitSkills""
     ""SkillResID"" */

undefined1 __thiscall FUN_10ea6b30(int param_1,int *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *_Src;
  char *pcVar6;
  int *piVar7;
  undefined1 uVar8;
  char *pcVar9;
  int *piStack_44;
  undefined1 *puStack_40;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  char *local_8;
  
  puStack_40 = &DAT_11da7300;
  piStack_44 = (int *)0x10ea6b48;
  piStack_44 = (int *)(**(code **)(*param_2 + 0x7c))();
  if (piStack_44 != (int *)0x0) {
    FUN_100e52b0();
    iVar4 = (**(code **)(*param_2 + 0x7c))("ActionName");
    if (iVar4 != 0) {
      FUN_100e52b0(iVar4);
    }
    iVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbabc0);
    if (iVar4 != 0) {
      piStack_44 = (int *)0x11ddb968;
      iVar5 = FUN_100ec310(iVar4);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 3;
      }
      else {
        piStack_44 = (int *)0x11cf57f8;
        iVar5 = FUN_100ec310(iVar4);
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          piStack_44 = (int *)0x11cf5804;
          iVar5 = FUN_100ec310(iVar4);
          if (iVar5 == 0) {
            *(undefined4 *)(param_1 + 0xc) = 2;
          }
          else {
            piStack_44 = (int *)&DAT_11cf5810;
            iVar5 = FUN_100ec310(iVar4);
            if (iVar5 == 0) {
              *(undefined4 *)(param_1 + 0xc) = 4;
            }
            else {
              piStack_44 = (int *)0x11cf5814;
              iVar4 = FUN_100ec310(iVar4);
              if (iVar4 != 0) goto LAB_10ea742e;
              *(undefined4 *)(param_1 + 0xc) = 5;
            }
          }
        }
      }
      piStack_44 = (int *)0x11ddb968;
      local_8 = (char *)(**(code **)(*param_2 + 0x7c))();
      if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
        FUN_10ea8b40(param_1 + 0x14,&local_8);
      }
      (**(code **)(*param_2 + 0xac))(&local_10,"States");
      if (local_10 != (int *)0x0) {
        iVar4 = (**(code **)(*local_10 + 0xa0))();
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            (**(code **)(*local_10 + 0xa8))(&local_14,iVar5);
            if (local_14 != (int *)0x0) {
              local_8 = (char *)(**(code **)(*local_14 + 0x7c))("State");
              if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
                FUN_10ea8b40(param_1 + 0x14,&local_8);
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 4))();
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
      }
      (**(code **)(*param_2 + 0xac))(&local_10,"QTEStartStates");
      if (local_10 != (int *)0x0) {
        iVar4 = (**(code **)(*local_10 + 0xa0))();
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            (**(code **)(*local_10 + 0xa8))(&local_14,iVar5);
            if (local_14 != (int *)0x0) {
              local_8 = (char *)(**(code **)(*local_14 + 0x7c))(&DAT_11da7300);
              if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
                FUN_10ea8b40(param_1 + 100,&local_8);
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 4))();
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
      }
      cVar3 = (**(code **)(*param_2 + 0x74))("HitSkillID",&local_18);
      if ((cVar3 != '\0') && (0 < (int)local_18)) {
        puVar1 = *(undefined4 **)(param_1 + 0x1c);
        local_28 = -1;
        local_24 = local_18;
        do {
          if (puVar1 == (undefined4 *)(param_1 + 0x1c)) {
LAB_10ea6d9d:
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x14);
          }
          if (((puVar1[2] == -1) && (local_18 == (int *)puVar1[3])) && (puVar1[4] == -1)) {
            if (puVar1 != (undefined4 *)(param_1 + 0x1c)) break;
            goto LAB_10ea6d9d;
          }
          puVar1 = (undefined4 *)*puVar1;
        } while( true );
      }
      (**(code **)(*param_2 + 0xac))(&local_14,"HitSkills");
      if (local_14 != (int *)0x0) {
        pcVar9 = (char *)0x0;
        local_8 = (char *)0x0;
        local_18 = (int *)(**(code **)(*local_14 + 0xa0))();
        if (0 < (int)local_18) {
          do {
            (**(code **)(*local_14 + 0xa8))(&local_10,pcVar9);
            if (local_10 != (int *)0x0) {
              local_28 = -1;
              local_24 = (int *)0xffffffff;
              local_20 = -1;
              if (local_10 != (int *)0x0) {
                (**(code **)*local_10)(local_10);
              }
              cVar3 = FUN_10ea6a20();
              if (cVar3 != '\0') {
                puVar1 = *(undefined4 **)(param_1 + 0x1c);
                while( true ) {
                  if (puVar1 == (undefined4 *)(param_1 + 0x1c)) goto LAB_10ea6e9b;
                  if (((local_28 == puVar1[2]) && (local_24 == (int *)puVar1[3])) &&
                     (local_20 == puVar1[4])) break;
                  puVar1 = (undefined4 *)*puVar1;
                }
                pcVar9 = local_8;
                if (puVar1 == (undefined4 *)(param_1 + 0x1c)) {
LAB_10ea6e9b:
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x14);
                }
              }
              if (local_10 != (int *)0x0) {
                (**(code **)(*local_10 + 4))();
              }
            }
            pcVar9 = pcVar9 + 1;
            local_8 = pcVar9;
          } while ((int)pcVar9 < (int)local_18);
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 4))();
        }
      }
      (**(code **)(*param_2 + 0xac))(&local_14,"CannotHitSkills");
      if (local_14 != (int *)0x0) {
        pcVar9 = (char *)0x0;
        local_8 = (char *)0x0;
        local_18 = (int *)(**(code **)(*local_14 + 0xa0))();
        if (0 < (int)local_18) {
          do {
            (**(code **)(*local_14 + 0xa8))(&local_10,pcVar9);
            piVar7 = local_10;
            if (local_10 != (int *)0x0) {
              local_28 = -1;
              local_24 = (int *)0xffffffff;
              local_20 = -1;
              (**(code **)*local_10)();
              cVar3 = (**(code **)(*piVar7 + 0x74))("SkillResID",&local_28);
              if (cVar3 == '\0') {
                local_28 = -1;
              }
              cVar3 = (**(code **)(*piVar7 + 0x74))("SkillID",&local_24);
              if (cVar3 == '\0') {
                local_24 = (int *)0xffffffff;
              }
              cVar3 = (**(code **)(*piVar7 + 0x74))("Level",&local_20);
              if (cVar3 == '\0') {
                local_20 = -1;
              }
              if ((local_28 < 1) && ((int)local_24 < 1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              (**(code **)(*piVar7 + 4))();
              if (bVar2) {
                puVar1 = *(undefined4 **)(param_1 + 0x24);
                while( true ) {
                  if (puVar1 == (undefined4 *)(param_1 + 0x24)) goto LAB_10ea700c;
                  if (((local_28 == puVar1[2]) && (local_24 == (int *)puVar1[3])) &&
                     (local_20 == puVar1[4])) break;
                  puVar1 = (undefined4 *)*puVar1;
                }
                if (puVar1 == (undefined4 *)(param_1 + 0x24)) {
LAB_10ea700c:
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x14);
                }
              }
              if (local_10 != (int *)0x0) {
                (**(code **)(*local_10 + 4))();
              }
            }
            pcVar9 = local_8 + 1;
            local_8 = pcVar9;
          } while ((int)pcVar9 < (int)local_18);
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 4))();
        }
      }
      (**(code **)(*param_2 + 0xac))(&local_10,"StartEffects");
      if (local_10 != (int *)0x0) {
        local_14 = (int *)0x0;
        iVar4 = 0;
        pcVar9 = (char *)(**(code **)(*local_10 + 0xa0))();
        local_8 = pcVar9;
        if (0 < (int)pcVar9) {
          do {
            (**(code **)(*local_10 + 0xa8))(&local_18,iVar4);
            if (local_18 != (int *)0x0) {
              (**(code **)(*local_18 + 0x74))("EffectID",&local_14);
              if (0 < (int)local_14) {
                puVar1 = *(undefined4 **)(param_1 + 0x5c);
                while( true ) {
                  if (puVar1 == (undefined4 *)(param_1 + 0x5c)) goto LAB_10ea70f7;
                  if ((int *)puVar1[2] == local_14) break;
                  puVar1 = (undefined4 *)*puVar1;
                }
                pcVar9 = local_8;
                if (puVar1 == (undefined4 *)(param_1 + 0x5c)) {
LAB_10ea70f7:
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0xc);
                }
              }
              if (local_18 != (int *)0x0) {
                (**(code **)(*local_18 + 4))();
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)pcVar9);
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
      }
      _Src = (int *)(**(code **)(*param_2 + 0x7c))("MonsterBTEvent");
      piVar7 = _Src;
      if (_Src != (int *)0x0) {
        do {
          local_14 = piVar7;
          piVar7 = (int *)((int)local_14 + 1);
        } while ((char)*local_14 != '\0');
        _Dst = *(void **)(param_1 + 0x40);
        piVar7 = (int *)(*(int *)(param_1 + 0x3c) - (int)_Dst);
        local_18 = (int *)((int)local_14 - (int)_Src);
        if (piVar7 < local_18) {
          if (piVar7 != (int *)0x0) {
            memcpy(_Dst,_Src,(size_t)piVar7);
          }
          FUN_100d9260((char *)((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x40)) + (int)_Src),
                       local_14);
        }
        else {
          if (local_18 != (int *)0x0) {
            memcpy(_Dst,_Src,(size_t)local_18);
          }
          local_14 = *(int **)(param_1 + 0x3c);
          piVar7 = (int *)(*(int *)(param_1 + 0x40) + (int)local_18);
          if (piVar7 != local_14) {
            memmove(piVar7,local_14,1);
            *(int *)(param_1 + 0x3c) =
                 (int)((int)piVar7 + (*(int *)(param_1 + 0x3c) - (int)local_14));
          }
        }
      }
      pcVar9 = (char *)(**(code **)(*param_2 + 0x7c))("FailedExceptState");
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        FUN_10f56fa0(pcVar9);
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0xc);
      }
      (**(code **)(*param_2 + 0xac))(&local_10,"FailedExceptStates");
      if (local_10 != (int *)0x0) {
        local_1c = (**(code **)(*local_10 + 0xa0))();
        if (0 < local_1c) {
          iVar4 = 0;
          do {
            (**(code **)(*local_10 + 0xa8))(&local_14,iVar4);
            if (local_14 != (int *)0x0) {
              pcVar9 = (char *)(**(code **)(*local_14 + 0x7c))(&DAT_11da7300);
              if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
                pcVar6 = (char *)(**(code **)(*local_14 + 0x20))();
                if ((pcVar6 != (char *)0x0) && (*pcVar6 == 'R')) {
                  FUN_10f56fa0(pcVar9);
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0xc);
                }
                FUN_10f56fa0(pcVar9);
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0xc);
              }
              if (local_14 != (int *)0x0) {
                (**(code **)(*local_14 + 4))();
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_1c);
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
      }
      (**(code **)(*param_2 + 0xac))(&local_c,"Actions");
      if (local_c != (int *)0x0) {
        iVar5 = 0;
        piStack_44 = (int *)0x10ea7351;
        iVar4 = (**(code **)(*local_c + 0xa0))();
        if (0 < iVar4) {
          do {
            piStack_44 = local_c;
            (**(code **)(*local_c + 0xa8))(&piStack_44,iVar5);
            cVar3 = FUN_10ea6920();
            if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0x1c);
            }
            iVar5 = iVar5 + 1;
            iVar4 = (**(code **)(*local_c + 0xa0))();
          } while (iVar5 < iVar4);
        }
      }
      uVar8 = 1;
      if (local_c != (int *)0x0) {
        piStack_44 = (int *)0x10ea742c;
        (**(code **)(*local_c + 4))();
      }
      goto LAB_10ea7430;
    }
  }
LAB_10ea742e:
  uVar8 = 0;
LAB_10ea7430:
  if (param_2 != (int *)0x0) {
    piStack_44 = (int *)0x10ea743c;
    (**(code **)(*param_2 + 4))();
  }
  return uVar8;
}



