/* ===== FUN_102ce8a0 @ 102ce8a0  size=771 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[wStoreSize]"
//   "[wNormalSize]"
//   "[wMaterialStoreSize]"
//   "[iBagSize]"
//   "[szBagItem]"
//   "[wEquipSize]"
//   "[szEquipItem]"
//   "[iStoreDataSize]"
//   "[szStoreItem]"
//   "[wItemUseOnceCount]"
//   "[itemUseOnceList]"

/* [RE-AUTO c0]
   strings:
     ""[wStoreSize]""
     ""[wNormalSize]""
     ""[wMaterialStoreSize]""
     ""[iBagSize]""
     ""[szBagItem]""
     ""[wEquipSize]""
     ""[szEquipItem]""
     ""[iStoreDataSize]""
     ""[szStoreItem]""
     ""[wItemUseOnceCount]"" */

int __thiscall
FUN_102ce8a0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wStoreSize]",&DAT_11d9e0b4,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wNormalSize]",&DAT_11d9e0b4,param_1[1]
                                   ), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wMaterialStoreSize]",&DAT_11d9e0b4,
                                   param_1[2]), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBagSize]",&DAT_11d9e0b4,
                                  *(undefined4 *)(param_1 + 3)), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 3);
    if (iVar1 < 0) {
      return -6;
    }
    if (82000 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szBagItem]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 3)) {
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar1 + 10));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 3));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wEquipSize]",&DAT_11d9e0b4,
                                      param_1[0xa02d]), iVar1 == 0)) {
        if (0x1000 < (ushort)param_1[0xa02d]) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(0x1000,"[szEquipItem]",param_1[0xa02d],0);
        if (iVar1 == 0) {
          if (param_1[0xa02d] != 0) {
            uVar3 = 0;
            do {
              iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,
                                   *(undefined1 *)(uVar3 + 0x1405c + (int)param_1));
              if (iVar1 != 0) {
                return iVar1;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < (ushort)param_1[0xa02d]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
          if ((iVar1 == 0) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStoreDataSize]",&DAT_11d9e0b4,
                                          *(undefined4 *)(param_1 + 0xa82e)), iVar1 == 0)) {
            iVar1 = *(int *)(param_1 + 0xa82e);
            if (iVar1 < 0) {
              return -6;
            }
            if (200000 < iVar1) {
              return -7;
            }
            iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[szStoreItem]",iVar1,iVar1 >> 0x1f);
            if (iVar1 == 0) {
              iVar1 = 0;
              if (0 < *(int *)(param_1 + 0xa82e)) {
                do {
                  iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                       *(undefined1 *)((int)param_1 + iVar1 + 0x15060));
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar1 = iVar1 + 1;
                } while (iVar1 < *(int *)(param_1 + 0xa82e));
              }
              iVar1 = TdrBuf_PutU8Z(param_4);
              if ((iVar1 == 0) &&
                 (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemUseOnceCount]",
                                              &DAT_11d9e0b4,param_1[0x22ed0]), iVar1 == 0)) {
                if (200 < (ushort)param_1[0x22ed0]) {
                  return -7;
                }
                iVar1 = TdrText_ArrayHeader(200,"[itemUseOnceList]",param_1[0x22ed0],0);
                if (iVar1 == 0) {
                  uVar3 = 0;
                  if (param_1[0x22ed0] != 0) {
                    do {
                      iVar1 = FUN_1010c010(param_2,&DAT_11d9f710,param_1[uVar3 + 0x22ed1]);
                      if (iVar1 != 0) {
                        return iVar1;
                      }
                      uVar3 = uVar3 + 1;
                    } while (uVar3 < (ushort)param_1[0x22ed0]);
                  }
                  iVar1 = TdrBuf_PutU8Z(param_4);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102debc0 @ 102debc0  size=448 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar
// strings:
//   "[dwPlayerId]"
//   "[dwNetObjId]"
//   "[szName]"
//   "[bGender]"
//   "[stPosition]"
//   "[stRotation]"
//   "[fScale]"
//   "[dwNewConnect]"
//   "[dwSendSrvId]"
//   "[szEquipmentPack]"
//   "[bAvatarSetID]"

/* [RE-AUTO c0]
   strings:
     ""[dwPlayerId]""
     ""[dwNetObjId]""
     ""[szName]""
     ""[bGender]""
     ""[stPosition]""
     ""[stRotation]""
     ""[fScale]""
     ""[dwNewConnect]""
     ""[dwSendSrvId]""
     ""[szEquipmentPack]"" */

void __thiscall FUN_102debc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwPlayerId]",&DAT_11d9f574,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,param_1[1])
       , iVar1 == 0)) && (iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2), iVar1 == 0)
      ) && ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGender]",&DAT_11d9e0b4,
                                         *(undefined1 *)(param_1 + 10)), iVar1 == 0 &&
            (iVar1 = TdrText_FieldLabelChar(param_4,"[stPosition]",extraout_ECX), iVar1 == 0)))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_10277cf0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stRotation]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102780d0(param_2,iVar1,param_4);
      if ((((iVar1 == 0) &&
           (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[fScale]",&DAT_11da0cf4,
                                        (double)*(float *)((int)param_1 + 0x45)), iVar1 == 0)) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNewConnect]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x49)), iVar1 == 0)) &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSendSrvId]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x4d)), iVar1 == 0 &&
          (iVar1 = TdrText_FieldValueFmt(param_4,"[szEquipmentPack]",(int)param_1 + 0x51),
          iVar1 == 0)))) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[bAvatarSetID]",&DAT_11d9e0b4,
                            *(undefined1 *)((int)param_1 + 0x71));
      }
    }
  }
  return;
}



/* ===== FUN_102e6660 @ 102e6660  size=110 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iResult]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iResult]"" */

void __thiscall
FUN_102e6660(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iResult]",&DAT_11d9e0b4,
                          *(undefined4 *)(param_1 + 3));
    }
  }
  return;
}



/* ===== FUN_103284f0 @ 103284f0  size=183 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "[dwItemType]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[stItemData]"

/* [RE-AUTO c0]
   strings:
     ""[dwItemType]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[stItemData]"" */

void __thiscall FUN_103284f0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwItemType]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 5));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldLabelChar(param_4,"[stItemData]",extraout_ECX);
        if (iVar1 == 0) {
          if (param_3 < 0) {
            FUN_102741f0(param_2,param_3,param_4);
            return;
          }
          FUN_102741f0(param_2,param_3 + 1,param_4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10329240 @ 10329240  size=113 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_10329240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                          *(undefined2 *)((int)param_1 + 9));
    }
  }
  return;
}



/* ===== FUN_10329a30 @ 10329a30  size=177 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_10329a30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                              *(undefined2 *)(param_1 + 3));
        }
      }
    }
  }
  return;
}



/* ===== FUN_10329e00 @ 10329e00  size=177 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_10329e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                              *(undefined2 *)(param_1 + 3));
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032a200 @ 1032a200  size=214 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullSrcItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[ullDstItemID]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullSrcItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[ullDstItemID]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_1032a200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullSrcItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 0xb),
                                    *(undefined4 *)((int)param_1 + 0xf));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0x13));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 5));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032aec0 @ 1032aec0  size=214 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[ullDstItemID]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[ullDstItemID]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_1032aec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 0xb),
                                    *(undefined4 *)((int)param_1 + 0xf));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0x13));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 5));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032b2e0 @ 1032b2e0  size=214 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[ullDstItemID]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[ullDstItemID]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_1032b2e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 0xb),
                                    *(undefined4 *)((int)param_1 + 0xf));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0x13));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 5));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032b720 @ 1032b720  size=250 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"
//   "[bDstColumn]"
//   "[wDstGrid]"
//   "[ullDstItemID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]""
     ""[bDstColumn]""
     ""[wDstGrid]""
     ""[ullDstItemID]"" */

void __thiscall
FUN_1032b720(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                    *(undefined2 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0xd));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                        *(undefined2 *)((int)param_1 + 0xe));
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",param_1[4],
                                  param_1[5]);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032bb50 @ 1032bb50  size=213 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_1032bb50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                    *(undefined2 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0xd));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)((int)param_1 + 0xe));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032bf20 @ 1032bf20  size=145 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]"" */

void __thiscall
FUN_1032bf20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_1032cfa0 @ 1032cfa0  size=408 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemBegGrid]"
//   "[wItemEndGrid]"
//   "[wItemCount]"
//   "[iMoveSeq]"
//   "[iSwapSeq]"
//   "[iAddSeq]"
//   "[iDelSeq]"
//   "[astItemLocList]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemBegGrid]""
     ""[wItemEndGrid]""
     ""[wItemCount]""
     ""[iMoveSeq]""
     ""[iSwapSeq]""
     ""[iAddSeq]""
     ""[iDelSeq]""
     ""[astItemLocList]"" */

int __thiscall FUN_1032cfa0(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",*param_1);
  if (((((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemBegGrid]",&DAT_11d9e0b4,
                                     *(undefined2 *)(param_1 + 1)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemEndGrid]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 3)), iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 5)), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMoveSeq]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 7)), iVar1 == 0)))) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSwapSeq]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb)), iVar1 == 0 &&
      ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddSeq]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0xf)), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDelSeq]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 0x13)), iVar1 == 0)))))) {
    if (2000 < *(ushort *)(param_1 + 5)) {
      return -7;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 5) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astItemLocList]",uVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1032bf20(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
      } while (uVar3 < *(ushort *)(param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1032d540 @ 1032d540  size=276 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemBegGrid]"
//   "[wItemEndGrid]"
//   "[wItemCount]"
//   "[astItemLocList]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemBegGrid]""
     ""[wItemEndGrid]""
     ""[wItemCount]""
     ""[astItemLocList]"" */

int __thiscall FUN_1032d540(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemBegGrid]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 1)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemEndGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)(param_1 + 3)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                  *(undefined2 *)(param_1 + 5)), iVar1 == 0)) {
    if (2000 < *(ushort *)(param_1 + 5)) {
      return -7;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 5) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astItemLocList]",uVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1032bf20(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
      } while (uVar3 < *(ushort *)(param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1032da90 @ 1032da90  size=238 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[dwParam1]"
//   "[dwParam2]"
//   "[dwParam3]"
//   "[szExtParam]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[dwParam1]""
     ""[dwParam2]""
     ""[dwParam3]""
     ""[szExtParam]"" */

void __thiscall
FUN_1032da90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwParam1]",&DAT_11d9f574,
                                    *(undefined4 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwParam2]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0xf));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwParam3]",&DAT_11d9f574,
                                        *(undefined4 *)((int)param_1 + 0x13));
            if (iVar1 == 0) {
              TdrText_FieldValueFmt(param_4,"[szExtParam]",(int)param_1 + 0x17);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1032de70 @ 1032de70  size=145 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]"" */

void __thiscall
FUN_1032de70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_1034ac50 @ 1034ac50  size=145 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]"" */

void __thiscall
FUN_1034ac50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_1034b540 @ 1034b540  size=276 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemBegGrid]"
//   "[wItemEndGrid]"
//   "[wItemCount]"
//   "[astItemLocList]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemBegGrid]""
     ""[wItemEndGrid]""
     ""[wItemCount]""
     ""[astItemLocList]"" */

int __thiscall FUN_1034b540(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemBegGrid]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 1)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemEndGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)(param_1 + 3)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                  *(undefined2 *)(param_1 + 5)), iVar1 == 0)) {
    if (1000 < *(ushort *)(param_1 + 5)) {
      return -7;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 5) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astItemLocList]",uVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1034ac50(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
      } while (uVar3 < *(ushort *)(param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_10353580 @ 10353580  size=145 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wReason]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wReason]"" */

void __thiscall
FUN_10353580(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wReason]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_10353930 @ 10353930  size=177 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_10353930(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                              *(undefined2 *)(param_1 + 3));
        }
      }
    }
  }
  return;
}



/* ===== FUN_10353d30 @ 10353d30  size=214 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[ullDstItemID]"
//   "[bDstColumn]"
//   "[wDstGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[ullDstItemID]""
     ""[bDstColumn]""
     ""[wDstGrid]"" */

void __thiscall
FUN_10353d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 0xb),
                                    *(undefined4 *)((int)param_1 + 0xf));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstColumn]","0x%02x",
                                      *(undefined1 *)((int)param_1 + 0x13));
          if (iVar1 == 0) {
            TdrText_FieldScalar(param_2,param_3,param_4,"[wDstGrid]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 5));
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10354210 @ 10354210  size=276 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemBegGrid]"
//   "[wItemEndGrid]"
//   "[wItemCount]"
//   "[astItemLocList]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemBegGrid]""
     ""[wItemEndGrid]""
     ""[wItemCount]""
     ""[astItemLocList]"" */

int __thiscall FUN_10354210(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemBegGrid]",&DAT_11d9e0b4,
                                    *(undefined2 *)(param_1 + 1)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemEndGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)(param_1 + 3)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                                  *(undefined2 *)(param_1 + 5)), iVar1 == 0)) {
    if (1000 < *(ushort *)(param_1 + 5)) {
      return -7;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 5) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astItemLocList]",uVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1034ac50(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
      } while (uVar3 < *(ushort *)(param_1 + 5));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103e9840 @ 103e9840  size=113 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103e9840(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                          *(undefined2 *)((int)param_1 + 9));
    }
  }
  return;
}



