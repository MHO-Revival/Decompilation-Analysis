// FUN_1025be30 @ 1025be30  depth 1  (67 bytes)


/* [RE-AUTO c0] */

uint FUN_1025be30(uint param_1,undefined1 *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d690();
    return uVar1;
  }
  uVar1 = FUN_1025b520(param_1 - 1000000,*param_2);
  return uVar1;
}

