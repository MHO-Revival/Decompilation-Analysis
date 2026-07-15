// ===== class CItemBaseInfo  (41 recovered methods) =====

/* --- CItemBaseInfo::GetManagers @ 10254050 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CItemBaseInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    _DAT_123bdbb4 = &DAT_123bdba4;
    DAT_123bdbb8 = &DAT_123bdba4;
    DAT_123bdba4 = 0;
    FUN_100d83d0("CItemBaseInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6e610);
  }
  return DAT_123bdba0;
}



/* --- CItemBaseInfo::GetManagers_10b5c170 @ 10b5c170 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: memcpy, memset, _strtoui64
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""HornNumDialogCancel""
//   ""HornNumDialogOK""

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: memcpy, memset, _strtoui64
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""HornNumDialogCancel""
     ""HornNumDialogOK"" */

void CItemBaseInfo__GetManagers_10b5c170(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  short *psVar12;
  void *pvVar13;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  char *pcVar16;
  uint uVar17;
  size_t _Size;
  undefined1 local_4bc;
  undefined1 local_4bb [1027];
  char local_b8 [16];
  char *local_a8;
  char *local_a4;
  char local_a0 [16];
  char *local_90;
  char *local_8c;
  char local_88 [16];
  char *local_78;
  char *local_74;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined1 *local_5c;
  uint local_58;
  undefined1 local_54 [16];
  short *local_44;
  short *local_40;
  short *local_3c;
  undefined1 *local_38 [2];
  undefined1 local_30 [4];
  short *local_2c;
  undefined1 **local_28;
  undefined1 **local_24;
  short *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined **local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  char local_5;
  
  local_3c = (short *)0x0;
  local_10 = (undefined1 *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (local_10 == (undefined1 *)0x0) {
    return;
  }
  if (param_3 < 2) {
    return;
  }
  local_70[0] = 0;
  local_c = *(undefined1 **)(param_2 + 8);
  local_60 = local_70;
  pcVar3 = *(char **)(param_2 + 0x18);
  do {
    pcVar16 = pcVar3;
    pcVar3 = pcVar16 + 1;
  } while (*pcVar16 != '\0');
  local_5c = local_60;
  FUN_100d83d0(*(char **)(param_2 + 0x18),pcVar16);
  local_58 = 0xffffffff;
  local_3c = (short *)0xffffffff;
  local_2c = (short *)0x1;
  local_28 = (undefined1 **)0x2;
  local_24 = (undefined1 **)&DAT_0000000a;
  local_14 = (undefined **)0x0;
  do {
    psVar12 = (&local_2c)[(int)local_14];
    uVar5 = FUN_113f92a0(psVar12);
    uVar17 = 0;
    if (uVar5 != 0) {
      do {
        iVar6 = FUN_113f9bb0(psVar12,uVar17);
        if (iVar6 != 0) {
          piVar7 = (int *)FUN_11669250();
          puVar8 = (undefined1 *)(**(code **)(*piVar7 + 0x18))();
          if (puVar8 == local_c) {
            local_3c = (&local_2c)[(int)local_14];
            local_58 = uVar17;
            goto LAB_10b5c3d2;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar5);
    }
    local_14 = (undefined **)((int)local_14 + 1);
  } while (local_14 < (undefined **)0x3);
  local_44 = (short *)local_54;
  local_54[0] = 0;
  local_14 = &PTR_FUN_11da5518;
  local_40 = local_44;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar9 = (undefined4 *)*DAT_123bdba0;
  if ((puVar9 == (undefined4 *)0x0) &&
     (puVar9 = (undefined4 *)FUN_11679e10(&local_14,"CItemBaseInfo",0), puVar9 == (undefined4 *)0x0)
     ) {
    if ((DAT_123bdc00 & 1) == 0) {
      DAT_123bdc00 = DAT_123bdc00 | 1;
      FUN_102555a0();
      FUN_11a8911f(&LAB_11c82ba0);
    }
    puVar9 = &DAT_123bdbc0;
  }
  local_14 = &PTR_FUN_11da54a8;
  if ((local_c == (undefined1 *)0xffffffff) ||
     ((((local_c == (undefined1 *)0x0 && (puVar9[0xc] != 0)) || (iVar6 = puVar9[10], iVar6 == 0)) ||
      ((iVar10 = (int)local_c - puVar9[0xc], iVar10 < 0 || ((int)puVar9[9] <= iVar10)))))) {
LAB_10b5c3be:
    if ((local_40 != (short *)local_54) && (local_40 != (short *)0x0)) {
      FUN_10c3d5d0(local_40);
    }
LAB_10b5c3d2:
    puVar8 = local_5c;
    local_28 = local_38;
    local_10 = (undefined1 *)0x2;
    local_c = local_60 + -(int)local_5c;
    local_24 = local_28;
    ppuVar14 = &local_c;
    if ((undefined1 *)0x1 < local_60 + -(int)local_5c) {
      ppuVar14 = &local_10;
    }
    bVar2 = false;
    local_10 = local_5c + (int)*ppuVar14;
    _Size = (int)local_10 - (int)local_5c;
    local_c = (undefined1 *)(_Size + 1);
    if (local_c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100b73e0();
    }
    if ((undefined1 *)0x10 < local_c) {
      local_28 = (undefined1 **)FUN_100b6d60(local_c,&local_c);
      local_38[0] = local_c + (int)local_28;
      local_24 = local_28;
    }
    local_24 = local_28;
    if (local_10 != puVar8) {
      pvVar13 = memcpy(local_28,puVar8,_Size);
      local_28 = (undefined1 **)(_Size + (int)pvVar13);
    }
    *(undefined1 *)local_28 = 0;
    if (((int)local_28 - (int)local_24 == 2) && (*(short *)local_24 == 0x6d67)) {
LAB_10b5c4ca:
      local_5 = '\x01';
    }
    else {
      local_44 = (short *)local_54;
      local_c = local_60 + -(int)local_5c;
      ppuVar14 = &local_c;
      if ((undefined1 *)0x1 < local_60 + -(int)local_5c) {
        ppuVar14 = &local_10;
      }
      local_10 = (undefined1 *)0x2;
      bVar2 = true;
      local_40 = local_44;
      FUN_100b62c0(local_5c,local_5c + (int)*ppuVar14);
      cVar4 = FUN_100fd0c0(local_54,&DAT_11cc7a90);
      local_5 = '\0';
      if (cVar4 != '\0') goto LAB_10b5c4ca;
    }
    if (((bVar2) && (local_40 != (short *)local_54)) && (local_40 != (short *)0x0)) {
      FUN_10c3d5d0(local_40);
    }
    if ((local_24 != local_38) && (local_24 != (undefined1 **)0x0)) {
      FUN_10c3d5d0(local_24);
    }
    if (local_5 != '\0') {
      memset(local_4bb,0,0x400);
      local_4bc = 0;
      FUN_100ebf60(local_4bb,0x400,local_5c + 2);
      iVar6 = FUN_10d17440();
      if (iVar6 != 0) {
        piVar7 = (int *)FUN_10d17440();
        iVar6 = (**(code **)(*piVar7 + 0xc))();
        if (iVar6 != 0) {
          piVar7 = (int *)FUN_10d17440();
          piVar7 = (int *)(**(code **)(*piVar7 + 0xc))();
          (**(code **)(*piVar7 + 4))(2,&local_4bc);
        }
      }
      goto LAB_10b5c57d;
    }
    local_90 = local_a0;
    local_20 = (short *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_a0[0] = '\0';
    pcVar3 = *(char **)(param_2 + 0x28);
    do {
      pcVar16 = pcVar3;
      pcVar3 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
    local_8c = local_90;
    FUN_100d83d0(*(char **)(param_2 + 0x28),pcVar16);
    local_a8 = local_b8;
    local_b8[0] = '\0';
    pcVar3 = *(char **)(param_2 + 0x38);
    do {
      pcVar16 = pcVar3;
      pcVar3 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
    local_a4 = local_a8;
    FUN_100d83d0(*(char **)(param_2 + 0x38),pcVar16);
    local_78 = local_88;
    local_88[0] = '\0';
    pcVar3 = *(char **)(param_2 + 0x48);
    do {
      pcVar16 = pcVar3;
      pcVar3 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
    local_74 = local_78;
    FUN_100d83d0(*(char **)(param_2 + 0x48),pcVar16);
    if (1 < (uint)((int)local_90 - (int)local_8c)) {
      _strtoui64(local_8c,(char **)0x0,10);
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    if (1 < (uint)((int)local_a8 - (int)local_a4)) {
      _strtoui64(local_a4,(char **)0x0,10);
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    if (1 < (uint)((int)local_78 - (int)local_74)) {
      _strtoui64(local_74,(char **)0x0,10);
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    iVar6 = FUN_10d17460();
    if ((iVar6 != 0) && (iVar6 = FUN_10d17460(), *(int *)(iVar6 + 0x94) != 0)) {
      iVar6 = FUN_10d17460();
      if (iVar6 != 0) {
        FUN_10d17460();
      }
      FUN_1115e110(local_3c,local_58,local_70,&local_20);
    }
    if ((local_74 != local_88) && (local_74 != (char *)0x0)) {
      FUN_10c3d5d0(local_74);
    }
    if ((local_a4 != local_b8) && (local_a4 != (char *)0x0)) {
      FUN_10c3d5d0(local_a4);
    }
    psVar12 = local_20;
    if ((local_8c != local_a0) && (local_8c != (char *)0x0)) {
      FUN_10c3d5d0(local_8c);
      psVar12 = local_20;
    }
  }
  else {
    iVar1 = *(int *)(puVar9[8] + (iVar10 / iVar6) * 4);
    if ((iVar1 == 0) || (iVar6 = *(int *)(iVar1 + (iVar10 % iVar6) * 4), iVar6 == 0))
    goto LAB_10b5c3be;
    FUN_1112d520();
    puVar8 = *(undefined1 **)(iVar6 + 0x14);
    puVar15 = &DAT_11d9d32b;
    if (puVar8 != (undefined1 *)0x0) {
      puVar15 = puVar8;
    }
    uVar11 = FUN_1024e9b0(puVar15,0x2a);
    FUN_1112d7d0(0x2029,"HornNumDialogOK","HornNumDialogCancel",local_30,uVar11);
    FUN_1112d550();
    psVar12 = local_40;
    if (local_40 == (short *)local_54) goto LAB_10b5c57d;
  }
  if (psVar12 != (short *)0x0) {
    FUN_10c3d5d0(psVar12);
  }
LAB_10b5c57d:
  if ((local_5c != local_70) && (local_5c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_5c);
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_10d68040 @ 10d68040 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: memcpy, memmove, puts, exit
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""out of memory\n""

/* WARNING: Removing unreachable block (ram,0x10d683d6) */
/* WARNING: Removing unreachable block (ram,0x10d683fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: memcpy, memmove, puts, exit
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""out of memory\n"" */

void CItemBaseInfo__GetManagers_10d68040(void)

{
  int iVar1;
  size_t **ppsVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  size_t *psVar10;
  uint uVar11;
  void *pvVar12;
  undefined **_Size;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  int iVar16;
  char *pcVar17;
  size_t sVar18;
  size_t *psVar19;
  bool bVar20;
  size_t *psStack_218;
  size_t *psStack_214;
  undefined1 local_194 [24];
  undefined1 local_17c [24];
  undefined1 local_164 [96];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined1 *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int *local_c4;
  undefined1 local_c0 [16];
  int *local_b0;
  int *local_ac;
  size_t local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  int local_60;
  undefined1 local_5c;
  size_t *local_58;
  size_t *local_54;
  size_t *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_30;
  undefined1 local_2f [2];
  undefined1 local_2d;
  undefined **local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  size_t local_18;
  undefined1 local_11;
  int *local_10;
  char *local_c;
  int *local_8;
  
  iVar4 = FUN_10d17440();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_10d17440();
  if (*(int *)(iVar4 + 4) == 0) {
    return;
  }
  iVar4 = FUN_10d17440();
  piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 4) + 0x28))();
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar5 + 4))();
  if (iVar4 == 0) {
    return;
  }
  local_1c = iVar4;
  piVar5 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (piVar5 == (int *)0x0) {
    return;
  }
  local_20 = piVar5;
  FUN_10520070();
  if ((undefined1 *)(iVar4 + 0x3c) != local_194) {
    FUN_100d83d0();
  }
  if ((undefined1 *)(iVar4 + 0x54) != local_17c) {
    FUN_100d83d0();
  }
  if ((undefined1 *)(iVar4 + 0x6c) != local_164) {
    FUN_100d83d0();
  }
  iVar16 = iVar4 + 0xa0;
  iVar4 = *(int *)(iVar4 + 0xa8);
  while (iVar4 != iVar16) {
    local_8 = (int *)(iVar4 + 0x14);
    iVar6 = FUN_10c36df0();
    if (local_8 != (int *)iVar6) {
      FUN_100d83d0();
    }
    iVar6 = *(int *)(iVar4 + 0xc);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(iVar6 + 0xc)) {
        do {
          iVar4 = iVar6;
          iVar6 = *(int *)(iVar4 + 4);
        } while (iVar4 == *(int *)(iVar6 + 0xc));
      }
      if (*(int *)(iVar4 + 0xc) != iVar6) {
        iVar4 = iVar6;
      }
    }
    else {
      for (iVar1 = *(int *)(iVar6 + 8); iVar4 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        iVar6 = iVar1;
      }
    }
  }
  local_8 = (int *)(**(code **)(*(int *)piVar5[3] + 0x1b8))();
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x150))();
  }
  CAvatarInfo__GetManagers_10f02190();
  iVar6 = local_1c;
  iVar4 = *(int *)(local_1c + 0x24);
  bVar20 = iVar4 == *(int *)(local_28 + 0xd80);
  if (bVar20) {
    FUN_10efe510();
    FUN_10f171a0();
  }
  else {
    *(int *)(local_28 + 0xd80) = iVar4;
    FUN_10efe510();
    FUN_10f171a0();
  }
  if (*(int *)(iVar6 + 0x24) != 0) {
    FUN_10f1dee0();
  }
  *(undefined4 *)(local_28 + 0xd9c) = *(undefined4 *)(iVar6 + 0xd4);
  FUN_104f6c30();
  *(undefined4 *)(local_28 + 0xda0) = *(undefined4 *)(iVar6 + 0xb8);
  *(undefined4 *)(local_28 + 0xda4) = *(undefined4 *)(iVar6 + 200);
  iVar4 = 0x17;
  *(undefined4 *)(local_28 + 0xda8) = *(undefined4 *)(iVar6 + 0xcc);
  puVar8 = (undefined4 *)(local_28 + 0xdb0);
  puVar15 = (undefined4 *)(iVar6 + 0xe4);
  do {
    puVar8[-1] = puVar15[-1];
    *puVar8 = *puVar15;
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + 2;
    puVar15 = puVar15 + 2;
  } while (iVar4 != 0);
  local_11 = 0;
  piVar7 = (int *)(**(code **)(*(int *)piVar5[3] + 0x1b8))();
  uVar14 = local_11;
  if (local_8 != piVar7) {
    uVar14 = 1;
  }
  local_8 = (int *)CONCAT31(local_8._1_3_,uVar14);
  FUN_10efcf50();
  iVar6 = local_1c;
  puStack_68 = &local_70;
  local_70 = 0;
  local_5c = local_11;
  local_7c = *(undefined4 *)(local_1c + 200);
  local_78 = *(undefined4 *)(local_1c + 0xcc);
  uStack_88 = *(undefined4 *)(local_1c + 0xbc);
  uStack_84 = *(undefined4 *)(local_1c + 0xc0);
  local_8c = *(undefined4 *)(local_1c + 0xb8);
  local_74 = *(undefined4 *)(local_1c + 0xd0);
  uStack_80 = *(undefined4 *)(local_1c + 0xc4);
  iStack_6c = iVar4;
  puStack_64 = puStack_68;
  local_60 = iVar4;
  FUN_10f1e2a0();
  FUN_10f1e540();
  FUN_10f02dc0();
  iVar4 = *(int *)(iVar6 + 0xa8);
  if (iVar4 != iVar16) {
    local_104 = 0xffffffff;
    local_f8 = 0xffffffff;
    do {
      local_b0 = (int *)local_c0;
      local_32 = 0;
      local_33 = 0;
      local_10 = local_b0;
      local_ac = local_b0;
      local_c0[0] = 0;
      if ((int *)(iVar4 + 0x14) != local_b0) {
        local_c = *(char **)(iVar4 + 0x24);
        local_8 = (int *)(*(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x28));
        if (local_8 == (int *)0x0) {
          local_32 = 0;
          local_33 = 0;
          local_c0[0] = 0;
          local_8 = local_b0;
        }
        else {
          FUN_100d9260();
          local_10 = local_ac;
        }
      }
      local_c = *(char **)(iVar4 + 0x2c);
      local_a8 = (size_t)local_c;
      local_a4 = *(undefined4 *)(iVar4 + 0x30);
      local_a0 = *(undefined4 *)(iVar4 + 0x34);
      local_9c = *(undefined4 *)(iVar4 + 0x38);
      local_98 = *(undefined4 *)(iVar4 + 0x3c);
      local_94 = *(int *)(iVar4 + 0x40);
      local_90 = *(int *)(iVar4 + 0x44);
      if (local_c == (char *)0x1) {
        piVar5 = local_10;
        if (local_10 != (int *)0x0) {
          do {
            iVar6 = *piVar5;
            piVar5 = (int *)((int)piVar5 + 1);
          } while ((char)iVar6 != '\0');
        }
        local_ac = local_10;
        FUN_1083ab70();
        local_c = (char *)local_a8;
        local_10 = local_ac;
      }
      piVar5 = local_20;
      local_ac = local_10;
      local_a8 = (size_t)local_c;
      if (local_b0 == local_10) {
        (**(code **)(*local_20 + 0x578))();
      }
      else if ((local_94 == -1) && (local_90 == -1)) {
        iVar6 = *local_20;
        FUN_104f6c30();
        FUN_104f6c30();
        (**(code **)(iVar6 + 0x32c))();
        piVar5 = local_20;
      }
      else {
        local_e0 = local_f0;
        local_8 = (int *)&stack0xfffffe14;
        local_f0[0] = 0;
        local_fc = 0xffffffff;
        local_100 = 0xffffffff;
        local_2d = 0;
        local_30 = 0;
        local_dc = local_e0;
        local_d8 = local_94;
        local_d4 = local_90;
        pcVar17 = local_c;
        piVar5 = (int *)&stack0xfffffe14;
        if (local_10 != (int *)0x0) {
          piVar5 = local_10;
          do {
            iVar6 = *piVar5;
            piVar5 = (int *)((int)piVar5 + 1);
          } while ((char)iVar6 != '\0');
          pcVar17 = (char *)((int)piVar5 - (int)((int)local_10 + 1));
          piVar5 = (int *)&stack0xfffffe14;
          if (pcVar17 != (char *)0x0) {
            local_c = pcVar17;
            puVar8 = (undefined4 *)FUN_10c3d780();
            piVar7 = local_8;
            DAT_123be268 = DAT_123be268 + (int)pcVar17 + 0xdU;
            *puVar8 = 1;
            *local_8 = (int)(puVar8 + 3);
            puVar8[1] = local_c;
            puVar8[2] = local_c;
            *(undefined1 *)((int)local_c + *piVar7) = 0;
            piVar7 = (int *)*piVar7;
            pcVar17 = local_c;
            piVar5 = local_8;
            if (piVar7 != local_10) {
              memcpy(piVar7,local_10,(size_t)local_c);
              pcVar17 = local_c;
              piVar5 = local_8;
            }
          }
        }
        local_8 = piVar5;
        local_c = pcVar17;
        piVar5 = local_20;
        (**(code **)(*local_20 + 0x32c))();
        if ((local_dc != local_f0) && (local_dc != (undefined1 *)0x0)) {
          FUN_10c3d5d0();
        }
      }
      if ((local_ac != (int *)local_c0) && (local_ac != (int *)0x0)) {
        FUN_10c3d5d0();
      }
      iVar6 = *(int *)(iVar4 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar4 = iVar6;
            iVar6 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar6) {
          iVar4 = iVar6;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar6 + 8); iVar4 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar6 = iVar1;
        }
      }
    } while (iVar4 != iVar16);
  }
  local_8 = (int *)&stack0xfffffe14;
  local_c = *(char **)(local_1c + 0x50);
  piVar7 = (int *)&stack0xfffffe14;
  if (local_c != (char *)0x0) {
    pcVar17 = local_c;
    do {
      cVar3 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar3 != '\0');
    sVar18 = (int)pcVar17 - (int)(local_c + 1);
    piVar7 = (int *)&stack0xfffffe14;
    if (sVar18 != 0) {
      puVar8 = (undefined4 *)FUN_10c3d780();
      piVar7 = local_8;
      DAT_123be268 = DAT_123be268 + sVar18 + 0xd;
      *puVar8 = 1;
      *local_8 = (int)(puVar8 + 3);
      puVar8[1] = sVar18;
      puVar8[2] = sVar18;
      *(undefined1 *)(sVar18 + *piVar7) = 0;
      pcVar17 = (char *)*piVar7;
      piVar7 = local_8;
      if (pcVar17 != local_c) {
        memcpy(pcVar17,local_c,sVar18);
        piVar7 = local_8;
      }
    }
  }
  local_8 = piVar7;
  iVar4 = local_1c;
  (**(code **)(*piVar5 + 0x32c))();
  local_c4 = (int *)(local_24 + -0xc);
  if (-1 < *local_c4) {
    FUN_10c3dab0();
  }
  local_c = *(char **)(iVar4 + 0x68);
  local_8 = (int *)&stack0xfffffe08;
  piVar7 = (int *)&stack0xfffffe08;
  if (local_c != (char *)0x0) {
    pcVar17 = local_c;
    do {
      cVar3 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar3 != '\0');
    sVar18 = (int)pcVar17 - (int)(local_c + 1);
    piVar7 = (int *)&stack0xfffffe08;
    if (sVar18 != 0) {
      puVar8 = (undefined4 *)FUN_10c3d780();
      piVar7 = local_8;
      DAT_123be268 = DAT_123be268 + sVar18 + 0xd;
      *puVar8 = 1;
      *local_8 = (int)(puVar8 + 3);
      puVar8[1] = sVar18;
      puVar8[2] = sVar18;
      *(undefined1 *)(sVar18 + *piVar7) = 0;
      pcVar17 = (char *)*piVar7;
      iVar4 = local_1c;
      piVar7 = local_8;
      if (pcVar17 != local_c) {
        memcpy(pcVar17,local_c,sVar18);
        iVar4 = local_1c;
        piVar7 = local_8;
      }
    }
  }
  local_8 = piVar7;
  (**(code **)(*piVar5 + 0x32c))();
  local_8 = (int *)&stack0xfffffdfc;
  local_c = *(char **)(iVar4 + 0x80);
  piVar7 = (int *)&stack0xfffffdfc;
  if (local_c != (char *)0x0) {
    pcVar17 = local_c;
    do {
      cVar3 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar3 != '\0');
    sVar18 = (int)pcVar17 - (int)(local_c + 1);
    piVar7 = (int *)&stack0xfffffdfc;
    if (sVar18 != 0) {
      puVar8 = (undefined4 *)FUN_10c3d780();
      piVar7 = local_8;
      DAT_123be268 = DAT_123be268 + sVar18 + 0xd;
      *puVar8 = 1;
      *local_8 = (int)(puVar8 + 3);
      puVar8[1] = sVar18;
      puVar8[2] = sVar18;
      *(undefined1 *)(sVar18 + *piVar7) = 0;
      pcVar17 = (char *)*piVar7;
      iVar4 = local_1c;
      piVar7 = local_8;
      if (pcVar17 != local_c) {
        psStack_214 = (size_t *)0x10d687fe;
        memcpy(pcVar17,local_c,sVar18);
        iVar4 = local_1c;
        piVar7 = local_8;
      }
    }
  }
  local_8 = piVar7;
  (**(code **)(*piVar5 + 0x32c))();
  local_8 = *(int **)(iVar4 + 0x8c);
  iVar16 = *(int *)(iVar4 + 0x2c);
  local_2c = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0();
    FUN_11a8911f();
  }
  pppuVar9 = (undefined ***)*DAT_123bdba0;
  if (pppuVar9 == (undefined ***)0x0) {
    psStack_214 = (size_t *)0x10d68868;
    pppuVar9 = (undefined ***)FUN_11679e10();
    if (pppuVar9 == (undefined ***)0x0) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        DAT_123bdbc8 = pppuVar9;
        _DAT_123bdbcc = pppuVar9;
        _DAT_123bdbd0 = pppuVar9;
        FUN_11a8911f();
      }
      pppuVar9 = &DAT_123bdbc0;
    }
  }
  local_2c = &PTR_FUN_11da54a8;
  if ((iVar16 == -1) ||
     ((((iVar16 == 0 && (pppuVar9[0xc] != (undefined **)0x0)) || (pppuVar9[10] == (undefined **)0x0)
       ) || ((iVar16 = iVar16 - (int)pppuVar9[0xc], iVar16 < 0 || ((int)pppuVar9[9] <= iVar16))))))
  {
LAB_10d68912:
    local_10 = (int *)0x0;
  }
  else {
    if (pppuVar9[8][iVar16 / (int)pppuVar9[10]] == (undefined *)0x0) goto LAB_10d68912;
    local_10 = *(int **)(pppuVar9[8][iVar16 / (int)pppuVar9[10]] + (iVar16 % (int)pppuVar9[10]) * 4)
    ;
  }
  psVar19 = (size_t *)0x0;
  local_58 = (size_t *)0x0;
  local_54 = (size_t *)0x0;
  local_50 = (size_t *)0x0;
  if (local_10 != (int *)0x0) {
    local_24 = FUN_116c4870();
    local_c = (char *)FUN_116c4820();
    local_2c = (undefined **)(**(code **)(*local_10 + 0x18))();
    if (local_2c != (undefined **)0xffffffff) {
      local_4c = 0;
      psStack_214 = &local_18;
      local_48 = 0;
      psStack_218 = (size_t *)0x0;
      local_44 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_18 = 1;
      FUN_10463c40();
      FUN_10b57d60(local_2c,&local_d0,&local_4c);
      cVar3 = FUN_10b57e50();
      if ((cVar3 == '\x01') && (iVar16 = local_4c, local_4c != local_48)) {
        do {
          FUN_116a5560();
          psVar10 = (size_t *)FUN_116a5550();
          if (psVar19 == local_50) {
            psStack_218 = psVar19;
            psStack_214 = psVar10;
            FUN_10463c40();
          }
          else {
            *psVar19 = *psVar10;
            local_54 = psVar19 + 1;
          }
          iVar16 = iVar16 + 4;
          piVar5 = local_20;
          iVar4 = local_1c;
          psVar19 = local_54;
        } while (iVar16 != local_48);
      }
      if (local_d0 != 0) {
        FUN_10c3d5d0();
      }
      if (local_4c != 0) {
        FUN_10c3d5d0();
      }
    }
  }
  DAT_11dfa3c4 = *(undefined4 *)(iVar4 + 0x2c);
  DAT_11dfa3c8 = local_8;
  FUN_10f1c150();
  local_8 = (int *)&psStack_218;
  uVar11 = *(int *)(iVar4 + 0x1a0) - *(int *)(iVar4 + 0x19c) >> 2;
  psStack_218 = (size_t *)0x0;
  psStack_214 = (size_t *)0x0;
  ppsVar2 = &psStack_218;
  if (uVar11 < 0x40000000) {
    if (uVar11 != 0) {
      local_18 = uVar11 << 2;
      local_8 = (int *)&psStack_218;
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(local_18);
    }
    iVar16 = 0;
    psStack_218 = (size_t *)0x0;
    psStack_214 = (size_t *)0x0;
    ppsVar2 = &psStack_218;
    if (*(int *)(iVar4 + 0x1a0) != *(int *)(iVar4 + 0x19c)) {
      local_18 = *(int *)(iVar4 + 0x1a0) - (int)*(void **)(iVar4 + 0x19c);
      pvVar12 = memcpy((void *)0x0,*(void **)(iVar4 + 0x19c),local_18);
      iVar16 = (int)pvVar12 + local_18;
      ppsVar2 = (size_t **)local_8;
    }
    local_8 = (int *)ppsVar2;
    *(int *)((int)local_8 + 4) = iVar16;
    FUN_10f1c5d0();
    local_8 = (int *)&psStack_218;
    _Size = (undefined **)((int)psVar19 - (int)local_58);
    uVar11 = (int)_Size >> 2;
    psStack_218 = (size_t *)0x0;
    psStack_214 = (size_t *)0x0;
    local_2c = _Size;
    ppsVar2 = &psStack_218;
    if (uVar11 < 0x40000000) {
      if (uVar11 != 0) {
        local_18 = uVar11 << 2;
        local_8 = (int *)&psStack_218;
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(local_18);
      }
      iVar16 = 0;
      psStack_218 = (size_t *)0x0;
      psStack_214 = (size_t *)0x0;
      ppsVar2 = &psStack_218;
      if (psVar19 != local_58) {
        pvVar12 = memcpy((void *)0x0,local_58,(size_t)_Size);
        iVar16 = (int)_Size + (int)pvVar12;
        ppsVar2 = (size_t **)local_8;
      }
      local_8 = (int *)ppsVar2;
      *(int *)((int)local_8 + 4) = iVar16;
      FUN_10f1c6d0();
      DAT_11dfa3c4 = 0;
      DAT_11dfa3c8 = 0;
      if ((int *)piVar5[3] != (int *)0x0) {
        psStack_214 = (size_t *)0x10d68bae;
        iVar16 = (**(code **)(*(int *)piVar5[3] + 0x1b8))();
        if (iVar16 != 0) {
          uVar11 = *(int *)(iVar4 + 0x1ac) - *(int *)(iVar4 + 0x1a8) >> 2;
          local_40 = 0;
          local_3c = (undefined4 *)0x0;
          local_38 = (undefined4 *)0x0;
          ppsVar2 = (size_t **)local_8;
          if (0x3fffffff < uVar11) goto LAB_10d68a7c;
          if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(uVar11 << 2);
          }
          local_8 = (undefined4 *)0x0;
          pvVar12 = *(void **)(iVar4 + 0x1a8);
          if (*(void **)(iVar4 + 0x1ac) != pvVar12) {
            local_18 = (int)*(void **)(iVar4 + 0x1ac) - (int)pvVar12;
            pvVar12 = memcpy((void *)0x0,pvVar12,local_18);
            puVar8 = (undefined4 *)((int)pvVar12 + local_18);
            for (piVar7 = local_8; piVar7 != puVar8; piVar7 = piVar7 + 1) {
              if (local_3c == local_38) {
                FUN_1053b850(local_3c,piVar7,local_2f,1,1);
              }
              else {
                *local_3c = *piVar7;
                local_3c = local_3c + 1;
              }
            }
          }
          piVar5 = (int *)piVar5[3];
          piVar7 = (int *)(**(code **)(*piVar5 + 0x1b8))(0);
          iVar4 = *piVar7;
          uVar13 = (**(code **)(*piVar5 + 0x48))(&local_40,0x3f800000);
          (**(code **)(iVar4 + 0x1e4))(uVar13);
          piVar5 = local_20;
          piVar7 = (int *)(**(code **)(*(int *)local_20[3] + 0x1b8))(0);
          iVar4 = local_1c;
          (**(code **)(*piVar7 + 0x1e0))(*(undefined1 *)(local_1c + 0x1d4));
          if (local_8 != (undefined4 *)0x0) {
            psStack_214 = (size_t *)0x10d68cc6;
            FUN_10c3d5d0();
          }
          if (local_40 != 0) {
            psStack_214 = (size_t *)0x10d68cd6;
            FUN_10c3d5d0();
          }
        }
      }
      local_8 = (int *)&psStack_218;
      uVar11 = *(int *)(iVar4 + 0x1ac) - *(int *)(iVar4 + 0x1a8) >> 2;
      psStack_218 = (size_t *)0x0;
      psStack_214 = (size_t *)0x0;
      ppsVar2 = &psStack_218;
      if (uVar11 < 0x40000000) {
        if (uVar11 == 0) {
          iVar16 = 0;
          psStack_218 = (size_t *)0x0;
          psStack_214 = (size_t *)0x0;
          pvVar12 = *(void **)(iVar4 + 0x1a8);
          ppsVar2 = &psStack_218;
          if (*(void **)(iVar4 + 0x1ac) != pvVar12) {
            sVar18 = (int)*(void **)(iVar4 + 0x1ac) - (int)pvVar12;
            pvVar12 = memcpy((void *)0x0,pvVar12,sVar18);
            iVar16 = sVar18 + (int)pvVar12;
            ppsVar2 = (size_t **)local_8;
          }
          local_8 = (int *)ppsVar2;
          *(int *)((int)local_8 + 4) = iVar16;
          FUN_10f03340();
          (**(code **)(*(int *)piVar5[3] + 0x2f8))(1,0);
          if (!bVar20) {
            (**(code **)(*(int *)piVar5[3] + 0x120))(1);
            *(undefined1 *)(local_28 + 0x30) = 1;
            *(undefined4 *)(local_28 + 0x2c) = 1;
          }
          if (local_58 != (size_t *)0x0) {
            FUN_10c3d5d0(local_58);
          }
          if (local_60 != 0) {
            FUN_10ae97c0(iStack_6c);
            puStack_68 = &local_70;
            iStack_6c = 0;
            local_60 = 0;
            puStack_64 = puStack_68;
          }
          piVar5 = local_c4;
          if ((-1 < *local_c4) && (iVar4 = FUN_10c3dad0(local_c4), iVar4 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
            FUN_10c3d900(piVar5);
          }
          FUN_10516930();
          return;
        }
        local_8 = (int *)&psStack_218;
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(uVar11 << 2);
      }
    }
  }
