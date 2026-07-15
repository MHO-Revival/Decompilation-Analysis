// ===== class CLevelNARegionInfo  (3 recovered methods) =====

/* --- CLevelNARegionInfo::GetManagers @ 11646340 --- */
// [RE-AUTO c3]
// id: CLevelNARegionInfo::GetManagers
// strings:
//   ""CLevelNARegionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelNARegionInfo::GetManagers
   strings:
     ""CLevelNARegionInfo::GetManagers"" */

undefined4 * CLevelNARegionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d375c0;
  if (param_3 == 0) {
    if ((DAT_122e0690 & 1) == 0) {
      DAT_122e0690 = DAT_122e0690 | 1;
      FUN_102500e0("CLevelNARegionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6980);
    }
    if ((undefined4 *)*DAT_122e0674 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122e0674;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122e06d4 & 1) == 0) {
      DAT_122e06d4 = DAT_122e06d4 | 1;
      FUN_11646cd0();
      FUN_11a8911f(&LAB_11ca6920);
    }
    puVar1 = &DAT_122e069c;
  }
  return puVar1;
}



/* --- CLevelNARegionInfo::GetManagers_116480a0 @ 116480a0 --- */
// [RE-AUTO c3]
// id: CLevelNARegionInfo::GetManagers
// strings:
//   ""CLevelNARegionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelNARegionInfo::GetManagers
   strings:
     ""CLevelNARegionInfo::GetManagers"" */

undefined4 CLevelNARegionInfo__GetManagers_116480a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e0690 & 1) == 0) {
      DAT_122e0690 = DAT_122e0690 | 1;
      FUN_102500e0("CLevelNARegionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6980);
    }
    return *DAT_122e0674;
  }
  return 0;
}



