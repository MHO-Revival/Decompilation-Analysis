/* ===== FUN_10d658d0 @ 10d658d0  size=202 ===== */
// strings:
//   "FlashUI"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""NewLobby"" */

void __fastcall FUN_10d658d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (*(int *)(*(int *)(DAT_120286c8 + 0xd0) + 0x5c) != 0) {
    local_10 = 0xc09eb852;
    local_c = (int *)0xbeff559b;
    local_8 = (int *)0x4330b852;
    FUN_10b44230(&local_10);
  }
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_c);
  }
  piVar3 = local_8;
  (**(code **)(*local_c + 0x3c))("NewLobby");
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  (**(code **)(*(int *)DAT_1202e818[5] + 0x24))(1);
  (**(code **)(**(int **)(DAT_120286c0 + 0x594) + 0x18))(1);
  return;
}



/* ===== FUN_10d66b30 @ 10d66b30  size=301 ===== */
// strings:
//   "FlashUI"
//   "NewLobby"
//   "LoadLocalData"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""NewLobby""
     ""LoadLocalData"" */

void FUN_10d66b30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_20 [2];
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  local_18 = 0;
  local_14 = (int *)0x0;
  if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
     (FUN_104d7640("FlashUI",&local_18), local_18 == 0)) {
    local_c = (int *)0x0;
    piVar3 = (int *)0x0;
  }
  else {
    local_8 = 1;
    local_10 = (int *)0x0;
    local_c = (int *)0x0;
    if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
      FUN_104d7640("FlashUI",&local_10);
    }
    piVar3 = local_c;
    local_c = (int *)(**(code **)(*local_10 + 0x3c))("NewLobby");
  }
  piVar2 = local_14;
  if (((local_8 & 1) != 0) && (piVar3 != (int *)0x0)) {
    LOCK();
    iVar1 = piVar3[1] + -1;
    piVar3[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 4))();
      LOCK();
      iVar1 = piVar3[2] + -1;
      piVar3[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = piVar2[1] + -1;
    piVar2[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
      piVar3 = piVar2 + 2;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*piVar2 + 8))();
      }
    }
  }
  if ((local_c != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*local_c + 0x8c))(), piVar3 != (int *)0x0)) {
    local_18 = *param_1;
    local_20[0] = 3;
    (**(code **)(*piVar3 + 0xc0))("LoadLocalData",local_20,1,0);
  }
  return;
}



/* ===== FUN_10d679a0 @ 10d679a0  size=309 ===== */
// calls: FindWindowA, DestroyWindow, ShowWindow, SetFocus, SetForegroundWindow
// strings:
//   "NewLobby"

/* [RE-AUTO c0]
   calls: FindWindowA, DestroyWindow, ShowWindow, SetFocus, SetForegroundWindow
   strings:
     ""NewLobby"" */

void __thiscall FUN_10d679a0(int param_1,char *param_2)

{
  char cVar1;
  HWND pHVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  CHAR local_1c [20];
  LPCSTR local_8;
  
  if (*(char *)(param_1 + 0xd95) != '\0') {
    FUN_10d63a60(local_1c);
    pHVar2 = FindWindowA(local_8,(LPCSTR)0x0);
    if (pHVar2 != (HWND)0x0) {
      DestroyWindow(pHVar2);
    }
    iVar5 = 1;
    pHVar2 = (HWND)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x50c))();
    ShowWindow(pHVar2,iVar5);
    pHVar2 = (HWND)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x50c))();
    SetFocus(pHVar2);
    pHVar2 = (HWND)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x50c))();
    SetForegroundWindow(pHVar2);
    *(undefined1 *)(param_1 + 0xd95) = 0;
    if ((local_8 != local_1c) && (local_8 != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_8);
    }
  }
  bVar4 = *param_2 == '\0';
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 100))(bVar4);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))();
    (**(code **)(*piVar3 + 0x94))(bVar4);
    *(bool *)(param_1 + 0xd8f) = bVar4;
  }
  cVar1 = *(char *)(param_1 + 0xd8f);
  iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(**(int **)m_pThis_exref + 0x124))();
    if (*(int **)(iVar5 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0xc) + 0x120))(cVar1 == '\0');
    }
  }
  return;
}



/* ===== FUN_10d69790 @ 10d69790  size=260 ===== */
// strings:
//   "FlashUI"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""NewLobby"" */

void FUN_10d69790(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *local_10;
  int *local_c;
  int local_8;
  
  bVar5 = *param_1 == 1;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_10);
  }
  piVar4 = local_c;
  piVar2 = (int *)(**(code **)(*local_10 + 0x3c))("NewLobby");
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar3 = piVar4[1] + -1;
    piVar4[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*piVar4 + 4))();
      piVar1 = piVar4 + 2;
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*piVar4 + 8))();
      }
    }
  }
  (**(code **)(*piVar2 + 100))(bVar5);
  iVar3 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar3 != 0) {
    piVar4 = (int *)(**(code **)(*piVar2 + 0x8c))();
    (**(code **)(*piVar4 + 0x94))(bVar5);
  }
  *(bool *)(local_8 + 0xd8f) = bVar5;
  iVar3 = FUN_10d17440();
  if ((iVar3 != 0) && (iVar3 = FUN_10d17440(), *(int *)(iVar3 + 4) != 0)) {
    iVar3 = FUN_10d17440();
    piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 4) + 0x28))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x1c))();
    }
  }
  piVar4 = (int *)(**(code **)(*piVar2 + 0x8c))();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x94))(bVar5);
  }
  return;
}



/* ===== FUN_10d6b8e0 @ 10d6b8e0  size=586 ===== */
// calls: FindWindowA, DestroyWindow, ShowWindow, SetFocus, SetForegroundWindow
// strings:
//   "r_hidewindowuntilelobby"
//   "e_SplashHideMouseTime"
//   "FlashUI"
//   "BottomAnnounce"
//   "WaterPrint"

/* [RE-AUTO c0]
   calls: FindWindowA, DestroyWindow, ShowWindow, SetFocus, SetForegroundWindow
   strings:
     ""r_hidewindowuntilelobby""
     ""e_SplashHideMouseTime""
     ""FlashUI""
     ""BottomAnnounce""
     ""WaterPrint"" */

void __fastcall FUN_10d6b8e0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  undefined4 *puVar6;
  float10 fVar7;
  CHAR local_30 [20];
  LPCSTR local_1c;
  undefined1 local_18 [8];
  int local_10;
  int *local_c;
  int *local_8;
  
  bVar2 = false;
  local_8 = (int *)0x0;
  if (*(char *)((int)DAT_1202e818 + 0x209) == '\0') {
    if ((((int *)DAT_1202e818[0xb] == (int *)0x0) ||
        (piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_hidewindowuntilelobby"),
        piVar3 == (int *)0x0)) || (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 0)) {
      FUN_10d6b7c0(local_30);
      pHVar5 = FindWindowA(local_1c,(LPCSTR)0x0);
      if (pHVar5 != (HWND)0x0) {
        DestroyWindow(pHVar5);
      }
      iVar4 = 1;
      pHVar5 = (HWND)(**(code **)(*(int *)DAT_1202e818[4] + 0x50c))();
      ShowWindow(pHVar5,iVar4);
      pHVar5 = (HWND)(**(code **)(*(int *)DAT_1202e818[4] + 0x50c))();
      SetFocus(pHVar5);
      pHVar5 = (HWND)(**(code **)(*(int *)DAT_1202e818[4] + 0x50c))();
      SetForegroundWindow(pHVar5);
      if ((local_1c != local_30) && (local_1c != (CHAR *)0x0)) {
        FUN_10c3d5d0(local_1c);
      }
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_SplashHideMouseTime");
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(int **)(param_1 + 0x28) = piVar3;
    if (piVar3 != (int *)0x0) {
      fVar7 = (float10)(**(code **)(*piVar3 + 0xc))();
      *(float *)(param_1 + 0x2c) = (float)fVar7;
    }
    if (*(char *)(param_1 + 0x25) == '\0') {
      local_10 = 0;
      local_c = (int *)0x0;
      if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
         (FUN_104d7640("FlashUI",&local_10), local_10 == 0)) {
        local_8 = (int *)0x0;
      }
      else {
        bVar2 = true;
        puVar6 = (undefined4 *)FUN_10d6b780(local_18);
        local_8 = (int *)(**(code **)(*(int *)*puVar6 + 0x3c))("BottomAnnounce");
      }
      piVar3 = local_c;
      if (bVar2) {
        FUN_104d7800();
      }
      bVar2 = false;
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar4 = piVar3[1] + -1;
        piVar3[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          (**(code **)(*piVar3 + 4))();
          LOCK();
          iVar4 = piVar3[2] + -1;
          piVar3[2] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            (**(code **)(*piVar3 + 8))();
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 100))(1);
      }
      local_10 = 0;
      local_c = (int *)0x0;
      if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
         (FUN_104d7640("FlashUI",&local_10), local_10 == 0)) {
        local_8 = (int *)0x0;
      }
      else {
        bVar2 = true;
        puVar6 = (undefined4 *)FUN_10d6b780(local_18);
        local_8 = (int *)(**(code **)(*(int *)*puVar6 + 0x3c))("WaterPrint");
      }
      piVar3 = local_c;
      if (bVar2) {
        FUN_104d7800();
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar4 = piVar3[1] + -1;
        piVar3[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          (**(code **)(*piVar3 + 4))();
          piVar1 = piVar3 + 2;
          LOCK();
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*piVar3 + 8))();
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 100))(1);
      }
      FUN_10b6a400();
    }
  }
  return;
}



