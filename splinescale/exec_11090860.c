// CSingle::Shoot_11090860 @ 11090860  (3120 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 5, 12, 16, 19, 20, 22, 24, 27, 28]


/* [RE-AUTO c3]
   id: CSingle::Shoot
   strings:
     ""g_aimdebug""
     ""CSingle::Shoot"" */

undefined4 __thiscall
CSingle__Shoot_11090860(int *param_1,undefined4 param_2,char param_3,int *param_4)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float10 fVar13;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined1 local_70 [12];
  int *local_64;
  int *local_60;
  undefined1 local_5c [4];
  undefined **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  int *local_20;
  undefined1 local_19;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  local_14 = *(int **)(param_1[0x5c] + 0x38);
  local_10 = param_1;
  iVar4 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x60))(local_14);
  local_18 = iVar4;
  local_20 = (int *)FUN_10cbb820();
  if (local_20 == (int *)0x0) {
    local_5 = '\0';
    local_6 = '\0';
  }
  else {
    local_5 = (**(code **)(*local_20 + 0x1c4))();
    local_6 = (**(code **)(*local_20 + 0x1d0))();
  }
  if (*(short *)(param_1[0x5c] + 6) == 0) {
    iVar4 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x15c))(local_14);
    local_18 = iVar4;
  }
  cVar3 = (**(code **)(*param_1 + 0x8c))(1);
  if (cVar3 == '\0') {
    if (((iVar4 < 1) && (*(char *)((int)param_1 + 0x16) == '\0')) && ((char)param_1[0x5b] == '\0'))
    {
      FUN_10cdc020(param_1[0x5c] + 0xf4,0,0,0x2180033,0xbf800000);
      (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x50))(0);
    }
    return 0;
  }
  cVar3 = (**(code **)(*(int *)param_1[4] + 0x37c))();
  if (cVar3 != '\0') {
    FUN_10cdc020(param_1[0x5c] + 0x118,0,0,0x2180033,0xbf800000);
    return 0;
  }
  FUN_11102ce0(0x3f800000,0);
  local_19 = 0;
  local_ac = 0;
  (**(code **)(*param_1 + 0x188))(&local_44,0x44fa0000,&local_19,local_b0);
  (**(code **)(*param_1 + 0xf8))(&local_2c,&local_44);
  iVar4 = *param_1;
  fVar13 = (float10)(**(code **)(iVar4 + 0x68))();
  uVar5 = (**(code **)(*param_1 + 0xfc))(&local_50,&local_44,&local_2c,(float)fVar13);
  (**(code **)(iVar4 + 400))(&local_38,uVar5);
  (**(code **)(*param_1 + 0x18c))(local_70,&local_38);
  if (*(char *)(param_1[0x5c] + 0x8c) != '\0') {
    FUN_11103080(*(undefined4 *)(param_1[0x5c] + 0x90),&local_2c,&local_38);
  }
  if (((*(char *)(DAT_1202e818 + 0x16d) == '\0') && (local_6 != '\0')) &&
     ((DAT_11de9890 < *(float *)(param_1[0x5c] + 0x94) &&
      (cVar3 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 200))(), cVar3 == '\0')))) {
    FUN_11095bf0(&local_2c,&local_38,local_b0);
  }
  puVar12 = *(undefined1 **)(param_1[0x5c] + 0xec);
  puVar11 = &DAT_11d9d32b;
  if (puVar12 != (undefined1 *)0x0) {
    puVar11 = puVar12;
  }
  if (((local_18 == 1) ||
      ((*(char *)(param_1[0x5c] + 0x1f) != '\0' &&
       (cVar3 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 200))(), cVar3 != '\0')))) ||
     ((*(char *)(param_1[0x5c] + 0x1e) != '\0' &&
      (cVar3 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 200))(), cVar3 != '\0')))) {
    puVar11 = &DAT_11d9d32b;
    if (*(undefined1 **)(param_1[0x5c] + 0xe8) != (undefined1 *)0x0) {
      puVar11 = *(undefined1 **)(param_1[0x5c] + 0xe8);
    }
  }
  uVar5 = 0x29c0033;
  if ((char)param_1[0x46] != '\0') {
    *(undefined1 *)(param_1 + 0x46) = 0;
    uVar5 = 0x29e0033;
  }
  local_c = (int *)(**(code **)(*param_1 + 0x1d8))(uVar5);
  if ((char)param_4 != '\0') {
    local_c = (int *)((uint)local_c & 0xffefffff);
  }
  param_4 = (int *)0x0;
  FUN_10ab4370(puVar11);
  FUN_10cdc020(&param_4,0,0,local_c,0xbf800000);
  FUN_10ab53d0(param_4);
  local_c = (int *)FUN_10cdd4a0(0);
  if (800 < local_c) {
    *(undefined1 *)((int)param_1 + 0x16f) = 1;
    param_4 = param_1;
    uVar5 = FUN_11097e10(&param_4,0);
    FUN_10ce0de0((int)local_c - 100,uVar5);
  }
  if ((DAT_1203e6dc & 1) == 0) {
    DAT_1203e6dc = DAT_1203e6dc | 1;
    DAT_1203e6d8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_aimdebug");
  }
  iVar4 = (**(code **)(*DAT_1203e6d8 + 8))();
  if (iVar4 != 0) {
    piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x194))();
    (**(code **)(*piVar6 + 4))("CSingle::Shoot",0);
    (**(code **)(*piVar6 + 8))(&local_44,0x3f19999a,0,0,0x3f800000,0x3f800000,&DAT_41200000);
    (**(code **)(*piVar6 + 0xc))
              (&local_2c,0x3e800000,&local_38,0,0,0x3f800000,0x3f800000,0x3f800000);
  }
  (**(code **)(*param_1 + 0x1e4))
            (&local_44,&local_2c,&local_38,
             SQRT((local_40 - local_2c._4_4_) * (local_40 - local_2c._4_4_) +
                  (local_44 - (float)local_2c) * (local_44 - (float)local_2c) +
                  (local_3c - local_24) * (local_3c - local_24)),0x3f800000);
  piVar6 = (int *)(**(code **)(*(int *)(param_1[4] + 0x34c) + 0x158))(local_14,0);
  local_c = piVar6;
  if (piVar6 != (int *)0x0) {
    if (*(char *)(param_1[0x5c] + 0x6a) != '\0') {
      (**(code **)(*piVar6 + 0xb8))();
    }
    local_64 = (int *)FUN_10ba9b00();
    iVar4 = param_1[0x5c];
    param_4 = (int *)(float)*(int *)(iVar4 + 0x24);
    if (*(char *)(iVar4 + 0x28) == '\0') {
      if (local_5 == '\0') goto LAB_11090d97;
LAB_11090e48:
      uVar5 = *(undefined4 *)(iVar4 + 0x74);
    }
    else {
      if (local_5 != '\0') goto LAB_11090e48;
      param_4 = (int *)(float)*(int *)(iVar4 + 0x2c);
LAB_11090d97:
      uVar5 = 0;
    }
    puVar12 = &DAT_11d9d32b;
    if (*(undefined1 **)(iVar4 + 0x34) != (undefined1 *)0x0) {
      puVar12 = *(undefined1 **)(iVar4 + 0x34);
    }
    uVar7 = *(undefined4 *)(param_1[4] + 8);
    local_48 = (float)*piVar6;
    local_60 = (int *)local_10[4];
    piVar6 = local_60 + 0xd3;
    uVar5 = (**(code **)(*local_64 + 0xb0))(puVar12,uVar5,*(undefined4 *)(local_10[0x5c] + 0x78));
    uVar5 = (**(code **)(*piVar6 + 0xac))(uVar7,(int)(float)param_4,uVar5);
    uVar5 = (**(code **)(*local_60 + 0x68))(uVar5);
    piVar6 = local_c;
    (**(code **)((int)local_48 + 0x80))(uVar5);
    (**(code **)(*piVar6 + 200))();
    param_1 = local_10;
    if ((char)local_10[0x49] == '\0') {
      iVar4 = *piVar6;
      uVar5 = (**(code **)(*(int *)(local_10[4] + 0x34c) + 0x20))();
      (**(code **)(iVar4 + 0x88))(uVar5);
      piVar6 = local_c;
    }
    else {
      (**(code **)(*piVar6 + 0x84))(local_10[0x48]);
    }
    (**(code **)(*piVar6 + 0x8c))(&local_2c,&local_38,local_70,param_1[0x1c]);
    param_4 = *(int **)(param_1[0x5c] + 0xb4);
    if ((*(int *)(DAT_120286b8 + 0x360) != 0) || (*(int *)(DAT_120286b8 + 0x364) != 0)) {
      param_4 = (int *)0x1;
    }
    iVar4 = (**(code **)(*(int *)param_1[4] + 0x200))();
    if ((*(byte *)(iVar4 + 0x20) & 1) == 0) {
      iVar4 = *(int *)(param_1[0x5c] + 0x98);
      if ((iVar4 == 0) || (*(int *)(iVar4 + -8) == 0)) goto LAB_11090f06;
LAB_11090f0f:
      iVar4 = (**(code **)(*param_1 + 0x3c))();
      if ((local_18 != iVar4) && (local_18 % (int)param_4 != 0)) goto LAB_11090f2d;
      bVar2 = true;
    }
    else {
      iVar4 = *(int *)(param_1[0x5c] + 0xa0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + -8) != 0)) goto LAB_11090f0f;
