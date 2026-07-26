
/* [RE-AUTO c0] */

undefined4 FUN_1184a650(undefined4 param_1)

{
  char cVar1;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  cVar1 = FUN_1184a6d0(&local_8,param_1);
  if (cVar1 != '\0') {
    return *local_8;
  }
  return 0xffffffff;
}

