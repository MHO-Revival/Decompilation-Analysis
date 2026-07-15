/* ===== FUN_10013030 @ 10013030  size=1335 ===== */
// calls: frexp, modf, floor
// strings:
//   "ASCII conversion buffer too small"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: frexp, modf, floor
   strings:
     ""ASCII conversion buffer too small"" */

void FUN_10013030(undefined4 param_1,char *param_2,uint param_3,double param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  float10 fVar4;
  uint local_50;
  int local_48;
  double local_44;
  int local_38;
  undefined4 local_34;
  char acStack_30 [12];
  uint local_24;
  int local_20;
  double local_1c;
  double local_14;
  uint local_8;
  
  local_24 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_5 == 0) {
    param_5 = 0xf;
  }
  if (0x10 < param_5) {
    param_5 = 0x10;
  }
  if (param_5 + 5 <= param_3) {
    if (param_4 < 0.0) {
      param_4 = -param_4;
      *param_2 = '-';
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    if ((_DAT_11d85e20 < param_4 == (_DAT_11d85e20 == param_4)) || (_DAT_11d85e18 < param_4)) {
      if (_DAT_11d85e20 < param_4 == (_DAT_11d85e20 == param_4)) {
        *param_2 = '0';
        param_2[1] = '\0';
      }
      else {
        builtin_strncpy(param_2,"inf",4);
      }
      goto LAB_1001355b;
    }
    frexp(param_4,(int *)&local_8);
    local_8 = (int)(local_8 * 0x4d) >> 8;
    fVar4 = (float10)FUN_10013570(local_8);
    local_14 = (double)fVar4;
    while ((local_14 < _DAT_11d85e20 || (local_14 < param_4))) {
      fVar4 = (float10)FUN_10013570(local_8 + 1);
      local_1c = (double)fVar4;
      if (_DAT_11d85e18 < local_1c) break;
      local_8 = local_8 + 1;
      local_14 = local_1c;
    }
    for (param_4 = param_4 / local_14; !NAN(param_4) && 1.0 < param_4 != (param_4 == 1.0);
        param_4 = param_4 / DAT_11cd9c80) {
      local_8 = local_8 + 1;
    }
    if (((int)local_8 < 0) && (-3 < (int)local_8)) {
      local_38 = -local_8;
      local_8 = 0;
    }
    else {
      local_38 = 0;
    }
    local_34 = local_38;
    local_20 = 0;
    do {
      if (((local_20 + local_38) - local_34) + 1 < (int)param_5) {
        param_4 = modf(param_4 * DAT_11cd9c80,&local_44);
      }
      else {
        local_44 = floor(param_4 * DAT_11cd9c80 + DAT_11de9968);
        if (_DAT_11de99a8 < local_44) {
          if (local_38 < 1) {
            while ((0 < local_20 && (_DAT_11de99a8 < local_44))) {
              pcVar3 = param_2 + -1;
              local_48 = (int)*pcVar3;
              if (local_8 == 0xffffffff) {
                if (local_48 == 0x2e) {
                  local_48 = (int)param_2[-2];
                  param_3 = param_3 + 1;
                  local_8 = 1;
                  pcVar3 = param_2 + -2;
                }
              }
              else {
                local_8 = local_8 + 1;
              }
              param_2 = pcVar3;
              local_20 = local_20 + -1;
              local_44 = (double)(local_48 + -0x2f);
            }
            if (_DAT_11de99a8 < local_44) {
              if (local_8 == 0xffffffff) {
                param_2 = param_2 + -1;
                if (*param_2 == '.') {
                  param_3 = param_3 + 1;
                  local_8 = 1;
                }
              }
              else {
                local_8 = local_8 + 1;
              }
              local_44 = 1.0;
            }
          }
          else {
            local_38 = local_38 + -1;
            local_44 = 1.0;
            if (local_20 == 0) {
              local_34 = local_34 + -1;
            }
          }
        }
        param_4 = 0.0;
      }
      if (local_44 == 0.0) {
        local_38 = local_38 + 1;
        if (local_20 == 0) {
          local_34 = local_34 + 1;
        }
      }
      else {
        local_20 = (local_38 - local_34) + local_20;
        local_34 = 0;
        for (; 0 < local_38; local_38 = local_38 + -1) {
          if (local_8 != 0xffffffff) {
            if (local_8 == 0) {
              *param_2 = '.';
              param_2 = param_2 + 1;
              param_3 = param_3 - 1;
            }
            local_8 = local_8 - 1;
          }
          *param_2 = '0';
          param_2 = param_2 + 1;
        }
        if (local_8 != 0xffffffff) {
          if (local_8 == 0) {
            *param_2 = '.';
            param_2 = param_2 + 1;
            param_3 = param_3 - 1;
          }
          local_8 = local_8 - 1;
        }
        cVar2 = FUN_11a897a0();
        *param_2 = cVar2 + '0';
        param_2 = param_2 + 1;
        local_20 = local_20 + 1;
      }
    } while (((local_20 + local_38) - local_34 < (int)param_5) && (_DAT_11d85e20 < param_4));
    if ((-2 < (int)local_8) && ((int)local_8 < 3)) {
      while (local_8 = local_8 - 1, -1 < (int)local_8) {
        *param_2 = '0';
        param_2 = param_2 + 1;
      }
      *param_2 = '\0';
      goto LAB_1001355b;
    }
    local_20 = param_3 - local_20;
    *param_2 = 'E';
    param_3 = local_20 + -1;
    if ((int)local_8 < 0) {
      param_2[1] = '-';
      param_3 = local_20 + -2;
      local_50 = -local_8;
      param_2 = param_2 + 2;
    }
    else {
      local_50 = local_8;
      param_2 = param_2 + 1;
    }
    local_20 = 0;
    for (; local_50 != 0; local_50 = local_50 / 10) {
      acStack_30[local_20] = (char)((ulonglong)local_50 % 10) + '0';
      local_20 = local_20 + 1;
    }
    if (local_20 < (int)param_3) {
      while (iVar1 = local_20, 0 < local_20) {
        local_20 = local_20 + -1;
        *param_2 = acStack_30[iVar1 + -1];
        param_2 = param_2 + 1;
      }
      *param_2 = '\0';
      goto LAB_1001355b;
    }
  }
  FUN_10016000(param_1,"ASCII conversion buffer too small");
LAB_1001355b:
  FUN_11a89daa();
  return;
}



/* ===== FUN_100135f0 @ 100135f0  size=385 ===== */
// strings:
//   "ASCII conversion buffer too small"

/* [RE-AUTO c0]
   strings:
     ""ASCII conversion buffer too small"" */

void FUN_100135f0(undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint local_28;
  undefined4 local_20;
  char acStack_1c [12];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (0xc < param_3) {
    if ((int)param_4 < 0) {
      *param_2 = '-';
      param_2 = param_2 + 1;
      local_8 = -param_4;
    }
    else {
      local_8 = param_4;
    }
    if (local_8 < 0x80000001) {
      local_20 = 0;
      local_c = 0x10;
      while (local_8 != 0) {
        uVar1 = local_8 / 10;
        local_8 = local_8 % 10;
        acStack_1c[local_20] = (char)local_8 + '0';
        local_20 = local_20 + 1;
        if ((local_c == 0x10) && (local_8 != 0)) {
          local_c = local_20;
        }
        local_8 = uVar1;
      }
      if (local_20 == 0) {
        *param_2 = '0';
        param_2 = param_2 + 1;
      }
      else {
        while (5 < local_20) {
          *param_2 = acStack_1c[local_20 - 1];
          param_2 = param_2 + 1;
          local_20 = local_20 - 1;
        }
        if (local_c < 6) {
          *param_2 = '.';
          for (local_28 = 5; param_2 = param_2 + 1, local_20 < local_28; local_28 = local_28 - 1) {
            *param_2 = '0';
          }
          while (local_c <= local_20) {
            *param_2 = acStack_1c[local_20 - 1];
            param_2 = param_2 + 1;
            local_20 = local_20 - 1;
          }
        }
      }
      *param_2 = '\0';
      goto LAB_10013763;
    }
  }
  FUN_10016000(param_1,"ASCII conversion buffer too small");
LAB_10013763:
  FUN_11a89daa();
  return;
}



/* ===== FUN_1001a0a0 @ 1001a0a0  size=606 ===== */
// strings:
//   "Can't add Up filter after starting"
//   "Can't add Average filter after starting"
//   "Can't add Paeth filter after starting"
//   "Unknown custom filter method"

/* [RE-AUTO c0]
   strings:
     ""Can't add Up filter after starting""
     ""Can't add Average filter after starting""
     ""Can't add Paeth filter after starting""
     ""Unknown custom filter method"" */

void __thiscall FUN_1001a0a0(undefined4 param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if (((*(uint *)(param_2 + 600) & 4) != 0) && (param_3 == 0x40)) {
      param_3 = 0;
    }
    if (param_3 == 0) {
      switch(param_4) {
      case 1:
        *(undefined1 *)(param_2 + 0x13a) = 0x10;
        break;
      case 2:
        *(undefined1 *)(param_2 + 0x13a) = 0x20;
        break;
      case 3:
        *(undefined1 *)(param_2 + 0x13a) = 0x40;
        break;
      case 4:
        *(undefined1 *)(param_2 + 0x13a) = 0x80;
        break;
      case 5:
      case 6:
      case 7:
        FUN_10016240(param_2,"Unknown row filter for method 0");
      case 0:
        *(undefined1 *)(param_2 + 0x13a) = 8;
        break;
      default:
        *(undefined1 *)(param_2 + 0x13a) = param_4;
      }
      if (*(int *)(param_2 + 0x108) != 0) {
        if (((*(byte *)(param_2 + 0x13a) & 0x10) != 0) && (*(int *)(param_2 + 0x10c) == 0)) {
          uVar1 = FUN_10025d00(param_2,*(int *)(param_2 + 0xf4) + 1);
          *(undefined4 *)(param_2 + 0x10c) = uVar1;
          **(undefined1 **)(param_2 + 0x10c) = 1;
        }
        if (((*(byte *)(param_2 + 0x13a) & 0x20) != 0) && (*(int *)(param_2 + 0x110) == 0)) {
          if (*(int *)(param_2 + 0x104) == 0) {
            FUN_10016240(param_2,"Can\'t add Up filter after starting");
            *(byte *)(param_2 + 0x13a) = *(byte *)(param_2 + 0x13a) & 0xdf;
          }
          else {
            uVar1 = FUN_10025d00(param_2,*(int *)(param_2 + 0xf4) + 1);
            *(undefined4 *)(param_2 + 0x110) = uVar1;
            **(undefined1 **)(param_2 + 0x110) = 2;
          }
        }
        if (((*(byte *)(param_2 + 0x13a) & 0x40) != 0) && (*(int *)(param_2 + 0x114) == 0)) {
          if (*(int *)(param_2 + 0x104) == 0) {
            FUN_10016240(param_2,"Can\'t add Average filter after starting");
            *(byte *)(param_2 + 0x13a) = *(byte *)(param_2 + 0x13a) & 0xbf;
          }
          else {
            uVar1 = FUN_10025d00(param_2,*(int *)(param_2 + 0xf4) + 1);
            *(undefined4 *)(param_2 + 0x114) = uVar1;
            **(undefined1 **)(param_2 + 0x114) = 3;
          }
        }
        if (((*(byte *)(param_2 + 0x13a) & 0x80) != 0) && (*(int *)(param_2 + 0x118) == 0)) {
          if (*(int *)(param_2 + 0x104) == 0) {
            FUN_10016240(param_2,"Can\'t add Paeth filter after starting");
            *(byte *)(param_2 + 0x13a) = *(byte *)(param_2 + 0x13a) & 0x7f;
          }
          else {
            uVar1 = FUN_10025d00(param_2,*(int *)(param_2 + 0xf4) + 1);
            *(undefined4 *)(param_2 + 0x118) = uVar1;
            **(undefined1 **)(param_2 + 0x118) = 4;
          }
        }
        if (*(char *)(param_2 + 0x13a) == '\0') {
          *(undefined1 *)(param_2 + 0x13a) = 8;
        }
      }
    }
    else {
      FUN_10016000(param_2,"Unknown custom filter method",param_1);
    }
  }
  return;
}



/* ===== FUN_1001dd20 @ 1001dd20  size=1647 ===== */
// strings:
//   "NULL row buffer"
//   "Uninitialized row"
//   "png_do_rgb_to_gray found nongray pixel"
//   "png_do_quantize returned rowbytes=0"

/* [RE-AUTO c0]
   strings:
     ""NULL row buffer""
     ""Uninitialized row""
     ""png_do_rgb_to_gray found nongray pixel""
     ""png_do_quantize returned rowbytes=0"" */

void FUN_1001dd20(int param_1,int *param_2)

{
  int iVar1;
  uint local_c;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    FUN_10016000(param_1,"NULL row buffer");
  }
  if (((*(uint *)(param_1 + 0x70) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x70) & 0x40) == 0)) {
    FUN_10016000(param_1,"Uninitialized row");
  }
  if ((*(uint *)(param_1 + 0x74) & 0x1000) != 0) {
    if ((char)param_2[2] == '\x03') {
      FUN_100227f0(param_2,*(int *)(param_1 + 0x108) + 1,*(undefined4 *)(param_1 + 0x128),
                   *(undefined4 *)(param_1 + 0x1a4),*(undefined2 *)(param_1 + 0x134));
    }
    else if ((*(short *)(param_1 + 0x134) == 0) || ((*(uint *)(param_1 + 0x74) & 0x2000000) == 0)) {
      FUN_10022c00(param_2,*(int *)(param_1 + 0x108) + 1,0);
    }
    else {
      FUN_10022c00(param_2,*(int *)(param_1 + 0x108) + 1,param_1 + 0x1a8);
    }
  }
  if ((((*(uint *)(param_1 + 0x74) & 0x40000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x80) == 0)) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_10018390(param_2,*(int *)(param_1 + 0x108) + 1,0);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x600000) != 0) {
    iVar1 = FUN_1001fa70(param_1,param_2,*(int *)(param_1 + 0x108) + 1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x251) = 1;
      if ((*(uint *)(param_1 + 0x74) & 0x600000) == 0x400000) {
        FUN_10016240(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
      if ((*(uint *)(param_1 + 0x74) & 0x600000) == 0x200000) {
        FUN_10016000(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if (((*(uint *)(param_1 + 0x74) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x6c) & 0x800) == 0)) {
    FUN_1001f6b0(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x80) != 0) {
    FUN_100202a0(param_2,*(int *)(param_1 + 0x108) + 1,param_1);
  }
  if (((((*(uint *)(param_1 + 0x74) & 0x2000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x600000) == 0)
       ) && (((*(uint *)(param_1 + 0x74) & 0x80) == 0 ||
             ((*(short *)(param_1 + 0x134) == 0 && ((*(byte *)(param_1 + 0x13b) & 4) == 0)))))) &&
     (*(char *)(param_1 + 0x13b) != '\x03')) {
    FUN_10021fa0(param_2,*(int *)(param_1 + 0x108) + 1,param_1);
  }
  if ((((*(uint *)(param_1 + 0x74) & 0x40000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x80) != 0)) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_10018390(param_2,*(int *)(param_1 + 0x108) + 1,0);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x800000) != 0) && ((*(byte *)(param_2 + 2) & 4) != 0)) {
    FUN_10022680(param_2,*(int *)(param_1 + 0x108) + 1,param_1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x4000000) != 0) {
    FUN_1001e8c0(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x400) != 0) {
    FUN_1001e970(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x40) != 0) {
    FUN_100234e0(param_2,*(int *)(param_1 + 0x108) + 1,*(undefined4 *)(param_1 + 0x1f8),
                 *(undefined4 *)(param_1 + 0x1fc));
    if (param_2[1] == 0) {
      FUN_10016000(param_1,"png_do_quantize returned rowbytes=0");
    }
  }
  if ((*(uint *)(param_1 + 0x74) & 0x200) != 0) {
    FUN_10023440(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x6c) & 0x800) != 0)) {
    FUN_1001f6b0(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x20) != 0) {
    FUN_10018170(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 8) != 0) {
    FUN_1001e5b0(param_2,*(int *)(param_1 + 0x108) + 1,param_1 + 0x19d);
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    FUN_1001e390(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if (((char)param_2[2] == '\x03') && (-1 < *(int *)(param_1 + 0x130))) {
    FUN_10018870(param_1,param_2);
  }
  if ((*(uint *)(param_1 + 0x74) & 1) != 0) {
    FUN_10018690(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x10000) != 0) {
    FUN_10018300(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x8000) != 0) {
    FUN_1001ef80(param_2,*(int *)(param_1 + 0x108) + 1,*(undefined2 *)(param_1 + 0x14a),
                 *(undefined4 *)(param_1 + 0x70));
  }
  if ((*(uint *)(param_1 + 0x74) & 0x80000) != 0) {
    FUN_1001ed40(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x20000) != 0) {
    FUN_1001e9f0(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x10) != 0) {
    FUN_10018290(param_2,*(int *)(param_1 + 0x108) + 1);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x100000) != 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      (**(code **)(param_1 + 0x5c))(param_1,param_2,*(int *)(param_1 + 0x108) + 1);
    }
    if (*(char *)(param_1 + 0x68) != '\0') {
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(param_1 + 0x68);
    }
    if (*(char *)(param_1 + 0x69) != '\0') {
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)(param_1 + 0x69);
    }
    *(char *)((int)param_2 + 0xb) = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
    if (*(byte *)((int)param_2 + 0xb) < 8) {
      local_c = (uint)*(byte *)((int)param_2 + 0xb) * *param_2 + 7 >> 3;
    }
    else {
      local_c = (uint)(*(byte *)((int)param_2 + 0xb) >> 3) * *param_2;
    }
    param_2[1] = local_c;
  }
  return;
}



