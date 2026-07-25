// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)

// ===== CAnimSequenceSetInput vtbl[3] @103dc9e0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_103dc9e0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar1 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar1 + 0xfc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x103dca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
    return;
  }
  return;
}


// ===== CAnimSequenceSetInput vtbl[4] @10555f60 =====

/* [RE-AUTO c0]
   strings:
     ""False""
     ""_Lemon"" */

undefined4 __fastcall FUN_10555f60(int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  int local_c4 [25];
  int *local_60;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  byte local_40;
  undefined3 uStack_3f;
  float local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  char local_1d;
  int local_1c;
  float local_18;
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = param_1;
  FUN_10a5d660();
  cVar4 = FUN_103dbbb0();
  if (cVar4 == '\0') {
    return 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  iVar6 = *piVar5;
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar5 = (int *)(**(code **)(iVar6 + 0xc))();
  if ((piVar5 == (int *)0x0) || (local_24 = piVar5, iVar6 = FUN_10a5f050(), iVar6 == 0)) {
    return 1;
  }
  local_12 = '\x01';
  cVar4 = FUN_103db9b0();
  if ((cVar4 != '\0') && (local_12 == '\0')) {
    (**(code **)(*piVar5 + 0xa4))();
    FUN_10a5d620();
    FUN_10424220();
    if (local_1c == local_34) {
      return 1;
    }
  }
  local_44 = 0;
  local_18 = (float)(**(code **)(*piVar5 + 800))();
  local_11 = '\0';
  FUN_103db9b0();
  if ((local_11 == '\0') && (local_18 != 0.0)) {
    iVar6 = *piVar5;
    FUN_10a5d940();
    (**(code **)(iVar6 + 0xc4))();
    piVar7 = *(int **)((int)local_18 + 0x14);
    FUN_103dba30();
    piVar5 = local_24;
    if (0 < local_44) {
      local_18 = 0.0;
      iVar6 = (**(code **)(*piVar7 + 0x24))();
      if (iVar6 == 0) {
        return 1;
      }
      (**(code **)(*piVar7 + 0x14))();
      piVar5 = local_24;
    }
  }
  FUN_10a5d660();
  local_34 = CONCAT31(local_34._1_3_,1);
  cVar4 = FUN_103dbbb0();
  if ((cVar4 != '\0') && (cVar4 = FUN_10a5d8d0(), cVar4 != '\0')) {
    iVar6 = *piVar5;
    FUN_10a5ec80();
    cVar4 = (**(code **)(iVar6 + 0xb8))();
    local_34 = local_34 & 0xff;
    if (cVar4 != '\0') {
      local_34 = 0;
    }
  }
  local_18 = 1.0;
  local_3c = 1.0;
  cVar4 = FUN_103f8050();
  if (cVar4 != '\0') {
    fVar12 = ((local_3c + DAT_112fcac4) - (float)((uint)(local_3c - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = ((float)((uint)(fVar12 - DAT_112fca80) & DAT_112fcb10) + fVar12 + DAT_112fca80) *
               DAT_113c12b8;
  }
  cVar4 = FUN_10552dd0();
  if (cVar4 != '\0') {
    fVar12 = ((local_3c + DAT_112fcac4) - (float)((uint)(local_3c - DAT_112fcac4) & DAT_112fcb10)) *
             DAT_113c12b8;
    local_18 = ((float)((uint)(fVar12 - DAT_112fca80) & DAT_112fcb10) + fVar12 + DAT_112fca80) *
               DAT_113c12b8;
  }
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_10551c20();
  piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))();
  local_30 = piVar5;
  if (piVar5 != (int *)0x0) {
    local_2c = (int *)(**(code **)(*piVar5 + 0x288))();
    piVar7 = (int *)(**(code **)(*local_24 + 800))();
    if ((local_2c != (int *)0x0) && (piVar7 != (int *)0x0)) {
      iVar6 = (**(code **)(*piVar7 + 0x88))();
      iVar8 = (**(code **)(*local_2c + 0x88))();
      piVar5 = local_30;
      if (iVar8 != iVar6) goto LAB_10556293;
    }
    puVar9 = (undefined4 *)(**(code **)(*piVar5 + 200))();
    local_54 = *puVar9;
    local_50 = puVar9[1];
    local_4c = puVar9[2];
  }
LAB_10556293:
  cVar4 = FUN_103db9b0();
  bVar1 = local_40 & -(cVar4 != '\0');
  _local_40 = CONCAT31(uStack_3f,bVar1);
  local_38 = (uint)(bVar1 != 0);
  cVar4 = FUN_103db9b0();
  if ((cVar4 != '\0') && (local_1d != '\0')) {
    FUN_10552e20();
  }
  FUN_103dba30();
  local_c4[0] = 0;
  local_c4[1] = 0;
  local_c4[2] = 0;
  local_c4[3] = 0;
  local_c4[4] = 0;
  local_c4[5] = 0;
  local_c4[6] = 0;
  local_c4[7] = 0;
  local_c4[8] = 0;
  local_c4[9] = 0;
  local_c4[10] = 0;
  local_c4[0xb] = 0;
  local_c4[0xc] = 0;
  local_c4[0xd] = 0;
  local_c4[0xe] = 0;
  local_c4[0xf] = 0;
  local_c4[0x10] = 0;
  local_c4[0x11] = 0;
  local_c4[0x12] = 0;
  local_c4[0x13] = 0;
  local_c4[0x14] = 0;
  local_10 = 0;
  local_c4[0x15] = 0;
  local_c = 0;
  local_8 = 0;
  local_c4[0x16] = 0;
  local_c4[0x17] = 0;
  if (0 < (int)local_38) {
    local_60 = (int *)(**(code **)(*local_24 + 800))();
    if (0 < (int)local_38) {
      local_2c = local_c4;
      iVar6 = local_28;
      uVar11 = 7;
      do {
        piVar5 = *(int **)(iVar6 + 0x2c);
        if ((((uVar11 < (uint)(piVar5[1] - *piVar5 >> 2)) &&
             ((int)uVar11 < piVar5[4] - piVar5[3] >> 2)) &&
            (uVar2 = *(uint *)(piVar5[3] + uVar11 * 4), -1 < (int)uVar2)) &&
           ((local_30 = (int *)FUN_103d8940(), iVar6 = local_28, uVar2 != 0xffffffff &&
            (uVar2 < 1000000)))) {
          if ((uVar2 < (uint)(local_30[3] - local_30[2] >> 2)) &&
             (cVar4 = FUN_101c4430(), cVar4 != '\0')) {
            bVar3 = true;
          }
          else {
            FUN_103c5000();
            bVar3 = false;
          }
          iVar6 = local_28;
          if ((bVar3) &&
             (piVar5 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(),
             iVar6 = local_28, local_58 = piVar5, piVar5 != (int *)0x0)) {
            local_30 = (int *)(**(code **)(*piVar5 + 0x288))();
            if ((local_30 != (int *)0x0) && (local_60 != (int *)0x0)) {
              iVar6 = (**(code **)(*local_60 + 0x88))();
              iVar8 = (**(code **)(*local_30 + 0x88))();
              piVar5 = local_58;
              if (iVar8 != iVar6) break;
            }
            (**(code **)(*piVar5 + 200))();
            piVar5 = local_2c;
            *local_2c = local_10;
            piVar5[1] = local_c;
            piVar5[2] = local_8;
            iVar6 = local_28;
          }
        }
        local_2c = local_2c + 3;
        iVar8 = uVar11 - 6;
        uVar11 = uVar11 + 1;
      } while (iVar8 < (int)local_38);
    }
    _local_40 = CONCAT31(uStack_3f,1);
  }
  piVar5 = local_24;
  (**(code **)(*local_24 + 1000))();
  (**(code **)(*piVar5 + 0x3fc))();
  piVar7 = (int *)(**(code **)(*piVar5 + 800))();
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 0xa8))(), iVar6 == 1)) {
    FUN_10a5d940();
    cVar4 = FUN_10a68b30();
    if (cVar4 != '\0') {
      FUN_10a5dbf0();
    }
  }
  if ((char)local_34 != '\0') {
    iVar6 = *piVar5;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    uVar10 = FUN_10a5ec80(local_18);
    iVar6 = (**(code **)(iVar6 + 0x88))(uVar10);
    if (iVar6 == 0) {
      return 1;
    }
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CAnimSequenceSetInput vtbl[7] @10556f90 =====

char * FUN_10556f90(void)

{
  return "CAnimSequenceSetInput";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CAnimSequenceSetInput vtbl[10] @10556fa0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10556fa0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CAnimSequenceSetInput vtbl[13] @10556690 =====

void FUN_10556690(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
