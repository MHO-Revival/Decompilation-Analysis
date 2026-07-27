
/* [RE-AUTO c0]
   calls: memcpy */

void FUN_1188dfe0(int *param_1)

{
  short sVar1;
  char cVar2;
  void *pvVar3;
  short **ppsVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  size_t _Size;
  undefined1 local_80 [4];
  undefined4 local_7c;
  int *local_78;
  int local_74;
  short *local_70;
  short *local_6c;
  char local_65;
  int local_64;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined2 local_48 [8];
  undefined2 local_38 [8];
  undefined2 *local_28;
  undefined2 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_78 = param_1;
  FUN_1188e6e0();
  local_74 = (**(code **)(*param_1 + 0x1c))();
  iVar7 = 0;
  if (0 < local_74) {
    do {
      local_10 = local_20;
      local_20[0] = 0;
      local_c = local_10;
      local_70 = (short *)(**(code **)(*param_1 + 0x18))(iVar7);
      local_28 = local_48;
      psVar5 = local_70;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      local_6c = local_70 + ((int)psVar5 - (int)(local_70 + 1) >> 1);
      _Size = (int)local_6c - (int)local_70;
      uVar6 = ((int)_Size >> 1) + 1;
      local_24 = local_28;
      if (0x7ffffffe < (uint)((int)_Size >> 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_100e39a0();
      }
      if (0x10 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(uVar6 * 2);
      }
      if (local_6c != local_70) {
        pvVar3 = memcpy(local_28,local_70,_Size);
        local_28 = (undefined2 *)(_Size + (int)pvVar3);
      }
      *local_28 = 0;
      cVar2 = FUN_100ed090(local_48,local_20,3);
      local_65 = cVar2 == '\0';
      if ((local_24 != local_48) && (local_24 != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_24);
      }
      if (local_65 == '\0') {
        if (local_c != local_10) {
          local_70 = (short *)0x3;
          local_28 = local_38;
          local_6c = (short *)(local_10 + -(int)local_c);
          ppsVar4 = &local_6c;
          if ((short *)0x2 < local_10 + -(int)local_c) {
            ppsVar4 = &local_70;
          }
          local_24 = local_28;
          FUN_100b62c0(local_c,local_c + (int)*ppsVar4);
          local_65 = FUN_100fd0c0(local_38,&DAT_11d56db8);
          if ((local_24 != local_38) && (local_24 != (undefined2 *)0x0)) {
            FUN_10c3d5d0(local_24);
          }
          if (local_65 != '\0') {
            local_50 = local_60;
            local_60[0] = 0;
            local_64 = iVar7;
            local_4c = local_50;
            FUN_100d83d0(local_c,local_10);
            FUN_1188e7b0(local_80,local_7c,&local_64);
            if ((local_4c != local_60) && (local_4c != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_4c);
            }
            goto LAB_1188e0e8;
          }
        }
        if (local_c != local_20) goto joined_r0x1188e1d5;
      }
      else {
LAB_1188e0e8:
        if (local_c != local_20) {
joined_r0x1188e1d5:
          if (local_c != (undefined1 *)0x0) {
            FUN_10c3d5d0(local_c);
          }
        }
      }
      iVar7 = iVar7 + 1;
      param_1 = local_78;
    } while (iVar7 < local_74);
  }
  FUN_11a89daa();
  return;
}

