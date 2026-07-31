
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: Player::UpdateStats
   calls: memset, sprintf_s
   strings:
     ""Player::UpdateStats""
     ""/resetposex pos: %f, %f, %f""
     ""OnGround""
     ""Jumping""
     ""Flying""
     ""StuckTimer""
     ""InAirTimer""
     ""OnGroundTimer""
     ""InWaterTimer""
     ""landed"" */

void __thiscall Player__UpdateStats_10f04690(int *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  byte *pbVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined1 *puVar22;
  char local_2b8 [276];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_194;
  undefined1 local_15c [20];
  undefined8 local_148;
  int local_140;
  int local_108;
  undefined1 local_100 [20];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  int local_ac;
  undefined1 local_a4 [4];
  int local_a0;
  float local_9c;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  char local_68;
  char local_67;
  undefined1 local_58 [12];
  undefined1 local_4c [8];
  undefined1 *local_44;
  int *local_40;
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined1 *local_28;
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
  local_40 = param_1;
  local_5 = (**(code **)(*param_1 + 0x1d0))();
  (**(code **)(*param_1 + 0x10c))();
  local_24 = (int *)(**(code **)(*(int *)param_1[3] + 0x16c))();
  if (local_24 == (int *)0x0) {
    return;
  }
  if (((*(char *)(DAT_1202e818 + 0x20b) != '\0') || (*(char *)(DAT_1202e818 + 0x188) != '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x25c))(), iVar2 != 0)) {
    FUN_10a70b40();
    iVar2 = (**(code **)(*local_24 + 0x14))(local_100);
    if (((iVar2 != 0) && (local_ac != 0)) && ((int *)param_1[0x4d6] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x4d6] + 0xdc))(1,1,"Player::UpdateStats");
    }
  }
  local_1d = (**(code **)(*param_1 + 0x1c4))();
  if ((uint)param_1[0x6b] < 0x17) {
    piVar21 = param_1 + param_1[0x6b] * 0x33 + 0x6d;
  }
  else {
    DAT_1201ffe4 = 1;
    piVar21 = &DAT_1201ff28;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x578);
  local_28 = (undefined1 *)param_1[0x57a];
  fVar15 = (float)piVar21[0x31];
  fVar14 = (float)piVar21[0x32];
  local_c = (int *)(param_2 * DAT_11cbf0b8);
  local_30._0_4_ = (float)uVar20;
  local_30._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
  fVar17 = (float)local_c;
  if (DAT_11de9918 < (float)local_c) {
    fVar17 = DAT_11de9918;
  }
  param_1[0x578] = (int)((float)param_1[0x578] + fVar17 * ((float)piVar21[0x30] - (float)local_30));
  param_1[0x579] = (int)(fVar17 * (fVar15 - local_30._4_4_) + (float)param_1[0x579]);
  param_1[0x57a] = (int)(fVar17 * (fVar14 - (float)local_28) + (float)param_1[0x57a]);
  if (local_1d == '\0') {
    piVar21 = param_1 + 0x617;
    puVar22 = &DAT_40a00000;
    iVar2 = param_1[0x6b];
    pcVar3 = *(code **)(*param_1 + 0x7a8);
  }
  else {
    puVar22 = &DAT_41700000;
    piVar21 = (int *)0x0;
    iVar2 = param_1[0x6b];
    pcVar3 = *(code **)(*param_1 + 0x7a8);
  }
  local_30 = uVar20;
  uVar4 = (*pcVar3)(local_4c,iVar2,piVar21,local_1d == '\0',puVar22,param_2,0);
  FUN_10b112c0(param_1 + 0x5b5,uVar4);
  pfVar5 = (float *)FUN_10a4f2c0(local_4c,param_1[0x6b],param_1[0x617],param_1[0x618],
                                 param_1 + 0x5b5);
  uVar20 = *(undefined8 *)(param_1 + 0x5bb);
  local_28 = (undefined1 *)param_1[0x5bd];
  fVar15 = pfVar5[1];
  fVar14 = pfVar5[2];
  local_30._0_4_ = (float)uVar20;
  local_30._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
  piVar21 = local_c;
  if (DAT_11de9918 < (float)local_c) {
    piVar21 = (int *)DAT_11de9918;
  }
  param_1[0x5bb] = (int)((float)param_1[0x5bb] + (float)piVar21 * (*pfVar5 - (float)local_30));
  param_1[0x5bc] = (int)((float)param_1[0x5bc] + (float)piVar21 * (fVar15 - local_30._4_4_));
  param_1[0x5bd] = (int)((float)param_1[0x5bd] + (float)piVar21 * (fVar14 - (float)local_28));
  local_30 = uVar20;
  FUN_10a70b40();
  iVar2 = (**(code **)(*local_24 + 0x14))(local_15c);
  if (iVar2 == 0) {
    memset(local_15c,0,0x5c);
  }
  pbVar9 = (byte *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x10c))();
  if (iVar2 != 0) {
    piVar21 = (int *)(**(code **)(*param_1 + 0x10c))();
    pbVar9 = (byte *)(**(code **)(*piVar21 + 0xa4))();
  }
  local_10 = (float *)((uint)pbVar9 & 0xffffff00);
  if (pbVar9 != (byte *)0x0) {
    local_10 = (float *)(uint)((*pbVar9 & 4) != 0);
  }
  cVar1 = (char)local_10;
  if ((((char)param_1[0x626] == '\0') && ((local_108 != 0 || (local_5 != '\0')))) &&
     (*(char *)((int)param_1 + 0x188e) == '\0')) {
    iVar2 = (**(code **)(*param_1 + 0x25c))();
    if (iVar2 != 0) {
      cVar1 = (char)local_10;
      goto LAB_10f04a17;
    }
  }
  else {
LAB_10f04a17:
    if (cVar1 == '\0') {
      param_1[0x5f1] = 0;
      param_1[0x5f2] = 0;
      param_1[0x5f3] = 0;
      *(undefined8 *)(param_1 + 0x5ee) = *(undefined8 *)(param_1 + 0x5f1);
      param_1[0x5f0] = param_1[0x5f3];
      param_1[0x5ea] = 0;
      param_1[0x5e9] = 0;
      param_1[0x61e] = 0;
      param_1[0x5fd] = 0;
      param_1[0x616] = 0;
      param_1[0x5e2] = -0x3b860000;
      param_1[0x60b] = -1;
      FUN_10a70b40();
      local_dc = 1;
      local_e4 = 0;
      local_e8 = 0;
      local_ec = 0;
      (**(code **)(*local_24 + 0x10))(local_100,0);
      if ((char)param_1[0x658] == '\0') {
        cVar1 = FUN_10a5b170();
        if (cVar1 == '\0') {
          return;
        }
        if ((char)param_1[0x658] != '\0') goto LAB_10f04b08;
      }
      else {
LAB_10f04b08:
        uVar20 = *(undefined8 *)(param_1 + 0x65c);
        local_28 = (undefined1 *)param_1[0x65e];
        local_30._0_4_ = (float)uVar20;
        local_30._0_4_ = (float)param_1[0x659] - (float)local_30;
        local_30._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
        local_30._4_4_ = (float)param_1[0x65a] - local_30._4_4_;
        local_14 = (float)param_1[0x65b] - (float)local_28;
        fVar14 = local_30._4_4_ * local_30._4_4_ + (float)local_30 * (float)local_30 +
                 local_14 * local_14 + DAT_11de98a0;
        auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar13._0_4_;
        fVar15 = (DAT_11de9938 - fVar15 * fVar14 * fVar15 * DAT_11de98e8) * fVar15;
        local_14 = fVar15 * local_14;
        *(ulonglong *)(param_1 + 0x627) = CONCAT44(fVar15 * local_30._4_4_,fVar15 * (float)local_30)
        ;
        param_1[0x629] = (int)local_14;
        local_30 = uVar20;
      }
      cVar1 = (**(code **)(*param_1 + 0x5dc))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  FUN_10cfd780();
  (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x30))(param_1[3],local_a4);
  cVar1 = (**(code **)(*param_1 + 0x228))();
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*(int *)param_1[3] + 0x128))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(int *)param_1[3] + 0x130))(), cVar1 == '\0')) {
    if (local_68 == '\0') {
      DAT_1203c904 = 0;
      DAT_1203c900 = 0.0;
    }
    else {
      if ((DAT_1203c904 == 0) && (DAT_1203c900 == DAT_11de9890)) {
        iVar2 = (**(code **)(*(int *)param_1[3] + 0x94))();
        DAT_1203c908 = *(float *)(iVar2 + 8);
      }
      if (DAT_1203c900 < DAT_11de9918) {
        DAT_1203c900 = DAT_1203c900 + param_2;
      }
      else {
        iVar2 = (**(code **)(*(int *)param_1[3] + 0x94))();
        if (DAT_1203c908 - *(float *)(iVar2 + 8) < DAT_11cbf0b8) {
          DAT_1203c904 = 0;
        }
        else {
          DAT_1203c904 = DAT_1203c904 + 1;
          DAT_1203c908 = *(float *)(iVar2 + 8);
        }
        DAT_1203c900 = 0.0;
      }
      if (9 < DAT_1203c904) {
        local_1c = 0;
        local_14 = 0.0;
        puVar6 = (undefined8 *)(**(code **)(*(int *)param_1[3] + 0x94))();
        uVar20 = *puVar6;
        local_28 = *(undefined1 **)(puVar6 + 1);
        local_30._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
        dVar11 = (double)local_30._4_4_;
        local_30._0_4_ = (float)uVar20;
        dVar12 = (double)(float)local_30;
        local_30 = uVar20;
        sprintf_s(local_2b8,0x100,"/resetposex pos: %f, %f, %f",dVar12,dVar11,
                  (double)(float)local_28);
        iVar2 = FUN_10d17460();
        if (*(int *)(iVar2 + 0x94) != 0) {
          FUN_100b5f70(&DAT_11d9d32b,&local_5);
          FUN_100b5f70(local_2b8,&local_5);
          FUN_10d17460();
          FUN_1115da10(1,local_58,local_3c,&local_1c,0);
          if ((local_44 != local_58) && (local_44 != (undefined1 *)0x0)) {
            FUN_10c3d5d0();
          }
          if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
            FUN_10c3d5d0();
          }
        }
        DAT_1203c904 = 0;
        DAT_1203c900 = 0.0;
        if ((float)local_1c != 0.0) {
          FUN_10c3d5d0();
        }
      }
    }
  }
  local_14 = 0.0;
  param_1[0x61a] = 0;
  param_1[0x61b] = 0;
  param_1[0x61c] = 0;
  if ((*(char *)(DAT_1202e818 + 0x16d) != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x1d0))(), cVar1 != '\0')) {
    *(undefined8 *)(param_1 + 0x5f4) = local_148;
    param_1[0x5f6] = local_140;
  }
  fVar14 = param_2 / DAT_11cbf08c;
  fVar15 = 0.0;
  if ((fVar14 < 0.0) || (fVar15 = DAT_11de9918, DAT_11de9918 <= fVar14)) {
    fVar14 = fVar15;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x62a);
  local_1c._0_4_ = (float)uVar20;
  local_1c._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
  local_14 = (float)param_1[0x62c] + fVar14 * (local_84 - (float)param_1[0x62c]);
  *(ulonglong *)(param_1 + 0x62a) =
       CONCAT44((float)param_1[0x62b] + fVar14 * (local_88 - local_1c._4_4_),
                (float)param_1[0x62a] + fVar14 * (local_8c - (float)local_1c));
  param_1[0x62c] = (int)local_14;
  param_1[0x60b] = local_90;
  param_1[0x60f] = (int)local_9c;
  local_1c = uVar20;
  FUN_10db19b0();
  iVar2 = (**(code **)(*param_1 + 0x4d4))();
  uVar7 = 0;
  if ((iVar2 == 0) ||
     (uVar7 = CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(iVar2 + 0x60)),
     *(char *)(iVar2 + 0x60) == '\0')) {
    param_1[0x627] = 0;
    param_1[0x628] = 0;
    param_1[0x629] = 0x3f800000;
  }
  else {
    uVar7 = param_1[0x5c1];
    *(undefined8 *)(param_1 + 0x627) = *(undefined8 *)(param_1 + 0x5bf);
    param_1[0x629] = uVar7;
    *(undefined1 *)((int)param_1 + 0x1851) = 0;
  }
  if (DAT_11de98bc <
      (float)param_1[0x5ff] * (float)param_1[0x5ff] + (float)param_1[0x600] * (float)param_1[0x600]
      + (float)param_1[0x601] * (float)param_1[0x601]) {
    uVar7 = param_1[0x601];
    *(undefined8 *)(param_1 + 0x627) = *(undefined8 *)(param_1 + 0x5ff);
    param_1[0x629] = uVar7;
    param_1[0x601] = 0;
    param_1[0x600] = 0;
    param_1[0x5ff] = 0;
  }
  local_10 = (float *)(uVar7 & 0xffffff00);
  local_5 = local_68 != '\0';
  if ((!(bool)local_5) ||
     (((*(char *)((int)param_1 + 0x1853) == '\0' && (*(char *)((int)param_1 + 0x1851) == '\0')) ||
      (DAT_11de9890 < (float)param_1[0x615])))) {
    local_10 = (float *)(uint)(DAT_11ce8ed8 < local_9c);
  }
  if (((local_67 == '\0') || (local_9c <= DAT_11ce8ed8)) ||
     ((**(code **)(*(int *)param_1[3] + 200))(&local_1c), DAT_11de98e8 <= local_14 - local_9c)) {
    param_1[0x610] = 0;
  }
  else {
    param_1[0x610] = (int)((float)param_1[0x610] + param_2);
  }
  fVar15 = (float)param_1[0x615] - param_2;
  if (fVar15 <= DAT_11de9890) {
    fVar15 = 0.0;
  }
  *(char *)((int)param_1 + 0x1853) = local_5;
  param_1[0x615] = (int)fVar15;
  fVar15 = DAT_11ce8ed8;
  *(undefined1 *)((int)param_1 + 0x1852) = 0;
  *(bool *)(param_1 + 0x5e1) = local_67 != '\0';
  if (((local_9c <= fVar15) ||
      (iVar2 = (**(code **)(*(int *)param_1[3] + 200))(local_4c),
      DAT_11cbf084 <= *(float *)(iVar2 + 8) - local_9c)) ||
     (*(char *)((int)param_1 + 0x1851) != '\0')) {
LAB_10f0517a:
    local_c = (int *)DAT_11de9918;
    if ((char)local_10 == '\0') {
      local_c = (int *)0.0;
    }
  }
  else {
    fVar15 = (float)param_1[0x5df];
    if (fVar15 != DAT_11de9890) goto LAB_10f0517a;
    local_10 = (float *)CONCAT31(CONCAT21((short)((uint)iVar2 >> 0x10),
                                          (fVar15 == DAT_11de9890) << 6 |
                                          (NAN(fVar15) || NAN(DAT_11de9890)) << 2 | 2U |
                                          fVar15 < DAT_11de9890),1);
    local_c = (int *)DAT_11de9918;
  }
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("OnGround"),
     piVar21 != (int *)0x0)) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)DAT_11de9918;
  if (*(char *)((int)param_1 + 0x1851) == '\0') {
    local_c = (int *)0x0;
  }
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("Jumping"), piVar21 != (int *)0x0
     )) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)DAT_11de9918;
  if (local_5 == '\0') {
    local_c = (int *)0x0;
  }
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("Flying"), piVar21 != (int *)0x0)
     ) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x615];
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("StuckTimer"),
     piVar21 != (int *)0x0)) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5df];
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("InAirTimer"),
     piVar21 != (int *)0x0)) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5e0];
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("OnGroundTimer"),
     piVar21 != (int *)0x0)) {
    (**(code **)(*piVar21 + 0x20))(local_c);
  }
  local_c = (int *)param_1[0x5e2];
  uVar7 = 0;
  if (((int *)param_1[0x8dd] != (int *)0x0) &&
     (piVar21 = (int *)(**(code **)(*(int *)param_1[0x8dd] + 0xc))("InWaterTimer"),
     uVar7 = extraout_ECX, piVar21 != (int *)0x0)) {
    (**(code **)(*piVar21 + 0x20))(local_c);
    uVar7 = extraout_ECX_00;
  }
  cVar1 = (char)local_10;
  if ((cVar1 == '\0') && ((char)param_1[0x626] == '\0')) {
    iVar2 = (**(code **)(*param_1 + 0x25c))();
    if (iVar2 != 0) {
      cVar1 = (char)local_10;
      uVar7 = extraout_ECX_01;
      goto LAB_10f05463;
    }
    cVar1 = (**(code **)(*param_1 + 0x5dc))();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*param_1 + 0x4d4))();
      if ((((iVar2 == 0) || (*(char *)(iVar2 + 0x60) == '\0')) &&
          (*(char *)((int)param_1 + 0x181f) == '\0')) &&
         (*(float *)(DAT_120286b8 + 0x7b0) - DAT_11de9918 < (float)param_1[0x61e])) {
        local_c = (int *)param_1[3];
        local_10 = (float *)(**(code **)(*local_c + 200))(local_4c);
        puVar6 = &local_1c;
        iVar2 = **(int **)(DAT_1202e818 + 0x34);
        iVar8 = (**(code **)(*local_c + 200))();
        uVar20 = CONCAT44(puVar6,(int)*(float *)(iVar8 + 4));
        iVar8 = (int)*local_10;
        (**(code **)(iVar2 + 0x1a0))();
        param_1 = local_40;
        (**(code **)(*(int *)local_40[3] + 200))(local_4c,iVar8,uVar20);
      }
      fVar14 = _DAT_11df97fc;
      fVar15 = (float)param_1[0x5df];
      param_1[0x5df] = (int)(fVar15 + param_2);
      if ((fVar14 < fVar15 + param_2) || (local_1d != '\0')) {
        param_1[0x5e0] = 0;
      }
      if ((char)param_1[0x658] != '\0') {
        param_1[0x5df] = 0;
      }
    }
  }
  else {
LAB_10f05463:
    local_c = (int *)(uVar7 & 0xffffff00);
    if (((0.0 < (float)param_1[0x5df]) && (cVar1 != '\0')) && ((char)param_1[0x658] == '\0')) {
      local_c = (int *)(uint)(0.0 < (float)param_1[0x5e0]);
    }
    if (((*(char *)((int)param_1 + 0x1851) != '\0') && (0.0 < (float)param_1[0x5e0])) &&
       (local_78 - local_6c <= 0.0)) {
      *(undefined1 *)((int)param_1 + 0x1851) = 0;
    }
    if ((char)local_c == '\0') {
      *(undefined1 *)(param_1 + 0x614) = 0;
    }
    else {
      if (DAT_11cbbbd4 < (float)param_1[0x5df]) {
        *(undefined1 *)(param_1 + 0x614) = 1;
      }
      *(undefined1 *)((int)param_1 + 0x1851) = 0;
      param_1[0x616] = 0x3e4ccccd;
      (**(code **)(*param_1 + 0x7c8))(param_1[0x61e]);
    }
    param_1[0x5df] = 0;
    param_1[0x5e0] = (int)(param_2 + (float)param_1[0x5e0]);
    if (((char)local_c != '\0') && ((float)param_1[0x61e] != 0.0)) {
      (**(code **)(*param_1 + 0x120))("landed",param_1[0x61e],0);
      param_1[0x61e] = 0;
      (**(code **)(*(int *)param_1[3] + 200))();
      if (local_14 < (float)param_1[0x5e8]) {
        (**(code **)(*param_1 + 0x120))("jump_splash",(float)param_1[0x5e8] - local_14,0);
      }
    }
  }
  local_1c = *(undefined8 *)(param_1 + 0x5f1);
  local_14 = (float)param_1[0x5f3];
  local_44 = (undefined1 *)(local_78 - local_6c);
  *(ulonglong *)(param_1 + 0x5ee) = CONCAT44(local_80._4_4_ - local_70,(float)local_80 - local_74);
  param_1[0x5f0] = (int)local_44;
  *(undefined8 *)(param_1 + 0x5f1) = local_80;
  param_1[0x5f3] = (int)local_78;
  fVar15 = (float)param_1[0x5f3];
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
  param_1[0x61f] = (int)fVar15;
  iVar2 = (**(code **)(*param_1 + 0x25c))();
  if (iVar2 != 0) {
    param_1[0x61f] = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x5dc))();
  if (cVar1 != '\0') {
    param_1[0x61f] = 0;
  }
  if (DAT_11de9a5c < (float)param_1[0x5e2]) {
    param_1[0x61f] = 0;
  }
  if (*(char *)((int)param_1 + 0x181f) == '\x02') {
    param_1[0x61f] = 0;
  }
  fVar15 = (float)param_1[0x5f0];
  local_10 = (float *)(param_1[0x591] ^ DAT_11de9c90);
  local_40 = (int *)(param_1[0x593] ^ DAT_11de9c90);
  fVar14 = (float)param_1[0x5ee];
  fVar18 = (float)(param_1[0x592] ^ DAT_11de9c90);
  fVar17 = (float)param_1[0x594];
  fVar16 = ((float)param_1[0x5ef] * (float)local_10 - fVar14 * fVar18) + fVar15 * fVar17;
  fVar19 = ((fVar15 * fVar18 - (float)param_1[0x5ef] * (float)local_40) + fVar14 * fVar17) *
           (float)local_40 - fVar16 * (float)local_10;
  fVar15 = fVar16 * fVar18 -
           ((fVar14 * (float)local_40 - fVar15 * (float)local_10) + (float)param_1[0x5ef] * fVar17)
           * (float)local_40;
  fVar15 = fVar15 + fVar14 + fVar15;
  fVar19 = (float)param_1[0x5ef] + fVar19 + fVar19;
  param_1[0x5ea] = (int)SQRT(fVar15 * fVar15 + fVar19 * fVar19 + 0.0);
  if ((float)param_1[0x5df] == 0.0) {
LAB_10f0585d:
    param_1[0x61e] = 0;
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + 0x5f4);
    local_14 = (float)param_1[0x5f6];
    local_1c._0_4_ = (float)uVar20;
    fVar15 = (float)param_1[0x5ee] * (float)local_1c;
    local_1c._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
    fVar14 = (float)param_1[0x5ef] * local_1c._4_4_;
    local_1c = uVar20;
    if (((fVar14 + fVar15 + (float)param_1[0x5f0] * local_14 <= 0.0) ||
        (0.0 < (float)param_1[0x5e2])) || ((char)param_1[0x658] != '\0')) goto LAB_10f0585d;
    if ((float)param_1[0x61e] == 0.0) {
      (**(code **)(*param_1 + 0x120))("fallStart",0,0);
    }
    param_1[0x61e] = param_1[0x5f0] ^ DAT_11de9c90;
  }
  if (*(int *)(DAT_120286b8 + 0x7c0) == 2) {
    (**(code **)(*(int *)param_1[3] + 200))(local_4c);
  }
  param_1[0x5fe] = local_a0;
  if ((float)param_1[0x5ea] <= DAT_11cbf084) {
    param_1[0x612] = 0;
    param_1[0x613] = (int)((float)param_1[0x613] + param_2);
  }
  else {
    param_1[0x613] = 0;
    param_1[0x612] = (int)((float)param_1[0x612] + param_2);
  }
  cVar1 = (**(code **)(*param_1 + 0x5dc))();
  if (cVar1 != '\0') {
    param_1[0x5df] = 0;
  }
  if (DAT_11ce8ec8 < local_9c) {
    pfVar5 = (float *)(**(code **)(*(int *)param_1[3] + 0xb4))();
    fVar15 = pfVar5[2];
    fVar14 = pfVar5[3];
    param_1[0x57b] =
         (int)(local_9c -
              (local_30._4_4_ * (fVar15 * pfVar5[1] - *pfVar5 * fVar14) * DAT_11de9990 +
               (float)local_30 * (*pfVar5 * fVar15 + pfVar5[1] * fVar14) * DAT_11de9990 +
              (float)local_28 * ((fVar15 * fVar15 + fVar14 * fVar14) * DAT_11de9990 - DAT_11de9918))
              );
  }
  FUN_10a70b40();
  local_5 = (**(code **)(*param_1 + 0x5dc))();
  if ((((((char)param_1[0x626] == '\0') && (*(char *)((int)param_1 + 0x188e) == '\0')) &&
       (local_5 == '\0')) &&
      ((iVar2 = (**(code **)(*param_1 + 0x4d4))(), iVar2 == 0 || (*(char *)(iVar2 + 0x60) == '\0')))
      ) && ((char)param_1[0x658] == '\0')) {
    local_194 = 0;
LAB_10f05a2b:
    if ((char)param_1[0x658] == '\0') goto LAB_10f05a52;
  }
  else {
    local_194 = 1;
    if ((local_5 == '\0') || (0.0 < (float)param_1[0x5e3])) goto LAB_10f05a2b;
  }
  local_19c = 0;
  local_1a0 = 0;
  local_1a4 = 0;
LAB_10f05a52:
  (**(code **)(*local_24 + 0x10))();
  fVar15 = (float)param_1[0x5fd] - param_2;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_1[0x5fd] = (int)fVar15;
  fVar15 = (float)param_1[0x616] - param_2;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_1[0x616] = (int)fVar15;
  fVar15 = (float)param_1[0x611];
  if (0.0 <= fVar15) {
    fVar15 = fVar15 - param_2;
    bVar10 = 0.0 < fVar15;
  }
  else {
    fVar15 = fVar15 + param_2;
    bVar10 = fVar15 < 0.0;
  }
  fVar14 = 0.0;
  if (bVar10 || fVar15 == 0.0) {
    fVar14 = fVar15;
  }
  param_1[0x611] = (int)fVar14;
  return;
}

