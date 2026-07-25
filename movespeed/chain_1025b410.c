// FUN_1025b410 @ 1025b410  depth 2  (269 bytes)


/* [RE-AUTO c0] */

void __thiscall FUN_1025b410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_58;
  undefined4 auStack_54 [4];
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_30;
  if ((*(char *)(param_1 + 0x60) == '\0') || (*(int **)(param_1 + 0x1c) == (int *)0x0)) {
LAB_1025b508:
    FUN_11a89daa();
    return;
  }
  puStack_3c = *(undefined1 **)(param_1 + 0x5c);
  puStack_40 = (undefined4 *)0x1025b445;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (piVar1 == (int *)0x0) goto LAB_1025b508;
  puStack_3c = (undefined1 *)0x1025b454;
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) goto LAB_1025b508;
  puStack_18 = auStack_28;
  auStack_28[0] = 0;
  uStack_10 = 2;
  uStack_2c = param_3;
  puStack_14 = puStack_18;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    puStack_3c = *(undefined1 **)(param_1 + 0x5c);
    puStack_40 = (undefined4 *)0x1025b495;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    if (piVar1 != (int *)0x0) {
      puStack_3c = (undefined1 *)0x1025b4a0;
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      goto LAB_1025b4a6;
    }
  }
  piVar1 = (int *)0x0;
LAB_1025b4a6:
  uStack_58 = uStack_2c;
  puStack_44 = auStack_54;
  puStack_40 = puStack_44;
  FUN_100b62c0(puStack_14,puStack_18);
  puStack_3c = puStack_18;
  (**(code **)(*piVar1 + 4))(param_2,0);
  if ((puStack_44 != &uStack_58) && (puStack_44 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puStack_44);
  }
  FUN_11a89daa();
  return;
}

