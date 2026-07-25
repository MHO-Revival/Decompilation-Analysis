
//#### InstantiateBehaviorTreeForEntity 10aa66e0 ####

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""BTCtrlObject"" */

undefined4 __fastcall CBTActor__InstantiateBehaviorTreeForEntity(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_11318380();
  if (cVar1 != '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar5 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  piVar2 = (int *)(**(code **)(iVar5 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    iVar5 = **(int **)m_pThis_exref;
    uVar3 = (**(code **)(*(int *)param_1[0x15] + 0xc))();
    piVar2 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar4 != (int *)0x0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        cVar1 = FUN_104969c0(4,&local_8);
        iVar5 = *piVar4;
        piVar2 = local_8;
        if (cVar1 == '\0') {
          piVar2 = (int *)0xffffffff;
        }
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a],piVar2);
        (**(code **)(iVar5 + 0xc0))(uVar3);
        return 2;
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar5 != 0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a]);
        FUN_10b24e30(uVar3);
        return 2;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x1d4))();
    if (cVar1 != '\0') {
      param_1[0x1c] = param_1[0x1c] + 1;
      *(undefined2 *)((int)param_1 + 0x72) = 0;
      FUN_10aa6af0(3,param_1 + 0x18);
      uVar3 = FUN_11317f30();
      cVar1 = FUN_10db7340(param_1[0x18],param_1[0x1b] + param_1[0x1c],(char)param_1[0x1a],uVar3);
      if (cVar1 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}

