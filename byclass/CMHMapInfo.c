// ===== class CMHMapInfo  (2 recovered methods) =====

/* --- CMHMapInfo::GetManagers @ 107caee0 --- */
// [RE-AUTO c3]
// id: CMHMapInfo::GetManagers
// strings:
//   ""CMHMapInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHMapInfo::GetManagers
   strings:
     ""CMHMapInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMHMapInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed2c & 1) == 0) {
    DAT_123bed2c = DAT_123bed2c | 1;
    _DAT_123bed24 = &DAT_123bed14;
    DAT_123bed28 = &DAT_123bed14;
    DAT_123bed14 = 0;
    FUN_100d83d0("CMHMapInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70640);
  }
  return DAT_123bed10;
}



/* --- CMHMapInfo::GetManagers_1189f630 @ 1189f630 --- */
// [RE-AUTO c3]
// id: CMHMapInfo::GetManagers
// strings:
//   ""CMHMapInfo::GetManagers""
//   ""CMHMapInfo""
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHMapInfo::GetManagers
   strings:
     ""CMHMapInfo::GetManagers""
     ""CMHMapInfo""
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHMapInfo__GetManagers_1189f630(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined **local_10;
  undefined **local_c;
  undefined **local_8;
  
  iVar9 = 0;
  do {
    local_8 = &PTR_FUN_11dc8578;
    if ((DAT_123bed2c & 1) == 0) {
      DAT_123bed2c = DAT_123bed2c | 1;
      FUN_102500e0("CMHMapInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70640);
    }
    piVar3 = (int *)*DAT_123bed10;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_8,"CMHMapInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_123bea78 & 1) == 0) {
        DAT_123bea80 = 0;
        DAT_123bea90 = 0;
        DAT_123bea94 = 0;
        _DAT_123bea98 = 0;
        DAT_123bea9c = 0;
        DAT_123bea78 = DAT_123bea78 | 1;
        DAT_123bea7c = &PTR_FUN_11dc874c;
        DAT_123beaa0 = _DAT_11de9ae0;
        DAT_123beaa4 = _UNK_11de9ae4;
        uRam123beaa8 = _UNK_11de9ae8;
        DAT_123beaac = _UNK_11de9aec;
        DAT_123beab0 = 1;
        DAT_123bea84 = piVar3;
        _DAT_123bea88 = piVar3;
        _DAT_123bea8c = piVar3;
        FUN_11a8911f(&LAB_11caec90);
      }
      piVar3 = (int *)&DAT_123bea7c;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 <= iVar9) {
      return;
    }
    local_c = &PTR_FUN_11dc8578;
    if ((DAT_123bed2c & 1) == 0) {
      DAT_123bed2c = DAT_123bed2c | 1;
      FUN_102500e0("CMHMapInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70640);
    }
    piVar3 = (int *)*DAT_123bed10;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_c,"CMHMapInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_123bea78 & 1) == 0) {
        DAT_123bea80 = 0;
        DAT_123bea90 = 0;
        DAT_123bea94 = 0;
        _DAT_123bea98 = 0;
        DAT_123bea9c = 0;
        DAT_123bea78 = DAT_123bea78 | 1;
        DAT_123bea7c = &PTR_FUN_11dc874c;
        DAT_123beaa0 = _DAT_11de9ae0;
        DAT_123beaa4 = _UNK_11de9ae4;
        uRam123beaa8 = _UNK_11de9ae8;
        DAT_123beaac = _UNK_11de9aec;
        DAT_123beab0 = 1;
        DAT_123bea84 = piVar3;
        _DAT_123bea88 = piVar3;
        _DAT_123bea8c = piVar3;
        FUN_11a8911f(&LAB_11caec90);
      }
      piVar3 = (int *)&DAT_123bea7c;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((((-1 < iVar9) && (iVar9 < piVar3[6] - piVar3[5] >> 2)) &&
        (iVar4 = *(int *)(piVar3[5] + iVar9 * 4), iVar4 != 0)) &&
       (iVar11 = *(int *)(iVar4 + 0xb4), iVar11 != 0)) {
      ppuVar7 = *(undefined ***)(iVar11 + 200);
      ppuVar8 = (undefined **)(iVar11 + 0xc0);
      local_8 = ppuVar8;
      if (ppuVar7 != ppuVar8) {
        do {
          if ((ppuVar7 != (undefined **)0xffffffd8) && (puVar1 = ppuVar7[0x22], 0 < (int)puVar1)) {
            local_10 = &PTR_FUN_11dc8ee8;
            if ((DAT_123bee5c & 1) == 0) {
              DAT_123bee5c = DAT_123bee5c | 1;
              FUN_102500e0("CMonsterInfo::GetManagers");
              FUN_11a8911f(&LAB_11c70e30);
            }
            puVar5 = (undefined4 *)*DAT_123bee60;
            if ((puVar5 == (undefined4 *)0x0) &&
               (puVar5 = (undefined4 *)FUN_11679e10(&local_10,"CMonsterInfo",0),
               puVar5 == (undefined4 *)0x0)) {
              if ((DAT_123bedd4 & 1) == 0) {
                DAT_123bedd4 = DAT_123bedd4 | 1;
                FUN_107e0630();
                FUN_11a8911f(&LAB_11caecf0);
              }
              puVar5 = &DAT_123bedd8;
            }
            local_10 = &PTR_FUN_11da54a8;
            ppuVar8 = local_8;
            if (((puVar1 != (undefined *)0xffffffff) &&
                (((puVar1 != (undefined *)0x0 || (puVar5[0xc] == 0)) &&
                 (iVar11 = puVar5[10], iVar11 != 0)))) &&
               ((iVar10 = (int)puVar1 - puVar5[0xc], -1 < iVar10 && (iVar10 < (int)puVar5[9])))) {
              iVar2 = *(int *)(puVar5[8] + (iVar10 / iVar11) * 4);
              if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar10 % iVar11) * 4) != 0)) {
                ppuVar6 = ppuVar7 + 0x24;
                if ((undefined **)*ppuVar6 == ppuVar6) {
                  iVar11 = 0;
                  while( true ) {
                    local_10 = &PTR_FUN_11dc893c;
                    if ((DAT_123bec98 & 1) == 0) {
                      DAT_123bec98 = DAT_123bec98 | 1;
                      FUN_102500e0("CMHLevelInfo::GetManagers");
                      FUN_11a8911f(&LAB_11c70cf0);
                    }
                    piVar3 = (int *)*DAT_123bec7c;
                    if ((piVar3 == (int *)0x0) &&
                       (piVar3 = (int *)FUN_11679e10(&local_10,"CMHLevelInfo",0),
                       piVar3 == (int *)0x0)) {
                      if ((DAT_123bec74 & 1) == 0) {
                        DAT_123bec74 = DAT_123bec74 | 1;
                        FUN_107d6cc0();
                        FUN_11a8911f(&LAB_11caec30);
                      }
                      piVar3 = &DAT_123bec9c;
                    }
                    local_10 = &PTR_FUN_11da54a8;
                    iVar10 = (**(code **)(*piVar3 + 0x28))();
                    ppuVar8 = local_8;
                    if (iVar10 <= iVar11) break;
                    local_10 = &PTR_FUN_11dc893c;
                    if ((DAT_123bec98 & 1) == 0) {
                      DAT_123bec98 = DAT_123bec98 | 1;
                      FUN_102500e0("CMHLevelInfo::GetManagers");
                      FUN_11a8911f(&LAB_11c70cf0);
                    }
                    puVar5 = (undefined4 *)*DAT_123bec7c;
                    if ((puVar5 == (undefined4 *)0x0) &&
                       (puVar5 = (undefined4 *)FUN_11679e10(&local_10,"CMHLevelInfo",0),
                       puVar5 == (undefined4 *)0x0)) {
                      if ((DAT_123bec74 & 1) == 0) {
                        DAT_123bec74 = DAT_123bec74 | 1;
                        FUN_107d6cc0();
                        FUN_11a8911f(&LAB_11caec30);
                      }
                      puVar5 = &DAT_123bec9c;
                    }
                    local_10 = &PTR_FUN_11da54a8;
                    if ((((-1 < iVar11) && (iVar11 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
                        (iVar10 = *(int *)(puVar5[5] + iVar11 * 4), iVar10 != 0)) &&
                       (*(int *)(iVar10 + 0x14) == *(int *)(iVar4 + 0x10))) {
                    /* WARNING: Subroutine does not return */
                      FUN_10c3d580(0x10);
                    }
                    iVar11 = iVar11 + 1;
                  }
                }
                else {
                  ppuVar12 = (undefined **)*ppuVar6;
                  if (ppuVar12 != ppuVar6) {
                    do {
                      puVar1 = ppuVar12[2];
                      local_10 = &PTR_FUN_11dc893c;
                      if ((DAT_123bec98 & 1) == 0) {
                        DAT_123bec98 = DAT_123bec98 | 1;
                        FUN_102500e0("CMHLevelInfo::GetManagers");
                        FUN_11a8911f(&LAB_11c70cf0);
                      }
                      puVar5 = (undefined4 *)*DAT_123bec7c;
                      if ((puVar5 == (undefined4 *)0x0) &&
                         (puVar5 = (undefined4 *)FUN_11679e10(&local_10,"CMHLevelInfo",0),
                         puVar5 == (undefined4 *)0x0)) {
                        if ((DAT_123bec74 & 1) == 0) {
                          DAT_123bec74 = DAT_123bec74 | 1;
                          FUN_107d6cc0();
                          FUN_11a8911f(&LAB_11caec30);
                        }
                        puVar5 = &DAT_123bec9c;
                      }
                      local_10 = &PTR_FUN_11da54a8;
                      if ((puVar1 != (undefined *)0xffffffff) &&
                         ((((puVar1 != (undefined *)0x0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0))
                          && ((iVar11 = (int)puVar1 - puVar5[0xc], -1 < iVar11 &&
                              (iVar11 < (int)puVar5[9])))))) {
                        iVar10 = *(int *)(puVar5[8] + (iVar11 / (int)puVar5[10]) * 4);
                        if ((iVar10 != 0) &&
                           (*(int *)(iVar10 + (iVar11 % (int)puVar5[10]) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
                          FUN_10c3d580(0x10);
                        }
                      }
                      ppuVar12 = (undefined **)*ppuVar12;
                      ppuVar8 = local_8;
                    } while (ppuVar12 != ppuVar7 + 0x24);
                  }
                }
              }
            }
          }
          ppuVar6 = (undefined **)ppuVar7[3];
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar6 = (undefined **)ppuVar7[1];
            if (ppuVar7 == (undefined **)ppuVar6[3]) {
              do {
                ppuVar7 = ppuVar6;
                ppuVar6 = (undefined **)ppuVar7[1];
              } while (ppuVar7 == (undefined **)ppuVar6[3]);
            }
            if ((undefined **)ppuVar7[3] != ppuVar6) {
              ppuVar7 = ppuVar6;
            }
          }
          else {
            for (ppuVar12 = (undefined **)ppuVar6[2]; ppuVar7 = ppuVar6,
                ppuVar12 != (undefined **)0x0; ppuVar12 = (undefined **)ppuVar12[2]) {
              ppuVar6 = ppuVar12;
            }
          }
        } while (ppuVar7 != ppuVar8);
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



