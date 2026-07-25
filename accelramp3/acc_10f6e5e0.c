// FUN_10f6e5e0 @ 10f6e5e0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0]
   strings:
     ""InjuryStandBack""
     ""InjuryStandFront""
     ""InjuryBody""
     ""InjuryBodyCenterFront""
     ""InjuryBodyCenterBack""
     ""PLInjurySignal""
     ""BodyLeft""
     ""BodyRight""
     ""BodyForward"" */

void __fastcall FUN_10f6e5e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 uVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_f0 [8];
  int local_d0;
  int local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  int local_b8 [8];
  int local_98;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80 [8];
  int local_60;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined8 local_48;
  undefined1 local_38 [12];
  undefined4 local_2c;
  code *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  code **local_14;
  code *local_10;
  undefined1 *local_c;
  undefined1 local_5;
  
  local_c = (undefined1 *)0x5;
  *(undefined1 *)(param_1 + 0x254) = 0;
  puVar7 = *(undefined4 **)(param_1 + 0x44);
  if (puVar7 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar7,&local_c,&local_5,1,1);
  }
  else {
    *puVar7 = 5;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x210) = 1;
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x228) = 1;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar1 = (float)fVar9;
  fVar2 = (float)fVar11;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar3 = (float)fVar9;
  fVar4 = (float)fVar11;
  local_14 = &local_10;
  local_18 = 0;
  local_c = local_38;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar5 = (float)fVar9;
  fVar6 = (float)fVar11;
  *(float *)(param_1 + 0x22c) = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
  *(float *)(param_1 + 0x238) = fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5;
  local_10 = FUN_10f6db60;
  *(float *)(param_1 + 0x230) = fVar5 * fVar4 * fVar1 + fVar6 * fVar3 * fVar2;
  *(float *)(param_1 + 0x234) = fVar6 * fVar3 * fVar1 - fVar5 * fVar4 * fVar2;
  *(undefined1 *)(param_1 + 0x70) = 1;
  puVar7 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar7 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10f6db60;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar7 = *(undefined4 **)(param_1 + 200);
  local_10 = FUN_10f6de30;
  if (puVar7 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10f6de30;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10f6ded0);
  puVar7 = *(undefined4 **)(param_1 + 0xec);
  local_10 = FUN_10f99100;
  if (puVar7 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10f99100;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f56fa0("InjuryStandBack");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("InjuryStandFront");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("InjuryBody");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("InjuryBodyCenterFront");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("InjuryBodyCenterBack");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70(&DAT_11d9d32b,0);
  uVar10 = DAT_11cfe208;
  uVar12 = (undefined4)local_48;
  *(ulonglong *)(param_1 + 0x1e8) = CONCAT44(DAT_11cfe208,uVar12);
  *(undefined4 *)(param_1 + 0x1f0) = 0x40d66666;
  *(ulonglong *)(param_1 + 0x23c) = CONCAT44(uVar10,uVar12);
  *(undefined4 *)(param_1 + 0x244) = 0x40d66666;
  *(ulonglong *)(param_1 + 500) = CONCAT44(uVar12,uVar12);
  *(ulonglong *)(param_1 + 0x248) = CONCAT44(uVar12,uVar12);
  *(undefined4 *)(param_1 + 0x1fc) = 0xc141999a;
  *(undefined4 *)(param_1 + 0x250) = 0xc141999a;
  local_2c = 0;
  *(ulonglong *)(param_1 + 0x200) = CONCAT44(uVar12,uVar12);
  *(undefined4 *)(param_1 + 0x208) = 0;
  FUN_10f56e50();
  local_20 = FUN_10f992d0;
  FUN_10f574b0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0("BodyLeft");
  FUN_10f573e0();
  if (local_c0 == local_bc) {
    FUN_10fb5990(local_c0,&local_20,&local_5,1,1);
  }
  else {
    if (local_c0 != (undefined4 *)0x0) {
      *local_c0 = local_20;
      local_c0[1] = local_1c;
    }
    local_c0 = local_c0 + 2;
  }
  FUN_10f5a480(3,0,local_f0);
  FUN_10f574b0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0("BodyRight");
  FUN_10f573e0();
  if (local_50 == local_4c) {
    FUN_10fb5990(local_50,&local_20,&local_5,1,1);
  }
  else {
    if (local_50 != (undefined4 *)0x0) {
      *local_50 = local_20;
      local_50[1] = local_1c;
    }
    local_50 = local_50 + 2;
  }
  FUN_10f5a480(4,0,local_80);
  FUN_10f574b0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0("BodyForward");
  FUN_10f573e0();
  if (local_88 == local_84) {
    FUN_10fb5990(local_88,&local_20,&local_5,1,1);
  }
  else {
    if (local_88 != (undefined4 *)0x0) {
      *local_88 = local_20;
      local_88[1] = local_1c;
    }
    local_88 = local_88 + 2;
  }
  FUN_10f5a480(5,0,local_b8);
  if (local_8c != 0) {
    FUN_10c3d5d0(local_8c);
  }
  if (local_98 != 0) {
    FUN_10c3d5d0(local_98);
  }
  if (local_b8[0] != 0) {
    FUN_10c3d5d0(local_b8[0]);
  }
  if (local_54 != 0) {
    FUN_10c3d5d0(local_54);
  }
  if (local_60 != 0) {
    FUN_10c3d5d0(local_60);
  }
  if (local_80[0] != 0) {
    FUN_10c3d5d0(local_80[0]);
  }
  if (local_c4 != 0) {
    FUN_10c3d5d0(local_c4);
  }
  if (local_d0 != 0) {
    FUN_10c3d5d0(local_d0);
  }
  if (local_f0[0] != 0) {
    FUN_10c3d5d0(local_f0[0]);
  }
  return;
}

