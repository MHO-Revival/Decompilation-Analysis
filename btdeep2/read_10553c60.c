
// ===== [d0] FUN_10553c60 @10553c60  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10553c60(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_103dc170();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// [d1] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d2] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// ===== [d2] FUN_103dac40 @103dac40  (271 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dac40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)auStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      if (piVar1 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        iVar2 = (**(code **)(*piVar1 + 8))(auStack_2c,param_2);
        if ((undefined1 *)(iVar2 + 4) != auStack_50) {
          FUN_100282d0(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14));
        }
        puStack_38 = *(undefined1 **)(iVar2 + 0x1c);
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_1c);
        }
        FUN_10a5d820(auStack_50);
        if ((puStack_40 != &stack0xffffffac) && (puStack_40 != (undefined1 *)0x0)) {
          FUN_10653dc0(puStack_40);
        }
        FUN_112bed8e();
        return;
      }
    }
  }
  FUN_112bed8e();
  return;
}


// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// ===== [d2] FUN_10a5d8a0 @10a5d8a0  (14 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d8a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}