/* ===== FUN_10025990 @ 10025990  size=161 ===== */
// strings:
//   "Attempt to set buffer size beyond max ignored"

/* WARNING: Removing unreachable block (ram,0x100259ba) */
/* [RE-AUTO c0]
   strings:
     ""Attempt to set buffer size beyond max ignored"" */

void FUN_10025990(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_10025dc0(param_1,*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb4) = param_2;
    uVar1 = FUN_10025d00(param_1,param_2);
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



/* ===== FUN_10026610 @ 10026610  size=421 ===== */
// calls: memcpy
// strings:
//   "Buffer error in compressed datastream"
//   "Data error in compressed datastream"
//   "Incomplete compressed datastream"

/* WARNING: Removing unreachable block (ram,0x10026664) */
/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""Buffer error in compressed datastream""
     ""Data error in compressed datastream""
     ""Incomplete compressed datastream"" */

uint FUN_10026610(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char *local_1c;
  size_t local_18;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  do {
    if ((*(int *)(param_1 + 0x7c) == 0) && (param_3 != 0)) {
      *(int *)(param_1 + 0x7c) = param_3;
      param_3 = 0;
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xb4);
    iVar1 = FUN_10810190(param_1 + 0x78,0);
    uVar2 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x88);
    if (((iVar1 == 0) || (iVar1 == 1)) && (0 < (int)uVar2)) {
      if ((param_4 != 0) && (local_8 < param_5)) {
        local_18 = param_5 - local_8;
        if (uVar2 < param_5 - local_8) {
          local_18 = uVar2;
        }
        memcpy((void *)(param_4 + local_8),*(void **)(param_1 + 0xb0),local_18);
      }
      local_8 = local_8 + uVar2;
    }
  } while (iVar1 == 0);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_1080ff30(param_1 + 0x78);
  if (iVar1 != 1) {
    if (*(int *)(param_1 + 0x90) == 0) {
      if (iVar1 == -5) {
        local_1c = "Buffer error in compressed datastream";
      }
      else if (iVar1 == -3) {
        local_1c = "Data error in compressed datastream";
      }
      else {
        local_1c = "Incomplete compressed datastream";
      }
    }
    else {
      local_1c = *(char **)(param_1 + 0x90);
    }
    FUN_10016760(param_1,local_1c);
    local_8 = 0;
  }
  return local_8;
}



/* ===== FUN_1002e9a0 @ 1002e9a0  size=172 ===== */
// calls: lstrlenA, memcpy
// strings:
//   "Can't write sCAL (buffer too small)"

/* [RE-AUTO c0]
   calls: lstrlenA, memcpy
   strings:
     ""Can't write sCAL (buffer too small)"" */

void FUN_1002e9a0(undefined4 param_1,undefined1 param_2,LPCSTR param_3,LPCSTR param_4)

{
  size_t _Size;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 auStack_52 [66];
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_8 = lstrlenA(param_3);
  _Size = lstrlenA(param_4);
  local_c = local_8 + 2 + _Size;
  if (local_c < 0x41) {
    local_54 = param_2;
    memcpy(&local_53,param_3,local_8 + 1);
    memcpy(auStack_52 + local_8,param_4,_Size);
    FUN_1002c320(param_1,0x7343414c,&local_54,local_c);
  }
  else {
    FUN_10016240(param_1,"Can\'t write sCAL (buffer too small)");
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1004bc30 @ 1004bc30  size=223 ===== */
// calls: _wassert, calloc, free
// strings:
//   u"..\\..\\..\\..\\..\\lib_src\\pal\\tfile.c"
//   u"a_ppszBuff && a_piSize"

/* [RE-AUTO c0]
   calls: _wassert, calloc, free
   strings:
     "u"..\\..\\..\\..\\..\\lib_src\\pal\\tfile.c""
     "u"a_ppszBuff && a_piSize"" */

undefined4 FUN_1004bc30(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  undefined4 local_c;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) {
    _wassert(u_a_ppszBuff____a_piSize_11e14bf8,u________________lib_src_pal_tfile_11e14bb0,0xed);
  }
  iVar1 = FUN_1004be50(param_1);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    local_c = 0;
  }
  else {
    *param_3 = iVar1;
    _Memory = calloc(1,iVar1 + 1);
    if (_Memory == (void *)0x0) {
      local_c = 0xffffffff;
    }
    else {
      iVar2 = FUN_1004bbf0(param_1,_Memory,iVar1);
      if (iVar2 == iVar1) {
        *param_2 = _Memory;
        *(undefined1 *)((int)_Memory + iVar1) = 0;
        local_c = 0;
      }
      else {
        free(_Memory);
        local_c = 0xffffffff;
      }
    }
  }
  return local_c;
}



/* ===== FUN_1004f9b0 @ 1004f9b0  size=285 ===== */
// calls: Ordinal_111, strerror
// strings:
//   "y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c"
//   "%s:%d:%s()Handle[%p] send package failed!bufflen=[%d],iRet=[%d],errno=%d,errorstring=[%s]\n "
//   "%s:%d:%s()Handle[%p] send package success!bufflen=[%d]\n"

/* [RE-AUTO c0]
   calls: Ordinal_111, strerror
   strings:
     ""y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c""
     ""%s:%d:%s()Handle[%p] send package failed!bufflen=[%d],iRet=[%d],errno=%d,errorstring=[%s]\n
   ""
     ""%s:%d:%s()Handle[%p] send package success!bufflen=[%d]\n"" */

undefined4 FUN_1004f9b0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_3 < 1)) {
    param_1[1] = 4;
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_10049b90(*param_1,param_2,param_3,param_4);
    if (iVar2 == param_3) {
      uVar1 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14db8 + 0x1a,
                           &DAT_11d8ac0c,param_1,param_3);
      (*(code *)param_1[0x12])
                (param_1,700,param_1[0x13],
                 "%s:%d:%s()Handle[%p] send package success!bufflen=[%d]\n",uVar1);
      uVar1 = 0;
    }
    else {
      param_1[1] = 1;
      iVar3 = Ordinal_111();
      pcVar4 = strerror(iVar3);
      uVar1 = Ordinal_111(pcVar4);
      uVar1 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14db8 + 0x16,
                           &DAT_11d8ac0c,param_1,param_3,iVar2,uVar1);
      (*(code *)param_1[0x12])
                (param_1,300,param_1[0x13],
                 "%s:%d:%s()Handle[%p] send package failed!bufflen=[%d],iRet=[%d],errno=%d,errorstring=[%s]\n "
                 ,uVar1);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_1004fad0 @ 1004fad0  size=1985 ===== */
// calls: __aullshr, __allshl, memmove, memcpy
// strings:
//   "y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c"
//   "%s:%d:%s()Handle[%p] recv one package!BuffLen=[%d],LeftData=[%d],DataOff=[%d],PkgLen=[%d]\n"

/* [RE-AUTO c0]
   calls: __aullshr, __allshl, memmove, memcpy
   strings:
     ""y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c""
     ""%s:%d:%s()Handle[%p] recv one package!BuffLen=[%d],LeftData=[%d],DataOff=[%d],PkgLen=[%d]\n""
    */

undefined4 FUN_1004fad0(int param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  size_t _Size;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34)) {
    local_8 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34);
    local_c = 0;
  }
  else if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c)) {
    local_8 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c);
    local_c = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 2) {
      local_8 = (int)(*(ushort *)
                       (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                       *(int *)(param_1 + 0x30)) & 0xff00) >> 8 |
                (*(ushort *)
                  (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x30)) &
                0xff) << 8;
    }
    else if (iVar1 == 4) {
      local_8 = *(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                         *(int *)(param_1 + 0x30)) >> 0x18 |
                (*(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                          *(int *)(param_1 + 0x30)) & 0xff0000) >> 8 |
                (*(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                          *(int *)(param_1 + 0x30)) & 0xff00) << 8 |
                *(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                        *(int *)(param_1 + 0x30)) << 0x18;
    }
    else if (iVar1 == 8) {
      uVar2 = __aullshr();
      uVar3 = __aullshr();
      uVar4 = __aullshr();
      uVar5 = __aullshr();
      uVar6 = __allshl();
      uVar7 = __allshl();
      uVar8 = __allshl();
      local_8 = __allshl();
      local_8 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | local_8;
    }
    else {
      local_8 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                               *(int *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      local_c = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 2) {
        local_c = (int)(*(ushort *)
                         (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                         *(int *)(param_1 + 0x38)) & 0xff00) >> 8 |
                  (*(ushort *)
                    (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x38))
                  & 0xff) << 8;
      }
      else if (iVar1 == 4) {
        local_c = *(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                           *(int *)(param_1 + 0x38)) >> 0x18 |
                  (*(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                            *(int *)(param_1 + 0x38)) & 0xff0000) >> 8 |
                  (*(uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                            *(int *)(param_1 + 0x38)) & 0xff00) << 8 |
                  *(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                          *(int *)(param_1 + 0x38)) << 0x18;
      }
      else if (iVar1 == 8) {
        uVar2 = __aullshr();
        uVar3 = __aullshr();
        uVar4 = __aullshr();
        uVar5 = __aullshr();
        uVar6 = __allshl();
        uVar7 = __allshl();
        uVar8 = __allshl();
        local_c = __allshl();
        local_c = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | local_c;
      }
      else {
        local_c = (uint)*(byte *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) +
                                 *(int *)(param_1 + 0x38));
      }
    }
  }
  if (*(int *)(param_1 + 0x24) < (int)(local_8 + local_c)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        memmove(*(void **)(param_1 + 0x18),
                (void *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20)),
                *(size_t *)(param_1 + 0x24));
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar9 = 0;
  }
  else {
    _Size = local_8 + local_c;
    memcpy(param_2,(void *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20)),_Size);
    *param_3 = _Size;
    *(size_t *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - _Size;
    *(size_t *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + _Size;
    uVar9 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dbc + 0x39,
                         &DAT_11d8ac0c,param_1,*param_3,*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x20),_Size);
    (**(code **)(param_1 + 0x48))
              (param_1,700,*(undefined4 *)(param_1 + 0x4c),
               "%s:%d:%s()Handle[%p] recv one package!BuffLen=[%d],LeftData=[%d],DataOff=[%d],PkgLen=[%d]\n"
               ,uVar9);
    uVar9 = 1;
  }
  return uVar9;
}



/* ===== FUN_100502a0 @ 100502a0  size=513 ===== */
// calls: Ordinal_111, strerror
// strings:
//   "y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c"
//   "%s:%d:%s()Handle[%p] have no enough space for receiving data!receiveddata=[%d],recvbuff=[%d]\n"
//   "%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n"
//   "%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n"

/* [RE-AUTO c0]
   calls: Ordinal_111, strerror
   strings:
     ""y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c""
     ""%s:%d:%s()Handle[%p] have no enough space for receiving
   data!receiveddata=[%d],recvbuff=[%d]\n""
     ""%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n""
     ""%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n"" */

int FUN_100502a0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else if (((param_2 == 0) || (param_3 == (int *)0x0)) || (*param_3 < 1)) {
    param_1[1] = 4;
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1004fad0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = (param_1[7] - param_1[8]) - param_1[9];
      if (iVar1 < 1) {
        param_1[1] = 3;
        uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dc0 + 0x1f,
                             &DAT_11d8ac0c,param_1,param_1[9],param_1[7]);
        (*(code *)param_1[0x12])
                  (param_1,300,param_1[0x13],
                   "%s:%d:%s()Handle[%p] have no enough space for receiving data!receiveddata=[%d],recvbuff=[%d]\n"
                   ,uVar2);
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_10049bb0(*param_1,param_1[6] + param_1[8] + param_1[9],iVar1,param_4);
        if (iVar1 < 0) {
          param_1[1] = 1;
          iVar1 = Ordinal_111();
          pcVar3 = strerror(iVar1);
          uVar2 = Ordinal_111(pcVar3);
          uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dc0 + 0x28,
                               &DAT_11d8ac0c,param_1,uVar2);
          (*(code *)param_1[0x12])
                    (param_1,300,param_1[0x13],
                     "%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n",uVar2);
          iVar1 = -1;
        }
        else if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          param_1[9] = param_1[9] + iVar1;
          uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dc0 + 0x32,
                               &DAT_11d8ac0c,param_1,iVar1,param_1[9]);
          (*(code *)param_1[0x12])
                    (param_1,700,param_1[0x13],
                     "%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n",uVar2);
          iVar1 = FUN_1004fad0(param_1,param_2,param_3);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10050f10 @ 10050f10  size=513 ===== */
// calls: Ordinal_111, strerror
// strings:
//   "y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c"
//   "%s:%d:%s()Handle[%p] have no enough space for receiving data!receiveddata=[%d],recvbuff=[%d]\n"
//   "%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n"
//   "%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n"

/* [RE-AUTO c0]
   calls: Ordinal_111, strerror
   strings:
     ""y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c""
     ""%s:%d:%s()Handle[%p] have no enough space for receiving
   data!receiveddata=[%d],recvbuff=[%d]\n""
     ""%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n""
     ""%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n"" */

int FUN_10050f10(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else if (((param_2 == 0) || (param_3 == (int *)0x0)) || (*param_3 < 1)) {
    param_1[1] = 4;
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_100506b0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = (param_1[7] - param_1[8]) - param_1[9];
      if (iVar1 < 1) {
        param_1[1] = 3;
        uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dcc + 0x24,
                             &DAT_11d8ac0c,param_1,param_1[9],param_1[7]);
        (*(code *)param_1[0x12])
                  (param_1,300,param_1[0x13],
                   "%s:%d:%s()Handle[%p] have no enough space for receiving data!receiveddata=[%d],recvbuff=[%d]\n"
                   ,uVar2);
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_10049bb0(*param_1,param_1[6] + param_1[8] + param_1[9],iVar1,param_4);
        if (iVar1 < 0) {
          param_1[1] = 1;
          iVar1 = Ordinal_111();
          pcVar3 = strerror(iVar1);
          uVar2 = Ordinal_111(pcVar3);
          uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dcc + 0x2f,
                               &DAT_11d8ac0c,param_1,uVar2);
          (*(code *)param_1[0x12])
                    (param_1,300,param_1[0x13],
                     "%s:%d:%s()Handle[%p] recv error!errno=%d,errorstring=[%s]\n",uVar2);
          iVar1 = -1;
        }
        else if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          param_1[9] = param_1[9] + iVar1;
          uVar2 = FUN_1004ca70("y:\\tconnd_dev\\tconnd_2.3\\tcltapi\\tcltapi.c",DAT_11e14dcc + 0x3a,
                               &DAT_11d8ac0c,param_1,iVar1,param_1[9]);
          (*(code *)param_1[0x12])
                    (param_1,700,param_1[0x13],
                     "%s:%d:%s()Handle[%p] recv data!datalen=[%d],LeftData=[%d]\n",uVar2);
          iVar1 = FUN_100506b0(param_1,param_2,param_3);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_10067670 @ 10067670  size=976 ===== */
// calls: _snprintf, memset, memcpy
// strings:
//   "; input buff is not enough."
//   "; failed to input entry<%s> of meta<%s>"
//   "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>], about entry<%s> of meta<%s>"

/* WARNING: Removing unreachable block (ram,0x100679b2) */
/* [RE-AUTO c0]
   calls: _snprintf, memset, memcpy
   strings:
     ""; input buff is not enough.""
     ""; failed to input entry<%s> of meta<%s>""
     ""; invalid refer value: expect refer_value<%d> in [0, array_count<%d>], about entry<%s> of
   meta<%s>"" */

void FUN_10067670(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  int *_Dst;
  size_t sVar10;
  char *pcVar11;
  uint local_dc;
  int iStack_d8;
  int *piStack_d4;
  int local_d0;
  uint uStack_c8;
  undefined4 local_c4;
  int iStack_b0;
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&local_dc;
  local_c4 = param_2;
  local_d0 = param_4;
  local_dc = 0;
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0xc);
  }
  puVar3 = (undefined1 *)FUN_1000f910();
  *puVar3 = 0;
  if (param_5 < 1) {
    pcVar11 = "; input buff is not enough.";
    sVar10 = 0x400;
    pcVar4 = (char *)FUN_1000f910();
    _snprintf(pcVar4,sVar10,pcVar11);
    FUN_11a89daa();
    return;
  }
  iStack_d8 = (param_1 - *(int *)(param_1 + 0x3c)) + -0x114;
  piStack_d4 = (int *)(param_5 + param_4);
  iStack_b0 = param_3;
  iVar6 = iStack_d8;
