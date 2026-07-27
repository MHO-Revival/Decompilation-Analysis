
// ===== CMonsterInfo::SpawnMonstersFromList@112a2e10 =====

/* [RE-R1]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

void __thiscall
CMonsterInfo__SpawnMonstersFromList(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_1128e900();
  local_14 = 0;
  if (*param_4 < 1) {
    return;
  }
  local_10 = param_1 + 8;
  piVar6 = param_4 + 1;
  do {
    piVar2 = (int *)FUN_111e09f0();
    iVar3 = (**(code **)(*piVar2 + 0x14))(*piVar6);
    if (iVar3 == 0) {
      piVar2 = (int *)FUN_111e09f0();
      iVar3 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xc),1,*piVar6,0xffffffff);
      param_1 = local_8;
      local_18 = iVar3;
      if (iVar3 != 0) {
        iVar4 = FUN_1140dd10();
        if ((iVar4 == 0x13) && (iVar4 = FUN_1140dd10(), iVar4 == 0x14)) {
          local_20 = *piVar6;
          local_1c = 0;
          iVar4 = GetClientMessageChannel();
          if (iVar4 != 0) {
            piVar2 = (int *)GetClientMessageChannel();
            (**(code **)(*piVar2 + 4))(0x1e4,&local_20);
          }
        }
        iVar4 = *(int *)((int)piVar6 + 6);
        local_c = &PTR_FUN_11dc8ee8;
        if ((DAT_123bee5c & 1) == 0) {
          DAT_123bee5c = DAT_123bee5c | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CMonsterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70e30);
        }
        puVar5 = (undefined4 *)*DAT_123bee60;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)CInfoManager__FindByName(&local_c,"CMonsterInfo",0),
           puVar5 == (undefined4 *)0x0)) {
          if ((DAT_123bedd4 & 1) == 0) {
            DAT_123bedd4 = DAT_123bedd4 | 1;
            CMonsterInfo__InitInfoManager();
            FUN_11a8911f(&LAB_11c99700);
          }
          puVar5 = &DAT_123bedd8;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar4 == -1) ||
           ((((iVar4 == 0 && (puVar5[0xc] != 0)) || (puVar5[10] == 0)) ||
            ((iVar4 = iVar4 - puVar5[0xc], iVar4 < 0 || ((int)puVar5[9] <= iVar4)))))) {
LAB_112a2f89:
          iVar4 = FUN_116812d0();
        }
        else {
          iVar1 = *(int *)(puVar5[8] + (iVar4 / (int)puVar5[10]) * 4);
          if ((iVar1 == 0) || (iVar4 = *(int *)(iVar1 + (iVar4 % (int)puVar5[10]) * 4), iVar4 == 0))
          goto LAB_112a2f89;
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(*(undefined4 *)(iVar3 + 0xc));
        FUN_113a3720(piVar6);
        iVar4 = (**(code **)(**(int **)(local_8 + 0xc) + 0x18))(iVar3);
        if (iVar4 != 0) {
          piVar6 = (int *)FUN_111e09f0();
          (**(code **)(*piVar6 + 0x1c))(*(undefined4 *)(iVar3 + 4),0);
          return;
        }
        local_c = *(undefined ***)(iVar3 + 0x18);
        if ((local_c != (undefined **)0x0) && (iVar3 = 0, 0 < *(int *)((int)piVar6 + 0x1a39))) {
          puVar5 = (undefined4 *)((int)piVar6 + 0x1a3d);
          do {
            (**(code **)(*local_c + 0x3c))(*puVar5);
            puVar5 = puVar5 + 2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)piVar6 + 0x1a39));
        }
        iVar3 = FUN_11442f40();
        param_1 = local_8;
        if (iVar3 != 0) {
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x10c))((int)piVar6 + 0x92,0xa22);
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x114))((int)piVar6 + 0xab5);
          param_1 = local_8;
        }
      }
    }
    piVar6 = (int *)((int)piVar6 + 0x42eb);
    local_14 = local_14 + 1;
    if (*param_4 <= local_14) {
      return;
    }
  } while( true );
}


// ===== FUN_1128e900@1128e900 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset */

void __fastcall FUN_1128e900(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  int iStack_a6d98;
  int aiStack_a6d94 [300];
  int aiStack_a68e4 [170552];
  
  memset(auStack_a6da6,0,0xa6d9c);
  piVar4 = *(int **)(param_1 + 0x849a8);
  iVar5 = 0;
  uStack_a6da8 = 0x216;
  if (piVar4 != (int *)(param_1 + 0x849a8)) {
    do {
      aiStack_a6d94[iVar5] = piVar4[2];
      aiStack_a68e4[iVar5] = piVar4[3];
      piVar1 = (int *)*piVar4;
      piVar2 = (int *)piVar4[1];
      iVar3 = *piVar4;
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      FUN_10c3d5d0(piVar4);
      iVar5 = iVar5 + 1;
      if (3 < iVar5) break;
      piVar4 = piVar1;
    } while (piVar1 != (int *)(param_1 + 0x849a8));
    if ((0 < iVar5) && (iStack_a6d98 = iVar5, *(int *)(param_1 + 0x849b0) != 0)) {
      FUN_11248e40(&uStack_a6da8);
    }
  }
  FUN_11a89daa();
  return;
}


// ===== FUN_111e09f0@111e09f0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_111e09f0(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x3c);
}


// ===== FUN_1140dd10@1140dd10 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1140dd10(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20);
  }
  return 0;
}


// ===== GetClientMessageChannel@111e0a50 =====

