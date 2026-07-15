/* ===== FUN_10c38390 @ 10c38390  size=1983 ===== */
// calls: CDamageInfo::GetManager, memset
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers, memset
   strings:
     ""CDamageInfo"" */

void FUN_10c38390(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                 float param_9)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_6d0 [720];
  undefined1 local_400 [236];
  float local_314;
  undefined1 local_2f8 [60];
  int local_2bc;
  undefined4 local_294;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_f0 [20];
  undefined1 local_dc [20];
  undefined1 local_c8 [20];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_a8;
  int *local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int *local_90;
  int *local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  int *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*param_1);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[1]);
  local_8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[0x4a]);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  local_2c = (**(code **)(**(int **)m_pThis_exref + 0x29c))(param_1[0x49]);
  piVar4 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
  local_1c = (**(code **)(*piVar4 + 0xc))(param_1[1]);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x288))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x288))();
  local_14 = 0;
  if (local_8 != (int *)0x0) {
    local_14 = (**(code **)(*local_8 + 0x288))();
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*piVar2 + 0xa8))();
  if (((iVar5 == 0) && (cVar1 = (**(code **)(*piVar2 + 0x180))(), cVar1 != '\0')) &&
     (param_1[3] == 0)) {
    return;
  }
  iVar5 = (**(code **)(*piVar2 + 0xa8))();
  if ((iVar5 == 1) && (iVar5 = FUN_113a2390(), iVar5 == 0xeae4)) {
    return;
  }
  if (((0 < (int)param_1[0x4c]) && (iVar5 = FUN_10b27fa0(param_1[0x4c]), iVar5 != 0)) &&
     (cVar1 = FUN_113f27f0(), cVar1 != '\0')) {
    return;
  }
  local_c = 0;
  if ((param_1[3] != 0) &&
     (piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[3]),
     piVar4 != (int *)0x0)) {
    local_c = (**(code **)(*piVar4 + 0x288))();
  }
  FUN_1142fe70(piVar3,local_14);
  local_8 = (int *)FUN_1142fd90();
  FUN_1142fe70(piVar2,local_c);
  local_10 = (int *)FUN_1142fc50();
  FUN_10c39770();
  FUN_10c38dd0(piVar2,param_1[0x57],piVar3,local_c,param_1[4],local_c8);
  iVar5 = (**(code **)(*piVar3 + 0xa8))();
  if ((iVar5 != 1) || (cVar1 = (**(code **)(*piVar3 + 0x180))(), cVar1 == '\0')) {
    local_78 = local_c8;
    local_84 = 0xc1e;
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_74 = 0;
    FUN_10c38d30(piVar2,&local_84);
    local_64 = local_c8;
    local_70 = 0xc1f;
    local_6c = 0xffffffff;
    local_68 = 0xffffffff;
    local_60 = 0;
    FUN_10c38d30(piVar3,&local_70);
    FUN_10c395c0(piVar3[1],param_1[0x12]);
    (**(code **)(*(int *)piVar2[7] + 0x14))(local_f0);
    FUN_10c395f0(piVar2[1],param_1[0x12]);
    (**(code **)(*(int *)piVar3[7] + 0x14))(local_dc);
  }
  local_14 = FUN_10c39260(param_1,local_10);
  iVar5 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if (((*(int *)(iVar5 + 0x30) == 0) && (*(int *)(iVar5 + 0x28) != 0)) &&
     (0 < *(int *)(iVar5 + 0x24))) {
    iVar7 = *(int *)(*(int *)(iVar5 + 0x20) + (int)(0 / (longlong)*(int *)(iVar5 + 0x28)) * 4);
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + (int)(0 % (longlong)*(int *)(iVar5 + 0x28)) * 4);
      goto LAB_10c38667;
    }
  }
  iVar5 = 0;
LAB_10c38667:
  if (local_14 == iVar5) {
    iVar5 = (**(code **)(*piVar3 + 0xa8))();
    if (((iVar5 == 0) && (local_1c != 0)) &&
       ((iVar5 = (**(code **)(*piVar2 + 0xa8))(), iVar5 == 1 &&
        ((local_2c != 0 && (cVar1 = FUN_10da6cf0(), cVar1 != '\0')))))) {
      FUN_11055cf0(local_1c,param_1[0x57],param_1[6]);
    }
    (**(code **)(*piVar2 + 0xa8))();
  }
  FUN_116e46c0();
  FUN_116e9f00(local_14);
  local_48 = local_6d0;
  local_5c = 0xc20;
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_50 = piVar2;
  local_4c = piVar3;
  FUN_10c38d30(piVar2,&local_5c);
  if (local_c != 0) {
    FUN_10c38d30(local_c,&local_5c);
  }
  local_88 = local_6d0;
  local_9c = 0xc21;
  local_98 = 0xffffffff;
  local_94 = 0xffffffff;
  local_90 = piVar2;
  local_8c = piVar3;
  FUN_10c38d30(piVar3,&local_9c);
  FUN_10c38ea0(local_6d0,piVar2,local_c,piVar3,param_1[0x12]);
  local_28 = param_1[0x1a];
  local_24 = param_1[0x1b];
  local_20 = param_1[0x1c];
  FUN_10c37f10(&local_28,param_2,param_3,param_4,param_5,param_6,param_7,local_14,local_10,local_8,
               piVar2,piVar3);
  memset(local_400,0,0x108);
  if (DAT_11de9a58 <= param_9) {
    local_314 = param_9;
  }
  else {
    fVar8 = (float10)(**(code **)(*local_8 + 0x50))();
    local_314 = (float)fVar8;
  }
  FUN_1142b1a0(local_2f8,local_10,local_8,local_6d0,param_1[0x12],param_1[0x57],&local_28,local_400)
  ;
  param_9 = 0.0;
  iVar5 = (**(code **)(*piVar3 + 0xa8))();
  if (((iVar5 == 0) && (param_9 = (float)(**(code **)(*local_8 + 0x40))(), param_9 == 1.4013e-45))
     && (0 < local_2bc)) {
    FUN_1139cdb0(0x1e);
  }
  FUN_10c393e0(param_1,local_2f8,local_400,piVar2,local_c,piVar3);
  iVar5 = (**(code **)(*piVar3 + 0xa8))();
  if (iVar5 == 0) {
    local_150 = local_28;
    local_14c = local_24;
    local_148 = local_20;
  }
  param_8[2] = local_20;
  local_144 = param_2;
  local_140 = param_3;
  local_13c = param_4;
  local_138 = param_5;
  local_134 = param_6;
  *param_8 = local_28;
  param_8[1] = local_24;
  local_130 = param_7;
  iVar5 = (**(code **)(*piVar2 + 0xa8))();
  if (iVar5 == 0) {
    FUN_1142bda0(local_400,piVar2);
  }
  else {
    FUN_1142bd90(local_400);
  }
  FUN_10c38f30(local_2f8,piVar2,local_c,piVar3,param_1[0x12]);
  piVar4 = (int *)piVar3[4];
  uVar6 = (**(code **)(*local_10 + 0x70))(local_2f8);
  (**(code **)(*piVar4 + 0x60))(uVar6);
  FUN_11430020();
  iVar5 = (**(code **)(*piVar2 + 0xa8))();
  if ((iVar5 == 0) && (iVar5 = (**(code **)(*piVar3 + 0xa8))(), iVar5 != 0)) {
    local_1d4 = FUN_10a12600();
    local_1d0 = local_1d4;
    local_1cc = local_1d4;
  }
  local_30 = local_2f8;
  local_44 = 0xc22;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = piVar2;
  local_34 = piVar3;
  FUN_10c38d30(piVar2,&local_44);
  iVar5 = local_c;
  if (local_c != 0) {
    FUN_10c38d30(local_c,&local_44);
  }
  local_a0 = local_2f8;
  local_b4 = 0xc23;
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  local_a8 = piVar2;
  local_a4 = piVar3;
  FUN_10c38d30(piVar3,&local_b4);
  iVar7 = (**(code **)(*piVar2 + 0xa8))();
  if (iVar7 == 0) {
    FUN_1142bdc0(local_2f8,piVar2);
  }
  else {
    FUN_1142bdb0(local_2f8);
  }
  (**(code **)(*local_18 + 0x338))
            (param_1,local_6d0,local_2f8,local_400,local_10,local_8,piVar2,piVar3,iVar5);
  (**(code **)(*local_18 + 0x33c))(local_6d0,piVar3);
  FUN_10c38d70(piVar2,piVar3,local_2f8);
  if (param_9 == 1.4013e-45) {
    FUN_1139c8d0(0x1e);
  }
  FUN_1142fe70(local_10);
  FUN_1142fe30();
  FUN_1142fe70(local_8);
  FUN_1142fe50();
  FUN_1142b0c0(param_1[0x48],local_294);
  FUN_10bb8690();
  FUN_116e4a10();
  return;
}



/* ===== FUN_10c39260 @ 10c39260  size=371 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

undefined1 * FUN_10c39260(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  char *pcStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_c = local_1c;
  puStack_2c = &DAT_11d9d32b;
  puStack_30 = &DAT_11d9d32b;
  puStack_34 = (undefined1 *)0x10c39283;
  local_8 = local_c;
  FUN_100b62c0();
  if (0 < *(int *)(param_1 + 0x15c)) {
    puStack_34 = (undefined1 *)0x10c3929b;
    cVar2 = (**(code **)(*param_2 + 0x10))();
    puStack_34 = *(undefined1 **)(param_1 + 0x15c);
    if (cVar2 == '\0') {
      pcStack_38 = (char *)0x10c392b1;
      iVar3 = FUN_116cd660();
    }
    else {
      pcStack_38 = (char *)0x10c392aa;
      iVar3 = FUN_10970c70();
    }
    if ((iVar3 != 0) && ((undefined1 *)(iVar3 + 0xfc) != local_1c)) {
      puStack_34 = *(undefined1 **)(iVar3 + 0x10c);
      pcStack_38 = *(char **)(iVar3 + 0x110);
      puStack_3c = (undefined1 *)0x10c392cf;
      FUN_100d83d0();
    }
  }
  puStack_34 = (undefined1 *)0x10c392d6;
  iVar3 = (**(code **)(*param_2 + 100))();
  pcStack_38 = local_1c;
  puStack_34 = &DAT_11d9d32b;
  puStack_3c = (undefined1 *)0x10c392e6;
  cVar2 = FUN_100fd0c0();
  if ((cVar2 != '\0') && (0 < iVar3)) {
    pcStack_38 = (undefined1 *)0x10c392f7;
    puStack_34 = (undefined1 *)iVar3;
    iVar3 = FUN_10540d00();
    if ((iVar3 != 0) && ((undefined1 *)(iVar3 + 0x14c) != local_1c)) {
      puStack_34 = *(undefined1 **)(iVar3 + 0x15c);
      pcStack_38 = *(char **)(iVar3 + 0x160);
      puStack_3c = (undefined1 *)0x10c39315;
      FUN_100d83d0();
    }
  }
  puStack_34 = (undefined1 *)0x10c3931e;
  cVar2 = (**(code **)(*param_2 + 8))();
  if (cVar2 == '\0') {
    puStack_34 = (undefined1 *)0x0;
    puStack_3c = auStack_4c;
    pcStack_38 = auStack_4c;
    FUN_100b62c0(local_8,local_c);
    puVar4 = (undefined1 *)FUN_116e50d0(*(undefined4 *)(param_1 + 0x18));
    if (puVar4 != (undefined1 *)0x0) goto LAB_10c393b3;
  }
  puStack_34 = (undefined1 *)0x10c39352;
  puStack_34 = (undefined1 *)(**(code **)(*param_2 + 0x5c))();
  puStack_3c = auStack_4c;
  pcStack_38 = auStack_4c;
  FUN_100b62c0(local_8,local_c);
  puVar4 = (undefined1 *)FUN_116e50d0(*(undefined4 *)(param_1 + 0x18));
  if (puVar4 == (undefined1 *)0x0) {
    pcStack_38 = "CDamageInfo";
    uStack_40 = 0x10c39386;
    puStack_3c = puVar4;
    puStack_34 = puVar4;
    iVar3 = CDamageInfo__GetManager();
    if (((*(int *)(iVar3 + 0x30) == 0) && (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
       (0 < *(int *)(iVar3 + 0x24))) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (int)(0 / (longlong)iVar1) * 4);
      if (iVar3 != 0) {
        puVar4 = *(undefined1 **)(iVar3 + (int)(0 % (longlong)iVar1) * 4);
        goto LAB_10c393b3;
      }
    }
    puVar4 = (undefined1 *)0x0;
  }
LAB_10c393b3:
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    puStack_34 = local_8;
    pcStack_38 = (char *)0x10c393c7;
    FUN_10c3d5d0();
  }
  return puVar4;
}



/* ===== FUN_10c65530 @ 10c65530  size=726 ===== */
// strings:
//   "params"
//   "rocket_firemode"
//   "value"
//   "radar_helper"
//   "barrel_helper"
//   "fire_helper"
//   "rocket_helper"
//   "turret"
//   "search"

/* [RE-AUTO c0]
   strings:
     ""params""
     ""rocket_firemode""
     ""value""
     ""radar_helper""
     ""barrel_helper""
     ""fire_helper""
     ""rocket_helper""
     ""turret""
     ""search"" */

undefined1 __thiscall FUN_10c65530(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  char *local_8;
  
  cVar1 = FUN_111047e0(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  local_8 = &DAT_1201fc98;
  (**(code **)(*param_2 + 0x58))("params");
  piVar2 = (int *)FUN_10ab25f0("rocket_firemode");
  pcVar6 = &DAT_1201fc98;
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*piVar2 + 0x28))("value");
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_1083ab70(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
      pcVar6 = local_8;
    }
  }
  piVar2 = (int *)FUN_10ab25f0("radar_helper");
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*piVar2 + 0x28))("value");
    if (pcVar3 != (char *)0x0) {
      local_8 = pcVar3 + 1;
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_1083ab70(pcVar3,(int)pcVar7 - (int)local_8);
    }
  }
  piVar2 = (int *)FUN_10ab25f0("barrel_helper");
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*piVar2 + 0x28))("value");
    if (pcVar3 != (char *)0x0) {
      local_8 = pcVar3 + 1;
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_1083ab70(pcVar3,(int)pcVar7 - (int)local_8);
    }
  }
  piVar2 = (int *)FUN_10ab25f0("fire_helper");
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*piVar2 + 0x28))("value");
    if (pcVar3 != (char *)0x0) {
      local_8 = pcVar3 + 1;
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_1083ab70(pcVar3,(int)pcVar7 - (int)local_8);
    }
  }
  piVar2 = (int *)FUN_10ab25f0("rocket_helper");
  if (piVar2 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*piVar2 + 0x28))("value");
    if (pcVar3 != (char *)0x0) {
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_1083ab70(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    }
  }
  puVar4 = (undefined8 *)FUN_10cdd560(local_14,3,*(undefined4 *)(param_1 + 0x5f0),0,0);
  *(undefined8 *)(param_1 + 0x600) = *puVar4;
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_10cdd560(local_20,1,*(undefined4 *)(param_1 + 0x5f4),0,0);
  *(undefined8 *)(param_1 + 0x60c) = *puVar4;
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_10cdd560(local_2c,1,*(undefined4 *)(param_1 + 0x5f8),0,0);
  *(undefined8 *)(param_1 + 0x618) = *puVar4;
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)FUN_10cdd560(local_38,1,*(undefined4 *)(param_1 + 0x5fc),0,0);
  *(undefined8 *)(param_1 + 0x624) = *puVar4;
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(puVar4 + 1);
  piVar2 = (int *)(**(code **)(*param_2 + 0x58))("turret");
  if (piVar2 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar2 + 0x58))("search");
    if (iVar5 != 0) {
      FUN_10c6b1b0(iVar5,1);
    }
    iVar5 = (**(code **)(*piVar2 + 0x58))(&DAT_11dd633c);
    if (iVar5 != 0) {
      FUN_10c6add0(iVar5,1);
    }
  }
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x34c) + 0x74))(pcVar6);
  *(int **)(param_1 + 0x574) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))(1);
  }
  piVar2 = (int *)(pcVar6 + -0xc);
  if (-1 < *piVar2) {
    iVar5 = FUN_10c3dad0(piVar2);
    if (iVar5 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar6 + -4));
      FUN_10c3d900(piVar2);
    }
  }
  return 1;
}



/* ===== FUN_10c6ef90 @ 10c6ef90  size=119 ===== */
// strings:
//   "OnHitDeathReactionInterrupted"

/* [RE-AUTO c0]
   strings:
     ""OnHitDeathReactionInterrupted"" */

void __fastcall FUN_10c6ef90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x54) == 1) || (*(int *)(param_1 + 0x54) == 0)) {
    iVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x4c) + 0x54))();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    }
    if (((*(char *)(DAT_1202e818 + 0x16c) != '\0') &&
        (cVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c4))(), cVar1 == '\0')) &&
       (iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2c) + 0xc) + 0x134))(), iVar3 != 0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x4c) + 0x4c))
                (0,0,"OnHitDeathReactionInterrupted",iVar3,iVar2);
    }
  }
  return;
}



/* ===== FUN_10cb3320 @ 10cb3320  size=1424 ===== */
// strings:
//   "activate"
//   "begin_reload"
//   "cannon"
//   "change_firemode"
//   "change_firemode_zoomed"
//   "crawl"
//   "deactivate"
//   "deselect"
//   "destroy"
//   "enter_modify"
//   "exit_reload_nopump"
//   "exit_reload_pump"
//   "idle_relaxed"
//   "idle_raised"
//   "jump_end"
//   "jump_idle"
//   "jump_start"
//   "leave_modify"
//   "left_item_attachment"
//   "lower"

/* [RE-AUTO c0]
   strings:
     ""activate""
     ""begin_reload""
     ""cannon""
     ""change_firemode""
     ""change_firemode_zoomed""
     ""crawl""
     ""deactivate""
     ""deselect""
     ""destroy""
     ""enter_modify"" */