LAB_10067734:
  do {
    iVar1 = iStack_b0 * 0xb4 + 0xb8 + param_1;
    if (((*(int *)(iVar1 + 4) <= param_6) && ((*(byte *)(iVar1 + 0x70) & 1) == 0)) &&
       ((*(ushort *)(iVar1 + 0x44) & 6) == 0)) {
      iVar2 = *(int *)(iVar1 + 0x58);
      _Dst = (int *)(*(int *)(iVar1 + 0x2c) + param_4);
      if (iVar2 == 0) {
        uVar5 = *(uint *)(iVar1 + 0x24);
      }
      else {
        puVar8 = (uint *)(*(int *)(iVar1 + 0x5c) + param_4);
        iVar6 = iStack_d8;
        if (iVar2 == 2) {
          uVar5 = (uint)(ushort)*puVar8;
          uStack_c8 = 0;
        }
        else if (iVar2 == 4) {
          uVar5 = *puVar8;
          uStack_c8 = (int)uVar5 >> 0x1f;
        }
        else if (iVar2 == 8) {
          uVar5 = *puVar8;
          uStack_c8 = puVar8[1];
        }
        else {
          uVar5 = (uint)(byte)*puVar8;
          uStack_c8 = 0;
        }
      }
      if (((int)uVar5 < 0) || ((iVar2 = *(int *)(iVar1 + 0x24), 0 < iVar2 && (iVar2 < (int)uVar5))))
      {
        uVar7 = FUN_10003330(param_1);
        uVar7 = FUN_10004f00(iVar1,uVar7);
        pcVar11 = 
        "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>], about entry<%s> of meta<%s>"
        ;
        sVar10 = 0x400;
        pcVar4 = (char *)FUN_1000f910(0x400,
                                      "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>], about entry<%s> of meta<%s>"
                                      ,uVar5,*(undefined4 *)(iVar1 + 0x24),uVar7);
        _snprintf(pcVar4,sVar10,pcVar11);
        local_dc = 0x82010403;
        goto LAB_10067a27;
      }
      if (((uVar5 != 0) && (1 < *(int *)(iVar1 + 8))) && (iVar2 == 1)) {
        iVar6 = FUN_1007e870(local_c4,*(int *)(iVar1 + 0xc) + 0x114 + iVar6);
        if (iVar6 == 0) {
          if ((*(byte *)(iVar1 + 0x44) & 0x40) == 0) {
            if (*(int *)(iVar1 + 0x98) == -1) {
              sVar10 = *(size_t *)(iVar1 + 0x20);
              if (sVar10 == 0) {
                sVar10 = *(size_t *)(iVar1 + 0x18);
              }
              if ((int)piStack_d4 - (int)_Dst < (int)sVar10) {
                local_dc = 0x82010407;
              }
              else {
                memset(_Dst,0,sVar10);
              }
            }
            else {
              if ((*(int *)(iVar1 + 8) == 0x15) || (*(int *)(iVar1 + 8) == 0x16)) {
                iVar6 = *(int *)(iVar1 + 0x20);
                if (iVar6 == 0) {
                  iVar6 = (int)piStack_d4 - (int)_Dst;
                }
              }
              else {
                iVar6 = *(int *)(iVar1 + 0x18);
              }
              if ((int)piStack_d4 - (int)_Dst < iVar6) {
                iVar6 = (int)piStack_d4 - (int)_Dst;
              }
              uVar5 = *(uint *)(iVar1 + 0x8c);
              if (iVar6 < (int)uVar5) {
                local_dc = 0x82010407;
              }
              else {
                puVar3 = (undefined1 *)(iStack_d8 + 0x114 + *(int *)(iVar1 + 0x98));
                if (uVar5 < 0x41) {
                  uVar9 = 0;
                  if (uVar5 != 0) {
                    do {
                      *(undefined1 *)_Dst = *puVar3;
                      uVar9 = uVar9 + 1;
                      _Dst = (int *)((int)_Dst + 1);
                      puVar3 = puVar3 + 1;
                    } while (uVar9 < *(uint *)(iVar1 + 0x8c));
                  }
                }
                else {
                  memcpy(_Dst,puVar3,uVar5);
                }
              }
            }
          }
          else {
            iVar6 = *(int *)(iVar1 + 0x60) + 0x114 + iStack_d8;
            iVar2 = *(int *)(iVar1 + 0x18);
            if (iVar2 == 2) {
              *(undefined2 *)_Dst = *(undefined2 *)(iVar6 + 0x24);
            }
            else if (iVar2 == 4) {
              *_Dst = *(int *)(iVar6 + 0x24);
            }
            else if (iVar2 == 8) {
              iVar6 = *(int *)(iVar6 + 0x24);
              *_Dst = iVar6;
              _Dst[1] = iVar6 >> 0x1f;
            }
            else {
              *(undefined1 *)_Dst = *(undefined1 *)(iVar6 + 0x24);
            }
          }
        }
        else {
          local_dc = (int)piStack_d4 - (int)_Dst;
          if (piStack_d4 < _Dst) {
            local_dc = 0x82010407;
LAB_10067a27:
            FUN_11a89daa();
            return;
          }
          uVar7 = FUN_1007e890(iVar6,param_7);
          local_dc = FUN_10006a70(iStack_d8,iVar1,_Dst,&local_dc,uVar7);
        }
        if ((local_dc & 0x80000000) != 0) {
          uVar7 = FUN_10003330(param_1);
          uVar7 = FUN_10004f00(iVar1,uVar7);
          pcVar11 = "; failed to input entry<%s> of meta<%s>";
          sVar10 = 0x400;
          pcVar4 = (char *)FUN_1000f910(0x400,"; failed to input entry<%s> of meta<%s>",uVar7);
          _snprintf(pcVar4,sVar10,pcVar11);
          goto LAB_10067a27;
        }
        if ((*(int *)(param_1 + 0x10) == 0) ||
           (iStack_b0 = iStack_b0 + 1, iVar6 = iStack_d8, param_4 = local_d0,
           *(int *)(param_1 + 0x2c) <= iStack_b0)) goto LAB_10067a27;
        goto LAB_10067734;
      }
    }
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (iStack_b0 = iStack_b0 + 1, param_4 = local_d0, *(int *)(param_1 + 0x2c) <= iStack_b0))
    goto LAB_10067a27;
  } while( true );
}



/* ===== FUN_1006a610 @ 1006a610  size=377 ===== */
// calls: _snprintf
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or
   a_pstHost->pszBuff<%p>==NULL or a_pstH…"
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"" */

undefined4 FUN_1006a610(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    pcVar5 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  iStack_8 = *param_2;
  if (((iStack_8 == 0) || (iStack_4 = param_2[1], iStack_4 == 0)) ||
     ((*param_3 == 0 || (param_3[1] == 0)))) {
    pcVar5 = 
    "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
    ;
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,iStack_8,param_2[1],*param_3,param_3[1]);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
    param_4 = *(int *)(param_1 + 0xc);
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar5 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010401;
  }
  uStack_c = 1;
  if (param_5 == 1) {
    uVar2 = FUN_10066d50(&uStack_c,param_4,0);
    param_2[1] = iStack_8 - *param_2;
    return uVar2;
  }
  if (param_5 != 3) {
    uVar2 = FUN_10066510(param_1,&uStack_c);
    param_2[1] = iStack_8 - *param_2;
    return uVar2;
  }
  uVar2 = FUN_10069c70(&uStack_c);
  param_2[1] = iStack_8 - *param_2;
  return uVar2;
}



/* ===== FUN_1006a790 @ 1006a790  size=330 ===== */
// calls: _snprintf
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_fpXml<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_fpXml<%p>==NULL or a_pstHost<%p>==NULL"" */

undefined4 FUN_1006a790(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined4 uStack_c;
  int iStack_8;
  
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    pcVar5 = "; invalid parameters: a_pstMeta<%p>==NULL or a_fpXml<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_fpXml<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    pcVar5 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_3,param_3[1]);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
    param_4 = *(int *)(param_1 + 0xc);
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar5 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar4,pcVar5);
    param_3[1] = 0;
    return 0x82010401;
  }
  uStack_c = 2;
  iStack_8 = param_2;
  if (param_5 == 1) {
    uVar2 = FUN_10066d50(&uStack_c,param_4,0);
    return uVar2;
  }
  if (param_5 != 3) {
    uVar2 = FUN_10066510(param_1,&uStack_c);
    return uVar2;
  }
  uVar2 = FUN_10069c70(&uStack_c);
  return uVar2;
}



/* ===== FUN_1006a8e0 @ 1006a8e0  size=430 ===== */
// calls: _snprintf, fopen, fprintf, fclose
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to open file a_szFile<%s>"
//   "<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_szFile<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf, fopen, fprintf, fclose
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to open file a_szFile<%s>""
     ""<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_szFile<%p>==NULL or a_pstHost<%p>==NULL"" */

undefined4 FUN_1006a8e0(int param_1,char *param_2,int *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *_File;
  size_t sVar4;
  char *pcVar5;
  undefined4 uStack_c;
  FILE *pFStack_8;
  
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (param_3 == (int *)0x0)) {
    pcVar5 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_szFile<%p>==NULL or a_pstHost<%p>==NULL";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_szFile<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    pcVar5 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_3,param_3[1]);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010468;
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
    param_4 = *(int *)(param_1 + 0xc);
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar5 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010401;
  }
  _File = fopen(param_2,"w");
  if (_File == (FILE *)0x0) {
    pcVar5 = "; failed to open file a_szFile<%s>";
    sVar4 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,"; failed to open file a_szFile<%s>",param_2);
    _snprintf(pcVar3,sVar4,pcVar5);
    return 0x82010446;
  }
  fprintf(_File,"<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n",&DAT_11e113a8);
  uStack_c = 2;
  pFStack_8 = _File;
  if (param_5 == 1) {
    uVar2 = FUN_10066d50(&uStack_c,param_4,0);
  }
  else {
    if (param_5 != 3) {
      uVar2 = FUN_10066510(param_1,&uStack_c);
      fclose(_File);
      return uVar2;
    }
    uVar2 = FUN_10069c70(&uStack_c);
  }
  fclose(_File);
  return uVar2;
}



/* ===== FUN_1006aa90 @ 1006aa90  size=497 ===== */
// calls: _snprintf, fopen, fprintf, fclose
// strings:
//   "; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL"
//   "; invalid parameters: a_pstIOWrap->stInOutputSrc invalid."
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to open file szFileName<%s>"
//   "<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n"
//   "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"

/* [RE-AUTO c0]
   calls: _snprintf, fopen, fprintf, fclose
   strings:
     ""; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL""
     ""; invalid parameters: a_pstIOWrap->stInOutputSrc invalid.""
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to open file szFileName<%s>""
     ""<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n""
     ""; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u>
   <= 0"" */

undefined4 FUN_1006aa90(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  FILE *_File;
  FILE *_File_00;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined4 uStack_c;
  FILE *pFStack_8;
  int iStack_4;
  
  iVar5 = param_1[7];
  _File_00 = (FILE *)0x0;
  puVar2 = (undefined1 *)FUN_1000f910();
  *puVar2 = 0;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    pcVar7 = "; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL";
    sVar6 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,"; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL",0);
    _snprintf(pcVar3,sVar6,pcVar7);
    return 0x82010468;
  }
  pcVar3 = (char *)param_1[1];
  if (((pcVar3 == (char *)0x0) && (param_1[2] == 0)) && ((param_1[3] == 0 || (param_1[4] == 0)))) {
    pcVar7 = "; invalid parameters: a_pstIOWrap->stInOutputSrc invalid.";
    sVar6 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar6,pcVar7);
    return 0x82010468;
  }
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    pcVar7 = 
    "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"
    ;
    sVar6 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"
                                  ,param_1[5],param_1[6]);
    _snprintf(pcVar3,sVar6,pcVar7);
    return 0x82010468;
  }
  if ((param_1[7] == 0) || (*(int *)(iVar1 + 0xc) < param_1[7])) {
    iVar5 = *(int *)(iVar1 + 0xc);
  }
  if (iVar5 < *(int *)(iVar1 + 8)) {
    uVar4 = FUN_10003330(iVar1);
    pcVar7 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar6 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,iVar5,*(undefined4 *)(*param_1 + 8),uVar4);
    _snprintf(pcVar3,sVar6,pcVar7);
    return 0x82010401;
  }
  if (pcVar3 == (char *)0x0) {
    _File = (FILE *)param_1[2];
    if (_File == (FILE *)0x0) {
      pFStack_8 = (FILE *)param_1[3];
      iStack_4 = param_1[4];
      uStack_c = 1;
      goto LAB_1006abf5;
    }
  }
  else {
    _File = fopen(pcVar3,"w");
    if (_File == (FILE *)0x0) {
      pcVar7 = "; failed to open file szFileName<%s>";
      sVar6 = 0x400;
      pcVar3 = (char *)FUN_1000f910(0x400,"; failed to open file szFileName<%s>",param_1[1]);
      _snprintf(pcVar3,sVar6,pcVar7);
      return 0x82010446;
    }
  }
  fprintf(_File,"<?xml version=\"1.0\" encoding=\"%s\" standalone=\"yes\" ?>\n",&DAT_11e113a8);
  uStack_c = 2;
  _File_00 = _File;
  pFStack_8 = _File;
LAB_1006abf5:
  if (param_1[8] == 1) {
    uVar4 = FUN_10066d50(&uStack_c,iVar5,param_1[9]);
  }
  else if (param_1[8] == 3) {
    uVar4 = FUN_10069c70(&uStack_c,iVar5,param_1[9]);
  }
  else {
    uVar4 = FUN_10066510(*param_1);
  }
  if (param_1[1] != 0) {
    fclose(_File_00);
  }
  return uVar4;
}



/* ===== FUN_1006e120 @ 1006e120  size=513 ===== */
// calls: _snprintf, __iob_func
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to create xml_parser_tree"
//   "; Xml contails no root."
//   "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf, __iob_func
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to create xml_parser_tree""
     ""; Xml contails no root.""
     ""; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or
   a_pstHost->pszBuff<%p>==NULL or a_pstH…"
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"" */

