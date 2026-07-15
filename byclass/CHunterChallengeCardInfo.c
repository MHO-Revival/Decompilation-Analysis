// ===== class CHunterChallengeCardInfo  (5 recovered methods) =====

/* --- CHunterChallengeCardInfo::GetManagers @ 108b9fc0 --- */
// [RE-AUTO c3]
// id: CHunterChallengeCardInfo::GetManagers
// strings:
//   ""CHunterChallengeCardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterChallengeCardInfo::GetManagers
   strings:
     ""CHunterChallengeCardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterChallengeCardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfb7c & 1) == 0) {
    DAT_123bfb7c = DAT_123bfb7c | 1;
    _DAT_123bfb74 = &DAT_123bfb64;
    DAT_123bfb78 = &DAT_123bfb64;
    DAT_123bfb64 = 0;
    FUN_100d83d0("CHunterChallengeCardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c752a0);
  }
  return DAT_123bfb60;
}



/* --- CHunterChallengeCardInfo::GetManagers_114dfc90 @ 114dfc90 --- */
// [RE-AUTO c3]
// id: CHunterChallengeCardInfo::GetManagers
// strings:
//   ""CHunterChallengeCardInfo""
//   ""CHunterChallengeCardInfo::GetManagers""
//   ""CHunterAbilityCardInfo::GetManagers""
//   ""CHunterAbilityCardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterChallengeCardInfo::GetManagers
   strings:
     ""CHunterChallengeCardInfo""
     ""CHunterChallengeCardInfo::GetManagers""
     ""CHunterAbilityCardInfo::GetManagers""
     ""CHunterAbilityCardInfo"" */

