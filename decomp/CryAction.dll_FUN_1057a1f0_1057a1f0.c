
/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1057a1f0(int param_1,uint *param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  char local_5;
  
  local_5 = FUN_103d9e70(6);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (((5 < (uint)(piVar3[1] - *piVar3 >> 2)) && (0x14 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))
      ) && (-1 < *(int *)(piVar3[3] + 0x14))) {
    FUN_103d8940(*(int *)(piVar3[3] + 0x14),&local_18);
    cVar2 = FUN_10552d10();
    if (cVar2 != '\0') {
      if (local_5 != '\0') {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        local_c = (int *)(**(code **)(*piVar3 + 0x68))();
        if (local_c == (int *)0x0) {
          return 0;
        }
        iVar1 = *local_c;
        uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
        piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
        fVar5 = (float10)(**(code **)(*piVar3 + 0xac))();
        local_c = (int *)(float)fVar5;
        local_10 = DAT_113c12c8 / (float)local_c;
        local_18 = (float)(*param_2 & DAT_112fcb10) * local_10;
        local_14 = (float)(param_2[1] & DAT_112fcb10) * local_10;
        local_10 = (float)(param_2[2] & DAT_112fcb10) * local_10;
        fVar5 = (float10)(**(code **)(*piVar3 + 0xb4))();
        local_18 = (float)((float10)local_18 * fVar5);
        local_14 = (float)((float10)local_14 * fVar5);
        local_10 = (float)(fVar5 * (float10)local_10);
      }
      *param_3 = local_18;
      param_3[1] = local_14;
      param_3[2] = local_10;
      return 1;
    }
  }
  return 0;
}