int FUN_1006e120(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 local_c;
  int iStack_8;
  int iStack_4;
  
  local_c = 0;
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_3 == (int *)0x0)) || (param_2 == (int *)0x0)) {
    pcVar8 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstXml<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_3,param_2);
    _snprintf(pcVar3,sVar7,pcVar8);
    return -0x7dfefb98;
  }
  if (((*param_3 != 0) && (param_3[1] != 0)) && ((*param_2 != 0 && (param_2[1] != 0)))) {
    iStack_4 = FUN_100033f0(param_1);
    iStack_8 = param_2[1];
    if (param_4 == 0) {
      param_4 = 0x7fffffff;
    }
    if (param_4 < *(int *)(param_1 + 8)) {
      uVar2 = FUN_10003330(param_1);
      pcVar8 = 
      "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
      sVar7 = 0x400;
      pcVar3 = (char *)FUN_1000f910(0x400,
                                    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                    ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
      _snprintf(pcVar3,sVar7,pcVar8);
      param_2[1] = 0;
      return -0x7dfefbff;
    }
    pFVar4 = __iob_func();
    iVar5 = FUN_10070180(&local_c,*param_3,param_3[1],pFVar4 + 2);
    if (iVar5 < 0) {
      pcVar8 = "; failed to create xml_parser_tree";
      sVar7 = 0x400;
      pcVar3 = (char *)FUN_1000f910();
      _snprintf(pcVar3,sVar7,pcVar8);
      return iVar5;
    }
    iVar6 = FUN_1007eda0(local_c);
    if (iVar6 == 0) {
      pcVar8 = "; Xml contails no root.";
      sVar7 = 0x400;
      pcVar3 = (char *)FUN_1000f910();
      _snprintf(pcVar3,sVar7,pcVar8);
      param_2[1] = 0;
      iVar5 = -0x7dfefbf5;
    }
    if (-1 < iVar5) {
      iVar5 = FUN_1006dff0(param_1,param_2,iVar6,param_4,param_5,0);
      if (-1 < iVar5) {
        if (iStack_4 < iStack_8) {
          param_2[1] = iStack_4;
          FUN_1007ed70(local_c);
          return iVar5;
        }
        param_2[1] = iStack_8;
      }
    }
    FUN_1007ed70(local_c);
    return iVar5;
  }
  pcVar8 = 
  "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
  ;
  sVar7 = 0x400;
  pcVar3 = (char *)FUN_1000f910(0x400,
                                "; invalid parameters: a_pstXml->pszBuff<%p>==NULL or a_pstXml->iBuff<%u> <= 0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                ,*param_3,param_3[1],*param_2,param_2[1]);
  _snprintf(pcVar3,sVar7,pcVar8);
  return -0x7dfefb98;
}



/* ===== FUN_1006e330 @ 1006e330  size=478 ===== */
// calls: _snprintf, __iob_func
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to create xml_parser_tree"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf, __iob_func
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to create xml_parser_tree""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"" */

int FUN_1006e330(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 local_c;
  int iStack_8;
  int iStack_4;
  
  local_c = 0;
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_3 == 0)) || (param_2 == (int *)0x0)) {
    pcVar8 = "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_fp<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_3,param_2);
    _snprintf(pcVar3,sVar7,pcVar8);
    return -0x7dfefb98;
  }
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    pcVar8 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_2,param_2[1]);
    _snprintf(pcVar3,sVar7,pcVar8);
    return -0x7dfefb98;
  }
  iStack_4 = FUN_100033f0(param_1);
  iStack_8 = param_2[1];
  if (param_4 == 0) {
    param_4 = 0x7fffffff;
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar8 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar7,pcVar8);
    param_2[1] = 0;
    return -0x7dfefbff;
  }
  pFVar4 = __iob_func();
  iVar5 = FUN_10070300(&local_c,param_3,pFVar4 + 2);
  if (iVar5 < 0) {
    pcVar8 = "; failed to create xml_parser_tree";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar7,pcVar8);
    return iVar5;
  }
  iVar6 = FUN_1007eda0(local_c);
  if (iVar6 == 0) {
    pcVar8 = "; failed to create xml_parser_tree";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar7,pcVar8);
    param_2[1] = 0;
    iVar5 = -0x7dfefbf5;
  }
  if (-1 < iVar5) {
    iVar5 = FUN_1006dff0(param_1,param_2,iVar6,param_4,param_5,0);
    if (-1 < iVar5) {
      if (iStack_4 < iStack_8) {
        param_2[1] = iStack_4;
        FUN_1007ed70(local_c);
        return iVar5;
      }
      param_2[1] = iStack_8;
    }
  }
  FUN_1007ed70(local_c);
  return iVar5;
}



/* ===== FUN_1006e510 @ 1006e510  size=478 ===== */
// calls: _snprintf, __iob_func
// strings:
//   "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to create xml_parser_tree"
//   "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
//   "; invalid parameters: a_pstMeta<%p>==NULL or a_pszFile<%p>==NULL or a_pstHost<%p>==NULL"

/* [RE-AUTO c0]
   calls: _snprintf, __iob_func
   strings:
     ""; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to create xml_parser_tree""
     ""; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0""
     ""; invalid parameters: a_pstMeta<%p>==NULL or a_pszFile<%p>==NULL or a_pstHost<%p>==NULL"" */

int FUN_1006e510(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 local_c;
  int iStack_8;
  int iStack_4;
  
  local_c = 0;
  puVar1 = (undefined1 *)FUN_1000f910();
  *puVar1 = 0;
  if (((param_1 == 0) || (param_3 == 0)) || (param_2 == (int *)0x0)) {
    pcVar8 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pszFile<%p>==NULL or a_pstHost<%p>==NULL";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pszFile<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_3,param_2);
    _snprintf(pcVar3,sVar7,pcVar8);
    return -0x7dfefb98;
  }
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    pcVar8 = "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u> <= 0"
                                  ,*param_2,param_2[1]);
    _snprintf(pcVar3,sVar7,pcVar8);
    return -0x7dfefb98;
  }
  iStack_4 = FUN_100033f0(param_1);
  iStack_8 = param_2[1];
  if (param_4 == 0) {
    param_4 = 0x7fffffff;
  }
  if (param_4 < *(int *)(param_1 + 8)) {
    uVar2 = FUN_10003330(param_1);
    pcVar8 = 
    "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect a_iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,param_4,*(undefined4 *)(param_1 + 8),uVar2);
    _snprintf(pcVar3,sVar7,pcVar8);
    param_2[1] = 0;
    return -0x7dfefbff;
  }
  pFVar4 = __iob_func();
  iVar5 = FUN_10070410(&local_c,param_3,pFVar4 + 2);
  if (iVar5 < 0) {
    pcVar8 = "; failed to create xml_parser_tree";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar7,pcVar8);
    return iVar5;
  }
  iVar6 = FUN_1007eda0(local_c);
  if (iVar6 == 0) {
    pcVar8 = "; failed to create xml_parser_tree";
    sVar7 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar7,pcVar8);
    param_2[1] = 0;
    iVar5 = -0x7dfefbf5;
  }
  if (-1 < iVar5) {
    iVar5 = FUN_1006dff0(param_1,param_2,iVar6,param_4,param_5,0);
    if (-1 < iVar5) {
      if (iStack_4 < iStack_8) {
        param_2[1] = iStack_4;
        FUN_1007ed70(local_c);
        return iVar5;
      }
      param_2[1] = iStack_8;
    }
  }
  FUN_1007ed70(local_c);
  return iVar5;
}



/* ===== FUN_1006e6f0 @ 1006e6f0  size=555 ===== */
// calls: _snprintf, __iob_func
// strings:
//   "; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL"
//   "; invalid parameters: a_pstIOWrap->stInOutputSrc invalid."
//   "; invalid parameter: expect iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
//   "; failed to create xml_parser_tree"
//   "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"

/* [RE-AUTO c0]
   calls: _snprintf, __iob_func
   strings:
     ""; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL""
     ""; invalid parameters: a_pstIOWrap->stInOutputSrc invalid.""
     ""; invalid parameter: expect iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>""
     ""; failed to create xml_parser_tree""
     ""; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u>
   <= 0"" */

int FUN_1006e6f0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  FILE *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  undefined4 local_8;
  int iStack_4;
  
  iVar8 = param_1[7];
  local_8 = 0;
  puVar2 = (undefined1 *)FUN_1000f910();
  *puVar2 = 0;
  if (*param_1 == 0) {
    pcVar10 = "; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL";
    sVar9 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,"; invalid parameters: a_pstIOWrap->pstMeta<%p>==NULL",0);
    _snprintf(pcVar3,sVar9,pcVar10);
    return -0x7dfefb98;
  }
  if (((param_1[1] == 0) && (param_1[2] == 0)) && ((param_1[3] == 0 || (param_1[4] == 0)))) {
    pcVar10 = "; invalid parameters: a_pstIOWrap->stInOutputSrc invalid.";
    sVar9 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar9,pcVar10);
    return -0x7dfefb98;
  }
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    pcVar10 = 
    "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"
    ;
    sVar9 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstIOWrap->stHost.pszBuff<%p>==NULL or a_pstIOWrap->stHost.iBuff<%u> <= 0"
                                  ,param_1[5],param_1[6]);
    _snprintf(pcVar3,sVar9,pcVar10);
    return -0x7dfefb98;
  }
  iStack_4 = FUN_100033f0(*param_1);
  iVar1 = param_1[6];
  if (param_1[7] == 0) {
    iVar8 = 0x7fffffff;
  }
  if (iVar8 < *(int *)(*param_1 + 8)) {
    uVar4 = FUN_10003330(*param_1);
    pcVar10 = 
    "; invalid parameter: expect iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>";
    sVar9 = 0x400;
    pcVar3 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameter: expect iCutOffVersion<%d> NOT less than baseVersion<%d> of meta<%s>"
                                  ,iVar8,*(undefined4 *)(*param_1 + 8),uVar4);
    _snprintf(pcVar3,sVar9,pcVar10);
    param_1[6] = 0;
    return -0x7dfefbff;
  }
  if (param_1[1] == 0) {
    if (param_1[2] == 0) {
      pFVar5 = __iob_func();
      iVar6 = FUN_10070180(&local_8,param_1[3],param_1[4],pFVar5 + 2);
    }
    else {
      pFVar5 = __iob_func();
      iVar6 = FUN_10070300(&local_8,param_1[2],pFVar5 + 2);
    }
  }
  else {
    pFVar5 = __iob_func();
    iVar6 = FUN_10070410(&local_8,param_1[1],pFVar5 + 2);
  }
  if (iVar6 < 0) {
    pcVar10 = "; failed to create xml_parser_tree";
    sVar9 = 0x400;
    pcVar3 = (char *)FUN_1000f910();
    _snprintf(pcVar3,sVar9,pcVar10);
    return iVar6;
  }
  iVar7 = FUN_1007eda0(local_8);
  if (iVar7 == 0) {
    param_1[6] = 0;
    iVar6 = -0x7dfefbf5;
  }
  if (-1 < iVar6) {
    iVar6 = FUN_1006dff0(*param_1,param_1 + 5,iVar7,iVar8,param_1[8],param_1[9]);
    if (-1 < iVar6) {
      if (iStack_4 < iVar1) {
        param_1[6] = iStack_4;
        FUN_1007ed70(local_8);
        return iVar6;
      }
      param_1[6] = iVar1;
    }
  }
  FUN_1007ed70(local_8);
  return iVar6;
}



/* ===== FUN_10073760 @ 10073760  size=365 ===== */
// calls: _wassert, GetShortPathNameA, strlen, strcpy, tolower
// strings:
//   u"..\\..\\..\\..\\..\\lib_src\\pal\\tipc.c"
//   u"a_pszBuff && a_pszPath && a_iBuff>0"

/* [RE-AUTO c0]
   calls: _wassert, GetShortPathNameA, strlen, strcpy, tolower
   strings:
     "u"..\\..\\..\\..\\..\\lib_src\\pal\\tipc.c""
     "u"a_pszBuff && a_pszPath && a_iBuff>0"" */