LAB_10d68a7c:
  local_8 = (int *)ppsVar2;
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* --- CItemBaseInfo::GetManagers_111e7b30 @ 111e7b30 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: strcpy_s
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: strcpy_s
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_111e7b30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  int local_38;
  undefined **local_34;
  undefined **local_30;
  int local_2c;
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  ppuVar6 = (undefined **)0x0;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (0 < iVar1) {
    do {
      local_38 = 0;
      (**(code **)(*param_1 + 0x1c))(ppuVar6,&local_38);
      iVar1 = local_38;
      local_34 = ppuVar6;
      FUN_113f3640();
      iVar2 = FUN_1115abd0();
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) {
LAB_111e7bab:
        ppuVar3 = local_34;
        if ((int)ppuVar6 < 0x1e) {
LAB_111e7bb7:
          local_2c = iVar1;
          local_34 = &PTR_FUN_11da5518;
          local_28[0] = '\0';
          local_28[1] = '\0';
          local_28[2] = '\0';
          local_28[3] = '\0';
          local_28[4] = '\0';
          local_28[5] = '\0';
          local_28[6] = '\0';
          local_28[7] = '\0';
          local_28[8] = '\0';
          local_28[9] = '\0';
          local_28[10] = '\0';
          local_28[0xb] = '\0';
          local_28[0xc] = '\0';
          local_28[0xd] = '\0';
          local_28[0xe] = '\0';
          local_28[0xf] = '\0';
          local_28[0x10] = '\0';
          local_28[0x11] = '\0';
          local_28[0x12] = '\0';
          local_28[0x13] = '\0';
          local_28[0x14] = '\0';
          local_28[0x15] = '\0';
          local_28[0x16] = '\0';
          local_28[0x17] = '\0';
          local_28[0x18] = '\0';
          local_28[0x19] = '\0';
          local_28[0x1a] = '\0';
          local_28[0x1b] = '\0';
          local_28[0x1c] = '\0';
          local_28[0x1d] = '\0';
          local_28[0x1e] = '\0';
          local_28[0x1f] = '\0';
          local_30 = ppuVar3;
          if ((DAT_123bdbfc & 1) == 0) {
            DAT_123bdbfc = DAT_123bdbfc | 1;
            FUN_102500e0("CItemBaseInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6e610);
          }
          puVar4 = (undefined4 *)*DAT_123bdba0;
          if ((puVar4 == (undefined4 *)0x0) &&
             (puVar4 = (undefined4 *)FUN_11679e10(&local_34,"CItemBaseInfo",0),
             puVar4 == (undefined4 *)0x0)) {
            if ((DAT_123bdc00 & 1) == 0) {
              DAT_123bdc00 = DAT_123bdc00 | 1;
              FUN_102555a0();
              FUN_11a8911f(&LAB_11c97330);
            }
            puVar4 = &DAT_123bdbc0;
          }
          local_34 = &PTR_FUN_11da54a8;
          if ((iVar1 != -1) &&
             ((((iVar1 != 0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0)) &&
              ((iVar1 = iVar1 - puVar4[0xc], -1 < iVar1 && (iVar1 < (int)puVar4[9])))))) {
            iVar2 = *(int *)(puVar4[8] + (iVar1 / (int)puVar4[10]) * 4);
            if ((iVar2 != 0) &&
               ((iVar1 = *(int *)(iVar2 + (iVar1 % (int)puVar4[10]) * 4), iVar1 != 0 &&
                (local_2c != 0)))) {
              strcpy_s(local_28,0x20,*(char **)(iVar1 + 0xb4));
            }
          }
          iVar1 = FUN_111e0a50();
          if (iVar1 != 0) {
            piVar5 = (int *)FUN_111e0a50();
            (**(code **)(*piVar5 + 4))(0x32,&local_30);
          }
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0x78);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x24);
        }
        if ((iVar2 == 0) || (*(char *)(iVar2 + 0x30) == '\0')) goto LAB_111e7bab;
        if (0x1d < (int)ppuVar6) {
          ppuVar3 = (undefined **)((int)ppuVar6 + -0x1e);
          goto LAB_111e7bb7;
        }
      }
      ppuVar6 = (undefined **)((int)ppuVar6 + 1);
      iVar1 = (**(code **)(*param_1 + 0x18))();
    } while ((int)ppuVar6 < iVar1);
  }
  FUN_11a89daa();
  return;
}



/* --- CItemBaseInfo::GetManagers_112035c0 @ 112035c0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __thiscall CItemBaseInfo__GetManagers_112035c0(undefined **param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined **local_8;
  
  piVar4 = param_2;
  if (param_1[5] == (undefined *)*param_2) {
    puVar11 = param_1[0xd];
    local_8 = param_1;
    if (puVar11 != param_1[0xe]) {
      do {
        cVar5 = FUN_100fd0c0(puVar11,piVar4 + 2);
        if ((cVar5 != '\0') && (*(int *)(puVar11 + 0x18) == piVar4[1])) {
          puVar11[0x1c] = 1;
        }
        puVar11 = puVar11 + 0x20;
      } while (puVar11 != param_1[0xe]);
    }
    iVar6 = FUN_111e0a50();
    if (iVar6 != 0) {
      piVar7 = (int *)FUN_111e0a50();
      (**(code **)(*piVar7 + 4))(0x132,(int)&param_2 + 3);
    }
    iVar6 = piVar4[1];
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    puVar8 = (undefined4 *)*DAT_123bdba0;
    if ((puVar8 == (undefined4 *)0x0) &&
       (puVar8 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0), puVar8 == (undefined4 *)0x0
       )) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdc00 = DAT_123bdc00 | 1;
        FUN_102555a0();
        FUN_11a8911f(&LAB_11c97b40);
      }
      puVar8 = &DAT_123bdbc0;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar6 != -1) && (((iVar6 != 0 || (puVar8[0xc] == 0)) && (iVar1 = puVar8[10], iVar1 != 0)))
        ) && ((iVar6 = iVar6 - puVar8[0xc], -1 < iVar6 && (iVar6 < (int)puVar8[9])))) {
      iVar2 = *(int *)(puVar8[8] + (iVar6 / iVar1) * 4);
      if ((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 != 0)) {
        puVar3 = *(undefined1 **)(iVar6 + 0x14);
        puVar10 = &DAT_11d9d32b;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar9 = FUN_1024e9b0(puVar10,10);
        FUN_1112f070(0xc6c,uVar9);
      }
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_1120ad50 @ 1120ad50 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CManufactureInfo""
//   ""CItemBaseInfo""
//   ""CItemBaseInfo::GetManagers""

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CManufactureInfo""
     ""CItemBaseInfo""
     ""CItemBaseInfo::GetManagers"" */

