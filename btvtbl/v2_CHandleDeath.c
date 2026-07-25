// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CHandleDeath vtbl[4] @105979b0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105979b0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_c [6];
  char local_6;
  char local_5;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar5 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0xc))(uVar4);
  local_5 = '\0';
  if (piVar3 != (int *)0x0) {
    cVar2 = FUN_103db9b0(0,&local_5);
    if ((cVar2 != '\0') && (local_5 != '\0')) {
      (**(code **)(*piVar3 + 0x278))(0);
      (**(code **)(*piVar3 + 0x334))(1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((2 < (uint)(piVar1[1] - *piVar1 >> 2)) && (8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 8))) {
    FUN_103d8940(*(int *)(piVar1[3] + 8),local_c);
    FUN_101c3720();
  }
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 800))();
    if (piVar3 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar3 + 0xa8))();
      if (iVar5 == 1) {
        iVar5 = FUN_10afd810();
        if (*(char *)(iVar5 + 0x98) == '\0') {
          FUN_10afd810();
          return 2;
        }
        local_6 = '\x01';
        FUN_10569560(1,&local_6);
        if (local_6 != '\0') {
          (**(code **)(*piVar3 + 0x1b4))();
        }
        (**(code **)(*piVar3 + 0x1b0))();
        return 2;
      }
      iVar5 = (**(code **)(*piVar3 + 0xa8))();
      if (iVar5 == 8) {
        (**(code **)(*(int *)piVar3[3] + 0x1c))(piVar3);
      }
    }
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CHandleDeath vtbl[7] @10621c60 =====

char * FUN_10621c60(void)

{
  return "CHandleDeath";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CHandleDeath vtbl[10] @10625860 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10625860(undefined4 param_1,int *param_2)

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

// ===== CHandleDeath vtbl[13] @10597c80 =====

void FUN_10597c80(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
