// ===== class CAvatarInfo  (18 recovered methods) =====

/* --- CAvatarInfo::GetManagers @ 1052bb90 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   strings:
     ""CAvatarInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAvatarInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be984 & 1) == 0) {
    DAT_123be984 = DAT_123be984 | 1;
    _DAT_123be97c = &DAT_123be96c;
    DAT_123be980 = &DAT_123be96c;
    DAT_123be96c = 0;
    FUN_100d83d0("CAvatarInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fd80);
  }
  return DAT_123be968;
}



/* --- CAvatarInfo::GetManagers_10ae4120 @ 10ae4120 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi
// strings:
//   ""fxparams""
//   "".chrparams""
//   ""mh_sharemem_addrinfo""
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Removing unreachable block (ram,0x10ae486e) */
/* WARNING: Removing unreachable block (ram,0x10ae49dc) */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi
   strings:
     ""fxparams""
     "".chrparams""
     ""mh_sharemem_addrinfo""
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

undefined4 __fastcall CAvatarInfo__GetManagers_10ae4120(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  int local_6c;
  int local_64;
  undefined1 *local_40;
  undefined4 local_28;
  byte *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_e;
  undefined1 local_d;
  byte *local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)*DAT_1202e818 + 0x2d0))();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 4;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    return 0;
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0xc) + 0x288))();
  if (iVar3 == 0) {
    return 0;
  }
  if (((DAT_1202e818 != (undefined4 *)0x0) && ((int *)DAT_1202e818[0x34] != (int *)0x0)) &&
     (cVar2 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x168))(), cVar2 != '\0')) {
    FUN_10ae51d0();
    FUN_11003d20();
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0x14) = 4;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_10b7b150();
  iVar3 = FUN_10ae4c50();
  iVar4 = FUN_1025b060();
  if (iVar4 != 0) {
    local_8 = iVar3 + 1;
    iVar4 = FUN_1052bc30();
    iVar3 = local_8;
    if (iVar4 != 0) {
      FUN_110038f0();
      FUN_110038f0();
      iVar3 = local_8;
    }
  }
  iVar4 = FUN_10ae4c50();
  iVar3 = iVar3 + iVar4;
  local_8 = iVar3;
  iVar4 = FUN_10ae4c50();
  if (iVar4 == 1) {
    local_8 = iVar3 + 1;
    iVar4 = atoi(*(char **)(param_1 + 0x5c));
    iVar5 = FUN_1052bc30();
    iVar3 = local_8;
    if ((iVar5 != 0) && (iVar4 != 0x530e8)) {
      FUN_10a79cc0();
      FUN_11003730();
      FUN_104f6f60();
      FUN_10a79cc0();
      FUN_11003730();
      FUN_104f6f60();
      cVar2 = FUN_100fd0c0();
      if (cVar2 == '\0') {
        FUN_110038f0();
      }
      cVar2 = FUN_100fd0c0();
      iVar3 = local_8;
      if (cVar2 == '\0') {
        FUN_110038f0();
        iVar3 = local_8;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar5 = local_8;
  while (iVar4 != param_1 + 100) {
    iVar5 = FUN_10ae4c50();
    iVar3 = iVar3 + iVar5;
    FUN_10ae8610();
    iVar5 = iVar3;
  }
  local_8 = iVar5;
  if (0 < iVar3) {
    FUN_10ae5670();
  }
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  piVar6 = *(int **)(param_1 + 0x10) + 0x899;
  do {
    if (*piVar6 != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar3 < 8);
  cVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x1cc))();
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x228))();
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    FUN_10ae51d0();
    *(undefined4 *)(param_1 + 0x14) = 4;
    return 1;
  }
  cVar2 = CAvatarInfo__GetManagers_10f02e50();
  if (cVar2 == '\0') goto LAB_10ae48a4;
  FUN_110039f0();
  local_40 = &DAT_1201fc98;
  piVar6 = (int *)FUN_10a79c50();
  if ((undefined1 *)*piVar6 != &DAT_1201fc98) {
    if (DAT_1201fc8c < 0) {
      if (-1 < *(int *)(*piVar6 + -0xc)) {
LAB_10ae448f:
        local_40 = (undefined1 *)*piVar6;
        FUN_10c3dab0();
      }
    }
    else {
      if (-1 < *(int *)(*piVar6 + -0xc)) {
        FUN_1083ac70();
        goto LAB_10ae448f;
      }
      FUN_1083ac70();
      local_40 = (undefined1 *)*piVar6;
    }
  }
  if ((-1 < *(int *)(local_64 + -0xc)) && (iVar3 = FUN_10c3dad0(), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 - (*(int *)(local_64 + -4) + 0xd);
    FUN_10c3d900();
  }
  FUN_11003a30();
  local_24 = &DAT_1201fc98;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    iVar3 = 0;
    if (local_14 == 0) {
      iVar3 = atoi(*(char **)(param_1 + 0x2c));
    }
    else if (local_14 == 6) {
      cVar2 = FUN_10ae5720();
      if (cVar2 != '\0') {
        pbVar10 = &DAT_11d9d32b;
        pbVar12 = local_24;
        do {
          bVar1 = *pbVar12;
          bVar13 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_10ae4560:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_10ae4565;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar13 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_10ae4560;
          pbVar12 = pbVar12 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_10ae4565:
        if (uVar7 != 0) {
          local_28 = 8;
          FUN_11003a50();
        }
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x68);
      iVar4 = param_1 + 100;
      iVar11 = iVar4;
      if (iVar5 != 0) {
        do {
          if (*(uint *)(iVar5 + 0x10) < local_14) {
            iVar8 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar8 = *(int *)(iVar5 + 8);
            iVar11 = iVar5;
          }
          iVar5 = iVar8;
        } while (iVar8 != 0);
        if ((iVar11 != iVar4) && (local_14 < *(uint *)(iVar11 + 0x10))) {
          iVar11 = iVar4;
        }
      }
      if (iVar11 != iVar4) {
        iVar3 = atoi(*(char **)(iVar11 + 0x28));
      }
    }
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0();
      FUN_11a8911f();
    }
    puVar9 = (undefined *)*DAT_123be968;
    if ((puVar9 == (undefined *)0x0) &&
       (puVar9 = (undefined *)FUN_11679e10(), puVar9 == (undefined *)0x0)) {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f();
      }
      puVar9 = &DAT_123be704;
    }
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (*(int *)(puVar9 + 0x30) == 0)) &&
         (iVar4 = *(int *)(puVar9 + 0x28), iVar4 != 0)) &&
        ((iVar3 = iVar3 - *(int *)(puVar9 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar9 + 0x24))))
        ))) {
      iVar5 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar3 / iVar4) * 4);
      if ((iVar5 != 0) && (*(int *)(iVar5 + (iVar3 % iVar4) * 4) != 0)) {
        piVar6 = (int *)FUN_104f6c30();
        if (*(int *)(*piVar6 + -0xc) < 0) {
          local_c = &DAT_1201fc98;
        }
        else {
          local_c = (byte *)*piVar6;
          FUN_10c3dab0();
        }
        FUN_10a79ae0();
        FUN_10a4c990();
        piVar6 = (int *)(local_6c + -0xc);
        if ((-1 < *piVar6) && (iVar3 = FUN_10c3dad0(piVar6), iVar3 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(local_6c + -4) + 0xd);
          FUN_10c3d900(piVar6);
        }
        pbVar12 = local_c;
        pbVar10 = local_c;
        if (local_24 != local_c) {
          if (*(int *)(local_24 + -0xc) < 0) {
            if (-1 < *(int *)(local_c + -0xc)) {
LAB_10ae475d:
              pbVar10 = local_c;
              local_24 = local_c;
              FUN_10c3dab0(pbVar12 + -0xc);
            }
          }
          else {
            if (-1 < *(int *)(local_c + -0xc)) {
              FUN_1083ac70();
              goto LAB_10ae475d;
            }
            FUN_1083ac70();
            local_24 = local_c;
            pbVar10 = local_c;
          }
        }
        pbVar12 = pbVar10 + -0xc;
        if ((-1 < *(int *)pbVar12) && (iVar3 = FUN_10c3dad0(pbVar12), iVar3 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pbVar10 + -4) + 0xd);
          FUN_10c3d900(pbVar12);
        }
        local_28 = 8;
        FUN_11003a50(&local_28);
      }
    }
    local_14 = local_14 + 1;
  } while ((int)local_14 < 7);
  local_e = 0;
  FUN_10ae74b0(local_1c);
  if (local_20 != 0) {
    FUN_10c3d5d0();
  }
  pbVar12 = local_24;
  if ((-1 < *(int *)(local_24 + -0xc)) && (iVar3 = FUN_10c3dad0(), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 - (*(int *)(pbVar12 + -4) + 0xd);
    FUN_10c3d900();
  }
  local_d = 0;
  FUN_10ae74b0(0);
  if ((-1 < *(int *)(local_40 + -0xc)) && (iVar3 = FUN_10c3dad0(), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 - (*(int *)(local_40 + -4) + 0xd);
    FUN_10c3d900();
  }
LAB_10ae48a4:
  cVar2 = FUN_11003a70();
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x44) = 0;
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x1c))();
      if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xc4) + 0x10))();
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    local_14 = (**(code **)(*(int *)*DAT_1202e818 + 0x2d0))();
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580();
  }
  *(uint *)(param_1 + 0x14) = (local_8 < 1) + 3;
  FUN_10ae74b0();
  if ((-1 < DAT_1201fc8c) && (iVar3 = FUN_10c3dad0(), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
    FUN_10c3d900();
  }
  return 1;
}



/* --- CAvatarInfo::GetManagers_10aea920 @ 10aea920 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memmove, memset, atoi
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Removing unreachable block (ram,0x10aea954) */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memmove, memset, atoi
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void __thiscall
CAvatarInfo__GetManagers_10aea920(int param_1,int param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [84];
  undefined1 local_4c;
  undefined1 local_48 [8];
  undefined *local_40;
  int local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_1c = (int *)(param_1 + 0xb8);
  if (*local_1c != *(int *)(param_1 + 0xbc)) {
    local_16 = 0;
    local_15 = 0;
    *(int *)(param_1 + 0xbc) = *local_1c;
  }
  local_20 = param_1 + 0xc4;
  local_c = param_1;
  FUN_10462a80();
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 400) = 1;
    if (*(int **)(param_1 + 0x370) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x370) + 0x10))();
    }
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  cVar1 = CAvatarInfo__GetManagers_10aeadc0(param_2);
  local_10 = *(int *)(param_1 + 0x24);
  if (local_10 == 0) {
    return;
  }
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0x3f800000;
  local_4c = 0;
  memset(local_a0,0,0x54);
  bVar11 = *(int *)(param_1 + 0xb0) != 0;
  if (bVar11) {
    FUN_10aef0c0(*(int *)(param_1 + 0xb0),&local_b0);
  }
  if (cVar1 != '\0') {
    FUN_10ad9400(local_10,&local_b0);
  }
  uVar13 = 0;
  if (*(char **)(param_2 + 0x14) == *(char **)(param_2 + 0x10)) {
    puVar10 = &local_b0;
    if (!bVar11) {
      puVar10 = (undefined4 *)0x0;
    }
    puVar12 = &DAT_11d9d32b;
    iVar2 = *(int *)(param_1 + 0x1fc);
    local_14 = puVar10;
  }
  else {
    puVar10 = &local_b0;
    if (!bVar11) {
      puVar10 = (undefined4 *)0x0;
    }
    puVar12 = &DAT_11d9d32b;
    local_14 = puVar10;
    iVar2 = atoi(*(char **)(param_2 + 0x14));
  }
  FUN_10aebd60(iVar2,puVar12,puVar10,uVar13);
  uVar3 = (uint)(param_3 != '\0');
  uVar13 = *(undefined4 *)(param_2 + 0x48);
  iVar2 = atoi(*(char **)(param_2 + 0x44));
  FUN_10aec690(iVar2,uVar3,param_4,uVar13);
  local_8 = (undefined **)(param_2 + 0x4c);
  iVar2 = *(int *)(param_2 + 0x6c);
  bVar11 = *(int *)(param_2 + 0x5c) == *(int *)(param_2 + 0x74);
  ppuVar7 = *(undefined ***)(param_2 + 0x54);
  if (ppuVar7 != local_8) {
    do {
      _param_3 = 0;
      if (bVar11) {
        _param_3 = iVar2 + 0x14;
      }
      cVar1 = FUN_100fd0c0(ppuVar7 + 5,&DAT_11d9d32b);
      if (cVar1 == '\0') {
        iVar4 = atoi(ppuVar7[10]);
        puVar12 = &DAT_11d9d32b;
        puVar10 = local_14;
        iVar5 = atoi(ppuVar7[10]);
        FUN_10aebd60(iVar5,puVar12,puVar10,_param_3);
        local_40 = ppuVar7[4];
        local_3c = iVar4;
        FUN_10465520(local_48,&local_40);
      }
      else {
        FUN_10ad4d20(local_10,ppuVar7[4]);
      }
      if (bVar11) {
        iVar4 = *(int *)(iVar2 + 0xc);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar2 + 4);
          if (iVar2 == *(int *)(iVar4 + 0xc)) {
            do {
              iVar2 = iVar4;
              iVar4 = *(int *)(iVar2 + 4);
            } while (iVar2 == *(int *)(iVar4 + 0xc));
          }
          if (*(int *)(iVar2 + 0xc) != iVar4) {
            iVar2 = iVar4;
          }
        }
        else {
          for (iVar5 = *(int *)(iVar4 + 8); iVar2 = iVar4, iVar5 != 0; iVar5 = *(int *)(iVar5 + 8))
          {
            iVar4 = iVar5;
          }
        }
      }
      ppuVar6 = (undefined **)ppuVar7[3];
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar6 = (undefined **)ppuVar7[1];
        if (ppuVar7 == (undefined **)ppuVar6[3]) {
          do {
            ppuVar7 = ppuVar6;
            ppuVar6 = (undefined **)ppuVar7[1];
          } while (ppuVar7 == (undefined **)ppuVar6[3]);
        }
        if ((undefined **)ppuVar7[3] != ppuVar6) {
          ppuVar7 = ppuVar6;
        }
      }
      else {
        for (ppuVar8 = (undefined **)ppuVar6[2]; ppuVar7 = ppuVar6, ppuVar8 != (undefined **)0x0;
            ppuVar8 = (undefined **)ppuVar8[2]) {
          ppuVar6 = ppuVar8;
        }
      }
    } while (ppuVar7 != local_8);
  }
  local_28 = local_38;
  local_38[0] = 0;
  ppuVar7 = (undefined **)local_8[1];
  ppuVar6 = local_8;
  local_24 = local_28;
  if ((undefined **)local_8[1] != (undefined **)0x0) {
    do {
      if (ppuVar7[4] == (undefined *)0x0) {
        ppuVar8 = (undefined **)ppuVar7[3];
      }
      else {
        ppuVar8 = (undefined **)ppuVar7[2];
        ppuVar6 = ppuVar7;
      }
      ppuVar7 = ppuVar8;
    } while (ppuVar8 != (undefined **)0x0);
    if (ppuVar6 == local_8) goto LAB_10aead14;
    if ((undefined *)0x1 < ppuVar6[4]) {
      ppuVar6 = local_8;
    }
  }
  if (ppuVar6 != local_8) {
    iVar2 = atoi(ppuVar6[10]);
    local_8 = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar9 = (undefined *)*DAT_123be968;
    if ((puVar9 == (undefined *)0x0) &&
       (puVar9 = (undefined *)FUN_11679e10(&local_8,"CAvatarInfo",0), puVar9 == (undefined *)0x0)) {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar9 = &DAT_123be704;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((iVar2 != -1) &&
       ((((iVar2 != 0 || (*(int *)(puVar9 + 0x30) == 0)) &&
         (iVar4 = *(int *)(puVar9 + 0x28), iVar4 != 0)) &&
        ((iVar2 = iVar2 - *(int *)(puVar9 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(puVar9 + 0x24))))
        ))) {
      iVar5 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar2 / iVar4) * 4);
      if ((iVar5 != 0) &&
         (((iVar2 = *(int *)(iVar5 + (iVar2 % iVar4) * 4), iVar2 != 0 &&
           (*(int *)(iVar2 + 0x14) == 1)) && ((undefined1 *)(iVar2 + 0x18) != local_38)))) {
        FUN_100d83d0(*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x28));
      }
    }
  }
LAB_10aead14:
  uVar13 = 0;
  puVar12 = local_24;
  puVar10 = local_14;
  iVar2 = atoi(*(char **)(param_2 + 0x2c));
  FUN_10aebd60(iVar2,puVar12,puVar10,uVar13);
  FUN_10afe610(local_10);
  iVar2 = local_10;
  puVar10 = *(undefined4 **)(param_2 + 0x7c);
  if (puVar10 != *(undefined4 **)(param_2 + 0x80)) {
    do {
      FUN_10afe4e0(iVar2,*puVar10,0x3f800000);
      puVar10 = puVar10 + 1;
    } while (puVar10 != *(undefined4 **)(param_2 + 0x80));
  }
  FUN_10463d60(param_2 + 0x7c);
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10aeadc0 @ 10aeadc0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, memcpy, memmove
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""eye_left""
//   ""eye_right""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy, memmove
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""eye_left""
     ""eye_right"" */

uint __thiscall CAvatarInfo__GetManagers_10aeadc0(int param_1,int param_2)

{
  undefined4 uVar1;
  void *_Dst;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  char *pcVar13;
  uint _Size;
  int *piVar14;
  uint uVar15;
  char *pcVar16;
  size_t sVar17;
  void *pvVar18;
  int local_ac [10];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined **local_38;
  int local_34;
  char *local_30;
  char *local_2c;
  undefined1 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined **local_18;
  undefined1 local_11;
  char *local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  pcVar12 = atoi_exref;
  local_34 = param_1;
  local_5 = *(char *)(param_1 + 0x374);
  *(undefined1 *)(param_1 + 0x374) = 0;
  local_ac[0] = 0;
  local_ac[1] = 0;
  local_ac[2] = 0;
  local_ac[3] = 0;
  local_ac[4] = 0;
  local_ac[5] = 0;
  local_ac[6] = 0;
  local_ac[7] = 0;
  if ((*(char **)(param_2 + 0x14) != *(char **)(param_2 + 0x10)) &&
     (iVar5 = atoi(*(char **)(param_2 + 0x14)), pcVar12 = atoi_exref,
     iVar5 != *(int *)(param_1 + 0x1fc))) {
    *(int *)(param_1 + 0x1fc) = iVar5;
  }
  uVar15 = 1;
  do {
    local_c = (int *)0x0;
    if (uVar15 == 6) {
      local_c = (int *)(*pcVar12)(*(undefined4 *)(param_2 + 0x2c));
    }
    else {
      iVar7 = *(int *)(param_2 + 0x50);
      iVar5 = param_2 + 0x4c;
      iVar11 = iVar5;
      if (iVar7 != 0) {
        do {
          if (*(uint *)(iVar7 + 0x10) < uVar15) {
            iVar9 = *(int *)(iVar7 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar7 + 8);
            iVar11 = iVar7;
          }
          iVar7 = iVar9;
        } while (iVar9 != 0);
        if (iVar11 == iVar5) goto LAB_10aeae7e;
        if (uVar15 < *(uint *)(iVar11 + 0x10)) {
          iVar11 = iVar5;
        }
      }
      if (iVar11 != iVar5) {
        local_c = (int *)atoi(*(char **)(iVar11 + 0x28));
      }
    }
LAB_10aeae7e:
    if (local_c != *(int **)(param_1 + 0x1fc + uVar15 * 4)) {
      local_38 = &PTR_FUN_11dc0b20;
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        FUN_102500e0("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar6 = (undefined *)*DAT_123be968;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_38,"CAvatarInfo",0), puVar6 == (undefined *)0x0)
         ) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be73c = DAT_123be73c | 1;
          FUN_1053c940();
          FUN_11a8911f(&LAB_11c80a90);
        }
        puVar6 = &DAT_123be704;
      }
      local_38 = &PTR_FUN_11da54a8;
      if ((local_c == (int *)0xffffffff) ||
         ((((local_c == (int *)0x0 && (*(int *)(puVar6 + 0x30) != 0)) ||
           (iVar5 = *(int *)(puVar6 + 0x28), iVar5 == 0)) ||
          ((iVar7 = (int)local_c - *(int *)(puVar6 + 0x30), iVar7 < 0 ||
           (*(int *)(puVar6 + 0x24) <= iVar7)))))) {
LAB_10aeb078:
        if (*(char *)(uVar15 + 0x221 + param_1) != '\0') {
          *(undefined1 *)(uVar15 + 0x221 + param_1) = 0;
          local_5 = '\x01';
        }
      }
      else {
        iVar11 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar5) * 4);
        if ((iVar11 == 0) || (iVar5 = *(int *)(iVar11 + (iVar7 % iVar5) * 4), iVar5 == 0))
        goto LAB_10aeb078;
        uVar1 = *(undefined4 *)(iVar5 + 0x2c);
        local_ac[uVar15] = iVar5;
        piVar8 = (int *)FUN_104f6c30(uVar1);
        if (*(int *)(*piVar8 + -0xc) < 0) {
          local_28 = &DAT_1201fc98;
        }
        else {
          local_28 = (undefined1 *)*piVar8;
          FUN_10c3dab0(local_28 + -0xc);
        }
        FUN_10a79ae0(&local_28);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        iVar5 = local_44;
        piVar8 = (int *)(local_44 + -0xc);
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(iVar5 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
        puVar2 = local_28;
        local_6 = '\0';
        cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_28,0);
        cVar4 = local_6;
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(puVar2), cVar4 = local_6,
           cVar3 != '\0')) {
          local_5 = '\x01';
          cVar4 = '\x01';
        }
        if (cVar4 != *(char *)(uVar15 + 0x221 + param_1)) {
          *(char *)(uVar15 + 0x221 + param_1) = cVar4;
          local_5 = '\x01';
        }
        piVar8 = (int *)(puVar2 + -0xc);
        if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(puVar2 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
      }
      *(int **)(param_1 + 0x1fc + uVar15 * 4) = local_c;
    }
    uVar15 = uVar15 + 1;
    pcVar12 = atoi_exref;
  } while ((int)uVar15 < 7);
  iVar5 = param_2 + 100;
  uVar15 = 1;
  param_1 = param_1 + 0x104;
  do {
    iVar7 = *(int *)(param_2 + 0x68);
    iVar11 = iVar5;
    if (iVar7 == 0) {
LAB_10aeb0ed:
      if (iVar11 != iVar5) {
        *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar11 + 0x14);
        if (iVar11 + 0x18 != param_1) {
          FUN_100d83d0(*(undefined4 *)(iVar11 + 0x2c),*(undefined4 *)(iVar11 + 0x28));
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar11 + 0x30);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar11 + 0x34);
      }
    }
    else {
      do {
        if (*(uint *)(iVar7 + 0x10) < uVar15) {
          iVar9 = *(int *)(iVar7 + 0xc);
        }
        else {
          iVar9 = *(int *)(iVar7 + 8);
          iVar11 = iVar7;
        }
        iVar7 = iVar9;
      } while (iVar9 != 0);
      if (iVar11 != iVar5) {
        if (uVar15 < *(uint *)(iVar11 + 0x10)) {
          iVar11 = iVar5;
        }
        goto LAB_10aeb0ed;
      }
    }
    uVar15 = uVar15 + 1;
    param_1 = param_1 + 0x24;
  } while ((int)uVar15 < 7);
  iVar5 = local_34;
  if (local_5 != '\0') {
    local_24 = 0;
    local_c = (int *)(local_34 + 0x200);
    local_20 = (int *)0x0;
    local_1c = (int *)0x0;
    param_2 = 1;
    do {
      if (*(char *)(iVar5 + 0x221 + param_2) != '\0') {
        iVar7 = local_ac[param_2];
        if (iVar7 == 0) {
          iVar7 = *local_c;
          local_18 = &PTR_FUN_11dc0b20;
          if ((DAT_123be984 & 1) == 0) {
            DAT_123be984 = DAT_123be984 | 1;
            FUN_102500e0("CAvatarInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fd80);
          }
          puVar6 = (undefined *)*DAT_123be968;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&local_18,"CAvatarInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be73c & 1) == 0) {
              DAT_123be708 = 0;
              DAT_123be718 = 0;
              uRam123be71c = 0;
              _DAT_123be720 = 0;
              DAT_123be724 = 0;
              DAT_123be73c = DAT_123be73c | 1;
              _DAT_123be704 = &PTR_FUN_11dc0d54;
              DAT_123be728 = _DAT_11de9ae0;
              DAT_123be72c = _UNK_11de9ae4;
              uRam123be730 = _UNK_11de9ae8;
              DAT_123be734 = _UNK_11de9aec;
              DAT_123be738 = 1;
              DAT_123be70c = puVar6;
              _DAT_123be710 = puVar6;
              _DAT_123be714 = puVar6;
              FUN_11a8911f(&LAB_11c80a90);
            }
            puVar6 = &DAT_123be704;
          }
          local_18 = &PTR_FUN_11da54a8;
          if (((iVar7 == -1) ||
              (((iVar7 == 0 && (*(int *)(puVar6 + 0x30) != 0)) ||
               (iVar11 = *(int *)(puVar6 + 0x28), iVar11 == 0)))) ||
             ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), iVar7 < 0 ||
              (*(int *)(puVar6 + 0x24) <= iVar7)))) {
LAB_10aeb27d:
            iVar7 = 0;
          }
          else {
            iVar9 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar11) * 4);
            if (iVar9 == 0) goto LAB_10aeb27d;
            iVar7 = *(int *)(iVar9 + (iVar7 % iVar11) * 4);
          }
          if (iVar7 == 0) goto LAB_10aeb3f7;
        }
        local_30 = *(char **)(iVar7 + 0x2c);
        pcVar13 = &DAT_1201fc98;
        if (local_30 != (char *)0x0) {
          pcVar16 = local_30;
          do {
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar4 != '\0');
          sVar17 = (int)pcVar16 - (int)(local_30 + 1);
          if (sVar17 != 0) {
            puVar10 = (undefined4 *)FUN_10c3d780(sVar17 + 0xd);
            DAT_123be268 = DAT_123be268 + sVar17 + 0xd;
            *puVar10 = 1;
            pcVar13 = (char *)(puVar10 + 3);
            puVar10[1] = sVar17;
            puVar10[2] = sVar17;
            pcVar13[sVar17] = '\0';
            if (pcVar13 != local_30) {
              memcpy(pcVar13,local_30,sVar17);
            }
          }
        }
        piVar8 = (int *)(pcVar13 + -0xc);
        if (*(int *)(pcVar13 + -0xc) < 0) {
          local_10 = &DAT_1201fc98;
        }
        else {
          local_10 = pcVar13;
          FUN_10c3dab0(piVar8);
        }
        FUN_10a79ae0(&local_10);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        if ((-1 < *piVar8) && (iVar5 = FUN_10c3dad0(piVar8), iVar5 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar13 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
        if (local_20 == local_1c) {
          local_3b = 0;
          local_11 = 0;
          FUN_10af2cd0(local_20,&local_10,&local_11,1,1);
        }
        else {
          local_3c = 0;
          local_3d = 0;
          if (local_20 != (int *)0x0) {
            if (-1 < *(int *)(local_10 + -0xc)) {
              *local_20 = (int)local_10;
              FUN_10c3dab0(*local_20 + -0xc);
              local_20 = local_20 + 1;
              goto LAB_10aeb3c1;
            }
            *local_20 = (int)&DAT_1201fc98;
          }
          local_20 = local_20 + 1;
        }
LAB_10aeb3c1:
        pcVar13 = local_10;
        piVar8 = (int *)(local_10 + -0xc);
        iVar5 = local_34;
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar5 = local_34, iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar13 + -4) + 0xd);
          FUN_10c3d900(piVar8);
          iVar5 = local_34;
        }
      }