undefined4 * __fastcall FUN_10cb3320(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  DAT_1202f450 = param_1;
  FUN_10ab4370("activate");
  FUN_10ab4370("begin_reload");
  FUN_10ab4370("cannon");
  FUN_10ab4370("change_firemode");
  FUN_10ab4370("change_firemode_zoomed");
  FUN_10ab4370("crawl");
  FUN_10ab4370("deactivate");
  FUN_10ab4370("deselect");
  FUN_10ab4370("destroy");
  FUN_10ab4370("enter_modify");
  FUN_10ab4370("exit_reload_nopump");
  FUN_10ab4370("exit_reload_pump");
  FUN_10ab4370(&DAT_11dd633c);
  FUN_10ab4370(&DAT_11cbe988);
  FUN_10ab4370("idle_relaxed");
  FUN_10ab4370("idle_raised");
  FUN_10ab4370("jump_end");
  FUN_10ab4370("jump_idle");
  FUN_10ab4370("jump_start");
  FUN_10ab4370("leave_modify");
  FUN_10ab4370("left_item_attachment");
  FUN_10ab4370(&DAT_11dd2124);
  FUN_10ab4370("lower");
  FUN_10ab4370("modify_layer");
  FUN_10ab4370(&DAT_11cdf3f0);
  FUN_10ab4370(&DAT_11cdbe6c);
  FUN_10ab4370("right");
  FUN_10ab4370("offhand_on");
  FUN_10ab4370("offhand_off");
  FUN_10ab4370("pickedup");
  FUN_10ab4370("pickup_weapon_left");
  FUN_10ab4370("raise");
  FUN_10ab4370("reload_shell");
  FUN_10ab4370("right_item_attachment");
  FUN_10ab4370("run_forward");
  FUN_10ab4370("SCARSleepAmmo");
  FUN_10ab4370("SCARTagAmmo");
  FUN_10ab4370("select");
  FUN_10ab4370("select_grenade");
  FUN_10ab4370("swim_idle");
  FUN_10ab4370("swim_forward");
  FUN_10ab4370("swim_forward_2");
  FUN_10ab4370("swim_backward");
  FUN_10ab4370("speed_swim");
  FUN_10ab4370("turret");
  FUN_10ab4370("enable_light");
  FUN_10ab4370("disable_light");
  FUN_10ab4370("use_light");
  FUN_10ab4370("first_select");
  FUN_10ab4370(&DAT_11cd4e7c);
  FUN_10ab4370("LAMRifle");
  FUN_10ab4370("LAMFlashLight");
  FUN_10ab4370("LAMRifleFlashLight");
  FUN_10ab4370("Silencer");
  FUN_10ab4370("SOCOMSilencer");
  FUN_10ab4370("nightvision_on");
  FUN_10ab4370("nightvision_off");
  FUN_10ab4370("zoom_in");
  FUN_10ab4370("zoom_out");
  FUN_10ab4370("lever_layer_1");
  FUN_10ab4370("lever_layer_2");
  return param_1;
}



/* ===== FUN_10cce380 @ 10cce380  size=773 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "attach"
//   "detach"
//   "action"
//   "layer"
//   "firemodes"
//   "switchToFireMode"
//   "zoommode"
//   "exclusive"
//   "client_only"
//   "params"

/* [RE-AUTO c0]
   strings:
     ""attach""
     ""detach""
     ""action""
     ""layer""
     ""firemodes""
     ""switchToFireMode""
     ""zoommode""
     ""exclusive""
     ""client_only""
     ""params"" */

undefined4 FUN_10cce380(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c [2];
  int local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 local_5;
  
  pcVar3 = (char *)(**(code **)(*param_1 + 0x28))(&DAT_11dbac80);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    return 0;
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x58))("attach");
  piVar5 = (int *)(**(code **)(*param_1 + 0x58))("detach");
  if ((piVar4 == (int *)0x0) || (piVar5 == (int *)0x0)) {
    return 0;
  }
  uVar6 = (**(code **)(*piVar4 + 0x28))("action");
  FUN_10ab4370(uVar6);
  uVar6 = (**(code **)(*piVar4 + 0x28))("helper");
  FUN_10ab4370(uVar6);
  uVar6 = (**(code **)(*piVar4 + 0x28))("layer");
  FUN_10ab4370(uVar6);
  uVar6 = (**(code **)(*piVar5 + 0x28))("action");
  FUN_10ab4370(uVar6);
  uVar6 = (**(code **)(*param_1 + 0x28))("firemodes");
  CInfoRecord__GetModelString(uVar6);
  local_1c[0] = 0;
  local_10 = &DAT_1201fc98;
  local_c = &DAT_1201fc98;
  uVar6 = FUN_10ac2de0(local_28,&DAT_11d9dc4c,local_1c);
  FUN_10a72410(uVar6);
  FUN_104f6f60();
  iVar1 = *(int *)(local_c + -8);
  puVar8 = local_c;
  do {
    local_c = puVar8;
    if (iVar1 == 0) {
      uVar6 = (**(code **)(*param_1 + 0x28))("switchToFireMode");
      FUN_10ab4370(uVar6);
      uVar6 = (**(code **)(*param_1 + 0x28))("zoommode");
      FUN_10ab4370(uVar6);
      local_20 = 0;
      (**(code **)(*param_1 + 0x18))("exclusive",&local_20);
      local_24 = 1;
      *(bool *)(param_2 + 0x28) = local_20 != 0;
      (**(code **)(*param_1 + 0x18))("client_only",&local_24);
      *(bool *)(param_2 + 0x29) = local_24 != 0;
      uVar6 = (**(code **)(*param_1 + 0x58))("params");
      *(undefined4 *)(param_2 + 0x24) = uVar6;
      FUN_104f6f60();
      FUN_104f6f60();
      FUN_104f6f60();
      return 1;
    }
    if (local_10 != puVar8) {
      if (*(int *)(local_10 + -0xc) < 0) {
        if (-1 < *(int *)(puVar8 + -0xc)) {
LAB_10cce4d4:
          puVar2 = local_c;
          local_10 = local_c;
          FUN_10c3dab0(puVar8 + -0xc);
          puVar8 = puVar2;
        }
      }
      else {
        if (-1 < *(int *)(puVar8 + -0xc)) {
          FUN_1083ac70();
          goto LAB_10cce4d4;
        }
        FUN_1083ac70();
        local_10 = local_c;
        puVar8 = local_c;
      }
    }
    FUN_10cd4500();
    FUN_10cd4490();
    local_14 = 0;
    FUN_10ab4370(local_10);
    iVar1 = local_14;
    piVar4 = *(int **)(param_2 + 0x1c);
    if (piVar4 == *(int **)(param_2 + 0x20)) {
      FUN_10cc3760(piVar4,&local_14,&local_5,1,1);
    }
    else {
      if (piVar4 != (int *)0x0) {
        if (local_14 != 0) {
          *(int *)(local_14 + -0xc) = *(int *)(local_14 + -0xc) + 1;
        }
        *piVar4 = local_14;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
    }
    FUN_10ab53d0(iVar1);
    piVar4 = (int *)FUN_10ac2de0(&local_2c,&DAT_11d9dc4c,local_1c);
    if (puVar8 != (undefined1 *)*piVar4) {
      if (*(int *)(puVar8 + -0xc) < 0) {
        if (-1 < *(int *)(*piVar4 + -0xc)) {
LAB_10cce580:
          local_c = (undefined1 *)*piVar4;
          FUN_10c3dab0(local_c + -0xc);
        }
      }
      else {
        if (-1 < *(int *)(*piVar4 + -0xc)) {
          FUN_1083ac70();
          goto LAB_10cce580;
        }
        FUN_1083ac70();
        local_c = (undefined1 *)*piVar4;
      }
    }
    iVar1 = local_2c;
    piVar4 = (int *)(local_2c + -0xc);
    if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar4);
    }
    iVar1 = *(int *)(local_c + -8);
    puVar8 = local_c;
  } while( true );
}



/* ===== FUN_10d53a60 @ 10d53a60  size=292 ===== */
// strings:
//   "GameOnHit"
//   "GameHit"

/* [RE-AUTO c0]
   strings:
     ""GameOnHit""
     ""GameHit"" */

void FUN_10d53a60(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x144))(param_1[1]);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*param_1);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
      local_18 = (**(code **)(*piVar3 + 0x18))("GameOnHit");
      local_14 = 0x4ffff;
      local_10 = 0;
      local_8 = 0;
      local_c = param_1;
      (**(code **)(*piVar1 + 0x24))(&local_18);
      piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x60))();
      local_2c = (**(code **)(*piVar1 + 0x18))("GameHit");
      local_28 = 0x4ffff;
      local_24 = 0;
      local_1c = 0;
      local_20 = param_1;
      (**(code **)(*piVar2 + 0x24))(&local_2c);
      FUN_10ba9b00();
      iVar4 = FUN_10c007c0(param_1[1]);
      if (iVar4 != 0) {
        FUN_10d53b90(param_1,*(undefined4 *)(param_2 + 0x58));
        FUN_10d53fe0(param_1,param_2 + 0xd8);
      }
    }
  }
  return;
}



/* ===== FUN_10d607a0 @ 10d607a0  size=2657 ===== */
// calls: libm_sse2_acos_precise
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

undefined4 __thiscall FUN_10d607a0(int param_1,int *param_2)

{
  float10 fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_214;
  uint uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  float local_1a4;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  uint local_138;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_d4;
  undefined4 local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  float *local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  uint local_30;
  undefined8 local_2c;
  float local_24;
  float *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_40 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
  piVar10 = param_2;
  iVar4 = (**(code **)(*param_2 + 0xa8))();
  if ((iVar4 != 2) || (piVar3 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar4 = (**(code **)(*piVar3 + 0x88))();
  iVar5 = (**(code **)(*piVar10 + 0x88))();
  if (iVar5 != iVar4) {
    return 0xffffffff;
  }
  FUN_113f2660();
  puVar6 = (undefined4 *)(**(code **)(*piVar10 + 0x28))();
  iVar4 = local_40;
  local_6c = *puVar6;
  local_68 = puVar6[1];
  local_64 = puVar6[2];
  cVar2 = FUN_10d60650(&local_6c,0,&param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  param_2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(piVar10[2]);
  FUN_10bb4150();
  iVar5 = FUN_113f25b0();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar5 = FUN_113f25b0();
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*(undefined4 *)(iVar5 + 8));
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  local_208 = (**(code **)(*piVar3 + 4))();
  local_204 = *(undefined4 *)(iVar4 + 8);
  local_1fc = (**(code **)(*param_2 + 4))();
  local_30 = 0;
  local_cc = 0;
  local_200 = 0;
  local_d4 = 0;
  local_2c = 0;
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0xd8))();
  local_4c = *puVar7;
  param_2 = *(int **)(puVar7 + 1);
  local_38._0_4_ = (float)local_4c;
  local_38._4_4_ = (float)((ulonglong)local_4c >> 0x20);
  local_8 = (float)((uint)local_38._4_4_ ^ DAT_11de9c90);
  local_24 = (float)((uint)(float)local_38 ^ DAT_11de9c90);
  local_20 = (float *)((uint)param_2 ^ DAT_11de9c90);
  local_bc = 0;
  local_c = 1.0;
  fVar14 = local_8 * local_8 + local_24 * local_24 + (float)local_20 * (float)local_20 +
           DAT_11de98a0;
  auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  local_c0 = auVar17._0_4_;
  local_c0 = (DAT_11de9938 - local_c0 * fVar14 * local_c0 * DAT_11de98e8) * local_c0;
  _local_c8 = CONCAT44(local_8 * local_c0,local_24 * local_c0);
  local_c0 = (float)local_20 * local_c0;
  local_17c = CONCAT44((int)local_2c,(int)local_2c);
  local_174 = 0x3f800000;
  local_38 = local_4c;
  local_30 = (uint)param_2;
  local_ac = (**(code **)(piVar10[0x28] + 4))();
  local_a8 = (**(code **)(*(int *)piVar10[3] + 0xb4))();
  local_b8 = 0;
  local_1f4 = 0;
  local_1f8 = 0;
  iVar8 = FUN_113f2660();
  iVar11 = *(int *)(iVar8 + 0x214) - *(int *)(iVar8 + 0x210);
  iVar5 = iVar11 >> 0x1f;
  if (iVar11 / 0x18 + iVar5 != iVar5) {
    local_1f0 = FUN_10b27fd0(*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14));
  }
  local_f4 = 0;
  local_f0 = 0;
  fVar15 = (float)local_2c;
  fVar14 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + fVar15;
  if (fVar14 <= DAT_11cbf070) {
    local_1a0 = DAT_1201fd04;
    local_198 = DAT_1201fd0c;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar16 = auVar17._0_4_;
    local_1a0._4_4_ = (float)((ulonglong)local_4c >> 0x20);
    fVar16 = (DAT_11de9938 - fVar16 * fVar14 * fVar16 * DAT_11de98e8) * fVar16;
    local_198 = fVar16 * fVar15;
    local_1a0 = CONCAT44(local_1a0._4_4_ * fVar16,(float)local_38 * fVar16);
  }
  fVar14 = local_8 * local_8 + local_24 * local_24 + (float)local_20 * (float)local_20;
  if (fVar14 <= DAT_11cbf070) {
    local_194 = DAT_1201fd04;
    local_18c = DAT_1201fd0c;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar16 = auVar17._0_4_;
    fVar16 = (DAT_11de9938 - fVar16 * fVar14 * fVar16 * DAT_11de98e8) * fVar16;
    local_18c = (float)local_20 * fVar16;
    local_194 = CONCAT44(local_8 * fVar16,local_24 * fVar16);
  }
  local_1b8 = CONCAT44(fVar15,fVar15);
  local_1b0 = 0;
  local_17c = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_c = 1.0;
  local_174 = 0x3f800000;
  local_1ec = local_1f0;
  pfVar9 = (float *)(**(code **)(**(int **)(iVar4 + 0xc) + 0xbc))();
  fVar14 = DAT_11de9918;
  if (*pfVar9 != (float)local_2c) {
    pfVar9 = (float *)(**(code **)(**(int **)(iVar4 + 0xc) + 0xbc))();
    fVar14 = DAT_11de9918 / *pfVar9;
  }
  piVar10 = *(int **)(iVar4 + 0xc);
  local_24 = fVar14;
  pfVar9 = (float *)(**(code **)(*piVar10 + 0xd0))(local_3c);
  puVar7 = (undefined8 *)(**(code **)(*piVar10 + 200))(&local_14);
  fVar14 = pfVar9[2];
  param_2 = (int *)pfVar9[3];
  local_88 = (float *)((uint)*pfVar9 ^ DAT_11de9c90);
  local_84 = (float)((uint)pfVar9[1] ^ DAT_11de9c90);
  local_80 = (float)((uint)fVar14 ^ DAT_11de9c90);
  local_214 = (uint)*puVar7;
  fVar22 = (float)(local_214 ^ DAT_11de9c90);
  uStack_210 = (uint)((ulonglong)*puVar7 >> 0x20);
  fVar20 = (float)(uStack_210 ^ DAT_11de9c90);
  fVar21 = (float)(*(uint *)(puVar7 + 1) ^ DAT_11de9c90);
  fVar19 = (fVar14 * fVar20 - pfVar9[1] * fVar21) + (float)param_2 * fVar22;
  fVar18 = (*pfVar9 * fVar21 - fVar14 * fVar22) + (float)param_2 * fVar20;
  fVar16 = (pfVar9[1] * fVar22 - *pfVar9 * fVar20) + (float)param_2 * fVar21;
  fVar15 = fVar14 * fVar18 - pfVar9[1] * fVar16;
  fVar14 = *pfVar9 * fVar16 - pfVar9[2] * fVar19;
  local_70 = pfVar9[1] * fVar19 - *pfVar9 * fVar18;
  local_78 = CONCAT44(fVar14 + fVar20 + fVar14,fVar22 + fVar15 + fVar15);
  local_70 = local_70 + fVar21 + local_70;
  local_7c = (float)param_2;
  local_20 = local_88;
  local_1c = local_80;
  local_c = local_70;
  local_8 = local_84;
  pfVar9 = (float *)FUN_10b26770(&local_14,&local_88,&local_1b8);
  local_1a4 = pfVar9[2] * local_24;
  local_1ac = CONCAT44(pfVar9[1] * local_24,*pfVar9 * local_24);
  fVar18 = (local_8 * local_18c - local_1c * local_194._4_4_) + (float)param_2 * (float)local_194;
  fVar16 = (local_1c * (float)local_194 - (float)local_20 * local_18c) +
           (float)param_2 * local_194._4_4_;
  fVar15 = ((float)local_20 * local_194._4_4_ - local_8 * (float)local_194) +
           (float)param_2 * local_18c;
  fVar14 = local_8 * fVar15 - local_1c * fVar16;
  fVar14 = (float)local_194 + fVar14 + fVar14;
  fVar15 = local_1c * fVar18 - (float)local_20 * fVar15;
  fVar15 = fVar15 + local_194._4_4_ + fVar15;
  local_180 = (float)local_20 * fVar16 - local_8 * fVar18;
  local_188 = CONCAT44(fVar15,fVar14);
  local_180 = local_180 + local_18c + local_180;
  fVar16 = (float)local_2c;
  local_1c = fVar14 - local_180 * fVar16;
  fVar19 = local_180 * fVar16 - fVar15;
  param_2 = (int *)(fVar15 * fVar16 - fVar14 * fVar16);
  fVar18 = fVar19 * fVar19 + local_1c * local_1c + (float)param_2 * (float)param_2;
  if (DAT_11cbf070 < fVar18) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar20 = auVar17._0_4_;
    fVar20 = (DAT_11de9938 - fVar20 * fVar18 * fVar20 * DAT_11de98e8) * fVar20;
    local_8 = fVar20 * fVar19;
    local_44 = fVar20 * local_1c;
    local_4c = CONCAT44(fVar20 * (float)param_2,(undefined4)local_4c);
    if (DAT_11cbf074 <= DAT_11de9918 / fVar20) {
      dVar13 = (double)(fVar14 * fVar16 + fVar15 * fVar16 + local_180);
      local_c = local_180;
      libm_sse2_acos_precise();
      local_1c = (float)((int)&local_2c + 4);
      local_20 = &local_24;
      param_2 = (int *)((float)dVar13 * DAT_11de98e8);
      fVar1 = (float10)fcos((float10)(float)param_2);
      fVar12 = (float10)fsin((float10)(float)param_2);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_2c._4_4_ = (float)fVar1;
      local_24 = (float)fVar12;
      local_18 = local_8 * local_24;
      local_14 = local_44 * local_24;
      local_10 = local_4c._4_4_ * local_24;
      local_c = local_2c._4_4_;
      FUN_10abc150(&local_18);
      local_c = (float)local_30;
      local_140 = local_38;
      goto LAB_10d6111a;
    }
  }
  local_c = 0.0;
  local_140 = CONCAT44(fVar16,fVar16);
LAB_10d6111a:
  local_138 = (uint)local_c;
  local_150 = 0x43fa0000;
  local_158 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_168 = 0x43fa0000;
  local_c = 500.0;
  local_144 = 0x43fa0000;
  local_170 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_14c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1c0 = 0xffffffff;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar10 = (int *)(**(code **)(*piVar10 + 0x60))();
  local_60 = (**(code **)(*piVar10 + 0x18))("GameOnHit");
  local_54 = &local_208;
  local_5c = 0x4ffff;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(**(int **)(local_40 + 4) + 0x24))(&local_60);
  return 0;
}



