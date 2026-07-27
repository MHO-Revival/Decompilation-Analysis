
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""ShooterId""
     ""TargetId""
     ""Weapon""
     ""WeaponId""
     ""ProjectileId""
     ""HitPos""
     ""HitDir""
     ""HitNormal""
     ""HitType"" */

void FUN_10e16260(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined1 local_38 [4];
  undefined *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  uint local_24;
  undefined1 *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  undefined1 *puStack_8;
  
  if ((DAT_12032128 & 1) == 0) {
    DAT_12032128 = DAT_12032128 | 1;
    local_4c = "Enable";
    local_48 = 0;
    local_44 = &DAT_11d9d32b;
    local_3c = &DAT_11df7709;
    _DAT_120320a8 = &DAT_11df7709;
    local_40 = 0;
    local_38[0] = 0;
    _DAT_12032098 = "Enable";
    _DAT_1203209c = 0;
    _DAT_120320a0 = &DAT_11d9d32b;
    _DAT_120320a4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120320ac,local_38);
    (**(code **)(((uint)local_3c & 0xfffffffc) + 4))(local_38);
    local_64 = "ShooterId";
    local_60 = 0;
    local_5c = &DAT_11d9d32b;
    local_54 = &DAT_11df76c9;
    _DAT_120320c0 = &DAT_11df76c9;
    local_58 = 0;
    local_50 = 0;
    _DAT_120320b0 = "ShooterId";
    _DAT_120320b4 = 0;
    _DAT_120320b8 = &DAT_11d9d32b;
    _DAT_120320bc = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_120320c4,&local_50);
    (**(code **)(((uint)local_54 & 0xfffffffc) + 4))(&local_50);
    _DAT_120320d8 = &DAT_11df76c9;
    local_68 = 0;
    _DAT_120320c8 = "TargetId";
    _DAT_120320cc = 0;
    _DAT_120320d0 = &DAT_11d9d32b;
    _DAT_120320d4 = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_120320dc,&local_68);
    (*(code *)PTR_FUN_11df76cc)(&local_68);
    local_1c = "Weapon";
    local_18 = 0;
    local_14 = &DAT_11d9d32b;
    puStack_10 = &DAT_11d9d32b;
    uStack_c = 0;
    puStack_8 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    uStack_c = uStack_c & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_120320e0 = local_1c;
    _DAT_120320e4 = local_18;
    _DAT_120320e8 = local_14;
    _DAT_120320ec = puStack_10;
    _DAT_120320f0 = uStack_c;
    (**(code **)((uStack_c & 0xfffffffc) + 0xc))(&DAT_120320f4,&puStack_8);
    (**(code **)((uStack_c & 0xfffffffc) + 4))(&puStack_8);
    local_34 = &DAT_11ddfa14;
    local_30 = 0;
    local_2c = &DAT_11d9d32b;
    local_28 = &DAT_11d9d32b;
    local_24 = 0;
    local_20 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    local_24 = local_24 & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_120320f8 = local_34;
    _DAT_120320fc = local_30;
    _DAT_12032100 = local_2c;
    _DAT_12032104 = local_28;
    DAT_12032108 = local_24;
    (**(code **)((local_24 & 0xfffffffc) + 0xc))(&DAT_1203210c,&local_20);
    (**(code **)((local_24 & 0xfffffffc) + 4))(&local_20);
    DAT_12032120 = &DAT_11df7728;
    _DAT_12032110 = 0;
    uRam12032114 = 0;
    uRam12032118 = 0;
    uRam1203211c = 0;
    FUN_11a8911f(&LAB_11c8b770);
  }
  if ((DAT_12032128 & 2) == 0) {
    DAT_12032128 = DAT_12032128 | 2;
    _DAT_12032130 = "ShooterId";
    uRam12032134 = 0;
    _DAT_12032138 = &DAT_11d9d32b;
    uRam1203213c = 3;
    _DAT_12032140 = "TargetId";
    uRam12032144 = 0;
    puRam12032148 = &DAT_11d9d32b;
    uRam1203214c = 3;
    _DAT_12032150 = "WeaponId";
    uRam12032154 = 0;
    puRam12032158 = &DAT_11d9d32b;
    uRam1203215c = 3;
    _DAT_12032160 = "ProjectileId";
    uRam12032164 = 0;
    puRam12032168 = &DAT_11d9d32b;
    uRam1203216c = 3;
    _DAT_12032170 = "HitPos";
    uRam12032174 = 0;
    puRam12032178 = &DAT_11d9d32b;
    uRam1203217c = 4;
    _DAT_12032180 = "HitDir";
    uRam12032184 = 0;
    puRam12032188 = &DAT_11d9d32b;
    uRam1203218c = 4;
    _DAT_12032190 = "HitNormal";
    uRam12032194 = 0;
    puRam12032198 = &DAT_11d9d32b;
    uRam1203219c = 4;
    _DAT_120321a0 = "HitType";
    uRam120321a4 = 0;
    puRam120321a8 = &DAT_11d9d32b;
    uRam120321ac = 5;
    _DAT_120321b0 = "Damage";
    uRam120321b4 = 0;
    puRam120321b8 = &DAT_11d9d32b;
    uRam120321bc = 2;
    _DAT_120321c0 = "Material";
    uRam120321c4 = 0;
    puRam120321c8 = &DAT_11d9d32b;
    uRam120321cc = 5;
    _DAT_120321d0 = 0;
    uRam120321d4 = 0;
    uRam120321d8 = 0;
    uRam120321dc = 0;
  }
  *param_1 = &DAT_12032098;
  param_1[1] = &DAT_12032130;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff02f | 0x20;
  return;
}