void CItemBaseInfo__GetManagers_1120ad50(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_e5;
  int local_e4;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined **local_d0;
  char local_c9;
  int local_c8 [21];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10815ce0(0,"CManufactureInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)) &&
      ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if ((iVar2 != 0) &&
       (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), local_e4 = iVar2, iVar2 != 0)) {
      iStack_2c = 0;
      uStack_28 = 0;
      local_24 = 0;
      local_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      local_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_c8[0x14] = *(undefined4 *)(iVar2 + 0x58);
      local_34 = *(undefined4 *)(iVar2 + 0x78);
      uStack_30 = *(undefined4 *)(iVar2 + 0x7c);
      iVar4 = FUN_100e5b40(local_20);
      FUN_100ec080(&local_74,0x20,*(undefined4 *)(iVar4 + 0x14),0x20);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      iVar4 = *(int *)(iVar2 + 0x58);
      iVar3 = FUN_102551f0(0,"CItemBaseInfo",0);
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)))) &&
         ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24)))))
      {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar1) * 4);
        if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + (iVar4 % iVar1) * 4), iVar4 != 0)) {
          FUN_100ec080(&local_54,0x20,*(undefined4 *)(iVar4 + 0xb4),0x20);
        }
      }
      iStack_2c = param_1;
      uStack_28 = *(undefined4 *)(iVar2 + 0x60);
      local_24 = *(undefined4 *)(iVar2 + 100);
      iVar4 = FUN_111e0a50();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_111e0a50();
        (**(code **)(*piVar5 + 4))(0x74,local_c8 + 0x14);
      }
      local_c9 = '\x01';
      iVar4 = FUN_111e0940();
      if ((iVar4 != 0) && (iVar4 = FUN_111e0940(), *(int *)(iVar4 + 0xc) != 0)) {
        iVar4 = FUN_111e0940();
        local_c9 = (**(code **)(**(int **)(iVar4 + 0xc) + 0x164))();
      }
      puVar8 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      local_dc = (undefined4 *)0x0;
      local_d8 = (undefined4 *)0x0;
      local_d4 = (undefined4 *)0x0;
      piVar5 = *(int **)(iVar2 + 0x84);
      if (piVar5 != *(int **)(iVar2 + 0x88)) {
        do {
          local_d8 = puVar8;
          if (puVar9 != puVar8) {
            local_d8 = puVar9;
          }
          if (*piVar5 != 0) {
            if (local_c9 == '\0') {
              local_d0 = (undefined **)FUN_113f9470(*piVar5);
              if (local_d8 == local_d4) {
                FUN_1120c900(local_d8,&local_d0,&local_e5,1,1);
              }
              else {
                *local_d8 = local_d0;
                local_d8 = local_d8 + 1;
              }
            }
            else {
              FUN_115223e0(&local_dc);
            }
            uVar6 = FUN_113f9ff0(*piVar5,-(uint)(param_2 != '\0'),&local_dc);
            iVar4 = *piVar5;
            local_c8[0x11] = 0;
            local_c8[0x12] = 0;
            local_c8[0x13] = 0;
            local_d0 = &PTR_FUN_11da5518;
            local_c8[1] = 0;
            local_c8[2] = 0;
            local_c8[3] = 0;
            local_c8[4] = 0;
            local_c8[5] = 0;
            local_c8[6] = 0;
            local_c8[7] = 0;
            local_c8[8] = 0;
            local_c8[9] = 0;
            local_c8[10] = 0;
            local_c8[0xb] = 0;
            local_c8[0xc] = 0;
            local_c8[0xd] = 0;
            local_c8[0xe] = 0;
            local_c8[0xf] = 0;
            local_c8[0x10] = 0;
            local_c8[0] = iVar4;
            if ((DAT_123bdbfc & 1) == 0) {
              DAT_123bdbfc = DAT_123bdbfc | 1;
              FUN_102500e0("CItemBaseInfo::GetManagers");
              FUN_11a8911f(&LAB_11c6e610);
            }
            puVar8 = (undefined4 *)*DAT_123bdba0;
            if ((puVar8 == (undefined4 *)0x0) &&
               (puVar8 = (undefined4 *)FUN_11679e10(&local_d0,"CItemBaseInfo",0),
               puVar8 == (undefined4 *)0x0)) {
              if ((DAT_123bdc00 & 1) == 0) {
                DAT_123bdc00 = DAT_123bdc00 | 1;
                FUN_102555a0();
                FUN_11a8911f(&LAB_11c97ba0);
              }
              puVar8 = &DAT_123bdbc0;
            }
            local_d0 = &PTR_FUN_11da54a8;
            if (((iVar4 == -1) ||
                (((iVar4 == 0 && (puVar8[0xc] != 0)) ||
                 (iVar3 = puVar8[10], iVar2 = local_e4, iVar3 == 0)))) ||
               ((iVar4 = iVar4 - puVar8[0xc], iVar4 < 0 || ((int)puVar8[9] <= iVar4)))) {
LAB_1120b11b:
              iVar4 = 0;
            }
            else {
              iVar1 = *(int *)(puVar8[8] + (iVar4 / iVar3) * 4);
              if (iVar1 == 0) goto LAB_1120b11b;
              iVar4 = *(int *)(iVar1 + (iVar4 % iVar3) * 4);
            }
            if (iVar4 != 0) {
              iVar3 = FUN_100e5b40(local_20);
              FUN_100ec080(local_c8 + 1,0x20,*(undefined4 *)(iVar3 + 0x14),0x20);
              if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                FUN_10c3d5d0(local_c);
              }
              FUN_100ec080(local_c8 + 9,0x20,*(undefined4 *)(iVar4 + 0xb4),0x20);
            }
            local_c8[0x11] = piVar5[7];
            local_c8[0x13] = param_1;
            local_c8[0x12] = uVar6;
            iVar4 = FUN_111e0a50();
            puVar9 = local_dc;
            if (iVar4 != 0) {
              piVar7 = (int *)FUN_111e0a50();
              (**(code **)(*piVar7 + 4))(0x77,local_c8);
              puVar9 = local_dc;
            }
          }
          piVar5 = piVar5 + 8;
          puVar8 = local_d8;
        } while (piVar5 != *(int **)(iVar2 + 0x88));
        if (puVar9 != (undefined4 *)0x0) {
          FUN_10c3d5d0(puVar9);
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CItemBaseInfo::GetManagers_112a9f30 @ 112a9f30 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: memcpy, memset, puts, exit
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""out of memory\n""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: memcpy, memset, puts, exit
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""out of memory\n"" */

void __fastcall CItemBaseInfo__GetManagers_112a9f30(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  undefined ***pppuVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  undefined **ppuVar15;
  undefined4 *puVar16;
  size_t sVar17;
  undefined1 *puVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_c8;
  int *local_c0;
  undefined *local_b4;
  undefined4 local_b0;
  undefined **local_ac;
  undefined **local_a8;
  int *local_a4;
  undefined1 local_9d;
  int *local_9c;
  int *local_98;
  uint local_94;
  undefined **local_90;
  undefined **local_8c;
  undefined1 local_88 [20];
  undefined1 *local_74;
  undefined *local_70;
  undefined1 local_6c [44];
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int local_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_94 = 0;
  piVar12 = (int *)param_1[3];
  local_90 = param_1;
  if (piVar12 != (int *)0x0) {
    uVar7 = (**(code **)(*piVar12 + 0x6c))();
    local_98 = (int *)(**(code **)(*(int *)piVar12[0x2b] + 4))();
    if (local_98 != (int *)0x0) {
      uVar8 = FUN_117388f0(uVar7,0);
      iVar9 = FUN_11738640(uVar8);
      if (iVar9 == 0) {
        uVar7 = FUN_117388f0(uVar7,piVar12[0x30]);
        iVar9 = FUN_11738640(uVar7);
        if (iVar9 == 0) goto LAB_112aa5f1;
      }
      puVar18 = *(undefined1 **)(iVar9 + 0x1c);
      if (puVar18 != *(undefined1 **)(iVar9 + 0x20)) {
        puVar16 = (undefined4 *)(puVar18 + 8);
        do {
          local_38 = *puVar16;
          uStack_34 = puVar16[1];
          uStack_30 = puVar16[2];
          uStack_2c = puVar16[3];
          local_40 = *puVar18;
          local_3c = puVar16[-1];
          local_28 = puVar16[4];
          puStack_24 = (undefined *)puVar16[5];
          uStack_20 = puVar16[6];
          uStack_1c = puVar16[7];
          local_18 = *(ulonglong *)(puVar16 + 8);
          FUN_100e5580(puVar16 + 10);
          local_c = puVar16[0xb];
          if (local_c == 0) {
            FUN_100e5670();
            FUN_11a89daa();
            return;
          }
          FUN_100e5670();
          puVar18 = puVar18 + 0x38;
          puVar16 = puVar16 + 0xe;
        } while (puVar18 != *(undefined1 **)(iVar9 + 0x20));
      }
      local_a4 = *(int **)(local_90[3] + 0xac);
      (**(code **)(*local_a4 + 0x84))(local_d8);
      piVar12 = local_98;
      FUN_11297390(local_98[7] - local_98[6] >> 3,&local_9d);
      pvVar10 = (void *)piVar12[6];
      if ((void *)piVar12[7] != pvVar10) {
        sVar17 = piVar12[7] - (int)pvVar10;
        pvVar10 = memcpy(local_c0,pvVar10,sVar17);
        local_9c = (int *)((int)pvVar10 + sVar17);
        piVar14 = local_c0;
        if (local_c0 != local_9c) {
          do {
            puVar1 = (undefined *)*piVar14;
            puVar2 = (undefined *)piVar14[1];
            uStack_2c = uStack_2c & 0xffffff00;
            local_28 = _DAT_11cf1300;
            puStack_24 = (undefined *)_UNK_11cf1304;
            uStack_20 = _UNK_11cf1308;
            uStack_1c = _UNK_11cf130c;
            local_18 = local_18 & 0xffffffff;
            local_10 = 0;
            memset(local_6c,0,0x40);
            local_18 = local_18 & 0xffffffff00000000;
            local_c = 0xf;
            local_70 = puVar1;
            local_28 = (**(code **)(*local_a4 + 0x7c))(puVar1);
            uStack_2c = CONCAT31(uStack_2c._1_3_,(int)puVar2 <= local_28);
            local_8c = &PTR_FUN_11da5518;
            puStack_24 = puVar2;
            if ((DAT_123bdbfc & 1) == 0) {
              DAT_123bdbfc = DAT_123bdbfc | 1;
              FUN_102500e0("CItemBaseInfo::GetManagers");
              FUN_11a8911f(&LAB_11c6e610);
            }
            pppuVar11 = (undefined ***)*DAT_123bdba0;
            if ((pppuVar11 == (undefined ***)0x0) &&
               (pppuVar11 = (undefined ***)FUN_11679e10(&local_8c,"CItemBaseInfo",0),
               pppuVar11 == (undefined ***)0x0)) {
              if ((DAT_123bdc00 & 1) == 0) {
                DAT_123bdbc4 = 0;
                DAT_123bdbd4 = 0;
                DAT_123bdbd8 = 0;
                _DAT_123bdbdc = 0;
                DAT_123bdbe0 = 0;
                DAT_123bdc00 = DAT_123bdc00 | 1;
                DAT_123bdbc0 = &PTR_FUN_11da5520;
                DAT_123bdbe4 = _DAT_11de9ae0;
                DAT_123bdbe8 = _UNK_11de9ae4;
                uRam123bdbec = _UNK_11de9ae8;
                DAT_123bdbf0 = _UNK_11de9aec;
                DAT_123bdbf4 = 1;
                DAT_123bdbc8 = pppuVar11;
                _DAT_123bdbcc = pppuVar11;
                _DAT_123bdbd0 = pppuVar11;
                FUN_11a8911f(&LAB_11c99520);
              }
              pppuVar11 = &DAT_123bdbc0;
            }
            local_8c = &PTR_FUN_11da54a8;
            if ((puVar1 == (undefined *)0xffffffff) ||
               ((((puVar1 == (undefined *)0x0 && (pppuVar11[0xc] != (undefined **)0x0)) ||
                 (ppuVar15 = pppuVar11[10], ppuVar15 == (undefined **)0x0)) ||
                ((iVar9 = (int)puVar1 - (int)pppuVar11[0xc], iVar9 < 0 ||
                 ((int)pppuVar11[9] <= iVar9)))))) {
LAB_112aa215:
              iVar9 = 0;
            }
            else {
              if (pppuVar11[8][iVar9 / (int)ppuVar15] == (undefined *)0x0) goto LAB_112aa215;
              iVar9 = *(int *)(pppuVar11[8][iVar9 / (int)ppuVar15] + (iVar9 % (int)ppuVar15) * 4);
            }
            if (iVar9 != 0) {
              iVar9 = FUN_100e5b40(local_88);
              FUN_100ec080(local_6c,0x40,*(undefined4 *)(iVar9 + 0x14),0x40);
              if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(local_74);
              }
            }
            uStack_20 = 1;
            iVar9 = FUN_111e0a50();
            if (iVar9 != 0) {
              piVar12 = (int *)FUN_111e0a50();
              (**(code **)(*piVar12 + 4))(0x106,&local_70);
            }
            piVar14 = piVar14 + 2;
            piVar12 = local_98;
          } while (piVar14 != local_9c);
        }
      }
      uVar13 = piVar12[10] - piVar12[9] >> 3;
      if (0x1fffffff < uVar13) {
        puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(uVar13 << 3);
      }
      ppuVar15 = (undefined **)0x0;
      local_8c = (undefined **)0x0;
      pvVar10 = (void *)piVar12[9];
      if ((void *)piVar12[10] != pvVar10) {
        sVar17 = piVar12[10] - (int)pvVar10;
        pvVar10 = memcpy((void *)0x0,pvVar10,sVar17);
        local_a8 = (undefined **)((int)pvVar10 + sVar17);
        if (local_8c != local_a8) {
          local_9c = piVar12 + 0xc;
          local_ac = local_90 + 2;
          do {
            puVar1 = *ppuVar15;
            puVar2 = ppuVar15[1];
            uStack_2c = uStack_2c & 0xffffff00;
            local_28 = _DAT_11cf1300;
            puStack_24 = (undefined *)_UNK_11cf1304;
            uStack_20 = _UNK_11cf1308;
            uStack_1c = _UNK_11cf130c;
            local_18 = 0;
            local_10 = 0;
            local_c = 0;
            memset(local_6c,0,0x40);
            local_70 = puVar1;
            local_28 = (**(code **)(*local_a4 + 0x80))(puVar1);
            uStack_2c = CONCAT31(uStack_2c._1_3_,(int)puVar2 <= local_28);
            local_c = 0xf;
            piVar14 = (int *)local_9c[1];
            piVar12 = local_9c;
            while (piVar6 = piVar14, piVar6 != (int *)0x0) {
              if (piVar6[4] < (int)puVar1) {
                piVar14 = (int *)piVar6[3];
              }
              else {
                piVar14 = (int *)piVar6[2];
                piVar12 = piVar6;
              }
            }
            if ((piVar12 == local_9c) || (local_94 = local_94 | 1, (int)puVar1 < piVar12[4])) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((local_94 & 1) != 0) {
              local_94 = local_94 & 0xfffffffe;
            }
            puStack_24 = puVar2;
            if (bVar5) {
              local_b0 = 0;
              local_b4 = puVar1;
              FUN_10464a20(&local_98,piVar12,&local_b4);
              piVar12 = local_98;
            }
            iVar9 = piVar12[5];
            local_90 = &PTR_FUN_11da5518;
            if ((DAT_123bdbfc & 1) == 0) {
              DAT_123bdbfc = DAT_123bdbfc | 1;
              FUN_102500e0("CItemBaseInfo::GetManagers");
              FUN_11a8911f(&LAB_11c6e610);
            }
            pppuVar11 = (undefined ***)*DAT_123bdba0;
            if ((pppuVar11 == (undefined ***)0x0) &&
               (pppuVar11 = (undefined ***)FUN_11679e10(&local_90,"CItemBaseInfo",0),
               pppuVar11 == (undefined ***)0x0)) {
              if ((DAT_123bdc00 & 1) == 0) {
                DAT_123bdbc4 = 0;
                DAT_123bdbd4 = 0;
                DAT_123bdbd8 = 0;
                _DAT_123bdbdc = 0;
                DAT_123bdbe0 = 0;
                DAT_123bdc00 = DAT_123bdc00 | 1;
                DAT_123bdbc0 = &PTR_FUN_11da5520;
                DAT_123bdbe4 = _DAT_11de9ae0;
                DAT_123bdbe8 = _UNK_11de9ae4;
                uRam123bdbec = _UNK_11de9ae8;
                DAT_123bdbf0 = _UNK_11de9aec;
                DAT_123bdbf4 = 1;
                DAT_123bdbc8 = pppuVar11;
                _DAT_123bdbcc = pppuVar11;
                _DAT_123bdbd0 = pppuVar11;
                FUN_11a8911f(&LAB_11c99520);
              }
              pppuVar11 = &DAT_123bdbc0;
            }
            local_90 = &PTR_FUN_11da54a8;
            if (((iVar9 == -1) ||
                (((iVar9 == 0 && (pppuVar11[0xc] != (undefined **)0x0)) ||
                 (ppuVar3 = pppuVar11[10], ppuVar3 == (undefined **)0x0)))) ||
               ((iVar9 = iVar9 - (int)pppuVar11[0xc], iVar9 < 0 || ((int)pppuVar11[9] <= iVar9)))) {
LAB_112aa518:
              iVar9 = 0;
            }
            else {
              if (pppuVar11[8][iVar9 / (int)ppuVar3] == (undefined *)0x0) goto LAB_112aa518;
              iVar9 = *(int *)(pppuVar11[8][iVar9 / (int)ppuVar3] + (iVar9 % (int)ppuVar3) * 4);
            }
            if (iVar9 != 0) {
              iVar9 = FUN_100e5b40(local_88);
              FUN_100ec080(local_6c,0x40,*(undefined4 *)(iVar9 + 0x14),0x40);
              if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(local_74);
              }
            }
            uStack_20 = 1;
            iVar9 = FUN_111e0a50();
            if (iVar9 != 0) {
              piVar12 = (int *)FUN_111e0a50();
              (**(code **)(*piVar12 + 4))(0x106,&local_70);
            }
            ppuVar15 = ppuVar15 + 2;
          } while (ppuVar15 != local_a8);
        }
      }
      if (local_8c != (undefined **)0x0) {
        FUN_10c3d5d0(local_8c);
      }
      if (local_c0 != (int *)0x0) {
        FUN_10c3d5d0(local_c0);
      }
      iVar9 = local_d4;
      if (local_c8 != 0) {
        while (iVar9 != 0) {
          FUN_10907ad0(*(undefined4 *)(iVar9 + 0xc));
          iVar4 = *(int *)(iVar9 + 8);
          FUN_10c3d5d0(iVar9);
          iVar9 = iVar4;
        }
      }
    }
  }
LAB_112aa5f1:
  FUN_11a89daa();
  return;
}



