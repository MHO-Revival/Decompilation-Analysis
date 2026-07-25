// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CCaculateDamagedState vtbl[4] @10644f35 =====

undefined4 FUN_10644f35(void)

{
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CCaculateDamagedState vtbl[7] @10560940 =====

char * FUN_10560940(void)

{
  return "CCaculateDamagedState";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CCaculateDamagedState vtbl[10] @10560950 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10560950(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x84,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CCaculateDamagedState vtbl[13] @10560840 =====

/* [RE-AUTO c0]
   strings:
     ""HitPart""
     ""NewPartBroken""
     ""NewFallDown""
     ""NewUnbalance""
     ""HitDamageHealth"" */

void __fastcall FUN_10560840(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10a5d620("HitPart");
  uVar1 = FUN_103c8620(uVar1);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_10a5d620("NewPartBroken");
  uVar1 = FUN_103c8620(uVar1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_10a5d620("NewFallDown");
  uVar1 = FUN_103c8620(uVar1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_10a5d620("NewUnbalance");
  uVar1 = FUN_103c8620(uVar1);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = FUN_10a5d620("HitDamageHealth");
  uVar1 = FUN_103c8620(uVar1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
