// FUN_11bddb50 @ 11bddb50  (3270 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 7, 12, 15, 16, 17, 18, 20, 24, 25, 27, 28]


/* [RE-AUTO c0] */

void __thiscall FUN_11bddb50(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_2;
  local_124 = 0;
  (**(code **)(*param_2 + 0x28))(&local_124,8);
  *(undefined4 *)(param_1 + 8) = (undefined4)local_124;
  *(undefined4 *)(param_1 + 0xc) = local_124._4_4_;
  local_9c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_9c,4);
  uVar5 = param_3;
  *(undefined4 *)(param_1 + 0x10) = local_9c;
  if (0x20 < param_3) {
    local_c8 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_c8,4);
    *(undefined4 *)(param_1 + 0x14) = local_c8;
    param_2 = (int *)((uint)param_2 & 0xffffff);
    (**(code **)(*piVar1 + 0x28))((int)&param_2 + 3,1);
    *(bool *)(param_1 + 0x18) = param_2._3_1_ != '\0';
  }
  local_d8 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_d8,4);
  *(undefined4 *)(param_1 + 0x1c) = local_d8;
  local_e0 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_e0,4);
  *(undefined4 *)(param_1 + 0x24) = local_e0;
  local_ec = 0;
  (**(code **)(*piVar1 + 0x28))(&local_ec,4);
  *(undefined4 *)(param_1 + 0x20) = local_ec;
  if (uVar5 < 0x15) {
    local_10c = 0;
    (**(code **)(*piVar1 + 0x28))(&local_10c,4);
  }
  local_24 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_24,4);
  *(undefined4 *)(param_1 + 0x28) = local_24;
  local_100 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_100,4);
  *(undefined4 *)(param_1 + 0x2c) = local_100;
  if (0x1f < uVar5) {
    local_2c = 0;
    (**(code **)(*piVar1 + 0x28))(&local_2c,4);
    *(undefined4 *)(param_1 + 0x30) = local_2c;
    local_ac = 0;
    (**(code **)(*piVar1 + 0x28))(&local_ac,4);
    *(undefined4 *)(param_1 + 0x34) = local_ac;
    local_34 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_34,4);
    *(undefined4 *)(param_1 + 0x38) = local_34;
    local_108 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_108,4);
    *(undefined4 *)(param_1 + 0x3c) = local_108;
    local_3c = 0;
    (**(code **)(*piVar1 + 0x28))(&local_3c,4);
    *(undefined4 *)(param_1 + 0x40) = local_3c;
    local_b4 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_b4,4);
    *(undefined4 *)(param_1 + 0x44) = local_b4;
  }
  local_44 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_44,4);
  *(undefined4 *)(param_1 + 0x48) = local_44;
  local_fc = 0;
  (**(code **)(*piVar1 + 0x28))(&local_fc,4);
  *(undefined4 *)(param_1 + 0x4c) = local_fc;
  local_4c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_4c,4);
  *(undefined4 *)(param_1 + 0x50) = local_4c;
  local_bc = 0;
  (**(code **)(*piVar1 + 0x28))(&local_bc,4);
  *(undefined4 *)(param_1 + 0x54) = local_bc;
  if (0x1d < uVar5) {
    local_54 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_54,4);
    *(undefined4 *)(param_1 + 0x58) = local_54;
  }
  local_f4 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_f4,4);
  *(undefined4 *)(param_1 + 0x5c) = local_f4;
  local_5c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_5c,4);
  *(undefined4 *)(param_1 + 0x60) = local_5c;
  local_c4 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_c4,4);
  *(undefined4 *)(param_1 + 100) = local_c4;
  if (0x24 < uVar5) {
    local_64 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_64,4);
    *(undefined4 *)(param_1 + 0x68) = local_64;
  }
  local_104 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_104,4);
  *(undefined4 *)(param_1 + 0x6c) = local_104;
  local_6c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_6c,4);
  *(undefined4 *)(param_1 + 0x70) = local_6c;
  local_cc = 0;
  (**(code **)(*piVar1 + 0x28))(&local_cc,4);
  *(undefined4 *)(param_1 + 0x74) = local_cc;
  if (0xf < uVar5) {
    local_74 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_74,4);
    *(undefined4 *)(param_1 + 0x78) = local_74;
  }
  local_e8 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_e8,4);
  *(undefined4 *)(param_1 + 0x7c) = local_e8;
  local_7c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_7c,4);
  *(undefined4 *)(param_1 + 0x80) = local_7c;
  local_d4 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_d4,4);
  *(undefined4 *)(param_1 + 0x84) = local_d4;
  local_84 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_84,4);
  *(undefined4 *)(param_1 + 0x88) = local_84;
  local_f0 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_f0,4);
  *(undefined4 *)(param_1 + 0x8c) = local_f0;
  local_8c = 0;
  (**(code **)(*piVar1 + 0x28))(&local_8c,4);
  *(undefined4 *)(param_1 + 0x90) = local_8c;
  local_dc = 0;
  (**(code **)(*piVar1 + 0x28))(&local_dc,4);
  *(undefined4 *)(param_1 + 0x94) = local_dc;
  local_94 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_94,4);
  *(undefined4 *)(param_1 + 0x98) = local_94;
  if (0xd < uVar5) {
    local_f8 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_f8,4);
    *(undefined4 *)(param_1 + 0x9c) = local_f8;
    local_1c = 0;
    (**(code **)(*piVar1 + 0x28))(&local_1c,4);
    *(undefined4 *)(param_1 + 0xa0) = local_1c;
    local_e4 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_e4,4);
    *(undefined4 *)(param_1 + 0xa4) = local_e4;
    if (0x17 < uVar5) {
      local_a4 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_a4,4);
      *(undefined4 *)(param_1 + 0xa8) = local_a4;
    }
    if (0x1a < uVar5) {
      local_20 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_20,4);
      *(undefined4 *)(param_1 + 0xac) = local_20;
      local_28 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_28,4);
      *(undefined4 *)(param_1 + 0xb0) = local_28;
    }
    if (0x21 < uVar5) {
      local_30 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_30,4);
      *(undefined4 *)(param_1 + 0xb4) = local_30;
    }
  }
  local_38 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_38,4);
  *(undefined4 *)(param_1 + 0xb8) = local_38;
  local_40 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_40,4);
  *(undefined4 *)(param_1 + 0xbc) = local_40;
  if (0x1c < uVar5) {
    local_48 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_48,4);
    *(undefined4 *)(param_1 + 0xc0) = local_48;
  }
  local_50 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_50,4);
  *(undefined4 *)(param_1 + 0xc4) = local_50;
  if (0x27 < uVar5) {
    local_58 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_58,4);
    *(undefined4 *)(param_1 + 200) = local_58;
  }
  local_60 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_60,4);
  *(undefined4 *)(param_1 + 0xcc) = local_60;
  if (0x22 < uVar5) {
    local_68 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_68,4);
    *(undefined4 *)(param_1 + 0xd0) = local_68;
  }
  local_70 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_70,4);
  *(undefined4 *)(param_1 + 0xd4) = local_70;
  if (0x1b < uVar5) {
    local_78 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_78,4);
    *(undefined4 *)(param_1 + 0xd8) = local_78;
    local_80 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_80,4);
    *(undefined4 *)(param_1 + 0xdc) = local_80;
    local_88 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_88,4);
    *(undefined4 *)(param_1 + 0xe0) = local_88;
  }
  local_90 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_90,4);
  *(undefined4 *)(param_1 + 0xe4) = local_90;
  local_98 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_98,4);
  *(undefined4 *)(param_1 + 0xe8) = local_98;
  local_a0 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_a0,4);
  *(undefined4 *)(param_1 + 0xec) = local_a0;
  local_a8 = 0;
  (**(code **)(*piVar1 + 0x28))(&local_a8,4);
  *(undefined4 *)(param_1 + 0xf0) = local_a8;
  if (0x1f < uVar5) {
    local_b0 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_b0,4);
    *(undefined4 *)(param_1 + 0xf4) = local_b0;
    local_b8 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_b8,4);
    *(undefined4 *)(param_1 + 0xf8) = local_b8;
  }
  local_c0 = (int *)0x0;
  (**(code **)(*piVar1 + 0x28))(&local_c0,4);
  local_10 = *(int **)(param_1 + 0x100);
  local_c = local_c0;
  FUN_11b3f240(param_1 + 0xfc,local_c0);
  if (local_10 < local_c) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xfc) + (int)local_10 * 4);
    for (iVar3 = (int)local_c - (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    }
  }
  local_8 = (int *)0x0;
  if (*(int *)(param_1 + 0x100) != 0) {
    do {
      local_128 = 0x242;
      iVar3 = (**(code **)(*DAT_123b004c + 0x38))(param_1,0x48,&local_128);
      if (iVar3 == 0) {
        local_14 = (int *)0x0;
      }
      else {
        local_14 = (int *)FUN_11bd7120();
      }
      local_10 = (int *)((int)local_8 * 4);
      local_c = (int *)(*(int *)(param_1 + 0xfc) + (int)local_10);
      if (*local_c != 0) {
        FUN_11a8ad60();
      }
      *local_c = (int)local_14;
      FUN_11bdd720(piVar1,uVar5);
      local_8 = (int *)((int)local_8 + 1);
    } while (local_8 < *(uint *)(param_1 + 0x100));
  }
  if (0xe < uVar5) {
    FUN_11bdd0e0(piVar1,uVar5);
  }
  if (0x18 < uVar5) {
    FUN_11bdd380(piVar1,uVar5);
  }
  local_14 = (int *)0x0;
  (**(code **)(*piVar1 + 0x28))(&local_14,4);
  local_8 = local_14;
  if (local_14 < *(int **)(param_1 + 0x114)) {
    piVar6 = local_14;
    if (local_14 < (int *)(*(uint *)(param_1 + 0x118) >> 1)) {
LAB_11bde4d9:
      FUN_11b3e5c0(param_1 + 0x110,piVar6);
    }
  }
  else if (*(int **)(param_1 + 0x118) < local_14) {
    piVar6 = (int *)(((uint)local_14 >> 2) + (int)local_14);
    goto LAB_11bde4d9;
  }
  *(int **)(param_1 + 0x114) = local_8;
  if (*(int *)(param_1 + 0x114) != 0) {
    uVar4 = 0;
    do {
      local_d0 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_d0,4);
      *(undefined4 *)(*(int *)(param_1 + 0x110) + uVar4 * 4) = local_d0;
      uVar4 = uVar4 + 1;
      uVar5 = param_3;
    } while (uVar4 < *(uint *)(param_1 + 0x114));
  }
  if (uVar5 < 9) goto LAB_11bde5d0;
  local_10 = (int *)0x0;
  (**(code **)(*piVar1 + 0x28))(&local_10,4);
  local_8 = local_10;
  if (local_10 < *(int **)(param_1 + 0x120)) {
    piVar6 = local_10;
    if (local_10 < (int *)(*(uint *)(param_1 + 0x124) >> 1)) {
LAB_11bde572:
      FUN_11b29080(param_1 + 0x11c,piVar6);
    }
  }
  else if (*(int **)(param_1 + 0x124) < local_10) {
    piVar6 = (int *)(((uint)local_10 >> 2) + (int)local_10);
    goto LAB_11bde572;
  }
  *(int **)(param_1 + 0x120) = local_8;
  if (*(int *)(param_1 + 0x120) != 0) {
    uVar4 = 0;
    do {
      local_130 = 0;
      (**(code **)(*piVar1 + 0x28))(&local_130,8);
      iVar3 = *(int *)(param_1 + 0x11c);
      *(undefined4 *)(iVar3 + uVar4 * 8) = (undefined4)local_130;
      *(undefined4 *)(iVar3 + 4 + uVar4 * 8) = local_130._4_4_;
      uVar4 = uVar4 + 1;
      uVar5 = param_3;
    } while (uVar4 < *(uint *)(param_1 + 0x120));
  }