/* --- CItemBaseInfo::GetManagers_113efea0 @ 113efea0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __thiscall CItemBaseInfo__GetManagers_113efea0(int *param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  param_1[0x7bf] = (int)*param_2;
  param_1[0x7c0] = (int)param_2[1];
  param_1[0x7c1] = (int)param_2[2];
  iVar4 = param_1[0x7c1];
  param_1[0x7c2] = (int)param_2[3];
  param_1[0x7c3] = (int)param_2[4];
  param_1[0x7c4] = (int)param_2[5];
  if (iVar4 != 0) {
    param_2 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    puVar3 = (undefined4 *)*DAT_123bdba0;
    if ((puVar3 == (undefined4 *)0x0) &&
       (puVar3 = (undefined4 *)FUN_11679e10(&param_2,"CItemBaseInfo",0), puVar3 == (undefined4 *)0x0
       )) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdc00 = DAT_123bdc00 | 1;
        FUN_102555a0();
        FUN_11a8911f(&LAB_11c9bee0);
      }
      puVar3 = &DAT_123bdbc0;
    }
    param_2 = &PTR_FUN_11da54a8;
    if ((iVar4 != -1) &&
       ((((iVar4 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
        ((iVar4 = iVar4 - puVar3[0xc], -1 < iVar4 && (iVar4 < (int)puVar3[9])))))) {
      iVar2 = *(int *)(puVar3[8] + (iVar4 / iVar1) * 4);
      if ((iVar2 != 0) &&
         (((iVar4 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar4 != 0 &&
           (*(int *)(iVar4 + 0x34) == 4)) && (*(int *)(iVar4 + 0x11c) == 2)))) {
        param_1[0x7bb] = *(int *)(iVar4 + 0x16c);
      }
    }
  }
  (**(code **)(*param_1 + 0x1a4))(param_1 + 0x7bf);
  return;
}



/* --- CItemBaseInfo::GetManagers_113fc2e0 @ 113fc2e0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

undefined4 __thiscall CItemBaseInfo__GetManagers_113fc2e0(int param_1,undefined **param_2)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 local_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int local_24;
  undefined1 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  bVar11 = false;
  local_c = param_1;
  local_14 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_28 = &local_34;
  local_20 = param_2._3_1_;
  local_34 = 0;
  iVar12 = (int)param_2[1] - (int)*param_2 >> 0x1f;
  puStack_30 = (undefined4 *)0x0;
  puStack_2c = &local_34;
  local_8 = 0;
  if (((int)param_2[1] - (int)*param_2) / 0x18 + iVar12 != iVar12) {
    local_10 = 0;
    do {
      piVar15 = (int *)(*param_2 + local_10);
      if ((*piVar15 != 0) && (puVar14 = (uint *)piVar15[3], puVar14 != (uint *)piVar15[4])) {
LAB_113fc360:
        if ((*puVar14 < 0xb) && (*(int *)(local_c + 0xc + *puVar14 * 4) != 0)) {
          cVar3 = FUN_114610a0();
          if (cVar3 == '\0') goto code_r0x113fc383;
          uVar5 = FUN_11669730();
          puVar9 = &local_34;
          puVar6 = puStack_30;
          puVar8 = puVar9;
          if (puStack_30 != (undefined4 *)0x0) {
            do {
              if ((uint)puVar6[4] < uVar5) {
                puVar8 = (undefined4 *)puVar6[3];
              }
              else {
                puVar8 = (undefined4 *)puVar6[2];
                puVar9 = puVar6;
              }
              puVar6 = puVar8;
            } while (puVar8 != (undefined4 *)0x0);
            puVar8 = puVar9;
            if ((puVar9 != &local_34) && (puVar8 = &local_34, (uint)puVar9[4] <= uVar5)) {
              puVar8 = puVar9;
            }
          }
          if (puVar8 == &local_34) {
            uVar5 = FUN_11669730();
            puVar6 = &local_34;
            puVar9 = puStack_30;
            while (puVar9 != (undefined4 *)0x0) {
              if ((uint)puVar9[4] < uVar5) {
                puVar9 = (undefined4 *)puVar9[3];
              }
              else {
                puVar6 = puVar9;
                puVar9 = (undefined4 *)puVar9[2];
              }
            }
            if ((puVar6 == &local_34) || (bVar11 = true, uVar5 < (uint)puVar6[4])) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar11) {
              bVar11 = false;
            }
            if (bVar2) {
              local_18 = 0;
              local_1c = uVar5;
              FUN_11404260(&local_14,puVar6,&local_1c);
              puVar6 = local_14;
            }
            uVar13 = (**(code **)(*(int *)*piVar15 + 0xc))();
            puVar6[5] = uVar13;
          }
          else {
            iVar12 = (**(code **)(*(int *)*piVar15 + 0xc))();
            puVar8[5] = puVar8[5] + iVar12;
          }
          goto LAB_113fc44a;
        }
        uVar13 = 0x34;
        goto LAB_113fc8d2;
      }
LAB_113fc44a:
      local_10 = local_10 + 0x18;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(((int)param_2[1] - (int)*param_2) / 0x18));
  }
  local_10 = 0;
  iVar12 = (int)param_2[4] - (int)param_2[3] >> 0x1f;
  if (((int)param_2[4] - (int)param_2[3]) / 0xc + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      puVar1 = param_2[3];
      if ((10 < *(uint *)(puVar1 + iVar12)) ||
         (*(int *)(local_c + 0xc + *(uint *)(puVar1 + iVar12) * 4) == 0)) {
        uVar13 = 0x40;
        goto LAB_113fc8d2;
      }
      cVar3 = FUN_114610a0();
      if ((cVar3 != '\0') &&
         (iVar4 = FUN_11460eb0(*(undefined4 *)(puVar1 + iVar12 + 4)), iVar4 != 0)) {
        uVar5 = FUN_11669730();
        puVar9 = &local_34;
        puVar6 = puStack_30;
        if (puStack_30 != (undefined4 *)0x0) {
          do {
            if ((uint)puVar6[4] < uVar5) {
              puVar8 = (undefined4 *)puVar6[3];
            }
            else {
              puVar8 = (undefined4 *)puVar6[2];
              puVar9 = puVar6;
            }
            puVar6 = puVar8;
          } while (puVar8 != (undefined4 *)0x0);
          if ((puVar9 != &local_34) && ((uint)puVar9[4] <= uVar5)) {
            if (*(uint *)(puVar1 + iVar12 + 8) < (uint)puVar9[5]) {
              puVar9[5] = puVar9[5] - *(uint *)(puVar1 + iVar12 + 8);
            }
            else {
              iVar4 = FUN_100d86b0(puVar9,&puStack_30,&puStack_2c,&puStack_28);
              if (iVar4 != 0) {
                FUN_10c3d5d0(iVar4);
              }
              local_24 = local_24 + -1;
            }
          }
        }
      }
      iVar12 = iVar12 + 0xc;
      local_10 = local_10 + 1;
    } while (local_10 < (uint)(((int)param_2[4] - (int)param_2[3]) / 0xc));
  }
  puVar9 = puStack_2c;
  if (puStack_2c != &local_34) {
    do {
      local_14 = (undefined4 *)puVar9[5];
      uVar5 = puVar9[4];
      param_2 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (undefined4 *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (undefined4 *)0x0) {
          DAT_123bdba0 = (undefined4 *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      puVar6 = (undefined4 *)*DAT_123bdba0;
      if ((puVar6 == (undefined4 *)0x0) &&
         (puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CItemBaseInfo",0),
         puVar6 == (undefined4 *)0x0)) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          DAT_123bdbc8 = puVar6;
          _DAT_123bdbcc = puVar6;
          _DAT_123bdbd0 = puVar6;
          FUN_11a8911f(&LAB_11c9c1c0);
        }
        puVar6 = &DAT_123bdbc0;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((uVar5 == 0xffffffff) ||
          (((uVar5 == 0 && (puVar6[0xc] != 0)) || (iVar12 = puVar6[10], iVar12 == 0)))) ||
         ((iVar4 = uVar5 - puVar6[0xc], iVar4 < 0 || ((int)puVar6[9] <= iVar4)))) {
LAB_113fc90f:
        uVar13 = 0x32;
        goto LAB_113fc8d2;
      }
      iVar10 = *(int *)(puVar6[8] + (iVar4 / iVar12) * 4);
      if ((iVar10 == 0) || (iVar12 = *(int *)(iVar10 + (iVar4 % iVar12) * 4), iVar12 == 0))
      goto LAB_113fc90f;
      local_10 = FUN_113f9ee0(iVar12);
      if (local_10 != 0) {
        param_2 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        puVar6 = (undefined4 *)*DAT_123bdba0;
        if ((puVar6 == (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CItemBaseInfo",0),
           puVar6 == (undefined4 *)0x0)) {
          if ((DAT_123bdc00 & 1) == 0) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            DAT_123bdbc8 = puVar6;
            _DAT_123bdbcc = puVar6;
            _DAT_123bdbd0 = puVar6;
            FUN_11a8911f(&LAB_11c9c1c0);
          }
          puVar6 = &DAT_123bdbc0;
        }
        param_2 = &PTR_FUN_11da54a8;
        if ((((uVar5 != 0) || (puVar6[0xc] == 0)) && (iVar12 = puVar6[10], iVar12 != 0)) &&
           ((iVar4 = uVar5 - puVar6[0xc], -1 < iVar4 && (iVar4 < (int)puVar6[9])))) {
          iVar10 = *(int *)(puVar6[8] + (iVar4 / iVar12) * 4);
          if ((iVar10 != 0) &&
             (piVar15 = *(int **)(iVar10 + (iVar4 % iVar12) * 4), piVar15 != (int *)0x0)) {
            uVar5 = (**(code **)(*piVar15 + 0x30))();
          }
        }
        iVar10 = local_c + 0x50;
        iVar12 = *(int *)(local_c + 0x54);
        iVar4 = iVar10;
        if (*(int *)(local_c + 0x54) == 0) {
LAB_113fc874:
          if (iVar4 == iVar10) goto LAB_113fc87d;
          iVar12 = *(int *)(iVar4 + 0x14);
        }
        else {
          do {
            if (*(uint *)(iVar12 + 0x10) < uVar5) {
              iVar7 = *(int *)(iVar12 + 0xc);
            }
            else {
              iVar7 = *(int *)(iVar12 + 8);
              iVar4 = iVar12;
            }
            iVar12 = iVar7;
          } while (iVar7 != 0);
          if (iVar4 != iVar10) {
            if (uVar5 < *(uint *)(iVar4 + 0x10)) {
              iVar4 = iVar10;
            }
            goto LAB_113fc874;
          }
LAB_113fc87d:
          iVar12 = 0;
        }
        if (local_10 < (uint)(iVar12 + (int)local_14)) {
          uVar13 = 0x29;
          goto LAB_113fc8d2;
        }
      }
      puVar6 = (undefined4 *)puVar9[3];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar9[1];
        if (puVar9 == (undefined4 *)puVar6[3]) {
          do {
            puVar9 = puVar6;
            puVar6 = (undefined4 *)puVar9[1];
          } while (puVar9 == (undefined4 *)puVar6[3]);
        }
        if ((undefined4 *)puVar9[3] != puVar6) {
          puVar9 = puVar6;
        }
      }
      else {
        for (puVar8 = (undefined4 *)puVar6[2]; puVar9 = puVar6, puVar8 != (undefined4 *)0x0;
            puVar8 = (undefined4 *)puVar8[2]) {
          puVar6 = puVar8;
        }
      }
    } while (puVar9 != &local_34);
  }
  uVar13 = 0;
LAB_113fc8d2:
  puVar9 = puStack_30;
  if (local_24 != 0) {
    while (puVar9 != (undefined4 *)0x0) {
      FUN_1098f050(puVar9[3]);
      puVar6 = (undefined4 *)puVar9[2];
      FUN_10c3d5d0(puVar9);
      puVar9 = puVar6;
    }
  }
  return uVar13;
code_r0x113fc383:
  puVar14 = puVar14 + 1;
  if (puVar14 == (uint *)piVar15[4]) goto LAB_113fc44a;
  goto LAB_113fc360;
}



/* --- CItemBaseInfo::GetManagers_113fc920 @ 113fc920 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

undefined4 __thiscall CItemBaseInfo__GetManagers_113fc920(int param_1,undefined **param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 local_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar2 = (int *)param_2;
  local_c = param_1;
  puStack_1c = &local_28;
  local_14 = param_2._3_1_;
  iVar4 = (int)param_2[1] - (int)*param_2 >> 0x1f;
  local_28 = 0;
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = &local_28;
  local_18 = 0;
  local_8 = 0;
  if (((int)param_2[1] - (int)*param_2) / 0x18 + iVar4 != iVar4) {
    param_2 = (undefined **)0x0;
    do {
      piVar13 = (int *)(*piVar2 + (int)param_2);
      if (*piVar13 != 0) {
        uVar3 = FUN_11669730();
        puVar5 = &local_28;
        puVar6 = puStack_24;
        if (puStack_24 != (undefined4 *)0x0) {
          do {
            if ((uint)puVar6[4] < uVar3) {
              puVar9 = (undefined4 *)puVar6[3];
            }
            else {
              puVar9 = (undefined4 *)puVar6[2];
              puVar5 = puVar6;
            }
            puVar6 = puVar9;
          } while (puVar9 != (undefined4 *)0x0);
          if ((puVar5 != &local_28) && ((uint)puVar5[4] <= uVar3)) {
            iVar4 = (**(code **)(*(int *)*piVar13 + 0xc))();
            puVar5[5] = puVar5[5] + iVar4;
            goto LAB_113fc9f4;
          }
        }
        local_10 = FUN_11669730();
        piVar13 = (int *)*piVar13;
        puVar5 = (undefined4 *)FUN_113f3910(&local_10);
        uVar11 = (**(code **)(*piVar13 + 0xc))();
        *puVar5 = uVar11;
      }
LAB_113fc9f4:
      param_2 = (undefined **)((int)param_2 + 0x18);
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((piVar2[1] - *piVar2) / 0x18));
  }
  param_2 = (undefined **)0x0;
  iVar4 = piVar2[4] - piVar2[3] >> 0x1f;
  if ((piVar2[4] - piVar2[3]) / 0xc + iVar4 != iVar4) {
    local_8 = 0;
    do {
      ppuVar12 = param_2;
      puVar14 = (uint *)(piVar2[3] + local_8);
      if (((*puVar14 < 0xb) && (*(int *)(local_c + 0xc + *puVar14 * 4) != 0)) &&
         (iVar4 = FUN_11460eb0(puVar14[1]), iVar4 != 0)) {
        uVar3 = FUN_11669730();
        puVar5 = &local_28;
        puVar6 = puStack_24;
        ppuVar12 = param_2;
        if (puStack_24 != (undefined4 *)0x0) {
          do {
            if ((uint)puVar6[4] < uVar3) {
              puVar9 = (undefined4 *)puVar6[3];
            }
            else {
              puVar9 = (undefined4 *)puVar6[2];
              puVar5 = puVar6;
            }
            puVar6 = puVar9;
          } while (puVar9 != (undefined4 *)0x0);
          if ((puVar5 != &local_28) && ((uint)puVar5[4] <= uVar3)) {
            if (puVar14[2] < (uint)puVar5[5]) {
              puVar5[5] = puVar5[5] - puVar14[2];
            }
            else {
              iVar4 = FUN_100d86b0(puVar5,&puStack_24,&puStack_20,&puStack_1c);
              if (iVar4 != 0) {
                FUN_10c3d5d0(iVar4);
              }
              local_18 = local_18 + -1;
              ppuVar12 = param_2;
            }
          }
        }
      }
      param_2 = (undefined **)((int)ppuVar12 + 1);
      local_8 = local_8 + 0xc;
    } while (param_2 < (undefined **)((piVar2[4] - piVar2[3]) / 0xc));
  }
  puVar5 = puStack_20;
  if (puStack_20 != &local_28) {
    do {
      uVar3 = puVar5[4];
      local_10 = puVar5[5];
      param_2 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (undefined4 *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (undefined4 *)0x0) {
          DAT_123bdba0 = (undefined4 *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      puVar6 = (undefined4 *)*DAT_123bdba0;
      if ((puVar6 == (undefined4 *)0x0) &&
         (puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CItemBaseInfo",0),
         puVar6 == (undefined4 *)0x0)) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          DAT_123bdbc8 = puVar6;
          _DAT_123bdbcc = puVar6;
          _DAT_123bdbd0 = puVar6;
          FUN_11a8911f(&LAB_11c9c1c0);
        }
        puVar6 = &DAT_123bdbc0;
      }
      param_2 = &PTR_FUN_11da54a8;
      if ((uVar3 == 0xffffffff) ||
         ((((uVar3 == 0 && (puVar6[0xc] != 0)) || (iVar4 = puVar6[10], iVar4 == 0)) ||
          ((iVar7 = uVar3 - puVar6[0xc], iVar7 < 0 || ((int)puVar6[9] <= iVar7)))))) {
LAB_113fcd7f:
        uVar11 = 0x32;
        goto LAB_113fcd43;
      }
      iVar10 = *(int *)(puVar6[8] + (iVar7 / iVar4) * 4);
      if ((iVar10 == 0) || (iVar4 = *(int *)(iVar10 + (iVar7 % iVar4) * 4), iVar4 == 0))
      goto LAB_113fcd7f;
      uVar1 = *(uint *)(iVar4 + 0x48);
      if (uVar1 != 0) {
        iVar10 = local_c + 0x38;
        iVar4 = *(int *)(local_c + 0x3c);
        iVar7 = iVar10;
        if (*(int *)(local_c + 0x3c) == 0) {
LAB_113fcced:
          if (iVar7 == iVar10) goto LAB_113fccf6;
          iVar4 = *(int *)(iVar7 + 0x14);
        }
        else {
          do {
            if (*(uint *)(iVar4 + 0x10) < uVar3) {
              iVar8 = *(int *)(iVar4 + 0xc);
            }
            else {
              iVar8 = *(int *)(iVar4 + 8);
              iVar7 = iVar4;
            }
            iVar4 = iVar8;
          } while (iVar8 != 0);
          if (iVar7 != iVar10) {
            if (uVar3 < *(uint *)(iVar7 + 0x10)) {
              iVar7 = iVar10;
            }
            goto LAB_113fcced;
          }
LAB_113fccf6:
          iVar4 = 0;
        }
        if (uVar1 < (uint)(iVar4 + local_10)) {
          uVar11 = 0x28;
          goto LAB_113fcd43;
        }
      }
      puVar6 = (undefined4 *)puVar5[3];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar6[3]) {
          do {
            puVar5 = puVar6;
            puVar6 = (undefined4 *)puVar5[1];
          } while (puVar5 == (undefined4 *)puVar6[3]);
        }
        if ((undefined4 *)puVar5[3] != puVar6) {
          puVar5 = puVar6;
        }
      }
      else {
        for (puVar9 = (undefined4 *)puVar6[2]; puVar5 = puVar6, puVar9 != (undefined4 *)0x0;
            puVar9 = (undefined4 *)puVar9[2]) {
          puVar6 = puVar9;
        }
      }
    } while (puVar5 != &local_28);
  }
  uVar11 = 0;
LAB_113fcd43:
  puVar5 = puStack_24;
  if (local_18 != 0) {
    while (puVar5 != (undefined4 *)0x0) {
      FUN_1098f050(puVar5[3]);
      puVar6 = (undefined4 *)puVar5[2];
      FUN_10c3d5d0(puVar5);
      puVar5 = puVar6;
    }
  }
  return uVar11;
}



/* --- CItemBaseInfo::GetManagers_114014c0 @ 114014c0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined1 __thiscall CItemBaseInfo__GetManagers_114014c0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int local_30;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined **local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_2 + 0x50) = 0x35;
    return 0;
  }
  local_c = param_1;
  for (puVar16 = *(uint **)(param_2 + 8); puVar16 != *(uint **)(param_2 + 0xc);
      puVar16 = puVar16 + 4) {
    uVar6 = puVar16[3];
    if (*(uint *)(uVar6 + 0x48) != 0) {
      iVar12 = local_c + 0x38;
      iVar15 = *(int *)(local_c + 0x3c);
      iVar7 = iVar12;
      if (*(int *)(local_c + 0x3c) == 0) {
LAB_11401534:
        if (iVar7 == iVar12) goto LAB_1140153d;
        iVar15 = *(int *)(iVar7 + 0x14);
      }
      else {
        do {
          if (*(uint *)(iVar15 + 0x10) < *puVar16) {
            iVar9 = *(int *)(iVar15 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar15 + 8);
            iVar7 = iVar15;
          }
          iVar15 = iVar9;
        } while (iVar9 != 0);
        if (iVar7 != iVar12) {
          if (*puVar16 < *(uint *)(iVar7 + 0x10)) {
            iVar7 = iVar12;
          }
          goto LAB_11401534;
        }
LAB_1140153d:
        iVar15 = 0;
      }
      if (*(uint *)(uVar6 + 0x48) < puVar16[1] + iVar15) {
        *(undefined4 *)(param_2 + 0x50) = 0x28;
        *(uint *)(param_2 + 0x58) = *puVar16;
        return 0;
      }
      uVar6 = puVar16[3];
    }
    local_10 = (undefined **)FUN_113f9ee0(uVar6);
    iVar15 = local_c;
    if (local_10 != (undefined **)0x0) {
      uVar6 = FUN_113ffa60(*puVar16);
      iVar7 = *(int *)(iVar15 + 0x54);
      iVar15 = iVar15 + 0x50;
      iVar12 = iVar15;
      if (iVar7 == 0) {
LAB_11401594:
        if (iVar12 == iVar15) goto LAB_1140159d;
        iVar15 = *(int *)(iVar12 + 0x14);
      }
      else {
        do {
          if (*(uint *)(iVar7 + 0x10) < uVar6) {
            iVar9 = *(int *)(iVar7 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar7 + 8);
            iVar12 = iVar7;
          }
          iVar7 = iVar9;
        } while (iVar9 != 0);
        if (iVar12 != iVar15) {
          if (uVar6 < *(uint *)(iVar12 + 0x10)) {
            iVar12 = iVar15;
          }
          goto LAB_11401594;
        }
LAB_1140159d:
        iVar15 = 0;
      }
      if (local_10 < (undefined **)(puVar16[1] + iVar15)) {
        *(undefined4 *)(param_2 + 0x50) = 0x29;
        *(uint *)(param_2 + 0x58) = *puVar16;
        return 0;
      }
    }
  }
  iVar15 = *(int *)(param_2 + 8);
  puStack_38 = &local_40;
  local_30 = 0;
  local_40 = 0;
  puStack_3c = (undefined4 *)0x0;
  puStack_34 = puStack_38;
  if (iVar15 != *(int *)(param_2 + 0xc)) {
    do {
      uVar1 = *(undefined4 *)(iVar15 + 0xc);
      iVar7 = FUN_113f93e0(uVar1);
      uVar6 = FUN_113f7100(iVar7,uVar1,*(undefined4 *)(iVar15 + 8));
      if (uVar6 < *(uint *)(iVar15 + 4)) {
        cVar5 = FUN_116bd510();
        if (cVar5 == '\0') {
          uVar11 = 1;
        }
        else {
          uVar11 = *(uint *)(*(int *)(iVar15 + 0xc) + 0x54);
        }
        puVar8 = &local_40;
        local_10 = (undefined **)(((*(int *)(iVar15 + 4) - uVar6) + -1 + uVar11) / uVar11);
        puVar10 = puStack_3c;
        puVar13 = puVar8;
        if (puStack_3c != (undefined4 *)0x0) {
          do {
            if ((int)puVar10[4] < iVar7) {
              puVar13 = (undefined4 *)puVar10[3];
            }
            else {
              puVar13 = (undefined4 *)puVar10[2];
              puVar8 = puVar10;
            }
            puVar10 = puVar13;
          } while (puVar13 != (undefined4 *)0x0);
          puVar13 = puVar8;
          if ((puVar8 != &local_40) && (puVar13 = &local_40, (int)puVar8[4] <= iVar7)) {
            puVar13 = puVar8;
          }
        }
        puVar10 = &local_40;
        puVar8 = puStack_3c;
        if (puVar13 == &local_40) {
          while (puVar8 != (undefined4 *)0x0) {
            if ((int)puVar8[4] < iVar7) {
              puVar8 = (undefined4 *)puVar8[3];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)puVar8[2];
            }
          }
          if ((puVar10 == &local_40) || (local_8 = local_8 | 2, iVar7 < (int)puVar10[4])) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((local_8 & 2) != 0) {
            local_8 = local_8 & 0xfffffffd;
          }
          if (bVar4) {
            local_24 = 0;
            local_28 = iVar7;
            FUN_11404570(&local_18,puVar10,&local_28);
            puVar10 = local_18;
          }
          puVar10[5] = local_10;
        }
        else {
          while (puVar8 != (undefined4 *)0x0) {
            if ((int)puVar8[4] < iVar7) {
              puVar8 = (undefined4 *)puVar8[3];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)puVar8[2];
            }
          }
          if ((puVar10 == &local_40) || (local_8 = local_8 | 1, iVar7 < (int)puVar10[4])) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((local_8 & 1) != 0) {
            local_8 = local_8 & 0xfffffffe;
          }
          if (bVar4) {
            local_1c = 0;
            local_20 = iVar7;
            FUN_11404570(&local_14,puVar10,&local_20);
            puVar10 = local_14;
          }
          puVar10[5] = puVar10[5] + (int)local_10;
        }
      }
      iVar15 = iVar15 + 0x10;
    } while (iVar15 != *(int *)(param_2 + 0xc));
  }
  puVar16 = *(uint **)(param_2 + 0x14);
  if (puVar16 != *(uint **)(param_2 + 0x18)) {
    do {
      uVar6 = puVar16[3];
      if (*(uint *)(uVar6 + 0x48) != 0) {
        iVar12 = local_c + 0x38;
        iVar15 = *(int *)(local_c + 0x3c);
        iVar7 = iVar12;
        if (iVar15 == 0) {
LAB_114017dd:
          if (iVar7 == iVar12) goto LAB_114017e6;
          iVar15 = *(int *)(iVar7 + 0x14);
        }
        else {
          do {
            if (*(uint *)(iVar15 + 0x10) < *puVar16) {
              iVar9 = *(int *)(iVar15 + 0xc);
            }
            else {
              iVar9 = *(int *)(iVar15 + 8);
              iVar7 = iVar15;
            }
            iVar15 = iVar9;
          } while (iVar9 != 0);
          if (iVar7 != iVar12) {
            if (*puVar16 < *(uint *)(iVar7 + 0x10)) {
              iVar7 = iVar12;
            }
            goto LAB_114017dd;
          }
LAB_114017e6:
          iVar15 = 0;
        }
        if (*(uint *)(uVar6 + 0x48) < puVar16[1] + iVar15) {
          uVar14 = 0;
          *(undefined4 *)(param_2 + 0x50) = 0x28;
          *(uint *)(param_2 + 0x58) = *puVar16;
          goto LAB_11401c0a;
        }
        uVar6 = puVar16[3];
      }
      local_18 = (undefined4 *)FUN_113f9ee0(uVar6);
      if (local_18 != (undefined4 *)0x0) {
        uVar6 = *puVar16;
        local_10 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        puVar8 = (undefined4 *)*DAT_123bdba0;
        if ((puVar8 == (undefined4 *)0x0) &&
           (puVar8 = (undefined4 *)FUN_11679e10(&local_10,"CItemBaseInfo",0),
           puVar8 == (undefined4 *)0x0)) {
          if ((DAT_123bdc00 & 1) == 0) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            DAT_123bdbc8 = puVar8;
            _DAT_123bdbcc = puVar8;
            _DAT_123bdbd0 = puVar8;
            FUN_11a8911f(&LAB_11c9c1c0);
          }
          puVar8 = &DAT_123bdbc0;
        }
        local_10 = &PTR_FUN_11da54a8;
        if ((uVar6 != 0xffffffff) &&
           ((((uVar6 != 0 || (puVar8[0xc] == 0)) && (iVar15 = puVar8[10], iVar15 != 0)) &&
            ((iVar7 = uVar6 - puVar8[0xc], -1 < iVar7 && (iVar7 < (int)puVar8[9])))))) {
          iVar12 = *(int *)(puVar8[8] + (iVar7 / iVar15) * 4);
          if ((iVar12 != 0) &&
             (piVar2 = *(int **)(iVar12 + (iVar7 % iVar15) * 4), piVar2 != (int *)0x0)) {
            uVar6 = (**(code **)(*piVar2 + 0x30))();
          }
        }
        iVar12 = local_c + 0x50;
        iVar15 = *(int *)(local_c + 0x54);
        iVar7 = iVar12;
        if (*(int *)(local_c + 0x54) == 0) {
LAB_1140193e:
          if (iVar7 == iVar12) goto LAB_11401947;
          iVar15 = *(int *)(iVar7 + 0x14);
        }
        else {
          do {
            if (*(uint *)(iVar15 + 0x10) < uVar6) {
              iVar9 = *(int *)(iVar15 + 0xc);
            }
            else {
              iVar9 = *(int *)(iVar15 + 8);
              iVar7 = iVar15;
            }
            iVar15 = iVar9;
          } while (iVar9 != 0);
          if (iVar7 != iVar12) {
            if (uVar6 < *(uint *)(iVar7 + 0x10)) {
              iVar7 = iVar12;
            }
            goto LAB_1140193e;
          }
LAB_11401947:
          iVar15 = 0;
        }
        if (local_18 < (undefined4 *)(puVar16[1] + iVar15)) {
          uVar14 = 0;
          *(undefined4 *)(param_2 + 0x50) = 0x29;
          *(uint *)(param_2 + 0x58) = *puVar16;
          goto LAB_11401c0a;
        }
      }
      puVar16 = puVar16 + 4;
    } while (puVar16 != *(uint **)(param_2 + 0x18));
  }
  iVar15 = *(int *)(param_2 + 0x14);
  if (iVar15 != *(int *)(param_2 + 0x18)) {
    do {
      iVar7 = *(int *)(iVar15 + 0xc);
      if ((*(int *)(iVar7 + 0x34) == 1) && (*(int *)(iVar7 + 0x38) == 2)) {
        iVar12 = 5;
      }
      else if (*(char *)(iVar7 + 0x68) == '\0') {
        if ((*(int *)(iVar7 + 0x34) == 2) && (*(char *)(iVar7 + 0xc4) == '\0')) {
          iVar12 = 2;
        }
        else {
          iVar12 = 0;
          if (*(char *)(iVar7 + 0xc4) != '\0') {
            if ((((*(int *)(local_c + 8) != 0) &&
                 (iVar12 = *(int *)(*(int *)(local_c + 8) + 0xc), iVar12 != 0)) &&
                (iVar12 = *(int *)(iVar12 + 0x78), iVar12 != 0)) && (*(int *)(iVar12 + 0x24) != 0))
            {
              if (iVar12 == 0) {
                iVar12 = 0;
              }
              else {
                iVar12 = *(int *)(iVar12 + 0x24);
              }
              if (*(char *)(iVar12 + 0x30) != '\0') {
                iVar12 = 9;
                goto LAB_11401a1b;
              }
            }
            iVar12 = 0;
          }
        }
      }
      else {
        iVar12 = 1;
      }
LAB_11401a1b:
      uVar6 = FUN_113f7100(iVar12,iVar7,*(undefined4 *)(iVar15 + 8));
      if (uVar6 < *(uint *)(iVar15 + 4)) {
        cVar5 = FUN_116bd510();
        if (cVar5 == '\0') {
          uVar11 = 1;
        }
        else {
          uVar11 = *(uint *)(*(int *)(iVar15 + 0xc) + 0x54);
        }
        puVar8 = &local_40;
        local_10 = (undefined **)(((*(int *)(iVar15 + 4) - uVar6) + -1 + uVar11) / uVar11);
        puVar10 = puStack_3c;
        puVar13 = puVar8;
        if (puStack_3c != (undefined4 *)0x0) {
          do {
            if ((int)puVar10[4] < iVar12) {
              puVar13 = (undefined4 *)puVar10[3];
            }
            else {
              puVar13 = (undefined4 *)puVar10[2];
              puVar8 = puVar10;
            }
            puVar10 = puVar13;
          } while (puVar13 != (undefined4 *)0x0);
          puVar13 = puVar8;
          if ((puVar8 != &local_40) && (puVar13 = &local_40, (int)puVar8[4] <= iVar12)) {
            puVar13 = puVar8;
          }
        }
        puVar10 = &local_40;
        puVar8 = puStack_3c;
        if (puVar13 == &local_40) {
          while (puVar8 != (undefined4 *)0x0) {
            if ((int)puVar8[4] < iVar12) {
              puVar8 = (undefined4 *)puVar8[3];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)puVar8[2];
            }
          }
          if ((puVar10 == &local_40) || (local_8 = local_8 | 8, iVar12 < (int)puVar10[4])) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((local_8 & 8) != 0) {
            local_8 = local_8 & 0xfffffff7;
          }
          if (bVar4) {
            local_1c = 0;
            local_20 = iVar12;
            FUN_11404570(&local_14,puVar10,&local_20);
            puVar10 = local_14;
          }
          puVar10[5] = local_10;
        }
        else {
          while (puVar8 != (undefined4 *)0x0) {
            if ((int)puVar8[4] < iVar12) {
              puVar8 = (undefined4 *)puVar8[3];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)puVar8[2];
            }
          }
          if ((puVar10 == &local_40) || (local_8 = local_8 | 4, iVar12 < (int)puVar10[4])) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((local_8 & 4) != 0) {
            local_8 = local_8 & 0xfffffffb;
          }
          if (bVar4) {
            local_24 = 0;
            local_28 = iVar12;
            FUN_11404570(&local_18,puVar10,&local_28);
            puVar10 = local_18;
          }
          puVar10[5] = puVar10[5] + (int)local_10;
        }
      }
      iVar15 = iVar15 + 0x10;
    } while (iVar15 != *(int *)(param_2 + 0x18));
  }
  puVar8 = puStack_38;
  if (puStack_38 != &local_40) {
    do {
      puVar3 = (undefined1 *)puVar8[4];
      if (&DAT_0000000a < puVar3) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(local_c + 0xc + (int)puVar3 * 4);
      }
      if (param_3 == '\0') {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_1149b160(puVar3);
      }
      if ((iVar15 == 0) || (iVar15 = FUN_11460df0(0), (uint)(iVar15 + iVar7) < (uint)puVar8[5])) {
        uVar14 = 0;
        *(undefined4 *)(param_2 + 0x50) = 0x2a;
        goto LAB_11401c0a;
      }
      puVar10 = (undefined4 *)puVar8[3];
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar8[1];
        if (puVar8 == (undefined4 *)puVar10[3]) {
          do {
            puVar8 = puVar10;
            puVar10 = (undefined4 *)puVar8[1];
          } while (puVar8 == (undefined4 *)puVar10[3]);
        }
        if ((undefined4 *)puVar8[3] != puVar10) {
          puVar8 = puVar10;
        }
      }
      else {
        for (puVar13 = (undefined4 *)puVar10[2]; puVar8 = puVar10, puVar13 != (undefined4 *)0x0;
            puVar13 = (undefined4 *)puVar13[2]) {
          puVar10 = puVar13;
        }
      }
    } while (puVar8 != &local_40);
  }
  uVar14 = 1;
LAB_11401c0a:
  puVar8 = puStack_3c;
  if (local_30 != 0) {
    while (puVar8 != (undefined4 *)0x0) {
      FUN_11400b80(puVar8[3]);
      puVar10 = (undefined4 *)puVar8[2];
      FUN_10c3d5d0(puVar8);
      puVar8 = puVar10;
    }
  }
  return uVar14;
}



/* --- CItemBaseInfo::GetManagers_114b5ed0 @ 114b5ed0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: memcpy, ceil
// strings:
//   ""CNpcSaleInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: memcpy, ceil
   strings:
     ""CNpcSaleInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void CItemBaseInfo__GetManagers_114b5ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  size_t _Size;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  undefined **local_38;
  undefined8 local_34;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_34 = (double)CONCAT44(param_2,(undefined4)local_34);
  iVar3 = FUN_114b66e0(1,param_1,param_2);
  iVar4 = FUN_1053af40(0,"CNpcSaleInfo");
  if ((param_1 == -1) ||
     ((((param_1 == 0 && (*(int *)(iVar4 + 0x30) != 0)) ||
       (iVar10 = *(int *)(iVar4 + 0x28), iVar10 == 0)) ||
      ((param_1 = param_1 - *(int *)(iVar4 + 0x30), param_1 < 0 ||
       (*(int *)(iVar4 + 0x24) <= param_1)))))) goto LAB_114b6288;
  iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_1 / iVar10) * 4);
  if ((iVar4 == 0) ||
     ((*(int *)(iVar4 + (param_1 % iVar10) * 4) == 0 || (iVar4 = FUN_117dadb0(), iVar4 == 0))))
  goto LAB_114b6288;
  local_38 = (undefined **)0x0;
  if (0 < (int)(*(int *)(iVar4 + 0xa0) - *(int *)(iVar4 + 0x9c) & 0xffffffe0U)) {
    iVar9 = 0;
    local_34 = (double)((ulonglong)local_34 & 0xffffffff);
    iVar10 = iVar3;
    do {
      piVar8 = (int *)(*(int *)(iVar4 + 0x9c) + iVar9);
      local_28 = *piVar8;
      local_24 = piVar8[1];
      local_10 = local_20;
      pvVar5 = (void *)piVar8[7];
      _Size = piVar8[6] - (int)pvVar5;
      local_c = local_10;
      if (_Size == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_100b73e0();
      }
      if (0x10 < _Size + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580();
      }
      if ((void *)piVar8[6] != pvVar5) {
        pvVar5 = memcpy(local_10,pvVar5,_Size);
        local_10 = (undefined1 *)((int)pvVar5 + _Size);
      }
      iVar3 = local_2c;
      *local_10 = 0;
      if (local_28 == 1) {
        if (local_24 < 1) {
LAB_114b626f:
          if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
            FUN_10c3d5d0();
          }
          goto LAB_114b6288;
        }
        iVar3 = FUN_1025b060();
      }
      else {
        if (((local_28 != 2) || (local_24 < 1)) || (cVar2 = FUN_1139ab70(), cVar2 == '\0'))
        goto LAB_114b626f;
        iVar3 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 0x2abc) + 0x20))();
      }
      iVar3 = iVar3 / local_24;
      if ((iVar10 != -1) && (iVar10 < iVar3)) {
        iVar3 = iVar10;
      }
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0();
      }
      local_38 = (undefined **)((int)local_38 + 1);
      iVar9 = local_34._4_4_ + 0x20;
      local_34 = (double)CONCAT44(iVar9,(undefined4)local_34);
      iVar10 = iVar3;
    } while ((int)local_38 < *(int *)(iVar4 + 0xa0) - *(int *)(iVar4 + 0x9c) >> 5);
  }
  if (*(int *)(*(int *)(local_2c + 0x30) + 0x2d1c) != 0) {
    iVar9 = 0;
    local_34 = (double)((ulonglong)local_34 & 0xffffffff);
    iVar10 = iVar3;
    if (0 < (int)(*(int *)(iVar4 + 0x88) - *(int *)(iVar4 + 0x84) & 0xfffffff8U)) {
      do {
        iVar1 = *(int *)(iVar4 + 0x84);
        iVar6 = FUN_113fa0d0(*(undefined4 *)(iVar1 + iVar9 * 8),0);
        iVar3 = -1;
        iVar9 = *(int *)(iVar1 + 4 + local_34._4_4_ * 8);
        if (0 < iVar9) {
          iVar3 = iVar6 / iVar9;
        }
        if ((iVar10 != -1) && (iVar10 < iVar3)) {
          iVar3 = iVar10;
        }
        iVar9 = local_34._4_4_ + 1;
        local_34 = (double)CONCAT44(iVar9,(undefined4)local_34);
        iVar10 = iVar3;
      } while (iVar9 < *(int *)(iVar4 + 0x88) - *(int *)(iVar4 + 0x84) >> 3);
    }
  }
  iVar10 = *(int *)(iVar4 + 0x28);
  local_38 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0();
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar7 = (undefined4 *)*DAT_123bdba0;
  if ((puVar7 == (undefined4 *)0x0) &&
     (puVar7 = (undefined4 *)FUN_11679e10(&local_38,"CItemBaseInfo",0), puVar7 == (undefined4 *)0x0)
     ) {
    if ((DAT_123bdc00 & 1) == 0) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      DAT_123bdbc8 = puVar7;
      _DAT_123bdbcc = puVar7;
      _DAT_123bdbd0 = puVar7;
      FUN_11a8911f();
    }
    puVar7 = &DAT_123bdbc0;
  }
  local_38 = &PTR_FUN_11da54a8;
  if (((iVar10 == -1) || (((iVar10 == 0 && (puVar7[0xc] != 0)) || (puVar7[10] == 0)))) ||
     ((iVar10 = iVar10 - puVar7[0xc], iVar10 < 0 || ((int)puVar7[9] <= iVar10)))) goto LAB_114b6288;
  iVar9 = *(int *)(puVar7[8] + (iVar10 / (int)puVar7[10]) * 4);
  if ((iVar9 == 0) ||
     (piVar8 = *(int **)(iVar9 + (iVar10 % (int)puVar7[10]) * 4), piVar8 == (int *)0x0))
  goto LAB_114b6288;
  cVar2 = FUN_116bd510();
  if (cVar2 == '\0') {
    if (iVar3 == -1) {
      iVar3 = 1;
    }
    else {
      iVar10 = 1;
      if (iVar3 < 1) {
        iVar10 = iVar3;
      }
LAB_114b62ba:
      iVar3 = iVar10;
    }
  }
  else if (iVar3 == -1) {
    iVar3 = piVar8[0x15];
  }
  else {
    iVar10 = piVar8[0x15];
    if (iVar10 <= iVar3) goto LAB_114b62ba;
  }
  iVar9 = FUN_113fa3d0();
  iVar10 = iVar3;
  if (0 < iVar9) {
    (**(code **)(*piVar8 + 0x18))();
    iVar10 = FUN_113fa380();
    iVar10 = iVar9 - iVar10;
    if (iVar10 < 1) goto LAB_114b6288;
    if ((iVar3 != -1) && (iVar3 < iVar10)) {
      iVar10 = iVar3;
    }
  }
  if (DAT_11de98bc <= *(float *)(iVar4 + 0x30)) {
    dVar12 = ceil((double)*(float *)(iVar4 + 0x30));
  }
  else {
    fVar11 = (float10)FUN_116bd4b0();
    dVar12 = ceil((double)fVar11);
  }
  if ((int)dVar12 == 0) {
    FUN_11a89daa();
    return;
  }
  FUN_1025b060();
  FUN_1025b060();
  if (DAT_11de98bc <= *(float *)(iVar4 + 0x30)) {
    local_34 = (double)*(float *)(iVar4 + 0x30);
    local_34 = ceil(local_34);
  }
  else {
    fVar11 = (float10)FUN_116bd4b0();
    local_34 = ceil((double)fVar11);
  }
  if (iVar10 != -1) {
    FUN_11a89daa();
    return;
  }
LAB_114b6288:
  FUN_11a89daa();
  return;
}



/* --- CItemBaseInfo::GetManagers_114bcea0 @ 114bcea0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

int CItemBaseInfo__GetManagers_114bcea0
              (int param_1,int *param_2,int param_3,int param_4,uint param_5,uint *param_6,
              undefined4 *param_7,int *param_8)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int ****ppppiVar4;
  int *****pppppiVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *****pppppiVar14;
  int iVar15;
  char cStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined **local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int ****local_c;
  int ****local_8;
  
  local_c = (int ****)&local_c;
  iVar15 = 0;
  local_14 = 0;
  local_1c = 0;
  local_10 = 0;
  local_18 = 0;
  local_8 = local_c;
  if (*(int **)(param_3 + 0x20) != (int *)(param_3 + 0x20)) {
    local_28 = (int *)(param_4 + 4);
    do {
      if (param_5 <= local_14) break;
      iVar15 = *(int *)(param_3 + 0x20);
      iVar11 = *(int *)(iVar15 + 8);
      iVar13 = *(int *)(iVar15 + 0xc);
      iVar8 = *(int *)(iVar15 + 0x10);
      uVar12 = *(undefined4 *)(iVar15 + 0x14);
      uVar1 = *(undefined8 *)(iVar15 + 0x18);
      FUN_100ee470();
      iVar15 = FUN_100ee450();
      iVar13 = (int)((double)iVar15 * _DAT_11de98f0 * (double)((iVar8 - iVar13) + 1)) + iVar13;
      if ((iVar11 < 1) || (iVar13 < 1)) {
        iVar15 = 0;
LAB_114bd135:
        local_60 = (int)uVar1;
        if (0 < local_60) {
          (**(code **)(**(int **)(param_1 + 0x10) + 0x44))(0,local_60,0,1,0xf);
          local_1c = local_1c + 1;
        }
        iVar8 = 0;
        if (iVar15 < 1) {
          if (0 < local_60) {
            local_2c = (**(code **)(*param_2 + 0x1c8))();
            local_58 = 0x40c;
            local_54 = 0xffffffff;
            local_30 = *(undefined4 *)(param_1 + 4);
            local_50 = 0xffffffff;
            local_4c = param_1;
            local_48 = 0;
            local_44 = param_2;
            local_40 = 0;
            local_3c = 0;
            local_38 = local_60;
            local_34 = -1;
            if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(&local_58);
            }
            if (param_2[3] != 0) {
              (**(code **)(**(int **)(param_2[3] + 0x98) + 0x14))(&local_58);
            }
            iVar15 = FUN_113f3640();
            if (*(int **)(iVar15 + 0x4c) != (int *)0x0) {
              (**(code **)(**(int **)(iVar15 + 0x4c) + 0x14))(&local_58);
            }
          }
        }
        else {
          iVar8 = (**(code **)(**(int **)(param_1 + 0x2d1c) + 0x14))(iVar11,iVar15,local_18,0x19);
          if (iVar8 == 0) {
            iVar8 = 0;
            local_2c = (**(code **)(*param_2 + 0x1c8))();
            iVar9 = local_18;
            local_44 = param_2;
            local_30 = *(undefined4 *)(param_1 + 4);
            local_38 = local_60;
            local_58 = 0x40c;
            local_54 = 0xffffffff;
            local_50 = 0xffffffff;
            local_4c = param_1;
            local_48 = 0;
            local_34 = local_18;
            local_40 = iVar11;
            local_3c = iVar15;
            if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(&local_58);
            }
            if (param_2[3] != 0) {
              (**(code **)(**(int **)(param_2[3] + 0x98) + 0x14))(&local_58);
            }
            iVar10 = FUN_113f3640();
            if (*(int **)(iVar10 + 0x4c) != (int *)0x0) {
              (**(code **)(**(int **)(iVar10 + 0x4c) + 0x14))(&local_58);
            }
          }
          else {
            iVar8 = 6;
            iVar9 = local_18;
          }
          if (param_4 != 0) {
            local_28[-1] = iVar11;
            if (iVar8 == 0) {
              iVar13 = iVar15;
            }
            local_28[1] = iVar9;
            local_14 = local_14 + 1;
            *local_28 = iVar13;
            local_28 = local_28 + 3;
          }
        }
        piVar2 = *(int **)(param_3 + 0x20);
        piVar3 = (int *)piVar2[1];
        iVar15 = *piVar2;
        *piVar3 = iVar15;
        *(int **)(iVar15 + 4) = piVar3;
        FUN_10c3d5d0(piVar2);
        if (local_10 == 0) {
          local_10 = iVar8;
        }
      }
      else {
        local_20 = 0;
        local_24 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        puVar7 = (undefined4 *)*DAT_123bdba0;
        if ((puVar7 == (undefined4 *)0x0) &&
           (puVar7 = (undefined4 *)FUN_11679e10(&local_24,"CItemBaseInfo",0),
           puVar7 == (undefined4 *)0x0)) {
          if ((DAT_123bdc00 & 1) == 0) {
            DAT_123bdc00 = DAT_123bdc00 | 1;
            FUN_102555a0();
            FUN_11a8911f(&LAB_11c9eb00);
          }
          puVar7 = &DAT_123bdbc0;
        }
        local_24 = &PTR_FUN_11da54a8;
        if ((((iVar11 != -1) && (iVar15 = puVar7[10], iVar15 != 0)) &&
            (iVar8 = iVar11 - puVar7[0xc], -1 < iVar8)) && (iVar8 < (int)puVar7[9])) {
          iVar9 = *(int *)(puVar7[8] + (iVar8 / iVar15) * 4);
          if ((iVar9 != 0) && (iVar8 = *(int *)(iVar9 + (iVar8 % iVar15) * 4), iVar8 != 0)) {
            uStack_5c = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_18 = FUN_11521920(iVar8,uStack_5c);
            iVar9 = FUN_113f7d00(iVar8,iVar13,local_18,&local_20);
            iVar15 = iVar13;
            iVar10 = local_20;
            while (local_20 = iVar10, iVar9 != 0) {
              if ((((iVar9 != 0x28) && (iVar9 != 0x29)) && (iVar9 != 0x2a)) ||
                 ((iVar10 == 0 || (cStack_64 = (char)uVar12, cStack_64 == '\0')))) {
                if (((*(int *)(iVar8 + 0x34) != 1) || (*(int *)(iVar8 + 0x38) != 2)) ||
                   ((iVar9 != 0x29 && (iVar9 != 0x28)))) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x20);
                }
                iVar15 = 0;
                break;
              }
              iVar9 = FUN_113f7d00(iVar8,iVar10,local_18,&local_20);
              iVar15 = iVar10;
              iVar10 = local_20;
            }
            goto LAB_114bd135;
          }
        }
      }
    } while (*(int **)(param_3 + 0x20) != (int *)(param_3 + 0x20));
    iVar15 = local_10;
    uVar6 = local_14;
    if (local_10 != 0) {
      if (local_14 == param_5) {
        iVar15 = 0;
      }
      else if ((int *****)local_c == &local_c) {
        iVar15 = 6;
      }
      else {
        ppppiVar4 = (int ****)local_c[2];
        *(int *****)(param_4 + local_14 * 0xc) = ppppiVar4;
        *(int ****)(param_4 + 4 + local_14 * 0xc) = local_c[3];
        iVar11 = FUN_10254130(ppppiVar4);
        if (iVar11 == 0) {
          uVar12 = FUN_11521920(0,local_c[7]);
          *(undefined4 *)(param_4 + 8 + uVar6 * 0xc) = uVar12;
        }
        local_14 = local_14 + 1;
      }
    }
  }
  puVar7 = (undefined4 *)(param_3 + 0x20);
  FUN_114bbc40(*puVar7,local_c,&local_c,(int)&param_4 + 3);
  uVar6 = local_14;
  if ((undefined4 *)*puVar7 == puVar7) {
    if (0 < *(int *)(param_3 + 8)) {
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    }
    if ((char)param_2[99] != '\0') {
      (**(code **)(*param_2 + 0x1d0))(*(undefined4 *)(param_1 + 4));
    }
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar6;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = *(undefined4 *)(param_3 + 8);
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_1c;
  }
  pppppiVar14 = (int *****)local_c;
  if ((int *****)local_c != &local_c) {
    do {
      pppppiVar5 = (int *****)*pppppiVar14;
      FUN_10c3d5d0(pppppiVar14);
      pppppiVar14 = pppppiVar5;
    } while (pppppiVar5 != &local_c);
  }
  return iVar15;
}



/* --- CItemBaseInfo::GetManagers_11599120 @ 11599120 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""CEquipInfo""
//   ""CEquipLevelUpConsumeInfo::GetManagers""
//   ""CEquipLevelUpConsumeInfo""

/* WARNING: Removing unreachable block (ram,0x11599482) */
/* WARNING: Removing unreachable block (ram,0x11599490) */
/* WARNING: Removing unreachable block (ram,0x115994a8) */
/* WARNING: Removing unreachable block (ram,0x115994cf) */
/* WARNING: Removing unreachable block (ram,0x115994dc) */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""CEquipInfo""
     ""CEquipLevelUpConsumeInfo::GetManagers""
     ""CEquipLevelUpConsumeInfo"" */

