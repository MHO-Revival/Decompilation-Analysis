/* ===== FUN_100f0660 @ 100f0660  size=3347 ===== */
// calls: __alloca_probe, GetPrivateProfileStringA, PathIsRelativeA, _time64, memset, _localtime64, strftime, GetPrivateProfileIntA
// strings:
//   "system.cfg"
//   "user.cfg"
//   "LogPath"
//   "DebugLog"
//   "-[%H.%M]"
//   "-All.log"
//   "Summary"
//   "System"
//   "BatStatistics"
//   "BattleProcessCtrl"
//   "CryEngine"
//   "Damage"
//   "Guild"
//   "MovementDebug"
//   "Movement"
//   "PositionBlock"
//   "PositionCheck"
//   "Security"
//   "ServerFG"
//   "Verify"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, GetPrivateProfileStringA, PathIsRelativeA, _time64, memset, _localtime64,
   strftime, GetPrivateProfileIntA
   strings:
     ""system.cfg""
     ""user.cfg""
     ""LogPath""
     ""DebugLog""
     ""-[%H.%M]""
     ""-All.log""
     ""Summary""
     ""System""
     ""BatStatistics""
     ""BattleProcessCtrl"" */

void __fastcall FUN_100f0660(undefined1 param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  tm *ptVar5;
  undefined1 *puVar6;
  UINT UVar7;
  uint uVar8;
  UINT UVar9;
  char *pcVar10;
  undefined1 **extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined1 *in_stack_00000018;
  undefined1 *in_stack_00000030;
  undefined4 in_stack_00000034;
  char in_stack_00000038;
  undefined4 uStack_1528;
  char *pcStack_1524;
  undefined4 uStack_1520;
  undefined1 **ppuStack_151c;
  undefined4 *puVar11;
  char *pcVar12;
  undefined *puVar13;
  char *pcVar14;
  LPCSTR lpFileName;
  char *pcVar15;
  char *pcVar16;
  LPCSTR lpFileName_00;
  undefined4 uStack_14d8;
  undefined1 *puStack_14d4;
  undefined1 *puStack_14d0;
  undefined1 *puStack_14cc;
  undefined4 *puStack_14c8;
  undefined4 *puStack_14c4;
  undefined1 **ppuStack_14c0;
  undefined1 **ppuStack_14bc;
  LPCSTR pCStack_14a4;
  LPCSTR pCStack_1494;
  LPCSTR pCStack_148c;
  undefined1 auStack_1488 [8];
  undefined1 auStack_1480 [16];
  undefined1 *puStack_1470;
  undefined1 *puStack_146c;
  tm tStack_1468;
  undefined1 uStack_1436;
  undefined1 uStack_1435;
  char acStack_1030 [2048];
  undefined4 uStack_830;
  undefined4 uStack_82c;
  CHAR aCStack_818 [1016];
  char acStack_420 [1036];
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&uStack_14d8;
  uStack_14d8 = (undefined1 *)CONCAT13(param_1,(undefined3)uStack_14d8);
  FUN_100f2140();
  FUN_100f2140();
  GetPrivateProfileStringA("DebugLog","LogPath","Log",aCStack_818,0x3ff,pCStack_1494);
  BVar4 = PathIsRelativeA(aCStack_818);
  pcVar10 = aCStack_818;
  if (BVar4 == 0) {
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    pcVar10 = pcVar10 + (int)(aCStack_818 + -(int)(aCStack_818 + 1));
    FUN_100d83d0();
  }
  else {
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    pcVar10 = pcVar10 + (int)(aCStack_818 + -(int)(aCStack_818 + 1));
    FUN_100d9260();
  }
  _time64((__time64_t *)&puStack_14d0);
  auStack_1480[0] = 0;
  puStack_1470 = auStack_1480;
  puStack_146c = puStack_1470;
  FUN_100e8e60();
  uStack_82c = 0;
  uStack_1435 = 1;
  FUN_100ea440();
  uStack_1436 = 0;
  FUN_100ea440();
  acStack_420[0] = '\0';
  memset(acStack_420 + 1,0,0x3ff);
  ptVar5 = _localtime64((__time64_t *)&puStack_14d0);
  tStack_1468.tm_sec = ptVar5->tm_sec;
  tStack_1468.tm_min = ptVar5->tm_min;
  tStack_1468.tm_hour = ptVar5->tm_hour;
  tStack_1468.tm_mday = ptVar5->tm_mday;
  tStack_1468.tm_mon = ptVar5->tm_mon;
  tStack_1468.tm_year = ptVar5->tm_year;
  tStack_1468.tm_wday = ptVar5->tm_wday;
  tStack_1468.tm_yday = ptVar5->tm_yday;
  tStack_1468.tm_isdst = ptVar5->tm_isdst;
  ppuStack_151c = (undefined1 **)0x100f0812;
  strftime(acStack_420,0x400,acStack_1030,&tStack_1468);
  pcVar15 = acStack_420;
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar16 != '\0');
  cVar3 = (char)((uint)acStack_420 >> 0x18);
  FUN_100d9260();
  uStack_82c = 0x1f400000;
  uStack_830 = 0;
  puVar6 = (undefined1 *)FUN_100f2140();
  if (puVar6 != auStack_1488) {
    FUN_100d83d0();
  }
  if ((ppuStack_14bc != &puStack_14d0) && (ppuStack_14bc != (undefined1 **)0x0)) {
    FUN_10c3d5d0();
  }
  puVar6 = in_stack_00000018;
  if (DAT_123bc994 == 0) {
    cVar2 = FUN_100e7ed0();
    if (cVar2 == '\0') goto LAB_100f092b;
    if (DAT_123bc994 != 0) goto LAB_100f08ca;
LAB_100f092f:
    cVar2 = FUN_100e7ed0();
    if ((cVar2 != '\0') && (DAT_123bc994 != 0)) goto LAB_100f094a;
    DAT_123ba6bc = 0;
  }
  else {
LAB_100f08ca:
    pcVar10 = (char *)0x0;
    if (DAT_123bc994 != -8) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580();
    }
LAB_100f092b:
    if (DAT_123bc994 == 0) goto LAB_100f092f;
