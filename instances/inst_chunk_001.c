/* ===== FUN_1084b7d0 @ 1084b7d0  size=166 ===== */
// strings:
//   "NewLobby"
//   "_root.DisbaleUI"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.DisbaleUI""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084b7d0(char param_1)

{
  int *piVar1;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        if (param_1 != '\0') {
          (**(code **)(*piVar1 + 0xc0))("_root.DisbaleUI",&stack0xffffffe4);
          (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
          return;
        }
        (**(code **)(*piVar1 + 0xc0))("_root.DisbaleUI",&stack0xffffffe4,1,0);
      }
    }
  }
  return;
}



/* ===== FUN_1084c040 @ 1084c040  size=297 ===== */
// strings:
//   "_getRoleListData"
//   "_getLineListData"
//   "sys_last_config_time"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""_getRoleListData""
     ""_getLineListData""
     ""sys_last_config_time""
     ""NewLobby"" */

void FUN_1084c040(void)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    FUN_104d13b0("_getRoleListData",FUN_108502f0);
    FUN_104d13b0("_getLineListData",FUN_108509e0);
    if (DAT_1202e818 != 0) {
      if ((*(int **)(DAT_1202e818 + 0x2c) != (int *)0x0) && (*(int *)(DAT_1202e818 + 0x28) != 0)) {
        iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("sys_last_config_time");
        if (iVar1 != 0) {
          piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                    ("sys_last_config_time");
          iVar1 = *piVar2;
          fVar3 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0xc))(0);
          (**(code **)(iVar1 + 0x18))((float)fVar3);
        }
      }
      if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
        piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x8c))();
        }
      }
    }
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_1084c260 @ 1084c260  size=275 ===== */
// strings:
//   "e_LobbyScene"

/* [RE-AUTO c0]
   strings:
     ""e_LobbyScene"" */

void __thiscall FUN_1084c260(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_14 = in_stack_00000010[3];
    local_1c = in_stack_00000010[1];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    local_28 = local_18;
    if (((local_1c & 0x8f) != 3) && ((local_1c & 0x8f) != 4)) {
      local_28 = 0xdeadbeaf;
    }
    local_24 = *(int **)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x120) = local_28;
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_10d17440();
      iVar1 = (**(code **)(*piVar2 + 0xc))();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_10d17440();
        piVar2 = (int *)(**(code **)(*piVar2 + 0xc))();
        (**(code **)(*piVar2 + 4))(0x75,&local_28);
      }
    }
    piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_LobbyScene");
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(*(undefined4 *)(param_1 + 0x120));
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
    }
    if (((uint)local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_24 + 8))(&local_24,local_1c);
    }
  }
  return;
}



/* ===== FUN_1084c380 @ 1084c380  size=439 ===== */
// calls: memset, _snprintf, CInfoRecord::GetModelString
// strings:
//   "e_lobbyAnimation"
//   "INTERACT_AVATAR_CREATE_%d"
//   "NORMAL_IDLE_SELECT"

/* [RE-AUTO c0]
   calls: memset, _snprintf
   strings:
     ""e_lobbyAnimation""
     ""INTERACT_AVATAR_CREATE_%d""
     ""NORMAL_IDLE_SELECT"" */

void __thiscall FUN_1084c380(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [52];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_60;
  if (in_stack_00000014 == 1) {
    local_60 = (int *)0x0;
    local_54 = in_stack_00000010[3];
    local_5c = in_stack_00000010[1];
    local_58 = in_stack_00000010[2];
    local_50 = in_stack_00000010[4];
    if ((local_5c >> 6 & 1) != 0) {
      local_60 = (int *)*in_stack_00000010;
      (**(code **)(*local_60 + 4))(&local_60,local_58);
    }
    local_44 = local_58;
    if (((local_5c & 0x8f) != 3) && ((local_5c & 0x8f) != 4)) {
      local_44 = 0xdeadbeaf;
    }
    local_48 = *(undefined4 *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x124) = local_44;
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_10d17440();
      iVar1 = (**(code **)(*piVar2 + 0xc))();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_10d17440();
        piVar2 = (int *)(**(code **)(*piVar2 + 0xc))();
        (**(code **)(*piVar2 + 4))(0x75,&local_48);
      }
    }
    piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_lobbyAnimation");
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(*(undefined4 *)(param_1 + 0x124));
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
    }
    local_44 = local_44 & 0xffffff00;
    memset((void *)((int)&local_44 + 1),0,0x31);
    if (*(int *)(param_1 + 0x124) < 2) {
      _snprintf((char *)&local_44,0x31,"NORMAL_IDLE_SELECT");
    }
    else {
      _snprintf((char *)&local_44,0x31,"INTERACT_AVATAR_CREATE_%d",*(int *)(param_1 + 0x124) + -1);
    }
    piVar2 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x790))();
      if (iVar1 != 0) {
        CInfoRecord__GetModelString(auStack_40,extraout_ECX,0,1,0,0);
        FUN_10fd7800();
      }
    }
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1084c540 @ 1084c540  size=83 ===== */
// strings:
//   "e_LobbyScene"

/* [RE-AUTO c0]
   strings:
     ""e_LobbyScene"" */

void FUN_1084c540(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000018;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("e_LobbyScene");
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))();
    if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
      *in_stack_00000018 = 0;
    }
    in_stack_00000018[2] = uVar2;
    in_stack_00000018[1] = 3;
  }
  return;
}



/* ===== FUN_1084c5a0 @ 1084c5a0  size=83 ===== */
// strings:
//   "e_lobbyAnimation"

/* [RE-AUTO c0]
   strings:
     ""e_lobbyAnimation"" */

void FUN_1084c5a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000018;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("e_lobbyAnimation");
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))();
    if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
      *in_stack_00000018 = 0;
    }
    in_stack_00000018[2] = uVar2;
    in_stack_00000018[1] = 3;
  }
  return;
}



/* ===== FUN_1084da50 @ 1084da50  size=55 ===== */
// strings:
//   "LobbyExitNo"
//   "LobbyExitYes"

/* [RE-AUTO c0]
   strings:
     ""LobbyExitNo""
     ""LobbyExitYes"" */

void FUN_1084da50(void)

{
  undefined1 local_14 [16];
  
  FUN_1112d520();
  FUN_1112d6b0(0x2010,"LobbyExitYes","LobbyExitNo",local_14);
  FUN_1112d550();
  return;
}



/* ===== FUN_1084daf0 @ 1084daf0  size=500 ===== */
// strings:
//   "mh_sharemem_addrinfo"
//   "CreatRoleNameInputCancel"
//   "CreatRoleNameInputOK"
//   "NewLobby"
//   "_root.HideWaitingText"

/* [RE-AUTO c0]
   src: _root.H
   strings:
     ""mh_sharemem_addrinfo""
     ""CreatRoleNameInputCancel""
     ""CreatRoleNameInputOK""
     ""NewLobby""
     ""_root.HideWaitingText"" */

void __thiscall FUN_1084daf0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined1 auStack_54 [4];
  int *local_50;
  uint local_4c;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_54;
  if (in_stack_00000014 == 2) {
    local_50 = (int *)0x0;
    local_44 = in_stack_00000010[3];
    local_4c = in_stack_00000010[1];
    local_48 = (char *)in_stack_00000010[2];
    local_40 = in_stack_00000010[4];
    if ((local_4c >> 6 & 1) != 0) {
      local_50 = (int *)*in_stack_00000010;
      (**(code **)(*local_50 + 4))(&local_50,local_48);
    }
    if (((byte)local_4c & 0x8f) == 6) {
      pcVar6 = local_48;
      if ((local_4c >> 6 & 1) != 0) {
        pcVar6 = *(char **)local_48;
      }
    }
    else {
      pcVar6 = "";
    }
    puStack_14 = auStack_24;
    pcVar1 = pcVar6;
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    puStack_10 = puStack_14;
    FUN_100b62c0(pcVar6,pcVar4);
    FUN_10855530();
    FUN_1143b840(uStack_18);
    cVar2 = FUN_1143b0e0();
    if (cVar2 == '\0') {
      FUN_1112d520();
      FUN_1112d6b0(0x1f81,"CreatRoleNameInputOK","CreatRoleNameInputCancel",auStack_34);
      if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
        if (piVar3 != (int *)0x0) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))();
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xc0))("_root.HideWaitingText",0,0,0);
          }
        }
      }
      FUN_1112d550();
    }
    else if (((byte)local_4c & 0x8f) == 6) {
      if (((in_stack_00000010[7] & 0x8f) == 3) ||
         (uVar5 = 0xdeadbeaf, (in_stack_00000010[7] & 0x8f) == 4)) {
        uVar5 = in_stack_00000010[8];
      }
      pcVar6 = local_48;
      if ((local_4c >> 6 & 1) != 0) {
        pcVar6 = *(char **)local_48;
      }
      FUN_108517c0(pcVar6,uVar5,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44));
    }
    if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_10);
    }
    if ((local_4c >> 6 & 1) != 0) {
      (**(code **)(*local_50 + 8))(&local_50,local_48);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1084dcf0 @ 1084dcf0  size=436 ===== */
// strings:
//   "FlashUI"
//   "_root.onReqConfirmChangeFace"
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.disableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""_root.onReqConfirmChangeFace""
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.disableEnterHandler"" */

void __fastcall FUN_1084dcf0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iStack_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  
  local_28 = 0;
  local_18 = 0;
  local_14 = (int *)0x0;
  local_1c = param_1;
  if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
     (FUN_104d7640("FlashUI",&local_18), local_18 == 0)) {
    local_24 = (int *)0x0;
    piVar3 = local_20;
  }
  else {
    local_28 = 1;
    local_24 = (int *)0x0;
    local_20 = (int *)0x0;
    if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
      FUN_104d7640("FlashUI",&local_24);
    }
    piVar3 = local_20;
    local_24 = (int *)(**(code **)(*local_24 + 0x3c))(&DAT_11dbd178);
  }
  piVar2 = local_14;
  if (((local_28 & 1) != 0) && (piVar3 != (int *)0x0)) {
    LOCK();
    iVar1 = piVar3[1] + -1;
    piVar3[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 4))();
      LOCK();
      iVar1 = piVar3[2] + -1;
      piVar3[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = piVar2[1] + -1;
    piVar2[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
      piVar3 = piVar2 + 2;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*piVar2 + 8))();
      }
    }
  }
  if ((local_24 != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*local_24 + 0x8c))(), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0xc0))("_root.onReqConfirmChangeFace",0,0,0);
    if ((DAT_1202e818 != (int *)0x0) &&
       ((((int *)DAT_1202e818[0x2f] != (int *)0x0 &&
         (piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0x2f] + 0x3c))("NewLobby"),
         piVar3 != (int *)0x0)) &&
        (piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))(), piVar3 != (int *)0x0)))) {
      local_28 = 2;
      local_20 = (int *)((uint)local_20 & 0xffffff00);
      (**(code **)(*piVar3 + 0xc0))("_root.EnableDeleteRoleBtn",&local_28,1,0);
      (**(code **)(*piVar3 + 0xc0))("_root.disableEnterHandler",0,0,0);
    }
    *(undefined1 *)(iStack_2c + 0x11d) = 1;
  }
  return;
}



/* ===== FUN_1084deb0 @ 1084deb0  size=182 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084deb0(int param_1)

{
  int *piVar1;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uStack_28 = *(undefined4 *)(param_1 + 0x44);
  uStack_2c = *(undefined4 *)(param_1 + 0x48);
  iStack_54 = *(int *)(param_1 + 0x20) >> 0x1f;
  uStack_30 = *(undefined4 *)(param_1 + 0x3c);
  uStack_34 = *(undefined4 *)(param_1 + 0x38);
  uStack_38 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  uStack_40 = *(undefined4 *)(param_1 + 0x2c);
  uStack_44 = *(undefined4 *)(param_1 + 0x30);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x50);
  FUN_10851610(*(int *)(param_1 + 0x20));
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        iStack_54 = 2;
        uStack_4c = CONCAT31(uStack_4c._1_3_,1);
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&iStack_54,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084df70 @ 1084df70  size=136 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084df70(int param_1)

{
  int *piVar1;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&stack0xffffffe4,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084e000 @ 1084e000  size=182 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084e000(int param_1)

{
  int *piVar1;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  uStack_28 = *(undefined4 *)(param_1 + 0x44);
  uStack_2c = *(undefined4 *)(param_1 + 0x48);
  iStack_54 = *(int *)(param_1 + 0x20) >> 0x1f;
  uStack_30 = *(undefined4 *)(param_1 + 0x3c);
  uStack_34 = *(undefined4 *)(param_1 + 0x38);
  uStack_38 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  uStack_40 = *(undefined4 *)(param_1 + 0x2c);
  uStack_44 = *(undefined4 *)(param_1 + 0x30);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x50);
  FUN_10851610(*(int *)(param_1 + 0x20));
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        iStack_54 = 2;
        uStack_4c = CONCAT31(uStack_4c._1_3_,1);
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&iStack_54,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084e0c0 @ 1084e0c0  size=136 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084e0c0(int param_1)

{
  int *piVar1;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&stack0xffffffe4,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084e150 @ 1084e150  size=343 ===== */
// strings:
//   "_root.DeleteRole_MessgeBox"
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.disableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""_root.DeleteRole_MessgeBox""
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.disableEnterHandler"" */

void __thiscall FUN_1084e150(int param_1)

{
  int *piVar1;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 auStack_30 [2];
  undefined1 uStack_28;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    if (*(char *)(param_1 + 0x11c) == '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 1;
      if (((byte)local_1c & 0x8f) == 3) {
        *(undefined4 *)(param_1 + 0x20) = local_18;
      }
      if (DAT_1202e818 != 0) {
        if (((*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0) &&
            (piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178),
            piVar1 != (int *)0x0)) &&
           (piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))(), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0xc0))("_root.DeleteRole_MessgeBox",0,0,0);
        }
        if (((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) &&
           ((piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby"),
            piVar1 != (int *)0x0 &&
            (piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))(), piVar1 != (int *)0x0)))) {
          auStack_30[0] = 2;
          uStack_28 = 0;
          (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_30,1,0);
          (**(code **)(*piVar1 + 0xc0))("_root.disableEnterHandler",0,0,0);
        }
      }
    }
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_1084e2b0 @ 1084e2b0  size=322 ===== */
// strings:
//   "NewLobby"
//   "_root.showPlayerBeautyUI"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.showPlayerBeautyUI"" */

void __thiscall FUN_1084e2b0(int param_1)

{
  int *piVar1;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 2) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    local_34 = in_stack_00000010[7];
    local_2c = in_stack_00000010[9];
    local_30 = in_stack_00000010[8];
    local_28 = in_stack_00000010[10];
    local_38 = (int *)0x0;
    if ((local_34 >> 6 & 1) != 0) {
      local_38 = (int *)in_stack_00000010[6];
      (**(code **)(*local_38 + 4))(&local_38,local_30);
    }
    if (((byte)local_1c & 0x8f) == 3) {
      *(undefined4 *)(param_1 + 0x20) = local_18;
    }
    if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
      piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc0))("_root.showPlayerBeautyUI",0,0,0);
        }
      }
    }
    if ((local_34 >> 6 & 1) != 0) {
      (**(code **)(*local_38 + 8))(&local_38,local_30);
      local_38 = (int *)0x0;
    }
    local_34 = 0;
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_1084e8a0 @ 1084e8a0  size=177 ===== */
// strings:
//   "NewLobby"
//   "_root.SwitchChangeFaceMode"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.SwitchChangeFaceMode"" */

