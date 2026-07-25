// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CConditionSuccessful vtbl[4] @105fc000 =====

undefined4 FUN_105fc000(void)

{
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CConditionSuccessful vtbl[7] @106216c0 =====

char * FUN_106216c0(void)

{
  return "CConditionSuccessful";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CConditionSuccessful vtbl[10] @10623c40 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10623c40(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)
// vtbl[13] @103d7ae0  (emitted elsewhere)
// vtbl[14] @103dc6f0  (emitted elsewhere)