LAB_100f094a:
    DAT_123ba6bc = DAT_123bc994 + 8;
  }
  UVar7 = GetPrivateProfileIntA("DebugLog","Summary",6,pCStack_14a4);
  uVar8 = GetPrivateProfileIntA("DebugLog","Summary",UVar7,pCStack_148c);
  iVar1 = DAT_123ba6bc;
  if (in_stack_00000038 == '\0') {
    uVar8 = 3;
  }
  if ((DAT_123ba6bc != 0) && (uVar8 < 9)) {
    *(uint *)(DAT_123ba6bc + 0x44) = uVar8;
  }
  *(undefined4 *)(iVar1 + 100) = in_stack_00000034;
  ppuStack_14c0 = &puStack_14d0;
  pcVar15 = "";
  *(undefined4 *)(iVar1 + 0x4c) = 2;
  *(undefined1 **)(iVar1 + 0x60) = param_2;
  ppuStack_14bc = ppuStack_14c0;
  FUN_100b62c0();
  FUN_100f04d0();
  if ((puStack_14c4 != &uStack_14d8) && (puStack_14c4 != (undefined4 *)0x0)) {
    FUN_10c3d5d0();
  }
  if (cVar3 == '\0') {
    puStack_14c8 = &uStack_14d8;
    puStack_14c4 = puStack_14c8;
    FUN_100b62c0();
    ppuStack_151c = (undefined1 **)&stack0x00000004;
    uStack_1520 = (char *)0x100f0a5a;
    FUN_100f04d0();
    if ((puStack_14c4 != &uStack_14d8) && (puStack_14c4 != (undefined4 *)0x0)) {
      FUN_10c3d5d0();
    }
  }
  puStack_14c8 = &uStack_14d8;
  pcVar14 = "";
  cVar3 = '\x11';
  puStack_14c4 = puStack_14c8;
  FUN_100b62c0();
  ppuStack_151c = (undefined1 **)&stack0x00000004;
  uStack_1520 = (char *)0x100f0abd;
  FUN_100f04d0();
  if ((puStack_14cc != &stack0xffffeb20) && (puStack_14cc != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  puStack_14d0 = &stack0xffffeb20;
  puVar13 = &DAT_11d9dd64;
  puStack_14cc = puStack_14d0;
  FUN_100b62c0();
  ppuStack_151c = &puStack_14d0;
  uStack_1520 = &stack0x0000001c;
  pcStack_1524 = &stack0x00000004;
  uStack_1528 = (char *)0x100f0b20;
  FUN_100f04d0();
  if ((puStack_14d4 != &stack0xffffeb18) && (puStack_14d4 != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  if (cVar3 == '\0') {
    uStack_14d8 = &stack0xffffeb18;
    puStack_14d4 = uStack_14d8;
    FUN_100b62c0();
    ppuStack_151c = (undefined1 **)&stack0xffffeb10;
    uStack_1520 = (char *)&ppuStack_14c0;
    pcStack_1524 = (char *)&uStack_14d8;
    uStack_1528 = &stack0x0000001c;
    FUN_100f04d0(&stack0x00000004);
    if ((puVar6 != &stack0xffffeb10) && (puVar6 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    puVar6 = &stack0xffffeb10;
    ppuStack_151c = (undefined1 **)0x100f0bc7;
    FUN_100b62c0();
    pcStack_1524 = &stack0xffffeb08;
    uStack_1528 = (char *)&puStack_14c8;
    uStack_1520 = param_2;
    ppuStack_151c = extraout_ECX;
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb20);
    if ((puStack_14d4 != &stack0xffffeb18) && (puStack_14d4 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
  }
  uStack_14d8 = &stack0xffffeb18;
  pcVar12 = "";
  cVar3 = '\x11';
  puStack_14d4 = uStack_14d8;
  FUN_100b62c0();
  ppuStack_151c = (undefined1 **)&stack0xffffeb10;
  uStack_1520 = (char *)&ppuStack_14c0;
  pcStack_1524 = (char *)&uStack_14d8;
  uStack_1528 = &stack0x0000001c;
  FUN_100f04d0(&stack0x00000004);
  if ((puVar6 != &stack0xffffeb10) && (puVar6 != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  puVar11 = (undefined4 *)&DAT_11d9d9fc;
  cVar2 = '\x11';
  ppuStack_151c = (undefined1 **)0x100f0c8d;
  FUN_100b62c0();
  pcStack_1524 = &stack0xffffeb08;
  uStack_1528 = (char *)&puStack_14c8;
  uStack_1520 = param_2;
  ppuStack_151c = (undefined1 **)pcVar10;
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb20);
  if ((ppuStack_151c != (undefined1 **)&stack0xffffeb08) && (ppuStack_151c != (undefined1 **)0x0)) {
    uStack_1520 = (char *)0x100f0cd0;
    FUN_10c3d5d0();
  }
  if (cVar3 == '\0') {
    puVar6 = &stack0xffffeb08;
    ppuStack_151c = (undefined1 **)0x11d9dd91;
    uStack_1520 = "MovementDebug";
    pcStack_1524 = (char *)0x100f0cfb;
    FUN_100b62c0();
    uStack_1528 = param_2;
    pcStack_1524 = pcVar16;
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb18,&puStack_14d0,&stack0xffffeb00);
    if ((pcStack_1524 != &stack0xffffeb00) && (pcStack_1524 != (char *)0x0)) {
      uStack_1528 = (char *)0x100f0d3e;
      FUN_10c3d5d0();
    }
    pcVar16 = &stack0xffffeb00;
    pcStack_1524 = "";
    uStack_1528 = "Movement";
    FUN_100b62c0();
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb10,&uStack_14d8,&stack0xffffeaf8,
                 param_2,extraout_ECX_00);
    ppuStack_151c = (undefined1 **)puVar6;
    if ((ppuStack_151c != (undefined1 **)&stack0xffffeb08) && (ppuStack_151c != (undefined1 **)0x0))
    {
      uStack_1520 = (char *)0x100f0da1;
      FUN_10c3d5d0();
    }
  }
  lpFileName_00 = &stack0xffffeb08;
  ppuStack_151c = (undefined1 **)0x11d9ddad;
  uStack_1520 = "PositionBlock";
  pcStack_1524 = (char *)0x100f0dc1;
  FUN_100b62c0();
  uStack_1528 = param_2;
  pcStack_1524 = pcVar16;
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb18,&puStack_14d0,&stack0xffffeb00);
  if ((pcStack_1524 != &stack0xffffeb00) && (pcStack_1524 != (char *)0x0)) {
    uStack_1528 = (char *)0x100f0e04;
    FUN_10c3d5d0();
  }
  if (cVar2 == '\0') {
    puVar6 = &stack0xffffeb00;
    pcStack_1524 = "";
    uStack_1528 = "PositionCheck";
    FUN_100b62c0();
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb10,&uStack_14d8,&stack0xffffeaf8,
                 param_2,extraout_ECX_01);
    if ((pcVar15 != &stack0xffffeaf8) && (pcVar15 != (char *)0x0)) {
      FUN_10c3d5d0(pcVar15);
    }
    pcVar15 = &stack0xffffeaf8;
    FUN_100b62c0("Security","");
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb08,&stack0xffffeb20,
                 &stack0xffffeaf0,param_2,extraout_ECX_02);
    if ((pcVar14 != &stack0xffffeaf0) && (pcVar14 != (char *)0x0)) {
      FUN_10c3d5d0(pcVar14);
    }
    pcVar14 = &stack0xffffeaf0;
    FUN_100b62c0("ServerFG","");
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb00,&stack0xffffeb18,
                 &stack0xffffeae8,param_2,extraout_ECX_03);
    if ((puVar13 != &stack0xffffeae8) && (puVar13 != (undefined *)0x0)) {
      FUN_10c3d5d0(puVar13);
    }
    puVar13 = &stack0xffffeae8;
    FUN_100b62c0(&DAT_11d9ddd8,&DAT_11d9dddd);
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeaf8,&stack0xffffeb10,&uStack_1520,
                 param_2,extraout_ECX_04);
    pcStack_1524 = puVar6;
    if ((pcStack_1524 != &stack0xffffeb00) && (pcStack_1524 != (undefined1 *)0x0)) {
      uStack_1528 = (char *)0x100f0f9b;
      FUN_10c3d5d0();
    }
  }
  pcStack_1524 = "";
  uStack_1528 = &DAT_11d9dde0;
  FUN_100b62c0();
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb10,&uStack_14d8,&stack0xffffeaf8,
               param_2,extraout_ECX_05);
  if ((pcVar15 != &stack0xffffeaf8) && (pcVar15 != (char *)0x0)) {
    FUN_10c3d5d0(pcVar15);
  }
  if (uStack_1520._3_1_ == '\0') {
    puVar6 = &stack0xffffeaf8;
    FUN_100b62c0("Verify","");
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb08,&stack0xffffeb20,
                 &stack0xffffeaf0,param_2,extraout_ECX_06);
    if ((puVar6 != &stack0xffffeaf8) && (puVar6 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puVar6);
    }
  }
  FUN_100b62c0("MHScriptSystem","");
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb08,&stack0xffffeb20,&stack0xffffeaf0,
               param_2,extraout_ECX_07);
  if ((pcVar14 != &stack0xffffeaf0) && (pcVar14 != (char *)0x0)) {
    FUN_10c3d5d0(pcVar14);
  }
  if (uStack_1528._3_1_ == '\0') {
    puVar6 = &stack0xffffeaf0;
    FUN_100b62c0("Firework","");
    FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb00,&stack0xffffeb18,
                 &stack0xffffeae8,param_2,extraout_ECX_08);
    if ((puVar6 != &stack0xffffeaf0) && (puVar6 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puVar6);
    }
  }
  lpFileName = &stack0xffffeaf0;
  FUN_100b62c0("StaticData","");
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeb00,&stack0xffffeb18,&stack0xffffeae8,
               param_2,extraout_ECX_09);
  if ((puVar13 != &stack0xffffeae8) && (puVar13 != (undefined *)0x0)) {
    FUN_10c3d5d0(puVar13);
  }
  FUN_100b62c0(&DAT_11d9de18,&DAT_11d9de1a);
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeaf8,&stack0xffffeb10,&uStack_1520,
               param_2,extraout_ECX_10);
  if ((pcVar12 != (char *)&uStack_1520) && (pcVar12 != (char *)0x0)) {
    FUN_10c3d5d0(pcVar12);
  }
  FUN_100b62c0("PlayerState","");
  FUN_100f04d0(&stack0x00000004,&stack0x0000001c,&stack0xffffeaf0,&stack0xffffeb08,&uStack_1528,
               param_2,extraout_ECX_11);
  if ((puVar11 != &uStack_1528) && (puVar11 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar11);
  }
  UVar7 = GetPrivateProfileIntA("DebugLog","EnableSvrProfiler",0,lpFileName);
  UVar7 = GetPrivateProfileIntA("DebugLog","EnableSvrProfiler",UVar7,lpFileName_00);
  UVar9 = GetPrivateProfileIntA("DebugLog","DebugLogEnable",0,lpFileName);
  UVar9 = GetPrivateProfileIntA("DebugLog","DebugLogEnable",UVar9,lpFileName_00);
  if ((UVar7 == 0) && (UVar9 != 0)) {
    if (DAT_123bc994 != 0) {
LAB_100f12d1:
      *(undefined1 *)(DAT_123bc994 + 0xcc) = 1;
      goto LAB_100f1301;
    }
    cVar3 = FUN_100e7ed0();
    if (cVar3 == '\0') goto LAB_100f1301;
    if (DAT_123bc994 != 0) goto LAB_100f12d1;
LAB_100f130a:
    cVar3 = FUN_100e7ed0();
    if ((cVar3 == '\0') || (DAT_123bc994 == 0)) goto LAB_100f132d;
  }
  else {
    if (DAT_123bc994 == 0) {
      cVar3 = FUN_100e7ed0();
      if (cVar3 == '\0') goto LAB_100f1301;
      if (DAT_123bc994 == 0) goto LAB_100f130a;
    }
    *(undefined1 *)(DAT_123bc994 + 0xcc) = 0;
LAB_100f1301:
    if (DAT_123bc994 == 0) goto LAB_100f130a;
  }
  if (DAT_123bc994 != -0x70) {
    FUN_100f1f60();
  }