/* --- CLevelNARegionInfo::GetManagers_118c9c00 @ 118c9c00 --- */
// [RE-AUTO c3]
// id: CLevelNARegionInfo::GetManagers
// strings:
//   ""CLevelNARegionInfo::GetManagers""
//   ""CLevelNARegionInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelNARegionInfo::GetManagers
   strings:
     ""CLevelNARegionInfo::GetManagers""
     ""CLevelNARegionInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CLevelNARegionInfo__GetManagers_118c9c00(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_20 [3];
  int local_14;
  undefined **local_10;
  undefined **local_c;
  uint local_8;
  
  local_8 = 0;
  iVar9 = 0;
  while( true ) {
    local_c = &PTR_FUN_11d375c0;
    if ((DAT_122e0690 & 1) == 0) {
      DAT_122e0690 = DAT_122e0690 | 1;
      FUN_102500e0("CLevelNARegionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6980);
    }
    piVar5 = (int *)*DAT_122e0674;
    if ((piVar5 == (int *)0x0) &&
       (piVar5 = (int *)FUN_11679e10(&local_c,"CLevelNARegionInfo",0), piVar5 == (int *)0x0)) {
      if ((DAT_122e06d4 & 1) == 0) {
        DAT_122e06a0 = 0;
        DAT_122e06b0 = 0;
        DAT_122e06b4 = 0;
        _DAT_122e06b8 = 0;
        uRam122e06bc = 0;
        DAT_122e06d4 = DAT_122e06d4 | 1;
        DAT_122e069c = &PTR_FUN_11d375fc;
        _DAT_122e06c0 = _DAT_11de9ae0;
        uRam122e06c4 = _UNK_11de9ae4;
        uRam122e06c8 = _UNK_11de9ae8;
        uRam122e06cc = _UNK_11de9aec;
        DAT_122e06d0 = 1;
        DAT_122e06a4 = piVar5;
        _DAT_122e06a8 = piVar5;
        _DAT_122e06ac = piVar5;
        FUN_11a8911f(&LAB_11cafd60);
      }
      piVar5 = (int *)&DAT_122e069c;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    if (iVar6 <= iVar9) break;
    local_c = &PTR_FUN_11d375c0;
    if ((DAT_122e0690 & 1) == 0) {
      DAT_122e0690 = DAT_122e0690 | 1;
      FUN_102500e0("CLevelNARegionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca6980);
    }
    piVar5 = (int *)*DAT_122e0674;
    if ((piVar5 == (int *)0x0) &&
       (piVar5 = (int *)FUN_11679e10(&local_c,"CLevelNARegionInfo",0), piVar5 == (int *)0x0)) {
      if ((DAT_122e06d4 & 1) == 0) {
        DAT_122e06a0 = 0;
        DAT_122e06b0 = 0;
        DAT_122e06b4 = 0;
        _DAT_122e06b8 = 0;
        uRam122e06bc = 0;
        DAT_122e06d4 = DAT_122e06d4 | 1;
        DAT_122e069c = &PTR_FUN_11d375fc;
        _DAT_122e06c0 = _DAT_11de9ae0;
        uRam122e06c4 = _UNK_11de9ae4;
        uRam122e06c8 = _UNK_11de9ae8;
        uRam122e06cc = _UNK_11de9aec;
        DAT_122e06d0 = 1;
        DAT_122e06a4 = piVar5;
        _DAT_122e06a8 = piVar5;
        _DAT_122e06ac = piVar5;
        FUN_11a8911f(&LAB_11cafd60);
      }
      piVar5 = (int *)&DAT_122e069c;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((iVar9 < 0) || (piVar5[6] - piVar5[5] >> 2 <= iVar9)) {
      local_14 = 0;
    }
    else {
      local_14 = *(int *)(piVar5[5] + iVar9 * 4);
    }
    iVar6 = *(int *)(local_14 + 0x14);
    local_10 = &PTR_FUN_11dc893c;
    if ((DAT_123bec98 & 1) == 0) {
      DAT_123bec98 = DAT_123bec98 | 1;
      FUN_102500e0("CMHLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70cf0);
    }
    puVar7 = (undefined4 *)*DAT_123bec7c;
    if ((puVar7 == (undefined4 *)0x0) &&
       (puVar7 = (undefined4 *)FUN_11679e10(&local_10,"CMHLevelInfo",0), puVar7 == (undefined4 *)0x0
       )) {
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
        DAT_123beca4 = puVar7;
        _DAT_123beca8 = puVar7;
        _DAT_123becac = puVar7;
        FUN_11a8911f(&LAB_11cafdc0);
      }
      puVar7 = &DAT_123bec9c;
    }
    iVar4 = local_14;
    local_10 = &PTR_FUN_11da54a8;
    if ((iVar6 != -1) &&
       ((((iVar6 != 0 || (puVar7[0xc] == 0)) && (iVar1 = puVar7[10], iVar1 != 0)) &&
        ((iVar6 = iVar6 - puVar7[0xc], -1 < iVar6 && (iVar6 < (int)puVar7[9])))))) {
      iVar2 = *(int *)(puVar7[8] + (iVar6 / iVar1) * 4);
      if ((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 != 0)) {
        iVar1 = *(int *)(local_14 + 0x18);
        iVar8 = iVar6 + 0xc0;
        iVar2 = *(int *)(iVar6 + 0xc4);
        while (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x10) < iVar1) {
            iVar2 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar8 = iVar2;
            iVar2 = *(int *)(iVar2 + 8);
          }
        }
        if ((iVar8 == iVar6 + 0xc0) || (local_8 = local_8 | 1, iVar1 < *(int *)(iVar8 + 0x10))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((local_8 & 1) != 0) {
          local_8 = local_8 & 0xfffffffe;
        }
        if (bVar3) {
          local_20[1] = 0;
          local_20[0] = iVar1;
          FUN_118ca2f0(local_20 + 2,iVar8,local_20);
          iVar8 = local_20[2];
        }
        *(int *)(iVar8 + 0x14) = iVar4;
      }
    }
    iVar9 = iVar9 + 1;
  }
  return;
}



