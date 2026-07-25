// CAbnormalStatusConfig::LoadFromNode @ 11681860
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-R1]
   strings:
     "u"PoisonTol""
     "u"Poison""
     "u"PoisonAdd""
     "u"PoisonMax""
     "u"PoisonWeaken""
     "u"PoisonBuff""
     "u"PoisonDmg""
     "u"PoisonCount""
     "u"PoisonWeakenScale""
     "u"ParalysisTol"" */

undefined4 __thiscall CAbnormalStatusConfig__LoadFromNode(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1;
  if ((DAT_12389990 & 1) == 0) {
    DAT_12389990 = DAT_12389990 | 1;
    FUN_100f67b0(L"PoisonTol");
  }
  if ((DAT_12389990 & 2) == 0) {
    DAT_12389990 = DAT_12389990 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238998c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389994);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389994,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x218) = iVar2;
  }
  if ((DAT_12389990 & 4) == 0) {
    DAT_12389990 = DAT_12389990 | 4;
    FUN_100f67b0(L"Poison");
  }
  if ((DAT_12389990 & 8) == 0) {
    DAT_12389990 = DAT_12389990 | 8;
    iVar2 = FUN_100e1cb0(DAT_123899a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899a8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899a8,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x21c) = iVar2;
  }
  if ((DAT_12389990 & 0x10) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10;
    FUN_100f67b0(L"PoisonAdd");
  }
  if ((DAT_12389990 & 0x20) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123899b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899bc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899bc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x220) = iVar2;
  }
  if ((DAT_12389990 & 0x40) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40;
    FUN_100f67b0(L"PoisonMax");
  }
  if (-1 < (char)DAT_12389990) {
    DAT_12389990 = DAT_12389990 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123899cc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899d0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899d0,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x224) = iVar2;
  }
  if ((DAT_12389990 & 0x100) == 0) {
    DAT_12389990 = DAT_12389990 | 0x100;
    FUN_100f67b0(L"PoisonWeaken");
  }
  if ((DAT_12389990 & 0x200) == 0) {
    DAT_12389990 = DAT_12389990 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123899e0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899e4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899e4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x228) = iVar2;
  }
  if ((DAT_12389990 & 0x400) == 0) {
    DAT_12389990 = DAT_12389990 | 0x400;
    FUN_100f67b0(L"PoisonBuff");
  }
  if ((DAT_12389990 & 0x800) == 0) {
    DAT_12389990 = DAT_12389990 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123899f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899f8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899f8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x22c) = iVar2;
  }
  if ((DAT_12389990 & 0x1000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x1000;
    FUN_100f67b0(L"PoisonDmg");
  }
  if ((DAT_12389990 & 0x2000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389a08);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a0c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a0c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x230) = iVar2;
  }
  if ((DAT_12389990 & 0x4000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x4000;
    FUN_100f67b0(L"PoisonCount");
  }
  if ((DAT_12389990 & 0x8000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389a1c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a20);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a20,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x234) = iVar2;
  }
  if ((DAT_12389990 & 0x10000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10000;
    FUN_100f67b0(L"PoisonWeakenScale");
  }
  if ((DAT_12389990 & 0x20000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389a30);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a34);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a34,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x238) = iVar2;
  }
  if ((DAT_12389990 & 0x40000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40000;
    FUN_100f67b0(L"ParalysisTol");
  }
  if ((DAT_12389990 & 0x80000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389a44);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a48);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a48,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x23c) = iVar2;
  }
  if ((DAT_12389990 & 0x100000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x100000;
    FUN_100f67b0(L"Paralysis");
  }
  if ((DAT_12389990 & 0x200000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389a58);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a5c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a5c,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x240) = iVar2;
  }
  if ((DAT_12389990 & 0x400000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x400000;
    FUN_100f67b0(L"ParalysisAdd");
  }
  if ((DAT_12389990 & 0x800000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389a6c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a70);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a70,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x244) = iVar2;
  }
  if ((DAT_12389990 & 0x1000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x1000000;
    FUN_100f67b0(L"ParalysisMax");
  }
  if ((DAT_12389990 & 0x2000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389a80);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a84);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a84,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x248) = iVar2;
  }
  if ((DAT_12389990 & 0x4000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x4000000;
    FUN_100f67b0(L"ParalysisWeaken");
  }
  if ((DAT_12389990 & 0x8000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389a94);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a98);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a98,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x24c) = iVar2;
  }
  if ((DAT_12389990 & 0x10000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10000000;
    FUN_100f67b0(L"ParalysisBuff");
  }
  if ((DAT_12389990 & 0x20000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389aa8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389aac);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389aac,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x250) = iVar2;
  }
  if ((DAT_12389990 & 0x40000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40000000;
    FUN_100f67b0(L"ParalysisCount");
  }
  if (-1 < (int)DAT_12389990) {
    DAT_12389990 = DAT_12389990 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389abc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ac0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ac0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x254) = iVar2;
  }
  if ((DAT_12389ad4 & 1) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 1;
    FUN_100f67b0(L"ParalysisWeakenScale");
  }
  if ((DAT_12389ad4 & 2) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389ad0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ad8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 600) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ad8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 600) = iVar2;
  }
  if ((DAT_12389ad4 & 4) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 4;
    FUN_100f67b0(L"StunTol");
  }
  if ((DAT_12389ad4 & 8) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389ae8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389aec);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389aec,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x25c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10;
    FUN_100f67b0(L"Stun");
  }
  if ((DAT_12389ad4 & 0x20) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389afc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b00);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b00,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x260) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40;
    FUN_100f67b0(L"StunAdd");
  }
  if (-1 < (char)DAT_12389ad4) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389b10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b14);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b14,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x264) = iVar2;
  }
  if ((DAT_12389ad4 & 0x100) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x100;
    FUN_100f67b0(L"StunMax");
  }
  if ((DAT_12389ad4 & 0x200) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389b24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b28);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b28,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x268) = iVar2;
  }
  if ((DAT_12389ad4 & 0x400) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x400;
    FUN_100f67b0(L"StunWeaken");
  }
  if ((DAT_12389ad4 & 0x800) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389b38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b3c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b3c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x26c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x1000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x1000;
    FUN_100f67b0(L"StunBuff");
  }
  if ((DAT_12389ad4 & 0x2000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389b4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b50);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b50,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x270) = iVar2;
  }
  if ((DAT_12389ad4 & 0x4000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x4000;
    FUN_100f67b0(L"StunCount");
  }
  if ((DAT_12389ad4 & 0x8000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389b60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b64);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b64,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x274) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10000;
    FUN_100f67b0(L"StunWeakenScale");
  }
  if ((DAT_12389ad4 & 0x20000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389b74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b78);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b78,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x278) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40000;
    FUN_100f67b0(L"SleepTol");
  }
  if ((DAT_12389ad4 & 0x80000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389b88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b8c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b8c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x27c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x100000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x100000;
    FUN_100f67b0(L"Sleep");
  }
  if ((DAT_12389ad4 & 0x200000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389b9c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ba0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ba0,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x280) = iVar2;
  }
  if ((DAT_12389ad4 & 0x400000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x400000;
    FUN_100f67b0(L"SleepAdd");
  }
  if ((DAT_12389ad4 & 0x800000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389bb0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bb4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bb4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x284) = iVar2;
  }
  if ((DAT_12389ad4 & 0x1000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x1000000;
    FUN_100f67b0(L"SleepMax");
  }
  if ((DAT_12389ad4 & 0x2000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389bc4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bc8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bc8,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x288) = iVar2;
  }
  if ((DAT_12389ad4 & 0x4000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x4000000;
    FUN_100f67b0(L"SleepWeaken");
  }
  if ((DAT_12389ad4 & 0x8000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389bd8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bdc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x28c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bdc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x28c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10000000;
    FUN_100f67b0(L"SleepBuff");
  }
  if ((DAT_12389ad4 & 0x20000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389bec);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bf0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bf0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x290) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40000000;
    FUN_100f67b0(L"SleepCount");
  }
  if (-1 < (int)DAT_12389ad4) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389c00);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c04);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c04,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x294) = iVar2;
  }
  if ((DAT_12389c18 & 1) == 0) {
    DAT_12389c18 = DAT_12389c18 | 1;
    FUN_100f67b0(L"SleepWeakenScale");
  }
  if ((DAT_12389c18 & 2) == 0) {
    DAT_12389c18 = DAT_12389c18 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389c14);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c1c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c1c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x298) = iVar2;
  }
  if ((DAT_12389c18 & 4) == 0) {
    DAT_12389c18 = DAT_12389c18 | 4;
    FUN_100f67b0(L"TrapTol");
  }
  if ((DAT_12389c18 & 8) == 0) {
    DAT_12389c18 = DAT_12389c18 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389c2c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c30);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c30,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x29c) = iVar2;
  }
  if ((DAT_12389c18 & 0x10) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10;
    FUN_100f67b0(L"TrapTimeLower");
  }
  if ((DAT_12389c18 & 0x20) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389c40);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c44);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c44,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a0) = iVar2;
  }
  if ((DAT_12389c18 & 0x40) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40;
    FUN_100f67b0(L"TrapCount");
  }
  if (-1 < (char)DAT_12389c18) {
    DAT_12389c18 = DAT_12389c18 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389c54);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c58);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c58,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a4) = iVar2;
  }
  if ((DAT_12389c18 & 0x100) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x100;
    FUN_100f67b0(L"TrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x200) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389c68);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c6c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c6c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a8) = iVar2;
  }
  if ((DAT_12389c18 & 0x400) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x400;
    FUN_100f67b0(L"ParaTrapTol");
  }
  if ((DAT_12389c18 & 0x800) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389c7c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c80);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c80,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2ac) = iVar2;
  }
  if ((DAT_12389c18 & 0x1000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x1000;
    FUN_100f67b0(L"ParaTrapTimeLower");
  }
  if ((DAT_12389c18 & 0x2000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389c90);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c94);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c94,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b0) = iVar2;
  }
  if ((DAT_12389c18 & 0x4000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x4000;
    FUN_100f67b0(L"ParaTrapCount");
  }
  if ((DAT_12389c18 & 0x8000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389ca4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ca8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ca8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b4) = iVar2;
  }
  if ((DAT_12389c18 & 0x10000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10000;
    FUN_100f67b0(L"ParaTrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x20000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389cb8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cbc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cbc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b8) = iVar2;
  }
  if ((DAT_12389c18 & 0x40000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40000;
    FUN_100f67b0(L"AdvTrapTol");
  }
  if ((DAT_12389c18 & 0x80000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389ccc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cd0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 700) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cd0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 700) = iVar2;
  }
  if ((DAT_12389c18 & 0x100000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x100000;
    FUN_100f67b0(L"AdvTrapTimeLower");
  }
  if ((DAT_12389c18 & 0x200000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389ce0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ce4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ce4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c0) = iVar2;
  }
  if ((DAT_12389c18 & 0x400000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x400000;
    FUN_100f67b0(L"AdvTrapCount");
  }
  if ((DAT_12389c18 & 0x800000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389cf4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cf8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cf8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c4) = iVar2;
  }
  if ((DAT_12389c18 & 0x1000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x1000000;
    FUN_100f67b0(L"AdvTrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x2000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389d08);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d0c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d0c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c8) = iVar2;
  }
  if ((DAT_12389c18 & 0x4000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x4000000;
    FUN_100f67b0(L"FlareTol");
  }
  if ((DAT_12389c18 & 0x8000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389d1c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d20);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d20,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2cc) = iVar2;
  }
  if ((DAT_12389c18 & 0x10000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10000000;
    FUN_100f67b0(L"FlareTimeLower");
  }
  if ((DAT_12389c18 & 0x20000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389d30);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d34);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d34,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d0) = iVar2;
  }
  if ((DAT_12389c18 & 0x40000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40000000;
    FUN_100f67b0(L"FlareWeakenScale");
  }
  if (-1 < (int)DAT_12389c18) {
    DAT_12389c18 = DAT_12389c18 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389d44);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d48);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d48,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d8) = iVar2;
  }
  if ((DAT_12389d5c & 1) == 0) {
    DAT_12389d5c = DAT_12389d5c | 1;
    FUN_100f67b0(L"FlareCount");
  }
  if ((DAT_12389d5c & 2) == 0) {
    DAT_12389d5c = DAT_12389d5c | 2;
    iVar2 = FUN_100e1cb0(DAT_12389d58);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d60);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d60,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d4) = iVar2;
  }
  if ((DAT_12389d5c & 4) == 0) {
    DAT_12389d5c = DAT_12389d5c | 4;
    FUN_100f67b0(L"SonicTol");
  }
  if ((DAT_12389d5c & 8) == 0) {
    DAT_12389d5c = DAT_12389d5c | 8;
    iVar2 = FUN_100e1cb0(DAT_12389d70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d74);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d74,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2dc) = iVar2;
  }
  if ((DAT_12389d5c & 0x10) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10;
    FUN_100f67b0(L"SonicWeakenScale");
  }
  if ((DAT_12389d5c & 0x20) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389d84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d88);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d88,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e0) = iVar2;
  }
  if ((DAT_12389d5c & 0x40) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40;
    FUN_100f67b0(L"SonicTimeLower");
  }
  if (-1 < (char)DAT_12389d5c) {
    DAT_12389d5c = DAT_12389d5c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389d98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d9c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d9c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e4) = iVar2;
  }
  if ((DAT_12389d5c & 0x100) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x100;
    FUN_100f67b0(L"FalldownTol");
  }
  if ((DAT_12389d5c & 0x200) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389dac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389db0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389db0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e8) = iVar2;
  }
  if ((DAT_12389d5c & 0x400) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x400;
    FUN_100f67b0(L"FalldownWeakenScale");
  }
  if ((DAT_12389d5c & 0x800) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389dc0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dc4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dc4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2ec) = iVar2;
  }
  if ((DAT_12389d5c & 0x1000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x1000;
    FUN_100f67b0(L"FalldownTimeLower");
  }
  if ((DAT_12389d5c & 0x2000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389dd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dd8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dd8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f0) = iVar2;
  }
  if ((DAT_12389d5c & 0x4000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x4000;
    FUN_100f67b0(L"AnesthesiaCount");
  }
  if ((DAT_12389d5c & 0x8000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389de8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dec);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dec,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f4) = iVar2;
  }
  if ((DAT_12389d5c & 0x10000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10000;
    FUN_100f67b0(L"Anesthesia");
  }
  if ((DAT_12389d5c & 0x20000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389dfc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e00);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e00,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f8) = iVar2;
  }
  if ((DAT_12389d5c & 0x40000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40000;
    FUN_100f67b0(L"AnesthesiaWeakenScale");
  }
  if ((DAT_12389d5c & 0x80000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389e10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e14);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e14,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2fc) = iVar2;
  }
  if ((DAT_12389d5c & 0x100000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x100000;
    FUN_100f67b0(L"DynamiteTol");
  }
  if ((DAT_12389d5c & 0x200000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389e24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e28);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e28,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x300) = iVar2;
  }
  if ((DAT_12389d5c & 0x400000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x400000;
    FUN_100f67b0(L"Dynamite");
  }
  if ((DAT_12389d5c & 0x800000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389e38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e3c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e3c,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x304) = iVar2;
  }
  if ((DAT_12389d5c & 0x1000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x1000000;
    FUN_100f67b0(L"DynamiteAdd");
  }
  if ((DAT_12389d5c & 0x2000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389e4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e50);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e50,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x308) = iVar2;
  }
  if ((DAT_12389d5c & 0x4000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x4000000;
    FUN_100f67b0(L"DynamiteMax");
  }
  if ((DAT_12389d5c & 0x8000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389e60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e64);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e64,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x30c) = iVar2;
  }
  if ((DAT_12389d5c & 0x10000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10000000;
    FUN_100f67b0(L"DynamiteWeaken");
  }
  if ((DAT_12389d5c & 0x20000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389e74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e78);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e78,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x310) = iVar2;
  }
  if ((DAT_12389d5c & 0x40000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40000000;
    FUN_100f67b0(L"DynamiteBuff");
  }
  if (-1 < (int)DAT_12389d5c) {
    DAT_12389d5c = DAT_12389d5c | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389e88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e8c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e8c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x314) = iVar2;
  }
  if ((DAT_12389ea0 & 1) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 1;
    FUN_100f67b0(L"DynamiteDmg");
  }
  if ((DAT_12389ea0 & 2) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389e9c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ea4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ea4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x318) = iVar2;
  }
  if ((DAT_12389ea0 & 4) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 4;
    FUN_100f67b0(L"DynamiteCount");
  }
  if ((DAT_12389ea0 & 8) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389eb4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389eb8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x31c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389eb8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x31c) = iVar2;
  }
  if ((DAT_12389ea0 & 0x10) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 0x10;
    FUN_100f67b0(L"DynamiteWeakenScale");
  }
  if ((DAT_12389ea0 & 0x20) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389ec8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ecc);
  if (cVar1 != '\0') {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ecc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 800) = iVar2;
    FUN_11691370();
    return 1;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  FUN_11691370();
  return 1;
}