/* ===== FUN_10e35140 @ 10e35140  size=654 ===== */
// strings:
//   "enable"
//   "levelResult"
//   "winCamp"
//   "atOnceExitEnable"
//   "Result"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""levelResult""
     ""winCamp""
     ""atOnceExitEnable""
     ""Result"" */

void FUN_10e35140(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_12034248 & 1) == 0) {
    DAT_12034248 = DAT_12034248 | 1;
    _DAT_120341d0 = "enable";
    _DAT_120341d4 = 0;
    _DAT_120341d8 = &DAT_11d9d32b;
    _DAT_120341dc = 0;
    _DAT_120341e0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_120341e4,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_120341f8 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_120341e8 = "levelResult";
    _DAT_120341ec = 0;
    _DAT_120341f0 = &DAT_11d9d32b;
    _DAT_120341f4 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_120341fc,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    _DAT_12034210 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12034200 = "winCamp";
    _DAT_12034204 = 0;
    _DAT_12034208 = &DAT_11d9d32b;
    _DAT_1203420c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12034214,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12034218 = "atOnceExitEnable";
    _DAT_1203421c = 0;
    _DAT_12034220 = &DAT_11d9d32b;
    _DAT_12034224 = 0;
    DAT_12034228 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203422c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_12034240 = &DAT_11df7728;
    _DAT_12034230 = 0;
    uRam12034234 = 0;
    uRam12034238 = 0;
    uRam1203423c = 0;
    FUN_11a8911f(&LAB_11c8ce00);
  }
  if ((DAT_12034248 & 2) == 0) {
    DAT_12034248 = DAT_12034248 | 2;
    _DAT_1203424c = "Result";
    uRam12034250 = 0;
    puRam12034254 = &DAT_11d9d32b;
    _DAT_12034258 = 6;
    _DAT_1203425c = 0;
    uRam12034260 = 0;
    uRam12034264 = 0;
    uRam12034268 = 0;
  }
  *param_1 = &DAT_120341d0;
  param_1[1] = &DAT_1203424c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10eabda0 @ 10eabda0  size=2185 ===== */
// strings:
//   "Success"
//   "name1"
//   "type1"
//   "name2"
//   "type2"
//   "name3"
//   "type3"
//   "name4"
//   "type4"
//   "name5"
//   "type5"
//   "name6"
//   "type6"
//   "name7"
//   "type7"
//   "name8"
//   "type8"
//   "name9"
//   "type9"
//   "name10"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Success""
     ""name1""
     ""type1""
     ""name2""
     ""type2""
     ""name3""
     ""type3""
     ""name4""
     ""type4""
     ""name5"" */

void FUN_10eabda0(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_1203b0fc & 1) == 0) {
    DAT_1203b0fc = DAT_1203b0fc | 1;
    _DAT_1203b0cc = &DAT_11cf5abc;
    _DAT_1203b0d0 = 0;
    _DAT_1203b0d4 = &DAT_11d9d32b;
    _DAT_1203b0d8 = 0;
    DAT_1203b0dc = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203b0e0,auStack_8,&DAT_11cf5abc,0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_1203b0f4 = &DAT_11df7728;
    _DAT_1203b0e4 = 0;
    uRam1203b0e8 = 0;
    uRam1203b0ec = 0;
    uRam1203b0f0 = 0;
    FUN_11a8911f(&LAB_11c90460);
  }
  if ((DAT_1203b0fc & 2) == 0) {
    DAT_1203b0fc = DAT_1203b0fc | 2;
    _DAT_1203b100 = "Success";
    uRam1203b104 = 0;
    puRam1203b108 = &DAT_11d9d32b;
    _DAT_1203b10c = 6;
    _DAT_1203b110 = "name1";
    uRam1203b114 = 0;
    puRam1203b118 = &DAT_11d9d32b;
    uRam1203b11c = 5;
    _DAT_1203b120 = "type1";
    uRam1203b124 = 0;
    puRam1203b128 = &DAT_11d9d32b;
    uRam1203b12c = 1;
    _DAT_1203b130 = "name2";
    uRam1203b134 = 0;
    puRam1203b138 = &DAT_11d9d32b;
    uRam1203b13c = 5;
    _DAT_1203b140 = "type2";
    uRam1203b144 = 0;
    puRam1203b148 = &DAT_11d9d32b;
    uRam1203b14c = 1;
    _DAT_1203b150 = "name3";
    uRam1203b154 = 0;
    puRam1203b158 = &DAT_11d9d32b;
    uRam1203b15c = 5;
    _DAT_1203b160 = "type3";
    uRam1203b164 = 0;
    puRam1203b168 = &DAT_11d9d32b;
    uRam1203b16c = 1;
    _DAT_1203b170 = "name4";
    uRam1203b174 = 0;
    puRam1203b178 = &DAT_11d9d32b;
    uRam1203b17c = 5;
    _DAT_1203b180 = "type4";
    uRam1203b184 = 0;
    puRam1203b188 = &DAT_11d9d32b;
    uRam1203b18c = 1;
    _DAT_1203b190 = "name5";
    uRam1203b194 = 0;
    puRam1203b198 = &DAT_11d9d32b;
    uRam1203b19c = 5;
    _DAT_1203b1a0 = "type5";
    uRam1203b1a4 = 0;
    puRam1203b1a8 = &DAT_11d9d32b;
    uRam1203b1ac = 1;
    _DAT_1203b1b0 = "name6";
    uRam1203b1b4 = 0;
    puRam1203b1b8 = &DAT_11d9d32b;
    uRam1203b1bc = 5;
    _DAT_1203b1c0 = "type6";
    uRam1203b1c4 = 0;
    puRam1203b1c8 = &DAT_11d9d32b;
    uRam1203b1cc = 1;
    _DAT_1203b1d0 = "name7";
    uRam1203b1d4 = 0;
    puRam1203b1d8 = &DAT_11d9d32b;
    uRam1203b1dc = 5;
    _DAT_1203b1e0 = "type7";
    uRam1203b1e4 = 0;
    puRam1203b1e8 = &DAT_11d9d32b;
    uRam1203b1ec = 1;
    _DAT_1203b1f0 = "name8";
    uRam1203b1f4 = 0;
    puRam1203b1f8 = &DAT_11d9d32b;
    uRam1203b1fc = 5;
    _DAT_1203b200 = "type8";
    uRam1203b204 = 0;
    puRam1203b208 = &DAT_11d9d32b;
    uRam1203b20c = 1;
    _DAT_1203b210 = "name9";
    uRam1203b214 = 0;
    puRam1203b218 = &DAT_11d9d32b;
    uRam1203b21c = 5;
    _DAT_1203b220 = "type9";
    uRam1203b224 = 0;
    puRam1203b228 = &DAT_11d9d32b;
    uRam1203b22c = 1;
    _DAT_1203b230 = "name10";
    uRam1203b234 = 0;
    puRam1203b238 = &DAT_11d9d32b;
    uRam1203b23c = 5;
    _DAT_1203b240 = "type10";
    uRam1203b244 = 0;
    puRam1203b248 = &DAT_11d9d32b;
    uRam1203b24c = 1;
    _DAT_1203b250 = "name11";
    uRam1203b254 = 0;
    puRam1203b258 = &DAT_11d9d32b;
    uRam1203b25c = 5;
    _DAT_1203b260 = "type11";
    uRam1203b264 = 0;
    puRam1203b268 = &DAT_11d9d32b;
    uRam1203b26c = 1;
    _DAT_1203b270 = "name12";
    uRam1203b274 = 0;
    puRam1203b278 = &DAT_11d9d32b;
    uRam1203b27c = 5;
    _DAT_1203b280 = "type12";
    uRam1203b284 = 0;
    puRam1203b288 = &DAT_11d9d32b;
    uRam1203b28c = 1;
    _DAT_1203b290 = "name13";
    uRam1203b294 = 0;
    puRam1203b298 = &DAT_11d9d32b;
    uRam1203b29c = 5;
    _DAT_1203b2a0 = "type13";
    uRam1203b2a4 = 0;
    puRam1203b2a8 = &DAT_11d9d32b;
    uRam1203b2ac = 1;
    _DAT_1203b2b0 = "name14";
    uRam1203b2b4 = 0;
    puRam1203b2b8 = &DAT_11d9d32b;
    uRam1203b2bc = 5;
    _DAT_1203b2c0 = "type14";
    uRam1203b2c4 = 0;
    puRam1203b2c8 = &DAT_11d9d32b;
    uRam1203b2cc = 1;
    _DAT_1203b2d0 = "name15";
    uRam1203b2d4 = 0;
    puRam1203b2d8 = &DAT_11d9d32b;
    uRam1203b2dc = 5;
    _DAT_1203b2e0 = "type15";
    uRam1203b2e4 = 0;
    puRam1203b2e8 = &DAT_11d9d32b;
    uRam1203b2ec = 1;
    _DAT_1203b2f0 = "name16";
    uRam1203b2f4 = 0;
    puRam1203b2f8 = &DAT_11d9d32b;
    uRam1203b2fc = 5;
    _DAT_1203b300 = "type16";
    uRam1203b304 = 0;
    puRam1203b308 = &DAT_11d9d32b;
    uRam1203b30c = 1;
    _DAT_1203b310 = "maleTeachID";
    uRam1203b314 = 0;
    puRam1203b318 = &DAT_11d9d32b;
    uRam1203b31c = 1;
    _DAT_1203b320 = "femaleTeachID";
    uRam1203b324 = 0;
    puRam1203b328 = &DAT_11d9d32b;
    uRam1203b32c = 1;
    _DAT_1203b330 = "selWeaponID";
    uRam1203b334 = 0;
    puRam1203b338 = &DAT_11d9d32b;
    uRam1203b33c = 1;
    _DAT_1203b340 = "quitTeachID";
    uRam1203b344 = 0;
    puRam1203b348 = &DAT_11d9d32b;
    uRam1203b34c = 1;
    _DAT_1203b350 = "baseTeachID";
    uRam1203b354 = 0;
    puRam1203b358 = &DAT_11d9d32b;
    uRam1203b35c = 1;
    _DAT_1203b360 = "advanceTeachID";
    uRam1203b364 = 0;
    puRam1203b368 = &DAT_11d9d32b;
    uRam1203b36c = 1;
    _DAT_1203b370 = "backTeachID";
    uRam1203b374 = 0;
    puRam1203b378 = &DAT_11d9d32b;
    uRam1203b37c = 1;
    _DAT_1203b380 = "nextTeachID";
    uRam1203b384 = 0;
    puRam1203b388 = &DAT_11d9d32b;
    uRam1203b38c = 1;
    _DAT_1203b390 = "doTeachID";
    uRam1203b394 = 0;
    puRam1203b398 = &DAT_11d9d32b;
    uRam1203b39c = 1;
    _DAT_1203b3a0 = "previewTeachID";
    uRam1203b3a4 = 0;
    puRam1203b3a8 = &DAT_11d9d32b;
    uRam1203b3ac = 1;
    _DAT_1203b3b0 = "currentPlayerWeaponType";
    uRam1203b3b4 = 0;
    puRam1203b3b8 = &DAT_11d9d32b;
    uRam1203b3bc = 1;
    _DAT_1203b3c0 = "EnterLevelTeachID";
    uRam1203b3c4 = 0;
    puRam1203b3c8 = &DAT_11d9d32b;
    uRam1203b3cc = 1;
    _DAT_1203b3d0 = "SelectWeaponTeachID";
    uRam1203b3d4 = 0;
    puRam1203b3d8 = &DAT_11d9d32b;
    uRam1203b3dc = 1;
    _DAT_1203b3e0 = "QuitLessonTeachID";
    uRam1203b3e4 = 0;
    puRam1203b3e8 = &DAT_11d9d32b;
    uRam1203b3ec = 1;
    _DAT_1203b3f0 = 0;
    uRam1203b3f4 = 0;
    uRam1203b3f8 = 0;
    uRam1203b3fc = 0;
  }
  *param_1 = &DAT_1203b0cc;
  param_1[1] = &DAT_1203b100;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ead340 @ 10ead340  size=739 ===== */
