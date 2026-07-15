// ===== class CItemBoxGroupInfo  (3 recovered methods) =====

/* --- CItemBoxGroupInfo::GetManagers @ 1052c5f0 --- */
// [RE-AUTO c3]
// id: CItemBoxGroupInfo::GetManagers
// strings:
//   ""CItemBoxGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBoxGroupInfo::GetManagers
   strings:
     ""CItemBoxGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CItemBoxGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be8a0 & 1) == 0) {
    DAT_123be8a0 = DAT_123be8a0 | 1;
    _DAT_123be898 = &DAT_123be888;
    DAT_123be89c = &DAT_123be888;
    DAT_123be888 = 0;
    FUN_100d83d0("CItemBoxGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fea0);
  }
  return DAT_123be884;
}



/* --- CItemBoxGroupInfo::GetManagers_11516390 @ 11516390 --- */
// [RE-AUTO c3]
// id: CItemBoxGroupInfo::GetManagers
// calls: memmove, memcpy
// strings:
//   ""CItemBoxInfo""
//   ""CItemBoxGroupInfo::GetManagers""
//   ""CItemBoxGroupInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBoxGroupInfo::GetManagers
   calls: memmove, memcpy
   strings:
     ""CItemBoxInfo""
     ""CItemBoxGroupInfo::GetManagers""
     ""CItemBoxGroupInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void CItemBoxGroupInfo__GetManagers_11516390(int param_1,undefined4 *param_2)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  undefined ***pppuVar9;
  void *pvVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined **ppuVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined **ppuVar17;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined *local_d0;
  undefined **ppuStack_cc;
  undefined **ppuStack_c8;
  undefined **ppuStack_c4;
  int local_c0;
  undefined1 local_bc;
  undefined4 *local_b8;
  undefined **local_b4;
  undefined **local_b0;
  undefined **local_ac;
  void *local_a8;
  void *local_a4;
  undefined *local_9c;
  uint local_98;
  undefined **local_94;
  undefined **local_90;
  undefined **local_8c;
  undefined **local_88;
  undefined1 local_81;
  undefined **local_80;
  undefined **local_7c;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined **local_28;
  undefined **local_24;
  undefined1 local_20 [16];
  undefined **local_10;
  undefined **local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_b8 = param_2;
  local_7c = (undefined **)0x0;
  iVar5 = FUN_1053b0a0(0,"CItemBoxInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar5 + 0x30) == 0)) &&
       (iVar8 = *(int *)(iVar5 + 0x28), iVar8 != 0)) &&
      ((param_1 = param_1 - *(int *)(iVar5 + 0x30), -1 < param_1 &&
       (param_1 < *(int *)(iVar5 + 0x24))))))) {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (param_1 / iVar8) * 4);
    if ((iVar5 != 0) &&
       ((local_d4 = *(int *)(iVar5 + (param_1 % iVar8) * 4), local_d4 != 0 &&
        (ppuVar6 = (undefined **)FUN_117fbee0(0), local_94 = ppuVar6, ppuVar6 != (undefined **)0x0))
       )) {
      FUN_117fbf30(&local_a8,0);
      if (local_a8 != local_a4) {
        local_b4 = (undefined **)0x0;
        local_88 = (undefined **)0x0;
        local_b0 = (undefined **)0x0;
        local_ac = (undefined **)0x0;
        ppuVar6 = (undefined **)FUN_11515430(ppuVar6[1],ppuVar6[2] + 1);
        local_80 = ppuVar6;
        if (ppuVar6 != (undefined **)0x0) {
          ppuStack_c8 = &local_d0;
          local_c0 = 0;
          local_d0 = (undefined *)0x0;
          ppuStack_cc = (undefined **)0x0;
          local_bc = local_81;
          ppuStack_c4 = ppuStack_c8;
          local_90 = (undefined **)FUN_117fc080(0);
          local_8c = (undefined **)0x0;
          if (ppuVar6 != (undefined **)0x0) {
            do {
              ppuVar6 = local_8c;
              FUN_100ee470();
              FUN_100ee450();
              iVar5 = FUN_11a89331();
              local_98 = iVar5 + 1;
              uVar12 = 0;
              uVar16 = 0;
              uVar14 = (int)local_a4 - (int)local_a8 >> 2;
              if (uVar14 != 0) {
                do {
                  puVar1 = *(undefined **)((int)local_a8 + uVar16 * 4);
                  local_9c = puVar1;
                  if ((puVar1 != (undefined *)0x0) &&
                     (uVar12 = uVar12 + *(int *)(puVar1 + 0x10), local_98 <= uVar12)) {
                    if (local_88 == local_ac) {
                      FUN_11518000(local_88,&local_9c,&local_81,1,1);
                    }
                    else {
                      *local_88 = puVar1;
                      local_b0 = local_88 + 1;
                    }
                    ppuVar6 = local_8c;
                    local_88 = local_b0;
                    if (*(char *)(local_94 + 3) == '\0') {
                      if (local_90 < *(undefined ***)(puVar1 + 0x10)) {
                        local_90 = (undefined **)0x0;
                      }
                      else {
                        local_90 = (undefined **)
                                   ((int)local_90 - (int)*(undefined ***)(puVar1 + 0x10));
                      }
                      _Dst = (void *)((int)local_a8 + uVar16 * 4);
                      pvVar10 = (void *)((int)_Dst + 4);
                      if ((pvVar10 != local_a4) && ((int)local_a4 - (int)pvVar10 != 0)) {
                        memmove(_Dst,pvVar10,(int)local_a4 - (int)pvVar10);
                      }
                      local_a4 = (void *)((int)local_a4 + -4);
                      ppuVar6 = local_8c;
                    }
                    break;
                  }
                  uVar16 = uVar16 + 1;
                  ppuVar6 = local_8c;
                } while (uVar16 < uVar14);
              }
            } while (((local_a8 != local_a4) &&
                     ((undefined **)((int)local_88 - (int)local_b4 >> 2) < local_80)) &&
                    (local_8c = (undefined **)((int)ppuVar6 + 1), local_8c < local_80));
            if (local_b4 != local_88) {
              ppuVar17 = (undefined **)((int)local_88 - (int)local_b4 >> 2);
              local_8c = (undefined **)0x0;
              ppuVar6 = local_b4;
              local_88 = ppuVar17;
              if (ppuVar17 != (undefined **)0x0) {
                do {
                  puVar1 = ppuVar6[(int)local_8c];
                  if (puVar1 != (undefined *)0x0) {
                    iVar5 = *(int *)(puVar1 + 4);
                    local_90 = &PTR_FUN_11dc0b10;
                    if ((DAT_123be8a0 & 1) == 0) {
                      DAT_123be8a0 = DAT_123be8a0 | 1;
                      FUN_102500e0("CItemBoxGroupInfo::GetManagers");
                      FUN_11a8911f(&LAB_11c6fea0);
                    }
                    puVar7 = (undefined *)*DAT_123be884;
                    if ((puVar7 == (undefined *)0x0) &&
                       (puVar7 = (undefined *)FUN_11679e10(&local_90,"CItemBoxGroupInfo",0),
                       puVar7 == (undefined *)0x0)) {
                      if ((DAT_123be64c & 1) == 0) {
                        DAT_123be64c = DAT_123be64c | 1;
                        FUN_1053cd00();
                        FUN_11a8911f(&LAB_11ca04a0);
                      }
                      puVar7 = &DAT_123be614;
                    }
                    local_90 = &PTR_FUN_11da54a8;
                    if ((((iVar5 == -1) || ((iVar5 == 0 && (*(int *)(puVar7 + 0x30) != 0)))) ||
                        (iVar8 = *(int *)(puVar7 + 0x28), iVar8 == 0)) ||
                       ((iVar5 = iVar5 - *(int *)(puVar7 + 0x30), iVar5 < 0 ||
                        (*(int *)(puVar7 + 0x24) <= iVar5)))) goto LAB_11516d46;
                    iVar2 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar5 / iVar8) * 4);
                    if ((iVar2 == 0) ||
                       (puVar7 = *(undefined **)(iVar2 + (iVar5 % iVar8) * 4), local_9c = puVar7,
                       puVar7 == (undefined *)0x0)) goto LAB_11516d46;
                    iVar5 = *(int *)(puVar1 + 8);
                    FUN_100ee470();
                    FUN_100ee450();
                    iVar8 = FUN_11a89331();
                    ppuVar6 = local_b4;
                    ppuVar17 = local_88;
                    for (local_98 = iVar8 + iVar5; local_b4 = ppuVar6, local_88 = ppuVar17,
                        local_98 != 0; local_98 = local_98 - 1) {
                      ppuVar6 = (undefined **)0x0;
                      FUN_100ee470();
                      FUN_100ee450();
                      iVar5 = FUN_11a89331();
                      local_80 = (undefined **)(iVar5 + 1);
                      uVar12 = 0;
                      iVar5 = *(int *)(puVar7 + 0x1c) - *(int *)(puVar7 + 0x18) >> 0x1f;
                      iVar8 = (*(int *)(puVar7 + 0x1c) - *(int *)(puVar7 + 0x18)) / 0x24 + iVar5;
                      if (iVar8 != iVar5) {
                        puVar15 = *(uint **)(puVar7 + 0x18);
LAB_11516857:
                        ppuVar6 = (undefined **)((int)ppuVar6 + puVar15[4]);
                        if (ppuVar6 < local_80) goto code_r0x1151685e;
                        uVar12 = puVar15[1];
                        FUN_100ee470();
                        FUN_100ee450();
                        iVar5 = FUN_11a89331();
                        ppuVar6 = &local_d0;
                        local_80 = (undefined **)(uVar12 + iVar5);
                        if (ppuStack_cc != (undefined **)0x0) {
                          ppuVar17 = ppuStack_cc;
                          do {
                            if (ppuVar17[4] < (undefined *)*puVar15) {
                              ppuVar13 = (undefined **)ppuVar17[3];
                            }
                            else {
                              ppuVar13 = (undefined **)ppuVar17[2];
                              ppuVar6 = ppuVar17;
                            }
                            ppuVar17 = ppuVar13;
                          } while (ppuVar13 != (undefined **)0x0);
                        }
                        if ((ppuVar6 == &local_d0) ||
                           (local_7c = (undefined **)((uint)local_7c | 1),
                           (undefined *)*puVar15 < ppuVar6[4])) {
                          bVar4 = true;
                        }
                        else {
                          bVar4 = false;
                        }
                        if (((uint)local_7c & 1) != 0) {
                          local_7c = (undefined **)((uint)local_7c & 0xfffffffe);
                        }
                        if (bVar4) {
                          local_dc = *puVar15;
                          local_d8 = 0;
                          FUN_11404260(&local_94,ppuVar6,&local_dc);
                          ppuVar6 = local_94;
                        }
                        ppuVar6[5] = ppuVar6[5] + (int)(uVar12 + iVar5);
                        puVar7 = local_9c;
                      }
LAB_11516948:
                      ppuVar6 = local_b4;
                      ppuVar17 = local_88;
                    }
                  }
                  local_8c = (undefined **)((int)local_8c + 1);
                } while (local_8c < ppuVar17);
              }
              if ((local_c0 != 0) && (ppuVar6 = ppuStack_c8, ppuStack_c8 != &local_d0)) {
                do {
                  puVar1 = ppuVar6[4];
                  local_7c = &PTR_FUN_11da5518;
                  if ((DAT_123bdbfc & 1) == 0) {
                    DAT_123bdbfc = DAT_123bdbfc | 1;
                    FUN_102500e0("CItemBaseInfo::GetManagers");
                    FUN_11a8911f(&LAB_11c6e610);
                  }
                  pppuVar9 = (undefined ***)*DAT_123bdba0;
                  if ((pppuVar9 == (undefined ***)0x0) &&
                     (pppuVar9 = (undefined ***)FUN_11679e10(&local_7c,"CItemBaseInfo",0),
                     pppuVar9 == (undefined ***)0x0)) {
                    if ((DAT_123bdc00 & 1) == 0) {
                      DAT_123bdbc4 = 0;
                      DAT_123bdbd4 = 0;
                      DAT_123bdbd8 = 0;
                      _DAT_123bdbdc = 0;
                      DAT_123bdbe0 = 0;
                      DAT_123bdc00 = DAT_123bdc00 | 1;
                      DAT_123bdbc0 = &PTR_FUN_11da5520;
                      _DAT_123bdbe4 = _DAT_11de9ae0;
                      DAT_123bdbf4 = 1;
                      DAT_123bdbc8 = pppuVar9;
                      _DAT_123bdbcc = pppuVar9;
                      _DAT_123bdbd0 = pppuVar9;
                      FUN_11a8911f(&LAB_11ca0440);
                    }
                    pppuVar9 = &DAT_123bdbc0;
                  }
                  local_7c = &PTR_FUN_11da54a8;
                  if (((puVar1 != (undefined *)0xffffffff) &&
                      (((puVar1 != (undefined *)0x0 || (pppuVar9[0xc] == (undefined **)0x0)) &&
                       (ppuVar17 = pppuVar9[10], ppuVar17 != (undefined **)0x0)))) &&
                     ((iVar5 = (int)puVar1 - (int)pppuVar9[0xc], -1 < iVar5 &&
                      (iVar5 < (int)pppuVar9[9])))) {
                    if ((pppuVar9[8][iVar5 / (int)ppuVar17] != (undefined *)0x0) &&
                       (iVar5 = *(int *)(pppuVar9[8][iVar5 / (int)ppuVar17] +
                                        (iVar5 % (int)ppuVar17) * 4), iVar5 != 0)) {
                      local_3c = FUN_11521920(iVar5,*(undefined4 *)(local_d4 + 0x18));
                      local_40 = ppuVar6[5];
                      local_28 = (undefined **)local_38;
                      local_50 = local_60;
                      local_10 = (undefined **)local_20;
                      local_68 = local_78;
                      local_44 = ppuVar6[4];
                      local_60[0] = 0;
                      local_78[0] = 0;
                      local_38[0] = 0;
                      local_20[0] = 0;
                      local_48 = 1;
                      local_64 = local_68;
                      local_4c = local_50;
                      local_24 = local_28;
                      local_c = local_10;
                      FUN_100d83d0(local_78,local_78);
                      FUN_100d83d0(local_4c,local_50);
                      if ((local_64 != local_78) && (local_64 != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(local_64);
                      }
                      if ((local_4c != local_60) && (local_4c != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(local_4c);
                      }
                      uVar12 = 0;
                      puVar3 = (undefined4 *)local_b8[1];
                      local_80 = (undefined **)*local_b8;
                      uVar14 = (int)puVar3 - (int)local_80 >> 6;
                      if (uVar14 != 0) {
                        ppuVar17 = local_80 + 1;
                        do {
                          if (*ppuVar17 == ppuVar6[4]) {
                            local_80[uVar12 * 0x10 + 2] =
                                 local_80[uVar12 * 0x10 + 2] + (int)ppuVar6[5];
                            goto LAB_11516cd3;
                          }
                          uVar12 = uVar12 + 1;
                          ppuVar17 = ppuVar17 + 0x10;
                        } while (uVar12 < uVar14);
                      }
                      if (puVar3 == (undefined4 *)local_b8[2]) {
                        FUN_112004b0(puVar3,&local_48,&local_81,1,1);
                      }
                      else {
                        if (puVar3 != (undefined4 *)0x0) {
                          *puVar3 = local_48;
                          puVar3[1] = local_44;
                          puVar3[2] = local_40;
                          puVar3[3] = local_3c;
                          puVar3[8] = puVar3 + 4;
                          puVar3[9] = puVar3 + 4;
                          local_80 = (undefined **)(((int)local_28 - (int)local_24) + 1);
                          local_94 = local_24;
                          local_7c = local_28;
                          if ((int)local_28 - (int)local_24 == -1) {
                    /* WARNING: Subroutine does not return */
                            FUN_100b73e0();
                          }
                          if (0x10 < local_80) {
                    /* WARNING: Subroutine does not return */
                            FUN_10c3d580(local_80);
                          }
                          puVar11 = (undefined1 *)puVar3[9];
                          if (local_28 != local_24) {
                            local_7c = (undefined **)((int)local_28 - (int)local_24);
                            pvVar10 = memcpy(puVar11,local_24,(size_t)local_7c);
                            puVar11 = (undefined1 *)((int)pvVar10 + (int)local_7c);
                          }
                          puVar3[8] = puVar11;
                          *puVar11 = 0;
                          puVar3[0xe] = puVar3 + 10;
                          puVar3[0xf] = puVar3 + 10;
                          uVar12 = ((int)local_10 - (int)local_c) + 1;
                          local_7c = local_10;
                          local_80 = local_c;
                          if ((int)local_10 - (int)local_c == -1) {
                    /* WARNING: Subroutine does not return */
                            FUN_100b73e0();
                          }
                          if (0x10 < uVar12) {
                    /* WARNING: Subroutine does not return */
                            FUN_10c3d580(uVar12);
                          }
                          puVar11 = (undefined1 *)puVar3[0xf];
                          if (local_10 != local_c) {
                            local_7c = (undefined **)((int)local_10 - (int)local_c);
                            pvVar10 = memcpy(puVar11,local_c,(size_t)local_7c);
                            puVar11 = (undefined1 *)((int)pvVar10 + (int)local_7c);
                          }
                          puVar3[0xe] = puVar11;
                          *puVar11 = 0;
                        }
                        local_b8[1] = local_b8[1] + 0x40;
                      }
LAB_11516cd3:
                      if ((local_c != (undefined **)local_20) && (local_c != (undefined **)0x0)) {
                        FUN_10c3d5d0(local_c);
                      }
                      if ((local_24 != (undefined **)local_38) && (local_24 != (undefined **)0x0)) {
                        FUN_10c3d5d0(local_24);
                      }
                    }
                  }
                  ppuVar17 = (undefined **)ppuVar6[3];
                  if (ppuVar17 == (undefined **)0x0) {
                    ppuVar17 = (undefined **)ppuVar6[1];
                    if (ppuVar6 == (undefined **)ppuVar17[3]) {
                      do {
                        ppuVar6 = ppuVar17;
                        ppuVar17 = (undefined **)ppuVar6[1];
                      } while (ppuVar6 == (undefined **)ppuVar17[3]);
                    }
                    if ((undefined **)ppuVar6[3] != ppuVar17) {
                      ppuVar6 = ppuVar17;
                    }
                  }
                  else {
                    for (ppuVar13 = (undefined **)ppuVar17[2]; ppuVar6 = ppuVar17,
                        ppuVar13 != (undefined **)0x0; ppuVar13 = (undefined **)ppuVar13[2]) {
                      ppuVar17 = ppuVar13;
                    }
                  }
                } while (ppuVar6 != &local_d0);
              }
            }
          }
LAB_11516d46:
          FUN_1098e260();
          if (local_b4 != (undefined **)0x0) {
            FUN_10c3d5d0(local_b4);
          }
        }
      }
      if (local_a8 != (void *)0x0) {
        FUN_10c3d5d0(local_a8);
      }
    }
  }
  FUN_11a89daa();
  return;