/* ===== FUN_103e9bb0 @ 103e9bb0  size=143 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103e9bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[1],param_1[2])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                  *(undefined1 *)(param_1 + 3));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xd));
      }
    }
  }
  return;
}



/* ===== FUN_103e9f40 @ 103e9f40  size=173 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iCreditItemCnt]"
//   "[iGoalLevel]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iCreditItemCnt]""
     ""[iGoalLevel]"" */

void __thiscall
FUN_103e9f40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCreditItemCnt]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xb));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iGoalLevel]",&DAT_11d9e0b4,
                              *(undefined4 *)((int)param_1 + 0xf));
        }
      }
    }
  }
  return;
}



/* ===== FUN_103ea2e0 @ 103ea2e0  size=143 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103ea2e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[1],param_1[2])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                  *(undefined1 *)(param_1 + 3));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xd));
      }
    }
  }
  return;
}



/* ===== FUN_103ea6e0 @ 103ea6e0  size=286 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[wTransferAttr]"
//   "[wTransferType]"
//   "%I64u"
//   "[ullSrcItemID]"
//   "0x%02x"
//   "[bSrcItemColumn]"
//   "[wSrcItemGrid]"
//   "[ullDstItemID]"
//   "[bDstItemColumn]"
//   "[wDstItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[wTransferAttr]""
     ""[wTransferType]""
     ""%I64u""
     ""[ullSrcItemID]""
     ""0x%02x""
     ""[bSrcItemColumn]""
     ""[wSrcItemGrid]""
     ""[ullDstItemID]""
     ""[bDstItemColumn]""
     ""[wDstItemGrid]"" */

void __thiscall
FUN_103ea6e0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wTransferAttr]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wTransferType]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullSrcItemID]","%I64u",
                                  *(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSrcItemColumn]","0x%02x",
                                    *(undefined1 *)(param_1 + 6));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wSrcItemGrid]",&DAT_11d9e0b4,
                                      *(undefined2 *)((int)param_1 + 0xd));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                        *(undefined4 *)((int)param_1 + 0xf),
                                        *(undefined4 *)((int)param_1 + 0x13));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstItemColumn]","0x%02x",
                                          *(undefined1 *)((int)param_1 + 0x17));
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[wDstItemGrid]",&DAT_11d9e0b4,
                                    param_1[0xc]);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103eaba0 @ 103eaba0  size=320 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "[wTransferAttr]"
//   "[wTransferType]"
//   "%I64u"
//   "[ullSrcItemID]"
//   "0x%02x"
//   "[bSrcItemColumn]"
//   "[wSrcItemGrid]"
//   "[ullDstItemID]"
//   "[bDstItemColumn]"
//   "[wDstItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""[wTransferAttr]""
     ""[wTransferType]""
     ""%I64u""
     ""[ullSrcItemID]""
     ""0x%02x""
     ""[bSrcItemColumn]""
     ""[wSrcItemGrid]""
     ""[ullDstItemID]""
     ""[bDstItemColumn]"" */

void __thiscall
FUN_103eaba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wTransferAttr]",&DAT_11d9e0b4,
                                *(undefined2 *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wTransferType]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 6));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullSrcItemID]","%I64u",param_1[2],
                                    param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSrcItemColumn]","0x%02x",
                                      *(undefined1 *)(param_1 + 4));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wSrcItemGrid]",&DAT_11d9e0b4,
                                        *(undefined2 *)((int)param_1 + 0x11));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullDstItemID]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0x13),
                                          *(undefined4 *)((int)param_1 + 0x17));
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDstItemColumn]","0x%02x",
                                            *(undefined1 *)((int)param_1 + 0x1b));
                if (iVar1 == 0) {
                  TdrText_FieldScalar(param_2,param_3,param_4,"[wDstItemGrid]",&DAT_11d9e0b4,
                                      *(undefined2 *)(param_1 + 7));
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



/* ===== FUN_103edf50 @ 103edf50  size=334 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iDstItemID]"
//   "[iCreditItemCnt]"
//   "[bTagItemCnt]"
//   "[astTagItemData]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iDstItemID]""
     ""[iCreditItemCnt]""
     ""[bTagItemCnt]""
     ""[astTagItemData]"" */

int __thiscall FUN_103edf50(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  byte bVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                    *(undefined1 *)(param_1 + 2)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)((int)param_1 + 9)), iVar1 == 0)) &&
     (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDstItemID]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xb)), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCreditItemCnt]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xf)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTagItemCnt]","0x%02x",
                                   *(undefined1 *)((int)param_1 + 0x13)), iVar1 == 0)))) {
    if (6 < *(byte *)((int)param_1 + 0x13)) {
      return -7;
    }
    bVar3 = 0;
    uVar2 = extraout_ECX;
    if (*(byte *)((int)param_1 + 0x13) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astTagItemData]",bVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10272300(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar3 = bVar3 + 1;
        uVar2 = extraout_ECX_00;
      } while (bVar3 < *(byte *)((int)param_1 + 0x13));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103ee3b0 @ 103ee3b0  size=173 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iErrArg1]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iErrArg1]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103ee3b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrArg1]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[2],
                                  param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                    *(undefined1 *)(param_1 + 4));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                              *(undefined2 *)((int)param_1 + 0x11));
        }
      }
    }
  }
  return;
}



/* ===== FUN_103eeed0 @ 103eeed0  size=145 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[wItemCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[wItemCount]"" */

void __thiscall
FUN_103eeed0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemCount]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_103ef260 @ 103ef260  size=143 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iColorIndex]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iColorIndex]"" */

void __thiscall
FUN_103ef260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                  *(undefined2 *)((int)param_1 + 9));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iColorIndex]",&DAT_11d9e0b4,
                            *(undefined4 *)((int)param_1 + 0xb));
      }
    }
  }
  return;
}



/* ===== FUN_103ef600 @ 103ef600  size=173 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iColorIndex]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iColorIndex]"" */

void __thiscall
FUN_103ef600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[1],param_1[2])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                  *(undefined1 *)(param_1 + 3));
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                    *(undefined2 *)((int)param_1 + 0xd));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iColorIndex]",&DAT_11d9e0b4,
                              *(undefined4 *)((int)param_1 + 0xf));
        }
      }
    }
  }
  return;
}



/* ===== FUN_103f1500 @ 103f1500  size=113 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103f1500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                *(undefined1 *)(param_1 + 2));
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                          *(undefined2 *)((int)param_1 + 9));
    }
  }
  return;
}



/* ===== FUN_103f1870 @ 103f1870  size=143 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iErrCode]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iErrCode]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_103f1870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[1],param_1[2])
    ;
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                  *(undefined1 *)(param_1 + 3));
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                            *(undefined2 *)((int)param_1 + 0xd));
      }
    }
  }
  return;
}



/* ===== FUN_10412a60 @ 10412a60  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iSrcBeast]"
//   "[iDstBeast]"
//   "[iUseItem]"

/* [RE-AUTO c0]
   strings:
     ""[iSrcBeast]""
     ""[iDstBeast]""
     ""[iUseItem]"" */

void __thiscall
FUN_10412a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSrcBeast]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDstBeast]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[iUseItem]",&DAT_11d9e0b4,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_1041bfe0 @ 1041bfe0  size=334 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"
//   "[iDstItemID]"
//   "[iCreditItemCnt]"
//   "[bTagItemCnt]"
//   "[astTagItemData]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]""
     ""[iDstItemID]""
     ""[iCreditItemCnt]""
     ""[bTagItemCnt]""
     ""[astTagItemData]"" */

int __thiscall FUN_1041bfe0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  byte bVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",*param_1,param_1[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                    *(undefined1 *)(param_1 + 2)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                                   *(undefined2 *)((int)param_1 + 9)), iVar1 == 0)) &&
     (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDstItemID]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xb)), iVar1 == 0 &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCreditItemCnt]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0xf)), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bTagItemCnt]","0x%02x",
                                   *(undefined1 *)((int)param_1 + 0x13)), iVar1 == 0)))) {
    if (6 < *(byte *)((int)param_1 + 0x13)) {
      return -7;
    }
    bVar3 = 0;
    uVar2 = extraout_ECX;
    if (*(byte *)((int)param_1 + 0x13) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astTagItemData]",bVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10272300(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar3 = bVar3 + 1;
        uVar2 = extraout_ECX_00;
      } while (bVar3 < *(byte *)((int)param_1 + 0x13));
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_1041c440 @ 1041c440  size=173 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iErrArg1]"
//   "%I64u"
//   "[ullItemID]"
//   "0x%02x"
//   "[bItemColumn]"
//   "[wItemGrid]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iErrArg1]""
     ""%I64u""
     ""[ullItemID]""
     ""0x%02x""
     ""[bItemColumn]""
     ""[wItemGrid]"" */

void __thiscall
FUN_1041c440(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iErrArg1]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullItemID]","%I64u",param_1[2],
                                  param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemColumn]","0x%02x",
                                    *(undefined1 *)(param_1 + 4));
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[wItemGrid]",&DAT_11d9e0b4,
                              *(undefined2 *)((int)param_1 + 0x11));
        }
      }
    }
  }
  return;
}



/* ===== FUN_10515860 @ 10515860  size=744 ===== */
// strings:
//   "_PetEquips"
//   "PETEQUIPITEMVO_CLASS_NAME"
//   "asset"
//   "collumn"
//   "m_bUseItem"
//   "isBind"
//   "m_nBindType"
//   "RefreshPetEquipsUI"

/* [RE-AUTO c0]
   strings:
     ""_PetEquips""
     ""PETEQUIPITEMVO_CLASS_NAME""
     ""asset""
     ""collumn""
     ""m_bUseItem""
     ""isBind""
     ""m_nBindType""
     ""RefreshPetEquipsUI"" */

void __fastcall FUN_10515860(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *local_78;
  uint local_74;
  undefined4 local_70;
  int *local_60;
  uint local_5c;
  undefined4 *local_58;
  int *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  if (iVar2 != 0) {
    FUN_112f7b30(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                 (int *)(param_1 + 0x158));
    local_78 = (int *)0x0;
    local_74 = 0;
    local_60 = (int *)0x0;
    local_5c = 0;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    (**(code **)(*DAT_123bcdb0 + 0x10))
              (DAT_123bcdb8,"_PetEquips",&local_78,((byte)DAT_123bcdb4 & 0x8f) == 10);
    (**(code **)(*local_78 + 0x44))(local_70,0,0xffffffff);
    local_2c = (undefined4 *)0x0;
    local_28 = (int *)CONCAT31(local_28._1_3_,((byte)DAT_123bcdb4 & 0x8f) == 10);
    cVar1 = (**(code **)(*DAT_123bcdb0 + 0x10))
                      (DAT_123bcdb8,"PETEQUIPITEMVO_CLASS_NAME",&local_60,local_28);
    if ((cVar1 != '\0') && (((byte)local_5c & 0x8f) == 6)) {
      if ((local_5c >> 6 & 1) == 0) {
        local_2c = local_58;
      }
      else {
        local_2c = (undefined4 *)*local_58;
      }
    }
    local_28 = *(int **)(param_1 + 0x15c);
    piVar3 = *(int **)(param_1 + 0x158);
    local_48 = (int *)0x0;
    local_44 = 0;
    if (piVar3 != local_28) {
      do {
        FUN_11a98de0(&local_48,local_2c,0,0);
        if (*piVar3 == 0) {
          FUN_104d1550(&DAT_11dbb0b4,0);
        }
        else {
          FUN_104d1550(&DAT_11dbb0b4,*piVar3);
          FUN_104d1670("asset",piVar3[0xb]);
          local_24[0] = 0;
          local_14 = local_24;
          local_10 = local_14;
          FUN_100e5aa0(local_14);
          FUN_104d1670(&DAT_11dbac80,local_10);
          if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_10);
          }
          FUN_104d1550("collumn",piVar3[2]);
          FUN_104d15e0("m_bUseItem",0 < piVar3[0xd]);
          FUN_104d1550(&DAT_11dbfe78,piVar3[1]);
          FUN_104d15e0("isBind",(char)piVar3[0xe]);
          FUN_104d1550("m_nBindType",piVar3[0xf]);
        }
        (**(code **)(*local_78 + 0x3c))(local_70,&local_48);
        piVar3 = piVar3 + 0x10;
      } while (piVar3 != local_28);
    }
    if ((local_44 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 8))(&local_48,local_40);
      local_48 = (int *)0x0;
    }
    local_44 = 0;
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
      local_60 = (int *)0x0;
    }
    local_5c = 0;
    if ((local_74 >> 6 & 1) != 0) {
      (**(code **)(*local_78 + 8))(&local_78,local_70);
    }
  }
  (**(code **)(*DAT_123bcdb0 + 0x18))
            (DAT_123bcdb8,0,"RefreshPetEquipsUI",0,0,((byte)DAT_123bcdb4 & 0x8f) == 10);
  FUN_11a89daa();
  return;
}



