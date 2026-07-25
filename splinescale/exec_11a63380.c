// FUN_11a63380 @ 11a63380  (3198 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 4, 16, 20, 22, 23, 24, 25, 26, 27, 28]


/* [RE-AUTO c0]
   calls: memset */

void __thiscall FUN_11a63380(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123ac284 & 1) == 0) {
    DAT_123ac284 = DAT_123ac284 | 1;
    FUN_100f67b0(&DAT_11d725f4);
  }
  if ((DAT_123ac284 & 2) == 0) {
    DAT_123ac284 = DAT_123ac284 | 2;
    iVar2 = FUN_100e1cb0(DAT_123ac280);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac288);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac280);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ac288);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123ac284 & 4) == 0) {
    DAT_123ac284 = DAT_123ac284 | 4;
    FUN_100f67b0(&DAT_11d65e4c);
  }
  if ((DAT_123ac284 & 8) == 0) {
    DAT_123ac284 = DAT_123ac284 | 8;
    iVar2 = FUN_100e1cb0(DAT_123ac298);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac29c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac298);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac29c);
    *(bool *)(param_1 + 0x14) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x10) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x10;
    FUN_100f67b0(&DAT_11d72600);
  }
  if ((DAT_123ac284 & 0x20) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123ac2ac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac2b0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac2ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac2b0);
    *(bool *)(param_1 + 0x15) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x40) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x40;
    FUN_100f67b0(&DAT_11d72610);
  }
  if (-1 < (char)DAT_123ac284) {
    DAT_123ac284 = DAT_123ac284 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123ac2c0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac2c4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac2c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac2c4);
    *(bool *)(param_1 + 0x16) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x100) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x100;
    FUN_100f67b0(&DAT_11d72620);
  }
  if ((DAT_123ac284 & 0x200) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123ac2d4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac2d8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac2d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac2d8);
    *(bool *)(param_1 + 0x17) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x400) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x400;
    FUN_100f67b0(&DAT_11d72630);
  }
  if ((DAT_123ac284 & 0x800) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123ac2e8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac2ec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac2e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac2ec);
    *(bool *)(param_1 + 0x18) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x1000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x1000;
    FUN_100f67b0(&DAT_11d7263c);
  }
  if ((DAT_123ac284 & 0x2000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123ac2fc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac300);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac2fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac300);
    *(bool *)(param_1 + 0x19) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x4000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x4000;
    FUN_100f67b0(&DAT_11d7264c);
  }
  if ((DAT_123ac284 & 0x8000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123ac310);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac314);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac310);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac314);
    *(bool *)(param_1 + 0x1a) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x10000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x10000;
    FUN_100f67b0(&DAT_11d7265c);
  }
  if ((DAT_123ac284 & 0x20000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123ac324);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac328);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac324);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac328);
    *(bool *)(param_1 + 0x1b) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x40000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x40000;
    FUN_100f67b0(&DAT_11d7266c);
  }
  if ((DAT_123ac284 & 0x80000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123ac338);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac33c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac338);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac33c);
    *(bool *)(param_1 + 0x1c) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x100000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x100000;
    FUN_100f67b0(&DAT_11d72678);
  }
  if ((DAT_123ac284 & 0x200000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123ac34c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac350);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac34c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac350);
    *(bool *)(param_1 + 0x1d) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x400000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x400000;
    FUN_100f67b0(&DAT_11d72688);
  }
  if ((DAT_123ac284 & 0x800000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123ac360);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac364);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac360);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac364);
    *(bool *)(param_1 + 0x1e) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x1000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x1000000;
    FUN_100f67b0(&DAT_11d72698);
  }
  if ((DAT_123ac284 & 0x2000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123ac374);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac378);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac374);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac378);
    *(bool *)(param_1 + 0x1f) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x4000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x4000000;
    FUN_100f67b0(&DAT_11d726a8);
  }
  if ((DAT_123ac284 & 0x8000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123ac388);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac38c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac388);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac38c);
    *(bool *)(param_1 + 0x20) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x10000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x10000000;
    FUN_100f67b0(&DAT_11d726c0);
  }
  if ((DAT_123ac284 & 0x20000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123ac39c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac3a0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac39c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac3a0);
    *(bool *)(param_1 + 0x21) = iVar2 != 0;
  }
  if ((DAT_123ac284 & 0x40000000) == 0) {
    DAT_123ac284 = DAT_123ac284 | 0x40000000;
    FUN_100f67b0(&DAT_11d726cc);
  }
  if (-1 < (int)DAT_123ac284) {
    DAT_123ac284 = DAT_123ac284 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123ac3b0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ac3b4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ac3b0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123ac3b4);
  *(bool *)(param_1 + 0x22) = iVar2 != 0;
  FUN_11a89daa();
  return;
}

