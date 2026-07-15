/* ===== FUN_112a9d80 @ 112a9d80  size=316 ===== */
// calls: memcpy
// strings:
//   "[SpawnLocalPlayer] SpawnLocalTempPlayer!"

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""[SpawnLocalPlayer] SpawnLocalTempPlayer!"" */

void __fastcall FUN_112a9d80(int param_1)

{
  char cVar1;
  void *_Src;
  int iVar2;
  int *piVar3;
  
  _Src = (void *)FUN_1128e460();
  iVar2 = FUN_111e0980();
  if (iVar2 != 0) {
    FUN_1045b620(iVar2,"[SpawnLocalPlayer] SpawnLocalTempPlayer!");
  }
  piVar3 = (int *)FUN_111e09f0();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x14))(*(undefined4 *)((int)_Src + 4));
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_111e09f0();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x10))
                              (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)_Src + 4),1,0);
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x160))();
    if ((cVar1 == '\0') && (*(char *)((int)piVar3 + 0x25) != '\0')) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(piVar3);
    }
  }
  *(undefined1 *)(piVar3 + 9) = 0;
  (**(code **)(*piVar3 + 0x29c))(_Src);
  cVar1 = (**(code **)(*piVar3 + 0x280))();
  if (cVar1 != '\0') {
    FUN_111e09f0(piVar3[1]);
    FUN_11245c30();
  }
  piVar3 = (int *)FUN_111e0980();
  iVar2 = (**(code **)(*piVar3 + 0x6c))();
  if (iVar2 != 0) {
    memcpy((void *)(param_1 + 0x14),_Src,0x8498e);
  }
  FUN_111e09b0();
  iVar2 = FUN_111e09b0();
  if (*(int *)(iVar2 + 0xe0) != 0) {
    FUN_111e09b0();
    FUN_1126e850();
  }
  iVar2 = FUN_111e09b0();
  if (*(int *)(iVar2 + 0x94) != 0) {
    FUN_111e09b0();
    FUN_1115e890();
  }
  return;
}



/* ===== FUN_112df200 @ 112df200  size=38 ===== */
// strings:
//   "SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"" */

undefined4 * __fastcall FUN_112df200(undefined4 *param_1)

{
  FUN_100d6d90();
  *param_1 = &PTR_FUN_11d1f1f4;
  FUN_100d6da0("SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName",param_1,0);
  FUN_100d6fd0();
  return param_1;
}



/* ===== FUN_112df2f0 @ 112df2f0  size=55 ===== */
// strings:
//   "SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"" */

void FUN_112df2f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_12040ac0;
  if (DAT_12040ac0 != (undefined4 *)0x0) {
    (**(code **)*DAT_12040ac0)(0);
    thunk_FUN_100ddf20(puVar1);
    DAT_12040ac0 = (undefined4 *)0x0;
    FUN_100dfe70("SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName");
  }
  return;
}



/* ===== FUN_112df490 @ 112df490  size=146 ===== */
// strings:
//   "WildHunt"

/* [RE-AUTO c0]
   strings:
     ""WildHunt"" */

void FUN_112df490(void)

{
  int iVar1;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_1145b350();
  if (iVar1 == 0) {
    FUN_11a89daa();
    return;
  }
  local_10 = local_20;
  local_24 = 0;
  local_c = local_10;
  FUN_100b62c0("WildHunt","");
  FUN_1145b320(local_20,&local_24);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_112df5d0 @ 112df5d0  size=29 ===== */
// strings:
//   "SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"" */

void FUN_112df5d0(undefined4 param_1)

{
  DAT_12040ac0 = param_1;
  FUN_100dfdc0("SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName",param_1);
  return;
}



/* ===== FUN_112df5f0 @ 112df5f0  size=23 ===== */
// strings:
//   "SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName"" */

void FUN_112df5f0(undefined4 param_1)

{
  FUN_100dfdc0("SingletonNameSvr<class CCliWildHuntMgr>::GetSingletonName",param_1);
  return;
}



/* ===== FUN_11511390 @ 11511390  size=89 ===== */
// calls: CGiftBagGroupInfo::GetInfoManager
// strings:
//   "CGiftBagGroupInfo"

/* [RE-AUTO c0]
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo"" */

undefined4 FUN_11511390(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGiftBagGroupInfo__GetInfoManager(0,"CGiftBagGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      return *(undefined4 *)(iVar2 + 0x2c);
    }
  }
  return 0;
}



/* ===== FUN_115113f0 @ 115113f0  size=63 ===== */
// calls: CGiftBagGroupInfo::GetInfoManager
// strings:
//   "CGiftBagGroupInfo"

/* [RE-AUTO c0]
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo"" */

undefined4 FUN_115113f0(int param_1)