/* ===== FUN_1052c520 @ 1052c520  size=158 ===== */
// calls: CItemBoxInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CItemBoxInfo"

/* [RE-AUTO c0]
   calls: CItemBoxInfo::GetManagers
   strings:
     ""CItemBoxInfo"" */

undefined4 FUN_1052c520(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0af8;
  puVar2 = (undefined4 *)CItemBoxInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CItemBoxInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be688 & 1) == 0) {
        DAT_123be688 = DAT_123be688 | 1;
        FUN_1053cc60();
        FUN_11a8911f(&LAB_11c70050);
      }
      puVar3 = &DAT_123be650;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1052c6a0 @ 1052c6a0  size=158 ===== */
// calls: CItemBoxGroupInfo::GetInfoManager, CInfoManager::FindByName
// strings:
//   "CItemBoxGroupInfo"

/* [RE-AUTO c0]
   calls: CItemBoxGroupInfo::GetManagers
   strings:
     ""CItemBoxGroupInfo"" */

undefined4 FUN_1052c6a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0b10;
  puVar2 = (undefined4 *)CItemBoxGroupInfo__GetInfoManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CItemBoxGroupInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123be64c & 1) == 0) {
        DAT_123be64c = DAT_123be64c | 1;
        FUN_1053cd00();
        FUN_11a8911f(&LAB_11c6fff0);
      }
      puVar3 = &DAT_123be614;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_108aca50 @ 108aca50  size=158 ===== */
// calls: CExpandInventorySlotInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CExpandInventorySlotInfo"

/* [RE-AUTO c0]
   calls: CExpandInventorySlotInfo::GetManagers
   strings:
     ""CExpandInventorySlotInfo"" */

undefined4 FUN_108aca50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd3c9c;
  puVar2 = (undefined4 *)CExpandInventorySlotInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CExpandInventorySlotInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c79d0 & 1) == 0) {
        DAT_123c79d0 = DAT_123c79d0 | 1;
        FUN_108abde0();
        FUN_11a8911f(&LAB_11c74f80);
      }
      puVar3 = &DAT_123c7970;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_108ad830 @ 108ad830  size=158 ===== */
// calls: CExpandStoreHouseSlotInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CExpandStoreHouseSlotInfo"

/* [RE-AUTO c0]
   calls: CExpandStoreHouseSlotInfo::GetManagers
   strings:
     ""CExpandStoreHouseSlotInfo"" */

undefined4 FUN_108ad830(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dd3d18;
  puVar2 = (undefined4 *)CExpandStoreHouseSlotInfo__GetManager();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CExpandStoreHouseSlotInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c796c & 1) == 0) {
        DAT_123c796c = DAT_123c796c | 1;
        FUN_108acbc0();
        FUN_11a8911f(&LAB_11c75010);
      }
      puVar3 = &DAT_123c790c;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_108b2440 @ 108b2440  size=977 ===== */
// strings:
//   "inHunterGroup"
//   "m_Fund"
//   "rights"
//   "inventoryRight"
//   "isHunterLeader"
//   "title"
//   "m_leaderName"
//   "updataSelfCallBack"

/* [RE-AUTO c0]
   strings:
     ""inHunterGroup""
     ""m_Fund""
     ""rights""
     ""inventoryRight""
     ""isHunterLeader""
     ""title""
     ""m_leaderName""
     ""updataSelfCallBack"" */

void __fastcall FUN_108b2440(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *unaff_ESI;
  undefined4 *puVar9;
  int iStack_9c;
  int *piStack_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [4];
  int *piStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 auStack_24 [20];
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_9c;
  local_94 = param_1;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar4 != 0) {
      piVar1 = *(int **)(iVar4 + 0x2abc);
      piStack_98 = (int *)(**(code **)(*piVar1 + 0xc))();
      iStack_90 = (**(code **)(*piVar1 + 0x14))();
      if (*(int **)(param_1 + 0x24) != (int *)0x0) {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
        if (iVar4 != 0) {
          piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
          iStack_9c = (**(code **)(*piVar5 + 0x108))();
          if ((iStack_9c != 0) && (((byte)*(undefined4 *)(param_1 + 0x44) & 0x8f) != 1)) {
            cVar2 = (**(code **)(*piVar1 + 8))();
            puVar9 = (undefined4 *)(param_1 + 0x40);
            uStack_8c = CONCAT31(uStack_8c._1_3_,cVar2);
            FUN_104d15e0("inHunterGroup",uStack_8c);
            if (cVar2 != '\0') {
              uVar6 = FUN_114a8610();
              FUN_104d1550("m_Fund",uVar6);
              FUN_104d1550(&DAT_11dd493c,*(undefined4 *)(iStack_90 + 0x84));
              iVar4 = FUN_114b0f80();
              FUN_104d1550("rights",*(undefined4 *)(iVar4 + 0x20));
              piStack_88 = (int *)0x0;
              uStack_84 = 0;
              uVar7 = (uint)(((byte)*(undefined4 *)(param_1 + 0x44) & 0x8f) == 10);
              (**(code **)(*(int *)*puVar9 + 0x10))
                        (*(undefined4 *)(param_1 + 0x48),"inventoryRight",&piStack_88);
              (**(code **)(*piStack_98 + 0x2c))(iStack_90,0);
              iVar4 = 0;
              do {
                FUN_114b0f80(iVar4);
                FUN_114f7390();
                piStack_5c = (int *)0x0;
                piStack_58 = (int *)0x0;
                uVar8 = FUN_116294f0();
                if (((uint)piStack_58 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_5c + 8))(&piStack_5c,uStack_54);
                  piStack_5c = (int *)0x0;
                }
                piStack_58 = (int *)0x3;
                uStack_54 = uVar8;
                (**(code **)(*unaff_ESI + 0x3c))(iStack_9c,&piStack_5c);
                if ((uStack_54 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 7);
              uVar3 = FUN_114b0f90();
              puVar9 = (undefined4 *)(uVar7 + 0x40);
              FUN_104d15e0("isHunterLeader",uVar3);
              iVar4 = FUN_114b0f80();
              FUN_104d1550("title",*(undefined4 *)(iVar4 + 4));
              puStack_2c = auStack_3c;
              auStack_3c[0] = 0;
              puStack_28 = puStack_2c;
              iVar4 = FUN_114a8d90();
              ppiStack_48 = &piStack_58;
              ppiStack_44 = ppiStack_48;
              FUN_100b62c0(*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x18));
              FUN_108b9da0();
              if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_4c);
              }
              FUN_104d1670("m_leaderName",uStack_30);
              if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_10);
              }
              if ((uStack_84 >> 6 & 1) != 0) {
                (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
              }
            }
            piStack_58 = (int *)0x0;
            uStack_54 = 0;
            piStack_70 = (int *)0x0;
            uStack_6c = 3;
            uStack_68 = 1;
            (**(code **)(*(int *)*puVar9 + 0x18))
                      (puVar9[2],&piStack_58,"updataSelfCallBack",&piStack_70,1,
                       ((byte)puVar9[1] & 0x8f) == 10);
            if ((uStack_6c >> 6 & 1) != 0) {
              (**(code **)(*piStack_70 + 8))(&piStack_70,uStack_68);
              piStack_70 = (int *)0x0;
            }
            uStack_6c = 0;
            if ((uStack_54 >> 6 & 1) != 0) {
              (**(code **)(*piStack_58 + 8))(&piStack_58,uStack_50);
            }
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10924ee0 @ 10924ee0  size=660 ===== */
// calls: GrantActivityReward, CInfoRecord::GetModelString
// strings:
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE_WARDROBE"" */

void FUN_10924ee0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char cStack_1c;
  int local_18 [3];
  undefined1 local_c;
  
  if (in_stack_00000014 == 1) {
    uVar2 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      iVar5 = *(int *)(in_stack_00000010 + 8);
      if (iVar5 == 0x44) {
        iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
        if (iVar3 == 0) {
          return;
        }
        if (0 < *(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0xcc)) {
LAB_10924f75:
          GrantActivityReward(0xca7);
          return;
        }
        cStack_1c = (**(code **)(**(int **)(iVar3 + 0x2abc) + 8))();
        if (cStack_1c == '\0') {
          uStack_20 = 0;
          uStack_28 = 0x43;
          uStack_24 = 2;
          FUN_104ef270(&uStack_28);
          return;
        }
      }
      else {
        if (iVar5 == 0xee) {
          cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
          if (cVar1 == '\0') {
            FUN_105eb980(&uStack_29);
            return;
          }
          GrantActivityReward(0x1bd9);
          return;
        }
        if (iVar5 == 0x7f) {
          iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
          if (iVar3 == 0) {
            return;
          }
          if (0 < *(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0xcc)) goto LAB_10924f75;
          cVar1 = (**(code **)(**(int **)(iVar3 + 0x2adc) + 8))();
          if (cVar1 == '\0') {
            GrantActivityReward(0x74f);
            return;
          }
        }
        else if (iVar5 == 0xf5) {
          cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
          if (cVar1 != '\0') {
            GrantActivityReward(0x9f4);
            return;
          }
        }
        else if (iVar5 == 0x10f) {
          cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
          if (cVar1 != '\0') {
            GrantActivityReward(0x1373);
            return;
          }
          piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90);
          if ((((piVar4 != (int *)0x0) &&
               (piVar4 = (int *)(**(code **)(*piVar4 + 0xb4))(), piVar4 != (int *)0x0)) &&
              (piVar4 = (int *)(**(code **)(*piVar4 + 0x18c))(), piVar4 != (int *)0x0)) &&
             (iVar3 = (**(code **)(*piVar4 + 0x790))(), iVar3 != 0)) {
            CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX,0);
            (**(code **)(*piVar4 + 0x790))();
            cVar1 = FUN_10fd2467();
            if (cVar1 != '\x01') {
              GrantActivityReward(0x1376);
              return;
            }
          }
        }
      }
    }
    else {
      iVar5 = -0x21524151;
    }
    local_18[2] = 0;
    local_c = 0;
    local_18[1] = 2;
    local_18[0] = iVar5;
    FUN_104ef270(local_18);
  }
  return;
}



/* ===== FUN_10944780 @ 10944780  size=793 ===== */
// strings:
//   "GetDataInit"
//   "SwapInventoryItem"
//   "SplitInventoryItem"
//   "TidyInventoryItem"
//   "RightClickItem"
//   "DiscardInventoryItem"
//   "InterSwapItem"
//   "TidyAllInventoryItem"
//   "MoveOutItem"
//   "EditTabName"

/* [RE-AUTO c0]
   strings:
     ""GetDataInit""
     ""SwapInventoryItem""
     ""SplitInventoryItem""
     ""TidyInventoryItem""
     ""RightClickItem""
     ""DiscardInventoryItem""
     ""InterSwapItem""
     ""TidyAllInventoryItem""
     ""MoveOutItem""
     ""EditTabName"" */