// strings:
//   "Libs/LevelXML/WeaponTutorialV2.xml"
//   "WeaponTutorial"
//   "MaleTeachID"
//   "WeaponTutorialTaskID"
//   "FemaleTeachID"
//   "EnterLevelTeachID"
//   "SelectWeaponTeachID"
//   "QuitLessonTeachID"
//   "TextMessageInfo"
//   "selWeaponID"
//   "quitTeachID"
//   "baseTeachID"
//   "advanceTeachID"
//   "backTeachID"
//   "nextTeachID"
//   "doTeachID"
//   "previewTeachID"

/* [RE-AUTO c0]
   strings:
     ""Libs/LevelXML/WeaponTutorialV2.xml""
     ""WeaponTutorial""
     ""MaleTeachID""
     ""WeaponTutorialTaskID""
     ""FemaleTeachID""
     ""EnterLevelTeachID""
     ""SelectWeaponTeachID""
     ""QuitLessonTeachID""
     ""TextMessageInfo""
     ""selWeaponID"" */

undefined1 __thiscall FUN_10ead340(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int *piStack_50;
  undefined4 *puStack_4c;
  char *pcStack_48;
  int **ppiStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_24 [24];
  int *local_c;
  int *local_8;
  
  if ((param_2 == (int *)0x0) || (piStack_40 = param_2, (char)*param_2 == '\0')) {
    piStack_40 = (int *)0x11cf593c;
  }
  uStack_34 = 0;
  uStack_38 = 1;
  uStack_3c = 0;
  ppiStack_44 = &local_c;
  pcStack_48 = (char *)0x10ead376;
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))();
  if (local_c == (int *)0x0) {
    return 0;
  }
  pcStack_48 = (char *)0x10ead38e;
  FUN_10eaf170();
  pcStack_48 = (char *)0x10ead395;
  FUN_10eb0230();
  puStack_4c = &param_2;
  pcStack_48 = "WeaponTutorial";
  piStack_50 = (int *)0x10ead3a9;
  (**(code **)(*local_c + 0xac))();
  if (param_2 != (int *)0x0) {
    piStack_50 = (int *)(param_1 + 0x28);
    cVar1 = (**(code **)(*param_2 + 0x74))("MaleTeachID");
    if (cVar1 != '\0') {
      piStack_50 = (int *)(param_1 + 0x58);
      cVar1 = (**(code **)(*param_2 + 0x74))("WeaponTutorialTaskID");
      if (cVar1 != '\0') {
        piStack_50 = (int *)(param_1 + 0x2c);
        cVar1 = (**(code **)(*param_2 + 0x74))("FemaleTeachID");
        if (cVar1 != '\0') {
          piStack_50 = (int *)(param_1 + 0x5c);
          cVar1 = (**(code **)(*param_2 + 0x74))("EnterLevelTeachID");
          if (cVar1 != '\0') {
            piStack_50 = (int *)(param_1 + 0x60);
            cVar1 = (**(code **)(*param_2 + 0x74))("SelectWeaponTeachID");
            if (cVar1 != '\0') {
              piStack_50 = (int *)(param_1 + 100);
              cVar1 = (**(code **)(*param_2 + 0x74))("QuitLessonTeachID");
              if (cVar1 != '\0') {
                iVar7 = 0;
                piStack_50 = (int *)0x10ead460;
                iVar2 = (**(code **)(*param_2 + 0xa0))();
                if (0 < iVar2) {
                  do {
                    piStack_50 = (int *)0x10ead46c;
                    FUN_10ea9d50();
                    piStack_50 = param_2;
                    (**(code **)(*param_2 + 0xa8))(&piStack_50,iVar7);
                    cVar1 = FUN_10ead220();
                    if (cVar1 == '\0') {
                      FUN_10eaf170();
                      FUN_10eb0230();
                      FUN_10eb00e0();
                      FUN_100e5670();
                      goto LAB_10ead5ee;
                    }
                    piVar3 = (int *)FUN_10eaf840(local_24);
                    piVar4 = *(int **)(param_1 + 4);
                    piVar3[1] = (int)piVar4;
                    *piVar3 = param_1;
                    *piVar4 = (int)piVar3;
                    *(int **)(param_1 + 4) = piVar3;
                    FUN_10eb00e0();
                    FUN_100e5670();
                    iVar7 = iVar7 + 1;
                    iVar2 = (**(code **)(*param_2 + 0xa0))();
                  } while (iVar7 < iVar2);
                }
                piStack_50 = (int *)0x11cf59e0;
                (**(code **)(*local_c + 0xac))(&local_8);
                if (local_8 == (int *)0x0) {
LAB_10ead613:
                  uVar6 = 0;
                }
                else {
                  piStack_50 = (int *)(param_1 + 0x30);
                  cVar1 = (**(code **)(*local_8 + 0x74))("selWeaponID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x34);
                  cVar1 = (**(code **)(*local_8 + 0x74))("quitTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x38);
                  cVar1 = (**(code **)(*local_8 + 0x74))("baseTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x3c);
                  cVar1 = (**(code **)(*local_8 + 0x74))("advanceTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x40);
                  cVar1 = (**(code **)(*local_8 + 0x74))("backTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x44);
                  cVar1 = (**(code **)(*local_8 + 0x74))("nextTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x48);
                  cVar1 = (**(code **)(*local_8 + 0x74))("doTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)(param_1 + 0x4c);
                  cVar1 = (**(code **)(*local_8 + 0x74))("previewTeachID");
                  if (cVar1 == '\0') goto LAB_10ead613;
                  piStack_50 = (int *)0x10ead5b7;
                  piVar4 = (int *)FUN_10eacf00();
                  if (piVar4 == (int *)0x0) goto LAB_10ead613;
                  piStack_50 = (int *)0x10ead5c5;
                  uVar5 = (**(code **)(*piVar4 + 0x294))();
                  uVar6 = 1;
                  *(undefined4 *)(param_1 + 0x50) = uVar5;
                }
                if (local_8 != (int *)0x0) {
                  piStack_50 = (int *)0x10ead61e;
                  (**(code **)(*local_8 + 4))();
                }
                goto LAB_10ead5f0;
              }
            }
          }
        }
      }
    }
  }
LAB_10ead5ee:
  uVar6 = 0;
LAB_10ead5f0:
  if (param_2 != (int *)0x0) {
    piStack_50 = (int *)0x10ead5f9;
    (**(code **)(*param_2 + 4))();
  }
  if (local_c != (int *)0x0) {
    piStack_50 = (int *)0x10ead605;
    (**(code **)(*local_c + 4))();
  }
  return uVar6;
}



/* ===== FUN_10eb85d0 @ 10eb85d0  size=1922 ===== */
// strings:
//   "Pause"
//   "Resume"
//   "InstanceID"
//   "VideoFile"
//   "Transparent"
//   "Skipable"
//   "AudioChannel"
//   "SubtitleChannel"
//   "OnPlay"
//   "OnStop"
//   "OnPause"
//   "OnResume"
//   "OnLooped"
//   "OnVideoNotFound"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Pause""
     ""Resume""
     ""InstanceID""
     ""VideoFile""
     ""Transparent""
     ""Skipable""
     ""AudioChannel""
     ""SubtitleChannel""
     ""OnPlay""
     ""OnStop"" */

void FUN_10eb85d0(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_f8 [4];
  undefined *local_f4;
  undefined4 local_f0;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined4 *local_e4;
  undefined1 local_e0 [4];
  char *local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined4 *local_cc;
  undefined1 local_c8 [4];
  undefined *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined1 local_b0 [4];
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  undefined1 local_98 [4];
  char *local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined *local_84;
  undefined1 local_80 [4];
  char *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined *local_6c;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined1 local_50 [4];
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined1 *puStack_8;
  
  if ((DAT_1203c2a8 & 1) == 0) {
    DAT_1203c2a8 = DAT_1203c2a8 | 1;
    local_c4 = &DAT_11cf63a4;
    local_c0 = 0;
    local_bc = &DAT_11d9d32b;
    local_b8 = 0;
    local_b4 = &DAT_11df7728;
    _DAT_1203c188 = &DAT_11cf63a4;
    _DAT_1203c18c = 0;
    _DAT_1203c190 = &DAT_11d9d32b;
    _DAT_1203c194 = 0;
    _DAT_1203c198 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203c19c,local_b0);
    (**(code **)(((uint)local_b4 & 0xfffffffc) + 4))(local_b0);
    local_f4 = &DAT_11ced64c;
    local_f0 = 0;
    local_ec = &DAT_11d9d32b;
    local_e8 = 0;
    local_e4 = &DAT_11df7728;
    _DAT_1203c1a0 = &DAT_11ced64c;
    _DAT_1203c1a4 = 0;
    _DAT_1203c1a8 = &DAT_11d9d32b;
    _DAT_1203c1ac = 0;
    _DAT_1203c1b0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203c1b4,local_e0);
    (**(code **)(((uint)local_e4 & 0xfffffffc) + 4))(local_e0);
    local_dc = "Pause";
    local_d8 = 0;
    local_d4 = &DAT_11d9d32b;
    local_d0 = 0;
    local_cc = &DAT_11df7728;
    _DAT_1203c1b8 = "Pause";
    _DAT_1203c1bc = 0;
    _DAT_1203c1c0 = &DAT_11d9d32b;
    _DAT_1203c1c4 = 0;
    _DAT_1203c1c8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203c1cc,local_c8);
    (**(code **)(((uint)local_cc & 0xfffffffc) + 4))(local_c8);
    _DAT_1203c1d0 = "Resume";
    _DAT_1203c1d4 = 0;
    _DAT_1203c1d8 = &DAT_11d9d32b;
    _DAT_1203c1dc = 0;
    _DAT_1203c1e0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203c1e4,local_f8);
    (*(code *)PTR_FUN_11df772c)(local_f8);
    local_7c = "InstanceID";
    local_78 = 0;
    local_74 = &DAT_11d9d32b;
    local_6c = &DAT_11df7669;
    _DAT_1203c1f8 = &DAT_11df7669;
    local_70 = 0;
    local_68 = 0xffffffff;
    _DAT_1203c1e8 = "InstanceID";
    _DAT_1203c1ec = 0;
    _DAT_1203c1f0 = &DAT_11d9d32b;
    _DAT_1203c1f4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203c1fc,&local_68);
    (**(code **)(((uint)local_6c & 0xfffffffc) + 4))(&local_68);
    local_1c = "VideoFile";
    local_18 = 0;
    local_14 = &DAT_11d9d32b;
    uStack_10 = 0;
    uStack_c = 0;
    puStack_8 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    uStack_c = uStack_c & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_1203c200 = local_1c;
    _DAT_1203c204 = local_18;
    _DAT_1203c208 = local_14;
    _DAT_1203c20c = uStack_10;
    _DAT_1203c210 = uStack_c;
    (**(code **)((uStack_c & 0xfffffffc) + 0xc))(&DAT_1203c214,&puStack_8);
    (**(code **)((uStack_c & 0xfffffffc) + 4))(&puStack_8);
    local_64 = "Transparent";
    local_60 = 0;
    local_5c = &DAT_11d9d32b;
    local_54 = &DAT_11df7709;
    _DAT_1203c228 = &DAT_11df7709;
    local_58 = 0;
    local_50[0] = 0;
    _DAT_1203c218 = "Transparent";
    _DAT_1203c21c = 0;
    _DAT_1203c220 = &DAT_11d9d32b;
    _DAT_1203c224 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203c22c,local_50);
    (**(code **)(((uint)local_54 & 0xfffffffc) + 4))(local_50);
    local_ac = &DAT_11dbb71c;
    local_a8 = 0;
    local_9c = &DAT_11df7709;
    _DAT_1203c240 = &DAT_11df7709;
    local_a4 = &DAT_11d9d32b;
    local_a0 = 0;
    local_98[0] = 0;
    _DAT_1203c230 = &DAT_11dbb71c;
    _DAT_1203c234 = 0;
    _DAT_1203c238 = &DAT_11d9d32b;
    _DAT_1203c23c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203c244,local_98);
    (**(code **)(((uint)local_9c & 0xfffffffc) + 4))(local_98);
    local_94 = "Skipable";
    local_90 = 0;
    local_8c = &DAT_11d9d32b;
    local_88 = 0;
    local_80[0] = 1;
    local_84 = &DAT_11df7709;
    _DAT_1203c248 = "Skipable";
    _DAT_1203c258 = &DAT_11df7709;
    _DAT_1203c24c = 0;
    _DAT_1203c250 = &DAT_11d9d32b;
    _DAT_1203c254 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203c25c,local_80);
    (**(code **)(((uint)local_84 & 0xfffffffc) + 4))(local_80);
    local_34 = "AudioChannel";
    local_30 = 0;
    local_24 = &DAT_11df7669;
    _DAT_1203c270 = &DAT_11df7669;
    local_2c = &DAT_11d9d32b;
    local_28 = 0;
    local_20 = 0;
    _DAT_1203c260 = "AudioChannel";
    _DAT_1203c264 = 0;
    _DAT_1203c268 = &DAT_11d9d32b;
    _DAT_1203c26c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203c274,&local_20);
    (**(code **)(((uint)local_24 & 0xfffffffc) + 4))(&local_20);
    local_4c = "SubtitleChannel";
    local_3c = &DAT_11df7669;
    DAT_1203c288 = &DAT_11df7669;
    local_48 = 0;
    local_44 = &DAT_11d9d32b;
    local_40 = 0;
    local_38 = 0;
    _DAT_1203c278 = "SubtitleChannel";
    _DAT_1203c27c = 0;
    _DAT_1203c280 = &DAT_11d9d32b;
    _DAT_1203c284 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203c28c,&local_38);
    (**(code **)(((uint)local_3c & 0xfffffffc) + 4))(&local_38);
    DAT_1203c2a0 = &DAT_11df7728;
    _DAT_1203c290 = 0;
    uRam1203c294 = 0;
    uRam1203c298 = 0;
    uRam1203c29c = 0;
    FUN_11a8911f(&LAB_11c90e40);
  }
  if ((DAT_1203c2a8 & 2) == 0) {
    DAT_1203c2a8 = DAT_1203c2a8 | 2;
    _DAT_1203c2b0 = "OnPlay";
    uRam1203c2b4 = 0;
    _DAT_1203c2b8 = &DAT_11d9d32b;
    uRam1203c2bc = 0;
    _DAT_1203c2c0 = "OnStop";
    uRam1203c2c4 = 0;
    puRam1203c2c8 = &DAT_11d9d32b;
    uRam1203c2cc = 6;
    _DAT_1203c2d0 = "OnPause";
    uRam1203c2d4 = 0;
    puRam1203c2d8 = &DAT_11d9d32b;
    uRam1203c2dc = 0;
    _DAT_1203c2e0 = "OnResume";
    uRam1203c2e4 = 0;
    puRam1203c2e8 = &DAT_11d9d32b;
    uRam1203c2ec = 0;
    _DAT_1203c2f0 = "OnLooped";
    uRam1203c2f4 = 0;
    puRam1203c2f8 = &DAT_11d9d32b;
    uRam1203c2fc = 0;
    _DAT_1203c300 = "OnVideoNotFound";
    uRam1203c304 = 0;
    puRam1203c308 = &DAT_11d9d32b;
    uRam1203c30c = 0;
    _DAT_1203c310 = 0;
    uRam1203c314 = 0;
    uRam1203c318 = 0;
    uRam1203c31c = 0;
  }
  *param_1 = &DAT_1203c188;
  param_1[1] = &DAT_1203c2b0;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff02f | 0x20;
  return;
}



