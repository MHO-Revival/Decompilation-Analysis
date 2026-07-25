
// [d0] FUN_103dbbb0 @103dbbb0  (emitted in an earlier root)

// [d1] FUN_103dc170 @103dc170  (emitted in an earlier root)

// [d1] FUN_101cec60 @101cec60  (emitted in an earlier root)

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


// [d2] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// [d2] FUN_10a5d8a0 @10a5d8a0  (emitted in an earlier root)

// ===== [d2] FUN_101cf4a0 @101cf4a0  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101cf4a0(void)

{
  uint uVar1;
  
  if (DAT_113f253c == 0xffffffff) {
    DAT_113f253c = 10;
  }
  else {
    uVar1 = DAT_113f253c;
    if ((int)DAT_113f253c < 1) goto LAB_101cf4c8;
  }
  DAT_113f253c = DAT_113f253c - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101cf4c8:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c4600 @101c4600  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4600(void)

{
  uint uVar1;
  
  if (DAT_113f24e4 == 0xffffffff) {
    DAT_113f24e4 = 10;
  }
  else {
    uVar1 = DAT_113f24e4;
    if ((int)DAT_113f24e4 < 1) goto LAB_101c4628;
  }
  DAT_113f24e4 = DAT_113f24e4 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4628:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c4630 @101c4630  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4630(void)

{
  uint uVar1;
  
  if (DAT_113f24e0 == 0xffffffff) {
    DAT_113f24e0 = 10;
  }
  else {
    uVar1 = DAT_113f24e0;
    if ((int)DAT_113f24e0 < 1) goto LAB_101c4658;
  }
  DAT_113f24e0 = DAT_113f24e0 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4658:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101cf4d0 @101cf4d0  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101cf4d0(void)

{
  uint uVar1;
  
  if (DAT_113f2538 == 0xffffffff) {
    DAT_113f2538 = 10;
  }
  else {
    uVar1 = DAT_113f2538;
    if ((int)DAT_113f2538 < 1) goto LAB_101cf4f8;
  }
  DAT_113f2538 = DAT_113f2538 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101cf4f8:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101cf500 @101cf500  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101cf500(void)

{
  uint uVar1;
  
  if (DAT_113f2534 == 0xffffffff) {
    DAT_113f2534 = 10;
  }
  else {
    uVar1 = DAT_113f2534;
    if ((int)DAT_113f2534 < 1) goto LAB_101cf528;
  }
  DAT_113f2534 = DAT_113f2534 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101cf528:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101c4660 @101c4660  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101c4660(void)

{
  uint uVar1;
  
  if (DAT_113f24dc == 0xffffffff) {
    DAT_113f24dc = 10;
  }
  else {
    uVar1 = DAT_113f24dc;
    if ((int)DAT_113f24dc < 1) goto LAB_101c4688;
  }
  DAT_113f24dc = DAT_113f24dc - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101c4688:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101cf530 @101cf530  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101cf530(void)

{
  uint uVar1;
  
  if (DAT_113f2530 == 0xffffffff) {
    DAT_113f2530 = 10;
  }
  else {
    uVar1 = DAT_113f2530;
    if ((int)DAT_113f2530 < 1) goto LAB_101cf558;
  }
  DAT_113f2530 = DAT_113f2530 - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101cf558:
  return uVar1 & 0xffffff00;
}


// ===== [d2] FUN_101cf560 @101cf560  (43 bytes) =====

/* [RE-AUTO c0]
   strings:
     ""BTFactCast_InalidType"" */

uint FUN_101cf560(void)

{
  uint uVar1;
  
  if (DAT_113f252c == 0xffffffff) {
    DAT_113f252c = 10;
  }
  else {
    uVar1 = DAT_113f252c;
    if ((int)DAT_113f252c < 1) goto LAB_101cf588;
  }
  DAT_113f252c = DAT_113f252c - 1;
  uVar1 = FUN_1001c2c0("BTFactCast_InalidType");
LAB_101cf588:
  return uVar1 & 0xffffff00;
}

