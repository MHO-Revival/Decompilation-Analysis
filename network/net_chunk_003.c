/* ===== FUN_10189ae0 @ 10189ae0  size=269 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10189ae0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      iVar3 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x28 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_00;
        if (*param_1 != 0) {
          do {
            iVar5 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar4 = FUN_10188df0(param_2);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
            if (iVar5 != 0) {
              return iVar5;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_01;
          } while (bVar7 < *param_1);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10189bf0 @ 10189bf0  size=269 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10189bf0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  byte bVar7;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      iVar3 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x28 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1010c5f0(0x25), iVar3 == 0)) {
        iVar3 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar7 = 0;
        uVar6 = extraout_ECX_00;
        if (*param_1 != 0) {
          do {
            iVar5 = param_2[1];
            FUN_1010bf70(uVar6);
            iVar2 = param_2[1];
            iVar4 = FUN_10188f70(param_2);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar5 = FUN_1010c3c0(param_2[1] - iVar2,iVar5);
            if (iVar5 != 0) {
              return iVar5;
            }
            bVar7 = bVar7 + 1;
            uVar6 = extraout_ECX_01;
          } while (bVar7 < *param_1);
        }
        iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
        return iVar3;
      }
    }
  }
  return iVar3;
}



/* ===== FUN_10189dd0 @ 10189dd0  size=459 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10189dd0(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  param_1[0x8ea9] = '\0';
  param_1[0x8eaa] = '\0';
  param_1[0x8eab] = '\0';
  param_1[0x8eac] = '\0';
  local_c = param_3 + param_2[1];
  if ((uint)param_2[1] < local_c) {
    do {
      iVar2 = FUN_1010ccb0(&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_18 >> 4 == 1) {
        if ((param_1[0x8ea9] & 1U) == 0) {
          *(uint *)(param_1 + 0x8ea9) = *(uint *)(param_1 + 0x8ea9) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        *param_1 = *(char *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else if (local_18 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x8ea9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x8ea9) = *(uint *)(param_1 + 0x8ea9) | 2;
        }
        iStack_1c = 0;
        iVar2 = FUN_1010c870(&iStack_1c);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (iStack_1c == 0) {
          return -0x25;
        }
        iStack_10 = param_2[1];
        bVar4 = 0;
        do {
          iStack_14 = 0;
          iVar2 = FUN_1010c870(&iStack_14);
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((iStack_14 != 0) && (iVar2 = FUN_101891c0(param_2,iStack_14), iVar2 != 0)) {
            return iVar2;
          }
          uVar3 = iStack_1c + iStack_10;
          uVar1 = param_2[1];
          if (uVar3 <= uVar1 && uVar1 != uVar3) {
            return -0x22;
          }
          if (uVar1 == uVar3) {
            *param_1 = bVar4 + 1;
            break;
          }
          bVar4 = bVar4 + 1;
        } while (bVar4 < 0x28);
      }
      else {
        iVar2 = FUN_1010d4f0();
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    } while ((uint)param_2[1] < local_c);
  }
  iVar2 = 0;
  if (local_c < (uint)param_2[1]) {
    iVar2 = -0x22;
  }
  return iVar2;
}



/* ===== FUN_10189fa0 @ 10189fa0  size=459 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10189fa0(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_18 = 0;
  param_1[0x8ea9] = '\0';
  param_1[0x8eaa] = '\0';
  param_1[0x8eab] = '\0';
  param_1[0x8eac] = '\0';
  local_c = param_3 + param_2[1];
  if ((uint)param_2[1] < local_c) {
    do {
      iVar2 = FUN_1010ccb0(&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_18 >> 4 == 1) {
        if ((param_1[0x8ea9] & 1U) == 0) {
          *(uint *)(param_1 + 0x8ea9) = *(uint *)(param_1 + 0x8ea9) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        *param_1 = *(char *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else if (local_18 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x8ea9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x8ea9) = *(uint *)(param_1 + 0x8ea9) | 2;
        }
        iStack_1c = 0;
        iVar2 = FUN_1010c870(&iStack_1c);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (iStack_1c == 0) {
          return -0x25;
        }
        iStack_10 = param_2[1];
        bVar4 = 0;
        do {
          iStack_14 = 0;
          iVar2 = FUN_1010c870(&iStack_14);
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((iStack_14 != 0) && (iVar2 = FUN_10189400(param_2,iStack_14), iVar2 != 0)) {
            return iVar2;
          }
          uVar3 = iStack_1c + iStack_10;
          uVar1 = param_2[1];
          if (uVar3 <= uVar1 && uVar1 != uVar3) {
            return -0x22;
          }
          if (uVar1 == uVar3) {
            *param_1 = bVar4 + 1;
            break;
          }
          bVar4 = bVar4 + 1;
        } while (bVar4 < 0x28);
      }
      else {
        iVar2 = FUN_1010d4f0();
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    } while ((uint)param_2[1] < local_c);
  }
  iVar2 = 0;
  if (local_c < (uint)param_2[1]) {
    iVar2 = -0x22;
  }
  return iVar2;
}



/* ===== FUN_1018a240 @ 1018a240  size=219 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[groupCnt]"
//   "[suitSkillGroupData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1018a29f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[groupCnt]""
     ""[suitSkillGroupData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1018a240(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[groupCnt]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x28 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[suitSkillGroupData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10189710(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1018a9d0 @ 1018a9d0  size=164 ===== */
// calls: _wassert
// strings:
//   "[attrs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x1018aa07) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[attrs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void __thiscall FUN_1018a9d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,&DAT_11d9faa0,&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_1024a140(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[attrs]",(int)(char)param_4), iVar1 == 0)) {
    if (param_3 < 0) {
      FUN_102074e0(param_2,param_3,param_4);
      return;
    }
    FUN_102074e0(param_2,param_3 + 1,param_4);
  }
  return;
}



/* ===== FUN_1018c5b0 @ 1018c5b0  size=370 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1018c5b0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  param_1[0x21] = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  do {
    iVar3 = 0;
    if (uVar2 <= uVar1) {
      if (uVar2 < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
        param_1[0x21] = param_1[0x21] | 1;
      }
      iVar3 = FUN_1010cbd0(param_1);
LAB_1018c6d3:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1018c6d3;
      }
      if (((uint)param_1[0x21] >> 1 & 1) == 0) {
        param_1[0x21] = param_1[0x21] | 2;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_3 == 0) {
        return -0x25;
      }
      uVar1 = param_2[1];
      iVar3 = 0;
      uVar4 = uVar1;
      do {
        if ((uint)param_2[2] < uVar4) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        uVar5 = param_3 + uVar1;
        *(undefined1 *)(iVar3 + 4 + (int)param_1) = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
        uVar4 = param_2[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return -0x22;
        }
        if (uVar4 == uVar5) {
          *param_1 = iVar3 + 1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x80);
    }
    uVar1 = param_2[1];
  } while( true );
}



/* ===== FUN_1018c730 @ 1018c730  size=370 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1018c730(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  param_1[0x21] = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  do {
    iVar3 = 0;
    if (uVar2 <= uVar1) {
      if (uVar2 < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
        param_1[0x21] = param_1[0x21] | 1;
      }
      iVar3 = FUN_1010c870(param_1);
LAB_1018c853:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1018c853;
      }
      if (((uint)param_1[0x21] >> 1 & 1) == 0) {
        param_1[0x21] = param_1[0x21] | 2;
      }
      param_3 = 0;
      iVar3 = FUN_1010c870(&param_3);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_3 == 0) {
        return -0x25;
      }
      uVar1 = param_2[1];
      iVar3 = 0;
      uVar4 = uVar1;
      do {
        if ((uint)param_2[2] < uVar4) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return -2;
        }
        uVar5 = param_3 + uVar1;
        *(undefined1 *)(iVar3 + 4 + (int)param_1) = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
        uVar4 = param_2[1];
        if (uVar5 <= uVar4 && uVar4 != uVar5) {
          return -0x22;
        }
        if (uVar4 == uVar5) {
          *param_1 = iVar3 + 1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x80);
    }
    uVar1 = param_2[1];
  } while( true );
}



/* ===== FUN_1018ed90 @ 1018ed90  size=253 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1018ed90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = param_2[1];
  uVar3 = param_2[1];
  do {
    iVar2 = 0;
    if ((uint)(param_3 + iVar1) <= uVar3) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar2 = -0x22;
      }
      return iVar2;
    }
    iVar2 = FUN_1010ccb0(&local_8);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      iVar2 = param_1;
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
      }
LAB_1018ee53:
      iVar2 = FUN_1010cbd0(iVar2);
LAB_1018ee5a:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      if (uVar3 == 2) {
        if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
        }
        iVar2 = param_1 + 4;
        goto LAB_1018ee53;
      }
      if (uVar3 != 3) {
        iVar2 = FUN_1010d4f0();
        goto LAB_1018ee5a;
      }
      if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar3 = param_2[1];
  } while( true );
}



/* ===== FUN_1018ee90 @ 1018ee90  size=253 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_1018ee90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = param_2[1];
  uVar3 = param_2[1];
  do {
    iVar2 = 0;
    if ((uint)(param_3 + iVar1) <= uVar3) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar2 = -0x22;
      }
      return iVar2;
    }
    iVar2 = FUN_1010ccb0(&local_8);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      iVar2 = param_1;
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
      }
LAB_1018ef53:
      iVar2 = FUN_1010c870(iVar2);
LAB_1018ef5a:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      if (uVar3 == 2) {
        if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
        }
        iVar2 = param_1 + 4;
        goto LAB_1018ef53;
      }
      if (uVar3 != 3) {
        iVar2 = FUN_1010d4f0();
        goto LAB_1018ef5a;
      }
      if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar3 = param_2[1];
  } while( true );
}



/* ===== FUN_1018fc30 @ 1018fc30  size=374 ===== */
// calls: _wassert
// strings:
//   "[guideBookChapterCount]"
//   "[guideBookChapterInfos]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "0x%02x"
//   "[isFisrtAutoOpenGuideBook]"
//   "[weaopnId]"
//   "[guideActionInfos]"

