// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CEntityMoveToPos vtbl[3] @1056e2f0 =====

/* [RE-AUTO c0] */

void FUN_1056e2f0(void)

{
  FUN_103dc9e0();
  return;
}


// ===== CEntityMoveToPos vtbl[4] @1056e300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""NORMAL_RUN"" */

undefined4 __fastcall FUN_1056e300(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined8 uVar8;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined1 local_13;
  char local_12;
  char local_11;
  
  local_1c = param_1;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar2 = FUN_1056e6d0();
    return uVar2;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  local_20 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (local_20 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    iVar5 = *piVar3;
    uVar2 = (**(code **)(**(int **)(local_1c + 0x54) + 0xc))();
    local_18 = (int *)(**(code **)(iVar5 + 0xc))(uVar2);
    if (local_18 != (int *)0x0) {
      FUN_10a5d620("NORMAL_RUN");
      iVar5 = local_1c;
      FUN_103dbbb0(8,&local_24);
      local_34 = 0.0;
      local_30 = 0.0;
      local_2c = 0.0;
      cVar1 = FUN_10552e20(4,&local_34);
      if ((cVar1 != '\0') && (cVar1 = FUN_10552e20(5,&local_40), cVar1 != '\0')) {
        pfVar4 = (float *)(**(code **)(*local_20 + 0x98))(&fStack_4c,&local_40);
        piVar3 = local_18;
        local_40 = *pfVar4;
        local_3c = pfVar4[1];
        local_38 = pfVar4[2];
        (**(code **)(*local_18 + 0x3f4))(*pfVar4,pfVar4[1],pfVar4[2]);
        local_13 = 1;
        FUN_103db9b0(2,&local_13);
        local_11 = '\0';
        FUN_103db9b0(0,&local_11);
        local_28 = 0;
        if ((local_11 == '\0') || (cVar1 = FUN_10552dd0(6,&local_28), cVar1 != '\0')) {
          local_12 = '\0';
          cVar1 = FUN_10569560(7,&local_12);
          if (cVar1 != '\0') {
            if (local_12 != '\0') {
              pfVar4 = (float *)(**(code **)(*piVar3 + 0x9c))(&fStack_4c);
              local_34 = *pfVar4;
              local_30 = pfVar4[1];
              local_2c = pfVar4[2];
              FUN_10551270(4,&local_34);
            }
            pfVar4 = (float *)(**(code **)(*local_20 + 0x94))();
            piVar3 = local_18;
            fStack_4c = *pfVar4;
            fStack_48 = pfVar4[1];
            fStack_44 = pfVar4[2];
            (**(code **)(*local_18 + 0x404))(*pfVar4,pfVar4[1],pfVar4[2]);
            fVar7 = SQRT((local_3c - fStack_48) * (local_3c - fStack_48) +
                         (local_40 - fStack_4c) * (local_40 - fStack_4c) +
                         (local_38 - fStack_44) * (local_38 - fStack_44));
            fStack_4c = 0.0;
            fStack_48 = 0.0;
            fStack_44 = 0.0;
            (**(code **)(*piVar3 + 0x3b4))
                      ((fVar7 / SQRT(local_30 * local_30 + local_34 * local_34 + local_2c * local_2c
                                    )) * _DAT_11307984);
            (**(code **)(*piVar3 + 0x3ac))(0);
            if (DAT_113c12b8 <= fVar7) {
              if ((*(char *)(DAT_113f3a18 + 0x209) != '\0') ||
                 (cVar1 = (**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x168))(), cVar1 != '\0'))
              {
                FUN_10a5d660();
                FUN_10553c60(0xb,&local_20);
                if (local_20 != local_24) {
                  uVar2 = (**(code **)(**(int **)(iVar5 + 0x54) + 0xc))();
                  iVar5 = FUN_103dd050(uVar2);
                  piVar3 = local_18;
                  if (iVar5 != 0) {
                    piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
                    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
                    iVar5 = *piVar3;
                    uVar2 = (**(code **)(**(int **)(local_1c + 0x54) + 0xc))();
                    iVar5 = (**(code **)(iVar5 + 0xc))(uVar2);
                    piVar3 = local_18;
                    if (iVar5 != 0) {
                      FUN_103d9e70(1);
                      piVar3 = local_18;
                    }
                  }
                }
                piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
                iVar5 = *piVar3;
                uVar8 = (**(code **)(*piVar6 + 0x228))();
                (**(code **)(iVar5 + 0x3a4))(uVar8);
              }
              return 3;
            }
            return 2;
          }
        }
      }
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CEntityMoveToPos vtbl[7] @1056f750 =====

char * FUN_1056f750(void)

{
  return "CEntityMoveToPos";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CEntityMoveToPos vtbl[10] @10565670 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10565670(undefined4 param_1,int *param_2)

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

// ===== CEntityMoveToPos vtbl[13] @1056f710 =====

void FUN_1056f710(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
