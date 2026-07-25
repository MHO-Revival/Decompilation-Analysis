// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSelector vtbl[4] @105ed490 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105ed490(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_10a5d660();
    FUN_103dbbb0(2,local_8);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    FUN_103dd050(uVar1);
    iVar2 = FUN_103e6980(local_8);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  FUN_10a5d660();
  FUN_103dbbb0(0,local_c);
  FUN_103f8050(1,&local_10);
  FUN_105ede40(local_c,local_10);
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSelector vtbl[7] @105ed590 =====

char * FUN_105ed590(void)

{
  return "CSelectorVoter";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSelector vtbl[10] @105ed5a0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_105ed5a0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,100,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CSelector vtbl[13] @105ed540 =====

void FUN_105ed540(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
