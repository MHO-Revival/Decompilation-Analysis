// FUN_112d5f70 @ 112d5f70  (389 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 4, 12, 13, 16, 18, 20, 22, 24, 26, 27, 28]


/* [RE-AUTO c0]
   calls: strncpy_s */

void __thiscall FUN_112d5f70(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_2 + 0x18) == 1) {
    FUN_1112d7f0(0x210c);
    FUN_11a89daa();
    return;
  }
  *(undefined1 *)(param_2 + 0x1c) = 1;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  iVar1 = FUN_11564130(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_115641d0(param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
      if ((((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x78), iVar1 == 0)) ||
          (iVar1 = *(int *)(iVar1 + 0x24), iVar1 == 0)) || (*(char *)(iVar1 + 0x31) == '\0')) {
        iVar1 = FUN_115642b0(param_2,&local_18);
        if (iVar1 == 0) {
          **(undefined2 **)(param_1 + 0x14) = 0x3701;
          iVar1 = *(int *)(param_1 + 0x14);
          uVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1b4))(*(undefined4 *)(param_2 + 4));
          FUN_11550f40(uVar2);
          uVar2 = FUN_11551070();
          *(undefined4 *)(iVar1 + 0x10) = uVar2;
          *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 8);
          *(bool *)(iVar1 + 0x1c) = *(char *)(param_2 + 0xc) != '\0';
          *(bool *)(iVar1 + 0x1d) = *(char *)(param_2 + 0xd) != '\0';
          *(undefined4 *)(iVar1 + 0x1e) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(iVar1 + 0x22) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(iVar1 + 0x26) = *(undefined4 *)(param_2 + 0x18);
          *(undefined1 *)(iVar1 + 0x2a) = 1;
          *(undefined4 *)(iVar1 + 0x2b) = *param_3;
          *(undefined4 *)(iVar1 + 0x2f) = param_3[2];
          *(undefined4 *)(iVar1 + 0x33) = param_3[3];
          strncpy_s((char *)(iVar1 + 0x37),0x20,(char *)(param_3 + 4),0x20);
          strncpy_s((char *)(iVar1 + 0x57),0x100,(char *)(param_3 + 0xc),0x100);
          FUN_111cfaf0((undefined4 *)(iVar1 + 0x10));
          goto LAB_112d6015;
        }
      }
      else {
        iVar1 = 0x1d552;
      }
    }
  }
  FUN_112d83f0(iVar1,*(undefined4 *)(param_2 + 4),0);
LAB_112d6015:
  FUN_11a89daa();
  return;
}

