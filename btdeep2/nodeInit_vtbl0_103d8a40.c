
// ===== [d0] FUN_103d8a40 @103d8a40  (70 bytes) =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d8a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_10653d70(0x24);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_103d8a90(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ===== [d1] FUN_10653d70 @10653d70  (80 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_10653d70(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_113f3a64 == 0) {
    FUN_106889b0();
  }
  uVar1 = (*DAT_113f3a34)(param_1,&local_8);
  LOCK();
  DAT_113f3a24 = DAT_113f3a24 + local_8;
  UNLOCK();
  LOCK();
  DAT_113f3a2c = DAT_113f3a2c + param_1;
  UNLOCK();
  LOCK();
  DAT_113f3a30 = DAT_113f3a30 + 1;
  UNLOCK();
  return uVar1;
}


// ===== [d1] FUN_103d8a90 @103d8a90  (133 bytes) =====

/* [RE-AUTO c0]
   calls: memcpy */

int __thiscall FUN_103d8a90(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  iVar1 = param_2;
  FUN_103da1f0(param_2);
  FUN_103da870(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2,(int)&param_2 + 3);
  pvVar3 = *(void **)(iVar1 + 0xc);
  pvVar2 = *(void **)(param_1 + 0xc);
  if (*(void **)(iVar1 + 0x10) != pvVar3) {
    sVar4 = (int)*(void **)(iVar1 + 0x10) - (int)pvVar3;
    pvVar2 = memcpy(pvVar2,pvVar3,sVar4);
    pvVar2 = (void *)(sVar4 + (int)pvVar2);
  }
  *(void **)(param_1 + 0x10) = pvVar2;
  FUN_103da7d0(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0x18);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (*(void **)(iVar1 + 0x1c) != pvVar2) {
    sVar4 = (int)*(void **)(iVar1 + 0x1c) - (int)pvVar2;
    pvVar3 = memcpy(pvVar3,pvVar2,sVar4);
    pvVar3 = (void *)((int)pvVar3 + sVar4);
  }
  *(void **)(param_1 + 0x1c) = pvVar3;
  return param_1;
}


// ===== [d2] FUN_106889b0 @106889b0  (712 bytes) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* [RE-AUTO c0]
   calls: GetModuleHandleA, GetProcAddress, LoadLibraryA, MessageBoxA, exit
   strings:
     ""CryMalloc""
     ""CryRealloc""
     ""CryFree""
     ""CryGetMemSize""
     ""CrySystemCrtMalloc""
     ""CrySystemCrtSize""
     ""CrySystemCrtFree""
     ""CryGetIMemoryManagerInterface""
     ""CryCleanup""
     ""EnableMemCheck"" */