/* [RE-R1] */

void __fastcall GetClientMessageChannel(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x111e0a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x2c))();
  return;
}


// ===== StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton@102500e0 =====

/* [RE-R1]
   strings:
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

int __thiscall StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x14) = param_1 + 4;
  *(int *)(param_1 + 0x18) = param_1 + 4;
  **(undefined1 **)(param_1 + 0x14) = 0;
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_100d83d0(param_2,pcVar2);
  FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
  FUN_10250eb0();
  return param_1;
}


// ===== FUN_11a8911f@11a8911f =====

/* [RE-AUTO c0] */

int FUN_11a8911f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_11a89076(param_1);
  return (iVar1 != 0) - 1;
}


// ===== CInfoManager::FindByName@11679e10 =====

/* [RE-R1] */

undefined4 CInfoManager__FindByName(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_12387c6c == 0) {
    return 0;
  }
  uVar1 = FUN_1169e630(param_2,param_3);
  return uVar1;
}


// ===== CMonsterInfo::InitInfoManager@107e0630 =====

/* [RE-R1] */

undefined4 * __fastcall CMonsterInfo__InitInfoManager(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_11dc8ef0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}


// ===== FUN_116812d0@116812d0 =====

/* [RE-AUTO c0] */

undefined * FUN_116812d0(void)

{
  if ((DAT_123889c0 & 1) == 0) {
    DAT_123889c0 = DAT_123889c0 | 1;
    FUN_1167db60(0);
    FUN_11a8911f(&LAB_11ca7200);
  }
  return &DAT_12387f48;
}


// ===== FUN_113a3da0@113a3da0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_113a3da0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1250) = param_2;
  FUN_1142a050();
  return;
}


// ===== FUN_113a6f80@113a6f80 =====

/* [RE-AUTO c0]
   calls: ceil */

