
/* [RE-R1]
   strings:
     ""CBuffInfo"" */

void CBuffSystem__BuildBuffInstanceFromInfo(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_96;
  undefined4 local_92;
  undefined1 local_28;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      local_a0 = *(undefined4 *)(iVar2 + 0x10);
      local_a4 = DAT_11dfa3cc;
      DAT_11dfa3cc = DAT_11dfa3cc + 1;
      local_9c = 0;
      local_98 = 1;
      local_96 = *(undefined4 *)(iVar2 + 0x10c);
      local_92 = *(undefined4 *)(iVar2 + 0x80);
      local_28 = 1;
      (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(&local_a4);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}

