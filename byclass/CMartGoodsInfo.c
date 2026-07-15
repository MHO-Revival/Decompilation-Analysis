// ===== class CMartGoodsInfo  (5 recovered methods) =====

/* --- CMartGoodsInfo::GetManagers @ 104fa590 --- */
// [RE-AUTO c3]
// id: CMartGoodsInfo::GetManagers
// strings:
//   ""CMartGoodsInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartGoodsInfo::GetManagers
   strings:
     ""CMartGoodsInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMartGoodsInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be2b0 & 1) == 0) {
    DAT_123be2b0 = DAT_123be2b0 | 1;
    _DAT_123be2c8 = &DAT_123be2b8;
    DAT_123be2cc = &DAT_123be2b8;
    DAT_123be2b8 = 0;
    FUN_100d83d0("CMartGoodsInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f140);
  }
  return DAT_123be2b4;
}



/* --- CMartGoodsInfo::GetManagers_11547fd0 @ 11547fd0 --- */
// [RE-AUTO c3]
// id: CMartGoodsInfo::GetManagers
// strings:
//   ""CPlayerVIPLevelUpInfo""
//   ""CMartGoodsInfo::GetManagers""
//   ""CMartGoodsInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartGoodsInfo::GetManagers
   strings:
     ""CPlayerVIPLevelUpInfo""
     ""CMartGoodsInfo::GetManagers""
     ""CMartGoodsInfo"" */

