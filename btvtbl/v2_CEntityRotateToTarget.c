// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CEntityRotateToTarget vtbl[3] @105789f0 =====

/* [RE-AUTO c0] */

void FUN_105789f0(void)

{
  FUN_103dc9e0();
  return;
}


// ===== CEntityRotateToTarget vtbl[4] @10578a00 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10578a00(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  float local_8;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar4 = FUN_10578bd0();
    return uVar4;
  }
  piVar5 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar5[1] - *piVar5 >> 2)) && (8 < (int)(piVar5[4] - piVar5[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar5[3] + 8))) {
    FUN_103d8940(*(int *)(piVar5[3] + 8),&local_c);
    cVar3 = FUN_101c3720();
    if (cVar3 != '\0') {
      iVar2 = **(int **)(DAT_113f3a18 + 0x50);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      local_8 = (float)(**(code **)(iVar2 + 0x2c))(uVar4);
      piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_c);
      if ((local_8 != 0.0) && (piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x274))();
        FUN_10579750(local_8,piVar5,&local_1c,local_10);
        cVar3 = FUN_1057a1f0(&local_1c,&local_28);
        if (cVar3 != '\0') {
          FUN_10551270(5,&local_28);
          local_8 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
          if (DAT_112fca80 <= SQRT(local_8)) {
            fVar6 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x1c))(0);
            fVar1 = (float)fVar6;
            if (local_24 * fVar1 * local_24 * fVar1 + local_28 * fVar1 * local_28 * fVar1 +
                local_20 * fVar1 * local_20 * fVar1 + DAT_112fca7c <= local_8) {
              return 3;
            }
          }
          return 2;
        }
      }
      return 1;
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CEntityRotateToTarget vtbl[7] @1057a390 =====

char * FUN_1057a390(void)

{
  return "CEntityRotateToTarget";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CEntityRotateToTarget vtbl[10] @1057a3a0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1057a3a0(undefined4 param_1,int *param_2)

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

// ===== CEntityRotateToTarget vtbl[13] @10579740 =====

void FUN_10579740(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
