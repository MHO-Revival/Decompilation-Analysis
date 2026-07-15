/* ===== FUN_10128d30 @ 10128d30  size=387 ===== */
// calls: _wassert, memmove
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, memmove
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

uint __thiscall FUN_10128d30(undefined1 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *_Size;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar3 = param_3 + param_2[1];
  bVar4 = uVar3 < (uint)param_2[1];
  param_3 = uVar3;
  if ((uint)param_2[1] < uVar3) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (piVar1[2] == piVar1[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(piVar1[1] + *piVar1);
        piVar1[1] = piVar1[1] + 1;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        _Size = param_2;
        if (uVar3 != 0) {
          return uVar3;
        }
        if (&DAT_00000007 < param_2) {
          return 0xfffffffd;
        }
        if (param_1 == (undefined1 *)0xffffffff) {
          return 0xfffffff8;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2f8);
        }
        if ((int *)(piVar1[2] - piVar1[1]) < _Size) {
          return 0xfffffffe;
        }
        memmove(param_1 + 1,(void *)(*piVar1 + piVar1[1]),(size_t)_Size);
        piVar1[1] = (int)(piVar1[1] + (int)_Size);
        (param_1 + 1)[(int)_Size] = 0;
        uVar3 = param_3;
      }
      else {
        uVar2 = FUN_1010d4f0();
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)piVar1[1] < uVar3);
    bVar4 = uVar3 < (uint)piVar1[1];
  }
  return -(uint)bVar4 & 0xffffffde;
}



/* ===== FUN_101292e0 @ 101292e0  size=461 ===== */
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

int __thiscall FUN_101292e0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  byte bVar8;
  uint uVar9;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_101150a0(param_1[1]), iVar4 == 0)) {
        if (8 < (byte)param_1[1]) {
          return -7;
        }
        if (param_1[1] != 0) {
          iVar4 = FUN_1010c5f0(0x35);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10128930(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0x40);
        if ((iVar4 == 0) && (iVar4 = FUN_1010c5f0(*(undefined4 *)(param_1 + 0x6a)), iVar4 == 0)) {
          if (200000 < *(uint *)(param_1 + 0x6a)) {
            return -7;
          }
          if ((*(uint *)(param_1 + 0x6a) != 0) && (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_02);
            iVar2 = param_2[1];
            if (*(int *)(param_1 + 0x6a) != 0) {
              uVar9 = 0;
              do {
                iVar6 = FUN_1010c0c0(param_1[uVar9 + 0x6e]);
                if (iVar6 != 0) {
                  return iVar6;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(uint *)(param_1 + 0x6a));
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_101294b0 @ 101294b0  size=461 ===== */
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

int __thiscall FUN_101294b0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  byte bVar8;
  uint uVar9;
  
  iVar4 = FUN_1010c5f0(0x11);
  if (iVar4 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar4 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar4 = FUN_1010c5f0(0x21);
      if ((iVar4 == 0) && (iVar4 = FUN_101150a0(param_1[1]), iVar4 == 0)) {
        if (8 < (byte)param_1[1]) {
          return -7;
        }
        if (param_1[1] != 0) {
          iVar4 = FUN_1010c5f0(0x35);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar2 = param_2[1];
          bVar8 = 0;
          uVar7 = extraout_ECX_00;
          if (param_1[1] != '\0') {
            do {
              iVar6 = param_2[1];
              FUN_1010bf70(uVar7);
              iVar3 = param_2[1];
              iVar5 = FUN_10128a00(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar6 = FUN_1010c3c0(param_2[1] - iVar3,iVar6);
              if (iVar6 != 0) {
                return iVar6;
              }
              bVar8 = bVar8 + 1;
              uVar7 = extraout_ECX_01;
            } while (bVar8 < (byte)param_1[1]);
          }
          iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar4 = FUN_1010c5f0(0x43);
        if ((iVar4 == 0) && (iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + 0x6a)), iVar4 == 0)) {
          if (200000 < *(uint *)(param_1 + 0x6a)) {
            return -7;
          }
          if ((*(uint *)(param_1 + 0x6a) != 0) && (iVar4 = FUN_1010c5f0(0x55), iVar4 == 0)) {
            iVar4 = param_2[1];
            FUN_1010bf70(extraout_ECX_02);
            iVar2 = param_2[1];
            if (*(int *)(param_1 + 0x6a) != 0) {
              uVar9 = 0;
              do {
                iVar6 = FUN_1010c0c0(param_1[uVar9 + 0x6e]);
                if (iVar6 != 0) {
                  return iVar6;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(uint *)(param_1 + 0x6a));
            }
            iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10129d20 @ 10129d20  size=387 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[curNum]"
//   "[count]"
//   "[stores]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[storeSize]"
//   "[storeData]"

/* WARNING: Removing unreachable block (ram,0x10129da5) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[curNum]""
     ""[count]""
     ""[stores]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[storeSize]""
     ""[storeData]"" */

int __thiscall FUN_10129d20(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[curNum]","0x%02x",*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_1024a290(param_2,param_3,param_4,"[count]","0x%02x",param_1[1]), iVar2 == 0)) {
    if (8 < (byte)param_1[1]) {
      return -7;
    }
    bVar1 = 0;
    if (param_1[1] != 0) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[stores]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10128fc0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < (byte)param_1[1]);
    }
    iVar2 = FUN_1024a290(param_2,param_3,param_4,"[storeSize]",&DAT_11d9f574,
                         *(undefined4 *)(param_1 + 0x6a));
    if (iVar2 == 0) {
      if (200000 < *(uint *)(param_1 + 0x6a)) {
        return -7;
      }
      iVar2 = FUN_1024a3b0(extraout_ECX,"[storeData]",*(uint *)(param_1 + 0x6a),0);
      if (iVar2 == 0) {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x6a) != 0) {
          do {
            iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x6e]);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(param_1 + 0x6a));
        }
        iVar2 = FUN_1010c060(param_4);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_101305c0 @ 101305c0  size=480 ===== */
// calls: _wassert
// strings:
//   "[commerceCount]"
//   "[commerceInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[selectCommerceId]"
//   "[guildWarHistoryInfo]"
//   "[buffCount]"
//   "[commerceBuffInfo]"

/* WARNING: Removing unreachable block (ram,0x1013063c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[commerceCount]""
     ""[commerceInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[selectCommerceId]""
     ""[guildWarHistoryInfo]""
     ""[buffCount]""
     ""[commerceBuffInfo]"" */

int __thiscall FUN_101305c0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  
  uVar1 = param_2;
  iVar2 = FUN_1024a290(param_2,param_3,param_4,"[commerceCount]",&DAT_11d9e0b4,*param_1);
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 < 0) {
      return -6;
    }
    if (10 < iVar2) {
      return -7;
    }
    param_2 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_1024a140(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(uVar1,"%s[%u]%c","[commerceInfo]",param_2,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_1012f0f0(uVar1,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_2 = param_2 + 1;
      } while (param_2 < *param_1);
    }
    iVar2 = FUN_1024a290(uVar1,param_3,param_4,"[selectCommerceId]",&DAT_11d9e0b4,
                         *(undefined4 *)((int)param_1 + 0xae));
    if (((iVar2 == 0) &&
        (iVar2 = FUN_1024a290(uVar1,param_3,param_4,"[guildWarHistoryInfo]",&DAT_11d9f574,
                              *(undefined4 *)((int)param_1 + 0xb2)), iVar2 == 0)) &&
       (iVar2 = FUN_1024a290(uVar1,param_3,param_4,"[buffCount]",&DAT_11d9e0b4,
                             *(undefined4 *)((int)param_1 + 0xb6)), iVar2 == 0)) {
      iVar2 = *(int *)((int)param_1 + 0xb6);
      if (iVar2 < 0) {
        return -6;
      }
      if (5 < iVar2) {
        return -7;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = FUN_1024a230(param_4,"[commerceBuffInfo]",iVar3,iVar2);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = FUN_1012f750(uVar1,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar3 = iVar3 + 1;
          iVar2 = extraout_ECX;
        } while (iVar3 < *(int *)((int)param_1 + 0xb6));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_10131c10 @ 10131c10  size=227 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[guildFuncRecordInfosPkg]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10131c7b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[guildFuncRecordInfosPkg]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10131c10(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (500 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[guildFuncRecordInfosPkg]",iVar2,(int)(char)param_4
                            );
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10131250(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_101325f0 @ 101325f0  size=227 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[guildBuyRecordInfosPkg]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1013265b) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[guildBuyRecordInfosPkg]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_101325f0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (500 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[guildBuyRecordInfosPkg]",iVar2,(int)(char)param_4)
        ;
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10131250(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10139bc0 @ 10139bc0  size=225 ===== */
// calls: _wassert
// strings:
//   "[hisCount]"
//   "[sculptures]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10139c29) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[hisCount]""
     ""[sculptures]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10139bc0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[hisCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (3 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[sculptures]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10139290(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1013af60 @ 1013af60  size=225 ===== */
// calls: _wassert
// strings:
//   "[curCount]"
//   "[sculptures]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1013afc9) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[curCount]""
     ""[sculptures]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1013af60(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[curCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (5 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[sculptures]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1013a5d0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1013be60 @ 1013be60  size=229 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[equips]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[itemType]"

/* WARNING: Removing unreachable block (ram,0x1013bebc) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[equips]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[itemType]"" */

int __thiscall FUN_1013be60(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (0x28 < *param_1) {
      return -7;
    }
    uVar2 = 0;
    if (*param_1 != 0) {
      puVar3 = param_1 + 1;
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[equips]",uVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1024a290(param_2,iVar1,param_4,"[itemType]",&DAT_11d9e0b4,*puVar3);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1013c390 @ 1013c390  size=378 ===== */
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

int __thiscall FUN_1013c390(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_8;
  
  piVar2 = param_2;
  iVar5 = 0;
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x50a) = 0;
  uVar3 = param_3 + param_2[1];
  uVar8 = param_2[1];
  do {
    if (uVar3 <= uVar8) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)((int)param_1 + 0x50a) & 1) == 0) {
        *(uint *)((int)param_1 + 0x50a) = *(uint *)((int)param_1 + 0x50a) | 1;
      }
      iVar4 = FUN_1010ccb0(param_1);
LAB_1013c4be:
      iVar5 = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar4 = FUN_1010d4f0();
        goto LAB_1013c4be;
      }
      if ((*(uint *)((int)param_1 + 0x50a) >> 1 & 1) == 0) {
        *(uint *)((int)param_1 + 0x50a) = *(uint *)((int)param_1 + 0x50a) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      uVar8 = 0;
      param_3 = 0;
      piVar7 = param_2;
      do {
        if ((uint)piVar2[2] < (uint)piVar2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          piVar7 = param_2;
        }
        if (piVar2[2] == piVar2[1]) {
          return -2;
        }
        *(undefined1 *)(uVar8 + 4 + (int)param_1) = *(undefined1 *)(piVar2[1] + *piVar2);
        uVar6 = iVar4 + (int)piVar7;
        piVar2[1] = piVar2[1] + 1;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        iVar5 = param_3;
        if (uVar1 == uVar6) {
          *param_1 = uVar8 + 1;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x506);
    }
    uVar8 = piVar2[1];
  } while( true );
}



/* ===== FUN_1013c510 @ 1013c510  size=378 ===== */
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

int __thiscall FUN_1013c510(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_8;
  
  piVar2 = param_2;
  iVar5 = 0;
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x50a) = 0;
  uVar3 = param_3 + param_2[1];
  uVar8 = param_2[1];
  do {
    if (uVar3 <= uVar8) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)((int)param_1 + 0x50a) & 1) == 0) {
        *(uint *)((int)param_1 + 0x50a) = *(uint *)((int)param_1 + 0x50a) | 1;
      }
      iVar4 = FUN_1010c870(param_1);
LAB_1013c63e:
      iVar5 = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar4 = FUN_1010d4f0();
        goto LAB_1013c63e;
      }
      if ((*(uint *)((int)param_1 + 0x50a) >> 1 & 1) == 0) {
        *(uint *)((int)param_1 + 0x50a) = *(uint *)((int)param_1 + 0x50a) | 2;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      uVar8 = 0;
      param_3 = 0;
      piVar7 = param_2;
      do {
        if ((uint)piVar2[2] < (uint)piVar2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          piVar7 = param_2;
        }
        if (piVar2[2] == piVar2[1]) {
          return -2;
        }
        *(undefined1 *)(uVar8 + 4 + (int)param_1) = *(undefined1 *)(piVar2[1] + *piVar2);
        uVar6 = iVar4 + (int)piVar7;
        piVar2[1] = piVar2[1] + 1;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        iVar5 = param_3;
        if (uVar1 == uVar6) {
          *param_1 = uVar8 + 1;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x506);
    }
    uVar8 = piVar2[1];
  } while( true );
}



/* ===== FUN_101412a0 @ 101412a0  size=460 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[libs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[cfgCount]"
//   "[cfgs]"

/* WARNING: Removing unreachable block (ram,0x10141319) */
/* WARNING: Removing unreachable block (ram,0x101413f0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[libs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[cfgCount]""
     ""[cfgs]"" */

int __thiscall FUN_101412a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (4 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[libs]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10140430(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[cfgCount]",&DAT_11d9e0b4,param_1[0x54fd]);
    if (iVar1 == 0) {
      iVar1 = param_1[0x54fd];
      if (iVar1 < 0) {
        return -6;
      }
      if (10 < iVar1) {
        return -7;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          iVar1 = FUN_1024a140(param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[cfgs]",iVar2,(int)(char)param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_1013f770(param_2,iVar1,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[0x54fd]);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_101416d0 @ 101416d0  size=119 ===== */
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

void FUN_101416d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = FUN_10140860(param_1);
    if (iVar4 == 0) {
      FUN_1010c3c0(*(int *)(param_1 + 4) - iVar3,uVar1);
    }
  }
  return;
}



/* ===== FUN_10141750 @ 10141750  size=119 ===== */
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

void FUN_10141750(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1010c5f0(0x15);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = FUN_10140a40(param_1);
    if (iVar4 == 0) {
      FUN_1010c3c0(*(int *)(param_1 + 4) - iVar3,uVar1);
    }
  }
  return;
}



/* ===== FUN_10141ad0 @ 10141ad0  size=134 ===== */
// calls: _wassert
// strings:
//   "[libs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"

/* WARNING: Removing unreachable block (ram,0x10141ae0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[libs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable"" */

void FUN_10141ad0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[libs]",(int)(char)param_3), iVar1 == 0)) {
    if (param_2 < 0) {
      FUN_101412a0(param_1,param_2,param_3);
      return;
    }
    FUN_101412a0(param_1,param_2 + 1,param_3);
  }
  return;
}



/* ===== FUN_10143ac0 @ 10143ac0  size=119 ===== */
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

int __thiscall FUN_10143ac0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x20);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 1));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10143b40 @ 10143b40  size=119 ===== */
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

int __thiscall FUN_10143b40(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x23);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10143c90 @ 10143c90  size=236 ===== */
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

uint __thiscall FUN_10143c90(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[5] & 1) == 0) {
          *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
          }
          uVar1 = FUN_1010cbd0(param_1 + 1);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_10143d80 @ 10143d80  size=236 ===== */
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

uint __thiscall FUN_10143d80(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[5] & 1) == 0) {
          *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (local_8 >> 4 == 2) {
          if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 1);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_101441e0 @ 101441e0  size=146 ===== */
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

int __thiscall FUN_101441e0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x20);
      if (((iVar2 == 0) && (iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x30), iVar2 == 0)) {
        iVar2 = FUN_1010c560(*(undefined4 *)(param_1 + 5));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10144280 @ 10144280  size=146 ===== */
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

int __thiscall FUN_10144280(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x23);
      if (((iVar2 == 0) && (iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 1)), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x33), iVar2 == 0)) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 5));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_101443f0 @ 101443f0  size=258 ===== */
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

uint __thiscall FUN_101443f0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar3) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar1 = local_8 >> 4;
      if (uVar1 == 1) {
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar1 == 2) {
          if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
          }
          puVar2 = param_1 + 1;
LAB_1014447b:
          uVar1 = FUN_1010cbd0(puVar2);
        }
        else {
          if (uVar1 == 3) {
            if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
            }
            puVar2 = param_1 + 5;
            goto LAB_1014447b;
          }
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar3);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar3 < uVar1) & 0xffffffde;
}