undefined4 CMartGoodsInfo__GetManagers_11547fd0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_5c;
  int iStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  int local_4c;
  undefined4 local_44;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined **local_8;
  
  iVar4 = FUN_1025b060();
  iVar6 = param_1;
  if ((param_1 <= iVar4) || (param_1 < 1)) {
    return 0;
  }
  local_14 = FUN_1025b060();
  iVar11 = 0;
  iVar5 = FUN_10a03930(iVar4);
  if (iVar5 != 0) {
    iVar11 = *(int *)(iVar5 + 0x14) - local_14;
  }
  if ((1 < iVar6 - iVar4) && (iVar4 = iVar4 + 1, iVar4 < iVar6)) {
    do {
      iVar6 = FUN_10939880(0,"CPlayerVIPLevelUpInfo",0);
      if (iVar4 == -1) {
        return 0;
      }
      if ((iVar4 == 0) && (*(int *)(iVar6 + 0x30) != 0)) {
        return 0;
      }
      iVar5 = *(int *)(iVar6 + 0x28);
      if (iVar5 == 0) {
        return 0;
      }
      iVar7 = iVar4 - *(int *)(iVar6 + 0x30);
      if (iVar7 < 0) {
        return 0;
      }
      if (*(int *)(iVar6 + 0x24) <= iVar7) {
        return 0;
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar7 / iVar5) * 4);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = *(int *)(iVar6 + (iVar7 % iVar5) * 4);
      if (iVar6 == 0) {
        return 0;
      }
      iVar11 = iVar11 + *(int *)(iVar6 + 0x14);
      iVar4 = iVar4 + 1;
      iVar6 = param_1;
    } while (iVar4 < param_1);
  }
  puStack_54 = &local_5c;
  local_4c = 0;
  local_5c = 0;
  iStack_58 = 0;
  puStack_50 = puStack_54;
  uVar8 = (**(code **)(*(int *)local_8[1] + 0x1b4))();
  FUN_11550f40(uVar8);
  iVar4 = FUN_11550f60();
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 0x14);
    iVar4 = iVar4 + 0xc;
    local_14 = iVar4;
    if (iVar5 != iVar4) {
      do {
        if (*(char *)(iVar5 + 0xf4) != '\0') {
          local_c = 0;
          cVar3 = FUN_11549580(*(undefined4 *)(iVar5 + 0x10),local_1c,&local_c);
          iVar4 = local_14;
          if (cVar3 != '\0') {
            local_20 = *(int *)(iVar5 + 0x10);
            local_24 = local_c;
            FUN_1154ad60(local_2c,&local_24);
            iVar4 = local_14;
          }
        }
        iVar6 = *(int *)(iVar5 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar5 + 4);
          if (iVar5 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar5 = iVar6;
              iVar6 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar6) {
            iVar5 = iVar6;
          }
        }
        else {
          for (iVar7 = *(int *)(iVar6 + 8); iVar5 = iVar6, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8))
          {
            iVar6 = iVar7;
          }
        }
        iVar6 = param_1;
      } while (iVar5 != iVar4);
    }
  }
  param_1 = 0;
  local_c = 0;
  if (iVar6 == 1) {
    puVar10 = puStack_54;
    if (puStack_54 != &local_5c) {
      do {
        iVar6 = puVar10[5];
        local_8 = &PTR_FUN_11dbe948;
        if ((DAT_123be2b0 & 1) == 0) {
          DAT_123be2b0 = DAT_123be2b0 | 1;
          FUN_102500e0("CMartGoodsInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f140);
        }
        puVar9 = (undefined4 *)*DAT_123be2b4;
        if ((puVar9 == (undefined4 *)0x0) &&
           (puVar9 = (undefined4 *)FUN_11679e10(&local_8,"CMartGoodsInfo",0),
           puVar9 == (undefined4 *)0x0)) {
          if ((DAT_123be2a4 & 1) == 0) {
            DAT_123be270 = 0;
            DAT_123be280 = 0;
            DAT_123be284 = 0;
            _DAT_123be288 = 0;
            DAT_123be28c = 0;
            DAT_123be2a4 = DAT_123be2a4 | 1;
            DAT_123be26c = &PTR_FUN_11dbe95c;
            DAT_123be290 = _DAT_11de9ae0;
            DAT_123be294 = _UNK_11de9ae4;
            uRam123be298 = _UNK_11de9ae8;
            DAT_123be29c = _UNK_11de9aec;
            DAT_123be2a0 = 1;
            DAT_123be274 = puVar9;
            _DAT_123be278 = puVar9;
            _DAT_123be27c = puVar9;
            FUN_11a8911f(&LAB_11ca1ab0);
          }
          puVar9 = &DAT_123be26c;
        }
        local_8 = &PTR_FUN_11da54a8;
        if (((iVar6 != -1) &&
            (((iVar6 != 0 || (puVar9[0xc] == 0)) && (iVar4 = puVar9[10], iVar4 != 0)))) &&
           ((iVar6 = iVar6 - puVar9[0xc], -1 < iVar6 && (iVar6 < (int)puVar9[9])))) {
          iVar5 = *(int *)(puVar9[8] + (iVar6 / iVar4) * 4);
          if ((iVar5 != 0) && (iVar6 = *(int *)(iVar5 + (iVar6 % iVar4) * 4), iVar6 != 0)) {
            if (local_c == 0) {
              local_c = *(int *)(iVar6 + 0x44);
              param_1 = *(int *)(iVar6 + 0x10);
              if (local_c == 0) goto LAB_115482d8;
            }
            if (*(int *)(iVar6 + 0x44) < local_c) {
              param_1 = *(int *)(iVar6 + 0x10);
              local_c = *(int *)(iVar6 + 0x44);
            }
          }
        }
LAB_115482d8:
        puVar9 = (undefined4 *)puVar10[3];
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar10[1];
          if (puVar10 == (undefined4 *)puVar9[3]) {
            do {
              puVar10 = puVar9;
              puVar9 = (undefined4 *)puVar10[1];
            } while (puVar10 == (undefined4 *)puVar9[3]);
          }
          if ((undefined4 *)puVar10[3] != puVar9) {
            puVar10 = puVar9;
          }
        }
        else {
          for (puVar2 = (undefined4 *)puVar9[2]; puVar10 = puVar9, puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)puVar2[2]) {
            puVar9 = puVar2;
          }
        }
      } while (puVar10 != &local_5c);
    }
    local_20 = 1;
    local_24 = param_1;
    FUN_10465520(local_2c,&local_24);
  }
  else {
    local_34 = 0;
    puStack_38 = &local_44;
    local_30 = param_2._3_1_;
    local_44 = 0;
    iStack_40 = 0;
    puStack_3c = &local_44;
    puVar10 = puStack_54;
    if (puStack_54 != &local_5c) {
      do {
        param_1 = 0;
        cVar3 = FUN_11549580(puVar10[5],&param_1,local_1c);
        iVar6 = param_1;
        if ((cVar3 == '\0') || (param_1 < 1)) break;
        param_1 = iVar11 / param_1;
        if (param_1 < 1) {
          FUN_10462a80();
          local_18 = puVar10[5];
          local_14 = iVar6;
          FUN_10465520(local_10,&local_18);
        }
        else {
          FUN_10462a80();
          local_24 = puVar10[5];
          local_20 = param_1;
          FUN_10465520(local_2c,&local_24);
          iVar11 = iVar11 - param_1 * iVar6;
          if (iVar11 < 1) break;
        }
        puVar9 = (undefined4 *)puVar10[3];
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar10[1];
          if (puVar10 == (undefined4 *)puVar9[3]) {
            do {
              puVar10 = puVar9;
              puVar9 = (undefined4 *)puVar10[1];
            } while (puVar10 == (undefined4 *)puVar9[3]);
          }
          if ((undefined4 *)puVar10[3] != puVar9) {
            puVar10 = puVar9;
          }
        }
        else {
          for (puVar2 = (undefined4 *)puVar9[2]; puVar10 = puVar9, puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)puVar2[2]) {
            puVar9 = puVar2;
          }
        }
      } while (puVar10 != &local_5c);
    }
    if (puStack_3c != &local_44) {
      local_20 = 1;
      puVar10 = puStack_3c;
      do {
        local_24 = puVar10[4];
        FUN_10465520(local_2c,&local_24);
        iVar11 = iVar11 - puVar10[5];
        puVar9 = (undefined4 *)puVar10[3];
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar10[1];
          if (puVar10 == (undefined4 *)puVar9[3]) {
            do {
              puVar10 = puVar9;
              puVar9 = (undefined4 *)puVar10[1];
            } while (puVar10 == (undefined4 *)puVar9[3]);
          }
          if ((undefined4 *)puVar10[3] != puVar9) {
            puVar10 = puVar9;
          }
        }
        else {
          for (puVar2 = (undefined4 *)puVar9[2]; puVar10 = puVar9, puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)puVar2[2]) {
            puVar9 = puVar2;
          }
        }
      } while (puVar10 != &local_44);
    }
    if ((*(int *)(param_2 + 0x10) != 0) && (0 < iVar11)) {
      piVar1 = (int *)(*(int *)(param_2 + 8) + 0x14);
      *piVar1 = *piVar1 + 1;
    }
    iVar6 = iStack_40;
    if (local_34 != 0) {
      while (iVar6 != 0) {
        FUN_10463900(*(undefined4 *)(iVar6 + 0xc));
        iVar4 = *(int *)(iVar6 + 8);
        FUN_10c3d5d0(iVar6);
        iVar6 = iVar4;
      }
      puStack_3c = &local_44;
      iStack_40 = 0;
      local_34 = 0;
      puStack_38 = puStack_3c;
    }
  }
  iVar6 = iStack_58;
  if (local_4c != 0) {
    while (iVar6 != 0) {
      FUN_1154a430(*(undefined4 *)(iVar6 + 0xc));
      iVar4 = *(int *)(iVar6 + 8);
      FUN_10c3d5d0(iVar6);
      iVar6 = iVar4;
    }
  }
  return 1;
}



