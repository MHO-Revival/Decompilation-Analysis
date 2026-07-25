// FUN_10122dd0 @ 10122dd0
// ramp offsets referenced: [537]


/* [RE-AUTO c0] */

undefined4 FUN_10122dd0(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffed;
  }
  uVar1 = 0x210;
  if (param_2 != '\0') {
    uVar1 = 0x219;
  }
  *param_1 = uVar1;
  return 0;
}

