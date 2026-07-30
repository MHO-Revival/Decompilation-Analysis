
/* [RE-AUTO c0] */

void __thiscall FUN_1127b030(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x2d9);
  for (iVar1 = 0x2d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)param_2;
  *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
  return;
}