/* ===== FUN_10d7d4e0 @ 10d7d4e0  size=2392 ===== */
// calls: CProjectileExplosionInfo::FindInfoByKey
// strings:
//   "CProjectileExplosionInfo"
//   "g_EnableMonsterPartBasedAttack"
//   "ProjectileExplode"
//   "PrimitiveWorldIntersection(Game)"
//   "GameOnHit"

/* [RE-AUTO c0]
   strings:
     ""CProjectileExplosionInfo""
     ""g_EnableMonsterPartBasedAttack""
     ""ProjectileExplode""
     ""PrimitiveWorldIntersection(Game)""
     ""GameOnHit"" */

undefined4 __thiscall FUN_10d7d4e0(int param_1,float param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 local_19c [98];
  undefined2 local_13a;
  undefined1 local_138;
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [20];
  float local_d0;
  float local_c4;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  float local_a8;
  float local_a4 [7];
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((-1 < (int)param_2) &&
       (local_8 = param_1,
       iVar4 = CProjectileExplosionInfo__FindInfoByKey(0,"CProjectileExplosionInfo",0),
       param_2 != -NAN)) && ((param_2 != 0.0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
     (((iVar9 = *(int *)(iVar4 + 0x28), iVar9 != 0 &&
       (iVar13 = (int)param_2 - *(int *)(iVar4 + 0x30), -1 < iVar13)) &&
      (iVar13 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar13 / iVar9) * 4);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + (iVar13 % iVar9) * 4), iVar4 != 0)) {
      local_74 = *(int **)(iVar4 + 0x30);
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0;
      piVar7 = *(int **)(iVar4 + 0x2c);
      if (piVar7 != local_74) {
        do {
          param_2 = (float)piVar7[1];
          local_14 = piVar7;
          if (*(int **)(param_1 + 0xc) != (int *)0x0) {
            pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xc) + 0xbc))();
            param_2 = *pfVar5 * param_2;
          }
          if (*param_3 < 3) {
            puVar10 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0xc) + 200))(local_f0);
            local_2c = *puVar10;
            local_24 = *(float *)(puVar10 + 1);
          }
          else {
            local_2c = *(undefined8 *)(param_3 + 1);
            local_24 = (float)param_3[3];
            local_c4 = local_24;
          }
          if (*piVar7 == 0) {
            local_10 = 0;
            iVar4 = **(int **)(DAT_1202e818 + 0x50);
            uVar6 = FUN_10fff630();
            piVar7 = (int *)(**(code **)(iVar4 + 0x2c))(uVar6);
            if (piVar7 != (int *)0x0) {
              iVar4 = (**(code **)(*piVar7 + 0x16c))();
              if (iVar4 != 0) {
                local_a4[0] = (float)(**(code **)(*piVar7 + 0x16c))();
                local_10 = 1;
              }
              piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))(0);
              if ((piVar7 != (int *)0x0) &&
                 (piVar7 = (int *)(**(code **)(*piVar7 + 0x50))(), piVar7 != (int *)0x0)) {
                fVar8 = (float)(**(code **)(*piVar7 + 0x90))();
                local_a4[local_10] = fVar8;
                local_10 = local_10 + 1;
              }
            }
            FUN_10a706b0();
            local_13a = 0x100;
            local_138 = 1;
            local_c = 0xa10;
            piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0xc))(*(undefined4 *)(param_1 + 0x40));
            if (piVar7 != (int *)0x0) {
              cVar2 = (**(code **)(*piVar7 + 0x1c4))();
              if (((cVar2 == '\0') || (cVar2 = (**(code **)(*piVar7 + 0x1cc))(), cVar2 != '\0')) &&
                 (cVar2 = (**(code **)(*piVar7 + 0x1c8))(), cVar2 == '\0')) {
                if ((DAT_120309d4 & 1) == 0) {
                  DAT_120309d4 = DAT_120309d4 | 1;
                  DAT_120309d0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                                  ("g_EnableMonsterPartBasedAttack");
                }
                if (DAT_120309d0 != (int *)0x0) {
                  iVar4 = (**(code **)(*DAT_120309d0 + 8))();
                  local_c = 0xa18;
                  if (iVar4 != 0) goto LAB_10d7d77e;
                }
                local_c = 0xf10;
              }
              else {
                local_c = 0xa18;
              }
            }
