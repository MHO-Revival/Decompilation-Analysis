// FUN_10f755d0 @ 10f755d0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0]
   strings:
     ""INVALID_STATE"" */

void __fastcall FUN_10f755d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  code *local_44;
  code *local_40;
  float local_3c [3];
  undefined1 local_30 [4];
  undefined4 local_2c;
  float *local_28;
  undefined1 *local_24;
  undefined1 local_20 [12];
  float local_14;
  float local_10;
  undefined1 *local_c;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = (undefined1 *)0xe;
  puVar7 = *(undefined4 **)(param_1 + 0x44);
  if (puVar7 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar7,&local_c,&local_5,1,1);
  }
  else {
    *puVar7 = 0xe;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x204) = 0;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar1 = (float)fVar8;
  fVar2 = (float)fVar9;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar3 = (float)fVar8;
  fVar4 = (float)fVar9;
  local_c = local_20;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar5 = (float)fVar8;
  fVar6 = (float)fVar9;
  *(float *)(param_1 + 0x208) = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
  *(float *)(param_1 + 0x214) = fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5;
  *(float *)(param_1 + 0x20c) = fVar5 * fVar4 * fVar1 + fVar6 * fVar3 * fVar2;
  *(float *)(param_1 + 0x210) = fVar6 * fVar3 * fVar1 - fVar5 * fVar4 * fVar2;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar1 = (float)fVar8;
  local_10 = (float)fVar9;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar2 = (float)fVar8;
  local_14 = (float)fVar9;
  local_28 = local_3c;
  local_2c = 0;
  local_24 = local_30;
  fVar8 = (float10)fcos((float10)0.0);
  fVar9 = (float10)fsin((float10)0.0);
  fVar3 = (float)fVar8;
  fVar4 = (float)fVar9;
  local_40 = FUN_10f72e10;
  local_3c[0] = local_14 * local_10 * fVar4 + fVar2 * fVar1 * fVar3;
  *(float *)(param_1 + 0x218) = fVar3 * fVar2 * local_10 - fVar4 * local_14 * fVar1;
  *(float *)(param_1 + 0x224) = local_3c[0];
  *(float *)(param_1 + 0x21c) = fVar3 * local_14 * fVar1 + fVar4 * fVar2 * local_10;
  *(float *)(param_1 + 0x220) = fVar4 * fVar2 * fVar1 - fVar3 * local_14 * local_10;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  puVar7 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar7 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar7,&local_40,&local_6,1,1);
  }
  else {
    *puVar7 = FUN_10f72e10;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar7 = *(undefined4 **)(param_1 + 200);
  local_44 = FUN_10f72f50;
  if (puVar7 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar7,&local_44,&local_7,1,1);
  }
  else {
    *puVar7 = FUN_10f72f50;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10f72fb0);
  FUN_1083ab70("INVALID_STATE",0xd);
  if (*(int *)(*(int *)(param_1 + 0x1e8) + -8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1e8) + -0xc) < 0) {
      FUN_10a7ef40();
      if (*(int *)(*(int *)(param_1 + 0x1e8) + -8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x1e8) + -8) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x1e8) + *(int *)(*(int *)(param_1 + 0x1e8) + -8)) = 0;
      }
    }
    else {
      FUN_1083ac70();
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x1ec) + -8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1ec) + -0xc) < 0) {
      FUN_10a7ef40();
      if (*(int *)(*(int *)(param_1 + 0x1ec) + -8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x1ec) + -8) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x1ec) + *(int *)(*(int *)(param_1 + 0x1ec) + -8)) = 0;
      }
    }
    else {
      FUN_1083ac70();
    }
  }
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0xbf800000;
  return;
}