int CHunterChallengeCardInfo__GetManagers_114dfc90(undefined **param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_10;
  int local_c [2];
  
  piVar2 = (int *)FUN_108c60b0(0,"CHunterChallengeCardInfo",0);
  local_10 = (**(code **)(*piVar2 + 0x28))();
  piVar2 = (int *)param_1;
  iVar6 = 0;
  if (0 < local_10) {
    do {
      param_1 = &PTR_FUN_11dd58b8;
      if ((DAT_123bfb7c & 1) == 0) {
        DAT_123bfb7c = DAT_123bfb7c | 1;
        FUN_102500e0("CHunterChallengeCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c752a0);
      }
      puVar3 = (undefined4 *)*DAT_123bfb60;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&param_1,"CHunterChallengeCardInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bfb2c & 1) == 0) {
          DAT_123bfaf8 = 0;
          DAT_123bfb08 = 0;
          DAT_123bfb0c = 0;
          _DAT_123bfb10 = 0;
          DAT_123bfb14 = 0;
          DAT_123bfb2c = DAT_123bfb2c | 1;
          DAT_123bfaf4 = &PTR_FUN_11dd5afc;
          DAT_123bfb18 = _DAT_11de9ae0;
          DAT_123bfb1c = _UNK_11de9ae4;
          uRam123bfb20 = _UNK_11de9ae8;
          DAT_123bfb24 = _UNK_11de9aec;
          DAT_123bfb28 = 1;
          DAT_123bfafc = puVar3;
          _DAT_123bfb00 = puVar3;
          _DAT_123bfb04 = puVar3;
          FUN_11a8911f(&LAB_11c9f790);
        }
        puVar3 = &DAT_123bfaf4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar6) && (iVar6 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar3[5] + iVar6 * 4), iVar1 != 0)) &&
         (*(char *)(iVar1 + 0x18) != '\0')) {
        iVar1 = *(int *)(iVar1 + 0x10);
        iVar4 = FUN_114dfad0(iVar1);
        if (iVar4 == 0) {
          piVar5 = (int *)piVar2[1];
          local_c[0] = iVar1;
          if (piVar5 == (int *)piVar2[2]) {
            FUN_10109320(piVar5,local_c,(int)&param_1 + 3,1,1);
          }
          else {
            *piVar5 = iVar1;
            piVar2[1] = piVar2[1] + 4;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_10);
  }
  iVar6 = 0;
  param_1 = &PTR_FUN_11dd58e0;
  if ((DAT_123c7a9c & 1) == 0) {
    DAT_123c7a9c = DAT_123c7a9c | 1;
    FUN_102500e0("CHunterAbilityCardInfo::GetManagers");
    FUN_11a8911f(&LAB_11c75330);
  }
  piVar5 = (int *)*DAT_123c7aa0;
  if ((piVar5 == (int *)0x0) &&
     (piVar5 = (int *)FUN_11679e10(&param_1,"CHunterAbilityCardInfo",0), piVar5 == (int *)0x0)) {
    if ((DAT_123c7bc4 & 1) == 0) {
      DAT_123c7bcc = 0;
      DAT_123c7bdc = 0;
      DAT_123c7be0 = 0;
      _DAT_123c7be4 = 0;
      DAT_123c7be8 = 0;
      DAT_123c7bc4 = DAT_123c7bc4 | 1;
      DAT_123c7bd0 = (undefined4 *)0x0;
      _DAT_123c7bd4 = (undefined4 *)0x0;
      _DAT_123c7bd8 = (undefined4 *)0x0;
      DAT_123c7bc8 = &PTR_FUN_11dd5ab0;
      DAT_123c7bec = _DAT_11de9ae0;
      DAT_123c7bf0 = _UNK_11de9ae4;
      uRam123c7bf4 = _UNK_11de9ae8;
      DAT_123c7bf8 = _UNK_11de9aec;
      DAT_123c7bfc = 1;
      FUN_11a8911f(&LAB_11c9f6d0);
    }
    piVar5 = (int *)&DAT_123c7bc8;
  }
  param_1 = &PTR_FUN_11da54a8;
  local_c[0] = (**(code **)(*piVar5 + 0x28))();
  if (0 < local_c[0]) {
    do {
      param_1 = &PTR_FUN_11dd58e0;
      if ((DAT_123c7a9c & 1) == 0) {
        DAT_123c7a9c = DAT_123c7a9c | 1;
        FUN_102500e0("CHunterAbilityCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c75330);
      }
      puVar3 = (undefined4 *)*DAT_123c7aa0;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&param_1,"CHunterAbilityCardInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123c7bc4 & 1) == 0) {
          DAT_123c7bcc = 0;
          DAT_123c7bdc = 0;
          DAT_123c7be0 = 0;
          _DAT_123c7be4 = 0;
          DAT_123c7be8 = 0;
          DAT_123c7bc4 = DAT_123c7bc4 | 1;
          DAT_123c7bc8 = &PTR_FUN_11dd5ab0;
          DAT_123c7bec = _DAT_11de9ae0;
          DAT_123c7bf0 = _UNK_11de9ae4;
          uRam123c7bf4 = _UNK_11de9ae8;
          DAT_123c7bf8 = _UNK_11de9aec;
          DAT_123c7bfc = 1;
          DAT_123c7bd0 = puVar3;
          _DAT_123c7bd4 = puVar3;
          _DAT_123c7bd8 = puVar3;
          FUN_11a8911f(&LAB_11c9f6d0);
        }
        puVar3 = &DAT_123c7bc8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar6) && (iVar6 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar3[5] + iVar6 * 4), iVar1 != 0)) &&
         (*(char *)(iVar1 + 0x18) != '\0')) {
        iVar1 = *(int *)(iVar1 + 0x10);
        iVar4 = FUN_114dfad0(iVar1);
        if (iVar4 == 0) {
          piVar5 = (int *)piVar2[1];
          local_10 = iVar1;
          if (piVar5 == (int *)piVar2[2]) {
            FUN_10109320(piVar5,&local_10,(int)&param_1 + 3,1,1);
          }
          else {
            *piVar5 = iVar1;
            piVar2[1] = piVar2[1] + 4;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_c[0]);
  }
  return piVar2[1] - *piVar2 >> 2;
}