LAB_10d7d77e:
            piVar7 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x194))();
            if ((piVar7 != (int *)0x0) && (0 < *(int *)(DAT_120286b8 + 0x8b4))) {
              (**(code **)(*piVar7 + 4))("ProjectileExplode",0);
              (**(code **)(*piVar7 + 8))
                        (&local_2c,param_2,0x3f800000,0x3f4ccccd,0x3f4ccccd,0x3f000000,0x3f000000);
            }
            iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
              local_70 = (float)local_2c;
              local_5c = local_2c._4_4_;
              local_60 = local_24;
              iVar9 = FUN_113f25b0();
              local_44 = *(float *)(iVar9 + 4);
              local_40 = local_70;
              local_3c = local_5c;
              local_38 = local_60;
              local_50 = 1.66755e-43;
              local_4c = 0xffffffffffffffff;
              local_34 = param_2;
              (**(code **)(**(int **)(*(int *)(iVar4 + 0xc) + 0x98) + 0x14))(&local_50);
            }
            local_ac = local_24;
            local_b4 = local_2c;
            local_a8 = param_2;
            local_a4[3] = 0.0;
            local_a4[4] = 0.0;
            local_a4[5] = 0.0;
            fVar14 = (float10)FUN_10a797c0(4,&local_b4,local_a4 + 3,0x11d,&local_30,0,0,0x4000,
                                           local_c,local_19c,0,0,local_a4,local_10,1,0,
                                           "PrimitiveWorldIntersection(Game)");
            local_10 = (int)fVar14;
            if ((local_30 != 0) && (0 < local_10)) {
              local_c = 0;
              do {
                piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                          (*(undefined4 *)(local_c + 0x3c + local_30));
                if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 == 2))
                {
                  piVar7 = (int *)(**(code **)(*piVar7 + 0x28))(2);
                  param_1 = local_8;
                  if (piVar7 != (int *)0x0) {
                    bVar3 = false;
                    fVar8 = local_20;
                    if (local_20 != local_1c) {
                      do {
                        iVar4 = (**(code **)(*piVar7 + 4))();
                        if (*(int *)((int)fVar8 + 4) == iVar4) {
                          bVar3 = true;
                          goto LAB_10d7d9b5;
                        }
                        fVar8 = (float)((int)fVar8 + 0x180);
                      } while (fVar8 != local_1c);
                      bVar3 = false;
                    }
LAB_10d7d9b5:
                    fVar8 = local_1c;
                    param_1 = local_8;
                    if (!bVar3) {
                      uVar6 = FUN_10bb4150();
                      uVar6 = FUN_10d863b0(fVar8,uVar6);
                      puVar10 = (undefined8 *)
                                (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_e4);
                      pfVar5 = (float *)(**(code **)(*piVar7 + 200))(local_fc);
                      param_1 = local_8;
                      uVar1 = *puVar10;
                      local_78 = *(undefined4 *)(puVar10 + 1);
                      local_80._0_4_ = (float)uVar1;
                      local_80._0_4_ = *pfVar5 - (float)local_80;
                      local_80._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      local_80._4_4_ = pfVar5[1] - local_80._4_4_;
                      fVar8 = local_80._4_4_ * local_80._4_4_ + (float)local_80 * (float)local_80 +
                              0.0;
                      if (fVar8 <= DAT_11cbf070) {
                        local_6c = DAT_1201fd04;
                        local_64 = DAT_1201fd0c;
                      }
                      else {
                        auVar15 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
                        fVar16 = auVar15._0_4_;
                        fVar16 = (DAT_11de9938 - fVar16 * fVar8 * fVar16 * DAT_11de98e8) * fVar16;
                        local_64 = fVar16 * 0.0;
                        local_6c = CONCAT44(local_80._4_4_ * fVar16,(float)local_80 * fVar16);
                      }
                      local_80 = uVar1;
                      FUN_10d7c730(uVar6,piVar7,local_14[10],local_30 + local_c + 8,&local_6c,
                                   *(undefined4 *)(local_c + 0x40 + local_30),0);
                    }
                  }
                }
                local_c = local_c + 0x78;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
          }
          else {
            local_b8 = local_24 + param_2;
            local_34 = 0.0;
            local_d0 = local_24 - param_2;
            local_38 = 0.0;
            local_3c = 0;
            local_40 = 0;
            local_4c = CONCAT44(local_2c._4_4_ + param_2,(float)local_2c + param_2);
            local_58 = CONCAT44(local_2c._4_4_ - param_2,(float)local_2c - param_2);
            local_50 = local_d0;
            local_44 = local_b8;
            (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x50))(&local_58);
            FUN_10ba9b00();
            param_2 = 0.0;
            if (0 < (int)local_34) {
              do {
                if (*(int *)((int)local_38 + (int)param_2 * 4) == 0) break;
                piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
                piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
                iVar4 = *piVar7;
                uVar6 = (**(code **)(**(int **)((int)local_38 + (int)param_2 * 4) + 4))();
                piVar7 = (int *)(**(code **)(iVar4 + 0xc))(uVar6);
                if (piVar7 == (int *)0x0) goto LAB_10d7dc94;
                param_1 = local_8;
                if ((int *)piVar7[3] != (int *)0x0) {
                  iVar4 = (**(code **)(*(int *)piVar7[3] + 0x288))();
                  param_1 = local_8;
                  if (iVar4 != 0) {
                    piVar11 = (int *)(**(code **)(**(int **)(local_8 + 0xc) + 0x288))();
                    cVar2 = (**(code **)(*piVar11 + 0x50))(iVar4);
                    param_1 = local_8;
                    if (cVar2 != '\0') {
                      if (*local_14 == 1) {
                        iVar4 = *piVar7;
                        uVar6 = (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_114);
                        cVar2 = (**(code **)(iVar4 + 0xcc))(uVar6);
                        param_1 = local_8;
                        if (cVar2 == '\0') goto LAB_10d7dd6e;
                      }
                      if (*local_14 == 2) {
                        iVar4 = *piVar7;
                        uVar6 = (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_108);
                        cVar2 = (**(code **)(iVar4 + 0xd0))(uVar6);
                        param_1 = local_8;
                        if (cVar2 == '\0') goto LAB_10d7dd6e;
                      }
LAB_10d7dc94:
                      fVar8 = local_1c;
                      uVar6 = FUN_10bb4150();
                      uVar6 = FUN_10d863b0(fVar8,uVar6);
                      pfVar5 = (float *)(**(code **)(**(int **)(local_8 + 0xc) + 0xb4))();
                      fVar8 = pfVar5[1];
                      fVar16 = pfVar5[3];
                      local_a4[6] = (*pfVar5 * fVar8 - pfVar5[2] * fVar16) * DAT_11de9990;
                      iVar4 = local_14[10];
                      local_84 = (fVar16 * *pfVar5 + pfVar5[2] * fVar8) * DAT_11de9990;
                      local_88 = (fVar16 * fVar16 + fVar8 * fVar8) * DAT_11de9990 - DAT_11de9918;
                      uVar12 = (**(code **)(**(int **)((int)local_38 + (int)param_2 * 4) + 0x94))
                                         (local_a4 + 6,0xffffffff,0);
                      param_1 = local_8;
                      FUN_10d7c730(uVar6,*(undefined4 *)((int)local_38 + (int)param_2 * 4),iVar4,
                                   uVar12);
                    }
                  }
                }
LAB_10d7dd6e:
                param_2 = (float)((int)param_2 + 1);
              } while ((int)param_2 < (int)local_34);
            }
          }
          fVar8 = local_20;
          if (local_20 != local_1c) {
            do {
              piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar7 = (int *)(**(code **)(*piVar7 + 0x60))();
              local_44 = (float)(**(code **)(*piVar7 + 0x18))("GameOnHit");
              local_40 = 0x4ffff;
              local_3c = 0;
              local_34 = 0.0;
              local_38 = fVar8;
              piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar7 = (int *)(**(code **)(*piVar7 + 0x144))(*(undefined4 *)((int)fVar8 + 4));
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0x24))(&local_44);
              }
              fVar8 = (float)((int)fVar8 + 0x180);
              param_1 = local_8;
            } while (fVar8 != local_1c);
          }
          piVar7 = local_14 + 0xb;
        } while (piVar7 != local_74);
        if (local_20 != 0.0) {
          local_14 = piVar7;
          FUN_10c3d5d0(local_20);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_10dc27f0 @ 10dc27f0  size=6659 ===== */
// calls: CInfoRecord::GetModelString, memcpy
// strings:
//   "Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NormalKnifeFlashEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_CritKnifeFlashEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_WeaponAwakeEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NCritKnifeFlashEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_metal.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_hide.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_bone.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_scale.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_stone.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_slippy.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_fur.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_wood.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell01.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell02.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell03.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell04.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_noblood.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect.xml"
//   "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_metal.xml"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NormalKnifeFlashEffect.xml""
     ""Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_CritKnifeFlashEffect.xml""
     ""Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_WeaponAwakeEffect.xml""
     ""Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NCritKnifeFlashEffect.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_metal.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_hide.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_bone.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_scale.xml""
     ""Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_stone.xml"" */

void __fastcall FUN_10dc27f0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  char **ppcVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_304 [52];
  int local_2d0;
  undefined1 local_2cc [56];
  int local_294;
  undefined4 local_290;
  undefined1 local_288 [12];
  undefined1 local_27c [8];
  int local_274 [9];
  int *piStack_250;
  int *piStack_24c;
  int local_248;
  int local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 *puStack_22c;
  undefined4 *puStack_228;
  int local_224;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 *puStack_214;
  undefined4 *puStack_210;
  int local_20c;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 *puStack_1fc;
  undefined4 *puStack_1f8;
  int local_1f4;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d4;
  int local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1bc;
  int local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 *puStack_19c;
  undefined4 *puStack_198;
  int local_194;
  undefined1 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 *puStack_184;
  undefined4 *puStack_180;
  int local_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 *puStack_16c;
  undefined4 *puStack_168;
  int local_164;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  int local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  int local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 *puStack_124;
  undefined4 *puStack_120;
  int local_11c;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  int local_104;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 *puStack_f4;
  undefined4 *puStack_f0;
  int local_ec;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  int local_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  int local_bc;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  int local_a4;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char **local_10;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 *local_8;
  
  puStack_ac = &local_b4;
  local_8 = &DAT_1201fc98;
  local_a4 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  puStack_a8 = puStack_ac;
  FUN_10c85fe0(10,puStack_ac);
  if (local_a4 != 0) {
    FUN_10c84dd0(uStack_b0);
    puStack_ac = &local_b4;
    uStack_b0 = 0;
    local_a4 = 0;
    puStack_a8 = puStack_ac;
  }
  puStack_124 = &local_12c;
  local_11c = 0;
  local_12c = 0;
  uStack_128 = 0;
  puStack_120 = puStack_124;
  FUN_10c85fe0(10,puStack_124);
  if (local_11c != 0) {
    FUN_10c84dd0(uStack_128);
    puStack_124 = &local_12c;
    uStack_128 = 0;
    local_11c = 0;
    puStack_120 = puStack_124;
  }
  puStack_10c = &local_114;
  local_104 = 0;
  local_114 = 0;
  uStack_110 = 0;
  puStack_108 = puStack_10c;
  FUN_10c85fe0(10,puStack_10c);
  if (local_104 != 0) {
    FUN_10c84dd0(uStack_110);
    puStack_10c = &local_114;
    uStack_110 = 0;
    local_104 = 0;
    puStack_108 = puStack_10c;
  }
  puStack_dc = &local_e4;
  local_d4 = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  puStack_d8 = puStack_dc;
  FUN_10c85fe0(10,puStack_dc);
  if (local_d4 != 0) {
    FUN_10c84dd0(uStack_e0);
    puStack_dc = &local_e4;
    uStack_e0 = 0;
    local_d4 = 0;
    puStack_d8 = puStack_dc;
  }
  puStack_f4 = &local_fc;
  local_ec = 0;
  local_fc = 0;
  uStack_f8 = 0;
  puStack_f0 = puStack_f4;
  FUN_10c85fe0(10,puStack_f4);
  if (local_ec != 0) {
    FUN_10c84dd0(uStack_f8);
    puStack_f4 = &local_fc;
    uStack_f8 = 0;
    local_ec = 0;
    puStack_f0 = puStack_f4;
  }
  puStack_c4 = &local_cc;
  local_bc = 0;
  local_cc = 0;
  uStack_c8 = 0;
  puStack_c0 = puStack_c4;
  FUN_10c85fe0(10,puStack_c4);
  if (local_bc != 0) {
    FUN_10c84dd0(uStack_c8);
    puStack_c4 = &local_cc;
    uStack_c8 = 0;
    local_bc = 0;
    puStack_c0 = puStack_c4;
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NormalKnifeFlashEffect.xml",
               0x50);
  FUN_10dc23d0(&local_8,param_1 + 0x18,0);
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_CritKnifeFlashEffect.xml",0x4e
              );
  FUN_10dc23d0(&local_8,param_1,0);
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_WeaponAwakeEffect.xml",0x4b);
  FUN_10dc23d0(&local_8,param_1 + 0xc,0);
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_NCritKnifeFlashEffect.xml",
               0x4f);
  FUN_10dc23d0(&local_8,param_1 + 0x24,0);
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_metal.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_hide.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_bone.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_scale.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_stone.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_slippy.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_fur.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_wood.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell01.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell02.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell03.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_shell04.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Blood/Monster_NormalBloodEffect_noblood.xml");
  local_274[4] = 0;
  local_274[5] = 0;
  local_274[6] = 0;
  FUN_10dcb6a0(0xe,local_274 + 4);
  iVar10 = local_274[4];
  local_10 = (char **)local_274[4];
  local_a = 0;
  FUN_10c83b90(local_274[5],local_274[4],0,&local_a);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  iVar10 = 0;
  puVar7 = local_2cc;
  do {
    local_20c = 0;
    puStack_214 = &local_21c;
    local_21c = 0;
    uStack_218 = 0;
    puStack_210 = puStack_214;
    FUN_10c85fe0(10,&local_21c);
    if (local_20c != 0) {
      FUN_10c84dd0(uStack_218);
    }
    FUN_10dc23d0(puVar7,*(int *)(param_1 + 0x48) + iVar10,0);
    iVar10 = iVar10 + 0xc;
    puVar7 = puVar7 + 4;
  } while (iVar10 < 0xa8);
  local_80 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x52);
  DAT_123be268 = DAT_123be268 + 0x52;
  *puVar5 = 1;
  local_80 = (char *)(puVar5 + 3);
  puVar5[1] = 0x45;
  puVar5[2] = 0x45;
  *(undefined1 *)((int)puVar5 + 0x51) = 0;
  if (local_80 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect.xml") {
    memcpy(local_80,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect.xml",0x45);
  }
  local_7c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x58);
  DAT_123be268 = DAT_123be268 + 0x58;
  *puVar5 = 1;
  local_7c = (char *)(puVar5 + 3);
  puVar5[1] = 0x4b;
  puVar5[2] = 0x4b;
  *(undefined1 *)((int)puVar5 + 0x57) = 0;
  if (local_7c != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_metal.xml") {
    memcpy(local_7c,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_metal.xml",
           0x4b);
  }
  local_78 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x57);
  DAT_123be268 = DAT_123be268 + 0x57;
  *puVar5 = 1;
  local_78 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4a;
  puVar5[2] = 0x4a;
  *(undefined1 *)((int)puVar5 + 0x56) = 0;
  if (local_78 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_hide.xml") {
    memcpy(local_78,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_hide.xml",
           0x4a);
  }
  local_74 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x57);
  DAT_123be268 = DAT_123be268 + 0x57;
  *puVar5 = 1;
  local_74 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4a;
  puVar5[2] = 0x4a;
  *(undefined1 *)((int)puVar5 + 0x56) = 0;
  if (local_74 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_bone.xml") {
    memcpy(local_74,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_bone.xml",
           0x4a);
  }
  local_70 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x58);
  DAT_123be268 = DAT_123be268 + 0x58;
  *puVar5 = 1;
  local_70 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4b;
  puVar5[2] = 0x4b;
  *(undefined1 *)((int)puVar5 + 0x57) = 0;
  if (local_70 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_scale.xml") {
    memcpy(local_70,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_scale.xml",
           0x4b);
  }
  local_6c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x58);
  DAT_123be268 = DAT_123be268 + 0x58;
  *puVar5 = 1;
  local_6c = (char *)(puVar5 + 3);
  puVar5[1] = 0x4b;
  puVar5[2] = 0x4b;
  *(undefined1 *)((int)puVar5 + 0x57) = 0;
  if (local_6c != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_stone.xml") {
    memcpy(local_6c,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_stone.xml",
           0x4b);
  }
  local_68 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x59);
  DAT_123be268 = DAT_123be268 + 0x59;
  *puVar5 = 1;
  local_68 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4c;
  puVar5[2] = 0x4c;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  if (local_68 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_slippy.xml") {
    memcpy(local_68,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_slippy.xml",
           0x4c);
  }
  local_64 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x56);
  DAT_123be268 = DAT_123be268 + 0x56;
  *puVar5 = 1;
  local_64 = (char *)(puVar5 + 3);
  puVar5[1] = 0x49;
  puVar5[2] = 0x49;
  *(undefined1 *)((int)puVar5 + 0x55) = 0;
  if (local_64 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_fur.xml") {
    memcpy(local_64,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_fur.xml",0x49
          );
  }
  local_60 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x57);
  DAT_123be268 = DAT_123be268 + 0x57;
  *puVar5 = 1;
  local_60 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4a;
  puVar5[2] = 0x4a;
  *(undefined1 *)((int)puVar5 + 0x56) = 0;
  if (local_60 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_wood.xml") {
    memcpy(local_60,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_wood.xml",
           0x4a);
  }
  local_5c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x5a);
  DAT_123be268 = DAT_123be268 + 0x5a;
  *puVar5 = 1;
  local_5c = (char *)(puVar5 + 3);
  puVar5[1] = 0x4d;
  puVar5[2] = 0x4d;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  if (local_5c != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell01.xml") {
    memcpy(local_5c,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell01.xml",
           0x4d);
  }
  local_58 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x5a);
  DAT_123be268 = DAT_123be268 + 0x5a;
  *puVar5 = 1;
  local_58 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4d;
  puVar5[2] = 0x4d;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  if (local_58 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell02.xml") {
    memcpy(local_58,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell02.xml",
           0x4d);
  }
  local_54 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x5a);
  DAT_123be268 = DAT_123be268 + 0x5a;
  *puVar5 = 1;
  local_54 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4d;
  puVar5[2] = 0x4d;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  if (local_54 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell03.xml") {
    memcpy(local_54,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell03.xml",
           0x4d);
  }
  local_50 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x5a);
  DAT_123be268 = DAT_123be268 + 0x5a;
  *puVar5 = 1;
  local_50 = (char *)(puVar5 + 3);
  puVar5[1] = 0x4d;
  puVar5[2] = 0x4d;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  if (local_50 != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell04.xml") {
    memcpy(local_50,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_shell04.xml",
           0x4d);
  }
  local_4c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x5a);
  DAT_123be268 = DAT_123be268 + 0x5a;
  *puVar5 = 1;
  local_4c = (char *)(puVar5 + 3);
  puVar5[1] = 0x4d;
  puVar5[2] = 0x4d;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  if (local_4c != "Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_noblood.xml") {
    memcpy(local_4c,"Libs/MaterialEffects/MonsterEffect/Blood/Monster_SkillBloodEffect_noblood.xml",
           0x4d);
  }
  local_274[1] = 0;
  local_274[2] = 0;
  local_274[3] = 0;
  FUN_10dcb6a0(0xe,local_274 + 1);
  iVar10 = local_274[1];
  local_9 = 0;
  FUN_10c83b90(local_274[2],local_274[1],0,&local_9);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  iVar10 = 0;
  ppcVar8 = &local_80;
  do {
    local_1b8 = 0;
    puStack_1c0 = &local_1c8;
    local_1c8 = 0;
    uStack_1c4 = 0;
    puStack_1bc = puStack_1c0;
    FUN_10c85fe0(10,&local_1c8);
    if (local_1b8 != 0) {
      FUN_10c84dd0(uStack_1c4);
    }
    FUN_10dc23d0(ppcVar8,*(int *)(param_1 + 0x54) + iVar10,0);
    iVar10 = iVar10 + 0xc;
    ppcVar8 = ppcVar8 + 1;
  } while (iVar10 < 0xa8);
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/PiyoAttack/Monster_PiyoAttackEffect.xml",0x4a);
  FUN_10dc23d0(&local_8,param_1 + 0x6c,0);
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/PiyoAttack/Monster_PiyoPlusAttackEffect.xml",0x4e
              );
  FUN_10dc23d0(&local_8,param_1 + 0x78,0);
  local_48 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x53);
  DAT_123be268 = DAT_123be268 + 0x53;
  *puVar5 = 1;
  local_48 = (char *)(puVar5 + 3);
  puVar5[1] = 0x46;
  puVar5[2] = 0x46;
  *(undefined1 *)((int)puVar5 + 0x52) = 0;
  if (local_48 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_flesh.xml") {
    memcpy(local_48,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_flesh.xml",0x46);
  }
  local_44 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x53);
  DAT_123be268 = DAT_123be268 + 0x53;
  *puVar5 = 1;
  local_44 = (char *)(puVar5 + 3);
  puVar5[1] = 0x46;
  puVar5[2] = 0x46;
  *(undefined1 *)((int)puVar5 + 0x52) = 0;
  if (local_44 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_metal.xml") {
    memcpy(local_44,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_metal.xml",0x46);
  }
  local_40 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x52);
  DAT_123be268 = DAT_123be268 + 0x52;
  *puVar5 = 1;
  local_40 = (char *)(puVar5 + 3);
  puVar5[1] = 0x45;
  puVar5[2] = 0x45;
  *(undefined1 *)((int)puVar5 + 0x51) = 0;
  if (local_40 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_hide.xml") {
    memcpy(local_40,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_hide.xml",0x45);
  }
  local_3c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x52);
  DAT_123be268 = DAT_123be268 + 0x52;
  *puVar5 = 1;
  local_3c = (char *)(puVar5 + 3);
  puVar5[1] = 0x45;
  puVar5[2] = 0x45;
  *(undefined1 *)((int)puVar5 + 0x51) = 0;
  if (local_3c != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_bone.xml") {
    memcpy(local_3c,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_bone.xml",0x45);
  }
  local_38 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x53);
  DAT_123be268 = DAT_123be268 + 0x53;
  *puVar5 = 1;
  local_38 = (char *)(puVar5 + 3);
  puVar5[1] = 0x46;
  puVar5[2] = 0x46;
  *(undefined1 *)((int)puVar5 + 0x52) = 0;
  if (local_38 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_scale.xml") {
    memcpy(local_38,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_scale.xml",0x46);
  }
  local_34 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x53);
  DAT_123be268 = DAT_123be268 + 0x53;
  *puVar5 = 1;
  local_34 = (char *)(puVar5 + 3);
  puVar5[1] = 0x46;
  puVar5[2] = 0x46;
  *(undefined1 *)((int)puVar5 + 0x52) = 0;
  if (local_34 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_stone.xml") {
    memcpy(local_34,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_stone.xml",0x46);
  }
  local_30 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x54);
  DAT_123be268 = DAT_123be268 + 0x54;
  *puVar5 = 1;
  local_30 = (char *)(puVar5 + 3);
  puVar5[1] = 0x47;
  puVar5[2] = 0x47;
  *(undefined1 *)((int)puVar5 + 0x53) = 0;
  if (local_30 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_slippy.xml") {
    memcpy(local_30,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_slippy.xml",0x47);
  }
  local_2c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x51);
  DAT_123be268 = DAT_123be268 + 0x51;
  *puVar5 = 1;
  local_2c = (char *)(puVar5 + 3);
  puVar5[1] = 0x44;
  puVar5[2] = 0x44;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  if (local_2c != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_fur.xml") {
    memcpy(local_2c,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_fur.xml",0x44);
  }
  local_28 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x52);
  DAT_123be268 = DAT_123be268 + 0x52;
  *puVar5 = 1;
  local_28 = (char *)(puVar5 + 3);
  puVar5[1] = 0x45;
  puVar5[2] = 0x45;
  *(undefined1 *)((int)puVar5 + 0x51) = 0;
  if (local_28 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_wood.xml") {
    memcpy(local_28,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_wood.xml",0x45);
  }
  local_24 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x55);
  DAT_123be268 = DAT_123be268 + 0x55;
  *puVar5 = 1;
  local_24 = (char *)(puVar5 + 3);
  puVar5[1] = 0x48;
  puVar5[2] = 0x48;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  if (local_24 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell01.xml") {
    memcpy(local_24,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell01.xml",0x48)
    ;
  }
  local_20 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x55);
  DAT_123be268 = DAT_123be268 + 0x55;
  *puVar5 = 1;
  local_20 = (char *)(puVar5 + 3);
  puVar5[1] = 0x48;
  puVar5[2] = 0x48;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  if (local_20 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell02.xml") {
    memcpy(local_20,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell02.xml",0x48)
    ;
  }
  local_1c = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x55);
  DAT_123be268 = DAT_123be268 + 0x55;
  *puVar5 = 1;
  local_1c = (char *)(puVar5 + 3);
  puVar5[1] = 0x48;
  puVar5[2] = 0x48;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  if (local_1c != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell03.xml") {
    memcpy(local_1c,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell03.xml",0x48)
    ;
  }
  local_18 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x55);
  DAT_123be268 = DAT_123be268 + 0x55;
  *puVar5 = 1;
  local_18 = (char *)(puVar5 + 3);
  puVar5[1] = 0x48;
  puVar5[2] = 0x48;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  if (local_18 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell04.xml") {
    memcpy(local_18,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_shell04.xml",0x48)
    ;
  }
  local_14 = &DAT_1201fc98;
  puVar5 = (undefined4 *)FUN_10c3d780(0x55);
  DAT_123be268 = DAT_123be268 + 0x55;
  *puVar5 = 1;
  local_14 = (char *)(puVar5 + 3);
  puVar5[1] = 0x48;
  puVar5[2] = 0x48;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  if (local_14 != "Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_noblood.xml") {
    memcpy(local_14,"Libs/MaterialEffects/MonsterEffect/Spark/Monster_SparkEffect_noblood.xml",0x48)
    ;
  }
  piVar9 = *(int **)(param_1 + 0x88);
  puVar2 = (uint *)(param_1 + 0x84);
  local_9c = 0;
  local_98 = 0;
  uVar4 = (int)((int)piVar9 - *puVar2) / 0xc;
  local_94 = 0;
  if (uVar4 < 0xf) {
    local_10 = (char **)(0xe - uVar4);
    if (local_10 != (char **)0x0) {
      if ((uint)((*(int *)(param_1 + 0x8c) - (int)piVar9) / 0xc) < local_10) {
        if ((&local_9c < (int *)*puVar2) || (piVar9 <= &local_9c)) {
          FUN_10dc9fc0(piVar9,&local_9c,&local_84,local_10,0);
        }
        else {
          FUN_10dc7690(&local_9c);
          FUN_10dc9fc0(piVar9,&local_294,&local_89,local_10,0);
          FUN_10c83b90(local_290,local_294,0,&local_82);
          if (local_294 != 0) {
            FUN_10c3d5d0(local_294);
          }
        }
      }
      else {
        FUN_10dc9680(piVar9,local_10,&local_9c,&local_87);
      }
    }
  }
  else if ((int *)(*puVar2 + 0xa8) != piVar9) {
    FUN_10dc9300((int *)(*puVar2 + 0xa8),piVar9,&local_86);
  }
  iVar10 = local_9c;
  FUN_10c83b90(local_98,local_9c,0,&local_83);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  local_10 = &local_48;
  iVar10 = 0;
  do {
    local_1d0 = 0;
    puStack_1d8 = &local_1e0;
    local_1e0 = 0;
    uStack_1dc = 0;
    puStack_1d4 = puStack_1d8;
    FUN_10c85fe0(10,&local_1e0);
    if (local_1d0 != 0) {
      FUN_10c84dd0(uStack_1dc);
    }
    FUN_10dc23d0(local_10,*puVar2 + iVar10,0);
    local_10 = local_10 + 1;
    iVar10 = iVar10 + 0xc;
  } while (iVar10 < 0xa8);
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/AttrDamage/Monster_AttrDamageEffect_normal.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/AttrDamage/Monster_AttrDamageEffect_lower.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/AttrDamage/Monster_AttrDamageEffect_higher.xml");
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  FUN_10dcb6a0(3,&local_1b0);
  iVar10 = local_1b0;
  FUN_10c83b90(local_1ac,local_1b0,0,&local_8e);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  iVar10 = 0;
  puVar7 = local_288;
  do {
    local_1f4 = 0;
    puStack_1fc = &local_204;
    local_204 = 0;
    uStack_200 = 0;
    puStack_1f8 = puStack_1fc;
    FUN_10c85fe0(10,&local_204);
    if (local_1f4 != 0) {
      FUN_10c84dd0(uStack_200);
    }
    FUN_10dc23d0(puVar7,*(int *)(param_1 + 0x90) + iVar10,0);
    iVar10 = iVar10 + 0xc;
    puVar7 = puVar7 + 4;
  } while (iVar10 < 0x24);
  CInfoRecord__GetModelString
            (
            "Libs/MaterialEffects/MonsterEffect/SpecialAttack/Monster_SpecialAttackEffect_normal.xml"
            );
  CInfoRecord__GetModelString
            (
            "Libs/MaterialEffects/MonsterEffect/SpecialAttack/Monster_SpecialAttackEffect_lower.xml"
            );
  CInfoRecord__GetModelString
            (
            "Libs/MaterialEffects/MonsterEffect/SpecialAttack/Monster_SpecialAttackEffect_higher.xml"
            );
  local_1ec = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  FUN_10dcb6a0(3,&local_1ec);
  iVar10 = local_1ec;
  FUN_10c83b90(local_1e8,local_1ec,0,&local_85);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  iVar10 = 0;
  puVar7 = local_27c;
  do {
    local_224 = 0;
    puStack_22c = &local_234;
    local_234 = 0;
    uStack_230 = 0;
    puStack_228 = puStack_22c;
    FUN_10c85fe0(10,&local_234);
    if (local_224 != 0) {
      FUN_10c84dd0(uStack_230);
    }
    FUN_10dc23d0(puVar7,*(int *)(param_1 + 0x9c) + iVar10,0);
    iVar10 = iVar10 + 0xc;
    puVar7 = puVar7 + 4;
  } while (iVar10 < 0x24);
  puStack_13c = &local_144;
  local_134 = 0;
  local_130 = local_8d;
  local_144 = 0;
  uStack_140 = 0;
  puStack_138 = puStack_13c;
  FUN_10dcb610(10,&local_144);
  if (local_134 != 0) {
    FUN_10dc9460(uStack_140);
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_KnifeFlashEffect_scale_base.xml"
               ,0x55);
  FUN_10dc23d0(&local_8,param_1 + 0x30,1);
  puStack_184 = &local_18c;
  local_17c = 0;
  local_178 = local_8b;
  local_18c = 0;
  uStack_188 = 0;
  puStack_180 = puStack_184;
  FUN_10dcb610(10,&local_18c);
  if (local_17c != 0) {
    FUN_10dc9460(uStack_188);
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/KnifeFlash/Monster_KnifeFlashEffect_scale_ext.xml"
               ,0x54);
  FUN_10dc23d0(&local_8,param_1 + 0x3c,1);
  puStack_154 = &local_15c;
  local_14c = 0;
  local_148 = local_88;
  local_15c = 0;
  uStack_158 = 0;
  puStack_150 = puStack_154;
  FUN_10dcb610(10,&local_15c);
  if (local_14c != 0) {
    FUN_10dc9460(uStack_158);
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/Blood/Monster_BloodEffect_scale_base.xml",0x4b);
  FUN_10dc23d0(&local_8,param_1 + 0x60,1);
  puStack_16c = &local_174;
  local_164 = 0;
  local_160 = local_8c;
  local_174 = 0;
  uStack_170 = 0;
  puStack_168 = puStack_16c;
  FUN_10dcb610(10,&local_174);
  if (local_164 != 0) {
    FUN_10dc9460(uStack_170);
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/Monster_Effect_TimeDelay.xml",0x3f);
  FUN_10dc23d0(&local_8,param_1 + 0xa8,1);
  CInfoRecord__GetModelString("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_metal.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_hide.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_bone.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_scale.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_stone.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_slippy.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_fur.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_wood.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_shell01.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_shell02.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_shell03.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_shell04.xml");
  CInfoRecord__GetModelString
            ("Libs/MaterialEffects/MonsterEffect/Audio/WeaponHitSoundEffect_noblood.xml");
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  FUN_10dcb6a0(0xe,&local_240);
  iVar10 = local_240;
  FUN_10c83b90(local_23c,local_240,0,&local_8a);
  if (iVar10 != 0) {
    FUN_10c3d5d0(iVar10);
  }
  iVar10 = 0;
  puVar7 = local_304;
  do {
    piStack_250 = local_274 + 7;
    local_248 = 0;
    local_274[7] = 0;
    local_274[8] = 0;
    piStack_24c = piStack_250;
    FUN_10c85fe0(10,piStack_250);
    if (local_248 != 0) {
      FUN_10c84dd0(local_274[8]);
    }
    FUN_10dc23d0(puVar7,*(int *)(param_1 + 0xb4) + iVar10,0);
    iVar10 = iVar10 + 0xc;
    puVar7 = puVar7 + 4;
  } while (iVar10 < 0xa8);
  puStack_19c = &local_1a4;
  local_194 = 0;
  local_190 = local_81;
  local_1a4 = 0;
  uStack_1a0 = 0;
  puStack_198 = puStack_19c;
  FUN_10dcb610(10,&local_1a4);
  if (local_194 != 0) {
    FUN_10dc9460(uStack_1a0);
  }
  FUN_1083ab70("Libs/MaterialEffects/MonsterEffect/Monster_Effect_Scale.xml",0x3b);
  FUN_10dc23d0(&local_8,param_1 + 0xc0,1);
  FUN_1083ab70("Libs/MerchantWeaponEffect.xml",0x1d);
  FUN_10dc4440(&local_8);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  puVar7 = local_2cc;
  iVar10 = 0xd;
  do {
    iVar3 = *(int *)(puVar7 + -4);
    puVar7 = puVar7 + -4;
    piVar9 = (int *)(iVar3 + -0xc);
    if (-1 < *piVar9) {
      iVar6 = FUN_10c3dad0(piVar9);
      if (iVar6 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
        FUN_10c3d900(piVar9);
      }
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  piVar9 = local_274 + 1;
  iVar10 = 2;
  do {
    piVar1 = piVar9 + 0xffffffff;
    piVar9 = piVar9 + 0xffffffff;
    FUN_104f6f10(*piVar1 + -0xc);
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  FUN_10100b00(local_288,4,3,FUN_104f6f60);
  FUN_10100b00(&local_48,4,0xe,FUN_104f6f60);
  FUN_10100b00(&local_80,4,0xe,FUN_104f6f60);
  FUN_10100b00(local_2cc,4,0xe,FUN_104f6f60);
  FUN_104f6f60();
  return;
}



/* ===== FUN_10ddeef0 @ 10ddeef0  size=566 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"

/* WARNING: Removing unreachable block (ram,0x10ddf10f) */
/* [RE-AUTO c0]
   strings:
     ""Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml"" */

void __thiscall FUN_10ddeef0(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  byte local_214 [512];
  undefined4 *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  if (param_2 != 0) {
    piVar4 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x6c))();
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar4 + 0xa8))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(param_2);
      if (piVar4 != (int *)0x0) {
        local_214[0] = 0;
        if ((DAT_1202e170 & 1) == 0) {
          DAT_1202e170 = DAT_1202e170 | 1;
          DAT_1202e16c = &DAT_1202e168;
        }
        puVar14 = DAT_1202e16c;
        local_c = 0;
        local_14 = DAT_1202e16c;
        local_10 = piVar4;
        iVar5 = (**(code **)(*piVar4 + 4))();
        if (iVar5 != 0) {
          uVar13 = 0;
          do {
            FUN_10a92310("Scripts/Entities/Items/XML/Weapons/",0x23);
            pcVar6 = (char *)(**(code **)(*piVar4 + 8))(uVar13);
            if (pcVar6 == (char *)0x0) {
              iVar5 = 0;
            }
            else {
              pcVar11 = pcVar6;
              do {
                cVar2 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar2 != '\0');
              iVar5 = (int)pcVar11 - (int)(pcVar6 + 1);
            }
            FUN_10ae0250(pcVar6,iVar5);
            FUN_10ae0250("_firemode.xml",0xd);
            iVar5 = 0;
            puVar14 = *(undefined4 **)(param_1 + 0x50);
            puVar1 = puVar14 + -1;
            if ((*puVar1 & 0x7fffffff) != 0) {
              do {
                pbVar12 = (byte *)*puVar14;
                pbVar7 = local_214;
                do {
                  bVar3 = *pbVar12;
                  bVar15 = bVar3 < *pbVar7;
                  if (bVar3 != *pbVar7) {
LAB_10ddf052:
                    uVar13 = -(uint)bVar15 | 1;
                    goto LAB_10ddf057;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar12[1];
                  bVar15 = bVar3 < pbVar7[1];
                  if (bVar3 != pbVar7[1]) goto LAB_10ddf052;
                  pbVar12 = pbVar12 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar3 != 0);
                uVar13 = 0;
LAB_10ddf057:
                if (uVar13 == 0) goto LAB_10ddf0ca;
                iVar5 = iVar5 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar5 < (int)(*puVar1 & 0x7fffffff));
            }
            CInfoRecord__GetModelString(local_214);
            iVar5 = *(int *)(param_1 + 0x50);
            uVar8 = FUN_10bedf30(iVar5 + *(int *)(iVar5 + -4) * 4,1);
            FUN_10bee250(uVar8,1,&local_8);
            iVar5 = local_8;
            piVar4 = (int *)(local_8 + -0xc);
            if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar5 + -4));
              FUN_10c3d900(piVar4);
            }
LAB_10ddf0ca:
            piVar4 = local_10;
            uVar13 = local_c + 1;
            local_c = uVar13;
            uVar10 = (**(code **)(*local_10 + 4))();
            puVar14 = local_14;
          } while (uVar13 < uVar10);
        }
        (**(code **)*piVar4)(1);
        if (puVar14[-1] != 0) {
          FUN_10c3d900(puVar14 + -1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10e10460 @ 10e10460  size=1390 ===== */
// strings:
//   "Enable"
//   "Disable"
//   "OnWeaponChange"
//   "OnFiremodeChange"
//   "OnShoot"
//   "OnZoom"
//   "OnReloaded"
//   "OnOutOfAmmo"
//   "OnStartFire"
//   "OnStopFire"
//   "WeaponId"
//   "WeaponName"
//   "IsMelee"
//   "AmmoType"
//   "MaxAmmo"
//   "AmmoPool"
//   "Spread"
//   "Zoomed"
//   "ZoomMode"
//   "ZoomName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""OnWeaponChange""
     ""OnFiremodeChange""
     ""OnShoot""
     ""OnZoom""
     ""OnReloaded""
     ""OnOutOfAmmo""
     ""OnStartFire""
     ""OnStopFire"" */

void FUN_10e10460(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_12031a58 & 1) == 0) {
    DAT_12031a58 = DAT_12031a58 | 1;
    _DAT_120319f8 = &DAT_11ced080;
    _DAT_120319fc = 0;
    _DAT_12031a00 = &DAT_11d9d32b;
    _DAT_12031a04 = 0;
    _DAT_12031a08 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12031a0c,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    _DAT_12031a10 = "Enable";
    _DAT_12031a14 = 0;
    _DAT_12031a18 = &DAT_11d9d32b;
    _DAT_12031a1c = 0;
    _DAT_12031a20 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12031a24,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    _DAT_12031a28 = "Disable";
    _DAT_12031a2c = 0;
    _DAT_12031a30 = &DAT_11d9d32b;
    _DAT_12031a34 = 0;
    DAT_12031a38 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12031a3c,auStack_8);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_12031a50 = &DAT_11df7728;
    _DAT_12031a40 = 0;
    uRam12031a44 = 0;
    uRam12031a48 = 0;
    uRam12031a4c = 0;
    FUN_11a8911f(&LAB_11c8b410);
  }
  if ((DAT_12031a58 & 2) == 0) {
    DAT_12031a58 = DAT_12031a58 | 2;
    _DAT_12031a60 = "OnWeaponChange";
    uRam12031a64 = 0;
    _DAT_12031a68 = &DAT_11d9d32b;
    uRam12031a6c = 0;
    _DAT_12031a70 = "OnFiremodeChange";
    uRam12031a74 = 0;
    puRam12031a78 = &DAT_11d9d32b;
    uRam12031a7c = 0;
    _DAT_12031a80 = "OnShoot";
    uRam12031a84 = 0;
    puRam12031a88 = &DAT_11d9d32b;
    uRam12031a8c = 0;
    _DAT_12031a90 = "OnZoom";
    uRam12031a94 = 0;
    puRam12031a98 = &DAT_11d9d32b;
    uRam12031a9c = 0;
    _DAT_12031aa0 = "OnReloaded";
    uRam12031aa4 = 0;
    puRam12031aa8 = &DAT_11d9d32b;
    uRam12031aac = 0;
    _DAT_12031ab0 = "OnOutOfAmmo";
    uRam12031ab4 = 0;
    puRam12031ab8 = &DAT_11d9d32b;
    uRam12031abc = 0;
    _DAT_12031ac0 = "OnStartFire";
    uRam12031ac4 = 0;
    puRam12031ac8 = &DAT_11d9d32b;
    uRam12031acc = 0;
    _DAT_12031ad0 = "OnStopFire";
    uRam12031ad4 = 0;
    puRam12031ad8 = &DAT_11d9d32b;
    uRam12031adc = 0;
    _DAT_12031ae0 = "WeaponId";
    uRam12031ae4 = 0;
    puRam12031ae8 = &DAT_11d9d32b;
    uRam12031aec = 3;
    _DAT_12031af0 = "WeaponName";
    uRam12031af4 = 0;
    puRam12031af8 = &DAT_11d9d32b;
    uRam12031afc = 5;
    _DAT_12031b00 = "IsMelee";
    uRam12031b04 = 0;
    puRam12031b08 = &DAT_11d9d32b;
    uRam12031b0c = 6;
    _DAT_12031b10 = &DAT_11ddfa14;
    uRam12031b14 = 0;
    puRam12031b18 = &DAT_11d9d32b;
    uRam12031b1c = 1;
    _DAT_12031b20 = "AmmoType";
    uRam12031b24 = 0;
    puRam12031b28 = &DAT_11d9d32b;
    uRam12031b2c = 1;
    _DAT_12031b30 = "AmmoName";
    uRam12031b34 = 0;
    puRam12031b38 = &DAT_11d9d32b;
    uRam12031b3c = 5;
    _DAT_12031b40 = "MaxAmmo";
    uRam12031b44 = 0;
    puRam12031b48 = &DAT_11d9d32b;
    uRam12031b4c = 1;
    _DAT_12031b50 = "AmmoPool";
    uRam12031b54 = 0;
    puRam12031b58 = &DAT_11d9d32b;
    uRam12031b5c = 1;
    _DAT_12031b60 = "Spread";
    uRam12031b64 = 0;
    puRam12031b68 = &DAT_11d9d32b;
    uRam12031b6c = 2;
    _DAT_12031b70 = "Zoomed";
    uRam12031b74 = 0;
    puRam12031b78 = &DAT_11d9d32b;
    uRam12031b7c = 6;
    _DAT_12031b80 = "ZoomMode";
    uRam12031b84 = 0;
    puRam12031b88 = &DAT_11d9d32b;
    uRam12031b8c = 1;
    _DAT_12031b90 = "ZoomName";
    uRam12031b94 = 0;
    puRam12031b98 = &DAT_11d9d32b;
    uRam12031b9c = 5;
    _DAT_12031ba0 = "CurrZoomStep";
    uRam12031ba4 = 0;
    puRam12031ba8 = &DAT_11d9d32b;
    uRam12031bac = 1;
    _DAT_12031bb0 = "MaxZoomStep";
    uRam12031bb4 = 0;
    puRam12031bb8 = &DAT_11d9d32b;
    uRam12031bbc = 1;
    _DAT_12031bc0 = 0;
    uRam12031bc4 = 0;
    uRam12031bc8 = 0;
    uRam12031bcc = 0;
  }
  *param_1 = &DAT_120319f8;
  param_1[1] = &DAT_12031a60;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x11;
  return;
}



/* ===== FUN_10e377e0 @ 10e377e0  size=775 ===== */
// strings:
//   "Remove"
//   "netID"
//   "monsterOk"
//   "collectPointOk"
//   "combatNPCOk"
//   "success"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Remove""
     ""netID""
     ""monsterOk""
     ""collectPointOk""
     ""combatNPCOk""
     ""success"" */

void FUN_10e377e0(undefined4 *param_1)

{
  int iStack_8;
  
  if ((DAT_12034500 & 1) == 0) {
    DAT_12034500 = DAT_12034500 | 1;
    _DAT_12034470 = "Remove";
    _DAT_12034474 = 0;
    _DAT_12034478 = &DAT_11d9d32b;
    _DAT_1203447c = 0;
    _DAT_12034480 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12034484,&iStack_8);
    (*(code *)PTR_FUN_11df772c)(&iStack_8);
    _DAT_12034498 = &DAT_11df7669;
    iStack_8 = 0;
    _DAT_12034488 = "netID";
    _DAT_1203448c = 0;
    _DAT_12034490 = &DAT_11d9d32b;
    _DAT_12034494 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203449c,&iStack_8);
    (*(code *)PTR_FUN_11df766c)(&iStack_8);
    _DAT_120344b0 = &DAT_11df7709;
    iStack_8._0_1_ = 1;
    _DAT_120344a0 = "monsterOk";
    _DAT_120344a4 = 0;
    _DAT_120344a8 = &DAT_11d9d32b;
    _DAT_120344ac = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120344b4,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    iStack_8._0_1_ = 0;
    _DAT_120344b8 = "collectPointOk";
    _DAT_120344c8 = &DAT_11df7709;
    _DAT_120344bc = 0;
    _DAT_120344c0 = &DAT_11d9d32b;
    _DAT_120344c4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120344cc,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    DAT_120344e0 = &DAT_11df7709;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    _DAT_120344d0 = "combatNPCOk";
    _DAT_120344d4 = 0;
    _DAT_120344d8 = &DAT_11d9d32b;
    _DAT_120344dc = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120344e4,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    DAT_120344f8 = &DAT_11df7728;
    _DAT_120344e8 = 0;
    uRam120344ec = 0;
    uRam120344f0 = 0;
    uRam120344f4 = 0;
    FUN_11a8911f(&LAB_11c8d0a0);
  }
  if ((DAT_12034500 & 2) == 0) {
    DAT_12034500 = DAT_12034500 | 2;
    _DAT_12034504 = "success";
    uRam12034508 = 0;
    puRam1203450c = &DAT_11d9d32b;
    _DAT_12034510 = 6;
    _DAT_12034514 = 0;
    uRam12034518 = 0;
    uRam1203451c = 0;
    uRam12034520 = 0;
  }
  *param_1 = &DAT_12034470;
  param_1[1] = &DAT_12034504;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e943d0 @ 10e943d0  size=1411 ===== */