LAB_100f132d:
  if ((puStack_14cc != &stack0xffffeb20) && (puStack_14cc != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_14cc);
  }
  if ((lpFileName_00 != &stack0xffffeb08) && (lpFileName_00 != (LPCSTR)0x0)) {
    FUN_10c3d5d0(lpFileName_00);
  }
  if ((lpFileName != &stack0xffffeaf0) && (lpFileName != (LPCSTR)0x0)) {
    FUN_10c3d5d0(lpFileName);
  }
  if ((in_stack_00000018 != &stack0x00000004) && (in_stack_00000018 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(in_stack_00000018);
  }
  if ((in_stack_00000030 != &stack0x0000001c) && (in_stack_00000030 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(in_stack_00000030);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_100f1630 @ 100f1630  size=2349 ===== */
// calls: GetPrivateProfileIntA
// strings:
//   "system.cfg"
//   "user.cfg"
//   "Summary"
//   "DebugLog"
//   "System"
//   "BatStatistics"
//   "BattleProcessCtrl"
//   "CryEngine"
//   "Damage"
//   "Guild"
//   "MovementDebug"
//   "Movement"
//   "PositionBlock"
//   "PositionCheck"
//   "Security"
//   "ServerFG"
//   "Verify"
//   "MHScriptSystem"
//   "Firework"
//   "StaticData"

/* [RE-AUTO c0]
   calls: GetPrivateProfileIntA
   strings:
     ""system.cfg""
     ""user.cfg""
     ""Summary""
     ""DebugLog""
     ""System""
     ""BatStatistics""
     ""BattleProcessCtrl""
     ""CryEngine""
     ""Damage""
     ""Guild"" */

void __thiscall FUN_100f1630(char param_1)

{
  UINT UVar1;
  undefined1 *in_stack_00000018;
  CHAR local_50 [20];
  LPCSTR local_3c;
  CHAR local_38 [20];
  LPCSTR local_24;
  CHAR local_20 [16];
  CHAR *local_10;
  LPCSTR local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_100f2140(local_38,&stack0x00000004,"system.cfg");
  FUN_100f2140(local_50,&stack0x00000004,"user.cfg");
  UVar1 = GetPrivateProfileIntA("DebugLog","Summary",6,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog","Summary",UVar1,local_3c);
  if ((DAT_123ba6bc != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6bc + 0x44) = UVar1;
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("System","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba714 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba714 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("BatStatistics","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba710 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba710 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("BattleProcessCtrl","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba70c != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba70c + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0(&DAT_11d9dd60,&DAT_11d9dd64);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba708 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba708 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("CryEngine","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba704 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba704 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Damage","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba700 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba700 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("Guild","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6fc != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6fc + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0(&DAT_11d9d9f8,&DAT_11d9d9fc);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6f8 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6f8 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("MovementDebug","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6f4 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6f4 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Movement","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6f0 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6f0 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("PositionBlock","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6ec != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6ec + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("PositionCheck","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6e8 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6e8 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Security","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6e4 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6e4 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("ServerFG","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6e0 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6e0 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0(&DAT_11d9ddd8,&DAT_11d9dddd);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6dc != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6dc + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0(&DAT_11d9dde0,&DAT_11d9dde4);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6d8 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6d8 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Verify","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6d4 != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6d4 + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("MHScriptSystem","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6d0 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6d0 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (param_1 == '\0') {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Firework","");
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
    UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
    if ((DAT_123ba6cc != 0) && (UVar1 < 9)) {
      *(UINT *)(DAT_123ba6cc + 0x44) = UVar1;
    }
    if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("StaticData","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6c8 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6c8 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0(&DAT_11d9de18,&DAT_11d9de1a);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6c4 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6c4 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("PlayerState","");
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,0,local_24);
  UVar1 = GetPrivateProfileIntA("DebugLog",local_c,UVar1,local_3c);
  if ((DAT_123ba6c0 != 0) && (UVar1 < 9)) {
    *(UINT *)(DAT_123ba6c0 + 0x44) = UVar1;
  }
  if ((local_c != local_20) && (local_c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if ((local_3c != local_50) && (local_3c != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_3c);
  }
  if ((local_24 != local_38) && (local_24 != (CHAR *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  if ((in_stack_00000018 != &stack0x00000004) && (in_stack_00000018 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(in_stack_00000018);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10115840 @ 10115840  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[teamId]"
//   "[guildId]"
//   "[isGuildLeader]"
//   "0x%02x"
//   "[isClanLeader]"

/* [RE-AUTO c0]
   strings:
     ""[teamId]""
     ""[guildId]""
     ""[isGuildLeader]""
     ""0x%02x""
     ""[isClanLeader]"" */

void __thiscall
FUN_10115840(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[teamId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[guildId]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[isGuildLeader]",&DAT_11d9e0b4,param_1[2]
                                 );
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[isClanLeader]","0x%02x",
                            *(undefined1 *)(param_1 + 3));
      }
    }
  }
  return;
}



/* ===== FUN_10119dc0 @ 10119dc0  size=109 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[guildId]"
//   "[commerceId]"
//   "[activityStartTime]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[guildId]""
     ""[commerceId]""
     ""[activityStartTime]"" */

void __thiscall
FUN_10119dc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[guildId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceId]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[activityStartTime]",&DAT_11d9e0b4,param_1[3]);
    }
  }
  return;
}



/* ===== FUN_1011a320 @ 1011a320  size=221 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[commerceId]"
//   "%I64u"
//   "[ownGuildId]"

/* [RE-AUTO c0]
   strings:
     ""[commerceId]""
     ""%I64u""
     ""[ownGuildId]"" */

int __thiscall
FUN_1011a320(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c66ac8;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    return -0x13;
  }
  local_20 = param_2;
  local_14 = '\0';
  local_1c = 0;
  local_18 = param_3;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = TdrText_FieldScalar(&local_20,param_5,param_6,"[commerceId]",&DAT_11d9f574,*param_1,
                              DAT_11e11390 ^ (uint)&stack0xfffffffc);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_20,param_5,param_6,"[ownGuildId]","%I64u",param_1[1],
                                param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_1c;
  }
  if (local_14 != '\0') {
    FUN_10c3da30(local_20);
  }
  ExceptionList = local_10;
  return iVar1;
}



/* ===== FUN_1011a400 @ 1011a400  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[commerceId]"
//   "%I64u"
//   "[ownGuildId]"

/* [RE-AUTO c0]
   strings:
     ""[commerceId]""
     ""%I64u""
     ""[ownGuildId]"" */

void __thiscall
FUN_1011a400(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ownGuildId]","%I64u",param_1[1],param_1[2]);
  }
  return;
}



/* ===== FUN_1011ad50 @ 1011ad50  size=217 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[playerCount]"
//   "[playerId]"
//   " %I64u"
//   "%I64u"
//   "[ownGuildId]"
//   "[minTime]"

/* [RE-AUTO c0]
   strings:
     ""[playerCount]""
     ""[playerId]""
     "" %I64u""
     ""%I64u""
     ""[ownGuildId]""
     ""[minTime]"" */

int __thiscall FUN_1011ad50(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[playerCount]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (4 < *param_1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[playerId]",*param_1,0);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*param_1 != 0) {
        puVar2 = param_1 + 1;
        do {
          iVar1 = FUN_1010c010(param_2," %I64u",*puVar2,puVar2[1]);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 2;
        } while (uVar3 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ownGuildId]","%I64u",param_1[9],
                                      param_1[10]), iVar1 == 0)) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[minTime]",&DAT_11d9f574,param_1[0xb]);
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1011b670 @ 1011b670  size=214 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "[commerceBoatId]"
//   "[commerceBoatStartTime]"
//   "[commerceBoatStatus]"
//   "[levelId]"
//   "[grabInfo]"

/* [RE-AUTO c0]
   strings:
     ""[commerceBoatId]""
     ""[commerceBoatStartTime]""
     ""[commerceBoatStatus]""
     ""[levelId]""
     ""[grabInfo]"" */

void __thiscall FUN_1011b670(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceBoatId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceBoatStartTime]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceBoatStatus]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelId]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldLabelChar(param_4,"[grabInfo]",extraout_ECX);
          if (iVar1 == 0) {
            if (param_3 < 0) {
              FUN_1011ad50(param_2,param_3,param_4);
              return;
            }
            FUN_1011ad50(param_2,param_3 + 1,param_4);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1011cf20 @ 1011cf20  size=869 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_ArrayElemLabel, TdrText_FieldLabelChar
// strings:
//   "[wageTime]"
//   "[logTime]"
//   "[depotFetchCountTime]"
//   "[randCommodityTime]"
//   "[daily3Time]"
//   "[week3Time]"
//   "0x%02x"
//   "[eliteGuildCount]"
//   "[eliteGuilds]"
//   " %I64u"
//   "[commerceCount]"
//   "[commerceInfo]"
//   "[dragonBoatCount]"
//   "[dragonBoatInfo]"
//   "[guildWarHistoryCount]"
//   "[guildWarHistoryInfo]"
//   "[guildWarDailyRefreshTimestamp]"
//   "[guildWarWeeklyRefreshTimestamp]"

/* [RE-AUTO c0]
   strings:
     ""[wageTime]""
     ""[logTime]""
     ""[depotFetchCountTime]""
     ""[randCommodityTime]""
     ""[daily3Time]""
     ""[week3Time]""
     ""0x%02x""
     ""[eliteGuildCount]""
     ""[eliteGuilds]""
     "" %I64u"" */

int __thiscall FUN_1011cf20(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  
  uVar1 = param_2;
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[wageTime]",&DAT_11d9f574,*param_1);
  if (((((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[logTime]",&DAT_11d9f574,param_1[1]),
        iVar3 == 0)) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[depotFetchCountTime]",&DAT_11d9f574,
                                    param_1[2]), iVar3 == 0)) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[randCommodityTime]",&DAT_11d9f574,
                                    param_1[3]), iVar3 == 0 &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[daily3Time]",&DAT_11d9f574,param_1[4])
       , iVar3 == 0)))) &&
     ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[week3Time]",&DAT_11d9f574,param_1[5]),
      iVar3 == 0 &&
      (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[eliteGuildCount]","0x%02x",
                                   *(undefined1 *)(param_1 + 6)), iVar3 == 0)))) {
    if (200 < *(byte *)(param_1 + 6)) {
      return -7;
    }
    iVar3 = TdrText_ArrayHeader(extraout_ECX,"[eliteGuilds]",*(byte *)(param_1 + 6),0);
    if (iVar3 == 0) {
      bVar2 = 0;
      if (*(char *)(param_1 + 6) != '\0') {
        do {
          iVar3 = FUN_1010c010(param_2," %I64u",
                               *(undefined4 *)((int)param_1 + (uint)bVar2 * 8 + 0x19),
                               *(undefined4 *)((int)param_1 + (uint)bVar2 * 8 + 0x1d));
          if (iVar3 != 0) {
            return iVar3;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < *(byte *)(param_1 + 6));
      }
      iVar3 = TdrBuf_PutU8Z(param_4);
      if ((iVar3 == 0) &&
         (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceCount]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x659)), iVar3 == 0)) {
        iVar3 = *(int *)((int)param_1 + 0x659);
        if (iVar3 < 0) {
          return -6;
        }
        if (10 < iVar3) {
          return -7;
        }
        param_2 = 0;
        if (0 < iVar3) {
          iVar3 = (int)param_1 + 0x65d;
          do {
            iVar3 = TdrText_ArrayElemLabel(param_4,"[commerceInfo]",param_2,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_3;
            if (-1 < param_3) {
              iVar3 = param_3 + 1;
            }
            iVar3 = FUN_1011a400(uVar1,iVar3,param_4);
            if (iVar3 != 0) {
              return iVar3;
            }
            param_2 = param_2 + 1;
            iVar3 = extraout_ECX_00;
          } while (param_2 < *(int *)((int)param_1 + 0x659));
        }
        iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[dragonBoatCount]","0x%02x",
                                    *(undefined1 *)((int)param_1 + 0x6fd));
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldLabelChar(param_4,"[dragonBoatInfo]",extraout_ECX_01), iVar3 == 0))
        {
          iVar3 = param_3;
          if (-1 < param_3) {
            iVar3 = param_3 + 1;
          }
          iVar3 = FUN_1011b670(uVar1,iVar3,param_4);
          if ((iVar3 == 0) &&
             (iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[guildWarHistoryCount]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x746)),
             iVar3 == 0)) {
            iVar3 = *(int *)((int)param_1 + 0x746);
            if (iVar3 < 0) {
              return -6;
            }
            if (7 < iVar3) {
              return -7;
            }
            if (0 < iVar3) {
              iVar3 = (int)param_1 + 0x74a;
              iVar4 = 0;
              do {
                iVar3 = TdrText_ArrayElemLabel(param_4,"[guildWarHistoryInfo]",iVar4,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_3;
                if (-1 < param_3) {
                  iVar3 = param_3 + 1;
                }
                iVar3 = FUN_10119dc0(uVar1,iVar3,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar4 = iVar4 + 1;
                iVar3 = extraout_ECX_02;
              } while (iVar4 < *(int *)((int)param_1 + 0x746));
            }
            iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[guildWarDailyRefreshTimestamp]",
                                        &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x7d6));
            if (iVar3 == 0) {
              iVar3 = TdrText_FieldScalar(uVar1,param_3,param_4,"[guildWarWeeklyRefreshTimestamp]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x7da));
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_1012c700 @ 1012c700  size=462 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[guildID]"
//   "[teamName]"
//   "[matchID]"
//   "[signUpID]"
//   "[signUpTM]"
//   "[bestScore]"
//   "[bestScoreTm]"
//   "[count]"
//   "[members]"
//   "0x%02x"
//   "[acceptRound]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[guildID]""
     ""[teamName]""
     ""[matchID]""
     ""[signUpID]""
     ""[signUpTM]""
     ""[bestScore]""
     ""[bestScoreTm]""
     ""[count]""
     ""[members]"" */

int __thiscall FUN_1012c700(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[guildID]","%I64u",*param_1,param_1[1]);
  if (((((iVar2 == 0) &&
        (iVar2 = TdrText_FieldValueFmt(param_4,"[teamName]",param_1 + 2), iVar2 == 0)) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[matchID]",&DAT_11d9e0b4,param_1[0xc]),
       iVar2 == 0)) &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[signUpID]",&DAT_11d9f574,param_1[0xd])
       , iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[signUpTM]",&DAT_11d9e0b4,param_1[0xe])
       , iVar2 == 0)))) &&
     ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bestScore]",&DAT_11d9e0b4,param_1[0xf])
      , iVar2 == 0 &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bestScoreTm]",&DAT_11d9e0b4,
                                    param_1[0x10]), iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,param_1[0x11]),
       iVar2 == 0)))))) {
    iVar2 = param_1[0x11];
    if (iVar2 < 0) {
      return -6;
    }
    if (4 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      puVar3 = param_1 + 0x12;
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[members]",param_3,puVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1012b6f0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        puVar3 = param_1;
      } while (param_3 < (int)param_1[0x11]);
    }
    iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[acceptRound]","0x%02x",
                                (int)*(char *)(param_1 + 0x42));
  }
  return iVar2;
}



/* ===== FUN_1012f670 @ 1012f670  size=218 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[commerceId]"
//   "[timeoutDate]"

/* [RE-AUTO c0]
   strings:
     ""[commerceId]""
     ""[timeoutDate]"" */

