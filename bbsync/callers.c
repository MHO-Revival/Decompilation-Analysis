
// ===== caller of FUN_10c62470@10c62470 : FUN_10c623b0@10c623b0 =====

/* [RE-AUTO c0] */

void FUN_10c623b0(undefined4 param_1,code *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_3 + 0x2c))();
    return;
  }
  (*param_2)(param_3,local_8);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10c62550@10c62550 =====

/* [RE-AUTO c0] */

bool FUN_10c62550(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_10c62470(1,param_1);
  return cVar1 != '\0';
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10c629c0@10c629c0 =====

/* [RE-AUTO c0] */

void FUN_10c629c0(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(param_2 + 4);
  cVar2 = FUN_10c62470(1,&param_2);
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x10c629ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10d1c3e0@10d1c3e0 =====

/* [RE-AUTO c0] */

void FUN_10d1c3e0(undefined4 param_1,code *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_3 + 0x2c))();
    return;
  }
  (*param_2)(param_3,local_8);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10d1cb60@10d1cb60 =====

/* [RE-AUTO c0] */

void FUN_10d1cb60(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(param_2 + 4);
  cVar2 = FUN_10c62470(1,&param_2);
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x10d1cb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10d222f0@10d222f0 =====

/* [RE-AUTO c0] */

void FUN_10d222f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  char local_20 [16];
  char *local_10;
  char *local_c;
  char *local_8;
  
  piVar1 = param_1;
  local_8 = (char *)0x0;
  cVar2 = FUN_10c62470(1,&local_8);
  if (cVar2 != '\0') {
    local_10 = local_20;
    param_1 = (int *)CONCAT13(1,param_1._0_3_);
    local_20[0] = '\0';
    local_c = local_10;
    cVar2 = FUN_10b1f4b0(2,(int)&param_1 + 3);
    pcVar3 = local_8;
    if ((cVar2 != '\0') && (param_1._3_1_ != '\0')) {
      local_28 = local_38;
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      local_24 = local_28;
      FUN_100b62c0(local_8,pcVar4);
      FUN_10d24ec0(local_38,local_20);
      pcVar3 = local_c;
      if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_24);
        pcVar3 = local_c;
      }
    }
    FUN_1112f550(10,0,&DAT_11d9e0dc,pcVar3);
    if ((local_c != local_20) && (local_c != (char *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10d32210@10d32210 =====

/* [RE-AUTO c0] */

void FUN_10d32210(undefined4 param_1,code *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_4 + 0x2c))();
    return;
  }
  (*param_2)(param_4,local_8);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_10d3ee60@10d3ee60 =====

/* [RE-AUTO c0] */

void FUN_10d3ee60(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(param_2 + 4);
  cVar2 = FUN_10c62470(1,&param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_1101ede0@1101ede0 =====

/* [RE-AUTO c0] */

void FUN_1101ede0(undefined4 param_1,code *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_3 + 0x2c))();
    return;
  }
  (*param_2)(param_3,local_8);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_1101f1f0@1101f1f0 =====

/* [RE-AUTO c0] */

void FUN_1101f1f0(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(param_2 + 4);
  cVar2 = FUN_10c62470(1,&param_2);
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x1101f21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_11021420@11021420 =====

/* [RE-AUTO c0] */

void FUN_11021420(undefined4 param_1,code *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_3 + 0x2c))();
    return;
  }
  (*param_2)(param_3,local_8);
  return;
}


// ===== caller of FUN_10c62470@10c62470 : FUN_11021460@11021460 =====

/* [RE-AUTO c0] */

