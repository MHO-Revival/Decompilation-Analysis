// ===== class CSRLItemPoolInfo  (3 recovered methods) =====

/* --- CSRLItemPoolInfo::GetManagers @ 1153b340 --- */
// [RE-AUTO c3]
// id: CSRLItemPoolInfo::GetManagers
// strings:
//   ""CSRLItemPoolInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemPoolInfo::GetManagers
   strings:
     ""CSRLItemPoolInfo::GetManagers"" */

undefined * CSRLItemPoolInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c90c;
  if (param_3 == 0) {
    if ((DAT_122dec60 & 1) == 0) {
      DAT_122dec60 = DAT_122dec60 | 1;
      FUN_102500e0("CSRLItemPoolInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1870);
    }
    if ((undefined *)*DAT_122dec44 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec44;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122deda8 & 1) == 0) {
      DAT_122deda8 = DAT_122deda8 | 1;
      FUN_1153c160();
      FUN_11a8911f(&LAB_11ca1690);
    }
    puVar1 = &DAT_122ded70;
  }
  return puVar1;
}



/* --- CSRLItemPoolInfo::GetManagers_1153e790 @ 1153e790 --- */
// [RE-AUTO c3]
// id: CSRLItemPoolInfo::GetManagers
// strings:
//   ""CSRLItemPoolInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLItemPoolInfo::GetManagers
   strings:
     ""CSRLItemPoolInfo::GetManagers"" */

undefined4 CSRLItemPoolInfo__GetManagers_1153e790(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dec60 & 1) == 0) {
      DAT_122dec60 = DAT_122dec60 | 1;
      FUN_102500e0("CSRLItemPoolInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1870);
    }
    return *DAT_122dec44;
  }
  return 0;
}



/* --- CSRLItemPoolInfo::GetManagers_115411b0 @ 115411b0 --- */
// [RE-AUTO c3]
// id: CSRLItemPoolInfo::GetManagers
// calls: CSRLItemBoxDescriptionInfo::GetManagers, CSRLItemLotteryInfo::GetManagers, memcpy, rand
// strings:
//   ""CSRLItemBoxDescriptionInfo""
//   ""CSRLItemLotteryInfo""
//   ""CSRLItemPoolInfo::GetManagers""
//   ""CSRLItemPoolInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSRLItemPoolInfo::GetManagers
   calls: CSRLItemBoxDescriptionInfo::GetManagers, CSRLItemLotteryInfo::GetManagers, memcpy, rand
   strings:
     ""CSRLItemBoxDescriptionInfo""
     ""CSRLItemLotteryInfo""
     ""CSRLItemPoolInfo::GetManagers""
     ""CSRLItemPoolInfo"" */