/* ===== FUN_1109d790 @ 1109d790  size=138 ===== */
// strings:
//   "SPAnalyst"
//   "levelStartTime"
//   "gameStartTime"
//   "kills"
//   "deaths"

/* [RE-AUTO c0]
   strings:
     ""SPAnalyst""
     ""levelStartTime""
     ""gameStartTime""
     ""kills""
     ""deaths"" */

void __thiscall FUN_1109d790(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x18))("SPAnalyst",1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x38))("levelStartTime",param_1 + 0x20,0);
    (**(code **)(*param_2 + 0x38))("gameStartTime",param_1 + 0x28,0);
    (**(code **)(*param_2 + 0x14))(&DAT_11d0fcc8);
    (**(code **)(*param_2 + 0x54))("kills",param_1 + 0x18,0);
    (**(code **)(*param_2 + 0x54))("deaths",param_1 + 0x1c,0);
    (**(code **)(*param_2 + 0x1c))();
    (**(code **)(*param_2 + 0x1c))();
  }
  return;
}



/* ===== FUN_110ae0e0 @ 110ae0e0  size=519 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "FlashUI"
//   "DisablePlayerInput"
//   "DisableUIInput"
//   "UISHCallBack"
//   "OnPlayUISound"
//   "OnPauseGameCallBack"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""DisablePlayerInput""
     ""DisableUIInput""
     ""UISHCallBack""
     ""OnPlayUISound""
     ""OnPauseGameCallBack""
     ""NewLobby"" */