void CItemBaseInfo__GetManagers_11599120
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  undefined **local_c4;
  undefined1 local_c0 [184];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar11 = (int *)*param_3;
  piVar1 = (int *)param_3[1];
  piVar15 = (int *)*param_4;
  do {
    if (piVar11 == piVar1) {
      FUN_11a89daa();
      return;
    }
    iVar6 = *piVar11;
    if (iVar6 == 1) {
      (**(code **)(*piVar15 + 0x18))();
      iVar6 = FUN_1166c4b0();
      uVar9 = *(undefined4 *)(iVar6 + 0x11c);
      uVar13 = (**(code **)(*piVar15 + 0x18))();
      iVar6 = FUN_117b6d70(uVar9,uVar13);
      if (iVar6 == 0) goto LAB_115996b2;
      (**(code **)(*piVar15 + 0x1c))(*(undefined4 *)(iVar6 + 0xa8));
      (**(code **)(*piVar15 + 0x34))(*(undefined4 *)(iVar6 + 0xe4));
      piVar15[0xe] = piVar15[0xe] + *(int *)(iVar6 + 0xe0);
      FUN_1166b670(*(undefined4 *)(iVar6 + 0xe8));
      FUN_1166b5f0(*(undefined4 *)(iVar6 + 0xb0));
      if (0 < *(int *)(iVar6 + 0xac)) {
        FUN_1166e790(*(int *)(iVar6 + 0xac));
      }
    }
    else if (iVar6 == 2) {
      iVar6 = FUN_1166c4b0();
      local_c4 = &PTR_FUN_11dcaebc;
      iVar6 = *(int *)(iVar6 + 0x298);
      if ((DAT_123bef34 & 1) == 0) {
        DAT_123bef34 = DAT_123bef34 | 1;
        FUN_102500e0("CEquipLevelUpConsumeInfo::GetManagers");
        FUN_11a8911f(&LAB_11c712a0);
      }
      puVar12 = (undefined *)*DAT_123bef14;
      if ((puVar12 == (undefined *)0x0) &&
         (puVar12 = (undefined *)FUN_11679e10(&local_c4,"CEquipLevelUpConsumeInfo",0),
         puVar12 == (undefined *)0x0)) {
        if ((DAT_123beff0 & 1) == 0) {
          DAT_123beff0 = DAT_123beff0 | 1;
          FUN_108061c0();
          FUN_11a8911f(&LAB_11ca3280);
        }
        puVar12 = &DAT_123bf030;
      }
      local_c4 = &PTR_FUN_11da54a8;
      if (((iVar6 == -1) ||
          (((iVar6 == 0 && (*(int *)(puVar12 + 0x30) != 0)) ||
           (iVar8 = *(int *)(puVar12 + 0x28), iVar8 == 0)))) ||
         ((iVar6 = iVar6 - *(int *)(puVar12 + 0x30), iVar6 < 0 ||
          (*(int *)(puVar12 + 0x24) <= iVar6)))) goto LAB_115996b2;
      iVar4 = *(int *)(*(int *)(puVar12 + 0x20) + (iVar6 / iVar8) * 4);
      if ((iVar4 == 0) || (*(int *)(iVar4 + (iVar6 % iVar8) * 4) == 0)) goto LAB_115996b2;
      uVar9 = (**(code **)(*piVar15 + 0x18))();
      iVar6 = FUN_1183b990(uVar9);
      if (iVar6 == 0) goto LAB_115996b2;
      (**(code **)(*piVar15 + 0x1c))(*(undefined4 *)(iVar6 + 4));
    }
    else if (iVar6 == 3) {
      local_c4 = &PTR_FUN_11da5518;
      iVar6 = piVar11[1];
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      puVar3 = (undefined4 *)*DAT_123bdba0;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_c4,"CItemBaseInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdc00 = DAT_123bdc00 | 1;
          FUN_102555a0();
          FUN_11a8911f(&LAB_11ca33a0);
        }
        puVar3 = &DAT_123bdbc0;
      }
      local_c4 = &PTR_FUN_11da54a8;
      if (((iVar6 == -1) ||
          (((iVar6 == 0 && (puVar3[0xc] != 0)) || (iVar8 = puVar3[10], iVar8 == 0)))) ||
         ((iVar4 = iVar6 - puVar3[0xc], iVar4 < 0 || ((int)puVar3[9] <= iVar4)))) goto LAB_115996b2;
      iVar5 = *(int *)(puVar3[8] + (iVar4 / iVar8) * 4);
      if ((iVar5 == 0) || (iVar8 = *(int *)(iVar5 + (iVar4 % iVar8) * 4), iVar8 == 0))
      goto LAB_115996b2;
      FUN_1166c160();
      iVar4 = FUN_11669730();
      iVar5 = FUN_1053a9e0(0,"CEquipInfo",0);
      if (((iVar4 == -1) || ((iVar4 == 0 && (*(int *)(iVar5 + 0x30) != 0)))) ||
         ((*(int *)(iVar5 + 0x28) == 0 ||
          ((iVar4 = iVar4 - *(int *)(iVar5 + 0x30), iVar4 < 0 || (*(int *)(iVar5 + 0x24) <= iVar4)))
          ))) {
LAB_115992d5:
        iVar4 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / *(int *)(iVar5 + 0x28)) * 4);
        if (iVar2 == 0) goto LAB_115992d5;
        iVar4 = *(int *)(iVar2 + (iVar4 % *(int *)(iVar5 + 0x28)) * 4);
      }
      FUN_11669730();
      if (((*(int *)(iVar4 + 0x218) == 0) || (iVar6 = FUN_11839c40(iVar6), iVar6 == 0)) ||
         (piVar7 = (int *)FUN_11398000(iVar8), piVar7 == (int *)0x0)) {
LAB_115996b2:
        FUN_11a89daa();
        return;
      }
      FUN_1010dcb0();
      (**(code **)(*piVar15 + 8))(local_c0);
      (**(code **)(*piVar7 + 4))(local_c0);
      iVar8 = FUN_11669250();
      (**(code **)(*piVar7 + 0x30))(*(undefined4 *)(iVar8 + 0x4c));
      FUN_1166c160();
      iVar8 = FUN_1166c160();
      if (*(int *)(iVar6 + 0x98) < iVar8) {
        iVar8 = FUN_1166c160();
        iVar8 = iVar8 - *(int *)(iVar6 + 0x98);
      }
      else {
        iVar8 = 0;
      }
      iVar6 = FUN_1166d7c0();
      if (iVar6 <= iVar8) {
        iVar8 = FUN_1166d7c0();
      }
      FUN_1166e770(iVar8);
      iVar6 = FUN_1166c4b0();
      iVar6 = *(int *)(iVar6 + 0x140);
      iVar8 = FUN_1166c400();
      if (iVar8 < iVar6) {
        uVar9 = FUN_1166c400();
      }
      else {
        iVar6 = FUN_1166c4b0();
        uVar9 = *(undefined4 *)(iVar6 + 0x140);
      }
      FUN_1166e7d0(uVar9);
      FUN_1166c4b0();
      uVar9 = FUN_116c4ec0();
      FUN_1166f2e0(uVar9);
      uVar14 = 0;
      iVar6 = FUN_1166ded0();
      if (iVar6 != 0) {
        do {
          local_c4 = (undefined **)FUN_1166def0(uVar14);
          if (0 < (int)local_c4) {
            uVar10 = FUN_1166ded0();
            if (uVar14 < uVar10) {
              FUN_1166f400(uVar14,local_c4);
            }
            else {
              FUN_114c63f0(local_c4,1);
            }
          }
          uVar14 = uVar14 + 1;
          uVar10 = FUN_1166ded0();
        } while (uVar14 < uVar10);
      }
      (**(code **)(*(int *)*param_4 + 0x38))();
      *param_4 = piVar7;
      piVar15 = piVar7;
    }
    piVar11 = piVar11 + 3;
  } while( true );
}



