// CVehicleClient::RegisterActionMaps @ 110baa60  (5569 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 5, 7, 12, 13, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 27, 28]


/* [RE-R1]
   strings:
     ""v_exit""
     ""v_changeseat""
     ""v_changeseat1""
     ""v_changeseat2""
     ""v_changeseat3""
     ""v_changeseat4""
     ""v_changeseat5""
     ""v_changeview""
     ""v_viewoption""
     ""v_zoom_in"" */

undefined4 __fastcall CVehicleClient__RegisterActionMaps(int param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10db3db0(*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0xc) = param_1 + 4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x10) = param_1 + 4;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_1083aa90("v_exit");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 1;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 2;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 3;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 4;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat3");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 5;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat4");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 6;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeseat5");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 7;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changeview");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1b;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_viewoption");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1c;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_zoom_in");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x22;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_zoom_out");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x23;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_attack1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_attack2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_zoom");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_attack1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_attack2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("firemode");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1d;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_lights");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x20;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_horn");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x21;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotateyaw");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 9;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotatepitch");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 8;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90(&DAT_11cfa8fc);
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x31;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rage2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x32;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveforward");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xd;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveback");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xe;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_moveup");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x19;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_movedown");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x1a;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_turnleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x10;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_turnright");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x11;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_strafeleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x13;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_straferight");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x14;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rollleft");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x15;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rollright");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x16;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_rotateroll");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 10;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_rotateyaw");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xc;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_rotatepitch");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xb;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_movey");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0xf;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_movex");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x12;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_accelerate");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2b;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("xi_v_deccelerate");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2c;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_pitchup");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x26;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_pitchdown");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x27;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_brake");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x18;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_afterburner");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x17;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_boost");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x25;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_debug_1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x28;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_debug_2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x29;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changebullet1");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2e;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changebullet2");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x2f;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  FUN_1083aa90("v_changefiremode");
  iVar1 = local_8;
  if (local_8 != 0) {
    *(int *)(local_8 + -0xc) = *(int *)(local_8 + -0xc) + 1;
  }
  local_c = local_8;
  local_8 = 0x30;
  FUN_110be580(local_14,&local_c);
  if (local_c != 0) {
    *(int *)(local_c + -0xc) = *(int *)(local_c + -0xc) + -1;
    if (*(int *)(local_c + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(local_c + -0xc));
    }
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + -1;
    if (*(int *)(iVar1 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(iVar1 + -0xc));
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  return 1;
}