void __fastcall FUN_1084e8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        local_8 = FUN_1084b880(*(undefined4 *)(param_1 + 0x20));
        iVar2 = FUN_10d17440();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_10d17440();
          iVar2 = (**(code **)(*piVar3 + 0xc))();
          if (iVar2 != 0) {
            piVar3 = (int *)FUN_10d17440();
            piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
            (**(code **)(*piVar3 + 4))(0x79,&local_8);
          }
        }
        (**(code **)(*piVar1 + 0xc0))("_root.SwitchChangeFaceMode",0,0,0);
      }
      *(undefined1 *)(param_1 + 0x11d) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084e960 @ 1084e960  size=136 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084e960(int param_1)

{
  int *piVar1;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&stack0xffffffe4,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084e9f0 @ 1084e9f0  size=177 ===== */
// strings:
//   "NewLobby"
//   "_root.SwitchChangeSexMode"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.SwitchChangeSexMode"" */

void __fastcall FUN_1084e9f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        local_8 = FUN_1084b880(*(undefined4 *)(param_1 + 0x20));
        iVar2 = FUN_10d17440();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_10d17440();
          iVar2 = (**(code **)(*piVar3 + 0xc))();
          if (iVar2 != 0) {
            piVar3 = (int *)FUN_10d17440();
            piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
            (**(code **)(*piVar3 + 4))(0x79,&local_8);
          }
        }
        (**(code **)(*piVar1 + 0xc0))("_root.SwitchChangeSexMode",0,0,0);
      }
      *(undefined1 *)(param_1 + 0x11d) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084eab0 @ 1084eab0  size=136 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __fastcall FUN_1084eab0(int param_1)

{
  int *piVar1;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&stack0xffffffe4,1,0);
        (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return;
}



/* ===== FUN_1084ecf0 @ 1084ecf0  size=205 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"
//   "_root.disableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler""
     ""_root.disableEnterHandler"" */

void __thiscall FUN_1084ecf0(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 auStack_18 [2];
  undefined1 uStack_10;
  
  piVar2 = (int *)0x0;
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x8c))();
    }
  }
  if (param_2 == '\0') {
    if (piVar2 == (int *)0x0) goto LAB_1084eda9;
    auStack_18[0] = 2;
    uStack_10 = 0;
    (**(code **)(*piVar2 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_18,1,0);
    pcVar3 = "_root.disableEnterHandler";
  }
  else {
    if (piVar2 == (int *)0x0) goto LAB_1084eda9;
    auStack_18[0] = 2;
    uStack_10 = 1;
    (**(code **)(*piVar2 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_18,1,0);
    pcVar3 = "_root.enableEnterHandler";
  }
  (**(code **)(*piVar2 + 0xc0))(pcVar3,0,0,0);
LAB_1084eda9:
  *(bool *)(param_1 + 0x11d) = param_2 == '\0';
  return;
}



/* ===== FUN_1084edc0 @ 1084edc0  size=225 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"
//   "_root.disableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler""
     ""_root.disableEnterHandler"" */

void FUN_1084edc0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int in_stack_00000010;
  undefined4 auStack_18 [2];
  undefined1 uStack_10;
  
  if (((byte)*(undefined4 *)(in_stack_00000010 + 4) & 0x8f) == 2) {
    cVar2 = *(char *)(in_stack_00000010 + 8);
  }
  else {
    cVar2 = '\0';
  }
  piVar3 = (int *)0x0;
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar1 + 0x8c))();
    }
  }
  if (cVar2 == '\0') {
    if (piVar3 != (int *)0x0) {
      auStack_18[0] = 2;
      uStack_10 = 0;
      (**(code **)(*piVar3 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_18,1,0);
      (**(code **)(*piVar3 + 0xc0))("_root.disableEnterHandler",0,0,0);
    }
  }
  else if (piVar3 != (int *)0x0) {
    auStack_18[0] = 2;
    uStack_10 = 1;
    (**(code **)(*piVar3 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_18,1,0);
    (**(code **)(*piVar3 + 0xc0))("_root.enableEnterHandler",0,0,0);
    return;
  }
  return;
}



/* ===== FUN_1084f530 @ 1084f530  size=113 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn"" */

void __fastcall FUN_1084f530(int param_1)

{
  int *piVar1;
  undefined4 local_18 [2];
  undefined1 local_10;
  
  FUN_10851ba0(*(undefined4 *)(param_1 + 0x20));
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        local_18[0] = 2;
        local_10 = 1;
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",local_18,1,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11c) = 0;
  return;
}



/* ===== FUN_1084f5b0 @ 1084f5b0  size=104 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn"" */

void __fastcall FUN_1084f5b0(int param_1)

{
  int *piVar1;
  undefined4 local_18 [2];
  undefined1 local_10;
  
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
      if (piVar1 != (int *)0x0) {
        local_18[0] = 2;
        local_10 = 1;
        (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",local_18,1,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11c) = 0;
  return;
}



/* ===== FUN_10850130 @ 10850130  size=299 ===== */
// strings:
//   "CreatRoleNameInputCancel"
//   "CreatRoleNameInputOK"
//   "NewLobby"
//   "_root.HideWaitingText"

/* [RE-AUTO c0]
   src: _root.H
   strings:
     ""CreatRoleNameInputCancel""
     ""CreatRoleNameInputOK""
     ""NewLobby""
     ""_root.HideWaitingText"" */

void FUN_10850130(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 uVar3;
  undefined1 local_30 [16];
  int *local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 != 1) {
    return;
  }
  local_20 = (int *)0x0;
  local_14 = in_stack_00000010[3];
  local_1c = in_stack_00000010[1];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  iVar1 = local_18;
  if (((byte)local_1c & 0x8f) != 3) goto LAB_1085023e;
  FUN_1112d520();
  if (iVar1 == 1) {
    uVar3 = 0x1f82;
LAB_108501dc:
    FUN_1112d6b0(uVar3,"CreatRoleNameInputOK","CreatRoleNameInputCancel",local_30);
  }
  else if (iVar1 == 2) {
    uVar3 = 0x1f83;
    goto LAB_108501dc;
  }
  if ((((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) &&
      (piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby"),
      piVar2 != (int *)0x0)) &&
     (piVar2 = (int *)(**(code **)(*piVar2 + 0x8c))(), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xc0))("_root.HideWaitingText",0,0,0);
  }
  FUN_1112d550();
LAB_1085023e:
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10850f00 @ 10850f00  size=166 ===== */
// strings:
//   "NewLobby"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.enableEnterHandler"" */

void FUN_10850f00(void)

{
  char cVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined4 in_stack_00000010;
  uint uStack_24;
  int iStack_20;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x68))();
    if (cVar1 != '\0') {
      FUN_104f4330(in_stack_00000010);
      if ((((uStack_24 & 0x8f) != 3) && ((uStack_24 & 0x8f) != 4)) || (iStack_20 < 1)) {
        FUN_1084b7d0();
        piVar2 = (int *)(**(code **)(*piVar2 + 0x8c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc0))("_root.enableEnterHandler",0,0,0);
        }
      }
      if ((uStack_24 >> 6 & 1) != 0) {
        (**(code **)(*unaff_ESI + 8))(&stack0xffffffd8,iStack_20);
      }
    }
  }
  return;
}



/* ===== FUN_108510b0 @ 108510b0  size=147 ===== */
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.enableEnterHandler"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.enableEnterHandler"" */

void __thiscall FUN_108510b0(int param_1,int *param_2)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x55) = 1;
  if (*param_2 != -2) {
    if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
      piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)(**(code **)(*piVar1 + 0x8c))();
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc0))("_root.EnableDeleteRoleBtn",&stack0xffffffe4,1,0);
          (**(code **)(*piVar1 + 0xc0))("_root.enableEnterHandler",0,0,0);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x11d) = 0;
  }
  return;
}



/* ===== FUN_108514c0 @ 108514c0  size=73 ===== */
// strings:
//   "LobbyExitNo"
//   "LobbyExitYes"

/* [RE-AUTO c0]
   strings:
     ""LobbyExitNo""
     ""LobbyExitYes"" */

void __thiscall FUN_108514c0(int param_1,char *param_2)

{
  undefined1 local_14 [16];
  
  if (*param_2 != '\0') {
    FUN_1112d520();
    FUN_1112d6b0(0x2010,"LobbyExitYes","LobbyExitNo",local_14);
    FUN_1112d550();
    return;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}



/* ===== FUN_10851510 @ 10851510  size=152 ===== */
// strings:
//   "NewLobby"
//   "_root.ShowServerLine"

/* [RE-AUTO c0]
   strings:
     ""NewLobby""
     ""_root.ShowServerLine"" */

void FUN_10851510(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  iVar1 = FUN_10bac530();
  if (iVar1 == 3) {
    local_c = 0;
    local_8 = 0;
    local_14 = 0x57;
    local_10 = 1;
    FUN_10d17440();
    piVar2 = (int *)FUN_10d17870();
    (**(code **)(*piVar2 + 4))(0x1e,&local_14);
    return;
  }
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x8c))();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc0))("_root.ShowServerLine",0,0,0);
      }
    }
  }
  return;
}



/* ===== FUN_108515b0 @ 108515b0  size=42 ===== */
// strings:
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""NewLobby"" */

undefined4 FUN_108515b0(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x108515d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0x8c))();
      return uVar2;
    }
  }
  return 0;
}



/* ===== FUN_10851610 @ 10851610  size=422 ===== */
// calls: __alloca_probe, atoi, memset
// strings:
//   "NewLobby"
//   "_root.EnableDeleteRoleBtn"
//   "_root.disableEnterHandler"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, atoi, memset
   strings:
     ""NewLobby""
     ""_root.EnableDeleteRoleBtn""
     ""_root.disableEnterHandler"" */

void __thiscall
FUN_10851610(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 param_5,
            undefined2 param_6,undefined2 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,char param_15)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  char *_Str;
  undefined4 auStack_a6dc0 [2];
  undefined1 uStack_a6db8;
  undefined2 uStack_a6db0;
  undefined1 auStack_a6dae [14];
  undefined4 uStack_a6da0;
  undefined4 uStack_a6d9c;
  undefined4 uStack_a6d98;
  ushort uStack_a6d94;
  undefined2 uStack_a6d92;
  undefined2 uStack_a6d90;
  undefined2 uStack_a6d8e;
  undefined2 uStack_a6d8c;
  undefined4 uStack_a6d8a;
  undefined4 uStack_a6d86;
  undefined4 uStack_a6d82;
  undefined4 uStack_a6d7e;
  undefined4 uStack_a6d7a;
  int iStack_a6d76;
  undefined4 uStack_a6d72;
  undefined2 auStack_a6d6e [341685];
  
  iVar2 = FUN_10849e90(param_11);
  if (iVar2 != 0) {
    if (param_4 == 0) {
      _Str = *(char **)(iVar2 + 0x28);
    }
    else {
      _Str = *(char **)(iVar2 + 0x40);
    }
    param_11 = atoi(_Str);
  }
  memset(auStack_a6dae,0,0xa6d9c);
  pfVar4 = (float *)(param_1 + 0x58);
  uStack_a6db0 = 0xa8;
  uStack_a6d98 = param_3;
  uStack_a6d90 = param_5;
  uStack_a6d8e = param_6;
  uStack_a6d8c = param_7;
  uStack_a6d7e = param_13;
  uStack_a6d72 = param_12;
  uStack_a6d86 = param_8;
  uStack_a6d8a = param_10;
  uStack_a6d82 = param_9;
  uStack_a6d9c = param_2;
  uStack_a6da0 = param_2;
  iVar2 = 0;
  uStack_a6d92 = (undefined2)param_4;
  uStack_a6d7a = param_14;
  do {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    auStack_a6d6e[iVar2] = (short)(int)((double)fVar1 * DAT_11de9a08);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x2e);
  uStack_a6d94 = (ushort)(param_15 != '\0');
  iStack_a6d76 = param_11;
  if ((DAT_120286c8 != 0) && (*(int *)(DAT_120286c8 + 0x180) != 0)) {
    FUN_10d179a0(&uStack_a6db0);
  }
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))("NewLobby");
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))();
      if (piVar3 != (int *)0x0) {
        auStack_a6dc0[0] = 2;
        uStack_a6db8 = 0;
        (**(code **)(*piVar3 + 0xc0))("_root.EnableDeleteRoleBtn",auStack_a6dc0,1,0);
        (**(code **)(*piVar3 + 0xc0))("_root.disableEnterHandler",0,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11d) = 1;
  FUN_11a89daa();
  return;
}



/* ===== FUN_108583c0 @ 108583c0  size=665 ===== */
// calls: _strtoui64
// strings:
//   "mh_sharemem_addrinfo"
//   "instanceChannelNumber"
//   "collumn"
//   "m_nFactItemLevel"

/* [RE-AUTO c0]
   calls: _strtoui64
   strings:
     ""mh_sharemem_addrinfo""
     ""instanceChannelNumber""
     ""collumn""
     ""m_nFactItemLevel"" */

