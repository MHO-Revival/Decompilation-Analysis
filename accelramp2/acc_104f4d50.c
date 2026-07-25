// FUN_104f4d50 @ 104f4d50
// ramp offsets referenced: [468, 472, 552]


/* [RE-AUTO c0] */

void __fastcall FUN_104f4d50(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStack_58;
  
  fVar8 = param_1[4];
  fVar7 = param_1[0x14];
  fVar11 = *param_1;
  fVar10 = param_1[0x15];
  fVar13 = param_1[1];
  fVar14 = param_1[0x16];
  fVar15 = param_1[6];
  fVar16 = param_1[2];
  fVar20 = param_1[8];
  fVar21 = param_1[9];
  fVar1 = param_1[5];
  fVar2 = param_1[10];
  fVar12 = (float)((uint)fVar7 ^ DAT_11de9c90);
  *(ulonglong *)(param_1 + 0x1e) =
       CONCAT44(fVar10 * fVar1 + fVar7 * fVar8 + fVar14 * fVar15,
                fVar7 * fVar11 + fVar10 * fVar13 + fVar14 * fVar16);
  param_1[0x20] = fVar10 * fVar21 + fVar7 * fVar20 + fVar14 * fVar2;
  fVar17 = (float)((uint)fVar14 ^ DAT_11de9c90);
  *(ulonglong *)(param_1 + 0x21) =
       CONCAT44(fVar10 * fVar1 + fVar12 * fVar8 + fVar14 * fVar15,
                fVar12 * fVar11 + fVar10 * fVar13 + fVar14 * fVar16);
  param_1[0x23] = fVar10 * fVar21 + fVar12 * fVar20 + fVar14 * fVar2;
  fVar14 = param_1[0x11];
  *(ulonglong *)(param_1 + 0x24) =
       CONCAT44(fVar10 * fVar1 + fVar7 * fVar8 + fVar17 * fVar15,
                fVar7 * fVar11 + fVar10 * fVar13 + fVar17 * fVar16);
  param_1[0x26] = fVar10 * fVar21 + fVar7 * fVar20 + fVar17 * fVar2;
  fVar7 = param_1[0x13];
  *(ulonglong *)(param_1 + 0x27) =
       CONCAT44(fVar10 * fVar1 + fVar12 * fVar8 + fVar17 * fVar15,
                fVar12 * fVar11 + fVar10 * fVar13 + fVar17 * fVar16);
  fVar19 = param_1[0x12];
  param_1[0x29] = fVar10 * fVar21 + fVar12 * fVar20 + fVar17 * fVar2;
  fVar12 = (float)((uint)fVar14 ^ DAT_11de9c90);
  *(ulonglong *)(param_1 + 0x2a) =
       CONCAT44(fVar19 * fVar1 + fVar14 * fVar8 + fVar7 * fVar15,
                fVar14 * fVar11 + fVar19 * fVar13 + fVar7 * fVar16);
  param_1[0x2c] = fVar19 * fVar21 + fVar14 * fVar20 + fVar7 * fVar2;
  *(ulonglong *)(param_1 + 0x2d) =
       CONCAT44(fVar19 * fVar1 + fVar12 * fVar8 + fVar7 * fVar15,
                fVar12 * fVar11 + fVar19 * fVar13 + fVar7 * fVar16);
  fVar18 = (float)((uint)fVar7 ^ DAT_11de9c90);
  param_1[0x2f] = fVar19 * fVar21 + fVar12 * fVar20 + fVar7 * fVar2;
  *(ulonglong *)(param_1 + 0x30) =
       CONCAT44(fVar19 * fVar1 + fVar14 * fVar8 + fVar18 * fVar15,
                fVar14 * fVar11 + fVar19 * fVar13 + fVar18 * fVar16);
  param_1[0x32] = fVar19 * fVar21 + fVar14 * fVar20 + fVar18 * fVar2;
  fVar7 = param_1[0x17];
  fVar17 = (float)((uint)fVar7 ^ DAT_11de9c90);
  fVar10 = param_1[0x19];
  *(ulonglong *)(param_1 + 0x33) =
       CONCAT44(fVar19 * fVar1 + fVar12 * fVar8 + fVar18 * fVar15,
                fVar12 * fVar11 + fVar19 * fVar13 + fVar18 * fVar16);
  fVar14 = param_1[0x18];
  param_1[0x35] = fVar19 * fVar21 + fVar12 * fVar20 + fVar18 * fVar2;
  *(ulonglong *)(param_1 + 0x36) =
       CONCAT44(fVar14 * fVar1 + fVar7 * fVar8 + fVar10 * fVar15,
                fVar7 * fVar11 + fVar14 * fVar13 + fVar10 * fVar16);
  param_1[0x38] = fVar14 * fVar21 + fVar7 * fVar20 + fVar10 * fVar2;
  *(ulonglong *)(param_1 + 0x39) =
       CONCAT44(fVar14 * fVar1 + fVar17 * fVar8 + fVar10 * fVar15,
                fVar17 * fVar11 + fVar14 * fVar13 + fVar10 * fVar16);
  fVar19 = (float)((uint)fVar10 ^ DAT_11de9c90);
  param_1[0x3b] = fVar14 * fVar21 + fVar17 * fVar20 + fVar10 * fVar2;
  *(ulonglong *)(param_1 + 0x3c) =
       CONCAT44(fVar14 * fVar1 + fVar7 * fVar8 + fVar19 * fVar15,
                fVar7 * fVar11 + fVar14 * fVar13 + fVar19 * fVar16);
  param_1[0x3e] = fVar14 * fVar21 + fVar7 * fVar20 + fVar19 * fVar2;
  *(ulonglong *)(param_1 + 0x3f) =
       CONCAT44(fVar14 * fVar1 + fVar17 * fVar8 + fVar19 * fVar15,
                fVar17 * fVar11 + fVar14 * fVar13 + fVar19 * fVar16);
  param_1[0x41] = fVar14 * fVar21 + fVar17 * fVar20 + fVar19 * fVar2;
  fVar8 = param_1[0xb];
  fVar7 = param_1[3];
  fVar11 = param_1[7];
  fVar13 = param_1[0x2d] + fVar7;
  fVar10 = param_1[0x2e] + fVar11;
  fVar21 = (param_1[0x33] + fVar7) - fVar13;
  fVar14 = param_1[0x2f] + fVar8;
  fVar20 = (param_1[0x34] + fVar11) - fVar10;
  fVar16 = (param_1[0x35] + fVar8) - fVar14;
  fVar11 = (param_1[0x2b] + fVar11) - fVar10;
  fVar7 = (fVar7 + param_1[0x2a]) - fVar13;
  fVar8 = (param_1[0x2c] + fVar8) - fVar14;
  fVar15 = fVar11 * fVar16 - fVar8 * fVar20;
  fVar8 = fVar8 * fVar21 - fVar7 * fVar16;
  fVar16 = fVar7 * fVar20 - fVar11 * fVar21;
  fVar11 = fVar8 * fVar8 + fVar15 * fVar15 + fVar16 * fVar16 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar7 = auVar9._0_4_;
  fVar7 = (DAT_11de9938 - fVar7 * fVar11 * fVar7 * DAT_11de98e8) * fVar7;
  fVar11 = (float)((uint)(fVar7 * fVar8 * fVar10 + fVar7 * fVar15 * fVar13 + fVar7 * fVar16 * fVar14
                         ) ^ DAT_11de9c90);
  param_1[0x42] = fVar7 * fVar15;
  param_1[0x43] = fVar7 * fVar8;
  param_1[0x44] = fVar7 * fVar16;
  param_1[0x45] = fVar11;
  fVar8 = param_1[7];
  fVar7 = param_1[3];
  fVar20 = param_1[0x40] + fVar8;
  fVar11 = param_1[0xb];
  fVar10 = param_1[0x3f] + fVar7;
  fVar21 = param_1[0x41] + fVar11;
  fVar13 = (param_1[0x3a] + fVar8) - fVar20;
  fVar14 = (param_1[0x39] + fVar7) - fVar10;
  fVar16 = (param_1[0x3b] + fVar11) - fVar21;
  fVar15 = fVar13 * (fVar11 - fVar21) - fVar16 * (fVar8 - fVar20);
  fVar16 = fVar16 * (fVar7 - fVar10) - fVar14 * (fVar11 - fVar21);
  fVar11 = fVar14 * (fVar8 - fVar20) - fVar13 * (fVar7 - fVar10);
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
  fVar7 = (float)((uint)(fVar20 * fVar8 * fVar16 + fVar10 * fVar8 * fVar15 + fVar21 * fVar8 * fVar11
                        ) ^ DAT_11de9c90);
  param_1[0x4a] = fVar8 * fVar15;
  param_1[0x4b] = fVar8 * fVar16;
  param_1[0x4c] = fVar8 * fVar11;
  param_1[0x4d] = fVar7;
  fVar8 = param_1[7];
  fVar7 = param_1[3];
  fVar20 = param_1[0x37] + fVar8;
  fVar10 = fVar7 + param_1[0x36];
  fVar11 = param_1[0xb];
  fVar13 = (param_1[0x3d] + fVar8) - fVar20;
  fVar21 = param_1[0x38] + fVar11;
  fVar14 = (param_1[0x3c] + fVar7) - fVar10;
  fVar16 = (param_1[0x3e] + fVar11) - fVar21;
  fVar15 = fVar13 * (fVar11 - fVar21) - fVar16 * (fVar8 - fVar20);
  fVar16 = fVar16 * (fVar7 - fVar10) - fVar14 * (fVar11 - fVar21);
  fVar11 = fVar14 * (fVar8 - fVar20) - fVar13 * (fVar7 - fVar10);
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
  fVar7 = (float)((uint)(fVar20 * fVar8 * fVar16 + fVar10 * fVar8 * fVar15 + fVar21 * fVar8 * fVar11
                        ) ^ DAT_11de9c90);
  param_1[0x4e] = fVar8 * fVar15;
  param_1[0x4f] = fVar8 * fVar16;
  param_1[0x50] = fVar8 * fVar11;
  param_1[0x51] = fVar7;
  fVar8 = param_1[7];
  fVar7 = param_1[3];
  fVar20 = param_1[0x3a] + fVar8;
  fVar11 = param_1[0xb];
  fVar10 = fVar7 + param_1[0x39];
  fVar21 = param_1[0x3b] + fVar11;
  fVar13 = (param_1[0x37] + fVar8) - fVar20;
  fVar14 = (param_1[0x36] + fVar7) - fVar10;
  fVar16 = (param_1[0x38] + fVar11) - fVar21;
  fVar15 = fVar13 * (fVar11 - fVar21) - fVar16 * (fVar8 - fVar20);
  fVar16 = fVar16 * (fVar7 - fVar10) - fVar14 * (fVar11 - fVar21);
  fVar11 = fVar14 * (fVar8 - fVar20) - fVar13 * (fVar7 - fVar10);
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
  fVar7 = (float)((uint)(fVar20 * fVar8 * fVar16 + fVar10 * fVar8 * fVar15 + fVar21 * fVar8 * fVar11
                        ) ^ DAT_11de9c90);
  param_1[0x52] = fVar8 * fVar15;
  param_1[0x53] = fVar8 * fVar16;
  param_1[0x54] = fVar8 * fVar11;
  param_1[0x55] = fVar7;
  fVar8 = param_1[3];
  fVar7 = param_1[0xb];
  fVar15 = fVar8 + param_1[0x3c];
  fVar11 = param_1[7];
  fVar21 = param_1[0x3d] + fVar11;
  fVar10 = param_1[0x3e] + fVar7;
  fVar14 = (param_1[0x40] + fVar11) - fVar21;
  fVar20 = (param_1[0x41] + fVar7) - fVar10;
  fVar13 = (param_1[0x3f] + fVar8) - fVar15;
  fVar16 = fVar14 * (fVar7 - fVar10) - fVar20 * (fVar11 - fVar21);
  fVar20 = fVar20 * (fVar8 - fVar15) - fVar13 * (fVar7 - fVar10);
  fVar11 = fVar13 * (fVar11 - fVar21) - fVar14 * (fVar8 - fVar15);
  fVar7 = fVar20 * fVar20 + fVar16 * fVar16 + fVar11 * fVar11 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
  fVar7 = (float)((uint)(fVar8 * fVar20 * fVar21 + fVar8 * fVar16 * fVar15 + fVar8 * fVar11 * fVar10
                        ) ^ DAT_11de9c90);
  param_1[0x56] = fVar8 * fVar16;
  param_1[0x57] = fVar8 * fVar20;
  param_1[0x58] = fVar8 * fVar11;
  param_1[0x59] = fVar7;
  fVar8 = param_1[0xb];
  fVar7 = param_1[3];
  fVar11 = param_1[7];
  fVar15 = param_1[0x39] + fVar7;
  fVar14 = param_1[0x3a] + fVar11;
  fVar13 = param_1[0x3b] + fVar8;
  fVar10 = (param_1[0x3f] + fVar7) - fVar15;
  fVar21 = (param_1[0x36] + fVar7) - fVar15;
  fVar20 = (param_1[0x37] + fVar11) - fVar14;
  fVar7 = (param_1[0x40] + fVar11) - fVar14;
  fVar11 = (param_1[0x38] + fVar8) - fVar13;
  fVar8 = (param_1[0x41] + fVar8) - fVar13;
  fVar16 = fVar7 * fVar11 - fVar8 * fVar20;
  fVar20 = fVar10 * fVar20 - fVar7 * fVar21;
  fVar11 = fVar8 * fVar21 - fVar10 * fVar11;
  fVar7 = fVar11 * fVar11 + fVar16 * fVar16 + fVar20 * fVar20 + DAT_11de98a0;
  auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar9._0_4_;
  fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
  fVar7 = (float)((uint)(fVar11 * fVar8 * fVar14 + fVar16 * fVar8 * fVar15 + fVar20 * fVar8 * fVar13
                        ) ^ DAT_11de9c90);
  param_1[0x46] = fVar16 * fVar8;
  param_1[0x47] = fVar11 * fVar8;
  param_1[0x48] = fVar20 * fVar8;
  param_1[0x49] = fVar7;
  iVar6 = FUN_104f4a80(0x3a83126f);
  uVar5 = DAT_11de9c90;
  if (iVar6 == 0) {
    fVar8 = (float)((uint)param_1[0x44] ^ DAT_11de9c90);
    fVar11 = (float)((uint)param_1[0x43] ^ DAT_11de9c90);
    fVar7 = (float)((uint)param_1[0x45] ^ DAT_11de9c90);
    param_1[0x42] = (float)((uint)param_1[0x42] ^ DAT_11de9c90);
    param_1[0x43] = fVar11;
    param_1[0x44] = fVar8;
    param_1[0x45] = fVar7;
    param_1[0x4a] = (float)((uint)param_1[0x4a] ^ uVar5);
    param_1[0x4b] = (float)((uint)param_1[0x4b] ^ uVar5);
    param_1[0x4c] = (float)((uint)param_1[0x4c] ^ uVar5);
    param_1[0x4d] = (float)((uint)param_1[0x4d] ^ uVar5);
    param_1[0x4e] = (float)((uint)param_1[0x4e] ^ uVar5);
    param_1[0x4f] = (float)((uint)param_1[0x4f] ^ uVar5);
    param_1[0x50] = (float)((uint)param_1[0x50] ^ uVar5);
    param_1[0x51] = (float)((uint)param_1[0x51] ^ uVar5);
    param_1[0x52] = (float)((uint)param_1[0x52] ^ uVar5);
    param_1[0x53] = (float)((uint)param_1[0x53] ^ uVar5);
    param_1[0x54] = (float)((uint)param_1[0x54] ^ uVar5);
    param_1[0x55] = (float)((uint)param_1[0x55] ^ uVar5);
    param_1[0x56] = (float)((uint)param_1[0x56] ^ uVar5);
    param_1[0x57] = (float)((uint)param_1[0x57] ^ uVar5);
    param_1[0x58] = (float)((uint)param_1[0x58] ^ uVar5);
    param_1[0x59] = (float)((uint)param_1[0x59] ^ uVar5);
    param_1[0x46] = (float)((uint)param_1[0x46] ^ uVar5);
    param_1[0x47] = (float)((uint)param_1[0x47] ^ uVar5);
    param_1[0x48] = (float)((uint)param_1[0x48] ^ uVar5);
    param_1[0x49] = (float)((uint)param_1[0x49] ^ uVar5);
  }
  param_1[0x5a] = (float)(((int)param_1[0x42] >> 0x1f) * -3);
  param_1[0x6c] = (float)(((int)param_1[0x42] >> 0x1f) * 3 + 3);
  param_1[0x60] = (float)(((int)param_1[0x43] >> 0x1f) * -3 + 1);
  param_1[0x72] = (float)(((int)param_1[0x43] >> 0x1f) * 3 + 4);
  param_1[0x66] = (float)(((int)param_1[0x44] >> 0x1f) * -3 + 2);
  *(int *)(iStack_58 + 0x1e0) = ((int)param_1[0x44] >> 0x1f) * 3 + 5;
  iVar6 = *(int *)(iStack_58 + 0x118) >> 0x1f;
  iVar3 = *(int *)(iStack_58 + 0x11c) >> 0x1f;
  iVar4 = *(int *)(iStack_58 + 0x120) >> 0x1f;
  *(int *)(iStack_58 + 0x16c) = iVar6 * -3;
  *(int *)(iStack_58 + 0x1b4) = iVar6 * 3 + 3;
  *(int *)(iStack_58 + 0x184) = iVar3 * -3 + 1;
  *(int *)(iStack_58 + 0x1cc) = iVar3 * 3 + 4;
  *(int *)(iStack_58 + 0x19c) = iVar4 * -3 + 2;
  *(int *)(iStack_58 + 0x1e4) = iVar4 * 3 + 5;
  iVar6 = *(int *)(iStack_58 + 0x128) >> 0x1f;
  iVar3 = *(int *)(iStack_58 + 300) >> 0x1f;
  iVar4 = *(int *)(iStack_58 + 0x130) >> 0x1f;
  *(int *)(iStack_58 + 0x170) = iVar6 * -3;
  *(int *)(iStack_58 + 0x1b8) = iVar6 * 3 + 3;
  *(int *)(iStack_58 + 0x188) = iVar3 * -3 + 1;
  *(int *)(iStack_58 + 0x1d0) = iVar3 * 3 + 4;
  *(int *)(iStack_58 + 0x1a0) = iVar4 * -3 + 2;
  *(int *)(iStack_58 + 0x1e8) = iVar4 * 3 + 5;
  iVar6 = *(int *)(iStack_58 + 0x138) >> 0x1f;
  iVar3 = *(int *)(iStack_58 + 0x13c) >> 0x1f;
  iVar4 = *(int *)(iStack_58 + 0x140) >> 0x1f;
  *(int *)(iStack_58 + 0x174) = iVar6 * -3;
  *(int *)(iStack_58 + 0x1bc) = iVar6 * 3 + 3;
  *(int *)(iStack_58 + 0x18c) = iVar3 * -3 + 1;
  *(int *)(iStack_58 + 0x1d4) = iVar3 * 3 + 4;
  *(int *)(iStack_58 + 0x1a4) = iVar4 * -3 + 2;
  *(int *)(iStack_58 + 0x1ec) = iVar4 * 3 + 5;
  iVar6 = *(int *)(iStack_58 + 0x148) >> 0x1f;
  iVar3 = *(int *)(iStack_58 + 0x14c) >> 0x1f;
  iVar4 = *(int *)(iStack_58 + 0x150) >> 0x1f;
  *(int *)(iStack_58 + 0x178) = iVar6 * -3;
  *(int *)(iStack_58 + 0x1c0) = iVar6 * 3 + 3;
  *(int *)(iStack_58 + 400) = iVar3 * -3 + 1;
  *(int *)(iStack_58 + 0x1d8) = iVar3 * 3 + 4;
  *(int *)(iStack_58 + 0x1a8) = iVar4 * -3 + 2;
  *(int *)(iStack_58 + 0x1f0) = iVar4 * 3 + 5;
  iVar6 = *(int *)(iStack_58 + 0x158) >> 0x1f;
  iVar3 = *(int *)(iStack_58 + 0x15c) >> 0x1f;
  *(int *)(iStack_58 + 0x17c) = iVar6 * -3;
  iVar4 = *(int *)(iStack_58 + 0x160) >> 0x1f;
  *(int *)(iStack_58 + 0x1c4) = iVar6 * 3 + 3;
  *(int *)(iStack_58 + 0x194) = iVar3 * -3 + 1;
  *(int *)(iStack_58 + 0x1dc) = iVar3 * 3 + 4;
  *(int *)(iStack_58 + 500) = iVar4 * 3 + 5;
  *(int *)(iStack_58 + 0x1ac) = iVar4 * -3 + 2;
  *(ulonglong *)(iStack_58 + 0x220) =
       CONCAT44(*(undefined4 *)(iStack_58 + 0x1c),*(undefined4 *)(iStack_58 + 0xc));
  *(undefined4 *)(iStack_58 + 0x228) = *(undefined4 *)(iStack_58 + 0x2c);
  return;
}

