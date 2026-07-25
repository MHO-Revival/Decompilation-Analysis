
// ===== [d0] FUN_103d8b60 @103d8b60  (13 bytes) =====

void __fastcall FUN_103d8b60(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x103d8b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    return;
  }
  return;
}

