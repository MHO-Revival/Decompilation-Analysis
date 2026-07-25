// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CBTOperation vtbl[4] @1055eaa0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1055eaa0(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 local_c [7];
  char local_5;
  
  FUN_10a5d660();
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)FUN_103dd050(uVar3);
  if (piVar4 != (int *)0x0) {
    local_1c = piVar4[0x46];
    iVar6 = piVar4[0x48];
    local_18 = piVar4[0x47];
    local_5 = '\0';
    cVar2 = FUN_103dbbb0(0,local_c);
    if (cVar2 == '\0') {
      cVar2 = FUN_103db9b0(2,&local_5);
      if ((cVar2 != '\0') && (local_5 != '\0')) {
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
    else {
      pcVar5 = (char *)FUN_10a5d940();
      local_24 = local_34;
      pcVar1 = pcVar5;
      do {
        pcVar7 = pcVar1;
        pcVar1 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      local_20 = local_24;
      FUN_1001ea30(pcVar5,pcVar7);
      iVar6 = (**(code **)(*piVar4 + 0x58))(&local_1c,local_34);
      iVar6 = *(int *)(iVar6 + 8);
      if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
        FUN_10653dc0(local_20);
      }
    }
    if ((iVar6 != 0) && (cVar2 = FUN_103dba30(1,&local_10), cVar2 != '\0')) {
      switch(local_10) {
      case 0:
        if (iVar6 != *(int *)(param_1 + 0x20)) {
          FUN_103e0e60(0);
          return 2;
        }
        break;
      case 1:
        func_0x103e0e30();
        return 2;
      case 2:
        func_0x103e0e00();
        return 2;
      case 3:
        func_0x103e0e20();
      }
      return 2;
    }
  }
  return 1;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CBTOperation vtbl[7] @10621450 =====

char * FUN_10621450(void)

{
  return "CBTOperation";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CBTOperation vtbl[10] @10622f90 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10622f90(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)
// vtbl[13] @103d7ae0  (emitted elsewhere)
// vtbl[14] @103dc6f0  (emitted elsewhere)
