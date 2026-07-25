
// ===== [d0] FUN_103dc9e0 @103dc9e0  (83 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc9e0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar1 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar1 + 0xfc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x103dca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
    return;
  }
  return;
}