/* --- CHunterChallengeCardInfo::GetManagers_114e1330 @ 114e1330 --- */
// [RE-AUTO c3]
// id: CHunterChallengeCardInfo::GetManagers
// calls: __alloca_probe, printf, clock
// strings:
//   ""Size of CHunterStarChallengeCard is: %d, CHunterStarCardTargetCard is: %d\n""
//   ""CHunterChallengeCardInfo""
//   ""Start to test the card pool...\n""
//   ""Time spent using the pool: %d milliseconds\n""
//   ""Start to test the card pool with static data info getted...\n""
//   ""CHunterChallengeCardInfo::GetManagers""
//   ""Time spent using the pool with static data info getted: %d milliseconds\n""
//   ""Start to test the card pool without destroying...\n""
//   ""Time spent using the pool without destroying: %d milliseconds\n""
//   ""Start to test the normal new and delete calls...\n""

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterChallengeCardInfo::GetManagers
   calls: __alloca_probe, printf, clock
   strings:
     ""Size of CHunterStarChallengeCard is: %d, CHunterStarCardTargetCard is: %d\n""
     ""CHunterChallengeCardInfo""
     ""Start to test the card pool...\n""
     ""Time spent using the pool: %d milliseconds\n""
     ""Start to test the card pool with static data info getted...\n""
     ""CHunterChallengeCardInfo::GetManagers""
     ""Time spent using the pool with static data info getted: %d milliseconds\n""
     ""Start to test the card pool without destroying...\n""
     ""Time spent using the pool without destroying: %d milliseconds\n""
     ""Start to test the normal new and delete calls...\n"" */