void FUN_11021460(undefined4 param_1,code *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = FUN_10c62470(1,&local_c);
  if (cVar1 != '\0') {
    cVar1 = FUN_10c623f0(2,&local_8);
    if (cVar1 != '\0') {
      (*param_2)(param_3,local_c,local_8);
      return;
    }
  }
  (**(code **)(*param_3 + 0x2c))();
  return;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : Catch@100b880d@100b880d =====

/* [RE-AUTO c0]
   calls: _CxxThrowException */

void Catch_100b880d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  if (0xf < (uint)puVar1[5]) {
    FUN_10c3d5d0(*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : Catch@1045ad6c@1045ad6c =====

/* [RE-AUTO c0]
   calls: _CxxThrowException */

void Catch_1045ad6c(void)

{
  int unaff_EBP;
  
  FUN_10c3d5d0(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_100d7c80@100d7c80 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_100d7c80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100d93e0(param_2);
  if (iVar1 != param_1) {
    iVar2 = FUN_100d86b0(iVar1,param_1 + 4,param_1 + 8,param_1 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x24);
    if ((iVar1 != iVar2 + 0x10) && (iVar1 != 0)) {
      FUN_10c3d5d0(iVar1);
    }
    if (iVar2 != 0) {
      FUN_10c3d5d0(iVar2);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    return 1;
  }
  return 0;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : Catch@10a24cdb@10a24cdb =====

/* [RE-AUTO c0]
   calls: _CxxThrowException */

void Catch_10a24cdb(void)

{
  int unaff_EBP;
  
  FUN_10c3d5d0(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : Catch@10a24e6b@10a24e6b =====

/* [RE-AUTO c0]
   calls: _CxxThrowException */

void Catch_10a24e6b(void)

{
  int unaff_EBP;
  
  FUN_10c3d5d0(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_108716d0@108716d0 =====

/* [RE-AUTO c0]
   calls: puts, exit, memmove
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_108716d0(uint *param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *_Dst;
  uint uVar5;
  size_t _Size;
  uint local_c;
  uint *local_8;
  
  uVar5 = param_5;
  uVar3 = (int)(param_1[1] - *param_1) >> 2;
  local_8 = param_1;
  local_c = param_5;
  if (0x3fffffff - uVar3 < param_5) {
    param_5 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_108747e0();
  }
  puVar1 = &param_5;
  if (uVar3 <= param_5) {
    puVar1 = &local_c;
  }
  uVar4 = *puVar1 + uVar3;
  if ((0x3fffffff < uVar4) || (uVar4 < uVar3)) {
    uVar4 = 0x3fffffff;
  }
  if (uVar4 < 0x40000000) {
    if (uVar4 == 0) {
      local_c = (int)param_2 - (int)*param_1;
      param_5 = 0;
      if (local_c == 0) {
        _Dst = (undefined4 *)0x0;
      }
      else {
        pvVar2 = memmove((void *)0x0,(void *)*param_1,local_c);
        _Dst = (undefined4 *)((int)pvVar2 + local_c);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *_Dst = *param_3;
        _Dst = _Dst + 1;
      }
      if ((param_6 == '\0') && (_Size = local_8[1] - (int)param_2, _Size != 0)) {
        pvVar2 = memmove(_Dst,param_2,_Size);
        _Dst = (undefined4 *)(_Size + (int)pvVar2);
      }
      puVar1 = local_8;
      if (*local_8 != 0) {
        FUN_10c3d5d0(*local_8);
      }
      *puVar1 = param_5;
      puVar1[1] = (uint)_Dst;
      puVar1[2] = param_5;
      return;
    }
    param_5 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar4 * 4);
  }
  param_5 = uVar3;
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_10ab5d80@10ab5d80 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10ab5d80(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((uint)(param_1[2] - iVar1 >> 2) < param_2) {
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_108747e0();
    }
    iVar2 = param_1[1];
    if (iVar1 == 0) {
      iVar3 = FUN_1086e780(param_2,&param_2);
    }
    else {
      iVar3 = FUN_10ab36d0(&param_2,iVar1,iVar2);
      if (*param_1 != 0) {
        FUN_10c3d5d0(*param_1);
      }
    }
    *param_1 = iVar3;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 2) * 4;
    param_1[2] = iVar3 + param_2 * 4;
  }
  return;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_10b4eee0@10b4eee0 =====

/* [RE-AUTO c0]
   calls: puts, exit, memmove
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_10b4eee0(uint *param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  void *pvVar7;
  uint uVar8;
  size_t _Size;
  undefined4 *_Dst;
  uint uVar9;
  uint local_c;
  uint *local_8;
  
  uVar8 = param_5;
  uVar2 = (int)(param_1[1] - *param_1) / 0x14;
  local_8 = param_1;
  local_c = param_5;
  if (0xccccccc - uVar2 < param_5) {
    param_5 = uVar2;
    FUN_10b4f210();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar6 = &param_5;
  if (uVar2 <= param_5) {
    puVar6 = &local_c;
  }
  uVar9 = *puVar6 + uVar2;
  if ((0xccccccc < uVar9) || (uVar9 < uVar2)) {
    uVar9 = 0xccccccc;
  }
  if (uVar9 < 0xccccccd) {
    if (uVar9 == 0) {
      local_c = (int)param_2 - (int)*param_1;
      param_5 = 0;
      if (local_c == 0) {
        _Dst = (undefined4 *)0x0;
      }
      else {
        pvVar7 = memmove((void *)0x0,(void *)*param_1,local_c);
        _Dst = (undefined4 *)((int)pvVar7 + local_c);
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        *_Dst = *param_3;
        _Dst[1] = uVar3;
        _Dst[2] = uVar4;
        _Dst[3] = uVar5;
        _Dst[4] = param_3[4];
        _Dst = _Dst + 5;
      }
      if ((param_6 == '\0') && (_Size = local_8[1] - (int)param_2, _Size != 0)) {
        pvVar7 = memmove(_Dst,param_2,_Size);
        _Dst = (undefined4 *)(_Size + (int)pvVar7);
      }
      puVar6 = local_8;
      if (*local_8 != 0) {
        FUN_10c3d5d0(*local_8);
      }
      puVar6[1] = (uint)_Dst;
      *puVar6 = param_5;
      puVar6[2] = param_5;
      return;
    }
    param_5 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar9 * 0x14);
  }
  param_5 = uVar2;
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_10d49dd0@10d49dd0 =====

/* [RE-AUTO c0] */

void FUN_10d49dd0(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    FUN_10d49dd0(*(undefined4 *)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 8);
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    }
    FUN_10c3d5d0(param_1);
    param_1 = iVar1;
  }
  return;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_10d49e10@10d49e10 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10d49e10(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while (param_2 != 0) {
    FUN_10d49e10(*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 8);
    piVar4 = (int *)(iVar1 + -0xc);
    if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar4);
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar2;
  }
  return param_1;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_11182d90@11182d90 =====

/* [RE-AUTO c0]
   calls: EnterCriticalSection, SetEvent, LeaveCriticalSection */

void __thiscall FUN_11182d90(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_21;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  local_10 = local_20;
  pcVar2 = param_2;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_c = local_10;
  FUN_100b62c0(param_2,pcVar3);
  iVar1 = *(int *)(param_1 + 0xc34);
  if (iVar1 == *(int *)(param_1 + 0xc38)) {
    FUN_100e2390(iVar1,local_20,&local_21,1,1);
  }
  else {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = iVar1;
      *(int *)(iVar1 + 0x14) = iVar1;
      FUN_100b62c0(local_c,local_10);
    }
    *(int *)(param_1 + 0xc34) = *(int *)(param_1 + 0xc34) + 0x18;
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  SetEvent(*(HANDLE *)(param_1 + 0xc2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_10c3d5d0@10c3d5d0 : FUN_100e2390@100e2390 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_100e2390(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined1 *param_6)

{
  uint *unaff_ESI;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined1 *puStack_34;
  undefined1 auStack_28 [3];
  undefined1 local_25;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  if ((param_3 < *param_1) || (param_1[1] <= param_3)) {
    puStack_34 = param_6;
    puStack_3c = &local_25;
    uStack_38 = param_5;
    uStack_40 = param_3;
    FUN_100e2fc0(param_2);
  }
  else {
    puStack_34 = *(undefined1 **)(param_3 + 0x10);
    local_14 = local_24;
    uStack_38 = *(uint *)(param_3 + 0x14);
    puStack_3c = (undefined1 *)0x100e23ce;
    local_10 = local_14;
    FUN_100b62c0();
    puStack_3c = param_6;
    uStack_40 = param_5;
    FUN_100e2fc0(param_2,&stack0xffffffd4,&stack0xffffffd3);
    if ((unaff_ESI != &uStack_40) && (unaff_ESI != (uint *)0x0)) {
      FUN_10c3d5d0(unaff_ESI);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_11182d90@11182d90 =====

/* [RE-AUTO c0]
   calls: EnterCriticalSection, SetEvent, LeaveCriticalSection */

void __thiscall FUN_11182d90(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_21;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  local_10 = local_20;
  pcVar2 = param_2;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_c = local_10;
  FUN_100b62c0(param_2,pcVar3);
  iVar1 = *(int *)(param_1 + 0xc34);
  if (iVar1 == *(int *)(param_1 + 0xc38)) {
    FUN_100e2390(iVar1,local_20,&local_21,1,1);
  }
  else {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = iVar1;
      *(int *)(iVar1 + 0x14) = iVar1;
      FUN_100b62c0(local_c,local_10);
    }
    *(int *)(param_1 + 0xc34) = *(int *)(param_1 + 0xc34) + 0x18;
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  SetEvent(*(HANDLE *)(param_1 + 0xc2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_100e2390@100e2390 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_100e2390(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined1 *param_6)

{
  uint *unaff_ESI;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined1 *puStack_34;
  undefined1 auStack_28 [3];
  undefined1 local_25;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  if ((param_3 < *param_1) || (param_1[1] <= param_3)) {
    puStack_34 = param_6;
    puStack_3c = &local_25;
    uStack_38 = param_5;
    uStack_40 = param_3;
    FUN_100e2fc0(param_2);
  }
  else {
    puStack_34 = *(undefined1 **)(param_3 + 0x10);
    local_14 = local_24;
    uStack_38 = *(uint *)(param_3 + 0x14);
    puStack_3c = (undefined1 *)0x100e23ce;
    local_10 = local_14;
    FUN_100b62c0();
    puStack_3c = param_6;
    uStack_40 = param_5;
    FUN_100e2fc0(param_2,&stack0xffffffd4,&stack0xffffffd3);
    if ((unaff_ESI != &uStack_40) && (unaff_ESI != (uint *)0x0)) {
      FUN_10c3d5d0(unaff_ESI);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_112a9aa0@112a9aa0 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset */

void FUN_112a9aa0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  undefined4 uStack_a6d98;
  undefined1 auStack_a6d94 [683408];
  
  memset(auStack_a6da6,0,0xa6d9c);
  uStack_a6da8 = 0x2cb;
  uStack_a6d98 = param_2;
  FUN_100ebf60(auStack_a6d94,0x191,param_1);
  piVar1 = (int *)FUN_111e0a60();
  (**(code **)(*piVar1 + 0x10))(&uStack_a6da8);
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : Tdr::UnpackNetToHost@1000b780 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-R1]
   calls: __alloca_probe, _snprintf, memset, memcpy, strnlen
   strings:
     ""; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>'s
   versionindicator""
     ""; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and
   indicator<%d> NOT less than m…"
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>,
   sizeinfo<%u>)""
     ""; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)""
     ""; has NO sapce for wstring's null: length<%d> buffer_size<%d>, start<%p> end<%p>
   custom_size<%u>)""
     ""; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>,
   net_start<%p> length<%d> siz…"
     ""; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)""
     ""; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>,
   sizeinfo<%u>)"" */

void Tdr__UnpackNetToHost(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  ushort *puVar16;
  uint *puVar17;
  uint *_Src;
  int *piVar18;
  size_t _Count;
  size_t sVar19;
  size_t sVar20;
  char *pcVar21;
  size_t sStack_180c;
  int iStack_1808;
  uint local_1804;
  uint *puStack_1800;
  uint *puStack_17fc;
  uint *puStack_17f8;
  uint uStack_17f4;
  uint *puStack_17f0;
  uint *puStack_17ec;
  uint *puStack_17e8;
  int iStack_17e4;
  int iStack_17e0;
  uint uStack_17dc;
  uint uStack_17d8;
  uint *puStack_17d4;
  uint uStack_17d0;
  uint uStack_17cc;
  uint uStack_17c8;
  uint uStack_17c4;
  int iStack_17c0;
  int *piStack_17bc;
  int local_17b8;
  int *local_17b4;
  int *local_17b0;
  uint uStack_17ac;
  undefined4 uStack_17a0;
  uint uStack_1798;
  uint uStack_1794;
  undefined4 uStack_1788;
  int aiStack_1784 [8];
  uint uStack_1764;
  int iStack_1760;
  int iStack_175c;
  byte *pbStack_1758;
  uint *puStack_1754;
  uint *puStack_1750;
  undefined4 uStack_174c;
  int aiStack_16a4 [1448];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&sStack_180c;
  local_17b8 = param_1;
  local_17b4 = param_2;
  local_17b0 = param_3;
  local_1804 = 0;
  puVar4 = (undefined1 *)FUN_1000f910();
  *puVar4 = 0;
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) || (param_3 == (int *)0x0)) ||
     (param_2 == (int *)0x0)) {
    pcVar21 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar20 = 0x400;
    pcVar6 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_3,param_2);
    _snprintf(pcVar6,sVar20,pcVar21);
    FUN_11a89daa();
    return;
  }
  _Src = (uint *)*param_3;
  if (_Src != (uint *)0x0) {
    puStack_17f8 = (uint *)param_3[1];
    if ((puStack_17f8 != (uint *)0x0) && (iVar11 = *param_2, iVar11 != 0)) {
      puStack_17fc = (uint *)param_2[1];
      if (puStack_17fc != (uint *)0x0) {
        if ((param_4 == 0) || (uVar7 = *(uint *)(param_1 + 0xc), (int)uVar7 < (int)param_4)) {
          uVar7 = *(uint *)(param_1 + 0xc);
          param_4 = uVar7;
        }
        if (((int)param_4 < *(int *)(param_1 + 8)) || ((int)uVar7 < (int)param_4)) {
          uVar5 = FUN_10003330(param_1);
          pcVar21 = 
          "; invalid parameter: expect a_iVersion<%d> in [base_ver<%d>, cur_ver<%d>] of meta<%s>";
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; invalid parameter: expect a_iVersion<%d> in [base_ver<%d>, cur_ver<%d>] of meta<%s>"
                                        ,param_4,*(undefined4 *)(param_1 + 8),
                                        *(undefined4 *)(param_1 + 0xc),uVar5);
          _snprintf(pcVar6,sVar20,pcVar21);
        }
        else {
          iVar14 = *(int *)(param_1 + 0x74);
          if ((iVar14 == 0) || (*(int *)(param_1 + 0x58) <= (int)param_4)) {
            puStack_17e8 = (uint *)((int)puStack_17f8 + (int)_Src);
            iStack_17c0 = (param_1 - *(int *)(param_1 + 0x3c)) + -0x114;
            pbStack_1758 = (byte *)((int)puStack_17fc + iVar11);
            aiStack_1784[5] = *(int *)(param_1 + 100);
            iStack_1808 = param_1;
            piStack_17bc = aiStack_1784;
            aiStack_1784[0] = param_1;
            aiStack_1784[3] = 1;
            aiStack_1784[4] = 0;
            puStack_1754 = _Src;
            iStack_175c = iVar11;
            if (aiStack_1784[5] == 0) {
              aiStack_1784[5] = 0;
              aiStack_1784[6] = 0;
              puStack_1750 = (uint *)0x0;
            }
            else if (*(int *)(param_1 + 0x68) == -1) {
              puStack_1750 = (uint *)(*(int *)(param_1 + 0x5c) + (int)_Src);
            }
            else {
              puStack_1750 = _Src;
              _Src = (uint *)((int)_Src + aiStack_1784[5]);
            }
            if (iVar14 == 0) {
              uStack_1764 = param_4;
              goto LAB_1000bb1f;
            }
            puStack_17f8 = (uint *)(*(int *)(param_1 + 0x6c) + (int)_Src);
            if ((int)puStack_17e8 - (int)puStack_17f8 < iVar14) {
LAB_1000ba9b:
              uStack_1764 = param_4;
              uVar7 = param_4;
            }
            else {
              if (iVar14 == 2) {
                uStack_1764 = ((ushort)*puStack_17f8 & 0xff) << 8 |
                              (uint)(ushort)((ushort)*puStack_17f8 >> 8);
LAB_1000ba89:
                uStack_17c4 = (int)uStack_1764 >> 0x1f;
              }
              else {
                if (iVar14 == 4) {
                  uVar7 = *puStack_17f8;
                  uStack_1764 = uVar7 >> 8 & 0xff00 | (uint)*(byte *)((int)puStack_17f8 + 3) |
                                (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
                  goto LAB_1000ba89;
                }
                if (iVar14 != 8) {
                  uStack_1764 = (uint)(byte)*puStack_17f8;
                  goto LAB_1000ba89;
                }
                uStack_17dc = *puStack_17f8;
                uStack_17d8 = puStack_17f8[1];
                uStack_1764 = (uStack_17d8 >> 0x10 & 0xff | uStack_17d8 & 0xff00) << 8 |
                              uStack_17d8 << 0x18 | (uint)*(byte *)((int)puStack_17f8 + 7);
                uStack_17c8 = uStack_1764;
                uStack_17c4 = (uStack_17dc << 0x10 |
                              ((uStack_17dc & 0xff00) << 0x10 | uStack_17dc & 0xff0000) >> 0x10) <<
                              8 | uStack_17dc >> 0x18;
                param_1 = local_17b8;
              }
              uVar7 = uStack_1764;
              if (uStack_1764 == 0) goto LAB_1000ba9b;
            }
            uStack_1764 = uVar7;
            if (((*(int *)(param_1 + 8) <= (int)uVar7) && ((int)uVar7 <= *(int *)(param_1 + 0xc)))
               && (*(int *)(param_1 + 0x58) <= (int)uVar7)) {
LAB_1000bb1f:
              iStack_17e0 = 1;
              iStack_1760 = 0;
              uStack_174c = 1;
              aiStack_1784[1] = 0;
              iStack_17e4 = 0;
              piVar15 = aiStack_1784;
LAB_1000bb50:
              iVar11 = iStack_1808;
              if (iStack_17e4 != 0) {
                iVar14 = piVar15[5];
                iStack_17e4 = 0;
                if (iVar14 != 0) {
                  if (iVar14 == 2) {
                    uVar7 = (*(ushort *)piVar15[0xd] & 0xff) << 8 |
                            (uint)(*(ushort *)piVar15[0xd] >> 8);
LAB_1000bc8b:
                    uStack_17f4 = (int)uVar7 >> 0x1f;
                  }
                  else {
                    if (iVar14 == 4) {
                      uVar7 = *(uint *)piVar15[0xd];
                      uVar7 = uVar7 >> 8 & 0xff00 | (uint)*(byte *)(piVar15[0xd] + 3) |
                              (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
                      goto LAB_1000bc8b;
                    }
                    if (iVar14 != 8) {
                      uVar7 = (uint)*(byte *)piVar15[0xd];
                      goto LAB_1000bc8b;
                    }
                    uVar12 = *(uint *)piVar15[0xd];
                    uStack_1798 = ((uint *)piVar15[0xd])[1];
                    puStack_17f8 = (uint *)0x0;
                    uVar7 = (uStack_1798 >> 0x10 & 0xff | uStack_1798 & 0xff00) << 8 |
                            uStack_1798 << 0x18 | (uint)*(byte *)(piVar15[0xd] + 7);
                    uStack_17ac = uVar7;
                    uStack_17f4 = (uVar12 << 0x10 |
                                  ((uVar12 & 0xff00) << 0x10 | uVar12 & 0xff0000) >> 0x10) << 8 |
                                  uVar12 >> 0x18;
                  }
                  _Src = (uint *)(piVar15[0xc] + uVar7);
                  if (puStack_17e8 < _Src) {
                    uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                    uVar5 = FUN_10004f00(piVar15[1],uVar5);
                    pcVar21 = 
                    "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> sizeinfo<%d> entry<%s> meta<%s> unpacked_entry_count<%d>"
                    ;
                    sVar20 = 0x400;
                    pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> sizeinfo<%d> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                  ,_Src,puStack_17e8,uVar7,uVar5);
                    _snprintf(pcVar6,sVar20,pcVar21);
                    local_1804 = 0x82010402;
                    goto LAB_1000ce7e;
                  }
                }
                if (0 < piVar15[3]) {
                  if (piVar15[5] != 0) {
                    iVar14 = piVar15[6];
                    if (iVar14 < 0) {
                      piVar15[0xd] = (int)_Src;
                      _Src = (uint *)((int)_Src - iVar14);
                    }
                    else {
                      piVar15[0xd] = (int)(iVar14 + (int)_Src);
                    }
                  }
                  piVar15[0xc] = (int)_Src;
                }
                if (1 < iStack_17e0) {
                  if ((*(byte *)(piVar15[1] + 0x44) & 4) == 0) {
                    piVar15[-0x26] = piVar15[-0x26] + *(int *)(iStack_1808 + 0x1c);
                  }
                  else {
                    piVar15[-0x26] = piVar15[-0x26] + *(int *)(piVar15[1] + 0x18);
                  }
                  piVar15[9] = 0;
                }
              }
              iVar1 = local_17b8;
              iVar14 = piVar15[3];
              if (iVar14 < 1) {
                iStack_17e0 = iStack_17e0 + -1;
                piVar18 = piVar15 + -0x2f;
                piStack_17bc = piVar18;
                if (0 < iStack_17e0) {
                  iVar11 = *piVar18;
                  iStack_1808 = iVar11;
                  if (*(int *)(iVar11 + 0x10) == 0) {
                    iVar11 = *(int *)(iVar11 + 0x1c);
                    piVar15[-0x2c] = piVar15[-0x2c] + -1;
                    piVar15[-0x25] = piVar15[-0x25] + iVar11;
                    iStack_17e4 = piVar15[-0x21];
                  }
                  else {
                    piVar15[-0x2b] = piVar15[-0x2b] + 1;
                    if (*(int *)(iVar11 + 0x2c) <= piVar15[-0x2b]) {
                      iVar11 = *(int *)(iVar11 + 0x1c);
                      piVar15[-0x2c] = piVar15[-0x2c] + -1;
                      piVar15[-0x25] = piVar15[-0x25] + iVar11;
                      piVar15[-0x2b] = 0;
                      iStack_17e4 = piVar15[-0x21];
                    }
                  }
                  goto LAB_1000ccb0;
                }
              }
              else {
                iVar2 = piVar15[4];
                sVar20 = iVar2 * 0xb4 + 0xb8 + iVar11;
                sStack_180c = sVar20;
                piVar18 = piVar15;
                if ((*(ushort *)(sVar20 + 0x44) & 2) != 0) {
                  if (*(int *)(iVar11 + 0x10) == 0) {
                    piVar15[10] = piVar15[10] + *(int *)(iVar11 + 0x1c);
                    piVar15[3] = iVar14 + -1;
                    iStack_17e4 = piVar15[0xe];
                  }
                  else {
                    iVar1 = *(int *)(iVar11 + 0x2c);
                    piVar15[4] = iVar2 + 1;
                    if (iVar1 <= iVar2 + 1) {
                      piVar15[10] = piVar15[10] + *(int *)(iVar11 + 0x1c);
                      piVar15[4] = 0;
                      piVar15[3] = iVar14 + -1;
                      iStack_17e4 = piVar15[0xe];
                    }
                  }
                  goto LAB_1000ccb0;
                }
                iVar11 = *(int *)(sVar20 + 0x58);
                if (iVar11 == 0) {
                  puStack_17f0 = *(uint **)(sVar20 + 0x24);
                }
                else {
                  puVar16 = (ushort *)(*(int *)(sVar20 + 0x5c) + piVar15[10]);
                  if (iVar11 == 2) {
                    uStack_17f4 = 0;
                    puStack_17f0 = (uint *)(uint)*puVar16;
                  }
                  else if (iVar11 == 4) {
                    uStack_17f4 = (int)*(uint **)puVar16 >> 0x1f;
                    puStack_17f0 = *(uint **)puVar16;
                  }
                  else if (iVar11 == 8) {
                    uStack_17f4 = *(uint *)(puVar16 + 2);
                    puStack_17f0 = *(uint **)puVar16;
                  }
                  else {
                    uStack_17f4 = 0;
                    puStack_17f0 = (uint *)(uint)(byte)*puVar16;
                  }
                }
                puVar17 = puStack_17f0;
                if (((int)puStack_17f0 < 0) ||
                   ((*(int *)(sVar20 + 0x24) < (int)puStack_17f0 && (0 < *(int *)(sVar20 + 0x24)))))
                {
                  uVar5 = FUN_10003330(iStack_1808);
                  uVar5 = FUN_10004f00(sVar20,uVar5);
                  pcVar21 = 
                  "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                  ;
                  sVar19 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                                                ,puVar17,*(undefined4 *)(sVar20 + 0x24),uVar5);
                  _snprintf(pcVar6,sVar19,pcVar21);
                  local_1804 = 0x82010403;
                  piVar15[9] = *(int *)(sVar20 + 0x2c);
                }
                else {
                  if (puStack_17f0 == (uint *)0x0) {
                    if (*(int *)(iStack_1808 + 0x10) == 0) {
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = piVar15[10] + *(int *)(iStack_1808 + 0x1c);
                      iStack_17e4 = piVar15[0xe];
                    }
                    else {
                      iVar11 = *(int *)(iStack_1808 + 0x2c);
                      piVar15[4] = iVar2 + 1;
                      if (iVar11 <= iVar2 + 1) {
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[10] = piVar15[10] + *(int *)(iStack_1808 + 0x1c);
                        piVar15[4] = 0;
                        iStack_17e4 = piVar15[0xe];
                      }
                    }
                    goto LAB_1000ccb0;
                  }
                  puStack_17ec = (uint *)(*(int *)(sVar20 + 0x2c) + piVar15[10]);
                  if ((*(ushort *)(sVar20 + 0x44) & 4) == 0) {
                    puStack_17d4 = (uint *)piVar15[0xb];
                  }
                  else {
                    puStack_17ec = (uint *)*puStack_17ec;
                    if (*(int *)(sVar20 + 8) < 2) {
                      puStack_17d4 = (uint *)(*(int *)(*(int *)(sVar20 + 0x78) + 0x130 + iStack_17c0
                                                      ) + (int)puStack_17ec);
                    }
                    else {
                      puStack_17d4 = (uint *)(*(int *)(sVar20 + 0x14) + (int)puStack_17ec);
                    }
                  }
                  puVar17 = puStack_17ec;
                  if (piVar15[8] < *(int *)(sVar20 + 4)) {
                    if (*(int *)(sVar20 + 0x98) == -1) {
                      iVar11 = *(int *)(sVar20 + 0x20);
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 0x18);
                      }
                      sStack_180c = iVar11 * (int)puStack_17f0;
                      if ((int)puStack_17d4 - (int)puStack_17ec < (int)sStack_180c) {
                        local_1804 = 0x82010407;
                        puVar17 = (uint *)((int)puStack_17ec + sStack_180c);
                      }
                      else {
                        memset(puStack_17ec,0,sStack_180c);
                        puVar17 = (uint *)((int)puVar17 + sStack_180c);
                      }
                    }
                    else {
                      if ((*(int *)(sVar20 + 8) == 0x15) || (*(int *)(sVar20 + 8) == 0x16)) {
                        sStack_180c = *(size_t *)(sVar20 + 0x20);
                        if (sStack_180c == 0) {
                          sStack_180c = (int)puStack_17d4 - (int)puStack_17ec;
                        }
                      }
                      else {
                        sStack_180c = *(size_t *)(sVar20 + 0x18);
                      }
                      sVar19 = (int)puStack_17d4 - (int)puStack_17ec;
                      if ((int)sVar19 < (int)sStack_180c) {
                        sStack_180c = sVar19;
                      }
                      uVar7 = *(uint *)(sVar20 + 0x8c);
                      if ((int)sStack_180c < (int)uVar7) {
                        local_1804 = 0x82010407;
                      }
                      else {
                        puStack_17f8 = (uint *)(*(int *)(sVar20 + 0x98) + 0x114 + iStack_17c0);
                        if (0 < (int)puStack_17f0) {
                          puStack_17fc = puStack_17f0;
                          do {
                            if (uVar7 < 0x41) {
                              uVar12 = 0;
                              puVar13 = puStack_17f8;
                              if (uVar7 != 0) {
                                do {
                                  *(byte *)puVar17 = (byte)*puVar13;
                                  uVar12 = uVar12 + 1;
                                  puVar17 = (uint *)((int)puVar17 + 1);
                                  puVar13 = (uint *)((int)puVar13 + 1);
                                } while (uVar12 < *(uint *)(sVar20 + 0x8c));
                              }
                            }
                            else {
                              memcpy(puVar17,puStack_17f8,uVar7);
                              puVar17 = (uint *)((int)puVar17 + *(int *)(sVar20 + 0x8c));
                            }
                            uVar7 = *(uint *)(sVar20 + 0x8c);
                            puVar17 = (uint *)((int)puVar17 + (sStack_180c - uVar7));
                            puStack_17fc = (uint *)((int)puStack_17fc + -1);
                          } while (puStack_17fc != (uint *)0x0);
                        }
                      }
                    }
                    if ((local_1804 & 0x80000000) == 0) {
                      if (*(int *)(iStack_1808 + 0x10) == 0) {
                        iVar11 = *(int *)(iStack_1808 + 0x1c);
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[10] = iVar11 + piVar15[10];
                        iStack_17e4 = piVar15[0xe];
                      }
                      else {
                        iVar14 = piVar15[4];
                        iVar11 = *(int *)(iStack_1808 + 0x2c);
                        piVar15[4] = iVar14 + 1;
                        if (iVar11 <= iVar14 + 1) {
                          iVar11 = *(int *)(iStack_1808 + 0x1c);
                          piVar15[3] = piVar15[3] + -1;
                          piVar15[4] = 0;
                          piVar15[10] = iVar11 + piVar15[10];
                          iStack_17e4 = piVar15[0xe];
                        }
                      }
                      goto LAB_1000ccb0;
                    }
                    uVar5 = FUN_10003330(iStack_1808,puVar17,puStack_17d4);
                    uVar5 = FUN_10004f00(sVar20,puStack_17f0,uVar5);
                    pcVar21 = 
                    "; failed to set default value, entry<%s>, count<%d>, meta<%s>, pszHostStart<%p>, pszHostEnd<%p>"
                    ;
                    sVar19 = 0x400;
                    pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; failed to set default value, entry<%s>, count<%d>, meta<%s>, pszHostStart<%p>, pszHostEnd<%p>"
                                                  ,uVar5);
                    _snprintf(pcVar6,sVar19,pcVar21);
                    piVar15[9] = *(int *)(sVar20 + 0x2c);
                  }
                  else {
                    iVar11 = *(int *)(sVar20 + 8);
                    if (1 < iVar11) {
                      if (iVar11 == 0x15) {
                        puStack_17f8 = (uint *)0x0;
                        if (0 < (int)puStack_17f0) {
                          do {
                            puVar17 = puStack_17ec;
                            puStack_1800 = *(uint **)(sStack_180c + 0x20);
                            if (puStack_1800 == (uint *)0x0) {
                              puStack_1800 = (uint *)((int)puStack_17d4 - (int)puStack_17ec);
                            }
                            iVar11 = *(int *)(sStack_180c + 0x50);
                            puVar13 = (uint *)(iVar11 + (int)_Src);
                            puStack_17fc = puVar13;
                            if (puStack_17e8 <= puVar13) goto LAB_1000c72d;
                            if (iVar11 == 2) {
                              puVar8 = (uint *)(((ushort)*_Src & 0xff) << 8 |
                                               (uint)(ushort)((ushort)*_Src >> 8));
LAB_1000c674:
                              uVar7 = (int)puVar8 >> 0x1f;
                            }
                            else {
                              if (iVar11 == 4) {
                                uVar7 = *_Src;
                                puVar8 = (uint *)(uVar7 >> 8 & 0xff00 |
                                                  (uint)*(byte *)((int)_Src + 3) |
                                                 (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
                                goto LAB_1000c674;
                              }
                              if (iVar11 != 8) {
                                puVar8 = (uint *)(uint)(byte)*_Src;
                                goto LAB_1000c674;
                              }
                              uStack_17d0 = *_Src;
                              uStack_17cc = _Src[1];
                              puVar8 = (uint *)((uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00)
                                                << 8 | uStack_17cc << 0x18 |
                                               (uint)*(byte *)((int)_Src + 7));
                              uStack_17a0 = 0;
                              uVar7 = (uStack_17d0 << 0x10 |
                                      ((uStack_17d0 & 0xff00) << 0x10 | uStack_17d0 & 0xff0000) >>
                                      0x10) << 8 | uStack_17d0 >> 0x18;
                            }
                            if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (puVar8 == (uint *)0x0)))) {
                              pcVar21 = 
                              "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer string length error: expect length<%d> >= min_string_len<1>, start<%p>, sizeinfo<%u>)"
                                                  ,puVar8,_Src,*(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            puVar10 = (uint *)(*(int *)(sStack_180c + 0x50) + (int)puVar8);
                            if ((int)puStack_17e8 - (int)_Src < (int)puVar10) {
                              uVar5 = *(undefined4 *)(sStack_180c + 0x50);
                              puStack_17ec = puVar10;
                              goto LAB_1000c4b6;
                            }
                            if (((int)puStack_1800 >> 0x1f < (int)uVar7) ||
                               (((int)puStack_1800 >> 0x1f <= (int)uVar7 && (puStack_1800 < puVar8))
                               )) {
                              pcVar21 = 
                              "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                              ;
                              sVar20 = 0x400;
                              puStack_17ec = puVar10;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; has NO sapce for string\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                                  ,puVar8,puStack_1800,_Src,puStack_17e8,
                                                  *(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if (((byte *)((int)puVar10 + -1))[(int)_Src] != 0) {
                              iVar11 = *(int *)(sStack_180c + 0x50);
                              uVar7 = (uint)(char)((byte *)((int)puVar8 + iVar11 + -1))[(int)_Src];
                              pcVar6 = 
                              "; string from net-buffer format error: expect last_char_of_string<%d> is null_char<0>, net_start<%p> length<%d> sizeinfo<%u>"
                              ;
                              puStack_17ec = puVar10;
                              goto LAB_1000c7ed;
                            }
                            _Src = puVar13;
                            puVar3 = puVar8;
                            if (puVar8 < (uint *)0x41) {
                              for (; puVar3 != (uint *)0x0; puVar3 = (uint *)((int)puVar3 + -1)) {
                                *(byte *)puStack_17ec = (byte)*_Src;
                                puStack_17ec = (uint *)((int)puStack_17ec + 1);
                                _Src = (uint *)((int)_Src + 1);
                              }
                            }
                            else {
                              puStack_17ec = puVar10;
                              memcpy(puVar17,puVar13,(size_t)puVar8);
                              _Src = (uint *)((int)puVar13 + (int)puVar8);
                              puStack_17ec = (uint *)((int)puVar17 + (int)puVar8);
                            }
                            puVar17 = (uint *)((int)puStack_17ec + ((int)puStack_1800 - (int)puVar8)
                                              );
                            puStack_17f8 = (uint *)((int)puStack_17f8 + 1);
                            puStack_17ec = puVar17;
                            sVar20 = sStack_180c;
                          } while ((int)puStack_17f8 < (int)puStack_17f0);
                        }
                      }
                      else if (iVar11 == 0x16) {
                        puStack_17f8 = (uint *)0x0;
                        if (0 < (int)puStack_17f0) {
                          do {
                            puVar17 = puStack_17ec;
                            puStack_1800 = *(uint **)(sStack_180c + 0x20);
                            if (puStack_1800 == (uint *)0x0) {
                              puStack_1800 = (uint *)((int)puStack_17d4 - (int)puStack_17ec);
                            }
                            iVar11 = *(int *)(sStack_180c + 0x50);
                            puVar13 = (uint *)(iVar11 + (int)_Src);
                            puStack_17fc = puVar13;
                            if (puStack_17e8 <= puVar13) goto LAB_1000c72d;
                            if (iVar11 == 2) {
                              puVar8 = (uint *)(((ushort)*_Src & 0xff) << 8 |
                                               (uint)(ushort)((ushort)*_Src >> 8));
LAB_1000c3c2:
                              uVar7 = (int)puVar8 >> 0x1f;
                            }
                            else {
                              if (iVar11 == 4) {
                                uVar7 = *_Src;
                                puVar8 = (uint *)(uVar7 >> 8 & 0xff00 |
                                                  (uint)*(byte *)((int)_Src + 3) |
                                                 (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
                                goto LAB_1000c3c2;
                              }
                              if (iVar11 != 8) {
                                puVar8 = (uint *)(uint)(byte)*_Src;
                                goto LAB_1000c3c2;
                              }
                              uStack_17d0 = *_Src;
                              uStack_17cc = _Src[1];
                              puVar8 = (uint *)((uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00)
                                                << 8 | uStack_17cc << 0x18 |
                                               (uint)*(byte *)((int)_Src + 7));
                              uStack_1788 = 0;
                              uVar7 = (uStack_17d0 << 0x10 |
                                      ((uStack_17d0 & 0xff00) << 0x10 | uStack_17d0 & 0xff0000) >>
                                      0x10) << 8 | uStack_17d0 >> 0x18;
                            }
                            if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (puVar8 < (uint *)0x2)))) {
                              pcVar21 = 
                              "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer wstring length error: expect length<%d> >= min_wstring_len<2>, start<%p>, sizeinfo<%u>)"
                                                  ,puVar8,_Src,*(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            pbVar9 = (byte *)(*(int *)(sStack_180c + 0x50) + (int)puVar8);
                            if ((int)puStack_17e8 - (int)_Src < (int)pbVar9) {
                              uVar5 = *(undefined4 *)(sStack_180c + 0x50);
LAB_1000c4b6:
                              pcVar21 = 
                              "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: expect (end<%p> - start<%p>) >= (length<%d> + sizeinfo<%u>)"
                                                  ,puStack_17e8,_Src,puVar8,uVar5);
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010402;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if ((0 < (int)uVar7) || ((-1 < (int)uVar7 && (puStack_1800 < puVar8))))
                            {
                              pcVar21 = 
                              "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                              ;
                              sVar20 = 0x400;
                              pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; has NO sapce for wstring\'s null: length<%d> buffer_size<%d>, start<%p> end<%p> custom_size<%u>)"
                                                  ,puVar8,puStack_1800,_Src,puStack_17e8,
                                                  *(undefined4 *)(sStack_180c + 0x50));
                              _snprintf(pcVar6,sVar20,pcVar21);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            if (*(short *)(pbVar9 + -2 + (int)_Src) != 0) {
                              iVar11 = *(int *)(sStack_180c + 0x50);
                              uVar7 = (uint)*(ushort *)
                                             ((byte *)((int)puVar8 + iVar11 + -2) + (int)_Src);
                              pcVar6 = 
                              "; wstring from net-buffer format error: expect last_char_of_wstring<%hu> is null_wchar<0>, net_start<%p> length<%d> sizeinfo<%u>"
                              ;
LAB_1000c7ed:
                              sVar20 = 0x400;
                              pcVar21 = (char *)FUN_1000f910(0x400,pcVar6,uVar7,_Src,puVar8,iVar11);
                              _snprintf(pcVar21,sVar20,pcVar6);
                              local_1804 = 0x82010406;
                              sVar20 = sStack_180c;
                              break;
                            }
                            _Src = puVar13;
                            puVar10 = puVar8;
                            if (puVar8 < (uint *)0x41) {
                              for (; puVar10 != (uint *)0x0; puVar10 = (uint *)((int)puVar10 + -1))
                              {
                                *(byte *)puStack_17ec = (byte)*_Src;
                                puStack_17ec = (uint *)((int)puStack_17ec + 1);
                                _Src = (uint *)((int)_Src + 1);
                              }
                            }
                            else {
                              memcpy(puStack_17ec,puVar13,(size_t)puVar8);
                              _Src = (uint *)((int)puVar13 + (int)puVar8);
                              puStack_17ec = (uint *)((int)puVar17 + (int)puVar8);
                            }
                            puStack_17f8 = (uint *)((int)puStack_17f8 + 1);
                            puVar17 = (uint *)((int)puStack_17ec + ((int)puStack_1800 - (int)puVar8)
                                              );
                            puStack_17ec = puVar17;
                            sVar20 = sStack_180c;
                          } while ((int)puStack_17f8 < (int)puStack_17f0);
                        }
                      }
                      else if (puStack_17d4 <
                               (uint *)(*(int *)(sVar20 + 0x18) * (int)puStack_17f0 +
                                       (int)puStack_17ec)) {
                        pcVar21 = 
                        "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                        ;
                        sVar19 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                                  ,puStack_17ec,puStack_17d4,*(int *)(sVar20 + 0x18)
                                                  ,puStack_17f0);
                        _snprintf(pcVar6,sVar19,pcVar21);
                        local_1804 = 0x82010407;
                      }
                      else {
                        iVar11 = *(int *)(sVar20 + 0x1c);
                        if (puStack_17e8 < (uint *)(iVar11 * (int)puStack_17f0 + (int)_Src)) {
                          pcVar21 = 
                          "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                          ;
                          sVar19 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                                                  ,_Src,puStack_17e8,iVar11,puStack_17f0);
                          _snprintf(pcVar6,sVar19,pcVar21);
                          local_1804 = 0x82010402;
                        }
                        else if (iVar11 == 1) {
                          puVar13 = puStack_17f0;
                          if ((int)puStack_17f0 < 0x41) {
                            for (; puVar13 != (uint *)0x0; puVar13 = (uint *)((int)puVar13 + -1)) {
                              *(byte *)puVar17 = (byte)*_Src;
                              _Src = (uint *)((int)_Src + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                            }
                          }
                          else {
                            memcpy(puStack_17ec,_Src,(size_t)puStack_17f0);
                            _Src = (uint *)((int)_Src + (int)puStack_17f0);
                            puVar17 = (uint *)((int)puVar17 + (int)puStack_17f0);
                          }
                        }
                        else if (iVar11 == 2) {
                          puVar13 = puStack_17f0;
                          if (0 < (int)puStack_17f0) {
                            do {
                              *(ushort *)puVar17 =
                                   (ushort)*(byte *)((int)_Src + 1) | (ushort)*_Src << 8;
                              puVar17 = (uint *)((int)puVar17 + 2);
                              _Src = (uint *)((int)_Src + 2);
                              puVar13 = (uint *)((int)puVar13 + -1);
                            } while (puVar13 != (uint *)0x0);
                          }
                        }
                        else if (iVar11 == 4) {
                          if (0 < (int)puStack_17f0) {
                            puStack_17fc = puStack_17f0;
                            do {
                              uVar7 = *_Src;
                              *puVar17 = (uVar7 << 0x10 | uVar7 & 0xff00) << 8 | uVar7 >> 8 & 0xff00
                                         | (uint)*(byte *)((int)_Src + 3);
                              puVar17 = puVar17 + 1;
                              _Src = _Src + 1;
                              puStack_17fc = (uint *)((int)puStack_17fc + -1);
                            } while (puStack_17fc != (uint *)0x0);
                          }
                        }
                        else if (0 < (int)puStack_17f0) {
                          puStack_17fc = puStack_17f0;
                          do {
                            uVar7 = *_Src;
                            uStack_17cc = _Src[1];
                            *puStack_17ec =
                                 (uStack_17cc >> 0x10 & 0xff | uStack_17cc & 0xff00) << 8 |
                                 uStack_17cc << 0x18 | (uint)*(byte *)((int)_Src + 7);
                            puStack_17ec[1] =
                                 (uVar7 << 0x10 |
                                 ((uVar7 & 0xff00) << 0x10 | uVar7 & 0xff0000) >> 0x10) << 8 |
                                 uVar7 >> 0x18;
                            puVar17 = puStack_17ec + 2;
                            _Src = _Src + 2;
                            puStack_17fc = (uint *)((int)puStack_17fc + -1);
                            puStack_17ec = puVar17;
                            piVar15 = piStack_17bc;
                          } while (puStack_17fc != (uint *)0x0);
                        }
                      }
                      goto LAB_1000c80d;
                    }
                    if (iStack_17e0 < 0x20) {
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 100);
                        puVar13 = (uint *)(*(int *)(sVar20 + 0x68) + piVar15[10]);
                        if (iVar11 == 2) {
                          uStack_17dc = (uint)(ushort)*puVar13;
LAB_1000c8d0:
                          uStack_17d8 = (int)uStack_17dc >> 0x1f;
                        }
                        else {
                          if (iVar11 == 4) {
                            uStack_17dc = *puVar13;
                            goto LAB_1000c8d0;
                          }
                          if (iVar11 != 8) {
                            uStack_17dc = (uint)(byte)*puVar13;
                            goto LAB_1000c8d0;
                          }
                          uStack_17d8 = puVar13[1];
                          uStack_17dc = *puVar13;
                        }
                        iStack_1808 = *(int *)(sVar20 + 0x78) + 0x114 + iStack_17c0;
                        puVar13 = (uint *)(iStack_1808 + 0x134);
                        puStack_17fc = puVar13;
                        puStack_17ec = (uint *)(((int)*puVar13 < *(int *)(iStack_1808 + 0x138)) - 1)
                        ;
                        puVar8 = (uint *)(uStack_17dc - *(int *)(iStack_1808 + 0x138));
                        puStack_1800 = puVar8;
                        if (((int)puVar8 < 0) || (*(int *)(iStack_1808 + 0x2c) <= (int)puVar8)) {
LAB_1000c94c:
                          if (*(int *)(iStack_1808 + 0x2c) < 0x10) {
                            puStack_1800 = (uint *)0x0;
                            if (0 < *(int *)(iStack_1808 + 0x2c)) {
                              do {
                                if (((int)puVar13[1] <= (int)uStack_17dc) &&
                                   ((int)uStack_17dc <= (int)*puVar13)) {
                                  puStack_17ec = puStack_1800;
                                  break;
                                }
                                puStack_1800 = (uint *)((int)puStack_1800 + 1);
                                puVar13 = puVar13 + 0x2d;
                                puStack_17f8 = puVar13;
                              } while ((int)puStack_1800 < *(int *)(iStack_1808 + 0x2c));
                            }
                          }
                          else {
                            puStack_1800 = (uint *)(*(int *)(iStack_1808 + 0x2c) + -1);
                            puStack_17fc = (uint *)0x0;
                            if (-1 < (int)puStack_1800) {
                              do {
                                puVar8 = (uint *)((int)((int)puStack_17fc + (int)puStack_1800) >> 1)
                                ;
                                iVar14 = iStack_1808 + (int)puVar8 * 0xb4;
                                iVar11 = *(int *)(iVar14 + 0x138);
                                puStack_17f8 = *(uint **)(iVar14 + 0x134);
                                if ((int)puStack_17f8 < iVar11) {
LAB_1000c9f3:
                                  puStack_17fc = (uint *)((int)puVar8 + 1);
                                }
                                else {
                                  if (iVar11 <= (int)uStack_17dc) {
                                    if ((int)puStack_17f8 < (int)uStack_17dc) goto LAB_1000c9f3;
                                    goto LAB_1000ca0a;
                                  }
                                  puStack_1800 = (uint *)((int)puVar8 + -1);
                                }
                              } while ((int)puStack_17fc <= (int)puStack_1800);
                            }
                          }
                        }
                        else {
                          puStack_17f8 = (uint *)((int)puVar8 * 0xb4 + iStack_1808);
                          if ((puStack_17f8[0x4e] != uStack_17dc) ||
                             ((int)puStack_17f8[0x4d] < (int)puStack_17f8[0x4e])) goto LAB_1000c94c;
LAB_1000ca0a:
                          puStack_17ec = puVar8;
                        }
                        if ((puStack_17ec == (uint *)0xffffffff) ||
                           (puVar13 = puStack_17ec,
                           piVar15[8] < *(int *)((int)puStack_17ec * 0xb4 + 0xbc + iStack_1808))) {
                          iStack_1808 = *piVar15;
                          if (*(int *)(iStack_1808 + 0x10) == 0) {
                            iVar11 = *(int *)(iStack_1808 + 0x1c);
                            piVar15[3] = piVar15[3] + -1;
                            piVar15[10] = iVar11 + piVar15[10];
                            iStack_17e4 = piVar15[0xe];
                          }
                          else {
                            iVar14 = piVar15[4];
                            iVar11 = *(int *)(iStack_1808 + 0x2c);
                            piVar15[4] = iVar14 + 1;
                            if (iVar11 <= iVar14 + 1) {
                              piVar15[3] = piVar15[3] + -1;
                              iVar11 = *(int *)(iStack_1808 + 0x1c);
                              piVar15[4] = 0;
                              piVar15[10] = iVar11 + piVar15[10];
                              iStack_17e4 = piVar15[0xe];
                            }
                          }
                          goto LAB_1000ccb0;
                        }
                      }
                      else {
                        iStack_1808 = *(int *)(sVar20 + 0x78) + 0x114 + iStack_17c0;
                        puVar13 = (uint *)0x0;
                      }
                      iStack_17e0 = iStack_17e0 + 1;
                      piVar18 = piVar15 + 0x2f;
                      piVar15[0x33] = (int)puVar13;
                      iVar11 = *(int *)(iStack_1808 + 100);
                      piStack_17bc = piVar18;
                      piVar15[0x38] = 0;
                      *piVar18 = iStack_1808;
                      piVar15[0x32] = (int)puStack_17f0;
                      piVar15[0x39] = (int)puVar17;
                      piVar15[0x3b] = (int)_Src;
                      if (iVar11 == 0) {
                        iVar11 = *(int *)(sVar20 + 0x50);
                        if (iVar11 == 0) {
                          piVar15[0x34] = 0;
                        }
                        else {
                          iVar14 = *(int *)(sVar20 + 0x54);
                          piVar15[0x34] = iVar11;
                          if (iVar14 == -1) {
                            iVar11 = *(int *)(sVar20 + 0x48);
                            if (iVar11 < *(int *)(sVar20 + 0x28)) {
                              piVar15[0x3c] = piVar15[0xc] + iVar11;
                            }
                            else {
                              iVar11 = iVar11 - *(int *)(sVar20 + 0x28);
                              piVar15[0x35] = iVar11;
                              piVar15[0x3c] = (int)(iVar11 + (int)_Src);
                            }
                          }
                          else {
                            piVar15[0x3c] = (int)_Src;
                            _Src = (uint *)((int)_Src + iVar11);
                            piVar15[0x35] = -iVar11;
                          }
                        }
                      }
                      else {
                        iVar14 = *(int *)(iStack_1808 + 0x68);
                        piVar15[0x34] = iVar11;
                        if (iVar14 == -1) {
                          iVar11 = *(int *)(iStack_1808 + 0x5c);
                          piVar15[0x3c] = (int)(iVar11 + (int)_Src);
                          piVar15[0x35] = iVar11;
                        }
                        else {
                          piVar15[0x3c] = (int)_Src;
                          piVar15[0x35] = -iVar11;
                          _Src = (uint *)((int)_Src + iVar11);
                        }
                      }
                      piVar15[0x3a] = (int)puStack_17d4;
                      iVar11 = *(int *)(iStack_1808 + 0x74);
                      piVar15[0x3b] = (int)_Src;
                      piVar15[0x30] = sVar20;
                      piVar15[0x3d] = 1;
                      if (iVar11 == 0) {
LAB_1000cc92:
                        piVar15[0x37] = piVar15[8];
                      }
                      else {
                        puStack_17f8 = (uint *)(*(int *)(iStack_1808 + 0x6c) + (int)_Src);
                        if ((int)puStack_17e8 - (int)puStack_17f8 < iVar11) {
                          piVar15[0x37] = piVar15[8];
                        }
                        else {
                          if (iVar11 == 2) {
                            uVar7 = ((ushort)*puStack_17f8 & 0xff) << 8;
                            uVar12 = (uint)(ushort)((ushort)*puStack_17f8 >> 8);
LAB_1000cc84:
                            uVar7 = uVar7 | uVar12;
LAB_1000cc86:
                            uStack_17f4 = (int)uVar7 >> 0x1f;
                          }
                          else {
                            if (iVar11 == 4) {
                              uVar12 = *puStack_17f8;
                              uVar7 = uVar12 >> 8 & 0xff00 | (uint)*(byte *)((int)puStack_17f8 + 3);
                              uVar12 = (uVar12 << 0x10 | uVar12 & 0xff00) << 8;
                              goto LAB_1000cc84;
                            }
                            if (iVar11 != 8) {
                              uVar7 = (uint)(byte)*puStack_17f8;
                              goto LAB_1000cc86;
                            }
                            uStack_17c4 = puStack_17f8[1];
                            uStack_17c8 = *puStack_17f8;
                            uVar7 = (uStack_17c4 >> 0x10 & 0xff | uStack_17c4 & 0xff00) << 8 |
                                    uStack_17c4 << 0x18 | (uint)*(byte *)((int)puStack_17f8 + 7);
                            uStack_1794 = uVar7;
                            uStack_17f4 = (uStack_17c8 << 0x10 |
                                          ((uStack_17c8 & 0xff00) << 0x10 | uStack_17c8 & 0xff0000)
                                          >> 0x10) << 8 | uStack_17c8 >> 0x18;
                          }
                          piVar15[0x37] = uVar7;
                          if (uVar7 == 0) goto LAB_1000cc92;
                        }
                      }
                      if ((*(int *)(iStack_1808 + 8) <= piVar15[0x37]) &&
                         (*(int *)(iStack_1808 + 0x58) <= piVar15[0x37])) goto LAB_1000ccb0;
                      uVar5 = FUN_10003330(local_17b8);
                      pcVar21 = 
                      "; invalid cut-off version: expect cut-off version<%d> NOT less than max(base_ver<%d>, min_ver<%d>) about meta<%s>"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; invalid cut-off version: expect cut-off version<%d> NOT less than max(base_ver<%d>, min_ver<%d>) about meta<%s>"
                                                  ,piVar15[0x37],*(undefined4 *)(iStack_1808 + 8),
                                                  *(undefined4 *)(iVar1 + 0x58),uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_1804 = 0x82010401;
                    }
                    else {
                      uVar5 = FUN_10003330(local_17b8,0x20);
                      pcVar21 = 
                      "; meta<%s> is too complex, contains more than %d layers of children";
                      sVar19 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; meta<%s> is too complex, contains more than %d layers of children"
                                                  ,uVar5);
                      _snprintf(pcVar6,sVar19,pcVar21);
                      local_1804 = 0x82010404;
                      piVar15[9] = *(int *)(sVar20 + 0x2c);
                    }
                  }
                }
              }
              goto LAB_1000ce7e;
            }
            uVar5 = FUN_10003330(param_1,param_4);
            pcVar21 = 
            "; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and indicator<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator, a_iVersion<%d>"
            ;
            sVar20 = 0x400;
            pcVar6 = (char *)FUN_1000f910(0x400,
                                          "; invalid versionindicator value: expect indicator<%d> in [base_ver<%d>, cur_ver<%d>] and indicator<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator, a_iVersion<%d>"
                                          ,uVar7,*(undefined4 *)(param_1 + 8),
                                          *(undefined4 *)(param_1 + 0xc),uVar7,
                                          *(undefined4 *)(param_1 + 0x58),uVar5);
            _snprintf(pcVar6,sVar20,pcVar21);
            local_17b4[1] = 0;
            local_17b0[1] = 0;
            goto LAB_1000b89f;
          }
          uVar5 = FUN_10003330(param_1);
          pcVar21 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
          ;
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910(0x400,
                                        "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                                        ,param_4,*(undefined4 *)(param_1 + 0x58),uVar5);
          _snprintf(pcVar6,sVar20,pcVar21);
        }
        param_2[1] = 0;
        param_3[1] = 0;
        goto LAB_1000b89f;
      }
    }
  }
  pcVar21 = 
  "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
  ;
  sVar20 = 0x400;
  pcVar6 = (char *)FUN_1000f910(0x400,
                                "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
                                ,_Src,param_3[1],*param_2,param_2[1]);
  _snprintf(pcVar6,sVar20,pcVar21);
LAB_1000b89f:
  FUN_11a89daa();
  return;
LAB_1000c72d:
  puVar17 = puStack_17ec;
  sVar20 = sStack_180c;
  pcVar21 = "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)";
  sVar19 = 0x400;
  pcVar6 = (char *)FUN_1000f910(0x400,
                                "; net-buffer NOT enough: expect end<%p> > (start<%p> + sizeinfo<%u>)"
                                ,puStack_17e8,_Src,iVar11);
  _snprintf(pcVar6,sVar19,pcVar21);
  local_1804 = 0x82010402;
LAB_1000c80d:
  if ((local_1804 & 0x80000000) != 0) {
    sVar19 = 0x400;
    pcVar6 = (char *)FUN_1000f910();
    sVar19 = strnlen(pcVar6,sVar19);
    if ((int)sVar19 < 0x400) {
      _Count = 0x400 - sVar19;
    }
    else {
      _Count = 0;
    }
    uVar5 = FUN_10003330(iStack_1808,"lib_src\\tdr\\tdr_net.c",0x315);
    uVar5 = FUN_10004f00(sVar20,uVar5);
    pcVar6 = "; entry<%s> of meta<%s> %s:%d";
    iVar11 = FUN_1000f910(_Count,"; entry<%s> of meta<%s> %s:%d",uVar5);
    _snprintf((char *)(iVar11 + sVar19),_Count,pcVar6);
    goto LAB_1000ce7e;
  }
  if ((*(byte *)(sVar20 + 0x44) & 4) == 0) {
    piVar15[9] = (int)puVar17 - piVar15[10];
  }
  else {
    piVar15[9] = *(int *)(sVar20 + 0x18) + *(int *)(sVar20 + 0x2c);
  }
  piVar18 = piVar15;
  if (*(int *)(iStack_1808 + 0x10) == 0) {
    iVar11 = *(int *)(iStack_1808 + 0x1c);
    piVar15[3] = piVar15[3] + -1;
    piVar15[10] = iVar11 + piVar15[10];
    iStack_17e4 = piVar15[0xe];
  }
  else {
    iVar14 = piVar15[4];
    iVar11 = *(int *)(iStack_1808 + 0x2c);
    piVar15[4] = iVar14 + 1;
    if (iVar11 <= iVar14 + 1) {
      piVar15[3] = piVar15[3] + -1;
      iVar11 = *(int *)(iStack_1808 + 0x1c);
      piVar15[4] = 0;
      piVar15[10] = iVar11 + piVar15[10];
      iStack_17e4 = piVar15[0xe];
    }
  }
LAB_1000ccb0:
  piVar15 = piVar18;
  if (iStack_17e0 < 1) goto LAB_1000ce7e;
  goto LAB_1000bb50;
LAB_1000ce7e:
  local_17b4[1] = iStack_1760;
  if (((int)local_1804 < 0) && (iVar11 = 1, 1 < iStack_17e0)) {
    piVar15 = aiStack_16a4;
    do {
      if ((*(byte *)(piVar15[-8] + 0x44) & 4) != 0) {
        local_17b4[1] = local_17b4[1] + *(int *)(aiStack_1784[iVar11 * 0x2f + 1] + 0x18);
        goto LAB_1000ceec;
      }
      local_17b4[1] = local_17b4[1] + *piVar15;
      iVar11 = iVar11 + 1;
      piVar15 = piVar15 + 0x2f;
    } while (iVar11 < iStack_17e0);
    local_17b0[1] = (int)_Src - *local_17b0;
  }
  else {
LAB_1000ceec:
    local_17b0[1] = (int)_Src - *local_17b0;
  }
  goto LAB_1000b89f;
}


// ===== caller of FUN_11a89daa@11a89daa : Tdr::PackHostToNet@1000a1f0 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-R1]
   calls: __alloca_probe, _snprintf, strnlen, memcpy
   strings:
     ""; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator
   offset<%u> and size<%u>""
     ""lib_src\\tdr\\tdr_net.c""
     ""; %s:%d""
     ""; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>""
     ""; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>""
     ""; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p>
   custom_size<%u>""
     ""; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>""
     ""; sizeinfo numeric overflow: real_value<%d> value_limit<%u>""
     ""; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s>
   unpacked_entry_count<%d>"" */

void Tdr__PackHostToNet(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  size_t sVar20;
  char *pcVar21;
  int *piStack_17f4;
  int iStack_17f0;
  uint local_17ec;
  uint *puStack_17e8;
  int *piStack_17e4;
  int iStack_17e0;
  int iStack_17dc;
  uint *puStack_17d8;
  uint *puStack_17d4;
  uint *puStack_17d0;
  int iStack_17cc;
  size_t sStack_17c8;
  int *piStack_17c4;
  int *piStack_17c0;
  int iStack_17bc;
  int *local_17b8;
  uint uStack_17b4;
  uint uStack_17b0;
  int *piStack_17ac;
  uint uStack_17a8;
  int *piStack_17a4;
  uint uStack_17a0;
  int *local_179c;
  uint uStack_1798;
  uint uStack_1794;
  int local_1790;
  uint uStack_1788;
  int aiStack_1784 [9];
  int iStack_1760;
  int iStack_175c;
  int iStack_1758;
  uint *puStack_1754;
  uint *puStack_1750;
  undefined4 uStack_174c;
  int aiStack_16a4 [1448];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&piStack_17f4;
  local_1790 = param_1;
  local_17b8 = param_2;
  local_179c = param_3;
  local_17ec = 0;
  puVar4 = (undefined1 *)FUN_1000f910();
  *puVar4 = 0;
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) || (param_2 == (int *)0x0)) ||
     (param_3 == (int *)0x0)) {
    pcVar21 = 
    "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
    ;
    sVar20 = 0x400;
    pcVar6 = (char *)FUN_1000f910(0x400,
                                  "; invalid parameters: a_pstMeta<%p>==NULL or a_pstMeta->iType==TDR_TYPE_UNION or a_pstNext<%p>==NULL or a_pstHost<%p>==NULL"
                                  ,param_1,param_2,param_3);
    _snprintf(pcVar6,sVar20,pcVar21);
  }
  else {
    puVar19 = (uint *)*param_2;
    if (((puVar19 == (uint *)0x0) || (sStack_17c8 = local_17b8[1], sStack_17c8 == 0)) ||
       ((iVar8 = *param_3, iVar8 == 0 || (param_3[1] == 0)))) {
      pcVar21 = 
      "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
      ;
      sVar20 = 0x400;
      pcVar6 = (char *)FUN_1000f910(0x400,
                                    "; invalid parameters: a_pstNet->pszBuff<%p>==NULL or a_pstNet->iBuff<%u><=0 or a_pstHost->pszBuff<%p>==NULL or a_pstHost->iBuff<%u><=0"
                                    ,puVar19,local_17b8[1],*param_3,param_3[1]);
      _snprintf(pcVar6,sVar20,pcVar21);
    }
    else {
      if ((param_4 == 0) || (*(int *)(param_1 + 0xc) < param_4)) {
        param_4 = *(int *)(param_1 + 0xc);
      }
      if ((param_4 < *(int *)(param_1 + 8)) ||
         ((*(int *)(param_1 + 0x74) != 0 && (param_4 < *(int *)(param_1 + 0x58))))) {
        param_3[1] = 0;
        local_17b8[1] = 0;
        if (param_4 < *(int *)(param_1 + 8)) {
          uVar13 = FUN_10003330(param_1);
          uVar5 = *(undefined4 *)(param_1 + 8);
          pcVar6 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than base_version<%d> of meta<%s>";
        }
        else {
          uVar13 = FUN_10003330(param_1);
          uVar5 = *(undefined4 *)(param_1 + 0x58);
          pcVar6 = 
          "; invalid parameter: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
          ;
        }
        sVar20 = 0x400;
        pcVar21 = (char *)FUN_1000f910(0x400,pcVar6,param_4,uVar5,uVar13);
        _snprintf(pcVar21,sVar20,pcVar6);
      }
      else {
        puStack_17d0 = (uint *)(sStack_17c8 + (int)puVar19);
        iStack_1758 = param_3[1] + iVar8;
        sStack_17c8 = (param_1 - *(int *)(param_1 + 0x3c)) - 0x114;
        aiStack_1784[5] = *(int *)(param_1 + 100);
        puStack_17e8 = puVar19;
        iStack_17dc = param_1;
        aiStack_1784[0] = param_1;
        aiStack_1784[3] = 1;
        aiStack_1784[4] = 0;
        iStack_175c = iVar8;
        if (aiStack_1784[5] == 0) {
          aiStack_1784[5] = 0;
          aiStack_1784[6] = 0;
          puStack_1750 = (uint *)0x0;
        }
        else if (*(int *)(param_1 + 0x68) == -1) {
          puStack_1750 = (uint *)(*(int *)(param_1 + 0x5c) + (int)puVar19);
        }
        else {
          puStack_1750 = puVar19;
          puStack_17e8 = (uint *)((int)puVar19 + aiStack_1784[5]);
        }
        puVar19 = puStack_17e8;
        puStack_1754 = puStack_17e8;
        uStack_174c = 1;
        iStack_1760 = 0;
        uVar3 = (undefined1)param_4;
        if (*(int *)(param_1 + 0x74) != 0) {
          piStack_17f4 = (int *)(*(int *)(param_1 + 0x70) + iVar8);
          iVar1 = *(int *)(param_1 + 0x74);
          if (iStack_1758 - (int)piStack_17f4 < iVar1) {
            uVar5 = FUN_10003330(param_1,iVar8,iStack_1758,*(undefined4 *)(param_1 + 0x70),iVar1);
            pcVar21 = 
            "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
            ;
            sVar20 = 0x400;
            pcVar6 = (char *)FUN_1000f910(0x400,
                                          "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                                          ,uVar5);
            _snprintf(pcVar6,sVar20,pcVar21);
            local_17ec = 0x82010407;
          }
          else if (iVar1 == 2) {
            *(undefined2 *)piStack_17f4 = (undefined2)param_4;
          }
          else if (iVar1 == 4) {
            *piStack_17f4 = param_4;
          }
          else if (iVar1 == 8) {
            *piStack_17f4 = param_4;
            piStack_17f4[1] = param_4 >> 0x1f;
          }
          else {
            *(undefined1 *)piStack_17f4 = uVar3;
          }
        }
        if ((local_17ec & 0x80000000) == 0) {
          iStack_17cc = 1;
          aiStack_1784[1] = 0;
          iStack_17e0 = 0;
          piVar15 = aiStack_1784;
          do {
            puVar17 = puStack_17d0;
            if (iStack_17e0 != 0) {
              iVar8 = piVar15[5];
              iStack_17e0 = 0;
              if (iVar8 != 0) {
                uVar9 = (int)puVar19 - piVar15[0xc];
                uStack_1794 = (int)uVar9 >> 0x1f;
                uStack_1798 = uVar9;
                if ((*(int *)(&DAT_11e11424 + iVar8 * 8) < (int)uStack_1794) ||
                   ((*(int *)(&DAT_11e11424 + iVar8 * 8) <= (int)uStack_1794 &&
                    (*(uint *)(&DAT_11e11420 + iVar8 * 8) < uVar9)))) {
                  uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                  uVar5 = FUN_10004f00(piVar15[1],uVar5);
                  pcVar21 = 
                  "; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s> unpacked_entry_count<%d>"
                  ;
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; sizeinfo numeric overflow: real_value<%d> value_limit<%u> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                ,uVar9,*(undefined4 *)
                                                        (&DAT_11e11420 + piVar15[5] * 8),uVar5);
                  _snprintf(pcVar6,sVar20,pcVar21);
                  local_17ec = 0x82010479;
                  break;
                }
                if (iVar8 == 2) {
                  *(ushort *)piVar15[0xd] = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
                }
                else if (iVar8 == 4) {
                  *(uint *)piVar15[0xd] =
                       (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 |
                       (uVar9 * 0x10000 | uVar9 & 0xff00) << 8;
                }
                else if (iVar8 == 8) {
                  puVar19 = (uint *)piVar15[0xd];
                  *puVar19 = (uStack_1794 >> 0x10 |
                             ((uStack_1794 & 0xff0000) >> 0x10 | uStack_1794 & 0xff00) << 0x10) >> 8
                             | uStack_1794 << 0x18;
                  puVar19[1] = (uVar9 * 0x10000 |
                               ((uVar9 & 0xff00) << 0x10 | uVar9 & 0xff0000) >> 0x10) << 8 |
                               uVar9 >> 0x18;
                  puVar19 = puStack_17e8;
                }
                else {
                  *(char *)piVar15[0xd] = (char)uVar9;
                }
              }
              if (0 < piVar15[3]) {
                if (puStack_17d0 < puVar19) {
                  uVar5 = FUN_10003330(*piVar15,piVar15[3]);
                  uVar5 = FUN_10004f00(piVar15[1],uVar5);
                  pcVar21 = 
                  "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> entry<%s> meta<%s> unpacked_entry_count<%d>"
                  ;
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910(0x400,
                                                "; net-buffer NOT enough: pszNetStart<%p> pszNetEnd<%p> entry<%s> meta<%s> unpacked_entry_count<%d>"
                                                ,puVar19,puVar17,uVar5);
                  _snprintf(pcVar6,sVar20,pcVar21);
                  local_17ec = 0x82010402;
                  break;
                }
                if (piVar15[5] != 0) {
                  iVar8 = piVar15[6];
                  if (iVar8 < 0) {
                    piVar15[0xd] = (int)puVar19;
                    puVar19 = (uint *)((int)puVar19 - iVar8);
                    puStack_17e8 = puVar19;
                  }
                  else {
                    piVar15[0xd] = (int)(iVar8 + (int)puVar19);
                  }
                }
                piVar15[0xc] = (int)puVar19;
              }
              if (1 < iStack_17cc) {
                if ((*(byte *)(piVar15[1] + 0x44) & 4) == 0) {
                  piVar15[-0x26] = piVar15[-0x26] + *(int *)(iStack_17dc + 0x1c);
                }
                else {
                  piVar15[-0x26] = piVar15[-0x26] + *(int *)(piVar15[1] + 0x18);
                }
                piVar15[9] = 0;
              }
            }
            iVar8 = piVar15[3];
            if (iVar8 < 1) {
              iStack_17cc = iStack_17cc + -1;
              piVar18 = piVar15 + -0x2f;
              if (iStack_17cc < 1) break;
              iVar8 = *piVar18;
              iStack_17dc = iVar8;
              if (*(int *)(iVar8 + 0x10) == 0) {
                iVar8 = *(int *)(iVar8 + 0x1c);
                piVar15[-0x2c] = piVar15[-0x2c] + -1;
                piVar15[-0x25] = piVar15[-0x25] + iVar8;
                iStack_17e0 = piVar15[-0x21];
              }
              else {
                piVar15[-0x2b] = piVar15[-0x2b] + 1;
                if (*(int *)(iVar8 + 0x2c) <= piVar15[-0x2b]) {
                  iVar8 = *(int *)(iVar8 + 0x1c);
                  piVar15[-0x2c] = piVar15[-0x2c] + -1;
                  piVar15[-0x25] = piVar15[-0x25] + iVar8;
                  piVar15[-0x2b] = 0;
                  iStack_17e0 = piVar15[-0x21];
                }
              }
            }
            else {
              iVar12 = piVar15[4];
              iVar1 = iVar12 * 0xb4 + 0xb8 + iStack_17dc;
              iStack_17f0 = iVar1;
              piVar18 = piVar15;
              if (param_4 < *(int *)(iVar1 + 4)) {
                if (*(int *)(iStack_17dc + 0x10) == 0) {
LAB_1000a6c6:
                  piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                  piVar15[3] = iVar8 + -1;
                  iStack_17e0 = piVar15[0xe];
                }
                else {
                  iVar1 = *(int *)(iStack_17dc + 0x2c);
                  piVar15[4] = iVar12 + 1;
                  if (iVar1 <= iVar12 + 1) {
                    piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                    piVar15[4] = 0;
                    piVar15[3] = iVar8 + -1;
                    iStack_17e0 = piVar15[0xe];
                  }
                }
              }
              else if ((*(ushort *)(iVar1 + 0x44) & 2) == 0) {
                iVar8 = *(int *)(iVar1 + 0x58);
                if (iVar8 == 0) {
                  piStack_17c4 = *(int **)(iVar1 + 0x24);
                }
                else {
                  puVar16 = (ushort *)(*(int *)(iVar1 + 0x5c) + piVar15[10]);
                  if (iVar8 == 2) {
                    iStack_17bc = 0;
                    piStack_17c4 = (int *)(uint)*puVar16;
                  }
                  else if (iVar8 == 4) {
                    iStack_17bc = (int)*(int **)puVar16 >> 0x1f;
                    piStack_17c4 = *(int **)puVar16;
                  }
                  else if (iVar8 == 8) {
                    iStack_17bc = *(int *)(puVar16 + 2);
                    piStack_17c4 = *(int **)puVar16;
                  }
                  else {
                    iStack_17bc = 0;
                    piStack_17c4 = (int *)(uint)(byte)*puVar16;
                  }
                }
                piVar14 = piStack_17c4;
                if (((int)piStack_17c4 < 0) ||
                   ((*(int *)(iVar1 + 0x24) < (int)piStack_17c4 && (0 < *(int *)(iVar1 + 0x24))))) {
                  sVar20 = 0x400;
                  pcVar6 = (char *)FUN_1000f910();
                  piStack_17e4 = (int *)strnlen(pcVar6,sVar20);
                  if ((int)piStack_17e4 < 0x400) {
                    sStack_17c8 = 0x400 - (int)piStack_17e4;
                  }
                  else {
                    sStack_17c8 = 0;
                  }
                  uVar5 = FUN_10003330(iStack_17dc);
                  uVar5 = FUN_10004f00(iVar1,uVar5);
                  pcVar6 = 
                  "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                  ;
                  sVar20 = sStack_17c8;
                  iVar8 = FUN_1000f910(sStack_17c8,
                                       "; invalid refer value: expect refer_value<%d> in [0, array_count<%d>] about entry<%s> of meta<%s>"
                                       ,piVar14,*(undefined4 *)(iVar1 + 0x24),uVar5);
                  _snprintf((char *)(iVar8 + (int)piStack_17e4),sVar20,pcVar6);
                  local_17ec = 0x82010403;
                  piVar15[9] = *(int *)(iVar1 + 0x2c);
                  break;
                }
                if ((int)piStack_17c4 < 1) {
                  iVar8 = *(int *)(iVar1 + 0x50);
                  if (((iVar8 != 0) && (*(int *)(iVar1 + 0x54) == -1)) &&
                     (iVar12 = *(int *)(iVar1 + 0x48), iVar12 < *(int *)(iVar1 + 0x28))) {
                    if (iVar8 == 2) {
                      *(undefined2 *)(iVar12 + piVar15[0xc]) = 0;
                    }
                    else if (iVar8 == 4) {
                      *(undefined4 *)(iVar12 + piVar15[0xc]) = 0;
                    }
                    else {
                      iVar1 = piVar15[0xc];
                      if (iVar8 == 8) {
                        *(undefined4 *)(iVar12 + iVar1) = 0;
                        *(undefined4 *)(iVar12 + 4 + iVar1) = 0;
                      }
                      else {
                        *(undefined1 *)(iVar12 + iVar1) = 0;
                      }
                    }
                  }
                  if (*(int *)(iStack_17dc + 0x10) == 0) {
                    piVar15[3] = piVar15[3] + -1;
                    piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                    iStack_17e0 = piVar15[0xe];
                  }
                  else {
                    iVar1 = piVar15[4];
                    iVar8 = *(int *)(iStack_17dc + 0x2c);
                    piVar15[4] = iVar1 + 1;
                    if (iVar8 <= iVar1 + 1) {
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                      piVar15[4] = 0;
                      iStack_17e0 = piVar15[0xe];
                    }
                  }
                }
                else {
                  puStack_17d8 = (uint *)(*(int *)(iVar1 + 0x2c) + piVar15[10]);
                  if ((*(ushort *)(iVar1 + 0x44) & 4) == 0) {
                    puStack_17d4 = (uint *)piVar15[0xb];
                  }
                  else {
                    puStack_17d8 = (uint *)*puStack_17d8;
                    if (*(int *)(iVar1 + 8) < 2) {
                      puStack_17d4 = (uint *)(*(int *)(*(int *)(iVar1 + 0x78) + 0x130 + sStack_17c8)
                                             + (int)puStack_17d8);
                    }
                    else {
                      puStack_17d4 = (uint *)(*(int *)(iVar1 + 0x14) + (int)puStack_17d8);
                    }
                  }
                  puVar17 = puStack_17d8;
                  iVar8 = *(int *)(iVar1 + 8);
                  if (iVar8 < 2) {
                    if (0x1f < iStack_17cc) {
                      uVar5 = FUN_10003330(local_1790,0x20);
                      pcVar21 = 
                      "; meta<%s> is too complex, contains more than %d layers of children";
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; meta<%s> is too complex, contains more than %d layers of children"
                                                  ,uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010404;
                      piVar15[9] = *(int *)(iVar1 + 0x2c);
                      break;
                    }
                    if (iVar8 == 0) {
                      iVar8 = *(int *)(iVar1 + 100);
                      puVar11 = (uint *)(*(int *)(iVar1 + 0x68) + piVar15[10]);
                      if (iVar8 == 2) {
                        uStack_17b4 = (uint)(ushort)*puVar11;
LAB_1000b056:
                        uStack_17b0 = (int)uStack_17b4 >> 0x1f;
                      }
                      else {
                        if (iVar8 == 4) {
                          uStack_17b4 = *puVar11;
                          goto LAB_1000b056;
                        }
                        if (iVar8 != 8) {
                          uStack_17b4 = (uint)(byte)*puVar11;
                          goto LAB_1000b056;
                        }
                        uStack_17b0 = puVar11[1];
                        uStack_17b4 = *puVar11;
                      }
                      iVar8 = *(int *)(iVar1 + 0x78) + 0x114 + sStack_17c8;
                      iStack_17dc = iVar8;
                      piStack_17e4 = (int *)((*(int *)(iVar8 + 0x134) < *(int *)(iVar8 + 0x138)) - 1
                                            );
                      piVar14 = (int *)(uStack_17b4 - *(int *)(iVar8 + 0x138));
                      if (((int)piVar14 < 0) || (*(int *)(iVar8 + 0x2c) <= (int)piVar14)) {
LAB_1000b0c3:
                        iVar12 = *(int *)(iVar8 + 0x2c);
                        piVar14 = piStack_17e4;
                        if (iVar12 < 0x10) {
                          piStack_17f4 = (int *)0x0;
                          if (0 < iVar12) {
                            piVar10 = (int *)(iVar8 + 0x134);
                            do {
                              if ((piVar10[1] <= (int)uStack_17b4) &&
                                 (piVar14 = piStack_17f4, (int)uStack_17b4 <= *piVar10)) break;
                              piStack_17f4 = (int *)((int)piStack_17f4 + 1);
                              piVar10 = piVar10 + 0x2d;
                              piStack_17c0 = piVar10;
                              piVar14 = piStack_17e4;
                            } while ((int)piStack_17f4 < *(int *)(iVar8 + 0x2c));
                          }
                        }
                        else {
                          piStack_17f4 = (int *)0x0;
                          puStack_17d8 = (uint *)(iVar12 + -1);
                          if (-1 < iVar12 + -1) {
                            do {
                              piVar14 = (int *)((int)((int)puStack_17d8 + (int)piStack_17f4) >> 1);
                              iVar12 = *(int *)((int)piVar14 * 0xb4 + 0x138 + iVar8);
                              piStack_17c0 = *(int **)((int)piVar14 * 0xb4 + iVar8 + 0x134);
                              if ((int)piStack_17c0 < iVar12) {
LAB_1000b15e:
                                piStack_17f4 = (int *)((int)piVar14 + 1);
                              }
                              else {
                                if (iVar12 <= (int)uStack_17b4) {
                                  if ((int)piStack_17c0 < (int)uStack_17b4) goto LAB_1000b15e;
                                  break;
                                }
                                puStack_17d8 = (uint *)((int)piVar14 + -1);
                              }
                              piVar14 = piStack_17e4;
                            } while ((int)piStack_17f4 <= (int)puStack_17d8);
                          }
                        }
                      }
                      else {
                        piStack_17c0 = (int *)((int)piVar14 * 0xb4 + iVar8);
                        if ((piStack_17c0[0x4e] != uStack_17b4) ||
                           (piStack_17c0[0x4d] < piStack_17c0[0x4e])) goto LAB_1000b0c3;
                      }
                      if ((piVar14 == (int *)0xffffffff) ||
                         (param_4 < *(int *)((int)piVar14 * 0xb4 + 0xbc + iVar8))) {
                        iVar8 = *(int *)(iVar1 + 0x50);
                        if ((iVar8 != 0) &&
                           ((*(int *)(iVar1 + 0x54) == -1 &&
                            (iVar12 = *(int *)(iVar1 + 0x48), iVar12 < *(int *)(iVar1 + 0x28))))) {
                          if (iVar8 == 2) {
                            *(undefined2 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                          else if (iVar8 == 4) {
                            *(undefined4 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                          else if (iVar8 == 8) {
                            iVar8 = piVar15[0xc];
                            *(undefined4 *)(iVar12 + iVar8) = 0;
                            *(undefined4 *)(iVar12 + 4 + iVar8) = 0;
                          }
                          else {
                            *(undefined1 *)(iVar12 + piVar15[0xc]) = 0;
                          }
                        }
                        iStack_17dc = *piVar15;
                        if (*(int *)(iStack_17dc + 0x10) == 0) {
                          iVar8 = *(int *)(iStack_17dc + 0x1c);
                          piVar15[3] = piVar15[3] + -1;
                          piVar15[10] = iVar8 + piVar15[10];
                          iStack_17e0 = piVar15[0xe];
                        }
                        else {
                          iVar1 = piVar15[4];
                          iVar8 = *(int *)(iStack_17dc + 0x2c);
                          piVar15[4] = iVar1 + 1;
                          if (iVar8 <= iVar1 + 1) {
                            iVar8 = *(int *)(iStack_17dc + 0x1c);
                            piVar15[3] = piVar15[3] + -1;
                            piVar15[4] = 0;
                            piVar15[10] = iVar8 + piVar15[10];
                            iStack_17e0 = piVar15[0xe];
                          }
                        }
                        goto LAB_1000b3e3;
                      }
                    }
                    else {
                      iVar8 = *(int *)(iVar1 + 0x78) + 0x114 + sStack_17c8;
                      iStack_17dc = iVar8;
                      piVar14 = (int *)0x0;
                    }
                    iStack_17dc = iVar8;
                    if (param_4 < *(int *)(iVar8 + 0x58)) {
                      uVar5 = FUN_10003330(iVar8);
                      pcVar21 = 
                      "; invalid cut-off version: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; invalid cut-off version: expect a_iVersion<%d> NOT less than min_ver<%d> of meta<%s>\'s versionindicator"
                                                  ,param_4,*(undefined4 *)(iVar8 + 0x58),uVar5);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010401;
                      break;
                    }
                    iStack_17cc = iStack_17cc + 1;
                    piVar18 = piVar15 + 0x2f;
                    piVar15[0x32] = (int)piStack_17c4;
                    iVar12 = *(int *)(iVar8 + 100);
                    piVar15[0x38] = 0;
                    *piVar18 = iVar8;
                    piVar15[0x33] = (int)piVar14;
                    piVar15[0x39] = (int)puVar17;
                    piVar15[0x3b] = (int)puVar19;
                    if (iVar12 == 0) {
                      iVar12 = *(int *)(iVar1 + 0x50);
                      if (iVar12 == 0) {
                        piVar15[0x34] = 0;
                      }
                      else {
                        iVar2 = *(int *)(iVar1 + 0x54);
                        piVar15[0x34] = iVar12;
                        if (iVar2 == -1) {
                          iVar12 = *(int *)(iVar1 + 0x48);
                          if (iVar12 < *(int *)(iVar1 + 0x28)) {
                            piVar15[0x3c] = piVar15[0xc] + iVar12;
                          }
                          else {
                            iVar12 = iVar12 - *(int *)(iVar1 + 0x28);
                            piVar15[0x35] = iVar12;
                            piVar15[0x3c] = (int)(iVar12 + (int)puVar19);
                          }
                        }
                        else {
                          piVar15[0x3c] = (int)puVar19;
                          puVar19 = (uint *)((int)puVar19 + iVar12);
                          puStack_17e8 = puVar19;
                          piVar15[0x35] = -iVar12;
                        }
                      }
                    }
                    else {
                      iVar2 = *(int *)(iVar8 + 0x68);
                      piVar15[0x34] = iVar12;
                      if (iVar2 == -1) {
                        iVar12 = *(int *)(iVar8 + 0x5c);
                        piVar15[0x3c] = (int)(iVar12 + (int)puVar19);
                        piVar15[0x35] = iVar12;
                      }
                      else {
                        piVar15[0x3c] = (int)puVar19;
                        puVar19 = (uint *)((int)puVar19 + iVar12);
                        piVar15[0x35] = -iVar12;
                        puStack_17e8 = puVar19;
                      }
                    }
                    iVar12 = *(int *)(iVar8 + 0x74);
                    piVar15[0x3b] = (int)puVar19;
                    piVar15[0x3a] = (int)puStack_17d4;
                    piVar15[0x30] = iVar1;
                    piVar15[0x3d] = 1;
                    if (iVar12 != 0) {
                      piStack_17f4 = (int *)(*(int *)(iVar8 + 0x70) + (int)puVar17);
                      if ((int)puStack_17d4 - (int)piStack_17f4 < iVar12) {
                        uVar5 = FUN_10003330(iVar8,puVar17,puStack_17d4,*(int *)(iVar8 + 0x70),
                                             iVar12);
                        pcVar21 = 
                        "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                        ;
                        sVar20 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: meta<%s>, a_pszHostBase<%p>, a_pszHostEnd<%p>, version-indicator offset<%u> and size<%u>"
                                                  ,uVar5);
                        _snprintf(pcVar6,sVar20,pcVar21);
                        local_17ec = 0x82010407;
                      }
                      else if (iVar12 == 2) {
                        *(undefined2 *)piStack_17f4 = (undefined2)param_4;
                      }
                      else if (iVar12 == 4) {
                        *piStack_17f4 = param_4;
                      }
                      else if (iVar12 == 8) {
                        *piStack_17f4 = param_4;
                        piStack_17f4[1] = param_4 >> 0x1f;
                      }
                      else {
                        *(undefined1 *)piStack_17f4 = uVar3;
                      }
                    }
                    if ((local_17ec & 0x80000000) != 0) {
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910();
                      sVar20 = strnlen(pcVar6,sVar20);
                      if ((int)sVar20 < 0x400) {
                        sVar7 = 0x400 - sVar20;
                      }
                      else {
                        sVar7 = 0;
                      }
                      pcVar6 = "; %s:%d";
                      iVar8 = FUN_1000f910(sVar7,"; %s:%d","lib_src\\tdr\\tdr_net.c",0x1da);
                      _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
                      break;
                    }
                  }
                  else {
                    if (iVar8 == 0x15) {
                      piStack_17e4 = (int *)0x0;
                      do {
                        puVar17 = puStack_17d8;
                        piStack_17f4 = *(int **)(iStack_17f0 + 0x20);
                        if (piStack_17f4 == (int *)0x0) {
                          piStack_17f4 = (int *)((int)puStack_17d4 - (int)puStack_17d8);
                        }
                        sVar20 = strnlen((char *)puStack_17d8,(size_t)piStack_17f4);
                        if ((int)piStack_17f4 <= (int)sVar20) {
                          pcVar21 = 
                          "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                          ;
                          sVar7 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; string length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                                  ,sVar20,piStack_17f4,puVar19,puStack_17d0,
                                                  *(undefined4 *)(iStack_17f0 + 0x20));
                          _snprintf(pcVar6,sVar7,pcVar21);
                          local_17ec = 0x82010406;
                          break;
                        }
                        piVar14 = (int *)(sVar20 + 1);
                        if ((int)puStack_17d0 - (int)puVar19 <
                            *(int *)(iStack_17f0 + 0x50) + (int)piVar14) {
                          uVar5 = *(undefined4 *)(iStack_17f0 + 0x50);
                          goto LAB_1000af3b;
                        }
                        uStack_17a0 = (int)piVar14 >> 0x1f;
                        piStack_17a4 = piVar14;
                        if ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <
                             (int)uStack_17a0) ||
                           ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <=
                             (int)uStack_17a0 &&
                            (*(int **)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8) < piVar14))
                           )) {
                          uVar5 = *(undefined4 *)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8);
                          goto LAB_1000af6e;
                        }
                        iVar8 = *(int *)(iStack_17f0 + 0x50);
                        if (iVar8 == 2) {
                          *(ushort *)puVar19 = (ushort)piVar14 << 8 | (ushort)piVar14 >> 8;
                        }
                        else if (iVar8 == 4) {
                          *puVar19 = ((uint)piVar14 & 0xff0000 | (uint)piVar14 >> 0x10) >> 8 |
                                     ((int)piVar14 * 0x10000 | (uint)piVar14 & 0xff00) << 8;
                        }
                        else if (iVar8 == 8) {
                          puStack_17e8[1] =
                               ((int)piVar14 * 0x10000 |
                               (((uint)piVar14 & 0xff00) << 0x10 | (uint)piVar14 & 0xff0000) >> 0x10
                               ) << 8 | (uint)piVar14 >> 0x18;
                          *puStack_17e8 =
                               (uStack_17a0 >> 0x10 |
                               ((uStack_17a0 & 0xff0000) >> 0x10 | uStack_17a0 & 0xff00) << 0x10) >>
                               8 | uStack_17a0 << 0x18;
                          puVar17 = puStack_17d8;
                          puVar19 = puStack_17e8;
                        }
                        else {
                          *(char *)puVar19 = (char)piVar14;
                        }
                        puVar4 = (undefined1 *)((int)puVar19 + *(int *)(iStack_17f0 + 0x50));
                        piStack_17c0 = piVar14;
                        memcpy(puVar4,puVar17,(size_t)piVar14);
                        puVar17 = (uint *)((int)puVar17 + (int)piStack_17f4);
                        piStack_17e4 = (int *)((int)piStack_17e4 + 1);
                        puVar19 = (uint *)(puVar4 + (int)piVar14);
                        puStack_17e8 = puVar19;
                        puStack_17d8 = puVar17;
                      } while ((int)piStack_17e4 < (int)piStack_17c4);
                    }
                    else if (iVar8 == 0x16) {
                      piStack_17e4 = (int *)0x0;
                      do {
                        puVar17 = puStack_17d8;
                        piStack_17f4 = *(int **)(iStack_17f0 + 0x20);
                        if (piStack_17f4 == (int *)0x0) {
                          piStack_17f4 = (int *)((int)puStack_17d4 - (int)puStack_17d8);
                        }
                        iVar8 = FUN_100108a0(puStack_17d8,piStack_17f4);
                        piVar14 = (int *)(iVar8 * 2 + 2);
                        piStack_17c0 = piVar14;
                        if ((int)piStack_17f4 < (int)piVar14) {
                          pcVar21 = 
                          "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                          ;
                          sVar20 = 0x400;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; wstring length error: real_len<%d> available_len<%d> net_start<%p> net_end<%p> custom_size<%u>"
                                                  ,piVar14,piStack_17f4,puVar19,puStack_17d0,
                                                  *(undefined4 *)(iStack_17f0 + 0x20));
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010406;
                          break;
                        }
                        if ((int)puStack_17d0 - (int)puVar19 <
                            *(int *)(iStack_17f0 + 0x50) + (int)piVar14) {
                          uVar5 = *(undefined4 *)(iStack_17f0 + 0x50);
LAB_1000af3b:
                          pcVar21 = 
                          "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
                          ;
                          sVar20 = 0x400;
                          piStack_17c0 = piVar14;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: real_len<%d> sizeinfo_size<%u> net_start<%p> net_end<%p>"
                                                  ,piVar14,uVar5,puVar19,puStack_17d0);
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010402;
                          break;
                        }
                        uStack_17a8 = (int)piVar14 >> 0x1f;
                        piStack_17ac = piVar14;
                        if ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <
                             (int)uStack_17a8) ||
                           ((*(int *)(&DAT_11e11424 + *(int *)(iStack_17f0 + 0x50) * 8) <=
                             (int)uStack_17a8 &&
                            (*(int **)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8) < piVar14))
                           )) {
                          uVar5 = *(undefined4 *)(&DAT_11e11420 + *(int *)(iStack_17f0 + 0x50) * 8);
LAB_1000af6e:
                          pcVar21 = "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>";
                          sVar20 = 0x400;
                          piStack_17c0 = piVar14;
                          pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; sizeinfo numeric overflow: real_value<%d> value_limit<%u>"
                                                  ,piVar14,uVar5);
                          _snprintf(pcVar6,sVar20,pcVar21);
                          local_17ec = 0x82010479;
                          break;
                        }
                        iVar8 = *(int *)(iStack_17f0 + 0x50);
                        if (iVar8 == 2) {
                          *(ushort *)puVar19 = (ushort)piVar14 << 8 | (ushort)piVar14 >> 8;
                        }
                        else if (iVar8 == 4) {
                          *puVar19 = ((uint)piVar14 & 0xff0000 | (uint)piVar14 >> 0x10) >> 8 |
                                     ((int)piVar14 * 0x10000 | (uint)piVar14 & 0xff00) << 8;
                        }
                        else if (iVar8 == 8) {
                          puStack_17e8[1] =
                               ((int)piVar14 * 0x10000 |
                               (((uint)piVar14 & 0xff00) << 0x10 | (uint)piVar14 & 0xff0000) >> 0x10
                               ) << 8 | (uint)piVar14 >> 0x18;
                          *puStack_17e8 =
                               (uStack_17a8 >> 0x10 |
                               ((uStack_17a8 & 0xff0000) >> 0x10 | uStack_17a8 & 0xff00) << 0x10) >>
                               8 | uStack_17a8 << 0x18;
                          puVar17 = puStack_17d8;
                          puVar19 = puStack_17e8;
                        }
                        else {
                          *(char *)puVar19 = (char)piVar14;
                        }
                        puVar19 = (uint *)((int)puVar19 + *(int *)(iStack_17f0 + 0x50));
                        puStack_17e8 = puVar19;
                        if (piVar14 < (int *)0x41) {
                          piVar10 = piVar14;
                          if (piVar14 != (int *)0x0) {
                            do {
                              *(char *)puVar19 = (char)*puVar17;
                              puVar19 = (uint *)((int)puVar19 + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                              piVar10 = (int *)((int)piVar10 - 1);
                            } while (piVar10 != (int *)0x0);
                            goto LAB_1000ac9d;
                          }
                        }
                        else {
                          memcpy(puVar19,puVar17,(size_t)piVar14);
                          puVar17 = (uint *)((int)puVar17 + (int)piVar14);
                          puVar19 = (uint *)((int)puVar19 + (int)piVar14);
LAB_1000ac9d:
                          puStack_17e8 = puVar19;
                        }
                        puVar17 = (uint *)((int)puVar17 + ((int)piStack_17f4 - (int)piVar14));
                        piStack_17e4 = (int *)((int)piStack_17e4 + 1);
                        puStack_17d8 = puVar17;
                        puStack_17e8 = puVar19;
                      } while ((int)piStack_17e4 < (int)piStack_17c4);
                    }
                    else if (puStack_17d4 <
                             (uint *)(*(int *)(iVar1 + 0x18) * (int)piStack_17c4 + (int)puStack_17d8
                                     )) {
                      pcVar21 = 
                      "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                      ;
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; host-buffer NOT enough: host_start<%p> host_end<%p> unit_size<%u> count<%d>"
                                                  ,puStack_17d8,puStack_17d4,*(int *)(iVar1 + 0x18),
                                                  piStack_17c4);
                      _snprintf(pcVar6,sVar20,pcVar21);
                      local_17ec = 0x82010407;
                    }
                    else {
                      iVar8 = *(int *)(iVar1 + 0x1c);
                      if (puStack_17d0 < (uint *)(iVar8 * (int)piStack_17c4 + (int)puVar19)) {
                        pcVar21 = 
                        "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                        ;
                        sVar20 = 0x400;
                        pcVar6 = (char *)FUN_1000f910(0x400,
                                                  "; net-buffer NOT enough: net_start<%p> net_end<%p> unit_size<%u> count<%d>"
                                                  ,puVar19,puStack_17d0,iVar8,piStack_17c4);
                        _snprintf(pcVar6,sVar20,pcVar21);
                        local_17ec = 0x82010402;
                      }
                      else if (iVar8 == 1) {
                        if ((int)piStack_17c4 < 0x41) {
                          if (piStack_17c4 != (int *)0x0) {
                            do {
                              *(char *)puVar19 = (char)*puVar17;
                              puVar19 = (uint *)((int)puVar19 + 1);
                              puVar17 = (uint *)((int)puVar17 + 1);
                              piVar14 = (int *)((int)piVar14 + -1);
                            } while (piVar14 != (int *)0x0);
                            puStack_17e8 = puVar19;
                          }
                        }
                        else {
                          memcpy(puVar19,puStack_17d8,(size_t)piStack_17c4);
                          puVar17 = (uint *)((int)puVar17 + (int)piStack_17c4);
                          puVar19 = (uint *)((int)puVar19 + (int)piStack_17c4);
                          puStack_17e8 = puVar19;
                        }
                      }
                      else if (iVar8 == 2) {
                        do {
                          *(ushort *)puVar19 =
                               (ushort)*(byte *)((int)puVar17 + 1) | (short)*puVar17 << 8;
                          puVar19 = (uint *)((int)puVar19 + 2);
                          puVar17 = (uint *)((int)puVar17 + 2);
                          piVar14 = (int *)((int)piVar14 + -1);
                        } while (piVar14 != (int *)0x0);
                        puStack_17e8 = puVar19;
                      }
                      else if (iVar8 == 4) {
                        do {
                          uVar9 = *puVar17;
                          *puVar19 = (uVar9 & 0xff00 | uVar9 << 0x10) << 8 | uVar9 >> 8 & 0xff00 |
                                     (uint)*(byte *)((int)puVar17 + 3);
                          puVar19 = puVar19 + 1;
                          puVar17 = puVar17 + 1;
                          piVar14 = (int *)((int)piVar14 + -1);
                        } while (piVar14 != (int *)0x0);
                        puStack_17e8 = puVar19;
                      }
                      else {
                        piStack_17e4 = piStack_17c4;
                        do {
                          uVar9 = *puStack_17d8;
                          uStack_1788 = puStack_17d8[1];
                          *puStack_17e8 =
                               (uStack_1788 >> 0x10 & 0xff | uStack_1788 & 0xff00) << 8 |
                               uStack_1788 << 0x18 | (uint)*(byte *)((int)puStack_17d8 + 7);
                          puStack_17e8[1] =
                               (uVar9 << 0x10 |
                               ((uVar9 & 0xff00) << 0x10 | uVar9 & 0xff0000) >> 0x10) << 8 |
                               uVar9 >> 0x18;
                          puVar19 = puStack_17e8 + 2;
                          puVar17 = puStack_17d8 + 2;
                          piStack_17e4 = (int *)((int)piStack_17e4 + -1);
                          puStack_17e8 = puVar19;
                          puStack_17d8 = puVar17;
                        } while (piStack_17e4 != (int *)0x0);
                      }
                    }
                    if ((local_17ec & 0x80000000) != 0) {
                      sVar20 = 0x400;
                      pcVar6 = (char *)FUN_1000f910();
                      sVar20 = strnlen(pcVar6,sVar20);
                      if ((int)sVar20 < 0x400) {
                        sVar7 = 0x400 - sVar20;
                      }
                      else {
                        sVar7 = 0;
                      }
                      uVar5 = FUN_10003330(iStack_17dc,"lib_src\\tdr\\tdr_net.c",0x195);
                      uVar5 = FUN_10004f00(iStack_17f0,uVar5);
                      pcVar6 = "; entry<%s> of meta<%s> %s:%d";
                      iVar8 = FUN_1000f910(sVar7,"; entry<%s> of meta<%s> %s:%d",uVar5);
                      _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
                      break;
                    }
                    if ((*(byte *)(iStack_17f0 + 0x44) & 4) == 0) {
                      piVar15[9] = (int)puVar17 - piVar15[10];
                    }
                    else {
                      piVar15[9] = *(int *)(iStack_17f0 + 0x2c) * 2;
                    }
                    if (*(int *)(iStack_17dc + 0x10) == 0) {
                      iVar8 = *(int *)(iStack_17dc + 0x1c);
                      piVar15[3] = piVar15[3] + -1;
                      piVar15[10] = iVar8 + piVar15[10];
                      iStack_17e0 = piVar15[0xe];
                    }
                    else {
                      iVar1 = piVar15[4];
                      iVar8 = *(int *)(iStack_17dc + 0x2c);
                      piVar15[4] = iVar1 + 1;
                      if (iVar8 <= iVar1 + 1) {
                        iVar8 = *(int *)(iStack_17dc + 0x1c);
                        piVar15[3] = piVar15[3] + -1;
                        piVar15[4] = 0;
                        piVar15[10] = iVar8 + piVar15[10];
                        iStack_17e0 = piVar15[0xe];
                      }
                    }
                  }
                }
              }
              else if (*(int *)(iStack_17dc + 0x10) == 0) {
                piVar15[10] = piVar15[10] + *(int *)(iStack_17dc + 0x1c);
                piVar15[3] = iVar8 + -1;
                iStack_17e0 = piVar15[0xe];
              }
              else {
                iVar1 = *(int *)(iStack_17dc + 0x2c);
                piVar15[4] = iVar12 + 1;
                if (iVar1 <= iVar12 + 1) {
                  piVar15[4] = 0;
                  goto LAB_1000a6c6;
                }
              }
            }
LAB_1000b3e3:
            piVar15 = piVar18;
          } while (0 < iStack_17cc);
          local_179c[1] = iStack_1760;
          if (((int)local_17ec < 0) && (iVar8 = 1, 1 < iStack_17cc)) {
            piVar15 = aiStack_16a4;
            do {
              if ((*(byte *)(piVar15[-8] + 0x44) & 4) != 0) {
                local_179c[1] = local_179c[1] + *(int *)(aiStack_1784[iVar8 * 0x2f + 1] + 0x18);
                goto LAB_1000b69c;
              }
              local_179c[1] = local_179c[1] + *piVar15;
              iVar8 = iVar8 + 1;
              piVar15 = piVar15 + 0x2f;
            } while (iVar8 < iStack_17cc);
            local_17b8[1] = (int)puVar19 - *local_17b8;
          }
          else {
LAB_1000b69c:
            local_17b8[1] = (int)puVar19 - *local_17b8;
          }
        }
        else {
          sVar20 = 0x400;
          pcVar6 = (char *)FUN_1000f910();
          sVar20 = strnlen(pcVar6,sVar20);
          if ((int)sVar20 < 0x400) {
            sVar7 = 0x400 - sVar20;
          }
          else {
            sVar7 = 0;
          }
          pcVar6 = "; %s:%d";
          iVar8 = FUN_1000f910(sVar7,"; %s:%d","lib_src\\tdr\\tdr_net.c",0xf6);
          _snprintf((char *)(iVar8 + sVar20),sVar7,pcVar6);
          local_179c[1] = 0;
          local_17b8[1] = 0;
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_100016c0@100016c0 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, _snprintf_s, Ordinal_18, Ordinal_151
   strings:
     ""udp://%s:%d"" */

void __fastcall FUN_100016c0(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_9e8c;
  undefined4 local_9e88;
  undefined4 uStack_9e84;
  undefined4 uStack_9e80;
  undefined1 auStack_9e7c [6];
  short sStack_9e76;
  int iStack_9e70;
  undefined4 uStack_9e6c;
  undefined2 uStack_9e68;
  undefined2 uStack_9e66;
  char local_4fc0 [255];
  undefined1 local_4ec1;
  undefined1 auStack_4ec0 [20156];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&iStack_9e8c;
  local_9e88 = param_3;
  _snprintf_s(local_4fc0,0x100,0xffffffff,"udp://%s:%d",param_3,param_1 & 0xffff);
  local_4ec1 = 0;
  iVar2 = FUN_10049a70(local_4fc0,0);
  if (iVar2 < 0) {
    FUN_11a89daa();
    return;
  }
  uStack_9e6c = 100;
  uStack_9e68 = 0x18;
  uStack_9e66 = 0;
  iStack_9e8c = 0;
  do {
    iVar3 = FUN_10001280(iVar2,auStack_9e7c);
    if (-1 < iVar3) {
      piVar1 = param_2 + 0xb;
      *piVar1 = 0;
      param_2[0xc] = iVar2;
      *piVar1 = *piVar1 + 1;
      uStack_9e84 = 2;
      uStack_9e80 = 0;
      iVar3 = Ordinal_18(iVar2 + 1,piVar1,0,0,&uStack_9e84);
      if (((0 < iVar3) && (iVar3 = Ordinal_151(iVar2,piVar1), iVar3 != 0)) &&
         (iVar3 = FUN_10049bb0(iVar2,auStack_4ec0,0x4ebc,0), 0 < iVar3)) {
        iVar3 = FUN_10001100(*param_2,auStack_4ec0,iVar3,auStack_9e7c);
        if (iVar3 < 0) goto LAB_1000182e;
        if ((param_2[0x4d] == iStack_9e70) && (sStack_9e76 == 4)) {
          FUN_100013d0(local_9e88);
          FUN_10049770(iVar2);
          goto LAB_1000182e;
        }
      }
    }
    iStack_9e8c = iStack_9e8c + 1;
    if (2 < iStack_9e8c) {
      FUN_10049770(iVar2);
LAB_1000182e:
      FUN_11a89daa();
      return;
    }
  } while( true );
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_10001280@10001280 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe */

void __fastcall FUN_10001280(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 *param_4)

{
  int iVar1;
  undefined1 *local_4ed0;
  undefined4 local_4ecc;
  undefined2 *local_4ec8;
  undefined4 local_4ec4;
  undefined1 local_4ec0 [20156];
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&local_4ed0;
  param_4[3] = param_2;
  *(undefined4 *)(param_4 + 4) = 0xb;
  *param_4 = 0x7572;
  param_1[0x4d] = param_1[0x4d] + 1;
  *(int *)(param_4 + 6) = param_1[0x4d];
  local_4ec8 = param_4;
  local_4ecc = 0x4ebc;
  local_4ec4 = 0x4ebc;
  local_4ed0 = local_4ec0;
  iVar1 = Tdr__PackHostToNet(*(undefined4 *)(*param_1 + 0xc),&local_4ed0,&local_4ec8,0);
  if (iVar1 < 0) {
    FUN_11a89daa();
    return;
  }
  FUN_10049b90(param_3,local_4ed0,local_4ecc,0);
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_100013d0@100013d0 =====

/* [RE-AUTO c0]
   calls: calloc, strncpy_s, _snprintf_s
   strings:
     ""udp://%s:%d"" */

void FUN_100013d0(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  int unaff_EBX;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int unaff_ESI;
  int iVar12;
  bool bVar13;
  char *local_118;
  int local_114;
  char *local_110;
  int local_10c;
  int local_108;
  char local_104 [255];
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)&local_118;
  *(undefined4 *)(unaff_ESI + 0x10) = 1;
  pvVar4 = calloc(1,0x24);
  *(void **)(unaff_ESI + 0x14) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    pvVar4 = calloc(1,*(int *)(unaff_ESI + 0x10) * 0xeb4);
    *(void **)(unaff_ESI + 0x18) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x130) = 0;
      local_108 = 0;
      if (0 < *(int *)(unaff_ESI + 0x10)) {
        local_110 = (char *)(unaff_EBX + 0x18c);
        local_10c = 0;
        iVar12 = 0;
        do {
          iVar9 = 0;
          strncpy_s((char *)(*(int *)(unaff_ESI + 0x18) + iVar12),0x80,local_110,0xffffffff);
          *(undefined1 *)(iVar12 + 0x7f + *(int *)(unaff_ESI + 0x18)) = 0;
          *(undefined2 *)(iVar12 + 0x88 + *(int *)(unaff_ESI + 0x18)) =
               *(undefined2 *)(unaff_EBX + 4);
          *(undefined4 *)(iVar12 + 0x20c + *(int *)(unaff_ESI + 0x18)) =
               *(undefined4 *)(unaff_EBX + 0x188);
          local_114 = 0;
          if (0 < *(int *)(unaff_EBX + 0x188)) {
            local_118 = (char *)(unaff_EBX + 0x1ac);
            do {
              strncpy_s((char *)(iVar12 + iVar9 + 0x210 + *(int *)(unaff_ESI + 0x18)),0x20,
                        local_118 + -0x20,0xffffffff);
              *(undefined1 *)(iVar12 + iVar9 + 0x22f + *(int *)(unaff_ESI + 0x18)) = 0;
              uVar6 = *(undefined4 *)local_118;
              local_118 = local_118 + 0x24;
              *(undefined4 *)(iVar12 + iVar9 + 0x230 + *(int *)(unaff_ESI + 0x18)) = uVar6;
              local_114 = local_114 + 1;
              iVar9 = iVar9 + 0x24;
            } while (local_114 < *(int *)(unaff_EBX + 0x188));
          }
          *(undefined4 *)(iVar12 + 0x80 + *(int *)(unaff_ESI + 0x18)) = 0x10;
          pbVar8 = (byte *)(*(int *)(unaff_ESI + 0x18) + iVar12);
          pbVar5 = param_1;
          pbVar10 = pbVar8;
          do {
            bVar2 = *pbVar5;
            bVar13 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_10001561:
              iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_10001566;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar13 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_10001561;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar9 = 0;
LAB_10001566:
          iVar11 = 0;
          if (iVar9 == 0) {
            strncpy_s((char *)(pbVar8 + 0x690),0x20,(char *)(unaff_EBX + 0x60c),0xffffffff);
            *(undefined1 *)(iVar12 + 0x6af + *(int *)(unaff_ESI + 0x18)) = 0;
            *(undefined4 *)(iVar12 + 0x6b0 + *(int *)(unaff_ESI + 0x18)) =
                 *(undefined4 *)(unaff_EBX + 0x62c);
            local_114 = 0;
            if (0 < *(int *)(unaff_EBX + 0x62c)) {
              local_118 = (char *)(unaff_EBX + 0x630);
              do {
                strncpy_s((char *)(iVar12 + iVar11 + 0x6b4 + *(int *)(unaff_ESI + 0x18)),0x20,
                          local_118,0xffffffff);
                local_118 = local_118 + 0x20;
                *(undefined1 *)(iVar12 + iVar11 + 0x6d3 + *(int *)(unaff_ESI + 0x18)) = 0;
                local_114 = local_114 + 1;
                iVar11 = iVar11 + 0x20;
              } while (local_114 < *(int *)(unaff_EBX + 0x62c));
            }
            puVar1 = (uint *)(iVar12 + 0x80 + *(int *)(unaff_ESI + 0x18));
            *puVar1 = *puVar1 | 8;
          }
          pcVar3 = local_110;
          _snprintf_s(local_104,0x100,0xffffffff,"udp://%s:%d",local_110,
                      *(undefined4 *)(local_110 + 0x20));
          local_5 = 0;
          uVar6 = FUN_10049a70(local_104,0);
          *(undefined4 *)(local_10c + *(int *)(unaff_ESI + 0x14)) = uVar6;
          piVar7 = (int *)(*(int *)(unaff_ESI + 0x14) + local_10c);
          if (*piVar7 < 0) goto LAB_10001405;
          piVar7[1] = local_108;
          iVar9 = *(int *)(local_10c + *(int *)(unaff_ESI + 0x14));
          if (*(int *)(unaff_ESI + 0x130) < iVar9) {
            *(int *)(unaff_ESI + 0x130) = iVar9;
          }
          local_108 = local_108 + 1;
          local_10c = local_10c + 0x24;
          local_110 = pcVar3 + 0x24;
          iVar12 = iVar12 + 0xeb4;
        } while (local_108 < *(int *)(unaff_ESI + 0x10));
      }
      FUN_11a89daa();
      return;
    }
  }
LAB_10001405:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_10049a70@10049a70 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe */

void FUN_10049a70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_12bc [16];
  undefined1 local_12ac [4748];
  int local_20;
  undefined1 local_1c [16];
  uint local_c;
  int local_8;
  
  local_8 = 0x10049a7d;
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_100495c0(local_12bc,param_1);
  if (((iVar1 != -1) && (local_20 = FUN_10049260(local_12bc), local_20 != 0)) &&
     (local_8 = FUN_10049790(local_12bc,local_20), local_8 != -1)) {
    FUN_10049710(local_8,1);
    if (((*(int *)(local_20 + 4) < 1) || (2 < *(int *)(local_20 + 4))) ||
       ((iVar1 = FUN_10049020(local_12ac,local_1c), iVar1 < 0 ||
        (iVar1 = FUN_1004a420(local_8,local_1c,0x10,param_2), iVar1 < 0)))) {
      FUN_10049770(local_8);
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_10049020@10049020 =====

/* [RE-AUTO c0]
   calls: _wassert, memset, strchr, memcpy, strlen, strcpy, atoi, Ordinal_9, Ordinal_52
   strings:
     "u"..\\..\\..\\..\\..\\lib_src\\pal\\tnet.c""
     "u"a_pszAddr && a_pstIn"" */

void FUN_10049020(char *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  size_t sVar2;
  int iVar3;
  undefined2 local_94;
  char *local_90;
  char local_8c [128];
  uint local_c;
  int local_8;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  if ((param_1 == (char *)0x0) || (param_2 == (undefined2 *)0x0)) {
    _wassert(u_a_pszAddr____a_pstIn_11e14504,u________________lib_src_pal_tnet__11e144c0,0x65);
  }
  memset(param_2,0,0x10);
  *param_2 = 2;
  local_90 = strchr(param_1,0x3a);
  if (local_90 == (char *)0x0) {
    sVar2 = strlen(param_1);
    if (0x7f < sVar2) goto LAB_100491c5;
    strcpy(local_8c,param_1);
    local_90 = (char *)0x0;
  }
  else {
    if (0x7f < (int)local_90 - (int)param_1) goto LAB_100491c5;
    memcpy(local_8c,param_1,(int)local_90 - (int)param_1);
    local_90[(int)(local_8c + -(int)param_1)] = '\0';
    local_90 = local_90 + 1;
  }
  if (local_90 == (char *)0x0) {
    local_94 = 0;
  }
  else {
    iVar3 = atoi(local_90);
    local_94 = (undefined2)iVar3;
  }
  uVar1 = Ordinal_9(local_94);
  param_2[1] = uVar1;
  iVar3 = FUN_10048fe0(local_8c);
  if (iVar3 == 0) {
    local_8 = Ordinal_52(local_8c);
    if (local_8 != 0) {
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)**(undefined4 **)(local_8 + 0xc);
    }
  }
  else {
    FUN_10049c50(local_8c,param_2 + 2);
  }
LAB_100491c5:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_10001c00@10001c00 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe */

void FUN_10001c00(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_4ec0 [12];
  undefined4 uStack_4eb4;
  undefined4 local_4eb0;
  undefined4 local_4eac;
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)local_4ec0;
  local_4eb0 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_4eac = *(undefined4 *)(unaff_ESI + 0x20);
  iVar2 = FUN_10001280(*unaff_EDI,local_4ec0);
  if (iVar2 < 0) {
    unaff_EDI[8] = unaff_EDI[8] + 1;
    if (3 < (int)unaff_EDI[8]) {
      unaff_EBX[4] = 2;
    }
    FUN_11a89daa();
    return;
  }
  unaff_EBX[1] = *(undefined4 *)(unaff_ESI + 0x1c);
  uVar1 = *(undefined4 *)(unaff_ESI + 0x20);
  *unaff_EBX = uStack_4eb4;
  unaff_EBX[2] = uVar1;
  unaff_EBX[4] = 1;
  FUN_10001010(unaff_EDI[1] * 0xeb4 + *(int *)(unaff_ESI + 0x18),uStack_4eb4,
               *(undefined4 *)(unaff_ESI + 0x1c),*(undefined4 *)(unaff_ESI + 0x20));
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_11a89daa@11a89daa : FUN_100021e0@100021e0 =====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe */

void __fastcall FUN_100021e0(undefined4 *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_EDI;
  undefined1 local_4ec0 [12];
  undefined4 uStack_4eb4;
  undefined4 local_4eb0;
  ushort local_4eac;
  undefined2 local_4eaa;
  undefined4 local_4ea8;
  undefined4 uStack_4ea4;
  uint local_4;
  
  local_4 = DAT_11e11390 ^ (uint)local_4ec0;
  local_4eb0 = *(undefined4 *)(unaff_EDI + 8);
  local_4eac = *(ushort *)(unaff_EDI + 4);
  if (((local_4eac & 2) != 0) && (0 < *(int *)(unaff_EDI + 0x138))) {
    local_4eaa = 1;
    iVar3 = FUN_10001cc0(param_1,&local_4ea8,*(int *)(unaff_EDI + 0x138));
    if (-1 < iVar3) {
      param_1[6] = local_4ea8;
      param_1[7] = uStack_4ea4;
      goto LAB_1000224e;
    }
  }
  local_4eaa = 0;
LAB_1000224e:
  iVar3 = FUN_10001280(*param_1,local_4ec0);
  if (iVar3 < 0) {
    param_1[8] = param_1[8] + 1;
    if ((3 < (int)param_1[8]) && (param_1[2] = 4, (*(byte *)(unaff_EDI + 4) & 2) != 0)) {
      iVar3 = param_1[1] * 0xeb4 + *(int *)(unaff_EDI + 0x18);
      puVar1 = (uint *)(iVar3 + 0x80);
      *puVar1 = *puVar1 | 2;
      uVar2 = FUN_100021a0();
      *(undefined2 *)(iVar3 + 0x84) = uVar2;
    }
    FUN_11a89daa();
    return;
  }
  param_1[2] = 3;
  param_1[4] = *(undefined4 *)(unaff_EDI + 0x1c);
  param_1[5] = *(undefined4 *)(unaff_EDI + 0x20);
  FUN_10001010(param_1[1] * 0xeb4 + *(int *)(unaff_EDI + 0x18),uStack_4eb4,
               *(undefined4 *)(unaff_EDI + 0x1c),*(undefined4 *)(unaff_EDI + 0x20));
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_10255d50@10255d50 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10255d50(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_113168d0(param_2);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0xffffffff;
  }
  cVar1 = FUN_1046dc90(uVar2,&param_2);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = param_2;
  }
  return uVar2;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_10255d90@10255d90 =====

/* [RE-AUTO c0] */

void FUN_10255d90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_113168d0(param_1,param_2);
  FUN_1046dc90(uVar1);
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_104b8520@104b8520 =====

/* [RE-AUTO c0] */

void __thiscall FUN_104b8520(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_2c;
  char *local_28;
  uint local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = param_3;
  if (param_2 != 0) {
    uVar6 = 0;
    local_2c = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    if (local_2c != 0) {
      do {
        piVar7 = (int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
        iVar3 = FUN_11316bf0();
        if ((iVar3 != 0) && (piVar4 = (int *)FUN_113168d0(&DAT_11d9d32b), *piVar7 != *piVar4)) {
          if ((*(int *)(param_2 + 0x3c) == 0) ||
             ((cVar2 = FUN_1046dc90(piVar7,&local_24), cVar2 == '\0' || (local_24 == 0xffffffff))))
          {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4) = 0xfffffffe;
          }
          else {
            *(uint *)(*(int *)(param_1 + 0xc) + uVar6 * 4) = local_24;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_2c);
    }
    if ((local_28 != (char *)0x0) && (*local_28 != '\0')) {
      local_10 = local_20;
      pcVar1 = local_28;
      do {
        pcVar5 = pcVar1;
        pcVar1 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      local_c = local_10;
      FUN_100b62c0(local_28,pcVar5);
      piVar7 = (int *)FUN_1048b890(local_20);
      local_24 = 0;
      uVar6 = (piVar7[1] - *piVar7) / 0x1c;
      if (uVar6 != 0) {
        iVar3 = 0;
        do {
          iVar8 = *piVar7 + iVar3;
          if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 <= *(int *)(iVar8 + 0x18))
          break;
          FUN_11316810(iVar8);
          if (((*(int *)(param_2 + 0x3c) == 0) ||
              (cVar2 = FUN_1046dc90(&local_28,&local_2c), cVar2 == '\0')) ||
             (local_2c == 0xffffffff)) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(iVar8 + 0x18) * 4) = 0xfffffffe;
          }
          else {
            *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(iVar8 + 0x18) * 4) = local_2c;
          }
          iVar3 = iVar3 + 0x1c;
          local_24 = local_24 + 1;
        } while (local_24 < uVar6);
      }
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : CMonsterEntity::LoadAISettingsFromBlackboard@104a2af0 =====

/* [RE-R1]
   strings:
     ""BlackBoardFile""
     ""Properties.""
     "".AISetting.""
     ""PropertyCustom""
     "".AISetting""
     ""Health""
     ""RageDec""
     ""TailFire""
     ""mh_sharemem_addrinfo"" */

void __fastcall CMonsterEntity__LoadAISettingsFromBlackboard(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int **ppiVar7;
  int ***pppiVar8;
  char cVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 auStack_134 [36];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  float fStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  undefined1 auStack_bc [12];
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  undefined1 auStack_8c [20];
  undefined1 *puStack_78;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined1 auStack_5c [20];
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_134;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar16 = false;
  local_f4 = (byte *)0x0;
  local_ec = param_1;
  if (((param_1[0x4d] != 0) || (param_1[5] == 0)) ||
     (pbVar10 = (byte *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]),
     local_f4 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_104a3164;
  iVar11 = (**(code **)(*(int *)pbVar10 + 0x24))();
  param_1[0x3f] = iVar11;
  (**(code **)(*(int *)pbVar10 + 0x14))(&piStack_e8);
  ppppiStack_b0 = &pppiStack_c0;
  ppppiStack_ac = ppppiStack_b0;
  FUN_100b62c0();
  piVar6 = piStack_e8;
  piStack_e4 = (int *)0x0;
  if (piStack_e8 == (int *)0x0) {
LAB_104a2c67:
    uStack_fc = uStack_fc & 0xffffff;
  }
  else {
    pppiStack_c4 = &ppiStack_d4;
    bVar3 = false;
    bVar2 = false;
    bVar16 = false;
    pppiStack_c0 = pppiStack_c4;
    FUN_100b62c0("Properties.","");
    iVar11 = FUN_100f21e0();
    cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
    piVar6 = piStack_e8;
    if (cVar9 == '\0') {
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar16 = true;
      uVar12 = FUN_100b5f70("PropertyCustom",(int)&uStack_fc + 3,".AISetting.",auStack_bc);
      FUN_100f2140(auStack_94,uVar12);
      iVar11 = FUN_100f21e0();
      cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
      if (cVar9 == '\0') goto LAB_104a2c67;
    }
    bVar5 = true;
    bVar4 = true;
    uStack_fc = CONCAT13(1,(undefined3)uStack_fc);
    if (piStack_e4 == (int *)0x0) goto LAB_104a2c67;
  }
  if (((bVar16) && (puStack_48 != auStack_5c)) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  if (((bVar2) && (puStack_78 != auStack_8c)) && (puStack_78 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_78);
  }
  if (((bVar3) && (puStack_60 != auStack_74)) && (puStack_60 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_60);
  }
  if (((bVar4) && (puStack_90 != auStack_a4)) && (puStack_90 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_90);
  }
  if (((bVar5) && (pppiStack_c0 != &ppiStack_d4)) && (pppiStack_c0 != (int ***)0x0)) {
    FUN_10c3d5d0(pppiStack_c0);
  }
  if (uStack_fc._3_1_ != '\0') {
    (**(code **)(*param_1 + 0x18))(piStack_e4);
    piStack_f8 = (int *)(**(code **)(*piStack_f8 + 4))();
    if (0 < (int)(param_1[0x21] - param_1[0x20] & 0xfffffff8U)) {
      puVar13 = (undefined4 *)FUN_10478dc0(&piStack_f8);
      *puVar13 = param_1 + 0x18;
    }
    piVar6 = local_ec;
    pppiStack_c8 = &ppiStack_d8;
    pcVar18 = "";
    local_f4 = (byte *)0x0;
    pcVar17 = "PropertyCustom";
    pppiStack_c4 = pppiStack_c8;
    FUN_100b62c0();
    FUN_100f2140(&ppppiStack_b0,&fStack_e0,".AISetting",pcVar17,pcVar18);
    cVar9 = (**(code **)(*piVar6 + 0x30))();
    if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_90);
    }
    if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
      FUN_10c3d5d0(pppiStack_c0);
    }
    if (cVar9 != '\0') {
      ppiStack_dc = (int **)0x0;
      cVar9 = (**(code **)(*piStack_f0 + 0x38))("Health",&ppiStack_dc);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e4)) {
        ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffffff00);
        pppiStack_cc = &ppiStack_dc;
        pppiStack_c8 = pppiStack_cc;
        FUN_104a1b30(pppiStack_cc,&DAT_11da0cf4,(double)(float)piStack_e4);
        pppiVar8 = pppiStack_c8;
        piStack_100 = (int *)0xffffffff;
        FUN_113168d0("Health",&piStack_100);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_100,pppiVar8);
        }
        if ((pppiStack_c8 != &ppiStack_dc) && (pppiStack_c8 != (int ***)0x0)) {
          FUN_10c3d5d0();
        }
      }
      fStack_e0 = 0.0;
      cVar9 = (**(code **)(*piStack_f8 + 0x38))(&DAT_11dbc56c,&fStack_e0);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e8)) {
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_d4 = &piStack_e4;
        ppiStack_d0 = ppiStack_d4;
        FUN_104a1b30(ppiStack_d4,&DAT_11da0cf4,(double)(float)piStack_e8);
        ppiVar7 = ppiStack_d0;
        piStack_108 = (int *)0xffffffff;
        FUN_113168d0(&DAT_11dbc56c,&piStack_108);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_108,ppiVar7);
        }
        if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_fc = 0;
      cVar9 = (**(code **)(*piStack_100 + 0x38))("RageDec",&uStack_fc);
      if ((cVar9 != '\0') && (0.0 < fStack_104)) {
        local_ec = (int *)((uint)local_ec & 0xffffff00);
        ppiStack_dc = &local_ec;
        ppiStack_d8 = ppiStack_dc;
        FUN_104a1b30(ppiStack_dc,&DAT_11da0cf4,(double)fStack_104);
        ppiVar7 = ppiStack_d8;
        uStack_110 = 0xffffffff;
        uVar12 = FUN_113168d0("RageDec",&uStack_110);
        cVar9 = FUN_1046dc90(uVar12);
        if (cVar9 != '\0') {
          FUN_1046d130(uStack_110,ppiVar7);
        }
        if ((ppiStack_d8 != &local_ec) && (ppiStack_d8 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_10c = 0;
      cVar9 = (**(code **)(*piStack_108 + 0x3c))("TailFire",&uStack_10c);
      if (cVar9 != '\0') {
        pbVar15 = &DAT_11d9d32b;
        pbVar10 = local_f4;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_104a30a0:
            uVar14 = -(uint)bVar16 | 1;
            goto LAB_104a30a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_104a30a0;
          pbVar10 = pbVar10 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        uVar14 = 0;
LAB_104a30a5:
        if (uVar14 != 0) {
          pppiStack_c4 = &ppiStack_d4;
          ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
          pppiStack_c0 = pppiStack_c4;
          FUN_104a1b30();
          pppiVar8 = pppiStack_c0;
          piStack_f8 = (int *)0xffffffff;
          FUN_113168d0("TailFire",&piStack_f8);
          cVar9 = FUN_1046dc90();
          if (cVar9 != '\0') {
            FUN_1046d130(piStack_f8,pppiVar8);
          }
          if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_c0);
          }
        }
      }
    }
    if (piStack_f0 != (int *)0x0) {
      (**(code **)(*piStack_f0 + 8))();
    }
  }
  if ((puStack_a8 != auStack_bc) && (puStack_a8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_a8);
  }
  if (piStack_e8 != (int *)0x0) {
    (**(code **)(*piStack_e8 + 8))();
  }