void FUN_106889b0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  DAT_113f3a64 = 1;
  iVar2 = 0;
  DAT_113f3a24 = 0;
  DAT_113f3a28 = 0;
  DAT_113f3a2c = 0;
  DAT_113f3a30 = 0;
  hModule = GetModuleHandleA((LPCSTR)0x0);
  do {
    if (hModule == (HMODULE)0x0) {
LAB_10688aec:
      MessageBoxA((HWND)0x0,"Could not access CrySystem.dll (check working directory)",
                  "Memory Manager",0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_113f3a34 = GetProcAddress(hModule,"CryMalloc");
    DAT_113f3a38 = GetProcAddress(hModule,"CryRealloc");
    DAT_113f3a3c = GetProcAddress(hModule,"CryFree");
    DAT_113f3a40 = GetProcAddress(hModule,"CryGetMemSize");
    DAT_113f3a44 = GetProcAddress(hModule,"CrySystemCrtMalloc");
    DAT_113f3a50 = GetProcAddress(hModule,"CrySystemCrtSize");
    DAT_113f3a48 = GetProcAddress(hModule,"CrySystemCrtFree");
    DAT_113f3a54 = GetProcAddress(hModule,"CryGetIMemoryManagerInterface");
    _DAT_113f3a60 = GetProcAddress(hModule,"CryCleanup");
    _DAT_113f3a58 = GetProcAddress(hModule,"EnableMemCheck");
    if ((((((DAT_113f3a34 != (FARPROC)0x0) && (DAT_113f3a38 != (FARPROC)0x0)) &&
          (DAT_113f3a3c != (FARPROC)0x0)) &&
         ((DAT_113f3a40 != (FARPROC)0x0 && (DAT_113f3a44 != (FARPROC)0x0)))) &&
        ((DAT_113f3a48 != (FARPROC)0x0 &&
         ((DAT_113f3a50 != (FARPROC)0x0 && (DAT_113f3a54 != (FARPROC)0x0)))))) || (iVar2 == 1)) {
      if (((((hModule != (HMODULE)0x0) && (DAT_113f3a34 != (FARPROC)0x0)) &&
           (DAT_113f3a38 != (FARPROC)0x0)) &&
          (((DAT_113f3a3c != (FARPROC)0x0 && (DAT_113f3a40 != (FARPROC)0x0)) &&
           ((DAT_113f3a44 != (FARPROC)0x0 &&
            ((DAT_113f3a48 != (FARPROC)0x0 && (DAT_113f3a50 != (FARPROC)0x0)))))))) &&
         ((DAT_113f3a54 != (FARPROC)0x0 && (_DAT_113f3a58 != (FARPROC)0x0)))) {
        iVar2 = (*_DAT_113f3a58)(0);
        if ((char)iVar2 != '\0') {
          DAT_113f3a34 = GetProcAddress(hModule,"CryMalloc_MemCheck");
          DAT_113f3a38 = GetProcAddress(hModule,"CryRealloc_MemCheck");
          DAT_113f3a3c = GetProcAddress(hModule,"CryFree_MemCheck");
          DAT_113f3a44 = GetProcAddress(hModule,"CrySystemCrtMalloc_MemCheck");
          _DAT_113f3a4c = GetProcAddress(hModule,"CrySystemCrtRealloc_MemCheck");
          DAT_113f3a48 = GetProcAddress(hModule,"CrySystemCrtFree_MemCheck");
          DAT_113f3a40 = GetProcAddress(hModule,"CryGetMemSize_MemCheck");
          DAT_113f3a50 = GetProcAddress(hModule,"CrySystemCrtSize_MemCheck");
        }
        DAT_113f3a5c = LoadLibraryA("MemoryProfiler.dll");
        if (DAT_113f3a5c != (HMODULE)0x0) {
          DAT_113f3a34 = GetProcAddress(DAT_113f3a5c,"UnrealMalloc");
          DAT_113f3a38 = GetProcAddress(DAT_113f3a5c,"UnrealRealloc");
          DAT_113f3a3c = GetProcAddress(DAT_113f3a5c,"UnrealFree");
          DAT_113f3a44 = GetProcAddress(DAT_113f3a5c,"UnrealCrtMalloc");
          _DAT_113f3a4c = GetProcAddress(DAT_113f3a5c,"UnrealCrtRealloc");
          DAT_113f3a48 = GetProcAddress(DAT_113f3a5c,"UnrealCrtFree");
          DAT_113f3a50 = GetProcAddress(DAT_113f3a5c,"UnrealSystemCrtSize");
          DAT_113f3a40 = GetProcAddress(DAT_113f3a5c,"UnrealGetMemSize");
          pFVar1 = GetProcAddress(DAT_113f3a5c,"Init");
          (*pFVar1)();
        }
        return;
      }
      goto LAB_10688aec;
    }
    hModule = LoadLibraryA("CrySystem.dll");
    iVar2 = iVar2 + 1;
  } while( true );
}


// ===== [d2] FUN_103da870 @103da870  (123 bytes) =====

/* [RE-AUTO c0]
   calls: puts, exit
   strings:
     ""out of memory\n"" */

int * __thiscall FUN_103da870(int *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < 0x40000000) {
    if (param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    iVar1 = FUN_10653d70(param_2 * 4);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + param_2 * 4;
      return param_1;
    }
  }
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


// [d2] memcpy @112be478  (emitted in an earlier root)

// ===== [d2] FUN_103da1f0 @103da1f0  (92 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103da1f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_103da740(param_2[1] - *param_2 >> 2,param_1);
  piVar4 = (int *)*param_2;
  piVar2 = (int *)*param_1;
  for (iVar3 = param_2[1] - (int)piVar4 >> 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar4;
      *piVar2 = iVar1;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[1] = piVar2;
  return param_1;
}


// ===== [d2] FUN_103da7d0 @103da7d0  (123 bytes) =====

/* [RE-AUTO c0]
   calls: puts, exit
   strings:
     ""out of memory\n"" */

int * __thiscall FUN_103da7d0(int *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < 0x40000000) {
    if (param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    iVar1 = FUN_10653d70(param_2 * 4);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + param_2 * 4;
      return param_1;
    }
  }
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}