{
  int iVar1;
  
  iVar1 = CGiftBagGroupInfo__GetInfoManager(0,"CGiftBagGroupInfo",0);
  if (((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + param_1 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  return 0;
}



/* ===== FUN_11511430 @ 11511430  size=78 ===== */
// calls: CGiftBagGroupInfo::GetInfoManager
// strings:
//   "CGiftBagGroupInfo"

/* [RE-AUTO c0]
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo"" */

undefined4 FUN_11511430(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CGiftBagGroupInfo__GetInfoManager(0,"CGiftBagGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11511480 @ 11511480  size=52 ===== */
// calls: CGiftBagGroupInfo::GetInfoManager
// strings:
//   "CGiftBagGroupInfo"

/* [RE-AUTO c0]
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo"" */

undefined4 FUN_11511480(int param_1)

{
  int iVar1;
  
  iVar1 = CGiftBagGroupInfo__GetInfoManager(0,"CGiftBagGroupInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_115114e0 @ 115114e0  size=24 ===== */
// calls: CGiftBagGroupInfo::GetInfoManager
// strings:
//   "CGiftBagGroupInfo"

/* [RE-AUTO c0]
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo"" */

void FUN_115114e0(void)

{
  int *piVar1;
  
  piVar1 = (int *)CGiftBagGroupInfo__GetInfoManager(0,"CGiftBagGroupInfo",0);
                    /* WARNING: Could not recover jumptable at 0x115114f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))();
  return;
}



/* ===== FUN_115312e0 @ 115312e0  size=573 ===== */
// calls: CLevelRewardInfo::GetRewardByLevelIndex
// strings:
//   "CMHLevelInfo"
//   "WildHuntPhase"

/* WARNING: Removing unreachable block (ram,0x115314c6) */
/* WARNING: Removing unreachable block (ram,0x115314d7) */
/* [RE-AUTO c0]
   strings:
     ""CMHLevelInfo""
     ""WildHuntPhase"" */

void __thiscall FUN_115312e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int local_28;
  undefined1 local_21;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = param_1 + 0x60;
  iVar4 = *(int *)(param_1 + 100);
  iVar8 = iVar3;
  if (*(int *)(param_1 + 100) == 0) {
LAB_11531324:
    if (iVar8 != iVar3) goto LAB_11531508;
  }
  else {
    do {
      if (*(int *)(iVar4 + 0x10) < param_2) {
        iVar2 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar4 + 8);
        iVar8 = iVar4;
      }
      iVar4 = iVar2;
    } while (iVar2 != 0);
    if (iVar8 != iVar3) {
      if (param_2 < *(int *)(iVar8 + 0x10)) {
        iVar8 = iVar3;
      }
      goto LAB_11531324;
    }
  }
  iVar3 = FUN_107d78c0(0,"CMHLevelInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar3 + 0x28), iVar4 != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar3 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar3 + 0x24))))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_2 / iVar4) * 4);
    if ((iVar3 != 0) &&
       ((((iVar3 = *(int *)(iVar3 + (param_2 % iVar4) * 4), iVar3 != 0 &&
          (iVar4 = FUN_11531c90(*(undefined4 *)(iVar3 + 0x38)), iVar4 != 0)) &&
         ((0 < *(int *)(iVar4 + 0x30) &&
          (((iVar3 = CLevelRewardInfo__GetRewardByLevelIndex(*(undefined4 *)(iVar3 + 0x10)),
            iVar3 != 0 && (0 < (*(int *)(iVar3 + 0x34) * *(int *)(iVar4 + 0x30)) / 100)) &&
           (piVar5 = (int *)FUN_1145b350(), piVar5 != (int *)0x0)))))) &&
        (piVar6 = (int *)FUN_115a2c80(), piVar6 != (int *)0x0)))) {
      uVar7 = (**(code **)(*piVar6 + 0xc))();
      iVar3 = (**(code **)(*piVar5 + 0x34))(uVar7);
      if ((iVar3 == 3) && (iVar3 = FUN_1025b060(), iVar3 != 0)) {
        local_28 = 0;
        FUN_100b5f70("WildHuntPhase",&local_21);
        cVar1 = FUN_1145b320(local_20,&local_28);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
        if (((cVar1 != '\0') && (iVar3 = FUN_1025b060(), iVar3 == local_28)) &&
           ((iVar3 = (**(code **)(*piVar5 + 0x44))(uVar7), iVar3 != 0 &&
            (iVar3 = FUN_1162bb70(iVar3,0x40), iVar3 != 0)))) {
          lVar9 = (**(code **)(*piVar5 + 0x38))();
          if ((*(int *)(iVar3 + 0x113) <= lVar9) && (lVar9 < *(int *)(iVar3 + 0x117))) {
            FUN_11a89daa();
            return;
          }
          FUN_11a89daa();
          return;
        }
      }
    }
  }
LAB_11531508:
  FUN_11a89daa(param_1);
  return;
}



/* ===== FUN_115608b0 @ 115608b0  size=1601 ===== */
// strings:
//   "set_max_queue"
//   "setmaxonline"
//   "notice"
//   "alert"
//   "exchangesyssale"
//   "exchangesysbid"
//   "exchangesyscancel"
//   "exchangerate"
//   "feature"
//   "exitts"
//   "hunterstar"
//   "wildhunt"
//   "scriptactivity"
//   "reloaddata"
//   "levelunlock"
//   "hubunlock"

/* [RE-AUTO c0]
   strings:
     ""set_max_queue""
     ""setmaxonline""
     ""notice""
     ""alert""
     ""exchangesyssale""
     ""exchangesysbid""
     ""exchangesyscancel""
     ""exchangerate""
     ""feature""
     ""exitts"" */

void FUN_115608b0(void)

{
  undefined1 local_2c [8];
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("set_max_queue","");
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("setmaxonline","");
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("notice","");
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("alert","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11d2d6b8,&DAT_11d2d6bc);
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("exchangesyssale","");
  local_c = 5;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("exchangesysbid","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("exchangesyscancel","");
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("exchangerate","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("feature","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11dda898,&DAT_11dda89c);
  local_c = 4;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11d2d704,&DAT_11d2d70a);
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("exitts","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("hunterstar","");
  local_c = 5;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11d2d720,&DAT_11d2d724);
  local_c = 5;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("wildhunt","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("scriptactivity","");
  local_c = 5;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("reloaddata","");
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11d2d744,&DAT_11d2d748);
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(&DAT_11d2d74c,&DAT_11d2d751);
  local_c = 2;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("levelunlock","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0("hubunlock","");
  local_c = 3;
  FUN_1025e3f0(local_2c,local_24);
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_115a28f0 @ 115a28f0  size=38 ===== */
// strings:
//   "SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"" */

undefined4 * __fastcall FUN_115a28f0(undefined4 *param_1)

{
  FUN_100d6d90();
  *param_1 = &PTR_FUN_11d2f984;
  FUN_100d6da0("SingletonNameSvr<class CWildHuntMgr>::GetSingletonName",param_1,0);
  FUN_100d6fd0();
  return param_1;
}



/* ===== FUN_115a2d30 @ 115a2d30  size=29 ===== */
// strings:
//   "SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"" */

void FUN_115a2d30(undefined4 param_1)

{
  DAT_122df384 = param_1;
  FUN_100dfdc0("SingletonNameSvr<class CWildHuntMgr>::GetSingletonName",param_1);
  return;
}



/* ===== FUN_115a2d80 @ 115a2d80  size=23 ===== */
// strings:
//   "SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"

/* [RE-AUTO c0]
   strings:
     ""SingletonNameSvr<class CWildHuntMgr>::GetSingletonName"" */

void FUN_115a2d80(undefined4 param_1)

{
  FUN_100dfdc0("SingletonNameSvr<class CWildHuntMgr>::GetSingletonName",param_1);
  return;
}



/* ===== IBattleGroundSpawnConfig::SpawnLog @ 115c8990  size=44 ===== */
// strings:
//   "IBattleGroundSpawnConfig::SpawnLog"
//   "D:\\MHFC\\OpRelease\\Code\\Common\\CommonLib\\BattleGround\\BattleGroundSpawnConfig.cpp"

/* [RE-AUTO c3]
   id: IBattleGroundSpawnConfig::SpawnLog
   src: BattleGroundSpawnConfig.cpp
   strings:
     ""IBattleGroundSpawnConfig::SpawnLog""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\CommonLib\\BattleGround\\BattleGroundSpawnConfig.cpp"" */

void IBattleGroundSpawnConfig__SpawnLog(void)

{
  undefined4 in_stack_00000010;
  
  FUN_100e84b0(DAT_123ba6dc,7,0,0,
               "D:\\MHFC\\OpRelease\\Code\\Common\\CommonLib\\BattleGround\\BattleGroundSpawnConfig.cpp"
               ,0x1d,"IBattleGroundSpawnConfig::SpawnLog",in_stack_00000010,&stack0x00000014);
  return;
}



/* ===== FUN_115f6260 @ 115f6260  size=204 ===== */
// strings:
//   "EffectSpawnedCollectPoint"

/* [RE-AUTO c0]
   strings:
     ""EffectSpawnedCollectPoint"" */

void __thiscall FUN_115f6260(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_c8 [11];
  int local_9c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  cVar2 = (**(code **)(*param_1 + 0xc))(param_2,0);
  if ((cVar2 != '\0') && (0 < param_1[1])) {
    (**(code **)(*param_2 + 0x28))();
    FUN_11415cf0();
    local_9c = FUN_10d3f100(param_1[1]);
    local_c8[0] = *(undefined4 *)(local_9c + 0x28);
    iVar1 = **(int **)(param_2[3] + 0x90);
    uVar3 = (**(code **)(*param_2 + 0x1c))(local_c8,0,0xffffffff);
    uVar3 = (**(code **)(*param_2 + 0x28))(uVar3);
    (**(code **)(iVar1 + 0x48))("EffectSpawnedCollectPoint",uVar3);
    FUN_10d3de80();
    FUN_11a89daa();
    return;
  }
  FUN_11a89daa();
  return;
}



/* ===== CMonsterSpawnGroup::EnableSpawner @ 11643b90  size=199 ===== */
// strings:
//   "CMonsterSpawnGroup::EnableSpawner"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterSpawnGroup::EnableSpawner
   strings:
     ""CMonsterSpawnGroup::EnableSpawner"" */

void __fastcall CMonsterSpawnGroup__EnableSpawner(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x24];
  iVar3 = param_1[0x23];
  FUN_100ee470();
  iVar1 = FUN_100ee450();
  iVar3 = (int)((double)iVar1 * _DAT_11de98f0 * (double)((iVar2 - iVar3) + 1)) + iVar3;
  if (0 < iVar3) {
    iVar2 = FUN_100ea610("CMonsterSpawnGroup::EnableSpawner",iVar3 * 1000,1,param_1,FUN_116440b0,0);
    param_1[0x31] = iVar2;
    return;
  }
  iVar2 = param_1[0x26];
  iVar3 = param_1[0x25];
  FUN_100ee470();
  iVar1 = FUN_100ee450();
  (**(code **)(*param_1 + 0xb4))
            ((int)((double)iVar1 * _DAT_11de98f0 * (double)((iVar2 - iVar3) + 1)) + iVar3);
  return;
}



/* ===== FUN_11644370 @ 11644370  size=95 ===== */
// calls: CSpawnMonsterGroupInfo::GetInfoManager
// strings:
//   "CSpawnMonsterGroupInfo"

/* [RE-AUTO c0]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

void __thiscall FUN_11644370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x7c) =
           *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



/* ===== CMonsterSpawnGroup::_CheckRespawn @ 116448e0  size=184 ===== */
// strings:
//   "CMonsterSpawnGroup::_CheckRespawn"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterSpawnGroup::_CheckRespawn
   strings:
     ""CMonsterSpawnGroup::_CheckRespawn"" */

void __fastcall CMonsterSpawnGroup___CheckRespawn(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x32] < param_1[0x27]) {
    cVar1 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar1 != '\0') && (param_1[0x33] == -1)) {
      iVar3 = param_1[0x29];
      iVar4 = param_1[0x28];
      FUN_100ee470();
      iVar2 = FUN_100ee450();
      iVar4 = (int)((double)iVar2 * _DAT_11de98f0 * (double)((iVar3 - iVar4) + 1)) + iVar4;
      if (0 < iVar4) {
        iVar3 = FUN_100ea610("CMonsterSpawnGroup::_CheckRespawn",iVar4 * 1000,1,param_1,FUN_11644120
                             ,0);
        param_1[0x33] = iVar3;
        return;
      }
      FUN_11644120(0xffffffff,1);
    }
  }
  return;
}



/* ===== FUN_116ae000 @ 116ae000  size=206 ===== */
// calls: CSpawnMonsterGroupInfo::GetInfoManager
// strings:
//   "CSpawnMonsterGroupInfo"

/* [RE-AUTO c0]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

int __thiscall FUN_116ae000(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x278);
  if (0 < iVar3) {
    iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
        ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
       ) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
        iVar3 = FUN_116f86a0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30));
        if (iVar3 != 0) {
          if ((param_2 < 1) || (*(char *)(param_1 + 0xe4) == '\0')) {
            param_2 = *(int *)(param_1 + 0x38);
          }
          FUN_1184a310(param_2);
          FUN_1184a540(iVar3);
          iVar3 = FUN_1184a650(param_3);
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          FUN_116433b0();
          return iVar3;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_116f1b30 @ 116f1b30  size=6708 ===== */
// calls: memset, memcpy, atof
// strings:
//   u"Effect"
//   u"HideEffectOnDestroy"
//   u"GeomName"
//   u"TrailSound"
//   u"GeomOffsetX"
//   u"GeomOffsetY"
//   u"GeomOffsetZ"
//   u"GeomRotateX"
//   u"GeomRotateY"
//   u"GeomRotateZ"
//   u"VFXOffsetX"
//   u"VFXOffsetY"
//   u"VFXOffsetZ"
//   u"VFXRotateX"
//   u"VFXRotateY"
//   u"VFXRotateZ"
//   u"RotationSpeedX"
//   u"RotationSpeedY"
//   u"RotationSpeedZ"
//   u"GeomScale"

/* [RE-AUTO c0]
   calls: memset, memcpy, atof
   strings:
     "u"Effect""
     "u"HideEffectOnDestroy""
     "u"GeomName""
     "u"TrailSound""
     "u"GeomOffsetX""
     "u"GeomOffsetY""
     "u"GeomOffsetZ""
     "u"GeomRotateX""
     "u"GeomRotateY""
     "u"GeomRotateZ"" */

void __thiscall FUN_116f1b30(int param_1,int *param_2)

{
  char *pcVar1;
  float *pfVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  ushort *puVar12;
  float fVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int *piVar17;
  float10 fVar18;
  double dVar19;
  int local_4b0;
  int *local_4ac;
  int local_4a8;
  int *local_4a4;
  int *local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  int local_490;
  undefined8 local_48c;
  undefined8 local_484;
  float local_47c;
  int local_478;
  undefined1 local_471;
  ushort local_470 [16];
  ushort *local_450;
  ushort *local_44c;
  undefined1 local_448 [16];
  undefined1 *local_438;
  undefined1 *local_434;
  undefined1 *local_430;
  wchar_t awStack_42c [2];
  wchar_t awStack_428 [2];
  wchar_t awStack_424 [2];
  undefined1 *local_420;
  undefined2 local_41c [6];
  undefined1 **local_410;
  undefined1 **local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_4ac = param_2;
  local_4a8 = param_1;
  if ((DAT_1238e390 & 1) == 0) {
    DAT_1238e390 = DAT_1238e390 | 1;
    FUN_100f67b0(L"Effect");
  }
  if ((DAT_1238e390 & 2) == 0) {
    DAT_1238e390 = DAT_1238e390 | 2;
    iVar7 = FUN_100e1cb0(DAT_1238e38c);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e394);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e38c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x120,&DAT_1238e394);
  }
  if ((DAT_1238e390 & 4) == 0) {
    DAT_1238e390 = DAT_1238e390 | 4;
    FUN_100f67b0(L"HideEffectOnDestroy");
  }
  if ((DAT_1238e390 & 8) == 0) {
    DAT_1238e390 = DAT_1238e390 | 8;
    iVar7 = FUN_100e1cb0(DAT_1238e3a4);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e3a8);
  if (cVar6 != '\0') {
    local_478 = 0;
    cVar6 = (**(code **)(*param_2 + 0x2c))(&DAT_1238e3a8,&local_478);
    iVar7 = 0;
    if (cVar6 != '\0') {
      iVar7 = local_478;
    }
    *(bool *)(param_1 + 0x188) = iVar7 != 0;
  }
  if ((DAT_1238e390 & 0x10) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x10;
    FUN_100f67b0(L"GeomName");
  }
  if ((DAT_1238e390 & 0x20) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x20;
    iVar7 = FUN_100e1cb0(DAT_1238e3b8);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e3bc);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e3b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x1b0,&DAT_1238e3bc);
  }
  if ((DAT_1238e390 & 0x40) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x40;
    FUN_100f67b0(L"Effect");
  }
  if (-1 < (char)DAT_1238e390) {
    DAT_1238e390 = DAT_1238e390 | 0x80;
    iVar7 = FUN_100e1cb0(DAT_1238e3cc);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e3d0);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e3cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x120,&DAT_1238e3d0);
  }
  if ((DAT_1238e390 & 0x100) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x100;
    FUN_100f67b0(L"TrailSound");
  }
  if ((DAT_1238e390 & 0x200) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x200;
    iVar7 = FUN_100e1cb0(DAT_1238e3e0);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e3e4);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e3e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x138,&DAT_1238e3e4);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_1 + 0x148)) {
    pcVar1 = *(char **)(param_1 + 0x134);
    uVar14 = 0x4e67c6a7;
    cVar6 = *pcVar1;
    while (cVar6 != '\0') {
      pcVar1 = pcVar1 + 1;
      uVar14 = uVar14 ^ uVar14 * 0x20 + (uVar14 >> 2) + (int)cVar6;
      cVar6 = *pcVar1;
    }
    *(uint *)(local_4a8 + 0x150) = uVar14;
    param_1 = local_4a8;
  }
  if ((DAT_1238e390 & 0x400) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x400;
    FUN_100f67b0(L"GeomOffsetX");
  }
  if ((DAT_1238e390 & 0x800) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x800;
    iVar7 = FUN_100e1cb0(DAT_1238e3f4);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e3f8);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e3f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e3f8);
    local_484 = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x1000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x1000;
    FUN_100f67b0(L"GeomOffsetY");
  }
  if ((DAT_1238e390 & 0x2000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x2000;
    iVar7 = FUN_100e1cb0(DAT_1238e408);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e40c);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e408);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e40c);
    local_48c = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x4000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x4000;
    FUN_100f67b0(L"GeomOffsetZ");
  }
  if ((DAT_1238e390 & 0x8000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x8000;
    iVar7 = FUN_100e1cb0(DAT_1238e41c);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e420);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e41c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e420);
    local_498 = (double)fVar18;
  }
  uVar14 = DAT_1238e390;
  *(float *)(param_1 + 0x1c8) = (float)local_484;
  *(float *)(param_1 + 0x1cc) = (float)local_48c;
  *(float *)(param_1 + 0x1d0) = (float)local_498;
  if ((uVar14 & 0x10000) == 0) {
    DAT_1238e390 = uVar14 | 0x10000;
    FUN_100f67b0(L"GeomRotateX");
    uVar14 = DAT_1238e390;
  }
  if ((uVar14 & 0x20000) == 0) {
    DAT_1238e390 = uVar14 | 0x20000;
    iVar7 = FUN_100e1cb0(DAT_1238e430);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e434);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e430);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e434);
    local_484 = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x40000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x40000;
    FUN_100f67b0(L"GeomRotateY");
  }
  if ((DAT_1238e390 & 0x80000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x80000;
    iVar7 = FUN_100e1cb0(DAT_1238e444);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e448);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e444);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e448);
    local_48c = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x100000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x100000;
    FUN_100f67b0(L"GeomRotateZ");
  }
  if ((DAT_1238e390 & 0x200000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x200000;
    iVar7 = FUN_100e1cb0(DAT_1238e458);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e45c);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e458);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e45c);
    local_498 = (double)fVar18;
  }
  uVar14 = DAT_1238e390;
  *(float *)(param_1 + 0x1d4) = (float)local_484;
  *(float *)(param_1 + 0x1d8) = (float)local_48c;
  *(float *)(param_1 + 0x1dc) = (float)local_498;
  if ((uVar14 & 0x400000) == 0) {
    DAT_1238e390 = uVar14 | 0x400000;
    FUN_100f67b0(L"VFXOffsetX");
    uVar14 = DAT_1238e390;
  }
  if ((uVar14 & 0x800000) == 0) {
    DAT_1238e390 = uVar14 | 0x800000;
    iVar7 = FUN_100e1cb0(DAT_1238e46c);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e470);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e46c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e470);
    local_484 = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x1000000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x1000000;
    FUN_100f67b0(L"VFXOffsetY");
  }
  if ((DAT_1238e390 & 0x2000000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x2000000;
    iVar7 = FUN_100e1cb0(DAT_1238e480);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e484);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e480);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e484);
    local_48c = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x4000000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x4000000;
    FUN_100f67b0(L"VFXOffsetZ");
  }
  if ((DAT_1238e390 & 0x8000000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x8000000;
    iVar7 = FUN_100e1cb0(DAT_1238e494);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e498);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e494);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e498);
    local_498 = (double)fVar18;
  }
  uVar14 = DAT_1238e390;
  *(float *)(param_1 + 0x1e0) = (float)local_484;
  *(float *)(param_1 + 0x1e4) = (float)local_48c;
  *(float *)(param_1 + 0x1e8) = (float)local_498;
  if ((uVar14 & 0x10000000) == 0) {
    DAT_1238e390 = uVar14 | 0x10000000;
    FUN_100f67b0(L"VFXRotateX");
    uVar14 = DAT_1238e390;
  }
  if ((uVar14 & 0x20000000) == 0) {
    DAT_1238e390 = uVar14 | 0x20000000;
    iVar7 = FUN_100e1cb0(DAT_1238e4a8);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e4ac);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e4a8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e4ac);
    local_484 = (double)fVar18;
  }
  if ((DAT_1238e390 & 0x40000000) == 0) {
    DAT_1238e390 = DAT_1238e390 | 0x40000000;
    FUN_100f67b0(L"VFXRotateY");
  }
  if (-1 < (int)DAT_1238e390) {
    DAT_1238e390 = DAT_1238e390 | 0x80000000;
    iVar7 = FUN_100e1cb0(DAT_1238e4bc);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e4c0);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e4bc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e4c0);
    local_48c = (double)fVar18;
  }
  if ((DAT_1238e4d4 & 1) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 1;
    FUN_100f67b0(L"VFXRotateZ");
  }
  if ((DAT_1238e4d4 & 2) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 2;
    iVar7 = FUN_100e1cb0(DAT_1238e4d0);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e4d8);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e4d0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e4d8);
    local_498 = (double)fVar18;
  }
  uVar14 = DAT_1238e4d4;
  *(float *)(param_1 + 0x1ec) = (float)local_484;
  *(float *)(param_1 + 0x1f0) = (float)local_48c;
  *(float *)(param_1 + 500) = (float)local_498;
  if ((uVar14 & 4) == 0) {
    DAT_1238e4d4 = uVar14 | 4;
    FUN_100f67b0(L"RotationSpeedX");
    uVar14 = DAT_1238e4d4;
  }
  if ((uVar14 & 8) == 0) {
    DAT_1238e4d4 = uVar14 | 8;
    iVar7 = FUN_100e1cb0(DAT_1238e4e8);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e4ec);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e4e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e4ec);
    local_484 = (double)fVar18;
  }
  if ((DAT_1238e4d4 & 0x10) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x10;
    FUN_100f67b0(L"RotationSpeedY");
  }
  if ((DAT_1238e4d4 & 0x20) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x20;
    iVar7 = FUN_100e1cb0(DAT_1238e4fc);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e500);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e4fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e500);
    local_48c = (double)fVar18;
  }
  if ((DAT_1238e4d4 & 0x40) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x40;
    FUN_100f67b0(L"RotationSpeedZ");
  }
  if (-1 < (char)DAT_1238e4d4) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x80;
    iVar7 = FUN_100e1cb0(DAT_1238e510);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e514);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e510);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e514);
    local_498 = (double)fVar18;
  }
  uVar14 = DAT_1238e4d4;
  *(float *)(param_1 + 0x1f8) = (float)local_484;
  *(float *)(param_1 + 0x1fc) = (float)local_48c;
  *(float *)(param_1 + 0x200) = (float)local_498;
  if ((uVar14 & 0x100) == 0) {
    DAT_1238e4d4 = uVar14 | 0x100;
    FUN_100f67b0(L"GeomScale");
    uVar14 = DAT_1238e4d4;
  }
  if ((uVar14 & 0x200) == 0) {
    DAT_1238e4d4 = uVar14 | 0x200;
    iVar7 = FUN_100e1cb0(DAT_1238e524);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e528);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e524);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar18 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e528);
    *(float *)(param_1 + 0x204) = (float)fVar18;
  }
  local_438 = local_448;
  local_448[0] = 0;
  local_4a4 = (int *)0x0;
  local_4a0 = (int *)0x0;
  local_49c = 0;
  local_434 = local_438;
  if ((DAT_1238e4d4 & 0x400) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x400;
    FUN_100f67b0(L"DestroyEffect");
  }
  if ((DAT_1238e4d4 & 0x800) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x800;
    iVar7 = FUN_100e1cb0(DAT_1238e538);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e53c);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e538);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_448,&DAT_1238e53c);
  }
  iVar8 = FUN_100e4b30(local_448,&local_4a4,0x3b);
  local_484 = (double)CONCAT44(iVar8,(undefined4)local_484);
  local_490 = 0;
  iVar7 = param_1;
  if (0 < iVar8) {
    local_478 = 0;
    do {
      uVar14 = *(uint *)(param_1 + 0x19c);
      uVar9 = (int)local_4a4 + local_478;
      if (uVar14 == *(uint *)(param_1 + 0x1a0)) {
        if ((uVar9 < *(uint *)(param_1 + 0x198)) || (uVar14 <= uVar9)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_410 = &local_420;
          local_48c = (double)CONCAT44(*(int *)(uVar9 + 0x10),(undefined4)local_48c);
          local_47c = (float)(*(int *)(uVar9 + 0x10) - *(int *)(uVar9 + 0x14));
          local_498 = (double)CONCAT44(*(int *)(uVar9 + 0x14),(undefined4)local_498);
          local_4b0 = (int)local_47c + 1;
          local_40c = local_410;
          if (local_4b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_100b73e0();
          }
          if (0x10 < (int)local_47c + 1U) {
            local_410 = (undefined1 **)FUN_100b6d60((int)local_47c + 1U,&local_4b0);
            local_420 = (undefined1 *)(local_4b0 + (int)local_410);
          }
          local_40c = local_410;
          if (local_48c._4_4_ != local_498._4_4_) {
            pvVar10 = memcpy(local_410,local_498._4_4_,(size_t)local_47c);
            local_410 = (undefined1 **)((int)pvVar10 + (int)local_47c);
          }
          *(undefined1 *)local_410 = 0;
          FUN_100e2fc0(uVar14,&local_420,&local_471,1,1);
          if ((local_40c != &local_420) && (local_40c != (undefined1 **)0x0)) {
            FUN_10c3d5d0(local_40c);
          }
        }
        else {
          FUN_100e2fc0(uVar14,uVar9,&local_471,1,1);
        }
      }
      else {
        if (uVar14 != 0) {
          *(uint *)(uVar14 + 0x10) = uVar14;
          *(uint *)(uVar14 + 0x14) = uVar14;
          FUN_100b62c0(*(undefined4 *)(uVar9 + 0x14),*(undefined4 *)(uVar9 + 0x10));
        }
        *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 0x18;
      }
      local_490 = local_490 + 1;
      local_478 = local_478 + 0x18;
      iVar7 = local_4a8;
    } while (local_490 < local_484._4_4_);
  }
  iVar11 = *(int *)(iVar7 + 0x19c) - *(int *)(iVar7 + 0x198);
  iVar8 = iVar11 >> 0x1f;
  iVar16 = iVar7;
  if (iVar11 / 0x18 + iVar8 != iVar8) {
    if (local_4a4 != local_4a0) {
      FUN_100e2440(local_4a4,local_4a0,&local_471);
    }
    if ((DAT_1238e4d4 & 0x1000) == 0) {
      DAT_1238e4d4 = DAT_1238e4d4 | 0x1000;
      FUN_100f67b0(L"DestroyEffectScale");
    }
    if ((DAT_1238e4d4 & 0x2000) == 0) {
      DAT_1238e4d4 = DAT_1238e4d4 | 0x2000;
      iVar8 = FUN_100e1cb0(DAT_1238e54c);
      FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
    }
    cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e550);
    if (cVar6 == '\0') {
      local_408 = cVar6;
      memset(local_407,0,0x3ff);
      iVar8 = FUN_100e1c50(DAT_1238e54c);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(local_448,&DAT_1238e550);
    }
    iVar8 = FUN_100e4b30(local_448,&local_4a4,0x3b);
    local_484 = (double)CONCAT44(iVar8,(undefined4)local_484);
    if (0 < iVar8) {
      iVar11 = 0;
      do {
        dVar19 = atof(*(char **)(iVar11 + 0x14 + (int)local_4a4));
        local_47c = (float)dVar19;
        pfVar2 = *(float **)(iVar7 + 0x1a8);
        if (pfVar2 == *(float **)(iVar7 + 0x1ac)) {
          FUN_104c1300(pfVar2,&local_47c,&local_471,1,1);
        }
        else {
          *pfVar2 = local_47c;
          *(int *)(iVar7 + 0x1a8) = *(int *)(iVar7 + 0x1a8) + 4;
        }
        iVar11 = iVar11 + 0x18;
        iVar8 = iVar8 + -1;
        iVar16 = local_4a8;
        param_2 = local_4ac;
      } while (iVar8 != 0);
    }
  }
  local_450 = local_470;
  local_470[0] = 0;
  local_44c = local_450;
  if ((DAT_1238e4d4 & 0x4000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x4000;
    DAT_1238e560 = 0xffffffff;
    local_410 = &local_430;
    local_40c = local_410;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  if ((DAT_1238e4d4 & 0x8000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x8000;
    iVar7 = FUN_100e1cb0(DAT_1238e560);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e564);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e560);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_470,&DAT_1238e564);
  }
  FUN_100ed090(local_470,iVar16 + 0x16c,3);
  if ((DAT_1238e4d4 & 0x10000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x10000;
    DAT_1238e574 = -1;
    local_40c = &local_430;
    pvVar10 = memcpy(local_40c,L"MeshHitEffect",0x1a);
    local_410 = (undefined1 **)((int)pvVar10 + 0x1a);
    *(undefined2 *)local_410 = 0;
    iVar7 = FUN_100e1bf0(&local_430);
    if (iVar7 == -1) {
      iVar7 = FUN_100e1c30(&local_430);
    }
    if (iVar7 != DAT_1238e574) {
      DAT_1238e574 = iVar7;
    }
    if ((local_40c != &local_430) && (local_40c != (undefined1 **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1238e4d4 & 0x20000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x20000;
    iVar7 = FUN_100e1cb0(DAT_1238e574);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e578);
  if (cVar6 == '\0') {
    local_408 = cVar6;
    memset(local_407,0,0x3ff);
    iVar7 = FUN_100e1c50(DAT_1238e574);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar7 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_470,&DAT_1238e578);
  }
  if (((int)local_450 - (int)local_44c & 0xfffffffeU) == 4) {
    iVar7 = 2;
    puVar15 = &DAT_11d42030;
    puVar12 = local_44c;
    do {
      if (*puVar12 != *puVar15) {
        if ((-(uint)(*puVar12 < *puVar15) & 0xfffffffe) != 0xffffffff) goto LAB_116f3441;
        *(undefined4 *)(iVar16 + 0x184) = 1;
        goto LAB_116f344b;
      }
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined4 *)(iVar16 + 0x184) = 1;
  }
  else {
LAB_116f3441:
    *(undefined4 *)(iVar16 + 0x184) = 0;
  }
LAB_116f344b:
  if ((DAT_1238e4d4 & 0x40000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x40000;
    DAT_1238e588 = -1;
    local_40c = &local_430;
    local_410 = (undefined1 **)local_41c;
    local_420 = (undefined1 *)u_SpawnScale_11d42038._16_4_;
    local_430 = (undefined1 *)u_SpawnScale_11d42038._0_4_;
    awStack_42c[0] = u_SpawnScale_11d42038[2];
    awStack_42c[1] = u_SpawnScale_11d42038[3];
    awStack_428[0] = u_SpawnScale_11d42038[4];
    awStack_428[1] = u_SpawnScale_11d42038[5];
    awStack_424[0] = u_SpawnScale_11d42038[6];
    awStack_424[1] = u_SpawnScale_11d42038[7];
    local_41c[0] = 0;
    iVar7 = FUN_100e1bf0(&local_430);
    if (iVar7 == -1) {
      iVar7 = FUN_100e1c30(&local_430);
    }
    if (iVar7 != DAT_1238e588) {
      DAT_1238e588 = iVar7;
    }
    if ((local_40c != &local_430) && (local_40c != (undefined1 **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1238e4d4 & 0x80000) == 0) {
    DAT_1238e4d4 = DAT_1238e4d4 | 0x80000;
    iVar7 = FUN_100e1cb0(DAT_1238e588);
    FUN_10a30020(*(undefined4 *)(iVar7 + 0x24));
  }
  cVar6 = (**(code **)(*param_2 + 0x10))(&DAT_1238e58c);
  if (cVar6 != '\0') {
    local_47c = 1.4013e-45;
    cVar6 = (**(code **)(*param_2 + 0x2c))(&DAT_1238e58c,&local_47c);
    fVar13 = 1.4013e-45;
    if (cVar6 != '\0') {
      fVar13 = local_47c;
    }
    *(bool *)(iVar16 + 0x208) = fVar13 != 0.0;
  }
  if ((local_44c != local_470) && (local_44c != (ushort *)0x0)) {
    FUN_10c3d5d0(local_44c);
  }
  piVar5 = local_4a4;
  if (local_4a0 != local_4a4) {
    piVar17 = local_4a0 + -1;
    do {
      piVar3 = (int *)*piVar17;
      if ((piVar3 != piVar17 + -5) && (piVar3 != (int *)0x0)) {
        FUN_10c3d5d0(piVar3);
      }
      piVar3 = piVar17 + -5;
      piVar17 = piVar17 + -6;
    } while (piVar3 != piVar5);
  }
  if (local_4a4 != (int *)0x0) {
    FUN_10c3d5d0(local_4a4);
  }
  if ((local_434 != local_448) && (local_434 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_434);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_116f8790 @ 116f8790  size=1810 ===== */
// calls: memset
// strings:
//   u"Name"
//   u"MonsterID"
//   u"SpawnWeight"
//   u"LevelMin"
//   u"LevelMax"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Name""
     "u"MonsterID""
     "u"SpawnWeight""
     "u"LevelMin""
     "u"LevelMax"" */

void __thiscall FUN_116f8790(int param_1,int *param_2)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int ***pppiVar6;
  undefined *puVar7;
  undefined1 local_438 [8];
  int local_430;
  int *local_42c;
  undefined8 local_428;
  int local_420 [2];
  int *local_418;
  int local_414;
  int **local_410;
  int **local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_430 = param_1;
  if ((DAT_1238eab8 & 1) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_1238eab8 & 2) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 2;
    iVar3 = FUN_100e1cb0(DAT_1238eab4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eabc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238eab4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1238eabc);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_1238eab8 & 4) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 4;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_1238eab8 & 8) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 8;
    iVar3 = FUN_100e1cb0(DAT_1238eacc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238ead0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1238eacc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x14,&DAT_1238ead0);
  }
  FUN_117b9280();
  FUN_117b92a0(param_2);
  if ((DAT_1238eab8 & 0x10) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 0x10;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_1238eab8 & 0x20) == 0) {
    DAT_1238eab8 = DAT_1238eab8 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_1238eae0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eae4);
  if (cVar2 == '\0') {
LAB_116f8d90:
    local_410 = (int **)local_420;
    local_420[0]._0_1_ = 0;
    local_40c = local_410;
    if ((DAT_1238eab8 & 0x40) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x40;
      FUN_100f67b0(L"MonsterID");
    }
    if (-1 < (char)DAT_1238eab8) {
      DAT_1238eab8 = DAT_1238eab8 | 0x80;
      iVar3 = FUN_100e1cb0(DAT_1238eaf4);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eaf8);
    if (cVar2 == '\0') {
      local_408 = cVar2;
      memset(local_407,0,0x3ff);
      uVar4 = DAT_1238eaf4;
      goto LAB_116f8e28;
    }
    puVar7 = &DAT_1238eaf8;
LAB_116f8e59:
    (**(code **)(*param_2 + 0x24))(local_420,puVar7);
  }
  else {
    local_428 = CONCAT44(0xffffffff,(undefined4)local_428);
    cVar2 = (**(code **)(*param_2 + 0x2c))(&DAT_1238eae4,(int)&local_428 + 4);
    local_42c = (int *)(int **)0xffffffff;
    if (cVar2 != '\0') {
      local_42c = (int *)local_428._4_4_;
    }
    if ((int **)local_42c == (int **)0xffffffff) goto LAB_116f8d90;
    if ((DAT_1238eab8 & 0x100) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x100;
      FUN_100f67b0(L"SpawnWeight");
    }
    if ((DAT_1238eab8 & 0x200) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x200;
      iVar3 = FUN_100e1cb0(DAT_1238eb08);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb0c);
    if (cVar2 != '\0') {
      local_428 = local_428 & 0xffffffff;
      cVar2 = (**(code **)(*param_2 + 0x2c))(&DAT_1238eb0c,(int)&local_428 + 4);
      iVar3 = 0;
      if (cVar2 != '\0') {
        iVar3 = (int)local_428._4_4_;
      }
      if (0 < iVar3) {
        FUN_117b9240(local_438);
        local_428 = 0;
        local_410 = (int **)&local_410;
        local_40c = local_410;
        FUN_116f9310(&local_418);
        pppiVar6 = (int ***)local_410;
        if ((int ***)local_410 != &local_410) {
          do {
            pppiVar1 = (int ***)*pppiVar6;
            FUN_10c3d5d0(pppiVar6);
            pppiVar6 = pppiVar1;
          } while (pppiVar1 != &local_410);
        }
        local_410 = (int **)&local_410;
        local_40c = local_410;
        FUN_117b9290();
        local_418 = local_42c;
        local_414 = iVar3;
        if ((DAT_1238eab8 & 0x1000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x1000;
          FUN_100f67b0(L"LevelMin");
        }
        if ((DAT_1238eab8 & 0x2000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x2000;
          iVar3 = FUN_100e1cb0(DAT_1238eb30);
          FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
        }
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb34);
        if (cVar2 == '\0') {
          local_408 = cVar2;
          memset(local_407,0,0x3ff);
          iVar3 = FUN_100e1c50(DAT_1238eb30);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
          FUN_100ee330(&local_408,1);
          ppiVar5 = (int **)local_42c;
        }
        else {
          ppiVar5 = (int **)(**(code **)(*param_2 + 0x20))(&DAT_1238eb34);
        }
        if ((DAT_1238eab8 & 0x4000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x4000;
          FUN_100f67b0(L"LevelMax");
        }
        if ((DAT_1238eab8 & 0x8000) == 0) {
          DAT_1238eab8 = DAT_1238eab8 | 0x8000;
          iVar3 = FUN_100e1cb0(DAT_1238eb44);
          FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
        }
        cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb48);
        if (cVar2 == '\0') {
          local_408 = cVar2;
          memset(local_407,0,0x3ff);
          iVar3 = FUN_100e1c50(DAT_1238eb44);
          FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
          FUN_100ee330(&local_408,1);
          local_40c = (int **)local_42c;
        }
        else {
          local_40c = (int **)(**(code **)(*param_2 + 0x20))(&DAT_1238eb48);
        }
        local_410 = ppiVar5;
        FUN_11645210(&local_418);
        goto LAB_116f8e84;
      }
    }
    local_410 = (int **)local_420;
    local_420[0]._0_1_ = 0;
    local_40c = local_410;
    if ((DAT_1238eab8 & 0x400) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x400;
      FUN_100f67b0(L"SpawnWeight");
    }
    if ((DAT_1238eab8 & 0x800) == 0) {
      DAT_1238eab8 = DAT_1238eab8 | 0x800;
      iVar3 = FUN_100e1cb0(DAT_1238eb1c);
      FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
    }
    cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_1238eb20);
    if (cVar2 != '\0') {
      puVar7 = &DAT_1238eb20;
      goto LAB_116f8e59;
    }
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    uVar4 = DAT_1238eb1c;
LAB_116f8e28:
    iVar3 = FUN_100e1c50(uVar4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  if ((local_40c != (int **)local_420) && (local_40c != (int **)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
LAB_116f8e84:
  FUN_117b9290();
  FUN_11a89daa();
  return;
}



/* ===== FUN_116fc320 @ 116fc320  size=101 ===== */
// strings:
//   "LevelSpawnBatchInfo"

/* WARNING: Removing unreachable block (ram,0x116fc35b) */
/* WARNING: Removing unreachable block (ram,0x116fc35f) */
/* WARNING: Removing unreachable block (ram,0x116fc376) */
/* [RE-AUTO c0]
   strings:
     ""LevelSpawnBatchInfo"" */

void FUN_116fc320(undefined4 *param_1)

{
  if ((DAT_1238eb5c & 1) == 0) {
    DAT_1238eb5c = DAT_1238eb5c | 1;
    FUN_1024f010("LevelSpawnBatchInfo");
  }
  *param_1 = DAT_1238eb58;
  return;
}



/* ===== FUN_116fcc00 @ 116fcc00  size=427 ===== */
// calls: memset
// strings:
//   u"SpawnGroupID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"SpawnGroupID"" */

void __thiscall FUN_116fcc00(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1238ebf8 & 1) == 0) {
    DAT_1238ebf8 = DAT_1238ebf8 | 1;
    FUN_100f67b0(&DAT_11d42688);
  }
  if ((DAT_1238ebf8 & 2) == 0) {
    DAT_1238ebf8 = DAT_1238ebf8 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238ebf4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238ebfc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238ebf4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238ebfc);
    *param_1 = uVar3;
  }
  if ((DAT_1238ebf8 & 4) == 0) {
    DAT_1238ebf8 = DAT_1238ebf8 | 4;
    FUN_100f67b0(L"SpawnGroupID");
  }
  if ((DAT_1238ebf8 & 8) == 0) {
    DAT_1238ebf8 = DAT_1238ebf8 | 8;
    iVar2 = FUN_100e1cb0(DAT_1238ec0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1238ec10);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1238ec0c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1238ec10);
  param_1[1] = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_117045a0 @ 117045a0  size=78 ===== */
// calls: CFGModuleOnMonsterStateAbnormalInfo::FindInfoByKey
// strings:
//   "CFGModuleOnMonsterStateAbnormalInfo"

/* [RE-AUTO c0]
   calls: CFGModuleOnMonsterStateAbnormalInfo::GetManagers
   strings:
     ""CFGModuleOnMonsterStateAbnormalInfo"" */

undefined4 FUN_117045a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CFGModuleOnMonsterStateAbnormalInfo__FindInfoByKey
                    (0,"CFGModuleOnMonsterStateAbnormalInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11711230 @ 11711230  size=1349 ===== */
// strings:
//   "Entity"
//   "EntityClass"
//   "MHMonsterSpawnPoint"
//   "ProximityTrigger"
//   "EnterInstance"
//   "SwitchRegionTrigger"
//   "MHPlayerSpawnPoint"
//   "LogicPoint"
//   "MHPathPoint"
//   "WayPointList"

/* [RE-AUTO c0]
   strings:
     ""Entity""
     ""EntityClass""
     ""MHMonsterSpawnPoint""
     ""ProximityTrigger""
     ""EnterInstance""
     ""SwitchRegionTrigger""
     ""MHPlayerSpawnPoint""
     ""LogicPoint""
     ""MHPathPoint""
     ""WayPointList"" */

void __thiscall FUN_11711230(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 ******ppppppuVar4;
  undefined4 ******ppppppuVar5;
  undefined8 local_d4;
  undefined1 local_cc [36];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 local_90 [24];
  undefined1 local_78 [8];
  int local_70;
  int local_68;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  undefined1 local_54 [8];
  undefined4 *****local_4c;
  undefined4 *****local_48;
  undefined4 *****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined1 local_38 [4];
  undefined4 *****local_34;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  undefined4 *****local_28;
  undefined4 *****local_24;
  undefined1 local_20 [8];
  undefined4 *****local_18;
  undefined4 *****local_14;
  undefined4 *****local_10;
  undefined4 *****local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_100f68b0(param_2);
  if (iVar2 == 0) {
    FUN_11a89daa();
    return;
  }
  iVar3 = FUN_100f3cb0();
  if (iVar3 != 0) {
    iVar3 = FUN_100f3ce0("Entity");
    while (iVar3 != 0) {
      local_98 = local_a8;
      local_a8[0] = 0;
      local_94 = local_98;
      FUN_100f69d0(iVar3,"EntityClass",local_98,&DAT_11cd58ec);
      cVar1 = FUN_100fd0c0(local_a8,"MHMonsterSpawnPoint");
      if (cVar1 != '\0') {
        local_4c = &local_5c;
        local_5c._0_1_ = 0;
        local_34 = &local_44;
        local_d4 = 0;
        local_10 = &local_10;
        local_44 = (undefined4 *****)((uint)local_44 & 0xffffff00);
        local_48 = local_4c;
        local_30 = local_34;
        local_c = local_10;
        FUN_118a3500(iVar3);
        local_d4 = CONCAT44(local_48,(undefined4)local_d4);
        if (((undefined4 ******)local_48 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_1170ba20((int)&local_d4 + 4), iVar3 == param_1 + 0xc0)) {
          FUN_1170aa90(&local_5c,local_78);
          FUN_1170ee70();
        }
        FUN_1170ea60();
        goto LAB_11711725;
      }
      cVar1 = FUN_100fd0c0(local_a8,"ProximityTrigger");
      if (cVar1 == '\0') {
        cVar1 = FUN_100fd0c0(local_a8,"EnterInstance");
        if (cVar1 != '\0') {
          local_30 = &local_40;
          local_40 = (undefined4 ****)((uint)local_40 & 0xffffff00);
          local_18 = &local_28;
          local_28 = (undefined4 *****)((uint)local_28 & 0xffffff00);
          local_10 = (undefined4 ******)0x0;
          local_2c = local_30;
          local_14 = local_18;
          FUN_118a33d0(iVar3);
          local_d4 = CONCAT44(local_2c,(undefined4)local_d4);
          if (((undefined4 ******)local_2c == (undefined4 ******)0x0) ||
             (iVar3 = FUN_1170b700((int)&local_d4 + 4), iVar3 == param_1 + 0x78)) {
            FUN_1170a940(&local_40,&local_5c);
            FUN_1170ee00();
          }
          if (((undefined4 ******)local_14 != &local_28) &&
             ((undefined4 ******)local_14 != (undefined4 ******)0x0)) {
            FUN_10c3d5d0(local_14);
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_11711584;
        }
        cVar1 = FUN_100fd0c0(local_a8,"SwitchRegionTrigger");
        if (cVar1 != '\0') {
          FUN_1170e190();
          FUN_118a3270(iVar3);
          local_d4 = CONCAT44(local_44,(undefined4)local_d4);
          if (((undefined4 ******)local_44 == (undefined4 ******)0x0) ||
             (iVar3 = FUN_1170c060((int)&local_d4 + 4), iVar3 == param_1 + 0x60)) {
            FUN_1170af50(&local_58,local_90);
            FUN_1170f090();
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_1171156d;
        }
        cVar1 = FUN_100fd0c0(local_a8,"MHPlayerSpawnPoint");
        if (cVar1 == '\0') {
          cVar1 = FUN_100fd0c0(local_a8,"LogicPoint");
          if (cVar1 == '\0') {
            cVar1 = FUN_100fd0c0(local_a8,"MHPathPoint");
            if (cVar1 == '\0') {
              cVar1 = FUN_100fd0c0(local_a8,"WayPointList");
              if (cVar1 != '\0') {
                FUN_118a3820(iVar3);
              }
            }
            else {
              FUN_1170dcc0();
              FUN_118a3b90(iVar3);
              FUN_1170abc0(local_cc,local_cc);
              FUN_1170ef10();
              FUN_1170eac0();
            }
          }
          else {
            local_28 = (undefined4 *****)local_38;
            local_38[0] = 0;
            local_10 = (undefined4 *****)local_20;
            local_20[0] = 0;
            local_24 = local_28;
            local_c = local_10;
            FUN_118a3710(iVar3);
            FUN_1170ff40(local_54);
            FUN_1170ea20();
          }
        }
        else {
          FUN_1170dfb0();
          FUN_118a3020(iVar3);
          if (local_68 == 3) {
            cVar1 = FUN_117118e0();
            if (cVar1 == '\0') {
              FUN_11710000(local_90);
              FUN_1170eca0();
              goto LAB_11711725;
            }
          }
          else if (local_70 == 0) {
            cVar1 = FUN_11711850(local_40);
            if (cVar1 == '\0') {
              FUN_1170fee0(local_90);
            }
          }
          else {
            cVar1 = FUN_11711820();
            if (cVar1 == '\0') {
              FUN_1170fec0(local_90);
              FUN_1170eca0();
              goto LAB_11711725;
            }
          }
          FUN_1170eca0();
        }
      }
      else {
        local_48 = &local_58;
        local_58._0_1_ = 0;
        local_2c = &local_3c;
        local_14 = &local_24;
        local_3c._0_1_ = 0;
        local_24 = (undefined4 *****)((uint)local_24 & 0xffffff00);
        local_40 = (undefined4 *****)0x0;
        local_44 = local_48;
        local_28 = local_2c;
        local_10 = local_14;
        FUN_118a2e90(iVar3);
        local_d4 = CONCAT44(local_28,(undefined4)local_d4);
        if (((undefined4 ******)local_28 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_1170bed0((int)&local_d4 + 4), iVar3 == param_1 + 0x48)) {
          FUN_1170ae20(&local_3c,local_78);
          FUN_1170f000();
          FUN_1170a7d0(&local_40,local_78);
          FUN_1170f000();
        }
        if (((undefined4 ******)local_10 != &local_24) &&
           ((undefined4 ******)local_10 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(local_10);
        }
        ppppppuVar5 = (undefined4 ******)&local_3c;
        ppppppuVar4 = (undefined4 ******)local_28;
LAB_1171156d:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(ppppppuVar4);
        }
        ppppppuVar5 = (undefined4 ******)&local_58;
        ppppppuVar4 = (undefined4 ******)local_44;
LAB_11711584:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(ppppppuVar4);
        }
      }
LAB_11711725:
      iVar3 = FUN_100f3d50("Entity");
      if ((local_94 != local_a8) && (local_94 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_94);
      }
    }
  }
  FUN_100f6910(iVar2);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11741100 @ 11741100  size=48 ===== */
// strings:
//   "WildHunt"

/* [RE-AUTO c0]
   strings:
     ""WildHunt"" */

void FUN_11741100(undefined4 *param_1)

{
  if ((DAT_12390988 & 1) == 0) {
    DAT_12390988 = DAT_12390988 | 1;
    FUN_1024f010("WildHunt");
  }
  *param_1 = DAT_12390984;
  return;
}



/* ===== FUN_11741130 @ 11741130  size=48 ===== */
// strings:
//   "WildHuntConst"

/* [RE-AUTO c0]
   strings:
     ""WildHuntConst"" */

void FUN_11741130(undefined4 *param_1)

{
  if ((DAT_12390990 & 1) == 0) {
    DAT_12390990 = DAT_12390990 | 1;
    FUN_1024f010("WildHuntConst");
  }
  *param_1 = DAT_1239098c;
  return;
}



/* ===== FUN_1177ed70 @ 1177ed70  size=37 ===== */
// strings:
//   "GiftBagGroupAllRFTCheckDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupAllRFTCheckDef"" */

int FUN_1177ed70(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupAllRFTCheckDef","");
  return param_1;
}



/* ===== FUN_1177eda0 @ 1177eda0  size=37 ===== */
// strings:
//   "GiftBagGroupCharLevelCheckRngDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupCharLevelCheckRngDef"" */

int FUN_1177eda0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupCharLevelCheckRngDef","");
  return param_1;
}



/* ===== FUN_1177edd0 @ 1177edd0  size=37 ===== */
// strings:
//   "GiftBagGroupDRFTCheckDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupDRFTCheckDef"" */

int FUN_1177edd0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupDRFTCheckDef","");
  return param_1;
}



/* ===== FUN_1177ee00 @ 1177ee00  size=37 ===== */
// strings:
//   "GiftBagGroupDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupDef"" */

int FUN_1177ee00(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupDef","");
  return param_1;
}



/* ===== FUN_1177ee30 @ 1177ee30  size=37 ===== */
// strings:
//   "GiftBagGroupHRLevelCheckRngDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupHRLevelCheckRngDef"" */

int FUN_1177ee30(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupHRLevelCheckRngDef","");
  return param_1;
}



/* ===== FUN_11780a50 @ 11780a50  size=37 ===== */
// strings:
//   "GiftBagGroupAllRFTCheckDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupAllRFTCheckDef"" */

int FUN_11780a50(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupAllRFTCheckDef","");
  return param_1;
}



/* ===== FUN_11780a80 @ 11780a80  size=37 ===== */
// strings:
//   "GiftBagGroupCharLevelCheckRngDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupCharLevelCheckRngDef"" */

int FUN_11780a80(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupCharLevelCheckRngDef","");
  return param_1;
}



/* ===== FUN_11780ab0 @ 11780ab0  size=37 ===== */
// strings:
//   "GiftBagGroupDRFTCheckDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupDRFTCheckDef"" */

int FUN_11780ab0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupDRFTCheckDef","");
  return param_1;
}



/* ===== FUN_11780ae0 @ 11780ae0  size=37 ===== */
// strings:
//   "GiftBagGroupDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupDef"" */

int FUN_11780ae0(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupDef","");
  return param_1;
}



/* ===== FUN_11780b10 @ 11780b10  size=37 ===== */
// strings:
//   "GiftBagGroupHRLevelCheckRngDef"

/* [RE-AUTO c0]
   strings:
     ""GiftBagGroupHRLevelCheckRngDef"" */

int FUN_11780b10(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("GiftBagGroupHRLevelCheckRngDef","");
  return param_1;
}



/* ===== FUN_117bf4e0 @ 117bf4e0  size=4696 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"Name"
//   u"Title"
//   u"LevelEnabled"
//   u"HPMul"
//   u"AttackMul"
//   u"DefenseMul"
//   u"CRIMul"
//   u"AvatarId1"
//   u"AvatarId2"
//   u"AvatarId3"
//   u"AvatarId4"
//   u"AvatarId5"
//   u"AvatarId6"
//   u"AvatarId7"
//   u"AvatarId8"
//   u"SkeletonFile"
//   u"BlackBoardName"
//   u"BTFolder"
//   u"BTFiles"
//   u"EventBT"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Name""
     "u"Title""
     "u"LevelEnabled""
     "u"HPMul""
     "u"AttackMul""
     "u"DefenseMul""
     "u"CRIMul""
     "u"AvatarId1""
     "u"AvatarId2""
     "u"AvatarId3"" */

void __thiscall FUN_117bf4e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  float10 fVar6;
  undefined1 local_434 [4];
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123929f8 & 1) == 0) {
    DAT_123929f8 = DAT_123929f8 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123929f8 & 2) == 0) {
    DAT_123929f8 = DAT_123929f8 | 2;
    iVar2 = FUN_100e1cb0(DAT_123929f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123929fc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123929f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123929fc);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_123929f8 & 4) == 0) {
    DAT_123929f8 = DAT_123929f8 | 4;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123929f8 & 8) == 0) {
    DAT_123929f8 = DAT_123929f8 | 8;
    iVar2 = FUN_100e1cb0(DAT_12392a0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a10);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a0c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_12392a10);
    puVar3 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123929f8 & 0x10) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x10;
    FUN_100f67b0(L"Title");
  }
  if ((DAT_123929f8 & 0x20) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12392a20);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a24);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a20);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_12392a24);
    puVar3 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123929f8 & 0x40) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x40;
    FUN_100f67b0(L"LevelEnabled");
  }
  if (-1 < (char)DAT_123929f8) {
    DAT_123929f8 = DAT_123929f8 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12392a34);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a38);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a34);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392a38);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
  }
  if ((DAT_123929f8 & 0x100) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x100;
    FUN_100f67b0(L"HPMul");
  }
  if ((DAT_123929f8 & 0x200) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12392a48);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a4c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a48);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12392a4c);
    *(float *)(param_1 + 0x20) = (float)fVar6;
  }
  if ((DAT_123929f8 & 0x400) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x400;
    FUN_100f67b0(L"AttackMul");
  }
  if ((DAT_123929f8 & 0x800) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12392a5c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a60);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12392a60);
    *(float *)(param_1 + 0x24) = (float)fVar6;
  }
  if ((DAT_123929f8 & 0x1000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x1000;
    FUN_100f67b0(L"DefenseMul");
  }
  if ((DAT_123929f8 & 0x2000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12392a70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a74);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12392a74);
    *(float *)(param_1 + 0x28) = (float)fVar6;
  }
  if ((DAT_123929f8 & 0x4000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x4000;
    FUN_100f67b0(L"CRIMul");
  }
  if ((DAT_123929f8 & 0x8000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12392a84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a88);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar6 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12392a88);
    *(float *)(param_1 + 0x2c) = (float)fVar6;
  }
  if ((DAT_123929f8 & 0x10000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x10000;
    FUN_100f67b0(L"AvatarId1");
  }
  if ((DAT_123929f8 & 0x20000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12392a98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392a9c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392a98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392a9c);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  if ((DAT_123929f8 & 0x40000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x40000;
    FUN_100f67b0(L"AvatarId2");
  }
  if ((DAT_123929f8 & 0x80000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12392aac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392ab0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392aac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392ab0);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
  }
  if ((DAT_123929f8 & 0x100000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x100000;
    FUN_100f67b0(L"AvatarId3");
  }
  if ((DAT_123929f8 & 0x200000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12392ac0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392ac4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392ac0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392ac4);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  if ((DAT_123929f8 & 0x400000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x400000;
    FUN_100f67b0(L"AvatarId4");
  }
  if ((DAT_123929f8 & 0x800000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12392ad4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392ad8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392ad4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392ad8);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  if ((DAT_123929f8 & 0x1000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x1000000;
    FUN_100f67b0(L"AvatarId5");
  }
  if ((DAT_123929f8 & 0x2000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12392ae8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392aec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392ae8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392aec);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
  }
  if ((DAT_123929f8 & 0x4000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x4000000;
    FUN_100f67b0(L"AvatarId6");
  }
  if ((DAT_123929f8 & 0x8000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12392afc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b00);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392afc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392b00);
    *(undefined4 *)(param_1 + 0x44) = uVar4;
  }
  if ((DAT_123929f8 & 0x10000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x10000000;
    FUN_100f67b0(L"AvatarId7");
  }
  if ((DAT_123929f8 & 0x20000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12392b10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b14);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b10);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392b14);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
  }
  if ((DAT_123929f8 & 0x40000000) == 0) {
    DAT_123929f8 = DAT_123929f8 | 0x40000000;
    FUN_100f67b0(L"AvatarId8");
  }
  if (-1 < (int)DAT_123929f8) {
    DAT_123929f8 = DAT_123929f8 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12392b24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b28);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b24);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392b28);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
  }
  if ((DAT_12392b3c & 1) == 0) {
    DAT_12392b3c = DAT_12392b3c | 1;
    FUN_100f67b0(L"SkeletonFile");
  }
  if ((DAT_12392b3c & 2) == 0) {
    DAT_12392b3c = DAT_12392b3c | 2;
    iVar2 = FUN_100e1cb0(DAT_12392b38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b40);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b38);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x50,&DAT_12392b40);
  }
  if ((DAT_12392b3c & 4) == 0) {
    DAT_12392b3c = DAT_12392b3c | 4;
    FUN_100f67b0(L"BlackBoardName");
  }
  if ((DAT_12392b3c & 8) == 0) {
    DAT_12392b3c = DAT_12392b3c | 8;
    iVar2 = FUN_100e1cb0(DAT_12392b50);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b54);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b50);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x68,&DAT_12392b54);
  }
  if ((DAT_12392b3c & 0x10) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x10;
    FUN_100f67b0(L"BTFolder");
  }
  if ((DAT_12392b3c & 0x20) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12392b64);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b68);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b64);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x80,&DAT_12392b68);
  }
  if ((DAT_12392b3c & 0x40) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x40;
    FUN_100f67b0(L"BTFiles");
  }
  if (-1 < (char)DAT_12392b3c) {
    DAT_12392b3c = DAT_12392b3c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12392b78);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b7c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b78);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x98,&DAT_12392b7c);
  }
  if ((DAT_12392b3c & 0x100) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x100;
    FUN_100f67b0(L"EventBT");
  }
  if ((DAT_12392b3c & 0x200) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12392b8c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392b90);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392b8c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0xb0,&DAT_12392b90);
  }
  if ((DAT_12392b3c & 0x400) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x400;
    FUN_100f67b0(L"Gender");
  }
  if ((DAT_12392b3c & 0x800) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12392ba0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392ba4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392ba0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392ba4);
    *(undefined4 *)(param_1 + 200) = uVar4;
  }
  if ((DAT_12392b3c & 0x1000) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x1000;
    FUN_100f67b0(L"MonsterEnabled");
  }
  if ((DAT_12392b3c & 0x2000) == 0) {
    DAT_12392b3c = DAT_12392b3c | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12392bb4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392bb8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_12392bb4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_12392bb8);
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11807a20 @ 11807a20  size=52 ===== */
// calls: CWildHuntTaskRatioInfo::GetInfoManager
// strings:
//   "CWildHuntTaskRatioInfo"

