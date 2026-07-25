// FUN_11aaec00 @ 11aaec00  (356 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 4, 16, 17, 18, 19, 20, 22, 23, 25, 26, 27, 28]


/* [RE-AUTO c0]
   calls: EnterCriticalSection, LeaveCriticalSection */

undefined4 __thiscall FUN_11aaec00(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x98);
  local_c = iVar1;
  FUN_11ab0090(0x12,&local_c);
  local_c = *(int *)(*(int *)(param_1 + 0x68) + 0x9c);
  FUN_11ab0090(0x15,&local_c);
  local_c = 0;
  FUN_11ab0090(0x1a,&local_c);
  local_c = 0;
  FUN_11ab0090(0x1c,&local_c);
  local_c = 0;
  FUN_11ab0090(0x17,&local_c);
  local_c = 0;
  FUN_11ab0090(0x19,&local_c);
  local_c = 0;
  FUN_11ab0090(0x1b,&local_c);
  local_c = 0;
  FUN_11ab0090(0x16,&local_c);
  piVar5 = *(int **)(param_1 + 0x48);
  iVar4 = 0;
  iVar3 = 0;
  local_8 = 0;
  while( true ) {
    if (param_1 == -0x44) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_1 + 0x40);
    }
    if (piVar5 == piVar2) break;
    if ((piVar5[7] & 0x1000U) == 0) {
      iVar4 = iVar4 + 1;
      iVar3 = (**(code **)(*piVar5 + 0x54))();
      iVar3 = local_8 + iVar3;
      local_8 = iVar3;
    }
    piVar5 = (int *)piVar5[2];
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(local_10 + 0x4c);
  local_c = iVar4;
  if (iVar4 != 0) {
    local_10 = iVar4;
    FUN_11ab0090(0x14,&local_10);
    param_2 = local_8;
    FUN_11ab0090(0x13,&param_2);
    iVar3 = local_8;
  }
  param_2 = iVar1 + iVar3;
  FUN_11ab0090(0x11,&param_2);
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}

