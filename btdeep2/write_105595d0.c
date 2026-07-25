
// [d0] FUN_105595d0 @105595d0  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d1] FUN_101c3510 @101c3510  (emitted in an earlier root)

// ===== [d2] FUN_101c2f20 @101c2f20  (269 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_101c2f20(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  local_c = DAT_113dd8c0 ^ (uint)auStack_30;
  if ((*(char *)(param_1 + 0x60) == '\0') || (*(int **)(param_1 + 0x1c) == (int *)0x0)) {
LAB_101c3018:
    FUN_112bed8e();
    return;
  }
  puStack_3c = *(undefined1 **)(param_1 + 0x5c);
  puStack_40 = (undefined4 *)0x101c2f55;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (piVar1 == (int *)0x0) goto LAB_101c3018;
  puStack_3c = (undefined1 *)0x101c2f64;
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) goto LAB_101c3018;
  puStack_18 = auStack_28;
  auStack_28[0] = 0;
  uStack_10 = 2;
  uStack_2c = param_3;
  puStack_14 = puStack_18;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    puStack_3c = *(undefined1 **)(param_1 + 0x5c);
    puStack_40 = (undefined4 *)0x101c2fa5;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    if (piVar1 != (int *)0x0) {
      puStack_3c = (undefined1 *)0x101c2fb0;
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      goto LAB_101c2fb6;
    }
  }
  piVar1 = (int *)0x0;
LAB_101c2fb6:
  uStack_58 = uStack_2c;
  puStack_44 = auStack_54;
  puStack_40 = puStack_44;
  FUN_1001ea30(puStack_14,puStack_18);
  puStack_3c = puStack_18;
  (**(code **)(*piVar1 + 4))(param_2,0);
  if ((puStack_44 != &uStack_58) && (puStack_44 != (undefined4 *)0x0)) {
    FUN_10653dc0(puStack_44);
  }
  FUN_112bed8e();
  return;
}


// ===== [d2] FUN_101c3960 @101c3960  (93 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c3960(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c [2];
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    local_c[0] = param_3;
    cVar1 = FUN_101c3f90(local_c);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_103c5000(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}