void __fastcall FUN_10944780(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  code ***pppcStack_b8;
  code *pcStack_b4;
  code **ppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11ddc04c;
  pppcStack_34 = (code ***)0x109447b4;
  FUN_100b62c0();
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109447c1;
  FUN_10945c70();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109447d7;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dd3f41;
  pppcStack_40 = (code ***)0x11dd3f30;
  pppcStack_44 = (code ***)0x109447f7;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10944dc0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x10944808;
  FUN_10945bb0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x1094481e;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd3f6a;
  pppcStack_50 = (code ***)0x11dd3f58;
  pppcStack_54 = (code ***)0x1094483e;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10944f40;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x1094484f;
  FUN_10945bb0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10944865;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dd3f7d;
  pppcStack_60 = (code ***)0x11dd3f6c;
  pppcStack_64 = (code ***)0x10944885;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109450b0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10944896;
  FUN_10945bb0();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109448ac;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11ddc08a;
  pppcStack_70 = (code ***)0x11ddc07c;
  pppcStack_74 = (code ***)0x109448cc;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10945160;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109448dd;
  FUN_10945bb0();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109448f3;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dd3fa8;
  pppcStack_80 = (code ***)0x11dd3f94;
  pppcStack_84 = (code ***)0x10944913;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_10945280;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10944924;
  FUN_10945bb0();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x1094493a;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11ddc099;
  pppcStack_90 = (code ***)0x11ddc08c;
  pppcStack_94 = (code ***)0x1094495a;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_10945350;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x1094496b;
  FUN_10945bb0();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x10944981;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11ddc06c;
  ppcStack_a0 = (code **)0x11ddc058;
  ppcStack_a4 = (code **)0x109449a1;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)FUN_10945060;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109449b2;
  FUN_10945bb0();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppcStack_b0 = (code **)0x109449c8;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)0x11ddc07b;
  ppcStack_b0 = (code **)0x11ddc070;
  pcStack_b4 = (code *)0x109449e8;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_10944be0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  ppcStack_bc = (code **)0x109449f9;
  FUN_10945bb0();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x10944a0f;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11ddc0c3;
  pcStack_c0 = "EditTabName";
  pcStack_c4 = (code *)0x10944a2f;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  pcStack_c4 = FUN_10944aa0;
  FUN_10945bb0(&ppcStack_bc);
  if ((ppcStack_b0 != &pcStack_c4) && (ppcStack_b0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_b0);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10945e20();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e78b0 @ 109e78b0  size=493 ===== */
// strings:
//   "C2AS_EnterWardrobeState"
//   "C2AS_LeaveWardrobeState"
//   "C2AS_GetFashionDataArray"
//   "C2AS_TryOn"
//   "C2AS_ChangePose"

/* [RE-AUTO c0]
   strings:
     ""C2AS_EnterWardrobeState""
     ""C2AS_LeaveWardrobeState""
     ""C2AS_GetFashionDataArray""
     ""C2AS_TryOn""
     ""C2AS_ChangePose"" */

void __fastcall FUN_109e78b0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  code *pcStack_74;
  char *pcStack_70;
  code **ppcStack_6c;
  code ***pppcStack_68;
  code *pcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  undefined4 ***pppuStack_58;
  code **ppcStack_54;
  code **ppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  undefined4 ***pppuStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  undefined4 ***pppuStack_24;
  undefined4 ***pppuStack_20;
  undefined4 ***pppuStack_14;
  undefined4 ***pppuStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&pppuStack_24;
  pcStack_2c = (char *)0x109e78cc;
  FUN_109e82c0();
  pppuStack_14 = &pppuStack_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de4d8c;
  pppcStack_34 = (code ***)0x109e78e9;
  pppuStack_10 = pppuStack_14;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&LAB_109e7cd0;
  ppcStack_38 = &pcStack_2c;
  pppuStack_3c = (undefined4 ***)0x109e78fa;
  FUN_109e87a0();
  if (((code ****)pppuStack_20 != &pppcStack_34) && ((code ****)pppuStack_20 != (code ****)0x0)) {
    pppuStack_3c = pppuStack_20;
    pppcStack_40 = (code ***)0x109e7910;
    FUN_10c3d5d0();
  }
  pppuStack_24 = &pppcStack_34;
  pppuStack_3c = (undefined4 ***)0x11de4dbb;
  pppcStack_40 = (code ***)0x11de4da4;
  pppcStack_44 = (code ***)0x109e7930;
  pppuStack_20 = pppuStack_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)&LAB_109e7d20;
  pppuStack_48 = &pppuStack_3c;
  pppcStack_4c = (code ***)0x109e7941;
  FUN_109e87a0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    ppcStack_50 = (code **)0x109e7957;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de4d7c;
  ppcStack_50 = (code **)0x11de4d64;
  ppcStack_54 = (code **)0x109e7977;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  ppcStack_54 = (code **)FUN_109e7dd0;
  pppuStack_58 = &pppcStack_4c;
  pppcStack_5c = (code ***)0x109e7988;
  FUN_109e87a0();
  if ((pppcStack_40 != &ppcStack_54) && (pppcStack_40 != (code ***)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109e799e;
    FUN_10c3d5d0();
  }
  pppcStack_44 = &ppcStack_54;
  pppcStack_5c = (code ***)0x11de4d8a;
  ppcStack_60 = (code **)0x11de4d80;
  pcStack_64 = (code *)0x109e79be;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pcStack_64 = FUN_109e80c0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  ppcStack_6c = (code **)0x109e79cf;
  FUN_109e87a0();
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (code **)0x0)) {
    ppcStack_6c = ppcStack_50;
    pcStack_70 = (char *)0x109e79e5;
    FUN_10c3d5d0();
  }
  ppcStack_54 = &pcStack_64;
  ppcStack_6c = (code **)0x11de4d53;
  pcStack_70 = "C2AS_ChangePose";
  pcStack_74 = (code *)0x109e7a05;
  ppcStack_50 = ppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109e8230;
  FUN_109e87a0(&ppcStack_6c);
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_60);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109e9c80();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_109e9cd0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e7dd0 @ 109e7dd0  size=739 ===== */
// calls: CWardrobeInfo::GetManager, CInfoManager::FindByName
// strings:
//   "SuitFashionDataArray"
//   "CWardrobeInfo"

/* [RE-AUTO c0]
   calls: CWardrobeInfo::GetManagers
   strings:
     ""SuitFashionDataArray""
     ""CWardrobeInfo"" */

void FUN_109e7dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined **ppuStack_64;
  int *piStack_60;
  undefined4 local_5c;
  int *piStack_58;
  int *piStack_54;
  uint uStack_50;
  int *piStack_4c;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  uint uStack_38;
  undefined4 auStack_34 [4];
  int *piStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_5 == 2) {
    uVar4 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar4 == 3) || (iVar8 = -0x21524151, uVar4 == 4)) {
      iVar8 = *(int *)(param_4 + 8);
    }
    uVar4 = *(uint *)(param_4 + 0x1c) & 0x8f;
    if ((uVar4 == 3) || (local_5c = 0xdeadbeaf, uVar4 == 4)) {
      local_5c = *(undefined4 *)(param_4 + 0x20);
    }
    if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
        (piVar10 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar10 != (int *)0x0)) &&
       (piStack_58 = (int *)(**(code **)(*piVar10 + 0xb4))(), piStack_58 != (int *)0x0)) {
      FUN_11a98a70(param_6);
      piVar10 = (int *)0x0;
      if (iVar8 == 4) {
        piVar10 = (int *)FUN_109e95f0(&piStack_60);
      }
      else if (iVar8 == 5) {
        piVar10 = (int *)FUN_109e95f0(&piStack_60);
      }
      piVar7 = (int *)*piVar10;
      if (piVar7 != (int *)piVar10[1]) {
        do {
          piVar1 = (int *)*piVar7;
          if ((char)piVar1[10] == '\0') {
            piStack_54 = (int *)0x0;
            uStack_50 = 0;
            piStack_60 = piVar7;
            piStack_58 = piVar1;
            FUN_109e8440(&piStack_54,piVar1,param_2,local_5c);
            (**(code **)(*(int *)*param_6 + 0x3c))(param_6[2],&ppuStack_64);
            piVar7 = piStack_60;
            if (piVar1[7] != piVar1[8]) {
              piStack_3c = (int *)0x0;
              uStack_38 = 0;
              FUN_11a98a70(&piStack_3c);
              (**(code **)(*piStack_58 + 0x14))
                        (uStack_50,"SuitFashionDataArray",auStack_40,((byte)piStack_54 & 0x8f) == 10
                        );
              piVar9 = (int *)piVar1[7];
              if (piVar9 != (int *)piVar1[8]) {
                do {
                  iVar8 = *piVar9;
                  ppuStack_64 = &PTR_FUN_11de4e18;
                  puVar5 = (undefined4 *)CWardrobeInfo__GetManager();
                  puVar6 = (undefined *)*puVar5;
                  if ((puVar6 == (undefined *)0x0) &&
                     (puVar6 = (undefined *)CInfoManager__FindByName(&ppuStack_64,"CWardrobeInfo",0)
                     , puVar6 == (undefined *)0x0)) {
                    if ((DAT_123c9118 & 1) == 0) {
                      DAT_123c9118 = DAT_123c9118 | 1;
                      FUN_109e9840();
                      FUN_11a8911f(&LAB_11c7d0c0);
                    }
                    puVar6 = &DAT_123c911c;
                  }
                  ppuStack_64 = &PTR_FUN_11da54a8;
                  if ((((iVar8 != -1) && ((iVar8 != 0 || (*(int *)(puVar6 + 0x30) == 0)))) &&
                      (iVar2 = *(int *)(puVar6 + 0x28), iVar2 != 0)) &&
                     ((iVar8 = iVar8 - *(int *)(puVar6 + 0x30), -1 < iVar8 &&
                      (iVar8 < *(int *)(puVar6 + 0x24))))) {
                    iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar8 / iVar2) * 4);
                    if ((iVar3 != 0) && (iVar8 = *(int *)(iVar3 + (iVar8 % iVar2) * 4), iVar8 != 0))
                    {
                      piStack_24 = (int *)0x0;
                      uStack_20 = 0;
                      FUN_109e8440(&piStack_24,iVar8,param_2,local_5c);
                      (**(code **)(*piStack_4c + 0x3c))(uStack_44,auStack_34);
                      if ((uStack_20 >> 6 & 1) != 0) {
                        (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
                      }
                    }
                  }
                  piVar9 = piVar9 + 1;
                  piVar7 = piStack_60;
                } while (piVar9 != (int *)piStack_58[8]);
              }
              if ((uStack_38 >> 6 & 1) != 0) {
                (**(code **)(*piStack_3c + 8))(&piStack_3c,auStack_34[0]);
              }
            }
            if ((uStack_50 >> 6 & 1) != 0) {
              (**(code **)(*piStack_54 + 8))(&piStack_54,piStack_4c);
            }
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 != (int *)piVar10[1]);
      }
    }
  }
  return;
}



/* ===== FUN_109e82c0 @ 109e82c0  size=365 ===== */
// calls: CWardrobeInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CWardrobeInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CWardrobeInfo::GetManagers
   strings:
     ""CWardrobeInfo"" */

void __fastcall FUN_109e82c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_109e9300(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar8 = 0;
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  do {
    local_c = &PTR_FUN_11de4e18;
    puVar3 = (undefined4 *)CWardrobeInfo__GetManager();
    puVar4 = (undefined *)*puVar3;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)CInfoManager__FindByName(&local_c,"CWardrobeInfo",0),
       puVar4 == (undefined *)0x0)) {
      if ((DAT_123c9118 & 1) == 0) {
        DAT_123c9120 = 0;
        DAT_123c9130 = 0;
        DAT_123c9134 = 0;
        _DAT_123c9138 = 0;
        DAT_123c913c = 0;
        DAT_123c9118 = DAT_123c9118 | 1;
        _DAT_123c911c = &PTR_FUN_11de4e40;
        DAT_123c9140 = _DAT_11de9ae0;
        DAT_123c9144 = _UNK_11de9ae4;
        uRam123c9148 = _UNK_11de9ae8;
        DAT_123c914c = _UNK_11de9aec;
        DAT_123c9150 = 1;
        DAT_123c9124 = puVar4;
        _DAT_123c9128 = puVar4;
        _DAT_123c912c = puVar4;
        FUN_11a8911f(&LAB_11c7d0c0);
      }
      puVar4 = &DAT_123c911c;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((iVar8 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar8)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(puVar4 + 0x14) + iVar8 * 4);
    }
    local_10 = iVar7;
    if (*(int *)(iVar7 + 0x1c) == *(int *)(iVar7 + 0x20)) {
      iVar5 = FUN_10254130(*(undefined4 *)(iVar7 + 0x14));
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 0x38);
        local_c = *(undefined ***)(iVar5 + 0x3c);
        goto LAB_109e83d4;
      }
    }
    else {
      iVar6 = 4;
      local_c = (undefined **)0x0;
LAB_109e83d4:
      if ((iVar6 == 4) || (iVar6 == 5)) {
        iVar6 = FUN_109e95f0(&local_c);
        piVar1 = *(int **)(iVar6 + 4);
        if (piVar1 == *(int **)(iVar6 + 8)) {
          FUN_109e9360(piVar1,&local_10,&local_5,1,1);
        }
        else {
          *piVar1 = iVar7;
          *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 4;
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar2 <= iVar8) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
  } while( true );
}



/* ===== FUN_109e8440 @ 109e8440  size=543 ===== */
// calls: CPet::SetName
// strings:
//   "mh.view.Wardrobe.Data.FashionData"
//   "ItemId"
//   "MartId"
//   "HasItem"
//   "SecondType"
//   "ThirdType"
//   "ItemIcon"
//   "MaleIcon"
//   "FemaleIcon"
//   "Score"

/* [RE-AUTO c0]
   strings:
     ""mh.view.Wardrobe.Data.FashionData""
     ""ItemId""
     ""MartId""
     ""HasItem""
     ""SecondType""
     ""ThirdType""
     ""ItemIcon""
     ""MaleIcon""
     ""FemaleIcon""
     ""Score"" */

