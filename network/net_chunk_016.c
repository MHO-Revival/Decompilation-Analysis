/* ===== FUN_104227c0 @ 104227c0  size=170 ===== */
// strings:
//   "[wCmdID]"
//   "[wHeadLen]"
//   "[dwBodyLen]"
//   "[dwSeqID]"
//   "[dwNoUse]"

/* [RE-AUTO c0]
   strings:
     ""[wCmdID]""
     ""[wHeadLen]""
     ""[dwBodyLen]""
     ""[dwSeqID]""
     ""[dwNoUse]"" */

void __thiscall
FUN_104227c0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wCmdID]",&DAT_11d9e0b4,*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_1024a290(param_2,param_3,param_4,"[wHeadLen]",&DAT_11d9e0b4,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwBodyLen]",&DAT_11d9f574,
                           *(undefined4 *)(param_1 + 2));
      if (iVar1 == 0) {
        iVar1 = FUN_1024a290(param_2,param_3,param_4,"[dwSeqID]",&DAT_11d9f574,
                             *(undefined4 *)(param_1 + 4));
        if (iVar1 == 0) {
          FUN_1024a290(param_2,param_3,param_4,"[dwNoUse]",&DAT_11d9f574,
                       *(undefined4 *)(param_1 + 6));
        }
      }
    }
  }
  return;
}



/* ===== FUN_10459960 @ 10459960  size=202 ===== */
// calls: _wassert
// strings:
//   "[stHead]"
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp"
//   u"NULL != variable"
//   "[stBody]"

/* WARNING: Removing unreachable block (ram,0x10459970) */
/* [RE-AUTO c0]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[stHead]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""[stBody]"" */

void __thiscall FUN_10459960(undefined2 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_1024a140(param_3);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_1010c010(param_2,&DAT_11da4eb8,"[stHead]",(int)(char)param_4), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_104227c0(param_2,iVar1,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_1024a1e0(param_4,"[stBody]",extraout_ECX), iVar1 == 0)) {
      if (param_3 < 0) {
        FUN_1043b460(*param_1,0,param_2,param_3,param_4);
        return;
      }
      FUN_1043b460(*param_1,0,param_2,param_3 + 1,param_4);
    }
  }
  return;
}



/* ===== FUN_104a6ea0 @ 104a6ea0  size=86 ===== */
// calls: _stricmp
// strings:
//   "CatPrototype"
//   "Cat_Farming"
//   "CatInCity"
//   "CatNewType"

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""CatPrototype""
     ""Cat_Farming""
     ""CatInCity""
     ""CatNewType"" */

undefined4 FUN_104a6ea0(char *param_1)

{
  int iVar1;
  
  iVar1 = _stricmp(param_1,"CatPrototype");
  if (iVar1 != 0) {
    iVar1 = _stricmp(param_1,"Cat_Farming");
    if (iVar1 != 0) {
      iVar1 = _stricmp(param_1,"CatInCity");
      if (iVar1 != 0) {
        iVar1 = _stricmp(param_1,"CatNewType");
        if (iVar1 != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* ===== FUN_105474f0 @ 105474f0  size=41012 ===== */
// calls: _stricmp
// strings:
//   "RegisterGameEvent"
//   "RegisterLogicEvent"
//   "GameEvent"
//   "LogicEvent"
//   "EnterInstance"
//   "GMCommand"
//   "LevelLoading"
//   "LevelLoaded"
//   "SpawnLocalPlayer"
//   "LeaveInstanceReq"
//   "PlayerDialogueRsp"
//   "ShowSystemConfig"
//   "AddCraft"
//   "BeginCraft"
//   "BeginLoot"
//   "Resetconnected"
//   "AutoLaunch"
//   "RoleListResponse"
//   "SelectRoleResponse"
//   "GotoMap"
// <decompile failed/virtualized>

/* ===== FUN_105afde0 @ 105afde0  size=114292 ===== */
// calls: __alloca_probe, _stricmp
// strings:
//   "ServerConnectStart"
//   "ServerConnectSucceeded"
//   "ServerConnectFailed"
//   "PingResult"
//   "Disconnected"
//   "EnterInstanceResponse"
//   "InstanceVerifyResponse"
//   "GlobalErrcode"
//   "CheckVersionResponse"
//   "RoleListResponse"
//   "SelectRoleResponse"
//   "TeamAddRoleResponse"
//   "TeamUpdataRoleResponse"
//   "PlayerTaskAcceptResponse"
//   "PlayerTaskGiveUpResponse"
//   "PVPScoreResponse"
//   "PVPEventResponse"
//   "PlayerTaskUIResetRespone"
//   "TeamInviteAsk"
//   "TeamInviteRsp"
// <decompile failed/virtualized>

/* ===== FUN_107fd030 @ 107fd030  size=364 ===== */
// strings:
//   "ClearMiniMapTraceInfo"

/* [RE-AUTO c0]
   strings:
     ""ClearMiniMapTraceInfo"" */

undefined4 __thiscall FUN_107fd030(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined1 *puVar7;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  FUN_107f4580();
  FUN_107f5670(extraout_ECX,DAT_123bb9a0);
  iVar5 = param_2;
  if ((DAT_123bb99c != (int *)0x0) && (0 < *(int *)(param_2 + 0xc))) {
    FUN_114e79d0();
    iVar3 = FUN_114f16f0();
    if (iVar3 != 0) {
      iVar3 = FUN_114f3be0(*(undefined4 *)(iVar5 + 0xc));
      if ((((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x10), iVar1 != 8)) && (iVar1 != 0x200)) &&
         (iVar1 != 0x800)) {
        puVar7 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar3 + 8);
        }
        uVar4 = FUN_1024e9b0(puVar7,0x14);
        FUN_1112f070(0x139e,uVar4);
      }
    }
    iVar3 = (**(code **)(*DAT_123bb99c + 0x40))(0x5f7);
    if (iVar3 == 0) {
      local_8 = 0;
      local_14 = 0x10;
      local_10 = iVar3;
      local_c = iVar3;
      FUN_104ef270(&local_14);
    }
  }
  cVar2 = FUN_1050a110(0x23);
  if ((cVar2 != '\0') && (*(int *)(iVar5 + 0xc) == *(int *)(param_1 + 0x58))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(*DAT_123bceb8 + 0x18))
              (DAT_123bcec0,0,"ClearMiniMapTraceInfo",0,0,((byte)DAT_123bcebc & 0x8f) == 10);
  }
  cVar2 = FUN_1050a110(0x46);
  if (cVar2 != '\0') {
    param_2 = 0;
    iVar5 = FUN_10d17440();
    if (iVar5 != 0) {
      FUN_10d17440();
      iVar5 = FUN_10d17870();
      if (iVar5 != 0) {
        FUN_10d17440();
        piVar6 = (int *)FUN_10d17870();
        (**(code **)(*piVar6 + 4))(0xcb,&param_2);
      }
    }
  }
  return 0;
}



/* ===== FUN_107fd390 @ 107fd390  size=440 ===== */
// strings:
//   "ClearMiniMapTraceInfo"
//   "PlayNpcTaskDlgCompleteFx"

/* [RE-AUTO c0]
   strings:
     ""ClearMiniMapTraceInfo""
     ""PlayNpcTaskDlgCompleteFx"" */

undefined4 __thiscall FUN_107fd390(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined1 *puVar7;
  
  FUN_107f4580();
  FUN_107f5670(extraout_ECX,DAT_123bb9a0);
  iVar5 = param_2;
  if ((DAT_123bb99c != 0) && (0 < *(int *)(param_2 + 0xc))) {
    FUN_114e79d0();
    iVar3 = FUN_114f16f0();
    if (iVar3 != 0) {
      iVar3 = FUN_114f3be0(*(undefined4 *)(iVar5 + 0xc));
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar3 + 0x10);
      if (iVar1 == 8) {
        puVar7 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar3 + 8);
        }
        uVar4 = FUN_1024e9b0(puVar7,0x14);
        FUN_1112f070(0xff4,uVar4);
      }
      else if ((iVar1 != 0x200) && (iVar1 != 0x800)) {
        puVar7 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar3 + 8);
        }
        uVar4 = FUN_1024e9b0(puVar7,0x14);
        FUN_1112f070(0x1389,uVar4);
        FUN_107edfc0(iVar3,**(undefined4 **)(iVar5 + 0x10));
      }
    }
  }
  cVar2 = FUN_1050a110(0x23);
  if ((cVar2 != '\0') && (*(int *)(iVar5 + 0xc) == *(int *)(param_1 + 0x58))) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(*DAT_123bceb8 + 0x18))
              (DAT_123bcec0,0,"ClearMiniMapTraceInfo",0,0,((byte)DAT_123bcebc & 0x8f) == 10);
  }
  cVar2 = FUN_1050a110(0xf);
  if (cVar2 == '\0') {
    cVar2 = FUN_1050a110(0x46);
    if (cVar2 != '\0') {
      param_2 = 0;
      iVar5 = FUN_10d17440();
      if (iVar5 != 0) {
        FUN_10d17440();
        iVar5 = FUN_10d17870();
        if (iVar5 != 0) {
          FUN_10d17440();
          piVar6 = (int *)FUN_10d17870();
          (**(code **)(*piVar6 + 4))(0xcb,&param_2);
        }
      }
    }
    return 0;
  }
  (**(code **)(*DAT_123bcea0 + 0x18))
            (DAT_123bcea8,0,"PlayNpcTaskDlgCompleteFx",0,0,((byte)DAT_123bcea4 & 0x8f) == 10);
  return 0;
}