/* WARNING: Removing unreachable block (ram,0x1018fca9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[guideBookChapterCount]""
     ""[guideBookChapterInfos]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""0x%02x""
     ""[isFisrtAutoOpenGuideBook]""
     ""[weaopnId]""
     ""[guideActionInfos]"" */

int __thiscall FUN_1018fc30(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[guideBookChapterCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[guideBookChapterInfos]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1018f060(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[isFisrtAutoOpenGuideBook]","0x%02x",
                         (int)(char)param_1[0x1b]);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[weaopnId]","0x%02x",
                              (int)*(char *)((int)param_1 + 0x6d)), iVar1 == 0)) &&
       (iVar1 = FUN_1024a1e0(param_4,"[guideActionInfos]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        iVar1 = FUN_1018e890(param_2,param_3,param_4);
        return iVar1;
      }
      iVar1 = FUN_1018e890(param_2,param_3 + 1,param_4);
    }
  }
  return iVar1;
}



/* ===== FUN_10190f10 @ 10190f10  size=287 ===== */
// calls: _wassert
// strings:
//   "[iSearchCount]"
//   "[iRrefreshCount]"
//   "[iVipRefreshCount]"
//   "[vItemPoolList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iLastUpdateTime]"

/* WARNING: Removing unreachable block (ram,0x10190f9e) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iSearchCount]""
     ""[iRrefreshCount]""
     ""[iVipRefreshCount]""
     ""[vItemPoolList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iLastUpdateTime]"" */

void __thiscall FUN_10190f10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iSearchCount]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRrefreshCount]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iVipRefreshCount]",&DAT_11d9e0b4,param_1[2]),
     iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[vItemPoolList]",uVar2,(int)(char)param_4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_10190480(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    FUN_1024a290(param_2,param_3,param_4,"[iLastUpdateTime]",&DAT_11d9e0b4,param_1[0x2b]);
  }
  return;
}



/* ===== FUN_10192230 @ 10192230  size=326 ===== */
// calls: _wassert
// strings:
//   "[iReSearchCount]"
//   "[iRrefreshCount]"
//   "[iVipRefreshCount]"
//   "[vItemPoolList]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iBoxId]"
//   "[iLastClockRefreshTime]"

/* WARNING: Removing unreachable block (ram,0x101922be) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iReSearchCount]""
     ""[iRrefreshCount]""
     ""[iVipRefreshCount]""
     ""[vItemPoolList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iBoxId]""
     ""[iLastClockRefreshTime]"" */

void __thiscall FUN_10192230(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iReSearchCount]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iRrefreshCount]",&DAT_11d9e0b4,param_1[1]),
      iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iVipRefreshCount]",&DAT_11d9e0b4,param_1[2]),
     iVar1 == 0)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_1024a140(param_3);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[vItemPoolList]",uVar2,(int)(char)param_4);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_10191700(param_2,iVar1,param_4);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[iBoxId]",&DAT_11d9e0b4,param_1[0x2b]);
    if (iVar1 == 0) {
      FUN_1024a290(param_2,param_3,param_4,"[iLastClockRefreshTime]",&DAT_11d9e0b4,param_1[0x2c]);
    }
  }
  return;
}



/* ===== FUN_10192610 @ 10192610  size=365 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10192610(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  
  piVar4 = param_2;
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar8 = _wassert_exref;
    uVar9 = param_2[1];
    if ((uVar9 <= (uint)param_2[2]) && (3 < param_2[2] - uVar9)) {
      param_2[1] = uVar9 + 4;
    }
    iVar5 = param_2[1];
    uVar9 = 0;
    do {
      uVar2 = param_2[1];
      if ((uint)param_2[2] < uVar2) {
        (*pcVar8)(L"position <= length",
                  L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_2[1];
      if ((uVar3 <= (uint)param_2[2]) && (3 < param_2[2] - uVar3)) {
        param_2[1] = uVar3 + 4;
      }
      iVar7 = param_2[1];
      iVar6 = FUN_101919f0(param_2);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar7 = FUN_1010c3c0(param_2[1] - iVar7,uVar2);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar9 = uVar9 + 1;
      pcVar8 = _wassert_exref;
    } while (uVar9 < 3);
    iVar5 = param_2[1] - iVar5;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar5 = -1;
    }
    else {
      iVar7 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
      *(undefined1 *)(uVar1 + iVar7) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
      *(undefined1 *)(*piVar4 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar4 + 2 + uVar1) = (char)((uint)iVar5 >> 8);
      *(char *)(*piVar4 + 3 + uVar1) = (char)iVar5;
      iVar5 = FUN_1010c5f0(0x20);
      if (iVar5 == 0) {
        iVar5 = FUN_1010c560(*(undefined4 *)(param_1 + 0x228));
        return iVar5;
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10192780 @ 10192780  size=365 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10192780(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  
  piVar4 = param_2;
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = param_2[1];
    if ((uint)param_2[2] < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    pcVar8 = _wassert_exref;
    uVar9 = param_2[1];
    if ((uVar9 <= (uint)param_2[2]) && (3 < param_2[2] - uVar9)) {
      param_2[1] = uVar9 + 4;
    }
    iVar5 = param_2[1];
    uVar9 = 0;
    do {
      uVar2 = param_2[1];
      if ((uint)param_2[2] < uVar2) {
        (*pcVar8)(L"position <= length",
                  L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
      }
      uVar3 = param_2[1];
      if ((uVar3 <= (uint)param_2[2]) && (3 < param_2[2] - uVar3)) {
        param_2[1] = uVar3 + 4;
      }
      iVar7 = param_2[1];
      iVar6 = FUN_10191b30(param_2);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar7 = FUN_1010c3c0(param_2[1] - iVar7,uVar2);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar9 = uVar9 + 1;
      pcVar8 = _wassert_exref;
    } while (uVar9 < 3);
    iVar5 = param_2[1] - iVar5;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x18d);
    }
    if (((uint)param_2[2] < uVar1) || (param_2[2] - uVar1 < 4)) {
      iVar5 = -1;
    }
    else {
      iVar7 = *param_2;
      param_2._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
      *(undefined1 *)(uVar1 + iVar7) = param_2._3_1_;
      param_2._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
      *(undefined1 *)(*piVar4 + 1 + uVar1) = param_2._2_1_;
      *(char *)(*piVar4 + 2 + uVar1) = (char)((uint)iVar5 >> 8);
      *(char *)(*piVar4 + 3 + uVar1) = (char)iVar5;
      iVar5 = FUN_1010c5f0(0x23);
      if (iVar5 == 0) {
        iVar5 = FUN_1010c190(*(undefined4 *)(param_1 + 0x228));
        return iVar5;
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10192d70 @ 10192d70  size=181 ===== */
// calls: _wassert
// strings:
//   "[cLotteryBox]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[iLastDailyRefreshTime]"

/* WARNING: Removing unreachable block (ram,0x10192d8c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[cLotteryBox]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[iLastDailyRefreshTime]"" */

void __thiscall FUN_10192d70(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1024a140(param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[cLotteryBox]",uVar2,(int)(char)param_4);
    if (iVar1 != 0) break;
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10192230(param_2,iVar1,param_4);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
    if (2 < uVar2) {
      FUN_1024a290(param_2,param_3,param_4,"[iLastDailyRefreshTime]",&DAT_11d9e0b4,
                   *(undefined4 *)(param_1 + 0x228));
      return;
    }
  }
  return;
}



