
/* [RE-AUTO c0] */

void __fastcall thunk_FUN_11ada360(int param_1)

{
  *(ushort *)(param_1 + 0x3e) = *(ushort *)(param_1 + 0x3e) | 0x2000;
  if (*(byte *)(param_1 + 0x41) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11ada378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x41) * 4) + 0x24))();
    return;
  }
  return;
}