int __fastcall FUN_110ae0e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *piVar3;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_c);
  }
  piVar2 = local_8;
  local_8 = (int *)(**(code **)(*local_c + 0x3c))(&DAT_11dbd178);
  piVar3 = extraout_ECX;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 4))();
      LOCK();
      iVar1 = piVar2[2] + -1;
      piVar2[2] = iVar1;
      UNLOCK();
      piVar3 = extraout_ECX_00;
      if (iVar1 == 0) {
        (**(code **)(*piVar2 + 8))();
        piVar3 = extraout_ECX_01;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    iVar1 = *local_8;
    CInfoRecord__GetModelString("UIModeRelationUICount",piVar3,FUN_110aebc0);
    (**(code **)(iVar1 + 0xf0))();
    iVar1 = *local_8;
    CInfoRecord__GetModelString("DisablePlayerInput",extraout_ECX_02,FUN_110aebf0);
    (**(code **)(iVar1 + 0xf0))();
    iVar1 = *local_8;
    CInfoRecord__GetModelString("DisableUIInput",extraout_ECX_03,FUN_110aec30);
    (**(code **)(iVar1 + 0xf0))();
    iVar1 = *local_8;
    CInfoRecord__GetModelString("UISHCallBack",extraout_ECX_04,FUN_110aec60);
    (**(code **)(iVar1 + 0xf0))();
    iVar1 = *local_8;
    CInfoRecord__GetModelString("OnPlayUISound",extraout_ECX_05,FUN_110aef00);
    (**(code **)(iVar1 + 0xf0))();
    iVar1 = *local_8;
    CInfoRecord__GetModelString("OnPauseGameCallBack",extraout_ECX_06,FUN_110aecf0);
    (**(code **)(iVar1 + 0xf0))();
  }
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_c);
  }
  piVar2 = local_8;
  local_8 = (int *)(**(code **)(*local_c + 0x3c))("NewLobby");
  piVar3 = extraout_ECX_07;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 4))();
      piVar3 = piVar2 + 2;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      piVar3 = extraout_ECX_08;
      if (iVar1 == 1) {
        (**(code **)(*piVar2 + 8))();
        piVar3 = extraout_ECX_09;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    iVar1 = *local_8;
    CInfoRecord__GetModelString("OnPlayUISound",piVar3,FUN_110aef00);
    (**(code **)(iVar1 + 0xf0))();
  }
  FUN_110af700(param_1,&LAB_110aef30);
  FUN_110af5b0(param_1,&LAB_110aef40);
  FUN_110af620(param_1,FUN_110aef50);
  FUN_110af690(param_1,&LAB_110aefd0);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



/* ===== CCliLogicPlayer::AfterEnterBattleGround @ 11161990  size=601 ===== */
// calls: GetClientMessageChannel
// strings:
//   "CCliLogicPlayer::AfterEnterBattleGround"

/* [RE-AUTO c3]
   id: CCliLogicPlayer::AfterEnterBattleGround
   strings:
     ""CCliLogicPlayer::AfterEnterBattleGround"" */

void __thiscall CCliLogicPlayer__AfterEnterBattleGround(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined **local_2c [2];
  undefined1 *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_113966e0(param_2);
  (**(code **)(*param_1 + 0x2e8))();
  cVar1 = (**(code **)(*param_1 + 0x280))();
  if (cVar1 != '\0') {
    local_8 = param_1[0xb];
    local_14 = 0x6e;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    (**(code **)(**(int **)(param_1[3] + 0x98) + 0x14))(&local_14);
    iVar2 = GetClientMessageChannel();
    if (iVar2 != 0) {
      piVar3 = (int *)GetClientMessageChannel();
      (**(code **)(*piVar3 + 4))(0x6f,(int)&param_2 + 3);
    }
  }
  (**(code **)(*param_1 + 0x2c0))(8,0,0);
  (**(code **)(*param_1 + 0x2c0))(0,0,0);
  (**(code **)(*param_1 + 0x2c0))(2,0,0);
  (**(code **)(*param_1 + 0x2c0))(4,0,0);
  (**(code **)(*param_1 + 0x2c0))(0x12,0,0);
  (**(code **)(*param_1 + 0x2c0))(5,0,0);
  cVar1 = (**(code **)(*param_1 + 0x280))();
  if (cVar1 != '\0') {
    param_2 = param_1[0xb];
    iVar2 = GetClientMessageChannel();
    if (iVar2 != 0) {
      piVar3 = (int *)GetClientMessageChannel();
      (**(code **)(*piVar3 + 4))(0x276,&param_2);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x280))();
  if ((cVar1 != '\0') && ((int *)param_1[3] != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)param_1[3] + 0x164))();
    if ((cVar1 != '\0') && (param_1[0xb8d] != 0)) {
      FUN_11218530();
    }
  }
  iVar2 = param_1[0x982e];
  if (iVar2 != 0) {
    FUN_100e6ed0();
    FUN_10c3d5d0(iVar2);
    param_1[0x982e] = 0;
  }
  if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  if (param_1[0x982e] != 0) {
    local_2c[0] = &PTR_FUN_11d15ef0;
    local_24 = &LAB_111616bf;
    local_20 = 0;
    local_1c = param_1;
    FUN_100e6f40(&local_10,0x9ce,0xffffffff,0xffffffff,local_2c,0xffffffff,1);
  }
  if (param_1[0x9830] == -1) {
    (**(code **)(*param_1 + 0x17c))();
    iVar2 = FUN_100ea610("CCliLogicPlayer::AfterEnterBattleGround",10000,0,param_1,&LAB_11167250,0);
    param_1[0x9830] = iVar2;
  }
  return;
}



/* ===== FUN_112a7670 @ 112a7670  size=601 ===== */
// calls: sprintf
// strings:
//   "InstanceId = %d, LevelId = %d"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""InstanceId = %d, LevelId = %d"" */

void FUN_112a7670(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int local_43c;
  undefined1 local_438 [16];
  undefined1 *local_428;
  undefined1 *local_424;
  undefined1 local_420 [12];
  int local_414;
  undefined8 local_410;
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  sprintf(local_408,"InstanceId = %d, LevelId = %d",param_3[1],*param_3);
  local_428 = local_438;
  local_424 = local_428;
  FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_410._0_4_ = local_420;
  pcVar1 = local_408;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  local_410._4_4_ = (undefined1 *)local_410;
  FUN_100b62c0(local_408,pcVar2);
  FUN_111e09b0();
  FUN_1115cba0(8,local_420,local_438,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if ((local_410._4_4_ != local_420) && (local_410._4_4_ != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_410._4_4_);
  }
  if ((local_424 != local_438) && (local_424 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_424);
  }
  local_43c = param_3[1];
  if (0 < local_43c) {
    FUN_111c5790(&local_43c);
    FUN_11a89daa();
    return;
  }
  local_414 = *param_3;
  if (0 < local_414) {
    local_410 = 0;
    FUN_111bb9b0(&local_414);
    FUN_11a89daa();
    return;
  }
  local_410 = CONCAT44(local_420,local_420);
  FUN_100b62c0(&DAT_11d9d32b,&DAT_11d9d32b);
  local_428 = local_438;
  local_424 = local_428;
  FUN_100b62c0(&DAT_11d1cfc4,&DAT_11d1cfd5);
  FUN_111e09b0();
  FUN_1115cba0(8,local_438,local_420,0,1,0,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if ((local_424 != local_438) && (local_424 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_424);
  }
  if ((local_410._4_4_ != local_420) && (local_410._4_4_ != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_410._4_4_);
  }
  FUN_11a89daa();
  return;
}



/* ===== CCliFarmBattleGround::_InitCP @ 112ee750  size=125 ===== */
// strings:
//   "CCliFarmBattleGround::_InitCP"

/* [RE-AUTO c3]
   id: CCliFarmBattleGround::_InitCP
   strings:
     ""CCliFarmBattleGround::_InitCP"" */

void __fastcall CCliFarmBattleGround___InitCP(undefined **param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined **local_8;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined1 *)(param_1 + 0xb4) = 1;
    local_8 = param_1;
    if ((int *)param_1[0x27] != (int *)0x0) {
      local_8 = &PTR_FUN_11d21668;
      (**(code **)(*(int *)param_1[0x27] + 0x10))(&local_8);
    }
    piVar1 = (int *)(**(code **)(*param_1 + 0x118))();
    puVar2 = (undefined *)
             (**(code **)(*piVar1 + 0x14))
                       ("CCliFarmBattleGround::_InitCP",1000,0,param_1,&LAB_112ee7d0,0,0,0);
    param_1[0xb5] = puVar2;
  }
  return;
}



