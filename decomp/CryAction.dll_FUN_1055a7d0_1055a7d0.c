
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1055a7d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_c;
  int local_8;
  
  cVar1 = FUN_103dba30(0,&local_8);
  if (cVar1 != '\0') {
    piVar6 = *(int **)(param_1 + 0x2c);
    if (((2 < (uint)(piVar6[1] - *piVar6 >> 2)) && (8 < (int)(piVar6[4] - piVar6[3] & 0xfffffffcU)))
       && (-1 < *(int *)(piVar6[3] + 8))) {
      FUN_103d8940(*(int *)(piVar6[3] + 8),&local_8);
      FUN_101c3620();
    }
    piVar6 = (int *)0x0;
    cVar1 = FUN_103d8660(1);
    if (cVar1 == '\0') {
      iVar4 = **(int **)(DAT_113f3a18 + 0x50);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
      piVar6 = (int *)(**(code **)(iVar4 + 0x2c))(uVar2);
    }
    else {
      piVar3 = *(int **)(param_1 + 0x2c);
      if (((1 < (uint)(piVar3[1] - *piVar3 >> 2)) &&
          (4 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar3[3] + 4))) {
        FUN_103d8940(*(int *)(piVar3[3] + 4),&local_c);
        cVar1 = FUN_101c3720();
        if (cVar1 != '\0') {
          piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_c);
        }
      }
    }
    iVar4 = **(int **)(DAT_113f3a18 + 0x50);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar4 + 0x2c))(uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x288))();
    if (((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x288))(), iVar5 != 0)) &&
       ((iVar4 != 0 && (local_8 != 0)))) {
      FUN_10a6c5a0();
      uVar2 = (**(code **)(*piVar6 + 0x288))(*(undefined4 *)(iVar4 + 4),local_8);
      FUN_10a6bf90(uVar2);
    }
    return 2;
  }
  return 1;
}