LAB_104a3164:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_10258170@10258170 =====

/* [RE-AUTO c0]
   calls: tolower
   strings:
     ""HealthLoss""
     ""AbnormalHandleType"" */

void __thiscall FUN_10258170(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  uint uVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  uint *puStack_48;
  uint *puStack_44;
  undefined1 *puStack_40;
  undefined1 auStack_3c [12];
  undefined4 **ppuStack_30;
  char *pcStack_2c;
  undefined1 *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_6c;
  if (*(char *)(param_1 + 0x170) == '\0') goto LAB_1025881e;
  uVar9 = *param_2;
  local_5c = uVar9 - 0x89a;
  local_64 = uVar9;
  if (0xbb < local_5c) {
    if (0x18 < uVar9 - 0x516) goto LAB_1025881e;
    local_5c = uVar9 - 0x45a;
  }
  if (((int)local_5c < 0) ||
     ((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c)) / 0xc <= (int)local_5c))
  goto LAB_1025881e;
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  if (uVar9 == 0x528) {
    uVar4 = FUN_113168d0("HealthLoss",&local_60);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      uVar9 = param_2[4];
      local_58 = *(int *)(param_1 + 0x280) - uVar9;
      FUN_1025bd00(local_60,&local_58);
      *(uint *)(param_1 + 0x280) = uVar9;
      uVar9 = local_64;
    }
