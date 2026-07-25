// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CEntityMoveToTarget vtbl[3] @10570c70 =====

/* [RE-AUTO c0] */

void FUN_10570c70(void)

{
  FUN_103dc9e0();
  return;
}


// ===== CEntityMoveToTarget vtbl[4] @10570c80 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10570c80(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  float local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  local_10 = param_1;
  if (*(char *)(*(int *)((int)param_1 + 0x20) + 0xd8) == '\0') {
    uVar2 = FUN_10571000();
    return uVar2;
  }
  piVar3 = *(int **)((int)param_1 + 0x2c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (((2 < (uint)(piVar3[1] - *piVar3 >> 2)) && (8 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar3[3] + 8))) {
    FUN_103d8940(*(int *)(piVar3[3] + 8),&local_2c);
    cVar1 = FUN_10552d10();
    if (((cVar1 != '\0') &&
        (piVar3 = *(int **)((int)param_1 + 0x2c), 3 < (uint)(piVar3[1] - *piVar3 >> 2))) &&
       ((0xc < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU) && (-1 < *(int *)(piVar3[3] + 0xc))))) {
      FUN_103d8940(*(int *)(piVar3[3] + 0xc),&local_1c);
      cVar1 = FUN_101c3720();
      if (cVar1 != '\0') {
        FUN_10a5d660();
        cVar1 = FUN_103d9e70(0);
        local_18 = 0;
        if ((cVar1 != '\0') && (cVar1 = FUN_10552dd0(5,&local_18), cVar1 == '\0')) {
          return 1;
        }
        iVar6 = **(int **)(DAT_113f3a18 + 0x50);
        uVar2 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0xc))();
        piVar3 = (int *)(**(code **)(iVar6 + 0x2c))(uVar2);
        local_c = piVar3;
        local_14 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_1c);
        if ((piVar3 != (int *)0x0) && (local_14 != (int *)0x0)) {
          local_5 = '\0';
          cVar1 = FUN_10569560(6,&local_5);
          if (cVar1 != '\0') {
            if (local_5 != '\0') {
              piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
              piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
              iVar6 = *piVar3;
              uVar2 = (**(code **)(**(int **)((int)local_10 + 0x54) + 0xc))();
              piVar3 = (int *)(**(code **)(iVar6 + 0xc))(uVar2);
              puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x9c))(&local_50);
              local_2c = *puVar4;
              local_28 = puVar4[1];
              local_24 = puVar4[2];
              FUN_10551270(2,&local_2c);
              piVar3 = local_c;
            }
            iVar6 = *piVar3;
            uVar2 = (**(code **)(*local_14 + 200))(&local_50);
            (**(code **)(iVar6 + 0x98))(&local_44,uVar2);
            pfVar5 = (float *)(**(code **)(*local_c + 0x94))();
            local_38 = *pfVar5;
            local_34 = pfVar5[1];
            local_30 = pfVar5[2];
            if (SQRT((local_40 - local_34) * (local_40 - local_34) +
                     (local_44 - local_38) * (local_44 - local_38) +
                     (local_3c - local_30) * (local_3c - local_30)) < DAT_113c12b8) {
              return 2;
            }
            iVar6 = (**(code **)(*local_14 + 0x274))();
            if (iVar6 != -1) {
              local_6 = '\0';
              FUN_10569560(7,&local_6);
              if (local_6 == '\0') {
                return 3;
              }
              local_14 = (int *)0x0;
              cVar1 = FUN_10552dd0(0xb,&local_14);
              if (cVar1 != '\0') {
                FUN_105595d0(0xb,&local_14);
                local_38 = 0.0;
                local_34 = 0.0;
                local_30 = 0.0;
                cVar1 = FUN_10552e20(0xc,&local_38);
                if (cVar1 != '\0') {
                  FUN_10551270(0xc,&local_2c);
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  FUN_10552e20(8,&local_50);
                  local_c = (int *)0x0;
                  FUN_10552dd0(9,&local_c);
                  local_10 = 0.0;
                  FUN_10552dd0(10,&local_10);
                  if (DAT_112fca80 <= local_10 - (float)local_c) {
                    return 3;
                  }
                }
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CEntityMoveToTarget vtbl[7] @10572240 =====

char * FUN_10572240(void)

{
  return "CEntityMoveToTarget";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CEntityMoveToTarget vtbl[10] @10572250 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10572250(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CEntityMoveToTarget vtbl[13] @105721f0 =====

void FUN_105721f0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