/* --- CItemBaseInfo::GetManagers_1159dc20 @ 1159dc20 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo""
//   ""CItemBaseInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo""
     ""CItemBaseInfo::GetManagers"" */

void CItemBaseInfo__GetManagers_1159dc20(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined **local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  *param_2 = 0;
  piVar5 = (int *)FUN_102551f0(0,"CItemBaseInfo",0);
  uVar6 = (**(code **)(*piVar5 + 0x28))();
  uVar12 = 0;
  if (uVar6 != 0) {
    do {
      local_28 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      puVar7 = (undefined4 *)*DAT_123bdba0;
      if ((puVar7 == (undefined4 *)0x0) &&
         (puVar7 = (undefined4 *)FUN_11679e10(&local_28,"CItemBaseInfo",0),
         puVar7 == (undefined4 *)0x0)) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          DAT_123bdbc8 = puVar7;
          _DAT_123bdbcc = puVar7;
          _DAT_123bdbd0 = puVar7;
          FUN_11a8911f(&LAB_11ca3700);
        }
        puVar7 = &DAT_123bdbc0;
      }
      local_28 = &PTR_FUN_11da54a8;
      if (((-1 < (int)uVar12) && ((int)uVar12 < (int)(puVar7[6] - puVar7[5]) >> 2)) &&
         (iVar2 = *(int *)(puVar7[5] + uVar12 * 4), iVar2 != 0)) {
        FUN_100e5a30(local_20);
        puVar11 = local_c;
        puVar4 = local_10;
        pcVar3 = *(char **)(param_1 + 0x14);
        pcVar8 = pcVar3;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar9 = (int)pcVar8 - (int)(pcVar3 + 1);
        if ((local_10 == local_c) || ((uint)((int)local_10 - (int)local_c) < uVar9)) {
          if (uVar9 == 0) goto LAB_1159ddb1;
        }
        else {
          puVar10 = (undefined1 *)FUN_100fd370(local_c,local_10,pcVar3,pcVar3 + uVar9,uVar6);
          if ((puVar10 != puVar4) && ((int)puVar10 - (int)puVar11 != -1)) {
LAB_1159ddb1:
            *(undefined4 *)(param_3 + *param_2 * 4) = *(undefined4 *)(iVar2 + 0x10);
            *param_2 = *param_2 + 1;
            puVar11 = local_c;
          }
        }
        if (199 < *param_2) {
          if ((puVar11 != local_20) && (puVar11 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puVar11);
          }
          FUN_11a89daa();
          return;
        }
        param_1 = local_24;
        if ((puVar11 != local_20) && (puVar11 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puVar11);
          param_1 = local_24;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  FUN_11a89daa();
  return;
}



/* --- CItemBaseInfo::GetManagers_117436f0 @ 117436f0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CBuffInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_117436f0(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  if (param_1[0x15] != (undefined *)0x0) {
    local_8 = param_1;
    FUN_10500130(0,"CBuffInfo",0);
  }
  param_1 = param_1 + 0x18;
  iVar2 = 3;
  do {
    if (*param_1 != (undefined *)0x0) {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (*DAT_123bdba0 == 0) {
        iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0);
        if ((iVar1 == 0) && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdc00 = DAT_123bdc00 | 1;
          FUN_102555a0();
          FUN_11a8911f(&LAB_11ca9640);
        }
      }
    }
    param_1 = param_1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* --- CItemBaseInfo::GetManagers_117b5360 @ 117b5360 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_117b5360(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0xe0);
  if (iVar2 != param_1 + 0xd8) {
    do {
      for (iVar3 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        local_8 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
           && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc8 = 0;
          _DAT_123bdbcc = 0;
          _DAT_123bdbd0 = 0;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          FUN_11a8911f(&LAB_11caa3b0);
        }
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar2 = iVar3, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
    } while (iVar2 != param_1 + 0xd8);
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_117b6f40 @ 117b6f40 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_117b6f40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 != param_1 + 0xec) {
    do {
      for (iVar3 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 3; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        local_8 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
           && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc8 = 0;
          _DAT_123bdbcc = 0;
          _DAT_123bdbd0 = 0;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          FUN_11a8911f(&LAB_11caa4b0);
        }
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar2 = iVar3, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
    } while (iVar2 != param_1 + 0xec);
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_117c5b70 @ 117c5b70 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_117c5b70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11caa820);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x2c));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_117daf50 @ 117daf50 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo"" */

void __fastcall CItemBaseInfo__GetManagers_117daf50(undefined **param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **local_8;
  
  puVar6 = (undefined4 *)param_1[0x24];
  local_8 = param_1;
  if (puVar6 != (undefined4 *)param_1[0x25]) {
    do {
      iVar3 = (**(code **)(*(int *)*puVar6 + 4))();
      if (iVar3 == 0xe) {
        local_8 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        if (((*DAT_123bdba0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar3 == 0))
           && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc8 = 0;
          _DAT_123bdbcc = 0;
          _DAT_123bdbd0 = 0;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          FUN_11a8911f(&LAB_11cab010);
        }
        local_8 = &PTR_FUN_11da54a8;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined4 *)param_1[0x25]);
  }
  puVar1 = param_1[0x16];
  if (0 < (int)puVar1) {
    local_8 = &PTR_FUN_11dceff0;
    if ((DAT_123c7478 & 1) == 0) {
      DAT_123c7478 = DAT_123c7478 | 1;
      FUN_102500e0("CCommodityGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c72580);
    }
    puVar4 = (undefined *)*DAT_123c747c;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_8,"CCommodityGroupInfo",0),
       puVar4 == (undefined *)0x0)) {
      if ((DAT_123c74a0 & 1) == 0) {
        DAT_123c74a0 = DAT_123c74a0 | 1;
        FUN_10848a10();
        FUN_11a8911f(&LAB_11caafb0);
      }
      puVar4 = &DAT_123c74a4;
    }
    if ((((puVar1 != (undefined *)0xffffffff) &&
         ((puVar1 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)))) &&
        (iVar3 = *(int *)(puVar4 + 0x28), iVar3 != 0)) &&
       ((iVar5 = (int)puVar1 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
        (iVar5 < *(int *)(puVar4 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar3) * 4);
      if (iVar2 != 0) {
        param_1[0x2a] = *(undefined **)(iVar2 + (iVar5 % iVar3) * 4);
        return;
      }
    }
    param_1[0x2a] = (undefined *)0x0;
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_118401b0 @ 118401b0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void __fastcall CItemBaseInfo__GetManagers_118401b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined **local_8;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3 != 0) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cacf50);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3 != 0) {
    do {
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        _DAT_123be370 = &DAT_123be360;
        DAT_123be374 = &DAT_123be360;
        DAT_123be360 = 0;
        FUN_100d9260("CBuffInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be35c = (int *)FUN_100dfd90(DAT_123be374);
        if (DAT_123be35c == (int *)0x0) {
          DAT_123be35c = (int *)FUN_100dde50(4);
          *DAT_123be35c = 0;
          FUN_100dfdc0(DAT_123be374,DAT_123be35c);
        }
        FUN_11a8911f(&LAB_11c6f220);
      }
      if (((*DAT_123be35c == 0) && (iVar1 = FUN_11679e10(&local_8,"CBuffInfo",0), iVar1 == 0)) &&
         ((DAT_123be308 & 1) == 0)) {
        DAT_123be2d4 = 0;
        DAT_123be2e4 = 0;
        DAT_123be2e8 = 0;
        _DAT_123be2ec = 0;
        DAT_123be2f0 = 0;
        DAT_123be308 = DAT_123be308 | 1;
        DAT_123be2d8 = 0;
        _DAT_123be2dc = 0;
        _DAT_123be2e0 = 0;
        _DAT_123be2d0 = &PTR_FUN_11dbea14;
        DAT_123be2f4 = _DAT_11de9ae0;
        DAT_123be2f8 = _UNK_11de9ae4;
        uRam123be2fc = _UNK_11de9ae8;
        DAT_123be300 = _UNK_11de9aec;
        DAT_123be304 = 1;
        FUN_11a8911f(&LAB_11cacef0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3));
  }
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3 != 0) {
    uVar3 = 1;
    do {
      if (uVar3 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3)) {
        uVar2 = uVar3;
        do {
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3));
      }
      bVar4 = uVar3 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3);
      uVar3 = uVar3 + 1;
    } while (bVar4);
  }
  if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3 != 0) {
    uVar3 = 1;
    do {
      if (uVar3 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3)) {
        uVar2 = uVar3;
        do {
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3));
      }
      bVar4 = uVar3 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3);
      uVar3 = uVar3 + 1;
    } while (bVar4);
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11854250 @ 11854250 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11854250(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined **local_c;
  uint local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0x18 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      uVar2 = 0;
      if (*(int *)(iVar3 + 0x10 + *(int *)(param_1 + 0x18)) -
          *(int *)(iVar3 + 0xc + *(int *)(param_1 + 0x18)) >> 2 != 0) {
        do {
          local_c = &PTR_FUN_11da5518;
          if ((DAT_123bdbfc & 1) == 0) {
            DAT_123bdbfc = DAT_123bdbfc | 1;
            FUN_102500e0("CItemBaseInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6e610);
          }
          if (((*DAT_123bdba0 == 0) &&
              (iVar1 = FUN_11679e10(&local_c,"CItemBaseInfo",0), iVar1 == 0)) &&
             ((DAT_123bdc00 & 1) == 0)) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc8 = 0;
            _DAT_123bdbcc = 0;
            _DAT_123bdbd0 = 0;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            FUN_11a8911f(&LAB_11cad4f0);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)(*(int *)(iVar3 + 0x10 + *(int *)(param_1 + 0x18)) -
                                *(int *)(iVar3 + 0xc + *(int *)(param_1 + 0x18)) >> 2));
      }
      iVar3 = iVar3 + 0x18;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x18));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_118543b0 @ 118543b0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_118543b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int local_10;
  uint local_c;
  undefined **local_8;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 4 != 0) {
    local_10 = 0;
    while (piVar4 = (int *)(*(int *)(param_1 + 0x14) + 4 + local_10), *piVar4 != piVar4[1]) {
      uVar6 = 0;
      if (piVar4[1] - *piVar4 >> 2 != 0) {
        do {
          local_8 = &PTR_FUN_11da5518;
          iVar5 = *(int *)(*piVar4 + uVar6 * 4);
          if ((DAT_123bdbfc & 1) == 0) {
            DAT_123bdbfc = DAT_123bdbfc | 1;
            FUN_102500e0("CItemBaseInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6e610);
          }
          puVar3 = (undefined4 *)*DAT_123bdba0;
          if ((puVar3 == (undefined4 *)0x0) &&
             (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0),
             puVar3 == (undefined4 *)0x0)) {
            if ((DAT_123bdc00 & 1) == 0) {
              DAT_123bdbc4 = 0;
              DAT_123bdbd4 = 0;
              DAT_123bdbd8 = 0;
              _DAT_123bdbdc = 0;
              DAT_123bdbe0 = 0;
              DAT_123bdc00 = DAT_123bdc00 | 1;
              DAT_123bdbc0 = &PTR_FUN_11da5520;
              DAT_123bdbe4 = _DAT_11de9ae0;
              DAT_123bdbe8 = _UNK_11de9ae4;
              uRam123bdbec = _UNK_11de9ae8;
              DAT_123bdbf0 = _UNK_11de9aec;
              DAT_123bdbf4 = 1;
              DAT_123bdbc8 = puVar3;
              _DAT_123bdbcc = puVar3;
              _DAT_123bdbd0 = puVar3;
              FUN_11a8911f(&LAB_11cad4f0);
            }
            puVar3 = &DAT_123bdbc0;
          }
          if (iVar5 == -1) {
            return;
          }
          if ((iVar5 == 0) && (puVar3[0xc] != 0)) {
            return;
          }
          iVar1 = puVar3[10];
          if (iVar1 == 0) {
            return;
          }
          iVar5 = iVar5 - puVar3[0xc];
          if (iVar5 < 0) {
            return;
          }
          if ((int)puVar3[9] <= iVar5) {
            return;
          }
          iVar2 = *(int *)(puVar3[8] + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) {
            return;
          }
          iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4);
          if (iVar5 == 0) {
            return;
          }
          if (*(char *)(iVar5 + 0xc4) == '\0') {
            return;
          }
          if (*(int *)(iVar5 + 0x34) != 2) {
            return;
          }
          uVar6 = uVar6 + 1;
          piVar4 = (int *)(*(int *)(param_1 + 0x14) + 4 + local_10);
        } while (uVar6 < (uint)(piVar4[1] - *piVar4 >> 2));
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x10;
      if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 4) <= local_c) {
        return;
      }
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_1187f880 @ 1187f880 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: fopen, fprintf, fclose
// strings:
//   ""tbItemDataConf.txt""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""%d\t%s\n""
//   ""tbInstanceNameConf.txt""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""tbGiftBagNameConf.txt""
//   ""CGiftBagGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: fopen, fprintf, fclose
   strings:
     ""tbItemDataConf.txt""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""%d\t%s\n""
     ""tbInstanceNameConf.txt""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""tbGiftBagNameConf.txt""
     ""CGiftBagGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CItemBaseInfo__GetManagers_1187f880(undefined **param_1)