void FUN_109e8440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined2 auStack_48 [16];
  undefined4 **ppuStack_28;
  undefined4 **ppuStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_6c;
  iVar3 = 0;
  local_64 = param_2;
  FUN_11a98de0(param_1,"mh.view.Wardrobe.Data.FashionData",0,0);
  uStack_68 = *(undefined4 *)(unaff_ESI + 0x14);
  local_64 = *(undefined4 *)(unaff_ESI + 0x18);
  iVar1 = FUN_113fa380(uStack_68);
  iVar4 = 0;
  puStack_50 = (undefined4 *)auStack_60;
  auStack_60[0] = 0;
  local_64 = CONCAT31(local_64._1_3_,iVar1 != 0);
  uVar5 = 0;
  puStack_4c = puStack_50;
  iVar1 = FUN_10254130(uStack_6c);
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x3c);
    puVar2 = &DAT_11d9d32b;
    if (*(undefined1 **)(iVar1 + 0x14) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(iVar1 + 0x14);
    }
    CPet__SetName(puVar2);
    if ((undefined1 *)(iVar1 + 0xa0) != auStack_60) {
      FUN_100d83d0(*(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0xb0));
    }
  }
  FUN_104d1550("ItemId",uStack_6c);
  FUN_104d1550("MartId",uStack_68);
  FUN_104d15e0("HasItem",local_64);
  ppuStack_28 = (undefined4 **)auStack_48;
  auStack_48[0] = 0;
  ppuStack_24 = ppuStack_28;
  FUN_100e5b60(auStack_48);
  FUN_104d1700(&DAT_11da7300,ppuStack_28);
  if ((ppuStack_28 != &puStack_4c) && (ppuStack_28 != (undefined4 **)0x0)) {
    FUN_10c3d5d0(ppuStack_28);
  }
  FUN_104d1550("SecondType",uVar5);
  FUN_104d1550("ThirdType",unaff_EDI);
  FUN_104d1670("ItemIcon",puStack_50);
  FUN_104d1670("MaleIcon",*(undefined4 *)(iVar4 + 0x40));
  FUN_104d1670("FemaleIcon",*(undefined4 *)(iVar4 + 0x58));
  FUN_104d1550(&DAT_11de4e20,*(undefined4 *)(iVar4 + 0x5c));
  FUN_104d1550("Score",*(undefined4 *)(iVar4 + 0x60));
  if ((puStack_50 != &local_64) && (puStack_50 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puStack_50);
  }
  if (iVar3 != 0) {
    FUN_10c3da30(iVar3);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e8670 @ 109e8670  size=109 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE_WARDROBE"" */

void FUN_109e8670(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))();
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x18c))();
      if (piVar1 != (int *)0x0) {
        *(undefined1 *)((int)piVar1 + 0x2405) = 1;
        iVar2 = (**(code **)(*piVar1 + 0x790))();
        if (iVar2 != 0) {
          CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX,0,1,0,0);
          FUN_10fd7800();
        }
      }
    }
  }
  return;
}



/* ===== FUN_109e9300 @ 109e9300  size=88 ===== */
// calls: CWardrobeInfo::GetManager, CInfoManager::FindByName
// strings:
//   "CWardrobeInfo"

/* [RE-AUTO c0]
   calls: CWardrobeInfo::GetManagers
   strings:
     ""CWardrobeInfo"" */

undefined * FUN_109e9300(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de4e18;
  puVar1 = (undefined4 *)CWardrobeInfo__GetManager();
  puVar2 = (undefined *)*puVar1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)CInfoManager__FindByName(&local_8,"CWardrobeInfo",0);
    if (puVar2 == (undefined *)0x0) {
      if ((DAT_123c9118 & 1) == 0) {
        DAT_123c9118 = DAT_123c9118 | 1;
        FUN_109e9840();
        FUN_11a8911f(&LAB_11c7d0c0);
      }
      puVar2 = &DAT_123c911c;
    }
  }
  return puVar2;
}



/* ===== FUN_10a4fc50 @ 10a4fc50  size=1765 ===== */
// strings:
//   "Inventory"
//   "Interactor"
//   "AnimatedCharacter"

/* [RE-AUTO c0]
   strings:
     ""Inventory""
     ""Interactor""
     ""AnimatedCharacter"" */

void __fastcall FUN_10a4fc50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  param_1[6] = &PTR_LAB_11cbd434;
  param_1[5] = &PTR_LAB_11cbd428;
  *param_1 = &PTR_FUN_11cbccf4;
  param_1[7] = &PTR_LAB_11cbd440;
  param_1[8] = &PTR_LAB_11cbd448;
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x288))();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 400))(0);
  }
  if ((undefined4 *)param_1[0x556] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x556])(1);
    param_1[0x556] = 0;
  }
  if (param_1[0xf] == 0) {
    uVar5 = (**(code **)(*(int *)param_1[1] + 0xec))("Inventory",2);
    param_1[0xf] = uVar5;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
      (**(code **)(*(int *)param_1[0xf] + 0x80))();
    }
    (**(code **)(*(int *)param_1[1] + 0xec))("Inventory",3);
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("Inventory",3);
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("Interactor",3);
    param_1[0x10] = 0;
  }
  *(undefined4 *)(param_1[1] + 8) = 0;
  if ((int *)param_1[0x4d7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d7] + 0x58))();
    param_1[0x4d7] = 0;
  }
  (**(code **)(*(int *)param_1[1] + 0x74))(0,0x200);
  if (param_1[0x4d6] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("AnimatedCharacter",3);
    (**(code **)(*(int *)param_1[1] + 0xec))("AnimatedCharacter",1);
  }
  (**(code **)(*(int *)param_1[1] + 0x9c))(param_1 + 5);
  (**(code **)(*(int *)param_1[1] + 0xac))(param_1 + 6);
  if (param_1[0x4f4] != 0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x40))(param_1[0x4f4],0);
  }
  if ((DAT_120286c8 != (int *)0x0) && (iVar6 = (**(code **)(*DAT_120286c8 + 0x3c))(), iVar6 != 0)) {
    piVar4 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    iVar6 = (**(code **)(*piVar4 + 0x68))();
    if (iVar6 != 0) {
      piVar4 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
      (**(code **)(*piVar4 + 0x40))(param_1[2]);
    }
  }
  iVar6 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))();
  if (iVar6 != 0) {
    FUN_10475310(param_1[2]);
  }
  if ((undefined4 *)param_1[0x4e7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4e7])(1);
    param_1[0x4e7] = 0;
  }
  if ((undefined4 *)param_1[0x4d8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4d8])(1);
    param_1[0x4d8] = 0;
  }
  iVar6 = param_1[0x4e8];
  if (iVar6 != 0) {
    FUN_11109760();
    FUN_10c3d5d0(iVar6);
    param_1[0x4e8] = 0;
  }
  iVar6 = param_1[0x4e9];
  if (iVar6 != 0) {
    FUN_10e06ae0();
    FUN_10c3d5d0(iVar6);
    param_1[0x4e9] = 0;
  }
  if ((undefined4 *)param_1[0x4d1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4d1])(1);
    param_1[0x4d1] = 0;
  }
  if ((undefined4 *)param_1[0x4d2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4d2])(1);
    param_1[0x4d2] = 0;
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
    param_1[0x30] = 0;
  }
  iVar6 = param_1[0x2f];
  if (iVar6 != 0) {
    FUN_11077940();
    FUN_10c3d5d0(iVar6);
    param_1[0x2f] = 0;
  }
  iVar6 = (**(code **)(param_1[0x5d] + 0x14))();
  if (iVar6 != 0) {
    iVar6 = **(int **)(DAT_1202e818 + 0x38);
    uVar5 = (**(code **)(param_1[0x5d] + 0x14))();
    piVar4 = (int *)(**(code **)(iVar6 + 0x5c))(uVar5);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x18))();
      (**(code **)(*piVar4 + 0x14))(param_1 + 7);
      (**(code **)(*piVar4 + 0x24))(1);
      (**(code **)(*piVar4 + 0x1c))();
    }
  }
  FUN_10a641a0();
  FUN_10a60900();
  (**(code **)(param_1[0x5d] + 0x18))(0);
  FUN_10df2a00();
  puVar1 = param_1 + 0x530;
  puVar3 = (undefined4 *)param_1[0x530];
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_10c3d5d0(puVar3);
    puVar3 = puVar2;
  }
  *puVar1 = puVar1;
  param_1[0x531] = puVar1;
  FUN_10ef2860();
  if (param_1[0x513] != 0) {
    FUN_10a7dfb0(param_1[0x510]);
    param_1[0x511] = param_1 + 0x50f;
    param_1[0x510] = 0;
    param_1[0x512] = param_1 + 0x50f;
    param_1[0x513] = 0;
  }
  if (param_1[0x50d] != 0) {
    FUN_10a7def0(param_1[0x50a]);
    param_1[0x50b] = param_1 + 0x509;
    param_1[0x50a] = 0;
    param_1[0x50c] = param_1 + 0x509;
    param_1[0x50d] = 0;
  }
  if (param_1[0x507] != 0) {
    FUN_10a7df30(param_1[0x504]);
    param_1[0x505] = param_1 + 0x503;
    param_1[0x504] = 0;
    param_1[0x506] = param_1 + 0x503;
    param_1[0x507] = 0;
  }
  if ((int *)param_1[0x4fa] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4fa] + 8))();
  }
  iVar6 = param_1[0x4f9];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  iVar6 = param_1[0x4f8];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  iVar6 = param_1[0x4f7];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  iVar6 = param_1[0x4f6];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  iVar6 = param_1[0x4f3];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  if (param_1[0x4e3] != 0) {
    FUN_10c3d5d0(param_1[0x4e3]);
  }
  if (param_1[0x4d3] != 0) {
    FUN_10c3d5d0(param_1[0x4d3]);
  }
  if ((int *)param_1[0x4d0] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d0] + 0xc))();
  }
  iVar6 = param_1[0x62];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  param_1[0x5d] = &PTR_FUN_11cbc654;
  if (param_1[0x5a] != 0) {
    FUN_10c3d5d0(param_1[0x5a]);
  }
  iVar6 = param_1[0x59];
  piVar4 = (int *)(iVar6 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar4);
  }
  if (param_1[0x56] != 0) {
    FUN_10c3d5d0(param_1[0x56]);
  }
  if (param_1[0x53] != 0) {
    FUN_10a7e090(param_1[0x50]);
    param_1[0x51] = param_1 + 0x4f;
    param_1[0x50] = 0;
    param_1[0x52] = param_1 + 0x4f;
    param_1[0x53] = 0;
  }
  if (param_1[0x4d] != 0) {
    FUN_10a7e090(param_1[0x4a]);
    param_1[0x4b] = param_1 + 0x49;
    param_1[0x4a] = 0;
    param_1[0x4c] = param_1 + 0x49;
    param_1[0x4d] = 0;
  }
  FUN_10a800a0();
  if (param_1[0x45] != 0) {
    FUN_10a7e020(param_1[0x42]);
    param_1[0x43] = param_1 + 0x41;
    param_1[0x42] = 0;
    param_1[0x44] = param_1 + 0x41;
    param_1[0x45] = 0;
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 0xc))();
  }
  if (param_1[0x17] != 0) {
    FUN_10c3d5d0(param_1[0x17]);
  }
  puVar1 = param_1 + 9;
  param_1[8] = &PTR_FUN_11cbc88c;
  if (param_1[0xd] != 0) {
    FUN_10a7df70(param_1[10]);
    param_1[0xb] = puVar1;
    param_1[10] = 0;
    param_1[0xc] = puVar1;
    param_1[0xd] = 0;
    if (param_1[0xd] != 0) {
      FUN_10a7df70(param_1[10]);
      param_1[0xb] = puVar1;
      param_1[10] = 0;
      param_1[0xc] = puVar1;
      param_1[0xd] = 0;
    }
  }
  param_1[7] = &PTR_FUN_11cbc134;
  param_1[6] = &PTR_FUN_11cbc18c;
  param_1[5] = &PTR_FUN_11cbc180;
  *param_1 = &PTR_FUN_11cbc198;
  return;
}



/* ===== FUN_10a50d10 @ 10a50d10  size=35 ===== */
// strings:
//   "Inventory"

/* [RE-AUTO c0]
   strings:
     ""Inventory"" */

undefined4 __fastcall FUN_10a50d10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xec))("Inventory",2);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ===== FUN_10a50ee0 @ 10a50ee0  size=399 ===== */
// calls: CacheAnimEventNameIds
// strings:
//   "AnimatedCharacter"
//   "Inventory"

/* [RE-AUTO c0]
   strings:
     ""AnimatedCharacter""
     ""Inventory"" */