LAB_10aeb3f7:
      param_2 = param_2 + 1;
      local_c = local_c + 1;
    } while (param_2 < 7);
    if (*(int **)(iVar5 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0x28) + 8))();
      *(undefined4 *)(iVar5 + 0x28) = 0;
    }
    if (*(int **)(iVar5 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0x2c) + 8))();
      *(undefined4 *)(iVar5 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar5 + 0x70) = 0;
    *(undefined4 *)(iVar5 + 0x6c) = 0;
    if ((int)local_20 - local_24 >> 2 == 0) {
      piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0xc))
                                (*(undefined4 *)(iVar5 + 8),0,0,0,0);
    }
    else {
      pcVar13 = *(char **)(iVar5 + 8);
      local_2c = &DAT_1201fc98;
      if (pcVar13 != (char *)0x0) {
        pcVar16 = pcVar13;
        do {
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar4 != '\0');
        sVar17 = (int)pcVar16 - (int)(pcVar13 + 1);
        if (sVar17 != 0) {
          puVar10 = (undefined4 *)FUN_10c3d780(sVar17 + 0xd);
          DAT_123be268 = DAT_123be268 + sVar17 + 0xd;
          *puVar10 = 1;
          local_2c = (char *)(puVar10 + 3);
          puVar10[1] = sVar17;
          puVar10[2] = sVar17;
          local_2c[sVar17] = '\0';
          if (local_2c != pcVar13) {
            memcpy(local_2c,pcVar13,sVar17);
          }
        }
      }
      piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0x14))(&local_2c,&local_24,0,0);
      pcVar13 = local_2c;
      piVar14 = (int *)(local_2c + -0xc);
      if ((-1 < *piVar14) && (iVar7 = FUN_10c3dad0(piVar14), iVar7 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar13 + -4) + 0xd);
        FUN_10c3d900(piVar14);
      }
    }
    if (piVar8 == (int *)0x0) {
      FUN_10ae74b0(local_20,local_24,0,&local_39);
      uVar15 = 0;
      if (local_24 != 0) {
        uVar15 = FUN_10c3d5d0(local_24);
      }
      return uVar15 & 0xffffff00;
    }
    (**(code **)(*piVar8 + 0x1c4))(1);
    if (*(int *)(iVar5 + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    *(int **)(iVar5 + 0x24) = piVar8;
    (**(code **)(*piVar8 + 4))();
    if (*(int **)(iVar5 + 0x24) != (int *)0x0) {
      piVar8 = (int *)(**(code **)(**(int **)(iVar5 + 0x24) + 0x58))();
      piVar8 = (int *)(**(code **)(*piVar8 + 0x18))("eye_left");
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x2c))(iVar5 + 0x74);
        (**(code **)(*piVar8 + 0x40))();
      }
      piVar8 = (int *)(**(code **)(**(int **)(iVar5 + 0x24) + 0x58))();
      piVar8 = (int *)(**(code **)(*piVar8 + 0x18))("eye_right");
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x2c))(iVar5 + 0x90);
        (**(code **)(*piVar8 + 0x40))();
      }
    }
    piVar8 = *(int **)(iVar5 + 0x24);
    if ((piVar8 != (int *)0x0) &&
       (piVar14 = (int *)(**(code **)(*piVar8 + 0x4c))(), piVar14 != (int *)0x0)) {
      local_ac[9] = _DAT_11cc2bf0;
      uStack_84 = _UNK_11cc2bf4;
      uStack_80 = _UNK_11cc2bf8;
      uStack_7c = _UNK_11cc2bfc;
      local_78 = 0x3f800000;
      local_74 = 0;
      local_70 = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      local_6c = 0x282;
      local_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      local_ac[8] = 0;
      piVar8 = (int *)(**(code **)(*piVar8 + 0x60))();
      iVar7 = (**(code **)(*piVar8 + 0x14))(*(undefined4 *)(iVar5 + 0x22c));
      if (-1 < iVar7) {
        (**(code **)(*piVar8 + 0x68))(iVar7);
        (**(code **)(*piVar14 + 0x28))(*(undefined4 *)(iVar5 + 0x22c),local_ac + 8);
      }
    }
    FUN_10ae74b0(local_20,local_24,0,&local_3a);
    if (local_24 != 0) {
      FUN_10c3d5d0(local_24);
    }
  }
  puVar10 = (undefined4 *)(iVar5 + 0x350);
  local_18 = (undefined **)0x8;
  piVar8 = (int *)(iVar5 + 0x248);
  do {
    piVar8[-6] = piVar8[-0x5b];
    if (piVar8 + -0x5a != piVar8 + -5) {
      local_30 = (char *)piVar8[-0x56];
      pvVar18 = (void *)piVar8[-0x55];
      _Size = (int)local_30 - (int)pvVar18;
      _Dst = (void *)*piVar8;
      uVar15 = piVar8[-1] - (int)_Dst;
      if (uVar15 < _Size) {
        if (uVar15 != 0) {
          memcpy(_Dst,pvVar18,uVar15);
        }
        FUN_100d9260((int)pvVar18 + (piVar8[-1] - *piVar8),local_30);
      }
      else {
        if (_Size != 0) {
          memcpy(_Dst,pvVar18,_Size);
        }
        local_30 = (char *)piVar8[-1];
        pvVar18 = (void *)(*piVar8 + _Size);
        if (pvVar18 != local_30) {
          memmove(pvVar18,local_30,1);
          piVar8[-1] = (int)pvVar18 + (piVar8[-1] - (int)local_30);
        }
      }
    }
    iVar5 = piVar8[-0x54];
    piVar8[1] = iVar5;
    piVar8[2] = piVar8[-0x53];
    piVar8 = piVar8 + 9;
    *puVar10 = puVar10[-0x55];
    puVar10 = puVar10 + 1;
    local_18 = (undefined **)((int)local_18 + -1);
  } while (local_18 != (undefined **)0x0);
  return CONCAT31((int3)((uint)iVar5 >> 8),local_5);
}



/* --- CAvatarInfo::GetManagers_10aecda0 @ 10aecda0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Removing unreachable block (ram,0x10aed0b7) */
/* WARNING: Removing unreachable block (ram,0x10aed0e9) */
/* WARNING: Removing unreachable block (ram,0x10aed197) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void CAvatarInfo__GetManagers_10aecda0(int param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  size_t sVar14;
  undefined1 local_234 [516];
  char *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined **local_10;
  undefined1 *local_c;
  char *local_8;
  
  local_28 = &DAT_1201fc98;
  local_24 = 0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_2c = 7;
  if (param_2 == (char *)0x0) {
    iVar7 = 0;
  }
  else {
    pcVar10 = param_2;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar10 - (int)(param_2 + 1);
  }
  FUN_1083ab70(param_2,iVar7);
  local_14 = 1;
  do {
    uVar11 = local_14;
    iVar7 = 0;
    if (local_14 == 6) {
      pcVar10 = *(char **)(param_1 + 0x2c);
LAB_10aece4c:
      iVar7 = atoi(pcVar10);
    }
    else {
      iVar9 = param_1 + 0x4c;
      iVar3 = *(int *)(param_1 + 0x50);
      iVar8 = iVar9;
      if (iVar3 == 0) {
LAB_10aece3d:
        if (iVar8 != iVar9) {
          pcVar10 = *(char **)(iVar8 + 0x28);
          goto LAB_10aece4c;
        }
      }
      else {
        do {
          if (*(uint *)(iVar3 + 0x10) < local_14) {
            iVar4 = *(int *)(iVar3 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar3 + 8);
            iVar8 = iVar3;
          }
          iVar3 = iVar4;
        } while (iVar4 != 0);
        if (iVar8 != iVar9) {
          if (local_14 < *(uint *)(iVar8 + 0x10)) {
            iVar8 = iVar9;
          }
          goto LAB_10aece3d;
        }
      }
    }
    local_10 = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar5 = (undefined *)*DAT_123be968;
    if ((puVar5 == (undefined *)0x0) &&
       (puVar5 = (undefined *)FUN_11679e10(&local_10,"CAvatarInfo",0), puVar5 == (undefined *)0x0))
    {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be708 = 0;
        DAT_123be718 = 0;
        uRam123be71c = 0;
        _DAT_123be720 = 0;
        DAT_123be724 = 0;
        DAT_123be73c = DAT_123be73c | 1;
        _DAT_123be704 = &PTR_FUN_11dc0d54;
        DAT_123be728 = _DAT_11de9ae0;
        DAT_123be72c = _UNK_11de9ae4;
        uRam123be730 = _UNK_11de9ae8;
        DAT_123be734 = _UNK_11de9aec;
        DAT_123be738 = 1;
        DAT_123be70c = puVar5;
        _DAT_123be710 = puVar5;
        _DAT_123be714 = puVar5;
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar5 = &DAT_123be704;
    }
    local_10 = &PTR_FUN_11da54a8;
    if ((iVar7 == -1) ||
       ((((iVar7 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
         (iVar3 = *(int *)(puVar5 + 0x28), iVar3 == 0)) ||
        ((iVar7 = iVar7 - *(int *)(puVar5 + 0x30), iVar7 < 0 || (*(int *)(puVar5 + 0x24) <= iVar7)))
        ))) {
LAB_10aecf4b:
      iVar7 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar7 / iVar3) * 4);
      if (iVar8 == 0) goto LAB_10aecf4b;
      iVar7 = *(int *)(iVar8 + (iVar7 % iVar3) * 4);
    }
    if (iVar7 != 0) {
      local_30 = *(char **)(iVar7 + 0x2c);
      pcVar10 = &DAT_1201fc98;
      if (local_30 != (char *)0x0) {
        pcVar13 = local_30;
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        sVar14 = (int)pcVar13 - (int)(local_30 + 1);
        if (sVar14 != 0) {
          puVar6 = (undefined4 *)FUN_10c3d780(sVar14 + 0xd);
          DAT_123be268 = DAT_123be268 + sVar14 + 0xd;
          *puVar6 = 1;
          pcVar10 = (char *)(puVar6 + 3);
          puVar6[1] = sVar14;
          puVar6[2] = sVar14;
          pcVar10[sVar14] = '\0';
          if (pcVar10 != local_30) {
            memcpy(pcVar10,local_30,sVar14);
          }
        }
      }
      piVar12 = (int *)(pcVar10 + -0xc);
      if (*(int *)(pcVar10 + -0xc) < 0) {
        local_8 = &DAT_1201fc98;
      }
      else {
        local_8 = pcVar10;
        FUN_10c3dab0(piVar12);
      }
      FUN_10a79ae0(&local_8);
      FUN_10a4c990(&DAT_11d9f004,1);
      FUN_10a4c990(&DAT_11cbc0f0,3);
      if ((-1 < *piVar12) && (iVar7 = FUN_10c3dad0(piVar12), iVar7 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar10 + -4) + 0xd);
        FUN_10c3d900(piVar12);
      }
      pcVar10 = local_8;
      local_234[0] = 0;
      if (local_8 != (char *)0x0) {
        pcVar13 = local_8;
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        sVar14 = (int)pcVar13 - (int)(local_8 + 1);
        if (sVar14 != 0) {
          FUN_10a7d480(sVar14);
          memcpy(local_234,pcVar10,sVar14);
        }
      }
      piVar12 = (int *)(pcVar10 + -0xc);
      if ((-1 < *piVar12) && (iVar7 = FUN_10c3dad0(piVar12), iVar7 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar10 + -4) + 0xd);
        FUN_10c3d900(piVar12);
      }
      local_c = &DAT_1201fc98;
      if (local_20 == local_1c) {
        local_16 = 0;
        param_2 = (char *)((uint)param_2 & 0xffffff);
        FUN_10af2cd0(local_20,&local_c,(int)&param_2 + 3,1,1);
      }
      else {
        local_18 = 0;
        local_17 = 0;
        if (local_20 != (int *)0x0) {
          if (-1 < DAT_1201fc8c) {
            *local_20 = (int)&DAT_1201fc98;
            FUN_10c3dab0(*local_20 + -0xc);
            local_20 = local_20 + 1;
            goto LAB_10aed15d;
          }
          *local_20 = (int)&DAT_1201fc98;
        }
        local_20 = local_20 + 1;
      }
LAB_10aed15d:
      uVar11 = local_14;
      if ((-1 < DAT_1201fc8c) && (iVar7 = FUN_10c3dad0(&DAT_1201fc8c), uVar11 = local_14, iVar7 < 1)
         ) {
        DAT_123be268 = DAT_123be268 - (DAT_1201fc94 + 0xd);
        FUN_10c3d900(&DAT_1201fc8c);
        uVar11 = local_14;
      }
    }
    FUN_110039f0(&local_2c,0);
    local_14 = uVar11 + 1;
    if (6 < (int)local_14) {
      FUN_10ae74b0(local_20,local_24,0,&local_15);
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      puVar2 = local_28;
      piVar12 = (int *)(local_28 + -0xc);
      if ((-1 < *piVar12) && (iVar7 = FUN_10c3dad0(piVar12), iVar7 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar2 + -4));
        FUN_10c3d900(piVar12);
      }
      return;
    }
  } while( true );
}



/* --- CAvatarInfo::GetManagers_10aed240 @ 10aed240 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Removing unreachable block (ram,0x10aed493) */
/* WARNING: Removing unreachable block (ram,0x10aed4c5) */
/* WARNING: Removing unreachable block (ram,0x10aed573) */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void CAvatarInfo__GetManagers_10aed240(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  size_t _Size;
  undefined1 local_230 [516];
  int local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined **local_10;
  undefined1 *local_c;
  char *local_8;
  
  local_24 = &DAT_1201fc98;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_28 = 7;
  if (param_3 == (char *)0x0) {
    iVar7 = 0;
  }
  else {
    pcVar8 = param_3;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar8 - (int)(param_3 + 1);
  }
  FUN_1083ab70(param_3,iVar7);
  iVar7 = 1;
  do {
    if (param_2 <= iVar7) break;
    local_10 = &PTR_FUN_11dc0b20;
    iVar9 = *(int *)(param_1 + iVar7 * 4);
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar4 = (undefined *)*DAT_123be968;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_10,"CAvatarInfo",0), puVar4 == (undefined *)0x0))
    {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar4 = &DAT_123be704;
    }
    local_10 = &PTR_FUN_11da54a8;
    if ((iVar9 == -1) ||
       ((((iVar9 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
         (iVar6 = *(int *)(puVar4 + 0x28), iVar6 == 0)) ||
        ((iVar9 = iVar9 - *(int *)(puVar4 + 0x30), iVar9 < 0 || (*(int *)(puVar4 + 0x24) <= iVar9)))
        ))) {
LAB_10aed36d:
      iVar9 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar9 / iVar6) * 4);
      if (iVar2 == 0) goto LAB_10aed36d;
      iVar9 = *(int *)(iVar2 + (iVar9 % iVar6) * 4);
    }
    if (iVar9 != 0) {
      piVar5 = (int *)FUN_104f6c30(*(undefined4 *)(iVar9 + 0x2c));
      if (*(int *)(*piVar5 + -0xc) < 0) {
        local_8 = &DAT_1201fc98;
      }
      else {
        local_8 = (char *)*piVar5;
        FUN_10c3dab0(local_8 + -0xc);
      }
      FUN_10a79ae0(&local_8);
      FUN_10a4c990(&DAT_11d9f004,1);
      FUN_10a4c990(&DAT_11cbc0f0,3);
      iVar9 = local_2c;
      piVar5 = (int *)(local_2c + -0xc);
      if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(iVar9 + -4) + 0xd);
        FUN_10c3d900(piVar5);
      }
      pcVar8 = local_8;
      local_230[0] = 0;
      if (local_8 != (char *)0x0) {
        pcVar10 = local_8;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        _Size = (int)pcVar10 - (int)(local_8 + 1);
        if (_Size != 0) {
          FUN_10a7d480(_Size);
          memcpy(local_230,pcVar8,_Size);
        }
      }
      piVar5 = (int *)(pcVar8 + -0xc);
      if ((-1 < *piVar5) && (iVar9 = FUN_10c3dad0(piVar5), iVar9 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar8 + -4) + 0xd);
        FUN_10c3d900(piVar5);
      }
      local_c = &DAT_1201fc98;
      if (local_1c == local_18) {
        local_11 = 0;
        param_3 = (char *)((uint)param_3 & 0xffffff);
        FUN_10af2cd0(local_1c,&local_c,(int)&param_3 + 3,1,1);
      }
      else {
        local_12 = 0;
        local_14 = 0;
        if (local_1c != (int *)0x0) {
          if (-1 < DAT_1201fc8c) {
            *local_1c = (int)&DAT_1201fc98;
            FUN_10c3dab0(*local_1c + -0xc);
            local_1c = local_1c + 1;
            goto LAB_10aed539;
          }
          *local_1c = (int)&DAT_1201fc98;
        }
        local_1c = local_1c + 1;
      }
LAB_10aed539:
      if ((-1 < DAT_1201fc8c) && (iVar9 = FUN_10c3dad0(&DAT_1201fc8c), iVar9 < 1)) {
        DAT_123be268 = DAT_123be268 - (DAT_1201fc94 + 0xd);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    FUN_110039f0(&local_28,0);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 7);
  FUN_10ae74b0(local_1c,local_20,0,&local_13);
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  puVar3 = local_24;
  piVar5 = (int *)(local_24 + -0xc);
  if ((-1 < *piVar5) && (iVar7 = FUN_10c3dad0(piVar5), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
    FUN_10c3d900(piVar5);
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10aed640 @ 10aed640 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi
// strings:
//   ""CAvatarInfo""
//   ""CAvatarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi
   strings:
     ""CAvatarInfo""
     ""CAvatarInfo::GetManagers"" */

void __thiscall
CAvatarInfo__GetManagers_10aed640
          (undefined **param_1,undefined4 param_2,undefined **param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined **local_c;
  undefined4 local_8;
  
  iVar9 = (int)param_3 + 0x4c;
  local_8 = 0;
  iVar3 = *(int *)((int)param_3 + 0x50);
  iVar5 = iVar9;
  if (*(int *)((int)param_3 + 0x50) == 0) {
LAB_10aed681:
    bVar10 = iVar5 == iVar9;
  }
  else {
    do {
      if (*(int *)(iVar3 + 0x10) == 0) {
        iVar6 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar6 = *(int *)(iVar3 + 8);
        iVar5 = iVar3;
      }
      iVar3 = iVar6;
    } while (iVar6 != 0);
    bVar10 = iVar5 == iVar9;
    if (!bVar10) {
      if (1 < *(uint *)(iVar5 + 0x10)) {
        iVar5 = iVar9;
      }
      goto LAB_10aed681;
    }
  }
  local_c = param_1;
  if (!bVar10) {
    pcVar1 = *(char **)(iVar5 + 0x28);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      local_8 = 0;
    }
    else {
      iVar3 = atoi(pcVar1);
      local_8 = FUN_1052bc30(iVar3);
    }
  }
  uVar8 = local_8;
  pcVar1 = *(char **)((int)param_3 + 0x14);
  if (pcVar1 != *(char **)((int)param_3 + 0x10)) {
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      uVar4 = 0;
    }
    else {
      iVar3 = atoi(pcVar1);
      uVar4 = FUN_1052bc30(iVar3);
    }
    FUN_10ad9880(uVar4,uVar8,param_4,1,param_1);
  }
  iVar3 = *(int *)((int)param_3 + 0x54);
  while (iVar3 != iVar9) {
    if (*(int *)(iVar3 + 0x24) != *(int *)(iVar3 + 0x28)) {
      pcVar1 = *(char **)(iVar3 + 0x28);
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
        uVar8 = 0;
      }
      else {
        iVar5 = atoi(pcVar1);
        iVar6 = FUN_1053a880(0,"CAvatarInfo",0);
        param_1 = local_c;
        if (((iVar5 != -1) &&
            (((iVar5 != 0 || (*(int *)(iVar6 + 0x30) == 0)) && (*(int *)(iVar6 + 0x28) != 0)))) &&
           ((iVar5 = iVar5 - *(int *)(iVar6 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar6 + 0x24)))
           )) {
          iVar2 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar5 / *(int *)(iVar6 + 0x28)) * 4);
          if (iVar2 != 0) {
            uVar8 = *(undefined4 *)(iVar2 + (iVar5 % *(int *)(iVar6 + 0x28)) * 4);
            goto LAB_10aed76a;
          }
        }
        uVar8 = 0;
      }
LAB_10aed76a:
      FUN_10ad9880(uVar8,local_8,param_4,1,param_1);
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar5 + 0xc)) {
        do {
          iVar3 = iVar5;
          iVar5 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar5 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar5) {
        iVar3 = iVar5;
      }
    }
    else {
      for (iVar6 = *(int *)(iVar5 + 8); iVar3 = iVar5, iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
        iVar5 = iVar6;
      }
    }
  }
  pcVar1 = *(char **)((int)param_3 + 0x2c);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar3 = atoi(pcVar1);
    local_c = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar7 = (undefined *)*DAT_123be968;
    if ((puVar7 == (undefined *)0x0) &&
       (puVar7 = (undefined *)FUN_11679e10(&local_c,"CAvatarInfo",0), puVar7 == (undefined *)0x0)) {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar7 = &DAT_123be704;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
         (iVar5 = *(int *)(puVar7 + 0x28), iVar5 != 0)) &&
        ((iVar3 = iVar3 - *(int *)(puVar7 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar7 + 0x24))))
        ))) {
      iVar9 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar3 / iVar5) * 4);
      if (iVar9 != 0) {
        uVar8 = *(undefined4 *)(iVar9 + (iVar3 % iVar5) * 4);
        goto LAB_10aed8a0;
      }
    }
  }
  uVar8 = 0;
LAB_10aed8a0:
  FUN_10ad9880(uVar8,local_8,param_4,1,param_1);
  pcVar1 = *(char **)((int)param_3 + 0x44);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar3 = atoi(pcVar1);
    param_3 = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar7 = (undefined *)*DAT_123be968;
    if ((puVar7 == (undefined *)0x0) &&
       (puVar7 = (undefined *)FUN_11679e10(&param_3,"CAvatarInfo",0), puVar7 == (undefined *)0x0)) {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar7 = &DAT_123be704;
    }
    param_3 = &PTR_FUN_11da54a8;
    if (((iVar3 != -1) &&
        (((iVar3 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
         (iVar5 = *(int *)(puVar7 + 0x28), iVar5 != 0)))) &&
       ((iVar3 = iVar3 - *(int *)(puVar7 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar7 + 0x24)))))
    {
      iVar9 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar3 / iVar5) * 4);
      if ((iVar9 != 0) && (iVar3 = *(int *)(iVar9 + (iVar3 % iVar5) * 4), iVar3 != 0)) {
        FUN_110038f0(*(undefined4 *)(iVar3 + 0x2c));
        FUN_110038f0(*(undefined4 *)(iVar3 + 0x6c));
        FUN_110038f0(*(undefined4 *)(iVar3 + 0x44));
        FUN_110038f0(*(undefined4 *)(iVar3 + 0x94));
      }
    }
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10aedad0 @ 10aedad0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, CPetAvatarInfo::GetManagers
// strings:
//   ""CPetAvatarInfo""
//   ""CAvatarInfo""
//   ""CAvatarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, CPetAvatarInfo::GetManagers
   strings:
     ""CPetAvatarInfo""
     ""CAvatarInfo""
     ""CAvatarInfo::GetManagers"" */