{
  int iVar1;
  FILE *pFVar2;
  undefined ***pppuVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  
  if (param_1 == (undefined **)0x0) {
    FUN_1188b720();
  }
  pFVar2 = fopen("tbItemDataConf.txt","wt");
  iVar10 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    pppuVar3 = (undefined ***)*DAT_123bdba0;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CItemBaseInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          DAT_123bdbc8 = (int *)pppuVar3;
          _DAT_123bdbcc = pppuVar3;
          _DAT_123bdbd0 = pppuVar3;
          FUN_11a8911f(&LAB_11cae550);
        }
        pppuVar3 = &DAT_123bdbc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar4 = (*(code *)(*pppuVar3)[10])();
    if (iVar4 <= iVar10) break;
    param_1 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    pppuVar3 = (undefined ***)*DAT_123bdba0;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CItemBaseInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_123bdc00 & 1) == 0) {
          DAT_123bdbc4 = 0;
          DAT_123bdbd4 = 0;
          DAT_123bdbd8 = 0;
          _DAT_123bdbdc = 0;
          DAT_123bdbe0 = 0;
          DAT_123bdc00 = DAT_123bdc00 | 1;
          DAT_123bdbc0 = &PTR_FUN_11da5520;
          DAT_123bdbe4 = _DAT_11de9ae0;
          DAT_123bdbe8 = _UNK_11de9ae4;
          uRam123bdbec = _UNK_11de9ae8;
          DAT_123bdbf0 = _UNK_11de9aec;
          DAT_123bdbf4 = 1;
          DAT_123bdbc8 = (int *)pppuVar3;
          _DAT_123bdbcc = pppuVar3;
          _DAT_123bdbd0 = pppuVar3;
          FUN_11a8911f(&LAB_11cae550);
        }
        pppuVar3 = &DAT_123bdbc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar10 < 0) || ((int)pppuVar3[6] - (int)pppuVar3[5] >> 2 <= iVar10)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)pppuVar3[5][iVar10];
    }
    iVar4 = (**(code **)(*piVar9 + 0x18))();
    if (0 < iVar4) {
      puVar8 = &DAT_11d9d32b;
      if ((undefined1 *)piVar9[5] != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)piVar9[5];
      }
      uVar5 = (**(code **)(*piVar9 + 0x18))(puVar8);
      fprintf(pFVar2,"%d\t%s\n",uVar5);
    }
    iVar10 = iVar10 + 1;
  }
  fclose(pFVar2);
  pFVar2 = fopen("tbInstanceNameConf.txt","wt");
  iVar10 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dc893c;
    if ((DAT_123bec98 & 1) == 0) {
      DAT_123bec98 = DAT_123bec98 | 1;
      FUN_102500e0("CMHLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70cf0);
    }
    pppuVar3 = (undefined ***)*DAT_123bec7c;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CMHLevelInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_123bec74 & 1) == 0) {
          DAT_123beca0 = 0;
          DAT_123becb0 = 0;
          DAT_123becb4 = 0;
          _DAT_123becb8 = 0;
          DAT_123becbc = 0;
          DAT_123bec74 = DAT_123bec74 | 1;
          DAT_123bec9c = &PTR_FUN_11dc8960;
          DAT_123becc0 = _DAT_11de9ae0;
          DAT_123becc4 = _UNK_11de9ae4;
          uRam123becc8 = _UNK_11de9ae8;
          DAT_123beccc = _UNK_11de9aec;
          DAT_123becd0 = 1;
          DAT_123beca4 = (int *)pppuVar3;
          _DAT_123beca8 = pppuVar3;
          _DAT_123becac = pppuVar3;
          FUN_11a8911f(&LAB_11cae5b0);
        }
        pppuVar3 = &DAT_123bec9c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar4 = (*(code *)(*pppuVar3)[10])();
    if (iVar4 <= iVar10) break;
    param_1 = &PTR_FUN_11dc893c;
    if ((DAT_123bec98 & 1) == 0) {
      DAT_123bec98 = DAT_123bec98 | 1;
      FUN_102500e0("CMHLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70cf0);
    }
    pppuVar3 = (undefined ***)*DAT_123bec7c;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CMHLevelInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_123bec74 & 1) == 0) {
          DAT_123beca0 = 0;
          DAT_123becb0 = 0;
          DAT_123becb4 = 0;
          _DAT_123becb8 = 0;
          DAT_123becbc = 0;
          DAT_123bec74 = DAT_123bec74 | 1;
          DAT_123bec9c = &PTR_FUN_11dc8960;
          DAT_123becc0 = _DAT_11de9ae0;
          DAT_123becc4 = _UNK_11de9ae4;
          uRam123becc8 = _UNK_11de9ae8;
          DAT_123beccc = _UNK_11de9aec;
          DAT_123becd0 = 1;
          DAT_123beca4 = (int *)pppuVar3;
          _DAT_123beca8 = pppuVar3;
          _DAT_123becac = pppuVar3;
          FUN_11a8911f(&LAB_11cae5b0);
        }
        pppuVar3 = &DAT_123bec9c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar10 < 0) || ((int)pppuVar3[6] - (int)pppuVar3[5] >> 2 <= iVar10)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)pppuVar3[5][iVar10];
    }
    iVar4 = (**(code **)(*piVar9 + 0x18))();
    if (0 < iVar4) {
      puVar8 = &DAT_11d9d32b;
      if ((undefined1 *)piVar9[7] != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)piVar9[7];
      }
      uVar5 = (**(code **)(*piVar9 + 0x18))(puVar8);
      fprintf(pFVar2,"%d\t%s\n",uVar5);
    }
    iVar10 = iVar10 + 1;
  }
  fclose(pFVar2);
  pFVar2 = fopen("tbGiftBagNameConf.txt","wt");
  iVar10 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d2bd3c;
    if ((DAT_122de87c & 1) == 0) {
      DAT_122de87c = DAT_122de87c | 1;
      _DAT_122de874 = &DAT_122de864;
      DAT_122de878 = &DAT_122de864;
      DAT_122de864 = 0;
      FUN_100d9260("CGiftBagGroupInfo::GetManagers","");
      FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
      DAT_122de860 = (undefined4 *)FUN_100dfd90(DAT_122de878);
      if (DAT_122de860 == (undefined4 *)0x0) {
        DAT_122de860 = (undefined4 *)FUN_100dde50(4);
        *DAT_122de860 = 0;
        FUN_100dfdc0(DAT_122de878,DAT_122de860);
      }
      FUN_11a8911f(&LAB_11ca0350);
    }
    pppuVar3 = (undefined ***)*DAT_122de860;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CGiftBagGroupInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_122de8c0 & 1) == 0) {
          DAT_122de88c = 0;
          DAT_122de89c = 0;
          DAT_122de8a0 = 0;
          _DAT_122de8a4 = 0;
          uRam122de8a8 = 0;
          DAT_122de8c0 = DAT_122de8c0 | 1;
          DAT_122de888 = &PTR_FUN_11d2bd78;
          _DAT_122de8ac = _DAT_11de9ae0;
          uRam122de8b0 = _UNK_11de9ae4;
          uRam122de8b4 = _UNK_11de9ae8;
          uRam122de8b8 = _UNK_11de9aec;
          DAT_122de8bc = 1;
          DAT_122de890 = (int *)pppuVar3;
          _DAT_122de894 = pppuVar3;
          _DAT_122de898 = pppuVar3;
          FUN_11a8911f(&LAB_11cae4f0);
        }
        pppuVar3 = &DAT_122de888;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar4 = (*(code *)(*pppuVar3)[10])();
    if (iVar4 <= iVar10) break;
    param_1 = &PTR_FUN_11d2bd3c;
    if ((DAT_122de87c & 1) == 0) {
      DAT_122de87c = DAT_122de87c | 1;
      _DAT_122de874 = &DAT_122de864;
      DAT_122de878 = &DAT_122de864;
      DAT_122de864 = 0;
      FUN_100d9260("CGiftBagGroupInfo::GetManagers","");
      FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
      DAT_122de860 = (undefined4 *)FUN_100dfd90(DAT_122de878);
      if (DAT_122de860 == (undefined4 *)0x0) {
        DAT_122de860 = (undefined4 *)FUN_100dde50(4);
        *DAT_122de860 = 0;
        FUN_100dfdc0(DAT_122de878,DAT_122de860);
      }
      FUN_11a8911f(&LAB_11ca0350);
    }
    pppuVar3 = (undefined ***)*DAT_122de860;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)FUN_11679e10(&param_1,"CGiftBagGroupInfo",0);
      if (pppuVar3 == (undefined ***)0x0) {
        if ((DAT_122de8c0 & 1) == 0) {
          DAT_122de88c = 0;
          DAT_122de89c = 0;
          DAT_122de8a0 = 0;
          _DAT_122de8a4 = 0;
          uRam122de8a8 = 0;
          DAT_122de8c0 = DAT_122de8c0 | 1;
          DAT_122de888 = &PTR_FUN_11d2bd78;
          _DAT_122de8ac = _DAT_11de9ae0;
          uRam122de8b0 = _UNK_11de9ae4;
          uRam122de8b4 = _UNK_11de9ae8;
          uRam122de8b8 = _UNK_11de9aec;
          DAT_122de8bc = 1;
          DAT_122de890 = (int *)pppuVar3;
          _DAT_122de894 = pppuVar3;
          _DAT_122de898 = pppuVar3;
          FUN_11a8911f(&LAB_11cae4f0);
        }
        pppuVar3 = &DAT_122de888;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar10 < 0) || ((int)pppuVar3[6] - (int)pppuVar3[5] >> 2 <= iVar10)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)pppuVar3[5][iVar10];
    }
    if (piVar9[0xb] != 0) {
      puVar8 = *(undefined1 **)(piVar9[0xb] + 8);
      puVar7 = &DAT_11d9d32b;
      if (puVar8 != (undefined1 *)0x0) {
        puVar7 = puVar8;
      }
      uVar5 = (**(code **)(*piVar9 + 0x18))(puVar7);
      fprintf(pFVar2,"%d\t%s\n",uVar5);
    }
    iVar10 = iVar10 + 1;
  }
  fclose(pFVar2);
  pFVar2 = fopen("tbGiftNameConf.txt","wt");
  iVar10 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dd260c;
    if ((DAT_123c77a0 & 1) == 0) {
      DAT_123c77a0 = DAT_123c77a0 | 1;
      _DAT_123c77b8 = &DAT_123c77a8;
      DAT_123c77bc = &DAT_123c77a8;
      DAT_123c77a8 = 0;
      FUN_100d9260("CTalentInfo::GetManagers","");
      FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
      DAT_123c77a4 = (undefined4 *)FUN_100dfd90(DAT_123c77bc);
      if (DAT_123c77a4 == (undefined4 *)0x0) {
        DAT_123c77a4 = (undefined4 *)FUN_100dde50(4);
        *DAT_123c77a4 = 0;
        FUN_100dfdc0(DAT_123c77bc,DAT_123c77a4);
      }
      FUN_11a8911f(&LAB_11c73c30);
    }
    piVar9 = (int *)*DAT_123c77a4;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)FUN_11679e10(&param_1,"CTalentInfo",0);
      if (piVar9 == (int *)0x0) {
        if ((DAT_123c77f0 & 1) == 0) {
          DAT_123c77f0 = DAT_123c77f0 | 1;
          FUN_1087f0c0();
          FUN_11a8911f(&LAB_11cae670);
        }
        piVar9 = &DAT_123c77f4;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar9 + 0x28))();
    if (iVar4 <= iVar10) break;
    iVar4 = FUN_1087e7d0(0,"CTalentInfo",0);
    if (((-1 < iVar10) && (iVar10 < *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 2)) &&
       (piVar9 = *(int **)(*(int *)(iVar4 + 0x14) + iVar10 * 4), piVar9 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar9 + 0x18))();
      if (0 < iVar4) {
        puVar8 = &DAT_11d9d32b;
        if ((undefined1 *)piVar9[0x1e] != (undefined1 *)0x0) {
          puVar8 = (undefined1 *)piVar9[0x1e];
        }
        uVar5 = (**(code **)(*piVar9 + 0x18))(puVar8);
        fprintf(pFVar2,"%d\t%s\n",uVar5);
      }
    }
    iVar10 = iVar10 + 1;
  }
  fclose(pFVar2);
  pFVar2 = fopen("tbMartConf.txt","wt");
  iVar4 = 0;
  piVar9 = (int *)FUN_104fc670(0,"CMartGoodsInfo",0);
  iVar10 = (**(code **)(*piVar9 + 0x28))();
  if (0 < iVar10) {
    do {
      iVar10 = FUN_104fc670(0,"CMartGoodsInfo",0);
      if ((iVar4 != -1) &&
         ((((iVar4 != 0 || (*(int *)(iVar10 + 0x30) == 0)) &&
           (iVar1 = *(int *)(iVar10 + 0x28), iVar1 != 0)) &&
          ((iVar6 = iVar4 - *(int *)(iVar10 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar10 + 0x24))
           ))))) {
        iVar10 = *(int *)(*(int *)(iVar10 + 0x20) + (iVar6 / iVar1) * 4);
        if ((iVar10 != 0) &&
           (piVar9 = *(int **)(iVar10 + (iVar6 % iVar1) * 4), piVar9 != (int *)0x0)) {
          iVar10 = (**(code **)(*piVar9 + 0x18))();
          if (0 < iVar10) {
            puVar8 = &DAT_11d9d32b;
            if ((undefined1 *)piVar9[6] != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)piVar9[6];
            }
            uVar5 = (**(code **)(*piVar9 + 0x18))(puVar8);
            fprintf(pFVar2,"%d\t%s\n",uVar5);
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar9 = (int *)FUN_104fc670(0,"CMartGoodsInfo",0);
      iVar10 = (**(code **)(*piVar9 + 0x28))();
    } while (iVar4 < iVar10);
  }
  fclose(pFVar2);
  return;
}



