// CTeleportToTargetPos  name-getter slot 0x11310b40
// -6  0x11310b28 -> 0x103d8b60
// -5  0x11310b2c -> 0x103dca70
// -4  0x11310b30 -> 0x103dc9e0
// -3  0x11310b34 -> 0x105ec2c0   <== Evaluate
// -2  0x11310b38 -> 0x103d7a00
// -1  0x11310b3c -> 0x103d7a30
// +0  0x11310b40 -> 0x106226e0   <== name getter
// +1  0x11310b44 -> 0x103dc6d0
// +2  0x11310b48 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ec2c0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
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
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_6;
  char local_5;
  
  local_5 = '\x01';
  piVar2 = *(int **)(param_1 + 0x2c);
  if (((1 < (uint)(piVar2[1] - *piVar2 >> 2)) && (4 < (int)(piVar2[4] - piVar2[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar2[3] + 4))) {
    FUN_103d8940(*(int *)(piVar2[3] + 4),&local_1c);
    FUN_10552d10();
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar2[1] - *piVar2 >> 2)) && (8 < (int)(piVar2[4] - piVar2[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar2[3] + 8))) {
    FUN_103d8940(*(int *)(piVar2[3] + 8),&local_38);
    FUN_10570820();
  }
  FUN_103db9b0(4,&local_5);
  piVar2 = *(int **)(param_1 + 0x2c);
  local_c = 0;
  if (((piVar2[1] - *piVar2 >> 2 != 0) && (0 < (int)(piVar2[4] - piVar2[3] & 0xfffffffcU))) &&
     (-1 < *(int *)piVar2[3])) {
    FUN_103d8940(*(int *)piVar2[3],&local_c);
    FUN_101c3620();
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar6 = *piVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(iVar6 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    iVar6 = **(int **)(DAT_113f3a18 + 0x50);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar2 = (int *)(**(code **)(iVar6 + 0x2c))(uVar3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x90))(&local_1c,0);
    }
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x1cc))();
    if (cVar1 == '\0') {
      if ((local_5 == '\0') && ((int *)piVar2[3] != (int *)0x0)) {
        puVar4 = (undefined4 *)(**(code **)(*(int *)piVar2[3] + 0xb4))();
        local_38 = *puVar4;
        local_34 = puVar4[1];
        local_30 = puVar4[2];
        local_2c = puVar4[3];
      }
      cVar1 = (**(code **)(*piVar2 + 0x390))
                        (local_1c,local_18,local_14,local_38,local_34,local_30,local_2c,local_c);
      if (cVar1 != '\0') {
        local_6 = '\0';
        FUN_103db9b0(3,&local_6);
        if (local_6 != '\0') {
          piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 200))();
          if (piVar5 != (int *)0x0) {
            local_28 = local_1c;
            local_24 = local_18;
            local_20 = local_14;
            local_10 = (**(code **)(*piVar5 + 0x34))(&local_28);
            piVar2 = (int *)(**(code **)(*piVar2 + 800))();
            iVar6 = **(int **)(DAT_113f3a18 + 0x50);
            uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
            piVar5 = (int *)(**(code **)(iVar6 + 0x2c))(uVar3);
            uVar3 = local_10;
            if ((piVar2 != (int *)0x0) && (piVar5 != (int *)0x0)) {
              (**(code **)(*piVar2 + 0x84))(local_10);
              (**(code **)(*piVar5 + 0x2c4))(uVar3);
            }
          }
        }
        return 2;
      }
    }
    else {
      piVar2 = (int *)piVar2[3];
      if (piVar2 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar2 + 0x288))();
        if (iVar6 != 0) {
          if (local_5 == '\0') {
            puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0xb4))();
            local_38 = *puVar4;
            local_34 = puVar4[1];
            local_30 = puVar4[2];
            local_2c = puVar4[3];
          }
          piVar2 = (int *)(**(code **)(*piVar2 + 0x288))();
          iVar6 = (**(code **)(*piVar2 + 0xa8))();
          if (iVar6 == 0xb) {
            iVar6 = *piVar2;
            local_28 = local_1c;
            local_24 = local_18;
            local_20 = local_14;
            local_48 = local_38;
            local_44 = local_34;
            local_40 = local_30;
            local_3c = local_2c;
            FUN_105ec260(&local_48,&local_28);
            cVar1 = (**(code **)(iVar6 + 0x290))();
            if (cVar1 != '\0') {
              return 2;
            }
          }
        }
      }
    }
  }
  return 1;
}

