// FUN_100dacb0 @ 100dacb0  (625 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 7, 12, 16, 20, 24, 25, 27, 28]


/* [RE-AUTO c0]
   calls: abort */

void __fastcall FUN_100dacb0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint *puVar12;
  
  uVar1 = param_1[6];
  puVar12 = param_1 + 0x76;
  do {
    if ((*puVar12 <= uVar1) && (uVar1 < puVar12[1] + *puVar12)) break;
    puVar12 = (uint *)puVar12[2];
  } while (puVar12 != (uint *)0x0);
  uVar10 = puVar12[1];
  uVar2 = *puVar12;
  uVar9 = (int)(uVar10 + uVar2) - 0x2f;
  uVar7 = uVar9 & 7;
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = -uVar7 & 7;
  }
  uVar8 = uVar8 + uVar9;
  if (uVar8 < uVar1 + 0x10) {
    uVar8 = uVar1;
  }
  uVar9 = 0;
  if ((param_2 & 7) != 0) {
    uVar9 = -(param_2 & 7) & 7;
  }
  uVar7 = param_2 + uVar9;
  uVar9 = (param_3 - 0x28) - uVar9;
  param_1[6] = uVar7;
  param_1[3] = uVar9;
  *(uint *)(uVar7 + 4) = uVar9 | 1;
  *(undefined4 *)(uVar7 + 4 + uVar9) = 0x28;
  param_1[7] = DAT_123bd5b4;
  *(undefined4 *)(uVar8 + 4) = 0x1b;
  uVar9 = param_1[0x77];
  uVar7 = param_1[0x78];
  uVar4 = param_1[0x79];
  *(uint *)(uVar8 + 8) = param_1[0x76];
  *(uint *)(uVar8 + 0xc) = uVar9;
  *(uint *)(uVar8 + 0x10) = uVar7;
  *(uint *)(uVar8 + 0x14) = uVar4;
  param_1[0x76] = param_2;
  param_1[0x78] = uVar8 + 8;
  param_1[0x77] = param_3;
  param_1[0x79] = param_4;
  *(undefined4 *)(uVar8 + 0x1c) = 7;
  puVar5 = (undefined4 *)(uVar8 + 0x1c);
  for (puVar6 = (undefined4 *)(uVar8 + 0x20); puVar6 < (undefined4 *)(uVar10 + uVar2);
      puVar6 = puVar6 + 1) {
    puVar5[1] = 7;
    puVar5 = puVar6;
  }
  if (uVar8 == uVar1) {
    return;
  }
  uVar8 = uVar8 - uVar1;
  puVar12 = (uint *)(uVar8 + 4 + uVar1);
  *puVar12 = *puVar12 & 0xfffffffe;
  *(uint *)(uVar1 + 4) = uVar8 | 1;
  uVar9 = uVar8 >> 3;
  *(uint *)(uVar8 + uVar1) = uVar8;
  if (uVar9 < 0x20) {
    puVar12 = param_1 + uVar9 * 2 + 10;
    uVar9 = 1 << ((byte)uVar9 & 0x1f);
    if ((uVar9 & *param_1) == 0) {
      *param_1 = *param_1 | uVar9;
      puVar12[2] = uVar1;
      puVar12[3] = uVar1;
      *(uint **)(uVar1 + 0xc) = puVar12;
      *(uint **)(uVar1 + 8) = puVar12;
      return;
    }
    uVar9 = puVar12[2];
    if (param_1[4] <= uVar9) {
      puVar12[2] = uVar1;
      *(uint *)(uVar9 + 0xc) = uVar1;
      *(uint **)(uVar1 + 0xc) = puVar12;
      *(uint *)(uVar1 + 8) = uVar9;
      return;
    }
  }
  else {
    uVar10 = uVar8 >> 8;
    uVar9 = 0;
    if (uVar10 != 0) {
      if (uVar10 < 0x10000) {
        iVar3 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        uVar9 = (uVar8 >> ((char)iVar3 + 7U & 0x1f) & 1) + iVar3 * 2;
      }
      else {
        uVar9 = 0x1f;
      }
    }
    *(uint *)(uVar1 + 0x1c) = uVar9;
    *(undefined4 *)(uVar1 + 0x14) = 0;
    *(undefined4 *)(uVar1 + 0x10) = 0;
    uVar10 = 1 << ((byte)uVar9 & 0x1f);
    if ((uVar10 & param_1[1]) == 0) {
      param_1[1] = param_1[1] | uVar10;
      param_1[uVar9 + 0x4c] = uVar1;
      *(uint **)(uVar1 + 0x18) = param_1 + uVar9 + 0x4c;
      *(uint *)(uVar1 + 0xc) = uVar1;
      *(uint *)(uVar1 + 8) = uVar1;
      return;
    }
    if (uVar9 == 0x1f) {
      bVar11 = 0;
    }
    else {
      bVar11 = 0x19 - (char)(uVar9 >> 1);
    }
    uVar10 = *(uint *)(param_1[uVar9 + 0x4c] + 4);
    uVar9 = param_1[uVar9 + 0x4c];
    iVar3 = uVar8 << (bVar11 & 0x1f);
    while ((uVar10 & 0xfffffff8) != uVar8) {
      puVar12 = (uint *)(uVar9 + (4 - (iVar3 >> 0x1f)) * 4);
      uVar2 = *puVar12;
      if (uVar2 == 0) {
        if ((uint *)param_1[4] <= puVar12) {
          *puVar12 = uVar1;
          *(uint *)(uVar1 + 0x18) = uVar9;
          *(uint *)(uVar1 + 0xc) = uVar1;
          *(uint *)(uVar1 + 8) = uVar1;
          return;
        }
        goto LAB_100dae10;
      }
      uVar9 = uVar2;
      iVar3 = iVar3 * 2;
      uVar10 = *(uint *)(uVar2 + 4);
    }
    uVar8 = *(uint *)(uVar9 + 8);
    if ((param_1[4] <= uVar9) && (param_1[4] <= uVar8)) {
      *(uint *)(uVar8 + 0xc) = uVar1;
      *(uint *)(uVar9 + 8) = uVar1;
      *(uint *)(uVar1 + 8) = uVar8;
      *(uint *)(uVar1 + 0xc) = uVar9;
      *(undefined4 *)(uVar1 + 0x18) = 0;
      return;
    }
  }
LAB_100dae10:
                    /* WARNING: Subroutine does not return */
  abort();
}