code_r0x1151685e:
  uVar12 = uVar12 + 1;
  puVar15 = puVar15 + 9;
  puVar7 = local_9c;
  if ((uint)(iVar8 - iVar5) <= uVar12) goto LAB_11516948;
  goto LAB_11516857;
}



/* --- CItemBoxGroupInfo::GetManagers_11923df0 @ 11923df0 --- */
// [RE-AUTO c3]
// id: CItemBoxGroupInfo::GetManagers
// strings:
//   ""CItemBoxGroupInfo""
//   ""CItemBoxGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CItemBoxGroupInfo::GetManagers
   strings:
     ""CItemBoxGroupInfo""
     ""CItemBoxGroupInfo::GetManagers"" */

void CItemBoxGroupInfo__GetManagers_11923df0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1053b200(0,"CItemBoxGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc0b10;
      if ((DAT_123be8a0 & 1) == 0) {
        DAT_123be8a0 = DAT_123be8a0 | 1;
        FUN_102500e0("CItemBoxGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fea0);
      }
      if (((*DAT_123be884 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CItemBoxGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123be64c & 1) == 0)) {
        DAT_123be618 = 0;
        DAT_123be628 = 0;
        DAT_123be62c = 0;
        _DAT_123be630 = 0;
        DAT_123be634 = 0;
        DAT_123be64c = DAT_123be64c | 1;
        _DAT_123be614 = &PTR_FUN_11dc0c24;
        DAT_123be638 = _DAT_11de9ae0;
        DAT_123be63c = _UNK_11de9ae4;
        uRam123be640 = _UNK_11de9ae8;
        DAT_123be644 = _UNK_11de9aec;
        DAT_123be648 = 1;
        DAT_123be61c = iVar3;
        _DAT_123be620 = iVar3;
        _DAT_123be624 = iVar3;
        FUN_11a8911f(&LAB_11cb1b30);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a14510();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



