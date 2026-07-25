// FUN_10e22420 @ 10e22420  (2460 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 4, 5, 7, 12, 13, 15, 16, 17, 19, 20, 22, 24, 25, 26, 27, 28]


/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""mh_sharemem_addrinfo"" */

undefined4 __thiscall FUN_10e22420(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char cVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  char *local_10;
  size_t local_c;
  int *local_8;
  
  iVar1 = param_2;
  local_8 = param_1;
  if ((*(int *)(*(uint *)(*(int *)(param_2 + 0x10) + 8) & 0xfffffffc) == 6) &&
     (puVar10 = (undefined1 *)(*(int *)(param_2 + 0x10) + 0xc), puVar10 != (undefined1 *)0x0)) {
    uVar2 = *puVar10;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = (int *)0x40;
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))(&local_28);
    uVar2 = 0;
  }
  puVar10 = (undefined1 *)param_3;
  *(undefined1 *)param_3 = uVar2;
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x10) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x14);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)((int)param_3 + 4) = *puVar3;
  if ((*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x18) & 0xfffffffc) == 6) &&
     (puVar7 = (undefined1 *)(*(int *)(iVar1 + 0x10) + 0x1c), puVar7 != (undefined1 *)0x0)) {
    uVar2 = *puVar7;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = (int *)0x40;
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))(&local_28);
    uVar2 = 0;
  }
  puVar10[8] = uVar2;
  if ((*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x20) & 0xfffffffc) == 6) &&
     (puVar7 = (undefined1 *)(*(int *)(iVar1 + 0x10) + 0x24), puVar7 != (undefined1 *)0x0)) {
    uVar2 = *puVar7;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = (int *)0x40;
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))(&local_28);
    uVar2 = 0;
  }
  puVar10[9] = uVar2;
  if ((*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0xb8) & 0xfffffffc) == 6) &&
     (pcVar8 = (char *)(*(int *)(iVar1 + 0x10) + 0xbc), pcVar8 != (char *)0x0)) {
    cVar9 = *pcVar8;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = (int *)0x40;
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))(&local_28);
    cVar9 = '\0';
  }
  param_3 = (uint *)(puVar10 + 0x50);
  *(undefined4 *)(puVar10 + 0x54) = 1;
  *param_3 = 1;
  *(undefined4 *)(puVar10 + 0x58) = 1;
  *(undefined4 *)(puVar10 + 0x5c) = 1;
  *(undefined4 *)(puVar10 + 0x60) = 1;
  *(undefined4 *)(puVar10 + 100) = 1;
  *(undefined4 *)(puVar10 + 0x68) = 1;
  *(undefined4 *)(puVar10 + 0x6c) = 1;
  param_2 = CONCAT13(cVar9,(undefined3)param_2);
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x30) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x34);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0xc) = *puVar3;
  if (cVar9 == '\0') {
    puVar3 = (undefined4 *)FUN_10b9be90(iVar1,5);
    CPet__SetName(*puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_10b9be90(iVar1,5);
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x40) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x44);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x14) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,7);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x50) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x54);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x1c) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,9);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x60) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 100);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x24) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,0xb);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x70) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x74);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x2c) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,0xd);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x80) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x84);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x34) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,0xf);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    pcVar8 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      pcVar8 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *pcVar8;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = pcVar8[iVar4];
    }
    local_10 = pcVar8 + iVar4;
    local_c = (int)local_10 - (int)pcVar8;
    uVar13 = local_c + 1;
    if (uVar13 == 0) goto LAB_10e22e84;
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_10 != pcVar8) {
      pvVar5 = memcpy(local_1c,pcVar8,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0x90) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0x94);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x3c) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,0x11);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    local_10 = "";
    if ((char *)*puVar3 != (char *)0x0) {
      local_10 = (char *)*puVar3;
    }
    local_1c = (int *)local_2c;
    iVar4 = 0;
    cVar9 = *local_10;
    while (cVar9 != '\0') {
      iVar4 = iVar4 + 1;
      cVar9 = local_10[iVar4];
    }
    local_14 = local_10 + iVar4;
    local_c = (int)local_14 - (int)local_10;
    uVar13 = local_c + 1;
    if (uVar13 == 0) {
LAB_10e22e84:
      local_1c = (int *)local_2c;
      local_18 = local_1c;
                    /* WARNING: Subroutine does not return */
      FUN_100e6bb0();
    }
    local_18 = local_1c;
    if (0x10 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(uVar13);
    }
    if (local_14 != local_10) {
      pvVar5 = memcpy(local_1c,local_10,local_c);
      local_1c = (int *)((int)pvVar5 + local_c);
    }
    *(undefined1 *)local_1c = 0;
    FUN_100e5c40(local_2c);
    if ((local_18 != (int *)local_2c) && (local_18 != (int *)0x0)) {
      FUN_10c3d5d0(local_18);
    }
  }
  if (*(int *)(*(uint *)(*(int *)(iVar1 + 0x10) + 0xa0) & 0xfffffffc) == 1) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 0xa4);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar10 + 0x44) = *puVar3;
  puVar3 = (undefined4 *)FUN_10b9be90(iVar1,0x13);
  if (param_2._3_1_ == '\0') {
    CPet__SetName(*puVar3);
  }
  else {
    FUN_10e21870();
  }
  uVar2 = FUN_10b9be30(iVar1,0x15);
  puVar10[0x4c] = uVar2;
  uVar2 = FUN_10b9be30(iVar1,0x16);
  puVar10[0x4d] = uVar2;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (char *)0x18;
  FUN_10463c40(0,&local_14,(int)&param_2 + 3,1,1);
  local_14 = (char *)0x19;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x19;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1a;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x1a;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1b;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x1b;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1c;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x1c;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1d;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x1d;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1e;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
  }
  else {
    *local_1c = 0x1e;
    local_1c = local_1c + 1;
  }
  local_14 = (char *)0x1f;
  if (local_1c == local_18) {
    FUN_10463c40(local_1c,&local_14,(int)&param_2 + 3,1,1);
    piVar11 = local_1c;
  }
  else {
    *local_1c = 0x1f;
    piVar11 = local_1c + 1;
  }
  uVar13 = 0;
  for (piVar12 = local_20; piVar12 != piVar11; piVar12 = piVar12 + 1) {
    puVar6 = (uint *)(*(int *)(iVar1 + 0x10) + *piVar12 * 8);
    if (((*puVar6 >> 1 & 1) != 0) && (uVar13 < 8)) {
      if (*(int *)(*puVar6 & 0xfffffffc) == 1) {
        puVar6 = puVar6 + 1;
      }
      else {
        puVar6 = (uint *)0x0;
      }
      *param_3 = *puVar6;
    }
    param_3 = param_3 + 1;
    uVar13 = uVar13 + 1;
  }
  if (local_20 != (int *)0x0) {
    FUN_10c3d5d0(local_20);
  }
  return 1;
}