void __thiscall
CAvatarInfo__GetManagers_10aedad0
          (undefined4 param_1,undefined4 param_2,int param_3,undefined **param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_8;
  
  pcVar8 = atoi_exref;
  iVar9 = (int)param_4 + 0x4c;
  local_8 = 0;
  iVar3 = *(int *)((int)param_4 + 0x50);
  iVar5 = iVar9;
  if (*(int *)((int)param_4 + 0x50) != 0) {
    do {
      if (*(int *)(iVar3 + 0x10) == 0) {
        iVar6 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar6 = *(int *)(iVar3 + 8);
        iVar5 = iVar3;
      }
      iVar3 = iVar6;
    } while (iVar6 != 0);
    bVar10 = true;
    if (iVar5 == iVar9) goto LAB_10aedb15;
    if (1 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar9;
    }
  }
  bVar10 = iVar5 == iVar9;
LAB_10aedb15:
  if (!bVar10) {
    pcVar1 = *(char **)(iVar5 + 0x28);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      local_8 = 0;
    }
    else {
      iVar3 = atoi(pcVar1);
      local_8 = FUN_1052bc30(iVar3);
    }
  }
  iVar3 = CPetAvatarInfo__GetManagers(0,"CPetAvatarInfo",0);
  if (((param_3 != -1) &&
      (((param_3 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar3 + 0x28), pcVar8 = atoi_exref, iVar5 != 0)))) &&
     ((param_3 = param_3 - *(int *)(iVar3 + 0x30), -1 < param_3 &&
      (param_3 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_3 / iVar5) * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (param_3 % iVar5) * 4), iVar3 != 0)) {
      FUN_110038f0(*(undefined4 *)(iVar3 + 0x28));
      pcVar8 = atoi_exref;
    }
  }
  pcVar1 = *(char **)((int)param_4 + 0x14);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar8)(pcVar1);
    uVar4 = FUN_1052bc30(uVar4);
  }
  FUN_10ad9c00(uVar4,local_8,param_1);
  iVar3 = *(int *)((int)param_4 + 0x54);
  do {
    if (iVar3 == iVar9) {
      pcVar1 = *(char **)((int)param_4 + 0x44);
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        iVar3 = atoi(pcVar1);
        param_4 = &PTR_FUN_11dc0b20;
        if ((DAT_123be984 & 1) == 0) {
          DAT_123be984 = DAT_123be984 | 1;
          FUN_102500e0("CAvatarInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6fd80);
        }
        puVar7 = (undefined *)*DAT_123be968;
        if ((puVar7 == (undefined *)0x0) &&
           (puVar7 = (undefined *)FUN_11679e10(&param_4,"CAvatarInfo",0), puVar7 == (undefined *)0x0
           )) {
          if ((DAT_123be73c & 1) == 0) {
            DAT_123be73c = DAT_123be73c | 1;
            FUN_1053c940();
            FUN_11a8911f(&LAB_11c80a90);
          }
          puVar7 = &DAT_123be704;
        }
        param_4 = &PTR_FUN_11da54a8;
        if ((iVar3 != -1) &&
           ((((iVar3 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
             (iVar5 = *(int *)(puVar7 + 0x28), iVar5 != 0)) &&
            ((iVar3 = iVar3 - *(int *)(puVar7 + 0x30), -1 < iVar3 &&
             (iVar3 < *(int *)(puVar7 + 0x24))))))) {
          iVar9 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar3 / iVar5) * 4);
          if ((iVar9 != 0) && (iVar3 = *(int *)(iVar9 + (iVar3 % iVar5) * 4), iVar3 != 0)) {
            FUN_110038f0(*(undefined4 *)(iVar3 + 0x2c));
            FUN_110038f0(*(undefined4 *)(iVar3 + 0x6c));
          }
        }
      }
      return;
    }
    if (*(int *)(iVar3 + 0x24) != *(int *)(iVar3 + 0x28)) {
      pcVar1 = *(char **)(iVar3 + 0x28);
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
        uVar4 = 0;
      }
      else {
        iVar5 = atoi(pcVar1);
        iVar6 = FUN_1053a880(0,"CAvatarInfo",0);
        if (((iVar5 != -1) &&
            (((iVar5 != 0 || (*(int *)(iVar6 + 0x30) == 0)) && (*(int *)(iVar6 + 0x28) != 0)))) &&
           ((iVar5 = iVar5 - *(int *)(iVar6 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar6 + 0x24)))
           )) {
          iVar2 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar5 / *(int *)(iVar6 + 0x28)) * 4);
          if (iVar2 != 0) {
            uVar4 = *(undefined4 *)(iVar2 + (iVar5 % *(int *)(iVar6 + 0x28)) * 4);
            goto LAB_10aedc47;
          }
        }
        uVar4 = 0;
      }
LAB_10aedc47:
      FUN_10ad9c00(uVar4,local_8,param_1);
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar5 + 0xc)) {
        do {
          iVar3 = iVar5;
          iVar5 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar5 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar5) {
        iVar3 = iVar5;
      }
    }
    else {
      for (iVar6 = *(int *)(iVar5 + 8); iVar3 = iVar5, iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
        iVar5 = iVar6;
      }
    }
  } while( true );
}



/* --- CAvatarInfo::GetManagers_10aeddc0 @ 10aeddc0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memset, memcpy, memmove
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""eye_left""
//   ""eye_right""

/* WARNING: Removing unreachable block (ram,0x10aee6ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memset, memcpy, memmove
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""eye_left""
     ""eye_right"" */

