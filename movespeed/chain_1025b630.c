// FUN_1025b630 @ 1025b630  depth 2  (246 bytes)


/* [RE-AUTO c0] */

void __thiscall FUN_1025b630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_5c;
  undefined4 auStack_58 [4];
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_30 [5];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_30;
  if ((*(char *)(param_1 + 0x60) == '\0') || (*(int **)(param_1 + 0x1c) == (int *)0x0)) {
LAB_1025b711:
    FUN_11a89daa();
    return;
  }
  uStack_3c = *(undefined4 *)(param_1 + 0x5c);
  uStack_40 = 0x1025b668;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (piVar1 == (int *)0x0) goto LAB_1025b711;
  uStack_3c = 0x1025b677;
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) goto LAB_1025b711;
  uStack_3c = param_3;
  uStack_40 = 0x1025b689;
  FUN_10255c50();
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    uStack_40 = *(undefined4 *)(param_1 + 0x5c);
    puStack_44 = (undefined4 *)0x1025b69e;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    if (piVar1 != (int *)0x0) {
      uStack_40 = 0x1025b6a9;
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      goto LAB_1025b6af;
    }
  }
  piVar1 = (int *)0x0;
LAB_1025b6af:
  uStack_5c = auStack_30[0];
  puStack_48 = auStack_58;
  puStack_44 = puStack_48;
  FUN_100b62c0(uStack_18,uStack_1c);
  uStack_40 = uStack_1c;
  (**(code **)(*piVar1 + 4))(param_2,0);
  if ((puStack_48 != &uStack_5c) && (puStack_48 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  FUN_11a89daa();
  return;
}

