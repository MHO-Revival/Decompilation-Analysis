// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CEntityMove vtbl[3] @1056c430 =====

/* [RE-AUTO c0] */

void FUN_1056c430(void)

{
  FUN_103dc9e0();
  return;
}


// ===== CEntityMove vtbl[4] @1056c440 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1056c440(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_5;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar3 = FUN_1056c5a0();
    return uVar3;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) && (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 4))) {
    FUN_103d8940(*(int *)(piVar1[3] + 4),local_24);
    cVar2 = FUN_10552d10();
    if (((cVar2 != '\0') &&
        (piVar1 = *(int **)(param_1 + 0x2c), 2 < (uint)(piVar1[1] - *piVar1 >> 2))) &&
       ((8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU) && (-1 < *(int *)(piVar1[3] + 8))))) {
      FUN_103d8940(*(int *)(piVar1[3] + 8),&local_18);
      cVar2 = FUN_10552d10();
      if (cVar2 != '\0') {
        iVar4 = **(int **)(DAT_113f3a18 + 0x50);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if (iVar4 != 0) {
          local_5 = 0;
          cVar2 = FUN_10569560(5,&local_5);
          if (cVar2 != '\0') {
            if (SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10) <
                (float)DAT_113076e8) {
              return 2;
            }
            return 3;
          }
        }
      }
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CEntityMove vtbl[7] @1056ccf0 =====

char * FUN_1056ccf0(void)

{
  return "CEntityMove";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CEntityMove vtbl[10] @1056cd00 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1056cd00(undefined4 param_1,int *param_2)

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

// ===== CEntityMove vtbl[13] @1056cc40 =====

void FUN_1056cc40(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
