
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1025b060(undefined4 *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = *param_1;
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    *(ushort *)((int)&local_8 + uVar4) =
         *(ushort *)((int)&local_8 + uVar4) ^ *(ushort *)((int)param_1 + uVar4 + 4);
    uVar3 = uVar4 + 2;
  } while (uVar4 + 3 < 4);
  if (uVar4 + 2 < 4) {
    pbVar1 = (byte *)((int)&local_8 + uVar4 + 2);
    *pbVar1 = *pbVar1 ^ *(byte *)(uVar4 + 6 + (int)param_1);
  }
  uVar3 = 3;
  uVar4 = 0;
  do {
    if (3 < uVar3) {
      return local_8;
    }
    uVar2 = *(undefined1 *)((int)&local_8 + uVar4);
    *(undefined1 *)((int)&local_8 + uVar4) = *(undefined1 *)((int)&local_8 + uVar3);
    uVar4 = uVar4 + 2;
    *(undefined1 *)((int)&local_8 + uVar3) = uVar2;
    uVar3 = uVar3 - 2;
  } while (uVar4 < 4);
  return local_8;
}

