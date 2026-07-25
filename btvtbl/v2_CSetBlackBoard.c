// vtbl[0] @103d7a00  (emitted elsewhere)
// vtbl[1] @103d7a30  (emitted elsewhere)

// ===== CSetBlackBoard vtbl[2] @10622340 =====

char * FUN_10622340(void)

{
  return "CSetBlackBoard";
}

// vtbl[3] @103dc6d0  (emitted elsewhere)
// vtbl[4] @103dc830  (emitted elsewhere)

// ===== CSetBlackBoard vtbl[5] @10627af0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10627af0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x6c,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[6] @103d9af0  (emitted elsewhere)
// vtbl[7] @103d9b80  (emitted elsewhere)

// ===== CSetBlackBoard vtbl[8] @105ce7d0 =====

void __fastcall FUN_105ce7d0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_103d8660(6);
  if (cVar2 != '\0') {
    FUN_103d8610(6);
  }
  pcVar1 = (char *)(param_1 + 0x68);
  *pcVar1 = '\0';
  FUN_103db9b0(7,pcVar1);
  if (*pcVar1 == '\0') {
    cVar2 = FUN_103d8660(6);
    if (cVar2 == '\0') {
      cVar2 = FUN_103d8660(5);
      if (cVar2 == '\0') {
        cVar2 = FUN_103d87e0(0);
        if (cVar2 != '\0') {
          iVar3 = FUN_103d85c0(0);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
            FUN_103d8720(1,*(int *)(iVar3 + 0xc));
          }
        }
      }
    }
  }
  return;
}

// vtbl[9] @103dc6f0  (emitted elsewhere)
