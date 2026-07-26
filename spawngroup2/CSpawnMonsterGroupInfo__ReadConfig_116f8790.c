
/* [RE-R1]
   calls: memset
   strings:
     "u"Name""
     "u"MonsterID""
     "u"SpawnWeight""
     "u"LevelMin""
     "u"LevelMax"" */

void __thiscall CSpawnMonsterGroupInfo__ReadConfig(int param_1,int *param_2)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int ***pppiVar6;
  undefined *puVar7;
  undefined1 local_438 [8];
  int local_430;
  int *local_42c;
  undefined8 local_428;
  int local_420 [2];
  int *local_418;
  int local_414;
  int **local_410;
  int **local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_430 = param_1;
  if ((DAT_1238eab8 & 1) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_1238eab8 & 2) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 2;
    iVar3 = FUN_100e1cb0(DAT_1238eab4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eabc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238eab4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1238eabc);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_1238eab8 & 4) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 4;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_1238eab8 & 8) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 8;
    iVar3 = FUN_100e1cb0(DAT_1238eacc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ead0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238eacc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x14,&DAT_1238ead0);
  }
  FUN_117b9280();
  CLevelModeFilter__ParseXML(param_2);
  if ((DAT_1238eab8 & 0x10) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 0x10;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_1238eab8 & 0x20) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_1238eae0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eae4);
  if (cVar2 == '\0') {
LAB_116f8d90:
    local_410 = (int **)local_420;
    local_420[0]._0_1_ = 0;
    local_40c = local_410;
    if ((DAT_1238eab8 & 0x40) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x40;
      FUN_100f67b0(L"MonsterID");
    }
    if (-1 < (char)DAT_1238eab8) {
      DAT_1238eab8 = DAT_1238eab8 | 0x80;
      iVar3 = FUN_100e1cb0(DAT_1238eaf4);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eaf8);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      uVar4 = DAT_1238eaf4;
      goto LAB_116f8e28;
    }
    puVar7 = &DAT_1238eaf8;
LAB_116f8e59:
    (**(code **)(*param_2 + 0x24))(local_420,puVar7);
  }
  else {
    local_428 = CONCAT44(0xffffffff,(undefined4)local_428);
    cVar2 = (**(code **)(*param_2 + 0x2c))(&DAT_1238eae4,(int)&local_428 + 4);
    local_42c = (int *)(int **)0xffffffff;
    if (cVar2 != '\0') {
      local_42c = (int *)local_428._4_4_;
    }
    if ((int **)local_42c == (int **)0xffffffff) goto LAB_116f8d90;
    if ((DAT_1238eab8 & 0x100) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x100;
      FUN_100f67b0(L"SpawnWeight");
    }
    if ((DAT_1238eab8 & 0x200) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x200;
      iVar3 = FUN_100e1cb0(DAT_1238eb08);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb0c);
    if (cVar2 != '\0') {
      local_428 = local_428 & 0xffffffff;
      cVar2 = (**(code **)(*param_2 + 0x2c))(&DAT_1238eb0c,(int)&local_428 + 4);
      iVar3 = 0;
      if (cVar2 != '\0') {
        iVar3 = (int)local_428._4_4_;
      }
      if (0 < iVar3) {
        FUN_117b9240(local_438);
        local_428 = 0;
        local_410 = (int **)&local_410;
        local_40c = local_410;
        FUN_116f9310(&local_418);
        pppiVar6 = (int ***)local_410;
        if ((int ***)local_410 != &local_410) {
          do {
            pppiVar1 = (int ***)*pppiVar6;
            FUN_10c3d5d0(pppiVar6);
            pppiVar6 = pppiVar1;
          } while (pppiVar1 != &local_410);
        }
        local_410 = (int **)&local_410;
        local_40c = local_410;
        FUN_117b9290();
        local_418 = local_42c;
        local_414 = iVar3;
        if ((DAT_1238eab8 & 0x1000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x1000;
          FUN_100f67b0(L"LevelMin");
        }
        if ((DAT_1238eab8 & 0x2000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x2000;
          iVar3 = FUN_100e1cb0(DAT_1238eb30);
          FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
        }
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb34);
        if (cVar2 == '\0') {
          local_408 = cVar2;
          memset(local_407,0,0x3ff);
          iVar3 = FUN_100e1c50(DAT_1238eb30);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
          FUN_100ee330(&local_408,1);
          ppiVar5 = (int **)local_42c;
        }
        else {
          ppiVar5 = (int **)(**(code **)(*param_2 + 0x20))(&DAT_1238eb34);
        }
        if ((DAT_1238eab8 & 0x4000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x4000;
          FUN_100f67b0(L"LevelMax");
        }
        if ((DAT_1238eab8 & 0x8000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x8000;
          iVar3 = FUN_100e1cb0(DAT_1238eb44);
          FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
        }
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb48);
        if (cVar2 == '\0') {
          local_408 = cVar2;
          memset(local_407,0,0x3ff);
          iVar3 = FUN_100e1c50(DAT_1238eb44);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
          FUN_100ee330(&local_408,1);
          local_40c = (int **)local_42c;
        }
        else {
          local_40c = (int **)(**(code **)(*param_2 + 0x20))(&DAT_1238eb48);
        }
        local_410 = ppiVar5;
        FUN_11645210(&local_418);
        goto LAB_116f8e84;
      }
    }
    local_410 = (int **)local_420;
    local_420[0]._0_1_ = 0;
    local_40c = local_410;
    if ((DAT_1238eab8 & 0x400) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x400;
      FUN_100f67b0(L"SpawnWeight");
    }
    if ((DAT_1238eab8 & 0x800) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x800;
      iVar3 = FUN_100e1cb0(DAT_1238eb1c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb20);
    if (cVar2 != '\0') {
      puVar7 = &DAT_1238eb20;
      goto LAB_116f8e59;
    }
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    uVar4 = DAT_1238eb1c;
LAB_116f8e28:
    iVar3 = FUN_100e1c50(uVar4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  if ((local_40c != (int **)local_420) && (local_40c != (int **)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
LAB_116f8e84:
  FUN_117b9290();
  FUN_11a89daa();
  return;
}

