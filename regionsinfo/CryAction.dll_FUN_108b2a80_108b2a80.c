
/* [RE-AUTO c0]
   calls: puts, exit
   strings:
     ""out of memory\n"" */

void __thiscall
FUN_108b2a80(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5,
            char param_6)

{
  code *pcVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = param_5;
  local_c = (undefined4 *)((param_1[1] - *param_1) / 0xc);
  local_8 = param_1;
  if ((undefined4 *)(0x15555555 - (int)local_c) < param_5) {
    FUN_108b2e50();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ppuVar3 = &local_c;
  if (local_c <= param_5) {
    ppuVar3 = &local_10;
  }
  puVar5 = (undefined4 *)((int)*ppuVar3 + (int)local_c);
  if (((undefined4 *)0x15555555 < puVar5) || (puVar5 < local_c)) {
    puVar5 = (undefined4 *)0x15555555;
  }
  if (puVar5 < (undefined4 *)0x15555556) {
    if (puVar5 == (undefined4 *)0x0) {
      local_c = (undefined4 *)0x0;
      uVar6 = 0;
    }
    else {
      local_c = (undefined4 *)FUN_10653d70((int)puVar5 * 0xc);
      if (local_c == (undefined4 *)0x0) goto LAB_108b2ae3;
      uVar6 = (uint)((int)puVar5 * 0xc) / 0xc;
    }
    puVar7 = (undefined4 *)*param_1;
    puVar5 = local_c;
    for (iVar4 = (param_2 - (int)puVar7) / 0xc; 0 < iVar4; iVar4 = iVar4 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
        puVar5[1] = puVar7[1];
        puVar5[2] = puVar7[2];
      }
      puVar7 = puVar7 + 3;
      puVar5 = puVar5 + 3;
    }
    if (param_5 == (undefined4 *)0x1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_3;
        puVar5[1] = param_3[1];
        puVar5[2] = param_3[2];
      }
      puVar5 = puVar5 + 3;
    }
    else {
      puVar5 = (undefined4 *)FUN_108acf20(puVar5,param_5,param_3);
    }
    piVar2 = local_8;
    if (param_6 == '\0') {
      param_5 = (undefined4 *)((uint)param_5 & 0xffffff00);
      puVar5 = (undefined4 *)FUN_108ad080(param_2,local_8[1],puVar5,param_5,&stack0x00000017);
    }
    if (*piVar2 != 0) {
      FUN_10653dc0(*piVar2);
    }
    piVar2[1] = (int)puVar5;
    *piVar2 = (int)local_c;
    piVar2[2] = (int)(local_c + uVar6 * 3);
    return;
  }
LAB_108b2ae3:
  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}

