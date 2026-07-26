// CIsOnVolume  name-getter slot 0x1130a27c
// -6  0x1130a264 -> 0x103d8b60
// -5  0x1130a268 -> 0x103dca70
// -4  0x1130a26c -> 0x103dc9e0
// -3  0x1130a270 -> 0x105af340   <== Evaluate
// -2  0x1130a274 -> 0x103d7a00
// -1  0x1130a278 -> 0x103d7a30
// +0  0x1130a27c -> 0x105af480   <== name getter
// +1  0x1130a280 -> 0x103dc6d0
// +2  0x1130a284 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 FUN_105af340(void)

{
  char cVar1;
  int *piVar2;
  undefined1 local_10 [12];
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x4c) + 0x108))();
  if (((piVar2 != (int *)0x0) && (cVar1 = FUN_10552e70(0,local_10), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*piVar2 + 0x1c))(local_10), cVar1 != '\0')) {
    return 2;
  }
  return 1;
}

