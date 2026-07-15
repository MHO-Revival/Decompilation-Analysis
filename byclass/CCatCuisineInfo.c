// ===== class CCatCuisineInfo  (3 recovered methods) =====

/* --- CCatCuisineInfo::GetManagers @ 104fd470 --- */
// [RE-AUTO c3]
// id: CCatCuisineInfo::GetManagers
// strings:
//   ""CCatCuisineInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatCuisineInfo::GetManagers
   strings:
     ""CCatCuisineInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCatCuisineInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be378 & 1) == 0) {
    DAT_123be378 = DAT_123be378 | 1;
    _DAT_123be390 = &DAT_123be380;
    DAT_123be394 = &DAT_123be380;
    DAT_123be380 = 0;
    FUN_100d83d0("CCatCuisineInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f1f0);
  }
  return DAT_123be37c;
}



/* --- CCatCuisineInfo::GetManagers_11529f70 @ 11529f70 --- */
// [RE-AUTO c3]
// id: CCatCuisineInfo::GetManagers
// strings:
//   ""CCatCuisineInfo::GetManagers""
//   ""CCatCuisineInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatCuisineInfo::GetManagers
   strings:
     ""CCatCuisineInfo::GetManagers""
     ""CCatCuisineInfo"" */

void __fastcall CCatCuisineInfo__GetManagers_11529f70(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **local_c;
  int *local_8;
  
  iVar5 = 0;
  local_8 = param_1;
  while( true ) {
    local_c = &PTR_FUN_11dbea0c;
    if ((DAT_123be378 & 1) == 0) {
      DAT_123be378 = DAT_123be378 | 1;
      FUN_102500e0("CCatCuisineInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f1f0);
    }
    piVar2 = (int *)*DAT_123be37c;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_c,"CCatCuisineInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be310 = 0;
        DAT_123be320 = 0;
        DAT_123be324 = 0;
        _DAT_123be328 = 0;
        DAT_123be32c = 0;
        DAT_123be344 = DAT_123be344 | 1;
        DAT_123be30c = &PTR_FUN_11dbea60;
        DAT_123be330 = _DAT_11de9ae0;
        DAT_123be334 = _UNK_11de9ae4;
        uRam123be338 = _UNK_11de9ae8;
        DAT_123be33c = _UNK_11de9aec;
        DAT_123be340 = 1;
        DAT_123be314 = piVar2;
        _DAT_123be318 = piVar2;
        _DAT_123be31c = piVar2;
        FUN_11a8911f(&LAB_11ca0df0);
      }
      piVar2 = (int *)&DAT_123be30c;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar5) break;
    local_c = &PTR_FUN_11dbea0c;
    if ((DAT_123be378 & 1) == 0) {
      DAT_123be378 = DAT_123be378 | 1;
      FUN_102500e0("CCatCuisineInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f1f0);
    }
    piVar2 = (int *)*DAT_123be37c;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_c,"CCatCuisineInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be310 = 0;
        DAT_123be320 = 0;
        DAT_123be324 = 0;
        _DAT_123be328 = 0;
        DAT_123be32c = 0;
        DAT_123be344 = DAT_123be344 | 1;
        DAT_123be30c = &PTR_FUN_11dbea60;
        DAT_123be330 = _DAT_11de9ae0;
        DAT_123be334 = _UNK_11de9ae4;
        uRam123be338 = _UNK_11de9ae8;
        DAT_123be33c = _UNK_11de9aec;
        DAT_123be340 = 1;
        DAT_123be314 = piVar2;
        _DAT_123be318 = piVar2;
        _DAT_123be31c = piVar2;
        FUN_11a8911f(&LAB_11ca0df0);
      }
      piVar2 = (int *)&DAT_123be30c;
    }
    local_c = &PTR_FUN_11da54a8;
    if ((((-1 < iVar5) && (iVar5 < piVar2[6] - piVar2[5] >> 2)) &&
        (piVar2 = *(int **)(piVar2[5] + iVar5 * 4), piVar2 != (int *)0x0)) &&
       (cVar1 = FUN_118047d0(), cVar1 != '\0')) {
      iVar3 = *param_1;
      uVar4 = (**(code **)(*piVar2 + 0x18))();
      cVar1 = (**(code **)(iVar3 + 0x38))(uVar4);
      param_1 = local_8;
      if (cVar1 == '\0') {
        iVar3 = *local_8;
        uVar4 = (**(code **)(*piVar2 + 0x18))();
        cVar1 = (**(code **)(iVar3 + 0x4c))(uVar4);
        param_1 = local_8;
        if (cVar1 != '\0') {
          iVar3 = *local_8;
          uVar4 = (**(code **)(*piVar2 + 0x18))();
          (**(code **)(iVar3 + 0x44))(uVar4);
          param_1 = local_8;
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



/* --- CCatCuisineInfo::GetManagers_11933e80 @ 11933e80 --- */
// [RE-AUTO c3]
// id: CCatCuisineInfo::GetManagers
// strings:
//   ""CCatCuisineInfo::GetManagers""
//   ""CCatCuisineInfo""
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""
//   ""CCatCuisineRateInfo::GetManagers""
//   ""CCatCuisineRateInfo""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatCuisineInfo::GetManagers
   strings:
     ""CCatCuisineInfo::GetManagers""
     ""CCatCuisineInfo""
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo""
     ""CCatCuisineRateInfo::GetManagers""
     ""CCatCuisineRateInfo""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CCatCuisineInfo__GetManagers_11933e80(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined **local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  iVar6 = 0;
  while( true ) {
    local_c = &PTR_FUN_11dbea0c;
    local_10 = iVar6;
    if ((DAT_123be378 & 1) == 0) {
      DAT_123be378 = DAT_123be378 | 1;
      FUN_102500e0("CCatCuisineInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f1f0);
    }
    piVar3 = (int *)*DAT_123be37c;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_c,"CCatCuisineInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be310 = 0;
        DAT_123be320 = 0;
        DAT_123be324 = 0;
        _DAT_123be328 = 0;
        DAT_123be32c = 0;
        DAT_123be344 = DAT_123be344 | 1;
        DAT_123be30c = &PTR_FUN_11dbea60;
        DAT_123be330 = _DAT_11de9ae0;
        DAT_123be334 = _UNK_11de9ae4;
        uRam123be338 = _UNK_11de9ae8;
        DAT_123be33c = _UNK_11de9aec;
        DAT_123be340 = 1;
        DAT_123be314 = piVar3;
        _DAT_123be318 = piVar3;
        _DAT_123be31c = piVar3;
        FUN_11a8911f(&LAB_11cb23d0);
      }
      piVar3 = (int *)&DAT_123be30c;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 <= iVar6) break;
    local_c = &PTR_FUN_11dbea0c;
    if ((DAT_123be378 & 1) == 0) {
      DAT_123be378 = DAT_123be378 | 1;
      FUN_102500e0("CCatCuisineInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f1f0);
    }
    piVar3 = (int *)*DAT_123be37c;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_c,"CCatCuisineInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_123be344 & 1) == 0) {
        DAT_123be310 = 0;
        DAT_123be320 = 0;
        DAT_123be324 = 0;
        _DAT_123be328 = 0;
        DAT_123be32c = 0;
        DAT_123be344 = DAT_123be344 | 1;
        DAT_123be30c = &PTR_FUN_11dbea60;
        DAT_123be330 = _DAT_11de9ae0;
        DAT_123be334 = _UNK_11de9ae4;
        uRam123be338 = _UNK_11de9ae8;
        DAT_123be33c = _UNK_11de9aec;
        DAT_123be340 = 1;
        DAT_123be314 = piVar3;
        _DAT_123be318 = piVar3;
        _DAT_123be31c = piVar3;
        FUN_11a8911f(&LAB_11cb23d0);
      }
      piVar3 = (int *)&DAT_123be30c;
    }
    if ((iVar6 < 0) || (piVar3[6] - piVar3[5] >> 2 <= iVar6)) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      ppuVar7 = *(undefined ***)(piVar3[5] + iVar6 * 4);
    }
    puVar1 = ppuVar7[0x20];
    local_c = &PTR_FUN_11dc8ee8;
    local_14 = ppuVar7;
    if ((DAT_123bee5c & 1) == 0) {
      DAT_123bee5c = DAT_123bee5c | 1;
      FUN_102500e0("CMonsterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70e30);
    }
    puVar5 = (undefined4 *)*DAT_123bee60;
    if ((puVar5 == (undefined4 *)0x0) &&
       (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CMonsterInfo",0), puVar5 == (undefined4 *)0x0)
       ) {
      if ((DAT_123bedd4 & 1) == 0) {
        DAT_123beddc = 0;
        DAT_123bedec = 0;
        DAT_123bedf0 = 0;
        _DAT_123bedf4 = 0;
        DAT_123bedf8 = 0;
        DAT_123bedd4 = DAT_123bedd4 | 1;
        DAT_123bedd8 = &PTR_FUN_11dc8ef0;
        DAT_123bedfc = _DAT_11de9ae0;
        DAT_123bee00 = _UNK_11de9ae4;
        uRam123bee04 = _UNK_11de9ae8;
        DAT_123bee08 = _UNK_11de9aec;
        DAT_123bee0c = 1;
        DAT_123bede0 = puVar5;
        _DAT_123bede4 = puVar5;
        _DAT_123bede8 = puVar5;
        FUN_11a8911f(&LAB_11cb2490);
      }
      puVar5 = &DAT_123bedd8;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((puVar1 != (undefined *)0xffffffff) &&
        (((puVar1 != (undefined *)0x0 || (puVar5[0xc] == 0)) && (iVar6 = puVar5[10], iVar6 != 0))))
       && ((iVar4 = (int)puVar1 - puVar5[0xc], -1 < iVar4 && (iVar4 < (int)puVar5[9])))) {
      iVar2 = *(int *)(puVar5[8] + (iVar4 / iVar6) * 4);
      if ((iVar2 != 0) &&
         ((iVar6 = *(int *)(iVar2 + (iVar4 % iVar6) * 4), iVar6 != 0 &&
          (iVar6 = *(int *)(iVar6 + 0x74), iVar6 != 0)))) {
        piVar3 = *(int **)(iVar6 + 0xf4);
        if (piVar3 == *(int **)(iVar6 + 0xf8)) {
          FUN_11934930(piVar3,&local_14,&local_5,1,1);
        }
        else {
          *piVar3 = (int)ppuVar7;
          *(int *)(iVar6 + 0xf4) = *(int *)(iVar6 + 0xf4) + 4;
        }
        local_c = &PTR_FUN_11de6d9c;
        if ((DAT_123c9348 & 1) == 0) {
          DAT_123c9348 = DAT_123c9348 | 1;
          FUN_102500e0("CCatCuisineRateInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7dcc0);
        }
        if (((*DAT_123c934c == 0) &&
            (iVar6 = FUN_11679e10(&local_c,"CCatCuisineRateInfo",0), iVar6 == 0)) &&
           ((DAT_123c9370 & 1) == 0)) {
          DAT_123c9378 = 0;
          DAT_123c9388 = 0;
          DAT_123c938c = 0;
          _DAT_123c9390 = 0;
          DAT_123c9394 = 0;
          DAT_123c9370 = DAT_123c9370 | 1;
          DAT_123c937c = 0;
          _DAT_123c9380 = 0;
          _DAT_123c9384 = 0;
          DAT_123c9374 = &PTR_FUN_11de6da4;
          DAT_123c9398 = _DAT_11de9ae0;
          DAT_123c939c = _UNK_11de9ae4;
          uRam123c93a0 = _UNK_11de9ae8;
          DAT_123c93a4 = _UNK_11de9aec;
          DAT_123c93a8 = 1;
          FUN_11a8911f(&LAB_11cb2430);
        }
        uVar8 = 0;
        local_c = &PTR_FUN_11da54a8;
        if ((int)ppuVar7[0xc] - (int)ppuVar7[0xb] >> 2 != 0) {
          do {
            if (*(int *)(ppuVar7[0xb] + uVar8 * 4) != 0) {
              local_14 = &PTR_FUN_11dbea04;
              if ((DAT_123be358 & 1) == 0) {
                DAT_123be358 = DAT_123be358 | 1;
                FUN_102500e0("CBuffInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6f220);
              }
              if (((*DAT_123be35c == 0) &&
                  (iVar6 = FUN_11679e10(&local_14,"CBuffInfo",0), iVar6 == 0)) &&
                 ((DAT_123be308 & 1) == 0)) {
                DAT_123be2d4 = 0;
                DAT_123be2e4 = 0;
                DAT_123be2e8 = 0;
                _DAT_123be2ec = 0;
                DAT_123be2f0 = 0;
                DAT_123be308 = DAT_123be308 | 1;
                DAT_123be2d8 = 0;
                _DAT_123be2dc = 0;
                _DAT_123be2e0 = 0;
                _DAT_123be2d0 = &PTR_FUN_11dbea14;
                DAT_123be2f4 = _DAT_11de9ae0;
                DAT_123be2f8 = _UNK_11de9ae4;
                uRam123be2fc = _UNK_11de9ae8;
                DAT_123be300 = _UNK_11de9aec;
                DAT_123be304 = 1;
                FUN_11a8911f(&LAB_11cb2370);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)((int)ppuVar7[0xc] - (int)ppuVar7[0xb] >> 2));
        }
      }
    }
    iVar6 = local_10 + 1;
  }
  return;
}



