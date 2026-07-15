// ===== class CNormalItemInfo  (3 recovered methods) =====

/* --- CNormalItemInfo::GetManagers @ 105401a0 --- */
// [RE-AUTO c3]
// id: CNormalItemInfo::GetManagers
// strings:
//   ""CNormalItemInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNormalItemInfo::GetManagers
   strings:
     ""CNormalItemInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNormalItemInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be828 & 1) == 0) {
    DAT_123be828 = DAT_123be828 | 1;
    _DAT_123be820 = &DAT_123be810;
    DAT_123be824 = &DAT_123be810;
    DAT_123be810 = 0;
    FUN_100d83d0("CNormalItemInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70350);
  }
  return DAT_123be80c;
}



/* --- CNormalItemInfo::GetManagers_11521cf0 @ 11521cf0 --- */
// [RE-AUTO c3]
// id: CNormalItemInfo::GetManagers
// calls: CAllTagItemLimitInfo::GetManagers_11521b00
// strings:
//   ""CNormalItemInfo::GetManagers""
//   ""CNormalItemInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNormalItemInfo::GetManagers
   calls: CAllTagItemLimitInfo::GetManagers_11521b00
   strings:
     ""CNormalItemInfo::GetManagers""
     ""CNormalItemInfo"" */

