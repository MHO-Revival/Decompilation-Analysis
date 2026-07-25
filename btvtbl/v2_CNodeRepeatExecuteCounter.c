// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CNodeRepeatExecuteCounter vtbl[4] @105f95b0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105f95b0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  cVar2 = FUN_103dba30(0,&local_c);
  if (cVar2 == '\0') {
    return 1;
  }
  local_1c = param_1;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar4 = FUN_103dd050(uVar3);
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + 0x174);
    iVar6 = 0;
    piVar5 = (int *)*piVar1;
    local_10 = *(int **)(iVar4 + 0x17c);
    iVar7 = *(int *)(iVar4 + 0x180);
    if (piVar5 != *(int **)(iVar4 + 0x184)) {
      local_14 = *(int **)(iVar4 + 0x184);
      piVar8 = local_10;
      do {
        if ((local_c < iVar6) || (*piVar5 != param_1)) break;
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + 1;
        if (piVar5 == piVar8) {
          piVar5 = *(int **)(iVar7 + 4);
          iVar7 = iVar7 + 4;
          piVar8 = piVar5 + 0x20;
        }
      } while (piVar5 != local_14);
    }
    *(int *)(param_1 + 0x60) = param_1;
    if (iVar6 != local_c) {
      local_18 = piVar1;
      local_8 = iVar4;
      if (*(int *)(iVar4 + 0x19c) <
          (*(int *)(iVar4 + 400) - *(int *)(iVar4 + 0x180) >> 2) * 0x20 +
          (*(int *)(iVar4 + 0x184) - *(int *)(iVar4 + 0x188) >> 2) + -0x20 +
          (*(int *)(iVar4 + 0x17c) - *piVar1 >> 2)) {
        iVar7 = *(int *)(iVar4 + 0x184);
        iVar6 = *(int *)(iVar4 + 0x188);
        if (iVar7 == iVar6) {
          if (iVar6 != 0) {
            FUN_10653dc0(iVar6);
          }
          piVar5 = (int *)(*(int *)(iVar4 + 400) + -4);
          *(int **)(iVar4 + 400) = piVar5;
          iVar7 = *piVar5;
          *(int *)(iVar4 + 0x188) = iVar7;
          iVar7 = iVar7 + 0x80;
          *(int *)(iVar4 + 0x18c) = iVar7;
        }
        *(int *)(iVar4 + 0x184) = iVar7 + -4;
      }
      if (*piVar1 == *(int *)(iVar4 + 0x178)) {
        FUN_105f9af0(&local_1c);
        return 2;
      }
      *(int *)(*piVar1 + -4) = param_1;
      *piVar1 = *piVar1 + -4;
      return 2;
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CNodeRepeatExecuteCounter vtbl[7] @10621ef0 =====

char * FUN_10621ef0(void)

{
  return "CNodeRepeatExecuteCounter";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CNodeRepeatExecuteCounter vtbl[10] @10626530 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10626530(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,100,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CNodeRepeatExecuteCounter vtbl[13] @105f97e0 =====

void FUN_105f97e0(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
