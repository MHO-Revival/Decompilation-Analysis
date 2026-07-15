// ===== class CLevelResInfo  (3 recovered methods) =====

/* --- CLevelResInfo::GetManagers @ 10d38960 --- */
// [RE-AUTO c3]
// id: CLevelResInfo::GetManagers
// strings:
//   ""CLevelResInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelResInfo::GetManagers
   strings:
     ""CLevelResInfo::GetManagers"" */

undefined4 * CLevelResInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ce25f0;
  if (param_3 == 0) {
    if ((DAT_1202f8a4 & 1) == 0) {
      DAT_1202f8a4 = DAT_1202f8a4 | 1;
      FUN_102500e0("CLevelResInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88e80);
    }
    if ((undefined4 *)*DAT_1202f888 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1202f888;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1202f8e8 & 1) == 0) {
      DAT_1202f8e8 = DAT_1202f8e8 | 1;
      FUN_10d3b1b0();
      FUN_11a8911f(&LAB_11c88dc0);
    }
    puVar1 = &DAT_1202f8b0;
  }
  return puVar1;
}



/* --- CLevelResInfo::GetManagers_10d3f150 @ 10d3f150 --- */
// [RE-AUTO c3]
// id: CLevelResInfo::GetManagers
// strings:
//   ""CLevelResInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelResInfo::GetManagers
   strings:
     ""CLevelResInfo::GetManagers"" */

undefined4 CLevelResInfo__GetManagers_10d3f150(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1202f8a4 & 1) == 0) {
      DAT_1202f8a4 = DAT_1202f8a4 | 1;
      FUN_102500e0("CLevelResInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88e80);
    }
    return *DAT_1202f888;
  }
  return 0;
}



/* --- CLevelResInfo::GetManagers_116b2a30 @ 116b2a30 --- */
// [RE-AUTO c3]
// id: CLevelResInfo::GetManagers
// calls: CStaticLevelWeatherInfo::GetManagers, CSpawnMonsterGroupInfo::GetManagers
// strings:
//   ""CMHMapInfo""
//   ""CMHLevelModeInfo""
//   ""CStaticLevelWeatherInfo""
//   ""CLevelResInfo::GetManagers""
//   ""CLevelResInfo""
//   ""CHubEntryConfigInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CHubEntryConfigInfo""
//   ""CHubEntryRaidConfigInfo::GetManagers""
//   ""CHubEntryRaidConfigInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelResInfo::GetManagers
   calls: CStaticLevelWeatherInfo::GetManagers, CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CMHMapInfo""
     ""CMHLevelModeInfo""
     ""CStaticLevelWeatherInfo""
     ""CLevelResInfo::GetManagers""
     ""CLevelResInfo""
     ""CHubEntryConfigInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CHubEntryConfigInfo""
     ""CHubEntryRaidConfigInfo::GetManagers""
     ""CHubEntryRaidConfigInfo"" */

