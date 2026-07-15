// ===== class CSRLMaterialLotteryInfo  (3 recovered methods) =====

/* --- CSRLMaterialLotteryInfo::GetManagers @ 1153b3e0 --- */
// [RE-AUTO c3]
// id: CSRLMaterialLotteryInfo::GetManagers
// strings:
//   ""CSRLMaterialLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMaterialLotteryInfo::GetManagers
   strings:
     ""CSRLMaterialLotteryInfo::GetManagers"" */

undefined * CSRLMaterialLotteryInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c994;
  if (param_3 == 0) {
    if ((DAT_122dec80 & 1) == 0) {
      DAT_122dec80 = DAT_122dec80 | 1;
      FUN_102500e0("CSRLMaterialLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca18a0);
    }
    if ((undefined *)*DAT_122dec64 != (undefined *)0x0) {
      return (undefined *)*DAT_122dec64;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122dede4 & 1) == 0) {
      DAT_122dede4 = DAT_122dede4 | 1;
      FUN_1153c1c0();
      FUN_11a8911f(&LAB_11ca16f0);
    }
    puVar1 = &DAT_122dedac;
  }
  return puVar1;
}



/* --- CSRLMaterialLotteryInfo::GetManagers_1153cb20 @ 1153cb20 --- */
// [RE-AUTO c3]
// id: CSRLMaterialLotteryInfo::GetManagers
// calls: CSRLItemBoxDescriptionInfo::GetManagers, memcpy
// strings:
//   ""CSRLItemBoxDescriptionInfo""
//   ""CSRLMaterialLotteryInfo::GetManagers""
//   ""CSRLMaterialLotteryInfo""
//   ""CNormalItemInfo::GetManagers""
//   ""CNormalItemInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSRLMaterialLotteryInfo::GetManagers
   calls: CSRLItemBoxDescriptionInfo::GetManagers, memcpy
   strings:
     ""CSRLItemBoxDescriptionInfo""
     ""CSRLMaterialLotteryInfo::GetManagers""
     ""CSRLMaterialLotteryInfo""
     ""CNormalItemInfo::GetManagers""
     ""CNormalItemInfo"" */

