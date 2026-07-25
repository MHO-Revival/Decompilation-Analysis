// FUN_105e5fa0 @ 105e5fa0  (55 bytes)
// flag-byte accesses:
//   105e5fc9  PUSH 0x116


/* [RE-AUTO c0] */

void __fastcall FUN_105e5fa0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440();
      piVar2 = (int *)FUN_10d17870();
      (**(code **)(*piVar2 + 4))(0x116,param_1);
    }
  }
  return;
}