void FUN_108583c0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int *piStack_48;
  uint uStack_44;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char acStack_2c [8];
  undefined1 auStack_24 [12];
  char *pcStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_54;
  local_40 = (int *)0x0;
  local_3c = in_stack_00000010[1];
  local_34 = in_stack_00000010[3];
  local_38 = in_stack_00000010[2];
  local_30 = in_stack_00000010[4];
  if ((local_3c >> 6 & 1) != 0) {
    local_40 = (int *)*in_stack_00000010;
    (**(code **)(*local_40 + 4))(&local_40,local_38);
  }
  if (((byte)in_stack_00000010[7] & 0x8f) == 6) {
    if (((uint)in_stack_00000010[7] >> 6 & 1) == 0) {
      pcVar7 = (char *)in_stack_00000010[8];
    }
    else {
      pcVar7 = *(char **)in_stack_00000010[8];
    }
  }
  else {
    pcVar7 = "";
  }
  puStack_14 = auStack_24;
  pcVar1 = pcVar7;
  do {
    pcVar6 = pcVar1;
    pcVar1 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  puStack_10 = puStack_14;
  FUN_100b62c0(pcVar7,pcVar6);
  uStack_50 = _strtoui64(pcStack_18,(char **)0x0,10);
  uVar5 = (undefined4)uStack_50;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar4 + 0xb4))(), iVar3 != 0)) {
    uStack_54 = 0;
    if (*(int *)(iVar3 + 0x2d1c) != 0) {
      FUN_113f9c70(uVar5,uStack_50._4_4_,&stack0xffffffa8,&uStack_54);
    }
    FUN_104d14d0("instanceChannelNumber");
    FUN_104d1550("collumn",0xffffffff);
    FUN_104d1440(&DAT_11dbfe78,uStack_54);
    if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
      *in_stack_00000018 = 0;
    }
    in_stack_00000018[1] = 2;
    *(undefined1 *)(in_stack_00000018 + 2) = 1;
    if (((in_stack_00000014 == 4) && (((byte)in_stack_00000010[0x13] & 0x8f) == 2)) &&
       ((*(char *)(in_stack_00000010 + 0x14) != '\0' && (DAT_1202e818 != 0)))) {
      piVar4 = (int *)FUN_10858670(uVar5,uStack_50._4_4_,0);
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*piVar4 + 0x18))();
        FUN_104d1550("m_nFactItemLevel",uVar5);
        cVar2 = FUN_116698a0();
        if (((cVar2 != '\0') && (cVar2 = FUN_1166e250(), cVar2 != '\0')) &&
           (iVar3 = FUN_1166dc70(), iVar3 < 1)) {
          if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
            (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
            *in_stack_00000018 = 0;
          }
          in_stack_00000018[1] = 2;
          *(undefined1 *)(in_stack_00000018 + 2) = 0;
        }
      }
    }
  }
  if ((pcStack_18 != acStack_2c) && (pcStack_18 != (char *)0x0)) {
    FUN_10c3d5d0(pcStack_18);
  }
  if ((uStack_44 >> 6 & 1) != 0) {
    (**(code **)(*piStack_48 + 8))(&piStack_48,local_40);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1085f760 @ 1085f760  size=135 ===== */
// strings:
//   "function_IsPlayerInBattleGround"

/* [RE-AUTO c0]
   strings:
     ""function_IsPlayerInBattleGround"" */

void FUN_1085f760(void)

{
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  FUN_104d13b0("function_IsPlayerInBattleGround",FUN_1085f7f0);
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_108606f0 @ 108606f0  size=1171 ===== */
// strings:
//   "collumn"
//   "instanceChannelType"
//   "m_bIsLocal"
//   "instanceChannel"
//   "m_bCanBreak"
//   "m_strPackingSpeed"

/* [RE-AUTO c0]
   strings:
     ""collumn""
     ""instanceChannelType""
     ""m_bIsLocal""
     ""instanceChannel""
     ""m_bCanBreak""
     ""m_strPackingSpeed"" */

void FUN_108606f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5,undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 uStack_13c;
  char local_13b;
  char acStack_13a [2];
  int *piStack_138;
  int local_134;
  int *piStack_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_114;
  int *piStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  int *piStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e4;
  undefined8 uStack_e0;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 **ppuStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_13c;
  local_e4 = param_2;
  if (((uint)param_6[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_6 + 8))(param_6,param_6[2]);
    *param_6 = 0;
  }
  param_6[1] = 2;
  *(undefined1 *)(param_6 + 2) = 0;
  if (param_5 != 4) goto LAB_10860b6c;
  local_12c = param_4[1];
  local_124 = param_4[3];
  uStack_128 = param_4[2];
  uStack_120 = param_4[4];
  local_134 = 0;
  local_104 = 0;
  local_114 = 0;
  acStack_13a[1] = 0;
  local_13b = '\0';
  acStack_13a[0] = '\0';
  uStack_e0 = 0;
  uStack_108 = 0;
  piStack_130 = (int *)0x0;
  if ((local_12c >> 6 & 1) != 0) {
    piStack_130 = (int *)*param_4;
    (**(code **)(*piStack_130 + 4))(&piStack_130,uStack_128);
  }
  uStack_fc = param_4[7];
  uStack_f4 = param_4[9];
  uStack_f8 = param_4[8];
  uStack_f0 = param_4[10];
  piStack_100 = (int *)0x0;
  if ((uStack_fc >> 6 & 1) != 0) {
    piStack_100 = (int *)param_4[6];
    (**(code **)(*piStack_100 + 4))(&piStack_100,uStack_f8);
  }
  if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
    piStack_138 = (int *)param_4[0xe];
  }
  else {
    piStack_138 = (int *)0xdeadbeaf;
  }
  if (((byte)param_4[0x13] & 0x8f) == 2) {
    iStack_10c = CONCAT31(iStack_10c._1_3_,*(undefined1 *)(param_4 + 0x14));
  }
  else {
    iStack_10c = (uint)iStack_10c._1_3_ << 8;
  }
  FUN_107ccc30(&local_134);
  FUN_107ccc30(&local_104);
  FUN_107ccc30(&local_114);
  FUN_107ccc30(&uStack_108);
  FUN_107cccb0(&local_13b);
  FUN_107cccb0(acStack_13a);
  FUN_107cccb0(acStack_13a + 1);
  FUN_107ccd30(&uStack_e0);
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piStack_110 = (int *)(**(code **)(*piVar1 + 0xb4))();
    if (piStack_110 != (int *)0x0) {
      if (local_13b == '\0') {
        if (DAT_1202e818 != 0) {
          iVar2 = FUN_10858a70();
          if (iVar2 != 0) goto LAB_1086095c;
        }
      }
      else {
        iVar2 = FUN_113f9bb0(local_134,local_104);
LAB_1086095c:
        iVar3 = iStack_10c;
        if (acStack_13a[0] == '\0') {
LAB_10860984:
          if (iVar2 == 0) goto LAB_10860988;
        }
        else {
          if (DAT_1202e818 != 0) {
            iVar2 = FUN_10858670((undefined4)uStack_e0,uStack_e0._4_4_,iStack_10c);
            goto LAB_10860984;
          }
LAB_10860988:
          iVar2 = FUN_10861ef0(&piStack_100,iVar3);
        }
        iVar3 = FUN_10254130(local_114);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x34) == 2)) && (*(int *)(iVar3 + 0x3c) == 5)) {
          iVar3 = FUN_108563c0(*(undefined4 *)(iVar3 + 0x10));
          if (0 < (int)piStack_138) {
            if (iVar3 == 0) goto LAB_10860b22;
            iVar3 = FUN_117d2ed0(piStack_138);
          }
          if (iVar3 != 0) {
            piStack_138 = (int *)0x0;
            iVar4 = (**(code **)(*piStack_110 + 0x294))();
            if (iVar4 == 5) {
              piStack_138 = (int *)FUN_11399c60();
            }
            FUN_1186a230();
            if (((piStack_138 == (int *)0x0) || (iVar2 == 0)) ||
               ((local_134 != 3 || (local_13b == '\0')))) {
              uVar5 = *(undefined4 *)(iVar3 + 0x18);
            }
            else {
              uVar5 = (**(code **)(*piStack_138 + 0xd4))();
            }
            puVar6 = (undefined4 *)FUN_1186ae80(uVar5);
            puStack_30 = auStack_40;
            auStack_40[0] = 0;
            puStack_2c = puStack_30;
            iVar2 = FUN_100e1c50(*puVar6);
            FUN_100b5f70(*(undefined4 *)(iVar2 + 0x14),&stack0xfffffec3);
            FUN_108763a0();
            if ((ppuStack_1c != &puStack_30) && (ppuStack_1c != (undefined1 **)0x0)) {
              FUN_10c3d5d0(ppuStack_1c);
            }
            FUN_104d1670("m_strPackingSpeed",puStack_34);
            if (((uint)param_6[1] >> 6 & 1) != 0) {
              (**(code **)(*(int *)*param_6 + 8))(param_6,param_6[2]);
              *param_6 = 0;
            }
            param_6[1] = 2;
            *(undefined1 *)(param_6 + 2) = 1;
            if ((puStack_34 != auStack_48) && (puStack_34 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_34);
            }
            FUN_108561d0();
          }
        }
      }
    }
  }
LAB_10860b22:
  if ((uStack_fc >> 6 & 1) != 0) {
    (**(code **)(*piStack_100 + 8))(&piStack_100,uStack_f8);
    piStack_100 = (int *)0x0;
  }
  uStack_fc = 0;
  if ((local_12c >> 6 & 1) != 0) {
    (**(code **)(*piStack_130 + 8))(&piStack_130,uStack_128);
  }
LAB_10860b6c:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10861c50 @ 10861c50  size=657 ===== */
// strings:
//   "m_bIsLocal"
//   "m_nOtherEquipPos"
//   "instanceChannel"
//   "instanceChannelNumber"
//   "instanceChannelType"

/* [RE-AUTO c0]
   strings:
     ""m_bIsLocal""
     ""m_nOtherEquipPos""
     ""instanceChannel""
     ""instanceChannelNumber""
     ""instanceChannelType"" */

int FUN_10861c50(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *local_8c;
  uint local_88;
  undefined4 local_84;
  int *local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int *local_5c;
  uint local_58;
  undefined4 local_54;
  int *local_44;
  uint local_40;
  undefined4 local_3c;
  int *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined8 local_14;
  uint local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_8c = (int *)0x0;
  local_88 = 0;
  local_5c = (int *)0x0;
  local_58 = 0;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_74 = (int *)0x0;
  local_70 = 0;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_c = local_c & 0xffffff00;
  local_14 = 0;
  cVar1 = (**(code **)(*(int *)*param_3 + 0x10))
                    (param_3[2],"m_bIsLocal",&local_8c,((byte)param_3[1] & 0x8f) == 10);
  if (cVar1 != '\0') {
    uVar3 = 0;
    if (((byte)local_88 & 0x8f) == 2) {
      uVar3 = (undefined1)local_84;
    }
    local_8 = CONCAT31(local_8._1_3_,uVar3);
  }
  cVar1 = (**(code **)(*(int *)*param_3 + 0x10))
                    (param_3[2],"m_nOtherEquipPos",&local_5c,((byte)param_3[1] & 0x8f) == 10);
  uVar4 = 0;
  if ((cVar1 != '\0') && (((local_58 & 0x8f) == 3 || (uVar4 = 0xdeadbeaf, (local_58 & 0x8f) == 4))))
  {
    uVar4 = local_54;
  }
  cVar1 = (**(code **)(*(int *)*param_3 + 0x10))
                    (param_3[2],"instanceChannel",&local_44,((byte)param_3[1] & 0x8f) == 10);
  if (cVar1 != '\0') {
    uVar3 = 0;
    if (((byte)local_40 & 0x8f) == 2) {
      uVar3 = (undefined1)local_3c;
    }
    local_c = CONCAT31(local_c._1_3_,uVar3);
  }
  cVar1 = (**(code **)(*(int *)*param_3 + 0x10))
                    (param_3[2],"instanceChannelNumber",&local_74,((byte)param_3[1] & 0x8f) == 10);
  if (cVar1 != '\0') {
    if (((byte)local_70 & 0x8f) == 5) {
      local_14 = CONCAT44(uStack_68,local_6c);
    }
    else {
      local_14 = 0;
    }
  }
  cVar1 = (**(code **)(*(int *)*param_3 + 0x10))
                    (param_3[2],"instanceChannelType",&local_2c,((byte)param_3[1] & 0x8f) == 10);
  uVar5 = 0;
  if ((cVar1 != '\0') && (((local_28 & 0x8f) == 3 || (uVar5 = 0xdeadbeaf, (local_28 & 0x8f) == 4))))
  {
    uVar5 = local_24;
  }
  iVar2 = FUN_10858d90(param_1,param_2,local_8,uVar4,local_c,uVar5,local_14);
  if (iVar2 == 0) {
    iVar2 = FUN_10861ef0(param_4,0);
  }
  if ((local_28 >> 6 & 1) != 0) {
    (**(code **)(*local_2c + 8))(&local_2c,local_24);
    local_2c = (int *)0x0;
  }
  local_28 = 0;
  if ((local_70 >> 6 & 1) != 0) {
    (**(code **)(*local_74 + 8))(&local_74,local_6c);
    local_74 = (int *)0x0;
  }
  local_70 = 0;
  if ((local_40 >> 6 & 1) != 0) {
    (**(code **)(*local_44 + 8))(&local_44,local_3c);
    local_44 = (int *)0x0;
  }
  local_40 = 0;
  if ((local_58 >> 6 & 1) != 0) {
    (**(code **)(*local_5c + 8))(&local_5c,local_54);
    local_5c = (int *)0x0;
  }
  local_58 = 0;
  if ((local_88 >> 6 & 1) != 0) {
    (**(code **)(*local_8c + 8))(&local_8c,local_84);
  }
  return iVar2;
}



/* ===== FUN_10866710 @ 10866710  size=677 ===== */
// calls: _strtoui64, CPet::SetName
// strings:
//   "mh_sharemem_addrinfo"
//   "instanceChannelNumber"
//   "m_bIsRandomWeapon"
//   "m_bIsRecast"
//   "m_nRareType"

/* [RE-AUTO c0]
   calls: _strtoui64
   strings:
     ""mh_sharemem_addrinfo""
     ""instanceChannelNumber""
     ""m_bIsRandomWeapon""
     ""m_bIsRecast""
     ""m_nRareType"" */

void FUN_10866710(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined8 uVar9;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  ulonglong uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char acStack_2c [4];
  char acStack_28 [4];
  char acStack_24 [12];
  char *pcStack_18;
  char *pcStack_14;
  char *pcStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_4c;
  uStack_50 = CONCAT44(uStack_4c,unaff_EBX);
  local_40 = (int *)0x0;
  local_3c = in_stack_00000010[1];
  local_34 = in_stack_00000010[3];
  local_38 = in_stack_00000010[2];
  local_30 = in_stack_00000010[4];
  if ((local_3c >> 6 & 1) != 0) {
    local_40 = (int *)*in_stack_00000010;
    (**(code **)(*local_40 + 4))(&local_40,local_38);
  }
  if (((byte)in_stack_00000010[7] & 0x8f) == 2) {
    cVar2 = *(char *)(in_stack_00000010 + 8);
  }
  else {
    cVar2 = '\0';
  }
  if (((byte)in_stack_00000010[0xd] & 0x8f) == 5) {
    uVar9 = *(undefined8 *)(in_stack_00000010 + 0xe);
  }
  else {
    uVar9 = 0;
  }
  uStack_48._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (((in_stack_00000010[0x13] & 0x8f) == 3) || ((in_stack_00000010[0x13] & 0x8f) == 4)) {
    uStack_50 = CONCAT44(in_stack_00000010[0x14],(undefined4)uStack_50);
  }
  else {
    uStack_50 = CONCAT44(0xdeadbeaf,(undefined4)uStack_50);
  }
  uStack_48 = uVar9;
  if (in_stack_00000014 == 5) {
    if (((byte)in_stack_00000010[0x19] & 0x8f) != 6) goto LAB_10866984;
    if (((byte)in_stack_00000010[0x19] & 0x8f) == 6) {
      if (((uint)in_stack_00000010[0x19] >> 6 & 1) == 0) {
        pcVar8 = (char *)in_stack_00000010[0x1a];
      }
      else {
        pcVar8 = *(char **)in_stack_00000010[0x1a];
      }
    }
    else {
      pcVar8 = "";
    }
    pcStack_14 = acStack_24;
    pcVar1 = pcVar8;
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcStack_10 = pcStack_14;
    FUN_100b62c0(pcVar8,pcVar7);
    uStack_50 = _strtoui64(pcStack_18,(char **)0x0,10);
    uVar3 = (undefined4)uStack_50;
    FUN_104d14d0("instanceChannelNumber");
    if ((pcStack_10 != acStack_24) && (pcStack_10 != (char *)0x0)) {
      FUN_10c3d5d0(pcStack_10);
    }
    uVar6 = uStack_48._4_4_;
  }
  else {
    uStack_48._0_4_ = (undefined4)uVar9;
    uVar6 = uStack_48._4_4_;
    uVar3 = (undefined4)uStack_48;
  }
  if ((((cVar2 != '\0') && (DAT_1202e818 != 0)) &&
      (piVar4 = (int *)FUN_10858670(uVar3,uVar6,0), piVar4 != (int *)0x0)) &&
     (cVar2 = FUN_1166e250(), cVar2 != '\0')) {
    FUN_104d15e0("m_bIsRandomWeapon",1);
    iVar5 = FUN_1166dc70();
    FUN_104d15e0("m_bIsRecast",0 < iVar5);
    uVar6 = (**(code **)(*piVar4 + 0x14))();
    uStack_50 = uStack_50 & 0xffffffff;
    CPet__SetName(uVar6);
    pcStack_18 = acStack_28;
    acStack_28[0] = '\0';
    pcStack_14 = pcStack_18;
    FUN_100e5aa0(pcStack_18);
    FUN_104d1670(&DAT_11dbac80,pcStack_18);
    if ((pcStack_18 != acStack_2c) && (pcStack_18 != (char *)0x0)) {
      FUN_10c3d5d0(pcStack_18);
    }
    if (unaff_ESI != 0) {
      FUN_10c3da30(unaff_ESI);
    }
    uVar6 = (**(code **)(*piVar4 + 0x2c))();
    FUN_104d1550("m_nRareType",uVar6);
  }
LAB_10866984:
  if ((local_3c >> 6 & 1) != 0) {
    (**(code **)(*local_40 + 8))(&local_40,local_38);
  }
  uStack_50 = CONCAT44(uStack_4c,0x108669af);
  FUN_11a89daa();
  return;
}