void __thiscall CSRLItemPoolInfo__GetManagers_115411b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  size_t _Size;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *local_5c;
  int local_40;
  int *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined **local_30;
  uint local_2c;
  int local_28 [4];
  int local_18;
  int iStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  aiStack_c[1] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = CSRLItemBoxDescriptionInfo__GetManagers(0,"CSRLItemBoxDescriptionInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar12 = *(int *)(iVar1 + 0x28), iVar12 != 0)))) &&
     ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar12) * 4);
    if ((((iVar1 != 0) &&
         ((*(int *)(iVar1 + (iVar2 % iVar12) * 4) != 0 &&
          ((iVar1 = CSRLItemLotteryInfo__GetManagers(0,"CSRLItemLotteryInfo",0), param_2 != 0 ||
           (*(int *)(iVar1 + 0x30) == 0)))))) && (iVar12 = *(int *)(iVar1 + 0x28), iVar12 != 0)) &&
       ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24)))))
    {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar12) * 4);
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + (iVar2 % iVar12) * 4) != 0 &&
          (iVar1 = FUN_1153ec70(param_2), iVar1 != 0)))) {
        FUN_1153ebd0(param_2);
        piVar3 = (int *)FUN_1180e530();
        FUN_10463080(piVar3[1] - *piVar3 >> 2,&local_35);
        pvVar4 = (void *)*piVar3;
        piVar5 = local_5c;
        if ((void *)piVar3[1] != pvVar4) {
          _Size = piVar3[1] - (int)pvVar4;
          pvVar4 = memcpy(local_5c,pvVar4,_Size);
          piVar5 = (int *)(_Size + (int)pvVar4);
        }
        iVar1 = 0;
        uVar7 = (int)piVar5 - (int)local_5c >> 2;
        uVar6 = 0;
        if (uVar7 != 0) {
          if (7 < uVar7) {
            iVar8 = 0;
            iVar9 = 0;
            iVar10 = 0;
            iVar11 = 0;
            iVar1 = 0;
            iVar12 = 0;
            iVar2 = 0;
            iVar13 = 0;
            piVar5 = local_5c;
            do {
              uVar6 = uVar6 + 8;
              iVar8 = iVar8 + *piVar5;
              iVar9 = iVar9 + piVar5[1];
              iVar10 = iVar10 + piVar5[2];
              iVar11 = iVar11 + piVar5[3];
              iVar1 = iVar1 + piVar5[4];
              iVar12 = iVar12 + piVar5[5];
              iVar2 = iVar2 + piVar5[6];
              iVar13 = iVar13 + piVar5[7];
              piVar5 = piVar5 + 8;
            } while (uVar6 != uVar7 - (uVar7 & 7));
            iVar1 = iVar8 + iVar1 + iVar10 + iVar2 + iVar9 + iVar12 + iVar11 + iVar13;
          }
          for (; uVar6 != uVar7; uVar6 = uVar6 + 1) {
            iVar1 = iVar1 + local_5c[uVar6];
          }
          if (iVar1 == 8) {
            FUN_1153ec20(param_2);
            iVar1 = 0;
            local_2c = 0;
            piVar5 = local_5c;
            if (uVar7 != 0) {
              do {
                local_34 = piVar5;
                local_40 = 0;
                if (*local_34 != 0) {
                  local_3c = param_1 + iVar1 * 4 + 2;
                  do {
                    local_30 = &PTR_FUN_11d2c90c;
                    if ((DAT_122dec60 & 1) == 0) {
                      DAT_122dec60 = DAT_122dec60 | 1;
                      FUN_102500e0("CSRLItemPoolInfo::GetManagers");
                      FUN_11a8911f(&LAB_11ca1870);
                    }
                    if (((*DAT_122dec44 == 0) &&
                        (iVar12 = FUN_11679e10(&local_30,"CSRLItemPoolInfo",0), iVar12 == 0)) &&
                       ((DAT_122deda8 & 1) == 0)) {
                      DAT_122ded74 = 0;
                      DAT_122ded84 = 0;
                      uRam122ded88 = 0;
                      _DAT_122ded8c = 0;
                      DAT_122ded90 = 0;
                      DAT_122deda8 = DAT_122deda8 | 1;
                      _DAT_122ded70 = &PTR_FUN_11d2c948;
                      DAT_122ded94 = _DAT_11de9ae0;
                      DAT_122ded98 = _UNK_11de9ae4;
                      uRam122ded9c = _UNK_11de9ae8;
                      DAT_122deda0 = _UNK_11de9aec;
                      DAT_122deda4 = 1;
                      DAT_122ded78 = iVar12;
                      _DAT_122ded7c = iVar12;
                      _DAT_122ded80 = iVar12;
                      FUN_11a8911f(&LAB_11ca1690);
                    }
                    local_30 = &PTR_FUN_11da54a8;
                    piVar5 = (int *)FUN_11810ab0(local_2c);
                    iVar12 = *piVar5;
                    while( true ) {
                      iVar2 = piVar5[1];
                      uVar6 = rand();
                      uVar6 = uVar6 % (uint)(iVar2 - iVar12 >> 3);
                      iVar12 = *piVar5;
                      iVar8 = 0;
                      iVar2 = *(int *)(iVar12 + uVar6 * 8);
                      iVar13 = *(int *)(iVar12 + 4 + uVar6 * 8);
                      if (iVar1 == 0) break;
                      piVar3 = param_1 + 1;
                      while (*piVar3 != iVar13) {
                        iVar8 = iVar8 + 1;
                        piVar3 = piVar3 + 4;
                        if (iVar8 == iVar1) goto LAB_115414f1;
                      }
                    }
LAB_115414f1:
                    local_3c[-1] = iVar13;
                    *local_3c = iVar2;
                    iVar12 = FUN_1180eba0(local_2c);
                    iVar1 = iVar1 + 1;
                    local_3c[1] = iVar12;
                    local_40 = local_40 + 1;
                    local_3c = local_3c + 4;
                  } while (local_40 != *local_34);
                }
                local_2c = local_2c + 1;
                local_34 = local_34 + 1;
                piVar5 = local_34;
              } while (local_2c != uVar7);
            }
            iVar1 = 8;
            local_28[0] = _DAT_11de9b30;
            local_28[1] = _UNK_11de9b34;
            local_28[2] = _UNK_11de9b38;
            local_28[3] = _UNK_11de9b3c;
            local_18 = _DAT_11d2cb50 + _DAT_11de9b30;
            iStack_14 = _UNK_11d2cb54 + _UNK_11de9b34;
            iStack_10 = _UNK_11d2cb58 + _UNK_11de9b38;
            aiStack_c[0] = _UNK_11d2cb5c + _UNK_11de9b3c;
            piVar5 = aiStack_c;
            do {
              iVar13 = rand();
              iVar12 = *piVar5;
              iVar2 = local_28[iVar13 % iVar1];
              *piVar5 = iVar2;
              *param_1 = iVar2;
              local_28[iVar13 % iVar1] = iVar12;
              iVar1 = iVar1 + -1;
              param_1 = param_1 + 4;
              piVar5 = piVar5 + -1;
            } while (iVar1 != 0);
          }
        }
        if (local_5c != (int *)0x0) {
          FUN_10c3d5d0(local_5c);
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