void __fastcall CAvatarInfo__GetManagers_10aeddc0(int *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  size_t _Size;
  int *piVar18;
  undefined4 local_f8 [8];
  uint local_d8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [84];
  undefined1 local_4c;
  int local_48 [3];
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_2d;
  char *local_2c;
  undefined4 *local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  undefined **local_14;
  undefined **local_10;
  char local_9;
  int *local_8;
  
  local_24 = 0;
  if (*(int *)((int)param_1 + 0x18c) == 0) {
    return;
  }
  if (*(int *)((int)param_1 + 400) != 0) {
    return;
  }
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0x3f800000;
  local_4c = 0;
  local_8 = param_1;
  memset(local_a0,0,0x54);
  local_9 = 0;
  iVar15 = *(int *)(*(int *)((int)param_1 + 0x18c) + 0xb0);
  if (iVar15 != 0) {
    FUN_10aef0c0(iVar15,&local_b0);
  }
  local_3c = 0;
  local_38 = 0;
  iVar13 = 0x354;
  local_34 = 0;
  local_18 = 1;
  local_9 = iVar15 != 0;
  do {
    local_10 = &PTR_FUN_11dc0b20;
    *(undefined1 *)(local_18 + 0x221 + *(int *)((int)param_1 + 0x18c)) = 0;
    iVar15 = *(int *)(iVar13 + *(int *)((int)param_1 + 0x18c));
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar4 = (undefined *)*DAT_123be968;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_10,"CAvatarInfo",0), puVar4 == (undefined *)0x0))
    {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c80a90);
      }
      puVar4 = &DAT_123be704;
    }
    local_10 = &PTR_FUN_11da54a8;
    if (((iVar15 != -1) &&
        (((iVar15 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)))) &&
       ((iVar15 = iVar15 - *(int *)(puVar4 + 0x30), -1 < iVar15 &&
        (iVar15 < *(int *)(puVar4 + 0x24))))) {
      iVar6 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar15 / *(int *)(puVar4 + 0x28)) * 4);
      if ((iVar6 != 0) &&
         (iVar15 = *(int *)(iVar6 + (iVar15 % *(int *)(puVar4 + 0x28)) * 4), param_1 = local_8,
         iVar15 != 0)) {
        uVar5 = FUN_104f6c30(*(undefined4 *)(iVar15 + 0x2c),&DAT_11cbc0f0);
        FUN_10a79c50(&local_28,uVar5);
        piVar18 = local_1c;
        piVar9 = local_1c + -3;
        if ((-1 < *piVar9) && (iVar6 = FUN_10c3dad0(piVar9), iVar6 < 1)) {
          DAT_123be268 = DAT_123be268 - (piVar18[-1] + 0xd);
          FUN_10c3d900(piVar9);
        }
        puVar8 = local_28;
        cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(local_28);
        if (cVar3 != '\0') {
          uVar5 = FUN_10a79cc0(&local_20,*(undefined4 *)(iVar15 + 0x2c),&DAT_11cbc0f0);
          FUN_10af3e70(uVar5);
          piVar18 = local_20;
          piVar9 = local_20 + -3;
          if ((-1 < *piVar9) && (iVar15 = FUN_10c3dad0(piVar9), iVar15 < 1)) {
            DAT_123be268 = DAT_123be268 - (piVar18[-1] + 0xd);
            FUN_10c3d900(piVar9);
          }
          *(undefined1 *)(local_18 + 0x221 + *(int *)((int)local_8 + 0x18c)) = 1;
          puVar8 = local_28;
        }
        param_1 = local_8;
        piVar18 = puVar8 + -3;
        if ((-1 < *piVar18) && (iVar15 = FUN_10c3dad0(piVar18), iVar15 < 1)) {
          DAT_123be268 = DAT_123be268 - (puVar8[-1] + 0xd);
          FUN_10c3d900(piVar18);
        }
      }
    }
    iVar13 = iVar13 + 4;
    local_18 = local_18 + 1;
  } while (iVar13 < 0x369);
  iVar13 = 0;
  iVar15 = 0x1fc;
  do {
    iVar6 = *(int *)((int)param_1 + 0x18c);
    *(undefined4 *)(iVar13 + 0xdc + iVar6) = *(undefined4 *)(iVar13 + 0x230 + iVar6);
    iVar7 = iVar6 + 0x234 + iVar13;
    if (iVar7 != iVar6 + 0xe0 + iVar13) {
      FUN_100d83d0(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x10));
    }
    piVar18 = local_8;
    *(undefined4 *)(iVar13 + 0xf8 + iVar6) = *(undefined4 *)(iVar13 + 0x24c + iVar6);
    *(undefined4 *)(iVar13 + 0xfc + iVar6) = *(undefined4 *)(iVar13 + 0x250 + iVar6);
    iVar13 = iVar13 + 0x24;
    *(undefined4 *)(iVar15 + *(int *)((int)local_8 + 0x18c)) =
         *(undefined4 *)(iVar15 + 0x154 + *(int *)((int)local_8 + 0x18c));
    iVar15 = iVar15 + 4;
    param_1 = local_8;
  } while (iVar15 < 0x21c);
  piVar9 = *(int **)(*(int *)((int)local_8 + 0x18c) + 0x28);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))();
    *(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x28) = 0;
  }
  piVar9 = *(int **)(*(int *)((int)piVar18 + 0x18c) + 0x2c);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))();
    *(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x2c) = 0;
  }
  *(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x70) = 0;
  *(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x6c) = 0;
  if (local_38 - local_3c >> 2 == 0) {
    piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0xc))
                              (*(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 8),0,0,0,0);
    local_8 = piVar9;
  }
  else {
    pcVar1 = *(char **)(*(int *)((int)piVar18 + 0x18c) + 8);
    local_2c = &DAT_1201fc98;
    if (pcVar1 != (char *)0x0) {
      pcVar17 = pcVar1;
      do {
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar3 != '\0');
      _Size = (int)pcVar17 - (int)(pcVar1 + 1);
      piVar18 = local_8;
      if (_Size != 0) {
        puVar8 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
        DAT_123be268 = DAT_123be268 + _Size + 0xd;
        *puVar8 = 1;
        local_2c = (char *)(puVar8 + 3);
        puVar8[1] = _Size;
        puVar8[2] = _Size;
        local_2c[_Size] = '\0';
        piVar18 = local_8;
        if (local_2c != pcVar1) {
          memcpy(local_2c,pcVar1,_Size);
          piVar18 = local_8;
        }
      }
    }
    piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0x14))(&local_2c,&local_3c,0,0);
    pcVar1 = local_2c;
    piVar16 = (int *)(local_2c + -0xc);
    local_8 = piVar9;
    if ((-1 < *piVar16) && (iVar15 = FUN_10c3dad0(piVar16), iVar15 < 1)) {
      DAT_123be268 = DAT_123be268 - (*(int *)(pcVar1 + -4) + 0xd);
      FUN_10c3d900(piVar16);
    }
  }
  if (piVar9 == (int *)0x0) goto LAB_10aee6ce;
  (**(code **)(*piVar9 + 0x1c4))(1);
  if (*(int *)(*(int *)((int)piVar18 + 0x18c) + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  *(int **)(*(int *)((int)piVar18 + 0x18c) + 0x24) = local_8;
  (**(code **)(**(int **)(*(int *)((int)piVar18 + 0x18c) + 0x24) + 4))();
  piVar9 = *(int **)((int)piVar18 + 0x18c);
  if ((int *)piVar9[9] != (int *)0x0) {
    piVar16 = (int *)(**(code **)(*(int *)piVar9[9] + 0x58))();
    piVar16 = (int *)(**(code **)(*piVar16 + 0x18))("eye_left");
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0x2c))(piVar9 + 0x1d);
      (**(code **)(*piVar16 + 0x40))();
    }
    piVar16 = (int *)(**(code **)(*(int *)piVar9[9] + 0x58))();
    piVar16 = (int *)(**(code **)(*piVar16 + 0x18))("eye_right");
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0x2c))(piVar9 + 0x24);
      (**(code **)(*piVar16 + 0x40))();
    }
  }
  FUN_10ad9400(local_8,&local_b0);
  local_20 = *(int **)((int)piVar18 + 0x18c);
  piVar16 = (int *)local_20[9];
  if ((piVar16 != (int *)0x0) &&
     (piVar9 = (int *)(**(code **)(*piVar16 + 0x4c))(), piVar9 != (int *)0x0)) {
    FUN_10ab77b0(0,0);
    local_d8 = local_d8 | 0x282;
    local_f8[0] = 0;
    local_1c = (int *)(**(code **)(*piVar16 + 0x60))();
    piVar16 = local_20;
    iVar15 = (**(code **)(*local_1c + 0x14))(local_20[0x8b]);
    if (-1 < iVar15) {
      (**(code **)(*local_1c + 0x68))(iVar15);
      (**(code **)(*piVar9 + 0x28))(piVar16[0x8b],local_f8);
    }
  }
  local_28 = &local_b0;
  if (local_9 == '\0') {
    local_28 = (undefined4 *)0x0;
  }
  FUN_10aebd60(*(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x1fc),&DAT_11d9d32b,local_28,0);
  ppuVar14 = (undefined **)((uint)piVar9 & 0xffffff00);
  local_14 = (undefined **)0x24;
  iVar15 = 1;
  local_18 = 0x200;
  local_10 = ppuVar14;
  do {
    iVar13 = *(int *)(*(int *)((int)piVar18 + 0x18c) + local_18);
    if (iVar13 == 0) {
      FUN_10ad4d20(local_8,iVar15);
    }
    else {
      FUN_10aebd60(iVar13,&DAT_11d9d32b,local_28,
                   (int)local_14 + *(int *)((int)piVar18 + 0x18c) + 0xdc);
      if ((char)ppuVar14 == '\0') {
        iVar6 = *(int *)((int)piVar18 + 0x18c);
        iVar13 = iVar6 + 0xc4;
        local_20 = *(int **)(iVar6 + local_18);
        iVar7 = *(int *)(iVar6 + 200);
        iVar12 = iVar13;
        ppuVar14 = local_10;
        if (iVar7 != 0) {
          do {
            if (*(int *)(iVar7 + 0x10) < iVar15) {
              iVar10 = *(int *)(iVar7 + 0xc);
            }
            else {
              iVar10 = *(int *)(iVar7 + 8);
              iVar12 = iVar7;
            }
            iVar7 = iVar10;
          } while (iVar10 != 0);
          if (iVar12 == iVar13) goto LAB_10aee4ec;
          if (iVar15 < *(int *)(iVar12 + 0x10)) {
            iVar12 = iVar13;
          }
        }
        if (iVar12 != iVar13) {
          local_1c = *(int **)(iVar12 + 0x14);
          iVar7 = iVar13;
          iVar6 = *(int *)(iVar6 + 200);
          while (iVar6 != 0) {
            if (*(int *)(iVar6 + 0x10) < iVar15) {
              iVar6 = *(int *)(iVar6 + 0xc);
            }
            else {
              iVar7 = iVar6;
              iVar6 = *(int *)(iVar6 + 8);
            }
          }
          if ((iVar7 == iVar13) || (local_24 = local_24 | 1, iVar15 < *(int *)(iVar7 + 0x10))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((local_24 & 1) != 0) {
            local_24 = local_24 & 0xfffffffe;
          }
          if (bVar2) {
            local_48[1] = 0;
            local_48[0] = iVar15;
            FUN_10464a20(local_48 + 2,iVar7,local_48);
            iVar7 = local_48[2];
          }
          *(int **)(iVar7 + 0x14) = local_20;
          local_10 = (undefined **)((uint)local_10 & 0xff);
          ppuVar14 = local_10;
          if (local_1c != local_20) {
            local_10 = (undefined **)0x1;
            ppuVar14 = local_10;
          }
        }
      }
    }
LAB_10aee4ec:
    iVar15 = iVar15 + 1;
    local_14 = local_14 + 9;
    local_18 = local_18 + 4;
  } while (local_18 < 0x214);
  local_14 = &PTR_FUN_11dc0b20;
  iVar15 = *(int *)(*(int *)((int)piVar18 + 0x18c) + 0x200);
  if ((DAT_123be984 & 1) == 0) {
    DAT_123be984 = DAT_123be984 | 1;
    FUN_102500e0("CAvatarInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6fd80);
  }
  puVar4 = (undefined *)*DAT_123be968;
  if ((puVar4 == (undefined *)0x0) &&
     (puVar4 = (undefined *)FUN_11679e10(&local_14,"CAvatarInfo",0), puVar4 == (undefined *)0x0)) {
    if ((DAT_123be73c & 1) == 0) {
      DAT_123be708 = 0;
      DAT_123be718 = 0;
      uRam123be71c = 0;
      _DAT_123be720 = 0;
      DAT_123be724 = 0;
      DAT_123be73c = DAT_123be73c | 1;
      _DAT_123be704 = &PTR_FUN_11dc0d54;
      DAT_123be728 = _DAT_11de9ae0;
      DAT_123be72c = _UNK_11de9ae4;
      uRam123be730 = _UNK_11de9ae8;
      DAT_123be734 = _UNK_11de9aec;
      DAT_123be738 = 1;
      DAT_123be70c = puVar4;
      _DAT_123be710 = puVar4;
      _DAT_123be714 = puVar4;
      FUN_11a8911f(&LAB_11c80a90);
    }
    puVar4 = &DAT_123be704;
  }
  local_14 = &PTR_FUN_11da54a8;
  if ((iVar15 == -1) ||
     ((((iVar15 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
       (iVar13 = *(int *)(puVar4 + 0x28), iVar13 == 0)) ||
      ((iVar15 = iVar15 - *(int *)(puVar4 + 0x30), iVar15 < 0 || (*(int *)(puVar4 + 0x24) <= iVar15)
       ))))) {
LAB_10aee610:
    puVar11 = &DAT_11d9d32b;
  }
  else {
    iVar6 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar15 / iVar13) * 4);
    if ((iVar6 == 0) || (iVar15 = *(int *)(iVar6 + (iVar15 % iVar13) * 4), iVar15 == 0))
    goto LAB_10aee610;
    puVar11 = *(undefined1 **)(iVar15 + 0x2c);
  }
  FUN_10aebd60(*(undefined4 *)(*(int *)((int)piVar18 + 0x18c) + 0x214),puVar11,local_28,0);
  (**(code **)(**(int **)((int)piVar18 + 0x18c) + 0x2c))();
  piVar9 = local_8;
  FUN_10afe610(local_8);
  if ((char)local_10 == '\0') {
    puVar8 = *(undefined4 **)(*(int *)((int)piVar18 + 0x18c) + 0xb8);
    if (puVar8 != *(undefined4 **)(*(int *)((int)piVar18 + 0x18c) + 0xbc)) {
      do {
        FUN_10afe4e0(piVar9,*puVar8,0x3f800000);
        puVar8 = puVar8 + 1;
      } while (puVar8 != *(undefined4 **)(*(int *)((int)piVar18 + 0x18c) + 0xbc));
    }
  }
  else {
    iVar15 = *(int *)((int)piVar18 + 0x18c);
    if (*(int *)(iVar15 + 0xb8) != *(int *)(iVar15 + 0xbc)) {
      *(int *)(iVar15 + 0xbc) = *(int *)(iVar15 + 0xb8);
    }
  }
LAB_10aee6ce:
  FUN_10ae74b0(local_38,local_3c,0,&local_2d);
  if (local_3c != 0) {
    FUN_10c3d5d0(local_3c);
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10af7200 @ 10af7200 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""eye_left""
//   ""eye_right""
//   ""Co_0001c_anim""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""eye_left""
     ""eye_right""
     ""Co_0001c_anim"" */

undefined4 __thiscall CAvatarInfo__GetManagers_10af7200(int *param_1,int param_2,char param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  size_t _Size;
  bool bVar15;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char local_7c [8];
  int local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  char local_34 [9];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined **local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  uint local_10;
  char *local_c;
  char local_5;
  
  local_34[0] = '\0';
  local_34[1] = '\0';
  local_34[2] = '\0';
  local_34[3] = '\0';
  local_34[4] = '\0';
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  local_7c[0] = '\0';
  local_7c[1] = '\0';
  local_7c[2] = '\0';
  local_7c[3] = '\0';
  local_7c[4] = '\0';
  local_7c[5] = '\0';
  local_7c[6] = '\0';
  local_7c[7] = '\0';
  bVar15 = (char)param_1[0xb4] == '\0';
  if (bVar15) {
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  local_10 = (uint)bVar15;
  cVar3 = *(char *)(param_2 + 0x6c);
  iVar13 = param_1[0x68];
  *(char *)(param_1 + 0x68) = cVar3;
  if ((char)iVar13 != cVar3) {
    local_10 = 1;
  }
  iVar13 = 0;
  do {
    local_c = *(char **)(param_2 + iVar13 * 0xc);
    if (local_c != (char *)0xffffffff) {
      if (local_c == (char *)0x0) {
        if (param_1[iVar13 * 3 + 0x4d] != 0) {
          param_1[iVar13 * 3 + 0x4d] = 0;
          param_1[iVar13 * 3 + 0x4f] = -1;
          param_1[iVar13 * 3 + 0x4e] = -1;
          local_34[iVar13] = '\x01';
          if (iVar13 == 1) {
            local_34[6] = 1;
            FUN_1083ab70(&DAT_11d9d32b,0);
          }
          if (*(char *)(iVar13 + 0x224 + (int)param_1) != '\0') {
            *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 0;
            FUN_1083ab70(&DAT_11d9d32b,0);
            local_10 = CONCAT31(local_10._1_3_,1);
          }
        }
      }
      else {
        local_24 = &PTR_FUN_11dc0b20;
        if ((DAT_123be984 & 1) == 0) {
          DAT_123be984 = DAT_123be984 | 1;
          FUN_102500e0("CAvatarInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6fd80);
        }
        puVar4 = (undefined *)*DAT_123be968;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_24,"CAvatarInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123be73c & 1) == 0) {
            DAT_123be73c = DAT_123be73c | 1;
            FUN_1053c940();
            FUN_11a8911f(&LAB_11c80c30);
          }
          puVar4 = &DAT_123be704;
        }
        local_24 = &PTR_FUN_11da54a8;
        if (((local_c != (char *)0xffffffff) &&
            (((local_c != (char *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (*(int *)(puVar4 + 0x28) != 0)))) &&
           ((iVar5 = (int)local_c - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
            (iVar5 < *(int *)(puVar4 + 0x24))))) {
          local_c = (char *)(iVar5 % *(int *)(puVar4 + 0x28));
          iVar5 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
          if ((iVar5 != 0) && (local_74[3] = *(int *)(iVar5 + (int)local_c * 4), local_74[3] != 0))
          {
            if (param_1[iVar13 * 3 + 0x4d] != *(int *)(param_2 + iVar13 * 0xc)) {
              local_34[iVar13] = '\x01';
            }
            if ((param_1[iVar13 * 3 + 0x4e] != *(int *)(param_2 + 4 + iVar13 * 0xc)) ||
               (param_1[iVar13 * 3 + 0x4f] != *(int *)(param_2 + 8 + iVar13 * 0xc))) {
              local_7c[iVar13] = '\x01';
            }
            if ((local_34[iVar13] != '\0') || (local_7c[iVar13] != '\0')) {
              piVar11 = (int *)(param_2 + iVar13 * 0xc);
              iVar5 = piVar11[1];
              param_1[iVar13 * 3 + 0x4d] = *piVar11;
              (param_1 + iVar13 * 3 + 0x4d)[1] = iVar5;
              param_1[iVar13 * 3 + 0x4f] = *(int *)(param_2 + 8 + iVar13 * 0xc);
            }
            if (iVar13 == 1) {
              pcVar1 = *(char **)(local_74[3] + 0x2c);
              local_34[6] = 1;
              if (pcVar1 == (char *)0x0) {
                iVar5 = 0;
              }
              else {
                local_c = pcVar1 + 1;
                pcVar14 = pcVar1;
                do {
                  cVar3 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar3 != '\0');
                iVar5 = (int)pcVar14 - (int)local_c;
              }
              FUN_1083ab70(pcVar1,iVar5);
            }
            if (local_34[iVar13] != '\0') {
              FUN_10a79cc0(&local_44,*(undefined4 *)(local_74[3] + 0x2c),&DAT_11cbc0f0);
              iVar5 = local_44;
              cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(local_44);
              if (cVar3 == '\0') {
                if (*(char *)(iVar13 + 0x224 + (int)param_1) != '\0') {
                  *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 0;
                  FUN_1083ac30(&DAT_11d9d32b);
                  goto LAB_10af74db;
                }
              }
              else {
                *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 1;
                FUN_10a72410(&local_44);
LAB_10af74db:
                local_10 = CONCAT31(local_10._1_3_,1);
              }
              piVar11 = (int *)(iVar5 + -0xc);
              if ((-1 < *piVar11) && (iVar6 = FUN_10c3dad0(piVar11), iVar6 < 1)) {
                DAT_123be268 = DAT_123be268 - (*(int *)(iVar5 + -4) + 0xd);
                FUN_10c3d900(piVar11);
              }
            }
          }
        }
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  local_5 = '\0';
  if ((*(int *)(param_2 + 0x70) != -1) &&
     ((param_1[0x69] != *(int *)(param_2 + 0x70) || ((char)param_1[0xb1] != '\0')))) {
    *(undefined1 *)(param_1 + 0xb1) = 0;
    param_1[0x69] = *(int *)(param_2 + 0x70);
    local_5 = '\x01';
    param_1[0x6a] = *(int *)(param_2 + 0x74);
  }
  piVar11 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  if ((char)local_10 != '\0') {
    iVar13 = 0;
    piVar9 = param_1 + 0x8b;
    do {
      if (*(char *)((int)param_1 + iVar13 + 0x224) != '\0') {
        if (piVar11 == local_18) {
          local_25 = 0;
          local_11 = 0;
          FUN_10af2cd0(piVar11,piVar9,&local_11,1,1);
          piVar11 = local_1c;
        }
        else {
          local_2a = 0;
          local_26 = 0;
          piVar12 = (int *)0x0;
          if (piVar11 != (int *)0x0) {
            if (-1 < *(int *)(*piVar9 + -0xc)) {
              *local_1c = *piVar9;
              FUN_10c3dab0(*piVar11 + -0xc);
              local_1c = local_1c + 1;
              piVar11 = local_1c;
              goto LAB_10af75e1;
            }
            *local_1c = (int)&DAT_1201fc98;
            piVar12 = local_1c;
          }
          local_1c = piVar12 + 1;
          piVar11 = local_1c;
        }
      }
LAB_10af75e1:
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 < 8);
    if ((int)piVar11 - local_20 >> 2 == 0) {
      (**(code **)(*(int *)param_1[0x14] + 0x1d4))(0,param_1[0x2c],1);
    }
    else {
      pcVar1 = (char *)param_1[0x2c];
      local_c = &DAT_1201fc98;
      if (pcVar1 != (char *)0x0) {
        pcVar14 = pcVar1;
        do {
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        _Size = (int)pcVar14 - (int)(pcVar1 + 1);
        if (_Size != 0) {
          puVar7 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
          DAT_123be268 = DAT_123be268 + _Size + 0xd;
          *puVar7 = 1;
          local_c = (char *)(puVar7 + 3);
          puVar7[1] = _Size;
          puVar7[2] = _Size;
          local_c[_Size] = '\0';
          if (local_c != pcVar1) {
            memcpy(local_c,pcVar1,_Size);
          }
        }
      }
      (**(code **)(*(int *)param_1[0x14] + 0x1d8))(0,&local_c,&local_20,1);
      pcVar1 = local_c;
      piVar11 = (int *)(local_c + -0xc);
      if ((-1 < *piVar11) && (iVar13 = FUN_10c3dad0(piVar11), iVar13 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar1 + -4) + 0xd);
        FUN_10c3d900(piVar11);
      }
    }
    FUN_10af62d0();
  }
  piVar11 = (int *)(**(code **)(*(int *)param_1[0x14] + 0x1b8))(0);
  if (piVar11 == (int *)0x0) goto LAB_10af7b70;
  iVar13 = *piVar11;
  uVar8 = (**(code **)(iVar13 + 0xc0))();
  (**(code **)(iVar13 + 0xbc))(uVar8 | 0x10);
  (**(code **)(*piVar11 + 0x1c4))(1);
  if (param_3 != '\0') {
    iVar13 = 0;
    do {
      FUN_10ad4d20(piVar11,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  if ((char)local_10 == '\0') {
    iVar13 = 0;
    do {
      if ((local_34[iVar13] != '\0') || (local_7c[iVar13] != '\0')) {
        FUN_10af6810(piVar11,iVar13);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  else {
    piVar9 = (int *)(**(code **)(*piVar11 + 0x58))();
    piVar9 = (int *)(**(code **)(*piVar9 + 0x18))("eye_left");
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x2c))(param_1 + 0x1c);
      (**(code **)(*piVar9 + 0x40))();
    }
    piVar9 = (int *)(**(code **)(*piVar11 + 0x58))();
    piVar9 = (int *)(**(code **)(*piVar9 + 0x18))("eye_right");
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x2c))(param_1 + 0x23);
      (**(code **)(*piVar9 + 0x40))();
    }
    FUN_10ad9400(piVar11,param_1 + 0x94);
    iVar13 = 0;
    do {
      FUN_10af6810(piVar11,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  bVar15 = true;
  piVar9 = param_1 + 0x32;
  iVar13 = 1;
  do {
    if (piVar9[0x1e] != *piVar9) {
      bVar2 = false;
      bVar15 = false;
      goto LAB_10af77fa;
    }
    iVar13 = iVar13 + 1;
    piVar9 = piVar9 + 3;
  } while (iVar13 < 6);
  bVar2 = true;
LAB_10af77fa:
  local_40 = 0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  if ((bVar2) && (FUN_10463d60(param_1 + 0x47), puVar7 = local_50, local_50 != local_4c)) {
    do {
      if (local_3c == local_38) {
        FUN_1053b850(local_3c,puVar7,&local_2b,1,1);
      }
      else {
        *local_3c = *puVar7;
        local_3c = local_3c + 1;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_4c);
  }
  iVar13 = *piVar11;
  uVar10 = (**(code **)(*(int *)param_1[0x14] + 0x48))(&local_40,0x3f800000);
  (**(code **)(iVar13 + 0x1e4))(uVar10);
  uVar8 = param_1[0xaf] & 3;
  if (uVar8 == 0) {
    piVar9 = (int *)(**(code **)(*piVar11 + 0x4c))();
    if (piVar9 != (int *)0x0) {
      local_c0 = _DAT_11cc2bf0;
      uStack_bc = _UNK_11cc2bf4;
      uStack_b8 = _UNK_11cc2bf8;
      uStack_b4 = _UNK_11cc2bfc;
      local_b0 = 0x3f800000;
      local_ac = 0;
      local_a8 = 0x3f800000;
      local_a0 = 0;
      local_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      local_a4 = 0x282;
      local_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      local_c4 = 0;
      piVar11 = (int *)(**(code **)(*piVar11 + 0x60))();
      iVar13 = (**(code **)(*piVar11 + 0x14))("Co_0001c_anim");
      if (-1 < iVar13) {
        (**(code **)(*piVar11 + 0x68))(iVar13);
        (**(code **)(*piVar9 + 0x28))("Co_0001c_anim",&local_c4);
      }
    }
  }
  else if (((char)local_10 != '\0') || (local_5 != '\0')) {
    FUN_10af70a0(1);
    if (param_1[0x69] != 0) {
      if (uVar8 == 1) {
        uVar10 = 1;
      }
      else {
        if (uVar8 != 2) goto LAB_10af7986;
        uVar10 = 0;
      }
      FUN_10af6a10(param_1[0x69],uVar10);
    }
LAB_10af7986:
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    local_60 = 2;
    FUN_10463c40(0,&local_60,&local_29,1,1);
    FUN_10b57d60(param_1[0x6a],local_74,&local_5c);
    cVar3 = FUN_10b57e50();
    if ((cVar3 == '\x01') && (iVar13 = local_5c, local_5c != local_58)) {
      do {
        FUN_116a5560();
        puVar7 = (undefined4 *)FUN_116a5550();
        iVar5 = param_1[0xb2];
        local_64 = *puVar7;
        if (iVar5 == 0) {
          FUN_10af7c70(local_64);
        }
        else {
          puVar7 = *(undefined4 **)(iVar5 + 0xcc);
          if (puVar7 == *(undefined4 **)(iVar5 + 0xd0)) {
            FUN_10463c40(puVar7,&local_64,&local_27,1,1);
          }
          else {
            *puVar7 = local_64;
            *(int *)(iVar5 + 0xcc) = *(int *)(iVar5 + 0xcc) + 4;
          }
        }
        iVar13 = iVar13 + 4;
      } while (iVar13 != local_58);
    }
    (**(code **)(*param_1 + 0xc))(param_1 + 1);
    if (local_74[0] != 0) {
      FUN_10c3d5d0(local_74[0]);
    }
    if (local_5c != 0) {
      FUN_10c3d5d0(local_5c);
    }
  }
  if ((bVar15) && ((param_1[0x48] - param_1[0x47] & 0xfffffffcU) != 0)) {
    if (((int *)param_1[0x14] != (int *)0x0) &&
       (iVar13 = (**(code **)(*(int *)param_1[0x14] + 0x1b8))(0), iVar13 != 0)) {
      FUN_10afe610(iVar13);
      uVar8 = 0;
      iVar5 = param_1[0x47];
      if (param_1[0x48] - iVar5 >> 2 != 0) {
        do {
          FUN_10afe4e0(iVar13,*(undefined4 *)(iVar5 + uVar8 * 4),0x3f800000);
          uVar8 = uVar8 + 1;
          iVar5 = param_1[0x47];
        } while (uVar8 < (uint)(param_1[0x48] - iVar5 >> 2));
      }
    }
  }
  else if (((int *)param_1[0x14] != (int *)0x0) &&
          (iVar13 = (**(code **)(*(int *)param_1[0x14] + 0x1b8))(0), iVar13 != 0)) {
    FUN_10afe610(iVar13);
  }
  if (local_50 != (undefined4 *)0x0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_40 != 0) {
    FUN_10c3d5d0(local_40);
  }
LAB_10af7b70:
  if ((((char)local_10 != '\0') && (param_1[0x14] != 0)) &&
     (piVar11 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f4))(),
     piVar11 != (int *)0x0)) {
    (**(code **)(*piVar11 + 0x24))(param_1[0x14]);
  }
  FUN_10ae74b0(local_1c,local_20,0,&local_28);
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  return 1;
}



/* --- CAvatarInfo::GetManagers_10b7b3a0 @ 10b7b3a0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memcpy, _itoa, sprintf
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""CFaceInfo::GetManagers""
//   ""CFaceInfo""
//   ""Objects/characters/player/female/female_skeleton_""
//   ""Objects/characters/player/male/male_skeleton_""
//   ""Libs\\Config\\UIInput.xml""
//   ""Objects/weapons/p/novice001_we_p/novice001_we_p_z.fxparams""
//   ""/Scripts/Entities/Items/XML/Weapons/M010CatWeapon_firemode.xml""
//   ""/Scripts/Entities/Items/XML/Weapons/Jade_firemode.xml""

/* WARNING: Removing unreachable block (ram,0x10b7c9ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memcpy, _itoa, sprintf
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""CFaceInfo::GetManagers""
     ""CFaceInfo""
     ""Objects/characters/player/female/female_skeleton_""
     ""Objects/characters/player/male/male_skeleton_""
     ""Libs\\Config\\UIInput.xml""
     ""Objects/weapons/p/novice001_we_p/novice001_we_p_z.fxparams""
     ""/Scripts/Entities/Items/XML/Weapons/M010CatWeapon_firemode.xml""
     ""/Scripts/Entities/Items/XML/Weapons/Jade_firemode.xml"" */

void __fastcall CAvatarInfo__GetManagers_10b7b3a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  char *pcVar19;
  size_t sVar20;
  int *piVar21;
  char *pcVar22;
  size_t sVar23;
  undefined1 local_514 [512];
  char local_314 [48];
  int local_2e4 [4];
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  char local_278 [16];
  size_t local_268;
  uint local_264;
  undefined1 *local_260;
  undefined1 local_25c [45];
  undefined1 local_22f;
  undefined1 local_22b;
  int local_5c;
  int local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  int *local_40;
  undefined **local_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined **local_30;
  undefined1 *local_2c;
  int local_28;
  char *local_24;
  char *local_20;
  undefined *local_1c;
  char *local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puVar5 = (uint *)(*(int *)(param_1 + 0x124) + -4);
  uVar15 = *puVar5;
  if ((int)uVar15 < 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x124) + uVar15 * 4);
    if (bVar1 == 0) {
      uVar6 = *(uint *)((uint)(puVar5 + uVar15 + 2) & 0xfffffffc);
    }
    else {
      uVar6 = (uint)bVar1;
    }
    uVar15 = (uVar15 & 0x7fffffff) + uVar6;
  }
  local_10 = param_1;
  if (uVar15 != 0) {
    FUN_10b7f150(0,0,0);
  }
  FUN_10b7e590();
  puVar5 = (uint *)(*(int *)(param_1 + 300) + -4);
  uVar15 = *puVar5;
  if ((int)uVar15 < 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 300) + uVar15 * 4);
    if (bVar1 == 0) {
      uVar6 = *(uint *)((uint)(puVar5 + uVar15 + 2) & 0xfffffffc);
    }
    else {
      uVar6 = (uint)bVar1;
    }
    uVar15 = (uVar15 & 0x7fffffff) + uVar6;
  }
  if (uVar15 != 0) {
    FUN_10b7f290(0,0,0);
  }
  puVar17 = &DAT_0000001b;
  local_2e4[0] = _DAT_11cc9940;
  local_2e4[1] = _UNK_11cc9944;
  local_2e4[2] = _UNK_11cc9948;
  local_2e4[3] = _UNK_11cc994c;
  local_284 = 0x35ee9;
  local_280 = 0x4e589;
  local_27c = 0x7f2c9;
  local_c = &DAT_0000001b;
  local_2d4 = _DAT_11cc9900;
  uStack_2d0 = _UNK_11cc9904;
  uStack_2cc = _UNK_11cc9908;
  uStack_2c8 = _UNK_11cc990c;
  local_2c4 = _DAT_11cc9920;
  uStack_2c0 = _UNK_11cc9924;
  uStack_2bc = _UNK_11cc9928;
  uStack_2b8 = _UNK_11cc992c;
  local_2b4 = _DAT_11cc98f0;
  uStack_2b0 = _UNK_11cc98f4;
  uStack_2ac = _UNK_11cc98f8;
  uStack_2a8 = _UNK_11cc98fc;
  local_2a4 = _DAT_11cc9910;
  uStack_2a0 = _UNK_11cc9914;
  uStack_29c = _UNK_11cc9918;
  uStack_298 = _UNK_11cc991c;
  local_294 = _DAT_11cc9930;
  uStack_290 = _UNK_11cc9934;
  uStack_28c = _UNK_11cc9938;
  uStack_288 = _UNK_11cc993c;
  if ((int *)DAT_1202e818[0x34] != (int *)0x0) {
    cVar4 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x164))();
    if (cVar4 != '\0') {
      puVar17 = &DAT_0000000f;
    }
    local_c = puVar17;
  }
  puVar17 = local_c;
  iVar16 = *(int *)(param_1 + 0x124);
  uVar15 = *(uint *)(iVar16 + -4);
  if ((int)uVar15 < 0) {
    bVar1 = *(byte *)(iVar16 + uVar15 * 4);
    if (bVar1 == 0) {
      uVar15 = (uVar15 & 0x7fffffff) + *(int *)(iVar16 + 4 + uVar15 * 4 & 0xfffffffc);
    }
    else {
      uVar15 = (uVar15 & 0x7fffffff) + (uint)bVar1;
    }
  }
  if ((int)uVar15 < (int)local_c * 2) {
    FUN_10b7f150(*(uint *)(iVar16 + -4) & 0x7fffffff,(int)local_c * 2,0);
  }
  iVar16 = 0;
  if (puVar17 != (undefined1 *)0x0) {
    do {
      iVar18 = local_2e4[iVar16];
      local_3c = &PTR_FUN_11dc0b20;
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        FUN_102500e0("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar7 = (undefined *)*DAT_123be968;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_3c,"CAvatarInfo",0), puVar7 == (undefined *)0x0)
         ) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be708 = 0;
          DAT_123be718 = 0;
          uRam123be71c = 0;
          _DAT_123be720 = 0;
          DAT_123be724 = 0;
          DAT_123be73c = DAT_123be73c | 1;
          _DAT_123be704 = &PTR_FUN_11dc0d54;
          DAT_123be728 = _DAT_11de9ae0;
          DAT_123be72c = _UNK_11de9ae4;
          uRam123be730 = _UNK_11de9ae8;
          DAT_123be734 = _UNK_11de9aec;
          DAT_123be738 = 1;
          DAT_123be70c = puVar7;
          _DAT_123be710 = puVar7;
          _DAT_123be714 = puVar7;
          FUN_11a8911f(&LAB_11c842b0);
        }
        puVar7 = &DAT_123be704;
      }
      local_3c = &PTR_FUN_11da54a8;
      if (((iVar18 != -1) &&
          (((iVar18 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
           (iVar2 = *(int *)(puVar7 + 0x28), iVar2 != 0)))) &&
         ((iVar18 = iVar18 - *(int *)(puVar7 + 0x30), -1 < iVar18 &&
          (iVar18 < *(int *)(puVar7 + 0x24))))) {
        iVar3 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar18 / iVar2) * 4);
        if ((iVar3 != 0) && (iVar18 = *(int *)(iVar3 + (iVar18 % iVar2) * 4), iVar18 != 0)) {
          cVar4 = FUN_100fd0c0(iVar18 + 0x18,&DAT_11d9d32b);
          if ((cVar4 == '\0') &&
             (piVar8 = (int *)(**(code **)(*(int *)DAT_1202e818[0x19] + 0xc))
                                        (*(undefined4 *)(iVar18 + 0x2c),0,0,0,0),
             piVar8 != (int *)0x0)) {
            (**(code **)(*piVar8 + 4))();
            puVar9 = (undefined4 *)
                     FUN_10b7e8f0(*(int *)(local_10 + 0x124) +
                                  *(int *)(*(int *)(local_10 + 0x124) + -4) * 4,1);
            puVar13 = puVar9 + 1;
            for (; puVar9 != puVar13; puVar9 = puVar9 + 1) {
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = piVar8;
              }
            }
          }
          cVar4 = FUN_100fd0c0(iVar18 + 0x30,&DAT_11d9d32b);
          if ((cVar4 == '\0') &&
             (piVar8 = (int *)(**(code **)(*(int *)DAT_1202e818[0x19] + 0xc))
                                        (*(undefined4 *)(iVar18 + 0x44),0,0,0,0),
             piVar8 != (int *)0x0)) {
            (**(code **)(*piVar8 + 4))();
            puVar9 = (undefined4 *)
                     FUN_10b7e8f0(*(int *)(local_10 + 0x124) +
                                  *(int *)(*(int *)(local_10 + 0x124) + -4) * 4,1);
            puVar13 = puVar9 + 1;
            for (; puVar9 != puVar13; puVar9 = puVar9 + 1) {
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = piVar8;
              }
            }
          }
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_c);
  }
  local_30 = &PTR_FUN_11dcf994;
  if ((DAT_123c74fc & 1) == 0) {
    DAT_123c74fc = DAT_123c74fc | 1;
    FUN_102500e0("CFaceInfo::GetManagers");
    FUN_11a8911f(&LAB_11c72b40);
  }
  pppuVar10 = (undefined ***)*DAT_123c7500;
  if ((pppuVar10 == (undefined ***)0x0) &&
     (pppuVar10 = (undefined ***)FUN_11679e10(&local_30,"CFaceInfo",0),
     pppuVar10 == (undefined ***)0x0)) {
    if ((DAT_123c7598 & 1) == 0) {
      DAT_123c75a0 = 0;
      DAT_123c75b0 = 0;
      DAT_123c75b4 = 0;
      _DAT_123c75b8 = 0;
      uRam123c75bc = 0;
      DAT_123c7598 = DAT_123c7598 | 1;
      DAT_123c759c = &PTR_FUN_11dcf99c;
      _DAT_123c75c0 = _DAT_11de9ae0;
      uRam123c75c4 = _UNK_11de9ae4;
      uRam123c75c8 = _UNK_11de9ae8;
      uRam123c75cc = _UNK_11de9aec;
      DAT_123c75d0 = 1;
      DAT_123c75a4 = (int *)pppuVar10;
      _DAT_123c75a8 = pppuVar10;
      _DAT_123c75ac = pppuVar10;
      FUN_11a8911f(&LAB_11c84310);
    }
    pppuVar10 = &DAT_123c759c;
  }
  local_30 = &PTR_FUN_11da54a8;
  local_28 = (*(code *)(*pppuVar10)[10])();
  local_14 = (undefined1 *)0x0;
  if (0 < local_28) {
    do {
      puVar17 = local_14;
      local_38 = &PTR_FUN_11dcf994;
      if ((DAT_123c74fc & 1) == 0) {
        DAT_123c74fc = DAT_123c74fc | 1;
        FUN_102500e0("CFaceInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72b40);
      }
      pppuVar10 = (undefined ***)*DAT_123c7500;
      if ((pppuVar10 == (undefined ***)0x0) &&
         (pppuVar10 = (undefined ***)FUN_11679e10(&local_38,"CFaceInfo",0),
         pppuVar10 == (undefined ***)0x0)) {
        if ((DAT_123c7598 & 1) == 0) {
          DAT_123c75a0 = 0;
          DAT_123c75b0 = 0;
          DAT_123c75b4 = 0;
          _DAT_123c75b8 = 0;
          uRam123c75bc = 0;
          DAT_123c7598 = DAT_123c7598 | 1;
          DAT_123c759c = &PTR_FUN_11dcf99c;
          _DAT_123c75c0 = _DAT_11de9ae0;
          uRam123c75c4 = _UNK_11de9ae4;
          uRam123c75c8 = _UNK_11de9ae8;
          uRam123c75cc = _UNK_11de9aec;
          DAT_123c75d0 = 1;
          DAT_123c75a4 = (int *)pppuVar10;
          _DAT_123c75a8 = pppuVar10;
          _DAT_123c75ac = pppuVar10;
          FUN_11a8911f(&LAB_11c84310);
        }
        pppuVar10 = &DAT_123c759c;
      }
      local_38 = &PTR_FUN_11da54a8;
      if (((int)puVar17 < 0) || ((int)pppuVar10[6] - (int)pppuVar10[5] >> 2 <= (int)puVar17)) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = pppuVar10[5][(int)puVar17];
      }
      local_260 = local_25c;
      local_25c[0] = 0;
      local_264 = 0x1ff;
      local_268 = 0x31;
      local_22b = 0;
      local_1c = puVar7;
      memcpy(local_260,"Objects/characters/player/female/female_skeleton_",0x31);
      local_18 = _itoa(*(int *)(puVar7 + 0x10),local_278,10);
      sVar23 = local_268;
      if (local_18 != (char *)0x0) {
        pcVar19 = local_18;
        do {
          cVar4 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        } while (cVar4 != '\0');
        sVar20 = (int)pcVar19 - (int)(local_18 + 1);
        if (sVar20 != 0) {
          uVar15 = sVar20 + local_268;
          if (local_264 < uVar15) {
            local_c = local_260;
            if (uVar15 < local_268 * 2) {
              uVar15 = local_268 * 2;
            }
            if (uVar15 != 0) {
              puVar17 = local_25c;
              if (uVar15 < 8) {
                uVar15 = 8;
              }
              if (uVar15 + 1 < 0x201) {
                local_264 = 0x1ff;
              }
              else {
                puVar17 = (undefined1 *)FUN_10c3d780(uVar15 + 1);
                DAT_1202015c = DAT_1202015c + uVar15 + 1;
                local_264 = uVar15;
              }
              puVar11 = local_c;
              puVar17[uVar15] = 0;
              local_268 = uVar15;
              local_260 = puVar17;
              memcpy(puVar17,puVar11,sVar23);
              memcpy(local_260 + sVar23,local_18,sVar20);
              local_268 = sVar23 + sVar20;
              local_260[local_268] = 0;
            }
            if (local_c != local_25c) {
              DAT_1202015c = DAT_1202015c + (-1 - local_264);
              FUN_10c3d900(local_c);
            }
          }
          else {
            memcpy(local_260 + local_268,local_18,sVar20);
            local_268 = local_268 + sVar20;
            local_260[local_268] = 0;
          }
        }
      }
      puVar17 = local_260;
      sVar23 = local_268;
      uVar15 = local_268 + 4;
      if (local_264 < uVar15) {
        if (uVar15 < local_268 * 2) {
          uVar15 = local_268 * 2;
        }
        if (uVar15 != 0) {
          puVar11 = local_25c;
          if (uVar15 < 8) {
            uVar15 = 8;
          }
          if (uVar15 + 1 < 0x201) {
            local_264 = 0x1ff;
          }
          else {
            puVar11 = (undefined1 *)FUN_10c3d780(uVar15 + 1);
            DAT_1202015c = DAT_1202015c + uVar15 + 1;
            local_264 = uVar15;
          }
          puVar11[uVar15] = 0;
          local_268 = uVar15;
          local_260 = puVar11;
          memcpy(puVar11,puVar17,sVar23);
          *(undefined4 *)(local_260 + sVar23) = DAT_11cc927c;
          local_268 = sVar23 + 4;
          local_260[local_268] = 0;
        }
        if (puVar17 != local_25c) {
          DAT_1202015c = DAT_1202015c + (-1 - local_264);
          FUN_10c3d900(puVar17);
        }
      }
      else {
        *(undefined4 *)(local_260 + local_268) = DAT_11cc927c;
        local_268 = local_268 + 4;
        local_260[local_268] = 0;
      }
      piVar8 = (int *)(**(code **)(*(int *)DAT_1202e818[0x19] + 0xc))(local_260,0,0,0x8000,0);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
        iVar16 = *(int *)(local_10 + 0x124);
        uVar6 = *(uint *)(iVar16 + -4);
        puVar13 = (undefined4 *)(iVar16 + *(uint *)(iVar16 + -4) * 4);
        uVar15 = (*(uint *)(iVar16 + -4) & 0x7fffffff) + 1;
        if ((int)uVar6 < 0) {
          bVar1 = *(byte *)(iVar16 + uVar6 * 4);
          if (bVar1 == 0) {
            uVar6 = (uVar6 & 0x7fffffff) + *(int *)(iVar16 + 4 + uVar6 * 4 & 0xfffffffc);
          }
          else {
            uVar6 = (uVar6 & 0x7fffffff) + (uint)bVar1;
          }
        }
        if ((int)uVar6 < (int)uVar15) {
          FUN_10b7f150(uVar15,uVar15,1 < (int)uVar15);
          puVar13 = (undefined4 *)(*(int *)(local_10 + 0x124) + ((int)puVar13 - iVar16 >> 2) * 4);
        }
        else {
          uVar6 = *(uint *)(iVar16 + -4);
          if ((int)uVar6 < 0) {
            bVar1 = *(byte *)(iVar16 + uVar6 * 4);
            if (bVar1 == 0) {
              uVar6 = (uVar6 & 0x7fffffff) + *(int *)(iVar16 + 4 + uVar6 * 4 & 0xfffffffc);
            }
            else {
              uVar6 = (uVar6 & 0x7fffffff) + (uint)bVar1;
            }
          }
          *(uint *)(iVar16 + -4) = uVar15;
          if ((int)uVar15 < (int)uVar6) {
            iVar18 = uVar6 - uVar15;
            *(uint *)(iVar16 + -4) = uVar15 | 0x80000000;
            if (iVar18 < 0x100) {
              *(char *)(iVar16 + uVar15 * 4) = (char)iVar18;
            }
            else {
              *(undefined1 *)(iVar16 + uVar15 * 4) = 0;
              *(int *)(iVar16 + 4 + uVar15 * 4 & 0xfffffffc) = iVar18;
            }
          }
        }
        puVar9 = puVar13 + 1;
        for (; puVar13 != puVar9; puVar13 = puVar13 + 1) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = piVar8;
          }
        }
      }
      if (local_264 < 0x2d) {
        if (local_260 != local_25c) {
          DAT_1202015c = DAT_1202015c + (-1 - local_264);
          FUN_10c3d900(local_260);
        }
        local_260 = local_25c;
        local_25c[0] = 0;
        local_264 = 0x1ff;
        local_22f = 0;
      }
      memcpy(local_260,"Objects/characters/player/male/male_skeleton_",0x2d);
      local_268 = 0x2d;
      local_260[0x2d] = 0;
      local_18 = _itoa(*(int *)(local_1c + 0x10),local_278,10);
      sVar23 = local_268;
      if (local_18 != (char *)0x0) {
        pcVar19 = local_18;
        do {
          cVar4 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        } while (cVar4 != '\0');
        sVar20 = (int)pcVar19 - (int)(local_18 + 1);
        if (sVar20 != 0) {
          uVar15 = local_268 + sVar20;
          if (local_264 < uVar15) {
            local_c = local_260;
            if (uVar15 < local_268 * 2) {
              uVar15 = local_268 * 2;
            }
            if (uVar15 != 0) {
              puVar17 = local_25c;
              if (uVar15 < 8) {
                uVar15 = 8;
              }
              if (uVar15 + 1 < 0x201) {
                local_264 = 0x1ff;
              }
              else {
                puVar17 = (undefined1 *)FUN_10c3d780(uVar15 + 1);
                DAT_1202015c = DAT_1202015c + uVar15 + 1;
                local_264 = uVar15;
              }
              puVar11 = local_c;
              puVar17[uVar15] = 0;
              local_268 = uVar15;
              local_260 = puVar17;
              memcpy(puVar17,puVar11,sVar23);
              memcpy(local_260 + sVar23,local_18,sVar20);
              local_268 = sVar20 + sVar23;
              local_260[sVar23 + sVar20] = 0;
            }
            if (local_c != local_25c) {
              DAT_1202015c = DAT_1202015c + (-1 - local_264);
              FUN_10c3d900(local_c);
            }
          }
          else {
            memcpy(local_260 + local_268,local_18,sVar20);
            local_268 = local_268 + sVar20;
            local_260[local_268] = 0;
          }
        }
      }
      puVar17 = local_260;
      sVar23 = local_268;
      uVar15 = local_268 + 4;
      if (local_264 < uVar15) {
        if (uVar15 < local_268 * 2) {
          uVar15 = local_268 * 2;
        }
        if (uVar15 != 0) {
          puVar11 = local_25c;
          if (uVar15 < 8) {
            uVar15 = 8;
          }
          if (uVar15 + 1 < 0x201) {
            local_264 = 0x1ff;
          }
          else {
            puVar11 = (undefined1 *)FUN_10c3d780(uVar15 + 1);
            DAT_1202015c = DAT_1202015c + uVar15 + 1;
            local_264 = uVar15;
          }
          puVar11[uVar15] = 0;
          local_268 = uVar15;
          local_260 = puVar11;
          memcpy(puVar11,puVar17,sVar23);
          *(undefined4 *)(local_260 + sVar23) = DAT_11cc927c;
          local_268 = sVar23 + 4;
          local_260[sVar23 + 4] = 0;
        }
        if (puVar17 != local_25c) {
          DAT_1202015c = DAT_1202015c + (-1 - local_264);
          FUN_10c3d900(puVar17);
        }
      }
      else {
        *(undefined4 *)(local_260 + local_268) = DAT_11cc927c;
        local_268 = local_268 + 4;
        local_260[local_268] = 0;
      }
      piVar8 = (int *)(**(code **)(*(int *)DAT_1202e818[0x19] + 0xc))(local_260,0,0,0x8000,0);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
        iVar16 = *(int *)(local_10 + 0x124);
        uVar6 = *(uint *)(iVar16 + -4);
        puVar13 = (undefined4 *)(iVar16 + *(uint *)(iVar16 + -4) * 4);
        uVar15 = (*(uint *)(iVar16 + -4) & 0x7fffffff) + 1;
        if ((int)uVar6 < 0) {
          bVar1 = *(byte *)(iVar16 + uVar6 * 4);
          if (bVar1 == 0) {
            uVar6 = (uVar6 & 0x7fffffff) + *(int *)(iVar16 + 4 + uVar6 * 4 & 0xfffffffc);
          }
          else {
            uVar6 = (uVar6 & 0x7fffffff) + (uint)bVar1;
          }
        }
        if ((int)uVar6 < (int)uVar15) {
          FUN_10b7f150(uVar15,uVar15,1 < (int)uVar15);
          puVar13 = (undefined4 *)(*(int *)(local_10 + 0x124) + ((int)puVar13 - iVar16 >> 2) * 4);
        }
        else {
          uVar6 = *(uint *)(iVar16 + -4);
          if ((int)uVar6 < 0) {
            bVar1 = *(byte *)(iVar16 + uVar6 * 4);
            if (bVar1 == 0) {
              uVar6 = (uVar6 & 0x7fffffff) + *(int *)(iVar16 + 4 + uVar6 * 4 & 0xfffffffc);
            }
            else {
              uVar6 = (uVar6 & 0x7fffffff) + (uint)bVar1;
            }
          }
          *(uint *)(iVar16 + -4) = uVar15;
          if ((int)uVar15 < (int)uVar6) {
            iVar18 = uVar6 - uVar15;
            *(uint *)(iVar16 + -4) = uVar15 | 0x80000000;
            if (iVar18 < 0x100) {
              *(char *)(iVar16 + uVar15 * 4) = (char)iVar18;
            }
            else {
              *(undefined1 *)(iVar16 + uVar15 * 4) = 0;
              *(int *)(iVar16 + 4 + uVar15 * 4 & 0xfffffffc) = iVar18;
            }
          }
        }
        puVar9 = puVar13 + 1;
        for (; puVar13 != puVar9; puVar13 = puVar13 + 1) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = piVar8;
          }
        }
      }
      if (local_260 != local_25c) {
        DAT_1202015c = DAT_1202015c + (-1 - local_264);
        FUN_10c3d900(local_260);
      }
      local_14 = (undefined1 *)((int)local_14 + 1);
    } while ((int)local_14 < local_28);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  (**(code **)(*piVar8 + 0x3c))("Libs\\Config\\UIInput.xml");
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  (**(code **)(*piVar8 + 0x3c))("Objects/weapons/p/novice001_we_p/novice001_we_p_z.fxparams");
  local_8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  pcVar12 = (char *)(**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  pcVar19 = &DAT_1201fc98;
  if (pcVar12 != (char *)0x0) {
    pcVar22 = pcVar12;
    do {
      cVar4 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar4 != '\0');
    sVar23 = (int)pcVar22 - (int)(pcVar12 + 1);
    if (sVar23 != 0) {
      puVar13 = (undefined4 *)FUN_10c3d780(sVar23 + 0xd);
      DAT_123be268 = DAT_123be268 + sVar23 + 0xd;
      *puVar13 = 1;
      pcVar19 = (char *)(puVar13 + 3);
      puVar13[1] = sVar23;
      puVar13[2] = sVar23;
      pcVar19[sVar23] = '\0';
      if (pcVar19 != pcVar12) {
        memcpy(pcVar19,pcVar12,sVar23);
      }
    }
  }
  piVar8 = (int *)(pcVar19 + -0xc);
  if (*(int *)(pcVar19 + -0xc) < 0) {
    pcVar12 = &DAT_1201fc98;
    local_24 = &DAT_1201fc98;
  }
  else {
    local_24 = pcVar19;
    FUN_10c3dab0(piVar8);
    pcVar12 = pcVar19;
  }
  pcVar22 = local_24;
  local_40 = (int *)(pcVar12 + -0xc);
  if ((*(int *)(pcVar12 + -0xc) < 2) &&
     (*(int *)(local_24 + -8) + 0x3eU <= *(uint *)(local_24 + -4))) {
    if (local_24 + *(int *)(local_24 + -8) !=
        "/Scripts/Entities/Items/XML/Weapons/M010CatWeapon_firemode.xml") {
      memcpy(local_24 + *(int *)(local_24 + -8),
             "/Scripts/Entities/Items/XML/Weapons/M010CatWeapon_firemode.xml",0x3e);
    }
    *(int *)(pcVar22 + -8) = *(int *)(pcVar22 + -8) + 0x3e;
    pcVar22[*(int *)(pcVar22 + -8)] = '\0';
  }
  else {
    FUN_10a4c8f0(local_24,*(undefined4 *)(local_24 + -8),
                 "/Scripts/Entities/Items/XML/Weapons/M010CatWeapon_firemode.xml",0x3e);
    piVar21 = local_40;
    pcVar22 = local_24;
    if ((-1 < *local_40) && (iVar16 = FUN_10c3dad0(local_40), pcVar22 = local_24, iVar16 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar21[2]);
      FUN_10c3d900(piVar21);
      pcVar22 = local_24;
    }
  }
  (**(code **)(*local_8 + 0x3c))(pcVar22);
  piVar21 = (int *)(pcVar22 + -0xc);
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar22 + -4));
    FUN_10c3d900(piVar21);
  }
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar19 + -4));
    FUN_10c3d900(piVar8);
  }
  local_40 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = (int *)(**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  pcVar19 = &DAT_1201fc98;
  if (local_8 != (int *)0x0) {
    pcVar12 = (char *)local_8;
    do {
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    sVar23 = (int)pcVar12 - (int)((int)local_8 + 1);
    if (sVar23 != 0) {
      puVar13 = (undefined4 *)FUN_10c3d780(sVar23 + 0xd);
      DAT_123be268 = DAT_123be268 + sVar23 + 0xd;
      *puVar13 = 1;
      pcVar19 = (char *)(puVar13 + 3);
      puVar13[1] = sVar23;
      puVar13[2] = sVar23;
      pcVar19[sVar23] = '\0';
      if ((int *)pcVar19 != local_8) {
        memcpy(pcVar19,local_8,sVar23);
      }
    }
  }
  piVar8 = (int *)(pcVar19 + -0xc);
  if (*(int *)(pcVar19 + -0xc) < 0) {
    pcVar12 = &DAT_1201fc98;
    local_20 = &DAT_1201fc98;
  }
  else {
    local_20 = pcVar19;
    FUN_10c3dab0(piVar8);
    pcVar12 = pcVar19;
  }
  pcVar22 = local_20;
  local_8 = (int *)(pcVar12 + -0xc);
  if ((*(int *)(pcVar12 + -0xc) < 2) &&
     (*(int *)(local_20 + -8) + 0x35U <= *(uint *)(local_20 + -4))) {
    if (local_20 + *(int *)(local_20 + -8) !=
        "/Scripts/Entities/Items/XML/Weapons/Jade_firemode.xml") {
      memcpy(local_20 + *(int *)(local_20 + -8),
             "/Scripts/Entities/Items/XML/Weapons/Jade_firemode.xml",0x35);
    }
    *(int *)(pcVar22 + -8) = *(int *)(pcVar22 + -8) + 0x35;
    pcVar22[*(int *)(pcVar22 + -8)] = '\0';
  }
  else {
    FUN_10a4c8f0(local_20,*(undefined4 *)(local_20 + -8),
                 "/Scripts/Entities/Items/XML/Weapons/Jade_firemode.xml",0x35);
    piVar21 = local_8;
    pcVar22 = local_20;
    if ((-1 < *local_8) && (iVar16 = FUN_10c3dad0(local_8), pcVar22 = local_20, iVar16 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar21[2]);
      FUN_10c3d900(piVar21);
      pcVar22 = local_20;
    }
  }
  (**(code **)(*local_40 + 0x3c))(pcVar22);
  piVar21 = (int *)(pcVar22 + -0xc);
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar22 + -4));
    FUN_10c3d900(piVar21);
  }
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar19 + -4));
    FUN_10c3d900(piVar8);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = piVar8;
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  piVar21 = (int *)(local_48 + -0xc);
  if (*piVar21 < 0) {
    local_34 = &DAT_1201fc98;
  }
  else {
    local_34 = local_48;
    FUN_10c3dab0(piVar21);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/M015Weapon_firemode.xml",0x3b);
  puVar17 = local_34;
  (**(code **)(*piVar8 + 0x3c))(local_34);
  piVar8 = (int *)(puVar17 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar17 + -4));
    FUN_10c3d900(piVar8);
  }
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_48 + -4));
    FUN_10c3d900(piVar21);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = piVar8;
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  piVar21 = (int *)(local_50 + -0xc);
  if (*piVar21 < 0) {
    local_2c = &DAT_1201fc98;
  }
  else {
    local_2c = local_50;
    FUN_10c3dab0(piVar21);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/GiantSword_firemode.xml",0x3b);
  puVar17 = local_2c;
  (**(code **)(*piVar8 + 0x3c))(local_2c);
  piVar8 = (int *)(puVar17 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar17 + -4));
    FUN_10c3d900(piVar8);
  }
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_50 + -4));
    FUN_10c3d900(piVar21);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = piVar8;
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  piVar21 = (int *)(local_44 + -0xc);
  if (*piVar21 < 0) {
    local_14 = &DAT_1201fc98;
  }
  else {
    local_14 = local_44;
    FUN_10c3dab0(piVar21);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/Hammer_firemode.xml",0x37);
  puVar17 = local_14;
  (**(code **)(*piVar8 + 0x3c))(local_14);
  piVar8 = (int *)(puVar17 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar17 + -4));
    FUN_10c3d900(piVar8);
  }
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_44 + -4));
    FUN_10c3d900(piVar21);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = piVar8;
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  piVar21 = (int *)(local_4c + -0xc);
  if (*piVar21 < 0) {
    local_1c = &DAT_1201fc98;
  }
  else {
    local_1c = local_4c;
    FUN_10c3dab0(piVar21);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/Dagger_firemode.xml",0x37);
  puVar7 = local_1c;
  (**(code **)(*piVar8 + 0x3c))(local_1c);
  piVar8 = (int *)(puVar7 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar7 + -4));
    FUN_10c3d900(piVar8);
  }
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_4c + -4));
    FUN_10c3d900(piVar21);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  local_8 = piVar8;
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  piVar21 = (int *)(local_54 + -0xc);
  if (*piVar21 < 0) {
    local_c = &DAT_1201fc98;
  }
  else {
    local_c = local_54;
    FUN_10c3dab0(piVar21);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/GunWeapon_firemode.xml",0x3a);
  puVar17 = local_c;
  (**(code **)(*piVar8 + 0x3c))(local_c);
  piVar8 = (int *)(puVar17 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar17 + -4));
    FUN_10c3d900(piVar8);
  }
  if ((-1 < *piVar21) && (iVar16 = FUN_10c3dad0(piVar21), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_54 + -4));
    FUN_10c3d900(piVar21);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  puVar13 = (undefined4 *)
            FUN_10a4b980(&local_5c,&local_28,
                         "/Scripts/Entities/Items/XML/Weapons/LongSword_firemode.xml");
  (**(code **)(*piVar8 + 0x3c))(*puVar13);
  piVar8 = (int *)(local_5c + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_5c + -4));
    FUN_10c3d900(piVar8);
  }
  iVar16 = local_28;
  piVar8 = (int *)(local_28 + -0xc);
  if ((-1 < *piVar8) && (iVar18 = FUN_10c3dad0(piVar8), iVar18 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar16 + -4));
    FUN_10c3d900(piVar8);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  uVar14 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  FUN_104f6c30(uVar14);
  puVar13 = (undefined4 *)
            FUN_10a4b980(&local_58,&local_18,"/Scripts/Entities/Items/XML/Weapons/Bow_firemode.xml")
  ;
  (**(code **)(*piVar8 + 0x3c))(*puVar13);
  piVar8 = (int *)(local_58 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_58 + -4));
    FUN_10c3d900(piVar8);
  }
  pcVar19 = local_18;
  piVar8 = (int *)(local_18 + -0xc);
  if ((-1 < *piVar8) && (iVar16 = FUN_10c3dad0(piVar8), iVar16 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar19 + -4));
    FUN_10c3d900(piVar8);
  }
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  (**(code **)(*piVar8 + 0x3c))("objects/characters/pet/pet_skeleton.xml");
  cVar4 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x164))();
  if (cVar4 != '\0') {
    piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar8 + 0x3c))
              ("Scripts/AI/BehaviorTree/Common_Pet/CityCat/monsterblackboard.xml");
    piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar8 + 0x3c))
              ("Scripts/AI/BehaviorTree/Common_Pet/Prototype03/MonsterBlackBoard.xml");
    piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar8 + 0x3c))
              ("Scripts/AI/BehaviorTree/Common_Mobs/BlackBoard/MonsterBlackBoard.xml");
    piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar8 + 0x3c))("Scripts/AI/BehaviorTree/Common/BlackBoard/MonsterBlackBoard.xml")
    ;
  }
  local_514[0] = 0;
  FUN_10a92310("Libs\\PlayerFSM\\WE99FSMStates.xml",0x20);
  piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
  (**(code **)(*piVar8 + 0x3c))(local_514);
  iVar16 = 0;
  do {
    sprintf(local_314,"Libs\\PlayerFSM\\WE%02dFSMStates.xml",iVar16);
    pcVar19 = local_314;
    do {
      cVar4 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar4 != '\0');
    FUN_10a92310(local_314,(int)pcVar19 - (int)(local_314 + 1));
    piVar8 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar8 + 0x3c))(local_514);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0xb);
  if (*(char *)(local_10 + 0x178) == '\0') {
    *(undefined1 *)(local_10 + 0x178) = 1;
  }
  piVar8 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar8 = (int *)(**(code **)(*piVar8 + 0x6c))();
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0x6c))("Objects/characters/ambients/Items_meat/Meat_skeleton.cdf",0);
    (**(code **)(*piVar8 + 0x6c))("Objects/characters/ambients/Fish_pole/Fish_pole.cdf",0);
    (**(code **)(*piVar8 + 0x6c))("Objects/characters/ambients/float/float.cdf",0);
    (**(code **)(*piVar8 + 0x6c))("Objects/characters/ambients/fish01/fish01.cdf",0);
    (**(code **)(*piVar8 + 0x6c))
              ("Objects/characters/ambients/f01_bridge_lv1_anim/f01_bridge_lv1_anim.cdf",0);
    (**(code **)(*piVar8 + 0x6c))("Objects/characters/ambients/pet_fish_pole/Pet_Fish_pole.cdf",0);
    if (((DAT_1202e818 != (undefined4 *)0x0) && ((int *)DAT_1202e818[0x34] != (int *)0x0)) &&
       (cVar4 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x168))(), cVar4 == '\0')) {
      (**(code **)(*piVar8 + 0x6c))
                ("objects/characters/player/male/ma038_u01_pl_m/ma038_u01_pl_m_body.chr",0);
      (**(code **)(*piVar8 + 0x6c))
                ("objects/characters/player/male/ma036_pl_m/ma036_pl_m_body_non_havok.chr",0);
      (**(code **)(*piVar8 + 0x6c))
                ("objects/characters/player/male/ma036_pl_m/ma036_pl_m_body_havok.chr",0);
      (**(code **)(*piVar8 + 0x6c))
                ("objects/characters/player/female/ma021_pl_f/ma021_pl_f_body.chr",0);
    }
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10bfec50 @ 10bfec50 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memset, atoi
// strings:
//   ""20002""
//   ""620002""
//   ""CEquipInfo""
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memset, atoi
   strings:
     ""20002""
     ""620002""
     ""CEquipInfo""
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void CAvatarInfo__GetManagers_10bfec50
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  short sVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined2 local_194;
  undefined1 local_192 [48];
  undefined2 auStack_162 [21];
  undefined1 local_138 [8];
  undefined1 local_130 [20];
  undefined1 *local_11c;
  undefined1 local_110 [8];
  undefined1 local_108 [20];
  undefined1 *local_f4;
  undefined1 local_e8 [20];
  undefined4 local_d4;
  undefined4 local_bc;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined1 *local_98;
  undefined1 *local_94;
  int local_8c;
  int local_7c;
  int local_74;
  undefined4 *local_6c;
  undefined4 *local_68;
  int local_58 [5];
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined1 *local_30;
  char *local_2c;
  char local_28 [16];
  char *local_18;
  char *local_14;
  int local_10;
  undefined **local_c [2];
  
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    sVar4 = (**(code **)(*param_1 + 0x2ec))();
    local_10 = (int)sVar4;
    if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
      piVar14 = (int *)(**(code **)(*(int *)param_1[3] + 0x288))();
      FUN_10520070();
      (**(code **)(*piVar14 + 0x1bc))(local_e8,0,0);
      local_194 = 0;
      memset(local_192,0,0x5a);
      iVar15 = 0;
      do {
        puVar6 = (undefined2 *)FUN_11348ac0(local_110,iVar15 + 0xf7);
        *(undefined2 *)(local_192 + iVar15 * 2 + -2) = *puVar6;
        if ((local_f4 != local_108) && (local_f4 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_f4);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x19);
      iVar15 = 0;
      do {
        puVar6 = (undefined2 *)FUN_11348ac0(local_138,iVar15 + 0x144);
        auStack_162[iVar15] = *puVar6;
        if ((local_11c != local_130) && (local_11c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_11c);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x15);
      FUN_10c0a6a0(param_2,&local_194);
      FUN_10ad9400(param_2,param_1 + 0x8a4);
      FUN_10c09510(param_2,local_d4,param_1 + 0x8a4,&DAT_11d9d32b,0);
      uVar7 = (**(code **)(*piVar14 + 0x1d8))();
      FUN_10c09690(param_3,param_4,param_2,local_a4,local_10,0x3f800000,1,uVar7);
      puVar11 = local_94;
      iVar15 = local_7c;
      if (local_94 != local_9c) {
        do {
          if (*(int *)(puVar11 + 0x24) == *(int *)(puVar11 + 0x28)) {
            FUN_10ad4d20(param_2,*(undefined4 *)(puVar11 + 0x10));
          }
          else {
            iVar13 = 0;
            if (local_8c == local_74) {
              iVar13 = iVar15 + 0x14;
            }
            FUN_10c09510(param_2,*(undefined4 *)(puVar11 + 0x28),param_1 + 0x8a4,&DAT_11d9d32b,
                         iVar13);
          }
          if (local_8c == local_74) {
            iVar13 = *(int *)(iVar15 + 0xc);
            if (iVar13 == 0) {
              iVar13 = *(int *)(iVar15 + 4);
              if (iVar15 == *(int *)(iVar13 + 0xc)) {
                do {
                  iVar15 = iVar13;
                  iVar13 = *(int *)(iVar15 + 4);
                } while (iVar15 == *(int *)(iVar13 + 0xc));
              }
              if (*(int *)(iVar15 + 0xc) != iVar13) {
                iVar15 = iVar13;
              }
            }
            else {
              for (iVar5 = *(int *)(iVar13 + 8); iVar15 = iVar13, iVar5 != 0;
                  iVar5 = *(int *)(iVar5 + 8)) {
                iVar13 = iVar5;
              }
            }
          }
          puVar8 = *(undefined1 **)(puVar11 + 0xc);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)(puVar11 + 4);
            if (puVar11 == *(undefined1 **)(puVar8 + 0xc)) {
              do {
                puVar11 = puVar8;
                puVar8 = *(undefined1 **)(puVar11 + 4);
              } while (puVar11 == *(undefined1 **)(puVar8 + 0xc));
            }
            if (*(undefined1 **)(puVar11 + 0xc) != puVar8) {
              puVar11 = puVar8;
            }
          }
          else {
            for (puVar2 = *(undefined1 **)(puVar8 + 8); puVar11 = puVar8,
                puVar2 != (undefined1 *)0x0; puVar2 = *(undefined1 **)(puVar2 + 8)) {
              puVar8 = puVar2;
            }
          }
        } while (puVar11 != local_9c);
      }
      local_28[0] = '\0';
      local_14 = local_28;
      puVar11 = local_9c;
      local_18 = local_28;
      if (local_98 != (undefined1 *)0x0) {
        do {
          if (*(int *)(local_98 + 0x10) == 0) {
            puVar8 = *(undefined1 **)(local_98 + 0xc);
          }
          else {
            puVar8 = *(undefined1 **)(local_98 + 8);
            puVar11 = local_98;
          }
          local_98 = puVar8;
        } while (puVar8 != (undefined1 *)0x0);
        if ((puVar11 != local_9c) && (*(uint *)(puVar11 + 0x10) < 2)) {
          if (puVar11 + 0x14 != local_28) {
            FUN_100d83d0(*(undefined4 *)(puVar11 + 0x28),*(undefined4 *)(puVar11 + 0x24));
          }
          iVar15 = atoi(local_14);
          local_c[0] = &PTR_FUN_11dc0b20;
          if ((DAT_123be984 & 1) == 0) {
            DAT_123be984 = DAT_123be984 | 1;
            FUN_102500e0("CAvatarInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fd80);
          }
          puVar9 = (undefined *)*DAT_123be968;
          if ((puVar9 == (undefined *)0x0) &&
             (puVar9 = (undefined *)FUN_11679e10(local_c,"CAvatarInfo",0),
             puVar9 == (undefined *)0x0)) {
            if ((DAT_123be73c & 1) == 0) {
              DAT_123be708 = 0;
              DAT_123be718 = 0;
              uRam123be71c = 0;
              _DAT_123be720 = 0;
              DAT_123be724 = 0;
              DAT_123be73c = DAT_123be73c | 1;
              _DAT_123be704 = &PTR_FUN_11dc0d54;
              DAT_123be728 = _DAT_11de9ae0;
              DAT_123be72c = _UNK_11de9ae4;
              uRam123be730 = _UNK_11de9ae8;
              DAT_123be734 = _UNK_11de9aec;
              DAT_123be738 = 1;
              DAT_123be70c = puVar9;
              _DAT_123be710 = puVar9;
              _DAT_123be714 = puVar9;
              FUN_11a8911f(&LAB_11c86330);
            }
            puVar9 = &DAT_123be704;
          }
          local_c[0] = &PTR_FUN_11da54a8;
          if ((iVar15 != -1) &&
             ((((iVar15 != 0 || (*(int *)(puVar9 + 0x30) == 0)) &&
               (iVar13 = *(int *)(puVar9 + 0x28), iVar13 != 0)) &&
              ((iVar15 = iVar15 - *(int *)(puVar9 + 0x30), -1 < iVar15 &&
               (iVar15 < *(int *)(puVar9 + 0x24))))))) {
            iVar5 = *(int *)(*(int *)(puVar9 + 0x20) + (iVar15 / iVar13) * 4);
            if ((iVar5 != 0) && (iVar15 = *(int *)(iVar5 + (iVar15 % iVar13) * 4), iVar15 != 0)) {
              pcVar16 = *(char **)(iVar15 + 0x2c);
              pcVar3 = pcVar16;
              do {
                pcVar12 = pcVar3;
                pcVar3 = pcVar12 + 1;
              } while (*pcVar12 != '\0');
              FUN_100d83d0(pcVar16,pcVar12);
            }
          }
        }
      }
      FUN_10c09510(param_2,local_bc,param_1 + 0x8a4,local_14,0);
      FUN_10afe610(param_2);
      puVar10 = (undefined4 *)(**(code **)(*(int *)param_1[3] + 0xbc))();
      uVar7 = *puVar10;
      if (local_6c != local_68) {
        do {
          FUN_10afe4e0(param_2,*local_6c,uVar7);
          local_6c = local_6c + 1;
        } while (local_6c != local_68);
      }
      if ((local_14 != local_28) && (local_14 != (char *)0x0)) {
        FUN_10c3d5d0(local_14);
      }
      FUN_10516930();
    }
    else {
      if (local_10 == 0) {
        FUN_1083ac30(&DAT_11cc91bc);
        pcVar16 = "610002";
      }
      else {
        FUN_1083ac30("20002");
        pcVar16 = "620002";
      }
      FUN_1083ac30(pcVar16);
      FUN_10c09510(param_2,&DAT_1201fc98,param_1 + 0x8a4,&DAT_11d9d32b,0);
      local_34 = local_44;
      local_58[4] = 0xea65;
      local_58[0] = _DAT_11cc2820;
      local_58[1] = _UNK_11cc2824;
      local_58[2] = _UNK_11cc2828;
      local_58[3] = _UNK_11cc282c;
      local_30 = local_34;
      FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
      iVar15 = 0;
      do {
        iVar13 = local_58[iVar15];
        iVar5 = FUN_1053a9e0(0,"CEquipInfo",0);
        if (((iVar13 != -1) &&
            (((iVar13 != 0 || (*(int *)(iVar5 + 0x30) == 0)) &&
             (iVar1 = *(int *)(iVar5 + 0x28), iVar1 != 0)))) &&
           ((iVar13 = iVar13 - *(int *)(iVar5 + 0x30), -1 < iVar13 &&
            (iVar13 < *(int *)(iVar5 + 0x24))))) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar13 / iVar1) * 4);
          if ((iVar5 != 0) && (iVar13 = *(int *)(iVar5 + (iVar13 % iVar1) * 4), iVar13 != 0)) {
            if (local_10 == 0) {
              uVar7 = *(undefined4 *)(iVar13 + 0x80);
            }
            else {
              uVar7 = *(undefined4 *)(iVar13 + 0x98);
            }
            FUN_104f6c30(uVar7);
            pcVar16 = local_2c;
            FUN_10c09510(param_2,local_2c,param_1 + 0x8a4,&DAT_11d9d32b,0);
            pcVar3 = pcVar16;
            if (iVar15 == 0) {
              do {
                pcVar12 = pcVar3;
                pcVar3 = pcVar12 + 1;
              } while (*pcVar12 != '\0');
              FUN_100d83d0(pcVar16,pcVar12);
            }
            piVar14 = (int *)(pcVar16 + -0xc);
            if ((-1 < *piVar14) && (iVar13 = FUN_10c3dad0(piVar14), iVar13 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar16 + -4));
              FUN_10c3d900(piVar14);
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 5);
      FUN_10c09510(param_2,&DAT_1201fc98,param_1 + 0x8a4,local_30,0);
      if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_30);
      }
      if ((-1 < DAT_1201fc8c) && (iVar15 = FUN_10c3dad0(&DAT_1201fc8c), iVar15 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
      if ((-1 < DAT_1201fc8c) && (iVar15 = FUN_10c3dad0(&DAT_1201fc8c), iVar15 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
        return;
      }
    }
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10bff6c0 @ 10bff6c0 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: sprintf_s, atoi
// strings:
//   ""%s_Master""
//   ""BasicEntity""
//   ""%s_Slave""
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: sprintf_s, atoi
   strings:
     ""%s_Master""
     ""BasicEntity""
     ""%s_Slave""
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void CAvatarInfo__GetManagers_10bff6c0
               (int *param_1,int param_2,undefined **param_3,undefined4 param_4,undefined4 param_5,
               undefined **param_6)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 extraout_ECX;
  bool bVar14;
  undefined1 *puVar15;
  undefined1 local_1bc [24];
  undefined4 local_1a4;
  char *local_198;
  uint local_194;
  int local_13c;
  undefined1 local_124 [24];
  undefined4 local_10c;
  char *local_100;
  uint local_fc;
  int local_a4;
  char local_8c [64];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [16];
  char *local_18;
  char *local_14;
  int *local_c;
  int *local_8;
  
  uVar4 = (**(code **)(*param_1 + 0x48))();
  piVar5 = (int *)(**(code **)(*param_1 + 0x1b8))(0);
  sprintf_s(local_8c,0x40,"%s_Master",uVar4);
  FUN_10a6f680();
  local_198 = local_8c;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  local_1a4 = (**(code **)(*piVar6 + 0xc))("BasicEntity");
  local_194 = local_194 | 0x480000;
  local_8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x24))(local_1bc,1);
  FUN_10a6f680();
  sprintf_s(local_8c,0x40,"%s_Slave",uVar4);
  local_100 = local_8c;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  local_10c = (**(code **)(*piVar6 + 0xc))("BasicEntity");
  local_fc = local_fc | 0x480000;
  piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x24))(local_124,1);
  local_c = piVar7;
  FUN_10c09510(piVar5,*(undefined4 *)(param_2 + 0x14),param_3,&DAT_11d9d32b,0);
  piVar6 = local_8;
  FUN_10c09690(local_8,piVar7,piVar5,*(undefined4 *)(param_2 + 0x44),param_4,param_5,param_6,0);
  iVar8 = (**(code **)(*piVar6 + 0x1b8))(0);
  if (iVar8 != 0) {
    piVar6 = (int *)(**(code **)(*piVar6 + 0x1b8))(0);
    (**(code **)(*piVar6 + 0x150))();
  }
  iVar8 = (**(code **)(*piVar7 + 0x1b8))(0);
  if (iVar8 != 0) {
    piVar6 = (int *)(**(code **)(*piVar7 + 0x1b8))(0);
    (**(code **)(*piVar6 + 0x150))();
  }
  iVar8 = param_2 + 0x4c;
  iVar10 = *(int *)(param_2 + 0x54);
  while (iVar10 != iVar8) {
    if (*(int *)(iVar10 + 0x24) == *(int *)(iVar10 + 0x28)) {
      FUN_10ad4d20(piVar5,*(undefined4 *)(iVar10 + 0x10));
    }
    else {
      FUN_10c09510(piVar5,*(undefined4 *)(iVar10 + 0x28),param_3,&DAT_11d9d32b,0);
    }
    iVar9 = *(int *)(iVar10 + 0xc);
    if (iVar9 == 0) {
      iVar9 = *(int *)(iVar10 + 4);
      if (iVar10 == *(int *)(iVar9 + 0xc)) {
        do {
          iVar10 = iVar9;
          iVar9 = *(int *)(iVar10 + 4);
        } while (iVar10 == *(int *)(iVar9 + 0xc));
      }
      if (*(int *)(iVar10 + 0xc) != iVar9) {
        iVar10 = iVar9;
      }
    }
    else {
      for (iVar11 = *(int *)(iVar9 + 8); iVar10 = iVar9, iVar11 != 0; iVar11 = *(int *)(iVar11 + 8))
      {
        iVar9 = iVar11;
      }
    }
  }
  local_18 = local_28;
  local_28[0] = '\0';
  iVar10 = *(int *)(param_2 + 0x50);
  iVar9 = iVar8;
  if (*(int *)(param_2 + 0x50) != 0) {
    do {
      if (*(int *)(iVar10 + 0x10) == 0) {
        iVar11 = *(int *)(iVar10 + 0xc);
      }
      else {
        iVar11 = *(int *)(iVar10 + 8);
        iVar9 = iVar10;
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
    bVar14 = true;
    if (iVar9 == iVar8) goto LAB_10bff911;
    if (1 < *(uint *)(iVar9 + 0x10)) {
      iVar9 = iVar8;
    }
  }
  bVar14 = iVar9 == iVar8;
LAB_10bff911:
  local_14 = local_18;
  if (!bVar14) {
    if ((char *)(iVar9 + 0x14) != local_28) {
      FUN_100d83d0(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x24));
    }
    iVar8 = atoi(local_14);
    param_6 = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar12 = (undefined *)*DAT_123be968;
    if ((puVar12 == (undefined *)0x0) &&
       (puVar12 = (undefined *)FUN_11679e10(&param_6,"CAvatarInfo",0), puVar12 == (undefined *)0x0))
    {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be73c = DAT_123be73c | 1;
        FUN_1053c940();
        FUN_11a8911f(&LAB_11c86330);
      }
      puVar12 = &DAT_123be704;
    }
    param_6 = &PTR_FUN_11da54a8;
    if ((iVar8 != -1) &&
       ((((iVar8 != 0 || (*(int *)(puVar12 + 0x30) == 0)) &&
         (iVar10 = *(int *)(puVar12 + 0x28), iVar10 != 0)) &&
        ((iVar8 = iVar8 - *(int *)(puVar12 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar12 + 0x24))
         ))))) {
      iVar9 = *(int *)(*(int *)(puVar12 + 0x20) + (iVar8 / iVar10) * 4);
      if ((iVar9 != 0) && (iVar8 = *(int *)(iVar9 + (iVar8 % iVar10) * 4), iVar8 != 0)) {
        pcVar1 = *(char **)(iVar8 + 0x2c);
        pcVar2 = pcVar1;
        do {
          pcVar13 = pcVar2;
          pcVar2 = pcVar13 + 1;
        } while (*pcVar13 != '\0');
        FUN_100d83d0(pcVar1,pcVar13);
      }
    }
  }
  FUN_10c09510(piVar5,*(undefined4 *)(param_2 + 0x2c),param_3,local_14,0);
  if (*(int *)(DAT_1202e248 + -0xc) < 0) {
    puVar15 = &DAT_1201fc98;
  }
  else {
    puVar15 = DAT_1202e248;
    FUN_10c3dab0(DAT_1202e248 + -0xc,DAT_1202e248);
  }
  (**(code **)(*piVar5 + 0x2c))(puVar15);
  iVar8 = atoi(*(char **)(param_2 + 0x44));
  param_3 = &PTR_FUN_11dc0b20;
  if ((DAT_123be984 & 1) == 0) {
    DAT_123be984 = DAT_123be984 | 1;
    FUN_102500e0("CAvatarInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6fd80);
  }
  puVar12 = (undefined *)*DAT_123be968;
  if ((puVar12 == (undefined *)0x0) &&
     (puVar12 = (undefined *)FUN_11679e10(&param_3,"CAvatarInfo",0), puVar12 == (undefined *)0x0)) {
    if ((DAT_123be73c & 1) == 0) {
      DAT_123be708 = 0;
      DAT_123be718 = 0;
      uRam123be71c = 0;
      _DAT_123be720 = 0;
      DAT_123be724 = 0;
      DAT_123be73c = DAT_123be73c | 1;
      _DAT_123be704 = &PTR_FUN_11dc0d54;
      DAT_123be728 = _DAT_11de9ae0;
      DAT_123be72c = _UNK_11de9ae4;
      uRam123be730 = _UNK_11de9ae8;
      DAT_123be734 = _UNK_11de9aec;
      DAT_123be738 = 1;
      DAT_123be70c = puVar12;
      _DAT_123be710 = puVar12;
      _DAT_123be714 = puVar12;
      FUN_11a8911f(&LAB_11c86330);
    }
    puVar12 = &DAT_123be704;
  }
  param_3 = &PTR_FUN_11da54a8;
  piVar5 = local_8;
  piVar6 = local_c;
  if (((iVar8 != -1) &&
      (((iVar8 != 0 || (*(int *)(puVar12 + 0x30) == 0)) &&
       (iVar10 = *(int *)(puVar12 + 0x28), iVar10 != 0)))) &&
     ((iVar8 = iVar8 - *(int *)(puVar12 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar12 + 0x24)))))
  {
    iVar9 = *(int *)(*(int *)(puVar12 + 0x20) + (iVar8 / iVar10) * 4);
    if ((iVar9 != 0) && (iVar8 = *(int *)(iVar9 + (iVar8 % iVar10) * 4), iVar8 != 0)) {
      FUN_104f6c30(*(undefined4 *)(iVar8 + 0x6c),*(int *)(puVar12 + 0x20));
      piVar5 = local_8;
      FUN_10c0aee0(local_8);
      cVar3 = FUN_100fd0c0(iVar8 + 0x80,&DAT_11d9d32b);
      piVar6 = local_c;
      if ((cVar3 == '\0') &&
         (cVar3 = FUN_100fd0c0(iVar8 + 0x30,&DAT_11d9d32b), piVar6 = local_c, cVar3 == '\0')) {
        FUN_104f6c30(*(undefined4 *)(iVar8 + 0x94),extraout_ECX);
        piVar6 = local_c;
        FUN_10c0aee0(local_c);
      }
    }
  }
  local_4c = param_5;
  local_48 = param_5;
  local_44 = param_5;
  (**(code **)(*param_1 + 0xb8))(&local_4c,0);
  local_34 = param_5;
  local_30 = param_5;
  local_2c = param_5;
  (**(code **)(*piVar5 + 0xb8))(&local_34,0);
  local_40 = param_5;
  local_3c = param_5;
  local_38 = param_5;
  (**(code **)(*piVar6 + 0xb8))(&local_40,0);
  uVar4 = (**(code **)(*param_1 + 0x1c))();
  (**(code **)(*local_8 + 0x18))(uVar4);
  (**(code **)(*piVar6 + 0x18))(uVar4);
  if ((local_14 != local_28) && (local_14 != (char *)0x0)) {
    FUN_10c3d5d0(local_14);
  }
  piVar6 = (int *)(local_a4 + -0xc);
  if ((-1 < *piVar6) && (iVar8 = FUN_10c3dad0(piVar6), iVar8 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_a4 + -4));
    FUN_10c3d900(piVar6);
  }
  piVar6 = (int *)(local_13c + -0xc);
  if ((-1 < *piVar6) && (iVar8 = FUN_10c3dad0(piVar6), iVar8 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_13c + -4));
    FUN_10c3d900(piVar6);
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10c00130 @ 10c00130 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