/* ===== FUN_10144500 @ 10144500  size=258 ===== */
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

uint __thiscall FUN_10144500(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar3) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      uVar1 = local_8 >> 4;
      if (uVar1 == 1) {
        if ((param_1[9] & 1) == 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar1 == 2) {
          if ((*(uint *)(param_1 + 9) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
          }
          puVar2 = param_1 + 1;
LAB_1014458b:
          uVar1 = FUN_1010c870(puVar2);
        }
        else {
          if (uVar1 == 3) {
            if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
            }
            puVar2 = param_1 + 5;
            goto LAB_1014458b;
          }
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar3);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar3 < uVar1) & 0xffffffde;
}



/* ===== FUN_10144bc0 @ 10144bc0  size=356 ===== */
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

int __thiscall FUN_10144bc0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
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
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      }
      iVar2 = FUN_1010c870(param_1);
LAB_10144cee:
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else if (uVar3 == 2) {
      if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
      }
      if ((uint)(param_2[2] - param_2[1]) < 2) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(*param_2 + 1 + param_2[1]);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(*param_2 + param_2[1]);
      param_2[1] = param_2[1] + 2;
    }
    else {
      if (uVar3 != 3) {
        iVar2 = FUN_1010d4f0();
        goto LAB_10144cee;
      }
      if ((*(uint *)(param_1 + 8) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
      }
      if ((uint)(param_2[2] - param_2[1]) < 2) {
        return -2;
      }
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(*param_2 + 1 + param_2[1]);
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(*param_2 + param_2[1]);
      param_2[1] = param_2[1] + 2;
    }
    uVar3 = param_2[1];
  } while( true );
}



/* ===== FUN_10145430 @ 10145430  size=501 ===== */
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