/* ===== FUN_107fdf20 @ 107fdf20  size=482 ===== */
// strings:
//   "ClearMiniMapTraceInfo"
//   "PlayNpcTaskDlgCompleteFx"

/* [RE-AUTO c0]
   strings:
     ""ClearMiniMapTraceInfo""
     ""PlayNpcTaskDlgCompleteFx"" */

void __thiscall FUN_107fdf20(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  
  FUN_107fa480();
  FUN_113f3640();
  iVar3 = FUN_1115abd0();
  if ((iVar3 != 0) && (DAT_123bb99c != 0)) {
    FUN_107f5460(*param_2,0,1);
    FUN_107f4580();
    FUN_107f5670(extraout_ECX,DAT_123bb9a0);
    if ((DAT_123bb99c != 0) && (0 < *param_2)) {
      FUN_114e79d0();
      iVar3 = FUN_114f16f0();
      if (iVar3 != 0) {
        iVar3 = FUN_114f3be0(*param_2);
        if (iVar3 == 0) {
          return;
        }
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar1 == 8) {
          puVar5 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
            puVar5 = *(undefined1 **)(iVar3 + 8);
          }
          uVar4 = FUN_1024e9b0(puVar5,0x14);
          FUN_1112f070(0xff4,uVar4);
        }
        else if ((iVar1 != 0x200) && (iVar1 != 0x800)) {
          puVar5 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
            puVar5 = *(undefined1 **)(iVar3 + 8);
          }
          uVar4 = FUN_1024e9b0(puVar5,0x14);
          FUN_1112f070(0x1389,uVar4);
          FUN_107edfc0(iVar3,param_2[1]);
        }
      }
    }
    cVar2 = FUN_1050a110(0x23);
    if ((cVar2 != '\0') && (*param_2 == *(int *)(param_1 + 0x58))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      (**(code **)(*DAT_123bceb8 + 0x18))
                (DAT_123bcec0,0,"ClearMiniMapTraceInfo",0,0,((byte)DAT_123bcebc & 0x8f) == 10);
    }
    cVar2 = FUN_1050a110(0xf);
    if (cVar2 != '\0') {
      (**(code **)(*DAT_123bcea0 + 0x18))
                (DAT_123bcea8,0,"PlayNpcTaskDlgCompleteFx",0,0,((byte)DAT_123bcea4 & 0x8f) == 10);
      return;
    }
    cVar2 = FUN_1050a110(0x102);
    if (cVar2 != '\0') {
      FUN_105ec1c0();
    }
    cVar2 = FUN_1050a110(0x46);
    if (cVar2 != '\0') {
      FUN_105e4fe0();
    }
  }
  return;
}



/* ===== FUN_107feb50 @ 107feb50  size=385 ===== */
// strings:
//   "ClearMiniMapTraceInfo"

/* [RE-AUTO c0]
   strings:
     ""ClearMiniMapTraceInfo"" */