int __thiscall
FUN_1012f670(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11c676c8;
  local_10 = ExceptionList;
  uVar1 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    return -0x13;
  }
  local_20 = param_2;
  local_14 = '\0';
  local_1c = 0;
  local_18 = param_3;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[commerceId]",&DAT_11d9e0b4,*param_1,uVar1)
  ;
  if (iVar2 == 0) {
    iVar2 = TdrText_FieldScalar(&local_20,param_5,param_6,"[timeoutDate]",&DAT_11d9f574,param_1[1],
                                uVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_1c;
  }
  if (local_14 != '\0') {
    FUN_10c3da30(local_20);
  }
  ExceptionList = local_10;
  return iVar2;
}



/* ===== FUN_1012f750 @ 1012f750  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[commerceId]"
//   "[timeoutDate]"

/* [RE-AUTO c0]
   strings:
     ""[commerceId]""
     ""[timeoutDate]"" */

void __thiscall
FUN_1012f750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[commerceId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[timeoutDate]",&DAT_11d9f574,param_1[1]);
  }
  return;
}



/* ===== FUN_10151940 @ 10151940  size=95 ===== */
// calls: TdrText_FieldValueFmt
// strings:
//   "[name]"
//   "[guild]"
//   "[clan]"

/* [RE-AUTO c0]
   strings:
     ""[name]""
     ""[guild]""
     ""[clan]"" */

void __thiscall FUN_10151940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[name]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[guild]",param_1 + 0x20);
    if (iVar1 == 0) {
      TdrText_FieldValueFmt(param_4,"[clan]",param_1 + 0x40);
    }
  }
  return;
}



/* ===== FUN_1016bdf0 @ 1016bdf0  size=338 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullRoleDBID]"
//   "[iLevel]"
//   "[szRoleName]"
//   "0x%02x"
//   "[bGroupID]"
//   "[dwFriendly]"
//   "[iFarmPoint]"
//   "[iFarmCanBeGatheredCount]"
//   "[iHRLevel]"
//   "[iAddTime]"
//   "[dwSvrId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullRoleDBID]""
     ""[iLevel]""
     ""[szRoleName]""
     ""0x%02x""
     ""[bGroupID]""
     ""[dwFriendly]""
     ""[iFarmPoint]""
     ""[iFarmCanBeGatheredCount]""
     ""[iHRLevel]"" */

void __thiscall
FUN_1016bdf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullRoleDBID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldValueFmt(param_4,"[szRoleName]",param_1 + 3);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGroupID]","0x%02x",
                                    *(undefined1 *)(param_1 + 0xb));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwFriendly]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x2d));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFarmPoint]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x31));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFarmCanBeGatheredCount]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x35));
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                                            *(undefined4 *)((int)param_1 + 0x39));
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iAddTime]",&DAT_11d9e0b4,
                                              *(undefined4 *)((int)param_1 + 0x3d));
                  if (iVar1 == 0) {
                    TdrText_FieldScalar(param_2,param_3,param_4,"[dwSvrId]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x41));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1016f9d0 @ 1016f9d0  size=109 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64i"
//   "[guildId]"
//   "[timestamp]"
//   "[commerceId]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[guildId]""
     ""[timestamp]""
     ""[commerceId]"" */

void __thiscall
FUN_1016f9d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[guildId]","%I64i",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[timestamp]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[commerceId]",&DAT_11d9e0b4,param_1[3]);
    }
  }
  return;
}



/* ===== FUN_10170a60 @ 10170a60  size=527 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "%I64u"
//   "[guild]"
//   "[contribution]"
//   "[contributionAcc]"
//   "[contributionWeekAcc]"
//   "[lastTime]"
//   "[refreshTimestamp]"
//   "[startBoatTimes]"
//   "0x%02x"
//   "[buyStartBoatTimes]"
//   "[guildCount]"
//   "[otherGuildNews]"
//   "[guildwarGrabPlayerId]"
//   "[guildwarGrabPlayerTimeStamp]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[guild]""
     ""[contribution]""
     ""[contributionAcc]""
     ""[contributionWeekAcc]""
     ""[lastTime]""
     ""[refreshTimestamp]""
     ""[startBoatTimes]""
     ""0x%02x""
     ""[buyStartBoatTimes]"" */

int __thiscall FUN_10170a60(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[guild]","%I64u",*param_1,param_1[1]);
  if ((((((iVar2 == 0) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[contribution]",&DAT_11d9e0b4,
                                      param_1[2]), iVar2 == 0)) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[contributionAcc]","%I64u",param_1[3],
                                     param_1[4]), iVar2 == 0)) &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[contributionWeekAcc]","%I64u",
                                     param_1[5],param_1[6]), iVar2 == 0 &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[lastTime]",&DAT_11d9f574,param_1[7]),
        iVar2 == 0)))) &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[refreshTimestamp]",&DAT_11d9e0b4,
                                    param_1[8]), iVar2 == 0 &&
       ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[startBoatTimes]",&DAT_11d9e0b4,
                                     param_1[9]), iVar2 == 0 &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[buyStartBoatTimes]","0x%02x",
                                     (int)*(char *)(param_1 + 10)), iVar2 == 0)))))) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[guildCount]",&DAT_11d9e0b4,
                                  *(undefined4 *)((int)param_1 + 0x29)), iVar2 == 0)) {
    iVar2 = *(int *)((int)param_1 + 0x29);
    if (iVar2 < 0) {
      return -6;
    }
    if (10 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      iVar2 = (int)param_1 + 0x2d;
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[otherGuildNews]",param_3,iVar2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1016f9d0(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        iVar2 = extraout_ECX;
      } while (param_3 < *(int *)((int)param_1 + 0x29));
    }
    iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[guildwarGrabPlayerId]","%I64u",
                                *(undefined4 *)((int)param_1 + 0xf5),
                                *(undefined4 *)((int)param_1 + 0xf9));
    if (iVar2 == 0) {
      iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[guildwarGrabPlayerTimeStamp]",
                                  &DAT_11d9f574,*(undefined4 *)((int)param_1 + 0xfd));
    }
  }
  return iVar2;
}



/* ===== FUN_10171270 @ 10171270  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[accMailSendTimes]"
//   "[passerbySendTimes]"
//   "[refreshTime]"

/* [RE-AUTO c0]
   strings:
     ""[accMailSendTimes]""
     ""[passerbySendTimes]""
     ""[refreshTime]"" */

void __thiscall
FUN_10171270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[accMailSendTimes]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[passerbySendTimes]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[refreshTime]",&DAT_11d9f574,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10233a10 @ 10233a10  size=625 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[dBID]"
//   "[name]"
//   "[netID]"
//   "[level]"
//   "0x%02x"
//   "[isOnline]"
//   "[levelID]"
//   "[lineId]"
//   "[mood]"
//   "[guildName]"
//   "[farmPoint]"
//   "[farmCanBeGatheredCount]"
//   "[teamId]"
//   "[teamPwdFlag]"
//   "[star]"
//   "[clan]"
//   "[hRLevel]"
//   "[addTime]"
//   "[svrId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[dBID]""
     ""[name]""
     ""[netID]""
     ""[level]""
     ""0x%02x""
     ""[isOnline]""
     ""[levelID]""
     ""[lineId]""
     ""[mood]"" */

