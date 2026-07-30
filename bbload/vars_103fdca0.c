
/* [RE-AUTO c0] */

void __thiscall FUN_103fdca0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined1 local_25;
  char local_24 [16];
  char *local_14;
  char *local_10;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&stack0xfffffffc;
  if ((int *)*param_2 != (int *)0x0) {
    iVar5 = (**(code **)(*(int *)*param_2 + 100))();
    iVar10 = 0;
    if (0 < iVar5) {
      do {
        piVar6 = (int *)(**(code **)(*(int *)*param_2 + 0x68))(iVar10);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        cVar4 = (**(code **)(*piVar6 + 0x10))(&DAT_113bef38);
        if (cVar4 == '\0') {
          (**(code **)(*piVar6 + 8))();
        }
        else {
          pcVar7 = (char *)(**(code **)(*piVar6 + 0x5c))(&DAT_113a4d50);
          local_14 = local_24;
          pcVar3 = pcVar7;
          do {
            pcVar9 = pcVar3;
            pcVar3 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          local_10 = local_14;
          FUN_1001ea30(pcVar7,pcVar9);
          iVar1 = *param_1;
          if ((local_10 != (char *)0x0) && (*local_10 != '\0')) {
            puVar8 = (undefined4 *)FUN_10a5d620(local_10);
            puVar2 = *(undefined4 **)(iVar1 + 0x54);
            if (puVar2 == *(undefined4 **)(iVar1 + 0x58)) {
              FUN_103cc230(puVar2,puVar8,&local_25,1,1);
            }
            else {
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar8;
              }
              *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 4;
            }
          }
          if ((local_10 != local_24) && (local_10 != (char *)0x0)) {
            FUN_10653dc0(local_10);
          }
          (**(code **)(*piVar6 + 8))();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
  }
  FUN_112bed8e();
  return;
}

