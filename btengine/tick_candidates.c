
//#### 104a69f0 ####

/* [RE-R1]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

uint __fastcall CBehaviorTreeContext__BuildRuntimeNodeMaps(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint in_EAX;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  int iStack_20;
  int local_1c;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = *(uint *)(param_1 + 0x200);
    if (((in_EAX != *(uint *)(param_1 + 0x1fc)) &&
        (uVar2 = *(uint *)(DAT_123bb90c + 0x28), in_EAX = FUN_1048a120(param_1 + 0x1ec),
        in_EAX != uVar2)) && (iVar8 = *(int *)(in_EAX + 0x28), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar8 + 0x80);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 300);
      local_8 = iVar8;
      FUN_1046f170(iVar8 + 0x84);
      FUN_104a2a90();
      iVar10 = *(int *)(iVar8 + 0x10);
      while (local_10 = iVar10, iVar10 != iVar8 + 8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        uVar9 = extraout_ECX;
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          iVar10 = local_1c;
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
          FUN_11316810(*(int *)(local_8 + 0x60) + 0x10);
          FUN_113168d0(*(undefined4 *)(iVar10 + 0x9c),&local_c);
          iVar6 = FUN_113182e0();
          uVar9 = extraout_ECX_00;
          if (iVar6 == 0) {
            *(ulonglong *)(param_1 + 0x118) = CONCAT44(iStack_20,local_24);
            *(int *)(param_1 + 0x120) = iVar10;
          }
        }
        FUN_104a7460(local_18,uVar9);
        iVar10 = local_10;
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b990(*(undefined4 *)(param_1 + 0x34));
        *(int *)(param_1 + 0x38) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x3c) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      iVar8 = local_8 + 0x20;
      iVar10 = *(int *)(local_8 + 0x28);
      while (iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar6 = *(int *)(iVar10 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar10 = iVar6;
              iVar6 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar6) {
            iVar10 = iVar6;
          }
        }
        else {
          for (iVar7 = *(int *)(iVar6 + 8); iVar10 = iVar6, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8))
          {
            iVar6 = iVar7;
          }
        }
      }
      iVar8 = local_8 + 0x44;
      iVar10 = *(int *)(local_8 + 0x4c);
      iVar6 = local_8;
      while (local_8 = iVar6, iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a86b0(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar7 = *(int *)(iVar10 + 0xc);
        iVar6 = local_8;
        if (iVar7 == 0) {
          iVar7 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar10 = iVar7;
              iVar7 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar7) {
            iVar10 = iVar7;
          }
        }
        else {
          for (iVar4 = *(int *)(iVar7 + 8); iVar10 = iVar7, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8))
          {
            iVar7 = iVar4;
          }
        }
      }
      local_24 = 0;
      iStack_20 = 0;
      local_1c = 0;
      FUN_1025a680(*(undefined4 *)(iVar6 + 0x7c),&local_24);
      iVar8 = 0;
      local_10 = 0;
      if (0 < *(int *)(iVar6 + 0x7c)) {
        local_c = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar6 + 0x38) + local_10 * 4);
          if (piVar3 != (int *)0x0) {
            piVar3[1] = piVar3[1] + 1;
            iVar8 = *(int *)(param_1 + 0x10c);
            puVar5 = (undefined8 *)FUN_104a6d40(&local_24,piVar3);
            *(undefined8 *)(iVar8 + local_c) = *puVar5;
            *(undefined4 *)(iVar8 + 8 + local_c) = *(undefined4 *)(puVar5 + 1);
            piVar1 = piVar3 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
            else if (piVar3[1] < 0) {
              _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",
                       0x18c);
            }
          }
          local_c = local_c + 0xc;
          iVar8 = local_10 + 1;
          iVar6 = local_8;
          local_10 = iVar8;
        } while (iVar8 < *(int *)(local_8 + 0x7c));
      }
      *(undefined1 *)(param_1 + 0x171) = 1;
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