uint __thiscall FUN_10a50ee0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  param_1[1] = (int)param_2;
  param_1[3] = param_2[3];
  param_1[2] = param_2[1];
  FUN_10b3ddd0(param_2);
  uVar1 = (**(code **)(*(int *)param_1[1] + 0x98))(param_1 + 5);
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(*(int *)param_1[1] + 0xa8))(param_1 + 6);
    if ((char)uVar1 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x704))();
      param_1[0x4d7] = iVar2;
      *(int *)(param_1[1] + 8) = iVar2;
      piVar3 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
      (**(code **)(*piVar3 + 0x3c))(param_1[2],param_1);
      (**(code **)(*DAT_120286c8 + 0x138))(param_1);
      FUN_1102d960();
      iVar2 = (**(code **)(*(int *)param_1[1] + 0xec))("AnimatedCharacter",2);
      param_1[0x4d6] = iVar2;
      if (iVar2 != 0) {
        (**(code **)(*(int *)param_1[1] + 0x74))(1,0x200);
      }
      (**(code **)(*param_2 + 0xec))("Inventory",2);
      if (DAT_1201ff04 == (int *)0x0) {
        DAT_1201ff04 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
        piVar3 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
        DAT_1201ff08 = (**(code **)(*piVar3 + 0x7c))();
        DAT_1201ff00 = (**(code **)(*DAT_1201ff04 + 0x6c))();
      }
      (**(code **)(*(int *)param_1[1] + 0x5c))(1);
      uVar1 = (**(code **)(*(int *)param_1[1] + 0xc))(0);
      if ((char)uVar1 != '\0') {
        iVar2 = *(int *)param_1[3];
        uVar1 = (**(code **)(iVar2 + 0x1c))();
        (**(code **)(iVar2 + 0x18))(uVar1 | 0x104400);
        CacheAnimEventNameIds();
        piVar3 = *(int **)(DAT_1202e818 + 0x30);
        if ((int *)param_1[0x36] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x36] + 0xc))();
        }
        piVar3 = (int *)(**(code **)(*piVar3 + 0x30))(0);
        param_1[0x36] = (int)piVar3;
        (**(code **)(*piVar3 + 8))();
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x14);
      }
    }
  }
  return uVar1 & 0xffffff00;
}



/* ===== FUN_10a51440 @ 10a51440  size=148 ===== */
// strings:
//   "Inventory"

/* [RE-AUTO c0]
   strings:
     ""Inventory"" */

void __thiscall FUN_10a51440(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_2[2] = param_1[0x4d7];
  (**(code **)(*(int *)param_1[0x4d7] + 0x18))();
  (**(code **)(*DAT_120286c8 + 0x138))(param_1);
  FUN_1102d960();
  (**(code **)(*param_2 + 0xec))("Inventory",2);
  if ((int *)param_1[0x4d6] != (int *)0x0) {
    iVar1 = *param_1;
    uVar2 = (**(code **)(*(int *)param_1[0x4d6] + 0x6c))();
    (**(code **)(iVar1 + 0x5d4))(uVar2);
  }
  (**(code **)(*(int *)param_1[1] + 0x5c))((*(char *)(DAT_1202e818 + 0x16d) == '\0') + '\x01');
  iVar1 = *(int *)param_1[3];
  uVar3 = (**(code **)(iVar1 + 0x1c))();
  (**(code **)(iVar1 + 0x18))(uVar3 | 0x104400);
  return;
}



/* ===== FUN_10a53640 @ 10a53640  size=1674 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "Inventory"
//   "Interactor"
//   "hitpartParams.hitpartdata"
//   "hitpartParams.partbinddata"
//   "HitpartInfo"
//   ".HitPartSetting.HitPartInfo"
//   "PropertyCustom"
//   ".HitPartSetting"
//   "HitPartData"
//   "gameParams"
//   "OnRevive"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   src: hitpartParams.h, HitPartSetting.H
   strings:
     ""Inventory""
     ""Interactor""
     ""hitpartParams.hitpartdata""
     ""hitpartParams.partbinddata""
     ""HitpartInfo""
     "".HitPartSetting.HitPartInfo""
     ""PropertyCustom""
     "".HitPartSetting""
     ""HitPartData""
     ""gameParams"" */

void __thiscall FUN_10a53640(int *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_5c [16];
  undefined1 local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  piVar4 = (int *)(**(code **)(*param_1 + 0x25c))();
  if ((piVar4 != (int *)0x0) &&
     (piVar4 = (int *)(**(code **)(*piVar4 + 0xe8))(param_1[2]), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x44))(1,0,0,0,0);
  }
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0x3f800000;
  param_1[0x4df] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0x3f800000;
  if (param_1[0xf] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("Inventory",3);
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(int *)param_1[1] + 0xec))("Interactor",3);
    param_1[0x10] = 0;
  }
  if ((param_2 != '\0') && (piVar4 = (int *)FUN_10ba9b00(), piVar4 != (int *)0x0)) {
    piVar8 = (int *)param_1[3];
    iVar7 = *piVar4;
    uVar5 = (**(code **)(*piVar8 + 0xd0))(local_5c,param_1[0x517]);
    uVar5 = (**(code **)(*piVar8 + 200))(local_4c,uVar5);
    (**(code **)(iVar7 + 0x150))(param_1,uVar5);
  }
  uVar2 = _UNK_11de9ca8;
  uVar1 = _DAT_11de9ca0;
  *(undefined8 *)((int)param_1 + 0x8a) = _DAT_11de9ca0;
  *(undefined8 *)((int)param_1 + 0x92) = uVar2;
  *(undefined8 *)((int)param_1 + 0x9a) = uVar1;
  *(undefined4 *)((int)param_1 + 0xa2) = 0xffffffff;
  if ((int *)param_1[0x4d6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d6] + 0x7c))();
  }
  (**(code **)(*param_1 + 0x70c))(0);
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
  if ((piVar4 == (int *)0x0) || (local_28 = (**(code **)(*piVar4 + 0x38))(), local_28 == 0))
  goto LAB_10a53a0a;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_10a68ea0("hitpartParams.hitpartdata",&local_8);
  FUN_10a68ea0("hitpartParams.partbinddata",&local_c);
  (**(code **)(*param_1 + 0x4f8))(1,&local_8,&local_c);
  local_14 = 0;
  cVar3 = FUN_10a68a90("HitpartInfo",&local_14);
  if (cVar3 == '\0') {
    local_10 = 3;
    uVar5 = CInfoRecord__GetModelString("PropertyCustom",".HitPartSetting.HitPartInfo");
    puVar6 = (undefined4 *)FUN_10a4b980(&local_20,uVar5);
    cVar3 = FUN_10a68e20(*puVar6,&local_14);
    bVar9 = false;
    if (cVar3 != '\0') goto LAB_10a5387e;
  }
  else {
LAB_10a5387e:
    bVar9 = true;
  }
  if ((local_10 & 2) != 0) {
    local_10 = local_10 & 0xfffffffd;
    piVar4 = (int *)(local_20 + -0xc);
    if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_20 + -4));
      FUN_10c3d900(piVar4);
    }
  }
  if ((((local_10 & 1) != 0) && (piVar4 = (int *)(local_24 + -0xc), -1 < *piVar4)) &&
     (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
    FUN_10c3d900(piVar4);
  }
  if (bVar9) {
    FUN_10a60490(local_14,0);
  }
  local_1c = (int *)0x0;
  uVar5 = CInfoRecord__GetModelString("PropertyCustom",".HitPartSetting");
  puVar6 = (undefined4 *)FUN_10a4b980(&local_2c,uVar5);
  cVar3 = FUN_10a68ea0(*puVar6,&local_1c);
  piVar4 = (int *)(local_2c + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_2c + -4));
    FUN_10c3d900(piVar4);
  }
  piVar4 = (int *)(local_30 + -0xc);
  if ((-1 < *piVar4) && (iVar7 = FUN_10c3dad0(piVar4), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_30 + -4));
    FUN_10c3d900(piVar4);
  }
  piVar4 = local_1c;
  if (cVar3 != '\0') {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0xc))();
    }
    local_8 = (int *)0x0;
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 0xc))();
    }
    local_c = (int *)0x0;
    FUN_10a68ce0("HitPartData",&local_8);
    (**(code **)(*param_1 + 0x4f8))(0,&local_8,&local_c);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0xc))();
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0xc))();
  }
LAB_10a53a0a:
  param_1[0x6b] = -1;
  param_1[0x6c] = -1;
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
  if ((piVar4 != (int *)0x0) && (iVar7 = (**(code **)(*piVar4 + 0x38))(), iVar7 != 0)) {
    local_18 = (int *)0x0;
    cVar3 = FUN_10a68ce0("gameParams",&local_18);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x4f0))(&local_18,1);
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0xc))();
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x1c4))();
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x5f0))();
  }
  (**(code **)(*param_1 + 0x6c))(0xffffffff);
  if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
    (**(code **)(*(int *)param_1[1] + 0x50))(8,1,0);
  }
  (**(code **)(*param_1 + 0x500))(0);
  iVar7 = (**(code **)(*(int *)param_1[3] + 0x16c))();
  if (iVar7 != 0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x1c))(param_1[3],&local_40,1);
  }
  if ((int *)param_1[0x4d7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d7] + 0x18))();
  }
  param_1[0x4cf] = 0x3f800000;
  if ((int *)param_1[0x4d8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d8] + 0x20))();
  }
  param_1[0x515] = 0;
  *(undefined2 *)(param_1 + 0x4ee) = 0;
  param_1[0x4ed] = 0;
  *(undefined1 *)((int)param_1 + 0x13ba) = 1;
  if ((int *)param_1[0x4fa] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4fa] + 8))();
  }
  param_1[0x4fa] = 0;
  param_1[0x4e6] = 0;
  *(undefined1 *)(param_1 + 0x519) = 0;
  if ((int *)param_1[0x4e7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4e7] + 0x1c))(1);
  }
  bVar9 = true;
  cVar3 = (**(code **)(*param_1 + 0x1c4))();
  if (cVar3 != '\0') {
    bVar9 = *(char *)((int)param_1 + 0x2405) == '\0';
  }
  cVar3 = (**(code **)(*param_1 + 0x1d0))();
  if ((cVar3 != '\0') && (bVar9)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x2d0))(0);
  }
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
  if (piVar4 != (int *)0x0) {
    iVar7 = *piVar4;
    fVar10 = (float10)(**(code **)(*param_1 + 0x78))();
    (**(code **)(iVar7 + 0x10c))(0.0 < (float)fVar10);
  }
  if (param_1[0x2f] != 0) {
    FUN_110783d0();
  }
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
  if ((piVar4 != (int *)0x0) &&
     (piVar4 = (int *)(**(code **)(*piVar4 + 0x38))(), piVar4 != (int *)0x0)) {
    local_34 = piVar4;
    piVar8 = (int *)(**(code **)(*piVar4 + 4))();
    iVar7 = (**(code **)(*piVar8 + 0x34))(piVar4,"OnRevive");
    if (iVar7 != 0) {
      FUN_10a69650(piVar8,&local_34);
      (**(code **)(*piVar8 + 0x44))();
    }
  }
  if (param_1[0x4e9] != 0) {
    FUN_10a5cbc0();
  }
  FUN_10a642e0();
  piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar4 + 0x50))();
    (**(code **)(*piVar4 + 0x164))();
  }
  if (((int *)param_1[3] != (int *)0x0) &&
     (piVar4 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x1f8))();
  }
  return;
}



/* ===== FUN_10a64f90 @ 10a64f90  size=67 ===== */
// strings:
//   "Inventory"
//   "Interactor"

/* [RE-AUTO c0]
   strings:
     ""Inventory""
     ""Interactor"" */

void __fastcall FUN_10a64f90(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xec))("Inventory",3);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xec))("Interactor",3);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* ===== FUN_10b25320 @ 10b25320  size=340 ===== */
// strings:
//   "ItemID"
//   "ItemUsed"

/* [RE-AUTO c0]
   strings:
     ""ItemID""
     ""ItemUsed"" */

undefined4 __thiscall FUN_10b25320(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_c = FUN_100b4ca0(*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x1c) = local_c;
    if (local_c != 0) {
      local_c = local_c + 0x60;
      uVar1 = FUN_113168d0("ItemID",&local_8);
      FUN_1046dc90(uVar1);
      if ((*param_2 == 0x3ff) && (local_8 != -1)) {
        piVar2 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))
                                  (param_2[4]);
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 0xa8))();
          if (iVar3 != 2) {
            piVar2 = (int *)0x0;
          }
        }
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
        if ((piVar2 != (int *)0x0) && (piVar4 != (int *)0x0)) {
          iVar3 = (**(code **)(*piVar4 + 0x88))();
          iVar5 = (**(code **)(*piVar2 + 0x88))();
          if (iVar5 == iVar3) {
            iVar3 = FUN_113f2660();
            param_2 = *(int **)(iVar3 + 0x10);
            FUN_1025bd00(local_8,&param_2);
            FUN_113168d0("ItemUsed");
            FUN_1025bc60(*(undefined4 *)(param_1 + 0x144),local_10);
            piVar2 = (int *)FUN_10262a50();
            if (piVar2 != (int *)0x0) {
              FUN_104b57b0(0);
              (**(code **)(*piVar2 + 4))(1);
              FUN_104b5770();
            }
            return 0;
          }
        }
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_10b63bb0 @ 10b63bb0  size=501 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "OnResumeGame"
//   "OnReturnChooseRole"
//   "OnReturnTown"
//   "OnReturnTown_OK"
//   "OnReturnTown_Cancel"
//   "OnShowSystemSettingDlg"
//   "GPItemClickOpenInventory"
//   "GPItemClickOpenManufacture"
//   "OnExitGame"
//   "RequireExitGame"
//   "OnShowKeySettingDlg"
//   "OnShowWorldMap"
//   "OnResetPosclick"
//   "CheckIdelOrFallingState"