undefined4 * CAvatarInfo__GetManagers_10c00130(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  code *pcVar10;
  int *piVar11;
  char *pcVar12;
  size_t _Size;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  int local_18;
  undefined **local_14;
  uint local_10;
  char *local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  pcVar10 = atoi_exref;
  *param_1 = 0;
  param_1[1] = 0;
  bVar14 = false;
  param_1[2] = 0;
  local_10 = 1;
  do {
    uVar13 = local_10;
    if (bVar14) {
      uVar15 = *(undefined4 *)(param_2 + 0x2c);
LAB_10c0019e:
      local_18 = (*pcVar10)(uVar15);
    }
    else {
      iVar8 = param_2 + 0x4c;
      iVar7 = *(int *)(param_2 + 0x50);
      iVar5 = iVar8;
      if (*(int *)(param_2 + 0x50) == 0) {
LAB_10c0018f:
        if (iVar5 != iVar8) {
          uVar15 = *(undefined4 *)(iVar5 + 0x28);
          goto LAB_10c0019e;
        }
      }
      else {
        do {
          if (*(uint *)(iVar7 + 0x10) < local_10) {
            iVar3 = *(int *)(iVar7 + 0xc);
          }
          else {
            iVar3 = *(int *)(iVar7 + 8);
            iVar5 = iVar7;
          }
          iVar7 = iVar3;
        } while (iVar3 != 0);
        if (iVar5 != iVar8) {
          if (local_10 < *(uint *)(iVar5 + 0x10)) {
            iVar5 = iVar8;
          }
          goto LAB_10c0018f;
        }
      }
    }
    local_14 = &PTR_FUN_11dc0b20;
    if ((DAT_123be984 & 1) == 0) {
      DAT_123be984 = DAT_123be984 | 1;
      FUN_102500e0("CAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fd80);
    }
    puVar4 = (undefined *)*DAT_123be968;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_14,"CAvatarInfo",0), puVar4 == (undefined *)0x0))
    {
      if ((DAT_123be73c & 1) == 0) {
        DAT_123be708 = 0;
        DAT_123be718 = 0;
        uRam123be71c = 0;
        _DAT_123be720 = 0;
        DAT_123be724 = 0;
        DAT_123be73c = DAT_123be73c | 1;
        _DAT_123be704 = &PTR_FUN_11dc0d54;
        DAT_123be728 = _DAT_11de9ae0;
        DAT_123be72c = _UNK_11de9ae4;
        uRam123be730 = _UNK_11de9ae8;
        DAT_123be734 = _UNK_11de9aec;
        DAT_123be738 = 1;
        DAT_123be70c = puVar4;
        _DAT_123be710 = puVar4;
        _DAT_123be714 = puVar4;
        FUN_11a8911f(&LAB_11c86330);
      }
      puVar4 = &DAT_123be704;
    }
    local_14 = &PTR_FUN_11da54a8;
    if ((local_18 != -1) &&
       ((((local_18 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
         (iVar7 = *(int *)(puVar4 + 0x28), iVar7 != 0)) &&
        ((iVar5 = local_18 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
         (iVar5 < *(int *)(puVar4 + 0x24))))))) {
      iVar8 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar7) * 4);
      if ((iVar8 != 0) && (iVar7 = *(int *)(iVar8 + (iVar5 % iVar7) * 4), iVar7 != 0)) {
        pcVar1 = *(char **)(iVar7 + 0x2c);
        pcVar9 = &DAT_1201fc98;
        if (pcVar1 != (char *)0x0) {
          pcVar12 = pcVar1;
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          _Size = (int)pcVar12 - (int)(pcVar1 + 1);
          uVar13 = local_10;
          if (_Size != 0) {
            puVar6 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar6 = 1;
            pcVar9 = (char *)(puVar6 + 3);
            puVar6[1] = _Size;
            puVar6[2] = _Size;
            pcVar9[_Size] = '\0';
            uVar13 = local_10;
            if (pcVar9 != pcVar1) {
              memcpy(pcVar9,pcVar1,_Size);
              uVar13 = local_10;
            }
          }
        }
        piVar11 = (int *)(pcVar9 + -0xc);
        if (*(int *)(pcVar9 + -0xc) < 0) {
          local_c = &DAT_1201fc98;
        }
        else {
          local_c = pcVar9;
          FUN_10c3dab0(piVar11);
        }
        FUN_10a79ae0(&local_c);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        if ((-1 < *piVar11) && (iVar7 = FUN_10c3dad0(piVar11), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
          FUN_10c3d900(piVar11);
        }
        pcVar9 = local_c;
        cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_c,0);
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(pcVar9), pcVar1 = local_c,
           cVar2 != '\0')) {
          puVar6 = (undefined4 *)param_1[1];
          if (puVar6 == (undefined4 *)param_1[2]) {
            local_8 = 0;
            local_5 = 0;
            FUN_10af2cd0(puVar6,&local_c,&local_5,1,1);
          }
          else {
            local_6 = 0;
            local_7 = 0;
            if (puVar6 != (undefined4 *)0x0) {
              if (-1 < *(int *)(pcVar9 + -0xc)) {
                *puVar6 = local_c;
                FUN_10c3dab0(pcVar9 + -0xc);
                param_1[1] = param_1[1] + 4;
                pcVar9 = pcVar1;
                goto LAB_10c00421;
              }
              *puVar6 = &DAT_1201fc98;
              pcVar9 = local_c;
            }
            param_1[1] = param_1[1] + 4;
          }
        }