/* ===== FUN_11425c30 @ 11425c30  size=1004 ===== */
// calls: CMonsterLevelMatch::GetManagers
// strings:
//   "CMHLevelModeInfo"
//   "CMonsterLevelMatch"
//   "Normal"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CMonsterLevelMatch::GetManagers
   strings:
     ""CMHLevelModeInfo""
     ""CMonsterLevelMatch""
     ""Normal"" */

void __thiscall FUN_11425c30(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *local_34;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_12190144 & 1) == 0) {
    DAT_12190144 = DAT_12190144 | 1;
    _DAT_1219011c = _DAT_11cca120;
    uRam12190120 = _UNK_11cca124;
    uRam12190124 = _UNK_11cca128;
    uRam12190128 = _UNK_11cca12c;
    _DAT_1219012c = _DAT_11cca120;
    uRam12190130 = _UNK_11cca124;
    uRam12190134 = _UNK_11cca128;
    uRam12190138 = _UNK_11cca12c;
    _DAT_1219013c = 0x3f800000;
  }
  cVar1 = FUN_113a32e0();
  if (cVar1 == '\0') {
    local_34 = &DAT_1219011c;
  }
  else {
    FUN_113a23b0(*(undefined4 *)(*(int *)(param_2 + 0xb4) + 0x3c));
    local_34 = (undefined *)FUN_11681240();
  }
  uVar2 = FUN_1140dce0();
  FUN_113a23b0(uVar2);
  iVar3 = FUN_11680c20();
  local_28 = FUN_113a23b0();
  iVar6 = *(int *)(*(int *)(param_2 + 0x78) + 0x20);
  iVar4 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  if (iVar6 == -1) {
    iVar4 = 1;
  }
  else if ((iVar6 == 0) && (*(int *)(iVar4 + 0x30) != 0)) {
    iVar4 = 1;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x28);
    if (iVar5 == 0) {
      iVar4 = 1;
    }
    else {
      iVar6 = iVar6 - *(int *)(iVar4 + 0x30);
      if ((iVar6 < 0) || (*(int *)(iVar4 + 0x24) <= iVar6)) {
LAB_11425d42:
        iVar6 = 0;
      }
      else {
        if (*(int *)(*(int *)(iVar4 + 0x20) + (iVar6 / iVar5) * 4) == 0) goto LAB_11425d42;
        iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x20) + (iVar6 / iVar5) * 4) +
                        (iVar6 % iVar5) * 4);
      }
      iVar4 = 1;
      if (iVar6 != 0) {
        iVar4 = *(int *)(iVar6 + 0x110);
      }
    }
  }
  iVar5 = FUN_1025b060();
  iVar6 = FUN_1140dce0();
  iVar6 = iVar6 + (iVar4 + iVar5 * 10) * 10;
  iVar4 = CMonsterLevelMatch__GetManagers(0,"CMonsterLevelMatch",0);
  if ((iVar6 != -1) &&
     ((((iVar6 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar4 + 0x28), iVar5 != 0)) &&
      ((iVar6 = iVar6 - *(int *)(iVar4 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar4 + 0x24)))))))
  {
    if (*(int *)(*(int *)(iVar4 + 0x20) + (iVar6 / iVar5) * 4) != 0) {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x20) + (iVar6 / iVar5) * 4) + (iVar6 % iVar5) * 4)
      ;
      goto LAB_11425dc4;
    }
  }
  iVar6 = 0;
LAB_11425dc4:
  iVar4 = FUN_11680e40(*(undefined4 *)(param_1 + 4));
  if (((iVar6 != 0) && (iVar4 != 0)) && (iVar3 != 0)) {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Normal","");
    local_24 = FUN_117cdd70(0,0,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_28 = (int)(*(float *)(iVar4 + 0x14) * *(float *)(iVar6 + 0x20) * *(float *)(iVar3 + 0x2c)
                    * *(float *)(iVar6 + 0x2c));
    FUN_11428a10(&local_28,0);
    local_28 = (int)(*(float *)(iVar4 + 0x1c) * *(float *)(iVar6 + 0x20) * *(float *)(iVar3 + 0x2c)
                    * *(float *)(iVar6 + 0x2c));
    FUN_11428ac0(&local_28,0);
    *(float *)(param_1 + 0x30c) =
         *(float *)(iVar6 + 0x20) * *(float *)(iVar3 + 0x2c) * *(float *)(iVar6 + 0x2c);
    local_28 = FUN_11429b20();
    FUN_11428b70(&local_28,0);
    local_24 = (int)(*(float *)(iVar4 + 0x4c) * *(float *)(iVar6 + 0x20) *
                     *(float *)(local_24 + 0x14) * *(float *)(iVar6 + 0x2c));
    FUN_1025afc0(&local_24);
  }
  iVar6 = FUN_114270b0();
  local_24 = (int)((float)iVar6 * *(float *)(local_34 + 0xc));
  FUN_11428a10(&local_24,0);
  iVar6 = FUN_11427190();
  local_24 = (int)((float)iVar6 * *(float *)(local_34 + 8));
  FUN_11428ac0(&local_24,0);
  iVar6 = FUN_11427270();
  local_24 = (int)((float)iVar6 * *(float *)(local_34 + 4));
  FUN_11428b70(&local_24,0);
  iVar6 = *(int *)(param_2 + 0x78);
  if (iVar6 != 0) {
    iVar3 = FUN_114270b0();
    local_24 = (int)((float)iVar3 * *(float *)(iVar6 + 0x11c));
    FUN_11428a10(&local_24,0);
    iVar3 = FUN_11427190();
    local_24 = (int)((float)iVar3 * *(float *)(iVar6 + 0x120));
    FUN_11428ac0(&local_24,0);
    iVar3 = FUN_11427270();
    local_24 = (int)((float)iVar3 * *(float *)(iVar6 + 0x118));
    FUN_11428b70(&local_24,0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1142ca4b @ 1142ca4b  size=1334 ===== */
// calls: CMonsterLevelMatch::GetManagers, CDamageDampingInfo::EvalDampingMultiplier
// strings:
//   "CMHLevelModeInfo"
//   "CMonsterLevelMatch"

/* [RE-AUTO c0]
   calls: CMonsterLevelMatch::GetManagers
   strings:
     ""CMHLevelModeInfo""
     ""CMonsterLevelMatch"" */

void FUN_1142ca4b(void)

{
  LOCK();
  UNLOCK();
  FUN_123f16d9(0x52d754f8);
  FUN_1142c9f0();
  return;
}



/* ===== FUN_1142e3a0 @ 1142e3a0  size=395 ===== */
// calls: CMonsterLevelMatch::GetManagers
// strings:
//   "CMHLevelModeInfo"
//   "CMonsterLevelMatch"

/* [RE-AUTO c0]
   calls: CMonsterLevelMatch::GetManagers
   strings:
     ""CMHLevelModeInfo""
     ""CMonsterLevelMatch"" */

float10 FUN_1142e3a0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  float local_8;
  
  local_8 = 1.0;
  local_c = 1;
  iVar3 = (**(code **)(*param_2 + 4))();
  iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x78) + 0x20);
  iVar3 = (**(code **)(*param_2 + 4))();
  iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x78) + 0x30);
  iVar4 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  if ((iVar5 != -1) &&
     ((((iVar5 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
      ((iVar5 = iVar5 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar4 != 0) && (iVar5 = *(int *)(iVar4 + (iVar5 % iVar1) * 4), iVar5 != 0)) {
      local_c = *(int *)(iVar5 + 0x110);
    }
  }
  iVar5 = (**(code **)(*param_2 + 0x2c))();
  iVar3 = iVar3 + (local_c + iVar5 * 10) * 10;
  iVar5 = CMonsterLevelMatch__GetManagers(0,"CMonsterLevelMatch",0);
  if ((((iVar3 != -1) && ((iVar3 != 0 || (*(int *)(iVar5 + 0x30) == 0)))) &&
      (iVar4 = *(int *)(iVar5 + 0x28), iVar4 != 0)) &&
     ((iVar3 = iVar3 - *(int *)(iVar5 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar5 + 0x24))))) {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar3 / iVar4) * 4);
    if ((iVar5 != 0) && (iVar3 = *(int *)(iVar5 + (iVar3 % iVar4) * 4), iVar3 != 0)) {
      cVar2 = (**(code **)(*param_1 + 8))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_1 + 0x18))();
        if (cVar2 == '\0') {
          if (param_3 == 3) {
            return (float10)*(float *)(iVar3 + 0x48);
          }
          if (param_3 == 4) {
            return (float10)*(float *)(iVar3 + 0x4c);
          }
          if (param_3 == 5) {
            return (float10)*(float *)(iVar3 + 0x50);
          }
          if (param_3 == 0x10) {
            local_8 = *(float *)(iVar3 + 0x54);
          }
        }
      }
    }
  }
  return (float10)local_8;
}



