
/* [RE-AUTO c0] */

int __fastcall thunk_FUN_11ad8990(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piStack_8;
  
  if (param_1[0xb] == 0) {
    piStack_8 = param_1;
    piVar2 = (int *)(**(code **)(*param_1 + 4))(&piStack_8,*(int *)(param_1[4] + 8) + 0x3fb8);
    if (*piVar2 != 0) {
      piVar1 = (int *)(*piVar2 + 4);
      *piVar1 = *piVar1 + 1;
    }
    if (param_1[0xb] != 0) {
      piVar1 = (int *)(param_1[0xb] + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_11ac60d0();
      }
    }
    param_1[0xb] = *piVar2;
    if (piStack_8 != (int *)0x0) {
      piVar2 = piStack_8 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_11ac60d0();
      }
    }
    FUN_11ac9b20((byte)((ushort)*(undefined2 *)((int)param_1 + 0x3e) >> 0xe) & 1);
  }
  return param_1[0xb];
}

