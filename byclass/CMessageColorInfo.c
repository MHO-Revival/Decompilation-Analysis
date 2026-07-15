// ===== class CMessageColorInfo  (4 recovered methods) =====

/* --- CMessageColorInfo::GetManagers @ 118dc0f0 --- */
// [RE-AUTO c3]
// id: CMessageColorInfo::GetManagers
// strings:
//   ""CMessageColorInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMessageColorInfo::GetManagers
   strings:
     ""CMessageColorInfo::GetManagers"" */

undefined * CMessageColorInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5af10;
  if (param_3 == 0) {
    if ((DAT_1239d9fc & 1) == 0) {
      DAT_1239d9fc = DAT_1239d9fc | 1;
      FUN_102500e0("CMessageColorInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb04b0);
    }
    if ((undefined *)*DAT_1239d9e0 != (undefined *)0x0) {
      return (undefined *)*DAT_1239d9e0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239dc44 & 1) == 0) {
      DAT_1239dc44 = DAT_1239dc44 | 1;
      FUN_118dd030();
      FUN_11a8911f(&LAB_11cb0330);
    }
    puVar1 = &DAT_1239dc0c;
  }
  return puVar1;
}



/* --- CMessageColorInfo::GetManagers_118e0720 @ 118e0720 --- */
// [RE-AUTO c3]
// id: CMessageColorInfo::GetManagers
// strings:
//   ""CMessageColorInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMessageColorInfo::GetManagers
   strings:
     ""CMessageColorInfo::GetManagers"" */

undefined4 CMessageColorInfo__GetManagers_118e0720(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239d9fc & 1) == 0) {
      DAT_1239d9fc = DAT_1239d9fc | 1;
      FUN_102500e0("CMessageColorInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb04b0);
    }
    return *DAT_1239d9e0;
  }
  return 0;
}