void __thiscall
FUN_10233a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dBID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[name]",param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[netID]",&DAT_11d9e0b4,param_1[10]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[level]",&DAT_11d9e0b4,param_1[0xb]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[isOnline]","0x%02x",
                                      (int)*(char *)(param_1 + 0xc));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[levelID]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x31));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[lineId]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x35));
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldValueFmt(param_4,"[mood]",(int)param_1 + 0x39);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldValueFmt(param_4,"[guildName]",(int)param_1 + 0x61);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[farmPoint]",&DAT_11d9e0b4,
                                                *(undefined4 *)((int)param_1 + 0x81));
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[farmCanBeGatheredCount]"
                                                  ,&DAT_11d9e0b4,
                                                  *(undefined4 *)((int)param_1 + 0x85));
                      if (iVar1 == 0) {
                        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[teamId]",&DAT_11d9e0b4
                                                    ,*(undefined4 *)((int)param_1 + 0x89));
                        if (iVar1 == 0) {
                          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[teamPwdFlag]",
                                                      &DAT_11d9e0b4,
                                                      *(undefined4 *)((int)param_1 + 0x8d));
                          if (iVar1 == 0) {
                            iVar1 = TdrText_FieldValueFmt(param_4,"[star]",(int)param_1 + 0x91);
                            if (iVar1 == 0) {
                              iVar1 = TdrText_FieldValueFmt(param_4,"[clan]",(int)param_1 + 0x111);
                              if (iVar1 == 0) {
                                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[hRLevel]",
                                                            &DAT_11d9e0b4,
                                                            *(undefined4 *)((int)param_1 + 0x131));
                                if (iVar1 == 0) {
                                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[addTime]",
                                                              &DAT_11d9e0b4,
                                                              *(undefined4 *)((int)param_1 + 0x135))
                                  ;
                                  if (iVar1 == 0) {
                                    TdrText_FieldScalar(param_2,param_3,param_4,"[svrId]",
                                                        &DAT_11d9f574,
                                                        *(undefined4 *)((int)param_1 + 0x139));
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10248de0 @ 10248de0  size=869 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "%I64u"
//   "[redSoul]"
//   "[yellowSoul]"
//   "[redSoulAll]"
//   "[yellowSoulAll]"
//   "[phase]"
//   "[activity]"
//   "[instCount]"
//   "[instUid]"
//   " %I64u"
//   "[instGuild]"
//   "[instCamp]"
//   " 0x%02x"
//   "[redCount]"
//   "[yellowCount]"
//   "[applyYellowSoulAll]"
//   "[applyRedSoulAll]"
//   "[activeRedCount]"
//   "[activeYellowCount]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[redSoul]""
     ""[yellowSoul]""
     ""[redSoulAll]""
     ""[yellowSoulAll]""
     ""[phase]""
     ""[activity]""
     ""[instCount]""
     ""[instUid]""
     "" %I64u"" */

int __thiscall FUN_10248de0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar4;
  
  uVar1 = param_2;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[redSoul]","%I64u",*param_1,param_1[1]);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[yellowSoul]","%I64u",param_1[2],
                                    param_1[3]), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[redSoulAll]","%I64u",param_1[4],
                                   param_1[5]), iVar2 == 0)) &&
     (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[yellowSoulAll]","%I64u",param_1[6],
                                    param_1[7]), iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[phase]",&DAT_11d9e0b4,param_1[8]),
       iVar2 == 0)) &&
      ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[activity]",&DAT_11d9e0b4,param_1[9]),
       iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[instCount]",&DAT_11d9e0b4,param_1[10])
       , iVar2 == 0)))))) {
    iVar2 = param_1[10];
    if (iVar2 < 0) {
      return -6;
    }
    if (20000 < iVar2) {
      return -7;
    }
    iVar2 = TdrText_ArrayHeader(extraout_ECX,"[instUid]",iVar2,iVar2 >> 0x1f);
    if (iVar2 == 0) {
      if (0 < (int)param_1[10]) {
        puVar4 = param_1 + 0xb;
        param_2 = 0;
        do {
          iVar2 = FUN_1010c010(uVar1," %I64u",*puVar4,puVar4[1]);
          if (iVar2 != 0) {
            return iVar2;
          }
          puVar4 = puVar4 + 2;
          param_2 = param_2 + 1;
        } while (param_2 < (int)param_1[10]);
      }
      iVar2 = TdrBuf_PutU8Z(param_4);
      if (iVar2 == 0) {
        iVar2 = param_1[10];
        if (iVar2 < 0) {
          return -6;
        }
        if (20000 < iVar2) {
          return -7;
        }
        iVar2 = TdrText_ArrayHeader(extraout_ECX_00,"[instGuild]",iVar2,iVar2 >> 0x1f);
        if (iVar2 == 0) {
          if (0 < (int)param_1[10]) {
            puVar4 = param_1 + 0x9c4b;
            param_2 = 0;
            do {
              iVar2 = FUN_1010c010(uVar1," %I64u",*puVar4,puVar4[1]);
              if (iVar2 != 0) {
                return iVar2;
              }
              puVar4 = puVar4 + 2;
              param_2 = param_2 + 1;
            } while (param_2 < (int)param_1[10]);
          }
          iVar2 = TdrBuf_PutU8Z(param_4);
          if (iVar2 == 0) {
            iVar2 = param_1[10];
            if (iVar2 < 0) {
              return -6;
            }
            if (20000 < iVar2) {
              return -7;
            }
            iVar2 = TdrText_ArrayHeader(extraout_ECX_01,"[instCamp]",iVar2,iVar2 >> 0x1f);
            if (iVar2 == 0) {
              iVar2 = 0;
              if (0 < (int)param_1[10]) {
                do {
                  iVar3 = FUN_1010c010(uVar1," 0x%02x",
                                       *(undefined1 *)((int)param_1 + iVar2 + 0x4e22c));
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < (int)param_1[10]);
              }
              iVar2 = TdrBuf_PutU8Z(param_4);
              if (((iVar2 == 0) &&
                  (iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[redCount]",&DAT_11d9e0b4,
                                               param_1[0x14c13]), iVar2 == 0)) &&
                 ((iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[yellowCount]",&DAT_11d9e0b4,
                                               param_1[0x14c14]), iVar2 == 0 &&
                  (((iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[applyYellowSoulAll]",
                                                 "%I64u",param_1[0x14c15],param_1[0x14c16]),
                    iVar2 == 0 &&
                    (iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[applyRedSoulAll]","%I64u",
                                                 param_1[0x14c17],param_1[0x14c18]), iVar2 == 0)) &&
                   (iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[activeRedCount]",
                                                &DAT_11d9e0b4,param_1[0x14c19]), iVar2 == 0)))))) {
                iVar2 = TdrText_FieldScalar(uVar1,param_3,param_4,"[activeYellowCount]",
                                            &DAT_11d9e0b4,param_1[0x14c1a]);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1028c1f0 @ 1028c1f0  size=350 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[dwRoleIndex]"
//   "[iCharLevel]"
//   "[iWeapon]"
//   "[iBoxID]"
//   "[szRoleName]"
//   "[szStarLevel]"
//   "[iFaction]"
//   "0x%02x"
//   "[bOfficer]"
//   "[iHRLevel]"
//   "[bBigRand]"

/* [RE-AUTO c0]
   strings:
     ""[dwRoleIndex]""
     ""[iCharLevel]""
     ""[iWeapon]""
     ""[iBoxID]""
     ""[szRoleName]""
     ""[szStarLevel]""
     ""[iFaction]""
     ""0x%02x""
     ""[bOfficer]""
     ""[iHRLevel]"" */

void __thiscall
FUN_1028c1f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwRoleIndex]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCharLevel]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeapon]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBoxID]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldValueFmt(param_4,"[szRoleName]",param_1 + 4);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldValueFmt(param_4,"[szStarLevel]",param_1 + 0xc);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                          param_1[0x2c]);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bOfficer]","0x%02x",
                                            *(undefined1 *)(param_1 + 0x2d));
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                                              *(undefined4 *)((int)param_1 + 0xb5));
                  if (iVar1 == 0) {
                    TdrText_FieldScalar(param_2,param_3,param_4,"[bBigRand]","0x%02x",
                                        *(undefined1 *)((int)param_1 + 0xb9));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1028c660 @ 1028c660  size=169 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iLevelID]"
//   "[iParam]"
//   "[iUseEmploye]"
//   "[iWeaponTrial]"
//   "%I64u"
//   "[ullGuildWarTargetId]"

/* [RE-AUTO c0]
   strings:
     ""[iLevelID]""
     ""[iParam]""
     ""[iUseEmploye]""
     ""[iWeaponTrial]""
     ""%I64u""
     ""[ullGuildWarTargetId]"" */

void __thiscall
FUN_1028c660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iParam]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iUseEmploye]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWeaponTrial]",&DAT_11d9e0b4,
                                    param_1[3]);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildWarTargetId]","%I64u",param_1[4],
                              param_1[5]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10299020 @ 10299020  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iMailFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iMailFlag]"" */

int __thiscall
FUN_10299020(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iMailFlag]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_102990c0 @ 102990c0  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iRetCode]"
//   "[iMailFlag]"

/* [RE-AUTO c0]
   strings:
     ""[iRetCode]""
     ""[iMailFlag]"" */

void __thiscall
FUN_102990c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRetCode]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iMailFlag]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_1029b0a0 @ 1029b0a0  size=310 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iFactionID]"
//   "[iFactionDataCnt]"
//   "[factionDataType]"
//   "[factionDataValue]"

/* [RE-AUTO c0]
   strings:
     ""[iFactionID]""
     ""[iFactionDataCnt]""
     ""[factionDataType]""
     ""[factionDataValue]"" */

int __thiscall
FUN_1029b0a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFactionID]",&DAT_11d9e0b4,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFactionDataCnt]",&DAT_11d9e0b4,
                                  param_1[1]), iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (0x28 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[factionDataType]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (0 < (int)param_1[1]) {
        puVar3 = param_1 + 2;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < (int)param_1[1]);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (iVar1 == 0) {
        iVar1 = param_1[1];
        if (iVar1 < 0) {
          return -6;
        }
        if (0x28 < iVar1) {
          return -7;
        }
        iVar1 = TdrText_ArrayHeader(extraout_ECX_00,"[factionDataValue]",iVar1,iVar1 >> 0x1f);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (0 < (int)param_1[1]) {
            puVar3 = param_1 + 0x2a;
            do {
              iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*puVar3);
              if (iVar2 != 0) {
                return iVar2;
              }
              iVar1 = iVar1 + 1;
              puVar3 = puVar3 + 1;
            } while (iVar1 < (int)param_1[1]);
          }
          iVar1 = TdrBuf_PutU8Z(param_4);
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1029bcf0 @ 1029bcf0  size=646 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrText_ArrayElemLabel, TdrDebugFormat_HuntResultFull, TdrDebugFormat_BaseStatInfo
// strings:
//   "[iLevelID]"
//   "[iGameMode]"
//   "[iHuntingMode]"
//   "[stFakeItemInfo]"
//   "[stInstanceStatResult]"
//   "[iFactionCnt]"
//   "[astFactionStatResult]"
//   "[stSelfResult]"
//   "0x%02x"
//   "[bPlayerCnt]"
//   "[astOtherResultList]"

/* [RE-AUTO c0]
   strings:
     ""[iLevelID]""
     ""[iGameMode]""
     ""[iHuntingMode]""
     ""[stFakeItemInfo]""
     ""[stInstanceStatResult]""
     ""[iFactionCnt]""
     ""[astFactionStatResult]""
     ""[stSelfResult]""
     ""0x%02x""
     ""[bPlayerCnt]"" */

int __thiscall FUN_1029bcf0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelID]",&DAT_11d9e0b4,*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGameMode]",&DAT_11d9e0b4,param_1[1]),
       iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHuntingMode]",&DAT_11d9e0b4,param_1[2]
                                  ), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldLabelChar(param_4,"[stFakeItemInfo]",extraout_ECX), iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = FUN_1029b590(param_2,iVar2,param_4);
    if ((iVar2 == 0) &&
       (iVar2 = TdrText_FieldLabelChar(param_4,"[stInstanceStatResult]",extraout_ECX_00), iVar2 == 0
       )) {
      iVar2 = param_3;
      if (-1 < param_3) {
        iVar2 = param_3 + 1;
      }
      iVar2 = FUN_1029ab90(param_2,iVar2,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFactionCnt]",&DAT_11d9e0b4,
                                      param_1[0x5d]), iVar2 == 0)) {
        iVar2 = param_1[0x5d];
        if (iVar2 < 0) {
          return -6;
        }
        if (4 < iVar2) {
          return -7;
        }
        iVar4 = 0;
        param_3 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = TdrText_ArrayElemLabel(param_4,"[astFactionStatResult]",param_3,param_3);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = iVar1;
            if (-1 < iVar1) {
              iVar2 = iVar1 + 1;
            }
            iVar2 = FUN_1029b0a0(param_2,iVar2,param_4);
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar4 = param_3 + 1;
            param_3 = iVar4;
          } while (iVar4 < (int)param_1[0x5d]);
        }
        iVar2 = TdrText_FieldLabelChar(param_4,"[stSelfResult]",iVar4);
        if (iVar2 == 0) {
          iVar2 = iVar1;
          if (-1 < iVar1) {
            iVar2 = iVar1 + 1;
          }
          iVar2 = TdrDebugFormat_HuntResultFull(param_2,iVar2,param_4);
          if ((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[bPlayerCnt]","0x%02x",
                                          *(undefined1 *)(param_1 + 0x8780)), iVar2 == 0)) {
            if (0x18 < *(byte *)(param_1 + 0x8780)) {
              return -7;
            }
            bVar3 = 0;
            if (*(byte *)(param_1 + 0x8780) != 0) {
              do {
                iVar2 = TdrText_ArrayElemLabel(param_4,"[astOtherResultList]",bVar3,bVar3);
                if (iVar2 != 0) {
                  return iVar2;
                }
                iVar2 = iVar1;
                if (-1 < iVar1) {
                  iVar2 = iVar1 + 1;
                }
                iVar2 = TdrDebugFormat_BaseStatInfo(param_2,iVar2,param_4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                bVar3 = bVar3 + 1;
              } while (bVar3 < *(byte *)(param_1 + 0x8780));
            }
            iVar2 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_1029dd80 @ 1029dd80  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined4 __thiscall
FUN_1029dd80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildID]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1029de00 @ 1029de00  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

void __thiscall
FUN_1029de00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildID]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_1029de30 @ 1029de30  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined1 * __thiscall
FUN_1029de30(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildID]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1029dec0 @ 1029dec0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined1 * __thiscall
FUN_1029dec0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildID]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1029e360 @ 1029e360  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined4 __thiscall
FUN_1029e360(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildID]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1029e3e0 @ 1029e3e0  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

void __thiscall
FUN_1029e3e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildID]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_1029e410 @ 1029e410  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined1 * __thiscall
FUN_1029e410(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildID]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1029e4a0 @ 1029e4a0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuildID]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildID]"" */

undefined1 * __thiscall
FUN_1029e4a0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildID]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_102add90 @ 102add90  size=136 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwNetId]"
//   "[iFactionID]"
//   "[iCatCarCount]"
//   "[iCatCarTicketCount]"