LAB_10c00421:
        piVar11 = (int *)(pcVar9 + -0xc);
        if ((-1 < *piVar11) && (iVar7 = FUN_10c3dad0(piVar11), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
          FUN_10c3d900(piVar11);
        }
      }
    }
    local_10 = uVar13 + 1;
    bVar14 = local_10 == 6;
    pcVar10 = atoi_exref;
    if (6 < (int)local_10) {
      return param_1;
    }
  } while( true );
}



/* --- CAvatarInfo::GetManagers_10f01650 @ 10f01650 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void __thiscall CAvatarInfo__GetManagers_10f01650(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  size_t _Size;
  int local_74 [17];
  int *local_30;
  int *local_2c;
  int local_28;
  char *local_24;
  undefined **local_20;
  undefined **local_1c;
  int local_18;
  int *local_14;
  char *local_10;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  piVar5 = param_2;
  local_14 = param_1;
  local_24 = (char *)0x0;
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 0;
  local_74[8] = 0;
  local_74[9] = 0;
  local_74[10] = 0;
  local_74[0xb] = 0;
  local_74[0xc] = 0;
  local_74[0xd] = 0;
  local_74[0xe] = 0;
  local_74[0xf] = 0;
  if (param_2[1] - *param_2 >> 2 != 0) {
    do {
      local_18 = (int)local_24 * 4;
      local_1c = &PTR_FUN_11dc0b20;
      iVar11 = *(int *)(local_18 + *piVar5);
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        FUN_102500e0("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar7 = (undefined *)*DAT_123be968;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_1c,"CAvatarInfo",0), puVar7 == (undefined *)0x0)
         ) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be708 = 0;
          DAT_123be718 = 0;
          uRam123be71c = 0;
          _DAT_123be720 = 0;
          DAT_123be724 = 0;
          DAT_123be73c = DAT_123be73c | 1;
          _DAT_123be704 = &PTR_FUN_11dc0d54;
          DAT_123be728 = _DAT_11de9ae0;
          DAT_123be72c = _UNK_11de9ae4;
          uRam123be730 = _UNK_11de9ae8;
          DAT_123be734 = _UNK_11de9aec;
          DAT_123be738 = 1;
          DAT_123be70c = puVar7;
          _DAT_123be710 = puVar7;
          _DAT_123be714 = puVar7;
          FUN_11a8911f(&LAB_11c91650);
        }
        puVar7 = &DAT_123be704;
      }
      local_1c = &PTR_FUN_11da54a8;
      if ((iVar11 != -1) &&
         ((((iVar11 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
           (iVar8 = *(int *)(puVar7 + 0x28), iVar8 != 0)) &&
          ((iVar11 = iVar11 - *(int *)(puVar7 + 0x30), -1 < iVar11 &&
           (iVar11 < *(int *)(puVar7 + 0x24))))))) {
        iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar11 / iVar8) * 4);
        if ((iVar1 != 0) &&
           ((iVar11 = *(int *)(iVar1 + (iVar11 % iVar8) * 4), iVar11 != 0 &&
            (uVar2 = *(uint *)(iVar11 + 0x14), uVar2 < 8)))) {
          if (*(int *)(*piVar5 + local_18) != local_14[uVar2 + 0x899]) {
            uVar3 = *(undefined4 *)(iVar11 + 0x2c);
            local_74[uVar2 + 8] = iVar11;
            FUN_10a79cc0(&local_28,uVar3,&DAT_11cbc0f0);
            iVar11 = local_28;
            cVar6 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_28,0);
            if ((cVar6 == '\0') ||
               (cVar6 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(iVar11), cVar6 == '\0'
               )) {
              param_2._3_1_ = '\0';
            }
            else {
              param_2._3_1_ = '\x01';
              *(undefined1 *)(local_14 + 0x8ff) = 1;
            }
            if (param_2._3_1_ != *(char *)(uVar2 + 0x2284 + (int)local_14)) {
              *(char *)(uVar2 + 0x2284 + (int)local_14) = param_2._3_1_;
              *(undefined1 *)(local_14 + 0x8ff) = 1;
            }
            piVar12 = (int *)(iVar11 + -0xc);
            if ((-1 < *piVar12) && (iVar8 = FUN_10c3dad0(piVar12), iVar8 < 1)) {
              DAT_123be268 = DAT_123be268 - (*(int *)(iVar11 + -4) + 0xd);
              FUN_10c3d900(piVar12);
            }
          }
          local_74[uVar2] = *(int *)(*piVar5 + local_18);
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < (char *)(piVar5[1] - *piVar5 >> 2));
  }
  piVar5 = local_14;
  if ((char)local_14[0x8ff] != '\0') {
    local_74[0x10] = 0;
    local_30 = (int *)0x0;
    local_2c = (int *)0x0;
    local_18 = 1;
    do {
      iVar11 = local_18;
      if (*(char *)((int)piVar5 + local_18 + 0x2284) != '\0') {
        iVar8 = local_74[local_18 + 8];
        if (iVar8 == 0) {
          iVar8 = local_74[local_18];
          local_20 = &PTR_FUN_11dc0b20;
          if ((DAT_123be984 & 1) == 0) {
            DAT_123be984 = DAT_123be984 | 1;
            FUN_102500e0("CAvatarInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fd80);
          }
          puVar7 = (undefined *)*DAT_123be968;
          if ((puVar7 == (undefined *)0x0) &&
             (puVar7 = (undefined *)FUN_11679e10(&local_20,"CAvatarInfo",0),
             puVar7 == (undefined *)0x0)) {
            if ((DAT_123be73c & 1) == 0) {
              DAT_123be708 = 0;
              DAT_123be718 = 0;
              uRam123be71c = 0;
              _DAT_123be720 = 0;
              DAT_123be724 = 0;
              DAT_123be73c = DAT_123be73c | 1;
              _DAT_123be704 = &PTR_FUN_11dc0d54;
              DAT_123be728 = _DAT_11de9ae0;
              DAT_123be72c = _UNK_11de9ae4;
              uRam123be730 = _UNK_11de9ae8;
              DAT_123be734 = _UNK_11de9aec;
              DAT_123be738 = 1;
              DAT_123be70c = puVar7;
              _DAT_123be710 = puVar7;
              _DAT_123be714 = puVar7;
              FUN_11a8911f(&LAB_11c91650);
            }
            puVar7 = &DAT_123be704;
          }
          local_20 = &PTR_FUN_11da54a8;
          if (((iVar8 == -1) ||
              (((iVar8 == 0 && (*(int *)(puVar7 + 0x30) != 0)) ||
               (iVar1 = *(int *)(puVar7 + 0x28), iVar1 == 0)))) ||
             ((iVar8 = iVar8 - *(int *)(puVar7 + 0x30), iVar8 < 0 ||
              (*(int *)(puVar7 + 0x24) <= iVar8)))) {
LAB_10f019e9:
            iVar8 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar8 / iVar1) * 4);
            if (iVar4 == 0) goto LAB_10f019e9;
            iVar8 = *(int *)(iVar4 + (iVar8 % iVar1) * 4);
          }
          if (iVar8 == 0) goto LAB_10f01b5a;
        }
        local_24 = *(char **)(iVar8 + 0x2c);
        pcVar10 = &DAT_1201fc98;
        if (local_24 != (char *)0x0) {
          pcVar13 = local_24;
          do {
            cVar6 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar6 != '\0');
          _Size = (int)pcVar13 - (int)(local_24 + 1);
          iVar11 = local_18;
          if (_Size != 0) {
            puVar9 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar9 = 1;
            pcVar10 = (char *)(puVar9 + 3);
            puVar9[1] = _Size;
            puVar9[2] = _Size;
            pcVar10[_Size] = '\0';
            iVar11 = local_18;
            if (pcVar10 != local_24) {
              memcpy(pcVar10,local_24,_Size);
              iVar11 = local_18;
            }
          }
        }
        piVar12 = (int *)(pcVar10 + -0xc);
        if (*(int *)(pcVar10 + -0xc) < 0) {
          local_10 = &DAT_1201fc98;
        }
        else {
          local_10 = pcVar10;
          FUN_10c3dab0(piVar12);
        }
        FUN_10a79ae0(&local_10);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        if ((-1 < *piVar12) && (iVar8 = FUN_10c3dad0(piVar12), iVar8 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar10 + -4) + 0xd);
          FUN_10c3d900(piVar12);
        }
        if (local_30 == local_2c) {
          local_8 = 0;
          local_5 = 0;
          FUN_10af2cd0(local_30,&local_10,&local_5,1,1);
        }
        else {
          local_6 = 0;
          local_7 = 0;
          if (local_30 != (int *)0x0) {
            if (-1 < *(int *)(local_10 + -0xc)) {
              *local_30 = (int)local_10;
              FUN_10c3dab0(*local_30 + -0xc);
              local_30 = local_30 + 1;
              goto LAB_10f01b2a;
            }
            *local_30 = (int)&DAT_1201fc98;
          }
          local_30 = local_30 + 1;
        }
LAB_10f01b2a:
        pcVar10 = local_10;
        piVar12 = (int *)(local_10 + -0xc);
        if ((-1 < *piVar12) && (iVar8 = FUN_10c3dad0(piVar12), iVar8 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar10 + -4) + 0xd);
          FUN_10c3d900(piVar12);
        }
      }
LAB_10f01b5a:
      piVar12 = local_14;
      local_18 = iVar11 + 1;
    } while (iVar11 + 1 < 7);
    (**(code **)(*(int *)local_14[3] + 0x1dc))(local_74 + 0x10);
    if (param_3 != '\0') {
      (**(code **)(*piVar12 + 0x4b0))(0);
      piVar12[0x899] = 0;
      piVar12[0x89a] = 0;
      piVar12[0x89b] = 0;
      piVar12[0x89c] = 0;
      piVar12[0x89d] = 0;
      piVar12[0x89e] = 0;
      piVar12[0x89f] = 0;
      piVar12[0x8a0] = 0;
      FUN_10f12f20(piVar12[0x575]);
      FUN_10efd220();
      iVar11 = (**(code **)(*(int *)piVar12[3] + 0x1b8))(0);
      if (iVar11 != 0) {
        FUN_10ad9400(iVar11,piVar12 + 0x8a4);
      }
      if (*(char *)((int)piVar12 + 0x2405) != '\0') {
        *(undefined1 *)((int)piVar12 + 0x240d) = 1;
      }
      *(undefined1 *)(piVar12 + 0x8ff) = 0;
    }
    FUN_10ae74b0(local_30,local_74[0x10],0,&local_9);
    if (local_74[0x10] != 0) {
      FUN_10c3d5d0(local_74[0x10]);
    }
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10f02190 @ 10f02190 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, memcpy
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo"" */

