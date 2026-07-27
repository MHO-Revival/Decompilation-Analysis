
/* [RE-AUTO c0]
   strings:
     ""InitState"" */

void __thiscall FUN_11b31880(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  FUN_11ab2ea0("InitState");
  piVar2 = (int *)FUN_11b32070(&local_10,&local_8);
  if ((((int *)*piVar2 == (int *)0x0) || (iVar3 = *(int *)*piVar2, iVar3 == 0)) ||
     (*(int *)(iVar3 + 4) < piVar2[1])) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x14 + piVar2[1] * 0x10);
  }
  piVar2 = (int *)((local_8 & 0xfffffffc) + 4);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    (**(code **)(*DAT_123b004c + 0x30))(local_8 & 0xfffffffc);
  }
  if (iVar3 == 0) {
    FUN_11ab2ea0("InitState");
    local_c = (undefined4 *)0x2;
    iVar3 = (**(code **)(*DAT_123b004c + 0x38))(param_1,0x14,&local_c);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      if (param_2 != 0) {
        FUN_11a8aca0(extraout_ECX);
      }
      iVar3 = FUN_11b34240((local_8 & 0xfffffffc) + 8,param_2);
    }
    if ((char)param_3 != '\0') {
      *(undefined1 *)(iVar3 + 0x10) = 1;
    }
    local_10 = &local_8;
    local_c = &param_3;
    param_3 = iVar3;
    uVar4 = FUN_11ab4580((local_8 & 0xfffffffc) + 8,*(uint *)(local_8 & 0xfffffffc) & 0x7fffffff,
                         0x1505);
    FUN_11b32ee0(param_1 + 8,&local_10,uVar4);
    if (param_3 != 0) {
      FUN_11a8ad60();
    }
    piVar2 = (int *)((local_8 & 0xfffffffc) + 4);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*DAT_123b004c + 0x30))(local_8 & 0xfffffffc);
    }
  }
  else {
    if (param_2 != 0) {
      FUN_11a8aca0();
    }
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_11a8ad60();
    }
    *(int *)(iVar3 + 8) = param_2;
  }
  if (param_2 != 0) {
    FUN_11a8ad60();
  }
  return;
}