void __thiscall
CHunterChallengeCardInfo__GetManagers_114e1330(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  clock_t cVar3;
  clock_t cVar4;
  undefined ***pppuVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined **ppuVar9;
  code *pcVar10;
  undefined **local_9c54;
  undefined **local_9c4c;
  int aiStack_9c48 [10000];
  uint local_8;
  
  pcVar10 = printf_exref;
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(DAT_122df078 + 0xe4) = 1;
  printf("Size of CHunterStarChallengeCard is: %d, CHunterStarCardTargetCard is: %d\n",0x3c,0x28);
  iVar1 = FUN_108c60b0(0,"CHunterChallengeCardInfo",0);
  iVar7 = *(int *)(iVar1 + 0x28);
  if (((iVar7 != 0) && (iVar2 = 0x2711 - *(int *)(iVar1 + 0x30), -1 < iVar2)) &&
     (iVar2 < *(int *)(iVar1 + 0x24))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar7) * 4);
    if (((iVar1 != 0) && (iVar7 = *(int *)(iVar1 + (iVar2 % iVar7) * 4), iVar7 != 0)) &&
       (*(char *)(iVar7 + 0x18) != '\0')) {
      printf("\n\n");
      printf("Start to test the card pool...\n");
      cVar3 = clock();
      if (0 < (int)param_2) {
        local_9c4c = param_2;
        do {
          iVar1 = 0;
          do {
            iVar2 = DAT_122df078;
            puVar6 = *(undefined4 **)(DAT_122df078 + 8);
            if (puVar6 == (undefined4 *)0x0) {
              if (*(uint *)(DAT_122df078 + 0x10) <= *(uint *)(DAT_122df078 + 0xc)) {
                FUN_114e19f0();
              }
              puVar6 = (undefined4 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0xc) * 0x3c);
              *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
            }
            else {
              *(undefined4 *)(DAT_122df078 + 8) = *puVar6;
            }
            if (puVar6 != (undefined4 *)0x0) {
              iVar2 = FUN_1161d820(param_1,iVar7);
              aiStack_9c48[iVar1] = iVar2;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 10000);
          iVar1 = 0;
          do {
            iVar2 = DAT_122df078;
            puVar6 = (undefined4 *)aiStack_9c48[iVar1];
            (**(code **)*puVar6)(0);
            iVar1 = iVar1 + 1;
            *puVar6 = *(undefined4 *)(iVar2 + 8);
            *(undefined4 **)(iVar2 + 8) = puVar6;
          } while (iVar1 < 10000);
          local_9c4c = (undefined **)((int)local_9c4c + -1);
        } while (local_9c4c != (undefined **)0x0);
        local_9c4c = (undefined **)0x0;
        pcVar10 = printf_exref;
      }
      pcVar8 = clock_exref;
      cVar4 = clock();
      (*pcVar10)("Time spent using the pool: %d milliseconds\n",cVar4 - cVar3);
      (*pcVar10)("Start to test the card pool with static data info getted...\n");
      cVar3 = clock();
      if (0 < (int)param_2) {
        local_9c54 = param_2;
        do {
          iVar7 = 0;
          do {
            local_9c4c = &PTR_FUN_11dd58b8;
            if ((DAT_123bfb7c & 1) == 0) {
              DAT_123bfb7c = DAT_123bfb7c | 1;
              FUN_102500e0("CHunterChallengeCardInfo::GetManagers");
              FUN_11a8911f(&LAB_11c752a0);
            }
            pppuVar5 = (undefined ***)*DAT_123bfb60;
            if ((pppuVar5 == (undefined ***)0x0) &&
               (pppuVar5 = (undefined ***)FUN_11679e10(&local_9c4c,"CHunterChallengeCardInfo",0),
               pppuVar5 == (undefined ***)0x0)) {
              if ((DAT_123bfb2c & 1) == 0) {
                DAT_123bfaf8 = 0;
                DAT_123bfb08 = 0;
                DAT_123bfb0c = 0;
                _DAT_123bfb10 = 0;
                DAT_123bfb14 = 0;
                DAT_123bfb2c = DAT_123bfb2c | 1;
                DAT_123bfaf4 = &PTR_FUN_11dd5afc;
                DAT_123bfb18 = _DAT_11de9ae0;
                DAT_123bfb1c = _UNK_11de9ae4;
                uRam123bfb20 = _UNK_11de9ae8;
                DAT_123bfb24 = _UNK_11de9aec;
                DAT_123bfb28 = 1;
                DAT_123bfafc = pppuVar5;
                _DAT_123bfb00 = pppuVar5;
                _DAT_123bfb04 = pppuVar5;
                FUN_11a8911f(&LAB_11c9f790);
              }
              pppuVar5 = &DAT_123bfaf4;
            }
            iVar1 = DAT_122df078;
            local_9c4c = &PTR_FUN_11da54a8;
            ppuVar9 = pppuVar5[10];
            if (((ppuVar9 != (undefined **)0x0) && (iVar2 = 0x2711 - (int)pppuVar5[0xc], -1 < iVar2)
                ) && (iVar2 < (int)pppuVar5[9])) {
              if (((pppuVar5[8][iVar2 / (int)ppuVar9] != (undefined *)0x0) &&
                  (iVar2 = *(int *)(pppuVar5[8][iVar2 / (int)ppuVar9] + (iVar2 % (int)ppuVar9) * 4),
                  iVar2 != 0)) && (*(char *)(iVar2 + 0x18) != '\0')) {
                puVar6 = *(undefined4 **)(DAT_122df078 + 8);
                if (puVar6 == (undefined4 *)0x0) {
                  if (*(uint *)(DAT_122df078 + 0x10) <= *(uint *)(DAT_122df078 + 0xc)) {
                    FUN_114e19f0();
                  }
                  puVar6 = (undefined4 *)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc) * 0x3c);
                  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
                }
                else {
                  *(undefined4 *)(DAT_122df078 + 8) = *puVar6;
                }
                if (puVar6 != (undefined4 *)0x0) {
                  iVar1 = FUN_1161d820(param_1,iVar2);
                  aiStack_9c48[iVar7] = iVar1;
                }
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 10000);
          iVar7 = 0;
          do {
            iVar1 = DAT_122df078;
            puVar6 = (undefined4 *)aiStack_9c48[iVar7];
            (**(code **)*puVar6)(0);
            iVar7 = iVar7 + 1;
            *puVar6 = *(undefined4 *)(iVar1 + 8);
            *(undefined4 **)(iVar1 + 8) = puVar6;
          } while (iVar7 < 10000);
          local_9c54 = (undefined **)((int)local_9c54 + -1);
          pcVar8 = clock_exref;
          pcVar10 = printf_exref;
        } while (local_9c54 != (undefined **)0x0);
      }
      iVar7 = (*pcVar8)();
      (*pcVar10)("Time spent using the pool with static data info getted: %d milliseconds\n",
                 iVar7 - cVar3);
      (*pcVar10)("Start to test the card pool without destroying...\n");
      iVar7 = (*pcVar8)();
      ppuVar9 = param_2;
      if (0 < (int)param_2) {
        do {
          iVar1 = 0;
          do {
            iVar2 = FUN_114e2ef0(param_1,0x2711);
            aiStack_9c48[iVar1] = iVar2;
            iVar1 = iVar1 + 1;
          } while (iVar1 < 10000);
          iVar1 = 0;
          do {
            FUN_114e30e0(aiStack_9c48[iVar1]);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 10000);
          ppuVar9 = (undefined **)((int)ppuVar9 + -1);
          pcVar10 = printf_exref;
        } while (ppuVar9 != (undefined **)0x0);
      }
      cVar3 = clock();
      (*pcVar10)("Time spent using the pool without destroying: %d milliseconds\n",cVar3 - iVar7);
      (*pcVar10)("Start to test the normal new and delete calls...\n");
      cVar3 = clock();
      if (0 < (int)param_2) {
        do {
          iVar7 = 0;
          do {
            local_9c4c = &PTR_FUN_11dd58b8;
            if ((DAT_123bfb7c & 1) == 0) {
              DAT_123bfb7c = DAT_123bfb7c | 1;
              _DAT_123bfb74 = &DAT_123bfb64;
              DAT_123bfb78 = &DAT_123bfb64;
              DAT_123bfb64 = 0;
              FUN_100d9260("CHunterChallengeCardInfo::GetManagers","");
              FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
              DAT_123bfb60 = (undefined4 *)FUN_100dfd90(DAT_123bfb78);
              if (DAT_123bfb60 == (undefined4 *)0x0) {
                DAT_123bfb60 = (undefined4 *)FUN_100dde50(4);
                *DAT_123bfb60 = 0;
                FUN_100dfdc0(DAT_123bfb78,DAT_123bfb60);
              }
              FUN_11a8911f(&LAB_11c752a0);
            }
            pppuVar5 = (undefined ***)*DAT_123bfb60;
            if ((pppuVar5 == (undefined ***)0x0) &&
               (pppuVar5 = (undefined ***)FUN_11679e10(&local_9c4c,"CHunterChallengeCardInfo",0),
               pppuVar5 == (undefined ***)0x0)) {
              if ((DAT_123bfb2c & 1) == 0) {
                DAT_123bfaf8 = 0;
                DAT_123bfb08 = 0;
                DAT_123bfb0c = 0;
                _DAT_123bfb10 = 0;
                DAT_123bfb14 = 0;
                DAT_123bfb2c = DAT_123bfb2c | 1;
                DAT_123bfaf4 = &PTR_FUN_11dd5afc;
                DAT_123bfb18 = _DAT_11de9ae0;
                DAT_123bfb1c = _UNK_11de9ae4;
                uRam123bfb20 = _UNK_11de9ae8;
                DAT_123bfb24 = _UNK_11de9aec;
                DAT_123bfb28 = 1;
                DAT_123bfafc = pppuVar5;
                _DAT_123bfb00 = pppuVar5;
                _DAT_123bfb04 = pppuVar5;
                FUN_11a8911f(&LAB_11c9f790);
              }
              pppuVar5 = &DAT_123bfaf4;
            }
            local_9c4c = &PTR_FUN_11da54a8;
            ppuVar9 = pppuVar5[10];
            if (((ppuVar9 != (undefined **)0x0) && (iVar1 = 0x2711 - (int)pppuVar5[0xc], -1 < iVar1)
                ) && (iVar1 < (int)pppuVar5[9])) {
              if (((pppuVar5[8][iVar1 / (int)ppuVar9] != (undefined *)0x0) &&
                  (iVar1 = *(int *)(pppuVar5[8][iVar1 / (int)ppuVar9] + (iVar1 % (int)ppuVar9) * 4),
                  iVar1 != 0)) && (*(char *)(iVar1 + 0x18) != '\0')) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x3c);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 10000);
          iVar7 = 0;
          do {
            if ((undefined4 *)aiStack_9c48[iVar7] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)aiStack_9c48[iVar7])(1);
              aiStack_9c48[iVar7] = 0;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 10000);
          param_2 = (undefined **)((int)param_2 + -1);
          pcVar10 = printf_exref;
        } while (param_2 != (undefined **)0x0);
      }
      cVar4 = clock();
      (*pcVar10)("Time spent using normal new/delete calls: %d milliseconds\n",cVar4 - cVar3);
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CHunterChallengeCardInfo::GetManagers_117f3080 @ 117f3080 --- */
// [RE-AUTO c3]
// id: CHunterChallengeCardInfo::GetManagers
// strings:
//   ""CHunterChallengeCardInfo""
//   ""CHunterChallengeCardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterChallengeCardInfo::GetManagers
   strings:
     ""CHunterChallengeCardInfo""
     ""CHunterChallengeCardInfo::GetManagers"" */