LAB_1025824d:
    local_5c = local_5c * 0xc;
    local_64 = *(int *)(param_1 + 0x10c) + local_5c;
    iVar5 = FUN_1025a520();
    if (iVar5 == 0) goto LAB_1025881e;
    if (uVar9 == 0x516) {
      FUN_104b57b0(0);
      iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
      if (iVar5 == 1) {
        param_2[4] = 0;
        param_2[5] = 1;
      }
      goto LAB_1025881e;
    }
    if (((uVar9 == 0x521) || (uVar9 == 0x51b)) || (uVar9 == 0x519)) {
      uStack_68 = uStack_68 & 0xffffff;
      FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
      if (cVar3 != '\0') goto LAB_102582fc;
      piVar8 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 8))
                                (*(undefined4 *)(param_1 + 300));
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 4))();
        iVar5 = (**(code **)(*piVar8 + 0x10))();
        if ((iVar5 != 0) && (iVar5 != -0x1288)) {
          local_60 = param_2[5];
          local_58 = param_2[6];
          if ((param_2[4] != 0xffffffff) && (iVar5 = FUN_11429ec0(param_2[4]), iVar5 != 0)) {
            FUN_11427e40(auStack_3c);
            puStack_48 = &local_58;
            local_58 = local_58 & 0xffffff00;
            puStack_44 = puStack_48;
            iVar5 = tolower((int)*pcStack_2c);
            uStack_68 = CONCAT31(uStack_68._1_3_,(char)iVar5);
            FUN_1025b1c0(extraout_ECX,uStack_68);
            iVar5 = FUN_100ede30(&ppuStack_30,1,0xffffffff);
            FUN_100d9260(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
            if ((ppuStack_30 != &puStack_44) && (ppuStack_30 != (uint **)0x0)) {
              FUN_10c3d5d0(ppuStack_30);
            }
            uVar4 = FUN_11316810(&stack0xffffff8c);
            FUN_1025bc60(*(undefined4 *)(param_1 + 0x228),uVar4);
            if ((puStack_40 != auStack_54) && (puStack_40 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_40);
            }
            if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_28);
            }
          }
          if (local_60 != 0xffffffff) {
            local_64 = local_60;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x26c),&local_64);
          }
          if (local_58 != 0xffffffff) {
            local_64 = local_58;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x270),&local_64);
          }
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 == 1) {
            param_2[7] = 0;
            uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
            cVar3 = FUN_1046dc90(uVar4);
            if (cVar3 != '\0') {
              FUN_1025bd00(uStack_6c,&stack0xffffff90);
            }
            piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0xc))
                                      (&stack0xffffff90,*(undefined4 *)(param_1 + 300));
            piVar8 = (int *)*piVar8;
            SmartPtr__ReleaseMember_1025aab0();
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x28))(param_2);
            }
          }
          goto LAB_1025881e;
        }
      }
    }
    uVar9 = local_5c;
    FUN_104b57b0(0);
    (**(code **)(**(int **)(uVar9 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
  }
  else {
    if (uVar9 != 0x51c) {
      if (uVar9 == 0x51d) {
        uVar9 = param_2[4];
        uStack_68 = uStack_68 & 0xffffff;
        local_64 = uVar9;
        FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
        if ((((uVar9 == 6) || (uVar9 == 5)) || (uVar9 == 4)) || ((uVar9 == 3 || (uVar9 == 0x12)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((uStack_68._3_1_ == '\0') || (!bVar1)) {
          if (uVar9 != 0xffffffff) {
            FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&local_64);
          }
          FUN_10256f40();
          iVar5 = FUN_10256f10();
          iVar7 = FUN_1025a520();
          if (iVar7 == 0) goto LAB_1025881e;
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(iVar5 * 0xc + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 != 1) goto LAB_1025881e;
        }
        param_2[7] = 0;
        goto LAB_1025881e;
      }
      goto LAB_1025824d;
    }
    local_64 = param_2[4];
    uStack_68 = uStack_68 & 0xffffff;
    local_5c = local_64;
    FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
    if ((cVar3 == '\0') || (local_64 == 6)) {
      if (local_64 != 0xffffffff) {
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&uStack_6c);
      }
      uStack_68 = param_2[6];
      if (uStack_68 != 0xffffffff) {
        FUN_1046e900(*(undefined4 *)(param_1 + 0x278));
        iVar5 = FUN_1046e900(*(undefined4 *)(param_1 + 0x274));
        if ((unaff_ESI != 0) && (iVar5 != 0)) {
          FUN_10468510(unaff_ESI);
        }
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x278),&stack0xffffff90);
      }
      FUN_10256f40();
      iVar5 = FUN_10256f10();
      local_64 = iVar5 * 0xc;
      if ((*(int *)(*(int *)(param_1 + 0x10c) + 4 + local_64) != 0) &&
         (*(int *)(*(int *)(param_1 + 0x10c) + local_64) != 0)) {
        param_2[7] = 1;
        FUN_104b57b0(0);
        iVar5 = (**(code **)(**(int **)(uStack_68 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
        if (iVar5 == 1) {
          param_2[7] = 0;
          uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
          cVar3 = FUN_1046dc90(uVar4);
          if (cVar3 != '\0') {
            FUN_1025bd00(uStack_6c,&stack0xffffff90);
          }
          piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          puVar6 = (undefined4 *)
                   (**(code **)(*piVar8 + 0xc))(&stack0xffffff90,*(undefined4 *)(param_1 + 300));
          piVar8 = (int *)*puVar6;
          SmartPtr__ReleaseMember_1025aab0();
          (**(code **)(*piVar8 + 0x28))(param_2);
        }
      }
      goto LAB_1025881e;
    }
LAB_102582fc:
    param_2[7] = 0;
    uVar4 = FUN_113168d0("AbnormalHandleType",&uStack_68);
    cVar3 = FUN_1046dc90(uVar4);
    if (cVar3 != '\0') {
      local_64 = 1;
      FUN_1025bd00(local_60,&local_64);
    }
  }
LAB_1025881e:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : BehaviorTree::RegisterBlackboardKeys@10258da0 =====

/* [RE-R1]
   strings:
     ""HitPart""
     ""HitDamageHealth""
     ""EnemyDamage""
     ""Health""
     ""HitSkillId""
     ""HitAttrDmgType""
     ""HitDamageType""
     ""HitPos""
     ""HitDirSim""
     ""ShooterId"" */

void __fastcall BehaviorTree__RegisterBlackboardKeys(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar3 = FUN_113168d0("HitPart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_113168d0("HitDamageHealth");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_113168d0("EnemyDamage");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  uVar3 = FUN_113168d0("Health",&local_c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 != '\0') {
    FUN_1025bfc0(local_c,param_1 + 0x280);
  }
  uVar3 = FUN_113168d0("HitSkillId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uVar3 = FUN_113168d0("HitAttrDmgType",param_1 + 0x23c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDamageType",param_1 + 0x238);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitPos",param_1 + 0x240);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDirSim",param_1 + 0x244);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterId",param_1 + 0x248);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterSrvId",param_1 + 0x24c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterMonsterInfoId",param_1 + 0x250);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Stimuli_Dead");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 600) = uVar3;
  uVar3 = FUN_113168d0("AbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  uVar3 = FUN_113168d0("LastAbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_113168d0("Input_AbnormalType",param_1 + 0x260);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("PartBrokenLevel",param_1 + 0x26c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("DamageCauserId",param_1 + 0x270);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Flag_Invulnerability",param_1 + 0x25c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_MasterAbnormalType",param_1 + 0x264);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_TargetAbnormalType",param_1 + 0x268);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  uVar3 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  uVar3 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  uVar3 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_113168d0("SelfFSMState");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar3 = FUN_113168d0("ClimbStartPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndDir");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_113168d0("KeepTarget");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  uVar3 = FUN_113168d0("KeepTargetID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_113168d0("CommondMoveTargetPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 700) = uVar3;
  uVar3 = FUN_113168d0("CommondMove");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_113168d0("HitSkillResID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  uVar3 = FUN_113168d0("HitSkillID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_113168d0("HitSkillLevel");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  uVar3 = FUN_113168d0("DamageFireAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  uVar3 = FUN_113168d0("DamageWaterAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_113168d0("DamageElectricAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  uVar3 = FUN_113168d0("DamageDragonAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_113168d0("DamageIceAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  uVar3 = FUN_113168d0("Cooperation_Attack_TargetId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  iVar1 = DAT_123bb90c;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(undefined4 *)(param_1 + 300));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(&local_8);
    if (local_8 != (int *)0x0) {
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName1",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 1) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 1;
          FUN_113168d0("NpcAnimationName1");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b14,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName2",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 2) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 2;
          FUN_113168d0("NpcAnimationName2");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b18,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName3",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 4) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 4;
          FUN_113168d0("NpcAnimationName3");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b1c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName4",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 8) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 8;
          FUN_113168d0("NpcAnimationName4");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b20,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName5",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x10) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x10;
          FUN_113168d0("NpcAnimationName5");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b24,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName6",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x20) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x20;
          FUN_113168d0("NpcAnimationName6");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b28,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName7",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x40) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x40;
          FUN_113168d0("NpcAnimationName7");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b2c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName8",&local_10);
      if (cVar2 != '\0') {
        if (-1 < (char)DAT_123c2b10) {
          DAT_123c2b10 = DAT_123c2b10 | 0x80;
          FUN_113168d0("NpcAnimationName8");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b30,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_10262840@10262840 =====

/* [RE-AUTO c0]
   strings:
     ""EventParam1""
     ""EventParam2""
     ""EventParam3""
     ""EventParam4""
     ""EventParamFloat""
     ""EventParamVec""
     ""EventParamVec2""
     ""EventParamStr"" */

void __fastcall FUN_10262840(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  BehaviorTree__RegisterBlackboardKeys();
  uVar2 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x324) = uVar2;
  uVar2 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x328) = uVar2;
  uVar2 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  uVar2 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  uVar2 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x334) = uVar2;
  uVar2 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  uVar2 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  uVar2 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
    return;
  }
  cVar1 = FUN_1046dc90(uVar2,&local_8);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = local_8;
  }
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_10263d60@10263d60 =====

/* [RE-AUTO c0]
   strings:
     ""GameStartTimeRecord""
     ""GameStart""
     ""CountDownSeconds""
     ""PlayerDeadScore""
     ""Class0MonsterDeadScore""
     ""GoalScore""
     ""CurMonsterNum"" */

void __fastcall FUN_10263d60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = FUN_113168d0(&DAT_11da7668);
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = FUN_113168d0("GameStartTimeRecord");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f4) = uVar2;
  uVar2 = FUN_113168d0("GameStart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  uVar2 = FUN_113168d0("CountDownSeconds");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  uVar2 = FUN_113168d0("PlayerDeadScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  uVar2 = FUN_113168d0("Class0MonsterDeadScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x304) = uVar2;
  uVar2 = FUN_113168d0("GoalScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  uVar2 = FUN_113168d0("CurMonsterNum");
  if (*(int *)(param_1 + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
    return;
  }
  cVar1 = FUN_1046dc90(uVar2,&local_8);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = local_8;
  }
  *(undefined4 *)(param_1 + 0x30c) = uVar2;
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_1046a8f0@1046a8f0 =====

/* [RE-AUTO c0]
   strings:
     ""String"" */

void __thiscall FUN_1046a8f0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_54 [4];
  char *pcStack_50;
  int *local_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_54;
  piVar1 = (int *)*param_2;
  local_4c = param_1;
  (**(code **)(*piVar1 + 0xc))();
  piVar8 = (int *)0x0;
  if (param_1[1] - *param_1 >> 2 != 0) {
    do {
      piVar9 = piVar8;
      FUN_1046dd30(&uStack_48);
      uVar5 = FUN_11317f30();
      uVar5 = FUN_113168d0(uVar5,&stack0xffffffa8);
      cVar4 = FUN_1046dc90(uVar5);
      if (cVar4 == '\0') {
        if ((DAT_123c2c60 & 1) == 0) {
          DAT_123c2c60 = DAT_123c2c60 | 1;
          FUN_113168d0(&DAT_11d9d32b);
        }
        piVar6 = &DAT_123c2c3c;
      }
      else {
        piVar6 = (int *)FUN_1046deb0(piVar9);
      }
      iVar2 = *piVar6;
      piVar6 = (int *)FUN_113168d0(&DAT_11dbaa7c);
      if (iVar2 == *piVar6) {
        if (((int *)(piVar9[1] - *piVar9 >> 2) <= piVar8) ||
           (cVar4 = FUN_102611f0(&uStack_48), cVar4 == '\0')) {
          FUN_1046a6d0(0,piVar8,piVar9[3]);
        }
        uVar5 = FUN_11317f30();
        (**(code **)(*piVar1 + 0x1c))(uVar5,&uStack_48);
      }
      else {
        piVar6 = (int *)FUN_113168d0("String");
        piVar9 = local_4c;
        if (iVar2 == *piVar6) {
          FUN_11316910();
          piVar9 = local_4c;
          if (((int *)(local_4c[1] - *local_4c >> 2) <= piVar8) ||
             (cVar4 = FUN_1025f0d0(auStack_44), cVar4 == '\0')) {
            FUN_1046a6d0(0,piVar8,piVar9[3]);
          }
          pcStack_50 = (char *)FUN_11317f30();
          uStack_40 = FUN_11317f30();
          pcVar3 = pcStack_50;
          puStack_14 = auStack_24;
          pcVar7 = pcStack_50;
          do {
            cVar4 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          pcVar7 = pcStack_50 + ((int)pcVar7 - (int)(pcStack_50 + 1));
          pcStack_50 = pcStack_50 + 1;
          puStack_10 = puStack_14;
          FUN_100b62c0(pcVar3,pcVar7);
          (**(code **)(*piVar1 + 0x18))(uStack_48,auStack_2c);
          if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_10);
          }
        }
      }
      piVar8 = (int *)((int)piVar8 + 1);
    } while (piVar8 < (int *)(piVar9[1] - *piVar9 >> 2));
  }
  (**(code **)(*piVar1 + 0x10))();
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_1046ab00@1046ab00 =====

/* [RE-AUTO c0]
   strings:
     ""String"" */

void __thiscall FUN_1046ab00(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  char *apcStack_34 [5];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  piVar1 = (int *)*param_2;
  (**(code **)(*piVar1 + 0xc))();
  uStack_40 = 0;
  if (param_1[1] - *param_1 >> 2 != 0) {
    do {
      FUN_1046dd30(auStack_3c,uStack_40);
      uStack_40 = 0;
      uVar5 = FUN_11317f30();
      uVar5 = FUN_113168d0(uVar5,&uStack_40);
      cVar4 = FUN_1046dc90(uVar5);
      if (cVar4 == '\0') {
        if ((DAT_123c2c60 & 1) == 0) {
          DAT_123c2c60 = DAT_123c2c60 | 1;
          FUN_113168d0(&DAT_11d9d32b);
        }
        piVar6 = &DAT_123c2c3c;
      }
      else {
        piVar6 = (int *)FUN_1046deb0(unaff_ESI);
      }
      iVar2 = *piVar6;
      piVar6 = (int *)FUN_113168d0(&DAT_11dbaa7c);
      if (iVar2 == *piVar6) {
        uVar5 = FUN_11317f30();
        (**(code **)(*piVar1 + 0x2c))(uVar5,auStack_38);
        uVar3 = uStack_40;
        if (((float)(double)((ulonglong)(double)fStack_20 & DAT_11de9c70) <= 0.0) &&
           ((float)(double)((ulonglong)(double)fStack_1c & DAT_11de9c70) <= 0.0)) {
          if ((float)(double)((ulonglong)(double)fStack_18 & DAT_11de9c70) <= 0.0)
          goto LAB_1046acda;
        }
        if (uStack_40 < (uint)(param_1[1] - *param_1 >> 2)) {
          fStack_c = fStack_18;
          fStack_14 = fStack_20;
          fStack_10 = fStack_1c;
          cVar4 = FUN_1025f590(&fStack_14);
          if (cVar4 == '\0') {
            FUN_1046a6d0(1,uVar3,param_1[3]);
          }
        }
        else {
          FUN_1046a6d0(1,uStack_40,param_1[3]);
        }
      }
      else {
        piVar6 = (int *)FUN_113168d0("String");
        if (iVar2 == *piVar6) {
          uVar5 = FUN_11317f30();
          cVar4 = (**(code **)(*piVar1 + 0x28))(uVar5,apcStack_34);
          if (((cVar4 != '\0') && (apcStack_34[0] != (char *)0x0)) && (*apcStack_34[0] != '\0')) {
            uVar5 = FUN_113168d0(apcStack_34[0]);
            FUN_1025b2a0(param_1,uVar5);
          }
        }
      }
LAB_1046acda:
      uStack_40 = uStack_40 + 1;
    } while (uStack_40 < (uint)(param_1[1] - *param_1 >> 2));
  }
  (**(code **)(*piVar1 + 0x10))();
  return;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_1046de40@1046de40 =====

/* [RE-AUTO c0] */

undefined4 * FUN_1046de40(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  local_8 = 0;
  uVar2 = FUN_11317f30();
  uVar2 = FUN_113168d0(uVar2,&local_8);
  cVar1 = FUN_1046dc90(uVar2);
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)FUN_1046deb0(local_8);
    return puVar3;
  }
  if ((DAT_123c2c60 & 1) == 0) {
    DAT_123c2c60 = DAT_123c2c60 | 1;
    FUN_113168d0(&DAT_11d9d32b);
  }
  return &DAT_123c2c3c;
}


// ===== caller of FUN_1046dc90@1046dc90 : FUN_1046e140@1046e140 =====

/* [RE-AUTO c0] */

undefined4 FUN_1046e140(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_10 [3];
  
  puVar4 = local_10;
  local_10[0] = 0xffffffff;
  uVar2 = FUN_113168d0(param_1,puVar4);
  cVar1 = FUN_1046dc90(uVar2);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 != 0) {
    FUN_1046deb0(puVar4);
    iVar3 = FUN_11318320(param_3);
    if (iVar3 != 0) {
      return 0;
    }
  }
  FUN_1046d130(puVar4,param_2);
  return 1;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10255d50@10255d50 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10255d50(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_113168d0(param_2);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0xffffffff;
  }
  cVar1 = FUN_1046dc90(uVar2,&param_2);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = param_2;
  }
  return uVar2;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10255d90@10255d90 =====

/* [RE-AUTO c0] */

void FUN_10255d90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_113168d0(param_1,param_2);
  FUN_1046dc90(uVar1);
  return;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10255dc0@10255dc0 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10255dc0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_113168d0(param_3);
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    cVar1 = FUN_1025cb50(&stack0xffffffec);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1046a6d0(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}


// ===== caller of FUN_113168d0@113168d0 : LoadBehaviorTree::ParseNode@10499f10 =====

/* WARNING: Removing unreachable block (ram,0x1049ab0b) */
/* WARNING: Removing unreachable block (ram,0x1049ab2b) */
/* WARNING: Type propagation algorithm not settling */
/* [RE-R1]
   src: LoadBehaviorTree.cpp
   strings:
     ""Node_id""
     ""Reference""
     ""Selector""
     ""SelectorType""
     ""Random""
     ""General""
     ""RandomAttack""
     ""Sequence""
     ""SequenceType""
     ""Filter"" */

void __thiscall
LoadBehaviorTree__ParseNode(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  int local_d8;
  undefined4 *local_d4;
  int local_d0 [3];
  undefined1 local_c1;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  char local_a2;
  char local_a1;
  int *local_a0;
  int *local_9c [7];
  undefined1 local_80 [20];
  undefined1 *local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  byte local_20 [16];
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_bc = *param_2;
  local_c0 = param_2;
  local_d8 = param_2[0x16];
  local_9c[0] = param_4;
  local_d4 = param_3;
  if (local_d8 == 0) {
    local_a0 = (int *)0x0;
  }
  else {
    local_a0 = *(int **)(local_d8 + 0x40);
  }
  local_d0[2] = 0;
  local_a8 = param_1;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Node_id",local_d0 + 2);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x38c,"Failed to find \'Node_id\' attribute.");
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x28))(&DAT_11dbabc0,local_20);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x39a,"Failed to find \'Type\' attribute.");
  }
  local_ac = (int *)(**(code **)(*(int *)*param_3 + 0x5c))(&DAT_11da7300);
  pbVar6 = local_c;
  local_a1 = '\x01';
  if ((param_4 == (int *)0x0) && (local_9c[0] = param_4, local_a0 != (int *)0x0)) {
    local_9c[0] = local_a0;
  }
  local_a2 = '\0';
  if (((int)local_10 - (int)local_c == 4) &&
     (iVar4 = FUN_100b7960(local_c,&DAT_11dbaf60,4), iVar4 == 0)) {
    local_a1 = '\0';
    piVar8 = local_9c[0];
    piVar10 = local_9c[0];
  }
  else {
    cVar3 = FUN_100fd0c0(local_20,"Reference");
    if (cVar3 != '\0') {
      pcVar5 = (char *)(**(code **)(*(int *)*param_3 + 0x5c))("Reference");
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        pcVar11 = pcVar5;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        if (pcVar11 != pcVar5 + 1) {
          local_28 = local_38;
          local_a0 = (int *)0x0;
          local_58 = local_68;
          local_40 = local_50;
          local_38[0] = 0;
          local_68[0] = 0;
          local_50[0] = 0;
          local_54 = local_58;
          local_3c = local_40;
          local_24 = local_28;
          cVar3 = FUN_1049c080(pcVar5,local_38,local_68,local_40);
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x3cc,"Failed to parse reference string: %s",pcVar5);
          }
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(100);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                   ,0x3b7,"Empty Reference!");
    }
    cVar3 = FUN_100fd0c0(local_20,"Selector");
    if (cVar3 != '\0') {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("SelectorType");
      if (pbVar6 == (byte *)0x0) {
LAB_1049abbf:
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x3f7,"Unsupported \'SelectorType\': \'%s\'",pbVar6);
      }
      pcVar5 = "Random";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a240:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a245;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a240;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a245:
      if (uVar7 != 0) {
        pcVar5 = "General";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a274:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a279;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a274;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a279:
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x54);
        }
        pcVar5 = "RandomAttack";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a2e2:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a2e7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a2e2;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a2e7:
        if (uVar7 != 0) goto LAB_1049abbf;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x70);
    }
    cVar3 = FUN_100fd0c0(local_20,"Sequence");
    if (cVar3 != '\0') {
      (**(code **)(*(int *)*param_3 + 0x5c))("SequenceType");
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x54);
    }
    cVar3 = FUN_100fd0c0(local_20,"Filter");
    if (cVar3 == '\0') {
      cVar3 = FUN_100fd0c0(local_20,"Action");
      if ((cVar3 == '\0') && (cVar3 = FUN_100fd0c0(local_20,"Condition"), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x493,"Unsupported Node Type: \'%s\'",pbVar6);
      }
      pcVar5 = "Action";
      do {
        bVar1 = *pbVar6;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a796:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a79b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a796;
        pbVar6 = pbVar6 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a79b:
      local_a2 = '\x01';
      iVar4 = (**(code **)(*(int *)*param_3 + 0x5c))("Operation");
      local_b4 = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x48e,"Failed to retrieve operation type!");
      }
      FUN_100b5f70(iVar4,&local_c1);
      FUN_11316810(local_80);
      cVar3 = (**(code **)(**(int **)(DAT_123bb90c + 0x14) + 0xc))(&local_b8);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x480,
                     "Failed to fined the leaf class for operation type: \'%s\', \n please ensure the corresponding leaf class has been registered in leaf factory!"
                     ,iVar4);
      }
      FUN_11316810(local_80);
      pcVar9 = (code *)(**(code **)(**(int **)(DAT_123bb90c + 0x14) + 8))
                                 (local_e0,local_9c[0],local_c0[0xe],0);
      piVar8 = (int *)(*pcVar9)();
      piVar8[0x17] = 2 - (uint)(uVar7 != 0);
      FUN_11316b10(local_b4);
      piVar10 = local_9c[0];
      if ((local_6c != local_80) && (local_6c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_6c);
        piVar10 = local_9c[0];
      }
    }
    else {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("Filter_Type");
      piVar10 = local_9c[0];
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x468,"Unsupported Filter Type: \'%s\'",0);
      }
      pcVar5 = "Logger";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a3e0:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a3e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a3e0;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a3e5:
      if (uVar7 == 0) {
        piVar8 = (int *)FUN_1049e300();
      }
      else {
        pcVar5 = "Timer";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a426:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a42b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a426;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a42b:
        if (uVar7 == 0) {
          local_d0[1] = 0xbf800000;
          cVar3 = (**(code **)(*(int *)*param_3 + 0x44))(&DAT_11dbb648,local_d0 + 1);
          piVar10 = local_9c[0];
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x422,"Failed to retrieve  \'Time\' param for Timer.");
          }
          piVar8 = (int *)FUN_1049e390();
          FUN_104bfed0();
        }
        else {
          pcVar5 = "Counter";
          pbVar12 = pbVar6;
          do {
            bVar1 = *pbVar12;
            bVar15 = bVar1 < (byte)*pcVar5;
            if (bVar1 != *pcVar5) {
LAB_1049a4a2:
              uVar7 = -(uint)bVar15 | 1;
              goto LAB_1049a4a7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar12[1];
            bVar15 = bVar1 < (byte)pcVar5[1];
            if (bVar1 != pcVar5[1]) goto LAB_1049a4a2;
            pbVar12 = pbVar12 + 2;
            pcVar5 = pcVar5 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_1049a4a7:
          if (uVar7 == 0) {
            local_d0[0] = -1;
            cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",local_d0);
            piVar10 = local_9c[0];
            if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x42f,"Failed to retrieve  \'Times\' param for Counter.");
            }
            piVar8 = (int *)FUN_1049e440();
            piVar8[0x17] = 0;
            piVar8[0x16] = local_d0[0];
          }
          else {
            pbVar13 = (byte *)&DAT_11dbb71c;
            pbVar12 = pbVar6;
            do {
              bVar1 = *pbVar12;
              bVar15 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_1049a520:
                uVar7 = -(uint)bVar15 | 1;
                goto LAB_1049a525;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar12[1];
              bVar15 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_1049a520;
              pbVar12 = pbVar12 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_1049a525:
            if (uVar7 == 0) {
              local_b4 = -1;
              cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b4);
              piVar10 = local_9c[0];
              if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                             "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                             ,0x43c,"Failed to retrieve  \'Times\' param for Loop.");
              }
              piVar8 = (int *)FUN_1049e4f0();
              piVar8[0x16] = local_b4;
              piVar8[0x17] = 0;
            }
            else {
              pcVar5 = "Until_Fails_Limited";
              pbVar12 = pbVar6;
              do {
                bVar1 = *pbVar12;
                bVar15 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_1049a5a0:
                  uVar7 = -(uint)bVar15 | 1;
                  goto LAB_1049a5a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar12[1];
                bVar15 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_1049a5a0;
                pbVar12 = pbVar12 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_1049a5a5:
              if (uVar7 == 0) {
                local_b8 = -1;
                cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b8);
                piVar10 = local_9c[0];
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                               "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                               ,0x449,"Failed to retrieve  \'Times\' param for Until_Fails_Limited."
                              );
                }
                piVar8 = (int *)FUN_1049e5a0();
                piVar8[0x16] = local_b8;
                piVar8[0x17] = 0;
              }
              else {
                pcVar5 = "Until_Fails";
                pbVar12 = pbVar6;
                do {
                  bVar1 = *pbVar12;
                  bVar15 = bVar1 < (byte)*pcVar5;
                  if (bVar1 != *pcVar5) {
LAB_1049a620:
                    uVar7 = -(uint)bVar15 | 1;
                    goto LAB_1049a625;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar12[1];
                  bVar15 = bVar1 < (byte)pcVar5[1];
                  if (bVar1 != pcVar5[1]) goto LAB_1049a620;
                  pbVar12 = pbVar12 + 2;
                  pcVar5 = pcVar5 + 2;
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_1049a625:
                if (uVar7 == 0) {
                  piVar8 = (int *)FUN_1049e650();
                }
                else {
                  pcVar5 = "Until_Success";
                  pbVar12 = pbVar6;
                  do {
                    bVar1 = *pbVar12;
                    bVar15 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_1049a666:
                      uVar7 = -(uint)bVar15 | 1;
                      goto LAB_1049a66b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar12[1];
                    bVar15 = bVar1 < (byte)pcVar5[1];
                    if (bVar1 != pcVar5[1]) goto LAB_1049a666;
                    pbVar12 = pbVar12 + 2;
                    pcVar5 = pcVar5 + 2;
                  } while (bVar1 != 0);
                  uVar7 = 0;
LAB_1049a66b:
                  if (uVar7 == 0) {
                    piVar8 = (int *)FUN_1049e6e0();
                  }
                  else {
                    pcVar5 = "Enter_Exit";
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < (byte)*pcVar5;
                      if (bVar1 != *pcVar5) {
LAB_1049a6b0:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a6b5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < (byte)pcVar5[1];
                      if (bVar1 != pcVar5[1]) goto LAB_1049a6b0;
                      pbVar12 = pbVar12 + 2;
                      pcVar5 = pcVar5 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a6b5:
                    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10c3d580(0x5c);
                    }
                    pbVar13 = &DAT_11dbb75c;
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < *pbVar13;
                      if (bVar1 != *pbVar13) {
LAB_1049a720:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a725;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < pbVar13[1];
                      if (bVar1 != pbVar13[1]) goto LAB_1049a720;
                      pbVar12 = pbVar12 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a725:
                    if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                                   ,0x462,"Unsupported filter type : \'%s\'!",pbVar6);
                    }
                    piVar8 = (int *)FUN_1049e800();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar8[9] = local_d0[2];
  FUN_113168d0(local_ac);
  FUN_11316b50(local_ac);
  piVar8[0xe] = piVar8[0xe] | local_c0[0xf];
  FUN_10493360();
  LoadBehaviorTree__ParseNodeCustomAttrs(param_3,piVar8);
  if (((local_a1 != '\0') && (piVar10 != (int *)0x0)) && (piVar8 != piVar10)) {
    puVar2 = (undefined4 *)piVar10[5];
    if (puVar2 == (undefined4 *)piVar10[6]) {
      local_ac = piVar8;
      FUN_10495eb0(puVar2,&local_ac,piVar10 + 4,1,1);
    }
    else {
      *puVar2 = piVar8;
      piVar10[5] = piVar10[5] + 4;
      local_ac = piVar8;
    }
  }
  if (local_d8 == 0) {
    iVar4 = FUN_10494210(1,*(undefined4 *)(local_bc + 0x38));
    if ((iVar4 != 0) && (piVar8[9] != -1)) {
      local_b0 = piVar8[9];
      local_ac = piVar8;
      FUN_10495de0(local_dc,&local_b0);
      if (*(int *)(iVar4 + 0x24) != 0) {
        piVar8[0x13] = *(int *)(iVar4 + 0x24);
        if ((char)local_d8 != '\0') goto LAB_1049a979;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),0,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x4bb,"Failed to record normal node into id map!");
  }
  if (local_a0 == (int *)0x0) {
    *(int **)(local_d8 + 0x40) = piVar8;
  }
LAB_1049a979:
  if (local_a2 == '\0') {
    piVar10 = (int *)(**(code **)(*(int *)*param_3 + 0x6c))("EventBT");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x50);
    }
    piVar10 = (int *)(**(code **)(*(int *)*local_d4 + 0x6c))("Connector");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
      local_a0 = (int *)0x0;
      iVar4 = (**(code **)(*piVar10 + 100))();
      if (0 < iVar4) {
        piVar14 = (int *)0x0;
        do {
          local_9c[0] = (int *)(**(code **)(*piVar10 + 0x68))(piVar14);
          if (((local_9c[0] == (int *)0x0) ||
              ((**(code **)(*local_9c[0] + 4))(), local_9c[0] == (int *)0x0)) ||
             (cVar3 = (**(code **)(*local_9c[0] + 0x10))(&DAT_11dbb4bc), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),local_9c,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x4d7,"Unrecognized child Node!");
          }
          cVar3 = LoadBehaviorTree__ParseNode(local_c0,local_9c,piVar8,local_a0);
          if (cVar3 == '\0') {
            if (local_9c[0] != (int *)0x0) {
              (**(code **)(*local_9c[0] + 8))();
            }
            (**(code **)(*piVar10 + 8))();
            if ((local_c != local_20) && (local_c != (byte *)0x0)) {
              FUN_10c3d5d0(local_c);
            }
            FUN_11a89daa();
            return;
          }
          if (local_9c[0] != (int *)0x0) {
            (**(code **)(*local_9c[0] + 8))();
          }
          local_a0 = (int *)((int)local_a0 + 1);
          iVar4 = (**(code **)(*piVar10 + 100))();
          piVar14 = local_a0;
        } while ((int)local_a0 < iVar4);
      }
      (**(code **)(*piVar10 + 8))();
    }
  }
  if ((local_c != local_20) && (local_c != (byte *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_104b8520@104b8520 =====

/* [RE-AUTO c0] */

void __thiscall FUN_104b8520(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_2c;
  char *local_28;
  uint local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = param_3;
  if (param_2 != 0) {
    uVar6 = 0;
    local_2c = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    if (local_2c != 0) {
      do {
        piVar7 = (int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
        iVar3 = FUN_11316bf0();
        if ((iVar3 != 0) && (piVar4 = (int *)FUN_113168d0(&DAT_11d9d32b), *piVar7 != *piVar4)) {
          if ((*(int *)(param_2 + 0x3c) == 0) ||
             ((cVar2 = FUN_1046dc90(piVar7,&local_24), cVar2 == '\0' || (local_24 == 0xffffffff))))
          {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4) = 0xfffffffe;
          }
          else {
            *(uint *)(*(int *)(param_1 + 0xc) + uVar6 * 4) = local_24;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_2c);
    }
    if ((local_28 != (char *)0x0) && (*local_28 != '\0')) {
      local_10 = local_20;
      pcVar1 = local_28;
      do {
        pcVar5 = pcVar1;
        pcVar1 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      local_c = local_10;
      FUN_100b62c0(local_28,pcVar5);
      piVar7 = (int *)FUN_1048b890(local_20);
      local_24 = 0;
      uVar6 = (piVar7[1] - *piVar7) / 0x1c;
      if (uVar6 != 0) {
        iVar3 = 0;
        do {
          iVar8 = *piVar7 + iVar3;
          if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 <= *(int *)(iVar8 + 0x18))
          break;
          FUN_11316810(iVar8);
          if (((*(int *)(param_2 + 0x3c) == 0) ||
              (cVar2 = FUN_1046dc90(&local_28,&local_2c), cVar2 == '\0')) ||
             (local_2c == 0xffffffff)) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(iVar8 + 0x18) * 4) = 0xfffffffe;
          }
          else {
            *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(iVar8 + 0x18) * 4) = local_2c;
          }
          iVar3 = iVar3 + 0x1c;
          local_24 = local_24 + 1;
        } while (local_24 < uVar6);
      }
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_113168d0@113168d0 : CMonsterEntity::LoadAISettingsFromBlackboard@104a2af0 =====

/* [RE-R1]
   strings:
     ""BlackBoardFile""
     ""Properties.""
     "".AISetting.""
     ""PropertyCustom""
     "".AISetting""
     ""Health""
     ""RageDec""
     ""TailFire""
     ""mh_sharemem_addrinfo"" */

void __fastcall CMonsterEntity__LoadAISettingsFromBlackboard(int *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int **ppiVar7;
  int ***pppiVar8;
  char cVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 auStack_134 [36];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte *local_f4;
  int *piStack_f0;
  int *local_ec;
  int *piStack_e8;
  int *piStack_e4;
  float fStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  undefined1 auStack_bc [12];
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  undefined1 *puStack_a8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  undefined1 auStack_8c [20];
  undefined1 *puStack_78;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined1 auStack_5c [20];
  undefined1 *puStack_48;
  uint local_44;
  
  local_44 = DAT_11e11390 ^ (uint)auStack_134;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar16 = false;
  local_f4 = (byte *)0x0;
  local_ec = param_1;
  if (((param_1[0x4d] != 0) || (param_1[5] == 0)) ||
     (pbVar10 = (byte *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]),
     local_f4 = pbVar10, pbVar10 == (byte *)0x0)) goto LAB_104a3164;
  iVar11 = (**(code **)(*(int *)pbVar10 + 0x24))();
  param_1[0x3f] = iVar11;
  (**(code **)(*(int *)pbVar10 + 0x14))(&piStack_e8);
  ppppiStack_b0 = &pppiStack_c0;
  ppppiStack_ac = ppppiStack_b0;
  FUN_100b62c0();
  piVar6 = piStack_e8;
  piStack_e4 = (int *)0x0;
  if (piStack_e8 == (int *)0x0) {
LAB_104a2c67:
    uStack_fc = uStack_fc & 0xffffff;
  }
  else {
    pppiStack_c4 = &ppiStack_d4;
    bVar3 = false;
    bVar2 = false;
    bVar16 = false;
    pppiStack_c0 = pppiStack_c4;
    FUN_100b62c0("Properties.","");
    iVar11 = FUN_100f21e0();
    cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
    piVar6 = piStack_e8;
    if (cVar9 == '\0') {
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar16 = true;
      uVar12 = FUN_100b5f70("PropertyCustom",(int)&uStack_fc + 3,".AISetting.",auStack_bc);
      FUN_100f2140(auStack_94,uVar12);
      iVar11 = FUN_100f21e0();
      cVar9 = (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(iVar11 + 0x14),&local_ec);
      if (cVar9 == '\0') goto LAB_104a2c67;
    }
    bVar5 = true;
    bVar4 = true;
    uStack_fc = CONCAT13(1,(undefined3)uStack_fc);
    if (piStack_e4 == (int *)0x0) goto LAB_104a2c67;
  }
  if (((bVar16) && (puStack_48 != auStack_5c)) && (puStack_48 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_48);
  }
  if (((bVar2) && (puStack_78 != auStack_8c)) && (puStack_78 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_78);
  }
  if (((bVar3) && (puStack_60 != auStack_74)) && (puStack_60 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_60);
  }
  if (((bVar4) && (puStack_90 != auStack_a4)) && (puStack_90 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_90);
  }
  if (((bVar5) && (pppiStack_c0 != &ppiStack_d4)) && (pppiStack_c0 != (int ***)0x0)) {
    FUN_10c3d5d0(pppiStack_c0);
  }
  if (uStack_fc._3_1_ != '\0') {
    (**(code **)(*param_1 + 0x18))(piStack_e4);
    piStack_f8 = (int *)(**(code **)(*piStack_f8 + 4))();
    if (0 < (int)(param_1[0x21] - param_1[0x20] & 0xfffffff8U)) {
      puVar13 = (undefined4 *)FUN_10478dc0(&piStack_f8);
      *puVar13 = param_1 + 0x18;
    }
    piVar6 = local_ec;
    pppiStack_c8 = &ppiStack_d8;
    pcVar18 = "";
    local_f4 = (byte *)0x0;
    pcVar17 = "PropertyCustom";
    pppiStack_c4 = pppiStack_c8;
    FUN_100b62c0();
    FUN_100f2140(&ppppiStack_b0,&fStack_e0,".AISetting",pcVar17,pcVar18);
    cVar9 = (**(code **)(*piVar6 + 0x30))();
    if ((puStack_90 != auStack_a4) && (puStack_90 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_90);
    }
    if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
      FUN_10c3d5d0(pppiStack_c0);
    }
    if (cVar9 != '\0') {
      ppiStack_dc = (int **)0x0;
      cVar9 = (**(code **)(*piStack_f0 + 0x38))("Health",&ppiStack_dc);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e4)) {
        ppiStack_dc = (int **)((uint)ppiStack_dc & 0xffffff00);
        pppiStack_cc = &ppiStack_dc;
        pppiStack_c8 = pppiStack_cc;
        FUN_104a1b30(pppiStack_cc,&DAT_11da0cf4,(double)(float)piStack_e4);
        pppiVar8 = pppiStack_c8;
        piStack_100 = (int *)0xffffffff;
        FUN_113168d0("Health",&piStack_100);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_100,pppiVar8);
        }
        if ((pppiStack_c8 != &ppiStack_dc) && (pppiStack_c8 != (int ***)0x0)) {
          FUN_10c3d5d0();
        }
      }
      fStack_e0 = 0.0;
      cVar9 = (**(code **)(*piStack_f8 + 0x38))(&DAT_11dbc56c,&fStack_e0);
      if ((cVar9 != '\0') && (0.0 < (float)piStack_e8)) {
        piStack_e4 = (int *)((uint)piStack_e4 & 0xffffff00);
        ppiStack_d4 = &piStack_e4;
        ppiStack_d0 = ppiStack_d4;
        FUN_104a1b30(ppiStack_d4,&DAT_11da0cf4,(double)(float)piStack_e8);
        ppiVar7 = ppiStack_d0;
        piStack_108 = (int *)0xffffffff;
        FUN_113168d0(&DAT_11dbc56c,&piStack_108);
        cVar9 = FUN_1046dc90();
        if (cVar9 != '\0') {
          FUN_1046d130(piStack_108,ppiVar7);
        }
        if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_fc = 0;
      cVar9 = (**(code **)(*piStack_100 + 0x38))("RageDec",&uStack_fc);
      if ((cVar9 != '\0') && (0.0 < fStack_104)) {
        local_ec = (int *)((uint)local_ec & 0xffffff00);
        ppiStack_dc = &local_ec;
        ppiStack_d8 = ppiStack_dc;
        FUN_104a1b30(ppiStack_dc,&DAT_11da0cf4,(double)fStack_104);
        ppiVar7 = ppiStack_d8;
        uStack_110 = 0xffffffff;
        uVar12 = FUN_113168d0("RageDec",&uStack_110);
        cVar9 = FUN_1046dc90(uVar12);
        if (cVar9 != '\0') {
          FUN_1046d130(uStack_110,ppiVar7);
        }
        if ((ppiStack_d8 != &local_ec) && (ppiStack_d8 != (int **)0x0)) {
          FUN_10c3d5d0();
        }
      }
      uStack_10c = 0;
      cVar9 = (**(code **)(*piStack_108 + 0x3c))("TailFire",&uStack_10c);
      if (cVar9 != '\0') {
        pbVar15 = &DAT_11d9d32b;
        pbVar10 = local_f4;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < *pbVar15;
          if (bVar1 != *pbVar15) {
LAB_104a30a0:
            uVar14 = -(uint)bVar16 | 1;
            goto LAB_104a30a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < pbVar15[1];
          if (bVar1 != pbVar15[1]) goto LAB_104a30a0;
          pbVar10 = pbVar10 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar1 != 0);
        uVar14 = 0;
LAB_104a30a5:
        if (uVar14 != 0) {
          pppiStack_c4 = &ppiStack_d4;
          ppiStack_d4 = (int **)((uint)ppiStack_d4 & 0xffffff00);
          pppiStack_c0 = pppiStack_c4;
          FUN_104a1b30();
          pppiVar8 = pppiStack_c0;
          piStack_f8 = (int *)0xffffffff;
          FUN_113168d0("TailFire",&piStack_f8);
          cVar9 = FUN_1046dc90();
          if (cVar9 != '\0') {
            FUN_1046d130(piStack_f8,pppiVar8);
          }
          if ((pppiStack_c0 != &ppiStack_d4) && (pppiStack_c0 != (int ***)0x0)) {
            FUN_10c3d5d0(pppiStack_c0);
          }
        }
      }
    }
    if (piStack_f0 != (int *)0x0) {
      (**(code **)(*piStack_f0 + 8))();
    }
  }
  if ((puStack_a8 != auStack_bc) && (puStack_a8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_a8);
  }
  if (piStack_e8 != (int *)0x0) {
    (**(code **)(*piStack_e8 + 8))();
  }
LAB_104a3164:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_1046deb0@1046deb0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1046deb0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint unaff_ESI;
  uint uVar4;
  undefined1 auStack_2c [20];
  char cStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_2c;
  if ((DAT_123c2c1c & 1) == 0) {
    DAT_123c2c1c = DAT_123c2c1c | 1;
    FUN_113168d0(&DAT_11d9d32b);
  }
  if (param_2 < 1000000) {
    if (param_2 < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3)) {
      FUN_11a89daa();
      return;
    }
  }
  else {
    iVar3 = param_2 - 1000000;
    if (iVar3 < 0) goto LAB_1046e0e2;
    uVar4 = 1;
    if ((((*(char *)(param_1 + 0x60) == '\0') || (*(int **)(param_1 + 0x1c) == (int *)0x0)) ||
        (piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))
                                   (*(undefined4 *)(param_1 + 0x5c)), piVar1 == (int *)0x0)) ||
       (piVar1 = (int *)(**(code **)(*piVar1 + 4))(), piVar1 == (int *)0x0)) goto LAB_1046dfd7;
    iVar2 = (**(code **)(*piVar1 + 0x14))();
    if (iVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(auStack_2c,iVar3);
      if (cStack_18 != '\0') {
        uVar4 = unaff_ESI;
      }
      FUN_1046de20();
    }
    else if (iVar2 == 1) {
      iVar3 = FUN_1046c860(iVar3);
      if (iVar3 == 0) goto LAB_1046dfd7;
      uVar4 = FUN_116941a0();
    }
    else {
      if ((iVar2 != 2) || (iVar3 = FUN_1046c7c0(iVar3), iVar3 == 0)) goto LAB_1046dfd7;
      uVar4 = FUN_116941a0();
    }
    if (uVar4 < 5) {
LAB_1046dfd7:
                    /* WARNING: Could not recover jumptable at 0x1046dfd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_1046e0fc + uVar4 * 4))();
      return;
    }
  }
LAB_1046e0e2:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_113168d0@113168d0 : CBehaviorTreeContext::BuildRuntimeNodeMaps@104a69f0 =====

/* [RE-R1]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

uint __fastcall CBehaviorTreeContext__BuildRuntimeNodeMaps(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint in_EAX;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  int iStack_20;
  int local_1c;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = *(uint *)(param_1 + 0x200);
    if (((in_EAX != *(uint *)(param_1 + 0x1fc)) &&
        (uVar2 = *(uint *)(DAT_123bb90c + 0x28), in_EAX = FUN_1048a120(param_1 + 0x1ec),
        in_EAX != uVar2)) && (iVar8 = *(int *)(in_EAX + 0x28), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar8 + 0x80);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 300);
      local_8 = iVar8;
      FUN_1046f170(iVar8 + 0x84);
      FUN_104a2a90();
      iVar10 = *(int *)(iVar8 + 0x10);
      while (local_10 = iVar10, iVar10 != iVar8 + 8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        uVar9 = extraout_ECX;
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          iVar10 = local_1c;
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
          FUN_11316810(*(int *)(local_8 + 0x60) + 0x10);
          FUN_113168d0(*(undefined4 *)(iVar10 + 0x9c),&local_c);
          iVar6 = FUN_113182e0();
          uVar9 = extraout_ECX_00;
          if (iVar6 == 0) {
            *(ulonglong *)(param_1 + 0x118) = CONCAT44(iStack_20,local_24);
            *(int *)(param_1 + 0x120) = iVar10;
          }
        }
        FUN_104a7460(local_18,uVar9);
        iVar10 = local_10;
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b990(*(undefined4 *)(param_1 + 0x34));
        *(int *)(param_1 + 0x38) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x3c) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      iVar8 = local_8 + 0x20;
      iVar10 = *(int *)(local_8 + 0x28);
      while (iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar6 = *(int *)(iVar10 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar10 = iVar6;
              iVar6 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar6) {
            iVar10 = iVar6;
          }
        }
        else {
          for (iVar7 = *(int *)(iVar6 + 8); iVar10 = iVar6, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8))
          {
            iVar6 = iVar7;
          }
        }
      }
      iVar8 = local_8 + 0x44;
      iVar10 = *(int *)(local_8 + 0x4c);
      iVar6 = local_8;
      while (local_8 = iVar6, iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a86b0(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar7 = *(int *)(iVar10 + 0xc);
        iVar6 = local_8;
        if (iVar7 == 0) {
          iVar7 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar10 = iVar7;
              iVar7 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar7) {
            iVar10 = iVar7;
          }
        }
        else {
          for (iVar4 = *(int *)(iVar7 + 8); iVar10 = iVar7, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8))
          {
            iVar7 = iVar4;
          }
        }
      }
      local_24 = 0;
      iStack_20 = 0;
      local_1c = 0;
      FUN_1025a680(*(undefined4 *)(iVar6 + 0x7c),&local_24);
      iVar8 = 0;
      local_10 = 0;
      if (0 < *(int *)(iVar6 + 0x7c)) {
        local_c = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar6 + 0x38) + local_10 * 4);
          if (piVar3 != (int *)0x0) {
            piVar3[1] = piVar3[1] + 1;
            iVar8 = *(int *)(param_1 + 0x10c);
            puVar5 = (undefined8 *)FUN_104a6d40(&local_24,piVar3);
            *(undefined8 *)(iVar8 + local_c) = *puVar5;
            *(undefined4 *)(iVar8 + 8 + local_c) = *(undefined4 *)(puVar5 + 1);
            piVar1 = piVar3 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
            else if (piVar3[1] < 0) {
              _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",
                       0x18c);
            }
          }
          local_c = local_c + 0xc;
          iVar8 = local_10 + 1;
          iVar6 = local_8;
          local_10 = iVar8;
        } while (iVar8 < *(int *)(local_8 + 0x7c));
      }
      *(undefined1 *)(param_1 + 0x171) = 1;
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10258170@10258170 =====

/* [RE-AUTO c0]
   calls: tolower
   strings:
     ""HealthLoss""
     ""AbnormalHandleType"" */

void __thiscall FUN_10258170(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  uint uVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  uint *puStack_48;
  uint *puStack_44;
  undefined1 *puStack_40;
  undefined1 auStack_3c [12];
  undefined4 **ppuStack_30;
  char *pcStack_2c;
  undefined1 *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_6c;
  if (*(char *)(param_1 + 0x170) == '\0') goto LAB_1025881e;
  uVar9 = *param_2;
  local_5c = uVar9 - 0x89a;
  local_64 = uVar9;
  if (0xbb < local_5c) {
    if (0x18 < uVar9 - 0x516) goto LAB_1025881e;
    local_5c = uVar9 - 0x45a;
  }
  if (((int)local_5c < 0) ||
     ((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c)) / 0xc <= (int)local_5c))
  goto LAB_1025881e;
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  if (uVar9 == 0x528) {
    uVar4 = FUN_113168d0("HealthLoss",&local_60);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      uVar9 = param_2[4];
      local_58 = *(int *)(param_1 + 0x280) - uVar9;
      FUN_1025bd00(local_60,&local_58);
      *(uint *)(param_1 + 0x280) = uVar9;
      uVar9 = local_64;
    }
LAB_1025824d:
    local_5c = local_5c * 0xc;
    local_64 = *(int *)(param_1 + 0x10c) + local_5c;
    iVar5 = FUN_1025a520();
    if (iVar5 == 0) goto LAB_1025881e;
    if (uVar9 == 0x516) {
      FUN_104b57b0(0);
      iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
      if (iVar5 == 1) {
        param_2[4] = 0;
        param_2[5] = 1;
      }
      goto LAB_1025881e;
    }
    if (((uVar9 == 0x521) || (uVar9 == 0x51b)) || (uVar9 == 0x519)) {
      uStack_68 = uStack_68 & 0xffffff;
      FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
      if (cVar3 != '\0') goto LAB_102582fc;
      piVar8 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 8))
                                (*(undefined4 *)(param_1 + 300));
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 4))();
        iVar5 = (**(code **)(*piVar8 + 0x10))();
        if ((iVar5 != 0) && (iVar5 != -0x1288)) {
          local_60 = param_2[5];
          local_58 = param_2[6];
          if ((param_2[4] != 0xffffffff) && (iVar5 = FUN_11429ec0(param_2[4]), iVar5 != 0)) {
            FUN_11427e40(auStack_3c);
            puStack_48 = &local_58;
            local_58 = local_58 & 0xffffff00;
            puStack_44 = puStack_48;
            iVar5 = tolower((int)*pcStack_2c);
            uStack_68 = CONCAT31(uStack_68._1_3_,(char)iVar5);
            FUN_1025b1c0(extraout_ECX,uStack_68);
            iVar5 = FUN_100ede30(&ppuStack_30,1,0xffffffff);
            FUN_100d9260(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
            if ((ppuStack_30 != &puStack_44) && (ppuStack_30 != (uint **)0x0)) {
              FUN_10c3d5d0(ppuStack_30);
            }
            uVar4 = FUN_11316810(&stack0xffffff8c);
            FUN_1025bc60(*(undefined4 *)(param_1 + 0x228),uVar4);
            if ((puStack_40 != auStack_54) && (puStack_40 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_40);
            }
            if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_28);
            }
          }
          if (local_60 != 0xffffffff) {
            local_64 = local_60;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x26c),&local_64);
          }
          if (local_58 != 0xffffffff) {
            local_64 = local_58;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x270),&local_64);
          }
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 == 1) {
            param_2[7] = 0;
            uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
            cVar3 = FUN_1046dc90(uVar4);
            if (cVar3 != '\0') {
              FUN_1025bd00(uStack_6c,&stack0xffffff90);
            }
            piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0xc))
                                      (&stack0xffffff90,*(undefined4 *)(param_1 + 300));
            piVar8 = (int *)*piVar8;
            SmartPtr__ReleaseMember_1025aab0();
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x28))(param_2);
            }
          }
          goto LAB_1025881e;
        }
      }
    }
    uVar9 = local_5c;
    FUN_104b57b0(0);
    (**(code **)(**(int **)(uVar9 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
  }
  else {
    if (uVar9 != 0x51c) {
      if (uVar9 == 0x51d) {
        uVar9 = param_2[4];
        uStack_68 = uStack_68 & 0xffffff;
        local_64 = uVar9;
        FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
        if ((((uVar9 == 6) || (uVar9 == 5)) || (uVar9 == 4)) || ((uVar9 == 3 || (uVar9 == 0x12)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((uStack_68._3_1_ == '\0') || (!bVar1)) {
          if (uVar9 != 0xffffffff) {
            FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&local_64);
          }
          FUN_10256f40();
          iVar5 = FUN_10256f10();
          iVar7 = FUN_1025a520();
          if (iVar7 == 0) goto LAB_1025881e;
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(iVar5 * 0xc + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 != 1) goto LAB_1025881e;
        }
        param_2[7] = 0;
        goto LAB_1025881e;
      }
      goto LAB_1025824d;
    }
    local_64 = param_2[4];
    uStack_68 = uStack_68 & 0xffffff;
    local_5c = local_64;
    FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
    if ((cVar3 == '\0') || (local_64 == 6)) {
      if (local_64 != 0xffffffff) {
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&uStack_6c);
      }
      uStack_68 = param_2[6];
      if (uStack_68 != 0xffffffff) {
        FUN_1046e900(*(undefined4 *)(param_1 + 0x278));
        iVar5 = FUN_1046e900(*(undefined4 *)(param_1 + 0x274));
        if ((unaff_ESI != 0) && (iVar5 != 0)) {
          FUN_10468510(unaff_ESI);
        }
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x278),&stack0xffffff90);
      }
      FUN_10256f40();
      iVar5 = FUN_10256f10();
      local_64 = iVar5 * 0xc;
      if ((*(int *)(*(int *)(param_1 + 0x10c) + 4 + local_64) != 0) &&
         (*(int *)(*(int *)(param_1 + 0x10c) + local_64) != 0)) {
        param_2[7] = 1;
        FUN_104b57b0(0);
        iVar5 = (**(code **)(**(int **)(uStack_68 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
        if (iVar5 == 1) {
          param_2[7] = 0;
          uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
          cVar3 = FUN_1046dc90(uVar4);
          if (cVar3 != '\0') {
            FUN_1025bd00(uStack_6c,&stack0xffffff90);
          }
          piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          puVar6 = (undefined4 *)
                   (**(code **)(*piVar8 + 0xc))(&stack0xffffff90,*(undefined4 *)(param_1 + 300));
          piVar8 = (int *)*puVar6;
          SmartPtr__ReleaseMember_1025aab0();
          (**(code **)(*piVar8 + 0x28))(param_2);
        }
      }
      goto LAB_1025881e;
    }
LAB_102582fc:
    param_2[7] = 0;
    uVar4 = FUN_113168d0("AbnormalHandleType",&uStack_68);
    cVar3 = FUN_1046dc90(uVar4);
    if (cVar3 != '\0') {
      local_64 = 1;
      FUN_1025bd00(local_60,&local_64);
    }
  }
LAB_1025881e:
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_113168d0@113168d0 : BehaviorTree::RegisterBlackboardKeys@10258da0 =====

/* [RE-R1]
   strings:
     ""HitPart""
     ""HitDamageHealth""
     ""EnemyDamage""
     ""Health""
     ""HitSkillId""
     ""HitAttrDmgType""
     ""HitDamageType""
     ""HitPos""
     ""HitDirSim""
     ""ShooterId"" */

void __fastcall BehaviorTree__RegisterBlackboardKeys(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar3 = FUN_113168d0("HitPart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_113168d0("HitDamageHealth");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_113168d0("EnemyDamage");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  uVar3 = FUN_113168d0("Health",&local_c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 != '\0') {
    FUN_1025bfc0(local_c,param_1 + 0x280);
  }
  uVar3 = FUN_113168d0("HitSkillId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uVar3 = FUN_113168d0("HitAttrDmgType",param_1 + 0x23c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDamageType",param_1 + 0x238);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitPos",param_1 + 0x240);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDirSim",param_1 + 0x244);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterId",param_1 + 0x248);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterSrvId",param_1 + 0x24c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterMonsterInfoId",param_1 + 0x250);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Stimuli_Dead");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 600) = uVar3;
  uVar3 = FUN_113168d0("AbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  uVar3 = FUN_113168d0("LastAbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_113168d0("Input_AbnormalType",param_1 + 0x260);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("PartBrokenLevel",param_1 + 0x26c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("DamageCauserId",param_1 + 0x270);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Flag_Invulnerability",param_1 + 0x25c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_MasterAbnormalType",param_1 + 0x264);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_TargetAbnormalType",param_1 + 0x268);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  uVar3 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  uVar3 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  uVar3 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_113168d0("SelfFSMState");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar3 = FUN_113168d0("ClimbStartPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndDir");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_113168d0("KeepTarget");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  uVar3 = FUN_113168d0("KeepTargetID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_113168d0("CommondMoveTargetPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 700) = uVar3;
  uVar3 = FUN_113168d0("CommondMove");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_113168d0("HitSkillResID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  uVar3 = FUN_113168d0("HitSkillID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_113168d0("HitSkillLevel");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  uVar3 = FUN_113168d0("DamageFireAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  uVar3 = FUN_113168d0("DamageWaterAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_113168d0("DamageElectricAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  uVar3 = FUN_113168d0("DamageDragonAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_113168d0("DamageIceAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  uVar3 = FUN_113168d0("Cooperation_Attack_TargetId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  iVar1 = DAT_123bb90c;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(undefined4 *)(param_1 + 300));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(&local_8);
    if (local_8 != (int *)0x0) {
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName1",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 1) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 1;
          FUN_113168d0("NpcAnimationName1");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b14,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName2",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 2) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 2;
          FUN_113168d0("NpcAnimationName2");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b18,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName3",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 4) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 4;
          FUN_113168d0("NpcAnimationName3");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b1c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName4",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 8) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 8;
          FUN_113168d0("NpcAnimationName4");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b20,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName5",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x10) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x10;
          FUN_113168d0("NpcAnimationName5");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b24,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName6",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x20) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x20;
          FUN_113168d0("NpcAnimationName6");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b28,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName7",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x40) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x40;
          FUN_113168d0("NpcAnimationName7");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b2c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName8",&local_10);
      if (cVar2 != '\0') {
        if (-1 < (char)DAT_123c2b10) {
          DAT_123c2b10 = DAT_123c2b10 | 0x80;
          FUN_113168d0("NpcAnimationName8");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b30,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10262840@10262840 =====

/* [RE-AUTO c0]
   strings:
     ""EventParam1""
     ""EventParam2""
     ""EventParam3""
     ""EventParam4""
     ""EventParamFloat""
     ""EventParamVec""
     ""EventParamVec2""
     ""EventParamStr"" */

void __fastcall FUN_10262840(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  BehaviorTree__RegisterBlackboardKeys();
  uVar2 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x324) = uVar2;
  uVar2 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x328) = uVar2;
  uVar2 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  uVar2 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  uVar2 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x334) = uVar2;
  uVar2 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  uVar2 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  uVar2 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
    return;
  }
  cVar1 = FUN_1046dc90(uVar2,&local_8);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = local_8;
  }
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  return;
}


// ===== caller of FUN_113168d0@113168d0 : FUN_10263d60@10263d60 =====

/* [RE-AUTO c0]
   strings:
     ""GameStartTimeRecord""
     ""GameStart""
     ""CountDownSeconds""
     ""PlayerDeadScore""
     ""Class0MonsterDeadScore""
     ""GoalScore""
     ""CurMonsterNum"" */

void __fastcall FUN_10263d60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = FUN_113168d0(&DAT_11da7668);
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = FUN_113168d0("GameStartTimeRecord");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f4) = uVar2;
  uVar2 = FUN_113168d0("GameStart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  uVar2 = FUN_113168d0("CountDownSeconds");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  uVar2 = FUN_113168d0("PlayerDeadScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  uVar2 = FUN_113168d0("Class0MonsterDeadScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x304) = uVar2;
  uVar2 = FUN_113168d0("GoalScore");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = FUN_1046dc90(uVar2,&local_8);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = local_8;
    }
  }
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  uVar2 = FUN_113168d0("CurMonsterNum");
  if (*(int *)(param_1 + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
    return;
  }
  cVar1 = FUN_1046dc90(uVar2,&local_8);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    uVar2 = local_8;
  }
  *(undefined4 *)(param_1 + 0x30c) = uVar2;
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_11182d90@11182d90 =====

/* [RE-AUTO c0]
   calls: EnterCriticalSection, SetEvent, LeaveCriticalSection */

void __thiscall FUN_11182d90(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_21;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  local_10 = local_20;
  pcVar2 = param_2;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_c = local_10;
  FUN_100b62c0(param_2,pcVar3);
  iVar1 = *(int *)(param_1 + 0xc34);
  if (iVar1 == *(int *)(param_1 + 0xc38)) {
    FUN_100e2390(iVar1,local_20,&local_21,1,1);
  }
  else {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = iVar1;
      *(int *)(iVar1 + 0x14) = iVar1;
      FUN_100b62c0(local_c,local_10);
    }
    *(int *)(param_1 + 0xc34) = *(int *)(param_1 + 0xc34) + 0x18;
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  SetEvent(*(HANDLE *)(param_1 + 0xc2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc14));
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100e2390@100e2390 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_100e2390(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined1 *param_6)

{
  uint *unaff_ESI;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined1 *puStack_34;
  undefined1 auStack_28 [3];
  undefined1 local_25;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  if ((param_3 < *param_1) || (param_1[1] <= param_3)) {
    puStack_34 = param_6;
    puStack_3c = &local_25;
    uStack_38 = param_5;
    uStack_40 = param_3;
    FUN_100e2fc0(param_2);
  }
  else {
    puStack_34 = *(undefined1 **)(param_3 + 0x10);
    local_14 = local_24;
    uStack_38 = *(uint *)(param_3 + 0x14);
    puStack_3c = (undefined1 *)0x100e23ce;
    local_10 = local_14;
    FUN_100b62c0();
    puStack_3c = param_6;
    uStack_40 = param_5;
    FUN_100e2fc0(param_2,&stack0xffffffd4,&stack0xffffffd3);
    if ((unaff_ESI != &uStack_40) && (unaff_ESI != (uint *)0x0)) {
      FUN_10c3d5d0(unaff_ESI);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100e2fc0@100e2fc0 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_100e2fc0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  uint local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = FUN_100e3580(param_5);
  iVar1 = FUN_100e38d0(local_c,&local_c);
  local_10 = local_10 & 0xffffff00;
  iVar2 = FUN_100e3a80(*param_1,param_2,iVar1,local_10,&local_5);
  if (param_5 == 1) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = iVar2;
      *(int *)(iVar2 + 0x14) = iVar2;
      FUN_100b62c0(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x10));
    }
    iVar2 = iVar2 + 0x18;
  }
  else {
    iVar2 = FUN_100e3b00(iVar2,param_5,param_3);
  }
  if (param_6 == '\0') {
    param_5 = param_5 & 0xffffff00;
    iVar2 = FUN_100e3a80(param_2,param_1[1],iVar2,param_5,&stack0x00000017);
  }
  if (*param_1 != 0) {
    FUN_10c3d5d0(*param_1);
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar1 + local_c * 0x18;
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100e3b00@100e3b00 =====

/* [RE-AUTO c0] */

int FUN_100e3b00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x18;
  iVar2 = (iVar1 - param_1) / 0x18;
  if (iVar2 < 1) {
    return iVar1;
  }
  do {
    if (param_1 != 0) {
      *(int *)(param_1 + 0x10) = param_1;
      *(int *)(param_1 + 0x14) = param_1;
      FUN_100b62c0(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x10));
    }
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 0x18;
  } while (0 < iVar2);
  return iVar1;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100d6fd0@100d6fd0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_100d6fd0(int param_1,char *param_2,undefined1 *param_3,char param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 ***unaff_EDI;
  undefined4 **ppuStack_9c;
  undefined4 **ppuStack_98;
  undefined1 *puStack_94;
  char *pcStack_90;
  char *pcStack_8c;
  undefined4 uStack_80;
  char **ppcStack_7c;
  char **ppcStack_78;
  undefined4 *puStack_68;
  undefined1 auStack_64 [8];
  undefined1 local_5c [4];
  undefined4 **ppuStack_58;
  undefined4 **ppuStack_54;
  undefined4 *puStack_50;
  undefined1 *local_4c;
  undefined4 **local_48;
  undefined4 **appuStack_44 [2];
  undefined4 **ppuStack_3c;
  undefined4 **ppuStack_34;
  undefined4 **ppuStack_30;
  undefined4 **ppuStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_80;
  local_4c = local_5c;
  pcVar1 = param_2;
  do {
    pcStack_8c = pcVar1;
    pcVar1 = pcStack_8c + 1;
  } while (*pcStack_8c != '\0');
  pcStack_90 = param_2;
  puStack_94 = (undefined1 *)0x100d7017;
  local_48 = (undefined4 **)local_4c;
  FUN_100b62c0();
  puStack_94 = auStack_64;
  ppuStack_98 = (undefined4 ***)0x100d7023;
  iVar2 = FUN_100d9b10();
  if (iVar2 == param_1) {
    ppuStack_98 = ppuStack_58;
    ppcStack_7c = &pcStack_8c;
    ppuStack_9c = ppuStack_54;
    ppcStack_78 = ppcStack_7c;
    FUN_100b62c0();
    local_48 = &ppuStack_58;
    appuStack_44[0] = local_48;
    FUN_100b62c0(uStack_80,unaff_ESI);
    local_48 = (undefined4 **)param_3;
    if ((unaff_EDI != &ppuStack_9c) && (unaff_EDI != (undefined4 ***)0x0)) {
      FUN_10c3d5d0(unaff_EDI);
    }
    ppuStack_34 = appuStack_44;
    ppuStack_30 = ppuStack_34;
    FUN_100b62c0(local_4c,puStack_50);
    ppuStack_34 = (undefined4 **)puStack_50;
    FUN_100d8190(&stack0xffffff78,&local_4c);
    if (((undefined4 ***)ppuStack_20 != &ppuStack_34) &&
       ((undefined4 ***)ppuStack_20 != (undefined4 ***)0x0)) {
      ppuStack_98 = ppuStack_20;
      ppuStack_9c = (undefined4 ***)0x100d70dc;
      FUN_10c3d5d0();
    }
    if ((ppuStack_3c != &puStack_50) && ((undefined4 ***)ppuStack_3c != (undefined4 ***)0x0)) {
      ppuStack_98 = ppuStack_3c;
      ppuStack_9c = (undefined4 ***)0x100d70f5;
      FUN_10c3d5d0();
    }
  }
  else if (param_4 != '\0') {
    *(undefined1 **)(iVar2 + 0x28) = param_3;
  }
  if ((ppuStack_54 != &puStack_68) && ((undefined4 ***)ppuStack_54 != (undefined4 ***)0x0)) {
    ppuStack_98 = ppuStack_54;
    ppuStack_9c = (undefined4 ***)0x100d710e;
    FUN_10c3d5d0();
  }
  pcStack_90 = (char *)0x100d711e;
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b44f0@100b44f0 =====

/* [RE-AUTO c0] */

void FUN_100b44f0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = local_38;
  pcVar2 = param_1;
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  local_24 = local_28;
  FUN_100b62c0(param_1,pcVar4);
  if (DAT_123ba6a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x48);
  }
  iVar1 = DAT_123ba6a8 + 0x30;
  iVar3 = FUN_100d9d70(local_38);
  puVar5 = local_24;
  puVar6 = local_28;
  if (iVar3 != iVar1) {
    puVar5 = *(undefined1 **)(iVar3 + 0x3c);
    puVar6 = *(undefined1 **)(iVar3 + 0x38);
  }
  local_c = local_20;
  local_10 = local_20;
  FUN_100b62c0(puVar5,puVar6);
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  FUN_100b7400(local_20);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b4610@100b4610 =====

/* [RE-AUTO c0] */

void __thiscall FUN_100b4610(int param_1,undefined4 ***param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  undefined4 ***pppuVar5;
  undefined4 unaff_EBX;
  undefined **unaff_ESI;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined1 **ppuStack_9c;
  undefined1 ***pppuStack_98;
  undefined1 ***pppuStack_94;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 *local_78;
  undefined *puStack_74;
  undefined4 auStack_70 [2];
  undefined4 **local_68;
  undefined4 **local_64;
  undefined **ppuStack_60;
  undefined1 ***pppuStack_5c;
  undefined1 ***pppuStack_58;
  undefined1 ***pppuStack_54;
  undefined1 ***apppuStack_50 [2];
  undefined4 ***pppuStack_48;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  undefined1 ***pppuStack_38;
  undefined4 ***pppuStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_84;
  local_68 = &local_78;
  pppuVar4 = param_2;
  do {
    pppuStack_94 = (undefined1 ***)pppuVar4;
    pppuVar4 = (undefined4 ***)((int)pppuStack_94 + 1);
  } while (*(char *)pppuStack_94 != '\0');
  pppuStack_98 = (undefined1 ***)param_2;
  ppuStack_9c = (undefined1 **)0x100b4657;
  local_64 = local_68;
  FUN_100b62c0();
  if (DAT_123ba6a8 != 0) {
    iVar3 = DAT_123ba6a8 + 0x30;
    ppuStack_9c = &puStack_80;
    puStack_a0 = (undefined *)0x100b468d;
    iVar2 = FUN_100d9d70();
    if (iVar2 == iVar3) {
      puStack_a0 = puStack_74;
      uStack_a4 = auStack_70[0];
    }
    else {
      puStack_a0 = *(undefined **)(iVar2 + 0x38);
      uStack_a4 = *(undefined4 *)(iVar2 + 0x3c);
    }
    pppuStack_54 = (undefined1 ***)&local_68;
    pppuStack_58 = (undefined1 ***)&local_68;
    puStack_a8 = (undefined4 *)0x100b46be;
    FUN_100b62c0();
    if ((local_78 != (undefined4 *)&stack0xffffff74) && (local_78 != (undefined4 *)0x0)) {
      puStack_a8 = local_78;
      FUN_10c3d5d0();
    }
    puStack_a8 = auStack_70;
    iVar3 = FUN_100b7400();
    if (iVar3 == param_1) {
      iVar3 = FUN_100ddd90(0x548);
      if (iVar3 == 0) {
        pppuVar4 = (undefined4 ***)0x0;
      }
      else {
        pppuVar4 = (undefined4 ***)FUN_100b4a60();
      }
      pppuVar4[0x14b] = (undefined4 **)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
      puVar1 = *(undefined4 **)(param_1 + 0x1c);
      pppuStack_98 = (undefined1 ***)pppuVar4;
      if (puVar1 == *(undefined4 **)(param_1 + 0x20)) {
        FUN_100b5dc0(puVar1,&pppuStack_98);
      }
      else {
        *puVar1 = pppuVar4;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
      }
      puStack_80 = &stack0xffffff70;
      puStack_7c = puStack_80;
      FUN_100b62c0(ppuStack_60,local_64);
      pppuStack_54 = (undefined1 ***)&local_64;
      apppuStack_50[0] = pppuStack_54;
      FUN_100b62c0(uStack_84,unaff_EBX);
      pppuStack_54 = (undefined1 ***)pppuVar4;
      if ((unaff_ESI != &puStack_a0) && (unaff_ESI != (undefined **)0x0)) {
        FUN_10c3d5d0(unaff_ESI);
      }
      pppuStack_40 = apppuStack_50;
      apppuStack_50[0] = (undefined1 ***)((uint)apppuStack_50[0] & 0xffffff00);
      pppuVar4 = (undefined4 ***)pppuStack_58;
      pppuStack_3c = pppuStack_40;
      if (pppuStack_58 != pppuStack_5c) {
        do {
          pppuVar5 = pppuVar4;
          pppuVar4 = (undefined4 ***)((int)pppuVar5 + 1);
        } while (*(char *)pppuVar5 != '\0');
        FUN_100f93a0(pppuStack_58,pppuVar5);
      }
      pppuStack_38 = pppuStack_54;
      FUN_100b5d00(&puStack_a8,apppuStack_50);
      if (((undefined4 ****)pppuStack_2c != &pppuStack_40) &&
         ((undefined4 ****)pppuStack_2c != (undefined4 ****)0x0)) {
        FUN_100ddf20(pppuStack_2c);
      }
      if (((undefined1 ****)pppuStack_48 != &pppuStack_5c) &&
         ((undefined1 ****)pppuStack_48 != (undefined1 ****)0x0)) {
        FUN_10c3d5d0(pppuStack_48);
      }
    }
    if ((ppuStack_60 != &puStack_74) && (ppuStack_60 != (undefined **)0x0)) {
      FUN_10c3d5d0(ppuStack_60);
    }
    puStack_a0 = (undefined *)0x100b4846;
    FUN_11a89daa();
    return;
  }
  ppuStack_9c = (undefined1 **)0x48;
                    /* WARNING: Subroutine does not return */
  puStack_a0 = &UNK_100b4667;
  FUN_10c3d580();
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100d9b90@100d9b90 =====

/* [RE-AUTO c0]
   calls: memcpy */

void __thiscall FUN_100d9b90(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_3c [3];
  undefined1 uStack_39;
  undefined4 *local_38;
  int local_34;
  size_t local_30;
  char *local_2c;
  int local_28;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_3c;
  local_38 = param_2;
  iVar6 = *(int *)(param_1 + 4);
  local_34 = param_1;
  local_28 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      pcVar1 = (char *)*local_38;
      local_14 = local_24;
      pcVar7 = pcVar1;
      do {
        local_2c = pcVar7;
        pcVar7 = local_2c + 1;
      } while (*local_2c != '\0');
      local_30 = (int)local_2c - (int)pcVar1;
      local_10 = local_14;
      if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_100b73e0();
      }
      if (0x10 < local_30 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(local_30 + 1);
      }
      if (local_2c != pcVar1) {
        pvVar4 = memcpy(local_14,pcVar1,local_30);
        local_14 = (undefined1 *)((int)pvVar4 + local_30);
      }
      *local_14 = 0;
      puVar3 = local_10;
      iVar5 = FUN_100d9580(*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x20),local_10,
                           local_14);
      if ((puVar3 != local_24) && (puVar3 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puVar3);
      }
      if (iVar5 < 0) {
        iVar5 = *(int *)(iVar6 + 0xc);
      }
      else {
        iVar5 = *(int *)(iVar6 + 8);
        local_34 = iVar6;
      }
      iVar2 = local_34;
      iVar6 = iVar5;
    } while (iVar5 != 0);
    if (local_34 != local_28) {
      local_14 = local_24;
      pcVar1 = (char *)*local_38;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      local_10 = local_14;
      FUN_100b62c0((char *)*local_38,pcVar7);
      iVar6 = FUN_100d9580(puStack_18,uStack_1c,*(undefined4 *)(iVar2 + 0x24),
                           *(undefined4 *)(iVar2 + 0x20));
      uStack_39 = iVar6 < 0;
      if ((puStack_18 != local_24) && (puStack_18 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(puStack_18);
      }
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b5f70@100b5f70 =====

/* [RE-AUTO c0] */

int __thiscall FUN_100b5f70(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_100b62c0(param_2,pcVar2);
  return param_1;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b5fb0@100b5fb0 =====

/* [RE-AUTO c0] */

int __thiscall FUN_100b5fb0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  return param_1;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b6020@100b6020 =====

/* [RE-AUTO c0] */

int __fastcall FUN_100b6020(int param_1,undefined4 param_2)

{
  undefined4 in_stack_00000014;
  undefined1 *in_stack_00000018;
  
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0(in_stack_00000018,in_stack_00000014);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if ((in_stack_00000018 != &stack0x00000004) && (in_stack_00000018 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(in_stack_00000018);
  }
  return param_1;
}


// ===== caller of FUN_100b62c0@100b62c0 : FUN_100b6570@100b6570 =====

/* [RE-AUTO c0] */

int __thiscall FUN_100b6570(int param_1,int param_2,undefined4 *param_3)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  return param_1;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100d7260@100d7260 =====

/* [RE-AUTO c0] */

void __thiscall FUN_100d7260(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = local_38;
  pcVar1 = param_2;
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  local_24 = local_28;
  FUN_100b62c0(param_2,pcVar7);
  local_40 = local_50;
  pcVar1 = param_3;
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  local_3c = local_40;
  FUN_100b62c0(param_3,pcVar7);
  iVar4 = param_1 + 0x18;
  iVar3 = FUN_100d93e0(local_38);
  if (iVar3 != iVar4) {
    iVar3 = FUN_100d93e0(local_50);
    if (iVar3 == iVar4) {
      iVar4 = FUN_100d9d70(local_50);
      if (iVar4 != param_1 + 0x30) {
        local_10 = local_20;
        local_c = local_10;
        FUN_100b62c0(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x38));
        puVar5 = local_c;
        if (((int)local_10 - (int)local_c == (int)local_28 - (int)local_24) &&
           (iVar4 = FUN_100b7960(local_c,local_24,(int)local_10 - (int)local_c), iVar4 == 0)) {
          if ((puVar5 != local_20) && (puVar5 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puVar5);
          }
          goto LAB_100d75db;
        }
        FUN_100d7620(local_20,local_38);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
      }
    }
    else {
      FUN_100d7620(local_50,local_38);
    }
    puVar5 = (undefined1 *)FUN_100d8530(local_50);
    if (local_38 != puVar5) {
      FUN_100d83d0(local_24,local_28);
    }
    goto LAB_100d75db;
  }
  iVar3 = FUN_100d93e0(local_50);
  if (iVar3 != iVar4) {
    iVar4 = FUN_100d9d70(local_38);
    if (iVar4 != param_1 + 0x30) {
      local_10 = local_20;
      local_c = local_10;
      FUN_100b62c0(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x38));
      puVar5 = local_c;
      if (((int)local_10 - (int)local_c == (int)local_40 - (int)local_3c) &&
         (iVar4 = FUN_100b7960(local_c,local_3c,(int)local_10 - (int)local_c), iVar4 == 0)) {
        if ((puVar5 != local_20) && (puVar5 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puVar5);
        }
        goto LAB_100d75db;
      }
      FUN_100d7620(local_20,local_50);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
    puVar5 = (undefined1 *)FUN_100d8530(local_38);
    if (local_50 != puVar5) {
      FUN_100d83d0(local_3c,local_40);
    }
    goto LAB_100d75db;
  }
  param_1 = param_1 + 0x30;
  iVar4 = FUN_100d9d70(local_38);
  if (iVar4 == param_1) {
    iVar4 = FUN_100d9d70(local_50);
    if (iVar4 == param_1) {
      puVar5 = (undefined1 *)FUN_100d8530(local_50);
      if (local_38 != puVar5) {
        FUN_100d83d0(local_24,local_28);
      }
      FUN_100d82a0(local_88,local_38);
      goto LAB_100d75db;
    }
    local_70 = local_80;
    local_6c = local_70;
    FUN_100b62c0(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x38));
    puVar5 = (undefined1 *)FUN_100d8530(local_38);
    if (local_80 != puVar5) {
      FUN_100d83d0(local_6c,local_70);
    }
    puVar5 = local_80;
    puVar6 = local_6c;
  }
  else {
    local_58 = local_68;
    local_54 = local_58;
    FUN_100b62c0(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x38));
    iVar4 = FUN_100d9d70(local_50);
    if (iVar4 != param_1) {
      local_10 = local_20;
      local_c = local_10;
      FUN_100b62c0(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x38));
      cVar2 = FUN_100d8650(local_68,local_20);
      if (cVar2 != '\0') {
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
        puVar5 = local_68;
        puVar6 = local_54;
        goto LAB_100d7597;
      }
      FUN_100d7620(local_20,local_68);
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
    }
    puVar5 = (undefined1 *)FUN_100d8530(local_50);
    if (local_68 != puVar5) {
      FUN_100d83d0(local_54,local_58);
    }
    puVar5 = local_68;
    puVar6 = local_54;
  }
LAB_100d7597:
  if ((puVar6 != puVar5) && (puVar6 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puVar6);
  }
LAB_100d75db:
  if ((local_3c != local_50) && (local_3c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_3c);
  }
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100d7620@100d7620 =====

/* [RE-AUTO c0] */

void __thiscall FUN_100d7620(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  do {
    if (iVar3 == param_1 + 0x30) {
      iVar3 = FUN_100d93e0(param_2);
      if (iVar3 != param_1 + 0x18) {
        iVar4 = FUN_100d86b0(iVar3,param_1 + 0x1c,param_1 + 0x20,param_1 + 0x24);
        iVar3 = *(int *)(iVar4 + 0x24);
        if ((iVar3 != iVar4 + 0x10) && (iVar3 != 0)) {
          FUN_10c3d5d0(iVar3);
        }
        if (iVar4 != 0) {
          FUN_10c3d5d0(iVar4);
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      }
      return;
    }
    piVar6 = *(int **)(iVar3 + 0x24);
    uVar5 = *(int *)(iVar3 + 0x20) - (int)piVar6;
    piVar7 = *(int **)(param_2 + 0x14);
    if (uVar5 == *(int *)(param_2 + 0x10) - (int)piVar7) {
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*piVar6 != *piVar7) goto LAB_100d7676;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
        uVar5 = uVar1;
      }
      if (uVar1 != 0xfffffffc) {
LAB_100d7676:
        if (((char)*piVar6 != (char)*piVar7) ||
           ((uVar1 != 0xfffffffd &&
            ((*(char *)((int)piVar6 + 1) != *(char *)((int)piVar7 + 1) ||
             ((uVar1 != 0xfffffffe &&
              ((*(char *)((int)piVar6 + 2) != *(char *)((int)piVar7 + 2) ||
               ((uVar1 != 0xffffffff && (*(char *)((int)piVar6 + 3) != *(char *)((int)piVar7 + 3))))
               ))))))))) goto LAB_100d76b8;
      }
      if (param_3 != iVar3 + 0x28) {
        FUN_100d83d0(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x10));
      }
    }
LAB_100d76b8:
    iVar4 = *(int *)(iVar3 + 0xc);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      for (iVar2 = *(int *)(iVar4 + 8); iVar3 = iVar4, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        iVar4 = iVar2;
      }
    }
  } while( true );
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100d77b0@100d77b0 =====

/* [RE-AUTO c0] */

int __thiscall FUN_100d77b0(int param_1,int param_2)

{
  if (param_2 != param_1) {
    FUN_100d83d0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  }
  return param_1;
}


// ===== caller of FUN_100d83d0@100d83d0 : MemPoolVMProvide::InitVMMemoryOnStart@100df7e0 =====

/* [RE-AUTO c3]
   id: MemPoolVMProvide::InitVMMemoryOnStart
   calls: printf, GetSystemInfo, _snprintf, GetTickCount, memset, ShareMemPageAllocator::Init
   strings:
     ""[MemPoolVMProvide::InitVMMemoryOnStart]: initing share memory provider...\n""
     ""[MemPoolVMProvide::InitVMMemoryOnStart]: svr_dlmalloc_max_size can't be 0\n""
     ""[MemPoolVMProvide::InitVMMemoryOnStart]: create share memory fail\n""
     ""[MemPoolVMProvide::InitVMMemoryOnStart]: open share memory fail\n"" */

uint MemPoolVMProvide__InitVMMemoryOnStart(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  void *_Dst;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  DWORD *pDVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  undefined *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  size_t _Size;
  _SYSTEM_INFO local_44;
  uint local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  undefined1 local_5;
  
  printf("[MemPoolVMProvide::InitVMMemoryOnStart]: initing share memory provider...\n");
  GetSystemInfo(&local_44);
  pDVar8 = &local_44.dwPageSize;
  if (local_44.dwPageSize <= local_44.dwAllocationGranularity) {
    pDVar8 = &local_44.dwAllocationGranularity;
  }
  uVar15 = *(uint *)(param_1 + 0x108);
  uVar1 = *pDVar8;
  iVar14 = *(int *)(param_1 + 0x11c);
  local_20 = uVar1;
  if (uVar15 == 0) {
    uVar3 = printf("[MemPoolVMProvide::InitVMMemoryOnStart]: svr_dlmalloc_max_size can\'t be 0\n");
LAB_100df858:
    return uVar3 & 0xffffff00;
  }
  if (uVar15 < uVar1) {
    uVar15 = uVar1;
  }
  if (uVar15 % uVar1 != 0) {
    uVar15 = uVar15 + (uVar1 - uVar15 % uVar1);
  }
  uVar10 = *(uint *)(param_1 + 0x10c);
  if (*(uint *)(param_1 + 0x10c) < uVar1) {
    uVar10 = uVar1;
  }
  if (uVar10 % uVar1 != 0) {
    uVar10 = uVar10 + (uVar1 - uVar10 % uVar1);
  }
  local_14 = uVar10 / uVar1;
  local_1c = ((local_14 * 8 + 0xa7 + uVar1) / uVar1) * uVar1;
  DAT_123bc984 = local_1c + uVar15;
  local_c = *(int **)(param_1 + 0x104);
  pcVar11 = (char *)(param_1 + 1);
  pcVar9 = pcVar11;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  local_10 = uVar15;
  FUN_100d83d0(pcVar11,pcVar11 + ((int)pcVar9 - (param_1 + 2)));
  uVar3 = DAT_123bbf80;
  if (DAT_123bbf80 == DAT_123bbf7c) goto LAB_100df858;
  iVar16 = 0;
  pcVar11 = &DAT_123bbf84;
  do {
    _snprintf(pcVar11,0x80,"%s%d",DAT_123bbf80,iVar16);
    pcVar11 = pcVar11 + 0x80;
    iVar16 = iVar16 + 1;
  } while ((int)pcVar11 < 0x123bc984);
  cVar2 = (**(code **)*DAT_123bbf04)(&DAT_123bbf84,DAT_123bc984,local_c);
  if (cVar2 == '\0') {
    uVar15 = printf("[MemPoolVMProvide::InitVMMemoryOnStart]: create share memory fail\n");
    return uVar15 & 0xffffff00;
  }
  DAT_123bbf64 = 1;
  piVar4 = (int *)(**(code **)(*DAT_123bbf04 + 4))();
  local_c = piVar4 + 1;
  piVar13 = piVar4 + 2;
  local_18 = (int *)GetTickCount();
  DAT_123bbf65 = '\0';
  if (*local_c == 0) {
LAB_100dfa01:
    *piVar4 = *piVar4 + 1;
  }
  else if ((int)local_18 - *local_c < *(int *)(param_1 + 0x118) * 1000) {
    if (*piVar4 <= *(int *)(param_1 + 0x114)) {
      DAT_123bbf65 = '\x01';
      goto LAB_100dfa01;
    }
    iVar16 = 0;
    _Size = DAT_123bc984;
    _Dst = (void *)(**(code **)(*DAT_123bbf04 + 4))();
    memset(_Dst,iVar16,_Size);
    *piVar4 = 1;
  }
  else {
    DAT_123bbf65 = '\x01';
    *piVar4 = 1;
  }
  *local_c = (int)local_18;
  if (DAT_123bbf65 == '\0') {
LAB_100dfad0:
    iVar16 = local_1c + (int)piVar4;
    DAT_123bbf5c = piVar13 + 7;
    DAT_123bbf60 = piVar13 + 8;
    DAT_123ba6b0 = piVar13;
    if (DAT_123bbf60 == (int *)0x0) {
      DAT_123bbf60 = (int *)0x0;
    }
    else {
      *DAT_123bbf60 = 0;
      piVar13[9] = 0;
      piVar13[10] = 0;
      piVar13[0xb] = 0;
      *(undefined1 *)(piVar13 + 0xd) = param_1._3_1_;
      *(undefined1 *)DAT_123bbf60 = 0;
      piVar13[9] = 0;
      piVar13[10] = (int)DAT_123bbf60;
      piVar13[0xb] = (int)DAT_123bbf60;
      piVar13[0xc] = 0;
    }
    DAT_123bbf00 = (uint *)(piVar13 + 0xe);
    iVar6 = 0;
    *DAT_123bbf00 = local_10 / local_20;
    piVar13[0xf] = 1;
    piVar13[0x10] = uVar15;
    piVar13[0x11] = uVar10;
    piVar13[0x12] = uVar1;
    piVar13[0x13] = iVar14;
    piVar13[0x14] = (int)piVar4;
    piVar13[0x15] = iVar16;
    *(ulonglong *)(piVar13 + 0x16) = CONCAT44(piVar13 + 0x18,iVar16 + local_10);
    iVar14 = iVar16;
    if (0 < (int)local_14) {
      do {
        *(int *)(DAT_123bbf00[9] + iVar6 * 8) = iVar14;
        *(undefined4 *)(DAT_123bbf00[9] + 4 + iVar6 * 8) = 0x2000;
        iVar6 = iVar6 + 1;
        iVar14 = iVar14 + local_20;
      } while (iVar6 < (int)local_14);
    }
    DAT_123ba6b0[6] = iVar16;
    uVar15 = ShareMemPageAllocator__Init(param_1);
    return uVar15;
  }
  iVar16 = 1;
  DAT_123bbf5c = piVar4 + 9;
  local_5 = 0;
  DAT_123bbf60 = piVar4 + 10;
  DAT_123bbf00 = (uint *)(piVar4 + 0x10);
  piVar7 = piVar4 + 0x10;
  local_18 = piVar4 + 0x1a;
  DAT_123ba6b0 = piVar13;
  if (1 < piVar4[0x11]) {
    puVar12 = &DAT_123bc004;
    local_c = &DAT_123bbf08;
    do {
      uVar5 = FUN_10107280(puVar12,(iVar16 + -1) * DAT_123bbf00[5] + DAT_123bbf00[8]);
      if ((char)uVar5 == '\0') {
        iVar6 = printf("[MemPoolVMProvide::InitVMMemoryOnStart]: open share memory fail\n");
        piVar7 = (int *)CONCAT31((int3)((uint)iVar6 >> 8),1);
        local_5 = 1;
      }
      else {
        piVar7 = (int *)CONCAT31((int3)((uint)uVar5 >> 8),local_5);
      }
      iVar16 = iVar16 + 1;
      puVar12 = puVar12 + 0x80;
      local_c = local_c + 1;
    } while (iVar16 < (int)DAT_123bbf00[1]);
    piVar13 = local_18;
    if ((char)piVar7 != '\0') goto LAB_100dfad0;
  }
  return CONCAT31((int3)((uint)piVar7 >> 8),1);
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100df300@100df300 =====

/* [RE-AUTO c0]
   calls: _stricmp, _strnicmp, Sleep
   strings:
     ""--waitdebug""
     ""--id=""
     ""start""
     ""install""
     ""uninstall""
     ""--redir""
     ""reload"" */

void __fastcall
FUN_100df300(int param_1,int param_2,undefined1 *param_3,undefined4 param_4,undefined1 *param_5,
            undefined1 *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar2 = false;
  if (0 < param_1) {
    do {
      iVar3 = _stricmp(*(char **)(param_2 + iVar6 * 4),"--resume");
      if (iVar3 == 0) {
        *param_3 = 1;
      }
      else {
        iVar3 = _stricmp(*(char **)(param_2 + iVar6 * 4),"--waitdebug");
        if (iVar3 == 0) {
          bVar2 = true;
        }
        else {
          iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"--id=",5);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_2 + iVar6 * 4);
            pcVar5 = (char *)(iVar3 + 5);
            pcVar4 = pcVar5;
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            FUN_100d83d0(pcVar5,pcVar5 + ((int)pcVar4 - (iVar3 + 6)));
          }
          else {
            iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"start",5);
            if ((((iVar3 == 0) ||
                 (iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"stop",4), iVar3 == 0)) ||
                (iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"install",7), iVar3 == 0)) ||
               (iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"uninstall",9), iVar3 == 0)) {
LAB_100df47b:
              *param_5 = 1;
            }
            else {
              iVar3 = _stricmp(*(char **)(param_2 + iVar6 * 4),"--redir");
              if (iVar3 == 0) {
                *param_6 = 1;
              }
              else {
                iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"reload",5);
                if (((iVar3 == 0) ||
                    (iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"-D",2), iVar3 == 0)) ||
                   (iVar3 = _strnicmp(*(char **)(param_2 + iVar6 * 4),"-d",2), iVar3 == 0))
                goto LAB_100df47b;
              }
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
    if (bVar2) {
      iVar6 = 10000;
      do {
        Sleep(1000);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100e0410@100e0410 =====

/* [RE-AUTO c0] */

void FUN_100e0410(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_100d83d0(param_1,pcVar2);
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100ed090@100ed090 =====

/* [RE-AUTO c0]
   calls: memset */

undefined4 FUN_100ed090(int param_1,int param_2)

{
  char *pcVar1;
  size_t _Size;
  char *_Dst;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
    if (*(undefined1 **)(param_2 + 0x14) != *(undefined1 **)(param_2 + 0x10)) {
      **(undefined1 **)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x14);
    }
    return 1;
  }
  _Size = FUN_100eceb0(0xffffffff,0,0);
  if (_Size != 0) {
    _Dst = (char *)FUN_10c3da60(_Size);
    if (_Dst != (char *)0x0) {
      memset(_Dst,0,_Size);
      iVar2 = FUN_100eceb0(0xffffffff,_Dst,_Size);
      pcVar1 = _Dst;
      if (iVar2 != 0) {
        do {
          pcVar3 = pcVar1;
          pcVar1 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        FUN_100d83d0(_Dst,pcVar3);
        FUN_10c3da30(_Dst);
        return 1;
      }
      FUN_10c3da30(_Dst);
    }
    return 0;
  }
  return 0;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100e5a70@100e5a70 =====

/* [RE-AUTO c0]
   strings:
     ""mh_sharemem_addrinfo"" */

void __fastcall FUN_100e5a70(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)*param_1;
  pcVar1 = "";
  pcVar3 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2;
    pcVar3 = pcVar2;
  }
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_100d83d0(pcVar3,pcVar2);
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100e5aa0@100e5aa0 =====

/* [RE-AUTO c0]
   strings:
     ""mh_sharemem_addrinfo""
     ""<Error When GetUTFString>"" */

void __fastcall FUN_100e5aa0(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_28 [4];
  undefined1 local_24 [12];
  undefined1 *puStack_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  pcVar4 = "";
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  local_14 = local_24;
  pcVar1 = pcVar4;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_10 = local_14;
  FUN_100b62c0(pcVar4,pcVar3);
  cVar2 = FUN_100e5160();
  if (cVar2 == '\0') {
    FUN_100d83d0("<Error When GetUTFString>","");
  }
  if ((puStack_18 != &stack0xffffffd4) && (puStack_18 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_18);
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100fbd70@100fbd70 =====

/* [RE-AUTO c0] */

void FUN_100fbd70(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_100fcd60(0x2e,0xffffffff);
  if (uVar2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + 0x14);
    local_14 = local_24;
    local_2c = *(int *)(param_1 + 0x10) - iVar1;
    puVar3 = &local_2c;
    if (uVar2 <= (uint)(*(int *)(param_1 + 0x10) - iVar1)) {
      puVar3 = &local_28;
    }
    local_28 = uVar2;
    local_10 = local_14;
    FUN_100b62c0(iVar1,*puVar3 + iVar1);
    if (local_24 != param_1) {
      FUN_100d83d0(local_10,local_14);
    }
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_10);
    }
  }
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100fb730@100fb730 =====

/* [RE-AUTO c0]
   calls: PathIsRelativeA */

void __fastcall FUN_100fb730(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  BVar2 = PathIsRelativeA(*(LPCSTR *)(param_1 + 0x14));
  if (BVar2 == 0) {
    if (param_1 != param_2) {
      FUN_100d83d0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
    }
  }
  else {
    local_10 = local_20;
    local_20[0] = 0;
    local_c = local_10;
    iVar3 = FUN_100fbb70(local_10);
    if ((*(int *)(iVar3 + 0x14) == *(int *)(iVar3 + 0x10)) ||
       ((cVar1 = *(char *)(*(int *)(iVar3 + 0x10) + -1), cVar1 != '\\' && (cVar1 != '/')))) {
      FUN_100fc850(0x5c);
    }
    FUN_100d9260(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
    if (local_20 != param_2) {
      FUN_100d83d0(local_c,local_10);
    }
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  FUN_100fb900();
  FUN_11a89daa();
  return;
}


// ===== caller of FUN_100d83d0@100d83d0 : FUN_100fb900@100fb900 =====

/* [RE-AUTO c0] */

void __fastcall FUN_100fb900(undefined *param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int *piVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  char cVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 extraout_ECX;
  int ****ppppiVar12;
  int ***local_5c [2];
  undefined4 ***local_54;
  undefined *local_50;
  undefined4 ***local_4c;
  int *local_48;
  undefined4 **local_44;
  undefined4 ***local_40;
  undefined1 local_39;
  undefined1 local_38 [20];
  undefined1 *local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    local_54 = (undefined4 ***)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14));
    local_44 = (undefined4 ***)0x0;
    local_40 = (undefined4 ***)(DAT_123bc9b4 - DAT_123bc9b8);
    ppppuVar8 = &local_54;
    if ((undefined4 ***)(DAT_123bc9b4 - DAT_123bc9b8) <= local_54) {
      ppppuVar8 = &local_40;
    }
    iVar9 = *(int *)(param_1 + 0x14);
    iVar7 = FUN_100d9580(iVar9,(int)*ppppuVar8 + iVar9,DAT_123bc9b8,DAT_123bc9b4);
    if (iVar7 == 0) {
      local_40 = (undefined4 ***)(DAT_123bc9cc - DAT_123bc9d0);
      local_44 = (undefined4 ***)(*(int *)(param_1 + 0x10) - iVar9);
      ppppuVar8 = (undefined4 ****)&local_44;
      if ((undefined4 ***)(DAT_123bc9cc - DAT_123bc9d0) <=
          (undefined4 ***)(*(int *)(param_1 + 0x10) - iVar9)) {
        ppppuVar8 = &local_40;
      }
      iVar9 = FUN_100d9580(iVar9,(int)*ppppuVar8 + iVar9,DAT_123bc9d0,DAT_123bc9cc);
      local_44 = (undefined4 **)((iVar9 == 0) + 1);
    }
    FUN_100fcb10(&local_39);
    FUN_100fce20();
    FUN_100fcb10(&local_39);
    ppuVar5 = local_44;
    ppppiVar12 = (int ****)local_5c[0];
    if ((int ****)local_5c[0] != local_5c) {
      do {
        pppiVar1 = ppppiVar12[7];
        pppiVar2 = ppppiVar12[6];
        if ((pppiVar1 != pppiVar2) &&
           (((int)pppiVar2 - (int)pppiVar1 != 1 || (*(char *)pppiVar1 != '.')))) {
          if (((int)pppiVar2 - (int)pppiVar1 == 2) &&
             (iVar9 = FUN_100b7960(pppiVar1,&DAT_11d9f008,2), piVar4 = local_48, iVar9 == 0)) {
            if ((undefined4 ***)ppuVar5 != (undefined4 ***)0x0) {
              if ((undefined4 ****)local_4c == &local_4c) goto LAB_100fbb19;
LAB_100fbb32:
              piVar3 = (int *)piVar4[1];
              iVar9 = *piVar4;
              *piVar3 = iVar9;
              *(int **)(iVar9 + 4) = piVar3;
              piVar3 = (int *)piVar4[7];
              if ((piVar3 != piVar4 + 2) && (piVar3 != (int *)0x0)) {
                FUN_10c3d5d0(piVar3);
              }
              if (piVar4 != (int *)0x0) {
                FUN_10c3d5d0(piVar4);
              }
              goto LAB_100fba45;
            }
            if ((undefined4 ****)local_4c == &local_4c) {
LAB_100fbb19:
              cVar6 = FUN_100fd0c0(local_48 + 2,&DAT_11d9f008);
              if (cVar6 == '\0') goto LAB_100fbb32;
            }
          }
          FUN_100fca60(&local_40,&local_4c,ppppiVar12 + 2);
        }
LAB_100fba45:
        ppppiVar12 = (int ****)*ppppiVar12;
        param_1 = local_50;
      } while (ppppiVar12 != local_5c);
    }
    local_40 = &local_4c;
    local_54 = local_4c;
    FUN_100fd2f0(&local_40);
    if (0 < (int)local_44) {
      uVar10 = FUN_100fc7a0(local_44,0x5c,extraout_ECX,param_1);
      puVar11 = (undefined *)FUN_100f21e0(local_20,uVar10);
      if (puVar11 != param_1) {
        FUN_100d83d0(*(undefined4 *)(puVar11 + 0x14),*(undefined4 *)(puVar11 + 0x10));
      }
      if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_c);
      }
      if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_24);
      }
    }
    FUN_100fcdd0();
    FUN_100fcdd0();
  }
  if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) && (param_1 != &DAT_123bc9d4)) {
    FUN_100d83d0(DAT_123bc9e8,DAT_123bc9e4);
  }
  FUN_11a89daa();
  return;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TdrDump_VersionedInfoList_dwVersion_iNum_astInfo@1037a910 =====