void __thiscall FUN_107feb50(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = 0x107feb62;
  FUN_107fa480();
  iStack_2c = 0x107feb67;
  FUN_113f3640();
  iStack_2c = 0x107feb6e;
  iVar3 = FUN_1115abd0();
  if ((iVar3 != 0) && (DAT_123bb99c != (int *)0x0)) {
    iStack_2c = 0;
    FUN_107f4580();
    FUN_107f5670(extraout_ECX,DAT_123bb9a0);
    if (0 < *param_2) {
      FUN_114e79d0();
      iVar3 = FUN_114f16f0();
      if (iVar3 != 0) {
        iVar3 = FUN_114f3be0(*param_2);
        if ((((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x10), iVar1 != 8)) && (iVar1 != 0x200)) &&
           (iVar1 != 0x800)) {
          puVar5 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar3 + 8) != (undefined1 *)0x0) {
            puVar5 = *(undefined1 **)(iVar3 + 8);
          }
          uVar4 = FUN_1024e9b0(puVar5,0x14);
          FUN_1112f070(0x139e,uVar4);
        }
      }
      iVar3 = (**(code **)(*DAT_123bb99c + 0x40))(0x5f7);
      if (iVar3 == 0) {
        uStack_30 = 0x10;
        iStack_2c = iVar3;
        FUN_104ef270(&uStack_30);
      }
    }
    cVar2 = FUN_1050a110(0x23);
    if ((cVar2 != '\0') && (*param_2 == *(int *)(param_1 + 0x58))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      (**(code **)(*DAT_123bceb8 + 0x18))
                (DAT_123bcec0,0,"ClearMiniMapTraceInfo",0,0,((byte)DAT_123bcebc & 0x8f) == 10);
    }
    cVar2 = FUN_1050a110(0x46);
    if (cVar2 != '\0') {
      FUN_105e4fe0();
    }
    cVar2 = FUN_1050a110(0x102);
    if (cVar2 != '\0') {
      FUN_105ec1c0();
    }
  }
  return;
}



/* ===== FUN_10851330 @ 10851330  size=388 ===== */
// strings:
//   "FlashUI"
//   "_root.onReceiveCurrentChangeFaceNumber"
//   "_root.onReceiveCurrentChangeSexNumber"

/* [RE-AUTO c0]
   strings:
     ""FlashUI""
     ""_root.onReceiveCurrentChangeFaceNumber""
     ""_root.onReceiveCurrentChangeSexNumber"" */

void __thiscall FUN_10851330(int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int local_20;
  int *local_1c;
  int *piStack_18;
  int *local_14;
  undefined4 uStack_10;
  
  bVar2 = false;
  local_20 = 0;
  local_1c = (int *)0x0;
  if (((DAT_1202e818 == (int *)0x0) || (*DAT_1202e818 == 0)) ||
     (FUN_104d7640("FlashUI",&local_20), local_20 == 0)) {
    piVar4 = (int *)0x0;
    piVar5 = local_14;
  }
  else {
    bVar2 = true;
    piStack_18 = (int *)0x0;
    local_14 = (int *)0x0;
    if ((DAT_1202e818 != (int *)0x0) && (*DAT_1202e818 != 0)) {
      FUN_104d7640("FlashUI",&piStack_18);
    }
    piVar5 = local_14;
    piVar4 = (int *)(**(code **)(*piStack_18 + 0x3c))(&DAT_11dbd178);
  }
  piVar3 = local_1c;
  if ((bVar2) && (piVar5 != (int *)0x0)) {
    LOCK();
    iVar1 = piVar5[1] + -1;
    piVar5[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar5 + 4))();
      LOCK();
      iVar1 = piVar5[2] + -1;
      piVar5[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        (**(code **)(*piVar5 + 8))();
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar1 = piVar3[1] + -1;
    piVar3[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 4))();
      piVar5 = piVar3 + 2;
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*piVar3 + 8))();
      }
    }
  }
  if (*(int *)(param_1 + 0x128) == 1) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*piVar4 + 0x8c))();
    if (piVar5 == (int *)0x0) {
      return;
    }
    uStack_10 = *param_2;
    pcVar6 = "_root.onReceiveCurrentChangeFaceNumber";
  }
  else {
    if (*(int *)(param_1 + 0x128) != 2) {
      return;
    }
    if (piVar4 == (int *)0x0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*piVar4 + 0x8c))();
    if (piVar5 == (int *)0x0) {
      return;
    }
    uStack_10 = param_2[1];
    pcVar6 = "_root.onReceiveCurrentChangeSexNumber";
  }
  piStack_18 = (int *)0x3;
  (**(code **)(*piVar5 + 0xc0))(pcVar6,&piStack_18,1,0);
  return;
}



/* ===== FUN_109daac0 @ 109daac0  size=687 ===== */
// calls: CPet::SetName
// strings:
//   "LevelId"
//   "LevelName"
//   "LevelCharLevel"
//   "LevelShowMonsterId"
//   "LevelNeedPlayerMin"
//   "LevelNeedPlayerMax"
//   "LevelEnterLimitTimes"
//   "LevelCurrentEnterTimes"
//   "LevelReqBuffId"
//   "LevelBuffCnt"
//   "LevelCanEnterTimes"

/* [RE-AUTO c0]
   strings:
     ""LevelId""
     ""LevelName""
     ""LevelCharLevel""
     ""LevelShowMonsterId""
     ""LevelNeedPlayerMin""
     ""LevelNeedPlayerMax""
     ""LevelEnterLimitTimes""
     ""LevelCurrentEnterTimes""
     ""LevelReqBuffId""
     ""LevelBuffCnt"" */