/* ===== FUN_10193b80 @ 10193b80  size=5864 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10193b80(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 uVar8;
  undefined4 extraout_ECX_51;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  
  iVar4 = FUN_1010c5f0(0x65);
  if (iVar4 == 0) {
    uVar11 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar11) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar1)) {
      *(uint *)(param_2 + 4) = uVar1 + 4;
    }
    iVar10 = *(int *)(param_2 + 4);
    iVar4 = FUN_10163fe0(param_2);
    if ((((iVar4 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar11), iVar4 == 0))
        && (iVar4 = FUN_1010c5f0(0xa0), iVar4 == 0)) &&
       (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 10)), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 10);
      if (iVar4 < 0) {
        return -6;
      }
      if (9 < iVar4) {
        return -7;
      }
      if (0 < iVar4) {
        iVar4 = FUN_1010c5f0(0xb5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX);
        iVar4 = *(int *)(param_2 + 4);
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 10)) {
          puVar6 = (undefined4 *)(param_1 + 0xe);
          do {
            iVar5 = FUN_1010c560(*puVar6);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < *(int *)(param_1 + 10));
        }
        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      iVar4 = FUN_1010c5f0(0xc0);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_1010c4d0(*(undefined2 *)(param_1 + 0x32));
      if (iVar4 != 0) {
        return iVar4;
      }
      if (0x100 < *(ushort *)(param_1 + 0x32)) {
        return -7;
      }
      if (*(ushort *)(param_1 + 0x32) != 0) {
        iVar4 = FUN_1010c5f0(0xd5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_2 + 4);
        uVar9 = 0;
        uVar8 = extraout_ECX_01;
        if (*(short *)(param_1 + 0x32) != 0) {
          do {
            uVar3 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(uVar8);
            iVar10 = *(int *)(param_2 + 4);
            iVar5 = FUN_101667e0(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar10 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar3);
            if (iVar10 != 0) {
              return iVar10;
            }
            uVar9 = uVar9 + 1;
            uVar8 = extraout_ECX_02;
          } while (uVar9 < *(ushort *)(param_1 + 0x32));
        }
        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      iVar4 = FUN_1010c5f0(0x105);
      if (iVar4 == 0) {
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_03);
        iVar10 = *(int *)(param_2 + 4);
        iVar4 = FUN_10170ea0(param_2);
        if (((iVar4 == 0) &&
            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
           (iVar4 = FUN_1010c5f0(0x115), iVar4 == 0)) {
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_04);
          iVar10 = *(int *)(param_2 + 4);
          iVar4 = FUN_10172210(param_2);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
             (iVar4 = FUN_1010c5f0(0x125), iVar4 == 0)) {
            uVar2 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(extraout_ECX_05);
            iVar10 = *(int *)(param_2 + 4);
            iVar4 = FUN_1024c5c0(param_2);
            if (((iVar4 == 0) &&
                (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
               (iVar4 = FUN_1010c5f0(0x135), iVar4 == 0)) {
              uVar2 = *(undefined4 *)(param_2 + 4);
              FUN_1010bf70(extraout_ECX_06);
              iVar10 = *(int *)(param_2 + 4);
              iVar4 = FUN_1022a650(param_2);
              if (((iVar4 == 0) &&
                  (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                 (((((iVar4 = FUN_1010c5f0(0x140), iVar4 == 0 &&
                     ((iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1c05)), iVar4 == 0 &&
                      (iVar4 = FUN_1010c5f0(0x150), iVar4 == 0)))) &&
                    (iVar4 = FUN_1010c4d0(*(undefined2 *)(param_1 + 0x1c09)), iVar4 == 0)) &&
                   (((((iVar4 = FUN_1010c5f0(0x161), iVar4 == 0 &&
                       (iVar4 = FUN_1010c0c0(*(undefined1 *)(param_1 + 0x1c0b)), iVar4 == 0)) &&
                      (iVar4 = FUN_1010c5f0(0x171), iVar4 == 0)) &&
                     (((iVar4 = FUN_1010c0c0(*(undefined1 *)(param_1 + 0x1c0c)), iVar4 == 0 &&
                       (iVar4 = FUN_1010c5f0(0x180), iVar4 == 0)) &&
                      ((iVar4 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x1c0d)), iVar4 == 0 &&
                       ((iVar4 = FUN_1010c5f0(0x1c0), iVar4 == 0 &&
                        (iVar4 = FUN_1010c560(*(undefined4 *)(param_1 + 0x1c11)), iVar4 == 0))))))))
                    && (iVar4 = FUN_1010c5f0(0x1d0), iVar4 == 0)))) &&
                  ((iVar4 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x1c15)), iVar4 == 0 &&
                   (iVar4 = FUN_1010c5f0(0x1e5), iVar4 == 0)))))) {
                uVar2 = *(undefined4 *)(param_2 + 4);
                FUN_1010bf70(extraout_ECX_07);
                iVar10 = *(int *)(param_2 + 4);
                iVar4 = FUN_1016fd00(param_2);
                if ((iVar4 == 0) &&
                   (((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                     (iVar4 = FUN_1010c5f0(0x1f0), iVar4 == 0)) &&
                    (iVar4 = FUN_1010c4d0(*(undefined2 *)(param_1 + 0x1d1e)), iVar4 == 0)))) {
                  if (0x80 < *(ushort *)(param_1 + 0x1d1e)) {
                    return -7;
                  }
                  if (*(ushort *)(param_1 + 0x1d1e) != 0) {
                    iVar4 = FUN_1010c5f0(0x205);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    uVar2 = *(undefined4 *)(param_2 + 4);
                    FUN_1010bf70(extraout_ECX_08);
                    iVar4 = *(int *)(param_2 + 4);
                    if (*(short *)(param_1 + 0x1d1e) != 0) {
                      uVar9 = 0;
                      do {
                        iVar10 = FUN_1010c0c0(*(undefined1 *)(uVar9 + 0x1d20 + param_1));
                        if (iVar10 != 0) {
                          return iVar10;
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *(ushort *)(param_1 + 0x1d1e));
                    }
                    iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                  }
                  iVar4 = FUN_1010c5f0(0x215);
                  if (iVar4 == 0) {
                    uVar2 = *(undefined4 *)(param_2 + 4);
                    FUN_1010bf70(extraout_ECX_09);
                    iVar10 = *(int *)(param_2 + 4);
                    iVar4 = FUN_1016a880(param_2);
                    if (((iVar4 == 0) &&
                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                       (iVar4 = FUN_1010c5f0(0x2a5), iVar4 == 0)) {
                      uVar2 = *(undefined4 *)(param_2 + 4);
                      FUN_1010bf70(extraout_ECX_10);
                      iVar10 = *(int *)(param_2 + 4);
                      iVar4 = FUN_10175de0(param_2);
                      if (((iVar4 == 0) &&
                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0))
                         && (iVar4 = FUN_1010c5f0(0x2b5), iVar4 == 0)) {
                        uVar2 = *(undefined4 *)(param_2 + 4);
                        FUN_1010bf70(extraout_ECX_11);
                        iVar10 = *(int *)(param_2 + 4);
                        iVar4 = FUN_101773c0(param_2);
                        if (((iVar4 == 0) &&
                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)
                            ) && (iVar4 = FUN_1010c5f0(0x2f5), iVar4 == 0)) {
                          uVar2 = *(undefined4 *)(param_2 + 4);
                          FUN_1010bf70(extraout_ECX_12);
                          iVar10 = *(int *)(param_2 + 4);
                          iVar4 = FUN_101582f0(param_2);
                          if (((iVar4 == 0) &&
                              (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                              iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x345), iVar4 == 0)) {
                            uVar2 = *(undefined4 *)(param_2 + 4);
                            FUN_1010bf70(extraout_ECX_13);
                            iVar10 = *(int *)(param_2 + 4);
                            iVar4 = FUN_1017b1c0(param_2);
                            if (((iVar4 == 0) &&
                                (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x355), iVar4 == 0)) {
                              uVar2 = *(undefined4 *)(param_2 + 4);
                              FUN_1010bf70(extraout_ECX_14);
                              iVar10 = *(int *)(param_2 + 4);
                              iVar4 = FUN_102315f0(param_2);
                              if (((iVar4 == 0) &&
                                  (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                  iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x365), iVar4 == 0)) {
                                uVar2 = *(undefined4 *)(param_2 + 4);
                                FUN_1010bf70(extraout_ECX_15);
                                iVar10 = *(int *)(param_2 + 4);
                                iVar4 = FUN_10211220(param_2);
                                if (((iVar4 == 0) &&
                                    (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                    iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x375), iVar4 == 0)) {
                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                  FUN_1010bf70(extraout_ECX_16);
                                  iVar10 = *(int *)(param_2 + 4);
                                  iVar4 = FUN_1017dd20(param_2);
                                  if (((iVar4 == 0) &&
                                      (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                      iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x385), iVar4 == 0)) {
                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                    FUN_1010bf70(extraout_ECX_17);
                                    iVar10 = *(int *)(param_2 + 4);
                                    iVar4 = FUN_10181b80(param_2);
                                    if (((iVar4 == 0) &&
                                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                        iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x395), iVar4 == 0)) {
                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                      FUN_1010bf70(extraout_ECX_18);
                                      iVar10 = *(int *)(param_2 + 4);
                                      iVar4 = FUN_101843c0(param_2);
                                      if (((iVar4 == 0) &&
                                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2
                                                               ), iVar4 == 0)) &&
                                         (iVar4 = FUN_1010c5f0(0x3a5), iVar4 == 0)) {
                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                        FUN_1010bf70(extraout_ECX_19);
                                        iVar10 = *(int *)(param_2 + 4);
                                        iVar4 = FUN_1017d3a0(param_2);
                                        if (((iVar4 == 0) &&
                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,
                                                                  uVar2), iVar4 == 0)) &&
                                           (iVar4 = FUN_1010c5f0(0x3b5), iVar4 == 0)) {
                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                          FUN_1010bf70(extraout_ECX_20);
                                          iVar10 = *(int *)(param_2 + 4);
                                          iVar4 = FUN_101117c0(param_2);
                                          if ((((iVar4 == 0) &&
                                               (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,
                                                                     uVar2), iVar4 == 0)) &&
                                              (iVar4 = FUN_1010c5f0(0x3c0), iVar4 == 0)) &&
                                             (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                    (param_1 + 0x193bd)), iVar4 == 0
                                             )) {
                                            iVar4 = *(int *)(param_1 + 0x193bd);
                                            if (iVar4 < 0) {
                                              return -6;
                                            }
                                            if (0x3c < iVar4) {
                                              return -7;
                                            }
                                            if (0 < iVar4) {
                                              iVar4 = FUN_1010c5f0(0x3d5);
                                              if (iVar4 != 0) {
                                                return iVar4;
                                              }
                                              uVar2 = *(undefined4 *)(param_2 + 4);
                                              FUN_1010bf70(extraout_ECX_21);
                                              iVar4 = *(int *)(param_2 + 4);
                                              iVar10 = 0;
                                              if (0 < *(int *)(param_1 + 0x193bd)) {
                                                puVar6 = (undefined4 *)(param_1 + 0x193c1);
                                                do {
                                                  iVar5 = FUN_1010c560(*puVar6);
                                                  if (iVar5 != 0) {
                                                    return iVar5;
                                                  }
                                                  iVar10 = iVar10 + 1;
                                                  puVar6 = puVar6 + 1;
                                                } while (iVar10 < *(int *)(param_1 + 0x193bd));
                                              }
                                              iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                   uVar2);
                                              if (iVar4 != 0) {
                                                return iVar4;
                                              }
                                            }
                                            iVar4 = FUN_1010c5f0(0x3e0);
                                            if ((iVar4 == 0) &&
                                               (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                      (param_1 + 0x194b1)),
                                               iVar4 == 0)) {
                                              iVar4 = *(int *)(param_1 + 0x194b1);
                                              if (iVar4 < 0) {
                                                return -6;
                                              }
                                              if (0x80 < iVar4) {
                                                return -7;
                                              }
                                              if (0 < iVar4) {
                                                iVar4 = FUN_1010c5f0(0x3f5);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                                uVar2 = *(undefined4 *)(param_2 + 4);
                                                FUN_1010bf70(extraout_ECX_22);
                                                iVar4 = *(int *)(param_2 + 4);
                                                iVar10 = 0;
                                                if (0 < *(int *)(param_1 + 0x194b1)) {
                                                  puVar6 = (undefined4 *)(param_1 + 0x194b5);
                                                  do {
                                                    iVar5 = FUN_1010c560(*puVar6);
                                                    if (iVar5 != 0) {
                                                      return iVar5;
                                                    }
                                                    iVar10 = iVar10 + 1;
                                                    puVar6 = puVar6 + 1;
                                                  } while (iVar10 < *(int *)(param_1 + 0x194b1));
                                                }
                                                iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                     uVar2);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                              }
                                              iVar4 = *(int *)(param_1 + 0x194b1);
                                              if (iVar4 < 0) {
                                                return -6;
                                              }
                                              if (0x80 < iVar4) {
                                                return -7;
                                              }
                                              if (0 < iVar4) {
                                                iVar4 = FUN_1010c5f0(0x405);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                                uVar2 = *(undefined4 *)(param_2 + 4);
                                                FUN_1010bf70(extraout_ECX_23);
                                                iVar4 = *(int *)(param_2 + 4);
                                                iVar10 = 0;
                                                if (0 < *(int *)(param_1 + 0x194b1)) {
                                                  puVar6 = (undefined4 *)(param_1 + 0x196b5);
                                                  do {
                                                    iVar5 = FUN_1010c5f0(*puVar6);
                                                    if (iVar5 != 0) {
                                                      return iVar5;
                                                    }
                                                    iVar10 = iVar10 + 1;
                                                    puVar6 = puVar6 + 1;
                                                  } while (iVar10 < *(int *)(param_1 + 0x194b1));
                                                }
                                                iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                     uVar2);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                              }
                                              iVar4 = FUN_1010c5f0(0x450);
                                              if ((iVar4 == 0) &&
                                                 (iVar4 = FUN_1010c5f0(*(undefined4 *)
                                                                        (param_1 + 0x198b5)),
                                                 iVar4 == 0)) {
                                                if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                  return -7;
                                                }
                                                if (*(uint *)(param_1 + 0x198b5) != 0) {
                                                  iVar4 = FUN_1010c5f0(0x465);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_24);
                                                  iVar4 = *(int *)(param_2 + 4);
                                                  uVar11 = 0;
                                                  if (*(int *)(param_1 + 0x198b5) != 0) {
                                                    puVar6 = (undefined4 *)(param_1 + 0x198b9);
                                                    do {
                                                      iVar10 = FUN_1010c560(*puVar6);
                                                      if (iVar10 != 0) {
                                                        return iVar10;
                                                      }
                                                      uVar11 = uVar11 + 1;
                                                      puVar6 = puVar6 + 1;
                                                    } while (uVar11 < *(uint *)(param_1 + 0x198b5));
                                                  }
                                                  iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4
                                                                       ,uVar2);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                }
                                                if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                  return -7;
                                                }
                                                if (*(uint *)(param_1 + 0x198b5) != 0) {
                                                  iVar4 = FUN_1010c5f0(0x475);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_25);
                                                  iVar4 = *(int *)(param_2 + 4);
                                                  uVar11 = 0;
                                                  if (*(int *)(param_1 + 0x198b5) != 0) {
                                                    puVar6 = (undefined4 *)(param_1 + 0x1a089);
                                                    do {
                                                      iVar10 = FUN_1010c5f0(*puVar6);
                                                      if (iVar10 != 0) {
                                                        return iVar10;
                                                      }
                                                      uVar11 = uVar11 + 1;
                                                      puVar6 = puVar6 + 1;
                                                    } while (uVar11 < *(uint *)(param_1 + 0x198b5));
                                                  }
                                                  iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4
                                                                       ,uVar2);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                }
                                                iVar4 = FUN_1010c5f0(0x485);
                                                if (iVar4 == 0) {
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_26);
                                                  iVar10 = *(int *)(param_2 + 4);
                                                  iVar4 = FUN_101857f0(param_2);
                                                  if ((((iVar4 == 0) &&
                                                       (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar10,uVar2),
                                                       iVar4 == 0)) &&
                                                      (iVar4 = FUN_1010c5f0(0x490), iVar4 == 0)) &&
                                                     ((iVar4 = FUN_1010c680(*(undefined4 *)
                                                                             (param_1 + 0x1a8d5),
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x1a8d9)),
                                                      iVar4 == 0 &&
                                                      (iVar4 = FUN_1010c5f0(0x4a5), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_101863e0(param_2);
                                                    if ((iVar4 == 0) &&
                                                       ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0 &&
                                                        (iVar4 = FUN_1010c5f0(0x4b5), iVar4 == 0))))
                                                    {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_28);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_1017e860(param_2);
                                                      if ((iVar4 == 0) &&
                                                         ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0
                                                          && (iVar4 = FUN_1010c5f0(0x4c5),
                                                             iVar4 == 0)))) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_29);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_10187410(param_2);
                                                        if ((iVar4 == 0) &&
                                                           ((iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0 &&
                                                            (iVar4 = FUN_1010c5f0(0x4d5), iVar4 == 0
                                                            )))) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_30);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_101145e0(param_2);
                                                          if ((iVar4 == 0) &&
                                                             (((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x4e0), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                         (param_1 + 0x1b66e)),
                                                  iVar4 == 0)))) {
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x4f5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_31);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        puVar6 = (undefined4 *)(param_1 + 0x1b672);
                                                        iVar10 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c560(*puVar6);
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                          puVar6 = puVar6 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x505);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_32);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      iVar10 = 0;
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        do {
                                                          iVar5 = FUN_1010c0c0(*(undefined1 *)
                                                                                (iVar10 + 0x1b73a +
                                                                                param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x515);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_33);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      iVar10 = 0;
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        puVar6 = (undefined4 *)(param_1 + 0x1b76c);
                                                        do {
                                                          iVar5 = FUN_1010c5f0(*puVar6);
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                          puVar6 = puVar6 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = FUN_1010c5f0(0x520);
                                                    if (((iVar4 == 0) &&
                                                        (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                               (param_1 + 0x1b834)),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x535), iVar4 == 0)) {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_34);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_10189ae0(param_2);
                                                      if (((iVar4 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x545), iVar4 == 0
                                                            )) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_35);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_1017f5b0(param_2);
                                                        if (((iVar4 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x555), iVar4 == 0)
                                                           ) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_36);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1015b200(param_2);
                                                          if (((iVar4 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0)) &&
                                                             ((iVar4 = FUN_1010c5f0(0x560),
                                                              iVar4 == 0 &&
                                                              ((iVar4 = FUN_1010c560(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x249a8)),
                                                               iVar4 == 0 &&
                                                               (iVar4 = FUN_1010c5f0(0x575),
                                                               iVar4 == 0)))))) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_37);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_1015d650(param_2);
                                                            if ((iVar4 == 0) &&
                                                               ((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x585), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_38);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_1018ad70(param_2);
                                                    if ((iVar4 == 0) &&
                                                       ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0 &&
                                                        (iVar4 = FUN_1010c5f0(0x595), iVar4 == 0))))
                                                    {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_39);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_1015ec00(param_2);
                                                      if ((iVar4 == 0) &&
                                                         ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0
                                                          && (iVar4 = FUN_1010c5f0(0x5a5),
                                                             iVar4 == 0)))) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_40);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_10181150(param_2);
                                                        if ((iVar4 == 0) &&
                                                           ((iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0 &&
                                                            (iVar4 = FUN_1010c5f0(0x5b5), iVar4 == 0
                                                            )))) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_41);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1018c360(param_2);
                                                          if ((iVar4 == 0) &&
                                                             ((iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0 &&
                                                              (iVar4 = FUN_1010c5f0(0x5c5),
                                                              iVar4 == 0)))) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_42);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_1018cc80(param_2);
                                                            if ((iVar4 == 0) &&
                                                               ((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x5d5), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_43);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_10180180(param_2);
                                                    if ((iVar4 == 0) &&
                                                       (((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                               - iVar10,uVar2),
                                                         iVar4 == 0 &&
                                                         (iVar4 = FUN_1010c5f0(0x5e0), iVar4 == 0))
                                                        && (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                                  (param_1 + 0x31ffb
                                                                                  )), iVar4 == 0))))
                                                    {
                                                      iVar4 = *(int *)(param_1 + 0x31ffb);
                                                      if (iVar4 < 0) {
                                                        return -6;
                                                      }
                                                      if (0x2ee < iVar4) {
                                                        return -7;
                                                      }
                                                      if (0 < iVar4) {
                                                        iVar4 = FUN_1010c5f0(0x5f5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_44);
                                                        iVar4 = *(int *)(param_2 + 4);
                                                        iVar10 = 0;
                                                        if (0 < *(int *)(param_1 + 0x31ffb)) {
                                                          do {
                                                            iVar5 = FUN_101159e0(*(undefined1 *)
                                                                                  (iVar10 + 0x31fff
                                                                                  + param_1));
                                                            if (iVar5 != 0) {
                                                              return iVar5;
                                                            }
                                                            iVar10 = iVar10 + 1;
                                                          } while (iVar10 < *(int *)(param_1 +
                                                                                    0x31ffb));
                                                        }
                                                        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar4,uVar2);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                      }
                                                      iVar4 = FUN_1010c5f0(0x605);
                                                      if (iVar4 == 0) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_45);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_101809e0(param_2);
                                                        if (((iVar4 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x615), iVar4 == 0)
                                                           ) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_46);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1018f330(param_2);
                                                          if (((iVar4 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x625),
                                                             iVar4 == 0)) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_47);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_10190770(param_2);
                                                            if (((iVar4 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x635), iVar4 == 0)) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_48);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_10192610(param_2);
                                                    if (((iVar4 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0)) &&
                                                       ((((iVar4 = FUN_1010c5f0(0x640), iVar4 == 0
                                                          && ((iVar4 = FUN_1010c560(*(undefined4 *)
                                                                                     (param_1 +
                                                                                     0x32763)),
                                                              iVar4 == 0 &&
                                                              (iVar4 = FUN_1010c5f0(0x660),
                                                              iVar4 == 0)))) &&
                                                         (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                                (param_1 + 0x32767))
                                                         , iVar4 == 0)) &&
                                                        ((iVar4 = FUN_1010c5f0(0x670), iVar4 == 0 &&
                                                         (iVar4 = FUN_1010c560(*(undefined4 *)
                                                                                (param_1 + 0x3276b))
                                                         , iVar4 == 0)))))) {
                                                      iVar10 = *(int *)(param_1 + 0x3276b);
                                                      if (iVar10 < 0) {
                                                        return -6;
                                                      }
                                                      if (6 < iVar10) {
                                                        return -7;
                                                      }
                                                      if ((0 < iVar10) &&
                                                         (iVar4 = FUN_1010c5f0(0x685), iVar4 == 0))
                                                      {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_49);
                                                        iVar4 = *(int *)(param_2 + 4);
                                                        iVar10 = 0;
                                                        uVar8 = extraout_ECX_50;
                                                        if (0 < *(int *)(param_1 + 0x3276b)) {
                                                          do {
                                                            uVar3 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(uVar8);
                                                            iVar5 = *(int *)(param_2 + 4);
                                                            iVar7 = FUN_10193050(param_2);
                                                            if (iVar7 != 0) {
                                                              return iVar7;
                                                            }
                                                            iVar5 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                         4) - iVar5,
                                                                                 uVar3);
                                                            if (iVar5 != 0) {
                                                              return iVar5;
                                                            }
                                                            iVar10 = iVar10 + 1;
                                                            uVar8 = extraout_ECX_51;
                                                          } while (iVar10 < *(int *)(param_1 +
                                                                                    0x3276b));
                                                        }
                                                        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar4,uVar2);
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
            }
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10195270 @ 10195270  size=5864 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10195270(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 uVar8;
  undefined4 extraout_ECX_51;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  
  iVar4 = FUN_1010c5f0(0x65);
  if (iVar4 == 0) {
    uVar11 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar11) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar1)) {
      *(uint *)(param_2 + 4) = uVar1 + 4;
    }
    iVar10 = *(int *)(param_2 + 4);
    iVar4 = FUN_10164050(param_2);
    if ((((iVar4 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar11), iVar4 == 0))
        && (iVar4 = FUN_1010c5f0(0xa3), iVar4 == 0)) &&
       (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 10)), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 10);
      if (iVar4 < 0) {
        return -6;
      }
      if (9 < iVar4) {
        return -7;
      }
      if (0 < iVar4) {
        iVar4 = FUN_1010c5f0(0xb5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX);
        iVar4 = *(int *)(param_2 + 4);
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 10)) {
          puVar6 = (undefined4 *)(param_1 + 0xe);
          do {
            iVar5 = FUN_1010c190(*puVar6);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar10 = iVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar10 < *(int *)(param_1 + 10));
        }
        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      iVar4 = FUN_1010c5f0(0xc2);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x32));
      if (iVar4 != 0) {
        return iVar4;
      }
      if (0x100 < *(ushort *)(param_1 + 0x32)) {
        return -7;
      }
      if (*(ushort *)(param_1 + 0x32) != 0) {
        iVar4 = FUN_1010c5f0(0xd5);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_2 + 4);
        uVar9 = 0;
        uVar8 = extraout_ECX_01;
        if (*(short *)(param_1 + 0x32) != 0) {
          do {
            uVar3 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(uVar8);
            iVar10 = *(int *)(param_2 + 4);
            iVar5 = FUN_10166860(param_2);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar10 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar3);
            if (iVar10 != 0) {
              return iVar10;
            }
            uVar9 = uVar9 + 1;
            uVar8 = extraout_ECX_02;
          } while (uVar9 < *(ushort *)(param_1 + 0x32));
        }
        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      iVar4 = FUN_1010c5f0(0x105);
      if (iVar4 == 0) {
        uVar2 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_03);
        iVar10 = *(int *)(param_2 + 4);
        iVar4 = FUN_10170f00(param_2);
        if (((iVar4 == 0) &&
            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
           (iVar4 = FUN_1010c5f0(0x115), iVar4 == 0)) {
          uVar2 = *(undefined4 *)(param_2 + 4);
          FUN_1010bf70(extraout_ECX_04);
          iVar10 = *(int *)(param_2 + 4);
          iVar4 = FUN_10172390(param_2);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
             (iVar4 = FUN_1010c5f0(0x125), iVar4 == 0)) {
            uVar2 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(extraout_ECX_05);
            iVar10 = *(int *)(param_2 + 4);
            iVar4 = FUN_1024c760(param_2);
            if (((iVar4 == 0) &&
                (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
               (iVar4 = FUN_1010c5f0(0x135), iVar4 == 0)) {
              uVar2 = *(undefined4 *)(param_2 + 4);
              FUN_1010bf70(extraout_ECX_06);
              iVar10 = *(int *)(param_2 + 4);
              iVar4 = FUN_1022a910(param_2);
              if (((iVar4 == 0) &&
                  (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                 (((((iVar4 = FUN_1010c5f0(0x143), iVar4 == 0 &&
                     ((iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c05)), iVar4 == 0 &&
                      (iVar4 = FUN_1010c5f0(0x152), iVar4 == 0)))) &&
                    (iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1c09)), iVar4 == 0)) &&
                   (((((iVar4 = FUN_1010c5f0(0x161), iVar4 == 0 &&
                       (iVar4 = FUN_1010c0c0(*(undefined1 *)(param_1 + 0x1c0b)), iVar4 == 0)) &&
                      (iVar4 = FUN_1010c5f0(0x171), iVar4 == 0)) &&
                     (((iVar4 = FUN_1010c0c0(*(undefined1 *)(param_1 + 0x1c0c)), iVar4 == 0 &&
                       (iVar4 = FUN_1010c5f0(0x183), iVar4 == 0)) &&
                      ((iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c0d)), iVar4 == 0 &&
                       ((iVar4 = FUN_1010c5f0(0x1c3), iVar4 == 0 &&
                        (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c11)), iVar4 == 0))))))))
                    && (iVar4 = FUN_1010c5f0(0x1d3), iVar4 == 0)))) &&
                  ((iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x1c15)), iVar4 == 0 &&
                   (iVar4 = FUN_1010c5f0(0x1e5), iVar4 == 0)))))) {
                uVar2 = *(undefined4 *)(param_2 + 4);
                FUN_1010bf70(extraout_ECX_07);
                iVar10 = *(int *)(param_2 + 4);
                iVar4 = FUN_1016ff70(param_2);
                if ((iVar4 == 0) &&
                   (((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                     (iVar4 = FUN_1010c5f0(0x1f2), iVar4 == 0)) &&
                    (iVar4 = FUN_1010c120(*(undefined2 *)(param_1 + 0x1d1e)), iVar4 == 0)))) {
                  if (0x80 < *(ushort *)(param_1 + 0x1d1e)) {
                    return -7;
                  }
                  if (*(ushort *)(param_1 + 0x1d1e) != 0) {
                    iVar4 = FUN_1010c5f0(0x205);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    uVar2 = *(undefined4 *)(param_2 + 4);
                    FUN_1010bf70(extraout_ECX_08);
                    iVar4 = *(int *)(param_2 + 4);
                    if (*(short *)(param_1 + 0x1d1e) != 0) {
                      uVar9 = 0;
                      do {
                        iVar10 = FUN_1010c0c0(*(undefined1 *)(uVar9 + 0x1d20 + param_1));
                        if (iVar10 != 0) {
                          return iVar10;
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *(ushort *)(param_1 + 0x1d1e));
                    }
                    iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                  }
                  iVar4 = FUN_1010c5f0(0x215);
                  if (iVar4 == 0) {
                    uVar2 = *(undefined4 *)(param_2 + 4);
                    FUN_1010bf70(extraout_ECX_09);
                    iVar10 = *(int *)(param_2 + 4);
                    iVar4 = FUN_1016a9d0(param_2);
                    if (((iVar4 == 0) &&
                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                       (iVar4 = FUN_1010c5f0(0x2a5), iVar4 == 0)) {
                      uVar2 = *(undefined4 *)(param_2 + 4);
                      FUN_1010bf70(extraout_ECX_10);
                      iVar10 = *(int *)(param_2 + 4);
                      iVar4 = FUN_10175fa0(param_2);
                      if (((iVar4 == 0) &&
                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0))
                         && (iVar4 = FUN_1010c5f0(0x2b5), iVar4 == 0)) {
                        uVar2 = *(undefined4 *)(param_2 + 4);
                        FUN_1010bf70(extraout_ECX_11);
                        iVar10 = *(int *)(param_2 + 4);
                        iVar4 = FUN_101775b0(param_2);
                        if (((iVar4 == 0) &&
                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2), iVar4 == 0)
                            ) && (iVar4 = FUN_1010c5f0(0x2f5), iVar4 == 0)) {
                          uVar2 = *(undefined4 *)(param_2 + 4);
                          FUN_1010bf70(extraout_ECX_12);
                          iVar10 = *(int *)(param_2 + 4);
                          iVar4 = FUN_10158400(param_2);
                          if (((iVar4 == 0) &&
                              (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                              iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x345), iVar4 == 0)) {
                            uVar2 = *(undefined4 *)(param_2 + 4);
                            FUN_1010bf70(extraout_ECX_13);
                            iVar10 = *(int *)(param_2 + 4);
                            iVar4 = FUN_1017b400(param_2);
                            if (((iVar4 == 0) &&
                                (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x355), iVar4 == 0)) {
                              uVar2 = *(undefined4 *)(param_2 + 4);
                              FUN_1010bf70(extraout_ECX_14);
                              iVar10 = *(int *)(param_2 + 4);
                              iVar4 = FUN_10231720(param_2);
                              if (((iVar4 == 0) &&
                                  (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                  iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x365), iVar4 == 0)) {
                                uVar2 = *(undefined4 *)(param_2 + 4);
                                FUN_1010bf70(extraout_ECX_15);
                                iVar10 = *(int *)(param_2 + 4);
                                iVar4 = FUN_10211530(param_2);
                                if (((iVar4 == 0) &&
                                    (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                    iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x375), iVar4 == 0)) {
                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                  FUN_1010bf70(extraout_ECX_16);
                                  iVar10 = *(int *)(param_2 + 4);
                                  iVar4 = FUN_1017de50(param_2);
                                  if (((iVar4 == 0) &&
                                      (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                      iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x385), iVar4 == 0)) {
                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                    FUN_1010bf70(extraout_ECX_17);
                                    iVar10 = *(int *)(param_2 + 4);
                                    iVar4 = FUN_10182130(param_2);
                                    if (((iVar4 == 0) &&
                                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2),
                                        iVar4 == 0)) && (iVar4 = FUN_1010c5f0(0x395), iVar4 == 0)) {
                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                      FUN_1010bf70(extraout_ECX_18);
                                      iVar10 = *(int *)(param_2 + 4);
                                      iVar4 = FUN_10184590(param_2);
                                      if (((iVar4 == 0) &&
                                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,uVar2
                                                               ), iVar4 == 0)) &&
                                         (iVar4 = FUN_1010c5f0(0x3a5), iVar4 == 0)) {
                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                        FUN_1010bf70(extraout_ECX_19);
                                        iVar10 = *(int *)(param_2 + 4);
                                        iVar4 = FUN_1017d480(param_2);
                                        if (((iVar4 == 0) &&
                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,
                                                                  uVar2), iVar4 == 0)) &&
                                           (iVar4 = FUN_1010c5f0(0x3b5), iVar4 == 0)) {
                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                          FUN_1010bf70(extraout_ECX_20);
                                          iVar10 = *(int *)(param_2 + 4);
                                          iVar4 = FUN_10111900(param_2);
                                          if ((((iVar4 == 0) &&
                                               (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar10,
                                                                     uVar2), iVar4 == 0)) &&
                                              (iVar4 = FUN_1010c5f0(0x3c3), iVar4 == 0)) &&
                                             (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                    (param_1 + 0x193bd)), iVar4 == 0
                                             )) {
                                            iVar4 = *(int *)(param_1 + 0x193bd);
                                            if (iVar4 < 0) {
                                              return -6;
                                            }
                                            if (0x3c < iVar4) {
                                              return -7;
                                            }
                                            if (0 < iVar4) {
                                              iVar4 = FUN_1010c5f0(0x3d5);
                                              if (iVar4 != 0) {
                                                return iVar4;
                                              }
                                              uVar2 = *(undefined4 *)(param_2 + 4);
                                              FUN_1010bf70(extraout_ECX_21);
                                              iVar4 = *(int *)(param_2 + 4);
                                              iVar10 = 0;
                                              if (0 < *(int *)(param_1 + 0x193bd)) {
                                                puVar6 = (undefined4 *)(param_1 + 0x193c1);
                                                do {
                                                  iVar5 = FUN_1010c190(*puVar6);
                                                  if (iVar5 != 0) {
                                                    return iVar5;
                                                  }
                                                  iVar10 = iVar10 + 1;
                                                  puVar6 = puVar6 + 1;
                                                } while (iVar10 < *(int *)(param_1 + 0x193bd));
                                              }
                                              iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                   uVar2);
                                              if (iVar4 != 0) {
                                                return iVar4;
                                              }
                                            }
                                            iVar4 = FUN_1010c5f0(0x3e3);
                                            if ((iVar4 == 0) &&
                                               (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                      (param_1 + 0x194b1)),
                                               iVar4 == 0)) {
                                              iVar4 = *(int *)(param_1 + 0x194b1);
                                              if (iVar4 < 0) {
                                                return -6;
                                              }
                                              if (0x80 < iVar4) {
                                                return -7;
                                              }
                                              if (0 < iVar4) {
                                                iVar4 = FUN_1010c5f0(0x3f5);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                                uVar2 = *(undefined4 *)(param_2 + 4);
                                                FUN_1010bf70(extraout_ECX_22);
                                                iVar4 = *(int *)(param_2 + 4);
                                                iVar10 = 0;
                                                if (0 < *(int *)(param_1 + 0x194b1)) {
                                                  puVar6 = (undefined4 *)(param_1 + 0x194b5);
                                                  do {
                                                    iVar5 = FUN_1010c190(*puVar6);
                                                    if (iVar5 != 0) {
                                                      return iVar5;
                                                    }
                                                    iVar10 = iVar10 + 1;
                                                    puVar6 = puVar6 + 1;
                                                  } while (iVar10 < *(int *)(param_1 + 0x194b1));
                                                }
                                                iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                     uVar2);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                              }
                                              iVar4 = *(int *)(param_1 + 0x194b1);
                                              if (iVar4 < 0) {
                                                return -6;
                                              }
                                              if (0x80 < iVar4) {
                                                return -7;
                                              }
                                              if (0 < iVar4) {
                                                iVar4 = FUN_1010c5f0(0x405);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                                uVar2 = *(undefined4 *)(param_2 + 4);
                                                FUN_1010bf70(extraout_ECX_23);
                                                iVar4 = *(int *)(param_2 + 4);
                                                iVar10 = 0;
                                                if (0 < *(int *)(param_1 + 0x194b1)) {
                                                  puVar6 = (undefined4 *)(param_1 + 0x196b5);
                                                  do {
                                                    iVar5 = FUN_1010c190(*puVar6);
                                                    if (iVar5 != 0) {
                                                      return iVar5;
                                                    }
                                                    iVar10 = iVar10 + 1;
                                                    puVar6 = puVar6 + 1;
                                                  } while (iVar10 < *(int *)(param_1 + 0x194b1));
                                                }
                                                iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,
                                                                     uVar2);
                                                if (iVar4 != 0) {
                                                  return iVar4;
                                                }
                                              }
                                              iVar4 = FUN_1010c5f0(0x453);
                                              if ((iVar4 == 0) &&
                                                 (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                        (param_1 + 0x198b5)),
                                                 iVar4 == 0)) {
                                                if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                  return -7;
                                                }
                                                if (*(uint *)(param_1 + 0x198b5) != 0) {
                                                  iVar4 = FUN_1010c5f0(0x465);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_24);
                                                  iVar4 = *(int *)(param_2 + 4);
                                                  uVar11 = 0;
                                                  if (*(int *)(param_1 + 0x198b5) != 0) {
                                                    puVar6 = (undefined4 *)(param_1 + 0x198b9);
                                                    do {
                                                      iVar10 = FUN_1010c190(*puVar6);
                                                      if (iVar10 != 0) {
                                                        return iVar10;
                                                      }
                                                      uVar11 = uVar11 + 1;
                                                      puVar6 = puVar6 + 1;
                                                    } while (uVar11 < *(uint *)(param_1 + 0x198b5));
                                                  }
                                                  iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4
                                                                       ,uVar2);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                }
                                                if (500 < *(uint *)(param_1 + 0x198b5)) {
                                                  return -7;
                                                }
                                                if (*(uint *)(param_1 + 0x198b5) != 0) {
                                                  iVar4 = FUN_1010c5f0(0x475);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_25);
                                                  iVar4 = *(int *)(param_2 + 4);
                                                  uVar11 = 0;
                                                  if (*(int *)(param_1 + 0x198b5) != 0) {
                                                    puVar6 = (undefined4 *)(param_1 + 0x1a089);
                                                    do {
                                                      iVar10 = FUN_1010c190(*puVar6);
                                                      if (iVar10 != 0) {
                                                        return iVar10;
                                                      }
                                                      uVar11 = uVar11 + 1;
                                                      puVar6 = puVar6 + 1;
                                                    } while (uVar11 < *(uint *)(param_1 + 0x198b5));
                                                  }
                                                  iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4
                                                                       ,uVar2);
                                                  if (iVar4 != 0) {
                                                    return iVar4;
                                                  }
                                                }
                                                iVar4 = FUN_1010c5f0(0x485);
                                                if (iVar4 == 0) {
                                                  uVar2 = *(undefined4 *)(param_2 + 4);
                                                  FUN_1010bf70(extraout_ECX_26);
                                                  iVar10 = *(int *)(param_2 + 4);
                                                  iVar4 = FUN_10185950(param_2);
                                                  if ((((iVar4 == 0) &&
                                                       (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar10,uVar2),
                                                       iVar4 == 0)) &&
                                                      (iVar4 = FUN_1010c5f0(0x494), iVar4 == 0)) &&
                                                     ((iVar4 = FUN_1010c200(*(undefined4 *)
                                                                             (param_1 + 0x1a8d5),
                                                                            *(undefined4 *)
                                                                             (param_1 + 0x1a8d9)),
                                                      iVar4 == 0 &&
                                                      (iVar4 = FUN_1010c5f0(0x4a5), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_27);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_10186600(param_2);
                                                    if ((iVar4 == 0) &&
                                                       ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0 &&
                                                        (iVar4 = FUN_1010c5f0(0x4b5), iVar4 == 0))))
                                                    {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_28);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_1017ea00(param_2);
                                                      if ((iVar4 == 0) &&
                                                         ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0
                                                          && (iVar4 = FUN_1010c5f0(0x4c5),
                                                             iVar4 == 0)))) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_29);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_10187870(param_2);
                                                        if ((iVar4 == 0) &&
                                                           ((iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0 &&
                                                            (iVar4 = FUN_1010c5f0(0x4d5), iVar4 == 0
                                                            )))) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_30);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_10114720(param_2);
                                                          if ((iVar4 == 0) &&
                                                             (((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x4e3), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                         (param_1 + 0x1b66e)),
                                                  iVar4 == 0)))) {
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x4f5);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_31);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        puVar6 = (undefined4 *)(param_1 + 0x1b672);
                                                        iVar10 = 0;
                                                        do {
                                                          iVar5 = FUN_1010c190(*puVar6);
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                          puVar6 = puVar6 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x505);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_32);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      iVar10 = 0;
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        do {
                                                          iVar5 = FUN_1010c0c0(*(undefined1 *)
                                                                                (iVar10 + 0x1b73a +
                                                                                param_1));
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = *(int *)(param_1 + 0x1b66e);
                                                    if (iVar4 < 0) {
                                                      return -6;
                                                    }
                                                    if (0x32 < iVar4) {
                                                      return -7;
                                                    }
                                                    if (0 < iVar4) {
                                                      iVar4 = FUN_1010c5f0(0x515);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_33);
                                                      iVar4 = *(int *)(param_2 + 4);
                                                      iVar10 = 0;
                                                      if (0 < *(int *)(param_1 + 0x1b66e)) {
                                                        puVar6 = (undefined4 *)(param_1 + 0x1b76c);
                                                        do {
                                                          iVar5 = FUN_1010c190(*puVar6);
                                                          if (iVar5 != 0) {
                                                            return iVar5;
                                                          }
                                                          iVar10 = iVar10 + 1;
                                                          puVar6 = puVar6 + 1;
                                                        } while (iVar10 < *(int *)(param_1 + 0x1b66e
                                                                                  ));
                                                      }
                                                      iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                           iVar4,uVar2);
                                                      if (iVar4 != 0) {
                                                        return iVar4;
                                                      }
                                                    }
                                                    iVar4 = FUN_1010c5f0(0x523);
                                                    if (((iVar4 == 0) &&
                                                        (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                               (param_1 + 0x1b834)),
                                                        iVar4 == 0)) &&
                                                       (iVar4 = FUN_1010c5f0(0x535), iVar4 == 0)) {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_34);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_10189bf0(param_2);
                                                      if (((iVar4 == 0) &&
                                                          (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0))
                                                         && (iVar4 = FUN_1010c5f0(0x545), iVar4 == 0
                                                            )) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_35);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_1017f770(param_2);
                                                        if (((iVar4 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x555), iVar4 == 0)
                                                           ) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_36);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1015b620(param_2);
                                                          if (((iVar4 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0)) &&
                                                             ((iVar4 = FUN_1010c5f0(0x563),
                                                              iVar4 == 0 &&
                                                              ((iVar4 = FUN_1010c190(*(undefined4 *)
                                                                                      (param_1 +
                                                                                      0x249a8)),
                                                               iVar4 == 0 &&
                                                               (iVar4 = FUN_1010c5f0(0x575),
                                                               iVar4 == 0)))))) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_37);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_1015d980(param_2);
                                                            if ((iVar4 == 0) &&
                                                               ((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x585), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_38);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_1018b0a0(param_2);
                                                    if ((iVar4 == 0) &&
                                                       ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0 &&
                                                        (iVar4 = FUN_1010c5f0(0x595), iVar4 == 0))))
                                                    {
                                                      uVar2 = *(undefined4 *)(param_2 + 4);
                                                      FUN_1010bf70(extraout_ECX_39);
                                                      iVar10 = *(int *)(param_2 + 4);
                                                      iVar4 = FUN_1015eda0(param_2);
                                                      if ((iVar4 == 0) &&
                                                         ((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4
                                                                                        ) - iVar10,
                                                                                uVar2), iVar4 == 0
                                                          && (iVar4 = FUN_1010c5f0(0x5a5),
                                                             iVar4 == 0)))) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_40);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_10181230(param_2);
                                                        if ((iVar4 == 0) &&
                                                           ((iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0 &&
                                                            (iVar4 = FUN_1010c5f0(0x5b5), iVar4 == 0
                                                            )))) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_41);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1018c420(param_2);
                                                          if ((iVar4 == 0) &&
                                                             ((iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0 &&
                                                              (iVar4 = FUN_1010c5f0(0x5c5),
                                                              iVar4 == 0)))) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_42);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_1018cdf0(param_2);
                                                            if ((iVar4 == 0) &&
                                                               ((iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0 &&
                                                  (iVar4 = FUN_1010c5f0(0x5d5), iVar4 == 0)))) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_43);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_10180270(param_2);
                                                    if ((iVar4 == 0) &&
                                                       (((iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                               - iVar10,uVar2),
                                                         iVar4 == 0 &&
                                                         (iVar4 = FUN_1010c5f0(0x5e3), iVar4 == 0))
                                                        && (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                                  (param_1 + 0x31ffb
                                                                                  )), iVar4 == 0))))
                                                    {
                                                      iVar4 = *(int *)(param_1 + 0x31ffb);
                                                      if (iVar4 < 0) {
                                                        return -6;
                                                      }
                                                      if (0x2ee < iVar4) {
                                                        return -7;
                                                      }
                                                      if (0 < iVar4) {
                                                        iVar4 = FUN_1010c5f0(0x5f5);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_44);
                                                        iVar4 = *(int *)(param_2 + 4);
                                                        iVar10 = 0;
                                                        if (0 < *(int *)(param_1 + 0x31ffb)) {
                                                          do {
                                                            iVar5 = FUN_101159e0(*(undefined1 *)
                                                                                  (iVar10 + 0x31fff
                                                                                  + param_1));
                                                            if (iVar5 != 0) {
                                                              return iVar5;
                                                            }
                                                            iVar10 = iVar10 + 1;
                                                          } while (iVar10 < *(int *)(param_1 +
                                                                                    0x31ffb));
                                                        }
                                                        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar4,uVar2);
                                                        if (iVar4 != 0) {
                                                          return iVar4;
                                                        }
                                                      }
                                                      iVar4 = FUN_1010c5f0(0x605);
                                                      if (iVar4 == 0) {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_45);
                                                        iVar10 = *(int *)(param_2 + 4);
                                                        iVar4 = FUN_10180a60(param_2);
                                                        if (((iVar4 == 0) &&
                                                            (iVar4 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                          4) -
                                                                                  iVar10,uVar2),
                                                            iVar4 == 0)) &&
                                                           (iVar4 = FUN_1010c5f0(0x615), iVar4 == 0)
                                                           ) {
                                                          uVar2 = *(undefined4 *)(param_2 + 4);
                                                          FUN_1010bf70(extraout_ECX_46);
                                                          iVar10 = *(int *)(param_2 + 4);
                                                          iVar4 = FUN_1018f4a0(param_2);
                                                          if (((iVar4 == 0) &&
                                                              (iVar4 = FUN_1010c3c0(*(int *)(param_2
                                                                                            + 4) -
                                                                                    iVar10,uVar2),
                                                              iVar4 == 0)) &&
                                                             (iVar4 = FUN_1010c5f0(0x625),
                                                             iVar4 == 0)) {
                                                            uVar2 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(extraout_ECX_47);
                                                            iVar10 = *(int *)(param_2 + 4);
                                                            iVar4 = FUN_10190890(param_2);
                                                            if (((iVar4 == 0) &&
                                                                (iVar4 = FUN_1010c3c0(*(int *)(
                                                  param_2 + 4) - iVar10,uVar2), iVar4 == 0)) &&
                                                  (iVar4 = FUN_1010c5f0(0x635), iVar4 == 0)) {
                                                    uVar2 = *(undefined4 *)(param_2 + 4);
                                                    FUN_1010bf70(extraout_ECX_48);
                                                    iVar10 = *(int *)(param_2 + 4);
                                                    iVar4 = FUN_10192780(param_2);
                                                    if (((iVar4 == 0) &&
                                                        (iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4)
                                                                              - iVar10,uVar2),
                                                        iVar4 == 0)) &&
                                                       ((((iVar4 = FUN_1010c5f0(0x643), iVar4 == 0
                                                          && ((iVar4 = FUN_1010c190(*(undefined4 *)
                                                                                     (param_1 +
                                                                                     0x32763)),
                                                              iVar4 == 0 &&
                                                              (iVar4 = FUN_1010c5f0(0x663),
                                                              iVar4 == 0)))) &&
                                                         (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                                (param_1 + 0x32767))
                                                         , iVar4 == 0)) &&
                                                        ((iVar4 = FUN_1010c5f0(0x673), iVar4 == 0 &&
                                                         (iVar4 = FUN_1010c190(*(undefined4 *)
                                                                                (param_1 + 0x3276b))
                                                         , iVar4 == 0)))))) {
                                                      iVar10 = *(int *)(param_1 + 0x3276b);
                                                      if (iVar10 < 0) {
                                                        return -6;
                                                      }
                                                      if (6 < iVar10) {
                                                        return -7;
                                                      }
                                                      if ((0 < iVar10) &&
                                                         (iVar4 = FUN_1010c5f0(0x685), iVar4 == 0))
                                                      {
                                                        uVar2 = *(undefined4 *)(param_2 + 4);
                                                        FUN_1010bf70(extraout_ECX_49);
                                                        iVar4 = *(int *)(param_2 + 4);
                                                        iVar10 = 0;
                                                        uVar8 = extraout_ECX_50;
                                                        if (0 < *(int *)(param_1 + 0x3276b)) {
                                                          do {
                                                            uVar3 = *(undefined4 *)(param_2 + 4);
                                                            FUN_1010bf70(uVar8);
                                                            iVar5 = *(int *)(param_2 + 4);
                                                            iVar7 = FUN_101930a0(param_2);
                                                            if (iVar7 != 0) {
                                                              return iVar7;
                                                            }
                                                            iVar5 = FUN_1010c3c0(*(int *)(param_2 +
                                                                                         4) - iVar5,
                                                                                 uVar3);
                                                            if (iVar5 != 0) {
                                                              return iVar5;
                                                            }
                                                            iVar10 = iVar10 + 1;
                                                            uVar8 = extraout_ECX_51;
                                                          } while (iVar10 < *(int *)(param_1 +
                                                                                    0x3276b));
                                                        }
                                                        iVar4 = FUN_1010c3c0(*(int *)(param_2 + 4) -
                                                                             iVar4,uVar2);
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
            }
          }
        }
      }
    }
  }
  return iVar4;
}