void __fastcall CLevelResInfo__GetManagers_116b2a30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = param_1[5];
  iVar1 = FUN_107d41b0(0,"CMHMapInfo",0);
  if ((iVar5 == -1) ||
     ((((iVar5 == 0 && (*(int *)(iVar1 + 0x30) != 0)) ||
       (iVar3 = *(int *)(iVar1 + 0x28), iVar3 == 0)) ||
      ((iVar5 = iVar5 - *(int *)(iVar1 + 0x30), iVar5 < 0 || (*(int *)(iVar1 + 0x24) <= iVar5))))))
  {
LAB_116b2a84:
    iVar5 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar5 / iVar3) * 4);
    if (iVar1 == 0) goto LAB_116b2a84;
    iVar5 = *(int *)(iVar1 + (iVar5 % iVar3) * 4);
  }
  iVar1 = param_1[8];
  param_1[6] = iVar5;
  iVar5 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  if ((((iVar1 == -1) || ((iVar1 == 0 && (*(int *)(iVar5 + 0x30) != 0)))) ||
      (iVar3 = *(int *)(iVar5 + 0x28), iVar3 == 0)) ||
     ((iVar1 = iVar1 - *(int *)(iVar5 + 0x30), iVar1 < 0 || (*(int *)(iVar5 + 0x24) <= iVar1)))) {
LAB_116b2ad2:
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar1 / iVar3) * 4);
    if (iVar5 == 0) goto LAB_116b2ad2;
    iVar5 = *(int *)(iVar5 + (iVar1 % iVar3) * 4);
  }
  param_1[9] = iVar5;
  if (iVar5 == 0) {
    return;
  }
  FUN_116ae5b0(param_1 + 0x93);
  iVar5 = param_1[0x8e];
  iVar1 = CStaticLevelWeatherInfo__GetManagers(0,"CStaticLevelWeatherInfo",0);
  if (iVar5 == -1) {
    return;
  }
  if ((iVar5 == 0) && (*(int *)(iVar1 + 0x30) != 0)) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x28);
  if (iVar3 == 0) {
    return;
  }
  iVar5 = iVar5 - *(int *)(iVar1 + 0x30);
  if (iVar5 < 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x24) <= iVar5) {
    return;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar5 / iVar3) * 4);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + (iVar5 % iVar3) * 4) == 0) {
    return;
  }
  piVar2 = param_1 + 0x4f;
  local_8 = (undefined **)0x4;
  param_1[0x62] = *(int *)(param_1[9] + 0x108);
  do {
    piVar2[-1] = *(int *)((int)piVar2 + param_1[9] + (-0x84 - (int)param_1));
    *piVar2 = *(int *)((int)piVar2 + param_1[9] + (-0x80 - (int)param_1));
    piVar2[1] = *(int *)((int)piVar2 + param_1[9] + (-0x7c - (int)param_1));
    piVar2[2] = *(int *)((int)piVar2 + param_1[9] + (-0x78 - (int)param_1));
    piVar2[3] = *(int *)((int)piVar2 + param_1[9] + (-0x74 - (int)param_1));
    piVar2 = piVar2 + 5;
    local_8 = (undefined **)((int)local_8 + -1);
  } while (local_8 != (undefined **)0x0);
  if (param_1[0x8b] != 0) {
    FUN_116ae2e0();
  }
  iVar5 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11ce25f0;
    if ((DAT_1202f8a4 & 1) == 0) {
      DAT_1202f8a4 = DAT_1202f8a4 | 1;
      FUN_102500e0("CLevelResInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88e80);
    }
    piVar2 = (int *)*DAT_1202f888;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_8,"CLevelResInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_1202f8e8 & 1) == 0) {
        DAT_1202f8b4 = 0;
        DAT_1202f8c4 = 0;
        DAT_1202f8c8 = 0;
        _DAT_1202f8cc = 0;
        uRam1202f8d0 = 0;
        DAT_1202f8e8 = DAT_1202f8e8 | 1;
        DAT_1202f8b0 = &PTR_FUN_11ce2624;
        _DAT_1202f8d4 = _DAT_11de9ae0;
        uRam1202f8d8 = _UNK_11de9ae4;
        uRam1202f8dc = _UNK_11de9ae8;
        uRam1202f8e0 = _UNK_11de9aec;
        DAT_1202f8e4 = 1;
        DAT_1202f8b8 = piVar2;
        _DAT_1202f8bc = piVar2;
        _DAT_1202f8c0 = piVar2;
        FUN_11a8911f(&LAB_11ca7530);
      }
      piVar2 = (int *)&DAT_1202f8b0;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar1 = (**(code **)(*piVar2 + 0x28))();
    if (iVar1 <= iVar5) break;
    local_8 = &PTR_FUN_11ce25f0;
    if ((DAT_1202f8a4 & 1) == 0) {
      DAT_1202f8a4 = DAT_1202f8a4 | 1;
      FUN_102500e0("CLevelResInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88e80);
    }
    piVar2 = (int *)*DAT_1202f888;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_8,"CLevelResInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_1202f8e8 & 1) == 0) {
        DAT_1202f8b4 = 0;
        DAT_1202f8c4 = 0;
        DAT_1202f8c8 = 0;
        _DAT_1202f8cc = 0;
        uRam1202f8d0 = 0;
        DAT_1202f8e8 = DAT_1202f8e8 | 1;
        DAT_1202f8b0 = &PTR_FUN_11ce2624;
        _DAT_1202f8d4 = _DAT_11de9ae0;
        uRam1202f8d8 = _UNK_11de9ae4;
        uRam1202f8dc = _UNK_11de9ae8;
        uRam1202f8e0 = _UNK_11de9aec;
        DAT_1202f8e4 = 1;
        DAT_1202f8b8 = piVar2;
        _DAT_1202f8bc = piVar2;
        _DAT_1202f8c0 = piVar2;
        FUN_11a8911f(&LAB_11ca7530);
      }
      piVar2 = (int *)&DAT_1202f8b0;
    }
    if (((((-1 < iVar5) && (iVar5 < piVar2[6] - piVar2[5] >> 2)) &&
         (iVar1 = *(int *)(piVar2[5] + iVar5 * 4), iVar1 != 0)) &&
        (((iVar3 = *(int *)(iVar1 + 0x28), -1 < iVar3 && (iVar3 < 0x14)) &&
         ((*(int *)(iVar1 + 0x14) == param_1[5] &&
          ((param_1[5] != 0 && (*(int *)(iVar1 + 0x18) <= param_1[0xe])))))))) &&
       ((param_1[0xe] <= *(int *)(iVar1 + 0x1c) &&
        ((*(int *)(iVar1 + 0x20) <= param_1[0xc] && (param_1[0xc] <= *(int *)(iVar1 + 0x24))))))) {
      if (*(int *)(iVar1 + 0x2c) == 1) {
        piVar2 = param_1 + 99;
      }
      else {
        if (*(int *)(iVar1 + 0x2c) != 2) goto LAB_116b2e06;
        piVar2 = param_1 + 0x77;
      }
      if (piVar2[iVar3] == 0) {
        piVar2[iVar3] = iVar1;
      }
    }