/* --- CItemBaseInfo::GetManagers_119fa060 @ 119fa060 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_119fa060(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined **local_8;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x14 + iVar1 != iVar1) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5740);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x14));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a011c0 @ 11a011c0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo"" */

undefined * CItemBaseInfo__GetManagers_11a011c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0)) &&
     ((DAT_123bdc00 & 1) == 0)) {
    DAT_123bdbc4 = 0;
    DAT_123bdbd4 = 0;
    DAT_123bdbd8 = 0;
    _DAT_123bdbdc = 0;
    DAT_123bdbe0 = 0;
    DAT_123bdc00 = DAT_123bdc00 | 1;
    DAT_123bdbc8 = 0;
    _DAT_123bdbcc = 0;
    _DAT_123bdbd0 = 0;
    DAT_123bdbc0 = &PTR_FUN_11da5520;
    DAT_123bdbe4 = _DAT_11de9ae0;
    DAT_123bdbe8 = _UNK_11de9ae4;
    uRam123bdbec = _UNK_11de9ae8;
    DAT_123bdbf0 = _UNK_11de9aec;
    DAT_123bdbf4 = 1;
    FUN_11a8911f(&LAB_11cb5980);
  }
  local_8 = &PTR_FUN_11dceff0;
  if ((DAT_123c7478 & 1) == 0) {
    DAT_123c7478 = DAT_123c7478 | 1;
    FUN_102500e0("CCommodityGroupInfo::GetManagers");
    FUN_11a8911f(&LAB_11c72580);
  }
  puVar2 = (undefined *)*DAT_123c747c;
  if ((puVar2 == (undefined *)0x0) &&
     (puVar2 = (undefined *)FUN_11679e10(&local_8,"CCommodityGroupInfo",0),
     puVar2 == (undefined *)0x0)) {
    if ((DAT_123c74a0 & 1) == 0) {
      DAT_123c74a8 = 0;
      DAT_123c74b8 = 0;
      DAT_123c74bc = 0;
      _DAT_123c74c0 = 0;
      DAT_123c74c4 = 0;
      DAT_123c74a0 = DAT_123c74a0 | 1;
      DAT_123c74ac = 0;
      _DAT_123c74b0 = 0;
      _DAT_123c74b4 = 0;
      _DAT_123c74a4 = &PTR_FUN_11dceff8;
      DAT_123c74c8 = _DAT_11de9ae0;
      DAT_123c74cc = _UNK_11de9ae4;
      uRam123c74d0 = _UNK_11de9ae8;
      DAT_123c74d4 = _UNK_11de9aec;
      DAT_123c74d8 = 1;
      FUN_11a8911f(&LAB_11cb5920);
    }
    puVar2 = &DAT_123c74a4;
  }
  return puVar2;
}



/* --- CItemBaseInfo::GetManagers_11a02fc0 @ 11a02fc0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a02fc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 != *(int *)(param_1 + 100)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb59e0);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 100));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a054b0 @ 11a054b0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a054b0(int param_1)

{
  int iVar1;
  undefined **local_8;
  
  if (*(int *)(param_1 + 0x18) == 3) {
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0)) &&
       ((DAT_123bdc00 & 1) == 0)) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc8 = 0;
      _DAT_123bdbcc = 0;
      _DAT_123bdbd0 = 0;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      FUN_11a8911f(&LAB_11cb5a40);
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a07860 @ 11a07860 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a07860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  while (iVar3 != param_1 + 0x14) {
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      _DAT_123bdbb4 = &DAT_123bdba4;
      DAT_123bdbb8 = &DAT_123bdba4;
      DAT_123bdba4 = 0;
      FUN_100d9260("CItemBaseInfo::GetManagers","");
      FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
      DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
      if (DAT_123bdba0 == (int *)0x0) {
        DAT_123bdba0 = (int *)FUN_100dde50(4);
        *DAT_123bdba0 = 0;
        FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
      }
      FUN_11a8911f(&LAB_11c6e610);
    }
    if (((*DAT_123bdba0 == 0) && (iVar2 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar2 == 0)) &&
       ((DAT_123bdc00 & 1) == 0)) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc8 = 0;
      _DAT_123bdbcc = 0;
      _DAT_123bdbd0 = 0;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      FUN_11a8911f(&LAB_11cb5ce0);
    }
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      for (iVar1 = *(int *)(iVar2 + 8); iVar3 = iVar2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        iVar2 = iVar1;
      }
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a0c290 @ 11a0c290 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a0c290(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != *(int *)(param_1 + 0x20)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5e20);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x20));
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != *(int *)(param_1 + 0x30)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5e20);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x30));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a0cce0 @ 11a0cce0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a0cce0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != *(int *)(param_1 + 0x20)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5f00);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x20));
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != *(int *)(param_1 + 0x30)) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5f00);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x30));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a185c0 @ 11a185c0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a185c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined **local_8;
  
  piVar2 = (int *)(param_1 + 0x14);
  iVar3 = 5;
  do {
    if (*piVar2 != 0) {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (*DAT_123bdba0 == 0) {
        iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0);
        if ((iVar1 == 0) && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdc00 = DAT_123bdc00 | 1;
          FUN_102555a0();
          FUN_11a8911f(&LAB_11cb6070);
        }
      }
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* --- CItemBaseInfo::GetManagers_11a1a130 @ 11a1a130 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a1a130(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  local_8 = param_1;
  FUN_1051c550(0,"CPetSkillInfo",0);
  if (param_1[0x12] != (undefined *)0x0) {
    FUN_1051c550(0,"CPetSkillInfo",0);
  }
  param_1 = param_1 + 0xc;
  iVar2 = 3;
  do {
    if (*param_1 != (undefined *)0x0) {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (*DAT_123bdba0 == 0) {
        iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0);
        if ((iVar1 == 0) && ((DAT_123bdc00 & 1) == 0)) {
          DAT_123bdc00 = DAT_123bdc00 | 1;
          FUN_102555a0();
          FUN_11a8911f(&LAB_11cb61f0);
        }
      }
    }
    param_1 = param_1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* --- CItemBaseInfo::GetManagers_11a45200 @ 11a45200 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CNpcSaleInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CNpcSaleInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * __fastcall CItemBaseInfo__GetManagers_11a45200(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined **local_8;
  
  local_8 = param_1;
  iVar2 = FUN_1053af40(0,"CNpcSaleInfo",0);
  iVar1 = *(int *)(iVar2 + 0x28);
  if (((iVar1 != 0) && (iVar3 = 0x2c - *(int *)(iVar2 + 0x30), -1 < iVar3)) &&
     (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar3 % iVar1) * 4) != 0)) {
      uVar4 = (**(code **)(*param_1 + 0x18))();
      FUN_117da950(uVar4);
    }
  }
  local_8 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar5 = (undefined4 *)*DAT_123bdba0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0);
    if (puVar5 == (undefined4 *)0x0) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb6b10);
      }
      puVar5 = &DAT_123bdbc0;
    }
  }
  return puVar5;
}



/* --- CItemBaseInfo::GetManagers_11a4c3f0 @ 11a4c3f0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// calls: CFinalGuildMatchRewardInfo::GetManagers
// strings:
//   ""CFinalGuildMatchRewardInfo""
//   ""CGuildMatchInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   calls: CFinalGuildMatchRewardInfo::GetManagers
   strings:
     ""CFinalGuildMatchRewardInfo""
     ""CGuildMatchInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a4c3f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  undefined **local_8;
  
  piVar2 = (int *)CFinalGuildMatchRewardInfo__GetManagers(0,"CFinalGuildMatchRewardInfo",0);
  (**(code **)(*piVar2 + 0x28))();
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = FUN_109445a0(0,"CGuildMatchInfo",0);
  if ((iVar4 != -1) &&
     ((((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
      ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar1) * 4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar4 % iVar1) * 4) != 0)) {
      FUN_1171ca60();
      local_c = 0;
      if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 4 != 0) {
        do {
          local_8 = &PTR_FUN_11da5518;
          if ((DAT_123bdbfc & 1) == 0) {
            DAT_123bdbfc = DAT_123bdbfc | 1;
            FUN_102500e0("CItemBaseInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6e610);
          }
          if (((*DAT_123bdba0 == 0) &&
              (iVar4 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar4 == 0)) &&
             ((DAT_123bdc00 & 1) == 0)) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc8 = 0;
            _DAT_123bdbcc = 0;
            _DAT_123bdbd0 = 0;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            FUN_11a8911f(&LAB_11cb6ed0);
          }
          local_c = local_c + 1;
        } while (local_c < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 4));
      }
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a4c5a0 @ 11a4c5a0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a4c5a0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined **local_8;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 4 != 0) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb6ed0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 4));
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a61130 @ 11a61130 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CItemBaseInfo__GetManagers_11a61130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  while (iVar3 != param_1 + 0x14) {
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    if (((*DAT_123bdba0 == 0) && (iVar2 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar2 == 0)) &&
       ((DAT_123bdc00 & 1) == 0)) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc8 = 0;
      _DAT_123bdbcc = 0;
      _DAT_123bdbd0 = 0;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      FUN_11a8911f(&LAB_11cb74f0);
    }
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      for (iVar1 = *(int *)(iVar2 + 8); iVar3 = iVar2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        iVar2 = iVar1;
      }
    }
  }
  return;
}



/* --- CItemBaseInfo::GetManagers_11a78660 @ 11a78660 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * __fastcall CItemBaseInfo__GetManagers_11a78660(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (((puVar1 == (undefined4 *)0x2) || ((3 < (int)puVar1 && ((int)puVar1 < 6)))) &&
     (0 < *(int *)(param_1 + 0x38))) {
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    puVar1 = (undefined4 *)*DAT_123bdba0;
    if ((puVar1 == (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0), puVar1 == (undefined4 *)0x0
       )) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb7970);
      }
      puVar1 = &DAT_123bdbc0;
    }
  }
  return puVar1;
}



/* --- CItemBaseInfo::GetManagers_11a82370 @ 11a82370 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""
//   ""CHunterStarStatInfo::GetManagers""
//   ""CHunterStarStatInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo""
     ""CHunterStarStatInfo::GetManagers""
     ""CHunterStarStatInfo"" */

undefined4 * __thiscall CItemBaseInfo__GetManagers_11a82370(int param_1,undefined **param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  CAchieveLibInfo__GetManagers_11a82540(param_2);
  if (0 < *(int *)(param_1 + 0x28)) {
    param_2 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&param_2,"CItemBaseInfo",0), iVar1 == 0)) &&
       ((DAT_123bdc00 & 1) == 0)) {
      DAT_123bdbc4 = 0;
      DAT_123bdbd4 = 0;
      DAT_123bdbd8 = 0;
      _DAT_123bdbdc = 0;
      DAT_123bdbe0 = 0;
      DAT_123bdc00 = DAT_123bdc00 | 1;
      DAT_123bdbc8 = 0;
      _DAT_123bdbcc = 0;
      _DAT_123bdbd0 = 0;
      DAT_123bdbc0 = &PTR_FUN_11da5520;
      DAT_123bdbe4 = _DAT_11de9ae0;
      DAT_123bdbe8 = _UNK_11de9ae4;
      uRam123bdbec = _UNK_11de9ae8;
      DAT_123bdbf0 = _UNK_11de9aec;
      DAT_123bdbf4 = 1;
      FUN_11a8911f(&LAB_11cb7c70);
    }
  }
  param_2 = &PTR_FUN_11d2ac20;
  if ((DAT_122de680 & 1) == 0) {
    DAT_122de680 = DAT_122de680 | 1;
    FUN_102500e0("CHunterStarStatInfo::GetManagers");
    FUN_11a8911f(&LAB_11c9f6a0);
  }
  puVar2 = (undefined4 *)*DAT_122de664;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(&param_2,"CHunterStarStatInfo",0),
     puVar2 == (undefined4 *)0x0)) {
    if ((DAT_122de6c4 & 1) == 0) {
      DAT_122de690 = 0;
      DAT_122de6a0 = 0;
      DAT_122de6a4 = 0;
      _DAT_122de6a8 = 0;
      DAT_122de6ac = 0;
      DAT_122de6c4 = DAT_122de6c4 | 1;
      DAT_122de694 = 0;
      _DAT_122de698 = 0;
      _DAT_122de69c = 0;
      DAT_122de68c = &PTR_FUN_11d2ac60;
      DAT_122de6b0 = _DAT_11de9ae0;
      DAT_122de6b4 = _UNK_11de9ae4;
      uRam122de6b8 = _UNK_11de9ae8;
      DAT_122de6bc = _UNK_11de9aec;
      DAT_122de6c0 = 1;
      FUN_11a8911f(&LAB_11cb7c10);
    }
    puVar2 = &DAT_122de68c;
  }
  return puVar2;
}



/* --- CItemBaseInfo::GetManagers_11a87b20 @ 11a87b20 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * CItemBaseInfo__GetManagers_11a87b20(void)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar1 = (undefined4 *)*DAT_123bdba0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb7cd0);
      }
      puVar1 = &DAT_123bdbc0;
    }
  }
  return puVar1;
}



/* --- CItemBaseInfo::GetManagers_11a880c0 @ 11a880c0 --- */
// [RE-AUTO c3]
// id: CItemBaseInfo::GetManagers
// strings:
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBaseInfo::GetManagers
   strings:
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * CItemBaseInfo__GetManagers_11a880c0(void)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11da5518;
  if ((DAT_123bdbfc & 1) == 0) {
    DAT_123bdbfc = DAT_123bdbfc | 1;
    FUN_102500e0("CItemBaseInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e610);
  }
  puVar1 = (undefined4 *)*DAT_123bdba0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bdc00 & 1) == 0) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb7d30);
      }
      puVar1 = &DAT_123bdbc0;
    }
  }
  return puVar1;
}