void FUN_109daac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 unaff_EBX;
  int iVar6;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 auStack_34 [16];
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_5c;
  local_38 = param_1;
  local_3c = param_2;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb4))();
    if (piVar1 != (int *)0x0) {
      iVar6 = 1;
      iStack_58 = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_5c = 1;
      uStack_48 = 0;
      uStack_54 = 0;
      uStack_50 = 0xffffffff;
      uStack_4c = 0;
      iVar2 = FUN_107d7930(param_3);
      if (iVar2 != 0) {
        puVar5 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar2 + 0x1c) != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(iVar2 + 0x1c);
        }
        CPet__SetName(puVar5);
        uStack_48 = *(undefined4 *)(iVar2 + 0x78);
        iVar3 = FUN_116ae260(1);
        if (iVar3 != 0) {
          uStack_48 = *(undefined4 *)(iVar3 + 4);
        }
        iVar3 = FUN_116ae260(8);
        if (iVar3 != 0) {
          iVar6 = *(int *)(iVar3 + 4);
          if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 0x18) == 1)) {
            iVar6 = iVar6 / 2;
          }
        }
        uStack_54 = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x6c);
        iVar2 = FUN_116ae260(0x11);
        if (iVar2 != 0) {
          uStack_50 = *(undefined4 *)(iVar2 + 4);
          uStack_4c = (**(code **)(*(int *)piVar1[4] + 0x28))(uStack_50);
        }
      }
      iVar2 = (**(code **)(*piVar1 + 0x388))();
      if (iVar2 != 0) {
        iVar2 = FUN_1156c6b0(param_3);
        if (iVar2 != 0) {
          uStack_54 = FUN_1156c660(2);
        }
      }
      FUN_104d1550("LevelId",param_3);
      puStack_14 = (undefined4 *)auStack_34;
      auStack_34[0] = 0;
      puStack_10 = puStack_14;
      FUN_100e5b60(auStack_34);
      FUN_104d1700("LevelName",puStack_14);
      if ((puStack_14 != &local_38) && (puStack_14 != (undefined4 *)0x0)) {
        FUN_10c3d5d0(puStack_14);
      }
      FUN_104d1550("LevelCharLevel",uStack_44);
      FUN_104d1550("LevelShowMonsterId",uStack_48);
      FUN_104d1550("LevelNeedPlayerMin",iVar6);
      FUN_104d1550("LevelNeedPlayerMax",unaff_EBX);
      FUN_104d1550("LevelEnterLimitTimes",uStack_4c);
      FUN_104d1550("LevelCurrentEnterTimes",iStack_58);
      FUN_104d1550("LevelReqBuffId",uStack_54);
      FUN_104d1550("LevelBuffCnt",uStack_50);
      uVar4 = FUN_109dbd00(param_3,param_4);
      FUN_104d1550("LevelCanEnterTimes",uVar4);
      if (iStack_58 != 0) {
        FUN_10c3da30(iStack_58);
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10a7bea0 @ 10a7bea0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7bea0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7bf70 @ 10a7bf70  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7bf70(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x14));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x14),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c040 @ 10a7c040  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c040(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c110 @ 10a7c110  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c110(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x48));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x48),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x50))(param_1 + 8,*(undefined4 *)(param_1 + 0x58));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0x20))(*(int **)(param_1 + 0x58),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c1e0 @ 10a7c1e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c1e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x24));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x24),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x30))(param_1 + 8,*(undefined4 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c2b0 @ 10a7c2b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c2b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c380 @ 10a7c380  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c380(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c450 @ 10a7c450  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c450(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c520 @ 10a7c520  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c520(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x2c));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x2c),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x30) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_1 + 8,*(undefined4 *)(param_1 + 0x40));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(*(int **)(param_1 + 0x40),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c5f0 @ 10a7c5f0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c5f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10a7c6c0 @ 10a7c6c0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10a7c6c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10b39950 @ 10b39950  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10b39950(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10b39a20 @ 10b39a20  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10b39a20(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10b3dbc0 @ 10b3dbc0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10b3dbc0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x24));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x24),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x30))(param_1 + 8,*(undefined4 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10b3dc90 @ 10b3dc90  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10b3dc90(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x28));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x28),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x30))(param_1 + 8,*(undefined4 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c30f40 @ 10c30f40  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c30f40(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x14));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x14),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31010 @ 10c31010  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31010(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c310e0 @ 10c310e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c310e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x1c));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x1c),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x28))(param_1 + 8,*(undefined4 *)(param_1 + 0x30));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(*(int **)(param_1 + 0x30),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c311b0 @ 10c311b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c311b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31280 @ 10c31280  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31280(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31350 @ 10c31350  size=220 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31350(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xac));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xac),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb0) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0xb8))(param_1 + 8,*(undefined4 *)(param_1 + 0xc0));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x20))(*(int **)(param_1 + 0xc0),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31430 @ 10c31430  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31430(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31500 @ 10c31500  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31500(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c315d0 @ 10c315d0  size=220 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c315d0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x188));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x188),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 400))(param_1 + 8,*(undefined4 *)(param_1 + 0x198));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x198) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x198) + 0x20))(*(int **)(param_1 + 0x198),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c316b0 @ 10c316b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c316b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31780 @ 10c31780  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31780(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31850 @ 10c31850  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31850(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31920 @ 10c31920  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31920(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c319f0 @ 10c319f0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c319f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31ac0 @ 10c31ac0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31ac0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x14));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x14),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31b90 @ 10c31b90  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31b90(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31c60 @ 10c31c60  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31c60(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31d30 @ 10c31d30  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31d30(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x24));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x24),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x30))(param_1 + 8,*(undefined4 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31e00 @ 10c31e00  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31e00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x20));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x20),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x24) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x28))(param_1 + 8,*(undefined4 *)(param_1 + 0x30));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(*(int **)(param_1 + 0x30),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31ed0 @ 10c31ed0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31ed0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c31fa0 @ 10c31fa0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c31fa0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c32070 @ 10c32070  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c32070(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x14));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x14),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c32140 @ 10c32140  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c32140(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c32210 @ 10c32210  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c32210(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x24));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x24),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x28) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x30))(param_1 + 8,*(undefined4 *)(param_1 + 0x38));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c322e0 @ 10c322e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c322e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10c89a30 @ 10c89a30  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10c89a30(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x14));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x14),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10cc5670 @ 10cc5670  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10cc5670(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10cc5740 @ 10cc5740  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10cc5740(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10d0e640 @ 10d0e640  size=289 ===== */
// strings:
//   "Steer_FearMaxEvents"
//   "Steer_FearTimeDeltaWeight"
//   "Steer_FearSensorDistance"
//   "Steer_FearMinDistance"
//   "Steer_FearEstimationTime"
//   "Steer_FearAnimName"
//   "Steer_FearReactionTime"
//   "Steer_FearSpeedMultiplier"

/* [RE-AUTO c0]
   strings:
     ""Steer_FearMaxEvents""
     ""Steer_FearTimeDeltaWeight""
     ""Steer_FearSensorDistance""
     ""Steer_FearMinDistance""
     ""Steer_FearEstimationTime""
     ""Steer_FearAnimName""
     ""Steer_FearReactionTime""
     ""Steer_FearSpeedMultiplier"" */

void __fastcall FUN_10d0e640(int param_1)

{
  int local_8;
  
  local_8 = param_1;
  FUN_10d05380();
  FUN_113168d0("Steer_FearMaxEvents");
  FUN_10d05610(param_1 + 0x7c,&local_8);
  FUN_113168d0("Steer_FearTimeDeltaWeight");
  FUN_10d05610(param_1 + 0xe8,&local_8);
  FUN_113168d0("Steer_FearSensorDistance");
  FUN_10d05610(param_1 + 0x118,&local_8);
  FUN_113168d0("Steer_FearMinDistance");
  FUN_10d05610(param_1 + 0x100,&local_8);
  FUN_113168d0("Steer_FearEstimationTime");
  FUN_10d05610(param_1 + 0x130,&local_8);
  FUN_113168d0("Steer_FearAnimName");
  FUN_10d05610(param_1 + 0x160,&local_8);
  FUN_113168d0("Steer_FearReactionTime");
  FUN_10d05610(param_1 + 0x148,&local_8);
  FUN_113168d0("Steer_FearSpeedMultiplier");
  FUN_10d05610(param_1 + 0x180,&local_8);
  FUN_113168d0("Steer_FearAnimName");
  FUN_10d05610(param_1 + 0x160,&local_8);
  return;
}



/* ===== FUN_10db31e0 @ 10db31e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db31e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db32b0 @ 10db32b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db32b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db3380 @ 10db3380  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db3380(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db3450 @ 10db3450  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db3450(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db3520 @ 10db3520  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db3520(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db35f0 @ 10db35f0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db35f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x30));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x30),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_1 + 8,*(undefined4 *)(param_1 + 0x40));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(*(int **)(param_1 + 0x40),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db36c0 @ 10db36c0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db36c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10db3790 @ 10db3790  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10db3790(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10e1bdd0 @ 10e1bdd0  size=586 ===== */
// strings:
//   "GetFarmInfo"
//   "Success"
//   "FishingLV"
//   "BugLV"
//   "HerbLV"
//   "LandLV"
//   "MineLV"
//   "MushroomLV"
//   "HoneyLV"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""GetFarmInfo""
     ""Success""
     ""FishingLV""
     ""BugLV""
     ""HerbLV""
     ""LandLV""
     ""MineLV""
     ""MushroomLV""
     ""HoneyLV"" */

void FUN_10e1bdd0(undefined4 *param_1)

{
  undefined1 auStack_8 [4];
  
  if ((DAT_12032620 & 1) == 0) {
    DAT_12032620 = DAT_12032620 | 1;
    _DAT_120325f0 = "GetFarmInfo";
    _DAT_120325f4 = 0;
    _DAT_120325f8 = &DAT_11d9d32b;
    _DAT_120325fc = 0;
    DAT_12032600 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12032604,auStack_8,"GetFarmInfo",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(auStack_8);
    DAT_12032618 = &DAT_11df7728;
    _DAT_12032608 = 0;
    uRam1203260c = 0;
    uRam12032610 = 0;
    uRam12032614 = 0;
    FUN_11a8911f(&LAB_11c8bc20);
  }
  if ((DAT_12032620 & 2) == 0) {
    DAT_12032620 = DAT_12032620 | 2;
    _DAT_12032628 = "Success";
    uRam1203262c = 0;
    _DAT_12032630 = &DAT_11d9d32b;
    uRam12032634 = 6;
    _DAT_12032638 = "FishingLV";
    uRam1203263c = 0;
    puRam12032640 = &DAT_11d9d32b;
    uRam12032644 = 1;
    _DAT_12032648 = "BugLV";
    uRam1203264c = 0;
    puRam12032650 = &DAT_11d9d32b;
    uRam12032654 = 1;
    _DAT_12032658 = "HerbLV";
    uRam1203265c = 0;
    puRam12032660 = &DAT_11d9d32b;
    uRam12032664 = 1;
    _DAT_12032668 = "LandLV";
    uRam1203266c = 0;
    puRam12032670 = &DAT_11d9d32b;
    uRam12032674 = 1;
    _DAT_12032678 = "MineLV";
    uRam1203267c = 0;
    puRam12032680 = &DAT_11d9d32b;
    uRam12032684 = 1;
    _DAT_12032688 = "MushroomLV";
    uRam1203268c = 0;
    puRam12032690 = &DAT_11d9d32b;
    uRam12032694 = 1;
    _DAT_12032698 = "HoneyLV";
    uRam1203269c = 0;
    puRam120326a0 = &DAT_11d9d32b;
    uRam120326a4 = 1;
    _DAT_120326a8 = 0;
    uRam120326ac = 0;
    uRam120326b0 = 0;
    uRam120326b4 = 0;
  }
  *param_1 = &DAT_120325f0;
  param_1[1] = &DAT_12032628;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ed05e0 @ 10ed05e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed05e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed06b0 @ 10ed06b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed06b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed0780 @ 10ed0780  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed0780(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed0850 @ 10ed0850  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed0850(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed0920 @ 10ed0920  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed0920(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed09f0 @ 10ed09f0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed09f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x30));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x30),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_1 + 8,*(undefined4 *)(param_1 + 0x40));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(*(int **)(param_1 + 0x40),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed0ac0 @ 10ed0ac0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed0ac0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10ed0b90 @ 10ed0b90  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10ed0b90(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f27de0 @ 10f27de0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f27de0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f27eb0 @ 10f27eb0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f27eb0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f27f80 @ 10f27f80  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f27f80(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f28050 @ 10f28050  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f28050(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f28120 @ 10f28120  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f28120(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f281f0 @ 10f281f0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f281f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x30));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x30),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_1 + 8,*(undefined4 *)(param_1 + 0x40));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(*(int **)(param_1 + 0x40),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f282c0 @ 10f282c0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f282c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_10f28390 @ 10f28390  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_10f28390(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_1110fe60 @ 1110fe60  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_1110fe60(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_1110ff30 @ 1110ff30  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_1110ff30(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_11110000 @ 11110000  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_11110000(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_111100d0 @ 111100d0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_111100d0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_111101a0 @ 111101a0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_111101a0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_11110270 @ 11110270  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_11110270(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x40));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x40),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x44) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x48))(param_1 + 8,*(undefined4 *)(param_1 + 0x50));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x20))(*(int **)(param_1 + 0x50),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_11110340 @ 11110340  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_11110340(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0x18));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x20))(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_11110410 @ 11110410  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_11110410(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_111104e0 @ 111104e0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_111104e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_111105b0 @ 111105b0  size=193 ===== */
// calls: sprintf
// strings:
//   "Entity %d for RMI %s not found"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Entity %d for RMI %s not found"" */

char __fastcall FUN_111105b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_104 [256];
  
  local_104[0] = '\0';
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*(undefined4 *)(param_1 + 0xc));
  if (piVar2 == (int *)0x0) {
    sprintf(local_104,"Entity %d for RMI %s not found",*(undefined4 *)(param_1 + 0xc),
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4));
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x58))(*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    if (iVar3 != 0) {
      cVar1 = (**(code **)(param_1 + 0x18))(param_1 + 8,*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return '\x01';
      }
      return cVar1;
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x16c) == '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x78))(), cVar1 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(*(int **)(param_1 + 0x20),7,local_104);
    return '\x01';
  }
  return '\x01';
}