/* [RE-AUTO c0]
   calls: CWildHuntTaskRatioInfo::GetManagers
   strings:
     ""CWildHuntTaskRatioInfo"" */

undefined4 FUN_11807a20(int param_1)

{
  int iVar1;
  
  iVar1 = CWildHuntTaskRatioInfo__GetInfoManager(0,"CWildHuntTaskRatioInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1189c230 @ 1189c230  size=666 ===== */
// strings:
//   "LevelID"
//   "MonsterSpawnGroups"
//   "Entities"
//   "FlowgraphEnable"
//   "ConfigSets"
//   "DefaultConfigSet"

/* [RE-AUTO c0]
   strings:
     ""LevelID""
     ""MonsterSpawnGroups""
     ""Entities""
     ""FlowgraphEnable""
     ""ConfigSets""
     ""DefaultConfigSet"" */

void __thiscall FUN_1189c230(int *param_1,int param_2)

{
  undefined4 ******ppppppuVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 ****local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 *****local_18;
  undefined4 *****local_14;
  undefined4 *****local_10;
  undefined4 *****local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((((param_2 == 0) || (local_40 = FUN_100f3cb0(), local_40 == 0)) ||
      (cVar2 = FUN_100f6ef0(local_40,"LevelID",&local_3c), cVar2 == '\0')) ||
     (local_3c != *(int *)(*param_1 + 0x10))) {
    FUN_11a89daa();
    return;
  }
  iVar3 = FUN_100f3ce0("MonsterSpawnGroups");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      FUN_1189bdb0();
      cVar2 = FUN_1189ca40(iVar3,param_1);
      if (cVar2 != '\0') {
        FUN_1189dab0(local_38);
      }
      FUN_116ad790();
      iVar3 = FUN_100f3d20();
    }
  }
  iVar3 = FUN_100f3ce0("Entities");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      local_24._0_1_ = 0;
      local_14 = &local_24;
      local_c = (undefined4 ******)0x1;
      local_10 = local_14;
      if (iVar3 != 0) {
        cVar2 = FUN_100f6ea0(iVar3,&DAT_11da7300,local_14);
        ppppppuVar1 = (undefined4 ******)local_10;
        if (((cVar2 == '\0') || (local_10 == local_14)) ||
           (iVar4 = FUN_1189c080(local_10), iVar4 != 0)) {
          if (ppppppuVar1 != (undefined4 ******)&local_24) goto joined_r0x1189c384;
        }
        else {
          FUN_100f6ef0(iVar3,"FlowgraphEnable",&local_c);
          FUN_1189d780((int)&local_48 + 4,param_1 + 6,&local_24);
          ppppppuVar1 = (undefined4 ******)local_10;
          if (local_10 != &local_24) {
joined_r0x1189c384:
            if (ppppppuVar1 != (undefined4 ******)0x0) {
              FUN_10c3d5d0(ppppppuVar1);
            }
          }
        }
      }
      iVar3 = FUN_100f3d20();
    }
  }
  iVar3 = FUN_100f3ce0("ConfigSets");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      local_20 = local_30;
      local_34 = 0;
      local_18 = &local_18;
      local_48 = 0;
      local_10 = &local_10;
      local_30[0] = 0;
      local_1c = local_20;
      local_14 = local_18;
      local_c = local_10;
      cVar2 = FUN_1189c520(iVar3,param_1);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x34);
      }
      FUN_116b40b0();
      FUN_116b4170();
      if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_1c);
      }
      iVar3 = FUN_100f3d20();
    }
  }
  cVar2 = FUN_100f6ef0(local_40,"DefaultConfigSet",&local_3c);
  if (cVar2 != '\0') {
    for (piVar5 = (int *)param_1[1]; piVar5 != param_1 + 1; piVar5 = (int *)*piVar5) {
      if (piVar5[2] == local_3c) {
        piVar5 = piVar5 + 2;
        goto LAB_1189c4cd;
      }
    }
    piVar5 = (int *)0x0;
LAB_1189c4cd:
    param_1[3] = (int)piVar5;
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1189ca40 @ 1189ca40  size=473 ===== */
// strings:
//   "RegionID"
//   "SpawnAmountMin"
//   "SpawnAmountMax"
//   "FirstSpawnDelayMax"
//   "FirstSpawnDelayMin"
//   "RespawnAmont"
//   "RespawnDelayMax"
//   "RespawnDelayMin"
//   "SpawnMonsterGroupID"
//   "RandomMonsters"
//   "MonsterID"
//   "SpawnWeight"

/* [RE-AUTO c0]
   strings:
     ""RegionID""
     ""SpawnAmountMin""
     ""SpawnAmountMax""
     ""FirstSpawnDelayMax""
     ""FirstSpawnDelayMin""
     ""RespawnAmont""
     ""RespawnDelayMax""
     ""RespawnDelayMin""
     ""SpawnMonsterGroupID""
     ""RandomMonsters"" */

uint __thiscall FUN_1189ca40(uint *param_1,uint param_2,uint *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint in_EAX;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  if (param_2 == 0) {
    return in_EAX & 0xffffff00;
  }
  cVar2 = FUN_100f6ef0(param_2,&DAT_11de661c,param_1);
  if (cVar2 == '\0') {
LAB_1189ca9f:
    if (*param_1 == 0) goto LAB_1189caa4;
  }
  else {
    if (0 < (int)*param_1) {
      for (puVar3 = *(uint **)((int)param_3 + 0x10); puVar3 != (uint *)((int)param_3 + 0x10);
          puVar3 = (uint *)*puVar3) {
        if (puVar3[2] == *param_1) goto LAB_1189cc03;
      }
      goto LAB_1189ca9f;
    }
    *param_1 = 0;
LAB_1189caa4:
    iVar5 = 0;
    for (puVar1 = *(undefined4 **)((int)param_3 + 0x10);
        puVar1 != (undefined4 *)((int)param_3 + 0x10); puVar1 = (undefined4 *)*puVar1) {
      iVar5 = iVar5 + 1;
    }
    *param_1 = iVar5 + 1U | 0x10000000;
  }
  puVar3 = (uint *)FUN_100f6ef0(iVar4,"RegionID",param_1 + 1);
  if ((char)puVar3 != '\0') {
    param_2 = param_1[2];
    param_3 = (uint *)param_1[3];
    puVar3 = (uint *)FUN_100f6ef0(iVar4,"SpawnAmountMin",&param_2);
    if (((char)puVar3 != '\0') &&
       (puVar3 = (uint *)FUN_100f6ef0(iVar4,"SpawnAmountMax",&param_3), (char)puVar3 != '\0')) {
      param_1[2] = param_2;
      param_1[3] = (uint)param_3;
      puVar3 = param_3;
    }
    if (0 < (int)param_1[3]) {
      FUN_1189a8a0(iVar4,"FirstSpawnDelayMin","FirstSpawnDelayMax",param_1 + 4);
      FUN_100f6ef0(iVar4,"RespawnAmont",param_1 + 6);
      FUN_1189a8a0(iVar4,"RespawnDelayMin","RespawnDelayMax",param_1 + 7);
      FUN_100f6ef0(iVar4,"SpawnMonsterGroupID",param_1 + 9);
      iVar4 = FUN_100f3ce0("RandomMonsters");
      if (iVar4 != 0) {
        iVar4 = FUN_100f3cb0();
        while (iVar4 != 0) {
          local_c = 0;
          local_8 = 100;
          FUN_100f6ef0(iVar4,"MonsterID",&local_c);
          if ((0 < local_c) && (FUN_100f6ef0(iVar4,"SpawnWeight",&local_8), 0 < local_8)) {
            FUN_1189db00(&local_c);
          }
          iVar4 = FUN_100f3d20();
        }
      }
      puVar3 = (uint *)0x0;
      if (0 < (int)param_1[9]) {
LAB_1189cc0e:
        return CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
      puVar3 = (uint *)param_1[10];
      iVar4 = 0;
      if (puVar3 != param_1 + 10) {
        do {
          puVar3 = (uint *)*puVar3;
          iVar4 = iVar4 + 1;
        } while (puVar3 != param_1 + 10);
        if (iVar4 != 0) goto LAB_1189cc0e;
      }
    }
  }
LAB_1189cc03:
  return (uint)puVar3 & 0xffffff00;
}



/* ===== FUN_118a3500 @ 118a3500  size=524 ===== */
// calls: memset, sscanf_s
// strings:
//   "EntityClass"
//   "0,0,0"
//   "%f,%f,%f"
//   "0,0,0,0"
//   "Rotate"
//   "%f,%f,%f,%f"
//   "LevelWeather"
//   "LevelTime"
//   "FixedMonsterID"
//   "RegionID"
//   "SpawnerEnable"
//   "EntityGuid"
//   "%PRIX64"
//   "LevelInfo"

/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     ""EntityClass""
     ""0,0,0""
     ""%f,%f,%f""
     ""0,0,0,0""
     ""Rotate""
     ""%f,%f,%f,%f""
     ""LevelWeather""
     ""LevelTime""
     ""FixedMonsterID""
     ""RegionID"" */

void __thiscall FUN_118a3500(int param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int local_410;
  char *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    FUN_11a89daa();
    return;
  }
  local_408 = '\0';
  memset(local_407,0,0x3ff);
  FUN_100f69d0(param_2,&DAT_11da7300,param_1 + 0x1c,&DAT_11cd58ec);
  FUN_100f69d0(param_2,"EntityClass",param_1 + 0x34,&DAT_11cd58ec);
  FUN_100f6930(param_2,&DAT_11cca8a0,&local_408,0x400,"0,0,0");
  sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
  FUN_100f6930(param_2,"Rotate",&local_408,0x400,"0,0,0,0");
  sscanf_s(&local_408,"%f,%f,%f,%f",param_1 + 0xc,param_1,param_1 + 4,param_1 + 8);
  FUN_100f6aa0(param_2,"LevelWeather",param_1 + 0x4c,0);
  FUN_100f6aa0(param_2,"LevelTime",param_1 + 0x50,0);
  FUN_100f6aa0(param_2,"FixedMonsterID",param_1 + 0x60,0);
  FUN_100f6aa0(param_2,"RegionID",param_1 + 100,0xffffffff);
  FUN_100f6aa0(param_2,"SpawnerEnable",param_1 + 0x54,0);
  FUN_100f6930(param_2,"EntityGuid",&local_408,0xff,&DAT_11cd58ec);
  sscanf_s(&local_408,"%PRIX64",param_1 + 0x58);
  puVar5 = (undefined4 *)(param_1 + 0x68);
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  while (puVar3 != puVar5) {
    puVar1 = (undefined4 *)*puVar3;
    FUN_10c3d5d0(puVar3);
    puVar3 = puVar1;
  }
  *puVar5 = puVar5;
  *(undefined4 **)(param_1 + 0x6c) = puVar5;
  pcVar4 = (char *)FUN_100f40b0("LevelInfo");
  if (pcVar4 != (char *)0x0) {
    local_40c = (char *)0x0;
    do {
      local_410 = FUN_100ec6f0(pcVar4,&local_40c,0);
      if (0 < local_410) {
        FUN_10ea8a80(puVar5,&local_410);
      }
      pcVar2 = local_40c;
      if ((*local_40c != '\0') && (local_40c == pcVar4)) {
        pcVar2 = pcVar4;
      }
      pcVar4 = pcVar2 + 1;
    } while (*local_40c != '\0');
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_118a40b0 @ 118a40b0  size=23 ===== */
// strings:
//   "SpawnMonsterGroupInfo"

/* [RE-AUTO c0]
   strings:
     ""SpawnMonsterGroupInfo"" */

undefined4 FUN_118a40b0(undefined4 param_1)

{
  FUN_1024f010("SpawnMonsterGroupInfo");
  return param_1;
}



/* ===== FUN_118a4120 @ 118a4120  size=132 ===== */
// strings:
//   "SpawnMonsterGroupInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""SpawnMonsterGroupInfo"" */

undefined * __thiscall FUN_118a4120(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239bdb4 & 1) == 0) {
    DAT_1239bdb4 = DAT_1239bdb4 | 1;
    FUN_1024f010("SpawnMonsterGroupInfo");
    _DAT_1239bd94 = 0x27;
    _DAT_1239bd9c = 1;
    _DAT_1239bda0 = 0;
    _DAT_1239bda4 = 0;
    _DAT_1239bda8 = 0;
    _DAT_1239bdac = 0;
    _DAT_1239bdb0 = 0;
    _DAT_1239bd98 = param_1;
  }
  *param_2 = 1;
  return &DAT_1239bd94;
}



/* ===== FUN_11936910 @ 11936910  size=132 ===== */
// strings:
//   u"OnMonsterStateAbnormal"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     "u"OnMonsterStateAbnormal"" */

undefined * __thiscall FUN_11936910(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_1239fb68 & 1) == 0) {
    DAT_1239fb68 = DAT_1239fb68 | 1;
    FUN_100f67b0(L"OnMonsterStateAbnormal");
    _DAT_1239fb48 = 0xe3;
    _DAT_1239fb50 = 1;
    _DAT_1239fb54 = 0;
    _DAT_1239fb58 = 0;
    _DAT_1239fb5c = 0;
    _DAT_1239fb60 = 0;
    _DAT_1239fb64 = 0;
    _DAT_1239fb4c = param_1;
  }
  *param_2 = 1;
  return &DAT_1239fb48;
}



