// ===== class CNpcSaleInfo  (4 recovered methods) =====

/* --- CNpcSaleInfo::GetManagers @ 1052c230 --- */
// [RE-AUTO c3]
// id: CNpcSaleInfo::GetManagers
// strings:
//   ""CNpcSaleInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcSaleInfo::GetManagers
   strings:
     ""CNpcSaleInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNpcSaleInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be904 & 1) == 0) {
    DAT_123be904 = DAT_123be904 | 1;
    _DAT_123be8fc = &DAT_123be8ec;
    DAT_123be900 = &DAT_123be8ec;
    DAT_123be8ec = 0;
    FUN_100d83d0("CNpcSaleInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fe40);
  }
  return DAT_123be8e8;
}



/* --- CNpcSaleInfo::GetManagers_1168f070 @ 1168f070 --- */
// [RE-AUTO c3]
// id: CNpcSaleInfo::GetManagers
// strings:
//   ""CNpcSaleInfo::GetManagers""
//   ""CNpcSaleInfo""
//   ""CManufactureSkillLearnInfo::GetManagers""
//   ""CManufactureSkillLearnInfo""
//   ""CNpcClientDailyWork::GetManagers""
//   ""CNpcClientDailyWork""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcSaleInfo::GetManagers
   strings:
     ""CNpcSaleInfo::GetManagers""
     ""CNpcSaleInfo""
     ""CManufactureSkillLearnInfo::GetManagers""
     ""CManufactureSkillLearnInfo""
     ""CNpcClientDailyWork::GetManagers""
     ""CNpcClientDailyWork"" */

