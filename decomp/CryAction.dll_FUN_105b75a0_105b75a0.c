
/* [RE-AUTO c0] */

undefined1 __fastcall FUN_105b75a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_14 [4];
  int local_10;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  FUN_10a5d660();
  cVar1 = FUN_103dbbb0(1,local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  local_c = FUN_105b7640();
  puVar2 = (undefined4 *)FUN_10654c10(&local_10,&local_c);
  puVar2 = (undefined4 *)FUN_10a5da60(local_14,*puVar2);
  FUN_10a5d8a0(*puVar2);
  piVar4 = (int *)(local_10 + -0xc);
  if (-1 < *piVar4) {
    iVar3 = FUN_106542c0(piVar4);
    if (iVar3 < 1) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_10 + -4));
      FUN_106540f0(piVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = local_c;
  return 1;
}

