
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

