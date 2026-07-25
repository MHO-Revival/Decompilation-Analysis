// FUN_11b48cb0 @ 11b48cb0  (386 bytes)
// CAnimSequencePlay param indices referenced: [1, 4, 12, 17, 18, 19, 20, 22, 23, 25, 26, 27, 28]


/* [RE-AUTO c0]
   calls: EnterCriticalSection, LeaveCriticalSection */

void __fastcall FUN_11b48cb0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  local_28 = FUN_11c0cae0();
  local_1c = local_28;
  FUN_11ab0090(0x12,&local_1c);
  local_1c = FUN_11c0cc00();
  FUN_11ab0090(0x15,&local_1c);
  local_1c = *(int *)(param_1 + 0x24);
  FUN_11ab0090(0x1a,&local_1c);
  local_1c = *(int *)(param_1 + 0x28);
  FUN_11ab0090(0x1c,&local_1c);
  FUN_11c0caf0(&local_18);
  local_1c = local_14 + *(int *)(param_1 + 0xc);
  local_14 = local_1c;
  FUN_11ab0090(0x17,&local_1c);
  local_1c = local_18;
  FUN_11ab0090(0x19,&local_1c);
  local_1c = local_10;
  FUN_11ab0090(0x1b,&local_1c);
  local_1c = local_c;
  FUN_11ab0090(0x16,&local_1c);
  piVar4 = *(int **)(param_1 + 0x48);
  iVar3 = 0;
  iVar2 = 0;
  local_24 = 0;
  while( true ) {
    if (param_1 == -0x44) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(param_1 + 0x40);
    }
    if (piVar4 == piVar1) break;
    if ((piVar4[7] & 0x1000U) == 0) {
      iVar3 = iVar3 + 1;
      iVar2 = (**(code **)(*piVar4 + 0x54))();
      iVar2 = local_24 + iVar2;
      local_24 = iVar2;
    }
    piVar4 = (int *)piVar4[2];
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(local_20 + 0x4c);
  local_1c = iVar3;
  if (iVar3 != 0) {
    local_20 = iVar3;
    FUN_11ab0090(0x14,&local_20);
    local_20 = local_24;
    FUN_11ab0090(0x13,&local_20);
    iVar2 = local_24;
  }
  local_28 = local_28 + iVar2;
  FUN_11ab0090(0x11,&local_28);
  LeaveCriticalSection(lpCriticalSection);
  FUN_11a89daa();
  return;
}

