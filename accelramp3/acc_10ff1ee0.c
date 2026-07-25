// FUN_10ff1ee0 @ 10ff1ee0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0] */

void FUN_10ff1ee0(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  float local_c;
  float local_8;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (piVar5 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar5 != (int *)0x0)) &&
     (((local_10 = FUN_10f19240(), local_10 != 0 &&
       (piVar6 = (int *)piVar5[3], piVar6 != (int *)0x0)) &&
      (cVar3 = (**(code **)(*piVar5 + 0x228))(), cVar3 != '\0')))) {
    fVar8 = *(float *)(param_1 + 0x21c);
    fVar1 = *(float *)(param_1 + 0x224);
    local_c = (*(float *)(param_1 + 0x218) * fVar8 - *(float *)(param_1 + 0x220) * fVar1) *
              DAT_11de9990 * DAT_11de9a20;
    local_8 = (fVar1 * *(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x220) * fVar8) *
              DAT_11de9990 * DAT_11de9a20;
    fVar8 = ((fVar1 * fVar1 + fVar8 * fVar8) * DAT_11de9990 - DAT_11de9918) * DAT_11de9a20;
    pfVar4 = (float *)(**(code **)(*piVar6 + 0x94))();
    local_18 = pfVar4[1] + fVar8;
    local_14 = pfVar4[2] + local_8;
    local_1c = *pfVar4 + local_c;
    fVar7 = (float10)FUN_1134f0a0();
    local_14 = (float)(fVar7 + (float10)local_14);
    FUN_10eff090(1,&local_1c,0xbf800000,0);
    local_28 = local_1c;
    local_24 = local_18;
    local_20 = local_14;
    local_38 = *(undefined4 *)(param_1 + 0x218);
    uStack_34 = *(undefined4 *)(param_1 + 0x21c);
    uStack_30 = *(undefined4 *)(param_1 + 0x220);
    uStack_2c = *(undefined4 *)(param_1 + 0x224);
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar6 = (int *)FUN_10f19250();
    iVar2 = *piVar6;
    uVar9 = (**(code **)(*piVar5 + 0x228))(&local_38,&local_28,0);
    (**(code **)(iVar2 + 0x564))(uVar9);
  }
  return;
}

