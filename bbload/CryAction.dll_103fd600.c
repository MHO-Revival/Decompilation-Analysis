
/* [RE-AUTO c0]
   strings:
     ""BlackBoard""
     ""Parent""
     ""FileName""
     ""Parents""
     ""KeyVars"" */

void __thiscall FUN_103fd600(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int ***pppiVar6;
  char *pcVar7;
  char *pcVar8;
  int *unaff_ESI;
  int *unaff_EDI;
  int iVar9;
  char *pcVar10;
  int ***pppiStack_84;
  int *piStack_80;
  int *piStack_7c;
  int iStack_6c;
  int **local_68;
  undefined1 *local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int ***pppiStack_58;
  int ***pppiStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [8];
  undefined4 ***pppuStack_44;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  undefined1 *puStack_2c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&iStack_6c;
  piStack_7c = (int *)0x0;
  piStack_80 = param_2;
  pppiStack_84 = &local_68;
  local_64 = param_1;
  (**(code **)(**(int **)(DAT_116f75dc + 8) + 0xc))();
  if (unaff_ESI != (int *)0x0) {
    cVar1 = (**(code **)(*unaff_ESI + 0x10))("BlackBoard");
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(*unaff_ESI + 0x6c))("Parent");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        uVar3 = (**(code **)(*piVar2 + 0x5c))("FileName");
        unaff_ESI = *(int **)(*(int *)(param_1 + 4) + 0x14);
        pppiStack_58 = &local_68;
        pcVar10 = *(char **)(DAT_116f75dc + 0x18);
        piStack_80 = (int *)(pcVar10 + 1);
        pcVar7 = pcVar10;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pppiStack_54 = pppiStack_58;
        FUN_1001ea30(pcVar10,pcVar10 + ((int)pcVar7 - (int)piStack_80));
        uVar3 = FUN_10049550(auStack_40,&stack0xffffff90,piStack_7c,uVar3);
        FUN_10049550(&pppiStack_58,uVar3);
        if ((puStack_2c != auStack_40) && (puStack_2c != (undefined1 *)0x0)) {
          FUN_10653dc0(puStack_2c);
        }
        if ((puStack_5c != &stack0xffffff90) && (puStack_5c != (undefined1 *)0x0)) {
          FUN_10653dc0(puStack_5c);
        }
        FUN_103fd600(pppuStack_44,param_3);
        if ((puStack_38 != auStack_4c) && (puStack_38 != (undefined1 *)0x0)) {
          FUN_10653dc0(puStack_38);
        }
      }
      piVar4 = (int *)(**(code **)(*unaff_EDI + 0x6c))("Parents");
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      if (piVar4 != (int *)0x0) {
        iStack_6c = (**(code **)(*piVar4 + 100))();
        iVar9 = 0;
        if (0 < iStack_6c) {
          do {
            piVar2 = (int *)(**(code **)(*piVar4 + 0x68))(iVar9);
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 4))();
            }
            pcVar10 = "Parent";
            cVar1 = (**(code **)(*piVar2 + 0x10))("Parent");
            iVar5 = *piVar2;
            if (cVar1 != '\0') {
              (**(code **)(iVar5 + 0x5c))("FileName");
              piStack_7c = pppiStack_84[1][5];
              local_64 = &stack0xffffff8c;
              pcVar7 = *(char **)(DAT_116f75dc + 0x18);
              piStack_80 = (int *)(pcVar7 + 1);
              pcVar8 = pcVar7;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              puStack_60 = local_64;
              FUN_1001ea30(pcVar7,pcVar7 + ((int)pcVar8 - (int)piStack_80));
              uVar3 = FUN_10049550(auStack_4c,&piStack_7c,pppiStack_84,pcVar10);
              FUN_10049550(&local_64,uVar3);
              if ((puStack_38 != auStack_4c) && (puStack_38 != (undefined1 *)0x0)) {
                FUN_10653dc0(puStack_38);
              }
              if ((local_68 != &piStack_7c) && (local_68 != (int **)0x0)) {
                FUN_10653dc0(local_68);
              }
              FUN_103fd600(uStack_50,param_3);
              if (((int ****)pppuStack_44 != &pppiStack_58) &&
                 ((int ****)pppuStack_44 != (int ****)0x0)) {
                FUN_10653dc0(pppuStack_44);
              }
              iVar5 = *piVar2;
            }
            (**(code **)(iVar5 + 8))();
            iVar9 = iVar9 + 1;
          } while (iVar9 < iStack_6c);
        }
      }
      pppiVar6 = (int ***)(**(code **)(*piStack_7c + 0x6c))(&DAT_113bef3c);
      if (pppiVar6 != (int ***)0x0) {
        (*(code *)(*pppiVar6)[1])();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      pppiStack_84 = pppiVar6;
      if (pppiVar6 != (int ***)0x0) {
        FUN_103fd960(&pppiStack_84,param_3);
      }
      pppiVar6 = pppiStack_84;
      piVar2 = (int *)(**(code **)(*piStack_80 + 0x6c))("KeyVars");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      if (pppiVar6 != (int ***)0x0) {
        (*(code *)(*pppiVar6)[2])();
      }
      if (piVar2 != (int *)0x0) {
        if ((char)param_3 == '\0') {
          FUN_103fdca0(&stack0xffffff88);
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
        }
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))();
    }
  }
  piStack_7c = (int *)0x103fd954;
  FUN_112bed8e();
  return;
}

