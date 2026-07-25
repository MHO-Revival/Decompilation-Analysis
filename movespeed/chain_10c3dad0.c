// FUN_10c3dad0 @ 10c3dad0  depth 2  (16 bytes)


/* [RE-AUTO c0] */

int FUN_10c3dad0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}

