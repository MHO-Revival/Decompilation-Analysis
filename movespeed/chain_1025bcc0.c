// FUN_1025bcc0 @ 1025bcc0  depth 1  (64 bytes)


/* [RE-AUTO c0] */

uint FUN_1025bcc0(uint param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return in_EAX & 0xffffff00;
  }
  if (param_1 < 1000000) {
    uVar1 = FUN_1025d550(param_1);
    return uVar1;
  }
  uVar1 = FUN_1025b410(param_1 - 1000000,*param_2);
  return uVar1;
}