/* [RE-AUTO c0]
   strings:
     ""[dwNetId]""
     ""[iFactionID]""
     ""[iCatCarCount]""
     ""[iCatCarTicketCount]"" */

void __thiscall
FUN_102add90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFactionID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCatCarCount]",&DAT_11d9e0b4,param_1[2])
      ;
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[iCatCarTicketCount]",&DAT_11d9e0b4,param_1[3])
        ;
      }
    }
  }
  return;
}



/* ===== FUN_102b38f0 @ 102b38f0  size=115 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iFaction]"" */

undefined4 __thiscall
FUN_102b38f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iFaction]",&DAT_11d9e0b4,*param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_102b3970 @ 102b3970  size=36 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iFaction]"" */

void __thiscall
FUN_102b3970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,*param_1);
  return;
}



/* ===== FUN_102b39a0 @ 102b39a0  size=135 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iFaction]"" */

undefined1 * __thiscall
FUN_102b39a0(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[iFaction]",&DAT_11d9e0b4,*param_1);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_102b3a30 @ 102b3a30  size=84 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iFaction]"" */

undefined1 * __thiscall
FUN_102b3a30(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,*param_1);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_102b3c20 @ 102b3c20  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iNetID]"
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iFaction]"" */

int __thiscall
FUN_102b3c20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iFaction]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_102b3cc0 @ 102b3cc0  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iNetID]"
//   "[iFaction]"

/* [RE-AUTO c0]
   strings:
     ""[iNetID]""
     ""[iFaction]"" */

void __thiscall
FUN_102b3cc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_102b7db0 @ 102b7db0  size=338 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullRoleDBID]"
//   "[iLevel]"
//   "[szRoleName]"
//   "0x%02x"
//   "[bGroupID]"
//   "[dwFriendly]"
//   "[iFarmPoint]"
//   "[iFarmCanBeGatheredCount]"
//   "[iHRLevel]"
//   "[dwSvrId]"
//   "[iAddTime]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullRoleDBID]""
     ""[iLevel]""
     ""[szRoleName]""
     ""0x%02x""
     ""[bGroupID]""
     ""[dwFriendly]""
     ""[iFarmPoint]""
     ""[iFarmCanBeGatheredCount]""
     ""[iHRLevel]"" */

void __thiscall
FUN_102b7db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullRoleDBID]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldValueFmt(param_4,"[szRoleName]",param_1 + 3);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bGroupID]","0x%02x",
                                    *(undefined1 *)(param_1 + 0xb));
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwFriendly]",&DAT_11d9f574,
                                      *(undefined4 *)((int)param_1 + 0x2d));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFarmPoint]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x31));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFarmCanBeGatheredCount]",
                                          &DAT_11d9e0b4,*(undefined4 *)((int)param_1 + 0x35));
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                                            *(undefined4 *)((int)param_1 + 0x39));
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSvrId]",&DAT_11d9f574,
                                              *(undefined4 *)((int)param_1 + 0x3d));
                  if (iVar1 == 0) {
                    TdrText_FieldScalar(param_2,param_3,param_4,"[iAddTime]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x41));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102d2730 @ 102d2730  size=282 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_CatCarUseInfoList
// strings:
//   "[iPlayerID]"
//   "[iFactionID]"
//   "[szRevivePointName]"
//   "[iReviveType]"
//   "[iCatCarType]"
//   "[iParam]"
//   "[stCatCarInfo]"

/* [RE-AUTO c0]
   strings:
     ""[iPlayerID]""
     ""[iFactionID]""
     ""[szRevivePointName]""
     ""[iReviveType]""
     ""[iCatCarType]""
     ""[iParam]""
     ""[stCatCarInfo]"" */

void __thiscall FUN_102d2730(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPlayerID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFactionID]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldValueFmt(param_4,"[szRevivePointName]",param_1 + 2);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iReviveType]",&DAT_11d9e0b4,
                                    param_1[0x12]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCatCarType]",&DAT_11d9e0b4,
                                      param_1[0x13]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iParam]",&DAT_11d9e0b4,
                                        param_1[0x14]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldLabelChar(param_4,"[stCatCarInfo]",extraout_ECX);
              if (iVar1 == 0) {
                if (param_3 < 0) {
                  TdrDebugFormat_CatCarUseInfoList(param_2,param_3,param_4);
                  return;
                }
                TdrDebugFormat_CatCarUseInfoList(param_2,param_3 + 1,param_4);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_102d5b00 @ 102d5b00  size=898 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrText_FieldLabelChar
// strings:
//   "[iSourceID]"
//   "[dwSrcUin]"
//   "%I64u"
//   "[ullSrcDBID]"
//   "[iSrcLevelGrpId]"
//   "[szSourceName]"
//   "0x%02x"
//   "[bSrcVipLevel]"
//   "[bSrcVipCanUse]"
//   "[iQQMask]"
//   "[iChannelType]"
//   "[iLineID]"
//   "[iWorldSvrID]"
//   "[iShowTime]"
//   "[iHeadLen]"
//   "[szHead]"
//   "[szContent]"
//   "[bSendByMe]"
//   "[bContainBanWords]"
//   "[stItems]"

/* [RE-AUTO c0]
   strings:
     ""[iSourceID]""
     ""[dwSrcUin]""
     ""%I64u""
     ""[ullSrcDBID]""
     ""[iSrcLevelGrpId]""
     ""[szSourceName]""
     ""0x%02x""
     ""[bSrcVipLevel]""
     ""[bSrcVipCanUse]""
     ""[iQQMask]"" */

int __thiscall FUN_102d5b00(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSourceID]",&DAT_11d9e0b4,*param_1);
  if (((((((iVar1 == 0) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSrcUin]",&DAT_11d9f574,param_1[1]
                                      ), iVar1 == 0)) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullSrcDBID]","%I64u",param_1[2],
                                      param_1[3]), iVar1 == 0)) &&
        (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSrcLevelGrpId]",&DAT_11d9e0b4,
                                       param_1[4]), iVar1 == 0 &&
          (iVar1 = TdrText_FieldValueFmt(param_4,"[szSourceName]",param_1 + 5), iVar1 == 0)) &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSrcVipLevel]","0x%02x",
                                       *(undefined1 *)(param_1 + 0xd)), iVar1 == 0 &&
          ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSrcVipCanUse]","0x%02x",
                                        *(undefined1 *)((int)param_1 + 0x35)), iVar1 == 0 &&
           (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iQQMask]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x36)), iVar1 == 0)))))))) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iChannelType]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0x3a)), iVar1 == 0)) &&
      (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLineID]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x3e)), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iWorldSvrID]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x42)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iShowTime]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 0x46)), iVar1 == 0)))) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHeadLen]",&DAT_11d9e0b4,
                                  *(undefined4 *)((int)param_1 + 0x4a)), iVar1 == 0)) {
    iVar1 = *(int *)((int)param_1 + 0x4a);
    if (iVar1 < 0) {
      return -6;
    }
    if (0x100 < iVar1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[szHead]",iVar1,iVar1 >> 0x1f);
    if (iVar1 == 0) {
      if (0 < *(int *)((int)param_1 + 0x4a)) {
        iVar1 = 0;
        do {
          iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar1 + 0x4e));
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)param_1 + 0x4a));
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if (((iVar1 == 0) &&
          (iVar1 = TdrText_FieldValueFmt(param_4,"[szContent]",(int)param_1 + 0x14e), iVar1 == 0))
         && ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSendByMe]","0x%02x",
                                          *(undefined1 *)((int)param_1 + 0x2df)), iVar1 == 0 &&
             ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bContainBanWords]","0x%02x",
                                           *(undefined1 *)(param_1 + 0xb8)), iVar1 == 0 &&
              (iVar1 = TdrText_FieldLabelChar(param_4,"[stItems]",extraout_ECX_00), iVar1 == 0))))))
      {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102d4180(param_2,iVar1,param_4);
        if ((((iVar1 == 0) &&
             (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSrcLevel]",&DAT_11d9e0b4,
                                          *(undefined4 *)((int)param_1 + 0x809)), iVar1 == 0)) &&
            (iVar1 = TdrText_FieldValueFmt(param_4,"[szSrcGuildName]",(int)param_1 + 0x80d),
            iVar1 == 0)) &&
           (iVar1 = TdrText_FieldValueFmt(param_4,"[szSrcHunterStar]",(int)param_1 + 0x82d),
           iVar1 == 0)) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSrcHRLevel]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x8ad));
        }
      }
    }
  }
  return iVar1;
}



/* ===== FUN_102fe8c0 @ 102fe8c0  size=277 ===== */
// calls: TdrText_FieldValueFmt, TdrText_FieldScalar
// strings:
//   "[szName]"
//   "[iLevel]"
//   "[szGuildName]"
//   "[szHunterStar]"
//   "[iHRLevel]"
//   "[iLineID]"
//   "0x%02x"
//   "[bVipLevel]"
//   "[bVipCanUse]"

/* [RE-AUTO c0]
   strings:
     ""[szName]""
     ""[iLevel]""
     ""[szGuildName]""
     ""[szHunterStar]""
     ""[iHRLevel]""
     ""[iLineID]""
     ""0x%02x""
     ""[bVipLevel]""
     ""[bVipCanUse]"" */

void __thiscall FUN_102fe8c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,
                                *(undefined4 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 0x24);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldValueFmt(param_4,"[szHunterStar]",param_1 + 0x44);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iHRLevel]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 0xc4));
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLineID]",&DAT_11d9e0b4,
                                        *(undefined4 *)(param_1 + 200));
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bVipLevel]","0x%02x",
                                          *(undefined1 *)(param_1 + 0xcc));
              if (iVar1 == 0) {
                TdrText_FieldScalar(param_2,param_3,param_4,"[bVipCanUse]","0x%02x",
                                    *(undefined1 *)(param_1 + 0xcd));
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1033ac40 @ 1033ac40  size=395 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullId]"
//   "[szName]"
//   "[iIcon]"
//   "[szNote]"
//   "[iLevel]"
//   "[iRepute]"
//   "[szLeader]"
//   "[iGuilders]"
//   "[iGuildersAvgLevel]"
//   "[iJoinLevel]"
//   "[ullHuntSoul]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullId]""
     ""[szName]""
     ""[iIcon]""
     ""[szNote]""
     ""[iLevel]""
     ""[iRepute]""
     ""[szLeader]""
     ""[iGuilders]""
     ""[iGuildersAvgLevel]"" */