/* ===== FUN_108a15e0 @ 108a15e0  size=1892 ===== */
// calls: CPet::SetName
// strings:
//   "itemArray"
//   "PACKITEM_CLASS_NAME"
//   "count"
//   "asset"
//   "m_nItemLevel"
//   "m_typeNormal"
//   "m_typeSub"
//   "m_nBindType"
//   "m_nExpireTime"
//   "m_nRareType"
//   "instanceChannel"
//   "instanceChannelNumber"
//   "instanceChannelType"
//   "Param2"

/* [RE-AUTO c0]
   strings:
     ""itemArray""
     ""PACKITEM_CLASS_NAME""
     ""count""
     ""asset""
     ""m_nItemLevel""
     ""m_typeNormal""
     ""m_typeSub""
     ""m_nBindType""
     ""m_nExpireTime""
     ""m_nRareType"" */

void FUN_108a15e0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_EBX;
  int *piVar9;
  undefined4 unaff_EDI;
  int **ppiStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  int *piStack_bc;
  undefined8 uStack_b8;
  int *piVar10;
  undefined1 auStack_a4 [4];
  int *piStack_a0;
  undefined4 uStack_9c;
  int *piStack_80;
  uint uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  uint uStack_6c;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int *local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_a4;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      uStack_b8 = CONCAT44(param_1[2],param_1);
      piStack_bc = (int *)0x108a1647;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    uStack_b8 = CONCAT44(param_4,0x108a1662);
    FUN_104f4330();
    uVar3 = *(uint *)(param_4 + 0x4c) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      uStack_74 = *(undefined4 *)(param_4 + 0x50);
    }
    else {
      uStack_74 = 0xdeadbeaf;
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) {
      uStack_b8 = CONCAT44(0x108a16b6,(int *)uStack_b8);
      piVar4 = (int *)(**(code **)(*piVar4 + 0xb4))();
      piStack_78 = piVar4;
      if (piVar4 != (int *)0x0) {
        piStack_70 = (int *)0x0;
        uStack_6c = 0;
        uStack_b8 = (ulonglong)CONCAT14(((byte)uStack_3c & 0x8f) == 10,&piStack_70);
        piStack_bc = (int *)0x11dd29ac;
        uStack_c0 = uStack_38;
        piStack_c4 = (int *)0x108a1704;
        (**(code **)(*local_40 + 0x10))();
        piStack_c4 = (int *)0x0;
        piStack_c8 = piStack_78;
        piStack_cc = (int *)0x108a1713;
        (**(code **)(*piStack_80 + 0x2c))();
        piVar1 = piStack_50;
        ppiStack_d0 = &piStack_70;
        piStack_70 = (int *)0x0;
        uStack_6c = 0;
        piVar10 = (int *)CONCAT31((int3)((uint)unaff_EDI >> 8),((byte)piStack_54 & 0x8f) == 10);
        piStack_cc = piVar10;
        cVar2 = (**(code **)(*piStack_58 + 0x10))();
        if (((cVar2 != '\0') && (((byte)uStack_7c & 0x8f) == 6)) &&
           (piStack_bc = piStack_78, (uStack_7c >> 6 & 1) != 0)) {
          piStack_bc = (int *)*piStack_78;
        }
        uVar3 = 0;
        piStack_c4 = (int *)(piVar4[0x983b] + 0x34);
        iVar5 = *piStack_c4;
        iVar8 = *(int *)(piVar4[0x983b] + 0x38) - iVar5;
        iVar6 = iVar8 >> 0x1f;
        iVar8 = iVar8 / 0xc + iVar6;
        if (iVar8 != iVar6) {
          piStack_c8 = (int *)0x0;
          if (iVar8 == iVar6) {
            FUN_108a2740();
            goto LAB_108a1d3f;
          }
          do {
            uStack_b8 = *(ulonglong *)((int)piStack_c8 + iVar5);
            uStack_c0 = *(undefined4 *)((int)piStack_c8 + iVar5 + 8);
            iVar5 = FUN_10254130((int *)uStack_b8);
            if (iVar5 != 0) {
              piStack_50 = (int *)0x0;
              uStack_4c = 0;
              FUN_11a98de0(&piStack_50,piStack_bc,0,0);
              FUN_104d1440(&DAT_11dbb0b4,piStack_c8);
              FUN_104d1440("count",piStack_c4);
              FUN_104d1790(&DAT_11dbac80,iVar5 + 0x14);
              FUN_104d1670("asset",*(undefined4 *)(iVar5 + 0xb4));
              FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar5 + 0x34));
              FUN_104d1550("m_nItemLevel",*(undefined4 *)(iVar5 + 0x40));
              FUN_104d1550("m_typeNormal",*(undefined4 *)(iVar5 + 0x38));
              FUN_104d1550("m_typeSub",*(undefined4 *)(iVar5 + 0x3c));
              FUN_104d1550("m_nBindType",ppiStack_d0);
              FUN_104d1550("m_nExpireTime",*(undefined4 *)(iVar5 + 0xb8));
              FUN_104d1550("m_nRareType",*(undefined4 *)(iVar5 + 0x4c));
              (**(code **)(*unaff_EBX + 0x3c))(piStack_a0,auStack_60);
              if ((uStack_4c >> 6 & 1) != 0) {
                (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
              }
            }
            uVar3 = uVar3 + 1;
            piStack_c8 = piStack_c8 + 3;
            iVar5 = *piStack_c4;
          } while (uVar3 < (uint)((piStack_c4[1] - iVar5) / 0xc));
        }
        piVar9 = (int *)0x0;
        uVar3 = 0;
        piVar4 = piStack_a0 + 0x983b;
        piStack_a0 = (int *)(*piVar4 + 0x40);
        iVar5 = *piStack_a0;
        iVar6 = *(int *)(*piVar4 + 0x44) - iVar5 >> 2;
        if (iVar6 != 0) {
          if (iVar6 == 0) {
LAB_108a1d3f:
                    /* WARNING: Subroutine does not return */
            FUN_10870450();
          }
          do {
            piStack_c4 = *(int **)(iVar5 + uVar3 * 4);
            uVar7 = FUN_11669730();
            piStack_c8 = (int *)FUN_10254130(uVar7);
            cVar2 = FUN_116698a0();
            if (cVar2 != '\0') {
              piVar9 = piStack_c4;
            }
            if (((piStack_c4 != (int *)0x0) && (piStack_c8 != (int *)0x0)) && (piVar9 != (int *)0x0)
               ) {
              piVar4 = (int *)0x0;
              iVar5 = 0;
              uStack_b8 = 0;
              FUN_11a98de0(&uStack_b8,piStack_bc);
              uVar7 = FUN_11669730();
              FUN_104d1550(&DAT_11dbb0b4,uVar7);
              uVar7 = (**(code **)(s_PACKITEM_CLASS_NAME_11dd3c4c._0_4_ + 0xc))();
              FUN_104d1440("count",uVar7);
              uVar7 = (**(code **)(*piVar9 + 0x14))();
              ppiStack_d0 = (int **)0x0;
              CPet__SetName(uVar7);
              piStack_54 = (int *)auStack_64;
              auStack_64[0] = 0;
              piStack_50 = piStack_54;
              FUN_100e5aa0(piStack_54);
              FUN_104d1670(&DAT_11dbac80,piStack_54);
              if ((piStack_54 != &iStack_68) && (piStack_54 != (int *)0x0)) {
                FUN_10c3d5d0(piStack_54);
              }
              if (piVar1 != (int *)0x0) {
                FUN_10c3da30(piVar1);
              }
              uVar7 = (**(code **)(*piVar9 + 0x24))();
              FUN_104d1670("asset",uVar7);
              FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar5 + 0x34));
              uVar7 = (**(code **)(*piVar4 + 0x18))();
              FUN_104d1550("m_nItemLevel",uVar7);
              FUN_104d1550("m_typeNormal",*(undefined4 *)(iVar5 + 0x38));
              FUN_104d1550("m_typeSub",*(undefined4 *)(iVar5 + 0x3c));
              uVar7 = FUN_116693d0();
              FUN_104d1550("m_nBindType",uVar7);
              FUN_104d1550("m_nExpireTime",*(undefined4 *)(iVar5 + 0xb8));
              uVar7 = (**(code **)(*piVar9 + 0x2c))();
              FUN_104d1550("m_nRareType",uVar7);
              cVar2 = FUN_1166e250();
              if (cVar2 != '\0') {
                FUN_104d15e0("instanceChannel",1);
                FUN_104d14d0("instanceChannelNumber");
                FUN_104d15e0("instanceChannel",1);
                FUN_104d1550("instanceChannelType",8);
              }
              (**(code **)(*piVar10 + 0x3c))(unaff_EBX,&ppiStack_d0);
              if ((uStack_b8._4_4_ >> 6 & 1) != 0) {
                (**(code **)(*(int *)uStack_b8 + 8))(&uStack_b8,piVar10);
              }
            }
            uVar3 = uVar3 + 1;
            iVar5 = *piStack_a0;
          } while (uVar3 < (uint)(piStack_a0[1] - iVar5 >> 2));
        }
        iVar5 = FUN_10540d00(uStack_9c);
        if (iVar5 != 0) {
          for (iVar6 = *(int *)(iVar5 + 0x164); iVar6 != *(int *)(iVar5 + 0x168);
              iVar6 = iVar6 + 0x114) {
            if (*(int *)(iVar6 + 4) == 0xbc9) {
              uStack_b8 = CONCAT44(*(undefined4 *)(iVar6 + 0xfc),"Param2");
              piStack_bc = (int *)0x108a1cab;
              FUN_104d1550();
              break;
            }
          }
        }
        if (((uint)piStack_54 >> 6 & 1) != 0) {
          uStack_b8 = CONCAT44(piStack_50,&piStack_58);
          piStack_bc = (int *)0x108a1ccb;
          (**(code **)(*piStack_58 + 8))();
          piStack_58 = (int *)0x0;
        }
        piStack_54 = (int *)0x0;
        if ((uStack_6c >> 6 & 1) != 0) {
          uStack_b8 = CONCAT44(iStack_68,&piStack_70);
          piStack_bc = (int *)0x108a1cf8;
          (**(code **)(*piStack_70 + 8))();
          piStack_70 = (int *)0x0;
        }
        uStack_6c = 0;
      }
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      uStack_b8 = CONCAT44(uStack_38,&local_40);
      piStack_bc = (int *)0x108a1d25;
      (**(code **)(*local_40 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e6190 @ 108e6190  size=712 ===== */
// strings:
//   "FL_SETTLEMENT_ITEM_VO_CLASS_NAME"
//   "ItemID"
//   "itemIconPathName"
//   "itemList"

/* [RE-AUTO c0]
   strings:
     ""FL_SETTLEMENT_ITEM_VO_CLASS_NAME""
     ""ItemID""
     ""itemIconPathName""
     ""itemList"" */

void FUN_108e6190(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_EDI;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puStack_150;
  int iStack_14c;
  int iStack_13c;
  int local_138;
  int local_134;
  undefined4 *local_130;
  int iStack_12c;
  uint uStack_124;
  int *piStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 auStack_110 [5];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int *piStack_e8;
  byte bStack_e4;
  undefined4 uStack_e0;
  undefined4 auStack_bf [10];
  undefined4 auStack_97 [34];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_13c;
  local_130 = param_1;
  local_138 = param_4;
  local_134 = param_2;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      iStack_14c = param_1[2];
      puStack_150 = param_1;
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    iVar3 = DAT_1202e818;
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_14c = 0x108e622e;
    iStack_13c = (**(code **)(**(int **)(*(int *)(iVar3 + 0xd0) + 0x90) + 0xb4))();
    if (iStack_13c != 0) {
      iStack_14c = 0x108e6250;
      cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))();
      if (((cVar1 != '\0') && (iStack_12c = *(int *)(DAT_1202e818 + 0xd0), iStack_12c != 0)) &&
         ((*(int *)(iStack_13c + 0x2d1c) != 0 && (param_5 != 0)))) {
        iStack_14c = local_138;
        puStack_150 = (undefined4 *)0x108e6296;
        FUN_104f4330();
        puStack_150 = &uStack_fc;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_114 = 0;
        auStack_110[0] = 0;
        FUN_11a98a70();
        piVar6 = (int *)(uint)((bStack_e4 & 0x8f) == 10);
        cVar1 = (**(code **)(*piStack_e8 + 0x10))
                          (uStack_e0,"FL_SETTLEMENT_ITEM_VO_CLASS_NAME",&uStack_118,piVar6);
        if (((cVar1 != '\0') && (((byte)uStack_124 & 0x8f) == 6)) &&
           (piVar6 = piStack_120, (uStack_124 >> 6 & 1) != 0)) {
          piVar6 = (int *)*piStack_120;
        }
        puVar4 = (undefined4 *)0x2d9;
        puVar5 = &uStack_e0;
        for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
        *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
        iVar3 = 0;
        do {
          iStack_13c = 0;
          FUN_11a98de0(&stack0xfffffec0,piVar6,0,0);
          iVar2 = FUN_10254130(auStack_bf[iVar3]);
          if (iVar2 != 0) {
            FUN_104d1550("ItemID",auStack_bf[iVar3]);
            FUN_104d1550(&DAT_11dbdc0c,auStack_97[iVar3]);
            FUN_104d1670("itemIconPathName",*(undefined4 *)(iVar2 + 0xb4));
            (**(code **)(*piStack_120 + 0x3c))(uStack_118,&puStack_150);
          }
          FUN_104d7c10();
          iVar3 = iVar3 + 1;
        } while (iVar3 < 10);
        FUN_104d12b0("itemList",auStack_110);
        if (((uint)unaff_EDI[1] >> 6 & 1) != 0) {
          (**(code **)(*(int *)*unaff_EDI + 8))(unaff_EDI,unaff_EDI[2]);
          *unaff_EDI = 0;
        }
        unaff_EDI[1] = 2;
        *(undefined1 *)(unaff_EDI + 2) = 1;
        FUN_104d7c10();
        FUN_104d7c10();
        FUN_104d7c10();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108e7140 @ 108e7140  size=1477 ===== */
// calls: CPet::SetName, __allmul
// strings:
//   "asset"
//   "count"
//   "m_nItemLevel"
//   "m_typeNormal"
//   "m_typeSub"
//   "instanceChannel"
//   "instanceChannelNumber"
//   "instanceChannelType"

/* [RE-AUTO c0]
   calls: __allmul
   strings:
     ""asset""
     ""count""
     ""m_nItemLevel""
     ""m_typeNormal""
     ""m_typeSub""
     ""instanceChannel""
     ""instanceChannelNumber""
     ""instanceChannelType"" */

void FUN_108e7140(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int **ppiVar8;
  int *unaff_EBX;
  int unaff_EDI;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_bc [8];
  int *local_b4;
  uint local_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_98;
  int *piStack_94;
  undefined1 *puStack_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int *piStack_58;
  int *local_54;
  int local_50;
  int *local_4c;
  uint uStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [24];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_bc;
  local_4c = param_1;
  local_b0 = param_2;
  uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70);
  if ((((param_1 != (int *)0x0) &&
       (uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70), param_2 != 0)) &&
      (uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70), param_3 != 0)) &&
     ((uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70), param_4 != 0 &&
      (uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70), param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
      *param_1 = 0;
    }
    param_1[1] = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar3 = *(uint *)(param_4 + 4) & 0x8f;
    if ((uVar3 == 3) || (local_b4 = (int *)0xdeadbeaf, uVar3 == 4)) {
      local_b4 = *(int **)(param_4 + 8);
    }
    uVar3 = *(uint *)(param_4 + 0x1c) & 0x8f;
    local_50 = (int)local_b4 >> 0x1f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      iStack_ac = *(int *)(param_4 + 0x20);
    }
    else {
      iStack_ac = -0x21524151;
    }
    local_54 = local_b4;
    FUN_104f4330(param_4 + 0x30);
    FUN_104f4330(param_4 + 0x48);
    iVar5 = *(int *)(DAT_1202e818 + 0xd0);
    if (iVar5 != 0) {
      iVar4 = (**(code **)(**(int **)(iVar5 + 0x90) + 0xb4))();
      if (iVar4 != 0) {
        iVar4 = FUN_104f4230(local_b4);
        if (iVar4 != 0) {
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x140) + 8))();
          for (piVar9 = *(int **)(iVar5 + 0xfc);
              uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70),
              piVar9 != *(int **)(iVar5 + 0x100); piVar9 = piVar9 + 0xd) {
            if (*piVar9 == iStack_ac) {
              local_b4 = piVar9 + 7;
              uStack_70 = CONCAT44(uStack_70._4_4_,(int *)uStack_70);
              if (local_b4 != (int *)0x0) {
                if ((((byte)uStack_70._4_4_ & 0x8f) == 9) &&
                   (iVar5 = (**(code **)(*(int *)uStack_70 + 0x28))(uStack_68), iVar5 != 0)) {
                  uVar3 = 0;
                  iVar5 = (**(code **)(*(int *)uStack_70 + 0x28))(uStack_68);
                  if (iVar5 != 0) {
                    do {
                      ppiStack_40 = (int **)0x0;
                      uStack_3c = 0;
                      (**(code **)(*(int *)uStack_70 + 0x30))(uStack_68,uVar3,&ppiStack_40);
                      if (((uStack_48 & 0x8f) == 3) ||
                         (ppiVar8 = (int **)0xdeadbeaf, (uStack_48 & 0x8f) == 4)) {
                        ppiVar8 = ppiStack_44;
                      }
                      auStack_30[uVar3] = ppiVar8;
                      if ((uStack_48 >> 6 & 1) != 0) {
                        (**(code **)(*local_4c + 8))(&local_4c,ppiStack_44);
                      }
                      uVar3 = uVar3 + 1;
                      uVar6 = (**(code **)(*piStack_7c + 0x28))(uStack_74);
                    } while (uVar3 < uVar6);
                  }
                }
                if (((byte)uStack_84 & 0x8f) == 9) {
                  iVar5 = (**(code **)(*piStack_88 + 0x28))(uStack_80);
                  if (iVar5 != 0) {
                    uVar3 = 0;
                    iVar5 = (**(code **)(*piStack_88 + 0x28))(uStack_80);
                    if (iVar5 != 0) {
                      puStack_8c = auStack_24 + -(int)local_b4;
                      piVar9 = local_b4;
                      do {
                        uStack_a8 = 0;
                        uStack_a4 = 0;
                        uVar6 = uVar3;
                        (**(code **)(*piStack_88 + 0x30))(uStack_80,uVar3,&uStack_a8);
                        iVar5 = FUN_10254130(*(undefined4 *)(iStack_98 + (int)piVar9));
                        if (iVar5 != 0) {
                          FUN_104d1790(&DAT_11dbac80,iVar5 + 0x14);
                          FUN_104d1670("asset",*(undefined4 *)(iVar5 + 0xb4));
                          FUN_104d1550(&DAT_11dbb0b4,*(undefined4 *)(iStack_98 + (int)piVar9));
                          FUN_104d1550("count",1);
                          FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(iVar5 + 0x34));
                          FUN_104d1550("m_nItemLevel",*(undefined4 *)(iVar5 + 0x40));
                          FUN_104d1550("m_typeNormal",*(undefined4 *)(iVar5 + 0x38));
                          FUN_104d1550("m_typeSub",*(undefined4 *)(iVar5 + 0x3c));
                          FUN_104d15e0("instanceChannel",0);
                        }
                        piVar1 = (int *)*piVar9;
                        if (piVar1 != (int *)0x0) {
                          uVar7 = (**(code **)(*piVar1 + 0x14))();
                          CPet__SetName(uVar7);
                          FUN_104d1790(&DAT_11dbac80,&stack0xffffff38);
                          if (unaff_EDI != 0) {
                            FUN_10c3da30(unaff_EDI);
                          }
                          uVar7 = (**(code **)(*piVar1 + 0x24))();
                          unaff_EDI = 0;
                          CPet__SetName(uVar7);
                          ppiStack_44 = &local_54;
                          local_54 = (int *)((uint)local_54 & 0xffffff00);
                          ppiStack_40 = ppiStack_44;
                          FUN_100e5aa0(ppiStack_44);
                          FUN_104d1670("asset",ppiStack_44);
                          if ((ppiStack_44 != &piStack_58) && (ppiStack_44 != (int **)0x0)) {
                            FUN_10c3d5d0(ppiStack_44);
                          }
                          lVar2 = uStack_70;
                          if (uVar6 != 0) {
                            FUN_10c3da30(uVar6);
                            lVar2 = uStack_70;
                          }
                          uStack_70._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
                          lVar10 = __allmul(uStack_70._4_4_,uStack_68,100,0);
                          uStack_70 = lVar2;
                          uStack_70 = lVar10 + (int)uVar3;
                          FUN_104d14d0("instanceChannelNumber");
                          FUN_104d15e0("instanceChannel",1);
                          FUN_104d1550("instanceChannelType",7);
                          piVar9 = unaff_EBX;
                        }
                        if ((local_b0 >> 6 & 1) != 0) {
                          (**(code **)(*local_b4 + 8))(&local_b4,iStack_ac);
                        }
                        piVar9 = piVar9 + 1;
                        uVar3 = uVar3 + 1;
                        uVar6 = (**(code **)(*piStack_94 + 0x28))(puStack_8c);
                        param_1 = local_4c;
                        unaff_EBX = piVar9;
                      } while (uVar3 < uVar6);
                    }
                  }
                }
              }
              break;
            }
          }
          if (((uint)param_1[1] >> 6 & 1) != 0) {
            (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
            *param_1 = 0;
          }
          param_1[1] = 2;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
    }
    if ((uStack_84 >> 6 & 1) != 0) {
      (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
      piStack_88 = (int *)0x0;
    }
    uStack_84 = 0;
    if (((uint)((ulonglong)uStack_70 >> 0x26) & 1) != 0) {
      (**(code **)(*(int *)uStack_70 + 8))(&uStack_70,uStack_68);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10916ab0 @ 10916ab0  size=4074 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "THOUSANDSLAYERSUPPLY_MEMBERVO_CLASSNAME"
//   "THOUSANDSLAYERSUPPLY_ITEMVO_CLASSNAME"
//   "HRLevel"
//   "state"
//   "bIsLeader"
//   "nBestHistoryTime"
//   "nAttNum"
//   "nDefNum"
//   "teammemberInfoArr"
//   "nCurUseTime"
//   "curLayer"
//   "activationSupplyLevelID"
//   "count"
//   "unSelSupplyArr"
//   "selSupplyArr"
//   "remainTime"

/* WARNING: Removing unreachable block (ram,0x10917393) */
/* WARNING: Removing unreachable block (ram,0x109170bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""THOUSANDSLAYERSUPPLY_MEMBERVO_CLASSNAME""
     ""THOUSANDSLAYERSUPPLY_ITEMVO_CLASSNAME""
     ""HRLevel""
     ""state""
     ""bIsLeader""
     ""nBestHistoryTime""
     ""nAttNum""
     ""nDefNum""
     ""teammemberInfoArr""
     ""nCurUseTime"" */

void __thiscall
FUN_10916ab0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int **param_5,
            int param_6)

{
  int *piVar1;
  char cVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  int unaff_EDI;
  uint uVar10;
  char *pcVar11;
  int **ppiStack_168;
  int **ppiStack_164;
  int *piStack_160;
  int **ppiStack_15c;
  int **ppiStack_158;
  int **ppiStack_154;
  int *piStack_148;
  int **ppiStack_144;
  int **local_140;
  int *local_13c;
  int iStack_138;
  uint uStack_134;
  int **ppiStack_130;
  int *piStack_12c;
  uint uStack_128;
  int **ppiStack_124;
  int *piStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int **ppiStack_104;
  int **ppiStack_100;
  int iStack_fc;
  uint uStack_f8;
  int **ppiStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int *piStack_e8;
  uint uStack_e4;
  int **ppiStack_e0;
  undefined1 auStack_dc [8];
  int *piStack_d4;
  int *piStack_d0;
  uint uStack_cc;
  int **ppiStack_c8;
  int *piStack_c0;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int *piStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  uint uStack_84;
  int **ppiStack_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  int **ppiStack_74;
  uint *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int *piStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  int **ppiStack_38;
  int **ppiStack_34;
  int **ppiStack_30;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)&piStack_148;
  local_13c = param_3;
  local_140 = param_5;
  if (((param_6 == 1) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) {
    ppiStack_154 = (int **)0x10916b11;
    uStack_134 = (**(code **)(*piVar6 + 0xb4))();
    if (uStack_134 != 0) {
      ppiStack_154 = local_140;
      ppiStack_158 = (int **)0x10916b2a;
      FUN_104f4330();
      ppiStack_15c = (int **)&iStack_ec;
      iStack_ec = 0;
      piStack_e8 = (int *)0x0;
      ppiStack_144 = (int **)CONCAT31(ppiStack_144._1_3_,((byte)piStack_108 & 0x8f) == 10);
      uStack_134 = 0;
      ppiStack_158 = ppiStack_144;
      piStack_160 = (int *)0x11dd9834;
      ppiStack_164 = ppiStack_104;
      ppiStack_168 = (int **)0x10916b6f;
      cVar2 = (**(code **)(*piStack_10c + 0x10))();
      if (((cVar2 != '\0') && (((byte)uStack_f8 & 0x8f) == 6)) &&
         (ppiStack_144 = ppiStack_f4, (uStack_f8 >> 6 & 1) != 0)) {
        ppiStack_144 = (int **)*ppiStack_f4;
      }
      piVar6 = &iStack_fc;
      piStack_120 = (int *)0x0;
      ppiStack_154 = (int **)CONCAT31(ppiStack_154._1_3_,((byte)uStack_118 & 0x8f) == 10);
      ppiStack_168 = ppiStack_154;
      pcVar11 = "THOUSANDSLAYERSUPPLY_ITEMVO_CLASSNAME";
      iVar8 = iStack_114;
      cVar2 = (**(code **)(*piStack_11c + 0x10))();
      if (((cVar2 != '\0') && (((byte)piStack_108 & 0x8f) == 6)) &&
         (ppiStack_130 = ppiStack_104, ((uint)piStack_108 >> 6 & 1) != 0)) {
        ppiStack_130 = (int **)*ppiStack_104;
      }
      ppiStack_f4 = (int **)0x0;
      uStack_f0 = 0;
      FUN_11a98a70(&ppiStack_f4);
      if (((DAT_1202e818 == 0) || (iVar4 = *(int *)(DAT_1202e818 + 0xd0), iVar4 == 0)) ||
         (*(int *)(iVar4 + 0xcc) < 1)) {
        cVar2 = (**(code **)((int)*ppiStack_15c + 0x394))();
        if (cVar2 == '\0') {
          unaff_EDI = 0;
          FUN_11a98de0(&stack0xfffffeb0,ppiStack_158,0,0);
          FUN_104d1440(&DAT_11dbb0b4,piVar6[1]);
          (**(code **)(*piVar6 + 0xb8))(&ppiStack_80);
          iVar8 = FUN_100e5b40();
          FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar8 + 0x14));
          if ((puStack_70 != &uStack_84) && (puStack_70 != (uint *)0x0)) {
            FUN_10c3d5d0(puStack_70);
          }
          uVar5 = CPlayer__GetHuntRankOrCount();
          FUN_104d1550(&DAT_11dccf88,uVar5);
          uVar5 = FUN_1025b060();
          FUN_104d1550("HRLevel",uVar5);
          FUN_104d15e0("state",0);
          FUN_104d15e0("bIsLeader",0);
          iVar4 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
          iVar8 = iVar4 >> 0x1f;
          if (iVar4 / 0x30 + iVar8 != iVar8) {
            uVar10 = 0;
            ppiVar3 = *(int ***)(param_1 + 0x40);
            do {
              if (*ppiVar3 == *(int **)(pcVar11 + 4)) {
                FUN_104d1550("nAttNum",*(undefined4 *)(*(int *)(param_1 + 0x40) + 4 + uVar10 * 0x30)
                            );
                FUN_104d1550("nDefNum",*(undefined4 *)(*(int *)(param_1 + 0x40) + 8 + uVar10 * 0x30)
                            );
                FUN_104d1550("nBestHistoryTime",
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c + uVar10 * 0x30));
                break;
              }
              ppiVar3 = ppiVar3 + 0xc;
              uVar10 = uVar10 + 1;
              ppiStack_168 = ppiVar3;
            } while (uVar10 < (uint)((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40)) / 0x30));
          }
          (**(code **)(*piStack_10c + 0x3c))(ppiStack_104,&ppiStack_164);
        }
        else {
          iVar4 = (**(code **)((int)*ppiStack_15c + 0x3a4))();
          if (iVar4 != 0) {
            piVar6 = (int *)(**(code **)((int)*ppiStack_15c + 0x3a4))();
            iVar4 = (**(code **)(*piVar6 + 0x88))();
            if (iVar4 != 0) {
              piVar6 = (int *)(**(code **)((int)*ppiStack_15c + 0x3a4))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x88))();
              iStack_114 = (**(code **)(*piVar6 + 0xc))();
              ppiStack_154 = (int **)0x0;
              piVar6 = (int *)(**(code **)((int)*ppiStack_15c + 0x3a4))();
              iVar4 = (**(code **)(*piVar6 + 0x14))();
              if (iVar4 != 0) {
                do {
                  piVar6 = (int *)(**(code **)((int)*ppiStack_15c + 0x3a4))();
                  local_13c = (int *)(**(code **)(*piVar6 + 0xb8))(ppiStack_154);
                  if (local_13c != (int *)0x0) {
                    ppiStack_154 = (int **)0x0;
                    unaff_EDI = 0;
                    FUN_11a98de0(&ppiStack_154,ppiStack_15c,0,0);
                    uVar5 = (**(code **)(*unaff_ESI + 0xc))();
                    FUN_104d1440(&DAT_11dbb0b4,uVar5);
                    (**(code **)(*unaff_ESI + 0x28))(&uStack_84);
                    iVar4 = FUN_100e5b40();
                    FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar4 + 0x14));
                    if ((ppiStack_74 != &piStack_88) && (ppiStack_74 != (int **)0x0)) {
                      FUN_10c3d5d0(ppiStack_74);
                    }
                    uVar5 = (**(code **)(_DAT_00000000 + 0x30))();
                    FUN_104d1440(&DAT_11dccf88,uVar5);
                    uVar5 = (**(code **)(_DAT_00000000 + 0x14))();
                    FUN_104d1550("HRLevel",uVar5);
                    FUN_104d15e0("state",0);
                    piVar6 = (int *)(**(code **)(_DAT_00000000 + 0xc))();
                    FUN_104d15e0("bIsLeader",piStack_12c == piVar6);
                    uVar10 = 0;
                    iVar9 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
                    iVar4 = iVar9 >> 0x1f;
                    if (iVar9 / 0x30 + iVar4 != iVar4) {
                      iVar4 = 0;
                      do {
                        iVar9 = *(int *)(param_1 + 0x40);
                        iVar7 = (**(code **)(_DAT_00000000 + 0xc))();
                        if (*(int *)(iVar9 + iVar4) == iVar7) {
                          FUN_104d1550("nAttNum",
                                       *(undefined4 *)(*(int *)(param_1 + 0x40) + 4 + uVar10 * 0x30)
                                      );
                          FUN_104d1550("nDefNum",
                                       *(undefined4 *)(*(int *)(param_1 + 0x40) + 8 + uVar10 * 0x30)
                                      );
                          break;
                        }
                        if (*(int *)(*(int *)(param_1 + 0x40) + iVar4) == *(int *)(iVar8 + 4)) {
                          FUN_104d1550("nBestHistoryTime",
                                       *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c + iVar4));
                        }
                        uVar10 = uVar10 + 1;
                        iVar4 = iVar4 + 0x30;
                      } while (uVar10 < (uint)((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40))
                                              / 0x30));
                    }
                    (**(code **)(*piStack_110 + 0x3c))(piStack_108,&ppiStack_168);
                  }
                  ppiStack_158 = (int **)((int)ppiStack_158 + 1);
                  piVar6 = (int *)(**(code **)(*piStack_160 + 0x3a4))();
                  ppiVar3 = (int **)(**(code **)(*piVar6 + 0x14))();
                } while (ppiStack_154 < ppiVar3);
              }
            }
          }
        }
      }
      else if (*(int **)(iVar4 + 0x90) != (int *)0x0) {
        ppiStack_168 = (int **)0x0;
        (**(code **)(**(int **)(iVar4 + 0x90) + 0xac))(auStack_dc);
        cVar2 = FUN_113a58c0();
        while (cVar2 == '\0') {
          local_13c = (int *)FUN_113a5930();
          if ((local_13c != (int *)0x0) &&
             (ppiVar3 = (int **)(**(code **)(*local_13c + 0xa8))(), ppiVar3 == (int **)0x0)) {
            ppiStack_154 = ppiVar3;
            FUN_11a98de0(&ppiStack_154,ppiStack_15c,0);
            FUN_104d1440(&DAT_11dbb0b4,unaff_ESI[1]);
            (**(code **)(*unaff_ESI + 0xb8))(&uStack_84);
            iVar4 = FUN_100e5b40();
            FUN_104d1670(&DAT_11dbac80,*(undefined4 *)(iVar4 + 0x14));
            if ((ppiStack_74 != &piStack_88) && (ppiStack_74 != (int **)0x0)) {
              FUN_10c3d5d0(ppiStack_74);
            }
            uVar5 = CPlayer__GetHuntRankOrCount();
            FUN_104d1550(&DAT_11dccf88,uVar5);
            uVar5 = FUN_1025b060();
            FUN_104d1550("HRLevel",uVar5);
            FUN_104d15e0("state",0);
            FUN_104d15e0("bIsLeader",ppiVar3 == (int **)0x0);
            uVar10 = 0;
            iVar9 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
            iVar4 = iVar9 >> 0x1f;
            if (iVar9 / 0x30 + iVar4 != iVar4) {
              iVar4 = 0;
              do {
                iVar9 = *(int *)(param_1 + 0x40);
                if (*(int *)(iVar9 + iVar4) == _DAT_00000004) {
                  FUN_104d1550("nAttNum",*(undefined4 *)(iVar9 + 4 + uVar10 * 0x30));
                  FUN_104d1550("nDefNum",
                               *(undefined4 *)(*(int *)(param_1 + 0x40) + 8 + uVar10 * 0x30));
                  break;
                }
                if (*(int *)(iVar9 + iVar4) == *(int *)(iVar8 + 4)) {
                  FUN_104d1550("nBestHistoryTime",*(undefined4 *)(iVar9 + 0x2c + iVar4));
                }
                iVar4 = iVar4 + 0x30;
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40)) / 0x30)
                      );
            }
            (**(code **)(*piStack_110 + 0x3c))(piStack_108,&ppiStack_168);
            FUN_104d7c10();
            unaff_EDI = 0;
          }
          FUN_113a58d0();
          cVar2 = FUN_113a58c0();
        }
        FUN_113a5790();
      }
      (*(code *)(*ppiStack_130)[5])
                (uStack_128,"teammemberInfoArr",&uStack_f8,((byte)piStack_12c & 0x8f) == 10);
      FUN_104d1550("nCurUseTime",*(undefined4 *)(param_1 + 0x2c));
      FUN_104d1550("curLayer",*(undefined4 *)(param_1 + 0x20));
      FUN_104d1550("activationSupplyLevelID",*(undefined4 *)(param_1 + 0x24));
      iStack_138 = FUN_10916770();
      if (iStack_138 != 0) {
        ppiStack_154 = &piStack_88;
        piStack_88 = (int *)0x0;
        uStack_84 = 0;
        ppiStack_158 = (int **)0x1091746b;
        FUN_11a98a70();
        uStack_134 = 0;
        if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3 != 0) {
          do {
            ppiStack_158 = (int **)0x0;
            ppiStack_15c = (int **)0x0;
            piStack_160 = piStack_110;
            ppiStack_164 = &piStack_12c;
            piStack_12c = (int *)0x0;
            uStack_128 = 0;
            ppiStack_168 = (int **)0x109174a8;
            FUN_11a98de0();
            ppiStack_168 = *(int ***)(*(int *)(param_1 + 0x4c) + (int)ppiStack_144 * 8);
            FUN_104d1440(&DAT_11dbb0b4);
            FUN_104d1550("count",*(undefined4 *)
                                  (*(int *)(param_1 + 0x4c) + 4 + (int)ppiStack_144 * 8));
            ppiStack_154 = (int **)FUN_10254130(*(undefined4 *)
                                                 (*(int *)(param_1 + 0x4c) + (int)ppiStack_144 * 8))
            ;
            if (ppiStack_154 != (int **)0x0) {
              ppiStack_168 = (int **)ppiStack_154[0x2d];
              FUN_104d1670(&DAT_11dbf768);
              ppiStack_168 = &piStack_44;
              piStack_44 = (int *)((uint)piStack_44 & 0xffffff00);
              ppiStack_34 = ppiStack_168;
              ppiStack_30 = ppiStack_168;
              FUN_100e5aa0();
              FUN_104d1670(&DAT_11dbac80,ppiStack_34);
              if ((ppiStack_34 != &piStack_48) && (ppiStack_34 != (int **)0x0)) {
                FUN_10c3d5d0(ppiStack_34);
              }
              FUN_116bd4d0();
              ppiStack_38 = &piStack_48;
              piStack_48 = (int *)((uint)piStack_48 & 0xffffff00);
              ppiStack_34 = ppiStack_38;
              FUN_100e5aa0(ppiStack_38);
              FUN_104d1670(&DAT_11dc9d98,ppiStack_38);
              if ((ppiStack_30 != &piStack_44) && (ppiStack_30 != (int **)0x0)) {
                ppiStack_168 = ppiStack_30;
                FUN_10c3d5d0();
              }
            }
            ppiStack_168 = &local_13c;
            (**(code **)(*piStack_9c + 0x3c))(uStack_94);
            if ((uStack_128 >> 6 & 1) != 0) {
              ppiStack_15c = &piStack_12c;
              ppiStack_158 = ppiStack_124;
              piStack_160 = (int *)0x10917613;
              (**(code **)(*piStack_12c + 8))();
            }
            uStack_134 = uStack_134 + 1;
          } while (uStack_134 < (uint)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3));
        }
        ppiStack_158 = (int **)(uint)(((byte)piStack_108 & 0x8f) == 10);
        ppiStack_15c = (int **)&iStack_8c;
        piStack_160 = (int *)0x11dd97e0;
        ppiStack_164 = ppiStack_104;
        ppiStack_168 = (int **)0x10917659;
        (**(code **)(*piStack_10c + 0x14))();
        ppiStack_168 = &piStack_b4;
        piStack_b4 = (int *)0x0;
        uStack_b0 = 0;
        FUN_11a98a70();
        ppiStack_158 = (int **)(param_1 + 0x30);
        ppiStack_144 = (int **)0x1;
        do {
          ppiStack_104 = (int **)FUN_11957cc0(ppiStack_144);
          if (ppiStack_104 != (int **)0x0) {
            piStack_48 = (int *)0x0;
            piStack_44 = (int *)0x0;
            FUN_11a98a70(&piStack_48);
            FUN_10918300(piStack_108);
            iVar8 = 0;
            for (piVar6 = piStack_d4; piVar6 != piStack_d0; piVar6 = piVar6 + 5) {
              iStack_90 = *piVar6;
              iStack_8c = piVar6[1];
              piStack_88 = (int *)piVar6[2];
              uStack_84 = piVar6[3];
              piVar1 = piVar6 + 4;
              if ((unaff_EDI < 1) || ((iVar8 <= unaff_EDI && (unaff_EDI <= iVar8 + *piVar1)))) {
                piStack_148 = (int *)0x0;
                ppiStack_144 = (int **)0x0;
                FUN_11a98de0(&piStack_148,piStack_12c,0,0);
                uVar5 = uStack_94;
                piVar6 = piStack_a0;
                if ((int)piStack_a0 < 1) {
                  FUN_104d1550(&DAT_11dbb0b4,uStack_94);
                  FUN_104d1550("count",1);
                  iVar8 = FUN_10254130(uVar5);
                }
                else {
                  FUN_104d1550(&DAT_11dbb0b4,piStack_a0);
                  FUN_104d1550("count",piStack_9c);
                  iVar8 = FUN_10254130(piVar6);
                }
                if (iVar8 != 0) {
                  FUN_104d1670(&DAT_11dbf768,*(undefined4 *)(iVar8 + 0xb4));
                  auStack_78[0] = 0;
                  puStack_68 = auStack_78;
                  puStack_64 = puStack_68;
                  FUN_100e5aa0(puStack_68);
                  FUN_104d1670(&DAT_11dbac80,puStack_68);
                  if ((puStack_68 != auStack_7c) && (puStack_68 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_68);
                  }
                  FUN_116bd4d0();
                  puStack_6c = auStack_7c;
                  auStack_7c[0] = 0;
                  puStack_68 = puStack_6c;
                  FUN_100e5aa0(puStack_6c);
                  FUN_104d1670(&DAT_11dc9d98,puStack_6c);
                  if ((puStack_64 != auStack_78) && (puStack_64 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(puStack_64);
                  }
                }
                (**(code **)(*piStack_60 + 0x3c))(uStack_58,&ppiStack_158);
                if (((uint)ppiStack_144 >> 6 & 1) != 0) {
                  (**(code **)(*piStack_148 + 8))(&piStack_148,local_140);
                }
                break;
              }
              iVar8 = iVar8 + *piVar1;
            }
            piStack_160 = piStack_160 + 1;
            (**(code **)(*piStack_c0 + 0x3c))(uStack_b8,auStack_50);
            if (uStack_cc != 0) {
              FUN_10c3d5d0(uStack_cc);
            }
            if (((uint)piStack_44 >> 6 & 1) != 0) {
              (**(code **)(*piStack_48 + 8))(&piStack_48,uStack_40);
            }
          }
          ppiStack_144 = (int **)((int)ppiStack_144 + 1);
        } while ((int)ppiStack_144 < 5);
        (**(code **)(*piStack_120 + 0x14))
                  (uStack_118,"selSupplyArr",&uStack_b8,((byte)piStack_11c & 0x8f) == 10);
        FUN_104d1550("remainTime",piStack_160[5]);
        if (((uint)piStack_9c >> 6 & 1) != 0) {
          ppiStack_158 = &piStack_a0;
          ppiStack_154 = ppiStack_98;
          ppiStack_15c = (int **)0x109179c5;
          (**(code **)(*piStack_a0 + 8))();
          piStack_a0 = (int *)0x0;
        }
        piStack_9c = (int *)0x0;
        if ((uStack_84 >> 6 & 1) != 0) {
          ppiStack_158 = &piStack_88;
          ppiStack_154 = ppiStack_80;
          ppiStack_15c = (int **)0x10917a04;
          (**(code **)(*piStack_88 + 8))();
        }
      }
      if ((uStack_cc >> 6 & 1) != 0) {
        ppiStack_158 = &piStack_d0;
        ppiStack_154 = ppiStack_c8;
        ppiStack_15c = (int **)0x10917a2d;
        (**(code **)(*piStack_d0 + 8))();
        piStack_d0 = (int *)0x0;
      }
      uStack_cc = 0;
      if ((uStack_e4 >> 6 & 1) != 0) {
        ppiStack_158 = &piStack_e8;
        ppiStack_154 = ppiStack_e0;
        ppiStack_15c = (int **)0x10917a60;
        (**(code **)(*piStack_e8 + 8))();
        piStack_e8 = (int *)0x0;
      }
      uStack_e4 = 0;
      if (((uint)ppiStack_104 >> 6 & 1) != 0) {
        ppiStack_158 = &piStack_108;
        ppiStack_154 = ppiStack_100;
        ppiStack_15c = (int **)0x10917a8d;
        (**(code **)(*piStack_108 + 8))();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10929ea0 @ 10929ea0  size=142 ===== */
// strings:
//   "_PVPGetGroupData"
//   "_PVPQuitGroupSettlementUI"
//   "_IsPvpOver"

/* [RE-AUTO c0]
   strings:
     ""_PVPGetGroupData""
     ""_PVPQuitGroupSettlementUI""
     ""_IsPvpOver"" */

void FUN_10929ea0(void)

{
  undefined4 in_stack_00000010;
  int *piStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x58) != 0)) {
    FUN_104f4330(in_stack_00000010);
    FUN_104d13b0("_PVPGetGroupData",FUN_1092a5a0);
    FUN_104d13b0("_PVPQuitGroupSettlementUI",FUN_1092ab00);
    FUN_104d13b0("_IsPvpOver",FUN_1092abc0);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*piStack_24 + 8))(&piStack_24,uStack_1c);
    }
  }
  return;
}