undefined4 FUN_10073760(char *param_1,uint param_2,LPCSTR param_3,char *param_4)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;
  bool bVar4;
  size_t local_1c;
  char *local_14;
  DWORD local_10;
  int local_8;
  
  if (((param_1 == (char *)0x0) || (param_3 == (LPCSTR)0x0)) || ((int)param_2 < 1)) {
    _wassert(u_a_pszBuff____a_pszPath____a_iBuf_11e225b0,u________________lib_src_pal_tipc__11e22568
             ,0x46);
  }
  *param_1 = '\0';
  local_10 = GetShortPathNameA(param_3,(LPSTR)0x0,0);
  bVar4 = local_10 == 0;
  if (bVar4) {
    local_10 = strlen(param_3);
  }
  if (local_10 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_4 == (char *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = strlen(param_4);
    }
    if (local_10 + local_1c < param_2) {
      if (param_4 == (char *)0x0) {
        local_14 = param_1;
      }
      else {
        strcpy(param_1,param_4);
        local_14 = param_1 + local_1c;
      }
      if (bVar4) {
        strcpy(local_14,param_3);
      }
      else {
        DVar2 = GetShortPathNameA(param_3,local_14,param_2 - local_1c);
        if (DVar2 == 0) {
          return 0xffffffff;
        }
      }
      for (local_8 = 0; local_14[local_8] != '\0'; local_8 = local_8 + 1) {
        if (local_14[local_8] == '\\') {
          local_14[local_8] = '_';
        }
        else {
          iVar3 = tolower((int)local_14[local_8]);
          local_14[local_8] = (char)iVar3;
        }
      }
      local_14[local_8] = '\0';
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_100f74f0 @ 100f74f0  size=1017 ===== */
// calls: memset, GetVersionExA, GetModuleHandleA, GetProcAddress, GetSystemInfo, GetSystemMetrics, printf
// strings:
//   "GetNativeSystemInfo"
//   "kernel32.dll"
//   "Microsoft "
//   "Windows Vista "
//   "Windows Server 2008 "
//   "Windows 7 "
//   "Windows Server 2008 R2 "
//   "GetProductInfo"
//   "Windows Server 2003 R2, "
//   "Windows Storage Server 2003"
//   "Windows Home Server"
//   "Windows XP Professional x64 Edition"
//   "Windows Server 2003, "
//   "Datacenter Edition for Itanium-based Systems"
//   "Enterprise Edition for Itanium-based Systems"
//   "Datacenter x64 Edition"
//   "Enterprise x64 Edition"
//   "Standard x64 Edition"
//   "Compute Cluster Edition"
//   "Datacenter Edition"

/* [RE-AUTO c0]
   calls: memset, GetVersionExA, GetModuleHandleA, GetProcAddress, GetSystemInfo, GetSystemMetrics,
   printf
   strings:
     ""GetNativeSystemInfo""
     ""kernel32.dll""
     ""Microsoft ""
     ""Windows Vista ""
     ""Windows Server 2008 ""
     ""Windows 7 ""
     ""Windows Server 2008 R2 ""
     ""GetProductInfo""
     ""Windows Server 2003 R2, ""
     ""Windows Storage Server 2003"" */

void FUN_100f74f0(void)

{
  char cVar1;
  BOOL BVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  CHAR *pCVar6;
  char *pcVar7;
  _union_530 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 local_f8;
  _OSVERSIONINFOA local_f4;
  undefined4 local_5c;
  undefined1 local_58 [80];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_fc = 0;
  local_11c.dwOemId = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  memset(&local_f4,0,0x9c);
  local_f4.dwOSVersionInfoSize = 0x9c;
  BVar2 = GetVersionExA(&local_f4);
  if (BVar2 != 1) goto LAB_100f7937;
  pcVar7 = "GetNativeSystemInfo";
  pHVar3 = GetModuleHandleA("kernel32.dll");
  pFVar4 = GetProcAddress(pHVar3,pcVar7);
  if (pFVar4 == (FARPROC)0x0) {
    GetSystemInfo((LPSYSTEM_INFO)&local_11c.s);
  }
  else {
    (*pFVar4)(&local_11c);
  }
  if ((local_f4.dwPlatformId != 2) || (local_f4.dwMajorVersion < 5)) {
    printf("This sample does not support this version of Windows.\n");
    FUN_11a89daa();
    return;
  }
  FUN_100eb740("Microsoft ");
  if (local_f4.dwMajorVersion == 6) {
    if (local_f4.dwMinorVersion == 0) {
      if (local_5c._2_1_ == '\x01') {
        pcVar7 = "Windows Vista ";
      }
      else {
        pcVar7 = "Windows Server 2008 ";
      }
      FUN_100eb9a0(pcVar7);
    }
    if (local_f4.dwMinorVersion == 1) {
      if (local_5c._2_1_ == '\x01') {
        pcVar7 = "Windows 7 ";
      }
      else {
        pcVar7 = "Windows Server 2008 R2 ";
      }
      FUN_100eb9a0(pcVar7);
    }
    pcVar7 = "GetProductInfo";
    pHVar3 = GetModuleHandleA("kernel32.dll");
    pFVar4 = GetProcAddress(pHVar3,pcVar7);
    (*pFVar4)(local_f4.dwMajorVersion,local_f4.dwMinorVersion,0,0,&local_f8);
    switch(local_f8) {
    case 1:
      pcVar7 = "Ultimate Edition";
      break;
    case 2:
      pcVar7 = "Home Basic Edition";
      break;
    case 3:
      pcVar7 = "Home Premium Edition";
      break;
    case 4:
    case 10:
      pcVar7 = "Enterprise Edition";
      break;
    default:
      goto LAB_100f76e1;
    case 6:
      pcVar7 = "Business Edition";
      break;
    case 7:
      pcVar7 = "Standard Edition";
      break;
    case 8:
      pcVar7 = "Datacenter Edition";
      break;
    case 9:
      pcVar7 = "Small Business Server";
      break;
    case 0xb:
      pcVar7 = "Starter Edition";
      break;
    case 0xc:
      pcVar7 = "Datacenter Edition (core installation)";
      break;
    case 0xd:
      pcVar7 = "Standard Edition (core installation)";
      break;
    case 0xe:
      pcVar7 = "Enterprise Edition (core installation)";
      break;
    case 0xf:
      pcVar7 = "Enterprise Edition for Itanium-based Systems";
      break;
    case 0x11:
      pcVar7 = "Web Server Edition";
      break;
    case 0x12:
      pcVar7 = "Cluster Server Edition";
      break;
    case 0x19:
      pcVar7 = "Small Business Server Premium Edition";
      break;
    case 0x30:
      pcVar7 = "Professional";
    }
    FUN_100eb9a0(pcVar7);
  }
LAB_100f76e1:
  if (local_f4.dwMajorVersion == 5) {
    if (local_f4.dwMinorVersion == 2) {
      iVar5 = GetSystemMetrics(0x59);
      if (iVar5 == 0) {
        if ((local_5c & 0x2000) == 0) {
          if ((local_5c & 0x8000) == 0) {
            if ((local_5c._2_1_ == '\x01') && (local_11c.s.wProcessorArchitecture == 9)) {
              pcVar7 = "Windows XP Professional x64 Edition";
            }
            else {
              pcVar7 = "Windows Server 2003, ";
            }
          }
          else {
            pcVar7 = "Windows Home Server";
          }
        }
        else {
          pcVar7 = "Windows Storage Server 2003";
        }
      }
      else {
        pcVar7 = "Windows Server 2003 R2, ";
      }
      FUN_100eb9a0(pcVar7);
      if (local_5c._2_1_ != '\x01') {
        cVar1 = (char)local_5c;
        if (local_11c.s.wProcessorArchitecture == 6) {
          if (cVar1 < '\0') {
            pcVar7 = "Datacenter Edition for Itanium-based Systems";
          }
          else {
            if ((local_5c & 2) == 0) goto LAB_100f77f5;
            pcVar7 = "Enterprise Edition for Itanium-based Systems";
          }
        }
        else if (local_11c.s.wProcessorArchitecture == 9) {
          if (cVar1 < '\0') {
            pcVar7 = "Datacenter x64 Edition";
          }
          else if ((local_5c & 2) == 0) {
            pcVar7 = "Standard x64 Edition";
          }
          else {
            pcVar7 = "Enterprise x64 Edition";
          }
        }
        else if ((local_5c & 0x4000) == 0) {
          if (cVar1 < '\0') {
            pcVar7 = "Datacenter Edition";
          }
          else if ((local_5c & 2) == 0) {
            if ((local_5c & 0x400) == 0) {
              pcVar7 = "Standard Edition";
            }
            else {
              pcVar7 = "Web Edition";
            }
          }
          else {
            pcVar7 = "Enterprise Edition";
          }
        }
        else {
          pcVar7 = "Compute Cluster Edition";
        }
        FUN_100eb9a0(pcVar7);
      }
LAB_100f77f5:
      if (local_f4.dwMajorVersion != 5) goto LAB_100f7897;
    }
    if (local_f4.dwMinorVersion == 1) {
      FUN_100eb9a0("Windows XP ");
      if ((local_5c & 0x200) == 0) {
        pcVar7 = "Professional";
      }
      else {
        pcVar7 = "Home Edition";
      }
      FUN_100eb9a0(pcVar7);
      if (local_f4.dwMajorVersion != 5) goto LAB_100f7897;
    }
    if (local_f4.dwMinorVersion == 0) {
      FUN_100eb9a0("Windows 2000 ");
      if (local_5c._2_1_ == '\x01') {
        pcVar7 = "Professional";
      }
      else if ((char)local_5c < '\0') {
        pcVar7 = "Datacenter Server";
      }
      else if ((local_5c & 2) == 0) {
        pcVar7 = "Server";
      }
      else {
        pcVar7 = "Advanced Server";
      }
      FUN_100eb9a0(pcVar7);
    }
  }
LAB_100f7897:
  pCVar6 = local_f4.szCSDVersion;
  do {
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  if (pCVar6 != local_f4.szCSDVersion + 1) {
    FUN_100eb9a0(&DAT_11d9e07c);
    FUN_100eb9a0(local_f4.szCSDVersion);
  }
  FUN_100f6fe0(local_58,0x50," (Version %d.%d, build %d)",local_f4.dwMajorVersion,
               local_f4.dwMinorVersion,local_f4.dwBuildNumber);
  FUN_100eb9a0(local_58);
  if (5 < local_f4.dwMajorVersion) {
    if (local_11c.s.wProcessorArchitecture == 9) {
      pcVar7 = ", 64-bit";
    }
    else {
      if (local_11c.s.wProcessorArchitecture != 0) goto LAB_100f7937;
      pcVar7 = ", 32-bit";
    }
    FUN_100eb9a0(pcVar7);
  }
LAB_100f7937:
  FUN_11a89daa();
  return;
}



/* ===== FUN_100f8d60 @ 100f8d60  size=108 ===== */
// calls: _vsnprintf, WriteFile
// strings:
//   "vsnprintf error, exceed the buffer count\r\n"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: _vsnprintf, WriteFile
   strings:
     ""vsnprintf error, exceed the buffer count\r\n"" */

void FUN_100f8d60(char *param_1)

{
  _DAT_123bd5d8 = &stack0x00000008;
  _DAT_123bd5d4 = _vsnprintf(&DAT_123c1b00,0xfff,param_1,_DAT_123bd5d8);
  DAT_123c2aff = 0;
  _DAT_123bd5d8 = (va_list)0x0;
  if (0 < (int)_DAT_123bd5d4) {
    WriteFile(DAT_123ba71c,&DAT_123c1b00,_DAT_123bd5d4,(LPDWORD)&DAT_123bd5d0,(LPOVERLAPPED)0x0);
    return;
  }
  WriteFile(DAT_123ba71c,"vsnprintf error, exceed the buffer count\r\n",0x2a,(LPDWORD)&DAT_123bd5d0,
            (LPOVERLAPPED)0x0);
  return;
}



/* ===== FUN_100fa1d0 @ 100fa1d0  size=458 ===== */
// calls: GetCurrentProcessId, CreateMutexA, GetLastError, WaitForSingleObject, CreateFileMappingA, ReleaseMutex, MapViewOfFile
// strings:
//   "Local\\GloablVarBuffer_PID_%u_Mutex"
//   "Local\\GloablVarBuffer_PID_%u"

/* [RE-AUTO c0]
   calls: GetCurrentProcessId, CreateMutexA, GetLastError, WaitForSingleObject, CreateFileMappingA,
   ReleaseMutex, MapViewOfFile
   strings:
     ""Local\\GloablVarBuffer_PID_%u_Mutex""
     ""Local\\GloablVarBuffer_PID_%u"" */

void FUN_100fa1d0(void)

{
  bool bVar1;
  DWORD DVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  CHAR local_408 [1024];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  DVar2 = GetCurrentProcessId();
  FUN_100ec390(local_408,0x400,"Local\\GloablVarBuffer_PID_%u_Mutex",DVar2);
  DAT_123c2b0c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,local_408);
  if (DAT_123c2b0c != (HANDLE)0x0) {
    DVar3 = GetLastError();
    if (DVar3 == 5) {
LAB_100fa38b:
      FUN_11a89daa();
      return;
    }
    if ((DVar3 != 0xb7) || (DVar3 = WaitForSingleObject(DAT_123c2b0c,0xffffffff), DVar3 == 0)) {
      FUN_100ec390(local_408,0x400,"Local\\GloablVarBuffer_PID_%u",DVar2);
      DAT_123c2b08 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,0xffff,
                                        local_408);
      if (DAT_123c2b08 != (HANDLE)0x0) {
        bVar1 = false;
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          if (DVar2 == 6) {
            DAT_123c2b08 = (HANDLE)0x0;
            if (DAT_123c2b0c != (HANDLE)0x0) {
              ReleaseMutex(DAT_123c2b0c);
            }
            FUN_100fa3a0();
            FUN_11a89daa();
            return;
          }
          if (DVar2 != 0xb7) {
            DAT_123c2b08 = (HANDLE)0x0;
            if (DAT_123c2b0c != (HANDLE)0x0) {
              ReleaseMutex(DAT_123c2b0c);
            }
            FUN_100fa3a0();
            FUN_11a89daa();
            return;
          }
          bVar1 = true;
        }
        pvVar4 = MapViewOfFile(DAT_123c2b08,0xf001f,0,0,0xffff);
        if (pvVar4 == (LPVOID)0x0) {
          if (DAT_123c2b0c != (HANDLE)0x0) {
            ReleaseMutex(DAT_123c2b0c);
          }
          FUN_100fa3a0();
          FUN_11a89daa();
          return;
        }
        DAT_123c2b04 = pvVar4;
        if (bVar1) {
          *(int *)((int)pvVar4 + 4) = *(int *)((int)pvVar4 + 4) + 1;
        }
        else {
          FUN_100f9e40();
        }
        if (DAT_123c2b0c != (HANDLE)0x0) {
          ReleaseMutex(DAT_123c2b0c);
        }
        goto LAB_100fa38b;
      }
      if (DAT_123c2b0c != (HANDLE)0x0) {
        ReleaseMutex(DAT_123c2b0c);
      }
    }
  }
  FUN_100fa3a0();
  FUN_11a89daa();
  return;
}



/* ===== FUN_101106b0 @ 101106b0  size=272 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[itemId]"
//   "[itemType]"
//   "[targetPos]"
//   "0x%02x"
//   "[posColumn]"
//   "[posGrid]"
//   "[skillBeadsInfo]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[itemId]""
     ""[itemType]""
     ""[targetPos]""
     ""0x%02x""
     ""[posColumn]""
     ""[posGrid]""
     ""[skillBeadsInfo]"" */

void __thiscall FUN_101106b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  uint uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[itemId]","%I64u",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[itemType]",&DAT_11d9e0b4,param_1[2]),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[targetPos]",&DAT_11d9e0b4,param_1[3]),
      iVar1 == 0)) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[posColumn]","0x%02x",
                                   *(undefined1 *)(param_1 + 4)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[posGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)((int)param_1 + 0x11)), iVar1 == 0)))) {
    uVar3 = 0;
    uVar2 = extraout_ECX;
    while (iVar1 = TdrText_ArrayElemLabel(param_4,"[skillBeadsInfo]",uVar3,uVar2), iVar1 == 0) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_1010fbe0(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      uVar2 = extraout_ECX_00;
      if (2 < uVar3) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_10127c60 @ 10127c60  size=222 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[skill]"
//   "[level]"

/* [RE-AUTO c0]
   strings:
     ""[skill]""
     ""[level]"" */

int __thiscall
FUN_10127c60(short *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c67248;
  local_10 = ExceptionList;
  uVar1 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    return -0x13;
  }
  local_20 = param_2;
  local_14 = '\0';
  local_1c = 0;
  local_18 = param_3;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[skill]",&DAT_11d9e0b4,(int)*param_1,uVar1)
  ;
  if (iVar2 == 0) {
    iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[level]",&DAT_11d9e0b4,(char)param_1[1],
                                uVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_1c;
  }
  if (local_14 != '\0') {
    FUN_10c3da30(local_20);
  }
  ExceptionList = local_10;
  return iVar2;
}



/* ===== FUN_10127d40 @ 10127d40  size=78 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[skill]"
//   "[level]"

/* [RE-AUTO c0]
   strings:
     ""[skill]""
     ""[level]"" */

void __thiscall
FUN_10127d40(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[skill]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,(char)param_1[1]);
  }
  return;
}



/* ===== FUN_10189710 @ 10189710  size=326 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[skillGroup]"
//   "[leftEditCnt]"
//   "0x%02x"
//   "[skillCnt]"
//   "[skillID]"
//   "[actFlag]"
//   " 0x%02x"

/* [RE-AUTO c0]
   strings:
     ""[skillGroup]""
     ""[leftEditCnt]""
     ""0x%02x""
     ""[skillCnt]""
     ""[skillID]""
     ""[actFlag]""
     "" 0x%02x"" */

