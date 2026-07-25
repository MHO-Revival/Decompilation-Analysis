// FUN_10024140 @ 10024140  (331 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 7, 12, 16, 20, 24, 25, 26, 27, 28]


/* [RE-AUTO c0] */

void __thiscall
FUN_10024140(undefined4 param_1,int param_2,uint *param_3,uint param_4,uint param_5,
            undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9,
            undefined1 param_10)

{
  if ((param_2 != 0) && (param_3 != (uint *)0x0)) {
    *param_3 = param_4;
    param_3[1] = param_5;
    *(undefined1 *)(param_3 + 6) = param_6;
    *(undefined1 *)((int)param_3 + 0x19) = param_7;
    *(undefined1 *)((int)param_3 + 0x1a) = param_9;
    *(undefined1 *)((int)param_3 + 0x1b) = param_10;
    *(undefined1 *)(param_3 + 7) = param_8;
    FUN_10012ae0(param_2,*param_3,param_3[1],(char)param_3[6],*(undefined1 *)((int)param_3 + 0x19),
                 (char)param_3[7],*(undefined1 *)((int)param_3 + 0x1a),
                 *(undefined1 *)((int)param_3 + 0x1b),param_1);
    if (*(char *)((int)param_3 + 0x19) == '\x03') {
      *(undefined1 *)((int)param_3 + 0x1d) = 1;
    }
    else if ((*(byte *)((int)param_3 + 0x19) & 2) == 0) {
      *(undefined1 *)((int)param_3 + 0x1d) = 1;
    }
    else {
      *(undefined1 *)((int)param_3 + 0x1d) = 3;
    }
    if ((*(byte *)((int)param_3 + 0x19) & 4) != 0) {
      *(char *)((int)param_3 + 0x1d) = *(char *)((int)param_3 + 0x1d) + '\x01';
    }
    *(char *)((int)param_3 + 0x1e) = *(char *)((int)param_3 + 0x1d) * (char)param_3[6];
    if (param_4 < 0x1fffff8f) {
      if (*(byte *)((int)param_3 + 0x1e) < 8) {
        param_4 = *(byte *)((int)param_3 + 0x1e) * param_4 + 7 >> 3;
      }
      else {
        param_4 = (*(byte *)((int)param_3 + 0x1e) >> 3) * param_4;
      }
      param_3[3] = param_4;
    }
    else {
      param_3[3] = 0;
    }
  }
  return;
}

