// FUN_1025bc60 @ 1025bc60  depth 1  (82 bytes)


/* [RE-AUTO c0] */

uint FUN_1025bc60(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d4f0(param_1,*param_2);
    return uVar1;
  }
  uVar2 = FUN_11317f30();
  uVar1 = FUN_1025b630(param_1 - 1000000,uVar2);
  return uVar1;
}

