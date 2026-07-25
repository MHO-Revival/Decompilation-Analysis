// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSetBlackBoardEqualString vtbl[4] @1062b5f0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1062b5f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  FUN_10629620();
  if (*(char *)(param_1 + 0x70) == '\0') {
    return 1;
  }
  FUN_10a5d660();
  FUN_103dc170(*(undefined4 *)(param_1 + 100),&local_8);
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 != 0xffffffff) {
    FUN_103c9820(uVar1);
    if (uVar1 < 1000000) {
      FUN_101cd500(uVar1,local_8);
      return 2;
    }
    uVar2 = FUN_10a5ec80();
    FUN_101cbb50(uVar1 - 1000000,uVar2);
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSetBlackBoardEqualString vtbl[7] @106212e0 =====

char * FUN_106212e0(void)

{
  return "CSetBlackBoardEqualString";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSetBlackBoardEqualString vtbl[10] @10622830 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10622830(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x74,1);
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