// strings:
//   "ClearOutput"
//   "inside"
//   "ignoreHeight"
//   "maxOut"
//   "player"
//   "monster"
//   "combatNPC"
//   "GetSuccess"
//   "GetFailed"
//   "ClearDone"
//   "OutputComplete"
//   "outNetID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""ClearOutput""
     ""inside""
     ""ignoreHeight""
     ""maxOut""
     ""player""
     ""monster""
     ""combatNPC""
     ""GetSuccess""
     ""GetFailed""
     ""ClearDone"" */

void FUN_10e943d0(undefined4 *param_1)

{
  int iStack_8;
  
  if ((DAT_12039ab0 & 1) == 0) {
    DAT_12039ab0 = DAT_12039ab0 | 1;
    _DAT_120399c0 = &DAT_11ced080;
    _DAT_120399c4 = 0;
    _DAT_120399c8 = &DAT_11d9d32b;
    _DAT_120399cc = 0;
    _DAT_120399d0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120399d4,&iStack_8);
    (*(code *)PTR_FUN_11df772c)(&iStack_8);
    _DAT_120399d8 = "ClearOutput";
    _DAT_120399dc = 0;
    _DAT_120399e0 = &DAT_11d9d32b;
    _DAT_120399e4 = 0;
    _DAT_120399e8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120399ec,&iStack_8);
    (*(code *)PTR_FUN_11df772c)(&iStack_8);
    _DAT_12039a00 = &DAT_11df7709;
    iStack_8._0_1_ = 1;
    _DAT_120399f0 = "inside";
    _DAT_120399f4 = 0;
    _DAT_120399f8 = &DAT_11d9d32b;
    _DAT_120399fc = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a04,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    iStack_8 = CONCAT31(iStack_8._1_3_,1);
    _DAT_12039a18 = &DAT_11df7709;
    _DAT_12039a08 = "ignoreHeight";
    _DAT_12039a0c = 0;
    _DAT_12039a10 = &DAT_11d9d32b;
    _DAT_12039a14 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a1c,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    _DAT_12039a30 = &DAT_11df7669;
    iStack_8 = 1;
    _DAT_12039a20 = "maxOut";
    _DAT_12039a24 = 0;
    _DAT_12039a28 = &DAT_11d9d32b;
    _DAT_12039a2c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039a34,&iStack_8);
    (*(code *)PTR_FUN_11df766c)(&iStack_8);
    _DAT_12039a48 = &DAT_11df7709;
    iStack_8._0_1_ = 1;
    _DAT_12039a38 = "player";
    _DAT_12039a3c = 0;
    _DAT_12039a40 = &DAT_11d9d32b;
    _DAT_12039a44 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a4c,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    iStack_8._0_1_ = 0;
    _DAT_12039a50 = &DAT_11da7328;
    _DAT_12039a54 = 0;
    _DAT_12039a58 = &DAT_11d9d32b;
    _DAT_12039a5c = 0;
    _DAT_12039a60 = &DAT_11df7709;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a64,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    _DAT_12039a78 = &DAT_11df7709;
    iStack_8._0_1_ = 0;
    _DAT_12039a68 = "monster";
    _DAT_12039a6c = 0;
    _DAT_12039a70 = &DAT_11d9d32b;
    _DAT_12039a74 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a7c,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    DAT_12039a90 = &DAT_11df7709;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    _DAT_12039a80 = "combatNPC";
    _DAT_12039a84 = 0;
    _DAT_12039a88 = &DAT_11d9d32b;
    _DAT_12039a8c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12039a94,&iStack_8);
    (*(code *)PTR_FUN_11df770c)(&iStack_8);
    DAT_12039aa8 = &DAT_11df7728;
    _DAT_12039a98 = 0;
    uRam12039a9c = 0;
    uRam12039aa0 = 0;
    uRam12039aa4 = 0;
    FUN_11a8911f(&LAB_11c8f6f0);
  }
  if ((DAT_12039ab0 & 2) == 0) {
    DAT_12039ab0 = DAT_12039ab0 | 2;
    _DAT_12039ab8 = "GetSuccess";
    uRam12039abc = 0;
    _DAT_12039ac0 = &DAT_11d9d32b;
    uRam12039ac4 = 0;
    _DAT_12039ac8 = "GetFailed";
    uRam12039acc = 0;
    puRam12039ad0 = &DAT_11d9d32b;
    uRam12039ad4 = 0;
    _DAT_12039ad8 = "ClearDone";
    uRam12039adc = 0;
    puRam12039ae0 = &DAT_11d9d32b;
    uRam12039ae4 = 0;
    _DAT_12039ae8 = "OutputComplete";
    uRam12039aec = 0;
    puRam12039af0 = &DAT_11d9d32b;
    uRam12039af4 = 0;
    _DAT_12039af8 = "outNetID";
    uRam12039afc = 0;
    puRam12039b00 = &DAT_11d9d32b;
    uRam12039b04 = 1;
    _DAT_12039b08 = 0;
    uRam12039b0c = 0;
    uRam12039b10 = 0;
    uRam12039b14 = 0;
  }
  *param_1 = &DAT_120399c0;
  param_1[1] = &DAT_12039ab8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x11;
  return;
}



