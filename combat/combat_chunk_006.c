/* ===== FUN_11a0f9e0 @ 11a0f9e0  size=4700 ===== */
// calls: memset
// strings:
//   u"firemode"
//   u"pitchspeed"
//   u"pitchlower"
//   u"pitchupper"
//   u"Yawspeed"
//   u"Yawlower"
//   u"Yawupper"
//   u"skillid"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"firemode""
     "u"pitchspeed""
     "u"pitchlower""
     "u"pitchupper""
     "u"Yawspeed""
     "u"Yawlower""
     "u"Yawupper""
     "u"skillid"" */

void __thiscall FUN_11a0f9e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined **ppuVar6;
  int iVar7;
  float10 fVar8;
  int local_484;
  ushort local_480 [16];
  ushort *local_460;
  ushort *local_45c;
  undefined2 local_458 [16];
  undefined2 *local_438;
  undefined2 *local_434;
  wchar_t local_430 [2];
  uint uStack_42c;
  wchar_t awStack_428 [2];
  wchar_t awStack_424 [2];
  uint local_420;
  undefined2 local_41c [6];
  uint *local_410;
  wchar_t *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_460 = local_480;
  local_480[0] = 0;
  local_438 = local_458;
  local_458[0] = 0;
  local_45c = local_460;
  local_434 = local_438;
  if ((DAT_123a7238 & 1) == 0) {
    DAT_123a7238 = DAT_123a7238 | 1;
    FUN_100f67b0(&DAT_11d6dbcc);
  }
  if ((DAT_123a7238 & 2) == 0) {
    DAT_123a7238 = DAT_123a7238 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a7234);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a723c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7234);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_458,&DAT_123a723c);
  }
  if ((DAT_123a7238 & 4) == 0) {
    DAT_123a7238 = DAT_123a7238 | 4;
    FUN_100f67b0(&DAT_11d6dbd8);
  }
  if ((DAT_123a7238 & 8) == 0) {
    DAT_123a7238 = DAT_123a7238 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a724c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7250);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a724c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_480,&DAT_123a7250);
  }
  if ((DAT_123a7238 & 0x10) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x10;
    FUN_100f67b0(L"firemode");
  }
  if ((DAT_123a7238 & 0x20) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a7260);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7264);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7260);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x10,&DAT_123a7264);
  }
  ppuVar6 = &PTR_DAT_11e080e4;
  iVar2 = (int)local_460 - (int)local_45c >> 1;
  local_484 = 0;
  do {
    puVar4 = (ushort *)*ppuVar6;
    if (iVar2 == (int)ppuVar6[-1] - (int)puVar4 >> 1) {
      puVar5 = local_45c;
      iVar7 = iVar2;
      if (iVar2 != 0) {
        while (*puVar5 == *puVar4) {
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
          puVar5 = puVar5 + 1;
          if (iVar7 == 0) goto LAB_11a0fcc1;
        }
        if ((-(uint)(*puVar5 < *puVar4) & 0xfffffffe) != 0xffffffff) goto LAB_11a0fcf0;
      }
LAB_11a0fcc1:
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(&DAT_11e080e8 + local_484 * 0x2c);
      break;
    }
LAB_11a0fcf0:
    local_484 = local_484 + 1;
    ppuVar6 = ppuVar6 + 0xb;
  } while ((int)ppuVar6 < 0x11e08168);
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar2 = FUN_11820cc0(local_458);
    iVar2 = iVar2 + 0x5a;
  }
  else {
    iVar2 = FUN_11820cc0(local_458);
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  if ((DAT_123a7238 & 0x40) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x40;
    DAT_123a7274 = -1;
    local_40c = local_430;
    local_410 = &uStack_42c;
    local_430[0] = (wchar_t)DAT_11d4cd94;
    local_430[1] = DAT_11d4cd94._2_2_;
    uStack_42c = uStack_42c & 0xffff0000;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a7274) {
      DAT_123a7274 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if (-1 < (char)DAT_123a7238) {
    DAT_123a7238 = DAT_123a7238 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a7274);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7278);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7274);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a7278);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  if ((DAT_123a7238 & 0x100) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x100;
    DAT_123a7288 = -1;
    local_40c = local_430;
    local_410 = (uint *)local_41c;
    local_420._0_2_ = u_pitchspeed_11d6dbf8[8];
    local_420._2_2_ = u_pitchspeed_11d6dbf8[9];
    local_430[0] = u_pitchspeed_11d6dbf8[0];
    local_430[1] = u_pitchspeed_11d6dbf8[1];
    uStack_42c._0_2_ = u_pitchspeed_11d6dbf8[2];
    uStack_42c._2_2_ = u_pitchspeed_11d6dbf8[3];
    awStack_428[0] = u_pitchspeed_11d6dbf8[4];
    awStack_428[1] = u_pitchspeed_11d6dbf8[5];
    awStack_424[0] = u_pitchspeed_11d6dbf8[6];
    awStack_424[1] = u_pitchspeed_11d6dbf8[7];
    local_41c[0] = 0;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a7288) {
      DAT_123a7288 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x200) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a7288);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a728c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7288);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a728c);
    *(float *)(param_1 + 0x68) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x400) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x400;
    DAT_123a729c = -1;
    local_40c = local_430;
    local_410 = (uint *)local_41c;
    local_420._0_2_ = u_pitchlower_11d6dc10[8];
    local_420._2_2_ = u_pitchlower_11d6dc10[9];
    local_430[0] = u_pitchlower_11d6dc10[0];
    local_430[1] = u_pitchlower_11d6dc10[1];
    uStack_42c._0_2_ = u_pitchlower_11d6dc10[2];
    uStack_42c._2_2_ = u_pitchlower_11d6dc10[3];
    awStack_428[0] = u_pitchlower_11d6dc10[4];
    awStack_428[1] = u_pitchlower_11d6dc10[5];
    awStack_424[0] = u_pitchlower_11d6dc10[6];
    awStack_424[1] = u_pitchlower_11d6dc10[7];
    local_41c[0] = 0;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a729c) {
      DAT_123a729c = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x800) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a729c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a72a0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a729c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a72a0);
    *(float *)(param_1 + 0x60) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x1000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x1000;
    DAT_123a72b0 = -1;
    local_40c = local_430;
    local_410 = (uint *)local_41c;
    local_420._0_2_ = u_pitchupper_11d6dc28[8];
    local_420._2_2_ = u_pitchupper_11d6dc28[9];
    local_430[0] = u_pitchupper_11d6dc28[0];
    local_430[1] = u_pitchupper_11d6dc28[1];
    uStack_42c._0_2_ = u_pitchupper_11d6dc28[2];
    uStack_42c._2_2_ = u_pitchupper_11d6dc28[3];
    awStack_428[0] = u_pitchupper_11d6dc28[4];
    awStack_428[1] = u_pitchupper_11d6dc28[5];
    awStack_424[0] = u_pitchupper_11d6dc28[6];
    awStack_424[1] = u_pitchupper_11d6dc28[7];
    local_41c[0] = 0;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a72b0) {
      DAT_123a72b0 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x2000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a72b0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a72b4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a72b0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a72b4);
    *(float *)(param_1 + 100) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x4000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x4000;
    DAT_123a72c4 = -1;
    local_40c = local_430;
    local_410 = &local_420;
    local_430[0] = u_Yawspeed_11d6dc40[0];
    local_430[1] = u_Yawspeed_11d6dc40[1];
    uStack_42c._0_2_ = u_Yawspeed_11d6dc40[2];
    uStack_42c._2_2_ = u_Yawspeed_11d6dc40[3];
    awStack_428[0] = u_Yawspeed_11d6dc40[4];
    awStack_428[1] = u_Yawspeed_11d6dc40[5];
    awStack_424[0] = u_Yawspeed_11d6dc40[6];
    awStack_424[1] = u_Yawspeed_11d6dc40[7];
    local_420 = local_420 & 0xffff0000;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a72c4) {
      DAT_123a72c4 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x8000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a72c4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a72c8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a72c4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a72c8);
    *(float *)(param_1 + 0x74) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x10000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x10000;
    DAT_123a72d8 = -1;
    local_40c = local_430;
    local_410 = &local_420;
    local_430[0] = u_Yawlower_11d6dc54[0];
    local_430[1] = u_Yawlower_11d6dc54[1];
    uStack_42c._0_2_ = u_Yawlower_11d6dc54[2];
    uStack_42c._2_2_ = u_Yawlower_11d6dc54[3];
    awStack_428[0] = u_Yawlower_11d6dc54[4];
    awStack_428[1] = u_Yawlower_11d6dc54[5];
    awStack_424[0] = u_Yawlower_11d6dc54[6];
    awStack_424[1] = u_Yawlower_11d6dc54[7];
    local_420 = local_420 & 0xffff0000;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a72d8) {
      DAT_123a72d8 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x20000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a72d8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a72dc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a72d8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a72dc);
    *(float *)(param_1 + 0x6c) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x40000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x40000;
    DAT_123a72ec = -1;
    local_40c = local_430;
    local_410 = &local_420;
    local_430[0] = u_Yawupper_11d6dc68[0];
    local_430[1] = u_Yawupper_11d6dc68[1];
    uStack_42c._0_2_ = u_Yawupper_11d6dc68[2];
    uStack_42c._2_2_ = u_Yawupper_11d6dc68[3];
    awStack_428[0] = u_Yawupper_11d6dc68[4];
    awStack_428[1] = u_Yawupper_11d6dc68[5];
    awStack_424[0] = u_Yawupper_11d6dc68[6];
    awStack_424[1] = u_Yawupper_11d6dc68[7];
    local_420 = local_420 & 0xffff0000;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a72ec) {
      DAT_123a72ec = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x80000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a72ec);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a72f0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a72ec);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a72f0);
    *(float *)(param_1 + 0x70) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x100000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x100000;
    DAT_123a7300 = -1;
    local_40c = local_430;
    local_410 = &uStack_42c;
    local_430[0] = (wchar_t)DAT_11d6dc7c;
    local_430[1] = DAT_11d6dc7c._2_2_;
    uStack_42c = uStack_42c & 0xffff0000;
    iVar2 = FUN_100e1bf0(local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(local_430);
    }
    if (iVar2 != DAT_123a7300) {
      DAT_123a7300 = iVar2;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a7238 & 0x200000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a7300);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7304);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7300);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a7304);
    *(float *)(param_1 + 0x78) = (float)fVar8;
  }
  if ((DAT_123a7238 & 0x400000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x400000;
    FUN_100f67b0(L"skillid");
  }
  if ((DAT_123a7238 & 0x800000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a7314);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7318);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7314);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a7318);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
  }
  if ((DAT_123a7238 & 0x1000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x1000000;
    FUN_100f67b0(&DAT_11d6dc84);
  }
  if ((DAT_123a7238 & 0x2000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a7328);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a732c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7328);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x28,&DAT_123a732c);
  }
  if ((DAT_123a7238 & 0x4000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x4000000;
    FUN_100f67b0(&DAT_11d6dc94);
  }
  if ((DAT_123a7238 & 0x8000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a733c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7340);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a733c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x40,&DAT_123a7340);
  }
  if ((DAT_123a7238 & 0x10000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x10000000;
    FUN_100f67b0(&DAT_11d6dca0);
  }
  if ((DAT_123a7238 & 0x20000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a7350);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7354);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7350);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a7354);
    *(bool *)(param_1 + 0x90) = iVar2 != 0;
  }
  if ((DAT_123a7238 & 0x40000000) == 0) {
    DAT_123a7238 = DAT_123a7238 | 0x40000000;
    FUN_100f67b0(&DAT_11d6dcac);
  }
  if (-1 < (int)DAT_123a7238) {
    DAT_123a7238 = DAT_123a7238 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a7364);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7368);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7364);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar8 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a7368);
    *(float *)(param_1 + 0x84) = (float)fVar8;
  }
  if ((DAT_123a737c & 1) == 0) {
    DAT_123a737c = DAT_123a737c | 1;
    FUN_100f67b0(&DAT_11d6dcb8);
  }
  if ((DAT_123a737c & 2) == 0) {
    DAT_123a737c = DAT_123a737c | 2;
    iVar2 = FUN_100e1cb0(DAT_123a7378);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a7380);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a7378);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a7380);
    *(undefined4 *)(param_1 + 0x80) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x8c);
  if ((local_434 != local_458) && (local_434 != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_434);
  }
  if ((local_45c != local_480) && (local_45c != (ushort *)0x0)) {
    FUN_10c3d5d0(local_45c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_123f6da5 @ 123f6da5  size=66 ===== */
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   strings:
     ""GameOnHit"" */

void FUN_123f6da5(void)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  (**(code **)(*piVar1 + 0x60))();
  FUN_123eef39("GameOnHit");
  return;
}