undefined4 *
CSRLMaterialLotteryInfo__GetManagers_1153cb20(undefined **param_1,undefined **param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  int iVar16;
  undefined4 *puVar17;
  size_t _Size;
  undefined4 local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int local_38;
  undefined1 local_34;
  void *local_30;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar4 = CSRLItemBoxDescriptionInfo__GetManagers(0,"CSRLItemBoxDescriptionInfo",0);
  if (param_2 == (undefined **)0xffffffff) {
    return local_8;
  }
  if ((param_2 == (undefined **)0x0) && (*(int *)(iVar4 + 0x30) != 0)) {
    return local_8;
  }
  iVar16 = *(int *)(iVar4 + 0x28);
  if (iVar16 == 0) {
    return local_8;
  }
  iVar5 = (int)param_2 - *(int *)(iVar4 + 0x30);
  if (iVar5 < 0) {
    return local_8;
  }
  if (*(int *)(iVar4 + 0x24) <= iVar5) {
    return local_8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar16) * 4);
  if (iVar4 == 0) {
    return local_8;
  }
  local_10 = *(int *)(iVar4 + (iVar5 % iVar16) * 4);
  if (local_10 == 0) {
    return local_8;
  }
  cVar3 = FUN_1180e4b0();
  if (cVar3 == '\0') {
    iVar4 = 8;
    *local_8 = 0;
    puVar14 = local_8 + 2;
    ppuVar15 = param_1 + 2;
    do {
      *(undefined1 *)(puVar14 + 2) = 0;
      *puVar14 = ppuVar15[-1];
      puVar14[1] = *ppuVar15;
      puVar14[3] = ppuVar15[1];
      puVar14[-1] = ppuVar15[-2];
      iVar4 = iVar4 + -1;
      puVar14 = puVar14 + 5;
      ppuVar15 = ppuVar15 + 4;
    } while (iVar4 != 0);
    return local_8;
  }
  piVar6 = (int *)FUN_1180e500();
  FUN_10463080(piVar6[1] - *piVar6 >> 2,(int)&param_2 + 3);
  pvVar7 = (void *)*piVar6;
  pvVar13 = local_30;
  if ((void *)piVar6[1] != pvVar7) {
    _Size = piVar6[1] - (int)pvVar7;
    pvVar7 = memcpy(local_30,pvVar7,_Size);
    pvVar13 = (void *)(_Size + (int)pvVar7);
  }
  puStack_40 = &local_48;
  local_38 = 0;
  iVar4 = 0;
  local_34 = param_1._3_1_;
  local_c = (int)pvVar13 - (int)local_30 >> 2;
  local_48 = 0;
  puStack_44 = (undefined4 *)0x0;
  puStack_3c = puStack_40;
  if (local_c != 0) {
    do {
      iVar16 = *(int *)((int)local_30 + iVar4 * 4);
      param_2 = &PTR_FUN_11d2c994;
      if ((DAT_122dec80 & 1) == 0) {
        DAT_122dec80 = DAT_122dec80 | 1;
        FUN_102500e0("CSRLMaterialLotteryInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca18a0);
      }
      puVar8 = (undefined *)*DAT_122dec64;
      if ((puVar8 == (undefined *)0x0) &&
         (puVar8 = (undefined *)FUN_11679e10(&param_2,"CSRLMaterialLotteryInfo",0),
         puVar8 == (undefined *)0x0)) {
        if ((DAT_122dede4 & 1) == 0) {
          DAT_122dede4 = DAT_122dede4 | 1;
          FUN_1153c1c0();
          FUN_11a8911f(&LAB_11ca16f0);
        }
        puVar8 = &DAT_122dedac;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((iVar16 == -1) ||
          (((iVar16 == 0 && (*(int *)(puVar8 + 0x30) != 0)) ||
           (iVar5 = *(int *)(puVar8 + 0x28), iVar5 == 0)))) ||
         ((iVar16 = iVar16 - *(int *)(puVar8 + 0x30), iVar16 < 0 ||
          (*(int *)(puVar8 + 0x24) <= iVar16)))) {
LAB_1153cd17:
        FUN_10462a80();
        if (local_30 != (void *)0x0) {
          FUN_10c3d5d0(local_30);
          return local_8;
        }
        return local_8;
      }
      iVar2 = *(int *)(*(int *)(puVar8 + 0x20) + (iVar16 / iVar5) * 4);
      if ((iVar2 == 0) || (*(int *)(iVar2 + (iVar16 % iVar5) * 4) == 0)) goto LAB_1153cd17;
      uVar9 = FUN_11811130();
      local_18 = FUN_11811140();
      local_14 = uVar9;
      FUN_10465520(&local_20,&local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 != local_c);
  }
  uVar9 = FUN_1180e4d0();
  piVar6 = (int *)0x0;
  local_24 = 0;
  iVar4 = 0;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  *local_8 = uVar9;
  while( true ) {
    param_2 = &PTR_FUN_11dc0e8c;
    if ((DAT_123be828 & 1) == 0) {
      DAT_123be828 = DAT_123be828 | 1;
      FUN_102500e0("CNormalItemInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70350);
    }
    piVar10 = (int *)*DAT_123be80c;
    if ((piVar10 == (int *)0x0) &&
       (piVar10 = (int *)FUN_11679e10(&param_2,"CNormalItemInfo",0), piVar10 == (int *)0x0)) {
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
        DAT_123be834 = piVar10;
        _DAT_123be838 = piVar10;
        _DAT_123be83c = piVar10;
        FUN_11a8911f(&LAB_11ca1570);
      }
      piVar10 = (int *)&DAT_123be82c;
    }
    param_2 = &PTR_FUN_11da54a8;
    iVar16 = (**(code **)(*piVar10 + 0x28))();
    if (iVar4 == iVar16) break;
    param_2 = &PTR_FUN_11dc0e8c;
    if ((DAT_123be828 & 1) == 0) {
      DAT_123be828 = DAT_123be828 | 1;
      FUN_102500e0("CNormalItemInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70350);
    }
    piVar10 = (int *)*DAT_123be80c;
    if ((piVar10 == (int *)0x0) &&
       (piVar10 = (int *)FUN_11679e10(&param_2,"CNormalItemInfo",0), piVar10 == (int *)0x0)) {
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
        DAT_123be834 = piVar10;
        _DAT_123be838 = piVar10;
        _DAT_123be83c = piVar10;
        FUN_11a8911f(&LAB_11ca1570);
      }
      piVar10 = (int *)&DAT_123be82c;
    }
    param_2 = &PTR_FUN_11da54a8;
    if ((((iVar4 < 0) || (piVar10[6] - piVar10[5] >> 2 <= iVar4)) ||
        (iVar16 = *(int *)(piVar10[5] + iVar4 * 4), iVar16 == 0)) ||
       (cVar3 = FUN_116c0790(param_3), cVar3 == '\0')) {
LAB_1153cf87:
      iVar4 = iVar4 + 1;
    }
    else {
      puVar14 = &local_48;
      puVar11 = puStack_44;
      if (puStack_44 == (undefined4 *)0x0) goto LAB_1153cf87;
      do {
        if ((int)puVar11[4] < *(int *)(iVar16 + 0x4c)) {
          puVar12 = (undefined4 *)puVar11[3];
        }
        else {
          puVar12 = (undefined4 *)puVar11[2];
          puVar14 = puVar11;
        }
        puVar11 = puVar12;
      } while (puVar12 != (undefined4 *)0x0);
      if ((puVar14 == &local_48) || (*(int *)(iVar16 + 0x4c) < (int)puVar14[4])) goto LAB_1153cf87;
      local_10 = *(int *)(iVar16 + 0x10);
      if (piVar6 == local_1c) {
        FUN_10463c40(piVar6,&local_10,(int)&param_2 + 3,1,1);
        piVar6 = local_20;
        goto LAB_1153cf87;
      }
      *piVar6 = local_10;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + 1;
      local_20 = piVar6;
    }
  }
  param_3 = (int)piVar6 - local_24 >> 2;
  ppuVar15 = param_1 + 2;
  param_2 = (undefined **)0x0;
  puVar14 = local_8 + 2;
  iVar4 = local_24;
  do {
    if (param_2 < param_3) {
      *(undefined1 *)(puVar14 + 2) = 1;
      *puVar14 = *(undefined4 *)(iVar4 + (int)param_2 * 4);
      puVar14[1] = 1;
      iVar4 = *(int *)(iVar4 + (int)param_2 * 4);
      param_1 = &PTR_FUN_11dc0e8c;
      if ((DAT_123be828 & 1) == 0) {
        DAT_123be828 = DAT_123be828 | 1;
        FUN_102500e0("CNormalItemInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70350);
      }
      piVar6 = (int *)*DAT_123be80c;
      if ((piVar6 == (int *)0x0) &&
         (piVar6 = (int *)FUN_11679e10(&param_1,"CNormalItemInfo",0), piVar6 == (int *)0x0)) {
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
          DAT_123be834 = piVar6;
          _DAT_123be838 = piVar6;
          _DAT_123be83c = piVar6;
          FUN_11a8911f(&LAB_11ca1570);
        }
        piVar6 = (int *)&DAT_123be82c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar4 == -1) ||
         ((((iVar4 == 0 && (piVar6[0xc] != 0)) || (piVar6[10] == 0)) ||
          ((iVar4 = iVar4 - piVar6[0xc], iVar4 < 0 || (piVar6[9] <= iVar4)))))) {
LAB_1153d0c8:
        iVar4 = 0;
      }
      else {
        iVar16 = *(int *)(piVar6[8] + (iVar4 / piVar6[10]) * 4);
        if (iVar16 == 0) goto LAB_1153d0c8;
        iVar4 = *(int *)(iVar16 + (iVar4 % piVar6[10]) * 4);
      }
      puVar11 = &local_48;
      puVar12 = puVar11;
      puVar17 = puStack_44;
      if (puStack_44 != (undefined4 *)0x0) {
        do {
          if ((int)puVar17[4] < *(int *)(iVar4 + 0x4c)) {
            puVar12 = (undefined4 *)puVar17[3];
          }
          else {
            puVar12 = (undefined4 *)puVar17[2];
            puVar11 = puVar17;
          }
          puVar17 = puVar12;
        } while (puVar12 != (undefined4 *)0x0);
        puVar12 = puVar11;
        if ((puVar11 != &local_48) &&
           (puVar12 = &local_48, (int)puVar11[4] <= *(int *)(iVar4 + 0x4c))) {
          puVar12 = puVar11;
        }
      }
      puVar8 = (undefined *)puVar12[5];
      iVar4 = local_24;
    }
    else {
      *(undefined1 *)(puVar14 + 2) = 0;
      *puVar14 = ppuVar15[-1];
      puVar14[1] = *ppuVar15;
      puVar8 = ppuVar15[1];
    }
    puVar14[3] = puVar8;
    param_2 = (undefined **)((int)param_2 + 1);
    ppuVar1 = ppuVar15 + -2;
    ppuVar15 = ppuVar15 + 4;
    puVar14[-1] = *ppuVar1;
    puVar14 = puVar14 + 5;
    if (param_2 == (undefined **)0x8) {
      if (iVar4 != 0) {
        FUN_10c3d5d0(iVar4);
      }
      puVar14 = puStack_44;
      if (local_38 != 0) {
        while (puVar14 != (undefined4 *)0x0) {
          FUN_10463900(puVar14[3]);
          puVar11 = (undefined4 *)puVar14[2];
          FUN_10c3d5d0(puVar14);
          puVar14 = puVar11;
        }
        puStack_40 = &local_48;
        puStack_44 = (undefined4 *)0x0;
        local_38 = 0;
        puStack_3c = puStack_40;
      }
      if (local_30 == (void *)0x0) {
        return local_8;
      }
      FUN_10c3d5d0(local_30);
      return local_8;
    }
  } while( true );
}



/* --- CSRLMaterialLotteryInfo::GetManagers_1153e7e0 @ 1153e7e0 --- */
// [RE-AUTO c3]
// id: CSRLMaterialLotteryInfo::GetManagers
// strings:
//   ""CSRLMaterialLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSRLMaterialLotteryInfo::GetManagers
   strings:
     ""CSRLMaterialLotteryInfo::GetManagers"" */

undefined4 CSRLMaterialLotteryInfo__GetManagers_1153e7e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dec80 & 1) == 0) {
      DAT_122dec80 = DAT_122dec80 | 1;
      FUN_102500e0("CSRLMaterialLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca18a0);
    }
    return *DAT_122dec64;
  }
  return 0;
}