/* ===== FUN_109770f0 @ 109770f0  size=467 ===== */
// strings:
//   "InitModel"
//   "InstanceSelect_GetElderScrollID"
//   "InstanceSelect_GetLevelEnterInvalidCondition"
//   "InstanceSelect_IsEliteLevelValid"
//   "InstanceSelect_SetKeyWord"
//   "InstanceSelect_GetKeyWord"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""InstanceSelect_GetElderScrollID""
     ""InstanceSelect_GetLevelEnterInvalidCondition""
     ""InstanceSelect_IsEliteLevelValid""
     ""InstanceSelect_SetKeyWord""
     ""InstanceSelect_GetKeyWord"" */

void FUN_109770f0(void)

{
  code *pcStack_84;
  char *pcStack_80;
  code **ppcStack_7c;
  code ***pppcStack_78;
  code *pcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code **ppcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10977124;
  FUN_100b62c0();
  pppcStack_34 = (code ***)InstanceSelectController__RegisterScriptHandlers;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10977135;
  FUN_1097a9b0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x1097714b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11ddea7f;
  pppcStack_40 = (code ***)0x11ddea60;
  pppcStack_44 = (code ***)0x1097716b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10979260;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x1097717c;
  FUN_1097a9b0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10977192;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddea5c;
  pppcStack_50 = (code ***)0x11ddea30;
  pppcStack_54 = (code ***)0x109771b2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_10979d40;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109771c3;
  FUN_1097a9b0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109771d9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11ddea2c;
  ppcStack_60 = (code **)0x11ddea0c;
  ppcStack_64 = (code **)0x109771f9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_1097a000;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x1097720a;
  FUN_1097a9b0();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x10977220;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11ddeb01;
  ppcStack_70 = (code **)0x11ddeae8;
  pcStack_74 = (code *)0x10977240;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_1097a4c0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x10977251;
  FUN_1097a9b0();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x10977267;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11ddeae5;
  pcStack_80 = "InstanceSelect_GetKeyWord";
  pcStack_84 = (code *)0x10977287;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_1097a520;
  FUN_1097a9b0(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10980ce0 @ 10980ce0  size=747 ===== */
// strings:
//   "InitModel"
//   "C2AS_GetPlayerScoreData"
//   "C2AS_GetSettlementData"
//   "C2AS_Refresh"
//   "C2AS_GetAttackInfoPlayerData"
//   "C2AS_IsMartDisable"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""C2AS_GetPlayerScoreData""
     ""C2AS_GetSettlementData""
     ""C2AS_Refresh""
     ""C2AS_GetAttackInfoPlayerData""
     ""C2AS_IsMartDisable"" */

void __fastcall FUN_10980ce0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  code *pcStack_a4;
  char *pcStack_a0;
  code **ppcStack_9c;
  code ***pppcStack_98;
  code *pcStack_94;
  code **ppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code **ppcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x10980d14;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_10980fe0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x10980d25;
  FUN_10982110();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x10980d3b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)&DAT_11ddf23b;
  pppcStack_40 = (code ***)&DAT_11ddf230;
  pppcStack_44 = (code ***)0x10980d5b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_10981130;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x10980d6c;
  FUN_10982110();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x10980d82;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11ddf1bb;
  pppcStack_50 = (code ***)0x11ddf1a4;
  pppcStack_54 = (code ***)0x10980da2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109811a0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x10980db3;
  FUN_10982110();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x10980dc9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11ddf1a2;
  pppcStack_60 = (code ***)0x11ddf18c;
  pppcStack_64 = (code ***)0x10980de9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)IpvpSettlementDataVO__Build;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x10980dfa;
  FUN_10982110();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x10980e10;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)&DAT_11ddf189;
  pppcStack_70 = (code ***)&DAT_11ddf180;
  pppcStack_74 = (code ***)0x10980e30;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_10981dc0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x10980e41;
  FUN_10982110();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x10980e57;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11ddf17c;
  ppcStack_80 = (code **)0x11ddf170;
  ppcStack_84 = (code **)0x10980e77;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  ppcStack_84 = (code **)FUN_10981e10;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x10980e88;
  FUN_10982110();
  if ((pppcStack_70 != &ppcStack_84) && (pppcStack_70 != (code ***)0x0)) {
    pppcStack_8c = pppcStack_70;
    ppcStack_90 = (code **)0x10980e9e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = &ppcStack_84;
  pppcStack_8c = (code ***)0x11ddf1fc;
  ppcStack_90 = (code **)0x11ddf1e0;
  pcStack_94 = (code *)0x10980ebe;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pcStack_94 = IpvpAttackInfoPlayerDataVO__Build;
  pppcStack_98 = (code ***)&pppcStack_8c;
  ppcStack_9c = (code **)0x10980ecf;
  FUN_10982110();
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    ppcStack_9c = ppcStack_80;
    pcStack_a0 = (char *)0x10980ee5;
    FUN_10c3d5d0();
  }
  ppcStack_84 = &pcStack_94;
  ppcStack_9c = (code **)0x11ddf1de;
  pcStack_a0 = "C2AS_IsMartDisable";
  pcStack_a4 = (code *)0x10980f05;
  ppcStack_80 = ppcStack_84;
  FUN_100b62c0();
  pcStack_a4 = FUN_10981f70;
  FUN_10982110(&ppcStack_9c);
  if ((ppcStack_90 != &pcStack_a4) && (ppcStack_90 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_90);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_10982300();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_10982350();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_109823a0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109ac660 @ 109ac660  size=787 ===== */
// calls: _time64
// strings:
//   "InitModel"
//   "SwitchViewMode"
//   "FetchInstaceData"
//   "FetchNormalKnockoutRemainSeconds"
//   "RecordNormalKnockoutStartTime"
//   "InstancePayMode"
//   "NotifyWindow"
//   "GetMonsterData"
//   "GetWeaponType"
//   "GetMaxWeaponTrialLevel"

/* [RE-AUTO c0]
   calls: _time64
   strings:
     ""InitModel""
     ""SwitchViewMode""
     ""FetchInstaceData""
     ""FetchNormalKnockoutRemainSeconds""
     ""RecordNormalKnockoutStartTime""
     ""InstancePayMode""
     ""NotifyWindow""
     ""GetMonsterData""
     ""GetWeaponType""
     ""GetMaxWeaponTrialLevel"" */

void __fastcall FUN_109ac660(int param_1)

{
  __time64_t _Var1;
  code *pcStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  code ***pppcStack_b8;
  code *pcStack_b4;
  code **ppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  undefined4 ***pppuStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***pppuStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x109ac694;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109ac990;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109ac6a5;
  FUN_109ae690();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109ac6bb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11dde3ae;
  pppcStack_40 = (code ***)0x11dde3a0;
  pppcStack_44 = (code ***)0x109ac6db;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109ac9a0;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109ac6ec;
  FUN_109ae690();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppuStack_50 = (undefined4 ***)0x109ac702;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dde39c;
  pppuStack_50 = (undefined4 ***)0x11dde38c;
  pppuStack_54 = (undefined4 ***)0x109ac722;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)WeaponTrialModel__BuildDetailVO;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109ac733;
  FUN_109ae690();
  if (((undefined4 ****)pppcStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppcStack_40 != (undefined4 ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109ac749;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppuStack_54;
  pppcStack_5c = (code ***)0x11dde498;
  pppcStack_60 = (code ***)0x11dde478;
  pppcStack_64 = (code ***)0x109ac769;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109ae190;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppuStack_6c = (undefined4 ***)0x109ac77a;
  FUN_109ae690();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    pppcStack_70 = (code ***)0x109ac790;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_6c = (undefined4 ***)0x11dde475;
  pppcStack_70 = (code ***)0x11dde458;
  pppcStack_74 = (code ***)0x109ac7b0;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)&LAB_109ae200;
  pppcStack_78 = (code ***)&pppuStack_6c;
  pppcStack_7c = (code ***)0x109ac7c1;
  FUN_109ae690();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109ac7d7;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11dde457;
  pppcStack_80 = (code ***)0x11dde448;
  pppcStack_84 = (code ***)0x109ac7f7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109ae4d0;
  pppuStack_88 = &pppcStack_7c;
  pppcStack_8c = (code ***)0x109ac808;
  FUN_109ae690();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109ac81e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11dde4d8;
  pppcStack_90 = (code ***)0x11dde4cc;
  pppcStack_94 = (code ***)0x109ac83e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109ae230;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109ac84f;
  FUN_109ae690();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x109ac865;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de1e4e;
  ppcStack_a0 = (code **)0x11de1e40;
  ppcStack_a4 = (code **)0x109ac885;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)FUN_109ae290;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109ac896;
  FUN_109ae690();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppcStack_b0 = (code **)0x109ac8ac;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)0x11de1e5d;
  ppcStack_b0 = (code **)0x11de1e50;
  pcStack_b4 = (code *)0x109ac8cc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_109ae540;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  ppcStack_bc = (code **)0x109ac8dd;
  FUN_109ae690();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x109ac8f3;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11de1e76;
  pcStack_c0 = "GetMaxWeaponTrialLevel";
  pcStack_c4 = (code *)0x109ac913;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  pcStack_c4 = FUN_109ae5a0;
  FUN_109ae690(&ppcStack_bc);
  if ((ppcStack_b0 != &pcStack_c4) && (ppcStack_b0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_b0);
  }
  _Var1 = CONCAT44(DAT_123bbccc,DAT_123bbcc8);
  if (DAT_123bbcc8 == 0 && DAT_123bbccc == 0) {
    _Var1 = _time64((__time64_t *)0x0);
  }
  *(__time64_t *)(param_1 + 0x20) = _Var1;
  FUN_11a89daa();
  return;
}