/* ===== FUN_11957970 @ 11957970  size=132 ===== */
// strings:
//   "SpawnInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""SpawnInfo"" */

undefined * __thiscall FUN_11957970(undefined4 param_1,undefined4 *param_2)

{
  if ((DAT_123a05d8 & 1) == 0) {
    DAT_123a05d8 = DAT_123a05d8 | 1;
    FUN_1024f010("SpawnInfo");
    _DAT_123a05b8 = 0x10f;
    _DAT_123a05c0 = 1;
    _DAT_123a05c4 = 0;
    _DAT_123a05c8 = 0;
    _DAT_123a05cc = 0;
    _DAT_123a05d0 = 0;
    _DAT_123a05d4 = 0;
    _DAT_123a05bc = param_1;
  }
  *param_2 = 1;
  return &DAT_123a05b8;
}



/* ===== FUN_11958350 @ 11958350  size=2257 ===== */
// calls: memset
// strings:
//   u"Logic"
//   u"TimeLimit"
//   u"MessageID"
//   u"SpawnIDs"
//   u"TargetMonsterID1"
//   u"TargetCount1"
//   u"TargetMsgID1"
//   u"TargetMonsterID2"
//   u"TargetCount2"
//   u"TargMsgID2"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Logic""
     "u"TimeLimit""
     "u"MessageID""
     "u"SpawnIDs""
     "u"TargetMonsterID1""
     "u"TargetCount1""
     "u"TargetMsgID1""
     "u"TargetMonsterID2""
     "u"TargetCount2""
     "u"TargMsgID2"" */