/* ===== FUN_11497fc0 @ 11497fc0  size=144 ===== */
// strings:
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   strings:
     ""CMHLevelModeInfo"" */

int __fastcall FUN_11497fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar2 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  iVar1 = *(int *)(iVar2 + 0x28);
  if (((iVar1 != 0) && (iVar3 = 0x3c - *(int *)(iVar2 + 0x30), -1 < iVar3)) &&
     (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar1 != 0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x388))();
      if (iVar2 != 0) {
        iVar2 = FUN_1156c6b0(0xfffffff8);
        if (iVar2 == 0) {
          return *(int *)(iVar1 + 0x6c);
        }
        iVar2 = FUN_1156c660(3);
        iVar1 = *(int *)(iVar1 + 0x6c);
        iVar3 = FUN_1156c660(4);
        return iVar3 + (iVar1 - iVar2);
      }
    }
  }
  return 0;
}



/* ===== FUN_114d2aa0 @ 114d2aa0  size=256 ===== */
// strings:
//   "CLevelSuperSequence"
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   strings:
     ""CLevelSuperSequence""
     ""CMHLevelModeInfo"" */

int __fastcall FUN_114d2aa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x30))(0);
  iVar2 = FUN_109ed220(0,"CLevelSuperSequence",0);
  if ((iVar1 != -1) &&
     ((((iVar1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar2 + 0x28), iVar3 != 0)) &&
      ((iVar1 = iVar1 - *(int *)(iVar2 + 0x30), -1 < iVar1 && (iVar1 < *(int *)(iVar2 + 0x24)))))))
  {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar1 / iVar3) * 4);
    if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar1 % iVar3) * 4), iVar1 != 0)) {
      iVar3 = FUN_109dd690(0,"CMHLevelModeInfo",0);
      iVar2 = *(int *)(iVar3 + 0x28);
      if (((iVar2 != 0) && (iVar4 = 0x36 - *(int *)(iVar3 + 0x30), -1 < iVar4)) &&
         (iVar4 < *(int *)(iVar3 + 0x24))) {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar2) * 4);
        if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar4 % iVar2) * 4), iVar2 != 0)) {
          iVar3 = (**(code **)(*(int *)param_1[1] + 0x388))();
          if (iVar3 != 0) {
            iVar1 = FUN_1156c6b0(*(undefined4 *)(iVar1 + 0x2c));
            if (iVar1 != 0) {
              iVar3 = FUN_1156c660(3);
              iVar1 = *(int *)(iVar2 + 0x6c);
              iVar2 = FUN_1156c660(4);
              iVar2 = iVar2 + (iVar1 - iVar3);
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              return iVar2;
            }
          }
          return *(int *)(iVar2 + 0x6c);
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_1156c340 @ 1156c340  size=341 ===== */
// strings:
//   "CMHLevelModeInfo"
//   "CMHLevelInfo"

/* [RE-AUTO c0]
   strings:
     ""CMHLevelModeInfo""
     ""CMHLevelInfo"" */

uint FUN_1156c340(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_1 == -8) {
    uVar5 = FUN_10a136c0();
    FUN_1171eba0(uVar5);
    cVar1 = FUN_1171ebf0();
    if (cVar1 == '\0') {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0x332;
        return (uint)param_3 & 0xffffff00;
      }
      goto LAB_1156c48c;
    }
    iVar2 = FUN_109dd690(0,"CMHLevelModeInfo",0);
    iVar3 = *(int *)(iVar2 + 0x28);
    if (((iVar3 != 0) && (iVar4 = 0x3c - *(int *)(iVar2 + 0x30), -1 < iVar4)) &&
       (iVar4 < *(int *)(iVar2 + 0x24))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / iVar3) * 4);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + (iVar4 % iVar3) * 4);
        goto LAB_1156c41b;
      }
    }
    iVar3 = 0;
LAB_1156c41b:
    iVar2 = *(int *)(iVar3 + 0x70);
    if ((*(int *)(iVar3 + 0x68) != 0) && (0 < *(int *)(iVar3 + 0x6c))) {
      iVar3 = FUN_1156c6b0(param_1);
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = FUN_1156c660(4);
      if ((iVar2 <= iVar3) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 0x32e;
      }
      return (uint)(iVar3 < iVar2);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x32e;
      return (uint)param_3 & 0xffffff00;
    }
  }
  else {
    iVar3 = FUN_107d78c0(0,"CMHLevelInfo",0);
    if ((param_1 != -1) &&
       ((((param_1 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
         (iVar2 = *(int *)(iVar3 + 0x28), iVar2 != 0)) &&
        ((iVar4 = param_1 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))
        ))) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar2) * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar4 % iVar2) * 4), iVar3 != 0)) {
        iVar3 = *(int *)(iVar3 + 0x24);
        goto LAB_1156c41b;
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
LAB_1156c48c:
  return (uint)param_3 & 0xffffff00;
}



/* ===== FUN_1156c7d0 @ 1156c7d0  size=231 ===== */
// strings:
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   strings:
     ""CMHLevelModeInfo"" */

int FUN_1156c7d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  iVar1 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  iVar3 = *(int *)(iVar1 + 0x28);
  if (((iVar3 != 0) && (iVar2 = 0x2c - *(int *)(iVar1 + 0x30), -1 < iVar2)) &&
     (iVar2 < *(int *)(iVar1 + 0x24))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar3 != 0)) {
      piVar8 = *(int **)(iVar3 + 0x124);
      iVar1 = 0;
      uVar7 = 0;
      uVar5 = (uint)((int)*(int **)(iVar3 + 0x128) + (3 - (int)piVar8)) >> 2;
      if (*(int **)(iVar3 + 0x128) < piVar8) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        do {
          iVar3 = FUN_1156c6b0(*(undefined4 *)(*piVar8 + 0x10));
          if (iVar3 != 0) {
            iVar2 = iVar3 + 4;
            iVar4 = *(int *)(iVar3 + 8);
            iVar6 = iVar2;
            if (*(int *)(iVar3 + 8) == 0) {
LAB_1156c891:
              if (iVar6 == iVar2) goto LAB_1156c89a;
              iVar3 = *(int *)(iVar6 + 0x14);
            }
            else {
              do {
                if (*(int *)(iVar4 + 0x10) < 2) {
                  iVar3 = *(int *)(iVar4 + 0xc);
                }
                else {
                  iVar3 = *(int *)(iVar4 + 8);
                  iVar6 = iVar4;
                }
                iVar4 = iVar3;
              } while (iVar3 != 0);
              if (iVar6 != iVar2) {
                if (2 < *(int *)(iVar6 + 0x10)) {
                  iVar6 = iVar2;
                }
                goto LAB_1156c891;
              }
LAB_1156c89a:
              iVar3 = 0;
            }
            iVar1 = iVar1 + iVar3;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar7 != uVar5);
      }
      return iVar1;
    }
  }
  return 0;
}



/* ===== FUN_11741590 @ 11741590  size=64 ===== */
// strings:
//   "PvpGroupSettlementTime"

/* [RE-AUTO c0]
   strings:
     ""PvpGroupSettlementTime"" */

void __fastcall FUN_11741590(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d4528c;
  local_c = local_10;
  FUN_100b62c0("PvpGroupSettlementTime","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_1177ff70 @ 1177ff70  size=37 ===== */
// strings:
//   "TaskLevelFinishContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskLevelFinishContentDef"" */

int FUN_1177ff70(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskLevelFinishContentDef","");
  return param_1;
}



/* ===== FUN_11781c50 @ 11781c50  size=37 ===== */
// strings:
//   "TaskLevelFinishContentDef"

/* [RE-AUTO c0]
   strings:
     ""TaskLevelFinishContentDef"" */

int FUN_11781c50(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("TaskLevelFinishContentDef","");
  return param_1;
}



/* ===== FUN_11785e60 @ 11785e60  size=44 ===== */
// strings:
//   "TeamMemberCount"

/* [RE-AUTO c0]
   strings:
     ""TeamMemberCount"" */

void __thiscall FUN_11785e60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_118a6e70(param_2,"TeamMemberCount");
  if (iVar1 != 0) {
    FUN_118a68e0(iVar1,param_1 + 4);
  }
  return;
}



/* ===== FUN_117b92a0 @ 117b92a0  size=392 ===== */
// calls: memset
// strings:
//   u"LevelMode"
//   u"Difficulty"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"LevelMode""
     "u"Difficulty"" */

void __thiscall FUN_117b92a0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_12392740 & 1) == 0) {
    DAT_12392740 = DAT_12392740 | 1;
    FUN_100f67b0(L"LevelMode");
  }
  if ((DAT_12392740 & 2) == 0) {
    DAT_12392740 = DAT_12392740 | 2;
    iVar2 = FUN_100e1cb0(DAT_1239273c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392744);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239273c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12392744);
    *param_1 = uVar3;
  }
  if ((DAT_12392740 & 4) == 0) {
    DAT_12392740 = DAT_12392740 | 4;
    FUN_100f67b0(L"Difficulty");
  }
  if ((DAT_12392740 & 8) == 0) {
    DAT_12392740 = DAT_12392740 | 8;
    iVar2 = FUN_100e1cb0(DAT_12392754);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12392758);
  if (cVar1 != '\0') {
    local_40c = 0xffffffff;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12392758,&local_40c);
    uVar3 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar3 = local_40c;
    }
    param_1[1] = uVar3;
    FUN_11a89daa();
    return;
  }
  param_1[1] = 0xffffffff;
  FUN_11a89daa();
  return;
}



