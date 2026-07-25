// FUN_10018b90 @ 10018b90  (696 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 12, 16, 20, 24, 25, 26, 27, 28]


/* [RE-AUTO c0]
   strings:
     ""MNG features are not allowed in a PNG datastream""
     ""Writing zero-length unknown chunk"" */

void FUN_10018b90(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_8;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     ((*(uint *)(param_1 + 0x6c) & 0x400) == 0)) {
    FUN_1002c080(param_1);
    if (((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) && (*(int *)(param_1 + 600) != 0)) {
      FUN_10016240(param_1,"MNG features are not allowed in a PNG datastream");
      *(undefined4 *)(param_1 + 600) = 0;
    }
    FUN_1002c380(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 6),
                 *(undefined1 *)((int)param_2 + 0x19),*(undefined1 *)((int)param_2 + 0x1a),
                 *(undefined1 *)((int)param_2 + 0x1b),*(undefined1 *)(param_2 + 7));
    if ((param_2[2] & 1) != 0) {
      FUN_1002cbd0(param_1,param_2[10]);
    }
    if ((param_2[2] & 0x800) != 0) {
      FUN_1002cc00(param_1,*(undefined1 *)(param_2 + 0xb));
    }
    if ((param_2[2] & 0x1000) != 0) {
      FUN_1002cc40(param_1,param_2[0x31],0,param_2[0x32],param_2[0x33]);
    }
    if ((param_2[2] & 2) != 0) {
      FUN_1002da80(param_1,param_2 + 0x11,*(undefined1 *)((int)param_2 + 0x19));
    }
    if ((param_2[2] & 4) != 0) {
      FUN_1002dbf0(param_1,param_2[0x20],param_2[0x21],param_2[0x22],param_2[0x23],param_2[0x24],
                   param_2[0x25],param_2[0x26],param_2[0x27]);
    }
    if (param_2[0x30] != 0) {
      for (local_8 = param_2[0x2f]; local_8 < (uint)(param_2[0x30] * 0x14 + param_2[0x2f]);
          local_8 = local_8 + 0x14) {
        iVar1 = FUN_10012210(param_1,local_8);
        if ((((iVar1 != 1) && (*(char *)(local_8 + 0x10) != '\0')) &&
            (((*(byte *)(local_8 + 0x10) & 2) == 0 &&
             (((*(byte *)(local_8 + 0x10) & 4) == 0 && ((*(byte *)(local_8 + 0x10) & 8) == 0))))))
           && (((*(byte *)(local_8 + 3) & 0x20) != 0 ||
               ((iVar1 == 3 || ((*(uint *)(param_1 + 0x70) & 0x10000) != 0)))))) {
          if (*(int *)(local_8 + 0xc) == 0) {
            FUN_10016240(param_1,"Writing zero-length unknown chunk");
          }
          FUN_1002c2c0(param_1,local_8,*(undefined4 *)(local_8 + 8),*(undefined4 *)(local_8 + 0xc));
        }
      }
    }
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400;
  }
  return;
}

