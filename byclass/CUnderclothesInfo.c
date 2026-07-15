// ===== class CUnderclothesInfo  (2 recovered methods) =====

/* --- CUnderclothesInfo::GetManagers @ 1052c770 --- */
// [RE-AUTO c3]
// id: CUnderclothesInfo::GetManagers
// strings:
//   ""CUnderclothesInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CUnderclothesInfo::GetManagers
   strings:
     ""CUnderclothesInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CUnderclothesInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be8c4 & 1) == 0) {
    DAT_123be8c4 = DAT_123be8c4 | 1;
    _DAT_123be8bc = &DAT_123be8ac;
    DAT_123be8c0 = &DAT_123be8ac;
    DAT_123be8ac = 0;
    FUN_100d83d0("CUnderclothesInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fed0);
  }
  return DAT_123be8a8;
}



/* --- CUnderclothesInfo::GetManagers_11211080 @ 11211080 --- */
// [RE-AUTO c3]
// id: CUnderclothesInfo::GetManagers
// strings:
//   ""CFaceInfo""
//   ""CHairInfo""
//   ""CEquipInfo""
//   ""CSuitInfo""
//   ""CUnderclothesInfo::GetManagers""
//   ""CUnderclothesInfo""

/* [RE-AUTO c3]
   id: CUnderclothesInfo::GetManagers
   strings:
     ""CFaceInfo""
     ""CHairInfo""
     ""CEquipInfo""
     ""CSuitInfo""
     ""CUnderclothesInfo::GetManagers""
     ""CUnderclothesInfo"" */