void __thiscall FUN_11958350(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_420 [16];
  undefined1 *local_410;
  undefined1 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a0750 & 1) == 0) {
    DAT_123a0750 = DAT_123a0750 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a0750 & 2) == 0) {
    DAT_123a0750 = DAT_123a0750 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a074c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0754);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a074c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0754);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a0750 & 4) == 0) {
    DAT_123a0750 = DAT_123a0750 | 4;
    FUN_100f67b0(L"Logic");
  }
  if ((DAT_123a0750 & 8) == 0) {
    DAT_123a0750 = DAT_123a0750 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a0764);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0768);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0764);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_123a0768);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x14) = 2;
    }
  }
  if ((DAT_123a0750 & 0x10) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x10;
    FUN_100f67b0(L"TimeLimit");
  }
  if ((DAT_123a0750 & 0x20) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a0778);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a077c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0778);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a077c);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a0750 & 0x40) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x40;
    FUN_100f67b0(L"MessageID");
  }
  if (-1 < (char)DAT_123a0750) {
    DAT_123a0750 = DAT_123a0750 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a078c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0790);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a078c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0790);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a0750 & 0x100) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x100;
    FUN_100f67b0(L"SpawnIDs");
  }
  if ((DAT_123a0750 & 0x200) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a07a0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a07a4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a07a0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_420;
    local_420[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a07a4);
    FUN_1162bea0(param_1 + 0x20,local_420);
    if ((local_40c != local_420) && (local_40c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a0750 & 0x400) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x400;
    FUN_100f67b0(L"TargetMonsterID1");
  }
  if ((DAT_123a0750 & 0x800) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a07b4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a07b8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a07b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a07b8);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  if ((DAT_123a0750 & 0x1000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x1000;
    FUN_100f67b0(L"TargetCount1");
  }
  if ((DAT_123a0750 & 0x2000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a07c8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a07cc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a07c8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a07cc);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((DAT_123a0750 & 0x4000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x4000;
    FUN_100f67b0(L"TargetMsgID1");
  }
  if ((DAT_123a0750 & 0x8000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a07dc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a07e0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a07dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a07e0);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  if ((DAT_123a0750 & 0x10000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x10000;
    FUN_100f67b0(L"TargetMonsterID2");
  }
  if ((DAT_123a0750 & 0x20000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a07f0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a07f4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a07f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a07f4);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  if ((DAT_123a0750 & 0x40000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x40000;
    FUN_100f67b0(L"TargetCount2");
  }
  if ((DAT_123a0750 & 0x80000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a0804);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0808);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0804);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0808);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  if ((DAT_123a0750 & 0x100000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x100000;
    FUN_100f67b0(L"TargMsgID2");
  }
  if ((DAT_123a0750 & 0x200000) == 0) {
    DAT_123a0750 = DAT_123a0750 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a0818);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a081c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0818);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a081c);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11958c30 @ 11958c30  size=1964 ===== */
// calls: memset
// strings:
//   u"MonsterID"
//   u"MonsterGroupID"
//   u"SpawnAmount"
//   u"RegionId"
//   u"Delay"
//   u"RespawnAmount"
//   u"RespawnDelay"
//   u"Scale"
//   u"BuffID"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"MonsterID""
     "u"MonsterGroupID""
     "u"SpawnAmount""
     "u"RegionId""
     "u"Delay""
     "u"RespawnAmount""
     "u"RespawnDelay""
     "u"Scale""
     "u"BuffID"" */

void __thiscall FUN_11958c30(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a05e0 & 1) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 1;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a05e0 & 2) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a05dc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a05e4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a05dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a05e4);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a05e0 & 4) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 4;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_123a05e0 & 8) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a05f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a05f8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a05f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a05f8);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a05e0 & 0x10) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x10;
    FUN_100f67b0(L"MonsterGroupID");
  }
  if ((DAT_123a05e0 & 0x20) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a0608);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a060c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0608);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a060c);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a05e0 & 0x40) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x40;
    FUN_100f67b0(L"SpawnAmount");
  }
  if (-1 < (char)DAT_123a05e0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a061c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0620);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a061c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0620);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a05e0 & 0x100) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x100;
    FUN_100f67b0(L"RegionId");
  }
  if ((DAT_123a05e0 & 0x200) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a0630);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0634);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0630);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0634);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((DAT_123a05e0 & 0x400) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x400;
    FUN_100f67b0(L"Delay");
  }
  if ((DAT_123a05e0 & 0x800) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a0644);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0648);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0644);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0648);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if ((DAT_123a05e0 & 0x1000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x1000;
    FUN_100f67b0(L"RespawnAmount");
  }
  if ((DAT_123a05e0 & 0x2000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a0658);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a065c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0658);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a065c);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  if ((DAT_123a05e0 & 0x4000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x4000;
    FUN_100f67b0(L"RespawnDelay");
  }
  if ((DAT_123a05e0 & 0x8000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a066c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0670);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a066c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0670);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  if ((DAT_123a05e0 & 0x10000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x10000;
    FUN_100f67b0(L"Scale");
  }
  if ((DAT_123a05e0 & 0x20000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a0680);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0684);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0680);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a0684);
    *(float *)(param_1 + 0x30) = (float)fVar4;
  }
  if ((DAT_123a05e0 & 0x40000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x40000;
    FUN_100f67b0(L"BuffID");
  }
  if ((DAT_123a05e0 & 0x80000) == 0) {
    DAT_123a05e0 = DAT_123a05e0 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a0694);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a0698);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a0694);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a0698);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_119ddbd0 @ 119ddbd0  size=4221 ===== */