void __thiscall FUN_113a6f80(int param_1,int *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  undefined1 *puStack_d0;
  undefined1 **ppuStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 **ppuStack_c0;
  undefined1 **ppuStack_bc;
  int iStack_b8;
  undefined1 **ppuStack_b4;
  undefined1 **ppuStack_b0;
  undefined1 *puStack_ac;
  int local_9c;
  undefined8 local_98;
  int *local_90;
  undefined1 *local_8c;
  int local_88;
  undefined1 *local_84;
  undefined1 *local_80 [2];
  undefined1 local_78 [20];
  undefined1 *local_64;
  int local_60;
  undefined1 *local_58 [2];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 *local_30 [2];
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_90 = param_2;
  if (*(int *)(param_1 + 4) == 0) goto LAB_113a7e0a;
  puStack_ac = (undefined1 *)0x1;
  ppuStack_b0 = (undefined1 **)0x0;
  ppuStack_b4 = &local_84;
  local_84 = (undefined1 *)0x64;
  iStack_b8 = 0x113a6fbf;
  FUN_113ca2d0();
  ppuStack_c0 = &local_84;
  iStack_b8 = 0;
  ppuStack_bc = (undefined1 **)0x0;
  local_84 = (undefined1 *)0x64;
  uStack_c4 = 0x113a6fdc;
  FUN_113aa1b0();
  ppuStack_cc = &local_84;
  uStack_c4 = 0;
  uStack_c8 = 0;
  local_84 = (undefined1 *)0x3f800000;
  puStack_d0 = (undefined1 *)0x113a6ff9;
  FUN_113c81c0();
  puStack_d0 = (undefined1 *)0x0;
  local_84 = (undefined1 *)0x0;
  FUN_113c6f50(&local_84,0);
  local_84 = (undefined1 *)0x3f800000;
  FUN_113c4da0(&local_84,0,0);
  iVar6 = *(int *)(param_1 + 4);
  local_84 = (undefined1 *)0x1;
  FUN_113c4b30(&local_84,0,0);
  (**(code **)(**(int **)(iVar6 + 0x45c) + 0x1bc))(local_84);
  local_84 = (undefined1 *)0x1;
  local_88 = 0;
  FUN_113c80e0(&local_88,0,0);
  piVar7 = local_90;
  iVar6 = local_90[0x1e];
  if (iVar6 == 0) {
    puVar2 = (undefined1 *)0x1;
  }
  else {
    puVar2 = *(undefined1 **)(iVar6 + 0x30);
    local_84 = puVar2;
  }
  FUN_113a23b0(puVar2);
  puVar2 = (undefined1 *)FUN_11680c20();
  local_8c = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    puVar8 = local_84;
    FUN_113aa490();
    if (*(char *)(iVar6 + 0xe4) == '\0') {
      uVar3 = (**(code **)(*piVar7 + 0x15c))();
      uVar3 = (**(code **)(*piVar7 + 0x158))(uVar3,puVar8,puVar2);
      local_84 = (undefined1 *)FUN_116ae9f0(uVar3);
    }
    else {
      local_84 = (undefined1 *)piVar7[0x2f];
    }
    FUN_113c6d90(&local_84,0,0);
    cVar1 = FUN_113a32e0();
    if ((cVar1 != '\0') && (*(char *)(iVar6 + 0x104) != '\0')) {
      FUN_113bafb0(iVar6 + 0x114,0);
    }
    cVar1 = FUN_113a32e0();
    if ((cVar1 == '\0') && (*(char *)(iVar6 + 0x124) != '\0')) {
      FUN_113bafb0(iVar6 + 0x134,0);
    }
    iVar4 = CMHLevelModeInfo__GetModeConfigById(*(undefined4 *)(iVar6 + 0x20));
    iVar9 = 1;
    if (iVar4 != 0) {
      iVar9 = *(int *)(iVar4 + 0x110);
    }
    iVar4 = FUN_1025b060();
    puVar2 = (undefined1 *)FUN_113a9730(*(int *)(iVar6 + 0x30) + (iVar9 + iVar4 * 10) * 10);
    piVar7 = local_90;
    local_84 = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(*(int *)(param_1 + 4) + 0x40e0) = puVar2;
      cVar1 = FUN_113a32e0();
      piVar7 = local_90;
      if (cVar1 == '\0') {
        if (*(char *)(iVar6 + 0x124) != '\0') {
          local_98 = (double)CONCAT44((int)(*(float *)(puVar2 + 0x34) * *(float *)(puVar2 + 0x20) *
                                            *(float *)(local_8c + 0x30) *
                                            *(float *)(local_8c + 0x2c) * *(float *)(iVar6 + 300) *
                                           *(float *)(puVar2 + 0x2c)),(undefined4)local_98);
          FUN_113aa1b0((int)&local_98 + 4,0,0);
          local_84 = (undefined1 *)
                     (int)(*(float *)(puVar2 + 0x24) * *(float *)(local_8c + 0x34) *
                          *(float *)(iVar6 + 0x128));
          iVar9 = FUN_113a23b0();
          if (*(char *)(iVar9 + 0xa4e) != '\0') {
            local_84 = (undefined1 *)(int)(*(float *)(puVar2 + 0x40) * *(float *)(local_8c + 0x34));
          }
          FUN_113c8f50(&local_84,0,0);
          local_88 = (int)(*(float *)(puVar2 + 0x38) * *(float *)(local_8c + 0x34) *
                          *(float *)(iVar6 + 0x130));
          FUN_113cb7e0(&local_88,0,0);
          FUN_113c64d0(&local_88,0,0);
          FUN_113c6e70(&local_88,0,0);
          FUN_113c58b0(&local_88,0,0);
          FUN_113c6bd0(&local_88,0,0);
          FUN_113c4da0(puVar2 + 0x2c,0,0);
          goto LAB_113a7499;
        }
      }
      else if (*(char *)(iVar6 + 0x104) != '\0') {
        local_9c = (int)(*(float *)(local_84 + 0x28) * *(float *)(local_84 + 0x20) *
                         *(float *)(local_8c + 0x30) * *(float *)(local_8c + 0x2c) *
                         *(float *)(iVar6 + 0x10c) * *(float *)(puVar2 + 0x2c));
        FUN_113aa1b0(&local_9c,0,0);
        local_98 = (double)CONCAT44((int)(*(float *)(local_84 + 0x24) * *(float *)(local_8c + 0x34)
                                         * *(float *)(iVar6 + 0x108)),(undefined4)local_98);
        FUN_113c8f50((int)&local_98 + 4,0,0);
        local_88 = (int)(*(float *)(local_84 + 0x38) * *(float *)(local_8c + 0x34) *
                        *(float *)(iVar6 + 0x110));
        FUN_113cb7e0(&local_88,0,0);
        FUN_113c64d0(&local_88,0,0);
        FUN_113c6e70(&local_88,0,0);
        FUN_113c58b0(&local_88,0,0);
        FUN_113c6bd0(&local_88,0,0);
        FUN_113c4da0(puVar2 + 0x2c,0,0);
        puVar2 = local_84;
LAB_113a7499:
        FUN_113c9040(puVar2 + 0x30,0,0);
        piVar7 = local_90;
      }
    }
  }
  if (piVar7[0x2d] != 0) {
    FUN_113a23b0(*(undefined4 *)(piVar7[0x2d] + 0x3c));
    pfVar5 = (float *)FUN_11681240();
    local_84 = (undefined1 *)*pfVar5;
    local_98 = (double)(float)local_84 * DAT_11de99b8;
    dVar11 = ceil(local_98);
    iVar9 = (int)dVar11 + -100;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    local_98._0_4_ = SUB84(dVar11,0);
    local_98 = (double)CONCAT44(iVar9,(undefined4)local_98);
    if ((iVar6 != 0) &&
       (((cVar1 = FUN_113a32e0(), cVar1 != '\0' && (*(char *)(iVar6 + 0xe5) != '\0')) ||
        ((cVar1 = FUN_113a32e0(), cVar1 == '\0' && (*(char *)(iVar6 + 0xe6) != '\0')))))) {
      iVar9 = FUN_1025b060();
      local_9c = ((local_98._4_4_ + 100) * iVar9) / 100;
      FUN_113aa1b0(&local_9c,0,0);
    }
    FUN_113c81c0(&local_84,0,0);
    FUN_11429df0(piVar7);
  }
  if ((piVar7[0x2d] != 0) && (cVar1 = FUN_113a32e0(), cVar1 != '\0')) {
    FUN_113a23b0(*(undefined4 *)(piVar7[0x2d] + 0x3c));
    iVar9 = FUN_11681240();
    if (*(char *)(iVar6 + 0xe7) != '\0') {
      local_84 = (undefined1 *)
                 (int)(((*(float *)(iVar9 + 0x10) + *(float *)(iVar6 + 0xec)) - DAT_11de9918) *
                      DAT_11de9a30);
      FUN_113c9770(&local_84,5,0);
      FUN_113c9860(&local_84,5,0);
      FUN_113c9950(&local_84,5,0);
      FUN_113c9210(&local_84,5,0);
    }
    if (*(char *)(iVar6 + 0xe8) != '\0') {
      local_84 = (undefined1 *)
                 (int)(((*(float *)(iVar9 + 0x14) + *(float *)(iVar6 + 0xf0)) - DAT_11de9918) *
                      DAT_11de9a30);
      FUN_113c89d0(&local_84,5,0);
      FUN_113c8ac0(&local_84,5,0);
      FUN_113c8bb0(&local_84,5,0);
      FUN_113c82b0(&local_84,5,0);
    }
    if (*(char *)(iVar6 + 0xe9) != '\0') {
      local_84 = (undefined1 *)
                 (int)(((*(float *)(iVar9 + 0x18) + *(float *)(iVar6 + 0xf4)) - DAT_11de9918) *
                      DAT_11de9a30);
      FUN_113cab00(&local_84,5,0);
      FUN_113cabf0(&local_84,5,0);
      FUN_113cace0(&local_84,5,0);
      FUN_113ca5a0(&local_84,5,0);
    }
    if (*(char *)(iVar6 + 0xea) != '\0') {
      local_84 = (undefined1 *)
                 (int)(((*(float *)(iVar9 + 0x1c) + *(float *)(iVar6 + 0xf8)) - DAT_11de9918) *
                      DAT_11de9a30);
      FUN_113c55e0(&local_84,5,0);
      FUN_113c56d0(&local_84,5,0);
      FUN_113c57c0(&local_84,5,0);
      local_98 = (double)CONCAT44((float)(int)local_84,(undefined4)local_98);
      FUN_113c5150((int)&local_98 + 4,5,0);
    }
    if (*(char *)(iVar6 + 0xfc) != '\0') {
      local_84 = (undefined1 *)
                 (int)(((*(float *)(iVar9 + 0x24) + *(float *)(iVar6 + 0x100)) - DAT_11de9918) *
                      DAT_11de9a30);
      FUN_113c5e20(&local_84,5,0);
      FUN_113c5f10(&local_84,5,0);
      FUN_113c6010(&local_84,5,0);
      FUN_113c5a70(&local_84,4,0);
    }
  }
  iVar6 = FUN_113a23b0();
  FUN_113c94c0(iVar6 + 0x218,0,0);
  FUN_113c9770(iVar6 + 0x21c,0,0);
  FUN_113c9860(iVar6 + 0x220,0,0);
  FUN_113c9950(iVar6 + 0x224,0,0);
  FUN_113c9210(iVar6 + 0x228,0,0);
  FUN_113c9690(iVar6 + 0x238,0,0);
  FUN_113c93e0(iVar6 + 0x230,0,0);
  FUN_113c5250(iVar6 + 0x25c,0,0);
  FUN_113c55e0(iVar6 + 0x260,0,0);
  FUN_113c56d0(iVar6 + 0x264,0,0);
  FUN_113c57c0(iVar6 + 0x268,0,0);
  local_98 = (double)CONCAT44((float)*(int *)(iVar6 + 0x26c),(undefined4)local_98);
  FUN_113c5150((int)&local_98 + 4,0,0);
  FUN_113c5500(iVar6 + 0x278,0,0);
  FUN_113ca770(iVar6 + 0x27c,0,0);
  FUN_113cab00(iVar6 + 0x280,0,0);
  FUN_113cabf0(iVar6 + 0x284,0,0);
  FUN_113cace0(iVar6 + 0x288,0,0);
  FUN_113ca5a0(iVar6 + 0x28c,0,0);
  FUN_113caa20(iVar6 + 0x298,0,0);
  FUN_113c83a0(iVar6 + 0x23c,0,0);
  FUN_113c89d0(iVar6 + 0x240,0,0);
  FUN_113c8ac0(iVar6 + 0x244,0,0);
  FUN_113c8bb0(iVar6 + 0x248,0,0);
  FUN_113c82b0(iVar6 + 0x24c,0,0);
  FUN_113c8650(iVar6 + 600,0,0);
  FUN_113cb5b0(iVar6 + 0x2a8,0,0);
  FUN_113cb4d0(iVar6 + 0x2a0,0,0);
  FUN_113c88f0(iVar6 + 0x2b8,0,0);
  FUN_113c8810(iVar6 + 0x2b0,0,0);
  FUN_113c65b0(iVar6 + 0x2cc,0,0);
  FUN_113c6930(iVar6 + 0x2d8,0,0);
  FUN_113c6850(iVar6 + 0x2d0,0,0);
  FUN_113c6770(iVar6 + 0x2d4,0,0);
  FUN_113cadd0(iVar6 + 0x2dc,0,0);
  FUN_113cb150(iVar6 + 0x2e0,0,0);
  FUN_113cb070(iVar6 + 0x2e4,0,0);
  FUN_113c3070(iVar6 + 0x2f8,0,0);
  FUN_113c2e90(iVar6 + 0x2f4,0,0);
  FUN_113c2f80(iVar6 + 0x2fc,0,0);
  FUN_113c5d30(iVar6 + 0x300,0,0);
  FUN_113c5e20(iVar6 + 0x304,0,0);
  FUN_113c5f10(iVar6 + 0x308,0,0);
  FUN_113c6010(iVar6 + 0x30c,0,0);
  FUN_113c5a70(iVar6 + 0x310,0,0);
  FUN_113c5b70(iVar6 + 0x318,0,0);
  iVar6 = FUN_113a23b0();
  FUN_113c78e0(iVar6 + 0xd0,0,0);
  FUN_113c9a40(iVar6 + 0xd0,0,0);
  FUN_113c9b30(iVar6 + 0xd4,0,0);
  FUN_113c62e0(iVar6 + 0xa50,0,0);
  FUN_113c3150(iVar6 + 0xa54,0,0);
  FUN_113c61e0(iVar6 + 0xa58,0,0);
  FUN_113ca3c0(iVar6 + 0xa5c,0,0);
  FUN_113c9ef0(iVar6 + 0xa60,0,0);
  FUN_113c9ff0(iVar6 + 0xa64,0,0);
  if (local_8c != (undefined1 *)0x0) {
    puStack_ac = local_8c;
    ppuStack_b0 = (undefined1 **)0x113a7bd1;
    FUN_113a8810();
  }
  if (*(undefined1 **)(param_1 + 0xdd8) != (undefined1 *)0x0) {
    ppuStack_b0 = (undefined1 **)0x113a7be5;
    puStack_ac = *(undefined1 **)(param_1 + 0xdd8);
    iVar6 = FUN_113a23e0();
    local_9c = iVar6;
    if ((iVar6 != 0) &&
       (local_90 = (int *)0xffffffff,
       -4 < (int)(*(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24) & 0xfffffffcU))) {
      do {
        iVar9 = iVar6;
        if (local_90 != (int *)0xffffffff) {
          iVar9 = *(int *)(*(int *)(iVar6 + 0x24) + (int)local_90 * 4);
        }
        iVar4 = *(int *)(iVar9 + 0x14);
        if (iVar4 == 1) {
          puStack_ac = *(undefined1 **)(iVar9 + 0x18);
          ppuStack_b0 = local_80;
          ppuStack_b4 = (undefined1 **)0x113a7d7d;
          FUN_113bd970();
          fVar10 = *(float *)(iVar9 + 0x20) * *(float *)(param_1 + 0xddc);
          ppuStack_c0 = &puStack_d0;
                    /* WARNING: Ignoring partial resolution of indirect */
          puStack_d0._0_1_ = 0;
          if (local_60 == 2) {
            iStack_b8 = 2;
          }
          else {
            fVar10 = (float)(int)fVar10;
            iStack_b8 = 1;
          }
          ppuStack_bc = ppuStack_c0;
          FUN_113ba3f0(*(undefined4 *)(iVar9 + 0x18),5 - (uint)(*(int *)(iVar9 + 0x1c) != 0),fVar10)
          ;
          if ((local_64 != local_78) && (local_64 != (undefined1 *)0x0)) {
            puStack_ac = local_64;
            ppuStack_b0 = (undefined1 **)0x113a7de9;
            FUN_10c3d5d0();
          }
        }
        else if (iVar4 == 2) {
          local_84 = (undefined1 *)0x0;
          do {
            ppuStack_b0 = (undefined1 **)0x113a7c70;
            puStack_ac = local_84;
            iVar6 = FUN_11429ec0();
            local_98 = (double)CONCAT44(iVar6,(undefined4)local_98);
            if (iVar6 != 0) {
              puStack_ac = *(undefined1 **)(iVar9 + 0x18);
              ppuStack_b0 = (undefined1 **)0x113a7c88;
              piVar7 = (int *)FUN_11427bc0();
              if (piVar7 != (int *)0x0) {
                ppuStack_b4 = local_80;
                puStack_ac = (undefined1 *)0x0;
                ppuStack_b0 = *(undefined1 ***)(iVar9 + 0x18);
                iStack_b8 = 0x113a7ca6;
                FUN_11427ae0();
                puVar2 = (undefined1 *)(*(float *)(iVar9 + 0x20) * *(float *)(param_1 + 0xddc));
                if (local_60 == 2) {
                  local_40 = local_50;
                  local_50[0] = 0;
                  local_38 = 2;
                  iStack_b8 = 5 - (uint)(*(int *)(iVar9 + 0x1c) != 0);
                  ppuStack_bc = local_58;
                  ppuStack_c0 = *(undefined1 ***)(param_1 + 4);
                  uStack_c4 = 0x113a7d29;
                  local_58[0] = puVar2;
                  local_3c = local_40;
                  (**(code **)(*piVar7 + 8))();
                  puVar2 = local_50;
                  puVar8 = local_3c;
                }
                else {
                  local_30[0] = (undefined1 *)(int)(float)puVar2;
                  local_18 = local_28;
                  local_28[0] = 0;
                  local_10 = 1;
                  iStack_b8 = 5 - (uint)(*(int *)(iVar9 + 0x1c) != 0);
                  ppuStack_bc = local_30;
                  ppuStack_c0 = *(undefined1 ***)(param_1 + 4);
                  uStack_c4 = 0x113a7cef;
                  local_14 = local_18;
                  (**(code **)(*piVar7 + 8))();
                  puVar2 = local_28;
                  puVar8 = local_14;
                }
                if ((puVar8 != puVar2) && (puVar8 != (undefined1 *)0x0)) {
                  ppuStack_b0 = (undefined1 **)0x113a7d3d;
                  puStack_ac = puVar8;
                  FUN_10c3d5d0();
                }
                if ((local_64 != local_78) && (local_64 != (undefined1 *)0x0)) {
                  puStack_ac = local_64;
                  ppuStack_b0 = (undefined1 **)0x113a7d54;
                  FUN_10c3d5d0();
                }
              }
            }
            local_84 = local_84 + 1;
            iVar6 = local_9c;
          } while ((int)local_84 < 0xf);
        }
        else if ((iVar4 == 4) && (*(int *)(iVar9 + 0x18) != 0)) {
          puStack_ac = (undefined1 *)0x2e;
          ppuStack_b0 = (undefined1 **)0x1;
          ppuStack_b4 = (undefined1 **)0x0;
          ppuStack_bc = (undefined1 **)0x0;
          ppuStack_c0 = (undefined1 **)0x113a7c57;
          iStack_b8 = *(int *)(iVar9 + 0x18);
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))();
        }
        local_90 = (int *)((int)local_90 + 1);
      } while ((int)local_90 < *(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24) >> 2);
    }
  }