/* ===== FUN_109d0130 @ 109d0130  size=699 ===== */
// strings:
//   "m_nFactItemLevel"
//   "collumn"
//   "instanceChannelNumber"

/* [RE-AUTO c0]
   strings:
     ""m_nFactItemLevel""
     ""collumn""
     ""instanceChannelNumber"" */

void __thiscall FUN_109d0130(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 local_94;
  int *local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_78;
  int local_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  if (in_stack_00000014 == 2) {
    local_90 = (int *)0x0;
    local_84 = in_stack_00000010[3];
    local_8c = in_stack_00000010[1];
    local_88 = in_stack_00000010[2];
    local_80 = in_stack_00000010[4];
    local_74 = param_1;
    if ((local_8c >> 6 & 1) != 0) {
      local_90 = (int *)*in_stack_00000010;
      (**(code **)(*local_90 + 4))(&local_90,local_88);
    }
    uVar1 = local_8c & 0x8f;
    if (((uVar1 == 8) || (uVar1 == 9)) || (uVar1 == 10)) {
      FUN_104d4800(&DAT_11dbb0b4,&local_94);
      FUN_104d4800("m_nFactItemLevel",&local_94);
      uStack_78 = 0;
      FUN_104d4800("collumn",&uStack_78);
      local_94 = 0;
      FUN_104d4800(&DAT_11dbfe78,&local_94);
      FUN_104f4330(in_stack_00000010 + 6);
      uVar1 = uStack_44 & 0x8f;
      if (((uVar1 == 8) || (uVar1 == 9)) || (uVar1 == 10)) {
        uStack_70 = 0;
        FUN_104d4700("instanceChannelNumber",&uStack_70);
        uStack_50 = (undefined4)uStack_70;
        uStack_4c = uStack_70._4_4_;
        iVar2 = FUN_107cb5c0();
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x2d1c) != 0)) && (*(int *)(iVar2 + 0x260e8) != 0)) {
          uStack_68 = 0xffffffff;
          uStack_64 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          piVar3 = (int *)FUN_113f99c0(*(undefined4 *)(param_1 + 0x20),&uStack_68,&uStack_64,
                                       0xffffffff);
          if (piVar3 != (int *)0x0) {
            uStack_60 = FUN_11669710();
            uStack_58 = (**(code **)(*piVar3 + 0xc))();
            uStack_28 = 0;
            uStack_20 = 0;
            uStack_30 = uStack_78;
            uStack_2c = local_94;
            piVar3 = (int *)FUN_113f9bb0(uStack_78,local_94);
            if (piVar3 != (int *)0x0) {
              uStack_28 = FUN_11669710();
              uStack_20 = (**(code **)(*piVar3 + 0xc))();
              iVar4 = local_74 + 0x24;
              iVar2 = FUN_109d2e40(&uStack_50);
              if (iVar2 != iVar4) {
                FUN_109d0920(iVar2 + 0x18);
                FUN_112beb10((int)&uStack_70 + 4,auStack_34,auStack_18);
                if (iStack_14 != 0) {
                  FUN_10c3d5d0(iStack_14);
                }
              }
            }
          }
        }
      }
      if ((uStack_44 >> 6 & 1) != 0) {
        (**(code **)(*piStack_48 + 8))(&piStack_48,uStack_40);
        piStack_48 = (int *)0x0;
      }
      uStack_44 = 0;
    }
    if ((local_8c >> 6 & 1) != 0) {
      (**(code **)(*local_90 + 8))(&local_90,local_88);
    }
  }
  return;
}



