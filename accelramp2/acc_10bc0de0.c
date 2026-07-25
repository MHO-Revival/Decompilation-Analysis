// PlayerInput::BindActionHandlers @ 10bc0de0
// ramp offsets referenced: [468, 472, 548, 552]


/* [RE-R1]
   strings:
     ""moveleft""
     ""moveright""
     ""moveforward""
     ""moveback""
     ""crouch""
     ""prone""
     ""togglestance""
     ""sprint""
     ""special""
     ""leanleft"" */

int * __fastcall PlayerInput__BindActionHandlers(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveleft");
  piVar2 = (int *)*param_1;
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    *param_1 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveright");
  piVar2 = (int *)param_1[1];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveforward");
  piVar2 = (int *)param_1[2];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[2] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("moveback");
  piVar2 = (int *)param_1[3];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[3] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11ccda2c);
  piVar2 = (int *)param_1[4];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[4] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("crouch");
  piVar2 = (int *)param_1[5];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[5] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("prone");
  piVar2 = (int *)param_1[6];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[6] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("togglestance");
  piVar2 = (int *)param_1[7];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[7] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("sprint");
  piVar2 = (int *)param_1[8];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[8] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11dce988);
  piVar2 = (int *)param_1[9];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[9] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("special");
  piVar2 = (int *)param_1[10];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[10] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("leanleft");
  piVar2 = (int *)param_1[0xb];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xb] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("leanright");
  piVar2 = (int *)param_1[0xc];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xc] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotateyaw");
  piVar2 = (int *)param_1[0xd];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xd] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotatepitch");
  piVar2 = (int *)param_1[0xe];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xe] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("rotatepitchfp");
  piVar2 = (int *)param_1[0xf];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0xf] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("nextspawnpoint");
  piVar2 = (int *)param_1[0x10];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x10] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("flymode");
  piVar2 = (int *)param_1[0x11];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x11] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("godmode");
  piVar2 = (int *)param_1[0x12];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x12] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("toggleaidebugdraw");
  piVar2 = (int *)param_1[0x13];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x13] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("togglepdrawhelpers");
  piVar2 = (int *)param_1[0x14];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x14] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("toggle_airstrike");
  piVar2 = (int *)param_1[0x15];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x15] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("ulammo");
  piVar2 = (int *)param_1[0x16];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x16] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("giveitems");
  piVar2 = (int *)param_1[0x17];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x17] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("view_param_up");
  piVar2 = (int *)param_1[0x18];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x18] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("view_param_down");
  piVar2 = (int *)param_1[0x19];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x19] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("attack1");
  piVar2 = (int *)param_1[0x1a];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1a] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("attack2");
  piVar2 = (int *)param_1[0x1b];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1b] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11ccdb2c);
  piVar2 = (int *)param_1[0x1c];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1c] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("modify");
  piVar2 = (int *)param_1[0x1d];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1d] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("additem");
  piVar2 = (int *)param_1[0x1e];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1e] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("nextitem");
  piVar2 = (int *)param_1[0x1f];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x1f] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("previtem");
  piVar2 = (int *)param_1[0x20];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x20] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("small");
  piVar2 = (int *)param_1[0x21];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x21] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("medium");
  piVar2 = (int *)param_1[0x22];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x22] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11cbea6c);
  piVar2 = (int *)param_1[0x23];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x23] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("explosive");
  piVar2 = (int *)param_1[0x24];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x24] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("handgrenade");
  piVar2 = (int *)param_1[0x25];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x25] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("xi_handgrenade");
  piVar2 = (int *)param_1[0x26];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x26] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("holsteritem");
  piVar2 = (int *)param_1[0x27];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x27] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("utility");
  piVar2 = (int *)param_1[0x28];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x28] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("debug");
  piVar2 = (int *)param_1[0x29];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x29] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))(&DAT_11cc90a4);
  piVar2 = (int *)param_1[0x2a];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2a] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("firemode");
  piVar2 = (int *)param_1[0x2b];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2b] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("binoculars");
  piVar2 = (int *)param_1[0x2c];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2c] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("objectives");
  piVar2 = (int *)param_1[0x2d];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2d] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("grenade");
  piVar2 = (int *)param_1[0x2e];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2e] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("xi_grenade");
  piVar2 = (int *)param_1[0x2f];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x2f] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("speedmode");
  piVar2 = (int *)param_1[0x30];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x30] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("strengthmode");
  piVar2 = (int *)param_1[0x31];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x31] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x70) + 4))("defensemode");
  piVar2 = (int *)param_1[0x32];
  piVar1 = piVar3 + 3;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      piVar2[-3] = piVar2[-3] + -1;
      if (piVar2[-3] < 1) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(piVar2 + -3);
      }
    }
    param_1[0x32] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_1083aa20("melee1key");
  FUN_1083aa20("melee2key");
  FUN_1083aa20(&DAT_11ccdbec);
  FUN_1083aa20(&DAT_11ccdbf4);
  FUN_1083aa20("dodge");
  FUN_1083aa20("jumpEvade");
  FUN_1083aa20("defense");
  FUN_1083aa20("holster");
  FUN_1083aa20("catHandcart");
  FUN_1083aa20("reload");
  FUN_1083aa20("MhItem_1");
  FUN_1083aa20("MhItem_2");
  FUN_1083aa20("MhItem_3");
  FUN_1083aa20("MhItem_4");
  FUN_1083aa20("MhItem_5");
  FUN_1083aa20("MhItem_6");
  FUN_1083aa20("MhItem_7");
  FUN_1083aa20("MhItem_8");
  FUN_1083aa20("MhItem_9");
  FUN_1083aa20("MhItem_0");
  FUN_1083aa20("MSkill_1");
  FUN_1083aa20("MSkill_2");
  FUN_1083aa20("MSkill_3");
  FUN_1083aa20("MSkill_4");
  FUN_1083aa20("MSkill_5");
  FUN_1083aa20("MSkill_6");
  FUN_1083aa20("MSkill_7");
  FUN_1083aa20("QuickItemPage_1");
  FUN_1083aa20("QuickItemPage_2");
  FUN_1083aa20("QuickItemPage_3");
  FUN_1083aa20("GP_moveleft_Focus");
  FUN_1083aa20("GP_moveright_Focus");
  FUN_1083aa20("GP_moveup_Focus");
  FUN_1083aa20("GP_movedown_Focus");
  FUN_1083aa20("GP_moveleft_Quick");
  FUN_1083aa20("GP_moveright_Quick");
  FUN_1083aa20("GP_moveup_Quick");
  FUN_1083aa20("GP_movedown_Quick");
  FUN_1083aa20("GP_moveleft_Bullet");
  FUN_1083aa20("GP_moveright_Bullet");
  FUN_1083aa20("GP_moveup_Bullet");
  FUN_1083aa20("GP_movedown_Bullet");
  FUN_1083aa20("GP_moveleft");
  FUN_1083aa20("GP_moveright");
  FUN_1083aa20("GP_moveup");
  FUN_1083aa20("GP_movedown");
  FUN_1083aa20(&DAT_11ccddb4);
  FUN_1083aa20("GP_useitem");
  FUN_1083aa20("GP_useitem1");
  FUN_1083aa20(&DAT_11ccddd4);
  FUN_1083aa20(&DAT_11ccdddc);
  FUN_1083aa20(&DAT_11ccdde4);
  FUN_1083aa20("ui_unGamePad_back");
  FUN_1083aa20("ui_unGamePad_start");
  FUN_1083aa20("GP_lb");
  FUN_1083aa20("GP_lt");
  FUN_1083aa20("GP_rb");
  FUN_1083aa20("GP_rt");
  FUN_1083aa20("GP_open");
  FUN_1083aa20("GP_close");
  FUN_1083aa20("interact");
  FUN_1083aa20("bulletf1");
  FUN_1083aa20("bulletf2");
  FUN_1083aa20("bulletf3");
  FUN_1083aa20("bulletf4");
  FUN_1083aa20("bulletf5");
  FUN_1083aa20("zoom_in");
  FUN_1083aa20("zoom_out");
  FUN_1083aa20("invert_mouse");
  FUN_1083aa20("thirdperson");
  FUN_1083aa20(&DAT_11ccde6c);
  FUN_1083aa20("xi_use");
  FUN_1083aa20("focus");
  FUN_1083aa20(&DAT_11ccde78);
  FUN_1083aa20("gyroscope");
  FUN_1083aa20("gboots");
  FUN_1083aa20("lights");
  FUN_1083aa20("radio_group_0");
  FUN_1083aa20("radio_group_1");
  FUN_1083aa20("radio_group_2");
  FUN_1083aa20("radio_group_3");
  FUN_1083aa20("radio_group_4");
  FUN_1083aa20("voice_chat_talk");
  FUN_1083aa20(&DAT_11ccdefc);
  FUN_1083aa20(&DAT_11ccdf04);
  FUN_1083aa20("ai_goto");
  FUN_1083aa20("ai_follow");
  FUN_1083aa20("xi_zoom");
  FUN_1083aa20("xi_binoculars");
  FUN_1083aa20("xi_movex");
  FUN_1083aa20("xi_movey");
  FUN_1083aa20("xi_left_aim_movex");
  FUN_1083aa20("xi_left_aim_movey");
  FUN_1083aa20("xi_right_aim_movex");
  FUN_1083aa20("xi_right_aim_movey");
  FUN_1083aa20("xi_rotatepitch");
  FUN_1083aa20("xi_rotateyaw");
  FUN_1083aa20("xi_rotatepitch_up");
  FUN_1083aa20("xi_rotatepitch_down");
  FUN_1083aa20("xi_rotateyaw_left");
  FUN_1083aa20("xi_rotateyaw_right");
  FUN_1083aa20("xi_gun_aim_rotatepitch_up");
  FUN_1083aa20("xi_gun_aim_rotatepitch_down");
  FUN_1083aa20("xi_gun_aim_rotateyaw_left");
  FUN_1083aa20("xi_gun_aim_rotateyaw_right");
  FUN_1083aa20("xi_camera_reset");
  FUN_1083aa20("xi_boss_camera_reset");
  FUN_1083aa20("xi_switch_lb");
  FUN_1083aa20("xi_switch_rb");
  FUN_1083aa20("xi_switch_l3");
  FUN_1083aa20("xi_switch_r3");
  FUN_1083aa20("xi_v_rotatepitch");
  FUN_1083aa20("xi_v_rotateyaw");
  FUN_1083aa20("xi_disconnect");
  FUN_1083aa20("v_changeseat1");
  FUN_1083aa20("v_changeseat2");
  FUN_1083aa20("v_changeseat3");
  FUN_1083aa20("v_changeseat4");
  FUN_1083aa20("v_changeseat5");
  FUN_1083aa20("v_changebullet1");
  FUN_1083aa20("v_changebullet2");
  FUN_1083aa20("v_changefiremode");
  FUN_1083aa20("v_changeview");
  FUN_1083aa20("v_viewoption");
  FUN_1083aa20("v_zoom_in");
  FUN_1083aa20("v_zoom_out");
  FUN_1083aa20("v_attack1");
  FUN_1083aa20("v_attack2");
  FUN_1083aa20("v_firemode");
  FUN_1083aa20("v_lights");
  FUN_1083aa20("v_horn");
  FUN_1083aa20("v_exit");
  FUN_1083aa20("v_rotateyaw");
  FUN_1083aa20("v_rotatepitch");
  FUN_1083aa20("v_moveforward");
  FUN_1083aa20("v_moveback");
  FUN_1083aa20("v_moveup");
  FUN_1083aa20("v_movedown");
  FUN_1083aa20("v_rotatedir");
  FUN_1083aa20("v_turnleft");
  FUN_1083aa20("v_turnright");
  FUN_1083aa20("v_strafeleft");
  FUN_1083aa20("v_straferight");
  FUN_1083aa20("v_rollleft");
  FUN_1083aa20("v_rollright");
  FUN_1083aa20("v_pitchup");
  FUN_1083aa20("v_pitchdown");
  FUN_1083aa20("v_brake");
  FUN_1083aa20("v_afterburner");
  FUN_1083aa20("v_boost");
  FUN_1083aa20("v_changeseat");
  FUN_1083aa20("v_debug_1");
  FUN_1083aa20("v_debug_2");
  FUN_1083aa20("buyammo");
  FUN_1083aa20("loadLastSave");
  FUN_1083aa20("debug_ag_step");
  FUN_1083aa20("toggle_debugtimer");
  FUN_1083aa20("speedup_timer");
  FUN_1083aa20("slowdown_timer");
  FUN_1083aa20("toggle_game_freeze");
  FUN_1083aa20("toggle_bt_debugger");
  FUN_1083aa20("toggle_camera_pitch_style");
  FUN_1083aa20("first_atk_adjust_dir");
  FUN_1083aa20("other_atk_adjust_dir");
  FUN_1083aa20("stop_rec");
  FUN_1083aa20("stop_rep");
  FUN_1083aa20("start_auto_record");
  FUN_1083aa20("end_auto_record");
  FUN_1083aa20("start_auto_test");
  FUN_1083aa20("end_auto_test");
  FUN_1083aa20("movement_error_notify");
  FUN_1083aa20("debug_mouse_z");
  FUN_1083aa20("flymode_movedown");
  FUN_1083aa20("flymode_moveup");
  FUN_1083aa20("rotate_speeddown");
  FUN_1083aa20("rotate_speedup");
  FUN_1083aa20("toggle_camera_smooth_mode");
  FUN_1083aa20("toggle_spectator_mode");
  FUN_1083aa20("switch_spectator_target");
  FUN_1083aa20("g_DoTestLua");
  FUN_1083aa20("scores");
  FUN_1083aa20("ui_f8");
  FUN_1083aa20("ui_f9");
  FUN_1083aa20("ui_toggle_pause");
  FUN_1083aa20("ui_start_pause");
  FUN_1083aa20("ui_space");
  FUN_1083aa20("ui_up");
  FUN_1083aa20("ui_down");
  FUN_1083aa20("ui_left");
  FUN_1083aa20("ui_right");
  FUN_1083aa20("ui_mouse1_click");
  FUN_1083aa20("ui_mouse2_click");
  FUN_1083aa20("ui_esc_click");
  FUN_1083aa20("ui_back");
  FUN_1083aa20("ui_mode");
  FUN_1083aa20("ui_confirm");
  FUN_1083aa20("ui_reset");
  FUN_1083aa20("ui_skip_video");
  FUN_1083aa20("ui_taskuishortcut");
  FUN_1083aa20("ui_inventoryuishortcut");
  FUN_1083aa20("ui_switchTeam");
  FUN_1083aa20("ui_equipSkill");
  FUN_1083aa20("ui_enter");
  FUN_1083aa20("ui_npEnterChat");
  FUN_1083aa20("ui_playerproperty");
  FUN_1083aa20("ui_storehouse");
  FUN_1083aa20("ui_manufacture");
  FUN_1083aa20("ui_social");
  FUN_1083aa20("ui_guild");
  FUN_1083aa20("ui_mailbox");
  FUN_1083aa20("ui_Skillvideo");
  FUN_1083aa20("ui_hunterRoad");
  FUN_1083aa20("ui_petlist");
  FUN_1083aa20("ui_OpenChating");
  FUN_1083aa20("ui_OpenChating2");
  FUN_1083aa20("ui_CopyChat");
  FUN_1083aa20("ui_PasteChat");
  FUN_1083aa20("ui_SelectChat");
  FUN_1083aa20("ui_ChatQuickBack");
  FUN_1083aa20("ui_HunterBook");
  FUN_1083aa20("ui_RaidHud");
  FUN_1083aa20("ui_FarmMain");
  FUN_1083aa20("ui_FarmSeed");
  FUN_1083aa20("ui_RankingList");
  FUN_1083aa20("ui_WeaponTalent");
  FUN_1083aa20("ui_HunterStarBackSpace");
  FUN_1083aa20("ui_PvpScoreList");
  FUN_1083aa20("ui_Mart");
  FUN_1083aa20("ui_clan");
  FUN_1083aa20("ui_giftpack");
  FUN_1083aa20("ui_systemconfig");
  FUN_1083aa20("ui_callQuickSpeak");
  FUN_1083aa20("ui_callQuickSpeakConfig");
  FUN_1083aa20("ui_PrivateChat");
  FUN_1083aa20("ui_WorldMap");
  FUN_1083aa20("ui_Illustrate");
  FUN_1083aa20("ui_SoulStone");
  FUN_1083aa20("ui_Wardrobe");
  FUN_1083aa20("testup");
  FUN_1083aa20("testdown");
  FUN_1083aa20("testleft");
  FUN_1083aa20("testright");
  FUN_1083aa20("close_look");
  FUN_1083aa20("playerlmouseclick");
  FUN_1083aa20("TaskUIShortCut");
  FUN_1083aa20("rage_1");
  FUN_1083aa20("rage_2");
  FUN_1083aa20("rage_3");
  FUN_1083aa20("GiantSwordExplode");
  FUN_1083aa20("screenshot");
  FUN_1083aa20("iterate_next_item");
  FUN_1083aa20("iterate_prev_item");
  FUN_1083aa20("iterate_next_item_alt");
  FUN_1083aa20("iterate_prev_item_alt");
  FUN_1083aa20("iterate_next_item_ctrl");
  FUN_1083aa20("iterate_prev_item_ctrl");
  FUN_1083aa20("iterate_next_item_shift");
  FUN_1083aa20("iterate_prev_item_shift");
  FUN_1083aa20("show_debugUI");
  FUN_1083aa20("show_qt");
  FUN_1083aa20("enter_team");
  FUN_1083aa20("switchflyingcamera");
  FUN_1083aa20("toggleflyingcamera");
  FUN_1083aa20("TeamViewPlayer");
  FUN_1083aa20("TeamViewPet");
  FUN_1083aa20("handle_adaptation");
  FUN_1083aa20("enable_video_cam_mode");
  FUN_1083aa20("toggle_video_cam");
  FUN_1083aa20("videocam_up");
  FUN_1083aa20("videocam_down");
  FUN_1083aa20("videocam_left");
  FUN_1083aa20("videocam_right");
  FUN_1083aa20("enable_circle_cam_mode");
  FUN_1083aa20("videocam_speedup");
  FUN_1083aa20("videocam_speeddown");
  FUN_1083aa20("toogle_caminfo");
  FUN_1083aa20("videocam_distance_add");
  FUN_1083aa20("videocam_distance_dec");
  FUN_1083aa20("videocam_accelerate_add");
  FUN_1083aa20("videocam_accelerate_dec");
  FUN_1083aa20("savefacial");
  FUN_1083aa20("deletefacial");
  FUN_1083aa20("prefacial");
  FUN_1083aa20("nextfacial");
  FUN_1083aa20("savefacialibrary");
  FUN_1083aa20("copycurfacial");
  FUN_1083aa20("pastecurfacial");
  FUN_1083aa20("spectator_followmode");
  FUN_1083aa20("spectator_freemode");
  FUN_1083aa20("spectator_overlookmode");
  FUN_1083aa20("yk_recordctrl");
  FUN_1083aa20("yk_upload");
  return param_1;
}