LAB_113a7e0a:
  FUN_11a89daa();
  return;
}


// ===== FUN_113a3720@113a3720 =====

/* [RE-AUTO c0] */

void __thiscall FUN_113a3720(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = param_2;
  param_1[0x496] = (int)*(short *)(param_2 + 4);
  switch(*(undefined2 *)(param_2 + 4)) {
  case 1:
LAB_113a3748:
    iVar3 = FUN_107d7df0(*(undefined4 *)(param_2 + 6));
    if (iVar3 == 0) {
      iVar3 = FUN_116812d0();
    }
    param_1[0x494] = iVar3;
    FUN_1142a050(iVar3);
    if (param_1[0x494] != 0) {
      FUN_116817f0();
    }
    (**(code **)(*param_1 + 0xac))(iVar6 + 0x12);
    iVar3 = param_1[0x494];
    if (iVar3 == 0) {
      iVar3 = FUN_116812d0();
    }
    iVar3 = *(int *)(iVar3 + 0x50);
    break;
  default:
    if (0 < *(int *)(param_2 + 6)) {
      param_1[0x496] = 1;
      goto LAB_113a3748;
    }
    if ((*(int *)(param_2 + 0xe) == 0) && (*(int *)(param_2 + 10) == 0)) {
      iVar3 = param_2 + 0x32;
      if (*(char *)(param_2 + 0x32) == '\0') {
        if (*(char *)(param_2 + 0x12) != '\0') {
          param_1[0x496] = 2;
        }
        uVar5 = FUN_116812d0();
        FUN_113a3da0(uVar5);
        (**(code **)(*param_1 + 0xac))(iVar6 + 0x12);
        (**(code **)(*param_1 + 0xb0))(iVar3);
      }
      else {
        param_1[0x496] = 3;
        iVar4 = FUN_116812d0();
        param_1[0x494] = iVar4;
        FUN_1142a050(iVar4);
        (**(code **)(*param_1 + 0xac))(iVar6 + 0x12);
        (**(code **)(*param_1 + 0xb0))(iVar3);
      }
      goto LAB_113a387e;
    }
    param_1[0x496] = 0;
  case 0:
  case 2:
  case 3:
    iVar3 = FUN_116812d0();
    param_1[0x494] = iVar3;
    FUN_1142a050(iVar3);
    (**(code **)(*param_1 + 0xac))(iVar6 + 0x12);
    iVar3 = iVar6 + 0x32;
  }
  (**(code **)(*param_1 + 0xb0))(iVar3);
LAB_113a387e:
  param_1[0x49a] = *(int *)(iVar6 + 10);
  param_1[0x49b] = *(int *)(iVar6 + 0xe);
  (**(code **)(*param_1 + 0xcc))(*(undefined4 *)(iVar6 + 0x42df),*(undefined4 *)(iVar6 + 0x42e3));
  uStack_10 = *(undefined4 *)(iVar6 + 0x62);
  uStack_c = *(undefined4 *)(iVar6 + 0x66);
  uStack_8 = *(undefined4 *)(iVar6 + 0x6a);
  (**(code **)(*param_1 + 0x20))(&uStack_10);
  local_14 = *(undefined4 *)(iVar6 + 0x52);
  uStack_10 = *(undefined4 *)(iVar6 + 0x56);
  uStack_c = *(undefined4 *)(iVar6 + 0x5a);
  uStack_8 = *(undefined4 *)(iVar6 + 0x5e);
  (**(code **)(*param_1 + 0x18))(&local_14);
  (**(code **)(*param_1 + 0x48))(*(undefined4 *)(iVar6 + 0x6e));
  pcVar1 = (char *)(iVar6 + 0x72);
  if (pcVar1 != (char *)0x0) {
    pcVar7 = pcVar1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_100d83d0(pcVar1,pcVar1 + ((int)pcVar7 - (iVar6 + 0x73)));
  }
  param_2 = CONCAT13(*(char *)(iVar6 + 0xab4) != '\0',(undefined3)param_2);
  FUN_113a9c40((int)&param_2 + 3,0,0);
  FUN_113a6ec0(iVar6 + 0xcf1,*(undefined2 *)(iVar6 + 0xcef));
  param_1[0x1033] = *(int *)(iVar6 + 0x42e7);
  (**(code **)(*(int *)param_1[4] + 4))(iVar6 + 0x1adf,(int)*(short *)(iVar6 + 0x1add));
  iVar6 = param_1[0x494];
  if (iVar6 == 0) {
    iVar6 = FUN_116812d0();
  }
  if (*(int *)(iVar6 + 0x20) != 1) {
    iVar6 = param_1[0x494];
    if (iVar6 == 0) {
      iVar6 = FUN_116812d0();
    }
    if (*(int *)(iVar6 + 0x20) != 6) {
      return;
    }
  }
  if (*(char *)(param_1[3] + 0x88) == '\0') {
    iVar6 = param_1[0x494];
    if (iVar6 == 0) {
      iVar6 = FUN_116812d0();
    }
    if (*(char *)(iVar6 + 0xa4) == '\0') {
      return;
    }
  }
  if (param_1[0x102d] != 0) {
    (*(code *)**(undefined4 **)param_1[0x102d])(param_1);
    *(undefined1 *)(param_1[0x102d] + 0x1c) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x2c);
}


