
// ######## FUN_101c9110 @101c9110  (919 bytes)  [via ".AISetting.ClientBehaviorTree"] ########

/* [RE-AUTO c0]
   strings:
     ""BehaviorTree""
     ""PropertyCustom""
     "".AISetting.BehaviorTree""
     ""FileName""
     ""ClientBehaviorTree""
     "".AISetting.ClientBehaviorTree"" */

void __fastcall FUN_101c9110(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint3 unaff_EBX;
  int *piVar7;
  uint uVar8;
  int *unaff_ESI;
  int *piStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  int *piStack_48;
  int local_44;
  int local_40 [4];
  int *piStack_30;
  int *piStack_2c;
  undefined1 auStack_28 [20];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&piStack_5c;
  piVar7 = (int *)0x0;
  local_44 = 0;
  local_40[0] = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_116f75dc + 0x10) + 4))(*(undefined4 *)(param_1 + 300))
  ;
  if (piVar3 == (int *)0x0) goto LAB_101c9495;
  (**(code **)(*piVar3 + 0x14))(&piStack_50);
  piStack_5c = (int *)0x0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_101cbc50(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x24) = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  piVar3 = (int *)(uint)unaff_EBX;
  if (piStack_50 == (int *)0x0) {
LAB_101c9200:
    uStack_58 = (int *)((uint)uStack_58 & 0xffffff);
  }
  else {
    cVar2 = (**(code **)(*piStack_50 + 0x40))("BehaviorTree",&piStack_5c);
    if (cVar2 == '\0') {
      piStack_30 = local_40;
      piVar7 = (int *)0x7;
      piStack_48 = (int *)0x7;
      piStack_2c = piStack_30;
      FUN_1001ea30("PropertyCustom","");
      piVar5 = uStack_58;
      iVar4 = FUN_10049550(&piStack_30,&piStack_48,".AISetting.BehaviorTree");
      cVar2 = (**(code **)(*piVar5 + 0x30))(*(undefined4 *)(iVar4 + 0x14),&stack0xffffff9c);
      if (cVar2 == '\0') goto LAB_101c9200;
    }
    uStack_58 = (int *)CONCAT13(1,(undefined3)uStack_58);
  }
  if (((((uint)piVar7 & 4) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffb), piStack_48 = piVar7, puStack_14 != auStack_28))
     && (puStack_14 != (undefined1 *)0x0)) {
    FUN_10653dc0(puStack_14);
  }
  if (((((uint)piVar7 & 2) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffd), piStack_48 = piVar7, piStack_2c != local_40)) &&
     (piStack_2c != (int *)0x0)) {
    FUN_10653dc0(piStack_2c);
  }
  if (((uint)piVar7 & 1) != 0) {
    piStack_48 = (int *)((uint)piVar7 & 0xfffffffe);
  }
  uVar8 = 0;
  if (uStack_58._3_1_ != '\0') {
    piVar5 = (int *)(**(code **)(*piStack_5c + 0x44))();
    cVar2 = (**(code **)(*piStack_5c + 0x48))(piVar5);
    piVar7 = piStack_48;
    while (cVar2 != '\0') {
      uStack_58 = (int *)0x0;
      cVar2 = (**(code **)(*piVar5 + 4))(&uStack_58);
      piVar1 = piStack_5c;
      if (cVar2 != '\0') {
        (**(code **)(*piStack_5c + 0xc))();
        piStack_54 = (int *)0x0;
        (**(code **)(*piVar1 + 0x28))("FileName",&piStack_54);
        (**(code **)(*piVar7 + 4))(piStack_5c,1);
        (**(code **)(*piVar1 + 0x10))();
      }
      if (piStack_5c != (int *)0x0) {
        (**(code **)(*piStack_5c + 8))();
      }
      cVar2 = (**(code **)(*unaff_ESI + 0x48))(piVar5);
      uVar8 = uStack_4c;
    }
    (**(code **)(*piVar3 + 0x4c))(piVar5);
    param_1 = local_44;
  }
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x134))();
  if (cVar2 != '\0') {
    if (piStack_50 != (int *)0x0) {
      cVar2 = (**(code **)(*piStack_50 + 0x40))("ClientBehaviorTree",&piStack_5c);
      piVar7 = piStack_50;
      if (cVar2 == '\0') {
        uVar8 = uVar8 | 0x38;
        uVar6 = FUN_1001e6e0("PropertyCustom",&stack0xffffffa3,".AISetting.ClientBehaviorTree");
        iVar4 = FUN_10049550(&piStack_30,uVar6);
        cVar2 = (**(code **)(*piVar7 + 0x30))(*(undefined4 *)(iVar4 + 0x14),&stack0xffffff9c);
        if (cVar2 == '\0') goto LAB_101c9399;
      }
      piVar3 = (int *)CONCAT13(1,unaff_EBX);
    }
LAB_101c9399:
    if ((((uVar8 & 0x20) != 0) && (uVar8 = uVar8 & 0xffffffdf, puStack_14 != auStack_28)) &&
       (puStack_14 != (undefined1 *)0x0)) {
      FUN_10653dc0(puStack_14);
    }
    if ((((uVar8 & 0x10) != 0) && (piStack_2c != local_40)) && (piStack_2c != (int *)0x0)) {
      FUN_10653dc0(piStack_2c);
    }
    if ((char)((uint)piVar3 >> 0x18) != '\0') {
      piVar7 = (int *)(**(code **)(*piStack_5c + 0x44))();
      cVar2 = (**(code **)(*piStack_5c + 0x48))(piVar7);
      while (cVar2 != '\0') {
        uStack_58 = (int *)0x0;
        cVar2 = (**(code **)(*piVar7 + 4))(&uStack_58);
        piVar5 = piStack_5c;
        if (cVar2 != '\0') {
          (**(code **)(*piStack_5c + 0xc))();
          piStack_54 = (int *)0x0;
          (**(code **)(*piVar5 + 0x28))("FileName",&piStack_54);
          (**(code **)(*piStack_54 + 4))(piStack_5c,1);
          (**(code **)(*piVar5 + 0x10))();
        }
        if (piStack_5c != (int *)0x0) {
          (**(code **)(*piStack_5c + 8))();
        }
        cVar2 = (**(code **)(*unaff_ESI + 0x48))(piVar7);
      }
      (**(code **)(*piVar3 + 0x4c))(piVar7);
    }
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
  }
LAB_101c9495:
  FUN_112bed8e();
  return;
}