/* --- CMessageColorInfo::GetManagers_118e1560 @ 118e1560 --- */
// [RE-AUTO c3]
// id: CMessageColorInfo::GetManagers
// calls: memcpy
// strings:
//   ""CMessageColorInfo::GetManagers""
//   ""CMessageColorInfo""
//   ""CMessageParmDescInfo::GetManagers""
//   ""CMessageParmDescInfo""
//   ""mh_sharemem_addrinfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMessageColorInfo::GetManagers
   calls: memcpy
   strings:
     ""CMessageColorInfo::GetManagers""
     ""CMessageColorInfo""
     ""CMessageParmDescInfo::GetManagers""
     ""CMessageParmDescInfo""
     ""mh_sharemem_addrinfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CMessageColorInfo__GetManagers_118e1560(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int *piVar7;
  void *pvVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined **ppuVar14;
  int iVar15;
  uint uVar16;
  size_t _Size;
  bool bVar17;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined **local_44;
  undefined **local_40;
  char local_39 [17];
  byte *local_28;
  byte *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  ppuVar14 = (undefined **)0x0;
  local_4c = param_1;
  local_44 = (undefined **)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2);
  if (local_44 != (undefined **)0x0) {
    do {
      local_40 = &PTR_FUN_11d5af10;
      iVar15 = *(int *)(*(int *)(local_4c + 0x3c) + (int)ppuVar14 * 4);
      if ((DAT_1239d9fc & 1) == 0) {
        DAT_1239d9fc = DAT_1239d9fc | 1;
        FUN_102500e0("CMessageColorInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb04b0);
      }
      puVar6 = (undefined *)*DAT_1239d9e0;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_40,"CMessageColorInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_1239dc44 & 1) == 0) {
          DAT_1239dc10 = 0;
          DAT_1239dc20 = 0;
          uRam1239dc24 = 0;
          _DAT_1239dc28 = 0;
          DAT_1239dc2c = 0;
          DAT_1239dc44 = DAT_1239dc44 | 1;
          _DAT_1239dc0c = &PTR_FUN_11d5af68;
          DAT_1239dc30 = _DAT_11de9ae0;
          DAT_1239dc34 = _UNK_11de9ae4;
          uRam1239dc38 = _UNK_11de9ae8;
          DAT_1239dc3c = _UNK_11de9aec;
          DAT_1239dc40 = 1;
          DAT_1239dc14 = puVar6;
          _DAT_1239dc18 = puVar6;
          _DAT_1239dc1c = puVar6;
          FUN_11a8911f(&LAB_11cb0330);
        }
        puVar6 = &DAT_1239dc0c;
      }
      local_40 = &PTR_FUN_11da54a8;
      if ((iVar15 == -1) ||
         ((((iVar15 == 0 && (*(int *)(puVar6 + 0x30) != 0)) || (*(int *)(puVar6 + 0x28) == 0)) ||
          ((iVar15 = iVar15 - *(int *)(puVar6 + 0x30), iVar15 < 0 ||
           (*(int *)(puVar6 + 0x24) <= iVar15)))))) {
LAB_118e1694:
        local_48 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar15 / *(int *)(puVar6 + 0x28)) * 4);
        if (iVar3 == 0) goto LAB_118e1694;
        local_48 = *(uint *)(iVar3 + (iVar15 % *(int *)(puVar6 + 0x28)) * 4);
      }
      puVar13 = *(uint **)(param_1 + 0x4c);
      if (puVar13 == *(uint **)(param_1 + 0x50)) {
        FUN_118e2da0(puVar13,&local_48,local_39,1,1);
      }
      else {
        *puVar13 = local_48;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
      }
      ppuVar14 = (undefined **)((int)ppuVar14 + 1);
    } while (ppuVar14 != local_44);
  }
  iVar15 = local_4c;
  local_28 = (byte *)(local_39 + 1);
  local_39[1] = 0;
  local_40 = &PTR_FUN_11da5400;
  local_24 = local_28;
  if ((DAT_123bdb4c & 1) == 0) {
    DAT_123bdb4c = DAT_123bdb4c | 1;
    FUN_102500e0("CMessageParmDescInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e390);
  }
  piVar7 = (int *)*DAT_123bda94;
  if ((piVar7 == (int *)0x0) &&
     (piVar7 = (int *)FUN_11679e10(&local_40,"CMessageParmDescInfo",0), piVar7 == (int *)0x0)) {
    if ((DAT_123bdb54 & 1) == 0) {
      DAT_123bdad0 = 0;
      DAT_123bdae0 = 0;
      DAT_123bdae4 = 0;
      _DAT_123bdae8 = 0;
      DAT_123bdaec = 0;
      DAT_123bdb54 = DAT_123bdb54 | 1;
      DAT_123bdacc = &PTR_FUN_11da53b4;
      DAT_123bdaf0 = _DAT_11de9ae0;
      DAT_123bdaf4 = _UNK_11de9ae4;
      uRam123bdaf8 = _UNK_11de9ae8;
      DAT_123bdafc = _UNK_11de9aec;
      DAT_123bdb00 = 1;
      DAT_123bdad4 = piVar7;
      _DAT_123bdad8 = piVar7;
      _DAT_123bdadc = piVar7;
      FUN_11a8911f(&LAB_11cb03f0);
    }
    piVar7 = (int *)&DAT_123bdacc;
  }
  local_40 = &PTR_FUN_11da54a8;
  local_48 = (**(code **)(*piVar7 + 0x28))();
  ppuVar14 = (undefined **)&DAT_11d9d32b;
  if (*(undefined ***)(iVar15 + 0x20) != (undefined **)0x0) {
    ppuVar14 = *(undefined ***)(iVar15 + 0x20);
  }
  local_10 = local_20;
  ppuVar5 = ppuVar14;
  do {
    local_44 = ppuVar5;
    ppuVar5 = (undefined **)((int)local_44 + 1);
  } while (*(char *)local_44 != '\0');
  _Size = (int)local_44 - (int)ppuVar14;
  uVar1 = _Size + 1;
  local_c = local_10;
  if (uVar1 == 0) {
LAB_118e1b52:
                    /* WARNING: Subroutine does not return */
    FUN_100b73e0();
  }
  if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar1);
  }
  if (local_44 != ppuVar14) {
    pvVar8 = memcpy(local_10,ppuVar14,_Size);
    local_10 = (undefined1 *)(_Size + (int)pvVar8);
  }
  local_39[0] = '\0';
  *local_10 = 0;
  ppuVar14 = (undefined **)FUN_118dfd80(local_20,0,0x7b,0x7d,local_39 + 1);
  uVar1 = local_48;
  local_40 = ppuVar14;
  if (ppuVar14 != (undefined **)0xffffffff) {
    do {
      uVar16 = 0;
      local_40 = ppuVar14;
      if (uVar1 != 0) {
        do {
          local_44 = &PTR_FUN_11da5400;
          if ((DAT_123bdb4c & 1) == 0) {
            DAT_123bdb4c = DAT_123bdb4c | 1;
            _DAT_123bdaa8 = &DAT_123bda98;
            DAT_123bdaac = &DAT_123bda98;
            DAT_123bda98 = 0;
            FUN_100d9260("CMessageParmDescInfo::GetManagers","");
            FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
            DAT_123bda94 = (undefined4 *)FUN_100dfd90(DAT_123bdaac);
            if (DAT_123bda94 == (undefined4 *)0x0) {
              DAT_123bda94 = (undefined4 *)FUN_100dde50(4);
              *DAT_123bda94 = 0;
              FUN_100dfdc0(DAT_123bdaac,DAT_123bda94);
            }
            FUN_11a8911f(&LAB_11c6e390);
          }
          piVar7 = (int *)*DAT_123bda94;
          if ((piVar7 == (int *)0x0) &&
             (piVar7 = (int *)FUN_11679e10(&local_44,"CMessageParmDescInfo",0), piVar7 == (int *)0x0
             )) {
            if ((DAT_123bdb54 & 1) == 0) {
              DAT_123bdad0 = 0;
              DAT_123bdae0 = 0;
              DAT_123bdae4 = 0;
              _DAT_123bdae8 = 0;
              DAT_123bdaec = 0;
              DAT_123bdb54 = DAT_123bdb54 | 1;
              DAT_123bdacc = &PTR_FUN_11da53b4;
              DAT_123bdaf0 = _DAT_11de9ae0;
              DAT_123bdaf4 = _UNK_11de9ae4;
              uRam123bdaf8 = _UNK_11de9ae8;
              DAT_123bdafc = _UNK_11de9aec;
              DAT_123bdb00 = 1;
              DAT_123bdad4 = piVar7;
              _DAT_123bdad8 = piVar7;
              _DAT_123bdadc = piVar7;
              FUN_11a8911f(&LAB_11cb03f0);
            }
            piVar7 = (int *)&DAT_123bdacc;
          }
          local_44 = &PTR_FUN_11da54a8;
          if (((-1 < (int)uVar16) && ((int)uVar16 < piVar7[6] - piVar7[5] >> 2)) &&
             (iVar15 = *(int *)(piVar7[5] + uVar16 * 4), iVar15 != 0)) {
            pbVar4 = *(byte **)(iVar15 + 0x14);
            pbVar9 = &DAT_11d9d32b;
            pbVar12 = local_24;
            if (pbVar4 != (byte *)0x0) {
              pbVar9 = pbVar4;
            }
            do {
              bVar2 = *pbVar12;
              bVar17 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_118e1a10:
                uVar10 = -(uint)bVar17 | 1;
                goto LAB_118e1a15;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar12[1];
              bVar17 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_118e1a10;
              pbVar9 = pbVar9 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar2 != 0);
            uVar10 = 0;
LAB_118e1a15:
            if (uVar10 == 0) {
              ppuVar14 = (undefined **)(local_10 + -(int)local_c);
              local_54 = (int)local_28 - (int)local_24;
              if (ppuVar14 < local_40) {
                    /* WARNING: Subroutine does not return */
                FUN_100e4fb0();
              }
              local_50 = (int)ppuVar14 - (int)local_40;
              puVar13 = &local_50;
              if ((uint)((int)local_28 - (int)local_24) <= (uint)((int)ppuVar14 - (int)local_40)) {
                puVar13 = &local_54;
              }
              if (1 < (*puVar13 - (int)ppuVar14) - 2) {
                if ((&DAT_11d9e0dc < local_c) || (local_10 < &UNK_11d9e0dd)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 1;
                }
                FUN_100e6270(local_c + (int)local_40,local_c + (int)((int)local_40 + *puVar13),
                             &DAT_11d9e0dc,&DAT_11d9e0de,uVar11);
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0xc);
              }
              goto LAB_118e1b52;
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar1);
      }
      ppuVar14 = (undefined **)
                 FUN_118dfd80(local_20,(undefined1 *)((int)ppuVar14 + 1),0x7b,0x7d,local_39 + 1);
    } while (ppuVar14 != (undefined **)0xffffffff);
    local_40 = ppuVar14;
    if (local_39[0] != '\0') {
      FUN_100e5d80(local_c);
    }
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if ((local_24 != (byte *)(local_39 + 1)) && (local_24 != (byte *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  FUN_11a89daa();
  return;
}



/* --- CMessageColorInfo::GetManagers_118e1b70 @ 118e1b70 --- */
// [RE-AUTO c3]
// id: CMessageColorInfo::GetManagers
// calls: memcpy
// strings:
//   ""CMessageColorInfo::GetManagers""
//   ""CMessageColorInfo""
//   ""CMessageParmDescInfo::GetManagers""
//   ""CMessageParmDescInfo""
//   ""mh_sharemem_addrinfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMessageColorInfo::GetManagers
   calls: memcpy
   strings:
     ""CMessageColorInfo::GetManagers""
     ""CMessageColorInfo""
     ""CMessageParmDescInfo::GetManagers""
     ""CMessageParmDescInfo""
     ""mh_sharemem_addrinfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CMessageColorInfo__GetManagers_118e1b70(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int *piVar7;
  void *pvVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined **ppuVar14;
  int iVar15;
  uint uVar16;
  size_t _Size;
  bool bVar17;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined **local_44;
  undefined **local_40;
  char local_39 [17];
  byte *local_28;
  byte *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  ppuVar14 = (undefined **)0x0;
  local_4c = param_1;
  local_44 = (undefined **)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2);
  if (local_44 != (undefined **)0x0) {
    do {
      local_40 = &PTR_FUN_11d5af10;
      iVar15 = *(int *)(*(int *)(local_4c + 0x28) + (int)ppuVar14 * 4);
      if ((DAT_1239d9fc & 1) == 0) {
        DAT_1239d9fc = DAT_1239d9fc | 1;
        FUN_102500e0("CMessageColorInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb04b0);
      }
      puVar6 = (undefined *)*DAT_1239d9e0;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_40,"CMessageColorInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_1239dc44 & 1) == 0) {
          DAT_1239dc10 = 0;
          DAT_1239dc20 = 0;
          uRam1239dc24 = 0;
          _DAT_1239dc28 = 0;
          DAT_1239dc2c = 0;
          DAT_1239dc44 = DAT_1239dc44 | 1;
          _DAT_1239dc0c = &PTR_FUN_11d5af68;
          DAT_1239dc30 = _DAT_11de9ae0;
          DAT_1239dc34 = _UNK_11de9ae4;
          uRam1239dc38 = _UNK_11de9ae8;
          DAT_1239dc3c = _UNK_11de9aec;
          DAT_1239dc40 = 1;
          DAT_1239dc14 = puVar6;
          _DAT_1239dc18 = puVar6;
          _DAT_1239dc1c = puVar6;
          FUN_11a8911f(&LAB_11cb0330);
        }
        puVar6 = &DAT_1239dc0c;
      }
      local_40 = &PTR_FUN_11da54a8;
      if ((iVar15 == -1) ||
         ((((iVar15 == 0 && (*(int *)(puVar6 + 0x30) != 0)) || (*(int *)(puVar6 + 0x28) == 0)) ||
          ((iVar15 = iVar15 - *(int *)(puVar6 + 0x30), iVar15 < 0 ||
           (*(int *)(puVar6 + 0x24) <= iVar15)))))) {
LAB_118e1ca4:
        local_48 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar15 / *(int *)(puVar6 + 0x28)) * 4);
        if (iVar3 == 0) goto LAB_118e1ca4;
        local_48 = *(uint *)(iVar3 + (iVar15 % *(int *)(puVar6 + 0x28)) * 4);
      }
      puVar13 = *(uint **)(param_1 + 0x38);
      if (puVar13 == *(uint **)(param_1 + 0x3c)) {
        FUN_118e2da0(puVar13,&local_48,local_39,1,1);
      }
      else {
        *puVar13 = local_48;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
      }
      ppuVar14 = (undefined **)((int)ppuVar14 + 1);
    } while (ppuVar14 != local_44);
  }
  iVar15 = local_4c;
  local_28 = (byte *)(local_39 + 1);
  local_39[1] = 0;
  local_40 = &PTR_FUN_11da5400;
  local_24 = local_28;
  if ((DAT_123bdb4c & 1) == 0) {
    DAT_123bdb4c = DAT_123bdb4c | 1;
    FUN_102500e0("CMessageParmDescInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6e390);
  }
  piVar7 = (int *)*DAT_123bda94;
  if ((piVar7 == (int *)0x0) &&
     (piVar7 = (int *)FUN_11679e10(&local_40,"CMessageParmDescInfo",0), piVar7 == (int *)0x0)) {
    if ((DAT_123bdb54 & 1) == 0) {
      DAT_123bdad0 = 0;
      DAT_123bdae0 = 0;
      DAT_123bdae4 = 0;
      _DAT_123bdae8 = 0;
      DAT_123bdaec = 0;
      DAT_123bdb54 = DAT_123bdb54 | 1;
      DAT_123bdacc = &PTR_FUN_11da53b4;
      DAT_123bdaf0 = _DAT_11de9ae0;
      DAT_123bdaf4 = _UNK_11de9ae4;
      uRam123bdaf8 = _UNK_11de9ae8;
      DAT_123bdafc = _UNK_11de9aec;
      DAT_123bdb00 = 1;
      DAT_123bdad4 = piVar7;
      _DAT_123bdad8 = piVar7;
      _DAT_123bdadc = piVar7;
      FUN_11a8911f(&LAB_11cb03f0);
    }
    piVar7 = (int *)&DAT_123bdacc;
  }
  local_40 = &PTR_FUN_11da54a8;
  local_48 = (**(code **)(*piVar7 + 0x28))();
  ppuVar14 = (undefined **)&DAT_11d9d32b;
  if (*(undefined ***)(iVar15 + 0x14) != (undefined **)0x0) {
    ppuVar14 = *(undefined ***)(iVar15 + 0x14);
  }
  local_10 = local_20;
  ppuVar5 = ppuVar14;
  do {
    local_44 = ppuVar5;
    ppuVar5 = (undefined **)((int)local_44 + 1);
  } while (*(char *)local_44 != '\0');
  _Size = (int)local_44 - (int)ppuVar14;
  uVar1 = _Size + 1;
  local_c = local_10;
  if (uVar1 == 0) {
LAB_118e2162:
                    /* WARNING: Subroutine does not return */
    FUN_100b73e0();
  }
  if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar1);
  }
  if (local_44 != ppuVar14) {
    pvVar8 = memcpy(local_10,ppuVar14,_Size);
    local_10 = (undefined1 *)(_Size + (int)pvVar8);
  }
  local_39[0] = '\0';
  *local_10 = 0;
  ppuVar14 = (undefined **)FUN_118dfd80(local_20,0,0x7b,0x7d,local_39 + 1);
  uVar1 = local_48;
  local_40 = ppuVar14;
  if (ppuVar14 != (undefined **)0xffffffff) {
    do {
      uVar16 = 0;
      local_40 = ppuVar14;
      if (uVar1 != 0) {
        do {
          local_44 = &PTR_FUN_11da5400;
          if ((DAT_123bdb4c & 1) == 0) {
            DAT_123bdb4c = DAT_123bdb4c | 1;
            _DAT_123bdaa8 = &DAT_123bda98;
            DAT_123bdaac = &DAT_123bda98;
            DAT_123bda98 = 0;
            FUN_100d9260("CMessageParmDescInfo::GetManagers","");
            FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
            DAT_123bda94 = (undefined4 *)FUN_100dfd90(DAT_123bdaac);
            if (DAT_123bda94 == (undefined4 *)0x0) {
              DAT_123bda94 = (undefined4 *)FUN_100dde50(4);
              *DAT_123bda94 = 0;
              FUN_100dfdc0(DAT_123bdaac,DAT_123bda94);
            }
            FUN_11a8911f(&LAB_11c6e390);
          }
          piVar7 = (int *)*DAT_123bda94;
          if ((piVar7 == (int *)0x0) &&
             (piVar7 = (int *)FUN_11679e10(&local_44,"CMessageParmDescInfo",0), piVar7 == (int *)0x0
             )) {
            if ((DAT_123bdb54 & 1) == 0) {
              DAT_123bdad0 = 0;
              DAT_123bdae0 = 0;
              DAT_123bdae4 = 0;
              _DAT_123bdae8 = 0;
              DAT_123bdaec = 0;
              DAT_123bdb54 = DAT_123bdb54 | 1;
              DAT_123bdacc = &PTR_FUN_11da53b4;
              DAT_123bdaf0 = _DAT_11de9ae0;
              DAT_123bdaf4 = _UNK_11de9ae4;
              uRam123bdaf8 = _UNK_11de9ae8;
              DAT_123bdafc = _UNK_11de9aec;
              DAT_123bdb00 = 1;
              DAT_123bdad4 = piVar7;
              _DAT_123bdad8 = piVar7;
              _DAT_123bdadc = piVar7;
              FUN_11a8911f(&LAB_11cb03f0);
            }
            piVar7 = (int *)&DAT_123bdacc;
          }
          local_44 = &PTR_FUN_11da54a8;
          if (((-1 < (int)uVar16) && ((int)uVar16 < piVar7[6] - piVar7[5] >> 2)) &&
             (iVar15 = *(int *)(piVar7[5] + uVar16 * 4), iVar15 != 0)) {
            pbVar4 = *(byte **)(iVar15 + 0x14);
            pbVar9 = &DAT_11d9d32b;
            pbVar12 = local_24;
            if (pbVar4 != (byte *)0x0) {
              pbVar9 = pbVar4;
            }
            do {
              bVar2 = *pbVar12;
              bVar17 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_118e2020:
                uVar10 = -(uint)bVar17 | 1;
                goto LAB_118e2025;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar12[1];
              bVar17 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_118e2020;
              pbVar9 = pbVar9 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar2 != 0);
            uVar10 = 0;
LAB_118e2025:
            if (uVar10 == 0) {
              ppuVar14 = (undefined **)(local_10 + -(int)local_c);
              local_54 = (int)local_28 - (int)local_24;
              if (ppuVar14 < local_40) {
                    /* WARNING: Subroutine does not return */
                FUN_100e4fb0();
              }
              local_50 = (int)ppuVar14 - (int)local_40;
              puVar13 = &local_50;
              if ((uint)((int)local_28 - (int)local_24) <= (uint)((int)ppuVar14 - (int)local_40)) {
                puVar13 = &local_54;
              }
              if (1 < (*puVar13 - (int)ppuVar14) - 2) {
                if ((&DAT_11d9e0dc < local_c) || (local_10 < &UNK_11d9e0dd)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 1;
                }
                FUN_100e6270(local_c + (int)local_40,local_c + (int)((int)local_40 + *puVar13),
                             &DAT_11d9e0dc,&DAT_11d9e0de,uVar11);
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0xc);
              }
              goto LAB_118e2162;
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar1);
      }
      ppuVar14 = (undefined **)
                 FUN_118dfd80(local_20,(undefined1 *)((int)ppuVar14 + 1),0x7b,0x7d,local_39 + 1);
    } while (ppuVar14 != (undefined **)0xffffffff);
    local_40 = ppuVar14;
    if (local_39[0] != '\0') {
      FUN_100e5d80(local_c);
    }
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if ((local_24 != (byte *)(local_39 + 1)) && (local_24 != (byte *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  FUN_11a89daa();
  return;
}