// ===== FUN_11442f40@11442f40 =====

/* [RE-AUTO c0] */

void __fastcall FUN_11442f40(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x11442f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


// ===== FUN_1129f8b0@1129f8b0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1129f8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = FUN_11248970();
  if ((iVar2 != 0) && (iVar2 = FUN_11248970(), *(int *)(iVar2 + 0x90) != 0)) {
    iVar2 = FUN_11248970();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x90) + 0xb4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0xb4))();
      iVar2 = *(int *)(iVar2 + 4);
      goto LAB_1129f904;
    }
  }
  iVar2 = 0;
LAB_1129f904:
  if (iVar2 == *(int *)((int)param_4 + 0x42eb)) {
    iVar2 = param_1 + 8;
    piVar3 = (int *)FUN_111e09f0();
    local_20 = (**(code **)(*piVar3 + 0x14))(*param_4);
    if (local_20 == 0) {
      local_1c = *(int *)((int)param_4 + 0x42ef) == 1;
      local_18 = local_20;
      local_20 = FUN_111e0990();
      local_18 = *(undefined4 *)((int)param_4 + 0x42f3);
      piVar3 = (int *)FUN_111e09f0();
      local_44 = *param_4;
      local_38 = &local_20;
      local_3c = *(undefined4 *)(param_1 + 0xc);
      local_48 = 1;
      local_40 = 1;
      local_30 = 0;
      local_28 = 0xffffffff;
      piVar3 = (int *)(**(code **)(*piVar3 + 0xc))(&local_48);
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_107d7df0(*(undefined4 *)((int)param_4 + 6));
        if (iVar4 == 0) {
          iVar4 = FUN_116812d0();
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(piVar3[3]);
        FUN_113a3720(param_4);
        iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piVar3);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_111e09f0();
          (**(code **)(*piVar5 + 0x1c))(piVar3[1],0);
          return;
        }
        iVar4 = FUN_11442f40();
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x10c))((int)param_4 + 0x92,0xa22);
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x114))((int)param_4 + 0xab5);
        }
        iVar4 = piVar3[1];
        iVar6 = FUN_111e0990();
        *(int *)(iVar6 + 0x2d88) = iVar4;
        piVar5 = (int *)FUN_111e0990();
        (**(code **)(*piVar5 + 0x41c))();
        cVar1 = (**(code **)(*piVar3 + 0x1c4))();
        if (cVar1 != '\0') {
          if (piVar3 + -2 != (int *)0x0) {
            iVar2 = (**(code **)(piVar3[-2] + 0x14))();
          }
          local_8 = 1;
          local_c = iVar2;
          FUN_11290a20(&local_c);
          local_14 = *param_4;
          local_10 = 1;
          FUN_112908e0(&local_14);
        }
      }
    }
  }
  return;
}