void CUnderclothesInfo__GetManagers_11211080(int param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined **ppuStack_155;
  undefined4 local_150;
  int iStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  int local_140;
  char local_13c;
  undefined *local_138;
  int *local_134;
  int local_130;
  int *local_12c;
  int *local_128;
  int local_124;
  undefined4 local_120;
  undefined1 local_11c [4];
  undefined *local_118;
  undefined1 local_114 [4];
  undefined *local_110;
  undefined **local_10c;
  int local_108;
  undefined1 local_101;
  uint local_100;
  char local_f9;
  int local_f8;
  char local_f1;
  undefined *local_f0;
  undefined1 local_ec [16];
  undefined1 *local_dc;
  undefined1 *local_d8;
  undefined1 local_d4 [16];
  undefined1 *local_c4;
  undefined1 *local_c0;
  undefined1 local_bc [16];
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 local_a4 [16];
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 local_8c [16];
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 local_74 [16];
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_134 = param_3;
  local_f8 = param_2;
  if (param_3 != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  local_138 = (undefined *)0xffffffff;
  local_110 = (undefined *)0x0;
  uVar3 = FUN_1139a8d0();
  local_120 = CONCAT31(local_120._1_3_,uVar3);
  iVar5 = FUN_1025b060();
  iVar6 = FUN_108538f0(0,"CFaceInfo",0);
  if ((iVar5 != -1) &&
     ((((iVar5 != 0 || (*(int *)(iVar6 + 0x30) == 0)) &&
       (iVar8 = *(int *)(iVar6 + 0x28), iVar8 != 0)) &&
      ((iVar5 = iVar5 - *(int *)(iVar6 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar6 + 0x24)))))))
  {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar5 / iVar8) * 4);
    if ((iVar6 != 0) && (iVar5 = *(int *)(iVar6 + (iVar5 % iVar8) * 4), iVar5 != 0)) {
      if ((char)local_120 == '\0') {
        iVar5 = iVar5 + 0x2c;
      }
      else {
        iVar5 = iVar5 + 0x14;
      }
      if (iVar5 != param_1) {
        FUN_100d83d0(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
      }
    }
  }
  iVar5 = FUN_1025b060();
  iVar6 = FUN_10853790(0,"CHairInfo",0);
  if ((((iVar5 != -1) && ((iVar5 != 0 || (*(int *)(iVar6 + 0x30) == 0)))) &&
      (iVar8 = *(int *)(iVar6 + 0x28), iVar8 != 0)) &&
     ((iVar5 = iVar5 - *(int *)(iVar6 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar6 + 0x24))))) {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar5 / iVar8) * 4);
    if ((iVar6 != 0) && (iVar5 = *(int *)(iVar6 + (iVar5 % iVar8) * 4), iVar5 != 0)) {
      if ((char)local_120 == '\0') {
        iVar5 = iVar5 + 0x2c;
      }
      else {
        iVar5 = iVar5 + 0x14;
      }
      if (iVar5 != param_1 + 0x18) {
        FUN_100d83d0(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
      }
    }
  }
  puStack_148 = &local_150;
  local_140 = 0;
  bVar2 = false;
  local_150 = 0;
  iStack_14c = 0;
  local_13c = local_f1;
  local_130 = 0;
  local_12c = (int *)0x0;
  local_128 = (int *)0x0;
  local_f1 = '\0';
  puStack_144 = puStack_148;
  piVar7 = (int *)FUN_1112e530(0);
  local_10c = (undefined **)*piVar7;
  uVar1 = *(undefined8 *)(piVar7 + 4);
  ppuVar14 = local_10c;
  if ((local_134 != (int *)0x0) && (*(undefined ***)*local_134 != (undefined **)0x0)) {
    bVar2 = true;
    local_f1 = '\x01';
    ppuVar14 = *(undefined ***)*local_134;
  }
  *(undefined ***)(param_1 + 0x48) = ppuVar14;
  ppuStack_155 = (undefined **)((ulonglong)uVar1 >> 0x18);
  if ((!bVar2) && (ppuStack_155 != (undefined **)0x0)) {
    ppuVar14 = ppuStack_155;
  }
  iVar5 = FUN_1053a9e0(0,"CEquipInfo",0);
  if ((ppuVar14 != (undefined **)0xffffffff) &&
     (((ppuVar14 != (undefined **)0x0 || (*(int *)(iVar5 + 0x30) == 0)) &&
      (*(int *)(iVar5 + 0x28) != 0)))) {
    iVar6 = (int)ppuVar14 - *(int *)(iVar5 + 0x30);
    if ((iVar6 < 0) || (*(int *)(iVar5 + 0x24) <= iVar6)) {
LAB_112112ed:
      iVar5 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
      if (iVar8 == 0) goto LAB_112112ed;
      iVar5 = *(int *)(iVar8 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4);
    }
    local_108 = iVar5;
    if ((iVar5 != 0) &&
       ((cVar4 = FUN_116c5250(), cVar4 != '\0' || (cVar4 = FUN_116c5290(), cVar4 != '\0')))) {
      iVar6 = iVar5 + 0x6c;
      if ((char)local_120 == '\0') {
        iVar6 = iVar5 + 0x84;
      }
      if (iVar6 != param_1 + 0x30) {
        FUN_100d83d0(*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x10));
      }
      if ((*(int *)(iVar5 + 0x27c) != 0) &&
         (((local_f1 != '\0' || (ppuStack_155 == (undefined **)0x0)) || (ppuStack_155 == local_10c))
         )) {
        FUN_11213220(0,&local_108,&local_f1,1,1);
        local_10c = *(undefined ***)(iVar5 + 0x27c);
        FUN_10467580(local_11c,&local_10c);
      }
    }
  }
  local_18 = (undefined1 *)local_28;
  local_28[0]._0_1_ = 0;
  local_2c = 1;
  local_14 = local_18;
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  if ((local_134 != (int *)0x0) && (*(int *)(*local_134 + 0x18) == 0)) {
    if (*(int *)(*local_134 + 4) != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
    if (*(int *)(*local_134 + 8) != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
    if (*(int *)(*local_134 + 0xc) != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
    if (*(int *)(*local_134 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
    if (*(int *)(*local_134 + 0x14) != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
  }
  iVar5 = 0;
  local_f9 = '\0';
  local_124 = 0;
  if (*(char *)(param_1 + 0x8b) == '\0') {
    piVar7 = (int *)FUN_1112e530(0x11);
    iVar6 = *piVar7;
    cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 4))();
    if (cVar4 == '\0') {
      iVar8 = FUN_1053aca0(0,"CSuitInfo",0);
      if (iVar6 == -1) {
        local_124 = 0;
      }
      else if ((iVar6 == 0) && (*(int *)(iVar8 + 0x30) != 0)) {
        iVar5 = 0;
        local_124 = 0;
      }
      else {
        iVar5 = *(int *)(iVar8 + 0x28);
        if (iVar5 == 0) {
          iVar5 = 0;
          local_124 = 0;
        }
        else {
          iVar6 = iVar6 - *(int *)(iVar8 + 0x30);
          if ((iVar6 < 0) || (*(int *)(iVar8 + 0x24) <= iVar6)) {
LAB_112114d1:
            iVar5 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(iVar8 + 0x20) + (iVar6 / iVar5) * 4);
            if (iVar8 == 0) goto LAB_112114d1;
            iVar5 = *(int *)(iVar8 + (iVar6 % iVar5) * 4);
          }
          local_124 = iVar5;
          if (iVar5 != 0) {
            *(undefined1 *)(param_1 + 0x8c) = 1;
          }
        }
      }
    }
    if (((local_134 != (int *)0x0) && (*(int *)(*local_134 + 0x18) != 0)) &&
       (iVar5 = FUN_1052c130(*(undefined4 *)(*local_134 + 0x18)), local_124 = iVar5, iVar5 != 0)) {
      *(undefined1 *)(param_1 + 0x8c) = 1;
      local_f9 = '\x01';
    }
  }
  cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 0x14))();
  local_10c = (undefined **)0x1;
  if (iVar5 != 0) {
    cVar4 = '\0';
  }
  FUN_1053b770(&local_10c);
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_f1 = '\0';
  if ((cVar4 == '\0') || (*(char *)(param_1 + 0x8a) != '\0')) {
    puVar9 = (undefined *)FUN_1112e580(1);
    local_f0 = puVar9;
    iVar6 = FUN_1112e530(1);
    local_100 = (uint)*(byte *)(iVar6 + 0x12);
    cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 4))();
    if ((cVar4 == '\0') &&
       ((*(char *)(param_1 + 0x89) == '\0' &&
        (puVar10 = (undefined *)FUN_1112e580(0xc), 0 < (int)puVar10)))) {
      local_f0 = puVar10;
      iVar6 = FUN_1112e530(0xc);
      local_100 = (uint)*(byte *)(iVar6 + 0x12);
      puVar9 = puVar10;
    }
    if ((iVar5 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
      puVar9 = *(undefined **)(iVar5 + 0x14);
      local_100 = 0;
      local_f0 = puVar9;
    }
    if (local_134 != (int *)0x0) {
      puVar10 = *(undefined **)(*local_134 + 4);
      if (puVar10 != (undefined *)0x0) {
        local_f1 = '\x01';
        local_100 = 0;
        puVar9 = puVar10;
        local_f0 = puVar10;
      }
      if (local_f9 != '\0') {
        puVar9 = *(undefined **)(iVar5 + 0x14);
        local_f1 = '\x01';
        local_100 = 0;
        local_f0 = puVar9;
      }
    }
    if (((0 < (int)puVar9) &&
        (iVar6 = FUN_1053a9e0(0,"CEquipInfo",0), puVar9 != (undefined *)0xffffffff)) &&
       (*(int *)(iVar6 + 0x28) != 0)) {
      iVar8 = (int)puVar9 - *(int *)(iVar6 + 0x30);
      if ((iVar8 < 0) || (*(int *)(iVar6 + 0x24) <= iVar8)) {
LAB_112116cd:
        iVar6 = 0;
      }
      else {
        iVar13 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar8 / *(int *)(iVar6 + 0x28)) * 4);
        if (iVar13 == 0) goto LAB_112116cd;
        iVar6 = *(int *)(iVar13 + (iVar8 % *(int *)(iVar6 + 0x28)) * 4);
      }
      local_108 = iVar6;
      if (iVar6 != 0) {
        iVar8 = iVar6 + 0x6c;
        if ((char)local_120 == '\0') {
          iVar8 = iVar6 + 0x84;
        }
        local_34 = local_44;
        local_30 = local_34;
        FUN_100b62c0(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x10));
        local_10c = (undefined **)0x1;
        puVar11 = (undefined1 *)FUN_1053b770(&local_10c);
        if (local_44 != puVar11) {
          FUN_100d83d0(local_30,local_34);
        }
        FUN_100d83d0(local_30,local_34);
        FUN_11672970();
        FUN_11672840(local_f0,local_100,&local_10,&local_c);
        if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_30);
        }
        puVar9 = *(undefined **)(iVar6 + 0x27c);
        if (0 < (int)puVar9) {
          local_110 = puVar9;
          local_f0 = puVar9;
          if (local_12c == local_128) {
            FUN_11213220(local_12c,&local_108,&local_101,1,1);
          }
          else {
            *local_12c = iVar6;
            local_12c = local_12c + 1;
          }
          FUN_10467580(local_11c,&local_f0);
        }
      }
    }
  }
  local_10c = (undefined **)0x1;
  puVar12 = (undefined4 *)FUN_10ae6f90(&local_10c);
  *puVar12 = local_2c;
  if (local_28 != puVar12 + 1) {
    FUN_100d83d0(local_14,local_18);
  }
  puVar12[7] = local_10;
  puVar12[8] = local_c;
  if (local_f1 == '\0') {
    piVar7 = (int *)(local_f8 + 0x25ddc);
    cVar4 = (**(code **)(*piVar7 + 0x14))();
    if (((((cVar4 != '\0') && (*(char *)(param_1 + 0x89) == '\0')) &&
         (cVar4 = (**(code **)(*piVar7 + 4))(), cVar4 == '\0')) &&
        ((iVar6 = FUN_1112e580(0xc), 0 < iVar6 &&
         (local_10c = (undefined **)FUN_1052bdd0(iVar6), local_10c != (undefined **)0x0)))) &&
       (puVar9 = local_10c[0x9f], 0 < (int)puVar9)) {
      local_110 = puVar9;
      local_f0 = puVar9;
      FUN_11213970(&local_10c);
      FUN_10467580(local_11c,&local_f0);
    }
  }
  if ((int)local_110 < 1) {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
    local_138 = local_110;
  }
  iVar6 = FUN_1025b060();
  local_10c = &PTR_FUN_11dc0b08;
  if ((DAT_123be8c4 & 1) == 0) {
    DAT_123be8c4 = DAT_123be8c4 | 1;
    FUN_102500e0("CUnderclothesInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6fed0);
  }
  puVar12 = (undefined4 *)*DAT_123be8a8;
  if ((puVar12 == (undefined4 *)0x0) &&
     (puVar12 = (undefined4 *)FUN_11679e10(&local_10c,"CUnderclothesInfo",0),
     puVar12 == (undefined4 *)0x0)) {
    if ((DAT_123be610 & 1) == 0) {
      DAT_123be610 = DAT_123be610 | 1;
      FUN_1053cda0();
      FUN_11a8911f(&LAB_11c98080);
    }
    puVar12 = &DAT_123be5d8;
  }
  local_10c = &PTR_FUN_11da54a8;
  if (((iVar6 == -1) || (((iVar6 == 0 && (puVar12[0xc] != 0)) || (puVar12[10] == 0)))) ||
     ((iVar6 = iVar6 - puVar12[0xc], iVar6 < 0 || ((int)puVar12[9] <= iVar6)))) {
LAB_112119af:
    iVar6 = 0;
  }
  else {
    iVar8 = *(int *)(puVar12[8] + (iVar6 / (int)puVar12[10]) * 4);
    if (iVar8 == 0) goto LAB_112119af;
    iVar6 = *(int *)(iVar8 + (iVar6 % (int)puVar12[10]) * 4);
  }
  local_2c = 2;
  local_100 = iVar6;
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_110 = (undefined *)0x2;
  FUN_1053b770(&local_110);
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  if (iVar6 != 0) {
    iVar8 = iVar6 + 0x14;
    if ((char)local_120 == '\0') {
      iVar8 = iVar6 + 0x5c;
    }
    local_4c = local_5c;
    local_48 = local_4c;
    FUN_100b62c0(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x10));
    local_110 = (undefined *)0x2;
    puVar11 = (undefined1 *)FUN_1053b770(&local_110);
    if (local_5c != puVar11) {
      FUN_100d83d0(local_48,local_4c);
    }
    FUN_100d83d0(local_48,local_4c);
    if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_48);
    }
  }
  iVar6 = FUN_1112e580(2);
  iVar8 = FUN_1112e530(2);
  local_f0 = (undefined *)(uint)*(byte *)(iVar8 + 0x12);
  cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 4))();
  if (((cVar4 == '\0') && (*(char *)(param_1 + 0x89) == '\0')) &&
     (iVar8 = FUN_1112e580(0xd), 0 < iVar8)) {
    iVar6 = FUN_1112e530(0xd);
    local_f0 = (undefined *)(uint)*(byte *)(iVar6 + 0x12);
    iVar6 = iVar8;
  }
  if ((iVar5 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
    iVar6 = *(int *)(iVar5 + 0x18);
    local_f0 = (undefined *)0x0;
  }
  if (local_134 != (int *)0x0) {
    if (*(int *)(*local_134 + 8) != 0) {
      local_f0 = (undefined *)0x0;
      iVar6 = *(int *)(*local_134 + 8);
    }
    if (local_f9 != '\0') {
      iVar6 = *(int *)(iVar5 + 0x18);
      local_f0 = (undefined *)0x0;
    }
  }
  if (iVar6 < 1) {
LAB_11211cce:
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
    iVar5 = FUN_1053a9e0(0,"CEquipInfo",0);
    if (iVar6 == -1) {
      iVar5 = 0;
      local_108 = 0;
    }
    else {
      iVar8 = *(int *)(iVar5 + 0x28);
      if (iVar8 == 0) {
        iVar5 = 0;
        local_108 = 0;
      }
      else {
        iVar13 = iVar6 - *(int *)(iVar5 + 0x30);
        if ((iVar13 < 0) || (*(int *)(iVar5 + 0x24) <= iVar13)) {
LAB_11211bb8:
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar13 / iVar8) * 4);
          if (iVar5 == 0) goto LAB_11211bb8;
          iVar5 = *(int *)(iVar5 + (iVar13 % iVar8) * 4);
        }
        local_108 = iVar5;
        if (iVar5 == 0) goto LAB_11211cce;
        iVar8 = iVar5 + 0x6c;
        if ((char)local_120 == '\0') {
          iVar8 = iVar5 + 0x84;
        }
        local_64 = local_74;
        local_60 = local_64;
        FUN_100b62c0(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x10));
        local_110 = (undefined *)0x2;
        puVar11 = (undefined1 *)FUN_1053b770(&local_110);
        if (local_74 != puVar11) {
          FUN_100d83d0(local_60,local_64);
        }
        FUN_100d83d0(local_60,local_64);
        FUN_11672970();
        FUN_11672840(iVar6,local_f0,&local_10,&local_c);
        if ((local_60 != local_74) && (local_60 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_60);
        }
      }
    }
    if ((iVar5 == 0) || (puVar9 = *(undefined **)(iVar5 + 0x27c), puVar9 == (undefined *)0x0))
    goto LAB_11211cce;
    local_f0 = puVar9;
    if (local_12c == local_128) {
      FUN_11213220(local_12c,&local_108,&local_101,1,1);
    }
    else {
      *local_12c = iVar5;
      local_12c = local_12c + 1;
    }
    FUN_10467580(local_11c,&local_f0);
    if (((int)puVar9 < 1) || (puVar9 != local_138)) goto LAB_11211cce;
  }
  local_110 = (undefined *)0x2;
  puVar12 = (undefined4 *)FUN_10ae6f90(&local_110);
  *puVar12 = local_2c;
  if (local_28 != puVar12 + 1) {
    FUN_100d83d0(local_14,local_18);
  }
  puVar12[7] = local_10;
  puVar12[8] = local_c;
  local_2c = 3;
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_110 = (undefined *)0x3;
  FUN_1053b770(&local_110);
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  if (local_100 != 0) {
    if ((char)local_120 == '\0') {
      iVar5 = local_100 + 0x74;
    }
    else {
      iVar5 = local_100 + 0x2c;
    }
    local_7c = local_8c;
    local_78 = local_7c;
    FUN_100b62c0(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
    local_110 = (undefined *)0x3;
    puVar11 = (undefined1 *)FUN_1053b770(&local_110);
    if (local_8c != puVar11) {
      FUN_100d83d0(local_78,local_7c);
    }
    FUN_100d83d0(local_78,local_7c);
    if ((local_78 != local_8c) && (local_78 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_78);
    }
  }
  piVar7 = (int *)(local_f8 + 0x25ddc);
  puVar9 = (undefined *)FUN_1112e580(3);
  local_110 = puVar9;
  iVar5 = FUN_1112e530(3);
  local_f0 = (undefined *)(uint)*(byte *)(iVar5 + 0x12);
  cVar4 = (**(code **)(*piVar7 + 4))();
  if (((cVar4 == '\0') && (*(char *)(param_1 + 0x89) == '\0')) &&
     (puVar10 = (undefined *)FUN_1112e580(0xe), 0 < (int)puVar10)) {
    local_110 = puVar10;
    iVar5 = FUN_1112e530(0xe);
    local_f0 = (undefined *)(uint)*(byte *)(iVar5 + 0x12);
    puVar9 = puVar10;
  }
  iVar5 = local_124;
  if ((local_124 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
    puVar9 = *(undefined **)(local_124 + 0x1c);
    local_f0 = (undefined *)0x0;
    local_110 = puVar9;
  }
  if ((local_134 != (int *)0x0) &&
     (puVar10 = *(undefined **)(*local_134 + 0xc), puVar10 != (undefined *)0x0)) {
    local_f0 = (undefined *)0x0;
    puVar9 = puVar10;
    local_110 = puVar10;
  }
  if (local_f9 != '\0') {
    puVar9 = *(undefined **)(local_124 + 0x1c);
    local_f0 = (undefined *)0x0;
    local_110 = puVar9;
  }
  if ((int)puVar9 < 1) {
LAB_1121206d:
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
    iVar6 = FUN_1053a9e0(0,"CEquipInfo",0);
    if (puVar9 == (undefined *)0xffffffff) {
      iVar6 = 0;
      local_108 = 0;
    }
    else if (*(int *)(iVar6 + 0x28) == 0) {
      iVar6 = 0;
      local_108 = 0;
    }
    else {
      iVar8 = (int)puVar9 - *(int *)(iVar6 + 0x30);
      if ((iVar8 < 0) || (*(int *)(iVar6 + 0x24) <= iVar8)) {
LAB_11211f28:
        iVar6 = 0;
      }
      else {
        iVar13 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar8 / *(int *)(iVar6 + 0x28)) * 4);
        if (iVar13 == 0) goto LAB_11211f28;
        iVar6 = *(int *)(iVar13 + (iVar8 % *(int *)(iVar6 + 0x28)) * 4);
      }
      local_108 = iVar6;
      if (iVar6 == 0) goto LAB_1121206d;
      iVar8 = iVar6 + 0x6c;
      if ((char)local_120 == '\0') {
        iVar8 = iVar6 + 0x84;
      }
      local_ac = local_bc;
      local_a8 = local_ac;
      FUN_100b62c0(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x10));
      local_118 = (undefined *)0x3;
      puVar11 = (undefined1 *)FUN_1053b770(&local_118);
      if (local_bc != puVar11) {
        FUN_100d83d0(local_a8,local_ac);
      }
      FUN_100d83d0(local_a8,local_ac);
      FUN_11672970();
      FUN_11672840(local_110,local_f0,&local_10,&local_c);
      if ((local_a8 != local_bc) && (local_a8 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_a8);
      }
    }
    if ((iVar6 == 0) || (local_118 = *(undefined **)(iVar6 + 0x27c), local_118 == (undefined *)0x0))
    goto LAB_1121206d;
    local_f0 = local_118;
    if (local_12c == local_128) {
      FUN_11213220(local_12c,&local_108,&local_101,1,1);
    }
    else {
      *local_12c = iVar6;
      local_12c = local_12c + 1;
    }
    FUN_10467580(local_114,&local_f0);
    if (((int)local_118 < 1) || (local_118 != local_138)) goto LAB_1121206d;
  }
  local_118 = (undefined *)0x3;
  puVar12 = (undefined4 *)FUN_10ae6f90(&local_118);
  *puVar12 = local_2c;
  if (local_28 != puVar12 + 1) {
    FUN_100d83d0(local_14,local_18);
  }
  puVar12[7] = local_10;
  puVar12[8] = local_c;
  local_2c = 3;
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_118 = (undefined *)0x4;
  FUN_1053b770(&local_118);
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  puVar9 = (undefined *)FUN_1112e580(4);
  local_f0 = puVar9;
  iVar6 = FUN_1112e530(4);
  local_110 = (undefined *)(uint)*(byte *)(iVar6 + 0x12);
  cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 4))();
  if (((cVar4 == '\0') && (*(char *)(param_1 + 0x89) == '\0')) &&
     (local_118 = (undefined *)FUN_1112e580(0xf), 0 < (int)local_118)) {
    iVar6 = FUN_1112e530(0xf);
    local_f0 = local_118;
    local_110 = (undefined *)(uint)*(byte *)(iVar6 + 0x12);
    puVar9 = local_118;
  }
  if ((iVar5 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
    puVar9 = *(undefined **)(iVar5 + 0x20);
    local_110 = (undefined *)0x0;
    local_f0 = puVar9;
  }
  puVar10 = local_110;
  if (local_134 != (int *)0x0) {
    puVar10 = *(undefined **)(*local_134 + 0x10);
    if (puVar10 != (undefined *)0x0) {
      local_110 = (undefined *)0x0;
      puVar9 = puVar10;
      local_f0 = puVar10;
    }
    puVar10 = local_110;
    if (local_f9 != '\0') {
      puVar9 = *(undefined **)(iVar5 + 0x20);
      puVar10 = (undefined *)0x0;
      local_f0 = puVar9;
    }
  }
  if ((int)puVar9 < 1) {
LAB_11212399:
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
    iVar5 = FUN_1053a9e0(0,"CEquipInfo",0);
    if (puVar9 == (undefined *)0xffffffff) {
      iVar5 = 0;
      local_108 = 0;
    }
    else if (*(int *)(iVar5 + 0x28) == 0) {
      iVar5 = 0;
      local_108 = 0;
    }
    else {
      iVar6 = (int)puVar9 - *(int *)(iVar5 + 0x30);
      if ((iVar6 < 0) || (*(int *)(iVar5 + 0x24) <= iVar6)) {
LAB_11212265:
        iVar5 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
        if (iVar8 == 0) goto LAB_11212265;
        iVar5 = *(int *)(iVar8 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4);
      }
      local_108 = iVar5;
      if (iVar5 == 0) goto LAB_11212399;
      iVar6 = iVar5 + 0x6c;
      if ((char)local_120 == '\0') {
        iVar6 = iVar5 + 0x84;
      }
      local_dc = local_ec;
      local_d8 = local_dc;
      FUN_100b62c0(*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x10));
      local_118 = (undefined *)0x4;
      puVar11 = (undefined1 *)FUN_1053b770(&local_118);
      if (local_ec != puVar11) {
        FUN_100d83d0(local_d8,local_dc);
      }
      FUN_100d83d0(local_d8,local_dc);
      FUN_11672970();
      FUN_11672840(local_f0,puVar10,&local_10,&local_c);
      if ((local_d8 != local_ec) && (local_d8 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_d8);
      }
    }
    if ((iVar5 == 0) || (puVar9 = *(undefined **)(iVar5 + 0x27c), puVar9 == (undefined *)0x0))
    goto LAB_11212399;
    local_f0 = puVar9;
    if (local_12c == local_128) {
      FUN_11213220(local_12c,&local_108,&local_101,1,1);
    }
    else {
      *local_12c = iVar5;
      local_12c = local_12c + 1;
    }
    FUN_10467580(local_11c,&local_f0);
    if (((int)puVar9 < 1) || (puVar9 != local_138)) goto LAB_11212399;
  }
  local_118 = (undefined *)0x4;
  puVar12 = (undefined4 *)FUN_10ae6f90(&local_118);
  *puVar12 = local_2c;
  if (local_28 != puVar12 + 1) {
    FUN_100d83d0(local_14,local_18);
  }
  puVar12[7] = local_10;
  puVar12[8] = local_c;
  local_2c = 5;
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_118 = (undefined *)0x5;
  FUN_1053b770(&local_118);
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  if (local_100 != 0) {
    if ((char)local_120 == '\0') {
      iVar5 = local_100 + 0x8c;
    }
    else {
      iVar5 = local_100 + 0x44;
    }
    local_94 = local_a4;
    local_90 = local_94;
    FUN_100b62c0(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
    local_118 = (undefined *)0x5;
    puVar11 = (undefined1 *)FUN_1053b770(&local_118);
    if (local_a4 != puVar11) {
      FUN_100d83d0(local_90,local_94);
    }
    FUN_100d83d0(local_90,local_94);
    if ((local_90 != local_a4) && (local_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_90);
    }
  }
  iVar5 = FUN_1112e580(5);
  iVar8 = FUN_1112e530(5);
  iVar6 = local_124;
  local_100 = (uint)*(byte *)(iVar8 + 0x12);
  if ((local_124 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
    iVar5 = *(int *)(local_124 + 0x24);
    local_100 = 0;
  }
  cVar4 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 4))();
  if (((cVar4 == '\0') && (*(char *)(param_1 + 0x89) == '\0')) &&
     (iVar8 = FUN_1112e580(0x10), 0 < iVar8)) {
    iVar5 = FUN_1112e530(0x10);
    local_100 = (uint)*(byte *)(iVar5 + 0x12);
    iVar5 = iVar8;
  }
  if ((iVar6 != 0) && (*(char *)(param_1 + 0x89) == '\0')) {
    iVar5 = *(int *)(iVar6 + 0x24);
    local_100 = 0;
  }
  if (local_134 != (int *)0x0) {
    if (*(int *)(*local_134 + 0x14) != 0) {
      local_100 = 0;
      iVar5 = *(int *)(*local_134 + 0x14);
    }
    if (local_f9 != '\0') {
      iVar5 = *(int *)(iVar6 + 0x24);
      local_100 = 0;
    }
  }
  if (0 < iVar5) {
    iVar6 = FUN_1053a9e0(0,"CEquipInfo",0);
    if (iVar5 == -1) {
      iVar6 = 0;
      local_108 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + 0x28);
      if (iVar8 == 0) {
        iVar6 = 0;
        local_108 = 0;
      }
      else {
        iVar13 = iVar5 - *(int *)(iVar6 + 0x30);
        if ((iVar13 < 0) || (*(int *)(iVar6 + 0x24) <= iVar13)) {
LAB_11212624:
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar13 / iVar8) * 4);
          if (iVar6 == 0) goto LAB_11212624;
          iVar6 = *(int *)(iVar6 + (iVar13 % iVar8) * 4);
        }
        local_108 = iVar6;
        if (iVar6 == 0) goto LAB_11212768;
        iVar8 = iVar6 + 0x6c;
        if ((char)local_120 == '\0') {
          iVar8 = iVar6 + 0x84;
        }
        local_c4 = local_d4;
        local_c0 = local_c4;
        FUN_100b62c0(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x10));
        local_118 = (undefined *)0x5;
        puVar11 = (undefined1 *)FUN_1053b770(&local_118);
        if (local_d4 != puVar11) {
          FUN_100d83d0(local_c0,local_c4);
        }
        FUN_100d83d0(local_c0,local_c4);
        FUN_11672970();
        FUN_11672840(iVar5,local_100,&local_10,&local_c);
        *(bool *)(param_1 + 0x8d) = *(int *)(iVar6 + 0x138) == 1;
        if ((local_c0 != local_d4) && (local_c0 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c0);
        }
      }
    }
    if ((iVar6 != 0) && (puVar9 = *(undefined **)(iVar6 + 0x27c), puVar9 != (undefined *)0x0)) {
      local_f0 = puVar9;
      if (local_12c == local_128) {
        FUN_11213220(local_12c,&local_108,&local_101,1,1);
      }
      else {
        *local_12c = iVar6;
        local_12c = local_12c + 1;
      }
      FUN_10467580(local_11c,&local_f0);
      if ((0 < (int)puVar9) && (puVar9 == local_138)) goto LAB_1121276f;
    }
  }
LAB_11212768:
  *(undefined1 *)(param_1 + 0x88) = 0;
LAB_1121276f:
  local_118 = (undefined *)0x5;
  puVar12 = (undefined4 *)FUN_10ae6f90(&local_118);
  *puVar12 = local_2c;
  if (local_28 != puVar12 + 1) {
    FUN_100d83d0(local_14,local_18);
  }
  puVar12[7] = local_10;
  puVar12[8] = local_c;
  uVar3 = (**(code **)(*(int *)(local_f8 + 0x25ddc) + 0x14))(param_1 + 0x7c);
  CEquipSuitEffectInfo__GetManagers_11212bc0(&local_130,local_120,&local_150,uVar3);
  if (((undefined4 *)local_14 != local_28) && ((undefined4 *)local_14 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(local_14);
  }
  if (local_130 != 0) {
    FUN_10c3d5d0(local_130);
  }
  iVar5 = iStack_14c;
  if (local_140 != 0) {
    while (iVar5 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar5 + 0xc));
      iVar6 = *(int *)(iVar5 + 8);
      FUN_10c3d5d0(iVar5);
      iVar5 = iVar6;
    }
  }
  FUN_11a89daa();
  return;
}