/* ===== FUN_117d6590 @ 117d6590  size=64 ===== */
// strings:
//   "MinTeamMemberNum"

/* [RE-AUTO c0]
   strings:
     ""MinTeamMemberNum"" */

void __fastcall FUN_117d6590(undefined4 *param_1)

{
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11894430();
  local_10 = local_20;
  *param_1 = &PTR_FUN_11d4a00c;
  local_c = local_10;
  FUN_100b62c0("MinTeamMemberNum","");
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x24);
}



/* ===== FUN_118a33d0 @ 118a33d0  size=296 ===== */
// calls: memset, sscanf_s
// strings:
//   "EntityClass"
//   "iToInstanceId"
//   "0,0,0"
//   "%f,%f,%f"
//   "0,0,0,0"
//   "Rotate"
//   "%f,%f,%f,%f"
//   "RegionID"

/* [RE-AUTO c0]
   calls: memset, sscanf_s
   strings:
     ""EntityClass""
     ""iToInstanceId""
     ""0,0,0""
     ""%f,%f,%f""
     ""0,0,0,0""
     ""Rotate""
     ""%f,%f,%f,%f""
     ""RegionID"" */

void __thiscall FUN_118a33d0(int param_1,int param_2)

{
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
  FUN_100f6aa0(param_2,"iToInstanceId",param_1 + 0x4c,0);
  FUN_100f6930(param_2,&DAT_11cca8a0,&local_408,0x400,"0,0,0");
  sscanf_s(&local_408,"%f,%f,%f",param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
  FUN_100f6930(param_2,"Rotate",&local_408,0x400,"0,0,0,0");
  sscanf_s(&local_408,"%f,%f,%f,%f",param_1 + 0xc,param_1,param_1 + 4,param_1 + 8);
  FUN_100f6aa0(param_2,"RegionID",param_1 + 0x50,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_118e6110 @ 118e6110  size=52 ===== */
// strings:
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   strings:
     ""CMHLevelModeInfo"" */

undefined4 FUN_118e6110(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_109dd690(0,"CMHLevelModeInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119d7880 @ 119d7880  size=48 ===== */
// strings:
//   "LevelResult"

/* [RE-AUTO c0]
   strings:
     ""LevelResult"" */

void FUN_119d7880(undefined4 *param_1)

{
  if ((DAT_123a3a08 & 1) == 0) {
    DAT_123a3a08 = DAT_123a3a08 | 1;
    FUN_1024f010("LevelResult");
  }
  *param_1 = DAT_123a3a04;
  return;
}



/* ===== FUN_119e26f0 @ 119e26f0  size=991 ===== */
// calls: memset, CPet::SetName
// strings:
//   u"LevelGrpID"
//   u"LevelMode"
//   u"Name"
//   u"Params"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"LevelGrpID""
     "u"LevelMode""
     "u"Name""
     "u"Params"" */

void __thiscall FUN_119e26f0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_434 [4];
  undefined2 local_430 [8];
  undefined1 local_420 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a4300 & 1) == 0) {
    DAT_123a4300 = DAT_123a4300 | 1;
    FUN_100f67b0(L"LevelGrpID");
  }
  if ((DAT_123a4300 & 2) == 0) {
    DAT_123a4300 = DAT_123a4300 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a42fc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a4304);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a42fc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a4304);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a4300 & 4) == 0) {
    DAT_123a4300 = DAT_123a4300 | 4;
    FUN_100f67b0(L"LevelMode");
  }
  if ((DAT_123a4300 & 8) == 0) {
    DAT_123a4300 = DAT_123a4300 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a4314);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a4318);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a4314);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a4318);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a4300 & 0x10) == 0) {
    DAT_123a4300 = DAT_123a4300 | 0x10;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123a4300 & 0x20) == 0) {
    DAT_123a4300 = DAT_123a4300 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a4328);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a432c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a4328);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123a432c);
    puVar4 = (undefined4 *)FUN_100e5530(local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    CPet__SetName(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a4300 & 0x40) == 0) {
    DAT_123a4300 = DAT_123a4300 | 0x40;
    FUN_100f67b0(L"Params");
  }
  if (-1 < (char)DAT_123a4300) {
    DAT_123a4300 = DAT_123a4300 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a433c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a4340);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a433c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  local_410 = (undefined2 *)local_420;
  local_420[0] = 0;
  local_40c = local_410;
  (**(code **)(*param_2 + 0x24))(local_420,&DAT_123a4340);
  FUN_1162bea0(param_1 + 0x1c,local_420);
  if ((local_40c != (undefined2 *)local_420) && (local_40c != (undefined2 *)0x0)) {
    FUN_10c3d5d0(local_40c);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a56660 @ 11a56660  size=992 ===== */
// calls: memset
// strings:
//   u"TypeID"
//   u"LevelMode"
//   u"LevelMin"
//   u"LevelMax"
//   u"Weighted"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"TypeID""
     "u"LevelMode""
     "u"LevelMin""
     "u"LevelMax""
     "u"Weighted"" */

void __thiscall FUN_11a56660(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123ab870 & 1) == 0) {
    DAT_123ab870 = DAT_123ab870 | 1;
    FUN_100f67b0(L"TypeID");
  }
  if ((DAT_123ab870 & 2) == 0) {
    DAT_123ab870 = DAT_123ab870 | 2;
    iVar2 = FUN_100e1cb0(DAT_123ab86c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ab874);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ab86c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ab874);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123ab870 & 4) == 0) {
    DAT_123ab870 = DAT_123ab870 | 4;
    FUN_100f67b0(L"LevelMode");
  }
  if ((DAT_123ab870 & 8) == 0) {
    DAT_123ab870 = DAT_123ab870 | 8;
    iVar2 = FUN_100e1cb0(DAT_123ab884);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ab888);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ab884);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ab888);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123ab870 & 0x10) == 0) {
    DAT_123ab870 = DAT_123ab870 | 0x10;
    FUN_100f67b0(L"LevelMin");
  }
  if ((DAT_123ab870 & 0x20) == 0) {
    DAT_123ab870 = DAT_123ab870 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123ab898);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ab89c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ab898);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ab89c);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123ab870 & 0x40) == 0) {
    DAT_123ab870 = DAT_123ab870 | 0x40;
    FUN_100f67b0(L"LevelMax");
  }
  if (-1 < (char)DAT_123ab870) {
    DAT_123ab870 = DAT_123ab870 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123ab8ac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ab8b0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ab8ac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ab8b0);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if ((DAT_123ab870 & 0x100) == 0) {
    DAT_123ab870 = DAT_123ab870 | 0x100;
    FUN_100f67b0(L"Weighted");
  }
  if ((DAT_123ab870 & 0x200) == 0) {
    DAT_123ab870 = DAT_123ab870 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123ab8c0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123ab8c4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123ab8c0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123ab8c4);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a732b0 @ 11a732b0  size=52 ===== */
// calls: CBattlePunishLevelModeFilterInfo::GetInfoManager
// strings:
//   "CBattlePunishLevelModeFilterInfo"

/* [RE-AUTO c0]
   calls: CBattlePunishLevelModeFilterInfo::GetManagers
   strings:
     ""CBattlePunishLevelModeFilterInfo"" */

undefined4 FUN_11a732b0(int param_1)

{
  int iVar1;
  
  iVar1 = CBattlePunishLevelModeFilterInfo__GetInfoManager(0,"CBattlePunishLevelModeFilterInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11a98d10 @ 11a98d10  size=204 ===== */
// calls: memset
// strings:
//   "instance{0}"

/* [RE-AUTO c0]
   calls: memset
   strings:
     ""instance{0}"" */

void __thiscall FUN_11a98d10(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_344;
  undefined1 *local_340;
  undefined4 local_33c;
  undefined1 local_38;
  undefined1 local_37 [47];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_38 = 0;
  *(int *)(param_1 + 0x3a34) = *(int *)(param_1 + 0x3a34) + 1;
  memset(local_37,0,0x2f);
  local_344 = 2;
  local_340 = &local_38;
  local_33c = 0x30;
  FUN_11b2d160(&local_344);
  FUN_11b2ffe0("instance{0}");
  FUN_11a8b6e0(param_1 + 0x3a34);
  FUN_11b2eb90();
  FUN_11b2d7c0();
  (**(code **)(**(int **)(param_1 + 0xc) + 0xdc))();
  iVar1 = FUN_11abe680(&local_38);
  *param_2 = iVar1;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  FUN_11a89daa();
  return;
}