LAB_11bde5d0:
  FUN_11befeb0(piVar1,uVar5);
  if (uVar5 < 0x13) {
    local_114 = 2;
    local_8 = (int *)(**(code **)(*DAT_123b004c + 0x38))(param_1,0x28,&local_114);
    if (local_8 == (int *)0x0) {
      local_8 = (int *)0x0;
    }
    else {
      *local_8 = (int)&PTR_FUN_11dbd258;
      local_8[1] = 1;
      *local_8 = (int)&PTR_FUN_11d7f754;
      FUN_11ab37a0();
      local_8[3] = 0;
      *(undefined2 *)(local_8 + 4) = 0;
      local_8[5] = 0;
      local_8[6] = 0;
      local_8[7] = 0;
      local_8[8] = 0;
      local_8[9] = 0;
    }
    FUN_11befeb0(piVar1,uVar5);
    if (local_8 != (int *)0x0) {
      FUN_11a8ad60();
    }
  }
  if (2 < uVar5) {
    FUN_11befeb0(piVar1,uVar5);
  }
  if (6 < uVar5) {
    FUN_11befeb0(piVar1,uVar5);
  }
  if (0x10 < uVar5) {
    local_c = (int *)0x0;
    (**(code **)(*piVar1 + 0x28))(&local_c,4);
    local_18 = *(int **)(param_1 + 0x138);
    local_8 = local_c;
    FUN_11b3f120(param_1 + 0x134,local_c);
    if (local_18 < local_8) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x134) + (int)local_18 * 4);
      for (iVar3 = (int)local_8 - (int)local_18; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 1;
      }
    }
    local_8 = (int *)0x0;
    if (*(int *)(param_1 + 0x138) != 0) {
      do {
        local_18 = (int *)0x242;
        puVar2 = (undefined4 *)(**(code **)(*DAT_123b004c + 0x38))(param_1,0x2c,&local_18);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = &PTR_FUN_11dbd258;
          puVar2[1] = 1;
          *puVar2 = &PTR_FUN_11d7f75c;
          puVar2[2] = 0;
          FUN_11ab37a0();
          puVar2[4] = 0;
          *(undefined1 *)(puVar2 + 5) = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
        }
        local_11c = (int)local_8 * 4;
        local_18 = (int *)(*(int *)(param_1 + 0x134) + local_11c);
        if (*local_18 != 0) {
          FUN_11a8ad60();
        }
        uVar5 = param_3;
        *local_18 = (int)puVar2;
        FUN_11bdcfb0(piVar1,param_3);
        local_8 = (int *)((int)local_8 + 1);
      } while (local_8 < *(int **)(param_1 + 0x138));
    }
  }
  if (uVar5 < 8) {
    local_110 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_110,4);
    local_118 = 0;
    (**(code **)(*piVar1 + 0x28))(&local_118,4);
  }
  return;
}