void __thiscall CNpcSaleInfo__GetManagers_1168f070(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  undefined1 local_14 [8];
  undefined **local_c;
  undefined1 local_5;
  
  if ((*(int *)(param_1 + 0x74) == 0) &&
     (piVar4 = *(int **)(param_1 + 0x84), piVar4 != *(int **)(param_1 + 0x88))) {
    do {
      iVar6 = *piVar4;
      uVar1 = FUN_100e1c50(*(undefined4 *)(iVar6 + 0xc));
      iVar2 = CMonsterPartInfo__GetManagers_1188ea40(uVar1);
      *(int *)(iVar6 + 8) = iVar2;
      if (iVar2 == 0) {
        uVar1 = FUN_1188e9b0();
        *(undefined4 *)(iVar6 + 8) = uVar1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x88));
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if (iVar6 != 0) {
    iVar2 = *(int *)(iVar6 + 200);
    if (iVar2 != iVar6 + 0xc0) {
      do {
        iVar6 = *(int *)(iVar2 + 0x10);
        local_c = &PTR_FUN_11dc0b18;
        if ((DAT_123be904 & 1) == 0) {
          DAT_123be904 = DAT_123be904 | 1;
          FUN_102500e0("CNpcSaleInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6fe40);
        }
        puVar3 = (undefined4 *)*DAT_123be8e8;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CNpcSaleInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_123be6c4 & 1) == 0) {
            DAT_123be690 = 0;
            DAT_123be6a0 = 0;
            DAT_123be6a4 = 0;
            _DAT_123be6a8 = 0;
            DAT_123be6ac = 0;
            DAT_123be6c4 = DAT_123be6c4 | 1;
            DAT_123be68c = &PTR_FUN_11dc0c70;
            DAT_123be6b0 = _DAT_11de9ae0;
            DAT_123be6b4 = _UNK_11de9ae4;
            uRam123be6b8 = _UNK_11de9ae8;
            DAT_123be6bc = _UNK_11de9aec;
            DAT_123be6c0 = 1;
            DAT_123be694 = puVar3;
            _DAT_123be698 = puVar3;
            _DAT_123be69c = puVar3;
            FUN_11a8911f(&LAB_11ca70d0);
          }
          puVar3 = &DAT_123be68c;
        }
        local_c = &PTR_FUN_11da54a8;
        if (((iVar6 == -1) || (((iVar6 == 0 && (puVar3[0xc] != 0)) || (puVar3[10] == 0)))) ||
           ((iVar6 = iVar6 - puVar3[0xc], iVar6 < 0 || ((int)puVar3[9] <= iVar6)))) {
LAB_1168f22a:
          iVar6 = *(int *)(iVar2 + 0xc);
          if (iVar6 == 0) {
            iVar5 = *(int *)(iVar2 + 4);
            iVar6 = iVar2;
            if (iVar2 == *(int *)(iVar5 + 0xc)) {
              do {
                iVar6 = iVar5;
                iVar5 = *(int *)(iVar6 + 4);
              } while (iVar6 == *(int *)(iVar5 + 0xc));
            }
            if (*(int *)(iVar6 + 0xc) != iVar5) {
              iVar6 = iVar5;
            }
          }
          else {
            for (iVar5 = *(int *)(iVar6 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
              iVar6 = iVar5;
            }
          }
          iVar5 = *(int *)(param_1 + 0x74);
          iVar2 = FUN_100d86b0(iVar2,iVar5 + 0xc4,iVar5 + 200,iVar5 + 0xcc);
          if (iVar2 != 0) {
            FUN_10c3d5d0(iVar2);
          }
          *(int *)(iVar5 + 0xd0) = *(int *)(iVar5 + 0xd0) + -1;
          iVar2 = iVar6;
        }
        else {
          iVar5 = *(int *)(puVar3[8] + (iVar6 / (int)puVar3[10]) * 4);
          if ((iVar5 == 0) || (iVar6 = *(int *)(iVar5 + (iVar6 % (int)puVar3[10]) * 4), iVar6 == 0))
          goto LAB_1168f22a;
          *(int *)(iVar2 + 0x14) = iVar6;
          iVar6 = *(int *)(iVar2 + 0xc);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(iVar6 + 0xc)) {
              do {
                iVar2 = iVar6;
                iVar6 = *(int *)(iVar2 + 4);
              } while (iVar2 == *(int *)(iVar6 + 0xc));
            }
            if (*(int *)(iVar2 + 0xc) != iVar6) {
              iVar2 = iVar6;
            }
          }
          else {
            for (iVar5 = *(int *)(iVar6 + 8); iVar2 = iVar6, iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)
                ) {
              iVar6 = iVar5;
            }
          }
        }
      } while (iVar2 != *(int *)(param_1 + 0x74) + 0xc0);
    }
    local_c = &PTR_FUN_11d18794;
    if ((DAT_1203f72c & 1) == 0) {
      DAT_1203f72c = DAT_1203f72c | 1;
      FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97e40);
    }
    piVar4 = (int *)*DAT_1203f710;
    if ((piVar4 == (int *)0x0) &&
       (piVar4 = (int *)FUN_11679e10(&local_c,"CManufactureSkillLearnInfo",0), piVar4 == (int *)0x0)
       ) {
      if ((DAT_1203f820 & 1) == 0) {
        DAT_1203f820 = DAT_1203f820 | 1;
        FUN_11208200();
        FUN_11a8911f(&LAB_11ca7010);
      }
      piVar4 = (int *)&DAT_1203f7e8;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar6 = (**(code **)(*piVar4 + 0x28))();
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        local_c = &PTR_FUN_11d18794;
        if ((DAT_1203f72c & 1) == 0) {
          DAT_1203f72c = DAT_1203f72c | 1;
          FUN_102500e0("CManufactureSkillLearnInfo::GetManagers");
          FUN_11a8911f(&LAB_11c97e40);
        }
        puVar3 = (undefined4 *)*DAT_1203f710;
        if ((puVar3 == (undefined4 *)0x0) &&
           (puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CManufactureSkillLearnInfo",0),
           puVar3 == (undefined4 *)0x0)) {
          if ((DAT_1203f820 & 1) == 0) {
            DAT_1203f7ec = 0;
            DAT_1203f7fc = 0;
            DAT_1203f800 = 0;
            _DAT_1203f804 = 0;
            uRam1203f808 = 0;
            DAT_1203f820 = DAT_1203f820 | 1;
            DAT_1203f7e8 = &PTR_FUN_11d187e0;
            _DAT_1203f80c = _DAT_11de9ae0;
            uRam1203f810 = _UNK_11de9ae4;
            uRam1203f814 = _UNK_11de9ae8;
            uRam1203f818 = _UNK_11de9aec;
            DAT_1203f81c = 1;
            DAT_1203f7f0 = puVar3;
            _DAT_1203f7f4 = puVar3;
            _DAT_1203f7f8 = puVar3;
            FUN_11a8911f(&LAB_11ca7010);
          }
          puVar3 = &DAT_1203f7e8;
        }
        if ((iVar2 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar2)) {
          local_c = (undefined **)0x0;
        }
        else {
          local_c = *(undefined ***)(puVar3[5] + iVar2 * 4);
        }
        if ((local_c != (undefined **)0x0) && (local_c[5] == *(undefined **)(param_1 + 0x14))) {
          iVar5 = *(int *)(param_1 + 0x74);
          piVar4 = *(int **)(iVar5 + 0xdc);
          if (piVar4 == *(int **)(iVar5 + 0xe0)) {
            FUN_11690a10(piVar4,&local_c,&local_5,1,1);
          }
          else {
            *piVar4 = (int)local_c;
            *(int *)(iVar5 + 0xdc) = *(int *)(iVar5 + 0xdc) + 4;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    local_c = &PTR_FUN_11d38920;
    if ((DAT_12387cb0 & 1) == 0) {
      DAT_12387cb0 = DAT_12387cb0 | 1;
      FUN_102500e0("CNpcClientDailyWork::GetManagers");
      FUN_11a8911f(&LAB_11ca71c0);
    }
    piVar4 = (int *)*DAT_12387c94;
    if ((piVar4 == (int *)0x0) &&
       (piVar4 = (int *)FUN_11679e10(&local_c,"CNpcClientDailyWork",0), piVar4 == (int *)0x0)) {
      if ((DAT_1238a048 & 1) == 0) {
        DAT_1238a014 = 0;
        DAT_1238a024 = 0;
        DAT_1238a028 = 0;
        _DAT_1238a02c = 0;
        uRam1238a030 = 0;
        DAT_1238a048 = DAT_1238a048 | 1;
        DAT_1238a010 = &PTR_FUN_11d38960;
        _DAT_1238a034 = _DAT_11de9ae0;
        uRam1238a038 = _UNK_11de9ae4;
        uRam1238a03c = _UNK_11de9ae8;
        uRam1238a040 = _UNK_11de9aec;
        DAT_1238a044 = 1;
        DAT_1238a018 = piVar4;
        _DAT_1238a01c = piVar4;
        _DAT_1238a020 = piVar4;
        FUN_11a8911f(&LAB_11ca7070);
      }
      piVar4 = (int *)&DAT_1238a010;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar6 = (**(code **)(*piVar4 + 0x28))();
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        local_c = &PTR_FUN_11d38920;
        if ((DAT_12387cb0 & 1) == 0) {
          DAT_12387cb0 = DAT_12387cb0 | 1;
          FUN_102500e0("CNpcClientDailyWork::GetManagers");
          FUN_11a8911f(&LAB_11ca71c0);
        }
        piVar4 = (int *)*DAT_12387c94;
        if ((piVar4 == (int *)0x0) &&
           (piVar4 = (int *)FUN_11679e10(&local_c,"CNpcClientDailyWork",0), piVar4 == (int *)0x0)) {
          if ((DAT_1238a048 & 1) == 0) {
            DAT_1238a014 = 0;
            DAT_1238a024 = 0;
            DAT_1238a028 = 0;
            _DAT_1238a02c = 0;
            uRam1238a030 = 0;
            DAT_1238a048 = DAT_1238a048 | 1;
            DAT_1238a010 = &PTR_FUN_11d38960;
            _DAT_1238a034 = _DAT_11de9ae0;
            uRam1238a038 = _UNK_11de9ae4;
            uRam1238a03c = _UNK_11de9ae8;
            uRam1238a040 = _UNK_11de9aec;
            DAT_1238a044 = 1;
            DAT_1238a018 = piVar4;
            _DAT_1238a01c = piVar4;
            _DAT_1238a020 = piVar4;
            FUN_11a8911f(&LAB_11ca7070);
          }
          piVar4 = (int *)&DAT_1238a010;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((((-1 < iVar2) && (iVar2 < piVar4[6] - piVar4[5] >> 2)) &&
            (iVar5 = *(int *)(piVar4[5] + iVar2 * 4), iVar5 != 0)) &&
           (*(int *)(iVar5 + 0x10) == *(int *)(param_1 + 0x14))) {
          local_28 = *(undefined4 *)(iVar5 + 0x18);
          uStack_24 = *(undefined4 *)(iVar5 + 0x1c);
          uStack_20 = *(undefined4 *)(iVar5 + 0x20);
          uStack_1c = *(undefined4 *)(iVar5 + 0x24);
          local_18 = iVar5;
          FUN_11693510(local_14,&local_28);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    CTaskInfo__GetManagers_1168f7d0(param_2);
  }
  CIllustrateBookInfo__GetManagers_1168f680(param_2);
  return;
}



/* --- CNpcSaleInfo::GetManagers_11720f30 @ 11720f30 --- */
// [RE-AUTO c3]
// id: CNpcSaleInfo::GetManagers
// strings:
//   ""CNpcSaleInfo::GetManagers""
//   ""CNpcSaleInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcSaleInfo::GetManagers
   strings:
     ""CNpcSaleInfo::GetManagers""
     ""CNpcSaleInfo"" */

void CNpcSaleInfo__GetManagers_11720f30(void)

{
  int iVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc0b18;
  if ((DAT_123be904 & 1) == 0) {
    DAT_123be904 = DAT_123be904 | 1;
    FUN_102500e0("CNpcSaleInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6fe40);
  }
  if (((*DAT_123be8e8 == 0) && (iVar1 = FUN_11679e10(&local_8,"CNpcSaleInfo",0), iVar1 == 0)) &&
     ((DAT_123be6c4 & 1) == 0)) {
    DAT_123be690 = 0;
    DAT_123be6a0 = 0;
    DAT_123be6a4 = 0;
    _DAT_123be6a8 = 0;
    DAT_123be6ac = 0;
    DAT_123be6c4 = DAT_123be6c4 | 1;
    DAT_123be694 = 0;
    _DAT_123be698 = 0;
    _DAT_123be69c = 0;
    DAT_123be68c = &PTR_FUN_11dc0c70;
    DAT_123be6b0 = _DAT_11de9ae0;
    DAT_123be6b4 = _UNK_11de9ae4;
    uRam123be6b8 = _UNK_11de9ae8;
    DAT_123be6bc = _UNK_11de9aec;
    DAT_123be6c0 = 1;
    FUN_11a8911f(&LAB_11ca8b50);
  }
  local_8 = &PTR_FUN_11da54a8;
  CCommodityGroupInfo__GetManagers_11721020();
  return;
}



/* --- CNpcSaleInfo::GetManagers_118f38c0 @ 118f38c0 --- */
// [RE-AUTO c3]
// id: CNpcSaleInfo::GetManagers
// calls: CCommodityGroupInfo::GetManagers_117ddac0
// strings:
//   ""CNpcSaleInfo::GetManagers""
//   ""CNpcSaleInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcSaleInfo::GetManagers
   calls: CCommodityGroupInfo::GetManagers_117ddac0
   strings:
     ""CNpcSaleInfo::GetManagers""
     ""CNpcSaleInfo"" */

void CNpcSaleInfo__GetManagers_118f38c0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dc0b18;
    if ((DAT_123be904 & 1) == 0) {
      DAT_123be904 = DAT_123be904 | 1;
      FUN_102500e0("CNpcSaleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fe40);
    }
    piVar2 = (int *)*DAT_123be8e8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNpcSaleInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123be6c4 & 1) == 0) {
          DAT_123be690 = 0;
          DAT_123be6a0 = 0;
          DAT_123be6a4 = 0;
          _DAT_123be6a8 = 0;
          DAT_123be6ac = 0;
          DAT_123be6c4 = DAT_123be6c4 | 1;
          DAT_123be68c = &PTR_FUN_11dc0c70;
          DAT_123be6b0 = _DAT_11de9ae0;
          DAT_123be6b4 = _UNK_11de9ae4;
          uRam123be6b8 = _UNK_11de9ae8;
          DAT_123be6bc = _UNK_11de9aec;
          DAT_123be6c0 = 1;
          DAT_123be694 = piVar2;
          _DAT_123be698 = piVar2;
          _DAT_123be69c = piVar2;
          FUN_11a8911f(&LAB_11cb0a50);
        }
        piVar2 = (int *)&DAT_123be68c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11dc0b18;
    if ((DAT_123be904 & 1) == 0) {
      DAT_123be904 = DAT_123be904 | 1;
      FUN_102500e0("CNpcSaleInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6fe40);
    }
    piVar2 = (int *)*DAT_123be8e8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNpcSaleInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123be6c4 & 1) == 0) {
          DAT_123be690 = 0;
          DAT_123be6a0 = 0;
          DAT_123be6a4 = 0;
          _DAT_123be6a8 = 0;
          DAT_123be6ac = 0;
          DAT_123be6c4 = DAT_123be6c4 | 1;
          DAT_123be68c = &PTR_FUN_11dc0c70;
          DAT_123be6b0 = _DAT_11de9ae0;
          DAT_123be6b4 = _UNK_11de9ae4;
          uRam123be6b8 = _UNK_11de9ae8;
          DAT_123be6bc = _UNK_11de9aec;
          DAT_123be6c0 = 1;
          DAT_123be694 = piVar2;
          _DAT_123be698 = piVar2;
          _DAT_123be69c = piVar2;
          FUN_11a8911f(&LAB_11cb0a50);
        }
        piVar2 = (int *)&DAT_123be68c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CCommodityGroupInfo__GetManagers_117ddac0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



