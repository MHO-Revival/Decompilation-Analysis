
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: Player::UpdateStats
   calls: memset
   strings:
     ""Player::UpdateStats""
     ""OnGround""
     ""Jumping""
     ""Flying""
     ""StuckTimer""
     ""InAirTimer""
     ""OnGroundTimer""
     ""InWaterTimer""
     ""landed""
     ""jump_splash"" */

void __thiscall Player__UpdateStats(int *param_1,float param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  byte *pbVar10;
  bool bVar11;
  float10 fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int *piVar20;
  undefined1 *puVar21;
  undefined1 local_1dc [28];
  undefined4 local_1c0;
  undefined1 local_1a4 [20];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_148 [20];
  undefined8 local_134;
  int local_12c;
  int local_f4;
  undefined1 local_ec [20];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  int local_98;
  undefined1 local_90 [4];
  int local_8c;
  float local_88;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  char local_54;
  char local_53;
  char local_42 [2];
  undefined1 local_40 [8];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int *local_28;
  int *local_24;
  char local_1d;
  undefined8 local_1c;
  float local_14;
  float *local_10;
  int *local_c;
  char local_5;
  
  if (param_1[3] == 0) {
    return;
  }
  local_28 = param_1;
  local_5 = (**(code **)(*param_1 + 0x1d0))();
  if (local_5 != '\0') {
    cVar3 = *(char *)(DAT_120286b8 + 0x50);
    pcVar1 = (char *)((int)param_1 + 0x17d6);
    if (pcVar1 != local_42) {
      if (*pcVar1 != cVar3) {
        *(undefined1 *)((int)param_1 + 0x17d7) = 1;
      }
      *pcVar1 = cVar3;
    }
  }
  (**(code **)(*param_1 + 0x10c))();
  local_24 = (int *)(**(code **)(*(int *)param_1[3] + 0x16c))();
  if (local_24 == (int *)0x0) {
    return;
  }
  if (((*(char *)(DAT_1202e818 + 0x20b) != '\0') || (*(char *)(DAT_1202e818 + 0x188) != '\0')) &&
     (iVar4 = (**(code **)(*param_1 + 0x25c))(), iVar4 != 0)) {
    FUN_10a70b40();
    iVar4 = (**(code **)(*local_24 + 0x14))(local_ec);
    if (((iVar4 != 0) && (local_98 != 0)) && ((int *)param_1[0x4d6] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x4d6] + 0xdc))(1,1,"Player::UpdateStats");
    }
  }
  local_1d = (**(code **)(*param_1 + 0x1c4))();
  if ((uint)param_1[0x6b] < 0x17) {
    piVar20 = param_1 + param_1[0x6b] * 0x33 + 0x6d;
  }
  else {
    DAT_1201ffe4 = 1;
    piVar20 = &DAT_1201ff28;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x566);
  local_14 = (float)param_1[0x568];
  fVar15 = (float)piVar20[0x31];
  fVar14 = (float)piVar20[0x32];
  local_c = (int *)(param_2 * DAT_11cbf0b8);
  local_1c._0_4_ = (float)uVar2;
  local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar17 = (float)local_c;
  if (DAT_11de9918 < (float)local_c) {
    fVar17 = DAT_11de9918;
  }
  param_1[0x566] = (int)((float)param_1[0x566] + fVar17 * ((float)piVar20[0x30] - (float)local_1c));
  param_1[0x567] = (int)((float)param_1[0x567] + fVar17 * (fVar15 - local_1c._4_4_));
  param_1[0x568] = (int)((float)param_1[0x568] + fVar17 * (fVar14 - local_14));
  if (local_1d == '\0') {
    piVar20 = param_1 + 0x5eb;
    puVar21 = &DAT_40a00000;
    iVar4 = param_1[0x6b];
    pcVar5 = *(code **)(*param_1 + 0x76c);
  }
  else {
    puVar21 = &DAT_41700000;
    piVar20 = (int *)0x0;
    iVar4 = param_1[0x6b];
    pcVar5 = *(code **)(*param_1 + 0x76c);
  }
  local_1c = uVar2;
  uVar6 = (*pcVar5)(local_40,iVar4,piVar20,local_1d == '\0',puVar21,param_2,0);
  FUN_10b112c0(param_1 + 0x58b,uVar6);
  pfVar7 = (float *)FUN_10a4f2c0(local_40,param_1[0x6b],param_1[0x5eb],param_1[0x5ec],
                                 param_1 + 0x58b);
  uVar2 = *(undefined8 *)(param_1 + 0x591);
  local_14 = (float)param_1[0x593];
  fVar15 = pfVar7[1];
  fVar14 = pfVar7[2];
  local_1c._0_4_ = (float)uVar2;
  local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  piVar20 = local_c;
  if (DAT_11de9918 < (float)local_c) {
    piVar20 = (int *)DAT_11de9918;
  }
  param_1[0x591] = (int)((float)piVar20 * (*pfVar7 - (float)local_1c) + (float)param_1[0x591]);
  param_1[0x592] = (int)((float)piVar20 * (fVar15 - local_1c._4_4_) + (float)param_1[0x592]);
  param_1[0x593] = (int)((float)piVar20 * (fVar14 - local_14) + (float)param_1[0x593]);
  local_1c = uVar2;
  FUN_10a70b40();
  iVar4 = (**(code **)(*local_24 + 0x14))(local_148);
  if (iVar4 == 0) {
    memset(local_148,0,0x5c);
  }
  pbVar10 = (byte *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x10c))();
  if (iVar4 != 0) {
    piVar20 = (int *)(**(code **)(*param_1 + 0x10c))();
    pbVar10 = (byte *)(**(code **)(*piVar20 + 0xa4))();
  }
  local_10 = (float *)((uint)pbVar10 & 0xffffff00);
  if (pbVar10 != (byte *)0x0) {
    local_10 = (float *)(uint)((*pbVar10 & 4) != 0);
  }
  cVar3 = (char)local_10;
  if ((((char)param_1[0x5fa] == '\0') && ((local_f4 != 0 || (local_5 != '\0')))) &&
     (*(char *)((int)param_1 + 0x17de) == '\0')) {
    iVar4 = (**(code **)(*param_1 + 0x25c))();
    if (iVar4 != 0) {
      cVar3 = (char)local_10;
      goto LAB_10d98357;
    }
  }
  else {
LAB_10d98357:
    if (cVar3 == '\0') {
      FUN_10d9f6d0(0);
      param_1[0x5c6] = 0;
      param_1[0x5c7] = 0;
      param_1[0x5c8] = 0;
      *(undefined8 *)(param_1 + 0x5c3) = *(undefined8 *)(param_1 + 0x5c6);
      param_1[0x5c5] = param_1[0x5c8];
      param_1[0x5bf] = 0;
      param_1[0x5be] = 0;
      param_1[0x5f2] = 0;
      param_1[0x5d2] = 0;
      param_1[0x5ea] = 0;
      param_1[0x5b7] = -0x3b860000;
      param_1[0x5e0] = -1;
      FUN_10a70b40();
      local_c8 = 1;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      (**(code **)(*local_24 + 0x10))(local_ec,0);
      if ((char)param_1[0x62b] == '\0') {
        cVar3 = FUN_10a5b170();
        if (cVar3 == '\0') {
          return;
        }
        if ((char)param_1[0x62b] != '\0') goto LAB_10d98451;
      }
      else {
LAB_10d98451:
        uVar2 = *(undefined8 *)(param_1 + 0x62f);
        local_14 = (float)param_1[0x631];
        local_1c._0_4_ = (float)uVar2;
        local_1c._0_4_ = (float)param_1[0x62c] - (float)local_1c;
        local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_1c._4_4_ = (float)param_1[0x62d] - local_1c._4_4_;
        local_2c = (float)param_1[0x62e] - local_14;
        fVar14 = local_1c._4_4_ * local_1c._4_4_ + (float)local_1c * (float)local_1c +
                 local_2c * local_2c + DAT_11de98a0;
        auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar13._0_4_;
        fVar15 = (DAT_11de9938 - fVar15 * fVar14 * fVar15 * DAT_11de98e8) * fVar15;
        local_2c = fVar15 * local_2c;
        *(ulonglong *)(param_1 + 0x5fb) = CONCAT44(fVar15 * local_1c._4_4_,fVar15 * (float)local_1c)
        ;
        param_1[0x5fd] = (int)local_2c;
        local_1c = uVar2;
      }
      cVar3 = (**(code **)(*param_1 + 0x5dc))();
      if (cVar3 == '\0') {
        return;
      }
    }
  }
  FUN_10cfd780();
  (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x30))(param_1[3],local_90);
  local_2c = 0.0;
  param_1[0x5ee] = 0;
  param_1[0x5ef] = 0;
  param_1[0x5f0] = 0;
  if ((*(char *)(DAT_1202e818 + 0x16d) != '\0') &&
     (cVar3 = (**(code **)(*param_1 + 0x1d0))(), cVar3 != '\0')) {
    *(undefined8 *)(param_1 + 0x5c9) = local_134;
    param_1[0x5cb] = local_12c;
  }
  fVar14 = param_2 / DAT_11cbf08c;
  fVar15 = 0.0;
  if ((fVar14 < 0.0) || (fVar15 = DAT_11de9918, DAT_11de9918 <= fVar14)) {
    fVar14 = fVar15;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x5fe);
  local_14 = (float)param_1[0x600];
  local_1c._0_4_ = (float)uVar2;
  local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_2c = (float)param_1[0x600] + (local_70 - local_14) * fVar14;
  *(ulonglong *)(param_1 + 0x5fe) =
       CONCAT44((float)param_1[0x5ff] + (local_74 - local_1c._4_4_) * fVar14,
                (float)param_1[0x5fe] + (local_78 - (float)local_1c) * fVar14);
  param_1[0x600] = (int)local_2c;
  param_1[0x5e0] = local_7c;
  param_1[0x5e4] = (int)local_88;
  local_1c = uVar2;
  FUN_10db19b0(&local_34);
  iVar4 = (**(code **)(*param_1 + 0x4d4))();
  uVar8 = 0;
  if ((iVar4 == 0) ||
     (uVar8 = CONCAT31((int3)((uint)iVar4 >> 8),*(char *)(iVar4 + 0x60)),
     *(char *)(iVar4 + 0x60) == '\0')) {
    param_1[0x5fb] = 0;
    param_1[0x5fc] = 0;
    param_1[0x5fd] = 0x3f800000;
  }
  else {
    uVar8 = param_1[0x597];
    *(undefined8 *)(param_1 + 0x5fb) = *(undefined8 *)(param_1 + 0x595);
    param_1[0x5fd] = uVar8;
    *(undefined1 *)((int)param_1 + 0x17a1) = 0;
  }
  if (DAT_11de98bc <
      (float)param_1[0x5d4] * (float)param_1[0x5d4] + (float)param_1[0x5d5] * (float)param_1[0x5d5]
      + (float)param_1[0x5d6] * (float)param_1[0x5d6]) {
    uVar8 = param_1[0x5d6];
    *(undefined8 *)(param_1 + 0x5fb) = *(undefined8 *)(param_1 + 0x5d4);
    param_1[0x5fd] = uVar8;
    param_1[0x5d6] = 0;
    param_1[0x5d5] = 0;
    param_1[0x5d4] = 0;
  }
  fVar15 = DAT_11ce8ed8;
  local_10 = (float *)(uVar8 & 0xffffff00);
  local_5 = local_54 != '\0';
  if ((!(bool)local_5) ||
     (((*(char *)((int)param_1 + 0x17a3) == '\0' && (*(char *)((int)param_1 + 0x17a1) == '\0')) ||
      (DAT_11de9890 < (float)param_1[0x5e9])))) {
    local_10 = (float *)(uint)(DAT_11ce8ed8 < local_88);
  }
  fVar14 = (float)param_1[0x5e9] - param_2;
  if (fVar14 <= DAT_11de9890) {
    fVar14 = 0.0;
  }
  param_1[0x5e9] = (int)fVar14;
  *(undefined1 *)((int)param_1 + 0x17a2) = 0;
  *(char *)((int)param_1 + 0x17a3) = local_5;
  *(bool *)(param_1 + 0x5b6) = local_53 != '\0';
  if (((local_88 <= fVar15) ||
      (iVar4 = (**(code **)(*(int *)param_1[3] + 200))(local_40),
      DAT_11cbf084 <= *(float *)(iVar4 + 8) - local_88)) ||
     (*(char *)((int)param_1 + 0x17a1) != '\0')) {
LAB_10d9882a:
    local_c = (int *)DAT_11de9918;
    if ((char)local_10 == '\0') {
      local_c = (int *)0.0;
    }
  }
  else {
    fVar15 = (float)param_1[0x5b4];
    if (fVar15 != DAT_11de9890) goto LAB_10d9882a;
    local_10 = (float *)CONCAT31(CONCAT21((short)((uint)iVar4 >> 0x10),
                                          (fVar15 == DAT_11de9890) << 6 |
                                          (NAN(fVar15) || NAN(DAT_11de9890)) << 2 | 2U |
                                          fVar15 < DAT_11de9890),1);
    local_c = (int *)DAT_11de9918;
  }
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("OnGround"),
     piVar20 != (int *)0x0)) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)DAT_11de9918;
  if (*(char *)((int)param_1 + 0x17a1) == '\0') {
    local_c = (int *)0x0;
  }
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("Jumping"), piVar20 != (int *)0x0
     )) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)DAT_11de9918;
  if (local_5 == '\0') {
    local_c = (int *)0x0;
  }
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("Flying"), piVar20 != (int *)0x0)
     ) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5e9];
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("StuckTimer"),
     piVar20 != (int *)0x0)) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5b4];
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("InAirTimer"),
     piVar20 != (int *)0x0)) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5b5];
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("OnGroundTimer"),
     piVar20 != (int *)0x0)) {
    (**(code **)(*piVar20 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5b7];
  uVar8 = 0;
  if (((int *)param_1[0x730] != (int *)0x0) &&
     (piVar20 = (int *)(**(code **)(*(int *)param_1[0x730] + 0xc))("InWaterTimer"),
     uVar8 = extraout_ECX, piVar20 != (int *)0x0)) {
    (**(code **)(*piVar20 + 0x20))(local_c);
    uVar8 = extraout_ECX_00;
  }
  cVar3 = (char)local_10;
  if ((cVar3 == '\0') && ((char)param_1[0x5fa] == '\0')) {
    iVar4 = (**(code **)(*param_1 + 0x25c))();
    if (iVar4 != 0) {
      cVar3 = (char)local_10;
      uVar8 = extraout_ECX_01;
      goto LAB_10d98b3a;
    }
    cVar3 = (**(code **)(*param_1 + 0x5dc))();
    if (cVar3 == '\0') {
      iVar4 = (**(code **)(*param_1 + 0x4d4))();
      if (((iVar4 == 0) || (*(char *)(iVar4 + 0x60) == '\0')) &&
         ((*(char *)((int)param_1 + 0x1773) == '\0' &&
          (*(float *)(DAT_120286b8 + 0x7b0) - DAT_11de9918 < (float)param_1[0x5f2])))) {
        local_c = (int *)param_1[3];
        local_10 = (float *)(**(code **)(*local_c + 200))(local_40);
        iVar4 = **(int **)(DAT_1202e818 + 0x34);
        iVar9 = (**(code **)(*local_c + 200))(&local_1c);
        fVar12 = (float10)(**(code **)(iVar4 + 0x1a0))((int)*local_10,(int)*(float *)(iVar9 + 4));
        param_1 = local_28;
        local_c = (int *)(float)fVar12;
        iVar4 = (**(code **)(*(int *)local_28[3] + 200))(local_40);
        if ((float)local_c + DAT_11de99a0 < *(float *)(iVar4 + 8)) {
          FUN_10d9f6d0(1);
        }
      }
      fVar14 = _DAT_11df83d8;
      fVar15 = (float)param_1[0x5b4];
      param_1[0x5b4] = (int)(param_2 + fVar15);
      if ((fVar14 < param_2 + fVar15) || (local_1d != '\0')) {
        param_1[0x5b5] = 0;
      }
      if ((char)param_1[0x62b] != '\0') {
        param_1[0x5b4] = 0;
      }
    }
  }
  else {
LAB_10d98b3a:
    local_c = (int *)(uVar8 & 0xffffff00);
    if ((0.0 < (float)param_1[0x5b4]) && (cVar3 != '\0')) {
      local_c = (int *)(uint)((char)param_1[0x62b] == '\0');
    }
    if (((*(char *)((int)param_1 + 0x17a1) != '\0') && (0.0 < (float)param_1[0x5b5])) &&
       (local_64 - local_58 <= 0.0)) {
      *(undefined1 *)((int)param_1 + 0x17a1) = 0;
    }
    if ((char)local_c == '\0') {
      *(undefined1 *)(param_1 + 0x5e8) = 0;
    }
    else {
      if (DAT_11cbbbd4 < (float)param_1[0x5b4]) {
        *(undefined1 *)(param_1 + 0x5e8) = 1;
      }
      *(undefined1 *)((int)param_1 + 0x17a1) = 0;
      param_1[0x5ea] = 0x3e4ccccd;
      (**(code **)(*param_1 + 0x77c))(param_1[0x5f2]);
    }
    param_1[0x5b4] = 0;
    param_1[0x5b5] = (int)((float)param_1[0x5b5] + param_2);
    if (((char)local_c != '\0') && ((float)param_1[0x5f2] != 0.0)) {
      (**(code **)(*param_1 + 0x120))("landed",param_1[0x5f2],0);
      param_1[0x5f2] = 0;
      (**(code **)(*(int *)param_1[3] + 200))(&local_1c);
      if (local_14 < (float)param_1[0x5bd]) {
        (**(code **)(*param_1 + 0x120))("jump_splash",(float)param_1[0x5bd] - local_14,0);
      }
    }
    FUN_10d9f6d0(0);
  }
  local_1c = *(undefined8 *)(param_1 + 0x5c6);
  local_14 = (float)param_1[0x5c8];
  local_38 = local_64 - local_58;
  *(ulonglong *)(param_1 + 0x5c3) = CONCAT44(local_6c._4_4_ - local_5c,(float)local_6c - local_60);
  param_1[0x5c5] = (int)local_38;
  *(undefined8 *)(param_1 + 0x5c6) = local_6c;
  param_1[0x5c8] = (int)local_64;
  fVar15 = (float)param_1[0x5c8];
  if (0.0 < fVar15) {
    fVar15 = 0.0;
  }
  fVar14 = local_14;
  if (0.0 < local_14) {
    fVar14 = 0.0;
  }
  fVar15 = fVar15 - fVar14;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_1[0x5f3] = (int)fVar15;
  iVar4 = (**(code **)(*param_1 + 0x25c))();
  if (iVar4 != 0) {
    param_1[0x5f3] = 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x5dc))();
  if (cVar3 != '\0') {
    param_1[0x5f3] = 0;
  }
  if (DAT_11de9a5c < (float)param_1[0x5b7]) {
    param_1[0x5f3] = 0;
  }
  if (*(char *)((int)param_1 + 0x1773) == '\x02') {
    param_1[0x5f3] = 0;
  }
  fVar15 = (float)param_1[0x5c5];
  local_10 = (float *)(param_1[0x57b] ^ DAT_11de9c90);
  fVar14 = (float)param_1[0x5c4];
  local_28 = (int *)(param_1[0x57d] ^ DAT_11de9c90);
  fVar17 = (float)param_1[0x57e];
  fVar18 = (float)(param_1[0x57c] ^ DAT_11de9c90);
  fVar16 = (fVar14 * (float)local_10 - (float)param_1[0x5c3] * fVar18) + fVar15 * fVar17;
  fVar19 = fVar18 * fVar16 -
           (float)local_28 *
           (((float)param_1[0x5c3] * (float)local_28 - fVar15 * (float)local_10) + fVar14 * fVar17);
  fVar15 = (float)local_28 *
           ((fVar15 * fVar18 - fVar14 * (float)local_28) + (float)param_1[0x5c3] * fVar17) -
           (float)local_10 * fVar16;
  fVar19 = (float)param_1[0x5c3] + fVar19 + fVar19;
  fVar15 = fVar14 + fVar15 + fVar15;
  param_1[0x5bf] = (int)SQRT(fVar19 * fVar19 + fVar15 * fVar15 + 0.0);
  if ((float)param_1[0x5b4] == 0.0) {
LAB_10d98f35:
    param_1[0x5f2] = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x5c9);
    local_14 = (float)param_1[0x5cb];
    local_1c._0_4_ = (float)uVar2;
    fVar15 = (float)param_1[0x5c3] * (float)local_1c;
    local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar14 = (float)param_1[0x5c4] * local_1c._4_4_;
    local_1c = uVar2;
    if (((fVar14 + fVar15 + (float)param_1[0x5c5] * local_14 <= 0.0) ||
        (0.0 < (float)param_1[0x5b7])) || ((char)param_1[0x62b] != '\0')) goto LAB_10d98f35;
    if ((float)param_1[0x5f2] == 0.0) {
      (**(code **)(*param_1 + 0x120))("fallStart",0,0);
    }
    param_1[0x5f2] = param_1[0x5c5] ^ DAT_11de9c90;
  }
  if (*(int *)(DAT_120286b8 + 0x7c0) == 2) {
    (**(code **)(*(int *)param_1[3] + 200))(local_40);
  }
  param_1[0x5d3] = local_8c;
  if ((float)param_1[0x5bf] <= DAT_11cbf084) {
    param_1[0x5e6] = 0;
    param_1[0x5e7] = (int)((float)param_1[0x5e7] + param_2);
  }
  else {
    param_1[0x5e7] = 0;
    param_1[0x5e6] = (int)((float)param_1[0x5e6] + param_2);
  }
  cVar3 = (**(code **)(*param_1 + 0x5dc))();
  if (cVar3 != '\0') {
    param_1[0x5b4] = 0;
    FUN_10d9f6d0(0);
  }
  if (DAT_11ce8ec8 < local_88) {
    pfVar7 = (float *)(**(code **)(*(int *)param_1[3] + 0xb4))();
    fVar15 = pfVar7[2];
    fVar14 = pfVar7[3];
    param_1[0x569] =
         (int)(local_88 -
              (local_30 * (fVar15 * pfVar7[1] - *pfVar7 * fVar14) * DAT_11de9990 +
               local_34 * (*pfVar7 * fVar15 + pfVar7[1] * fVar14) * DAT_11de9990 +
              local_2c * ((fVar15 * fVar15 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918)));
  }
  FUN_10a70ae0();
  local_1c0 = 0;
  (**(code **)(*local_24 + 0x10))(local_1dc,0);
  FUN_10a70b40();
  local_5 = (**(code **)(*param_1 + 0x5dc))();
  if (((((char)param_1[0x5fa] == '\0') && (*(char *)((int)param_1 + 0x17de) == '\0')) &&
      ((local_5 == '\0' &&
       ((iVar4 = (**(code **)(*param_1 + 0x4d4))(), iVar4 == 0 || (*(char *)(iVar4 + 0x60) == '\0'))
       )))) && ((char)param_1[0x62b] == '\0')) {
    local_180 = 0;
LAB_10d99132:
    if ((char)param_1[0x62b] == '\0') goto LAB_10d99159;
  }
  else {
    local_180 = 1;
    if ((local_5 == '\0') || (0.0 < (float)param_1[0x5b8])) goto LAB_10d99132;
  }
  local_188 = 0;
  local_18c = 0;
  local_190 = 0;
LAB_10d99159:
  (**(code **)(*local_24 + 0x10))(local_1a4,0);
  fVar15 = (float)param_1[0x5d2] - param_2;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_1[0x5d2] = (int)fVar15;
  fVar15 = (float)param_1[0x5ea] - param_2;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_1[0x5ea] = (int)fVar15;
  fVar15 = (float)param_1[0x5e5];
  if (0.0 <= fVar15) {
    fVar15 = fVar15 - param_2;
    bVar11 = 0.0 < fVar15;
  }
  else {
    fVar15 = fVar15 + param_2;
    bVar11 = fVar15 < 0.0;
  }
  fVar14 = 0.0;
  if (bVar11 || fVar15 == 0.0) {
    fVar14 = fVar15;
  }
  param_1[0x5e5] = (int)fVar14;
  return;
}

