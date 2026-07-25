// FUN_11173b20 @ 11173b20
// ramp offsets referenced: [546, 550, 554]


/* WARNING: Removing unreachable block (ram,0x11173b70) */
/* [RE-AUTO c0]
   calls: memmove */

void FUN_11173b20(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  int local_14;
  int *local_10;
  uint local_8;
  
  piVar8 = param_1;
  if (*param_1 == 0) {
    local_10 = (int *)((int)param_1 + 0x22a);
    piVar6 = (int *)FUN_1116c620(local_10);
    if (*(int *)((int)piVar8 + 0x222) == 0 && *(int *)((int)piVar8 + 0x226) == 0) {
      if (*piVar6 != piVar6[1]) {
        piVar6[1] = *piVar6;
      }
      local_8 = 0;
      if ((short)piVar8[1] != 0) {
        puVar12 = (undefined4 *)((int)piVar8 + 6);
        do {
          puVar1 = (undefined4 *)piVar6[1];
          if (puVar1 == (undefined4 *)piVar6[2]) {
            FUN_11178c90(puVar1,puVar12,(int)&param_1 + 3,1,1);
          }
          else {
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            *puVar1 = *puVar12;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            uVar3 = puVar12[5];
            uVar4 = puVar12[6];
            uVar5 = puVar12[7];
            puVar1[4] = puVar12[4];
            puVar1[5] = uVar3;
            puVar1[6] = uVar4;
            puVar1[7] = uVar5;
            uVar3 = puVar12[9];
            uVar4 = puVar12[10];
            uVar5 = puVar12[0xb];
            puVar1[8] = puVar12[8];
            puVar1[9] = uVar3;
            puVar1[10] = uVar4;
            puVar1[0xb] = uVar5;
            puVar1[0xc] = puVar12[0xc];
            *(undefined2 *)(puVar1 + 0xd) = *(undefined2 *)(puVar12 + 0xd);
            piVar6[1] = piVar6[1] + 0x36;
          }
          local_8 = local_8 + 1;
          puVar12 = (undefined4 *)((int)puVar12 + 0x36);
        } while (local_8 < *(ushort *)(piVar8 + 1));
      }
      uVar11 = 0;
      iVar7 = piVar6[1] - *piVar6 >> 0x1f;
      if ((piVar6[1] - *piVar6) / 0x36 + iVar7 != iVar7) {
        iVar7 = 0;
        do {
          cVar2 = (char)uVar11;
          uVar11 = uVar11 + 1;
          *(char *)(iVar7 + 0x35 + *piVar6) = cVar2 + '\x01';
          iVar7 = iVar7 + 0x36;
        } while (uVar11 < (uint)((piVar6[1] - *piVar6) / 0x36));
      }
      local_14 = *local_10;
      iVar7 = GetClientMessageChannel();
      if (iVar7 != 0) {
        piVar8 = (int *)GetClientMessageChannel();
        (**(code **)(*piVar8 + 4))(0x2cf,&local_14);
        return;
      }
    }
    else if ((short)piVar8[1] != 0) {
      uVar11 = 0;
      iVar7 = piVar6[1] - *piVar6 >> 0x1f;
      iVar10 = (piVar6[1] - *piVar6) / 0x36 + iVar7;
      if (iVar10 != iVar7) {
        local_14 = *(int *)((int)piVar8 + 0x36);
        piVar9 = (int *)(*piVar6 + 0x2c);
        while ((*piVar9 != *(int *)((int)piVar8 + 0x32) || (piVar9[1] != local_14))) {
          uVar11 = uVar11 + 1;
          piVar9 = (int *)((int)piVar9 + 0x36);
          if ((uint)(iVar10 - iVar7) <= uVar11) {
            return;
          }
        }
        iVar7 = *piVar6;
        uVar3 = *(undefined4 *)((int)param_1 + 10);
        uVar4 = *(undefined4 *)((int)param_1 + 0xe);
        uVar5 = *(undefined4 *)((int)param_1 + 0x12);
        iVar10 = uVar11 * 0x36;
        puVar12 = (undefined4 *)(iVar10 + iVar7);
        *puVar12 = *(undefined4 *)((int)param_1 + 6);
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        uVar3 = *(undefined4 *)((int)param_1 + 0x1a);
        uVar4 = *(undefined4 *)((int)param_1 + 0x1e);
        uVar5 = *(undefined4 *)((int)param_1 + 0x22);
        puVar12 = (undefined4 *)(iVar10 + 0x10 + iVar7);
        *puVar12 = *(undefined4 *)((int)param_1 + 0x16);
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        uVar3 = *(undefined4 *)((int)param_1 + 0x2a);
        uVar4 = *(undefined4 *)((int)param_1 + 0x2e);
        uVar5 = *(undefined4 *)((int)param_1 + 0x32);
        puVar12 = (undefined4 *)(iVar10 + 0x20 + iVar7);
        *puVar12 = *(undefined4 *)((int)param_1 + 0x26);
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        *(undefined4 *)(iVar10 + 0x30 + iVar7) = *(undefined4 *)((int)param_1 + 0x36);
        *(undefined2 *)(iVar10 + 0x34 + iVar7) = *(undefined2 *)((int)param_1 + 0x3a);
        puVar12 = (undefined4 *)(*piVar6 + iVar10);
        if (puVar12 != (undefined4 *)0x0) {
          FUN_100e5570();
          local_30 = puVar12[1];
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_1c = 0;
          CPet__SetName(puVar12 + 3);
          local_28 = *puVar12;
          local_24 = *(undefined8 *)(puVar12 + 0xb);
          iVar7 = GetClientMessageChannel();
          if (iVar7 != 0) {
            piVar8 = (int *)GetClientMessageChannel();
            (**(code **)(*piVar8 + 4))(0x2cc,local_34);
          }
          FUN_100e5670();
        }
      }
    }
  }
  return;
}