void CHunterChallengeCardInfo__GetManagers_117f3080(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined **local_8;
  
  piVar2 = (int *)FUN_108c60b0(0,"CHunterChallengeCardInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dd58b8;
      if ((DAT_123bfb7c & 1) == 0) {
        DAT_123bfb7c = DAT_123bfb7c | 1;
        FUN_102500e0("CHunterChallengeCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c752a0);
      }
      puVar4 = (undefined4 *)*DAT_123bfb60;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CHunterChallengeCardInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bfb2c & 1) == 0) {
          DAT_123bfaf8 = 0;
          DAT_123bfb08 = 0;
          DAT_123bfb0c = 0;
          _DAT_123bfb10 = 0;
          DAT_123bfb14 = 0;
          DAT_123bfb2c = DAT_123bfb2c | 1;
          DAT_123bfaf4 = &PTR_FUN_11dd5afc;
          DAT_123bfb18 = _DAT_11de9ae0;
          DAT_123bfb1c = _UNK_11de9ae4;
          uRam123bfb20 = _UNK_11de9ae8;
          DAT_123bfb24 = _UNK_11de9aec;
          DAT_123bfb28 = 1;
          DAT_123bfafc = puVar4;
          _DAT_123bfb00 = puVar4;
          _DAT_123bfb04 = puVar4;
          FUN_11a8911f(&LAB_11cab700);
        }
        puVar4 = &DAT_123bfaf4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (iVar1 = *(int *)(puVar4[5] + iVar6 * 4), iVar1 != 0)) {
        CHunterStarLevelInfo__GetManagers_118ac740(param_1);
        if (*(int *)(iVar1 + 0x1c) == 1) {
          local_1c = *(undefined4 *)(iVar1 + 0x10);
          puVar4 = &local_1c;
          puVar5 = local_2c;
          local_18 = iVar1;
        }
        else {
          if (*(int *)(iVar1 + 0x1c) != 4) goto LAB_117f31dc;
          local_14 = *(undefined4 *)(iVar1 + 0x10);
          puVar4 = &local_14;
          puVar5 = local_24;
          local_10 = iVar1;
        }
        FUN_117f5b70(puVar5,puVar4);
      }