/* WARNING: Removing unreachable block (ram,0x1037a9a9) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwVersion]""
     ""[iNum]""
     ""[astInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TdrDump_VersionedInfoList_dwVersion_iNum_astInfo
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwVersion]",&DAT_11d9f574,*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNum]",&DAT_11d9e0b4,param_1[1]),
     iVar1 == 0)) {
    iVar1 = param_1[1];
    if (iVar1 < 0) {
      return -6;
    }
    if (100 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_WriteIndent(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[astInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_10379f40(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[1]);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TlvTypeCountArgsList_DebugFormat@1017ae40 =====

/* WARNING: Removing unreachable block (ram,0x1017aea9) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[count]""
     ""[tracksSet]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TlvTypeCountArgsList_DebugFormat(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[count]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (10 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_WriteIndent(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[tracksSet]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_1017a3d0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TlvPetOptionData_DebugFormat@101faee0 =====

/* WARNING: Removing unreachable block (ram,0x101faef0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[oPetName]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[oPetSex]""
     ""[oOwner]""
     ""[oPetSignature]""
     ""[oPetLevel]""
     ""[oPetWeaponID]""
     ""[oPetHatID]""
     ""[oPetBodyID]"" */

void TlvPetOptionData_DebugFormat(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
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
  
  iVar1 = TdrText_WriteIndent(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[oPetName]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetSex]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_3,"[oOwner]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_2;
        if (-1 < param_2) {
          iVar1 = param_2 + 1;
        }
        iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetSignature]",extraout_ECX_01), iVar1 == 0))
        {
          iVar1 = param_2;
          if (-1 < param_2) {
            iVar1 = param_2 + 1;
          }
          iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
          if ((iVar1 == 0) &&
             (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetLevel]",extraout_ECX_02), iVar1 == 0)) {
            iVar1 = param_2;
            if (-1 < param_2) {
              iVar1 = param_2 + 1;
            }
            iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
            if ((iVar1 == 0) &&
               (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetWeaponID]",extraout_ECX_03), iVar1 == 0
               )) {
              iVar1 = param_2;
              if (-1 < param_2) {
                iVar1 = param_2 + 1;
              }
              iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
              if ((iVar1 == 0) &&
                 (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetHatID]",extraout_ECX_04), iVar1 == 0)
                 ) {
                iVar1 = param_2;
                if (-1 < param_2) {
                  iVar1 = param_2 + 1;
                }
                iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                if ((iVar1 == 0) &&
                   (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetBodyID]",extraout_ECX_05),
                   iVar1 == 0)) {
                  iVar1 = param_2;
                  if (-1 < param_2) {
                    iVar1 = param_2 + 1;
                  }
                  iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                  if ((iVar1 == 0) &&
                     (iVar1 = TdrText_FieldLabelChar(param_3,"[oFashionWwaponID]",extraout_ECX_06),
                     iVar1 == 0)) {
                    iVar1 = param_2;
                    if (-1 < param_2) {
                      iVar1 = param_2 + 1;
                    }
                    iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                    if ((iVar1 == 0) &&
                       (iVar1 = TdrText_FieldLabelChar(param_3,"[oFashionHatID]",extraout_ECX_07),
                       iVar1 == 0)) {
                      iVar1 = param_2;
                      if (-1 < param_2) {
                        iVar1 = param_2 + 1;
                      }
                      iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                      if ((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldLabelChar(param_3,"[oFashionBodyID]",extraout_ECX_08)
                         , iVar1 == 0)) {
                        iVar1 = param_2;
                        if (-1 < param_2) {
                          iVar1 = param_2 + 1;
                        }
                        iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                        if ((iVar1 == 0) &&
                           (iVar1 = TdrText_FieldLabelChar(param_3,"[oRegion]",extraout_ECX_09),
                           iVar1 == 0)) {
                          if (param_2 < 0) {
                            TlvTypedBaseOrBonus_DebugFormat(param_1,param_2,param_3);
                            return;
                          }
                          TlvTypedBaseOrBonus_DebugFormat(param_1,param_2 + 1,param_3);
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


// ===== caller of _wassert@EXTERNAL:000001bc : TdrText_VehicleAmmoList@102fa340 =====

/* WARNING: Removing unreachable block (ram,0x102fa3df) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[dwNetObjId]""
     ""[nAmmoAmount]""
     ""[astVehicleAmmoList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TdrText_VehicleAmmoList(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetObjId]",&DAT_11d9f574,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nAmmoAmount]",&DAT_11d9e0b4,
                                  (int)*(short *)(param_1 + 1)), iVar2 == 0)) {
    sVar1 = *(short *)(param_1 + 1);
    if (sVar1 < 0) {
      return -6;
    }
    if (0x28 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_WriteIndent(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVehicleAmmoList]",(int)sVar3,(int)(char)param_4
                            );
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_102f9f40(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(param_1 + 1));
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ===== caller of _wassert@EXTERNAL:000001bc : CBTBlackboardSystem::SetOwner@1047b8a0 =====

/* [RE-R1]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall CBTBlackboardSystem__SetOwner(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *(undefined4 **)(param_1 + 0x78) = param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}


// ===== caller of _wassert@EXTERNAL:000001bc : CBTBlackboardSystem::Dtor@1047bfd0 =====

/* [RE-R1]
   src: smartptr.h
   calls: DeleteCriticalSection, _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall CBTBlackboardSystem__Dtor(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *local_8;
  
  *param_1 = &PTR_FUN_11dbae18;
  local_8 = param_1;
  if (param_1[0x16] != 0) {
    FUN_10480560(param_1[0x13]);
    param_1[0x14] = param_1 + 0x12;
    param_1[0x13] = 0;
    param_1[0x15] = param_1 + 0x12;
    param_1[0x16] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x11];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  param_1[0x11] = 0;
  puVar5 = (undefined4 *)param_1[0x22];
  if (puVar5 != param_1 + 0x20) {
    local_8 = param_1;
    do {
      FUN_1047f970(&local_8);
      puVar4 = (undefined4 *)puVar5[3];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar4[3]) {
          do {
            puVar5 = puVar4;
            puVar4 = (undefined4 *)puVar5[1];
          } while (puVar5 == (undefined4 *)puVar4[3]);
        }
        if ((undefined4 *)puVar5[3] != puVar4) {
          puVar5 = puVar4;
        }
      }
      else {
        for (puVar3 = (undefined4 *)puVar4[2]; puVar5 = puVar4, puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[2]) {
          puVar4 = puVar3;
        }
      }
    } while (puVar5 != param_1 + 0x20);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if (param_1[0x24] != 0) {
    FUN_10480600(param_1[0x21]);
    param_1[0x22] = param_1 + 0x20;
    param_1[0x21] = 0;
    param_1[0x23] = param_1 + 0x20;
    param_1[0x24] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x1f];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  puVar5 = (undefined4 *)param_1[0x1e];
  if (puVar5 != (undefined4 *)0x0) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
    else if ((int)puVar5[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  FUN_104805b0();
  piVar2 = (int *)param_1[0x18];
  piVar6 = (int *)param_1[0x19];
  while (piVar6 != piVar2) {
    piVar6 = piVar6 + -1;
    puVar5 = (undefined4 *)*piVar6;
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
      piVar1 = puVar5 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  if (param_1[0x18] != 0) {
    FUN_10c3d5d0(param_1[0x18]);
  }
  if (param_1[0x16] != 0) {
    FUN_10480560(param_1[0x13]);
    param_1[0x14] = param_1 + 0x12;
    param_1[0x13] = 0;
    param_1[0x15] = param_1 + 0x12;
    param_1[0x16] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x11];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  puVar5 = (undefined4 *)param_1[0xe];
  if ((puVar5 != param_1 + 9) && (puVar5 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar5);
  }
  puVar5 = (undefined4 *)param_1[8];
  if ((puVar5 != param_1 + 3) && (puVar5 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar5);
  }
  *param_1 = &PTR_FUN_11dbaa58;
  return;
}


// ===== caller of _wassert@EXTERNAL:000001bc : Tdr_WriteStruct_Complex_A@1017b1c0 =====

/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall Tdr_WriteStruct_Complex_A(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_ECX_03;
  byte bVar7;
  
  iVar3 = TdrBuf_PutVarintU32(0x51);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      iVar3 = TdrBuf_PutVarintU32(0x60);
      if ((iVar3 == 0) &&
         (iVar3 = TdrBuf_PutVarintU64(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
         iVar3 == 0)) {
        if (*param_1 < 9) {
          if (*param_1 != 0) {
            iVar3 = TdrBuf_PutVarintU32(0x75);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            TdrBuf_ReserveU32(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = TdrBuf_PutU8_dup(param_1[bVar7 + 9]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
              } while (bVar7 < *param_1);
            }
            iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 9) {
            if (*param_1 != 0) {
              iVar3 = TdrBuf_PutVarintU32(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_2[1];
              TdrBuf_ReserveU32(extraout_ECX_00);
              iVar1 = param_2[1];
              bVar7 = 0;
              if (*param_1 != 0) {
                do {
                  iVar4 = TdrBuf_PutVarint_ZigzagS32
                                    (*(undefined4 *)(param_1 + (uint)bVar7 * 4 + 0x11));
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  bVar7 = bVar7 + 1;
                } while (bVar7 < *param_1);
              }
              iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            iVar3 = TdrBuf_PutVarintU32(0x91);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = TdrBuf_PutU8_dup(param_1[0x31]);
            if (iVar3 != 0) {
              return iVar3;
            }
            if (10 < param_1[0x31]) {
              return -7;
            }
            if (param_1[0x31] == 0) {
              return 0;
            }
            iVar3 = TdrBuf_PutVarintU32(0xa5);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            TdrBuf_ReserveU32(extraout_ECX_01);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_02;
            if (param_1[0x31] != 0) {
              do {
                iVar4 = param_2[1];
                TdrBuf_ReserveU32(uVar6);
                iVar2 = param_2[1];
                iVar5 = Tdr_WriteStruct_ByteCount3IntArrays_A(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = TdrBuf_PatchU32_BE(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_03;
              } while (bVar7 < param_1[0x31]);
            }
            iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}


// ===== caller of _wassert@EXTERNAL:000001bc : Tdr_Pack_TwoStr32_TwoU32@1037b240 =====

/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall Tdr_Pack_TwoStr32_TwoU32(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  
  if ((param_3 != 0) && (param_3 == 0)) {
    return -9;
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (*(uint *)(param_2 + 8) < uVar2) {
    _wassert(L"position <= length",
             L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0x92);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 8) < uVar3) || (*(uint *)(param_2 + 8) - uVar3 < 4)) {
    iVar6 = -1;
  }
  else {
    *(uint *)(param_2 + 4) = uVar3 + 4;
    param_1[0x1f] = '\0';
    pcVar7 = param_1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = TdrBuf_PutBytes(param_1,pcVar7 + (1 - (int)(param_1 + 1)));
    if (iVar6 == 0) {
      iVar6 = TdrBuf_PatchU32_BE(*(int *)(param_2 + 4) - (uVar3 + 4),uVar2);
      if (iVar6 == 0) {
        uVar4 = *(undefined4 *)(param_2 + 4);
        iVar6 = TdrBuf_ReserveU32(extraout_ECX);
        if (iVar6 == 0) {
          iVar5 = *(int *)(param_2 + 4);
          param_1[0x3f] = '\0';
          pcVar7 = param_1 + 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar6 = TdrBuf_PutBytes(param_1 + 0x20,pcVar7 + (1 - (int)(param_1 + 0x21)));
          if (iVar6 == 0) {
            iVar6 = TdrBuf_PatchU32_BE(*(int *)(param_2 + 4) - iVar5,uVar4);
            if (iVar6 == 0) {
              iVar6 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x40));
              if (iVar6 == 0) {
                iVar6 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + 0x44));
                return iVar6;
              }
            }
          }
        }
      }
    }
  }
  return iVar6;
}


// ===== caller of _wassert@EXTERNAL:000001bc : Tdr_WriteStruct_Complex_B@1017b400 =====

/* [RE-R1]
   src: TdrBuf.h
   calls: _wassert
   strings:
     "u"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h""
     "u"position <= length"" */

int __thiscall Tdr_WriteStruct_Complex_B(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_ECX_03;
  byte bVar7;
  
  iVar3 = TdrBuf_PutVarintU32(0x51);
  if (iVar3 == 0) {
    bVar7 = *param_1;
    if ((uint)param_2[2] < (uint)param_2[1]) {
      _wassert(L"position <= length",
               L"d:\\mhfc\\oprelease\\code\\common\\protocols\\packetcode\\TdrBuf.h",0xe0);
    }
    if (param_2[2] == param_2[1]) {
      iVar3 = -1;
    }
    else {
      *(byte *)(param_2[1] + *param_2) = bVar7;
      param_2[1] = param_2[1] + 1;
      iVar3 = TdrBuf_PutVarintU32(100);
      if ((iVar3 == 0) &&
         (iVar3 = TdrBuf_PutU64_BE(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
         iVar3 == 0)) {
        if (*param_1 < 9) {
          if (*param_1 != 0) {
            iVar3 = TdrBuf_PutVarintU32(0x75);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            TdrBuf_ReserveU32(extraout_ECX);
            iVar1 = param_2[1];
            bVar7 = 0;
            if (*param_1 != 0) {
              do {
                iVar4 = TdrBuf_PutU8_dup(param_1[bVar7 + 9]);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
              } while (bVar7 < *param_1);
            }
            iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          if (*param_1 < 9) {
            if (*param_1 != 0) {
              iVar3 = TdrBuf_PutVarintU32(0x85);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_2[1];
              TdrBuf_ReserveU32(extraout_ECX_00);
              iVar1 = param_2[1];
              bVar7 = 0;
              if (*param_1 != 0) {
                do {
                  iVar4 = TdrBuf_PutU32_BE(*(undefined4 *)(param_1 + (uint)bVar7 * 4 + 0x11));
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  bVar7 = bVar7 + 1;
                } while (bVar7 < *param_1);
              }
              iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            iVar3 = TdrBuf_PutVarintU32(0x91);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = TdrBuf_PutU8_dup(param_1[0x31]);
            if (iVar3 != 0) {
              return iVar3;
            }
            if (10 < param_1[0x31]) {
              return -7;
            }
            if (param_1[0x31] == 0) {
              return 0;
            }
            iVar3 = TdrBuf_PutVarintU32(0xa5);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = param_2[1];
            TdrBuf_ReserveU32(extraout_ECX_01);
            iVar1 = param_2[1];
            bVar7 = 0;
            uVar6 = extraout_ECX_02;
            if (param_1[0x31] != 0) {
              do {
                iVar4 = param_2[1];
                TdrBuf_ReserveU32(uVar6);
                iVar2 = param_2[1];
                iVar5 = Tdr_WriteStruct_ByteCount3IntArrays_B(param_2);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar4 = TdrBuf_PatchU32_BE(param_2[1] - iVar2,iVar4);
                if (iVar4 != 0) {
                  return iVar4;
                }
                bVar7 = bVar7 + 1;
                uVar6 = extraout_ECX_03;
              } while (bVar7 < param_1[0x31]);
            }
            iVar3 = TdrBuf_PatchU32_BE(param_2[1] - iVar1,iVar3);
            return iVar3;
          }
        }
        return -7;
      }
    }
  }
  return iVar3;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TlvPetFullAttrData_DebugFormat@101f89d0 =====

/* WARNING: Removing unreachable block (ram,0x101f89e0) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[oPetName]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[oPetSex]""
     ""[oOwner]""
     ""[oPetSignature]""
     ""[oPetExp]""
     ""[oPetLevel]""
     ""[oSpirit]""
     ""[oVigour]"" */

void TlvPetFullAttrData_DebugFormat(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
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
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 extraout_ECX_51;
  undefined4 extraout_ECX_52;
  undefined4 extraout_ECX_53;
  undefined4 extraout_ECX_54;
  undefined4 extraout_ECX_55;
  
  iVar1 = TdrText_WriteIndent(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_1,&DAT_11da4eb8,"[oPetName]",(int)(char)param_3), iVar1 == 0)) {
    iVar1 = param_2;
    if (-1 < param_2) {
      iVar1 = param_2 + 1;
    }
    iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetSex]",extraout_ECX), iVar1 == 0)) {
      iVar1 = param_2;
      if (-1 < param_2) {
        iVar1 = param_2 + 1;
      }
      iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_3,"[oOwner]",extraout_ECX_00), iVar1 == 0)) {
        iVar1 = param_2;
        if (-1 < param_2) {
          iVar1 = param_2 + 1;
        }
        iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetSignature]",extraout_ECX_01), iVar1 == 0))
        {
          iVar1 = param_2;
          if (-1 < param_2) {
            iVar1 = param_2 + 1;
          }
          iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
          if ((iVar1 == 0) &&
             (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetExp]",extraout_ECX_02), iVar1 == 0)) {
            iVar1 = param_2;
            if (-1 < param_2) {
              iVar1 = param_2 + 1;
            }
            iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
            if ((iVar1 == 0) &&
               (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetLevel]",extraout_ECX_03), iVar1 == 0))
            {
              iVar1 = param_2;
              if (-1 < param_2) {
                iVar1 = param_2 + 1;
              }
              iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
              if ((iVar1 == 0) &&
                 (iVar1 = TdrText_FieldLabelChar(param_3,"[oSpirit]",extraout_ECX_04), iVar1 == 0))
              {
                iVar1 = param_2;
                if (-1 < param_2) {
                  iVar1 = param_2 + 1;
                }
                iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                if ((iVar1 == 0) &&
                   (iVar1 = TdrText_FieldLabelChar(param_3,"[oVigour]",extraout_ECX_05), iVar1 == 0)
                   ) {
                  iVar1 = param_2;
                  if (-1 < param_2) {
                    iVar1 = param_2 + 1;
                  }
                  iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                  if ((iVar1 == 0) &&
                     (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetHP]",extraout_ECX_06), iVar1 == 0
                     )) {
                    iVar1 = param_2;
                    if (-1 < param_2) {
                      iVar1 = param_2 + 1;
                    }
                    iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                    if ((iVar1 == 0) &&
                       (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetMaxHP]",extraout_ECX_07),
                       iVar1 == 0)) {
                      iVar1 = param_2;
                      if (-1 < param_2) {
                        iVar1 = param_2 + 1;
                      }
                      iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                      if ((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetMelee]",extraout_ECX_08),
                         iVar1 == 0)) {
                        iVar1 = param_2;
                        if (-1 < param_2) {
                          iVar1 = param_2 + 1;
                        }
                        iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                        if ((iVar1 == 0) &&
                           (iVar1 = TdrText_FieldLabelChar(param_3,"[oPetDefence]",extraout_ECX_09),
                           iVar1 == 0)) {
                          iVar1 = param_2;
                          if (-1 < param_2) {
                            iVar1 = param_2 + 1;
                          }
                          iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                          if ((iVar1 == 0) &&
                             (iVar1 = TdrText_FieldLabelChar(param_3,"[oCritLevel]",extraout_ECX_10)
                             , iVar1 == 0)) {
                            iVar1 = param_2;
                            if (-1 < param_2) {
                              iVar1 = param_2 + 1;
                            }
                            iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                            if ((iVar1 == 0) &&
                               (iVar1 = TdrText_FieldLabelChar
                                                  (param_3,"[oPetExecution]",extraout_ECX_11),
                               iVar1 == 0)) {
                              iVar1 = param_2;
                              if (-1 < param_2) {
                                iVar1 = param_2 + 1;
                              }
                              iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                              if ((iVar1 == 0) &&
                                 (iVar1 = TdrText_FieldLabelChar
                                                    (param_3,"[oPetObservation]",extraout_ECX_12),
                                 iVar1 == 0)) {
                                iVar1 = param_2;
                                if (-1 < param_2) {
                                  iVar1 = param_2 + 1;
                                }
                                iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                                if ((iVar1 == 0) &&
                                   (iVar1 = TdrText_FieldLabelChar
                                                      (param_3,"[oPetLoadBearing]",extraout_ECX_13),
                                   iVar1 == 0)) {
                                  iVar1 = param_2;
                                  if (-1 < param_2) {
                                    iVar1 = param_2 + 1;
                                  }
                                  iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                                  if ((iVar1 == 0) &&
                                     (iVar1 = TdrText_FieldLabelChar
                                                        (param_3,"[oPetMaxSp]",extraout_ECX_14),
                                     iVar1 == 0)) {
                                    iVar1 = param_2;
                                    if (-1 < param_2) {
                                      iVar1 = param_2 + 1;
                                    }
                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3);
                                    if ((iVar1 == 0) &&
                                       (iVar1 = TdrText_FieldLabelChar
                                                          (param_3,"[oPetSp]",extraout_ECX_15),
                                       iVar1 == 0)) {
                                      iVar1 = param_2;
                                      if (-1 < param_2) {
                                        iVar1 = param_2 + 1;
                                      }
                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat(param_1,iVar1,param_3)
                                      ;
                                      if ((iVar1 == 0) &&
                                         (iVar1 = TdrText_FieldLabelChar
                                                            (param_3,"[oPetPotential]",
                                                             extraout_ECX_16), iVar1 == 0)) {
                                        iVar1 = param_2;
                                        if (-1 < param_2) {
                                          iVar1 = param_2 + 1;
                                        }
                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                          (param_1,iVar1,param_3);
                                        if ((iVar1 == 0) &&
                                           (iVar1 = TdrText_FieldLabelChar
                                                              (param_3,"[oWaterAtk]",extraout_ECX_17
                                                              ), iVar1 == 0)) {
                                          iVar1 = param_2;
                                          if (-1 < param_2) {
                                            iVar1 = param_2 + 1;
                                          }
                                          iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                            (param_1,iVar1,param_3);
                                          if ((iVar1 == 0) &&
                                             (iVar1 = TdrText_FieldLabelChar
                                                                (param_3,"[oFireAtk]",
                                                                 extraout_ECX_18), iVar1 == 0)) {
                                            iVar1 = param_2;
                                            if (-1 < param_2) {
                                              iVar1 = param_2 + 1;
                                            }
                                            iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                              (param_1,iVar1,param_3);
                                            if ((iVar1 == 0) &&
                                               (iVar1 = TdrText_FieldLabelChar
                                                                  (param_3,"[oLightningAtk]",
                                                                   extraout_ECX_19), iVar1 == 0)) {
                                              iVar1 = param_2;
                                              if (-1 < param_2) {
                                                iVar1 = param_2 + 1;
                                              }
                                              iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                (param_1,iVar1,param_3);
                                              if ((iVar1 == 0) &&
                                                 (iVar1 = TdrText_FieldLabelChar
                                                                    (param_3,"[oDragonAtk]",
                                                                     extraout_ECX_20), iVar1 == 0))
                                              {
                                                iVar1 = param_2;
                                                if (-1 < param_2) {
                                                  iVar1 = param_2 + 1;
                                                }
                                                iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                  (param_1,iVar1,param_3);
                                                if ((iVar1 == 0) &&
                                                   (iVar1 = TdrText_FieldLabelChar
                                                                      (param_3,"[oIceAtk]",
                                                                       extraout_ECX_21), iVar1 == 0)
                                                   ) {
                                                  iVar1 = param_2;
                                                  if (-1 < param_2) {
                                                    iVar1 = param_2 + 1;
                                                  }
                                                  iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                    (param_1,iVar1,param_3);
                                                  if ((iVar1 == 0) &&
                                                     (iVar1 = TdrText_FieldLabelChar
                                                                        (param_3,"[oWaterRes]",
                                                                         extraout_ECX_22),
                                                     iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oFireRes]",
                                                                           extraout_ECX_23),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oLightningRes]",extraout_ECX_24), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oDragonRes]",
                                                                           extraout_ECX_25),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oIceRes]",
                                                                             extraout_ECX_26),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                          (param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = TdrText_FieldLabelChar
                                                                              (param_3,
                                                  "[oWaterThrsh]",extraout_ECX_27), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oFireThrsh]",
                                                                           extraout_ECX_28),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oLightningThrsh]",extraout_ECX_29), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oDragonThrsh]",
                                                                           extraout_ECX_30),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oIceThrsh]",
                                                                             extraout_ECX_31),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                          (param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = TdrText_FieldLabelChar
                                                                              (param_3,
                                                  "[oComaThrsh]",extraout_ECX_32), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oPoisonThrsh]",
                                                                           extraout_ECX_33),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oSleepingThrsh]",extraout_ECX_34), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oParaThrsh]",
                                                                           extraout_ECX_35),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oWindPressureDef]",extraout_ECX_36), iVar1 == 0)
                                                  ) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oQuakeDef]",
                                                                           extraout_ECX_37),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oRoarDef]",
                                                                             extraout_ECX_38),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                          (param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = TdrText_FieldLabelChar
                                                                              (param_3,"[oPalsyDef]"
                                                                               ,extraout_ECX_39),
                                                           iVar1 == 0)) {
                                                          iVar1 = param_2;
                                                          if (-1 < param_2) {
                                                            iVar1 = param_2 + 1;
                                                          }
                                                          iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                            (param_1,iVar1,param_3);
                                                          if ((iVar1 == 0) &&
                                                             (iVar1 = TdrText_FieldLabelChar
                                                                                (param_3,
                                                  "[oSnowManDef]",extraout_ECX_40), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oTiredDef]",
                                                                           extraout_ECX_41),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oAttackLevelDef]",extraout_ECX_42), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oPetSkillID]",
                                                                           extraout_ECX_43),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oEquipedSkillID]",extraout_ECX_44), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oPetWeaponID]",
                                                                           extraout_ECX_45),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oPetHatID]",
                                                                             extraout_ECX_46),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                          (param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = TdrText_FieldLabelChar
                                                                              (param_3,
                                                  "[oPetBodyID]",extraout_ECX_47), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,
                                                  "[oFashionWwaponID]",extraout_ECX_48), iVar1 == 0)
                                                  ) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oFashionHatID]"
                                                                           ,extraout_ECX_49),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,
                                                  "[oFashionBodyID]",extraout_ECX_50), iVar1 == 0))
                                                  {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oRegion]",
                                                                           extraout_ECX_51),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oPetMana]",
                                                                             extraout_ECX_52),
                                                         iVar1 == 0)) {
                                                        iVar1 = param_2;
                                                        if (-1 < param_2) {
                                                          iVar1 = param_2 + 1;
                                                        }
                                                        iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                          (param_1,iVar1,param_3);
                                                        if ((iVar1 == 0) &&
                                                           (iVar1 = TdrText_FieldLabelChar
                                                                              (param_3,
                                                  "[oPetMaxMana]",extraout_ECX_53), iVar1 == 0)) {
                                                    iVar1 = param_2;
                                                    if (-1 < param_2) {
                                                      iVar1 = param_2 + 1;
                                                    }
                                                    iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                      (param_1,iVar1,param_3);
                                                    if ((iVar1 == 0) &&
                                                       (iVar1 = TdrText_FieldLabelChar
                                                                          (param_3,"[oAnimusHide]",
                                                                           extraout_ECX_54),
                                                       iVar1 == 0)) {
                                                      iVar1 = param_2;
                                                      if (-1 < param_2) {
                                                        iVar1 = param_2 + 1;
                                                      }
                                                      iVar1 = TlvTypedBaseOrBonus_DebugFormat
                                                                        (param_1,iVar1,param_3);
                                                      if ((iVar1 == 0) &&
                                                         (iVar1 = TdrText_FieldLabelChar
                                                                            (param_3,"[oNoInterupt]"
                                                                             ,extraout_ECX_55),
                                                         iVar1 == 0)) {
                                                        if (param_2 < 0) {
                                                          TlvTypedBaseOrBonus_DebugFormat
                                                                    (param_1,param_2,param_3);
                                                          return;
                                                        }
                                                        TlvTypedBaseOrBonus_DebugFormat
                                                                  (param_1,param_2 + 1,param_3);
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
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TdrDump_Box_Items10_Equip10_BagFull@103f8c50 =====

/* WARNING: Removing unreachable block (ram,0x103f8cd3) */
/* WARNING: Removing unreachable block (ram,0x103f8daf) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[iBox]""
     ""0x%02x""
     ""[bItemCount]""
     ""[astItemList]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c""
     ""[bEquipCnt]""
     ""[astEquipList]""
     ""[bBagFull]"" */

int __thiscall
TdrDump_Box_Items10_Equip10_BagFull
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBox]",&DAT_11d9e0b4,*param_1);
  if ((iVar2 == 0) &&
     (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bItemCount]","0x%02x",
                                  *(undefined1 *)(param_1 + 1)), iVar2 == 0)) {
    if (10 < *(byte *)(param_1 + 1)) {
      return -7;
    }
    bVar1 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      do {
        iVar2 = TdrText_WriteIndent(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astItemList]",bVar1,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_103f8770(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(param_1 + 1));
    }
    iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bEquipCnt]","0x%02x",
                                *(undefined1 *)((int)param_1 + 0x7d));
    if (iVar2 == 0) {
      if (10 < *(byte *)((int)param_1 + 0x7d)) {
        return -7;
      }
      bVar1 = 0;
      if (*(byte *)((int)param_1 + 0x7d) != 0) {
        do {
          iVar2 = TdrText_WriteIndent(param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astEquipList]",bVar1,(int)(char)param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = TlvItemTypeSlot__TdrTextFormat(param_2,iVar2,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar1 = bVar1 + 1;
        } while (bVar1 < *(byte *)((int)param_1 + 0x7d));
      }
      iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bBagFull]","0x%02x",
                                  *(undefined1 *)(param_1 + 0x22a));
    }
  }
  return iVar2;
}


// ===== caller of _wassert@EXTERNAL:000001bc : TlvItemRebuildLimitData_DebugFormat@10178f00 =====

/* WARNING: Removing unreachable block (ram,0x10178f99) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[itemRebuildLimitCount]""
     ""%I64u""
     ""[lastItemRebuildTime]""
     ""[itemRebuildLimitInfo]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TlvItemRebuildLimitData_DebugFormat(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[itemRebuildLimitCount]",&DAT_11d9e0b4,
                              *param_1);
  if ((iVar1 == 0) &&
     (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[lastItemRebuildTime]","%I64u",param_1[1]
                                  ,param_1[2]), iVar1 == 0)) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      return -6;
    }
    if (8 < iVar1) {
      return -7;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = TdrText_WriteIndent(param_3);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_1010c010(param_2,"%s[%u]%c","[itemRebuildLimitInfo]",iVar2,(int)(char)param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_101785a0(param_2,iVar1,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}

