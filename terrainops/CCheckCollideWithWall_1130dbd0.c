// CCheckCollideWithWall  name-getter slot 0x1130dbd0
// -6  0x1130dbb8 -> 0x103d8b60
// -5  0x1130dbbc -> 0x103dca70
// -4  0x1130dbc0 -> 0x103dc9e0
// -3  0x1130dbc4 -> 0x105b0560   <== Evaluate
// -2  0x1130dbc8 -> 0x103d7a00
// -1  0x1130dbcc -> 0x103d7a30
// +0  0x1130dbd0 -> 0x106215e0   <== name getter
// +1  0x1130dbd4 -> 0x103dc6d0
// +2  0x1130dbd8 -> 0x103dc830


/* [RE-AUTO c0] */

char __fastcall FUN_105b0560(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_50 [61];
  char local_13;
  
  FUN_104b42d0();
  iVar3 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  if ((iVar3 != 0) && (*(int **)(DAT_113f3a18 + 0x80) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(iVar3,local_50);
    if (cVar1 != '\0') {
      return (local_13 != '\0') + '\x01';
    }
  }
  return '\x01';
}