LAB_117f31dc:
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



/* --- CHunterChallengeCardInfo::GetManagers_11a88ba0 @ 11a88ba0 --- */
// [RE-AUTO c3]
// id: CHunterChallengeCardInfo::GetManagers
// strings:
//   ""CHunterChallengeCardInfo""
//   ""CHunterAbilityCardInfo""
//   ""CHunterRecordCardInfo""
//   ""CHunterChallengeCardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHunterChallengeCardInfo::GetManagers
   strings:
     ""CHunterChallengeCardInfo""
     ""CHunterAbilityCardInfo""
     ""CHunterRecordCardInfo""
     ""CHunterChallengeCardInfo::GetManagers"" */

undefined1 CHunterChallengeCardInfo__GetManagers_11a88ba0(int param_1,int param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_10 = FUN_117f69f0();
  local_c = 0;
  if (local_10 == 1) {
    piVar2 = (int *)FUN_108c60b0(0,"CHunterChallengeCardInfo",0);
  }
  else if (local_10 == 2) {
    piVar2 = (int *)FUN_108c64c0(0,"CHunterAbilityCardInfo",0);
  }
  else {
    if (local_10 != 3) goto LAB_11a88c13;
    piVar2 = (int *)FUN_108c6620(0,"CHunterRecordCardInfo",0);
  }
  local_c = (**(code **)(*piVar2 + 0x28))();
LAB_11a88c13:
  iVar8 = 0;
  iVar6 = local_10;
  iVar7 = local_c;
  if (local_c < 1) {
    return 0;
  }
  do {
    if (iVar6 == 1) {
      local_14 = &PTR_FUN_11dd58b8;
      if ((DAT_123bfb7c & 1) == 0) {
        DAT_123bfb7c = DAT_123bfb7c | 1;
        FUN_102500e0("CHunterChallengeCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c752a0);
      }
      puVar3 = (undefined4 *)*DAT_123bfb60;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_14,"CHunterChallengeCardInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bfb2c & 1) == 0) {
          DAT_123bfb2c = DAT_123bfb2c | 1;
          FUN_108c7970();
          FUN_11a8911f(&LAB_11cb7df0);
        }
        puVar3 = &DAT_123bfaf4;
      }
LAB_11a88ce6:
      if ((iVar8 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar8)) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        ppuVar9 = *(undefined ***)(puVar3[5] + iVar8 * 4);
      }
      iVar6 = local_10;
      iVar7 = local_c;
      local_14 = ppuVar9;
      if ((ppuVar9 != (undefined **)0x0) && (ppuVar9[0x10] == *(undefined **)(param_1 + 0x40))) {
        iVar4 = FUN_117f69f0();
        iVar5 = FUN_117f69f0();
        iVar6 = local_10;
        iVar7 = local_c;
        if (((iVar4 == iVar5) && (ppuVar9[7] == *(undefined **)(param_1 + 0x1c))) &&
           ((param_3 == '\0' ||
            (cVar1 = FUN_108496a0(), iVar6 = local_10, iVar7 = local_c, cVar1 != '\0')))) {
          piVar2 = *(int **)(param_2 + 4);
          if (piVar2 == *(int **)(param_2 + 8)) {
            FUN_117f4270(piVar2,&local_14,&local_5,1,1);
            local_5 = 1;
            iVar6 = local_10;
            iVar7 = local_c;
          }
          else {
            *piVar2 = (int)ppuVar9;
            *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
            local_5 = 1;
            iVar6 = local_10;
            iVar7 = local_c;
          }
        }
      }
    }
    else {
      if (iVar6 == 2) {
        puVar3 = (undefined4 *)FUN_108c64c0(0,"CHunterAbilityCardInfo",0);
        goto LAB_11a88ce6;
      }
      if (iVar6 == 3) {
        puVar3 = (undefined4 *)FUN_108c6620(0,"CHunterRecordCardInfo",0);
        goto LAB_11a88ce6;
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar7 <= iVar8) {
      return local_5;
    }
  } while( true );
}