undefined4 __thiscall CNormalItemInfo__GetManagers_11521cf0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint local_20;
  undefined **local_18;
  int local_14;
  undefined **local_10;
  undefined **local_c;
  int local_8;
  
  iVar10 = *(int *)(param_1 + 8);
  local_14 = param_1;
  if (iVar10 != param_1) {
    do {
      uVar11 = 0;
      local_8 = 0;
      piVar12 = (int *)*param_2;
      uVar8 = param_2[1] - (int)piVar12 >> 5;
      if (uVar8 == 0) goto LAB_11521d3c;
      iVar14 = *(int *)(iVar10 + 0x10);
      piVar2 = piVar12;
      while (*piVar2 != iVar14) {
        uVar11 = uVar11 + 1;
        piVar2 = piVar2 + 8;
        if (uVar8 <= uVar11) goto LAB_11521d3c;
      }
      piVar12 = piVar12 + uVar11 * 8;
      if (piVar12 == (int *)0x0) goto LAB_11521d3c;
      iVar13 = local_14 + 0x18;
      iVar6 = *(int *)(local_14 + 0x1c);
      iVar9 = iVar13;
      if (iVar6 == 0) {
LAB_11521d7d:
        if ((iVar9 == iVar13) || ((undefined4 *)(iVar9 + 0x14) == (undefined4 *)0x0))
        goto LAB_11521df3;
        local_18 = *(undefined ***)(iVar9 + 0x1c);
        if (local_18 == (undefined **)0x0) goto LAB_11521df3;
        local_10 = (undefined **)piVar12[7];
        if ((int)local_10 < 1) goto LAB_11521df3;
        if (0 < *(int *)(iVar9 + 0x18)) {
          piVar2 = piVar12 + 7;
          if (*(int *)(iVar9 + 0x18) < (int)local_10) {
            piVar2 = (int *)(iVar9 + 0x18);
          }
          local_10 = (undefined **)*piVar2;
        }
        local_c = (undefined **)(*(int *)(iVar10 + 0x14) / (int)local_18);
        if (*(int *)(iVar10 + 0x14) % (int)local_18 != 0) {
          local_c = (undefined **)((int)local_c + 1);
        }
        pppuVar4 = &local_10;
        if ((int)local_c <= (int)local_10) {
          pppuVar4 = &local_c;
        }
        iVar14 = (int)local_18 * (int)*pppuVar4;
        local_8 = iVar14;
        FUN_114c63f0(*(undefined4 *)(iVar9 + 0x14),*pppuVar4);
        if (iVar14 < *(int *)(iVar10 + 0x14)) goto LAB_11521df3;
      }
      else {
        do {
          if (*(int *)(iVar6 + 0x10) < iVar14) {
            iVar3 = *(int *)(iVar6 + 0xc);
          }
          else {
            iVar3 = *(int *)(iVar6 + 8);
            iVar9 = iVar6;
          }
          iVar6 = iVar3;
        } while (iVar3 != 0);
        if (iVar9 != iVar13) {
          if (iVar14 < *(int *)(iVar9 + 0x10)) {
            iVar9 = iVar13;
          }
          goto LAB_11521d7d;
        }
LAB_11521df3:
        local_20 = 0;
        if (piVar12[2] - piVar12[1] >> 2 != 0) {
          do {
            local_c = &PTR_FUN_11dc0e8c;
            iVar14 = *(int *)(piVar12[1] + local_20 * 4);
            local_10 = *(undefined ***)(piVar12[4] + local_20 * 4);
            if ((DAT_123be828 & 1) == 0) {
              DAT_123be828 = DAT_123be828 | 1;
              FUN_102500e0("CNormalItemInfo::GetManagers");
              FUN_11a8911f(&LAB_11c70350);
            }
            puVar5 = (undefined4 *)*DAT_123be80c;
            if ((puVar5 == (undefined4 *)0x0) &&
               (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CNormalItemInfo",0),
               puVar5 == (undefined4 *)0x0)) {
              if ((DAT_123be800 & 1) == 0) {
                DAT_123be830 = 0;
                DAT_123be840 = 0;
                DAT_123be844 = 0;
                _DAT_123be848 = 0;
                DAT_123be84c = 0;
                DAT_123be800 = DAT_123be800 | 1;
                DAT_123be82c = &PTR_FUN_11dc0eb4;
                DAT_123be850 = _DAT_11de9ae0;
                DAT_123be854 = _UNK_11de9ae4;
                uRam123be858 = _UNK_11de9ae8;
                DAT_123be85c = _UNK_11de9aec;
                DAT_123be860 = 1;
                DAT_123be834 = puVar5;
                _DAT_123be838 = puVar5;
                _DAT_123be83c = puVar5;
                FUN_11a8911f(&LAB_11ca0bb0);
              }
              puVar5 = &DAT_123be82c;
            }
            local_c = &PTR_FUN_11da54a8;
            if ((iVar14 != -1) &&
               ((((iVar14 != 0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0)) &&
                ((iVar6 = iVar14 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))))) {
              iVar9 = *(int *)(puVar5[8] + (iVar6 / (int)puVar5[10]) * 4);
              if ((iVar9 != 0) &&
                 (((*(int *)(iVar9 + (iVar6 % (int)puVar5[10]) * 4) != 0 &&
                   ((cVar1 = FUN_116c0790(*(undefined4 *)(iVar10 + 0x10)), cVar1 != '\0' ||
                    (cVar1 = FUN_116c0720(), cVar1 != '\0')))) &&
                  (cVar1 = CAllTagItemLimitInfo__GetManagers_11521b00
                                     (iVar14,*(undefined4 *)(local_14 + 0x30)), cVar1 != '\0')))) {
                local_18 = (undefined **)FUN_116c04a0(*(undefined4 *)(iVar10 + 0x10));
                cVar1 = FUN_116c0720();
                ppuVar7 = local_18;
                if (cVar1 != '\0') {
                  ppuVar7 = (undefined **)FUN_116c0400();
                }
                iVar6 = *(int *)(iVar10 + 0x14) - local_8;
                local_c = (undefined **)(iVar6 / (int)ppuVar7);
                local_18 = local_10;
                if (iVar6 % (int)ppuVar7 != 0) {
                  local_c = (undefined **)((int)local_c + 1);
                }
                pppuVar4 = &local_c;
                if ((int)local_10 <= (int)local_c) {
                  pppuVar4 = &local_18;
                }
                iVar6 = local_8 + (int)*pppuVar4 * (int)ppuVar7;
                local_8 = iVar6;
                FUN_114c63f0(iVar14,*pppuVar4);
                if (*(int *)(iVar10 + 0x14) <= iVar6) break;
              }
            }
            local_20 = local_20 + 1;
          } while (local_20 < (uint)(piVar12[2] - piVar12[1] >> 2));
        }
        if (local_8 < *(int *)(iVar10 + 0x14)) {
LAB_11521d3c:
          return *(undefined4 *)(iVar10 + 0x10);
        }
      }
      iVar14 = *(int *)(iVar10 + 0xc);
      if (iVar14 == 0) {
        iVar14 = *(int *)(iVar10 + 4);
        if (iVar10 == *(int *)(iVar14 + 0xc)) {
          do {
            iVar10 = iVar14;
            iVar14 = *(int *)(iVar10 + 4);
          } while (iVar10 == *(int *)(iVar14 + 0xc));
        }
        if (*(int *)(iVar10 + 0xc) != iVar14) {
          iVar10 = iVar14;
        }
      }
      else {
        for (iVar6 = *(int *)(iVar14 + 8); iVar10 = iVar14, iVar6 != 0; iVar6 = *(int *)(iVar6 + 8))
        {
          iVar14 = iVar6;
        }
      }
    } while (iVar10 != local_14);
  }
  return 0;
}



