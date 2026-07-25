// FUN_10c3d900 @ 10c3d900  depth 2  (53 bytes)


/* [RE-AUTO c0] */

int FUN_10c3d900(int param_1)

{
  int iVar1;
  
  if (DAT_1202e864 == 0) {
    FUN_10c495f0();
  }
  if (param_1 != 0) {
    iVar1 = (*DAT_1202e83c)(param_1);
    LOCK();
    DAT_1202e828 = DAT_1202e828 + iVar1;
    UNLOCK();
    return iVar1;
  }
  return 0;
}

