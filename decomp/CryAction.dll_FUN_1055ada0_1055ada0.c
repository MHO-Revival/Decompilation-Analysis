
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1055ada0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_c;
  undefined4 local_8;
  
  cVar2 = FUN_103dba30(0,&local_8);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (((2 < (uint)(piVar1[1] - *piVar1 >> 2)) && (8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
       && (-1 < *(int *)(piVar1[3] + 8))) {
      FUN_103d8940(*(int *)(piVar1[3] + 8),&local_8);
      FUN_101c3620();
    }
    cVar2 = FUN_103d8660(1);
    if (cVar2 == '\0') {
      iVar5 = **(int **)(DAT_113f3a18 + 0x50);
      uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      piVar4 = (int *)(**(code **)(iVar5 + 0x2c))(uVar3);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x2c);
      piVar4 = local_c;
      if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) &&
          (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar1[3] + 4))) {
        FUN_103d8940(*(int *)(piVar1[3] + 4),&local_c);
        cVar2 = FUN_101c3720();
        piVar4 = local_c;
        if (cVar2 != '\0') {
          piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_c);
        }
      }
    }
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x288))(), iVar5 != 0)) {
      FUN_10a6c5a0();
      uVar3 = (**(code **)(*piVar4 + 0x288))(local_8,0);
      FUN_10a6c240(uVar3);
    }
    return 2;
  }
  return 1;
}