/* --- CNormalItemInfo::GetManagers_115402e0 @ 115402e0 --- */
// [RE-AUTO c3]
// id: CNormalItemInfo::GetManagers
// strings:
//   ""CNormalItemInfo::GetManagers""
//   ""CNormalItemInfo""

/* [RE-AUTO c3]
   id: CNormalItemInfo::GetManagers
   strings:
     ""CNormalItemInfo::GetManagers""
     ""CNormalItemInfo"" */

undefined4 __thiscall CNormalItemInfo__GetManagers_115402e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = FUN_1180e490();
  if (iVar2 <= iVar6) {
    return 0xc;
  }
  local_10 = 0;
  local_14 = 0;
  iVar6 = *param_2;
  iVar2 = param_2[1] - iVar6 >> 0x1f;
  if ((param_2[1] - iVar6) / 0xc + iVar2 != iVar2) {
    iVar2 = 0;
    do {
      iVar6 = *(int *)(iVar2 + iVar6);
      local_c = &PTR_FUN_11dc0e8c;
      if ((DAT_123be828 & 1) == 0) {
        DAT_123be828 = DAT_123be828 | 1;
        FUN_102500e0("CNormalItemInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70350);
      }
      puVar3 = (undefined4 *)*DAT_123be80c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CNormalItemInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123be800 & 1) == 0) {
          DAT_123be800 = DAT_123be800 | 1;
          FUN_10540030();
          FUN_11a8911f(&LAB_11ca1570);
        }
        puVar3 = &DAT_123be82c;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((iVar6 == -1) || (((iVar6 == 0 && (puVar3[0xc] != 0)) || (puVar3[10] == 0)))) ||
         ((iVar6 = iVar6 - puVar3[0xc], iVar6 < 0 || ((int)puVar3[9] <= iVar6)))) {
        return 10;
      }
      iVar5 = *(int *)(puVar3[8] + (iVar6 / (int)puVar3[10]) * 4);
      if (iVar5 == 0) {
        return 10;
      }
      if (*(int *)(iVar5 + (iVar6 % (int)puVar3[10]) * 4) == 0) {
        return 10;
      }
      uVar4 = FUN_1180e470();
      cVar1 = FUN_116c0790(uVar4);
      if (cVar1 == '\0') {
        return 9;
      }
      local_24 = 0;
      local_20 = (undefined4 *)0x0;
      local_1c = (undefined4 *)0x0;
      local_18 = 0;
      FUN_1120c900(0,&local_18,&local_5,1,1);
      local_18 = 10;
      if (local_20 == local_1c) {
        FUN_1120c900(local_20,&local_18,&local_5,1,1);
      }
      else {
        *local_20 = 10;
        local_20 = local_20 + 1;
      }
      iVar6 = FUN_113f8740(*(undefined4 *)(iVar2 + *param_2),*(undefined4 *)(iVar2 + 4 + *param_2),
                           &local_24);
      if (iVar6 != 0) {
        if (local_24 != 0) {
          FUN_10c3d5d0(local_24);
        }
        return 7;
      }
      cVar1 = FUN_116c0720();
      if (cVar1 == '\0') {
        iVar6 = FUN_116c04a0(*(undefined4 *)(iVar2 + 8 + *param_2));
      }
      else {
        iVar6 = FUN_116c0400();
      }
      local_14 = local_14 + *(int *)(iVar2 + 4 + *param_2) * iVar6;
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      iVar2 = iVar2 + 0xc;
      local_10 = local_10 + 1;
      iVar6 = *param_2;
    } while (local_10 != (param_2[1] - iVar6) / 0xc);
  }
  iVar2 = FUN_1180e570();
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = FUN_1180e4f0();
  iVar5 = iVar2 * iVar6 + iVar5;
  iVar6 = FUN_1180e4e0();
  if (iVar6 < iVar5) {
    iVar5 = FUN_1180e4e0();
  }
  if (local_14 < iVar5) {
    return 8;
  }
  iVar6 = FUN_1180e550();
  iVar2 = FUN_11540f40();
  if (iVar2 < iVar6) {
    iVar6 = FUN_1180e560();
    if (iVar6 == 0) {
      return 3;
    }
    iVar6 = FUN_1180e560();
    if (iVar6 == 1) {
      return 5;
    }
    iVar6 = FUN_1180e560();
    if (iVar6 == 2) {
      return 1;
    }
  }
  return 0;
}



