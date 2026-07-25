// TdrDump_GuildWarCommerce_dwErrCode_wCount_astList_ullGuildId_dwCommerceId @ 10356450
// ramp offsets referenced: [546, 550, 554]


/* WARNING: Removing unreachable block (ram,0x103564d7) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwErrCode]""
     ""[wCount]""
     ""[astGuildWarCommerceInfoList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""%I64u""
     ""[ullGuildId]""
     ""[dwCommerceId]"" */

int __thiscall
TdrDump_GuildWarCommerce_dwErrCode_wCount_astList_ullGuildId_dwCommerceId
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwErrCode]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,
                                  *(undefined2 *)(param_1 + 1)), iVar1 == 0)) {
    if (10 < *(ushort *)(param_1 + 1)) {
      return -7;
    }
    uVar2 = 0;
    if (*(ushort *)(param_1 + 1) != 0) {
      do {
        iVar1 = TdrText_WriteIndent(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astGuildWarCommerceInfoList]",uVar2,
                             (int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TdrDump__CommoditySalesFull(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 1));
    }
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",
                                *(undefined4 *)((int)param_1 + 0x222),
                                *(undefined4 *)((int)param_1 + 0x226));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceId]",&DAT_11d9f574,
                                  *(undefined4 *)((int)param_1 + 0x22a));
    }
  }
  return iVar1;
}