/* [RE-AUTO c0]
   strings:
     ""OnResumeGame""
     ""OnReturnChooseRole""
     ""OnReturnTown""
     ""OnReturnTown_OK""
     ""OnReturnTown_Cancel""
     ""OnShowSystemSettingDlg""
     ""GPItemClickOpenInventory""
     ""GPItemClickOpenManufacture""
     ""OnExitGame""
     ""RequireExitGame"" */

undefined4 * __fastcall FUN_10b63bb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
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
  
  *param_1 = &PTR_FUN_11cc7ee4;
  uVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = uVar2;
  DAT_11df77d4 = 0;
  DAT_11df77d5 = 0;
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnResumeGame",extraout_ECX,FUN_10b630f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnReturnChooseRole",extraout_ECX_00,FUN_10b63180);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnReturnTown",extraout_ECX_01,FUN_10b63250);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnReturnTown_OK",extraout_ECX_02,FUN_10b63290);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnReturnTown_Cancel",extraout_ECX_03,&DAT_10b633a0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnShowSystemSettingDlg",extraout_ECX_04,FUN_10b634d0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("GPItemClickOpenInventory",extraout_ECX_05,FUN_10b633b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("GPItemClickOpenManufacture",extraout_ECX_06,FUN_10b63440);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnExitGame",extraout_ECX_07,FUN_10b63640);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("RequireExitGame",extraout_ECX_08,FUN_10b636b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnShowKeySettingDlg",extraout_ECX_09,FUN_10b63560);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnShowWorldMap",extraout_ECX_10,FUN_10b635f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("OnResetPosclick",extraout_ECX_11,FUN_10b63850);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("CheckIdelOrFallingState",extraout_ECX_12,FUN_10b639a0);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10b660a0 @ 10b660a0  size=324 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "SystemBar_PlayerPropertyUI"
//   "SystemBar_ShowQuestUI"
//   "SystemBar_ShowInventoryUI"
//   "SystemBar_ShowSysConfigUI"
//   "SystemBar_ShowT"
//   "SystemBar_ShowO"
//   "SystemBar_ShowK"
//   "SystemBar_ShowH"
//   "SystemBar_ShowM"

/* [RE-AUTO c0]
   strings:
     ""SystemBar_PlayerPropertyUI""
     ""SystemBar_ShowQuestUI""
     ""SystemBar_ShowInventoryUI""
     ""SystemBar_ShowSysConfigUI""
     ""SystemBar_ShowT""
     ""SystemBar_ShowO""
     ""SystemBar_ShowK""
     ""SystemBar_ShowH""
     ""SystemBar_ShowM"" */

undefined4 * __fastcall FUN_10b660a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  
  *param_1 = &PTR_FUN_11cc8130;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString("SystemBar_PlayerPropertyUI",extraout_ECX,FUN_10b66230);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowQuestUI",extraout_ECX_00,FUN_10b66270);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowInventoryUI",extraout_ECX_01,FUN_10b662b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowSysConfigUI",extraout_ECX_02,FUN_10b66430);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowT",extraout_ECX_03,FUN_10b66370);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowO",extraout_ECX_04,FUN_10b663b0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowK",extraout_ECX_05,FUN_10b663f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowH",extraout_ECX_06,FUN_10b662f0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SystemBar_ShowM",extraout_ECX_07,FUN_10b66330);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10bf76e0 @ 10bf76e0  size=307 ===== */
// strings:
//   "NORMAL_IDLE"
//   "NORMAL_RUN"
//   "NORMAL_IDLE_WARDROBE"

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE""
     ""NORMAL_RUN""
     ""NORMAL_IDLE_WARDROBE"" */

