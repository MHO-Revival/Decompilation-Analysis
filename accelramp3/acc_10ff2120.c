// FUN_10ff2120 @ 10ff2120
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0]
   strings:
     ""moveleft""
     ""moveright"" */

void FUN_10ff2120(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_30;
  float fStack_20;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x100), iVar4 != 0)) &&
     ((iVar6 = FUN_10f19240(), iVar6 != 0 && (*(int *)(iVar4 + 0xc) != 0)))) {
    fVar7 = (float10)FUN_1134f430();
    cVar5 = FUN_10b73690("moveleft");
    if (cVar5 == '\0') {
      cVar5 = FUN_10b73690("moveright");
      if (cVar5 == '\0') {
        return;
      }
      local_30 = (float)((uint)(float)fVar7 ^ DAT_11de9c90);
      fVar7 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x1c))(0);
      fStack_20 = (float)fVar7 * DAT_11cdb740;
      local_30 = local_30 * (float)fVar7;
    }
    else {
      fVar8 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x1c))(0);
      fStack_20 = (float)fVar8 * DAT_11de9890;
      local_30 = (float)fVar7 * (float)fVar8;
    }
    fVar9 = *(float *)(param_1 + 0x228) + local_30;
    *(float *)(param_1 + 0x228) = fVar9;
    dVar10 = (double)((ulonglong)(double)fVar9 & DAT_11de9c70);
    fVar7 = (float10)FUN_1134f0c0();
    if ((float)dVar10 <= (float)fVar7) {
      fVar8 = (float10)(fStack_20 * DAT_11de98c0 * DAT_11de98e8);
      fVar7 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      fVar9 = (float)fVar7;
      fVar1 = (float)fVar8;
      fVar8 = (float10)(fStack_20 * DAT_11de98c0 * DAT_11de98e8);
      fVar7 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      fVar2 = (float)fVar7;
      fVar3 = (float)fVar8;
      fVar8 = (float10)(local_30 * DAT_11de98c0 * DAT_11de98e8);
      fVar7 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      fVar16 = (float)fVar7;
      fVar13 = (float)fVar8;
      fVar14 = fVar3 * fVar1 * fVar13 + fVar2 * fVar9 * fVar16;
      fVar15 = fVar16 * fVar2 * fVar1 - fVar13 * fVar3 * fVar9;
      fVar11 = fVar16 * fVar3 * fVar9 + fVar13 * fVar2 * fVar1;
      fVar16 = fVar13 * fVar2 * fVar9 - fVar16 * fVar3 * fVar1;
      fVar9 = *(float *)(param_1 + 0x224);
      *(float *)(param_1 + 0x224) =
           fVar9 * fVar14 -
           (fVar11 * *(float *)(param_1 + 0x21c) + *(float *)(param_1 + 0x218) * fVar15 +
           *(float *)(param_1 + 0x220) * fVar16);
      fVar1 = *(float *)(param_1 + 0x21c);
      fVar2 = *(float *)(param_1 + 0x220);
      fVar3 = *(float *)(param_1 + 0x218);
      *(ulonglong *)(param_1 + 0x218) =
           CONCAT44(fVar11 * fVar9 + fVar1 * fVar14 + (fVar2 * fVar15 - fVar3 * fVar16),
                    fVar15 * fVar9 + fVar3 * fVar14 + (fVar1 * fVar16 - fVar2 * fVar11));
      *(float *)(param_1 + 0x220) =
           fVar16 * fVar9 + fVar2 * fVar14 + (fVar3 * fVar11 - fVar1 * fVar15);
      fVar9 = *(float *)(param_1 + 0x224);
      fVar1 = *(float *)(param_1 + 0x218);
      fVar2 = *(float *)(param_1 + 0x21c);
      fVar3 = *(float *)(param_1 + 0x220);
      fVar16 = fVar1 * fVar1 + fVar9 * fVar9 + fVar2 * fVar2 + fVar3 * fVar3;
      if (DAT_11de98a8 < fVar16) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar13 = auVar12._0_4_;
        fVar13 = (DAT_11de9938 - fVar13 * fVar16 * fVar13 * DAT_11de98e8) * fVar13;
        *(float *)(param_1 + 0x224) = fVar9 * fVar13;
        *(float *)(param_1 + 0x218) = fVar1 * fVar13;
        *(float *)(param_1 + 0x21c) = fVar2 * fVar13;
        *(float *)(param_1 + 0x220) = fVar3 * fVar13;
        return;
      }
      *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
      return;
    }
    if (*(float *)(param_1 + 0x228) < 0.0) {
      fVar7 = (float10)FUN_1134f0c0();
      *(uint *)(param_1 + 0x228) = (uint)(float)fVar7 ^ DAT_11de9c90;
      return;
    }
    if (0.0 < *(float *)(param_1 + 0x228)) {
      fVar7 = (float10)FUN_1134f0c0();
      *(float *)(param_1 + 0x228) = (float)fVar7;
    }
  }
  return;
}