/* ===== FUN_115d8840 @ 115d8840  size=140 ===== */
// calls: CPvpDamageParmInfo::FindInfoByKey
// strings:
//   "CPvpDamageParmInfo"

/* [RE-AUTO c0]
   calls: CPvpDamageParmInfo::GetManagers
   strings:
     ""CPvpDamageParmInfo"" */

float10 __thiscall FUN_115d8840(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_8;
  
  local_8 = 1.0;
  if (param_2 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar3 = CPvpDamageParmInfo__FindInfoByKey(0,"CPvpDamageParmInfo",0);
    if (((iVar2 != -1) &&
        (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
       ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4), iVar2 != 0)) {
        local_8 = DAT_11de9918 - (float)*(int *)(iVar2 + 0x14) / DAT_11de9a30;
      }
    }
  }
  return (float10)local_8;
}



/* ===== FUN_115d8940 @ 115d8940  size=78 ===== */
// calls: CPvpDamageParmInfo::FindInfoByKey
// strings:
//   "CPvpDamageParmInfo"

/* [RE-AUTO c0]
   calls: CPvpDamageParmInfo::GetManagers
   strings:
     ""CPvpDamageParmInfo"" */

undefined4 FUN_115d8940(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPvpDamageParmInfo__FindInfoByKey(0,"CPvpDamageParmInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_115daad0 @ 115daad0  size=188 ===== */
// calls: CPvpDamageParmInfo::FindInfoByKey
// strings:
//   "CPvpDamageParmInfo"

/* [RE-AUTO c0]
   calls: CPvpDamageParmInfo::GetManagers
   strings:
     ""CPvpDamageParmInfo"" */

float10 __thiscall FUN_115daad0(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_8;
  
  local_8 = 1.0;
  if (param_2 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x4c))();
    iVar3 = CPvpDamageParmInfo__FindInfoByKey(0,"CPvpDamageParmInfo",0);
    if (((iVar2 != -1) &&
        (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
         (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)))) &&
       ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / iVar1) * 4);
      if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar2 % iVar1) * 4), iVar2 != 0)) {
        iVar3 = (**(code **)(*param_1 + 0x40))();
        iVar3 = iVar3 + *(int *)(iVar2 + 0x20);
        if (0 < iVar3) {
          iVar1 = *(int *)(iVar2 + 0x1c);
          iVar4 = (**(code **)(*param_1 + 0x40))();
          if (iVar1 < iVar4) {
            local_8 = ((float)*(int *)(iVar2 + 0x18) * (float)iVar1) / (float)iVar3;
          }
        }
      }
    }
  }
  return (float10)local_8;
}



