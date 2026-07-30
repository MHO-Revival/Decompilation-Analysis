
/* [RE-AUTO c0] */

bool __thiscall FUN_10552e70(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_10551180(param_3);
      return cVar3 != '\0';
    }
    if (((int)param_2 < piVar1[4] - piVar1[3] >> 2) &&
       (iVar4 = *(int *)(piVar1[3] + param_2 * 4), -1 < iVar4)) {
      FUN_103d8940(iVar4,param_3);
      uVar2 = FUN_10552d10();
      return (bool)uVar2;
    }
  }
  return false;
}

