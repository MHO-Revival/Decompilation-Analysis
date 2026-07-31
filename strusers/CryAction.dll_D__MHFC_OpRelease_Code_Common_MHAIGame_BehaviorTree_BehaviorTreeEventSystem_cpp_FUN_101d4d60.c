
/* [RE-AUTO c0]
   src: BehaviorTreeEventSystem.cpp
   calls: _wassert, puts, exit
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp""
     "u"m_listEventSlotTag.empty()""
     "u"temp.IsValid()""
     ""out of memory\n"" */

void __fastcall FUN_101d4d60(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined ***pppuStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined ***pppuStack_64;
  undefined4 uStack_60;
  int iStack_44;
  int *local_40;
  int iStack_3c;
  undefined **ppuStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  undefined *apuStack_20 [7];
  
  local_40 = param_1;
  (**(code **)(*param_1 + 0x10))();
  piVar1 = param_1 + 1;
  if ((int *)*piVar1 != piVar1) {
    uStack_60 = 0x101d4d90;
    _wassert(L"m_listEventSlotTag.empty()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
             ,0x31);
  }
  if (*(int *)(param_1[3] + 0x2c) != 0) {
    iVar4 = 0x89a;
    do {
      pppuStack_64 = &ppuStack_38;
      uStack_60 = 0xffffffff;
      uStack_68 = 0xffffffff;
      pppuStack_74 = &ppuStack_2c;
      puStack_6c = (undefined1 *)0xffffffff;
      ppuStack_38 = &PTR_FUN_113ad030;
      puStack_34 = &LAB_101d5382;
      piStack_78 = (int *)0x101d4def;
      puStack_70 = (undefined1 *)iVar4;
      piStack_30 = param_1;
      (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))();
      ppuStack_38 = &PTR_FUN_113aaf80;
      if (piStack_24 == (int *)0x0) {
        uStack_60 = 0x101d4e10;
        _wassert(L"temp.IsValid()",
                 L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
                 ,0x3e);
        if (piStack_24 != (int *)0x0) goto LAB_101d4e1a;
      }
      else {
LAB_101d4e1a:
        uStack_60 = 0x101d4e30;
        FUN_101d29e0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x956);
    pppuStack_64 = &ppuStack_2c;
    uStack_60 = 0xffffffff;
    uStack_68 = 0xffffffff;
    iVar4 = 0;
    pppuStack_74 = (undefined ***)apuStack_20;
    puStack_6c = (undefined1 *)0xffffffff;
    puStack_70 = (undefined1 *)0x67;
    ppuStack_2c = &PTR_FUN_113ad030;
    puStack_28 = &LAB_101d5387;
    piStack_78 = (int *)0x101d4e88;
    piStack_24 = param_1;
    (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))();
    if (iStack_3c != 0) {
      piStack_78 = &iStack_44;
      puStack_80 = &uStack_60;
      uStack_84 = 0x101d4ea5;
      piStack_7c = piVar1;
      FUN_101d29e0();
    }
    puStack_80 = (undefined4 *)0x1;
    uStack_84 = 0xffffffff;
    piStack_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))
              (&ppuStack_38,0x66,0xffffffff,0xffffffff);
    if (iVar4 != 0) {
      FUN_101d29e0(&uStack_84,piVar1,&stack0xffffffa4);
    }
    iVar4 = 0x516;
    do {
      pppuStack_74 = (undefined ***)&PTR_FUN_113ad030;
      puStack_70 = &LAB_101d538c;
      puStack_6c = &stack0xffffffb0;
      (**(code **)(**(int **)(*(int *)(iStack_44 + 0x2c) + 0x98) + 0x1c))
                (&puStack_80,iVar4,0xffffffff,0xffffffff,&pppuStack_74,0xffffffff,1,0,0);
      pppuStack_74 = (undefined ***)&PTR_FUN_113aaf80;
      if (piStack_78 == (int *)0x0) {
        _wassert(L"temp.IsValid()",
                 L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
                 ,0x55);
        if (piStack_78 != (int *)0x0) goto LAB_101d4f8b;
      }
      else {
LAB_101d4f8b:
        piVar3 = (int *)FUN_10653d70(0x14);
        if (piVar3 == (int *)0x0) {
          puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        if (piVar3 + 2 != (int *)0x0) {
          piVar3[2] = (int)puStack_80;
          piVar3[3] = (int)piStack_7c;
          piVar3[4] = (int)piStack_78;
        }
        puVar2 = (undefined4 *)param_1[2];
        *piVar3 = (int)piVar1;
        piVar3[1] = (int)puVar2;
        *puVar2 = piVar3;
        param_1[2] = (int)piVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x52f);
  }
  return;
}