void __thiscall
FUN_1033ac40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullId]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iIcon]",&DAT_11d9e0b4,param_1[10]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldValueFmt(param_4,"[szNote]",param_1 + 0xb);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevel]",&DAT_11d9e0b4,param_1[0x4b]
                                     );
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRepute]",&DAT_11d9e0b4,
                                        param_1[0x4c]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldValueFmt(param_4,"[szLeader]",param_1 + 0x4d);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuilders]",&DAT_11d9e0b4,
                                            param_1[0x8d]);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildersAvgLevel]",
                                              &DAT_11d9e0b4,param_1[0x8e]);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iJoinLevel]",&DAT_11d9e0b4
                                                ,param_1[0x8f]);
                    if (iVar1 == 0) {
                      TdrText_FieldScalar(param_2,param_3,param_4,"[ullHuntSoul]","%I64u",
                                          param_1[0x90],param_1[0x91]);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1033c260 @ 1033c260  size=163 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[iId]"
//   "%I64u"
//   "[ullGuild]"
//   "[szName]"
//   "[szSender]"
//   "[iTime]"

/* [RE-AUTO c0]
   strings:
     ""[iId]""
     ""%I64u""
     ""[ullGuild]""
     ""[szName]""
     ""[szSender]""
     ""[iTime]"" */

void __thiscall
FUN_1033c260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",param_1[1],param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldValueFmt(param_4,"[szName]",param_1 + 3);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldValueFmt(param_4,"[szSender]",param_1 + 0xb);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iTime]",&DAT_11d9e0b4,param_1[0x13]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1033c9e0 @ 1033c9e0  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64i"
//   "[llGuildId]"
//   "[iTimestamp]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[llGuildId]""
     ""[iTimestamp]"" */

int __thiscall
FUN_1033c9e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[llGuildId]","%I64i",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iTimestamp]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1033ca80 @ 1033ca80  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64i"
//   "[llGuildId]"
//   "[iTimestamp]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[llGuildId]""
     ""[iTimestamp]"" */

void __thiscall
FUN_1033ca80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llGuildId]","%I64i",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iTimestamp]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_1033ce20 @ 1033ce20  size=217 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[dwPlayerCount]"
//   "[playerId]"
//   " %I64u"
//   "%I64u"
//   "[ullOwnGuildId]"
//   "[dwMinTime]"

/* [RE-AUTO c0]
   strings:
     ""[dwPlayerCount]""
     ""[playerId]""
     "" %I64u""
     ""%I64u""
     ""[ullOwnGuildId]""
     ""[dwMinTime]"" */

int __thiscall FUN_1033ce20(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwPlayerCount]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    if (4 < *param_1) {
      return -7;
    }
    iVar1 = TdrText_ArrayHeader(extraout_ECX,"[playerId]",*param_1,0);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*param_1 != 0) {
        puVar2 = param_1 + 1;
        do {
          iVar1 = FUN_1010c010(param_2," %I64u",*puVar2,puVar2[1]);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 2;
        } while (uVar3 < *param_1);
      }
      iVar1 = TdrBuf_PutU8Z(param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullOwnGuildId]","%I64u",param_1[9],
                                      param_1[10]), iVar1 == 0)) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMinTime]",&DAT_11d9f574,param_1[0xb]
                                   );
      }
    }
  }
  return iVar1;
}



/* ===== FUN_1033d250 @ 1033d250  size=214 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "[dwCommerceBoatId]"
//   "[iCommerceBoatStartTime]"
//   "[iCommerceBoatStatus]"
//   "[iLevelId]"
//   "[stGrabInfo]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceBoatId]""
     ""[iCommerceBoatStartTime]""
     ""[iCommerceBoatStatus]""
     ""[iLevelId]""
     ""[stGrabInfo]"" */

void __thiscall FUN_1033d250(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceBoatId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceBoatStartTime]",&DAT_11d9e0b4,
                                param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceBoatStatus]",&DAT_11d9e0b4,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLevelId]",&DAT_11d9e0b4,param_1[3]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldLabelChar(param_4,"[stGrabInfo]",extraout_ECX);
          if (iVar1 == 0) {
            if (param_3 < 0) {
              FUN_1033ce20(param_2,param_3,param_4);
              return;
            }
            FUN_1033ce20(param_2,param_3 + 1,param_4);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1033d840 @ 1033d840  size=456 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel, TdrText_FieldLabelChar
// strings:
//   "0x%02x"
//   "[chChallengeTimes]"
//   "[chBuyGrabTimes]"
//   "[iRefreshTimestamp]"
//   "[iStartBoatTimes]"
//   "[chBuyStartBoatTimes]"
//   "[iGuildCount]"
//   "[astOhterGuildNewsInfo]"
//   "[stCommerceBoatInfo]"
//   "[dwContributeResPoint]"

/* [RE-AUTO c0]
   strings:
     ""0x%02x""
     ""[chChallengeTimes]""
     ""[chBuyGrabTimes]""
     ""[iRefreshTimestamp]""
     ""[iStartBoatTimes]""
     ""[chBuyStartBoatTimes]""
     ""[iGuildCount]""
     ""[astOhterGuildNewsInfo]""
     ""[stCommerceBoatInfo]""
     ""[dwContributeResPoint]"" */

int __thiscall FUN_1033d840(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3;
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chChallengeTimes]","0x%02x",(int)*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chBuyGrabTimes]","0x%02x",
                                    (int)param_1[1]), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRefreshTimestamp]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 2)), iVar2 == 0)) &&
     (((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iStartBoatTimes]",&DAT_11d9e0b4,
                                    *(undefined4 *)(param_1 + 6)), iVar2 == 0 &&
       (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chBuyStartBoatTimes]","0x%02x",
                                    (int)param_1[10]), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildCount]",&DAT_11d9e0b4,
                                   *(undefined4 *)(param_1 + 0xb)), iVar2 == 0)))) {
    iVar2 = *(int *)(param_1 + 0xb);
    if (iVar2 < 0) {
      return -6;
    }
    if (10 < iVar2) {
      return -7;
    }
    param_3 = 0;
    if (0 < iVar2) {
      pcVar3 = param_1 + 0xf;
      do {
        iVar2 = TdrText_ArrayElemLabel(param_4,"[astOhterGuildNewsInfo]",param_3,pcVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = iVar1;
        if (-1 < iVar1) {
          iVar2 = iVar1 + 1;
        }
        iVar2 = FUN_1033ca80(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + 1;
        pcVar3 = param_1;
      } while (param_3 < *(int *)(param_1 + 0xb));
    }
    iVar2 = TdrText_FieldLabelChar(param_4,"[stCommerceBoatInfo]",param_1);
    if (iVar2 == 0) {
      iVar2 = iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1 + 1;
      }
      iVar2 = FUN_1033d250(param_2,iVar2,param_4);
      if (iVar2 == 0) {
        iVar2 = TdrText_FieldScalar(param_2,iVar1,param_4,"[dwContributeResPoint]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 199));
      }
    }
  }
  return iVar2;
}



/* ===== FUN_103407f0 @ 103407f0  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iCommerceId]"
//   "[dwGoodsNumber]"
//   "[dwLastChangeTime]"
//   "0x%02x"
//   "[chIsOwned]"

/* [RE-AUTO c0]
   strings:
     ""[iCommerceId]""
     ""[dwGoodsNumber]""
     ""[dwLastChangeTime]""
     ""0x%02x""
     ""[chIsOwned]"" */

void __thiscall
FUN_103407f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwGoodsNumber]",&DAT_11d9f574,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLastChangeTime]",&DAT_11d9f574,
                                  param_1[2]);
      if (iVar1 == 0) {
        TdrText_FieldScalar(param_2,param_3,param_4,"[chIsOwned]","0x%02x",
                            (int)*(char *)(param_1 + 3));
      }
    }
  }
  return;
}



/* ===== FUN_10340ba0 @ 10340ba0  size=106 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iCommerceId]"
//   "[dwTimeoutDate]"
//   "[dwOperator]"

/* [RE-AUTO c0]
   strings:
     ""[iCommerceId]""
     ""[dwTimeoutDate]""
     ""[dwOperator]"" */

void __thiscall
FUN_10340ba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceId]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwTimeoutDate]",&DAT_11d9f574,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[dwOperator]",&DAT_11d9f574,param_1[2]);
    }
  }
  return;
}



/* ===== FUN_10343ad0 @ 10343ad0  size=155 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullGuild]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]""
     ""[szNote]"" */

int __thiscall
FUN_10343ad0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_6,"[szNote]",param_1 + 2);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10343b70 @ 10343b70  size=73 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullGuild]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]""
     ""[szNote]"" */

void __thiscall
FUN_10343b70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldValueFmt(param_4,"[szNote]",param_1 + 2);
  }
  return;
}



/* ===== FUN_10344d80 @ 10344d80  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined4 __thiscall
FUN_10344d80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10344e00 @ 10344e00  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

void __thiscall
FUN_10344e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10344e30 @ 10344e30  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_10344e30(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10344ec0 @ 10344ec0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_10344ec0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_103450c0 @ 103450c0  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"
//   "[iReason]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]""
     ""[iReason]"" */

int __thiscall
FUN_103450c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iReason]",&DAT_11d9e0b4,param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10345160 @ 10345160  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"
//   "[iReason]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]""
     ""[iReason]"" */

void __thiscall
FUN_10345160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iReason]",&DAT_11d9e0b4,param_1[2]);
  }
  return;
}



/* ===== FUN_103456c0 @ 103456c0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined4 __thiscall
FUN_103456c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10345740 @ 10345740  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

void __thiscall
FUN_10345740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10345770 @ 10345770  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10345770(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10345800 @ 10345800  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10345800(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_103459b0 @ 103459b0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined4 __thiscall
FUN_103459b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10345a30 @ 10345a30  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

void __thiscall
FUN_10345a30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10345a60 @ 10345a60  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10345a60(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10345af0 @ 10345af0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10345af0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10345db0 @ 10345db0  size=155 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullGuilder]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]""
     ""[szNote]"" */

int __thiscall
FUN_10345db0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldValueFmt(param_6,"[szNote]",param_1 + 2);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10345e50 @ 10345e50  size=73 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "%I64u"
//   "[ullGuilder]"
//   "[szNote]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]""
     ""[szNote]"" */

void __thiscall
FUN_10345e50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (iVar1 == 0) {
    TdrText_FieldValueFmt(param_4,"[szNote]",param_1 + 2);
  }
  return;
}



/* ===== FUN_103481a0 @ 103481a0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined4 __thiscall
FUN_103481a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10348220 @ 10348220  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

void __thiscall
FUN_10348220(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10348250 @ 10348250  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10348250(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_103482e0 @ 103482e0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_103482e0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10349690 @ 10349690  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined4 __thiscall
FUN_10349690(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10349710 @ 10349710  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

void __thiscall
FUN_10349710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10349740 @ 10349740  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10349740(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_103497d0 @ 103497d0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_103497d0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10349980 @ 10349980  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined4 __thiscall
FUN_10349980(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10349a00 @ 10349a00  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

void __thiscall
FUN_10349a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10349a30 @ 10349a30  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10349a30(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10349ac0 @ 10349ac0  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuilder]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuilder]"" */

undefined1 * __thiscall
FUN_10349ac0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuilder]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1034cc50 @ 1034cc50  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined4 __thiscall
FUN_1034cc50(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_1034ccd0 @ 1034ccd0  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

void __thiscall
FUN_1034ccd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_1034cd00 @ 1034cd00  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_1034cd00(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuild]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1034cd90 @ 1034cd90  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuild]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuild]"" */

undefined1 * __thiscall
FUN_1034cd90(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuild]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1034dab0 @ 1034dab0  size=179 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrDump_GuildList_iCount_astGuilds
// strings:
//   "[iGuildsCount]"
//   "[iPages]"
//   "[iPage]"
//   "[stGuilds]"

/* [RE-AUTO c0]
   strings:
     ""[iGuildsCount]""
     ""[iPages]""
     ""[iPage]""
     ""[stGuilds]"" */