/* ===== FUN_109dd700 @ 109dd700  size=158 ===== */
// calls: CMHLevelModeInfo::GetInfoMgrSingleton, CInfoManager::FindByName
// strings:
//   "CMHLevelModeInfo"

/* [RE-AUTO c0]
   calls: CMHLevelModeInfo::GetManagers
   strings:
     ""CMHLevelModeInfo"" */

undefined4 FUN_109dd700(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11de3a90;
  puVar2 = (undefined4 *)CMHLevelModeInfo__GetInfoMgrSingleton();
  puVar3 = (undefined *)*puVar2;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)CInfoManager__FindByName(&local_8,"CMHLevelModeInfo",0);
    if (puVar3 == (undefined *)0x0) {
      if ((DAT_123c9024 & 1) == 0) {
        DAT_123c9024 = DAT_123c9024 | 1;
        FUN_109dca90();
        FUN_11a8911f(&LAB_11c7c910);
      }
      puVar3 = &DAT_123c8fc4;
    }
  }
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(puVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (param_1 / *(int *)(puVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(puVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_10b601c0 @ 10b601c0  size=292 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "CloseSettmentView"
//   "CloseInstanceCountDownView"
//   "SelectInstanceId"
//   "SelectInstanceDifficulty"
//   "EnterInstance"
//   "EnterInstanceAck"
//   "RefreshEnterInstanceView"
//   "RefreshInstanceDownMessageBoxView"

/* [RE-AUTO c0]
   strings:
     ""CloseSettmentView""
     ""CloseInstanceCountDownView""
     ""SelectInstanceId""
     ""SelectInstanceDifficulty""
     ""EnterInstance""
     ""EnterInstanceAck""
     ""RefreshEnterInstanceView""
     ""RefreshInstanceDownMessageBoxView"" */

undefined4 * __fastcall FUN_10b601c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  
  *param_1 = &PTR_FUN_11cc7c48;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x3c))(&DAT_11dbd178);
  param_1[1] = piVar2;
  iVar1 = *piVar2;
  CInfoRecord__GetModelString("CloseSettmentView",extraout_ECX,FUN_10b60330);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("CloseInstanceCountDownView",extraout_ECX_00,&LAB_10b60420);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SelectInstanceId",extraout_ECX_01,FUN_10b60450);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("SelectInstanceDifficulty",extraout_ECX_02,FUN_10b60520);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("EnterInstance",extraout_ECX_03,FUN_10b60630);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("EnterInstanceAck",extraout_ECX_04,FUN_10b60af0);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString
            ("RefreshEnterInstanceView",extraout_ECX_05,CMHLevelInfo__DispatchCurrentHubMapEvent);
  (**(code **)(iVar1 + 0xf0))();
  iVar1 = *(int *)param_1[1];
  CInfoRecord__GetModelString("RefreshInstanceDownMessageBoxView",extraout_ECX_06,FUN_10b60c10);
  (**(code **)(iVar1 + 0xf0))();
  return param_1;
}



/* ===== FUN_10bc4ec0 @ 10bc4ec0  size=234 ===== */
// strings:
//   "Lobby"

/* [RE-AUTO c0]
   strings:
     ""Lobby"" */

void __fastcall FUN_10bc4ec0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x74))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))("Lobby",1);
  *(int **)(param_1 + 0x594) = piVar1;
  (**(code **)(*piVar1 + 0xc))(param_1 + 0xd4);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xd8);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xdc);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xe4);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xf0);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xe8);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 8);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0xc);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0x594) + 0xc))(param_1 + 0x24);
  return;
}