// calls: memset
// strings:
//   u"Name"
//   u"EntityType"
//   u"DelayTime"
//   u"OffsetY"
//   u"OffsetZ"
//   u"RotationX"
//   u"RotationY"
//   u"RotationZ"
//   u"SpawnMode"
//   u"UseHitDir"
//   u"Param%1d"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"Name""
     "u"EntityType""
     "u"DelayTime""
     "u"OffsetY""
     "u"OffsetZ""
     "u"RotationX""
     "u"RotationY""
     "u"RotationZ""
     "u"SpawnMode""
     "u"UseHitDir"" */

void __thiscall FUN_119ddbd0(int param_1,int *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  int local_4f0;
  uint local_4ec;
  int local_4e8;
  int local_4e4;
  float local_4e0;
  undefined1 local_4d9;
  int local_4d8;
  double local_4d4;
  undefined1 *local_4cc;
  undefined1 local_4c8 [40];
  undefined1 local_4a0 [72];
  ushort local_458 [10];
  undefined1 local_444 [12];
  ushort *local_438;
  ushort *local_434;
  wchar_t local_430 [2];
  wchar_t awStack_42c [2];
  wchar_t awStack_428 [2];
  undefined4 uStack_424;
  wchar_t local_420;
  undefined2 local_41e [7];
  undefined2 *local_410;
  wchar_t *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_4f0 = param_1;
  if ((DAT_123a3f68 & 1) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 1;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123a3f68 & 2) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 2;
    iVar6 = FUN_100e1cb0(DAT_123a3f64);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3f6c);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123a3f64);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1 + 0x14,&DAT_123a3f6c);
  }
  if ((DAT_123a3f68 & 4) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 4;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a3f68 & 8) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 8;
    iVar6 = FUN_100e1cb0(DAT_123a3f7c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3f80);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123a3f7c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123a3f80);
    *(undefined4 *)(param_1 + 0x10) = uVar7;
  }
  local_4ec = local_4ec & 0xffffff00;
  local_4e8 = -1;
  local_4e0 = 0.0;
  local_4e4 = -1;
  local_438 = local_458;
  local_458[0] = 0;
  local_434 = local_438;
  if ((DAT_123a3f68 & 0x10) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x10;
    FUN_100f67b0(L"EntityType");
  }
  if ((DAT_123a3f68 & 0x20) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x20;
    iVar6 = FUN_100e1cb0(DAT_123a3f90);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3f94);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123a3f90);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_458,&DAT_123a3f94);
  }
  puVar10 = &DAT_11d6abb8;
  local_4d8 = (int)local_438 - (int)local_434 >> 1;
  local_4cc = (undefined1 *)0x0;
  do {
    puVar8 = puVar10;
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (uVar1 != 0);
    iVar6 = (int)puVar8 - (int)(puVar10 + 1) >> 1;
    if (local_4d8 == iVar6) {
      puVar8 = puVar10;
      puVar12 = local_434;
      if (iVar6 == 0) {
LAB_119dded7:
        local_4e8 = (int)local_4cc;
      }
      else {
        do {
          if (*puVar12 != *puVar8) {
            if ((-(uint)(*puVar12 < *puVar8) & 0xfffffffe) != 0xffffffff) goto LAB_119ddef7;
            goto LAB_119dded7;
          }
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_4e8 = (int)local_4cc;
      }
    }
LAB_119ddef7:
    local_4cc = (undefined1 *)((int)local_4cc + 1);
    puVar10 = puVar10 + 10;
  } while ((int)puVar10 < 0x11d6ac08);
  if ((DAT_123a3f68 & 0x40) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x40;
    DAT_123a3fa4 = -1;
    local_40c = local_430;
    local_410 = local_41e;
    local_420 = u_DelayTime_11d6ac70[8];
    awStack_42c[0] = u_DelayTime_11d6ac70[2];
    awStack_42c[1] = u_DelayTime_11d6ac70[3];
    local_430[0] = u_DelayTime_11d6ac70[0];
    local_430[1] = u_DelayTime_11d6ac70[1];
    awStack_428[0] = u_DelayTime_11d6ac70[4];
    awStack_428[1] = u_DelayTime_11d6ac70[5];
    uStack_424._0_2_ = u_DelayTime_11d6ac70[6];
    uStack_424._2_2_ = u_DelayTime_11d6ac70[7];
    local_41e[0] = 0;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a3fa4) {
      DAT_123a3fa4 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if (-1 < (char)DAT_123a3f68) {
    DAT_123a3f68 = DAT_123a3f68 | 0x80;
    iVar6 = FUN_100e1cb0(DAT_123a3fa4);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3fa8);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a3fa8,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_4e0 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x100) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x100;
    local_40c = local_430;
    local_410 = (undefined2 *)((int)&uStack_424 + 2);
    awStack_428[0] = (wchar_t)DAT_11d6ac8c;
    awStack_428[1] = DAT_11d6ac8c._2_2_;
    DAT_123a3fb8 = -1;
    local_430[0] = _DAT_11d6ac84;
    local_430[1] = _UNK_11d6ac86;
    awStack_42c[0] = _UNK_11d6ac88;
    awStack_42c[1] = _UNK_11d6ac8a;
    uStack_424 = (uint)DAT_11d6ac90;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a3fb8) {
      DAT_123a3fb8 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x200) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x200;
    iVar6 = FUN_100e1cb0(DAT_123a3fb8);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3fbc);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a3fbc,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_508 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x400) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x400;
    local_40c = local_430;
    local_410 = (undefined2 *)((int)&uStack_424 + 2);
    awStack_428[0] = u_OffsetY_11d6ac94[4];
    awStack_428[1] = u_OffsetY_11d6ac94[5];
    DAT_123a3fcc = -1;
    local_430[0] = u_OffsetY_11d6ac94[0];
    local_430[1] = u_OffsetY_11d6ac94[1];
    awStack_42c[0] = u_OffsetY_11d6ac94[2];
    awStack_42c[1] = u_OffsetY_11d6ac94[3];
    uStack_424 = (uint)(ushort)u_OffsetY_11d6ac94[6];
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a3fcc) {
      DAT_123a3fcc = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x800) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x800;
    iVar6 = FUN_100e1cb0(DAT_123a3fcc);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3fd0);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a3fd0,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_504 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x1000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x1000;
    local_40c = local_430;
    local_410 = (undefined2 *)((int)&uStack_424 + 2);
    awStack_428[0] = u_OffsetZ_11d6aca4[4];
    awStack_428[1] = u_OffsetZ_11d6aca4[5];
    DAT_123a3fe0 = -1;
    local_430[0] = u_OffsetZ_11d6aca4[0];
    local_430[1] = u_OffsetZ_11d6aca4[1];
    awStack_42c[0] = u_OffsetZ_11d6aca4[2];
    awStack_42c[1] = u_OffsetZ_11d6aca4[3];
    uStack_424 = (uint)(ushort)u_OffsetZ_11d6aca4[6];
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a3fe0) {
      DAT_123a3fe0 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x2000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x2000;
    iVar6 = FUN_100e1cb0(DAT_123a3fe0);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3fe4);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a3fe4,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_500 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x4000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x4000;
    DAT_123a3ff4 = -1;
    local_40c = local_430;
    local_410 = local_41e;
    local_420 = u_RotationX_11d6acb4[8];
    awStack_42c[0] = u_RotationX_11d6acb4[2];
    awStack_42c[1] = u_RotationX_11d6acb4[3];
    local_430[0] = u_RotationX_11d6acb4[0];
    local_430[1] = u_RotationX_11d6acb4[1];
    awStack_428[0] = u_RotationX_11d6acb4[4];
    awStack_428[1] = u_RotationX_11d6acb4[5];
    uStack_424._0_2_ = u_RotationX_11d6acb4[6];
    uStack_424._2_2_ = u_RotationX_11d6acb4[7];
    local_41e[0] = 0;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a3ff4) {
      DAT_123a3ff4 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x8000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x8000;
    iVar6 = FUN_100e1cb0(DAT_123a3ff4);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a3ff8);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a3ff8,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_4fc = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x10000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x10000;
    DAT_123a4008 = -1;
    local_40c = local_430;
    local_410 = local_41e;
    local_420 = u_RotationY_11d6acc8[8];
    awStack_42c[0] = u_RotationY_11d6acc8[2];
    awStack_42c[1] = u_RotationY_11d6acc8[3];
    local_430[0] = u_RotationY_11d6acc8[0];
    local_430[1] = u_RotationY_11d6acc8[1];
    awStack_428[0] = u_RotationY_11d6acc8[4];
    awStack_428[1] = u_RotationY_11d6acc8[5];
    uStack_424._0_2_ = u_RotationY_11d6acc8[6];
    uStack_424._2_2_ = u_RotationY_11d6acc8[7];
    local_41e[0] = 0;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a4008) {
      DAT_123a4008 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x20000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x20000;
    iVar6 = FUN_100e1cb0(DAT_123a4008);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a400c);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a400c,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_4f8 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x40000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x40000;
    DAT_123a401c = -1;
    local_40c = local_430;
    local_410 = local_41e;
    local_420 = u_RotationZ_11d6acdc[8];
    awStack_42c[0] = u_RotationZ_11d6acdc[2];
    awStack_42c[1] = u_RotationZ_11d6acdc[3];
    local_430[0] = u_RotationZ_11d6acdc[0];
    local_430[1] = u_RotationZ_11d6acdc[1];
    awStack_428[0] = u_RotationZ_11d6acdc[4];
    awStack_428[1] = u_RotationZ_11d6acdc[5];
    uStack_424._0_2_ = u_RotationZ_11d6acdc[6];
    uStack_424._2_2_ = u_RotationZ_11d6acdc[7];
    local_41e[0] = 0;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a401c) {
      DAT_123a401c = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x80000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x80000;
    iVar6 = FUN_100e1cb0(DAT_123a401c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a4020);
  if (cVar5 != '\0') {
    local_4d4 = 0.0;
    cVar5 = (**(code **)(*param_2 + 0x34))(&DAT_123a4020,&local_4d4);
    dVar3 = local_4d4;
    if (cVar5 == '\0') {
      dVar3 = 0.0;
    }
    local_4f4 = (float)dVar3;
  }
  if ((DAT_123a3f68 & 0x100000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x100000;
    DAT_123a4030 = -1;
    local_40c = local_430;
    local_410 = local_41e;
    local_420 = u_SpawnMode_11d6acf0[8];
    awStack_42c[0] = u_SpawnMode_11d6acf0[2];
    awStack_42c[1] = u_SpawnMode_11d6acf0[3];
    local_430[0] = u_SpawnMode_11d6acf0[0];
    local_430[1] = u_SpawnMode_11d6acf0[1];
    awStack_428[0] = u_SpawnMode_11d6acf0[4];
    awStack_428[1] = u_SpawnMode_11d6acf0[5];
    uStack_424._0_2_ = u_SpawnMode_11d6acf0[6];
    uStack_424._2_2_ = u_SpawnMode_11d6acf0[7];
    local_41e[0] = 0;
    iVar6 = FUN_100e1bf0(local_430);
    if (iVar6 == -1) {
      iVar6 = FUN_100e1c30(local_430);
    }
    if (iVar6 != DAT_123a4030) {
      DAT_123a4030 = iVar6;
    }
    if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a3f68 & 0x200000) == 0) {
    DAT_123a3f68 = DAT_123a3f68 | 0x200000;
    iVar6 = FUN_100e1cb0(DAT_123a4030);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a4034);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_123a4030);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x28))(local_458,&DAT_123a4034);
  }
  local_4d8 = (int)local_438 - (int)local_434 >> 1;
  local_4cc = (undefined1 *)0x0;
  puVar10 = &DAT_11d6ac08;
  do {
    puVar8 = puVar10;
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (uVar1 != 0);
    iVar6 = (int)puVar8 - (int)(puVar10 + 1) >> 1;
    if (local_4d8 == iVar6) {
      puVar8 = puVar10;
      puVar12 = local_434;
      if (iVar6 == 0) {
LAB_119de947:
        local_4e4 = (int)local_4cc;
      }
      else {
        do {
          if (*puVar12 != *puVar8) {
            if ((-(uint)(*puVar12 < *puVar8) & 0xfffffffe) != 0xffffffff) goto LAB_119de967;
            goto LAB_119de947;
          }
          puVar12 = puVar12 + 1;
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_4e4 = (int)local_4cc;
      }
    }
LAB_119de967:
    local_4cc = (undefined1 *)((int)local_4cc + 1);
    puVar10 = puVar10 + 10;
    if (0x11d6ac57 < (int)puVar10) {
      if ((DAT_123a3f68 & 0x400000) == 0) {
        DAT_123a3f68 = DAT_123a3f68 | 0x400000;
        DAT_123a4044 = -1;
        local_40c = local_430;
        local_410 = local_41e;
        local_420 = u_UseHitDir_11d6ad04[8];
        awStack_42c[0] = u_UseHitDir_11d6ad04[2];
        awStack_42c[1] = u_UseHitDir_11d6ad04[3];
        local_430[0] = u_UseHitDir_11d6ad04[0];
        local_430[1] = u_UseHitDir_11d6ad04[1];
        awStack_428[0] = u_UseHitDir_11d6ad04[4];
        awStack_428[1] = u_UseHitDir_11d6ad04[5];
        uStack_424._0_2_ = u_UseHitDir_11d6ad04[6];
        uStack_424._2_2_ = u_UseHitDir_11d6ad04[7];
        local_41e[0] = 0;
        iVar6 = FUN_100e1bf0(local_430);
        if (iVar6 == -1) {
          iVar6 = FUN_100e1c30(local_430);
        }
        if (iVar6 != DAT_123a4044) {
          DAT_123a4044 = iVar6;
        }
        if ((local_40c != local_430) && (local_40c != (wchar_t *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_123a3f68 & 0x800000) == 0) {
        DAT_123a3f68 = DAT_123a3f68 | 0x800000;
        iVar6 = FUN_100e1cb0(DAT_123a4044);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_123a4048);
      if (cVar5 == '\0') {
        local_408 = cVar5;
        memset(local_407,0,0x3ff);
        iVar6 = FUN_100e1c50(DAT_123a4044);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        iVar6 = (**(code **)(*param_2 + 0x20))(&DAT_123a4048);
        local_4ec = CONCAT31(local_4ec._1_3_,iVar6 != 0);
      }
      FUN_119dd840(local_4e8,&local_508,&local_4fc,local_4e0,local_4e4,local_4ec);
      if ((DAT_123a3f68 & 0x1000000) == 0) {
        DAT_123a3f68 = DAT_123a3f68 | 0x1000000;
        FUN_1167e120(L"Param%1d",1,3);
        FUN_11a8911f(&LAB_11cb5020);
      }
      local_4cc = local_4a0;
      uVar11 = 0;
      iVar6 = 0;
      do {
        if (uVar11 < (uint)(DAT_123a405c - DAT_123a4058 >> 4)) {
          puVar9 = (undefined *)(DAT_123a4058 + iVar6);
        }
        else {
          if ((DAT_12387c90 & 1) == 0) {
            DAT_12387c90 = DAT_12387c90 | 1;
            FUN_10a30000();
          }
          puVar9 = &DAT_12387c80;
        }
        (**(code **)(*param_2 + 0x24))(local_4cc,puVar9);
        iVar4 = local_4f0;
        iVar6 = iVar6 + 0x10;
        local_4cc = local_4cc + 0x18;
        uVar11 = uVar11 + 1;
      } while (iVar6 < 0x30);
      iVar6 = *(int *)(local_4f0 + 0x40);
      if (iVar6 == *(int *)(local_4f0 + 0x44)) {
        FUN_119dede0(iVar6,local_4c8,&local_4d9,1,1);
      }
      else {
        if (iVar6 != 0) {
          FUN_119dd740(local_4c8);
        }
        *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 0x70;
      }
      iVar6 = 2;
      puVar13 = local_444;
      do {
        puVar2 = *(undefined1 **)(puVar13 + -0x18);
        if ((puVar2 != puVar13 + -0x2c) && (puVar2 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puVar2);
        }
        iVar6 = iVar6 + -1;
        puVar13 = puVar13 + -0x18;
      } while (-1 < iVar6);
      if ((local_434 != local_458) && (local_434 != (ushort *)0x0)) {
        FUN_10c3d5d0(local_434);
      }
      FUN_11a89daa();
      return;
    }
  } while( true );
}



/* ===== FUN_11a21e50 @ 11a21e50  size=4255 ===== */
// calls: memset
// strings:
//   u"groupId"
//   u"monsterId"
//   u"monsterCount"
//   u"regionId"
//   u"delay"
//   u"respawnAmount"
//   u"respawnDelay"
//   u"scale"
//   u"monsterId2"
//   u"monsterCount2"
//   u"regionId2"
//   u"delay2"
//   u"respawnAmount2"
//   u"respawnDelay2"
//   u"scale2"
//   u"monsterId3"
//   u"monsterCount3"
//   u"regionId3"
//   u"delay3"
//   u"respawnAmount3"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"groupId""
     "u"monsterId""
     "u"monsterCount""
     "u"regionId""
     "u"delay""
     "u"respawnAmount""
     "u"respawnDelay""
     "u"scale""
     "u"monsterId2""
     "u"monsterCount2"" */

void __thiscall FUN_11a21e50(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a8354 & 1) == 0) {
    DAT_123a8354 = DAT_123a8354 | 1;
    FUN_100f67b0(L"groupId");
  }
  if ((DAT_123a8354 & 2) == 0) {
    DAT_123a8354 = DAT_123a8354 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8350);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8358);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8350);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8358);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a8354 & 4) == 0) {
    DAT_123a8354 = DAT_123a8354 | 4;
    FUN_100f67b0(L"monsterId");
  }
  if ((DAT_123a8354 & 8) == 0) {
    DAT_123a8354 = DAT_123a8354 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a8368);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a836c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8368);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a836c);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a8354 & 0x10) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10;
    FUN_100f67b0(L"monsterCount");
  }
  if ((DAT_123a8354 & 0x20) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a837c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8380);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a837c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8380);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a8354 & 0x40) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40;
    FUN_100f67b0(L"regionId");
  }
  if (-1 < (char)DAT_123a8354) {
    DAT_123a8354 = DAT_123a8354 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a8390);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8394);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8390);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8394);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123a8354 & 0x100) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x100;
    FUN_100f67b0(L"delay");
  }
  if ((DAT_123a8354 & 0x200) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a83a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83a8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83a4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83a8);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((DAT_123a8354 & 0x400) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x400;
    FUN_100f67b0(L"respawnAmount");
  }
  if ((DAT_123a8354 & 0x800) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a83b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83bc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83b8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83bc);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  if ((DAT_123a8354 & 0x1000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x1000;
    FUN_100f67b0(L"respawnDelay");
  }
  if ((DAT_123a8354 & 0x2000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_123a83cc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83d0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83cc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83d0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  if ((DAT_123a8354 & 0x4000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x4000;
    FUN_100f67b0(L"scale");
  }
  if ((DAT_123a8354 & 0x8000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_123a83e0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83e4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83e0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a83e4);
    *(float *)(param_1 + 0x2c) = (float)fVar4;
  }
  if ((DAT_123a8354 & 0x10000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10000;
    FUN_100f67b0(L"monsterId2");
  }
  if ((DAT_123a8354 & 0x20000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_123a83f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a83f8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a83f4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a83f8);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((DAT_123a8354 & 0x40000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40000;
    FUN_100f67b0(L"monsterCount2");
  }
  if ((DAT_123a8354 & 0x80000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_123a8408);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a840c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8408);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a840c);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  if ((DAT_123a8354 & 0x100000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x100000;
    FUN_100f67b0(L"regionId2");
  }
  if ((DAT_123a8354 & 0x200000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_123a841c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8420);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a841c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8420);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  if ((DAT_123a8354 & 0x400000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x400000;
    FUN_100f67b0(L"delay2");
  }
  if ((DAT_123a8354 & 0x800000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_123a8430);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8434);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8430);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8434);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
  }
  if ((DAT_123a8354 & 0x1000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x1000000;
    FUN_100f67b0(L"respawnAmount2");
  }
  if ((DAT_123a8354 & 0x2000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_123a8444);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8448);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8444);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8448);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
  }
  if ((DAT_123a8354 & 0x4000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x4000000;
    FUN_100f67b0(L"respawnDelay2");
  }
  if ((DAT_123a8354 & 0x8000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_123a8458);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a845c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8458);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a845c);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  if ((DAT_123a8354 & 0x10000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x10000000;
    FUN_100f67b0(L"scale2");
  }
  if ((DAT_123a8354 & 0x20000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_123a846c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8470);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a846c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a8470);
    *(float *)(param_1 + 0x48) = (float)fVar4;
  }
  if ((DAT_123a8354 & 0x40000000) == 0) {
    DAT_123a8354 = DAT_123a8354 | 0x40000000;
    FUN_100f67b0(L"monsterId3");
  }
  if (-1 < (int)DAT_123a8354) {
    DAT_123a8354 = DAT_123a8354 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_123a8480);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8484);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8480);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a8484);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  if ((DAT_123a8498 & 1) == 0) {
    DAT_123a8498 = DAT_123a8498 | 1;
    FUN_100f67b0(L"monsterCount3");
  }
  if ((DAT_123a8498 & 2) == 0) {
    DAT_123a8498 = DAT_123a8498 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a8494);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a849c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a8494);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a849c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  if ((DAT_123a8498 & 4) == 0) {
    DAT_123a8498 = DAT_123a8498 | 4;
    FUN_100f67b0(L"regionId3");
  }
  if ((DAT_123a8498 & 8) == 0) {
    DAT_123a8498 = DAT_123a8498 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a84ac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84b0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84b0);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  if ((DAT_123a8498 & 0x10) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x10;
    FUN_100f67b0(L"delay3");
  }
  if ((DAT_123a8498 & 0x20) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a84c0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84c4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84c4);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  if ((DAT_123a8498 & 0x40) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x40;
    FUN_100f67b0(L"respawnAmount3");
  }
  if (-1 < (char)DAT_123a8498) {
    DAT_123a8498 = DAT_123a8498 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a84d4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84d8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84d4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84d8);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  if ((DAT_123a8498 & 0x100) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x100;
    FUN_100f67b0(L"respawnDelay3");
  }
  if ((DAT_123a8498 & 0x200) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123a84e8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a84ec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84e8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a84ec);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  if ((DAT_123a8498 & 0x400) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x400;
    FUN_100f67b0(L"scale3");
  }
  if ((DAT_123a8498 & 0x800) == 0) {
    DAT_123a8498 = DAT_123a8498 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123a84fc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a8500);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a84fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  fVar4 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_123a8500);
  *(float *)(param_1 + 100) = (float)fVar4;
  FUN_11a89daa();
  return;
}



