// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSetArea vtbl[4] @105cdaa0 =====

/* [RE-AUTO c0]
   strings:
     ""Actor"" */

undefined4 __fastcall FUN_105cdaa0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)DAT_113f3a18[0x14];
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar1 + 0x2c))(uVar3);
  if (piVar4 == (int *)0x0) {
    return 1;
  }
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x94))();
  local_18 = *puVar5;
  local_14 = puVar5[1];
  local_10 = puVar5[2];
  piVar4 = (int *)(**(code **)(*(int *)*DAT_113f3a18 + 0xe0))();
  uVar3 = (**(code **)(*piVar4 + 0x160))(&local_18,0x156,1);
  FUN_10a5d620(uVar3);
  FUN_10a5dbf0("Actor");
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0xffffffff) {
    FUN_103c9820(uVar2);
    if (uVar2 < 1000000) {
      FUN_101cd500(uVar2,local_8);
      return 2;
    }
    local_c = local_8;
    uVar3 = FUN_10a5ec80();
    FUN_101cbb50(uVar2 - 1000000,uVar3);
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSetArea vtbl[7] @10622330 =====

char * FUN_10622330(void)

{
  return "CSetArea";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSetArea vtbl[10] @10627aa0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10627aa0(undefined4 param_1,int *param_2)

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

// ===== CSetArea vtbl[13] @105cdc20 =====

/* [RE-AUTO c0] */

void __fastcall FUN_105cdc20(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 local_8 [4];
  
  FUN_10a5d660();
  cVar1 = FUN_103dbbb0(0,local_8);
  if (cVar1 == '\0') {
    puVar2 = &DAT_1130a910;
  }
  else {
    puVar2 = (undefined *)FUN_10a5ec80();
  }
  uVar3 = FUN_10a5d620(puVar2);
  uVar3 = FUN_103c8620(uVar3);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