/* ===== FUN_10eb4d30 @ 10eb4d30  size=422 ===== */
// strings:
//   "OnHit"
//   "Health"
//   "GreenHealth"
//   "RedHealth"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""OnHit""
     ""Health""
     ""GreenHealth""
     ""RedHealth"" */

void FUN_10eb4d30(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_1203be08 & 1) == 0) {
    DAT_1203be08 = DAT_1203be08 | 1;
    _DAT_1203bdd8 = &DAT_11ced080;
    _DAT_1203bddc = 0;
    _DAT_1203bde0 = &DAT_11d9d32b;
    _DAT_1203bde4 = 0;
    DAT_1203bde8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203bdec,auStack_8,&DAT_11ced080,0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_1203be00 = &DAT_11df7728;
    _DAT_1203bdf0 = 0;
    uRam1203bdf4 = 0;
    uRam1203bdf8 = 0;
    uRam1203bdfc = 0;
    FUN_11a8911f(&LAB_11c90b10);
  }
  if ((DAT_1203be08 & 2) == 0) {
    DAT_1203be08 = DAT_1203be08 | 2;
    _DAT_1203be10 = "OnHit";
    uRam1203be14 = 0;
    _DAT_1203be18 = &DAT_11d9d32b;
    uRam1203be1c = 0;
    _DAT_1203be20 = "Health";
    uRam1203be24 = 0;
    puRam1203be28 = &DAT_11d9d32b;
    uRam1203be2c = 1;
    _DAT_1203be30 = "GreenHealth";
    uRam1203be34 = 0;
    puRam1203be38 = &DAT_11d9d32b;
    uRam1203be3c = 2;
    _DAT_1203be40 = "RedHealth";
    uRam1203be44 = 0;
    puRam1203be48 = &DAT_11d9d32b;
    uRam1203be4c = 2;
    _DAT_1203be50 = 0;
    uRam1203be54 = 0;
    uRam1203be58 = 0;
    uRam1203be5c = 0;
  }
  *param_1 = &DAT_1203bdd8;
  param_1[1] = &DAT_1203be10;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff02f | 0x20;
  return;
}



/* ===== FUN_10ee5920 @ 10ee5920  size=536 ===== */
// strings:
//   "m_lastFireModeId"
//   "m_usable"
//   "m_currentState"
//   "m_preHeldEntityId"
//   "m_startPickUp"
//   "m_heldEntityId"
//   "m_constraintId"
//   "m_grabType"
//   "m_grabbedNPCSpecies"
//   "m_killTimeOut"
//   "m_effectRunning"
//   "m_grabbedNPCInitialHealth"
//   "m_prevMainHandId"
//   "m_holdScale"

/* [RE-AUTO c0]
   strings:
     ""m_lastFireModeId""
     ""m_usable""
     ""m_currentState""
     ""m_preHeldEntityId""
     ""m_startPickUp""
     ""m_heldEntityId""
     ""m_constraintId""
     ""m_grabType""
     ""m_grabbedNPCSpecies""
     ""m_killTimeOut"" */

void __thiscall FUN_10ee5920(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_110fd1a0(param_2);
  iVar4 = *(int *)(param_1 + 0x4d0);
  (**(code **)(*param_2 + 0x54))("m_lastFireModeId",param_1 + 0x4b4,0);
  (**(code **)(*param_2 + 0x54))("m_usable",param_1 + 0x550,0);
  (**(code **)(*param_2 + 0x54))("m_currentState",param_1 + 0x568,0);
  (**(code **)(*param_2 + 0x44))("m_preHeldEntityId",param_1 + 0x4d4,0);
  (**(code **)(*param_2 + 0x74))("m_startPickUp",param_1 + 0x52f,0);
  (**(code **)(*param_2 + 0x44))("m_heldEntityId",(int *)(param_1 + 0x4d0),0);
  (**(code **)(*param_2 + 0x54))("m_constraintId",param_1 + 0x518,0);
  (**(code **)(*param_2 + 0x44))("m_grabType",param_1 + 0x4cc,0);
  (**(code **)(*param_2 + 0x54))("m_grabbedNPCSpecies",param_1 + 0x520,0);
  (**(code **)(*param_2 + 0x70))("m_killTimeOut",param_1 + 0x528,0);
  (**(code **)(*param_2 + 0x74))("m_effectRunning",param_1 + 0x52d,0);
  (**(code **)(*param_2 + 0x70))("m_grabbedNPCInitialHealth",param_1 + 0x530,0);
  (**(code **)(*param_2 + 0x44))("m_prevMainHandId",param_1 + 0x574,0);
  (**(code **)(*param_2 + 0x68))("m_holdScale",param_1 + 0x50c,0);
  cVar1 = (**(code **)(*param_2 + 0x20))();
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x4d0) != iVar4)) {
    *(undefined4 *)(param_1 + 0x5ac) = 0;
    piVar2 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
    iVar3 = (**(code **)(*piVar2 + 0xc))(iVar4);
    if (iVar3 == 0) {
      FUN_10ee83e0(0,iVar4);
    }
    else {
      iVar4 = (**(code **)(**(int **)(iVar3 + 0xc) + 0x1b8))(0);
      if (iVar4 != 0) {
        piVar2 = (int *)(**(code **)(**(int **)(iVar3 + 0xc) + 0x1b8))(0);
        piVar5 = (int *)(**(code **)(**(int **)(iVar3 + 0xc) + 0x1b8))(0);
        iVar4 = *piVar5;
        uVar6 = (**(code **)(*piVar2 + 0xc0))();
        (**(code **)(iVar4 + 0xbc))(uVar6 & 0xfffffffd);
      }
      piVar2 = (int *)(**(code **)(**(int **)(iVar3 + 0xc) + 0x150))(0);
      if (piVar2 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar2 + 0x50))();
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xffffffef;
          return;
        }
      }
    }
  }
  return;
}



/* ===== FUN_10efe700 @ 10efe700  size=344 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

void __thiscall FUN_10efe700(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (**(code **)(*param_1 + 800))();
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 800))(0);
    FUN_1142fe70(uVar3);
    piVar4 = (int *)FUN_1142fd90();
    if (piVar4 != (int *)0x0) {
      if (0 < *(int *)(param_2 + 0x2c)) {
        uVar3 = (**(code **)(*piVar4 + 0x5c))(*(int *)(param_2 + 0x2c));
        *(undefined4 *)(param_2 + 0xe0) = uVar3;
      }
      if (0 < *(int *)(param_2 + 0x114)) {
        uVar3 = (**(code **)(*piVar4 + 0x60))(*(int *)(param_2 + 0x114));
        *(undefined4 *)(param_2 + 0xd4) = uVar3;
      }
      if (0 < *(int *)(param_2 + 0x118)) {
        uVar3 = (**(code **)(*piVar4 + 100))(*(int *)(param_2 + 0x118));
        *(undefined4 *)(param_2 + 0xd0) = uVar3;
      }
      if (0 < *(int *)(param_2 + 0x120)) {
        uVar3 = (**(code **)(*piVar4 + 0x68))(*(int *)(param_2 + 0x120));
        *(undefined4 *)(param_2 + 0x10c) = uVar3;
      }
    }
    iVar2 = (**(code **)(*param_1 + 800))();
    piVar4 = *(int **)(iVar2 + 0x10);
    iVar2 = (**(code **)(*piVar4 + 100))();
    if (iVar2 != 0) {
      (**(code **)(*piVar4 + 100))(param_2);
      FUN_10fd2f7c();
    }
    piVar4 = (int *)(**(code **)(*param_1 + 800))();
    (**(code **)(*piVar4 + 0x5c))(param_2);
  }
  iVar5 = FUN_10ba9b00();
  iVar2 = *(int *)(param_2 + 0x138);
  iVar6 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if ((iVar2 != -1) &&
     ((((iVar2 != 0 || (*(int *)(iVar6 + 0x30) == 0)) && (*(int *)(iVar6 + 0x28) != 0)) &&
      ((iVar2 = iVar2 - *(int *)(iVar6 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar6 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar2 / *(int *)(iVar6 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(iVar1 + (iVar2 % *(int *)(iVar6 + 0x28)) * 4), iVar2 != 0 && (iVar5 != 0))
       )) {
      iVar5 = FUN_10c261e0();
      *(int *)(iVar5 + 0x924) = iVar2;
      *(int *)(iVar5 + 0x928) = param_2;
    }
  }
  (**(code **)(*param_1 + 700))(param_2);
  return;
}



/* ===== FUN_10f17270 @ 10f17270  size=118 ===== */
// strings:
//   "SelectCombatNPCModel"

/* [RE-AUTO c0]
   strings:
     ""SelectCombatNPCModel"" */

void __fastcall FUN_10f17270(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(*param_1 + 800))();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xa8))();
    if (iVar2 == 0xb) {
      iVar2 = FUN_11419510();
      *(undefined2 *)(param_1 + 0x2d) = *(undefined2 *)(iVar2 + 200);
      piVar1 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 0x38))();
        if (iVar3 != 0) {
          local_8 = *(int **)(iVar2 + 100);
          FUN_10d62f90(iVar3,"SelectCombatNPCModel",&local_8);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10f19670 @ 10f19670  size=357 ===== */
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   strings:
     ""GameOnHit"" */

void __thiscall FUN_10f19670(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_184;
  undefined8 local_134;
  uint local_12c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if ((piVar3 != (int *)0x0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
    local_8 = piVar3;
    FUN_10bb4150();
    iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))(param_2);
    if (iVar1 == 0) {
      local_19c = (**(code **)(*piVar3 + 4))();
    }
    else {
      local_19c = *(undefined4 *)(iVar1 + 8);
    }
    local_198 = (**(code **)(*piVar3 + 4))();
    puVar2 = (uint *)(**(code **)(*piVar3 + 0xd8))();
    local_12c = puVar2[2] ^ DAT_11de9c90;
    local_134 = CONCAT44(puVar2[1] ^ DAT_11de9c90,*puVar2 ^ DAT_11de9c90);
    local_c = local_12c;
    iVar1 = FUN_10abaa70(param_3);
    if (iVar1 != 0) {
      local_184 = FUN_10b27fd0(*(undefined4 *)(iVar1 + 0x28));
    }
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    iVar1 = *piVar3;
    uVar4 = (**(code **)(*local_8 + 4))();
    piVar3 = (int *)(**(code **)(iVar1 + 0x144))(uVar4);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_1c = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      local_10 = &local_19c;
      local_18 = 0x4ffff;
      local_14 = 0;
      local_c = 0;
      (**(code **)(*piVar3 + 0x24))(&local_1c);
    }
  }
  return;
}



/* ===== FUN_10f596e0 @ 10f596e0  size=2317 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "CarryEgg"
//   "PLInjurySignal"
//   "Unholstered"
//   "TransitionError:%d"
//   "CombatNPC"

/* [RE-AUTO c0]
   strings:
     ""CarryEgg""
     ""PLInjurySignal""
     ""Unholstered""
     ""TransitionError:%d""
     ""CombatNPC"" */

char __thiscall
FUN_10f596e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,uint param_7,undefined4 param_8,undefined1 *param_9,
            undefined4 param_10,undefined1 *param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined1 local_28 [4];
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  undefined4 *local_c;
  char local_5;
  
  iVar5 = *(int *)(param_1 + 0x18);
  local_18 = param_1;
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0x108) != '\0')) {
    FUN_10f5c5d0(2);
    return '\0';
  }
  local_1c = &DAT_1201fc98;
  if (((iVar5 != 0) && (*(int **)(iVar5 + 0x100) != (int *)0x0)) &&
     (iVar5 = (**(code **)(**(int **)(iVar5 + 0x100) + 800))(), iVar5 != 0)) {
    piVar6 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
    puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0xb8))();
    puVar15 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
      puVar15 = (undefined1 *)*puVar7;
    }
    FUN_1083ac30(puVar15);
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))(),
       *(int *)(iVar5 + 0xc) != 0)) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
      (**(code **)(**(int **)(iVar5 + 0xc) + 0x6c))();
    }
  }
  cVar3 = FUN_10fdb960();
  if ((cVar3 == '\0') && ((char)param_7 != '\0')) {
    if (*(int *)(local_1c + -8) != 0) {
      FUN_10f5c5d0(3);
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x18) + 0x105) == '\0') {
    local_5 = '\x01';
    piVar6 = (int *)FUN_10fb8160(param_2,param_3,param_4,param_5);
    local_10 = piVar6;
    if (piVar6 == (int *)0x0) {
      uVar8 = 9;
LAB_10f59f1d:
      local_5 = '\0';
LAB_10f59f21:
      FUN_10f5c5d0(uVar8);
LAB_10f59f28:
      iVar5 = FUN_10fb8160(param_2,param_3,param_4,param_5);
      if (iVar5 == 0) {
        FUN_10f19240();
        cVar3 = local_5;
      }
      else {
        param_9 = &DAT_1201fc98;
        cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x1cc))();
        if (cVar3 == '\0') {
          pcVar17 = (char *)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0xc
                                                   ) + 0x48))();
          if (pcVar17 == (char *)0x0) {
            iVar5 = 0;
          }
          else {
            pcVar16 = pcVar17;
            do {
              cVar3 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar3 != '\0');
            iVar5 = (int)pcVar16 - (int)(pcVar17 + 1);
          }
        }
        else {
          iVar5 = 9;
          pcVar17 = "CombatNPC";
        }
        FUN_1083ab70(pcVar17,iVar5);
        puVar15 = param_9;
        piVar6 = (int *)(param_9 + -0xc);
        cVar3 = local_5;
        if ((-1 < *piVar6) && (iVar5 = FUN_10c3dad0(piVar6), cVar3 = local_5, iVar5 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar15 + -4));
          FUN_10c3d900(piVar6);
          cVar3 = local_5;
        }
      }
    }
    else {
      puVar15 = &DAT_1203cce8;
      if ((undefined1 *)piVar6[0x14] != (undefined1 *)0x0) {
        puVar15 = (undefined1 *)piVar6[0x14];
      }
      puVar7 = (undefined4 *)FUN_10f59500(puVar15);
      local_c = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x228))();
        if ((cVar3 != '\0') ||
           (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x1cc))(),
           cVar3 != '\0')) {
          uVar8 = 7;
          goto LAB_10f59f1d;
        }
        local_5 = FUN_10fd05f0(param_2,param_3,param_4,param_5,param_6,0,param_8,param_9,param_10,
                               param_11);
        if (local_5 == '\0') {
          uVar8 = 8;
          goto LAB_10f59f21;
        }
      }
      else {
        if ((((*(char *)((int)puVar7 + 0x1d) == '\0') && (*(int *)(param_1 + 0x18) != 0)) &&
            (cVar3 = FUN_10fdc200(), cVar3 == '\0')) &&
           ((piVar9 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar9 != (int *)0x0 &&
            (cVar3 = (**(code **)(*piVar9 + 0x228))(), cVar3 == '\0')))) goto LAB_10f597d1;
        if ((((char)param_7 != '\0') &&
            (((char)param_9 == '\0' &&
             (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x228))(),
             cVar3 != '\0')))) ||
           ((*(char *)(DAT_1202e818 + 0x209) != '\0' &&
            (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x1cc))(),
            cVar3 != '\0')))) {
          cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x1cc))();
          local_5 = FUN_10d52cdb(param_2,param_3,param_4,param_5,cVar3 == '\0');
          puVar7 = local_c;
        }
        piVar9 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
        uVar8 = 0;
        if ((piVar9 != (int *)0x0) &&
           ((cVar3 = (**(code **)(*piVar9 + 0x228))(), cVar3 == '\0' ||
            ((uVar8 = extraout_ECX, *(char *)(DAT_1202e818 + 0x209) != '\0' &&
             (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x1cc))(),
             uVar8 = extraout_ECX_00, cVar3 != '\0')))))) {
          uVar8 = FUN_116cd730(puVar7[5],0);
          param_7 = FUN_116cd660(uVar8);
          uVar8 = extraout_ECX_01;
          if (param_7 != 0) {
            FUN_116db560();
            iVar5 = FUN_116db500();
            uVar8 = extraout_ECX_02;
            if ((0 < iVar5) && (cVar3 = FUN_116cdb40(iVar5), uVar8 = extraout_ECX_03, cVar3 != '\0')
               ) {
              local_5 = '\0';
              goto LAB_10f59f28;
            }
          }
        }
        puVar2 = local_c;
        if (local_5 == '\0') goto LAB_10f59f28;
        puVar7 = (undefined4 *)puVar7[0xb];
        if (puVar7 != (undefined4 *)local_c[0xc]) {
          do {
            puVar15 = &DAT_1203cce8;
            if ((undefined1 *)puVar7[1] != (undefined1 *)0x0) {
              puVar15 = (undefined1 *)puVar7[1];
            }
            CInfoRecord__GetModelString(puVar15,uVar8);
            (*(code *)*puVar7)(param_1);
            puVar7 = puVar7 + 2;
            uVar8 = extraout_ECX_04;
            piVar6 = local_10;
          } while (puVar7 != (undefined4 *)puVar2[0xc]);
        }
        local_14 = (int *)0x2;
        piVar9 = (int *)FUN_10f5f0d0(local_28,&local_14);
        if (*piVar9 != param_1 + 0x124) {
          local_20 = (int *)0x2;
          piVar9 = (int *)FUN_10f5cd60(&local_20);
          param_7 = 2;
          iVar5 = *piVar9;
          iVar10 = FUN_10f5cd60(&param_7);
          if (iVar5 != *(int *)(iVar10 + 4)) {
            param_7 = 2;
            piVar9 = (int *)(iVar5 + 0x10);
            do {
              puVar7 = (undefined4 *)piVar9[-1];
              if (puVar7 != (undefined4 *)*piVar9) {
                do {
                  if (((code *)*puVar7 == (code *)0x0) ||
                     (cVar3 = (*(code *)*puVar7)(param_1,3,param_5,puVar7[1]), piVar6 = local_10,
                     cVar3 == '\0')) goto LAB_10f59a8a;
                  puVar7 = puVar7 + 2;
                } while (puVar7 != (undefined4 *)*piVar9);
                puVar7 = (undefined4 *)piVar9[-4];
                if (puVar7 != (undefined4 *)piVar9[-3]) {
                  do {
                    if ((code *)*puVar7 != (code *)0x0) {
                      (*(code *)*puVar7)(piVar6,puVar7[1]);
                    }
                    puVar7 = puVar7 + 2;
                    param_1 = local_18;
                  } while (puVar7 != (undefined4 *)piVar9[-3]);
                }
              }
LAB_10f59a8a:
              iVar5 = FUN_10f5cd60(&param_7);
              piVar11 = piVar9 + 2;
              piVar6 = local_10;
              piVar9 = piVar9 + 6;
            } while (piVar11 != *(int **)(iVar5 + 4));
          }
        }
        *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x105) = 1;
        param_7 = param_7 & 0xffffff;
        if ((((((uint)piVar6[0x20] >> 7 & 1) == 0) || (((byte)piVar6[0x20] & 0x95) == 0x95)) &&
            (cVar3 = FUN_10f5bbd0(), cVar3 == '\0')) && (((uint)piVar6[0x20] >> 0xb & 1) == 0)) {
LAB_10f59b8f:
          cVar3 = param_7._3_1_;
        }
        else {
          local_20 = (int *)FUN_10fd05d0();
          if (((local_20 == (int *)0x0) || (piVar6 == local_20)) ||
             ((cVar3 = FUN_10f6a810(0), cVar3 == '\0' || (cVar3 = FUN_10f6a810(0), cVar3 == '\0'))))
          {
            param_7 = CONCAT13(1,(undefined3)param_7);
LAB_10f59b63:
            piVar9 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
            (**(code **)(*piVar9 + 0xbc))();
            (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x7d4))();
            goto LAB_10f59b8f;
          }
          iVar5 = FUN_10f6a850(0);
          iVar10 = FUN_10f6a850(0);
          if (iVar5 == iVar10) goto LAB_10f59b8f;
          param_7 = CONCAT13(1,(undefined3)param_7);
          cVar3 = FUN_10f5c580("CarryEgg");
          if ((cVar3 != '\x01') || (cVar3 = FUN_10f5c580("CarryEgg"), cVar3 != '\x01'))
          goto LAB_10f59b63;
          param_7 = param_7 & 0xffffff;
          cVar3 = '\0';
        }
        piVar9 = (int *)*local_c;
        local_14 = piVar9;
        if (piVar9 != (int *)local_c[1]) {
          do {
            local_14 = piVar9;
            if (cVar3 == '\0') {
              puVar15 = &DAT_1203cce8;
              if ((undefined1 *)piVar9[1] != (undefined1 *)0x0) {
                puVar15 = (undefined1 *)piVar9[1];
              }
              puVar14 = &DAT_1203cce8;
              if ((undefined1 *)*piVar9 != (undefined1 *)0x0) {
                puVar14 = (undefined1 *)*piVar9;
              }
              (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))(puVar14,puVar15);
            }
            else {
              if ((((byte)piVar6[0x20] & 0x84) == 0x84) &&
                 (((cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x7bc))(),
                   cVar3 != '\0' && (*(char *)(local_c + 7) == '\0')) ||
                  (cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x7bc))(),
                  cVar3 == '\0')))) {
                FUN_10f56fa0("PLInjurySignal");
                puVar15 = &DAT_1203cce8;
                if ((undefined1 *)*piVar9 != (undefined1 *)0x0) {
                  puVar15 = (undefined1 *)*piVar9;
                }
                puVar14 = &DAT_1203cce8;
                if (local_24 != (undefined1 *)0x0) {
                  puVar14 = local_24;
                }
                if ((puVar15 == puVar14) &&
                   (cVar3 = (**(code **)(*piVar6 + 0x48))(0x2a), cVar3 != '\0')) {
                  puVar15 = &DAT_1203cce8;
                  if ((undefined1 *)piVar9[1] != (undefined1 *)0x0) {
                    puVar15 = (undefined1 *)piVar9[1];
                  }
                  CInfoRecord__GetModelString(puVar15);
                  FUN_10a4bfe0("Unholstered");
                  piVar11 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c
                                               ))();
                  puVar15 = &DAT_1203cce8;
                  if ((undefined1 *)*piVar9 != (undefined1 *)0x0) {
                    puVar15 = (undefined1 *)*piVar9;
                  }
                  (**(code **)(*piVar11 + 0xfc))(puVar15,local_18);
                  FUN_104f6f60();
                  goto LAB_10f59cf9;
                }
              }
              piVar6 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
              puVar15 = &DAT_1203cce8;
              if ((undefined1 *)piVar9[1] != (undefined1 *)0x0) {
                puVar15 = (undefined1 *)piVar9[1];
              }
              puVar14 = &DAT_1203cce8;
              if ((undefined1 *)*local_14 != (undefined1 *)0x0) {
                puVar14 = (undefined1 *)*local_14;
              }
              (**(code **)(*piVar6 + 0xfc))(puVar14,puVar15);
              piVar6 = local_10;
            }
