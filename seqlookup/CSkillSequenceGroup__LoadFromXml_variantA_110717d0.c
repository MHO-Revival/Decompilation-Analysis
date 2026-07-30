
/* WARNING: Removing unreachable block (ram,0x11071982) */
/* WARNING: Removing unreachable block (ram,0x11071993) */
/* WARNING: Removing unreachable block (ram,0x110719c2) */
/* WARNING: Removing unreachable block (ram,0x1107199a) */
/* WARNING: Removing unreachable block (ram,0x110719a0) */
/* WARNING: Removing unreachable block (ram,0x110719ac) */
/* WARNING: Removing unreachable block (ram,0x110719b3) */
/* WARNING: Removing unreachable block (ram,0x110719f1) */
/* [RE-R1]
   strings:
     ""SkillSequenceGroup""
     ""Sequence""
     ""Position""
     ""Rotation"" */

undefined1 CSkillSequenceGroup__LoadFromXml_variantA(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar4 = (int *)0x0;
  if ((int *)*param_2 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*(int *)*param_2 + 0xac))(&local_1c,"SkillSequenceGroup");
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    piVar4 = (int *)*piVar4;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))();
    }
    if ((piVar4 != (int *)0x0) &&
       (cVar1 = (**(code **)(*piVar4 + 0x28))("SkillSequenceGroup"), cVar1 != '\0')) {
      iVar2 = (**(code **)(*piVar4 + 0xa0))();
      local_18 = 0;
      if (0 < iVar2) {
        do {
          (**(code **)(*piVar4 + 0xa8))(&param_2,local_18);
          if (param_2 != (int *)0x0) {
            cVar1 = (**(code **)(*param_2 + 0x28))("Sequence");
            if ((cVar1 != '\0') &&
               (local_14 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300), local_14 != 0)) {
              local_10 = 0;
              (**(code **)(*param_2 + 0xac))(&local_8,"Position");
              if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
              (**(code **)(*param_2 + 0xac))(&local_c,"Rotation");
              if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
            }
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 4))();
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar2);
      }
      uVar3 = 1;
      goto LAB_11071a1b;
    }
  }
  uVar3 = 0;
LAB_11071a1b:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  return uVar3;
}

