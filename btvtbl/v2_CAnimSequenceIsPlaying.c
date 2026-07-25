// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CAnimSequenceIsPlaying vtbl[4] @10554160 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10554160(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar1 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
  if (piVar3 != (int *)0x0) {
    FUN_10a5d660();
    cVar2 = FUN_103dbbb0(0,&local_8);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar3 + 0xc0))();
      if (cVar2 != '\0') {
        return 2;
      }
    }
    else {
      iVar1 = *piVar3;
      uVar4 = FUN_10a5ec80();
      cVar2 = (**(code **)(iVar1 + 0xb8))(uVar4);
      if (cVar2 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CAnimSequenceIsPlaying vtbl[7] @105542d0 =====

char * FUN_105542d0(void)

{
  return "CAnimSequenceIsPlaying";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CAnimSequenceIsPlaying vtbl[10] @105542e0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_105542e0(undefined4 param_1,int *param_2)

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

// ===== CAnimSequenceIsPlaying vtbl[13] @103d7ae0 =====

void FUN_103d7ae0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