int __thiscall
FUN_10189710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte bVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[skillGroup]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[leftEditCnt]",&DAT_11d9e0b4,param_1[1])
      , iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[skillCnt]","0x%02x",
                                  *(undefined1 *)(param_1 + 2)), iVar1 == 0)) {
    if (0xb4 < *(byte *)(param_1 + 2)) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[skillID]",*(byte *)(param_1 + 2),0);
    if (iVar1 == 0) {
      bVar2 = 0;
      if (*(char *)(param_1 + 2) != '\0') {
        do {
          iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                               *(undefined4 *)((int)param_1 + (uint)bVar2 * 4 + 9));
          if (iVar1 != 0) {
            return iVar1;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *(byte *)(param_1 + 2));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        if (0xb4 < *(byte *)(param_1 + 2)) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[actFlag]",*(byte *)(param_1 + 2),0);
        if (iVar1 == 0) {
          bVar2 = 0;
          if (*(char *)(param_1 + 2) != '\0') {
            do {
              iVar1 = FUN_1010c010(param_2," 0x%02x",*(undefined1 *)(bVar2 + 0x2d9 + (int)param_1));
              if (iVar1 != 0) {
                return iVar1;
              }
              bVar2 = bVar2 + 1;
            } while (bVar2 < *(byte *)(param_1 + 2));
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1019fe20 @ 1019fe20  size=299 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[quality]"
//   "[character]"
//   "[atkTarget]"
//   "[atkMode]"
//   "[name]"
//   "[skin]"
//   "[supportSkill]"
//   "[randType]"

/* [RE-AUTO c0]
   strings:
     ""[quality]""
     ""[character]""
     ""[atkTarget]""
     ""[atkMode]""
     ""[name]""
     ""[skin]""
     ""[supportSkill]""
     ""[randType]"" */

void __thiscall
FUN_1019fe20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11d9faa0,&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[quality]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[character]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[atkTarget]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[atkMode]",&DAT_11d9e0b4,param_1[4]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldValueFmt(param_4,"[name]",param_1 + 5);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[skin]",&DAT_11d9e0b4,
                                          param_1[0xd]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[supportSkill]",&DAT_11d9e0b4,
                                            param_1[0xe]);
                if (iVar1 == 0) {
                  TdrText_FieldScalar(param_2,param_3,param_4,"[randType]",&DAT_11d9e0b4,
                                      param_1[0xf]);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_101a5dd0 @ 101a5dd0  size=1311 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel, TdrText_FieldLabelChar, TlvSkillAndSlotList_DebugFormat, TlvSkillList_DebugFormat
// strings:
//   "0x%02x"
//   "[idx]"
//   "[uId]"
//   "[name]"
//   "[desc]"
//   "[sex]"
//   "[state]"
//   "[level]"
//   "[exp]"
//   "[loyal]"
//   "[potential]"
//   "[spirit]"
//   "[vigour]"
//   "[supportSkill]"
//   "[giftSkill]"
//   "[rename]"
//   "[groupNum]"
//   "[groupExp]"
//   "[potentialNum]"
//   "[potentialValue]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[idx]""
     ""[uId]""
     ""[name]""
     ""[desc]""
     ""[sex]""
     ""[state]""
     ""[level]""
     ""[exp]""
     ""[loyal]"" */

int __thiscall FUN_101a5dd0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[idx]","0x%02x",(int)*param_1);
  if ((((((((iVar3 == 0) &&
           (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[uId]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 1)), iVar3 == 0)) &&
          (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11d9faa0,&DAT_11d9e0b4,
                                       *(undefined4 *)(param_1 + 5)), iVar3 == 0)) &&
         ((iVar3 = TdrText_FieldValueFmt(param_4,"[name]",param_1 + 9), iVar3 == 0 &&
          (iVar3 = TdrText_FieldValueFmt(param_4,"[desc]",param_1 + 0x29), iVar3 == 0)))) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[sex]","0x%02x",(int)param_1[0x49]),
        iVar3 == 0)) &&
       (((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[state]","0x%02x",(int)param_1[0x4a])
         , iVar3 == 0 &&
         (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 0x4b)), iVar3 == 0)) &&
        ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[exp]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 0x4f)), iVar3 == 0 &&
         (((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[loyal]",&DAT_11d9e0b4,
                                        (int)*(short *)(param_1 + 0x53)), iVar3 == 0 &&
           (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[potential]",&DAT_11d9e0b4,
                                        (int)*(short *)(param_1 + 0x55)), iVar3 == 0)) &&
          (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[spirit]",&DAT_11d9e0b4,
                                       (int)*(short *)(param_1 + 0x57)), iVar3 == 0)))))))) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[vigour]",&DAT_11d9e0b4,
                                    (int)*(short *)(param_1 + 0x59)), iVar3 == 0 &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[supportSkill]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x5b)), iVar3 == 0)))) &&
     ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[giftSkill]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0x5f)), iVar3 == 0 &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[rename]","0x%02x",(int)param_1[99]),
       iVar3 == 0 &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[groupNum]",&DAT_11d9e0b4,
                                    (int)*(short *)(param_1 + 100)), iVar3 == 0)))))) {
    uVar1 = *(ushort *)(param_1 + 100);
    uVar4 = (uint)uVar1;
    if ((short)uVar1 < 0) {
      return -6;
    }
    if (0x46 < (short)uVar1) {
      return -7;
    }
    sVar2 = 0;
    if (0 < (short)uVar1) {
      do {
        iVar3 = TdrText_ArrayElemLabel(param_4,"[groupExp]",(int)sVar2,uVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_1019e530(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        sVar2 = sVar2 + 1;
        uVar4 = extraout_ECX;
      } while (sVar2 < *(short *)(param_1 + 100));
    }
    iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[potentialNum]",&DAT_11d9e0b4,
                                (int)*(short *)(param_1 + 0x2dc));
    if (iVar3 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x2dc);
      uVar4 = (uint)uVar1;
      if ((short)uVar1 < 0) {
        return -6;
      }
      if (10 < (short)uVar1) {
        return -7;
      }
      sVar2 = 0;
      if (0 < (short)uVar1) {
        do {
          iVar3 = TdrText_ArrayElemLabel(param_4,"[potentialValue]",(int)sVar2,uVar4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_1019eba0(param_2,iVar3,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          sVar2 = sVar2 + 1;
          uVar4 = extraout_ECX_00;
        } while (sVar2 < *(short *)(param_1 + 0x2dc));
      }
      iVar3 = TdrText_FieldLabelChar(param_4,"[train]",uVar4);
      if (iVar3 == 0) {
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = FUN_1019f260(param_2,iVar3,param_4);
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldLabelChar(param_4,"[rngAttrs]",extraout_ECX_01), iVar3 == 0)) {
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_1019fe20(param_2,iVar3,param_4);
          if (((iVar3 == 0) &&
              (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[talkStyle]","0x%02x",
                                           param_1[0x38f]), iVar3 == 0)) &&
             (iVar3 = TdrText_FieldLabelChar(param_4,"[equipSkills]",extraout_ECX_02), iVar3 == 0))
          {
            iVar3 = param_3;
            if (-1 < param_3) {
              iVar3 = param_3 + 1;
            }
            iVar3 = TlvSkillAndSlotList_DebugFormat(param_2,iVar3,param_4);
            if (((iVar3 == 0) &&
                (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,&DAT_11da22dc,&DAT_11da0cf4,
                                             (double)*(float *)(param_1 + 0x488)), iVar3 == 0)) &&
               (iVar3 = TdrText_FieldLabelChar(param_4,"[waitSkills]",extraout_ECX_03), iVar3 == 0))
            {
              iVar3 = param_3;
              if (-1 < param_3) {
                iVar3 = param_3 + 1;
              }
              iVar3 = TlvSkillList_DebugFormat(param_2,CONCAT44(param_4,iVar3));
              if ((iVar3 == 0) &&
                 (iVar3 = TdrText_FieldLabelChar(param_4,"[growHigherCat]",extraout_ECX_04),
                 iVar3 == 0)) {
                if (param_3 < 0) {
                  iVar3 = FUN_101a39d0(param_2,param_3,param_4);
                  return iVar3;
                }
                iVar3 = FUN_101a39d0(param_2,param_3 + 1,param_4);
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_101fcbe0 @ 101fcbe0  size=474 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[buffId]"
//   "[uID]"
//   "[ownerId]"
//   "[retainTime]"
//   "[expireTime]"
//   "[count]"
//   "[stack]"
//   "[from]"
//   "[effectNum]"
//   "[effectData]"

/* [RE-AUTO c0]
   strings:
     ""[buffId]""
     ""[uID]""
     ""[ownerId]""
     ""[retainTime]""
     ""[expireTime]""
     ""[count]""
     ""[stack]""
     ""[from]""
     ""[effectNum]""
     ""[effectData]"" */

int __thiscall FUN_101fcbe0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  short sVar4;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[buffId]",&DAT_11d9e0b4,*param_1);
  if ((((((iVar2 == 0) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[uID]",&DAT_11d9e0b4,param_1[1]),
         iVar2 == 0)) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ownerId]",&DAT_11d9e0b4,param_1[2]),
        iVar2 == 0)) &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[retainTime]",&DAT_11d9e0b4,param_1[3]
                                    ), iVar2 == 0 &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[expireTime]",&DAT_11d9e0b4,param_1[4]
                                    ), iVar2 == 0)))) &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,
                                    (int)*(short *)(param_1 + 5)), iVar2 == 0 &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[stack]",&DAT_11d9e0b4,
                                     (int)*(short *)((int)param_1 + 0x16)), iVar2 == 0 &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[from]",&DAT_11d9e0b4,
                                     (int)*(short *)(param_1 + 6)), iVar2 == 0)))))) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[effectNum]",&DAT_11d9e0b4,
                                  (int)*(short *)((int)param_1 + 0x1a)), iVar2 == 0)) {
    sVar1 = *(short *)((int)param_1 + 0x1a);
    if (sVar1 < 0) {
      return -6;
    }
    if (10 < sVar1) {
      return -7;
    }
    uVar3 = 0;
    sVar4 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[effectData]",(int)sVar4,uVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_101fbd20(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar4 = sVar4 + 1;
        uVar3 = extraout_ECX;
      } while (sVar4 < *(short *)((int)param_1 + 0x1a));
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_10256190 @ 10256190  size=3239 ===== */
// strings:
//   "E_BT_Monster_Abnormal_Paralysis"
//   "E_BT_Monster_Abnormal_Traped"
//   "E_BT_Monster_Abnormal_Poison"
//   "E_BT_Monster_Abnormal_Stun"
//   "E_BT_Monster_Abnormal_Flare"
//   "E_BT_Monster_Abnormal_SonicGranade"
//   "E_BT_Monster_Abnormal_Poo"
//   "E_BT_Monster_Abnormal_Marked"
//   "E_BT_Monster_Abnormal_Slivervine"
//   "E_BT_Monster_Abnormal_Sleep"
//   "E_BT_Monster_Abnormal_Balance"
//   "E_BT_Monster_Abnormal_Falldown"
//   "E_BT_Monster_Abnormal_PartBreak"
//   "E_BT_Monster_Abnormal_TailBreak"
//   "E_BT_Monster_Abnormal_CrazyRun"
//   "E_BT_Monster_Abnormal_FireFall"
//   "E_BT_Monster_Abnormal_Stuck"
//   "E_BT_Monster_Abnormal_Anethesia"
//   "E_BT_Monster_Abnormal_ParalysisTrap"
//   "E_BT_Monster_Abnormal_AdvancedTrap"

/* [RE-AUTO c0]
   strings:
     ""E_BT_Monster_Abnormal_Paralysis""
     ""E_BT_Monster_Abnormal_Traped""
     ""E_BT_Monster_Abnormal_Poison""
     ""E_BT_Monster_Abnormal_Stun""
     ""E_BT_Monster_Abnormal_Flare""
     ""E_BT_Monster_Abnormal_SonicGranade""
     ""E_BT_Monster_Abnormal_Poo""
     ""E_BT_Monster_Abnormal_Marked""
     ""E_BT_Monster_Abnormal_Slivervine""
     ""E_BT_Monster_Abnormal_Sleep"" */

undefined4 * __fastcall FUN_10256190(undefined4 *param_1)

{
  undefined1 local_5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1;
  param_1[3] = param_1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = local_5;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_10256e40(0x8b4,"E_BT_Monster_Abnormal_Paralysis");
  FUN_10256e40(0x8b5,"E_BT_Monster_Abnormal_Traped");
  FUN_10256e40(0x8b6,"E_BT_Monster_Abnormal_Poison");
  FUN_10256e40(0x8b7,"E_BT_Monster_Abnormal_Stun");
  FUN_10256e40(0x8b8,"E_BT_Monster_Abnormal_Flare");
  FUN_10256e40(0x8b9,"E_BT_Monster_Abnormal_SonicGranade");
  FUN_10256e40(0x8ba,"E_BT_Monster_Abnormal_Poo");
  FUN_10256e40(0x8bb,"E_BT_Monster_Abnormal_Marked");
  FUN_10256e40(0x8bc,"E_BT_Monster_Abnormal_Slivervine");
  FUN_10256e40(0x8bd,"E_BT_Monster_Abnormal_Sleep");
  FUN_10256e40(0x8be,"E_BT_Monster_Abnormal_Balance");
  FUN_10256e40(0x8bf,"E_BT_Monster_Abnormal_Falldown");
  FUN_10256e40(0x8c0,"E_BT_Monster_Abnormal_PartBreak");
  FUN_10256e40(0x8c1,"E_BT_Monster_Abnormal_TailBreak");
  FUN_10256e40(0x8c2,"E_BT_Monster_Abnormal_CrazyRun");
  FUN_10256e40(0x8c3,"E_BT_Monster_Abnormal_FireFall");
  FUN_10256e40(0x8c4,"E_BT_Monster_Abnormal_Stuck");
  FUN_10256e40(0x8c6,"E_BT_Monster_Abnormal_Anethesia");
  FUN_10256e40(0x8c7,"E_BT_Monster_Abnormal_ParalysisTrap");
  FUN_10256e40(0x8c8,"E_BT_Monster_Abnormal_AdvancedTrap");
  FUN_10256e40(0x8c9,"E_BT_Monster_Abnormal_WindPressure");
  FUN_10256e40(0x8ca,"E_BT_Monster_Abnormal_DragonWindPressure");
  FUN_10256e40(0x8cb,"E_BT_Monster_Abnormal_Quake");
  FUN_10256e40(0x8cc,"E_BT_Monster_Abnormal_Roar");
  FUN_10256e40(0x8cd,"E_BT_Monster_Abnormal_Paralyse");
  FUN_10256e40(0x8ce,"E_BT_Monster_Abnormal_Snowman");
  FUN_10256e40(0x8cf,"E_BT_Monster_Abnormal_Exhaust");
  FUN_10256e40(0x8d0,"E_BT_Monster_Abnormal_Piyo");
  FUN_10256e40(0x8d1,"E_BT_Monster_Abnormal_Scare");
  FUN_10256e40(0x8d2,"E_BT_Monster_Abnormal_Bound");
  FUN_10256e40(0x8d3,"E_BT_Monster_Abnormal_Carry");
  FUN_10256e40(0x8d4,"E_BT_Monster_Abnormal_Haze");
  FUN_10256e40(0x8d5,"E_BT_Monster_Abnormal_Sink");
  FUN_10256e40(0x8d6,"E_BT_Monster_Abnormal_Paralysis_End");
  FUN_10256e40(0x8d7,"E_BT_Monster_Abnormal_Traped_End");
  FUN_10256e40(0x8d8,"E_BT_Monster_Abnormal_Poison_End");
  FUN_10256e40(0x8d9,"E_BT_Monster_Abnormal_Stun_End");
  FUN_10256e40(0x8da,"E_BT_Monster_Abnormal_Flare_End");
  FUN_10256e40(0x8db,"E_BT_Monster_Abnormal_SonicGranade_End");
  FUN_10256e40(0x8dc,"E_BT_Monster_Abnormal_Poo_End");
  FUN_10256e40(0x8dd,"E_BT_Monster_Abnormal_Marked_End");
  FUN_10256e40(0x8de,"E_BT_Monster_Abnormal_Slivervine_End");
  FUN_10256e40(0x8df,"E_BT_Monster_Abnormal_Sleep_End");
  FUN_10256e40(0x8e0,"E_BT_Monster_Abnormal_Balance_End");
  FUN_10256e40(0x8e1,"E_BT_Monster_Abnormal_Falldown_End");
  FUN_10256e40(0x8e2,"E_BT_Monster_Abnormal_PartBreak_End");
  FUN_10256e40(0x8e3,"E_BT_Monster_Abnormal_TailBreak_End");
  FUN_10256e40(0x8e4,"E_BT_Monster_Abnormal_CrazyRun_End");
  FUN_10256e40(0x8e5,"E_BT_Monster_Abnormal_FireFall_End");
  FUN_10256e40(0x8e6,"E_BT_Monster_Abnormal_Stuck_End");
  FUN_10256e40(0x8e8,"E_BT_Monster_Abnormal_Anethesia_End");
  FUN_10256e40(0x8e9,"E_BT_Monster_Abnormal_ParalysisTrap_End");
  FUN_10256e40(0x8ea,"E_BT_Monster_Abnormal_AdvancedTrap_End");
  FUN_10256e40(0x8eb,"E_BT_Monster_Abnormal_WindPressure_End");
  FUN_10256e40(0x8ec,"E_BT_Monster_Abnormal_DragonWindPressure_End");
  FUN_10256e40(0x8ed,"E_BT_Monster_Abnormal_Quake_End");
  FUN_10256e40(0x8ee,"E_BT_Monster_Abnormal_Roar_End");
  FUN_10256e40(0x8ef,"E_BT_Monster_Abnormal_Paralyse_End");
  FUN_10256e40(0x8f0,"E_BT_Monster_Abnormal_Snowman_End");
  FUN_10256e40(0x8f1,"E_BT_Monster_Abnormal_Exhaust_End");
  FUN_10256e40(0x8f2,"E_BT_Monster_Abnormal_Piyo_End");
  FUN_10256e40(0x8f3,"E_BT_Monster_Abnormal_Scare_End");
  FUN_10256e40(0x8f4,"E_BT_Monster_Abnormal_Bound_End");
  FUN_10256e40(0x8f5,"E_BT_Monster_Abnormal_Carry_End");
  FUN_10256e40(0x8f6,"E_BT_Monster_Abnormal_Haze_End");
  FUN_10256e40(0x8f7,"E_BT_Monster_Abnormal_Sink_End");
  FUN_10256e40(0x89e,"E_EVTTYPE_BT_DAMAGE_EVENT");
  FUN_10256e40(0x89f,"E_EVTTYPE_BT_TRAP");
  FUN_10256e40(0x8a0,"E_EVTTYPE_BT_PARARYSIS_TRAP");
  FUN_10256e40(0x8a1,"E_EVTTYPE_BT_PARARYSIS");
  FUN_10256e40(0x8a2,"E_EVTTYPE_BT_FLASH");
  FUN_10256e40(0x8a3,"E_EVTTYPE_BT_SONIC");
  FUN_10256e40(0x8a4,"E_EVTTYPE_BT_CATCH");
  FUN_10256e40(0x8a5,"E_EVTTYPE_BT_POOL");
  FUN_10256e40(0x8a6,"E_EVTTYPE_BT_ATTACKPLAYER");
  FUN_10256e40(0x8a7,"E_EVTTYPE_BT_ATTACKMONSTER");
  FUN_10256e40(0x8a8,"E_EVTTYPE_BT_INIT");
  FUN_10256e40(0x8a9,"E_EVTTYPE_BT_DESTROY");
  FUN_10256e40(0x8aa,"E_EVTTYPE_BT_GAME");
  FUN_10256e40(0x8ab,"E_EVTTYPE_BT_OnNoTarget");
  FUN_10256e40(0x8ac,"E_EVTTYPE_BT_OnInterestingSoundHeard");
  FUN_10256e40(0x8ad,"E_EVTTYPE_BT_OnThreateningSoundHeard");
  FUN_10256e40(0x8ae,"E_EVTTYPE_BT_OnSomethingSeen");
  FUN_10256e40(0x8af,"E_EVTTYPE_BT_OnEnemySeen");
  FUN_10256e40(0x8b0,"E_EVTTYPE_BT_COLLIDEWALL");
  FUN_10256e40(0x8b1,"E_EVTTYPE_BT_MOVETIMEOUT");
  FUN_10256e40(0x516,"E_EVTTYPE_MONSTER_HEALTH_LOW");
  FUN_10256e40(0x517,"E_EVTTYPE_MONSTER_DEAD");
  FUN_10256e40(0x518,"E_EVTTYPE_MONSTER_ATTR_THRESHOLD");
  FUN_10256e40(0x519,"E_EVTTYPE_MONSTER_PART_BREAK");
  FUN_10256e40(0x51b,"E_EVTTYPE_MONSTER_PART_BALANCE_LOST");
  FUN_10256e40(0x51c,"E_EVTTYPE_MONSTER_STATE_ABNORMAL");
  FUN_10256e40(0x51d,"E_EVTTYPE_MONSTER_STATE_ABNORMAL_END");
  FUN_10256e40(0x520,"E_EVTTYPE_MONSTER_ADD_THREAT");
  FUN_10256e40(0x521,"E_EVTTYPE_MONSTER_PART_FALLDOWN");
  FUN_10256e40(0x522,"E_EVTTYPE_MONSTER_PART_SCAR");
  FUN_10256e40(0x526,"E_EVTTYPE_MONSTER_LOSTBALANCE");
  FUN_10256e40(0x527,"E_EVTTYPE_MONSTER_HEALTH_REACH_CAPTURE");
  FUN_10256e40(0x528,"E_EVTTYPE_MONSTER_HEALTH_CHANGE");
  FUN_10256e40(0x529,"E_EVTTYPE_MONSTER_PET_TIMEOUT");
  FUN_10256e40(0x8f8,"E_BT_Master_Abnormalized");
  FUN_10256e40(0x8f9,"E_BT_Master_AbnormalizedEnd");
  FUN_10256e40(0x8fa,"E_BT_Master_Buffed");
  FUN_10256e40(0x8fb,"E_BT_Master_BuffedEnd");
  FUN_10256e40(0x8fc,"E_BT_Master_HitReactioned");
  FUN_10256e40(0x8fd,"E_BT_Master_DoAttack");
  FUN_10256e40(0x900,"E_BT_Master_DoDefense");
  FUN_10256e40(0x901,"E_BT_Master_DoDodge");
  FUN_10256e40(0x902,"E_BT_Master_DoUseItem");
  FUN_10256e40(0x903,"E_BT_Master_Died");
  FUN_10256e40(0x904,"E_BT_Master_SendCommand");
  FUN_10256e40(0x905,"E_BT_Master_EnterCombat");
  FUN_10256e40(0x906,"E_BT_Master_ExitCombat");
  FUN_10256e40(0x907,"E_BT_Master_StateChanged");
  FUN_10256e40(0x908,"E_BT_Master_DoStartMove");
  FUN_10256e40(0x909,"E_BT_Master_DoStopMove");
  FUN_10256e40(0x90a,"E_BT_GroupMember_Abnormalized");
  FUN_10256e40(0x90b,"E_BT_GroupMember_AbnormalizedEnd");
  FUN_10256e40(0x90c,"E_BT_GroupMember_Buffed");
  FUN_10256e40(0x90d,"E_BT_GroupMember_BuffedEnd");
  FUN_10256e40(0x90e,"E_BT_GroupMember_HitReactioned");
  FUN_10256e40(0x90f,"E_BT_GroupMember_DoAttack");
  FUN_10256e40(0x912,"E_BT_GroupMember_DoDefense");
  FUN_10256e40(0x913,"E_BT_GroupMember_DoDodge");
  FUN_10256e40(0x914,"E_BT_GroupMember_DoUseItem");
  FUN_10256e40(0x915,"E_BT_GroupMember_Died");
  FUN_10256e40(0x916,"E_BT_GroupMember_EnterCombat");
  FUN_10256e40(0x917,"E_BT_GroupMember_ExitCombat");
  FUN_10256e40(0x918,"E_BT_GroupMember_StateChanged");
  FUN_10256e40(0x919,"E_BT_AttentionTarget_Abnormalized");
  FUN_10256e40(0x91a,"E_BT_AttentionTarget_AbnormalizedEnd");
  FUN_10256e40(0x91b,"E_BT_AttentionTarget_Buffed");
  FUN_10256e40(0x91c,"E_BT_AttentionTarget_BuffedEnd");
  FUN_10256e40(0x91d,"E_BT_AttentionTarget_HitReactioned");
  FUN_10256e40(0x91e,"E_BT_AttentionTarget_DoAttack");
  FUN_10256e40(0x921,"E_BT_AttentionTarget_DoDefense");
  FUN_10256e40(0x922,"E_BT_AttentionTarget_DoDodge");
  FUN_10256e40(0x923,"E_BT_AttentionTarget_DoUseItem");
  FUN_10256e40(0x924,"E_BT_AttentionTarget_Died");
  FUN_10256e40(0x925,"E_BT_AttentionTarget_EnterCombat");
  FUN_10256e40(0x926,"E_BT_AttentionTarget_ExitCombat");
  FUN_10256e40(0x927,"E_BT_AttentionTarget_StateChanged");
  FUN_10256e40(0x928,"E_BT_AttentionTarget_DoStartMove");
  FUN_10256e40(0x929,"E_BT_AttentionTarget_DoStopMove");
  FUN_10256e40(0x92a,"E_BT_AttentionTarget_DoSomeAction");
  FUN_10256e40(0x92b,"E_BT_AttentionTarget_DoInterestingAction");
  FUN_10256e40(0x92c,"E_BT_AttentionTarget_DoFriendingAction");
  FUN_10256e40(0x92d,"E_BT_AttentionTarget_DoThreateningAction");
  FUN_10256e40(0x92e,"E_BT_SendFrom_FG");
  FUN_10256e40(0x930,"E_BT_SELF_FSM_STATE_CHANGE");
  FUN_10256e40(0x931,"E_BT_Inner_After_Abnormal");
  FUN_10256e40(0x933,"E_BT_SendFrom_UI");
  FUN_10256e40(0x934,"E_BT_QuestComplete");
  FUN_10256e40(0x935,"E_BT_QuestFail");
  FUN_10256e40(0x936,"E_BT_SKILL_HIT");
  FUN_10256e40(0x937,"E_BT_ENTER_ANGRY");
  FUN_10256e40(0x939,"E_BT_ENTER_LEMON");
  FUN_10256e40(0x93a,"E_BT_LEAVE_LEMON");
  FUN_10256e40(0x938,"E_BT_SMPET_Summon");
  FUN_10256e40(0x93b,"E_BT_PLAYER_INPUT");
  FUN_10256e40(0x93c,"E_BT_MONSTERCTRL_ACTION_CHANGED");
  FUN_10256e40(0x93d,"E_BT_MONSTERCTRL_ACTION_END");
  FUN_10256e40(0x93e,"E_BT_MONSTERCTRL_HIGH_FIGHT");
  FUN_10256e40(0x93f,"E_BT_MONSTERCTRL_LOW_FIGHT");
  FUN_10256e40(0x940,"E_BT_MONSTERCTRL_NORMAL_FIGHT");
  FUN_10256e40(0x941,"E_BT_MONSTERCTRL_LOW_POWER");
  FUN_10256e40(0x942,"E_BT_MONSTERCTRL_NORMAL_POWER");
  FUN_10256e40(0x943,"E_BT_MONSTERCTRL_MTM_MESSAGE");
  FUN_10256e40(0x944,"E_BT_3V3_FirstWin");
  FUN_10256e40(0x945,"E_BT_3V3_SecondWin");
  FUN_10256e40(0x946,"E_BT_MVM_FinalWin");
  FUN_10256e40(0x947,"E_BT_COOPERATION_ATTACK");
  FUN_10256e40(0x948,"E_BT_COOPERATION_ATTACK_END");
  FUN_10256e40(0x949,"E_BT_KEY_ATTR_CHANGE");
  FUN_10256e40(0x89c,"E_EVTTYPE_BT_COMMONAIBehaviorStart");
  FUN_10256e40(0x89d,"E_EVTTYPE_BT_COMMONAIBehaviorEnd");
  FUN_10256e40(0x94b,"E_BT_EMOTIONSTATE_NORMAL_START");
  FUN_10256e40(0x94c,"E_BT_EMOTIONSTATE_NORMAL_END");
  FUN_10256e40(0x94d,"E_BT_EMOTIONSTATE_ANGRY_START");
  FUN_10256e40(0x94e,"E_BT_EMOTIONSTATE_ANGRY_END");
  FUN_10256e40(0x94f,"E_BT_EMOTIONSTATE_TIRED_START");
  FUN_10256e40(0x950,"E_BT_EMOTIONSTATE_TIRED_END");
  FUN_10256e40(0x952,"E_BT_SOULBEAST_INTERACT");
  FUN_10256e40(0x953,"E_BT_SOULBEAST_CHANGEIMG");
  FUN_10256e40(0x955,"E_BT_Monster_Abnormal_Dynamite_end");
  FUN_10256e40(0x954,"E_BT_Monster_Abnormal_Dynamite");
  return param_1;
}