/* ===== FUN_118a46e0 @ 118a46e0  size=4994 ===== */
// calls: memset, memcpy
// strings:
//   u"ResourceID"
//   u"MapID"
//   u"LevelMin"
//   u"LevelMax"
//   u"DifMin"
//   u"DifMax"
//   u"ResType"
//   u"RichType"
//   u"SpecTool"
//   u"ToolLevel"
//   u"ToolDmgProb"
//   u"IsShared"
//   u"GatherMin"
//   u"GatherMax"
//   u"CatGatherMin"
//   u"CatGatherMax"
//   u"ViewArcheTypeName"
//   u"LifeTime"

/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   calls: memset, memcpy
   strings:
     "u"ResourceID""
     "u"MapID""
     "u"LevelMin""
     "u"LevelMax""
     "u"DifMin""
     "u"DifMax""
     "u"ResType""
     "u"RichType""
     "u"SpecTool""
     "u"ToolLevel"" */

void __thiscall FUN_118a46e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  float10 fVar7;
  int local_434;
  void *local_430;
  wchar_t awStack_42c [2];
  wchar_t awStack_428 [2];
  wchar_t awStack_424 [2];
  undefined1 local_420 [4];
  wchar_t wStack_41c;
  undefined8 uStack_41a;
  void **local_410;
  void **local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_1239bdbc & 1) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 1;
    FUN_100f67b0(L"ResourceID");
  }
  if ((DAT_1239bdbc & 2) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 2;
    iVar2 = FUN_100e1cb0(DAT_1239bdb8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bdc0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239bdb8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239bdc0);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((DAT_1239bdbc & 4) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 4;
    FUN_100f67b0(L"MapID");
  }
  if ((DAT_1239bdbc & 8) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 8;
    iVar2 = FUN_100e1cb0(DAT_1239bdd0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bdd4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239bdd0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239bdd4);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_1239bdbc & 0x10) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x10;
    FUN_100f67b0(L"LevelMin");
  }
  if ((DAT_1239bdbc & 0x20) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x20;
    iVar2 = FUN_100e1cb0(DAT_1239bde4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bde8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239bde4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = local_434;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239bde8);
  }
  if ((DAT_1239bdbc & 0x40) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x40;
    FUN_100f67b0(L"LevelMax");
  }
  if (-1 < (char)DAT_1239bdbc) {
    DAT_1239bdbc = DAT_1239bdbc | 0x80;
    iVar3 = FUN_100e1cb0(DAT_1239bdf8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bdfc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239bdf8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar3 = local_434;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1239bdfc);
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  uVar6 = DAT_1239bdbc;
  *(int *)(param_1 + 0x18) = iVar2;
  if ((uVar6 & 0x100) == 0) {
    DAT_1239bdbc = uVar6 | 0x100;
    FUN_100f67b0(L"DifMin");
    uVar6 = DAT_1239bdbc;
  }
  if ((uVar6 & 0x200) == 0) {
    DAT_1239bdbc = uVar6 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_1239be0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be10);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be0c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = local_434;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239be10);
  }
  if ((DAT_1239bdbc & 0x400) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x400;
    FUN_100f67b0(L"DifMax");
  }
  if ((DAT_1239bdbc & 0x800) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x800;
    iVar3 = FUN_100e1cb0(DAT_1239be20);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be24);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239be20);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar3 = local_434;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1239be24);
  }
  *(int *)(param_1 + 0x24) = iVar3;
  uVar6 = DAT_1239bdbc;
  *(int *)(param_1 + 0x20) = iVar2;
  if ((uVar6 & 0x1000) == 0) {
    DAT_1239bdbc = uVar6 | 0x1000;
    FUN_100f67b0(L"ResType");
    uVar6 = DAT_1239bdbc;
  }
  if ((uVar6 & 0x2000) == 0) {
    DAT_1239bdbc = uVar6 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_1239be34);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be38);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be34);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239be38);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  if ((DAT_1239bdbc & 0x4000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x4000;
    FUN_100f67b0(L"RichType");
  }
  if ((DAT_1239bdbc & 0x8000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_1239be48);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be4c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be48);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239be4c);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
  }
  if ((DAT_1239bdbc & 0x10000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x10000;
    DAT_1239be5c = -1;
    local_40c = &local_430;
    local_410 = (void **)local_420;
    local_430 = (void *)u_SpecTool_11d57c6c._0_4_;
    awStack_42c[0] = u_SpecTool_11d57c6c[2];
    awStack_42c[1] = u_SpecTool_11d57c6c[3];
    awStack_428[0] = u_SpecTool_11d57c6c[4];
    awStack_428[1] = u_SpecTool_11d57c6c[5];
    awStack_424[0] = u_SpecTool_11d57c6c[6];
    awStack_424[1] = u_SpecTool_11d57c6c[7];
    _local_420 = _local_420 & 0xffffffffffff0000;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239be5c) {
      DAT_1239be5c = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x20000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_1239be5c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be60);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239be60);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  if ((DAT_1239bdbc & 0x40000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x40000;
    DAT_1239be70 = -1;
    local_40c = &local_430;
    local_410 = (void **)((int)local_420 + 2);
    local_430 = (void *)u_ToolLevel_11d57c80._0_4_;
    awStack_42c[0] = u_ToolLevel_11d57c80[2];
    awStack_42c[1] = u_ToolLevel_11d57c80[3];
    awStack_428[0] = u_ToolLevel_11d57c80[4];
    awStack_428[1] = u_ToolLevel_11d57c80[5];
    awStack_424[0] = u_ToolLevel_11d57c80[6];
    awStack_424[1] = u_ToolLevel_11d57c80[7];
    local_420 = (undefined1  [4])CONCAT22(0,u_ToolLevel_11d57c80[8]);
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239be70) {
      DAT_1239be70 = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x80000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_1239be70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be74);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239be74);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
  }
  if ((DAT_1239bdbc & 0x100000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x100000;
    DAT_1239be84 = -1;
    local_40c = &local_430;
    local_410 = (void **)((int)local_420 + 6);
    local_430 = (void *)u_ToolDmgProb_11d57c94._0_4_;
    awStack_42c[0] = u_ToolDmgProb_11d57c94[2];
    awStack_42c[1] = u_ToolDmgProb_11d57c94[3];
    awStack_428[0] = u_ToolDmgProb_11d57c94[4];
    awStack_428[1] = u_ToolDmgProb_11d57c94[5];
    awStack_424[0] = u_ToolDmgProb_11d57c94[6];
    awStack_424[1] = u_ToolDmgProb_11d57c94[7];
    _local_420 = (ulonglong)CONCAT24(u_ToolDmgProb_11d57c94[10],u_ToolDmgProb_11d57c94._16_4_);
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239be84) {
      DAT_1239be84 = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x200000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_1239be84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be88);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_1239be88);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  if ((DAT_1239bdbc & 0x400000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x400000;
    DAT_1239be98 = -1;
    local_40c = &local_430;
    local_410 = (void **)local_420;
    local_430 = (void *)u_IsShared_11d57cac._0_4_;
    awStack_42c[0] = u_IsShared_11d57cac[2];
    awStack_42c[1] = u_IsShared_11d57cac[3];
    awStack_428[0] = u_IsShared_11d57cac[4];
    awStack_428[1] = u_IsShared_11d57cac[5];
    awStack_424[0] = u_IsShared_11d57cac[6];
    awStack_424[1] = u_IsShared_11d57cac[7];
    _local_420 = _local_420 & 0xffffffffffff0000;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239be98) {
      DAT_1239be98 = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x800000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_1239be98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239be9c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239be98);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239be9c);
    *(bool *)(param_1 + 0x3c) = iVar2 != 0;
  }
  if ((DAT_1239bdbc & 0x1000000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x1000000;
    DAT_1239beac = -1;
    local_40c = &local_430;
    local_410 = (void **)((int)local_420 + 2);
    local_430 = (void *)u_GatherMin_11d57cc0._0_4_;
    awStack_42c[0] = u_GatherMin_11d57cc0[2];
    awStack_42c[1] = u_GatherMin_11d57cc0[3];
    awStack_428[0] = u_GatherMin_11d57cc0[4];
    awStack_428[1] = u_GatherMin_11d57cc0[5];
    awStack_424[0] = u_GatherMin_11d57cc0[6];
    awStack_424[1] = u_GatherMin_11d57cc0[7];
    local_420 = (undefined1  [4])CONCAT22(0,u_GatherMin_11d57cc0[8]);
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239beac) {
      DAT_1239beac = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x2000000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_1239beac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239beb0);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239beac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = local_434;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239beb0);
  }
  if ((DAT_1239bdbc & 0x4000000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x4000000;
    DAT_1239bec0 = -1;
    local_40c = &local_430;
    local_410 = (void **)((int)local_420 + 2);
    local_430 = (void *)u_GatherMax_11d57cd4._0_4_;
    awStack_42c[0] = u_GatherMax_11d57cd4[2];
    awStack_42c[1] = u_GatherMax_11d57cd4[3];
    awStack_428[0] = u_GatherMax_11d57cd4[4];
    awStack_428[1] = u_GatherMax_11d57cd4[5];
    awStack_424[0] = u_GatherMax_11d57cd4[6];
    awStack_424[1] = u_GatherMax_11d57cd4[7];
    local_420 = (undefined1  [4])CONCAT22(0,u_GatherMax_11d57cd4[8]);
    iVar3 = FUN_100e1bf0(&local_430);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(&local_430);
    }
    if (iVar3 != DAT_1239bec0) {
      DAT_1239bec0 = iVar3;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bdbc & 0x8000000) == 0) {
    DAT_1239bdbc = DAT_1239bdbc | 0x8000000;
    iVar3 = FUN_100e1cb0(DAT_1239bec0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bec4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239bec0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar3 = local_434;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1239bec4);
  }
  *(int *)(param_1 + 0x44) = iVar3;
  uVar6 = DAT_1239bdbc;
  *(int *)(param_1 + 0x40) = iVar2;
  if ((uVar6 & 0x10000000) == 0) {
    DAT_1239bdbc = uVar6 | 0x10000000;
    DAT_1239bed4 = -1;
    local_40c = &local_430;
    local_410 = (void **)((int)&uStack_41a + 2);
    local_430 = (void *)u_CatGatherMin_11d57ce8._0_4_;
    awStack_42c[0] = u_CatGatherMin_11d57ce8[2];
    awStack_42c[1] = u_CatGatherMin_11d57ce8[3];
    awStack_428[0] = u_CatGatherMin_11d57ce8[4];
    awStack_428[1] = u_CatGatherMin_11d57ce8[5];
    awStack_424[0] = u_CatGatherMin_11d57ce8[6];
    awStack_424[1] = u_CatGatherMin_11d57ce8[7];
    local_420._0_2_ = u_CatGatherMin_11d57ce8[8];
    local_420._2_2_ = u_CatGatherMin_11d57ce8[9];
    wStack_41c = u_CatGatherMin_11d57ce8[10];
    uStack_41a._0_2_ = u_CatGatherMin_11d57ce8[0xb];
    uStack_41a._2_2_ = 0;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239bed4) {
      DAT_1239bed4 = iVar2;
    }
    uVar6 = DAT_1239bdbc;
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
      uVar6 = DAT_1239bdbc;
    }
  }
  if ((uVar6 & 0x20000000) == 0) {
    DAT_1239bdbc = uVar6 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_1239bed4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bed8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239bed4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar2 = local_434;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x20))(&DAT_1239bed8);
  }
  if ((DAT_1239bdbc & 0x40000000) == 0) {
    local_40c = &local_430;
    DAT_1239bee8 = -1;
    DAT_1239bdbc = DAT_1239bdbc | 0x40000000;
    local_410 = (void **)((int)&uStack_41a + 2);
    local_430 = (void *)u_CatGatherMax_11d57d04._0_4_;
    awStack_42c[0] = u_CatGatherMax_11d57d04[2];
    awStack_42c[1] = u_CatGatherMax_11d57d04[3];
    awStack_428[0] = u_CatGatherMax_11d57d04[4];
    awStack_428[1] = u_CatGatherMax_11d57d04[5];
    awStack_424[0] = u_CatGatherMax_11d57d04[6];
    awStack_424[1] = u_CatGatherMax_11d57d04[7];
    local_420._0_2_ = u_CatGatherMax_11d57d04[8];
    local_420._2_2_ = u_CatGatherMax_11d57d04[9];
    wStack_41c = u_CatGatherMax_11d57d04[10];
    uStack_41a._0_2_ = u_CatGatherMax_11d57d04[0xb];
    uStack_41a._2_2_ = 0;
    iVar3 = FUN_100e1bf0(&local_430);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(&local_430);
    }
    if (iVar3 != DAT_1239bee8) {
      DAT_1239bee8 = iVar3;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if (-1 < (int)DAT_1239bdbc) {
    DAT_1239bdbc = DAT_1239bdbc | 0x80000000;
    iVar3 = FUN_100e1cb0(DAT_1239bee8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239beec);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_1239bee8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
    iVar3 = local_434;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_1239beec);
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  uVar6 = DAT_1239bf00;
  *(int *)(param_1 + 0x48) = iVar2;
  if ((uVar6 & 1) == 0) {
    DAT_1239bf00 = uVar6 | 1;
    DAT_1239befc = -1;
    local_410 = &local_430;
    local_434 = 0x12;
    local_40c = local_410;
    local_40c = (void **)FUN_100e34a0(0x12,&local_434);
    local_430 = (void *)((int)local_40c + local_434 * 2);
    pvVar5 = memcpy(local_40c,L"ViewArcheTypeName",0x22);
    local_410 = (void **)((int)pvVar5 + 0x22);
    *(undefined2 *)local_410 = 0;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239befc) {
      DAT_1239befc = iVar2;
    }
    uVar6 = DAT_1239bf00;
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
      uVar6 = DAT_1239bf00;
    }
  }
  if ((uVar6 & 2) == 0) {
    DAT_1239bf00 = uVar6 | 2;
    iVar2 = FUN_100e1cb0(DAT_1239befc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bf04);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239befc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x50,&DAT_1239bf04);
  }
  if ((DAT_1239bf00 & 4) == 0) {
    DAT_1239bf00 = DAT_1239bf00 | 4;
    DAT_1239bf14 = -1;
    local_40c = &local_430;
    local_410 = (void **)local_420;
    local_430 = (void *)u_LifeTime_11d49074._0_4_;
    awStack_42c[0] = u_LifeTime_11d49074[2];
    awStack_42c[1] = u_LifeTime_11d49074[3];
    awStack_428[0] = u_LifeTime_11d49074[4];
    awStack_428[1] = u_LifeTime_11d49074[5];
    awStack_424[0] = u_LifeTime_11d49074[6];
    awStack_424[1] = u_LifeTime_11d49074[7];
    _local_420 = _local_420 & 0xffffffffffff0000;
    iVar2 = FUN_100e1bf0(&local_430);
    if (iVar2 == -1) {
      iVar2 = FUN_100e1c30(&local_430);
    }
    if (iVar2 != DAT_1239bf14) {
      DAT_1239bf14 = iVar2;
    }
    if ((local_40c != &local_430) && (local_40c != (void **)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_1239bf00 & 8) == 0) {
    DAT_1239bf00 = DAT_1239bf00 | 8;
    iVar2 = FUN_100e1cb0(DAT_1239bf14);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_1239bf18);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_1239bf14);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar7 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1239bf18);
    *(float *)(param_1 + 0x80) = (float)fVar7;
  }
  FUN_116d2ce0(param_2);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11a348f0 @ 11a348f0  size=798 ===== */