void __thiscall CAvatarInfo__GetManagers_10f02190(int *param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  size_t _Size;
  int aiStack_80 [8];
  int local_60 [9];
  char *local_3c;
  int local_38;
  undefined1 local_32;
  undefined1 local_31;
  undefined **local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined **local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  undefined1 local_11;
  int local_10;
  char *local_c;
  char local_5;
  
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  uVar13 = 1;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  do {
    local_10 = 0;
    if (uVar13 == 6) {
      local_10 = atoi(*(char **)(param_2 + 0x2c));
    }
    else {
      local_60[8] = param_2 + 0x4c;
      iVar10 = *(int *)(param_2 + 0x50);
      iVar7 = local_60[8];
      if (iVar10 != 0) {
        do {
          if (*(uint *)(iVar10 + 0x10) < uVar13) {
            iVar5 = *(int *)(iVar10 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar10 + 8);
            iVar7 = iVar10;
          }
          iVar10 = iVar5;
        } while (iVar5 != 0);
        if ((iVar7 != local_60[8]) && (uVar13 < *(uint *)(iVar7 + 0x10))) {
          iVar7 = local_60[8];
        }
      }
      if (iVar7 != local_60[8]) {
        local_10 = atoi(*(char **)(iVar7 + 0x28));
      }
    }
    iVar10 = local_10;
    if (local_10 != param_1[uVar13 + 0x899]) {
      local_28 = &PTR_FUN_11dc0b20;
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        FUN_102500e0("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar6 = (undefined *)*DAT_123be968;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_28,"CAvatarInfo",0), puVar6 == (undefined *)0x0)
         ) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be73c = DAT_123be73c | 1;
          FUN_1053c940();
          FUN_11a8911f(&LAB_11c91650);
        }
        puVar6 = &DAT_123be704;
      }
      local_28 = &PTR_FUN_11da54a8;
      if ((iVar10 != -1) &&
         ((((iVar10 != 0 || (*(int *)(puVar6 + 0x30) == 0)) && (*(int *)(puVar6 + 0x28) != 0)) &&
          ((iVar7 = iVar10 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
           (iVar7 < *(int *)(puVar6 + 0x24))))))) {
        iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
        if ((iVar5 != 0) &&
           (iVar7 = *(int *)(iVar5 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4), iVar7 != 0)) {
          uVar11 = *(undefined4 *)(iVar7 + 0x2c);
          local_60[uVar13] = iVar7;
          piVar8 = (int *)FUN_104f6c30(uVar11);
          if (*(int *)(*piVar8 + -0xc) < 0) {
            local_18 = &DAT_1201fc98;
          }
          else {
            local_18 = (undefined1 *)*piVar8;
            FUN_10c3dab0(local_18 + -0xc);
          }
          FUN_10a79ae0(&local_18);
          FUN_10a4c990(&DAT_11d9f004,1);
          FUN_10a4c990(&DAT_11cbc0f0,3);
          iVar10 = local_38;
          piVar8 = (int *)(local_38 + -0xc);
          if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 - (*(int *)(iVar10 + -4) + 0xd);
            FUN_10c3d900(piVar8);
          }
          puVar1 = local_18;
          local_5 = '\0';
          cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_18,0);
          cVar3 = local_5;
          if ((cVar2 != '\0') &&
             (cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(puVar1), cVar3 = local_5
             , cVar2 != '\0')) {
            *(undefined1 *)(param_1 + 0x8ff) = 1;
            cVar3 = '\x01';
          }
          if (cVar3 != *(char *)(uVar13 + 0x2284 + (int)param_1)) {
            *(char *)(uVar13 + 0x2284 + (int)param_1) = cVar3;
            *(undefined1 *)(param_1 + 0x8ff) = 1;
          }
          piVar8 = (int *)(puVar1 + -0xc);
          iVar10 = local_10;
          if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar10 = local_10, iVar7 < 1)) {
            DAT_123be268 = DAT_123be268 - (*(int *)(puVar1 + -4) + 0xd);
            FUN_10c3d900(piVar8);
            iVar10 = local_10;
          }
          goto LAB_10f0242b;
        }
      }
      if (*(char *)(uVar13 + 0x2284 + (int)param_1) != '\0') {
        *(undefined1 *)(uVar13 + 0x2284 + (int)param_1) = 0;
        *(undefined1 *)(param_1 + 0x8ff) = 1;
      }
    }
LAB_10f0242b:
    aiStack_80[uVar13] = iVar10;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 7);
  if ((char)param_1[0x8ff] != '\0') {
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = (int *)0x0;
    local_10 = 1;
    do {
      iVar10 = local_10;
      if (*(char *)((int)param_1 + local_10 + 0x2284) != '\0') {
        iVar7 = local_60[local_10];
        if (iVar7 == 0) {
          iVar7 = aiStack_80[local_10];
          local_30 = &PTR_FUN_11dc0b20;
          if ((DAT_123be984 & 1) == 0) {
            DAT_123be984 = DAT_123be984 | 1;
            FUN_102500e0("CAvatarInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fd80);
          }
          puVar6 = (undefined *)*DAT_123be968;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&local_30,"CAvatarInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be73c & 1) == 0) {
              DAT_123be708 = 0;
              DAT_123be718 = 0;
              uRam123be71c = 0;
              _DAT_123be720 = 0;
              DAT_123be724 = 0;
              DAT_123be73c = DAT_123be73c | 1;
              _DAT_123be704 = &PTR_FUN_11dc0d54;
              DAT_123be728 = _DAT_11de9ae0;
              DAT_123be72c = _UNK_11de9ae4;
              uRam123be730 = _UNK_11de9ae8;
              DAT_123be734 = _UNK_11de9aec;
              DAT_123be738 = 1;
              DAT_123be70c = puVar6;
              _DAT_123be710 = puVar6;
              _DAT_123be714 = puVar6;
              FUN_11a8911f(&LAB_11c91650);
            }
            puVar6 = &DAT_123be704;
          }
          local_30 = &PTR_FUN_11da54a8;
          if (((iVar7 == -1) ||
              (((iVar7 == 0 && (*(int *)(puVar6 + 0x30) != 0)) || (*(int *)(puVar6 + 0x28) == 0))))
             || ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), iVar7 < 0 ||
                 (*(int *)(puVar6 + 0x24) <= iVar7)))) {
LAB_10f02589:
            iVar7 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
            if (iVar5 == 0) goto LAB_10f02589;
            iVar7 = *(int *)(iVar5 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4);
          }
          if (iVar7 == 0) goto LAB_10f026fd;
        }
        local_3c = *(char **)(iVar7 + 0x2c);
        pcVar12 = &DAT_1201fc98;
        if (local_3c != (char *)0x0) {
          pcVar14 = local_3c;
          do {
            cVar3 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar3 != '\0');
          _Size = (int)pcVar14 - (int)(local_3c + 1);
          iVar10 = local_10;
          if (_Size != 0) {
            puVar9 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar9 = 1;
            local_c = (char *)(puVar9 + 3);
            puVar9[1] = _Size;
            puVar9[2] = _Size;
            local_c[_Size] = '\0';
            pcVar12 = local_c;
            iVar10 = local_10;
            if (local_c != local_3c) {
              memcpy(local_c,local_3c,_Size);
              pcVar12 = local_c;
              iVar10 = local_10;
            }
          }
        }
        piVar8 = (int *)(pcVar12 + -0xc);
        if (*(int *)(pcVar12 + -0xc) < 0) {
          local_c = &DAT_1201fc98;
        }
        else {
          local_c = pcVar12;
          FUN_10c3dab0(piVar8);
        }
        FUN_10a79ae0(&local_c);
        FUN_10a4c990(&DAT_11d9f004,1);
        FUN_10a4c990(&DAT_11cbc0f0,3);
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar12 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
        if (local_20 == local_1c) {
          local_2a = 0;
          local_11 = 0;
          FUN_10af2cd0(local_20,&local_c,&local_11,1,1);
        }
        else {
          local_31 = 0;
          local_29 = 0;
          if (local_20 != (int *)0x0) {
            if (-1 < *(int *)(local_c + -0xc)) {
              *local_20 = (int)local_c;
              FUN_10c3dab0(*local_20 + -0xc);
              local_20 = local_20 + 1;
              goto LAB_10f026d0;
            }
            *local_20 = (int)&DAT_1201fc98;
          }
          local_20 = local_20 + 1;
        }
LAB_10f026d0:
        pcVar12 = local_c;
        piVar8 = (int *)(local_c + -0xc);
        if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 - (*(int *)(pcVar12 + -4) + 0xd);
          FUN_10c3d900(piVar8);
        }
      }
LAB_10f026fd:
      local_10 = iVar10 + 1;
    } while (iVar10 + 1 < 7);
    (**(code **)(*(int *)param_1[3] + 0x1dc))(&local_24);
    if (param_3 != '\0') {
      (**(code **)(*param_1 + 0x4b0))(0);
      param_1[0x899] = 0;
      param_1[0x89a] = 0;
      param_1[0x89b] = 0;
      param_1[0x89c] = 0;
      param_1[0x89d] = 0;
      param_1[0x89e] = 0;
      param_1[0x89f] = 0;
      param_1[0x8a0] = 0;
      FUN_10f12f20(param_1[0x575]);
      FUN_10efd220();
      iVar10 = (**(code **)(*(int *)param_1[3] + 0x1b8))(0);
      if (iVar10 != 0) {
        FUN_10ad9400(iVar10,param_1 + 0x8a4);
      }
      if (*(char *)((int)param_1 + 0x2405) != '\0') {
        *(undefined1 *)((int)param_1 + 0x240d) = 1;
      }
      *(undefined1 *)(param_1 + 0x8ff) = 0;
    }
    FUN_10ae74b0(local_20,local_24,0,&local_32);
    if (local_24 != 0) {
      FUN_10c3d5d0(local_24);
    }
  }
  sVar4 = (**(code **)(*param_1 + 0x2ec))();
  if (sVar4 != 0) {
    if (*(char *)(param_2 + 0x8e) == '\0') {
      iVar10 = (**(code **)(*param_1 + 800))();
      if (iVar10 != 0) {
        piVar8 = (int *)(**(code **)(*param_1 + 800))();
        uVar11 = (**(code **)(*piVar8 + 0x1c8))();
        FUN_10f1dee0(uVar11);
        return;
      }
      FUN_10f1dee0(0);
    }
    else if (*(char *)(param_2 + 0x8d) == '\0') {
      *(undefined1 *)(param_1 + 0x8e3) = 0;
      piVar8 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 0x50))();
        (**(code **)(*piVar8 + 0x134))(0,0x3dcccccd);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x8e3) = 1;
      piVar8 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))();
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 0x50))();
        (**(code **)(*piVar8 + 0x134))(1,0x3dcccccd);
        return;
      }
    }
  }
  return;
}



/* --- CAvatarInfo::GetManagers_10f02e50 @ 10f02e50 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi
// strings:
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""Properties.fileModel""

/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""Properties.fileModel"" */

undefined4 __thiscall
CAvatarInfo__GetManagers_10f02e50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 local_38;
  char *local_34;
  int *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined **local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  piVar10 = param_4;
  local_28 = *(int **)(param_1 + 0xc);
  if (local_28 != (int *)0x0) {
    local_1c = local_1c & 0xffffff00;
    iVar4 = param_4[1];
    local_24 = param_1;
    if (*param_4 != iVar4) {
      iVar4 = FUN_10aefb20(iVar4,iVar4,*param_4,(int)&param_4 + 3,0);
      FUN_10aefe10(iVar4,piVar10[1],0,&local_5);
      piVar10[1] = iVar4;
    }
    iVar4 = *piVar10;
    local_14 = 6;
    if ((uint)(piVar10[2] - iVar4 >> 2) < 6) {
      iVar8 = piVar10[1];
      if (iVar4 == 0) {
        iVar5 = FUN_10af3130(6,&local_14);
      }
      else {
        iVar5 = FUN_10d471c0(&local_14,iVar4,iVar8);
        FUN_10af2500();
      }
      *piVar10 = iVar5;
      piVar10[1] = iVar5 + (iVar8 - iVar4 >> 2) * 4;
      piVar10[2] = iVar5 + local_14 * 4;
    }
    uVar13 = 1;
    pcVar12 = atoi_exref;
    do {
      local_10 = 0;
      if (uVar13 == 6) {
        uVar14 = *(undefined4 *)(param_2 + 0x2c);
LAB_10f02f5c:
        local_10 = (*pcVar12)(uVar14);
      }
      else {
        iVar5 = param_2 + 0x4c;
        iVar4 = *(int *)(param_2 + 0x50);
        iVar8 = iVar5;
        if (iVar4 == 0) {
LAB_10f02f4d:
          if (iVar8 != iVar5) {
            uVar14 = *(undefined4 *)(iVar8 + 0x28);
            goto LAB_10f02f5c;
          }
        }
        else {
          do {
            if (*(uint *)(iVar4 + 0x10) < uVar13) {
              iVar6 = *(int *)(iVar4 + 0xc);
            }
            else {
              iVar6 = *(int *)(iVar4 + 8);
              iVar8 = iVar4;
            }
            iVar4 = iVar6;
          } while (iVar6 != 0);
          if (iVar8 != iVar5) {
            if (uVar13 < *(uint *)(iVar8 + 0x10)) {
              iVar8 = iVar5;
            }
            goto LAB_10f02f4d;
          }
        }
      }
      local_18 = &PTR_FUN_11dc0b20;
      if ((DAT_123be984 & 1) == 0) {
        DAT_123be984 = DAT_123be984 | 1;
        FUN_102500e0("CAvatarInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fd80);
      }
      puVar7 = (undefined *)*DAT_123be968;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_18,"CAvatarInfo",0), puVar7 == (undefined *)0x0)
         ) {
        if ((DAT_123be73c & 1) == 0) {
          DAT_123be73c = DAT_123be73c | 1;
          FUN_1053c940();
          FUN_11a8911f(&LAB_11c91650);
        }
        puVar7 = &DAT_123be704;
      }
      local_18 = &PTR_FUN_11da54a8;
      if ((local_10 != -1) &&
         ((((local_10 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
           (iVar4 = *(int *)(puVar7 + 0x28), pcVar12 = atoi_exref, iVar4 != 0)) &&
          ((iVar8 = local_10 - *(int *)(puVar7 + 0x30), -1 < iVar8 &&
           (iVar8 < *(int *)(puVar7 + 0x24))))))) {
        iVar5 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar8 / iVar4) * 4);
        if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + (iVar8 % iVar4) * 4), iVar4 != 0)) {
          piVar9 = (int *)FUN_104f6c30(*(undefined4 *)(iVar4 + 0x2c));
          if (*(int *)(*piVar9 + -0xc) < 0) {
            local_c = &DAT_1201fc98;
          }
          else {
            local_c = (undefined1 *)*piVar9;
            FUN_10c3dab0(local_c + -0xc);
          }
          FUN_10a79ae0(&local_c);
          FUN_10a4c990(&DAT_11cc927c,4);
          iVar4 = local_20;
          piVar9 = (int *)(local_20 + -0xc);
          if ((-1 < *piVar9) && (iVar8 = FUN_10c3dad0(piVar9), iVar8 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar4 + -4));
            FUN_10c3d900(piVar9);
          }
          puVar1 = (undefined4 *)piVar10[1];
          if (puVar1 == (undefined4 *)piVar10[2]) {
            FUN_10af2cd0(puVar1,&local_c,&local_6,1,1);
          }
          else {
            if (puVar1 != (undefined4 *)0x0) {
              if (-1 < *(int *)(local_c + -0xc)) {
                *puVar1 = local_c;
                FUN_10c3dab0(local_c + -0xc);
                piVar10[1] = piVar10[1] + 4;
                goto LAB_10f03102;
              }
              *puVar1 = &DAT_1201fc98;
            }
            piVar10[1] = piVar10[1] + 4;
          }
