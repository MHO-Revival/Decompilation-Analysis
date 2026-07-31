
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10573430(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  int local_c;
  char local_5;
  
  local_c = param_1;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar4 = FUN_105736a0();
    return uVar4;
  }
  piVar3 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar3[1] - *piVar3 >> 2)) && (8 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar3[3] + 8))) {
    FUN_103d8940(*(int *)(piVar3[3] + 8),&local_30);
    cVar2 = FUN_10552d10();
    if (cVar2 != '\0') {
      local_5 = FUN_103d9e70(4);
      piVar3 = *(int **)(param_1 + 0x2c);
      if (((3 < (uint)(piVar3[1] - *piVar3 >> 2)) &&
          (0xc < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar3[3] + 0xc))) {
        FUN_103d8940(*(int *)(piVar3[3] + 0xc),&local_24);
        cVar2 = FUN_10552d10();
        if (cVar2 != '\0') {
          piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
          piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
          iVar5 = *piVar3;
          uVar4 = (**(code **)(**(int **)(local_c + 0x54) + 0xc))();
          piVar3 = (int *)(**(code **)(iVar5 + 0xc))(uVar4);
          if (piVar3 != (int *)0x0) {
            iVar5 = local_c;
            if (local_5 != '\0') {
              fVar6 = (float10)(**(code **)(*piVar3 + 0xac))();
              local_10 = (float)fVar6;
              local_1c = DAT_113c12c8 / local_10;
              local_24 = (float)((uint)local_30 & DAT_112fcb10) * local_1c;
              local_20 = (float)((uint)local_2c & DAT_112fcb10) * local_1c;
              local_1c = (float)((uint)local_28 & DAT_112fcb10) * local_1c;
              fVar6 = (float10)(**(code **)(*piVar3 + 0xb4))();
              iVar5 = local_c;
              local_24 = (float)((float10)local_24 * fVar6);
              local_20 = (float)((float10)local_20 * fVar6);
              local_1c = (float)(fVar6 * (float10)local_1c);
              FUN_10551270(3,&local_24);
            }
            local_14 = 0;
            FUN_10551c20(0,&local_14);
            local_18 = 0;
            FUN_1055aad0(1,&local_18);
            iVar1 = **(int **)(DAT_113f3a18 + 0x50);
            uVar4 = (**(code **)(**(int **)(iVar5 + 0x54) + 0xc))();
            iVar5 = (**(code **)(iVar1 + 0x2c))(uVar4);
            if (iVar5 != 0) {
              if (DAT_112fca80 <=
                  SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28)) {
                return 3;
              }
              return 2;
            }
          }
          return 1;
        }
      }
    }
  }
  return 1;
}

