// FUN_112e5f50 @ 112e5f50
// ramp offsets referenced: [546]


/* [RE-AUTO c0] */

void FUN_112e5f50(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_5;
  
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x222,&local_5);
  }
  return;
}

