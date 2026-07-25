// FUN_10c3d780 @ 10c3d780  depth 2  (80 bytes)


/* [RE-AUTO c0] */

undefined4 FUN_10c3d780(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_1202e864 == 0) {
    FUN_10c495f0();
  }
  uVar1 = (*DAT_1202e834)(param_1,&local_8);
  LOCK();
  DAT_1202e824 = DAT_1202e824 + local_8;
  UNLOCK();
  LOCK();
  DAT_1202e82c = DAT_1202e82c + param_1;
  UNLOCK();
  LOCK();
  DAT_1202e830 = DAT_1202e830 + 1;
  UNLOCK();
  return uVar1;
}

