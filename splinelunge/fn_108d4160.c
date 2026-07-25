// FUN_108d4160 @ 108d4160  (65 bytes)
// flag-byte accesses:
//   108d418d  PUSH 0x116


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_108d4160(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10d17440(param_1);
  if (iVar1 != 0) {
    FUN_10d17440(param_1);
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1);
      piVar2 = (int *)FUN_10d17870();
      (**(code **)(*piVar2 + 4))(0x116,&stack0xfffffffb);
    }
  }
  return 0;
}