undefined4 __fastcall FUN_10bf76e0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  
  if ((*(int **)(param_1 + 0x50) == (int *)0x0) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x50) + 0x790))(), iVar3 == 0)) {
    return 0;
  }
  iVar3 = FUN_10fd05d0();
  if ((iVar3 == 0) ||
     ((cVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x7bc))(), cVar2 == '\0' ||
      (cVar2 = FUN_10f5b910(), cVar2 == '\0')))) {
    return 0;
  }
  pcVar6 = "NORMAL_IDLE";
  pbVar4 = (byte *)FUN_10f57110();
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10bf7770:
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_10bf7775;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10bf7770;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10bf7775:
  if (uVar5 != 0) {
    pcVar6 = "NORMAL_RUN";
    pbVar4 = (byte *)FUN_10f57110();
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_10bf77b0:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_10bf77b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_10bf77b0;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10bf77b5:
    if (uVar5 != 0) {
      pcVar6 = "NORMAL_IDLE_WARDROBE";
      pbVar4 = (byte *)FUN_10f57110();
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_10bf77f0:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_10bf77f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_10bf77f0;
        pbVar4 = pbVar4 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10bf77f5:
      if (uVar5 != 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ===== FUN_10c4c3c0 @ 10c4c3c0  size=3568 ===== */
// calls: strncpy, _stricmp
// strings:
//   " Recording game state"
//   "(no entity)"
//   " Game state - Actor: %s --------------------------------------------------"
//   "demo_force_game_state"
//   " Override mode = (all)"
//   " Override mode = (health, suit energy)"
//   "Current"
//   "Recorded"
//   " Health:"
//   " Inventory ---------------------------------------------------------------------------------------"
//   " %2d)"
//   "null)"
//   "     %s"
//   "Missing"
//   "binoculars"
//   "Am%d:%d"
//   "FMode:%d"
//   " Accessories"
//   " Ammo Packs"
//   "  %s:"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: strncpy, _stricmp
   strings:
     "" Recording game state""
     ""(no entity)""
     "" Game state - Actor: %s --------------------------------------------------""
     ""demo_force_game_state""
     "" Override mode = (all)""
     "" Override mode = (health, suit energy)""
     ""Current""
     ""Recorded""
     "" Health:""
     "" Inventory
   ---------------------------------------------------------------------------------------"" */

float10 __thiscall FUN_10c4c3c0(int param_1,float param_2,float param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  int *piVar6;
  undefined1 *puVar7;
  char cVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  int *piVar19;
  float fVar20;
  char *pcVar21;
  size_t sVar22;
  uint uVar23;
  float10 fVar24;
  undefined1 local_8c [8];
  char local_84 [32];
  int *local_64;
  float local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  char local_15;
  float local_14;
  int *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  uVar3 = *(undefined4 *)(DAT_1202e818 + 0x10);
  local_3c = param_1;
  if (param_3._0_1_ != '\0') {
    local_58 = _DAT_11cd9fc0;
    uStack_54 = _UNK_11cd9fc4;
    uStack_50 = _UNK_11cd9fc8;
    uStack_4c = _UNK_11cd9fcc;
    FUN_10b6ffa0(uVar3,0x3f800000,param_2 + DAT_11de9890,0x3fa66666,&local_58,0,
                 " Recording game state");
    return (float10)15.0;
  }
  local_34 = _DAT_11cbbbe0;
  uStack_30 = _UNK_11cbbbe4;
  uStack_2c = _UNK_11cbbbe8;
  uStack_28 = _UNK_11cbbbec;
  local_58 = _DAT_11cd9fd0;
  uStack_54 = _UNK_11cd9fd4;
  uStack_50 = _UNK_11cd9fd8;
  uStack_4c = _UNK_11cd9fdc;
  pcVar9 = (char *)(**(code **)(**(int **)(param_1 + 0x50) + 0x10))();
  piVar10 = (int *)FUN_10c4e820(pcVar9);
  if (piVar10 == (int *)0x0) {
    pcVar21 = "(no name)";
    if (pcVar9 != (char *)0x0) {
      pcVar21 = pcVar9;
    }
    FUN_10b6ffa0(uVar3,0x3f800000,param_2 + DAT_11de9890,0x3fa66666,&local_34,0,
                 "<<Actor %s not in the map>>",pcVar21);
    local_c = &DAT_41700000;
  }
  else {
    if ((int *)piVar10[3] == (int *)0x0) {
      pcVar9 = "(no entity)";
    }
    else {
      pcVar9 = (char *)(**(code **)(*(int *)piVar10[3] + 0x48))();
    }
    FUN_10b6ffa0(uVar3,0x3f800000,param_2 + DAT_11de9890,0x3fa66666,&local_34,0,
                 " Game state - Actor: %s --------------------------------------------------",pcVar9
                );
    local_8 = (undefined1 *)DAT_11cd7e88;
    iVar12 = *(int *)(local_3c + 0x44);
    if (((iVar12 == local_3c + 0x18) || ((int *)piVar10[3] == (int *)0x0)) ||
       (iVar11 = (**(code **)(*(int *)piVar10[3] + 4))(), *(int *)(iVar12 + 0x10) != iVar11)) {
      FUN_10b6ffa0(uVar3,0x3f800000,param_2 + DAT_11cd7e88,0x3fa66666,&local_34,0,"<<Not Recorded>>"
                  );
      return (float10)30.0;
    }
    if ((DAT_1202eefc & 1) == 0) {
      DAT_1202eefc = DAT_1202eefc | 1;
      DAT_1202eef8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                      ("demo_force_game_state");
    }
    if ((DAT_1202eef8 != (int *)0x0) && (iVar12 = (**(code **)(*DAT_1202eef8 + 8))(), iVar12 != 0))
    {
      pcVar9 = " Override mode = (health, suit energy)";
      if (iVar12 != 1) {
        pcVar9 = " Override mode = (all)";
      }
      FUN_10b6ffa0(uVar3,0x3f800000,param_2 + DAT_11cd7e88,0x3fa66666,&local_34,0,pcVar9);
      local_8 = (undefined1 *)DAT_11cbf0bc;
    }
    param_3 = (float)local_8 + param_2;
    FUN_10b6ffa0(uVar3,0x43960000,param_3,0x3fa66666,&local_34,0,"Current");
    FUN_10b6ffa0(uVar3,0x43c80000,param_3,0x3fa66666,&local_34,0,"Recorded");
    local_8 = (undefined1 *)((float)local_8 + DAT_11cd7e88);
    local_20 = (undefined4 *)(*(int *)(local_3c + 0x44) + 0x14);
    local_10 = (int *)*local_20;
    fVar24 = (float10)(**(code **)(*piVar10 + 0x304))();
    local_14 = (float)fVar24;
    if ((local_14 < (float)local_10 - DAT_11de9a20) ||
       (param_3 = (float)((uint)param_3 & 0xffffff), (float)local_10 + DAT_11de9a20 < local_14)) {
      param_3 = (float)CONCAT13(1,param_3._0_3_);
    }
    local_24 = (int *)((float)local_8 + param_2);
    FUN_10b6ffa0(uVar3,0x3f800000,local_24,0x3fa66666,&local_34,0," Health:");
    puVar14 = &local_58;
    if (param_3._3_1_ == '\0') {
      puVar14 = &local_34;
    }
    FUN_10b6ffa0(uVar3,0x43960000,local_24,0x3fa66666,puVar14,0,&DAT_11d9e0b4,(int)local_14);
    FUN_10b6ffa0(uVar3,0x43c80000,local_24,0x3fa66666,puVar14,0,&DAT_11d9e0b4,(int)(float)local_10);
    local_8 = (undefined1 *)((float)local_8 + DAT_11cd7e88);
    FUN_10b6ffa0(uVar3,0x3f800000,(float)local_8 + param_2,0x3fa66666,&local_34,0,
                 " Inventory ---------------------------------------------------------------------------------------"
                );
    local_8 = (undefined1 *)((float)local_8 + DAT_11cd7e88);
    local_1c = (undefined4 *)((float)local_8 + param_2);
    FUN_10b6ffa0(uVar3,0x43960000,local_1c,0x3fa66666,&local_34,0,"Current");
    FUN_10b6ffa0(uVar3,0x44160000,local_1c,0x3fa66666,&local_34,0,"Recorded");
    local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
    local_8 = local_c;
    piVar10 = (int *)(**(code **)(*piVar10 + 400))();
    if (piVar10 != (int *)0x0) {
      local_24 = piVar10;
      local_1c = (undefined4 *)(**(code **)(*piVar10 + 0xac))();
      local_40 = 0;
      uVar13 = FUN_10a5c8b0(0);
      local_44 = FUN_10c4e7a0(uVar13,0);
      cVar8 = FUN_10c53240(local_20[2],local_44);
      local_15 = cVar8 == '\0';
      if (0 < (int)local_1c) {
        do {
          piVar10 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
          piVar10 = (int *)(**(code **)(*piVar10 + 0x6c))();
          iVar12 = *piVar10;
          uVar13 = (**(code **)(*local_24 + 0xbc))(local_40);
          piVar10 = (int *)(**(code **)(iVar12 + 0x54))(uVar13);
          local_10 = piVar10;
          if (piVar10 != (int *)0x0) {
            local_14 = (float)FUN_10c4e7a0(piVar10[2],0);
            puVar14 = (undefined4 *)FUN_10c4ff40(&local_14);
            local_c = (undefined1 *)((float)local_8 + param_2);
            param_3 = (float)CONCAT13(puVar14 == local_20 + 3,param_3._0_3_);
            FUN_10b6ffa0(uVar3,0x3f800000,local_c,0x3fa66666,&local_34,0," %2d)",local_40 + 1);
            uVar13 = FUN_10c4e7a0(piVar10[2],0);
            cVar8 = FUN_10c53240(uVar13,local_44);
            if (cVar8 != '\0') {
              puVar17 = &local_58;
              if (local_15 == '\0') {
                puVar17 = &local_34;
              }
              FUN_10b6ffa0(uVar3,0x438e0000,local_c,0x3fa66666,puVar17,0,&DAT_11cbf3a0);
            }
            cVar8 = FUN_10c53240(local_14,local_20[2]);
            if (cVar8 != '\0') {
              puVar17 = &local_58;
              if (local_15 == '\0') {
                puVar17 = &local_34;
              }
              FUN_10b6ffa0(uVar3,0x44120000,local_c,0x3fa66666,puVar17,0,&DAT_11cbf3a0);
            }
            if ((int *)piVar10[3] == (int *)0x0) {
              pcVar9 = "(null)";
            }
            else {
              pcVar9 = (char *)(**(code **)(*(int *)piVar10[3] + 0x48))();
            }
            pcVar21 = pcVar9;
            do {
              cVar8 = *pcVar21;
              pcVar21 = pcVar21 + 1;
            } while (cVar8 != '\0');
            sVar22 = (int)pcVar21 - (int)(pcVar9 + 1);
            if (0x1f < (int)sVar22) {
              sVar22 = 0x1f;
            }
            strncpy(local_84,pcVar9,sVar22);
            puVar7 = local_c;
            local_84[sVar22] = '\0';
            puVar17 = &local_58;
            if (param_3._3_1_ == '\0') {
              puVar17 = &local_34;
            }
            FUN_10b6ffa0(uVar3,0x3f800000,puVar7,0x3fa66666,puVar17,0,"     %s",local_84);
            if (param_3._3_1_ == '\0') {
              puVar14 = puVar14 + 5;
              local_5c = puVar14;
              iVar12 = (**(code **)(*local_10 + 0x14c))();
              if (iVar12 == 0) {
                fVar20 = 0.0;
              }
              else {
                fVar20 = (float)(iVar12 + -0x34c);
              }
              local_14 = fVar20;
              piVar10 = (int *)(**(code **)(*(int *)local_10[3] + 0xc))();
              if (piVar10 == (int *)0x0) {
LAB_10c4ca71:
                if (fVar20 != 0.0) {
                  local_10 = (int *)0x0;
                  local_c = (undefined1 *)0x0;
                  FUN_11104180(&local_64);
                  fVar4 = local_60;
                  while (local_60 = fVar4, local_64 != (int *)0x0) {
                    local_38 = fVar4;
                    local_48 = (float)(**(code **)(*local_64 + 8))();
                    if ((local_48 != 0.0) &&
                       (puVar17 = (undefined4 *)FUN_10c4fdc0(&local_48), puVar17 != puVar14)) {
                      puVar18 = (ushort *)FUN_10c4f5c0(&local_48);
                      uVar2 = *puVar18;
                      local_48 = (float)local_8 + param_2;
                      puVar14 = &local_58;
                      if (fVar4 == (float)(uint)uVar2) {
                        puVar14 = &local_34;
                      }
                      FUN_10b6ffa0(uVar3,(float)local_c + _DAT_11cc3e90,local_48,0x3fa66666,puVar14,
                                   0,"Am%d:%d",local_10,local_38);
                      piVar10 = local_10;
                      FUN_10b6ffa0(uVar3,(float)local_c + DAT_11ccb7ac,local_48,0x3fa66666,puVar14,0
                                   ,"Am%d:%d",local_10,(uint)uVar2);
                      local_10 = (int *)((int)piVar10 + 1);
                      local_c = (undefined1 *)((float)local_c + DAT_11de9a24);
                      puVar14 = local_5c;
                      if (local_10 == (int *)(((int)local_10 / 5) * 5)) {
                        local_c = (undefined1 *)0x0;
                        local_8 = (undefined1 *)((float)local_8 + DAT_11cd7e88);
                      }
                    }
                    puVar17 = (undefined4 *)FUN_111041c0(local_8c);
                    fVar4 = (float)puVar17[1];
                    fVar20 = local_14;
                    local_38 = fVar4;
                    local_64 = (int *)*puVar17;
                  }
                  uVar15 = (**(code **)(*(int *)((int)fVar20 + 0x34c) + 0x80))();
                  bVar1 = *(byte *)(puVar14 + 6);
                  local_38 = (float)local_8 + param_2;
                  puVar14 = &local_58;
                  if (uVar15 == bVar1) {
                    puVar14 = &local_34;
                  }
                  FUN_10b6ffa0(uVar3,(float)local_c + _DAT_11cc3e90,local_38,0x3fa66666,puVar14,0,
                               "FMode:%d",uVar15);
                  FUN_10b6ffa0(uVar3,(float)local_c + DAT_11ccb7ac,local_38,0x3fa66666,puVar14,0,
                               "FMode:%d",(uint)bVar1);
                  goto LAB_10c4ccb7;
                }
              }
              else {
                pcVar21 = "binoculars";
                pcVar9 = (char *)(**(code **)(*piVar10 + 8))();
                iVar12 = _stricmp(pcVar9,pcVar21);
                if (iVar12 != 0) goto LAB_10c4ca71;
              }
              pcVar9 = "Ok";
              puVar14 = &local_34;
            }
            else {
              pcVar9 = "Missing";
              puVar14 = &local_58;
            }
            FUN_10b6ffa0(uVar3,0x43960000,local_c,0x3fa66666,puVar14,0,pcVar9);
          }
LAB_10c4ccb7:
          local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
          local_40 = local_40 + 1;
          piVar10 = local_24;
          local_8 = local_c;
        } while (local_40 < (int)local_1c);
      }
      iVar12 = (**(code **)(*piVar10 + 200))();
      local_44 = iVar12;
      if (local_20[0xd] != 0) {
        puVar14 = &local_58;
        if (param_3._3_1_ == '\0') {
          puVar14 = &local_34;
        }
        FUN_10b6ffa0(uVar3,0x3f800000,(float)local_8 + param_2,0x3fa66666,puVar14,0," Accessories");
        local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
        local_8 = local_c;
      }
      local_1c = (undefined4 *)0x0;
      if (0 < iVar12) {
        local_10 = (int *)(local_40 + 1);
        do {
          pcVar9 = (char *)(**(code **)(*piVar10 + 0xcc))(local_1c);
          if (pcVar9 != (char *)0x0) {
            pcVar21 = pcVar9;
            do {
              cVar8 = *pcVar21;
              pcVar21 = pcVar21 + 1;
            } while (cVar8 != '\0');
            if (pcVar21 != pcVar9 + 1) {
              piVar16 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
              piVar16 = (int *)(**(code **)(*piVar16 + 0xc))(pcVar9);
              if (piVar16 != (int *)0x0) {
                param_3 = (float)(**(code **)(*piVar16 + 8))();
                puVar17 = local_20 + 9;
                puVar14 = (undefined4 *)FUN_10c4fc40(&param_3);
                local_14 = (float)local_8 + param_2;
                param_3 = (float)CONCAT13(puVar14 == puVar17,param_3._0_3_);
                FUN_10b6ffa0(uVar3,0x3f800000,local_14,0x3fa66666,&local_34,0," %2d)",local_10);
                pcVar21 = pcVar9;
                do {
                  cVar8 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                } while (cVar8 != '\0');
                sVar22 = (int)pcVar21 - (int)(pcVar9 + 1);
                if (0x1f < (int)sVar22) {
                  sVar22 = 0x1f;
                }
                strncpy(local_84,pcVar9,sVar22);
                fVar20 = local_14;
                local_84[sVar22] = '\0';
                puVar14 = &local_58;
                if (param_3._3_1_ == '\0') {
                  puVar14 = &local_34;
                }
                FUN_10b6ffa0(uVar3,0x3f800000,fVar20,0x3fa66666,puVar14,0,"     %s",local_84);
                if (param_3._3_1_ == '\0') {
                  pcVar9 = "Ok";
                  puVar14 = &local_34;
                }
                else {
                  pcVar9 = "Missing";
                  puVar14 = &local_58;
                }
                FUN_10b6ffa0(uVar3,0x43960000,local_14,0x3fa66666,puVar14,0,pcVar9);
                local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
                piVar10 = local_24;
                local_8 = local_c;
              }
            }
          }
          local_10 = (int *)((int)local_10 + 1);
          local_1c = (undefined4 *)((int)local_1c + 1);
        } while ((int)local_1c < (int)local_44);
      }
      if (piVar10[0x10] != 0) {
        puVar14 = &local_58;
        if (param_3._3_1_ == '\0') {
          puVar14 = &local_34;
        }
        FUN_10b6ffa0(uVar3,0x3f800000,(float)local_8 + param_2,0x3fa66666,puVar14,0," Ammo Packs");
        local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
        local_8 = local_c;
      }
      piVar10[0x21] = piVar10[0xe];
      if ((int *)piVar10[0xe] != piVar10 + 0xc) {
        puVar14 = local_20 + 0xf;
        local_1c = puVar14;
        do {
          piVar16 = *(int **)(piVar10[0x21] + 0x10);
          if (piVar16 != (int *)0x0) {
            uVar15 = *(uint *)(piVar10[0x21] + 0x14);
            local_44 = uVar15;
            local_14 = (float)(**(code **)(*piVar16 + 8))();
            puVar17 = (undefined4 *)FUN_10c4fdc0(&local_14);
            param_3 = (float)CONCAT13(puVar17 == puVar14,param_3._0_3_);
            if (puVar17 == puVar14) {
              uVar23 = 0;
LAB_10c4cf9c:
              bVar5 = true;
            }
            else {
              puVar18 = (ushort *)FUN_10c4f5c0(&local_14);
              uVar23 = (uint)*puVar18;
              if (uVar15 != uVar23) goto LAB_10c4cf9c;
              bVar5 = false;
            }
            local_10 = (int *)((float)local_8 + param_2);
            puVar14 = &local_58;
            if (!bVar5) {
              puVar14 = &local_34;
            }
            FUN_10b6ffa0(uVar3,0x3f800000,local_10,0x3fa66666,puVar14,0,"  %s:",local_14);
            FUN_10b6ffa0(uVar3,0x43960000,local_10,0x3fa66666,puVar14,0,&DAT_11d9e0b4,local_44);
            if (param_3._3_1_ == '\0') {
              FUN_10b6ffa0(uVar3,0x43c80000,local_10,0x3fa66666,puVar14,0,&DAT_11d9e0b4,uVar23);
            }
            else {
              FUN_10b6ffa0(uVar3,0x43c80000,local_10,0x3fa66666,&local_58,0,"NotRecd");
            }
            local_c = (undefined1 *)((float)local_8 + DAT_11cd7e88);
            piVar10 = local_24;
            puVar14 = local_1c;
            local_8 = local_c;
          }
          piVar16 = (int *)piVar10[0x21];
          piVar19 = (int *)piVar16[3];
          if (piVar19 == (int *)0x0) {
            piVar19 = (int *)piVar16[1];
            if (piVar16 == (int *)piVar19[3]) {
              do {
                piVar16 = piVar19;
                piVar19 = (int *)piVar16[1];
              } while (piVar16 == (int *)piVar19[3]);
            }
            if ((int *)piVar16[3] != piVar19) {
              piVar16 = piVar19;
            }
          }
          else {
            for (piVar6 = (int *)piVar19[2]; piVar16 = piVar19, piVar6 != (int *)0x0;
                piVar6 = (int *)piVar6[2]) {
              piVar19 = piVar6;
            }
          }
          piVar10[0x21] = (int)piVar16;
          if (piVar16 == piVar10 + 0xc) {
            return (float10)(float)local_c;
          }
        } while( true );
      }
    }
  }
  return (float10)(float)local_c;
}