// ===== FUN_11248970@11248970 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_11248970(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== FUN_111e0990@111e0990 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_111e0990(int *param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(*param_1 + 0x3c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x111e099b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(*param_1 + 0x3c) + 0x28))();
    return uVar1;
  }
  return 0;
}


// ===== FUN_107d7df0@107d7df0 =====

/* [RE-AUTO c0]
   calls: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo"" */

undefined4 FUN_107d7df0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8ee8;
  puVar2 = (undefined4 *)CMonsterInfo__GetInfoManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CMonsterInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bedd4 & 1) == 0) {
        DAT_123bedd4 = DAT_123bedd4 | 1;
        CMonsterInfo__InitInfoManager();
        FUN_11a8911f(&LAB_11c70e60);
      }
      puVar2 = &DAT_123bedd8;
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


// ===== FUN_11290a20@11290a20 =====

/* [RE-AUTO c0] */

undefined4 FUN_11290a20(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x1e3,param_1);
    return 1;
  }
  return 0;
}


// ===== FUN_112908e0@112908e0 =====

/* [RE-AUTO c0] */

undefined4 FUN_112908e0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x1e4,param_1);
    return 1;
  }
  return 0;
}


// ===== FUN_1142a050@1142a050 =====

/* [RE-AUTO c0]
   calls: memcpy, tolower */

