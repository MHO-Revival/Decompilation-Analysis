
// [d0] FUN_10552dd0 @10552dd0  (emitted in an earlier root)

// [d1] FUN_101c35a0 @101c35a0  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// [d2] FUN_101c4190 @101c4190  (emitted in an earlier root)

// ===== [d2] FUN_101c3270 @101c3270  (269 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_101c3270(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100282d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_1c);
        }
        *param_3 = uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_3c);
        }
        FUN_112bed8e();
        return;
      }
    }
  }
  FUN_112bed8e();
  return;
}