LAB_10f59cf9:
            piVar9 = local_14 + 2;
            cVar3 = param_7._3_1_;
            local_14 = piVar9;
          } while (piVar9 != (int *)local_c[1]);
        }
        if (param_7._3_1_ != '\0') {
          piVar6 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
          (**(code **)(*piVar6 + 0x5c))();
        }
        uVar4 = FUN_10f5c6c0(local_c[3],local_c[4]);
        param_7 = CONCAT31(param_7._1_3_,uVar4);
        local_5 = FUN_10fd05f0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11);
        if (local_5 == '\0') {
          *(undefined4 *)(param_1 + 0x10) = 6;
          param_11 = &DAT_1201fc98;
          FUN_10aba940(&param_11,"TransitionError:%d",6);
          puVar15 = param_11;
          piVar6 = (int *)(param_11 + -0xc);
          if ((-1 < *piVar6) && (iVar5 = FUN_10c3dad0(piVar6), iVar5 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar15 + -4));
            FUN_10c3d900(piVar6);
          }
        }
        *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x105) = 0;
        if (local_5 == '\0') goto LAB_10f59f28;
      }
      iVar5 = FUN_10fd05d0();
      uVar1 = iVar5 + 0x124;
      uVar12 = *(uint *)(iVar5 + 0x128);
      param_7 = uVar1;
      cVar3 = local_5;
      if (uVar12 != 0) {
        do {
          if (*(int *)(uVar12 + 0x10) < 8) {
            uVar13 = *(uint *)(uVar12 + 0xc);
          }
          else {
            uVar13 = *(uint *)(uVar12 + 8);
            param_7 = uVar12;
          }
          uVar12 = uVar13;
        } while (uVar13 != 0);
        if (param_7 == uVar1) goto LAB_10f597d3;
        if (8 < *(int *)(param_7 + 0x10)) {
          param_7 = uVar1;
        }
      }
      if ((param_7 != uVar1) &&
         (piVar6 = *(int **)(param_7 + 0x14), piVar6 != *(int **)(param_7 + 0x18))) {
        do {
          puVar7 = (undefined4 *)piVar6[3];
          cVar3 = '\x01';
          if (puVar7 != (undefined4 *)piVar6[4]) {
            do {
              if ((code *)*puVar7 != (code *)0x0) {
                cVar3 = (*(code *)*puVar7)(param_1,param_4,puVar7[1],0);
              }
              if (cVar3 == '\0') goto LAB_10f59f04;
              puVar7 = puVar7 + 2;
            } while (puVar7 != (undefined4 *)piVar6[4]);
          }
          puVar7 = (undefined4 *)*piVar6;
          if (puVar7 != (undefined4 *)piVar6[1]) {
            do {
              if ((code *)*puVar7 != (code *)0x0) {
                (*(code *)*puVar7)(param_1);
              }
              puVar7 = puVar7 + 2;
            } while (puVar7 != (undefined4 *)piVar6[1]);
          }
LAB_10f59f04:
          piVar6 = piVar6 + 6;
          cVar3 = local_5;
        } while (piVar6 != *(int **)(param_7 + 0x18));
      }
    }
    goto LAB_10f597d3;
  }
LAB_10f597d1:
  cVar3 = '\0';
LAB_10f597d3:
  puVar15 = local_1c;
  piVar6 = (int *)(local_1c + -0xc);
  if ((-1 < *piVar6) && (iVar5 = FUN_10c3dad0(piVar6), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar15 + -4));
    FUN_10c3d900(piVar6);
  }
  return cVar3;
}



/* ===== FUN_10f80770 @ 10f80770  size=258 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

void __thiscall FUN_10f80770(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = param_1;
  iVar2 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if ((param_3 != -1) &&
     ((((param_3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)) &&
      ((iVar3 = param_3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0 &&
        (cVar1 = FUN_10facec0(param_2,&local_8,&param_3), cVar1 != '\0')))) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + *(int *)(iVar2 + 0x19c);
      FUN_116db560();
      iVar4 = FUN_116db630();
      FUN_116db560();
      iVar3 = FUN_116db640();
      FUN_116db560();
      iVar5 = FUN_116db650();
      iVar2 = *(int *)(param_1 + 0x228);
      if ((iVar2 < iVar4) || (iVar2 < iVar3)) {
        *(undefined4 *)(param_1 + 0x220) = 1;
      }
      else if (iVar2 < iVar5) {
        *(undefined4 *)(param_1 + 0x220) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x220) = 3;
      }
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x220);
    }
  }
  return;
}



/* ===== FUN_10fd48b0 @ 10fd48b0  size=413 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

void __thiscall FUN_10fd48b0(int param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x100) + 0x304))();
  local_8 = (float)fVar7;
  if (local_8 <= 0.0) {
    FUN_10f56fa0(&DAT_11cfcabc);
    iVar5 = FUN_10f57110();
    iVar6 = FUN_10f57110();
    if (iVar5 == iVar6) {
      FUN_10fdb9b0(1);
      return;
    }
  }
  else {
    fVar1 = param_3[0x4e];
    local_8 = (float)((uint)local_8 & 0xffffff00);
    iVar5 = CDamageInfo__GetManager(0,"CDamageInfo",0);
    cVar4 = SUB41(local_8,0);
    if ((fVar1 != -NAN) &&
       ((((fVar1 != 0.0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
        ((iVar6 = (int)fVar1 - *(int *)(iVar5 + 0x30), -1 < iVar6 &&
         (iVar6 < *(int *)(iVar5 + 0x24))))))) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
      if ((iVar2 != 0) &&
         (((iVar5 = *(int *)(iVar2 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4), iVar5 != 0 &&
           (0 < *(int *)(iVar5 + 0x194))) && (DAT_11de9890 < *param_3)))) {
        cVar4 = '\x01';
      }
    }
    cVar3 = FUN_10fd5400(param_2);
    if ((cVar3 != '\0') && (cVar4 == '\0')) {
      local_14 = param_3[0x6a];
      local_10 = param_3[0x6b];
      local_c = param_3[0x6c];
      FUN_10fd54e0(param_2,&local_14);
      return;
    }
    cVar4 = FUN_10fd5160(param_3[0x10]);
    if (cVar4 != '\0') {
      local_14 = param_3[0x6a];
      local_10 = param_3[0x6b];
      local_c = param_3[0x6c];
      FUN_10fd51c0(&local_14,param_3[0x10],param_4);
      return;
    }
    if (0 < (int)param_3[0xf]) {
      FUN_10fd6170(param_3);
    }
  }
  return;
}



/* ===== FUN_11000d20 @ 11000d20  size=257 ===== */
// strings:
//   "OnHit"

/* [RE-AUTO c0]
   strings:
     ""OnHit"" */

void __thiscall FUN_11000d20(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *local_8;
  
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x108))(param_2);
    if (cVar1 != '\0') {
      FUN_10b26050(param_1 + 8,param_2);
      piVar2 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x38))();
        if (iVar3 != 0) {
          FUN_10b268e0(iVar3,"OnHit",param_1 + 8);
        }
      }
      if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
        FUN_11000e30(*param_2);
        return;
      }
      piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      iVar3 = *param_2;
      iVar4 = (**(code **)(*piVar2 + 0x128))();
      if (iVar3 == iVar4) {
        param_1[0x66] = iVar3;
        FUN_100e49c0();
        *local_8 = 0x2b0;
        uVar5 = (**(code **)(*(int *)param_1[3] + 0x274))();
        *(undefined4 *)(local_8 + 8) = uVar5;
        *(undefined4 *)(local_8 + 10) = 0;
        uVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
        *(undefined4 *)(local_8 + 0xc) = uVar5;
        piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        (**(code **)(*piVar2 + 0x254))(local_8);
        FUN_100e4a80();
      }
    }
  }
  return;
}



/* ===== FUN_11000e30 @ 11000e30  size=99 ===== */
// strings:
//   "ServerOnHit"

/* [RE-AUTO c0]
   strings:
     ""ServerOnHit"" */

void __thiscall FUN_11000e30(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(int **)(param_1 + 0x198) = param_2;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x38))();
  }
  param_2 = piVar1;
  piVar2 = (int *)(**(code **)(*piVar1 + 4))();
  iVar3 = (**(code **)(*piVar2 + 0x34))(piVar1,"ServerOnHit");
  if (iVar3 != 0) {
    FUN_10a69650(piVar2,&param_2);
    (**(code **)(*piVar2 + 0x44))();
  }
  return;
}



/* ===== FUN_11006ea0 @ 11006ea0  size=4417 ===== */
// calls: memmove
// strings:
//   "PrimitiveWorldIntersection(Game)"
//   "GameOnHit"

/* WARNING: Removing unreachable block (ram,0x11006f93) */
/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""PrimitiveWorldIntersection(Game)""
     ""GameOnHit"" */

