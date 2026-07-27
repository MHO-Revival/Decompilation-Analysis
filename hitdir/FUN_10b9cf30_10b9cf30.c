
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""IgnoreLinked""
     ""EveryHit""
     ""DisableMovement""
     ""EnableModalMode""
     ""DisableModalMode""
     ""ShowBoundaries""
     ""UpdateAlways""
     ""RaySelection"" */

void FUN_10b9cf30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_100 [4];
  char *local_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined *local_ec;
  undefined1 local_e8 [4];
  char *local_e4;
  undefined4 local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined *local_d4;
  undefined1 local_d0 [4];
  char *local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  undefined *local_bc;
  undefined1 local_b8 [4];
  char *local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  undefined1 local_a0 [4];
  char *local_9c;
  undefined4 local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined1 local_88 [4];
  char *local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined1 local_70 [4];
  char *local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined1 local_58 [4];
  char *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  undefined1 *local_34;
  char *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  uint local_24;
  undefined1 *local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  undefined1 *puStack_8;
  
  if ((DAT_12028438 & 1) == 0) {
    DAT_12028438 = DAT_12028438 | 1;
    local_9c = "Enable";
    local_98 = 0;
    local_94 = &DAT_11d9d32b;
    local_90 = 0;
    local_8c = &DAT_11df7709;
    _DAT_12028328 = &DAT_11df7709;
    local_88[0] = 0;
    _DAT_12028318 = "Enable";
    _DAT_1202831c = 0;
    _DAT_12028320 = &DAT_11d9d32b;
    _DAT_12028324 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1202832c,local_88);
    (**(code **)(((uint)local_8c & 0xfffffffc) + 4))(local_88);
    local_cc = "Disable";
    local_c8 = 0;
    local_bc = &DAT_11df7709;
    _DAT_12028340 = &DAT_11df7709;
    local_c4 = &DAT_11d9d32b;
    local_c0 = 0;
    local_b8[0] = 0;
    _DAT_12028330 = "Disable";
    _DAT_12028334 = 0;
    _DAT_12028338 = &DAT_11d9d32b;
    _DAT_1202833c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12028344,local_b8);
    (**(code **)(((uint)local_bc & 0xfffffffc) + 4))(local_b8);
    local_54 = "IgnoreLinked";
    local_50 = 0;
    local_44 = &DAT_11df7709;
    _DAT_12028358 = &DAT_11df7709;
    local_4c = &DAT_11d9d32b;
    local_48 = 0;
    local_40[0] = 1;
    _DAT_12028348 = "IgnoreLinked";
    _DAT_1202834c = 0;
    _DAT_12028350 = &DAT_11d9d32b;
    _DAT_12028354 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1202835c,local_40);
    (**(code **)(((uint)local_44 & 0xfffffffc) + 4))(local_40);
    local_fc = "EveryHit";
    local_f8 = 0;
    local_f4 = &DAT_11d9d32b;
    local_ec = &DAT_11df7709;
    _DAT_12028370 = &DAT_11df7709;
    local_f0 = 0;
    local_e8[0] = 0;
    _DAT_12028360 = "EveryHit";
    _DAT_12028364 = 0;
    _DAT_12028368 = &DAT_11d9d32b;
    _DAT_1202836c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12028374,local_e8);
    (**(code **)(((uint)local_ec & 0xfffffffc) + 4))(local_e8);
    local_6c = "DisableMovement";
    local_68 = 0;
    local_5c = &DAT_11df7709;
    _DAT_12028388 = &DAT_11df7709;
    local_64 = &DAT_11d9d32b;
    local_60 = 0;
    local_58[0] = 1;
    _DAT_12028378 = "DisableMovement";
    _DAT_1202837c = 0;
    _DAT_12028380 = &DAT_11d9d32b;
    _DAT_12028384 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1202838c,local_58);
    (**(code **)(((uint)local_5c & 0xfffffffc) + 4))(local_58);
    local_84 = "EnableModalMode";
    local_80 = 0;
    local_74 = &DAT_11df7709;
    _DAT_120283a0 = &DAT_11df7709;
    local_7c = &DAT_11d9d32b;
    local_78 = 0;
    local_70[0] = 0;
    _DAT_12028390 = "EnableModalMode";
    _DAT_12028394 = 0;
    _DAT_12028398 = &DAT_11d9d32b;
    _DAT_1202839c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120283a4,local_70);
    (**(code **)(((uint)local_74 & 0xfffffffc) + 4))(local_70);
    local_b4 = "DisableModalMode";
    local_b0 = 0;
    local_ac = &DAT_11d9d32b;
    local_a8 = 0;
    local_a0[0] = 0;
    _DAT_120283a8 = "DisableModalMode";
    local_a4 = &DAT_11df7709;
    _DAT_120283b8 = &DAT_11df7709;
    _DAT_120283ac = 0;
    _DAT_120283b0 = &DAT_11d9d32b;
    _DAT_120283b4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120283bc,local_a0);
    (**(code **)(((uint)local_a4 & 0xfffffffc) + 4))(local_a0);
    local_e4 = "ShowBoundaries";
    local_e0 = 0;
    local_d4 = &DAT_11df7709;
    _DAT_120283d0 = &DAT_11df7709;
    local_dc = &DAT_11d9d32b;
    local_d8 = 0;
    local_d0[0] = 1;
    _DAT_120283c0 = "ShowBoundaries";
    _DAT_120283c4 = 0;
    _DAT_120283c8 = &DAT_11d9d32b;
    _DAT_120283cc = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120283d4,local_d0);
    (**(code **)(((uint)local_d4 & 0xfffffffc) + 4))(local_d0);
    _DAT_120283e8 = &DAT_11df7709;
    local_100[0] = 0;
    _DAT_120283d8 = "UpdateAlways";
    _DAT_120283dc = 0;
    _DAT_120283e0 = &DAT_11d9d32b;
    _DAT_120283e4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120283ec,local_100);
    (*(code *)PTR_FUN_11df770c)(local_100);
    local_1c = "RaySelection";
    local_18 = "Ray Selection";
    local_14 = &DAT_11d9d32b;
    puStack_10 = &DAT_11d9d32b;
    piVar1 = (int *)CInfoRecord__GetModelString(&DAT_11ccb98c);
    uStack_c = 0;
    if (*(int *)(*piVar1 + -0xc) < 0) {
      puStack_8 = &DAT_1201fc98;
    }
    else {
      puStack_8 = (undefined1 *)*piVar1;
      FUN_10c3dab0(puStack_8 + -0xc);
    }
    piVar1 = (int *)(local_3c + -0xc);
    uStack_c = uStack_c & 3 | 0x11df76e9;
    if (-1 < *piVar1) {
      iVar2 = FUN_10c3dad0(piVar1);
      if (iVar2 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_3c + -4));
        FUN_10c3d900(piVar1);
      }
    }
    _DAT_120283f0 = local_1c;
    _DAT_120283f4 = local_18;
    _DAT_120283f8 = local_14;
    _DAT_120283fc = puStack_10;
    _DAT_12028400 = uStack_c;
    (**(code **)((uStack_c & 0xfffffffc) + 0xc))(&DAT_12028404,&puStack_8);
    (**(code **)((uStack_c & 0xfffffffc) + 4))(&puStack_8);
    local_34 = &DAT_11cc1d98;
    local_30 = "Modal mode key";
    local_2c = &DAT_11d9d32b;
    local_28 = &DAT_11d9d32b;
    piVar1 = (int *)CInfoRecord__GetModelString(&DAT_11ccb984);
    local_24 = 0;
    if (*(int *)(*piVar1 + -0xc) < 0) {
      local_20 = &DAT_1201fc98;
    }
    else {
      local_20 = (undefined1 *)*piVar1;
      FUN_10c3dab0(local_20 + -0xc);
    }
    piVar1 = (int *)(local_38 + -0xc);
    local_24 = local_24 & 3 | 0x11df76e9;
    if (-1 < *piVar1) {
      iVar2 = FUN_10c3dad0(piVar1);
      if (iVar2 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_38 + -4));
        FUN_10c3d900(piVar1);
      }
    }
    _DAT_12028408 = local_34;
    _DAT_1202840c = local_30;
    _DAT_12028410 = local_2c;
    _DAT_12028414 = local_28;
    DAT_12028418 = local_24;
    (**(code **)((local_24 & 0xfffffffc) + 0xc))(&DAT_1202841c,&local_20);
    (**(code **)((local_24 & 0xfffffffc) + 4))(&local_20);
    DAT_12028430 = &DAT_11df7728;
    _DAT_12028420 = 0;
    uRam12028424 = 0;
    uRam12028428 = 0;
    uRam1202842c = 0;
    FUN_11a8911f(&LAB_11c84f90);
  }
  if ((DAT_12028438 & 2) == 0) {
    DAT_12028438 = DAT_12028438 | 2;
    _DAT_12028440 = "EntityID";
    uRam12028444 = 0;
    _DAT_12028448 = &DAT_11d9d32b;
    uRam1202844c = 3;
    _DAT_12028450 = "LastEntityID";
    uRam12028454 = 0;
    puRam12028458 = &DAT_11d9d32b;
    uRam1202845c = 3;
    _DAT_12028460 = "OnEnter";
    uRam12028464 = 0;
    puRam12028468 = &DAT_11d9d32b;
    uRam1202846c = 6;
    _DAT_12028470 = "OnLeave";
    uRam12028474 = 0;
    puRam12028478 = &DAT_11d9d32b;
    uRam1202847c = 6;
    _DAT_12028480 = "OnPressed";
    uRam12028484 = 0;
    puRam12028488 = &DAT_11d9d32b;
    uRam1202848c = 1;
    _DAT_12028490 = "OnReleased";
    uRam12028494 = 0;
    puRam12028498 = &DAT_11d9d32b;
    uRam1202849c = 1;
    _DAT_120284a0 = &DAT_11cbc650;
    uRam120284a4 = 0;
    puRam120284a8 = &DAT_11d9d32b;
    uRam120284ac = 1;
    _DAT_120284b0 = &DAT_11dbab4c;
    uRam120284b4 = 0;
    puRam120284b8 = &DAT_11d9d32b;
    uRam120284bc = 1;
    _DAT_120284c0 = "HitPos";
    uRam120284c4 = 0;
    puRam120284c8 = &DAT_11d9d32b;
    uRam120284cc = 4;
    _DAT_120284d0 = "HitDir";
    uRam120284d4 = 0;
    puRam120284d8 = &DAT_11d9d32b;
    uRam120284dc = 4;
    _DAT_120284e0 = "SelectedEntityIDs";
    uRam120284e4 = 0;
    puRam120284e8 = &DAT_11d9d32b;
    uRam120284ec = 3;
    _DAT_120284f0 = 0;
    uRam120284f4 = 0;
    uRam120284f8 = 0;
    uRam120284fc = 0;
  }
  *param_1 = &DAT_12028318;
  param_1[1] = &DAT_12028440;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}

