
/* [RE-AUTO c0]
   calls: _strlwr */

int __thiscall FUN_11077e10(int param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char local_90 [128];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_100ebf60();
    _strlwr(local_90);
    iVar3 = FUN_11079390();
    if ((iVar3 != param_1) && (iVar3 = *(int *)(iVar3 + 0x14), iVar3 != 0)) {
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x1c) = iVar4;
      local_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x117) = *(byte *)(iVar4 + 0x117) & 0xfd;
        if (iVar3 == *(int *)(param_1 + 0x1c)) {
          uVar2 = *(undefined8 *)(*(int *)(param_1 + 0x1c) + 0xdc);
        }
        else {
          uVar2 = 0;
        }
        uStack_c = (undefined4)uVar2;
        uStack_8 = (undefined4)((ulonglong)uVar2 >> 0x20);
        FUN_11067920();
      }
      iVar4 = FUN_11066f90(param_3);
      if (0 < iVar4) {
        *(int *)(param_1 + 0x18) = iVar3;
        FUN_11067dc0();
        pbVar1 = (byte *)(*(int *)(param_1 + 0x18) + 0x117);
        *pbVar1 = *pbVar1 | 2;
        *(undefined1 *)(param_1 + 0x30) = 0;
        return iVar4;
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return 0;
}