LAB_11090f06:
      cVar3 = FUN_10ab5740();
      if (cVar3 == '\0') goto LAB_11090f0f;
LAB_11090f2d:
      bVar2 = false;
    }
    if ((*(int *)(param_1[0x5c] + 0x20) < 1) || (*(int *)(param_1[0x5c] + 0x20) < local_18)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    param_4 = (int *)CONCAT31(param_4._1_3_,cVar3);
    if ((bVar2) || (cVar3 != '\0')) {
      FUN_11095c60(&local_2c,&local_44,param_4);
    }
    iVar4 = (**(code **)(*(int *)piVar6[3] + 4))();
    param_1[10] = iVar4;
  }
  piVar6 = local_20;
  if ((local_5 != '\0') && (cVar3 = (**(code **)(*local_20 + 0x1d0))(), cVar3 != '\0')) {
    (**(code **)(*piVar6 + 0x48c))();
    param_4 = (int *)piVar6[0x4e7];
    if ((*(char *)(param_1[0x5c] + 0x70) != '\0') &&
       (((param_4 != (int *)0x0 && (cVar3 = (**(code **)(*param_4 + 8))(3), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*param_4 + 8))(4), cVar3 == '\0')))) {
      local_4c = &PTR_FUN_11cbc798;
      local_48 = 1.0;
      uVar5 = FUN_10a74dd0(&local_4c);
      piVar6 = local_20;
      uVar7 = FUN_10b09fd0(local_20[2],0x3f400000);
      uVar7 = FUN_10a74e40(uVar7);
      local_58 = &PTR_FUN_11cbc7b0;
      (**(code **)(*(int *)piVar6[0x4e7] + 4))(uVar7,uVar5,0x3e4ccccd,3);
    }
  }
  piVar10 = local_c;
  if (((local_c == (int *)0x0) || (local_c[7] == 0)) ||
     ((*(char *)(local_c[7] + 5) == '\0' || (*(char *)(DAT_1202e818 + 0x208) == '\0')))) {
LAB_11091081:
    if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
      if (local_14 == (int *)0x0) {
        ppuVar8 = (undefined **)0x0;
      }
      else {
        ppuVar8 = (undefined **)(**(code **)(*local_14 + 8))();
      }
      piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0x7c))();
      local_48 = *(float *)(local_10[4] + 8);
      local_5c[0] = 0x1b;
      local_54 = 0x3f800000;
      local_50 = 0;
      local_4c = (undefined **)0x0;
      iVar4 = *piVar6;
      local_58 = ppuVar8;
      uVar5 = FUN_10cbb800(local_5c);
      (**(code **)(iVar4 + 0x18))(uVar5);
      piVar10 = local_c;
    }
  }
  else if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
    if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 0x1d0))(), cVar3 != '\0')) {
      (**(code **)(*(int *)piVar10[1] + 0xc))(0);
    }
    goto LAB_11091081;
  }
  if (piVar10 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*(int *)piVar10[3] + 4))();
  }
  piVar6 = local_10;
  iVar4 = ((int *)local_10[4])[0xd3];
  uVar5 = (**(code **)(*(int *)local_10[4] + 0x68))(uVar5,local_14,&local_2c,&local_38,local_70);
  (**(code **)(iVar4 + 0x128))(uVar5);
  (**(code **)(*piVar6 + 0x1a8))(1,1,1);
  (**(code **)(*piVar6 + 0x1b8))(&local_2c);
  (**(code **)(*piVar6 + 0x1b4))();
  (**(code **)(*piVar6 + 0x1bc))(&local_2c,&local_38);
  fVar1 = (float)piVar6[7];
  *(short *)(piVar6 + 9) = (short)piVar6[9] + 1;
  *(undefined1 *)(piVar6 + 5) = 1;
  piVar6[7] = (int)((float)piVar6[6] + fVar1);
  piVar6[0x47] = (int)((float)piVar6[6] + fVar1 + DAT_11de98e8);
  if ((short)piVar6[9] == *(short *)(piVar6[0x5c] + 0x1c)) {
    *(undefined2 *)(piVar6 + 9) = 0;
  }
  iVar4 = local_18;
  if (*(int *)(DAT_120286b8 + 0x3e0) == 0) {
    iVar4 = local_18 + -1;
  }
  param_4 = *(int **)(piVar6[0x5c] + 0x80);
  if ((param_4 != (int *)0x0) && (local_5 != '\0')) {
    uVar9 = FUN_10c3f250();
    iVar4 = iVar4 - (int)((ulonglong)uVar9 * ZEXT48(param_4) >> 0x20);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  if (*(short *)(piVar6[0x5c] + 6) != -1) {
    if (*(short *)(piVar6[0x5c] + 6) == 0) {
      (**(code **)(*(int *)(piVar6[4] + 0x34c) + 0x160))(local_14,iVar4);
    }
    else {
      (**(code **)(*(int *)(piVar6[4] + 0x34c) + 100))();
    }
  }
  cVar3 = (**(code **)(*(int *)(piVar6[4] + 0x34c) + 200))();
  if (((cVar3 == '\0') || (cVar3 = (**(code **)(*piVar6 + 0x40))(), cVar3 != '\0')) ||
     (*(char *)(piVar6[0x5c] + 0x1e) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  param_4 = (int *)CONCAT13(cVar3,param_4._0_3_);
  puVar12 = *(undefined1 **)(piVar6[0x5c] + 0x40);
  if ((puVar12 != (undefined1 *)0x0) && (*(int *)(puVar12 + -8) != 0)) {
    if ((cVar3 == '\0') && (0 < iVar4)) goto LAB_11091320;
    local_10 = (int *)0x0;
    puVar11 = &DAT_11d9d32b;
    if (puVar12 != (undefined1 *)0x0) {
      puVar11 = puVar12;
    }
    FUN_10ab4370(puVar11);
    FUN_10cdcfe0(&local_10,0x21a0033,1);
    FUN_10ab53d0(local_10);
  }
  if (param_4._3_1_ != '\0') {
    iVar4 = *(int *)(piVar6[4] + 0x34c);
    uVar5 = (**(code **)(iVar4 + 0x9c))();
    piVar10 = (int *)(**(code **)(iVar4 + 0x94))(uVar5);
    if ((piVar10 != (int *)0x0) && (cVar3 = (**(code **)(*piVar10 + 0x4c))(), cVar3 != '\0')) {
      (**(code **)(*piVar10 + 0xa8))(1,1,1);
      param_4 = piVar6;
      uVar5 = FUN_11097db0(&param_4,0);
      uVar5 = FUN_10cdd4a0(0,uVar5);
      FUN_10ce0de0(uVar5);
    }
  }
LAB_11091320:
  cVar3 = (**(code **)(*piVar6 + 0x40))();
  piVar10 = local_14;
  if (((cVar3 != '\0') &&
      ((**(code **)(*(int *)(piVar6[4] + 0x34c) + 0x154))(local_14), param_3 != '\0')) &&
     ((local_20 == (int *)0x0 || (cVar3 = (**(code **)(*local_20 + 0x1c4))(), cVar3 != '\0')))) {
    (**(code **)(*(int *)piVar6[4] + 0xd4))(1);
    param_4 = (int *)piVar6[4];
    uVar5 = FUN_11098000(&param_4,0);
    uVar5 = FUN_10cdd4a0(0,uVar5);
    FUN_10ce0de0(uVar5);
    piVar10 = local_14;
  }
  DAT_11df9edc = DAT_11df9edc + 1;
  if (3 < DAT_11df9edc) {
    DAT_11df9edc = 3;
  }
  iVar4 = DAT_11df9ed8 + 1;
  if (2 < iVar4) {
    iVar4 = 0;
  }
  local_48 = local_24 + local_30 * DAT_11cc3f1c;
  DAT_11df9ed8 = iVar4;
  (&DAT_1203e68c)[iVar4 * 3] =
       CONCAT44(local_2c._4_4_ + local_34 * DAT_11cc3f1c,(float)local_2c + local_38 * DAT_11cc3f1c);
  (&DAT_1203e694)[iVar4 * 6] = local_48;
  (&DAT_1203e680)[iVar4 * 3] = local_2c;
  (&DAT_1203e688)[iVar4 * 6] = local_24;
  if (local_c == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*(int *)local_c[1] + 0x70))();
  }
  (**(code **)(*(int *)(piVar6[4] + 0x34c) + 0xf0))
            (piVar10,&local_2c,&local_38,local_70,&local_44,piVar6[0x1c],uVar5,0);
  return 1;
}