/* ===== FUN_10258da0 @ 10258da0  size=3261 ===== */
// strings:
//   "HitPart"
//   "HitDamageHealth"
//   "EnemyDamage"
//   "Health"
//   "HitSkillId"
//   "HitAttrDmgType"
//   "HitDamageType"
//   "HitPos"
//   "HitDirSim"
//   "ShooterId"
//   "ShooterSrvId"
//   "ShooterMonsterInfoId"
//   "Stimuli_Dead"
//   "AbnormalCauserId"
//   "LastAbnormalCauserId"
//   "Input_AbnormalType"
//   "PartBrokenLevel"
//   "DamageCauserId"
//   "Flag_Invulnerability"
//   "Sense_MasterAbnormalType"

/* [RE-AUTO c0]
   strings:
     ""HitPart""
     ""HitDamageHealth""
     ""EnemyDamage""
     ""Health""
     ""HitSkillId""
     ""HitAttrDmgType""
     ""HitDamageType""
     ""HitPos""
     ""HitDirSim""
     ""ShooterId"" */

void __fastcall FUN_10258da0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar3 = FUN_113168d0("HitPart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_113168d0("HitDamageHealth");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_113168d0("EnemyDamage");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  uVar3 = FUN_113168d0("Health",&local_c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 != '\0') {
    FUN_1025bfc0(local_c,param_1 + 0x280);
  }
  uVar3 = FUN_113168d0("HitSkillId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uVar3 = FUN_113168d0("HitAttrDmgType",param_1 + 0x23c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDamageType",param_1 + 0x238);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitPos",param_1 + 0x240);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDirSim",param_1 + 0x244);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterId",param_1 + 0x248);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterSrvId",param_1 + 0x24c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterMonsterInfoId",param_1 + 0x250);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Stimuli_Dead");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 600) = uVar3;
  uVar3 = FUN_113168d0("AbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  uVar3 = FUN_113168d0("LastAbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_113168d0("Input_AbnormalType",param_1 + 0x260);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("PartBrokenLevel",param_1 + 0x26c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("DamageCauserId",param_1 + 0x270);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Flag_Invulnerability",param_1 + 0x25c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_MasterAbnormalType",param_1 + 0x264);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_TargetAbnormalType",param_1 + 0x268);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  uVar3 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  uVar3 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  uVar3 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_113168d0("SelfFSMState");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar3 = FUN_113168d0("ClimbStartPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndDir");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_113168d0("KeepTarget");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  uVar3 = FUN_113168d0("KeepTargetID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_113168d0("CommondMoveTargetPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 700) = uVar3;
  uVar3 = FUN_113168d0("CommondMove");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_113168d0("HitSkillResID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  uVar3 = FUN_113168d0("HitSkillID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_113168d0("HitSkillLevel");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  uVar3 = FUN_113168d0("DamageFireAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  uVar3 = FUN_113168d0("DamageWaterAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_113168d0("DamageElectricAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  uVar3 = FUN_113168d0("DamageDragonAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_113168d0("DamageIceAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  uVar3 = FUN_113168d0("Cooperation_Attack_TargetId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  iVar1 = DAT_123bb90c;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(undefined4 *)(param_1 + 300));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(&local_8);
    if (local_8 != (int *)0x0) {
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName1",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 1) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 1;
          FUN_113168d0("NpcAnimationName1");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b14,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName2",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 2) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 2;
          FUN_113168d0("NpcAnimationName2");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b18,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName3",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 4) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 4;
          FUN_113168d0("NpcAnimationName3");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b1c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName4",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 8) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 8;
          FUN_113168d0("NpcAnimationName4");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b20,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName5",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x10) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x10;
          FUN_113168d0("NpcAnimationName5");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b24,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName6",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x20) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x20;
          FUN_113168d0("NpcAnimationName6");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b28,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName7",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x40) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x40;
          FUN_113168d0("NpcAnimationName7");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b2c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName8",&local_10);
      if (cVar2 != '\0') {
        if (-1 < (char)DAT_123c2b10) {
          DAT_123c2b10 = DAT_123c2b10 | 0x80;
          FUN_113168d0("NpcAnimationName8");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b30,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return;
}



/* ===== FUN_10262280 @ 10262280  size=510 ===== */
// strings:
//   "SkillBehaviorTree"
//   "FileName"
//   "SkillID"

/* [RE-AUTO c0]
   strings:
     ""SkillBehaviorTree""
     ""FileName""
     ""SkillID"" */

void __fastcall FUN_10262280(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  char *pcStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int aiStack_24 [3];
  int *local_18;
  
  piStack_44 = (int *)param_1[0x4b];
  piStack_48 = (int *)0x102622a5;
  local_18 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))();
  piStack_48 = aiStack_24;
  puStack_4c = (undefined1 *)0x102622b1;
  (**(code **)(*piVar3 + 0x14))();
  puStack_4c = &stack0xffffffc8;
  pcStack_50 = "SkillBehaviorTree";
  piStack_54 = (int *)0x102622ce;
  cVar2 = (**(code **)(*piStack_28 + 0x40))();
  if (cVar2 != '\0') {
    piStack_54 = (int *)0x102622df;
    piVar3 = (int *)(**(code **)(*unaff_EDI + 0x44))();
    piStack_58 = (int *)0x102622ed;
    piStack_54 = piVar3;
    cVar2 = (**(code **)(*unaff_EDI + 0x48))();
    while (cVar2 != '\0') {
      piStack_58 = (int *)&stack0xffffffc0;
      piStack_5c = (int *)0x1026230b;
      cVar2 = (**(code **)(*piVar3 + 4))();
      piVar1 = piStack_44;
      if (cVar2 != '\0') {
        piStack_5c = (int *)0x1026231e;
        (**(code **)(*piStack_44 + 0xc))();
        piStack_5c = (int *)&stack0xffffffc0;
        (**(code **)(*piVar1 + 0x28))("FileName");
        uStack_34 = 0;
        piStack_30 = (int *)0x0;
        uStack_2c = 0;
        (**(code **)(*param_1 + 0x54))(piStack_48,&uStack_34,1);
        (**(code **)(*piVar1 + 0x20))("SkillID",&pcStack_50);
        piVar4 = (int *)FUN_10262e90(&piStack_58);
        *piVar4 = (int)puStack_4c;
        piVar4[1] = (int)piStack_48;
        piVar4[2] = (int)piStack_44;
        piStack_58 = (int *)FUN_10262e90(&piStack_5c);
        if (piStack_58[1] == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_100b4ca0(*piStack_58);
          piStack_58[2] = (int)piVar4;
        }
        if ((piVar4[0x3b] == 0) || (*(char *)(piVar4[0x3b] + 0x28) == '\0')) {
          if (piVar4[0x29] != 0) {
            FUN_10493dd0();
            *(undefined1 *)((int)piVar4 + 0xe9) = 1;
            (**(code **)(*(int *)piVar4[0x29] + 0xc))();
          }
        }
        else {
          if ((piVar4[0x21] == 0) && (piVar4[0x29] != 0)) {
            (**(code **)(*piVar4 + 0xc))();
          }
          if (piVar4[0x21] != 0) {
            FUN_104ba2d0();
          }
          *(undefined1 *)((int)piVar4 + 0xe9) = 1;
        }
        (**(code **)(*piVar1 + 0x10))();
        param_1 = piStack_30;
      }
      unaff_EDI = (int *)0x0;
      if (piStack_44 != (int *)0x0) {
        piStack_5c = (int *)0x1026243f;
        (**(code **)(*piStack_44 + 8))();
      }
      piStack_5c = piVar3;
      cVar2 = (**(code **)(*piStack_48 + 0x48))();
    }
    piStack_5c = (int *)0x1026245d;
    piStack_58 = piVar3;
    (**(code **)(*piStack_44 + 0x4c))();
  }
  if (unaff_EDI != (int *)0x0) {
    piStack_54 = (int *)0x1026246a;
    (**(code **)(*unaff_EDI + 8))();
  }
  if (piStack_30 != (int *)0x0) {
    piStack_54 = (int *)0x10262477;
    (**(code **)(*piStack_30 + 8))();
  }
  return;
}



/* ===== FUN_10262e70 @ 10262e70  size=20 ===== */
// strings:
//   "SkillID"

/* [RE-AUTO c0]
   strings:
     ""SkillID"" */

void __fastcall FUN_10262e70(undefined4 *param_1)

{
  char *pcStack00000004;
  
  pcStack00000004 = "SkillID";
                    /* WARNING: Could not recover jumptable at 0x10262e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x20))();
  return;
}



/* ===== FUN_10289b70 @ 10289b70  size=208 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwPingID]"
//   "[wDelay]"
//   "[wCurDelay]"
//   "[wAverageDelay]"
//   "0x%02x"
//   "[chServerFps]"
//   "[dwServerTm]"

/* [RE-AUTO c0]
   strings:
     ""[dwPingID]""
     ""[wDelay]""
     ""[wCurDelay]""
     ""[wAverageDelay]""
     ""0x%02x""
     ""[chServerFps]""
     ""[dwServerTm]"" */

void __thiscall
FUN_10289b70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwPingID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wDelay]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCurDelay]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 6));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wAverageDelay]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 2));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chServerFps]","0x%02x",
                                      (int)*(char *)((int)param_1 + 10));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[dwServerTm]",&DAT_11d9f574,
                                *(undefined4 *)((int)param_1 + 0xb));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1029caa0 @ 1029caa0  size=166 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iNetID]"
