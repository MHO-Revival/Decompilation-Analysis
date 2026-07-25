
/* WARNING: Instruction at (ram,0x123fdc8c) overlaps instruction at (ram,0x123fdc8b)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x123fdd24) */
/* WARNING: Removing unreachable block (ram,0x123fdd2e) */
/* WARNING: Removing unreachable block (ram,0x123fdd27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: LAB_123fc9ed+1, LAB_123fdcf3+1, SUB_0ce34d07 */

undefined4 FUN_123fdc7c(void)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined3 uVar11;
  int iVar8;
  uint uVar9;
  int iVar10;
  int3 iVar12;
  int extraout_ECX;
  uint *puVar13;
  int extraout_ECX_00;
  uint *extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar14;
  char *unaff_EBX;
  uint **ppuVar15;
  uint **unaff_EBP;
  uint uVar16;
  uint *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  bool bVar20;
  byte in_AF;
  bool bVar21;
  bool bVar22;
  char cVar23;
  byte in_TF;
  byte in_IF;
  bool bVar24;
  bool bVar25;
  char cVar26;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 extraout_ST0;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined6 uVar29;
  undefined6 uVar30;
  uint *puStack_5728;
  uint *puStack_5724;
  uint *puStack_5720;
  uint *puStack_571c;
  int iStack_5718;
  undefined1 *puStack_40;
  undefined8 uStack_14;
  uint *puStack_c;
  char *pcStack_8;
  uint uStack_4;
  
  bVar24 = false;
  uStack_4 = (uint)unaff_EBP[-10];
  unaff_EDI[0x35] = *(uint *)(uStack_4 + 0xf0);
  unaff_EDI[0x36] = *(uint *)(uStack_4 + 0xf4);
  unaff_EDI[0x37] = *(uint *)(uStack_4 + 0xf8);
  pcVar7 = (char *)(uint)*(ushort *)(uStack_4 + 0xec);
  pcStack_8 = pcVar7;
  do {
    bVar20 = pcStack_8 < (char *)0x400;
    puStack_c = (uint *)0x123fdcc1;
    pcStack_8 = pcVar7;
    pcVar7 = (char *)func_0x123fc9ee();
    puVar17 = unaff_EDI;
    if (bVar20) {
      *pcVar7 = *pcVar7 + (char)pcVar7;
      bVar20 = *pcVar7 == '\0';
      puVar13 = extraout_ECX_01;
      while( true ) {
        in_NT = (in_NT & 1) != 0;
        bVar24 = bVar24 != false;
        in_IF = (in_IF & 1) != 0;
        in_TF = (in_TF & 1) != 0;
        in_AF = (in_AF & 1) != 0;
        in_ID = (in_ID & 1) != 0;
        in_AC = (in_AC & 1) != 0;
        puStack_5724 = (uint *)puVar17[0x12];
        puStack_5728 = puVar17 + 0x20;
        in_VIP = 0;
        in_VIF = 0;
        puStack_5720 = puVar13;
        uVar29 = func_0x123e7c60();
        if (bVar20) break;
        puStack_40 = (undefined1 *)&puStack_c;
        ppuVar15 = &puStack_c;
        puStack_c = (uint *)unaff_EBP;
        cVar23 = '\f';
        do {
          unaff_EBP = unaff_EBP + -1;
          ppuVar15 = ppuVar15 + -1;
          *ppuVar15 = *unaff_EBP;
          cVar23 = cVar23 + -1;
        } while ('\0' < cVar23);
        pbVar1 = &stack0x00000013 + (int)uVar29;
        bVar21 = false;
        bVar25 = false;
        *pbVar1 = *pbVar1 ^ 0xa9;
        bVar22 = (char)*pbVar1 < '\0';
        bVar20 = *pbVar1 == 0;
        bVar3 = POPCOUNT(*pbVar1);
        do {
          iVar10 = iStack_5718;
          unaff_ESI = puStack_571c;
          puVar17 = puStack_5720;
          uStack_14 = (double)CONCAT44((uint)(in_NT & 1) * 0x4000 | (uint)bVar25 * 0x800 |
                                       (uint)bVar24 * 0x400 | (uint)(in_IF & 1) * 0x200 |
                                       (uint)(in_TF & 1) * 0x100 | (uint)bVar22 * 0x80 |
                                       (uint)bVar20 * 0x40 | (uint)(in_AF & 1) * 0x10 |
                                       (uint)((bVar3 & 1) == 0) * 4 | (uint)bVar21 |
                                       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000
                                       | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                                       0x123fdc1f);
                    /* WARNING: Call to offcut address within same function */
          bVar3 = func_0x123fdc20();
          if (bVar21 || bVar20) {
            uStack_14 = (double)extraout_ST0;
            uVar6 = FUN_123ecc11();
            return uVar6;
          }
          bVar21 = 0xdb < bVar3;
          *(int *)((int)puVar17 * 9) = (int)extraout_ST0;
          bVar25 = SCARRY4(iVar10,1);
          unaff_EBX = (char *)(iVar10 + 1);
          bVar22 = (int)unaff_EBX < 0;
          bVar3 = POPCOUNT((uint)unaff_EBX & 0xff);
          bVar20 = true;
        } while (unaff_EBX == (char *)0x0);
        puVar13 = (uint *)(extraout_ECX + -1);
        if (puVar13 == (uint *)0x0) {
          uVar6 = FUN_123f83bc();
          return uVar6;
        }
        in_NT = ((uint)puStack_5720 & 0x4000) != 0;
        bVar24 = ((uint)puStack_5720 & 0x400) != 0;
        in_IF = ((uint)puStack_5720 & 0x200) != 0;
        in_TF = ((uint)puStack_5720 & 0x100) != 0;
        bVar20 = ((uint)puStack_5720 & 0x40) != 0;
        in_AF = ((uint)puStack_5720 & 0x10) != 0;
        in_ID = ((uint)puStack_5720 & 0x200000) != 0;
        in_AC = ((uint)puStack_5720 & 0x40000) != 0;
        puStack_571c = (uint *)0x1;
        unaff_EBP = &puStack_c;
      }
      unaff_EDI = (uint *)((int)unaff_EBP + -1);
      cVar23 = (char)extraout_ECX_00;
      *(char *)(extraout_ECX_00 + 0xd487) = *(char *)(extraout_ECX_00 + 0xd487) + cVar23;
      unaff_EBX[0xf481] = unaff_EBX[0xf481] + cVar23;
      *(char *)(extraout_ECX_00 + 0xd887) = *(char *)(extraout_ECX_00 + 0xd887) + cVar23;
      iVar10 = extraout_ECX_00;
    }
    else {
      bVar20 = false;
      cVar26 = '\0';
      cVar23 = '\0';
      bVar21 = ((uint)pcVar7 & 4) == 0;
      puStack_5728 = (uint *)0x4c7fdfac;
      puStack_5724 = (uint *)unaff_EBP;
      puStack_5720 = unaff_ESI;
                    /* WARNING: Call to offcut address within same function */
      uVar27 = func_0x123fdcf4();
      iVar10 = (int)(uVar27 >> 0x20);
      if (bVar21 || cVar26 != cVar23) {
        if (!bVar20) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar14 = extraout_ECX_02;
        if (extraout_ECX_02 == 0) goto LAB_123fdd91;
        uVar16 = *unaff_EDI;
        *unaff_EDI = 0x2a;
        uVar11 = (undefined3)(uVar27 >> 8);
        bVar3 = (char)uVar27 + 4;
        if (extraout_ECX_02 == 0) {
          return CONCAT31(uVar11,bVar3);
        }
        bVar20 = 0xfb < bVar3;
        uVar6 = CONCAT31(uVar11,(char)uVar27 + '\b');
        iVar8 = extraout_ECX_02;
        puVar13 = (uint *)(uVar16 - 2);
        puVar18 = unaff_EDI;
        bVar3 = in_AF;
        if (extraout_ECX_02 != 0) {
          return uVar6;
        }
        do {
          bVar4 = (byte)uVar6 + 0xae;
          cVar23 = (char)((uint)uVar6 >> 8);
          unaff_EBX[-0x50] =
               (unaff_EBX[-0x50] - cVar23) - (0x51 < (byte)uVar6 || CARRY1(bVar4,bVar20));
          unaff_EBX[-0x50] = unaff_EBX[-0x50] - cVar23;
          uVar9 = (CONCAT31((int3)((uint)uVar6 >> 8),bVar4 + bVar20) | 0xae) & 0xb1b28007;
          iVar14 = CONCAT31((int3)((uint)iVar8 >> 8),0x2b);
          puVar19 = (uint *)((int)puVar18 * -0x4f) + (uint)bVar24 * -2 + 1;
          *(uint *)((int)puVar18 * -0x4f) = uVar9;
          puVar17 = (uint *)(iVar14 + iVar10 * 2);
          uVar16 = *puVar17;
          *puVar17 = (uint)(CONCAT14((byte)((uint)iVar8 >> 8) < (byte)unaff_EBX,uVar16) >> 0xb) |
                     uVar16 << 0x16;
          uVar9 = uVar9 | 0xb1b2ede9;
          iVar10 = CONCAT31((int3)(uVar9 >> 8),unaff_EBX[uVar9 & 0xff]) + -1;
          bVar4 = (byte)iVar10;
          bVar20 = 9 < (bVar4 & 0xf);
          in_AF = bVar20 | bVar3;
          iVar12 = (int3)((uint)iVar10 >> 8);
          bVar21 = 0x99 < bVar4;
          cVar23 = bVar4 + in_AF * '\x06' + bVar21 * '`';
          uVar16 = CONCAT31(iVar12,cVar23);
          iVar10 = (int)iVar12 >> 0x17;
          uVar27 = CONCAT44(iVar10,uVar16);
          puVar17 = puVar19;
          if (bVar21 || cVar23 == '\0') {
            bVar4 = unaff_EBX[uVar16 * 2] & (byte)iVar10;
            bVar21 = (POPCOUNT(bVar4) & 1U) == 0;
            if (bVar21) {
              puStack_5728 = (uint *)((uint)(in_NT & 1) * 0x4000 | (uint)bVar24 * 0x400 |
                                      (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                                      (uint)((char)bVar4 < '\0') * 0x80 | (uint)(bVar4 == 0) * 0x40
                                      | (uint)(bVar20 | bVar3 & 1) * 0x10 | (uint)bVar21 * 4 |
                                      (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                                      (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
              in(0xf);
              uVar5 = in(0x3e);
              iVar8 = CONCAT31(iVar12,uVar5);
              if ((POPCOUNT((int)&puStack_5728 - *puVar19 & 0xff) & 1U) == 0) {
                in(0x2b);
                uVar5 = in(0x17);
                return CONCAT31(iVar12,uVar5);
              }
            }
            else {
              iVar8 = (uVar16 | 0xe49ca37b) + 0xe34d079a;
            }
            uVar27 = CONCAT44(iVar10,iVar8) | 0xe8;
            unaff_EDI = (uint *)((int)puVar13 + *puVar13);
            pcVar2 = (code *)swi(4);
            if (SCARRY4((int)puVar13,*puVar13)) {
              uVar27 = (*pcVar2)();
              iVar14 = extraout_ECX_05;
            }
          }
          else {
            unaff_EDI = (uint *)((int)puVar13 + -1);
            if (iVar14 != 0) {
              do {
              } while ((POPCOUNT((uint)unaff_EDI & 0xff) & 1U) != 0);
              puStack_5728 = (uint *)((uint)(in_NT & 1) * 0x4000 |
                                      (uint)SBORROW4((int)puVar13,1) * 0x800 | (uint)bVar24 * 0x400
                                      | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                                      (uint)((int)unaff_EDI < 0) * 0x80 |
                                      (uint)(unaff_EDI == (uint *)0x0) * 0x40 |
                                      (uint)(bVar20 | bVar3 & 1) * 0x10 | 4 | (uint)bVar21 |
                                      (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                                      (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
              in(0xd);
              in(5);
              uVar28 = func_0x0ce34d07();
              puVar17 = puVar19 + (uint)bVar24 * -2 + 1;
              uVar16 = in((short)((ulonglong)uVar28 >> 0x20));
              *puVar19 = uVar16;
              uVar27 = CONCAT44(CONCAT22((short)((ulonglong)uVar28 >> 0x30),
                                         CONCAT11((char)((ulonglong)uVar28 >> 0x28) +
                                                  (char)extraout_ECX_04,
                                                  (char)((ulonglong)uVar28 >> 0x20))),(int)uVar28);
              iVar14 = extraout_ECX_04;
            }
          }
LAB_123fdd91:
          iVar10 = (int)(uVar27 >> 0x20);
          *(byte *)(iVar10 + 0x18ae14b1) = *(byte *)(iVar10 + 0x18ae14b1) ^ 99;
          uVar6 = CONCAT31((uint3)((uint)((int)uVar27 + -0x4e4daee3) >> 8) | 0xb06318,0xc);
          puVar18 = (uint *)((int)puVar17 + (uint)bVar24 * -2 + 1);
          bVar20 = 0xc < (byte)*puVar17;
          iVar8 = iVar14;
          puVar13 = unaff_EDI;
          bVar3 = in_AF;
        } while( true );
      }
      uVar30 = (*(code *)(extraout_ECX_02 + -0x9d9e))();
      uVar29 = CONCAT24((short)((uint6)uVar30 >> 0x20),unaff_EBX);
      *unaff_EBX = *unaff_EBX + (byte)unaff_EBX;
      iVar10 = extraout_ECX_03;
      unaff_EBX = (char *)uVar30;
    }
    cVar23 = (char)iVar10;
    unaff_EBX[0xf881] = unaff_EBX[0xf881] + cVar23;
    *(char *)(iVar10 + 0xdc87) = *(char *)(iVar10 + 0xdc87) + cVar23;
    *(byte *)puVar17 = (byte)*puVar17 + cVar23;
    unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(0x81,(char)unaff_EBX));
    cVar23 = in((short)((uint6)uVar29 >> 0x20));
    pcVar7 = (char *)CONCAT31((int3)((uint6)uVar29 >> 8),cVar23);
    *pcVar7 = *pcVar7 + cVar23;
    *(char *)(iVar10 + 0x50) = *(char *)(iVar10 + 0x50) + (char)((uint6)uVar29 >> 0x20);
    unaff_EBP = (uint **)unaff_EDI;
    unaff_EDI = puVar17;
  } while( true );
}

