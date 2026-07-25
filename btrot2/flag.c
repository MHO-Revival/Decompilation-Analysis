
// ######## FUN_103e0540@103e0540 (16 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_103e0540(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  return;
}


// ######## FUN_103e0e60@103e0e60 (139 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_103e0e60(int *param_1,undefined4 param_2)

{
  if (*(char *)((int)param_1 + 0xe9) == '\0') {
    FUN_103e0ad0();
  }
  if (param_1[0x3b] != 0) {
    (**(code **)(*param_1 + 0x14))(0);
    *(undefined1 *)(param_1 + 0x36) = 1;
    if (*(char *)(param_1[0x3b] + 0x28) == '\0') {
      if ((int *)param_1[0x31] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x31] + 0x24))(1);
      }
      param_1[0x31] = param_1[0x29];
      FUN_103d8b70(param_2);
      param_1[0x2e] = 0;
    }
    else if (param_1[0x21] != 0) {
      FUN_10408230();
      param_1[0x2e] = 0;
      return;
    }
  }
  return;
}


// ######## FUN_103e0ef0@103e0ef0 (106 bytes) ########

/* [RE-AUTO c0] */

void __fastcall FUN_103e0ef0(int *param_1)

{
  if (param_1[0x3b] != 0) {
    (**(code **)(*param_1 + 0x14))(0);
    *(undefined1 *)(param_1 + 0x36) = 1;
    if (*(char *)(param_1[0x3b] + 0x28) == '\0') {
      if ((int *)param_1[0x31] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x31] + 0x24))(1);
      }
      param_1[0x31] = param_1[0x29];
      param_1[0x2e] = 0;
    }
    else if (param_1[0x21] != 0) {
      FUN_10408410();
      param_1[0x2e] = 0;
      return;
    }
  }
  return;
}


// ######## FUN_107498b0@107498b0 (514 bytes) ########

/* [RE-AUTO c0] */

undefined4 * __fastcall FUN_107498b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = &DAT_bf800000;
  param_1[0x20] = 0;
  param_1[0x21] = &DAT_bf800000;
  param_1[0x22] = &DAT_bf800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3e800000;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  param_1[0x29] = &DAT_40a00000;
  param_1[0x2a] = &DAT_41200000;
  param_1[0x2b] = &DAT_40a00000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3f800000;
  param_1[0x3e] = 0;
  return param_1;
}


// ######## FUN_10a29be0@10a29be0 (25 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_10a29be0(int param_1,undefined1 param_2,char param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0xd8) = param_2;
  }
  return;
}


// ######## FUN_10a56960@10a56960 (625 bytes) ########

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a56960(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((int)param_1 + 0x95) = *(undefined1 *)((int)param_2 + 0x95);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)((int)param_1 + 0xa1) = *(undefined1 *)((int)param_2 + 0xa1);
  *(undefined1 *)((int)param_1 + 0xa2) = *(undefined1 *)((int)param_2 + 0xa2);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  param_1[0x35] = param_2[0x35];
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  return param_1;
}


// ######## FUN_10a571d0@10a571d0 (89 bytes) ########

/* [RE-AUTO c0] */

void __fastcall FUN_10a571d0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x36) != -1) {
    param_1[0x37] = *param_1;
    param_1[0x38] = param_1[1];
    param_1[0x39] = param_1[2];
    param_1[0x3a] = param_1[3];
    param_1[0x3b] = param_1[4];
    param_1[0x3c] = param_1[5];
    param_1[0x3d] = param_1[6];
    param_1[0x3e] = param_1[0xc];
    return;
  }
  *(undefined1 *)(param_1 + 0x36) = 0xfe;
  return;
}


// ######## FUN_10a5ac30@10a5ac30 (119 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_10a5ac30(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xdc) = *param_2;
  *(undefined4 *)(param_1 + 0xe0) = param_2[1];
  *(undefined4 *)(param_1 + 0xe4) = param_2[2];
  *(undefined4 *)(param_1 + 0xe8) = param_2[3];
  *(undefined4 *)(param_1 + 0xec) = param_2[4];
  *(undefined4 *)(param_1 + 0xf0) = param_2[5];
  *(undefined4 *)(param_1 + 0xf4) = param_2[6];
  *(undefined4 *)(param_1 + 0xf8) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x1c) = param_2[7];
  *(undefined4 *)(param_1 + 0x20) = param_2[8];
  *(undefined4 *)(param_1 + 0x24) = param_2[9];
  *(undefined4 *)(param_1 + 0x28) = param_2[10];
  *(undefined1 *)(param_1 + 0xa2) = 1;
  *(undefined1 *)(param_1 + 0xd8) = 0xff;
  return;
}