void __thiscall FUN_11006ea0(int *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *******pppppppiVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int ******ppppppiVar8;
  int *piVar9;
  undefined4 uVar10;
  int *******pppppppiVar11;
  int iVar12;
  float10 fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_460 [98];
  undefined2 local_3fe;
  undefined1 local_3fc;
  undefined1 local_3d8 [4];
  undefined4 local_3d4;
  int local_3cc;
  undefined4 local_38c;
  undefined8 local_370;
  int *local_368;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 local_258 [4];
  undefined4 local_254;
  int local_24c;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  undefined8 local_1f0;
  int *local_1e8;
  undefined8 local_1e4;
  uint local_1dc;
  undefined8 local_1d8;
  float local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_d8 [8];
  float local_d0;
  uint local_cc;
  int *****local_c8;
  int *****pppppiStack_c4;
  int *****local_c0;
  undefined1 local_bc [12];
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int ******local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  float local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  int ******ppppppiStack_54;
  int *piStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  char local_41;
  int ******local_40;
  int ******local_3c;
  undefined8 local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int ******local_20;
  int ******local_1c;
  int *local_18;
  float local_14;
  char local_d;
  float local_c;
  float local_8;
  
  local_18 = param_1;
  FUN_10ffc760(param_2,param_3);
  local_64 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[0x10]);
  if (local_64 == (int *)0x0) {
    return;
  }
  local_88 = FUN_10ba9b00();
  local_84 = (int *)FUN_10c007c0(param_1[0x10]);
  local_41 = (**(code **)(*local_84 + 0x1c4))();
  (**(code **)(*(int *)param_1[3] + 200))(&local_ac);
  param_3 = *(uint *)(param_1[7] + 0x30);
  local_b0 = 0.0;
  FUN_10a706b0();
  local_d0 = local_a4;
  local_2c = param_1 + 0x38;
  local_3fe = 0x101;
  local_3fc = 1;
  local_cc = param_3;
  if (param_1[0x38] != param_1[0x39]) {
    param_1[0x39] = param_1[0x38];
  }
  piVar5 = param_1 + 0x35;
  param_2 = param_1[0x36] - *piVar5 >> 2;
  piVar9 = param_1;
  if (0 < (int)param_2) {
    iVar12 = 0;
    do {
      local_28 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                  (*(undefined4 *)(*piVar5 + iVar12 * 4));
      if (local_28 == (int *)0x0) {
        *(undefined4 *)(*piVar5 + iVar12 * 4) = *(undefined4 *)(*piVar5 + -4 + param_2 * 4);
        if (param_1[0x36] != *piVar5) {
          param_1[0x36] = param_1[0x36] + -4;
        }
        param_2 = param_2 - 1;
        iVar12 = iVar12 + -1;
      }
      else {
        puVar2 = (undefined4 *)local_2c[1];
        if (puVar2 == (undefined4 *)local_2c[2]) {
          FUN_108716d0(puVar2,&local_28,(int)&param_3 + 3,1,1);
        }
        else {
          *puVar2 = local_28;
          local_2c[1] = local_2c[1] + 4;
        }
      }
      iVar12 = iVar12 + 1;
      piVar9 = local_18;
    } while (iVar12 < (int)param_2);
  }
  if (param_2 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *local_2c;
  }
  uVar10 = 0x208;
  if (*(char *)(*(int *)(piVar9[7] + 0xb4) + 0x18) != '\0') {
    uVar10 = 0xa08;
  }
  local_38 = 0;
  local_30 = (int *)0x0;
  fVar13 = (float10)FUN_10a797c0(4,local_d8,&local_38,0x1c,&local_b0,0,0,0,uVar10,local_460,0,0,
                                 iVar12,param_2,1,0,"PrimitiveWorldIntersection(Game)");
  local_40 = (int ******)&local_40;
  puStack_4c = (undefined1 *)0x0;
  piStack_48 = (int *)0x0;
  local_20 = (int ******)&local_20;
  local_c = (float)fVar13;
  iVar12 = (int)fVar13;
  local_8 = local_b0;
  param_3 = param_3 & 0xffffff;
  param_2 = param_2 & 0xffffff;
  local_14 = 0.0;
  fVar15 = local_b0;
  local_3c = local_40;
  local_1c = local_20;
  if (0 < iVar12) {
    do {
      fVar16 = local_14;
      if (fVar15 != 0.0) {
        local_6c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                    (*(undefined4 *)((int)fVar15 + 0x3c));
        if (((local_6c != (int *)0x0) &&
            (piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x5c))(local_6c),
            fVar16 = local_14, local_24 = piVar5, piVar5 != (int *)0x0)) && (piVar5 != local_64)) {
          local_68 = (int *)(**(code **)(*local_64 + 0x288))();
          local_28 = (int *)(**(code **)(*piVar5 + 0x288))();
          if (((*(int *)(DAT_1202e818 + 0xd0) == 0) ||
              (iVar12 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar12 != 1)) ||
             ((local_28 == (int *)0x0 ||
              ((local_68 == (int *)0x0 ||
               (cVar4 = (**(code **)(*local_68 + 0x50))(local_28), fVar16 = local_14, cVar4 != '\0')
               ))))) {
            uVar10 = (**(code **)(*piVar5 + 4))();
            local_28 = (int *)FUN_10c007c0(uVar10);
            if (local_28 == (int *)0x0) {
              uVar10 = (**(code **)(*piVar5 + 4))(local_18[0x12],0,0xffffffff,0xffffffff,0);
              FUN_10b27660(local_18[0x10],uVar10);
              local_3cc = local_18[2];
              puVar2 = *(undefined4 **)(local_18[7] + 0xb4);
              local_2c4 = *puVar2;
              local_2c0 = puVar2[5];
              local_38c = puVar2[4];
              local_3d4 = (**(code **)(*piVar5 + 4))();
              puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(&local_7c);
              pfVar7 = (float *)(**(code **)(*local_24 + 200))(local_bc);
              uVar1 = *puVar6;
              local_30 = *(int **)(puVar6 + 1);
              local_38._0_4_ = (float)uVar1;
              local_38._0_4_ = *pfVar7 - (float)local_38;
              local_38._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_38._4_4_ = pfVar7[1] - local_38._4_4_;
              fVar15 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + 0.0;
              if (fVar15 <= DAT_11cbf070) {
                piStack_50 = (int *)DAT_1201fd04;
                puStack_4c = (undefined1 *)((ulonglong)DAT_1201fd04 >> 0x20);
                local_368 = DAT_1201fd0c;
                local_370 = DAT_1201fd04;
              }
              else {
                auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
                fVar16 = auVar14._0_4_;
                fVar16 = (DAT_11de9938 - fVar16 * fVar15 * fVar16 * DAT_11de98e8) * fVar16;
                piStack_50 = (int *)(fVar16 * (float)local_38);
                puStack_4c = (undefined1 *)(fVar16 * local_38._4_4_);
                piStack_48 = (int *)(fVar16 * 0.0);
                local_368 = piStack_48;
                local_370 = CONCAT44(puStack_4c,piStack_50);
              }
              local_38 = uVar1;
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0x188);
            }
            cVar4 = (**(code **)(*local_28 + 0x2a4))(*(undefined4 *)((int)fVar15 + 0x40));
            param_2 = CONCAT13(cVar4 == '\0',(undefined3)param_2);
            cVar4 = (**(code **)(*local_28 + 0xf4))();
            fVar16 = local_14;
            if (cVar4 == '\0') {
              uVar10 = (**(code **)(*piVar5 + 4))(local_18[0x12],0,0xffffffff,0xffffffff,0);
              piVar5 = local_18;
              FUN_10b27660(local_18[0x10],uVar10);
              local_24c = piVar5[2];
              local_208 = *(undefined8 *)((int)fVar15 + 8);
              local_1dc = *(uint *)((int)fVar15 + 0x1c) ^ DAT_11de9c90;
              puVar2 = *(undefined4 **)(piVar5[7] + 0xb4);
              local_1e4 = CONCAT44(*(uint *)((int)fVar15 + 0x18) ^ DAT_11de9c90,
                                   *(uint *)((int)fVar15 + 0x14) ^ DAT_11de9c90);
              local_144 = *puVar2;
              local_140 = puVar2[5];
              local_20c = puVar2[4];
              local_210 = *(undefined4 *)((int)fVar15 + 0x40);
              local_200 = *(float *)((int)fVar15 + 0x10);
              local_74 = (float)local_1dc;
              puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(local_bc);
              pfVar7 = (float *)(**(code **)(*local_24 + 200))(&local_7c);
              uVar1 = *puVar6;
              local_30 = *(int **)(puVar6 + 1);
              local_38._0_4_ = (float)uVar1;
              local_38._0_4_ = *pfVar7 - (float)local_38;
              local_38._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_38._4_4_ = pfVar7[1] - local_38._4_4_;
              fVar16 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + 0.0;
              if (fVar16 <= DAT_11cbf070) {
                piStack_48 = DAT_1201fd0c;
                piStack_50 = (int *)DAT_1201fd04;
                puStack_4c = (undefined1 *)((ulonglong)DAT_1201fd04 >> 0x20);
                local_1f0 = DAT_1201fd04;
              }
              else {
                auVar14 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
                fVar17 = auVar14._0_4_;
                fVar17 = (DAT_11de9938 - fVar17 * fVar16 * fVar17 * DAT_11de98e8) * fVar17;
                piStack_50 = (int *)(fVar17 * (float)local_38);
                puStack_4c = (undefined1 *)(fVar17 * local_38._4_4_);
                piStack_48 = (int *)(fVar17 * 0.0);
                local_1f0 = CONCAT44(puStack_4c,piStack_50);
              }
              local_1e8 = piStack_48;
              local_80 = (float)puStack_4c;
              local_6c = piStack_48;
              local_68 = piStack_50;
              local_38 = uVar1;
              puVar6 = (undefined8 *)(**(code **)(*local_24 + 200))(local_bc);
              pfVar7 = (float *)(**(code **)(*local_24 + 0xd0))(&local_9c);
              piVar5 = local_24;
              local_2c = (int *)pfVar7[3];
              fVar16 = pfVar7[1];
              fVar17 = pfVar7[2];
              piStack_50 = (int *)*puVar6;
              puStack_4c = (undefined1 *)((ulonglong)*puVar6 >> 0x20);
              local_14 = (float)((uint)*pfVar7 ^ DAT_11de9c90);
              fVar19 = (float)((uint)puStack_4c ^ DAT_11de9c90);
              fVar21 = (float)(*(uint *)(puVar6 + 1) ^ DAT_11de9c90);
              local_8 = (float)((uint)fVar16 ^ DAT_11de9c90);
              local_c = (float)((uint)fVar17 ^ DAT_11de9c90);
              fVar18 = (float)((uint)piStack_50 ^ DAT_11de9c90);
              fVar20 = (fVar17 * fVar19 - fVar16 * fVar21) + (float)local_2c * fVar18;
              fVar17 = (*pfVar7 * fVar21 - fVar17 * fVar18) + (float)local_2c * fVar19;
              fVar16 = (fVar16 * fVar18 - *pfVar7 * fVar19) + (float)local_2c * fVar21;
              local_70 = fVar17 * pfVar7[2] - fVar16 * pfVar7[1];
              local_70 = local_70 + fVar18 + local_70;
              fVar16 = fVar16 * *pfVar7 - fVar20 * pfVar7[2];
              local_8c = (int *)(fVar16 + fVar19 + fVar16);
              fVar16 = fVar20 * pfVar7[1] - fVar17 * *pfVar7;
              piStack_48 = (int *)(fVar16 + fVar21 + fVar16);
              pfVar7 = (float *)(**(code **)(*local_24 + 0xbc))();
              piVar9 = DAT_11de9918;
              if (*pfVar7 != 0.0) {
                pfVar7 = (float *)(**(code **)(*piVar5 + 0xbc))();
                piVar9 = (int *)((float)DAT_11de9918 / *pfVar7);
              }
              fVar19 = (local_200 * local_8 - local_208._4_4_ * local_c) +
                       (float)local_2c * (float)local_208;
              fVar18 = ((float)local_208 * local_c - local_200 * local_14) +
                       (float)local_2c * local_208._4_4_;
              fVar16 = (local_208._4_4_ * local_14 - (float)local_208 * local_8) +
                       (float)local_2c * local_200;
              fVar17 = fVar16 * local_8 - fVar18 * local_c;
              fVar16 = fVar19 * local_c - fVar16 * local_14;
              fVar18 = fVar18 * local_14 - fVar19 * local_8;
              local_1fc = CONCAT44((fVar16 + local_208._4_4_ + (float)local_8c + fVar16) *
                                   (float)piVar9,
                                   (fVar17 + (float)local_208 + local_70 + fVar17) * (float)piVar9);
              local_1f4 = (fVar18 + local_200 + (float)piStack_48 + fVar18) * (float)piVar9;
              fVar19 = (local_8 * (float)local_6c - local_c * local_80) +
                       (float)local_2c * (float)local_68;
              fVar18 = (local_c * (float)local_68 - local_14 * (float)local_6c) +
                       (float)local_2c * local_80;
              fVar16 = (local_14 * local_80 - local_8 * (float)local_68) +
                       (float)local_2c * (float)local_6c;
              fVar17 = fVar16 * local_8 - fVar18 * local_c;
              fVar16 = fVar19 * local_c - fVar16 * local_14;
              local_1d0 = fVar18 * local_14 - fVar19 * local_8;
              local_1d0 = local_1d0 + (float)local_6c + local_1d0;
              local_1d8 = CONCAT44(fVar16 + local_80 + fVar16,fVar17 + (float)local_68 + fVar17);
              local_1cc = *(undefined4 *)((int)fVar15 + 0x20);
              uStack_1c8 = *(undefined4 *)((int)fVar15 + 0x24);
              local_1c4 = *(undefined4 *)((int)fVar15 + 0x28);
              local_74 = local_1d0;
              local_24 = piVar9;
              piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              iVar12 = (**(code **)(*piVar5 + 0x144))(local_254);
              piVar5 = local_28;
              if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
                if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x188);
                }
                break;
              }
              local_d = (**(code **)(*local_28 + 0x1c4))();
              if (iVar12 == 0) break;
              if (local_41 == '\0') {
                if (((*(int *)(DAT_120286b8 + 0x54c) != 0) ||
                    (cVar4 = (**(code **)(*piVar5 + 0x1c4))(), cVar4 == '\0')) ||
                   (cVar4 = (**(code **)(*piVar5 + 0x228))(), cVar4 == '\0')) break;
              }
              else {
                cVar4 = (**(code **)(*local_84 + 0x228))();
                if ((cVar4 == '\0') &&
                   (((local_d == '\0' || (cVar4 = (**(code **)(*piVar5 + 0x228))(), cVar4 == '\0'))
                    || (*(int *)(DAT_120286b8 + 0x54c) != 0)))) break;
              }
              FUN_11009150(local_258);
              break;
            }
          }
        }
        iVar12 = (int)local_c;
        fVar15 = (float)((int)fVar15 + 0x78);
        local_8 = fVar15;
      }
      local_14 = (float)((int)fVar16 + 1);
    } while ((int)local_14 < iVar12);
  }
  pppppppiVar11 = (int *******)local_40;
  if ((int *******)local_40 != &local_40) {
    do {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_a0 = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      pppppppiVar3 = pppppppiVar11 + 2;
      local_9c = 0x4ffff;
      local_98 = 0;
      local_90 = 0;
      local_94 = (int ******)pppppppiVar3;
      ppppppiVar8 = (int ******)(**(code **)(**(int **)m_pThis_exref + 0x2a8))();
      local_5c = 0;
      uStack_58 = 0;
      piStack_50 = (int *)0x0;
      piStack_48 = (int *)0x0;
      *(bool *)(pppppppiVar11 + 0x56) = ppppppiVar8 == *pppppppiVar3;
      puStack_4c = (undefined1 *)0x0;
      local_60 = 0x2a;
      ppppppiStack_54 = (int ******)pppppppiVar3;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(pppppppiVar11[3]);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x24))(&local_a0);
        (**(code **)(*(int *)piVar5[3] + 0x110))(&local_60);
      }
      piVar5 = (int *)FUN_10c007c0(pppppppiVar11[3]);
      cVar4 = (**(code **)(*piVar5 + 0x2a4))(pppppppiVar11[0x14]);
      if (cVar4 == '\0') {
        local_c8 = (int *****)pppppppiVar11[0x16];
        pppppiStack_c4 = (int *****)pppppppiVar11[0x17];
        local_c0 = (int *****)pppppppiVar11[0x18];
        param_3 = CONCAT13(1,(undefined3)param_3);
      }
      pppppppiVar11 = (int *******)*pppppppiVar11;
    } while (pppppppiVar11 != &local_40);
  }
  pppppppiVar11 = (int *******)local_20;
  if ((int *******)local_20 != &local_20) {
    do {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_a0 = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      local_94 = (int ******)(pppppppiVar11 + 2);
      local_9c = 0x4ffff;
      local_98 = 0;
      local_90 = 0;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(pppppppiVar11[3]);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x24))(&local_a0);
      }
      pppppppiVar11 = (int *******)*pppppppiVar11;
    } while (pppppppiVar11 != &local_20);
  }
  piVar5 = local_18;
  if (param_3._3_1_ == '\0') {
    cVar4 = '\0';
    if (param_2._3_1_ != '\0') {
      iVar12 = *local_18;
      local_38 = 0;
      local_30 = (int *)0x0;
      piStack_50 = (int *)0x0;
      puStack_4c = &DAT_3f800000;
      piStack_48 = (int *)0x0;
      uVar10 = (**(code **)(*(int *)local_18[3] + 200))(local_bc,1,&piStack_50,&local_38,0);
      (**(code **)(iVar12 + 0x9c))(1,1,uVar10);
      cVar4 = param_3._3_1_;
    }
    if (((DAT_11de98c4 <
          (float)(double)((ulonglong)(double)((float)piVar5[0x31] - local_ac) & DAT_11de9c70)) ||
        (DAT_11de98c4 <
         (float)(double)((ulonglong)(double)((float)piVar5[0x32] - fStack_a8) & DAT_11de9c70))) ||
       (DAT_11de98c4 <
        (float)(double)((ulonglong)(double)((float)piVar5[0x33] - local_a4) & DAT_11de9c70)))
    goto LAB_1100803a;
    piVar5[0x34] = piVar5[0x34] + 1;
    if (3 < piVar5[0x34]) {
      local_38 = 0;
      local_30 = (int *)0x0;
      piStack_50 = (int *)0x0;
      puStack_4c = &DAT_3f800000;
      piStack_48 = (int *)0x0;
      (**(code **)(*piVar5 + 0x9c))(1,1,&local_ac,1,&piStack_50,&local_38,0);
      cVar4 = '\x01';
      piVar5[0x34] = 0;
    }
    *(ulonglong *)(piVar5 + 0x31) = CONCAT44(fStack_a8,local_ac);
    piVar5[0x33] = (int)local_a4;
    if (cVar4 == '\0') goto LAB_1100803a;
  }
  local_70 = (float)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x58))
                              (&local_c8,&DAT_40400000,&param_2,0x1e);
  param_3 = 0;
  if (0 < (int)local_70) {
    do {
      piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x5c))
                                (*(undefined4 *)(param_2 + param_3 * 4));
      local_8c = piVar9;
      if (piVar9 != (int *)0x0) {
        piStack_48 = (int *)(**(code **)(*local_64 + 0x288))();
        local_84 = (int *)(**(code **)(*piVar9 + 0x288))();
        if ((((*(int *)(DAT_1202e818 + 0xd0) == 0) ||
             (iVar12 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar12 != 1)) ||
            (local_84 == (int *)0x0)) ||
           ((piStack_48 == (int *)0x0 ||
            (cVar4 = (**(code **)(*piStack_48 + 0x50))(local_84), cVar4 != '\0')))) {
          uVar10 = (**(code **)(*piVar9 + 4))();
          iVar12 = FUN_10c007c0(uVar10);
          if (iVar12 == 0) {
            uVar10 = (**(code **)(*piVar9 + 4))(piVar5[0x12],0,0xffffffff,0xffffffff,0);
            FUN_10b27660(piVar5[0x10],uVar10);
            iVar12 = piVar5[7];
            local_3cc = piVar5[2];
            local_2c4 = **(undefined4 **)(iVar12 + 0xb4);
            local_2c0 = *(undefined4 *)(*(int *)(iVar12 + 0xb4) + 0x14);
            local_38c = *(undefined4 *)(*(int *)(iVar12 + 0xb4) + 0x10);
            puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(local_bc);
            pfVar7 = (float *)(**(code **)(*local_8c + 200))(&local_98);
            uVar1 = *puVar6;
            local_74 = *(float *)(puVar6 + 1);
            local_7c._0_4_ = (float)uVar1;
            local_7c._0_4_ = *pfVar7 - (float)local_7c;
            local_7c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_7c._4_4_ = pfVar7[1] - local_7c._4_4_;
            fVar15 = local_7c._4_4_ * local_7c._4_4_ + (float)local_7c * (float)local_7c + 0.0;
            if (fVar15 <= DAT_11cbf070) {
              local_38 = DAT_1201fd04;
              local_368 = DAT_1201fd0c;
            }
            else {
              auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
              fVar16 = auVar14._0_4_;
              fVar16 = (DAT_11de9938 - fVar16 * fVar15 * fVar16 * DAT_11de98e8) * fVar16;
              local_30 = (int *)(fVar16 * 0.0);
              local_38 = CONCAT44(local_7c._4_4_ * fVar16,(float)local_7c * fVar16);
              local_368 = local_30;
            }
            local_370 = local_38;
            local_7c = uVar1;
            piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar9 = (int *)(**(code **)(*piVar9 + 0x60))();
            uStack_58 = (**(code **)(*piVar9 + 0x18))("GameOnHit");
            puStack_4c = local_3d8;
            ppppppiStack_54 = (int ******)0x4ffff;
            piStack_50 = (int *)0x0;
            piStack_48 = (int *)0x0;
            piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar9 = (int *)(**(code **)(*piVar9 + 0x144))(local_3d4);
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 0x24))(&uStack_58);
            }
          }
        }
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)local_70);
  }
LAB_1100803a:
  pppppppiVar11 = (int *******)local_20;
  if ((int *******)local_20 != &local_20) {
    do {
      pppppppiVar3 = (int *******)*pppppppiVar11;
      FUN_10c3d5d0(pppppppiVar11);
      pppppppiVar11 = pppppppiVar3;
    } while (pppppppiVar3 != &local_20);
  }
  local_20 = (int ******)&local_20;
  pppppppiVar11 = (int *******)local_40;
  local_1c = local_20;
  if ((int *******)local_40 != &local_40) {
    do {
      pppppppiVar3 = (int *******)*pppppppiVar11;
      FUN_10c3d5d0(pppppppiVar11);
      pppppppiVar11 = pppppppiVar3;
    } while (pppppppiVar3 != &local_40);
  }
  return;
}