/* --- CMartGoodsInfo::GetManagers_11551680 @ 11551680 --- */
// [RE-AUTO c3]
// id: CMartGoodsInfo::GetManagers
// strings:
//   ""CMartGoodsInfo""
//   ""CMartGoodsInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartGoodsInfo::GetManagers
   strings:
     ""CMartGoodsInfo""
     ""CMartGoodsInfo::GetManagers"" */

void __fastcall CMartGoodsInfo__GetManagers_11551680(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_8;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_11552580(*(undefined4 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x14) = param_1 + 0xc;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x18) = param_1 + 0xc;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_11552530(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x2c) = param_1 + 0x24;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x30) = param_1 + 0x24;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  piVar1 = (int *)FUN_104fc670(0,"CMartGoodsInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbe948;
      if ((DAT_123be2b0 & 1) == 0) {
        DAT_123be2b0 = DAT_123be2b0 | 1;
        FUN_102500e0("CMartGoodsInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f140);
      }
      puVar3 = (undefined4 *)*DAT_123be2b4;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMartGoodsInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123be2a4 & 1) == 0) {
            DAT_123be270 = 0;
            DAT_123be280 = 0;
            DAT_123be284 = 0;
            _DAT_123be288 = 0;
            DAT_123be28c = 0;
            DAT_123be2a4 = DAT_123be2a4 | 1;
            DAT_123be26c = &PTR_FUN_11dbe95c;
            DAT_123be290 = _DAT_11de9ae0;
            DAT_123be294 = _UNK_11de9ae4;
            uRam123be298 = _UNK_11de9ae8;
            DAT_123be29c = _UNK_11de9aec;
            DAT_123be2a0 = 1;
            DAT_123be274 = puVar3;
            _DAT_123be278 = puVar3;
            _DAT_123be27c = puVar3;
            FUN_11a8911f(&LAB_11ca1fa0);
          }
          puVar3 = &DAT_123be26c;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar6 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar6)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar3[5] + iVar6 * 4);
      }
      FUN_1154ef90(iVar4 + 0x10,iVar4);
      FUN_11550610();
      uVar5 = FUN_1154ef90(iVar4 + 0x10);
      FUN_11552af0(uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



/* --- CMartGoodsInfo::GetManagers_1181cc60 @ 1181cc60 --- */
// [RE-AUTO c3]
// id: CMartGoodsInfo::GetManagers
// strings:
//   ""CItemBaseInfo""
//   ""CMartGoodsInfo::GetManagers""
//   ""CMartGoodsInfo""

/* [RE-AUTO c3]
   id: CMartGoodsInfo::GetManagers
   strings:
     ""CItemBaseInfo""
     ""CMartGoodsInfo::GetManagers""
     ""CMartGoodsInfo"" */

void __fastcall CMartGoodsInfo__GetManagers_1181cc60(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  local_8 = param_1;
  FUN_102551f0(0,"CItemBaseInfo",0);
  if ((param_1[7] != param_1[8]) &&
     (iVar2 = 0, 0 < (int)((int)param_1[8] - (int)param_1[7] & 0xfffffffcU))) {
    do {
      local_8 = &PTR_FUN_11dbe948;
      if ((DAT_123be2b0 & 1) == 0) {
        DAT_123be2b0 = DAT_123be2b0 | 1;
        FUN_102500e0("CMartGoodsInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f140);
      }
      if (((*DAT_123be2b4 == 0) && (iVar1 = FUN_11679e10(&local_8,"CMartGoodsInfo",0), iVar1 == 0))
         && ((DAT_123be2a4 & 1) == 0)) {
        DAT_123be2a4 = DAT_123be2a4 | 1;
        FUN_104fcb70();
        FUN_11a8911f(&LAB_11cac110);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[8] - (int)param_1[7] >> 2);
  }
  return;
}



/* --- CMartGoodsInfo::GetManagers_11973450 @ 11973450 --- */
// [RE-AUTO c3]
// id: CMartGoodsInfo::GetManagers
// strings:
//   ""CMartGoodsInfo""
//   ""CMartGoodsInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartGoodsInfo::GetManagers
   strings:
     ""CMartGoodsInfo""
     ""CMartGoodsInfo::GetManagers"" */

void CMartGoodsInfo__GetManagers_11973450(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_104fc670(0,"CMartGoodsInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  FUN_11744050();
  FUN_11744050();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbe948;
      if ((DAT_123be2b0 & 1) == 0) {
        DAT_123be2b0 = DAT_123be2b0 | 1;
        FUN_102500e0("CMartGoodsInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f140);
      }
      puVar4 = (undefined4 *)*DAT_123be2b4;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CMartGoodsInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123be2a4 & 1) == 0) {
          DAT_123be270 = 0;
          DAT_123be280 = 0;
          DAT_123be284 = 0;
          _DAT_123be288 = 0;
          DAT_123be28c = 0;
          DAT_123be2a4 = DAT_123be2a4 | 1;
          DAT_123be26c = &PTR_FUN_11dbe95c;
          DAT_123be290 = _DAT_11de9ae0;
          DAT_123be294 = _UNK_11de9ae4;
          uRam123be298 = _UNK_11de9ae8;
          DAT_123be29c = _UNK_11de9aec;
          DAT_123be2a0 = 1;
          DAT_123be274 = puVar4;
          _DAT_123be278 = puVar4;
          _DAT_123be27c = puVar4;
          FUN_11a8911f(&LAB_11cb3090);
        }
        puVar4 = &DAT_123be26c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        FUN_11816390(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



