// FUN_11317050 @ 11317050  depth 2  (160 bytes)


/* [RE-AUTO c0]
   calls: EnterCriticalSection, LeaveCriticalSection
   strings:
     ""mh_sharemem_addrinfo"" */

int __thiscall FUN_11317050(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  int local_8;
  
  pbVar4 = &DAT_11d9d32b;
  pbVar2 = &DAT_11d9d32b;
  pbVar5 = &DAT_11d9d32b;
  if (param_2 != (byte *)0x0) {
    pbVar2 = param_2;
    pbVar5 = param_2;
  }
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_11317092:
      uVar3 = -(uint)bVar6 | 1;
      goto LAB_11317097;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_11317092;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_11317097:
  if (uVar3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    param_2 = pbVar5;
    FUN_11316260(&local_8,&param_2);
    if ((local_8 == 0) || (local_8 = local_8 + 4, local_8 == 0)) {
      local_8 = FUN_11317170(pbVar5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return local_8;
  }
  return *(int *)(param_1 + 0x1c);
}

