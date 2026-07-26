
/* [RE-AUTO c0] */

undefined4 __thiscall
FUN_100ea610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x14))
                    (param_2,param_3,param_4,param_5,param_6,param_7,param_1,FUN_100ea740);
  if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  return 0xffffffff;
}

