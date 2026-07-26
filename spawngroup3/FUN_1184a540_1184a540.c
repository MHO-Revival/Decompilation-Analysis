
/* [RE-AUTO c0] */

void __thiscall FUN_1184a540(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_2;
  while( true ) {
    if (puVar1 == param_2) {
      return;
    }
    if ((-1 < (int)puVar1[3]) &&
       ((iVar2 = *param_1, iVar2 < 0 || (((int)puVar1[4] <= iVar2 && (iVar2 <= (int)puVar1[5]))))))
    break;
    puVar1 = (undefined4 *)*puVar1;
  }
  param_1[3] = param_1[3] + puVar1[3];
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x10);
}