int * __thiscall FUN_10145430(short *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar2 = param_3 + param_2[1];
  uVar4 = param_2[1];
  param_2 = (int *)0;
joined_r0x10145452:
  if (uVar2 <= uVar4) {
    if (uVar2 < (uint)piVar1[1]) {
      param_2 = (int *)0xffffffde;
    }
    return param_2;
  }
  iVar3 = FUN_1010ccb0(&local_8);
  if (iVar3 != 0) {
    return (int *)iVar3;
  }
  uVar4 = local_8 >> 4;
  if (uVar4 == 1) {
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 1;
    }
    param_2 = (int *)FUN_1010ca10(param_1);
LAB_101455c2:
    if (param_2 != (int *)0x0) {
      return (int *)(int)param_2;
    }
  }
  else if (uVar4 == 2) {
    if ((*(uint *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 2;
    }
    param_3 = 0;
    iVar3 = FUN_1010c870(&param_3);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    if (param_3 == 0) {
      return (int *)-0x25;
    }
    iVar3 = piVar1[1];
    sVar7 = 0;
    param_2 = (int *)0x0;
    do {
      if ((uint)piVar1[2] < (uint)piVar1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar1[2] == piVar1[1]) {
        return (int *)-2;
      }
      *(undefined1 *)(sVar7 + 2 + (int)param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
      piVar1[1] = piVar1[1] + 1;
      uVar6 = param_3 + iVar3;
      uVar4 = piVar1[1];
      if (uVar6 <= uVar4 && uVar4 != uVar6) {
        return (int *)-0x22;
      }
      if (uVar4 == uVar6) goto LAB_101455a8;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 10);
  }
  else {
    if (uVar4 != 3) {
      param_2 = (int *)FUN_1010d4f0();
      goto LAB_101455c2;
    }
    if ((*(uint *)(param_1 + 0x1a) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 4;
    }
    param_3 = 0;
    iVar3 = FUN_1010c870(&param_3);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    if (param_3 == 0) {
      return (int *)-0x25;
    }
    iVar3 = piVar1[1];
    sVar7 = 0;
    do {
      iVar5 = FUN_1010ccb0(param_1 + (sVar7 + 3) * 2);
      if (iVar5 != 0) {
        return (int *)iVar5;
      }
      uVar6 = param_3 + iVar3;
      uVar4 = piVar1[1];
      if (uVar6 <= uVar4 && uVar4 != uVar6) {
        return (int *)-0x22;
      }
      param_2 = (int *)0x0;
      if (uVar4 == uVar6) goto LAB_101455a8;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 10);
  }
  goto LAB_101455cb;
LAB_101455a8:
  param_2 = (int *)0x0;
  *param_1 = sVar7 + 1;
LAB_101455cb:
  uVar4 = piVar1[1];
  goto joined_r0x10145452;
}



/* ===== FUN_10145630 @ 10145630  size=501 ===== */
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

int * __thiscall FUN_10145630(short *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar2 = param_3 + param_2[1];
  uVar4 = param_2[1];
  param_2 = (int *)0;
joined_r0x10145652:
  if (uVar2 <= uVar4) {
    if (uVar2 < (uint)piVar1[1]) {
      param_2 = (int *)0xffffffde;
    }
    return param_2;
  }
  iVar3 = FUN_1010ccb0(&local_8);
  if (iVar3 != 0) {
    return (int *)iVar3;
  }
  uVar4 = local_8 >> 4;
  if (uVar4 == 1) {
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 1;
    }
    param_2 = (int *)FUN_1010c800(param_1);
LAB_101457c2:
    if (param_2 != (int *)0x0) {
      return (int *)(int)param_2;
    }
  }
  else if (uVar4 == 2) {
    if ((*(uint *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 2;
    }
    param_3 = 0;
    iVar3 = FUN_1010c870(&param_3);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    if (param_3 == 0) {
      return (int *)-0x25;
    }
    iVar3 = piVar1[1];
    sVar7 = 0;
    param_2 = (int *)0x0;
    do {
      if ((uint)piVar1[2] < (uint)piVar1[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar1[2] == piVar1[1]) {
        return (int *)-2;
      }
      *(undefined1 *)(sVar7 + 2 + (int)param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
      piVar1[1] = piVar1[1] + 1;
      uVar6 = param_3 + iVar3;
      uVar4 = piVar1[1];
      if (uVar6 <= uVar4 && uVar4 != uVar6) {
        return (int *)-0x22;
      }
      if (uVar4 == uVar6) goto LAB_101457a8;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 10);
  }
  else {
    if (uVar4 != 3) {
      param_2 = (int *)FUN_1010d4f0();
      goto LAB_101457c2;
    }
    if ((*(uint *)(param_1 + 0x1a) >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 4;
    }
    param_3 = 0;
    iVar3 = FUN_1010c870(&param_3);
    if (iVar3 != 0) {
      return (int *)iVar3;
    }
    if (param_3 == 0) {
      return (int *)-0x25;
    }
    iVar3 = piVar1[1];
    sVar7 = 0;
    do {
      iVar5 = FUN_1010c870(param_1 + (sVar7 + 3) * 2);
      if (iVar5 != 0) {
        return (int *)iVar5;
      }
      uVar6 = param_3 + iVar3;
      uVar4 = piVar1[1];
      if (uVar6 <= uVar4 && uVar4 != uVar6) {
        return (int *)-0x22;
      }
      param_2 = (int *)0x0;
      if (uVar4 == uVar6) goto LAB_101457a8;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 10);
  }
  goto LAB_101457cb;
LAB_101457a8:
  param_2 = (int *)0x0;
  *param_1 = sVar7 + 1;
LAB_101457cb:
  uVar4 = piVar1[1];
  goto joined_r0x10145652;
}



/* ===== FUN_101484d0 @ 101484d0  size=758 ===== */
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

int __thiscall FUN_101484d0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar6;
  undefined4 extraout_ECX_06;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      if (*param_1 < 0xb) {
        if (*param_1 != 0) {
          iVar3 = FUN_1010c5f0(0x25);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar1 = param_2[1];
          uVar9 = 0;
          if (*param_1 != 0) {
            do {
              iVar4 = FUN_1010c0c0(param_1[uVar9 + 1]);
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar7 = (char)uVar9 + 1;
              uVar9 = (uint)bVar7;
            } while (bVar7 < *param_1);
          }
          iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        if (*param_1 < 0xb) {
          if (*param_1 != 0) {
            iVar3 = FUN_1010c5f0(0x35);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar1 = param_2[1];
            uVar9 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = FUN_1010c5f0(*(undefined4 *)(param_1 + uVar9 * 4 + 0xb));
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = (char)uVar9 + 1;
                uVar9 = (uint)bVar7;
              } while (bVar7 < *param_1);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = FUN_1010c5f0(0x40);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c4d0(*(undefined2 *)(param_1 + 0x33));
          if (iVar3 != 0) {
            return iVar3;
          }
          if (5000 < *(ushort *)(param_1 + 0x33)) {
            return -7;
          }
          if (*(ushort *)(param_1 + 0x33) != 0) {
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar1 = param_2[1];
            uVar8 = 0;
            uVar6 = extraout_ECX_02;
            if (*(short *)(param_1 + 0x33) != 0) {
              do {
                iVar4 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar5 = FUN_10146d20(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar8 = uVar8 + 1;
                uVar6 = extraout_ECX_03;
              } while (uVar8 < *(ushort *)(param_1 + 0x33));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = FUN_1010c5f0(0x61);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c0c0(param_1[0x4808d]);
          if (iVar3 != 0) {
            return iVar3;
          }
          if (10 < param_1[0x4808d]) {
            return -7;
          }
          if (param_1[0x4808d] == 0) {
            return 0;
          }
          iVar3 = FUN_1010c5f0(0x75);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_2[1];
          FUN_1010bf70(extraout_ECX_04);
          iVar1 = param_2[1];
          bVar7 = 0;
          uVar6 = extraout_ECX_05;
          if (param_1[0x4808d] != 0) {
            do {
              iVar4 = param_2[1];
              FUN_1010bf70(uVar6);
              iVar2 = param_2[1];
              iVar5 = FUN_101478b0(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar7 = bVar7 + 1;
              uVar6 = extraout_ECX_06;
            } while (bVar7 < param_1[0x4808d]);
          }
          iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
          return iVar3;
        }
      }
      return -7;
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_101487d0 @ 101487d0  size=758 ===== */
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

int __thiscall FUN_101487d0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar6;
  undefined4 extraout_ECX_06;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  
  iVar3 = FUN_1010c5f0(0x11);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      if (*param_1 < 0xb) {
        if (*param_1 != 0) {
          iVar3 = FUN_1010c5f0(0x25);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_2[1];
          FUN_1010bf70(extraout_ECX);
          iVar1 = param_2[1];
          uVar9 = 0;
          if (*param_1 != 0) {
            do {
              iVar4 = FUN_1010c0c0(param_1[uVar9 + 1]);
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar7 = (char)uVar9 + 1;
              uVar9 = (uint)bVar7;
            } while (bVar7 < *param_1);
          }
          iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        if (*param_1 < 0xb) {
          if (*param_1 != 0) {
            iVar3 = FUN_1010c5f0(0x35);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_00);
            iVar1 = param_2[1];
            uVar9 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = FUN_1010c190(*(undefined4 *)(param_1 + uVar9 * 4 + 0xb));
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = (char)uVar9 + 1;
                uVar9 = (uint)bVar7;
              } while (bVar7 < *param_1);
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = FUN_1010c5f0(0x42);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c120(*(undefined2 *)(param_1 + 0x33));
          if (iVar3 != 0) {
            return iVar3;
          }
          if (5000 < *(ushort *)(param_1 + 0x33)) {
            return -7;
          }
          if (*(ushort *)(param_1 + 0x33) != 0) {
            iVar3 = FUN_1010c5f0(0x55);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            FUN_1010bf70(extraout_ECX_01);
            iVar1 = param_2[1];
            uVar8 = 0;
            uVar6 = extraout_ECX_02;
            if (*(short *)(param_1 + 0x33) != 0) {
              do {
                iVar4 = param_2[1];
                FUN_1010bf70(uVar6);
                iVar2 = param_2[1];
                iVar5 = FUN_10146e70(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar8 = uVar8 + 1;
                uVar6 = extraout_ECX_03;
              } while (uVar8 < *(ushort *)(param_1 + 0x33));
            }
            iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = FUN_1010c5f0(0x61);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_1010c0c0(param_1[0x4808d]);
          if (iVar3 != 0) {
            return iVar3;
          }
          if (10 < param_1[0x4808d]) {
            return -7;
          }
          if (param_1[0x4808d] == 0) {
            return 0;
          }
          iVar3 = FUN_1010c5f0(0x75);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = param_2[1];
          FUN_1010bf70(extraout_ECX_04);
          iVar1 = param_2[1];
          bVar7 = 0;
          uVar6 = extraout_ECX_05;
          if (param_1[0x4808d] != 0) {
            do {
              iVar4 = param_2[1];
              FUN_1010bf70(uVar6);
              iVar2 = param_2[1];
              iVar5 = FUN_10147a00(param_2);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar4 = FUN_1010c3c0(param_2[1] - iVar2,iVar4);
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar7 = bVar7 + 1;
              uVar6 = extraout_ECX_06;
            } while (bVar7 < param_1[0x4808d]);
          }
          iVar3 = FUN_1010c3c0(param_2[1] - iVar1,iVar3);
          return iVar3;
        }
      }
      return -7;
    }
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_10149410 @ 10149410  size=661 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[globalStatCnt]"
//   "[globalStatDataType]"
//   " 0x%02x"
//   "[globalStatDataVal]"
//   "[levelDataCnt]"
//   "[levelStatDataInfo]"
//   "[levelModeDataCnt]"
//   "[levelModeStatDataInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1014961f) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[globalStatCnt]""
     ""[globalStatDataType]""
     "" 0x%02x""
     ""[globalStatDataVal]""
     ""[levelDataCnt]""
     ""[levelStatDataInfo]""
     ""[levelModeDataCnt]""
     ""[levelModeStatDataInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"" */

int __thiscall FUN_10149410(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  uint extraout_ECX_01;
  
  iVar4 = FUN_1024a290(param_2,param_3,param_4,"[globalStatCnt]","0x%02x",*param_1);
  if (iVar4 == 0) {
    if (10 < *param_1) {
      return -7;
    }
    iVar4 = FUN_1024a3b0(extraout_ECX,"[globalStatDataType]",*param_1,0);
    if (iVar4 == 0) {
      bVar2 = 0;
      if (*param_1 != 0) {
        do {
          iVar4 = FUN_1010c010(param_2," 0x%02x",param_1[bVar2 + 1]);
          if (iVar4 != 0) {
            return iVar4;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *param_1);
      }
      iVar4 = FUN_1010c060(param_4);
      if (iVar4 == 0) {
        if (10 < *param_1) {
          return -7;
        }
        iVar4 = FUN_1024a3b0(extraout_ECX_00,"[globalStatDataVal]",*param_1,0);
        if (iVar4 == 0) {
          bVar2 = 0;
          if (*param_1 != 0) {
            do {
              iVar4 = FUN_1010c010(param_2,&DAT_11d9f608,
                                   *(undefined4 *)(param_1 + (uint)bVar2 * 4 + 0xb));
              if (iVar4 != 0) {
                return iVar4;
              }
              bVar2 = bVar2 + 1;
            } while (bVar2 < *param_1);
          }
          iVar4 = FUN_1010c060(param_4);
          if ((iVar4 == 0) &&
             (iVar4 = FUN_1024a290(param_2,param_3,param_4,"[levelDataCnt]",&DAT_11d9e0b4,
                                   *(undefined2 *)(param_1 + 0x33)), iVar4 == 0)) {
            uVar1 = *(ushort *)(param_1 + 0x33);
            uVar5 = (uint)uVar1;
            if (5000 < uVar1) {
              return -7;
            }
            uVar3 = 0;
            if (uVar1 != 0) {
              do {
                iVar4 = FUN_1024a230(param_4,"[levelStatDataInfo]",uVar3,uVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = param_3;
                if (-1 < param_3) {
                  iVar4 = param_3 + 1;
                }
                iVar4 = FUN_10147540(param_2,iVar4,param_4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar3 = uVar3 + 1;
                uVar5 = extraout_ECX_01;
              } while (uVar3 < *(ushort *)(param_1 + 0x33));
            }
            iVar4 = FUN_1024a290(param_2,param_3,param_4,"[levelModeDataCnt]","0x%02x",
                                 param_1[0x4808d]);
            if (iVar4 == 0) {
              if (10 < param_1[0x4808d]) {
                return -7;
              }
              bVar2 = 0;
              if (param_1[0x4808d] != 0) {
                do {
                  iVar4 = FUN_1024a140(param_3);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_1010c010(param_2,"%s[%u]%c","[levelModeStatDataInfo]",bVar2,
                                       (int)(char)param_4);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = param_3;
                  if (-1 < param_3) {
                    iVar4 = param_3 + 1;
                  }
                  iVar4 = FUN_101480d0(param_2,iVar4,param_4);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  bVar2 = bVar2 + 1;
                } while (bVar2 < param_1[0x4808d]);
              }
              iVar4 = 0;
            }
          }
        }
      }
    }
  }
  return iVar4;
}



/* ===== FUN_10149fe0 @ 10149fe0  size=232 ===== */
// calls: _wassert
// strings:
//   "[entrustGroupStatCount]"
//   "[entrustGroupStatInfo]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1014a04d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[entrustGroupStatCount]""
     ""[entrustGroupStatInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10149fe0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[entrustGroupStatCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0xf < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[entrustGroupStatInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_101468d0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1014b090 @ 1014b090  size=298 ===== */
// calls: _wassert
// strings:
//   "[lastRefreshTm]"
//   "0x%02x"
//   "[rewardCnt]"
//   "[levelCnt]"
//   "[warningData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1014b13c) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[lastRefreshTm]""
     ""0x%02x""
     ""[rewardCnt]""
     ""[levelCnt]""
     ""[warningData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_1014b090(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[lastRefreshTm]",&DAT_11d9f574,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[rewardCnt]","0x%02x",
                            *(undefined1 *)(param_1 + 1)), iVar1 == 0)) &&
     (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[levelCnt]","0x%02x",
                           *(undefined1 *)((int)param_1 + 5)), iVar1 == 0)) {
    if (10 < *(byte *)((int)param_1 + 5)) {
      return -7;
    }
    bVar2 = 0;
    if (*(byte *)((int)param_1 + 5) != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[warningData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1014a6a0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)((int)param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_101508d0 @ 101508d0  size=1546 ===== */
// calls: _wassert
// strings:
//   "[entrustMoneyLastTm]"
//   "[thousandLayerDataCount]"
//   "[thousandLayerData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"
//   "[levelStatLen]"
//   "[levelStatDataPack]"
//   " 0x%02x"
//   "[entrustAllStat]"
//   "[levelWarningData]"
//   "[monsterSizeHistroyInfo]"
//   "[unlockHubPageCount]"
//   "[unlockHubPageData]"
//   "[levelUnLockCount]"
//   "[unLockLevelData]"
//   "[levelIntegrateData]"
//   "0x%02x"
//   "[hubRewardCount]"
//   "[hubRewardData]"

/* WARNING: Removing unreachable block (ram,0x10150969) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[entrustMoneyLastTm]""
     ""[thousandLayerDataCount]""
     ""[thousandLayerData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[levelStatLen]""
     ""[levelStatDataPack]""
     "" 0x%02x""
     ""[entrustAllStat]"" */

int __thiscall FUN_101508d0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *puVar8;
  undefined4 extraout_ECX_05;
  uint extraout_ECX_06;
  undefined4 extraout_ECX_07;
  uint extraout_ECX_08;
  
  iVar7 = param_3;
  uVar1 = param_2;
  iVar4 = FUN_1024a290(param_2,param_3,param_4,"[entrustMoneyLastTm]",&DAT_11d9e0b4,*param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = FUN_1024a290(param_2,param_3,param_4,"[thousandLayerDataCount]",&DAT_11d9e0b4,param_1[1]);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = param_1[1];
  if (iVar4 < 0) {
    return -6;
  }
  if (0x46 < iVar4) {
    return -7;
  }
  param_2 = 0;
  if (0 < iVar4) {
    do {
      iVar4 = FUN_1024a140(param_3);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_1010c010(uVar1,"%s[%u]%c","[thousandLayerData]",param_2,(int)(char)param_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = param_3;
      if (-1 < param_3) {
        iVar4 = param_3 + 1;
      }
      iVar4 = FUN_10144e00(uVar1,iVar4,param_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)param_1[1]);
  }
  iVar4 = FUN_1024a290(uVar1,param_3,param_4,"[levelStatLen]",&DAT_11d9e0b4,param_1[0xd4]);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = param_1[0xd4];
  if (-1 < iVar4) {
    if (0x2000 < iVar4) {
      return -7;
    }
    iVar4 = FUN_1024a3b0(extraout_ECX,"[levelStatDataPack]",iVar4,iVar4 >> 0x1f);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (0 < (int)param_1[0xd4]) {
        do {
          iVar5 = FUN_1010c010(uVar1," 0x%02x",*(undefined1 *)((int)param_1 + iVar4 + 0x354));
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_1[0xd4]);
      }
      iVar4 = FUN_1010c060(param_4);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_1024a1e0(param_4,"[entrustAllStat]",extraout_ECX_00), iVar4 == 0)) {
        iVar4 = param_3;
        if (-1 < param_3) {
          iVar4 = param_3 + 1;
        }
        iVar4 = FUN_10149fe0(uVar1,iVar4,param_4);
        if ((iVar4 == 0) &&
           (iVar4 = FUN_1024a1e0(param_4,"[levelWarningData]",extraout_ECX_01), iVar4 == 0)) {
          iVar4 = param_3;
          if (-1 < param_3) {
            iVar4 = param_3 + 1;
          }
          iVar4 = FUN_1014b090(uVar1,iVar4,param_4);
          if ((iVar4 == 0) &&
             (iVar4 = FUN_1024a1e0(param_4,"[monsterSizeHistroyInfo]",extraout_ECX_02), iVar4 == 0))
          {
            iVar4 = param_3;
            if (-1 < param_3) {
              iVar4 = param_3 + 1;
            }
            iVar4 = FUN_1014c2e0(uVar1,iVar4,param_4);
            if ((iVar4 == 0) &&
               (iVar4 = FUN_1024a290(uVar1,param_3,param_4,"[unlockHubPageCount]",&DAT_11d9e0b4,
                                     *(undefined2 *)(param_1 + 0x4562)), iVar4 == 0)) {
              iVar4 = (int)param_1 + 0x1158a;
              uVar6 = 0;
              do {
                iVar4 = FUN_1024a230(param_4,"[unlockHubPageData]",uVar6,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = param_3;
                if (-1 < param_3) {
                  iVar4 = param_3 + 1;
                }
                iVar4 = FUN_10143850(uVar1,iVar4,param_4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                uVar6 = uVar6 + 1;
                iVar4 = extraout_ECX_03;
              } while (uVar6 < 0x40);
              iVar4 = FUN_1024a290(uVar1,param_3,param_4,"[levelUnLockCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)((int)param_1 + 0x1188a));
              if (iVar4 == 0) {
                iVar4 = *(int *)((int)param_1 + 0x1188a);
                if (iVar4 < 0) {
                  return -6;
                }
                if (5000 < iVar4) {
                  return -7;
                }
                iVar4 = FUN_1024a3b0(extraout_ECX_04,"[unLockLevelData]",iVar4,iVar4 >> 0x1f);
                if (iVar4 == 0) {
                  if (0 < *(int *)((int)param_1 + 0x1188a)) {
                    puVar8 = (undefined4 *)((int)param_1 + 0x1188e);
                    param_3 = 0;
                    do {
                      iVar4 = FUN_1010c010(uVar1,&DAT_11d9f710,*puVar8);
                      if (iVar4 != 0) {
                        return iVar4;
                      }
                      param_3 = param_3 + 1;
                      puVar8 = puVar8 + 1;
                    } while (param_3 < *(int *)((int)param_1 + 0x1188a));
                  }
                  iVar4 = FUN_1010c060(param_4);
                  if ((iVar4 == 0) &&
                     (iVar4 = FUN_1024a1e0(param_4,"[levelIntegrateData]",extraout_ECX_05),
                     iVar4 == 0)) {
                    iVar4 = iVar7;
                    if (-1 < iVar7) {
                      iVar4 = iVar7 + 1;
                    }
                    iVar4 = FUN_1014d8b0(uVar1,iVar4,param_4);
                    if ((iVar4 == 0) &&
                       (iVar4 = FUN_1024a290(uVar1,iVar7,param_4,"[hubRewardCount]","0x%02x",
                                             *(undefined1 *)(param_1 + 0x9927)), iVar4 == 0)) {
                      bVar3 = *(byte *)(param_1 + 0x9927);
                      uVar6 = (uint)bVar3;
                      if (0x40 < bVar3) {
                        return -7;
                      }
                      bVar2 = 0;
                      if (bVar3 != 0) {
                        do {
                          iVar4 = FUN_1024a230(param_4,"[hubRewardData]",bVar2,uVar6);
                          if (iVar4 != 0) {
                            return iVar4;
                          }
                          iVar4 = iVar7;
                          if (-1 < iVar7) {
                            iVar4 = iVar7 + 1;
                          }
                          iVar4 = FUN_10143f70(uVar1,iVar4,param_4);
                          if (iVar4 != 0) {
                            return iVar4;
                          }
                          bVar2 = bVar2 + 1;
                          uVar6 = extraout_ECX_06;
                        } while (bVar2 < *(byte *)(param_1 + 0x9927));
                      }
                      iVar4 = FUN_1024a290(uVar1,iVar7,param_4,"[unlockLevelGroupCount]","0x%02x",
                                           *(undefined1 *)((int)param_1 + 0x266dd));
                      if (iVar4 == 0) {
                        if (0x40 < *(byte *)((int)param_1 + 0x266dd)) {
                          return -7;
                        }
                        iVar4 = FUN_1024a3b0(extraout_ECX_07,"[unlockLevelGroupData]",
                                             *(byte *)((int)param_1 + 0x266dd),0);
                        if (iVar4 == 0) {
                          bVar3 = 0;
                          if (*(char *)((int)param_1 + 0x266dd) != '\0') {
                            do {
                              iVar4 = FUN_1010c010(uVar1,&DAT_11d9f710,
                                                   *(undefined4 *)
                                                    ((int)param_1 + (uint)bVar3 * 4 + 0x266de));
                              if (iVar4 != 0) {
                                return iVar4;
                              }
                              bVar3 = bVar3 + 1;
                            } while (bVar3 < *(byte *)((int)param_1 + 0x266dd));
                          }
                          iVar4 = FUN_1010c060(param_4);
                          if ((iVar4 == 0) &&
                             (iVar4 = FUN_1024a290(uVar1,iVar7,param_4,"[hubPageStarUnLockCount]",
                                                   "0x%02x",*(undefined1 *)((int)param_1 + 0x267de))
                             , iVar4 == 0)) {
                            bVar3 = *(byte *)((int)param_1 + 0x267de);
                            uVar6 = (uint)bVar3;
                            if (0x40 < bVar3) {
                              return -7;
                            }
                            bVar2 = 0;
                            if (bVar3 != 0) {
                              do {
                                iVar4 = FUN_1024a230(param_4,"[hubPageStarUnLockData]",bVar2,uVar6);
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                iVar4 = iVar7;
                                if (-1 < iVar7) {
                                  iVar4 = iVar7 + 1;
                                }
                                iVar4 = FUN_101446e0(uVar1,iVar4,param_4);
                                if (iVar4 != 0) {
                                  return iVar4;
                                }
                                bVar2 = bVar2 + 1;
                                uVar6 = extraout_ECX_08;
                              } while (bVar2 < *(byte *)((int)param_1 + 0x267de));
                            }
                            iVar4 = FUN_1024a1e0(param_4,"[superHunterData]",uVar6);
                            if (iVar4 == 0) {
                              if (iVar7 < 0) {
                                iVar7 = FUN_1014e300(uVar1,iVar7,param_4);
                                return iVar7;
                              }
                              iVar4 = FUN_1014e300(uVar1,iVar7 + 1,param_4);
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
  return -6;
}



/* ===== FUN_101511a0 @ 101511a0  size=389 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_101511a0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  
  iVar6 = FUN_1010c5f0(0x15);
  if (iVar6 == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar2) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar3 = *(uint *)(param_2 + 4);
    if ((uVar3 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar3)) {
      *(uint *)(param_2 + 4) = uVar3 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    sVar7 = strnlen(param_1,0x20);
    if (0x1f < sVar7) {
      return -3;
    }
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1010c2b0(param_1,(int)pcVar8 - (int)(param_1 + 1));
    if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar6 == 0)) &&
       (iVar6 = FUN_1010c5f0(0x25), iVar6 == 0)) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_2 + 4);
      pcVar8 = param_1 + 0x20;
      sVar7 = strnlen(pcVar8,0x20);
      if (0x1f < sVar7) {
        return -3;
      }
      pcVar9 = pcVar8;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar6 = FUN_1010c2b0(pcVar8,(int)pcVar9 - (int)(param_1 + 0x21));
      if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar5), iVar6 == 0))
         && (iVar6 = FUN_1010c5f0(0x35), iVar6 == 0)) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_2 + 4);
        pcVar8 = param_1 + 0x40;
        sVar7 = strnlen(pcVar8,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar9 = pcVar8;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        iVar6 = FUN_1010c2b0(pcVar8,(int)pcVar9 - (int)(param_1 + 0x41));
        if (iVar6 == 0) {
          iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar5);
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_10151330 @ 10151330  size=389 ===== */
// calls: _wassert, strnlen
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h"
//   u"position <= length"

/* [RE-AUTO c0]
   src: TdrBuf.h
   calls: _wassert, strnlen
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall FUN_10151330(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  char *pcVar9;
  undefined4 extraout_ECX_00;
  
  iVar6 = FUN_1010c5f0(0x15);
  if (iVar6 == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar2) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar3 = *(uint *)(param_2 + 4);
    if ((uVar3 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar3)) {
      *(uint *)(param_2 + 4) = uVar3 + 4;
    }
    iVar4 = *(int *)(param_2 + 4);
    sVar7 = strnlen(param_1,0x20);
    if (0x1f < sVar7) {
      return -3;
    }
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_1010c2b0(param_1,(int)pcVar8 - (int)(param_1 + 1));
    if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar2), iVar6 == 0)) &&
       (iVar6 = FUN_1010c5f0(0x25), iVar6 == 0)) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_2 + 4);
      pcVar8 = param_1 + 0x20;
      sVar7 = strnlen(pcVar8,0x20);
      if (0x1f < sVar7) {
        return -3;
      }
      pcVar9 = pcVar8;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar6 = FUN_1010c2b0(pcVar8,(int)pcVar9 - (int)(param_1 + 0x21));
      if (((iVar6 == 0) && (iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar5), iVar6 == 0))
         && (iVar6 = FUN_1010c5f0(0x35), iVar6 == 0)) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_2 + 4);
        pcVar8 = param_1 + 0x40;
        sVar7 = strnlen(pcVar8,0x20);
        if (0x1f < sVar7) {
          return -3;
        }
        pcVar9 = pcVar8;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        iVar6 = FUN_1010c2b0(pcVar8,(int)pcVar9 - (int)(param_1 + 0x41));
        if (iVar6 == 0) {
          iVar6 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar4,uVar5);
        }
      }
    }
  }
  return iVar6;
}



/* ===== FUN_10151ab0 @ 10151ab0  size=77 ===== */
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

undefined4 __thiscall FUN_10151ab0(int *param_1,undefined1 param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
  }
  if (param_1[2] == param_1[1]) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_10151b00 @ 10151b00  size=81 ===== */
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

undefined4 __thiscall FUN_10151b00(int *param_1,undefined1 *param_2)

{
  if ((uint)param_1[2] < (uint)param_1[1]) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
  }
  if (param_1[2] == param_1[1]) {
    return 0xfffffffe;
  }
  *param_2 = *(undefined1 *)(param_1[1] + *param_1);
  param_1[1] = param_1[1] + 1;
  return 0;
}



/* ===== FUN_10152ae0 @ 10152ae0  size=414 ===== */
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

int __thiscall FUN_10152ae0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_8;
  
  piVar1 = param_2;
  iVar5 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  uVar2 = param_3 + param_2[1];
  uVar3 = param_2[1];
  do {
    if (uVar2 <= uVar3) {
      if (uVar2 < (uint)piVar1[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_8);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      iVar5 = param_1;
      if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
        *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1;
      }
LAB_10152c28:
      iVar4 = FUN_1010cbd0(iVar5);
LAB_10152c2f:
      iVar5 = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      if (uVar3 == 2) {
        if ((*(uint *)(param_1 + 0x108) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 2;
        }
        iVar5 = param_1 + 4;
        goto LAB_10152c28;
      }
      if (uVar3 != 3) {
        iVar4 = FUN_1010d4f0();
        goto LAB_10152c2f;
      }
      if ((*(uint *)(param_1 + 0x108) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 4;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar1[1];
      iVar8 = 0;
      param_3 = 0;
      piVar7 = param_2;
      do {
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          piVar7 = param_2;
        }
        if (piVar1[2] == piVar1[1]) {
          return -2;
        }
        *(undefined1 *)(iVar8 + 8 + param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
        uVar6 = iVar4 + (int)piVar7;
        piVar1[1] = piVar1[1] + 1;
        uVar3 = piVar1[1];
        if (uVar6 <= uVar3 && uVar3 != uVar6) {
          return -0x22;
        }
        iVar5 = param_3;
        if (uVar3 == uVar6) {
          *(int *)(param_1 + 4) = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
    }
    uVar3 = piVar1[1];
  } while( true );
}



/* ===== FUN_10152c90 @ 10152c90  size=414 ===== */
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

int __thiscall FUN_10152c90(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_8;
  
  piVar1 = param_2;
  iVar5 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  uVar2 = param_3 + param_2[1];
  uVar3 = param_2[1];
  do {
    if (uVar2 <= uVar3) {
      if (uVar2 < (uint)piVar1[1]) {
        iVar5 = -0x22;
      }
      return iVar5;
    }
    iVar5 = FUN_1010ccb0(&local_8);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar3 = local_8 >> 4;
    if (uVar3 == 1) {
      iVar5 = param_1;
      if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
        *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1;
      }
LAB_10152dd8:
      iVar4 = FUN_1010c870(iVar5);
LAB_10152ddf:
      iVar5 = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      if (uVar3 == 2) {
        if ((*(uint *)(param_1 + 0x108) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 2;
        }
        iVar5 = param_1 + 4;
        goto LAB_10152dd8;
      }
      if (uVar3 != 3) {
        iVar4 = FUN_1010d4f0();
        goto LAB_10152ddf;
      }
      if ((*(uint *)(param_1 + 0x108) >> 2 & 1) == 0) {
        *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 4;
      }
      param_2 = (int *)0x0;
      iVar5 = FUN_1010c870(&param_2);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar1[1];
      iVar8 = 0;
      param_3 = 0;
      piVar7 = param_2;
      do {
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          piVar7 = param_2;
        }
        if (piVar1[2] == piVar1[1]) {
          return -2;
        }
        *(undefined1 *)(iVar8 + 8 + param_1) = *(undefined1 *)(piVar1[1] + *piVar1);
        uVar6 = iVar4 + (int)piVar7;
        piVar1[1] = piVar1[1] + 1;
        uVar3 = piVar1[1];
        if (uVar6 <= uVar3 && uVar3 != uVar6) {
          return -0x22;
        }
        iVar5 = param_3;
        if (uVar3 == uVar6) {
          *(int *)(param_1 + 4) = iVar8 + 1;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
    }
    uVar3 = piVar1[1];
  } while( true );
}



/* ===== FUN_10153890 @ 10153890  size=232 ===== */
// calls: _wassert
// strings:
//   "[procsCount]"
//   "[procs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x101538fd) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[procsCount]""
     ""[procs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10153890(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[procsCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x14 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[procs]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10152f10(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10153ba0 @ 10153ba0  size=148 ===== */
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

int __thiscall FUN_10153ba0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x31);
      if (((iVar2 == 0) && (iVar2 = FUN_1010c0c0(param_1[1]), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x40), iVar2 == 0)) {
        iVar2 = FUN_1010c5f0(*(undefined4 *)(param_1 + 2));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10153c40 @ 10153c40  size=148 ===== */
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

int __thiscall FUN_10153c40(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x31);
      if (((iVar2 == 0) && (iVar2 = FUN_1010c0c0(param_1[1]), iVar2 == 0)) &&
         (iVar2 = FUN_1010c5f0(0x43), iVar2 == 0)) {
        iVar2 = FUN_1010c190(*(undefined4 *)(param_1 + 2));
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10153db0 @ 10153db0  size=329 ===== */
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

uint __thiscall FUN_10153db0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = local_8 >> 4;
      if (uVar2 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_10153ecb:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar2 == 3) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_10153ecb;
        }
        if (uVar2 == 4) {
          if ((*(uint *)(param_1 + 6) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4;
          }
          uVar2 = FUN_1010ccb0(param_1 + 2);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_10153f00 @ 10153f00  size=329 ===== */
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

uint __thiscall FUN_10153f00(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3 + param_2[1];
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    do {
      uVar2 = FUN_1010ccb0(&local_8);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = local_8 >> 4;
      if (uVar2 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
LAB_1015401b:
        param_2[1] = param_2[1] + 1;
      }
      else {
        if (uVar2 == 3) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          if ((uint)param_2[2] < (uint)param_2[1]) {
            _wassert(L"position <= length",
                     L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
          }
          if (param_2[2] == param_2[1]) {
            return 0xfffffffe;
          }
          param_1[1] = *(undefined1 *)(param_2[1] + *param_2);
          goto LAB_1015401b;
        }
        if (uVar2 == 4) {
          if ((*(uint *)(param_1 + 6) >> 2 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4;
          }
          uVar2 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar2 = FUN_1010d4f0();
        }
        if (uVar2 != 0) {
          return uVar2;
        }
      }
    } while ((uint)param_2[1] < uVar1);
    uVar2 = param_2[1];
  }
  return -(uint)(uVar1 < uVar2) & 0xffffffde;
}



/* ===== FUN_101543d0 @ 101543d0  size=267 ===== */
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

int __thiscall FUN_101543d0(byte *param_1,int *param_2)

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
      if (0x40 < *param_1) {
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
            iVar4 = FUN_10153ba0(param_2);
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



/* ===== FUN_101544e0 @ 101544e0  size=267 ===== */
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

int __thiscall FUN_101544e0(byte *param_1,int *param_2)

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
      if (0x40 < *param_1) {
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
            iVar4 = FUN_10153c40(param_2);
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



/* ===== FUN_101546c0 @ 101546c0  size=432 ===== */
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

int __thiscall FUN_101546c0(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  char *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  param_1[0x281] = '\0';
  param_1[0x282] = '\0';
  param_1[0x283] = '\0';
  param_1[0x284] = '\0';
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (uVar3 <= uVar1) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x281] & 1U) == 0) {
        *(uint *)(param_1 + 0x281) = *(uint *)(param_1 + 0x281) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x281) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x281) = *(uint *)(param_1 + 0x281) | 2;
      }
      param_2 = (int *)0x0;
      iVar4 = FUN_1010c870(&param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10153db0(piVar2,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar4;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar1 == uVar6) {
          *local_8 = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 0x40);
    }
    else {
      iVar4 = FUN_1010d4f0();
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    uVar1 = piVar2[1];
  } while( true );
}



/* ===== FUN_10154870 @ 10154870  size=432 ===== */
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

int __thiscall FUN_10154870(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint local_c;
  char *local_8;
  
  piVar2 = param_2;
  local_c = 0;
  param_1[0x281] = '\0';
  param_1[0x282] = '\0';
  param_1[0x283] = '\0';
  param_1[0x284] = '\0';
  uVar3 = param_3 + param_2[1];
  uVar1 = param_2[1];
  local_8 = param_1;
  do {
    iVar4 = 0;
    if (uVar3 <= uVar1) {
      if (uVar3 < (uint)piVar2[1]) {
        iVar4 = -0x22;
      }
      return iVar4;
    }
    iVar4 = FUN_1010ccb0(&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_c >> 4 == 1) {
      if ((param_1[0x281] & 1U) == 0) {
        *(uint *)(param_1 + 0x281) = *(uint *)(param_1 + 0x281) | 1;
      }
      if ((uint)piVar2[2] < (uint)piVar2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (piVar2[2] == piVar2[1]) {
        return -2;
      }
      *param_1 = *(char *)(piVar2[1] + *piVar2);
      piVar2[1] = piVar2[1] + 1;
    }
    else if (local_c >> 4 == 2) {
      if ((*(uint *)(param_1 + 0x281) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x281) = *(uint *)(param_1 + 0x281) | 2;
      }
      param_2 = (int *)0x0;
      iVar4 = FUN_1010c870(&param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_2 == (int *)0x0) {
        return -0x25;
      }
      iVar4 = piVar2[1];
      bVar7 = 0;
      do {
        param_3 = 0;
        iVar5 = FUN_1010c870(&param_3);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((param_3 != 0) && (iVar5 = FUN_10153f00(piVar2,param_3), iVar5 != 0)) {
          return iVar5;
        }
        uVar6 = (int)param_2 + iVar4;
        uVar1 = piVar2[1];
        if (uVar6 <= uVar1 && uVar1 != uVar6) {
          return -0x22;
        }
        param_1 = local_8;
        if (uVar1 == uVar6) {
          *local_8 = bVar7 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
      } while (bVar7 < 0x40);
    }
    else {
      iVar4 = FUN_1010d4f0();
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    uVar1 = piVar2[1];
  } while( true );
}



/* ===== FUN_10154af0 @ 10154af0  size=218 ===== */
// calls: _wassert
// strings:
//   "0x%02x"
//   "[counterNum]"
//   "[counterData]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x10154b4d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""0x%02x""
     ""[counterNum]""
     ""[counterData]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10154af0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[counterNum]","0x%02x",*param_1);
  if (iVar1 == 0) {
    if (0x40 < *param_1) {
      return -7;
    }
    bVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[counterData]",bVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10154120(param_2,iVar1,param_4);
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



/* ===== FUN_10154e00 @ 10154e00  size=212 ===== */
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

int __thiscall FUN_10154e00(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  byte bVar4;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    bVar4 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar4;
      iVar2 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x10 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar2 = FUN_1010c5f0(0x25), iVar2 == 0)) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar4 = 0;
        if (*param_1 != 0) {
          do {
            iVar3 = FUN_1010c560(*(undefined4 *)(param_1 + (uint)bVar4 * 4 + 1));
            if (iVar3 != 0) {
              return iVar3;
            }
            bVar4 = bVar4 + 1;
          } while (bVar4 < *param_1);
        }
        iVar2 = FUN_1010c3c0(param_2[1] - iVar1,iVar2);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10154ee0 @ 10154ee0  size=212 ===== */
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

int __thiscall FUN_10154ee0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  byte bVar4;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    bVar4 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar4;
      iVar2 = 0;
      param_2[1] = param_2[1] + 1;
      if (0x10 < *param_1) {
        return -7;
      }
      if ((*param_1 != 0) && (iVar2 = FUN_1010c5f0(0x25), iVar2 == 0)) {
        iVar2 = param_2[1];
        FUN_1010bf70(extraout_ECX);
        iVar1 = param_2[1];
        bVar4 = 0;
        if (*param_1 != 0) {
          do {
            iVar3 = FUN_1010c190(*(undefined4 *)(param_1 + (uint)bVar4 * 4 + 1));
            if (iVar3 != 0) {
              return iVar3;
            }
            bVar4 = bVar4 + 1;
          } while (bVar4 < *param_1);
        }
        iVar2 = FUN_1010c3c0(param_2[1] - iVar1,iVar2);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_10155090 @ 10155090  size=360 ===== */
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

uint __thiscall FUN_10155090(char *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  uVar2 = param_3 + param_2[1];
  uVar3 = param_2[1];
  if (uVar3 < uVar2) {
    do {
      uVar3 = FUN_1010ccb0(&local_8);
      if (uVar3 != 0) {
        return uVar3;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x41] & 1U) == 0) {
          *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 1;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (piVar1[2] == piVar1[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(char *)(piVar1[1] + *piVar1);
        piVar1[1] = piVar1[1] + 1;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x41) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        if (uVar3 != 0) {
          return uVar3;
        }
        if (param_2 == (int *)0x0) {
          return 0xffffffdb;
        }
        param_3 = piVar1[1];
        uVar3 = 0;
        do {
          uVar4 = FUN_1010cbd0(param_1 + uVar3 * 4 + 1);
          if (uVar4 != 0) {
            return uVar4;
          }
          uVar5 = (int)param_2 + param_3;
          uVar4 = piVar1[1];
          if (uVar5 <= uVar4 && uVar4 != uVar5) {
            return 0xffffffde;
          }
          if (uVar4 == uVar5) {
            *param_1 = (char)uVar3 + '\x01';
            break;
          }
          bVar6 = (char)uVar3 + 1;
          uVar3 = (uint)bVar6;
        } while (bVar6 < 0x10);
      }
      else {
        uVar3 = FUN_1010d4f0();
        if (uVar3 != 0) {
          return uVar3;
        }
      }
    } while ((uint)piVar1[1] < uVar2);
    uVar3 = piVar1[1];
  }
  return -(uint)(uVar2 < uVar3) & 0xffffffde;
}



/* ===== FUN_10155200 @ 10155200  size=360 ===== */
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

uint __thiscall FUN_10155200(char *param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  uVar2 = param_3 + param_2[1];
  uVar3 = param_2[1];
  if (uVar3 < uVar2) {
    do {
      uVar3 = FUN_1010ccb0(&local_8);
      if (uVar3 != 0) {
        return uVar3;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[0x41] & 1U) == 0) {
          *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 1;
        }
        if ((uint)piVar1[2] < (uint)piVar1[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (piVar1[2] == piVar1[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(char *)(piVar1[1] + *piVar1);
        piVar1[1] = piVar1[1] + 1;
      }
      else if (local_8 >> 4 == 2) {
        if ((*(uint *)(param_1 + 0x41) >> 1 & 1) == 0) {
          *(uint *)(param_1 + 0x41) = *(uint *)(param_1 + 0x41) | 2;
        }
        param_2 = (int *)0x0;
        uVar3 = FUN_1010c870(&param_2);
        if (uVar3 != 0) {
          return uVar3;
        }
        if (param_2 == (int *)0x0) {
          return 0xffffffdb;
        }
        param_3 = piVar1[1];
        uVar3 = 0;
        do {
          uVar4 = FUN_1010c870(param_1 + uVar3 * 4 + 1);
          if (uVar4 != 0) {
            return uVar4;
          }
          uVar5 = (int)param_2 + param_3;
          uVar4 = piVar1[1];
          if (uVar5 <= uVar4 && uVar4 != uVar5) {
            return 0xffffffde;
          }
          if (uVar4 == uVar5) {
            *param_1 = (char)uVar3 + '\x01';
            break;
          }
          bVar6 = (char)uVar3 + 1;
          uVar3 = (uint)bVar6;
        } while (bVar6 < 0x10);
      }
      else {
        uVar3 = FUN_1010d4f0();
        if (uVar3 != 0) {
          return uVar3;
        }
      }
    } while ((uint)piVar1[1] < uVar2);
    uVar3 = piVar1[1];
  }
  return -(uint)(uVar2 < uVar3) & 0xffffffde;
}



/* ===== FUN_10156700 @ 10156700  size=232 ===== */
// calls: _wassert
// strings:
//   "[count]"
//   "[data]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "%s[%u]%c"

/* WARNING: Removing unreachable block (ram,0x1015676d) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[data]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall FUN_10156700(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (0x38 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = FUN_1024a140(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[data]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10155d40(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10157480 @ 10157480  size=481 ===== */
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

int __thiscall FUN_10157480(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar8;
  undefined4 extraout_ECX_03;
  byte bVar9;
  
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar7 = *(int *)(param_2 + 4);
    iVar5 = FUN_10156a30(param_2);
    if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar1), iVar5 == 0)) &&
       (iVar5 = FUN_1010c5f0(0x25), iVar5 == 0)) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar7 = *(int *)(param_2 + 4);
      iVar5 = FUN_10156a30(param_2);
      if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar3), iVar5 == 0))
         && (iVar5 = FUN_1010c5f0(0x35), iVar5 == 0)) {
        uVar3 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar7 = *(int *)(param_2 + 4);
        iVar5 = FUN_10156a30(param_2);
        if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar3), iVar5 == 0)
            ) && ((iVar5 = FUN_1010c5f0(0x41), iVar5 == 0 &&
                  (iVar5 = FUN_101150a0(*(undefined1 *)(param_1 + 0x60)), iVar5 == 0)))) {
          if (10 < *(byte *)(param_1 + 0x60)) {
            return -7;
          }
          if ((*(byte *)(param_1 + 0x60) != 0) && (iVar5 = FUN_1010c5f0(0x55), iVar5 == 0)) {
            uVar3 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(extraout_ECX_01);
            iVar5 = *(int *)(param_2 + 4);
            bVar9 = 0;
            uVar8 = extraout_ECX_02;
            if (*(char *)(param_1 + 0x60) != '\0') {
              do {
                uVar4 = *(undefined4 *)(param_2 + 4);
                FUN_1010bf70(uVar8);
                iVar7 = *(int *)(param_2 + 4);
                iVar6 = FUN_10156a30(param_2);
                if (iVar6 != 0) {
                  return iVar6;
                }
                iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar4);
                if (iVar7 != 0) {
                  return iVar7;
                }
                bVar9 = bVar9 + 1;
                uVar8 = extraout_ECX_03;
              } while (bVar9 < *(byte *)(param_1 + 0x60));
            }
            iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3);
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10157670 @ 10157670  size=481 ===== */
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

int __thiscall FUN_10157670(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar8;
  undefined4 extraout_ECX_03;
  byte bVar9;
  
  iVar5 = FUN_1010c5f0(0x15);
  if (iVar5 == 0) {
    uVar1 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 <= *(uint *)(param_2 + 8)) && (3 < *(uint *)(param_2 + 8) - uVar2)) {
      *(uint *)(param_2 + 4) = uVar2 + 4;
    }
    iVar7 = *(int *)(param_2 + 4);
    iVar5 = FUN_10156b10(param_2);
    if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar1), iVar5 == 0)) &&
       (iVar5 = FUN_1010c5f0(0x25), iVar5 == 0)) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar7 = *(int *)(param_2 + 4);
      iVar5 = FUN_10156b10(param_2);
      if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar3), iVar5 == 0))
         && (iVar5 = FUN_1010c5f0(0x35), iVar5 == 0)) {
        uVar3 = *(undefined4 *)(param_2 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar7 = *(int *)(param_2 + 4);
        iVar5 = FUN_10156b10(param_2);
        if (((iVar5 == 0) && (iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar3), iVar5 == 0)
            ) && ((iVar5 = FUN_1010c5f0(0x41), iVar5 == 0 &&
                  (iVar5 = FUN_101150a0(*(undefined1 *)(param_1 + 0x60)), iVar5 == 0)))) {
          if (10 < *(byte *)(param_1 + 0x60)) {
            return -7;
          }
          if ((*(byte *)(param_1 + 0x60) != 0) && (iVar5 = FUN_1010c5f0(0x55), iVar5 == 0)) {
            uVar3 = *(undefined4 *)(param_2 + 4);
            FUN_1010bf70(extraout_ECX_01);
            iVar5 = *(int *)(param_2 + 4);
            bVar9 = 0;
            uVar8 = extraout_ECX_02;
            if (*(char *)(param_1 + 0x60) != '\0') {
              do {
                uVar4 = *(undefined4 *)(param_2 + 4);
                FUN_1010bf70(uVar8);
                iVar7 = *(int *)(param_2 + 4);
                iVar6 = FUN_10156b10(param_2);
                if (iVar6 != 0) {
                  return iVar6;
                }
                iVar7 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar7,uVar4);
                if (iVar7 != 0) {
                  return iVar7;
                }
                bVar9 = bVar9 + 1;
                uVar8 = extraout_ECX_03;
              } while (bVar9 < *(byte *)(param_1 + 0x60));
            }
            iVar5 = FUN_1010c3c0(*(int *)(param_2 + 4) - iVar5,uVar3);
          }
        }
      }
    }
  }
  return iVar5;
}



/* ===== FUN_10157f00 @ 10157f00  size=411 ===== */
// calls: _wassert
// strings:
//   "[daily]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[weekly]"
//   "[monthly]"
//   "0x%02x"
//   "[count]"
//   "[selfDefs]"

/* WARNING: Removing unreachable block (ram,0x10157f15) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[daily]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[weekly]""
     ""[monthly]""
     ""0x%02x""
     ""[count]""
     ""[selfDefs]"" */

int __thiscall FUN_10157f00(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[daily]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10157090(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[weekly]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_10157090(param_2,iVar1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[monthly]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10157090(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_1024a290(param_2,param_3,param_4,"[count]","0x%02x",
                                 *(undefined1 *)(param_1 + 0x60)), iVar1 == 0)) {
          if (10 < *(byte *)(param_1 + 0x60)) {
            return -7;
          }
          bVar2 = 0;
          if (*(byte *)(param_1 + 0x60) != 0) {
            do {
              iVar1 = FUN_1024a230(param_4,"[selfDefs]",bVar2,bVar2);
              if (iVar1 != 0) {
                return iVar1;
              }
              iVar1 = param_3;
              if (-1 < param_3) {
                iVar1 = param_3 + 1;
              }
              iVar1 = FUN_10157090(param_2,iVar1,param_4);
              if (iVar1 != 0) {
                return iVar1;
              }
              bVar2 = bVar2 + 1;
            } while (bVar2 < *(byte *)(param_1 + 0x60));
          }
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_101582f0 @ 101582f0  size=257 ===== */
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

void FUN_101582f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar4 = FUN_1010c5f0(0x15);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = FUN_10153230(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_101560a0(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_10157480(param_1);
        if (iVar5 == 0) {
          FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10158400 @ 10158400  size=257 ===== */
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

void FUN_10158400(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar4 = FUN_1010c5f0(0x15);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
    }
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 <= *(uint *)(param_1 + 8)) && (3 < *(uint *)(param_1 + 8) - uVar2)) {
      *(uint *)(param_1 + 4) = uVar2 + 4;
    }
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = FUN_10153320(param_1);
    if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar1), iVar4 == 0)) &&
       (iVar4 = FUN_1010c5f0(0x25), iVar4 == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      FUN_1010bf70(extraout_ECX);
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_10156190(param_1);
      if (((iVar5 == 0) && (iVar4 = FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3), iVar4 == 0))
         && (iVar4 = FUN_1010c5f0(0x35), iVar4 == 0)) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        FUN_1010bf70(extraout_ECX_00);
        iVar4 = *(int *)(param_1 + 4);
        iVar5 = FUN_10157670(param_1);
        if (iVar5 == 0) {
          FUN_1010c3c0(*(int *)(param_1 + 4) - iVar4,uVar3);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10158990 @ 10158990  size=250 ===== */
// calls: _wassert
// strings:
//   "[fetchProcs]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[scriptVars]"
//   "[onlineTime]"

/* WARNING: Removing unreachable block (ram,0x101589a0) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[fetchProcs]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[scriptVars]""
     ""[onlineTime]"" */

void FUN_10158990(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = FUN_1024a140(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[fetchProcs]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = FUN_10153890(param_1,iVar1,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[scriptVars]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = FUN_10156700(param_1,iVar1,param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_3,"[onlineTime]",extraout_ECX_00), iVar1 == 0)
         ) {
        if (param_2 < 0) {
          FUN_10157f00(param_1,param_2,param_3);
          return;
        }
        FUN_10157f00(param_1,param_2 + 1,param_3);
      }
    }
  }
  return;
}



/* ===== FUN_10159fb0 @ 10159fb0  size=257 ===== */
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

uint __thiscall FUN_10159fb0(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[6] & 1) == 0) {
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x2a4);
        }
        if ((uint)(param_2[2] - param_2[1]) < 2) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(*param_2 + 1 + param_2[1]);
        param_1[1] = *(undefined1 *)(*param_2 + param_2[1]);
        param_2[1] = param_2[1] + 2;
      }
      else {
        if (local_8 >> 4 == 3) {
          if ((*(uint *)(param_1 + 6) >> 1 & 1) == 0) {
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
          }
          uVar1 = FUN_1010c870(param_1 + 2);
        }
        else {
          uVar1 = FUN_1010d4f0();
        }
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_1015a5a0 @ 1015a5a0  size=226 ===== */
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

int __thiscall FUN_1015a5a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar1 = param_2[1];
  uVar2 = param_2[1];
  do {
    iVar3 = 0;
    if ((uint)(param_3 + iVar1) <= uVar2) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
      }
      iVar3 = FUN_1010cbd0(param_1);
LAB_1015a64f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1015a64f;
      }
      if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_1015a690 @ 1015a690  size=226 ===== */
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

int __thiscall FUN_1015a690(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar1 = param_2[1];
  uVar2 = param_2[1];
  do {
    iVar3 = 0;
    if ((uint)(param_3 + iVar1) <= uVar2) {
      if ((uint)(param_3 + iVar1) < (uint)param_2[1]) {
        iVar3 = -0x22;
      }
      return iVar3;
    }
    iVar3 = FUN_1010ccb0(&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 >> 4 == 1) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
      }
      iVar3 = FUN_1010c870(param_1);
LAB_1015a73f:
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      if (local_8 >> 4 != 2) {
        iVar3 = FUN_1010d4f0();
        goto LAB_1015a73f;
      }
      if ((*(uint *)(param_1 + 5) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
      }
      if ((uint)param_2[2] < (uint)param_2[1]) {
        _wassert(L"position <= length",
                 L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
      }
      if (param_2[2] == param_2[1]) {
        return -2;
      }
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2[1] + *param_2);
      param_2[1] = param_2[1] + 1;
    }
    uVar2 = param_2[1];
  } while( true );
}



/* ===== FUN_1015aad0 @ 1015aad0  size=98 ===== */
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

int __thiscall FUN_1015aad0(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      return 0;
    }
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_1015ab40 @ 1015ab40  size=98 ===== */
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

int __thiscall FUN_1015ab40(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] != param_2[1]) {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      return 0;
    }
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_1015ac80 @ 1015ac80  size=180 ===== */
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

uint __thiscall FUN_1015ac80(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[1] & 1) == 0) {
          *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        uVar1 = FUN_1010d4f0();
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_1015ad40 @ 1015ad40  size=180 ===== */
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

uint __thiscall FUN_1015ad40(undefined1 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = param_3 + param_2[1];
  uVar1 = param_2[1];
  if (uVar1 < uVar2) {
    do {
      uVar1 = FUN_1010ccb0(&local_8);
      if (uVar1 != 0) {
        return uVar1;
      }
      if (local_8 >> 4 == 1) {
        if ((param_1[1] & 1) == 0) {
          *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
        }
        if ((uint)param_2[2] < (uint)param_2[1]) {
          _wassert(L"position <= length",
                   L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x290);
        }
        if (param_2[2] == param_2[1]) {
          return 0xfffffffe;
        }
        *param_1 = *(undefined1 *)(param_2[1] + *param_2);
        param_2[1] = param_2[1] + 1;
      }
      else {
        uVar1 = FUN_1010d4f0();
        if (uVar1 != 0) {
          return uVar1;
        }
      }
    } while ((uint)param_2[1] < uVar2);
    uVar1 = param_2[1];
  }
  return -(uint)(uVar2 < uVar1) & 0xffffffde;
}



/* ===== FUN_1015f980 @ 1015f980  size=121 ===== */
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

int __thiscall FUN_1015f980(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x21);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1015fa00 @ 1015fa00  size=121 ===== */
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

int __thiscall FUN_1015fa00(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1010c5f0(0x11);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar2 = -1;
    }
    else {
      *(undefined1 *)(param_2[1] + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
      iVar2 = FUN_1010c5f0(0x21);
      if (iVar2 == 0) {
        iVar2 = FUN_1010c0c0(param_1[1]);
        return iVar2;
      }
    }
  }
  return iVar2;
}