/* ===== FUN_10c75530 @ 10c75530  size=253 ===== */
// strings:
//   "HitDeathReactionsSystem"
//   "HitDeathReactionInstances"

/* [RE-AUTO c0]
   strings:
     ""HitDeathReactionsSystem""
     ""HitDeathReactionInstances"" */

void __thiscall FUN_10c75530(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_2;
  (**(code **)(*param_2 + 0x28))("HitDeathReactionsSystem");
  (**(code **)(*piVar1 + 0x18))(param_1,0xa4c,1);
  FUN_10c7a8c0(&param_2,*(undefined4 *)(param_1 + 8),param_1,piVar1);
  (**(code **)(*piVar1 + 0x28))("HitDeathReactionInstances");
  piVar2 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  (**(code **)(*piVar2 + 0x24))(&param_2);
  piVar2 = (int *)(**(code **)(*param_2 + 8))();
  while (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x1ec))();
    if (iVar3 == 1) {
      iVar3 = piVar2[0x796];
      piVar2 = (int *)piVar2[0x797];
      if (piVar2 != (int *)0x0) {
        LOCK();
        piVar2[1] = piVar2[1] + 1;
        UNLOCK();
      }
      if (iVar3 != 0) {
        FUN_10c6d660(piVar1);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar3 = piVar2[1] + -1;
        piVar2[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*piVar2 + 4))();
          LOCK();
          iVar3 = piVar2[2] + -1;
          piVar2[2] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            (**(code **)(*piVar2 + 8))();
          }
        }
      }
    }
    piVar2 = (int *)(**(code **)(*param_2 + 8))();
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x10))();
  }
  (**(code **)(*piVar1 + 0x2c))();
  (**(code **)(*piVar1 + 0x2c))();
  return;
}



/* ===== FUN_10d25350 @ 10d25350  size=427 ===== */
// strings:
//   "iInstanceID"
//   "nEnterType"

/* [RE-AUTO c0]
   strings:
     ""iInstanceID""
     ""nEnterType"" */

void __thiscall FUN_10d25350(int param_1,int *param_2)

{
  int *piVar1;
  int local_24;
  int *local_20;
  int local_14;
  int *local_10;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x20);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x28), (int *)*piVar1 != piVar1)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_10 = (int *)(float)*param_2;
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("iInstanceID",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)(float)param_2[1];
    local_14 = 4;
    (**(code **)(*piVar1 + 0x18))("nEnterType",&local_14,0);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_24 = 6;
    local_20 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_14 = 1;
    local_10 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(param_1 + 0x58),1,&local_14,&local_24);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)0x0;
    local_14 = 0;
    if (local_24 == 6) {
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_24 == 7) && (local_20 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_20);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d26f60 @ 10d26f60  size=694 ===== */
// strings:
//   "LevelMode"
//   "TriggerID"
//   "TriggerPoint"
//   "LevelID"
//   "LevelDiff"

/* [RE-AUTO c0]
   strings:
     ""LevelMode""
     ""TriggerID""
     ""TriggerPoint""
     ""LevelID""
     ""LevelDiff"" */

void __thiscall FUN_10d26f60(int param_1,int *param_2)

{
  int *piVar1;
  int local_28;
  int *local_24;
  int local_18;
  int *local_14;
  int local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x250);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 600), (int *)*piVar1 != piVar1)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_14 = (int *)(float)*param_2;
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelMode",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[1];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("TriggerID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[2];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("TriggerPoint",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[3];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[4];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelDiff",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_28 = 6;
    local_24 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_18 = 1;
    local_14 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(local_8 + 0x58),0x15,&local_18,&local_28);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)0x0;
    local_18 = 0;
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



/* ===== FUN_10d64430 @ 10d64430  size=2377 ===== */
// calls: CInfoRecord::GetModelString, GetCommandLineA, strstr
// strings:
//   "pl_LookIKFOV"
//   "pl_LookIKFadeTime"
//   "e_SplashHideMouseTime"
//   "FlashUI"
//   "splash"
//   "SplashOver"
//   "HasViewSplash"
//   "ViewSplash"
//   "-loginqq="
//   "-src=tgp"
//   "con_tconnect_qq"
//   "g_MHFC_LobbyLevel"
//   "level_avatar"
//   "create_map %s"
//   "NewLobby"
//   "_root.UIModel_Init"

/* [RE-AUTO c0]
   calls: GetCommandLineA, strstr
   strings:
     ""pl_LookIKFOV""
     ""pl_LookIKFadeTime""
     ""e_SplashHideMouseTime""
     ""FlashUI""
     ""splash""
     ""SplashOver""
     ""HasViewSplash""
     ""ViewSplash""
     ""-loginqq=""
     ""-src=tgp"" */

void __fastcall FUN_10d64430(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  LPSTR pCVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  if (DAT_1202e818 == (int *)0x0) {
    return;
  }
  if (DAT_1202e818[0xb] == 0) {
    return;
  }
  local_14 = param_1;
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d679a0,0);
      FUN_10d17870();
      FUN_10d6a050();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d65fd0,0);
      FUN_10d17870();
      FUN_10d69e70();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d66720,0);
      FUN_10d17870();
      FUN_10d69ec0();
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69ab0(param_1,FUN_10d66ea0,0);
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69ba0(param_1,FUN_10d677d0,0);
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69b50(param_1,FUN_10d66840,0);
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d66900,0);
      FUN_10d17870();
      FUN_10d69ce0();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d669d0,0);
      FUN_10d17870();
      FUN_10d69dd0();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d66a30,0);
      FUN_10d17870();
      FUN_10d69c90();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,&DAT_10d66b20,0);
      FUN_10d17870();
      FUN_10d69d80();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d66b30,0);
      FUN_10d17870();
      FUN_10d69e20();
    }
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d69790,0);
      FUN_10d17870();
      FUN_10d6a000();
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69a60(param_1,FUN_10d66c60,0);
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69b00(param_1,&LAB_10d66ca0,0);
  }
  iVar2 = FUN_10d17440();
  if (iVar2 != 0) {
    FUN_10d17440();
    iVar2 = FUN_10d17870();
    if (iVar2 != 0) {
      FUN_10d17440(param_1,FUN_10d698a0,0);
      FUN_10d17870();
      FUN_10d69d30();
    }
  }
  piVar3 = (int *)FUN_10d17440();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != 0)) {
    FUN_10d69bf0(param_1,FUN_10d657a0,0);
  }
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("pl_LookIKFOV");
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(0x42a00000);
  }
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("pl_LookIKFadeTime");
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(0x40000000);
  }
  FUN_10b8e9a0();
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_SplashHideMouseTime");
  param_1[0x39b] = 0;
  param_1[0x39c] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    fVar10 = (float10)(**(code **)(*piVar3 + 0xc))();
    param_1[0x39a] = (int)(float)fVar10;
  }
  *(undefined1 *)(param_1 + 0x35c) = 1;
  if (((int *)DAT_1202e818[0x30] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)DAT_1202e818[0x30] + 0x28))(), cVar1 != '\0')) {
    (**(code **)(*(int *)DAT_1202e818[0x30] + 0xc))();
  }
  local_1c = 0;
  local_18 = (int *)0x0;
  if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
     (FUN_104d7640("FlashUI",&local_1c), local_1c == 0)) {
    local_8 = (int *)0x0;
  }
  else {
    local_10 = 1;
    local_24 = (int *)0x0;
    local_20 = (int *)0x0;
    if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
      FUN_104d7640("FlashUI",&local_24);
    }
    local_8 = (int *)(**(code **)(*local_24 + 0x3c))("splash");
  }
  piVar3 = local_18;
  if (((local_10 & 1) != 0) && (local_10 = local_10 & 0xfffffffe, local_20 != (int *)0x0)) {
    LOCK();
    iVar2 = local_20[1] + -1;
    local_20[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*local_20 + 4))();
      LOCK();
      iVar2 = local_20[2] + -1;
      local_20[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*local_20 + 8))();
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  piVar3 = local_8;
  if ((local_8 != (int *)0x0) && (DAT_1202f9d0 == 0.0)) {
    (**(code **)(*local_8 + 100))(1);
    iVar2 = *piVar3;
    CInfoRecord__GetModelString("SplashOver",extraout_ECX,FUN_10d655e0);
    (**(code **)(iVar2 + 0xf0))();
    iVar2 = *local_8;
    CInfoRecord__GetModelString("HasViewSplash",extraout_ECX_00,FUN_10d65ea0);
    (**(code **)(iVar2 + 0xf0))();
    iVar2 = *local_8;
    CInfoRecord__GetModelString("ViewSplash",extraout_ECX_01,FUN_10d65de0);
    (**(code **)(iVar2 + 0xf0))();
  }
  iVar2 = (**(code **)(**(int **)m_pThis_exref + 100))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)m_pThis_exref + 100))();
    (**(code **)(*piVar3 + 0x30))(param_1 + 2);
  }
  if ((char)param_1[0x39d] != '\0') {
    *(undefined1 *)(param_1 + 0x39d) = 0;
    FUN_10d6a320(param_1,&DAT_10d659a0,0);
    FUN_10d6a360(param_1,&DAT_10d659b0,0);
    FUN_10d6a2e0(param_1,FUN_10d659c0,0);
    FUN_10d6a0a0(param_1,FUN_10d65ab0,0);
    pCVar4 = GetCommandLineA();
    pcVar5 = strstr(pCVar4,"-q");
    pCVar4 = GetCommandLineA();
    pcVar6 = strstr(pCVar4,"-loginqq=");
    pCVar4 = GetCommandLineA();
    pcVar7 = strstr(pCVar4,"-src=tgp");
    param_1 = local_14;
    local_8 = (int *)CONCAT31(local_8._1_3_,pcVar7 != (char *)0x0);
    if (pcVar6 == (char *)0x0) {
      if (pcVar5 != (char *)0x0) {
        FUN_10d65c00(local_8);
        goto LAB_10d64a65;
      }
      piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("con_tconnect_qq");
      if (piVar3 == (int *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*piVar3 + 8))();
      }
    }
    else {
      uVar11 = 0;
    }
    param_1 = local_14;
    FUN_10d65c40(0,uVar11,0,0);
  }
LAB_10d64a65:
  param_1[8] = 0;
  *(undefined1 *)(DAT_1202e818 + 0x6c) = 0;
  if (((DAT_1202e818[0x34] != 0) &&
      (piVar3 = *(int **)(DAT_1202e818[0x34] + 0x90), piVar3 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar3 + 0xb4))(), iVar2 != 0)) {
    *(undefined1 *)(iVar2 + 0x24) = 1;
  }
  if ((int *)DAT_1202e818[0x34] != (int *)0x0) {
    (**(code **)(*(int *)DAT_1202e818[0x34] + 0x94))();
  }
  if (((DAT_1202e818 != (int *)0x0) && ((int *)DAT_1202e818[0xb] != (int *)0x0)) &&
     (piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_MHFC_LobbyLevel"),
     piVar3 != (int *)0x0)) {
    uVar11 = (**(code **)(*piVar3 + 0x10))();
    FUN_1083ac30(uVar11);
  }
  if (*(int *)(param_1[7] + -8) == 0) {
    FUN_1083ab70("level_avatar",0xc);
  }
  piVar3 = *(int **)m_pThis_exref;
  local_14 = (int *)&DAT_1201fc98;
  puVar8 = (undefined4 *)FUN_10aba940(&local_14,"create_map %s",param_1[7]);
  (**(code **)(*piVar3 + 0x1e4))(*puVar8);
  piVar3 = local_14;
  piVar9 = local_14 + -3;
  if ((-1 < *piVar9) && (iVar2 = FUN_10c3dad0(piVar9), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar3[-1]);
    FUN_10c3d900(piVar9);
  }
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_2c);
  }
  piVar3 = local_28;
  local_14 = (int *)(**(code **)(*local_2c + 0x3c))("NewLobby");
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  (**(code **)(*local_14 + 100))(0);
  local_34 = 0;
  local_30 = (int *)0x0;
  if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
     (FUN_104d7640("FlashUI",&local_34), local_34 == 0)) {
    local_14 = (int *)0x0;
    piVar3 = local_8;
  }
  else {
    local_10 = local_10 | 2;
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
      FUN_104d7640("FlashUI",&local_c);
    }
    piVar3 = local_8;
    local_14 = (int *)(**(code **)(*local_c + 0x3c))(&DAT_11dbd178);
  }
  if (((local_10 & 2) != 0) && (piVar3 != (int *)0x0)) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  piVar3 = local_30;
  if (local_30 != (int *)0x0) {
    LOCK();
    iVar2 = local_30[1] + -1;
    local_30[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*local_30 + 4))();
      piVar9 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  piVar3 = local_14;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 100))(1);
    local_40 = 10;
    local_3c = 0;
    local_38 = 0;
    iVar2 = FUN_10d17440();
    if (iVar2 != 0) {
      FUN_10d17440();
      iVar2 = FUN_10d17870();
      if (iVar2 != 0) {
        FUN_10d17440();
        piVar9 = (int *)FUN_10d17870();
        (**(code **)(*piVar9 + 4))(0x1f,&local_40);
      }
    }
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0x8c))();
  (**(code **)(*piVar3 + 0xc0))("_root.UIModel_Init",0,0,0);
  if ((int *)DAT_1202e818[1] != (int *)0x0) {
    (**(code **)(*(int *)DAT_1202e818[1] + 0xc0))();
    (**(code **)(*(int *)DAT_1202e818[1] + 0xe4))();
    (**(code **)(*(int *)DAT_1202e818[1] + 0xec))();
    (**(code **)(*(int *)DAT_1202e818[1] + 0xb4))();
  }
  piVar3 = (int *)FUN_104d0280();
  (**(code **)(*piVar3 + 0x10))(0);
  param_1[0x360] = -1;
  return;
}



/* ===== FUN_10d64d80 @ 10d64d80  size=316 ===== */
// strings:
//   "pl_LookIKFOV"
//   "ca_EnableLookIKNoise"
//   "FlashUI"
//   "NewLobby"

/* [RE-AUTO c0]
   strings:
     ""pl_LookIKFOV""
     ""ca_EnableLookIKNoise""
     ""FlashUI""
     ""NewLobby"" */

void __fastcall FUN_10d64d80(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_c;
  int *local_8;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar2 = (**(code **)(**(int **)m_pThis_exref + 100))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)m_pThis_exref + 100))();
    (**(code **)(*piVar3 + 0x34))(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xd8f) = 1;
  FUN_10d6a420(param_1);
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("pl_LookIKFOV");
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(0x428c0000);
  }
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("ca_EnableLookIKNoise");
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(0);
  }
  piVar3 = (int *)FUN_104d0280();
  (**(code **)(*piVar3 + 0x10))(0);
  if ((*(char *)((int)DAT_1202e818 + 0x209) == '\0') &&
     (piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0xe] + 0x60))(), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0xc))();
  }
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
    FUN_104d7640("FlashUI",&local_c);
  }
  piVar3 = local_8;
  piVar4 = (int *)(**(code **)(*local_c + 0x3c))("NewLobby");
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar1 = piVar3 + 2;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  (**(code **)(*piVar4 + 100))(0);
  return;
}