// calls: memset
// strings:
//   u"ActivityId"
//   u"PlayerLootChanceCoefficient"
//   u"GatherMinCoefficient"
//   u"GatherMaxCoefficient"

/* [RE-AUTO c0]
   calls: memset
   strings:
     "u"ActivityId""
     "u"PlayerLootChanceCoefficient""
     "u"GatherMinCoefficient""
     "u"GatherMaxCoefficient"" */

void __thiscall FUN_11a348f0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a965c & 1) == 0) {
    DAT_123a965c = DAT_123a965c | 1;
    FUN_100f67b0(L"ActivityId");
  }
  if ((DAT_123a965c & 2) == 0) {
    DAT_123a965c = DAT_123a965c | 2;
    iVar2 = FUN_100e1cb0(DAT_123a9658);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9660);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9658);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9660);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_123a965c & 4) == 0) {
    DAT_123a965c = DAT_123a965c | 4;
    FUN_100f67b0(L"PlayerLootChanceCoefficient");
  }
  if ((DAT_123a965c & 8) == 0) {
    DAT_123a965c = DAT_123a965c | 8;
    iVar2 = FUN_100e1cb0(DAT_123a9670);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9674);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9670);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9674);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if ((DAT_123a965c & 0x10) == 0) {
    DAT_123a965c = DAT_123a965c | 0x10;
    FUN_100f67b0(L"GatherMinCoefficient");
  }
  if ((DAT_123a965c & 0x20) == 0) {
    DAT_123a965c = DAT_123a965c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a9684);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9688);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9684);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a9688);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if ((DAT_123a965c & 0x40) == 0) {
    DAT_123a965c = DAT_123a965c | 0x40;
    FUN_100f67b0(L"GatherMaxCoefficient");
  }
  if (-1 < (char)DAT_123a965c) {
    DAT_123a965c = DAT_123a965c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a9698);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a969c);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9698);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
    FUN_11a89daa();
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123a969c);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_11a89daa();
  return;
}