void __thiscall FUN_1034dab0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildsCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPages]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPage]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldLabelChar(param_4,"[stGuilds]",extraout_ECX);
        if (iVar1 == 0) {
          if (param_3 < 0) {
            TdrDump_GuildList_iCount_astGuilds(param_2,param_3,param_4);
            return;
          }
          TdrDump_GuildList_iCount_astGuilds(param_2,param_3 + 1,param_4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_1034fef0 @ 1034fef0  size=157 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iGuilders]"
//   "[iPages]"

/* [RE-AUTO c0]
   strings:
     ""[iGuilders]""
     ""[iPages]"" */

int __thiscall
FUN_1034fef0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iGuilders]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[iPages]",&DAT_11d9e0b4,param_1[1]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_1034ff90 @ 1034ff90  size=74 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[iGuilders]"
//   "[iPages]"

/* [RE-AUTO c0]
   strings:
     ""[iGuilders]""
     ""[iPages]"" */

void __thiscall
FUN_1034ff90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuilders]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[iPages]",&DAT_11d9e0b4,param_1[1]);
  }
  return;
}



/* ===== FUN_103502e0 @ 103502e0  size=179 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrDump_GuilderList_iCount_astGuilders
// strings:
//   "[iGuildersCount]"
//   "[iPages]"
//   "[iPage]"
//   "[stGuilders]"

/* [RE-AUTO c0]
   strings:
     ""[iGuildersCount]""
     ""[iPages]""
     ""[iPage]""
     ""[stGuilders]"" */

void __thiscall FUN_103502e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iGuildersCount]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPages]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iPage]",&DAT_11d9e0b4,param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldLabelChar(param_4,"[stGuilders]",extraout_ECX);
        if (iVar1 == 0) {
          if (param_3 < 0) {
            TdrDump_GuilderList_iCount_astGuilders(param_2,param_3,param_4);
            return;
          }
          TdrDump_GuilderList_iCount_astGuilders(param_2,param_3 + 1,param_4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_10355a70 @ 10355a70  size=160 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwCommerceID]"
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceID]""
     ""%I64u""
     ""[ullGuildId]"" */

int __thiscall
FUN_10355a70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return -0x13;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[dwCommerceID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildId]","%I64u",param_1[1],
                                param_1[2]);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return iVar1;
}



/* ===== FUN_10355b10 @ 10355b10  size=77 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "[dwCommerceID]"
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceID]""
     ""%I64u""
     ""[ullGuildId]"" */

void __thiscall
FUN_10355b10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",param_1[1],param_1[2]);
  }
  return;
}



/* ===== FUN_10355f80 @ 10355f80  size=238 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[dwCommerceID]"
//   "[dwGoodsNumber]"
//   "[dwLastChangeTime]"
//   "[szGuildName]"
//   "%I64u"
//   "[ullGuildId]"
//   "0x%02x"
//   "[chIsFinish]"
//   "[chRank]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceID]""
     ""[dwGoodsNumber]""
     ""[dwLastChangeTime]""
     ""[szGuildName]""
     ""%I64u""
     ""[ullGuildId]""
     ""0x%02x""
     ""[chIsFinish]""
     ""[chRank]"" */

void __thiscall
FUN_10355f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceID]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwGoodsNumber]",&DAT_11d9f574,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLastChangeTime]",&DAT_11d9f574,
                                  param_1[2]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 3);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",param_1[0xb],
                                      param_1[0xc]);
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chIsFinish]","0x%02x",
                                        (int)*(char *)(param_1 + 0xd));
            if (iVar1 == 0) {
              TdrText_FieldScalar(param_2,param_3,param_4,"[chRank]","0x%02x",
                                  (int)*(char *)((int)param_1 + 0x35));
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_103573b0 @ 103573b0  size=469 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[dwBoatId]"
//   "%I64u"
//   "[ullPlayerId]"
//   "[dwStartTimestamp]"
//   "[dwLevelId]"
//   "[dwMinTime]"
//   "[ullGuildId]"
//   "[szGuildName]"
//   "[szRoleName]"
//   "[dwStatus]"
//   "[szOhterGuildName]"
//   "[szOtherRoleName1]"
//   "[szOtherRoleName2]"
//   "[szOtherRoleName3]"
//   "[szOtherRoleName4]"

/* [RE-AUTO c0]
   strings:
     ""[dwBoatId]""
     ""%I64u""
     ""[ullPlayerId]""
     ""[dwStartTimestamp]""
     ""[dwLevelId]""
     ""[dwMinTime]""
     ""[ullGuildId]""
     ""[szGuildName]""
     ""[szRoleName]""
     ""[dwStatus]"" */

void __thiscall
FUN_103573b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwBoatId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullPlayerId]","%I64u",param_1[1],
                                param_1[2]);
    if (iVar1 == 0) {
      iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwStartTimestamp]",&DAT_11d9f574,
                                  param_1[3]);
      if (iVar1 == 0) {
        iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwLevelId]",&DAT_11d9f574,param_1[4]);
        if (iVar1 == 0) {
          iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMinTime]",&DAT_11d9f574,param_1[5]
                                     );
          if (iVar1 == 0) {
            iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",param_1[6],
                                        param_1[7]);
            if (iVar1 == 0) {
              iVar1 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 8);
              if (iVar1 == 0) {
                iVar1 = TdrText_FieldValueFmt(param_4,"[szRoleName]",param_1 + 0x10);
                if (iVar1 == 0) {
                  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwStatus]",&DAT_11d9f574,
                                              param_1[0x18]);
                  if (iVar1 == 0) {
                    iVar1 = TdrText_FieldValueFmt(param_4,"[szOhterGuildName]",param_1 + 0x19);
                    if (iVar1 == 0) {
                      iVar1 = TdrText_FieldValueFmt(param_4,"[szOtherRoleName1]",param_1 + 0x21);
                      if (iVar1 == 0) {
                        iVar1 = TdrText_FieldValueFmt(param_4,"[szOtherRoleName2]",param_1 + 0x29);
                        if (iVar1 == 0) {
                          iVar1 = TdrText_FieldValueFmt(param_4,"[szOtherRoleName3]",param_1 + 0x31)
                          ;
                          if (iVar1 == 0) {
                            TdrText_FieldValueFmt(param_4,"[szOtherRoleName4]",param_1 + 0x39);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10358ea0 @ 10358ea0  size=103 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt
// strings:
//   "[dwCommerceId]"
//   "[dwGoodsNumber]"
//   "[szOwnGuildName]"

/* [RE-AUTO c0]
   strings:
     ""[dwCommerceId]""
     ""[dwGoodsNumber]""
     ""[szOwnGuildName]"" */

void __thiscall
FUN_10358ea0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwCommerceId]",&DAT_11d9f574,*param_1);
  if (iVar1 == 0) {
    iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwGoodsNumber]",&DAT_11d9f574,param_1[1]);
    if (iVar1 == 0) {
      TdrText_FieldValueFmt(param_4,"[szOwnGuildName]",param_1 + 2);
    }
  }
  return;
}



/* ===== FUN_103592c0 @ 103592c0  size=254 ===== */
// calls: TdrText_FieldScalar, TdrText_ArrayElemLabel
// strings:
//   "[iSelectedCommerceId]"
//   "[iCommerceHistory]"
//   "[iCommerceCount]"
//   "[astCommerceInfos]"

/* [RE-AUTO c0]
   strings:
     ""[iSelectedCommerceId]""
     ""[iCommerceHistory]""
     ""[iCommerceCount]""
     ""[astCommerceInfos]"" */

int __thiscall FUN_103592c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSelectedCommerceId]",&DAT_11d9e0b4,*param_1
                             );
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceHistory]",&DAT_11d9e0b4,
                                   param_1[1]), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iCommerceCount]",&DAT_11d9e0b4,
                                  param_1[2]), iVar1 == 0)) {
    iVar1 = param_1[2];
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astCommerceInfos]",iVar2,iVar1);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10358ea0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = extraout_ECX;
      } while (iVar2 < (int)param_1[2]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_103595e0 @ 103595e0  size=118 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]"" */

undefined4 __thiscall
FUN_103595e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  
  if (param_2 == 0) {
    return 0xffffffed;
  }
  local_14 = param_2;
  local_c = param_3;
  local_8 = '\0';
  local_10 = 0;
  uVar1 = TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildId]","%I64u",*param_1,param_1[1]);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  if (local_8 != '\0') {
    FUN_10c3da30(local_14);
  }
  return uVar1;
}



/* ===== FUN_10359660 @ 10359660  size=39 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]"" */

void __thiscall
FUN_10359660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",*param_1,param_1[1]);
  return;
}



/* ===== FUN_10359690 @ 10359690  size=138 ===== */
// calls: TdrText_FieldScalar
// strings:
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]"" */

undefined1 * __thiscall
FUN_10359690(undefined4 *param_1,undefined1 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  char local_8;
  
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    local_8 = '\0';
    local_14 = param_2;
    local_10 = 0;
    local_c = param_3;
    TdrText_FieldScalar(&local_14,param_5,param_6,"[ullGuildId]","%I64u",*param_1,param_1[1]);
    puVar1 = local_14;
    uVar2 = local_10;
    if (param_3 <= local_10) {
      uVar2 = param_3 - 1;
    }
    param_2[uVar2] = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_10;
    }
    if (local_8 != '\0') {
      FUN_10c3da30(local_14);
    }
    return puVar1;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_10359720 @ 10359720  size=87 ===== */
// calls: TdrText_FieldScalar, TdrBuf_PutNulAt
// strings:
//   "%I64u"
//   "[ullGuildId]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullGuildId]"" */

undefined1 * __thiscall
FUN_10359720(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_2 != 0) && (param_2[2] != 0)) {
    TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",*param_1,param_1[1]);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= uVar2) {
      uVar2 = uVar1 - 1;
    }
    TdrBuf_PutNulAt(uVar1,uVar2);
    return (undefined1 *)*param_2;
  }
  return &DAT_11d9d32b;
}



/* ===== FUN_1035a070 @ 1035a070  size=288 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_ArrayElemLabel
// strings:
//   "[dwErrCode]"
//   "%I64u"
//   "[ullGuildId]"
//   "[szGuildName]"
//   "[wCount]"
//   "[astGuildBoats]"

/* [RE-AUTO c0]
   strings:
     ""[dwErrCode]""
     ""%I64u""
     ""[ullGuildId]""
     ""[szGuildName]""
     ""[wCount]""
     ""[astGuildBoats]"" */

int __thiscall FUN_1035a070(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  ushort uVar3;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwErrCode]",&DAT_11d9f574,*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullGuildId]","%I64u",param_1[1],
                                    param_1[2]), iVar1 == 0)) &&
      (iVar1 = TdrText_FieldValueFmt(param_4,"[szGuildName]",param_1 + 3), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[wCount]",&DAT_11d9e0b4,
                                  *(undefined2 *)(param_1 + 0xb)), iVar1 == 0)) {
    if (300 < *(ushort *)(param_1 + 0xb)) {
      return -7;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (*(ushort *)(param_1 + 0xb) != 0) {
      do {
        iVar1 = TdrText_ArrayElemLabel(param_4,"[astGuildBoats]",uVar3,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10359ac0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar3 = uVar3 + 1;
        uVar2 = extraout_ECX;
      } while (uVar3 < *(ushort *)(param_1 + 0xb));
    }
    iVar1 = 0;
  }
  return iVar1;
}