void __thiscall FUN_1142a050(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  undefined1 local_58 [8];
  undefined4 local_50;
  int local_4c;
  void *local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  char local_20 [16];
  char *local_10;
  char *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_50 = param_2;
  local_4c = param_1;
  FUN_11681470();
  iVar4 = param_1 + 4;
  local_44 = 0;
  do {
    local_40 = iVar4;
    iVar1 = FUN_11680e40(local_44);
    if (iVar1 == 0) {
      FUN_11429920();
      local_40 = iVar4;
    }
    else {
      FUN_11428130(local_44,*(undefined4 *)(param_1 + 0x2df4),iVar1);
      iVar4 = FUN_100e1c50(*(undefined4 *)(iVar1 + 0xc));
      local_10 = local_20;
      local_48 = *(void **)(iVar4 + 0x10);
      pvVar2 = *(void **)(iVar4 + 0x14);
      sVar6 = (int)local_48 - (int)pvVar2;
      local_c = local_10;
      if (sVar6 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_100b73e0();
      }
      if (0x10 < sVar6 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(sVar6 + 1);
      }
      if (local_48 != pvVar2) {
        pvVar2 = memcpy(local_10,pvVar2,sVar6);
        local_10 = (char *)(sVar6 + (int)pvVar2);
      }
      *local_10 = '\0';
      iVar1 = 0;
      iVar4 = (int)local_10 - (int)local_c;
      if (local_10 < local_c) {
        iVar4 = 0;
      }
      pcVar5 = local_c;
      if (iVar4 != 0) {
        do {
          iVar3 = tolower((int)*pcVar5);
          iVar1 = iVar1 + 1;
          *pcVar5 = (char)iVar3;
          pcVar5 = pcVar5 + 1;
        } while (iVar1 != iVar4);
      }
      local_2c = local_3c;
      uVar7 = ((int)local_10 - (int)local_c) + 1;
      local_28 = local_2c;
      if ((int)local_10 - (int)local_c == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_100b73e0();
      }
      if (0x10 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(uVar7);
      }
      if (local_10 != local_c) {
        sVar6 = (int)local_10 - (int)local_c;
        pvVar2 = memcpy(local_2c,local_c,sVar6);
        local_2c = (undefined1 *)(sVar6 + (int)pvVar2);
      }
      param_1 = local_4c;
      *local_2c = 0;
      local_24 = local_44;
      FUN_1025e3f0(local_58,local_3c);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      if ((local_c != local_20) && (local_c != (char *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
    iVar4 = local_40 + 0x310;
    local_44 = local_44 + 1;
    if (0xe < local_44) {
      local_40 = iVar4;
      FUN_11a89daa();
      return;
    }
  } while( true );
}


// ===== FUN_116817f0@116817f0 =====

/* [RE-AUTO c0] */

bool __fastcall FUN_116817f0(int param_1)

{
  return *(int *)(param_1 + 0x14) == 0;
}


// ===== FUN_100d83d0@100d83d0 =====

/* [RE-AUTO c0] */

int __thiscall FUN_100d83d0(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint _Size;
  uint _Size_00;
  void *_Dst;
  
  _Size = param_3 - (int)param_2;
  pvVar1 = *(void **)(param_1 + 0x14);
  _Size_00 = *(int *)(param_1 + 0x10) - (int)pvVar1;
  if (_Size_00 < _Size) {
    if (_Size_00 != 0) {
      memcpy(pvVar1,param_2,_Size_00);
    }
    FUN_100d9260((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)) + (int)param_2,param_3);
  }
  else {
    if (_Size != 0) {
      memcpy(pvVar1,param_2,_Size);
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    _Dst = (void *)(*(int *)(param_1 + 0x14) + _Size);
    if (_Dst != pvVar1) {
      memmove(_Dst,pvVar1,1);
      *(int *)(param_1 + 0x10) = (int)_Dst + (*(int *)(param_1 + 0x10) - (int)pvVar1);
      return param_1;
    }
  }
  return param_1;
}


// ===== FUN_113a9c40@113a9c40 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000007 : 0x113a9c79 */
/* WARNING: Removing unreachable block (ram,0x113a9c75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0] */

void __thiscall FUN_113a9c40(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((*param_2 != '\0') && (*(char *)(param_1 + 0x702) == *(char *)(param_1 + 0x703))) {
    FUN_113c4cf0(param_2,param_3,param_4);
    (**(code **)(**(int **)(param_1 + 4) + 0x60))();
    local_18 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    local_24 = 0x517;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    local_14 = _DAT_11de9ca0;
    uStack_10 = _UNK_11de9ca4;
    uStack_c = _UNK_11de9ca8;
    uStack_8 = _UNK_11de9cac;
    FUN_11487a50(&local_24);
    return;
  }
  FUN_113c4cf0(param_2,param_3,param_4);
  return;
}


// ===== FUN_113a6ec0@113a6ec0 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_113a6ec0(int param_1,int param_2,short param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_38 [16];
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0xffffffff;
  }
  param_2 = 0;
  if (0 < param_3) {
    puVar3 = (undefined4 *)(iVar1 + 6);
    do {
      if (99 < param_2) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 4);
      if (*(short *)((int)puVar3 + -2) == 1) {
        uStack_20 = 0;
        puStack_24 = *(undefined1 **)((int)puVar3 + -6);
        puStack_28 = (undefined1 *)0x113a6f14;
        puStack_1c = puVar3;
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x14))();
      }
      else {
        iVar4 = 0;
        puVar2 = puVar3;
        do {
          puStack_28 = auStack_38;
          auStack_38[0] = 0;
          uStack_20 = 1;
          puStack_24 = puStack_28;
          (**(code **)(**(int **)(iVar1 + 0x20) + 4))
                    (*(undefined4 *)((int)puVar3 + -6),iVar4,*puVar2);
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 7);
      }
      param_2 = param_2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x22);
    } while (param_2 < param_3);
  }
  return 0;
}


// ===== FUN_10c3d580@10c3d580 =====

/* [RE-AUTO c0] */

undefined4 FUN_10c3d580(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_1202e864 == 0) {
    FUN_10c495f0();
  }
  uVar1 = (*DAT_1202e834)(param_1,&local_8);
  LOCK();
  DAT_1202e824 = DAT_1202e824 + local_8;
  UNLOCK();
  LOCK();
  DAT_1202e82c = DAT_1202e82c + param_1;
  UNLOCK();
  LOCK();
  DAT_1202e830 = DAT_1202e830 + 1;
  UNLOCK();
  return uVar1;
}

