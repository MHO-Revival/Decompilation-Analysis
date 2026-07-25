
// ===== [d0] FUN_103d9af0 @103d9af0  (134 bytes) =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d9af0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)FUN_10653d70(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
    *puVar3 = &PTR_FUN_113bf23c;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 2) != '\0')) {
    puVar3[1] = puVar3[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 **)(param_1 + 0x44) = puVar3;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar5 = 0;
  uVar4 = (uint)((int)*(undefined4 **)(param_1 + 0x14) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)(param_1 + 0x14) < puVar3) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x44))();
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}


// [d1] FUN_10653d70 @10653d70  (emitted in an earlier root)

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