LAB_116b2e06:
    iVar5 = iVar5 + 1;
  }
  local_8 = &PTR_FUN_11dc85a8;
  if ((DAT_123bed94 & 1) == 0) {
    DAT_123bed94 = DAT_123bed94 | 1;
    _DAT_123bedc8 = &DAT_123bedb8;
    DAT_123bedcc = &DAT_123bedb8;
    DAT_123bedb8 = 0;
    FUN_100d9260("CHubEntryConfigInfo::GetManagers","");
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    DAT_123bedb4 = (int *)FUN_100dfd90(DAT_123bedcc);
    if (DAT_123bedb4 == (int *)0x0) {
      DAT_123bedb4 = (int *)FUN_100dde50(4);
      *DAT_123bedb4 = 0;
      FUN_100dfdc0(DAT_123bedcc,DAT_123bedb4);
    }
    FUN_11a8911f(&LAB_11c70520);
  }
  piVar2 = (int *)*DAT_123bedb4;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CHubEntryConfigInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123beba4 & 1) == 0) {
      DAT_123bebac = 0;
      DAT_123bebbc = 0;
      DAT_123bebc0 = 0;
      _DAT_123bebc4 = 0;
      DAT_123bebc8 = 0;
      DAT_123beba4 = DAT_123beba4 | 1;
      DAT_123bebb0 = 0;
      _DAT_123bebb4 = 0;
      _DAT_123bebb8 = 0;
      DAT_123beba8 = &PTR_FUN_11dc88c8;
      DAT_123bebcc = _DAT_11de9ae0;
      DAT_123bebd0 = _UNK_11de9ae4;
      uRam123bebd4 = _UNK_11de9ae8;
      DAT_123bebd8 = _UNK_11de9aec;
      DAT_123bebdc = 1;
      FUN_11a8911f(&LAB_11ca72f0);
    }
    piVar2 = (int *)&DAT_123beba8;
  }
  local_8 = &PTR_FUN_11da54a8;
  iVar5 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar5) {
    iVar1 = 0;
    do {
      local_8 = &PTR_FUN_11dc85a8;
      if ((DAT_123bed94 & 1) == 0) {
        DAT_123bed94 = DAT_123bed94 | 1;
        _DAT_123bedc8 = &DAT_123bedb8;
        DAT_123bedcc = &DAT_123bedb8;
        DAT_123bedb8 = 0;
        FUN_100d9260("CHubEntryConfigInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bedb4 = (int *)FUN_100dfd90(DAT_123bedcc);
        if (DAT_123bedb4 == (int *)0x0) {
          DAT_123bedb4 = (int *)FUN_100dde50(4);
          *DAT_123bedb4 = 0;
          FUN_100dfdc0(DAT_123bedcc,DAT_123bedb4);
        }
        FUN_11a8911f(&LAB_11c70520);
      }
      if (((*DAT_123bedb4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CHubEntryConfigInfo",0), iVar3 == 0)) &&
         ((DAT_123beba4 & 1) == 0)) {
        DAT_123bebac = 0;
        DAT_123bebbc = 0;
        DAT_123bebc0 = 0;
        _DAT_123bebc4 = 0;
        DAT_123bebc8 = 0;
        DAT_123beba4 = DAT_123beba4 | 1;
        DAT_123beba8 = &PTR_FUN_11dc88c8;
        DAT_123bebcc = _DAT_11de9ae0;
        DAT_123bebd0 = _UNK_11de9ae4;
        uRam123bebd4 = _UNK_11de9ae8;
        DAT_123bebd8 = _UNK_11de9aec;
        DAT_123bebdc = 1;
        DAT_123bebb0 = iVar3;
        _DAT_123bebb4 = iVar3;
        _DAT_123bebb8 = iVar3;
        FUN_11a8911f(&LAB_11ca72f0);
      }
      local_8 = &PTR_FUN_11da54a8;
      uVar4 = (**(code **)(*param_1 + 0x18))();
      piVar2 = (int *)FUN_107ca350(uVar4);
      if (piVar2 != (int *)0x0) goto LAB_116b330f;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  iVar5 = 0;
  local_8 = &PTR_FUN_11dc8588;
  if ((DAT_123bed6c & 1) == 0) {
    DAT_123bed6c = DAT_123bed6c | 1;
    _DAT_123bed08 = &DAT_123becf8;
    DAT_123bed0c = &DAT_123becf8;
    DAT_123becf8 = 0;
    FUN_100d9260("CHubEntryRaidConfigInfo::GetManagers","");
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    DAT_123becf4 = (undefined4 *)FUN_100dfd90(DAT_123bed0c);
    if (DAT_123becf4 == (undefined4 *)0x0) {
      DAT_123becf4 = (undefined4 *)FUN_100dde50(4);
      *DAT_123becf4 = 0;
      FUN_100dfdc0(DAT_123bed0c,DAT_123becf4);
    }
    FUN_11a8911f(&LAB_11c70610);
  }
  piVar2 = (int *)*DAT_123becf4;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CHubEntryRaidConfigInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123bea00 & 1) == 0) {
      DAT_123bea00 = DAT_123bea00 | 1;
      FUN_107d5670();
      FUN_11a8911f(&LAB_11ca7410);
    }
    piVar2 = &DAT_123bea04;
  }
  local_8 = &PTR_FUN_11da54a8;
  iVar1 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar1) {
    do {
      FUN_107d4050(0,"CHubEntryRaidConfigInfo",0);
      uVar4 = (**(code **)(*param_1 + 0x18))();
      piVar2 = (int *)FUN_107cad30(uVar4);
      if (piVar2 != (int *)0x0) goto LAB_116b330f;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar1 = 0;
  piVar2 = (int *)FUN_107d3d90(0,"CHubEntryConfigKingQuestInfo",0);
  iVar5 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar5) {
    do {
      FUN_107d3d90(0,"CHubEntryConfigKingQuestInfo",0);
      uVar4 = (**(code **)(*param_1 + 0x18))();
      piVar2 = (int *)FUN_107ca8b0(uVar4);
      if (piVar2 != (int *)0x0) goto LAB_116b330f;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  iVar1 = 0;
  piVar2 = (int *)FUN_107d3ef0(0,"CHubEntryConfigLetterQuestInfo",0);
  iVar5 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar5) {
    do {
      FUN_107d3ef0(0,"CHubEntryConfigLetterQuestInfo",0);
      uVar4 = (**(code **)(*param_1 + 0x18))();
      piVar2 = (int *)FUN_107caaf0(uVar4);
      if (piVar2 != (int *)0x0) goto LAB_116b330f;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
LAB_116b3320:
  if (param_1[0x9e] != 0) {
    CSpawnMonsterGroupInfo__GetManagers(0,"CSpawnMonsterGroupInfo",0);
  }
  FUN_117e74d0();
  return;
LAB_116b330f:
  param_1[0x9c] = *piVar2;
  param_1[0x9d] = piVar2[1];
  goto LAB_116b3320;
}



