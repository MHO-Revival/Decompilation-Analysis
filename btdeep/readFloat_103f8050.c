
// [d0] FUN_103f8050 @103f8050  (emitted in an earlier root)

// [d1] FUN_101c35a0 @101c35a0  (emitted in an earlier root)

// [d1] FUN_101c4190 @101c4190  (emitted in an earlier root)

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


// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// ===== [d2] FUN_101c4800 @101c4800  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4800(void)

{
  uint uVar1;
  
  if (DAT_113f24c0 == 0xffffffff) {
    DAT_113f24c0 = 10;
  }
  else {
    uVar1 = DAT_113f24c0;
    if ((int)DAT_113f24c0 < 1) goto LAB_101c4828;
  }
  DAT_113f24c0 = DAT_113f24c0 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4828:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c3c70 @101c3c70  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c3c70(void)

{
  uint uVar1;
  
  if (DAT_113f24f4 == 0xffffffff) {
    DAT_113f24f4 = 10;
  }
  else {
    uVar1 = DAT_113f24f4;
    if ((int)DAT_113f24f4 < 1) goto LAB_101c3c98;
  }
  DAT_113f24f4 = DAT_113f24f4 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c3c98:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_103c2900 @103c2900  (44 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_103c2900(char *param_1,undefined4 *param_2)

{
  if (*param_1 != '\0') {
    *param_2 = DAT_113c12c8;
    return 1;
  }
  *param_2 = 0;
  return 1;
}


// ===== [d2] FUN_101c4830 @101c4830  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4830(void)

{
  uint uVar1;
  
  if (DAT_113f24bc == 0xffffffff) {
    DAT_113f24bc = 10;
  }
  else {
    uVar1 = DAT_113f24bc;
    if ((int)DAT_113f24bc < 1) goto LAB_101c4858;
  }
  DAT_113f24bc = DAT_113f24bc - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4858:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c4860 @101c4860  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4860(void)

{
  uint uVar1;
  
  if (DAT_113f24b8 == 0xffffffff) {
    DAT_113f24b8 = 10;
  }
  else {
    uVar1 = DAT_113f24b8;
    if ((int)DAT_113f24b8 < 1) goto LAB_101c4888;
  }
  DAT_113f24b8 = DAT_113f24b8 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4888:
  return uVar1 & 0xffffff00;
}