//   "[iActionType]"
//   "[iPoint]"
//   "[iLevel]"
//   "[iBuffID]"

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iActionType]""
     ""[iPoint]""
     ""[iLevel]""
     ""[iBuffID]"" */

void __thiscall
FUN_1029caa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iActionType]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPoint]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iBuffID]",&DAT_11d9e0b4,param_1[4]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_102a5490 @ 102a5490  size=1840 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_ArrayElemLabel, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrDebugFormat_GuildIdName
// strings:
//   "[iNetID]"
//   "[dwSessionID]"
//   "[szName]"
//   "[bGender]"
//   "[stPose]"
//   "[bAvatarSetID]"
//   "[fHealth]"
//   "[fHealthRecover]"
//   "[iFaction]"
//   "[iWeapon]"
//   "[iState]"
//   "0x%02x"
//   "[bHasTeam]"
//   "[bTeamHasPwd]"
//   "[dwRandSeed]"
//   "[wEquipCount]"
//   "[astEquip]"
//   "[wAttrSize]"
//   "[szAttr]"
//   "[wBuffSize]"

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[dwSessionID]""
     ""[szName]""
     ""[bGender]""
     ""[stPose]""
     ""[bAvatarSetID]""
     ""[fHealth]""
     ""[fHealthRecover]""
     ""[iFaction]""
     ""[iWeapon]"" */

int __thiscall FUN_102a5490(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  short *psVar7;
  
  iVar2 = param_3;
  uVar1 = param_2;
  iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if ((((iVar5 == 0) &&
       (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSessionID]",&DAT_11d9f574,param_1[1]
                                   ), iVar5 == 0)) &&
      (iVar5 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2), iVar5 == 0)) &&
     ((iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGender]",&DAT_11d9e0b4,
                                   *(undefined1 *)(param_1 + 10)), iVar5 == 0 &&
      (iVar5 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar5 == 0)))) {
    iVar5 = param_3;
    if (-1 < (int)param_3) {
      iVar5 = param_3 + 1;
    }
    iVar5 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar5,param_4);
    if ((((iVar5 == 0) &&
         (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[bAvatarSetID]",&DAT_11d9e0b4,
                                      *(undefined1 *)((int)param_1 + 0x45)), iVar5 == 0)) &&
        ((iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[fHealth]",&DAT_11da0cf4,
                                      (double)*(float *)((int)param_1 + 0x46)), iVar5 == 0 &&
         (((((iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[fHealthRecover]",&DAT_11da0cf4,
                                          (double)*(float *)((int)param_1 + 0x4a)), iVar5 == 0 &&
             (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x4e)), iVar5 == 0)) &&
            (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeapon]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x52)), iVar5 == 0)) &&
           ((iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[iState]",&DAT_11d9e0b4,
                                         *(undefined4 *)((int)param_1 + 0x56)), iVar5 == 0 &&
            (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[bHasTeam]","0x%02x",
                                         *(undefined1 *)((int)param_1 + 0x5a)), iVar5 == 0)))) &&
          (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTeamHasPwd]","0x%02x",
                                       *(undefined1 *)((int)param_1 + 0x5b)), iVar5 == 0)))))) &&
       ((iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwRandSeed]",&DAT_11d9f574,
                                     param_1[0x17]), iVar5 == 0 &&
        (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipCount]",&DAT_11d9e0b4,
                                     *(undefined2 *)(param_1 + 0x18)), iVar5 == 0)))) {
      uVar4 = *(ushort *)(param_1 + 0x18);
      uVar6 = (uint)uVar4;
      if (0x28 < uVar4) {
        return -7;
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          iVar5 = TdrText_ArrayElemLabel(param_4,"[astEquip]",uVar3,uVar6);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = FUN_10274670(param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar3 = uVar3 + 1;
          uVar6 = extraout_ECX_00;
        } while (uVar3 < *(ushort *)(param_1 + 0x18));
      }
      iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[wAttrSize]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 0x422));
      if (iVar5 == 0) {
        if (0x5000 < *(ushort *)((int)param_1 + 0x422)) {
          return -7;
        }
        iVar5 = TdrText_ArrayHeader(0x5000,"[szAttr]",*(ushort *)((int)param_1 + 0x422),0);
        if (iVar5 == 0) {
          uVar4 = 0;
          if (*(short *)((int)param_1 + 0x422) != 0) {
            do {
              iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,
                                   *(undefined1 *)(uVar4 + 0x424 + (int)param_1));
              if (iVar5 != 0) {
                return iVar5;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ushort *)((int)param_1 + 0x422));
          }
          iVar5 = TdrBuf_PutU8Z();
          if ((iVar5 == 0) &&
             (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[wBuffSize]",&DAT_11d9e0b4,
                                          *(undefined2 *)(param_1 + 0x1509)), iVar5 == 0)) {
            if (0x2800 < *(ushort *)(param_1 + 0x1509)) {
              return -7;
            }
            iVar5 = TdrText_ArrayHeader(0x2800,"[szBuff]",*(ushort *)(param_1 + 0x1509),0);
            if (iVar5 == 0) {
              if (*(short *)(param_1 + 0x1509) != 0) {
                uVar4 = 0;
                do {
                  iVar5 = FUN_1010c010(param_2,&DAT_11d9f710,
                                       *(undefined1 *)(uVar4 + 0x5426 + (int)param_1));
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 < *(ushort *)(param_1 + 0x1509));
              }
              iVar5 = TdrBuf_PutU8Z(param_4);
              if ((iVar5 == 0) &&
                 (iVar5 = TdrText_FieldScalar(param_2,param_3,param_4,"[iProjIdCount]",&DAT_11d9e0b4
                                              ,*(undefined4 *)((int)param_1 + 0x7c26)), iVar5 == 0))
              {
                iVar5 = *(int *)((int)param_1 + 0x7c26);
                if (iVar5 < 0) {
                  return -6;
                }
                if (0x14 < iVar5) {
                  return -7;
                }
                param_2 = 0;
                if (0 < iVar5) {
                  iVar5 = (int)param_1 + 0x7c2a;
                  do {
                    iVar5 = TdrText_ArrayElemLabel(param_4,"[astProjIds]",param_2,iVar5);
                    if (iVar5 != 0) {
                      return iVar5;
                    }
                    iVar5 = param_3;
                    if (-1 < (int)param_3) {
                      iVar5 = param_3 + 1;
                    }
                    iVar5 = FUN_102a4760(uVar1,iVar5,param_4);
                    if (iVar5 != 0) {
                      return iVar5;
                    }
                    param_2 = param_2 + 1;
                    iVar5 = extraout_ECX_01;
                  } while (param_2 < *(int *)((int)param_1 + 0x7c26));
                }
                iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[ullParentEntityGUID]","%I64u",
                                            *(undefined4 *)((int)param_1 + 0x7cca),
                                            *(undefined4 *)((int)param_1 + 0x7cce));
                if ((((iVar5 == 0) &&
                     (iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[bType]","0x%02x",
                                                  *(undefined1 *)((int)param_1 + 0x7cd2)),
                     iVar5 == 0)) &&
                    (iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwState1]",&DAT_11d9f574,
                                                 *(undefined4 *)((int)param_1 + 0x7cd3)), iVar5 == 0
                    )) && ((((iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwState2]",
                                                          &DAT_11d9f574,
                                                          *(undefined4 *)((int)param_1 + 0x7cd7)),
                             iVar5 == 0 &&
                             (iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwState3]",
                                                          &DAT_11d9f574,
                                                          *(undefined4 *)((int)param_1 + 0x7cdb)),
                             iVar5 == 0)) &&
                            ((iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwState4]",
                                                          &DAT_11d9f574,
                                                          *(undefined4 *)((int)param_1 + 0x7cdf)),
                             iVar5 == 0 &&
                             ((iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwAGState]",
                                                           &DAT_11d9f574,
                                                           *(undefined4 *)((int)param_1 + 0x7ce3)),
                              iVar5 == 0 &&
                              (iVar5 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dwSubState]",
                                                           &DAT_11d9f574,
                                                           *(undefined4 *)((int)param_1 + 0x7ce7)),
                              iVar5 == 0)))))) &&
                           (iVar5 = TdrText_FieldLabelChar(param_4,"[stGuilder]",extraout_ECX_02),
                           iVar5 == 0)))) {
                  if (-1 < (int)param_3) {
                    param_3 = param_3 + 1;
                  }
                  iVar5 = TdrDebugFormat_GuildIdName(uVar1,param_3,param_4);
                  if (((iVar5 == 0) &&
                      (iVar5 = TdrText_FieldValueFmt(param_4,"[szStarLevel]",(int)param_1 + 0x7d43),
                      iVar5 == 0)) &&
                     (iVar5 = TdrText_ArrayHeader(extraout_ECX_03,"[facialInfo]",0x2e,0), iVar5 == 0
                     )) {
                    psVar7 = (short *)((int)param_1 + 0x7dc3);
                    param_3 = 0;
                    do {
                      iVar5 = FUN_1010c010(uVar1,&DAT_11d9f710,(int)*psVar7);
                      if (iVar5 != 0) {
                        return iVar5;
                      }
                      param_3 = param_3 + 1;
                      psVar7 = psVar7 + 1;
                    } while (param_3 < 0x2e);
                    iVar5 = TdrBuf_PutU8Z(param_4);
                    if (((iVar5 == 0) &&
                        (iVar5 = TdrText_FieldScalar(uVar1,iVar2,param_4,"[iVehicleID]",
                                                     &DAT_11d9e0b4,
                                                     *(undefined4 *)((int)param_1 + 0x7e1f)),
                        iVar5 == 0)) &&
                       (iVar5 = TdrText_FieldScalar(uVar1,iVar2,param_4,"[iGrowHighDay]",
                                                    &DAT_11d9e0b4,
                                                    *(undefined4 *)((int)param_1 + 0x7e23)),
                       iVar5 == 0)) {
                      iVar5 = TdrText_FieldScalar(uVar1,iVar2,param_4,"[iGrowHeight]",&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x7e27));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_102afba0 @ 102afba0  size=1292 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel, TdrText_FieldLabelChar, TdrDebugFormat_CatCarUseInfoList
// strings:
//   "[iCreatePlayerMaxLv]"
//   "[iStartTime]"
//   "[iRemainSeconds]"
//   "[iVipRemainSeconds]"
//   "[iItemRemainSeconds]"
//   "[iNormalMaxLimit]"
//   "[iVipMaxLimit]"
//   "[iItemMaxLimit]"
//   "[iPlayerNum]"
//   "[iIsHunterOfficer]"
//   "[nRegionCount]"
//   "[astRegionWeather]"
//   "[iIsCrossServerInstance]"
//   "[iIsWarning]"
//   "[iHuntingMode]"
//   "[iActHuntingMode]"
//   "[stCarCarInfo]"
//   "[iRulesInfoType]"
//   "[stRulesInfo]"
//   "[stOtherStatData]"

/* [RE-AUTO c0]
   strings:
     ""[iCreatePlayerMaxLv]""
     ""[iStartTime]""
     ""[iRemainSeconds]""
     ""[iVipRemainSeconds]""
     ""[iItemRemainSeconds]""
     ""[iNormalMaxLimit]""
     ""[iVipMaxLimit]""
     ""[iItemMaxLimit]""
     ""[iPlayerNum]""
     ""[iIsHunterOfficer]"" */

int __thiscall FUN_102afba0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar2 = param_3;
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCreatePlayerMaxLv]",&DAT_11d9e0b4,*param_1)
  ;
  if ((((((iVar3 == 0) &&
         (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStartTime]",&DAT_11d9e0b4,
                                      param_1[1]), iVar3 == 0)) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRemainSeconds]",&DAT_11d9e0b4,
                                     param_1[2]), iVar3 == 0)) &&
       ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iVipRemainSeconds]",&DAT_11d9e0b4,
                                     param_1[3]), iVar3 == 0 &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemRemainSeconds]",&DAT_11d9e0b4,
                                     param_1[4]), iVar3 == 0)))) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNormalMaxLimit]",&DAT_11d9e0b4,
                                    param_1[5]), iVar3 == 0 &&
       ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iVipMaxLimit]",&DAT_11d9e0b4,
                                     param_1[6]), iVar3 == 0 &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iItemMaxLimit]",&DAT_11d9e0b4,
                                     param_1[7]), iVar3 == 0)))))) &&
     ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerNum]",&DAT_11d9e0b4,param_1[8]),
      iVar3 == 0 &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIsHunterOfficer]",&DAT_11d9e0b4,
                                    param_1[9]), iVar3 == 0 &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nRegionCount]",&DAT_11d9e0b4,
                                    (int)*(short *)(param_1 + 10)), iVar3 == 0)))))) {
    sVar1 = *(short *)(param_1 + 10);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x19 < sVar1) {
      return -7;
    }
    param_3 = 0;
    if (0 < sVar1) {
      do {
        iVar3 = TdrText_ArrayElemLabel(param_4,"[astRegionWeather]",(int)(short)param_3,param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = iVar2;
        if (-1 < iVar2) {
          iVar3 = iVar2 + 1;
        }
        iVar3 = FUN_102ad6d0(param_2,iVar3,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        param_3 = param_3 + 1;
      } while ((short)param_3 < *(short *)(param_1 + 10));
    }
    iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iIsCrossServerInstance]",&DAT_11d9e0b4,
                                *(undefined4 *)((int)param_1 + 0x2ff));
    if ((((iVar3 == 0) &&
         (iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iIsWarning]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x303)), iVar3 == 0)) &&
        (iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iHuntingMode]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x307)), iVar3 == 0)) &&
       ((iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iActHuntingMode]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x30b)), iVar3 == 0 &&
        (iVar3 = TdrText_FieldLabelChar(param_4,"[stCarCarInfo]",extraout_ECX), iVar3 == 0)))) {
      iVar3 = iVar2;
      if (-1 < iVar2) {
        iVar3 = iVar2 + 1;
      }
      iVar3 = TdrDebugFormat_CatCarUseInfoList(param_2,iVar3,param_4);
      if (((iVar3 == 0) &&
          (iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iRulesInfoType]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x493)), iVar3 == 0)) &&
         (iVar3 = TdrText_FieldLabelChar(param_4,"[stRulesInfo]",extraout_ECX_00), iVar3 == 0)) {
        iVar3 = iVar2;
        if (-1 < iVar2) {
          iVar3 = iVar2 + 1;
        }
        iVar3 = FUN_102aefd0(*(int *)((int)param_1 + 0x493),*(int *)((int)param_1 + 0x493) >> 0x1f,
                             param_2,iVar3,param_4);
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldLabelChar(param_4,"[stOtherStatData]",extraout_ECX_01), iVar3 == 0)
           ) {
          iVar3 = iVar2;
          if (-1 < iVar2) {
            iVar3 = iVar2 + 1;
          }
          iVar3 = FUN_102af240(param_2,iVar3,param_4);
          if ((iVar3 == 0) &&
             (iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iItemDataCount]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x9ef)), iVar3 == 0)) {
            iVar3 = *(int *)((int)param_1 + 0x9ef);
            if (iVar3 < 0) {
              return -6;
            }
            if (100 < iVar3) {
              return -7;
            }
            param_3 = 0;
            if (0 < iVar3) {
              do {
                iVar3 = TdrText_ArrayElemLabel(param_4,"[astPaidItems]",param_3,param_3);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = iVar2;
                if (-1 < iVar2) {
                  iVar3 = iVar2 + 1;
                }
                iVar3 = FUN_102ada60(param_2,iVar3,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                param_3 = param_3 + 1;
              } while (param_3 < *(int *)((int)param_1 + 0x9ef));
            }
            iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iBuffDataCount]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0xd13));
            if (iVar3 == 0) {
              iVar3 = *(int *)((int)param_1 + 0xd13);
              if (iVar3 < 0) {
                return -6;
              }
              if (100 < iVar3) {
                return -7;
              }
              param_3 = 0;
              if (0 < iVar3) {
                do {
                  iVar3 = TdrText_ArrayElemLabel(param_4,"[astPaidBuffs]",param_3,param_3);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  iVar3 = iVar2;
                  if (-1 < iVar2) {
                    iVar3 = iVar2 + 1;
                  }
                  iVar3 = FUN_102ada60(param_2,iVar3,param_4);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  param_3 = param_3 + 1;
                } while (param_3 < *(int *)((int)param_1 + 0xd13));
              }
              iVar3 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iIsBigRand]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x1037));
            }
          }
        }
      }
    }
  }
  return iVar3;
}



