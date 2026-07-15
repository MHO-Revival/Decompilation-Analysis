// ===== class CStarLevelPageUnlockInfo  (3 recovered methods) =====

/* --- CStarLevelPageUnlockInfo::GetManagers @ 10976c20 --- */
// [RE-AUTO c3]
// id: CStarLevelPageUnlockInfo::GetManagers
// strings:
//   ""CStarLevelPageUnlockInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarLevelPageUnlockInfo::GetManagers
   strings:
     ""CStarLevelPageUnlockInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CStarLevelPageUnlockInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c04c8 & 1) == 0) {
    DAT_123c04c8 = DAT_123c04c8 | 1;
    _DAT_123c04e0 = &DAT_123c04d0;
    DAT_123c04e4 = &DAT_123c04d0;
    DAT_123c04d0 = 0;
    FUN_100d83d0("CStarLevelPageUnlockInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79f20);
  }
  return DAT_123c04cc;
}



/* --- CStarLevelPageUnlockInfo::GetManagers_11620300 @ 11620300 --- */
// [RE-AUTO c3]
// id: CStarLevelPageUnlockInfo::GetManagers
// strings:
//   ""CStarLevelPageUnlockInfo""
//   ""CStarLevelPageUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarLevelPageUnlockInfo::GetManagers
   strings:
     ""CStarLevelPageUnlockInfo""
     ""CStarLevelPageUnlockInfo::GetManagers"" */

undefined4 * CStarLevelPageUnlockInfo__GetManagers_11620300(undefined **param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = param_1;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  *(undefined1 *)param_1 = 0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)param_1;
  param_1[3] = (undefined *)param_1;
  param_1[4] = (undefined *)0x0;
  *(undefined1 *)(param_1 + 5) = param_1._3_1_;
  piVar3 = (int *)FUN_1097c460(0,"CStarLevelPageUnlockInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  do {
    while( true ) {
      do {
        iVar4 = iVar4 + -1;
        if ((iVar4 < 0) || (5 < (uint)puVar2[4])) {
          return puVar2;
        }
        param_1 = &PTR_FUN_11dde840;
        local_c = iVar4;
        if ((DAT_123c04c8 & 1) == 0) {
          DAT_123c04c8 = DAT_123c04c8 | 1;
          FUN_102500e0("CStarLevelPageUnlockInfo::GetManagers");
          FUN_11a8911f(&LAB_11c79f20);
        }
        puVar5 = (undefined *)*DAT_123c04cc;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&param_1,"CStarLevelPageUnlockInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_123c0434 & 1) == 0) {
            DAT_123c0434 = DAT_123c0434 | 1;
            FUN_1097cc40();
            FUN_11a8911f(&LAB_11ca5b70);
          }
          puVar5 = &DAT_123c0438;
        }
        param_1 = &PTR_FUN_11da54a8;
        if ((iVar4 < 0) || (*(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2 <= iVar4)) {
          local_8 = 0;
        }
        else {
          local_8 = *(int *)(*(int *)(puVar5 + 0x14) + iVar4 * 4);
        }
      } while (((local_8 == 0) || (*(int *)(local_8 + 0x1c) != 99)) ||
              (*(int *)(local_8 + 0x10) == *(int *)(local_8 + 0x14)));
      local_2c = (int *)0x0;
      local_28 = (int *)0x0;
      local_24 = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_3c = 0;
      FUN_11622990((*(int *)(local_8 + 0x14) - *(int *)(local_8 + 0x10)) / 0x1c,local_48);
      FUN_1161fac0();
      FUN_1161f1c0(*(undefined4 *)(local_8 + 0x10),*(undefined4 *)(local_8 + 0x14),local_2c);
      piVar3 = (int *)FUN_1161eb80(local_2c,local_28,&stack0x00000008,&local_8,(int)&param_1 + 3);
      if (piVar3 != local_28) break;
LAB_1162055a:
      FUN_1161ea10(local_28,local_2c,0,(int)&param_1 + 3);
      if (local_2c != (int *)0x0) {
        FUN_10c3d5d0(local_2c);
      }
    }
    local_10 = *piVar3;
    if (0 < local_10) {
      uVar6 = FUN_1161f180(local_2c,local_28,&local_10);
      FUN_116226e0(uVar6,local_28);
      piVar3 = local_28;
      if (local_2c != local_28) {
        piVar7 = local_2c + 2;
        do {
          iVar4 = local_c;
          if ((5 < (uint)puVar2[4]) ||
             (FUN_10467580(local_18,piVar7 + -1), iVar4 = local_c, 5 < (uint)puVar2[4])) break;
          FUN_10467580(local_20,piVar7);
          piVar1 = piVar7 + 5;
          piVar7 = piVar7 + 7;
          iVar4 = local_c;
        } while (piVar1 != piVar3);
      }
      goto LAB_1162055a;
    }
    FUN_1161fa80();
  } while( true );
}



/* --- CStarLevelPageUnlockInfo::GetManagers_118ee510 @ 118ee510 --- */
// [RE-AUTO c3]
// id: CStarLevelPageUnlockInfo::GetManagers
// strings:
//   ""CStarLevelPageUnlockInfo""
//   ""CStarLevelPageUnlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarLevelPageUnlockInfo::GetManagers
   strings:
     ""CStarLevelPageUnlockInfo""
     ""CStarLevelPageUnlockInfo::GetManagers"" */

void CStarLevelPageUnlockInfo__GetManagers_118ee510(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1097c460(0,"CStarLevelPageUnlockInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dde840;
      if ((DAT_123c04c8 & 1) == 0) {
        DAT_123c04c8 = DAT_123c04c8 | 1;
        FUN_102500e0("CStarLevelPageUnlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11c79f20);
      }
      puVar4 = (undefined *)*DAT_123c04cc;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CStarLevelPageUnlockInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c0434 & 1) == 0) {
          DAT_123c043c = 0;
          DAT_123c044c = 0;
          DAT_123c0450 = 0;
          _DAT_123c0454 = 0;
          DAT_123c0458 = 0;
          DAT_123c0434 = DAT_123c0434 | 1;
          _DAT_123c0438 = &PTR_FUN_11dde8f4;
          DAT_123c045c = _DAT_11de9ae0;
          DAT_123c0460 = _UNK_11de9ae4;
          uRam123c0464 = _UNK_11de9ae8;
          DAT_123c0468 = _UNK_11de9aec;
          DAT_123c046c = 1;
          DAT_123c0440 = puVar4;
          _DAT_123c0444 = puVar4;
          _DAT_123c0448 = puVar4;
          FUN_11a8911f(&LAB_11cb0750);
        }
        puVar4 = &DAT_123c0438;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_116bb3f0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