LAB_10f03102:
          puVar2 = local_c;
          piVar9 = (int *)(local_c + -0xc);
          pcVar12 = atoi_exref;
          if ((-1 < *piVar9) && (iVar4 = FUN_10c3dad0(piVar9), pcVar12 = atoi_exref, iVar4 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar2 + -4));
            FUN_10c3d900(piVar9);
            pcVar12 = atoi_exref;
          }
        }
      }
      local_1c = local_1c & 0xff;
      if (local_10 != *(int *)(local_24 + 0x2264 + uVar13 * 4)) {
        local_1c = 1;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 7);
    iVar4 = *piVar10;
    iVar8 = piVar10[1];
    if (iVar4 != iVar8) {
      if ((char)local_1c == '\0') {
        if (iVar4 != iVar8) {
          iVar4 = FUN_10aefb20(iVar8,iVar8,iVar4,&local_7,0);
          FUN_10aefe10(iVar4,piVar10[1],0,&local_8);
          piVar10[1] = iVar4;
        }
      }
      else {
        piVar10 = (int *)(**(code **)(*local_28 + 0x150))(2);
        if (piVar10 != (int *)0x0) {
          piVar10 = (int *)(**(code **)(*piVar10 + 0x38))();
          if (piVar10 != (int *)0x0) {
            local_38 = 0;
            local_34 = (char *)0x0;
            cVar3 = (**(code **)(*piVar10 + 0x28))("Properties.fileModel",&local_38,0);
            if (cVar3 == '\0') {
              FUN_10a019b0();
              return 0;
            }
            if (local_34 != (char *)0x0) {
              pcVar11 = local_34;
              do {
                cVar3 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar3 != '\0');
              FUN_1083ab70(local_34,(int)pcVar11 - (int)(local_34 + 1));
              FUN_10a019b0();
              return 1;
            }
            FUN_1083ab70(0,0);
            FUN_10a019b0();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* --- CAvatarInfo::GetManagers_1103bc00 @ 1103bc00 --- */
// [RE-AUTO c3]
// id: CAvatarInfo::GetManagers
// calls: atoi, memcpy, strncmp, sprintf_s
// strings:
//   ""gender""
//   ""ChangeModel""
//   ""male_fileModel""
//   ""female_fileModel""
//   ""CEquipInfo""
//   ""CAvatarInfo::GetManagers""
//   ""CAvatarInfo""
//   ""EyeAttachmentOffset""
//   ""female""
//   ""Leye_offset""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAvatarInfo::GetManagers
   calls: atoi, memcpy, strncmp, sprintf_s
   strings:
     ""gender""
     ""ChangeModel""
     ""male_fileModel""
     ""female_fileModel""
     ""CEquipInfo""
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""EyeAttachmentOffset""
     ""female""
     ""Leye_offset"" */

void CAvatarInfo__GetManagers_1103bc00(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  code *pcVar19;
  int iVar20;
  size_t sVar21;
  char *pcVar22;
  undefined1 local_41c [24];
  undefined4 local_404;
  int *local_3f8;
  uint local_3f4;
  int local_39c;
  int local_384 [16];
  undefined1 local_344 [24];
  undefined4 local_32c;
  int *local_320;
  uint local_31c;
  int local_2c4;
  int local_2ac [16];
  undefined1 local_26c [44];
  char *local_240;
  undefined1 local_220 [8];
  undefined1 *local_218;
  undefined1 local_1f0 [20];
  int local_1dc [18];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int *piStack_184;
  undefined8 local_180;
  undefined4 local_178;
  int *local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int *local_168;
  undefined8 local_164;
  undefined4 local_15c;
  int local_158;
  int *local_154;
  int local_148;
  int *local_144;
  int local_138;
  int *local_134;
  int local_128;
  int *local_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  int local_10c;
  undefined1 *local_108;
  int local_104;
  int *local_100;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  int *local_d8;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  int *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 *local_94;
  int *local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined **local_78;
  int *local_74;
  undefined1 local_6d;
  int local_6c;
  undefined1 local_65;
  int *local_64;
  undefined1 local_5d;
  char *local_5c;
  undefined1 local_55;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  char *local_2c;
  int *local_28;
  undefined1 local_22;
  undefined1 local_21;
  char *local_20;
  undefined1 local_1a;
  undefined1 local_19;
  int *local_18;
  undefined1 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  sVar6 = (**(code **)(*param_2 + 0x2ec))();
  local_48 = (int)sVar6;
  local_f0 = 0;
  local_4c = 0;
  local_6c = 0;
  piVar7 = (int *)(**(code **)(*param_1 + 0x150))(2);
  if (piVar7 == (int *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = (int *)(**(code **)(*piVar7 + 0x38))();
  }
  piVar7 = local_34;
  local_8c = 0;
  local_88 = (undefined4 *)0x0;
  local_84 = (undefined4 *)0x0;
  local_cc = (undefined4 *)0x0;
  local_c8 = (undefined4 *)0x0;
  local_c4 = 0;
  if (local_34 == (int *)0x0) {
    return;
  }
  local_c0 = (undefined4 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_b8 = 0;
  cVar5 = FUN_10a68900("gender",&local_f0);
  if (cVar5 != '\0') {
    piVar8 = (int *)FUN_10f19240();
    local_64 = piVar8;
    if (piVar8 != (int *)0x0) {
      local_194 = FUN_1025b060();
      local_ec = local_194;
      FUN_1103de30(piVar7,"ChangeModel",&local_48,&local_ec);
    }
    if (local_48 == 0) {
      pcVar22 = "male_fileModel";
    }
    else {
      pcVar22 = "female_fileModel";
    }
    FUN_10a68bb0(pcVar22,&local_5c);
    piVar7 = (int *)(**(code **)(*param_1 + 0x1b8))(0);
    if (piVar7 != (int *)0x0) {
      piVar8 = (int *)(**(code **)(*piVar7 + 0x58))();
      local_18 = (int *)(**(code **)(*piVar8 + 0x24))();
      iVar20 = 0;
      piVar8 = local_64;
      if (0 < (int)local_18) {
        do {
          piVar8 = (int *)(**(code **)(*piVar7 + 0x58))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x1c))(iVar20);
          piVar8 = (int *)(**(code **)(*piVar8 + 0x6c))();
          if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 8))(), iVar9 == 3)) {
            local_10c = piVar8[1];
            FUN_10b31510(&local_10c);
          }
          iVar20 = iVar20 + 1;
          piVar8 = local_64;
        } while (iVar20 < (int)local_18);
      }
    }
    sVar6 = (**(code **)(*param_2 + 0x2ec))();
    local_18 = (int *)(int)sVar6;
    local_10 = 0;
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
      FUN_10520070();
      (**(code **)(*piVar8 + 0x1bc))(local_26c,0,0);
      pcVar19 = atoi_exref;
      iVar20 = atoi(local_240);
      iVar20 = FUN_1052bc30(iVar20);
      if (iVar20 != 0) {
        FUN_10a79cc0(&local_54,*(undefined4 *)(iVar20 + 0x2c),&DAT_11cbc0f0);
        iVar20 = local_54;
        cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_54,0);
        if ((cVar5 != '\0') &&
           (cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(iVar20), cVar5 != '\0')) {
          if (local_c == local_8) {
            local_79 = 0;
            local_19 = 0;
            FUN_10af2cd0(local_c,&local_54,&local_19,1,1);
          }
          else {
            local_7a = 0;
            local_7e = 0;
            if (local_c != (int *)0x0) {
              piVar7 = (int *)(iVar20 + -0xc);
              if (-1 < *piVar7) {
                *local_c = local_54;
                FUN_10c3dab0(piVar7);
                local_c = local_c + 1;
                goto LAB_1103c1fc;
              }
              *local_c = (int)&DAT_1201fc98;
            }
            local_c = local_c + 1;
          }
        }
LAB_1103c1fc:
        FUN_104f6f60();
      }
      local_108 = local_220;
      if (local_218 != local_108) {
        local_108 = local_220;
        puVar16 = local_218;
        do {
          iVar20 = (*pcVar19)(*(undefined4 *)(puVar16 + 0x28));
          iVar9 = FUN_1053a880(0,"CAvatarInfo",0);
          if ((iVar20 != -1) &&
             ((((iVar20 != 0 || (*(int *)(iVar9 + 0x30) == 0)) &&
               (iVar10 = *(int *)(iVar9 + 0x28), iVar10 != 0)) &&
              ((iVar20 = iVar20 - *(int *)(iVar9 + 0x30), -1 < iVar20 &&
               (iVar20 < *(int *)(iVar9 + 0x24))))))) {
            iVar9 = *(int *)(*(int *)(iVar9 + 0x20) + (iVar20 / iVar10) * 4);
            if ((iVar9 != 0) && (iVar20 = *(int *)(iVar9 + (iVar20 % iVar10) * 4), iVar20 != 0)) {
              FUN_10a79cc0(&local_40,*(undefined4 *)(iVar20 + 0x2c),&DAT_11cbc0f0);
              iVar20 = local_40;
              cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_40,0);
              if ((cVar5 != '\0') &&
                 (cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(iVar20),
                 iVar9 = local_40, cVar5 != '\0')) {
                if (local_c == local_8) {
                  local_80 = 0;
                  local_1a = 0;
                  FUN_10af2cd0(local_c,&local_40,&local_1a,1,1);
                }
                else {
                  local_65 = 0;
                  local_7c = 0;
                  if (local_c != (int *)0x0) {
                    if (-1 < *(int *)(iVar20 + -0xc)) {
                      *local_c = local_40;
                      FUN_10c3dab0(*local_c + -0xc);
                      local_c = local_c + 1;
                      iVar20 = iVar9;
                      goto LAB_1103c351;
                    }
                    *local_c = (int)&DAT_1201fc98;
                    iVar20 = local_40;
                  }
                  local_c = local_c + 1;
                }
              }
LAB_1103c351:
              piVar7 = (int *)(iVar20 + -0xc);
              if ((-1 < *piVar7) && (iVar9 = FUN_10c3dad0(piVar7), iVar9 < 1)) {
                DAT_123be268 = DAT_123be268 - (*(int *)(iVar20 + -4) + 0xd);
                FUN_10c3d900(piVar7);
              }
            }
          }
          puVar12 = *(undefined1 **)(puVar16 + 0xc);
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)(puVar16 + 4);
            if (puVar16 == *(undefined1 **)(puVar12 + 0xc)) {
              do {
                puVar16 = puVar12;
                puVar12 = *(undefined1 **)(puVar16 + 4);
              } while (puVar16 == *(undefined1 **)(puVar12 + 0xc));
            }
            if (*(undefined1 **)(puVar16 + 0xc) != puVar12) {
              puVar16 = puVar12;
            }
          }
          else {
            for (puVar2 = *(undefined1 **)(puVar12 + 8); puVar16 = puVar12,
                puVar2 != (undefined1 *)0x0; puVar2 = *(undefined1 **)(puVar2 + 8)) {
              puVar12 = puVar2;
            }
          }
          pcVar19 = atoi_exref;
        } while (puVar16 != local_220);
      }
      FUN_10463d60(local_1f0);
      puVar3 = local_c8;
      for (puVar13 = local_cc; puVar13 != puVar3; puVar13 = puVar13 + 1) {
        if (local_88 == local_84) {
          local_21 = 0;
          FUN_1053b850(local_88,puVar13,&local_21,1,1);
        }
        else {
          *local_88 = *puVar13;
          local_88 = local_88 + 1;
          local_5d = 0;
          local_7d = 0;
        }
      }
      FUN_10516930();
    }
    else {
      local_1dc[10] = 0;
      local_1dc[4] = 0xea65;
      local_1dc[5] = 0x94ed2;
      local_1dc[6] = 0;
      local_1dc[7] = 0;
      local_1dc[8] = 0;
      local_1dc[9] = 0;
      if (local_18 != (int *)0x0) {
        local_1dc[5] = 0x975e2;
      }
      iVar20 = 0;
      local_1dc[0] = _DAT_11cc2820;
      local_1dc[1] = _UNK_11cc2824;
      local_1dc[2] = _UNK_11cc2828;
      local_1dc[3] = _UNK_11cc282c;
      do {
        iVar9 = *(int *)((int)local_1dc + iVar20);
        iVar10 = FUN_1053a9e0(0,"CEquipInfo",0);
        if (((iVar9 != -1) &&
            (((iVar9 != 0 || (*(int *)(iVar10 + 0x30) == 0)) &&
             (iVar1 = *(int *)(iVar10 + 0x28), iVar1 != 0)))) &&
           ((iVar9 = iVar9 - *(int *)(iVar10 + 0x30), -1 < iVar9 &&
            (iVar9 < *(int *)(iVar10 + 0x24))))) {
          iVar10 = *(int *)(*(int *)(iVar10 + 0x20) + (iVar9 / iVar1) * 4);
          if ((iVar10 != 0) && (iVar9 = *(int *)(iVar10 + (iVar9 % iVar1) * 4), iVar9 != 0)) {
            if (local_18 == (int *)0x0) {
              pcVar22 = *(char **)(iVar9 + 0x80);
            }
            else {
              pcVar22 = *(char **)(iVar9 + 0x98);
            }
            iVar9 = atoi(pcVar22);
            *(int *)((int)local_1dc + iVar20 + 0x18) = iVar9;
          }
        }
        iVar20 = iVar20 + 4;
      } while (iVar20 < 0x14);
      iVar20 = 0;
      do {
        iVar9 = local_1dc[iVar20 + 5];
        local_78 = &PTR_FUN_11dc0b20;
        if ((DAT_123be984 & 1) == 0) {
          DAT_123be984 = DAT_123be984 | 1;
          FUN_102500e0("CAvatarInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6fd80);
        }
        puVar11 = (undefined *)*DAT_123be968;
        if ((puVar11 == (undefined *)0x0) &&
           (puVar11 = (undefined *)FUN_11679e10(&local_78,"CAvatarInfo",0),
           puVar11 == (undefined *)0x0)) {
          if ((DAT_123be73c & 1) == 0) {
            DAT_123be73c = DAT_123be73c | 1;
            FUN_1053c940();
            FUN_11a8911f(&LAB_11c93ec0);
          }
          puVar11 = &DAT_123be704;
        }
        local_78 = &PTR_FUN_11da54a8;
        if (((iVar9 != -1) &&
            (((iVar9 != 0 || (*(int *)(puVar11 + 0x30) == 0)) &&
             (iVar10 = *(int *)(puVar11 + 0x28), iVar10 != 0)))) &&
           ((iVar9 = iVar9 - *(int *)(puVar11 + 0x30), -1 < iVar9 &&
            (iVar9 < *(int *)(puVar11 + 0x24))))) {
          iVar1 = *(int *)(*(int *)(puVar11 + 0x20) + (iVar9 / iVar10) * 4);
          if ((iVar1 != 0) && (iVar9 = *(int *)(iVar1 + (iVar9 % iVar10) * 4), iVar9 != 0)) {
            piVar7 = (int *)FUN_104f6c30(*(undefined4 *)(iVar9 + 0x2c));
            if (*(int *)(*piVar7 + -0xc) < 0) {
              local_14 = &DAT_1201fc98;
            }
            else {
              local_14 = (undefined1 *)*piVar7;
              FUN_10c3dab0(local_14 + -0xc);
            }
            FUN_10a79ae0(&local_14);
            FUN_10a4c990(&DAT_11d9f004,1);
            FUN_10a4c990(&DAT_11cbc0f0,3);
            iVar9 = local_f4;
            piVar7 = (int *)(local_f4 + -0xc);
            if ((-1 < *piVar7) && (iVar10 = FUN_10c3dad0(piVar7), iVar10 < 1)) {
              DAT_123be268 = DAT_123be268 - (*(int *)(iVar9 + -4) + 0xd);
              FUN_10c3d900(piVar7);
            }
            puVar16 = local_14;
            cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0xf4))(local_14,0);
            if ((cVar5 != '\0') &&
               (cVar5 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(puVar16),
               puVar12 = local_14, cVar5 != '\0')) {
              if (local_c == local_8) {
                local_55 = 0;
                local_22 = 0;
                FUN_10af2cd0(local_c,&local_14,&local_22,1,1);
              }
              else {
                local_6d = 0;
                local_7f = 0;
                if (local_c != (int *)0x0) {
                  if (-1 < *(int *)(puVar16 + -0xc)) {
                    *local_c = (int)local_14;
                    FUN_10c3dab0(*local_c + -0xc);
                    local_c = local_c + 1;
                    puVar16 = puVar12;
                    goto LAB_1103c0d0;
                  }
                  *local_c = (int)&DAT_1201fc98;
                  puVar16 = local_14;
                }
                local_c = local_c + 1;
              }
            }
LAB_1103c0d0:
            piVar7 = (int *)(puVar16 + -0xc);
            if ((-1 < *piVar7) && (iVar9 = FUN_10c3dad0(piVar7), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 - (*(int *)(puVar16 + -4) + 0xd);
              FUN_10c3d900(piVar7);
            }
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < 6);
    }
    if ((int)local_c - local_10 >> 2 == 0) {
      (**(code **)(*param_1 + 0x1d4))(0,local_5c,1);
    }
    else {
      local_2c = &DAT_1201fc98;
      if (local_5c != (char *)0x0) {
        pcVar22 = local_5c;
        do {
          cVar5 = *pcVar22;
          pcVar22 = pcVar22 + 1;
        } while (cVar5 != '\0');
        sVar21 = (int)pcVar22 - (int)(local_5c + 1);
        if (sVar21 != 0) {
          puVar13 = (undefined4 *)FUN_10c3d780(sVar21 + 0xd);
          DAT_123be268 = DAT_123be268 + sVar21 + 0xd;
          *puVar13 = 1;
          local_2c = (char *)(puVar13 + 3);
          puVar13[1] = sVar21;
          puVar13[2] = sVar21;
          local_2c[sVar21] = '\0';
          if (local_2c != local_5c) {
            memcpy(local_2c,local_5c,sVar21);
          }
        }
      }
      (**(code **)(*param_1 + 0x1d8))(0,&local_2c,&local_10,0x10001);
      pcVar22 = local_2c;
      piVar7 = (int *)(local_2c + -0xc);
      if ((-1 < *piVar7) && (iVar20 = FUN_10c3dad0(piVar7), iVar20 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar22 + -4) + 0xd);
        FUN_10c3d900(piVar7);
      }
    }
    local_100 = (int *)(float)local_48;
    local_104 = 4;
    (**(code **)(*local_34 + 0x18))("gender",&local_104,0);
    if (local_104 == 6) {
      if (local_100 != (int *)0x0) {
        (**(code **)(*local_100 + 0xc))();
      }
    }
    else if ((local_104 == 7) && (local_100 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_100);
    }
    local_100 = (int *)0x0;
    local_104 = 0;
    local_94 = local_c0;
    local_18 = DAT_11de9918;
    pcVar19 = strncmp_exref;
    if (local_c0 != local_bc) {
      do {
        local_90 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*local_94);
        if (local_90 != (int *)0x0) {
          for (pcVar22 = (char *)(**(code **)(*local_90 + 0x21c))(); pcVar22 != (char *)0x0;
              pcVar22 = *(char **)(pcVar22 + 0x40)) {
            iVar20 = (*pcVar19)(pcVar22,&DAT_11dbbfa8,1);
            if (iVar20 == 0) {
              piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                        (*(undefined4 *)(pcVar22 + 0x20));
              if (piVar7 != (int *)0x0) {
                piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))(0);
                local_3c = (int *)(**(code **)(*piVar7 + 0x58))();
                local_20 = &DAT_1201fc98;
                pcVar18 = pcVar22;
                do {
                  cVar5 = *pcVar18;
                  pcVar18 = pcVar18 + 1;
                } while (cVar5 != '\0');
                sVar21 = (int)pcVar18 - (int)(pcVar22 + 1);
                if (sVar21 != 0) {
                  puVar13 = (undefined4 *)FUN_10c3d780(sVar21 + 0xd);
                  DAT_123be268 = DAT_123be268 + sVar21 + 0xd;
                  local_20 = (char *)(puVar13 + 3);
                  *puVar13 = 1;
                  puVar13[1] = sVar21;
                  puVar13[2] = sVar21;
                  local_20[sVar21] = '\0';
                  if (local_20 != pcVar22) {
                    memcpy(local_20,pcVar22,sVar21);
                  }
                }
                FUN_10a4c990(&DAT_11d9dcd4,1);
                pcVar18 = (char *)(**(code **)(*local_90 + 0x48))();
                if (pcVar18 == (char *)0x0) {
                  iVar20 = 0;
                }
                else {
                  pcVar17 = pcVar18;
                  do {
                    cVar5 = *pcVar17;
                    pcVar17 = pcVar17 + 1;
                  } while (cVar5 != '\0');
                  iVar20 = (int)pcVar17 - (int)(pcVar18 + 1);
                }
                FUN_10a4c990(pcVar18,iVar20);
                pcVar18 = local_20;
                piVar7 = local_3c;
                iVar20 = (**(code **)(*local_3c + 0x18))(local_20);
                if (iVar20 != 0) {
                  (**(code **)(*piVar7 + 0x14))(pcVar18);
                }
                local_20 = (char *)(**(code **)(*piVar7 + 0xc))(pcVar18,0,pcVar22 + 1,1,0,0);
                if (local_20 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x18);
                }
                piVar7 = (int *)(pcVar18 + -0xc);
                pcVar19 = strncmp_exref;
                if ((-1 < *piVar7) &&
                   (iVar20 = FUN_10c3dad0(piVar7), pcVar19 = strncmp_exref, iVar20 < 1)) {
                  DAT_123be268 = DAT_123be268 - (*(int *)(pcVar18 + -4) + 0xd);
                  FUN_10c3d900(piVar7);
                  pcVar19 = strncmp_exref;
                }
              }
              break;
            }
          }
        }
        local_94 = local_94 + 1;
      } while (local_94 != local_bc);
    }
    local_44 = (int *)0x0;
    local_30 = (int *)0x0;
    local_38 = (int *)0x0;
    cVar5 = FUN_10a68ce0("EyeAttachmentOffset",&local_44);
    if (cVar5 != '\0') {
      if (local_48 == 0) {
        pcVar22 = "male";
      }
      else {
        pcVar22 = "female";
      }
      FUN_10a68ce0(pcVar22,&local_30);
      piVar7 = local_30;
      if (local_30 != (int *)0x0) {
        uVar14 = FUN_1025b060();
        cVar5 = FUN_10c78c50(uVar14,&local_38);
        piVar8 = local_38;
        if (cVar5 == '\0') {
LAB_1103cafe:
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0xc))();
          }
        }
        else if (local_38 != (int *)0x0) {
          local_118 = 0;
          local_38 = (int *)0x0;
          uStack_114 = 0;
          local_110 = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          local_e0 = 0;
          local_98 = DAT_11de9918;
          local_a4 = (int *)0x0;
          local_a0 = 0;
          local_9c = 0;
          piStack_a8 = DAT_11de9918;
          local_b4 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          FUN_10a68c40("Leye_offset",&local_118);
          FUN_10a68c40("Reye_offset",&local_e8);
          local_50 = (int *)0x0;
          cVar5 = FUN_10a68ce0("Leye_rotation",&local_50);
          if (cVar5 != '\0') {
            FUN_10a68a10(&DAT_11d9e090,&local_98);
            FUN_10a68a10(&DAT_11dd2bbc,&local_a4);
            FUN_10a68a10(&DAT_11dd2bc0,&local_a0);
            FUN_10a68a10(&DAT_11de94bc,&local_9c);
            local_18 = local_98;
            local_38 = local_a4;
          }
          cVar5 = FUN_10a68ce0("Reye_rotation",&local_50);
          piVar4 = local_50;
          if (cVar5 != '\0') {
            FUN_10a68a10(&DAT_11d9e090,&piStack_a8);
            FUN_10a68a10(&DAT_11dd2bbc,&local_b4);
            FUN_10a68a10(&DAT_11dd2bc0,&uStack_b0);
            FUN_10a68a10(&DAT_11de94bc,&uStack_ac);
          }
          piVar7 = (int *)(**(code **)(*param_1 + 0x1b8))(0);
          if (piVar7 != (int *)0x0) {
            piVar15 = (int *)(**(code **)(*piVar7 + 0x58))();
            local_3c = (int *)(**(code **)(*piVar15 + 0x18))("eye_left");
            if (local_3c != (int *)0x0) {
              local_164 = CONCAT44(uStack_114,local_118);
              local_174 = local_38;
              local_170 = local_a0;
              local_15c = local_110;
              local_16c = local_9c;
              local_168 = local_18;
              (**(code **)(*local_3c + 0x2c))(&local_174);
              (**(code **)(*local_3c + 0x40))();
            }
            piVar7 = (int *)(**(code **)(*piVar7 + 0x58))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x18))("eye_right");
            if (piVar7 != (int *)0x0) {
              local_180 = CONCAT44(uStack_e4,local_e8);
              local_178 = local_e0;
              local_190 = local_b4;
              uStack_18c = uStack_b0;
              uStack_188 = uStack_ac;
              piStack_184 = piStack_a8;
              (**(code **)(*piVar7 + 0x2c))(&local_190);
              (**(code **)(*piVar7 + 0x40))();
            }
          }
          piVar7 = local_30;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0xc))();
            piVar7 = local_30;
          }
          goto LAB_1103cafe;
        }
        (**(code **)(*piVar7 + 0xc))();
      }
    }
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 0xc))();
    }
    FUN_10ae74b0(local_c,local_10,0,&local_7b);
    if (local_10 != 0) {
      FUN_10c3d5d0(local_10);
    }
  }
  local_74 = (int *)0x0;
  cVar5 = FUN_10a68ce0("Properties",&local_74);
  if (cVar5 == '\0') goto LAB_1103cf5b;
  local_28 = (int *)0x0;
  FUN_10a68ce0("PlayerProxy",&local_28);
  piVar7 = local_28;
  local_dc = 5;
  cVar5 = (**(code **)(*local_28 + 0x20))("MasterWeapon",&local_dc,0);
  if ((cVar5 == '\0') || (local_dc != 5)) {
    if (local_dc == 6) {
      if (local_d8 != (int *)0x0) {
        (**(code **)(*local_d8 + 0xc))();
      }
    }
    else if ((local_dc == 7) && (local_d8 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_d8);
    }
  }
  else {
    local_3c = local_d8;
  }
  local_d8 = (int *)0x0;
  local_dc = 0;
  local_128 = 5;
  cVar5 = (**(code **)(*piVar7 + 0x20))("SlaveWeapon",&local_128,0);
  if ((cVar5 == '\0') || (local_128 != 5)) {
    if (local_128 == 6) {
      if (local_124 != (int *)0x0) {
        (**(code **)(*local_124 + 0xc))();
      }
    }
    else if ((local_128 == 7) && (local_124 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_124);
    }
  }
  else {
    local_18 = local_124;
  }
  local_124 = (int *)0x0;
  local_128 = 0;
  local_148 = 2;
  cVar5 = (**(code **)(*piVar7 + 0x20))("SyncWeapon",&local_148,0);
  if ((cVar5 == '\0') || (local_148 != 2)) {
    if (local_148 == 6) {
      if (local_144 != (int *)0x0) {
        (**(code **)(*local_144 + 0xc))();
      }
    }
    else if ((local_148 == 7) && (local_144 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_144);
    }
LAB_1103cd02:
    local_4c = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x38))(local_3c);
    uVar14 = (**(code **)(*param_1 + 0x48))();
    if (local_4c == 0) {
      sprintf_s((char *)local_2ac,0x40,"%s_Master",uVar14);
      local_138 = 5;
      local_134 = local_2ac;
      (**(code **)(*piVar7 + 0x18))("MasterWeapon",&local_138,0);
      if (local_138 == 6) {
        if (local_134 != (int *)0x0) {
          (**(code **)(*local_134 + 0xc))();
        }
      }
      else if ((local_138 == 7) && (local_134 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_134);
      }
      FUN_10a6f680();
      local_320 = local_2ac;
      piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
      local_32c = (**(code **)(*piVar7 + 0xc))("BasicEntity");
      local_31c = local_31c | 0x480000;
      local_4c = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x24))(local_344,1);
      piVar8 = (int *)(local_2c4 + -0xc);
      piVar7 = local_28;
      if ((-1 < *piVar8) && (iVar20 = FUN_10c3dad0(piVar8), piVar7 = local_28, iVar20 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_2c4 + -4));
        FUN_10c3d900(piVar8);
        piVar7 = local_28;
      }
    }
    local_6c = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x38))(local_18);
    if (local_6c == 0) {
      sprintf_s((char *)local_384,0x40,"%s_Slave",uVar14);
      local_158 = 5;
      local_154 = local_384;
      (**(code **)(*piVar7 + 0x18))("SlaveWeapon",&local_158,0);
      if (local_158 == 6) {
        if (local_154 != (int *)0x0) {
          (**(code **)(*local_154 + 0xc))();
        }
      }
      else if ((local_158 == 7) && (local_154 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_154);
      }
      FUN_10a6f680();
      local_3f8 = local_384;
      piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
      local_404 = (**(code **)(*piVar7 + 0xc))("BasicEntity");
      local_3f4 = local_3f4 | 0x480000;
      local_6c = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x24))(local_41c,1);
      piVar8 = (int *)(local_39c + -0xc);
      piVar7 = local_28;
      if ((-1 < *piVar8) && (iVar20 = FUN_10c3dad0(piVar8), piVar7 = local_28, iVar20 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_39c + -4));
        FUN_10c3d900(piVar8);
        piVar7 = local_28;
      }
    }
  }
  else if ((char)local_144 != '\0') goto LAB_1103cd02;
  (**(code **)(*piVar7 + 0xc))();
LAB_1103cf5b:
  piVar7 = (int *)FUN_10ba9b00();
  iVar20 = *piVar7;
  uVar14 = (**(code **)(*param_1 + 0x1b8))(0,local_4c,local_6c);
  (**(code **)(iVar20 + 0x174))(param_2,uVar14);
  piVar7 = (int *)(**(code **)(*param_1 + 0x1b8))(0);
  iVar20 = *piVar7;
  puVar13 = (undefined4 *)(**(code **)(*param_1 + 0xbc))();
  uVar14 = (**(code **)(*param_1 + 0x48))(&local_8c,*puVar13);
  (**(code **)(iVar20 + 0x1e4))(uVar14);
  if (local_74 != (int *)0x0) {
    (**(code **)(*local_74 + 0xc))();
  }
  if (local_c0 != (undefined4 *)0x0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != (undefined4 *)0x0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_8c != 0) {
    FUN_10c3d5d0(local_8c);
  }
  return;
}



